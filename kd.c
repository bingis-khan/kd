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
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
};

struct env67 {
    struct env60 envinst60;
    ;
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

struct Maybe_79 {
    enum {
        Maybe_79_None_t,
        Maybe_79_Just_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } Maybe_79_Just_s;
    } stuff;
};

static struct Maybe_79 Maybe_79_Just (  struct StrView_27  field0 ) {
    return ( struct Maybe_79 ) { .tag = Maybe_79_Just_t, .stuff = { .Maybe_79_Just_s = { .field0 = field0 } } };
};

struct StrConcat_78 {
    struct StrView_27  field0;
    struct Maybe_79  field1;
};

static struct StrConcat_78 StrConcat_78_StrConcat (  struct StrView_27  field0 ,  struct Maybe_79  field1 ) {
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

struct StrConcat_83 {
    struct StrView_27  field0;
    size_t  field1;
};

static struct StrConcat_83 StrConcat_83_StrConcat (  struct StrView_27  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_83 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_82 {
    struct StrConcat_83  field0;
    struct StrView_27  field1;
};

static struct StrConcat_82 StrConcat_82_StrConcat (  struct StrConcat_83  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_82 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion81 {
    enum Unit_8  (*fun) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_82  );
    struct env66 env;
};

struct env80 {
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env66 envinst66;
    ;
    ;
};

struct envunion85 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrView_27  );
    struct env67 env;
};

struct env84 {
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
    struct env67 envinst67;
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
    struct Maybe_79  f_filename;
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

static  void *   cast_dash_ptr206 (    struct HighlightColors_191 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of207 (    struct HighlightColors_191 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct HighlightColors_191 *   zeroed204 (  ) {
    struct HighlightColors_191 *  temp205;
    struct HighlightColors_191 *  x648 = (  temp205 );
    ( ( memset ) ( ( (  cast_dash_ptr206 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of207 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct HighlightColors_191 *   null_dash_ptr203 (  ) {
    return ( (  zeroed204 ) ( ) );
}

static  struct Slice_190   empty202 (  ) {
    return ( (struct Slice_190) { .f_ptr = ( (  null_dash_ptr203 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct Tuple2_210 {
    struct StrView_27  field0;
    struct Theme_188 *  field1;
};

static struct Tuple2_210 Tuple2_210_Tuple2 (  struct StrView_27  field0 ,  struct Theme_188 *  field1 ) {
    return ( struct Tuple2_210 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_209 {
    struct Tuple2_210 *  f_ptr;
    size_t  f_count;
};

struct Array_212 {
    struct Tuple2_210 _arr [4];
};

static  struct Tuple2_210 *   cast213 (    struct Array_212 *  x395 ) {
    return ( (struct Tuple2_210 * ) (  x395 ) );
}

static  struct Slice_209   as_dash_slice211 (    struct Array_212 *  arr2052 ) {
    return ( (struct Slice_209) { .f_ptr = ( (  cast213 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 4 ) ) } );
}

static  struct Array_212   from_dash_listlike215 (    struct Array_212 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct StrView_27   from_dash_string217 (    uint8_t *  ptr90 ,    size_t  count92 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr90 ) , .f_count = (  count92 ) } ) } );
}

struct env218 {
    ;
    ;
    struct Slice_209  all_dash_themes4290;
    ;
    ;
    ;
    ;
};

struct Maybe_221 {
    enum {
        Maybe_221_None_t,
        Maybe_221_Just_t,
    } tag;
    union {
        struct {
            enum HighlightType_18  field0;
        } Maybe_221_Just_s;
    } stuff;
};

static struct Maybe_221 Maybe_221_Just (  enum HighlightType_18  field0 ) {
    return ( struct Maybe_221 ) { .tag = Maybe_221_Just_t, .stuff = { .Maybe_221_Just_s = { .field0 = field0 } } };
};

struct envunion220 {
    struct Maybe_221  (*fun) (  struct env152*  ,    struct TextBuf_117 *  ,    struct Pos_26  );
    struct env152 env;
};

struct env219 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct Maybe_224 {
    enum {
        Maybe_224_None_t,
        Maybe_224_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_33  field0;
        } Maybe_224_Just_s;
    } stuff;
};

static struct Maybe_224 Maybe_224_Just (  struct Cursors_33  field0 ) {
    return ( struct Maybe_224 ) { .tag = Maybe_224_Just_t, .stuff = { .Maybe_224_Just_s = { .field0 = field0 } } };
};

struct envunion223 {
    struct Maybe_224  (*fun) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_224  );
    struct env140 env;
};

struct env222 {
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

struct envunion226 {
    struct Maybe_224  (*fun) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_224  );
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
    ;
    ;
};

struct envunion228 {
    struct Maybe_224  (*fun) (  struct env134*  ,    struct TextBuf_117 *  );
    struct env134 env;
};

struct env227 {
    struct env134 envinst134;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion230 {
    struct Maybe_224  (*fun) (  struct env136*  ,    struct TextBuf_117 *  );
    struct env136 env;
};

struct env229 {
    ;
    struct env136 envinst136;
    ;
    ;
    ;
    ;
    ;
};

struct envunion232 {
    struct Maybe_224  (*fun) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_224  );
    struct env140 env;
};

struct env231 {
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
    ;
};

struct envunion234 {
    struct Maybe_224  (*fun) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_224  );
    struct env140 env;
};

struct env233 {
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

struct envunion236 {
    enum Unit_8  (*fun) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  );
    struct env145 env;
};

enum Mode_239 {
    Mode_239_Normal,
    Mode_239_Insert,
    Mode_239_Select,
};

struct ScreenCursorOffset_240 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_238 {
    struct TextBuf_117 *  f_buf;
    struct Pos_26  f_cursor;
    int32_t  f_vi;
    struct Maybe_34  f_sel;
    enum Mode_239  f_mode;
    struct ScreenCursorOffset_240  f_sc_dash_off;
};

struct envunion237 {
    enum Unit_8  (*fun) (  struct env233*  ,    struct Pane_238 *  ,    int32_t  );
    struct env233 env;
};

struct env235 {
    ;
    ;
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
    ;
    ;
    ;
    struct env233 envinst233;
    ;
    ;
    ;
    ;
};

struct envunion242 {
    struct Maybe_224  (*fun) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_224  );
    struct env140 env;
};

struct envunion243 {
    enum Unit_8  (*fun) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  );
    struct env145 env;
};

struct env241 {
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
};

struct envunion245 {
    enum Unit_8  (*fun) (  struct env233*  ,    struct Pane_238 *  ,    int32_t  );
    struct env233 env;
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
    struct env233 envinst233;
    ;
    ;
    ;
    ;
};

struct envunion247 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_238 *  ,    struct StrView_27  );
    struct env222 env;
};

struct envunion248 {
    enum Unit_8  (*fun) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  );
    struct env145 env;
};

struct Tuple2_250 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_250 Tuple2_250_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_250 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion249 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  );
    struct env231 env;
};

struct env246 {
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
    struct env145 envinst145;
    ;
    ;
    struct env231 envinst231;
    ;
    ;
    ;
    ;
    ;
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

struct envunion252 {
    struct StrView_27  (*fun) (  struct env138*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env138 env;
};

struct env251 {
    ;
    struct env138 envinst138;
    ;
    ;
    ;
    ;
    ;
};

struct envunion254 {
    struct StrView_27  (*fun) (  struct env75*  ,    struct StrConcat_78  ,    enum CAllocator_10  );
    struct env75 env;
};

struct env253 {
    struct env75 envinst75;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion256 {
    struct StrView_27  (*fun) (  struct env80*  ,    struct StrConcat_82  ,    enum CAllocator_10  );
    struct env80 env;
};

struct env255 {
    struct env80 envinst80;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion258 {
    struct StrView_27  (*fun) (  struct env84*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env84 env;
};

struct env257 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env84 envinst84;
};

struct Maybe_261 {
    enum {
        Maybe_261_None_t,
        Maybe_261_Just_t,
    } tag;
    union {
        struct {
            struct Theme_188 *  field0;
        } Maybe_261_Just_s;
    } stuff;
};

static struct Maybe_261 Maybe_261_Just (  struct Theme_188 *  field0 ) {
    return ( struct Maybe_261 ) { .tag = Maybe_261_Just_t, .stuff = { .Maybe_261_Just_s = { .field0 = field0 } } };
};

struct envunion260 {
    struct Maybe_261  (*fun) (  struct env218*  ,    struct StrView_27  );
    struct env218 env;
};

struct env259 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env218 envinst218;
    ;
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

struct MenuItem_268 {
    char  f_key;
    struct StrView_27  f_description;
    enum Unit_8 (*  f_action )(    struct Pane_238 *  );
};

struct Slice_267 {
    struct MenuItem_268 *  f_ptr;
    size_t  f_count;
};

struct Menu_266 {
    struct StrView_27  f_name;
    struct Slice_267  f_items;
};

struct EditorMode_265 {
    enum {
        EditorMode_265_Normal_t,
        EditorMode_265_Cmd_t,
        EditorMode_265_Search_t,
        EditorMode_265_Menu_t,
    } tag;
    union {
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_265_Cmd_s;
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_265_Search_s;
        struct {
            struct Menu_266  field0;
        } EditorMode_265_Menu_s;
    } stuff;
};

static struct EditorMode_265 EditorMode_265_Cmd (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_265 ) { .tag = EditorMode_265_Cmd_t, .stuff = { .EditorMode_265_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_265 EditorMode_265_Search (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_265 ) { .tag = EditorMode_265_Search_t, .stuff = { .EditorMode_265_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_265 EditorMode_265_Menu (  struct Menu_266  field0 ) {
    return ( struct EditorMode_265 ) { .tag = EditorMode_265_Menu_t, .stuff = { .EditorMode_265_Menu_s = { .field0 = field0 } } };
};

struct Config_269 {
    struct Theme_188 *  f_theme;
    bool  f_display_dash_line_dash_numbers;
    bool  f_relative_dash_line_dash_numbers;
};

struct Editor_264 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_238  f_pane;
    struct Maybe_79  f_clipboard;
    struct Maybe_79  f_search_dash_term;
    struct EditorMode_265  f_mode;
    struct Maybe_79  f_msg;
    struct Config_269 *  f_cfg;
    struct Theme_188 *  f_og_dash_theme;
};

struct envunion263 {
    enum Unit_8  (*fun) (  struct env257*  ,    struct Editor_264 *  ,    struct StrView_27  );
    struct env257 env;
};

struct envunion270 {
    enum Unit_8  (*fun) (  struct env253*  ,    struct Editor_264 *  ,    struct StrConcat_78  );
    struct env253 env;
};

struct envunion271 {
    enum Unit_8  (*fun) (  struct env255*  ,    struct Editor_264 *  ,    struct StrConcat_82  );
    struct env255 env;
};

struct Maybe_273 {
    enum {
        Maybe_273_None_t,
        Maybe_273_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_273_Just_s;
    } stuff;
};

static struct Maybe_273 Maybe_273_Just (  size_t  field0 ) {
    return ( struct Maybe_273 ) { .tag = Maybe_273_Just_t, .stuff = { .Maybe_273_Just_s = { .field0 = field0 } } };
};

struct envunion272 {
    struct Maybe_273  (*fun) (  struct env123*  ,    struct TextBuf_117 *  ,    struct Maybe_79  );
    struct env123 env;
};

struct env262 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env257 envinst257;
    struct env253 envinst253;
    struct env255 envinst255;
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

struct Array_275 {
    struct MenuItem_268 _arr [3];
};

static  struct MenuItem_268 *   cast_dash_ptr276 (    struct Array_275 *  p398 ) {
    return ( (struct MenuItem_268 * ) (  p398 ) );
}

static  size_t   i32_dash_size277 (    int32_t  x690 ) {
    return ( (size_t ) ( (int64_t ) (  x690 ) ) );
}

static  struct Slice_267   from_dash_listlike274 (    struct Array_275 *  arr2200 ) {
    return ( (struct Slice_267) { .f_ptr = ( (  cast_dash_ptr276 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size277 ) ( ( 3 ) ) ) } );
}

static  bool   eq280 (    size_t  l135 ,    size_t  r137 ) {
    return ( (  l135 ) == (  r137 ) );
}

static  char   from_dash_charlike279 (    uint8_t *  ptr410 ,    size_t  num_dash_bytes412 ) {
    if ( ( !  eq280 ( (  num_dash_bytes412 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp281 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp281);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr410 ) ) ) );
}

enum CursorMovement_285 {
    CursorMovement_285_NoChanges,
    CursorMovement_285_UpdateVI,
    CursorMovement_285_OverrideSelect,
};

struct Tuple2_287 {
    enum CursorMovement_285  field0;
    enum CursorMovement_285  field1;
};

static struct Tuple2_287 Tuple2_287_Tuple2 (  enum CursorMovement_285  field0 ,  enum CursorMovement_285  field1 ) {
    return ( struct Tuple2_287 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq286 (    enum CursorMovement_285  l4451 ,    enum CursorMovement_285  r4453 ) {
    return ( {  struct Tuple2_287  dref4454 = ( ( Tuple2_287_Tuple2 ) ( (  l4451 ) ,  (  r4453 ) ) ) ;  dref4454 .field0 == CursorMovement_285_NoChanges &&  dref4454 .field1 == CursorMovement_285_NoChanges ? ( true ) :  dref4454 .field0 == CursorMovement_285_UpdateVI &&  dref4454 .field1 == CursorMovement_285_UpdateVI ? ( true ) :  dref4454 .field0 == CursorMovement_285_OverrideSelect &&  dref4454 .field1 == CursorMovement_285_OverrideSelect ? ( true ) : ( false ) ; } );
}

struct StrViewIter_290 {
    struct StrView_27  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_290   into_dash_iter291 (    struct StrViewIter_290  self1315 ) {
    return (  self1315 );
}

static  struct StrViewIter_290   into_dash_iter293 (    struct StrView_27  self1312 ) {
    return ( (struct StrViewIter_290) { .f_ds = (  self1312 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_290   chars292 (    struct StrView_27  self1326 ) {
    return ( (  into_dash_iter293 ) ( (  self1326 ) ) );
}

static  struct StrView_27   from_dash_bytes295 (    struct Slice_14  sl2573 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2573 ) } );
}

static  struct Slice_14   to_dash_slice296 (    struct List_13  l2541 ) {
    uint8_t *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_14) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp299 (    size_t  l193 ,    size_t  r195 ) {
    return ( builtin_size_tcmp( (  l193 ) , (  r195 ) ) );
}

struct StrConcat_302 {
    struct StrConcat_82  field0;
    size_t  field1;
};

static struct StrConcat_302 StrConcat_302_StrConcat (  struct StrConcat_82  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_302 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_301 {
    struct StrConcat_302  field0;
    struct Char_65  field1;
};

static struct StrConcat_301 StrConcat_301_StrConcat (  struct StrConcat_302  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_301 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_305 {
    struct StrView_27  field0;
    struct StrConcat_301  field1;
};

static struct StrConcat_305 StrConcat_305_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_301  field1 ) {
    return ( struct StrConcat_305 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_304 {
    struct StrConcat_305  field0;
    struct Char_65  field1;
};

static struct StrConcat_304 StrConcat_304_StrConcat (  struct StrConcat_305  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_304 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32308 (    size_t  x711 ) {
    return ( (int32_t ) (  x711 ) );
}

static  enum Unit_8   print_dash_str307 (    struct StrView_27  self1323 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32308 ) ( ( ( (  self1323 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1323 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str313 (    size_t  self1423 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1423 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str312 (    struct StrConcat_83  self1302 ) {
    struct StrConcat_83  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str307 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str313 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str311 (    struct StrConcat_82  self1302 ) {
    struct StrConcat_82  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str312 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str307 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str310 (    struct StrConcat_302  self1302 ) {
    struct StrConcat_302  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str311 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str313 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Array_317 {
    uint8_t _arr [4];
};

struct Scalar_319 {
    uint32_t  f_value;
};

struct CharDestructured_318 {
    enum {
        CharDestructured_318_Ref_t,
        CharDestructured_318_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_318_Ref_s;
        struct {
            struct Scalar_319  field0;
        } CharDestructured_318_Scalar_s;
    } stuff;
};

static struct CharDestructured_318 CharDestructured_318_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_318 ) { .tag = CharDestructured_318_Ref_t, .stuff = { .CharDestructured_318_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_318 CharDestructured_318_Scalar (  struct Scalar_319  field0 ) {
    return ( struct CharDestructured_318 ) { .tag = CharDestructured_318_Scalar_t, .stuff = { .CharDestructured_318_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq321 (    uint8_t  l125 ,    uint8_t  r127 ) {
    return ( (  l125 ) == (  r127 ) );
}

static  uint8_t   size_dash_u8323 (    size_t  x720 ) {
    return ( (uint8_t ) (  x720 ) );
}

static  size_t   op_dash_div324 (    size_t  l304 ,    size_t  r306 ) {
    return ( (  l304 ) / (  r306 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer322 (    uint8_t *  ptr783 ) {
    return ( (  size_dash_u8323 ) ( (  op_dash_div324 ( ( ( (size_t ) (  ptr783 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral325 (    size_t  x62 ) {
    return ( (uint8_t ) (  x62 ) );
}

static  uint32_t   size_dash_u32326 (    size_t  x714 ) {
    return ( (uint32_t ) (  x714 ) );
}

static  size_t   cast327 (    uint8_t *  x395 ) {
    return ( (size_t ) (  x395 ) );
}

static  struct CharDestructured_318   destructure320 (    struct Char_65  c1244 ) {
    if ( (  eq321 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer322 ) ( ( (  c1244 ) .f_ptr ) ) ) , (  from_dash_integral325 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_318_Scalar ) ( ( (struct Scalar_319) { .f_value = ( (  size_dash_u32326 ) ( ( ( (  cast327 ) ( ( (  c1244 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_318_Ref ) ( (  c1244 ) ) );
    }
}

static  struct Array_317   from_dash_listlike330 (    struct Array_317 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct Array_317   unscalarize328 (    struct Scalar_319  scalar1247 ) {
    if ( (  cmp186 ( ( (  scalar1247 ) .f_value ) , (  from_dash_integral181 ( 128 ) ) ) == 2 ) ) {
        const char*  temp329 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp329);
        abort ( );
        ( Unit_8_Unit );
    }
    uint8_t  b1248 = ( (  u32_dash_u8160 ) ( ( (  scalar1247 ) .f_value ) ) );
    struct Array_317  temp331 = ( (struct Array_317) { ._arr = { (  b1248 ) , (  from_dash_integral325 ( 0 ) ) , (  from_dash_integral325 ( 0 ) ) , (  from_dash_integral325 ( 0 ) ) } } );
    return ( (  from_dash_listlike330 ) ( ( &temp331 ) ) );
}

static  uint8_t *   cast_dash_ptr332 (    struct Array_317 *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Char_65   regularize316 (    struct Char_65  c1251 ,    struct Array_317 *  possible_dash_scalar_dash_mem1253 ) {
    struct CharDestructured_318  dref1254 = ( (  destructure320 ) ( (  c1251 ) ) );
    if ( dref1254.tag == CharDestructured_318_Ref_t ) {
        return ( dref1254 .stuff .CharDestructured_318_Ref_s .field0 );
    }
    else {
        if ( dref1254.tag == CharDestructured_318_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1253 ) = ( (  unscalarize328 ) ( ( dref1254 .stuff .CharDestructured_318_Scalar_s .field0 ) ) );
            return ( (struct Char_65) { .f_ptr = ( (  cast_dash_ptr332 ) ( (  possible_dash_scalar_dash_mem1253 ) ) ) , .f_num_dash_bytes = ( (  c1251 ) .f_num_dash_bytes ) } );
        }
    }
}

static  enum Unit_8   printf_dash_char315 (    struct Char_65  c1259 ) {
    struct Array_317  temp334;
    struct Array_317  temp333 = (  temp334 );
    struct Char_65  c1260 = ( (  regularize316 ) ( (  c1259 ) ,  ( &temp333 ) ) );
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32308 ) ( ( (  c1260 ) .f_num_dash_bytes ) ) ) ,  ( (  c1260 ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str314 (    struct Char_65  self1283 ) {
    ( (  printf_dash_char315 ) ( (  self1283 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str309 (    struct StrConcat_301  self1302 ) {
    struct StrConcat_301  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str306 (    struct StrConcat_305  self1302 ) {
    struct StrConcat_305  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str307 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str309 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str303 (    struct StrConcat_304  self1302 ) {
    struct StrConcat_304  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str306 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp338 (    uint8_t  l178 ,    uint8_t  r180 ) {
    return ( builtin_uint8_tcmp( (  l178 ) , (  r180 ) ) );
}

static  size_t   next_dash_char337 (    uint8_t *  p1263 ) {
    uint8_t  pb1264 = ( * (  p1263 ) );
    if ( (  cmp338 ( (  pb1264 ) , (  from_dash_integral325 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp338 ( (  pb1264 ) , (  from_dash_integral325 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp338 ( (  pb1264 ) , (  from_dash_integral325 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp338 ( (  pb1264 ) , (  from_dash_integral325 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp339 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp339);
                    abort ( );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem336 (    uint8_t *  p1267 ) {
    size_t  clen1268 = ( (  next_dash_char337 ) ( (  p1267 ) ) );
    if ( (  cmp299 ( (  clen1268 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp340 = ( (  from_dash_string57 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp340);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p1267 ) , .f_num_dash_bytes = (  clen1268 ) } );
}

static  struct Char_65   from_dash_charlike335 (    uint8_t *  ptr1271 ,    size_t  num_dash_bytes1273 ) {
    struct Char_65  le_dash_char1274 = ( (  scan_dash_from_dash_mem336 ) ( (  ptr1271 ) ) );
    if ( ( !  eq280 ( ( (  le_dash_char1274 ) .f_num_dash_bytes ) , (  num_dash_bytes1273 ) ) ) ) {
        const char*  temp341 = ( (  from_dash_string57 ) ( ( (uint8_t*)"invalid char given. number of scanned bytes should match the given num-bytes." ) ,  ( 77 ) ) );
        printf("%s\n", temp341);
        abort ( );
        ( Unit_8_Unit );
    }
    return (  le_dash_char1274 );
}

static  enum Unit_8   panic300 (    struct StrConcat_301  errmsg1343 ) {
    ( (  print_dash_str303 ) ( ( ( StrConcat_304_StrConcat ) ( ( ( StrConcat_305_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  int64_t   op_dash_mul344 (    int64_t  l213 ,    int64_t  r215 ) {
    return ( (  l213 ) * (  r215 ) );
}

static  struct Line_12 *   offset_dash_ptr343 (    struct Line_12 *  x377 ,    int64_t  count379 ) {
    struct Line_12  temp345;
    return ( (struct Line_12 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp345 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64346 (    size_t  x672 ) {
    return ( (int64_t ) (  x672 ) );
}

static  struct Line_12 *   get_dash_ptr342 (    struct Slice_11  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp299 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  elem_dash_ptr2173 = ( (  offset_dash_ptr343 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  struct Line_12 *   get_dash_ptr298 (    struct List_9 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp299 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr342 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  struct Line_12   get297 (    struct List_9 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr298 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct StrView_27   line294 (    struct TextBuf_117 *  self4041 ,    int32_t  li4043 ) {
    return ( (  from_dash_bytes295 ) ( ( (  to_dash_slice296 ) ( ( ( (  get297 ) ( ( & ( ( * (  self4041 ) ) .f_buf ) ) ,  ( (  i32_dash_size277 ) ( (  li4043 ) ) ) ) ) .f_line ) ) ) ) );
}

struct Maybe_348 {
    enum {
        Maybe_348_None_t,
        Maybe_348_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_348_Just_s;
    } stuff;
};

static struct Maybe_348 Maybe_348_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_348 ) { .tag = Maybe_348_Just_t, .stuff = { .Maybe_348_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   offset_dash_ptr350 (    uint8_t *  x377 ,    int64_t  count379 ) {
    uint8_t  temp351;
    return ( (uint8_t * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp351 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   cast352 (    uint8_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  size_t   op_dash_add353 (    size_t  l289 ,    size_t  r291 ) {
    return ( (  l289 ) + (  r291 ) );
}

static  struct Maybe_348   next349 (    struct StrViewIter_290 *  self1318 ) {
    if ( (  cmp299 ( ( ( * (  self1318 ) ) .f_i ) , ( ( ( ( * (  self1318 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    uint8_t *  char_dash_ptr1319 = ( ( (  offset_dash_ptr350 ) ( ( (  cast352 ) ( ( ( ( ( * (  self1318 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64346 ) ( ( ( * (  self1318 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1320 = ( (  scan_dash_from_dash_mem336 ) ( (  char_dash_ptr1319 ) ) );
    (*  self1318 ) .f_i = (  op_dash_add353 ( ( ( * (  self1318 ) ) .f_i ) , ( (  char1320 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_348_Just ) ( (  char1320 ) ) );
}

static  int32_t   maybe355 (    struct Maybe_79  x1592 ,    int32_t (*  fun1594 )(    struct StrView_27  ) ,    int32_t  default1596 ) {
    return ( {  struct Maybe_79  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_79_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_79_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  struct Array_317   uninit_dash_buf359 (  ) {
    struct Array_317  temp360;
    return (  temp360 );
}

static  int64_t   from_dash_integral362 (    size_t  x47 ) {
    return ( (int64_t ) (  x47 ) );
}

static  int64_t   op_dash_add363 (    int64_t  l203 ,    int64_t  r205 ) {
    return ( (  l203 ) + (  r205 ) );
}

static  bool   eq357 (    struct Char_65  l1451 ,    struct Char_65  r1453 ) {
    if ( ( !  eq280 ( ( (  l1451 ) .f_num_dash_bytes ) , ( (  r1453 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Array_317  temp358 = ( (  uninit_dash_buf359 ) ( ) );
    struct Char_65  lc1454 = ( (  regularize316 ) ( (  l1451 ) ,  ( &temp358 ) ) );
    struct Array_317  temp361 = ( (  uninit_dash_buf359 ) ( ) );
    struct Char_65  rc1455 = ( (  regularize316 ) ( (  r1453 ) ,  ( &temp361 ) ) );
    int64_t  i1456 = (  from_dash_integral362 ( 0 ) );
    while ( (  cmp299 ( ( (size_t ) (  i1456 ) ) , ( (  lc1454 ) .f_num_dash_bytes ) ) == 0 ) ) {
        if ( ( !  eq321 ( ( * ( (uint8_t * ) ( ( (void*) ( (  lc1454 ) .f_ptr ) ) + (  i1456 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( (  rc1455 ) .f_ptr ) ) + (  i1456 ) ) ) ) ) ) ) {
            return ( false );
        }
        i1456 = (  op_dash_add363 ( (  i1456 ) , (  from_dash_integral362 ( 1 ) ) ) );
    }
    return ( true );
}

static  struct Maybe_79   char_dash_replacement356 (    struct Char_65  c4331 ) {
    if ( (  eq357 ( (  c4331 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_79_Just ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
}

static  size_t   reduce366 (    struct StrViewIter_290  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrViewIter_290  it1124 = ( (  into_dash_iter291 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next349 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp367 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp367);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp368;
    return (  temp368 );
}

static  size_t   lam369 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add353 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count365 (    struct StrViewIter_290  it1129 ) {
    return ( (  reduce366 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam369 ) ) );
}

static  int32_t   lam364 (    struct StrView_27  s4336 ) {
    return ( (  size_dash_i32308 ) ( ( (  count365 ) ( ( (  chars292 ) ( (  s4336 ) ) ) ) ) ) );
}

static  int32_t   max371 (    int32_t  l1372 ,    int32_t  r1374 ) {
    if ( (  cmp173 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  void *   cast_dash_ptr377 (    wchar_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of378 (    wchar_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  wchar_t   zeroed375 (  ) {
    wchar_t  temp376;
    wchar_t  x648 = (  temp376 );
    ( ( memset ) ( ( (  cast_dash_ptr377 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of378 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  char *   cast_dash_ptr379 (    uint8_t *  p398 ) {
    return ( (char * ) (  p398 ) );
}

static  size_t   cast380 (    int64_t  x395 ) {
    return ( (size_t ) (  x395 ) );
}

static  int64_t   op_dash_neg381 (    int64_t  l223 ) {
    return ( (  from_dash_integral362 ( 0 ) ) - (  l223 ) );
}

static  size_t   size_dash_of383 (    uint32_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

struct TypeSize_385 {
    size_t  f_size;
};

static  struct TypeSize_385   get_dash_typesize384 (  ) {
    wchar_t  temp386;
    return ( (struct TypeSize_385) { .f_size = ( sizeof( ( (  temp386 ) ) ) ) } );
}

static  wchar_t   cast388 (    uint32_t  x395 ) {
    return ( (wchar_t ) (  x395 ) );
}

static  wchar_t   to_dash_c_dash_wchar373 (    struct Char_65  c1471 ) {
    struct CharDestructured_318  dref1472 = ( (  destructure320 ) ( (  c1471 ) ) );
    if ( dref1472.tag == CharDestructured_318_Ref_t ) {
        wchar_t  temp374 = ( (  zeroed375 ) ( ) );
        wchar_t *  wcp1474 = ( &temp374 );
        size_t  num_dash_chars1475 = ( ( mbstowcs ) ( (  wcp1474 ) ,  ( (  cast_dash_ptr379 ) ( ( ( dref1472 .stuff .CharDestructured_318_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq280 ( (  num_dash_chars1475 ) , ( ( (  cast380 ) ( ( (  op_dash_neg381 ( (  from_dash_integral362 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp382 = ( (  from_dash_string57 ) ( ( (uint8_t*)"could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp382);
            abort ( );
            ( Unit_8_Unit );
        }
        return ( * (  wcp1474 ) );
    }
    else {
        if ( dref1472.tag == CharDestructured_318_Scalar_t ) {
            if ( ( ! (  eq280 ( ( (  size_dash_of383 ) ( ( ( dref1472 .stuff .CharDestructured_318_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize384 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp387 = ( (  from_dash_string57 ) ( ( (uint8_t*)"Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp387);
                abort ( );
                ( Unit_8_Unit );
            }
            return ( (  cast388 ) ( ( ( dref1472 .stuff .CharDestructured_318_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth372 (    struct Char_65  c2699 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar373 ) ( (  c2699 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth370 (    struct Char_65  c3694 ) {
    return ( (  max371 ) ( ( (  wcwidth372 ) ( (  c3694 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width354 (    struct Char_65  c4334 ) {
    return ( (  maybe355 ) ( ( (  char_dash_replacement356 ) ( (  c4334 ) ) ) ,  (  lam364 ) ,  ( (  rendered_dash_wcwidth370 ) ( (  c4334 ) ) ) ) );
}

static  int32_t   pos_dash_vi288 (    struct TextBuf_117 *  self4350 ,    struct Pos_26  pos4352 ) {
    int32_t  bi4353 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4354 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_290  temp289 =  into_dash_iter291 ( ( (  chars292 ) ( ( (  line294 ) ( (  self4350 ) ,  ( (  pos4352 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_348  __cond347 =  next349 (&temp289);
        if (  __cond347 .tag == 0 ) {
            break;
        }
        struct Char_65  c4356 =  __cond347 .stuff .Maybe_348_Just_s .field0;
        bi4353 = (  op_dash_add175 ( (  bi4353 ) , ( (  size_dash_i32308 ) ( ( (  c4356 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp173 ( ( (  pos4352 ) .f_bi ) , (  bi4353 ) ) == 0 ) ) {
            break;
        }
        vi4354 = (  op_dash_add175 ( (  vi4354 ) , ( (  char_dash_screen_dash_width354 ) ( (  c4356 ) ) ) ) );
    }
    return (  vi4354 );
}

struct Tuple2_391 {
    enum Mode_239  field0;
    enum Mode_239  field1;
};

static struct Tuple2_391 Tuple2_391_Tuple2 (  enum Mode_239  field0 ,  enum Mode_239  field1 ) {
    return ( struct Tuple2_391 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq390 (    enum Mode_239  l4310 ,    enum Mode_239  r4312 ) {
    return ( {  struct Tuple2_391  dref4313 = ( ( Tuple2_391_Tuple2 ) ( (  l4310 ) ,  (  r4312 ) ) ) ;  dref4313 .field0 == Mode_239_Normal &&  dref4313 .field1 == Mode_239_Normal ? ( true ) :  dref4313 .field0 == Mode_239_Insert &&  dref4313 .field1 == Mode_239_Insert ? ( true ) :  dref4313 .field0 == Mode_239_Select &&  dref4313 .field1 == Mode_239_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel389 (    struct Pane_238 *  self4440 ,    struct Maybe_34  sel4442 ) {
    if ( ( !  eq390 ( ( ( * (  self4440 ) ) .f_mode ) , ( Mode_239_Select ) ) ) ) {
        (*  self4440 ) .f_sel = (  sel4442 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors284 (    struct Pane_238 *  self4457 ,    struct Pos_26  cur4459 ,    struct Maybe_34  sel4461 ,    enum CursorMovement_285  cursor_dash_movement_dash_type4463 ) {
    if ( ( !  eq286 ( (  cursor_dash_movement_dash_type4463 ) , ( CursorMovement_285_NoChanges ) ) ) ) {
        (*  self4457 ) .f_vi = ( (  pos_dash_vi288 ) ( ( ( * (  self4457 ) ) .f_buf ) ,  (  cur4459 ) ) );
    }
    (*  self4457 ) .f_cursor = (  cur4459 );
    if ( ( !  eq286 ( (  cursor_dash_movement_dash_type4463 ) , ( CursorMovement_285_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel389 ) ( (  self4457 ) ,  (  sel4461 ) ) );
    } else {
        (*  self4457 ) .f_sel = (  sel4461 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes393 (    struct StrView_27  self2619 ) {
    return ( ( (  self2619 ) .f_contents ) .f_count );
}

static  enum Unit_8   move_dash_to_dash_end283 (    struct Pane_238 *  self4555 ) {
    struct Pos_26  cur4556 = ( ( * (  self4555 ) ) .f_cursor );
    struct Pos_26  temp392 = (  cur4556 );
    temp392 .  f_bi = ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( ( (  line294 ) ( ( ( * (  self4555 ) ) .f_buf ) ,  ( (  cur4556 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors284 ) ( (  self4555 ) ,  ( temp392 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam282 (    struct Pane_238 *  pane4785 ) {
    return ( (  move_dash_to_dash_end283 ) ( (  pane4785 ) ) );
}

struct TakeWhile_399 {
    struct StrViewIter_290  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_398 {
    struct TakeWhile_399  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_398 Map_398_Map (  struct TakeWhile_399  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_398 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_398   into_dash_iter401 (    struct Map_398  self804 ) {
    return (  self804 );
}

static  struct Maybe_348   next403 (    struct TakeWhile_399 *  self989 ) {
    struct Maybe_348  mx990 = ( (  next349 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_348  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_348_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_348_Just ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
            }
        }
    }
}

static  struct Maybe_273   next402 (    struct Map_398 *  dref806 ) {
    struct Maybe_348  dref809 = ( (  next403 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_348_Just_t ) {
            return ( ( Maybe_273_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce400 (    struct Map_398  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_398  it1124 = ( (  into_dash_iter401 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_273  dref1125 = ( (  next402 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_273_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_273_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_273_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp404 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp404);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp405;
    return (  temp405 );
}

static  size_t   lam406 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add353 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum397 (    struct Map_398  it1135 ) {
    return ( (  reduce400 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam406 ) ) );
}

static  struct TakeWhile_399   into_dash_iter408 (    struct TakeWhile_399  self986 ) {
    return (  self986 );
}

static  struct Map_398   map407 (    struct TakeWhile_399  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_399  it816 = ( (  into_dash_iter408 ) ( (  iterable813 ) ) );
    return ( ( Map_398_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_399   take_dash_while409 (    struct StrView_27  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_399) { .f_it = ( (  into_dash_iter293 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  bool   is_dash_whitespace411 (    struct Char_65  c1500 ) {
    return ( ( (  eq357 ( (  c1500 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) || (  eq357 ( (  c1500 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq357 ( (  c1500 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   lam410 (    struct Char_65  c4535 ) {
    return ( (  is_dash_whitespace411 ) ( (  c4535 ) ) );
}

static  size_t   lam412 (    struct Char_65  c4537 ) {
    return ( (  c4537 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line396 (    struct Pane_238 *  pane4531 ,    int32_t  line4533 ) {
    return ( (  size_dash_i32308 ) ( ( (  sum397 ) ( ( (  map407 ) ( ( (  take_dash_while409 ) ( ( (  line294 ) ( ( ( * (  pane4531 ) ) .f_buf ) ,  (  line4533 ) ) ) ,  (  lam410 ) ) ) ,  (  lam412 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented395 (    struct Pane_238 *  self4550 ) {
    struct Pos_26  cur4551 = ( ( * (  self4550 ) ) .f_cursor );
    int32_t  indent4552 = ( (  indent_dash_at_dash_line396 ) ( (  self4550 ) ,  ( (  cur4551 ) .f_line ) ) );
    struct Pos_26  temp413 = (  cur4551 );
    temp413 .  f_bi = (  indent4552 );
    ( (  set_dash_cursors284 ) ( (  self4550 ) ,  ( temp413 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam394 (    struct Pane_238 *  pane4787 ) {
    return ( (  move_dash_to_dash_beginning_dash_indented395 ) ( (  pane4787 ) ) );
}

static  enum Unit_8   lam414 (    struct Pane_238 *  pane4789 ) {
    return ( (  set_dash_cursors284 ) ( (  pane4789 ) ,  ( (struct Pos_26) { .f_line = (  from_dash_integral56 ( 0 ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_NoChanges ) ) );
}

struct Array_416 {
    struct MenuItem_268 _arr [2];
};

static  struct MenuItem_268 *   cast_dash_ptr417 (    struct Array_416 *  p398 ) {
    return ( (struct MenuItem_268 * ) (  p398 ) );
}

static  struct Slice_267   from_dash_listlike415 (    struct Array_416 *  arr2200 ) {
    return ( (struct Slice_267) { .f_ptr = ( (  cast_dash_ptr417 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size277 ) ( ( 2 ) ) ) } );
}

static  enum Unit_8   lam419 (    struct Pane_238 *  pane4792 ) {
    return ( (  move_dash_to_dash_end283 ) ( (  pane4792 ) ) );
}

static  enum Unit_8   lam420 (    struct Pane_238 *  pane4794 ) {
    return ( Unit_8_Unit );
}

struct envunion422 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_238 *  ,    struct StrView_27  );
    struct env222 env;
};

struct envunion423 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Pane_238 *  );
    struct env235 env;
};

struct envunion424 {
    enum Unit_8  (*fun) (  struct env255*  ,    struct Editor_264 *  ,    struct StrConcat_82  );
    struct env255 env;
};

struct envunion425 {
    enum Unit_8  (*fun) (  struct env227*  ,    struct Pane_238 *  );
    struct env227 env;
};

struct envunion426 {
    enum Unit_8  (*fun) (  struct env229*  ,    struct Pane_238 *  );
    struct env229 env;
};

struct envunion427 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Pane_238 *  ,    int32_t  );
    struct env244 env;
};

struct envunion428 {
    enum Unit_8  (*fun) (  struct env246*  ,    struct Pane_238 *  );
    struct env246 env;
};

struct envunion429 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  );
    struct env231 env;
};

struct envunion430 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Pane_238 *  );
    struct env241 env;
};

struct envunion431 {
    enum Unit_8  (*fun) (  struct env251*  ,    struct Editor_264 *  );
    struct env251 env;
};

struct env421 {
    struct env222 envinst222;
    ;
    ;
    ;
    struct env235 envinst235;
    struct Menu_266  goto_dash_menu4790;
    ;
    struct env255 envinst255;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env227 envinst227;
    ;
    struct Menu_266  space_dash_menu4795;
    ;
    ;
    ;
    ;
    struct env229 envinst229;
    ;
    struct env244 envinst244;
    ;
    ;
    ;
    ;
    ;
    struct env246 envinst246;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env231 envinst231;
    ;
    struct env241 envinst241;
    ;
    struct env251 envinst251;
    ;
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

struct envunion433 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_238 *  ,    struct StrView_27  );
    struct env222 env;
};

struct envunion434 {
    enum Unit_8  (*fun) (  struct env262*  ,    struct Editor_264 *  ,    struct StrView_27  );
    struct env262 env;
};

struct envunion435 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_238 *  );
    struct env225 env;
};

struct envunion436 {
    enum Unit_8  (*fun) (  struct env259*  ,    struct Editor_264 *  ,    struct StrView_27  );
    struct env259 env;
};

struct envunion437 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion438 {
    struct Maybe_74  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct Key_440 {
    enum {
        Key_440_Escape_t,
        Key_440_Enter_t,
        Key_440_Tab_t,
        Key_440_Backspace_t,
        Key_440_Char_t,
        Key_440_Ctrl_t,
        Key_440_Up_t,
        Key_440_Down_t,
        Key_440_Left_t,
        Key_440_Right_t,
        Key_440_Home_t,
        Key_440_End_t,
        Key_440_PageUp_t,
        Key_440_PageDown_t,
        Key_440_Delete_t,
        Key_440_Insert_t,
        Key_440_F1_t,
        Key_440_F2_t,
        Key_440_F3_t,
        Key_440_F4_t,
        Key_440_F5_t,
        Key_440_F6_t,
        Key_440_F7_t,
        Key_440_F8_t,
        Key_440_F9_t,
        Key_440_F10_t,
        Key_440_F11_t,
        Key_440_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_440_Char_s;
        struct {
            char  field0;
        } Key_440_Ctrl_s;
    } stuff;
};

static struct Key_440 Key_440_Char (  char  field0 ) {
    return ( struct Key_440 ) { .tag = Key_440_Char_t, .stuff = { .Key_440_Char_s = { .field0 = field0 } } };
};

static struct Key_440 Key_440_Ctrl (  char  field0 ) {
    return ( struct Key_440 ) { .tag = Key_440_Ctrl_t, .stuff = { .Key_440_Ctrl_s = { .field0 = field0 } } };
};

struct envunion439 {
    enum Unit_8  (*fun) (  struct env421*  ,    struct Editor_264 *  ,    struct Key_440  );
    struct env421 env;
};

struct envunion441 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Pane_238 *  ,    int32_t  );
    struct env244 env;
};

struct env432 {
    struct env222 envinst222;
    ;
    ;
    struct env262 envinst262;
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
    struct env259 envinst259;
    struct env60 envinst60;
    ;
    struct env72 envinst72;
    ;
    ;
    ;
    ;
    ;
    struct env421 envinst421;
    ;
    struct env244 envinst244;
    ;
    ;
    ;
};

struct Cell_446 {
    struct Char_65  f_c;
    struct Color_154  f_fg;
    struct Color_154  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_445 {
    struct Cell_446 *  f_ptr;
    size_t  f_count;
};

struct Screen_444 {
    enum CAllocator_10  f_al;
    struct Tui_97 *  f_tui;
    struct Slice_445  f_current;
    struct Slice_445  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_154  f_default_dash_fg;
    struct Color_154  f_default_dash_bg;
};

struct ScreenDims_447 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion443 {
    enum Unit_8  (*fun) (  struct env219*  ,    struct Screen_444 *  ,    struct Pane_238 *  ,    struct ScreenDims_447  ,    struct Config_269 *  );
    struct env219 env;
};

struct env442 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env219 envinst219;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum CAllocator_10   idc448 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct Slice_451 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr453 (    const char* *  x377 ,    int64_t  count379 ) {
    const char*  temp454;
    return ( (const char* * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp454 ) ) ) ) ) ) ) ) );
}

static  size_t   op_dash_sub455 (    size_t  l294 ,    size_t  r296 ) {
    return ( (  l294 ) - (  r296 ) );
}

static  struct Slice_451   get452 (  ) {
    return ( (struct Slice_451) { .f_ptr = ( (  offset_dash_ptr453 ) ( ( _global_argv ) ,  (  from_dash_integral362 ( 1 ) ) ) ) , .f_count = (  op_dash_sub455 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct ConstStrIter_459 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_459   into_dash_iter461 (    struct ConstStrIter_459  self1665 ) {
    return (  self1665 );
}

static  uint8_t *   cast463 (    const char*  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  uint8_t   cast464 (    int32_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_348   next462 (    struct ConstStrIter_459 *  self1668 ) {
    uint8_t *  char_dash_ptr1669 = ( ( (  cast463 ) ( ( ( * (  self1668 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1670 = ( (  offset_dash_ptr350 ) ( (  char_dash_ptr1669 ) ,  ( (  size_dash_i64346 ) ( ( ( * (  self1668 ) ) .f_i ) ) ) ) );
    if ( (  eq321 ( ( * (  optr1670 ) ) , ( (  cast464 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    struct Char_65  char1671 = ( (  scan_dash_from_dash_mem336 ) ( (  optr1670 ) ) );
    (*  self1668 ) .f_i = (  op_dash_add353 ( ( ( * (  self1668 ) ) .f_i ) , ( (  char1671 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_348_Just ) ( (  char1671 ) ) );
}

static  size_t   reduce460 (    struct ConstStrIter_459  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct ConstStrIter_459  it1124 = ( (  into_dash_iter461 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next462 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp465 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp465);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp466;
    return (  temp466 );
}

static  size_t   lam467 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add353 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count458 (    struct ConstStrIter_459  it1129 ) {
    return ( (  reduce460 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam467 ) ) );
}

static  struct ConstStrIter_459   into_dash_iter469 (    const char*  self1662 ) {
    return ( (struct ConstStrIter_459) { .f_ogstr = (  self1662 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_459   chars468 (    const char*  self1677 ) {
    return ( (  into_dash_iter469 ) ( (  self1677 ) ) );
}

static  size_t   const_dash_str_dash_len457 (    const char*  s1926 ) {
    return ( (  count458 ) ( ( (  chars468 ) ( (  s1926 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str456 (    const char*  s2557 ) {
    size_t  len2558 = ( (  const_dash_str_dash_len457 ) ( (  s2557 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  cast463 ) ( (  s2557 ) ) ) , .f_count = (  len2558 ) } ) } );
}

struct Maybe_473 {
    enum {
        Maybe_473_None_t,
        Maybe_473_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_473_Just_s;
    } stuff;
};

static struct Maybe_473 Maybe_473_Just (  const char*  field0 ) {
    return ( struct Maybe_473 ) { .tag = Maybe_473_Just_t, .stuff = { .Maybe_473_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined474 (  ) {
    const char*  temp475;
    return (  temp475 );
}

static  const char*   or_dash_fail472 (    struct Maybe_473  x1353 ,    struct StrConcat_301  errmsg1355 ) {
    struct Maybe_473  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_473_None_t ) {
        ( (  panic300 ) ( (  errmsg1355 ) ) );
        return ( (  undefined474 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_473_Just_t ) {
            return ( dref1356 .stuff .Maybe_473_Just_s .field0 );
        }
    }
}

static  struct Maybe_473   try_dash_get476 (    struct Slice_451  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp299 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_473) { .tag = Maybe_473_None_t } );
    }
    const char* *  elem_dash_ptr2179 = ( (  offset_dash_ptr453 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_473_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  const char*   get471 (    struct Slice_451  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail472 ) ( ( (  try_dash_get476 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get470 (    struct Slice_451  self2195 ,    size_t  idx2197 ) {
    return ( (  get471 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

struct Maybe_477 {
    enum {
        Maybe_477_None_t,
        Maybe_477_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_117  field0;
        } Maybe_477_Just_s;
    } stuff;
};

static struct Maybe_477 Maybe_477_Just (  struct TextBuf_117  field0 ) {
    return ( struct Maybe_477 ) { .tag = Maybe_477_Just_t, .stuff = { .Maybe_477_Just_s = { .field0 = field0 } } };
};

struct envunion479 {
    struct Maybe_477  (*fun) (  struct env127*  ,    enum CAllocator_10  ,    struct StrView_27  );
    struct env127 env;
};

static  void *   cast_dash_ptr492 (    struct Line_12 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of493 (    struct Line_12 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Line_12 *   zeroed490 (  ) {
    struct Line_12 *  temp491;
    struct Line_12 *  x648 = (  temp491 );
    ( ( memset ) ( ( (  cast_dash_ptr492 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of493 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Line_12 *   null_dash_ptr489 (  ) {
    return ( (  zeroed490 ) ( ) );
}

static  struct Slice_11   empty488 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr489 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk487 (    enum CAllocator_10  al2436 ) {
    struct Slice_11  elements2437 = ( (  empty488 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env497 {
    struct List_9 *  list2513;
    struct env6 envinst6;
};

struct envunion498 {
    enum Unit_8  (*fun) (  struct env497*  ,    struct Line_12  );
    struct env497 env;
};

struct ArrayIter_499 {
    struct Array_52  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_499   into_dash_iter501 (    struct Array_52  self2102 ) {
    return ( (struct ArrayIter_499) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_502 {
    enum {
        Maybe_502_None_t,
        Maybe_502_Just_t,
    } tag;
    union {
        struct {
            struct Line_12  field0;
        } Maybe_502_Just_s;
    } stuff;
};

static struct Maybe_502 Maybe_502_Just (  struct Line_12  field0 ) {
    return ( struct Maybe_502 ) { .tag = Maybe_502_Just_t, .stuff = { .Maybe_502_Just_s = { .field0 = field0 } } };
};

struct StrConcat_508 {
    struct StrConcat_82  field0;
    int32_t  field1;
};

static struct StrConcat_508 StrConcat_508_StrConcat (  struct StrConcat_82  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_508 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_507 {
    struct StrConcat_508  field0;
    struct Char_65  field1;
};

static struct StrConcat_507 StrConcat_507_StrConcat (  struct StrConcat_508  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_507 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_511 {
    struct StrView_27  field0;
    struct StrConcat_507  field1;
};

static struct StrConcat_511 StrConcat_511_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_507  field1 ) {
    return ( struct StrConcat_511 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_510 {
    struct StrConcat_511  field0;
    struct Char_65  field1;
};

static struct StrConcat_510 StrConcat_510_StrConcat (  struct StrConcat_511  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_510 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str515 (    int32_t  self1417 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1417 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str514 (    struct StrConcat_508  self1302 ) {
    struct StrConcat_508  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str311 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str515 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str513 (    struct StrConcat_507  self1302 ) {
    struct StrConcat_507  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str514 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str512 (    struct StrConcat_511  self1302 ) {
    struct StrConcat_511  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str307 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str513 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str509 (    struct StrConcat_510  self1302 ) {
    struct StrConcat_510  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str512 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic506 (    struct StrConcat_507  errmsg1343 ) {
    ( (  print_dash_str509 ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Line_12 *   cast_dash_ptr516 (    struct Array_52 *  p398 ) {
    return ( (struct Line_12 * ) (  p398 ) );
}

static  struct Line_12 *   get_dash_ptr505 (    struct Array_52 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp299 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2029 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic506 ) ( ( ( StrConcat_507_StrConcat ) ( ( ( StrConcat_508_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  p2030 = ( ( (  cast_dash_ptr516 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr343 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct Line_12   get504 (    struct Array_52 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr505 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_502   next503 (    struct ArrayIter_499 *  self2109 ) {
    if ( (  cmp299 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_502) { .tag = Maybe_502_None_t } );
    }
    struct Line_12  e2111 = ( (  get504 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add353 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_502_Just ) ( (  e2111 ) ) );
}

static  enum Unit_8   for_dash_each496 (    struct Array_52  iterable1099 ,   struct envunion498  fun1101 ) {
    struct ArrayIter_499  temp500 = ( (  into_dash_iter501 ) ( (  iterable1099 ) ) );
    struct ArrayIter_499 *  it1102 = ( &temp500 );
    while ( ( true ) ) {
        struct Maybe_502  dref1103 = ( (  next503 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_502_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_502_Just_t ) {
                struct envunion498  temp517 = (  fun1101 );
                ( temp517.fun ( &temp517.env ,  ( dref1103 .stuff .Maybe_502_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct TypeSize_525 {
    size_t  f_size;
};

static  struct TypeSize_525   get_dash_typesize524 (  ) {
    struct Line_12  temp526;
    return ( (struct TypeSize_525) { .f_size = ( sizeof( ( (  temp526 ) ) ) ) } );
}

static  struct Line_12 *   cast_dash_ptr527 (    void *  p398 ) {
    return ( (struct Line_12 * ) (  p398 ) );
}

static  size_t   op_dash_mul528 (    size_t  l299 ,    size_t  r301 ) {
    return ( (  l299 ) * (  r301 ) );
}

static  struct Slice_11   allocate523 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize524 ) ( ) ) ) .f_size );
    struct Line_12 *  ptr2371 = ( (  cast_dash_ptr527 ) ( ( ( malloc ) ( (  op_dash_mul528 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env529 {
    ;
    ;
    struct Slice_11  new_dash_slice2453;
};

struct Tuple2_531 {
    struct Line_12  field0;
    int32_t  field1;
};

static struct Tuple2_531 Tuple2_531_Tuple2 (  struct Line_12  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_531 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion530 {
    enum Unit_8  (*fun) (  struct env529*  ,    struct Tuple2_531  );
    struct env529 env;
};

static  enum Unit_8   set533 (    struct Slice_11  slice2187 ,    size_t  i2189 ,    struct Line_12  x2191 ) {
    struct Line_12 *  ep2192 = ( (  get_dash_ptr342 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam532 (   struct env529* env ,    struct Tuple2_531  dref2454 ) {
    return ( (  set533 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size277 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct SliceIter_536 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_537 {
    int32_t  f_from;
};

struct Zip_535 {
    struct SliceIter_536  f_left_dash_it;
    struct FromIter_537  f_right_dash_it;
};

static  struct Zip_535   into_dash_iter539 (    struct Zip_535  self936 ) {
    return (  self936 );
}

struct Maybe_540 {
    enum {
        Maybe_540_None_t,
        Maybe_540_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_531  field0;
        } Maybe_540_Just_s;
    } stuff;
};

static struct Maybe_540 Maybe_540_Just (  struct Tuple2_531  field0 ) {
    return ( struct Maybe_540 ) { .tag = Maybe_540_Just_t, .stuff = { .Maybe_540_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_502   next542 (    struct SliceIter_536 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_502) { .tag = Maybe_502_None_t } );
    }
    struct Line_12  elem2258 = ( * ( (  offset_dash_ptr343 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_502_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_171   next543 (    struct FromIter_537 *  dref913 ) {
    int32_t  v915 = ( ( (* dref913 ) ) .f_from );
    (* dref913 ) .f_from = (  op_dash_add175 ( ( ( (* dref913 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_171_Just ) ( (  v915 ) ) );
}

static  struct Maybe_540   next541 (    struct Zip_535 *  self939 ) {
    struct Zip_535  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_502  dref941 = ( (  next542 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_502_None_t ) {
            return ( (struct Maybe_540) { .tag = Maybe_540_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_502_Just_t ) {
                struct Maybe_171  dref943 = ( (  next543 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_540) { .tag = Maybe_540_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next542 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_540_Just ) ( ( ( Tuple2_531_Tuple2 ) ( ( dref941 .stuff .Maybe_502_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each534 (    struct Zip_535  iterable1099 ,   struct envunion530  fun1101 ) {
    struct Zip_535  temp538 = ( (  into_dash_iter539 ) ( (  iterable1099 ) ) );
    struct Zip_535 *  it1102 = ( &temp538 );
    while ( ( true ) ) {
        struct Maybe_540  dref1103 = ( (  next541 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_540_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_540_Just_t ) {
                struct envunion530  temp544 = (  fun1101 );
                ( temp544.fun ( &temp544.env ,  ( dref1103 .stuff .Maybe_540_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_536   into_dash_iter546 (    struct Slice_11  self2250 ) {
    return ( (struct SliceIter_536) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_537   into_dash_iter547 (    struct FromIter_537  it911 ) {
    return (  it911 );
}

static  struct Zip_535   zip545 (    struct Slice_11  left947 ,    struct FromIter_537  right949 ) {
    struct SliceIter_536  left_dash_it950 = ( (  into_dash_iter546 ) ( (  left947 ) ) );
    struct FromIter_537  right_dash_it951 = ( (  into_dash_iter547 ) ( (  right949 ) ) );
    return ( (struct Zip_535) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  struct FromIter_537   from548 (    int32_t  f908 ) {
    return ( (struct FromIter_537) { .f_from = (  f908 ) } );
}

static  void *   cast_dash_ptr550 (    struct Line_12 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free549 (    enum CAllocator_10  dref2373 ,    struct Slice_11  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr550 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full522 (   struct env1* env ,    struct List_9 *  list2452 ) {
    if ( (  eq280 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate523 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq280 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2453 = ( (  allocate523 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul528 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env529 envinst529 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion530  fun2457 = ( (struct envunion530){ .fun = (  enum Unit_8  (*) (  struct env529*  ,    struct Tuple2_531  ) )lam532 , .env =  envinst529 } );
            ( (  for_dash_each534 ) ( ( (  zip545 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free549 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add520 (   struct env6* env ,    struct List_9 *  list2460 ,    struct Line_12  elem2462 ) {
    struct envunion7  temp521 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full522 , .env =  env->envinst1 } );
    ( temp521.fun ( &temp521.env ,  (  list2460 ) ) );
    ( (  set533 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add353 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam518 (   struct env497* env ,    struct Line_12  x2517 ) {
    struct envunion47  temp519 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add520 , .env =  env->envinst6 } );
    return ( temp519.fun ( &temp519.env ,  ( env->list2513 ) ,  (  x2517 ) ) );
}

static  enum Unit_8   add_dash_all495 (   struct env46* env ,    struct List_9 *  list2513 ,    struct Array_52  it2515 ) {
    struct env497 envinst497 = {
        .list2513 =  list2513 ,
        .envinst6 = env->envinst6 ,
    };
    ( (  for_dash_each496 ) ( (  it2515 ) ,  ( (struct envunion498){ .fun = (  enum Unit_8  (*) (  struct env497*  ,    struct Line_12  ) )lam518 , .env =  envinst497 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter485 (   struct env50* env ,    struct Array_52  iter2548 ,    enum CAllocator_10  al2550 ) {
    struct List_9  temp486 = ( (  mk487 ) ( (  al2550 ) ) );
    struct List_9 *  list2551 = ( &temp486 );
    struct envunion51  temp494 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Array_52  ) )add_dash_all495 , .env =  env->envinst46 } );
    ( temp494.fun ( &temp494.env ,  (  list2551 ) ,  (  iter2548 ) ) );
    return ( * (  list2551 ) );
}

static  struct Array_52   from_dash_listlike551 (    struct Array_52 *  self369 ) {
    return ( * (  self369 ) );
}

static  void *   cast_dash_ptr559 (    struct Highlight_17 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of560 (    struct Highlight_17 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Highlight_17 *   zeroed557 (  ) {
    struct Highlight_17 *  temp558;
    struct Highlight_17 *  x648 = (  temp558 );
    ( ( memset ) ( ( (  cast_dash_ptr559 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of560 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Highlight_17 *   null_dash_ptr556 (  ) {
    return ( (  zeroed557 ) ( ) );
}

static  struct Slice_16   empty555 (  ) {
    return ( (struct Slice_16) { .f_ptr = ( (  null_dash_ptr556 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_15   mk554 (    enum CAllocator_10  al2436 ) {
    struct Slice_16  elements2437 = ( (  empty555 ) ( ) );
    return ( (struct List_15) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_12   mk_dash_line553 (    struct List_13  initial4019 ) {
    return ( (struct Line_12) { .f_line = (  initial4019 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk554 ) ( ( (  initial4019 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr566 (    uint8_t * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of567 (    uint8_t *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  uint8_t *   zeroed564 (  ) {
    uint8_t *  temp565;
    uint8_t *  x648 = (  temp565 );
    ( ( memset ) ( ( (  cast_dash_ptr566 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of567 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint8_t *   null_dash_ptr563 (  ) {
    return ( (  zeroed564 ) ( ) );
}

static  struct Slice_14   empty562 (  ) {
    return ( (struct Slice_14) { .f_ptr = ( (  null_dash_ptr563 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_13   mk561 (    enum CAllocator_10  al2436 ) {
    struct Slice_14  elements2437 = ( (  empty562 ) ( ) );
    return ( (struct List_13) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr574 (    struct Changeset_32 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of575 (    struct Changeset_32 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Changeset_32 *   zeroed572 (  ) {
    struct Changeset_32 *  temp573;
    struct Changeset_32 *  x648 = (  temp573 );
    ( ( memset ) ( ( (  cast_dash_ptr574 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of575 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Changeset_32 *   null_dash_ptr571 (  ) {
    return ( (  zeroed572 ) ( ) );
}

static  struct Slice_31   empty570 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr571 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk569 (    enum CAllocator_10  al2436 ) {
    struct Slice_31  elements2437 = ( (  empty570 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_118   mk_dash_actions568 (    enum CAllocator_10  al4008 ) {
    return ( (struct Actions_118) { .f_list = ( (  mk569 ) ( (  al4008 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_119_NoChangeset ) } );
}

static  struct TextBuf_117   mk483 (   struct env125* env ,    enum CAllocator_10  al4124 ) {
    struct envunion126  temp484 = ( (struct envunion126){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  ) )from_dash_iter485 , .env =  env->envinst50 } );
    struct Array_52  temp552 = ( (struct Array_52) { ._arr = { ( (  mk_dash_line553 ) ( ( (  mk561 ) ( (  al4124 ) ) ) ) ) } } );
    return ( (struct TextBuf_117) { .f_al = (  al4124 ) , .f_buf = ( temp484.fun ( &temp484.env ,  ( (  from_dash_listlike551 ) ( ( &temp552 ) ) ) ,  (  al4124 ) ) ) , .f_actions = ( (  mk_dash_actions568 ) ( (  al4124 ) ) ) , .f_filename = ( (struct Maybe_79) { .tag = Maybe_79_None_t } ) , .f_filetype = ( Filetype_120_Text ) } );
}

static  size_t   min584 (    size_t  l1367 ,    size_t  r1369 ) {
    if ( (  cmp299 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Slice_14   subslice583 (    struct Slice_14  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    uint8_t *  begin_dash_ptr2209 = ( (  offset_dash_ptr350 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp299 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp299 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub455 ( ( (  min584 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct Slice_14   from582 (    struct Slice_14  slice2213 ,    size_t  from2215 ) {
    return ( (  subslice583 ) ( (  slice2213 ) ,  (  from2215 ) ,  ( (  slice2213 ) .f_count ) ) );
}

static  struct StrView_27   byte_dash_substr_dash_from581 (    struct StrView_27  s2614 ,    size_t  from2616 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from582 ) ( ( (  s2614 ) .f_contents ) ,  (  from2616 ) ) ) } );
}

static  struct StrView_27   drop_dash_while578 (    struct StrView_27  sv2643 ,    bool (*  fun2645 )(    struct Char_65  ) ) {
    size_t  from2646 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_290  temp579 =  into_dash_iter291 ( ( (  chars292 ) ( (  sv2643 ) ) ) );
    while (true) {
        struct Maybe_348  __cond580 =  next349 (&temp579);
        if (  __cond580 .tag == 0 ) {
            break;
        }
        struct Char_65  c2648 =  __cond580 .stuff .Maybe_348_Just_s .field0;
        if ( ( ! ( (  fun2645 ) ( (  c2648 ) ) ) ) ) {
            break;
        }
        from2646 = (  op_dash_add353 ( (  from2646 ) , ( (  c2648 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from581 ) ( (  sv2643 ) ,  (  from2646 ) ) );
}

static  bool   lam585 (    struct Char_65  c4031 ) {
    return (  eq357 ( (  c4031 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) );
}

static  uint8_t   undefined589 (  ) {
    uint8_t  temp590;
    return (  temp590 );
}

static  uint8_t   or_dash_fail588 (    struct Maybe_74  x1353 ,    struct StrConcat_301  errmsg1355 ) {
    struct Maybe_74  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_74_None_t ) {
        ( (  panic300 ) ( (  errmsg1355 ) ) );
        return ( (  undefined589 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_74_Just_t ) {
            return ( dref1356 .stuff .Maybe_74_Just_s .field0 );
        }
    }
}

static  struct Maybe_74   try_dash_get591 (    struct Slice_14  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp299 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    }
    uint8_t *  elem_dash_ptr2179 = ( (  offset_dash_ptr350 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_74_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  uint8_t   get587 (    struct Slice_14  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail588 ) ( ( (  try_dash_get591 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get586 (    struct Slice_14  self2195 ,    size_t  idx2197 ) {
    return ( (  get587 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  uint8_t   ascii_dash_u8592 (    char  c1488 ) {
    return ( ( (uint8_t ) (  c1488 ) ) );
}

static  struct StrView_27   byte_dash_substr593 (    struct StrView_27  s2607 ,    size_t  from2609 ,    size_t  to2611 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice583 ) ( ( (  s2607 ) .f_contents ) ,  (  from2609 ) ,  (  to2611 ) ) ) } );
}

static  struct Maybe_79   extension577 (    struct StrView_27  path4029 ) {
    struct StrView_27  path4032 = ( (  drop_dash_while578 ) ( (  path4029 ) ,  (  lam585 ) ) );
    size_t  i4033 = ( ( (  path4032 ) .f_contents ) .f_count );
    while ( (  cmp299 ( (  i4033 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i4033 = (  op_dash_sub455 ( (  i4033 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq321 ( (  elem_dash_get586 ( ( (  path4032 ) .f_contents ) , (  i4033 ) ) ) , ( (  ascii_dash_u8592 ) ( ( (  from_dash_charlike279 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq280 ( (  i4033 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    struct StrView_27  ext4034 = ( (  byte_dash_substr593 ) ( (  path4032 ) ,  (  op_dash_add353 ( (  i4033 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path4032 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_79_Just ) ( (  ext4034 ) ) );
}

struct Array_595 {
    struct StrView_27 _arr [2];
};

struct env597 {
    ;
    struct StrView_27  x1180;
};

struct envunion598 {
    bool  (*fun) (  struct env597*  ,    struct StrView_27  );
    struct env597 env;
};

struct env600 {
    struct envunion598  fun1160;
};

struct envunion601 {
    bool  (*fun) (  struct env600*  ,    struct StrView_27  ,    bool  );
    struct env600 env;
};

struct ArrayIter_602 {
    struct Array_595  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_602   into_dash_iter603 (    struct Array_595  self2102 ) {
    return ( (struct ArrayIter_602) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr607 (    struct Array_595 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   offset_dash_ptr608 (    struct StrView_27 *  x377 ,    int64_t  count379 ) {
    struct StrView_27  temp609;
    return ( (struct StrView_27 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp609 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr606 (    struct Array_595 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp299 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2029 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic506 ) ( ( ( StrConcat_507_StrConcat ) ( ( ( StrConcat_508_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr607 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr608 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get605 (    struct Array_595 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr606 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_79   next604 (    struct ArrayIter_602 *  self2109 ) {
    if ( (  cmp299 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    struct StrView_27  e2111 = ( (  get605 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add353 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_79_Just ) ( (  e2111 ) ) );
}

static  bool   reduce599 (    struct Array_595  iterable1118 ,    bool  base1120 ,   struct envunion601  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_602  it1124 = ( (  into_dash_iter603 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_79  dref1125 = ( (  next604 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_79_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_79_Just_t ) {
                struct envunion601  temp610 = (  fun1122 );
                x1123 = ( temp610.fun ( &temp610.env ,  ( dref1125 .stuff .Maybe_79_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp611 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp611);
    abort ( );
    ( Unit_8_Unit );
    bool  temp612;
    return (  temp612 );
}

static  bool   lam613 (   struct env600* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion598  temp614 = ( env->fun1160 );
    return ( ( temp614.fun ( &temp614.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any596 (    struct Array_595  it1158 ,   struct envunion598  fun1160 ) {
    struct env600 envinst600 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce599 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion601){ .fun = (  bool  (*) (  struct env600*  ,    struct StrView_27  ,    bool  ) )lam613 , .env =  envinst600 } ) ) );
}

struct SliceIter_620 {
    struct Slice_14  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_619 {
    struct SliceIter_620  f_left_dash_it;
    struct SliceIter_620  f_right_dash_it;
};

struct Tuple2_621 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_621 Tuple2_621_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_621 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env623 {
    bool (*  fun1151 )(    struct Tuple2_621  );
};

struct envunion624 {
    bool  (*fun) (  struct env623*  ,    struct Tuple2_621  ,    bool  );
    struct env623 env;
};

static  struct Zip_619   into_dash_iter625 (    struct Zip_619  self936 ) {
    return (  self936 );
}

struct Maybe_626 {
    enum {
        Maybe_626_None_t,
        Maybe_626_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_621  field0;
        } Maybe_626_Just_s;
    } stuff;
};

static struct Maybe_626 Maybe_626_Just (  struct Tuple2_621  field0 ) {
    return ( struct Maybe_626 ) { .tag = Maybe_626_Just_t, .stuff = { .Maybe_626_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_74   next628 (    struct SliceIter_620 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    }
    uint8_t  elem2258 = ( * ( (  offset_dash_ptr350 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_74_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_626   next627 (    struct Zip_619 *  self939 ) {
    struct Zip_619  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_74  dref941 = ( (  next628 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_74_None_t ) {
            return ( (struct Maybe_626) { .tag = Maybe_626_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_74_Just_t ) {
                struct Maybe_74  dref943 = ( (  next628 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_74_None_t ) {
                    return ( (struct Maybe_626) { .tag = Maybe_626_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_74_Just_t ) {
                        ( (  next628 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next628 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_626_Just ) ( ( ( Tuple2_621_Tuple2 ) ( ( dref941 .stuff .Maybe_74_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_74_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce622 (    struct Zip_619  iterable1118 ,    bool  base1120 ,   struct envunion624  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Zip_619  it1124 = ( (  into_dash_iter625 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_626  dref1125 = ( (  next627 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_626_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_626_Just_t ) {
                struct envunion624  temp629 = (  fun1122 );
                x1123 = ( temp629.fun ( &temp629.env ,  ( dref1125 .stuff .Maybe_626_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp630 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp630);
    abort ( );
    ( Unit_8_Unit );
    bool  temp631;
    return (  temp631 );
}

static  bool   lam632 (   struct env623* env ,    struct Tuple2_621  e1153 ,    bool  x1155 ) {
    return ( ( ( env->fun1151 ) ( (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all618 (    struct Zip_619  it1149 ,    bool (*  fun1151 )(    struct Tuple2_621  ) ) {
    struct env623 envinst623 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce622 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion624){ .fun = (  bool  (*) (  struct env623*  ,    struct Tuple2_621  ,    bool  ) )lam632 , .env =  envinst623 } ) ) );
}

static  struct SliceIter_620   into_dash_iter634 (    struct Slice_14  self2250 ) {
    return ( (struct SliceIter_620) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_619   zip633 (    struct Slice_14  left947 ,    struct Slice_14  right949 ) {
    struct SliceIter_620  left_dash_it950 = ( (  into_dash_iter634 ) ( (  left947 ) ) );
    struct SliceIter_620  right_dash_it951 = ( (  into_dash_iter634 ) ( (  right949 ) ) );
    return ( (struct Zip_619) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  bool   lam635 (    struct Tuple2_621  dref2290 ) {
    return (  eq321 ( ( dref2290 .field0 ) , ( dref2290 .field1 ) ) );
}

static  bool   eq617 (    struct Slice_14  l2287 ,    struct Slice_14  r2289 ) {
    if ( ( !  eq280 ( ( (  l2287 ) .f_count ) , ( (  r2289 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all618 ) ( ( (  zip633 ) ( (  l2287 ) ,  (  r2289 ) ) ) ,  (  lam635 ) ) );
}

static  bool   eq616 (    struct StrView_27  l2651 ,    struct StrView_27  r2653 ) {
    return (  eq617 ( ( (  l2651 ) .f_contents ) , ( (  r2653 ) .f_contents ) ) );
}

static  bool   lam615 (   struct env597* env ,    struct StrView_27  e1184 ) {
    return (  eq616 ( (  e1184 ) , ( env->x1180 ) ) );
}

static  bool   one_dash_of594 (    struct StrView_27  x1180 ,    struct Array_595  it1182 ) {
    struct env597 envinst597 = {
        .x1180 =  x1180 ,
    };
    return ( (  any596 ) ( (  it1182 ) ,  ( (struct envunion598){ .fun = (  bool  (*) (  struct env597*  ,    struct StrView_27  ) )lam615 , .env =  envinst597 } ) ) );
}

static  struct Array_595   from_dash_listlike636 (    struct Array_595 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct StrView_27   from_dash_charlike639 (    uint8_t *  ptr81 ,    size_t  count83 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr81 ) , .f_count = (  count83 ) } ) } );
}

static  enum Filetype_120   detect_dash_filetype_dash_from_dash_filename576 (    struct StrView_27  filename4026 ) {
    struct Maybe_79  mext4035 = ( (  extension577 ) ( (  filename4026 ) ) );
    struct Maybe_79  dref4036 = (  mext4035 );
    if ( dref4036.tag == Maybe_79_None_t ) {
        return ( Filetype_120_Text );
    }
    else {
        if ( dref4036.tag == Maybe_79_Just_t ) {
            struct Array_595  temp637 = ( (struct Array_595) { ._arr = { ( (  from_dash_string217 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"kkc" ) ,  ( 3 ) ) ) } } );
            if ( ( (  one_dash_of594 ) ( ( dref4036 .stuff .Maybe_79_Just_s .field0 ) ,  ( (  from_dash_listlike636 ) ( ( &temp637 ) ) ) ) ) ) {
                return ( Filetype_120_KC );
            } else {
                if ( (  eq616 ( ( dref4036 .stuff .Maybe_79_Just_s .field0 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                    return ( Filetype_120_Markdown );
                } else {
                    if ( (  eq616 ( ( dref4036 .stuff .Maybe_79_Just_s .field0 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"gcode" ) ,  ( 5 ) ) ) ) ) ) {
                        return ( Filetype_120_GCode );
                    } else {
                        struct Array_595  temp638 = ( (struct Array_595) { ._arr = { ( (  from_dash_string217 ) ( ( (uint8_t*)"bf" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) } } );
                        if ( ( (  one_dash_of594 ) ( ( dref4036 .stuff .Maybe_79_Just_s .field0 ) ,  ( (  from_dash_listlike636 ) ( ( &temp638 ) ) ) ) ) ) {
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

struct TypeSize_643 {
    size_t  f_size;
};

static  struct TypeSize_643   get_dash_typesize642 (  ) {
    uint8_t  temp644;
    return ( (struct TypeSize_643) { .f_size = ( sizeof( ( (  temp644 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr645 (    void *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   allocate641 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize642 ) ( ) ) ) .f_size );
    uint8_t *  ptr2371 = ( (  cast_dash_ptr645 ) ( ( ( malloc ) ( (  op_dash_mul528 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_14) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct StrConcat_648 {
    struct StrConcat_302  field0;
    struct StrView_27  field1;
};

static struct StrConcat_648 StrConcat_648_StrConcat (  struct StrConcat_302  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_648 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_651 {
    struct StrView_27  field0;
    struct StrConcat_648  field1;
};

static struct StrConcat_651 StrConcat_651_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_648  field1 ) {
    return ( struct StrConcat_651 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_650 {
    struct StrConcat_651  field0;
    struct Char_65  field1;
};

static struct StrConcat_650 StrConcat_650_StrConcat (  struct StrConcat_651  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_650 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str653 (    struct StrConcat_648  self1302 ) {
    struct StrConcat_648  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str310 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str307 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str652 (    struct StrConcat_651  self1302 ) {
    struct StrConcat_651  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str307 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str653 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str649 (    struct StrConcat_650  self1302 ) {
    struct StrConcat_650  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str652 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic647 (    struct StrConcat_648  errmsg1343 ) {
    ( (  print_dash_str649 ) ( ( ( StrConcat_650_StrConcat ) ( ( ( StrConcat_651_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Zip_655 {
    struct SliceIter_620  f_left_dash_it;
    struct FromIter_537  f_right_dash_it;
};

struct env656 {
    ;
    struct Slice_14  dest2281;
    ;
};

struct Tuple2_658 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_658 Tuple2_658_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_658 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion657 {
    enum Unit_8  (*fun) (  struct env656*  ,    struct Tuple2_658  );
    struct env656 env;
};

static  struct Zip_655   into_dash_iter660 (    struct Zip_655  self936 ) {
    return (  self936 );
}

struct Maybe_661 {
    enum {
        Maybe_661_None_t,
        Maybe_661_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_658  field0;
        } Maybe_661_Just_s;
    } stuff;
};

static struct Maybe_661 Maybe_661_Just (  struct Tuple2_658  field0 ) {
    return ( struct Maybe_661 ) { .tag = Maybe_661_Just_t, .stuff = { .Maybe_661_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_661   next662 (    struct Zip_655 *  self939 ) {
    struct Zip_655  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_74  dref941 = ( (  next628 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_74_None_t ) {
            return ( (struct Maybe_661) { .tag = Maybe_661_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_74_Just_t ) {
                struct Maybe_171  dref943 = ( (  next543 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_661) { .tag = Maybe_661_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next628 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_661_Just ) ( ( ( Tuple2_658_Tuple2 ) ( ( dref941 .stuff .Maybe_74_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each654 (    struct Zip_655  iterable1099 ,   struct envunion657  fun1101 ) {
    struct Zip_655  temp659 = ( (  into_dash_iter660 ) ( (  iterable1099 ) ) );
    struct Zip_655 *  it1102 = ( &temp659 );
    while ( ( true ) ) {
        struct Maybe_661  dref1103 = ( (  next662 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_661_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_661_Just_t ) {
                struct envunion657  temp663 = (  fun1101 );
                ( temp663.fun ( &temp663.env ,  ( dref1103 .stuff .Maybe_661_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_655   zip664 (    struct Slice_14  left947 ,    struct FromIter_537  right949 ) {
    struct SliceIter_620  left_dash_it950 = ( (  into_dash_iter634 ) ( (  left947 ) ) );
    struct FromIter_537  right_dash_it951 = ( (  into_dash_iter547 ) ( (  right949 ) ) );
    return ( (struct Zip_655) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  uint8_t *   get_dash_ptr667 (    struct Slice_14  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp299 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr2173 = ( (  offset_dash_ptr350 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set666 (    struct Slice_14  slice2187 ,    size_t  i2189 ,    uint8_t  x2191 ) {
    uint8_t *  ep2192 = ( (  get_dash_ptr667 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam665 (   struct env656* env ,    struct Tuple2_658  dref2282 ) {
    return ( (  set666 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size277 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to646 (    struct Slice_14  src2279 ,    struct Slice_14  dest2281 ) {
    if ( (  cmp299 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic647 ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env656 envinst656 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each654 ) ( ( (  zip664 ) ( (  src2279 ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion657){ .fun = (  enum Unit_8  (*) (  struct env656*  ,    struct Tuple2_658  ) )lam665 , .env =  envinst656 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   char_dash_u8668 (    struct Char_65  c1440 ) {
    struct CharDestructured_318  dref1441 = ( (  destructure320 ) ( (  c1440 ) ) );
    if ( dref1441.tag == CharDestructured_318_Ref_t ) {
        return ( * ( ( dref1441 .stuff .CharDestructured_318_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1441.tag == CharDestructured_318_Scalar_t ) {
            return ( (  u32_dash_u8160 ) ( ( ( dref1441 .stuff .CharDestructured_318_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_27   clone_dash_0640 (    struct StrView_27  s2576 ,    enum CAllocator_10  al2578 ) {
    size_t  cnt2579 = ( ( (  s2576 ) .f_contents ) .f_count );
    struct Slice_14  nus2580 = ( (  allocate641 ) ( (  al2578 ) ,  (  op_dash_add353 ( (  cnt2579 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to646 ) ( ( (  s2576 ) .f_contents ) ,  (  nus2580 ) ) );
    ( (  set666 ) ( (  nus2580 ) ,  (  cnt2579 ) ,  ( (  char_dash_u8668 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  nus2580 ) .f_ptr ) , .f_count = (  cnt2579 ) } ) } );
}

static  const char*   from_dash_charlike670 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
}

static  void *   cast_dash_ptr675 (    FILE * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of676 (    FILE *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  FILE *   zeroed673 (  ) {
    FILE *  temp674;
    FILE *  x648 = (  temp674 );
    ( ( memset ) ( ( (  cast_dash_ptr675 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of676 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  FILE *   null_dash_ptr672 (  ) {
    return ( (  zeroed673 ) ( ) );
}

static  bool   is_dash_ptr_dash_null671 (    FILE *  p658 ) {
    return ( (  p658 ) == ( (  null_dash_ptr672 ) ( ) ) );
}

static  int32_t   seek_dash_end677 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  int32_t   seek_dash_set678 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct Char_65   nullchar679 (  ) {
    return ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_79   try_dash_read_dash_contents669 (    const char*  filename3164 ,    enum CAllocator_10  al3166 ) {
    FILE *  file3167 = ( ( fopen ) ( (  filename3164 ) ,  ( (  from_dash_charlike670 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null671 ) ( (  file3167 ) ) ) ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    ( ( fseek ) ( (  file3167 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end677 ) ( ) ) ) );
    int32_t  file_dash_size3168 = ( ( ftell ) ( (  file3167 ) ) );
    ( ( fseek ) ( (  file3167 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set678 ) ( ) ) ) );
    struct Slice_14  file_dash_buf3169 = ( ( (  allocate641 ) ( (  al3166 ) ,  (  op_dash_add353 ( ( (  i32_dash_size277 ) ( (  file_dash_size3168 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3169 ) .f_ptr ) ,  (  file_dash_size3168 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file3167 ) ) );
    ( (  set666 ) ( (  file_dash_buf3169 ) ,  ( (  i32_dash_size277 ) ( (  file_dash_size3168 ) ) ) ,  ( (  char_dash_u8668 ) ( ( (  nullchar679 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3167 ) ) );
    struct StrView_27  str3170 = ( (struct StrView_27) { .f_contents = ( (  subslice583 ) ( (  file_dash_buf3169 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub455 ( ( (  file_dash_buf3169 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_79_Just ) ( (  str3170 ) ) );
}

static  const char*   cast681 (    uint8_t *  x395 ) {
    return ( (const char* ) (  x395 ) );
}

static  const char*   as_dash_const_dash_str680 (    struct StrView_27  s2583 ) {
    return ( (  cast681 ) ( ( ( (  s2583 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr684 (    uint8_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free683 (    enum CAllocator_10  dref2373 ,    struct Slice_14  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr684 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free682 (    struct StrView_27  s2591 ,    enum CAllocator_10  al2593 ) {
    ( (  free683 ) ( (  al2593 ) ,  ( (struct Slice_14) { .f_ptr = ( ( (  s2591 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

struct Tuple2_686 {
    struct Maybe_74  field0;
    struct Maybe_74  field1;
};

static struct Tuple2_686 Tuple2_686_Tuple2 (  struct Maybe_74  field0 ,  struct Maybe_74  field1 ) {
    return ( struct Tuple2_686 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq685 (    struct Maybe_74  l150 ,    struct Maybe_74  r152 ) {
    struct Tuple2_686  dref153 = ( ( Tuple2_686_Tuple2 ) ( (  l150 ) ,  (  r152 ) ) );
    if ( dref153 .field0.tag == Maybe_74_None_t && dref153 .field1.tag == Maybe_74_None_t ) {
        return ( true );
    }
    else {
        if ( dref153 .field0.tag == Maybe_74_Just_t && dref153 .field1.tag == Maybe_74_Just_t ) {
            return (  eq321 ( ( dref153 .field0 .stuff .Maybe_74_Just_s .field0 ) , ( dref153 .field1 .stuff .Maybe_74_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  enum Ordering_174   cmp690 (    struct Pos_26  l3838 ,    struct Pos_26  r3840 ) {
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

static  struct Pos_26   min689 (    struct Pos_26  l1367 ,    struct Pos_26  r1369 ) {
    if ( (  cmp690 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Pos_26   max691 (    struct Pos_26  l1372 ,    struct Pos_26  r1374 ) {
    if ( (  cmp690 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  bool   eq693 (    int32_t  l115 ,    int32_t  r117 ) {
    return ( (  l115 ) == (  r117 ) );
}

static  bool   eq692 (    struct Pos_26  l3833 ,    struct Pos_26  r3835 ) {
    return ( (  eq693 ( ( (  l3833 ) .f_line ) , ( (  r3835 ) .f_line ) ) ) && (  eq693 ( ( (  l3833 ) .f_bi ) , ( (  r3835 ) .f_bi ) ) ) );
}

static  size_t   size694 (    struct List_9 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

static  enum Unit_8   set698 (    struct List_9 *  list2426 ,    size_t  i2428 ,    struct Line_12  elem2430 ) {
    if ( ( (  cmp299 ( (  i2428 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2428 ) , ( ( * (  list2426 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2428 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2426 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set533 ) ( ( ( * (  list2426 ) ) .f_elements ) ,  (  i2428 ) ,  (  elem2430 ) ) );
    return ( Unit_8_Unit );
}

struct env705 {
    struct List_13 *  list2513;
    struct env19 envinst19;
};

struct envunion706 {
    enum Unit_8  (*fun) (  struct env705*  ,    uint8_t  );
    struct env705 env;
};

static  enum Unit_8   for_dash_each704 (    struct Slice_14  iterable1099 ,   struct envunion706  fun1101 ) {
    struct SliceIter_620  temp707 = ( (  into_dash_iter634 ) ( (  iterable1099 ) ) );
    struct SliceIter_620 *  it1102 = ( &temp707 );
    while ( ( true ) ) {
        struct Maybe_74  dref1103 = ( (  next628 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_74_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_74_Just_t ) {
                struct envunion706  temp708 = (  fun1101 );
                ( temp708.fun ( &temp708.env ,  ( dref1103 .stuff .Maybe_74_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env714 {
    ;
    ;
    struct Slice_14  new_dash_slice2453;
};

struct envunion715 {
    enum Unit_8  (*fun) (  struct env714*  ,    struct Tuple2_658  );
    struct env714 env;
};

static  enum Unit_8   lam716 (   struct env714* env ,    struct Tuple2_658  dref2454 ) {
    return ( (  set666 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size277 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

static  enum Unit_8   for_dash_each717 (    struct Zip_655  iterable1099 ,   struct envunion715  fun1101 ) {
    struct Zip_655  temp718 = ( (  into_dash_iter660 ) ( (  iterable1099 ) ) );
    struct Zip_655 *  it1102 = ( &temp718 );
    while ( ( true ) ) {
        struct Maybe_661  dref1103 = ( (  next662 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_661_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_661_Just_t ) {
                struct envunion715  temp719 = (  fun1101 );
                ( temp719.fun ( &temp719.env ,  ( dref1103 .stuff .Maybe_661_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full713 (   struct env2* env ,    struct List_13 *  list2452 ) {
    if ( (  eq280 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate641 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq280 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_14  new_dash_slice2453 = ( (  allocate641 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul528 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env714 envinst714 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion715  fun2457 = ( (struct envunion715){ .fun = (  enum Unit_8  (*) (  struct env714*  ,    struct Tuple2_658  ) )lam716 , .env =  envinst714 } );
            ( (  for_dash_each717 ) ( ( (  zip664 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free683 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add711 (   struct env19* env ,    struct List_13 *  list2460 ,    uint8_t  elem2462 ) {
    struct envunion20  temp712 = ( (struct envunion20){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_13 *  ) )grow_dash_if_dash_full713 , .env =  env->envinst2 } );
    ( temp712.fun ( &temp712.env ,  (  list2460 ) ) );
    ( (  set666 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add353 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam709 (   struct env705* env ,    uint8_t  x2517 ) {
    struct envunion49  temp710 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env19*  ,    struct List_13 *  ,    uint8_t  ) )add711 , .env =  env->envinst19 } );
    return ( temp710.fun ( &temp710.env ,  ( env->list2513 ) ,  (  x2517 ) ) );
}

static  enum Unit_8   add_dash_all703 (   struct env48* env ,    struct List_13 *  list2513 ,    struct Slice_14  it2515 ) {
    struct env705 envinst705 = {
        .list2513 =  list2513 ,
        .envinst19 = env->envinst19 ,
    };
    ( (  for_dash_each704 ) ( (  it2515 ) ,  ( (struct envunion706){ .fun = (  enum Unit_8  (*) (  struct env705*  ,    uint8_t  ) )lam709 , .env =  envinst705 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_13   from_dash_iter700 (   struct env53* env ,    struct Slice_14  iter2548 ,    enum CAllocator_10  al2550 ) {
    struct List_13  temp701 = ( (  mk561 ) ( (  al2550 ) ) );
    struct List_13 *  list2551 = ( &temp701 );
    struct envunion54  temp702 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all703 , .env =  env->envinst48 } );
    ( temp702.fun ( &temp702.env ,  (  list2551 ) ,  (  iter2548 ) ) );
    return ( * (  list2551 ) );
}

static  struct StrView_27   or_dash_else721 (    struct Maybe_79  self1360 ,    struct StrView_27  alt1362 ) {
    struct Maybe_79  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_79_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_79_Just_t ) {
            return ( dref1363 .stuff .Maybe_79_Just_s .field0 );
        }
    }
}

struct LineIter_723 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  struct Maybe_79   next724 (    struct LineIter_723 *  self2686 ) {
    if ( (  cmp299 ( ( ( * (  self2686 ) ) .f_last ) , ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    size_t  i2687 = ( ( * (  self2686 ) ) .f_last );
    while ( ( (  cmp299 ( (  i2687 ) , ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq321 ( ( (  get587 ) ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) ,  (  i2687 ) ) ) , ( (  char_dash_u8668 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2687 = (  op_dash_add353 ( (  i2687 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2688 = ( (  byte_dash_substr593 ) ( ( ( * (  self2686 ) ) .f_og ) ,  ( ( * (  self2686 ) ) .f_last ) ,  (  i2687 ) ) );
    if ( (  cmp299 ( (  i2687 ) , ( ( ( ( * (  self2686 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2687 = (  op_dash_add353 ( (  i2687 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2686 ) .f_last = (  i2687 );
    return ( ( Maybe_79_Just ) ( (  line2688 ) ) );
}

static  struct LineIter_723   into_dash_iter726 (    struct LineIter_723  self2683 ) {
    return (  self2683 );
}

static  struct Maybe_79   head722 (    struct LineIter_723  it1167 ) {
    struct LineIter_723  temp725 = ( (  into_dash_iter726 ) ( (  it1167 ) ) );
    return ( (  next724 ) ( ( &temp725 ) ) );
}

static  struct LineIter_723   lines727 (    struct StrView_27  s2680 ) {
    return ( (struct LineIter_723) { .f_og = (  s2680 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env732 {
    struct Char_65  c2664;
    ;
};

struct envunion733 {
    bool  (*fun) (  struct env732*  ,    struct Char_65  );
    struct env732 env;
};

struct SplitIter_731 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion733  f_fun;
};

struct Drop_730 {
    struct SplitIter_731  field0;
    size_t  field1;
};

static struct Drop_730 Drop_730_Drop (  struct SplitIter_731  field0 ,  size_t  field1 ) {
    return ( struct Drop_730 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_729 {
    struct Drop_730  f_left_dash_it;
    struct FromIter_537  f_right_dash_it;
};

static  struct Zip_729   into_dash_iter734 (    struct Zip_729  self936 ) {
    return (  self936 );
}

static  struct Drop_730   into_dash_iter736 (    struct Drop_730  self853 ) {
    return (  self853 );
}

static  struct Zip_729   zip735 (    struct Drop_730  left947 ,    struct FromIter_537  right949 ) {
    struct Drop_730  left_dash_it950 = ( (  into_dash_iter736 ) ( (  left947 ) ) );
    struct FromIter_537  right_dash_it951 = ( (  into_dash_iter547 ) ( (  right949 ) ) );
    return ( (struct Zip_729) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  struct SplitIter_731   into_dash_iter738 (    struct SplitIter_731  self2669 ) {
    return (  self2669 );
}

static  struct Drop_730   drop737 (    struct SplitIter_731  iterable860 ,    size_t  i862 ) {
    struct SplitIter_731  it863 = ( (  into_dash_iter738 ) ( (  iterable860 ) ) );
    return ( ( Drop_730_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct SplitIter_731   split_dash_by_dash_filter740 (    struct StrView_27  s2657 ,   struct envunion733  fun2659 ) {
    return ( (struct SplitIter_731) { .f_og = (  s2657 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2659 ) } );
}

static  bool   lam741 (   struct env732* env ,    struct Char_65  cc2666 ) {
    return (  eq357 ( (  cc2666 ) , ( env->c2664 ) ) );
}

static  struct SplitIter_731   split_dash_by_dash_each739 (    struct StrView_27  s2662 ,    struct Char_65  c2664 ) {
    struct env732 envinst732 = {
        .c2664 =  c2664 ,
    };
    return ( (  split_dash_by_dash_filter740 ) ( (  s2662 ) ,  ( (struct envunion733){ .fun = (  bool  (*) (  struct env732*  ,    struct Char_65  ) )lam741 , .env =  envinst732 } ) ) );
}

struct Tuple2_744 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_744 Tuple2_744_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_744 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_743 {
    enum {
        Maybe_743_None_t,
        Maybe_743_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_744  field0;
        } Maybe_743_Just_s;
    } stuff;
};

static struct Maybe_743 Maybe_743_Just (  struct Tuple2_744  field0 ) {
    return ( struct Maybe_743 ) { .tag = Maybe_743_Just_t, .stuff = { .Maybe_743_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_79   next747 (    struct SplitIter_731 *  self2672 ) {
    if ( (  cmp299 ( ( ( * (  self2672 ) ) .f_last ) , ( ( ( ( * (  self2672 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    size_t  i2673 = ( ( * (  self2672 ) ) .f_last );
    while ( (  cmp299 ( (  i2673 ) , ( ( ( ( * (  self2672 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2674 = ( (  get_dash_ptr667 ) ( ( ( ( * (  self2672 ) ) .f_og ) .f_contents ) ,  (  i2673 ) ) );
        struct Char_65  c2675 = ( (  scan_dash_from_dash_mem336 ) ( (  ptr2674 ) ) );
        struct envunion733  temp748 = ( ( * (  self2672 ) ) .f_fun );
        if ( ( temp748.fun ( &temp748.env ,  (  c2675 ) ) ) ) {
            break;
        }
        i2673 = (  op_dash_add353 ( (  i2673 ) , ( (  next_dash_char337 ) ( (  ptr2674 ) ) ) ) );
    }
    struct StrView_27  line2676 = ( (  byte_dash_substr593 ) ( ( ( * (  self2672 ) ) .f_og ) ,  ( ( * (  self2672 ) ) .f_last ) ,  (  i2673 ) ) );
    i2673 = (  op_dash_add353 ( (  i2673 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2672 ) .f_last = (  i2673 );
    return ( ( Maybe_79_Just ) ( (  line2676 ) ) );
}

static  struct Maybe_79   next746 (    struct Drop_730 *  dref855 ) {
    while ( (  cmp299 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next747 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub455 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next747 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  struct Maybe_743   next745 (    struct Zip_729 *  self939 ) {
    struct Zip_729  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_79  dref941 = ( (  next746 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_79_None_t ) {
            return ( (struct Maybe_743) { .tag = Maybe_743_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_79_Just_t ) {
                struct Maybe_171  dref943 = ( (  next543 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_743) { .tag = Maybe_743_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next746 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_743_Just ) ( ( ( Tuple2_744_Tuple2 ) ( ( dref941 .stuff .Maybe_79_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion751 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

static  enum Unit_8   insert753 (   struct env37* env ,    struct List_9 *  list2465 ,    size_t  i2467 ,    struct Line_12  elem2469 ) {
    if ( ( (  cmp299 ( (  i2467 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2467 ) , ( ( * (  list2465 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2467 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2465 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq280 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp754 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add520 , .env =  env->envinst6 } );
        ( temp754.fun ( &temp754.env ,  (  list2465 ) ,  (  elem2469 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp755 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full522 , .env =  env->envinst1 } );
    ( temp755.fun ( &temp755.env ,  (  list2465 ) ) );
    size_t  ii2470 = (  op_dash_sub455 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp299 ( (  ii2470 ) , (  i2467 ) ) != 0 ) ) {
        ( (  set533 ) ( ( ( * (  list2465 ) ) .f_elements ) ,  (  op_dash_add353 ( (  ii2470 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get297 ) ( (  list2465 ) ,  (  ii2470 ) ) ) ) );
        if ( (  eq280 ( (  ii2470 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2470 = (  op_dash_sub455 ( (  ii2470 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set533 ) ( ( ( * (  list2465 ) ) .f_elements ) ,  (  i2467 ) ,  (  elem2469 ) ) );
    (*  list2465 ) .f_count = (  op_dash_add353 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion757 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  enum Unit_8   free759 (    struct List_13 *  list2440 ) {
    ( (  free683 ) ( ( ( * (  list2440 ) ) .f_al ) ,  ( ( * (  list2440 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line758 (    struct Line_12 *  line4022 ) {
    ( (  free759 ) ( ( & ( ( * (  line4022 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot697 (   struct env109* env ,    struct TextBuf_117 *  self4070 ,    struct Pos_26  p4072 ,    struct StrView_27  bytes4074 ) {
    enum CAllocator_10  al4075 = ( ( ( * (  self4070 ) ) .f_buf ) .f_al );
    struct List_9 *  buf4076 = ( & ( ( * (  self4070 ) ) .f_buf ) );
    struct Line_12  extracted_dash_line_dash_buf4077 = ( (  get297 ) ( (  buf4076 ) ,  ( (  i32_dash_size277 ) ( ( (  p4072 ) .f_line ) ) ) ) );
    struct Slice_14  remaining4078 = ( (  from582 ) ( ( (  to_dash_slice296 ) ( ( (  extracted_dash_line_dash_buf4077 ) .f_line ) ) ) ,  ( (  i32_dash_size277 ) ( ( (  p4072 ) .f_bi ) ) ) ) );
    struct envunion110  temp699 = ( (struct envunion110){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter700 , .env =  env->envinst53 } );
    ( (  set698 ) ( (  buf4076 ) ,  ( (  i32_dash_size277 ) ( ( (  p4072 ) .f_line ) ) ) ,  ( (  mk_dash_line553 ) ( ( temp699.fun ( &temp699.env ,  ( (  subslice583 ) ( ( (  to_dash_slice296 ) ( ( (  extracted_dash_line_dash_buf4077 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size277 ) ( ( (  p4072 ) .f_bi ) ) ) ) ) ,  (  al4075 ) ) ) ) ) ) );
    struct Line_12 *  last_dash_line4079 = ( (  get_dash_ptr298 ) ( (  buf4076 ) ,  ( (  i32_dash_size277 ) ( ( (  p4072 ) .f_line ) ) ) ) );
    struct envunion112  temp720 = ( (struct envunion112){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all703 , .env =  env->envinst48 } );
    ( temp720.fun ( &temp720.env ,  ( & ( ( * (  last_dash_line4079 ) ) .f_line ) ) ,  ( ( (  or_dash_else721 ) ( ( (  head722 ) ( ( (  lines727 ) ( (  bytes4074 ) ) ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added4080 = (  from_dash_integral56 ( 0 ) );
    struct Zip_729  temp728 =  into_dash_iter734 ( ( (  zip735 ) ( ( (  drop737 ) ( ( (  split_dash_by_dash_each739 ) ( (  bytes4074 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_743  __cond742 =  next745 (&temp728);
        if (  __cond742 .tag == 0 ) {
            break;
        }
        struct Tuple2_744  dref4081 =  __cond742 .stuff .Maybe_743_Just_s .field0;
        struct envunion751  temp750 = ( (struct envunion751){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter700 , .env =  env->envinst53 } );
        struct Line_12  temp749 = ( (  mk_dash_line553 ) ( ( temp750.fun ( &temp750.env ,  ( ( dref4081 .field0 ) .f_contents ) ,  (  al4075 ) ) ) ) );
        struct Line_12 *  nuline4084 = ( &temp749 );
        size_t  next_dash_line4085 = ( (  i32_dash_size277 ) ( (  op_dash_add175 ( ( (  p4072 ) .f_line ) , ( dref4081 .field1 ) ) ) ) );
        struct envunion111  temp752 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  ) )insert753 , .env =  env->envinst37 } );
        ( temp752.fun ( &temp752.env ,  (  buf4076 ) ,  (  next_dash_line4085 ) ,  ( * (  nuline4084 ) ) ) );
        last_dash_line4079 = ( (  get_dash_ptr298 ) ( (  buf4076 ) ,  (  next_dash_line4085 ) ) );
        lines_dash_added4080 = (  op_dash_add175 ( (  lines_dash_added4080 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion757  temp756 = ( (struct envunion757){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all703 , .env =  env->envinst48 } );
    ( temp756.fun ( &temp756.env ,  ( & ( ( * (  last_dash_line4079 ) ) .f_line ) ) ,  (  remaining4078 ) ) );
    ( (  free_dash_line758 ) ( ( & (  extracted_dash_line_dash_buf4077 ) ) ) );
    return (  lines_dash_added4080 );
}

static  size_t   size760 (    struct List_13 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

struct StrConcat_766 {
    struct StrConcat_83  field0;
    struct Char_65  field1;
};

static struct StrConcat_766 StrConcat_766_StrConcat (  struct StrConcat_83  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_766 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_765 {
    struct StrConcat_766  field0;
    size_t  field1;
};

static struct StrConcat_765 StrConcat_765_StrConcat (  struct StrConcat_766  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_765 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_764 {
    struct StrConcat_765  field0;
    struct Char_65  field1;
};

static struct StrConcat_764 StrConcat_764_StrConcat (  struct StrConcat_765  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_764 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_769 {
    struct StrView_27  field0;
    struct StrConcat_764  field1;
};

static struct StrConcat_769 StrConcat_769_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_764  field1 ) {
    return ( struct StrConcat_769 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_768 {
    struct StrConcat_769  field0;
    struct Char_65  field1;
};

static struct StrConcat_768 StrConcat_768_StrConcat (  struct StrConcat_769  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_768 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str773 (    struct StrConcat_766  self1302 ) {
    struct StrConcat_766  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str312 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str772 (    struct StrConcat_765  self1302 ) {
    struct StrConcat_765  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str773 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str313 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str771 (    struct StrConcat_764  self1302 ) {
    struct StrConcat_764  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str772 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str770 (    struct StrConcat_769  self1302 ) {
    struct StrConcat_769  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str307 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str771 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str767 (    struct StrConcat_768  self1302 ) {
    struct StrConcat_768  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str770 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic763 (    struct StrConcat_764  errmsg1343 ) {
    ( (  print_dash_str767 ) ( ( ( StrConcat_768_StrConcat ) ( ( ( StrConcat_769_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Drop_775 {
    struct Zip_655  field0;
    size_t  field1;
};

static struct Drop_775 Drop_775_Drop (  struct Zip_655  field0 ,  size_t  field1 ) {
    return ( struct Drop_775 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env776 {
    ;
    struct List_13 *  list2473;
    ;
    ;
    size_t  num_dash_elems2478;
};

struct envunion777 {
    enum Unit_8  (*fun) (  struct env776*  ,    struct Tuple2_658  );
    struct env776 env;
};

static  struct Drop_775   into_dash_iter779 (    struct Drop_775  self853 ) {
    return (  self853 );
}

static  struct Maybe_661   next780 (    struct Drop_775 *  dref855 ) {
    while ( (  cmp299 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next662 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub455 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next662 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each774 (    struct Drop_775  iterable1099 ,   struct envunion777  fun1101 ) {
    struct Drop_775  temp778 = ( (  into_dash_iter779 ) ( (  iterable1099 ) ) );
    struct Drop_775 *  it1102 = ( &temp778 );
    while ( ( true ) ) {
        struct Maybe_661  dref1103 = ( (  next780 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_661_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_661_Just_t ) {
                struct envunion777  temp781 = (  fun1101 );
                ( temp781.fun ( &temp781.env ,  ( dref1103 .stuff .Maybe_661_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_775   drop782 (    struct Zip_655  iterable860 ,    size_t  i862 ) {
    struct Zip_655  it863 = ( (  into_dash_iter660 ) ( (  iterable860 ) ) );
    return ( ( Drop_775_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct SliceIter_620   into_dash_iter784 (    struct List_13  self2433 ) {
    return ( (  into_dash_iter634 ) ( ( (  subslice583 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Zip_655   zip783 (    struct List_13  left947 ,    struct FromIter_537  right949 ) {
    struct SliceIter_620  left_dash_it950 = ( (  into_dash_iter784 ) ( (  left947 ) ) );
    struct FromIter_537  right_dash_it951 = ( (  into_dash_iter547 ) ( (  right949 ) ) );
    return ( (struct Zip_655) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   set786 (    struct List_13 *  list2426 ,    size_t  i2428 ,    uint8_t  elem2430 ) {
    if ( ( (  cmp299 ( (  i2428 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2428 ) , ( ( * (  list2426 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2428 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2426 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set666 ) ( ( ( * (  list2426 ) ) .f_elements ) ,  (  i2428 ) ,  (  elem2430 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam785 (   struct env776* env ,    struct Tuple2_658  dref2479 ) {
    return ( (  set786 ) ( ( env->list2473 ) ,  (  op_dash_sub455 ( ( (  i32_dash_size277 ) ( ( dref2479 .field1 ) ) ) , ( env->num_dash_elems2478 ) ) ) ,  ( dref2479 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range762 (   struct env40* env ,    struct List_13 *  list2473 ,    size_t  from2475 ,    size_t  to_dash_excl2477 ) {
    if ( (  cmp299 ( (  to_dash_excl2477 ) , (  from2475 ) ) == 0 ) ) {
        ( (  panic763 ) ( ( ( StrConcat_764_StrConcat ) ( ( ( StrConcat_765_StrConcat ) ( ( ( StrConcat_766_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp299 ( (  from2475 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp299 ( (  to_dash_excl2477 ) , ( ( * (  list2473 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2478 = (  op_dash_sub455 ( (  to_dash_excl2477 ) , (  from2475 ) ) );
    struct env776 envinst776 = {
        .list2473 =  list2473 ,
        .num_dash_elems2478 =  num_dash_elems2478 ,
    };
    ( (  for_dash_each774 ) ( ( (  drop782 ) ( ( (  zip783 ) ( ( * (  list2473 ) ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add353 ( (  from2475 ) , (  num_dash_elems2478 ) ) ) ) ) ,  ( (struct envunion777){ .fun = (  enum Unit_8  (*) (  struct env776*  ,    struct Tuple2_658  ) )lam785 , .env =  envinst776 } ) ) );
    (*  list2473 ) .f_count = (  op_dash_sub455 ( ( ( * (  list2473 ) ) .f_count ) , (  num_dash_elems2478 ) ) );
    size_t  capacity2482 = ( ( ( * (  list2473 ) ) .f_elements ) .f_count );
    if ( (  cmp299 ( (  op_dash_mul528 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  capacity2482 ) ) == 0 ) ) {
        if ( (  eq280 ( ( ( * (  list2473 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free683 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
            (*  list2473 ) .f_elements = ( (  empty562 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2483 = (  op_dash_mul528 ( (  op_dash_add353 ( (  op_dash_div324 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2449 ) ) );
        struct Slice_14  new_dash_slice2484 = ( (  allocate641 ) ( ( ( * (  list2473 ) ) .f_al ) ,  (  new_dash_size2483 ) ) );
        ( (  copy_dash_to646 ) ( ( (  subslice583 ) ( ( ( * (  list2473 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  (  new_dash_slice2484 ) ) );
        ( (  free683 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
        (*  list2473 ) .f_elements = (  new_dash_slice2484 );
    }
    return ( Unit_8_Unit );
}

struct envunion788 {
    int32_t  (*fun) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env109 env;
};

static  enum Unit_8   trim789 (    struct List_13 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min584 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min790 (    int32_t  l1367 ,    int32_t  r1369 ) {
    if ( (  cmp173 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

struct envunion792 {
    int32_t  (*fun) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env109 env;
};

struct Maybe_794 {
    enum {
        Maybe_794_None_t,
        Maybe_794_Just_t,
    } tag;
    union {
        struct {
            struct Slice_14  field0;
        } Maybe_794_Just_s;
    } stuff;
};

static struct Maybe_794 Maybe_794_Just (  struct Slice_14  field0 ) {
    return ( struct Maybe_794 ) { .tag = Maybe_794_Just_t, .stuff = { .Maybe_794_Just_s = { .field0 = field0 } } };
};

static  struct Slice_14   or_dash_else793 (    struct Maybe_794  self1360 ,    struct Slice_14  alt1362 ) {
    struct Maybe_794  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_794_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_794_Just_t ) {
            return ( dref1363 .stuff .Maybe_794_Just_s .field0 );
        }
    }
}

static  struct Maybe_794   fmap_dash_maybe795 (    struct Maybe_502  x1585 ,    struct Slice_14 (*  fun1587 )(    struct Line_12  ) ) {
    struct Maybe_502  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_502_None_t ) {
        return ( (struct Maybe_794) { .tag = Maybe_794_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_502_Just_t ) {
            return ( ( Maybe_794_Just ) ( ( (  fun1587 ) ( ( dref1588 .stuff .Maybe_502_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_502   try_dash_get796 (    struct List_9 *  list2421 ,    size_t  i2423 ) {
    if ( (  cmp299 ( (  i2423 ) , ( ( * (  list2421 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_502) { .tag = Maybe_502_None_t } );
    }
    return ( ( Maybe_502_Just ) ( ( (  get297 ) ( (  list2421 ) ,  (  i2423 ) ) ) ) );
}

static  struct Slice_14   lam797 (    struct Line_12  line4103 ) {
    return ( (  to_dash_slice296 ) ( ( (  line4103 ) .f_line ) ) );
}

struct StrConcat_802 {
    struct StrView_27  field0;
    struct StrView_27  field1;
};

static struct StrConcat_802 StrConcat_802_StrConcat (  struct StrView_27  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_802 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_801 {
    struct StrConcat_802  field0;
    struct Char_65  field1;
};

static struct StrConcat_801 StrConcat_801_StrConcat (  struct StrConcat_802  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_801 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str803 (    struct StrConcat_802  self1302 ) {
    struct StrConcat_802  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str307 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str307 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str800 (    struct StrConcat_801  self1302 ) {
    struct StrConcat_801  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str803 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert799 (    bool  cond1346 ,    struct StrView_27  msg1348 ) {
    if ( ( ! (  cond1346 ) ) ) {
        ( (  print_dash_str800 ) ( ( ( StrConcat_801_StrConcat ) ( ( ( StrConcat_802_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1348 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_807 {
    struct Zip_535  field0;
    size_t  field1;
};

static struct Drop_807 Drop_807_Drop (  struct Zip_535  field0 ,  size_t  field1 ) {
    return ( struct Drop_807 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env808 {
    ;
    struct List_9 *  list2473;
    ;
    ;
    size_t  num_dash_elems2478;
};

struct envunion809 {
    enum Unit_8  (*fun) (  struct env808*  ,    struct Tuple2_531  );
    struct env808 env;
};

static  struct Drop_807   into_dash_iter811 (    struct Drop_807  self853 ) {
    return (  self853 );
}

static  struct Maybe_540   next812 (    struct Drop_807 *  dref855 ) {
    while ( (  cmp299 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next541 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub455 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next541 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each806 (    struct Drop_807  iterable1099 ,   struct envunion809  fun1101 ) {
    struct Drop_807  temp810 = ( (  into_dash_iter811 ) ( (  iterable1099 ) ) );
    struct Drop_807 *  it1102 = ( &temp810 );
    while ( ( true ) ) {
        struct Maybe_540  dref1103 = ( (  next812 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_540_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_540_Just_t ) {
                struct envunion809  temp813 = (  fun1101 );
                ( temp813.fun ( &temp813.env ,  ( dref1103 .stuff .Maybe_540_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_807   drop814 (    struct Zip_535  iterable860 ,    size_t  i862 ) {
    struct Zip_535  it863 = ( (  into_dash_iter539 ) ( (  iterable860 ) ) );
    return ( ( Drop_807_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

static  struct Slice_11   subslice817 (    struct Slice_11  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Line_12 *  begin_dash_ptr2209 = ( (  offset_dash_ptr343 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp299 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp299 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub455 ( ( (  min584 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_536   into_dash_iter816 (    struct List_9  self2433 ) {
    return ( (  into_dash_iter546 ) ( ( (  subslice817 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Zip_535   zip815 (    struct List_9  left947 ,    struct FromIter_537  right949 ) {
    struct SliceIter_536  left_dash_it950 = ( (  into_dash_iter816 ) ( (  left947 ) ) );
    struct FromIter_537  right_dash_it951 = ( (  into_dash_iter547 ) ( (  right949 ) ) );
    return ( (struct Zip_535) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   lam818 (   struct env808* env ,    struct Tuple2_531  dref2479 ) {
    return ( (  set698 ) ( ( env->list2473 ) ,  (  op_dash_sub455 ( ( (  i32_dash_size277 ) ( ( dref2479 .field1 ) ) ) , ( env->num_dash_elems2478 ) ) ) ,  ( dref2479 .field0 ) ) );
}

struct env821 {
    ;
    struct Slice_11  dest2281;
    ;
};

struct envunion822 {
    enum Unit_8  (*fun) (  struct env821*  ,    struct Tuple2_531  );
    struct env821 env;
};

static  enum Unit_8   for_dash_each820 (    struct Zip_535  iterable1099 ,   struct envunion822  fun1101 ) {
    struct Zip_535  temp823 = ( (  into_dash_iter539 ) ( (  iterable1099 ) ) );
    struct Zip_535 *  it1102 = ( &temp823 );
    while ( ( true ) ) {
        struct Maybe_540  dref1103 = ( (  next541 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_540_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_540_Just_t ) {
                struct envunion822  temp824 = (  fun1101 );
                ( temp824.fun ( &temp824.env ,  ( dref1103 .stuff .Maybe_540_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam825 (   struct env821* env ,    struct Tuple2_531  dref2282 ) {
    return ( (  set533 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size277 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to819 (    struct Slice_11  src2279 ,    struct Slice_11  dest2281 ) {
    if ( (  cmp299 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic647 ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env821 envinst821 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each820 ) ( ( (  zip545 ) ( (  src2279 ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion822){ .fun = (  enum Unit_8  (*) (  struct env821*  ,    struct Tuple2_531  ) )lam825 , .env =  envinst821 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range805 (   struct env41* env ,    struct List_9 *  list2473 ,    size_t  from2475 ,    size_t  to_dash_excl2477 ) {
    if ( (  cmp299 ( (  to_dash_excl2477 ) , (  from2475 ) ) == 0 ) ) {
        ( (  panic763 ) ( ( ( StrConcat_764_StrConcat ) ( ( ( StrConcat_765_StrConcat ) ( ( ( StrConcat_766_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp299 ( (  from2475 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2475 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp299 ( (  to_dash_excl2477 ) , ( ( * (  list2473 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2477 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2478 = (  op_dash_sub455 ( (  to_dash_excl2477 ) , (  from2475 ) ) );
    struct env808 envinst808 = {
        .list2473 =  list2473 ,
        .num_dash_elems2478 =  num_dash_elems2478 ,
    };
    ( (  for_dash_each806 ) ( ( (  drop814 ) ( ( (  zip815 ) ( ( * (  list2473 ) ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add353 ( (  from2475 ) , (  num_dash_elems2478 ) ) ) ) ) ,  ( (struct envunion809){ .fun = (  enum Unit_8  (*) (  struct env808*  ,    struct Tuple2_531  ) )lam818 , .env =  envinst808 } ) ) );
    (*  list2473 ) .f_count = (  op_dash_sub455 ( ( ( * (  list2473 ) ) .f_count ) , (  num_dash_elems2478 ) ) );
    size_t  capacity2482 = ( ( ( * (  list2473 ) ) .f_elements ) .f_count );
    if ( (  cmp299 ( (  op_dash_mul528 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  capacity2482 ) ) == 0 ) ) {
        if ( (  eq280 ( ( ( * (  list2473 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free549 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
            (*  list2473 ) .f_elements = ( (  empty488 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2483 = (  op_dash_mul528 ( (  op_dash_add353 ( (  op_dash_div324 ( ( ( * (  list2473 ) ) .f_count ) , ( env->shrink_dash_factor2449 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2449 ) ) );
        struct Slice_11  new_dash_slice2484 = ( (  allocate523 ) ( ( ( * (  list2473 ) ) .f_al ) ,  (  new_dash_size2483 ) ) );
        ( (  copy_dash_to819 ) ( ( (  subslice817 ) ( ( ( * (  list2473 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2473 ) ) .f_count ) ) ) ,  (  new_dash_slice2484 ) ) );
        ( (  free549 ) ( ( ( * (  list2473 ) ) .f_al ) ,  ( ( * (  list2473 ) ) .f_elements ) ) );
        (*  list2473 ) .f_elements = (  new_dash_slice2484 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action688 (   struct env113* env ,    struct TextBuf_117 *  self4088 ,    struct Pos_26  from_dash_pos4090 ,    struct Pos_26  to_dash_pos4092 ,    struct StrView_27  bytes4094 ) {
    struct Pos_26  from4095 = ( (  min689 ) ( (  from_dash_pos4090 ) ,  (  to_dash_pos4092 ) ) );
    struct Pos_26  to4096 = ( (  max691 ) ( (  from_dash_pos4090 ) ,  (  to_dash_pos4092 ) ) );
    if ( (  eq692 ( (  to4096 ) , (  from4095 ) ) ) ) {
        enum CAllocator_10  al4097 = ( ( ( * (  self4088 ) ) .f_buf ) .f_al );
        if ( ( (  eq280 ( ( (  size694 ) ( ( & ( ( * (  self4088 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size277 ) ( ( (  from4095 ) .f_line ) ) ) ) ) && (  eq693 ( ( (  from4095 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion114  temp695 = ( (struct envunion114){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add520 , .env =  env->envinst6 } );
            ( temp695.fun ( &temp695.env ,  ( & ( ( * (  self4088 ) ) .f_buf ) ) ,  ( (  mk_dash_line553 ) ( ( (  mk561 ) ( (  al4097 ) ) ) ) ) ) );
        }
        struct envunion116  temp696 = ( (struct envunion116){ .fun = (  int32_t  (*) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot697 , .env =  env->envinst109 } );
        ( temp696.fun ( &temp696.env ,  (  self4088 ) ,  (  from4095 ) ,  (  bytes4094 ) ) );
    } else {
        struct List_9 *  lines_dash_buf4098 = ( & ( ( * (  self4088 ) ) .f_buf ) );
        struct Line_12 *  first_dash_line4099 = ( (  get_dash_ptr298 ) ( (  lines_dash_buf4098 ) ,  ( (  i32_dash_size277 ) ( ( (  from4095 ) .f_line ) ) ) ) );
        (*  first_dash_line4099 ) .f_invalidated = ( true );
        if ( ( (  eq693 ( ( (  from4095 ) .f_line ) , ( (  to4096 ) .f_line ) ) ) && (  cmp173 ( ( (  to4096 ) .f_bi ) , (  op_dash_add175 ( ( (  size_dash_i32308 ) ( ( (  size760 ) ( ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion121  temp761 = ( (struct envunion121){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range762 , .env =  env->envinst40 } );
            ( temp761.fun ( &temp761.env ,  ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ,  ( (  i32_dash_size277 ) ( ( (  from4095 ) .f_bi ) ) ) ,  ( (  i32_dash_size277 ) ( ( (  to4096 ) .f_bi ) ) ) ) );
            struct envunion788  temp787 = ( (struct envunion788){ .fun = (  int32_t  (*) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot697 , .env =  env->envinst109 } );
            ( temp787.fun ( &temp787.env ,  (  self4088 ) ,  (  from4095 ) ,  (  bytes4094 ) ) );
        } else {
            ( (  trim789 ) ( ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ,  ( (  i32_dash_size277 ) ( ( (  from4095 ) .f_bi ) ) ) ) );
            struct Line_12 *  last_dash_line4100 = ( (  get_dash_ptr298 ) ( (  lines_dash_buf4098 ) ,  ( (  i32_dash_size277 ) ( ( (  to4096 ) .f_line ) ) ) ) );
            (*  last_dash_line4100 ) .f_invalidated = ( true );
            to4096 .f_bi = ( (  min790 ) ( ( (  to4096 ) .f_bi ) ,  (  op_dash_add175 ( ( (  size_dash_i32308 ) ( ( (  size760 ) ( ( & ( ( * (  last_dash_line4100 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq693 ( ( (  to4096 ) .f_bi ) , (  op_dash_add175 ( ( (  size_dash_i32308 ) ( ( (  size760 ) ( ( & ( ( * (  last_dash_line4100 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to4096 .f_line = (  op_dash_add175 ( ( (  to4096 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to4096 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion792  temp791 = ( (struct envunion792){ .fun = (  int32_t  (*) (  struct env109*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot697 , .env =  env->envinst109 } );
            int32_t  lines_dash_added4101 = ( temp791.fun ( &temp791.env ,  (  self4088 ) ,  (  from4095 ) ,  (  bytes4094 ) ) );
            to4096 .f_line = (  op_dash_add175 ( ( (  to4096 ) .f_line ) , (  lines_dash_added4101 ) ) );
            from4095 .f_line = (  op_dash_add175 ( ( (  from4095 ) .f_line ) , (  lines_dash_added4101 ) ) );
            struct Slice_14  last_dash_line4104 = ( (  or_dash_else793 ) ( ( (  fmap_dash_maybe795 ) ( ( (  try_dash_get796 ) ( (  lines_dash_buf4098 ) ,  ( (  i32_dash_size277 ) ( ( (  to4096 ) .f_line ) ) ) ) ) ,  (  lam797 ) ) ) ,  ( (  empty562 ) ( ) ) ) );
            struct envunion115  temp798 = ( (struct envunion115){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all703 , .env =  env->envinst48 } );
            ( temp798.fun ( &temp798.env ,  ( & ( ( * (  first_dash_line4099 ) ) .f_line ) ) ,  ( (  from582 ) ( (  last_dash_line4104 ) ,  ( (  i32_dash_size277 ) ( ( (  to4096 ) .f_bi ) ) ) ) ) ) );
            ( (  assert799 ) ( (  cmp173 ( ( (  to4096 ) .f_line ) , ( (  from4095 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion122  temp804 = ( (struct envunion122){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range805 , .env =  env->envinst41 } );
            ( temp804.fun ( &temp804.env ,  ( & ( ( * (  self4088 ) ) .f_buf ) ) ,  ( (  i32_dash_size277 ) ( (  op_dash_add175 ( ( (  from4095 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add353 ( ( (  i32_dash_size277 ) ( ( (  to4096 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk826 (    int32_t  line3845 ,    int32_t  bi3847 ) {
    return ( (struct Pos_26) { .f_line = (  line3845 ) , .f_bi = (  bi3847 ) } );
}

static  struct Maybe_477   mk_dash_from_dash_file480 (   struct env127* env ,    enum CAllocator_10  al4127 ,    struct StrView_27  filename4129 ) {
    struct envunion129  temp482 = ( (struct envunion129){ .fun = (  struct TextBuf_117  (*) (  struct env125*  ,    enum CAllocator_10  ) )mk483 , .env =  env->envinst125 } );
    struct TextBuf_117  temp481 = ( temp482.fun ( &temp482.env ,  (  al4127 ) ) );
    struct TextBuf_117 *  tb4130 = ( &temp481 );
    (*  tb4130 ) .f_filetype = ( (  detect_dash_filetype_dash_from_dash_filename576 ) ( (  filename4129 ) ) );
    struct StrView_27  filename04131 = ( (  clone_dash_0640 ) ( (  filename4129 ) ,  (  al4127 ) ) );
    struct Maybe_79  dref4132 = ( (  try_dash_read_dash_contents669 ) ( ( (  as_dash_const_dash_str680 ) ( (  filename04131 ) ) ) ,  (  al4127 ) ) );
    if ( dref4132.tag == Maybe_79_None_t ) {
        ( (  free682 ) ( (  filename04131 ) ,  (  al4127 ) ) );
        return ( (struct Maybe_477) { .tag = Maybe_477_None_t } );
    }
    else {
        if ( dref4132.tag == Maybe_79_Just_t ) {
            if ( (  eq685 ( ( (  try_dash_get591 ) ( ( ( dref4132 .stuff .Maybe_79_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub455 ( ( ( ( dref4132 .stuff .Maybe_79_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_74_Just ) ( ( (  ascii_dash_u8592 ) ( ( (  from_dash_charlike279 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref4132 .stuff .Maybe_79_Just_s .field0 = ( (  byte_dash_substr593 ) ( ( dref4132 .stuff .Maybe_79_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub455 ( ( ( ( dref4132 .stuff .Maybe_79_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion128  temp687 = ( (struct envunion128){ .fun = (  enum Unit_8  (*) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action688 , .env =  env->envinst113 } );
            ( temp687.fun ( &temp687.env ,  (  tb4130 ) ,  ( (  mk826 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk826 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( dref4132 .stuff .Maybe_79_Just_s .field0 ) ) );
            (*  tb4130 ) .f_filename = ( ( Maybe_79_Just ) ( (  filename04131 ) ) );
            return ( ( Maybe_477_Just ) ( ( * (  tb4130 ) ) ) );
        }
    }
}

struct envunion828 {
    struct TextBuf_117  (*fun) (  struct env125*  ,    enum CAllocator_10  );
    struct env125 env;
};

struct envunion830 {
    struct TextBuf_117  (*fun) (  struct env125*  ,    enum CAllocator_10  );
    struct env125 env;
};

static  struct Pane_238   mk833 (    enum CAllocator_10  al4326 ,    struct TextBuf_117 *  buf4328 ) {
    return ( (struct Pane_238) { .f_buf = (  buf4328 ) , .f_cursor = ( (  mk826 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_239_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_240) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
}

struct envunion836 {
    struct Tui_97  (*fun) (  struct env92*  );
    struct env92 env;
};

static  enum Unit_8   for_dash_each840 (    struct StrViewIter_290  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrViewIter_290  temp841 = ( (  into_dash_iter291 ) ( (  iterable1099 ) ) );
    struct StrViewIter_290 *  it1102 = ( &temp841 );
    while ( ( true ) ) {
        struct Maybe_348  dref1103 = ( (  next349 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_348_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_348_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_348_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print839 (    struct StrView_27  s1335 ) {
    ( (  for_dash_each840 ) ( ( (  chars292 ) ( (  s1335 ) ) ) ,  (  printf_dash_char315 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_alternative_dash_screen_dash_buffer838 (  ) {
    ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[?1049h" ) ,  ( 8 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   stdin_dash_fileno844 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct termios *   cast_dash_ptr845 (    struct Termios_87 *  p398 ) {
    return ( (struct termios * ) (  p398 ) );
}

static  int32_t   op_dash_neg846 (    int32_t  x246 ) {
    return ( (  from_dash_integral56 ( 0 ) ) - (  x246 ) );
}

static  enum Unit_8   panic847 (    struct StrView_27  errmsg1343 ) {
    ( (  print_dash_str800 ) ( ( ( StrConcat_801_StrConcat ) ( ( ( StrConcat_802_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint32_t   u32_dash_and848 (    uint32_t  l2960 ,    uint32_t  r2962 ) {
    return ( (  l2960 ) & (  r2962 ) );
}

static  uint32_t   u32_dash_neg849 (    uint32_t  l2965 ) {
    return ( ~ (  l2965 ) );
}

struct Array_851 {
    uint32_t _arr [4];
};

struct ArrayIter_853 {
    struct Array_851  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_853   into_dash_iter854 (    struct Array_851  self2102 ) {
    return ( (struct ArrayIter_853) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_855 {
    enum {
        Maybe_855_None_t,
        Maybe_855_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_855_Just_s;
    } stuff;
};

static struct Maybe_855 Maybe_855_Just (  uint32_t  field0 ) {
    return ( struct Maybe_855 ) { .tag = Maybe_855_Just_t, .stuff = { .Maybe_855_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr859 (    struct Array_851 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   offset_dash_ptr860 (    uint32_t *  x377 ,    int64_t  count379 ) {
    uint32_t  temp861;
    return ( (uint32_t * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp861 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr858 (    struct Array_851 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp299 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2029 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic506 ) ( ( ( StrConcat_507_StrConcat ) ( ( ( StrConcat_508_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr859 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr860 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get857 (    struct Array_851 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr858 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_855   next856 (    struct ArrayIter_853 *  self2109 ) {
    if ( (  cmp299 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_855) { .tag = Maybe_855_None_t } );
    }
    uint32_t  e2111 = ( (  get857 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add353 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_855_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce852 (    struct Array_851  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_853  it1124 = ( (  into_dash_iter854 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_855  dref1125 = ( (  next856 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_855_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_855_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_855_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp862 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp862);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp863;
    return (  temp863 );
}

static  uint32_t   u32_dash_or864 (    uint32_t  l2952 ,    uint32_t  r2954 ) {
    return ( (  l2952 ) | (  r2954 ) );
}

static  uint32_t   u32_dash_ors850 (    struct Array_851  vals2957 ) {
    return ( (  reduce852 ) ( (  vals2957 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or864 ) ) );
}

static  struct Array_851   from_dash_listlike865 (    struct Array_851 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   echo867 (  ) {
    return (  from_dash_integral181 ( 8 ) );
}

static  uint32_t   icanon868 (  ) {
    return (  from_dash_integral181 ( 2 ) );
}

static  uint32_t   isig869 (  ) {
    return (  from_dash_integral181 ( 1 ) );
}

static  uint32_t   iexten870 (  ) {
    return (  from_dash_integral181 ( 32768 ) );
}

struct Array_872 {
    uint32_t _arr [5];
};

struct ArrayIter_874 {
    struct Array_872  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_874   into_dash_iter875 (    struct Array_872  self2102 ) {
    return ( (struct ArrayIter_874) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr879 (    struct Array_872 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   get_dash_ptr878 (    struct Array_872 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp299 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2029 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic506 ) ( ( ( StrConcat_507_StrConcat ) ( ( ( StrConcat_508_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr879 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr860 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get877 (    struct Array_872 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr878 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_855   next876 (    struct ArrayIter_874 *  self2109 ) {
    if ( (  cmp299 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_855) { .tag = Maybe_855_None_t } );
    }
    uint32_t  e2111 = ( (  get877 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add353 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_855_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce873 (    struct Array_872  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_874  it1124 = ( (  into_dash_iter875 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_855  dref1125 = ( (  next876 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_855_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_855_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_855_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp880 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp880);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp881;
    return (  temp881 );
}

static  uint32_t   u32_dash_ors871 (    struct Array_872  vals2957 ) {
    return ( (  reduce873 ) ( (  vals2957 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or864 ) ) );
}

static  struct Array_872   from_dash_listlike882 (    struct Array_872 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   brkint884 (  ) {
    return (  from_dash_integral181 ( 2 ) );
}

static  uint32_t   icrnl885 (  ) {
    return (  from_dash_integral181 ( 256 ) );
}

static  uint32_t   inpck886 (  ) {
    return (  from_dash_integral181 ( 16 ) );
}

static  uint32_t   istrip887 (  ) {
    return (  from_dash_integral181 ( 32 ) );
}

static  uint32_t   ixon888 (  ) {
    return (  from_dash_integral181 ( 1024 ) );
}

struct Array_890 {
    uint32_t _arr [1];
};

struct ArrayIter_892 {
    struct Array_890  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_892   into_dash_iter893 (    struct Array_890  self2102 ) {
    return ( (struct ArrayIter_892) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr897 (    struct Array_890 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   get_dash_ptr896 (    struct Array_890 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp299 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2029 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic506 ) ( ( ( StrConcat_507_StrConcat ) ( ( ( StrConcat_508_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2030 = ( ( (  cast_dash_ptr897 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr860 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  uint32_t   get895 (    struct Array_890 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr896 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_855   next894 (    struct ArrayIter_892 *  self2109 ) {
    if ( (  cmp299 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_855) { .tag = Maybe_855_None_t } );
    }
    uint32_t  e2111 = ( (  get895 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add353 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_855_Just ) ( (  e2111 ) ) );
}

static  uint32_t   reduce891 (    struct Array_890  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct ArrayIter_892  it1124 = ( (  into_dash_iter893 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_855  dref1125 = ( (  next894 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_855_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_855_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_855_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp898 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp898);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp899;
    return (  temp899 );
}

static  uint32_t   u32_dash_ors889 (    struct Array_890  vals2957 ) {
    return ( (  reduce891 ) ( (  vals2957 ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  u32_dash_or864 ) ) );
}

static  struct Array_890   from_dash_listlike900 (    struct Array_890 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   opost902 (  ) {
    return (  from_dash_integral181 ( 1 ) );
}

static  uint32_t   cs8903 (  ) {
    return (  from_dash_integral181 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr906 (    struct Array_88 *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  uint8_t *   get_dash_ptr905 (    struct Array_88 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp299 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2029 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic506 ) ( ( ( StrConcat_507_StrConcat ) ( ( ( StrConcat_508_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2030 = ( ( (  cast_dash_ptr906 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr350 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  enum Unit_8   set904 (    struct Array_88 *  arr2039 ,    size_t  i2042 ,    uint8_t  e2044 ) {
    uint8_t *  p2045 = ( (  get_dash_ptr905 ) ( (  arr2039 ) ,  (  i2042 ) ) );
    (*  p2045 ) = (  e2044 );
    return ( Unit_8_Unit );
}

static  size_t   vmin907 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime908 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush909 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  struct Termios_87   enable_dash_raw_dash_mode842 (  ) {
    struct Termios_87  temp843 = ( (  undefined90 ) ( ) );
    struct Termios_87 *  orig_dash_termios3561 = ( &temp843 );
    if ( (  eq693 ( ( ( tcgetattr ) ( ( (  stdin_dash_fileno844 ) ( ) ) ,  ( (  cast_dash_ptr845 ) ( (  orig_dash_termios3561 ) ) ) ) ) , (  op_dash_neg846 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        ( (  panic847 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"tcgetattr" ) ,  ( 9 ) ) ) ) );
    }
    struct Termios_87  raw3562 = ( * (  orig_dash_termios3561 ) );
    struct Array_851  temp866 = ( (struct Array_851) { ._arr = { ( (  echo867 ) ( ) ) , ( (  icanon868 ) ( ) ) , ( (  isig869 ) ( ) ) , ( ( (  iexten870 ) ( ) ) ) } } );
    raw3562 .f_c_dash_lflag = ( (  u32_dash_and848 ) ( ( (  raw3562 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg849 ) ( ( (  u32_dash_ors850 ) ( ( (  from_dash_listlike865 ) ( ( &temp866 ) ) ) ) ) ) ) ) );
    struct Array_872  temp883 = ( (struct Array_872) { ._arr = { ( (  brkint884 ) ( ) ) , ( (  icrnl885 ) ( ) ) , ( (  inpck886 ) ( ) ) , ( (  istrip887 ) ( ) ) , ( ( (  ixon888 ) ( ) ) ) } } );
    raw3562 .f_c_dash_iflag = ( (  u32_dash_and848 ) ( ( (  raw3562 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg849 ) ( ( (  u32_dash_ors871 ) ( ( (  from_dash_listlike882 ) ( ( &temp883 ) ) ) ) ) ) ) ) );
    struct Array_890  temp901 = ( (struct Array_890) { ._arr = { ( ( (  opost902 ) ( ) ) ) } } );
    raw3562 .f_c_dash_oflag = ( (  u32_dash_and848 ) ( ( (  raw3562 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg849 ) ( ( (  u32_dash_ors889 ) ( ( (  from_dash_listlike900 ) ( ( &temp901 ) ) ) ) ) ) ) ) );
    raw3562 .f_c_dash_cflag = ( (  u32_dash_or864 ) ( ( (  raw3562 ) .f_c_dash_cflag ) ,  ( (  cs8903 ) ( ) ) ) );
    ( (  set904 ) ( ( & ( (  raw3562 ) .f_c_dash_cc ) ) ,  ( (  vmin907 ) ( ) ) ,  (  from_dash_integral325 ( 0 ) ) ) );
    ( (  set904 ) ( ( & ( (  raw3562 ) .f_c_dash_cc ) ) ,  ( (  vtime908 ) ( ) ) ,  (  from_dash_integral325 ( 0 ) ) ) );
    if ( (  eq693 ( ( ( tcsetattr ) ( ( (  stdin_dash_fileno844 ) ( ) ) ,  ( (  tcsa_dash_flush909 ) ( ) ) ,  ( (  cast_dash_ptr845 ) ( ( & (  raw3562 ) ) ) ) ) ) , (  op_dash_neg846 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        ( (  panic847 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"tcsetattr" ) ,  ( 9 ) ) ) ) );
    }
    return ( * (  orig_dash_termios3561 ) );
}

static  enum Unit_8   hide_dash_cursor910 (  ) {
    ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors911 (  ) {
    ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen912 (  ) {
    ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse913 (  ) {
    ( (  print_dash_str307 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout914 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr672 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq918 (    enum Unit_8 *  l664 ,    enum Unit_8 *  r666 ) {
    return ( (  l664 ) == (  r666 ) );
}

static  enum Unit_8 *   cast919 (    const char*  x395 ) {
    return ( (enum Unit_8 * ) (  x395 ) );
}

static  void *   cast_dash_ptr923 (    enum Unit_8 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of924 (    enum Unit_8 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  enum Unit_8 *   zeroed921 (  ) {
    enum Unit_8 *  temp922;
    enum Unit_8 *  x648 = (  temp922 );
    ( ( memset ) ( ( (  cast_dash_ptr923 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of924 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  enum Unit_8 *   null_dash_ptr920 (  ) {
    return ( (  zeroed921 ) ( ) );
}

static  struct Maybe_473   from_dash_nullable_dash_c_dash_str917 (    const char*  s669 ) {
    if ( ( (  ptr_dash_eq918 ) ( ( (  cast919 ) ( (  s669 ) ) ) ,  ( ( (  null_dash_ptr920 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_473) { .tag = Maybe_473_None_t } );
    } else {
        return ( ( Maybe_473_Just ) ( (  s669 ) ) );
    }
}

static  struct Maybe_473   get916 (    const char*  s2725 ) {
    return ( (  from_dash_nullable_dash_c_dash_str917 ) ( ( ( getenv ) ( (  s2725 ) ) ) ) );
}

static  bool   eq925 (    const char*  l2141 ,    const char*  r2143 ) {
    return (  eq693 ( ( ( strcmp ) ( (  l2141 ) ,  (  r2143 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_98   query_dash_palette915 (  ) {
    struct Maybe_473  colorterm2726 = ( (  get916 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_473  dref2727 = (  colorterm2726 );
    if ( dref2727.tag == Maybe_473_Just_t ) {
        if ( ( (  eq925 ( ( dref2727 .stuff .Maybe_473_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq925 ( ( dref2727 .stuff .Maybe_473_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_98_PaletteRGB );
        }
    }
    else {
        if ( dref2727.tag == Maybe_473_None_t ) {
        }
    }
    struct Maybe_473  dref2729 = ( (  get916 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2729.tag == Maybe_473_Just_t ) {
        if ( (  eq925 ( ( dref2729 .stuff .Maybe_473_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_98_Palette8 );
        }
    }
    else {
        if ( dref2729.tag == Maybe_473_None_t ) {
        }
    }
    return ( ColorPalette_98_Palette16 );
}

struct Tuple2_926 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_926 Tuple2_926_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_926 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_928 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr932 (    struct Winsize_928 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of933 (    struct Winsize_928  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Winsize_928   zeroed930 (  ) {
    struct Winsize_928  temp931;
    struct Winsize_928  x648 = (  temp931 );
    ( ( memset ) ( ( (  cast_dash_ptr932 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of933 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  int32_t   stdout_dash_fileno934 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  uint64_t   from_dash_integral936 (    size_t  x65 ) {
    return ( (uint64_t ) (  x65 ) );
}

static  uint64_t   tiocgwinsz935 (  ) {
    return (  from_dash_integral936 ( 21523 ) );
}

static  bool   eq937 (    uint16_t  l130 ,    uint16_t  r132 ) {
    return ( (  l130 ) == (  r132 ) );
}

static  uint16_t   from_dash_integral938 (    size_t  x56 ) {
    return ( (uint16_t ) (  x56 ) );
}

static  void *   cast_dash_ptr944 (    uint32_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  uint32_t   zeroed942 (  ) {
    uint32_t  temp943;
    uint32_t  x648 = (  temp943 );
    ( ( memset ) ( ( (  cast_dash_ptr944 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of383 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint16_t *   cast945 (    uint32_t *  x395 ) {
    return ( (uint16_t * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed940 (    uint16_t  x651 ) {
    uint32_t  temp941 = ( (  zeroed942 ) ( ) );
    uint32_t *  y652 = ( &temp941 );
    uint16_t *  yp653 = ( (  cast945 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  uint32_t   u16_dash_u32939 (    uint16_t  x726 ) {
    return ( (  cast_dash_on_dash_zeroed940 ) ( (  x726 ) ) );
}

static  struct Tuple2_926   get_dash_dimensions927 (  ) {
    struct Winsize_928  temp929 = ( ( (  zeroed930 ) ( ) ) );
    struct Winsize_928 *  ws2712 = ( &temp929 );
    if ( ( (  eq693 ( ( ( ioctl ) ( ( (  stdout_dash_fileno934 ) ( ) ) ,  ( (  tiocgwinsz935 ) ( ) ) ,  (  ws2712 ) ) ) , (  op_dash_neg846 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq937 ( ( ( * (  ws2712 ) ) .f_ws_dash_col ) , (  from_dash_integral938 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_926_Tuple2 ) ( (  from_dash_integral181 ( 80 ) ) ,  (  from_dash_integral181 ( 24 ) ) ) );
    }
    return ( ( Tuple2_926_Tuple2 ) ( ( (  u16_dash_u32939 ) ( ( ( * (  ws2712 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32939 ) ( ( ( * (  ws2712 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined948 (  ) {
    struct timespec  temp949;
    return (  temp949 );
}

static  int32_t   clock_dash_monotonic950 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  struct timespec   now946 (  ) {
    struct timespec  temp947 = ( (  undefined948 ) ( ) );
    struct timespec *  t3520 = ( &temp947 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic950 ) ( ) ) ,  (  t3520 ) ) );
    return ( * (  t3520 ) );
}

struct env951 {
    struct anon_86 *  tui_dash_global_dash_state3572;
};

struct envunion952 {
    enum Unit_8  (*fun) (  struct env951*  ,    int32_t  );
    struct env951 env;
};

struct envunion952  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig953 ) {
    struct envunion952  temp954 = _intr_sigarr [  __intr__sig953 ];
    temp954.fun ( &temp954.env ,  __intr__sig953 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig955 ,   struct envunion952  __intr__fun956 ) {
    _intr_sigarr [  __intr__sig955 ] =  __intr__fun956;
    signal(  __intr__sig955 , _intr_sighandle );
    return Unit_8_Unit;
}

static  int32_t   sigwinch957 (  ) {
    return (  from_dash_integral56 ( 28 ) );
}

static  enum Unit_8   lam958 (   struct env951* env ,    int32_t  dref3578 ) {
    (* env->tui_dash_global_dash_state3572 ) .f_should_dash_resize = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst959 (    struct Tuple2_926  dref1563 ) {
    return ( dref1563 .field0 );
}

static  uint32_t   snd960 (    struct Tuple2_926  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tui_97   mk837 (   struct env92* env ) {
    ( (  enable_dash_alternative_dash_screen_dash_buffer838 ) ( ) );
    (* env->tui_dash_global_dash_state3572 ) .f_orig_dash_termios = ( (  enable_dash_raw_dash_mode842 ) ( ) );
    ( (  hide_dash_cursor910 ) ( ) );
    ( (  reset_dash_colors911 ) ( ) );
    ( (  clear_dash_screen912 ) ( ) );
    ( (  enable_dash_mouse913 ) ( ) );
    ( (  flush_dash_stdout914 ) ( ) );
    enum ColorPalette_98  palette3574 = ( (  query_dash_palette915 ) ( ) );
    struct Tuple2_926  dims3575 = ( (  get_dash_dimensions927 ) ( ) );
    uint32_t  fps3576 = (  from_dash_integral181 ( 60 ) );
    struct timespec  last_dash_sync3577 = ( (  now946 ) ( ) );
    struct env951 envinst951 = {
        .tui_dash_global_dash_state3572 = env->tui_dash_global_dash_state3572 ,
    };
    ( _intr_register_signal ( ( (  sigwinch957 ) ( ) ) , ( (struct envunion952){ .fun = (  enum Unit_8  (*) (  struct env951*  ,    int32_t  ) )lam958 , .env =  envinst951 } ) ) );
    return ( (struct Tui_97) { .f_width = ( (  fst959 ) ( (  dims3575 ) ) ) , .f_height = ( (  snd960 ) ( (  dims3575 ) ) ) , .f_target_dash_fps = (  fps3576 ) , .f_actual_dash_fps = (  from_dash_integral181 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3577 ) , .f_fps_dash_ts = (  last_dash_sync3577 ) , .f_fps_dash_count = (  from_dash_integral181 ( 0 ) ) , .f_palette = (  palette3574 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_965 {
    size_t  f_size;
};

static  struct TypeSize_965   get_dash_typesize964 (  ) {
    struct Cell_446  temp966;
    return ( (struct TypeSize_965) { .f_size = ( sizeof( ( (  temp966 ) ) ) ) } );
}

static  struct Cell_446 *   cast_dash_ptr967 (    void *  p398 ) {
    return ( (struct Cell_446 * ) (  p398 ) );
}

static  struct Slice_445   allocate963 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize964 ) ( ) ) ) .f_size );
    struct Cell_446 *  ptr2371 = ( (  cast_dash_ptr967 ) ( ( ( malloc ) ( (  op_dash_mul528 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_445) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

static  void *   cast_dash_ptr973 (    size_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of974 (    size_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  size_t   zeroed971 (  ) {
    size_t  temp972;
    size_t  x648 = (  temp972 );
    ( ( memset ) ( ( (  cast_dash_ptr973 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of974 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint32_t *   cast975 (    size_t *  x395 ) {
    return ( (uint32_t * ) (  x395 ) );
}

static  size_t   cast_dash_on_dash_zeroed969 (    uint32_t  x651 ) {
    size_t  temp970 = ( (  zeroed971 ) ( ) );
    size_t *  y652 = ( &temp970 );
    uint32_t *  yp653 = ( (  cast975 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  size_t   u32_dash_size968 (    uint32_t  x732 ) {
    return ( (  cast_dash_on_dash_zeroed969 ) ( (  x732 ) ) );
}

struct env978 {
    struct Slice_445  s2328;
    ;
    struct Cell_446 (*  fun2330 )(    struct Cell_446  );
    ;
    ;
};

struct envunion979 {
    enum Unit_8  (*fun) (  struct env978*  ,    int32_t  );
    struct env978 env;
};

static  enum Unit_8   for_dash_each977 (    struct Range_166  iterable1099 ,   struct envunion979  fun1101 ) {
    struct RangeIter_169  temp980 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp980 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion979  temp981 = (  fun1101 );
                ( temp981.fun ( &temp981.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_446 *   offset_dash_ptr985 (    struct Cell_446 *  x377 ,    int64_t  count379 ) {
    struct Cell_446  temp986;
    return ( (struct Cell_446 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp986 ) ) ) ) ) ) ) ) );
}

static  struct Cell_446 *   get_dash_ptr984 (    struct Slice_445  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp299 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_446 *  elem_dash_ptr2173 = ( (  offset_dash_ptr985 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set983 (    struct Slice_445  slice2187 ,    size_t  i2189 ,    struct Cell_446  x2191 ) {
    struct Cell_446 *  ep2192 = ( (  get_dash_ptr984 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

struct Maybe_990 {
    enum {
        Maybe_990_None_t,
        Maybe_990_Just_t,
    } tag;
    union {
        struct {
            struct Cell_446  field0;
        } Maybe_990_Just_s;
    } stuff;
};

static struct Maybe_990 Maybe_990_Just (  struct Cell_446  field0 ) {
    return ( struct Maybe_990 ) { .tag = Maybe_990_Just_t, .stuff = { .Maybe_990_Just_s = { .field0 = field0 } } };
};

static  struct Cell_446   undefined991 (  ) {
    struct Cell_446  temp992;
    return (  temp992 );
}

static  struct Cell_446   or_dash_fail989 (    struct Maybe_990  x1353 ,    struct StrConcat_301  errmsg1355 ) {
    struct Maybe_990  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_990_None_t ) {
        ( (  panic300 ) ( (  errmsg1355 ) ) );
        return ( (  undefined991 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_990_Just_t ) {
            return ( dref1356 .stuff .Maybe_990_Just_s .field0 );
        }
    }
}

static  struct Maybe_990   try_dash_get993 (    struct Slice_445  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp299 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_990) { .tag = Maybe_990_None_t } );
    }
    struct Cell_446 *  elem_dash_ptr2179 = ( (  offset_dash_ptr985 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_990_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  struct Cell_446   get988 (    struct Slice_445  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail989 ) ( ( (  try_dash_get993 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_446   elem_dash_get987 (    struct Slice_445  self2195 ,    size_t  idx2197 ) {
    return ( (  get988 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  enum Unit_8   lam982 (   struct env978* env ,    int32_t  i2332 ) {
    return ( (  set983 ) ( ( env->s2328 ) ,  ( (  i32_dash_size277 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get987 ( ( env->s2328 ) , ( (  i32_dash_size277 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map976 (    struct Slice_445  s2328 ,    struct Cell_446 (*  fun2330 )(    struct Cell_446  ) ) {
    struct env978 envinst978 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each977 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32308 ) ( (  op_dash_sub455 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion979){ .fun = (  enum Unit_8  (*) (  struct env978*  ,    int32_t  ) )lam982 , .env =  envinst978 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_446   default_dash_cell995 (  ) {
    return ( (struct Cell_446) { .f_c = ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_bg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_446   lam994 (    struct Cell_446  dref3681 ) {
    return ( (  default_dash_cell995 ) ( ) );
}

struct env998 {
    struct Slice_445  s2328;
    ;
    struct Cell_446 (*  fun2330 )(    struct Cell_446  );
    ;
    ;
};

struct envunion999 {
    enum Unit_8  (*fun) (  struct env998*  ,    int32_t  );
    struct env998 env;
};

static  enum Unit_8   for_dash_each997 (    struct Range_166  iterable1099 ,   struct envunion999  fun1101 ) {
    struct RangeIter_169  temp1000 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp1000 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion999  temp1001 = (  fun1101 );
                ( temp1001.fun ( &temp1001.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1002 (   struct env998* env ,    int32_t  i2332 ) {
    return ( (  set983 ) ( ( env->s2328 ) ,  ( (  i32_dash_size277 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get987 ( ( env->s2328 ) , ( (  i32_dash_size277 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map996 (    struct Slice_445  s2328 ,    struct Cell_446 (*  fun2330 )(    struct Cell_446  ) ) {
    struct env998 envinst998 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each997 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32308 ) ( (  op_dash_sub455 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion999){ .fun = (  enum Unit_8  (*) (  struct env998*  ,    int32_t  ) )lam1002 , .env =  envinst998 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_446   lam1003 (    struct Cell_446  dref3683 ) {
    return ( (  default_dash_cell995 ) ( ) );
}

static  struct Screen_444   mk_dash_screen962 (    struct Tui_97 *  tui3677 ,    enum CAllocator_10  al3679 ) {
    struct Slice_445  cur3680 = ( (  allocate963 ) ( (  al3679 ) ,  ( (  u32_dash_size968 ) ( (  op_dash_mul183 ( ( ( * (  tui3677 ) ) .f_width ) , ( ( * (  tui3677 ) ) .f_height ) ) ) ) ) ) );
    ( (  map976 ) ( (  cur3680 ) ,  (  lam994 ) ) );
    struct Slice_445  prev3682 = ( (  allocate963 ) ( (  al3679 ) ,  ( (  u32_dash_size968 ) ( (  op_dash_mul183 ( ( ( * (  tui3677 ) ) .f_width ) , ( ( * (  tui3677 ) ) .f_height ) ) ) ) ) ) );
    ( (  map996 ) ( (  prev3682 ) ,  (  lam1003 ) ) );
    return ( (struct Screen_444) { .f_current = (  cur3680 ) , .f_previous = (  prev3682 ) , .f_al = (  al3679 ) , .f_tui = (  tui3677 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) } );
}

enum MouseButton_1011 {
    MouseButton_1011_MouseLeft,
    MouseButton_1011_MouseMiddle,
    MouseButton_1011_MouseRight,
    MouseButton_1011_ScrollUp,
    MouseButton_1011_ScrollDown,
};

struct MouseEvent_1010 {
    enum MouseButton_1011  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_1009 {
    enum {
        InputEvent_1009_Key_t,
        InputEvent_1009_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_440  field0;
        } InputEvent_1009_Key_s;
        struct {
            struct MouseEvent_1010  field0;
        } InputEvent_1009_Mouse_s;
    } stuff;
};

static struct InputEvent_1009 InputEvent_1009_Key (  struct Key_440  field0 ) {
    return ( struct InputEvent_1009 ) { .tag = InputEvent_1009_Key_t, .stuff = { .InputEvent_1009_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_1009 InputEvent_1009_Mouse (  struct MouseEvent_1010  field0 ) {
    return ( struct InputEvent_1009 ) { .tag = InputEvent_1009_Mouse_t, .stuff = { .InputEvent_1009_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_1008 {
    enum {
        Maybe_1008_None_t,
        Maybe_1008_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_1009  field0;
        } Maybe_1008_Just_s;
    } stuff;
};

static struct Maybe_1008 Maybe_1008_Just (  struct InputEvent_1009  field0 ) {
    return ( struct Maybe_1008 ) { .tag = Maybe_1008_Just_t, .stuff = { .Maybe_1008_Just_s = { .field0 = field0 } } };
};

struct envunion1007 {
    struct Maybe_1008  (*fun) (  struct env95*  ,    struct Tui_97 *  );
    struct env95 env;
};

struct env1006 {
    struct Tui_97 *  tui4892;
    struct env95 envinst95;
};

struct envunion1012 {
    struct Maybe_1008  (*fun) (  struct env1006*  );
    struct env1006 env;
};

struct FunIter_1005 {
    struct envunion1012  f_fun;
    bool  f_finished;
};

static  struct FunIter_1005   into_dash_iter1013 (    struct FunIter_1005  self1053 ) {
    return (  self1053 );
}

static  struct FunIter_1005   from_dash_function1014 (   struct envunion1012  fun1061 ) {
    return ( (struct FunIter_1005) { .f_fun = (  fun1061 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions1019 (   struct env94* env ,    struct Tui_97 *  tui3643 ) {
    if ( ( ! ( ( * ( env->tui_dash_global_dash_state3572 ) ) .f_should_dash_resize ) ) ) {
        return ( false );
    }
    (*  tui3643 ) .f_should_dash_redraw = ( true );
    (* env->tui_dash_global_dash_state3572 ) .f_should_dash_resize = ( false );
    struct Tuple2_926  dim3644 = ( (  get_dash_dimensions927 ) ( ) );
    uint32_t  w3645 = ( (  fst959 ) ( (  dim3644 ) ) );
    uint32_t  h3646 = ( (  snd960 ) ( (  dim3644 ) ) );
    (*  tui3643 ) .f_width = (  w3645 );
    (*  tui3643 ) .f_height = (  h3646 );
    return ( true );
}

static  char   undefined1022 (  ) {
    char  temp1023;
    return (  temp1023 );
}

struct Maybe_1024 {
    enum {
        Maybe_1024_None_t,
        Maybe_1024_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_1024_Just_s;
    } stuff;
};

static struct Maybe_1024 Maybe_1024_Just (  char  field0 ) {
    return ( struct Maybe_1024 ) { .tag = Maybe_1024_Just_t, .stuff = { .Maybe_1024_Just_s = { .field0 = field0 } } };
};

struct Pollfd_1026 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr1027 (    struct Pollfd_1026 *  p398 ) {
    return ( (struct pollfd * ) (  p398 ) );
}

static  void *   cast_dash_ptr1030 (    char *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1031 (    char  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  char   zeroed1028 (  ) {
    char  temp1029;
    char  x648 = (  temp1029 );
    ( ( memset ) ( ( (  cast_dash_ptr1030 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1031 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Maybe_1024   read_dash_byte1025 (    int32_t  timeout_dash_ms3566 ) {
    struct Pollfd_1026  pfd3567 = ( (struct Pollfd_1026) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral938 ( 1 ) ) , .f_revents = (  from_dash_integral938 ( 0 ) ) } );
    if ( (  cmp173 ( ( ( poll ) ( ( (  cast_dash_ptr1027 ) ( ( & (  pfd3567 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3566 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_1024) { .tag = Maybe_1024_None_t } );
    }
    char  c3568 = ( ( (  zeroed1028 ) ( ) ) );
    if ( (  cmp173 ( ( ( read ) ( ( (  stdin_dash_fileno844 ) ( ) ) ,  ( (  cast_dash_ptr1030 ) ( ( & (  c3568 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_1024) { .tag = Maybe_1024_None_t } );
    }
    return ( ( Maybe_1024_Just ) ( (  c3568 ) ) );
}

static  char   u8_dash_ascii1032 (    uint8_t  b1491 ) {
    return ( ( (char ) (  b1491 ) ) );
}

static  uint8_t *   cast1036 (    uint32_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed1034 (    uint8_t  x651 ) {
    uint32_t  temp1035 = ( (  zeroed942 ) ( ) );
    uint32_t *  y652 = ( &temp1035 );
    uint8_t *  yp653 = ( (  cast1036 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  uint32_t   u8_dash_u321033 (    uint8_t  x756 ) {
    return ( (  cast_dash_on_dash_zeroed1034 ) ( (  x756 ) ) );
}

struct Map_1039 {
    struct StrViewIter_290  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1039 Map_1039_Map (  struct StrViewIter_290  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1039 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1039   into_dash_iter1040 (    struct Map_1039  self804 ) {
    return (  self804 );
}

static  struct Maybe_855   next1041 (    struct Map_1039 *  dref806 ) {
    struct Maybe_348  dref809 = ( (  next349 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_855) { .tag = Maybe_855_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_348_Just_t ) {
            return ( ( Maybe_855_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce1038 (    struct Map_1039  iterable1118 ,    uint32_t  base1120 ,    uint32_t (*  fun1122 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1123 = (  base1120 );
    struct Map_1039  it1124 = ( (  into_dash_iter1040 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_855  dref1125 = ( (  next1041 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_855_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_855_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_855_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1042 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1042);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp1043;
    return (  temp1043 );
}

static  struct Map_1039   map1044 (    struct StrView_27  iterable813 ,    uint32_t (*  fun815 )(    struct Char_65  ) ) {
    struct StrViewIter_290  it816 = ( (  into_dash_iter293 ) ( (  iterable813 ) ) );
    return ( ( Map_1039_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  uint8_t *   cast1049 (    size_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  size_t   cast_dash_on_dash_zeroed1047 (    uint8_t  x651 ) {
    size_t  temp1048 = ( (  zeroed971 ) ( ) );
    size_t *  y652 = ( &temp1048 );
    uint8_t *  yp653 = ( (  cast1049 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  size_t   u8_dash_size1046 (    uint8_t  x747 ) {
    return ( (  cast_dash_on_dash_zeroed1047 ) ( (  x747 ) ) );
}

struct StrConcat_1052 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_1052 StrConcat_1052_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1052 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1051 {
    struct StrConcat_1052  field0;
    struct StrView_27  field1;
};

static struct StrConcat_1051 StrConcat_1051_StrConcat (  struct StrConcat_1052  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_1051 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1056 {
    struct StrView_27  field0;
    struct StrConcat_1051  field1;
};

static struct StrConcat_1056 StrConcat_1056_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1051  field1 ) {
    return ( struct StrConcat_1056 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1055 {
    struct StrConcat_1056  field0;
    struct Char_65  field1;
};

static struct StrConcat_1055 StrConcat_1055_StrConcat (  struct StrConcat_1056  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1055 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1059 (    struct StrConcat_1052  self1302 ) {
    struct StrConcat_1052  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str314 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1058 (    struct StrConcat_1051  self1302 ) {
    struct StrConcat_1051  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1059 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str307 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1057 (    struct StrConcat_1056  self1302 ) {
    struct StrConcat_1056  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str307 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str1058 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1054 (    struct StrConcat_1055  self1302 ) {
    struct StrConcat_1055  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str1057 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic1053 (    struct StrConcat_1051  errmsg1343 ) {
    ( (  print_dash_str1054 ) ( ( ( StrConcat_1055_StrConcat ) ( ( ( StrConcat_1056_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail1050 (    struct Maybe_74  x1353 ,    struct StrConcat_1051  errmsg1355 ) {
    struct Maybe_74  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_74_None_t ) {
        ( (  panic1053 ) ( (  errmsg1355 ) ) );
        return ( (  undefined589 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_74_Just_t ) {
            return ( dref1356 .stuff .Maybe_74_Just_s .field0 );
        }
    }
}

static  enum Ordering_174   cmp1061 (    struct Char_65  l1459 ,    struct Char_65  r1461 ) {
    if ( ( ( !  eq280 ( ( (  l1459 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq280 ( ( (  r1461 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp1062 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp1062);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (  cmp338 ) ( ( (  char_dash_u8668 ) ( (  l1459 ) ) ) ,  ( (  char_dash_u8668 ) ( (  r1461 ) ) ) ) );
}

static  uint8_t   op_dash_sub1063 (    uint8_t  l274 ,    uint8_t  r276 ) {
    return ( (  l274 ) - (  r276 ) );
}

static  uint8_t   op_dash_add1064 (    uint8_t  l269 ,    uint8_t  r271 ) {
    return ( (  l269 ) + (  r271 ) );
}

static  struct Maybe_74   hex_dash_digit1060 (    struct Char_65  c3128 ) {
    if ( ( (  cmp1061 ( (  c3128 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1061 ( (  c3128 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_sub1063 ( ( (  char_dash_u8668 ) ( (  c3128 ) ) ) , ( (  char_dash_u8668 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp1061 ( (  c3128 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1061 ( (  c3128 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_add1064 ( (  op_dash_sub1063 ( ( (  char_dash_u8668 ) ( (  c3128 ) ) ) , ( (  char_dash_u8668 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral325 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp1061 ( (  c3128 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp1061 ( (  c3128 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_add1064 ( (  op_dash_sub1063 ( ( (  char_dash_u8668 ) ( (  c3128 ) ) ) , ( (  char_dash_u8668 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral325 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
}

static  uint32_t   lam1045 (    struct Char_65  c3133 ) {
    return ( (  from_dash_integral181 ) ( ( (  u8_dash_size1046 ) ( ( (  or_dash_fail1050 ) ( ( (  hex_dash_digit1060 ) ( (  c3133 ) ) ) ,  ( ( StrConcat_1051_StrConcat ) ( ( ( StrConcat_1052_StrConcat ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ,  (  c3133 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1065 (    uint32_t  elem3135 ,    uint32_t  b3137 ) {
    return (  op_dash_add187 ( (  op_dash_mul183 ( (  b3137 ) , (  from_dash_integral181 ( 16 ) ) ) ) , (  elem3135 ) ) );
}

static  uint32_t   from_dash_hex1037 (    struct StrView_27  arr3131 ) {
    return ( (  reduce1038 ) ( ( (  map1044 ) ( (  arr3131 ) ,  (  lam1045 ) ) ) ,  (  from_dash_integral181 ( 0 ) ) ,  (  lam1065 ) ) );
}

static  bool   eq1067 (    char  l415 ,    char  r417 ) {
    return ( (  l415 ) == (  r417 ) );
}

struct Array_1068 {
    char _arr [32];
};

static  void *   cast_dash_ptr1072 (    struct Array_1068 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1073 (    struct Array_1068  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Array_1068   zeroed1070 (  ) {
    struct Array_1068  temp1071;
    struct Array_1068  x648 = (  temp1071 );
    ( ( memset ) ( ( (  cast_dash_ptr1072 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1073 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  char *   cast_dash_ptr1077 (    struct Array_1068 *  p398 ) {
    return ( (char * ) (  p398 ) );
}

static  char *   offset_dash_ptr1078 (    char *  x377 ,    int64_t  count379 ) {
    char  temp1079;
    return ( (char * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1079 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr1076 (    struct Array_1068 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp299 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2029 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic506 ) ( ( ( StrConcat_507_StrConcat ) ( ( ( StrConcat_508_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2030 = ( ( (  cast_dash_ptr1077 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr1078 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  enum Unit_8   set1075 (    struct Array_1068 *  arr2039 ,    size_t  i2042 ,    char  e2044 ) {
    char *  p2045 = ( (  get_dash_ptr1076 ) ( (  arr2039 ) ,  (  i2042 ) ) );
    (*  p2045 ) = (  e2044 );
    return ( Unit_8_Unit );
}

struct Slice_1081 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail1084 (    struct Maybe_1024  x1353 ,    struct StrConcat_301  errmsg1355 ) {
    struct Maybe_1024  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1024_None_t ) {
        ( (  panic300 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1022 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1024_Just_t ) {
            return ( dref1356 .stuff .Maybe_1024_Just_s .field0 );
        }
    }
}

static  struct Maybe_1024   try_dash_get1085 (    struct Slice_1081  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp299 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1024) { .tag = Maybe_1024_None_t } );
    }
    char *  elem_dash_ptr2179 = ( (  offset_dash_ptr1078 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_1024_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  char   get1083 (    struct Slice_1081  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail1084 ) ( ( (  try_dash_get1085 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get1082 (    struct Slice_1081  self2195 ,    size_t  idx2197 ) {
    return ( (  get1083 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

struct Scanner_1086 {
    struct StrViewIter_290  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1086   mk_dash_from_dash_str1088 (    struct StrView_27  s3405 ) {
    return ( (struct Scanner_1086) { .f_s = ( (  chars292 ) ( (  s3405 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_1092 (    uint8_t *  x382 ,    size_t  count384 ) {
    return ( (  offset_dash_ptr350 ) ( (  x382 ) ,  ( (int64_t ) (  count384 ) ) ) );
}

static  struct StrView_27   substr1089 (    struct StrView_27  s2596 ,    size_t  from2598 ,    size_t  to2600 ) {
    size_t  from_dash_bs2601 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_169  temp1090 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  size_dash_i32308 ) ( (  from2598 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1091 =  next172 (&temp1090);
        if (  __cond1091 .tag == 0 ) {
            break;
        }
        int32_t  dref2602 =  __cond1091 .stuff .Maybe_171_Just_s .field0;
        if ( (  cmp299 ( (  from_dash_bs2601 ) , ( ( (  s2596 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2601 = (  op_dash_add353 ( (  from_dash_bs2601 ) , ( (  next_dash_char337 ) ( ( (  offset_dash_ptr_prime_1092 ) ( ( ( (  s2596 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2601 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2603 = (  from_dash_bs2601 );
    struct RangeIter_169  temp1093 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  op_dash_sub180 ( ( (  size_dash_i32308 ) ( (  to2600 ) ) ) , ( (  size_dash_i32308 ) ( (  from2598 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1094 =  next172 (&temp1093);
        if (  __cond1094 .tag == 0 ) {
            break;
        }
        int32_t  dref2604 =  __cond1094 .stuff .Maybe_171_Just_s .field0;
        if ( (  cmp299 ( (  to_dash_bs2603 ) , ( ( (  s2596 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2603 = (  op_dash_add353 ( (  to_dash_bs2603 ) , ( (  next_dash_char337 ) ( ( (  offset_dash_ptr_prime_1092 ) ( ( ( (  s2596 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2603 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice583 ) ( ( (  s2596 ) .f_contents ) ,  (  from_dash_bs2601 ) ,  (  to_dash_bs2603 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr1097 (    char *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   cast_dash_slice1096 (    struct Slice_1081  s2354 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1097 ) ( ( (  s2354 ) .f_ptr ) ) ) , .f_count = ( (  s2354 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice1095 (    struct Slice_1081  sl2570 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1096 ) ( (  sl2570 ) ) ) } );
}

struct Maybe_1098 {
    enum {
        Maybe_1098_None_t,
        Maybe_1098_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_1098_Just_s;
    } stuff;
};

static struct Maybe_1098 Maybe_1098_Just (  int64_t  field0 ) {
    return ( struct Maybe_1098 ) { .tag = Maybe_1098_Just_t, .stuff = { .Maybe_1098_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_1100 {
    struct Scanner_1086  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_1086   into_dash_iter1103 (    struct Scanner_1086  self3396 ) {
    return (  self3396 );
}

static  struct Scanner_1086   into_dash_iter1102 (    struct Scanner_1086 *  self793 ) {
    return ( (  into_dash_iter1103 ) ( ( * (  self793 ) ) ) );
}

static  struct TakeWhile_1100   take_dash_while1101 (    struct Scanner_1086 *  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1100) { .f_it = ( (  into_dash_iter1102 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  struct Char_65   min1106 (    struct Char_65  l1367 ,    struct Char_65  r1369 ) {
    if ( (  cmp1061 ( (  l1367 ) , (  r1369 ) ) == 0 ) ) {
        return (  l1367 );
    } else {
        return (  r1369 );
    }
}

static  struct Char_65   max1107 (    struct Char_65  l1372 ,    struct Char_65  r1374 ) {
    if ( (  cmp1061 ( (  l1372 ) , (  r1374 ) ) == 2 ) ) {
        return (  l1372 );
    } else {
        return (  r1374 );
    }
}

static  bool   between1105 (    struct Char_65  c1377 ,    struct Char_65  l1379 ,    struct Char_65  r1381 ) {
    struct Char_65  from1382 = ( (  min1106 ) ( (  l1379 ) ,  (  r1381 ) ) );
    struct Char_65  to1383 = ( (  max1107 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp1061 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp1061 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  bool   is_dash_digit1104 (    struct Char_65  c1506 ) {
    return ( (  eq280 ( ( (  c1506 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1105 ) ( (  c1506 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) ) );
}

static  struct Maybe_348   next1111 (    struct Scanner_1086 *  self3391 ) {
    struct Maybe_348  dref3392 = ( (  next349 ) ( ( & ( ( * (  self3391 ) ) .f_s ) ) ) );
    if ( dref3392.tag == Maybe_348_Just_t ) {
        (*  self3391 ) .f_byte_dash_offset = (  op_dash_add353 ( ( ( * (  self3391 ) ) .f_byte_dash_offset ) , ( ( dref3392 .stuff .Maybe_348_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_348_Just ) ( ( dref3392 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref3392.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  struct Maybe_348   next1110 (    struct TakeWhile_1100 *  self989 ) {
    struct Maybe_348  mx990 = ( (  next1111 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_348  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_348_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_348_Just ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
            }
        }
    }
}

static  struct TakeWhile_1100   into_dash_iter1113 (    struct TakeWhile_1100  self986 ) {
    return (  self986 );
}

static  struct Maybe_348   head1109 (    struct TakeWhile_1100  it1167 ) {
    struct TakeWhile_1100  temp1112 = ( (  into_dash_iter1113 ) ( (  it1167 ) ) );
    return ( (  next1110 ) ( ( &temp1112 ) ) );
}

static  bool   null1108 (    struct TakeWhile_1100  it1176 ) {
    struct Maybe_348  dref1177 = ( (  head1109 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_348_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env1116 {
    struct Scanner_1086 *  it1218;
    ;
};

struct envunion1117 {
    struct Maybe_348  (*fun) (  struct env1116*  ,    int32_t  );
    struct env1116 env;
};

static  enum Unit_8   for_dash_each1115 (    struct Range_166  iterable1099 ,   struct envunion1117  fun1101 ) {
    struct RangeIter_169  temp1118 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp1118 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion1117  temp1119 = (  fun1101 );
                ( temp1119.fun ( &temp1119.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_348   lam1120 (   struct env1116* env ,    int32_t  dref1221 ) {
    return ( (  next1111 ) ( ( env->it1218 ) ) );
}

static  enum Unit_8   drop_prime_1114 (    struct Scanner_1086 *  it1218 ,    size_t  n1220 ) {
    struct env1116 envinst1116 = {
        .it1218 =  it1218 ,
    };
    ( (  for_dash_each1115 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32308 ) ( (  n1220 ) ) ) ) ) ,  ( (struct envunion1117){ .fun = (  struct Maybe_348  (*) (  struct env1116*  ,    int32_t  ) )lam1120 , .env =  envinst1116 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce1122 (    struct TakeWhile_1100  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct TakeWhile_1100  it1124 = ( (  into_dash_iter1113 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next1110 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1123 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1123);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1124;
    return (  temp1124 );
}

static  size_t   lam1125 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add353 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1121 (    struct TakeWhile_1100  it1129 ) {
    return ( (  reduce1122 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1125 ) ) );
}

static  struct TakeWhile_1100   chars1127 (    struct TakeWhile_1100  self1889 ) {
    return (  self1889 );
}

static  struct Maybe_1098   reduce1128 (    struct TakeWhile_1100  iterable1118 ,    struct Maybe_1098  base1120 ,    struct Maybe_1098 (*  fun1122 )(    struct Char_65  ,    struct Maybe_1098  ) ) {
    struct Maybe_1098  x1123 = (  base1120 );
    struct TakeWhile_1100  it1124 = ( (  into_dash_iter1113 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next1110 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1129 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1129);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_1098  temp1130;
    return (  temp1130 );
}

static  void *   cast_dash_ptr1138 (    int32_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1139 (    int32_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  int32_t   zeroed1136 (  ) {
    int32_t  temp1137;
    int32_t  x648 = (  temp1137 );
    ( ( memset ) ( ( (  cast_dash_ptr1138 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1139 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  uint8_t *   cast1140 (    int32_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1134 (    uint8_t  x651 ) {
    int32_t  temp1135 = ( (  zeroed1136 ) ( ) );
    int32_t *  y652 = ( &temp1135 );
    uint8_t *  yp653 = ( (  cast1140 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  int32_t   u8_dash_i321133 (    uint8_t  x753 ) {
    return ( (  cast_dash_on_dash_zeroed1134 ) ( (  x753 ) ) );
}

static  struct Maybe_171   parse_dash_digit1132 (    struct Char_65  c1531 ) {
    if ( ( (  is_dash_digit1104 ) ( (  c1531 ) ) ) ) {
        return ( ( Maybe_171_Just ) ( ( (  u8_dash_i321133 ) ( (  op_dash_sub1063 ( ( (  char_dash_u8668 ) ( (  c1531 ) ) ) , ( (  char_dash_u8668 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
}

static  int64_t   i32_dash_i641141 (    int32_t  x684 ) {
    return ( (int64_t ) (  x684 ) );
}

static  struct Maybe_1098   sequence_dash_maybe1131 (    struct Char_65  e1935 ,    struct Maybe_1098  b1937 ) {
    struct Maybe_1098  dref1938 = (  b1937 );
    if ( dref1938.tag == Maybe_1098_None_t ) {
        return ( (struct Maybe_1098) { .tag = Maybe_1098_None_t } );
    }
    else {
        if ( dref1938.tag == Maybe_1098_Just_t ) {
            struct Maybe_171  dref1940 = ( (  parse_dash_digit1132 ) ( (  e1935 ) ) );
            if ( dref1940.tag == Maybe_171_None_t ) {
                return ( (struct Maybe_1098) { .tag = Maybe_1098_None_t } );
            }
            else {
                if ( dref1940.tag == Maybe_171_Just_t ) {
                    return ( ( Maybe_1098_Just ) ( (  op_dash_add363 ( (  op_dash_mul344 ( ( dref1938 .stuff .Maybe_1098_Just_s .field0 ) , (  from_dash_integral362 ( 10 ) ) ) ) , ( (  i32_dash_i641141 ) ( ( dref1940 .stuff .Maybe_171_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_1098   parse_dash_int1126 (    struct TakeWhile_1100  s1932 ) {
    struct TakeWhile_1100  cs1942 = ( (  chars1127 ) ( (  s1932 ) ) );
    struct Maybe_348  dref1943 = ( (  head1109 ) ( (  cs1942 ) ) );
    if ( dref1943.tag == Maybe_348_Just_t ) {
        return ( (  reduce1128 ) ( (  cs1942 ) ,  ( ( Maybe_1098_Just ) ( (  from_dash_integral362 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1131 ) ) );
    }
    else {
        if ( dref1943.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_1098) { .tag = Maybe_1098_None_t } );
        }
    }
}

static  struct Maybe_1098   scan_dash_int1099 (    struct Scanner_1086 *  sc3411 ) {
    struct TakeWhile_1100  digit_dash_chars3412 = ( (  take_dash_while1101 ) ( (  sc3411 ) ,  (  is_dash_digit1104 ) ) );
    if ( ( (  null1108 ) ( (  digit_dash_chars3412 ) ) ) ) {
        return ( (struct Maybe_1098) { .tag = Maybe_1098_None_t } );
    }
    ( (  drop_prime_1114 ) ( (  sc3411 ) ,  ( (  count1121 ) ( (  digit_dash_chars3412 ) ) ) ) );
    return ( (  parse_dash_int1126 ) ( (  digit_dash_chars3412 ) ) );
}

static  int32_t   i64_dash_i321143 (    int64_t  x699 ) {
    return ( (int32_t ) (  x699 ) );
}

struct StrConcat_1145 {
    struct StrView_27  field0;
    int64_t  field1;
};

static struct StrConcat_1145 StrConcat_1145_StrConcat (  struct StrView_27  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_1145 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1147 {
    struct StrView_27  field0;
    struct StrConcat_1145  field1;
};

static struct StrConcat_1147 StrConcat_1147_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1145  field1 ) {
    return ( struct StrConcat_1147 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1149 {
    struct StrConcat_1147  field0;
    struct Char_65  field1;
};

static struct StrConcat_1149 StrConcat_1149_StrConcat (  struct StrConcat_1147  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1149 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1154 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1153 {
    struct StrViewIter_290  f_left;
    struct IntStrIter_1154  f_right;
};

struct StrConcatIter_1152 {
    struct StrViewIter_290  f_left;
    struct StrConcatIter_1153  f_right;
};

enum EmptyIter_1156 {
    EmptyIter_1156_EmptyIter,
};

struct AppendIter_1155 {
    enum EmptyIter_1156  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

struct StrConcatIter_1151 {
    struct StrConcatIter_1152  f_left;
    struct AppendIter_1155  f_right;
};

static  struct StrConcatIter_1151   into_dash_iter1158 (    struct StrConcatIter_1151  self1290 ) {
    return (  self1290 );
}

struct env1165 {
    ;
    int64_t  base1386;
};

struct envunion1166 {
    int64_t  (*fun) (  struct env1165*  ,    int32_t  ,    int64_t  );
    struct env1165 env;
};

static  int64_t   reduce1164 (    struct Range_166  iterable1118 ,    int64_t  base1120 ,   struct envunion1166  fun1122 ) {
    int64_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion1166  temp1167 = (  fun1122 );
                x1123 = ( temp1167.fun ( &temp1167.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1168 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1168);
    abort ( );
    ( Unit_8_Unit );
    int64_t  temp1169;
    return (  temp1169 );
}

static  int64_t   lam1170 (   struct env1165* env ,    int32_t  item1390 ,    int64_t  x1392 ) {
    return (  op_dash_mul344 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  int64_t   pow1163 (    int64_t  base1386 ,    int32_t  p1388 ) {
    struct env1165 envinst1165 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce1164 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral362 ( 1 ) ) ,  ( (struct envunion1166){ .fun = (  int64_t  (*) (  struct env1165*  ,    int32_t  ,    int64_t  ) )lam1170 , .env =  envinst1165 } ) ) );
}

static  int64_t   op_dash_div1171 (    int64_t  l218 ,    int64_t  r220 ) {
    return ( (  l218 ) / (  r220 ) );
}

static  uint8_t   cast1172 (    int64_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  int64_t   op_dash_sub1173 (    int64_t  l208 ,    int64_t  r210 ) {
    return ( (  l208 ) - (  r210 ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1175 (    uint8_t *  ptr786 ,    uint8_t  b788 ) {
    size_t  s789 = ( ( (size_t ) (  ptr786 ) ) );
    size_t  exp790 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add353 ( (  op_dash_sub455 ( (  s789 ) , ( (  u8_dash_size1046 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer322 ) ( (  ptr786 ) ) ) ) ) ) ) , (  op_dash_mul528 ( (  exp790 ) , ( (  u8_dash_size1046 ) ( (  b788 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1176 (    size_t  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  struct Char_65   char_dash_from_dash_u81174 (    uint8_t  b1277 ) {
    uint8_t *  ptr1278 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1175 ) ( ( ( (  cast1176 ) ( ( (  u8_dash_size1046 ) ( (  b1277 ) ) ) ) ) ) ,  (  from_dash_integral325 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr1278 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_348   next1162 (    struct IntStrIter_1154 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_348_Just ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    int64_t  trim_dash_down1400 = ( (  pow1163 ) ( (  from_dash_integral362 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1401 = (  op_dash_div1171 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    int64_t  upper_dash_mask1402 = (  op_dash_mul344 ( (  op_dash_div1171 ( (  upper1401 ) , (  from_dash_integral362 ( 10 ) ) ) ) , (  from_dash_integral362 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast1172 ) ( (  op_dash_sub1173 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81174 ) ( (  op_dash_add1064 ( (  digit1403 ) , (  from_dash_integral325 ( 48 ) ) ) ) ) );
    return ( ( Maybe_348_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_348   next1161 (    struct StrConcatIter_1153 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1162 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next1160 (    struct StrConcatIter_1152 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1161 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next1178 (    enum EmptyIter_1156 *  dref800 ) {
    return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
}

static  struct Maybe_348   next1177 (    struct AppendIter_1155 *  self1047 ) {
    struct Maybe_348  dref1048 = ( (  next1178 ) ( ( & ( ( * (  self1047 ) ) .f_it ) ) ) );
    if ( dref1048.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1048 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1048.tag == Maybe_348_None_t ) {
            if ( ( ! ( ( * (  self1047 ) ) .f_appended ) ) ) {
                (*  self1047 ) .f_appended = ( true );
                return ( ( Maybe_348_Just ) ( ( ( * (  self1047 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  struct Maybe_348   next1159 (    struct StrConcatIter_1151 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next1160 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1150 (    struct StrConcatIter_1151  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_1151  temp1157 = ( (  into_dash_iter1158 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1151 *  it1102 = ( &temp1157 );
    while ( ( true ) ) {
        struct Maybe_348  dref1103 = ( (  next1159 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_348_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_348_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_348_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_174   cmp1187 (    int64_t  l163 ,    int64_t  r165 ) {
    return ( builtin_int64_tcmp( (  l163 ) , (  r165 ) ) );
}

static  bool   eq1189 (    int64_t  l110 ,    int64_t  r112 ) {
    return ( (  l110 ) == (  r112 ) );
}

static  int32_t   count_dash_digits1188 (    int64_t  self1407 ) {
    if ( (  eq1189 ( (  self1407 ) , (  from_dash_integral362 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp1187 ( (  self1407 ) , (  from_dash_integral362 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div1171 ( (  self1407 ) , (  from_dash_integral362 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_1154   int_dash_iter1186 (    int64_t  int1411 ) {
    if ( (  cmp1187 ( (  int1411 ) , (  from_dash_integral362 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1154) { .f_int = (  op_dash_neg381 ( (  int1411 ) ) ) , .f_len = ( (  count_dash_digits1188 ) ( (  op_dash_neg381 ( (  int1411 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1154) { .f_int = (  int1411 ) , .f_len = ( (  count_dash_digits1188 ) ( (  int1411 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1154   chars1185 (    int64_t  self1808 ) {
    return ( (  int_dash_iter1186 ) ( (  self1808 ) ) );
}

static  struct StrConcatIter_1153   into_dash_iter1184 (    struct StrConcat_1145  dref1297 ) {
    return ( (struct StrConcatIter_1153) { .f_left = ( (  chars292 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1185 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1153   chars1183 (    struct StrConcat_1145  self1308 ) {
    return ( (  into_dash_iter1184 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1152   into_dash_iter1182 (    struct StrConcat_1147  dref1297 ) {
    return ( (struct StrConcatIter_1152) { .f_left = ( (  chars292 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1183 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1152   chars1181 (    struct StrConcat_1147  self1308 ) {
    return ( (  into_dash_iter1182 ) ( (  self1308 ) ) );
}

static  enum EmptyIter_1156   into_dash_iter1194 (    enum EmptyIter_1156  self798 ) {
    return (  self798 );
}

static  struct AppendIter_1155   append1193 (    enum EmptyIter_1156  it1031 ,    struct Char_65  e1033 ) {
    return ( (struct AppendIter_1155) { .f_it = ( (  into_dash_iter1194 ) ( (  it1031 ) ) ) , .f_elem = (  e1033 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_1155   cons1192 (    enum EmptyIter_1156  it1036 ,    struct Char_65  e1038 ) {
    return ( (  append1193 ) ( (  it1036 ) ,  (  e1038 ) ) );
}

static  enum EmptyIter_1156   nil1195 (  ) {
    return ( EmptyIter_1156_EmptyIter );
}

static  struct AppendIter_1155   single1191 (    struct Char_65  e1041 ) {
    return ( (  cons1192 ) ( ( (  nil1195 ) ( ) ) ,  (  e1041 ) ) );
}

static  struct AppendIter_1155   chars1190 (    struct Char_65  self1286 ) {
    return ( (  single1191 ) ( (  self1286 ) ) );
}

static  struct StrConcatIter_1151   into_dash_iter1180 (    struct StrConcat_1149  dref1297 ) {
    return ( (struct StrConcatIter_1151) { .f_left = ( (  chars1181 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1151   chars1179 (    struct StrConcat_1149  self1308 ) {
    return ( (  into_dash_iter1180 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print1148 (    struct StrConcat_1149  s1335 ) {
    ( (  for_dash_each1150 ) ( ( (  chars1179 ) ( (  s1335 ) ) ) ,  (  printf_dash_char315 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1146 (    struct StrConcat_1147  s1338 ) {
    ( (  print1148 ) ( ( ( StrConcat_1149_StrConcat ) ( (  s1338 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_1011   undefined1196 (  ) {
    enum MouseButton_1011  temp1197;
    return (  temp1197 );
}

static  enum MouseButton_1011   panic_prime_1144 (    struct StrConcat_1145  errmsg2149 ) {
    ( (  println1146 ) ( ( ( StrConcat_1147_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg2149 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1196 ) ( ) );
}

static  enum MouseButton_1011   btn_dash_to_dash_mouse_dash_button1142 (    int64_t  btn3603 ) {
    return ( {  int32_t  dref3604 = ( (  i64_dash_i321143 ) ( (  btn3603 ) ) ) ;  eq693 (  dref3604 ,  from_dash_integral56 ( 0 ) ) ? ( MouseButton_1011_MouseLeft ) :  eq693 (  dref3604 ,  from_dash_integral56 ( 1 ) ) ? ( MouseButton_1011_MouseMiddle ) :  eq693 (  dref3604 ,  from_dash_integral56 ( 2 ) ) ? ( MouseButton_1011_MouseRight ) :  eq693 (  dref3604 ,  from_dash_integral56 ( 64 ) ) ? ( MouseButton_1011_ScrollUp ) :  eq693 (  dref3604 ,  from_dash_integral56 ( 65 ) ) ? ( MouseButton_1011_ScrollDown ) : ( (  panic_prime_1144 ) ( ( ( StrConcat_1145_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3603 ) ) ) ) ) ; } );
}

static  struct Scanner_1086   mk1199 (    struct StrView_27  s3399 ) {
    return ( (struct Scanner_1086) { .f_s = ( (  into_dash_iter293 ) ( (  s3399 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_1008   parse_dash_csi1080 (    struct Slice_1081  seq3610 ) {
    if ( (  eq280 ( ( (  seq3610 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
    }
    char  last3611 = (  elem_dash_get1082 ( (  seq3610 ) , (  op_dash_sub455 ( ( (  seq3610 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq1067 ( (  elem_dash_get1082 ( (  seq3610 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) && ( (  eq1067 ( (  last3611 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) || (  eq1067 ( (  last3611 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_1086  temp1087 = ( (  mk_dash_from_dash_str1088 ) ( ( (  substr1089 ) ( ( (  from_dash_ascii_dash_slice1095 ) ( (  seq3610 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3610 ) .f_count ) ) ) ) );
        struct Scanner_1086 *  sc3612 = ( &temp1087 );
        struct Maybe_1098  dref3613 = ( (  scan_dash_int1099 ) ( (  sc3612 ) ) );
        if ( dref3613.tag == Maybe_1098_None_t ) {
            return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
        }
        else {
            if ( dref3613.tag == Maybe_1098_Just_t ) {
                ( (  next1111 ) ( (  sc3612 ) ) );
                struct Maybe_1098  dref3615 = ( (  scan_dash_int1099 ) ( (  sc3612 ) ) );
                if ( dref3615.tag == Maybe_1098_None_t ) {
                    return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
                }
                else {
                    if ( dref3615.tag == Maybe_1098_Just_t ) {
                        ( (  next1111 ) ( (  sc3612 ) ) );
                        struct Maybe_1098  dref3617 = ( (  scan_dash_int1099 ) ( (  sc3612 ) ) );
                        if ( dref3617.tag == Maybe_1098_None_t ) {
                            return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
                        }
                        else {
                            if ( dref3617.tag == Maybe_1098_Just_t ) {
                                return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Mouse ) ( ( (struct MouseEvent_1010) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1142 ) ( ( dref3613 .stuff .Maybe_1098_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub180 ( ( (  i64_dash_i321143 ) ( ( dref3615 .stuff .Maybe_1098_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub180 ( ( (  i64_dash_i321143 ) ( ( dref3617 .stuff .Maybe_1098_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq1067 ( (  last3611 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq280 ( ( (  seq3610 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq1067 ( (  last3611 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Up_t } ) ) ) ) );
        }
        if ( (  eq1067 ( (  last3611 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Down_t } ) ) ) ) );
        }
        if ( (  eq1067 ( (  last3611 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Right_t } ) ) ) ) );
        }
        if ( (  eq1067 ( (  last3611 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Left_t } ) ) ) ) );
        }
        if ( (  eq1067 ( (  last3611 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Home_t } ) ) ) ) );
        }
        if ( (  eq1067 ( (  last3611 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
    }
    if ( (  eq1067 ( (  last3611 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_1086  temp1198 = ( (  mk1199 ) ( ( (  from_dash_ascii_dash_slice1095 ) ( (  seq3610 ) ) ) ) );
        struct Scanner_1086 *  sc3619 = ( &temp1198 );
        struct Maybe_1098  dref3620 = ( (  scan_dash_int1099 ) ( (  sc3619 ) ) );
        if ( dref3620.tag == Maybe_1098_None_t ) {
            return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
        }
        else {
            if ( dref3620.tag == Maybe_1098_Just_t ) {
                return ( {  int32_t  dref3622 = ( (  i64_dash_i321143 ) ( ( dref3620 .stuff .Maybe_1098_Just_s .field0 ) ) ) ;  eq693 (  dref3622 ,  from_dash_integral56 ( 1 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Home_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 2 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Insert_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 3 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Delete_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 4 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_End_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 5 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_PageUp_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 6 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_PageDown_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 15 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_F5_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 17 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_F6_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 18 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_F7_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 19 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_F8_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 20 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_F9_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 21 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_F10_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 23 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_F11_t } ) ) ) ) ) :  eq693 (  dref3622 ,  from_dash_integral56 ( 24 ) ) ? ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_F12_t } ) ) ) ) ) : ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
}

static  struct Slice_1081   subslice1200 (    struct Slice_1081  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    char *  begin_dash_ptr2209 = ( (  offset_dash_ptr1078 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp299 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp299 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_1081) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub455 ( ( (  min584 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_1081) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  char *   cast1202 (    struct Array_1068 *  x395 ) {
    return ( (char * ) (  x395 ) );
}

static  struct Slice_1081   as_dash_slice1201 (    struct Array_1068 *  arr2052 ) {
    return ( (struct Slice_1081) { .f_ptr = ( (  cast1202 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1204 {
    enum {
        Maybe_1204_None_t,
        Maybe_1204_Just_t,
    } tag;
    union {
        struct {
            struct Key_440  field0;
        } Maybe_1204_Just_s;
    } stuff;
};

static struct Maybe_1204 Maybe_1204_Just (  struct Key_440  field0 ) {
    return ( struct Maybe_1204 ) { .tag = Maybe_1204_Just_t, .stuff = { .Maybe_1204_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1204   parse_dash_ss31205 (    char  c3607 ) {
    if ( (  eq1067 ( (  c3607 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1204_Just ) ( ( (struct Key_440) { .tag = Key_440_Up_t } ) ) );
    }
    if ( (  eq1067 ( (  c3607 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1204_Just ) ( ( (struct Key_440) { .tag = Key_440_Down_t } ) ) );
    }
    if ( (  eq1067 ( (  c3607 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1204_Just ) ( ( (struct Key_440) { .tag = Key_440_Right_t } ) ) );
    }
    if ( (  eq1067 ( (  c3607 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1204_Just ) ( ( (struct Key_440) { .tag = Key_440_Left_t } ) ) );
    }
    if ( (  eq1067 ( (  c3607 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1204_Just ) ( ( (struct Key_440) { .tag = Key_440_Home_t } ) ) );
    }
    if ( (  eq1067 ( (  c3607 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1204_Just ) ( ( (struct Key_440) { .tag = Key_440_End_t } ) ) );
    }
    if ( (  eq1067 ( (  c3607 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1204_Just ) ( ( (struct Key_440) { .tag = Key_440_F1_t } ) ) );
    }
    if ( (  eq1067 ( (  c3607 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1204_Just ) ( ( (struct Key_440) { .tag = Key_440_F2_t } ) ) );
    }
    if ( (  eq1067 ( (  c3607 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1204_Just ) ( ( (struct Key_440) { .tag = Key_440_F3_t } ) ) );
    }
    if ( (  eq1067 ( (  c3607 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1204_Just ) ( ( (struct Key_440) { .tag = Key_440_F4_t } ) ) );
    }
    return ( (struct Maybe_1204) { .tag = Maybe_1204_None_t } );
}

static  struct Maybe_1008   read_dash_key1020 (  ) {
    char  temp1021 = ( (  undefined1022 ) ( ) );
    char *  ch3624 = ( &temp1021 );
    struct Maybe_1024  dref3625 = ( (  read_dash_byte1025 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3625.tag == Maybe_1024_None_t ) {
        return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
    }
    else {
        if ( dref3625.tag == Maybe_1024_Just_t ) {
            (*  ch3624 ) = ( dref3625 .stuff .Maybe_1024_Just_s .field0 );
        }
    }
    if ( (  eq321 ( ( (  ascii_dash_u8592 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral325 ( 13 ) ) ) ) ) {
        return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Enter_t } ) ) ) ) );
    }
    if ( (  eq321 ( ( (  ascii_dash_u8592 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral325 ( 127 ) ) ) ) ) {
        return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp338 ( ( (  ascii_dash_u8592 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral325 ( 27 ) ) ) == 0 ) && ( !  eq321 ( ( (  ascii_dash_u8592 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral325 ( 9 ) ) ) ) ) ) {
        char  letter3627 = ( (  u8_dash_ascii1032 ) ( ( (  u32_dash_u8160 ) ( ( (  u32_dash_or864 ) ( ( (  u8_dash_u321033 ) ( ( (  ascii_dash_u8592 ) ( ( * (  ch3624 ) ) ) ) ) ) ,  ( (  from_dash_hex1037 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( ( Key_440_Ctrl ) ( (  letter3627 ) ) ) ) ) ) );
    }
    if ( ( !  eq321 ( ( (  ascii_dash_u8592 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral325 ( 27 ) ) ) ) ) {
        if ( (  cmp338 ( ( (  ascii_dash_u8592 ) ( ( * (  ch3624 ) ) ) ) , (  from_dash_integral325 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1020 ) ( ) );
        } else {
            return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( ( Key_440_Char ) ( ( * (  ch3624 ) ) ) ) ) ) ) );
        }
    }
    char  temp1066 = ( (  undefined1022 ) ( ) );
    char *  ch23628 = ( &temp1066 );
    struct Maybe_1024  dref3629 = ( (  read_dash_byte1025 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3629.tag == Maybe_1024_None_t ) {
        return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3629.tag == Maybe_1024_Just_t ) {
            (*  ch23628 ) = ( dref3629 .stuff .Maybe_1024_Just_s .field0 );
        }
    }
    if ( (  eq1067 ( ( * (  ch23628 ) ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_1068  temp1069 = ( ( (  zeroed1070 ) ( ) ) );
        struct Array_1068 *  seq3631 = ( &temp1069 );
        int32_t  slen3632 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp173 ( (  slen3632 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp1074 = ( (  undefined1022 ) ( ) );
            char *  sc3633 = ( &temp1074 );
            struct Maybe_1024  dref3634 = ( (  read_dash_byte1025 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3634.tag == Maybe_1024_None_t ) {
                break;
            }
            else {
                if ( dref3634.tag == Maybe_1024_Just_t ) {
                    (*  sc3633 ) = ( dref3634 .stuff .Maybe_1024_Just_s .field0 );
                }
            }
            ( (  set1075 ) ( (  seq3631 ) ,  ( (  i32_dash_size277 ) ( (  slen3632 ) ) ) ,  ( * (  sc3633 ) ) ) );
            slen3632 = (  op_dash_add175 ( (  slen3632 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp338 ( ( (  ascii_dash_u8592 ) ( ( * (  sc3633 ) ) ) ) , (  from_dash_integral325 ( 64 ) ) ) != 0 ) && (  cmp338 ( ( (  ascii_dash_u8592 ) ( ( * (  sc3633 ) ) ) ) , (  from_dash_integral325 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1080 ) ( ( (  subslice1200 ) ( ( (  as_dash_slice1201 ) ( (  seq3631 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size277 ) ( (  slen3632 ) ) ) ) ) ) );
    }
    if ( (  eq1067 ( ( * (  ch23628 ) ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1203 = ( (  undefined1022 ) ( ) );
        char *  sc3636 = ( &temp1203 );
        struct Maybe_1024  dref3637 = ( (  read_dash_byte1025 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3637.tag == Maybe_1024_None_t ) {
            return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3637.tag == Maybe_1024_Just_t ) {
                (*  sc3636 ) = ( dref3637 .stuff .Maybe_1024_Just_s .field0 );
            }
        }
        struct Maybe_1204  dref3639 = ( (  parse_dash_ss31205 ) ( ( * (  sc3636 ) ) ) );
        if ( dref3639.tag == Maybe_1204_None_t ) {
            return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
        }
        else {
            if ( dref3639.tag == Maybe_1204_Just_t ) {
                return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( dref3639 .stuff .Maybe_1204_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_1008_Just ) ( ( ( InputEvent_1009_Key ) ( ( (struct Key_440) { .tag = Key_440_Escape_t } ) ) ) ) );
}

static  struct Maybe_1008   read_dash_event1017 (   struct env95* env ,    struct Tui_97 *  tui3649 ) {
    struct envunion96  temp1018 = ( (struct envunion96){ .fun = (  bool  (*) (  struct env94*  ,    struct Tui_97 *  ) )update_dash_dimensions1019 , .env =  env->envinst94 } );
    ( temp1018.fun ( &temp1018.env ,  (  tui3649 ) ) );
    struct Maybe_1008  dref3650 = ( (  read_dash_key1020 ) ( ) );
    if ( dref3650.tag == Maybe_1008_None_t ) {
        return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
    }
    else {
        if ( dref3650.tag == Maybe_1008_Just_t ) {
            (*  tui3649 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_1008_Just ) ( ( dref3650 .stuff .Maybe_1008_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_1008   lam1015 (   struct env1006* env ) {
    struct envunion1007  temp1016 = ( (struct envunion1007){ .fun = (  struct Maybe_1008  (*) (  struct env95*  ,    struct Tui_97 *  ) )read_dash_event1017 , .env =  env->envinst95 } );
    return ( temp1016.fun ( &temp1016.env ,  ( env->tui4892 ) ) );
}

static  struct Maybe_1008   next1207 (    struct FunIter_1005 *  self1056 ) {
    if ( ( ( * (  self1056 ) ) .f_finished ) ) {
        return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
    }
    struct envunion1012  temp1208 = ( ( * (  self1056 ) ) .f_fun );
    struct Maybe_1008  dref1057 = ( temp1208.fun ( &temp1208.env ) );
    if ( dref1057.tag == Maybe_1008_Just_t ) {
        return ( ( Maybe_1008_Just ) ( ( dref1057 .stuff .Maybe_1008_Just_s .field0 ) ) );
    }
    else {
        if ( dref1057.tag == Maybe_1008_None_t ) {
            (*  self1056 ) .f_finished = ( true );
            return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
        }
    }
}

struct env1211 {
    struct Editor_264 *  ed4716;
    ;
};

struct envunion1212 {
    enum Unit_8  (*fun) (  struct env1211*  ,    struct StrView_27  );
    struct env1211 env;
};

static  enum Unit_8   if_dash_just1210 (    struct Maybe_79  x1601 ,   struct envunion1212  fun1603 ) {
    struct Maybe_79  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_79_Just_t ) {
        struct envunion1212  temp1213 = (  fun1603 );
        ( temp1213.fun ( &temp1213.env ,  ( dref1604 .stuff .Maybe_79_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_79_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1214 (   struct env1211* env ,    struct StrView_27  msg4718 ) {
    ( (  free682 ) ( (  msg4718 ) ,  ( ( * ( env->ed4716 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1209 (    struct Editor_264 *  ed4716 ) {
    struct env1211 envinst1211 = {
        .ed4716 =  ed4716 ,
    };
    ( (  if_dash_just1210 ) ( ( ( * (  ed4716 ) ) .f_msg ) ,  ( (struct envunion1212){ .fun = (  enum Unit_8  (*) (  struct env1211*  ,    struct StrView_27  ) )lam1214 , .env =  envinst1211 } ) ) );
    (*  ed4716 ) .f_msg = ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1216 {
    enum Unit_8  (*fun) (  struct env432*  ,    struct Editor_264 *  ,    struct Key_440  );
    struct env432 env;
};

static  size_t   clamp1222 (    size_t  x1648 ,    size_t  mn1650 ,    size_t  mx1652 ) {
    if ( (  cmp299 ( (  x1648 ) , (  mn1650 ) ) == 0 ) ) {
        return (  mn1650 );
    } else {
        if ( (  cmp299 ( (  x1648 ) , (  mx1652 ) ) == 2 ) ) {
            return (  mx1652 );
        } else {
            return (  x1648 );
        }
    }
}

static  size_t   sync_dash_char1224 (    uint8_t *  p1429 ) {
    size_t  i1430 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb1431 = ( * ( (uint8_t * ) ( ( (void*) (  p1429 ) ) + (  op_dash_neg381 ( ( (  size_dash_i64346 ) ( (  i1430 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp338 ( (  pb1431 ) , (  from_dash_integral325 ( 128 ) ) ) != 0 ) && (  cmp338 ( (  pb1431 ) , (  op_dash_add1064 ( (  from_dash_integral325 ( 128 ) ) , (  from_dash_integral325 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i1430 );
        }
        i1430 = (  op_dash_add353 ( (  i1430 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1223 (    uint8_t *  p1434 ) {
    return (  op_dash_add353 ( ( (  sync_dash_char1224 ) ( ( (  offset_dash_ptr350 ) ( (  p1434 ) ,  (  op_dash_neg381 ( (  from_dash_integral362 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1221 (    struct TextBuf_117 *  self4062 ,    struct Pos_26  pos4064 ) {
    if ( (  eq692 ( (  pos4064 ) , ( (  mk826 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk826 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq693 ( ( (  pos4064 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert799 ) ( (  cmp173 ( ( (  pos4064 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk826 ) ( (  op_dash_sub180 ( ( (  pos4064 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( ( (  line294 ) ( (  self4062 ) ,  (  op_dash_sub180 ( ( (  pos4064 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line4065 = ( (  line294 ) ( (  self4062 ) ,  ( (  pos4064 ) .f_line ) ) );
    size_t  pos_dash_bi4066 = ( (  clamp1222 ) ( ( (  i32_dash_size277 ) ( ( (  pos4064 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes393 ) ( (  line4065 ) ) ) ) );
    size_t  off4067 = ( (  previous_dash_char1223 ) ( ( (  offset_dash_ptr350 ) ( ( ( (  line4065 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  pos_dash_bi4066 ) ) ) ) ) ) );
    return ( (  mk826 ) ( ( (  pos4064 ) .f_line ) ,  ( (  size_dash_i32308 ) ( (  op_dash_sub455 ( (  pos_dash_bi4066 ) , (  off4067 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1220 (    struct Pane_238 *  self4469 ) {
    ( (  set_dash_cursors284 ) ( (  self4469 ) ,  ( (  left_dash_pos1221 ) ( ( ( * (  self4469 ) ) .f_buf ) ,  ( ( * (  self4469 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_238 *   pane1225 (    struct Editor_264 *  ed4704 ) {
    return ( & ( ( * (  ed4704 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1228 (    struct TextBuf_117 *  self4046 ) {
    return ( (  size_dash_i32308 ) ( ( (  size694 ) ( ( & ( ( * (  self4046 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1227 (    struct TextBuf_117 *  self4054 ,    struct Pos_26  pos4056 ) {
    if ( (  cmp173 ( ( (  pos4056 ) .f_line ) , ( (  num_dash_lines1228 ) ( (  self4054 ) ) ) ) != 0 ) ) {
        return ( (  mk826 ) ( ( (  num_dash_lines1228 ) ( (  self4054 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_27  line4057 = ( (  line294 ) ( (  self4054 ) ,  ( (  pos4056 ) .f_line ) ) );
    int64_t  bi4058 = ( (  i32_dash_i641141 ) ( ( (  pos4056 ) .f_bi ) ) );
    if ( (  cmp1187 ( (  bi4058 ) , ( (  size_dash_i64346 ) ( ( (  num_dash_bytes393 ) ( (  line4057 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp173 ( (  op_dash_add175 ( ( (  pos4056 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1228 ) ( (  self4054 ) ) ) ) != 0 ) ) {
            return ( (  mk826 ) ( ( (  pos4056 ) .f_line ) ,  ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( (  line4057 ) ) ) ) ) ) );
        }
        return ( (  mk826 ) ( (  op_dash_add175 ( ( (  pos4056 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off4059 = ( (  size_dash_i32308 ) ( ( (  next_dash_char337 ) ( ( (  offset_dash_ptr350 ) ( ( ( (  line4057 ) .f_contents ) .f_ptr ) ,  (  bi4058 ) ) ) ) ) ) );
    return ( (  mk826 ) ( ( (  pos4056 ) .f_line ) ,  (  op_dash_add175 ( ( (  pos4056 ) .f_bi ) , (  off4059 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1226 (    struct Pane_238 *  self4466 ) {
    ( (  set_dash_cursors284 ) ( (  self4466 ) ,  ( (  right_dash_pos1227 ) ( ( ( * (  self4466 ) ) .f_buf ) ,  ( ( * (  self4466 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1230 (    struct TextBuf_117 *  self4339 ,    int32_t  ln4341 ,    int32_t  vx4343 ) {
    int32_t  bi4344 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4345 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_290  temp1231 =  into_dash_iter291 ( ( (  chars292 ) ( ( (  line294 ) ( (  self4339 ) ,  (  ln4341 ) ) ) ) ) );
    while (true) {
        struct Maybe_348  __cond1232 =  next349 (&temp1231);
        if (  __cond1232 .tag == 0 ) {
            break;
        }
        struct Char_65  c4347 =  __cond1232 .stuff .Maybe_348_Just_s .field0;
        vi4345 = (  op_dash_add175 ( (  vi4345 ) , ( (  char_dash_screen_dash_width354 ) ( (  c4347 ) ) ) ) );
        if ( (  cmp173 ( (  vx4343 ) , (  vi4345 ) ) == 0 ) ) {
            break;
        }
        bi4344 = (  op_dash_add175 ( (  bi4344 ) , ( (  size_dash_i32308 ) ( ( (  c4347 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4344 );
}

static  enum Unit_8   move_dash_down1229 (    struct Pane_238 *  self4472 ,    int32_t  amnt4474 ) {
    struct Pos_26  cur4475 = ( ( * (  self4472 ) ) .f_cursor );
    int32_t  nu_dash_line4476 = ( (  min790 ) ( (  op_dash_add175 ( ( (  cur4475 ) .f_line ) , (  amnt4474 ) ) ) ,  (  op_dash_sub180 ( ( (  num_dash_lines1228 ) ( ( ( * (  self4472 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4477 = ( ( * (  self4472 ) ) .f_vi );
    int32_t  bi4478 = ( (  vi_dash_bi1230 ) ( ( ( * (  self4472 ) ) .f_buf ) ,  (  nu_dash_line4476 ) ,  (  vci4477 ) ) );
    ( (  set_dash_cursors284 ) ( (  self4472 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4476 ) , .f_bi = (  bi4478 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1233 (    struct Pane_238 *  self4481 ,    int32_t  amnt4483 ) {
    struct Pos_26  cur4484 = ( ( * (  self4481 ) ) .f_cursor );
    int32_t  nu_dash_line4485 = ( (  max371 ) ( (  op_dash_sub180 ( ( (  cur4484 ) .f_line ) , (  amnt4483 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4486 = ( ( * (  self4481 ) ) .f_vi );
    int32_t  bi4487 = ( (  vi_dash_bi1230 ) ( ( ( * (  self4481 ) ) .f_buf ) ,  (  nu_dash_line4485 ) ,  (  vci4486 ) ) );
    ( (  set_dash_cursors284 ) ( (  self4481 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4485 ) , .f_bi = (  bi4487 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1235 (    struct TextBuf_117 *  self4160 ) {
    (*  self4160 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_119_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1234 (    struct Pane_238 *  self4445 ,    enum Mode_239  mode4447 ) {
    if ( (  eq390 ( (  mode4447 ) , ( Mode_239_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1235 ) ( ( ( * (  self4445 ) ) .f_buf ) ) );
    }
    (*  self4445 ) .f_mode = (  mode4447 );
    return ( Unit_8_Unit );
}

struct SliceIter_1243 {
    struct Slice_31  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1242 {
    struct SliceIter_1243  field0;
    size_t  field1;
};

static struct Drop_1242 Drop_1242_Drop (  struct SliceIter_1243  field0 ,  size_t  field1 ) {
    return ( struct Drop_1242 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1242   into_dash_iter1244 (    struct Drop_1242  self853 ) {
    return (  self853 );
}

static  struct SliceIter_1243   into_dash_iter1247 (    struct Slice_31  self2250 ) {
    return ( (struct SliceIter_1243) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1249 (    struct Changeset_32 *  x377 ,    int64_t  count379 ) {
    struct Changeset_32  temp1250;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1250 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1248 (    struct Slice_31  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Changeset_32 *  begin_dash_ptr2209 = ( (  offset_dash_ptr1249 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp299 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp299 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub455 ( ( (  min584 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_1243   into_dash_iter1246 (    struct List_30  self2433 ) {
    return ( (  into_dash_iter1247 ) ( ( (  subslice1248 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  struct Drop_1242   drop1245 (    struct List_30  iterable860 ,    size_t  i862 ) {
    struct SliceIter_1243  it863 = ( (  into_dash_iter1246 ) ( (  iterable860 ) ) );
    return ( ( Drop_1242_Drop ) ( (  it863 ) ,  (  i862 ) ) );
}

struct Maybe_1252 {
    enum {
        Maybe_1252_None_t,
        Maybe_1252_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_32  field0;
        } Maybe_1252_Just_s;
    } stuff;
};

static struct Maybe_1252 Maybe_1252_Just (  struct Changeset_32  field0 ) {
    return ( struct Maybe_1252 ) { .tag = Maybe_1252_Just_t, .stuff = { .Maybe_1252_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1252   next1254 (    struct SliceIter_1243 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1252) { .tag = Maybe_1252_None_t } );
    }
    struct Changeset_32  elem2258 = ( * ( (  offset_dash_ptr1249 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1252_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_1252   next1253 (    struct Drop_1242 *  dref855 ) {
    while ( (  cmp299 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1254 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
        (* dref855 ) .field1 = (  op_dash_sub455 ( ( (* dref855 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1254 ) ( ( & ( (* dref855 ) .field0 ) ) ) );
}

struct env1257 {
    enum CAllocator_10  al3995;
    ;
};

struct envunion1258 {
    enum Unit_8  (*fun) (  struct env1257*  ,    struct Action_25  );
    struct env1257 env;
};

struct SliceIter_1259 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1259   into_dash_iter1262 (    struct Slice_24  self2250 ) {
    return ( (struct SliceIter_1259) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1264 (    struct Action_25 *  x377 ,    int64_t  count379 ) {
    struct Action_25  temp1265;
    return ( (struct Action_25 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1265 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1263 (    struct Slice_24  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Action_25 *  begin_dash_ptr2209 = ( (  offset_dash_ptr1264 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp299 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp299 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub455 ( ( (  min584 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_1259   into_dash_iter1261 (    struct List_23  self2433 ) {
    return ( (  into_dash_iter1262 ) ( ( (  subslice1263 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

struct Maybe_1266 {
    enum {
        Maybe_1266_None_t,
        Maybe_1266_Just_t,
    } tag;
    union {
        struct {
            struct Action_25  field0;
        } Maybe_1266_Just_s;
    } stuff;
};

static struct Maybe_1266 Maybe_1266_Just (  struct Action_25  field0 ) {
    return ( struct Maybe_1266 ) { .tag = Maybe_1266_Just_t, .stuff = { .Maybe_1266_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1266   next1267 (    struct SliceIter_1259 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1266) { .tag = Maybe_1266_None_t } );
    }
    struct Action_25  elem2258 = ( * ( (  offset_dash_ptr1264 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1266_Just ) ( (  elem2258 ) ) );
}

static  enum Unit_8   for_dash_each1256 (    struct List_23  iterable1099 ,   struct envunion1258  fun1101 ) {
    struct SliceIter_1259  temp1260 = ( (  into_dash_iter1261 ) ( (  iterable1099 ) ) );
    struct SliceIter_1259 *  it1102 = ( &temp1260 );
    while ( ( true ) ) {
        struct Maybe_1266  dref1103 = ( (  next1267 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1266_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1266_Just_t ) {
                struct envunion1258  temp1268 = (  fun1101 );
                ( temp1268.fun ( &temp1268.env ,  ( dref1103 .stuff .Maybe_1266_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1270 (    struct Action_25  action3988 ,    enum CAllocator_10  al3990 ) {
    ( (  free682 ) ( ( (  action3988 ) .f_fwd ) ,  (  al3990 ) ) );
    ( (  free682 ) ( ( (  action3988 ) .f_bwd ) ,  (  al3990 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1269 (   struct env1257* env ,    struct Action_25  a3997 ) {
    return ( (  free_dash_action1270 ) ( (  a3997 ) ,  ( env->al3995 ) ) );
}

static  void *   cast_dash_ptr1273 (    struct Action_25 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free1272 (    enum CAllocator_10  dref2373 ,    struct Slice_24  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1273 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1271 (    struct List_23 *  list2440 ) {
    ( (  free1272 ) ( ( ( * (  list2440 ) ) .f_al ) ,  ( ( * (  list2440 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1255 (    struct Changeset_32  chs3993 ,    enum CAllocator_10  al3995 ) {
    struct env1257 envinst1257 = {
        .al3995 =  al3995 ,
    };
    ( (  for_dash_each1256 ) ( ( (  chs3993 ) .f_parts ) ,  ( (struct envunion1258){ .fun = (  enum Unit_8  (*) (  struct env1257*  ,    struct Action_25  ) )lam1269 , .env =  envinst1257 } ) ) );
    ( (  free1271 ) ( ( & ( (  chs3993 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1274 (    struct List_30 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min584 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1240 (    struct Actions_118 *  actions4011 ) {
    enum CAllocator_10  al4012 = ( ( ( * (  actions4011 ) ) .f_list ) .f_al );
    size_t  cur4013 = ( ( * (  actions4011 ) ) .f_cur );
    struct Drop_1242  temp1241 =  into_dash_iter1244 ( ( (  drop1245 ) ( ( ( * (  actions4011 ) ) .f_list ) ,  (  cur4013 ) ) ) );
    while (true) {
        struct Maybe_1252  __cond1251 =  next1253 (&temp1241);
        if (  __cond1251 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action4015 =  __cond1251 .stuff .Maybe_1252_Just_s .field0;
        ( (  free_dash_changeset1255 ) ( (  action4015 ) ,  (  al4012 ) ) );
    }
    ( (  trim1274 ) ( ( & ( ( * (  actions4011 ) ) .f_list ) ) ,  (  cur4013 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1275 (    struct StrView_27  s2586 ,    enum CAllocator_10  al2588 ) {
    return ( (  clone_dash_0640 ) ( (  s2586 ) ,  (  al2588 ) ) );
}

static  struct Maybe_79   head1277 (    struct SplitIter_731  it1167 ) {
    struct SplitIter_731  temp1278 = ( (  into_dash_iter738 ) ( (  it1167 ) ) );
    return ( (  next747 ) ( ( &temp1278 ) ) );
}

static  struct Maybe_79   head1280 (    struct Drop_730  it1167 ) {
    struct Drop_730  temp1281 = ( (  into_dash_iter736 ) ( (  it1167 ) ) );
    return ( (  next746 ) ( ( &temp1281 ) ) );
}

static  bool   null1279 (    struct Drop_730  it1176 ) {
    struct Maybe_79  dref1177 = ( (  head1280 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_79_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Tuple2_744   undefined1283 (  ) {
    struct Tuple2_744  temp1284;
    return (  temp1284 );
}

static  struct Tuple2_744   or_dash_fail1282 (    struct Maybe_743  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_743  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_743_None_t ) {
        ( (  panic847 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1283 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_743_Just_t ) {
            return ( dref1356 .stuff .Maybe_743_Just_s .field0 );
        }
    }
}

static  struct Maybe_743   reduce1286 (    struct Zip_729  iterable1118 ,    struct Maybe_743  base1120 ,    struct Maybe_743 (*  fun1122 )(    struct Tuple2_744  ,    struct Maybe_743  ) ) {
    struct Maybe_743  x1123 = (  base1120 );
    struct Zip_729  it1124 = ( (  into_dash_iter734 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_743  dref1125 = ( (  next745 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_743_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_743_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_743_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1287 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1287);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_743  temp1288;
    return (  temp1288 );
}

static  struct Maybe_743   lam1289 (    struct Tuple2_744  e1172 ,    struct Maybe_743  dref1173 ) {
    return ( ( Maybe_743_Just ) ( (  e1172 ) ) );
}

static  struct Maybe_743   last1285 (    struct Zip_729  it1170 ) {
    return ( (  reduce1286 ) ( (  it1170 ) ,  ( (struct Maybe_743) { .tag = Maybe_743_None_t } ) ,  (  lam1289 ) ) );
}

static  struct Pos_26   pos_dash_after_dash_str1276 (    struct TextBuf_117 *  self4146 ,    struct StrView_27  bytes4148 ,    struct Pos_26  from4150 ) {
    struct SplitIter_731  lines4151 = ( (  split_dash_by_dash_each739 ) ( (  bytes4148 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line4152 = ( (  or_dash_else721 ) ( ( (  head1277 ) ( (  lines4151 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    struct Drop_730  headless4153 = ( (  drop737 ) ( (  lines4151 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1279 ) ( (  headless4153 ) ) ) ) {
        struct Pos_26  next_dash_pos4154 = ( (  mk826 ) ( ( (  from4150 ) .f_line ) ,  (  op_dash_add175 ( ( (  from4150 ) .f_bi ) , ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( (  first_dash_line4152 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos4154 );
    } else {
        struct Tuple2_744  dref4155 = ( (  or_dash_fail1282 ) ( ( (  last1285 ) ( ( (  zip735 ) ( (  headless4153 ) ,  ( (  from548 ) ( (  op_dash_add175 ( ( (  from4150 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"should not happen" ) ,  ( 17 ) ) ) ) );
        
        return ( (  mk826 ) ( ( dref4155 .field1 ) ,  ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( ( dref4155 .field0 ) ) ) ) ) ) );
    }
}

struct envunion1295 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1299 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1301 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1303 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_27   str_dash_between1291 (   struct env138* env ,    struct TextBuf_117 *  self4180 ,    struct Pos_26  from4182 ,    struct Pos_26  to4184 ) {
    enum CAllocator_10  al4185 = ( ( ( * (  self4180 ) ) .f_buf ) .f_al );
    if ( (  eq693 ( ( (  from4182 ) .f_line ) , ( (  to4184 ) .f_line ) ) ) ) {
        if ( (  eq693 ( ( (  from4182 ) .f_line ) , ( (  num_dash_lines1228 ) ( (  self4180 ) ) ) ) ) ) {
            return ( (  clone1275 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  (  al4185 ) ) );
        }
        size_t  from_dash_bi4186 = ( (  i32_dash_size277 ) ( ( (  min790 ) ( ( (  from4182 ) .f_bi ) ,  ( (  to4184 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi4187 = ( (  i32_dash_size277 ) ( ( (  max371 ) ( ( (  from4182 ) .f_bi ) ,  ( (  to4184 ) .f_bi ) ) ) ) );
        return ( (  clone1275 ) ( ( (  byte_dash_substr593 ) ( ( (  line294 ) ( (  self4180 ) ,  ( (  from4182 ) .f_line ) ) ) ,  (  from_dash_bi4186 ) ,  (  to_dash_bi4187 ) ) ) ,  (  al4185 ) ) );
    } else {
        struct Pos_26  from_dash_pos4188 = ( (  min689 ) ( (  from4182 ) ,  (  to4184 ) ) );
        struct Pos_26  to_dash_pos4189 = ( (  max691 ) ( (  from4182 ) ,  (  to4184 ) ) );
        struct List_13  temp1292 = ( (  mk561 ) ( (  al4185 ) ) );
        struct List_13 *  sb4190 = ( &temp1292 );
        struct StrView_27  first_dash_line4191 = ( (  line294 ) ( (  self4180 ) ,  ( (  from_dash_pos4188 ) .f_line ) ) );
        struct envunion139  temp1293 = ( (struct envunion139){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all703 , .env =  env->envinst48 } );
        ( temp1293.fun ( &temp1293.env ,  (  sb4190 ) ,  ( ( (  byte_dash_substr593 ) ( (  first_dash_line4191 ) ,  ( (  i32_dash_size277 ) ( ( (  from_dash_pos4188 ) .f_bi ) ) ) ,  ( (  num_dash_bytes393 ) ( (  first_dash_line4191 ) ) ) ) ) .f_contents ) ) );
        struct envunion1295  temp1294 = ( (struct envunion1295){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all703 , .env =  env->envinst48 } );
        ( temp1294.fun ( &temp1294.env ,  (  sb4190 ) ,  ( ( ( (  from_dash_charlike639 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_169  temp1296 =  into_dash_iter170 ( ( (  to179 ) ( (  op_dash_add175 ( ( (  from_dash_pos4188 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub180 ( ( (  to_dash_pos4189 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_171  __cond1297 =  next172 (&temp1296);
            if (  __cond1297 .tag == 0 ) {
                break;
            }
            int32_t  i4193 =  __cond1297 .stuff .Maybe_171_Just_s .field0;
            struct envunion1299  temp1298 = ( (struct envunion1299){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all703 , .env =  env->envinst48 } );
            ( temp1298.fun ( &temp1298.env ,  (  sb4190 ) ,  ( ( (  line294 ) ( (  self4180 ) ,  (  i4193 ) ) ) .f_contents ) ) );
            struct envunion1301  temp1300 = ( (struct envunion1301){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all703 , .env =  env->envinst48 } );
            ( temp1300.fun ( &temp1300.env ,  (  sb4190 ) ,  ( ( ( (  from_dash_charlike639 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1303  temp1302 = ( (struct envunion1303){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all703 , .env =  env->envinst48 } );
        ( temp1302.fun ( &temp1302.env ,  (  sb4190 ) ,  ( ( (  byte_dash_substr593 ) ( ( (  line294 ) ( (  self4180 ) ,  ( (  to_dash_pos4189 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size277 ) ( ( (  to_dash_pos4189 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes295 ) ( ( (  to_dash_slice296 ) ( ( * (  sb4190 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1304 (    struct Maybe_224  m1574 ) {
    struct Maybe_224  dref1575 = (  m1574 );
    if ( dref1575.tag == Maybe_224_None_t ) {
        return ( true );
    }
    else {
        if ( dref1575.tag == Maybe_224_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1306 {
    enum ChangesetInputType_119  field0;
    enum ChangesetInputType_119  field1;
};

static struct Tuple2_1306 Tuple2_1306_Tuple2 (  enum ChangesetInputType_119  field0 ,  enum ChangesetInputType_119  field1 ) {
    return ( struct Tuple2_1306 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1305 (    enum ChangesetInputType_119  l4001 ,    enum ChangesetInputType_119  r4003 ) {
    return ( {  struct Tuple2_1306  dref4004 = ( ( Tuple2_1306_Tuple2 ) ( (  l4001 ) ,  (  r4003 ) ) ) ;  dref4004 .field0 == ChangesetInputType_119_NoChangeset &&  dref4004 .field1 == ChangesetInputType_119_NoChangeset ? ( true ) :  dref4004 .field0 == ChangesetInputType_119_InputChangeset &&  dref4004 .field1 == ChangesetInputType_119_InputChangeset ? ( true ) :  dref4004 .field0 == ChangesetInputType_119_CustomChangeset &&  dref4004 .field1 == ChangesetInputType_119_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1308 (    struct Slice_31  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp299 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr2173 = ( (  offset_dash_ptr1249 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  struct Changeset_32 *   last_dash_ptr1307 (    struct Slice_31  s2360 ) {
    if ( (  eq280 ( ( (  s2360 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic847 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1308 ) ( (  s2360 ) ,  (  op_dash_sub455 ( ( (  s2360 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1309 (    struct List_30  l2541 ) {
    struct Changeset_32 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

struct TypeSize_1316 {
    size_t  f_size;
};

static  struct TypeSize_1316   get_dash_typesize1315 (  ) {
    struct Action_25  temp1317;
    return ( (struct TypeSize_1316) { .f_size = ( sizeof( ( (  temp1317 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1318 (    void *  p398 ) {
    return ( (struct Action_25 * ) (  p398 ) );
}

static  struct Slice_24   allocate1314 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize1315 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr2371 = ( (  cast_dash_ptr1318 ) ( ( ( malloc ) ( (  op_dash_mul528 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env1319 {
    ;
    ;
    struct Slice_24  new_dash_slice2453;
};

struct Tuple2_1321 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1321 Tuple2_1321_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1321 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1320 {
    enum Unit_8  (*fun) (  struct env1319*  ,    struct Tuple2_1321  );
    struct env1319 env;
};

static  struct Action_25 *   get_dash_ptr1324 (    struct Slice_24  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp299 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr2173 = ( (  offset_dash_ptr1264 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set1323 (    struct Slice_24  slice2187 ,    size_t  i2189 ,    struct Action_25  x2191 ) {
    struct Action_25 *  ep2192 = ( (  get_dash_ptr1324 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1322 (   struct env1319* env ,    struct Tuple2_1321  dref2454 ) {
    return ( (  set1323 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size277 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct Zip_1326 {
    struct SliceIter_1259  f_left_dash_it;
    struct FromIter_537  f_right_dash_it;
};

static  struct Zip_1326   into_dash_iter1328 (    struct Zip_1326  self936 ) {
    return (  self936 );
}

struct Maybe_1329 {
    enum {
        Maybe_1329_None_t,
        Maybe_1329_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1321  field0;
        } Maybe_1329_Just_s;
    } stuff;
};

static struct Maybe_1329 Maybe_1329_Just (  struct Tuple2_1321  field0 ) {
    return ( struct Maybe_1329 ) { .tag = Maybe_1329_Just_t, .stuff = { .Maybe_1329_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1329   next1330 (    struct Zip_1326 *  self939 ) {
    struct Zip_1326  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1266  dref941 = ( (  next1267 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1266_None_t ) {
            return ( (struct Maybe_1329) { .tag = Maybe_1329_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1266_Just_t ) {
                struct Maybe_171  dref943 = ( (  next543 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_1329) { .tag = Maybe_1329_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next1267 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1329_Just ) ( ( ( Tuple2_1321_Tuple2 ) ( ( dref941 .stuff .Maybe_1266_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1325 (    struct Zip_1326  iterable1099 ,   struct envunion1320  fun1101 ) {
    struct Zip_1326  temp1327 = ( (  into_dash_iter1328 ) ( (  iterable1099 ) ) );
    struct Zip_1326 *  it1102 = ( &temp1327 );
    while ( ( true ) ) {
        struct Maybe_1329  dref1103 = ( (  next1330 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1329_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1329_Just_t ) {
                struct envunion1320  temp1331 = (  fun1101 );
                ( temp1331.fun ( &temp1331.env ,  ( dref1103 .stuff .Maybe_1329_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1326   zip1332 (    struct Slice_24  left947 ,    struct FromIter_537  right949 ) {
    struct SliceIter_1259  left_dash_it950 = ( (  into_dash_iter1262 ) ( (  left947 ) ) );
    struct FromIter_537  right_dash_it951 = ( (  into_dash_iter547 ) ( (  right949 ) ) );
    return ( (struct Zip_1326) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1313 (   struct env3* env ,    struct List_23 *  list2452 ) {
    if ( (  eq280 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate1314 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq280 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2453 = ( (  allocate1314 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul528 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env1319 envinst1319 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion1320  fun2457 = ( (struct envunion1320){ .fun = (  enum Unit_8  (*) (  struct env1319*  ,    struct Tuple2_1321  ) )lam1322 , .env =  envinst1319 } );
            ( (  for_dash_each1325 ) ( ( (  zip1332 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free1272 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1311 (   struct env21* env ,    struct List_23 *  list2460 ,    struct Action_25  elem2462 ) {
    struct envunion22  temp1312 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1313 , .env =  env->envinst3 } );
    ( temp1312.fun ( &temp1312.env ,  (  list2460 ) ) );
    ( (  set1323 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add353 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1339 (    struct Action_25 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1340 (    struct Action_25 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Action_25 *   zeroed1337 (  ) {
    struct Action_25 *  temp1338;
    struct Action_25 *  x648 = (  temp1338 );
    ( ( memset ) ( ( (  cast_dash_ptr1339 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1340 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct Action_25 *   null_dash_ptr1336 (  ) {
    return ( (  zeroed1337 ) ( ) );
}

static  struct Slice_24   empty1335 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1336 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1334 (    enum CAllocator_10  al2436 ) {
    struct Slice_24  elements2437 = ( (  empty1335 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2436 ) , .f_elements = (  elements2437 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1341 (    struct Maybe_224  self1360 ,    struct Cursors_33  alt1362 ) {
    struct Maybe_224  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_224_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_224_Just_t ) {
            return ( dref1363 .stuff .Maybe_224_Just_s .field0 );
        }
    }
}

struct envunion1343 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1350 {
    size_t  f_size;
};

static  struct TypeSize_1350   get_dash_typesize1349 (  ) {
    struct Changeset_32  temp1351;
    return ( (struct TypeSize_1350) { .f_size = ( sizeof( ( (  temp1351 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1352 (    void *  p398 ) {
    return ( (struct Changeset_32 * ) (  p398 ) );
}

static  struct Slice_31   allocate1348 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize1349 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr2371 = ( (  cast_dash_ptr1352 ) ( ( ( malloc ) ( (  op_dash_mul528 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env1353 {
    ;
    ;
    struct Slice_31  new_dash_slice2453;
};

struct Tuple2_1355 {
    struct Changeset_32  field0;
    int32_t  field1;
};

static struct Tuple2_1355 Tuple2_1355_Tuple2 (  struct Changeset_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1355 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1354 {
    enum Unit_8  (*fun) (  struct env1353*  ,    struct Tuple2_1355  );
    struct env1353 env;
};

static  enum Unit_8   set1357 (    struct Slice_31  slice2187 ,    size_t  i2189 ,    struct Changeset_32  x2191 ) {
    struct Changeset_32 *  ep2192 = ( (  get_dash_ptr1308 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1356 (   struct env1353* env ,    struct Tuple2_1355  dref2454 ) {
    return ( (  set1357 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size277 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct Zip_1359 {
    struct SliceIter_1243  f_left_dash_it;
    struct FromIter_537  f_right_dash_it;
};

static  struct Zip_1359   into_dash_iter1361 (    struct Zip_1359  self936 ) {
    return (  self936 );
}

struct Maybe_1362 {
    enum {
        Maybe_1362_None_t,
        Maybe_1362_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1355  field0;
        } Maybe_1362_Just_s;
    } stuff;
};

static struct Maybe_1362 Maybe_1362_Just (  struct Tuple2_1355  field0 ) {
    return ( struct Maybe_1362 ) { .tag = Maybe_1362_Just_t, .stuff = { .Maybe_1362_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1362   next1363 (    struct Zip_1359 *  self939 ) {
    struct Zip_1359  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1252  dref941 = ( (  next1254 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1252_None_t ) {
            return ( (struct Maybe_1362) { .tag = Maybe_1362_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1252_Just_t ) {
                struct Maybe_171  dref943 = ( (  next543 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_1362) { .tag = Maybe_1362_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next1254 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1362_Just ) ( ( ( Tuple2_1355_Tuple2 ) ( ( dref941 .stuff .Maybe_1252_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1358 (    struct Zip_1359  iterable1099 ,   struct envunion1354  fun1101 ) {
    struct Zip_1359  temp1360 = ( (  into_dash_iter1361 ) ( (  iterable1099 ) ) );
    struct Zip_1359 *  it1102 = ( &temp1360 );
    while ( ( true ) ) {
        struct Maybe_1362  dref1103 = ( (  next1363 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_1362_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_1362_Just_t ) {
                struct envunion1354  temp1364 = (  fun1101 );
                ( temp1364.fun ( &temp1364.env ,  ( dref1103 .stuff .Maybe_1362_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1359   zip1365 (    struct Slice_31  left947 ,    struct FromIter_537  right949 ) {
    struct SliceIter_1243  left_dash_it950 = ( (  into_dash_iter1247 ) ( (  left947 ) ) );
    struct FromIter_537  right_dash_it951 = ( (  into_dash_iter547 ) ( (  right949 ) ) );
    return ( (struct Zip_1359) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr1367 (    struct Changeset_32 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free1366 (    enum CAllocator_10  dref2373 ,    struct Slice_31  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1367 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1347 (   struct env4* env ,    struct List_30 *  list2452 ) {
    if ( (  eq280 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate1348 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq280 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2453 = ( (  allocate1348 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul528 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env1353 envinst1353 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion1354  fun2457 = ( (struct envunion1354){ .fun = (  enum Unit_8  (*) (  struct env1353*  ,    struct Tuple2_1355  ) )lam1356 , .env =  envinst1353 } );
            ( (  for_dash_each1358 ) ( ( (  zip1365 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free1366 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1345 (   struct env28* env ,    struct List_30 *  list2460 ,    struct Changeset_32  elem2462 ) {
    struct envunion29  temp1346 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1347 , .env =  env->envinst4 } );
    ( temp1346.fun ( &temp1346.env ,  (  list2460 ) ) );
    ( (  set1357 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add353 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1369 (   struct env132* env ,    struct TextBuf_117 *  self4141 ,    struct Action_25  action4143 ) {
    struct envunion133  temp1370 = ( (struct envunion133){ .fun = (  enum Unit_8  (*) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action688 , .env =  env->envinst113 } );
    ( temp1370.fun ( &temp1370.env ,  (  self4141 ) ,  ( (  action4143 ) .f_from ) ,  ( (  action4143 ) .f_to_dash_bwd ) ,  ( (  action4143 ) .f_fwd ) ) );
    return ( (  action4143 ) .f_to_dash_fwd );
}

static  struct Maybe_224   change1239 (   struct env140* env ,    struct TextBuf_117 *  self4210 ,    struct Pos_26  from4212 ,    struct Pos_26  to4214 ,    struct StrView_27  bytes4216 ,    struct Maybe_224  before_dash_cursors4218 ) {
    struct Pos_26  from_dash_pos4219 = ( (  min689 ) ( (  from4212 ) ,  (  to4214 ) ) );
    struct Pos_26  to_dash_pos4220 = ( (  max691 ) ( (  from4212 ) ,  (  to4214 ) ) );
    struct Actions_118 *  actions4221 = ( & ( ( * (  self4210 ) ) .f_actions ) );
    ( (  trim_dash_actions1240 ) ( (  actions4221 ) ) );
    struct envunion144  temp1290 = ( (struct envunion144){ .fun = (  struct StrView_27  (*) (  struct env138*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1291 , .env =  env->envinst138 } );
    struct Action_25  action4222 = ( (struct Action_25) { .f_from = (  from4212 ) , .f_fwd = ( (  clone1275 ) ( (  bytes4216 ) ,  ( ( * (  self4210 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1276 ) ( (  self4210 ) ,  (  bytes4216 ) ,  (  from_dash_pos4219 ) ) ) , .f_bwd = ( temp1290.fun ( &temp1290.env ,  (  self4210 ) ,  (  from_dash_pos4219 ) ,  (  to_dash_pos4220 ) ) ) , .f_to_dash_bwd = (  to_dash_pos4220 ) } );
    enum CAllocator_10  al4223 = ( ( ( * (  actions4221 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in4224 = ( (  is_dash_none1304 ) ( (  before_dash_cursors4218 ) ) );
    if ( ( (  eq1305 ( ( ( ( * (  self4210 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_119_CustomChangeset ) ) ) || ( (  eq1305 ( ( ( ( * (  self4210 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_119_InputChangeset ) ) ) && (  is_dash_typed_dash_in4224 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset4225 = ( (  last_dash_ptr1307 ) ( ( (  to_dash_slice1309 ) ( ( ( * (  actions4221 ) ) .f_list ) ) ) ) );
        struct envunion142  temp1310 = ( (struct envunion142){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1311 , .env =  env->envinst21 } );
        ( temp1310.fun ( &temp1310.env ,  ( & ( ( * (  last_dash_changeset4225 ) ) .f_parts ) ) ,  (  action4222 ) ) );
    } else {
        struct Changeset_32  temp1333 = ( (struct Changeset_32) { .f_parts = ( (  mk1334 ) ( (  al4223 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1341 ) ( (  before_dash_cursors4218 ) ,  ( (struct Cursors_33) { .f_cur = (  from4212 ) , .f_sel = ( (  eq692 ( (  from4212 ) , (  to4214 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to4214 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset4226 = ( &temp1333 );
        struct envunion1343  temp1342 = ( (struct envunion1343){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1311 , .env =  env->envinst21 } );
        ( temp1342.fun ( &temp1342.env ,  ( & ( ( * (  changeset4226 ) ) .f_parts ) ) ,  (  action4222 ) ) );
        struct envunion143  temp1344 = ( (struct envunion143){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1345 , .env =  env->envinst28 } );
        ( temp1344.fun ( &temp1344.env ,  ( & ( ( * (  actions4221 ) ) .f_list ) ) ,  ( * (  changeset4226 ) ) ) );
        (*  actions4221 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in4224 ) ? ( ChangesetInputType_119_InputChangeset ) : ( ChangesetInputType_119_NoChangeset ) );
        (*  actions4221 ) .f_cur = (  op_dash_add353 ( ( ( * (  actions4221 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion141  temp1368 = ( (struct envunion141){ .fun = (  struct Pos_26  (*) (  struct env132*  ,    struct TextBuf_117 *  ,    struct Action_25  ) )action_dash_fwd1369 , .env =  env->envinst132 } );
    struct Pos_26  to_dash_fwd4227 = ( temp1368.fun ( &temp1368.env ,  (  self4210 ) ,  (  action4222 ) ) );
    if ( (  cmp299 ( ( (  num_dash_bytes393 ) ( ( (  action4222 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd4228 = ( (  left_dash_pos1221 ) ( (  self4210 ) ,  (  to_dash_fwd4227 ) ) );
        return ( ( Maybe_224_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4228 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action4222 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_224_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4227 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1237 (   struct env222* env ,    struct Pane_238 *  self4568 ,    struct StrView_27  s4570 ) {
    struct Pos_26  cur4571 = ( ( * (  self4568 ) ) .f_cursor );
    struct envunion223  temp1238 = ( (struct envunion223){ .fun = (  struct Maybe_224  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_224  ) )change1239 , .env =  env->envinst140 } );
    ( temp1238.fun ( &temp1238.env ,  ( ( * (  self4568 ) ) .f_buf ) ,  (  cur4571 ) ,  (  cur4571 ) ,  (  s4570 ) ,  ( (struct Maybe_224) { .tag = Maybe_224_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1376 (   struct env233* env ,    struct Pane_238 *  self4607 ,    int32_t  line4609 ) {
    struct envunion234  temp1377 = ( (struct envunion234){ .fun = (  struct Maybe_224  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_224  ) )change1239 , .env =  env->envinst140 } );
    ( temp1377.fun ( &temp1377.env ,  ( ( * (  self4607 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4609 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4609 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike639 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_224) { .tag = Maybe_224_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1372 (   struct env244* env ,    struct Pane_238 *  self4628 ,    int32_t  indent4630 ) {
    struct RangeIter_169  temp1373 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4630 ) ) ) );
    while (true) {
        struct Maybe_171  __cond1374 =  next172 (&temp1373);
        if (  __cond1374 .tag == 0 ) {
            break;
        }
        int32_t  dref4631 =  __cond1374 .stuff .Maybe_171_Just_s .field0;
        struct envunion245  temp1375 = ( (struct envunion245){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Pane_238 *  ,    int32_t  ) )indent_dash_at1376 , .env =  env->envinst233 } );
        ( temp1375.fun ( &temp1375.env ,  (  self4628 ) ,  ( ( ( * (  self4628 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1226 ) ( (  self4628 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1378 (    struct Pane_238 *  self4547 ) {
    struct Pos_26  temp1379 = ( ( * (  self4547 ) ) .f_cursor );
    temp1379 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors284 ) ( (  self4547 ) ,  ( temp1379 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1381 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_238 *  ,    struct StrView_27  );
    struct env222 env;
};

struct envunion1383 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Pane_238 *  ,    int32_t  );
    struct env244 env;
};

enum MoveDirection_1385 {
    MoveDirection_1385_MoveFwd,
    MoveDirection_1385_MoveBwd,
};

enum MoveTarget_1386 {
    MoveTarget_1386_NextWordStart,
    MoveTarget_1386_NextWordEnd,
};

static  struct Pos_26   own1388 (    struct Pos_26  x1561 ) {
    return (  x1561 );
}

struct env1389 {
    ;
    struct Pos_26 *  prev4513;
    ;
    struct Pane_238 *  pane4508;
    enum MoveDirection_1385  dir4510;
};

static  bool   is_dash_at_dash_line_dash_end1391 (    struct Pane_238 *  pane4490 ,    struct Pos_26  pos4492 ) {
    return (  eq280 ( ( (  i32_dash_size277 ) ( ( (  pos4492 ) .f_bi ) ) ) , ( (  num_dash_bytes393 ) ( ( (  line294 ) ( ( ( * (  pane4490 ) ) .f_buf ) ,  ( (  pos4492 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1390 (    struct Pane_238 *  pane4495 ) {
    return ( (  is_dash_at_dash_line_dash_end1391 ) ( (  pane4495 ) ,  ( ( * (  pane4495 ) ) .f_cursor ) ) );
}

struct envunion1393 {
    enum Unit_8  (*fun) (  struct env1389*  );
    struct env1389 env;
};

static  enum Unit_8   advance1394 (   struct env1389* env ) {
    (* env->prev4513 ) = ( ( * ( env->pane4508 ) ) .f_cursor );
    enum MoveDirection_1385  dref4515 = ( env->dir4510 );
    switch (  dref4515 ) {
        case MoveDirection_1385_MoveFwd : {
            ( (  move_dash_right1226 ) ( ( env->pane4508 ) ) );
            break;
        }
        case MoveDirection_1385_MoveBwd : {
            ( (  move_dash_left1220 ) ( ( env->pane4508 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1398 {
    CharType_1398_CharSpace,
    CharType_1398_CharWord,
    CharType_1398_CharPunctuation,
};

struct Tuple2_1399 {
    enum CharType_1398  field0;
    enum CharType_1398  field1;
};

static struct Tuple2_1399 Tuple2_1399_Tuple2 (  enum CharType_1398  field0 ,  enum CharType_1398  field1 ) {
    return ( struct Tuple2_1399 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1397 (    enum CharType_1398  l3857 ,    enum CharType_1398  r3859 ) {
    struct Tuple2_1399  dref3860 = ( ( Tuple2_1399_Tuple2 ) ( (  l3857 ) ,  (  r3859 ) ) );
    if (  dref3860 .field0 == CharType_1398_CharSpace &&  dref3860 .field1 == CharType_1398_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3860 .field0 == CharType_1398_CharWord &&  dref3860 .field1 == CharType_1398_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3860 .field0 == CharType_1398_CharPunctuation &&  dref3860 .field1 == CharType_1398_CharPunctuation ) {
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

static  bool   is_dash_alpha1402 (    struct Char_65  c1497 ) {
    return ( ( (  cmp299 ( ( (  c1497 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1105 ) ( (  c1497 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1105 ) ( (  c1497 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1401 (    struct Char_65  c1518 ) {
    return ( ( (  is_dash_alpha1402 ) ( (  c1518 ) ) ) || ( (  is_dash_digit1104 ) ( (  c1518 ) ) ) );
}

static  enum CharType_1398   char_dash_type1400 (    struct Char_65  c3863 ) {
    if ( ( ( ( (  is_dash_alphanumeric1401 ) ( (  c3863 ) ) ) || (  eq357 ( (  c3863 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) || (  eq357 ( (  c3863 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1398_CharWord );
    } else {
        if ( ( (  is_dash_whitespace411 ) ( (  c3863 ) ) ) ) {
            return ( CharType_1398_CharSpace );
        } else {
            return ( CharType_1398_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1396 (    struct Char_65  l3866 ,    struct Char_65  r3868 ) {
    return ( !  eq1397 ( ( (  char_dash_type1400 ) ( (  l3866 ) ) ) , ( (  char_dash_type1400 ) ( (  r3868 ) ) ) ) );
}

static  struct Char_65   or_dash_else1404 (    struct Maybe_348  self1360 ,    struct Char_65  alt1362 ) {
    struct Maybe_348  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_348_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_348_Just_t ) {
            return ( dref1363 .stuff .Maybe_348_Just_s .field0 );
        }
    }
}

static  struct Maybe_348   head1405 (    struct StrViewIter_290  it1167 ) {
    struct StrViewIter_290  temp1406 = ( (  into_dash_iter291 ) ( (  it1167 ) ) );
    return ( (  next349 ) ( ( &temp1406 ) ) );
}

static  struct Char_65   char_dash_at1403 (    struct Pane_238 *  pane4359 ,    struct Pos_26  pos4361 ) {
    struct StrView_27  line4362 = ( (  line294 ) ( ( ( * (  pane4359 ) ) .f_buf ) ,  ( (  pos4361 ) .f_line ) ) );
    return ( (  or_dash_else1404 ) ( ( (  head1405 ) ( ( (  chars292 ) ( ( (  byte_dash_substr593 ) ( (  line4362 ) ,  ( (  i32_dash_size277 ) ( ( (  pos4361 ) .f_bi ) ) ) ,  ( (  num_dash_bytes393 ) ( (  line4362 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
}

struct StrConcatIter_1411 {
    struct StrViewIter_290  f_left;
    struct AppendIter_1155  f_right;
};

static  struct StrConcatIter_1411   into_dash_iter1413 (    struct StrConcatIter_1411  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_348   next1414 (    struct StrConcatIter_1411 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1410 (    struct StrConcatIter_1411  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_1411  temp1412 = ( (  into_dash_iter1413 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1411 *  it1102 = ( &temp1412 );
    while ( ( true ) ) {
        struct Maybe_348  dref1103 = ( (  next1414 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_348_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_348_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_348_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1411   into_dash_iter1416 (    struct StrConcat_71  dref1297 ) {
    return ( (struct StrConcatIter_1411) { .f_left = ( (  chars292 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1411   chars1415 (    struct StrConcat_71  self1308 ) {
    return ( (  into_dash_iter1416 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print1409 (    struct StrConcat_71  s1335 ) {
    ( (  for_dash_each1410 ) ( ( (  chars1415 ) ( (  s1335 ) ) ) ,  (  printf_dash_char315 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1408 (    struct StrView_27  s1338 ) {
    ( (  print1409 ) ( ( ( StrConcat_71_StrConcat ) ( (  s1338 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1417 (  ) {
    bool  temp1418;
    return (  temp1418 );
}

static  bool   todo1407 (  ) {
    ( (  println1408 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1417 ) ( ) );
}

static  bool   reached_dash_target1395 (    struct Pane_238 *  pane4500 ,    enum MoveTarget_1386  target4502 ,    struct Pos_26  prev4504 ) {
    return ( {  enum MoveTarget_1386  dref4505 = (  target4502 ) ;  dref4505 == MoveTarget_1386_NextWordStart ? ( ( (  is_dash_word_dash_boundary1396 ) ( ( (  char_dash_at1403 ) ( (  pane4500 ) ,  (  prev4504 ) ) ) ,  ( (  char_dash_at1403 ) ( (  pane4500 ) ,  ( ( * (  pane4500 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1397 ( ( (  char_dash_type1400 ) ( ( (  char_dash_at1403 ) ( (  pane4500 ) ,  ( ( * (  pane4500 ) ) .f_cursor ) ) ) ) ) , ( CharType_1398_CharSpace ) ) ) ) ) :  dref4505 == MoveTarget_1386_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1396 ) ( ( (  char_dash_at1403 ) ( (  pane4500 ) ,  (  prev4504 ) ) ) ,  ( (  char_dash_at1403 ) ( (  pane4500 ) ,  ( ( * (  pane4500 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1397 ( ( (  char_dash_type1400 ) ( ( (  char_dash_at1403 ) ( (  pane4500 ) ,  (  prev4504 ) ) ) ) ) , ( CharType_1398_CharSpace ) ) ) ) ) : ( (  todo1407 ) ( ) ) ; } );
}

struct envunion1420 {
    enum Unit_8  (*fun) (  struct env1389*  );
    struct env1389 env;
};

struct envunion1422 {
    enum Unit_8  (*fun) (  struct env1389*  );
    struct env1389 env;
};

static  enum Unit_8   advance_dash_word1384 (    struct Pane_238 *  pane4508 ,    enum MoveDirection_1385  dir4510 ,    enum MoveTarget_1386  target4512 ) {
    struct Pos_26  temp1387 = ( (  own1388 ) ( ( ( * (  pane4508 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4513 = ( &temp1387 );
    struct env1389 envinst1389 = {
        .prev4513 =  prev4513 ,
        .pane4508 =  pane4508 ,
        .dir4510 =  dir4510 ,
    };
    struct Pos_26  sel4516 = ( ( * (  pane4508 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4517 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1390 ) ( (  pane4508 ) ) );
    struct envunion1393  temp1392 = ( (struct envunion1393){ .fun = (  enum Unit_8  (*) (  struct env1389*  ) )advance1394 , .env =  envinst1389 } );
    ( temp1392.fun ( &temp1392.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4517 ) || ( (  reached_dash_target1395 ) ( (  pane4508 ) ,  (  target4512 ) ,  ( * (  prev4513 ) ) ) ) ) ) {
        sel4516 = ( ( * (  pane4508 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1390 ) ( (  pane4508 ) ) ) ) {
        if ( (  eq692 ( ( ( * (  pane4508 ) ) .f_cursor ) , ( * (  prev4513 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1420  temp1419 = ( (struct envunion1420){ .fun = (  enum Unit_8  (*) (  struct env1389*  ) )advance1394 , .env =  envinst1389 } );
        ( temp1419.fun ( &temp1419.env ) );
        sel4516 = ( ( * (  pane4508 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1422  temp1421 = ( (struct envunion1422){ .fun = (  enum Unit_8  (*) (  struct env1389*  ) )advance1394 , .env =  envinst1389 } );
        ( temp1421.fun ( &temp1421.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1390 ) ( (  pane4508 ) ) ) || ( (  reached_dash_target1395 ) ( (  pane4508 ) ,  (  target4512 ) ,  ( * (  prev4513 ) ) ) ) ) ) {
            enum MoveDirection_1385  dref4518 = (  dir4510 );
            switch (  dref4518 ) {
                case MoveDirection_1385_MoveFwd : {
                    ( (  move_dash_left1220 ) ( (  pane4508 ) ) );
                    break;
                }
                case MoveDirection_1385_MoveBwd : {
                    ( (  move_dash_right1226 ) ( (  pane4508 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq692 ( ( * (  prev4513 ) ) , ( ( * (  pane4508 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel389 ) ( (  pane4508 ) ,  ( ( Maybe_34_Just ) ( (  sel4516 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1427 (    struct List_30 *  l2443 ) {
    return ( ( * (  l2443 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1430 (    struct List_30 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp299 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1308 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  struct Changeset_32   get1429 (    struct List_30 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr1430 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1428 (    struct List_30  self2492 ,    size_t  k2494 ) {
    return ( (  get1429 ) ( ( & (  self2492 ) ) ,  (  k2494 ) ) );
}

static  struct Action_25   undefined1439 (  ) {
    struct Action_25  temp1440;
    return (  temp1440 );
}

static  struct Action_25   or_dash_fail1438 (    struct Maybe_1266  x1353 ,    struct StrConcat_301  errmsg1355 ) {
    struct Maybe_1266  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1266_None_t ) {
        ( (  panic300 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1439 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1266_Just_t ) {
            return ( dref1356 .stuff .Maybe_1266_Just_s .field0 );
        }
    }
}

static  struct Maybe_1266   try_dash_get1441 (    struct Slice_24  slice2176 ,    size_t  i2178 ) {
    if ( ( (  cmp299 ( (  i2178 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2178 ) , ( (  slice2176 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1266) { .tag = Maybe_1266_None_t } );
    }
    struct Action_25 *  elem_dash_ptr2179 = ( (  offset_dash_ptr1264 ) ( ( (  slice2176 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2178 ) ) ) ) );
    return ( ( Maybe_1266_Just ) ( ( * (  elem_dash_ptr2179 ) ) ) );
}

static  struct Action_25   get1437 (    struct Slice_24  slice2182 ,    size_t  i2184 ) {
    return ( (  or_dash_fail1438 ) ( ( (  try_dash_get1441 ) ( (  slice2182 ) ,  (  i2184 ) ) ) ,  ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2184 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2182 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1436 (    struct Slice_24  self2195 ,    size_t  idx2197 ) {
    return ( (  get1437 ) ( (  self2195 ) ,  (  idx2197 ) ) );
}

static  struct Action_25   last1435 (    struct Slice_24  s2357 ) {
    if ( (  eq280 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic847 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1436 ( (  s2357 ) , (  op_dash_sub455 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1442 (    struct List_23  l2541 ) {
    struct Action_25 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static  struct Maybe_224   redo1426 (   struct env136* env ,    struct TextBuf_117 *  self4170 ) {
    ( (  flush_dash_insert_dash_action1235 ) ( (  self4170 ) ) );
    struct Actions_118 *  actions4171 = ( & ( ( * (  self4170 ) ) .f_actions ) );
    if ( (  cmp299 ( ( ( * (  actions4171 ) ) .f_cur ) , ( (  size1427 ) ( ( & ( ( * (  actions4171 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_224) { .tag = Maybe_224_None_t } );
    }
    struct Changeset_32  changeset4172 = (  elem_dash_get1428 ( ( ( * (  actions4171 ) ) .f_list ) , ( ( * (  actions4171 ) ) .f_cur ) ) );
    struct Pos_26  temp1431;
    struct Pos_26  to_dash_fwd4173 = (  temp1431 );
    struct SliceIter_1259  temp1432 =  into_dash_iter1261 ( ( (  changeset4172 ) .f_parts ) );
    while (true) {
        struct Maybe_1266  __cond1433 =  next1267 (&temp1432);
        if (  __cond1433 .tag == 0 ) {
            break;
        }
        struct Action_25  action4175 =  __cond1433 .stuff .Maybe_1266_Just_s .field0;
        struct envunion137  temp1434 = ( (struct envunion137){ .fun = (  struct Pos_26  (*) (  struct env132*  ,    struct TextBuf_117 *  ,    struct Action_25  ) )action_dash_fwd1369 , .env =  env->envinst132 } );
        to_dash_fwd4173 = ( temp1434.fun ( &temp1434.env ,  (  self4170 ) ,  (  action4175 ) ) );
    }
    (*  actions4171 ) .f_cur = (  op_dash_add353 ( ( ( * (  actions4171 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action4176 = ( (  last1435 ) ( ( (  to_dash_slice1442 ) ( ( (  changeset4172 ) .f_parts ) ) ) ) );
    if ( (  cmp299 ( ( (  num_dash_bytes393 ) ( ( (  last_dash_action4176 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd4177 = ( (  left_dash_pos1221 ) ( (  self4170 ) ,  (  to_dash_fwd4173 ) ) );
        return ( ( Maybe_224_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4177 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action4176 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_224_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4173 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1444 {
    struct Pane_238 *  self4584;
    ;
};

struct envunion1445 {
    enum Unit_8  (*fun) (  struct env1444*  ,    struct Cursors_33  );
    struct env1444 env;
};

static  enum Unit_8   if_dash_just1443 (    struct Maybe_224  x1601 ,   struct envunion1445  fun1603 ) {
    struct Maybe_224  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_224_Just_t ) {
        struct envunion1445  temp1446 = (  fun1603 );
        ( temp1446.fun ( &temp1446.env ,  ( dref1604 .stuff .Maybe_224_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_224_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1447 (   struct env1444* env ,    struct Cursors_33  cursors4587 ) {
    ( (  set_dash_cursors284 ) ( ( env->self4584 ) ,  ( (  cursors4587 ) .f_cur ) ,  ( (  cursors4587 ) .f_sel ) ,  ( CursorMovement_285_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1424 (   struct env229* env ,    struct Pane_238 *  self4584 ) {
    struct envunion230  temp1425 = ( (struct envunion230){ .fun = (  struct Maybe_224  (*) (  struct env136*  ,    struct TextBuf_117 *  ) )redo1426 , .env =  env->envinst136 } );
    struct Maybe_224  mcursors4585 = ( temp1425.fun ( &temp1425.env ,  ( ( * (  self4584 ) ) .f_buf ) ) );
    struct env1444 envinst1444 = {
        .self4584 =  self4584 ,
    };
    ( (  if_dash_just1443 ) ( (  mcursors4585 ) ,  ( (struct envunion1445){ .fun = (  enum Unit_8  (*) (  struct env1444*  ,    struct Cursors_33  ) )lam1447 , .env =  envinst1444 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1453 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1453   into_dash_iter1454 (    struct SliceReversedIter_1453  self2321 ) {
    return (  self2321 );
}

static  struct SliceReversedIter_1453   reversed1455 (    struct Slice_24  slice2318 ) {
    return ( (struct SliceReversedIter_1453) { .f_slice = (  slice2318 ) , .f_current_dash_offset = ( (  slice2318 ) .f_count ) } );
}

static  struct Maybe_1266   next1457 (    struct SliceReversedIter_1453 *  self2324 ) {
    size_t  off2325 = ( ( * (  self2324 ) ) .f_current_dash_offset );
    if ( (  eq280 ( (  off2325 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1266) { .tag = Maybe_1266_None_t } );
    }
    (*  self2324 ) .f_current_dash_offset = (  op_dash_sub455 ( (  off2325 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1266_Just ) ( (  elem_dash_get1436 ( ( ( * (  self2324 ) ) .f_slice ) , ( ( * (  self2324 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1459 (   struct env130* env ,    struct TextBuf_117 *  self4136 ,    struct Action_25  action4138 ) {
    struct envunion131  temp1460 = ( (struct envunion131){ .fun = (  enum Unit_8  (*) (  struct env113*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action688 , .env =  env->envinst113 } );
    ( temp1460.fun ( &temp1460.env ,  (  self4136 ) ,  ( (  action4138 ) .f_from ) ,  ( (  action4138 ) .f_to_dash_fwd ) ,  ( (  action4138 ) .f_bwd ) ) );
    return ( (  action4138 ) .f_to_dash_bwd );
}

static  struct Maybe_224   undo1451 (   struct env134* env ,    struct TextBuf_117 *  self4163 ) {
    ( (  flush_dash_insert_dash_action1235 ) ( (  self4163 ) ) );
    struct Actions_118 *  actions4164 = ( & ( ( * (  self4163 ) ) .f_actions ) );
    if ( (  eq280 ( ( ( * (  actions4164 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_224) { .tag = Maybe_224_None_t } );
    }
    (*  actions4164 ) .f_cur = (  op_dash_sub455 ( ( ( * (  actions4164 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset4165 = (  elem_dash_get1428 ( ( ( * (  actions4164 ) ) .f_list ) , ( ( * (  actions4164 ) ) .f_cur ) ) );
    struct SliceReversedIter_1453  temp1452 =  into_dash_iter1454 ( ( (  reversed1455 ) ( ( (  to_dash_slice1442 ) ( ( (  changeset4165 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1266  __cond1456 =  next1457 (&temp1452);
        if (  __cond1456 .tag == 0 ) {
            break;
        }
        struct Action_25  action4167 =  __cond1456 .stuff .Maybe_1266_Just_s .field0;
        struct envunion135  temp1458 = ( (struct envunion135){ .fun = (  struct Pos_26  (*) (  struct env130*  ,    struct TextBuf_117 *  ,    struct Action_25  ) )action_dash_bwd1459 , .env =  env->envinst130 } );
        ( temp1458.fun ( &temp1458.env ,  (  self4163 ) ,  (  action4167 ) ) );
    }
    return ( ( Maybe_224_Just ) ( ( (  changeset4165 ) .f_before_dash_cursors ) ) );
}

struct env1462 {
    struct Pane_238 *  self4578;
    ;
};

struct envunion1463 {
    enum Unit_8  (*fun) (  struct env1462*  ,    struct Cursors_33  );
    struct env1462 env;
};

static  enum Unit_8   if_dash_just1461 (    struct Maybe_224  x1601 ,   struct envunion1463  fun1603 ) {
    struct Maybe_224  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_224_Just_t ) {
        struct envunion1463  temp1464 = (  fun1603 );
        ( temp1464.fun ( &temp1464.env ,  ( dref1604 .stuff .Maybe_224_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_224_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1465 (   struct env1462* env ,    struct Cursors_33  cursors4581 ) {
    ( (  set_dash_cursors284 ) ( ( env->self4578 ) ,  ( (  cursors4581 ) .f_cur ) ,  ( (  cursors4581 ) .f_sel ) ,  ( CursorMovement_285_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1449 (   struct env227* env ,    struct Pane_238 *  self4578 ) {
    struct envunion228  temp1450 = ( (struct envunion228){ .fun = (  struct Maybe_224  (*) (  struct env134*  ,    struct TextBuf_117 *  ) )undo1451 , .env =  env->envinst134 } );
    struct Maybe_224  mcursors4579 = ( temp1450.fun ( &temp1450.env ,  ( ( * (  self4578 ) ) .f_buf ) ) );
    struct env1462 envinst1462 = {
        .self4578 =  self4578 ,
    };
    ( (  if_dash_just1461 ) ( (  mcursors4579 ) ,  ( (struct envunion1463){ .fun = (  enum Unit_8  (*) (  struct env1462*  ,    struct Cursors_33  ) )lam1465 , .env =  envinst1462 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_250   minmax1469 (    struct Pos_26  l1634 ,    struct Pos_26  r1636 ) {
    return ( (  cmp690 ( (  l1634 ) , (  r1636 ) ) == 0 ) ? ( ( Tuple2_250_Tuple2 ) ( (  l1634 ) ,  (  r1636 ) ) ) : ( ( Tuple2_250_Tuple2 ) ( (  r1636 ) ,  (  l1634 ) ) ) );
}

static  struct Pos_26   or_dash_else1470 (    struct Maybe_34  self1360 ,    struct Pos_26  alt1362 ) {
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

static  struct Pos_26   fst1471 (    struct Tuple2_250  dref1563 ) {
    return ( dref1563 .field0 );
}

static  struct Pos_26   snd1472 (    struct Tuple2_250  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tuple2_250   selection1468 (    struct Pane_238 *  self4590 ) {
    struct Tuple2_250  from_dash_to4591 = ( (  minmax1469 ) ( ( (  or_dash_else1470 ) ( ( ( * (  self4590 ) ) .f_sel ) ,  ( ( * (  self4590 ) ) .f_cursor ) ) ) ,  ( ( * (  self4590 ) ) .f_cursor ) ) );
    struct Pos_26  from4592 = ( (  fst1471 ) ( (  from_dash_to4591 ) ) );
    struct Pos_26  to4593 = ( (  right_dash_pos1227 ) ( ( ( * (  self4590 ) ) .f_buf ) ,  ( (  snd1472 ) ( (  from_dash_to4591 ) ) ) ) );
    return ( ( Tuple2_250_Tuple2 ) ( (  from4592 ) ,  (  to4593 ) ) );
}

struct env1475 {
    struct Editor_264 *  ed4707;
    ;
};

struct envunion1476 {
    enum Unit_8  (*fun) (  struct env1475*  ,    struct StrView_27  );
    struct env1475 env;
};

static  enum Unit_8   if_dash_just1474 (    struct Maybe_79  x1601 ,   struct envunion1476  fun1603 ) {
    struct Maybe_79  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_79_Just_t ) {
        struct envunion1476  temp1477 = (  fun1603 );
        ( temp1477.fun ( &temp1477.env ,  ( dref1604 .stuff .Maybe_79_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_79_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1478 (   struct env1475* env ,    struct StrView_27  cp4713 ) {
    ( (  free682 ) ( (  cp4713 ) ,  ( ( * ( env->ed4707 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1467 (   struct env251* env ,    struct Editor_264 *  ed4707 ) {
    struct Tuple2_250  dref4708 = ( (  selection1468 ) ( ( (  pane1225 ) ( (  ed4707 ) ) ) ) );
    
    struct envunion252  temp1473 = ( (struct envunion252){ .fun = (  struct StrView_27  (*) (  struct env138*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1291 , .env =  env->envinst138 } );
    struct StrView_27  cpd4711 = ( temp1473.fun ( &temp1473.env ,  ( ( ( * (  ed4707 ) ) .f_pane ) .f_buf ) ,  ( dref4708 .field0 ) ,  ( dref4708 .field1 ) ) );
    struct env1475 envinst1475 = {
        .ed4707 =  ed4707 ,
    };
    ( (  if_dash_just1474 ) ( ( ( * (  ed4707 ) ) .f_clipboard ) ,  ( (struct envunion1476){ .fun = (  enum Unit_8  (*) (  struct env1475*  ,    struct StrView_27  ) )lam1478 , .env =  envinst1475 } ) ) );
    (*  ed4707 ) .f_clipboard = ( ( Maybe_79_Just ) ( (  cpd4711 ) ) );
    return ( Unit_8_Unit );
}

struct env1483 {
    struct Pane_238 *  self4596;
    ;
};

struct envunion1484 {
    enum Unit_8  (*fun) (  struct env1483*  ,    struct Cursors_33  );
    struct env1483 env;
};

static  enum Unit_8   if_dash_just1482 (    struct Maybe_224  x1601 ,   struct envunion1484  fun1603 ) {
    struct Maybe_224  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_224_Just_t ) {
        struct envunion1484  temp1485 = (  fun1603 );
        ( temp1485.fun ( &temp1485.env ,  ( dref1604 .stuff .Maybe_224_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_224_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1486 (   struct env1483* env ,    struct Cursors_33  cursors4604 ) {
    ( (  set_dash_cursors284 ) ( ( env->self4596 ) ,  ( (  cursors4604 ) .f_cur ) ,  ( (  cursors4604 ) .f_sel ) ,  ( CursorMovement_285_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1480 (   struct env231* env ,    struct Pane_238 *  self4596 ,    struct Tuple2_250  dref4597 ,    struct StrView_27  cp4601 ) {
    struct envunion232  temp1481 = ( (struct envunion232){ .fun = (  struct Maybe_224  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_224  ) )change1239 , .env =  env->envinst140 } );
    struct Maybe_224  mcursors4602 = ( temp1481.fun ( &temp1481.env ,  ( ( * (  self4596 ) ) .f_buf ) ,  ( dref4597 .field0 ) ,  ( dref4597 .field1 ) ,  (  cp4601 ) ,  ( ( Maybe_224_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4596 ) ) .f_cursor ) , .f_sel = ( ( * (  self4596 ) ) .f_sel ) } ) ) ) ) );
    struct env1483 envinst1483 = {
        .self4596 =  self4596 ,
    };
    ( (  if_dash_just1482 ) ( (  mcursors4602 ) ,  ( (struct envunion1484){ .fun = (  enum Unit_8  (*) (  struct env1483*  ,    struct Cursors_33  ) )lam1486 , .env =  envinst1483 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1488 {
    enum Unit_8  (*fun) (  struct env251*  ,    struct Editor_264 *  );
    struct env251 env;
};

struct envunion1490 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  );
    struct env231 env;
};

struct envunion1492 {
    enum Unit_8  (*fun) (  struct env251*  ,    struct Editor_264 *  );
    struct env251 env;
};

static  struct StrBuilder_62   mk1498 (    enum CAllocator_10  al2909 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk561 ) ( (  al2909 ) ) ) } );
}

struct IntStrIter_1504 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1503 {
    struct StrViewIter_290  f_left;
    struct IntStrIter_1504  f_right;
};

struct StrConcatIter_1502 {
    struct StrConcatIter_1503  f_left;
    struct StrViewIter_290  f_right;
};

struct env1505 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1506 {
    enum Unit_8  (*fun) (  struct env1505*  ,    struct Char_65  );
    struct env1505 env;
};

static  struct StrConcatIter_1502   into_dash_iter1508 (    struct StrConcatIter_1502  self1290 ) {
    return (  self1290 );
}

struct env1514 {
    size_t  base1386;
    ;
};

struct envunion1515 {
    size_t  (*fun) (  struct env1514*  ,    int32_t  ,    size_t  );
    struct env1514 env;
};

static  size_t   reduce1513 (    struct Range_166  iterable1118 ,    size_t  base1120 ,   struct envunion1515  fun1122 ) {
    size_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion1515  temp1516 = (  fun1122 );
                x1123 = ( temp1516.fun ( &temp1516.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1517 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1517);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1518;
    return (  temp1518 );
}

static  size_t   lam1519 (   struct env1514* env ,    int32_t  item1390 ,    size_t  x1392 ) {
    return (  op_dash_mul528 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  size_t   pow1512 (    size_t  base1386 ,    int32_t  p1388 ) {
    struct env1514 envinst1514 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce1513 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1515){ .fun = (  size_t  (*) (  struct env1514*  ,    int32_t  ,    size_t  ) )lam1519 , .env =  envinst1514 } ) ) );
}

static  uint8_t   cast1520 (    size_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_348   next1511 (    struct IntStrIter_1504 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_348_Just ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    size_t  trim_dash_down1400 = ( (  pow1512 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1401 = (  op_dash_div324 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    size_t  upper_dash_mask1402 = (  op_dash_mul528 ( (  op_dash_div324 ( (  upper1401 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast1520 ) ( (  op_dash_sub455 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81174 ) ( (  op_dash_add1064 ( (  digit1403 ) , (  from_dash_integral325 ( 48 ) ) ) ) ) );
    return ( ( Maybe_348_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_348   next1510 (    struct StrConcatIter_1503 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1511 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next1509 (    struct StrConcatIter_1502 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next1510 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1501 (    struct StrConcatIter_1502  iterable1099 ,   struct envunion1506  fun1101 ) {
    struct StrConcatIter_1502  temp1507 = ( (  into_dash_iter1508 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1502 *  it1102 = ( &temp1507 );
    while ( ( true ) ) {
        struct Maybe_348  dref1103 = ( (  next1509 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_348_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_348_Just_t ) {
                struct envunion1506  temp1521 = (  fun1101 );
                ( temp1521.fun ( &temp1521.env ,  ( dref1103 .stuff .Maybe_348_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1528 (    size_t  self1407 ) {
    if ( (  eq280 ( (  self1407 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp299 ( (  self1407 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div324 ( (  self1407 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_1504   uint_dash_iter1527 (    size_t  int1414 ) {
    return ( (struct IntStrIter_1504) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits1528 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1504   chars1526 (    size_t  self1426 ) {
    return ( (  uint_dash_iter1527 ) ( (  self1426 ) ) );
}

static  struct StrConcatIter_1503   into_dash_iter1525 (    struct StrConcat_83  dref1297 ) {
    return ( (struct StrConcatIter_1503) { .f_left = ( (  chars292 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1526 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1503   chars1524 (    struct StrConcat_83  self1308 ) {
    return ( (  into_dash_iter1525 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1502   into_dash_iter1523 (    struct StrConcat_82  dref1297 ) {
    return ( (struct StrConcatIter_1502) { .f_left = ( (  chars1524 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars292 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1502   chars1522 (    struct StrConcat_82  self1308 ) {
    return ( (  into_dash_iter1523 ) ( (  self1308 ) ) );
}

static  enum Unit_8   write_dash_slice1533 (   struct env58* env ,    struct StrBuilder_62 *  builder2867 ,    struct Slice_14  s2869 ) {
    struct envunion59  temp1534 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all703 , .env =  env->envinst48 } );
    ( temp1534.fun ( &temp1534.env ,  ( & ( ( * (  builder2867 ) ) .f_chars ) ) ,  (  s2869 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_14   as_dash_u8_dash_slice1535 (    struct Char_65  c1465 ,    struct Array_317 *  buf1467 ) {
    struct Char_65  cc1468 = ( (  regularize316 ) ( (  c1465 ) ,  (  buf1467 ) ) );
    return ( (struct Slice_14) { .f_ptr = ( (  cc1468 ) .f_ptr ) , .f_count = ( (  cc1468 ) .f_num_dash_bytes ) } );
}

static  enum Unit_8   write_dash_char1531 (   struct env60* env ,    struct StrBuilder_62 *  builder2872 ,    struct Char_65  c2874 ) {
    struct envunion61  temp1532 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  ) )write_dash_slice1533 , .env =  env->envinst58 } );
    struct Array_317  temp1537;
    struct Array_317  temp1536 = (  temp1537 );
    ( temp1532.fun ( &temp1532.env ,  (  builder2872 ) ,  ( (  as_dash_u8_dash_slice1535 ) ( (  c2874 ) ,  ( &temp1536 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1529 (   struct env1505* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1530 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1531 , .env =  env->envinst60 } );
    return ( temp1530.fun ( &temp1530.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1500 (   struct env66* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrConcat_82  s2879 ) {
    struct env1505 envinst1505 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1501 ) ( ( (  chars1522 ) ( (  s2879 ) ) ) ,  ( (struct envunion1506){ .fun = (  enum Unit_8  (*) (  struct env1505*  ,    struct Char_65  ) )lam1529 , .env =  envinst1505 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1541 (    uint8_t *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   cast_dash_slice1540 (    struct Slice_14  s2354 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1541 ) ( ( (  s2354 ) .f_ptr ) ) ) , .f_count = ( (  s2354 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1539 (    struct StrBuilder_62 *  builder2915 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1540 ) ( ( (  subslice583 ) ( ( ( ( * (  builder2915 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2915 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1496 (   struct env80* env ,    struct StrConcat_82  s2935 ,    enum CAllocator_10  al2937 ) {
    struct StrBuilder_62  temp1497 = ( (  mk1498 ) ( (  al2937 ) ) );
    struct StrBuilder_62 *  sb2938 = ( &temp1497 );
    struct envunion81  temp1499 = ( (struct envunion81){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_82  ) )write1500 , .env =  env->envinst66 } );
    ( temp1499.fun ( &temp1499.env ,  (  sb2938 ) ,  (  s2935 ) ) );
    struct envunion76  temp1538 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1531 , .env =  env->envinst60 } );
    ( temp1538.fun ( &temp1538.env ,  (  sb2938 ) ,  ( (  nullchar679 ) ( ) ) ) );
    struct StrView_27  dynstr2939 = ( (  as_dash_str1539 ) ( (  sb2938 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2939 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub455 ( ( ( (  dynstr2939 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1494 (   struct env255* env ,    struct Editor_264 *  ed4721 ,    struct StrConcat_82  s4723 ) {
    ( (  reset_dash_msg1209 ) ( (  ed4721 ) ) );
    struct envunion256  temp1495 = ( (struct envunion256){ .fun = (  struct StrView_27  (*) (  struct env80*  ,    struct StrConcat_82  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1496 , .env =  env->envinst80 } );
    (*  ed4721 ) .f_msg = ( ( Maybe_79_Just ) ( ( temp1495.fun ( &temp1495.env ,  (  s4723 ) ,  ( ( * (  ed4721 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1544 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  );
    struct env231 env;
};

struct env1543 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct Editor_264 *  ed4798;
    ;
    ;
    ;
    struct env231 envinst231;
    ;
    ;
    ;
};

struct envunion1545 {
    enum Unit_8  (*fun) (  struct env1543*  ,    struct StrView_27  );
    struct env1543 env;
};

static  enum Unit_8   if_dash_just1542 (    struct Maybe_79  x1601 ,   struct envunion1545  fun1603 ) {
    struct Maybe_79  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_79_Just_t ) {
        struct envunion1545  temp1546 = (  fun1603 );
        ( temp1546.fun ( &temp1546.env ,  ( dref1604 .stuff .Maybe_79_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_79_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1548 (    struct Pane_238 *  pane4526 ) {
    return ( {  struct Maybe_34  dref4527 = ( ( * (  pane4526 ) ) .f_sel ) ; dref4527.tag == Maybe_34_Just_t ? ( (  max691 ) ( ( ( * (  pane4526 ) ) .f_cursor ) ,  ( dref4527 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4526 ) ) .f_cursor ) ; } );
}

static  struct StrView_27   own1549 (    struct StrView_27  x1561 ) {
    return (  x1561 );
}

static  uint8_t   last1550 (    struct Slice_14  s2357 ) {
    if ( (  eq280 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic847 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get586 ( (  s2357 ) , (  op_dash_sub455 ( ( (  s2357 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1551 (    int32_t  x1648 ,    int32_t  mn1650 ,    int32_t  mx1652 ) {
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

struct envunion1554 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  );
    struct env231 env;
};

static  enum Unit_8   lam1547 (   struct env1543* env ,    struct StrView_27  cp4809 ) {
    struct Pos_26  start4810 = ( (  max_dash_pos1548 ) ( ( (  pane1225 ) ( ( env->ed4798 ) ) ) ) );
    struct StrView_27  cp4811 = ( (  own1549 ) ( (  cp4809 ) ) );
    if ( (  eq321 ( ( (  last1550 ) ( ( (  cp4811 ) .f_contents ) ) ) , ( (  ascii_dash_u8592 ) ( ( (  from_dash_charlike279 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        int32_t  max_dash_lines4812 = ( (  num_dash_lines1228 ) ( ( ( * ( (  pane1225 ) ( ( env->ed4798 ) ) ) ) .f_buf ) ) );
        struct Pos_26  start4813 = ( (struct Pos_26) { .f_line = ( (  clamp1551 ) ( (  op_dash_add175 ( ( (  start4810 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  max_dash_lines4812 ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
        if ( (  eq693 ( ( (  start4813 ) .f_line ) , (  max_dash_lines4812 ) ) ) ) {
            cp4811 = ( (  byte_dash_substr593 ) ( (  cp4811 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub455 ( ( ( (  cp4811 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
        struct envunion1544  temp1552 = ( (struct envunion1544){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  ) )replace_dash_selection1480 , .env =  env->envinst231 } );
        ( temp1552.fun ( &temp1552.env ,  ( (  pane1225 ) ( ( env->ed4798 ) ) ) ,  ( ( Tuple2_250_Tuple2 ) ( (  start4813 ) ,  (  start4813 ) ) ) ,  (  cp4811 ) ) );
    } else {
        struct Pos_26  start4814 = ( (  right_dash_pos1227 ) ( ( ( ( * ( env->ed4798 ) ) .f_pane ) .f_buf ) ,  (  start4810 ) ) );
        struct envunion1554  temp1553 = ( (struct envunion1554){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  ) )replace_dash_selection1480 , .env =  env->envinst231 } );
        ( temp1553.fun ( &temp1553.env ,  ( (  pane1225 ) ( ( env->ed4798 ) ) ) ,  ( ( Tuple2_250_Tuple2 ) ( (  start4814 ) ,  (  start4814 ) ) ) ,  (  cp4811 ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1557 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  );
    struct env231 env;
};

struct env1556 {
    ;
    ;
    ;
    struct env231 envinst231;
    ;
    ;
    ;
    ;
    struct Editor_264 *  ed4798;
};

struct envunion1558 {
    enum Unit_8  (*fun) (  struct env1556*  ,    struct StrView_27  );
    struct env1556 env;
};

static  enum Unit_8   if_dash_just1555 (    struct Maybe_79  x1601 ,   struct envunion1558  fun1603 ) {
    struct Maybe_79  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_79_Just_t ) {
        struct envunion1558  temp1559 = (  fun1603 );
        ( temp1559.fun ( &temp1559.env ,  ( dref1604 .stuff .Maybe_79_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_79_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1561 (    struct Pane_238 *  pane4521 ) {
    return ( {  struct Maybe_34  dref4522 = ( ( * (  pane4521 ) ) .f_sel ) ; dref4522.tag == Maybe_34_Just_t ? ( (  min689 ) ( ( ( * (  pane4521 ) ) .f_cursor ) ,  ( dref4522 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4521 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1560 (   struct env1556* env ,    struct StrView_27  cp4816 ) {
    struct Pos_26  start4817 = ( (  min_dash_pos1561 ) ( ( (  pane1225 ) ( ( env->ed4798 ) ) ) ) );
    if ( (  eq321 ( ( (  last1550 ) ( ( (  cp4816 ) .f_contents ) ) ) , ( (  ascii_dash_u8592 ) ( ( (  from_dash_charlike279 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1562 = (  start4817 );
        temp1562 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4817 = ( temp1562 );
    }
    struct envunion1557  temp1563 = ( (struct envunion1557){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  ) )replace_dash_selection1480 , .env =  env->envinst231 } );
    ( temp1563.fun ( &temp1563.env ,  ( (  pane1225 ) ( ( env->ed4798 ) ) ) ,  ( ( Tuple2_250_Tuple2 ) ( (  start4817 ) ,  (  start4817 ) ) ) ,  (  cp4816 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1566 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  );
    struct env231 env;
};

struct env1565 {
    ;
    ;
    ;
    ;
    struct env231 envinst231;
    ;
    struct Editor_264 *  ed4798;
};

struct envunion1567 {
    enum Unit_8  (*fun) (  struct env1565*  ,    struct StrView_27  );
    struct env1565 env;
};

static  enum Unit_8   if_dash_just1564 (    struct Maybe_79  x1601 ,   struct envunion1567  fun1603 ) {
    struct Maybe_79  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_79_Just_t ) {
        struct envunion1567  temp1568 = (  fun1603 );
        ( temp1568.fun ( &temp1568.env ,  ( dref1604 .stuff .Maybe_79_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_79_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1569 (   struct env1565* env ,    struct StrView_27  cp4819 ) {
    struct Pos_26  start4820 = ( (  min_dash_pos1561 ) ( ( (  pane1225 ) ( ( env->ed4798 ) ) ) ) );
    struct Pos_26  end4821 = ( (  max_dash_pos1548 ) ( ( (  pane1225 ) ( ( env->ed4798 ) ) ) ) );
    struct envunion1566  temp1570 = ( (struct envunion1566){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  ) )replace_dash_selection1480 , .env =  env->envinst231 } );
    struct Pos_26  temp1571 = (  end4821 );
    temp1571 .  f_bi = (  op_dash_add175 ( ( (  end4821 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( temp1570.fun ( &temp1570.env ,  ( (  pane1225 ) ( ( env->ed4798 ) ) ) ,  ( ( Tuple2_250_Tuple2 ) ( (  start4820 ) ,  ( temp1571 ) ) ) ,  (  cp4819 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1572 (    struct Pane_238 *  pane4540 ) {
    struct Pos_26  min_dash_pos4541 = ( (  min_dash_pos1561 ) ( (  pane4540 ) ) );
    struct Pos_26  max_dash_pos4542 = ( (  max_dash_pos1548 ) ( (  pane4540 ) ) );
    int32_t  max_dash_pos_dash_max4543 = ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( ( (  line294 ) ( ( ( * (  pane4540 ) ) .f_buf ) ,  ( (  max_dash_pos4542 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq693 ( ( (  min_dash_pos4541 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq693 ( ( (  max_dash_pos4542 ) .f_bi ) , (  max_dash_pos_dash_max4543 ) ) ) ) ) ) {
        struct Pos_26  temp1573 = (  min_dash_pos4541 );
        temp1573 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4540 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1573 ) ) );
        struct Pos_26  temp1574 = (  max_dash_pos4542 );
        temp1574 .  f_bi = (  max_dash_pos_dash_max4543 );
        (*  pane4540 ) .f_cursor = ( temp1574 );
    } else {
        if ( (  cmp173 ( (  op_dash_add175 ( ( (  max_dash_pos4542 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1228 ) ( ( ( * (  pane4540 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1575 = (  min_dash_pos4541 );
        temp1575 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4540 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1575 ) ) );
        int32_t  next_dash_line4544 = (  op_dash_add175 ( ( (  max_dash_pos4542 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4540 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4544 ) , .f_bi = ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( ( (  line294 ) ( ( ( * (  pane4540 ) ) .f_buf ) ,  (  next_dash_line4544 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1576 (    struct Maybe_34  m1574 ) {
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

struct Maybe_1578 {
    enum {
        Maybe_1578_None_t,
        Maybe_1578_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_250  field0;
        } Maybe_1578_Just_s;
    } stuff;
};

static struct Maybe_1578 Maybe_1578_Just (  struct Tuple2_250  field0 ) {
    return ( struct Maybe_1578 ) { .tag = Maybe_1578_Just_t, .stuff = { .Maybe_1578_Just_s = { .field0 = field0 } } };
};

struct env1580 {
    ;
    struct Pane_238 *  pane4649;
    ;
    ;
    struct StrView_27  query4653;
    ;
};

struct envunion1582 {
    struct Maybe_273  (*fun) (  struct env1580*  ,    struct Pos_26  );
    struct env1580 env;
};

static  struct Maybe_273   find_dash_slice1584 (    struct Slice_14  haystack2335 ,    struct Slice_14  needle2337 ) {
    struct RangeIter_169  temp1585 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  size_dash_i32308 ) ( ( (  haystack2335 ) .f_count ) ) ) , ( (  size_dash_i32308 ) ( ( (  needle2337 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1586 =  next172 (&temp1585);
        if (  __cond1586 .tag == 0 ) {
            break;
        }
        int32_t  i2339 =  __cond1586 .stuff .Maybe_171_Just_s .field0;
        if ( (  eq617 ( ( (  subslice583 ) ( (  haystack2335 ) ,  ( (  i32_dash_size277 ) ( (  i2339 ) ) ) ,  (  op_dash_add353 ( ( (  i32_dash_size277 ) ( (  i2339 ) ) ) , ( (  needle2337 ) .f_count ) ) ) ) ) , (  needle2337 ) ) ) ) {
            return ( ( Maybe_273_Just ) ( ( (  i32_dash_size277 ) ( (  i2339 ) ) ) ) );
        }
    }
    return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
}

static  struct Maybe_273   search_dash_on_dash_line1583 (   struct env1580* env ,    struct Pos_26  pos4656 ) {
    return ( (  find_dash_slice1584 ) ( ( ( (  byte_dash_substr_dash_from581 ) ( ( (  line294 ) ( ( ( * ( env->pane4649 ) ) .f_buf ) ,  ( (  pos4656 ) .f_line ) ) ) ,  ( (  i32_dash_size277 ) ( ( (  pos4656 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4653 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1592 (    int32_t  l241 ,    int32_t  r243 ) {
    return ( (  l241 ) / (  r243 ) );
}

static  int32_t   op_dash_mul1593 (    int32_t  l236 ,    int32_t  r238 ) {
    return ( (  l236 ) * (  r238 ) );
}

static  int32_t   mod1591 (    int32_t  l1544 ,    int32_t  d1546 ) {
    int32_t  r1547 = (  op_dash_div1592 ( (  l1544 ) , (  d1546 ) ) );
    int32_t  m1548 = (  op_dash_sub180 ( (  l1544 ) , (  op_dash_mul1593 ( (  r1547 ) , (  d1546 ) ) ) ) );
    if ( (  cmp173 ( (  m1548 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add175 ( (  d1546 ) , (  m1548 ) ) );
    } else {
        return (  m1548 );
    }
}

struct envunion1595 {
    struct Maybe_273  (*fun) (  struct env1580*  ,    struct Pos_26  );
    struct env1580 env;
};

static  struct Maybe_1578   search_dash_from1579 (    struct Pane_238 *  pane4649 ,    struct Pos_26  pos4651 ,    struct StrView_27  query4653 ) {
    struct env1580 envinst1580 = {
        .pane4649 =  pane4649 ,
        .query4653 =  query4653 ,
    };
    struct envunion1582  temp1581 = ( (struct envunion1582){ .fun = (  struct Maybe_273  (*) (  struct env1580*  ,    struct Pos_26  ) )search_dash_on_dash_line1583 , .env =  envinst1580 } );
    struct Maybe_273  dref4657 = ( temp1581.fun ( &temp1581.env ,  (  pos4651 ) ) );
    if ( dref4657.tag == Maybe_273_Just_t ) {
        struct Pos_26  temp1587 = (  pos4651 );
        temp1587 .  f_bi = (  op_dash_add175 ( ( (  pos4651 ) .f_bi ) , ( (  size_dash_i32308 ) ( ( dref4657 .stuff .Maybe_273_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4659 = ( temp1587 );
        struct Pos_26  temp1588 = (  pos4651 );
        temp1588 .  f_bi = (  op_dash_sub180 ( (  op_dash_add175 ( ( (  pos4651 ) .f_bi ) , ( (  size_dash_i32308 ) ( (  op_dash_add353 ( ( dref4657 .stuff .Maybe_273_Just_s .field0 ) , ( (  num_dash_bytes393 ) ( (  query4653 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4660 = ( temp1588 );
        return ( ( Maybe_1578_Just ) ( ( ( Tuple2_250_Tuple2 ) ( (  sel_dash_pos4659 ) ,  (  cur_dash_pos4660 ) ) ) ) );
    }
    else {
        if ( dref4657.tag == Maybe_273_None_t ) {
            int32_t  num_dash_lines4661 = ( (  num_dash_lines1228 ) ( ( ( * (  pane4649 ) ) .f_buf ) ) );
            struct RangeIter_169  temp1589 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4661 ) ) ) );
            while (true) {
                struct Maybe_171  __cond1590 =  next172 (&temp1589);
                if (  __cond1590 .tag == 0 ) {
                    break;
                }
                int32_t  i4663 =  __cond1590 .stuff .Maybe_171_Just_s .field0;
                int32_t  line4664 = ( (  mod1591 ) ( (  op_dash_add175 ( ( (  pos4651 ) .f_line ) , (  i4663 ) ) ) ,  (  num_dash_lines4661 ) ) );
                struct envunion1595  temp1594 = ( (struct envunion1595){ .fun = (  struct Maybe_273  (*) (  struct env1580*  ,    struct Pos_26  ) )search_dash_on_dash_line1583 , .env =  envinst1580 } );
                struct Maybe_273  dref4665 = ( temp1594.fun ( &temp1594.env ,  ( (struct Pos_26) { .f_line = (  line4664 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4665.tag == Maybe_273_Just_t ) {
                    struct Pos_26  sel_dash_pos4667 = ( (struct Pos_26) { .f_line = (  line4664 ) , .f_bi = ( (  size_dash_i32308 ) ( ( dref4665 .stuff .Maybe_273_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4668 = ( (struct Pos_26) { .f_line = (  line4664 ) , .f_bi = (  op_dash_sub180 ( ( (  size_dash_i32308 ) ( (  op_dash_add353 ( ( dref4665 .stuff .Maybe_273_Just_s .field0 ) , ( (  num_dash_bytes393 ) ( (  query4653 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1578_Just ) ( ( ( Tuple2_250_Tuple2 ) ( (  sel_dash_pos4667 ) ,  (  cur_dash_pos4668 ) ) ) ) );
                }
                else {
                    if ( dref4665.tag == Maybe_273_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1578) { .tag = Maybe_1578_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1577 (    struct Editor_264 *  ed4765 ) {
    struct Maybe_79  dref4766 = ( ( * (  ed4765 ) ) .f_search_dash_term );
    if ( dref4766.tag == Maybe_79_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4766.tag == Maybe_79_Just_t ) {
            struct Maybe_1578  dref4768 = ( (  search_dash_from1579 ) ( ( (  pane1225 ) ( (  ed4765 ) ) ) ,  ( (  max_dash_pos1548 ) ( ( (  pane1225 ) ( (  ed4765 ) ) ) ) ) ,  ( dref4766 .stuff .Maybe_79_Just_s .field0 ) ) );
            if ( dref4768.tag == Maybe_1578_None_t ) {
            }
            else {
                if ( dref4768.tag == Maybe_1578_Just_t ) {
                    ( (  set_dash_cursors284 ) ( ( (  pane1225 ) ( (  ed4765 ) ) ) ,  ( dref4768 .stuff .Maybe_1578_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4768 .stuff .Maybe_1578_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_285_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct DownToRange_1601 {
    int32_t  f_from;
    int32_t  f_to;
};

struct DownToIter_1600 {
    struct DownToRange_1601  f_dtrange;
    int32_t  f_i;
};

static  struct DownToIter_1600   into_dash_iter1602 (    struct DownToRange_1601  self925 ) {
    return ( (struct DownToIter_1600) { .f_dtrange = (  self925 ) , .f_i = ( (  self925 ) .f_from ) } );
}

static  struct DownToRange_1601   down_dash_to1603 (    int32_t  from920 ,    int32_t  to922 ) {
    return ( (struct DownToRange_1601) { .f_from = (  from920 ) , .f_to = (  to922 ) } );
}

static  struct Maybe_171   next1605 (    struct DownToIter_1600 *  self931 ) {
    if ( (  cmp173 ( ( ( * (  self931 ) ) .f_i ) , ( ( ( * (  self931 ) ) .f_dtrange ) .f_to ) ) == 0 ) ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    struct Maybe_171  x932 = ( ( Maybe_171_Just ) ( ( ( * (  self931 ) ) .f_i ) ) );
    (*  self931 ) .f_i = (  op_dash_sub180 ( ( ( * (  self931 ) ) .f_i ) , (  from_dash_integral56 ( 1 ) ) ) );
    return (  x932 );
}

static  struct Maybe_273   find_dash_last_dash_occurence_dash_of_dash_slice1598 (    struct Slice_14  haystack2342 ,    struct Slice_14  needle2344 ) {
    struct DownToIter_1600  temp1599 =  into_dash_iter1602 ( ( (  down_dash_to1603 ) ( (  op_dash_sub180 ( ( (  size_dash_i32308 ) ( ( (  haystack2342 ) .f_count ) ) ) , ( (  size_dash_i32308 ) ( ( (  needle2344 ) .f_count ) ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1604 =  next1605 (&temp1599);
        if (  __cond1604 .tag == 0 ) {
            break;
        }
        int32_t  i2346 =  __cond1604 .stuff .Maybe_171_Just_s .field0;
        if ( (  eq617 ( ( (  subslice583 ) ( (  haystack2342 ) ,  ( (  i32_dash_size277 ) ( (  i2346 ) ) ) ,  (  op_dash_add353 ( ( (  i32_dash_size277 ) ( (  i2346 ) ) ) , ( (  needle2344 ) .f_count ) ) ) ) ) , (  needle2344 ) ) ) ) {
            return ( ( Maybe_273_Just ) ( ( (  i32_dash_size277 ) ( (  i2346 ) ) ) ) );
        }
    }
    return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
}

static  struct Maybe_1578   search_dash_back1597 (    struct Pane_238 *  pane4671 ,    struct Pos_26  pos4673 ,    struct StrView_27  query4675 ) {
    struct Maybe_273  dref4676 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1598 ) ( ( ( (  byte_dash_substr593 ) ( ( (  line294 ) ( ( ( * (  pane4671 ) ) .f_buf ) ,  ( (  pos4673 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size277 ) ( ( (  pos4673 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4675 ) .f_contents ) ) );
    if ( dref4676.tag == Maybe_273_Just_t ) {
        struct Pos_26  temp1606 = (  pos4673 );
        temp1606 .  f_bi = ( (  size_dash_i32308 ) ( ( dref4676 .stuff .Maybe_273_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4678 = ( temp1606 );
        struct Pos_26  temp1607 = (  pos4673 );
        temp1607 .  f_bi = (  op_dash_sub180 ( ( (  size_dash_i32308 ) ( (  op_dash_add353 ( ( dref4676 .stuff .Maybe_273_Just_s .field0 ) , ( (  num_dash_bytes393 ) ( (  query4675 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4679 = ( temp1607 );
        return ( ( Maybe_1578_Just ) ( ( ( Tuple2_250_Tuple2 ) ( (  sel_dash_pos4678 ) ,  (  cur_dash_pos4679 ) ) ) ) );
    }
    else {
        if ( dref4676.tag == Maybe_273_None_t ) {
            int32_t  num_dash_lines4680 = ( (  num_dash_lines1228 ) ( ( ( * (  pane4671 ) ) .f_buf ) ) );
            struct RangeIter_169  temp1608 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4680 ) ) ) );
            while (true) {
                struct Maybe_171  __cond1609 =  next172 (&temp1608);
                if (  __cond1609 .tag == 0 ) {
                    break;
                }
                int32_t  i4682 =  __cond1609 .stuff .Maybe_171_Just_s .field0;
                int32_t  line4683 = ( (  mod1591 ) ( (  op_dash_sub180 ( ( (  pos4673 ) .f_line ) , (  i4682 ) ) ) ,  (  num_dash_lines4680 ) ) );
                struct Maybe_273  dref4684 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1598 ) ( ( ( (  line294 ) ( ( ( * (  pane4671 ) ) .f_buf ) ,  (  line4683 ) ) ) .f_contents ) ,  ( (  query4675 ) .f_contents ) ) );
                if ( dref4684.tag == Maybe_273_Just_t ) {
                    struct Pos_26  sel_dash_pos4686 = ( (struct Pos_26) { .f_line = (  line4683 ) , .f_bi = ( (  size_dash_i32308 ) ( ( dref4684 .stuff .Maybe_273_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4687 = ( (struct Pos_26) { .f_line = (  line4683 ) , .f_bi = (  op_dash_sub180 ( ( (  size_dash_i32308 ) ( (  op_dash_add353 ( ( dref4684 .stuff .Maybe_273_Just_s .field0 ) , ( (  num_dash_bytes393 ) ( (  query4675 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1578_Just ) ( ( ( Tuple2_250_Tuple2 ) ( (  sel_dash_pos4686 ) ,  (  cur_dash_pos4687 ) ) ) ) );
                }
                else {
                    if ( dref4684.tag == Maybe_273_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1578) { .tag = Maybe_1578_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1596 (    struct Editor_264 *  ed4773 ) {
    struct Maybe_79  dref4774 = ( ( * (  ed4773 ) ) .f_search_dash_term );
    if ( dref4774.tag == Maybe_79_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4774.tag == Maybe_79_Just_t ) {
            struct Maybe_1578  dref4776 = ( (  search_dash_back1597 ) ( ( (  pane1225 ) ( (  ed4773 ) ) ) ,  ( (  min_dash_pos1561 ) ( ( (  pane1225 ) ( (  ed4773 ) ) ) ) ) ,  ( dref4774 .stuff .Maybe_79_Just_s .field0 ) ) );
            if ( dref4776.tag == Maybe_1578_None_t ) {
            }
            else {
                if ( dref4776.tag == Maybe_1578_Just_t ) {
                    ( (  set_dash_cursors284 ) ( ( (  pane1225 ) ( (  ed4773 ) ) ) ,  ( dref4776 .stuff .Maybe_1578_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4776 .stuff .Maybe_1578_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_285_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1613 (   struct env145* env ,    struct TextBuf_117 *  self4231 ,    struct Cursors_33  before_dash_cursors4233 ) {
    struct Actions_118 *  actions4234 = ( & ( ( * (  self4231 ) ) .f_actions ) );
    ( (  trim_dash_actions1240 ) ( (  actions4234 ) ) );
    ( (  flush_dash_insert_dash_action1235 ) ( (  self4231 ) ) );
    ( (  assert799 ) ( (  eq1305 ( ( ( ( * (  self4231 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_119_NoChangeset ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al4235 = ( ( * (  self4231 ) ) .f_al );
    struct Changeset_32  temp1614 = ( (struct Changeset_32) { .f_parts = ( (  mk1334 ) ( (  al4235 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors4233 ) } );
    struct Changeset_32 *  changeset4236 = ( &temp1614 );
    struct envunion146  temp1615 = ( (struct envunion146){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1345 , .env =  env->envinst28 } );
    ( temp1615.fun ( &temp1615.env ,  ( & ( ( * (  actions4234 ) ) .f_list ) ) ,  ( * (  changeset4236 ) ) ) );
    (*  actions4234 ) .f_input_dash_changeset = ( ChangesetInputType_119_CustomChangeset );
    (*  actions4234 ) .f_cur = (  op_dash_add353 ( ( ( * (  actions4234 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1266   head1621 (    struct List_23  it1167 ) {
    struct SliceIter_1259  temp1622 = ( (  into_dash_iter1261 ) ( (  it1167 ) ) );
    return ( (  next1267 ) ( ( &temp1622 ) ) );
}

static  bool   null1620 (    struct List_23  it1176 ) {
    struct Maybe_1266  dref1177 = ( (  head1621 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_1266_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1619 (    struct TextBuf_117 *  self4239 ) {
    ( (  flush_dash_insert_dash_action1235 ) ( (  self4239 ) ) );
    struct Actions_118 *  actions4240 = ( & ( ( * (  self4239 ) ) .f_actions ) );
    if ( ( (  null1620 ) ( ( ( * ( (  last_dash_ptr1307 ) ( ( (  to_dash_slice1309 ) ( ( ( * (  actions4240 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions4240 ) .f_cur = (  op_dash_sub455 ( ( ( * (  actions4240 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions4240 ) .f_input_dash_changeset = ( ChangesetInputType_119_NoChangeset );
        ( (  trim_dash_actions1240 ) ( (  actions4240 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1624 (    struct Maybe_34  x1585 ,    struct Pos_26 (*  fun1587 )(    struct Pos_26  ) ) {
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

static  struct Pos_26   lam1625 (    struct Pos_26  sel4616 ) {
    struct Pos_26  temp1626 = (  sel4616 );
    temp1626 .  f_bi = (  op_dash_add175 ( ( (  sel4616 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1626 );
}

static  enum Unit_8   indent_dash_selection1611 (   struct env235* env ,    struct Pane_238 *  self4612 ) {
    struct envunion236  temp1612 = ( (struct envunion236){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  ) )begin_dash_changeset1613 , .env =  env->envinst145 } );
    ( temp1612.fun ( &temp1612.env ,  ( ( * (  self4612 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4612 ) ) .f_cursor ) , .f_sel = ( ( * (  self4612 ) ) .f_sel ) } ) ) );
    struct RangeIter_169  temp1616 =  into_dash_iter170 ( ( (  to179 ) ( ( ( (  min_dash_pos1561 ) ( (  self4612 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1548 ) ( (  self4612 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_171  __cond1617 =  next172 (&temp1616);
        if (  __cond1617 .tag == 0 ) {
            break;
        }
        int32_t  line4614 =  __cond1617 .stuff .Maybe_171_Just_s .field0;
        struct envunion237  temp1618 = ( (struct envunion237){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Pane_238 *  ,    int32_t  ) )indent_dash_at1376 , .env =  env->envinst233 } );
        ( temp1618.fun ( &temp1618.env ,  (  self4612 ) ,  (  line4614 ) ) );
    }
    ( (  end_dash_changeset1619 ) ( ( ( * (  self4612 ) ) .f_buf ) ) );
    struct Pos_26  temp1623 = ( ( * (  self4612 ) ) .f_cursor );
    temp1623 .  f_bi = (  op_dash_add175 ( ( ( ( * (  self4612 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors284 ) ( (  self4612 ) ,  ( temp1623 ) ,  ( (  fmap_dash_maybe1624 ) ( ( ( * (  self4612 ) ) .f_sel ) ,  (  lam1625 ) ) ) ,  ( CursorMovement_285_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1637 {
    ;
    bool  last_dash_char_dash_was_dash_tab4621;
    ;
};

struct envunion1638 {
    struct Pos_26  (*fun) (  struct env1637*  ,    struct Pos_26  );
    struct env1637 env;
};

static  struct Maybe_34   fmap_dash_maybe1636 (    struct Maybe_34  x1585 ,   struct envunion1638  fun1587 ) {
    struct Maybe_34  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_34_Just_t ) {
            struct envunion1638  temp1639 = (  fun1587 );
            return ( ( Maybe_34_Just ) ( ( temp1639.fun ( &temp1639.env ,  ( dref1588 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1640 (   struct env1637* env ,    struct Pos_26  sel4625 ) {
    struct Pos_26  temp1641 = (  sel4625 );
    temp1641 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4621 ) ? (  op_dash_sub180 ( ( (  sel4625 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4625 ) .f_bi ) );
    return ( temp1641 );
}

static  enum Unit_8   dedent_dash_selection1628 (   struct env241* env ,    struct Pane_238 *  self4619 ) {
    struct envunion243  temp1629 = ( (struct envunion243){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  ) )begin_dash_changeset1613 , .env =  env->envinst145 } );
    ( temp1629.fun ( &temp1629.env ,  ( ( * (  self4619 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4619 ) ) .f_cursor ) , .f_sel = ( ( * (  self4619 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1630 = ( (  min_dash_pos1561 ) ( (  self4619 ) ) );
    temp1630 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4620 = (  eq357 ( ( (  char_dash_at1403 ) ( (  self4619 ) ,  ( temp1630 ) ) ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1631 = ( (  max_dash_pos1548 ) ( (  self4619 ) ) );
    temp1631 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4621 = (  eq357 ( ( (  char_dash_at1403 ) ( (  self4619 ) ,  ( temp1631 ) ) ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_169  temp1632 =  into_dash_iter170 ( ( (  to179 ) ( ( ( (  min_dash_pos1561 ) ( (  self4619 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1548 ) ( (  self4619 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_171  __cond1633 =  next172 (&temp1632);
        if (  __cond1633 .tag == 0 ) {
            break;
        }
        int32_t  line4623 =  __cond1633 .stuff .Maybe_171_Just_s .field0;
        if ( (  eq357 ( ( (  char_dash_at1403 ) ( (  self4619 ) ,  ( (struct Pos_26) { .f_line = (  line4623 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion242  temp1634 = ( (struct envunion242){ .fun = (  struct Maybe_224  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_224  ) )change1239 , .env =  env->envinst140 } );
            ( temp1634.fun ( &temp1634.env ,  ( ( * (  self4619 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4623 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4623 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_224) { .tag = Maybe_224_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1619 ) ( ( ( * (  self4619 ) ) .f_buf ) ) );
    struct Pos_26  temp1635 = ( ( * (  self4619 ) ) .f_cursor );
    temp1635 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4620 ) ? (  op_dash_sub180 ( ( ( ( * (  self4619 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4619 ) ) .f_cursor ) .f_bi ) );
    struct env1637 envinst1637 = {
        .last_dash_char_dash_was_dash_tab4621 =  last_dash_char_dash_was_dash_tab4621 ,
    };
    ( (  set_dash_cursors284 ) ( (  self4619 ) ,  ( temp1635 ) ,  ( (  fmap_dash_maybe1636 ) ( ( ( * (  self4619 ) ) .f_sel ) ,  ( (struct envunion1638){ .fun = (  struct Pos_26  (*) (  struct env1637*  ,    struct Pos_26  ) )lam1640 , .env =  envinst1637 } ) ) ) ,  ( CursorMovement_285_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enmenue1642 (    struct Editor_264 *  ed4781 ,    struct Menu_266  menu4783 ) {
    (*  ed4781 ) .f_mode = ( ( EditorMode_265_Menu ) ( (  menu4783 ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1646 (  ) {
    int32_t  temp1647;
    return (  temp1647 );
}

static  int32_t   or_dash_fail1645 (    struct Maybe_171  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_171  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_171_None_t ) {
        ( (  panic847 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1646 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_171_Just_t ) {
            return ( dref1356 .stuff .Maybe_171_Just_s .field0 );
        }
    }
}

struct env1650 {
    struct Pane_238 *  self4634;
    ;
};

struct envunion1651 {
    int32_t  (*fun) (  struct env1650*  ,    int32_t  );
    struct env1650 env;
};

struct Map_1649 {
    struct RangeIter_169  field0;
    struct envunion1651  field1;
};

static struct Map_1649 Map_1649_Map (  struct RangeIter_169  field0 , struct envunion1651  field1 ) {
    return ( struct Map_1649 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1649   into_dash_iter1653 (    struct Map_1649  self804 ) {
    return (  self804 );
}

static  struct Maybe_171   next1654 (    struct Map_1649 *  dref806 ) {
    struct Maybe_171  dref809 = ( (  next172 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_171_None_t ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_171_Just_t ) {
            struct envunion1651  temp1655 = ( (* dref806 ) .field1 );
            return ( ( Maybe_171_Just ) ( ( temp1655.fun ( &temp1655.env ,  ( dref809 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_171   reduce1652 (    struct Map_1649  iterable1118 ,    struct Maybe_171  base1120 ,    struct Maybe_171 (*  fun1122 )(    int32_t  ,    struct Maybe_171  ) ) {
    struct Maybe_171  x1123 = (  base1120 );
    struct Map_1649  it1124 = ( (  into_dash_iter1653 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next1654 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1656 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1656);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_171  temp1657;
    return (  temp1657 );
}

struct env1660 {
    int32_t  x1553;
    ;
};

struct envunion1661 {
    struct Maybe_171  (*fun) (  struct env1660*  ,    int32_t  );
    struct env1660 env;
};

static  struct Maybe_171   maybe1659 (    struct Maybe_171  x1592 ,   struct envunion1661  fun1594 ,    struct Maybe_171  default1596 ) {
    struct envunion1661  temp1662 = (  fun1594 );
    return ( {  struct Maybe_171  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_171_Just_t ? ( temp1662.fun ( &temp1662.env ,  ( dref1597 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  struct Maybe_171   lam1663 (   struct env1660* env ,    int32_t  lm1622 ) {
    return ( ( Maybe_171_Just ) ( ( (  min790 ) ( (  lm1622 ) ,  ( env->x1553 ) ) ) ) );
}

static  struct Maybe_171   lam1658 (    int32_t  x1553 ,    struct Maybe_171  last_dash_min1555 ) {
    struct env1660 envinst1660 = {
        .x1553 =  x1553 ,
    };
    return ( (  maybe1659 ) ( (  last_dash_min1555 ) ,  ( (struct envunion1661){ .fun = (  struct Maybe_171  (*) (  struct env1660*  ,    int32_t  ) )lam1663 , .env =  envinst1660 } ) ,  ( ( Maybe_171_Just ) ( (  x1553 ) ) ) ) );
}

static  struct Maybe_171   minimum1648 (    struct Map_1649  it1551 ) {
    return ( (  reduce1652 ) ( (  it1551 ) ,  ( (struct Maybe_171) { .tag = Maybe_171_None_t } ) ,  (  lam1658 ) ) );
}

static  struct Map_1649   map1664 (    struct Range_166  iterable813 ,   struct envunion1651  fun815 ) {
    struct RangeIter_169  it816 = ( (  into_dash_iter170 ) ( (  iterable813 ) ) );
    return ( ( Map_1649_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  int32_t   lam1665 (   struct env1650* env ,    int32_t  ln4638 ) {
    return ( (  indent_dash_at_dash_line396 ) ( ( env->self4634 ) ,  (  ln4638 ) ) );
}

struct env1667 {
    ;
    struct Pane_238 *  self4634;
    ;
};

struct envunion1668 {
    bool  (*fun) (  struct env1667*  ,    int32_t  );
    struct env1667 env;
};

struct env1670 {
    struct envunion1668  fun1151;
};

struct envunion1671 {
    bool  (*fun) (  struct env1670*  ,    int32_t  ,    bool  );
    struct env1670 env;
};

static  bool   reduce1669 (    struct Range_166  iterable1118 ,    bool  base1120 ,   struct envunion1671  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion1671  temp1672 = (  fun1122 );
                x1123 = ( temp1672.fun ( &temp1672.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1673 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1673);
    abort ( );
    ( Unit_8_Unit );
    bool  temp1674;
    return (  temp1674 );
}

static  bool   lam1675 (   struct env1670* env ,    int32_t  e1153 ,    bool  x1155 ) {
    struct envunion1668  temp1676 = ( env->fun1151 );
    return ( ( temp1676.fun ( &temp1676.env ,  (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all1666 (    struct Range_166  it1149 ,   struct envunion1668  fun1151 ) {
    struct env1670 envinst1670 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce1669 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion1671){ .fun = (  bool  (*) (  struct env1670*  ,    int32_t  ,    bool  ) )lam1675 , .env =  envinst1670 } ) ) );
}

static  bool   is_dash_just1678 (    struct Maybe_1578  m1570 ) {
    struct Maybe_1578  dref1571 = (  m1570 );
    if ( dref1571.tag == Maybe_1578_None_t ) {
        return ( false );
    }
    else {
        if ( dref1571.tag == Maybe_1578_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1680 (    struct Char_65  c4565 ) {
    return ( ( !  eq357 ( (  c4565 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace411 ) ( (  c4565 ) ) ) );
}

static  struct Maybe_1578   line_dash_begins_dash_with_dash_comment1679 (    struct Pane_238 *  self4559 ,    int32_t  line4561 ) {
    int32_t  indent4562 = ( (  indent_dash_at_dash_line396 ) ( (  self4559 ) ,  (  line4561 ) ) );
    if ( (  eq357 ( ( (  char_dash_at1403 ) ( (  self4559 ) ,  ( (  mk826 ) ( (  line4561 ) ,  (  indent4562 ) ) ) ) ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4563 = (  op_dash_add175 ( (  indent4562 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1680 ) ( ( (  char_dash_at1403 ) ( (  self4559 ) ,  ( (  mk826 ) ( (  line4561 ) ,  (  i4563 ) ) ) ) ) ) ) ) {
            i4563 = (  op_dash_add175 ( (  i4563 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1578_Just ) ( ( ( Tuple2_250_Tuple2 ) ( ( (  mk826 ) ( (  line4561 ) ,  (  indent4562 ) ) ) ,  ( (  mk826 ) ( (  line4561 ) ,  (  i4563 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1578) { .tag = Maybe_1578_None_t } );
    }
}

static  bool   lam1677 (   struct env1667* env ,    int32_t  ln4641 ) {
    return ( (  is_dash_just1678 ) ( ( (  line_dash_begins_dash_with_dash_comment1679 ) ( ( env->self4634 ) ,  (  ln4641 ) ) ) ) );
}

static  struct Tuple2_250   undefined1686 (  ) {
    struct Tuple2_250  temp1687;
    return (  temp1687 );
}

static  struct Tuple2_250   or_dash_fail1685 (    struct Maybe_1578  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_1578  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1578_None_t ) {
        ( (  panic847 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1686 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1578_Just_t ) {
            return ( dref1356 .stuff .Maybe_1578_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1644 (   struct env246* env ,    struct Pane_238 *  self4634 ) {
    int32_t  from_dash_line4635 = ( ( (  min_dash_pos1561 ) ( (  self4634 ) ) ) .f_line );
    int32_t  to_dash_line4636 = ( ( (  max_dash_pos1548 ) ( (  self4634 ) ) ) .f_line );
    struct env1650 envinst1650 = {
        .self4634 =  self4634 ,
    };
    int32_t  min_dash_indent4639 = ( (  or_dash_fail1645 ) ( ( (  minimum1648 ) ( ( (  map1664 ) ( ( (  to179 ) ( (  from_dash_line4635 ) ,  (  to_dash_line4636 ) ) ) ,  ( (struct envunion1651){ .fun = (  int32_t  (*) (  struct env1650*  ,    int32_t  ) )lam1665 , .env =  envinst1650 } ) ) ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1667 envinst1667 = {
        .self4634 =  self4634 ,
    };
    bool  all_dash_have_dash_comment4642 = ( (  all1666 ) ( ( (  to179 ) ( (  from_dash_line4635 ) ,  (  to_dash_line4636 ) ) ) ,  ( (struct envunion1668){ .fun = (  bool  (*) (  struct env1667*  ,    int32_t  ) )lam1677 , .env =  envinst1667 } ) ) );
    struct envunion248  temp1681 = ( (struct envunion248){ .fun = (  enum Unit_8  (*) (  struct env145*  ,    struct TextBuf_117 *  ,    struct Cursors_33  ) )begin_dash_changeset1613 , .env =  env->envinst145 } );
    ( temp1681.fun ( &temp1681.env ,  ( ( * (  self4634 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4634 ) ) .f_cursor ) , .f_sel = ( ( * (  self4634 ) ) .f_sel ) } ) ) );
    struct RangeIter_169  temp1682 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_line4635 ) ,  (  to_dash_line4636 ) ) ) );
    while (true) {
        struct Maybe_171  __cond1683 =  next172 (&temp1682);
        if (  __cond1683 .tag == 0 ) {
            break;
        }
        int32_t  line4644 =  __cond1683 .stuff .Maybe_171_Just_s .field0;
        struct Char_65  comment_dash_str4645 = ( (  from_dash_charlike335 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4642 ) ) ) {
            ( (  set_dash_cursors284 ) ( (  self4634 ) ,  ( (  mk826 ) ( (  line4644 ) ,  (  min_dash_indent4639 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_NoChanges ) ) );
            struct envunion247  temp1684 = ( (struct envunion247){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_238 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1237 , .env =  env->envinst222 } );
            ( temp1684.fun ( &temp1684.env ,  (  self4634 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_250  comment_dash_pos4646 = ( (  or_dash_fail1685 ) ( ( (  line_dash_begins_dash_with_dash_comment1679 ) ( (  self4634 ) ,  (  line4644 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion249  temp1688 = ( (struct envunion249){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  ) )replace_dash_selection1480 , .env =  env->envinst231 } );
            ( temp1688.fun ( &temp1688.env ,  (  self4634 ) ,  (  comment_dash_pos4646 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1619 ) ( ( ( * (  self4634 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1219 (   struct env421* env ,    struct Editor_264 *  ed4798 ,    struct Key_440  key4800 ) {
    struct Key_440  dref4801 = (  key4800 );
    if ( dref4801.tag == Key_440_Char_t ) {
        if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4798 ) .f_running = ( false );
        } else {
            if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1220 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ) );
            } else {
                if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1226 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ) );
                } else {
                    if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1229 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1233 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1234 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( Mode_239_Insert ) ) );
                            } else {
                                if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented395 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ) );
                                    ( (  set_dash_mode1234 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( Mode_239_Insert ) ) );
                                } else {
                                    if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end283 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ) );
                                        ( (  set_dash_mode1234 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( Mode_239_Insert ) ) );
                                    } else {
                                        if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_238 *  pane4803 = ( (  pane1225 ) ( (  ed4798 ) ) );
                                            int32_t  indent4804 = ( (  indent_dash_at_dash_line396 ) ( (  pane4803 ) ,  ( ( ( * (  pane4803 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end283 ) ( (  pane4803 ) ) );
                                            struct envunion422  temp1236 = ( (struct envunion422){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_238 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1237 , .env =  env->envinst222 } );
                                            ( temp1236.fun ( &temp1236.env ,  (  pane4803 ) ,  ( (  from_dash_charlike639 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1226 ) ( (  pane4803 ) ) );
                                            struct envunion427  temp1371 = ( (struct envunion427){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Pane_238 *  ,    int32_t  ) )indent_dash_at_dash_current1372 , .env =  env->envinst244 } );
                                            ( temp1371.fun ( &temp1371.env ,  (  pane4803 ) ,  (  indent4804 ) ) );
                                            ( (  set_dash_mode1234 ) ( (  pane4803 ) ,  ( Mode_239_Insert ) ) );
                                        } else {
                                            if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_238 *  pane4805 = ( (  pane1225 ) ( (  ed4798 ) ) );
                                                int32_t  indent4806 = ( (  indent_dash_at_dash_line396 ) ( (  pane4805 ) ,  ( ( ( * (  pane4805 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1378 ) ( (  pane4805 ) ) );
                                                struct envunion1381  temp1380 = ( (struct envunion1381){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_238 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1237 , .env =  env->envinst222 } );
                                                ( temp1380.fun ( &temp1380.env ,  (  pane4805 ) ,  ( (  from_dash_charlike639 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1383  temp1382 = ( (struct envunion1383){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Pane_238 *  ,    int32_t  ) )indent_dash_at_dash_current1372 , .env =  env->envinst244 } );
                                                ( temp1382.fun ( &temp1382.env ,  (  pane4805 ) ,  (  indent4806 ) ) );
                                                ( (  set_dash_mode1234 ) ( (  pane4805 ) ,  ( Mode_239_Insert ) ) );
                                            } else {
                                                if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1384 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( MoveDirection_1385_MoveFwd ) ,  ( MoveTarget_1386_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1384 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( MoveDirection_1385_MoveFwd ) ,  ( MoveTarget_1386_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1384 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( MoveDirection_1385_MoveBwd ) ,  ( MoveTarget_1386_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion426  temp1423 = ( (struct envunion426){ .fun = (  enum Unit_8  (*) (  struct env229*  ,    struct Pane_238 *  ) )redo1424 , .env =  env->envinst229 } );
                                                                ( temp1423.fun ( &temp1423.env ,  ( (  pane1225 ) ( (  ed4798 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion425  temp1448 = ( (struct envunion425){ .fun = (  enum Unit_8  (*) (  struct env227*  ,    struct Pane_238 *  ) )undo1449 , .env =  env->envinst227 } );
                                                                    ( temp1448.fun ( &temp1448.env ,  ( (  pane1225 ) ( (  ed4798 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion431  temp1466 = ( (struct envunion431){ .fun = (  enum Unit_8  (*) (  struct env251*  ,    struct Editor_264 *  ) )copy_dash_selection_dash_to_dash_clipboard1467 , .env =  env->envinst251 } );
                                                                        ( temp1466.fun ( &temp1466.env ,  (  ed4798 ) ) );
                                                                        struct envunion429  temp1479 = ( (struct envunion429){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  ) )replace_dash_selection1480 , .env =  env->envinst231 } );
                                                                        ( temp1479.fun ( &temp1479.env ,  ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( (  selection1468 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1234 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( Mode_239_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1488  temp1487 = ( (struct envunion1488){ .fun = (  enum Unit_8  (*) (  struct env251*  ,    struct Editor_264 *  ) )copy_dash_selection_dash_to_dash_clipboard1467 , .env =  env->envinst251 } );
                                                                            ( temp1487.fun ( &temp1487.env ,  (  ed4798 ) ) );
                                                                            struct envunion1490  temp1489 = ( (struct envunion1490){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Pane_238 *  ,    struct Tuple2_250  ,    struct StrView_27  ) )replace_dash_selection1480 , .env =  env->envinst231 } );
                                                                            ( temp1489.fun ( &temp1489.env ,  ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( (  selection1468 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1234 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( Mode_239_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1492  temp1491 = ( (struct envunion1492){ .fun = (  enum Unit_8  (*) (  struct env251*  ,    struct Editor_264 *  ) )copy_dash_selection_dash_to_dash_clipboard1467 , .env =  env->envinst251 } );
                                                                                ( temp1491.fun ( &temp1491.env ,  (  ed4798 ) ) );
                                                                                size_t  bytes_dash_yanked4807 = ( (  num_dash_bytes393 ) ( ( (  or_dash_else721 ) ( ( ( * (  ed4798 ) ) .f_clipboard ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion424  temp1493 = ( (struct envunion424){ .fun = (  enum Unit_8  (*) (  struct env255*  ,    struct Editor_264 *  ,    struct StrConcat_82  ) )set_dash_msg1494 , .env =  env->envinst255 } );
                                                                                ( temp1493.fun ( &temp1493.env ,  (  ed4798 ) ,  ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4807 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)" bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1543 envinst1543 = {
                                                                                        .ed4798 =  ed4798 ,
                                                                                        .envinst231 = env->envinst231 ,
                                                                                    };
                                                                                    ( (  if_dash_just1542 ) ( ( ( * (  ed4798 ) ) .f_clipboard ) ,  ( (struct envunion1545){ .fun = (  enum Unit_8  (*) (  struct env1543*  ,    struct StrView_27  ) )lam1547 , .env =  envinst1543 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1556 envinst1556 = {
                                                                                            .envinst231 = env->envinst231 ,
                                                                                            .ed4798 =  ed4798 ,
                                                                                        };
                                                                                        ( (  if_dash_just1555 ) ( ( ( * (  ed4798 ) ) .f_clipboard ) ,  ( (struct envunion1558){ .fun = (  enum Unit_8  (*) (  struct env1556*  ,    struct StrView_27  ) )lam1560 , .env =  envinst1556 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1565 envinst1565 = {
                                                                                                .envinst231 = env->envinst231 ,
                                                                                                .ed4798 =  ed4798 ,
                                                                                            };
                                                                                            ( (  if_dash_just1564 ) ( ( ( * (  ed4798 ) ) .f_clipboard ) ,  ( (struct envunion1567){ .fun = (  enum Unit_8  (*) (  struct env1565*  ,    struct StrView_27  ) )lam1569 , .env =  envinst1565 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1572 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1234 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( Mode_239_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1576 ) ( ( ( ( * (  ed4798 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4798 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4798 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4798 ) .f_mode = ( ( EditorMode_265_Cmd ) ( ( ( * ( (  pane1225 ) ( (  ed4798 ) ) ) ) .f_cursor ) ,  ( (  mk1498 ) ( ( ( * (  ed4798 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4798 ) .f_mode = ( ( EditorMode_265_Search ) ( ( ( * ( (  pane1225 ) ( (  ed4798 ) ) ) ) .f_cursor ) ,  ( (  mk1498 ) ( ( ( * (  ed4798 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1577 ) ( (  ed4798 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1596 ) ( (  ed4798 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion423  temp1610 = ( (struct envunion423){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Pane_238 *  ) )indent_dash_selection1611 , .env =  env->envinst235 } );
                                                                                                                        ( temp1610.fun ( &temp1610.env ,  ( (  pane1225 ) ( (  ed4798 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion430  temp1627 = ( (struct envunion430){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Pane_238 *  ) )dedent_dash_selection1628 , .env =  env->envinst241 } );
                                                                                                                            ( temp1627.fun ( &temp1627.env ,  ( (  pane1225 ) ( (  ed4798 ) ) ) ) );
                                                                                                                        } else {
                                                                                                                            if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                                ( (  enmenue1642 ) ( (  ed4798 ) ,  ( env->goto_dash_menu4790 ) ) );
                                                                                                                            } else {
                                                                                                                                if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Char_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                                    ( (  enmenue1642 ) ( (  ed4798 ) ,  ( env->space_dash_menu4795 ) ) );
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
        if ( dref4801.tag == Key_440_Escape_t ) {
            ( (  set_dash_mode1234 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  ( Mode_239_Normal ) ) );
        }
        else {
            if ( dref4801.tag == Key_440_Ctrl_t ) {
                if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Ctrl_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion428  temp1643 = ( (struct envunion428){ .fun = (  enum Unit_8  (*) (  struct env246*  ,    struct Pane_238 *  ) )toggle_dash_comment1644 , .env =  env->envinst246 } );
                    ( temp1643.fun ( &temp1643.env ,  ( (  pane1225 ) ( (  ed4798 ) ) ) ) );
                } else {
                    if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Ctrl_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1233 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq1067 ( ( dref4801 .stuff .Key_440_Ctrl_s .field0 ) , ( (  from_dash_charlike279 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1229 ) ( ( (  pane1225 ) ( (  ed4798 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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

struct envunion1690 {
    enum Unit_8  (*fun) (  struct env421*  ,    struct Editor_264 *  ,    struct Key_440  );
    struct env421 env;
};

static  enum Unit_8   backspace1694 (   struct env225* env ,    struct Pane_238 *  self4574 ) {
    struct Pos_26  prev_dash_cur4575 = ( ( * (  self4574 ) ) .f_cursor );
    ( (  move_dash_left1220 ) ( (  self4574 ) ) );
    struct envunion226  temp1695 = ( (struct envunion226){ .fun = (  struct Maybe_224  (*) (  struct env140*  ,    struct TextBuf_117 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_224  ) )change1239 , .env =  env->envinst140 } );
    ( temp1695.fun ( &temp1695.env ,  ( ( * (  self4574 ) ) .f_buf ) ,  ( ( * (  self4574 ) ) .f_cursor ) ,  (  prev_dash_cur4575 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_224) { .tag = Maybe_224_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1697 {
    char _arr [1];
};

static  char *   cast1698 (    struct Array_1697 *  x395 ) {
    return ( (char * ) (  x395 ) );
}

static  struct Slice_1081   as_dash_slice1696 (    struct Array_1697 *  arr2052 ) {
    return ( (struct Slice_1081) { .f_ptr = ( (  cast1698 ) ( (  arr2052 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1697   from_dash_listlike1700 (    struct Array_1697 *  self369 ) {
    return ( * (  self369 ) );
}

struct envunion1703 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_238 *  ,    struct StrView_27  );
    struct env222 env;
};

struct Scanner_1706 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1706   mk_dash_from_dash_strview1708 (    struct StrView_27  s3402 ) {
    return ( (struct Scanner_1706) { .f_s = (  s3402 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1714 {
    struct StrViewIter_290  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1713 {
    struct TakeWhile_1714  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1713 Map_1713_Map (  struct TakeWhile_1714  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1713 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1713   into_dash_iter1716 (    struct Map_1713  self804 ) {
    return (  self804 );
}

static  struct Maybe_348   next1718 (    struct TakeWhile_1714 *  self989 ) {
    struct Maybe_348  mx990 = ( (  next349 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_348  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_348_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_348_Just ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
            }
        }
    }
}

static  struct Maybe_273   next1717 (    struct Map_1713 *  dref806 ) {
    struct Maybe_348  dref809 = ( (  next1718 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_348_Just_t ) {
            return ( ( Maybe_273_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1715 (    struct Map_1713  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1713  it1124 = ( (  into_dash_iter1716 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_273  dref1125 = ( (  next1717 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_273_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_273_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_273_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1719 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1719);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1720;
    return (  temp1720 );
}

static  size_t   lam1721 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add353 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1712 (    struct Map_1713  it1135 ) {
    return ( (  reduce1715 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1721 ) ) );
}

static  struct TakeWhile_1714   into_dash_iter1723 (    struct TakeWhile_1714  self986 ) {
    return (  self986 );
}

static  struct Map_1713   map1722 (    struct TakeWhile_1714  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1714  it816 = ( (  into_dash_iter1723 ) ( (  iterable813 ) ) );
    return ( ( Map_1713_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1714   take_dash_while1724 (    struct StrViewIter_290  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1714) { .f_it = ( (  into_dash_iter291 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1725 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1711 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1712 ) ( ( (  map1722 ) ( ( (  take_dash_while1724 ) ( ( (  chars292 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1725 ) ) ) ) );
    return ( (  byte_dash_substr593 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1710 (    struct Scanner_1706 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1711 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from581 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes393 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

static  enum Unit_8   drop_dash_str_dash_while1709 (    struct Scanner_1706 *  sc3488 ,    bool (*  fun3490 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1710 ) ( (  sc3488 ) ,  (  fun3490 ) ) );
    return ( Unit_8_Unit );
}

struct TakeWhile_1730 {
    struct StrViewIter_290  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1729 {
    struct TakeWhile_1730  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1729 Map_1729_Map (  struct TakeWhile_1730  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1729 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1729   into_dash_iter1732 (    struct Map_1729  self804 ) {
    return (  self804 );
}

static  struct Maybe_348   next1734 (    struct TakeWhile_1730 *  self989 ) {
    struct Maybe_348  mx990 = ( (  next349 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_348  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_348_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_348_Just ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
            }
        }
    }
}

static  struct Maybe_273   next1733 (    struct Map_1729 *  dref806 ) {
    struct Maybe_348  dref809 = ( (  next1734 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_348_Just_t ) {
            return ( ( Maybe_273_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1731 (    struct Map_1729  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1729  it1124 = ( (  into_dash_iter1732 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_273  dref1125 = ( (  next1733 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_273_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_273_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_273_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1735 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1735);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1736;
    return (  temp1736 );
}

static  size_t   lam1737 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add353 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1728 (    struct Map_1729  it1135 ) {
    return ( (  reduce1731 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1737 ) ) );
}

static  struct TakeWhile_1730   into_dash_iter1739 (    struct TakeWhile_1730  self986 ) {
    return (  self986 );
}

static  struct Map_1729   map1738 (    struct TakeWhile_1730  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1730  it816 = ( (  into_dash_iter1739 ) ( (  iterable813 ) ) );
    return ( ( Map_1729_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1730   take_dash_while1740 (    struct StrViewIter_290  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1730) { .f_it = ( (  into_dash_iter291 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1741 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1727 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1728 ) ( ( (  map1738 ) ( ( (  take_dash_while1740 ) ( ( (  chars292 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1741 ) ) ) ) );
    return ( (  byte_dash_substr593 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1726 (    struct Scanner_1706 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1727 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from581 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes393 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

static  bool   is_dash_not_dash_whitespace1742 (    struct Char_65  c1503 ) {
    return ( ! ( (  is_dash_whitespace411 ) ( (  c1503 ) ) ) );
}

static  struct Maybe_348   head1744 (    struct StrView_27  it1167 ) {
    struct StrViewIter_290  temp1745 = ( (  into_dash_iter293 ) ( (  it1167 ) ) );
    return ( (  next349 ) ( ( &temp1745 ) ) );
}

static  bool   null1743 (    struct StrView_27  it1176 ) {
    struct Maybe_348  dref1177 = ( (  head1744 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_348_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env1749 {
    ;
    enum CAllocator_10  al4110;
};

struct envunion1750 {
    struct StrView_27  (*fun) (  struct env1749*  ,    struct StrView_27  );
    struct env1749 env;
};

static  struct Maybe_79   fmap_dash_maybe1748 (    struct Maybe_79  x1585 ,   struct envunion1750  fun1587 ) {
    struct Maybe_79  dref1588 = (  x1585 );
    if ( dref1588.tag == Maybe_79_None_t ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    else {
        if ( dref1588.tag == Maybe_79_Just_t ) {
            struct envunion1750  temp1751 = (  fun1587 );
            return ( ( Maybe_79_Just ) ( ( temp1751.fun ( &temp1751.env ,  ( dref1588 .stuff .Maybe_79_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrView_27   lam1752 (   struct env1749* env ,    struct StrView_27  s4112 ) {
    return ( (  clone_dash_0640 ) ( (  s4112 ) ,  ( env->al4110 ) ) );
}

static  struct Maybe_79   maybe1753 (    struct Maybe_79  x1592 ,    struct Maybe_79 (*  fun1594 )(    struct StrView_27  ) ,    struct Maybe_79  default1596 ) {
    return ( {  struct Maybe_79  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_79_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_79_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  bool   is_dash_none1754 (    struct Maybe_79  m1574 ) {
    struct Maybe_79  dref1575 = (  m1574 );
    if ( dref1575.tag == Maybe_79_None_t ) {
        return ( true );
    }
    else {
        if ( dref1575.tag == Maybe_79_Just_t ) {
            return ( false );
        }
    }
}

struct env1763 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1764 {
    enum Unit_8  (*fun) (  struct env1763*  ,    struct Char_65  );
    struct env1763 env;
};

static  enum Unit_8   for_dash_each1762 (    struct StrConcatIter_1411  iterable1099 ,   struct envunion1764  fun1101 ) {
    struct StrConcatIter_1411  temp1765 = ( (  into_dash_iter1413 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1411 *  it1102 = ( &temp1765 );
    while ( ( true ) ) {
        struct Maybe_348  dref1103 = ( (  next1414 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_348_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_348_Just_t ) {
                struct envunion1764  temp1766 = (  fun1101 );
                ( temp1766.fun ( &temp1766.env ,  ( dref1103 .stuff .Maybe_348_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1767 (   struct env1763* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1768 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1531 , .env =  env->envinst60 } );
    return ( temp1768.fun ( &temp1768.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1761 (   struct env68* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrConcat_71  s2879 ) {
    struct env1763 envinst1763 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1762 ) ( ( (  chars1415 ) ( (  s2879 ) ) ) ,  ( (struct envunion1764){ .fun = (  enum Unit_8  (*) (  struct env1763*  ,    struct Char_65  ) )lam1767 , .env =  envinst1763 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1759 (   struct env69* env ,    struct StrBuilder_62 *  builder2884 ,    struct StrView_27  s2886 ) {
    struct envunion70  temp1760 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  ) )write1761 , .env =  env->envinst68 } );
    return ( temp1760.fun ( &temp1760.env ,  (  builder2884 ) ,  ( ( StrConcat_71_StrConcat ) ( (  s2886 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1770 (  ) {
    struct StrView_27  temp1771;
    return (  temp1771 );
}

static  struct StrView_27   or_dash_fail1769 (    struct Maybe_79  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_79  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_79_None_t ) {
        ( (  panic847 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1770 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_79_Just_t ) {
            return ( dref1356 .stuff .Maybe_79_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_290   chars1774 (    struct StrBuilder_62  s2929 ) {
    return ( (  into_dash_iter293 ) ( ( (  as_dash_str1539 ) ( ( & (  s2929 ) ) ) ) ) );
}

static  struct StrViewIter_290   chars1773 (    struct StrBuilder_62 *  self1754 ) {
    return ( (  chars1774 ) ( ( * (  self1754 ) ) ) );
}

static  int32_t   fprintf_dash_char1775 (    FILE *  file1479 ,    struct Char_65  c1481 ) {
    struct Array_317  temp1777;
    struct Array_317  temp1776 = (  temp1777 );
    struct Char_65  c1482 = ( (  regularize316 ) ( (  c1481 ) ,  ( &temp1776 ) ) );
    return ( ( fprintf ) ( (  file1479 ) ,  ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32308 ) ( ( (  c1482 ) .f_num_dash_bytes ) ) ) ,  ( (  c1482 ) .f_ptr ) ) );
}

static  bool   unreachable1778 (  ) {
    ( (  println1408 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1417 ) ( ) );
}

static  bool   try_dash_write_dash_contents1772 (    const char*  filename3178 ,    struct StrBuilder_62 *  contents3180 ) {
    FILE *  file3181 = ( ( fopen ) ( (  filename3178 ) ,  ( (  from_dash_charlike670 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null671 ) ( (  file3181 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_290  it3182 = ( (  chars1773 ) ( (  contents3180 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref3183 = ( (  next349 ) ( ( & (  it3182 ) ) ) );
        if ( dref3183.tag == Maybe_348_None_t ) {
            ( ( fclose ) ( (  file3181 ) ) );
            return ( true );
        }
        else {
            if ( dref3183.tag == Maybe_348_Just_t ) {
                int32_t  chars_dash_written3185 = ( (  fprintf_dash_char1775 ) ( (  file3181 ) ,  ( dref3183 .stuff .Maybe_348_Just_s .field0 ) ) );
                if ( (  cmp173 ( (  chars_dash_written3185 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1778 ) ( ) );
}

static  enum Unit_8   free1779 (    struct StrBuilder_62 *  builder2921 ) {
    ( (  free759 ) ( ( & ( ( * (  builder2921 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1780 (    struct Maybe_79  m1570 ) {
    struct Maybe_79  dref1571 = (  m1570 );
    if ( dref1571.tag == Maybe_79_None_t ) {
        return ( false );
    }
    else {
        if ( dref1571.tag == Maybe_79_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_273   write_dash_to_dash_file1747 (   struct env123* env ,    struct TextBuf_117 *  self4107 ,    struct Maybe_79  altname4109 ) {
    enum CAllocator_10  al4110 = ( ( * (  self4107 ) ) .f_al );
    struct env1749 envinst1749 = {
        .al4110 =  al4110 ,
    };
    struct Maybe_79  nu_dash_filename4113 = ( (  fmap_dash_maybe1748 ) ( (  altname4109 ) ,  ( (struct envunion1750){ .fun = (  struct StrView_27  (*) (  struct env1749*  ,    struct StrView_27  ) )lam1752 , .env =  envinst1749 } ) ) );
    struct Maybe_79  filename4114 = ( (  maybe1753 ) ( (  altname4109 ) ,  ( Maybe_79_Just ) ,  ( ( * (  self4107 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1754 ) ( (  filename4114 ) ) ) ) {
        return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
    }
    struct StrBuilder_62  temp1755 = ( (  mk1498 ) ( (  al4110 ) ) );
    struct StrBuilder_62 *  sb4115 = ( &temp1755 );
    struct RangeIter_169  temp1756 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  num_dash_lines1228 ) ( (  self4107 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1757 =  next172 (&temp1756);
        if (  __cond1757 .tag == 0 ) {
            break;
        }
        int32_t  ln4117 =  __cond1757 .stuff .Maybe_171_Just_s .field0;
        struct envunion124  temp1758 = ( (struct envunion124){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )writeln1759 , .env =  env->envinst69 } );
        ( temp1758.fun ( &temp1758.env ,  (  sb4115 ) ,  ( (  line294 ) ( (  self4107 ) ,  (  ln4117 ) ) ) ) );
    }
    const char*  filename04118 = ( (  as_dash_const_dash_str680 ) ( ( (  or_dash_fail1769 ) ( (  filename4114 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"expect filename (we should've quit earlier.)" ) ,  ( 44 ) ) ) ) ) ) );
    bool  result4119 = ( (  try_dash_write_dash_contents1772 ) ( (  filename04118 ) ,  (  sb4115 ) ) );
    ( (  free1779 ) ( (  sb4115 ) ) );
    if ( ( ! (  result4119 ) ) ) {
        return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
    }
    if ( ( (  is_dash_just1780 ) ( (  altname4109 ) ) ) ) {
        struct Maybe_79  dref4120 = ( ( * (  self4107 ) ) .f_filename );
        if ( dref4120.tag == Maybe_79_Just_t ) {
            ( (  free682 ) ( ( dref4120 .stuff .Maybe_79_Just_s .field0 ) ,  (  al4110 ) ) );
        }
        else {
            if ( dref4120.tag == Maybe_79_None_t ) {
            }
        }
        (*  self4107 ) .f_filename = (  altname4109 );
    }
    return ( ( Maybe_273_Just ) ( ( (  num_dash_bytes393 ) ( ( (  as_dash_str1539 ) ( (  sb4115 ) ) ) ) ) ) );
}

struct env1789 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1790 {
    enum Unit_8  (*fun) (  struct env1789*  ,    struct Char_65  );
    struct env1789 env;
};

static  enum Unit_8   for_dash_each1788 (    struct StrViewIter_290  iterable1099 ,   struct envunion1790  fun1101 ) {
    struct StrViewIter_290  temp1791 = ( (  into_dash_iter291 ) ( (  iterable1099 ) ) );
    struct StrViewIter_290 *  it1102 = ( &temp1791 );
    while ( ( true ) ) {
        struct Maybe_348  dref1103 = ( (  next349 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_348_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_348_Just_t ) {
                struct envunion1790  temp1792 = (  fun1101 );
                ( temp1792.fun ( &temp1792.env ,  ( dref1103 .stuff .Maybe_348_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1793 (   struct env1789* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1794 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1531 , .env =  env->envinst60 } );
    return ( temp1794.fun ( &temp1794.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1787 (   struct env67* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrView_27  s2879 ) {
    struct env1789 envinst1789 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1788 ) ( ( (  chars292 ) ( (  s2879 ) ) ) ,  ( (struct envunion1790){ .fun = (  enum Unit_8  (*) (  struct env1789*  ,    struct Char_65  ) )lam1793 , .env =  envinst1789 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1784 (   struct env84* env ,    struct StrView_27  s2935 ,    enum CAllocator_10  al2937 ) {
    struct StrBuilder_62  temp1785 = ( (  mk1498 ) ( (  al2937 ) ) );
    struct StrBuilder_62 *  sb2938 = ( &temp1785 );
    struct envunion85  temp1786 = ( (struct envunion85){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1787 , .env =  env->envinst67 } );
    ( temp1786.fun ( &temp1786.env ,  (  sb2938 ) ,  (  s2935 ) ) );
    struct envunion76  temp1795 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1531 , .env =  env->envinst60 } );
    ( temp1795.fun ( &temp1795.env ,  (  sb2938 ) ,  ( (  nullchar679 ) ( ) ) ) );
    struct StrView_27  dynstr2939 = ( (  as_dash_str1539 ) ( (  sb2938 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2939 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub455 ( ( ( (  dynstr2939 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1782 (   struct env257* env ,    struct Editor_264 *  ed4721 ,    struct StrView_27  s4723 ) {
    ( (  reset_dash_msg1209 ) ( (  ed4721 ) ) );
    struct envunion258  temp1783 = ( (struct envunion258){ .fun = (  struct StrView_27  (*) (  struct env84*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1784 , .env =  env->envinst84 } );
    (*  ed4721 ) .f_msg = ( ( Maybe_79_Just ) ( ( temp1783.fun ( &temp1783.env ,  (  s4723 ) ,  ( ( * (  ed4721 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcatIter_1807 {
    struct StrViewIter_290  f_left;
    struct StrViewIter_290  f_right;
};

struct StrConcatIter_1806 {
    struct StrConcatIter_1807  f_left;
    struct AppendIter_1155  f_right;
};

struct StrCaseIter_1805 {
    enum {
        StrCaseIter_1805_StrCaseIter1_t,
        StrCaseIter_1805_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_290  field0;
        } StrCaseIter_1805_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1806  field0;
        } StrCaseIter_1805_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1805 StrCaseIter_1805_StrCaseIter1 (  struct StrViewIter_290  field0 ) {
    return ( struct StrCaseIter_1805 ) { .tag = StrCaseIter_1805_StrCaseIter1_t, .stuff = { .StrCaseIter_1805_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1805 StrCaseIter_1805_StrCaseIter2 (  struct StrConcatIter_1806  field0 ) {
    return ( struct StrCaseIter_1805 ) { .tag = StrCaseIter_1805_StrCaseIter2_t, .stuff = { .StrCaseIter_1805_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1804 {
    struct StrViewIter_290  f_left;
    struct StrCaseIter_1805  f_right;
};

struct env1808 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2877;
};

struct envunion1809 {
    enum Unit_8  (*fun) (  struct env1808*  ,    struct Char_65  );
    struct env1808 env;
};

static  struct StrConcatIter_1804   into_dash_iter1811 (    struct StrConcatIter_1804  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_348   next1815 (    struct StrConcatIter_1807 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next1814 (    struct StrConcatIter_1806 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next1815 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next1813 (    struct StrCaseIter_1805 *  self1730 ) {
    struct StrCaseIter_1805 *  dref1731 = (  self1730 );
    if ( (* dref1731 ).tag == StrCaseIter_1805_StrCaseIter1_t ) {
        return ( (  next349 ) ( ( & ( (* dref1731 ) .stuff .StrCaseIter_1805_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1731 ).tag == StrCaseIter_1805_StrCaseIter2_t ) {
            return ( (  next1814 ) ( ( & ( (* dref1731 ) .stuff .StrCaseIter_1805_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_348   next1812 (    struct StrConcatIter_1804 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1813 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1803 (    struct StrConcatIter_1804  iterable1099 ,   struct envunion1809  fun1101 ) {
    struct StrConcatIter_1804  temp1810 = ( (  into_dash_iter1811 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_1804 *  it1102 = ( &temp1810 );
    while ( ( true ) ) {
        struct Maybe_348  dref1103 = ( (  next1812 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_348_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_348_Just_t ) {
                struct envunion1809  temp1816 = (  fun1101 );
                ( temp1816.fun ( &temp1816.env ,  ( dref1103 .stuff .Maybe_348_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrCase_1820 {
    enum {
        StrCase_1820_StrCase1_t,
        StrCase_1820_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_1820_StrCase1_s;
        struct {
            struct StrConcat_801  field0;
        } StrCase_1820_StrCase2_s;
    } stuff;
};

static struct StrCase_1820 StrCase_1820_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_1820 ) { .tag = StrCase_1820_StrCase1_t, .stuff = { .StrCase_1820_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1820 StrCase_1820_StrCase2 (  struct StrConcat_801  field0 ) {
    return ( struct StrCase_1820 ) { .tag = StrCase_1820_StrCase2_t, .stuff = { .StrCase_1820_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1807   into_dash_iter1827 (    struct StrConcat_802  dref1297 ) {
    return ( (struct StrConcatIter_1807) { .f_left = ( (  chars292 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars292 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1807   chars1826 (    struct StrConcat_802  self1308 ) {
    return ( (  into_dash_iter1827 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_1806   into_dash_iter1825 (    struct StrConcat_801  dref1297 ) {
    return ( (struct StrConcatIter_1806) { .f_left = ( (  chars1826 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1806   chars1824 (    struct StrConcat_801  self1308 ) {
    return ( (  into_dash_iter1825 ) ( (  self1308 ) ) );
}

static  struct StrCaseIter_1805   into_dash_iter1823 (    struct StrCase_1820  self1736 ) {
    struct StrCase_1820  dref1737 = (  self1736 );
    if ( dref1737.tag == StrCase_1820_StrCase1_t ) {
        return ( ( StrCaseIter_1805_StrCaseIter1 ) ( ( (  chars292 ) ( ( dref1737 .stuff .StrCase_1820_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1737.tag == StrCase_1820_StrCase2_t ) {
            return ( ( StrCaseIter_1805_StrCaseIter2 ) ( ( (  chars1824 ) ( ( dref1737 .stuff .StrCase_1820_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1805   chars1822 (    struct StrCase_1820  self1748 ) {
    return ( (  into_dash_iter1823 ) ( (  self1748 ) ) );
}

static  struct StrCaseIter_1805   chars1819 (    struct Maybe_79  self1762 ) {
    struct StrCase_1820  temp1821;
    struct StrCase_1820  c1763 = (  temp1821 );
    struct Maybe_79  dref1764 = (  self1762 );
    if ( dref1764.tag == Maybe_79_None_t ) {
        c1763 = ( ( StrCase_1820_StrCase1 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1764.tag == Maybe_79_Just_t ) {
            c1763 = ( ( StrCase_1820_StrCase2 ) ( ( ( StrConcat_801_StrConcat ) ( ( ( StrConcat_802_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Just(" ) ,  ( 5 ) ) ) ,  ( dref1764 .stuff .Maybe_79_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1822 ) ( (  c1763 ) ) );
}

static  struct StrConcatIter_1804   into_dash_iter1818 (    struct StrConcat_78  dref1297 ) {
    return ( (struct StrConcatIter_1804) { .f_left = ( (  chars292 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1819 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1804   chars1817 (    struct StrConcat_78  self1308 ) {
    return ( (  into_dash_iter1818 ) ( (  self1308 ) ) );
}

static  enum Unit_8   lam1828 (   struct env1808* env ,    struct Char_65  c2881 ) {
    struct envunion64  temp1829 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1531 , .env =  env->envinst60 } );
    return ( temp1829.fun ( &temp1829.env ,  ( env->builder2877 ) ,  (  c2881 ) ) );
}

static  enum Unit_8   write1802 (   struct env63* env ,    struct StrBuilder_62 *  builder2877 ,    struct StrConcat_78  s2879 ) {
    struct env1808 envinst1808 = {
        .envinst60 = env->envinst60 ,
        .builder2877 =  builder2877 ,
    };
    ( (  for_dash_each1803 ) ( ( (  chars1817 ) ( (  s2879 ) ) ) ,  ( (struct envunion1809){ .fun = (  enum Unit_8  (*) (  struct env1808*  ,    struct Char_65  ) )lam1828 , .env =  envinst1808 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1799 (   struct env75* env ,    struct StrConcat_78  s2935 ,    enum CAllocator_10  al2937 ) {
    struct StrBuilder_62  temp1800 = ( (  mk1498 ) ( (  al2937 ) ) );
    struct StrBuilder_62 *  sb2938 = ( &temp1800 );
    struct envunion77  temp1801 = ( (struct envunion77){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_78  ) )write1802 , .env =  env->envinst63 } );
    ( temp1801.fun ( &temp1801.env ,  (  sb2938 ) ,  (  s2935 ) ) );
    struct envunion76  temp1830 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1531 , .env =  env->envinst60 } );
    ( temp1830.fun ( &temp1830.env ,  (  sb2938 ) ,  ( (  nullchar679 ) ( ) ) ) );
    struct StrView_27  dynstr2939 = ( (  as_dash_str1539 ) ( (  sb2938 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2939 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub455 ( ( ( (  dynstr2939 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1797 (   struct env253* env ,    struct Editor_264 *  ed4721 ,    struct StrConcat_78  s4723 ) {
    ( (  reset_dash_msg1209 ) ( (  ed4721 ) ) );
    struct envunion254  temp1798 = ( (struct envunion254){ .fun = (  struct StrView_27  (*) (  struct env75*  ,    struct StrConcat_78  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1799 , .env =  env->envinst75 } );
    (*  ed4721 ) .f_msg = ( ( Maybe_79_Just ) ( ( temp1798.fun ( &temp1798.env ,  (  s4723 ) ,  ( ( * (  ed4721 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undefined1833 (  ) {
    enum Unit_8  temp1834;
    return (  temp1834 );
}

static  enum Unit_8   todo1832 (  ) {
    ( (  println1408 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1833 ) ( ) );
}

struct Tuple2_1838 {
    struct Maybe_348  field0;
    struct Maybe_348  field1;
};

static struct Tuple2_1838 Tuple2_1838_Tuple2 (  struct Maybe_348  field0 ,  struct Maybe_348  field1 ) {
    return ( struct Tuple2_1838 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1835 (    struct StrView_27  s1947 ,    struct StrView_27  beg1949 ) {
    struct StrViewIter_290  temp1836 = ( (  chars292 ) ( (  s1947 ) ) );
    struct StrViewIter_290 *  scs1950 = ( &temp1836 );
    struct StrViewIter_290  temp1837 = ( (  chars292 ) ( (  beg1949 ) ) );
    struct StrViewIter_290 *  begcs1951 = ( &temp1837 );
    while ( ( true ) ) {
        struct Tuple2_1838  dref1952 = ( ( Tuple2_1838_Tuple2 ) ( ( (  next349 ) ( (  scs1950 ) ) ) ,  ( (  next349 ) ( (  begcs1951 ) ) ) ) );
        if ( dref1952 .field0.tag == Maybe_348_Just_t && dref1952 .field1.tag == Maybe_348_Just_t ) {
            if ( ( !  eq357 ( ( dref1952 .field0 .stuff .Maybe_348_Just_s .field0 ) , ( dref1952 .field1 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref1952 .field0.tag == Maybe_348_None_t && dref1952 .field1.tag == Maybe_348_Just_t ) {
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

struct SliceAddressIter_1841 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_1841   into_dash_iter1842 (    struct SliceAddressIter_1841  self2271 ) {
    return (  self2271 );
}

static  struct SliceAddressIter_1841   addresses1844 (    struct Slice_11  slice2268 ) {
    return ( (struct SliceAddressIter_1841) { .f_slice = (  slice2268 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_11   to_dash_slice1845 (    struct List_9  l2541 ) {
    struct Line_12 *  ptr2542 = ( ( (  l2541 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2542 ) , .f_count = ( (  l2541 ) .f_count ) } );
}

static  struct SliceAddressIter_1841   addresses1843 (    struct List_9  l2545 ) {
    return ( (  addresses1844 ) ( ( (  to_dash_slice1845 ) ( (  l2545 ) ) ) ) );
}

struct Maybe_1847 {
    enum {
        Maybe_1847_None_t,
        Maybe_1847_Just_t,
    } tag;
    union {
        struct {
            struct Line_12 *  field0;
        } Maybe_1847_Just_s;
    } stuff;
};

static struct Maybe_1847 Maybe_1847_Just (  struct Line_12 *  field0 ) {
    return ( struct Maybe_1847 ) { .tag = Maybe_1847_Just_t, .stuff = { .Maybe_1847_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1847   next1848 (    struct SliceAddressIter_1841 *  self2274 ) {
    size_t  off2275 = ( ( * (  self2274 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2275 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2274 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1847) { .tag = Maybe_1847_None_t } );
    }
    struct Line_12 *  elem2276 = ( (  offset_dash_ptr343 ) ( ( ( ( * (  self2274 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2275 ) ) ) ) );
    (*  self2274 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2275 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1847_Just ) ( (  elem2276 ) ) );
}

static  enum Unit_8   set_dash_filetype1839 (    struct TextBuf_117 *  self4243 ,    enum Filetype_120  type4245 ) {
    (*  self4243 ) .f_filetype = (  type4245 );
    struct SliceAddressIter_1841  temp1840 =  into_dash_iter1842 ( ( (  addresses1843 ) ( ( ( * (  self4243 ) ) .f_buf ) ) ) );
    while (true) {
        struct Maybe_1847  __cond1846 =  next1848 (&temp1840);
        if (  __cond1846 .tag == 0 ) {
            break;
        }
        struct Line_12 *  line4247 =  __cond1846 .stuff .Maybe_1847_Just_s .field0;
        (*  line4247 ) .f_invalidated = ( true );
    }
    return ( Unit_8_Unit );
}

struct envunion1850 {
    enum Unit_8  (*fun) (  struct env257*  ,    struct Editor_264 *  ,    struct StrView_27  );
    struct env257 env;
};

struct env1853 {
    bool (*  fun1151 )(    struct Char_65  );
};

struct envunion1854 {
    bool  (*fun) (  struct env1853*  ,    struct Char_65  ,    bool  );
    struct env1853 env;
};

static  bool   reduce1852 (    struct StrView_27  iterable1118 ,    bool  base1120 ,   struct envunion1854  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct StrViewIter_290  it1124 = ( (  into_dash_iter293 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next349 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                struct envunion1854  temp1855 = (  fun1122 );
                x1123 = ( temp1855.fun ( &temp1855.env ,  ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1856 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1856);
    abort ( );
    ( Unit_8_Unit );
    bool  temp1857;
    return (  temp1857 );
}

static  bool   lam1858 (   struct env1853* env ,    struct Char_65  e1153 ,    bool  x1155 ) {
    return ( ( ( env->fun1151 ) ( (  e1153 ) ) ) && (  x1155 ) );
}

static  bool   all1851 (    struct StrView_27  it1149 ,    bool (*  fun1151 )(    struct Char_65  ) ) {
    struct env1853 envinst1853 = {
        .fun1151 =  fun1151 ,
    };
    return ( (  reduce1852 ) ( (  it1149 ) ,  ( true ) ,  ( (struct envunion1854){ .fun = (  bool  (*) (  struct env1853*  ,    struct Char_65  ,    bool  ) )lam1858 , .env =  envinst1853 } ) ) );
}

struct envunion1860 {
    enum Unit_8  (*fun) (  struct env257*  ,    struct Editor_264 *  ,    struct StrView_27  );
    struct env257 env;
};

static  enum Unit_8   run_dash_cmd1705 (   struct env262* env ,    struct Editor_264 *  ed4740 ,    struct StrView_27  s4742 ) {
    struct Scanner_1706  temp1707 = ( (  mk_dash_from_dash_strview1708 ) ( (  s4742 ) ) );
    struct Scanner_1706 *  sc4743 = ( &temp1707 );
    ( (  drop_dash_str_dash_while1709 ) ( (  sc4743 ) ,  (  is_dash_whitespace411 ) ) );
    struct StrView_27  cmd4744 = ( (  take_dash_str_dash_while1726 ) ( (  sc4743 ) ,  (  is_dash_not_dash_whitespace1742 ) ) );
    ( (  drop_dash_str_dash_while1709 ) ( (  sc4743 ) ,  (  is_dash_whitespace411 ) ) );
    if ( (  eq616 ( (  cmd4744 ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4740 ) .f_running = ( false );
    } else {
        if ( (  eq616 ( (  cmd4744 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq616 ( (  cmd4744 ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4745 = ( (  take_dash_str_dash_while1726 ) ( (  sc4743 ) ,  (  is_dash_not_dash_whitespace1742 ) ) );
                struct Maybe_79  filename4746 = ( ( (  null1743 ) ( (  filename4745 ) ) ) ? ( (struct Maybe_79) { .tag = Maybe_79_None_t } ) : ( ( Maybe_79_Just ) ( (  filename4745 ) ) ) );
                struct envunion272  temp1746 = ( (struct envunion272){ .fun = (  struct Maybe_273  (*) (  struct env123*  ,    struct TextBuf_117 *  ,    struct Maybe_79  ) )write_dash_to_dash_file1747 , .env =  env->envinst123 } );
                struct Maybe_273  write_dash_result4747 = ( temp1746.fun ( &temp1746.env ,  ( ( * ( (  pane1225 ) ( (  ed4740 ) ) ) ) .f_buf ) ,  (  filename4746 ) ) );
                struct Maybe_273  dref4748 = (  write_dash_result4747 );
                if ( dref4748.tag == Maybe_273_None_t ) {
                    if ( ( (  is_dash_none1754 ) ( (  filename4746 ) ) ) ) {
                        struct envunion263  temp1781 = ( (struct envunion263){ .fun = (  enum Unit_8  (*) (  struct env257*  ,    struct Editor_264 *  ,    struct StrView_27  ) )set_dash_msg1782 , .env =  env->envinst257 } );
                        ( temp1781.fun ( &temp1781.env ,  (  ed4740 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"could not save changes (filename not set!!)" ) ,  ( 43 ) ) ) ) );
                    } else {
                        struct envunion270  temp1796 = ( (struct envunion270){ .fun = (  enum Unit_8  (*) (  struct env253*  ,    struct Editor_264 *  ,    struct StrConcat_78  ) )set_dash_msg1797 , .env =  env->envinst253 } );
                        ( temp1796.fun ( &temp1796.env ,  (  ed4740 ) ,  ( ( StrConcat_78_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4746 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4748.tag == Maybe_273_Just_t ) {
                        struct envunion271  temp1831 = ( (struct envunion271){ .fun = (  enum Unit_8  (*) (  struct env255*  ,    struct Editor_264 *  ,    struct StrConcat_82  ) )set_dash_msg1494 , .env =  env->envinst255 } );
                        ( temp1831.fun ( &temp1831.env ,  (  ed4740 ) ,  ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"written " ) ,  ( 8 ) ) ) ,  ( dref4748 .stuff .Maybe_273_Just_s .field0 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)" bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq616 ( (  cmd4744 ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1832 ) ( ) );
                } else {
                    if ( (  eq616 ( (  cmd4744 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_27  what4750 = ( (  take_dash_str_dash_while1726 ) ( (  sc4743 ) ,  (  is_dash_not_dash_whitespace1742 ) ) );
                        if ( (  eq616 ( (  what4750 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed4740 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq616 ( (  what4750 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed4740 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp299 ( ( (  count365 ) ( ( (  chars292 ) ( (  what4750 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1835 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"absolute" ) ,  ( 8 ) ) ) ,  (  what4750 ) ) ) ) ) {
                                    (* (*  ed4740 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp299 ( ( (  count365 ) ( ( (  chars292 ) ( (  what4750 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1835 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"relative" ) ,  ( 8 ) ) ) ,  (  what4750 ) ) ) ) ) {
                                        (* (*  ed4740 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq616 ( (  cmd4744 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"ft" ) ,  ( 2 ) ) ) ) ) ) {
                            struct StrView_27  type4751 = ( (  take_dash_str_dash_while1726 ) ( (  sc4743 ) ,  (  is_dash_not_dash_whitespace1742 ) ) );
                            struct TextBuf_117 *  tb4752 = ( ( * ( (  pane1225 ) ( (  ed4740 ) ) ) ) .f_buf );
                            if ( (  eq616 ( (  type4751 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"text" ) ,  ( 4 ) ) ) ) ) ) {
                                ( (  set_dash_filetype1839 ) ( (  tb4752 ) ,  ( Filetype_120_Text ) ) );
                            } else {
                                if ( (  eq616 ( (  type4751 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) ) ) ) {
                                    ( (  set_dash_filetype1839 ) ( (  tb4752 ) ,  ( Filetype_120_KC ) ) );
                                } else {
                                    if ( (  eq616 ( (  type4751 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                                        ( (  set_dash_filetype1839 ) ( (  tb4752 ) ,  ( Filetype_120_Markdown ) ) );
                                    } else {
                                        struct envunion1850  temp1849 = ( (struct envunion1850){ .fun = (  enum Unit_8  (*) (  struct env257*  ,    struct Editor_264 *  ,    struct StrView_27  ) )set_dash_msg1782 , .env =  env->envinst257 } );
                                        ( temp1849.fun ( &temp1849.env ,  (  ed4740 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"unknown file type" ) ,  ( 17 ) ) ) ) );
                                    }
                                }
                            }
                        } else {
                            if ( (  eq616 ( (  cmd4744 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"testerror" ) ,  ( 9 ) ) ) ) ) ) {
                                ( (  panic847 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"test error" ) ,  ( 10 ) ) ) ) );
                            } else {
                                if ( (  eq616 ( (  cmd4744 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                                } else {
                                    if ( ( (  all1851 ) ( (  cmd4744 ) ,  (  is_dash_digit1104 ) ) ) ) {
                                    } else {
                                        struct envunion1860  temp1859 = ( (struct envunion1860){ .fun = (  enum Unit_8  (*) (  struct env257*  ,    struct Editor_264 *  ,    struct StrView_27  ) )set_dash_msg1782 , .env =  env->envinst257 } );
                                        ( temp1859.fun ( &temp1859.env ,  (  ed4740 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"unknown command" ) ,  ( 15 ) ) ) ) );
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

static  struct Char_65   from_dash_u81863 (    uint8_t  b1485 ) {
    return ( (  char_dash_from_dash_u81174 ) ( (  b1485 ) ) );
}

static  struct Char_65   ascii_dash_char1862 (    char  c1494 ) {
    return ( (  from_dash_u81863 ) ( ( (  ascii_dash_u8592 ) ( (  c1494 ) ) ) ) );
}

static  struct Maybe_1098   reduce1867 (    struct StrViewIter_290  iterable1118 ,    struct Maybe_1098  base1120 ,    struct Maybe_1098 (*  fun1122 )(    struct Char_65  ,    struct Maybe_1098  ) ) {
    struct Maybe_1098  x1123 = (  base1120 );
    struct StrViewIter_290  it1124 = ( (  into_dash_iter291 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next349 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1868 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1868);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_1098  temp1869;
    return (  temp1869 );
}

static  struct Maybe_1098   sequence_dash_maybe1870 (    struct Char_65  e1935 ,    struct Maybe_1098  b1937 ) {
    struct Maybe_1098  dref1938 = (  b1937 );
    if ( dref1938.tag == Maybe_1098_None_t ) {
        return ( (struct Maybe_1098) { .tag = Maybe_1098_None_t } );
    }
    else {
        if ( dref1938.tag == Maybe_1098_Just_t ) {
            struct Maybe_171  dref1940 = ( (  parse_dash_digit1132 ) ( (  e1935 ) ) );
            if ( dref1940.tag == Maybe_171_None_t ) {
                return ( (struct Maybe_1098) { .tag = Maybe_1098_None_t } );
            }
            else {
                if ( dref1940.tag == Maybe_171_Just_t ) {
                    return ( ( Maybe_1098_Just ) ( (  op_dash_add363 ( (  op_dash_mul344 ( ( dref1938 .stuff .Maybe_1098_Just_s .field0 ) , (  from_dash_integral362 ( 10 ) ) ) ) , ( (  i32_dash_i641141 ) ( ( dref1940 .stuff .Maybe_171_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_1098   parse_dash_int1866 (    struct StrView_27  s1932 ) {
    struct StrViewIter_290  cs1942 = ( (  chars292 ) ( (  s1932 ) ) );
    struct Maybe_348  dref1943 = ( (  head1405 ) ( (  cs1942 ) ) );
    if ( dref1943.tag == Maybe_348_Just_t ) {
        return ( (  reduce1867 ) ( (  cs1942 ) ,  ( ( Maybe_1098_Just ) ( (  from_dash_integral362 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1870 ) ) );
    }
    else {
        if ( dref1943.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_1098) { .tag = Maybe_1098_None_t } );
        }
    }
}

struct TakeWhile_1876 {
    struct StrViewIter_290  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1875 {
    struct TakeWhile_1876  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1875 Map_1875_Map (  struct TakeWhile_1876  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1875 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1875   into_dash_iter1878 (    struct Map_1875  self804 ) {
    return (  self804 );
}

static  struct Maybe_348   next1880 (    struct TakeWhile_1876 *  self989 ) {
    struct Maybe_348  mx990 = ( (  next349 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_348  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_348_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_348_Just ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
            }
        }
    }
}

static  struct Maybe_273   next1879 (    struct Map_1875 *  dref806 ) {
    struct Maybe_348  dref809 = ( (  next1880 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_348_Just_t ) {
            return ( ( Maybe_273_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1877 (    struct Map_1875  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1875  it1124 = ( (  into_dash_iter1878 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_273  dref1125 = ( (  next1879 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_273_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_273_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_273_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1881 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1881);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1882;
    return (  temp1882 );
}

static  size_t   lam1883 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add353 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1874 (    struct Map_1875  it1135 ) {
    return ( (  reduce1877 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1883 ) ) );
}

static  struct TakeWhile_1876   into_dash_iter1885 (    struct TakeWhile_1876  self986 ) {
    return (  self986 );
}

static  struct Map_1875   map1884 (    struct TakeWhile_1876  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1876  it816 = ( (  into_dash_iter1885 ) ( (  iterable813 ) ) );
    return ( ( Map_1875_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1876   take_dash_while1886 (    struct StrViewIter_290  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1876) { .f_it = ( (  into_dash_iter291 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1887 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1873 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1874 ) ( ( (  map1884 ) ( ( (  take_dash_while1886 ) ( ( (  chars292 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1887 ) ) ) ) );
    return ( (  byte_dash_substr593 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1872 (    struct Scanner_1706 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1873 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from581 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes393 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

struct TakeWhile_1892 {
    struct StrViewIter_290  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1891 {
    struct TakeWhile_1892  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1891 Map_1891_Map (  struct TakeWhile_1892  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1891 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1891   into_dash_iter1894 (    struct Map_1891  self804 ) {
    return (  self804 );
}

static  struct Maybe_348   next1896 (    struct TakeWhile_1892 *  self989 ) {
    struct Maybe_348  mx990 = ( (  next349 ) ( ( & ( ( * (  self989 ) ) .f_it ) ) ) );
    struct Maybe_348  dref991 = (  mx990 );
    if ( dref991.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    else {
        if ( dref991.tag == Maybe_348_Just_t ) {
            if ( ( ( ( * (  self989 ) ) .f_pred ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_348_Just ) ( ( dref991 .stuff .Maybe_348_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
            }
        }
    }
}

static  struct Maybe_273   next1895 (    struct Map_1891 *  dref806 ) {
    struct Maybe_348  dref809 = ( (  next1896 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_273) { .tag = Maybe_273_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_348_Just_t ) {
            return ( ( Maybe_273_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1893 (    struct Map_1891  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    size_t  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct Map_1891  it1124 = ( (  into_dash_iter1894 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_273  dref1125 = ( (  next1895 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_273_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_273_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_273_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp1897 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1897);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1898;
    return (  temp1898 );
}

static  size_t   lam1899 (    size_t  v1137 ,    size_t  s1139 ) {
    return (  op_dash_add353 ( (  v1137 ) , (  s1139 ) ) );
}

static  size_t   sum1890 (    struct Map_1891  it1135 ) {
    return ( (  reduce1893 ) ( (  it1135 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1899 ) ) );
}

static  struct TakeWhile_1892   into_dash_iter1901 (    struct TakeWhile_1892  self986 ) {
    return (  self986 );
}

static  struct Map_1891   map1900 (    struct TakeWhile_1892  iterable813 ,    size_t (*  fun815 )(    struct Char_65  ) ) {
    struct TakeWhile_1892  it816 = ( (  into_dash_iter1901 ) ( (  iterable813 ) ) );
    return ( ( Map_1891_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct TakeWhile_1892   take_dash_while1902 (    struct StrViewIter_290  it995 ,    bool (*  pred997 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1892) { .f_it = ( (  into_dash_iter291 ) ( (  it995 ) ) ) , .f_pred = (  pred997 ) } );
}

static  size_t   lam1903 (    struct Char_65  c2636 ) {
    return ( (  c2636 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1889 (    struct StrView_27  self2632 ,    bool (*  fun2634 )(    struct Char_65  ) ) {
    size_t  bi2637 = ( (  sum1890 ) ( ( (  map1900 ) ( ( (  take_dash_while1902 ) ( ( (  chars292 ) ( (  self2632 ) ) ) ,  (  fun2634 ) ) ) ,  (  lam1903 ) ) ) ) );
    return ( (  byte_dash_substr593 ) ( (  self2632 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2637 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1888 (    struct Scanner_1706 *  sc3482 ,    bool (*  fun3484 )(    struct Char_65  ) ) {
    struct StrView_27  s3485 = ( (  take_dash_while1889 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  (  fun3484 ) ) );
    (*  sc3482 ) .f_s = ( (  byte_dash_substr_dash_from581 ) ( ( ( * (  sc3482 ) ) .f_s ) ,  ( (  num_dash_bytes393 ) ( (  s3485 ) ) ) ) );
    return (  s3485 );
}

static  bool   lam1904 (    struct Char_65  c4736 ) {
    return ( ! ( (  is_dash_whitespace411 ) ( (  c4736 ) ) ) );
}

static  struct Theme_188 *   or_dash_else1905 (    struct Maybe_261  self1360 ,    struct Theme_188 *  alt1362 ) {
    struct Maybe_261  dref1363 = (  self1360 );
    if ( dref1363.tag == Maybe_261_None_t ) {
        return (  alt1362 );
    }
    else {
        if ( dref1363.tag == Maybe_261_Just_t ) {
            return ( dref1363 .stuff .Maybe_261_Just_s .field0 );
        }
    }
}

struct SliceIter_1911 {
    struct Slice_209  f_slice;
    size_t  f_current_dash_offset;
};

struct env1912 {
    ;
    struct StrView_27  name4293;
};

struct envunion1913 {
    bool  (*fun) (  struct env1912*  ,    struct Tuple2_210  );
    struct env1912 env;
};

struct Filter_1910 {
    struct SliceIter_1911  f_og;
    struct envunion1913  f_fun;
};

struct Map_1909 {
    struct Filter_1910  field0;
    struct Theme_188 * (*  field1 )(    struct Tuple2_210  );
};

static struct Map_1909 Map_1909_Map (  struct Filter_1910  field0 ,  struct Theme_188 * (*  field1 )(    struct Tuple2_210  ) ) {
    return ( struct Map_1909 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1915 {
    enum {
        Maybe_1915_None_t,
        Maybe_1915_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_210  field0;
        } Maybe_1915_Just_s;
    } stuff;
};

static struct Maybe_1915 Maybe_1915_Just (  struct Tuple2_210  field0 ) {
    return ( struct Maybe_1915 ) { .tag = Maybe_1915_Just_t, .stuff = { .Maybe_1915_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_210 *   offset_dash_ptr1918 (    struct Tuple2_210 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_210  temp1919;
    return ( (struct Tuple2_210 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1919 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1915   next1917 (    struct SliceIter_1911 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1915) { .tag = Maybe_1915_None_t } );
    }
    struct Tuple2_210  elem2258 = ( * ( (  offset_dash_ptr1918 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1915_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_1915   next1916 (    struct Filter_1910 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_1915  dref842 = ( (  next1917 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_1915_None_t ) {
            return ( (struct Maybe_1915) { .tag = Maybe_1915_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_1915_Just_t ) {
                struct envunion1913  temp1920 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp1920.fun ( &temp1920.env ,  ( dref842 .stuff .Maybe_1915_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1915_Just ) ( ( dref842 .stuff .Maybe_1915_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1915  temp1921;
    return (  temp1921 );
}

static  struct Maybe_261   next1914 (    struct Map_1909 *  dref806 ) {
    struct Maybe_1915  dref809 = ( (  next1916 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_1915_None_t ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_1915_Just_t ) {
            return ( ( Maybe_261_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_1915_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1909   into_dash_iter1923 (    struct Map_1909  self804 ) {
    return (  self804 );
}

static  struct Maybe_261   head1908 (    struct Map_1909  it1167 ) {
    struct Map_1909  temp1922 = ( (  into_dash_iter1923 ) ( (  it1167 ) ) );
    return ( (  next1914 ) ( ( &temp1922 ) ) );
}

static  struct Filter_1910   into_dash_iter1925 (    struct Filter_1910  self838 ) {
    return (  self838 );
}

static  struct Map_1909   map1924 (    struct Filter_1910  iterable813 ,    struct Theme_188 * (*  fun815 )(    struct Tuple2_210  ) ) {
    struct Filter_1910  it816 = ( (  into_dash_iter1925 ) ( (  iterable813 ) ) );
    return ( ( Map_1909_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct SliceIter_1911   into_dash_iter1927 (    struct Slice_209  self2250 ) {
    return ( (struct SliceIter_1911) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1910   filter1926 (    struct Slice_209  iterable846 ,   struct envunion1913  fun848 ) {
    struct SliceIter_1911  it849 = ( (  into_dash_iter1927 ) ( (  iterable846 ) ) );
    return ( (struct Filter_1910) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   lam1928 (   struct env1912* env ,    struct Tuple2_210  dref4294 ) {
    return ( (  begins_dash_with1835 ) ( ( dref4294 .field0 ) ,  ( env->name4293 ) ) );
}

static  struct Theme_188 *   snd1929 (    struct Tuple2_210  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Maybe_261   match_dash_theme1907 (   struct env218* env ,    struct StrView_27  name4293 ) {
    if ( ( (  null1743 ) ( (  name4293 ) ) ) ) {
        return ( (struct Maybe_261) { .tag = Maybe_261_None_t } );
    }
    struct env1912 envinst1912 = {
        .name4293 =  name4293 ,
    };
    return ( (  head1908 ) ( ( (  map1924 ) ( ( (  filter1926 ) ( ( env->all_dash_themes4290 ) ,  ( (struct envunion1913){ .fun = (  bool  (*) (  struct env1912*  ,    struct Tuple2_210  ) )lam1928 , .env =  envinst1912 } ) ) ) ,  (  snd1929 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1865 (   struct env259* env ,    struct Editor_264 *  ed4726 ,    struct StrView_27  cmd4728 ) {
    struct Maybe_1098  dref4729 = ( (  parse_dash_int1866 ) ( (  cmd4728 ) ) );
    if ( dref4729.tag == Maybe_1098_Just_t ) {
        int32_t  line4731 = ( (  clamp1551 ) ( ( (  i64_dash_i321143 ) ( ( dref4729 .stuff .Maybe_1098_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (  num_dash_lines1228 ) ( ( ( * ( (  pane1225 ) ( (  ed4726 ) ) ) ) .f_buf ) ) ) ) );
        int32_t  line4732 = (  op_dash_sub180 ( (  line4731 ) , (  from_dash_integral56 ( 1 ) ) ) );
        ( (  set_dash_cursors284 ) ( ( (  pane1225 ) ( (  ed4726 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4732 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_NoChanges ) ) );
    }
    else {
        if ( dref4729.tag == Maybe_1098_None_t ) {
            struct Scanner_1706  temp1871 = ( (  mk_dash_from_dash_strview1708 ) ( (  cmd4728 ) ) );
            struct Scanner_1706 *  sc4733 = ( &temp1871 );
            struct StrView_27  cmd4734 = ( (  take_dash_str_dash_while1872 ) ( (  sc4733 ) ,  (  is_dash_alpha1402 ) ) );
            if ( (  eq616 ( (  cmd4734 ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1709 ) ( (  sc4733 ) ,  (  is_dash_whitespace411 ) ) );
                struct StrView_27  theme_dash_name4737 = ( (  take_dash_str_dash_while1888 ) ( (  sc4733 ) ,  (  lam1904 ) ) );
                struct envunion260  temp1906 = ( (struct envunion260){ .fun = (  struct Maybe_261  (*) (  struct env218*  ,    struct StrView_27  ) )match_dash_theme1907 , .env =  env->envinst218 } );
                (* (*  ed4726 ) .f_cfg ) .f_theme = ( (  or_dash_else1905 ) ( ( temp1906.fun ( &temp1906.env ,  (  theme_dash_name4737 ) ) ) ,  ( ( * (  ed4726 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_290   into_dash_iter1933 (    struct StrBuilder_62  self2932 ) {
    return ( (  chars1774 ) ( (  self2932 ) ) );
}

static  struct Maybe_348   head1931 (    struct StrBuilder_62  it1167 ) {
    struct StrViewIter_290  temp1932 = ( (  into_dash_iter1933 ) ( (  it1167 ) ) );
    return ( (  next349 ) ( ( &temp1932 ) ) );
}

static  bool   null1930 (    struct StrBuilder_62  it1176 ) {
    struct Maybe_348  dref1177 = ( (  head1931 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_348_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  uint8_t *   get_dash_ptr1940 (    struct List_13 *  list2406 ,    size_t  i2408 ) {
    if ( ( (  cmp299 ( (  i2408 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2408 ) , ( ( * (  list2406 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2408 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2406 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr667 ) ( ( ( * (  list2406 ) ) .f_elements ) ,  (  i2408 ) ) );
}

static  uint8_t   get1939 (    struct List_13 *  list2416 ,    size_t  i2418 ) {
    return ( * ( (  get_dash_ptr1940 ) ( (  list2416 ) ,  (  i2418 ) ) ) );
}

static  struct Maybe_74   last1938 (    struct List_13 *  list2503 ) {
    if ( (  eq280 ( ( ( * (  list2503 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    } else {
        return ( ( Maybe_74_Just ) ( ( (  get1939 ) ( (  list2503 ) ,  (  op_dash_sub455 ( ( (  size760 ) ( (  list2503 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) );
    }
}

static  enum Unit_8   remove1942 (   struct env42* env ,    struct List_13 *  list2487 ,    size_t  i2489 ) {
    struct envunion43  temp1943 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range762 , .env =  env->envinst40 } );
    ( temp1943.fun ( &temp1943.env ,  (  list2487 ) ,  (  i2489 ) ,  (  op_dash_add353 ( (  i2489 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_74   pop1937 (   struct env44* env ,    struct List_13 *  list2506 ) {
    if ( (  eq280 ( ( ( * (  list2506 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic847 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct Maybe_74  last_dash_elem2507 = ( (  last1938 ) ( (  list2506 ) ) );
    struct envunion45  temp1941 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_13 *  ,    size_t  ) )remove1942 , .env =  env->envinst42 } );
    ( temp1941.fun ( &temp1941.env ,  (  list2506 ) ,  (  op_dash_sub455 ( ( ( * (  list2506 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return (  last_dash_elem2507 );
}

static  struct Maybe_74   pop1935 (   struct env72* env ,    struct StrBuilder_62 *  sb2895 ) {
    struct envunion73  temp1936 = ( (struct envunion73){ .fun = (  struct Maybe_74  (*) (  struct env44*  ,    struct List_13 *  ) )pop1937 , .env =  env->envinst44 } );
    return ( temp1936.fun ( &temp1936.env ,  ( & ( ( * (  sb2895 ) ) .f_chars ) ) ) );
}

struct envunion1945 {
    enum Unit_8  (*fun) (  struct env259*  ,    struct Editor_264 *  ,    struct StrView_27  );
    struct env259 env;
};

struct env1947 {
    struct Editor_264 *  ed4825;
    ;
};

struct envunion1948 {
    enum Unit_8  (*fun) (  struct env1947*  ,    struct StrView_27  );
    struct env1947 env;
};

static  enum Unit_8   if_dash_just1946 (    struct Maybe_79  x1601 ,   struct envunion1948  fun1603 ) {
    struct Maybe_79  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_79_Just_t ) {
        struct envunion1948  temp1949 = (  fun1603 );
        ( temp1949.fun ( &temp1949.env ,  ( dref1604 .stuff .Maybe_79_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_79_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1950 (   struct env1947* env ,    struct StrView_27  st4842 ) {
    ( (  free682 ) ( (  st4842 ) ,  ( ( * ( env->ed4825 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1952 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  enum Unit_8   live_dash_search1953 (    struct Editor_264 *  ed4755 ,    struct Pos_26  begin_dash_pos4757 ,    struct StrView_27  query4759 ) {
    if ( ( ! ( (  null1743 ) ( (  query4759 ) ) ) ) ) {
        struct Maybe_1578  dref4760 = ( (  search_dash_from1579 ) ( ( (  pane1225 ) ( (  ed4755 ) ) ) ,  (  begin_dash_pos4757 ) ,  (  query4759 ) ) );
        if ( dref4760.tag == Maybe_1578_Just_t ) {
            ( (  set_dash_cursors284 ) ( ( (  pane1225 ) ( (  ed4755 ) ) ) ,  ( dref4760 .stuff .Maybe_1578_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4760 .stuff .Maybe_1578_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_285_NoChanges ) ) );
        }
        else {
            if ( dref4760.tag == Maybe_1578_None_t ) {
                ( (  set_dash_cursors284 ) ( ( (  pane1225 ) ( (  ed4755 ) ) ) ,  (  begin_dash_pos4757 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors284 ) ( ( (  pane1225 ) ( (  ed4755 ) ) ) ,  (  begin_dash_pos4757 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1955 {
    struct Maybe_74  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct SliceIter_1957 {
    struct Slice_267  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1957   into_dash_iter1958 (    struct Slice_267  self2250 ) {
    return ( (struct SliceIter_1957) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_1960 {
    enum {
        Maybe_1960_None_t,
        Maybe_1960_Just_t,
    } tag;
    union {
        struct {
            struct MenuItem_268  field0;
        } Maybe_1960_Just_s;
    } stuff;
};

static struct Maybe_1960 Maybe_1960_Just (  struct MenuItem_268  field0 ) {
    return ( struct Maybe_1960 ) { .tag = Maybe_1960_Just_t, .stuff = { .Maybe_1960_Just_s = { .field0 = field0 } } };
};

static  struct MenuItem_268 *   offset_dash_ptr1962 (    struct MenuItem_268 *  x377 ,    int64_t  count379 ) {
    struct MenuItem_268  temp1963;
    return ( (struct MenuItem_268 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1963 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1960   next1961 (    struct SliceIter_1957 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1960) { .tag = Maybe_1960_None_t } );
    }
    struct MenuItem_268  elem2258 = ( * ( (  offset_dash_ptr1962 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1960_Just ) ( (  elem2258 ) ) );
}

static  enum Unit_8   handle_dash_key1217 (   struct env432* env ,    struct Editor_264 *  ed4825 ,    struct Key_440  key4827 ) {
    struct EditorMode_265 *  dref4828 = ( & ( ( * (  ed4825 ) ) .f_mode ) );
    if ( (* dref4828 ).tag == EditorMode_265_Normal_t ) {
        enum Mode_239  dref4829 = ( ( ( * (  ed4825 ) ) .f_pane ) .f_mode );
        switch (  dref4829 ) {
            case Mode_239_Normal : {
                struct envunion439  temp1218 = ( (struct envunion439){ .fun = (  enum Unit_8  (*) (  struct env421*  ,    struct Editor_264 *  ,    struct Key_440  ) )handle_dash_normal_dash_key1219 , .env =  env->envinst421 } );
                ( temp1218.fun ( &temp1218.env ,  (  ed4825 ) ,  (  key4827 ) ) );
                break;
            }
            case Mode_239_Select : {
                struct envunion1690  temp1689 = ( (struct envunion1690){ .fun = (  enum Unit_8  (*) (  struct env421*  ,    struct Editor_264 *  ,    struct Key_440  ) )handle_dash_normal_dash_key1219 , .env =  env->envinst421 } );
                ( temp1689.fun ( &temp1689.env ,  (  ed4825 ) ,  (  key4827 ) ) );
                break;
            }
            case Mode_239_Insert : {
                struct Key_440  dref4830 = (  key4827 );
                if ( dref4830.tag == Key_440_Escape_t ) {
                    ( (  set_dash_mode1234 ) ( ( (  pane1225 ) ( (  ed4825 ) ) ) ,  ( Mode_239_Normal ) ) );
                }
                else {
                    if ( dref4830.tag == Key_440_Enter_t ) {
                        int32_t  indent4831 = ( (  indent_dash_at_dash_line396 ) ( ( (  pane1225 ) ( (  ed4825 ) ) ) ,  ( ( ( * ( (  pane1225 ) ( (  ed4825 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion433  temp1691 = ( (struct envunion433){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_238 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1237 , .env =  env->envinst222 } );
                        ( temp1691.fun ( &temp1691.env ,  ( (  pane1225 ) ( (  ed4825 ) ) ) ,  ( (  from_dash_charlike639 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1226 ) ( ( (  pane1225 ) ( (  ed4825 ) ) ) ) );
                        struct envunion441  temp1692 = ( (struct envunion441){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Pane_238 *  ,    int32_t  ) )indent_dash_at_dash_current1372 , .env =  env->envinst244 } );
                        ( temp1692.fun ( &temp1692.env ,  ( (  pane1225 ) ( (  ed4825 ) ) ) ,  (  indent4831 ) ) );
                    }
                    else {
                        if ( dref4830.tag == Key_440_Backspace_t ) {
                            struct envunion435  temp1693 = ( (struct envunion435){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_238 *  ) )backspace1694 , .env =  env->envinst225 } );
                            ( temp1693.fun ( &temp1693.env ,  ( (  pane1225 ) ( (  ed4825 ) ) ) ) );
                        }
                        else {
                            if ( dref4830.tag == Key_440_Char_t ) {
                                struct Array_1697  temp1701 = ( (struct Array_1697) { ._arr = { ( dref4830 .stuff .Key_440_Char_s .field0 ) } } );
                                struct Array_1697  temp1699 = ( (  from_dash_listlike1700 ) ( ( &temp1701 ) ) );
                                struct StrView_27  s4833 = ( (  from_dash_ascii_dash_slice1095 ) ( ( (  as_dash_slice1696 ) ( ( &temp1699 ) ) ) ) );
                                struct envunion1703  temp1702 = ( (struct envunion1703){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_238 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1237 , .env =  env->envinst222 } );
                                ( temp1702.fun ( &temp1702.env ,  ( (  pane1225 ) ( (  ed4825 ) ) ) ,  (  s4833 ) ) );
                                ( (  move_dash_right1226 ) ( ( (  pane1225 ) ( (  ed4825 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4828 ).tag == EditorMode_265_Cmd_t ) {
            struct Key_440  dref4836 = (  key4827 );
            if ( dref4836.tag == Key_440_Escape_t ) {
                ( (  set_dash_cursors284 ) ( ( (  pane1225 ) ( (  ed4825 ) ) ) ,  ( (* dref4828 ) .stuff .EditorMode_265_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_UpdateVI ) ) );
                (*  ed4825 ) .f_mode = ( (struct EditorMode_265) { .tag = EditorMode_265_Normal_t } );
                (* (*  ed4825 ) .f_cfg ) .f_theme = ( ( * (  ed4825 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4836.tag == Key_440_Enter_t ) {
                    struct envunion434  temp1704 = ( (struct envunion434){ .fun = (  enum Unit_8  (*) (  struct env262*  ,    struct Editor_264 *  ,    struct StrView_27  ) )run_dash_cmd1705 , .env =  env->envinst262 } );
                    ( temp1704.fun ( &temp1704.env ,  (  ed4825 ) ,  ( (  as_dash_str1539 ) ( ( & ( (* dref4828 ) .stuff .EditorMode_265_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1779 ) ( ( & ( (* dref4828 ) .stuff .EditorMode_265_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors284 ) ( ( (  pane1225 ) ( (  ed4825 ) ) ) ,  ( ( * ( (  pane1225 ) ( (  ed4825 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_UpdateVI ) ) );
                    (*  ed4825 ) .f_mode = ( (struct EditorMode_265) { .tag = EditorMode_265_Normal_t } );
                    (*  ed4825 ) .f_og_dash_theme = ( ( * ( ( * (  ed4825 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref4836.tag == Key_440_Char_t ) {
                        struct envunion437  temp1861 = ( (struct envunion437){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1531 , .env =  env->envinst60 } );
                        ( temp1861.fun ( &temp1861.env ,  ( & ( (* dref4828 ) .stuff .EditorMode_265_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1862 ) ( ( dref4836 .stuff .Key_440_Char_s .field0 ) ) ) ) );
                        struct envunion436  temp1864 = ( (struct envunion436){ .fun = (  enum Unit_8  (*) (  struct env259*  ,    struct Editor_264 *  ,    struct StrView_27  ) )live_dash_cmd1865 , .env =  env->envinst259 } );
                        ( temp1864.fun ( &temp1864.env ,  (  ed4825 ) ,  ( (  as_dash_str1539 ) ( ( & ( (* dref4828 ) .stuff .EditorMode_265_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4836.tag == Key_440_Backspace_t ) {
                            if ( ( ! ( (  null1930 ) ( ( (* dref4828 ) .stuff .EditorMode_265_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion438  temp1934 = ( (struct envunion438){ .fun = (  struct Maybe_74  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1935 , .env =  env->envinst72 } );
                                ( temp1934.fun ( &temp1934.env ,  ( & ( (* dref4828 ) .stuff .EditorMode_265_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1945  temp1944 = ( (struct envunion1945){ .fun = (  enum Unit_8  (*) (  struct env259*  ,    struct Editor_264 *  ,    struct StrView_27  ) )live_dash_cmd1865 , .env =  env->envinst259 } );
                            ( temp1944.fun ( &temp1944.env ,  (  ed4825 ) ,  ( (  as_dash_str1539 ) ( ( & ( (* dref4828 ) .stuff .EditorMode_265_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4828 ).tag == EditorMode_265_Search_t ) {
                struct Key_440  dref4840 = (  key4827 );
                if ( dref4840.tag == Key_440_Escape_t ) {
                    ( (  set_dash_cursors284 ) ( ( (  pane1225 ) ( (  ed4825 ) ) ) ,  ( (* dref4828 ) .stuff .EditorMode_265_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_285_UpdateVI ) ) );
                    (*  ed4825 ) .f_mode = ( (struct EditorMode_265) { .tag = EditorMode_265_Normal_t } );
                }
                else {
                    if ( dref4840.tag == Key_440_Enter_t ) {
                        ( (  set_dash_cursors284 ) ( ( (  pane1225 ) ( (  ed4825 ) ) ) ,  ( ( * ( (  pane1225 ) ( (  ed4825 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1225 ) ( (  ed4825 ) ) ) ) .f_sel ) ,  ( CursorMovement_285_UpdateVI ) ) );
                        struct env1947 envinst1947 = {
                            .ed4825 =  ed4825 ,
                        };
                        ( (  if_dash_just1946 ) ( ( ( * (  ed4825 ) ) .f_search_dash_term ) ,  ( (struct envunion1948){ .fun = (  enum Unit_8  (*) (  struct env1947*  ,    struct StrView_27  ) )lam1950 , .env =  envinst1947 } ) ) );
                        if ( ( ! ( (  null1930 ) ( ( (* dref4828 ) .stuff .EditorMode_265_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4843 = ( ( * ( (  pane1225 ) ( (  ed4825 ) ) ) ) .f_cursor );
                            struct Pos_26  from4844 = ( (  or_dash_else1470 ) ( ( ( * ( (  pane1225 ) ( (  ed4825 ) ) ) ) .f_sel ) ,  (  to4843 ) ) );
                            (*  ed4825 ) .f_search_dash_term = ( ( Maybe_79_Just ) ( ( (  as_dash_str1539 ) ( ( & ( (* dref4828 ) .stuff .EditorMode_265_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4825 ) .f_search_dash_term = ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
                        }
                        (*  ed4825 ) .f_mode = ( (struct EditorMode_265) { .tag = EditorMode_265_Normal_t } );
                    }
                    else {
                        if ( dref4840.tag == Key_440_Char_t ) {
                            struct envunion1952  temp1951 = ( (struct envunion1952){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1531 , .env =  env->envinst60 } );
                            ( temp1951.fun ( &temp1951.env ,  ( & ( (* dref4828 ) .stuff .EditorMode_265_Search_s .field1 ) ) ,  ( (  ascii_dash_char1862 ) ( ( dref4840 .stuff .Key_440_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1953 ) ( (  ed4825 ) ,  ( (* dref4828 ) .stuff .EditorMode_265_Search_s .field0 ) ,  ( (  as_dash_str1539 ) ( ( & ( (* dref4828 ) .stuff .EditorMode_265_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4840.tag == Key_440_Backspace_t ) {
                                if ( ( ! ( (  null1930 ) ( ( (* dref4828 ) .stuff .EditorMode_265_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1955  temp1954 = ( (struct envunion1955){ .fun = (  struct Maybe_74  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1935 , .env =  env->envinst72 } );
                                    ( temp1954.fun ( &temp1954.env ,  ( & ( (* dref4828 ) .stuff .EditorMode_265_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1953 ) ( (  ed4825 ) ,  ( (* dref4828 ) .stuff .EditorMode_265_Search_s .field0 ) ,  ( (  as_dash_str1539 ) ( ( & ( (* dref4828 ) .stuff .EditorMode_265_Search_s .field1 ) ) ) ) ) );
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
                if ( (* dref4828 ).tag == EditorMode_265_Menu_t ) {
                    struct Key_440  dref4847 = (  key4827 );
                    if ( dref4847.tag == Key_440_Char_t ) {
                        struct SliceIter_1957  temp1956 =  into_dash_iter1958 ( ( ( (* dref4828 ) .stuff .EditorMode_265_Menu_s .field0 ) .f_items ) );
                        while (true) {
                            struct Maybe_1960  __cond1959 =  next1961 (&temp1956);
                            if (  __cond1959 .tag == 0 ) {
                                break;
                            }
                            struct MenuItem_268  menu_dash_item4850 =  __cond1959 .stuff .Maybe_1960_Just_s .field0;
                            if ( (  eq1067 ( ( (  menu_dash_item4850 ) .f_key ) , ( dref4847 .stuff .Key_440_Char_s .field0 ) ) ) ) {
                                ( ( (  menu_dash_item4850 ) .f_action ) ( ( (  pane1225 ) ( (  ed4825 ) ) ) ) );
                            }
                        }
                        (*  ed4825 ) .f_mode = ( (struct EditorMode_265) { .tag = EditorMode_265_Normal_t } );
                    }
                    else {
                        if ( dref4847.tag == Key_440_Escape_t ) {
                            (*  ed4825 ) .f_mode = ( (struct EditorMode_265) { .tag = EditorMode_265_Normal_t } );
                        }
                        else {
                            if ( true ) {
                            }
                        }
                    }
                }
                else {
                    if ( true ) {
                        ( (  todo1832 ) ( ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1965 {
    bool  (*fun) (  struct env99*  ,    struct Screen_444 *  );
    struct env99 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1966 (   struct env99* env ,    struct Screen_444 *  screen3727 ) {
    struct Tui_97 *  tui3728 = ( ( * (  screen3727 ) ) .f_tui );
    struct envunion100  temp1967 = ( (struct envunion100){ .fun = (  bool  (*) (  struct env94*  ,    struct Tui_97 *  ) )update_dash_dimensions1019 , .env =  env->envinst94 } );
    bool  updated_dash_dimensions3729 = ( temp1967.fun ( &temp1967.env ,  (  tui3728 ) ) );
    if ( ( ! (  updated_dash_dimensions3729 ) ) ) {
        return ( false );
    }
    (*  screen3727 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3730 = ( ( * ( ( * (  screen3727 ) ) .f_tui ) ) .f_width );
    uint32_t  h3731 = ( ( * ( ( * (  screen3727 ) ) .f_tui ) ) .f_height );
    size_t  nusz3732 = ( (  u32_dash_size968 ) ( (  op_dash_mul183 ( (  w3730 ) , (  h3731 ) ) ) ) );
    if ( (  cmp299 ( (  nusz3732 ) , ( ( ( * (  screen3727 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_444  nuscreen3733 = ( (  mk_dash_screen962 ) ( (  tui3728 ) ,  ( ( * (  screen3727 ) ) .f_al ) ) );
    (*  screen3727 ) .f_current = ( (  nuscreen3733 ) .f_current );
    (*  screen3727 ) .f_previous = ( (  nuscreen3733 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1968 (    struct Tui_97 *  tui3654 ) {
    bool  redraw3655 = ( ( * (  tui3654 ) ) .f_should_dash_redraw );
    (*  tui3654 ) .f_should_dash_redraw = ( false );
    return (  redraw3655 );
}

struct env1972 {
    struct Slice_445  s2328;
    ;
    struct Cell_446 (*  fun2330 )(    struct Cell_446  );
    ;
    ;
};

struct envunion1973 {
    enum Unit_8  (*fun) (  struct env1972*  ,    int32_t  );
    struct env1972 env;
};

static  enum Unit_8   for_dash_each1971 (    struct Range_166  iterable1099 ,   struct envunion1973  fun1101 ) {
    struct RangeIter_169  temp1974 = ( (  into_dash_iter170 ) ( (  iterable1099 ) ) );
    struct RangeIter_169 *  it1102 = ( &temp1974 );
    while ( ( true ) ) {
        struct Maybe_171  dref1103 = ( (  next172 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_171_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_171_Just_t ) {
                struct envunion1973  temp1975 = (  fun1101 );
                ( temp1975.fun ( &temp1975.env ,  ( dref1103 .stuff .Maybe_171_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1976 (   struct env1972* env ,    int32_t  i2332 ) {
    return ( (  set983 ) ( ( env->s2328 ) ,  ( (  i32_dash_size277 ) ( (  i2332 ) ) ) ,  ( ( env->fun2330 ) ( (  elem_dash_get987 ( ( env->s2328 ) , ( (  i32_dash_size277 ) ( (  i2332 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1970 (    struct Slice_445  s2328 ,    struct Cell_446 (*  fun2330 )(    struct Cell_446  ) ) {
    struct env1972 envinst1972 = {
        .s2328 =  s2328 ,
        .fun2330 =  fun2330 ,
    };
    ( (  for_dash_each1971 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32308 ) ( (  op_dash_sub455 ( ( (  s2328 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1973){ .fun = (  enum Unit_8  (*) (  struct env1972*  ,    int32_t  ) )lam1976 , .env =  envinst1972 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_446   lam1977 (    struct Cell_446  dref3691 ) {
    return ( (  default_dash_cell995 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1969 (    struct Screen_444 *  screen3690 ) {
    ( (  map1970 ) ( ( ( * (  screen3690 ) ) .f_current ) ,  (  lam1977 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1978 (    struct Screen_444 *  screen3736 ,    struct Color_154  c3738 ) {
    (*  screen3736 ) .f_default_dash_fg = (  c3738 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1979 (    struct Screen_444 *  screen3741 ,    struct Color_154  c3743 ) {
    (*  screen3741 ) .f_default_dash_bg = (  c3743 );
    return ( Unit_8_Unit );
}

static  int32_t   cast1983 (    uint32_t  x395 ) {
    return ( (int32_t ) (  x395 ) );
}

static  int32_t   u32_dash_i321982 (    uint32_t  x744 ) {
    return ( (  cast1983 ) ( (  x744 ) ) );
}

struct Maybe_1988 {
    enum {
        Maybe_1988_None_t,
        Maybe_1988_Just_t,
    } tag;
    union {
        struct {
            struct Cell_446 *  field0;
        } Maybe_1988_Just_s;
    } stuff;
};

static struct Maybe_1988 Maybe_1988_Just (  struct Cell_446 *  field0 ) {
    return ( struct Maybe_1988 ) { .tag = Maybe_1988_Just_t, .stuff = { .Maybe_1988_Just_s = { .field0 = field0 } } };
};

static  struct Cell_446 *   undefined1989 (  ) {
    struct Cell_446 *  temp1990;
    return (  temp1990 );
}

static  struct Cell_446 *   or_dash_fail1987 (    struct Maybe_1988  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_1988  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_1988_None_t ) {
        ( (  panic847 ) ( (  errmsg1355 ) ) );
        return ( (  undefined1989 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_1988_Just_t ) {
            return ( dref1356 .stuff .Maybe_1988_Just_s .field0 );
        }
    }
}

static  struct Maybe_1988   get_dash_cell_dash_ptr1991 (    struct Screen_444 *  screen3757 ,    int32_t  x3759 ,    int32_t  y3761 ) {
    int32_t  w3762 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3757 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  x3759 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  x3759 ) , (  w3762 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1988) { .tag = Maybe_1988_None_t } );
    }
    if ( ( (  cmp173 ( (  y3761 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3761 ) , ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3757 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1988) { .tag = Maybe_1988_None_t } );
    }
    size_t  i3763 = ( (  i32_dash_size277 ) ( (  op_dash_add175 ( (  op_dash_mul1593 ( (  y3761 ) , (  w3762 ) ) ) , (  x3759 ) ) ) ) );
    return ( ( Maybe_1988_Just ) ( ( (  get_dash_ptr984 ) ( ( ( * (  screen3757 ) ) .f_current ) ,  (  i3763 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1980 (    struct Screen_444 *  screen3766 ) {
    struct RangeIter_169  temp1981 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3766 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond1984 =  next172 (&temp1981);
        if (  __cond1984 .tag == 0 ) {
            break;
        }
        int32_t  y3768 =  __cond1984 .stuff .Maybe_171_Just_s .field0;
        struct RangeIter_169  temp1985 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3766 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_171  __cond1986 =  next172 (&temp1985);
            if (  __cond1986 .tag == 0 ) {
                break;
            }
            int32_t  x3770 =  __cond1986 .stuff .Maybe_171_Just_s .field0;
            struct Cell_446 *  cell3771 = ( (  or_dash_fail1987 ) ( ( (  get_dash_cell_dash_ptr1991 ) ( (  screen3766 ) ,  (  x3770 ) ,  (  y3768 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3771 ) .f_bg = ( ( * (  screen3766 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1993 {
    enum Unit_8  (*fun) (  struct env442*  ,    struct Screen_444 *  ,    struct Editor_264 *  );
    struct env442 env;
};

struct IntStrIter_1998 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1998   into_dash_iter2000 (    struct IntStrIter_1998  self1396 ) {
    return (  self1396 );
}

struct env2004 {
    int32_t  base1386;
    ;
};

struct envunion2005 {
    int32_t  (*fun) (  struct env2004*  ,    int32_t  ,    int32_t  );
    struct env2004 env;
};

static  int32_t   reduce2003 (    struct Range_166  iterable1118 ,    int32_t  base1120 ,   struct envunion2005  fun1122 ) {
    int32_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion2005  temp2006 = (  fun1122 );
                x1123 = ( temp2006.fun ( &temp2006.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2007 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2007);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp2008;
    return (  temp2008 );
}

static  int32_t   lam2009 (   struct env2004* env ,    int32_t  item1390 ,    int32_t  x1392 ) {
    return (  op_dash_mul1593 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  int32_t   pow2002 (    int32_t  base1386 ,    int32_t  p1388 ) {
    struct env2004 envinst2004 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce2003 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion2005){ .fun = (  int32_t  (*) (  struct env2004*  ,    int32_t  ,    int32_t  ) )lam2009 , .env =  envinst2004 } ) ) );
}

static  struct Maybe_348   next2001 (    struct IntStrIter_1998 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_348_Just ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    int32_t  trim_dash_down1400 = ( (  pow2002 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1401 = (  op_dash_div1592 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    int32_t  upper_dash_mask1402 = (  op_dash_mul1593 ( (  op_dash_div1592 ( (  upper1401 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast464 ) ( (  op_dash_sub180 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81174 ) ( (  op_dash_add1064 ( (  digit1403 ) , (  from_dash_integral325 ( 48 ) ) ) ) ) );
    return ( ( Maybe_348_Just ) ( (  digit_dash_char1404 ) ) );
}

static  size_t   reduce1999 (    struct IntStrIter_1998  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct IntStrIter_1998  it1124 = ( (  into_dash_iter2000 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next2001 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2010 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2010);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2011;
    return (  temp2011 );
}

static  size_t   lam2012 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add353 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1997 (    struct IntStrIter_1998  it1129 ) {
    return ( (  reduce1999 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2012 ) ) );
}

static  int32_t   count_dash_digits2015 (    int32_t  self1407 ) {
    if ( (  eq693 ( (  self1407 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp173 ( (  self1407 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div1592 ( (  self1407 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_1998   int_dash_iter2014 (    int32_t  int1411 ) {
    if ( (  cmp173 ( (  int1411 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1998) { .f_int = (  op_dash_neg846 ( (  int1411 ) ) ) , .f_len = ( (  count_dash_digits2015 ) ( (  op_dash_neg846 ( (  int1411 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1998) { .f_int = (  int1411 ) , .f_len = ( (  count_dash_digits2015 ) ( (  int1411 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1998   chars2013 (    int32_t  self1420 ) {
    return ( (  int_dash_iter2014 ) ( (  self1420 ) ) );
}

static  int32_t   screen_dash_width2017 (    struct ScreenDims_447  sd4373 ) {
    return (  op_dash_add175 ( (  op_dash_sub180 ( ( (  sd4373 ) .f_to_dash_sx ) , ( (  sd4373 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height2018 (    struct ScreenDims_447  sd4376 ) {
    return (  op_dash_add175 ( (  op_dash_sub180 ( ( (  sd4376 ) .f_to_dash_sy ) , ( (  sd4376 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset2016 (    struct Pane_238 *  pane4379 ,    struct ScreenDims_447  sd4381 ) {
    struct Pos_26  cur4382 = ( ( * (  pane4379 ) ) .f_cursor );
    int32_t  cur_dash_sx4383 = ( (  pos_dash_vi288 ) ( ( ( * (  pane4379 ) ) .f_buf ) ,  (  cur4382 ) ) );
    struct ScreenCursorOffset_240  sc_dash_off4384 = ( ( * (  pane4379 ) ) .f_sc_dash_off );
    int32_t  sw4385 = (  op_dash_sub180 ( ( (  screen_dash_width2017 ) ( (  sd4381 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh4386 = (  op_dash_sub180 ( ( (  screen_dash_height2018 ) ( (  sd4381 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin4387 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4388 = ( (  pos_dash_vi288 ) ( ( ( * (  pane4379 ) ) .f_buf ) ,  (  cur4382 ) ) );
    int32_t  csx4389 = (  op_dash_sub180 ( (  csi4388 ) , ( (  sc_dash_off4384 ) .f_screen_dash_left ) ) );
    int32_t  csy4390 = (  op_dash_sub180 ( ( (  cur4382 ) .f_line ) , ( (  sc_dash_off4384 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4391 = ( (  sc_dash_off4384 ) .f_screen_dash_left );
    if ( (  cmp173 ( (  csx4389 ) , (  margin4387 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4391 = (  op_dash_sub180 ( (  csi4388 ) , (  margin4387 ) ) );
    } else {
        if ( (  cmp173 ( (  csx4389 ) , (  op_dash_sub180 ( (  sw4385 ) , (  margin4387 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4391 = (  op_dash_sub180 ( (  csi4388 ) , (  op_dash_sub180 ( (  sw4385 ) , (  margin4387 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4392 = ( (  max371 ) ( (  nu_dash_screen_dash_left4391 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4393 = ( (  sc_dash_off4384 ) .f_screen_dash_top );
    if ( (  cmp173 ( (  csy4390 ) , (  margin4387 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4393 = (  op_dash_sub180 ( ( (  cur4382 ) .f_line ) , (  margin4387 ) ) );
    } else {
        if ( (  cmp173 ( (  csy4390 ) , (  op_dash_sub180 ( (  sh4386 ) , (  margin4387 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4393 = (  op_dash_sub180 ( ( (  cur4382 ) .f_line ) , (  op_dash_sub180 ( (  sh4386 ) , (  margin4387 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4394 = ( (  max371 ) ( (  nu_dash_screen_dash_top4393 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane4379 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_240) { .f_screen_dash_top = (  nu_dash_screen_dash_top4394 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4392 ) } );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_colors2023 (    struct Screen_444 *  screen3746 ,    struct Color_154  fg3748 ,    struct Color_154  bg3750 ) {
    (*  screen3746 ) .f_default_dash_fg = (  fg3748 );
    (*  screen3746 ) .f_default_dash_bg = (  bg3750 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors2022 (    struct Screen_444 *  screen4397 ,    struct Colors_189  colors4399 ) {
    ( (  set_dash_screen_dash_colors2023 ) ( (  screen4397 ) ,  ( (  colors4399 ) .f_fg ) ,  ( (  colors4399 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   abs2024 (    int32_t  x1639 ) {
    return ( (  cmp173 ( (  x1639 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ? (  x1639 ) : (  op_dash_neg846 ( (  x1639 ) ) ) );
}

struct Map_2027 {
    struct IntStrIter_1998  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_2027 Map_2027_Map (  struct IntStrIter_1998  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_2027 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_2027   into_dash_iter2029 (    struct Map_2027  self804 ) {
    return (  self804 );
}

static  struct Maybe_171   next2030 (    struct Map_2027 *  dref806 ) {
    struct Maybe_348  dref809 = ( (  next2001 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_348_None_t ) {
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_348_Just_t ) {
            return ( ( Maybe_171_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce2028 (    struct Map_2027  iterable1118 ,    int32_t  base1120 ,    int32_t (*  fun1122 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1123 = (  base1120 );
    struct Map_2027  it1124 = ( (  into_dash_iter2029 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next2030 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2031 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2031);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp2032;
    return (  temp2032 );
}

static  int32_t   lam2033 (    int32_t  v1137 ,    int32_t  s1139 ) {
    return (  op_dash_add175 ( (  v1137 ) , (  s1139 ) ) );
}

static  int32_t   sum2026 (    struct Map_2027  it1135 ) {
    return ( (  reduce2028 ) ( (  it1135 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam2033 ) ) );
}

static  struct Map_2027   map2034 (    struct IntStrIter_1998  iterable813 ,    int32_t (*  fun815 )(    struct Char_65  ) ) {
    struct IntStrIter_1998  it816 = ( (  into_dash_iter2000 ) ( (  iterable813 ) ) );
    return ( ( Map_2027_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  enum Unit_8   put_dash_char2038 (    struct Screen_444 *  screen3774 ,    struct Char_65  c3776 ,    int32_t  x3778 ,    int32_t  y3780 ) {
    int32_t  w3781 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3774 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp173 ( (  x3778 ) , (  w3781 ) ) != 0 ) || (  cmp173 ( (  y3780 ) , ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3774 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp173 ( (  x3778 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp173 ( (  y3780 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3782 = ( (  i32_dash_size277 ) ( (  op_dash_add175 ( (  op_dash_mul1593 ( (  y3780 ) , (  w3781 ) ) ) , (  x3778 ) ) ) ) );
    struct Color_154  fg3783 = ( ( * (  screen3774 ) ) .f_default_dash_fg );
    struct Color_154  bg3784 = ( ( * (  screen3774 ) ) .f_default_dash_bg );
    struct Char_65  c3785 = (  c3776 );
    int32_t  char_dash_width3786 = ( (  wcwidth372 ) ( (  c3785 ) ) );
    if ( ( (  cmp173 ( (  x3778 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp173 ( ( (  elem_dash_get987 ( ( ( * (  screen3774 ) ) .f_current ) , (  op_dash_sub455 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_446  pc3787 = (  elem_dash_get987 ( ( ( * (  screen3774 ) ) .f_current ) , (  op_dash_sub455 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set983 ) ( ( ( * (  screen3774 ) ) .f_current ) ,  (  op_dash_sub455 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_446) { .f_c = ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3787 ) .f_fg ) , .f_bg = ( (  pc3787 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set983 ) ( ( ( * (  screen3774 ) ) .f_current ) ,  (  i3782 ) ,  ( (struct Cell_446) { .f_c = (  c3785 ) , .f_fg = (  fg3783 ) , .f_bg = (  bg3784 ) , .f_char_dash_width = (  char_dash_width3786 ) } ) ) );
    struct RangeIter_169  temp2039 =  into_dash_iter170 ( ( (  to179 ) ( (  op_dash_add175 ( (  x3778 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min790 ) ( (  op_dash_sub180 ( (  op_dash_add175 ( (  x3778 ) , (  char_dash_width3786 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3781 ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond2040 =  next172 (&temp2039);
        if (  __cond2040 .tag == 0 ) {
            break;
        }
        int32_t  xx3789 =  __cond2040 .stuff .Maybe_171_Just_s .field0;
        size_t  i3790 = ( (  i32_dash_size277 ) ( (  op_dash_add175 ( (  op_dash_mul1593 ( (  y3780 ) , (  w3781 ) ) ) , (  xx3789 ) ) ) ) );
        ( (  set983 ) ( ( ( * (  screen3774 ) ) .f_current ) ,  (  i3790 ) ,  ( (struct Cell_446) { .f_c = ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = (  fg3783 ) , .f_bg = (  bg3784 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str2035 (    struct Screen_444 *  screen3793 ,    int32_t  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1593 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min790 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size277 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_1998  temp2036 =  into_dash_iter2000 ( ( (  chars2013 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_348  __cond2037 =  next2001 (&temp2036);
        if (  __cond2037 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2037 .stuff .Maybe_348_Just_s .field0;
        ( (  put_dash_char2038 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth370 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right2025 (    struct Screen_444 *  screen3809 ,    int32_t  s3811 ,    int32_t  x3813 ,    int32_t  y3815 ) {
    int32_t  slen3816 = ( (  sum2026 ) ( ( (  map2034 ) ( ( (  chars2013 ) ( (  s3811 ) ) ) ,  (  rendered_dash_wcwidth370 ) ) ) ) );
    int32_t  w3817 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3809 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3818 = (  op_dash_sub180 ( (  op_dash_sub180 ( (  w3817 ) , (  x3813 ) ) ) , (  slen3816 ) ) );
    ( (  draw_dash_str2035 ) ( (  screen3809 ) ,  (  s3811 ) ,  (  x3818 ) ,  (  y3815 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2042 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct StrConcat_2042 StrConcat_2042_StrConcat (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_2042 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2045 {
    struct StrView_27  field0;
    struct StrConcat_2042  field1;
};

static struct StrConcat_2045 StrConcat_2045_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_2042  field1 ) {
    return ( struct StrConcat_2045 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2044 {
    struct StrConcat_2045  field0;
    struct Char_65  field1;
};

static struct StrConcat_2044 StrConcat_2044_StrConcat (  struct StrConcat_2045  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2044 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2047 (    struct StrConcat_2042  self1302 ) {
    struct StrConcat_2042  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str307 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str515 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2046 (    struct StrConcat_2045  self1302 ) {
    struct StrConcat_2045  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str307 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str2047 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2043 (    struct StrConcat_2044  self1302 ) {
    struct StrConcat_2044  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str2046 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert2041 (    bool  cond1346 ,    struct StrConcat_2042  msg1348 ) {
    if ( ( ! (  cond1346 ) ) ) {
        ( (  print_dash_str2043 ) ( ( ( StrConcat_2044_StrConcat ) ( ( ( StrConcat_2045_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1348 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_2049 {
    struct StrViewIter_290  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_2049   into_dash_iter2050 (    struct AppendIter_2049  self1044 ) {
    return (  self1044 );
}

static  struct AppendIter_2049   append2051 (    struct StrViewIter_290  it1031 ,    struct Char_65  e1033 ) {
    return ( (struct AppendIter_2049) { .f_it = ( (  into_dash_iter291 ) ( (  it1031 ) ) ) , .f_elem = (  e1033 ) , .f_appended = ( false ) } );
}

static  struct Maybe_348   next2053 (    struct AppendIter_2049 *  self1047 ) {
    struct Maybe_348  dref1048 = ( (  next349 ) ( ( & ( ( * (  self1047 ) ) .f_it ) ) ) );
    if ( dref1048.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1048 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1048.tag == Maybe_348_None_t ) {
            if ( ( ! ( ( * (  self1047 ) ) .f_appended ) ) ) {
                (*  self1047 ) .f_appended = ( true );
                return ( ( Maybe_348_Just ) ( ( ( * (  self1047 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   between2055 (    struct Pos_26  c1377 ,    struct Pos_26  l1379 ,    struct Pos_26  r1381 ) {
    struct Pos_26  from1382 = ( (  min689 ) ( (  l1379 ) ,  (  r1381 ) ) );
    struct Pos_26  to1383 = ( (  max691 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp690 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp690 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection2054 (    struct Pane_238 *  pane4365 ,    struct Pos_26  pos4367 ) {
    return ( {  struct Maybe_34  dref4368 = ( ( * (  pane4365 ) ) .f_sel ) ; dref4368.tag == Maybe_34_Just_t ? ( (  between2055 ) ( (  pos4367 ) ,  ( ( * (  pane4365 ) ) .f_cursor ) ,  ( dref4368 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env2057 {
    ;
    struct Screen_444 *  screen4402;
    struct Theme_188 *  theme4409;
    ;
};

struct envunion2058 {
    enum Unit_8  (*fun) (  struct env2057*  ,    enum HighlightType_18  );
    struct env2057 env;
};

static  enum Unit_8   if_dash_just2056 (    struct Maybe_221  x1601 ,   struct envunion2058  fun1603 ) {
    struct Maybe_221  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_221_Just_t ) {
        struct envunion2058  temp2059 = (  fun1603 );
        ( temp2059.fun ( &temp2059.env ,  ( dref1604 .stuff .Maybe_221_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_221_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim2064 (    struct List_15 *  l2530 ,    size_t  new_dash_count2532 ) {
    (*  l2530 ) .f_count = ( (  min584 ) ( (  new_dash_count2532 ) ,  ( ( * (  l2530 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_348   head2069 (    struct Scanner_1086 *  it1167 ) {
    struct Scanner_1086  temp2070 = ( (  into_dash_iter1102 ) ( (  it1167 ) ) );
    return ( (  next1111 ) ( ( &temp2070 ) ) );
}

static  bool   null2068 (    struct Scanner_1086 *  it1176 ) {
    struct Maybe_348  dref1177 = ( (  head2069 ) ( (  it1176 ) ) );
    if ( dref1177.tag == Maybe_348_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_348   peek2071 (    struct Scanner_1086 *  sc3421 ) {
    return ( (  head1405 ) ( ( ( * (  sc3421 ) ) .f_s ) ) );
}

static  bool   eq2073 (    struct Maybe_348  l150 ,    struct Maybe_348  r152 ) {
    struct Tuple2_1838  dref153 = ( ( Tuple2_1838_Tuple2 ) ( (  l150 ) ,  (  r152 ) ) );
    if ( dref153 .field0.tag == Maybe_348_None_t && dref153 .field1.tag == Maybe_348_None_t ) {
        return ( true );
    }
    else {
        if ( dref153 .field0.tag == Maybe_348_Just_t && dref153 .field1.tag == Maybe_348_Just_t ) {
            return (  eq357 ( ( dref153 .field0 .stuff .Maybe_348_Just_s .field0 ) , ( dref153 .field1 .stuff .Maybe_348_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char2072 (    struct Scanner_1086 *  sc3424 ,    struct Char_65  char3426 ) {
    if ( (  eq2073 ( ( (  peek2071 ) ( (  sc3424 ) ) ) , ( ( Maybe_348_Just ) ( (  char3426 ) ) ) ) ) ) {
        ( (  drop_prime_1114 ) ( (  sc3424 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   is_dash_just2076 (    struct Maybe_348  m1570 ) {
    struct Maybe_348  dref1571 = (  m1570 );
    if ( dref1571.tag == Maybe_348_None_t ) {
        return ( false );
    }
    else {
        if ( dref1571.tag == Maybe_348_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_348   char_dash_satisfies_prime_2077 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2075 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2077 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2074 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2075 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2078 (    struct Char_65  c3889 ) {
    return ( !  eq357 ( (  c3889 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ) );
}

struct TypeSize_2085 {
    size_t  f_size;
};

static  struct TypeSize_2085   get_dash_typesize2084 (  ) {
    struct Highlight_17  temp2086;
    return ( (struct TypeSize_2085) { .f_size = ( sizeof( ( (  temp2086 ) ) ) ) } );
}

static  struct Highlight_17 *   cast_dash_ptr2087 (    void *  p398 ) {
    return ( (struct Highlight_17 * ) (  p398 ) );
}

static  struct Slice_16   allocate2083 (    enum CAllocator_10  dref2367 ,    size_t  count2369 ) {
    if (!(  dref2367 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2370 = ( ( ( (  get_dash_typesize2084 ) ( ) ) ) .f_size );
    struct Highlight_17 *  ptr2371 = ( (  cast_dash_ptr2087 ) ( ( ( malloc ) ( (  op_dash_mul528 ( (  size2370 ) , (  count2369 ) ) ) ) ) ) );
    return ( (struct Slice_16) { .f_ptr = (  ptr2371 ) , .f_count = (  count2369 ) } );
}

struct env2088 {
    ;
    ;
    struct Slice_16  new_dash_slice2453;
};

struct Tuple2_2090 {
    struct Highlight_17  field0;
    int32_t  field1;
};

static struct Tuple2_2090 Tuple2_2090_Tuple2 (  struct Highlight_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2090 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2089 {
    enum Unit_8  (*fun) (  struct env2088*  ,    struct Tuple2_2090  );
    struct env2088 env;
};

static  struct Highlight_17 *   offset_dash_ptr2094 (    struct Highlight_17 *  x377 ,    int64_t  count379 ) {
    struct Highlight_17  temp2095;
    return ( (struct Highlight_17 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2095 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_17 *   get_dash_ptr2093 (    struct Slice_16  slice2170 ,    size_t  i2172 ) {
    if ( ( (  cmp299 ( (  i2172 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2172 ) , ( (  slice2170 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic300 ) ( ( ( StrConcat_301_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2172 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2170 ) .f_count ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_17 *  elem_dash_ptr2173 = ( (  offset_dash_ptr2094 ) ( ( (  slice2170 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  i2172 ) ) ) ) );
    return (  elem_dash_ptr2173 );
}

static  enum Unit_8   set2092 (    struct Slice_16  slice2187 ,    size_t  i2189 ,    struct Highlight_17  x2191 ) {
    struct Highlight_17 *  ep2192 = ( (  get_dash_ptr2093 ) ( (  slice2187 ) ,  (  i2189 ) ) );
    (*  ep2192 ) = (  x2191 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2091 (   struct env2088* env ,    struct Tuple2_2090  dref2454 ) {
    return ( (  set2092 ) ( ( env->new_dash_slice2453 ) ,  ( (  i32_dash_size277 ) ( ( dref2454 .field1 ) ) ) ,  ( dref2454 .field0 ) ) );
}

struct SliceIter_2098 {
    struct Slice_16  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2097 {
    struct SliceIter_2098  f_left_dash_it;
    struct FromIter_537  f_right_dash_it;
};

static  struct Zip_2097   into_dash_iter2100 (    struct Zip_2097  self936 ) {
    return (  self936 );
}

struct Maybe_2101 {
    enum {
        Maybe_2101_None_t,
        Maybe_2101_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2090  field0;
        } Maybe_2101_Just_s;
    } stuff;
};

static struct Maybe_2101 Maybe_2101_Just (  struct Tuple2_2090  field0 ) {
    return ( struct Maybe_2101 ) { .tag = Maybe_2101_Just_t, .stuff = { .Maybe_2101_Just_s = { .field0 = field0 } } };
};

struct Maybe_2103 {
    enum {
        Maybe_2103_None_t,
        Maybe_2103_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_17  field0;
        } Maybe_2103_Just_s;
    } stuff;
};

static struct Maybe_2103 Maybe_2103_Just (  struct Highlight_17  field0 ) {
    return ( struct Maybe_2103 ) { .tag = Maybe_2103_Just_t, .stuff = { .Maybe_2103_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2103   next2104 (    struct SliceIter_2098 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2103) { .tag = Maybe_2103_None_t } );
    }
    struct Highlight_17  elem2258 = ( * ( (  offset_dash_ptr2094 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2103_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2101   next2102 (    struct Zip_2097 *  self939 ) {
    struct Zip_2097  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_2103  dref941 = ( (  next2104 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_2103_None_t ) {
            return ( (struct Maybe_2101) { .tag = Maybe_2101_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_2103_Just_t ) {
                struct Maybe_171  dref943 = ( (  next543 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_2101) { .tag = Maybe_2101_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next2104 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2101_Just ) ( ( ( Tuple2_2090_Tuple2 ) ( ( dref941 .stuff .Maybe_2103_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2096 (    struct Zip_2097  iterable1099 ,   struct envunion2089  fun1101 ) {
    struct Zip_2097  temp2099 = ( (  into_dash_iter2100 ) ( (  iterable1099 ) ) );
    struct Zip_2097 *  it1102 = ( &temp2099 );
    while ( ( true ) ) {
        struct Maybe_2101  dref1103 = ( (  next2102 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_2101_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_2101_Just_t ) {
                struct envunion2089  temp2105 = (  fun1101 );
                ( temp2105.fun ( &temp2105.env ,  ( dref1103 .stuff .Maybe_2101_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2098   into_dash_iter2107 (    struct Slice_16  self2250 ) {
    return ( (struct SliceIter_2098) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2097   zip2106 (    struct Slice_16  left947 ,    struct FromIter_537  right949 ) {
    struct SliceIter_2098  left_dash_it950 = ( (  into_dash_iter2107 ) ( (  left947 ) ) );
    struct FromIter_537  right_dash_it951 = ( (  into_dash_iter547 ) ( (  right949 ) ) );
    return ( (struct Zip_2097) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  void *   cast_dash_ptr2109 (    struct Highlight_17 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free2108 (    enum CAllocator_10  dref2373 ,    struct Slice_16  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2109 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full2082 (   struct env5* env ,    struct List_15 *  list2452 ) {
    if ( (  eq280 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2452 ) .f_elements = ( (  allocate2083 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( env->starting_dash_size2447 ) ) );
    } else {
        if ( (  eq280 ( ( ( * (  list2452 ) ) .f_count ) , ( ( ( * (  list2452 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_16  new_dash_slice2453 = ( (  allocate2083 ) ( ( ( * (  list2452 ) ) .f_al ) ,  (  op_dash_mul528 ( ( ( * (  list2452 ) ) .f_count ) , ( env->growth_dash_factor2448 ) ) ) ) );
            struct env2088 envinst2088 = {
                .new_dash_slice2453 =  new_dash_slice2453 ,
            };
            struct envunion2089  fun2457 = ( (struct envunion2089){ .fun = (  enum Unit_8  (*) (  struct env2088*  ,    struct Tuple2_2090  ) )lam2091 , .env =  envinst2088 } );
            ( (  for_dash_each2096 ) ( ( (  zip2106 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2457 ) ) );
            ( (  free2108 ) ( ( ( * (  list2452 ) ) .f_al ) ,  ( ( * (  list2452 ) ) .f_elements ) ) );
            (*  list2452 ) .f_elements = (  new_dash_slice2453 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add2080 (   struct env35* env ,    struct List_15 *  list2460 ,    struct Highlight_17  elem2462 ) {
    struct envunion36  temp2081 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_15 *  ) )grow_dash_if_dash_full2082 , .env =  env->envinst5 } );
    ( temp2081.fun ( &temp2081.env ,  (  list2460 ) ) );
    ( (  set2092 ) ( ( ( * (  list2460 ) ) .f_elements ) ,  ( ( * (  list2460 ) ) .f_count ) ,  (  elem2462 ) ) );
    (*  list2460 ) .f_count = (  op_dash_add353 ( ( ( * (  list2460 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2111 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_348   char_dash_satisfies_prime_2114 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2113 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2114 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2112 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2113 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2115 (    struct Char_65  c3892 ) {
    return ( ( !  eq357 ( (  c3892 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) && ( !  eq357 ( (  c3892 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2117 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_348   char_dash_satisfies_prime_2119 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2118 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2119 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  struct Maybe_348   char_dash_satisfies_prime_2122 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2121 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2122 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2120 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2121 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2123 (    struct Char_65  c3895 ) {
    return ( (  eq1397 ( ( (  char_dash_type1400 ) ( (  c3895 ) ) ) , ( CharType_1398_CharWord ) ) ) || (  eq357 ( (  c3895 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2125 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct env2127 {
    struct Scanner_1086 *  sc3885;
    ;
};

struct envunion2128 {
    bool  (*fun) (  struct env2127*  ,    struct StrView_27  );
    struct env2127 env;
};

struct env2130 {
    struct envunion2128  fun1160;
};

struct envunion2131 {
    bool  (*fun) (  struct env2130*  ,    struct StrView_27  ,    bool  );
    struct env2130 env;
};

static  bool   reduce2129 (    struct Array_595  iterable1118 ,    bool  base1120 ,   struct envunion2131  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_602  it1124 = ( (  into_dash_iter603 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_79  dref1125 = ( (  next604 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_79_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_79_Just_t ) {
                struct envunion2131  temp2132 = (  fun1122 );
                x1123 = ( temp2132.fun ( &temp2132.env ,  ( dref1125 .stuff .Maybe_79_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2133 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2133);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2134;
    return (  temp2134 );
}

static  bool   lam2135 (   struct env2130* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2128  temp2136 = ( env->fun1160 );
    return ( ( temp2136.fun ( &temp2136.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2126 (    struct Array_595  it1158 ,   struct envunion2128  fun1160 ) {
    struct env2130 envinst2130 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2129 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2131){ .fun = (  bool  (*) (  struct env2130*  ,    struct StrView_27  ,    bool  ) )lam2135 , .env =  envinst2130 } ) ) );
}

static  struct StrViewIter_290   own2142 (    struct StrViewIter_290  x1561 ) {
    return (  x1561 );
}

static  bool   matches_dash_str2139 (    struct Scanner_1086 *  sc3441 ,    struct StrView_27  s3443 ) {
    size_t  skip3444 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_290  temp2140 = ( (  chars292 ) ( (  s3443 ) ) );
    struct StrViewIter_290 *  ss3445 = ( &temp2140 );
    struct StrViewIter_290  temp2141 = ( (  own2142 ) ( ( ( * (  sc3441 ) ) .f_s ) ) );
    struct StrViewIter_290 *  sccp3446 = ( &temp2141 );
    while ( ( true ) ) {
        struct Tuple2_1838  dref3447 = ( ( Tuple2_1838_Tuple2 ) ( ( (  next349 ) ( (  sccp3446 ) ) ) ,  ( (  next349 ) ( (  ss3445 ) ) ) ) );
        if ( dref3447 .field1.tag == Maybe_348_None_t ) {
            ( (  drop_prime_1114 ) ( (  sc3441 ) ,  (  skip3444 ) ) );
            return ( true );
        }
        else {
            if ( dref3447 .field0.tag == Maybe_348_Just_t && dref3447 .field1.tag == Maybe_348_Just_t ) {
                if ( ( !  eq357 ( ( dref3447 .field0 .stuff .Maybe_348_Just_s .field0 ) , ( dref3447 .field1 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3444 = (  op_dash_add353 ( (  skip3444 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2138 (   struct env2127* env ,    struct StrView_27  sym3898 ) {
    return ( (  matches_dash_str2139 ) ( ( env->sc3885 ) ,  (  sym3898 ) ) );
}

struct envunion2144 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_2146 {
    struct StrView_27 _arr [12];
};

struct env2147 {
    struct Scanner_1086 *  sc3885;
    ;
};

struct envunion2148 {
    bool  (*fun) (  struct env2147*  ,    struct StrView_27  );
    struct env2147 env;
};

struct env2150 {
    struct envunion2148  fun1160;
};

struct envunion2151 {
    bool  (*fun) (  struct env2150*  ,    struct StrView_27  ,    bool  );
    struct env2150 env;
};

struct ArrayIter_2152 {
    struct Array_2146  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2152   into_dash_iter2153 (    struct Array_2146  self2102 ) {
    return ( (struct ArrayIter_2152) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2157 (    struct Array_2146 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   get_dash_ptr2156 (    struct Array_2146 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp299 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2029 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic506 ) ( ( ( StrConcat_507_StrConcat ) ( ( ( StrConcat_508_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr2157 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr608 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get2155 (    struct Array_2146 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2156 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_79   next2154 (    struct ArrayIter_2152 *  self2109 ) {
    if ( (  cmp299 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    struct StrView_27  e2111 = ( (  get2155 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add353 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_79_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2149 (    struct Array_2146  iterable1118 ,    bool  base1120 ,   struct envunion2151  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2152  it1124 = ( (  into_dash_iter2153 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_79  dref1125 = ( (  next2154 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_79_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_79_Just_t ) {
                struct envunion2151  temp2158 = (  fun1122 );
                x1123 = ( temp2158.fun ( &temp2158.env ,  ( dref1125 .stuff .Maybe_79_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2159 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2159);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2160;
    return (  temp2160 );
}

static  bool   lam2161 (   struct env2150* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2148  temp2162 = ( env->fun1160 );
    return ( ( temp2162.fun ( &temp2162.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2145 (    struct Array_2146  it1158 ,   struct envunion2148  fun1160 ) {
    struct env2150 envinst2150 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2149 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2151){ .fun = (  bool  (*) (  struct env2150*  ,    struct StrView_27  ,    bool  ) )lam2161 , .env =  envinst2150 } ) ) );
}

static  struct Array_2146   from_dash_listlike2163 (    struct Array_2146 *  self369 ) {
    return ( * (  self369 ) );
}

static  bool   lam2165 (   struct env2147* env ,    struct StrView_27  sym3902 ) {
    return ( (  matches_dash_str2139 ) ( ( env->sc3885 ) ,  (  sym3902 ) ) );
}

struct envunion2167 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_348   char_dash_satisfies_prime_2170 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2169 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2170 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2168 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2169 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2171 (    struct Char_65  c3906 ) {
    return ( (  eq1397 ( ( (  char_dash_type1400 ) ( (  c3906 ) ) ) , ( CharType_1398_CharWord ) ) ) || (  eq357 ( (  c3906 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2172 (    struct Maybe_348  x1592 ,    bool (*  fun1594 )(    struct Char_65  ) ,    bool  default1596 ) {
    return ( {  struct Maybe_348  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_348_Just_t ? ( (  fun1594 ) ( ( dref1597 .stuff .Maybe_348_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

static  bool   is_dash_upper2173 (    struct Char_65  c1521 ) {
    return ( (  eq280 ( ( (  c1521 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1105 ) ( (  c1521 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2174 {
    struct StrView_27 _arr [7];
};

static  struct Array_2174   from_dash_listlike2175 (    struct Array_2174 *  self369 ) {
    return ( * (  self369 ) );
}

struct Array_2177 {
    struct StrView_27 _arr [15];
};

static  struct Array_2177   from_dash_listlike2178 (    struct Array_2177 *  self369 ) {
    return ( * (  self369 ) );
}

struct env2181 {
    ;
    struct StrView_27  ident3910;
};

struct envunion2182 {
    bool  (*fun) (  struct env2181*  ,    struct StrView_27  );
    struct env2181 env;
};

struct env2184 {
    struct envunion2182  fun1160;
};

struct envunion2185 {
    bool  (*fun) (  struct env2184*  ,    struct StrView_27  ,    bool  );
    struct env2184 env;
};

struct ArrayIter_2186 {
    struct Array_2174  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2186   into_dash_iter2187 (    struct Array_2174  self2102 ) {
    return ( (struct ArrayIter_2186) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2191 (    struct Array_2174 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   get_dash_ptr2190 (    struct Array_2174 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp299 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2029 ) , ( (size_t ) ( 7 ) ) ) != 0 ) ) ) {
        ( (  panic506 ) ( ( ( StrConcat_507_StrConcat ) ( ( ( StrConcat_508_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 7 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr2191 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr608 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get2189 (    struct Array_2174 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2190 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_79   next2188 (    struct ArrayIter_2186 *  self2109 ) {
    if ( (  cmp299 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 7 ) ) ) != 0 ) ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    struct StrView_27  e2111 = ( (  get2189 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add353 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_79_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2183 (    struct Array_2174  iterable1118 ,    bool  base1120 ,   struct envunion2185  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2186  it1124 = ( (  into_dash_iter2187 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_79  dref1125 = ( (  next2188 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_79_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_79_Just_t ) {
                struct envunion2185  temp2192 = (  fun1122 );
                x1123 = ( temp2192.fun ( &temp2192.env ,  ( dref1125 .stuff .Maybe_79_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2193 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2193);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2194;
    return (  temp2194 );
}

static  bool   lam2195 (   struct env2184* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2182  temp2196 = ( env->fun1160 );
    return ( ( temp2196.fun ( &temp2196.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2180 (    struct Array_2174  it1158 ,   struct envunion2182  fun1160 ) {
    struct env2184 envinst2184 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2183 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2185){ .fun = (  bool  (*) (  struct env2184*  ,    struct StrView_27  ,    bool  ) )lam2195 , .env =  envinst2184 } ) ) );
}

static  bool   lam2197 (   struct env2181* env ,    struct StrView_27  kw3914 ) {
    return (  eq616 ( (  kw3914 ) , ( env->ident3910 ) ) );
}

struct env2199 {
    ;
    struct StrView_27  ident3910;
};

struct envunion2200 {
    bool  (*fun) (  struct env2199*  ,    struct StrView_27  );
    struct env2199 env;
};

struct env2202 {
    struct envunion2200  fun1160;
};

struct envunion2203 {
    bool  (*fun) (  struct env2202*  ,    struct StrView_27  ,    bool  );
    struct env2202 env;
};

struct ArrayIter_2204 {
    struct Array_2177  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2204   into_dash_iter2205 (    struct Array_2177  self2102 ) {
    return ( (struct ArrayIter_2204) { .f_backing = (  self2102 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2209 (    struct Array_2177 *  p398 ) {
    return ( (struct StrView_27 * ) (  p398 ) );
}

static  struct StrView_27 *   get_dash_ptr2208 (    struct Array_2177 *  arr2026 ,    size_t  i2029 ) {
    if ( ( (  cmp299 ( (  i2029 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2029 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic506 ) ( ( ( StrConcat_507_StrConcat ) ( ( ( StrConcat_508_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2029 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2030 = ( ( (  cast_dash_ptr2209 ) ( (  arr2026 ) ) ) );
    return ( (  offset_dash_ptr608 ) ( (  p2030 ) ,  ( (int64_t ) (  i2029 ) ) ) );
}

static  struct StrView_27   get2207 (    struct Array_2177 *  arr2033 ,    size_t  i2036 ) {
    return ( * ( (  get_dash_ptr2208 ) ( (  arr2033 ) ,  (  i2036 ) ) ) );
}

static  struct Maybe_79   next2206 (    struct ArrayIter_2204 *  self2109 ) {
    if ( (  cmp299 ( ( ( * (  self2109 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    struct StrView_27  e2111 = ( (  get2207 ) ( ( & ( ( * (  self2109 ) ) .f_backing ) ) ,  ( ( * (  self2109 ) ) .f_cur ) ) );
    (*  self2109 ) .f_cur = (  op_dash_add353 ( ( ( * (  self2109 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_79_Just ) ( (  e2111 ) ) );
}

static  bool   reduce2201 (    struct Array_2177  iterable1118 ,    bool  base1120 ,   struct envunion2203  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct ArrayIter_2204  it1124 = ( (  into_dash_iter2205 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_79  dref1125 = ( (  next2206 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_79_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_79_Just_t ) {
                struct envunion2203  temp2210 = (  fun1122 );
                x1123 = ( temp2210.fun ( &temp2210.env ,  ( dref1125 .stuff .Maybe_79_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2211 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2211);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2212;
    return (  temp2212 );
}

static  bool   lam2213 (   struct env2202* env ,    struct StrView_27  e1162 ,    bool  x1164 ) {
    struct envunion2200  temp2214 = ( env->fun1160 );
    return ( ( temp2214.fun ( &temp2214.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2198 (    struct Array_2177  it1158 ,   struct envunion2200  fun1160 ) {
    struct env2202 envinst2202 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2201 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2203){ .fun = (  bool  (*) (  struct env2202*  ,    struct StrView_27  ,    bool  ) )lam2213 , .env =  envinst2202 } ) ) );
}

static  bool   lam2215 (   struct env2199* env ,    struct StrView_27  kw3916 ) {
    return (  eq616 ( (  kw3916 ) , ( env->ident3910 ) ) );
}

struct envunion2217 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_1098   int2218 (    struct Scanner_1086 *  sc3415 ) {
    return ( (  scan_dash_int1099 ) ( (  sc3415 ) ) );
}

static  struct Maybe_348   char_dash_satisfies_prime_2221 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2220 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2221 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2219 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2220 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2222 (    struct Char_65  c1509 ) {
    return ( (  eq280 ( ( (  c1509 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1104 ) ( (  c1509 ) ) ) || ( (  between1105 ) ( (  c1509 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1105 ) ( (  c1509 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2224 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2225 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2118 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2227 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_348   char_dash_satisfies_prime_2230 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2229 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2230 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2228 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2229 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2231 (    struct Char_65  c1515 ) {
    return ( (  eq280 ( ( (  c1515 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1105 ) ( (  c1515 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2233 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_348   char_dash_satisfies_prime_2236 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2235 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2236 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2234 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2235 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2238 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_348   char_dash_satisfies_prime_2241 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2240 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2241 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2239 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2240 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2242 (    struct Char_65  c1512 ) {
    return ( (  eq280 ( ( (  c1512 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq357 ( (  c1512 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) || (  eq357 ( (  c1512 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2244 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2246 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2248 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2250 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   kc2066 (   struct env101* env ,    struct List_15 *  hls3882 ,    struct StrView_27  line_dash_sv3884 ) {
    struct Scanner_1086  temp2067 = ( (  mk_dash_from_dash_str1088 ) ( (  line_dash_sv3884 ) ) );
    struct Scanner_1086 *  sc3885 = ( &temp2067 );
    while ( ( ! ( (  null2068 ) ( (  sc3885 ) ) ) ) ) {
        int32_t  from_dash_off3886 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
        struct Maybe_348  first_dash_char3887 = ( (  peek2071 ) ( (  sc3885 ) ) );
        if ( ( (  try_dash_char2072 ) ( (  sc3885 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
            if ( ( (  try_dash_char2072 ) ( (  sc3885 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  skip_dash_while2074 ) ( (  sc3885 ) ,  (  lam2078 ) ) );
                ( (  drop_prime_1114 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                int32_t  to_dash_off3890 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                struct envunion102  temp2079 = ( (struct envunion102){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                ( temp2079.fun ( &temp2079.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( (  line_dash_sv3884 ) ) ) ) ) , .f_type = ( HighlightType_18_Special3 ) } ) ) );
            } else {
                struct envunion2111  temp2110 = ( (struct envunion2111){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                ( temp2110.fun ( &temp2110.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( (  line_dash_sv3884 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
            }
            break;
        } else {
            if ( ( (  try_dash_char2072 ) ( (  sc3885 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while2112 ) ( (  sc3885 ) ,  (  lam2115 ) ) );
                    if ( (  eq2073 ( ( (  peek2071 ) ( (  sc3885 ) ) ) , ( ( Maybe_348_Just ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                        ( (  drop_prime_1114 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        if ( (  eq2073 ( ( (  peek2071 ) ( (  sc3885 ) ) ) , ( ( Maybe_348_Just ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                            ( (  drop_prime_1114 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                        }
                    } else {
                        ( (  drop_prime_1114 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        break;
                    }
                }
                int32_t  cur_dash_off3893 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                struct envunion2117  temp2116 = ( (struct envunion2117){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                ( temp2116.fun ( &temp2116.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3893 ) , .f_type = ( HighlightType_18_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char2072 ) ( (  sc3885 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies2118 ) ( (  sc3885 ) ,  (  is_dash_alpha1402 ) ) ) ) {
                        ( (  skip_dash_while2120 ) ( (  sc3885 ) ,  (  lam2123 ) ) );
                        int32_t  cur_dash_off3896 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2125  temp2124 = ( (struct envunion2125){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                        ( temp2124.fun ( &temp2124.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3896 ) , .f_type = ( HighlightType_18_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct Array_595  temp2137 = ( (struct Array_595) { ._arr = { ( (  from_dash_string217 ) ( ( (uint8_t*)"==" ) ,  ( 2 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"/=" ) ,  ( 2 ) ) ) } } );
                    struct env2127 envinst2127 = {
                        .sc3885 =  sc3885 ,
                    };
                    if ( ( (  any2126 ) ( ( (  from_dash_listlike636 ) ( ( &temp2137 ) ) ) ,  ( (struct envunion2128){ .fun = (  bool  (*) (  struct env2127*  ,    struct StrView_27  ) )lam2138 , .env =  envinst2127 } ) ) ) ) {
                        int32_t  cur_dash_off3899 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_18  type3900 = ( HighlightType_18_Special2 );
                        struct envunion2144  temp2143 = ( (struct envunion2144){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                        ( temp2143.fun ( &temp2143.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3899 ) , .f_type = (  type3900 ) } ) ) );
                    } else {
                        struct Array_2146  temp2164 = ( (struct Array_2146) { ._arr = { ( (  from_dash_string217 ) ( ( (uint8_t*)"<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike639 ) ( ( (uint8_t*)"=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"&" ) ,  ( 1 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike639 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) } } );
                        struct env2147 envinst2147 = {
                            .sc3885 =  sc3885 ,
                        };
                        if ( ( (  any2145 ) ( ( (  from_dash_listlike2163 ) ( ( &temp2164 ) ) ) ,  ( (struct envunion2148){ .fun = (  bool  (*) (  struct env2147*  ,    struct StrView_27  ) )lam2165 , .env =  envinst2147 } ) ) ) ) {
                            int32_t  cur_dash_off3903 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_18  type3904 = ( HighlightType_18_Special1 );
                            struct envunion2167  temp2166 = ( (struct envunion2167){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                            ( temp2166.fun ( &temp2166.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3903 ) , .f_type = (  type3904 ) } ) ) );
                        } else {
                            if ( ( (  char_dash_satisfies2118 ) ( (  sc3885 ) ,  (  is_dash_alpha1402 ) ) ) ) {
                                ( (  skip_dash_while2168 ) ( (  sc3885 ) ,  (  lam2171 ) ) );
                                int32_t  cur_dash_off3907 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                bool  first_dash_char_dash_uppercase3908 = ( (  maybe2172 ) ( (  first_dash_char3887 ) ,  (  is_dash_upper2173 ) ,  ( false ) ) );
                                enum HighlightType_18  type3909 = ( (  first_dash_char_dash_uppercase3908 ) ? ( HighlightType_18_Ident2 ) : ( HighlightType_18_Ident1 ) );
                                struct StrView_27  ident3910 = ( ( (  byte_dash_substr593 ) ( (  line_dash_sv3884 ) ,  ( (  i32_dash_size277 ) ( (  from_dash_off3886 ) ) ) ,  ( (  i32_dash_size277 ) ( (  cur_dash_off3907 ) ) ) ) ) );
                                struct Array_2174  temp2176 = ( (struct Array_2174) { ._arr = { ( (  from_dash_string217 ) ( ( (uint8_t*)"fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"class" ) ,  ( 5 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"external" ) ,  ( 8 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"use" ) ,  ( 3 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"export" ) ,  ( 6 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"let" ) ,  ( 3 ) ) ) } } );
                                struct Array_2174  keywords13911 = ( (  from_dash_listlike2175 ) ( ( &temp2176 ) ) );
                                struct Array_2177  temp2179 = ( (struct Array_2177) { ._arr = { ( (  from_dash_string217 ) ( ( (uint8_t*)"if" ) ,  ( 2 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"else" ) ,  ( 4 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"case" ) ,  ( 4 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"for" ) ,  ( 3 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"in" ) ,  ( 2 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"while" ) ,  ( 5 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"break" ) ,  ( 5 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"as" ) ,  ( 2 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"or" ) ,  ( 2 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"and" ) ,  ( 3 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"not" ) ,  ( 3 ) ) ) , ( (  from_dash_string217 ) ( ( (uint8_t*)"return" ) ,  ( 6 ) ) ) } } );
                                struct Array_2177  keywords23912 = ( (  from_dash_listlike2178 ) ( ( &temp2179 ) ) );
                                struct env2181 envinst2181 = {
                                    .ident3910 =  ident3910 ,
                                };
                                if ( ( (  any2180 ) ( (  keywords13911 ) ,  ( (struct envunion2182){ .fun = (  bool  (*) (  struct env2181*  ,    struct StrView_27  ) )lam2197 , .env =  envinst2181 } ) ) ) ) {
                                    type3909 = ( HighlightType_18_Keyword1 );
                                } else {
                                    struct env2199 envinst2199 = {
                                        .ident3910 =  ident3910 ,
                                    };
                                    if ( ( (  any2198 ) ( (  keywords23912 ) ,  ( (struct envunion2200){ .fun = (  bool  (*) (  struct env2199*  ,    struct StrView_27  ) )lam2215 , .env =  envinst2199 } ) ) ) ) {
                                        type3909 = ( HighlightType_18_Keyword2 );
                                    } else {
                                        if ( ( ( ! (  first_dash_char_dash_uppercase3908 ) ) && (  eq2073 ( ( (  peek2071 ) ( (  sc3885 ) ) ) , ( ( Maybe_348_Just ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                            type3909 = ( HighlightType_18_Ident4 );
                                        }
                                    }
                                }
                                struct envunion2217  temp2216 = ( (struct envunion2217){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                                ( temp2216.fun ( &temp2216.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3907 ) , .f_type = (  type3909 ) } ) ) );
                            } else {
                                struct Maybe_1098  dref3917 = ( (  int2218 ) ( (  sc3885 ) ) );
                                if ( dref3917.tag == Maybe_1098_Just_t ) {
                                    int32_t  cur_dash_off3919 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_18  type3920 = ( HighlightType_18_Number );
                                    if ( (  eq1189 ( ( dref3917 .stuff .Maybe_1098_Just_s .field0 ) , (  from_dash_integral362 ( 0 ) ) ) ) ) {
                                        if ( ( (  try_dash_char2072 ) ( (  sc3885 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  skip_dash_while2219 ) ( (  sc3885 ) ,  (  is_dash_hex2222 ) ) );
                                            int32_t  cur_dash_off3921 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                            struct envunion2224  temp2223 = ( (struct envunion2224){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                                            ( temp2223.fun ( &temp2223.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3921 ) , .f_type = (  type3920 ) } ) ) );
                                            ( (  skip_dash_while2225 ) ( (  sc3885 ) ,  (  is_dash_alpha1402 ) ) );
                                            int32_t  invalid_dash_off3922 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                            if ( ( !  eq693 ( (  cur_dash_off3921 ) , (  invalid_dash_off3922 ) ) ) ) {
                                                struct envunion2227  temp2226 = ( (struct envunion2227){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                                                ( temp2226.fun ( &temp2226.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3921 ) , .f_to = (  invalid_dash_off3922 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                            }
                                        } else {
                                            if ( ( (  try_dash_char2072 ) ( (  sc3885 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while2228 ) ( (  sc3885 ) ,  (  is_dash_octal2231 ) ) );
                                                int32_t  cur_dash_off3923 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion2233  temp2232 = ( (struct envunion2233){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                                                ( temp2232.fun ( &temp2232.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3923 ) , .f_type = (  type3920 ) } ) ) );
                                                ( (  skip_dash_while2234 ) ( (  sc3885 ) ,  (  is_dash_digit1104 ) ) );
                                                int32_t  invalid_dash_off3924 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq693 ( (  cur_dash_off3923 ) , (  invalid_dash_off3924 ) ) ) ) {
                                                    struct envunion2238  temp2237 = ( (struct envunion2238){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                                                    ( temp2237.fun ( &temp2237.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3923 ) , .f_to = (  invalid_dash_off3924 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char2072 ) ( (  sc3885 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2239 ) ( (  sc3885 ) ,  (  is_dash_binary2242 ) ) );
                                                    int32_t  cur_dash_off3925 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2244  temp2243 = ( (struct envunion2244){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                                                    ( temp2243.fun ( &temp2243.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3925 ) , .f_type = (  type3920 ) } ) ) );
                                                    ( (  skip_dash_while2234 ) ( (  sc3885 ) ,  (  is_dash_digit1104 ) ) );
                                                    int32_t  invalid_dash_off3926 = ( (  size_dash_i32308 ) ( ( ( * (  sc3885 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq693 ( (  cur_dash_off3925 ) , (  invalid_dash_off3926 ) ) ) ) {
                                                        struct envunion2246  temp2245 = ( (struct envunion2246){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                                                        ( temp2245.fun ( &temp2245.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3925 ) , .f_to = (  invalid_dash_off3926 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    struct envunion2248  temp2247 = ( (struct envunion2248){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                                                    ( temp2247.fun ( &temp2247.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3919 ) , .f_type = (  type3920 ) } ) ) );
                                                }
                                            }
                                        }
                                    } else {
                                        struct envunion2250  temp2249 = ( (struct envunion2250){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                                        ( temp2249.fun ( &temp2249.env ,  (  hls3882 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3886 ) , .f_to = (  cur_dash_off3919 ) , .f_type = (  type3920 ) } ) ) );
                                    }
                                }
                                else {
                                    if ( dref3917.tag == Maybe_1098_None_t ) {
                                        ( (  drop_prime_1114 ) ( (  sc3885 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

struct envunion2255 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_348   char_dash_satisfies_prime_2258 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2257 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2258 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2256 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2257 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2261 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2263 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   markdown2252 (   struct env103* env ,    struct List_15 *  hls3929 ,    struct StrView_27  line_dash_sv3931 ) {
    struct Scanner_1086  temp2253 = ( (  mk_dash_from_dash_str1088 ) ( (  line_dash_sv3931 ) ) );
    struct Scanner_1086 *  sc3932 = ( &temp2253 );
    if ( ( (  try_dash_char2072 ) ( (  sc3932 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
        struct envunion2255  temp2254 = ( (struct envunion2255){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
        ( temp2254.fun ( &temp2254.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_integral56 ( 0 ) ) , .f_to = ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( (  line_dash_sv3931 ) ) ) ) ) , .f_type = ( HighlightType_18_Keyword1 ) } ) ) );
    } else {
        ( (  skip_dash_while2256 ) ( (  sc3932 ) ,  (  is_dash_whitespace411 ) ) );
        int32_t  from_dash_off3933 = ( (  size_dash_i32308 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
        if ( ( (  try_dash_char2072 ) ( (  sc3932 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) {
            int32_t  to_dash_off3934 = ( (  size_dash_i32308 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
            struct envunion104  temp2259 = ( (struct envunion104){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
            ( temp2259.fun ( &temp2259.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3933 ) , .f_to = (  to_dash_off3934 ) , .f_type = ( HighlightType_18_Special1 ) } ) ) );
            ( (  skip_dash_while2256 ) ( (  sc3932 ) ,  (  is_dash_whitespace411 ) ) );
            int32_t  from_dash_off3935 = ( (  size_dash_i32308 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  matches_dash_str2139 ) ( (  sc3932 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"[ ]" ) ,  ( 3 ) ) ) ) ) ) {
                int32_t  to_dash_off3936 = ( (  size_dash_i32308 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
                struct envunion2261  temp2260 = ( (struct envunion2261){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                ( temp2260.fun ( &temp2260.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3935 ) , .f_to = (  to_dash_off3936 ) , .f_type = ( HighlightType_18_Keyword1 ) } ) ) );
            } else {
                if ( ( ( (  matches_dash_str2139 ) ( (  sc3932 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"[x]" ) ,  ( 3 ) ) ) ) ) || ( (  matches_dash_str2139 ) ( (  sc3932 ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"[X]" ) ,  ( 3 ) ) ) ) ) ) ) {
                    int32_t  to_dash_off3937 = ( (  size_dash_i32308 ) ( ( ( * (  sc3932 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2263  temp2262 = ( (struct envunion2263){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                    ( temp2262.fun ( &temp2262.env ,  (  hls3929 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3935 ) , .f_to = (  to_dash_off3937 ) , .f_type = ( HighlightType_18_Keyword2 ) } ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_348   char_dash_satisfies_prime_2268 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2267 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2268 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  struct Maybe_348   char_dash_satisfies_prime_2271 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2270 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2271 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2269 (    struct Scanner_1086 *  sc3452 ,    bool (*  condition3454 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2270 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   gcode_dash_keyword_dash_char2272 (    struct Char_65  c3940 ) {
    return ( ( (  is_dash_not_dash_whitespace1742 ) ( (  c3940 ) ) ) && ( !  eq357 ( (  c3940 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) );
}

static  uint8_t   char_dash_case_dash_diff2274 (  ) {
    return (  op_dash_sub1063 ( ( (  char_dash_u8668 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) , ( (  char_dash_u8668 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Char_65   to_dash_lower2273 (    struct Char_65  c1528 ) {
    if ( ( (  is_dash_upper2173 ) ( (  c1528 ) ) ) ) {
        ( (  assert799 ) ( (  eq280 ( ( (  c1528 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"(to-lower) utf8 not yet supported." ) ,  ( 34 ) ) ) ) );
        return ( (  from_dash_u81863 ) ( (  op_dash_add1064 ( ( (  char_dash_u8668 ) ( (  c1528 ) ) ) , ( (  char_dash_case_dash_diff2274 ) ( ) ) ) ) ) );
    }
    return (  c1528 );
}

struct StrConcat_2280 {
    struct StrView_27  field0;
    struct StrConcat_766  field1;
};

static struct StrConcat_2280 StrConcat_2280_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_766  field1 ) {
    return ( struct StrConcat_2280 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2279 {
    struct StrConcat_2280  field0;
    struct Char_65  field1;
};

static struct StrConcat_2279 StrConcat_2279_StrConcat (  struct StrConcat_2280  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2279 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2281 (    struct StrConcat_2280  self1302 ) {
    struct StrConcat_2280  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str307 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str773 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2278 (    struct StrConcat_2279  self1302 ) {
    struct StrConcat_2279  dref1303 = (  self1302 );
    if ( true ) {
        ( (  print_dash_str2281 ) ( ( dref1303 .field0 ) ) );
        ( (  print_dash_str314 ) ( ( dref1303 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic2277 (    struct StrConcat_766  errmsg1343 ) {
    ( (  print_dash_str2278 ) ( ( ( StrConcat_2279_StrConcat ) ( ( ( StrConcat_2280_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1343 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Char_65   undefined2282 (  ) {
    struct Char_65  temp2283;
    return (  temp2283 );
}

static  struct Char_65   or_dash_fail2276 (    struct Maybe_348  x1353 ,    struct StrConcat_766  errmsg1355 ) {
    struct Maybe_348  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_348_None_t ) {
        ( (  panic2277 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2282 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_348_Just_t ) {
            return ( dref1356 .stuff .Maybe_348_Just_s .field0 );
        }
    }
}

static  struct Char_65   char_dash_at_dash_offset2275 (    struct StrView_27  self2627 ,    size_t  i2629 ) {
    return ( (  or_dash_fail2276 ) ( ( (  head1405 ) ( ( (  chars292 ) ( ( (struct StrView_27) { .f_contents = ( (  from582 ) ( ( (  self2627 ) .f_contents ) ,  (  i2629 ) ) ) } ) ) ) ) ) ,  ( ( StrConcat_766_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"(StrView.char-at-offset) off too great for this StrView (" ) ,  ( 57 ) ) ) ,  (  i2629 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2286 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_348   char_dash_satisfies_prime_2288 (    struct Scanner_1086 *  sc3429 ,    bool (*  condition3431 )(    struct Char_65  ) ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        if ( ( (  condition3431 ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2287 (    struct Scanner_1086 *  sc3436 ,    bool (*  condition3438 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2288 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  bool   lam2289 (    struct Char_65  c3954 ) {
    return ( !  eq357 ( (  c3954 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) );
}

struct envunion2291 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   gcode2265 (   struct env105* env ,    struct List_15 *  hls3943 ,    struct StrView_27  line_dash_sv3945 ) {
    struct Scanner_1086  temp2266 = ( (  mk_dash_from_dash_str1088 ) ( (  line_dash_sv3945 ) ) );
    struct Scanner_1086 *  sc3946 = ( &temp2266 );
    ( (  skip_dash_while2256 ) ( (  sc3946 ) ,  (  is_dash_whitespace411 ) ) );
    int32_t  first_dash_from_dash_off3947 = ( (  size_dash_i32308 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
    if ( ( (  char_dash_satisfies2267 ) ( (  sc3946 ) ,  (  is_dash_alphanumeric1401 ) ) ) ) {
        ( (  skip_dash_while2269 ) ( (  sc3946 ) ,  (  gcode_dash_keyword_dash_char2272 ) ) );
        int32_t  first_dash_to_dash_off3948 = ( (  size_dash_i32308 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
        enum HighlightType_18  type3949 = ( HighlightType_18_Invalid );
        struct Char_65  first_dash_char3950 = ( (  to_dash_lower2273 ) ( ( (  char_dash_at_dash_offset2275 ) ( (  line_dash_sv3945 ) ,  ( (  i32_dash_size277 ) ( (  first_dash_from_dash_off3947 ) ) ) ) ) ) );
        if ( (  eq357 ( (  first_dash_char3950 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) {
            type3949 = ( HighlightType_18_Keyword1 );
        } else {
            if ( (  eq357 ( (  first_dash_char3950 ) , ( (  from_dash_charlike335 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                type3949 = ( HighlightType_18_Ident1 );
            }
        }
        struct envunion106  temp2284 = ( (struct envunion106){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
        ( temp2284.fun ( &temp2284.env ,  (  hls3943 ) ,  ( (struct Highlight_17) { .f_from = (  first_dash_from_dash_off3947 ) , .f_to = (  first_dash_to_dash_off3948 ) , .f_type = (  type3949 ) } ) ) );
        ( (  skip_dash_while2256 ) ( (  sc3946 ) ,  (  is_dash_whitespace411 ) ) );
        int32_t  from_dash_off3951 = ( (  size_dash_i32308 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
        while ( ( (  char_dash_satisfies2267 ) ( (  sc3946 ) ,  (  is_dash_alphanumeric1401 ) ) ) ) {
            ( (  skip_dash_while2269 ) ( (  sc3946 ) ,  (  gcode_dash_keyword_dash_char2272 ) ) );
            int32_t  to_dash_off3952 = ( (  size_dash_i32308 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
            ( (  skip_dash_while2256 ) ( (  sc3946 ) ,  (  is_dash_whitespace411 ) ) );
            struct envunion2286  temp2285 = ( (struct envunion2286){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
            ( temp2285.fun ( &temp2285.env ,  (  hls3943 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3951 ) , .f_to = (  to_dash_off3952 ) , .f_type = ( HighlightType_18_Ident4 ) } ) ) );
        }
    }
    while ( ( (  char_dash_satisfies2287 ) ( (  sc3946 ) ,  (  lam2289 ) ) ) ) {
    }
    int32_t  from_dash_off3955 = ( (  size_dash_i32308 ) ( ( ( * (  sc3946 ) ) .f_byte_dash_offset ) ) );
    if ( ( (  try_dash_char2072 ) ( (  sc3946 ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ) {
        struct envunion2291  temp2290 = ( (struct envunion2291){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
        ( temp2290.fun ( &temp2290.env ,  (  hls3943 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3955 ) , .f_to = ( (  size_dash_i32308 ) ( ( (  num_dash_bytes393 ) ( (  line_dash_sv3945 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
    }
    return ( Unit_8_Unit );
}

struct Tuple2_2296 {
    struct Char_65  field0;
    enum HighlightType_18  field1;
};

static struct Tuple2_2296 Tuple2_2296_Tuple2 (  struct Char_65  field0 ,  enum HighlightType_18  field1 ) {
    return ( struct Tuple2_2296 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_2295 {
    struct Tuple2_2296 *  f_ptr;
    size_t  f_count;
};

struct Array_2298 {
    struct Tuple2_2296 _arr [8];
};

static  struct Tuple2_2296 *   cast_dash_ptr2299 (    struct Array_2298 *  p398 ) {
    return ( (struct Tuple2_2296 * ) (  p398 ) );
}

static  struct Slice_2295   from_dash_listlike2297 (    struct Array_2298 *  arr2200 ) {
    return ( (struct Slice_2295) { .f_ptr = ( (  cast_dash_ptr2299 ) ( (  arr2200 ) ) ) , .f_count = ( (  i32_dash_size277 ) ( ( 8 ) ) ) } );
}

struct env2301 {
    ;
    struct Slice_2295  bf_dash_chars3962;
    ;
    ;
    ;
};

struct envunion2302 {
    bool  (*fun) (  struct env2301*  ,    struct Char_65  );
    struct env2301 env;
};

struct SliceIter_2306 {
    struct Slice_2295  f_slice;
    size_t  f_current_dash_offset;
};

struct Map_2305 {
    struct SliceIter_2306  field0;
    struct Char_65 (*  field1 )(    struct Tuple2_2296  );
};

static struct Map_2305 Map_2305_Map (  struct SliceIter_2306  field0 ,  struct Char_65 (*  field1 )(    struct Tuple2_2296  ) ) {
    return ( struct Map_2305 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2307 {
    ;
    struct Char_65  c3964;
};

struct envunion2308 {
    bool  (*fun) (  struct env2307*  ,    struct Char_65  );
    struct env2307 env;
};

struct env2310 {
    struct envunion2308  fun1160;
};

struct envunion2311 {
    bool  (*fun) (  struct env2310*  ,    struct Char_65  ,    bool  );
    struct env2310 env;
};

static  struct Map_2305   into_dash_iter2312 (    struct Map_2305  self804 ) {
    return (  self804 );
}

struct Maybe_2314 {
    enum {
        Maybe_2314_None_t,
        Maybe_2314_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2296  field0;
        } Maybe_2314_Just_s;
    } stuff;
};

static struct Maybe_2314 Maybe_2314_Just (  struct Tuple2_2296  field0 ) {
    return ( struct Maybe_2314 ) { .tag = Maybe_2314_Just_t, .stuff = { .Maybe_2314_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_2296 *   offset_dash_ptr2316 (    struct Tuple2_2296 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_2296  temp2317;
    return ( (struct Tuple2_2296 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2317 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2314   next2315 (    struct SliceIter_2306 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2314) { .tag = Maybe_2314_None_t } );
    }
    struct Tuple2_2296  elem2258 = ( * ( (  offset_dash_ptr2316 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2314_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_348   next2313 (    struct Map_2305 *  dref806 ) {
    struct Maybe_2314  dref809 = ( (  next2315 ) ( ( & ( (* dref806 ) .field0 ) ) ) );
    if ( dref809.tag == Maybe_2314_None_t ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    else {
        if ( dref809.tag == Maybe_2314_Just_t ) {
            return ( ( Maybe_348_Just ) ( ( ( (* dref806 ) .field1 ) ( ( dref809 .stuff .Maybe_2314_Just_s .field0 ) ) ) ) );
        }
    }
}

static  bool   reduce2309 (    struct Map_2305  iterable1118 ,    bool  base1120 ,   struct envunion2311  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Map_2305  it1124 = ( (  into_dash_iter2312 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next2313 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                struct envunion2311  temp2318 = (  fun1122 );
                x1123 = ( temp2318.fun ( &temp2318.env ,  ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2319 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2319);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2320;
    return (  temp2320 );
}

static  bool   lam2321 (   struct env2310* env ,    struct Char_65  e1162 ,    bool  x1164 ) {
    struct envunion2308  temp2322 = ( env->fun1160 );
    return ( ( temp2322.fun ( &temp2322.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2304 (    struct Map_2305  it1158 ,   struct envunion2308  fun1160 ) {
    struct env2310 envinst2310 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2309 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2311){ .fun = (  bool  (*) (  struct env2310*  ,    struct Char_65  ,    bool  ) )lam2321 , .env =  envinst2310 } ) ) );
}

static  struct SliceIter_2306   into_dash_iter2324 (    struct Slice_2295  self2250 ) {
    return ( (struct SliceIter_2306) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Map_2305   map2323 (    struct Slice_2295  iterable813 ,    struct Char_65 (*  fun815 )(    struct Tuple2_2296  ) ) {
    struct SliceIter_2306  it816 = ( (  into_dash_iter2324 ) ( (  iterable813 ) ) );
    return ( ( Map_2305_Map ) ( (  it816 ) ,  (  fun815 ) ) );
}

static  struct Char_65   fst2325 (    struct Tuple2_2296  dref1563 ) {
    return ( dref1563 .field0 );
}

static  bool   lam2326 (   struct env2307* env ,    struct Char_65  eq3966 ) {
    return (  eq357 ( (  eq3966 ) , ( env->c3964 ) ) );
}

static  bool   lam2303 (   struct env2301* env ,    struct Char_65  c3964 ) {
    struct env2307 envinst2307 = {
        .c3964 =  c3964 ,
    };
    return ( (  any2304 ) ( ( (  map2323 ) ( ( env->bf_dash_chars3962 ) ,  (  fst2325 ) ) ) ,  ( (struct envunion2308){ .fun = (  bool  (*) (  struct env2307*  ,    struct Char_65  ) )lam2326 , .env =  envinst2307 } ) ) );
}

struct env2328 {
    ;
    struct Slice_2295  bf_dash_chars3962;
    ;
    ;
    ;
};

struct envunion2329 {
    bool  (*fun) (  struct env2328*  ,    struct Char_65  );
    struct env2328 env;
};

static  struct Maybe_348   char_dash_satisfies_prime_2327 (    struct Scanner_1086 *  sc3429 ,   struct envunion2329  condition3431 ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        struct envunion2329  temp2330 = (  condition3431 );
        if ( ( temp2330.fun ( &temp2330.env ,  ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

struct env2333 {
    struct Char_65  c3970;
    ;
};

struct envunion2334 {
    bool  (*fun) (  struct env2333*  ,    struct Char_65  );
    struct env2333 env;
};

struct env2336 {
    struct envunion2334  fun1160;
};

struct envunion2337 {
    bool  (*fun) (  struct env2336*  ,    struct Char_65  ,    bool  );
    struct env2336 env;
};

static  bool   reduce2335 (    struct Map_2305  iterable1118 ,    bool  base1120 ,   struct envunion2337  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Map_2305  it1124 = ( (  into_dash_iter2312 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next2313 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                struct envunion2337  temp2338 = (  fun1122 );
                x1123 = ( temp2338.fun ( &temp2338.env ,  ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2339 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2339);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2340;
    return (  temp2340 );
}

static  bool   lam2341 (   struct env2336* env ,    struct Char_65  e1162 ,    bool  x1164 ) {
    struct envunion2334  temp2342 = ( env->fun1160 );
    return ( ( temp2342.fun ( &temp2342.env ,  (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2332 (    struct Map_2305  it1158 ,   struct envunion2334  fun1160 ) {
    struct env2336 envinst2336 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2335 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2337){ .fun = (  bool  (*) (  struct env2336*  ,    struct Char_65  ,    bool  ) )lam2341 , .env =  envinst2336 } ) ) );
}

static  bool   lam2343 (   struct env2333* env ,    struct Char_65  ec3972 ) {
    return (  eq357 ( (  ec3972 ) , ( env->c3970 ) ) );
}

static  bool   lam2331 (   struct env2328* env ,    struct Char_65  c3970 ) {
    struct env2333 envinst2333 = {
        .c3970 =  c3970 ,
    };
    return ( (  any2332 ) ( ( (  map2323 ) ( ( env->bf_dash_chars3962 ) ,  (  fst2325 ) ) ) ,  ( (struct envunion2334){ .fun = (  bool  (*) (  struct env2333*  ,    struct Char_65  ) )lam2343 , .env =  envinst2333 } ) ) );
}

static  enum HighlightType_18   snd2344 (    struct Tuple2_2296  dref1566 ) {
    return ( dref1566 .field1 );
}

static  struct Tuple2_2296   undefined2346 (  ) {
    struct Tuple2_2296  temp2347;
    return (  temp2347 );
}

static  struct Tuple2_2296   or_dash_fail2345 (    struct Maybe_2314  x1353 ,    struct StrView_27  errmsg1355 ) {
    struct Maybe_2314  dref1356 = (  x1353 );
    if ( dref1356.tag == Maybe_2314_None_t ) {
        ( (  panic847 ) ( (  errmsg1355 ) ) );
        return ( (  undefined2346 ) ( ) );
    }
    else {
        if ( dref1356.tag == Maybe_2314_Just_t ) {
            return ( dref1356 .stuff .Maybe_2314_Just_s .field0 );
        }
    }
}

struct env2350 {
    ;
    struct Char_65  cc3974;
};

struct envunion2351 {
    bool  (*fun) (  struct env2350*  ,    struct Tuple2_2296  );
    struct env2350 env;
};

struct Filter_2349 {
    struct SliceIter_2306  f_og;
    struct envunion2351  f_fun;
};

static  struct Maybe_2314   next2352 (    struct Filter_2349 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_2314  dref842 = ( (  next2315 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_2314_None_t ) {
            return ( (struct Maybe_2314) { .tag = Maybe_2314_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_2314_Just_t ) {
                struct envunion2351  temp2353 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp2353.fun ( &temp2353.env ,  ( dref842 .stuff .Maybe_2314_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2314_Just ) ( ( dref842 .stuff .Maybe_2314_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2314  temp2354;
    return (  temp2354 );
}

static  struct Filter_2349   into_dash_iter2356 (    struct Filter_2349  self838 ) {
    return (  self838 );
}

static  struct Maybe_2314   head2348 (    struct Filter_2349  it1167 ) {
    struct Filter_2349  temp2355 = ( (  into_dash_iter2356 ) ( (  it1167 ) ) );
    return ( (  next2352 ) ( ( &temp2355 ) ) );
}

static  struct Filter_2349   filter2357 (    struct Slice_2295  iterable846 ,   struct envunion2351  fun848 ) {
    struct SliceIter_2306  it849 = ( (  into_dash_iter2324 ) ( (  iterable846 ) ) );
    return ( (struct Filter_2349) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   lam2358 (   struct env2350* env ,    struct Tuple2_2296  dref3975 ) {
    return (  eq357 ( ( dref3975 .field0 ) , ( env->cc3974 ) ) );
}

struct env2361 {
    struct envunion2302  is_dash_bf_dash_char3967;
};

struct envunion2362 {
    bool  (*fun) (  struct env2361*  ,    struct Char_65  );
    struct env2361 env;
};

static  struct Maybe_348   char_dash_satisfies_prime_2364 (    struct Scanner_1086 *  sc3429 ,   struct envunion2362  condition3431 ) {
    struct Maybe_348  dref3432 = ( (  head1405 ) ( ( ( * (  sc3429 ) ) .f_s ) ) );
    if ( dref3432.tag == Maybe_348_Just_t ) {
        struct envunion2362  temp2365 = (  condition3431 );
        if ( ( temp2365.fun ( &temp2365.env ,  ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1114 ) ( (  sc3429 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_348_Just ) ( ( dref3432 .stuff .Maybe_348_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
    else {
        if ( dref3432.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2363 (    struct Scanner_1086 *  sc3436 ,   struct envunion2362  condition3438 ) {
    return ( (  is_dash_just2076 ) ( ( (  char_dash_satisfies_prime_2364 ) ( (  sc3436 ) ,  (  condition3438 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2360 (    struct Scanner_1086 *  sc3452 ,   struct envunion2362  condition3454 ) {
    while ( ( (  char_dash_satisfies2363 ) ( (  sc3452 ) ,  (  condition3454 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2366 (   struct env2361* env ,    struct Char_65  c3981 ) {
    struct envunion2302  temp2367 = ( env->is_dash_bf_dash_char3967 );
    return ( ! ( temp2367.fun ( &temp2367.env ,  (  c3981 ) ) ) );
}

struct envunion2369 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   brainfuck2293 (   struct env107* env ,    struct List_15 *  hls3958 ,    struct StrView_27  line_dash_sv3960 ) {
    struct Scanner_1086  temp2294 = ( (  mk_dash_from_dash_str1088 ) ( (  line_dash_sv3960 ) ) );
    struct Scanner_1086 *  sc3961 = ( &temp2294 );
    ( (  skip_dash_while2256 ) ( (  sc3961 ) ,  (  is_dash_whitespace411 ) ) );
    struct Array_2298  temp2300 = ( (struct Array_2298) { ._arr = { ( ( Tuple2_2296_Tuple2 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special1 ) ) ) , ( ( Tuple2_2296_Tuple2 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special1 ) ) ) , ( ( Tuple2_2296_Tuple2 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"+" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special2 ) ) ) , ( ( Tuple2_2296_Tuple2 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special2 ) ) ) , ( ( Tuple2_2296_Tuple2 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special3 ) ) ) , ( ( Tuple2_2296_Tuple2 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special3 ) ) ) , ( ( Tuple2_2296_Tuple2 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Keyword1 ) ) ) , ( ( Tuple2_2296_Tuple2 ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Keyword2 ) ) ) } } );
    struct Slice_2295  bf_dash_chars3962 = ( ( (  from_dash_listlike2297 ) ( ( &temp2300 ) ) ) );
    struct env2301 envinst2301 = {
        .bf_dash_chars3962 =  bf_dash_chars3962 ,
    };
    struct envunion2302  is_dash_bf_dash_char3967 = ( (struct envunion2302){ .fun = (  bool  (*) (  struct env2301*  ,    struct Char_65  ) )lam2303 , .env =  envinst2301 } );
    while ( ( ! ( (  null2068 ) ( (  sc3961 ) ) ) ) ) {
        while ( ( true ) ) {
            int32_t  from_dash_off3968 = ( (  size_dash_i32308 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
            struct env2328 envinst2328 = {
                .bf_dash_chars3962 =  bf_dash_chars3962 ,
            };
            struct Maybe_348  dref3973 = ( (  char_dash_satisfies_prime_2327 ) ( (  sc3961 ) ,  ( (struct envunion2329){ .fun = (  bool  (*) (  struct env2328*  ,    struct Char_65  ) )lam2331 , .env =  envinst2328 } ) ) );
            if ( dref3973.tag == Maybe_348_Just_t ) {
                struct env2350 envinst2350 = {
                    .cc3974 = dref3973 .stuff .Maybe_348_Just_s .field0 ,
                };
                enum HighlightType_18  hl3977 = ( (  snd2344 ) ( ( (  or_dash_fail2345 ) ( ( (  head2348 ) ( ( (  filter2357 ) ( (  bf_dash_chars3962 ) ,  ( (struct envunion2351){ .fun = (  bool  (*) (  struct env2350*  ,    struct Tuple2_2296  ) )lam2358 , .env =  envinst2350 } ) ) ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"could not find matched char (it should not happen)" ) ,  ( 50 ) ) ) ) ) ) );
                int32_t  to_dash_off3978 = ( (  size_dash_i32308 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
                struct envunion108  temp2359 = ( (struct envunion108){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
                ( temp2359.fun ( &temp2359.env ,  (  hls3958 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3968 ) , .f_to = (  to_dash_off3978 ) , .f_type = (  hl3977 ) } ) ) );
            }
            else {
                if ( dref3973.tag == Maybe_348_None_t ) {
                    break;
                }
            }
        }
        int32_t  from_dash_off3979 = ( (  size_dash_i32308 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
        struct env2361 envinst2361 = {
            .is_dash_bf_dash_char3967 =  is_dash_bf_dash_char3967 ,
        };
        ( (  skip_dash_while2360 ) ( (  sc3961 ) ,  ( (struct envunion2362){ .fun = (  bool  (*) (  struct env2361*  ,    struct Char_65  ) )lam2366 , .env =  envinst2361 } ) ) );
        int32_t  to_dash_off3982 = ( (  size_dash_i32308 ) ( ( ( * (  sc3961 ) ) .f_byte_dash_offset ) ) );
        if ( (  cmp173 ( (  to_dash_off3982 ) , (  from_dash_off3979 ) ) == 2 ) ) {
            struct envunion2369  temp2368 = ( (struct envunion2369){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2080 , .env =  env->envinst35 } );
            ( temp2368.fun ( &temp2368.env ,  (  hls3958 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3979 ) , .f_to = (  to_dash_off3982 ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line2063 (   struct env147* env ,    struct TextBuf_117 *  self4250 ,    struct Line_12 *  line4252 ) {
    if ( ( ! ( ( * (  line4252 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_15 *  hls4253 = ( & ( ( * (  line4252 ) ) .f_highlights ) );
    ( (  trim2064 ) ( (  hls4253 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv4254 = ( (  from_dash_bytes295 ) ( ( (  to_dash_slice296 ) ( ( ( * (  line4252 ) ) .f_line ) ) ) ) );
    enum Filetype_120  dref4255 = ( ( * (  self4250 ) ) .f_filetype );
    switch (  dref4255 ) {
        case Filetype_120_Text : {
            break;
        }
        case Filetype_120_KC : {
            struct envunion149  temp2065 = ( (struct envunion149){ .fun = (  enum Unit_8  (*) (  struct env101*  ,    struct List_15 *  ,    struct StrView_27  ) )kc2066 , .env =  env->envinst101 } );
            ( temp2065.fun ( &temp2065.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
        case Filetype_120_Markdown : {
            struct envunion148  temp2251 = ( (struct envunion148){ .fun = (  enum Unit_8  (*) (  struct env103*  ,    struct List_15 *  ,    struct StrView_27  ) )markdown2252 , .env =  env->envinst103 } );
            ( temp2251.fun ( &temp2251.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
        case Filetype_120_GCode : {
            struct envunion151  temp2264 = ( (struct envunion151){ .fun = (  enum Unit_8  (*) (  struct env105*  ,    struct List_15 *  ,    struct StrView_27  ) )gcode2265 , .env =  env->envinst105 } );
            ( temp2264.fun ( &temp2264.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
        case Filetype_120_Brainfuck : {
            struct envunion150  temp2292 = ( (struct envunion150){ .fun = (  enum Unit_8  (*) (  struct env107*  ,    struct List_15 *  ,    struct StrView_27  ) )brainfuck2293 , .env =  env->envinst107 } );
            ( temp2292.fun ( &temp2292.env ,  (  hls4253 ) ,  (  line_dash_sv4254 ) ) );
            break;
        }
    }
    (*  line4252 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_16   subslice2372 (    struct Slice_16  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Highlight_17 *  begin_dash_ptr2209 = ( (  offset_dash_ptr2094 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp299 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp299 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub455 ( ( (  min584 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

static  struct SliceIter_2098   into_dash_iter2371 (    struct List_15  self2433 ) {
    return ( (  into_dash_iter2107 ) ( ( (  subslice2372 ) ( ( (  self2433 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2433 ) .f_count ) ) ) ) );
}

static  bool   between2374 (    int32_t  c1377 ,    int32_t  l1379 ,    int32_t  r1381 ) {
    int32_t  from1382 = ( (  min790 ) ( (  l1379 ) ,  (  r1381 ) ) );
    int32_t  to1383 = ( (  max371 ) ( (  l1379 ) ,  (  r1381 ) ) );
    return ( (  cmp173 ( (  from1382 ) , (  c1377 ) ) != 2 ) && (  cmp173 ( (  c1377 ) , (  to1383 ) ) != 2 ) );
}

static  struct Maybe_221   highlight_dash_at2061 (   struct env152* env ,    struct TextBuf_117 *  self4258 ,    struct Pos_26  pos4260 ) {
    struct Line_12 *  line4261 = ( (  get_dash_ptr298 ) ( ( & ( ( * (  self4258 ) ) .f_buf ) ) ,  ( (  i32_dash_size277 ) ( ( (  pos4260 ) .f_line ) ) ) ) );
    struct envunion153  temp2062 = ( (struct envunion153){ .fun = (  enum Unit_8  (*) (  struct env147*  ,    struct TextBuf_117 *  ,    struct Line_12 *  ) )recompute_dash_highlights_dash_at_dash_line2063 , .env =  env->envinst147 } );
    ( temp2062.fun ( &temp2062.env ,  (  self4258 ) ,  (  line4261 ) ) );
    struct SliceIter_2098  temp2370 =  into_dash_iter2371 ( ( ( * (  line4261 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2103  __cond2373 =  next2104 (&temp2370);
        if (  __cond2373 .tag == 0 ) {
            break;
        }
        struct Highlight_17  hl4263 =  __cond2373 .stuff .Maybe_2103_Just_s .field0;
        if ( ( (  between2374 ) ( ( (  pos4260 ) .f_bi ) ,  ( (  hl4263 ) .f_from ) ,  (  op_dash_sub180 ( ( (  hl4263 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_221_Just ) ( ( (  hl4263 ) .f_type ) ) );
        }
        if ( (  cmp173 ( ( (  pos4260 ) .f_bi ) , ( (  hl4263 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_221) { .tag = Maybe_221_None_t } );
        }
    }
    return ( (struct Maybe_221) { .tag = Maybe_221_None_t } );
}

struct Maybe_2378 {
    enum {
        Maybe_2378_None_t,
        Maybe_2378_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_191  field0;
        } Maybe_2378_Just_s;
    } stuff;
};

static struct Maybe_2378 Maybe_2378_Just (  struct HighlightColors_191  field0 ) {
    return ( struct Maybe_2378 ) { .tag = Maybe_2378_Just_t, .stuff = { .Maybe_2378_Just_s = { .field0 = field0 } } };
};

struct env2379 {
    ;
    struct Theme_188 *  theme4299;
};

struct envunion2380 {
    struct Colors_189  (*fun) (  struct env2379*  ,    struct HighlightColors_191  );
    struct env2379 env;
};

static  struct Colors_189   maybe2377 (    struct Maybe_2378  x1592 ,   struct envunion2380  fun1594 ,    struct Colors_189  default1596 ) {
    struct envunion2380  temp2381 = (  fun1594 );
    return ( {  struct Maybe_2378  dref1597 = (  x1592 ) ; dref1597.tag == Maybe_2378_Just_t ? ( temp2381.fun ( &temp2381.env ,  ( dref1597 .stuff .Maybe_2378_Just_s .field0 ) ) ) : (  default1596 ) ; } );
}

struct SliceIter_2384 {
    struct Slice_190  f_slice;
    size_t  f_current_dash_offset;
};

struct env2385 {
    enum HighlightType_18  hltype4301;
    ;
};

struct envunion2386 {
    bool  (*fun) (  struct env2385*  ,    struct HighlightColors_191  );
    struct env2385 env;
};

struct Filter_2383 {
    struct SliceIter_2384  f_og;
    struct envunion2386  f_fun;
};

static  struct HighlightColors_191 *   offset_dash_ptr2389 (    struct HighlightColors_191 *  x377 ,    int64_t  count379 ) {
    struct HighlightColors_191  temp2390;
    return ( (struct HighlightColors_191 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul344 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2390 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2378   next2388 (    struct SliceIter_2384 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2378) { .tag = Maybe_2378_None_t } );
    }
    struct HighlightColors_191  elem2258 = ( * ( (  offset_dash_ptr2389 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2378_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2378   next2387 (    struct Filter_2383 *  self841 ) {
    while ( ( true ) ) {
        struct Maybe_2378  dref842 = ( (  next2388 ) ( ( & ( ( * (  self841 ) ) .f_og ) ) ) );
        if ( dref842.tag == Maybe_2378_None_t ) {
            return ( (struct Maybe_2378) { .tag = Maybe_2378_None_t } );
        }
        else {
            if ( dref842.tag == Maybe_2378_Just_t ) {
                struct envunion2386  temp2391 = ( ( * (  self841 ) ) .f_fun );
                if ( ( temp2391.fun ( &temp2391.env ,  ( dref842 .stuff .Maybe_2378_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2378_Just ) ( ( dref842 .stuff .Maybe_2378_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2378  temp2392;
    return (  temp2392 );
}

static  struct Filter_2383   into_dash_iter2394 (    struct Filter_2383  self838 ) {
    return (  self838 );
}

static  struct Maybe_2378   head2382 (    struct Filter_2383  it1167 ) {
    struct Filter_2383  temp2393 = ( (  into_dash_iter2394 ) ( (  it1167 ) ) );
    return ( (  next2387 ) ( ( &temp2393 ) ) );
}

static  struct SliceIter_2384   into_dash_iter2396 (    struct Slice_190  self2250 ) {
    return ( (struct SliceIter_2384) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2383   filter2395 (    struct Slice_190  iterable846 ,   struct envunion2386  fun848 ) {
    struct SliceIter_2384  it849 = ( (  into_dash_iter2396 ) ( (  iterable846 ) ) );
    return ( (struct Filter_2383) { .f_og = (  it849 ) , .f_fun = (  fun848 ) } );
}

static  bool   eq2399 (    uint32_t  l120 ,    uint32_t  r122 ) {
    return ( (  l120 ) == (  r122 ) );
}

static  enum HighlightType_18 *   cast2402 (    uint32_t *  x395 ) {
    return ( (enum HighlightType_18 * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2400 (    enum HighlightType_18  x651 ) {
    uint32_t  temp2401 = ( (  zeroed942 ) ( ) );
    uint32_t *  y652 = ( &temp2401 );
    enum HighlightType_18 *  yp653 = ( (  cast2402 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  bool   eq2398 (    enum HighlightType_18  l3876 ,    enum HighlightType_18  r3878 ) {
    return (  eq2399 ( ( ( (  cast_dash_on_dash_zeroed2400 ) ( (  l3876 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2400 ) ( (  r3878 ) ) ) ) );
}

static  bool   lam2397 (   struct env2385* env ,    struct HighlightColors_191  hlc4303 ) {
    return (  eq2398 ( ( (  hlc4303 ) .f_type ) , ( env->hltype4301 ) ) );
}

static  struct Color_154   or_dash_else2404 (    struct Maybe_192  self1360 ,    struct Color_154  alt1362 ) {
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

static  struct Colors_189   lam2403 (   struct env2379* env ,    struct HighlightColors_191  hlc4305 ) {
    return ( (struct Colors_189) { .f_fg = ( (  hlc4305 ) .f_fg ) , .f_bg = ( (  or_dash_else2404 ) ( ( (  hlc4305 ) .f_bg ) ,  ( ( ( * ( env->theme4299 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_189   find_dash_colors_dash_for_dash_highlight2376 (    struct Theme_188 *  theme4299 ,    enum HighlightType_18  hltype4301 ) {
    struct env2385 envinst2385 = {
        .hltype4301 =  hltype4301 ,
    };
    struct env2379 envinst2379 = {
        .theme4299 =  theme4299 ,
    };
    return ( (  maybe2377 ) ( ( (  head2382 ) ( ( (  filter2395 ) ( ( ( * (  theme4299 ) ) .f_highlights ) ,  ( (struct envunion2386){ .fun = (  bool  (*) (  struct env2385*  ,    struct HighlightColors_191  ) )lam2397 , .env =  envinst2385 } ) ) ) ) ) ,  ( (struct envunion2380){ .fun = (  struct Colors_189  (*) (  struct env2379*  ,    struct HighlightColors_191  ) )lam2403 , .env =  envinst2379 } ) ,  ( ( * (  theme4299 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2375 (   struct env2057* env ,    enum HighlightType_18  type4432 ) {
    ( (  set_dash_colors2022 ) ( ( env->screen4402 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2376 ) ( ( env->theme4409 ) ,  (  type4432 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2408 (  ) {
    ( (  println1408 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1770 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2407 (    enum Mode_239  mode4320 ) {
    return ( {  enum Mode_239  dref4321 = (  mode4320 ) ;  dref4321 == Mode_239_Normal ? ( (  from_dash_string217 ) ( ( (uint8_t*)"NOR" ) ,  ( 3 ) ) ) :  dref4321 == Mode_239_Insert ? ( (  from_dash_string217 ) ( ( (uint8_t*)"INS" ) ,  ( 3 ) ) ) :  dref4321 == Mode_239_Select ? ( (  from_dash_string217 ) ( ( (uint8_t*)"SEL" ) ,  ( 3 ) ) ) : ( (  todo2408 ) ( ) ) ; } );
}

struct StrConcat_2411 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2411 StrConcat_2411_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2411 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2410 {
    struct StrConcat_2411  field0;
    struct Char_65  field1;
};

static struct StrConcat_2410 StrConcat_2410_StrConcat (  struct StrConcat_2411  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2410 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2414 {
    struct AppendIter_1155  f_left;
    struct StrViewIter_290  f_right;
};

struct StrConcatIter_2413 {
    struct StrConcatIter_2414  f_left;
    struct AppendIter_1155  f_right;
};

static  struct StrConcatIter_2413   into_dash_iter2415 (    struct StrConcatIter_2413  self1290 ) {
    return (  self1290 );
}

static  struct StrConcatIter_2414   into_dash_iter2419 (    struct StrConcat_2411  dref1297 ) {
    return ( (struct StrConcatIter_2414) { .f_left = ( (  chars1190 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars292 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2414   chars2418 (    struct StrConcat_2411  self1308 ) {
    return ( (  into_dash_iter2419 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2413   into_dash_iter2417 (    struct StrConcat_2410  dref1297 ) {
    return ( (struct StrConcatIter_2413) { .f_left = ( (  chars2418 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2413   chars2416 (    struct StrConcat_2410  self1308 ) {
    return ( (  into_dash_iter2417 ) ( (  self1308 ) ) );
}

static  struct Maybe_348   next2422 (    struct StrConcatIter_2414 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next2421 (    struct StrConcatIter_2413 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2422 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2409 (    struct Screen_444 *  screen3793 ,    struct StrConcat_2410  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1593 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min790 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size277 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2413  temp2412 =  into_dash_iter2415 ( ( (  chars2416 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_348  __cond2420 =  next2421 (&temp2412);
        if (  __cond2420 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2420 .stuff .Maybe_348_Just_s .field0;
        ( (  put_dash_char2038 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth370 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1996 (   struct env219* env ,    struct Screen_444 *  screen4402 ,    struct Pane_238 *  pane4404 ,    struct ScreenDims_447  sd4406 ,    struct Config_269 *  cfg4408 ) {
    struct Theme_188 *  theme4409 = ( ( * (  cfg4408 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4410 = ( ( * (  cfg4408 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4411 = ( ( * (  cfg4408 ) ) .f_relative_dash_line_dash_numbers );
    int32_t  max_dash_line_dash_num_dash_chars4412 = ( (  size_dash_i32308 ) ( ( (  count1997 ) ( ( (  chars2013 ) ( ( (  num_dash_lines1228 ) ( ( ( * (  pane4404 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4413 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4414 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4415 = ( (  display_dash_line_dash_numbers4410 ) ? (  op_dash_add175 ( (  op_dash_add175 ( (  max_dash_line_dash_num_dash_chars4412 ) , (  num_dash_front_dash_margin4413 ) ) ) , (  num_dash_back_dash_margin4414 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct ScreenDims_447  temp2019 = (  sd4406 );
    temp2019 .  f_from_dash_sx = (  op_dash_add175 ( ( (  sd4406 ) .f_from_dash_sx ) , (  total_dash_margin4415 ) ) );
    ( (  update_dash_screen_dash_offset2016 ) ( (  pane4404 ) ,  ( temp2019 ) ) );
    struct ScreenCursorOffset_240  sc_dash_off4416 = ( ( * (  pane4404 ) ) .f_sc_dash_off );
    struct RangeIter_169  temp2020 =  into_dash_iter170 ( ( (  to179 ) ( (  op_dash_add175 ( ( (  sc_dash_off4416 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min790 ) ( ( (  num_dash_lines1228 ) ( ( ( * (  pane4404 ) ) .f_buf ) ) ) ,  (  op_dash_add175 ( ( (  sc_dash_off4416 ) .f_screen_dash_top ) , ( (  screen_dash_height2018 ) ( (  sd4406 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond2021 =  next172 (&temp2020);
        if (  __cond2021 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4418 =  __cond2021 .stuff .Maybe_171_Just_s .field0;
        int32_t  ybi4419 = (  op_dash_sub180 ( (  line_dash_num4418 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4420 = ( (  vi_dash_bi1230 ) ( ( ( * (  pane4404 ) ) .f_buf ) ,  (  ybi4419 ) ,  ( (  sc_dash_off4416 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4421 = ( (  line294 ) ( ( ( * (  pane4404 ) ) .f_buf ) ,  (  ybi4419 ) ) );
        int32_t  ys4422 = (  op_dash_sub180 ( (  op_dash_sub180 ( (  op_dash_add175 ( ( (  sd4406 ) .f_from_dash_sy ) , (  line_dash_num4418 ) ) ) , ( (  sc_dash_off4416 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4410 ) ) {
            if ( (  eq693 ( ( ( ( * (  pane4404 ) ) .f_cursor ) .f_line ) , (  ybi4419 ) ) ) ) {
                ( (  set_dash_colors2022 ) ( (  screen4402 ) ,  ( ( * (  theme4409 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors2022 ) ( (  screen4402 ) ,  ( ( * (  theme4409 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4423 = ( ( ( ! (  relative_dash_line_dash_numbers4411 ) ) || (  eq693 ( ( ( ( * (  pane4404 ) ) .f_cursor ) .f_line ) , (  ybi4419 ) ) ) ) ? (  line_dash_num4418 ) : ( (  abs2024 ) ( (  op_dash_sub180 ( ( ( ( * (  pane4404 ) ) .f_cursor ) .f_line ) , (  ybi4419 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right2025 ) ( (  screen4402 ) ,  (  line_dash_display4423 ) ,  (  op_dash_add175 ( (  op_dash_sub180 ( (  op_dash_sub180 ( ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen4402 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4406 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4415 ) ) ) , (  num_dash_back_dash_margin4414 ) ) ) ,  (  ys4422 ) ) );
            ( (  set_dash_colors2022 ) ( (  screen4402 ) ,  ( ( * (  theme4409 ) ) .f_default ) ) );
        }
        int32_t  vx4424 = (  op_dash_sub180 ( ( (  pos_dash_vi288 ) ( ( ( * (  pane4404 ) ) .f_buf ) ,  ( (  mk826 ) ( (  ybi4419 ) ,  (  xbi4420 ) ) ) ) ) , ( (  sc_dash_off4416 ) .f_screen_dash_left ) ) );
        ( (  assert2041 ) ( (  cmp173 ( (  vx4424 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_2042_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4424 ) ) ) ) );
        int32_t  left_dash_offset4425 = (  op_dash_add175 ( ( (  sd4406 ) .f_from_dash_sx ) , (  total_dash_margin4415 ) ) );
        struct AppendIter_2049  temp2048 =  into_dash_iter2050 ( ( (  append2051 ) ( ( (  chars292 ) ( ( (  byte_dash_substr_dash_from581 ) ( (  line_dash_content4421 ) ,  ( (  i32_dash_size277 ) ( (  xbi4420 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond2052 =  next2053 (&temp2048);
            if (  __cond2052 .tag == 0 ) {
                break;
            }
            struct Char_65  c4427 =  __cond2052 .stuff .Maybe_348_Just_s .field0;
            if ( (  cmp173 ( (  vx4424 ) , ( (  sd4406 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4428 = ( (  mk826 ) ( (  ybi4419 ) ,  (  xbi4420 ) ) );
            bool  is_dash_cursor4429 = (  eq692 ( (  curpos4428 ) , ( ( * (  pane4404 ) ) .f_cursor ) ) );
            bool  in_dash_selection4430 = ( (  is_dash_in_dash_selection2054 ) ( (  pane4404 ) ,  ( (  mk826 ) ( (  ybi4419 ) ,  (  xbi4420 ) ) ) ) );
            if ( (  is_dash_cursor4429 ) ) {
                ( (  set_dash_colors2022 ) ( (  screen4402 ) ,  ( ( * (  theme4409 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4430 ) ) {
                    ( (  set_dash_colors2022 ) ( (  screen4402 ) ,  ( ( * (  theme4409 ) ) .f_selection ) ) );
                } else {
                    struct envunion220  temp2060 = ( (struct envunion220){ .fun = (  struct Maybe_221  (*) (  struct env152*  ,    struct TextBuf_117 *  ,    struct Pos_26  ) )highlight_dash_at2061 , .env =  env->envinst152 } );
                    struct env2057 envinst2057 = {
                        .screen4402 =  screen4402 ,
                        .theme4409 =  theme4409 ,
                    };
                    ( (  if_dash_just2056 ) ( ( temp2060.fun ( &temp2060.env ,  ( ( * (  pane4404 ) ) .f_buf ) ,  (  curpos4428 ) ) ) ,  ( (struct envunion2058){ .fun = (  enum Unit_8  (*) (  struct env2057*  ,    enum HighlightType_18  ) )lam2375 , .env =  envinst2057 } ) ) );
                }
            }
            struct Maybe_79  dref4433 = ( (  char_dash_replacement356 ) ( (  c4427 ) ) );
            if ( dref4433.tag == Maybe_79_None_t ) {
                if ( ( ! ( (  cmp173 ( (  vx4424 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  op_dash_sub180 ( (  op_dash_add175 ( (  vx4424 ) , ( (  char_dash_screen_dash_width354 ) ( (  c4427 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4406 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char2038 ) ( (  screen4402 ) ,  (  c4427 ) ,  (  op_dash_add175 ( (  left_dash_offset4425 ) , (  vx4424 ) ) ) ,  (  ys4422 ) ) );
                }
                vx4424 = (  op_dash_add175 ( (  vx4424 ) , ( (  char_dash_screen_dash_width354 ) ( (  c4427 ) ) ) ) );
            }
            else {
                if ( dref4433.tag == Maybe_79_Just_t ) {
                    struct StrViewIter_290  temp2405 =  into_dash_iter291 ( ( (  chars292 ) ( ( dref4433 .stuff .Maybe_79_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_348  __cond2406 =  next349 (&temp2405);
                        if (  __cond2406 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4436 =  __cond2406 .stuff .Maybe_348_Just_s .field0;
                        if ( (  cmp173 ( (  vx4424 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char2038 ) ( (  screen4402 ) ,  (  c4436 ) ,  (  op_dash_add175 ( (  left_dash_offset4425 ) , (  vx4424 ) ) ) ,  (  ys4422 ) ) );
                        }
                        vx4424 = (  op_dash_add175 ( (  vx4424 ) , ( (  char_dash_screen_dash_width354 ) ( (  c4436 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors2022 ) ( (  screen4402 ) ,  ( ( * (  theme4409 ) ) .f_default ) ) );
            xbi4420 = (  op_dash_add175 ( (  xbi4420 ) , ( (  size_dash_i32308 ) ( ( (  c4427 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors2022 ) ( (  screen4402 ) ,  ( ( * (  theme4409 ) ) .f_overlay ) ) );
    struct StrView_27  modename4437 = ( (  short_dash_mode_dash_name2407 ) ( ( ( * (  pane4404 ) ) .f_mode ) ) );
    ( (  draw_dash_str2409 ) ( (  screen4402 ) ,  ( ( StrConcat_2410_StrConcat ) ( ( ( StrConcat_2411_StrConcat ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  modename4437 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4406 ) .f_from_dash_sx ) ,  ( (  sd4406 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2424 {
    ;
    ;
    ;
    struct Screen_444 *  screen4853;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion2425 {
    enum Unit_8  (*fun) (  struct env2424*  ,    struct StrView_27  );
    struct env2424 env;
};

static  enum Unit_8   if_dash_just2423 (    struct Maybe_79  x1601 ,   struct envunion2425  fun1603 ) {
    struct Maybe_79  dref1604 = (  x1601 );
    if ( dref1604.tag == Maybe_79_Just_t ) {
        struct envunion2425  temp2426 = (  fun1603 );
        ( temp2426.fun ( &temp2426.env ,  ( dref1604 .stuff .Maybe_79_Just_s .field0 ) ) );
    }
    else {
        if ( dref1604.tag == Maybe_79_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2427 (   struct env2424* env ,    struct StrView_27  msg4858 ) {
    int32_t  num_dash_chars4859 = ( (  size_dash_i32308 ) ( ( (  count365 ) ( ( (  chars292 ) ( (  msg4858 ) ) ) ) ) ) );
    ( (  draw_dash_str2409 ) ( ( env->screen4853 ) ,  ( ( StrConcat_2410_StrConcat ) ( ( ( StrConcat_2411_StrConcat ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  msg4858 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1592 ( (  op_dash_sub180 ( ( (  u32_dash_i321982 ) ( ( ( * ( ( * ( env->screen4853 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4859 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  op_dash_sub180 ( ( (  u32_dash_i321982 ) ( ( ( * ( ( * ( env->screen4853 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2430 {
    struct StrView_27  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2430 StrConcat_2430_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2430 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2429 {
    struct StrConcat_2430  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2429 StrConcat_2429_StrConcat (  struct StrConcat_2430  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2429 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2428 {
    struct StrConcat_2429  field0;
    struct Char_65  field1;
};

static struct StrConcat_2428 StrConcat_2428_StrConcat (  struct StrConcat_2429  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2428 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2433 {
    struct StrConcatIter_1807  f_left;
    struct StrViewIter_290  f_right;
};

struct StrConcatIter_2432 {
    struct StrConcatIter_2433  f_left;
    struct AppendIter_1155  f_right;
};

static  struct StrConcatIter_2432   into_dash_iter2435 (    struct StrConcatIter_2432  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_348   next2437 (    struct StrConcatIter_2433 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next1815 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next2436 (    struct StrConcatIter_2432 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2437 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2434 (    struct StrConcatIter_2432  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrConcatIter_2432  it1124 = ( (  into_dash_iter2435 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next2436 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2438 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2438);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2439;
    return (  temp2439 );
}

static  size_t   lam2440 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add353 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2431 (    struct StrConcatIter_2432  it1129 ) {
    return ( (  reduce2434 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2440 ) ) );
}

static  struct StrConcatIter_1807   into_dash_iter2446 (    struct StrConcat_2430  dref1297 ) {
    return ( (struct StrConcatIter_1807) { .f_left = ( (  chars292 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1774 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_1807   chars2445 (    struct StrConcat_2430  self1308 ) {
    return ( (  into_dash_iter2446 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2433   into_dash_iter2444 (    struct StrConcat_2429  dref1297 ) {
    return ( (struct StrConcatIter_2433) { .f_left = ( (  chars2445 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars292 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2433   chars2443 (    struct StrConcat_2429  self1308 ) {
    return ( (  into_dash_iter2444 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2432   into_dash_iter2442 (    struct StrConcat_2428  dref1297 ) {
    return ( (struct StrConcatIter_2432) { .f_left = ( (  chars2443 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2432   chars2441 (    struct StrConcat_2428  self1308 ) {
    return ( (  into_dash_iter2442 ) ( (  self1308 ) ) );
}

static  enum Unit_8   draw_dash_str2447 (    struct Screen_444 *  screen3793 ,    struct StrConcat_2428  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1593 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min790 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size277 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2432  temp2448 =  into_dash_iter2435 ( ( (  chars2441 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_348  __cond2449 =  next2436 (&temp2448);
        if (  __cond2449 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2449 .stuff .Maybe_348_Just_s .field0;
        ( (  put_dash_char2038 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth370 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2450 {
    struct StrConcat_2429  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2450 StrConcat_2450_StrConcat (  struct StrConcat_2429  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2450 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2452 {
    struct StrConcatIter_2433  f_left;
    struct StrViewIter_290  f_right;
};

static  struct StrConcatIter_2452   into_dash_iter2454 (    struct StrConcatIter_2452  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_348   next2455 (    struct StrConcatIter_2452 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2437 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2453 (    struct StrConcatIter_2452  iterable1118 ,    size_t  base1120 ,    size_t (*  fun1122 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1123 = (  base1120 );
    struct StrConcatIter_2452  it1124 = ( (  into_dash_iter2454 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref1125 = ( (  next2455 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_348_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_348_Just_t ) {
                x1123 = ( (  fun1122 ) ( ( dref1125 .stuff .Maybe_348_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2456 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2456);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2457;
    return (  temp2457 );
}

static  size_t   lam2458 (    struct Char_65  dref1130 ,    size_t  x1132 ) {
    return (  op_dash_add353 ( (  x1132 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2451 (    struct StrConcatIter_2452  it1129 ) {
    return ( (  reduce2453 ) ( (  it1129 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2458 ) ) );
}

static  struct StrConcatIter_2452   into_dash_iter2460 (    struct StrConcat_2450  dref1297 ) {
    return ( (struct StrConcatIter_2452) { .f_left = ( (  chars2443 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars292 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2452   chars2459 (    struct StrConcat_2450  self1308 ) {
    return ( (  into_dash_iter2460 ) ( (  self1308 ) ) );
}

static  enum Unit_8   draw_dash_str2461 (    struct Screen_444 *  screen3793 ,    struct StrConcat_2450  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1593 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min790 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size277 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2452  temp2462 =  into_dash_iter2454 ( ( (  chars2459 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_348  __cond2463 =  next2455 (&temp2462);
        if (  __cond2463 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2463 .stuff .Maybe_348_Just_s .field0;
        ( (  put_dash_char2038 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth370 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str2464 (    struct Screen_444 *  screen3793 ,    struct StrView_27  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1593 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min790 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size277 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_290  temp2465 =  into_dash_iter291 ( ( (  chars292 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_348  __cond2466 =  next349 (&temp2465);
        if (  __cond2466 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2466 .stuff .Maybe_348_Just_s .field0;
        ( (  put_dash_char2038 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth370 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct Zip_2468 {
    struct SliceIter_1957  f_left_dash_it;
    struct FromIter_537  f_right_dash_it;
};

static  struct Zip_2468   into_dash_iter2469 (    struct Zip_2468  self936 ) {
    return (  self936 );
}

static  struct Zip_2468   zip2470 (    struct Slice_267  left947 ,    struct FromIter_537  right949 ) {
    struct SliceIter_1957  left_dash_it950 = ( (  into_dash_iter1958 ) ( (  left947 ) ) );
    struct FromIter_537  right_dash_it951 = ( (  into_dash_iter547 ) ( (  right949 ) ) );
    return ( (struct Zip_2468) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

struct Tuple2_2473 {
    struct MenuItem_268  field0;
    int32_t  field1;
};

static struct Tuple2_2473 Tuple2_2473_Tuple2 (  struct MenuItem_268  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2473 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_2472 {
    enum {
        Maybe_2472_None_t,
        Maybe_2472_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2473  field0;
        } Maybe_2472_Just_s;
    } stuff;
};

static struct Maybe_2472 Maybe_2472_Just (  struct Tuple2_2473  field0 ) {
    return ( struct Maybe_2472 ) { .tag = Maybe_2472_Just_t, .stuff = { .Maybe_2472_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2472   next2474 (    struct Zip_2468 *  self939 ) {
    struct Zip_2468  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_1960  dref941 = ( (  next1961 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_1960_None_t ) {
            return ( (struct Maybe_2472) { .tag = Maybe_2472_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_1960_Just_t ) {
                struct Maybe_171  dref943 = ( (  next543 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_2472) { .tag = Maybe_2472_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next1961 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2472_Just ) ( ( ( Tuple2_2473_Tuple2 ) ( ( dref941 .stuff .Maybe_1960_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct StrConcat_2477 {
    char  field0;
    struct Char_65  field1;
};

static struct StrConcat_2477 StrConcat_2477_StrConcat (  char  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2477 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2476 {
    struct StrConcat_2477  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2476 StrConcat_2476_StrConcat (  struct StrConcat_2477  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2476 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2480 {
    struct AppendIter_1155  f_left;
    struct AppendIter_1155  f_right;
};

struct StrConcatIter_2479 {
    struct StrConcatIter_2480  f_left;
    struct StrViewIter_290  f_right;
};

static  struct StrConcatIter_2479   into_dash_iter2481 (    struct StrConcatIter_2479  self1290 ) {
    return (  self1290 );
}

static  struct AppendIter_1155   chars2486 (    char  self1658 ) {
    return ( (  single1191 ) ( ( (  ascii_dash_char1862 ) ( (  self1658 ) ) ) ) );
}

static  struct StrConcatIter_2480   into_dash_iter2485 (    struct StrConcat_2477  dref1297 ) {
    return ( (struct StrConcatIter_2480) { .f_left = ( (  chars2486 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2480   chars2484 (    struct StrConcat_2477  self1308 ) {
    return ( (  into_dash_iter2485 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2479   into_dash_iter2483 (    struct StrConcat_2476  dref1297 ) {
    return ( (struct StrConcatIter_2479) { .f_left = ( (  chars2484 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars292 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2479   chars2482 (    struct StrConcat_2476  self1308 ) {
    return ( (  into_dash_iter2483 ) ( (  self1308 ) ) );
}

static  struct Maybe_348   next2489 (    struct StrConcatIter_2480 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next2488 (    struct StrConcatIter_2479 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2489 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2475 (    struct Screen_444 *  screen3793 ,    struct StrConcat_2476  s3795 ,    int32_t  x3797 ,    int32_t  y3799 ) {
    int32_t  w3800 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp173 ( (  y3799 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp173 ( (  y3799 ) , ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3793 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3801 = (  op_dash_add175 ( (  op_dash_mul1593 ( (  y3799 ) , (  w3800 ) ) ) , (  x3797 ) ) );
    int32_t  x3802 = ( (  min790 ) ( (  x3797 ) ,  (  w3800 ) ) );
    size_t  max_dash_len3803 = ( (  i32_dash_size277 ) ( (  op_dash_sub180 ( (  w3800 ) , (  x3802 ) ) ) ) );
    int32_t  xx3804 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2479  temp2478 =  into_dash_iter2481 ( ( (  chars2482 ) ( (  s3795 ) ) ) );
    while (true) {
        struct Maybe_348  __cond2487 =  next2488 (&temp2478);
        if (  __cond2487 .tag == 0 ) {
            break;
        }
        struct Char_65  c3806 =  __cond2487 .stuff .Maybe_348_Just_s .field0;
        ( (  put_dash_char2038 ) ( (  screen3793 ) ,  (  c3806 ) ,  (  op_dash_add175 ( (  x3802 ) , (  xx3804 ) ) ) ,  (  y3799 ) ) );
        xx3804 = (  op_dash_add175 ( (  xx3804 ) , ( (  rendered_dash_wcwidth370 ) ( (  c3806 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1994 (   struct env442* env ,    struct Screen_444 *  screen4853 ,    struct Editor_264 *  ed4855 ) {
    struct ScreenDims_447  screen_dash_dims4856 = ( (struct ScreenDims_447) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub180 ( ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen4853 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub180 ( ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen4853 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion443  temp1995 = ( (struct envunion443){ .fun = (  enum Unit_8  (*) (  struct env219*  ,    struct Screen_444 *  ,    struct Pane_238 *  ,    struct ScreenDims_447  ,    struct Config_269 *  ) )render1996 , .env =  env->envinst219 } );
    ( temp1995.fun ( &temp1995.env ,  (  screen4853 ) ,  ( (  pane1225 ) ( (  ed4855 ) ) ) ,  (  screen_dash_dims4856 ) ,  ( ( * (  ed4855 ) ) .f_cfg ) ) );
    struct env2424 envinst2424 = {
        .screen4853 =  screen4853 ,
    };
    ( (  if_dash_just2423 ) ( ( ( * (  ed4855 ) ) .f_msg ) ,  ( (struct envunion2425){ .fun = (  enum Unit_8  (*) (  struct env2424*  ,    struct StrView_27  ) )lam2427 , .env =  envinst2424 } ) ) );
    struct EditorMode_265  dref4860 = ( ( * (  ed4855 ) ) .f_mode );
    if ( dref4860.tag == EditorMode_265_Normal_t ) {
    }
    else {
        if ( dref4860.tag == EditorMode_265_Cmd_t ) {
            int32_t  num_dash_chars4862 = ( (  size_dash_i32308 ) ( ( (  count365 ) ( ( (  chars1774 ) ( ( dref4860 .stuff .EditorMode_265_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4863 = ( (  eq693 ( ( (  mod1591 ) ( (  num_dash_chars4862 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike639 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4864 = (  op_dash_add175 ( (  num_dash_chars4862 ) , ( (  mod1591 ) ( (  num_dash_chars4862 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
            struct StrConcat_2428  full_dash_str4865 = ( ( StrConcat_2428_StrConcat ) ( ( ( StrConcat_2429_StrConcat ) ( ( ( StrConcat_2430_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)" \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4860 .stuff .EditorMode_265_Cmd_s .field1 ) ) ) ,  (  pad4863 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4866 = ( (  size_dash_i32308 ) ( ( (  count2431 ) ( ( (  chars2441 ) ( (  full_dash_str4865 ) ) ) ) ) ) );
            ( (  draw_dash_str2447 ) ( (  screen4853 ) ,  (  full_dash_str4865 ) ,  (  op_dash_div1592 ( (  op_dash_sub180 ( ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen4853 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4866 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
        }
        else {
            if ( dref4860.tag == EditorMode_265_Search_t ) {
                int32_t  num_dash_chars4868 = ( (  size_dash_i32308 ) ( ( (  count365 ) ( ( (  chars1774 ) ( ( dref4860 .stuff .EditorMode_265_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4869 = ( (  eq693 ( ( (  mod1591 ) ( (  num_dash_chars4868 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string217 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike639 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4870 = (  op_dash_add175 ( (  num_dash_chars4868 ) , ( (  mod1591 ) ( (  num_dash_chars4868 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
                struct StrConcat_2450  full_dash_str4871 = ( ( StrConcat_2450_StrConcat ) ( ( ( StrConcat_2429_StrConcat ) ( ( ( StrConcat_2430_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)" \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4860 .stuff .EditorMode_265_Search_s .field1 ) ) ) ,  (  pad4869 ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4872 = ( (  size_dash_i32308 ) ( ( (  count2451 ) ( ( (  chars2459 ) ( (  full_dash_str4871 ) ) ) ) ) ) );
                ( (  draw_dash_str2461 ) ( (  screen4853 ) ,  (  full_dash_str4871 ) ,  (  op_dash_div1592 ( (  op_dash_sub180 ( ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen4853 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4872 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            }
            else {
                if ( dref4860.tag == EditorMode_265_Menu_t ) {
                    ( (  draw_dash_str2464 ) ( (  screen4853 ) ,  ( ( dref4860 .stuff .EditorMode_265_Menu_s .field0 ) .f_name ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
                    struct Zip_2468  temp2467 =  into_dash_iter2469 ( ( (  zip2470 ) ( ( ( dref4860 .stuff .EditorMode_265_Menu_s .field0 ) .f_items ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
                    while (true) {
                        struct Maybe_2472  __cond2471 =  next2474 (&temp2467);
                        if (  __cond2471 .tag == 0 ) {
                            break;
                        }
                        struct Tuple2_2473  dref4874 =  __cond2471 .stuff .Maybe_2472_Just_s .field0;
                        ( (  draw_dash_str2475 ) ( (  screen4853 ) ,  ( ( StrConcat_2476_StrConcat ) ( ( ( StrConcat_2477_StrConcat ) ( ( ( dref4874 .field0 ) .f_key ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( ( dref4874 .field0 ) .f_description ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( dref4874 .field1 ) ) );
                    }
                }
                else {
                    if ( true ) {
                        ( (  todo1832 ) ( ) );
                    }
                }
            }
        }
    }
    int32_t  temp2490 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4877 = ( &temp2490 );
    return ( Unit_8_Unit );
}

struct RenderState_2492 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_154  f_fg;
    struct Color_154  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2499 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2499 StrConcat_2499_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2499 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2498 {
    struct StrConcat_2499  field0;
    struct Char_65  field1;
};

static struct StrConcat_2498 StrConcat_2498_StrConcat (  struct StrConcat_2499  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2498 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2497 {
    struct StrConcat_2498  field0;
    uint32_t  field1;
};

static struct StrConcat_2497 StrConcat_2497_StrConcat (  struct StrConcat_2498  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2497 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2496 {
    struct StrConcat_2497  field0;
    struct Char_65  field1;
};

static struct StrConcat_2496 StrConcat_2496_StrConcat (  struct StrConcat_2497  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2496 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2505 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2504 {
    struct StrViewIter_290  f_left;
    struct IntStrIter_2505  f_right;
};

struct StrConcatIter_2503 {
    struct StrConcatIter_2504  f_left;
    struct AppendIter_1155  f_right;
};

struct StrConcatIter_2502 {
    struct StrConcatIter_2503  f_left;
    struct IntStrIter_2505  f_right;
};

struct StrConcatIter_2501 {
    struct StrConcatIter_2502  f_left;
    struct AppendIter_1155  f_right;
};

static  struct StrConcatIter_2501   into_dash_iter2507 (    struct StrConcatIter_2501  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_348   next2512 (    struct IntStrIter_2505 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_348_Just ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    uint32_t  trim_dash_down1400 = ( (  pow164 ) ( (  from_dash_integral181 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1401 = (  op_dash_div163 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    uint32_t  upper_dash_mask1402 = (  op_dash_mul183 ( (  op_dash_div163 ( (  upper1401 ) , (  from_dash_integral181 ( 10 ) ) ) ) , (  from_dash_integral181 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast161 ) ( (  op_dash_sub185 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81174 ) ( (  op_dash_add1064 ( (  digit1403 ) , (  from_dash_integral325 ( 48 ) ) ) ) ) );
    return ( ( Maybe_348_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_348   next2511 (    struct StrConcatIter_2504 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next2512 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next2510 (    struct StrConcatIter_2503 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2511 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next2509 (    struct StrConcatIter_2502 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2510 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next2512 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next2508 (    struct StrConcatIter_2501 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2509 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2500 (    struct StrConcatIter_2501  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_2501  temp2506 = ( (  into_dash_iter2507 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2501 *  it1102 = ( &temp2506 );
    while ( ( true ) ) {
        struct Maybe_348  dref1103 = ( (  next2508 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_348_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_348_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_348_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2523 (    uint32_t  self1407 ) {
    if ( (  eq2399 ( (  self1407 ) , (  from_dash_integral181 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp186 ( (  self1407 ) , (  from_dash_integral181 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div163 ( (  self1407 ) , (  from_dash_integral181 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2505   uint_dash_iter2522 (    uint32_t  int1414 ) {
    return ( (struct IntStrIter_2505) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits2523 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2505   chars2521 (    uint32_t  self1796 ) {
    return ( (  uint_dash_iter2522 ) ( (  self1796 ) ) );
}

static  struct StrConcatIter_2504   into_dash_iter2520 (    struct StrConcat_2499  dref1297 ) {
    return ( (struct StrConcatIter_2504) { .f_left = ( (  chars292 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2521 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2504   chars2519 (    struct StrConcat_2499  self1308 ) {
    return ( (  into_dash_iter2520 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2503   into_dash_iter2518 (    struct StrConcat_2498  dref1297 ) {
    return ( (struct StrConcatIter_2503) { .f_left = ( (  chars2519 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2503   chars2517 (    struct StrConcat_2498  self1308 ) {
    return ( (  into_dash_iter2518 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2502   into_dash_iter2516 (    struct StrConcat_2497  dref1297 ) {
    return ( (struct StrConcatIter_2502) { .f_left = ( (  chars2517 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2521 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2502   chars2515 (    struct StrConcat_2497  self1308 ) {
    return ( (  into_dash_iter2516 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2501   into_dash_iter2514 (    struct StrConcat_2496  dref1297 ) {
    return ( (struct StrConcatIter_2501) { .f_left = ( (  chars2515 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2501   chars2513 (    struct StrConcat_2496  self1308 ) {
    return ( (  into_dash_iter2514 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print2495 (    struct StrConcat_2496  s1335 ) {
    ( (  for_dash_each2500 ) ( ( (  chars2513 ) ( (  s1335 ) ) ) ,  (  printf_dash_char315 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2494 (    uint32_t  x2704 ,    uint32_t  y2706 ) {
    uint32_t  x2707 = (  op_dash_add187 ( (  x2704 ) , (  from_dash_integral181 ( 1 ) ) ) );
    uint32_t  y2708 = (  op_dash_add187 ( (  y2706 ) , (  from_dash_integral181 ( 1 ) ) ) );
    ( (  print2495 ) ( ( ( StrConcat_2496_StrConcat ) ( ( ( StrConcat_2497_StrConcat ) ( ( ( StrConcat_2498_StrConcat ) ( ( ( StrConcat_2499_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[" ) ,  ( 2 ) ) ) ,  (  y2708 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  (  x2707 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_445   subslice2526 (    struct Slice_445  slice2204 ,    size_t  from2206 ,    size_t  to2208 ) {
    struct Cell_446 *  begin_dash_ptr2209 = ( (  offset_dash_ptr985 ) ( ( (  slice2204 ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  from2206 ) ) ) ) );
    if ( ( (  cmp299 ( (  from2206 ) , (  to2208 ) ) != 0 ) || (  cmp299 ( (  from2206 ) , ( (  slice2204 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_445) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2210 = (  op_dash_sub455 ( ( (  min584 ) ( (  to2208 ) ,  ( (  slice2204 ) .f_count ) ) ) , (  from2206 ) ) );
    return ( (struct Slice_445) { .f_ptr = (  begin_dash_ptr2209 ) , .f_count = (  count2210 ) } );
}

struct SliceIter_2529 {
    struct Slice_445  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2528 {
    struct SliceIter_2529  f_left_dash_it;
    struct SliceIter_2529  f_right_dash_it;
};

struct Tuple2_2530 {
    struct Cell_446  field0;
    struct Cell_446  field1;
};

static struct Tuple2_2530 Tuple2_2530_Tuple2 (  struct Cell_446  field0 ,  struct Cell_446  field1 ) {
    return ( struct Tuple2_2530 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2532 {
    bool (*  fun1160 )(    struct Tuple2_2530  );
};

struct envunion2533 {
    bool  (*fun) (  struct env2532*  ,    struct Tuple2_2530  ,    bool  );
    struct env2532 env;
};

static  struct Zip_2528   into_dash_iter2534 (    struct Zip_2528  self936 ) {
    return (  self936 );
}

struct Maybe_2535 {
    enum {
        Maybe_2535_None_t,
        Maybe_2535_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2530  field0;
        } Maybe_2535_Just_s;
    } stuff;
};

static struct Maybe_2535 Maybe_2535_Just (  struct Tuple2_2530  field0 ) {
    return ( struct Maybe_2535 ) { .tag = Maybe_2535_Just_t, .stuff = { .Maybe_2535_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_990   next2537 (    struct SliceIter_2529 *  self2256 ) {
    size_t  off2257 = ( ( * (  self2256 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2256 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_990) { .tag = Maybe_990_None_t } );
    }
    struct Cell_446  elem2258 = ( * ( (  offset_dash_ptr985 ) ( ( ( ( * (  self2256 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64346 ) ( (  off2257 ) ) ) ) ) );
    (*  self2256 ) .f_current_dash_offset = (  op_dash_add353 ( (  off2257 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_990_Just ) ( (  elem2258 ) ) );
}

static  struct Maybe_2535   next2536 (    struct Zip_2528 *  self939 ) {
    struct Zip_2528  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_990  dref941 = ( (  next2537 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_990_None_t ) {
            return ( (struct Maybe_2535) { .tag = Maybe_2535_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_990_Just_t ) {
                struct Maybe_990  dref943 = ( (  next2537 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_990_None_t ) {
                    return ( (struct Maybe_2535) { .tag = Maybe_2535_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_990_Just_t ) {
                        ( (  next2537 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2537 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2535_Just ) ( ( ( Tuple2_2530_Tuple2 ) ( ( dref941 .stuff .Maybe_990_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_990_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2531 (    struct Zip_2528  iterable1118 ,    bool  base1120 ,   struct envunion2533  fun1122 ) {
    bool  x1123 = (  base1120 );
    struct Zip_2528  it1124 = ( (  into_dash_iter2534 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_2535  dref1125 = ( (  next2536 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_2535_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_2535_Just_t ) {
                struct envunion2533  temp2538 = (  fun1122 );
                x1123 = ( temp2538.fun ( &temp2538.env ,  ( dref1125 .stuff .Maybe_2535_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2539 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2539);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2540;
    return (  temp2540 );
}

static  bool   lam2541 (   struct env2532* env ,    struct Tuple2_2530  e1162 ,    bool  x1164 ) {
    return ( ( ( env->fun1160 ) ( (  e1162 ) ) ) || (  x1164 ) );
}

static  bool   any2527 (    struct Zip_2528  it1158 ,    bool (*  fun1160 )(    struct Tuple2_2530  ) ) {
    struct env2532 envinst2532 = {
        .fun1160 =  fun1160 ,
    };
    return ( (  reduce2531 ) ( (  it1158 ) ,  ( false ) ,  ( (struct envunion2533){ .fun = (  bool  (*) (  struct env2532*  ,    struct Tuple2_2530  ,    bool  ) )lam2541 , .env =  envinst2532 } ) ) );
}

static  struct SliceIter_2529   into_dash_iter2543 (    struct Slice_445  self2250 ) {
    return ( (struct SliceIter_2529) { .f_slice = (  self2250 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2528   zip2542 (    struct Slice_445  left947 ,    struct Slice_445  right949 ) {
    struct SliceIter_2529  left_dash_it950 = ( (  into_dash_iter2543 ) ( (  left947 ) ) );
    struct SliceIter_2529  right_dash_it951 = ( (  into_dash_iter2543 ) ( (  right949 ) ) );
    return ( (struct Zip_2528) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

struct Tuple2_2547 {
    struct Color_154  field0;
    struct Color_154  field1;
};

static struct Tuple2_2547 Tuple2_2547_Tuple2 (  struct Color_154  field0 ,  struct Color_154  field1 ) {
    return ( struct Tuple2_2547 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_155 *   cast2551 (    int32_t *  x395 ) {
    return ( (enum Color8_155 * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2549 (    enum Color8_155  x651 ) {
    int32_t  temp2550 = ( (  zeroed1136 ) ( ) );
    int32_t *  y652 = ( &temp2550 );
    enum Color8_155 *  yp653 = ( (  cast2551 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  bool   eq2548 (    enum Color8_155  l2734 ,    enum Color8_155  r2736 ) {
    return (  eq693 ( ( ( (  cast_dash_on_dash_zeroed2549 ) ( (  l2734 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2549 ) ( (  r2736 ) ) ) ) );
}

static  enum Color16_156 *   cast2555 (    int32_t *  x395 ) {
    return ( (enum Color16_156 * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2553 (    enum Color16_156  x651 ) {
    int32_t  temp2554 = ( (  zeroed1136 ) ( ) );
    int32_t *  y652 = ( &temp2554 );
    enum Color16_156 *  yp653 = ( (  cast2555 ) ( (  y652 ) ) );
    (*  yp653 ) = (  x651 );
    return ( * (  y652 ) );
}

static  bool   eq2552 (    enum Color16_156  l2740 ,    enum Color16_156  r2742 ) {
    return (  eq693 ( ( ( (  cast_dash_on_dash_zeroed2553 ) ( (  l2740 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2553 ) ( (  r2742 ) ) ) ) );
}

static  bool   eq2556 (    struct RGB_157  l2770 ,    struct RGB_157  r2772 ) {
    return ( ( (  eq321 ( ( (  l2770 ) .f_r ) , ( (  r2772 ) .f_r ) ) ) && (  eq321 ( ( (  l2770 ) .f_g ) , ( (  r2772 ) .f_g ) ) ) ) && (  eq321 ( ( (  l2770 ) .f_b ) , ( (  r2772 ) .f_b ) ) ) );
}

static  bool   eq2546 (    struct Color_154  l2792 ,    struct Color_154  r2794 ) {
    return ( {  struct Tuple2_2547  dref2795 = ( ( Tuple2_2547_Tuple2 ) ( (  l2792 ) ,  (  r2794 ) ) ) ; dref2795 .field0.tag == Color_154_ColorDefault_t && dref2795 .field1.tag == Color_154_ColorDefault_t ? ( true ) : dref2795 .field0.tag == Color_154_Color8_t && dref2795 .field1.tag == Color_154_Color8_t ? (  eq2548 ( ( dref2795 .field0 .stuff .Color_154_Color8_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_Color8_s .field0 ) ) ) : dref2795 .field0.tag == Color_154_Color16_t && dref2795 .field1.tag == Color_154_Color16_t ? (  eq2552 ( ( dref2795 .field0 .stuff .Color_154_Color16_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_Color16_s .field0 ) ) ) : dref2795 .field0.tag == Color_154_Color256_t && dref2795 .field1.tag == Color_154_Color256_t ? (  eq321 ( ( dref2795 .field0 .stuff .Color_154_Color256_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_Color256_s .field0 ) ) ) : dref2795 .field0.tag == Color_154_ColorRGB_t && dref2795 .field1.tag == Color_154_ColorRGB_t ? (  eq2556 ( ( dref2795 .field0 .stuff .Color_154_ColorRGB_s .field0 ) , ( dref2795 .field1 .stuff .Color_154_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2545 (    struct Cell_446  l3666 ,    struct Cell_446  r3668 ) {
    if ( ( !  eq357 ( ( (  l3666 ) .f_c ) , ( (  r3668 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2546 ( ( (  l3666 ) .f_fg ) , ( (  r3668 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2546 ( ( (  l3666 ) .f_bg ) , ( (  r3668 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2544 (    struct Tuple2_2530  dref3722 ) {
    return ( !  eq2545 ( ( dref3722 .field0 ) , ( dref3722 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2559 (  ) {
    ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82560 (    enum Color8_155  color2745 ) {
    enum Color8_155  dref2746 = (  color2745 );
    switch (  dref2746 ) {
        case Color8_155_Black8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Red8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Green8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Yellow8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Blue8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Magenta8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Cyan8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_White8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162561 (    enum Color16_156  color2749 ) {
    enum Color16_156  dref2750 = (  color2749 );
    switch (  dref2750 ) {
        case Color16_156_Black16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Red16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Green16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Yellow16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Blue16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Magenta16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Cyan16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_White16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlack16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightRed16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightGreen16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightYellow16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlue16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightMagenta16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightCyan16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightWhite16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2565 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2565 StrConcat_2565_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2565 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2564 {
    struct StrConcat_2565  field0;
    struct Char_65  field1;
};

static struct StrConcat_2564 StrConcat_2564_StrConcat (  struct StrConcat_2565  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2564 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2569 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2568 {
    struct StrViewIter_290  f_left;
    struct IntStrIter_2569  f_right;
};

struct StrConcatIter_2567 {
    struct StrConcatIter_2568  f_left;
    struct AppendIter_1155  f_right;
};

static  struct StrConcatIter_2567   into_dash_iter2571 (    struct StrConcatIter_2567  self1290 ) {
    return (  self1290 );
}

struct env2577 {
    uint8_t  base1386;
    ;
};

struct envunion2578 {
    uint8_t  (*fun) (  struct env2577*  ,    int32_t  ,    uint8_t  );
    struct env2577 env;
};

static  uint8_t   reduce2576 (    struct Range_166  iterable1118 ,    uint8_t  base1120 ,   struct envunion2578  fun1122 ) {
    uint8_t  x1123 = (  base1120 );
    struct RangeIter_169  it1124 = ( (  into_dash_iter170 ) ( (  iterable1118 ) ) );
    while ( ( true ) ) {
        struct Maybe_171  dref1125 = ( (  next172 ) ( ( & (  it1124 ) ) ) );
        if ( dref1125.tag == Maybe_171_None_t ) {
            return (  x1123 );
        }
        else {
            if ( dref1125.tag == Maybe_171_Just_t ) {
                struct envunion2578  temp2579 = (  fun1122 );
                x1123 = ( temp2579.fun ( &temp2579.env ,  ( dref1125 .stuff .Maybe_171_Just_s .field0 ) ,  (  x1123 ) ) );
            }
        }
    }
    const char*  temp2580 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2580);
    abort ( );
    ( Unit_8_Unit );
    uint8_t  temp2581;
    return (  temp2581 );
}

static  uint8_t   op_dash_mul2583 (    uint8_t  l279 ,    uint8_t  r281 ) {
    return ( (  l279 ) * (  r281 ) );
}

static  uint8_t   lam2582 (   struct env2577* env ,    int32_t  item1390 ,    uint8_t  x1392 ) {
    return (  op_dash_mul2583 ( (  x1392 ) , ( env->base1386 ) ) );
}

static  uint8_t   pow2575 (    uint8_t  base1386 ,    int32_t  p1388 ) {
    struct env2577 envinst2577 = {
        .base1386 =  base1386 ,
    };
    return ( (  reduce2576 ) ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  p1388 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral325 ( 1 ) ) ,  ( (struct envunion2578){ .fun = (  uint8_t  (*) (  struct env2577*  ,    int32_t  ,    uint8_t  ) )lam2582 , .env =  envinst2577 } ) ) );
}

static  uint8_t   op_dash_div2584 (    uint8_t  l284 ,    uint8_t  r286 ) {
    return ( (  l284 ) / (  r286 ) );
}

static  uint8_t   cast2585 (    uint8_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_348   next2574 (    struct IntStrIter_2569 *  self1399 ) {
    if ( ( ( * (  self1399 ) ) .f_negative ) ) {
        (*  self1399 ) .f_negative = ( false );
        return ( ( Maybe_348_Just ) ( ( (  from_dash_charlike335 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp173 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    uint8_t  trim_dash_down1400 = ( (  pow2575 ) ( (  from_dash_integral325 ( 10 ) ) ,  (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1401 = (  op_dash_div2584 ( ( ( * (  self1399 ) ) .f_int ) , (  trim_dash_down1400 ) ) );
    uint8_t  upper_dash_mask1402 = (  op_dash_mul2583 ( (  op_dash_div2584 ( (  upper1401 ) , (  from_dash_integral325 ( 10 ) ) ) ) , (  from_dash_integral325 ( 10 ) ) ) );
    uint8_t  digit1403 = ( ( (  cast2585 ) ( (  op_dash_sub1063 ( (  upper1401 ) , (  upper_dash_mask1402 ) ) ) ) ) );
    (*  self1399 ) .f_len = (  op_dash_sub180 ( ( ( * (  self1399 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1404 = ( (  char_dash_from_dash_u81174 ) ( (  op_dash_add1064 ( (  digit1403 ) , (  from_dash_integral325 ( 48 ) ) ) ) ) );
    return ( ( Maybe_348_Just ) ( (  digit_dash_char1404 ) ) );
}

static  struct Maybe_348   next2573 (    struct StrConcatIter_2568 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next349 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next2574 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next2572 (    struct StrConcatIter_2567 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2573 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2566 (    struct StrConcatIter_2567  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_2567  temp2570 = ( (  into_dash_iter2571 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2567 *  it1102 = ( &temp2570 );
    while ( ( true ) ) {
        struct Maybe_348  dref1103 = ( (  next2572 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_348_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_348_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_348_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2592 (    uint8_t  self1407 ) {
    if ( (  eq321 ( (  self1407 ) , (  from_dash_integral325 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1408 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp338 ( (  self1407 ) , (  from_dash_integral325 ( 0 ) ) ) == 2 ) ) {
        self1407 = (  op_dash_div2584 ( (  self1407 ) , (  from_dash_integral325 ( 10 ) ) ) );
        digits1408 = (  op_dash_add175 ( (  digits1408 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1408 );
}

static  struct IntStrIter_2569   uint_dash_iter2591 (    uint8_t  int1414 ) {
    return ( (struct IntStrIter_2569) { .f_int = (  int1414 ) , .f_len = ( (  count_dash_digits2592 ) ( (  int1414 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2569   chars2590 (    uint8_t  self1802 ) {
    return ( (  uint_dash_iter2591 ) ( (  self1802 ) ) );
}

static  struct StrConcatIter_2568   into_dash_iter2589 (    struct StrConcat_2565  dref1297 ) {
    return ( (struct StrConcatIter_2568) { .f_left = ( (  chars292 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2590 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2568   chars2588 (    struct StrConcat_2565  self1308 ) {
    return ( (  into_dash_iter2589 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2567   into_dash_iter2587 (    struct StrConcat_2564  dref1297 ) {
    return ( (struct StrConcatIter_2567) { .f_left = ( (  chars2588 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2567   chars2586 (    struct StrConcat_2564  self1308 ) {
    return ( (  into_dash_iter2587 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print2563 (    struct StrConcat_2564  s1335 ) {
    ( (  for_dash_each2566 ) ( ( (  chars2586 ) ( (  s1335 ) ) ) ,  (  printf_dash_char315 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562562 (    uint8_t  color2763 ) {
    ( (  print2563 ) ( ( ( StrConcat_2564_StrConcat ) ( ( ( StrConcat_2565_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2763 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2598 {
    struct StrConcat_2564  field0;
    uint8_t  field1;
};

static struct StrConcat_2598 StrConcat_2598_StrConcat (  struct StrConcat_2564  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2598 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2597 {
    struct StrConcat_2598  field0;
    struct Char_65  field1;
};

static struct StrConcat_2597 StrConcat_2597_StrConcat (  struct StrConcat_2598  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2597 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2596 {
    struct StrConcat_2597  field0;
    uint8_t  field1;
};

static struct StrConcat_2596 StrConcat_2596_StrConcat (  struct StrConcat_2597  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2596 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2595 {
    struct StrConcat_2596  field0;
    struct Char_65  field1;
};

static struct StrConcat_2595 StrConcat_2595_StrConcat (  struct StrConcat_2596  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2595 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2603 {
    struct StrConcatIter_2567  f_left;
    struct IntStrIter_2569  f_right;
};

struct StrConcatIter_2602 {
    struct StrConcatIter_2603  f_left;
    struct AppendIter_1155  f_right;
};

struct StrConcatIter_2601 {
    struct StrConcatIter_2602  f_left;
    struct IntStrIter_2569  f_right;
};

struct StrConcatIter_2600 {
    struct StrConcatIter_2601  f_left;
    struct AppendIter_1155  f_right;
};

static  struct StrConcatIter_2600   into_dash_iter2605 (    struct StrConcatIter_2600  self1290 ) {
    return (  self1290 );
}

static  struct Maybe_348   next2609 (    struct StrConcatIter_2603 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2572 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next2574 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next2608 (    struct StrConcatIter_2602 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2609 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next2607 (    struct StrConcatIter_2601 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2608 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next2574 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_348   next2606 (    struct StrConcatIter_2600 *  self1293 ) {
    struct Maybe_348  dref1294 = ( (  next2607 ) ( ( & ( ( * (  self1293 ) ) .f_left ) ) ) );
    if ( dref1294.tag == Maybe_348_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( dref1294 .stuff .Maybe_348_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_348_None_t ) {
            return ( (  next1177 ) ( ( & ( ( * (  self1293 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2599 (    struct StrConcatIter_2600  iterable1099 ,    enum Unit_8 (*  fun1101 )(    struct Char_65  ) ) {
    struct StrConcatIter_2600  temp2604 = ( (  into_dash_iter2605 ) ( (  iterable1099 ) ) );
    struct StrConcatIter_2600 *  it1102 = ( &temp2604 );
    while ( ( true ) ) {
        struct Maybe_348  dref1103 = ( (  next2606 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_348_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_348_Just_t ) {
                ( (  fun1101 ) ( ( dref1103 .stuff .Maybe_348_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2603   into_dash_iter2617 (    struct StrConcat_2598  dref1297 ) {
    return ( (struct StrConcatIter_2603) { .f_left = ( (  chars2586 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2590 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2603   chars2616 (    struct StrConcat_2598  self1308 ) {
    return ( (  into_dash_iter2617 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2602   into_dash_iter2615 (    struct StrConcat_2597  dref1297 ) {
    return ( (struct StrConcatIter_2602) { .f_left = ( (  chars2616 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2602   chars2614 (    struct StrConcat_2597  self1308 ) {
    return ( (  into_dash_iter2615 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2601   into_dash_iter2613 (    struct StrConcat_2596  dref1297 ) {
    return ( (struct StrConcatIter_2601) { .f_left = ( (  chars2614 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars2590 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2601   chars2612 (    struct StrConcat_2596  self1308 ) {
    return ( (  into_dash_iter2613 ) ( (  self1308 ) ) );
}

static  struct StrConcatIter_2600   into_dash_iter2611 (    struct StrConcat_2595  dref1297 ) {
    return ( (struct StrConcatIter_2600) { .f_left = ( (  chars2612 ) ( ( dref1297 .field0 ) ) ) , .f_right = ( (  chars1190 ) ( ( dref1297 .field1 ) ) ) } );
}

static  struct StrConcatIter_2600   chars2610 (    struct StrConcat_2595  self1308 ) {
    return ( (  into_dash_iter2611 ) ( (  self1308 ) ) );
}

static  enum Unit_8   print2594 (    struct StrConcat_2595  s1335 ) {
    ( (  for_dash_each2599 ) ( ( (  chars2610 ) ( (  s1335 ) ) ) ,  (  printf_dash_char315 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2593 (    struct RGB_157  c2785 ) {
    ( (  print2594 ) ( ( ( StrConcat_2595_StrConcat ) ( ( ( StrConcat_2596_StrConcat ) ( ( ( StrConcat_2597_StrConcat ) ( ( ( StrConcat_2598_StrConcat ) ( ( ( StrConcat_2564_StrConcat ) ( ( ( StrConcat_2565_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2785 ) .f_r ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2785 ) .f_g ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2785 ) .f_b ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2558 (    struct Color_154  c2806 ) {
    struct Color_154  dref2807 = (  c2806 );
    if ( dref2807.tag == Color_154_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2559 ) ( ) );
    }
    else {
        if ( dref2807.tag == Color_154_Color8_t ) {
            ( (  set_dash_fg82560 ) ( ( dref2807 .stuff .Color_154_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2807.tag == Color_154_Color16_t ) {
                ( (  set_dash_fg162561 ) ( ( dref2807 .stuff .Color_154_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2807.tag == Color_154_Color256_t ) {
                    ( (  set_dash_fg2562562 ) ( ( dref2807 .stuff .Color_154_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2807.tag == Color_154_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2593 ) ( ( dref2807 .stuff .Color_154_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2619 (  ) {
    ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82620 (    enum Color8_155  color2753 ) {
    enum Color8_155  dref2754 = (  color2753 );
    switch (  dref2754 ) {
        case Color8_155_Black8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Red8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Green8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Yellow8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Blue8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Magenta8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_Cyan8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_155_White8 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162621 (    enum Color16_156  color2757 ) {
    enum Color16_156  dref2758 = (  color2757 );
    switch (  dref2758 ) {
        case Color16_156_Black16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Red16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Green16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Yellow16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Blue16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Magenta16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_Cyan16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_White16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlack16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightRed16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightGreen16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightYellow16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightBlue16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightMagenta16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightCyan16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_156_BrightWhite16 : {
            ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562622 (    uint8_t  color2766 ) {
    ( (  print2563 ) ( ( ( StrConcat_2564_StrConcat ) ( ( ( StrConcat_2565_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2766 ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2623 (    struct RGB_157  c2788 ) {
    ( (  print2594 ) ( ( ( StrConcat_2595_StrConcat ) ( ( ( StrConcat_2596_StrConcat ) ( ( ( StrConcat_2597_StrConcat ) ( ( ( StrConcat_2598_StrConcat ) ( ( ( StrConcat_2564_StrConcat ) ( ( ( StrConcat_2565_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2788 ) .f_r ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2788 ) .f_g ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2788 ) .f_b ) ) ) ,  ( (  from_dash_charlike335 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2618 (    struct Color_154  c2814 ) {
    struct Color_154  dref2815 = (  c2814 );
    if ( dref2815.tag == Color_154_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2619 ) ( ) );
    }
    else {
        if ( dref2815.tag == Color_154_Color8_t ) {
            ( (  set_dash_bg82620 ) ( ( dref2815 .stuff .Color_154_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2815.tag == Color_154_Color16_t ) {
                ( (  set_dash_bg162621 ) ( ( dref2815 .stuff .Color_154_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2815.tag == Color_154_Color256_t ) {
                    ( (  set_dash_bg2562622 ) ( ( dref2815 .stuff .Color_154_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2815.tag == Color_154_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2623 ) ( ( dref2815 .stuff .Color_154_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322624 (    int32_t  x681 ) {
    return ( (uint32_t ) (  x681 ) );
}

static  enum Unit_8   emit_dash_cell2557 (    struct RenderState_2492 *  rs3698 ,    struct Cell_446 *  c3700 ,    uint32_t  x3702 ,    uint32_t  y3704 ) {
    if ( ( ( !  eq2399 ( (  x3702 ) , ( ( * (  rs3698 ) ) .f_x ) ) ) || ( !  eq2399 ( (  y3704 ) , ( ( * (  rs3698 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2494 ) ( (  x3702 ) ,  (  y3704 ) ) );
        (*  rs3698 ) .f_x = (  x3702 );
        (*  rs3698 ) .f_y = (  y3704 );
    }
    struct Char_65  char3705 = ( ( * (  c3700 ) ) .f_c );
    struct Color_154  bg3706 = ( ( * (  c3700 ) ) .f_bg );
    if ( (  eq693 ( ( ( * (  c3700 ) ) .f_char_dash_width ) , (  op_dash_neg846 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3705 = ( (  from_dash_charlike335 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) );
        bg3706 = ( ( Color_154_Color8 ) ( ( Color8_155_Red8 ) ) );
    }
    if ( ( !  eq2546 ( ( ( * (  rs3698 ) ) .f_fg ) , ( ( * (  c3700 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2558 ) ( ( ( * (  c3700 ) ) .f_fg ) ) );
        (*  rs3698 ) .f_fg = ( ( * (  c3700 ) ) .f_fg );
    }
    if ( ( !  eq2546 ( ( ( * (  rs3698 ) ) .f_bg ) , (  bg3706 ) ) ) ) {
        ( (  set_dash_bg2618 ) ( (  bg3706 ) ) );
        (*  rs3698 ) .f_bg = (  bg3706 );
    }
    ( (  print_dash_str314 ) ( (  char3705 ) ) );
    uint32_t  char_dash_width3707 = ( (  i32_dash_u322624 ) ( ( (  max371 ) ( ( ( * (  c3700 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3698 ) .f_x = (  op_dash_add187 ( ( ( * (  rs3698 ) ) .f_x ) , (  char_dash_width3707 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2627 {
    struct SliceIter_2529  f_left_dash_it;
    struct FromIter_537  f_right_dash_it;
};

struct env2628 {
    ;
    struct Slice_445  dest2281;
    ;
};

struct Tuple2_2630 {
    struct Cell_446  field0;
    int32_t  field1;
};

static struct Tuple2_2630 Tuple2_2630_Tuple2 (  struct Cell_446  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2630 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2629 {
    enum Unit_8  (*fun) (  struct env2628*  ,    struct Tuple2_2630  );
    struct env2628 env;
};

static  struct Zip_2627   into_dash_iter2632 (    struct Zip_2627  self936 ) {
    return (  self936 );
}

struct Maybe_2633 {
    enum {
        Maybe_2633_None_t,
        Maybe_2633_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2630  field0;
        } Maybe_2633_Just_s;
    } stuff;
};

static struct Maybe_2633 Maybe_2633_Just (  struct Tuple2_2630  field0 ) {
    return ( struct Maybe_2633 ) { .tag = Maybe_2633_Just_t, .stuff = { .Maybe_2633_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2633   next2634 (    struct Zip_2627 *  self939 ) {
    struct Zip_2627  copy940 = ( * (  self939 ) );
    while ( ( true ) ) {
        struct Maybe_990  dref941 = ( (  next2537 ) ( ( & ( (  copy940 ) .f_left_dash_it ) ) ) );
        if ( dref941.tag == Maybe_990_None_t ) {
            return ( (struct Maybe_2633) { .tag = Maybe_2633_None_t } );
        }
        else {
            if ( dref941.tag == Maybe_990_Just_t ) {
                struct Maybe_171  dref943 = ( (  next543 ) ( ( & ( (  copy940 ) .f_right_dash_it ) ) ) );
                if ( dref943.tag == Maybe_171_None_t ) {
                    return ( (struct Maybe_2633) { .tag = Maybe_2633_None_t } );
                }
                else {
                    if ( dref943.tag == Maybe_171_Just_t ) {
                        ( (  next2537 ) ( ( & ( ( * (  self939 ) ) .f_left_dash_it ) ) ) );
                        ( (  next543 ) ( ( & ( ( * (  self939 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2633_Just ) ( ( ( Tuple2_2630_Tuple2 ) ( ( dref941 .stuff .Maybe_990_Just_s .field0 ) ,  ( dref943 .stuff .Maybe_171_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2626 (    struct Zip_2627  iterable1099 ,   struct envunion2629  fun1101 ) {
    struct Zip_2627  temp2631 = ( (  into_dash_iter2632 ) ( (  iterable1099 ) ) );
    struct Zip_2627 *  it1102 = ( &temp2631 );
    while ( ( true ) ) {
        struct Maybe_2633  dref1103 = ( (  next2634 ) ( (  it1102 ) ) );
        if ( dref1103.tag == Maybe_2633_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1103.tag == Maybe_2633_Just_t ) {
                struct envunion2629  temp2635 = (  fun1101 );
                ( temp2635.fun ( &temp2635.env ,  ( dref1103 .stuff .Maybe_2633_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2627   zip2636 (    struct Slice_445  left947 ,    struct FromIter_537  right949 ) {
    struct SliceIter_2529  left_dash_it950 = ( (  into_dash_iter2543 ) ( (  left947 ) ) );
    struct FromIter_537  right_dash_it951 = ( (  into_dash_iter547 ) ( (  right949 ) ) );
    return ( (struct Zip_2627) { .f_left_dash_it = (  left_dash_it950 ) , .f_right_dash_it = (  right_dash_it951 ) } );
}

static  enum Unit_8   lam2637 (   struct env2628* env ,    struct Tuple2_2630  dref2282 ) {
    return ( (  set983 ) ( ( env->dest2281 ) ,  ( (  i32_dash_size277 ) ( ( dref2282 .field1 ) ) ) ,  ( dref2282 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2625 (    struct Slice_445  src2279 ,    struct Slice_445  dest2281 ) {
    if ( (  cmp299 ( ( (  src2279 ) .f_count ) , ( (  dest2281 ) .f_count ) ) == 2 ) ) {
        ( (  panic647 ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_302_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2279 ) .f_count ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2281 ) .f_count ) ) ) ,  ( (  from_dash_string217 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2628 envinst2628 = {
        .dest2281 =  dest2281 ,
    };
    ( (  for_dash_each2626 ) ( ( (  zip2636 ) ( (  src2279 ) ,  ( (  from548 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2629){ .fun = (  enum Unit_8  (*) (  struct env2628*  ,    struct Tuple2_2630  ) )lam2637 , .env =  envinst2628 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2491 (    struct Screen_444 *  screen3710 ) {
    int32_t  w3711 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3710 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3712 = ( (  u32_dash_i321982 ) ( ( ( * ( ( * (  screen3710 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2492  temp2493 = ( (struct RenderState_2492) { .f_x = (  from_dash_integral181 ( 0 ) ) , .f_y = (  from_dash_integral181 ( 0 ) ) , .f_fg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_bg = ( (struct Color_154) { .tag = Color_154_ColorDefault_t } ) , .f_changes = (  from_dash_integral181 ( 0 ) ) } );
    struct RenderState_2492 *  rs3713 = ( &temp2493 );
    ( (  move_dash_cursor_dash_to2494 ) ( (  from_dash_integral181 ( 0 ) ) ,  (  from_dash_integral181 ( 0 ) ) ) );
    struct RangeIter_169  temp2524 =  into_dash_iter170 ( ( (  to179 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub180 ( (  h3712 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_171  __cond2525 =  next172 (&temp2524);
        if (  __cond2525 .tag == 0 ) {
            break;
        }
        int32_t  y3715 =  __cond2525 .stuff .Maybe_171_Just_s .field0;
        int32_t  x_dash_v3716 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp173 ( (  x_dash_v3716 ) , (  w3711 ) ) == 0 ) ) {
            size_t  i3717 = ( (  i32_dash_size277 ) ( (  op_dash_add175 ( (  op_dash_mul1593 ( (  y3715 ) , (  w3711 ) ) ) , (  x_dash_v3716 ) ) ) ) );
            struct Cell_446 *  cur3718 = ( (  get_dash_ptr984 ) ( ( ( * (  screen3710 ) ) .f_current ) ,  (  i3717 ) ) );
            int32_t  char_dash_width3719 = ( (  max371 ) ( ( ( * (  cur3718 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_445  curs3720 = ( (  subslice2526 ) ( ( ( * (  screen3710 ) ) .f_current ) ,  (  i3717 ) ,  (  op_dash_add353 ( (  i3717 ) , ( (  i32_dash_size277 ) ( (  char_dash_width3719 ) ) ) ) ) ) );
            struct Slice_445  prevs3721 = ( (  subslice2526 ) ( ( ( * (  screen3710 ) ) .f_previous ) ,  (  i3717 ) ,  (  op_dash_add353 ( (  i3717 ) , ( (  i32_dash_size277 ) ( (  char_dash_width3719 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3710 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2527 ) ( ( (  zip2542 ) ( (  curs3720 ) ,  (  prevs3721 ) ) ) ,  (  lam2544 ) ) ) ) ) {
                (*  rs3713 ) .f_changes = (  op_dash_add187 ( ( ( * (  rs3713 ) ) .f_changes ) , (  from_dash_integral181 ( 1 ) ) ) );
                ( (  emit_dash_cell2557 ) ( (  rs3713 ) ,  (  cur3718 ) ,  ( (  i32_dash_u322624 ) ( (  x_dash_v3716 ) ) ) ,  ( (  i32_dash_u322624 ) ( (  y3715 ) ) ) ) );
                ( (  copy_dash_to2625 ) ( (  curs3720 ) ,  (  prevs3721 ) ) );
            }
            x_dash_v3716 = (  op_dash_add175 ( (  x_dash_v3716 ) , (  char_dash_width3719 ) ) );
        }
    }
    (*  screen3710 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors911 ) ( ) );
    ( (  flush_dash_stdout914 ) ( ) );
    return ( ( * (  rs3713 ) ) .f_changes );
}

static  void *   cast_dash_ptr2644 (    struct timespec * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of2645 (    struct timespec *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct timespec *   zeroed2642 (  ) {
    struct timespec *  temp2643;
    struct timespec *  x648 = (  temp2643 );
    ( ( memset ) ( ( (  cast_dash_ptr2644 ) ( ( & (  x648 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2645 ) ( (  x648 ) ) ) ) );
    return (  x648 );
}

static  struct timespec *   null_dash_ptr2641 (  ) {
    return ( (  zeroed2642 ) ( ) );
}

static  enum Unit_8   sync2638 (    struct Tui_97 *  tui3581 ) {
    if ( (  eq2399 ( ( ( * (  tui3581 ) ) .f_target_dash_fps ) , (  from_dash_integral181 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3582 = (  op_dash_div1171 ( (  from_dash_integral362 ( 1000000000 ) ) , ( (  size_dash_i64346 ) ( ( (  u32_dash_size968 ) ( ( ( * (  tui3581 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2639 = ( (  undefined948 ) ( ) );
    struct timespec *  now3583 = ( &temp2639 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic950 ) ( ) ) ,  (  now3583 ) ) );
    int64_t  elapsed_dash_ns3584 = (  op_dash_add363 ( (  op_dash_mul344 ( (  op_dash_sub1173 ( ( ( * (  now3583 ) ) .tv_sec ) , ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral362 ( 1000000000 ) ) ) ) , (  op_dash_sub1173 ( ( ( * (  now3583 ) ) .tv_nsec ) , ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3585 = (  op_dash_sub1173 ( (  frame_dash_ns3582 ) , (  elapsed_dash_ns3584 ) ) );
    if ( (  cmp1187 ( (  sleep_dash_ns3585 ) , (  from_dash_integral362 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2640 = ( (struct timespec) { .tv_sec = (  from_dash_integral362 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3585 ) } );
        struct timespec *  ts3586 = ( &temp2640 );
        ( ( nanosleep ) ( (  ts3586 ) ,  ( (  null_dash_ptr2641 ) ( ) ) ) );
    }
    struct timespec  temp2646 = ( (  undefined948 ) ( ) );
    struct timespec *  last_dash_sync3587 = ( &temp2646 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic950 ) ( ) ) ,  (  last_dash_sync3587 ) ) );
    (*  tui3581 ) .f_last_dash_sync = ( * (  last_dash_sync3587 ) );
    (*  tui3581 ) .f_fps_dash_count = (  op_dash_add187 ( ( ( * (  tui3581 ) ) .f_fps_dash_count ) , (  from_dash_integral181 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3588 = (  op_dash_add363 ( (  op_dash_mul344 ( (  op_dash_sub1173 ( ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3581 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral362 ( 1000 ) ) ) ) , (  op_dash_div1171 ( (  op_dash_sub1173 ( ( ( ( * (  tui3581 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3581 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral362 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1187 ( (  fps_dash_elapsed_dash_ms3588 ) , (  from_dash_integral362 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3581 ) .f_actual_dash_fps = ( ( * (  tui3581 ) ) .f_fps_dash_count );
        (*  tui3581 ) .f_fps_dash_count = (  from_dash_integral181 ( 0 ) );
        (*  tui3581 ) .f_fps_dash_ts = ( ( * (  tui3581 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2649 (    struct Cell_446 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free2648 (    enum CAllocator_10  dref2373 ,    struct Slice_445  slice2375 ) {
    if (!(  dref2373 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2649 ) ( ( (  slice2375 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2647 (    struct Screen_444 *  screen3686 ) {
    enum CAllocator_10  al3687 = ( ( * (  screen3686 ) ) .f_al );
    ( (  free2648 ) ( (  al3687 ) ,  ( ( * (  screen3686 ) ) .f_current ) ) );
    ( (  free2648 ) ( (  al3687 ) ,  ( ( * (  screen3686 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

struct envunion2651 {
    enum Unit_8  (*fun) (  struct env93*  ,    struct Tui_97 *  );
    struct env93 env;
};

static  enum Unit_8   disable_dash_mouse2653 (  ) {
    ( (  print_dash_str307 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2654 (    struct Termios_87 *  orig_dash_termios3559 ) {
    if ( (  eq693 ( ( ( tcsetattr ) ( ( (  stdin_dash_fileno844 ) ( ) ) ,  ( (  tcsa_dash_flush909 ) ( ) ) ,  ( (  cast_dash_ptr845 ) ( (  orig_dash_termios3559 ) ) ) ) ) , (  op_dash_neg846 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        ( (  panic847 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"tcsetattr" ) ,  ( 9 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2655 (  ) {
    ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2656 (  ) {
    ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_alternative_dash_screen_dash_buffer2657 (  ) {
    ( (  print839 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"\x1b[?1049l" ) ,  ( 8 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2652 (   struct env93* env ,    struct Tui_97 *  tui3591 ) {
    ( (  disable_dash_mouse2653 ) ( ) );
    ( (  disable_dash_raw_dash_mode2654 ) ( ( & ( ( * ( env->tui_dash_global_dash_state3572 ) ) .f_orig_dash_termios ) ) ) );
    ( (  show_dash_cursor2655 ) ( ) );
    ( (  reset_dash_colors911 ) ( ) );
    ( (  clear_dash_screen912 ) ( ) );
    ( (  reset_dash_cursor_dash_position2656 ) ( ) );
    ( (  disable_dash_alternative_dash_screen_dash_buffer2657 ) ( ) );
    ( (  flush_dash_stdout914 ) ( ) );
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
    struct env84 envinst84 = {
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
    struct Theme_188  temp201 = ( (struct Theme_188) { .f_default = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_White8 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) , .f_fg = ( ( Color_154_Color16 ) ( ( Color16_156_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_White8 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_White8 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) } ) , .f_highlights = ( (  empty202 ) ( ) ) } );
    struct Theme_188 *  dark_dash_theme4287 = ( &temp201 );
    struct Theme_188  temp208 = ( (struct Theme_188) { .f_default = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) } ) , .f_cursor = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) , .f_fg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) } ) , .f_selection = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color16 ) ( ( Color16_156_White16 ) ) ) , .f_fg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) , .f_fg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) , .f_fg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) } ) , .f_overlay = ( (struct Colors_189) { .f_bg = ( ( Color_154_Color8 ) ( ( Color8_155_Black8 ) ) ) , .f_fg = ( ( Color_154_Color16 ) ( ( Color16_156_BrightWhite16 ) ) ) } ) , .f_highlights = ( (  empty202 ) ( ) ) } );
    struct Theme_188 *  light_dash_theme4288 = ( &temp208 );
    struct Theme_188 *  default4289 = (  goblin_dash_ultra4286 );
    struct Array_212  temp216 = ( (struct Array_212) { ._arr = { ( ( Tuple2_210_Tuple2 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"default" ) ,  ( 7 ) ) ) ,  (  default4289 ) ) ) , ( ( Tuple2_210_Tuple2 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra4286 ) ) ) , ( ( Tuple2_210_Tuple2 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme4287 ) ) ) , ( ( Tuple2_210_Tuple2 ) ( ( (  from_dash_string217 ) ( ( (uint8_t*)"light-mono" ) ,  ( 10 ) ) ) ,  (  light_dash_theme4288 ) ) ) } } );
    struct Array_212  temp214 = ( (  from_dash_listlike215 ) ( ( &temp216 ) ) );
    struct Slice_209  all_dash_themes4290 = ( (  as_dash_slice211 ) ( ( &temp214 ) ) );
    struct env218 envinst218 = {
        .all_dash_themes4290 =  all_dash_themes4290 ,
    };
    struct env219 envinst219 = {
        .envinst152 = envinst152 ,
    };
    struct env222 envinst222 = {
        .envinst140 = envinst140 ,
    };
    struct env225 envinst225 = {
        .envinst140 = envinst140 ,
    };
    struct env227 envinst227 = {
        .envinst134 = envinst134 ,
    };
    struct env229 envinst229 = {
        .envinst136 = envinst136 ,
    };
    struct env231 envinst231 = {
        .envinst140 = envinst140 ,
    };
    struct env233 envinst233 = {
        .envinst140 = envinst140 ,
    };
    struct env235 envinst235 = {
        .envinst145 = envinst145 ,
        .envinst233 = envinst233 ,
    };
    struct env241 envinst241 = {
        .envinst140 = envinst140 ,
        .envinst145 = envinst145 ,
    };
    struct env244 envinst244 = {
        .envinst233 = envinst233 ,
    };
    struct env246 envinst246 = {
        .envinst222 = envinst222 ,
        .envinst145 = envinst145 ,
        .envinst231 = envinst231 ,
    };
    struct env251 envinst251 = {
        .envinst138 = envinst138 ,
    };
    struct env253 envinst253 = {
        .envinst75 = envinst75 ,
    };
    struct env255 envinst255 = {
        .envinst80 = envinst80 ,
    };
    struct env257 envinst257 = {
        .envinst84 = envinst84 ,
    };
    struct env259 envinst259 = {
        .envinst218 = envinst218 ,
    };
    struct env262 envinst262 = {
        .envinst257 = envinst257 ,
        .envinst253 = envinst253 ,
        .envinst255 = envinst255 ,
        .envinst123 = envinst123 ,
    };
    struct Array_275  temp278 = ( (struct Array_275) { ._arr = { ( (struct MenuItem_268) { .f_key = ( (  from_dash_charlike279 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string217 ) ( ( (uint8_t*)"move to end of line" ) ,  ( 19 ) ) ) , .f_action = (  lam282 ) } ) , ( (struct MenuItem_268) { .f_key = ( (  from_dash_charlike279 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string217 ) ( ( (uint8_t*)"move to beginning of line" ) ,  ( 25 ) ) ) , .f_action = (  lam394 ) } ) , ( (struct MenuItem_268) { .f_key = ( (  from_dash_charlike279 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string217 ) ( ( (uint8_t*)"move up yah" ) ,  ( 11 ) ) ) , .f_action = (  lam414 ) } ) } } );
    struct Menu_266  goto_dash_menu4790 = ( ( (struct Menu_266) { .f_name = ( (  from_dash_string217 ) ( ( (uint8_t*)"goto" ) ,  ( 4 ) ) ) , .f_items = ( (  from_dash_listlike274 ) ( ( &temp278 ) ) ) } ) );
    struct Array_416  temp418 = ( (struct Array_416) { ._arr = { ( (struct MenuItem_268) { .f_key = ( (  from_dash_charlike279 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string217 ) ( ( (uint8_t*)"open dir bruh" ) ,  ( 13 ) ) ) , .f_action = (  lam419 ) } ) , ( (struct MenuItem_268) { .f_key = ( (  from_dash_charlike279 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) , .f_description = ( (  from_dash_string217 ) ( ( (uint8_t*)"copy to system clipboard" ) ,  ( 24 ) ) ) , .f_action = (  lam420 ) } ) } } );
    struct Menu_266  space_dash_menu4795 = ( ( (struct Menu_266) { .f_name = ( (  from_dash_string217 ) ( ( (uint8_t*)"space" ) ,  ( 5 ) ) ) , .f_items = ( (  from_dash_listlike415 ) ( ( &temp418 ) ) ) } ) );
    struct env421 envinst421 = {
        .envinst222 = envinst222 ,
        .envinst235 = envinst235 ,
        .goto_dash_menu4790 =  goto_dash_menu4790 ,
        .envinst255 = envinst255 ,
        .envinst227 = envinst227 ,
        .space_dash_menu4795 =  space_dash_menu4795 ,
        .envinst229 = envinst229 ,
        .envinst244 = envinst244 ,
        .envinst246 = envinst246 ,
        .envinst231 = envinst231 ,
        .envinst241 = envinst241 ,
        .envinst251 = envinst251 ,
    };
    struct env432 envinst432 = {
        .envinst222 = envinst222 ,
        .envinst262 = envinst262 ,
        .envinst225 = envinst225 ,
        .envinst259 = envinst259 ,
        .envinst60 = envinst60 ,
        .envinst72 = envinst72 ,
        .envinst421 = envinst421 ,
        .envinst244 = envinst244 ,
    };
    struct env442 envinst442 = {
        .envinst219 = envinst219 ,
    };
    enum CAllocator_10  al4881 = ( (  idc448 ) ( ) );
    struct TextBuf_117  temp450;
    struct TextBuf_117  temp449 = (  temp450 );
    struct TextBuf_117 *  tb4882 = ( &temp449 );
    struct Slice_451  args4885 = ( (  get452 ) ( ) );
    struct Maybe_79  initial_dash_message4886 = ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    if ( (  cmp299 ( ( (  args4885 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4887 = ( (  from_dash_const_dash_str456 ) ( (  elem_dash_get470 ( (  args4885 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion479  temp478 = ( (struct envunion479){ .fun = (  struct Maybe_477  (*) (  struct env127*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file480 , .env =  envinst127 } );
        struct Maybe_477  dref4888 = ( temp478.fun ( &temp478.env ,  (  al4881 ) ,  (  fname4887 ) ) );
        if ( dref4888.tag == Maybe_477_None_t ) {
            struct envunion828  temp827 = ( (struct envunion828){ .fun = (  struct TextBuf_117  (*) (  struct env125*  ,    enum CAllocator_10  ) )mk483 , .env =  envinst125 } );
            (*  tb4882 ) = ( temp827.fun ( &temp827.env ,  (  al4881 ) ) );
            (*  tb4882 ) .f_filename = ( ( Maybe_79_Just ) ( ( (  clone_dash_0640 ) ( (  fname4887 ) ,  (  al4881 ) ) ) ) );
        }
        else {
            if ( dref4888.tag == Maybe_477_Just_t ) {
                (*  tb4882 ) = ( dref4888 .stuff .Maybe_477_Just_s .field0 );
            }
        }
    } else {
        struct envunion830  temp829 = ( (struct envunion830){ .fun = (  struct TextBuf_117  (*) (  struct env125*  ,    enum CAllocator_10  ) )mk483 , .env =  envinst125 } );
        (*  tb4882 ) = ( temp829.fun ( &temp829.env ,  (  al4881 ) ) );
    }
    struct Config_269  temp831 = ( (struct Config_269) { .f_theme = (  default4289 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_269 *  cfg4890 = ( &temp831 );
    struct Editor_264  temp832 = ( (struct Editor_264) { .f_running = ( true ) , .f_al = (  al4881 ) , .f_pane = ( (  mk833 ) ( (  al4881 ) ,  (  tb4882 ) ) ) , .f_clipboard = ( (struct Maybe_79) { .tag = Maybe_79_None_t } ) , .f_search_dash_term = ( (struct Maybe_79) { .tag = Maybe_79_None_t } ) , .f_mode = ( (struct EditorMode_265) { .tag = EditorMode_265_Normal_t } ) , .f_msg = (  initial_dash_message4886 ) , .f_cfg = (  cfg4890 ) , .f_og_dash_theme = (  default4289 ) } );
    struct Editor_264 *  ed4891 = ( &temp832 );
    struct envunion836  temp835 = ( (struct envunion836){ .fun = (  struct Tui_97  (*) (  struct env92*  ) )mk837 , .env =  envinst92 } );
    struct Tui_97  temp834 = ( temp835.fun ( &temp835.env ) );
    struct Tui_97 *  tui4892 = ( &temp834 );
    struct Screen_444  temp961 = ( (  mk_dash_screen962 ) ( (  tui4892 ) ,  (  al4881 ) ) );
    struct Screen_444 *  screen4893 = ( &temp961 );
    uint32_t  last_dash_redraw_dash_changes4894 = (  from_dash_integral181 ( 0 ) );
    while ( ( ( * (  ed4891 ) ) .f_running ) ) {
        struct env1006 envinst1006 = {
            .tui4892 =  tui4892 ,
            .envinst95 = envinst95 ,
        };
        struct FunIter_1005  temp1004 =  into_dash_iter1013 ( ( (  from_dash_function1014 ) ( ( (struct envunion1012){ .fun = (  struct Maybe_1008  (*) (  struct env1006*  ) )lam1015 , .env =  envinst1006 } ) ) ) );
        while (true) {
            struct Maybe_1008  __cond1206 =  next1207 (&temp1004);
            if (  __cond1206 .tag == 0 ) {
                break;
            }
            struct InputEvent_1009  ev4896 =  __cond1206 .stuff .Maybe_1008_Just_s .field0;
            struct InputEvent_1009  dref4897 = (  ev4896 );
            if ( dref4897.tag == InputEvent_1009_Key_t ) {
                ( (  reset_dash_msg1209 ) ( (  ed4891 ) ) );
                struct envunion1216  temp1215 = ( (struct envunion1216){ .fun = (  enum Unit_8  (*) (  struct env432*  ,    struct Editor_264 *  ,    struct Key_440  ) )handle_dash_key1217 , .env =  envinst432 } );
                ( temp1215.fun ( &temp1215.env ,  (  ed4891 ) ,  ( dref4897 .stuff .InputEvent_1009_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1965  temp1964 = ( (struct envunion1965){ .fun = (  bool  (*) (  struct env99*  ,    struct Screen_444 *  ) )resize_dash_screen_dash_if_dash_needed1966 , .env =  envinst99 } );
        ( temp1964.fun ( &temp1964.env ,  (  screen4893 ) ) );
        if ( ( (  should_dash_redraw1968 ) ( (  tui4892 ) ) ) ) {
            (*  screen4893 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1969 ) ( (  screen4893 ) ) );
            struct Theme_188 *  theme4899 = ( ( * ( ( * (  ed4891 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg1978 ) ( (  screen4893 ) ,  ( ( ( * (  theme4899 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1979 ) ( (  screen4893 ) ,  ( ( ( * (  theme4899 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1980 ) ( (  screen4893 ) ) );
            struct envunion1993  temp1992 = ( (struct envunion1993){ .fun = (  enum Unit_8  (*) (  struct env442*  ,    struct Screen_444 *  ,    struct Editor_264 *  ) )render_dash_editor1994 , .env =  envinst442 } );
            ( temp1992.fun ( &temp1992.env ,  (  screen4893 ) ,  (  ed4891 ) ) );
            last_dash_redraw_dash_changes4894 = ( (  render_dash_screen2491 ) ( (  screen4893 ) ) );
        }
        ( (  sync2638 ) ( (  tui4892 ) ) );
    }
    ( (  free_dash_screen2647 ) ( (  screen4893 ) ) );
    struct envunion2651  temp2650 = ( (struct envunion2651){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct Tui_97 *  ) )deinit2652 , .env =  envinst93 } );
    ( temp2650.fun ( &temp2650.env ,  (  tui4892 ) ) );
}
