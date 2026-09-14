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

struct MenuItem_271 {
    char  f_key;
    struct StrView_27  f_description;
    enum Unit_8 (*  f_action )(    struct Pane_241 *  );
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
    struct MenuItem_271 _arr [3];
};

static  struct MenuItem_271 *   cast_dash_ptr279 (    struct Array_278 *  p398 ) {
    return ( (struct MenuItem_271 * ) (  p398 ) );
}

static  size_t   i32_dash_size280 (    int32_t  x690 ) {
    return ( (size_t ) ( (int64_t ) (  x690 ) ) );
}

static  struct Slice_270   from_dash_listlike277 (    struct Array_278 *  arr2200 ) {
    return ( (struct Slice_270) { .f_ptr = ( (  cast_dash_ptr279 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size280 ) ( ( 3 ) ) ) } );
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
    ( (  set_dash_cursors287 ) ( (  self4573 ) ,  ( temp395 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam285 (    struct Pane_241 *  pane4803 ) {
    return ( (  move_dash_to_dash_end286 ) ( (  pane4803 ) ) );
}

struct TakeWhile_402 {
    struct StrViewIter_293  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_401 {
    struct TakeWhile_402  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_401 Map_401_Map (  struct TakeWhile_402  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_401 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_401   into_dash_iter404 (    struct Map_401  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next406 (    struct TakeWhile_402 *  self989 ) {
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

static  struct Maybe_276   next405 (    struct Map_401 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next406 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_276_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce403 (    struct Map_401  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_401  it1124 = ( (  into_dash_iter404 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_276  dref1125 = ( (  next405 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_276_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_276_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_276_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp407 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp407);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp408;
    return (  temp408 );
}

static  size_t   lam409 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add356 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum400 (    struct Map_401  it1135 ) {
    return ( (  reduce403 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam409 ) ) );
}

static  struct TakeWhile_402   into_dash_iter411 (    struct TakeWhile_402  self986 ) {
    return (  self986 );
}

static  struct Map_401   map410 (    struct TakeWhile_402  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_402  it816 = ( (  into_dash_iter411 ) ( (  iterable813 ) ) );
    return ( ( Map_401_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_402   take_dash_while412 (    struct StrView_27  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_402) { .f_it = ( (  into_dash_iter296 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  bool   is_dash_whitespace414 (    struct Char_65  c1500 ) {
    return ( ( (  eq360 ( (  c1500 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) || (  eq360 ( (  c1500 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq360 ( (  c1500 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   lam413 (    struct Char_65  c4553 ) {
    return ( (  is_dash_whitespace414 ) ( (  c4553 ) ) );
}

static  size_t   lam415 (    struct Char_65  c4555 ) {
    return ( (  c4555 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line399 (    struct Pane_241 *  pane4549 ,    int32_t  line4551 ) {
    return ( (  size_dash_i32311 ) ( ( (  sum400 ) ( ( (  map410 ) ( ( (  take_dash_while412 ) ( ( (  line297 ) ( ( ( * (  pane4549 ) ) .f_buf ) ,  (  line4551 ) ) ) ,  (  lam413 ) ) ) ,  (  lam415 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented398 (    struct Pane_241 *  self4568 ) {
    struct Pos_26  cur4569 = ( ( * (  self4568 ) ) .f_cursor );
    int32_t  indent4570 = ( (  indent_dash_at_dash_line399 ) ( (  self4568 ) ,  ( (  cur4569 ) .f_line ) ) );
    struct Pos_26  temp416 = (  cur4569 );
    temp416 .  f_bi = (  indent4570 );
    ( (  set_dash_cursors287 ) ( (  self4568 ) ,  ( temp416 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam397 (    struct Pane_241 *  pane4805 ) {
    return ( (  move_dash_to_dash_beginning_dash_indented398 ) ( (  pane4805 ) ) );
}

static  enum Unit_8   lam417 (    struct Pane_241 *  pane4807 ) {
    return ( (  set_dash_cursors287 ) ( (  pane4807 ) ,  ( (struct Pos_26) { .f_line = (  from_dash_integral56 ( 0 ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
}

struct Array_419 {
    struct MenuItem_271 _arr [2];
};

static  struct MenuItem_271 *   cast_dash_ptr420 (    struct Array_419 *  p398 ) {
    return ( (struct MenuItem_271 * ) (  p398 ) );
}

static  struct Slice_270   from_dash_listlike418 (    struct Array_419 *  arr2200 ) {
    return ( (struct Slice_270) { .f_ptr = ( (  cast_dash_ptr420 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size280 ) ( ( 2 ) ) ) } );
}

static  enum Unit_8   lam422 (    struct Pane_241 *  pane4810 ) {
    return ( (  move_dash_to_dash_end286 ) ( (  pane4810 ) ) );
}

static  enum Unit_8   lam423 (    struct Pane_241 *  pane4812 ) {
    return ( Unit_8_Unit );
}

struct envunion425 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct envunion426 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Pane_241 *  );
    struct env244 env;
};

struct envunion427 {
    enum Unit_8  (*fun) (  struct env254*  ,    struct Editor_267 *  );
    struct env254 env;
};

struct envunion428 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  );
    struct env225 env;
};

struct envunion429 {
    enum Unit_8  (*fun) (  struct env238*  ,    struct Pane_241 *  );
    struct env238 env;
};

struct envunion430 {
    enum Unit_8  (*fun) (  struct env256*  ,    struct Editor_267 *  ,    struct StrConcat_78  );
    struct env256 env;
};

struct envunion431 {
    enum Unit_8  (*fun) (  struct env230*  ,    struct Pane_241 *  );
    struct env230 env;
};

struct envunion432 {
    enum Unit_8  (*fun) (  struct env232*  ,    struct Pane_241 *  );
    struct env232 env;
};

struct envunion433 {
    enum Unit_8  (*fun) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  );
    struct env247 env;
};

struct envunion434 {
    enum Unit_8  (*fun) (  struct env249*  ,    struct Pane_241 *  );
    struct env249 env;
};

struct env424 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct Menu_269  goto_dash_menu4808;
    ;
    ;
    struct env234 envinst234;
    ;
    struct env244 envinst244;
    ;
    ;
    ;
    struct env254 envinst254;
    ;
    struct Menu_269  space_dash_menu4813;
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
    ;
    ;
    ;
    ;
    struct env249 envinst249;
};

struct envunion436 {
    enum Unit_8  (*fun) (  struct env228*  ,    struct Pane_241 *  );
    struct env228 env;
};

struct envunion437 {
    enum Unit_8  (*fun) (  struct env262*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env262 env;
};

struct envunion438 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion439 {
    struct Maybe_74  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct Key_441 {
    enum {
        Key_441_Escape_t,
        Key_441_Enter_t,
        Key_441_Tab_t,
        Key_441_Backspace_t,
        Key_441_Char_t,
        Key_441_Ctrl_t,
        Key_441_Up_t,
        Key_441_Down_t,
        Key_441_Left_t,
        Key_441_Right_t,
        Key_441_Home_t,
        Key_441_End_t,
        Key_441_PageUp_t,
        Key_441_PageDown_t,
        Key_441_Delete_t,
        Key_441_Insert_t,
        Key_441_F1_t,
        Key_441_F2_t,
        Key_441_F3_t,
        Key_441_F4_t,
        Key_441_F5_t,
        Key_441_F6_t,
        Key_441_F7_t,
        Key_441_F8_t,
        Key_441_F9_t,
        Key_441_F10_t,
        Key_441_F11_t,
        Key_441_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_441_Char_s;
        struct {
            char  field0;
        } Key_441_Ctrl_s;
    } stuff;
};

static struct Key_441 Key_441_Char (  char  field0 ) {
    return ( struct Key_441 ) { .tag = Key_441_Char_t, .stuff = { .Key_441_Char_s = { .field0 = field0 } } };
};

static struct Key_441 Key_441_Ctrl (  char  field0 ) {
    return ( struct Key_441 ) { .tag = Key_441_Ctrl_t, .stuff = { .Key_441_Ctrl_s = { .field0 = field0 } } };
};

struct envunion440 {
    enum Unit_8  (*fun) (  struct env424*  ,    struct Editor_267 *  ,    struct Key_441  );
    struct env424 env;
};

struct envunion442 {
    enum Unit_8  (*fun) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  );
    struct env247 env;
};

struct envunion443 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  );
    struct env225 env;
};

struct envunion444 {
    enum Unit_8  (*fun) (  struct env265*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env265 env;
};

struct env435 {
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
    struct env424 envinst424;
    ;
    struct env247 envinst247;
    ;
    ;
    ;
    ;
    ;
    struct env225 envinst225;
    struct env265 envinst265;
    ;
    ;
};

struct Cell_449 {
    struct Char_65  f_c;
    struct Color_154  f_fg;
    struct Color_154  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_448 {
    struct Cell_449 *  f_ptr;
    size_t  f_count;
};

struct Screen_447 {
    enum CAllocator_10  f_al;
    struct Tui_97 *  f_tui;
    struct Slice_448  f_current;
    struct Slice_448  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_154  f_default_dash_fg;
    struct Color_154  f_default_dash_bg;
};

struct ScreenDims_450 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion446 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Screen_447 *  ,    struct Pane_241 *  ,    struct ScreenDims_450  ,    struct Config_272 *  );
    struct env222 env;
};

struct env445 {
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
};

static  enum CAllocator_10   idc451 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct Slice_454 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr456 (    const char* *  x377 ,    int64_t  count379 ) {
    const char*  temp457;
    return ( (const char* * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp457 ) ) ) ) ) ) ) ) );
}

static  size_t   op_dash_sub458 (    size_t  l294 ,    size_t  r296 ) {
    return ( (  l294 ) - (  r296 ) );
}

static  struct Slice_454   get455 (  ) {
    return ( (struct Slice_454) { .f_ptr = ( (  offset_dash_ptr456 ) ( ( _global_argv ) ,  (  from_dash_integral365 ( 1 ) ) ) ) , .f_count = (  op_dash_sub458 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct ConstStrIter_462 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_462   into_dash_iter464 (    struct ConstStrIter_462  self1665 ) {
    return (  self1665 );
}

static  uint8_t *   cast466 (    const char*  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  uint8_t   cast467 (    int32_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_351   next465 (    struct ConstStrIter_462 *  self1668 ) {
    uint8_t *  char_dash_ptr1669 = ( ( (  cast466 ) ( ( ( * (  self1668 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1670 = ( (  offset_dash_ptr353 ) ( (  char_dash_ptr1669 ) ,  ( (  size_dash_i64349 ) ( ( ( * (  self1668 ) ) .f_i ) ) ) ) );
    if ( (  eq324 ( ( * (  optr1670 ) ) , ( (  cast467 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    struct Char_65  char1671 = ( (  scan_dash_from_dash_mem339 ) ( (  optr1670 ) ) );
    (*  self1668 ) .f_i = (  op_dash_add356 ( ( ( * (  self1668 ) ) .f_i ) , ( (  char1671 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_351_Just ) ( (  char1671 ) ) );
}

static  size_t   reduce463 (    struct ConstStrIter_462  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct ConstStrIter_462  it1124 = ( (  into_dash_iter464 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next465 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp468 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp468);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp469;
    return (  temp469 );
}

static  size_t   lam470 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count461 (    struct ConstStrIter_462  it1129 ) {
    return ( (  reduce463 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam470 ) ) );
}

static  struct ConstStrIter_462   into_dash_iter472 (    const char*  self1662 ) {
    return ( (struct ConstStrIter_462) { .f_ogstr = (  self1662 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_462   chars471 (    const char*  self1677 ) {
    return ( (  into_dash_iter472 ) ( (  self1677 ) ) );
}

static  size_t   const_dash_str_dash_len460 (    const char*  s1926 ) {
    return ( (  count461 ) ( ( (  chars471 ) ( (  s1926 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str459 (    const char*  s2557 ) {
    size_t  len2558 = ( (  const_dash_str_dash_len460 ) ( (  s2557 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  cast466 ) ( (  s2557 ) ) ) , .f_count = (  len2558 ) } ) } );
}

struct Maybe_476 {
    enum {
        Maybe_476_None_t,
        Maybe_476_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_476_Just_s;
    } stuff;
};

static struct Maybe_476 Maybe_476_Just (  const char*  field0 ) {
    return ( struct Maybe_476 ) { .tag = Maybe_476_Just_t, .stuff = { .Maybe_476_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined477 (  ) {
    const char*  temp478;
    return (  temp478 );
}

static  const char*   or_dash_fail475 (    struct Maybe_476  x1353 ,    struct StrConcat_304  errmsg1355 ) {
    struct Maybe_476  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_476_None_t ) {
        ( (  panic303 ) ( (  errmsg1355 ) ) );
        return ( (  undefined477 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_476_Just_t ) {
            return ( dref1356 .stuff .Maybe_476_Just_s .field0 );
        }
    }
}

static  struct Maybe_476   try_dash_get479 (    struct Slice_454  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp302 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_476) { .tag = Maybe_476_None_t } );
    }
    const char* *  elem_dash_ptr2179 = ( (  offset_dash_ptr456 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_476_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  const char*   get474 (    struct Slice_454  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail475 ) ( ( (  try_dash_get479 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get473 (    struct Slice_454  self2195 ,    size_t  idx2197 ) {
    return ( (  get474 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

struct Maybe_480 {
    enum {
        Maybe_480_None_t,
        Maybe_480_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_117  field0;
        } Maybe_480_Just_s;
    } stuff;
};

static struct Maybe_480 Maybe_480_Just (  struct TextBuf_117  field0 ) {
    return ( struct Maybe_480 ) { .tag = Maybe_480_Just_t, .stuff = { .Maybe_480_Just_s = { .field0 = field0 } } };
};

struct envunion482 {
    struct Maybe_480  (*fun) (  struct env127*  ,    enum CAllocator_10  ,    struct StrView_27  );
    struct env127 env;
};

static  void *   cast_dash_ptr495 (    struct Line_12 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of496 (    struct Line_12 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Line_12 *   zeroed493 (  ) {
    struct Line_12 *  temp494;
    struct Line_12 *  x648 = (  temp494 );
    ( ( memset ) ( ( (  cast_dash_ptr495 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of496 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Line_12 *   null_dash_ptr492 (  ) {
    return ( (  zeroed493 ) ( ) );
}

static  struct Slice_11   empty491 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr492 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk490 (    enum CAllocator_10  al2436 ) {
    struct Slice_11  elements2437 = ( (  empty491 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env500 {
    struct List_9 *  list2513;
    struct env6 envinst6;
};

struct envunion501 {
    enum Unit_8  (*fun) (  struct env500*  ,    struct Line_12  );
    struct env500 env;
};

struct ArrayIter_502 {
    struct Array_52  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_502   into_dash_iter504 (    struct Array_52  self2102 ) {
    return ( (struct ArrayIter_502) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_505 {
    enum {
        Maybe_505_None_t,
        Maybe_505_Just_t,
    } tag;
    union {
        struct {
            struct Line_12  field0;
        } Maybe_505_Just_s;
    } stuff;
};

static struct Maybe_505 Maybe_505_Just (  struct Line_12  field0 ) {
    return ( struct Maybe_505 ) { .tag = Maybe_505_Just_t, .stuff = { .Maybe_505_Just_s = { .field0 = field0 } } };
};

struct StrConcat_511 {
    struct StrConcat_78  field0;
    int32_t  field1;
};

static struct StrConcat_511 StrConcat_511_StrConcat (  struct StrConcat_78  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_511 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_510 {
    struct StrConcat_511  field0;
    struct Char_65  field1;
};

static struct StrConcat_510 StrConcat_510_StrConcat (  struct StrConcat_511  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_510 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_514 {
    struct StrView_27  field0;
    struct StrConcat_510  field1;
};

static struct StrConcat_514 StrConcat_514_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_510  field1 ) {
    return ( struct StrConcat_514 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_513 {
    struct StrConcat_514  field0;
    struct Char_65  field1;
};

static struct StrConcat_513 StrConcat_513_StrConcat (  struct StrConcat_514  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_513 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str518 (    int32_t  self1417 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1417 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str517 (    struct StrConcat_511  self1302 ) {
    struct StrConcat_511  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str314 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str518 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str516 (    struct StrConcat_510  self1302 ) {
    struct StrConcat_510  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str517 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str515 (    struct StrConcat_514  self1302 ) {
    struct StrConcat_514  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str516 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str512 (    struct StrConcat_513  self1302 ) {
    struct StrConcat_513  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str515 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic509 (    struct StrConcat_510  errmsg1343 ) {
    ( (  print_dash_str512 ) ( ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_514_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Line_12 *   cast_dash_ptr519 (    struct Array_52 *  p398 ) {
    return ( (struct Line_12 * ) (  p398 ) );
}

static  struct Line_12 *   get_dash_ptr508 (    struct Array_52 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  p2030 = ( ( (  cast_dash_ptr519 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr346 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct Line_12   get507 (    struct Array_52 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr508 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_505   next506 (    struct ArrayIter_502 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_505) { .tag = Maybe_505_None_t } );
    }
    struct Line_12  e2111 = ( (  get507 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_505_Just ) ( (  e2111 ) ) );
}

static  enum Unit_8   for_dash_each499 (    struct Array_52  iterable1099 ,   struct envunion501  fun1101 ) {
    struct ArrayIter_502  temp503 = ( (  into_dash_iter504 ) ( (  iterable1099 ) ) );
    struct ArrayIter_502 *  it1102 = ( &temp503 );
    while ( ( true ) ) {
        struct Maybe_505  dref1103 = ( (  next506 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_505_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_505_Just_t ) {
                struct envunion501  temp520 = (  fun1101 );
                ( temp520.fun ( &temp520.env ,  ( dref1103 .stuff .Maybe_505_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct TypeSize_528 {
    size_t  f_size;
};

static  struct TypeSize_528   get_dash_typesize527 (  ) {
    struct Line_12  temp529;
    return ( (struct TypeSize_528) { .f_size = ( sizeof( ( (  temp529 ) ) ) ) } );
}

static  struct Line_12 *   cast_dash_ptr530 (    void *  p398 ) {
    return ( (struct Line_12 * ) (  p398 ) );
}

static  size_t   op_dash_mul531 (    size_t  l299 ,    size_t  r301 ) {
    return ( (  l299 ) * (  r301 ) );
}

static  struct Slice_11   allocate526 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize527 ) ( ) ) ) .f_size );
    struct Line_12 *  ptr2371 = ( (  cast_dash_ptr530 ) ( ( ( malloc ) ( (  op_dash_mul531 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env532 {
    ;
    ;
    struct Slice_11  new_dash_slice2453;
};

struct Tuple2_534 {
    struct Line_12  field0;
    int32_t  field1;
};

static struct Tuple2_534 Tuple2_534_Tuple2 (  struct Line_12  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_534 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion533 {
    enum Unit_8  (*fun) (  struct env532*  ,    struct Tuple2_534  );
    struct env532 env;
};

static  enum Unit_8   set536 (    struct Slice_11  slice2187 ,    size_t  i2189 ,    struct Line_12  x2191 ) {
    struct Line_12 *  ep2192 = ( (  get_dash_ptr345 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam535 (   struct env532* env ,    struct Tuple2_534  dref2454 ) {
    return ( (  set536 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size280 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct SliceIter_539 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_540 {
    int32_t  f_from;
};

struct Zip_538 {
    struct SliceIter_539  f_left_dash_it;
    struct FromIter_540  f_right_dash_it;
};

static  struct Zip_538   into_dash_iter542 (    struct Zip_538  self936 ) {
    return (  self936 );
}

struct Maybe_543 {
    enum {
        Maybe_543_None_t,
        Maybe_543_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_534  field0;
        } Maybe_543_Just_s;
    } stuff;
};

static struct Maybe_543 Maybe_543_Just (  struct Tuple2_534  field0 ) {
    return ( struct Maybe_543 ) { .tag = Maybe_543_Just_t, .stuff = { .Maybe_543_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_505   next545 (    struct SliceIter_539 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_505) { .tag = Maybe_505_None_t } );
    }
    struct Line_12  elem2258 = ( * ( (  offset_dash_ptr346 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_505_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_171   next546 (    struct FromIter_540 *  dref913 ) {
    int32_t  v915 = ( ( (* dref913 ) ) .f_from );
    (* dref913 ) .f_from = (  op_dash_add175 ( ( ( (* dref913 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_171_Just ) ( (  v915 ) ) );
}

static  struct Maybe_543   next544 (    struct Zip_538 *  self939 ) {
    struct Zip_538  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_505  dref941 = ( (  next545 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_505_None_t ) {
            return ( (struct Maybe_543) { .tag = Maybe_543_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_505_Just_t ) {
                struct Maybe_171  dref943 = ( (  next546 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_543) { .tag = Maybe_543_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next545 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next546 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_543_Just ) ( ( ( Tuple2_534_Tuple2 ) ( ( dref941 .stuff .Maybe_505_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each537 (    struct Zip_538  iterable1099 ,   struct envunion533  fun1101 ) {
    struct Zip_538  temp541 = ( (  into_dash_iter542 ) ( (  iterable1099 ) ) );
    struct Zip_538 *  it1102 = ( &temp541 );
    while ( ( true ) ) {
        struct Maybe_543  dref1103 = ( (  next544 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_543_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_543_Just_t ) {
                struct envunion533  temp547 = (  fun1101 );
                ( temp547.fun ( &temp547.env ,  ( dref1103 .stuff .Maybe_543_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_539   into_dash_iter549 (    struct Slice_11  self2250 ) {
    return ( (struct SliceIter_539) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_540   into_dash_iter550 (    struct FromIter_540  it911 ) {
    return (  it911 );
}

static  struct Zip_538   zip548 (    struct Slice_11  left947 ,    struct FromIter_540  right949 ) {
    struct SliceIter_539  left_dash_it950 = ( (  into_dash_iter549 ) ( (  left947 ) ) );
    struct FromIter_540  right_dash_it951 = ( (  into_dash_iter550 ) ( (  right949 ) ) );
    return ( (struct Zip_538) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  struct FromIter_540   from551 (    int32_t  f908 ) {
    return ( (struct FromIter_540) { .f_from = (  f908 ) } );
}

static  void *   cast_dash_ptr553 (    struct Line_12 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free552 (    enum CAllocator_10  dref2373 ,    struct Slice_11  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr553 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full525 (   struct env1* env ,    struct List_9 *  list2452 ) {
    if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate526 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2453 = ( (  allocate526 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul531 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env532 envinst532 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion533  fun2457 = ( (struct envunion533){ .fun = (  enum Unit_8  (*) (  struct env532*  ,    struct Tuple2_534  ) )lam535 , .env =  envinst532 } );
            ( (  for_dash_each537 ) ( ( (  zip548 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free552 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add523 (   struct env6* env ,    struct List_9 *  list2460 ,    struct Line_12  elem2462 ) {
    struct envunion7  temp524 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full525 , .env =  env->envinst1 } );
    ( temp524.fun ( &temp524.env ,  (  list2460 ) ) );
    ( (  set536 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add356 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam521 (   struct env500* env ,    struct Line_12  x2517 ) {
    struct envunion47  temp522 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add523 , .env =  env->envinst6 } );
    return ( temp522.fun ( &temp522.env ,  ( env->list2513 ) ,  (  x2517 ) ) );
}

static  enum Unit_8   add_dash_all498 (   struct env46* env ,    struct List_9 *  list2513 ,    struct Array_52  it2515 ) {
    struct env500 envinst500 = {
        .list2513 =  list2513 ,
        .envinst6 = env->envinst6 ,
    };
    ( (  for_dash_each499 ) ( (  it2515 ) ,  ( (struct envunion501){ .fun = (  enum Unit_8  (*) (  struct env500*  ,    struct Line_12  ) )lam521 , .env =  envinst500 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter488 (   struct env50* env ,    struct Array_52  iter2548 ,    enum CAllocator_10  al2550 ) {
    struct List_9  temp489 = ( (  mk490 ) ( (  al2550 ) ) );
    struct List_9 *  list2551 = ( &temp489 );
    struct envunion51  temp497 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Array_52  ) )add_dash_all498 , .env =  env->envinst46 } );
    ( temp497.fun ( &temp497.env ,  (  list2551 ) ,  (  iter2548 ) ) );
    return ( * (  list2551 ) );
}

static  struct Array_52   from_dash_listlike554 (    struct Array_52 *  self369 ) {
    return ( * (  self369 ) );
}

static  void *   cast_dash_ptr562 (    struct Highlight_17 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of563 (    struct Highlight_17 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Highlight_17 *   zeroed560 (  ) {
    struct Highlight_17 *  temp561;
    struct Highlight_17 *  x648 = (  temp561 );
    ( ( memset ) ( ( (  cast_dash_ptr562 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of563 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Highlight_17 *   null_dash_ptr559 (  ) {
    return ( (  zeroed560 ) ( ) );
}

static  struct Slice_16   empty558 (  ) {
    return ( (struct Slice_16) { .f_ptr = ( (  null_dash_ptr559 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_15   mk557 (    enum CAllocator_10  al2436 ) {
    struct Slice_16  elements2437 = ( (  empty558 ) ( ) );
    return ( (struct List_15) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_12   mk_dash_line556 (    struct List_13  initial4019 ) {
    return ( (struct Line_12) { .f_line = (  initial4019 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk557 ) ( ( (  initial4019 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr569 (    uint8_t * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of570 (    uint8_t *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  uint8_t *   zeroed567 (  ) {
    uint8_t *  temp568;
    uint8_t *  x648 = (  temp568 );
    ( ( memset ) ( ( (  cast_dash_ptr569 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of570 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint8_t *   null_dash_ptr566 (  ) {
    return ( (  zeroed567 ) ( ) );
}

static  struct Slice_14   empty565 (  ) {
    return ( (struct Slice_14) { .f_ptr = ( (  null_dash_ptr566 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_13   mk564 (    enum CAllocator_10  al2436 ) {
    struct Slice_14  elements2437 = ( (  empty565 ) ( ) );
    return ( (struct List_13) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr577 (    struct Changeset_32 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of578 (    struct Changeset_32 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Changeset_32 *   zeroed575 (  ) {
    struct Changeset_32 *  temp576;
    struct Changeset_32 *  x648 = (  temp576 );
    ( ( memset ) ( ( (  cast_dash_ptr577 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of578 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Changeset_32 *   null_dash_ptr574 (  ) {
    return ( (  zeroed575 ) ( ) );
}

static  struct Slice_31   empty573 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr574 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk572 (    enum CAllocator_10  al2436 ) {
    struct Slice_31  elements2437 = ( (  empty573 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_118   mk_dash_actions571 (    enum CAllocator_10  al4008 ) {
    return ( (struct Actions_118) { .f_list = ( (  mk572 ) ( (  al4008 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_119_NoChangeset ) } );
}

static  struct TextBuf_117   mk486 (   struct env125* env ,    enum CAllocator_10  al4124 ) {
    struct envunion126  temp487 = ( (struct envunion126){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  ) )from_dash_iter488 , .env =  env->envinst50 } );
    struct Array_52  temp555 = ( (struct Array_52) { ._arr = { ( (  mk_dash_line556 ) ( ( (  mk564 ) ( (  al4124 ) ) ) ) ) } } );
    return ( (struct TextBuf_117) { .f_al = (  al4124 ) , .f_buf = ( temp487.fun ( &temp487.env ,  ( (  from_dash_listlike554 ) ( ( &temp555 ) ) ) ,  (  al4124 ) ) ) , .f_actions = ( (  mk_dash_actions571 ) ( (  al4124 ) ) ) , .f_filename = ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) , .f_filetype = ( Filetype_120_Text ) } );
}

static  size_t   min587 (    size_t  l1367 ,    size_t  r1369 ) {
    if ( (  cmp302 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Slice_14   subslice586 (    struct Slice_14  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    uint8_t *  begin_dash_ptr2209 = ( (  offset_dash_ptr353 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub458 ( ( (  min587 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct Slice_14   from585 (    struct Slice_14  slice2213 ,    size_t  from2215 ) {
    return ( (  subslice586 ) ( (  slice2213 ) ,  (  from2215 ) ,  ( (  slice2213 ) .f_count ) ) );
}

static  struct StrView_27   byte_dash_substr_dash_from584 (    struct StrView_27  s2614 ,    size_t  from2616 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from585 ) ( ( (  s2614 ) .f_contents ) ,  (  from2616 ) ) ) } );
}

static  struct StrView_27   drop_dash_while581 (    struct StrView_27  sv2643 ,    bool (*  fun2645 )(    struct Char_65  ) ) {
    size_t  from2646 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_293  temp582 =  into_dash_iter294 ( ( (  chars295 ) ( (  sv2643 ) ) ) );
    while (true) {
        struct Maybe_351  __cond583 =  next352 (&temp582);
        if (  __cond583 .tag == 0 ) {
            break;
        }
        struct Char_65  c2648 =  __cond583 .stuff .Maybe_351_Just_s .field0;
        if ( ( ! ( (  fun2645 ) ( (  c2648 ) ) ) ) ) {
            break;
        }
        from2646 = (  op_dash_add356 ( (  from2646 ) , ( (  c2648 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from584 ) ( (  sv2643 ) ,  (  from2646 ) ) );
}

static  bool   lam588 (    struct Char_65  c4031 ) {
    return (  eq360 ( (  c4031 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) );
}

static  uint8_t   undefined592 (  ) {
    uint8_t  temp593;
    return (  temp593 );
}

static  uint8_t   or_dash_fail591 (    struct Maybe_74  x1353 ,    struct StrConcat_304  errmsg1355 ) {
    struct Maybe_74  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_74_None_t ) {
        ( (  panic303 ) ( (  errmsg1355 ) ) );
        return ( (  undefined592 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_74_Just_t ) {
            return ( dref1356 .stuff .Maybe_74_Just_s .field0 );
        }
    }
}

static  struct Maybe_74   try_dash_get594 (    struct Slice_14  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp302 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    }
    uint8_t *  elem_dash_ptr2179 = ( (  offset_dash_ptr353 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_74_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  uint8_t   get590 (    struct Slice_14  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail591 ) ( ( (  try_dash_get594 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get589 (    struct Slice_14  self2195 ,    size_t  idx2197 ) {
    return ( (  get590 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  uint8_t   ascii_dash_u8595 (    char  c1488 ) {
    return ( ( (uint8_t ) (  c1488 ) ) );
}

static  struct StrView_27   byte_dash_substr596 (    struct StrView_27  s2607 ,    size_t  from2609 ,    size_t  to2611 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice586 ) ( ( (  s2607 ) .f_contents ) ,  (  from2609 ) ,  (  to2611 ) ) ) } );
}

static  struct Maybe_85   extension580 (    struct StrView_27  path4029 ) {
    struct StrView_27  path4032 = ( (  drop_dash_while581 ) ( (  path4029 ) ,  (  lam588 ) ) );
    size_t  i4033 = ( ( (  path4032 ) .f_contents ) .f_count );
    while ( (  cmp302 ( (  i4033 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i4033 = (  op_dash_sub458 ( (  i4033 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq324 ( (  elem_dash_get589 ( ( (  path4032 ) .f_contents ) , (  i4033 ) ) ) , ( (  ascii_dash_u8595 ) ( ( (  from_dash_charlike282 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq283 ( (  i4033 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_27  ext4034 = ( (  byte_dash_substr596 ) ( (  path4032 ) ,  (  op_dash_add356 ( (  i4033 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path4032 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_85_Just ) ( (  ext4034 ) ) );
}

struct Array_598 {
    struct StrView_27 _arr [2];
};

struct env600 {
    ;
    struct StrView_27  x1180;
};

struct envunion601 {
    bool  (*fun) (  struct env600*  ,    struct StrView_27  );
    struct env600 env;
};

struct env603 {
    struct envunion601  fun1160;
};

struct envunion604 {
    bool  (*fun) (  struct env603*  ,    struct StrView_27  ,    bool  );
    struct env603 env;
};

struct ArrayIter_605 {
    struct Array_598  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_605   into_dash_iter606 (    struct Array_598  self2102 ) {
    return ( (struct ArrayIter_605) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr610 (    struct Array_598 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   offset_dash_ptr611 (    struct StrView_27 *  x377 ,    int64_t  count379 ) {
    struct StrView_27  temp612;
    return ( (struct StrView_27 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp612 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr609 (    struct Array_598 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr610 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr611 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get608 (    struct Array_598 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr609 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_85   next607 (    struct ArrayIter_605 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_27  e2111 = ( (  get608 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2111 ) ) );
}

static  bool   reduce602 (    struct Array_598  iterable1118 ,    bool  base1120 ,   struct envunion604  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_605  it1124 = ( (  into_dash_iter606 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1125 = ( (  next607 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_85_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_85_Just_t ) {
                struct envunion604  temp613 = (  fun1122 );
                x1123 = ( temp613.fun ( &temp613.env ,  ( dref1125 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp614 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp614);
    abort ( );
    ( Unit_8_Unit );
    bool  temp615;
    return (  temp615 );
}

static  bool   lam616 (   struct env603* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion601  temp617 = ( env->fun1160 );
    return ( ( temp617.fun ( &temp617.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any599 (    struct Array_598  it1158 ,   struct envunion601  fun1160 ) {
    struct env603 envinst603 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce602 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion604){ .fun = (  bool  (*) (  struct env603*  ,    struct StrView_27  ,    bool  ) )lam616 , .env =  envinst603 } ) ) );
}

struct SliceIter_623 {
    struct Slice_14  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_622 {
    struct SliceIter_623  f_left_dash_it;
    struct SliceIter_623  f_right_dash_it;
};

struct Tuple2_624 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_624 Tuple2_624_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_624 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env626 {
    bool (*  fun1151 )(    struct Tuple2_624  );
};

struct envunion627 {
    bool  (*fun) (  struct env626*  ,    struct Tuple2_624  ,    bool  );
    struct env626 env;
};

static  struct Zip_622   into_dash_iter628 (    struct Zip_622  self936 ) {
    return (  self936 );
}

struct Maybe_629 {
    enum {
        Maybe_629_None_t,
        Maybe_629_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_624  field0;
        } Maybe_629_Just_s;
    } stuff;
};

static struct Maybe_629 Maybe_629_Just (  struct Tuple2_624  field0 ) {
    return ( struct Maybe_629 ) { .tag = Maybe_629_Just_t, .stuff = { .Maybe_629_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_74   next631 (    struct SliceIter_623 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    }
    uint8_t  elem2258 = ( * ( (  offset_dash_ptr353 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_74_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_629   next630 (    struct Zip_622 *  self939 ) {
    struct Zip_622  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_74  dref941 = ( (  next631 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_74_None_t ) {
            return ( (struct Maybe_629) { .tag = Maybe_629_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_74_Just_t ) {
                struct Maybe_74  dref943 = ( (  next631 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_74_None_t ) {
                    return ( (struct Maybe_629) { .tag = Maybe_629_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_74_Just_t ) {
                        ( (  next631 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next631 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_629_Just ) ( ( ( Tuple2_624_Tuple2 ) ( ( dref941 .stuff .Maybe_74_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_74_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce625 (    struct Zip_622  iterable1118 ,    bool  base1120 ,   struct envunion627  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Zip_622  it1124 = ( (  into_dash_iter628 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_629  dref1125 = ( (  next630 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_629_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_629_Just_t ) {
                struct envunion627  temp632 = (  fun1122 );
                x1123 = ( temp632.fun ( &temp632.env ,  ( dref1125 .stuff .Maybe_629_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp633 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp633);
    abort ( );
    ( Unit_8_Unit );
    bool  temp634;
    return (  temp634 );
}

static  bool   lam635 (   struct env626* env ,    struct Tuple2_624  e1153 ,    bool  x1155 ) {
    return ( ( ( env->fun1151 ) ( (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all621 (    struct Zip_622  it1149 ,    bool (*  fun1151 )(    struct Tuple2_624  ) ) {
    struct env626 envinst626 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce625 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion627){ .fun = (  bool  (*) (  struct env626*  ,    struct Tuple2_624  ,    bool  ) )lam635 , .env =  envinst626 } ) ) );
}

static  struct SliceIter_623   into_dash_iter637 (    struct Slice_14  self2250 ) {
    return ( (struct SliceIter_623) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_622   zip636 (    struct Slice_14  left947 ,    struct Slice_14  right949 ) {
    struct SliceIter_623  left_dash_it950 = ( (  into_dash_iter637 ) ( (  left947 ) ) );
    struct SliceIter_623  right_dash_it951 = ( (  into_dash_iter637 ) ( (  right949 ) ) );
    return ( (struct Zip_622) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  bool   lam638 (    struct Tuple2_624  dref2290 ) {
    return (  eq324 ( ( dref2290 .field0 ) , ( dref2290 .field1 ) ) );
}

static  bool   eq620 (    struct Slice_14  l2287 ,    struct Slice_14  r2289 ) {
    if ( ( !  eq283 ( ( (  l2287 ) .f_count ) , ( (  r2289 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all621 ) ( ( (  zip636 ) ( (  l2287 ) ,  (  r2289 ) ) ) ,  (  lam638 ) ) );
}

static  bool   eq619 (    struct StrView_27  l2651 ,    struct StrView_27  r2653 ) {
    return (  eq620 ( ( (  l2651 ) .f_contents ) , ( (  r2653 ) .f_contents ) ) );
}

static  bool   lam618 (   struct env600* env ,    struct StrView_27  e1184 ) {
    return (  eq619 ( (  e1184 ) , ( env->x1180 ) ) );
}

static  bool   one_dash_of597 (    struct StrView_27  x1180 ,    struct Array_598  it1182 ) {
    struct env600 envinst600 = {
        .x1180 =  x1180 ,
    };
    return ( (  any599 ) ( (  it1182 ) ,  ( (struct envunion601){ .fun = (  bool  (*) (  struct env600*  ,    struct StrView_27  ) )lam618 , .env =  envinst600 } ) ) );
}

static  struct Array_598   from_dash_listlike639 (    struct Array_598 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct StrView_27   from_dash_charlike642 (    uint8_t *  ptr81 ,    size_t  count83 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr81 ) , .f_count = (  count83 ) } ) } );
}

static  enum Filetype_120   detect_dash_filetype_dash_from_dash_filename579 (    struct StrView_27  filename4026 ) {
    struct Maybe_85  mext4035 = ( (  extension580 ) ( (  filename4026 ) ) );
    struct Maybe_85  dref4036 = (  mext4035 );
    if ( dref4036.tag == Maybe_85_None_t ) {
        return ( Filetype_120_Text );
    }
    else {
        if ( dref4036.tag == Maybe_85_Just_t ) {
            struct Array_598  temp640 = ( (struct Array_598) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"kkc" ) ,  ( 3 ) ) ) } } );
            if ( ( (  one_dash_of597 ) ( ( dref4036 .stuff .Maybe_85_Just_s .field0 ) ,  ( (  from_dash_listlike639 ) ( ( &temp640 ) ) ) ) ) ) {
                return ( Filetype_120_KC );
            } else {
                if ( (  eq619 ( ( dref4036 .stuff .Maybe_85_Just_s .field0 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                    return ( Filetype_120_Markdown );
                } else {
                    if ( (  eq619 ( ( dref4036 .stuff .Maybe_85_Just_s .field0 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"gcode" ) ,  ( 5 ) ) ) ) ) ) {
                        return ( Filetype_120_GCode );
                    } else {
                        struct Array_598  temp641 = ( (struct Array_598) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"bf" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) } } );
                        if ( ( (  one_dash_of597 ) ( ( dref4036 .stuff .Maybe_85_Just_s .field0 ) ,  ( (  from_dash_listlike639 ) ( ( &temp641 ) ) ) ) ) ) {
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

struct TypeSize_646 {
    size_t  f_size;
};

static  struct TypeSize_646   get_dash_typesize645 (  ) {
    uint8_t  temp647;
    return ( (struct TypeSize_646) { .f_size = ( sizeof( ( (  temp647 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr648 (    void *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   allocate644 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize645 ) ( ) ) ) .f_size );
    uint8_t *  ptr2371 = ( (  cast_dash_ptr648 ) ( ( ( malloc ) ( (  op_dash_mul531 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_14) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct StrConcat_651 {
    struct StrConcat_305  field0;
    struct StrView_27  field1;
};

static struct StrConcat_651 StrConcat_651_StrConcat (  struct StrConcat_305  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_651 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_654 {
    struct StrView_27  field0;
    struct StrConcat_651  field1;
};

static struct StrConcat_654 StrConcat_654_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_651  field1 ) {
    return ( struct StrConcat_654 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_653 {
    struct StrConcat_654  field0;
    struct Char_65  field1;
};

static struct StrConcat_653 StrConcat_653_StrConcat (  struct StrConcat_654  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_653 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str656 (    struct StrConcat_651  self1302 ) {
    struct StrConcat_651  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str313 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str310 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str655 (    struct StrConcat_654  self1302 ) {
    struct StrConcat_654  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str656 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str652 (    struct StrConcat_653  self1302 ) {
    struct StrConcat_653  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str655 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic650 (    struct StrConcat_651  errmsg1343 ) {
    ( (  print_dash_str652 ) ( ( ( StrConcat_653_StrConcat ) ( ( ( StrConcat_654_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Zip_658 {
    struct SliceIter_623  f_left_dash_it;
    struct FromIter_540  f_right_dash_it;
};

struct env659 {
    ;
    struct Slice_14  dest2281;
    ;
};

struct Tuple2_661 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_661 Tuple2_661_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_661 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion660 {
    enum Unit_8  (*fun) (  struct env659*  ,    struct Tuple2_661  );
    struct env659 env;
};

static  struct Zip_658   into_dash_iter663 (    struct Zip_658  self936 ) {
    return (  self936 );
}

struct Maybe_664 {
    enum {
        Maybe_664_None_t,
        Maybe_664_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_661  field0;
        } Maybe_664_Just_s;
    } stuff;
};

static struct Maybe_664 Maybe_664_Just (  struct Tuple2_661  field0 ) {
    return ( struct Maybe_664 ) { .tag = Maybe_664_Just_t, .stuff = { .Maybe_664_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_664   next665 (    struct Zip_658 *  self939 ) {
    struct Zip_658  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_74  dref941 = ( (  next631 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_74_None_t ) {
            return ( (struct Maybe_664) { .tag = Maybe_664_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_74_Just_t ) {
                struct Maybe_171  dref943 = ( (  next546 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_664) { .tag = Maybe_664_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next631 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next546 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_664_Just ) ( ( ( Tuple2_661_Tuple2 ) ( ( dref941 .stuff .Maybe_74_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each657 (    struct Zip_658  iterable1099 ,   struct envunion660  fun1101 ) {
    struct Zip_658  temp662 = ( (  into_dash_iter663 ) ( (  iterable1099 ) ) );
    struct Zip_658 *  it1102 = ( &temp662 );
    while ( ( true ) ) {
        struct Maybe_664  dref1103 = ( (  next665 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_664_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_664_Just_t ) {
                struct envunion660  temp666 = (  fun1101 );
                ( temp666.fun ( &temp666.env ,  ( dref1103 .stuff .Maybe_664_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_658   zip667 (    struct Slice_14  left947 ,    struct FromIter_540  right949 ) {
    struct SliceIter_623  left_dash_it950 = ( (  into_dash_iter637 ) ( (  left947 ) ) );
    struct FromIter_540  right_dash_it951 = ( (  into_dash_iter550 ) ( (  right949 ) ) );
    return ( (struct Zip_658) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  uint8_t *   get_dash_ptr670 (    struct Slice_14  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr2173 = ( (  offset_dash_ptr353 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set669 (    struct Slice_14  slice2187 ,    size_t  i2189 ,    uint8_t  x2191 ) {
    uint8_t *  ep2192 = ( (  get_dash_ptr670 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam668 (   struct env659* env ,    struct Tuple2_661  dref2282 ) {
    return ( (  set669 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size280 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to649 (    struct Slice_14  src2279 ,    struct Slice_14  dest2281 ) {
    if ( (  cmp302 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic650 ) ( ( ( StrConcat_651_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env659 envinst659 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each657 ) ( ( (  zip667 ) ( (  src2279 ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion660){ .fun = (  enum Unit_8  (*) (  struct env659*  ,    struct Tuple2_661  ) )lam668 , .env =  envinst659 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   char_dash_u8671 (    struct Char_65  c1440 ) {
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

static  struct StrView_27   clone_dash_0643 (    struct StrView_27  s2576 ,    enum CAllocator_10  al2578 ) {
    size_t  cnt2579 = ( ( (  s2576 ) .f_contents ) .f_count );
    struct Slice_14  nus2580 = ( (  allocate644 ) ( (  al2578 ) ,  (  op_dash_add356 ( (  cnt2579 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to649 ) ( ( (  s2576 ) .f_contents ) ,  (  nus2580 ) ) );
    ( (  set669 ) ( (  nus2580 ) ,  (  cnt2579 ) ,  ( (  char_dash_u8671 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  nus2580 ) .f_ptr ) , .f_count = (  cnt2579 ) } ) } );
}

static  const char*   from_dash_charlike673 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
}

static  void *   cast_dash_ptr678 (    FILE * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of679 (    FILE *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  FILE *   zeroed676 (  ) {
    FILE *  temp677;
    FILE *  x648 = (  temp677 );
    ( ( memset ) ( ( (  cast_dash_ptr678 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of679 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  FILE *   null_dash_ptr675 (  ) {
    return ( (  zeroed676 ) ( ) );
}

static  bool   is_dash_ptr_dash_null674 (    FILE *  p658 ) {
    return ( (  p658 ) == ( (  null_dash_ptr675 ) ( ) ) );
}

static  int32_t   seek_dash_end680 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  int32_t   seek_dash_set681 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct Char_65   nullchar682 (  ) {
    return ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_85   try_dash_read_dash_contents672 (    const char*  filename3164 ,    enum CAllocator_10  al3166 ) {
    FILE *  file3167 = ( ( fopen ) ( (  filename3164 ) ,  ( (  from_dash_charlike673 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null674 ) ( (  file3167 ) ) ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    ( ( fseek ) ( (  file3167 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end680 ) ( ) ) ) );
    int32_t  file_dash_size3168 = ( ( ftell ) ( (  file3167 ) ) );
    ( ( fseek ) ( (  file3167 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set681 ) ( ) ) ) );
    struct Slice_14  file_dash_buf3169 = ( ( (  allocate644 ) ( (  al3166 ) ,  (  op_dash_add356 ( ( (  i32_dash_size280 ) ( (  file_dash_size3168 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3169 ) .f_ptr ) ,  (  file_dash_size3168 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file3167 ) ) );
    ( (  set669 ) ( (  file_dash_buf3169 ) ,  ( (  i32_dash_size280 ) ( (  file_dash_size3168 ) ) ) ,  ( (  char_dash_u8671 ) ( ( (  nullchar682 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3167 ) ) );
    struct StrView_27  str3170 = ( (struct StrView_27) { .f_contents = ( (  subslice586 ) ( (  file_dash_buf3169 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub458 ( ( (  file_dash_buf3169 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_85_Just ) ( (  str3170 ) ) );
}

static  const char*   cast684 (    uint8_t *  x395 ) {
    return ( (const char* ) (  x395 ) );
}

static  const char*   as_dash_const_dash_str683 (    struct StrView_27  s2583 ) {
    return ( (  cast684 ) ( ( ( (  s2583 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr687 (    uint8_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free686 (    enum CAllocator_10  dref2373 ,    struct Slice_14  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr687 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free685 (    struct StrView_27  s2591 ,    enum CAllocator_10  al2593 ) {
    ( (  free686 ) ( (  al2593 ) ,  ( (struct Slice_14) { .f_ptr = ( ( (  s2591 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

struct Tuple2_689 {
    struct Maybe_74  field0;
    struct Maybe_74  field1;
};

static struct Tuple2_689 Tuple2_689_Tuple2 (  struct Maybe_74  field0 ,  struct Maybe_74  field1 ) {
    return ( struct Tuple2_689 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq688 (    struct Maybe_74  l150 ,    struct Maybe_74  r152 ) {
    struct Tuple2_689  dref153 = ( ( Tuple2_689_Tuple2 ) ( (  l150 ) ,  (  r152 ) ) );
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

static  enum Ordering_174   cmp693 (    struct Pos_26  l3838 ,    struct Pos_26  r3840 ) {
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

static  struct Pos_26   min692 (    struct Pos_26  l1367 ,    struct Pos_26  r1369 ) {
    if ( (  cmp693 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Pos_26   max694 (    struct Pos_26  l1372 ,    struct Pos_26  r1374 ) {
    if ( (  cmp693 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  bool   eq696 (    int32_t  l115 ,    int32_t  r117 ) {
    return ( (  l115 ) == (  r117 ) );
}

static  bool   eq695 (    struct Pos_26  l3833 ,    struct Pos_26  r3835 ) {
    return ( (  eq696 ( ( (  l3833 ) .f_line ) , ( (  r3835 ) .f_line ) ) ) && (  eq696 ( ( (  l3833 ) .f_bi ) , ( (  r3835 ) .f_bi ) ) ) );
}

static  size_t   size697 (    struct List_9 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

static  enum Unit_8   set701 (    struct List_9 *  list2426 ,    size_t  i2428 ,    struct Line_12  elem2430 ) {
    if ( ( (  cmp302 ( (  i2428 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2428 ) , ( ( * (  list2426 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2428 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2426 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set536 ) ( ( ( * (  list2426 ) ) .f_elements ) ,  (  i2428 ) ,  (  elem2430 ) ) );
    return ( Unit_8_Unit );
}

struct env708 {
    struct List_13 *  list2513;
    struct env19 envinst19;
};

struct envunion709 {
    enum Unit_8  (*fun) (  struct env708*  ,    uint8_t  );
    struct env708 env;
};

static  enum Unit_8   for_dash_each707 (    struct Slice_14  iterable1099 ,   struct envunion709  fun1101 ) {
    struct SliceIter_623  temp710 = ( (  into_dash_iter637 ) ( (  iterable1099 ) ) );
    struct SliceIter_623 *  it1102 = ( &temp710 );
    while ( ( true ) ) {
        struct Maybe_74  dref1103 = ( (  next631 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_74_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_74_Just_t ) {
                struct envunion709  temp711 = (  fun1101 );
                ( temp711.fun ( &temp711.env ,  ( dref1103 .stuff .Maybe_74_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env717 {
    ;
    ;
    struct Slice_14  new_dash_slice2453;
};

struct envunion718 {
    enum Unit_8  (*fun) (  struct env717*  ,    struct Tuple2_661  );
    struct env717 env;
};

static  enum Unit_8   lam719 (   struct env717* env ,    struct Tuple2_661  dref2454 ) {
    return ( (  set669 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size280 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

static  enum Unit_8   for_dash_each720 (    struct Zip_658  iterable1099 ,   struct envunion718  fun1101 ) {
    struct Zip_658  temp721 = ( (  into_dash_iter663 ) ( (  iterable1099 ) ) );
    struct Zip_658 *  it1102 = ( &temp721 );
    while ( ( true ) ) {
        struct Maybe_664  dref1103 = ( (  next665 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_664_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_664_Just_t ) {
                struct envunion718  temp722 = (  fun1101 );
                ( temp722.fun ( &temp722.env ,  ( dref1103 .stuff .Maybe_664_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full716 (   struct env2* env ,    struct List_13 *  list2452 ) {
    if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate644 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_14  new_dash_slice2453 = ( (  allocate644 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul531 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env717 envinst717 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion718  fun2457 = ( (struct envunion718){ .fun = (  enum Unit_8  (*) (  struct env717*  ,    struct Tuple2_661  ) )lam719 , .env =  envinst717 } );
            ( (  for_dash_each720 ) ( ( (  zip667 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free686 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add714 (   struct env19* env ,    struct List_13 *  list2460 ,    uint8_t  elem2462 ) {
    struct envunion20  temp715 = ( (struct envunion20){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_13 *  ) )grow_dash_if_dash_full716 , .env =  env->envinst2 } );
    ( temp715.fun ( &temp715.env ,  (  list2460 ) ) );
    ( (  set669 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add356 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam712 (   struct env708* env ,    uint8_t  x2517 ) {
    struct envunion49  temp713 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env19*  ,    struct List_13 *  ,    uint8_t  ) )add714 , .env =  env->envinst19 } );
    return ( temp713.fun ( &temp713.env ,  ( env->list2513 ) ,  (  x2517 ) ) );
}

static  enum Unit_8   add_dash_all706 (   struct env48* env ,    struct List_13 *  list2513 ,    struct Slice_14  it2515 ) {
    struct env708 envinst708 = {
        .list2513 =  list2513 ,
        .envinst19 = env->envinst19 ,
    };
    ( (  for_dash_each707 ) ( (  it2515 ) ,  ( (struct envunion709){ .fun = (  enum Unit_8  (*) (  struct env708*  ,    uint8_t  ) )lam712 , .env =  envinst708 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_13   from_dash_iter703 (   struct env53* env ,    struct Slice_14  iter2548 ,    enum CAllocator_10  al2550 ) {
    struct List_13  temp704 = ( (  mk564 ) ( (  al2550 ) ) );
    struct List_13 *  list2551 = ( &temp704 );
    struct envunion54  temp705 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all706 , .env =  env->envinst48 } );
    ( temp705.fun ( &temp705.env ,  (  list2551 ) ,  (  iter2548 ) ) );
    return ( * (  list2551 ) );
}

static  struct StrView_27   or_dash_else724 (    struct Maybe_85  self1360 ,    struct StrView_27  alt1362 ) {
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

struct LineIter_726 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  struct Maybe_85   next727 (    struct LineIter_726 *  self2686 ) {
    if ( (  cmp302 ( ( ( * (  self2686 ) ) .f_last ) , ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    size_t  i2687 = ( ( * (  self2686 ) ) .f_last );
    while ( ( (  cmp302 ( (  i2687 ) , ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq324 ( ( (  get590 ) ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) ,  (  i2687 ) ) ) , ( (  char_dash_u8671 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2687 = (  op_dash_add356 ( (  i2687 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2688 = ( (  byte_dash_substr596 ) ( ( ( * (  self2686 ) ) .f_og ) ,  ( ( * (  self2686 ) ) .f_last ) ,  (  i2687 ) ) );
    if ( (  cmp302 ( (  i2687 ) , ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2687 = (  op_dash_add356 ( (  i2687 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2686 ) .f_last = (  i2687 );
    return ( ( Maybe_85_Just ) ( (  line2688 ) ) );
}

static  struct LineIter_726   into_dash_iter729 (    struct LineIter_726  self2683 ) {
    return (  self2683 );
}

static  struct Maybe_85   head725 (    struct LineIter_726  it1167 ) {
    struct LineIter_726  temp728 = ( (  into_dash_iter729 ) ( (  it1167 ) ) );
    return ( (  next727 ) ( ( &temp728 ) ) );
}

static  struct LineIter_726   lines730 (    struct StrView_27  s2680 ) {
    return ( (struct LineIter_726) { .f_og = (  s2680 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env735 {
    struct Char_65  c2664;
    ;
};

struct envunion736 {
    bool  (*fun) (  struct env735*  ,    struct Char_65  );
    struct env735 env;
};

struct SplitIter_734 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion736  f_fun;
};

struct Drop_733 {
    struct SplitIter_734  field0;
    size_t  field1;
};

static struct Drop_733 Drop_733_Drop (  struct SplitIter_734  field0 ,  size_t  field1 ) {
    return ( struct Drop_733 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_732 {
    struct Drop_733  f_left_dash_it;
    struct FromIter_540  f_right_dash_it;
};

static  struct Zip_732   into_dash_iter737 (    struct Zip_732  self936 ) {
    return (  self936 );
}

static  struct Drop_733   into_dash_iter739 (    struct Drop_733  self853 ) {
    return (  self853 );
}

static  struct Zip_732   zip738 (    struct Drop_733  left947 ,    struct FromIter_540  right949 ) {
    struct Drop_733  left_dash_it950 = ( (  into_dash_iter739 ) ( (  left947 ) ) );
    struct FromIter_540  right_dash_it951 = ( (  into_dash_iter550 ) ( (  right949 ) ) );
    return ( (struct Zip_732) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  struct SplitIter_734   into_dash_iter741 (    struct SplitIter_734  self2669 ) {
    return (  self2669 );
}

static  struct Drop_733   drop740 (    struct SplitIter_734  iterable860 ,    size_t  i862 ) {
    struct SplitIter_734  it863 = ( (  into_dash_iter741 ) ( (  iterable860 ) ) );
    return ( ( Drop_733_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct SplitIter_734   split_dash_by_dash_filter743 (    struct StrView_27  s2657 ,   struct envunion736  fun2659 ) {
    return ( (struct SplitIter_734) { .f_og = (  s2657 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2659 ) } );
}

static  bool   lam744 (   struct env735* env ,    struct Char_65  cc2666 ) {
    return (  eq360 ( (  cc2666 ) , ( env->c2664 ) ) );
}

static  struct SplitIter_734   split_dash_by_dash_each742 (    struct StrView_27  s2662 ,    struct Char_65  c2664 ) {
    struct env735 envinst735 = {
        .c2664 =  c2664 ,
    };
    return ( (  split_dash_by_dash_filter743 ) ( (  s2662 ) ,  ( (struct envunion736){ .fun = (  bool  (*) (  struct env735*  ,    struct Char_65  ) )lam744 , .env =  envinst735 } ) ) );
}

struct Tuple2_747 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_747 Tuple2_747_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_747 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_746 {
    enum {
        Maybe_746_None_t,
        Maybe_746_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_747  field0;
        } Maybe_746_Just_s;
    } stuff;
};

static struct Maybe_746 Maybe_746_Just (  struct Tuple2_747  field0 ) {
    return ( struct Maybe_746 ) { .tag = Maybe_746_Just_t, .stuff = { .Maybe_746_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_85   next750 (    struct SplitIter_734 *  self2672 ) {
    if ( (  cmp302 ( ( ( * (  self2672 ) ) .f_last ) , ( ( ( ( * (  self2672 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    size_t  i2673 = ( ( * (  self2672 ) ) .f_last );
    while ( (  cmp302 ( (  i2673 ) , ( ( ( ( * (  self2672 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2674 = ( (  get_dash_ptr670 ) ( ( ( ( * (  self2672 ) ) .f_og ) .f_contents ) ,  (  i2673 ) ) );
        struct Char_65  c2675 = ( (  scan_dash_from_dash_mem339 ) ( (  ptr2674 ) ) );
        struct envunion736  temp751 = ( ( * (  self2672 ) ) .f_fun );
        if ( ( temp751.fun ( &temp751.env ,  (  c2675 ) ) ) ) {
            break;
        }
        i2673 = (  op_dash_add356 ( (  i2673 ) , ( (  next_dash_char340 ) ( (  ptr2674 ) ) ) ) );
    }
    struct StrView_27  line2676 = ( (  byte_dash_substr596 ) ( ( ( * (  self2672 ) ) .f_og ) ,  ( ( * (  self2672 ) ) .f_last ) ,  (  i2673 ) ) );
    i2673 = (  op_dash_add356 ( (  i2673 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2672 ) .f_last = (  i2673 );
    return ( ( Maybe_85_Just ) ( (  line2676 ) ) );
}

static  struct Maybe_85   next749 (    struct Drop_733 *  dref855 ) {
    while ( (  cmp302 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next750 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub458 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next750 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  struct Maybe_746   next748 (    struct Zip_732 *  self939 ) {
    struct Zip_732  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_85  dref941 = ( (  next749 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_85_None_t ) {
            return ( (struct Maybe_746) { .tag = Maybe_746_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_85_Just_t ) {
                struct Maybe_171  dref943 = ( (  next546 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_746) { .tag = Maybe_746_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next749 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next546 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_746_Just ) ( ( ( Tuple2_747_Tuple2 ) ( ( dref941 .stuff .Maybe_85_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion754 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

static  enum Unit_8   insert756 (   struct env37* env ,    struct List_9 *  list2465 ,    size_t  i2467 ,    struct Line_12  elem2469 ) {
    if ( ( (  cmp302 ( (  i2467 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2467 ) , ( ( * (  list2465 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2467 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2465 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq283 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp757 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add523 , .env =  env->envinst6 } );
        ( temp757.fun ( &temp757.env ,  (  list2465 ) ,  (  elem2469 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp758 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full525 , .env =  env->envinst1 } );
    ( temp758.fun ( &temp758.env ,  (  list2465 ) ) );
    size_t  ii2470 = (  op_dash_sub458 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp302 ( (  ii2470 ) , (  i2467 ) ) != 0 ) ) {
        ( (  set536 ) ( ( ( * (  list2465 ) ) .f_elements ) ,  (  op_dash_add356 ( (  ii2470 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get300 ) ( (  list2465 ) ,  (  ii2470 ) ) ) ) );
        if ( (  eq283 ( (  ii2470 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2470 = (  op_dash_sub458 ( (  ii2470 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set536 ) ( ( ( * (  list2465 ) ) .f_elements ) ,  (  i2467 ) ,  (  elem2469 ) ) );
    (*  list2465 ) .f_count = (  op_dash_add356 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion760 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  enum Unit_8   free762 (    struct List_13 *  list2440 ) {
    ( (  free686 ) ( ( ( * (  list2440 ) ) .f_al ) ,  ( ( * (  list2440 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line761 (    struct Line_12 *  line4022 ) {
    ( (  free762 ) ( ( & ( ( * (  line4022 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot700 (   struct env109* env ,    struct TextBuf_117 *  self4070 ,    struct Pos_26  p4072 ,    struct StrView_27  bytes4074 ) {
    enum CAllocator_10  al4075 = ( ( ( * (  self4070 ) ) .f_buf ) .f_al );
    struct List_9 *  buf4076 = ( & ( ( * (  self4070 ) ) .f_buf ) );
    struct Line_12  extracted_dash_line_dash_buf4077 = ( (  get300 ) ( (  buf4076 ) ,  ( (  i32_dash_size280 ) ( ( (  p4072 ) .f_line ) ) ) ) );
    struct Slice_14  remaining4078 = ( (  from585 ) ( ( (  to_dash_slice299 ) ( ( (  extracted_dash_line_dash_buf4077 ) .f_line ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  p4072 ) .f_bi ) ) ) ) );
    struct envunion110  temp702 = ( (struct envunion110){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter703 , .env =  env->envinst53 } );
    ( (  set701 ) ( (  buf4076 ) ,  ( (  i32_dash_size280 ) ( ( (  p4072 ) .f_line ) ) ) ,  ( (  mk_dash_line556 ) ( ( temp702.fun ( &temp702.env ,  ( (  subslice586 ) ( ( (  to_dash_slice299 ) ( ( (  extracted_dash_line_dash_buf4077 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( ( (  p4072 ) .f_bi ) ) ) ) ) ,  (  al4075 ) ) ) ) ) ) );
    struct Line_12 *  last_dash_line4079 = ( (  get_dash_ptr301 ) ( (  buf4076 ) ,  ( (  i32_dash_size280 ) ( ( (  p4072 ) .f_line ) ) ) ) );
    struct envunion112  temp723 = ( (struct envunion112){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all706 , .env =  env->envinst48 } );
    ( temp723.fun ( &temp723.env ,  ( & ( ( * (  last_dash_line4079 ) ) .f_line ) ) ,  ( ( (  or_dash_else724 ) ( ( (  head725 ) ( ( (  lines730 ) ( (  bytes4074 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added4080 = (  from_dash_integral56 ( 0 ) );
    struct Zip_732  temp731 =  into_dash_iter737 ( ( (  zip738 ) ( ( (  drop740 ) ( ( (  split_dash_by_dash_each742 ) ( (  bytes4074 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_746  __cond745 =  next748 (&temp731);
        if (  __cond745 .tag == 0 ) {
            break;
        }
        struct Tuple2_747  dref4081 =  __cond745 .stuff .Maybe_746_Just_s .field0;
        struct envunion754  temp753 = ( (struct envunion754){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter703 , .env =  env->envinst53 } );
        struct Line_12  temp752 = ( (  mk_dash_line556 ) ( ( temp753.fun ( &temp753.env ,  ( ( dref4081 .field0 ) .f_contents ) ,  (  al4075 ) ) ) ) );
        struct Line_12 *  nuline4084 = ( &temp752 );
        size_t  next_dash_line4085 = ( (  i32_dash_size280 ) ( (  op_dash_add175 ( ( (  p4072 ) .f_line ) , ( dref4081 .field1 ) ) ) ) );
        struct envunion111  temp755 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  ) )insert756 , .env =  env->envinst37 } );
        ( temp755.fun ( &temp755.env ,  (  buf4076 ) ,  (  next_dash_line4085 ) ,  ( * (  nuline4084 ) ) ) );
        last_dash_line4079 = ( (  get_dash_ptr301 ) ( (  buf4076 ) ,  (  next_dash_line4085 ) ) );
        lines_dash_added4080 = (  op_dash_add175 ( (  lines_dash_added4080 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion760  temp759 = ( (struct envunion760){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all706 , .env =  env->envinst48 } );
    ( temp759.fun ( &temp759.env ,  ( & ( ( * (  last_dash_line4079 ) ) .f_line ) ) ,  (  remaining4078 ) ) );
    ( (  free_dash_line761 ) ( ( & (  extracted_dash_line_dash_buf4077 ) ) ) );
    return (  lines_dash_added4080 );
}

static  size_t   size763 (    struct List_13 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

struct StrConcat_769 {
    struct StrConcat_79  field0;
    struct Char_65  field1;
};

static struct StrConcat_769 StrConcat_769_StrConcat (  struct StrConcat_79  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_769 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_768 {
    struct StrConcat_769  field0;
    size_t  field1;
};

static struct StrConcat_768 StrConcat_768_StrConcat (  struct StrConcat_769  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_768 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_767 {
    struct StrConcat_768  field0;
    struct Char_65  field1;
};

static struct StrConcat_767 StrConcat_767_StrConcat (  struct StrConcat_768  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_767 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_772 {
    struct StrView_27  field0;
    struct StrConcat_767  field1;
};

static struct StrConcat_772 StrConcat_772_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_767  field1 ) {
    return ( struct StrConcat_772 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_771 {
    struct StrConcat_772  field0;
    struct Char_65  field1;
};

static struct StrConcat_771 StrConcat_771_StrConcat (  struct StrConcat_772  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_771 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str776 (    struct StrConcat_769  self1302 ) {
    struct StrConcat_769  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str315 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str775 (    struct StrConcat_768  self1302 ) {
    struct StrConcat_768  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str776 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str316 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str774 (    struct StrConcat_767  self1302 ) {
    struct StrConcat_767  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str775 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str773 (    struct StrConcat_772  self1302 ) {
    struct StrConcat_772  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str774 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str770 (    struct StrConcat_771  self1302 ) {
    struct StrConcat_771  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str773 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic766 (    struct StrConcat_767  errmsg1343 ) {
    ( (  print_dash_str770 ) ( ( ( StrConcat_771_StrConcat ) ( ( ( StrConcat_772_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Drop_778 {
    struct Zip_658  field0;
    size_t  field1;
};

static struct Drop_778 Drop_778_Drop (  struct Zip_658  field0 ,  size_t  field1 ) {
    return ( struct Drop_778 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env779 {
    ;
    struct List_13 *  list2473;
    ;
    ;
    size_t  num_dash_elems2478;
};

struct envunion780 {
    enum Unit_8  (*fun) (  struct env779*  ,    struct Tuple2_661  );
    struct env779 env;
};

static  struct Drop_778   into_dash_iter782 (    struct Drop_778  self853 ) {
    return (  self853 );
}

static  struct Maybe_664   next783 (    struct Drop_778 *  dref855 ) {
    while ( (  cmp302 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next665 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub458 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next665 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each777 (    struct Drop_778  iterable1099 ,   struct envunion780  fun1101 ) {
    struct Drop_778  temp781 = ( (  into_dash_iter782 ) ( (  iterable1099 ) ) );
    struct Drop_778 *  it1102 = ( &temp781 );
    while ( ( true ) ) {
        struct Maybe_664  dref1103 = ( (  next783 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_664_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_664_Just_t ) {
                struct envunion780  temp784 = (  fun1101 );
                ( temp784.fun ( &temp784.env ,  ( dref1103 .stuff .Maybe_664_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_778   drop785 (    struct Zip_658  iterable860 ,    size_t  i862 ) {
    struct Zip_658  it863 = ( (  into_dash_iter663 ) ( (  iterable860 ) ) );
    return ( ( Drop_778_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct SliceIter_623   into_dash_iter787 (    struct List_13  self2433 ) {
    return ( (  into_dash_iter637 ) ( ( (  subslice586 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Zip_658   zip786 (    struct List_13  left947 ,    struct FromIter_540  right949 ) {
    struct SliceIter_623  left_dash_it950 = ( (  into_dash_iter787 ) ( (  left947 ) ) );
    struct FromIter_540  right_dash_it951 = ( (  into_dash_iter550 ) ( (  right949 ) ) );
    return ( (struct Zip_658) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   set789 (    struct List_13 *  list2426 ,    size_t  i2428 ,    uint8_t  elem2430 ) {
    if ( ( (  cmp302 ( (  i2428 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2428 ) , ( ( * (  list2426 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2428 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2426 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set669 ) ( ( ( * (  list2426 ) ) .f_elements ) ,  (  i2428 ) ,  (  elem2430 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam788 (   struct env779* env ,    struct Tuple2_661  dref2479 ) {
    return ( (  set789 ) ( ( env->list2473 ) ,  (  op_dash_sub458 ( ( (  i32_dash_size280 ) ( ( dref2479 .field1 ) ) ) , ( env->num_dash_elems2478 ) ) ) ,  ( dref2479 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range765 (   struct env40* env ,    struct List_13 *  list2473 ,    size_t  from2475 ,    size_t  to_dash_excl2477 ) {
    if ( (  cmp302 ( (  to_dash_excl2477 ) , (  from2475 ) ) == 0 ) ) {
        ( (  panic766 ) ( ( ( StrConcat_767_StrConcat ) ( ( ( StrConcat_768_StrConcat ) ( ( ( StrConcat_769_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp302 ( (  from2475 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp302 ( (  to_dash_excl2477 ) , ( ( * (  list2473 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2478 = (  op_dash_sub458 ( (  to_dash_excl2477 ) , (  from2475 ) ) );
    struct env779 envinst779 = {
        .list2473 =  list2473 ,
        .num_dash_elems2478 =  num_dash_elems2478 ,
    };
    ( (  for_dash_each777 ) ( ( (  drop785 ) ( ( (  zip786 ) ( ( * (  list2473 ) ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add356 ( (  from2475 ) , (  num_dash_elems2478 ) ) ) ) ) ,  ( (struct envunion780){ .fun = (  enum Unit_8  (*) (  struct env779*  ,    struct Tuple2_661  ) )lam788 , .env =  envinst779 } ) ) );
    (*  list2473 ) .f_count = (  op_dash_sub458 ( ( ( * (  list2473 ) ) .f_count ) , (  num_dash_elems2478 ) ) );
    size_t  capacity2482 = ( ( ( * (  list2473 ) ) .f_elements ) .f_count );
    if ( (  cmp302 ( (  op_dash_mul531 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  capacity2482 ) ) == 0 ) ) {
        if ( (  eq283 ( ( ( * (  list2473 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free686 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
            (*  list2473 ) .f_elements = ( (  empty565 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2483 = (  op_dash_mul531 ( (  op_dash_add356 ( (  op_dash_div327 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2449 ) ) );
        struct Slice_14  new_dash_slice2484 = ( (  allocate644 ) ( ( ( * (  list2473 ) ) .f_al ) ,  (  new_dash_size2483 ) ) );
        ( (  copy_dash_to649 ) ( ( (  subslice586 ) ( ( ( * (  list2473 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  (  new_dash_slice2484 ) ) );
        ( (  free686 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
        (*  list2473 ) .f_elements = (  new_dash_slice2484 );
    }
    return ( Unit_8_Unit );
}

struct envunion791 {
    int32_t  (*fun) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env109 env;
};

static  enum Unit_8   trim792 (    struct List_13 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min587 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min793 (    int32_t  l1367 ,    int32_t  r1369 ) {
    if ( (  cmp173 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

struct envunion795 {
    int32_t  (*fun) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env109 env;
};

struct Maybe_797 {
    enum {
        Maybe_797_None_t,
        Maybe_797_Just_t,
    } tag;
    union {
        struct {
            struct Slice_14  field0;
        } Maybe_797_Just_s;
    } stuff;
};

static struct Maybe_797 Maybe_797_Just (  struct Slice_14  field0 ) {
    return ( struct Maybe_797 ) { .tag = Maybe_797_Just_t, .stuff = { .Maybe_797_Just_s = { .field0 = field0 } } };
};

static  struct Slice_14   or_dash_else796 (    struct Maybe_797  self1360 ,    struct Slice_14  alt1362 ) {
    struct Maybe_797  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_797_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_797_Just_t ) {
            return ( dref1363 .stuff .Maybe_797_Just_s .field0 );
        }
    }
}

static  struct Maybe_797   fmap_dash_maybe798 (    struct Maybe_505  x1585 ,    struct Slice_14 (*  fun1587 )(    struct Line_12  ) ) {
    struct Maybe_505  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_505_None_t ) {
        return ( (struct Maybe_797) { .tag = Maybe_797_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_505_Just_t ) {
            return ( ( Maybe_797_Just ) ( ( (  fun1587 ) ( ( dref1588 .stuff .Maybe_505_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_505   try_dash_get799 (    struct List_9 *  list2421 ,    size_t  i2423 ) {
    if ( (  cmp302 ( (  i2423 ) , ( ( * (  list2421 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_505) { .tag = Maybe_505_None_t } );
    }
    return ( ( Maybe_505_Just ) ( ( (  get300 ) ( (  list2421 ) ,  (  i2423 ) ) ) ) );
}

static  struct Slice_14   lam800 (    struct Line_12  line4103 ) {
    return ( (  to_dash_slice299 ) ( ( (  line4103 ) .f_line ) ) );
}

struct StrConcat_805 {
    struct StrView_27  field0;
    struct StrView_27  field1;
};

static struct StrConcat_805 StrConcat_805_StrConcat (  struct StrView_27  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_805 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_804 {
    struct StrConcat_805  field0;
    struct Char_65  field1;
};

static struct StrConcat_804 StrConcat_804_StrConcat (  struct StrConcat_805  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_804 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str806 (    struct StrConcat_805  self1302 ) {
    struct StrConcat_805  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str310 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str803 (    struct StrConcat_804  self1302 ) {
    struct StrConcat_804  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str806 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert802 (    bool  cond1346 ,    struct StrView_27  msg1348 ) {
    if ( ( ! (  cond1346 ) ) ) {
        ( (  print_dash_str803 ) ( ( ( StrConcat_804_StrConcat ) ( ( ( StrConcat_805_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1348 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_810 {
    struct Zip_538  field0;
    size_t  field1;
};

static struct Drop_810 Drop_810_Drop (  struct Zip_538  field0 ,  size_t  field1 ) {
    return ( struct Drop_810 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env811 {
    ;
    struct List_9 *  list2473;
    ;
    ;
    size_t  num_dash_elems2478;
};

struct envunion812 {
    enum Unit_8  (*fun) (  struct env811*  ,    struct Tuple2_534  );
    struct env811 env;
};

static  struct Drop_810   into_dash_iter814 (    struct Drop_810  self853 ) {
    return (  self853 );
}

static  struct Maybe_543   next815 (    struct Drop_810 *  dref855 ) {
    while ( (  cmp302 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next544 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub458 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next544 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each809 (    struct Drop_810  iterable1099 ,   struct envunion812  fun1101 ) {
    struct Drop_810  temp813 = ( (  into_dash_iter814 ) ( (  iterable1099 ) ) );
    struct Drop_810 *  it1102 = ( &temp813 );
    while ( ( true ) ) {
        struct Maybe_543  dref1103 = ( (  next815 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_543_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_543_Just_t ) {
                struct envunion812  temp816 = (  fun1101 );
                ( temp816.fun ( &temp816.env ,  ( dref1103 .stuff .Maybe_543_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_810   drop817 (    struct Zip_538  iterable860 ,    size_t  i862 ) {
    struct Zip_538  it863 = ( (  into_dash_iter542 ) ( (  iterable860 ) ) );
    return ( ( Drop_810_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct Slice_11   subslice820 (    struct Slice_11  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Line_12 *  begin_dash_ptr2209 = ( (  offset_dash_ptr346 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub458 ( ( (  min587 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_539   into_dash_iter819 (    struct List_9  self2433 ) {
    return ( (  into_dash_iter549 ) ( ( (  subslice820 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Zip_538   zip818 (    struct List_9  left947 ,    struct FromIter_540  right949 ) {
    struct SliceIter_539  left_dash_it950 = ( (  into_dash_iter819 ) ( (  left947 ) ) );
    struct FromIter_540  right_dash_it951 = ( (  into_dash_iter550 ) ( (  right949 ) ) );
    return ( (struct Zip_538) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   lam821 (   struct env811* env ,    struct Tuple2_534  dref2479 ) {
    return ( (  set701 ) ( ( env->list2473 ) ,  (  op_dash_sub458 ( ( (  i32_dash_size280 ) ( ( dref2479 .field1 ) ) ) , ( env->num_dash_elems2478 ) ) ) ,  ( dref2479 .field0 ) ) );
}

struct env824 {
    ;
    struct Slice_11  dest2281;
    ;
};

struct envunion825 {
    enum Unit_8  (*fun) (  struct env824*  ,    struct Tuple2_534  );
    struct env824 env;
};

static  enum Unit_8   for_dash_each823 (    struct Zip_538  iterable1099 ,   struct envunion825  fun1101 ) {
    struct Zip_538  temp826 = ( (  into_dash_iter542 ) ( (  iterable1099 ) ) );
    struct Zip_538 *  it1102 = ( &temp826 );
    while ( ( true ) ) {
        struct Maybe_543  dref1103 = ( (  next544 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_543_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_543_Just_t ) {
                struct envunion825  temp827 = (  fun1101 );
                ( temp827.fun ( &temp827.env ,  ( dref1103 .stuff .Maybe_543_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam828 (   struct env824* env ,    struct Tuple2_534  dref2282 ) {
    return ( (  set536 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size280 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to822 (    struct Slice_11  src2279 ,    struct Slice_11  dest2281 ) {
    if ( (  cmp302 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic650 ) ( ( ( StrConcat_651_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env824 envinst824 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each823 ) ( ( (  zip548 ) ( (  src2279 ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion825){ .fun = (  enum Unit_8  (*) (  struct env824*  ,    struct Tuple2_534  ) )lam828 , .env =  envinst824 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range808 (   struct env41* env ,    struct List_9 *  list2473 ,    size_t  from2475 ,    size_t  to_dash_excl2477 ) {
    if ( (  cmp302 ( (  to_dash_excl2477 ) , (  from2475 ) ) == 0 ) ) {
        ( (  panic766 ) ( ( ( StrConcat_767_StrConcat ) ( ( ( StrConcat_768_StrConcat ) ( ( ( StrConcat_769_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp302 ( (  from2475 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp302 ( (  to_dash_excl2477 ) , ( ( * (  list2473 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2478 = (  op_dash_sub458 ( (  to_dash_excl2477 ) , (  from2475 ) ) );
    struct env811 envinst811 = {
        .list2473 =  list2473 ,
        .num_dash_elems2478 =  num_dash_elems2478 ,
    };
    ( (  for_dash_each809 ) ( ( (  drop817 ) ( ( (  zip818 ) ( ( * (  list2473 ) ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add356 ( (  from2475 ) , (  num_dash_elems2478 ) ) ) ) ) ,  ( (struct envunion812){ .fun = (  enum Unit_8  (*) (  struct env811*  ,    struct Tuple2_534  ) )lam821 , .env =  envinst811 } ) ) );
    (*  list2473 ) .f_count = (  op_dash_sub458 ( ( ( * (  list2473 ) ) .f_count ) , (  num_dash_elems2478 ) ) );
    size_t  capacity2482 = ( ( ( * (  list2473 ) ) .f_elements ) .f_count );
    if ( (  cmp302 ( (  op_dash_mul531 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  capacity2482 ) ) == 0 ) ) {
        if ( (  eq283 ( ( ( * (  list2473 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free552 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
            (*  list2473 ) .f_elements = ( (  empty491 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2483 = (  op_dash_mul531 ( (  op_dash_add356 ( (  op_dash_div327 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2449 ) ) );
        struct Slice_11  new_dash_slice2484 = ( (  allocate526 ) ( ( ( * (  list2473 ) ) .f_al ) ,  (  new_dash_size2483 ) ) );
        ( (  copy_dash_to822 ) ( ( (  subslice820 ) ( ( ( * (  list2473 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  (  new_dash_slice2484 ) ) );
        ( (  free552 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
        (*  list2473 ) .f_elements = (  new_dash_slice2484 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action691 (   struct env113* env ,    struct TextBuf_117 *  self4088 ,    struct Pos_26  from_dash_pos4090 ,    struct Pos_26  to_dash_pos4092 ,    struct StrView_27  bytes4094 ) {
    struct Pos_26  from4095 = ( (  min692 ) ( (  from_dash_pos4090 ) ,  (  to_dash_pos4092 ) ) );
    struct Pos_26  to4096 = ( (  max694 ) ( (  from_dash_pos4090 ) ,  (  to_dash_pos4092 ) ) );
    if ( (  eq695 ( (  to4096 ) , (  from4095 ) ) ) ) {
        enum CAllocator_10  al4097 = ( ( ( * (  self4088 ) ) .f_buf ) .f_al );
        if ( ( (  eq283 ( ( (  size697 ) ( ( & ( ( * (  self4088 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size280 ) ( ( (  from4095 ) .f_line ) ) ) ) ) && (  eq696 ( ( (  from4095 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion114  temp698 = ( (struct envunion114){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add523 , .env =  env->envinst6 } );
            ( temp698.fun ( &temp698.env ,  ( & ( ( * (  self4088 ) ) .f_buf ) ) ,  ( (  mk_dash_line556 ) ( ( (  mk564 ) ( (  al4097 ) ) ) ) ) ) );
        }
        struct envunion116  temp699 = ( (struct envunion116){ .fun = (  int32_t  (*) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot700 , .env =  env->envinst109 } );
        ( temp699.fun ( &temp699.env ,  (  self4088 ) ,  (  from4095 ) ,  (  bytes4094 ) ) );
    } else {
        struct List_9 *  lines_dash_buf4098 = ( & ( ( * (  self4088 ) ) .f_buf ) );
        struct Line_12 *  first_dash_line4099 = ( (  get_dash_ptr301 ) ( (  lines_dash_buf4098 ) ,  ( (  i32_dash_size280 ) ( ( (  from4095 ) .f_line ) ) ) ) );
        (*  first_dash_line4099 ) .f_invalidated = ( true );
        if ( ( (  eq696 ( ( (  from4095 ) .f_line ) , ( (  to4096 ) .f_line ) ) ) && (  cmp173 ( ( (  to4096 ) .f_bi ) , (  op_dash_add175 ( ( (  size_dash_i32311 ) ( ( (  size763 ) ( ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion121  temp764 = ( (struct envunion121){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range765 , .env =  env->envinst40 } );
            ( temp764.fun ( &temp764.env ,  ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ,  ( (  i32_dash_size280 ) ( ( (  from4095 ) .f_bi ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  to4096 ) .f_bi ) ) ) ) );
            struct envunion791  temp790 = ( (struct envunion791){ .fun = (  int32_t  (*) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot700 , .env =  env->envinst109 } );
            ( temp790.fun ( &temp790.env ,  (  self4088 ) ,  (  from4095 ) ,  (  bytes4094 ) ) );
        } else {
            ( (  trim792 ) ( ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ,  ( (  i32_dash_size280 ) ( ( (  from4095 ) .f_bi ) ) ) ) );
            struct Line_12 *  last_dash_line4100 = ( (  get_dash_ptr301 ) ( (  lines_dash_buf4098 ) ,  ( (  i32_dash_size280 ) ( ( (  to4096 ) .f_line ) ) ) ) );
            (*  last_dash_line4100 ) .f_invalidated = ( true );
            to4096 .f_bi = ( (  min793 ) ( ( (  to4096 ) .f_bi ) ,  (  op_dash_add175 ( ( (  size_dash_i32311 ) ( ( (  size763 ) ( ( & ( ( * (  last_dash_line4100 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq696 ( ( (  to4096 ) .f_bi ) , (  op_dash_add175 ( ( (  size_dash_i32311 ) ( ( (  size763 ) ( ( & ( ( * (  last_dash_line4100 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to4096 .f_line = (  op_dash_add175 ( ( (  to4096 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to4096 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion795  temp794 = ( (struct envunion795){ .fun = (  int32_t  (*) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot700 , .env =  env->envinst109 } );
            int32_t  lines_dash_added4101 = ( temp794.fun ( &temp794.env ,  (  self4088 ) ,  (  from4095 ) ,  (  bytes4094 ) ) );
            to4096 .f_line = (  op_dash_add175 ( ( (  to4096 ) .f_line ) , (  lines_dash_added4101 ) ) );
            from4095 .f_line = (  op_dash_add175 ( ( (  from4095 ) .f_line ) , (  lines_dash_added4101 ) ) );
            struct Slice_14  last_dash_line4104 = ( (  or_dash_else796 ) ( ( (  fmap_dash_maybe798 ) ( ( (  try_dash_get799 ) ( (  lines_dash_buf4098 ) ,  ( (  i32_dash_size280 ) ( ( (  to4096 ) .f_line ) ) ) ) ) ,  (  lam800 ) ) ) ,  ( (  empty565 ) ( ) ) ) );
            struct envunion115  temp801 = ( (struct envunion115){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all706 , .env =  env->envinst48 } );
            ( temp801.fun ( &temp801.env ,  ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ,  ( (  from585 ) ( (  last_dash_line4104 ) ,  ( (  i32_dash_size280 ) ( ( (  to4096 ) .f_bi ) ) ) ) ) ) );
            ( (  assert802 ) ( (  cmp173 ( ( (  to4096 ) .f_line ) , ( (  from4095 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion122  temp807 = ( (struct envunion122){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range808 , .env =  env->envinst41 } );
            ( temp807.fun ( &temp807.env ,  ( & ( ( * (  self4088 ) ) .f_buf ) ) ,  ( (  i32_dash_size280 ) ( (  op_dash_add175 ( ( (  from4095 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add356 ( ( (  i32_dash_size280 ) ( ( (  to4096 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk829 (    int32_t  line3845 ,    int32_t  bi3847 ) {
    return ( (struct Pos_26) { .f_line = (  line3845 ) , .f_bi = (  bi3847 ) } );
}

static  struct Maybe_480   mk_dash_from_dash_file483 (   struct env127* env ,    enum CAllocator_10  al4127 ,    struct StrView_27  filename4129 ) {
    struct envunion129  temp485 = ( (struct envunion129){ .fun = (  struct TextBuf_117  (*) (  struct env125*  ,    enum CAllocator_10  ) )mk486 , .env =  env->envinst125 } );
    struct TextBuf_117  temp484 = ( temp485.fun ( &temp485.env ,  (  al4127 ) ) );
    struct TextBuf_117 *  tb4130 = ( &temp484 );
    (*  tb4130 ) .f_filetype = ( (  detect_dash_filetype_dash_from_dash_filename579 ) ( (  filename4129 ) ) );
    struct StrView_27  filename04131 = ( (  clone_dash_0643 ) ( (  filename4129 ) ,  (  al4127 ) ) );
    struct Maybe_85  dref4132 = ( (  try_dash_read_dash_contents672 ) ( ( (  as_dash_const_dash_str683 ) ( (  filename04131 ) ) ) ,  (  al4127 ) ) );
    if ( dref4132.tag == Maybe_85_None_t ) {
        ( (  free685 ) ( (  filename04131 ) ,  (  al4127 ) ) );
        return ( (struct Maybe_480) { .tag = Maybe_480_None_t } );
    }
    else {
        if ( dref4132.tag == Maybe_85_Just_t ) {
            if ( (  eq688 ( ( (  try_dash_get594 ) ( ( ( dref4132 .stuff .Maybe_85_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub458 ( ( ( ( dref4132 .stuff .Maybe_85_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_74_Just ) ( ( (  ascii_dash_u8595 ) ( ( (  from_dash_charlike282 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref4132 .stuff .Maybe_85_Just_s .field0 = ( (  byte_dash_substr596 ) ( ( dref4132 .stuff .Maybe_85_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub458 ( ( ( ( dref4132 .stuff .Maybe_85_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion128  temp690 = ( (struct envunion128){ .fun = (  enum Unit_8  (*) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action691 , .env =  env->envinst113 } );
            ( temp690.fun ( &temp690.env ,  (  tb4130 ) ,  ( (  mk829 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk829 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( dref4132 .stuff .Maybe_85_Just_s .field0 ) ) );
            (*  tb4130 ) .f_filename = ( ( Maybe_85_Just ) ( (  filename04131 ) ) );
            return ( ( Maybe_480_Just ) ( ( * (  tb4130 ) ) ) );
        }
    }
}

struct envunion831 {
    struct TextBuf_117  (*fun) (  struct env125*  ,    enum CAllocator_10  );
    struct env125 env;
};

struct envunion833 {
    struct TextBuf_117  (*fun) (  struct env125*  ,    enum CAllocator_10  );
    struct env125 env;
};

static  struct Pane_241   mk836 (    enum CAllocator_10  al4344 ,    struct TextBuf_117 *  buf4346 ) {
    return ( (struct Pane_241) { .f_buf = (  buf4346 ) , .f_cursor = ( (  mk829 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_242_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_243) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
}

struct envunion839 {
    struct Tui_97  (*fun) (  struct env92*  );
    struct env92 env;
};

static  enum Unit_8   for_dash_each843 (    struct StrViewIter_293  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrViewIter_293  temp844 = ( (  into_dash_iter294 ) ( (  iterable1099 ) ) );
    struct StrViewIter_293 *  it1102 = ( &temp844 );
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

static  enum Unit_8   print842 (    struct StrView_27  s1335 ) {
    ( (  for_dash_each843 ) ( ( (  chars295 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_alternative_dash_screen_dash_buffer841 (  ) {
    ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?1049h" ) ,  ( 8 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   stdin_dash_fileno847 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct termios *   cast_dash_ptr848 (    struct Termios_87 *  p398 ) {
    return ( (struct termios * ) (  p398 ) );
}

static  int32_t   op_dash_neg849 (    int32_t  x246 ) {
    return ( (  from_dash_integral56 ( 0 ) ) - (  x246 ) );
}

static  enum Unit_8   panic850 (    struct StrView_27  errmsg1343 ) {
    ( (  print_dash_str803 ) ( ( ( StrConcat_804_StrConcat ) ( ( ( StrConcat_805_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint32_t   u32_dash_and851 (    uint32_t  l2960 ,    uint32_t  r2962 ) {
    return ( (  l2960 ) & (  r2962 ) );
}

static  uint32_t   u32_dash_neg852 (    uint32_t  l2965 ) {
    return ( ~ (  l2965 ) );
}

struct Array_854 {
    uint32_t _arr [4];
};

struct ArrayIter_856 {
    struct Array_854  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_856   into_dash_iter857 (    struct Array_854  self2102 ) {
    return ( (struct ArrayIter_856) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_858 {
    enum {
        Maybe_858_None_t,
        Maybe_858_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_858_Just_s;
    } stuff;
};

static struct Maybe_858 Maybe_858_Just (  uint32_t  field0 ) {
    return ( struct Maybe_858 ) { .tag = Maybe_858_Just_t, .stuff = { .Maybe_858_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr862 (    struct Array_854 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   offset_dash_ptr863 (    uint32_t *  x377 ,    int64_t  count379 ) {
    uint32_t  temp864;
    return ( (uint32_t * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp864 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr861 (    struct Array_854 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr862 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr863 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get860 (    struct Array_854 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr861 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_858   next859 (    struct ArrayIter_856 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_858) { .tag = Maybe_858_None_t } );
    }
    uint32_t  e2111 = ( (  get860 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_858_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce855 (    struct Array_854  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_856  it1124 = ( (  into_dash_iter857 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_858  dref1125 = ( (  next859 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_858_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_858_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_858_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp865 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp865);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp866;
    return (  temp866 );
}

static  uint32_t   u32_dash_or867 (    uint32_t  l2952 ,    uint32_t  r2954 ) {
    return ( (  l2952 ) | (  r2954 ) );
}

static  uint32_t   u32_dash_ors853 (    struct Array_854  vals2957 ) {
    return ( (  reduce855 ) ( (  vals2957 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or867 ) ) );
}

static  struct Array_854   from_dash_listlike868 (    struct Array_854 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   echo870 (  ) {
    return (  from_dash_integral181 ( 8 ) );
}

static  uint32_t   icanon871 (  ) {
    return (  from_dash_integral181 ( 2 ) );
}

static  uint32_t   isig872 (  ) {
    return (  from_dash_integral181 ( 1 ) );
}

static  uint32_t   iexten873 (  ) {
    return (  from_dash_integral181 ( 32768 ) );
}

struct Array_875 {
    uint32_t _arr [5];
};

struct ArrayIter_877 {
    struct Array_875  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_877   into_dash_iter878 (    struct Array_875  self2102 ) {
    return ( (struct ArrayIter_877) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr882 (    struct Array_875 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   get_dash_ptr881 (    struct Array_875 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr882 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr863 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get880 (    struct Array_875 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr881 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_858   next879 (    struct ArrayIter_877 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_858) { .tag = Maybe_858_None_t } );
    }
    uint32_t  e2111 = ( (  get880 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_858_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce876 (    struct Array_875  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_877  it1124 = ( (  into_dash_iter878 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_858  dref1125 = ( (  next879 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_858_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_858_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_858_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp883 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp883);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp884;
    return (  temp884 );
}

static  uint32_t   u32_dash_ors874 (    struct Array_875  vals2957 ) {
    return ( (  reduce876 ) ( (  vals2957 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or867 ) ) );
}

static  struct Array_875   from_dash_listlike885 (    struct Array_875 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   brkint887 (  ) {
    return (  from_dash_integral181 ( 2 ) );
}

static  uint32_t   icrnl888 (  ) {
    return (  from_dash_integral181 ( 256 ) );
}

static  uint32_t   inpck889 (  ) {
    return (  from_dash_integral181 ( 16 ) );
}

static  uint32_t   istrip890 (  ) {
    return (  from_dash_integral181 ( 32 ) );
}

static  uint32_t   ixon891 (  ) {
    return (  from_dash_integral181 ( 1024 ) );
}

struct Array_893 {
    uint32_t _arr [1];
};

struct ArrayIter_895 {
    struct Array_893  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_895   into_dash_iter896 (    struct Array_893  self2102 ) {
    return ( (struct ArrayIter_895) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr900 (    struct Array_893 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   get_dash_ptr899 (    struct Array_893 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr900 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr863 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get898 (    struct Array_893 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr899 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_858   next897 (    struct ArrayIter_895 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_858) { .tag = Maybe_858_None_t } );
    }
    uint32_t  e2111 = ( (  get898 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_858_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce894 (    struct Array_893  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_895  it1124 = ( (  into_dash_iter896 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_858  dref1125 = ( (  next897 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_858_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_858_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_858_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp901 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp901);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp902;
    return (  temp902 );
}

static  uint32_t   u32_dash_ors892 (    struct Array_893  vals2957 ) {
    return ( (  reduce894 ) ( (  vals2957 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or867 ) ) );
}

static  struct Array_893   from_dash_listlike903 (    struct Array_893 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   opost905 (  ) {
    return (  from_dash_integral181 ( 1 ) );
}

static  uint32_t   cs8906 (  ) {
    return (  from_dash_integral181 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr909 (    struct Array_88 *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  uint8_t *   get_dash_ptr908 (    struct Array_88 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2030 = ( ( (  cast_dash_ptr909 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr353 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  enum Unit_8   set907 (    struct Array_88 *  arr2039 ,    size_t  i2042 ,    uint8_t  e2044 ) {
    uint8_t *  p2045 = ( (  get_dash_ptr908 ) ( (  arr2039 ) ,  (  i2042 ) ) );
    (*  p2045 ) = (  e2044 );
    return ( Unit_8_Unit );
}

static  size_t   vmin910 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime911 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush912 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  struct Termios_87   enable_dash_raw_dash_mode845 (  ) {
    struct Termios_87  temp846 = ( (  undefined90 ) ( ) );
    struct Termios_87 *  orig_dash_termios3561 = ( &temp846 );
    if ( (  eq696 ( ( ( tcgetattr ) ( ( (  stdin_dash_fileno847 ) ( ) ) ,  ( (  cast_dash_ptr848 ) ( (  orig_dash_termios3561 ) ) ) ) ) , (  op_dash_neg849 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        ( (  panic850 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"tcgetattr" ) ,  ( 9 ) ) ) ) );
    }
    struct Termios_87  raw3562 = ( * (  orig_dash_termios3561 ) );
    struct Array_854  temp869 = ( (struct Array_854) { ._arr = { ( (  echo870 ) ( ) ) , ( (  icanon871 ) ( ) ) , ( (  isig872 ) ( ) ) , ( ( (  iexten873 ) ( ) ) ) } } );
    raw3562 .f_c_dash_lflag = ( (  u32_dash_and851 ) ( ( (  raw3562 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg852 ) ( ( (  u32_dash_ors853 ) ( ( (  from_dash_listlike868 ) ( ( &temp869 ) ) ) ) ) ) ) ) );
    struct Array_875  temp886 = ( (struct Array_875) { ._arr = { ( (  brkint887 ) ( ) ) , ( (  icrnl888 ) ( ) ) , ( (  inpck889 ) ( ) ) , ( (  istrip890 ) ( ) ) , ( ( (  ixon891 ) ( ) ) ) } } );
    raw3562 .f_c_dash_iflag = ( (  u32_dash_and851 ) ( ( (  raw3562 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg852 ) ( ( (  u32_dash_ors874 ) ( ( (  from_dash_listlike885 ) ( ( &temp886 ) ) ) ) ) ) ) ) );
    struct Array_893  temp904 = ( (struct Array_893) { ._arr = { ( ( (  opost905 ) ( ) ) ) } } );
    raw3562 .f_c_dash_oflag = ( (  u32_dash_and851 ) ( ( (  raw3562 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg852 ) ( ( (  u32_dash_ors892 ) ( ( (  from_dash_listlike903 ) ( ( &temp904 ) ) ) ) ) ) ) ) );
    raw3562 .f_c_dash_cflag = ( (  u32_dash_or867 ) ( ( (  raw3562 ) .f_c_dash_cflag ) ,  ( (  cs8906 ) ( ) ) ) );
    ( (  set907 ) ( ( & ( (  raw3562 ) .f_c_dash_cc ) ) ,  ( (  vmin910 ) ( ) ) ,  (  from_dash_integral328 ( 0 ) ) ) );
    ( (  set907 ) ( ( & ( (  raw3562 ) .f_c_dash_cc ) ) ,  ( (  vtime911 ) ( ) ) ,  (  from_dash_integral328 ( 0 ) ) ) );
    if ( (  eq696 ( ( ( tcsetattr ) ( ( (  stdin_dash_fileno847 ) ( ) ) ,  ( (  tcsa_dash_flush912 ) ( ) ) ,  ( (  cast_dash_ptr848 ) ( ( & (  raw3562 ) ) ) ) ) ) , (  op_dash_neg849 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        ( (  panic850 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"tcsetattr" ) ,  ( 9 ) ) ) ) );
    }
    return ( * (  orig_dash_termios3561 ) );
}

static  enum Unit_8   hide_dash_cursor913 (  ) {
    ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors914 (  ) {
    ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen915 (  ) {
    ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse916 (  ) {
    ( (  print_dash_str310 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout917 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr675 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq921 (    enum Unit_8 *  l664 ,    enum Unit_8 *  r666 ) {
    return ( (  l664 ) == (  r666 ) );
}

static  enum Unit_8 *   cast922 (    const char*  x395 ) {
    return ( (enum Unit_8 * ) (  x395 ) );
}

static  void *   cast_dash_ptr926 (    enum Unit_8 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of927 (    enum Unit_8 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  enum Unit_8 *   zeroed924 (  ) {
    enum Unit_8 *  temp925;
    enum Unit_8 *  x648 = (  temp925 );
    ( ( memset ) ( ( (  cast_dash_ptr926 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of927 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  enum Unit_8 *   null_dash_ptr923 (  ) {
    return ( (  zeroed924 ) ( ) );
}

static  struct Maybe_476   from_dash_nullable_dash_c_dash_str920 (    const char*  s669 ) {
    if ( ( (  ptr_dash_eq921 ) ( ( (  cast922 ) ( (  s669 ) ) ) ,  ( ( (  null_dash_ptr923 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_476) { .tag = Maybe_476_None_t } );
    } else {
        return ( ( Maybe_476_Just ) ( (  s669 ) ) );
    }
}

static  struct Maybe_476   get919 (    const char*  s2725 ) {
    return ( (  from_dash_nullable_dash_c_dash_str920 ) ( ( ( getenv ) ( (  s2725 ) ) ) ) );
}

static  bool   eq928 (    const char*  l2141 ,    const char*  r2143 ) {
    return (  eq696 ( ( ( strcmp ) ( (  l2141 ) ,  (  r2143 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_98   query_dash_palette918 (  ) {
    struct Maybe_476  colorterm2726 = ( (  get919 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_476  dref2727 = (  colorterm2726 );
    if ( dref2727.tag == Maybe_476_Just_t ) {
        if ( ( (  eq928 ( ( dref2727 .stuff .Maybe_476_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq928 ( ( dref2727 .stuff .Maybe_476_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_98_PaletteRGB );
        }
    }
    else {
        if ( dref2727.tag == Maybe_476_None_t ) {
        }
    }
    struct Maybe_476  dref2729 = ( (  get919 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2729.tag == Maybe_476_Just_t ) {
        if ( (  eq928 ( ( dref2729 .stuff .Maybe_476_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_98_Palette8 );
        }
    }
    else {
        if ( dref2729.tag == Maybe_476_None_t ) {
        }
    }
    return ( ColorPalette_98_Palette16 );
}

struct Tuple2_929 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_929 Tuple2_929_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_929 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_931 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr935 (    struct Winsize_931 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of936 (    struct Winsize_931  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Winsize_931   zeroed933 (  ) {
    struct Winsize_931  temp934;
    struct Winsize_931  x648 = (  temp934 );
    ( ( memset ) ( ( (  cast_dash_ptr935 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of936 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  int32_t   stdout_dash_fileno937 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  uint64_t   from_dash_integral939 (    size_t  x65 ) {
    return ( (uint64_t ) (  x65 ) );
}

static  uint64_t   tiocgwinsz938 (  ) {
    return (  from_dash_integral939 ( 21523 ) );
}

static  bool   eq940 (    uint16_t  l130 ,    uint16_t  r132 ) {
    return ( (  l130 ) == (  r132 ) );
}

static  uint16_t   from_dash_integral941 (    size_t  x56 ) {
    return ( (uint16_t ) (  x56 ) );
}

static  void *   cast_dash_ptr947 (    uint32_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  uint32_t   zeroed945 (  ) {
    uint32_t  temp946;
    uint32_t  x648 = (  temp946 );
    ( ( memset ) ( ( (  cast_dash_ptr947 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of386 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint16_t *   cast948 (    uint32_t *  x395 ) {
    return ( (uint16_t * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed943 (    uint16_t  x651 ) {
    uint32_t  temp944 = ( (  zeroed945 ) ( ) );
    uint32_t *  y652 = ( &temp944 );
    uint16_t *  yp653 = ( (  cast948 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  uint32_t   u16_dash_u32942 (    uint16_t  x726 ) {
    return ( (  cast_dash_on_dash_zeroed943 ) ( (  x726 ) ) );
}

static  struct Tuple2_929   get_dash_dimensions930 (  ) {
    struct Winsize_931  temp932 = ( ( (  zeroed933 ) ( ) ) );
    struct Winsize_931 *  ws2712 = ( &temp932 );
    if ( ( (  eq696 ( ( ( ioctl ) ( ( (  stdout_dash_fileno937 ) ( ) ) ,  ( (  tiocgwinsz938 ) ( ) ) ,  (  ws2712 ) ) ) , (  op_dash_neg849 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq940 ( ( ( * (  ws2712 ) ) .f_ws_dash_col ) , (  from_dash_integral941 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_929_Tuple2 ) ( (  from_dash_integral181 ( 80 ) ) ,  (  from_dash_integral181 ( 24 ) ) ) );
    }
    return ( ( Tuple2_929_Tuple2 ) ( ( (  u16_dash_u32942 ) ( ( ( * (  ws2712 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32942 ) ( ( ( * (  ws2712 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined951 (  ) {
    struct timespec  temp952;
    return (  temp952 );
}

static  int32_t   clock_dash_monotonic953 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  struct timespec   now949 (  ) {
    struct timespec  temp950 = ( (  undefined951 ) ( ) );
    struct timespec *  t3520 = ( &temp950 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic953 ) ( ) ) ,  (  t3520 ) ) );
    return ( * (  t3520 ) );
}

struct env954 {
    struct anon_86 *  tui_dash_global_dash_state3572;
};

struct envunion955 {
    enum Unit_8  (*fun) (  struct env954*  ,    int32_t  );
    struct env954 env;
};

struct envunion955  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig956 ) {
    struct envunion955  temp957 = _intr_sigarr [  __intr__sig956 ];
    temp957.fun ( &temp957.env ,  __intr__sig956 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig958 ,   struct envunion955  __intr__fun959 ) {
    _intr_sigarr [  __intr__sig958 ] =  __intr__fun959;
    signal(  __intr__sig958 , _intr_sighandle );
    return Unit_8_Unit;
}

static  int32_t   sigwinch960 (  ) {
    return (  from_dash_integral56 ( 28 ) );
}

static  enum Unit_8   lam961 (   struct env954* env ,    int32_t  dref3578 ) {
    (* env->tui_dash_global_dash_state3572 ) .f_should_dash_resize = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst962 (    struct Tuple2_929  dref1563 ) {
    return ( dref1563 .field0 );
}

static  uint32_t   snd963 (    struct Tuple2_929  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tui_97   mk840 (   struct env92* env ) {
    ( (  enable_dash_alternative_dash_screen_dash_buffer841 ) ( ) );
    (* env->tui_dash_global_dash_state3572 ) .f_orig_dash_termios = ( (  enable_dash_raw_dash_mode845 ) ( ) );
    ( (  hide_dash_cursor913 ) ( ) );
    ( (  reset_dash_colors914 ) ( ) );
    ( (  clear_dash_screen915 ) ( ) );
    ( (  enable_dash_mouse916 ) ( ) );
    ( (  flush_dash_stdout917 ) ( ) );
    enum ColorPalette_98  palette3574 = ( (  query_dash_palette918 ) ( ) );
    struct Tuple2_929  dims3575 = ( (  get_dash_dimensions930 ) ( ) );
    uint32_t  fps3576 = (  from_dash_integral181 ( 60 ) );
    struct timespec  last_dash_sync3577 = ( (  now949 ) ( ) );
    struct env954 envinst954 = {
        .tui_dash_global_dash_state3572 = env->tui_dash_global_dash_state3572 ,
    };
    ( _intr_register_signal ( ( (  sigwinch960 ) ( ) ) , ( (struct envunion955){ .fun = (  enum Unit_8  (*) (  struct env954*  ,    int32_t  ) )lam961 , .env =  envinst954 } ) ) );
    return ( (struct Tui_97) { .f_width = ( (  fst962 ) ( (  dims3575 ) ) ) , .f_height = ( (  snd963 ) ( (  dims3575 ) ) ) , .f_target_dash_fps = (  fps3576 ) , .f_actual_dash_fps = (  from_dash_integral181 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3577 ) , .f_fps_dash_ts = (  last_dash_sync3577 ) , .f_fps_dash_count = (  from_dash_integral181 ( 0 ) ) , .f_palette = (  palette3574 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_968 {
    size_t  f_size;
};

static  struct TypeSize_968   get_dash_typesize967 (  ) {
    struct Cell_449  temp969;
    return ( (struct TypeSize_968) { .f_size = ( sizeof( ( (  temp969 ) ) ) ) } );
}

static  struct Cell_449 *   cast_dash_ptr970 (    void *  p398 ) {
    return ( (struct Cell_449 * ) (  p398 ) );
}

static  struct Slice_448   allocate966 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize967 ) ( ) ) ) .f_size );
    struct Cell_449 *  ptr2371 = ( (  cast_dash_ptr970 ) ( ( ( malloc ) ( (  op_dash_mul531 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_448) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

static  void *   cast_dash_ptr976 (    size_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of977 (    size_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  size_t   zeroed974 (  ) {
    size_t  temp975;
    size_t  x648 = (  temp975 );
    ( ( memset ) ( ( (  cast_dash_ptr976 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of977 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint32_t *   cast978 (    size_t *  x395 ) {
    return ( (uint32_t * ) (  x395 ) );
}

static  size_t   cast_dash_on_dash_zeroed972 (    uint32_t  x651 ) {
    size_t  temp973 = ( (  zeroed974 ) ( ) );
    size_t *  y652 = ( &temp973 );
    uint32_t *  yp653 = ( (  cast978 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  size_t   u32_dash_size971 (    uint32_t  x732 ) {
    return ( (  cast_dash_on_dash_zeroed972 ) ( (  x732 ) ) );
}

struct env981 {
    struct Slice_448  s2328;
    ;
    struct Cell_449 (*  fun2330 )(    struct Cell_449  );
    ;
    ;
};

struct envunion982 {
    enum Unit_8  (*fun) (  struct env981*  ,    int32_t  );
    struct env981 env;
};

static  enum Unit_8   for_dash_each980 (    struct Range_166  iterable1099 ,   struct envunion982  fun1101 ) {
    struct RangeIter_169  temp983 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp983 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion982  temp984 = (  fun1101 );
                ( temp984.fun ( &temp984.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_449 *   offset_dash_ptr988 (    struct Cell_449 *  x377 ,    int64_t  count379 ) {
    struct Cell_449  temp989;
    return ( (struct Cell_449 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp989 ) ) ) ) ) ) ) ) );
}

static  struct Cell_449 *   get_dash_ptr987 (    struct Slice_448  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_449 *  elem_dash_ptr2173 = ( (  offset_dash_ptr988 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set986 (    struct Slice_448  slice2187 ,    size_t  i2189 ,    struct Cell_449  x2191 ) {
    struct Cell_449 *  ep2192 = ( (  get_dash_ptr987 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

struct Maybe_993 {
    enum {
        Maybe_993_None_t,
        Maybe_993_Just_t,
    } tag;
    union {
        struct {
            struct Cell_449  field0;
        } Maybe_993_Just_s;
    } stuff;
};

static struct Maybe_993 Maybe_993_Just (  struct Cell_449  field0 ) {
    return ( struct Maybe_993 ) { .tag = Maybe_993_Just_t, .stuff = { .Maybe_993_Just_s = { .field0 = field0 } } };
};

static  struct Cell_449   undefined994 (  ) {
    struct Cell_449  temp995;
    return (  temp995 );
}

static  struct Cell_449   or_dash_fail992 (    struct Maybe_993  x1353 ,    struct StrConcat_304  errmsg1355 ) {
    struct Maybe_993  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_993_None_t ) {
        ( (  panic303 ) ( (  errmsg1355 ) ) );
        return ( (  undefined994 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_993_Just_t ) {
            return ( dref1356 .stuff .Maybe_993_Just_s .field0 );
        }
    }
}

static  struct Maybe_993   try_dash_get996 (    struct Slice_448  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp302 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_993) { .tag = Maybe_993_None_t } );
    }
    struct Cell_449 *  elem_dash_ptr2179 = ( (  offset_dash_ptr988 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_993_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  struct Cell_449   get991 (    struct Slice_448  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail992 ) ( ( (  try_dash_get996 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_449   elem_dash_get990 (    struct Slice_448  self2195 ,    size_t  idx2197 ) {
    return ( (  get991 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  enum Unit_8   lam985 (   struct env981* env ,    int32_t  i2332 ) {
    return ( (  set986 ) ( ( env->s2328 ) ,  ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get990 ( ( env->s2328 ) , ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map979 (    struct Slice_448  s2328 ,    struct Cell_449 (*  fun2330 )(    struct Cell_449  ) ) {
    struct env981 envinst981 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each980 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32311 ) ( (  op_dash_sub458 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion982){ .fun = (  enum Unit_8  (*) (  struct env981*  ,    int32_t  ) )lam985 , .env =  envinst981 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_449   default_dash_cell998 (  ) {
    return ( (struct Cell_449) { .f_c = ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_bg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_449   lam997 (    struct Cell_449  dref3681 ) {
    return ( (  default_dash_cell998 ) ( ) );
}

struct env1001 {
    struct Slice_448  s2328;
    ;
    struct Cell_449 (*  fun2330 )(    struct Cell_449  );
    ;
    ;
};

struct envunion1002 {
    enum Unit_8  (*fun) (  struct env1001*  ,    int32_t  );
    struct env1001 env;
};

static  enum Unit_8   for_dash_each1000 (    struct Range_166  iterable1099 ,   struct envunion1002  fun1101 ) {
    struct RangeIter_169  temp1003 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp1003 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion1002  temp1004 = (  fun1101 );
                ( temp1004.fun ( &temp1004.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1005 (   struct env1001* env ,    int32_t  i2332 ) {
    return ( (  set986 ) ( ( env->s2328 ) ,  ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get990 ( ( env->s2328 ) , ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map999 (    struct Slice_448  s2328 ,    struct Cell_449 (*  fun2330 )(    struct Cell_449  ) ) {
    struct env1001 envinst1001 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each1000 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32311 ) ( (  op_dash_sub458 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1002){ .fun = (  enum Unit_8  (*) (  struct env1001*  ,    int32_t  ) )lam1005 , .env =  envinst1001 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_449   lam1006 (    struct Cell_449  dref3683 ) {
    return ( (  default_dash_cell998 ) ( ) );
}

static  struct Screen_447   mk_dash_screen965 (    struct Tui_97 *  tui3677 ,    enum CAllocator_10  al3679 ) {
    struct Slice_448  cur3680 = ( (  allocate966 ) ( (  al3679 ) ,  ( (  u32_dash_size971 ) ( (  op_dash_mul183 ( ( ( * (  tui3677 ) ) .f_width ) , ( ( * (  tui3677 ) ) .f_height ) ) ) ) ) ) );
    ( (  map979 ) ( (  cur3680 ) ,  (  lam997 ) ) );
    struct Slice_448  prev3682 = ( (  allocate966 ) ( (  al3679 ) ,  ( (  u32_dash_size971 ) ( (  op_dash_mul183 ( ( ( * (  tui3677 ) ) .f_width ) , ( ( * (  tui3677 ) ) .f_height ) ) ) ) ) ) );
    ( (  map999 ) ( (  prev3682 ) ,  (  lam1006 ) ) );
    return ( (struct Screen_447) { .f_current = (  cur3680 ) , .f_previous = (  prev3682 ) , .f_al = (  al3679 ) , .f_tui = (  tui3677 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) } );
}

enum MouseButton_1014 {
    MouseButton_1014_MouseLeft,
    MouseButton_1014_MouseMiddle,
    MouseButton_1014_MouseRight,
    MouseButton_1014_ScrollUp,
    MouseButton_1014_ScrollDown,
};

struct MouseEvent_1013 {
    enum MouseButton_1014  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_1012 {
    enum {
        InputEvent_1012_Key_t,
        InputEvent_1012_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_441  field0;
        } InputEvent_1012_Key_s;
        struct {
            struct MouseEvent_1013  field0;
        } InputEvent_1012_Mouse_s;
    } stuff;
};

static struct InputEvent_1012 InputEvent_1012_Key (  struct Key_441  field0 ) {
    return ( struct InputEvent_1012 ) { .tag = InputEvent_1012_Key_t, .stuff = { .InputEvent_1012_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_1012 InputEvent_1012_Mouse (  struct MouseEvent_1013  field0 ) {
    return ( struct InputEvent_1012 ) { .tag = InputEvent_1012_Mouse_t, .stuff = { .InputEvent_1012_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_1011 {
    enum {
        Maybe_1011_None_t,
        Maybe_1011_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_1012  field0;
        } Maybe_1011_Just_s;
    } stuff;
};

static struct Maybe_1011 Maybe_1011_Just (  struct InputEvent_1012  field0 ) {
    return ( struct Maybe_1011 ) { .tag = Maybe_1011_Just_t, .stuff = { .Maybe_1011_Just_s = { .field0 = field0 } } };
};

struct envunion1010 {
    struct Maybe_1011  (*fun) (  struct env95*  ,    struct Tui_97 *  );
    struct env95 env;
};

struct env1009 {
    struct env95 envinst95;
    struct Tui_97 *  tui4910;
};

struct envunion1015 {
    struct Maybe_1011  (*fun) (  struct env1009*  );
    struct env1009 env;
};

struct FunIter_1008 {
    struct envunion1015  f_fun;
    bool  f_finished;
};

static  struct FunIter_1008   into_dash_iter1016 (    struct FunIter_1008  self1053 ) {
    return (  self1053 );
}

static  struct FunIter_1008   from_dash_function1017 (   struct envunion1015  fun1061 ) {
    return ( (struct FunIter_1008) { .f_fun = (  fun1061 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions1022 (   struct env94* env ,    struct Tui_97 *  tui3643 ) {
    if ( ( ! ( ( * ( env->tui_dash_global_dash_state3572 ) ) .f_should_dash_resize ) ) ) {
        return ( false );
    }
    (*  tui3643 ) .f_should_dash_redraw = ( true );
    (* env->tui_dash_global_dash_state3572 ) .f_should_dash_resize = ( false );
    struct Tuple2_929  dim3644 = ( (  get_dash_dimensions930 ) ( ) );
    uint32_t  w3645 = ( (  fst962 ) ( (  dim3644 ) ) );
    uint32_t  h3646 = ( (  snd963 ) ( (  dim3644 ) ) );
    (*  tui3643 ) .f_width = (  w3645 );
    (*  tui3643 ) .f_height = (  h3646 );
    return ( true );
}

static  char   undefined1025 (  ) {
    char  temp1026;
    return (  temp1026 );
}

struct Maybe_1027 {
    enum {
        Maybe_1027_None_t,
        Maybe_1027_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_1027_Just_s;
    } stuff;
};

static struct Maybe_1027 Maybe_1027_Just (  char  field0 ) {
    return ( struct Maybe_1027 ) { .tag = Maybe_1027_Just_t, .stuff = { .Maybe_1027_Just_s = { .field0 = field0 } } };
};

struct Pollfd_1029 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr1030 (    struct Pollfd_1029 *  p398 ) {
    return ( (struct pollfd * ) (  p398 ) );
}

static  void *   cast_dash_ptr1033 (    char *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1034 (    char  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  char   zeroed1031 (  ) {
    char  temp1032;
    char  x648 = (  temp1032 );
    ( ( memset ) ( ( (  cast_dash_ptr1033 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1034 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Maybe_1027   read_dash_byte1028 (    int32_t  timeout_dash_ms3566 ) {
    struct Pollfd_1029  pfd3567 = ( (struct Pollfd_1029) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral941 ( 1 ) ) , .f_revents = (  from_dash_integral941 ( 0 ) ) } );
    if ( (  cmp173 ( ( ( poll ) ( ( (  cast_dash_ptr1030 ) ( ( & (  pfd3567 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3566 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_1027) { .tag = Maybe_1027_None_t } );
    }
    char  c3568 = ( ( (  zeroed1031 ) ( ) ) );
    if ( (  cmp173 ( ( ( read ) ( ( (  stdin_dash_fileno847 ) ( ) ) ,  ( (  cast_dash_ptr1033 ) ( ( & (  c3568 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_1027) { .tag = Maybe_1027_None_t } );
    }
    return ( ( Maybe_1027_Just ) ( (  c3568 ) ) );
}

static  char   u8_dash_ascii1035 (    uint8_t  b1491 ) {
    return ( ( (char ) (  b1491 ) ) );
}

static  uint8_t *   cast1039 (    uint32_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed1037 (    uint8_t  x651 ) {
    uint32_t  temp1038 = ( (  zeroed945 ) ( ) );
    uint32_t *  y652 = ( &temp1038 );
    uint8_t *  yp653 = ( (  cast1039 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  uint32_t   u8_dash_u321036 (    uint8_t  x756 ) {
    return ( (  cast_dash_on_dash_zeroed1037 ) ( (  x756 ) ) );
}

struct Map_1042 {
    struct StrViewIter_293  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1042 Map_1042_Map (  struct StrViewIter_293  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1042 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1042   into_dash_iter1043 (    struct Map_1042  self804 ) {
    return (  self804 );
}

static  struct Maybe_858   next1044 (    struct Map_1042 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next352 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_858) { .tag = Maybe_858_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_858_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce1041 (    struct Map_1042  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct Map_1042  it1124 = ( (  into_dash_iter1043 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_858  dref1125 = ( (  next1044 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_858_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_858_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_858_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1045 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1045);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp1046;
    return (  temp1046 );
}

static  struct Map_1042   map1047 (    struct StrView_27  iterable813 ,    uint32_t (*  fun815 )(    struct Char_65  ) ) {
    struct StrViewIter_293  it816 = ( (  into_dash_iter296 ) ( (  iterable813 ) ) );
    return ( ( Map_1042_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  uint8_t *   cast1052 (    size_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  size_t   cast_dash_on_dash_zeroed1050 (    uint8_t  x651 ) {
    size_t  temp1051 = ( (  zeroed974 ) ( ) );
    size_t *  y652 = ( &temp1051 );
    uint8_t *  yp653 = ( (  cast1052 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  size_t   u8_dash_size1049 (    uint8_t  x747 ) {
    return ( (  cast_dash_on_dash_zeroed1050 ) ( (  x747 ) ) );
}

struct StrConcat_1055 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_1055 StrConcat_1055_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1055 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1054 {
    struct StrConcat_1055  field0;
    struct StrView_27  field1;
};

static struct StrConcat_1054 StrConcat_1054_StrConcat (  struct StrConcat_1055  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_1054 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1059 {
    struct StrView_27  field0;
    struct StrConcat_1054  field1;
};

static struct StrConcat_1059 StrConcat_1059_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1054  field1 ) {
    return ( struct StrConcat_1059 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1058 {
    struct StrConcat_1059  field0;
    struct Char_65  field1;
};

static struct StrConcat_1058 StrConcat_1058_StrConcat (  struct StrConcat_1059  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1058 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1062 (    struct StrConcat_1055  self1302 ) {
    struct StrConcat_1055  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str317 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1061 (    struct StrConcat_1054  self1302 ) {
    struct StrConcat_1054  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1062 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str310 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1060 (    struct StrConcat_1059  self1302 ) {
    struct StrConcat_1059  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str1061 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1057 (    struct StrConcat_1058  self1302 ) {
    struct StrConcat_1058  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1060 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic1056 (    struct StrConcat_1054  errmsg1343 ) {
    ( (  print_dash_str1057 ) ( ( ( StrConcat_1058_StrConcat ) ( ( ( StrConcat_1059_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail1053 (    struct Maybe_74  x1353 ,    struct StrConcat_1054  errmsg1355 ) {
    struct Maybe_74  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_74_None_t ) {
        ( (  panic1056 ) ( (  errmsg1355 ) ) );
        return ( (  undefined592 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_74_Just_t ) {
            return ( dref1356 .stuff .Maybe_74_Just_s .field0 );
        }
    }
}

static  enum Ordering_174   cmp1064 (    struct Char_65  l1459 ,    struct Char_65  r1461 ) {
    if ( ( ( !  eq283 ( ( (  l1459 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq283 ( ( (  r1461 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp1065 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp1065);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (  cmp341 ) ( ( (  char_dash_u8671 ) ( (  l1459 ) ) ) ,  ( (  char_dash_u8671 ) ( (  r1461 ) ) ) ) );
}

static  uint8_t   op_dash_sub1066 (    uint8_t  l274 ,    uint8_t  r276 ) {
    return ( (  l274 ) - (  r276 ) );
}

static  uint8_t   op_dash_add1067 (    uint8_t  l269 ,    uint8_t  r271 ) {
    return ( (  l269 ) + (  r271 ) );
}

static  struct Maybe_74   hex_dash_digit1063 (    struct Char_65  c3128 ) {
    if ( ( (  cmp1064 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1064 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_sub1066 ( ( (  char_dash_u8671 ) ( (  c3128 ) ) ) , ( (  char_dash_u8671 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp1064 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1064 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_add1067 ( (  op_dash_sub1066 ( ( (  char_dash_u8671 ) ( (  c3128 ) ) ) , ( (  char_dash_u8671 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral328 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp1064 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1064 ( (  c3128 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_add1067 ( (  op_dash_sub1066 ( ( (  char_dash_u8671 ) ( (  c3128 ) ) ) , ( (  char_dash_u8671 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral328 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
}

static  uint32_t   lam1048 (    struct Char_65  c3133 ) {
    return ( (  from_dash_integral181 ) ( ( (  u8_dash_size1049 ) ( ( (  or_dash_fail1053 ) ( ( (  hex_dash_digit1063 ) ( (  c3133 ) ) ) ,  ( ( StrConcat_1054_StrConcat ) ( ( ( StrConcat_1055_StrConcat ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ,  (  c3133 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1068 (    uint32_t  elem3135 ,    uint32_t  b3137 ) {
    return (  op_dash_add187 ( (  op_dash_mul183 ( (  b3137 ) , (  from_dash_integral181 ( 16 ) ) ) ) , (  elem3135 ) ) );
}

static  uint32_t   from_dash_hex1040 (    struct StrView_27  arr3131 ) {
    return ( (  reduce1041 ) ( ( (  map1047 ) ( (  arr3131 ) ,  (  lam1048 ) ) ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  lam1068 ) ) );
}

static  bool   eq1070 (    char  l415 ,    char  r417 ) {
    return ( (  l415 ) == (  r417 ) );
}

struct Array_1071 {
    char _arr [32];
};

static  void *   cast_dash_ptr1075 (    struct Array_1071 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1076 (    struct Array_1071  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Array_1071   zeroed1073 (  ) {
    struct Array_1071  temp1074;
    struct Array_1071  x648 = (  temp1074 );
    ( ( memset ) ( ( (  cast_dash_ptr1075 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1076 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  char *   cast_dash_ptr1080 (    struct Array_1071 *  p398 ) {
    return ( (char * ) (  p398 ) );
}

static  char *   offset_dash_ptr1081 (    char *  x377 ,    int64_t  count379 ) {
    char  temp1082;
    return ( (char * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1082 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr1079 (    struct Array_1071 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2030 = ( ( (  cast_dash_ptr1080 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr1081 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  enum Unit_8   set1078 (    struct Array_1071 *  arr2039 ,    size_t  i2042 ,    char  e2044 ) {
    char *  p2045 = ( (  get_dash_ptr1079 ) ( (  arr2039 ) ,  (  i2042 ) ) );
    (*  p2045 ) = (  e2044 );
    return ( Unit_8_Unit );
}

struct Slice_1084 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail1087 (    struct Maybe_1027  x1353 ,    struct StrConcat_304  errmsg1355 ) {
    struct Maybe_1027  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1027_None_t ) {
        ( (  panic303 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1025 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1027_Just_t ) {
            return ( dref1356 .stuff .Maybe_1027_Just_s .field0 );
        }
    }
}

static  struct Maybe_1027   try_dash_get1088 (    struct Slice_1084  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp302 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1027) { .tag = Maybe_1027_None_t } );
    }
    char *  elem_dash_ptr2179 = ( (  offset_dash_ptr1081 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_1027_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  char   get1086 (    struct Slice_1084  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail1087 ) ( ( (  try_dash_get1088 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get1085 (    struct Slice_1084  self2195 ,    size_t  idx2197 ) {
    return ( (  get1086 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

struct Scanner_1089 {
    struct StrViewIter_293  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1089   mk_dash_from_dash_str1091 (    struct StrView_27  s3405 ) {
    return ( (struct Scanner_1089) { .f_s = ( (  chars295 ) ( (  s3405 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_1095 (    uint8_t *  x382 ,    size_t  count384 ) {
    return ( (  offset_dash_ptr353 ) ( (  x382 ) ,  ( (int64_t ) (  count384 ) ) ) );
}

static  struct StrView_27   substr1092 (    struct StrView_27  s2596 ,    size_t  from2598 ,    size_t  to2600 ) {
    size_t  from_dash_bs2601 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_169  temp1093 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( (  from2598 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1094 =  next172 (&temp1093);
        if (  __cond1094 .tag == 0 ) {
            break;
        }
        int32_t  dref2602 =  __cond1094 .stuff .Maybe_171_Just_s .field0;
        if ( (  cmp302 ( (  from_dash_bs2601 ) , ( ( (  s2596 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2601 = (  op_dash_add356 ( (  from_dash_bs2601 ) , ( (  next_dash_char340 ) ( ( (  offset_dash_ptr_prime_1095 ) ( ( ( (  s2596 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2601 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2603 = (  from_dash_bs2601 );
    struct RangeIter_169  temp1096 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( (  to2600 ) ) ) , ( (  size_dash_i32311 ) ( (  from2598 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1097 =  next172 (&temp1096);
        if (  __cond1097 .tag == 0 ) {
            break;
        }
        int32_t  dref2604 =  __cond1097 .stuff .Maybe_171_Just_s .field0;
        if ( (  cmp302 ( (  to_dash_bs2603 ) , ( ( (  s2596 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2603 = (  op_dash_add356 ( (  to_dash_bs2603 ) , ( (  next_dash_char340 ) ( ( (  offset_dash_ptr_prime_1095 ) ( ( ( (  s2596 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2603 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice586 ) ( ( (  s2596 ) .f_contents ) ,  (  from_dash_bs2601 ) ,  (  to_dash_bs2603 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr1100 (    char *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   cast_dash_slice1099 (    struct Slice_1084  s2354 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1100 ) ( ( (  s2354 ) .f_ptr ) ) ) , .f_count = ( (  s2354 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice1098 (    struct Slice_1084  sl2570 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1099 ) ( (  sl2570 ) ) ) } );
}

struct Maybe_1101 {
    enum {
        Maybe_1101_None_t,
        Maybe_1101_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_1101_Just_s;
    } stuff;
};

static struct Maybe_1101 Maybe_1101_Just (  int64_t  field0 ) {
    return ( struct Maybe_1101 ) { .tag = Maybe_1101_Just_t, .stuff = { .Maybe_1101_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_1103 {
    struct Scanner_1089  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_1089   into_dash_iter1106 (    struct Scanner_1089  self3396 ) {
    return (  self3396 );
}

static  struct Scanner_1089   into_dash_iter1105 (    struct Scanner_1089 *  self793 ) {
    return ( (  into_dash_iter1106 ) ( ( * (  self793 ) ) ) );
}

static  struct TakeWhile_1103   take_dash_while1104 (    struct Scanner_1089 *  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1103) { .f_it = ( (  into_dash_iter1105 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  struct Char_65   min1109 (    struct Char_65  l1367 ,    struct Char_65  r1369 ) {
    if ( (  cmp1064 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Char_65   max1110 (    struct Char_65  l1372 ,    struct Char_65  r1374 ) {
    if ( (  cmp1064 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  bool   between1108 (    struct Char_65  c1377 ,    struct Char_65  l1379 ,    struct Char_65  r1381 ) {
    struct Char_65  from1382 = ( (  min1109 ) ( (  l1379 ) ,  (  r1381 ) ) );
    struct Char_65  to1383 = ( (  max1110 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp1064 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp1064 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  bool   is_dash_digit1107 (    struct Char_65  c1506 ) {
    return ( (  eq283 ( ( (  c1506 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1108 ) ( (  c1506 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) ) );
}

static  struct Maybe_351   next1114 (    struct Scanner_1089 *  self3391 ) {
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

static  struct Maybe_351   next1113 (    struct TakeWhile_1103 *  self989 ) {
    struct Maybe_351  mx990 = ( (  next1114 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
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

static  struct TakeWhile_1103   into_dash_iter1116 (    struct TakeWhile_1103  self986 ) {
    return (  self986 );
}

static  struct Maybe_351   head1112 (    struct TakeWhile_1103  it1167 ) {
    struct TakeWhile_1103  temp1115 = ( (  into_dash_iter1116 ) ( (  it1167 ) ) );
    return ( (  next1113 ) ( ( &temp1115 ) ) );
}

static  bool   null1111 (    struct TakeWhile_1103  it1176 ) {
    struct Maybe_351  dref1177 = ( (  head1112 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_351_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env1119 {
    struct Scanner_1089 *  it1218;
    ;
};

struct envunion1120 {
    struct Maybe_351  (*fun) (  struct env1119*  ,    int32_t  );
    struct env1119 env;
};

static  enum Unit_8   for_dash_each1118 (    struct Range_166  iterable1099 ,   struct envunion1120  fun1101 ) {
    struct RangeIter_169  temp1121 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp1121 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion1120  temp1122 = (  fun1101 );
                ( temp1122.fun ( &temp1122.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_351   lam1123 (   struct env1119* env ,    int32_t  dref1221 ) {
    return ( (  next1114 ) ( ( env->it1218 ) ) );
}

static  enum Unit_8   drop_prime_1117 (    struct Scanner_1089 *  it1218 ,    size_t  n1220 ) {
    struct env1119 envinst1119 = {
        .it1218 =  it1218 ,
    };
    ( (  for_dash_each1118 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32311 ) ( (  n1220 ) ) ) ) ) ,  ( (struct envunion1120){ .fun = (  struct Maybe_351  (*) (  struct env1119*  ,    int32_t  ) )lam1123 , .env =  envinst1119 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce1125 (    struct TakeWhile_1103  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct TakeWhile_1103  it1124 = ( (  into_dash_iter1116 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next1113 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1126 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1126);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1127;
    return (  temp1127 );
}

static  size_t   lam1128 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1124 (    struct TakeWhile_1103  it1129 ) {
    return ( (  reduce1125 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1128 ) ) );
}

static  struct TakeWhile_1103   chars1130 (    struct TakeWhile_1103  self1889 ) {
    return (  self1889 );
}

static  struct Maybe_1101   reduce1131 (    struct TakeWhile_1103  iterable1118 ,    struct Maybe_1101  base1120 ,    struct Maybe_1101 (*  fun1122 )(    struct Char_65  ,    struct Maybe_1101  ) ) {
    struct Maybe_1101  x1123 = (  base1120 );
    struct TakeWhile_1103  it1124 = ( (  into_dash_iter1116 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next1113 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1132 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1132);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_1101  temp1133;
    return (  temp1133 );
}

static  void *   cast_dash_ptr1141 (    int32_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1142 (    int32_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  int32_t   zeroed1139 (  ) {
    int32_t  temp1140;
    int32_t  x648 = (  temp1140 );
    ( ( memset ) ( ( (  cast_dash_ptr1141 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1142 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint8_t *   cast1143 (    int32_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1137 (    uint8_t  x651 ) {
    int32_t  temp1138 = ( (  zeroed1139 ) ( ) );
    int32_t *  y652 = ( &temp1138 );
    uint8_t *  yp653 = ( (  cast1143 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  int32_t   u8_dash_i321136 (    uint8_t  x753 ) {
    return ( (  cast_dash_on_dash_zeroed1137 ) ( (  x753 ) ) );
}

static  struct Maybe_171   parse_dash_digit1135 (    struct Char_65  c1531 ) {
    if ( ( (  is_dash_digit1107 ) ( (  c1531 ) ) ) ) {
        return ( ( Maybe_171_Just ) ( ( (  u8_dash_i321136 ) ( (  op_dash_sub1066 ( ( (  char_dash_u8671 ) ( (  c1531 ) ) ) , ( (  char_dash_u8671 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
}

static  int64_t   i32_dash_i641144 (    int32_t  x684 ) {
    return ( (int64_t ) (  x684 ) );
}

static  struct Maybe_1101   sequence_dash_maybe1134 (    struct Char_65  e1935 ,    struct Maybe_1101  b1937 ) {
    struct Maybe_1101  dref1938 = (  b1937 );
    if ( dref1938.tag == Maybe_1101_None_t ) {
        return ( (struct Maybe_1101) { .tag = Maybe_1101_None_t } );
    }
    else {
        if ( dref1938.tag == Maybe_1101_Just_t ) {
            struct Maybe_171  dref1940 = ( (  parse_dash_digit1135 ) ( (  e1935 ) ) );
            if ( dref1940.tag == Maybe_171_None_t ) {
                return ( (struct Maybe_1101) { .tag = Maybe_1101_None_t } );
            }
            else {
                if ( dref1940.tag == Maybe_171_Just_t ) {
                    return ( ( Maybe_1101_Just ) ( (  op_dash_add366 ( (  op_dash_mul347 ( ( dref1938 .stuff .Maybe_1101_Just_s .field0 ) , (  from_dash_integral365 ( 10 ) ) ) ) , ( (  i32_dash_i641144 ) ( ( dref1940 .stuff .Maybe_171_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_1101   parse_dash_int1129 (    struct TakeWhile_1103  s1932 ) {
    struct TakeWhile_1103  cs1942 = ( (  chars1130 ) ( (  s1932 ) ) );
    struct Maybe_351  dref1943 = ( (  head1112 ) ( (  cs1942 ) ) );
    if ( dref1943.tag == Maybe_351_Just_t ) {
        return ( (  reduce1131 ) ( (  cs1942 ) ,  ( ( Maybe_1101_Just ) ( (  from_dash_integral365 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1134 ) ) );
    }
    else {
        if ( dref1943.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_1101) { .tag = Maybe_1101_None_t } );
        }
    }
}

static  struct Maybe_1101   scan_dash_int1102 (    struct Scanner_1089 *  sc3411 ) {
    struct TakeWhile_1103  digit_dash_chars3412 = ( (  take_dash_while1104 ) ( (  sc3411 ) ,  (  is_dash_digit1107 ) ) );
    if ( ( (  null1111 ) ( (  digit_dash_chars3412 ) ) ) ) {
        return ( (struct Maybe_1101) { .tag = Maybe_1101_None_t } );
    }
    ( (  drop_prime_1117 ) ( (  sc3411 ) ,  ( (  count1124 ) ( (  digit_dash_chars3412 ) ) ) ) );
    return ( (  parse_dash_int1129 ) ( (  digit_dash_chars3412 ) ) );
}

static  int32_t   i64_dash_i321146 (    int64_t  x699 ) {
    return ( (int32_t ) (  x699 ) );
}

struct StrConcat_1148 {
    struct StrView_27  field0;
    int64_t  field1;
};

static struct StrConcat_1148 StrConcat_1148_StrConcat (  struct StrView_27  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_1148 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1150 {
    struct StrView_27  field0;
    struct StrConcat_1148  field1;
};

static struct StrConcat_1150 StrConcat_1150_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1148  field1 ) {
    return ( struct StrConcat_1150 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1152 {
    struct StrConcat_1150  field0;
    struct Char_65  field1;
};

static struct StrConcat_1152 StrConcat_1152_StrConcat (  struct StrConcat_1150  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1152 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1157 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1156 {
    struct StrViewIter_293  f_left;
    struct IntStrIter_1157  f_right;
};

struct StrConcatIter_1155 {
    struct StrViewIter_293  f_left;
    struct StrConcatIter_1156  f_right;
};

enum EmptyIter_1159 {
    EmptyIter_1159_EmptyIter,
};

struct AppendIter_1158 {
    enum EmptyIter_1159  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

struct StrConcatIter_1154 {
    struct StrConcatIter_1155  f_left;
    struct AppendIter_1158  f_right;
};

static  struct StrConcatIter_1154   into_dash_iter1161 (    struct StrConcatIter_1154  self1290 ) {
    return (  self1290 );
}

struct env1168 {
    ;
    int64_t  base1386;
};

struct envunion1169 {
    int64_t  (*fun) (  struct env1168*  ,    int32_t  ,    int64_t  );
    struct env1168 env;
};

static  int64_t   reduce1167 (    struct Range_166  iterable1118 ,    int64_t  base1120 ,   struct envunion1169  fun1122 ) {
    int64_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion1169  temp1170 = (  fun1122 );
                x1123 = ( temp1170.fun ( &temp1170.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1171 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1171);
    abort ( );
    ( Unit_8_Unit );
    int64_t  temp1172;
    return (  temp1172 );
}

static  int64_t   lam1173 (   struct env1168* env ,    int32_t  item1390 ,    int64_t  x1392 ) {
    return (  op_dash_mul347 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  int64_t   pow1166 (    int64_t  base1386 ,    int32_t  p1388 ) {
    struct env1168 envinst1168 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce1167 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral365 ( 1 ) ) ,  ( (struct envunion1169){ .fun = (  int64_t  (*) (  struct env1168*  ,    int32_t  ,    int64_t  ) )lam1173 , .env =  envinst1168 } ) ) );
}

static  int64_t   op_dash_div1174 (    int64_t  l218 ,    int64_t  r220 ) {
    return ( (  l218 ) / (  r220 ) );
}

static  uint8_t   cast1175 (    int64_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  int64_t   op_dash_sub1176 (    int64_t  l208 ,    int64_t  r210 ) {
    return ( (  l208 ) - (  r210 ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1178 (    uint8_t *  ptr786 ,    uint8_t  b788 ) {
    size_t  s789 = ( ( (size_t ) (  ptr786 ) ) );
    size_t  exp790 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add356 ( (  op_dash_sub458 ( (  s789 ) , ( (  u8_dash_size1049 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer325 ) ( (  ptr786 ) ) ) ) ) ) ) , (  op_dash_mul531 ( (  exp790 ) , ( (  u8_dash_size1049 ) ( (  b788 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1179 (    size_t  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  struct Char_65   char_dash_from_dash_u81177 (    uint8_t  b1277 ) {
    uint8_t *  ptr1278 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1178 ) ( ( ( (  cast1179 ) ( ( (  u8_dash_size1049 ) ( (  b1277 ) ) ) ) ) ) ,  (  from_dash_integral328 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr1278 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_351   next1165 (    struct IntStrIter_1157 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    int64_t  trim_dash_down1400 = ( (  pow1166 ) ( (  from_dash_integral365 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1401 = (  op_dash_div1174 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    int64_t  upper_dash_mask1402 = (  op_dash_mul347 ( (  op_dash_div1174 ( (  upper1401 ) , (  from_dash_integral365 ( 10 ) ) ) ) , (  from_dash_integral365 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast1175 ) ( (  op_dash_sub1176 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81177 ) ( (  op_dash_add1067 ( (  digit1403 ) , (  from_dash_integral328 ( 48 ) ) ) ) ) );
    return ( ( Maybe_351_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_351   next1164 (    struct StrConcatIter_1156 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1165 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next1163 (    struct StrConcatIter_1155 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1164 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next1181 (    enum EmptyIter_1159 *  dref800 ) {
    return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
}

static  struct Maybe_351   next1180 (    struct AppendIter_1158 *  self1047 ) {
    struct Maybe_351  dref1048 = ( (  next1181 ) ( ( & ( ( * (  self1047 ) ) .f_it ) ) ) );
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

static  struct Maybe_351   next1162 (    struct StrConcatIter_1154 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1163 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1153 (    struct StrConcatIter_1154  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_1154  temp1160 = ( (  into_dash_iter1161 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1154 *  it1102 = ( &temp1160 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next1162 ) ( (  it1102 ) ) );
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

static  enum Ordering_174   cmp1190 (    int64_t  l163 ,    int64_t  r165 ) {
    return ( builtin_int64_tcmp( (  l163 ) , (  r165 ) ) );
}

static  bool   eq1192 (    int64_t  l110 ,    int64_t  r112 ) {
    return ( (  l110 ) == (  r112 ) );
}

static  int32_t   count_dash_digits1191 (    int64_t  self1407 ) {
    if ( (  eq1192 ( (  self1407 ) , (  from_dash_integral365 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp1190 ( (  self1407 ) , (  from_dash_integral365 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div1174 ( (  self1407 ) , (  from_dash_integral365 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_1157   int_dash_iter1189 (    int64_t  int1411 ) {
    if ( (  cmp1190 ( (  int1411 ) , (  from_dash_integral365 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1157) { .f_int = (  op_dash_neg384 ( (  int1411 ) ) ) , .f_len = ( (  count_dash_digits1191 ) ( (  op_dash_neg384 ( (  int1411 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1157) { .f_int = (  int1411 ) , .f_len = ( (  count_dash_digits1191 ) ( (  int1411 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1157   chars1188 (    int64_t  self1808 ) {
    return ( (  int_dash_iter1189 ) ( (  self1808 ) ) );
}

static  struct StrConcatIter_1156   into_dash_iter1187 (    struct StrConcat_1148  dref1297 ) {
    return ( (struct StrConcatIter_1156) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1188 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1156   chars1186 (    struct StrConcat_1148  self1308 ) {
    return ( (  into_dash_iter1187 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1155   into_dash_iter1185 (    struct StrConcat_1150  dref1297 ) {
    return ( (struct StrConcatIter_1155) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1186 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1155   chars1184 (    struct StrConcat_1150  self1308 ) {
    return ( (  into_dash_iter1185 ) ( (  self1308 ) ) );
}

static  enum EmptyIter_1159   into_dash_iter1197 (    enum EmptyIter_1159  self798 ) {
    return (  self798 );
}

static  struct AppendIter_1158   append1196 (    enum EmptyIter_1159  it1031 ,    struct Char_65  e1033 ) {
    return ( (struct AppendIter_1158) { .f_it = ( (  into_dash_iter1197 ) ( (  it1031 ) ) ) , .f_elem = (  e1033 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_1158   cons1195 (    enum EmptyIter_1159  it1036 ,    struct Char_65  e1038 ) {
    return ( (  append1196 ) ( (  it1036 ) ,  (  e1038 ) ) );
}

static  enum EmptyIter_1159   nil1198 (  ) {
    return ( EmptyIter_1159_EmptyIter );
}

static  struct AppendIter_1158   single1194 (    struct Char_65  e1041 ) {
    return ( (  cons1195 ) ( ( (  nil1198 ) ( ) ) ,  (  e1041 ) ) );
}

static  struct AppendIter_1158   chars1193 (    struct Char_65  self1286 ) {
    return ( (  single1194 ) ( (  self1286 ) ) );
}

static  struct StrConcatIter_1154   into_dash_iter1183 (    struct StrConcat_1152  dref1297 ) {
    return ( (struct StrConcatIter_1154) { .f_left = ( (  chars1184 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1154   chars1182 (    struct StrConcat_1152  self1308 ) {
    return ( (  into_dash_iter1183 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print1151 (    struct StrConcat_1152  s1335 ) {
    ( (  for_dash_each1153 ) ( ( (  chars1182 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1149 (    struct StrConcat_1150  s1338 ) {
    ( (  print1151 ) ( ( ( StrConcat_1152_StrConcat ) ( (  s1338 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_1014   undefined1199 (  ) {
    enum MouseButton_1014  temp1200;
    return (  temp1200 );
}

static  enum MouseButton_1014   panic_prime_1147 (    struct StrConcat_1148  errmsg2149 ) {
    ( (  println1149 ) ( ( ( StrConcat_1150_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg2149 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1199 ) ( ) );
}

static  enum MouseButton_1014   btn_dash_to_dash_mouse_dash_button1145 (    int64_t  btn3603 ) {
    return ( {  int32_t  dref3604 = ( (  i64_dash_i321146 ) ( (  btn3603 ) ) ) ;  eq696 (  dref3604 ,  from_dash_integral56 ( 0 ) ) ? ( MouseButton_1014_MouseLeft ) :  eq696 (  dref3604 ,  from_dash_integral56 ( 1 ) ) ? ( MouseButton_1014_MouseMiddle ) :  eq696 (  dref3604 ,  from_dash_integral56 ( 2 ) ) ? ( MouseButton_1014_MouseRight ) :  eq696 (  dref3604 ,  from_dash_integral56 ( 64 ) ) ? ( MouseButton_1014_ScrollUp ) :  eq696 (  dref3604 ,  from_dash_integral56 ( 65 ) ) ? ( MouseButton_1014_ScrollDown ) : ( (  panic_prime_1147 ) ( ( ( StrConcat_1148_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3603 ) ) ) ) ) ; } );
}

static  struct Scanner_1089   mk1202 (    struct StrView_27  s3399 ) {
    return ( (struct Scanner_1089) { .f_s = ( (  into_dash_iter296 ) ( (  s3399 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_1011   parse_dash_csi1083 (    struct Slice_1084  seq3610 ) {
    if ( (  eq283 ( ( (  seq3610 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
    }
    char  last3611 = (  elem_dash_get1085 ( (  seq3610 ) , (  op_dash_sub458 ( ( (  seq3610 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq1070 ( (  elem_dash_get1085 ( (  seq3610 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) && ( (  eq1070 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) || (  eq1070 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_1089  temp1090 = ( (  mk_dash_from_dash_str1091 ) ( ( (  substr1092 ) ( ( (  from_dash_ascii_dash_slice1098 ) ( (  seq3610 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3610 ) .f_count ) ) ) ) );
        struct Scanner_1089 *  sc3612 = ( &temp1090 );
        struct Maybe_1101  dref3613 = ( (  scan_dash_int1102 ) ( (  sc3612 ) ) );
        if ( dref3613.tag == Maybe_1101_None_t ) {
            return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
        }
        else {
            if ( dref3613.tag == Maybe_1101_Just_t ) {
                ( (  next1114 ) ( (  sc3612 ) ) );
                struct Maybe_1101  dref3615 = ( (  scan_dash_int1102 ) ( (  sc3612 ) ) );
                if ( dref3615.tag == Maybe_1101_None_t ) {
                    return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
                }
                else {
                    if ( dref3615.tag == Maybe_1101_Just_t ) {
                        ( (  next1114 ) ( (  sc3612 ) ) );
                        struct Maybe_1101  dref3617 = ( (  scan_dash_int1102 ) ( (  sc3612 ) ) );
                        if ( dref3617.tag == Maybe_1101_None_t ) {
                            return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
                        }
                        else {
                            if ( dref3617.tag == Maybe_1101_Just_t ) {
                                return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Mouse ) ( ( (struct MouseEvent_1013) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1145 ) ( ( dref3613 .stuff .Maybe_1101_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub180 ( ( (  i64_dash_i321146 ) ( ( dref3615 .stuff .Maybe_1101_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub180 ( ( (  i64_dash_i321146 ) ( ( dref3617 .stuff .Maybe_1101_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq1070 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq283 ( ( (  seq3610 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq1070 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Up_t } ) ) ) ) );
        }
        if ( (  eq1070 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Down_t } ) ) ) ) );
        }
        if ( (  eq1070 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Right_t } ) ) ) ) );
        }
        if ( (  eq1070 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Left_t } ) ) ) ) );
        }
        if ( (  eq1070 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Home_t } ) ) ) ) );
        }
        if ( (  eq1070 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
    }
    if ( (  eq1070 ( (  last3611 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_1089  temp1201 = ( (  mk1202 ) ( ( (  from_dash_ascii_dash_slice1098 ) ( (  seq3610 ) ) ) ) );
        struct Scanner_1089 *  sc3619 = ( &temp1201 );
        struct Maybe_1101  dref3620 = ( (  scan_dash_int1102 ) ( (  sc3619 ) ) );
        if ( dref3620.tag == Maybe_1101_None_t ) {
            return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
        }
        else {
            if ( dref3620.tag == Maybe_1101_Just_t ) {
                return ( {  int32_t  dref3622 = ( (  i64_dash_i321146 ) ( ( dref3620 .stuff .Maybe_1101_Just_s .field0 ) ) ) ;  eq696 (  dref3622 ,  from_dash_integral56 ( 1 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Home_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 2 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Insert_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 3 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Delete_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 4 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_End_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 5 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_PageUp_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 6 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_PageDown_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 15 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_F5_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 17 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_F6_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 18 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_F7_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 19 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_F8_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 20 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_F9_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 21 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_F10_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 23 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_F11_t } ) ) ) ) ) :  eq696 (  dref3622 ,  from_dash_integral56 ( 24 ) ) ? ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_F12_t } ) ) ) ) ) : ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
}

static  struct Slice_1084   subslice1203 (    struct Slice_1084  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    char *  begin_dash_ptr2209 = ( (  offset_dash_ptr1081 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_1084) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub458 ( ( (  min587 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_1084) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  char *   cast1205 (    struct Array_1071 *  x395 ) {
    return ( (char * ) (  x395 ) );
}

static  struct Slice_1084   as_dash_slice1204 (    struct Array_1071 *  arr2052 ) {
    return ( (struct Slice_1084) { .f_ptr = ( (  cast1205 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1207 {
    enum {
        Maybe_1207_None_t,
        Maybe_1207_Just_t,
    } tag;
    union {
        struct {
            struct Key_441  field0;
        } Maybe_1207_Just_s;
    } stuff;
};

static struct Maybe_1207 Maybe_1207_Just (  struct Key_441  field0 ) {
    return ( struct Maybe_1207 ) { .tag = Maybe_1207_Just_t, .stuff = { .Maybe_1207_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1207   parse_dash_ss31208 (    char  c3607 ) {
    if ( (  eq1070 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1207_Just ) ( ( (struct Key_441) { .tag = Key_441_Up_t } ) ) );
    }
    if ( (  eq1070 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1207_Just ) ( ( (struct Key_441) { .tag = Key_441_Down_t } ) ) );
    }
    if ( (  eq1070 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1207_Just ) ( ( (struct Key_441) { .tag = Key_441_Right_t } ) ) );
    }
    if ( (  eq1070 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1207_Just ) ( ( (struct Key_441) { .tag = Key_441_Left_t } ) ) );
    }
    if ( (  eq1070 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1207_Just ) ( ( (struct Key_441) { .tag = Key_441_Home_t } ) ) );
    }
    if ( (  eq1070 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1207_Just ) ( ( (struct Key_441) { .tag = Key_441_End_t } ) ) );
    }
    if ( (  eq1070 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1207_Just ) ( ( (struct Key_441) { .tag = Key_441_F1_t } ) ) );
    }
    if ( (  eq1070 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1207_Just ) ( ( (struct Key_441) { .tag = Key_441_F2_t } ) ) );
    }
    if ( (  eq1070 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1207_Just ) ( ( (struct Key_441) { .tag = Key_441_F3_t } ) ) );
    }
    if ( (  eq1070 ( (  c3607 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1207_Just ) ( ( (struct Key_441) { .tag = Key_441_F4_t } ) ) );
    }
    return ( (struct Maybe_1207) { .tag = Maybe_1207_None_t } );
}

static  struct Maybe_1011   read_dash_key1023 (  ) {
    char  temp1024 = ( (  undefined1025 ) ( ) );
    char *  ch3624 = ( &temp1024 );
    struct Maybe_1027  dref3625 = ( (  read_dash_byte1028 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3625.tag == Maybe_1027_None_t ) {
        return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
    }
    else {
        if ( dref3625.tag == Maybe_1027_Just_t ) {
            (*  ch3624 ) = ( dref3625 .stuff .Maybe_1027_Just_s .field0 );
        }
    }
    if ( (  eq324 ( ( (  ascii_dash_u8595 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 13 ) ) ) ) ) {
        return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Enter_t } ) ) ) ) );
    }
    if ( (  eq324 ( ( (  ascii_dash_u8595 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 127 ) ) ) ) ) {
        return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp341 ( ( (  ascii_dash_u8595 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 27 ) ) ) == 0 ) && ( !  eq324 ( ( (  ascii_dash_u8595 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 9 ) ) ) ) ) ) {
        char  letter3627 = ( (  u8_dash_ascii1035 ) ( ( (  u32_dash_u8160 ) ( ( (  u32_dash_or867 ) ( ( (  u8_dash_u321036 ) ( ( (  ascii_dash_u8595 ) ( ( * (  ch3624 ) ) ) ) ) ) ,  ( (  from_dash_hex1040 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( ( Key_441_Ctrl ) ( (  letter3627 ) ) ) ) ) ) );
    }
    if ( ( !  eq324 ( ( (  ascii_dash_u8595 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 27 ) ) ) ) ) {
        if ( (  cmp341 ( ( (  ascii_dash_u8595 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral328 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1023 ) ( ) );
        } else {
            return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( ( Key_441_Char ) ( ( * (  ch3624 ) ) ) ) ) ) ) );
        }
    }
    char  temp1069 = ( (  undefined1025 ) ( ) );
    char *  ch23628 = ( &temp1069 );
    struct Maybe_1027  dref3629 = ( (  read_dash_byte1028 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3629.tag == Maybe_1027_None_t ) {
        return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3629.tag == Maybe_1027_Just_t ) {
            (*  ch23628 ) = ( dref3629 .stuff .Maybe_1027_Just_s .field0 );
        }
    }
    if ( (  eq1070 ( ( * (  ch23628 ) ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_1071  temp1072 = ( ( (  zeroed1073 ) ( ) ) );
        struct Array_1071 *  seq3631 = ( &temp1072 );
        int32_t  slen3632 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp173 ( (  slen3632 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp1077 = ( (  undefined1025 ) ( ) );
            char *  sc3633 = ( &temp1077 );
            struct Maybe_1027  dref3634 = ( (  read_dash_byte1028 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3634.tag == Maybe_1027_None_t ) {
                break;
            }
            else {
                if ( dref3634.tag == Maybe_1027_Just_t ) {
                    (*  sc3633 ) = ( dref3634 .stuff .Maybe_1027_Just_s .field0 );
                }
            }
            ( (  set1078 ) ( (  seq3631 ) ,  ( (  i32_dash_size280 ) ( (  slen3632 ) ) ) ,  ( * (  sc3633 ) ) ) );
            slen3632 = (  op_dash_add175 ( (  slen3632 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp341 ( ( (  ascii_dash_u8595 ) ( ( * (  sc3633 ) ) ) ) , (  from_dash_integral328 ( 64 ) ) ) != 0 ) && (  cmp341 ( ( (  ascii_dash_u8595 ) ( ( * (  sc3633 ) ) ) ) , (  from_dash_integral328 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1083 ) ( ( (  subslice1203 ) ( ( (  as_dash_slice1204 ) ( (  seq3631 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( (  slen3632 ) ) ) ) ) ) );
    }
    if ( (  eq1070 ( ( * (  ch23628 ) ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1206 = ( (  undefined1025 ) ( ) );
        char *  sc3636 = ( &temp1206 );
        struct Maybe_1027  dref3637 = ( (  read_dash_byte1028 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3637.tag == Maybe_1027_None_t ) {
            return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3637.tag == Maybe_1027_Just_t ) {
                (*  sc3636 ) = ( dref3637 .stuff .Maybe_1027_Just_s .field0 );
            }
        }
        struct Maybe_1207  dref3639 = ( (  parse_dash_ss31208 ) ( ( * (  sc3636 ) ) ) );
        if ( dref3639.tag == Maybe_1207_None_t ) {
            return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
        }
        else {
            if ( dref3639.tag == Maybe_1207_Just_t ) {
                return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( dref3639 .stuff .Maybe_1207_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_1011_Just ) ( ( ( InputEvent_1012_Key ) ( ( (struct Key_441) { .tag = Key_441_Escape_t } ) ) ) ) );
}

static  struct Maybe_1011   read_dash_event1020 (   struct env95* env ,    struct Tui_97 *  tui3649 ) {
    struct envunion96  temp1021 = ( (struct envunion96){ .fun = (  bool  (*) (  struct env94*  ,    struct Tui_97 *  ) )update_dash_dimensions1022 , .env =  env->envinst94 } );
    ( temp1021.fun ( &temp1021.env ,  (  tui3649 ) ) );
    struct Maybe_1011  dref3650 = ( (  read_dash_key1023 ) ( ) );
    if ( dref3650.tag == Maybe_1011_None_t ) {
        return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
    }
    else {
        if ( dref3650.tag == Maybe_1011_Just_t ) {
            (*  tui3649 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_1011_Just ) ( ( dref3650 .stuff .Maybe_1011_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_1011   lam1018 (   struct env1009* env ) {
    struct envunion1010  temp1019 = ( (struct envunion1010){ .fun = (  struct Maybe_1011  (*) (  struct env95*  ,    struct Tui_97 *  ) )read_dash_event1020 , .env =  env->envinst95 } );
    return ( temp1019.fun ( &temp1019.env ,  ( env->tui4910 ) ) );
}

static  struct Maybe_1011   next1210 (    struct FunIter_1008 *  self1056 ) {
    if ( ( ( * (  self1056 ) ) .f_finished ) ) {
        return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
    }
    struct envunion1015  temp1211 = ( ( * (  self1056 ) ) .f_fun );
    struct Maybe_1011  dref1057 = ( temp1211.fun ( &temp1211.env ) );
    if ( dref1057.tag == Maybe_1011_Just_t ) {
        return ( ( Maybe_1011_Just ) ( ( dref1057 .stuff .Maybe_1011_Just_s .field0 ) ) );
    }
    else {
        if ( dref1057.tag == Maybe_1011_None_t ) {
            (*  self1056 ) .f_finished = ( true );
            return ( (struct Maybe_1011) { .tag = Maybe_1011_None_t } );
        }
    }
}

struct env1214 {
    struct Editor_267 *  ed4734;
    ;
};

struct envunion1215 {
    enum Unit_8  (*fun) (  struct env1214*  ,    struct StrView_27  );
    struct env1214 env;
};

static  enum Unit_8   if_dash_just1213 (    struct Maybe_85  x1601 ,   struct envunion1215  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1215  temp1216 = (  fun1603 );
        ( temp1216.fun ( &temp1216.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1217 (   struct env1214* env ,    struct StrView_27  msg4736 ) {
    ( (  free685 ) ( (  msg4736 ) ,  ( ( * ( env->ed4734 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1212 (    struct Editor_267 *  ed4734 ) {
    struct env1214 envinst1214 = {
        .ed4734 =  ed4734 ,
    };
    ( (  if_dash_just1213 ) ( ( ( * (  ed4734 ) ) .f_msg ) ,  ( (struct envunion1215){ .fun = (  enum Unit_8  (*) (  struct env1214*  ,    struct StrView_27  ) )lam1217 , .env =  envinst1214 } ) ) );
    (*  ed4734 ) .f_msg = ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1219 {
    enum Unit_8  (*fun) (  struct env435*  ,    struct Editor_267 *  ,    struct Key_441  );
    struct env435 env;
};

static  size_t   clamp1225 (    size_t  x1648 ,    size_t  mn1650 ,    size_t  mx1652 ) {
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

static  size_t   sync_dash_char1227 (    uint8_t *  p1429 ) {
    size_t  i1430 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb1431 = ( * ( (uint8_t * ) ( ( (void*) (  p1429 ) ) + (  op_dash_neg384 ( ( (  size_dash_i64349 ) ( (  i1430 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp341 ( (  pb1431 ) , (  from_dash_integral328 ( 128 ) ) ) != 0 ) && (  cmp341 ( (  pb1431 ) , (  op_dash_add1067 ( (  from_dash_integral328 ( 128 ) ) , (  from_dash_integral328 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i1430 );
        }
        i1430 = (  op_dash_add356 ( (  i1430 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1226 (    uint8_t *  p1434 ) {
    return (  op_dash_add356 ( ( (  sync_dash_char1227 ) ( ( (  offset_dash_ptr353 ) ( (  p1434 ) ,  (  op_dash_neg384 ( (  from_dash_integral365 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1224 (    struct TextBuf_117 *  self4062 ,    struct Pos_26  pos4064 ) {
    if ( (  eq695 ( (  pos4064 ) , ( (  mk829 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk829 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq696 ( ( (  pos4064 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert802 ) ( (  cmp173 ( ( (  pos4064 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk829 ) ( (  op_dash_sub180 ( ( (  pos4064 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( ( (  line297 ) ( (  self4062 ) ,  (  op_dash_sub180 ( ( (  pos4064 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line4065 = ( (  line297 ) ( (  self4062 ) ,  ( (  pos4064 ) .f_line ) ) );
    size_t  pos_dash_bi4066 = ( (  clamp1225 ) ( ( (  i32_dash_size280 ) ( ( (  pos4064 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes396 ) ( (  line4065 ) ) ) ) );
    size_t  off4067 = ( (  previous_dash_char1226 ) ( ( (  offset_dash_ptr353 ) ( ( ( (  line4065 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  pos_dash_bi4066 ) ) ) ) ) ) );
    return ( (  mk829 ) ( ( (  pos4064 ) .f_line ) ,  ( (  size_dash_i32311 ) ( (  op_dash_sub458 ( (  pos_dash_bi4066 ) , (  off4067 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1223 (    struct Pane_241 *  self4487 ) {
    ( (  set_dash_cursors287 ) ( (  self4487 ) ,  ( (  left_dash_pos1224 ) ( ( ( * (  self4487 ) ) .f_buf ) ,  ( ( * (  self4487 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_241 *   pane1228 (    struct Editor_267 *  ed4722 ) {
    return ( & ( ( * (  ed4722 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1231 (    struct TextBuf_117 *  self4046 ) {
    return ( (  size_dash_i32311 ) ( ( (  size697 ) ( ( & ( ( * (  self4046 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1230 (    struct TextBuf_117 *  self4054 ,    struct Pos_26  pos4056 ) {
    if ( (  cmp173 ( ( (  pos4056 ) .f_line ) , ( (  num_dash_lines1231 ) ( (  self4054 ) ) ) ) != 0 ) ) {
        return ( (  mk829 ) ( ( (  num_dash_lines1231 ) ( (  self4054 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_27  line4057 = ( (  line297 ) ( (  self4054 ) ,  ( (  pos4056 ) .f_line ) ) );
    int64_t  bi4058 = ( (  i32_dash_i641144 ) ( ( (  pos4056 ) .f_bi ) ) );
    if ( (  cmp1190 ( (  bi4058 ) , ( (  size_dash_i64349 ) ( ( (  num_dash_bytes396 ) ( (  line4057 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp173 ( (  op_dash_add175 ( ( (  pos4056 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1231 ) ( (  self4054 ) ) ) ) != 0 ) ) {
            return ( (  mk829 ) ( ( (  pos4056 ) .f_line ) ,  ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  line4057 ) ) ) ) ) ) );
        }
        return ( (  mk829 ) ( (  op_dash_add175 ( ( (  pos4056 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off4059 = ( (  size_dash_i32311 ) ( ( (  next_dash_char340 ) ( ( (  offset_dash_ptr353 ) ( ( ( (  line4057 ) .f_contents ) .f_ptr ) ,  (  bi4058 ) ) ) ) ) ) );
    return ( (  mk829 ) ( ( (  pos4056 ) .f_line ) ,  (  op_dash_add175 ( ( (  pos4056 ) .f_bi ) , (  off4059 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1229 (    struct Pane_241 *  self4484 ) {
    ( (  set_dash_cursors287 ) ( (  self4484 ) ,  ( (  right_dash_pos1230 ) ( ( ( * (  self4484 ) ) .f_buf ) ,  ( ( * (  self4484 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1233 (    struct TextBuf_117 *  self4357 ,    int32_t  ln4359 ,    int32_t  vx4361 ) {
    int32_t  bi4362 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4363 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_293  temp1234 =  into_dash_iter294 ( ( (  chars295 ) ( ( (  line297 ) ( (  self4357 ) ,  (  ln4359 ) ) ) ) ) );
    while (true) {
        struct Maybe_351  __cond1235 =  next352 (&temp1234);
        if (  __cond1235 .tag == 0 ) {
            break;
        }
        struct Char_65  c4365 =  __cond1235 .stuff .Maybe_351_Just_s .field0;
        vi4363 = (  op_dash_add175 ( (  vi4363 ) , ( (  char_dash_screen_dash_width357 ) ( (  c4365 ) ) ) ) );
        if ( (  cmp173 ( (  vx4361 ) , (  vi4363 ) ) == 0 ) ) {
            break;
        }
        bi4362 = (  op_dash_add175 ( (  bi4362 ) , ( (  size_dash_i32311 ) ( ( (  c4365 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4362 );
}

static  enum Unit_8   move_dash_down1232 (    struct Pane_241 *  self4490 ,    int32_t  amnt4492 ) {
    struct Pos_26  cur4493 = ( ( * (  self4490 ) ) .f_cursor );
    int32_t  nu_dash_line4494 = ( (  min793 ) ( (  op_dash_add175 ( ( (  cur4493 ) .f_line ) , (  amnt4492 ) ) ) ,  (  op_dash_sub180 ( ( (  num_dash_lines1231 ) ( ( ( * (  self4490 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4495 = ( ( * (  self4490 ) ) .f_vi );
    int32_t  bi4496 = ( (  vi_dash_bi1233 ) ( ( ( * (  self4490 ) ) .f_buf ) ,  (  nu_dash_line4494 ) ,  (  vci4495 ) ) );
    ( (  set_dash_cursors287 ) ( (  self4490 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4494 ) , .f_bi = (  bi4496 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1236 (    struct Pane_241 *  self4499 ,    int32_t  amnt4501 ) {
    struct Pos_26  cur4502 = ( ( * (  self4499 ) ) .f_cursor );
    int32_t  nu_dash_line4503 = ( (  max374 ) ( (  op_dash_sub180 ( ( (  cur4502 ) .f_line ) , (  amnt4501 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4504 = ( ( * (  self4499 ) ) .f_vi );
    int32_t  bi4505 = ( (  vi_dash_bi1233 ) ( ( ( * (  self4499 ) ) .f_buf ) ,  (  nu_dash_line4503 ) ,  (  vci4504 ) ) );
    ( (  set_dash_cursors287 ) ( (  self4499 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4503 ) , .f_bi = (  bi4505 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1238 (    struct TextBuf_117 *  self4160 ) {
    (*  self4160 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_119_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1237 (    struct Pane_241 *  self4463 ,    enum Mode_242  mode4465 ) {
    if ( (  eq393 ( (  mode4465 ) , ( Mode_242_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1238 ) ( ( ( * (  self4463 ) ) .f_buf ) ) );
    }
    (*  self4463 ) .f_mode = (  mode4465 );
    return ( Unit_8_Unit );
}

struct SliceIter_1246 {
    struct Slice_31  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1245 {
    struct SliceIter_1246  field0;
    size_t  field1;
};

static struct Drop_1245 Drop_1245_Drop (  struct SliceIter_1246  field0 ,  size_t  field1 ) {
    return ( struct Drop_1245 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1245   into_dash_iter1247 (    struct Drop_1245  self853 ) {
    return (  self853 );
}

static  struct SliceIter_1246   into_dash_iter1250 (    struct Slice_31  self2250 ) {
    return ( (struct SliceIter_1246) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1252 (    struct Changeset_32 *  x377 ,    int64_t  count379 ) {
    struct Changeset_32  temp1253;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1253 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1251 (    struct Slice_31  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Changeset_32 *  begin_dash_ptr2209 = ( (  offset_dash_ptr1252 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub458 ( ( (  min587 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_1246   into_dash_iter1249 (    struct List_30  self2433 ) {
    return ( (  into_dash_iter1250 ) ( ( (  subslice1251 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Drop_1245   drop1248 (    struct List_30  iterable860 ,    size_t  i862 ) {
    struct SliceIter_1246  it863 = ( (  into_dash_iter1249 ) ( (  iterable860 ) ) );
    return ( ( Drop_1245_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

struct Maybe_1255 {
    enum {
        Maybe_1255_None_t,
        Maybe_1255_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_32  field0;
        } Maybe_1255_Just_s;
    } stuff;
};

static struct Maybe_1255 Maybe_1255_Just (  struct Changeset_32  field0 ) {
    return ( struct Maybe_1255 ) { .tag = Maybe_1255_Just_t, .stuff = { .Maybe_1255_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1255   next1257 (    struct SliceIter_1246 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1255) { .tag = Maybe_1255_None_t } );
    }
    struct Changeset_32  elem2258 = ( * ( (  offset_dash_ptr1252 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1255_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_1255   next1256 (    struct Drop_1245 *  dref855 ) {
    while ( (  cmp302 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1257 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub458 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1257 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

struct env1260 {
    enum CAllocator_10  al3995;
    ;
};

struct envunion1261 {
    enum Unit_8  (*fun) (  struct env1260*  ,    struct Action_25  );
    struct env1260 env;
};

struct SliceIter_1262 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1262   into_dash_iter1265 (    struct Slice_24  self2250 ) {
    return ( (struct SliceIter_1262) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1267 (    struct Action_25 *  x377 ,    int64_t  count379 ) {
    struct Action_25  temp1268;
    return ( (struct Action_25 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1268 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1266 (    struct Slice_24  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Action_25 *  begin_dash_ptr2209 = ( (  offset_dash_ptr1267 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub458 ( ( (  min587 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_1262   into_dash_iter1264 (    struct List_23  self2433 ) {
    return ( (  into_dash_iter1265 ) ( ( (  subslice1266 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

struct Maybe_1269 {
    enum {
        Maybe_1269_None_t,
        Maybe_1269_Just_t,
    } tag;
    union {
        struct {
            struct Action_25  field0;
        } Maybe_1269_Just_s;
    } stuff;
};

static struct Maybe_1269 Maybe_1269_Just (  struct Action_25  field0 ) {
    return ( struct Maybe_1269 ) { .tag = Maybe_1269_Just_t, .stuff = { .Maybe_1269_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1269   next1270 (    struct SliceIter_1262 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1269) { .tag = Maybe_1269_None_t } );
    }
    struct Action_25  elem2258 = ( * ( (  offset_dash_ptr1267 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1269_Just ) ( (  elem2258 ) ) );
}

static  enum Unit_8   for_dash_each1259 (    struct List_23  iterable1099 ,   struct envunion1261  fun1101 ) {
    struct SliceIter_1262  temp1263 = ( (  into_dash_iter1264 ) ( (  iterable1099 ) ) );
    struct SliceIter_1262 *  it1102 = ( &temp1263 );
    while ( ( true ) ) {
        struct Maybe_1269  dref1103 = ( (  next1270 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1269_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1269_Just_t ) {
                struct envunion1261  temp1271 = (  fun1101 );
                ( temp1271.fun ( &temp1271.env ,  ( dref1103 .stuff .Maybe_1269_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1273 (    struct Action_25  action3988 ,    enum CAllocator_10  al3990 ) {
    ( (  free685 ) ( ( (  action3988 ) .f_fwd ) ,  (  al3990 ) ) );
    ( (  free685 ) ( ( (  action3988 ) .f_bwd ) ,  (  al3990 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1272 (   struct env1260* env ,    struct Action_25  a3997 ) {
    return ( (  free_dash_action1273 ) ( (  a3997 ) ,  ( env->al3995 ) ) );
}

static  void *   cast_dash_ptr1276 (    struct Action_25 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free1275 (    enum CAllocator_10  dref2373 ,    struct Slice_24  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1276 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1274 (    struct List_23 *  list2440 ) {
    ( (  free1275 ) ( ( ( * (  list2440 ) ) .f_al ) ,  ( ( * (  list2440 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1258 (    struct Changeset_32  chs3993 ,    enum CAllocator_10  al3995 ) {
    struct env1260 envinst1260 = {
        .al3995 =  al3995 ,
    };
    ( (  for_dash_each1259 ) ( ( (  chs3993 ) .f_parts ) ,  ( (struct envunion1261){ .fun = (  enum Unit_8  (*) (  struct env1260*  ,    struct Action_25  ) )lam1272 , .env =  envinst1260 } ) ) );
    ( (  free1274 ) ( ( & ( (  chs3993 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1277 (    struct List_30 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min587 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1243 (    struct Actions_118 *  actions4011 ) {
    enum CAllocator_10  al4012 = ( ( ( * (  actions4011 ) ) .f_list ) .f_al );
    size_t  cur4013 = ( ( * (  actions4011 ) ) .f_cur );
    struct Drop_1245  temp1244 =  into_dash_iter1247 ( ( (  drop1248 ) ( ( ( * (  actions4011 ) ) .f_list ) ,  (  cur4013 ) ) ) );
    while (true) {
        struct Maybe_1255  __cond1254 =  next1256 (&temp1244);
        if (  __cond1254 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action4015 =  __cond1254 .stuff .Maybe_1255_Just_s .field0;
        ( (  free_dash_changeset1258 ) ( (  action4015 ) ,  (  al4012 ) ) );
    }
    ( (  trim1277 ) ( ( & ( ( * (  actions4011 ) ) .f_list ) ) ,  (  cur4013 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1278 (    struct StrView_27  s2586 ,    enum CAllocator_10  al2588 ) {
    return ( (  clone_dash_0643 ) ( (  s2586 ) ,  (  al2588 ) ) );
}

static  struct Maybe_85   head1280 (    struct SplitIter_734  it1167 ) {
    struct SplitIter_734  temp1281 = ( (  into_dash_iter741 ) ( (  it1167 ) ) );
    return ( (  next750 ) ( ( &temp1281 ) ) );
}

static  struct Maybe_85   head1283 (    struct Drop_733  it1167 ) {
    struct Drop_733  temp1284 = ( (  into_dash_iter739 ) ( (  it1167 ) ) );
    return ( (  next749 ) ( ( &temp1284 ) ) );
}

static  bool   null1282 (    struct Drop_733  it1176 ) {
    struct Maybe_85  dref1177 = ( (  head1283 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_85_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Tuple2_747   undefined1286 (  ) {
    struct Tuple2_747  temp1287;
    return (  temp1287 );
}

static  struct Tuple2_747   or_dash_fail1285 (    struct Maybe_746  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_746  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_746_None_t ) {
        ( (  panic850 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1286 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_746_Just_t ) {
            return ( dref1356 .stuff .Maybe_746_Just_s .field0 );
        }
    }
}

static  struct Maybe_746   reduce1289 (    struct Zip_732  iterable1118 ,    struct Maybe_746  base1120 ,    struct Maybe_746 (*  fun1122 )(    struct Tuple2_747  ,    struct Maybe_746  ) ) {
    struct Maybe_746  x1123 = (  base1120 );
    struct Zip_732  it1124 = ( (  into_dash_iter737 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_746  dref1125 = ( (  next748 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_746_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_746_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_746_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1290 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1290);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_746  temp1291;
    return (  temp1291 );
}

static  struct Maybe_746   lam1292 (    struct Tuple2_747  e1172 ,    struct Maybe_746  dref1173 ) {
    return ( ( Maybe_746_Just ) ( (  e1172 ) ) );
}

static  struct Maybe_746   last1288 (    struct Zip_732  it1170 ) {
    return ( (  reduce1289 ) ( (  it1170 ) ,  ( (struct Maybe_746) { .tag = Maybe_746_None_t } ) ,  (  lam1292 ) ) );
}

static  struct Pos_26   pos_dash_after_dash_str1279 (    struct TextBuf_117 *  self4146 ,    struct StrView_27  bytes4148 ,    struct Pos_26  from4150 ) {
    struct SplitIter_734  lines4151 = ( (  split_dash_by_dash_each742 ) ( (  bytes4148 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line4152 = ( (  or_dash_else724 ) ( ( (  head1280 ) ( (  lines4151 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    struct Drop_733  headless4153 = ( (  drop740 ) ( (  lines4151 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1282 ) ( (  headless4153 ) ) ) ) {
        struct Pos_26  next_dash_pos4154 = ( (  mk829 ) ( ( (  from4150 ) .f_line ) ,  (  op_dash_add175 ( ( (  from4150 ) .f_bi ) , ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  first_dash_line4152 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos4154 );
    } else {
        struct Tuple2_747  dref4155 = ( (  or_dash_fail1285 ) ( ( (  last1288 ) ( ( (  zip738 ) ( (  headless4153 ) ,  ( (  from551 ) ( (  op_dash_add175 ( ( (  from4150 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"should not happen" ) ,  ( 17 ) ) ) ) );
        
        return ( (  mk829 ) ( ( dref4155 .field1 ) ,  ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( ( dref4155 .field0 ) ) ) ) ) ) );
    }
}

struct envunion1298 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1302 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1304 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1306 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_27   str_dash_between1294 (   struct env138* env ,    struct TextBuf_117 *  self4180 ,    struct Pos_26  from4182 ,    struct Pos_26  to4184 ) {
    enum CAllocator_10  al4185 = ( ( ( * (  self4180 ) ) .f_buf ) .f_al );
    if ( (  eq696 ( ( (  from4182 ) .f_line ) , ( (  to4184 ) .f_line ) ) ) ) {
        if ( (  eq696 ( ( (  from4182 ) .f_line ) , ( (  num_dash_lines1231 ) ( (  self4180 ) ) ) ) ) ) {
            return ( (  clone1278 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  (  al4185 ) ) );
        }
        size_t  from_dash_bi4186 = ( (  i32_dash_size280 ) ( ( (  min793 ) ( ( (  from4182 ) .f_bi ) ,  ( (  to4184 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi4187 = ( (  i32_dash_size280 ) ( ( (  max374 ) ( ( (  from4182 ) .f_bi ) ,  ( (  to4184 ) .f_bi ) ) ) ) );
        return ( (  clone1278 ) ( ( (  byte_dash_substr596 ) ( ( (  line297 ) ( (  self4180 ) ,  ( (  from4182 ) .f_line ) ) ) ,  (  from_dash_bi4186 ) ,  (  to_dash_bi4187 ) ) ) ,  (  al4185 ) ) );
    } else {
        struct Pos_26  from_dash_pos4188 = ( (  min692 ) ( (  from4182 ) ,  (  to4184 ) ) );
        struct Pos_26  to_dash_pos4189 = ( (  max694 ) ( (  from4182 ) ,  (  to4184 ) ) );
        struct List_13  temp1295 = ( (  mk564 ) ( (  al4185 ) ) );
        struct List_13 *  sb4190 = ( &temp1295 );
        struct StrView_27  first_dash_line4191 = ( (  line297 ) ( (  self4180 ) ,  ( (  from_dash_pos4188 ) .f_line ) ) );
        struct envunion139  temp1296 = ( (struct envunion139){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all706 , .env =  env->envinst48 } );
        ( temp1296.fun ( &temp1296.env ,  (  sb4190 ) ,  ( ( (  byte_dash_substr596 ) ( (  first_dash_line4191 ) ,  ( (  i32_dash_size280 ) ( ( (  from_dash_pos4188 ) .f_bi ) ) ) ,  ( (  num_dash_bytes396 ) ( (  first_dash_line4191 ) ) ) ) ) .f_contents ) ) );
        struct envunion1298  temp1297 = ( (struct envunion1298){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all706 , .env =  env->envinst48 } );
        ( temp1297.fun ( &temp1297.env ,  (  sb4190 ) ,  ( ( ( (  from_dash_charlike642 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_169  temp1299 =  into_dash_iter170 ( ( (  to179 ) ( (  op_dash_add175 ( ( (  from_dash_pos4188 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub180 ( ( (  to_dash_pos4189 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_171  __cond1300 =  next172 (&temp1299);
            if (  __cond1300 .tag == 0 ) {
                break;
            }
            int32_t  i4193 =  __cond1300 .stuff .Maybe_171_Just_s .field0;
            struct envunion1302  temp1301 = ( (struct envunion1302){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all706 , .env =  env->envinst48 } );
            ( temp1301.fun ( &temp1301.env ,  (  sb4190 ) ,  ( ( (  line297 ) ( (  self4180 ) ,  (  i4193 ) ) ) .f_contents ) ) );
            struct envunion1304  temp1303 = ( (struct envunion1304){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all706 , .env =  env->envinst48 } );
            ( temp1303.fun ( &temp1303.env ,  (  sb4190 ) ,  ( ( ( (  from_dash_charlike642 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1306  temp1305 = ( (struct envunion1306){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all706 , .env =  env->envinst48 } );
        ( temp1305.fun ( &temp1305.env ,  (  sb4190 ) ,  ( ( (  byte_dash_substr596 ) ( ( (  line297 ) ( (  self4180 ) ,  ( (  to_dash_pos4189 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( ( (  to_dash_pos4189 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes298 ) ( ( (  to_dash_slice299 ) ( ( * (  sb4190 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1307 (    struct Maybe_227  m1574 ) {
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

struct Tuple2_1309 {
    enum ChangesetInputType_119  field0;
    enum ChangesetInputType_119  field1;
};

static struct Tuple2_1309 Tuple2_1309_Tuple2 (  enum ChangesetInputType_119  field0 ,  enum ChangesetInputType_119  field1 ) {
    return ( struct Tuple2_1309 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1308 (    enum ChangesetInputType_119  l4001 ,    enum ChangesetInputType_119  r4003 ) {
    return ( {  struct Tuple2_1309  dref4004 = ( ( Tuple2_1309_Tuple2 ) ( (  l4001 ) ,  (  r4003 ) ) ) ;  dref4004 .field0 == ChangesetInputType_119_NoChangeset &&  dref4004 .field1 == ChangesetInputType_119_NoChangeset ? ( true ) :  dref4004 .field0 == ChangesetInputType_119_InputChangeset &&  dref4004 .field1 == ChangesetInputType_119_InputChangeset ? ( true ) :  dref4004 .field0 == ChangesetInputType_119_CustomChangeset &&  dref4004 .field1 == ChangesetInputType_119_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1311 (    struct Slice_31  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr2173 = ( (  offset_dash_ptr1252 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  struct Changeset_32 *   last_dash_ptr1310 (    struct Slice_31  s2360 ) {
    if ( (  eq283 ( ( (  s2360 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic850 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1311 ) ( (  s2360 ) ,  (  op_dash_sub458 ( ( (  s2360 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1312 (    struct List_30  l2541 ) {
    struct Changeset_32 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

struct TypeSize_1319 {
    size_t  f_size;
};

static  struct TypeSize_1319   get_dash_typesize1318 (  ) {
    struct Action_25  temp1320;
    return ( (struct TypeSize_1319) { .f_size = ( sizeof( ( (  temp1320 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1321 (    void *  p398 ) {
    return ( (struct Action_25 * ) (  p398 ) );
}

static  struct Slice_24   allocate1317 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize1318 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr2371 = ( (  cast_dash_ptr1321 ) ( ( ( malloc ) ( (  op_dash_mul531 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env1322 {
    ;
    ;
    struct Slice_24  new_dash_slice2453;
};

struct Tuple2_1324 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1324 Tuple2_1324_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1324 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1323 {
    enum Unit_8  (*fun) (  struct env1322*  ,    struct Tuple2_1324  );
    struct env1322 env;
};

static  struct Action_25 *   get_dash_ptr1327 (    struct Slice_24  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr2173 = ( (  offset_dash_ptr1267 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set1326 (    struct Slice_24  slice2187 ,    size_t  i2189 ,    struct Action_25  x2191 ) {
    struct Action_25 *  ep2192 = ( (  get_dash_ptr1327 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1325 (   struct env1322* env ,    struct Tuple2_1324  dref2454 ) {
    return ( (  set1326 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size280 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct Zip_1329 {
    struct SliceIter_1262  f_left_dash_it;
    struct FromIter_540  f_right_dash_it;
};

static  struct Zip_1329   into_dash_iter1331 (    struct Zip_1329  self936 ) {
    return (  self936 );
}

struct Maybe_1332 {
    enum {
        Maybe_1332_None_t,
        Maybe_1332_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1324  field0;
        } Maybe_1332_Just_s;
    } stuff;
};

static struct Maybe_1332 Maybe_1332_Just (  struct Tuple2_1324  field0 ) {
    return ( struct Maybe_1332 ) { .tag = Maybe_1332_Just_t, .stuff = { .Maybe_1332_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1332   next1333 (    struct Zip_1329 *  self939 ) {
    struct Zip_1329  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1269  dref941 = ( (  next1270 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1269_None_t ) {
            return ( (struct Maybe_1332) { .tag = Maybe_1332_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1269_Just_t ) {
                struct Maybe_171  dref943 = ( (  next546 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_1332) { .tag = Maybe_1332_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next1270 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next546 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1332_Just ) ( ( ( Tuple2_1324_Tuple2 ) ( ( dref941 .stuff .Maybe_1269_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1328 (    struct Zip_1329  iterable1099 ,   struct envunion1323  fun1101 ) {
    struct Zip_1329  temp1330 = ( (  into_dash_iter1331 ) ( (  iterable1099 ) ) );
    struct Zip_1329 *  it1102 = ( &temp1330 );
    while ( ( true ) ) {
        struct Maybe_1332  dref1103 = ( (  next1333 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1332_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1332_Just_t ) {
                struct envunion1323  temp1334 = (  fun1101 );
                ( temp1334.fun ( &temp1334.env ,  ( dref1103 .stuff .Maybe_1332_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1329   zip1335 (    struct Slice_24  left947 ,    struct FromIter_540  right949 ) {
    struct SliceIter_1262  left_dash_it950 = ( (  into_dash_iter1265 ) ( (  left947 ) ) );
    struct FromIter_540  right_dash_it951 = ( (  into_dash_iter550 ) ( (  right949 ) ) );
    return ( (struct Zip_1329) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1316 (   struct env3* env ,    struct List_23 *  list2452 ) {
    if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate1317 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2453 = ( (  allocate1317 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul531 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env1322 envinst1322 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion1323  fun2457 = ( (struct envunion1323){ .fun = (  enum Unit_8  (*) (  struct env1322*  ,    struct Tuple2_1324  ) )lam1325 , .env =  envinst1322 } );
            ( (  for_dash_each1328 ) ( ( (  zip1335 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free1275 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1314 (   struct env21* env ,    struct List_23 *  list2460 ,    struct Action_25  elem2462 ) {
    struct envunion22  temp1315 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1316 , .env =  env->envinst3 } );
    ( temp1315.fun ( &temp1315.env ,  (  list2460 ) ) );
    ( (  set1326 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add356 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1342 (    struct Action_25 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1343 (    struct Action_25 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Action_25 *   zeroed1340 (  ) {
    struct Action_25 *  temp1341;
    struct Action_25 *  x648 = (  temp1341 );
    ( ( memset ) ( ( (  cast_dash_ptr1342 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1343 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Action_25 *   null_dash_ptr1339 (  ) {
    return ( (  zeroed1340 ) ( ) );
}

static  struct Slice_24   empty1338 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1339 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1337 (    enum CAllocator_10  al2436 ) {
    struct Slice_24  elements2437 = ( (  empty1338 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1344 (    struct Maybe_227  self1360 ,    struct Cursors_33  alt1362 ) {
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

struct envunion1346 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1353 {
    size_t  f_size;
};

static  struct TypeSize_1353   get_dash_typesize1352 (  ) {
    struct Changeset_32  temp1354;
    return ( (struct TypeSize_1353) { .f_size = ( sizeof( ( (  temp1354 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1355 (    void *  p398 ) {
    return ( (struct Changeset_32 * ) (  p398 ) );
}

static  struct Slice_31   allocate1351 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize1352 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr2371 = ( (  cast_dash_ptr1355 ) ( ( ( malloc ) ( (  op_dash_mul531 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env1356 {
    ;
    ;
    struct Slice_31  new_dash_slice2453;
};

struct Tuple2_1358 {
    struct Changeset_32  field0;
    int32_t  field1;
};

static struct Tuple2_1358 Tuple2_1358_Tuple2 (  struct Changeset_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1358 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1357 {
    enum Unit_8  (*fun) (  struct env1356*  ,    struct Tuple2_1358  );
    struct env1356 env;
};

static  enum Unit_8   set1360 (    struct Slice_31  slice2187 ,    size_t  i2189 ,    struct Changeset_32  x2191 ) {
    struct Changeset_32 *  ep2192 = ( (  get_dash_ptr1311 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1359 (   struct env1356* env ,    struct Tuple2_1358  dref2454 ) {
    return ( (  set1360 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size280 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct Zip_1362 {
    struct SliceIter_1246  f_left_dash_it;
    struct FromIter_540  f_right_dash_it;
};

static  struct Zip_1362   into_dash_iter1364 (    struct Zip_1362  self936 ) {
    return (  self936 );
}

struct Maybe_1365 {
    enum {
        Maybe_1365_None_t,
        Maybe_1365_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1358  field0;
        } Maybe_1365_Just_s;
    } stuff;
};

static struct Maybe_1365 Maybe_1365_Just (  struct Tuple2_1358  field0 ) {
    return ( struct Maybe_1365 ) { .tag = Maybe_1365_Just_t, .stuff = { .Maybe_1365_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1365   next1366 (    struct Zip_1362 *  self939 ) {
    struct Zip_1362  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1255  dref941 = ( (  next1257 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1255_None_t ) {
            return ( (struct Maybe_1365) { .tag = Maybe_1365_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1255_Just_t ) {
                struct Maybe_171  dref943 = ( (  next546 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_1365) { .tag = Maybe_1365_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next1257 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next546 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1365_Just ) ( ( ( Tuple2_1358_Tuple2 ) ( ( dref941 .stuff .Maybe_1255_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1361 (    struct Zip_1362  iterable1099 ,   struct envunion1357  fun1101 ) {
    struct Zip_1362  temp1363 = ( (  into_dash_iter1364 ) ( (  iterable1099 ) ) );
    struct Zip_1362 *  it1102 = ( &temp1363 );
    while ( ( true ) ) {
        struct Maybe_1365  dref1103 = ( (  next1366 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1365_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1365_Just_t ) {
                struct envunion1357  temp1367 = (  fun1101 );
                ( temp1367.fun ( &temp1367.env ,  ( dref1103 .stuff .Maybe_1365_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1362   zip1368 (    struct Slice_31  left947 ,    struct FromIter_540  right949 ) {
    struct SliceIter_1246  left_dash_it950 = ( (  into_dash_iter1250 ) ( (  left947 ) ) );
    struct FromIter_540  right_dash_it951 = ( (  into_dash_iter550 ) ( (  right949 ) ) );
    return ( (struct Zip_1362) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr1370 (    struct Changeset_32 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free1369 (    enum CAllocator_10  dref2373 ,    struct Slice_31  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1370 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1350 (   struct env4* env ,    struct List_30 *  list2452 ) {
    if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate1351 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2453 = ( (  allocate1351 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul531 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env1356 envinst1356 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion1357  fun2457 = ( (struct envunion1357){ .fun = (  enum Unit_8  (*) (  struct env1356*  ,    struct Tuple2_1358  ) )lam1359 , .env =  envinst1356 } );
            ( (  for_dash_each1361 ) ( ( (  zip1368 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free1369 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1348 (   struct env28* env ,    struct List_30 *  list2460 ,    struct Changeset_32  elem2462 ) {
    struct envunion29  temp1349 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1350 , .env =  env->envinst4 } );
    ( temp1349.fun ( &temp1349.env ,  (  list2460 ) ) );
    ( (  set1360 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add356 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1372 (   struct env132* env ,    struct TextBuf_117 *  self4141 ,    struct Action_25  action4143 ) {
    struct envunion133  temp1373 = ( (struct envunion133){ .fun = (  enum Unit_8  (*) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action691 , .env =  env->envinst113 } );
    ( temp1373.fun ( &temp1373.env ,  (  self4141 ) ,  ( (  action4143 ) .f_from ) ,  ( (  action4143 ) .f_to_dash_bwd ) ,  ( (  action4143 ) .f_fwd ) ) );
    return ( (  action4143 ) .f_to_dash_fwd );
}

static  struct Maybe_227   change1242 (   struct env140* env ,    struct TextBuf_117 *  self4210 ,    struct Pos_26  from4212 ,    struct Pos_26  to4214 ,    struct StrView_27  bytes4216 ,    struct Maybe_227  before_dash_cursors4218 ) {
    struct Pos_26  from_dash_pos4219 = ( (  min692 ) ( (  from4212 ) ,  (  to4214 ) ) );
    struct Pos_26  to_dash_pos4220 = ( (  max694 ) ( (  from4212 ) ,  (  to4214 ) ) );
    struct Actions_118 *  actions4221 = ( & ( ( * (  self4210 ) ) .f_actions ) );
    ( (  trim_dash_actions1243 ) ( (  actions4221 ) ) );
    struct envunion144  temp1293 = ( (struct envunion144){ .fun = (  struct StrView_27  (*) (  struct env138*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1294 , .env =  env->envinst138 } );
    struct Action_25  action4222 = ( (struct Action_25) { .f_from = (  from4212 ) , .f_fwd = ( (  clone1278 ) ( (  bytes4216 ) ,  ( ( * (  self4210 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1279 ) ( (  self4210 ) ,  (  bytes4216 ) ,  (  from_dash_pos4219 ) ) ) , .f_bwd = ( temp1293.fun ( &temp1293.env ,  (  self4210 ) ,  (  from_dash_pos4219 ) ,  (  to_dash_pos4220 ) ) ) , .f_to_dash_bwd = (  to_dash_pos4220 ) } );
    enum CAllocator_10  al4223 = ( ( ( * (  actions4221 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in4224 = ( (  is_dash_none1307 ) ( (  before_dash_cursors4218 ) ) );
    if ( ( (  eq1308 ( ( ( ( * (  self4210 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_119_CustomChangeset ) ) ) || ( (  eq1308 ( ( ( ( * (  self4210 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_119_InputChangeset ) ) ) && (  is_dash_typed_dash_in4224 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset4225 = ( (  last_dash_ptr1310 ) ( ( (  to_dash_slice1312 ) ( ( ( * (  actions4221 ) ) .f_list ) ) ) ) );
        struct envunion142  temp1313 = ( (struct envunion142){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1314 , .env =  env->envinst21 } );
        ( temp1313.fun ( &temp1313.env ,  ( & ( ( * (  last_dash_changeset4225 ) ) .f_parts ) ) ,  (  action4222 ) ) );
    } else {
        struct Changeset_32  temp1336 = ( (struct Changeset_32) { .f_parts = ( (  mk1337 ) ( (  al4223 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1344 ) ( (  before_dash_cursors4218 ) ,  ( (struct Cursors_33) { .f_cur = (  from4212 ) , .f_sel = ( (  eq695 ( (  from4212 ) , (  to4214 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to4214 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset4226 = ( &temp1336 );
        struct envunion1346  temp1345 = ( (struct envunion1346){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1314 , .env =  env->envinst21 } );
        ( temp1345.fun ( &temp1345.env ,  ( & ( ( * (  changeset4226 ) ) .f_parts ) ) ,  (  action4222 ) ) );
        struct envunion143  temp1347 = ( (struct envunion143){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1348 , .env =  env->envinst28 } );
        ( temp1347.fun ( &temp1347.env ,  ( & ( ( * (  actions4221 ) ) .f_list ) ) ,  ( * (  changeset4226 ) ) ) );
        (*  actions4221 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in4224 ) ? ( ChangesetInputType_119_InputChangeset ) : ( ChangesetInputType_119_NoChangeset ) );
        (*  actions4221 ) .f_cur = (  op_dash_add356 ( ( ( * (  actions4221 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion141  temp1371 = ( (struct envunion141){ .fun = (  struct Pos_26  (*) (  struct env132*  ,    struct TextBuf_117 *  ,    struct Action_25  ) )action_dash_fwd1372 , .env =  env->envinst132 } );
    struct Pos_26  to_dash_fwd4227 = ( temp1371.fun ( &temp1371.env ,  (  self4210 ) ,  (  action4222 ) ) );
    if ( (  cmp302 ( ( (  num_dash_bytes396 ) ( ( (  action4222 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd4228 = ( (  left_dash_pos1224 ) ( (  self4210 ) ,  (  to_dash_fwd4227 ) ) );
        return ( ( Maybe_227_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4228 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action4222 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_227_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4227 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1240 (   struct env225* env ,    struct Pane_241 *  self4586 ,    struct StrView_27  s4588 ) {
    struct Pos_26  cur4589 = ( ( * (  self4586 ) ) .f_cursor );
    struct envunion226  temp1241 = ( (struct envunion226){ .fun = (  struct Maybe_227  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  ) )change1242 , .env =  env->envinst140 } );
    ( temp1241.fun ( &temp1241.env ,  ( ( * (  self4586 ) ) .f_buf ) ,  (  cur4589 ) ,  (  cur4589 ) ,  (  s4588 ) ,  ( (struct Maybe_227) { .tag = Maybe_227_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1379 (   struct env236* env ,    struct Pane_241 *  self4625 ,    int32_t  line4627 ) {
    struct envunion237  temp1380 = ( (struct envunion237){ .fun = (  struct Maybe_227  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  ) )change1242 , .env =  env->envinst140 } );
    ( temp1380.fun ( &temp1380.env ,  ( ( * (  self4625 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4627 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4627 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike642 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_227) { .tag = Maybe_227_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1375 (   struct env247* env ,    struct Pane_241 *  self4646 ,    int32_t  indent4648 ) {
    struct RangeIter_169  temp1376 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4648 ) ) ) );
    while (true) {
        struct Maybe_171  __cond1377 =  next172 (&temp1376);
        if (  __cond1377 .tag == 0 ) {
            break;
        }
        int32_t  dref4649 =  __cond1377 .stuff .Maybe_171_Just_s .field0;
        struct envunion248  temp1378 = ( (struct envunion248){ .fun = (  enum Unit_8  (*) (  struct env236*  ,    struct Pane_241 *  ,    int32_t  ) )indent_dash_at1379 , .env =  env->envinst236 } );
        ( temp1378.fun ( &temp1378.env ,  (  self4646 ) ,  ( ( ( * (  self4646 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1229 ) ( (  self4646 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1381 (    struct Pane_241 *  self4565 ) {
    struct Pos_26  temp1382 = ( ( * (  self4565 ) ) .f_cursor );
    temp1382 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors287 ) ( (  self4565 ) ,  ( temp1382 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1384 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  );
    struct env225 env;
};

struct envunion1386 {
    enum Unit_8  (*fun) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  );
    struct env247 env;
};

enum MoveDirection_1388 {
    MoveDirection_1388_MoveFwd,
    MoveDirection_1388_MoveBwd,
};

enum MoveTarget_1389 {
    MoveTarget_1389_NextWordStart,
    MoveTarget_1389_NextWordEnd,
};

static  struct Pos_26   own1391 (    struct Pos_26  x1561 ) {
    return (  x1561 );
}

struct env1392 {
    enum MoveDirection_1388  dir4528;
    ;
    struct Pos_26 *  prev4531;
    struct Pane_241 *  pane4526;
    ;
};

static  bool   is_dash_at_dash_line_dash_end1394 (    struct Pane_241 *  pane4508 ,    struct Pos_26  pos4510 ) {
    return (  eq283 ( ( (  i32_dash_size280 ) ( ( (  pos4510 ) .f_bi ) ) ) , ( (  num_dash_bytes396 ) ( ( (  line297 ) ( ( ( * (  pane4508 ) ) .f_buf ) ,  ( (  pos4510 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1393 (    struct Pane_241 *  pane4513 ) {
    return ( (  is_dash_at_dash_line_dash_end1394 ) ( (  pane4513 ) ,  ( ( * (  pane4513 ) ) .f_cursor ) ) );
}

struct envunion1396 {
    enum Unit_8  (*fun) (  struct env1392*  );
    struct env1392 env;
};

static  enum Unit_8   advance1397 (   struct env1392* env ) {
    (* env->prev4531 ) = ( ( * ( env->pane4526 ) ) .f_cursor );
    enum MoveDirection_1388  dref4533 = ( env->dir4528 );
    switch (  dref4533 ) {
        case MoveDirection_1388_MoveFwd : {
            ( (  move_dash_right1229 ) ( ( env->pane4526 ) ) );
            break;
        }
        case MoveDirection_1388_MoveBwd : {
            ( (  move_dash_left1223 ) ( ( env->pane4526 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1401 {
    CharType_1401_CharSpace,
    CharType_1401_CharWord,
    CharType_1401_CharPunctuation,
};

struct Tuple2_1402 {
    enum CharType_1401  field0;
    enum CharType_1401  field1;
};

static struct Tuple2_1402 Tuple2_1402_Tuple2 (  enum CharType_1401  field0 ,  enum CharType_1401  field1 ) {
    return ( struct Tuple2_1402 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1400 (    enum CharType_1401  l3857 ,    enum CharType_1401  r3859 ) {
    struct Tuple2_1402  dref3860 = ( ( Tuple2_1402_Tuple2 ) ( (  l3857 ) ,  (  r3859 ) ) );
    if (  dref3860 .field0 == CharType_1401_CharSpace &&  dref3860 .field1 == CharType_1401_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3860 .field0 == CharType_1401_CharWord &&  dref3860 .field1 == CharType_1401_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3860 .field0 == CharType_1401_CharPunctuation &&  dref3860 .field1 == CharType_1401_CharPunctuation ) {
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

static  bool   is_dash_alpha1405 (    struct Char_65  c1497 ) {
    return ( ( (  cmp302 ( ( (  c1497 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1108 ) ( (  c1497 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1108 ) ( (  c1497 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1404 (    struct Char_65  c1518 ) {
    return ( ( (  is_dash_alpha1405 ) ( (  c1518 ) ) ) || ( (  is_dash_digit1107 ) ( (  c1518 ) ) ) );
}

static  enum CharType_1401   char_dash_type1403 (    struct Char_65  c3863 ) {
    if ( ( ( ( (  is_dash_alphanumeric1404 ) ( (  c3863 ) ) ) || (  eq360 ( (  c3863 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) || (  eq360 ( (  c3863 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1401_CharWord );
    } else {
        if ( ( (  is_dash_whitespace414 ) ( (  c3863 ) ) ) ) {
            return ( CharType_1401_CharSpace );
        } else {
            return ( CharType_1401_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1399 (    struct Char_65  l3866 ,    struct Char_65  r3868 ) {
    return ( !  eq1400 ( ( (  char_dash_type1403 ) ( (  l3866 ) ) ) , ( (  char_dash_type1403 ) ( (  r3868 ) ) ) ) );
}

static  struct Char_65   or_dash_else1407 (    struct Maybe_351  self1360 ,    struct Char_65  alt1362 ) {
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

static  struct Maybe_351   head1408 (    struct StrViewIter_293  it1167 ) {
    struct StrViewIter_293  temp1409 = ( (  into_dash_iter294 ) ( (  it1167 ) ) );
    return ( (  next352 ) ( ( &temp1409 ) ) );
}

static  struct Char_65   char_dash_at1406 (    struct Pane_241 *  pane4377 ,    struct Pos_26  pos4379 ) {
    struct StrView_27  line4380 = ( (  line297 ) ( ( ( * (  pane4377 ) ) .f_buf ) ,  ( (  pos4379 ) .f_line ) ) );
    return ( (  or_dash_else1407 ) ( ( (  head1408 ) ( ( (  chars295 ) ( ( (  byte_dash_substr596 ) ( (  line4380 ) ,  ( (  i32_dash_size280 ) ( ( (  pos4379 ) .f_bi ) ) ) ,  ( (  num_dash_bytes396 ) ( (  line4380 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
}

struct StrConcatIter_1414 {
    struct StrViewIter_293  f_left;
    struct AppendIter_1158  f_right;
};

static  struct StrConcatIter_1414   into_dash_iter1416 (    struct StrConcatIter_1414  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next1417 (    struct StrConcatIter_1414 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1413 (    struct StrConcatIter_1414  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_1414  temp1415 = ( (  into_dash_iter1416 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1414 *  it1102 = ( &temp1415 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next1417 ) ( (  it1102 ) ) );
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

static  struct StrConcatIter_1414   into_dash_iter1419 (    struct StrConcat_71  dref1297 ) {
    return ( (struct StrConcatIter_1414) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1414   chars1418 (    struct StrConcat_71  self1308 ) {
    return ( (  into_dash_iter1419 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print1412 (    struct StrConcat_71  s1335 ) {
    ( (  for_dash_each1413 ) ( ( (  chars1418 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1411 (    struct StrView_27  s1338 ) {
    ( (  print1412 ) ( ( ( StrConcat_71_StrConcat ) ( (  s1338 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1420 (  ) {
    bool  temp1421;
    return (  temp1421 );
}

static  bool   todo1410 (  ) {
    ( (  println1411 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1420 ) ( ) );
}

static  bool   reached_dash_target1398 (    struct Pane_241 *  pane4518 ,    enum MoveTarget_1389  target4520 ,    struct Pos_26  prev4522 ) {
    return ( {  enum MoveTarget_1389  dref4523 = (  target4520 ) ;  dref4523 == MoveTarget_1389_NextWordStart ? ( ( (  is_dash_word_dash_boundary1399 ) ( ( (  char_dash_at1406 ) ( (  pane4518 ) ,  (  prev4522 ) ) ) ,  ( (  char_dash_at1406 ) ( (  pane4518 ) ,  ( ( * (  pane4518 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1400 ( ( (  char_dash_type1403 ) ( ( (  char_dash_at1406 ) ( (  pane4518 ) ,  ( ( * (  pane4518 ) ) .f_cursor ) ) ) ) ) , ( CharType_1401_CharSpace ) ) ) ) ) :  dref4523 == MoveTarget_1389_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1399 ) ( ( (  char_dash_at1406 ) ( (  pane4518 ) ,  (  prev4522 ) ) ) ,  ( (  char_dash_at1406 ) ( (  pane4518 ) ,  ( ( * (  pane4518 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1400 ( ( (  char_dash_type1403 ) ( ( (  char_dash_at1406 ) ( (  pane4518 ) ,  (  prev4522 ) ) ) ) ) , ( CharType_1401_CharSpace ) ) ) ) ) : ( (  todo1410 ) ( ) ) ; } );
}

struct envunion1423 {
    enum Unit_8  (*fun) (  struct env1392*  );
    struct env1392 env;
};

struct envunion1425 {
    enum Unit_8  (*fun) (  struct env1392*  );
    struct env1392 env;
};

static  enum Unit_8   advance_dash_word1387 (    struct Pane_241 *  pane4526 ,    enum MoveDirection_1388  dir4528 ,    enum MoveTarget_1389  target4530 ) {
    struct Pos_26  temp1390 = ( (  own1391 ) ( ( ( * (  pane4526 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4531 = ( &temp1390 );
    struct env1392 envinst1392 = {
        .dir4528 =  dir4528 ,
        .prev4531 =  prev4531 ,
        .pane4526 =  pane4526 ,
    };
    struct Pos_26  sel4534 = ( ( * (  pane4526 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4535 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1393 ) ( (  pane4526 ) ) );
    struct envunion1396  temp1395 = ( (struct envunion1396){ .fun = (  enum Unit_8  (*) (  struct env1392*  ) )advance1397 , .env =  envinst1392 } );
    ( temp1395.fun ( &temp1395.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4535 ) || ( (  reached_dash_target1398 ) ( (  pane4526 ) ,  (  target4530 ) ,  ( * (  prev4531 ) ) ) ) ) ) {
        sel4534 = ( ( * (  pane4526 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1393 ) ( (  pane4526 ) ) ) ) {
        if ( (  eq695 ( ( ( * (  pane4526 ) ) .f_cursor ) , ( * (  prev4531 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1423  temp1422 = ( (struct envunion1423){ .fun = (  enum Unit_8  (*) (  struct env1392*  ) )advance1397 , .env =  envinst1392 } );
        ( temp1422.fun ( &temp1422.env ) );
        sel4534 = ( ( * (  pane4526 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1425  temp1424 = ( (struct envunion1425){ .fun = (  enum Unit_8  (*) (  struct env1392*  ) )advance1397 , .env =  envinst1392 } );
        ( temp1424.fun ( &temp1424.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1393 ) ( (  pane4526 ) ) ) || ( (  reached_dash_target1398 ) ( (  pane4526 ) ,  (  target4530 ) ,  ( * (  prev4531 ) ) ) ) ) ) {
            enum MoveDirection_1388  dref4536 = (  dir4528 );
            switch (  dref4536 ) {
                case MoveDirection_1388_MoveFwd : {
                    ( (  move_dash_left1223 ) ( (  pane4526 ) ) );
                    break;
                }
                case MoveDirection_1388_MoveBwd : {
                    ( (  move_dash_right1229 ) ( (  pane4526 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq695 ( ( * (  prev4531 ) ) , ( ( * (  pane4526 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel392 ) ( (  pane4526 ) ,  ( ( Maybe_34_Just ) ( (  sel4534 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1430 (    struct List_30 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1433 (    struct List_30 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp302 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1311 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  struct Changeset_32   get1432 (    struct List_30 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr1433 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1431 (    struct List_30  self2492 ,    size_t  k2494 ) {
    return ( (  get1432 ) ( ( & (  self2492 ) ) ,  (  k2494 ) ) );
}

static  struct Action_25   undefined1442 (  ) {
    struct Action_25  temp1443;
    return (  temp1443 );
}

static  struct Action_25   or_dash_fail1441 (    struct Maybe_1269  x1353 ,    struct StrConcat_304  errmsg1355 ) {
    struct Maybe_1269  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1269_None_t ) {
        ( (  panic303 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1442 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1269_Just_t ) {
            return ( dref1356 .stuff .Maybe_1269_Just_s .field0 );
        }
    }
}

static  struct Maybe_1269   try_dash_get1444 (    struct Slice_24  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp302 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1269) { .tag = Maybe_1269_None_t } );
    }
    struct Action_25 *  elem_dash_ptr2179 = ( (  offset_dash_ptr1267 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_1269_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  struct Action_25   get1440 (    struct Slice_24  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail1441 ) ( ( (  try_dash_get1444 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1439 (    struct Slice_24  self2195 ,    size_t  idx2197 ) {
    return ( (  get1440 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  struct Action_25   last1438 (    struct Slice_24  s2357 ) {
    if ( (  eq283 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic850 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1439 ( (  s2357 ) , (  op_dash_sub458 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1445 (    struct List_23  l2541 ) {
    struct Action_25 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static  struct Maybe_227   redo1429 (   struct env136* env ,    struct TextBuf_117 *  self4170 ) {
    ( (  flush_dash_insert_dash_action1238 ) ( (  self4170 ) ) );
    struct Actions_118 *  actions4171 = ( & ( ( * (  self4170 ) ) .f_actions ) );
    if ( (  cmp302 ( ( ( * (  actions4171 ) ) .f_cur ) , ( (  size1430 ) ( ( & ( ( * (  actions4171 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_227) { .tag = Maybe_227_None_t } );
    }
    struct Changeset_32  changeset4172 = (  elem_dash_get1431 ( ( ( * (  actions4171 ) ) .f_list ) , ( ( * (  actions4171 ) ) .f_cur ) ) );
    struct Pos_26  temp1434;
    struct Pos_26  to_dash_fwd4173 = (  temp1434 );
    struct SliceIter_1262  temp1435 =  into_dash_iter1264 ( ( (  changeset4172 ) .f_parts ) );
    while (true) {
        struct Maybe_1269  __cond1436 =  next1270 (&temp1435);
        if (  __cond1436 .tag == 0 ) {
            break;
        }
        struct Action_25  action4175 =  __cond1436 .stuff .Maybe_1269_Just_s .field0;
        struct envunion137  temp1437 = ( (struct envunion137){ .fun = (  struct Pos_26  (*) (  struct env132*  ,    struct TextBuf_117 *  ,    struct Action_25  ) )action_dash_fwd1372 , .env =  env->envinst132 } );
        to_dash_fwd4173 = ( temp1437.fun ( &temp1437.env ,  (  self4170 ) ,  (  action4175 ) ) );
    }
    (*  actions4171 ) .f_cur = (  op_dash_add356 ( ( ( * (  actions4171 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action4176 = ( (  last1438 ) ( ( (  to_dash_slice1445 ) ( ( (  changeset4172 ) .f_parts ) ) ) ) );
    if ( (  cmp302 ( ( (  num_dash_bytes396 ) ( ( (  last_dash_action4176 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd4177 = ( (  left_dash_pos1224 ) ( (  self4170 ) ,  (  to_dash_fwd4173 ) ) );
        return ( ( Maybe_227_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4177 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action4176 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_227_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4173 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1447 {
    struct Pane_241 *  self4602;
    ;
};

struct envunion1448 {
    enum Unit_8  (*fun) (  struct env1447*  ,    struct Cursors_33  );
    struct env1447 env;
};

static  enum Unit_8   if_dash_just1446 (    struct Maybe_227  x1601 ,   struct envunion1448  fun1603 ) {
    struct Maybe_227  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_227_Just_t ) {
        struct envunion1448  temp1449 = (  fun1603 );
        ( temp1449.fun ( &temp1449.env ,  ( dref1604 .stuff .Maybe_227_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_227_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1450 (   struct env1447* env ,    struct Cursors_33  cursors4605 ) {
    ( (  set_dash_cursors287 ) ( ( env->self4602 ) ,  ( (  cursors4605 ) .f_cur ) ,  ( (  cursors4605 ) .f_sel ) ,  ( CursorMovement_288_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1427 (   struct env232* env ,    struct Pane_241 *  self4602 ) {
    struct envunion233  temp1428 = ( (struct envunion233){ .fun = (  struct Maybe_227  (*) (  struct env136*  ,    struct TextBuf_117 *  ) )redo1429 , .env =  env->envinst136 } );
    struct Maybe_227  mcursors4603 = ( temp1428.fun ( &temp1428.env ,  ( ( * (  self4602 ) ) .f_buf ) ) );
    struct env1447 envinst1447 = {
        .self4602 =  self4602 ,
    };
    ( (  if_dash_just1446 ) ( (  mcursors4603 ) ,  ( (struct envunion1448){ .fun = (  enum Unit_8  (*) (  struct env1447*  ,    struct Cursors_33  ) )lam1450 , .env =  envinst1447 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1456 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1456   into_dash_iter1457 (    struct SliceReversedIter_1456  self2321 ) {
    return (  self2321 );
}

static  struct SliceReversedIter_1456   reversed1458 (    struct Slice_24  slice2318 ) {
    return ( (struct SliceReversedIter_1456) { .f_slice = (  slice2318 ) , .f_current_dash_offset = ( (  slice2318 ) .f_count ) } );
}

static  struct Maybe_1269   next1460 (    struct SliceReversedIter_1456 *  self2324 ) {
    size_t  off2325 = ( ( * (  self2324 ) ) .f_current_dash_offset );
    if ( (  eq283 ( (  off2325 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1269) { .tag = Maybe_1269_None_t } );
    }
    (*  self2324 ) .f_current_dash_offset = (  op_dash_sub458 ( (  off2325 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1269_Just ) ( (  elem_dash_get1439 ( ( ( * (  self2324 ) ) .f_slice ) , ( ( * (  self2324 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1462 (   struct env130* env ,    struct TextBuf_117 *  self4136 ,    struct Action_25  action4138 ) {
    struct envunion131  temp1463 = ( (struct envunion131){ .fun = (  enum Unit_8  (*) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action691 , .env =  env->envinst113 } );
    ( temp1463.fun ( &temp1463.env ,  (  self4136 ) ,  ( (  action4138 ) .f_from ) ,  ( (  action4138 ) .f_to_dash_fwd ) ,  ( (  action4138 ) .f_bwd ) ) );
    return ( (  action4138 ) .f_to_dash_bwd );
}

static  struct Maybe_227   undo1454 (   struct env134* env ,    struct TextBuf_117 *  self4163 ) {
    ( (  flush_dash_insert_dash_action1238 ) ( (  self4163 ) ) );
    struct Actions_118 *  actions4164 = ( & ( ( * (  self4163 ) ) .f_actions ) );
    if ( (  eq283 ( ( ( * (  actions4164 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_227) { .tag = Maybe_227_None_t } );
    }
    (*  actions4164 ) .f_cur = (  op_dash_sub458 ( ( ( * (  actions4164 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset4165 = (  elem_dash_get1431 ( ( ( * (  actions4164 ) ) .f_list ) , ( ( * (  actions4164 ) ) .f_cur ) ) );
    struct SliceReversedIter_1456  temp1455 =  into_dash_iter1457 ( ( (  reversed1458 ) ( ( (  to_dash_slice1445 ) ( ( (  changeset4165 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1269  __cond1459 =  next1460 (&temp1455);
        if (  __cond1459 .tag == 0 ) {
            break;
        }
        struct Action_25  action4167 =  __cond1459 .stuff .Maybe_1269_Just_s .field0;
        struct envunion135  temp1461 = ( (struct envunion135){ .fun = (  struct Pos_26  (*) (  struct env130*  ,    struct TextBuf_117 *  ,    struct Action_25  ) )action_dash_bwd1462 , .env =  env->envinst130 } );
        ( temp1461.fun ( &temp1461.env ,  (  self4163 ) ,  (  action4167 ) ) );
    }
    return ( ( Maybe_227_Just ) ( ( (  changeset4165 ) .f_before_dash_cursors ) ) );
}

struct env1465 {
    ;
    struct Pane_241 *  self4596;
};

struct envunion1466 {
    enum Unit_8  (*fun) (  struct env1465*  ,    struct Cursors_33  );
    struct env1465 env;
};

static  enum Unit_8   if_dash_just1464 (    struct Maybe_227  x1601 ,   struct envunion1466  fun1603 ) {
    struct Maybe_227  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_227_Just_t ) {
        struct envunion1466  temp1467 = (  fun1603 );
        ( temp1467.fun ( &temp1467.env ,  ( dref1604 .stuff .Maybe_227_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_227_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1468 (   struct env1465* env ,    struct Cursors_33  cursors4599 ) {
    ( (  set_dash_cursors287 ) ( ( env->self4596 ) ,  ( (  cursors4599 ) .f_cur ) ,  ( (  cursors4599 ) .f_sel ) ,  ( CursorMovement_288_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1452 (   struct env230* env ,    struct Pane_241 *  self4596 ) {
    struct envunion231  temp1453 = ( (struct envunion231){ .fun = (  struct Maybe_227  (*) (  struct env134*  ,    struct TextBuf_117 *  ) )undo1454 , .env =  env->envinst134 } );
    struct Maybe_227  mcursors4597 = ( temp1453.fun ( &temp1453.env ,  ( ( * (  self4596 ) ) .f_buf ) ) );
    struct env1465 envinst1465 = {
        .self4596 =  self4596 ,
    };
    ( (  if_dash_just1464 ) ( (  mcursors4597 ) ,  ( (struct envunion1466){ .fun = (  enum Unit_8  (*) (  struct env1465*  ,    struct Cursors_33  ) )lam1468 , .env =  envinst1465 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_251   minmax1472 (    struct Pos_26  l1634 ,    struct Pos_26  r1636 ) {
    return ( (  cmp693 ( (  l1634 ) , (  r1636 ) ) == 0 ) ? ( ( Tuple2_251_Tuple2 ) ( (  l1634 ) ,  (  r1636 ) ) ) : ( ( Tuple2_251_Tuple2 ) ( (  r1636 ) ,  (  l1634 ) ) ) );
}

static  struct Pos_26   or_dash_else1473 (    struct Maybe_34  self1360 ,    struct Pos_26  alt1362 ) {
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

static  struct Pos_26   fst1474 (    struct Tuple2_251  dref1563 ) {
    return ( dref1563 .field0 );
}

static  struct Pos_26   snd1475 (    struct Tuple2_251  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tuple2_251   selection1471 (    struct Pane_241 *  self4608 ) {
    struct Tuple2_251  from_dash_to4609 = ( (  minmax1472 ) ( ( (  or_dash_else1473 ) ( ( ( * (  self4608 ) ) .f_sel ) ,  ( ( * (  self4608 ) ) .f_cursor ) ) ) ,  ( ( * (  self4608 ) ) .f_cursor ) ) );
    struct Pos_26  from4610 = ( (  fst1474 ) ( (  from_dash_to4609 ) ) );
    struct Pos_26  to4611 = ( (  right_dash_pos1230 ) ( ( ( * (  self4608 ) ) .f_buf ) ,  ( (  snd1475 ) ( (  from_dash_to4609 ) ) ) ) );
    return ( ( Tuple2_251_Tuple2 ) ( (  from4610 ) ,  (  to4611 ) ) );
}

struct env1478 {
    struct Editor_267 *  ed4725;
    ;
};

struct envunion1479 {
    enum Unit_8  (*fun) (  struct env1478*  ,    struct StrView_27  );
    struct env1478 env;
};

static  enum Unit_8   if_dash_just1477 (    struct Maybe_85  x1601 ,   struct envunion1479  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1479  temp1480 = (  fun1603 );
        ( temp1480.fun ( &temp1480.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1481 (   struct env1478* env ,    struct StrView_27  cp4731 ) {
    ( (  free685 ) ( (  cp4731 ) ,  ( ( * ( env->ed4725 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1470 (   struct env254* env ,    struct Editor_267 *  ed4725 ) {
    struct Tuple2_251  dref4726 = ( (  selection1471 ) ( ( (  pane1228 ) ( (  ed4725 ) ) ) ) );
    
    struct envunion255  temp1476 = ( (struct envunion255){ .fun = (  struct StrView_27  (*) (  struct env138*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1294 , .env =  env->envinst138 } );
    struct StrView_27  cpd4729 = ( temp1476.fun ( &temp1476.env ,  ( ( ( * (  ed4725 ) ) .f_pane ) .f_buf ) ,  ( dref4726 .field0 ) ,  ( dref4726 .field1 ) ) );
    struct env1478 envinst1478 = {
        .ed4725 =  ed4725 ,
    };
    ( (  if_dash_just1477 ) ( ( ( * (  ed4725 ) ) .f_clipboard ) ,  ( (struct envunion1479){ .fun = (  enum Unit_8  (*) (  struct env1478*  ,    struct StrView_27  ) )lam1481 , .env =  envinst1478 } ) ) );
    (*  ed4725 ) .f_clipboard = ( ( Maybe_85_Just ) ( (  cpd4729 ) ) );
    return ( Unit_8_Unit );
}

struct env1486 {
    ;
    struct Pane_241 *  self4614;
};

struct envunion1487 {
    enum Unit_8  (*fun) (  struct env1486*  ,    struct Cursors_33  );
    struct env1486 env;
};

static  enum Unit_8   if_dash_just1485 (    struct Maybe_227  x1601 ,   struct envunion1487  fun1603 ) {
    struct Maybe_227  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_227_Just_t ) {
        struct envunion1487  temp1488 = (  fun1603 );
        ( temp1488.fun ( &temp1488.env ,  ( dref1604 .stuff .Maybe_227_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_227_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1489 (   struct env1486* env ,    struct Cursors_33  cursors4622 ) {
    ( (  set_dash_cursors287 ) ( ( env->self4614 ) ,  ( (  cursors4622 ) .f_cur ) ,  ( (  cursors4622 ) .f_sel ) ,  ( CursorMovement_288_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1483 (   struct env234* env ,    struct Pane_241 *  self4614 ,    struct Tuple2_251  dref4615 ,    struct StrView_27  cp4619 ) {
    struct envunion235  temp1484 = ( (struct envunion235){ .fun = (  struct Maybe_227  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  ) )change1242 , .env =  env->envinst140 } );
    struct Maybe_227  mcursors4620 = ( temp1484.fun ( &temp1484.env ,  ( ( * (  self4614 ) ) .f_buf ) ,  ( dref4615 .field0 ) ,  ( dref4615 .field1 ) ,  (  cp4619 ) ,  ( ( Maybe_227_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4614 ) ) .f_cursor ) , .f_sel = ( ( * (  self4614 ) ) .f_sel ) } ) ) ) ) );
    struct env1486 envinst1486 = {
        .self4614 =  self4614 ,
    };
    ( (  if_dash_just1485 ) ( (  mcursors4620 ) ,  ( (struct envunion1487){ .fun = (  enum Unit_8  (*) (  struct env1486*  ,    struct Cursors_33  ) )lam1489 , .env =  envinst1486 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1491 {
    enum Unit_8  (*fun) (  struct env254*  ,    struct Editor_267 *  );
    struct env254 env;
};

struct envunion1493 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct envunion1495 {
    enum Unit_8  (*fun) (  struct env254*  ,    struct Editor_267 *  );
    struct env254 env;
};

static  struct StrBuilder_62   mk1501 (    enum CAllocator_10  al2909 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk564 ) ( (  al2909 ) ) ) } );
}

struct IntStrIter_1507 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1506 {
    struct StrViewIter_293  f_left;
    struct IntStrIter_1507  f_right;
};

struct StrConcatIter_1505 {
    struct StrConcatIter_1506  f_left;
    struct StrViewIter_293  f_right;
};

struct env1508 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1509 {
    enum Unit_8  (*fun) (  struct env1508*  ,    struct Char_65  );
    struct env1508 env;
};

static  struct StrConcatIter_1505   into_dash_iter1511 (    struct StrConcatIter_1505  self1290 ) {
    return (  self1290 );
}

struct env1517 {
    size_t  base1386;
    ;
};

struct envunion1518 {
    size_t  (*fun) (  struct env1517*  ,    int32_t  ,    size_t  );
    struct env1517 env;
};

static  size_t   reduce1516 (    struct Range_166  iterable1118 ,    size_t  base1120 ,   struct envunion1518  fun1122 ) {
    size_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion1518  temp1519 = (  fun1122 );
                x1123 = ( temp1519.fun ( &temp1519.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1520 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1520);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1521;
    return (  temp1521 );
}

static  size_t   lam1522 (   struct env1517* env ,    int32_t  item1390 ,    size_t  x1392 ) {
    return (  op_dash_mul531 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  size_t   pow1515 (    size_t  base1386 ,    int32_t  p1388 ) {
    struct env1517 envinst1517 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce1516 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1518){ .fun = (  size_t  (*) (  struct env1517*  ,    int32_t  ,    size_t  ) )lam1522 , .env =  envinst1517 } ) ) );
}

static  uint8_t   cast1523 (    size_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_351   next1514 (    struct IntStrIter_1507 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    size_t  trim_dash_down1400 = ( (  pow1515 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1401 = (  op_dash_div327 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    size_t  upper_dash_mask1402 = (  op_dash_mul531 ( (  op_dash_div327 ( (  upper1401 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast1523 ) ( (  op_dash_sub458 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81177 ) ( (  op_dash_add1067 ( (  digit1403 ) , (  from_dash_integral328 ( 48 ) ) ) ) ) );
    return ( ( Maybe_351_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_351   next1513 (    struct StrConcatIter_1506 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1514 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next1512 (    struct StrConcatIter_1505 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1513 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1504 (    struct StrConcatIter_1505  iterable1099 ,   struct envunion1509  fun1101 ) {
    struct StrConcatIter_1505  temp1510 = ( (  into_dash_iter1511 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1505 *  it1102 = ( &temp1510 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next1512 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                struct envunion1509  temp1524 = (  fun1101 );
                ( temp1524.fun ( &temp1524.env ,  ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1531 (    size_t  self1407 ) {
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

static  struct IntStrIter_1507   uint_dash_iter1530 (    size_t  int1414 ) {
    return ( (struct IntStrIter_1507) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits1531 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1507   chars1529 (    size_t  self1426 ) {
    return ( (  uint_dash_iter1530 ) ( (  self1426 ) ) );
}

static  struct StrConcatIter_1506   into_dash_iter1528 (    struct StrConcat_79  dref1297 ) {
    return ( (struct StrConcatIter_1506) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1529 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1506   chars1527 (    struct StrConcat_79  self1308 ) {
    return ( (  into_dash_iter1528 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1505   into_dash_iter1526 (    struct StrConcat_78  dref1297 ) {
    return ( (struct StrConcatIter_1505) { .f_left = ( (  chars1527 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1505   chars1525 (    struct StrConcat_78  self1308 ) {
    return ( (  into_dash_iter1526 ) ( (  self1308 ) ) );
}

static  enum Unit_8   write_dash_slice1536 (   struct env58* env ,    struct StrBuilder_62 *  builder2867 ,    struct Slice_14  s2869 ) {
    struct envunion59  temp1537 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all706 , .env =  env->envinst48 } );
    ( temp1537.fun ( &temp1537.env ,  ( & ( ( * (  builder2867 ) ) .f_chars ) ) ,  (  s2869 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_14   as_dash_u8_dash_slice1538 (    struct Char_65  c1465 ,    struct Array_320 *  buf1467 ) {
    struct Char_65  cc1468 = ( (  regularize319 ) ( (  c1465 ) ,  (  buf1467 ) ) );
    return ( (struct Slice_14) { .f_ptr = ( (  cc1468 ) .f_ptr ) , .f_count = ( (  cc1468 ) .f_num_dash_bytes ) } );
}

static  enum Unit_8   write_dash_char1534 (   struct env60* env ,    struct StrBuilder_62 *  builder2872 ,    struct Char_65  c2874 ) {
    struct envunion61  temp1535 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  ) )write_dash_slice1536 , .env =  env->envinst58 } );
    struct Array_320  temp1540;
    struct Array_320  temp1539 = (  temp1540 );
    ( temp1535.fun ( &temp1535.env ,  (  builder2872 ) ,  ( (  as_dash_u8_dash_slice1538 ) ( (  c2874 ) ,  ( &temp1539 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1532 (   struct env1508* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1533 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1534 , .env =  env->envinst60 } );
    return ( temp1533.fun ( &temp1533.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1503 (   struct env63* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrConcat_78  s2879 ) {
    struct env1508 envinst1508 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1504 ) ( ( (  chars1525 ) ( (  s2879 ) ) ) ,  ( (struct envunion1509){ .fun = (  enum Unit_8  (*) (  struct env1508*  ,    struct Char_65  ) )lam1532 , .env =  envinst1508 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1544 (    uint8_t *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   cast_dash_slice1543 (    struct Slice_14  s2354 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1544 ) ( ( (  s2354 ) .f_ptr ) ) ) , .f_count = ( (  s2354 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1542 (    struct StrBuilder_62 *  builder2915 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1543 ) ( ( (  subslice586 ) ( ( ( ( * (  builder2915 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2915 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1499 (   struct env75* env ,    struct StrConcat_78  s2935 ,    enum CAllocator_10  al2937 ) {
    struct StrBuilder_62  temp1500 = ( (  mk1501 ) ( (  al2937 ) ) );
    struct StrBuilder_62 *  sb2938 = ( &temp1500 );
    struct envunion77  temp1502 = ( (struct envunion77){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_78  ) )write1503 , .env =  env->envinst63 } );
    ( temp1502.fun ( &temp1502.env ,  (  sb2938 ) ,  (  s2935 ) ) );
    struct envunion76  temp1541 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1534 , .env =  env->envinst60 } );
    ( temp1541.fun ( &temp1541.env ,  (  sb2938 ) ,  ( (  nullchar682 ) ( ) ) ) );
    struct StrView_27  dynstr2939 = ( (  as_dash_str1542 ) ( (  sb2938 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2939 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub458 ( ( ( (  dynstr2939 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1497 (   struct env256* env ,    struct Editor_267 *  ed4739 ,    struct StrConcat_78  s4741 ) {
    ( (  reset_dash_msg1212 ) ( (  ed4739 ) ) );
    struct envunion257  temp1498 = ( (struct envunion257){ .fun = (  struct StrView_27  (*) (  struct env75*  ,    struct StrConcat_78  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1499 , .env =  env->envinst75 } );
    (*  ed4739 ) .f_msg = ( ( Maybe_85_Just ) ( ( temp1498.fun ( &temp1498.env ,  (  s4741 ) ,  ( ( * (  ed4739 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1547 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct env1546 {
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
    struct Editor_267 *  ed4816;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion1548 {
    enum Unit_8  (*fun) (  struct env1546*  ,    struct StrView_27  );
    struct env1546 env;
};

static  enum Unit_8   if_dash_just1545 (    struct Maybe_85  x1601 ,   struct envunion1548  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1548  temp1549 = (  fun1603 );
        ( temp1549.fun ( &temp1549.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1551 (    struct Pane_241 *  pane4544 ) {
    return ( {  struct Maybe_34  dref4545 = ( ( * (  pane4544 ) ) .f_sel ) ; dref4545.tag == Maybe_34_Just_t ? ( (  max694 ) ( ( ( * (  pane4544 ) ) .f_cursor ) ,  ( dref4545 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4544 ) ) .f_cursor ) ; } );
}

static  struct StrView_27   own1552 (    struct StrView_27  x1561 ) {
    return (  x1561 );
}

static  uint8_t   last1553 (    struct Slice_14  s2357 ) {
    if ( (  eq283 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic850 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get589 ( (  s2357 ) , (  op_dash_sub458 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1554 (    int32_t  x1648 ,    int32_t  mn1650 ,    int32_t  mx1652 ) {
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

struct envunion1557 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

static  enum Unit_8   lam1550 (   struct env1546* env ,    struct StrView_27  cp4827 ) {
    struct Pos_26  start4828 = ( (  max_dash_pos1551 ) ( ( (  pane1228 ) ( ( env->ed4816 ) ) ) ) );
    struct StrView_27  cp4829 = ( (  own1552 ) ( (  cp4827 ) ) );
    if ( (  eq324 ( ( (  last1553 ) ( ( (  cp4829 ) .f_contents ) ) ) , ( (  ascii_dash_u8595 ) ( ( (  from_dash_charlike282 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        int32_t  max_dash_lines4830 = ( (  num_dash_lines1231 ) ( ( ( * ( (  pane1228 ) ( ( env->ed4816 ) ) ) ) .f_buf ) ) );
        struct Pos_26  start4831 = ( (struct Pos_26) { .f_line = ( (  clamp1554 ) ( (  op_dash_add175 ( ( (  start4828 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  max_dash_lines4830 ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
        if ( (  eq696 ( ( (  start4831 ) .f_line ) , (  max_dash_lines4830 ) ) ) ) {
            cp4829 = ( (  byte_dash_substr596 ) ( (  cp4829 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub458 ( ( ( (  cp4829 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
        struct envunion1547  temp1555 = ( (struct envunion1547){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1483 , .env =  env->envinst234 } );
        ( temp1555.fun ( &temp1555.env ,  ( (  pane1228 ) ( ( env->ed4816 ) ) ) ,  ( ( Tuple2_251_Tuple2 ) ( (  start4831 ) ,  (  start4831 ) ) ) ,  (  cp4829 ) ) );
    } else {
        struct Pos_26  start4832 = ( (  right_dash_pos1230 ) ( ( ( ( * ( env->ed4816 ) ) .f_pane ) .f_buf ) ,  (  start4828 ) ) );
        struct envunion1557  temp1556 = ( (struct envunion1557){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1483 , .env =  env->envinst234 } );
        ( temp1556.fun ( &temp1556.env ,  ( (  pane1228 ) ( ( env->ed4816 ) ) ) ,  ( ( Tuple2_251_Tuple2 ) ( (  start4832 ) ,  (  start4832 ) ) ) ,  (  cp4829 ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1560 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct env1559 {
    struct Editor_267 *  ed4816;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env234 envinst234;
};

struct envunion1561 {
    enum Unit_8  (*fun) (  struct env1559*  ,    struct StrView_27  );
    struct env1559 env;
};

static  enum Unit_8   if_dash_just1558 (    struct Maybe_85  x1601 ,   struct envunion1561  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1561  temp1562 = (  fun1603 );
        ( temp1562.fun ( &temp1562.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1564 (    struct Pane_241 *  pane4539 ) {
    return ( {  struct Maybe_34  dref4540 = ( ( * (  pane4539 ) ) .f_sel ) ; dref4540.tag == Maybe_34_Just_t ? ( (  min692 ) ( ( ( * (  pane4539 ) ) .f_cursor ) ,  ( dref4540 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4539 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1563 (   struct env1559* env ,    struct StrView_27  cp4834 ) {
    struct Pos_26  start4835 = ( (  min_dash_pos1564 ) ( ( (  pane1228 ) ( ( env->ed4816 ) ) ) ) );
    if ( (  eq324 ( ( (  last1553 ) ( ( (  cp4834 ) .f_contents ) ) ) , ( (  ascii_dash_u8595 ) ( ( (  from_dash_charlike282 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1565 = (  start4835 );
        temp1565 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4835 = ( temp1565 );
    }
    struct envunion1560  temp1566 = ( (struct envunion1560){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1483 , .env =  env->envinst234 } );
    ( temp1566.fun ( &temp1566.env ,  ( (  pane1228 ) ( ( env->ed4816 ) ) ) ,  ( ( Tuple2_251_Tuple2 ) ( (  start4835 ) ,  (  start4835 ) ) ) ,  (  cp4834 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1569 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  );
    struct env234 env;
};

struct env1568 {
    struct Editor_267 *  ed4816;
    ;
    ;
    ;
    ;
    ;
    struct env234 envinst234;
};

struct envunion1570 {
    enum Unit_8  (*fun) (  struct env1568*  ,    struct StrView_27  );
    struct env1568 env;
};

static  enum Unit_8   if_dash_just1567 (    struct Maybe_85  x1601 ,   struct envunion1570  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1570  temp1571 = (  fun1603 );
        ( temp1571.fun ( &temp1571.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1572 (   struct env1568* env ,    struct StrView_27  cp4837 ) {
    struct Pos_26  start4838 = ( (  min_dash_pos1564 ) ( ( (  pane1228 ) ( ( env->ed4816 ) ) ) ) );
    struct Pos_26  end4839 = ( (  max_dash_pos1551 ) ( ( (  pane1228 ) ( ( env->ed4816 ) ) ) ) );
    struct envunion1569  temp1573 = ( (struct envunion1569){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1483 , .env =  env->envinst234 } );
    struct Pos_26  temp1574 = (  end4839 );
    temp1574 .  f_bi = (  op_dash_add175 ( ( (  end4839 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( temp1573.fun ( &temp1573.env ,  ( (  pane1228 ) ( ( env->ed4816 ) ) ) ,  ( ( Tuple2_251_Tuple2 ) ( (  start4838 ) ,  ( temp1574 ) ) ) ,  (  cp4837 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1575 (    struct Pane_241 *  pane4558 ) {
    struct Pos_26  min_dash_pos4559 = ( (  min_dash_pos1564 ) ( (  pane4558 ) ) );
    struct Pos_26  max_dash_pos4560 = ( (  max_dash_pos1551 ) ( (  pane4558 ) ) );
    int32_t  max_dash_pos_dash_max4561 = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( ( (  line297 ) ( ( ( * (  pane4558 ) ) .f_buf ) ,  ( (  max_dash_pos4560 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq696 ( ( (  min_dash_pos4559 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq696 ( ( (  max_dash_pos4560 ) .f_bi ) , (  max_dash_pos_dash_max4561 ) ) ) ) ) ) {
        struct Pos_26  temp1576 = (  min_dash_pos4559 );
        temp1576 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4558 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1576 ) ) );
        struct Pos_26  temp1577 = (  max_dash_pos4560 );
        temp1577 .  f_bi = (  max_dash_pos_dash_max4561 );
        (*  pane4558 ) .f_cursor = ( temp1577 );
    } else {
        if ( (  cmp173 ( (  op_dash_add175 ( ( (  max_dash_pos4560 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1231 ) ( ( ( * (  pane4558 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1578 = (  min_dash_pos4559 );
        temp1578 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4558 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1578 ) ) );
        int32_t  next_dash_line4562 = (  op_dash_add175 ( ( (  max_dash_pos4560 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4558 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4562 ) , .f_bi = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( ( (  line297 ) ( ( ( * (  pane4558 ) ) .f_buf ) ,  (  next_dash_line4562 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1579 (    struct Maybe_34  m1574 ) {
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

struct Maybe_1581 {
    enum {
        Maybe_1581_None_t,
        Maybe_1581_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_251  field0;
        } Maybe_1581_Just_s;
    } stuff;
};

static struct Maybe_1581 Maybe_1581_Just (  struct Tuple2_251  field0 ) {
    return ( struct Maybe_1581 ) { .tag = Maybe_1581_Just_t, .stuff = { .Maybe_1581_Just_s = { .field0 = field0 } } };
};

struct env1583 {
    ;
    ;
    struct Pane_241 *  pane4667;
    ;
    ;
    struct StrView_27  query4671;
};

struct envunion1585 {
    struct Maybe_276  (*fun) (  struct env1583*  ,    struct Pos_26  );
    struct env1583 env;
};

static  struct Maybe_276   find_dash_slice1587 (    struct Slice_14  haystack2335 ,    struct Slice_14  needle2337 ) {
    struct RangeIter_169  temp1588 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( ( (  haystack2335 ) .f_count ) ) ) , ( (  size_dash_i32311 ) ( ( (  needle2337 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1589 =  next172 (&temp1588);
        if (  __cond1589 .tag == 0 ) {
            break;
        }
        int32_t  i2339 =  __cond1589 .stuff .Maybe_171_Just_s .field0;
        if ( (  eq620 ( ( (  subslice586 ) ( (  haystack2335 ) ,  ( (  i32_dash_size280 ) ( (  i2339 ) ) ) ,  (  op_dash_add356 ( ( (  i32_dash_size280 ) ( (  i2339 ) ) ) , ( (  needle2337 ) .f_count ) ) ) ) ) , (  needle2337 ) ) ) ) {
            return ( ( Maybe_276_Just ) ( ( (  i32_dash_size280 ) ( (  i2339 ) ) ) ) );
        }
    }
    return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
}

static  struct Maybe_276   search_dash_on_dash_line1586 (   struct env1583* env ,    struct Pos_26  pos4674 ) {
    return ( (  find_dash_slice1587 ) ( ( ( (  byte_dash_substr_dash_from584 ) ( ( (  line297 ) ( ( ( * ( env->pane4667 ) ) .f_buf ) ,  ( (  pos4674 ) .f_line ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  pos4674 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4671 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1595 (    int32_t  l241 ,    int32_t  r243 ) {
    return ( (  l241 ) / (  r243 ) );
}

static  int32_t   op_dash_mul1596 (    int32_t  l236 ,    int32_t  r238 ) {
    return ( (  l236 ) * (  r238 ) );
}

static  int32_t   mod1594 (    int32_t  l1544 ,    int32_t  d1546 ) {
    int32_t  r1547 = (  op_dash_div1595 ( (  l1544 ) , (  d1546 ) ) );
    int32_t  m1548 = (  op_dash_sub180 ( (  l1544 ) , (  op_dash_mul1596 ( (  r1547 ) , (  d1546 ) ) ) ) );
    if ( (  cmp173 ( (  m1548 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add175 ( (  d1546 ) , (  m1548 ) ) );
    } else {
        return (  m1548 );
    }
}

struct envunion1598 {
    struct Maybe_276  (*fun) (  struct env1583*  ,    struct Pos_26  );
    struct env1583 env;
};

static  struct Maybe_1581   search_dash_from1582 (    struct Pane_241 *  pane4667 ,    struct Pos_26  pos4669 ,    struct StrView_27  query4671 ) {
    struct env1583 envinst1583 = {
        .pane4667 =  pane4667 ,
        .query4671 =  query4671 ,
    };
    struct envunion1585  temp1584 = ( (struct envunion1585){ .fun = (  struct Maybe_276  (*) (  struct env1583*  ,    struct Pos_26  ) )search_dash_on_dash_line1586 , .env =  envinst1583 } );
    struct Maybe_276  dref4675 = ( temp1584.fun ( &temp1584.env ,  (  pos4669 ) ) );
    if ( dref4675.tag == Maybe_276_Just_t ) {
        struct Pos_26  temp1590 = (  pos4669 );
        temp1590 .  f_bi = (  op_dash_add175 ( ( (  pos4669 ) .f_bi ) , ( (  size_dash_i32311 ) ( ( dref4675 .stuff .Maybe_276_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4677 = ( temp1590 );
        struct Pos_26  temp1591 = (  pos4669 );
        temp1591 .  f_bi = (  op_dash_sub180 ( (  op_dash_add175 ( ( (  pos4669 ) .f_bi ) , ( (  size_dash_i32311 ) ( (  op_dash_add356 ( ( dref4675 .stuff .Maybe_276_Just_s .field0 ) , ( (  num_dash_bytes396 ) ( (  query4671 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4678 = ( temp1591 );
        return ( ( Maybe_1581_Just ) ( ( ( Tuple2_251_Tuple2 ) ( (  sel_dash_pos4677 ) ,  (  cur_dash_pos4678 ) ) ) ) );
    }
    else {
        if ( dref4675.tag == Maybe_276_None_t ) {
            int32_t  num_dash_lines4679 = ( (  num_dash_lines1231 ) ( ( ( * (  pane4667 ) ) .f_buf ) ) );
            struct RangeIter_169  temp1592 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4679 ) ) ) );
            while (true) {
                struct Maybe_171  __cond1593 =  next172 (&temp1592);
                if (  __cond1593 .tag == 0 ) {
                    break;
                }
                int32_t  i4681 =  __cond1593 .stuff .Maybe_171_Just_s .field0;
                int32_t  line4682 = ( (  mod1594 ) ( (  op_dash_add175 ( ( (  pos4669 ) .f_line ) , (  i4681 ) ) ) ,  (  num_dash_lines4679 ) ) );
                struct envunion1598  temp1597 = ( (struct envunion1598){ .fun = (  struct Maybe_276  (*) (  struct env1583*  ,    struct Pos_26  ) )search_dash_on_dash_line1586 , .env =  envinst1583 } );
                struct Maybe_276  dref4683 = ( temp1597.fun ( &temp1597.env ,  ( (struct Pos_26) { .f_line = (  line4682 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4683.tag == Maybe_276_Just_t ) {
                    struct Pos_26  sel_dash_pos4685 = ( (struct Pos_26) { .f_line = (  line4682 ) , .f_bi = ( (  size_dash_i32311 ) ( ( dref4683 .stuff .Maybe_276_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4686 = ( (struct Pos_26) { .f_line = (  line4682 ) , .f_bi = (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( (  op_dash_add356 ( ( dref4683 .stuff .Maybe_276_Just_s .field0 ) , ( (  num_dash_bytes396 ) ( (  query4671 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1581_Just ) ( ( ( Tuple2_251_Tuple2 ) ( (  sel_dash_pos4685 ) ,  (  cur_dash_pos4686 ) ) ) ) );
                }
                else {
                    if ( dref4683.tag == Maybe_276_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1581) { .tag = Maybe_1581_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1580 (    struct Editor_267 *  ed4783 ) {
    struct Maybe_85  dref4784 = ( ( * (  ed4783 ) ) .f_search_dash_term );
    if ( dref4784.tag == Maybe_85_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4784.tag == Maybe_85_Just_t ) {
            struct Maybe_1581  dref4786 = ( (  search_dash_from1582 ) ( ( (  pane1228 ) ( (  ed4783 ) ) ) ,  ( (  max_dash_pos1551 ) ( ( (  pane1228 ) ( (  ed4783 ) ) ) ) ) ,  ( dref4784 .stuff .Maybe_85_Just_s .field0 ) ) );
            if ( dref4786.tag == Maybe_1581_None_t ) {
            }
            else {
                if ( dref4786.tag == Maybe_1581_Just_t ) {
                    ( (  set_dash_cursors287 ) ( ( (  pane1228 ) ( (  ed4783 ) ) ) ,  ( dref4786 .stuff .Maybe_1581_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4786 .stuff .Maybe_1581_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_288_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct DownToRange_1604 {
    int32_t  f_from;
    int32_t  f_to;
};

struct DownToIter_1603 {
    struct DownToRange_1604  f_dtrange;
    int32_t  f_i;
};

static  struct DownToIter_1603   into_dash_iter1605 (    struct DownToRange_1604  self925 ) {
    return ( (struct DownToIter_1603) { .f_dtrange = (  self925 ) , .f_i = ( (  self925 ) .f_from ) } );
}

static  struct DownToRange_1604   down_dash_to1606 (    int32_t  from920 ,    int32_t  to922 ) {
    return ( (struct DownToRange_1604) { .f_from = (  from920 ) , .f_to = (  to922 ) } );
}

static  struct Maybe_171   next1608 (    struct DownToIter_1603 *  self931 ) {
    if ( (  cmp173 ( ( ( * (  self931 ) ) .f_i ) , ( ( ( * (  self931 ) ) .f_dtrange ) .f_to ) ) == 0 ) ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    struct Maybe_171  x932 = ( ( Maybe_171_Just ) ( ( ( * (  self931 ) ) .f_i ) ) );
    (*  self931 ) .f_i = (  op_dash_sub180 ( ( ( * (  self931 ) ) .f_i ) , (  from_dash_integral56 ( 1 ) ) ) );
    return (  x932 );
}

static  struct Maybe_276   find_dash_last_dash_occurence_dash_of_dash_slice1601 (    struct Slice_14  haystack2342 ,    struct Slice_14  needle2344 ) {
    struct DownToIter_1603  temp1602 =  into_dash_iter1605 ( ( (  down_dash_to1606 ) ( (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( ( (  haystack2342 ) .f_count ) ) ) , ( (  size_dash_i32311 ) ( ( (  needle2344 ) .f_count ) ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1607 =  next1608 (&temp1602);
        if (  __cond1607 .tag == 0 ) {
            break;
        }
        int32_t  i2346 =  __cond1607 .stuff .Maybe_171_Just_s .field0;
        if ( (  eq620 ( ( (  subslice586 ) ( (  haystack2342 ) ,  ( (  i32_dash_size280 ) ( (  i2346 ) ) ) ,  (  op_dash_add356 ( ( (  i32_dash_size280 ) ( (  i2346 ) ) ) , ( (  needle2344 ) .f_count ) ) ) ) ) , (  needle2344 ) ) ) ) {
            return ( ( Maybe_276_Just ) ( ( (  i32_dash_size280 ) ( (  i2346 ) ) ) ) );
        }
    }
    return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
}

static  struct Maybe_1581   search_dash_back1600 (    struct Pane_241 *  pane4689 ,    struct Pos_26  pos4691 ,    struct StrView_27  query4693 ) {
    struct Maybe_276  dref4694 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1601 ) ( ( ( (  byte_dash_substr596 ) ( ( (  line297 ) ( ( ( * (  pane4689 ) ) .f_buf ) ,  ( (  pos4691 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( ( (  pos4691 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4693 ) .f_contents ) ) );
    if ( dref4694.tag == Maybe_276_Just_t ) {
        struct Pos_26  temp1609 = (  pos4691 );
        temp1609 .  f_bi = ( (  size_dash_i32311 ) ( ( dref4694 .stuff .Maybe_276_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4696 = ( temp1609 );
        struct Pos_26  temp1610 = (  pos4691 );
        temp1610 .  f_bi = (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( (  op_dash_add356 ( ( dref4694 .stuff .Maybe_276_Just_s .field0 ) , ( (  num_dash_bytes396 ) ( (  query4693 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4697 = ( temp1610 );
        return ( ( Maybe_1581_Just ) ( ( ( Tuple2_251_Tuple2 ) ( (  sel_dash_pos4696 ) ,  (  cur_dash_pos4697 ) ) ) ) );
    }
    else {
        if ( dref4694.tag == Maybe_276_None_t ) {
            int32_t  num_dash_lines4698 = ( (  num_dash_lines1231 ) ( ( ( * (  pane4689 ) ) .f_buf ) ) );
            struct RangeIter_169  temp1611 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4698 ) ) ) );
            while (true) {
                struct Maybe_171  __cond1612 =  next172 (&temp1611);
                if (  __cond1612 .tag == 0 ) {
                    break;
                }
                int32_t  i4700 =  __cond1612 .stuff .Maybe_171_Just_s .field0;
                int32_t  line4701 = ( (  mod1594 ) ( (  op_dash_sub180 ( ( (  pos4691 ) .f_line ) , (  i4700 ) ) ) ,  (  num_dash_lines4698 ) ) );
                struct Maybe_276  dref4702 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1601 ) ( ( ( (  line297 ) ( ( ( * (  pane4689 ) ) .f_buf ) ,  (  line4701 ) ) ) .f_contents ) ,  ( (  query4693 ) .f_contents ) ) );
                if ( dref4702.tag == Maybe_276_Just_t ) {
                    struct Pos_26  sel_dash_pos4704 = ( (struct Pos_26) { .f_line = (  line4701 ) , .f_bi = ( (  size_dash_i32311 ) ( ( dref4702 .stuff .Maybe_276_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4705 = ( (struct Pos_26) { .f_line = (  line4701 ) , .f_bi = (  op_dash_sub180 ( ( (  size_dash_i32311 ) ( (  op_dash_add356 ( ( dref4702 .stuff .Maybe_276_Just_s .field0 ) , ( (  num_dash_bytes396 ) ( (  query4693 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1581_Just ) ( ( ( Tuple2_251_Tuple2 ) ( (  sel_dash_pos4704 ) ,  (  cur_dash_pos4705 ) ) ) ) );
                }
                else {
                    if ( dref4702.tag == Maybe_276_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1581) { .tag = Maybe_1581_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1599 (    struct Editor_267 *  ed4791 ) {
    struct Maybe_85  dref4792 = ( ( * (  ed4791 ) ) .f_search_dash_term );
    if ( dref4792.tag == Maybe_85_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4792.tag == Maybe_85_Just_t ) {
            struct Maybe_1581  dref4794 = ( (  search_dash_back1600 ) ( ( (  pane1228 ) ( (  ed4791 ) ) ) ,  ( (  min_dash_pos1564 ) ( ( (  pane1228 ) ( (  ed4791 ) ) ) ) ) ,  ( dref4792 .stuff .Maybe_85_Just_s .field0 ) ) );
            if ( dref4794.tag == Maybe_1581_None_t ) {
            }
            else {
                if ( dref4794.tag == Maybe_1581_Just_t ) {
                    ( (  set_dash_cursors287 ) ( ( (  pane1228 ) ( (  ed4791 ) ) ) ,  ( dref4794 .stuff .Maybe_1581_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4794 .stuff .Maybe_1581_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_288_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1616 (   struct env145* env ,    struct TextBuf_117 *  self4231 ,    struct Cursors_33  before_dash_cursors4233 ) {
    struct Actions_118 *  actions4234 = ( & ( ( * (  self4231 ) ) .f_actions ) );
    ( (  trim_dash_actions1243 ) ( (  actions4234 ) ) );
    ( (  flush_dash_insert_dash_action1238 ) ( (  self4231 ) ) );
    ( (  assert802 ) ( (  eq1308 ( ( ( ( * (  self4231 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_119_NoChangeset ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al4235 = ( ( * (  self4231 ) ) .f_al );
    struct Changeset_32  temp1617 = ( (struct Changeset_32) { .f_parts = ( (  mk1337 ) ( (  al4235 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors4233 ) } );
    struct Changeset_32 *  changeset4236 = ( &temp1617 );
    struct envunion146  temp1618 = ( (struct envunion146){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1348 , .env =  env->envinst28 } );
    ( temp1618.fun ( &temp1618.env ,  ( & ( ( * (  actions4234 ) ) .f_list ) ) ,  ( * (  changeset4236 ) ) ) );
    (*  actions4234 ) .f_input_dash_changeset = ( ChangesetInputType_119_CustomChangeset );
    (*  actions4234 ) .f_cur = (  op_dash_add356 ( ( ( * (  actions4234 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1269   head1624 (    struct List_23  it1167 ) {
    struct SliceIter_1262  temp1625 = ( (  into_dash_iter1264 ) ( (  it1167 ) ) );
    return ( (  next1270 ) ( ( &temp1625 ) ) );
}

static  bool   null1623 (    struct List_23  it1176 ) {
    struct Maybe_1269  dref1177 = ( (  head1624 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_1269_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1622 (    struct TextBuf_117 *  self4239 ) {
    ( (  flush_dash_insert_dash_action1238 ) ( (  self4239 ) ) );
    struct Actions_118 *  actions4240 = ( & ( ( * (  self4239 ) ) .f_actions ) );
    if ( ( (  null1623 ) ( ( ( * ( (  last_dash_ptr1310 ) ( ( (  to_dash_slice1312 ) ( ( ( * (  actions4240 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions4240 ) .f_cur = (  op_dash_sub458 ( ( ( * (  actions4240 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions4240 ) .f_input_dash_changeset = ( ChangesetInputType_119_NoChangeset );
        ( (  trim_dash_actions1243 ) ( (  actions4240 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1627 (    struct Maybe_34  x1585 ,    struct Pos_26 (*  fun1587 )(    struct Pos_26  ) ) {
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

static  struct Pos_26   lam1628 (    struct Pos_26  sel4634 ) {
    struct Pos_26  temp1629 = (  sel4634 );
    temp1629 .  f_bi = (  op_dash_add175 ( ( (  sel4634 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1629 );
}

static  enum Unit_8   indent_dash_selection1614 (   struct env238* env ,    struct Pane_241 *  self4630 ) {
    struct envunion239  temp1615 = ( (struct envunion239){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  ) )begin_dash_changeset1616 , .env =  env->envinst145 } );
    ( temp1615.fun ( &temp1615.env ,  ( ( * (  self4630 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4630 ) ) .f_cursor ) , .f_sel = ( ( * (  self4630 ) ) .f_sel ) } ) ) );
    struct RangeIter_169  temp1619 =  into_dash_iter170 ( ( (  to179 ) ( ( ( (  min_dash_pos1564 ) ( (  self4630 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1551 ) ( (  self4630 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_171  __cond1620 =  next172 (&temp1619);
        if (  __cond1620 .tag == 0 ) {
            break;
        }
        int32_t  line4632 =  __cond1620 .stuff .Maybe_171_Just_s .field0;
        struct envunion240  temp1621 = ( (struct envunion240){ .fun = (  enum Unit_8  (*) (  struct env236*  ,    struct Pane_241 *  ,    int32_t  ) )indent_dash_at1379 , .env =  env->envinst236 } );
        ( temp1621.fun ( &temp1621.env ,  (  self4630 ) ,  (  line4632 ) ) );
    }
    ( (  end_dash_changeset1622 ) ( ( ( * (  self4630 ) ) .f_buf ) ) );
    struct Pos_26  temp1626 = ( ( * (  self4630 ) ) .f_cursor );
    temp1626 .  f_bi = (  op_dash_add175 ( ( ( ( * (  self4630 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors287 ) ( (  self4630 ) ,  ( temp1626 ) ,  ( (  fmap_dash_maybe1627 ) ( ( ( * (  self4630 ) ) .f_sel ) ,  (  lam1628 ) ) ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1640 {
    ;
    bool  last_dash_char_dash_was_dash_tab4639;
    ;
};

struct envunion1641 {
    struct Pos_26  (*fun) (  struct env1640*  ,    struct Pos_26  );
    struct env1640 env;
};

static  struct Maybe_34   fmap_dash_maybe1639 (    struct Maybe_34  x1585 ,   struct envunion1641  fun1587 ) {
    struct Maybe_34  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_34_Just_t ) {
            struct envunion1641  temp1642 = (  fun1587 );
            return ( ( Maybe_34_Just ) ( ( temp1642.fun ( &temp1642.env ,  ( dref1588 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1643 (   struct env1640* env ,    struct Pos_26  sel4643 ) {
    struct Pos_26  temp1644 = (  sel4643 );
    temp1644 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4639 ) ? (  op_dash_sub180 ( ( (  sel4643 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4643 ) .f_bi ) );
    return ( temp1644 );
}

static  enum Unit_8   dedent_dash_selection1631 (   struct env244* env ,    struct Pane_241 *  self4637 ) {
    struct envunion246  temp1632 = ( (struct envunion246){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  ) )begin_dash_changeset1616 , .env =  env->envinst145 } );
    ( temp1632.fun ( &temp1632.env ,  ( ( * (  self4637 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4637 ) ) .f_cursor ) , .f_sel = ( ( * (  self4637 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1633 = ( (  min_dash_pos1564 ) ( (  self4637 ) ) );
    temp1633 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4638 = (  eq360 ( ( (  char_dash_at1406 ) ( (  self4637 ) ,  ( temp1633 ) ) ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1634 = ( (  max_dash_pos1551 ) ( (  self4637 ) ) );
    temp1634 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4639 = (  eq360 ( ( (  char_dash_at1406 ) ( (  self4637 ) ,  ( temp1634 ) ) ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_169  temp1635 =  into_dash_iter170 ( ( (  to179 ) ( ( ( (  min_dash_pos1564 ) ( (  self4637 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1551 ) ( (  self4637 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_171  __cond1636 =  next172 (&temp1635);
        if (  __cond1636 .tag == 0 ) {
            break;
        }
        int32_t  line4641 =  __cond1636 .stuff .Maybe_171_Just_s .field0;
        if ( (  eq360 ( ( (  char_dash_at1406 ) ( (  self4637 ) ,  ( (struct Pos_26) { .f_line = (  line4641 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion245  temp1637 = ( (struct envunion245){ .fun = (  struct Maybe_227  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  ) )change1242 , .env =  env->envinst140 } );
            ( temp1637.fun ( &temp1637.env ,  ( ( * (  self4637 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4641 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4641 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_227) { .tag = Maybe_227_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1622 ) ( ( ( * (  self4637 ) ) .f_buf ) ) );
    struct Pos_26  temp1638 = ( ( * (  self4637 ) ) .f_cursor );
    temp1638 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4638 ) ? (  op_dash_sub180 ( ( ( ( * (  self4637 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4637 ) ) .f_cursor ) .f_bi ) );
    struct env1640 envinst1640 = {
        .last_dash_char_dash_was_dash_tab4639 =  last_dash_char_dash_was_dash_tab4639 ,
    };
    ( (  set_dash_cursors287 ) ( (  self4637 ) ,  ( temp1638 ) ,  ( (  fmap_dash_maybe1639 ) ( ( ( * (  self4637 ) ) .f_sel ) ,  ( (struct envunion1641){ .fun = (  struct Pos_26  (*) (  struct env1640*  ,    struct Pos_26  ) )lam1643 , .env =  envinst1640 } ) ) ) ,  ( CursorMovement_288_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enmenue1645 (    struct Editor_267 *  ed4799 ,    struct Menu_269  menu4801 ) {
    (*  ed4799 ) .f_mode = ( ( EditorMode_268_Menu ) ( (  menu4801 ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1649 (  ) {
    int32_t  temp1650;
    return (  temp1650 );
}

static  int32_t   or_dash_fail1648 (    struct Maybe_171  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_171  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_171_None_t ) {
        ( (  panic850 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1649 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_171_Just_t ) {
            return ( dref1356 .stuff .Maybe_171_Just_s .field0 );
        }
    }
}

struct env1653 {
    ;
    struct Pane_241 *  self4652;
};

struct envunion1654 {
    int32_t  (*fun) (  struct env1653*  ,    int32_t  );
    struct env1653 env;
};

struct Map_1652 {
    struct RangeIter_169  field0;
    struct envunion1654  field1;
};

static struct Map_1652 Map_1652_Map (  struct RangeIter_169  field0 , struct envunion1654  field1 ) {
    return ( struct Map_1652 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1652   into_dash_iter1656 (    struct Map_1652  self804 ) {
    return (  self804 );
}

static  struct Maybe_171   next1657 (    struct Map_1652 *  dref806 ) {
    struct Maybe_171  dref809 = ( (  next172 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_171_None_t ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_171_Just_t ) {
            struct envunion1654  temp1658 = ( (* dref806 ) .field1 );
            return ( ( Maybe_171_Just ) ( ( temp1658.fun ( &temp1658.env ,  ( dref809 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_171   reduce1655 (    struct Map_1652  iterable1118 ,    struct Maybe_171  base1120 ,    struct Maybe_171 (*  fun1122 )(    int32_t  ,    struct Maybe_171  ) ) {
    struct Maybe_171  x1123 = (  base1120 );
    struct Map_1652  it1124 = ( (  into_dash_iter1656 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next1657 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1659 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1659);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_171  temp1660;
    return (  temp1660 );
}

struct env1663 {
    int32_t  x1553;
    ;
};

struct envunion1664 {
    struct Maybe_171  (*fun) (  struct env1663*  ,    int32_t  );
    struct env1663 env;
};

static  struct Maybe_171   maybe1662 (    struct Maybe_171  x1592 ,   struct envunion1664  fun1594 ,    struct Maybe_171  default1596 ) {
    struct envunion1664  temp1665 = (  fun1594 );
    return ( {  struct Maybe_171  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_171_Just_t ? ( temp1665.fun ( &temp1665.env ,  ( dref1597 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  struct Maybe_171   lam1666 (   struct env1663* env ,    int32_t  lm1622 ) {
    return ( ( Maybe_171_Just ) ( ( (  min793 ) ( (  lm1622 ) ,  ( env->x1553 ) ) ) ) );
}

static  struct Maybe_171   lam1661 (    int32_t  x1553 ,    struct Maybe_171  last_dash_min1555 ) {
    struct env1663 envinst1663 = {
        .x1553 =  x1553 ,
    };
    return ( (  maybe1662 ) ( (  last_dash_min1555 ) ,  ( (struct envunion1664){ .fun = (  struct Maybe_171  (*) (  struct env1663*  ,    int32_t  ) )lam1666 , .env =  envinst1663 } ) ,  ( ( Maybe_171_Just ) ( (  x1553 ) ) ) ) );
}

static  struct Maybe_171   minimum1651 (    struct Map_1652  it1551 ) {
    return ( (  reduce1655 ) ( (  it1551 ) ,  ( (struct Maybe_171) { .tag = Maybe_171_None_t } ) ,  (  lam1661 ) ) );
}

static  struct Map_1652   map1667 (    struct Range_166  iterable813 ,   struct envunion1654  fun815 ) {
    struct RangeIter_169  it816 = ( (  into_dash_iter170 ) ( (  iterable813 ) ) );
    return ( ( Map_1652_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  int32_t   lam1668 (   struct env1653* env ,    int32_t  ln4656 ) {
    return ( (  indent_dash_at_dash_line399 ) ( ( env->self4652 ) ,  (  ln4656 ) ) );
}

struct env1670 {
    ;
    struct Pane_241 *  self4652;
    ;
};

struct envunion1671 {
    bool  (*fun) (  struct env1670*  ,    int32_t  );
    struct env1670 env;
};

struct env1673 {
    struct envunion1671  fun1151;
};

struct envunion1674 {
    bool  (*fun) (  struct env1673*  ,    int32_t  ,    bool  );
    struct env1673 env;
};

static  bool   reduce1672 (    struct Range_166  iterable1118 ,    bool  base1120 ,   struct envunion1674  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion1674  temp1675 = (  fun1122 );
                x1123 = ( temp1675.fun ( &temp1675.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1676 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1676);
    abort ( );
    ( Unit_8_Unit );
    bool  temp1677;
    return (  temp1677 );
}

static  bool   lam1678 (   struct env1673* env ,    int32_t  e1153 ,    bool  x1155 ) {
    struct envunion1671  temp1679 = ( env->fun1151 );
    return ( ( temp1679.fun ( &temp1679.env ,  (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all1669 (    struct Range_166  it1149 ,   struct envunion1671  fun1151 ) {
    struct env1673 envinst1673 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce1672 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion1674){ .fun = (  bool  (*) (  struct env1673*  ,    int32_t  ,    bool  ) )lam1678 , .env =  envinst1673 } ) ) );
}

static  bool   is_dash_just1681 (    struct Maybe_1581  m1570 ) {
    struct Maybe_1581  dref1571 = (  m1570 );
    if ( dref1571.tag == Maybe_1581_None_t ) {
        return ( false );
    }
    else {
        if ( dref1571.tag == Maybe_1581_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1683 (    struct Char_65  c4583 ) {
    return ( ( !  eq360 ( (  c4583 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace414 ) ( (  c4583 ) ) ) );
}

static  struct Maybe_1581   line_dash_begins_dash_with_dash_comment1682 (    struct Pane_241 *  self4577 ,    int32_t  line4579 ) {
    int32_t  indent4580 = ( (  indent_dash_at_dash_line399 ) ( (  self4577 ) ,  (  line4579 ) ) );
    if ( (  eq360 ( ( (  char_dash_at1406 ) ( (  self4577 ) ,  ( (  mk829 ) ( (  line4579 ) ,  (  indent4580 ) ) ) ) ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4581 = (  op_dash_add175 ( (  indent4580 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1683 ) ( ( (  char_dash_at1406 ) ( (  self4577 ) ,  ( (  mk829 ) ( (  line4579 ) ,  (  i4581 ) ) ) ) ) ) ) ) {
            i4581 = (  op_dash_add175 ( (  i4581 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1581_Just ) ( ( ( Tuple2_251_Tuple2 ) ( ( (  mk829 ) ( (  line4579 ) ,  (  indent4580 ) ) ) ,  ( (  mk829 ) ( (  line4579 ) ,  (  i4581 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1581) { .tag = Maybe_1581_None_t } );
    }
}

static  bool   lam1680 (   struct env1670* env ,    int32_t  ln4659 ) {
    return ( (  is_dash_just1681 ) ( ( (  line_dash_begins_dash_with_dash_comment1682 ) ( ( env->self4652 ) ,  (  ln4659 ) ) ) ) );
}

static  struct Tuple2_251   undefined1689 (  ) {
    struct Tuple2_251  temp1690;
    return (  temp1690 );
}

static  struct Tuple2_251   or_dash_fail1688 (    struct Maybe_1581  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_1581  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1581_None_t ) {
        ( (  panic850 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1689 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1581_Just_t ) {
            return ( dref1356 .stuff .Maybe_1581_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1647 (   struct env249* env ,    struct Pane_241 *  self4652 ) {
    int32_t  from_dash_line4653 = ( ( (  min_dash_pos1564 ) ( (  self4652 ) ) ) .f_line );
    int32_t  to_dash_line4654 = ( ( (  max_dash_pos1551 ) ( (  self4652 ) ) ) .f_line );
    struct env1653 envinst1653 = {
        .self4652 =  self4652 ,
    };
    int32_t  min_dash_indent4657 = ( (  or_dash_fail1648 ) ( ( (  minimum1651 ) ( ( (  map1667 ) ( ( (  to179 ) ( (  from_dash_line4653 ) ,  (  to_dash_line4654 ) ) ) ,  ( (struct envunion1654){ .fun = (  int32_t  (*) (  struct env1653*  ,    int32_t  ) )lam1668 , .env =  envinst1653 } ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1670 envinst1670 = {
        .self4652 =  self4652 ,
    };
    bool  all_dash_have_dash_comment4660 = ( (  all1669 ) ( ( (  to179 ) ( (  from_dash_line4653 ) ,  (  to_dash_line4654 ) ) ) ,  ( (struct envunion1671){ .fun = (  bool  (*) (  struct env1670*  ,    int32_t  ) )lam1680 , .env =  envinst1670 } ) ) );
    struct envunion252  temp1684 = ( (struct envunion252){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  ) )begin_dash_changeset1616 , .env =  env->envinst145 } );
    ( temp1684.fun ( &temp1684.env ,  ( ( * (  self4652 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4652 ) ) .f_cursor ) , .f_sel = ( ( * (  self4652 ) ) .f_sel ) } ) ) );
    struct RangeIter_169  temp1685 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_line4653 ) ,  (  to_dash_line4654 ) ) ) );
    while (true) {
        struct Maybe_171  __cond1686 =  next172 (&temp1685);
        if (  __cond1686 .tag == 0 ) {
            break;
        }
        int32_t  line4662 =  __cond1686 .stuff .Maybe_171_Just_s .field0;
        struct Char_65  comment_dash_str4663 = ( (  from_dash_charlike338 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4660 ) ) ) {
            ( (  set_dash_cursors287 ) ( (  self4652 ) ,  ( (  mk829 ) ( (  line4662 ) ,  (  min_dash_indent4657 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
            struct envunion253  temp1687 = ( (struct envunion253){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1240 , .env =  env->envinst225 } );
            ( temp1687.fun ( &temp1687.env ,  (  self4652 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_251  comment_dash_pos4664 = ( (  or_dash_fail1688 ) ( ( (  line_dash_begins_dash_with_dash_comment1682 ) ( (  self4652 ) ,  (  line4662 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion250  temp1691 = ( (struct envunion250){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1483 , .env =  env->envinst234 } );
            ( temp1691.fun ( &temp1691.env ,  (  self4652 ) ,  (  comment_dash_pos4664 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1622 ) ( ( ( * (  self4652 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1222 (   struct env424* env ,    struct Editor_267 *  ed4816 ,    struct Key_441  key4818 ) {
    struct Key_441  dref4819 = (  key4818 );
    if ( dref4819.tag == Key_441_Char_t ) {
        if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4816 ) .f_running = ( false );
        } else {
            if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1223 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ) );
            } else {
                if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1229 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ) );
                } else {
                    if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1232 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1236 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1237 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( Mode_242_Insert ) ) );
                            } else {
                                if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented398 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ) );
                                    ( (  set_dash_mode1237 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( Mode_242_Insert ) ) );
                                } else {
                                    if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end286 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ) );
                                        ( (  set_dash_mode1237 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( Mode_242_Insert ) ) );
                                    } else {
                                        if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_241 *  pane4821 = ( (  pane1228 ) ( (  ed4816 ) ) );
                                            int32_t  indent4822 = ( (  indent_dash_at_dash_line399 ) ( (  pane4821 ) ,  ( ( ( * (  pane4821 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end286 ) ( (  pane4821 ) ) );
                                            struct envunion428  temp1239 = ( (struct envunion428){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1240 , .env =  env->envinst225 } );
                                            ( temp1239.fun ( &temp1239.env ,  (  pane4821 ) ,  ( (  from_dash_charlike642 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1229 ) ( (  pane4821 ) ) );
                                            struct envunion433  temp1374 = ( (struct envunion433){ .fun = (  enum Unit_8  (*) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  ) )indent_dash_at_dash_current1375 , .env =  env->envinst247 } );
                                            ( temp1374.fun ( &temp1374.env ,  (  pane4821 ) ,  (  indent4822 ) ) );
                                            ( (  set_dash_mode1237 ) ( (  pane4821 ) ,  ( Mode_242_Insert ) ) );
                                        } else {
                                            if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_241 *  pane4823 = ( (  pane1228 ) ( (  ed4816 ) ) );
                                                int32_t  indent4824 = ( (  indent_dash_at_dash_line399 ) ( (  pane4823 ) ,  ( ( ( * (  pane4823 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1381 ) ( (  pane4823 ) ) );
                                                struct envunion1384  temp1383 = ( (struct envunion1384){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1240 , .env =  env->envinst225 } );
                                                ( temp1383.fun ( &temp1383.env ,  (  pane4823 ) ,  ( (  from_dash_charlike642 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1386  temp1385 = ( (struct envunion1386){ .fun = (  enum Unit_8  (*) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  ) )indent_dash_at_dash_current1375 , .env =  env->envinst247 } );
                                                ( temp1385.fun ( &temp1385.env ,  (  pane4823 ) ,  (  indent4824 ) ) );
                                                ( (  set_dash_mode1237 ) ( (  pane4823 ) ,  ( Mode_242_Insert ) ) );
                                            } else {
                                                if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1387 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( MoveDirection_1388_MoveFwd ) ,  ( MoveTarget_1389_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1387 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( MoveDirection_1388_MoveFwd ) ,  ( MoveTarget_1389_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1387 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( MoveDirection_1388_MoveBwd ) ,  ( MoveTarget_1389_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion432  temp1426 = ( (struct envunion432){ .fun = (  enum Unit_8  (*) (  struct env232*  ,    struct Pane_241 *  ) )redo1427 , .env =  env->envinst232 } );
                                                                ( temp1426.fun ( &temp1426.env ,  ( (  pane1228 ) ( (  ed4816 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion431  temp1451 = ( (struct envunion431){ .fun = (  enum Unit_8  (*) (  struct env230*  ,    struct Pane_241 *  ) )undo1452 , .env =  env->envinst230 } );
                                                                    ( temp1451.fun ( &temp1451.env ,  ( (  pane1228 ) ( (  ed4816 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion427  temp1469 = ( (struct envunion427){ .fun = (  enum Unit_8  (*) (  struct env254*  ,    struct Editor_267 *  ) )copy_dash_selection_dash_to_dash_clipboard1470 , .env =  env->envinst254 } );
                                                                        ( temp1469.fun ( &temp1469.env ,  (  ed4816 ) ) );
                                                                        struct envunion425  temp1482 = ( (struct envunion425){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1483 , .env =  env->envinst234 } );
                                                                        ( temp1482.fun ( &temp1482.env ,  ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( (  selection1471 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1237 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( Mode_242_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1491  temp1490 = ( (struct envunion1491){ .fun = (  enum Unit_8  (*) (  struct env254*  ,    struct Editor_267 *  ) )copy_dash_selection_dash_to_dash_clipboard1470 , .env =  env->envinst254 } );
                                                                            ( temp1490.fun ( &temp1490.env ,  (  ed4816 ) ) );
                                                                            struct envunion1493  temp1492 = ( (struct envunion1493){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_241 *  ,    struct Tuple2_251  ,    struct StrView_27  ) )replace_dash_selection1483 , .env =  env->envinst234 } );
                                                                            ( temp1492.fun ( &temp1492.env ,  ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( (  selection1471 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1237 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( Mode_242_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1495  temp1494 = ( (struct envunion1495){ .fun = (  enum Unit_8  (*) (  struct env254*  ,    struct Editor_267 *  ) )copy_dash_selection_dash_to_dash_clipboard1470 , .env =  env->envinst254 } );
                                                                                ( temp1494.fun ( &temp1494.env ,  (  ed4816 ) ) );
                                                                                size_t  bytes_dash_yanked4825 = ( (  num_dash_bytes396 ) ( ( (  or_dash_else724 ) ( ( ( * (  ed4816 ) ) .f_clipboard ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion430  temp1496 = ( (struct envunion430){ .fun = (  enum Unit_8  (*) (  struct env256*  ,    struct Editor_267 *  ,    struct StrConcat_78  ) )set_dash_msg1497 , .env =  env->envinst256 } );
                                                                                ( temp1496.fun ( &temp1496.env ,  (  ed4816 ) ,  ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4825 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1546 envinst1546 = {
                                                                                        .envinst234 = env->envinst234 ,
                                                                                        .ed4816 =  ed4816 ,
                                                                                    };
                                                                                    ( (  if_dash_just1545 ) ( ( ( * (  ed4816 ) ) .f_clipboard ) ,  ( (struct envunion1548){ .fun = (  enum Unit_8  (*) (  struct env1546*  ,    struct StrView_27  ) )lam1550 , .env =  envinst1546 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1559 envinst1559 = {
                                                                                            .ed4816 =  ed4816 ,
                                                                                            .envinst234 = env->envinst234 ,
                                                                                        };
                                                                                        ( (  if_dash_just1558 ) ( ( ( * (  ed4816 ) ) .f_clipboard ) ,  ( (struct envunion1561){ .fun = (  enum Unit_8  (*) (  struct env1559*  ,    struct StrView_27  ) )lam1563 , .env =  envinst1559 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1568 envinst1568 = {
                                                                                                .ed4816 =  ed4816 ,
                                                                                                .envinst234 = env->envinst234 ,
                                                                                            };
                                                                                            ( (  if_dash_just1567 ) ( ( ( * (  ed4816 ) ) .f_clipboard ) ,  ( (struct envunion1570){ .fun = (  enum Unit_8  (*) (  struct env1568*  ,    struct StrView_27  ) )lam1572 , .env =  envinst1568 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1575 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1237 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( Mode_242_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1579 ) ( ( ( ( * (  ed4816 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4816 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4816 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4816 ) .f_mode = ( ( EditorMode_268_Cmd ) ( ( ( * ( (  pane1228 ) ( (  ed4816 ) ) ) ) .f_cursor ) ,  ( (  mk1501 ) ( ( ( * (  ed4816 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4816 ) .f_mode = ( ( EditorMode_268_Search ) ( ( ( * ( (  pane1228 ) ( (  ed4816 ) ) ) ) .f_cursor ) ,  ( (  mk1501 ) ( ( ( * (  ed4816 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1580 ) ( (  ed4816 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1599 ) ( (  ed4816 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion429  temp1613 = ( (struct envunion429){ .fun = (  enum Unit_8  (*) (  struct env238*  ,    struct Pane_241 *  ) )indent_dash_selection1614 , .env =  env->envinst238 } );
                                                                                                                        ( temp1613.fun ( &temp1613.env ,  ( (  pane1228 ) ( (  ed4816 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion426  temp1630 = ( (struct envunion426){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Pane_241 *  ) )dedent_dash_selection1631 , .env =  env->envinst244 } );
                                                                                                                            ( temp1630.fun ( &temp1630.env ,  ( (  pane1228 ) ( (  ed4816 ) ) ) ) );
                                                                                                                        } else {
                                                                                                                            if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                                ( (  enmenue1645 ) ( (  ed4816 ) ,  ( env->goto_dash_menu4808 ) ) );
                                                                                                                            } else {
                                                                                                                                if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Char_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                                    ( (  enmenue1645 ) ( (  ed4816 ) ,  ( env->space_dash_menu4813 ) ) );
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
        if ( dref4819.tag == Key_441_Escape_t ) {
            ( (  set_dash_mode1237 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  ( Mode_242_Normal ) ) );
        }
        else {
            if ( dref4819.tag == Key_441_Ctrl_t ) {
                if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Ctrl_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion434  temp1646 = ( (struct envunion434){ .fun = (  enum Unit_8  (*) (  struct env249*  ,    struct Pane_241 *  ) )toggle_dash_comment1647 , .env =  env->envinst249 } );
                    ( temp1646.fun ( &temp1646.env ,  ( (  pane1228 ) ( (  ed4816 ) ) ) ) );
                } else {
                    if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Ctrl_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1236 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq1070 ( ( dref4819 .stuff .Key_441_Ctrl_s .field0 ) , ( (  from_dash_charlike282 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1232 ) ( ( (  pane1228 ) ( (  ed4816 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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

struct envunion1693 {
    enum Unit_8  (*fun) (  struct env424*  ,    struct Editor_267 *  ,    struct Key_441  );
    struct env424 env;
};

static  enum Unit_8   backspace1697 (   struct env228* env ,    struct Pane_241 *  self4592 ) {
    struct Pos_26  prev_dash_cur4593 = ( ( * (  self4592 ) ) .f_cursor );
    ( (  move_dash_left1223 ) ( (  self4592 ) ) );
    struct envunion229  temp1698 = ( (struct envunion229){ .fun = (  struct Maybe_227  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_227  ) )change1242 , .env =  env->envinst140 } );
    ( temp1698.fun ( &temp1698.env ,  ( ( * (  self4592 ) ) .f_buf ) ,  ( ( * (  self4592 ) ) .f_cursor ) ,  (  prev_dash_cur4593 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_227) { .tag = Maybe_227_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1700 {
    char _arr [1];
};

static  char *   cast1701 (    struct Array_1700 *  x395 ) {
    return ( (char * ) (  x395 ) );
}

static  struct Slice_1084   as_dash_slice1699 (    struct Array_1700 *  arr2052 ) {
    return ( (struct Slice_1084) { .f_ptr = ( (  cast1701 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1700   from_dash_listlike1703 (    struct Array_1700 *  self369 ) {
    return ( * (  self369 ) );
}

struct envunion1706 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  );
    struct env225 env;
};

struct Scanner_1709 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1709   mk_dash_from_dash_strview1711 (    struct StrView_27  s3402 ) {
    return ( (struct Scanner_1709) { .f_s = (  s3402 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1717 {
    struct StrViewIter_293  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1716 {
    struct TakeWhile_1717  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1716 Map_1716_Map (  struct TakeWhile_1717  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1716 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1716   into_dash_iter1719 (    struct Map_1716  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next1721 (    struct TakeWhile_1717 *  self989 ) {
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

static  struct Maybe_276   next1720 (    struct Map_1716 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next1721 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_276_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1718 (    struct Map_1716  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1716  it1124 = ( (  into_dash_iter1719 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_276  dref1125 = ( (  next1720 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_276_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_276_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_276_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1722 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1722);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1723;
    return (  temp1723 );
}

static  size_t   lam1724 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add356 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1715 (    struct Map_1716  it1135 ) {
    return ( (  reduce1718 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1724 ) ) );
}

static  struct TakeWhile_1717   into_dash_iter1726 (    struct TakeWhile_1717  self986 ) {
    return (  self986 );
}

static  struct Map_1716   map1725 (    struct TakeWhile_1717  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1717  it816 = ( (  into_dash_iter1726 ) ( (  iterable813 ) ) );
    return ( ( Map_1716_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1717   take_dash_while1727 (    struct StrViewIter_293  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1717) { .f_it = ( (  into_dash_iter294 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1728 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1714 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1715 ) ( ( (  map1725 ) ( ( (  take_dash_while1727 ) ( ( (  chars295 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1728 ) ) ) ) );
    return ( (  byte_dash_substr596 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1713 (    struct Scanner_1709 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1714 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from584 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes396 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

static  enum Unit_8   drop_dash_str_dash_while1712 (    struct Scanner_1709 *  sc3488 ,    bool (*  fun3490 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1713 ) ( (  sc3488 ) ,  (  fun3490 ) ) );
    return ( Unit_8_Unit );
}

struct TakeWhile_1733 {
    struct StrViewIter_293  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1732 {
    struct TakeWhile_1733  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1732 Map_1732_Map (  struct TakeWhile_1733  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1732 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1732   into_dash_iter1735 (    struct Map_1732  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next1737 (    struct TakeWhile_1733 *  self989 ) {
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

static  struct Maybe_276   next1736 (    struct Map_1732 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next1737 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_276_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1734 (    struct Map_1732  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1732  it1124 = ( (  into_dash_iter1735 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_276  dref1125 = ( (  next1736 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_276_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_276_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_276_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1738 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1738);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1739;
    return (  temp1739 );
}

static  size_t   lam1740 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add356 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1731 (    struct Map_1732  it1135 ) {
    return ( (  reduce1734 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1740 ) ) );
}

static  struct TakeWhile_1733   into_dash_iter1742 (    struct TakeWhile_1733  self986 ) {
    return (  self986 );
}

static  struct Map_1732   map1741 (    struct TakeWhile_1733  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1733  it816 = ( (  into_dash_iter1742 ) ( (  iterable813 ) ) );
    return ( ( Map_1732_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1733   take_dash_while1743 (    struct StrViewIter_293  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1733) { .f_it = ( (  into_dash_iter294 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1744 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1730 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1731 ) ( ( (  map1741 ) ( ( (  take_dash_while1743 ) ( ( (  chars295 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1744 ) ) ) ) );
    return ( (  byte_dash_substr596 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1729 (    struct Scanner_1709 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1730 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from584 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes396 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

static  bool   is_dash_not_dash_whitespace1745 (    struct Char_65  c1503 ) {
    return ( ! ( (  is_dash_whitespace414 ) ( (  c1503 ) ) ) );
}

static  struct Maybe_351   head1747 (    struct StrView_27  it1167 ) {
    struct StrViewIter_293  temp1748 = ( (  into_dash_iter296 ) ( (  it1167 ) ) );
    return ( (  next352 ) ( ( &temp1748 ) ) );
}

static  bool   null1746 (    struct StrView_27  it1176 ) {
    struct Maybe_351  dref1177 = ( (  head1747 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_351_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env1752 {
    ;
    enum CAllocator_10  al4110;
};

struct envunion1753 {
    struct StrView_27  (*fun) (  struct env1752*  ,    struct StrView_27  );
    struct env1752 env;
};

static  struct Maybe_85   fmap_dash_maybe1751 (    struct Maybe_85  x1585 ,   struct envunion1753  fun1587 ) {
    struct Maybe_85  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_85_None_t ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_85_Just_t ) {
            struct envunion1753  temp1754 = (  fun1587 );
            return ( ( Maybe_85_Just ) ( ( temp1754.fun ( &temp1754.env ,  ( dref1588 .stuff .Maybe_85_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrView_27   lam1755 (   struct env1752* env ,    struct StrView_27  s4112 ) {
    return ( (  clone_dash_0643 ) ( (  s4112 ) ,  ( env->al4110 ) ) );
}

static  struct Maybe_85   maybe1756 (    struct Maybe_85  x1592 ,    struct Maybe_85 (*  fun1594 )(    struct StrView_27  ) ,    struct Maybe_85  default1596 ) {
    return ( {  struct Maybe_85  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_85_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_85_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  bool   is_dash_none1757 (    struct Maybe_85  m1574 ) {
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

struct env1766 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1767 {
    enum Unit_8  (*fun) (  struct env1766*  ,    struct Char_65  );
    struct env1766 env;
};

static  enum Unit_8   for_dash_each1765 (    struct StrConcatIter_1414  iterable1099 ,   struct envunion1767  fun1101 ) {
    struct StrConcatIter_1414  temp1768 = ( (  into_dash_iter1416 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1414 *  it1102 = ( &temp1768 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next1417 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                struct envunion1767  temp1769 = (  fun1101 );
                ( temp1769.fun ( &temp1769.env ,  ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1770 (   struct env1766* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1771 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1534 , .env =  env->envinst60 } );
    return ( temp1771.fun ( &temp1771.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1764 (   struct env68* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrConcat_71  s2879 ) {
    struct env1766 envinst1766 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1765 ) ( ( (  chars1418 ) ( (  s2879 ) ) ) ,  ( (struct envunion1767){ .fun = (  enum Unit_8  (*) (  struct env1766*  ,    struct Char_65  ) )lam1770 , .env =  envinst1766 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1762 (   struct env69* env ,    struct StrBuilder_62 *  builder2884 ,    struct StrView_27  s2886 ) {
    struct envunion70  temp1763 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  ) )write1764 , .env =  env->envinst68 } );
    return ( temp1763.fun ( &temp1763.env ,  (  builder2884 ) ,  ( ( StrConcat_71_StrConcat ) ( (  s2886 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1773 (  ) {
    struct StrView_27  temp1774;
    return (  temp1774 );
}

static  struct StrView_27   or_dash_fail1772 (    struct Maybe_85  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_85  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_85_None_t ) {
        ( (  panic850 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1773 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_85_Just_t ) {
            return ( dref1356 .stuff .Maybe_85_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_293   chars1777 (    struct StrBuilder_62  s2929 ) {
    return ( (  into_dash_iter296 ) ( ( (  as_dash_str1542 ) ( ( & (  s2929 ) ) ) ) ) );
}

static  struct StrViewIter_293   chars1776 (    struct StrBuilder_62 *  self1754 ) {
    return ( (  chars1777 ) ( ( * (  self1754 ) ) ) );
}

static  int32_t   fprintf_dash_char1778 (    FILE *  file1479 ,    struct Char_65  c1481 ) {
    struct Array_320  temp1780;
    struct Array_320  temp1779 = (  temp1780 );
    struct Char_65  c1482 = ( (  regularize319 ) ( (  c1481 ) ,  ( &temp1779 ) ) );
    return ( ( fprintf ) ( (  file1479 ) ,  ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32311 ) ( ( (  c1482 ) .f_num_dash_bytes ) ) ) ,  ( (  c1482 ) .f_ptr ) ) );
}

static  bool   unreachable1781 (  ) {
    ( (  println1411 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1420 ) ( ) );
}

static  bool   try_dash_write_dash_contents1775 (    const char*  filename3178 ,    struct StrBuilder_62 *  contents3180 ) {
    FILE *  file3181 = ( ( fopen ) ( (  filename3178 ) ,  ( (  from_dash_charlike673 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null674 ) ( (  file3181 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_293  it3182 = ( (  chars1776 ) ( (  contents3180 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref3183 = ( (  next352 ) ( ( & (  it3182 ) ) ) );
        if ( dref3183.tag == Maybe_351_None_t ) {
            ( ( fclose ) ( (  file3181 ) ) );
            return ( true );
        }
        else {
            if ( dref3183.tag == Maybe_351_Just_t ) {
                int32_t  chars_dash_written3185 = ( (  fprintf_dash_char1778 ) ( (  file3181 ) ,  ( dref3183 .stuff .Maybe_351_Just_s .field0 ) ) );
                if ( (  cmp173 ( (  chars_dash_written3185 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1781 ) ( ) );
}

static  enum Unit_8   free1782 (    struct StrBuilder_62 *  builder2921 ) {
    ( (  free762 ) ( ( & ( ( * (  builder2921 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1783 (    struct Maybe_85  m1570 ) {
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

static  struct Maybe_276   write_dash_to_dash_file1750 (   struct env123* env ,    struct TextBuf_117 *  self4107 ,    struct Maybe_85  altname4109 ) {
    enum CAllocator_10  al4110 = ( ( * (  self4107 ) ) .f_al );
    struct env1752 envinst1752 = {
        .al4110 =  al4110 ,
    };
    struct Maybe_85  nu_dash_filename4113 = ( (  fmap_dash_maybe1751 ) ( (  altname4109 ) ,  ( (struct envunion1753){ .fun = (  struct StrView_27  (*) (  struct env1752*  ,    struct StrView_27  ) )lam1755 , .env =  envinst1752 } ) ) );
    struct Maybe_85  filename4114 = ( (  maybe1756 ) ( (  altname4109 ) ,  ( Maybe_85_Just ) ,  ( ( * (  self4107 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1757 ) ( (  filename4114 ) ) ) ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    struct StrBuilder_62  temp1758 = ( (  mk1501 ) ( (  al4110 ) ) );
    struct StrBuilder_62 *  sb4115 = ( &temp1758 );
    struct RangeIter_169  temp1759 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  num_dash_lines1231 ) ( (  self4107 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1760 =  next172 (&temp1759);
        if (  __cond1760 .tag == 0 ) {
            break;
        }
        int32_t  ln4117 =  __cond1760 .stuff .Maybe_171_Just_s .field0;
        struct envunion124  temp1761 = ( (struct envunion124){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )writeln1762 , .env =  env->envinst69 } );
        ( temp1761.fun ( &temp1761.env ,  (  sb4115 ) ,  ( (  line297 ) ( (  self4107 ) ,  (  ln4117 ) ) ) ) );
    }
    const char*  filename04118 = ( (  as_dash_const_dash_str683 ) ( ( (  or_dash_fail1772 ) ( (  filename4114 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"expect filename (we should've quit earlier.)" ) ,  ( 44 ) ) ) ) ) ) );
    bool  result4119 = ( (  try_dash_write_dash_contents1775 ) ( (  filename04118 ) ,  (  sb4115 ) ) );
    ( (  free1782 ) ( (  sb4115 ) ) );
    if ( ( ! (  result4119 ) ) ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    if ( ( (  is_dash_just1783 ) ( (  altname4109 ) ) ) ) {
        struct Maybe_85  dref4120 = ( ( * (  self4107 ) ) .f_filename );
        if ( dref4120.tag == Maybe_85_Just_t ) {
            ( (  free685 ) ( ( dref4120 .stuff .Maybe_85_Just_s .field0 ) ,  (  al4110 ) ) );
        }
        else {
            if ( dref4120.tag == Maybe_85_None_t ) {
            }
        }
        (*  self4107 ) .f_filename = (  altname4109 );
    }
    return ( ( Maybe_276_Just ) ( ( (  num_dash_bytes396 ) ( ( (  as_dash_str1542 ) ( (  sb4115 ) ) ) ) ) ) );
}

struct env1792 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1793 {
    enum Unit_8  (*fun) (  struct env1792*  ,    struct Char_65  );
    struct env1792 env;
};

static  enum Unit_8   for_dash_each1791 (    struct StrViewIter_293  iterable1099 ,   struct envunion1793  fun1101 ) {
    struct StrViewIter_293  temp1794 = ( (  into_dash_iter294 ) ( (  iterable1099 ) ) );
    struct StrViewIter_293 *  it1102 = ( &temp1794 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next352 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                struct envunion1793  temp1795 = (  fun1101 );
                ( temp1795.fun ( &temp1795.env ,  ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1796 (   struct env1792* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1797 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1534 , .env =  env->envinst60 } );
    return ( temp1797.fun ( &temp1797.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1790 (   struct env66* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrView_27  s2879 ) {
    struct env1792 envinst1792 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1791 ) ( ( (  chars295 ) ( (  s2879 ) ) ) ,  ( (struct envunion1793){ .fun = (  enum Unit_8  (*) (  struct env1792*  ,    struct Char_65  ) )lam1796 , .env =  envinst1792 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1787 (   struct env80* env ,    struct StrView_27  s2935 ,    enum CAllocator_10  al2937 ) {
    struct StrBuilder_62  temp1788 = ( (  mk1501 ) ( (  al2937 ) ) );
    struct StrBuilder_62 *  sb2938 = ( &temp1788 );
    struct envunion81  temp1789 = ( (struct envunion81){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1790 , .env =  env->envinst66 } );
    ( temp1789.fun ( &temp1789.env ,  (  sb2938 ) ,  (  s2935 ) ) );
    struct envunion76  temp1798 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1534 , .env =  env->envinst60 } );
    ( temp1798.fun ( &temp1798.env ,  (  sb2938 ) ,  ( (  nullchar682 ) ( ) ) ) );
    struct StrView_27  dynstr2939 = ( (  as_dash_str1542 ) ( (  sb2938 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2939 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub458 ( ( ( (  dynstr2939 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1785 (   struct env258* env ,    struct Editor_267 *  ed4739 ,    struct StrView_27  s4741 ) {
    ( (  reset_dash_msg1212 ) ( (  ed4739 ) ) );
    struct envunion259  temp1786 = ( (struct envunion259){ .fun = (  struct StrView_27  (*) (  struct env80*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1787 , .env =  env->envinst80 } );
    (*  ed4739 ) .f_msg = ( ( Maybe_85_Just ) ( ( temp1786.fun ( &temp1786.env ,  (  s4741 ) ,  ( ( * (  ed4739 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcatIter_1810 {
    struct StrViewIter_293  f_left;
    struct StrViewIter_293  f_right;
};

struct StrConcatIter_1809 {
    struct StrConcatIter_1810  f_left;
    struct AppendIter_1158  f_right;
};

struct StrCaseIter_1808 {
    enum {
        StrCaseIter_1808_StrCaseIter1_t,
        StrCaseIter_1808_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_293  field0;
        } StrCaseIter_1808_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1809  field0;
        } StrCaseIter_1808_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1808 StrCaseIter_1808_StrCaseIter1 (  struct StrViewIter_293  field0 ) {
    return ( struct StrCaseIter_1808 ) { .tag = StrCaseIter_1808_StrCaseIter1_t, .stuff = { .StrCaseIter_1808_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1808 StrCaseIter_1808_StrCaseIter2 (  struct StrConcatIter_1809  field0 ) {
    return ( struct StrCaseIter_1808 ) { .tag = StrCaseIter_1808_StrCaseIter2_t, .stuff = { .StrCaseIter_1808_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1807 {
    struct StrViewIter_293  f_left;
    struct StrCaseIter_1808  f_right;
};

struct env1811 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1812 {
    enum Unit_8  (*fun) (  struct env1811*  ,    struct Char_65  );
    struct env1811 env;
};

static  struct StrConcatIter_1807   into_dash_iter1814 (    struct StrConcatIter_1807  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next1818 (    struct StrConcatIter_1810 *  self1293 ) {
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

static  struct Maybe_351   next1817 (    struct StrConcatIter_1809 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1818 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next1816 (    struct StrCaseIter_1808 *  self1730 ) {
    struct StrCaseIter_1808 *  dref1731 = (  self1730 );
    if ( (* dref1731 ).tag == StrCaseIter_1808_StrCaseIter1_t ) {
        return ( (  next352 ) ( ( & ( (* dref1731 ) .stuff .StrCaseIter_1808_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1731 ).tag == StrCaseIter_1808_StrCaseIter2_t ) {
            return ( (  next1817 ) ( ( & ( (* dref1731 ) .stuff .StrCaseIter_1808_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_351   next1815 (    struct StrConcatIter_1807 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1816 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1806 (    struct StrConcatIter_1807  iterable1099 ,   struct envunion1812  fun1101 ) {
    struct StrConcatIter_1807  temp1813 = ( (  into_dash_iter1814 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1807 *  it1102 = ( &temp1813 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next1815 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_351_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_351_Just_t ) {
                struct envunion1812  temp1819 = (  fun1101 );
                ( temp1819.fun ( &temp1819.env ,  ( dref1103 .stuff .Maybe_351_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrCase_1823 {
    enum {
        StrCase_1823_StrCase1_t,
        StrCase_1823_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_1823_StrCase1_s;
        struct {
            struct StrConcat_804  field0;
        } StrCase_1823_StrCase2_s;
    } stuff;
};

static struct StrCase_1823 StrCase_1823_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_1823 ) { .tag = StrCase_1823_StrCase1_t, .stuff = { .StrCase_1823_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1823 StrCase_1823_StrCase2 (  struct StrConcat_804  field0 ) {
    return ( struct StrCase_1823 ) { .tag = StrCase_1823_StrCase2_t, .stuff = { .StrCase_1823_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1810   into_dash_iter1830 (    struct StrConcat_805  dref1297 ) {
    return ( (struct StrConcatIter_1810) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1810   chars1829 (    struct StrConcat_805  self1308 ) {
    return ( (  into_dash_iter1830 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1809   into_dash_iter1828 (    struct StrConcat_804  dref1297 ) {
    return ( (struct StrConcatIter_1809) { .f_left = ( (  chars1829 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1809   chars1827 (    struct StrConcat_804  self1308 ) {
    return ( (  into_dash_iter1828 ) ( (  self1308 ) ) );
}

static  struct StrCaseIter_1808   into_dash_iter1826 (    struct StrCase_1823  self1736 ) {
    struct StrCase_1823  dref1737 = (  self1736 );
    if ( dref1737.tag == StrCase_1823_StrCase1_t ) {
        return ( ( StrCaseIter_1808_StrCaseIter1 ) ( ( (  chars295 ) ( ( dref1737 .stuff .StrCase_1823_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1737.tag == StrCase_1823_StrCase2_t ) {
            return ( ( StrCaseIter_1808_StrCaseIter2 ) ( ( (  chars1827 ) ( ( dref1737 .stuff .StrCase_1823_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1808   chars1825 (    struct StrCase_1823  self1748 ) {
    return ( (  into_dash_iter1826 ) ( (  self1748 ) ) );
}

static  struct StrCaseIter_1808   chars1822 (    struct Maybe_85  self1762 ) {
    struct StrCase_1823  temp1824;
    struct StrCase_1823  c1763 = (  temp1824 );
    struct Maybe_85  dref1764 = (  self1762 );
    if ( dref1764.tag == Maybe_85_None_t ) {
        c1763 = ( ( StrCase_1823_StrCase1 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1764.tag == Maybe_85_Just_t ) {
            c1763 = ( ( StrCase_1823_StrCase2 ) ( ( ( StrConcat_804_StrConcat ) ( ( ( StrConcat_805_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Just(" ) ,  ( 5 ) ) ) ,  ( dref1764 .stuff .Maybe_85_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1825 ) ( (  c1763 ) ) );
}

static  struct StrConcatIter_1807   into_dash_iter1821 (    struct StrConcat_84  dref1297 ) {
    return ( (struct StrConcatIter_1807) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1822 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1807   chars1820 (    struct StrConcat_84  self1308 ) {
    return ( (  into_dash_iter1821 ) ( (  self1308 ) ) );
}

static  enum Unit_8   lam1831 (   struct env1811* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1832 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1534 , .env =  env->envinst60 } );
    return ( temp1832.fun ( &temp1832.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1805 (   struct env67* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrConcat_84  s2879 ) {
    struct env1811 envinst1811 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1806 ) ( ( (  chars1820 ) ( (  s2879 ) ) ) ,  ( (struct envunion1812){ .fun = (  enum Unit_8  (*) (  struct env1811*  ,    struct Char_65  ) )lam1831 , .env =  envinst1811 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1802 (   struct env82* env ,    struct StrConcat_84  s2935 ,    enum CAllocator_10  al2937 ) {
    struct StrBuilder_62  temp1803 = ( (  mk1501 ) ( (  al2937 ) ) );
    struct StrBuilder_62 *  sb2938 = ( &temp1803 );
    struct envunion83  temp1804 = ( (struct envunion83){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrConcat_84  ) )write1805 , .env =  env->envinst67 } );
    ( temp1804.fun ( &temp1804.env ,  (  sb2938 ) ,  (  s2935 ) ) );
    struct envunion76  temp1833 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1534 , .env =  env->envinst60 } );
    ( temp1833.fun ( &temp1833.env ,  (  sb2938 ) ,  ( (  nullchar682 ) ( ) ) ) );
    struct StrView_27  dynstr2939 = ( (  as_dash_str1542 ) ( (  sb2938 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2939 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub458 ( ( ( (  dynstr2939 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1800 (   struct env260* env ,    struct Editor_267 *  ed4739 ,    struct StrConcat_84  s4741 ) {
    ( (  reset_dash_msg1212 ) ( (  ed4739 ) ) );
    struct envunion261  temp1801 = ( (struct envunion261){ .fun = (  struct StrView_27  (*) (  struct env82*  ,    struct StrConcat_84  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1802 , .env =  env->envinst82 } );
    (*  ed4739 ) .f_msg = ( ( Maybe_85_Just ) ( ( temp1801.fun ( &temp1801.env ,  (  s4741 ) ,  ( ( * (  ed4739 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undefined1836 (  ) {
    enum Unit_8  temp1837;
    return (  temp1837 );
}

static  enum Unit_8   todo1835 (  ) {
    ( (  println1411 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1836 ) ( ) );
}

struct Tuple2_1841 {
    struct Maybe_351  field0;
    struct Maybe_351  field1;
};

static struct Tuple2_1841 Tuple2_1841_Tuple2 (  struct Maybe_351  field0 ,  struct Maybe_351  field1 ) {
    return ( struct Tuple2_1841 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1838 (    struct StrView_27  s1947 ,    struct StrView_27  beg1949 ) {
    struct StrViewIter_293  temp1839 = ( (  chars295 ) ( (  s1947 ) ) );
    struct StrViewIter_293 *  scs1950 = ( &temp1839 );
    struct StrViewIter_293  temp1840 = ( (  chars295 ) ( (  beg1949 ) ) );
    struct StrViewIter_293 *  begcs1951 = ( &temp1840 );
    while ( ( true ) ) {
        struct Tuple2_1841  dref1952 = ( ( Tuple2_1841_Tuple2 ) ( ( (  next352 ) ( (  scs1950 ) ) ) ,  ( (  next352 ) ( (  begcs1951 ) ) ) ) );
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

struct SliceAddressIter_1844 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_1844   into_dash_iter1845 (    struct SliceAddressIter_1844  self2271 ) {
    return (  self2271 );
}

static  struct SliceAddressIter_1844   addresses1847 (    struct Slice_11  slice2268 ) {
    return ( (struct SliceAddressIter_1844) { .f_slice = (  slice2268 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_11   to_dash_slice1848 (    struct List_9  l2541 ) {
    struct Line_12 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static  struct SliceAddressIter_1844   addresses1846 (    struct List_9  l2545 ) {
    return ( (  addresses1847 ) ( ( (  to_dash_slice1848 ) ( (  l2545 ) ) ) ) );
}

struct Maybe_1850 {
    enum {
        Maybe_1850_None_t,
        Maybe_1850_Just_t,
    } tag;
    union {
        struct {
            struct Line_12 *  field0;
        } Maybe_1850_Just_s;
    } stuff;
};

static struct Maybe_1850 Maybe_1850_Just (  struct Line_12 *  field0 ) {
    return ( struct Maybe_1850 ) { .tag = Maybe_1850_Just_t, .stuff = { .Maybe_1850_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1850   next1851 (    struct SliceAddressIter_1844 *  self2274 ) {
    size_t  off2275 = ( ( * (  self2274 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2275 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2274 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1850) { .tag = Maybe_1850_None_t } );
    }
    struct Line_12 *  elem2276 = ( (  offset_dash_ptr346 ) ( ( ( ( * (  self2274 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2275 ) ) ) ) );
    (*  self2274 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2275 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1850_Just ) ( (  elem2276 ) ) );
}

static  enum Unit_8   set_dash_filetype1842 (    struct TextBuf_117 *  self4243 ,    enum Filetype_120  type4245 ) {
    (*  self4243 ) .f_filetype = (  type4245 );
    struct SliceAddressIter_1844  temp1843 =  into_dash_iter1845 ( ( (  addresses1846 ) ( ( ( * (  self4243 ) ) .f_buf ) ) ) );
    while (true) {
        struct Maybe_1850  __cond1849 =  next1851 (&temp1843);
        if (  __cond1849 .tag == 0 ) {
            break;
        }
        struct Line_12 *  line4247 =  __cond1849 .stuff .Maybe_1850_Just_s .field0;
        (*  line4247 ) .f_invalidated = ( true );
    }
    return ( Unit_8_Unit );
}

struct envunion1853 {
    enum Unit_8  (*fun) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env258 env;
};

struct env1856 {
    bool (*  fun1151 )(    struct Char_65  );
};

struct envunion1857 {
    bool  (*fun) (  struct env1856*  ,    struct Char_65  ,    bool  );
    struct env1856 env;
};

static  bool   reduce1855 (    struct StrView_27  iterable1118 ,    bool  base1120 ,   struct envunion1857  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct StrViewIter_293  it1124 = ( (  into_dash_iter296 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next352 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                struct envunion1857  temp1858 = (  fun1122 );
                x1123 = ( temp1858.fun ( &temp1858.env ,  ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1859 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1859);
    abort ( );
    ( Unit_8_Unit );
    bool  temp1860;
    return (  temp1860 );
}

static  bool   lam1861 (   struct env1856* env ,    struct Char_65  e1153 ,    bool  x1155 ) {
    return ( ( ( env->fun1151 ) ( (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all1854 (    struct StrView_27  it1149 ,    bool (*  fun1151 )(    struct Char_65  ) ) {
    struct env1856 envinst1856 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce1855 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion1857){ .fun = (  bool  (*) (  struct env1856*  ,    struct Char_65  ,    bool  ) )lam1861 , .env =  envinst1856 } ) ) );
}

struct envunion1863 {
    enum Unit_8  (*fun) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env258 env;
};

static  enum Unit_8   run_dash_cmd1708 (   struct env265* env ,    struct Editor_267 *  ed4758 ,    struct StrView_27  s4760 ) {
    struct Scanner_1709  temp1710 = ( (  mk_dash_from_dash_strview1711 ) ( (  s4760 ) ) );
    struct Scanner_1709 *  sc4761 = ( &temp1710 );
    ( (  drop_dash_str_dash_while1712 ) ( (  sc4761 ) ,  (  is_dash_whitespace414 ) ) );
    struct StrView_27  cmd4762 = ( (  take_dash_str_dash_while1729 ) ( (  sc4761 ) ,  (  is_dash_not_dash_whitespace1745 ) ) );
    ( (  drop_dash_str_dash_while1712 ) ( (  sc4761 ) ,  (  is_dash_whitespace414 ) ) );
    if ( (  eq619 ( (  cmd4762 ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4758 ) .f_running = ( false );
    } else {
        if ( (  eq619 ( (  cmd4762 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq619 ( (  cmd4762 ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4763 = ( (  take_dash_str_dash_while1729 ) ( (  sc4761 ) ,  (  is_dash_not_dash_whitespace1745 ) ) );
                struct Maybe_85  filename4764 = ( ( (  null1746 ) ( (  filename4763 ) ) ) ? ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) : ( ( Maybe_85_Just ) ( (  filename4763 ) ) ) );
                struct envunion275  temp1749 = ( (struct envunion275){ .fun = (  struct Maybe_276  (*) (  struct env123*  ,    struct TextBuf_117 *  ,    struct Maybe_85  ) )write_dash_to_dash_file1750 , .env =  env->envinst123 } );
                struct Maybe_276  write_dash_result4765 = ( temp1749.fun ( &temp1749.env ,  ( ( * ( (  pane1228 ) ( (  ed4758 ) ) ) ) .f_buf ) ,  (  filename4764 ) ) );
                struct Maybe_276  dref4766 = (  write_dash_result4765 );
                if ( dref4766.tag == Maybe_276_None_t ) {
                    if ( ( (  is_dash_none1757 ) ( (  filename4764 ) ) ) ) {
                        struct envunion266  temp1784 = ( (struct envunion266){ .fun = (  enum Unit_8  (*) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  ) )set_dash_msg1785 , .env =  env->envinst258 } );
                        ( temp1784.fun ( &temp1784.env ,  (  ed4758 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"could not save changes (filename not set!!)" ) ,  ( 43 ) ) ) ) );
                    } else {
                        struct envunion273  temp1799 = ( (struct envunion273){ .fun = (  enum Unit_8  (*) (  struct env260*  ,    struct Editor_267 *  ,    struct StrConcat_84  ) )set_dash_msg1800 , .env =  env->envinst260 } );
                        ( temp1799.fun ( &temp1799.env ,  (  ed4758 ) ,  ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4764 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4766.tag == Maybe_276_Just_t ) {
                        struct envunion274  temp1834 = ( (struct envunion274){ .fun = (  enum Unit_8  (*) (  struct env256*  ,    struct Editor_267 *  ,    struct StrConcat_78  ) )set_dash_msg1497 , .env =  env->envinst256 } );
                        ( temp1834.fun ( &temp1834.env ,  (  ed4758 ) ,  ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"written " ) ,  ( 8 ) ) ) ,  ( dref4766 .stuff .Maybe_276_Just_s .field0 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq619 ( (  cmd4762 ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1835 ) ( ) );
                } else {
                    if ( (  eq619 ( (  cmd4762 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_27  what4768 = ( (  take_dash_str_dash_while1729 ) ( (  sc4761 ) ,  (  is_dash_not_dash_whitespace1745 ) ) );
                        if ( (  eq619 ( (  what4768 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed4758 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq619 ( (  what4768 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed4758 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp302 ( ( (  count368 ) ( ( (  chars295 ) ( (  what4768 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1838 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"absolute" ) ,  ( 8 ) ) ) ,  (  what4768 ) ) ) ) ) {
                                    (* (*  ed4758 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp302 ( ( (  count368 ) ( ( (  chars295 ) ( (  what4768 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1838 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"relative" ) ,  ( 8 ) ) ) ,  (  what4768 ) ) ) ) ) {
                                        (* (*  ed4758 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq619 ( (  cmd4762 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"ft" ) ,  ( 2 ) ) ) ) ) ) {
                            struct StrView_27  type4769 = ( (  take_dash_str_dash_while1729 ) ( (  sc4761 ) ,  (  is_dash_not_dash_whitespace1745 ) ) );
                            struct TextBuf_117 *  tb4770 = ( ( * ( (  pane1228 ) ( (  ed4758 ) ) ) ) .f_buf );
                            if ( (  eq619 ( (  type4769 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"text" ) ,  ( 4 ) ) ) ) ) ) {
                                ( (  set_dash_filetype1842 ) ( (  tb4770 ) ,  ( Filetype_120_Text ) ) );
                            } else {
                                if ( (  eq619 ( (  type4769 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) ) ) ) {
                                    ( (  set_dash_filetype1842 ) ( (  tb4770 ) ,  ( Filetype_120_KC ) ) );
                                } else {
                                    if ( (  eq619 ( (  type4769 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                                        ( (  set_dash_filetype1842 ) ( (  tb4770 ) ,  ( Filetype_120_Markdown ) ) );
                                    } else {
                                        struct envunion1853  temp1852 = ( (struct envunion1853){ .fun = (  enum Unit_8  (*) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  ) )set_dash_msg1785 , .env =  env->envinst258 } );
                                        ( temp1852.fun ( &temp1852.env ,  (  ed4758 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"unknown file type" ) ,  ( 17 ) ) ) ) );
                                    }
                                }
                            }
                        } else {
                            if ( (  eq619 ( (  cmd4762 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"testerror" ) ,  ( 9 ) ) ) ) ) ) {
                                ( (  panic850 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"test error" ) ,  ( 10 ) ) ) ) );
                            } else {
                                if ( (  eq619 ( (  cmd4762 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                                } else {
                                    if ( ( (  all1854 ) ( (  cmd4762 ) ,  (  is_dash_digit1107 ) ) ) ) {
                                    } else {
                                        struct envunion1863  temp1862 = ( (struct envunion1863){ .fun = (  enum Unit_8  (*) (  struct env258*  ,    struct Editor_267 *  ,    struct StrView_27  ) )set_dash_msg1785 , .env =  env->envinst258 } );
                                        ( temp1862.fun ( &temp1862.env ,  (  ed4758 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"unknown command" ) ,  ( 15 ) ) ) ) );
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

static  struct Char_65   from_dash_u81866 (    uint8_t  b1485 ) {
    return ( (  char_dash_from_dash_u81177 ) ( (  b1485 ) ) );
}

static  struct Char_65   ascii_dash_char1865 (    char  c1494 ) {
    return ( (  from_dash_u81866 ) ( ( (  ascii_dash_u8595 ) ( (  c1494 ) ) ) ) );
}

static  struct Maybe_1101   reduce1870 (    struct StrViewIter_293  iterable1118 ,    struct Maybe_1101  base1120 ,    struct Maybe_1101 (*  fun1122 )(    struct Char_65  ,    struct Maybe_1101  ) ) {
    struct Maybe_1101  x1123 = (  base1120 );
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
    const char*  temp1871 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1871);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_1101  temp1872;
    return (  temp1872 );
}

static  struct Maybe_1101   sequence_dash_maybe1873 (    struct Char_65  e1935 ,    struct Maybe_1101  b1937 ) {
    struct Maybe_1101  dref1938 = (  b1937 );
    if ( dref1938.tag == Maybe_1101_None_t ) {
        return ( (struct Maybe_1101) { .tag = Maybe_1101_None_t } );
    }
    else {
        if ( dref1938.tag == Maybe_1101_Just_t ) {
            struct Maybe_171  dref1940 = ( (  parse_dash_digit1135 ) ( (  e1935 ) ) );
            if ( dref1940.tag == Maybe_171_None_t ) {
                return ( (struct Maybe_1101) { .tag = Maybe_1101_None_t } );
            }
            else {
                if ( dref1940.tag == Maybe_171_Just_t ) {
                    return ( ( Maybe_1101_Just ) ( (  op_dash_add366 ( (  op_dash_mul347 ( ( dref1938 .stuff .Maybe_1101_Just_s .field0 ) , (  from_dash_integral365 ( 10 ) ) ) ) , ( (  i32_dash_i641144 ) ( ( dref1940 .stuff .Maybe_171_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_1101   parse_dash_int1869 (    struct StrView_27  s1932 ) {
    struct StrViewIter_293  cs1942 = ( (  chars295 ) ( (  s1932 ) ) );
    struct Maybe_351  dref1943 = ( (  head1408 ) ( (  cs1942 ) ) );
    if ( dref1943.tag == Maybe_351_Just_t ) {
        return ( (  reduce1870 ) ( (  cs1942 ) ,  ( ( Maybe_1101_Just ) ( (  from_dash_integral365 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1873 ) ) );
    }
    else {
        if ( dref1943.tag == Maybe_351_None_t ) {
            return ( (struct Maybe_1101) { .tag = Maybe_1101_None_t } );
        }
    }
}

struct TakeWhile_1879 {
    struct StrViewIter_293  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1878 {
    struct TakeWhile_1879  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1878 Map_1878_Map (  struct TakeWhile_1879  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1878 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1878   into_dash_iter1881 (    struct Map_1878  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next1883 (    struct TakeWhile_1879 *  self989 ) {
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

static  struct Maybe_276   next1882 (    struct Map_1878 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next1883 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_276_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1880 (    struct Map_1878  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1878  it1124 = ( (  into_dash_iter1881 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_276  dref1125 = ( (  next1882 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_276_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_276_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_276_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1884 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1884);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1885;
    return (  temp1885 );
}

static  size_t   lam1886 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add356 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1877 (    struct Map_1878  it1135 ) {
    return ( (  reduce1880 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1886 ) ) );
}

static  struct TakeWhile_1879   into_dash_iter1888 (    struct TakeWhile_1879  self986 ) {
    return (  self986 );
}

static  struct Map_1878   map1887 (    struct TakeWhile_1879  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1879  it816 = ( (  into_dash_iter1888 ) ( (  iterable813 ) ) );
    return ( ( Map_1878_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1879   take_dash_while1889 (    struct StrViewIter_293  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1879) { .f_it = ( (  into_dash_iter294 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1890 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1876 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1877 ) ( ( (  map1887 ) ( ( (  take_dash_while1889 ) ( ( (  chars295 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1890 ) ) ) ) );
    return ( (  byte_dash_substr596 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1875 (    struct Scanner_1709 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1876 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from584 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes396 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

struct TakeWhile_1895 {
    struct StrViewIter_293  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1894 {
    struct TakeWhile_1895  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1894 Map_1894_Map (  struct TakeWhile_1895  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1894 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1894   into_dash_iter1897 (    struct Map_1894  self804 ) {
    return (  self804 );
}

static  struct Maybe_351   next1899 (    struct TakeWhile_1895 *  self989 ) {
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

static  struct Maybe_276   next1898 (    struct Map_1894 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next1899 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_276) { .tag = Maybe_276_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_276_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1896 (    struct Map_1894  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1894  it1124 = ( (  into_dash_iter1897 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_276  dref1125 = ( (  next1898 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_276_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_276_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_276_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1900 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1900);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1901;
    return (  temp1901 );
}

static  size_t   lam1902 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add356 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1893 (    struct Map_1894  it1135 ) {
    return ( (  reduce1896 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1902 ) ) );
}

static  struct TakeWhile_1895   into_dash_iter1904 (    struct TakeWhile_1895  self986 ) {
    return (  self986 );
}

static  struct Map_1894   map1903 (    struct TakeWhile_1895  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1895  it816 = ( (  into_dash_iter1904 ) ( (  iterable813 ) ) );
    return ( ( Map_1894_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1895   take_dash_while1905 (    struct StrViewIter_293  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1895) { .f_it = ( (  into_dash_iter294 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1906 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1892 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1893 ) ( ( (  map1903 ) ( ( (  take_dash_while1905 ) ( ( (  chars295 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1906 ) ) ) ) );
    return ( (  byte_dash_substr596 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1891 (    struct Scanner_1709 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1892 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from584 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes396 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

static  bool   lam1907 (    struct Char_65  c4754 ) {
    return ( ! ( (  is_dash_whitespace414 ) ( (  c4754 ) ) ) );
}

static  struct Theme_188 *   or_dash_else1908 (    struct Maybe_264  self1360 ,    struct Theme_188 *  alt1362 ) {
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

struct SliceIter_1914 {
    struct Slice_212  f_slice;
    size_t  f_current_dash_offset;
};

struct env1915 {
    ;
    struct StrView_27  name4311;
};

struct envunion1916 {
    bool  (*fun) (  struct env1915*  ,    struct Tuple2_213  );
    struct env1915 env;
};

struct Filter_1913 {
    struct SliceIter_1914  f_og;
    struct envunion1916  f_fun;
};

struct Map_1912 {
    struct Filter_1913  field0;
    struct Theme_188 * (*  field1 )(    struct Tuple2_213  );
};

static struct Map_1912 Map_1912_Map (  struct Filter_1913  field0 ,  struct Theme_188 * (*  field1 )(    struct Tuple2_213  ) ) {
    return ( struct Map_1912 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1918 {
    enum {
        Maybe_1918_None_t,
        Maybe_1918_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_213  field0;
        } Maybe_1918_Just_s;
    } stuff;
};

static struct Maybe_1918 Maybe_1918_Just (  struct Tuple2_213  field0 ) {
    return ( struct Maybe_1918 ) { .tag = Maybe_1918_Just_t, .stuff = { .Maybe_1918_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_213 *   offset_dash_ptr1921 (    struct Tuple2_213 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_213  temp1922;
    return ( (struct Tuple2_213 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1922 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1918   next1920 (    struct SliceIter_1914 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1918) { .tag = Maybe_1918_None_t } );
    }
    struct Tuple2_213  elem2258 = ( * ( (  offset_dash_ptr1921 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1918_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_1918   next1919 (    struct Filter_1913 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_1918  dref842 = ( (  next1920 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_1918_None_t ) {
            return ( (struct Maybe_1918) { .tag = Maybe_1918_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_1918_Just_t ) {
                struct envunion1916  temp1923 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp1923.fun ( &temp1923.env ,  ( dref842 .stuff .Maybe_1918_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1918_Just ) ( ( dref842 .stuff .Maybe_1918_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1918  temp1924;
    return (  temp1924 );
}

static  struct Maybe_264   next1917 (    struct Map_1912 *  dref806 ) {
    struct Maybe_1918  dref809 = ( (  next1919 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_1918_None_t ) {
        return ( (struct Maybe_264) { .tag = Maybe_264_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_1918_Just_t ) {
            return ( ( Maybe_264_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_1918_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1912   into_dash_iter1926 (    struct Map_1912  self804 ) {
    return (  self804 );
}

static  struct Maybe_264   head1911 (    struct Map_1912  it1167 ) {
    struct Map_1912  temp1925 = ( (  into_dash_iter1926 ) ( (  it1167 ) ) );
    return ( (  next1917 ) ( ( &temp1925 ) ) );
}

static  struct Filter_1913   into_dash_iter1928 (    struct Filter_1913  self838 ) {
    return (  self838 );
}

static  struct Map_1912   map1927 (    struct Filter_1913  iterable813 ,    struct Theme_188 * (*  fun815 )(    struct Tuple2_213  ) ) {
    struct Filter_1913  it816 = ( (  into_dash_iter1928 ) ( (  iterable813 ) ) );
    return ( ( Map_1912_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct SliceIter_1914   into_dash_iter1930 (    struct Slice_212  self2250 ) {
    return ( (struct SliceIter_1914) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1913   filter1929 (    struct Slice_212  iterable846 ,   struct envunion1916  fun848 ) {
    struct SliceIter_1914  it849 = ( (  into_dash_iter1930 ) ( (  iterable846 ) ) );
    return ( (struct Filter_1913) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   lam1931 (   struct env1915* env ,    struct Tuple2_213  dref4312 ) {
    return ( (  begins_dash_with1838 ) ( ( dref4312 .field0 ) ,  ( env->name4311 ) ) );
}

static  struct Theme_188 *   snd1932 (    struct Tuple2_213  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Maybe_264   match_dash_theme1910 (   struct env221* env ,    struct StrView_27  name4311 ) {
    if ( ( (  null1746 ) ( (  name4311 ) ) ) ) {
        return ( (struct Maybe_264) { .tag = Maybe_264_None_t } );
    }
    struct env1915 envinst1915 = {
        .name4311 =  name4311 ,
    };
    return ( (  head1911 ) ( ( (  map1927 ) ( ( (  filter1929 ) ( ( env->all_dash_themes4308 ) ,  ( (struct envunion1916){ .fun = (  bool  (*) (  struct env1915*  ,    struct Tuple2_213  ) )lam1931 , .env =  envinst1915 } ) ) ) ,  (  snd1932 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1868 (   struct env262* env ,    struct Editor_267 *  ed4744 ,    struct StrView_27  cmd4746 ) {
    struct Maybe_1101  dref4747 = ( (  parse_dash_int1869 ) ( (  cmd4746 ) ) );
    if ( dref4747.tag == Maybe_1101_Just_t ) {
        int32_t  line4749 = ( (  clamp1554 ) ( ( (  i64_dash_i321146 ) ( ( dref4747 .stuff .Maybe_1101_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (  num_dash_lines1231 ) ( ( ( * ( (  pane1228 ) ( (  ed4744 ) ) ) ) .f_buf ) ) ) ) );
        int32_t  line4750 = (  op_dash_sub180 ( (  line4749 ) , (  from_dash_integral56 ( 1 ) ) ) );
        ( (  set_dash_cursors287 ) ( ( (  pane1228 ) ( (  ed4744 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4750 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
    }
    else {
        if ( dref4747.tag == Maybe_1101_None_t ) {
            struct Scanner_1709  temp1874 = ( (  mk_dash_from_dash_strview1711 ) ( (  cmd4746 ) ) );
            struct Scanner_1709 *  sc4751 = ( &temp1874 );
            struct StrView_27  cmd4752 = ( (  take_dash_str_dash_while1875 ) ( (  sc4751 ) ,  (  is_dash_alpha1405 ) ) );
            if ( (  eq619 ( (  cmd4752 ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1712 ) ( (  sc4751 ) ,  (  is_dash_whitespace414 ) ) );
                struct StrView_27  theme_dash_name4755 = ( (  take_dash_str_dash_while1891 ) ( (  sc4751 ) ,  (  lam1907 ) ) );
                struct envunion263  temp1909 = ( (struct envunion263){ .fun = (  struct Maybe_264  (*) (  struct env221*  ,    struct StrView_27  ) )match_dash_theme1910 , .env =  env->envinst221 } );
                (* (*  ed4744 ) .f_cfg ) .f_theme = ( (  or_dash_else1908 ) ( ( temp1909.fun ( &temp1909.env ,  (  theme_dash_name4755 ) ) ) ,  ( ( * (  ed4744 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_293   into_dash_iter1936 (    struct StrBuilder_62  self2932 ) {
    return ( (  chars1777 ) ( (  self2932 ) ) );
}

static  struct Maybe_351   head1934 (    struct StrBuilder_62  it1167 ) {
    struct StrViewIter_293  temp1935 = ( (  into_dash_iter1936 ) ( (  it1167 ) ) );
    return ( (  next352 ) ( ( &temp1935 ) ) );
}

static  bool   null1933 (    struct StrBuilder_62  it1176 ) {
    struct Maybe_351  dref1177 = ( (  head1934 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_351_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  uint8_t *   get_dash_ptr1943 (    struct List_13 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp302 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr670 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  uint8_t   get1942 (    struct List_13 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr1943 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct Maybe_74   last1941 (    struct List_13 *  list2503 ) {
    if ( (  eq283 ( ( ( * (  list2503 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    } else {
        return ( ( Maybe_74_Just ) ( ( (  get1942 ) ( (  list2503 ) ,  (  op_dash_sub458 ( ( (  size763 ) ( (  list2503 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) );
    }
}

static  enum Unit_8   remove1945 (   struct env42* env ,    struct List_13 *  list2487 ,    size_t  i2489 ) {
    struct envunion43  temp1946 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range765 , .env =  env->envinst40 } );
    ( temp1946.fun ( &temp1946.env ,  (  list2487 ) ,  (  i2489 ) ,  (  op_dash_add356 ( (  i2489 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_74   pop1940 (   struct env44* env ,    struct List_13 *  list2506 ) {
    if ( (  eq283 ( ( ( * (  list2506 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic850 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct Maybe_74  last_dash_elem2507 = ( (  last1941 ) ( (  list2506 ) ) );
    struct envunion45  temp1944 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_13 *  ,    size_t  ) )remove1945 , .env =  env->envinst42 } );
    ( temp1944.fun ( &temp1944.env ,  (  list2506 ) ,  (  op_dash_sub458 ( ( ( * (  list2506 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return (  last_dash_elem2507 );
}

static  struct Maybe_74   pop1938 (   struct env72* env ,    struct StrBuilder_62 *  sb2895 ) {
    struct envunion73  temp1939 = ( (struct envunion73){ .fun = (  struct Maybe_74  (*) (  struct env44*  ,    struct List_13 *  ) )pop1940 , .env =  env->envinst44 } );
    return ( temp1939.fun ( &temp1939.env ,  ( & ( ( * (  sb2895 ) ) .f_chars ) ) ) );
}

struct envunion1948 {
    enum Unit_8  (*fun) (  struct env262*  ,    struct Editor_267 *  ,    struct StrView_27  );
    struct env262 env;
};

struct env1950 {
    struct Editor_267 *  ed4843;
    ;
};

struct envunion1951 {
    enum Unit_8  (*fun) (  struct env1950*  ,    struct StrView_27  );
    struct env1950 env;
};

static  enum Unit_8   if_dash_just1949 (    struct Maybe_85  x1601 ,   struct envunion1951  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion1951  temp1952 = (  fun1603 );
        ( temp1952.fun ( &temp1952.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1953 (   struct env1950* env ,    struct StrView_27  st4860 ) {
    ( (  free685 ) ( (  st4860 ) ,  ( ( * ( env->ed4843 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1955 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  enum Unit_8   live_dash_search1956 (    struct Editor_267 *  ed4773 ,    struct Pos_26  begin_dash_pos4775 ,    struct StrView_27  query4777 ) {
    if ( ( ! ( (  null1746 ) ( (  query4777 ) ) ) ) ) {
        struct Maybe_1581  dref4778 = ( (  search_dash_from1582 ) ( ( (  pane1228 ) ( (  ed4773 ) ) ) ,  (  begin_dash_pos4775 ) ,  (  query4777 ) ) );
        if ( dref4778.tag == Maybe_1581_Just_t ) {
            ( (  set_dash_cursors287 ) ( ( (  pane1228 ) ( (  ed4773 ) ) ) ,  ( dref4778 .stuff .Maybe_1581_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4778 .stuff .Maybe_1581_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_288_NoChanges ) ) );
        }
        else {
            if ( dref4778.tag == Maybe_1581_None_t ) {
                ( (  set_dash_cursors287 ) ( ( (  pane1228 ) ( (  ed4773 ) ) ) ,  (  begin_dash_pos4775 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors287 ) ( ( (  pane1228 ) ( (  ed4773 ) ) ) ,  (  begin_dash_pos4775 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1958 {
    struct Maybe_74  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct SliceIter_1960 {
    struct Slice_270  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1960   into_dash_iter1961 (    struct Slice_270  self2250 ) {
    return ( (struct SliceIter_1960) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_1963 {
    enum {
        Maybe_1963_None_t,
        Maybe_1963_Just_t,
    } tag;
    union {
        struct {
            struct MenuItem_271  field0;
        } Maybe_1963_Just_s;
    } stuff;
};

static struct Maybe_1963 Maybe_1963_Just (  struct MenuItem_271  field0 ) {
    return ( struct Maybe_1963 ) { .tag = Maybe_1963_Just_t, .stuff = { .Maybe_1963_Just_s = { .field0 = field0 } } };
};

static  struct MenuItem_271 *   offset_dash_ptr1965 (    struct MenuItem_271 *  x377 ,    int64_t  count379 ) {
    struct MenuItem_271  temp1966;
    return ( (struct MenuItem_271 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1966 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1963   next1964 (    struct SliceIter_1960 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1963) { .tag = Maybe_1963_None_t } );
    }
    struct MenuItem_271  elem2258 = ( * ( (  offset_dash_ptr1965 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1963_Just ) ( (  elem2258 ) ) );
}

static  enum Unit_8   handle_dash_key1220 (   struct env435* env ,    struct Editor_267 *  ed4843 ,    struct Key_441  key4845 ) {
    struct EditorMode_268 *  dref4846 = ( & ( ( * (  ed4843 ) ) .f_mode ) );
    if ( (* dref4846 ).tag == EditorMode_268_Normal_t ) {
        enum Mode_242  dref4847 = ( ( ( * (  ed4843 ) ) .f_pane ) .f_mode );
        switch (  dref4847 ) {
            case Mode_242_Normal : {
                struct envunion440  temp1221 = ( (struct envunion440){ .fun = (  enum Unit_8  (*) (  struct env424*  ,    struct Editor_267 *  ,    struct Key_441  ) )handle_dash_normal_dash_key1222 , .env =  env->envinst424 } );
                ( temp1221.fun ( &temp1221.env ,  (  ed4843 ) ,  (  key4845 ) ) );
                break;
            }
            case Mode_242_Select : {
                struct envunion1693  temp1692 = ( (struct envunion1693){ .fun = (  enum Unit_8  (*) (  struct env424*  ,    struct Editor_267 *  ,    struct Key_441  ) )handle_dash_normal_dash_key1222 , .env =  env->envinst424 } );
                ( temp1692.fun ( &temp1692.env ,  (  ed4843 ) ,  (  key4845 ) ) );
                break;
            }
            case Mode_242_Insert : {
                struct Key_441  dref4848 = (  key4845 );
                if ( dref4848.tag == Key_441_Escape_t ) {
                    ( (  set_dash_mode1237 ) ( ( (  pane1228 ) ( (  ed4843 ) ) ) ,  ( Mode_242_Normal ) ) );
                }
                else {
                    if ( dref4848.tag == Key_441_Enter_t ) {
                        int32_t  indent4849 = ( (  indent_dash_at_dash_line399 ) ( ( (  pane1228 ) ( (  ed4843 ) ) ) ,  ( ( ( * ( (  pane1228 ) ( (  ed4843 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion443  temp1694 = ( (struct envunion443){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1240 , .env =  env->envinst225 } );
                        ( temp1694.fun ( &temp1694.env ,  ( (  pane1228 ) ( (  ed4843 ) ) ) ,  ( (  from_dash_charlike642 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1229 ) ( ( (  pane1228 ) ( (  ed4843 ) ) ) ) );
                        struct envunion442  temp1695 = ( (struct envunion442){ .fun = (  enum Unit_8  (*) (  struct env247*  ,    struct Pane_241 *  ,    int32_t  ) )indent_dash_at_dash_current1375 , .env =  env->envinst247 } );
                        ( temp1695.fun ( &temp1695.env ,  ( (  pane1228 ) ( (  ed4843 ) ) ) ,  (  indent4849 ) ) );
                    }
                    else {
                        if ( dref4848.tag == Key_441_Backspace_t ) {
                            struct envunion436  temp1696 = ( (struct envunion436){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_241 *  ) )backspace1697 , .env =  env->envinst228 } );
                            ( temp1696.fun ( &temp1696.env ,  ( (  pane1228 ) ( (  ed4843 ) ) ) ) );
                        }
                        else {
                            if ( dref4848.tag == Key_441_Char_t ) {
                                struct Array_1700  temp1704 = ( (struct Array_1700) { ._arr = { ( dref4848 .stuff .Key_441_Char_s .field0 ) } } );
                                struct Array_1700  temp1702 = ( (  from_dash_listlike1703 ) ( ( &temp1704 ) ) );
                                struct StrView_27  s4851 = ( (  from_dash_ascii_dash_slice1098 ) ( ( (  as_dash_slice1699 ) ( ( &temp1702 ) ) ) ) );
                                struct envunion1706  temp1705 = ( (struct envunion1706){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_241 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1240 , .env =  env->envinst225 } );
                                ( temp1705.fun ( &temp1705.env ,  ( (  pane1228 ) ( (  ed4843 ) ) ) ,  (  s4851 ) ) );
                                ( (  move_dash_right1229 ) ( ( (  pane1228 ) ( (  ed4843 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4846 ).tag == EditorMode_268_Cmd_t ) {
            struct Key_441  dref4854 = (  key4845 );
            if ( dref4854.tag == Key_441_Escape_t ) {
                ( (  set_dash_cursors287 ) ( ( (  pane1228 ) ( (  ed4843 ) ) ) ,  ( (* dref4846 ) .stuff .EditorMode_268_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
                (*  ed4843 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                (* (*  ed4843 ) .f_cfg ) .f_theme = ( ( * (  ed4843 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4854.tag == Key_441_Enter_t ) {
                    struct envunion444  temp1707 = ( (struct envunion444){ .fun = (  enum Unit_8  (*) (  struct env265*  ,    struct Editor_267 *  ,    struct StrView_27  ) )run_dash_cmd1708 , .env =  env->envinst265 } );
                    ( temp1707.fun ( &temp1707.env ,  (  ed4843 ) ,  ( (  as_dash_str1542 ) ( ( & ( (* dref4846 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1782 ) ( ( & ( (* dref4846 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors287 ) ( ( (  pane1228 ) ( (  ed4843 ) ) ) ,  ( ( * ( (  pane1228 ) ( (  ed4843 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
                    (*  ed4843 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                    (*  ed4843 ) .f_og_dash_theme = ( ( * ( ( * (  ed4843 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref4854.tag == Key_441_Char_t ) {
                        struct envunion438  temp1864 = ( (struct envunion438){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1534 , .env =  env->envinst60 } );
                        ( temp1864.fun ( &temp1864.env ,  ( & ( (* dref4846 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1865 ) ( ( dref4854 .stuff .Key_441_Char_s .field0 ) ) ) ) );
                        struct envunion437  temp1867 = ( (struct envunion437){ .fun = (  enum Unit_8  (*) (  struct env262*  ,    struct Editor_267 *  ,    struct StrView_27  ) )live_dash_cmd1868 , .env =  env->envinst262 } );
                        ( temp1867.fun ( &temp1867.env ,  (  ed4843 ) ,  ( (  as_dash_str1542 ) ( ( & ( (* dref4846 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4854.tag == Key_441_Backspace_t ) {
                            if ( ( ! ( (  null1933 ) ( ( (* dref4846 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion439  temp1937 = ( (struct envunion439){ .fun = (  struct Maybe_74  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1938 , .env =  env->envinst72 } );
                                ( temp1937.fun ( &temp1937.env ,  ( & ( (* dref4846 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1948  temp1947 = ( (struct envunion1948){ .fun = (  enum Unit_8  (*) (  struct env262*  ,    struct Editor_267 *  ,    struct StrView_27  ) )live_dash_cmd1868 , .env =  env->envinst262 } );
                            ( temp1947.fun ( &temp1947.env ,  (  ed4843 ) ,  ( (  as_dash_str1542 ) ( ( & ( (* dref4846 ) .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4846 ).tag == EditorMode_268_Search_t ) {
                struct Key_441  dref4858 = (  key4845 );
                if ( dref4858.tag == Key_441_Escape_t ) {
                    ( (  set_dash_cursors287 ) ( ( (  pane1228 ) ( (  ed4843 ) ) ) ,  ( (* dref4846 ) .stuff .EditorMode_268_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_288_UpdateVI ) ) );
                    (*  ed4843 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                }
                else {
                    if ( dref4858.tag == Key_441_Enter_t ) {
                        ( (  set_dash_cursors287 ) ( ( (  pane1228 ) ( (  ed4843 ) ) ) ,  ( ( * ( (  pane1228 ) ( (  ed4843 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1228 ) ( (  ed4843 ) ) ) ) .f_sel ) ,  ( CursorMovement_288_UpdateVI ) ) );
                        struct env1950 envinst1950 = {
                            .ed4843 =  ed4843 ,
                        };
                        ( (  if_dash_just1949 ) ( ( ( * (  ed4843 ) ) .f_search_dash_term ) ,  ( (struct envunion1951){ .fun = (  enum Unit_8  (*) (  struct env1950*  ,    struct StrView_27  ) )lam1953 , .env =  envinst1950 } ) ) );
                        if ( ( ! ( (  null1933 ) ( ( (* dref4846 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4861 = ( ( * ( (  pane1228 ) ( (  ed4843 ) ) ) ) .f_cursor );
                            struct Pos_26  from4862 = ( (  or_dash_else1473 ) ( ( ( * ( (  pane1228 ) ( (  ed4843 ) ) ) ) .f_sel ) ,  (  to4861 ) ) );
                            (*  ed4843 ) .f_search_dash_term = ( ( Maybe_85_Just ) ( ( (  as_dash_str1542 ) ( ( & ( (* dref4846 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4843 ) .f_search_dash_term = ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
                        }
                        (*  ed4843 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                    }
                    else {
                        if ( dref4858.tag == Key_441_Char_t ) {
                            struct envunion1955  temp1954 = ( (struct envunion1955){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1534 , .env =  env->envinst60 } );
                            ( temp1954.fun ( &temp1954.env ,  ( & ( (* dref4846 ) .stuff .EditorMode_268_Search_s .field1 ) ) ,  ( (  ascii_dash_char1865 ) ( ( dref4858 .stuff .Key_441_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1956 ) ( (  ed4843 ) ,  ( (* dref4846 ) .stuff .EditorMode_268_Search_s .field0 ) ,  ( (  as_dash_str1542 ) ( ( & ( (* dref4846 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4858.tag == Key_441_Backspace_t ) {
                                if ( ( ! ( (  null1933 ) ( ( (* dref4846 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1958  temp1957 = ( (struct envunion1958){ .fun = (  struct Maybe_74  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1938 , .env =  env->envinst72 } );
                                    ( temp1957.fun ( &temp1957.env ,  ( & ( (* dref4846 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1956 ) ( (  ed4843 ) ,  ( (* dref4846 ) .stuff .EditorMode_268_Search_s .field0 ) ,  ( (  as_dash_str1542 ) ( ( & ( (* dref4846 ) .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) );
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
                if ( (* dref4846 ).tag == EditorMode_268_Menu_t ) {
                    struct Key_441  dref4865 = (  key4845 );
                    if ( dref4865.tag == Key_441_Char_t ) {
                        struct SliceIter_1960  temp1959 =  into_dash_iter1961 ( ( ( (* dref4846 ) .stuff .EditorMode_268_Menu_s .field0 ) .f_items ) );
                        while (true) {
                            struct Maybe_1963  __cond1962 =  next1964 (&temp1959);
                            if (  __cond1962 .tag == 0 ) {
                                break;
                            }
                            struct MenuItem_271  menu_dash_item4868 =  __cond1962 .stuff .Maybe_1963_Just_s .field0;
                            if ( (  eq1070 ( ( (  menu_dash_item4868 ) .f_key ) , ( dref4865 .stuff .Key_441_Char_s .field0 ) ) ) ) {
                                ( ( (  menu_dash_item4868 ) .f_action ) ( ( (  pane1228 ) ( (  ed4843 ) ) ) ) );
                            }
                        }
                        (*  ed4843 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                    }
                    else {
                        if ( dref4865.tag == Key_441_Escape_t ) {
                            (*  ed4843 ) .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } );
                        }
                        else {
                            if ( true ) {
                            }
                        }
                    }
                }
                else {
                    if ( true ) {
                        ( (  todo1835 ) ( ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1968 {
    bool  (*fun) (  struct env99*  ,    struct Screen_447 *  );
    struct env99 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1969 (   struct env99* env ,    struct Screen_447 *  screen3727 ) {
    struct Tui_97 *  tui3728 = ( ( * (  screen3727 ) ) .f_tui );
    struct envunion100  temp1970 = ( (struct envunion100){ .fun = (  bool  (*) (  struct env94*  ,    struct Tui_97 *  ) )update_dash_dimensions1022 , .env =  env->envinst94 } );
    bool  updated_dash_dimensions3729 = ( temp1970.fun ( &temp1970.env ,  (  tui3728 ) ) );
    if ( ( ! (  updated_dash_dimensions3729 ) ) ) {
        return ( false );
    }
    (*  screen3727 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3730 = ( ( * ( ( * (  screen3727 ) ) .f_tui ) ) .f_width );
    uint32_t  h3731 = ( ( * ( ( * (  screen3727 ) ) .f_tui ) ) .f_height );
    size_t  nusz3732 = ( (  u32_dash_size971 ) ( (  op_dash_mul183 ( (  w3730 ) , (  h3731 ) ) ) ) );
    if ( (  cmp302 ( (  nusz3732 ) , ( ( ( * (  screen3727 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_447  nuscreen3733 = ( (  mk_dash_screen965 ) ( (  tui3728 ) ,  ( ( * (  screen3727 ) ) .f_al ) ) );
    (*  screen3727 ) .f_current = ( (  nuscreen3733 ) .f_current );
    (*  screen3727 ) .f_previous = ( (  nuscreen3733 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1971 (    struct Tui_97 *  tui3654 ) {
    bool  redraw3655 = ( ( * (  tui3654 ) ) .f_should_dash_redraw );
    (*  tui3654 ) .f_should_dash_redraw = ( false );
    return (  redraw3655 );
}

struct env1975 {
    struct Slice_448  s2328;
    ;
    struct Cell_449 (*  fun2330 )(    struct Cell_449  );
    ;
    ;
};

struct envunion1976 {
    enum Unit_8  (*fun) (  struct env1975*  ,    int32_t  );
    struct env1975 env;
};

static  enum Unit_8   for_dash_each1974 (    struct Range_166  iterable1099 ,   struct envunion1976  fun1101 ) {
    struct RangeIter_169  temp1977 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp1977 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion1976  temp1978 = (  fun1101 );
                ( temp1978.fun ( &temp1978.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1979 (   struct env1975* env ,    int32_t  i2332 ) {
    return ( (  set986 ) ( ( env->s2328 ) ,  ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get990 ( ( env->s2328 ) , ( (  i32_dash_size280 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1973 (    struct Slice_448  s2328 ,    struct Cell_449 (*  fun2330 )(    struct Cell_449  ) ) {
    struct env1975 envinst1975 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each1974 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32311 ) ( (  op_dash_sub458 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1976){ .fun = (  enum Unit_8  (*) (  struct env1975*  ,    int32_t  ) )lam1979 , .env =  envinst1975 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_449   lam1980 (    struct Cell_449  dref3691 ) {
    return ( (  default_dash_cell998 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1972 (    struct Screen_447 *  screen3690 ) {
    ( (  map1973 ) ( ( ( * (  screen3690 ) ) .f_current ) ,  (  lam1980 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1981 (    struct Screen_447 *  screen3736 ,    struct Color_154  c3738 ) {
    (*  screen3736 ) .f_default_dash_fg = (  c3738 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1982 (    struct Screen_447 *  screen3741 ,    struct Color_154  c3743 ) {
    (*  screen3741 ) .f_default_dash_bg = (  c3743 );
    return ( Unit_8_Unit );
}

static  int32_t   cast1986 (    uint32_t  x395 ) {
    return ( (int32_t ) (  x395 ) );
}

static  int32_t   u32_dash_i321985 (    uint32_t  x744 ) {
    return ( (  cast1986 ) ( (  x744 ) ) );
}

struct Maybe_1991 {
    enum {
        Maybe_1991_None_t,
        Maybe_1991_Just_t,
    } tag;
    union {
        struct {
            struct Cell_449 *  field0;
        } Maybe_1991_Just_s;
    } stuff;
};

static struct Maybe_1991 Maybe_1991_Just (  struct Cell_449 *  field0 ) {
    return ( struct Maybe_1991 ) { .tag = Maybe_1991_Just_t, .stuff = { .Maybe_1991_Just_s = { .field0 = field0 } } };
};

static  struct Cell_449 *   undefined1992 (  ) {
    struct Cell_449 *  temp1993;
    return (  temp1993 );
}

static  struct Cell_449 *   or_dash_fail1990 (    struct Maybe_1991  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_1991  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1991_None_t ) {
        ( (  panic850 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1992 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1991_Just_t ) {
            return ( dref1356 .stuff .Maybe_1991_Just_s .field0 );
        }
    }
}

static  struct Maybe_1991   get_dash_cell_dash_ptr1994 (    struct Screen_447 *  screen3757 ,    int32_t  x3759 ,    int32_t  y3761 ) {
    int32_t  w3762 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3757 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  x3759 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  x3759 ) , (  w3762 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1991) { .tag = Maybe_1991_None_t } );
    }
    if ( ( (  cmp173 ( (  y3761 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3761 ) , ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3757 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1991) { .tag = Maybe_1991_None_t } );
    }
    size_t  i3763 = ( (  i32_dash_size280 ) ( (  op_dash_add175 ( (  op_dash_mul1596 ( (  y3761 ) , (  w3762 ) ) ) , (  x3759 ) ) ) ) );
    return ( ( Maybe_1991_Just ) ( ( (  get_dash_ptr987 ) ( ( ( * (  screen3757 ) ) .f_current ) ,  (  i3763 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1983 (    struct Screen_447 *  screen3766 ) {
    struct RangeIter_169  temp1984 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3766 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1987 =  next172 (&temp1984);
        if (  __cond1987 .tag == 0 ) {
            break;
        }
        int32_t  y3768 =  __cond1987 .stuff .Maybe_171_Just_s .field0;
        struct RangeIter_169  temp1988 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3766 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_171  __cond1989 =  next172 (&temp1988);
            if (  __cond1989 .tag == 0 ) {
                break;
            }
            int32_t  x3770 =  __cond1989 .stuff .Maybe_171_Just_s .field0;
            struct Cell_449 *  cell3771 = ( (  or_dash_fail1990 ) ( ( (  get_dash_cell_dash_ptr1994 ) ( (  screen3766 ) ,  (  x3770 ) ,  (  y3768 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3771 ) .f_bg = ( ( * (  screen3766 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1996 {
    enum Unit_8  (*fun) (  struct env445*  ,    struct Screen_447 *  ,    struct Editor_267 *  );
    struct env445 env;
};

struct IntStrIter_2001 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_2001   into_dash_iter2003 (    struct IntStrIter_2001  self1396 ) {
    return (  self1396 );
}

struct env2007 {
    int32_t  base1386;
    ;
};

struct envunion2008 {
    int32_t  (*fun) (  struct env2007*  ,    int32_t  ,    int32_t  );
    struct env2007 env;
};

static  int32_t   reduce2006 (    struct Range_166  iterable1118 ,    int32_t  base1120 ,   struct envunion2008  fun1122 ) {
    int32_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion2008  temp2009 = (  fun1122 );
                x1123 = ( temp2009.fun ( &temp2009.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2010 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2010);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp2011;
    return (  temp2011 );
}

static  int32_t   lam2012 (   struct env2007* env ,    int32_t  item1390 ,    int32_t  x1392 ) {
    return (  op_dash_mul1596 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  int32_t   pow2005 (    int32_t  base1386 ,    int32_t  p1388 ) {
    struct env2007 envinst2007 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce2006 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion2008){ .fun = (  int32_t  (*) (  struct env2007*  ,    int32_t  ,    int32_t  ) )lam2012 , .env =  envinst2007 } ) ) );
}

static  struct Maybe_351   next2004 (    struct IntStrIter_2001 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    int32_t  trim_dash_down1400 = ( (  pow2005 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1401 = (  op_dash_div1595 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    int32_t  upper_dash_mask1402 = (  op_dash_mul1596 ( (  op_dash_div1595 ( (  upper1401 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast467 ) ( (  op_dash_sub180 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81177 ) ( (  op_dash_add1067 ( (  digit1403 ) , (  from_dash_integral328 ( 48 ) ) ) ) ) );
    return ( ( Maybe_351_Just ) ( (  digit_dash_char1404 ) ) );
}

static  size_t   reduce2002 (    struct IntStrIter_2001  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct IntStrIter_2001  it1124 = ( (  into_dash_iter2003 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next2004 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2013 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2013);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2014;
    return (  temp2014 );
}

static  size_t   lam2015 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2000 (    struct IntStrIter_2001  it1129 ) {
    return ( (  reduce2002 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2015 ) ) );
}

static  int32_t   count_dash_digits2018 (    int32_t  self1407 ) {
    if ( (  eq696 ( (  self1407 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp173 ( (  self1407 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div1595 ( (  self1407 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2001   int_dash_iter2017 (    int32_t  int1411 ) {
    if ( (  cmp173 ( (  int1411 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_2001) { .f_int = (  op_dash_neg849 ( (  int1411 ) ) ) , .f_len = ( (  count_dash_digits2018 ) ( (  op_dash_neg849 ( (  int1411 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_2001) { .f_int = (  int1411 ) , .f_len = ( (  count_dash_digits2018 ) ( (  int1411 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_2001   chars2016 (    int32_t  self1420 ) {
    return ( (  int_dash_iter2017 ) ( (  self1420 ) ) );
}

static  int32_t   screen_dash_width2020 (    struct ScreenDims_450  sd4391 ) {
    return (  op_dash_add175 ( (  op_dash_sub180 ( ( (  sd4391 ) .f_to_dash_sx ) , ( (  sd4391 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height2021 (    struct ScreenDims_450  sd4394 ) {
    return (  op_dash_add175 ( (  op_dash_sub180 ( ( (  sd4394 ) .f_to_dash_sy ) , ( (  sd4394 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset2019 (    struct Pane_241 *  pane4397 ,    struct ScreenDims_450  sd4399 ) {
    struct Pos_26  cur4400 = ( ( * (  pane4397 ) ) .f_cursor );
    int32_t  cur_dash_sx4401 = ( (  pos_dash_vi291 ) ( ( ( * (  pane4397 ) ) .f_buf ) ,  (  cur4400 ) ) );
    struct ScreenCursorOffset_243  sc_dash_off4402 = ( ( * (  pane4397 ) ) .f_sc_dash_off );
    int32_t  sw4403 = (  op_dash_sub180 ( ( (  screen_dash_width2020 ) ( (  sd4399 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh4404 = (  op_dash_sub180 ( ( (  screen_dash_height2021 ) ( (  sd4399 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
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

static  enum Unit_8   set_dash_screen_dash_colors2026 (    struct Screen_447 *  screen3746 ,    struct Color_154  fg3748 ,    struct Color_154  bg3750 ) {
    (*  screen3746 ) .f_default_dash_fg = (  fg3748 );
    (*  screen3746 ) .f_default_dash_bg = (  bg3750 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors2025 (    struct Screen_447 *  screen4415 ,    struct Colors_189  colors4417 ) {
    ( (  set_dash_screen_dash_colors2026 ) ( (  screen4415 ) ,  ( (  colors4417 ) .f_fg ) ,  ( (  colors4417 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   abs2027 (    int32_t  x1639 ) {
    return ( (  cmp173 ( (  x1639 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ? (  x1639 ) : (  op_dash_neg849 ( (  x1639 ) ) ) );
}

struct Map_2030 {
    struct IntStrIter_2001  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2030 Map_2030_Map (  struct IntStrIter_2001  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2030 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2030   into_dash_iter2032 (    struct Map_2030  self804 ) {
    return (  self804 );
}

static  struct Maybe_171   next2033 (    struct Map_2030 *  dref806 ) {
    struct Maybe_351  dref809 = ( (  next2004 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_351_None_t ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_351_Just_t ) {
            return ( ( Maybe_171_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_351_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2031 (    struct Map_2030  iterable1118 ,    int32_t  base1120 ,    int32_t (*  fun1122 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1123 = (  base1120 );
    struct Map_2030  it1124 = ( (  into_dash_iter2032 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next2033 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2034 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2034);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp2035;
    return (  temp2035 );
}

static  int32_t   lam2036 (    int32_t  v1137 ,    int32_t  s1139 ) {
    return (  op_dash_add175 ( (  v1137 ) , (  s1139 ) ) );
}

static  int32_t   sum2029 (    struct Map_2030  it1135 ) {
    return ( (  reduce2031 ) ( (  it1135 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2036 ) ) );
}

static  struct Map_2030   map2037 (    struct IntStrIter_2001  iterable813 ,    int32_t (*  fun815 )(    struct Char_65  ) ) {
    struct IntStrIter_2001  it816 = ( (  into_dash_iter2003 ) ( (  iterable813 ) ) );
    return ( ( Map_2030_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  enum Unit_8   put_dash_char2041 (    struct Screen_447 *  screen3774 ,    struct Char_65  c3776 ,    int32_t  x3778 ,    int32_t  y3780 ) {
    int32_t  w3781 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3774 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp173 ( (  x3778 ) , (  w3781 ) ) != 0 ) || (  cmp173 ( (  y3780 ) , ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3774 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp173 ( (  x3778 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp173 ( (  y3780 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3782 = ( (  i32_dash_size280 ) ( (  op_dash_add175 ( (  op_dash_mul1596 ( (  y3780 ) , (  w3781 ) ) ) , (  x3778 ) ) ) ) );
    struct Color_154  fg3783 = ( ( * (  screen3774 ) ) .f_default_dash_fg );
    struct Color_154  bg3784 = ( ( * (  screen3774 ) ) .f_default_dash_bg );
    struct Char_65  c3785 = (  c3776 );
    int32_t  char_dash_width3786 = ( (  wcwidth375 ) ( (  c3785 ) ) );
    if ( ( (  cmp173 ( (  x3778 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp173 ( ( (  elem_dash_get990 ( ( ( * (  screen3774 ) ) .f_current ) , (  op_dash_sub458 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_449  pc3787 = (  elem_dash_get990 ( ( ( * (  screen3774 ) ) .f_current ) , (  op_dash_sub458 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set986 ) ( ( ( * (  screen3774 ) ) .f_current ) ,  (  op_dash_sub458 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_449) { .f_c = ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3787 ) .f_fg ) , .f_bg = ( (  pc3787 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set986 ) ( ( ( * (  screen3774 ) ) .f_current ) ,  (  i3782 ) ,  ( (struct Cell_449) { .f_c = (  c3785 ) , .f_fg = (  fg3783 ) , .f_bg = (  bg3784 ) , .f_char_dash_width = (  char_dash_width3786 ) } ) ) );
    struct RangeIter_169  temp2042 =  into_dash_iter170 ( ( (  to179 ) ( (  op_dash_add175 ( (  x3778 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min793 ) ( (  op_dash_sub180 ( (  op_dash_add175 ( (  x3778 ) , (  char_dash_width3786 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3781 ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond2043 =  next172 (&temp2042);
        if (  __cond2043 .tag == 0 ) {
            break;
        }
        int32_t  xx3789 =  __cond2043 .stuff .Maybe_171_Just_s .field0;
        size_t  i3790 = ( (  i32_dash_size280 ) ( (  op_dash_add175 ( (  op_dash_mul1596 ( (  y3780 ) , (  w3781 ) ) ) , (  xx3789 ) ) ) ) );
        ( (  set986 ) ( ( ( * (  screen3774 ) ) .f_current ) ,  (  i3790 ) ,  ( (struct Cell_449) { .f_c = ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = (  fg3783 ) , .f_bg = (  bg3784 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str2038 (    struct Screen_447 *  screen3793 ,    int32_t  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1596 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min793 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_2001  temp2039 =  into_dash_iter2003 ( ( (  chars2016 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2040 =  next2004 (&temp2039);
        if (  __cond2040 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2040 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2041 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2028 (    struct Screen_447 *  screen3809 ,    int32_t  s3811 ,    int32_t  x3813 ,    int32_t  y3815 ) {
    int32_t  slen3816 = ( (  sum2029 ) ( ( (  map2037 ) ( ( (  chars2016 ) ( (  s3811 ) ) ) ,  (  rendered_dash_wcwidth373 ) ) ) ) );
    int32_t  w3817 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3809 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3818 = (  op_dash_sub180 ( (  op_dash_sub180 ( (  w3817 ) , (  x3813 ) ) ) , (  slen3816 ) ) );
    ( (  draw_dash_str2038 ) ( (  screen3809 ) ,  (  s3811 ) ,  (  x3818 ) ,  (  y3815 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2045 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct StrConcat_2045 StrConcat_2045_StrConcat (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_2045 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2048 {
    struct StrView_27  field0;
    struct StrConcat_2045  field1;
};

static struct StrConcat_2048 StrConcat_2048_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_2045  field1 ) {
    return ( struct StrConcat_2048 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2047 {
    struct StrConcat_2048  field0;
    struct Char_65  field1;
};

static struct StrConcat_2047 StrConcat_2047_StrConcat (  struct StrConcat_2048  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2047 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2050 (    struct StrConcat_2045  self1302 ) {
    struct StrConcat_2045  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str518 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2049 (    struct StrConcat_2048  self1302 ) {
    struct StrConcat_2048  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str2050 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2046 (    struct StrConcat_2047  self1302 ) {
    struct StrConcat_2047  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str2049 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert2044 (    bool  cond1346 ,    struct StrConcat_2045  msg1348 ) {
    if ( ( ! (  cond1346 ) ) ) {
        ( (  print_dash_str2046 ) ( ( ( StrConcat_2047_StrConcat ) ( ( ( StrConcat_2048_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1348 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_2052 {
    struct StrViewIter_293  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_2052   into_dash_iter2053 (    struct AppendIter_2052  self1044 ) {
    return (  self1044 );
}

static  struct AppendIter_2052   append2054 (    struct StrViewIter_293  it1031 ,    struct Char_65  e1033 ) {
    return ( (struct AppendIter_2052) { .f_it = ( (  into_dash_iter294 ) ( (  it1031 ) ) ) , .f_elem = (  e1033 ) , .f_appended = ( false ) } );
}

static  struct Maybe_351   next2056 (    struct AppendIter_2052 *  self1047 ) {
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

static  bool   between2058 (    struct Pos_26  c1377 ,    struct Pos_26  l1379 ,    struct Pos_26  r1381 ) {
    struct Pos_26  from1382 = ( (  min692 ) ( (  l1379 ) ,  (  r1381 ) ) );
    struct Pos_26  to1383 = ( (  max694 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp693 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp693 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection2057 (    struct Pane_241 *  pane4383 ,    struct Pos_26  pos4385 ) {
    return ( {  struct Maybe_34  dref4386 = ( ( * (  pane4383 ) ) .f_sel ) ; dref4386.tag == Maybe_34_Just_t ? ( (  between2058 ) ( (  pos4385 ) ,  ( ( * (  pane4383 ) ) .f_cursor ) ,  ( dref4386 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env2060 {
    ;
    struct Theme_188 *  theme4427;
    struct Screen_447 *  screen4420;
    ;
};

struct envunion2061 {
    enum Unit_8  (*fun) (  struct env2060*  ,    enum HighlightType_18  );
    struct env2060 env;
};

static  enum Unit_8   if_dash_just2059 (    struct Maybe_224  x1601 ,   struct envunion2061  fun1603 ) {
    struct Maybe_224  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_224_Just_t ) {
        struct envunion2061  temp2062 = (  fun1603 );
        ( temp2062.fun ( &temp2062.env ,  ( dref1604 .stuff .Maybe_224_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_224_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim2067 (    struct List_15 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min587 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_351   head2072 (    struct Scanner_1089 *  it1167 ) {
    struct Scanner_1089  temp2073 = ( (  into_dash_iter1105 ) ( (  it1167 ) ) );
    return ( (  next1114 ) ( ( &temp2073 ) ) );
}

static  bool   null2071 (    struct Scanner_1089 *  it1176 ) {
    struct Maybe_351  dref1177 = ( (  head2072 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_351_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_351   peek2074 (    struct Scanner_1089 *  sc3421 ) {
    return ( (  head1408 ) ( ( ( * (  sc3421 ) ) .f_s ) ) );
}

static  bool   eq2076 (    struct Maybe_351  l150 ,    struct Maybe_351  r152 ) {
    struct Tuple2_1841  dref153 = ( ( Tuple2_1841_Tuple2 ) ( (  l150 ) ,  (  r152 ) ) );
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

static  bool   try_dash_char2075 (    struct Scanner_1089 *  sc3424 ,    struct Char_65  char3426 ) {
    if ( (  eq2076 ( ( (  peek2074 ) ( (  sc3424 ) ) ) , ( ( Maybe_351_Just ) ( (  char3426 ) ) ) ) ) ) {
        ( (  drop_prime_1117 ) ( (  sc3424 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   is_dash_just2079 (    struct Maybe_351  m1570 ) {
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

static  struct Maybe_351   char_dash_satisfies_prime_2080 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2078 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2080 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2077 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2078 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2081 (    struct Char_65  c3889 ) {
    return ( !  eq360 ( (  c3889 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ) );
}

struct TypeSize_2088 {
    size_t  f_size;
};

static  struct TypeSize_2088   get_dash_typesize2087 (  ) {
    struct Highlight_17  temp2089;
    return ( (struct TypeSize_2088) { .f_size = ( sizeof( ( (  temp2089 ) ) ) ) } );
}

static  struct Highlight_17 *   cast_dash_ptr2090 (    void *  p398 ) {
    return ( (struct Highlight_17 * ) (  p398 ) );
}

static  struct Slice_16   allocate2086 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize2087 ) ( ) ) ) .f_size );
    struct Highlight_17 *  ptr2371 = ( (  cast_dash_ptr2090 ) ( ( ( malloc ) ( (  op_dash_mul531 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_16) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env2091 {
    ;
    ;
    struct Slice_16  new_dash_slice2453;
};

struct Tuple2_2093 {
    struct Highlight_17  field0;
    int32_t  field1;
};

static struct Tuple2_2093 Tuple2_2093_Tuple2 (  struct Highlight_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2093 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2092 {
    enum Unit_8  (*fun) (  struct env2091*  ,    struct Tuple2_2093  );
    struct env2091 env;
};

static  struct Highlight_17 *   offset_dash_ptr2097 (    struct Highlight_17 *  x377 ,    int64_t  count379 ) {
    struct Highlight_17  temp2098;
    return ( (struct Highlight_17 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2098 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_17 *   get_dash_ptr2096 (    struct Slice_16  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp302 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_17 *  elem_dash_ptr2173 = ( (  offset_dash_ptr2097 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set2095 (    struct Slice_16  slice2187 ,    size_t  i2189 ,    struct Highlight_17  x2191 ) {
    struct Highlight_17 *  ep2192 = ( (  get_dash_ptr2096 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2094 (   struct env2091* env ,    struct Tuple2_2093  dref2454 ) {
    return ( (  set2095 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size280 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct SliceIter_2101 {
    struct Slice_16  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2100 {
    struct SliceIter_2101  f_left_dash_it;
    struct FromIter_540  f_right_dash_it;
};

static  struct Zip_2100   into_dash_iter2103 (    struct Zip_2100  self936 ) {
    return (  self936 );
}

struct Maybe_2104 {
    enum {
        Maybe_2104_None_t,
        Maybe_2104_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2093  field0;
        } Maybe_2104_Just_s;
    } stuff;
};

static struct Maybe_2104 Maybe_2104_Just (  struct Tuple2_2093  field0 ) {
    return ( struct Maybe_2104 ) { .tag = Maybe_2104_Just_t, .stuff = { .Maybe_2104_Just_s = { .field0 = field0 } } };
};

struct Maybe_2106 {
    enum {
        Maybe_2106_None_t,
        Maybe_2106_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_17  field0;
        } Maybe_2106_Just_s;
    } stuff;
};

static struct Maybe_2106 Maybe_2106_Just (  struct Highlight_17  field0 ) {
    return ( struct Maybe_2106 ) { .tag = Maybe_2106_Just_t, .stuff = { .Maybe_2106_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2106   next2107 (    struct SliceIter_2101 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2106) { .tag = Maybe_2106_None_t } );
    }
    struct Highlight_17  elem2258 = ( * ( (  offset_dash_ptr2097 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2106_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2104   next2105 (    struct Zip_2100 *  self939 ) {
    struct Zip_2100  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_2106  dref941 = ( (  next2107 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_2106_None_t ) {
            return ( (struct Maybe_2104) { .tag = Maybe_2104_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_2106_Just_t ) {
                struct Maybe_171  dref943 = ( (  next546 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_2104) { .tag = Maybe_2104_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next2107 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next546 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2104_Just ) ( ( ( Tuple2_2093_Tuple2 ) ( ( dref941 .stuff .Maybe_2106_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2099 (    struct Zip_2100  iterable1099 ,   struct envunion2092  fun1101 ) {
    struct Zip_2100  temp2102 = ( (  into_dash_iter2103 ) ( (  iterable1099 ) ) );
    struct Zip_2100 *  it1102 = ( &temp2102 );
    while ( ( true ) ) {
        struct Maybe_2104  dref1103 = ( (  next2105 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_2104_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_2104_Just_t ) {
                struct envunion2092  temp2108 = (  fun1101 );
                ( temp2108.fun ( &temp2108.env ,  ( dref1103 .stuff .Maybe_2104_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2101   into_dash_iter2110 (    struct Slice_16  self2250 ) {
    return ( (struct SliceIter_2101) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2100   zip2109 (    struct Slice_16  left947 ,    struct FromIter_540  right949 ) {
    struct SliceIter_2101  left_dash_it950 = ( (  into_dash_iter2110 ) ( (  left947 ) ) );
    struct FromIter_540  right_dash_it951 = ( (  into_dash_iter550 ) ( (  right949 ) ) );
    return ( (struct Zip_2100) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr2112 (    struct Highlight_17 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free2111 (    enum CAllocator_10  dref2373 ,    struct Slice_16  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2112 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full2085 (   struct env5* env ,    struct List_15 *  list2452 ) {
    if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate2086 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq283 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_16  new_dash_slice2453 = ( (  allocate2086 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul531 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env2091 envinst2091 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion2092  fun2457 = ( (struct envunion2092){ .fun = (  enum Unit_8  (*) (  struct env2091*  ,    struct Tuple2_2093  ) )lam2094 , .env =  envinst2091 } );
            ( (  for_dash_each2099 ) ( ( (  zip2109 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free2111 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add2083 (   struct env35* env ,    struct List_15 *  list2460 ,    struct Highlight_17  elem2462 ) {
    struct envunion36  temp2084 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_15 *  ) )grow_dash_if_dash_full2085 , .env =  env->envinst5 } );
    ( temp2084.fun ( &temp2084.env ,  (  list2460 ) ) );
    ( (  set2095 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add356 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2114 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2117 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2116 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2117 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2115 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2116 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2118 (    struct Char_65  c3892 ) {
    return ( ( !  eq360 ( (  c3892 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) && ( !  eq360 ( (  c3892 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2120 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2122 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2121 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2122 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  struct Maybe_351   char_dash_satisfies_prime_2125 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2124 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2125 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2123 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2124 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2126 (    struct Char_65  c3895 ) {
    return ( (  eq1400 ( ( (  char_dash_type1403 ) ( (  c3895 ) ) ) , ( CharType_1401_CharWord ) ) ) || (  eq360 ( (  c3895 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2128 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct env2130 {
    struct Scanner_1089 *  sc3885;
    ;
};

struct envunion2131 {
    bool  (*fun) (  struct env2130*  ,    struct StrView_27  );
    struct env2130 env;
};

struct env2133 {
    struct envunion2131  fun1160;
};

struct envunion2134 {
    bool  (*fun) (  struct env2133*  ,    struct StrView_27  ,    bool  );
    struct env2133 env;
};

static  bool   reduce2132 (    struct Array_598  iterable1118 ,    bool  base1120 ,   struct envunion2134  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_605  it1124 = ( (  into_dash_iter606 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1125 = ( (  next607 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_85_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_85_Just_t ) {
                struct envunion2134  temp2135 = (  fun1122 );
                x1123 = ( temp2135.fun ( &temp2135.env ,  ( dref1125 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2136 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2136);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2137;
    return (  temp2137 );
}

static  bool   lam2138 (   struct env2133* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2131  temp2139 = ( env->fun1160 );
    return ( ( temp2139.fun ( &temp2139.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2129 (    struct Array_598  it1158 ,   struct envunion2131  fun1160 ) {
    struct env2133 envinst2133 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2132 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2134){ .fun = (  bool  (*) (  struct env2133*  ,    struct StrView_27  ,    bool  ) )lam2138 , .env =  envinst2133 } ) ) );
}

static  struct StrViewIter_293   own2145 (    struct StrViewIter_293  x1561 ) {
    return (  x1561 );
}

static  bool   matches_dash_str2142 (    struct Scanner_1089 *  sc3441 ,    struct StrView_27  s3443 ) {
    size_t  skip3444 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_293  temp2143 = ( (  chars295 ) ( (  s3443 ) ) );
    struct StrViewIter_293 *  ss3445 = ( &temp2143 );
    struct StrViewIter_293  temp2144 = ( (  own2145 ) ( ( ( * (  sc3441 ) ) .f_s ) ) );
    struct StrViewIter_293 *  sccp3446 = ( &temp2144 );
    while ( ( true ) ) {
        struct Tuple2_1841  dref3447 = ( ( Tuple2_1841_Tuple2 ) ( ( (  next352 ) ( (  sccp3446 ) ) ) ,  ( (  next352 ) ( (  ss3445 ) ) ) ) );
        if ( dref3447 .field1.tag == Maybe_351_None_t ) {
            ( (  drop_prime_1117 ) ( (  sc3441 ) ,  (  skip3444 ) ) );
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

static  bool   lam2141 (   struct env2130* env ,    struct StrView_27  sym3898 ) {
    return ( (  matches_dash_str2142 ) ( ( env->sc3885 ) ,  (  sym3898 ) ) );
}

struct envunion2147 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_2149 {
    struct StrView_27 _arr [12];
};

struct env2150 {
    struct Scanner_1089 *  sc3885;
    ;
};

struct envunion2151 {
    bool  (*fun) (  struct env2150*  ,    struct StrView_27  );
    struct env2150 env;
};

struct env2153 {
    struct envunion2151  fun1160;
};

struct envunion2154 {
    bool  (*fun) (  struct env2153*  ,    struct StrView_27  ,    bool  );
    struct env2153 env;
};

struct ArrayIter_2155 {
    struct Array_2149  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2155   into_dash_iter2156 (    struct Array_2149  self2102 ) {
    return ( (struct ArrayIter_2155) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2160 (    struct Array_2149 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   get_dash_ptr2159 (    struct Array_2149 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr2160 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr611 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get2158 (    struct Array_2149 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2159 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_85   next2157 (    struct ArrayIter_2155 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_27  e2111 = ( (  get2158 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2152 (    struct Array_2149  iterable1118 ,    bool  base1120 ,   struct envunion2154  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2155  it1124 = ( (  into_dash_iter2156 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1125 = ( (  next2157 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_85_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_85_Just_t ) {
                struct envunion2154  temp2161 = (  fun1122 );
                x1123 = ( temp2161.fun ( &temp2161.env ,  ( dref1125 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2162 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2162);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2163;
    return (  temp2163 );
}

static  bool   lam2164 (   struct env2153* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2151  temp2165 = ( env->fun1160 );
    return ( ( temp2165.fun ( &temp2165.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2148 (    struct Array_2149  it1158 ,   struct envunion2151  fun1160 ) {
    struct env2153 envinst2153 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2152 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2154){ .fun = (  bool  (*) (  struct env2153*  ,    struct StrView_27  ,    bool  ) )lam2164 , .env =  envinst2153 } ) ) );
}

static  struct Array_2149   from_dash_listlike2166 (    struct Array_2149 *  self369 ) {
    return ( * (  self369 ) );
}

static  bool   lam2168 (   struct env2150* env ,    struct StrView_27  sym3902 ) {
    return ( (  matches_dash_str2142 ) ( ( env->sc3885 ) ,  (  sym3902 ) ) );
}

struct envunion2170 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2173 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2172 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2173 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2171 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2172 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2174 (    struct Char_65  c3906 ) {
    return ( (  eq1400 ( ( (  char_dash_type1403 ) ( (  c3906 ) ) ) , ( CharType_1401_CharWord ) ) ) || (  eq360 ( (  c3906 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2175 (    struct Maybe_351  x1592 ,    bool (*  fun1594 )(    struct Char_65  ) ,    bool  default1596 ) {
    return ( {  struct Maybe_351  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_351_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_351_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  bool   is_dash_upper2176 (    struct Char_65  c1521 ) {
    return ( (  eq283 ( ( (  c1521 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1108 ) ( (  c1521 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2177 {
    struct StrView_27 _arr [7];
};

static  struct Array_2177   from_dash_listlike2178 (    struct Array_2177 *  self369 ) {
    return ( * (  self369 ) );
}

struct Array_2180 {
    struct StrView_27 _arr [15];
};

static  struct Array_2180   from_dash_listlike2181 (    struct Array_2180 *  self369 ) {
    return ( * (  self369 ) );
}

struct env2184 {
    ;
    struct StrView_27  ident3910;
};

struct envunion2185 {
    bool  (*fun) (  struct env2184*  ,    struct StrView_27  );
    struct env2184 env;
};

struct env2187 {
    struct envunion2185  fun1160;
};

struct envunion2188 {
    bool  (*fun) (  struct env2187*  ,    struct StrView_27  ,    bool  );
    struct env2187 env;
};

struct ArrayIter_2189 {
    struct Array_2177  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2189   into_dash_iter2190 (    struct Array_2177  self2102 ) {
    return ( (struct ArrayIter_2189) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2194 (    struct Array_2177 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   get_dash_ptr2193 (    struct Array_2177 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 7 ) ) ) != 0 ) ) ) {
        ( (  panic509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 7 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr2194 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr611 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get2192 (    struct Array_2177 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2193 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_85   next2191 (    struct ArrayIter_2189 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 7 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_27  e2111 = ( (  get2192 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2186 (    struct Array_2177  iterable1118 ,    bool  base1120 ,   struct envunion2188  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2189  it1124 = ( (  into_dash_iter2190 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1125 = ( (  next2191 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_85_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_85_Just_t ) {
                struct envunion2188  temp2195 = (  fun1122 );
                x1123 = ( temp2195.fun ( &temp2195.env ,  ( dref1125 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2196 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2196);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2197;
    return (  temp2197 );
}

static  bool   lam2198 (   struct env2187* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2185  temp2199 = ( env->fun1160 );
    return ( ( temp2199.fun ( &temp2199.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2183 (    struct Array_2177  it1158 ,   struct envunion2185  fun1160 ) {
    struct env2187 envinst2187 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2186 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2188){ .fun = (  bool  (*) (  struct env2187*  ,    struct StrView_27  ,    bool  ) )lam2198 , .env =  envinst2187 } ) ) );
}

static  bool   lam2200 (   struct env2184* env ,    struct StrView_27  kw3914 ) {
    return (  eq619 ( (  kw3914 ) , ( env->ident3910 ) ) );
}

struct env2202 {
    ;
    struct StrView_27  ident3910;
};

struct envunion2203 {
    bool  (*fun) (  struct env2202*  ,    struct StrView_27  );
    struct env2202 env;
};

struct env2205 {
    struct envunion2203  fun1160;
};

struct envunion2206 {
    bool  (*fun) (  struct env2205*  ,    struct StrView_27  ,    bool  );
    struct env2205 env;
};

struct ArrayIter_2207 {
    struct Array_2180  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2207   into_dash_iter2208 (    struct Array_2180  self2102 ) {
    return ( (struct ArrayIter_2207) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2212 (    struct Array_2180 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   get_dash_ptr2211 (    struct Array_2180 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp302 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp302 ( (  i2029 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr2212 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr611 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get2210 (    struct Array_2180 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2211 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_85   next2209 (    struct ArrayIter_2207 *  self2109 ) {
    if ( (  cmp302 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_27  e2111 = ( (  get2210 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add356 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2204 (    struct Array_2180  iterable1118 ,    bool  base1120 ,   struct envunion2206  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2207  it1124 = ( (  into_dash_iter2208 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1125 = ( (  next2209 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_85_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_85_Just_t ) {
                struct envunion2206  temp2213 = (  fun1122 );
                x1123 = ( temp2213.fun ( &temp2213.env ,  ( dref1125 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2214 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2214);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2215;
    return (  temp2215 );
}

static  bool   lam2216 (   struct env2205* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2203  temp2217 = ( env->fun1160 );
    return ( ( temp2217.fun ( &temp2217.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2201 (    struct Array_2180  it1158 ,   struct envunion2203  fun1160 ) {
    struct env2205 envinst2205 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2204 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2206){ .fun = (  bool  (*) (  struct env2205*  ,    struct StrView_27  ,    bool  ) )lam2216 , .env =  envinst2205 } ) ) );
}

static  bool   lam2218 (   struct env2202* env ,    struct StrView_27  kw3916 ) {
    return (  eq619 ( (  kw3916 ) , ( env->ident3910 ) ) );
}

struct envunion2220 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_1101   int2221 (    struct Scanner_1089 *  sc3415 ) {
    return ( (  scan_dash_int1102 ) ( (  sc3415 ) ) );
}

static  struct Maybe_351   char_dash_satisfies_prime_2224 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2223 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2224 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2222 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2223 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2225 (    struct Char_65  c1509 ) {
    return ( (  eq283 ( ( (  c1509 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1107 ) ( (  c1509 ) ) ) || ( (  between1108 ) ( (  c1509 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1108 ) ( (  c1509 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2227 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2228 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2121 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2230 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2233 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2232 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2233 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2231 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2232 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2234 (    struct Char_65  c1515 ) {
    return ( (  eq283 ( ( (  c1515 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1108 ) ( (  c1515 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2236 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2239 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2238 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2239 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2237 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2238 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2241 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2244 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2243 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2244 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2242 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2243 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2245 (    struct Char_65  c1512 ) {
    return ( (  eq283 ( ( (  c1512 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq360 ( (  c1512 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) || (  eq360 ( (  c1512 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2247 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2249 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2251 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2253 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   kc2069 (   struct env101* env ,    struct List_15 *  hls3882 ,    struct StrView_27  line_dash_sv3884 ) {
    struct Scanner_1089  temp2070 = ( (  mk_dash_from_dash_str1091 ) ( (  line_dash_sv3884 ) ) );
    struct Scanner_1089 *  sc3885 = ( &temp2070 );
    while ( ( ! ( (  null2071 ) ( (  sc3885 ) ) ) ) ) {
        int32_t  from_dash_off3886 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
        struct Maybe_351  first_dash_char3887 = ( (  peek2074 ) ( (  sc3885 ) ) );
        if ( ( (  try_dash_char2075 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
            if ( ( (  try_dash_char2075 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  skip_dash_while2077 ) ( (  sc3885 ) ,  (  lam2081 ) ) );
                ( (  drop_prime_1117 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                int32_t  to_dash_off3890 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                struct envunion102  temp2082 = ( (struct envunion102){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                ( temp2082.fun ( &temp2082.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  line_dash_sv3884 ) ) ) ) ) , .f_type = ( HighlightType_18_Special3 ) } ) ) );
            } else {
                struct envunion2114  temp2113 = ( (struct envunion2114){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                ( temp2113.fun ( &temp2113.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  line_dash_sv3884 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
            }
            break;
        } else {
            if ( ( (  try_dash_char2075 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while2115 ) ( (  sc3885 ) ,  (  lam2118 ) ) );
                    if ( (  eq2076 ( ( (  peek2074 ) ( (  sc3885 ) ) ) , ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                        ( (  drop_prime_1117 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        if ( (  eq2076 ( ( (  peek2074 ) ( (  sc3885 ) ) ) , ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                            ( (  drop_prime_1117 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                        }
                    } else {
                        ( (  drop_prime_1117 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        break;
                    }
                }
                int32_t  cur_dash_off3893 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                struct envunion2120  temp2119 = ( (struct envunion2120){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                ( temp2119.fun ( &temp2119.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3893 ) , .f_type = ( HighlightType_18_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char2075 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies2121 ) ( (  sc3885 ) ,  (  is_dash_alpha1405 ) ) ) ) {
                        ( (  skip_dash_while2123 ) ( (  sc3885 ) ,  (  lam2126 ) ) );
                        int32_t  cur_dash_off3896 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2128  temp2127 = ( (struct envunion2128){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                        ( temp2127.fun ( &temp2127.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3896 ) , .f_type = ( HighlightType_18_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct Array_598  temp2140 = ( (struct Array_598) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"==" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"/=" ) ,  ( 2 ) ) ) } } );
                    struct env2130 envinst2130 = {
                        .sc3885 =  sc3885 ,
                    };
                    if ( ( (  any2129 ) ( ( (  from_dash_listlike639 ) ( ( &temp2140 ) ) ) ,  ( (struct envunion2131){ .fun = (  bool  (*) (  struct env2130*  ,    struct StrView_27  ) )lam2141 , .env =  envinst2130 } ) ) ) ) {
                        int32_t  cur_dash_off3899 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_18  type3900 = ( HighlightType_18_Special2 );
                        struct envunion2147  temp2146 = ( (struct envunion2147){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                        ( temp2146.fun ( &temp2146.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3899 ) , .f_type = (  type3900 ) } ) ) );
                    } else {
                        struct Array_2149  temp2167 = ( (struct Array_2149) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike642 ) ( ( (uint8_t*)"=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"&" ) ,  ( 1 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike642 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) } } );
                        struct env2150 envinst2150 = {
                            .sc3885 =  sc3885 ,
                        };
                        if ( ( (  any2148 ) ( ( (  from_dash_listlike2166 ) ( ( &temp2167 ) ) ) ,  ( (struct envunion2151){ .fun = (  bool  (*) (  struct env2150*  ,    struct StrView_27  ) )lam2168 , .env =  envinst2150 } ) ) ) ) {
                            int32_t  cur_dash_off3903 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_18  type3904 = ( HighlightType_18_Special1 );
                            struct envunion2170  temp2169 = ( (struct envunion2170){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                            ( temp2169.fun ( &temp2169.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3903 ) , .f_type = (  type3904 ) } ) ) );
                        } else {
                            if ( ( (  char_dash_satisfies2121 ) ( (  sc3885 ) ,  (  is_dash_alpha1405 ) ) ) ) {
                                ( (  skip_dash_while2171 ) ( (  sc3885 ) ,  (  lam2174 ) ) );
                                int32_t  cur_dash_off3907 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                bool  first_dash_char_dash_uppercase3908 = ( (  maybe2175 ) ( (  first_dash_char3887 ) ,  (  is_dash_upper2176 ) ,  ( false ) ) );
                                enum HighlightType_18  type3909 = ( (  first_dash_char_dash_uppercase3908 ) ? ( HighlightType_18_Ident2 ) : ( HighlightType_18_Ident1 ) );
                                struct StrView_27  ident3910 = ( ( (  byte_dash_substr596 ) ( (  line_dash_sv3884 ) ,  ( (  i32_dash_size280 ) ( (  from_dash_off3886 ) ) ) ,  ( (  i32_dash_size280 ) ( (  cur_dash_off3907 ) ) ) ) ) );
                                struct Array_2177  temp2179 = ( (struct Array_2177) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"class" ) ,  ( 5 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"external" ) ,  ( 8 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"use" ) ,  ( 3 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"export" ) ,  ( 6 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"let" ) ,  ( 3 ) ) ) } } );
                                struct Array_2177  keywords13911 = ( (  from_dash_listlike2178 ) ( ( &temp2179 ) ) );
                                struct Array_2180  temp2182 = ( (struct Array_2180) { ._arr = { ( (  from_dash_string220 ) ( ( (uint8_t*)"if" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"else" ) ,  ( 4 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"case" ) ,  ( 4 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"for" ) ,  ( 3 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"in" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"while" ) ,  ( 5 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"break" ) ,  ( 5 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"as" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"or" ) ,  ( 2 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"and" ) ,  ( 3 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"not" ) ,  ( 3 ) ) ) , ( (  from_dash_string220 ) ( ( (uint8_t*)"return" ) ,  ( 6 ) ) ) } } );
                                struct Array_2180  keywords23912 = ( (  from_dash_listlike2181 ) ( ( &temp2182 ) ) );
                                struct env2184 envinst2184 = {
                                    .ident3910 =  ident3910 ,
                                };
                                if ( ( (  any2183 ) ( (  keywords13911 ) ,  ( (struct envunion2185){ .fun = (  bool  (*) (  struct env2184*  ,    struct StrView_27  ) )lam2200 , .env =  envinst2184 } ) ) ) ) {
                                    type3909 = ( HighlightType_18_Keyword1 );
                                } else {
                                    struct env2202 envinst2202 = {
                                        .ident3910 =  ident3910 ,
                                    };
                                    if ( ( (  any2201 ) ( (  keywords23912 ) ,  ( (struct envunion2203){ .fun = (  bool  (*) (  struct env2202*  ,    struct StrView_27  ) )lam2218 , .env =  envinst2202 } ) ) ) ) {
                                        type3909 = ( HighlightType_18_Keyword2 );
                                    } else {
                                        if ( ( ( ! (  first_dash_char_dash_uppercase3908 ) ) && (  eq2076 ( ( (  peek2074 ) ( (  sc3885 ) ) ) , ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                            type3909 = ( HighlightType_18_Ident4 );
                                        }
                                    }
                                }
                                struct envunion2220  temp2219 = ( (struct envunion2220){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                                ( temp2219.fun ( &temp2219.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3907 ) , .f_type = (  type3909 ) } ) ) );
                            } else {
                                struct Maybe_1101  dref3917 = ( (  int2221 ) ( (  sc3885 ) ) );
                                if ( dref3917.tag == Maybe_1101_Just_t ) {
                                    int32_t  cur_dash_off3919 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_18  type3920 = ( HighlightType_18_Number );
                                    if ( (  eq1192 ( ( dref3917 .stuff .Maybe_1101_Just_s .field0 ) , (  from_dash_integral365 ( 0 ) ) ) ) ) {
                                        if ( ( (  try_dash_char2075 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  skip_dash_while2222 ) ( (  sc3885 ) ,  (  is_dash_hex2225 ) ) );
                                            int32_t  cur_dash_off3921 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                            struct envunion2227  temp2226 = ( (struct envunion2227){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                                            ( temp2226.fun ( &temp2226.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3921 ) , .f_type = (  type3920 ) } ) ) );
                                            ( (  skip_dash_while2228 ) ( (  sc3885 ) ,  (  is_dash_alpha1405 ) ) );
                                            int32_t  invalid_dash_off3922 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                            if ( ( !  eq696 ( (  cur_dash_off3921 ) , (  invalid_dash_off3922 ) ) ) ) {
                                                struct envunion2230  temp2229 = ( (struct envunion2230){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                                                ( temp2229.fun ( &temp2229.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3921 ) , .f_to = (  invalid_dash_off3922 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                            }
                                        } else {
                                            if ( ( (  try_dash_char2075 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while2231 ) ( (  sc3885 ) ,  (  is_dash_octal2234 ) ) );
                                                int32_t  cur_dash_off3923 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion2236  temp2235 = ( (struct envunion2236){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                                                ( temp2235.fun ( &temp2235.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3923 ) , .f_type = (  type3920 ) } ) ) );
                                                ( (  skip_dash_while2237 ) ( (  sc3885 ) ,  (  is_dash_digit1107 ) ) );
                                                int32_t  invalid_dash_off3924 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq696 ( (  cur_dash_off3923 ) , (  invalid_dash_off3924 ) ) ) ) {
                                                    struct envunion2241  temp2240 = ( (struct envunion2241){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                                                    ( temp2240.fun ( &temp2240.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3923 ) , .f_to = (  invalid_dash_off3924 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char2075 ) ( (  sc3885 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2242 ) ( (  sc3885 ) ,  (  is_dash_binary2245 ) ) );
                                                    int32_t  cur_dash_off3925 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2247  temp2246 = ( (struct envunion2247){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                                                    ( temp2246.fun ( &temp2246.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3925 ) , .f_type = (  type3920 ) } ) ) );
                                                    ( (  skip_dash_while2237 ) ( (  sc3885 ) ,  (  is_dash_digit1107 ) ) );
                                                    int32_t  invalid_dash_off3926 = ( (  size_dash_i32311 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq696 ( (  cur_dash_off3925 ) , (  invalid_dash_off3926 ) ) ) ) {
                                                        struct envunion2249  temp2248 = ( (struct envunion2249){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                                                        ( temp2248.fun ( &temp2248.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3925 ) , .f_to = (  invalid_dash_off3926 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    struct envunion2251  temp2250 = ( (struct envunion2251){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                                                    ( temp2250.fun ( &temp2250.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3919 ) , .f_type = (  type3920 ) } ) ) );
                                                }
                                            }
                                        }
                                    } else {
                                        struct envunion2253  temp2252 = ( (struct envunion2253){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                                        ( temp2252.fun ( &temp2252.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3919 ) , .f_type = (  type3920 ) } ) ) );
                                    }
                                }
                                else {
                                    if ( dref3917.tag == Maybe_1101_None_t ) {
                                        ( (  drop_prime_1117 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

struct envunion2258 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2261 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2260 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2261 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2259 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2260 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2264 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2266 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   markdown2255 (   struct env103* env ,    struct List_15 *  hls3929 ,    struct StrView_27  line_dash_sv3931 ) {
    struct Scanner_1089  temp2256 = ( (  mk_dash_from_dash_str1091 ) ( (  line_dash_sv3931 ) ) );
    struct Scanner_1089 *  sc3932 = ( &temp2256 );
    if ( ( (  try_dash_char2075 ) ( (  sc3932 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
        struct envunion2258  temp2257 = ( (struct envunion2258){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
        ( temp2257.fun ( &temp2257.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_integral56 ( 0 ) ) , .f_to = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  line_dash_sv3931 ) ) ) ) ) , .f_type = ( HighlightType_18_Keyword1 ) } ) ) );
    } else {
        ( (  skip_dash_while2259 ) ( (  sc3932 ) ,  (  is_dash_whitespace414 ) ) );
        int32_t  from_dash_off3933 = ( (  size_dash_i32311 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
        if ( ( (  try_dash_char2075 ) ( (  sc3932 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) {
            int32_t  to_dash_off3934 = ( (  size_dash_i32311 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
            struct envunion104  temp2262 = ( (struct envunion104){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
            ( temp2262.fun ( &temp2262.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3933 ) , .f_to = (  to_dash_off3934 ) , .f_type = ( HighlightType_18_Special1 ) } ) ) );
            ( (  skip_dash_while2259 ) ( (  sc3932 ) ,  (  is_dash_whitespace414 ) ) );
            int32_t  from_dash_off3935 = ( (  size_dash_i32311 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  matches_dash_str2142 ) ( (  sc3932 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"[ ]" ) ,  ( 3 ) ) ) ) ) ) {
                int32_t  to_dash_off3936 = ( (  size_dash_i32311 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
                struct envunion2264  temp2263 = ( (struct envunion2264){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                ( temp2263.fun ( &temp2263.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3935 ) , .f_to = (  to_dash_off3936 ) , .f_type = ( HighlightType_18_Keyword1 ) } ) ) );
            } else {
                if ( ( ( (  matches_dash_str2142 ) ( (  sc3932 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"[x]" ) ,  ( 3 ) ) ) ) ) || ( (  matches_dash_str2142 ) ( (  sc3932 ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"[X]" ) ,  ( 3 ) ) ) ) ) ) ) {
                    int32_t  to_dash_off3937 = ( (  size_dash_i32311 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2266  temp2265 = ( (struct envunion2266){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                    ( temp2265.fun ( &temp2265.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3935 ) , .f_to = (  to_dash_off3937 ) , .f_type = ( HighlightType_18_Keyword2 ) } ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_351   char_dash_satisfies_prime_2271 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2270 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2271 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  struct Maybe_351   char_dash_satisfies_prime_2274 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2273 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2274 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2272 (    struct Scanner_1089 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2273 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   gcode_dash_keyword_dash_char2275 (    struct Char_65  c3940 ) {
    return ( ( (  is_dash_not_dash_whitespace1745 ) ( (  c3940 ) ) ) && ( !  eq360 ( (  c3940 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) );
}

static  uint8_t   char_dash_case_dash_diff2277 (  ) {
    return (  op_dash_sub1066 ( ( (  char_dash_u8671 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) , ( (  char_dash_u8671 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Char_65   to_dash_lower2276 (    struct Char_65  c1528 ) {
    if ( ( (  is_dash_upper2176 ) ( (  c1528 ) ) ) ) {
        ( (  assert802 ) ( (  eq283 ( ( (  c1528 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"(to-lower) utf8 not yet supported." ) ,  ( 34 ) ) ) ) );
        return ( (  from_dash_u81866 ) ( (  op_dash_add1067 ( ( (  char_dash_u8671 ) ( (  c1528 ) ) ) , ( (  char_dash_case_dash_diff2277 ) ( ) ) ) ) ) );
    }
    return (  c1528 );
}

struct StrConcat_2283 {
    struct StrView_27  field0;
    struct StrConcat_769  field1;
};

static struct StrConcat_2283 StrConcat_2283_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_769  field1 ) {
    return ( struct StrConcat_2283 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2282 {
    struct StrConcat_2283  field0;
    struct Char_65  field1;
};

static struct StrConcat_2282 StrConcat_2282_StrConcat (  struct StrConcat_2283  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2282 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2284 (    struct StrConcat_2283  self1302 ) {
    struct StrConcat_2283  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str776 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2281 (    struct StrConcat_2282  self1302 ) {
    struct StrConcat_2282  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str2284 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str317 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic2280 (    struct StrConcat_769  errmsg1343 ) {
    ( (  print_dash_str2281 ) ( ( ( StrConcat_2282_StrConcat ) ( ( ( StrConcat_2283_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Char_65   undefined2285 (  ) {
    struct Char_65  temp2286;
    return (  temp2286 );
}

static  struct Char_65   or_dash_fail2279 (    struct Maybe_351  x1353 ,    struct StrConcat_769  errmsg1355 ) {
    struct Maybe_351  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_351_None_t ) {
        ( (  panic2280 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2285 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_351_Just_t ) {
            return ( dref1356 .stuff .Maybe_351_Just_s .field0 );
        }
    }
}

static  struct Char_65   char_dash_at_dash_offset2278 (    struct StrView_27  self2627 ,    size_t  i2629 ) {
    return ( (  or_dash_fail2279 ) ( ( (  head1408 ) ( ( (  chars295 ) ( ( (struct StrView_27) { .f_contents = ( (  from585 ) ( ( (  self2627 ) .f_contents ) ,  (  i2629 ) ) ) } ) ) ) ) ) ,  ( ( StrConcat_769_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"(StrView.char-at-offset) off too great for this StrView (" ) ,  ( 57 ) ) ) ,  (  i2629 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2289 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2291 (    struct Scanner_1089 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2290 (    struct Scanner_1089 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2291 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  bool   lam2292 (    struct Char_65  c3954 ) {
    return ( !  eq360 ( (  c3954 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) );
}

struct envunion2294 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   gcode2268 (   struct env105* env ,    struct List_15 *  hls3943 ,    struct StrView_27  line_dash_sv3945 ) {
    struct Scanner_1089  temp2269 = ( (  mk_dash_from_dash_str1091 ) ( (  line_dash_sv3945 ) ) );
    struct Scanner_1089 *  sc3946 = ( &temp2269 );
    ( (  skip_dash_while2259 ) ( (  sc3946 ) ,  (  is_dash_whitespace414 ) ) );
    int32_t  first_dash_from_dash_off3947 = ( (  size_dash_i32311 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
    if ( ( (  char_dash_satisfies2270 ) ( (  sc3946 ) ,  (  is_dash_alphanumeric1404 ) ) ) ) {
        ( (  skip_dash_while2272 ) ( (  sc3946 ) ,  (  gcode_dash_keyword_dash_char2275 ) ) );
        int32_t  first_dash_to_dash_off3948 = ( (  size_dash_i32311 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
        enum HighlightType_18  type3949 = ( HighlightType_18_Invalid );
        struct Char_65  first_dash_char3950 = ( (  to_dash_lower2276 ) ( ( (  char_dash_at_dash_offset2278 ) ( (  line_dash_sv3945 ) ,  ( (  i32_dash_size280 ) ( (  first_dash_from_dash_off3947 ) ) ) ) ) ) );
        if ( (  eq360 ( (  first_dash_char3950 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) {
            type3949 = ( HighlightType_18_Keyword1 );
        } else {
            if ( (  eq360 ( (  first_dash_char3950 ) , ( (  from_dash_charlike338 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                type3949 = ( HighlightType_18_Ident1 );
            }
        }
        struct envunion106  temp2287 = ( (struct envunion106){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
        ( temp2287.fun ( &temp2287.env ,  (  hls3943 ) ,  ( (struct Highlight_17) { .f_from = (  first_dash_from_dash_off3947 ) , .f_to = (  first_dash_to_dash_off3948 ) , .f_type = (  type3949 ) } ) ) );
        ( (  skip_dash_while2259 ) ( (  sc3946 ) ,  (  is_dash_whitespace414 ) ) );
        int32_t  from_dash_off3951 = ( (  size_dash_i32311 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
        while ( ( (  char_dash_satisfies2270 ) ( (  sc3946 ) ,  (  is_dash_alphanumeric1404 ) ) ) ) {
            ( (  skip_dash_while2272 ) ( (  sc3946 ) ,  (  gcode_dash_keyword_dash_char2275 ) ) );
            int32_t  to_dash_off3952 = ( (  size_dash_i32311 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
            ( (  skip_dash_while2259 ) ( (  sc3946 ) ,  (  is_dash_whitespace414 ) ) );
            struct envunion2289  temp2288 = ( (struct envunion2289){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
            ( temp2288.fun ( &temp2288.env ,  (  hls3943 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3951 ) , .f_to = (  to_dash_off3952 ) , .f_type = ( HighlightType_18_Ident4 ) } ) ) );
        }
    }
    while ( ( (  char_dash_satisfies2290 ) ( (  sc3946 ) ,  (  lam2292 ) ) ) ) {
    }
    int32_t  from_dash_off3955 = ( (  size_dash_i32311 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
    if ( ( (  try_dash_char2075 ) ( (  sc3946 ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ) {
        struct envunion2294  temp2293 = ( (struct envunion2294){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
        ( temp2293.fun ( &temp2293.env ,  (  hls3943 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3955 ) , .f_to = ( (  size_dash_i32311 ) ( ( (  num_dash_bytes396 ) ( (  line_dash_sv3945 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
    }
    return ( Unit_8_Unit );
}

struct Tuple2_2299 {
    struct Char_65  field0;
    enum HighlightType_18  field1;
};

static struct Tuple2_2299 Tuple2_2299_Tuple2 (  struct Char_65  field0 ,  enum HighlightType_18  field1 ) {
    return ( struct Tuple2_2299 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_2298 {
    struct Tuple2_2299 *  f_ptr;
    size_t  f_count;
};

struct Array_2301 {
    struct Tuple2_2299 _arr [8];
};

static  struct Tuple2_2299 *   cast_dash_ptr2302 (    struct Array_2301 *  p398 ) {
    return ( (struct Tuple2_2299 * ) (  p398 ) );
}

static  struct Slice_2298   from_dash_listlike2300 (    struct Array_2301 *  arr2200 ) {
    return ( (struct Slice_2298) { .f_ptr = ( (  cast_dash_ptr2302 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size280 ) ( ( 8 ) ) ) } );
}

struct env2304 {
    ;
    struct Slice_2298  bf_dash_chars3962;
    ;
    ;
    ;
};

struct envunion2305 {
    bool  (*fun) (  struct env2304*  ,    struct Char_65  );
    struct env2304 env;
};

struct SliceIter_2309 {
    struct Slice_2298  f_slice;
    size_t  f_current_dash_offset;
};

struct Map_2308 {
    struct SliceIter_2309  field0;
    struct Char_65 (*  field1 )(    struct Tuple2_2299  );
};

static struct Map_2308 Map_2308_Map (  struct SliceIter_2309  field0 ,  struct Char_65 (*  field1 )(    struct Tuple2_2299  ) ) {
    return ( struct Map_2308 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2310 {
    ;
    struct Char_65  c3964;
};

struct envunion2311 {
    bool  (*fun) (  struct env2310*  ,    struct Char_65  );
    struct env2310 env;
};

struct env2313 {
    struct envunion2311  fun1160;
};

struct envunion2314 {
    bool  (*fun) (  struct env2313*  ,    struct Char_65  ,    bool  );
    struct env2313 env;
};

static  struct Map_2308   into_dash_iter2315 (    struct Map_2308  self804 ) {
    return (  self804 );
}

struct Maybe_2317 {
    enum {
        Maybe_2317_None_t,
        Maybe_2317_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2299  field0;
        } Maybe_2317_Just_s;
    } stuff;
};

static struct Maybe_2317 Maybe_2317_Just (  struct Tuple2_2299  field0 ) {
    return ( struct Maybe_2317 ) { .tag = Maybe_2317_Just_t, .stuff = { .Maybe_2317_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_2299 *   offset_dash_ptr2319 (    struct Tuple2_2299 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_2299  temp2320;
    return ( (struct Tuple2_2299 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2320 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2317   next2318 (    struct SliceIter_2309 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2317) { .tag = Maybe_2317_None_t } );
    }
    struct Tuple2_2299  elem2258 = ( * ( (  offset_dash_ptr2319 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2317_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_351   next2316 (    struct Map_2308 *  dref806 ) {
    struct Maybe_2317  dref809 = ( (  next2318 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_2317_None_t ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_2317_Just_t ) {
            return ( ( Maybe_351_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_2317_Just_s .field0 ) ) ) ) );
        }
    }
}

static  bool   reduce2312 (    struct Map_2308  iterable1118 ,    bool  base1120 ,   struct envunion2314  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Map_2308  it1124 = ( (  into_dash_iter2315 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next2316 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                struct envunion2314  temp2321 = (  fun1122 );
                x1123 = ( temp2321.fun ( &temp2321.env ,  ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2322 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2322);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2323;
    return (  temp2323 );
}

static  bool   lam2324 (   struct env2313* env ,    struct Char_65  e1162 ,    bool  x1164 ) {
    struct envunion2311  temp2325 = ( env->fun1160 );
    return ( ( temp2325.fun ( &temp2325.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2307 (    struct Map_2308  it1158 ,   struct envunion2311  fun1160 ) {
    struct env2313 envinst2313 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2312 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2314){ .fun = (  bool  (*) (  struct env2313*  ,    struct Char_65  ,    bool  ) )lam2324 , .env =  envinst2313 } ) ) );
}

static  struct SliceIter_2309   into_dash_iter2327 (    struct Slice_2298  self2250 ) {
    return ( (struct SliceIter_2309) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Map_2308   map2326 (    struct Slice_2298  iterable813 ,    struct Char_65 (*  fun815 )(    struct Tuple2_2299  ) ) {
    struct SliceIter_2309  it816 = ( (  into_dash_iter2327 ) ( (  iterable813 ) ) );
    return ( ( Map_2308_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct Char_65   fst2328 (    struct Tuple2_2299  dref1563 ) {
    return ( dref1563 .field0 );
}

static  bool   lam2329 (   struct env2310* env ,    struct Char_65  eq3966 ) {
    return (  eq360 ( (  eq3966 ) , ( env->c3964 ) ) );
}

static  bool   lam2306 (   struct env2304* env ,    struct Char_65  c3964 ) {
    struct env2310 envinst2310 = {
        .c3964 =  c3964 ,
    };
    return ( (  any2307 ) ( ( (  map2326 ) ( ( env->bf_dash_chars3962 ) ,  (  fst2328 ) ) ) ,  ( (struct envunion2311){ .fun = (  bool  (*) (  struct env2310*  ,    struct Char_65  ) )lam2329 , .env =  envinst2310 } ) ) );
}

struct env2331 {
    ;
    struct Slice_2298  bf_dash_chars3962;
    ;
    ;
    ;
};

struct envunion2332 {
    bool  (*fun) (  struct env2331*  ,    struct Char_65  );
    struct env2331 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2330 (    struct Scanner_1089 *  sc3429 ,   struct envunion2332  condition3431 ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        struct envunion2332  temp2333 = (  condition3431 );
        if ( ( temp2333.fun ( &temp2333.env ,  ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

struct env2336 {
    struct Char_65  c3970;
    ;
};

struct envunion2337 {
    bool  (*fun) (  struct env2336*  ,    struct Char_65  );
    struct env2336 env;
};

struct env2339 {
    struct envunion2337  fun1160;
};

struct envunion2340 {
    bool  (*fun) (  struct env2339*  ,    struct Char_65  ,    bool  );
    struct env2339 env;
};

static  bool   reduce2338 (    struct Map_2308  iterable1118 ,    bool  base1120 ,   struct envunion2340  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Map_2308  it1124 = ( (  into_dash_iter2315 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next2316 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                struct envunion2340  temp2341 = (  fun1122 );
                x1123 = ( temp2341.fun ( &temp2341.env ,  ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2342 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2342);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2343;
    return (  temp2343 );
}

static  bool   lam2344 (   struct env2339* env ,    struct Char_65  e1162 ,    bool  x1164 ) {
    struct envunion2337  temp2345 = ( env->fun1160 );
    return ( ( temp2345.fun ( &temp2345.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2335 (    struct Map_2308  it1158 ,   struct envunion2337  fun1160 ) {
    struct env2339 envinst2339 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2338 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2340){ .fun = (  bool  (*) (  struct env2339*  ,    struct Char_65  ,    bool  ) )lam2344 , .env =  envinst2339 } ) ) );
}

static  bool   lam2346 (   struct env2336* env ,    struct Char_65  ec3972 ) {
    return (  eq360 ( (  ec3972 ) , ( env->c3970 ) ) );
}

static  bool   lam2334 (   struct env2331* env ,    struct Char_65  c3970 ) {
    struct env2336 envinst2336 = {
        .c3970 =  c3970 ,
    };
    return ( (  any2335 ) ( ( (  map2326 ) ( ( env->bf_dash_chars3962 ) ,  (  fst2328 ) ) ) ,  ( (struct envunion2337){ .fun = (  bool  (*) (  struct env2336*  ,    struct Char_65  ) )lam2346 , .env =  envinst2336 } ) ) );
}

static  enum HighlightType_18   snd2347 (    struct Tuple2_2299  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tuple2_2299   undefined2349 (  ) {
    struct Tuple2_2299  temp2350;
    return (  temp2350 );
}

static  struct Tuple2_2299   or_dash_fail2348 (    struct Maybe_2317  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_2317  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_2317_None_t ) {
        ( (  panic850 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2349 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_2317_Just_t ) {
            return ( dref1356 .stuff .Maybe_2317_Just_s .field0 );
        }
    }
}

struct env2353 {
    ;
    struct Char_65  cc3974;
};

struct envunion2354 {
    bool  (*fun) (  struct env2353*  ,    struct Tuple2_2299  );
    struct env2353 env;
};

struct Filter_2352 {
    struct SliceIter_2309  f_og;
    struct envunion2354  f_fun;
};

static  struct Maybe_2317   next2355 (    struct Filter_2352 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_2317  dref842 = ( (  next2318 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_2317_None_t ) {
            return ( (struct Maybe_2317) { .tag = Maybe_2317_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_2317_Just_t ) {
                struct envunion2354  temp2356 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp2356.fun ( &temp2356.env ,  ( dref842 .stuff .Maybe_2317_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2317_Just ) ( ( dref842 .stuff .Maybe_2317_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2317  temp2357;
    return (  temp2357 );
}

static  struct Filter_2352   into_dash_iter2359 (    struct Filter_2352  self838 ) {
    return (  self838 );
}

static  struct Maybe_2317   head2351 (    struct Filter_2352  it1167 ) {
    struct Filter_2352  temp2358 = ( (  into_dash_iter2359 ) ( (  it1167 ) ) );
    return ( (  next2355 ) ( ( &temp2358 ) ) );
}

static  struct Filter_2352   filter2360 (    struct Slice_2298  iterable846 ,   struct envunion2354  fun848 ) {
    struct SliceIter_2309  it849 = ( (  into_dash_iter2327 ) ( (  iterable846 ) ) );
    return ( (struct Filter_2352) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   lam2361 (   struct env2353* env ,    struct Tuple2_2299  dref3975 ) {
    return (  eq360 ( ( dref3975 .field0 ) , ( env->cc3974 ) ) );
}

struct env2364 {
    struct envunion2305  is_dash_bf_dash_char3967;
};

struct envunion2365 {
    bool  (*fun) (  struct env2364*  ,    struct Char_65  );
    struct env2364 env;
};

static  struct Maybe_351   char_dash_satisfies_prime_2367 (    struct Scanner_1089 *  sc3429 ,   struct envunion2365  condition3431 ) {
    struct Maybe_351  dref3432 = ( (  head1408 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_351_Just_t ) {
        struct envunion2365  temp2368 = (  condition3431 );
        if ( ( temp2368.fun ( &temp2368.env ,  ( dref3432 .stuff .Maybe_351_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1117 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  bool   char_dash_satisfies2366 (    struct Scanner_1089 *  sc3436 ,   struct envunion2365  condition3438 ) {
    return ( (  is_dash_just2079 ) ( ( (  char_dash_satisfies_prime_2367 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2363 (    struct Scanner_1089 *  sc3452 ,   struct envunion2365  condition3454 ) {
    while ( ( (  char_dash_satisfies2366 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2369 (   struct env2364* env ,    struct Char_65  c3981 ) {
    struct envunion2305  temp2370 = ( env->is_dash_bf_dash_char3967 );
    return ( ! ( temp2370.fun ( &temp2370.env ,  (  c3981 ) ) ) );
}

struct envunion2372 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   brainfuck2296 (   struct env107* env ,    struct List_15 *  hls3958 ,    struct StrView_27  line_dash_sv3960 ) {
    struct Scanner_1089  temp2297 = ( (  mk_dash_from_dash_str1091 ) ( (  line_dash_sv3960 ) ) );
    struct Scanner_1089 *  sc3961 = ( &temp2297 );
    ( (  skip_dash_while2259 ) ( (  sc3961 ) ,  (  is_dash_whitespace414 ) ) );
    struct Array_2301  temp2303 = ( (struct Array_2301) { ._arr = { ( ( Tuple2_2299_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special1 ) ) ) , ( ( Tuple2_2299_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special1 ) ) ) , ( ( Tuple2_2299_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"+" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special2 ) ) ) , ( ( Tuple2_2299_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special2 ) ) ) , ( ( Tuple2_2299_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special3 ) ) ) , ( ( Tuple2_2299_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special3 ) ) ) , ( ( Tuple2_2299_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Keyword1 ) ) ) , ( ( Tuple2_2299_Tuple2 ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Keyword2 ) ) ) } } );
    struct Slice_2298  bf_dash_chars3962 = ( ( (  from_dash_listlike2300 ) ( ( &temp2303 ) ) ) );
    struct env2304 envinst2304 = {
        .bf_dash_chars3962 =  bf_dash_chars3962 ,
    };
    struct envunion2305  is_dash_bf_dash_char3967 = ( (struct envunion2305){ .fun = (  bool  (*) (  struct env2304*  ,    struct Char_65  ) )lam2306 , .env =  envinst2304 } );
    while ( ( ! ( (  null2071 ) ( (  sc3961 ) ) ) ) ) {
        while ( ( true ) ) {
            int32_t  from_dash_off3968 = ( (  size_dash_i32311 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
            struct env2331 envinst2331 = {
                .bf_dash_chars3962 =  bf_dash_chars3962 ,
            };
            struct Maybe_351  dref3973 = ( (  char_dash_satisfies_prime_2330 ) ( (  sc3961 ) ,  ( (struct envunion2332){ .fun = (  bool  (*) (  struct env2331*  ,    struct Char_65  ) )lam2334 , .env =  envinst2331 } ) ) );
            if ( dref3973.tag == Maybe_351_Just_t ) {
                struct env2353 envinst2353 = {
                    .cc3974 = dref3973 .stuff .Maybe_351_Just_s .field0 ,
                };
                enum HighlightType_18  hl3977 = ( (  snd2347 ) ( ( (  or_dash_fail2348 ) ( ( (  head2351 ) ( ( (  filter2360 ) ( (  bf_dash_chars3962 ) ,  ( (struct envunion2354){ .fun = (  bool  (*) (  struct env2353*  ,    struct Tuple2_2299  ) )lam2361 , .env =  envinst2353 } ) ) ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"could not find matched char (it should not happen)" ) ,  ( 50 ) ) ) ) ) ) );
                int32_t  to_dash_off3978 = ( (  size_dash_i32311 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
                struct envunion108  temp2362 = ( (struct envunion108){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
                ( temp2362.fun ( &temp2362.env ,  (  hls3958 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3968 ) , .f_to = (  to_dash_off3978 ) , .f_type = (  hl3977 ) } ) ) );
            }
            else {
                if ( dref3973.tag == Maybe_351_None_t ) {
                    break;
                }
            }
        }
        int32_t  from_dash_off3979 = ( (  size_dash_i32311 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
        struct env2364 envinst2364 = {
            .is_dash_bf_dash_char3967 =  is_dash_bf_dash_char3967 ,
        };
        ( (  skip_dash_while2363 ) ( (  sc3961 ) ,  ( (struct envunion2365){ .fun = (  bool  (*) (  struct env2364*  ,    struct Char_65  ) )lam2369 , .env =  envinst2364 } ) ) );
        int32_t  to_dash_off3982 = ( (  size_dash_i32311 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
        if ( (  cmp173 ( (  to_dash_off3982 ) , (  from_dash_off3979 ) ) == 2 ) ) {
            struct envunion2372  temp2371 = ( (struct envunion2372){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2083 , .env =  env->envinst35 } );
            ( temp2371.fun ( &temp2371.env ,  (  hls3958 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3979 ) , .f_to = (  to_dash_off3982 ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line2066 (   struct env147* env ,    struct TextBuf_117 *  self4250 ,    struct Line_12 *  line4252 ) {
    if ( ( ! ( ( * (  line4252 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_15 *  hls4253 = ( & ( ( * (  line4252 ) ) .f_highlights ) );
    ( (  trim2067 ) ( (  hls4253 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv4254 = ( (  from_dash_bytes298 ) ( ( (  to_dash_slice299 ) ( ( ( * (  line4252 ) ) .f_line ) ) ) ) );
    enum Filetype_120  dref4255 = ( ( * (  self4250 ) ) .f_filetype );
    switch (  dref4255 ) {
        case Filetype_120_Text : {
            break;
        }
        case Filetype_120_KC : {
            struct envunion149  temp2068 = ( (struct envunion149){ .fun = (  enum Unit_8  (*) (  struct env101*  ,    struct List_15 *  ,    struct StrView_27  ) )kc2069 , .env =  env->envinst101 } );
            ( temp2068.fun ( &temp2068.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
        case Filetype_120_Markdown : {
            struct envunion148  temp2254 = ( (struct envunion148){ .fun = (  enum Unit_8  (*) (  struct env103*  ,    struct List_15 *  ,    struct StrView_27  ) )markdown2255 , .env =  env->envinst103 } );
            ( temp2254.fun ( &temp2254.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
        case Filetype_120_GCode : {
            struct envunion151  temp2267 = ( (struct envunion151){ .fun = (  enum Unit_8  (*) (  struct env105*  ,    struct List_15 *  ,    struct StrView_27  ) )gcode2268 , .env =  env->envinst105 } );
            ( temp2267.fun ( &temp2267.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
        case Filetype_120_Brainfuck : {
            struct envunion150  temp2295 = ( (struct envunion150){ .fun = (  enum Unit_8  (*) (  struct env107*  ,    struct List_15 *  ,    struct StrView_27  ) )brainfuck2296 , .env =  env->envinst107 } );
            ( temp2295.fun ( &temp2295.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
    }
    (*  line4252 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_16   subslice2375 (    struct Slice_16  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Highlight_17 *  begin_dash_ptr2209 = ( (  offset_dash_ptr2097 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub458 ( ( (  min587 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_2101   into_dash_iter2374 (    struct List_15  self2433 ) {
    return ( (  into_dash_iter2110 ) ( ( (  subslice2375 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  bool   between2377 (    int32_t  c1377 ,    int32_t  l1379 ,    int32_t  r1381 ) {
    int32_t  from1382 = ( (  min793 ) ( (  l1379 ) ,  (  r1381 ) ) );
    int32_t  to1383 = ( (  max374 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp173 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp173 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  struct Maybe_224   highlight_dash_at2064 (   struct env152* env ,    struct TextBuf_117 *  self4258 ,    struct Pos_26  pos4260 ) {
    struct Line_12 *  line4261 = ( (  get_dash_ptr301 ) ( ( & ( ( * (  self4258 ) ) .f_buf ) ) ,  ( (  i32_dash_size280 ) ( ( (  pos4260 ) .f_line ) ) ) ) );
    struct envunion153  temp2065 = ( (struct envunion153){ .fun = (  enum Unit_8  (*) (  struct env147*  ,    struct TextBuf_117 *  ,    struct Line_12 *  ) )recompute_dash_highlights_dash_at_dash_line2066 , .env =  env->envinst147 } );
    ( temp2065.fun ( &temp2065.env ,  (  self4258 ) ,  (  line4261 ) ) );
    struct SliceIter_2101  temp2373 =  into_dash_iter2374 ( ( ( * (  line4261 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2106  __cond2376 =  next2107 (&temp2373);
        if (  __cond2376 .tag == 0 ) {
            break;
        }
        struct Highlight_17  hl4263 =  __cond2376 .stuff .Maybe_2106_Just_s .field0;
        if ( ( (  between2377 ) ( ( (  pos4260 ) .f_bi ) ,  ( (  hl4263 ) .f_from ) ,  (  op_dash_sub180 ( ( (  hl4263 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_224_Just ) ( ( (  hl4263 ) .f_type ) ) );
        }
        if ( (  cmp173 ( ( (  pos4260 ) .f_bi ) , ( (  hl4263 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_224) { .tag = Maybe_224_None_t } );
        }
    }
    return ( (struct Maybe_224) { .tag = Maybe_224_None_t } );
}

struct Maybe_2381 {
    enum {
        Maybe_2381_None_t,
        Maybe_2381_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_191  field0;
        } Maybe_2381_Just_s;
    } stuff;
};

static struct Maybe_2381 Maybe_2381_Just (  struct HighlightColors_191  field0 ) {
    return ( struct Maybe_2381 ) { .tag = Maybe_2381_Just_t, .stuff = { .Maybe_2381_Just_s = { .field0 = field0 } } };
};

struct env2382 {
    ;
    struct Theme_188 *  theme4317;
};

struct envunion2383 {
    struct Colors_189  (*fun) (  struct env2382*  ,    struct HighlightColors_191  );
    struct env2382 env;
};

static  struct Colors_189   maybe2380 (    struct Maybe_2381  x1592 ,   struct envunion2383  fun1594 ,    struct Colors_189  default1596 ) {
    struct envunion2383  temp2384 = (  fun1594 );
    return ( {  struct Maybe_2381  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_2381_Just_t ? ( temp2384.fun ( &temp2384.env ,  ( dref1597 .stuff .Maybe_2381_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

struct SliceIter_2387 {
    struct Slice_190  f_slice;
    size_t  f_current_dash_offset;
};

struct env2388 {
    ;
    enum HighlightType_18  hltype4319;
};

struct envunion2389 {
    bool  (*fun) (  struct env2388*  ,    struct HighlightColors_191  );
    struct env2388 env;
};

struct Filter_2386 {
    struct SliceIter_2387  f_og;
    struct envunion2389  f_fun;
};

static  struct HighlightColors_191 *   offset_dash_ptr2392 (    struct HighlightColors_191 *  x377 ,    int64_t  count379 ) {
    struct HighlightColors_191  temp2393;
    return ( (struct HighlightColors_191 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul347 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2393 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2381   next2391 (    struct SliceIter_2387 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2381) { .tag = Maybe_2381_None_t } );
    }
    struct HighlightColors_191  elem2258 = ( * ( (  offset_dash_ptr2392 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2381_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2381   next2390 (    struct Filter_2386 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_2381  dref842 = ( (  next2391 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_2381_None_t ) {
            return ( (struct Maybe_2381) { .tag = Maybe_2381_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_2381_Just_t ) {
                struct envunion2389  temp2394 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp2394.fun ( &temp2394.env ,  ( dref842 .stuff .Maybe_2381_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2381_Just ) ( ( dref842 .stuff .Maybe_2381_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2381  temp2395;
    return (  temp2395 );
}

static  struct Filter_2386   into_dash_iter2397 (    struct Filter_2386  self838 ) {
    return (  self838 );
}

static  struct Maybe_2381   head2385 (    struct Filter_2386  it1167 ) {
    struct Filter_2386  temp2396 = ( (  into_dash_iter2397 ) ( (  it1167 ) ) );
    return ( (  next2390 ) ( ( &temp2396 ) ) );
}

static  struct SliceIter_2387   into_dash_iter2399 (    struct Slice_190  self2250 ) {
    return ( (struct SliceIter_2387) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2386   filter2398 (    struct Slice_190  iterable846 ,   struct envunion2389  fun848 ) {
    struct SliceIter_2387  it849 = ( (  into_dash_iter2399 ) ( (  iterable846 ) ) );
    return ( (struct Filter_2386) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   eq2402 (    uint32_t  l120 ,    uint32_t  r122 ) {
    return ( (  l120 ) == (  r122 ) );
}

static  enum HighlightType_18 *   cast2405 (    uint32_t *  x395 ) {
    return ( (enum HighlightType_18 * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2403 (    enum HighlightType_18  x651 ) {
    uint32_t  temp2404 = ( (  zeroed945 ) ( ) );
    uint32_t *  y652 = ( &temp2404 );
    enum HighlightType_18 *  yp653 = ( (  cast2405 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  bool   eq2401 (    enum HighlightType_18  l3876 ,    enum HighlightType_18  r3878 ) {
    return (  eq2402 ( ( ( (  cast_dash_on_dash_zeroed2403 ) ( (  l3876 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2403 ) ( (  r3878 ) ) ) ) );
}

static  bool   lam2400 (   struct env2388* env ,    struct HighlightColors_191  hlc4321 ) {
    return (  eq2401 ( ( (  hlc4321 ) .f_type ) , ( env->hltype4319 ) ) );
}

static  struct Color_154   or_dash_else2407 (    struct Maybe_192  self1360 ,    struct Color_154  alt1362 ) {
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

static  struct Colors_189   lam2406 (   struct env2382* env ,    struct HighlightColors_191  hlc4323 ) {
    return ( (struct Colors_189) { .f_fg = ( (  hlc4323 ) .f_fg ) , .f_bg = ( (  or_dash_else2407 ) ( ( (  hlc4323 ) .f_bg ) ,  ( ( ( * ( env->theme4317 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_189   find_dash_colors_dash_for_dash_highlight2379 (    struct Theme_188 *  theme4317 ,    enum HighlightType_18  hltype4319 ) {
    struct env2388 envinst2388 = {
        .hltype4319 =  hltype4319 ,
    };
    struct env2382 envinst2382 = {
        .theme4317 =  theme4317 ,
    };
    return ( (  maybe2380 ) ( ( (  head2385 ) ( ( (  filter2398 ) ( ( ( * (  theme4317 ) ) .f_highlights ) ,  ( (struct envunion2389){ .fun = (  bool  (*) (  struct env2388*  ,    struct HighlightColors_191  ) )lam2400 , .env =  envinst2388 } ) ) ) ) ) ,  ( (struct envunion2383){ .fun = (  struct Colors_189  (*) (  struct env2382*  ,    struct HighlightColors_191  ) )lam2406 , .env =  envinst2382 } ) ,  ( ( * (  theme4317 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2378 (   struct env2060* env ,    enum HighlightType_18  type4450 ) {
    ( (  set_dash_colors2025 ) ( ( env->screen4420 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2379 ) ( ( env->theme4427 ) ,  (  type4450 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2411 (  ) {
    ( (  println1411 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1773 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2410 (    enum Mode_242  mode4338 ) {
    return ( {  enum Mode_242  dref4339 = (  mode4338 ) ;  dref4339 == Mode_242_Normal ? ( (  from_dash_string220 ) ( ( (uint8_t*)"NOR" ) ,  ( 3 ) ) ) :  dref4339 == Mode_242_Insert ? ( (  from_dash_string220 ) ( ( (uint8_t*)"INS" ) ,  ( 3 ) ) ) :  dref4339 == Mode_242_Select ? ( (  from_dash_string220 ) ( ( (uint8_t*)"SEL" ) ,  ( 3 ) ) ) : ( (  todo2411 ) ( ) ) ; } );
}

struct StrConcat_2414 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2414 StrConcat_2414_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2414 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2413 {
    struct StrConcat_2414  field0;
    struct Char_65  field1;
};

static struct StrConcat_2413 StrConcat_2413_StrConcat (  struct StrConcat_2414  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2413 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2417 {
    struct AppendIter_1158  f_left;
    struct StrViewIter_293  f_right;
};

struct StrConcatIter_2416 {
    struct StrConcatIter_2417  f_left;
    struct AppendIter_1158  f_right;
};

static  struct StrConcatIter_2416   into_dash_iter2418 (    struct StrConcatIter_2416  self1290 ) {
    return (  self1290 );
}

static  struct StrConcatIter_2417   into_dash_iter2422 (    struct StrConcat_2414  dref1297 ) {
    return ( (struct StrConcatIter_2417) { .f_left = ( (  chars1193 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2417   chars2421 (    struct StrConcat_2414  self1308 ) {
    return ( (  into_dash_iter2422 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2416   into_dash_iter2420 (    struct StrConcat_2413  dref1297 ) {
    return ( (struct StrConcatIter_2416) { .f_left = ( (  chars2421 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2416   chars2419 (    struct StrConcat_2413  self1308 ) {
    return ( (  into_dash_iter2420 ) ( (  self1308 ) ) );
}

static  struct Maybe_351   next2425 (    struct StrConcatIter_2417 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2424 (    struct StrConcatIter_2416 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2425 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2412 (    struct Screen_447 *  screen3793 ,    struct StrConcat_2413  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1596 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min793 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2416  temp2415 =  into_dash_iter2418 ( ( (  chars2419 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2423 =  next2424 (&temp2415);
        if (  __cond2423 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2423 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2041 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1999 (   struct env222* env ,    struct Screen_447 *  screen4420 ,    struct Pane_241 *  pane4422 ,    struct ScreenDims_450  sd4424 ,    struct Config_272 *  cfg4426 ) {
    struct Theme_188 *  theme4427 = ( ( * (  cfg4426 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4428 = ( ( * (  cfg4426 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4429 = ( ( * (  cfg4426 ) ) .f_relative_dash_line_dash_numbers );
    int32_t  max_dash_line_dash_num_dash_chars4430 = ( (  size_dash_i32311 ) ( ( (  count2000 ) ( ( (  chars2016 ) ( ( (  num_dash_lines1231 ) ( ( ( * (  pane4422 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4431 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4432 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4433 = ( (  display_dash_line_dash_numbers4428 ) ? (  op_dash_add175 ( (  op_dash_add175 ( (  max_dash_line_dash_num_dash_chars4430 ) , (  num_dash_front_dash_margin4431 ) ) ) , (  num_dash_back_dash_margin4432 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct ScreenDims_450  temp2022 = (  sd4424 );
    temp2022 .  f_from_dash_sx = (  op_dash_add175 ( ( (  sd4424 ) .f_from_dash_sx ) , (  total_dash_margin4433 ) ) );
    ( (  update_dash_screen_dash_offset2019 ) ( (  pane4422 ) ,  ( temp2022 ) ) );
    struct ScreenCursorOffset_243  sc_dash_off4434 = ( ( * (  pane4422 ) ) .f_sc_dash_off );
    struct RangeIter_169  temp2023 =  into_dash_iter170 ( ( (  to179 ) ( (  op_dash_add175 ( ( (  sc_dash_off4434 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min793 ) ( ( (  num_dash_lines1231 ) ( ( ( * (  pane4422 ) ) .f_buf ) ) ) ,  (  op_dash_add175 ( ( (  sc_dash_off4434 ) .f_screen_dash_top ) , ( (  screen_dash_height2021 ) ( (  sd4424 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond2024 =  next172 (&temp2023);
        if (  __cond2024 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4436 =  __cond2024 .stuff .Maybe_171_Just_s .field0;
        int32_t  ybi4437 = (  op_dash_sub180 ( (  line_dash_num4436 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4438 = ( (  vi_dash_bi1233 ) ( ( ( * (  pane4422 ) ) .f_buf ) ,  (  ybi4437 ) ,  ( (  sc_dash_off4434 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4439 = ( (  line297 ) ( ( ( * (  pane4422 ) ) .f_buf ) ,  (  ybi4437 ) ) );
        int32_t  ys4440 = (  op_dash_sub180 ( (  op_dash_sub180 ( (  op_dash_add175 ( ( (  sd4424 ) .f_from_dash_sy ) , (  line_dash_num4436 ) ) ) , ( (  sc_dash_off4434 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4428 ) ) {
            if ( (  eq696 ( ( ( ( * (  pane4422 ) ) .f_cursor ) .f_line ) , (  ybi4437 ) ) ) ) {
                ( (  set_dash_colors2025 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors2025 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4441 = ( ( ( ! (  relative_dash_line_dash_numbers4429 ) ) || (  eq696 ( ( ( ( * (  pane4422 ) ) .f_cursor ) .f_line ) , (  ybi4437 ) ) ) ) ? (  line_dash_num4436 ) : ( (  abs2027 ) ( (  op_dash_sub180 ( ( ( ( * (  pane4422 ) ) .f_cursor ) .f_line ) , (  ybi4437 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right2028 ) ( (  screen4420 ) ,  (  line_dash_display4441 ) ,  (  op_dash_add175 ( (  op_dash_sub180 ( (  op_dash_sub180 ( ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen4420 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4424 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4433 ) ) ) , (  num_dash_back_dash_margin4432 ) ) ) ,  (  ys4440 ) ) );
            ( (  set_dash_colors2025 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_default ) ) );
        }
        int32_t  vx4442 = (  op_dash_sub180 ( ( (  pos_dash_vi291 ) ( ( ( * (  pane4422 ) ) .f_buf ) ,  ( (  mk829 ) ( (  ybi4437 ) ,  (  xbi4438 ) ) ) ) ) , ( (  sc_dash_off4434 ) .f_screen_dash_left ) ) );
        ( (  assert2044 ) ( (  cmp173 ( (  vx4442 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_2045_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4442 ) ) ) ) );
        int32_t  left_dash_offset4443 = (  op_dash_add175 ( ( (  sd4424 ) .f_from_dash_sx ) , (  total_dash_margin4433 ) ) );
        struct AppendIter_2052  temp2051 =  into_dash_iter2053 ( ( (  append2054 ) ( ( (  chars295 ) ( ( (  byte_dash_substr_dash_from584 ) ( (  line_dash_content4439 ) ,  ( (  i32_dash_size280 ) ( (  xbi4438 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_351  __cond2055 =  next2056 (&temp2051);
            if (  __cond2055 .tag == 0 ) {
                break;
            }
            struct Char_65  c4445 =  __cond2055 .stuff .Maybe_351_Just_s .field0;
            if ( (  cmp173 ( (  vx4442 ) , ( (  sd4424 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4446 = ( (  mk829 ) ( (  ybi4437 ) ,  (  xbi4438 ) ) );
            bool  is_dash_cursor4447 = (  eq695 ( (  curpos4446 ) , ( ( * (  pane4422 ) ) .f_cursor ) ) );
            bool  in_dash_selection4448 = ( (  is_dash_in_dash_selection2057 ) ( (  pane4422 ) ,  ( (  mk829 ) ( (  ybi4437 ) ,  (  xbi4438 ) ) ) ) );
            if ( (  is_dash_cursor4447 ) ) {
                ( (  set_dash_colors2025 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4448 ) ) {
                    ( (  set_dash_colors2025 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_selection ) ) );
                } else {
                    struct envunion223  temp2063 = ( (struct envunion223){ .fun = (  struct Maybe_224  (*) (  struct env152*  ,    struct TextBuf_117 *  ,    struct Pos_26  ) )highlight_dash_at2064 , .env =  env->envinst152 } );
                    struct env2060 envinst2060 = {
                        .theme4427 =  theme4427 ,
                        .screen4420 =  screen4420 ,
                    };
                    ( (  if_dash_just2059 ) ( ( temp2063.fun ( &temp2063.env ,  ( ( * (  pane4422 ) ) .f_buf ) ,  (  curpos4446 ) ) ) ,  ( (struct envunion2061){ .fun = (  enum Unit_8  (*) (  struct env2060*  ,    enum HighlightType_18  ) )lam2378 , .env =  envinst2060 } ) ) );
                }
            }
            struct Maybe_85  dref4451 = ( (  char_dash_replacement359 ) ( (  c4445 ) ) );
            if ( dref4451.tag == Maybe_85_None_t ) {
                if ( ( ! ( (  cmp173 ( (  vx4442 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  op_dash_sub180 ( (  op_dash_add175 ( (  vx4442 ) , ( (  char_dash_screen_dash_width357 ) ( (  c4445 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4424 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char2041 ) ( (  screen4420 ) ,  (  c4445 ) ,  (  op_dash_add175 ( (  left_dash_offset4443 ) , (  vx4442 ) ) ) ,  (  ys4440 ) ) );
                }
                vx4442 = (  op_dash_add175 ( (  vx4442 ) , ( (  char_dash_screen_dash_width357 ) ( (  c4445 ) ) ) ) );
            }
            else {
                if ( dref4451.tag == Maybe_85_Just_t ) {
                    struct StrViewIter_293  temp2408 =  into_dash_iter294 ( ( (  chars295 ) ( ( dref4451 .stuff .Maybe_85_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_351  __cond2409 =  next352 (&temp2408);
                        if (  __cond2409 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4454 =  __cond2409 .stuff .Maybe_351_Just_s .field0;
                        if ( (  cmp173 ( (  vx4442 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char2041 ) ( (  screen4420 ) ,  (  c4454 ) ,  (  op_dash_add175 ( (  left_dash_offset4443 ) , (  vx4442 ) ) ) ,  (  ys4440 ) ) );
                        }
                        vx4442 = (  op_dash_add175 ( (  vx4442 ) , ( (  char_dash_screen_dash_width357 ) ( (  c4454 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors2025 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_default ) ) );
            xbi4438 = (  op_dash_add175 ( (  xbi4438 ) , ( (  size_dash_i32311 ) ( ( (  c4445 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors2025 ) ( (  screen4420 ) ,  ( ( * (  theme4427 ) ) .f_overlay ) ) );
    struct StrView_27  modename4455 = ( (  short_dash_mode_dash_name2410 ) ( ( ( * (  pane4422 ) ) .f_mode ) ) );
    ( (  draw_dash_str2412 ) ( (  screen4420 ) ,  ( ( StrConcat_2413_StrConcat ) ( ( ( StrConcat_2414_StrConcat ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  modename4455 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4424 ) .f_from_dash_sx ) ,  ( (  sd4424 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2427 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct Screen_447 *  screen4871;
    ;
    ;
    ;
};

struct envunion2428 {
    enum Unit_8  (*fun) (  struct env2427*  ,    struct StrView_27  );
    struct env2427 env;
};

static  enum Unit_8   if_dash_just2426 (    struct Maybe_85  x1601 ,   struct envunion2428  fun1603 ) {
    struct Maybe_85  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_85_Just_t ) {
        struct envunion2428  temp2429 = (  fun1603 );
        ( temp2429.fun ( &temp2429.env ,  ( dref1604 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2430 (   struct env2427* env ,    struct StrView_27  msg4876 ) {
    int32_t  num_dash_chars4877 = ( (  size_dash_i32311 ) ( ( (  count368 ) ( ( (  chars295 ) ( (  msg4876 ) ) ) ) ) ) );
    ( (  draw_dash_str2412 ) ( ( env->screen4871 ) ,  ( ( StrConcat_2413_StrConcat ) ( ( ( StrConcat_2414_StrConcat ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  msg4876 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1595 ( (  op_dash_sub180 ( ( (  u32_dash_i321985 ) ( ( ( * ( ( * ( env->screen4871 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4877 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  op_dash_sub180 ( ( (  u32_dash_i321985 ) ( ( ( * ( ( * ( env->screen4871 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2433 {
    struct StrView_27  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2433 StrConcat_2433_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2433 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2432 {
    struct StrConcat_2433  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2432 StrConcat_2432_StrConcat (  struct StrConcat_2433  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2432 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2431 {
    struct StrConcat_2432  field0;
    struct Char_65  field1;
};

static struct StrConcat_2431 StrConcat_2431_StrConcat (  struct StrConcat_2432  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2431 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2436 {
    struct StrConcatIter_1810  f_left;
    struct StrViewIter_293  f_right;
};

struct StrConcatIter_2435 {
    struct StrConcatIter_2436  f_left;
    struct AppendIter_1158  f_right;
};

static  struct StrConcatIter_2435   into_dash_iter2438 (    struct StrConcatIter_2435  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next2440 (    struct StrConcatIter_2436 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1818 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2439 (    struct StrConcatIter_2435 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2440 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2437 (    struct StrConcatIter_2435  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrConcatIter_2435  it1124 = ( (  into_dash_iter2438 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next2439 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2441 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2441);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2442;
    return (  temp2442 );
}

static  size_t   lam2443 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2434 (    struct StrConcatIter_2435  it1129 ) {
    return ( (  reduce2437 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2443 ) ) );
}

static  struct StrConcatIter_1810   into_dash_iter2449 (    struct StrConcat_2433  dref1297 ) {
    return ( (struct StrConcatIter_1810) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1777 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1810   chars2448 (    struct StrConcat_2433  self1308 ) {
    return ( (  into_dash_iter2449 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2436   into_dash_iter2447 (    struct StrConcat_2432  dref1297 ) {
    return ( (struct StrConcatIter_2436) { .f_left = ( (  chars2448 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2436   chars2446 (    struct StrConcat_2432  self1308 ) {
    return ( (  into_dash_iter2447 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2435   into_dash_iter2445 (    struct StrConcat_2431  dref1297 ) {
    return ( (struct StrConcatIter_2435) { .f_left = ( (  chars2446 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2435   chars2444 (    struct StrConcat_2431  self1308 ) {
    return ( (  into_dash_iter2445 ) ( (  self1308 ) ) );
}

static  enum Unit_8   draw_dash_str2450 (    struct Screen_447 *  screen3793 ,    struct StrConcat_2431  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1596 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min793 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2435  temp2451 =  into_dash_iter2438 ( ( (  chars2444 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2452 =  next2439 (&temp2451);
        if (  __cond2452 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2452 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2041 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2453 {
    struct StrConcat_2432  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2453 StrConcat_2453_StrConcat (  struct StrConcat_2432  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2453 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2455 {
    struct StrConcatIter_2436  f_left;
    struct StrViewIter_293  f_right;
};

static  struct StrConcatIter_2455   into_dash_iter2457 (    struct StrConcatIter_2455  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next2458 (    struct StrConcatIter_2455 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2440 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2456 (    struct StrConcatIter_2455  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrConcatIter_2455  it1124 = ( (  into_dash_iter2457 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1125 = ( (  next2458 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_351_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_351_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2459 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2459);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2460;
    return (  temp2460 );
}

static  size_t   lam2461 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add356 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2454 (    struct StrConcatIter_2455  it1129 ) {
    return ( (  reduce2456 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2461 ) ) );
}

static  struct StrConcatIter_2455   into_dash_iter2463 (    struct StrConcat_2453  dref1297 ) {
    return ( (struct StrConcatIter_2455) { .f_left = ( (  chars2446 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2455   chars2462 (    struct StrConcat_2453  self1308 ) {
    return ( (  into_dash_iter2463 ) ( (  self1308 ) ) );
}

static  enum Unit_8   draw_dash_str2464 (    struct Screen_447 *  screen3793 ,    struct StrConcat_2453  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1596 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min793 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2455  temp2465 =  into_dash_iter2457 ( ( (  chars2462 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2466 =  next2458 (&temp2465);
        if (  __cond2466 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2466 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2041 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str2467 (    struct Screen_447 *  screen3793 ,    struct StrView_27  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1596 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min793 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_293  temp2468 =  into_dash_iter294 ( ( (  chars295 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2469 =  next352 (&temp2468);
        if (  __cond2469 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2469 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2041 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct Zip_2471 {
    struct SliceIter_1960  f_left_dash_it;
    struct FromIter_540  f_right_dash_it;
};

static  struct Zip_2471   into_dash_iter2472 (    struct Zip_2471  self936 ) {
    return (  self936 );
}

static  struct Zip_2471   zip2473 (    struct Slice_270  left947 ,    struct FromIter_540  right949 ) {
    struct SliceIter_1960  left_dash_it950 = ( (  into_dash_iter1961 ) ( (  left947 ) ) );
    struct FromIter_540  right_dash_it951 = ( (  into_dash_iter550 ) ( (  right949 ) ) );
    return ( (struct Zip_2471) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

struct Tuple2_2476 {
    struct MenuItem_271  field0;
    int32_t  field1;
};

static struct Tuple2_2476 Tuple2_2476_Tuple2 (  struct MenuItem_271  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2476 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_2475 {
    enum {
        Maybe_2475_None_t,
        Maybe_2475_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2476  field0;
        } Maybe_2475_Just_s;
    } stuff;
};

static struct Maybe_2475 Maybe_2475_Just (  struct Tuple2_2476  field0 ) {
    return ( struct Maybe_2475 ) { .tag = Maybe_2475_Just_t, .stuff = { .Maybe_2475_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2475   next2477 (    struct Zip_2471 *  self939 ) {
    struct Zip_2471  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1963  dref941 = ( (  next1964 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1963_None_t ) {
            return ( (struct Maybe_2475) { .tag = Maybe_2475_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1963_Just_t ) {
                struct Maybe_171  dref943 = ( (  next546 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_2475) { .tag = Maybe_2475_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next1964 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next546 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2475_Just ) ( ( ( Tuple2_2476_Tuple2 ) ( ( dref941 .stuff .Maybe_1963_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct StrConcat_2480 {
    char  field0;
    struct Char_65  field1;
};

static struct StrConcat_2480 StrConcat_2480_StrConcat (  char  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2480 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2479 {
    struct StrConcat_2480  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2479 StrConcat_2479_StrConcat (  struct StrConcat_2480  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2479 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2483 {
    struct AppendIter_1158  f_left;
    struct AppendIter_1158  f_right;
};

struct StrConcatIter_2482 {
    struct StrConcatIter_2483  f_left;
    struct StrViewIter_293  f_right;
};

static  struct StrConcatIter_2482   into_dash_iter2484 (    struct StrConcatIter_2482  self1290 ) {
    return (  self1290 );
}

static  struct AppendIter_1158   chars2489 (    char  self1658 ) {
    return ( (  single1194 ) ( ( (  ascii_dash_char1865 ) ( (  self1658 ) ) ) ) );
}

static  struct StrConcatIter_2483   into_dash_iter2488 (    struct StrConcat_2480  dref1297 ) {
    return ( (struct StrConcatIter_2483) { .f_left = ( (  chars2489 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2483   chars2487 (    struct StrConcat_2480  self1308 ) {
    return ( (  into_dash_iter2488 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2482   into_dash_iter2486 (    struct StrConcat_2479  dref1297 ) {
    return ( (struct StrConcatIter_2482) { .f_left = ( (  chars2487 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars295 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2482   chars2485 (    struct StrConcat_2479  self1308 ) {
    return ( (  into_dash_iter2486 ) ( (  self1308 ) ) );
}

static  struct Maybe_351   next2492 (    struct StrConcatIter_2483 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2491 (    struct StrConcatIter_2482 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2492 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2478 (    struct Screen_447 *  screen3793 ,    struct StrConcat_2479  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1596 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min793 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size280 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2482  temp2481 =  into_dash_iter2484 ( ( (  chars2485 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_351  __cond2490 =  next2491 (&temp2481);
        if (  __cond2490 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2490 .stuff .Maybe_351_Just_s .field0;
        ( (  put_dash_char2041 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth373 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1997 (   struct env445* env ,    struct Screen_447 *  screen4871 ,    struct Editor_267 *  ed4873 ) {
    struct ScreenDims_450  screen_dash_dims4874 = ( (struct ScreenDims_450) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub180 ( ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen4871 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub180 ( ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen4871 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion446  temp1998 = ( (struct envunion446){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Screen_447 *  ,    struct Pane_241 *  ,    struct ScreenDims_450  ,    struct Config_272 *  ) )render1999 , .env =  env->envinst222 } );
    ( temp1998.fun ( &temp1998.env ,  (  screen4871 ) ,  ( (  pane1228 ) ( (  ed4873 ) ) ) ,  (  screen_dash_dims4874 ) ,  ( ( * (  ed4873 ) ) .f_cfg ) ) );
    struct env2427 envinst2427 = {
        .screen4871 =  screen4871 ,
    };
    ( (  if_dash_just2426 ) ( ( ( * (  ed4873 ) ) .f_msg ) ,  ( (struct envunion2428){ .fun = (  enum Unit_8  (*) (  struct env2427*  ,    struct StrView_27  ) )lam2430 , .env =  envinst2427 } ) ) );
    struct EditorMode_268  dref4878 = ( ( * (  ed4873 ) ) .f_mode );
    if ( dref4878.tag == EditorMode_268_Normal_t ) {
    }
    else {
        if ( dref4878.tag == EditorMode_268_Cmd_t ) {
            int32_t  num_dash_chars4880 = ( (  size_dash_i32311 ) ( ( (  count368 ) ( ( (  chars1777 ) ( ( dref4878 .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4881 = ( (  eq696 ( ( (  mod1594 ) ( (  num_dash_chars4880 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike642 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4882 = (  op_dash_add175 ( (  num_dash_chars4880 ) , ( (  mod1594 ) ( (  num_dash_chars4880 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
            struct StrConcat_2431  full_dash_str4883 = ( ( StrConcat_2431_StrConcat ) ( ( ( StrConcat_2432_StrConcat ) ( ( ( StrConcat_2433_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)" \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4878 .stuff .EditorMode_268_Cmd_s .field1 ) ) ) ,  (  pad4881 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4884 = ( (  size_dash_i32311 ) ( ( (  count2434 ) ( ( (  chars2444 ) ( (  full_dash_str4883 ) ) ) ) ) ) );
            ( (  draw_dash_str2450 ) ( (  screen4871 ) ,  (  full_dash_str4883 ) ,  (  op_dash_div1595 ( (  op_dash_sub180 ( ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen4871 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4884 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
        }
        else {
            if ( dref4878.tag == EditorMode_268_Search_t ) {
                int32_t  num_dash_chars4886 = ( (  size_dash_i32311 ) ( ( (  count368 ) ( ( (  chars1777 ) ( ( dref4878 .stuff .EditorMode_268_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4887 = ( (  eq696 ( ( (  mod1594 ) ( (  num_dash_chars4886 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string220 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike642 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4888 = (  op_dash_add175 ( (  num_dash_chars4886 ) , ( (  mod1594 ) ( (  num_dash_chars4886 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
                struct StrConcat_2453  full_dash_str4889 = ( ( StrConcat_2453_StrConcat ) ( ( ( StrConcat_2432_StrConcat ) ( ( ( StrConcat_2433_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)" \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4878 .stuff .EditorMode_268_Search_s .field1 ) ) ) ,  (  pad4887 ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4890 = ( (  size_dash_i32311 ) ( ( (  count2454 ) ( ( (  chars2462 ) ( (  full_dash_str4889 ) ) ) ) ) ) );
                ( (  draw_dash_str2464 ) ( (  screen4871 ) ,  (  full_dash_str4889 ) ,  (  op_dash_div1595 ( (  op_dash_sub180 ( ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen4871 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4890 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            }
            else {
                if ( dref4878.tag == EditorMode_268_Menu_t ) {
                    ( (  draw_dash_str2467 ) ( (  screen4871 ) ,  ( ( dref4878 .stuff .EditorMode_268_Menu_s .field0 ) .f_name ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
                    struct Zip_2471  temp2470 =  into_dash_iter2472 ( ( (  zip2473 ) ( ( ( dref4878 .stuff .EditorMode_268_Menu_s .field0 ) .f_items ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
                    while (true) {
                        struct Maybe_2475  __cond2474 =  next2477 (&temp2470);
                        if (  __cond2474 .tag == 0 ) {
                            break;
                        }
                        struct Tuple2_2476  dref4892 =  __cond2474 .stuff .Maybe_2475_Just_s .field0;
                        ( (  draw_dash_str2478 ) ( (  screen4871 ) ,  ( ( StrConcat_2479_StrConcat ) ( ( ( StrConcat_2480_StrConcat ) ( ( ( dref4892 .field0 ) .f_key ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( ( dref4892 .field0 ) .f_description ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( dref4892 .field1 ) ) );
                    }
                }
                else {
                    if ( true ) {
                        ( (  todo1835 ) ( ) );
                    }
                }
            }
        }
    }
    int32_t  temp2493 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4895 = ( &temp2493 );
    return ( Unit_8_Unit );
}

struct RenderState_2495 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_154  f_fg;
    struct Color_154  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2502 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2502 StrConcat_2502_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2502 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2501 {
    struct StrConcat_2502  field0;
    struct Char_65  field1;
};

static struct StrConcat_2501 StrConcat_2501_StrConcat (  struct StrConcat_2502  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2501 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2500 {
    struct StrConcat_2501  field0;
    uint32_t  field1;
};

static struct StrConcat_2500 StrConcat_2500_StrConcat (  struct StrConcat_2501  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2500 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2499 {
    struct StrConcat_2500  field0;
    struct Char_65  field1;
};

static struct StrConcat_2499 StrConcat_2499_StrConcat (  struct StrConcat_2500  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2499 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2508 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2507 {
    struct StrViewIter_293  f_left;
    struct IntStrIter_2508  f_right;
};

struct StrConcatIter_2506 {
    struct StrConcatIter_2507  f_left;
    struct AppendIter_1158  f_right;
};

struct StrConcatIter_2505 {
    struct StrConcatIter_2506  f_left;
    struct IntStrIter_2508  f_right;
};

struct StrConcatIter_2504 {
    struct StrConcatIter_2505  f_left;
    struct AppendIter_1158  f_right;
};

static  struct StrConcatIter_2504   into_dash_iter2510 (    struct StrConcatIter_2504  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next2515 (    struct IntStrIter_2508 *  self1399 ) {
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
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81177 ) ( (  op_dash_add1067 ( (  digit1403 ) , (  from_dash_integral328 ( 48 ) ) ) ) ) );
    return ( ( Maybe_351_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_351   next2514 (    struct StrConcatIter_2507 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2515 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2513 (    struct StrConcatIter_2506 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2514 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2512 (    struct StrConcatIter_2505 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2513 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2515 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2511 (    struct StrConcatIter_2504 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2512 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2503 (    struct StrConcatIter_2504  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_2504  temp2509 = ( (  into_dash_iter2510 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2504 *  it1102 = ( &temp2509 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next2511 ) ( (  it1102 ) ) );
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

static  int32_t   count_dash_digits2526 (    uint32_t  self1407 ) {
    if ( (  eq2402 ( (  self1407 ) , (  from_dash_integral181 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp186 ( (  self1407 ) , (  from_dash_integral181 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div163 ( (  self1407 ) , (  from_dash_integral181 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2508   uint_dash_iter2525 (    uint32_t  int1414 ) {
    return ( (struct IntStrIter_2508) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits2526 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2508   chars2524 (    uint32_t  self1796 ) {
    return ( (  uint_dash_iter2525 ) ( (  self1796 ) ) );
}

static  struct StrConcatIter_2507   into_dash_iter2523 (    struct StrConcat_2502  dref1297 ) {
    return ( (struct StrConcatIter_2507) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2524 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2507   chars2522 (    struct StrConcat_2502  self1308 ) {
    return ( (  into_dash_iter2523 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2506   into_dash_iter2521 (    struct StrConcat_2501  dref1297 ) {
    return ( (struct StrConcatIter_2506) { .f_left = ( (  chars2522 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2506   chars2520 (    struct StrConcat_2501  self1308 ) {
    return ( (  into_dash_iter2521 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2505   into_dash_iter2519 (    struct StrConcat_2500  dref1297 ) {
    return ( (struct StrConcatIter_2505) { .f_left = ( (  chars2520 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2524 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2505   chars2518 (    struct StrConcat_2500  self1308 ) {
    return ( (  into_dash_iter2519 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2504   into_dash_iter2517 (    struct StrConcat_2499  dref1297 ) {
    return ( (struct StrConcatIter_2504) { .f_left = ( (  chars2518 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2504   chars2516 (    struct StrConcat_2499  self1308 ) {
    return ( (  into_dash_iter2517 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print2498 (    struct StrConcat_2499  s1335 ) {
    ( (  for_dash_each2503 ) ( ( (  chars2516 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2497 (    uint32_t  x2704 ,    uint32_t  y2706 ) {
    uint32_t  x2707 = (  op_dash_add187 ( (  x2704 ) , (  from_dash_integral181 ( 1 ) ) ) );
    uint32_t  y2708 = (  op_dash_add187 ( (  y2706 ) , (  from_dash_integral181 ( 1 ) ) ) );
    ( (  print2498 ) ( ( ( StrConcat_2499_StrConcat ) ( ( ( StrConcat_2500_StrConcat ) ( ( ( StrConcat_2501_StrConcat ) ( ( ( StrConcat_2502_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[" ) ,  ( 2 ) ) ) ,  (  y2708 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  (  x2707 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_448   subslice2529 (    struct Slice_448  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Cell_449 *  begin_dash_ptr2209 = ( (  offset_dash_ptr988 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp302 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp302 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_448) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub458 ( ( (  min587 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_448) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

struct SliceIter_2532 {
    struct Slice_448  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2531 {
    struct SliceIter_2532  f_left_dash_it;
    struct SliceIter_2532  f_right_dash_it;
};

struct Tuple2_2533 {
    struct Cell_449  field0;
    struct Cell_449  field1;
};

static struct Tuple2_2533 Tuple2_2533_Tuple2 (  struct Cell_449  field0 ,  struct Cell_449  field1 ) {
    return ( struct Tuple2_2533 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2535 {
    bool (*  fun1160 )(    struct Tuple2_2533  );
};

struct envunion2536 {
    bool  (*fun) (  struct env2535*  ,    struct Tuple2_2533  ,    bool  );
    struct env2535 env;
};

static  struct Zip_2531   into_dash_iter2537 (    struct Zip_2531  self936 ) {
    return (  self936 );
}

struct Maybe_2538 {
    enum {
        Maybe_2538_None_t,
        Maybe_2538_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2533  field0;
        } Maybe_2538_Just_s;
    } stuff;
};

static struct Maybe_2538 Maybe_2538_Just (  struct Tuple2_2533  field0 ) {
    return ( struct Maybe_2538 ) { .tag = Maybe_2538_Just_t, .stuff = { .Maybe_2538_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_993   next2540 (    struct SliceIter_2532 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp302 ( (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_993) { .tag = Maybe_993_None_t } );
    }
    struct Cell_449  elem2258 = ( * ( (  offset_dash_ptr988 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64349 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add356 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_993_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2538   next2539 (    struct Zip_2531 *  self939 ) {
    struct Zip_2531  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_993  dref941 = ( (  next2540 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_993_None_t ) {
            return ( (struct Maybe_2538) { .tag = Maybe_2538_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_993_Just_t ) {
                struct Maybe_993  dref943 = ( (  next2540 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_993_None_t ) {
                    return ( (struct Maybe_2538) { .tag = Maybe_2538_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_993_Just_t ) {
                        ( (  next2540 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2540 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2538_Just ) ( ( ( Tuple2_2533_Tuple2 ) ( ( dref941 .stuff .Maybe_993_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_993_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2534 (    struct Zip_2531  iterable1118 ,    bool  base1120 ,   struct envunion2536  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Zip_2531  it1124 = ( (  into_dash_iter2537 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_2538  dref1125 = ( (  next2539 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_2538_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_2538_Just_t ) {
                struct envunion2536  temp2541 = (  fun1122 );
                x1123 = ( temp2541.fun ( &temp2541.env ,  ( dref1125 .stuff .Maybe_2538_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2542 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2542);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2543;
    return (  temp2543 );
}

static  bool   lam2544 (   struct env2535* env ,    struct Tuple2_2533  e1162 ,    bool  x1164 ) {
    return ( ( ( env->fun1160 ) ( (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2530 (    struct Zip_2531  it1158 ,    bool (*  fun1160 )(    struct Tuple2_2533  ) ) {
    struct env2535 envinst2535 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2534 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2536){ .fun = (  bool  (*) (  struct env2535*  ,    struct Tuple2_2533  ,    bool  ) )lam2544 , .env =  envinst2535 } ) ) );
}

static  struct SliceIter_2532   into_dash_iter2546 (    struct Slice_448  self2250 ) {
    return ( (struct SliceIter_2532) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2531   zip2545 (    struct Slice_448  left947 ,    struct Slice_448  right949 ) {
    struct SliceIter_2532  left_dash_it950 = ( (  into_dash_iter2546 ) ( (  left947 ) ) );
    struct SliceIter_2532  right_dash_it951 = ( (  into_dash_iter2546 ) ( (  right949 ) ) );
    return ( (struct Zip_2531) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

struct Tuple2_2550 {
    struct Color_154  field0;
    struct Color_154  field1;
};

static struct Tuple2_2550 Tuple2_2550_Tuple2 (  struct Color_154  field0 ,  struct Color_154  field1 ) {
    return ( struct Tuple2_2550 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_155 *   cast2554 (    int32_t *  x395 ) {
    return ( (enum Color8_155 * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2552 (    enum Color8_155  x651 ) {
    int32_t  temp2553 = ( (  zeroed1139 ) ( ) );
    int32_t *  y652 = ( &temp2553 );
    enum Color8_155 *  yp653 = ( (  cast2554 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  bool   eq2551 (    enum Color8_155  l2734 ,    enum Color8_155  r2736 ) {
    return (  eq696 ( ( ( (  cast_dash_on_dash_zeroed2552 ) ( (  l2734 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2552 ) ( (  r2736 ) ) ) ) );
}

static  enum Color16_156 *   cast2558 (    int32_t *  x395 ) {
    return ( (enum Color16_156 * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2556 (    enum Color16_156  x651 ) {
    int32_t  temp2557 = ( (  zeroed1139 ) ( ) );
    int32_t *  y652 = ( &temp2557 );
    enum Color16_156 *  yp653 = ( (  cast2558 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  bool   eq2555 (    enum Color16_156  l2740 ,    enum Color16_156  r2742 ) {
    return (  eq696 ( ( ( (  cast_dash_on_dash_zeroed2556 ) ( (  l2740 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2556 ) ( (  r2742 ) ) ) ) );
}

static  bool   eq2559 (    struct RGB_157  l2770 ,    struct RGB_157  r2772 ) {
    return ( ( (  eq324 ( ( (  l2770 ) .f_r ) , ( (  r2772 ) .f_r ) ) ) && (  eq324 ( ( (  l2770 ) .f_g ) , ( (  r2772 ) .f_g ) ) ) ) && (  eq324 ( ( (  l2770 ) .f_b ) , ( (  r2772 ) .f_b ) ) ) );
}

static  bool   eq2549 (    struct Color_154  l2792 ,    struct Color_154  r2794 ) {
    return ( {  struct Tuple2_2550  dref2795 = ( ( Tuple2_2550_Tuple2 ) ( (  l2792 ) ,  (  r2794 ) ) ) ; dref2795 .field0.tag == Color_154_ColorDefault_t && dref2795 .field1.tag == Color_154_ColorDefault_t ? ( true ) : dref2795 .field0.tag == Color_154_Color8_t && dref2795 .field1.tag == Color_154_Color8_t ? (  eq2551 ( ( dref2795 .field0 .stuff .Color_154_Color8_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_Color8_s .field0 ) ) ) : dref2795 .field0.tag == Color_154_Color16_t && dref2795 .field1.tag == Color_154_Color16_t ? (  eq2555 ( ( dref2795 .field0 .stuff .Color_154_Color16_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_Color16_s .field0 ) ) ) : dref2795 .field0.tag == Color_154_Color256_t && dref2795 .field1.tag == Color_154_Color256_t ? (  eq324 ( ( dref2795 .field0 .stuff .Color_154_Color256_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_Color256_s .field0 ) ) ) : dref2795 .field0.tag == Color_154_ColorRGB_t && dref2795 .field1.tag == Color_154_ColorRGB_t ? (  eq2559 ( ( dref2795 .field0 .stuff .Color_154_ColorRGB_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2548 (    struct Cell_449  l3666 ,    struct Cell_449  r3668 ) {
    if ( ( !  eq360 ( ( (  l3666 ) .f_c ) , ( (  r3668 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2549 ( ( (  l3666 ) .f_fg ) , ( (  r3668 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2549 ( ( (  l3666 ) .f_bg ) , ( (  r3668 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2547 (    struct Tuple2_2533  dref3722 ) {
    return ( !  eq2548 ( ( dref3722 .field0 ) , ( dref3722 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2562 (  ) {
    ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82563 (    enum Color8_155  color2745 ) {
    enum Color8_155  dref2746 = (  color2745 );
    switch (  dref2746 ) {
        case Color8_155_Black8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Red8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Green8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Yellow8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Blue8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Magenta8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Cyan8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_White8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162564 (    enum Color16_156  color2749 ) {
    enum Color16_156  dref2750 = (  color2749 );
    switch (  dref2750 ) {
        case Color16_156_Black16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Red16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Green16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Yellow16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Blue16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Magenta16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Cyan16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_White16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlack16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightRed16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightGreen16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightYellow16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlue16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightMagenta16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightCyan16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightWhite16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2568 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2568 StrConcat_2568_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2568 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2567 {
    struct StrConcat_2568  field0;
    struct Char_65  field1;
};

static struct StrConcat_2567 StrConcat_2567_StrConcat (  struct StrConcat_2568  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2567 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2572 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2571 {
    struct StrViewIter_293  f_left;
    struct IntStrIter_2572  f_right;
};

struct StrConcatIter_2570 {
    struct StrConcatIter_2571  f_left;
    struct AppendIter_1158  f_right;
};

static  struct StrConcatIter_2570   into_dash_iter2574 (    struct StrConcatIter_2570  self1290 ) {
    return (  self1290 );
}

struct env2580 {
    uint8_t  base1386;
    ;
};

struct envunion2581 {
    uint8_t  (*fun) (  struct env2580*  ,    int32_t  ,    uint8_t  );
    struct env2580 env;
};

static  uint8_t   reduce2579 (    struct Range_166  iterable1118 ,    uint8_t  base1120 ,   struct envunion2581  fun1122 ) {
    uint8_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion2581  temp2582 = (  fun1122 );
                x1123 = ( temp2582.fun ( &temp2582.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2583 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2583);
    abort ( );
    ( Unit_8_Unit );
    uint8_t  temp2584;
    return (  temp2584 );
}

static  uint8_t   op_dash_mul2586 (    uint8_t  l279 ,    uint8_t  r281 ) {
    return ( (  l279 ) * (  r281 ) );
}

static  uint8_t   lam2585 (   struct env2580* env ,    int32_t  item1390 ,    uint8_t  x1392 ) {
    return (  op_dash_mul2586 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  uint8_t   pow2578 (    uint8_t  base1386 ,    int32_t  p1388 ) {
    struct env2580 envinst2580 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce2579 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral328 ( 1 ) ) ,  ( (struct envunion2581){ .fun = (  uint8_t  (*) (  struct env2580*  ,    int32_t  ,    uint8_t  ) )lam2585 , .env =  envinst2580 } ) ) );
}

static  uint8_t   op_dash_div2587 (    uint8_t  l284 ,    uint8_t  r286 ) {
    return ( (  l284 ) / (  r286 ) );
}

static  uint8_t   cast2588 (    uint8_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_351   next2577 (    struct IntStrIter_2572 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_351_Just ) ( ( (  from_dash_charlike338 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    uint8_t  trim_dash_down1400 = ( (  pow2578 ) ( (  from_dash_integral328 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1401 = (  op_dash_div2587 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    uint8_t  upper_dash_mask1402 = (  op_dash_mul2586 ( (  op_dash_div2587 ( (  upper1401 ) , (  from_dash_integral328 ( 10 ) ) ) ) , (  from_dash_integral328 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast2588 ) ( (  op_dash_sub1066 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81177 ) ( (  op_dash_add1067 ( (  digit1403 ) , (  from_dash_integral328 ( 48 ) ) ) ) ) );
    return ( ( Maybe_351_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_351   next2576 (    struct StrConcatIter_2571 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next352 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2577 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2575 (    struct StrConcatIter_2570 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2576 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2569 (    struct StrConcatIter_2570  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_2570  temp2573 = ( (  into_dash_iter2574 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2570 *  it1102 = ( &temp2573 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next2575 ) ( (  it1102 ) ) );
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

static  int32_t   count_dash_digits2595 (    uint8_t  self1407 ) {
    if ( (  eq324 ( (  self1407 ) , (  from_dash_integral328 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp341 ( (  self1407 ) , (  from_dash_integral328 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div2587 ( (  self1407 ) , (  from_dash_integral328 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2572   uint_dash_iter2594 (    uint8_t  int1414 ) {
    return ( (struct IntStrIter_2572) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits2595 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2572   chars2593 (    uint8_t  self1802 ) {
    return ( (  uint_dash_iter2594 ) ( (  self1802 ) ) );
}

static  struct StrConcatIter_2571   into_dash_iter2592 (    struct StrConcat_2568  dref1297 ) {
    return ( (struct StrConcatIter_2571) { .f_left = ( (  chars295 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2593 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2571   chars2591 (    struct StrConcat_2568  self1308 ) {
    return ( (  into_dash_iter2592 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2570   into_dash_iter2590 (    struct StrConcat_2567  dref1297 ) {
    return ( (struct StrConcatIter_2570) { .f_left = ( (  chars2591 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2570   chars2589 (    struct StrConcat_2567  self1308 ) {
    return ( (  into_dash_iter2590 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print2566 (    struct StrConcat_2567  s1335 ) {
    ( (  for_dash_each2569 ) ( ( (  chars2589 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562565 (    uint8_t  color2763 ) {
    ( (  print2566 ) ( ( ( StrConcat_2567_StrConcat ) ( ( ( StrConcat_2568_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2763 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2601 {
    struct StrConcat_2567  field0;
    uint8_t  field1;
};

static struct StrConcat_2601 StrConcat_2601_StrConcat (  struct StrConcat_2567  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2601 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2600 {
    struct StrConcat_2601  field0;
    struct Char_65  field1;
};

static struct StrConcat_2600 StrConcat_2600_StrConcat (  struct StrConcat_2601  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2600 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2599 {
    struct StrConcat_2600  field0;
    uint8_t  field1;
};

static struct StrConcat_2599 StrConcat_2599_StrConcat (  struct StrConcat_2600  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2599 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2598 {
    struct StrConcat_2599  field0;
    struct Char_65  field1;
};

static struct StrConcat_2598 StrConcat_2598_StrConcat (  struct StrConcat_2599  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2598 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2606 {
    struct StrConcatIter_2570  f_left;
    struct IntStrIter_2572  f_right;
};

struct StrConcatIter_2605 {
    struct StrConcatIter_2606  f_left;
    struct AppendIter_1158  f_right;
};

struct StrConcatIter_2604 {
    struct StrConcatIter_2605  f_left;
    struct IntStrIter_2572  f_right;
};

struct StrConcatIter_2603 {
    struct StrConcatIter_2604  f_left;
    struct AppendIter_1158  f_right;
};

static  struct StrConcatIter_2603   into_dash_iter2608 (    struct StrConcatIter_2603  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_351   next2612 (    struct StrConcatIter_2606 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2575 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2577 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2611 (    struct StrConcatIter_2605 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2612 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2610 (    struct StrConcatIter_2604 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2611 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next2577 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_351   next2609 (    struct StrConcatIter_2603 *  self1293 ) {
    struct Maybe_351  dref1294 = ( (  next2610 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_351_Just_t ) {
        return ( ( Maybe_351_Just ) ( ( dref1294 .stuff .Maybe_351_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_351_None_t ) {
            return ( (  next1180 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2602 (    struct StrConcatIter_2603  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_2603  temp2607 = ( (  into_dash_iter2608 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2603 *  it1102 = ( &temp2607 );
    while ( ( true ) ) {
        struct Maybe_351  dref1103 = ( (  next2609 ) ( (  it1102 ) ) );
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

static  struct StrConcatIter_2606   into_dash_iter2620 (    struct StrConcat_2601  dref1297 ) {
    return ( (struct StrConcatIter_2606) { .f_left = ( (  chars2589 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2593 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2606   chars2619 (    struct StrConcat_2601  self1308 ) {
    return ( (  into_dash_iter2620 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2605   into_dash_iter2618 (    struct StrConcat_2600  dref1297 ) {
    return ( (struct StrConcatIter_2605) { .f_left = ( (  chars2619 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2605   chars2617 (    struct StrConcat_2600  self1308 ) {
    return ( (  into_dash_iter2618 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2604   into_dash_iter2616 (    struct StrConcat_2599  dref1297 ) {
    return ( (struct StrConcatIter_2604) { .f_left = ( (  chars2617 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2593 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2604   chars2615 (    struct StrConcat_2599  self1308 ) {
    return ( (  into_dash_iter2616 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2603   into_dash_iter2614 (    struct StrConcat_2598  dref1297 ) {
    return ( (struct StrConcatIter_2603) { .f_left = ( (  chars2615 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1193 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2603   chars2613 (    struct StrConcat_2598  self1308 ) {
    return ( (  into_dash_iter2614 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print2597 (    struct StrConcat_2598  s1335 ) {
    ( (  for_dash_each2602 ) ( ( (  chars2613 ) ( (  s1335 ) ) ) ,  (  printf_dash_char318 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2596 (    struct RGB_157  c2785 ) {
    ( (  print2597 ) ( ( ( StrConcat_2598_StrConcat ) ( ( ( StrConcat_2599_StrConcat ) ( ( ( StrConcat_2600_StrConcat ) ( ( ( StrConcat_2601_StrConcat ) ( ( ( StrConcat_2567_StrConcat ) ( ( ( StrConcat_2568_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2785 ) .f_r ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2785 ) .f_g ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2785 ) .f_b ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2561 (    struct Color_154  c2806 ) {
    struct Color_154  dref2807 = (  c2806 );
    if ( dref2807.tag == Color_154_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2562 ) ( ) );
    }
    else {
        if ( dref2807.tag == Color_154_Color8_t ) {
            ( (  set_dash_fg82563 ) ( ( dref2807 .stuff .Color_154_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2807.tag == Color_154_Color16_t ) {
                ( (  set_dash_fg162564 ) ( ( dref2807 .stuff .Color_154_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2807.tag == Color_154_Color256_t ) {
                    ( (  set_dash_fg2562565 ) ( ( dref2807 .stuff .Color_154_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2807.tag == Color_154_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2596 ) ( ( dref2807 .stuff .Color_154_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2622 (  ) {
    ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82623 (    enum Color8_155  color2753 ) {
    enum Color8_155  dref2754 = (  color2753 );
    switch (  dref2754 ) {
        case Color8_155_Black8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Red8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Green8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Yellow8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Blue8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Magenta8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Cyan8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_White8 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162624 (    enum Color16_156  color2757 ) {
    enum Color16_156  dref2758 = (  color2757 );
    switch (  dref2758 ) {
        case Color16_156_Black16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Red16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Green16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Yellow16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Blue16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Magenta16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Cyan16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_White16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlack16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightRed16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightGreen16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightYellow16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlue16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightMagenta16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightCyan16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightWhite16 : {
            ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562625 (    uint8_t  color2766 ) {
    ( (  print2566 ) ( ( ( StrConcat_2567_StrConcat ) ( ( ( StrConcat_2568_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2766 ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2626 (    struct RGB_157  c2788 ) {
    ( (  print2597 ) ( ( ( StrConcat_2598_StrConcat ) ( ( ( StrConcat_2599_StrConcat ) ( ( ( StrConcat_2600_StrConcat ) ( ( ( StrConcat_2601_StrConcat ) ( ( ( StrConcat_2567_StrConcat ) ( ( ( StrConcat_2568_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2788 ) .f_r ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2788 ) .f_g ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2788 ) .f_b ) ) ) ,  ( (  from_dash_charlike338 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2621 (    struct Color_154  c2814 ) {
    struct Color_154  dref2815 = (  c2814 );
    if ( dref2815.tag == Color_154_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2622 ) ( ) );
    }
    else {
        if ( dref2815.tag == Color_154_Color8_t ) {
            ( (  set_dash_bg82623 ) ( ( dref2815 .stuff .Color_154_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2815.tag == Color_154_Color16_t ) {
                ( (  set_dash_bg162624 ) ( ( dref2815 .stuff .Color_154_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2815.tag == Color_154_Color256_t ) {
                    ( (  set_dash_bg2562625 ) ( ( dref2815 .stuff .Color_154_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2815.tag == Color_154_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2626 ) ( ( dref2815 .stuff .Color_154_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322627 (    int32_t  x681 ) {
    return ( (uint32_t ) (  x681 ) );
}

static  enum Unit_8   emit_dash_cell2560 (    struct RenderState_2495 *  rs3698 ,    struct Cell_449 *  c3700 ,    uint32_t  x3702 ,    uint32_t  y3704 ) {
    if ( ( ( !  eq2402 ( (  x3702 ) , ( ( * (  rs3698 ) ) .f_x ) ) ) || ( !  eq2402 ( (  y3704 ) , ( ( * (  rs3698 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2497 ) ( (  x3702 ) ,  (  y3704 ) ) );
        (*  rs3698 ) .f_x = (  x3702 );
        (*  rs3698 ) .f_y = (  y3704 );
    }
    struct Char_65  char3705 = ( ( * (  c3700 ) ) .f_c );
    struct Color_154  bg3706 = ( ( * (  c3700 ) ) .f_bg );
    if ( (  eq696 ( ( ( * (  c3700 ) ) .f_char_dash_width ) , (  op_dash_neg849 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3705 = ( (  from_dash_charlike338 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) );
        bg3706 = ( ( Color_154_Color8 ) ( ( Color8_155_Red8 ) ) );
    }
    if ( ( !  eq2549 ( ( ( * (  rs3698 ) ) .f_fg ) , ( ( * (  c3700 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2561 ) ( ( ( * (  c3700 ) ) .f_fg ) ) );
        (*  rs3698 ) .f_fg = ( ( * (  c3700 ) ) .f_fg );
    }
    if ( ( !  eq2549 ( ( ( * (  rs3698 ) ) .f_bg ) , (  bg3706 ) ) ) ) {
        ( (  set_dash_bg2621 ) ( (  bg3706 ) ) );
        (*  rs3698 ) .f_bg = (  bg3706 );
    }
    ( (  print_dash_str317 ) ( (  char3705 ) ) );
    uint32_t  char_dash_width3707 = ( (  i32_dash_u322627 ) ( ( (  max374 ) ( ( ( * (  c3700 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3698 ) .f_x = (  op_dash_add187 ( ( ( * (  rs3698 ) ) .f_x ) , (  char_dash_width3707 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2630 {
    struct SliceIter_2532  f_left_dash_it;
    struct FromIter_540  f_right_dash_it;
};

struct env2631 {
    ;
    struct Slice_448  dest2281;
    ;
};

struct Tuple2_2633 {
    struct Cell_449  field0;
    int32_t  field1;
};

static struct Tuple2_2633 Tuple2_2633_Tuple2 (  struct Cell_449  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2633 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2632 {
    enum Unit_8  (*fun) (  struct env2631*  ,    struct Tuple2_2633  );
    struct env2631 env;
};

static  struct Zip_2630   into_dash_iter2635 (    struct Zip_2630  self936 ) {
    return (  self936 );
}

struct Maybe_2636 {
    enum {
        Maybe_2636_None_t,
        Maybe_2636_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2633  field0;
        } Maybe_2636_Just_s;
    } stuff;
};

static struct Maybe_2636 Maybe_2636_Just (  struct Tuple2_2633  field0 ) {
    return ( struct Maybe_2636 ) { .tag = Maybe_2636_Just_t, .stuff = { .Maybe_2636_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2636   next2637 (    struct Zip_2630 *  self939 ) {
    struct Zip_2630  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_993  dref941 = ( (  next2540 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_993_None_t ) {
            return ( (struct Maybe_2636) { .tag = Maybe_2636_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_993_Just_t ) {
                struct Maybe_171  dref943 = ( (  next546 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_2636) { .tag = Maybe_2636_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next2540 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next546 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2636_Just ) ( ( ( Tuple2_2633_Tuple2 ) ( ( dref941 .stuff .Maybe_993_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2629 (    struct Zip_2630  iterable1099 ,   struct envunion2632  fun1101 ) {
    struct Zip_2630  temp2634 = ( (  into_dash_iter2635 ) ( (  iterable1099 ) ) );
    struct Zip_2630 *  it1102 = ( &temp2634 );
    while ( ( true ) ) {
        struct Maybe_2636  dref1103 = ( (  next2637 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_2636_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_2636_Just_t ) {
                struct envunion2632  temp2638 = (  fun1101 );
                ( temp2638.fun ( &temp2638.env ,  ( dref1103 .stuff .Maybe_2636_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2630   zip2639 (    struct Slice_448  left947 ,    struct FromIter_540  right949 ) {
    struct SliceIter_2532  left_dash_it950 = ( (  into_dash_iter2546 ) ( (  left947 ) ) );
    struct FromIter_540  right_dash_it951 = ( (  into_dash_iter550 ) ( (  right949 ) ) );
    return ( (struct Zip_2630) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   lam2640 (   struct env2631* env ,    struct Tuple2_2633  dref2282 ) {
    return ( (  set986 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size280 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2628 (    struct Slice_448  src2279 ,    struct Slice_448  dest2281 ) {
    if ( (  cmp302 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic650 ) ( ( ( StrConcat_651_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string220 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2631 envinst2631 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each2629 ) ( ( (  zip2639 ) ( (  src2279 ) ,  ( (  from551 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2632){ .fun = (  enum Unit_8  (*) (  struct env2631*  ,    struct Tuple2_2633  ) )lam2640 , .env =  envinst2631 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2494 (    struct Screen_447 *  screen3710 ) {
    int32_t  w3711 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3710 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3712 = ( (  u32_dash_i321985 ) ( ( ( * ( ( * (  screen3710 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2495  temp2496 = ( (struct RenderState_2495) { .f_x = (  from_dash_integral181 ( 0 ) ) , .f_y = (  from_dash_integral181 ( 0 ) ) , .f_fg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_bg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_changes = (  from_dash_integral181 ( 0 ) ) } );
    struct RenderState_2495 *  rs3713 = ( &temp2496 );
    ( (  move_dash_cursor_dash_to2497 ) ( (  from_dash_integral181 ( 0 ) ) ,  (  from_dash_integral181 ( 0 ) ) ) );
    struct RangeIter_169  temp2527 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  h3712 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond2528 =  next172 (&temp2527);
        if (  __cond2528 .tag == 0 ) {
            break;
        }
        int32_t  y3715 =  __cond2528 .stuff .Maybe_171_Just_s .field0;
        int32_t  x_dash_v3716 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp173 ( (  x_dash_v3716 ) , (  w3711 ) ) == 0 ) ) {
            size_t  i3717 = ( (  i32_dash_size280 ) ( (  op_dash_add175 ( (  op_dash_mul1596 ( (  y3715 ) , (  w3711 ) ) ) , (  x_dash_v3716 ) ) ) ) );
            struct Cell_449 *  cur3718 = ( (  get_dash_ptr987 ) ( ( ( * (  screen3710 ) ) .f_current ) ,  (  i3717 ) ) );
            int32_t  char_dash_width3719 = ( (  max374 ) ( ( ( * (  cur3718 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_448  curs3720 = ( (  subslice2529 ) ( ( ( * (  screen3710 ) ) .f_current ) ,  (  i3717 ) ,  (  op_dash_add356 ( (  i3717 ) , ( (  i32_dash_size280 ) ( (  char_dash_width3719 ) ) ) ) ) ) );
            struct Slice_448  prevs3721 = ( (  subslice2529 ) ( ( ( * (  screen3710 ) ) .f_previous ) ,  (  i3717 ) ,  (  op_dash_add356 ( (  i3717 ) , ( (  i32_dash_size280 ) ( (  char_dash_width3719 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3710 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2530 ) ( ( (  zip2545 ) ( (  curs3720 ) ,  (  prevs3721 ) ) ) ,  (  lam2547 ) ) ) ) ) {
                (*  rs3713 ) .f_changes = (  op_dash_add187 ( ( ( * (  rs3713 ) ) .f_changes ) , (  from_dash_integral181 ( 1 ) ) ) );
                ( (  emit_dash_cell2560 ) ( (  rs3713 ) ,  (  cur3718 ) ,  ( (  i32_dash_u322627 ) ( (  x_dash_v3716 ) ) ) ,  ( (  i32_dash_u322627 ) ( (  y3715 ) ) ) ) );
                ( (  copy_dash_to2628 ) ( (  curs3720 ) ,  (  prevs3721 ) ) );
            }
            x_dash_v3716 = (  op_dash_add175 ( (  x_dash_v3716 ) , (  char_dash_width3719 ) ) );
        }
    }
    (*  screen3710 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors914 ) ( ) );
    ( (  flush_dash_stdout917 ) ( ) );
    return ( ( * (  rs3713 ) ) .f_changes );
}

static  void *   cast_dash_ptr2647 (    struct timespec * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of2648 (    struct timespec *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct timespec *   zeroed2645 (  ) {
    struct timespec *  temp2646;
    struct timespec *  x648 = (  temp2646 );
    ( ( memset ) ( ( (  cast_dash_ptr2647 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2648 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct timespec *   null_dash_ptr2644 (  ) {
    return ( (  zeroed2645 ) ( ) );
}

static  enum Unit_8   sync2641 (    struct Tui_97 *  tui3581 ) {
    if ( (  eq2402 ( ( ( * (  tui3581 ) ) .f_target_dash_fps ) , (  from_dash_integral181 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3582 = (  op_dash_div1174 ( (  from_dash_integral365 ( 1000000000 ) ) , ( (  size_dash_i64349 ) ( ( (  u32_dash_size971 ) ( ( ( * (  tui3581 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2642 = ( (  undefined951 ) ( ) );
    struct timespec *  now3583 = ( &temp2642 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic953 ) ( ) ) ,  (  now3583 ) ) );
    int64_t  elapsed_dash_ns3584 = (  op_dash_add366 ( (  op_dash_mul347 ( (  op_dash_sub1176 ( ( ( * (  now3583 ) ) .tv_sec ) , ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral365 ( 1000000000 ) ) ) ) , (  op_dash_sub1176 ( ( ( * (  now3583 ) ) .tv_nsec ) , ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3585 = (  op_dash_sub1176 ( (  frame_dash_ns3582 ) , (  elapsed_dash_ns3584 ) ) );
    if ( (  cmp1190 ( (  sleep_dash_ns3585 ) , (  from_dash_integral365 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2643 = ( (struct timespec) { .tv_sec = (  from_dash_integral365 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3585 ) } );
        struct timespec *  ts3586 = ( &temp2643 );
        ( ( nanosleep ) ( (  ts3586 ) ,  ( (  null_dash_ptr2644 ) ( ) ) ) );
    }
    struct timespec  temp2649 = ( (  undefined951 ) ( ) );
    struct timespec *  last_dash_sync3587 = ( &temp2649 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic953 ) ( ) ) ,  (  last_dash_sync3587 ) ) );
    (*  tui3581 ) .f_last_dash_sync = ( * (  last_dash_sync3587 ) );
    (*  tui3581 ) .f_fps_dash_count = (  op_dash_add187 ( ( ( * (  tui3581 ) ) .f_fps_dash_count ) , (  from_dash_integral181 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3588 = (  op_dash_add366 ( (  op_dash_mul347 ( (  op_dash_sub1176 ( ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3581 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral365 ( 1000 ) ) ) ) , (  op_dash_div1174 ( (  op_dash_sub1176 ( ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3581 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral365 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1190 ( (  fps_dash_elapsed_dash_ms3588 ) , (  from_dash_integral365 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3581 ) .f_actual_dash_fps = ( ( * (  tui3581 ) ) .f_fps_dash_count );
        (*  tui3581 ) .f_fps_dash_count = (  from_dash_integral181 ( 0 ) );
        (*  tui3581 ) .f_fps_dash_ts = ( ( * (  tui3581 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2652 (    struct Cell_449 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free2651 (    enum CAllocator_10  dref2373 ,    struct Slice_448  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2652 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2650 (    struct Screen_447 *  screen3686 ) {
    enum CAllocator_10  al3687 = ( ( * (  screen3686 ) ) .f_al );
    ( (  free2651 ) ( (  al3687 ) ,  ( ( * (  screen3686 ) ) .f_current ) ) );
    ( (  free2651 ) ( (  al3687 ) ,  ( ( * (  screen3686 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

struct envunion2654 {
    enum Unit_8  (*fun) (  struct env93*  ,    struct Tui_97 *  );
    struct env93 env;
};

static  enum Unit_8   disable_dash_mouse2656 (  ) {
    ( (  print_dash_str310 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2657 (    struct Termios_87 *  orig_dash_termios3559 ) {
    if ( (  eq696 ( ( ( tcsetattr ) ( ( (  stdin_dash_fileno847 ) ( ) ) ,  ( (  tcsa_dash_flush912 ) ( ) ) ,  ( (  cast_dash_ptr848 ) ( (  orig_dash_termios3559 ) ) ) ) ) , (  op_dash_neg849 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        ( (  panic850 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"tcsetattr" ) ,  ( 9 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2658 (  ) {
    ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2659 (  ) {
    ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_alternative_dash_screen_dash_buffer2660 (  ) {
    ( (  print842 ) ( ( (  from_dash_string220 ) ( ( (uint8_t*)"\x1b[?1049l" ) ,  ( 8 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2655 (   struct env93* env ,    struct Tui_97 *  tui3591 ) {
    ( (  disable_dash_mouse2656 ) ( ) );
    ( (  disable_dash_raw_dash_mode2657 ) ( ( & ( ( * ( env->tui_dash_global_dash_state3572 ) ) .f_orig_dash_termios ) ) ) );
    ( (  show_dash_cursor2658 ) ( ) );
    ( (  reset_dash_colors914 ) ( ) );
    ( (  clear_dash_screen915 ) ( ) );
    ( (  reset_dash_cursor_dash_position2659 ) ( ) );
    ( (  disable_dash_alternative_dash_screen_dash_buffer2660 ) ( ) );
    ( (  flush_dash_stdout917 ) ( ) );
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
    struct Array_278  temp281 = ( (struct Array_278) { ._arr = { ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"move to end of line" ) ,  ( 19 ) ) ) , .f_action = (  lam285 ) } ) , ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"move to beginning of line" ) ,  ( 25 ) ) ) , .f_action = (  lam397 ) } ) , ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"move up yah" ) ,  ( 11 ) ) ) , .f_action = (  lam417 ) } ) } } );
    struct Menu_269  goto_dash_menu4808 = ( ( (struct Menu_269) { .f_name = ( (  from_dash_string220 ) ( ( (uint8_t*)"goto" ) ,  ( 4 ) ) ) , .f_items = ( (  from_dash_listlike277 ) ( ( &temp281 ) ) ) } ) );
    struct Array_419  temp421 = ( (struct Array_419) { ._arr = { ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"open dir bruh" ) ,  ( 13 ) ) ) , .f_action = (  lam422 ) } ) , ( (struct MenuItem_271) { .f_key = ( (  from_dash_charlike282 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string220 ) ( ( (uint8_t*)"copy to system clipboard" ) ,  ( 24 ) ) ) , .f_action = (  lam423 ) } ) } } );
    struct Menu_269  space_dash_menu4813 = ( ( (struct Menu_269) { .f_name = ( (  from_dash_string220 ) ( ( (uint8_t*)"space" ) ,  ( 5 ) ) ) , .f_items = ( (  from_dash_listlike418 ) ( ( &temp421 ) ) ) } ) );
    struct env424 envinst424 = {
        .goto_dash_menu4808 =  goto_dash_menu4808 ,
        .envinst234 = envinst234 ,
        .envinst244 = envinst244 ,
        .envinst254 = envinst254 ,
        .space_dash_menu4813 =  space_dash_menu4813 ,
        .envinst225 = envinst225 ,
        .envinst238 = envinst238 ,
        .envinst256 = envinst256 ,
        .envinst230 = envinst230 ,
        .envinst232 = envinst232 ,
        .envinst247 = envinst247 ,
        .envinst249 = envinst249 ,
    };
    struct env435 envinst435 = {
        .envinst228 = envinst228 ,
        .envinst262 = envinst262 ,
        .envinst60 = envinst60 ,
        .envinst72 = envinst72 ,
        .envinst424 = envinst424 ,
        .envinst247 = envinst247 ,
        .envinst225 = envinst225 ,
        .envinst265 = envinst265 ,
    };
    struct env445 envinst445 = {
        .envinst222 = envinst222 ,
    };
    enum CAllocator_10  al4899 = ( (  idc451 ) ( ) );
    struct TextBuf_117  temp453;
    struct TextBuf_117  temp452 = (  temp453 );
    struct TextBuf_117 *  tb4900 = ( &temp452 );
    struct Slice_454  args4903 = ( (  get455 ) ( ) );
    struct Maybe_85  initial_dash_message4904 = ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    if ( (  cmp302 ( ( (  args4903 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4905 = ( (  from_dash_const_dash_str459 ) ( (  elem_dash_get473 ( (  args4903 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion482  temp481 = ( (struct envunion482){ .fun = (  struct Maybe_480  (*) (  struct env127*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file483 , .env =  envinst127 } );
        struct Maybe_480  dref4906 = ( temp481.fun ( &temp481.env ,  (  al4899 ) ,  (  fname4905 ) ) );
        if ( dref4906.tag == Maybe_480_None_t ) {
            struct envunion831  temp830 = ( (struct envunion831){ .fun = (  struct TextBuf_117  (*) (  struct env125*  ,    enum CAllocator_10  ) )mk486 , .env =  envinst125 } );
            (*  tb4900 ) = ( temp830.fun ( &temp830.env ,  (  al4899 ) ) );
            (*  tb4900 ) .f_filename = ( ( Maybe_85_Just ) ( ( (  clone_dash_0643 ) ( (  fname4905 ) ,  (  al4899 ) ) ) ) );
        }
        else {
            if ( dref4906.tag == Maybe_480_Just_t ) {
                (*  tb4900 ) = ( dref4906 .stuff .Maybe_480_Just_s .field0 );
            }
        }
    } else {
        struct envunion833  temp832 = ( (struct envunion833){ .fun = (  struct TextBuf_117  (*) (  struct env125*  ,    enum CAllocator_10  ) )mk486 , .env =  envinst125 } );
        (*  tb4900 ) = ( temp832.fun ( &temp832.env ,  (  al4899 ) ) );
    }
    struct Config_272  temp834 = ( (struct Config_272) { .f_theme = (  default4307 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_272 *  cfg4908 = ( &temp834 );
    struct Editor_267  temp835 = ( (struct Editor_267) { .f_running = ( true ) , .f_al = (  al4899 ) , .f_pane = ( (  mk836 ) ( (  al4899 ) ,  (  tb4900 ) ) ) , .f_clipboard = ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) , .f_search_dash_term = ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) , .f_mode = ( (struct EditorMode_268) { .tag = EditorMode_268_Normal_t } ) , .f_msg = (  initial_dash_message4904 ) , .f_cfg = (  cfg4908 ) , .f_og_dash_theme = (  default4307 ) } );
    struct Editor_267 *  ed4909 = ( &temp835 );
    struct envunion839  temp838 = ( (struct envunion839){ .fun = (  struct Tui_97  (*) (  struct env92*  ) )mk840 , .env =  envinst92 } );
    struct Tui_97  temp837 = ( temp838.fun ( &temp838.env ) );
    struct Tui_97 *  tui4910 = ( &temp837 );
    struct Screen_447  temp964 = ( (  mk_dash_screen965 ) ( (  tui4910 ) ,  (  al4899 ) ) );
    struct Screen_447 *  screen4911 = ( &temp964 );
    uint32_t  last_dash_redraw_dash_changes4912 = (  from_dash_integral181 ( 0 ) );
    while ( ( ( * (  ed4909 ) ) .f_running ) ) {
        struct env1009 envinst1009 = {
            .envinst95 = envinst95 ,
            .tui4910 =  tui4910 ,
        };
        struct FunIter_1008  temp1007 =  into_dash_iter1016 ( ( (  from_dash_function1017 ) ( ( (struct envunion1015){ .fun = (  struct Maybe_1011  (*) (  struct env1009*  ) )lam1018 , .env =  envinst1009 } ) ) ) );
        while (true) {
            struct Maybe_1011  __cond1209 =  next1210 (&temp1007);
            if (  __cond1209 .tag == 0 ) {
                break;
            }
            struct InputEvent_1012  ev4914 =  __cond1209 .stuff .Maybe_1011_Just_s .field0;
            struct InputEvent_1012  dref4915 = (  ev4914 );
            if ( dref4915.tag == InputEvent_1012_Key_t ) {
                ( (  reset_dash_msg1212 ) ( (  ed4909 ) ) );
                struct envunion1219  temp1218 = ( (struct envunion1219){ .fun = (  enum Unit_8  (*) (  struct env435*  ,    struct Editor_267 *  ,    struct Key_441  ) )handle_dash_key1220 , .env =  envinst435 } );
                ( temp1218.fun ( &temp1218.env ,  (  ed4909 ) ,  ( dref4915 .stuff .InputEvent_1012_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1968  temp1967 = ( (struct envunion1968){ .fun = (  bool  (*) (  struct env99*  ,    struct Screen_447 *  ) )resize_dash_screen_dash_if_dash_needed1969 , .env =  envinst99 } );
        ( temp1967.fun ( &temp1967.env ,  (  screen4911 ) ) );
        if ( ( (  should_dash_redraw1971 ) ( (  tui4910 ) ) ) ) {
            (*  screen4911 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1972 ) ( (  screen4911 ) ) );
            struct Theme_188 *  theme4917 = ( ( * ( ( * (  ed4909 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg1981 ) ( (  screen4911 ) ,  ( ( ( * (  theme4917 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1982 ) ( (  screen4911 ) ,  ( ( ( * (  theme4917 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1983 ) ( (  screen4911 ) ) );
            struct envunion1996  temp1995 = ( (struct envunion1996){ .fun = (  enum Unit_8  (*) (  struct env445*  ,    struct Screen_447 *  ,    struct Editor_267 *  ) )render_dash_editor1997 , .env =  envinst445 } );
            ( temp1995.fun ( &temp1995.env ,  (  screen4911 ) ,  (  ed4909 ) ) );
            last_dash_redraw_dash_changes4912 = ( (  render_dash_screen2494 ) ( (  screen4911 ) ) );
        }
        ( (  sync2641 ) ( (  tui4910 ) ) );
    }
    ( (  free_dash_screen2650 ) ( (  screen4911 ) ) );
    struct envunion2654  temp2653 = ( (struct envunion2654){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct Tui_97 *  ) )deinit2655 , .env =  envinst93 } );
    ( temp2653.fun ( &temp2653.env ,  (  tui4910 ) ) );
}
