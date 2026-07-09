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
    size_t  starting_dash_size2377;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2378;
    ;
    ;
};

struct env2 {
    ;
    size_t  starting_dash_size2377;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2378;
    ;
    ;
};

struct env3 {
    ;
    size_t  starting_dash_size2377;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2378;
    ;
    ;
};

struct env4 {
    ;
    size_t  starting_dash_size2377;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2378;
    ;
    ;
};

struct env5 {
    ;
    size_t  starting_dash_size2377;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2378;
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
    struct env1 envinst1;
    ;
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
    struct env2 envinst2;
    ;
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
    struct env3 envinst3;
    ;
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
    struct env4 envinst4;
    ;
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
    struct env5 envinst5;
    ;
    ;
};

struct envunion38 {
    enum Unit_8  (*fun) (  struct env1*  ,    struct List_9 *  );
    struct env1 env;
};

struct envunion39 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  );
    struct env6 env;
};

struct env37 {
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
    ;
    struct env6 envinst6;
    ;
};

struct env40 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2379;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2379;
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
    struct env40 envinst40;
    ;
    ;
    ;
};

struct envunion45 {
    enum Unit_8  (*fun) (  struct env42*  ,    struct List_13 *  ,    size_t  );
    struct env42 env;
};

struct env44 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env42 envinst42;
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
    struct env6 envinst6;
    ;
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
    struct env46 envinst46;
    ;
    ;
    ;
    ;
    ;
};

struct envunion54 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env53 {
    struct env48 envinst48;
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
    ;
    ;
    ;
    struct env68 envinst68;
};

struct envunion73 {
    enum Unit_8  (*fun) (  struct env44*  ,    struct List_13 *  );
    struct env44 env;
};

struct env72 {
    ;
    ;
    struct env44 envinst44;
};

struct envunion75 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct Maybe_78 {
    enum {
        Maybe_78_None_t,
        Maybe_78_Just_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } Maybe_78_Just_s;
    } stuff;
};

static struct Maybe_78 Maybe_78_Just (  struct StrView_27  field0 ) {
    return ( struct Maybe_78 ) { .tag = Maybe_78_Just_t, .stuff = { .Maybe_78_Just_s = { .field0 = field0 } } };
};

struct StrConcat_77 {
    struct StrView_27  field0;
    struct Maybe_78  field1;
};

static struct StrConcat_77 StrConcat_77_StrConcat (  struct StrView_27  field0 ,  struct Maybe_78  field1 ) {
    return ( struct StrConcat_77 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion76 {
    enum Unit_8  (*fun) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_77  );
    struct env63 env;
};

struct env74 {
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env63 envinst63;
};

struct StrConcat_82 {
    struct StrView_27  field0;
    size_t  field1;
};

static struct StrConcat_82 StrConcat_82_StrConcat (  struct StrView_27  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_82 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_81 {
    struct StrConcat_82  field0;
    struct StrView_27  field1;
};

static struct StrConcat_81 StrConcat_81_StrConcat (  struct StrConcat_82  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_81 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion80 {
    enum Unit_8  (*fun) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_81  );
    struct env66 env;
};

struct env79 {
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env66 envinst66;
};

struct envunion84 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrView_27  );
    struct env67 env;
};

struct env83 {
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
    ;
    struct env67 envinst67;
};

struct env86 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize3485;
    ;
    ;
    ;
    ;
    ;
};

struct env87 {
    ;
    bool *  should_dash_resize3485;
    ;
    ;
};

enum ColorPalette_91 {
    ColorPalette_91_Palette8,
    ColorPalette_91_Palette16,
    ColorPalette_91_Palette256,
    ColorPalette_91_PaletteRGB,
};

struct Array_93 {
    uint8_t _arr [32];
};

struct Termios_92 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_93  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_90 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_91  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_92  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion89 {
    bool  (*fun) (  struct env87*  ,    struct Tui_90 *  );
    struct env87 env;
};

struct env88 {
    struct env87 envinst87;
    ;
};

struct envunion95 {
    bool  (*fun) (  struct env87*  ,    struct Tui_90 *  );
    struct env87 env;
};

struct env94 {
    ;
    struct env87 envinst87;
    ;
    ;
    ;
    ;
};

struct envunion97 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

struct envunion98 {
    enum Unit_8  (*fun) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  );
    struct env37 env;
};

struct envunion99 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env96 {
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
};

struct envunion101 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion102 {
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  );
    struct env40 env;
};

struct envunion103 {
    enum Unit_8  (*fun) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  );
    struct env41 env;
};

enum ChangesetInputType_107 {
    ChangesetInputType_107_NoChangeset,
    ChangesetInputType_107_InputChangeset,
    ChangesetInputType_107_CustomChangeset,
};

struct Actions_106 {
    struct List_30  f_list;
    size_t  f_cur;
    enum ChangesetInputType_107  f_input_dash_changeset;
};

enum Filetype_108 {
    Filetype_108_Text,
    Filetype_108_KC,
    Filetype_108_Markdown,
    Filetype_108_GCode,
};

struct TextBuf_105 {
    enum CAllocator_10  f_al;
    struct List_9  f_buf;
    struct Actions_106  f_actions;
    struct Maybe_78  f_filename;
    enum Filetype_108  f_filetype;
};

struct envunion104 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

struct envunion109 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  );
    struct env6 env;
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
    struct env40 envinst40;
    struct env41 envinst41;
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
    struct env6 envinst6;
    ;
    ;
    ;
};

struct envunion111 {
    enum Unit_8  (*fun) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_27  );
    struct env69 env;
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
};

struct envunion113 {
    struct List_9  (*fun) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  );
    struct env50 env;
};

struct env112 {
    ;
    ;
    struct env50 envinst50;
    ;
    ;
    ;
    ;
};

struct envunion115 {
    struct TextBuf_105  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
};

struct envunion116 {
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env100 env;
};

struct env114 {
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
    struct env100 envinst100;
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
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env100 env;
};

struct env117 {
    ;
    ;
    ;
    ;
    struct env100 envinst100;
};

struct envunion120 {
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env100 env;
};

struct env119 {
    ;
    ;
    ;
    ;
    struct env100 envinst100;
};

struct envunion122 {
    struct Pos_26  (*fun) (  struct env117*  ,    struct TextBuf_105 *  ,    struct Action_25  );
    struct env117 env;
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
    struct env117 envinst117;
    ;
    ;
    ;
    ;
    ;
};

struct envunion124 {
    struct Pos_26  (*fun) (  struct env119*  ,    struct TextBuf_105 *  ,    struct Action_25  );
    struct env119 env;
};

struct env123 {
    ;
    struct env119 envinst119;
    ;
    ;
    ;
    ;
    ;
    ;
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
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
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
};

struct envunion128 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct envunion129 {
    struct Pos_26  (*fun) (  struct env119*  ,    struct TextBuf_105 *  ,    struct Action_25  );
    struct env119 env;
};

struct envunion130 {
    enum Unit_8  (*fun) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  );
    struct env28 env;
};

struct envunion131 {
    struct StrView_27  (*fun) (  struct env125*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env125 env;
};

struct env127 {
    struct env21 envinst21;
    struct env119 envinst119;
    ;
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
};

struct envunion133 {
    enum Unit_8  (*fun) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  );
    struct env28 env;
};

struct env132 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env28 envinst28;
    ;
};

struct envunion135 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct envunion137 {
    enum Unit_8  (*fun) (  struct env134*  ,    struct TextBuf_105 *  ,    struct Line_12 *  );
    struct env134 env;
};

struct env136 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env134 envinst134;
    ;
    ;
    ;
    ;
};

enum Color8_139 {
    Color8_139_Black8,
    Color8_139_Red8,
    Color8_139_Green8,
    Color8_139_Yellow8,
    Color8_139_Blue8,
    Color8_139_Magenta8,
    Color8_139_Cyan8,
    Color8_139_White8,
};

enum Color16_140 {
    Color16_140_Black16,
    Color16_140_Red16,
    Color16_140_Green16,
    Color16_140_Yellow16,
    Color16_140_Blue16,
    Color16_140_Magenta16,
    Color16_140_Cyan16,
    Color16_140_White16,
    Color16_140_BrightBlack16,
    Color16_140_BrightRed16,
    Color16_140_BrightGreen16,
    Color16_140_BrightYellow16,
    Color16_140_BrightBlue16,
    Color16_140_BrightMagenta16,
    Color16_140_BrightCyan16,
    Color16_140_BrightWhite16,
};

struct RGB_141 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_138 {
    enum {
        Color_138_ColorDefault_t,
        Color_138_Color8_t,
        Color_138_Color16_t,
        Color_138_Color256_t,
        Color_138_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_139  field0;
        } Color_138_Color8_s;
        struct {
            enum Color16_140  field0;
        } Color_138_Color16_s;
        struct {
            uint8_t  field0;
        } Color_138_Color256_s;
        struct {
            struct RGB_141  field0;
        } Color_138_ColorRGB_s;
    } stuff;
};

static struct Color_138 Color_138_Color8 (  enum Color8_139  field0 ) {
    return ( struct Color_138 ) { .tag = Color_138_Color8_t, .stuff = { .Color_138_Color8_s = { .field0 = field0 } } };
};

static struct Color_138 Color_138_Color16 (  enum Color16_140  field0 ) {
    return ( struct Color_138 ) { .tag = Color_138_Color16_t, .stuff = { .Color_138_Color16_s = { .field0 = field0 } } };
};

static struct Color_138 Color_138_Color256 (  uint8_t  field0 ) {
    return ( struct Color_138 ) { .tag = Color_138_Color256_t, .stuff = { .Color_138_Color256_s = { .field0 = field0 } } };
};

static struct Color_138 Color_138_ColorRGB (  struct RGB_141  field0 ) {
    return ( struct Color_138 ) { .tag = Color_138_ColorRGB_t, .stuff = { .Color_138_ColorRGB_s = { .field0 = field0 } } };
};

static  uint8_t   cast145 (    uint32_t  x385 ) {
    return ( (uint8_t ) (  x385 ) );
}

static  uint8_t   u32_dash_u8144 (    uint32_t  x712 ) {
    return ( (  cast145 ) ( (  x712 ) ) );
}

static  uint32_t   op_dash_div147 (    uint32_t  l254 ,    uint32_t  r256 ) {
    return ( (  l254 ) / (  r256 ) );
}

struct Range_150 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_150 Range_150_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_150 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env151 {
    uint32_t  base1338;
    ;
};

struct envunion152 {
    uint32_t  (*fun) (  struct env151*  ,    int32_t  ,    uint32_t  );
    struct env151 env;
};

struct RangeIter_153 {
    struct Range_150  field0;
    int32_t  field1;
};

static struct RangeIter_153 RangeIter_153_RangeIter (  struct Range_150  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_153 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_153   into_dash_iter154 (    struct Range_150  dref850 ) {
    return ( ( RangeIter_153_RangeIter ) ( ( ( Range_150_Range ) ( ( dref850 .field0 ) ,  ( dref850 .field1 ) ) ) ,  ( dref850 .field0 ) ) );
}

struct Maybe_155 {
    enum {
        Maybe_155_None_t,
        Maybe_155_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_155_Just_s;
    } stuff;
};

static struct Maybe_155 Maybe_155_Just (  int32_t  field0 ) {
    return ( struct Maybe_155 ) { .tag = Maybe_155_Just_t, .stuff = { .Maybe_155_Just_s = { .field0 = field0 } } };
};

enum Ordering_158 {
    Ordering_158_LT,
    Ordering_158_EQ,
    Ordering_158_GT,
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp157 (    int32_t  l163 ,    int32_t  r165 ) {
    return ( builtin_int32_tcmp( (  l163 ) , (  r165 ) ) );
}

static  int32_t   op_dash_add159 (    int32_t  l216 ,    int32_t  r218 ) {
    return ( (  l216 ) + (  r218 ) );
}

static  struct Maybe_155   next156 (    struct RangeIter_153 *  self858 ) {
    struct RangeIter_153  dref859 = ( * (  self858 ) );
    if ( true ) {
        if ( (  cmp157 ( ( dref859 .field1 ) , ( dref859 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
        }
        struct Maybe_155  x863 = ( ( Maybe_155_Just ) ( ( dref859 .field1 ) ) );
        (*  self858 ) = ( ( RangeIter_153_RangeIter ) ( ( ( Range_150_Range ) ( ( dref859 .field0 .field0 ) ,  ( dref859 .field0 .field1 ) ) ) ,  (  op_dash_add159 ( ( dref859 .field1 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        return (  x863 );
    }
}

static  uint32_t   reduce149 (    struct Range_150  iterable1077 ,    uint32_t  base1079 ,   struct envunion152  fun1081 ) {
    uint32_t  x1082 = (  base1079 );
    struct RangeIter_153  it1083 = ( (  into_dash_iter154 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1084 = ( (  next156 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_155_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_155_Just_t ) {
                struct envunion152  temp160 = (  fun1081 );
                x1082 = ( temp160.fun ( &temp160.env ,  ( dref1084 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp161 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp161);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp162;
    return (  temp162 );
}

static  struct Range_150   to163 (    int32_t  from841 ,    int32_t  to843 ) {
    return ( ( Range_150_Range ) ( (  from841 ) ,  (  to843 ) ) );
}

static  int32_t   op_dash_sub164 (    int32_t  l221 ,    int32_t  r223 ) {
    return ( (  l221 ) - (  r223 ) );
}

static  uint32_t   from_dash_integral165 (    size_t  x53 ) {
    return ( (uint32_t ) (  x53 ) );
}

static  uint32_t   op_dash_mul167 (    uint32_t  l249 ,    uint32_t  r251 ) {
    return ( (  l249 ) * (  r251 ) );
}

static  uint32_t   lam166 (   struct env151* env ,    int32_t  item1342 ,    uint32_t  x1344 ) {
    return (  op_dash_mul167 ( (  x1344 ) , ( env->base1338 ) ) );
}

static  uint32_t   pow148 (    uint32_t  base1338 ,    int32_t  p1340 ) {
    struct env151 envinst151 = {
        .base1338 =  base1338 ,
    };
    return ( (  reduce149 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1340 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral165 ( 1 ) ) ,  ( (struct envunion152){ .fun = (  uint32_t  (*) (  struct env151*  ,    int32_t  ,    uint32_t  ) )lam166 , .env =  envinst151 } ) ) );
}

static  uint32_t   rshift146 (    uint32_t  x1491 ,    int32_t  am1493 ) {
    return (  op_dash_div147 ( (  x1491 ) , ( (  pow148 ) ( (  from_dash_integral165 ( 2 ) ) ,  (  am1493 ) ) ) ) );
}

static  uint32_t   op_dash_sub169 (    uint32_t  l244 ,    uint32_t  r246 ) {
    return ( (  l244 ) - (  r246 ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp170 (    uint32_t  l168 ,    uint32_t  r170 ) {
    return ( builtin_uint32_tcmp( (  l168 ) , (  r170 ) ) );
}

static  uint32_t   op_dash_add171 (    uint32_t  l239 ,    uint32_t  r241 ) {
    return ( (  l239 ) + (  r241 ) );
}

static  uint32_t   mod168 (    uint32_t  l1496 ,    uint32_t  d1498 ) {
    uint32_t  r1499 = (  op_dash_div147 ( (  l1496 ) , (  d1498 ) ) );
    uint32_t  m1500 = (  op_dash_sub169 ( (  l1496 ) , (  op_dash_mul167 ( (  r1499 ) , (  d1498 ) ) ) ) );
    if ( (  cmp170 ( (  m1500 ) , (  from_dash_integral165 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add171 ( (  d1498 ) , (  m1500 ) ) );
    } else {
        return (  m1500 );
    }
}

static  struct RGB_141   rgb_dash_from_dash_hex143 (    uint32_t  n2712 ) {
    return ( (struct RGB_141) { .f_r = ( (  u32_dash_u8144 ) ( ( (  rshift146 ) ( (  n2712 ) ,  (  from_dash_integral56 ( 16 ) ) ) ) ) ) , .f_g = ( (  u32_dash_u8144 ) ( ( (  mod168 ) ( ( (  rshift146 ) ( (  n2712 ) ,  (  from_dash_integral56 ( 8 ) ) ) ) ,  (  from_dash_integral165 ( 256 ) ) ) ) ) ) , .f_b = ( (  u32_dash_u8144 ) ( ( (  mod168 ) ( (  n2712 ) ,  (  from_dash_integral165 ( 256 ) ) ) ) ) ) } );
}

static  struct Color_138   rgb142 (    uint32_t  x4141 ) {
    return ( ( Color_138_ColorRGB ) ( ( (  rgb_dash_from_dash_hex143 ) ( (  x4141 ) ) ) ) );
}

struct Colors_173 {
    struct Color_138  f_fg;
    struct Color_138  f_bg;
};

struct Maybe_176 {
    enum {
        Maybe_176_None_t,
        Maybe_176_Just_t,
    } tag;
    union {
        struct {
            struct Color_138  field0;
        } Maybe_176_Just_s;
    } stuff;
};

static struct Maybe_176 Maybe_176_Just (  struct Color_138  field0 ) {
    return ( struct Maybe_176 ) { .tag = Maybe_176_Just_t, .stuff = { .Maybe_176_Just_s = { .field0 = field0 } } };
};

struct HighlightColors_175 {
    enum HighlightType_18  f_type;
    struct Color_138  f_fg;
    struct Maybe_176  f_bg;
};

struct Slice_174 {
    struct HighlightColors_175 *  f_ptr;
    size_t  f_count;
};

struct Theme_172 {
    struct Colors_173  f_default;
    struct Colors_173  f_cursor;
    struct Colors_173  f_selection;
    struct Colors_173  f_line_dash_num;
    struct Colors_173  f_line_dash_num_dash_hl;
    struct Colors_173  f_overlay;
    struct Slice_174  f_highlights;
};

struct Array_179 {
    struct HighlightColors_175 _arr [13];
};

static  struct HighlightColors_175 *   cast180 (    struct Array_179 *  x385 ) {
    return ( (struct HighlightColors_175 * ) (  x385 ) );
}

static  struct Slice_174   as_dash_slice178 (    struct Array_179 *  arr1987 ) {
    return ( (struct Slice_174) { .f_ptr = ( (  cast180 ) ( (  arr1987 ) ) ) , .f_count = ( (size_t ) ( 13 ) ) } );
}

static  struct Array_179   from_dash_listlike182 (    struct Array_179 *  self359 ) {
    return ( * (  self359 ) );
}

static  struct HighlightColors_175   hlt184 (    enum HighlightType_18  type4135 ,    struct Color_138  fg4137 ) {
    return ( (struct HighlightColors_175) { .f_type = (  type4135 ) , .f_fg = (  fg4137 ) , .f_bg = ( (struct Maybe_176) { .tag = Maybe_176_None_t } ) } );
}

static  void *   cast_dash_ptr190 (    struct HighlightColors_175 * *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of191 (    struct HighlightColors_175 *  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  struct HighlightColors_175 *   zeroed188 (  ) {
    struct HighlightColors_175 *  temp189;
    struct HighlightColors_175 *  x625 = (  temp189 );
    ( ( memset ) ( ( (  cast_dash_ptr190 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of191 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  struct HighlightColors_175 *   null_dash_ptr187 (  ) {
    return ( (  zeroed188 ) ( ) );
}

static  struct Slice_174   empty186 (  ) {
    return ( (struct Slice_174) { .f_ptr = ( (  null_dash_ptr187 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct Tuple2_194 {
    struct StrView_27  field0;
    struct Theme_172 *  field1;
};

static struct Tuple2_194 Tuple2_194_Tuple2 (  struct StrView_27  field0 ,  struct Theme_172 *  field1 ) {
    return ( struct Tuple2_194 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_193 {
    struct Tuple2_194 *  f_ptr;
    size_t  f_count;
};

struct Array_196 {
    struct Tuple2_194 _arr [4];
};

static  struct Tuple2_194 *   cast197 (    struct Array_196 *  x385 ) {
    return ( (struct Tuple2_194 * ) (  x385 ) );
}

static  struct Slice_193   as_dash_slice195 (    struct Array_196 *  arr1987 ) {
    return ( (struct Slice_193) { .f_ptr = ( (  cast197 ) ( (  arr1987 ) ) ) , .f_count = ( (size_t ) ( 4 ) ) } );
}

static  struct Array_196   from_dash_listlike199 (    struct Array_196 *  self359 ) {
    return ( * (  self359 ) );
}

static  struct StrView_27   from_dash_string201 (    uint8_t *  ptr90 ,    size_t  count92 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr90 ) , .f_count = (  count92 ) } ) } );
}

struct env202 {
    struct Slice_193  all_dash_themes4157;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct Maybe_205 {
    enum {
        Maybe_205_None_t,
        Maybe_205_Just_t,
    } tag;
    union {
        struct {
            enum HighlightType_18  field0;
        } Maybe_205_Just_s;
    } stuff;
};

static struct Maybe_205 Maybe_205_Just (  enum HighlightType_18  field0 ) {
    return ( struct Maybe_205 ) { .tag = Maybe_205_Just_t, .stuff = { .Maybe_205_Just_s = { .field0 = field0 } } };
};

struct envunion204 {
    struct Maybe_205  (*fun) (  struct env136*  ,    struct TextBuf_105 *  ,    struct Pos_26  );
    struct env136 env;
};

struct env203 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env136 envinst136;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct Maybe_208 {
    enum {
        Maybe_208_None_t,
        Maybe_208_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_33  field0;
        } Maybe_208_Just_s;
    } stuff;
};

static struct Maybe_208 Maybe_208_Just (  struct Cursors_33  field0 ) {
    return ( struct Maybe_208 ) { .tag = Maybe_208_Just_t, .stuff = { .Maybe_208_Just_s = { .field0 = field0 } } };
};

struct envunion207 {
    struct Maybe_208  (*fun) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  );
    struct env127 env;
};

struct env206 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env127 envinst127;
};

struct envunion210 {
    struct Maybe_208  (*fun) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  );
    struct env127 env;
};

struct env209 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env127 envinst127;
};

struct envunion212 {
    struct Maybe_208  (*fun) (  struct env121*  ,    struct TextBuf_105 *  );
    struct env121 env;
};

struct env211 {
    ;
    ;
    ;
    ;
    ;
    struct env121 envinst121;
    ;
};

struct envunion214 {
    struct Maybe_208  (*fun) (  struct env123*  ,    struct TextBuf_105 *  );
    struct env123 env;
};

struct env213 {
    struct env123 envinst123;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion216 {
    struct Maybe_208  (*fun) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  );
    struct env127 env;
};

struct env215 {
    ;
    ;
    struct env127 envinst127;
    ;
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

struct envunion218 {
    struct Maybe_208  (*fun) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  );
    struct env127 env;
};

struct env217 {
    struct env127 envinst127;
    ;
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

enum Mode_222 {
    Mode_222_Normal,
    Mode_222_Insert,
    Mode_222_Select,
};

struct ScreenCursorOffset_223 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_221 {
    struct TextBuf_105 *  f_buf;
    struct Pos_26  f_cursor;
    int32_t  f_vi;
    struct Maybe_34  f_sel;
    enum Mode_222  f_mode;
    struct ScreenCursorOffset_223  f_sc_dash_off;
};

struct envunion220 {
    enum Unit_8  (*fun) (  struct env217*  ,    struct Pane_221 *  ,    int32_t  );
    struct env217 env;
};

struct envunion224 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  );
    struct env132 env;
};

struct env219 {
    ;
    ;
    struct env217 envinst217;
    ;
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
};

struct envunion226 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  );
    struct env132 env;
};

struct envunion227 {
    struct Maybe_208  (*fun) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  );
    struct env127 env;
};

struct env225 {
    ;
    ;
    ;
    ;
    ;
    struct env132 envinst132;
    ;
    struct env127 envinst127;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion229 {
    enum Unit_8  (*fun) (  struct env217*  ,    struct Pane_221 *  ,    int32_t  );
    struct env217 env;
};

struct env228 {
    ;
    struct env217 envinst217;
    ;
    ;
    ;
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

struct Tuple2_232 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_232 Tuple2_232_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_232 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion231 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  );
    struct env215 env;
};

struct envunion233 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  );
    struct env132 env;
};

struct envunion234 {
    enum Unit_8  (*fun) (  struct env206*  ,    struct Pane_221 *  ,    struct StrView_27  );
    struct env206 env;
};

struct env230 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env215 envinst215;
    ;
    ;
    ;
    ;
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
    struct env206 envinst206;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion236 {
    struct StrView_27  (*fun) (  struct env125*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env125 env;
};

struct env235 {
    struct env125 envinst125;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion238 {
    struct StrView_27  (*fun) (  struct env74*  ,    struct StrConcat_77  ,    enum CAllocator_10  );
    struct env74 env;
};

struct env237 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env74 envinst74;
};

struct envunion240 {
    struct StrView_27  (*fun) (  struct env79*  ,    struct StrConcat_81  ,    enum CAllocator_10  );
    struct env79 env;
};

struct env239 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env79 envinst79;
};

struct envunion242 {
    struct StrView_27  (*fun) (  struct env83*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env83 env;
};

struct env241 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env83 envinst83;
};

struct Maybe_245 {
    enum {
        Maybe_245_None_t,
        Maybe_245_Just_t,
    } tag;
    union {
        struct {
            struct Theme_172 *  field0;
        } Maybe_245_Just_s;
    } stuff;
};

static struct Maybe_245 Maybe_245_Just (  struct Theme_172 *  field0 ) {
    return ( struct Maybe_245 ) { .tag = Maybe_245_Just_t, .stuff = { .Maybe_245_Just_s = { .field0 = field0 } } };
};

struct envunion244 {
    struct Maybe_245  (*fun) (  struct env202*  ,    struct StrView_27  );
    struct env202 env;
};

struct env243 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env202 envinst202;
    ;
    ;
    ;
};

struct Maybe_248 {
    enum {
        Maybe_248_None_t,
        Maybe_248_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_248_Just_s;
    } stuff;
};

static struct Maybe_248 Maybe_248_Just (  size_t  field0 ) {
    return ( struct Maybe_248 ) { .tag = Maybe_248_Just_t, .stuff = { .Maybe_248_Just_s = { .field0 = field0 } } };
};

struct envunion247 {
    struct Maybe_248  (*fun) (  struct env110*  ,    struct TextBuf_105 *  ,    struct Maybe_78  );
    struct env110 env;
};

struct EditorMode_251 {
    enum {
        EditorMode_251_Normal_t,
        EditorMode_251_Cmd_t,
        EditorMode_251_Search_t,
    } tag;
    union {
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_251_Cmd_s;
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_251_Search_s;
    } stuff;
};

static struct EditorMode_251 EditorMode_251_Cmd (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_251 ) { .tag = EditorMode_251_Cmd_t, .stuff = { .EditorMode_251_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_251 EditorMode_251_Search (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_251 ) { .tag = EditorMode_251_Search_t, .stuff = { .EditorMode_251_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Config_252 {
    struct Theme_172 *  f_theme;
    bool  f_display_dash_line_dash_numbers;
    bool  f_relative_dash_line_dash_numbers;
};

struct Editor_250 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_221  f_pane;
    struct Maybe_78  f_clipboard;
    struct Maybe_78  f_search_dash_term;
    struct EditorMode_251  f_mode;
    struct Maybe_78  f_msg;
    struct Config_252 *  f_cfg;
    struct Theme_172 *  f_og_dash_theme;
};

struct envunion249 {
    enum Unit_8  (*fun) (  struct env237*  ,    struct Editor_250 *  ,    struct StrConcat_77  );
    struct env237 env;
};

struct envunion253 {
    enum Unit_8  (*fun) (  struct env239*  ,    struct Editor_250 *  ,    struct StrConcat_81  );
    struct env239 env;
};

struct envunion254 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env241 env;
};

struct env246 {
    ;
    ;
    ;
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
    struct env237 envinst237;
    ;
    ;
    struct env239 envinst239;
    struct env241 envinst241;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion256 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  );
    struct env215 env;
};

struct envunion257 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_250 *  );
    struct env235 env;
};

struct envunion258 {
    enum Unit_8  (*fun) (  struct env228*  ,    struct Pane_221 *  ,    int32_t  );
    struct env228 env;
};

struct envunion259 {
    enum Unit_8  (*fun) (  struct env239*  ,    struct Editor_250 *  ,    struct StrConcat_81  );
    struct env239 env;
};

struct envunion260 {
    enum Unit_8  (*fun) (  struct env206*  ,    struct Pane_221 *  ,    struct StrView_27  );
    struct env206 env;
};

struct envunion261 {
    enum Unit_8  (*fun) (  struct env230*  ,    struct Pane_221 *  );
    struct env230 env;
};

struct envunion262 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_221 *  );
    struct env225 env;
};

struct envunion263 {
    enum Unit_8  (*fun) (  struct env211*  ,    struct Pane_221 *  );
    struct env211 env;
};

struct envunion264 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_221 *  );
    struct env213 env;
};

struct envunion265 {
    enum Unit_8  (*fun) (  struct env219*  ,    struct Pane_221 *  );
    struct env219 env;
};

struct env255 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env215 envinst215;
    struct env235 envinst235;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env228 envinst228;
    ;
    struct env239 envinst239;
    ;
    ;
    struct env206 envinst206;
    ;
    ;
    struct env230 envinst230;
    ;
    ;
    ;
    ;
    ;
    struct env225 envinst225;
    ;
    ;
    ;
    struct env211 envinst211;
    ;
    ;
    ;
    ;
    ;
    struct env213 envinst213;
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
};

struct envunion267 {
    enum Unit_8  (*fun) (  struct env209*  ,    struct Pane_221 *  );
    struct env209 env;
};

struct envunion268 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion269 {
    enum Unit_8  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct Key_271 {
    enum {
        Key_271_Escape_t,
        Key_271_Enter_t,
        Key_271_Tab_t,
        Key_271_Backspace_t,
        Key_271_Char_t,
        Key_271_Ctrl_t,
        Key_271_Up_t,
        Key_271_Down_t,
        Key_271_Left_t,
        Key_271_Right_t,
        Key_271_Home_t,
        Key_271_End_t,
        Key_271_PageUp_t,
        Key_271_PageDown_t,
        Key_271_Delete_t,
        Key_271_Insert_t,
        Key_271_F1_t,
        Key_271_F2_t,
        Key_271_F3_t,
        Key_271_F4_t,
        Key_271_F5_t,
        Key_271_F6_t,
        Key_271_F7_t,
        Key_271_F8_t,
        Key_271_F9_t,
        Key_271_F10_t,
        Key_271_F11_t,
        Key_271_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_271_Char_s;
        struct {
            char  field0;
        } Key_271_Ctrl_s;
    } stuff;
};

static struct Key_271 Key_271_Char (  char  field0 ) {
    return ( struct Key_271 ) { .tag = Key_271_Char_t, .stuff = { .Key_271_Char_s = { .field0 = field0 } } };
};

static struct Key_271 Key_271_Ctrl (  char  field0 ) {
    return ( struct Key_271 ) { .tag = Key_271_Ctrl_t, .stuff = { .Key_271_Ctrl_s = { .field0 = field0 } } };
};

struct envunion270 {
    enum Unit_8  (*fun) (  struct env255*  ,    struct Editor_250 *  ,    struct Key_271  );
    struct env255 env;
};

struct envunion272 {
    enum Unit_8  (*fun) (  struct env228*  ,    struct Pane_221 *  ,    int32_t  );
    struct env228 env;
};

struct envunion273 {
    enum Unit_8  (*fun) (  struct env246*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env246 env;
};

struct envunion274 {
    enum Unit_8  (*fun) (  struct env206*  ,    struct Pane_221 *  ,    struct StrView_27  );
    struct env206 env;
};

struct envunion275 {
    enum Unit_8  (*fun) (  struct env243*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env243 env;
};

struct env266 {
    ;
    ;
    ;
    ;
    struct env209 envinst209;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    struct env72 envinst72;
    ;
    struct env255 envinst255;
    ;
    ;
    struct env228 envinst228;
    struct env246 envinst246;
    ;
    ;
    ;
    ;
    ;
    struct env206 envinst206;
    ;
    struct env243 envinst243;
    ;
    ;
    ;
    ;
};

struct Cell_280 {
    struct Char_65  f_c;
    struct Color_138  f_fg;
    struct Color_138  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_279 {
    struct Cell_280 *  f_ptr;
    size_t  f_count;
};

struct Screen_278 {
    enum CAllocator_10  f_al;
    struct Tui_90 *  f_tui;
    struct Slice_279  f_current;
    struct Slice_279  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_138  f_default_dash_fg;
    struct Color_138  f_default_dash_bg;
};

struct ScreenDims_281 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion277 {
    enum Unit_8  (*fun) (  struct env203*  ,    struct Screen_278 *  ,    struct Pane_221 *  ,    struct ScreenDims_281  ,    struct Config_252 *  );
    struct env203 env;
};

struct env276 {
    ;
    struct env203 envinst203;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum CAllocator_10   idc282 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct Slice_285 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul288 (    int64_t  l203 ,    int64_t  r205 ) {
    return ( (  l203 ) * (  r205 ) );
}

static  const char* *   offset_dash_ptr287 (    const char* *  x367 ,    int64_t  count369 ) {
    const char*  temp289;
    return ( (const char* * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp289 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral290 (    size_t  x47 ) {
    return ( (int64_t ) (  x47 ) );
}

static  size_t   op_dash_sub291 (    size_t  l284 ,    size_t  r286 ) {
    return ( (  l284 ) - (  r286 ) );
}

static  struct Slice_285   get286 (  ) {
    return ( (struct Slice_285) { .f_ptr = ( (  offset_dash_ptr287 ) ( ( _global_argv ) ,  (  from_dash_integral290 ( 1 ) ) ) ) , .f_count = (  op_dash_sub291 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp292 (    size_t  l188 ,    size_t  r190 ) {
    return ( builtin_size_tcmp( (  l188 ) , (  r190 ) ) );
}

struct ConstStrIter_296 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_296   into_dash_iter298 (    struct ConstStrIter_296  self1617 ) {
    return (  self1617 );
}

struct Maybe_299 {
    enum {
        Maybe_299_None_t,
        Maybe_299_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_299_Just_s;
    } stuff;
};

static struct Maybe_299 Maybe_299_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_299 ) { .tag = Maybe_299_Just_t, .stuff = { .Maybe_299_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   cast301 (    const char*  x385 ) {
    return ( (uint8_t * ) (  x385 ) );
}

static  uint8_t *   offset_dash_ptr302 (    uint8_t *  x367 ,    int64_t  count369 ) {
    uint8_t  temp303;
    return ( (uint8_t * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp303 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64304 (    size_t  x649 ) {
    return ( (int64_t ) (  x649 ) );
}

static  bool   eq305 (    uint8_t  l120 ,    uint8_t  r122 ) {
    return ( (  l120 ) == (  r122 ) );
}

static  uint8_t   cast306 (    int32_t  x385 ) {
    return ( (uint8_t ) (  x385 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp309 (    uint8_t  l173 ,    uint8_t  r175 ) {
    return ( builtin_uint8_tcmp( (  l173 ) , (  r175 ) ) );
}

static  uint8_t   from_dash_integral310 (    size_t  x62 ) {
    return ( (uint8_t ) (  x62 ) );
}

static  size_t   next_dash_char308 (    uint8_t *  p1215 ) {
    uint8_t  pb1216 = ( * (  p1215 ) );
    if ( (  cmp309 ( (  pb1216 ) , (  from_dash_integral310 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp309 ( (  pb1216 ) , (  from_dash_integral310 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp309 ( (  pb1216 ) , (  from_dash_integral310 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp309 ( (  pb1216 ) , (  from_dash_integral310 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp311 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp311);
                    abort ( );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem307 (    uint8_t *  p1219 ) {
    size_t  clen1220 = ( (  next_dash_char308 ) ( (  p1219 ) ) );
    if ( (  cmp292 ( (  clen1220 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp312 = ( (  from_dash_string57 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp312);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p1219 ) , .f_num_dash_bytes = (  clen1220 ) } );
}

static  size_t   op_dash_add313 (    size_t  l279 ,    size_t  r281 ) {
    return ( (  l279 ) + (  r281 ) );
}

static  struct Maybe_299   next300 (    struct ConstStrIter_296 *  self1620 ) {
    uint8_t *  char_dash_ptr1621 = ( ( (  cast301 ) ( ( ( * (  self1620 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1622 = ( (  offset_dash_ptr302 ) ( (  char_dash_ptr1621 ) ,  ( (  size_dash_i64304 ) ( ( ( * (  self1620 ) ) .f_i ) ) ) ) );
    if ( (  eq305 ( ( * (  optr1622 ) ) , ( (  cast306 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    struct Char_65  char1623 = ( (  scan_dash_from_dash_mem307 ) ( (  optr1622 ) ) );
    (*  self1620 ) .f_i = (  op_dash_add313 ( ( ( * (  self1620 ) ) .f_i ) , ( (  char1623 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_299_Just ) ( (  char1623 ) ) );
}

static  size_t   reduce297 (    struct ConstStrIter_296  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct ConstStrIter_296  it1083 = ( (  into_dash_iter298 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1084 = ( (  next300 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_299_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_299_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp314 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp314);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp315;
    return (  temp315 );
}

static  size_t   lam316 (    struct Char_65  dref1089 ,    size_t  x1091 ) {
    return (  op_dash_add313 ( (  x1091 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count295 (    struct ConstStrIter_296  it1088 ) {
    return ( (  reduce297 ) ( (  it1088 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam316 ) ) );
}

static  struct ConstStrIter_296   into_dash_iter318 (    const char*  self1614 ) {
    return ( (struct ConstStrIter_296) { .f_ogstr = (  self1614 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_296   chars317 (    const char*  self1629 ) {
    return ( (  into_dash_iter318 ) ( (  self1629 ) ) );
}

static  size_t   const_dash_str_dash_len294 (    const char*  s1872 ) {
    return ( (  count295 ) ( ( (  chars317 ) ( (  s1872 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str293 (    const char*  s2489 ) {
    size_t  len2490 = ( (  const_dash_str_dash_len294 ) ( (  s2489 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  cast301 ) ( (  s2489 ) ) ) , .f_count = (  len2490 ) } ) } );
}

struct Maybe_322 {
    enum {
        Maybe_322_None_t,
        Maybe_322_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_322_Just_s;
    } stuff;
};

static struct Maybe_322 Maybe_322_Just (  const char*  field0 ) {
    return ( struct Maybe_322 ) { .tag = Maybe_322_Just_t, .stuff = { .Maybe_322_Just_s = { .field0 = field0 } } };
};

struct StrConcat_324 {
    struct StrConcat_81  field0;
    size_t  field1;
};

static struct StrConcat_324 StrConcat_324_StrConcat (  struct StrConcat_81  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_324 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_323 {
    struct StrConcat_324  field0;
    struct Char_65  field1;
};

static struct StrConcat_323 StrConcat_323_StrConcat (  struct StrConcat_324  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_323 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_328 {
    struct StrView_27  field0;
    struct StrConcat_323  field1;
};

static struct StrConcat_328 StrConcat_328_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_323  field1 ) {
    return ( struct StrConcat_328 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_327 {
    struct StrConcat_328  field0;
    struct Char_65  field1;
};

static struct StrConcat_327 StrConcat_327_StrConcat (  struct StrConcat_328  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_327 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32331 (    size_t  x685 ) {
    return ( (int32_t ) (  x685 ) );
}

static  enum Unit_8   print_dash_str330 (    struct StrView_27  self1275 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32331 ) ( ( ( (  self1275 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1275 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str336 (    size_t  self1375 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1375 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str335 (    struct StrConcat_82  self1254 ) {
    struct StrConcat_82  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str334 (    struct StrConcat_81  self1254 ) {
    struct StrConcat_81  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str333 (    struct StrConcat_324  self1254 ) {
    struct StrConcat_324  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str334 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Array_340 {
    uint8_t _arr [4];
};

struct Scalar_342 {
    uint32_t  f_value;
};

struct CharDestructured_341 {
    enum {
        CharDestructured_341_Ref_t,
        CharDestructured_341_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_341_Ref_s;
        struct {
            struct Scalar_342  field0;
        } CharDestructured_341_Scalar_s;
    } stuff;
};

static struct CharDestructured_341 CharDestructured_341_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_341 ) { .tag = CharDestructured_341_Ref_t, .stuff = { .CharDestructured_341_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_341 CharDestructured_341_Scalar (  struct Scalar_342  field0 ) {
    return ( struct CharDestructured_341 ) { .tag = CharDestructured_341_Scalar_t, .stuff = { .CharDestructured_341_Scalar_s = { .field0 = field0 } } };
};

static  uint8_t   size_dash_u8345 (    size_t  x694 ) {
    return ( (uint8_t ) (  x694 ) );
}

static  size_t   op_dash_div346 (    size_t  l294 ,    size_t  r296 ) {
    return ( (  l294 ) / (  r296 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer344 (    uint8_t *  ptr742 ) {
    return ( (  size_dash_u8345 ) ( (  op_dash_div346 ( ( ( (size_t ) (  ptr742 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint32_t   size_dash_u32347 (    size_t  x688 ) {
    return ( (uint32_t ) (  x688 ) );
}

static  size_t   cast348 (    uint8_t *  x385 ) {
    return ( (size_t ) (  x385 ) );
}

static  struct CharDestructured_341   destructure343 (    struct Char_65  c1196 ) {
    if ( (  eq305 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer344 ) ( ( (  c1196 ) .f_ptr ) ) ) , (  from_dash_integral310 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_341_Scalar ) ( ( (struct Scalar_342) { .f_value = ( (  size_dash_u32347 ) ( ( ( (  cast348 ) ( ( (  c1196 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_341_Ref ) ( (  c1196 ) ) );
    }
}

static  struct Array_340   from_dash_listlike351 (    struct Array_340 *  self359 ) {
    return ( * (  self359 ) );
}

static  struct Array_340   unscalarize349 (    struct Scalar_342  scalar1199 ) {
    if ( (  cmp170 ( ( (  scalar1199 ) .f_value ) , (  from_dash_integral165 ( 128 ) ) ) == 2 ) ) {
        const char*  temp350 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp350);
        abort ( );
        ( Unit_8_Unit );
    }
    uint8_t  b1200 = ( (  u32_dash_u8144 ) ( ( (  scalar1199 ) .f_value ) ) );
    struct Array_340  temp352 = ( (struct Array_340) { ._arr = { (  b1200 ) , (  from_dash_integral310 ( 0 ) ) , (  from_dash_integral310 ( 0 ) ) , (  from_dash_integral310 ( 0 ) ) } } );
    return ( (  from_dash_listlike351 ) ( ( &temp352 ) ) );
}

static  uint8_t *   cast_dash_ptr353 (    struct Array_340 *  p388 ) {
    return ( (uint8_t * ) (  p388 ) );
}

static  struct Char_65   regularize339 (    struct Char_65  c1203 ,    struct Array_340 *  possible_dash_scalar_dash_mem1205 ) {
    struct CharDestructured_341  dref1206 = ( (  destructure343 ) ( (  c1203 ) ) );
    if ( dref1206.tag == CharDestructured_341_Ref_t ) {
        return ( dref1206 .stuff .CharDestructured_341_Ref_s .field0 );
    }
    else {
        if ( dref1206.tag == CharDestructured_341_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1205 ) = ( (  unscalarize349 ) ( ( dref1206 .stuff .CharDestructured_341_Scalar_s .field0 ) ) );
            return ( (struct Char_65) { .f_ptr = ( (  cast_dash_ptr353 ) ( (  possible_dash_scalar_dash_mem1205 ) ) ) , .f_num_dash_bytes = ( (  c1203 ) .f_num_dash_bytes ) } );
        }
    }
}

static  enum Unit_8   printf_dash_char338 (    struct Char_65  c1211 ) {
    struct Array_340  temp355;
    struct Array_340  temp354 = (  temp355 );
    struct Char_65  c1212 = ( (  regularize339 ) ( (  c1211 ) ,  ( &temp354 ) ) );
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32331 ) ( ( (  c1212 ) .f_num_dash_bytes ) ) ) ,  ( (  c1212 ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str337 (    struct Char_65  self1235 ) {
    ( (  printf_dash_char338 ) ( (  self1235 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str332 (    struct StrConcat_323  self1254 ) {
    struct StrConcat_323  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str333 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str329 (    struct StrConcat_328  self1254 ) {
    struct StrConcat_328  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str332 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str326 (    struct StrConcat_327  self1254 ) {
    struct StrConcat_327  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str329 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  uint8_t *   cast357 (    uint8_t *  x385 ) {
    return ( (uint8_t * ) (  x385 ) );
}

static  struct Char_65   from_dash_charlike356 (    uint8_t *  ptr1223 ,    size_t  num_dash_bytes1225 ) {
    uint8_t *  ptr1226 = ( ( (  cast357 ) ( (  ptr1223 ) ) ) );
    return ( (  scan_dash_from_dash_mem307 ) ( (  ptr1226 ) ) );
}

static  enum Unit_8   panic325 (    struct StrConcat_323  errmsg1295 ) {
    ( (  print_dash_str326 ) ( ( ( StrConcat_327_StrConcat ) ( ( ( StrConcat_328_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1295 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  const char*   undefined358 (  ) {
    const char*  temp359;
    return (  temp359 );
}

static  const char*   or_dash_fail321 (    struct Maybe_322  x1305 ,    struct StrConcat_323  errmsg1307 ) {
    struct Maybe_322  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_322_None_t ) {
        ( (  panic325 ) ( (  errmsg1307 ) ) );
        return ( (  undefined358 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_322_Just_t ) {
            return ( dref1308 .stuff .Maybe_322_Just_s .field0 );
        }
    }
}

static  struct Maybe_322   try_dash_get360 (    struct Slice_285  slice2111 ,    size_t  i2113 ) {
    if ( ( (  cmp292 ( (  i2113 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2113 ) , ( (  slice2111 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_322) { .tag = Maybe_322_None_t } );
    }
    const char* *  elem_dash_ptr2114 = ( (  offset_dash_ptr287 ) ( ( (  slice2111 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2113 ) ) ) ) );
    return ( ( Maybe_322_Just ) ( ( * (  elem_dash_ptr2114 ) ) ) );
}

static  const char*   get320 (    struct Slice_285  slice2117 ,    size_t  i2119 ) {
    return ( (  or_dash_fail321 ) ( ( (  try_dash_get360 ) ( (  slice2117 ) ,  (  i2119 ) ) ) ,  ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2119 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2117 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get319 (    struct Slice_285  self2130 ,    size_t  idx2132 ) {
    return ( (  get320 ) ( (  self2130 ) ,  (  idx2132 ) ) );
}

struct Maybe_361 {
    enum {
        Maybe_361_None_t,
        Maybe_361_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_105  field0;
        } Maybe_361_Just_s;
    } stuff;
};

static struct Maybe_361 Maybe_361_Just (  struct TextBuf_105  field0 ) {
    return ( struct Maybe_361 ) { .tag = Maybe_361_Just_t, .stuff = { .Maybe_361_Just_s = { .field0 = field0 } } };
};

struct envunion363 {
    struct Maybe_361  (*fun) (  struct env114*  ,    enum CAllocator_10  ,    struct StrView_27  );
    struct env114 env;
};

static  void *   cast_dash_ptr376 (    struct Line_12 * *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of377 (    struct Line_12 *  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  struct Line_12 *   zeroed374 (  ) {
    struct Line_12 *  temp375;
    struct Line_12 *  x625 = (  temp375 );
    ( ( memset ) ( ( (  cast_dash_ptr376 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of377 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  struct Line_12 *   null_dash_ptr373 (  ) {
    return ( (  zeroed374 ) ( ) );
}

static  struct Slice_11   empty372 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr373 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk371 (    enum CAllocator_10  al2372 ) {
    struct Slice_11  elements2373 = ( (  empty372 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2372 ) , .f_elements = (  elements2373 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env381 {
    struct env6 envinst6;
    struct List_9 *  list2439;
};

struct envunion382 {
    enum Unit_8  (*fun) (  struct env381*  ,    struct Line_12  );
    struct env381 env;
};

struct ArrayIter_383 {
    struct Array_52  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_383   into_dash_iter385 (    struct Array_52  self2037 ) {
    return ( (struct ArrayIter_383) { .f_backing = (  self2037 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_386 {
    enum {
        Maybe_386_None_t,
        Maybe_386_Just_t,
    } tag;
    union {
        struct {
            struct Line_12  field0;
        } Maybe_386_Just_s;
    } stuff;
};

static struct Maybe_386 Maybe_386_Just (  struct Line_12  field0 ) {
    return ( struct Maybe_386 ) { .tag = Maybe_386_Just_t, .stuff = { .Maybe_386_Just_s = { .field0 = field0 } } };
};

struct StrConcat_392 {
    struct StrConcat_81  field0;
    int32_t  field1;
};

static struct StrConcat_392 StrConcat_392_StrConcat (  struct StrConcat_81  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_392 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_391 {
    struct StrConcat_392  field0;
    struct Char_65  field1;
};

static struct StrConcat_391 StrConcat_391_StrConcat (  struct StrConcat_392  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_391 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_395 {
    struct StrView_27  field0;
    struct StrConcat_391  field1;
};

static struct StrConcat_395 StrConcat_395_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_391  field1 ) {
    return ( struct StrConcat_395 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_394 {
    struct StrConcat_395  field0;
    struct Char_65  field1;
};

static struct StrConcat_394 StrConcat_394_StrConcat (  struct StrConcat_395  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_394 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str399 (    int32_t  self1369 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1369 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str398 (    struct StrConcat_392  self1254 ) {
    struct StrConcat_392  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str334 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str399 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str397 (    struct StrConcat_391  self1254 ) {
    struct StrConcat_391  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str398 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str396 (    struct StrConcat_395  self1254 ) {
    struct StrConcat_395  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str397 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str393 (    struct StrConcat_394  self1254 ) {
    struct StrConcat_394  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str396 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic390 (    struct StrConcat_391  errmsg1295 ) {
    ( (  print_dash_str393 ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_395_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1295 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Line_12 *   cast_dash_ptr400 (    struct Array_52 *  p388 ) {
    return ( (struct Line_12 * ) (  p388 ) );
}

static  struct Line_12 *   offset_dash_ptr401 (    struct Line_12 *  x367 ,    int64_t  count369 ) {
    struct Line_12  temp402;
    return ( (struct Line_12 * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp402 ) ) ) ) ) ) ) ) );
}

static  struct Line_12 *   get_dash_ptr389 (    struct Array_52 *  arr1961 ,    size_t  i1964 ) {
    if ( ( (  cmp292 ( (  i1964 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1964 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i1964 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  p1965 = ( ( (  cast_dash_ptr400 ) ( (  arr1961 ) ) ) );
    return ( (  offset_dash_ptr401 ) ( (  p1965 ) ,  ( (int64_t ) (  i1964 ) ) ) );
}

static  struct Line_12   get388 (    struct Array_52 *  arr1968 ,    size_t  i1971 ) {
    return ( * ( (  get_dash_ptr389 ) ( (  arr1968 ) ,  (  i1971 ) ) ) );
}

static  struct Maybe_386   next387 (    struct ArrayIter_383 *  self2044 ) {
    if ( (  cmp292 ( ( ( * (  self2044 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
    }
    struct Line_12  e2046 = ( (  get388 ) ( ( & ( ( * (  self2044 ) ) .f_backing ) ) ,  ( ( * (  self2044 ) ) .f_cur ) ) );
    (*  self2044 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2044 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_386_Just ) ( (  e2046 ) ) );
}

static  enum Unit_8   for_dash_each380 (    struct Array_52  iterable1058 ,   struct envunion382  fun1060 ) {
    struct ArrayIter_383  temp384 = ( (  into_dash_iter385 ) ( (  iterable1058 ) ) );
    struct ArrayIter_383 *  it1061 = ( &temp384 );
    while ( ( true ) ) {
        struct Maybe_386  dref1062 = ( (  next387 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_386_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_386_Just_t ) {
                struct envunion382  temp403 = (  fun1060 );
                ( temp403.fun ( &temp403.env ,  ( dref1062 .stuff .Maybe_386_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  bool   eq409 (    size_t  l130 ,    size_t  r132 ) {
    return ( (  l130 ) == (  r132 ) );
}

struct TypeSize_412 {
    size_t  f_size;
};

static  struct TypeSize_412   get_dash_typesize411 (  ) {
    struct Line_12  temp413;
    return ( (struct TypeSize_412) { .f_size = ( sizeof( ( (  temp413 ) ) ) ) } );
}

static  struct Line_12 *   cast_dash_ptr414 (    void *  p388 ) {
    return ( (struct Line_12 * ) (  p388 ) );
}

static  size_t   op_dash_mul415 (    size_t  l289 ,    size_t  r291 ) {
    return ( (  l289 ) * (  r291 ) );
}

static  struct Slice_11   allocate410 (    enum CAllocator_10  dref2303 ,    size_t  count2305 ) {
    if (!(  dref2303 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2306 = ( ( ( (  get_dash_typesize411 ) ( ) ) ) .f_size );
    struct Line_12 *  ptr2307 = ( (  cast_dash_ptr414 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2306 ) , (  count2305 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr2307 ) , .f_count = (  count2305 ) } );
}

struct env416 {
    ;
    ;
    struct Slice_11  new_dash_slice2383;
};

struct Tuple2_418 {
    struct Line_12  field0;
    int32_t  field1;
};

static struct Tuple2_418 Tuple2_418_Tuple2 (  struct Line_12  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_418 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion417 {
    enum Unit_8  (*fun) (  struct env416*  ,    struct Tuple2_418  );
    struct env416 env;
};

static  struct Line_12 *   get_dash_ptr421 (    struct Slice_11  slice2105 ,    size_t  i2107 ) {
    if ( ( (  cmp292 ( (  i2107 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2107 ) , ( (  slice2105 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2107 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2105 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  elem_dash_ptr2108 = ( (  offset_dash_ptr401 ) ( ( (  slice2105 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2107 ) ) ) ) );
    return (  elem_dash_ptr2108 );
}

static  enum Unit_8   set420 (    struct Slice_11  slice2122 ,    size_t  i2124 ,    struct Line_12  x2126 ) {
    struct Line_12 *  ep2127 = ( (  get_dash_ptr421 ) ( (  slice2122 ) ,  (  i2124 ) ) );
    (*  ep2127 ) = (  x2126 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size422 (    int32_t  x664 ) {
    return ( (size_t ) ( (int64_t ) (  x664 ) ) );
}

static  enum Unit_8   lam419 (   struct env416* env ,    struct Tuple2_418  dref2384 ) {
    return ( (  set420 ) ( ( env->new_dash_slice2383 ) ,  ( (  i32_dash_size422 ) ( ( dref2384 .field1 ) ) ) ,  ( dref2384 .field0 ) ) );
}

struct SliceIter_425 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_426 {
    int32_t  f_from;
};

struct Zip_424 {
    struct SliceIter_425  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

static  struct Zip_424   into_dash_iter428 (    struct Zip_424  self895 ) {
    return (  self895 );
}

struct Maybe_429 {
    enum {
        Maybe_429_None_t,
        Maybe_429_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_418  field0;
        } Maybe_429_Just_s;
    } stuff;
};

static struct Maybe_429 Maybe_429_Just (  struct Tuple2_418  field0 ) {
    return ( struct Maybe_429 ) { .tag = Maybe_429_Just_t, .stuff = { .Maybe_429_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_386   next431 (    struct SliceIter_425 *  self2191 ) {
    size_t  off2192 = ( ( * (  self2191 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2191 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
    }
    struct Line_12  elem2193 = ( * ( (  offset_dash_ptr401 ) ( ( ( ( * (  self2191 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2192 ) ) ) ) ) );
    (*  self2191 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_386_Just ) ( (  elem2193 ) ) );
}

static  struct Maybe_155   next432 (    struct FromIter_426 *  dref872 ) {
    int32_t  v874 = ( ( (* dref872 ) ) .f_from );
    (* dref872 ) .f_from = (  op_dash_add159 ( ( ( (* dref872 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_155_Just ) ( (  v874 ) ) );
}

static  struct Maybe_429   next430 (    struct Zip_424 *  self898 ) {
    struct Zip_424  copy899 = ( * (  self898 ) );
    while ( ( true ) ) {
        struct Maybe_386  dref900 = ( (  next431 ) ( ( & ( (  copy899 ) .f_left_dash_it ) ) ) );
        if ( dref900.tag == Maybe_386_None_t ) {
            return ( (struct Maybe_429) { .tag = Maybe_429_None_t } );
        }
        else {
            if ( dref900.tag == Maybe_386_Just_t ) {
                struct Maybe_155  dref902 = ( (  next432 ) ( ( & ( (  copy899 ) .f_right_dash_it ) ) ) );
                if ( dref902.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_429) { .tag = Maybe_429_None_t } );
                }
                else {
                    if ( dref902.tag == Maybe_155_Just_t ) {
                        ( (  next431 ) ( ( & ( ( * (  self898 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self898 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_429_Just ) ( ( ( Tuple2_418_Tuple2 ) ( ( dref900 .stuff .Maybe_386_Just_s .field0 ) ,  ( dref902 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each423 (    struct Zip_424  iterable1058 ,   struct envunion417  fun1060 ) {
    struct Zip_424  temp427 = ( (  into_dash_iter428 ) ( (  iterable1058 ) ) );
    struct Zip_424 *  it1061 = ( &temp427 );
    while ( ( true ) ) {
        struct Maybe_429  dref1062 = ( (  next430 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_429_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_429_Just_t ) {
                struct envunion417  temp433 = (  fun1060 );
                ( temp433.fun ( &temp433.env ,  ( dref1062 .stuff .Maybe_429_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_425   into_dash_iter435 (    struct Slice_11  self2185 ) {
    return ( (struct SliceIter_425) { .f_slice = (  self2185 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_426   into_dash_iter436 (    struct FromIter_426  it870 ) {
    return (  it870 );
}

static  struct Zip_424   zip434 (    struct Slice_11  left906 ,    struct FromIter_426  right908 ) {
    struct SliceIter_425  left_dash_it909 = ( (  into_dash_iter435 ) ( (  left906 ) ) );
    struct FromIter_426  right_dash_it910 = ( (  into_dash_iter436 ) ( (  right908 ) ) );
    return ( (struct Zip_424) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

static  struct FromIter_426   from437 (    int32_t  f867 ) {
    return ( (struct FromIter_426) { .f_from = (  f867 ) } );
}

static  void *   cast_dash_ptr439 (    struct Line_12 *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  enum Unit_8   free438 (    enum CAllocator_10  dref2309 ,    struct Slice_11  slice2311 ) {
    if (!(  dref2309 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr439 ) ( ( (  slice2311 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full408 (   struct env1* env ,    struct List_9 *  list2382 ) {
    if ( (  eq409 ( ( ( * (  list2382 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2382 ) .f_elements = ( (  allocate410 ) ( ( ( * (  list2382 ) ) .f_al ) ,  ( env->starting_dash_size2377 ) ) );
    } else {
        if ( (  eq409 ( ( ( * (  list2382 ) ) .f_count ) , ( ( ( * (  list2382 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2383 = ( (  allocate410 ) ( ( ( * (  list2382 ) ) .f_al ) ,  (  op_dash_mul415 ( ( ( * (  list2382 ) ) .f_count ) , ( env->growth_dash_factor2378 ) ) ) ) );
            struct env416 envinst416 = {
                .new_dash_slice2383 =  new_dash_slice2383 ,
            };
            struct envunion417  fun2387 = ( (struct envunion417){ .fun = (  enum Unit_8  (*) (  struct env416*  ,    struct Tuple2_418  ) )lam419 , .env =  envinst416 } );
            ( (  for_dash_each423 ) ( ( (  zip434 ) ( ( ( * (  list2382 ) ) .f_elements ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2387 ) ) );
            ( (  free438 ) ( ( ( * (  list2382 ) ) .f_al ) ,  ( ( * (  list2382 ) ) .f_elements ) ) );
            (*  list2382 ) .f_elements = (  new_dash_slice2383 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add406 (   struct env6* env ,    struct List_9 *  list2390 ,    struct Line_12  elem2392 ) {
    struct envunion7  temp407 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full408 , .env =  env->envinst1 } );
    ( temp407.fun ( &temp407.env ,  (  list2390 ) ) );
    ( (  set420 ) ( ( ( * (  list2390 ) ) .f_elements ) ,  ( ( * (  list2390 ) ) .f_count ) ,  (  elem2392 ) ) );
    (*  list2390 ) .f_count = (  op_dash_add313 ( ( ( * (  list2390 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam404 (   struct env381* env ,    struct Line_12  x2443 ) {
    struct envunion47  temp405 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add406 , .env =  env->envinst6 } );
    return ( temp405.fun ( &temp405.env ,  ( env->list2439 ) ,  (  x2443 ) ) );
}

static  enum Unit_8   add_dash_all379 (   struct env46* env ,    struct List_9 *  list2439 ,    struct Array_52  it2441 ) {
    struct env381 envinst381 = {
        .envinst6 = env->envinst6 ,
        .list2439 =  list2439 ,
    };
    ( (  for_dash_each380 ) ( (  it2441 ) ,  ( (struct envunion382){ .fun = (  enum Unit_8  (*) (  struct env381*  ,    struct Line_12  ) )lam404 , .env =  envinst381 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter369 (   struct env50* env ,    struct Array_52  iter2480 ,    enum CAllocator_10  al2482 ) {
    struct List_9  temp370 = ( (  mk371 ) ( (  al2482 ) ) );
    struct List_9 *  list2483 = ( &temp370 );
    struct envunion51  temp378 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Array_52  ) )add_dash_all379 , .env =  env->envinst46 } );
    ( temp378.fun ( &temp378.env ,  (  list2483 ) ,  (  iter2480 ) ) );
    return ( * (  list2483 ) );
}

static  struct Array_52   from_dash_listlike440 (    struct Array_52 *  self359 ) {
    return ( * (  self359 ) );
}

static  void *   cast_dash_ptr448 (    struct Highlight_17 * *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of449 (    struct Highlight_17 *  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  struct Highlight_17 *   zeroed446 (  ) {
    struct Highlight_17 *  temp447;
    struct Highlight_17 *  x625 = (  temp447 );
    ( ( memset ) ( ( (  cast_dash_ptr448 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of449 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  struct Highlight_17 *   null_dash_ptr445 (  ) {
    return ( (  zeroed446 ) ( ) );
}

static  struct Slice_16   empty444 (  ) {
    return ( (struct Slice_16) { .f_ptr = ( (  null_dash_ptr445 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_15   mk443 (    enum CAllocator_10  al2372 ) {
    struct Slice_16  elements2373 = ( (  empty444 ) ( ) );
    return ( (struct List_15) { .f_al = (  al2372 ) , .f_elements = (  elements2373 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_12   mk_dash_line442 (    struct List_13  initial3830 ) {
    return ( (struct Line_12) { .f_line = (  initial3830 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk443 ) ( ( (  initial3830 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr455 (    uint8_t * *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of456 (    uint8_t *  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  uint8_t *   zeroed453 (  ) {
    uint8_t *  temp454;
    uint8_t *  x625 = (  temp454 );
    ( ( memset ) ( ( (  cast_dash_ptr455 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of456 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  uint8_t *   null_dash_ptr452 (  ) {
    return ( (  zeroed453 ) ( ) );
}

static  struct Slice_14   empty451 (  ) {
    return ( (struct Slice_14) { .f_ptr = ( (  null_dash_ptr452 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_13   mk450 (    enum CAllocator_10  al2372 ) {
    struct Slice_14  elements2373 = ( (  empty451 ) ( ) );
    return ( (struct List_13) { .f_al = (  al2372 ) , .f_elements = (  elements2373 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr463 (    struct Changeset_32 * *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of464 (    struct Changeset_32 *  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  struct Changeset_32 *   zeroed461 (  ) {
    struct Changeset_32 *  temp462;
    struct Changeset_32 *  x625 = (  temp462 );
    ( ( memset ) ( ( (  cast_dash_ptr463 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of464 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  struct Changeset_32 *   null_dash_ptr460 (  ) {
    return ( (  zeroed461 ) ( ) );
}

static  struct Slice_31   empty459 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr460 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk458 (    enum CAllocator_10  al2372 ) {
    struct Slice_31  elements2373 = ( (  empty459 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2372 ) , .f_elements = (  elements2373 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_106   mk_dash_actions457 (    enum CAllocator_10  al3818 ) {
    return ( (struct Actions_106) { .f_list = ( (  mk458 ) ( (  al3818 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_107_NoChangeset ) } );
}

static  struct TextBuf_105   mk367 (   struct env112* env ,    enum CAllocator_10  al3932 ) {
    struct envunion113  temp368 = ( (struct envunion113){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  ) )from_dash_iter369 , .env =  env->envinst50 } );
    struct Array_52  temp441 = ( (struct Array_52) { ._arr = { ( (  mk_dash_line442 ) ( ( (  mk450 ) ( (  al3932 ) ) ) ) ) } } );
    return ( (struct TextBuf_105) { .f_al = (  al3932 ) , .f_buf = ( temp368.fun ( &temp368.env ,  ( (  from_dash_listlike440 ) ( ( &temp441 ) ) ) ,  (  al3932 ) ) ) , .f_actions = ( (  mk_dash_actions457 ) ( (  al3932 ) ) ) , .f_filename = ( (struct Maybe_78) { .tag = Maybe_78_None_t } ) , .f_filetype = ( Filetype_108_Text ) } );
}

struct StrViewIter_469 {
    struct StrView_27  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_469   into_dash_iter470 (    struct StrViewIter_469  self1267 ) {
    return (  self1267 );
}

static  struct StrViewIter_469   into_dash_iter472 (    struct StrView_27  self1264 ) {
    return ( (struct StrViewIter_469) { .f_ds = (  self1264 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_469   chars471 (    struct StrView_27  self1278 ) {
    return ( (  into_dash_iter472 ) ( (  self1278 ) ) );
}

static  struct Maybe_299   next474 (    struct StrViewIter_469 *  self1270 ) {
    if ( (  cmp292 ( ( ( * (  self1270 ) ) .f_i ) , ( ( ( ( * (  self1270 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    uint8_t *  char_dash_ptr1271 = ( ( (  offset_dash_ptr302 ) ( ( (  cast357 ) ( ( ( ( ( * (  self1270 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64304 ) ( ( ( * (  self1270 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1272 = ( (  scan_dash_from_dash_mem307 ) ( (  char_dash_ptr1271 ) ) );
    (*  self1270 ) .f_i = (  op_dash_add313 ( ( ( * (  self1270 ) ) .f_i ) , ( (  char1272 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_299_Just ) ( (  char1272 ) ) );
}

static  size_t   min478 (    size_t  l1319 ,    size_t  r1321 ) {
    if ( (  cmp292 ( (  l1319 ) , (  r1321 ) ) == 0 ) ) {
        return (  l1319 );
    } else {
        return (  r1321 );
    }
}

static  struct Slice_14   subslice477 (    struct Slice_14  slice2139 ,    size_t  from2141 ,    size_t  to2143 ) {
    uint8_t *  begin_dash_ptr2144 = ( (  offset_dash_ptr302 ) ( ( (  slice2139 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from2141 ) ) ) ) );
    if ( ( (  cmp292 ( (  from2141 ) , (  to2143 ) ) != 0 ) || (  cmp292 ( (  from2141 ) , ( (  slice2139 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2145 = (  op_dash_sub291 ( ( (  min478 ) ( (  to2143 ) ,  ( (  slice2139 ) .f_count ) ) ) , (  from2141 ) ) );
    return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  count2145 ) } );
}

static  struct Slice_14   from476 (    struct Slice_14  slice2148 ,    size_t  from2150 ) {
    return ( (  subslice477 ) ( (  slice2148 ) ,  (  from2150 ) ,  ( (  slice2148 ) .f_count ) ) );
}

static  struct StrView_27   byte_dash_substr_dash_from475 (    struct StrView_27  s2546 ,    size_t  from2548 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from476 ) ( ( (  s2546 ) .f_contents ) ,  (  from2548 ) ) ) } );
}

static  struct StrView_27   drop_dash_while467 (    struct StrView_27  sv2575 ,    bool (*  fun2577 )(    struct Char_65  ) ) {
    size_t  from2578 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_469  temp468 =  into_dash_iter470 ( ( (  chars471 ) ( (  sv2575 ) ) ) );
    while (true) {
        struct Maybe_299  __cond473 =  next474 (&temp468);
        if (  __cond473 .tag == 0 ) {
            break;
        }
        struct Char_65  c2580 =  __cond473 .stuff .Maybe_299_Just_s .field0;
        if ( ( ! ( (  fun2577 ) ( (  c2580 ) ) ) ) ) {
            break;
        }
        from2578 = (  op_dash_add313 ( (  from2578 ) , ( (  c2580 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from475 ) ( (  sv2575 ) ,  (  from2578 ) ) );
}

static  struct Array_340   uninit_dash_buf482 (  ) {
    struct Array_340  temp483;
    return (  temp483 );
}

static  int64_t   op_dash_add485 (    int64_t  l193 ,    int64_t  r195 ) {
    return ( (  l193 ) + (  r195 ) );
}

static  bool   eq480 (    struct Char_65  l1403 ,    struct Char_65  r1405 ) {
    if ( ( !  eq409 ( ( (  l1403 ) .f_num_dash_bytes ) , ( (  r1405 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Array_340  temp481 = ( (  uninit_dash_buf482 ) ( ) );
    struct Char_65  lc1406 = ( (  regularize339 ) ( (  l1403 ) ,  ( &temp481 ) ) );
    struct Array_340  temp484 = ( (  uninit_dash_buf482 ) ( ) );
    struct Char_65  rc1407 = ( (  regularize339 ) ( (  r1405 ) ,  ( &temp484 ) ) );
    int64_t  i1408 = (  from_dash_integral290 ( 0 ) );
    while ( (  cmp292 ( ( (size_t ) (  i1408 ) ) , ( (  lc1406 ) .f_num_dash_bytes ) ) == 0 ) ) {
        if ( ( !  eq305 ( ( * ( (uint8_t * ) ( ( (void*) ( (  lc1406 ) .f_ptr ) ) + (  i1408 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( (  rc1407 ) .f_ptr ) ) + (  i1408 ) ) ) ) ) ) ) {
            return ( false );
        }
        i1408 = (  op_dash_add485 ( (  i1408 ) , (  from_dash_integral290 ( 1 ) ) ) );
    }
    return ( true );
}

static  bool   lam479 (    struct Char_65  c3842 ) {
    return (  eq480 ( (  c3842 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) );
}

struct Maybe_489 {
    enum {
        Maybe_489_None_t,
        Maybe_489_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_489_Just_s;
    } stuff;
};

static struct Maybe_489 Maybe_489_Just (  uint8_t  field0 ) {
    return ( struct Maybe_489 ) { .tag = Maybe_489_Just_t, .stuff = { .Maybe_489_Just_s = { .field0 = field0 } } };
};

static  uint8_t   undefined490 (  ) {
    uint8_t  temp491;
    return (  temp491 );
}

static  uint8_t   or_dash_fail488 (    struct Maybe_489  x1305 ,    struct StrConcat_323  errmsg1307 ) {
    struct Maybe_489  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_489_None_t ) {
        ( (  panic325 ) ( (  errmsg1307 ) ) );
        return ( (  undefined490 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_489_Just_t ) {
            return ( dref1308 .stuff .Maybe_489_Just_s .field0 );
        }
    }
}

static  struct Maybe_489   try_dash_get492 (    struct Slice_14  slice2111 ,    size_t  i2113 ) {
    if ( ( (  cmp292 ( (  i2113 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2113 ) , ( (  slice2111 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_489) { .tag = Maybe_489_None_t } );
    }
    uint8_t *  elem_dash_ptr2114 = ( (  offset_dash_ptr302 ) ( ( (  slice2111 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2113 ) ) ) ) );
    return ( ( Maybe_489_Just ) ( ( * (  elem_dash_ptr2114 ) ) ) );
}

static  uint8_t   get487 (    struct Slice_14  slice2117 ,    size_t  i2119 ) {
    return ( (  or_dash_fail488 ) ( ( (  try_dash_get492 ) ( (  slice2117 ) ,  (  i2119 ) ) ) ,  ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2119 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2117 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get486 (    struct Slice_14  self2130 ,    size_t  idx2132 ) {
    return ( (  get487 ) ( (  self2130 ) ,  (  idx2132 ) ) );
}

static  uint8_t   ascii_dash_u8493 (    char  c1440 ) {
    return ( ( (uint8_t ) (  c1440 ) ) );
}

static  char   from_dash_charlike494 (    uint8_t *  ptr400 ,    size_t  num_dash_bytes402 ) {
    if ( ( !  eq409 ( (  num_dash_bytes402 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp495 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp495);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr400 ) ) ) );
}

static  struct StrView_27   byte_dash_substr496 (    struct StrView_27  s2539 ,    size_t  from2541 ,    size_t  to2543 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice477 ) ( ( (  s2539 ) .f_contents ) ,  (  from2541 ) ,  (  to2543 ) ) ) } );
}

static  struct Maybe_78   extension466 (    struct StrView_27  path3840 ) {
    struct StrView_27  path3843 = ( (  drop_dash_while467 ) ( (  path3840 ) ,  (  lam479 ) ) );
    size_t  i3844 = ( ( (  path3843 ) .f_contents ) .f_count );
    while ( (  cmp292 ( (  i3844 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i3844 = (  op_dash_sub291 ( (  i3844 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq305 ( (  elem_dash_get486 ( ( (  path3843 ) .f_contents ) , (  i3844 ) ) ) , ( (  ascii_dash_u8493 ) ( ( (  from_dash_charlike494 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq409 ( (  i3844 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
    struct StrView_27  ext3845 = ( (  byte_dash_substr496 ) ( (  path3843 ) ,  (  op_dash_add313 ( (  i3844 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path3843 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_78_Just ) ( (  ext3845 ) ) );
}

struct SliceIter_501 {
    struct Slice_14  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_500 {
    struct SliceIter_501  f_left_dash_it;
    struct SliceIter_501  f_right_dash_it;
};

struct Tuple2_502 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_502 Tuple2_502_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_502 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env504 {
    bool (*  fun1110 )(    struct Tuple2_502  );
};

struct envunion505 {
    bool  (*fun) (  struct env504*  ,    struct Tuple2_502  ,    bool  );
    struct env504 env;
};

static  struct Zip_500   into_dash_iter506 (    struct Zip_500  self895 ) {
    return (  self895 );
}

struct Maybe_507 {
    enum {
        Maybe_507_None_t,
        Maybe_507_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_502  field0;
        } Maybe_507_Just_s;
    } stuff;
};

static struct Maybe_507 Maybe_507_Just (  struct Tuple2_502  field0 ) {
    return ( struct Maybe_507 ) { .tag = Maybe_507_Just_t, .stuff = { .Maybe_507_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_489   next509 (    struct SliceIter_501 *  self2191 ) {
    size_t  off2192 = ( ( * (  self2191 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2191 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_489) { .tag = Maybe_489_None_t } );
    }
    uint8_t  elem2193 = ( * ( (  offset_dash_ptr302 ) ( ( ( ( * (  self2191 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2192 ) ) ) ) ) );
    (*  self2191 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_489_Just ) ( (  elem2193 ) ) );
}

static  struct Maybe_507   next508 (    struct Zip_500 *  self898 ) {
    struct Zip_500  copy899 = ( * (  self898 ) );
    while ( ( true ) ) {
        struct Maybe_489  dref900 = ( (  next509 ) ( ( & ( (  copy899 ) .f_left_dash_it ) ) ) );
        if ( dref900.tag == Maybe_489_None_t ) {
            return ( (struct Maybe_507) { .tag = Maybe_507_None_t } );
        }
        else {
            if ( dref900.tag == Maybe_489_Just_t ) {
                struct Maybe_489  dref902 = ( (  next509 ) ( ( & ( (  copy899 ) .f_right_dash_it ) ) ) );
                if ( dref902.tag == Maybe_489_None_t ) {
                    return ( (struct Maybe_507) { .tag = Maybe_507_None_t } );
                }
                else {
                    if ( dref902.tag == Maybe_489_Just_t ) {
                        ( (  next509 ) ( ( & ( ( * (  self898 ) ) .f_left_dash_it ) ) ) );
                        ( (  next509 ) ( ( & ( ( * (  self898 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_507_Just ) ( ( ( Tuple2_502_Tuple2 ) ( ( dref900 .stuff .Maybe_489_Just_s .field0 ) ,  ( dref902 .stuff .Maybe_489_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce503 (    struct Zip_500  iterable1077 ,    bool  base1079 ,   struct envunion505  fun1081 ) {
    bool  x1082 = (  base1079 );
    struct Zip_500  it1083 = ( (  into_dash_iter506 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_507  dref1084 = ( (  next508 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_507_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_507_Just_t ) {
                struct envunion505  temp510 = (  fun1081 );
                x1082 = ( temp510.fun ( &temp510.env ,  ( dref1084 .stuff .Maybe_507_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp511 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp511);
    abort ( );
    ( Unit_8_Unit );
    bool  temp512;
    return (  temp512 );
}

static  bool   lam513 (   struct env504* env ,    struct Tuple2_502  e1112 ,    bool  x1114 ) {
    return ( ( ( env->fun1110 ) ( (  e1112 ) ) ) && (  x1114 ) );
}

static  bool   all499 (    struct Zip_500  it1108 ,    bool (*  fun1110 )(    struct Tuple2_502  ) ) {
    struct env504 envinst504 = {
        .fun1110 =  fun1110 ,
    };
    return ( (  reduce503 ) ( (  it1108 ) ,  ( true ) ,  ( (struct envunion505){ .fun = (  bool  (*) (  struct env504*  ,    struct Tuple2_502  ,    bool  ) )lam513 , .env =  envinst504 } ) ) );
}

static  struct SliceIter_501   into_dash_iter515 (    struct Slice_14  self2185 ) {
    return ( (struct SliceIter_501) { .f_slice = (  self2185 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_500   zip514 (    struct Slice_14  left906 ,    struct Slice_14  right908 ) {
    struct SliceIter_501  left_dash_it909 = ( (  into_dash_iter515 ) ( (  left906 ) ) );
    struct SliceIter_501  right_dash_it910 = ( (  into_dash_iter515 ) ( (  right908 ) ) );
    return ( (struct Zip_500) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

static  bool   lam516 (    struct Tuple2_502  dref2225 ) {
    return (  eq305 ( ( dref2225 .field0 ) , ( dref2225 .field1 ) ) );
}

static  bool   eq498 (    struct Slice_14  l2222 ,    struct Slice_14  r2224 ) {
    if ( ( !  eq409 ( ( (  l2222 ) .f_count ) , ( (  r2224 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all499 ) ( ( (  zip514 ) ( (  l2222 ) ,  (  r2224 ) ) ) ,  (  lam516 ) ) );
}

static  bool   eq497 (    struct StrView_27  l2583 ,    struct StrView_27  r2585 ) {
    return (  eq498 ( ( (  l2583 ) .f_contents ) , ( (  r2585 ) .f_contents ) ) );
}

static  enum Filetype_108   detect_dash_filetype_dash_from_dash_filename465 (    struct StrView_27  filename3837 ) {
    struct Maybe_78  mext3846 = ( (  extension466 ) ( (  filename3837 ) ) );
    struct Maybe_78  dref3847 = (  mext3846 );
    if ( dref3847.tag == Maybe_78_None_t ) {
        return ( Filetype_108_Text );
    }
    else {
        if ( dref3847.tag == Maybe_78_Just_t ) {
            if ( ( (  eq497 ( ( dref3847 .stuff .Maybe_78_Just_s .field0 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) ) ) || (  eq497 ( ( dref3847 .stuff .Maybe_78_Just_s .field0 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"kkc" ) ,  ( 3 ) ) ) ) ) ) ) {
                return ( Filetype_108_KC );
            } else {
                if ( (  eq497 ( ( dref3847 .stuff .Maybe_78_Just_s .field0 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                    return ( Filetype_108_Markdown );
                } else {
                    if ( (  eq497 ( ( dref3847 .stuff .Maybe_78_Just_s .field0 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"gcode" ) ,  ( 5 ) ) ) ) ) ) {
                        return ( Filetype_108_GCode );
                    } else {
                        return ( Filetype_108_Text );
                    }
                }
            }
        }
    }
}

struct TypeSize_520 {
    size_t  f_size;
};

static  struct TypeSize_520   get_dash_typesize519 (  ) {
    uint8_t  temp521;
    return ( (struct TypeSize_520) { .f_size = ( sizeof( ( (  temp521 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr522 (    void *  p388 ) {
    return ( (uint8_t * ) (  p388 ) );
}

static  struct Slice_14   allocate518 (    enum CAllocator_10  dref2303 ,    size_t  count2305 ) {
    if (!(  dref2303 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2306 = ( ( ( (  get_dash_typesize519 ) ( ) ) ) .f_size );
    uint8_t *  ptr2307 = ( (  cast_dash_ptr522 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2306 ) , (  count2305 ) ) ) ) ) ) );
    return ( (struct Slice_14) { .f_ptr = (  ptr2307 ) , .f_count = (  count2305 ) } );
}

struct StrConcat_525 {
    struct StrConcat_324  field0;
    struct StrView_27  field1;
};

static struct StrConcat_525 StrConcat_525_StrConcat (  struct StrConcat_324  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_525 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_528 {
    struct StrView_27  field0;
    struct StrConcat_525  field1;
};

static struct StrConcat_528 StrConcat_528_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_525  field1 ) {
    return ( struct StrConcat_528 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_527 {
    struct StrConcat_528  field0;
    struct Char_65  field1;
};

static struct StrConcat_527 StrConcat_527_StrConcat (  struct StrConcat_528  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_527 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str530 (    struct StrConcat_525  self1254 ) {
    struct StrConcat_525  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str333 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str529 (    struct StrConcat_528  self1254 ) {
    struct StrConcat_528  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str530 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str526 (    struct StrConcat_527  self1254 ) {
    struct StrConcat_527  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str529 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic524 (    struct StrConcat_525  errmsg1295 ) {
    ( (  print_dash_str526 ) ( ( ( StrConcat_527_StrConcat ) ( ( ( StrConcat_528_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1295 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Zip_532 {
    struct SliceIter_501  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

struct env533 {
    ;
    struct Slice_14  dest2216;
    ;
};

struct Tuple2_535 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_535 Tuple2_535_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_535 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion534 {
    enum Unit_8  (*fun) (  struct env533*  ,    struct Tuple2_535  );
    struct env533 env;
};

static  struct Zip_532   into_dash_iter537 (    struct Zip_532  self895 ) {
    return (  self895 );
}

struct Maybe_538 {
    enum {
        Maybe_538_None_t,
        Maybe_538_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_535  field0;
        } Maybe_538_Just_s;
    } stuff;
};

static struct Maybe_538 Maybe_538_Just (  struct Tuple2_535  field0 ) {
    return ( struct Maybe_538 ) { .tag = Maybe_538_Just_t, .stuff = { .Maybe_538_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_538   next539 (    struct Zip_532 *  self898 ) {
    struct Zip_532  copy899 = ( * (  self898 ) );
    while ( ( true ) ) {
        struct Maybe_489  dref900 = ( (  next509 ) ( ( & ( (  copy899 ) .f_left_dash_it ) ) ) );
        if ( dref900.tag == Maybe_489_None_t ) {
            return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
        }
        else {
            if ( dref900.tag == Maybe_489_Just_t ) {
                struct Maybe_155  dref902 = ( (  next432 ) ( ( & ( (  copy899 ) .f_right_dash_it ) ) ) );
                if ( dref902.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
                }
                else {
                    if ( dref902.tag == Maybe_155_Just_t ) {
                        ( (  next509 ) ( ( & ( ( * (  self898 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self898 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_538_Just ) ( ( ( Tuple2_535_Tuple2 ) ( ( dref900 .stuff .Maybe_489_Just_s .field0 ) ,  ( dref902 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each531 (    struct Zip_532  iterable1058 ,   struct envunion534  fun1060 ) {
    struct Zip_532  temp536 = ( (  into_dash_iter537 ) ( (  iterable1058 ) ) );
    struct Zip_532 *  it1061 = ( &temp536 );
    while ( ( true ) ) {
        struct Maybe_538  dref1062 = ( (  next539 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_538_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_538_Just_t ) {
                struct envunion534  temp540 = (  fun1060 );
                ( temp540.fun ( &temp540.env ,  ( dref1062 .stuff .Maybe_538_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_532   zip541 (    struct Slice_14  left906 ,    struct FromIter_426  right908 ) {
    struct SliceIter_501  left_dash_it909 = ( (  into_dash_iter515 ) ( (  left906 ) ) );
    struct FromIter_426  right_dash_it910 = ( (  into_dash_iter436 ) ( (  right908 ) ) );
    return ( (struct Zip_532) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

static  uint8_t *   get_dash_ptr544 (    struct Slice_14  slice2105 ,    size_t  i2107 ) {
    if ( ( (  cmp292 ( (  i2107 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2107 ) , ( (  slice2105 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2107 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2105 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr2108 = ( (  offset_dash_ptr302 ) ( ( (  slice2105 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2107 ) ) ) ) );
    return (  elem_dash_ptr2108 );
}

static  enum Unit_8   set543 (    struct Slice_14  slice2122 ,    size_t  i2124 ,    uint8_t  x2126 ) {
    uint8_t *  ep2127 = ( (  get_dash_ptr544 ) ( (  slice2122 ) ,  (  i2124 ) ) );
    (*  ep2127 ) = (  x2126 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam542 (   struct env533* env ,    struct Tuple2_535  dref2217 ) {
    return ( (  set543 ) ( ( env->dest2216 ) ,  ( (  i32_dash_size422 ) ( ( dref2217 .field1 ) ) ) ,  ( dref2217 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to523 (    struct Slice_14  src2214 ,    struct Slice_14  dest2216 ) {
    if ( (  cmp292 ( ( (  src2214 ) .f_count ) , ( (  dest2216 ) .f_count ) ) == 2 ) ) {
        ( (  panic524 ) ( ( ( StrConcat_525_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2214 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2216 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env533 envinst533 = {
        .dest2216 =  dest2216 ,
    };
    ( (  for_dash_each531 ) ( ( (  zip541 ) ( (  src2214 ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion534){ .fun = (  enum Unit_8  (*) (  struct env533*  ,    struct Tuple2_535  ) )lam542 , .env =  envinst533 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   char_dash_u8545 (    struct Char_65  c1392 ) {
    struct CharDestructured_341  dref1393 = ( (  destructure343 ) ( (  c1392 ) ) );
    if ( dref1393.tag == CharDestructured_341_Ref_t ) {
        return ( * ( ( dref1393 .stuff .CharDestructured_341_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1393.tag == CharDestructured_341_Scalar_t ) {
            return ( (  u32_dash_u8144 ) ( ( ( dref1393 .stuff .CharDestructured_341_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_27   clone_dash_0517 (    struct StrView_27  s2508 ,    enum CAllocator_10  al2510 ) {
    size_t  cnt2511 = ( ( (  s2508 ) .f_contents ) .f_count );
    struct Slice_14  nus2512 = ( (  allocate518 ) ( (  al2510 ) ,  (  op_dash_add313 ( (  cnt2511 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to523 ) ( ( (  s2508 ) .f_contents ) ,  (  nus2512 ) ) );
    ( (  set543 ) ( (  nus2512 ) ,  (  cnt2511 ) ,  ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  nus2512 ) .f_ptr ) , .f_count = (  cnt2511 ) } ) } );
}

static  const char*   from_dash_charlike547 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
}

static  void *   cast_dash_ptr552 (    FILE * *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of553 (    FILE *  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  FILE *   zeroed550 (  ) {
    FILE *  temp551;
    FILE *  x625 = (  temp551 );
    ( ( memset ) ( ( (  cast_dash_ptr552 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of553 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  FILE *   null_dash_ptr549 (  ) {
    return ( (  zeroed550 ) ( ) );
}

static  bool   is_dash_ptr_dash_null548 (    FILE *  p635 ) {
    return ( (  p635 ) == ( (  null_dash_ptr549 ) ( ) ) );
}

static  int32_t   seek_dash_end554 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  int32_t   seek_dash_set555 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct Char_65   nullchar556 (  ) {
    return ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_78   try_dash_read_dash_contents546 (    const char*  filename3082 ,    enum CAllocator_10  al3084 ) {
    FILE *  file3085 = ( ( fopen ) ( (  filename3082 ) ,  ( (  from_dash_charlike547 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null548 ) ( (  file3085 ) ) ) ) {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
    ( ( fseek ) ( (  file3085 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end554 ) ( ) ) ) );
    int32_t  file_dash_size3086 = ( ( ftell ) ( (  file3085 ) ) );
    ( ( fseek ) ( (  file3085 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set555 ) ( ) ) ) );
    struct Slice_14  file_dash_buf3087 = ( ( (  allocate518 ) ( (  al3084 ) ,  (  op_dash_add313 ( ( (  i32_dash_size422 ) ( (  file_dash_size3086 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3087 ) .f_ptr ) ,  (  file_dash_size3086 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file3085 ) ) );
    ( (  set543 ) ( (  file_dash_buf3087 ) ,  ( (  i32_dash_size422 ) ( (  file_dash_size3086 ) ) ) ,  ( (  char_dash_u8545 ) ( ( (  nullchar556 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3085 ) ) );
    struct StrView_27  str3088 = ( (struct StrView_27) { .f_contents = ( (  subslice477 ) ( (  file_dash_buf3087 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub291 ( ( (  file_dash_buf3087 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_78_Just ) ( (  str3088 ) ) );
}

static  const char*   cast558 (    uint8_t *  x385 ) {
    return ( (const char* ) (  x385 ) );
}

static  const char*   as_dash_const_dash_str557 (    struct StrView_27  s2515 ) {
    return ( (  cast558 ) ( ( ( (  s2515 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr561 (    uint8_t *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  enum Unit_8   free560 (    enum CAllocator_10  dref2309 ,    struct Slice_14  slice2311 ) {
    if (!(  dref2309 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr561 ) ( ( (  slice2311 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free559 (    struct StrView_27  s2523 ,    enum CAllocator_10  al2525 ) {
    ( (  free560 ) ( (  al2525 ) ,  ( (struct Slice_14) { .f_ptr = ( ( (  s2523 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

struct Tuple2_563 {
    struct Maybe_489  field0;
    struct Maybe_489  field1;
};

static struct Tuple2_563 Tuple2_563_Tuple2 (  struct Maybe_489  field0 ,  struct Maybe_489  field1 ) {
    return ( struct Tuple2_563 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq562 (    struct Maybe_489  l145 ,    struct Maybe_489  r147 ) {
    struct Tuple2_563  dref148 = ( ( Tuple2_563_Tuple2 ) ( (  l145 ) ,  (  r147 ) ) );
    if ( dref148 .field0.tag == Maybe_489_None_t && dref148 .field1.tag == Maybe_489_None_t ) {
        return ( true );
    }
    else {
        if ( dref148 .field0.tag == Maybe_489_Just_t && dref148 .field1.tag == Maybe_489_Just_t ) {
            return (  eq305 ( ( dref148 .field0 .stuff .Maybe_489_Just_s .field0 ) , ( dref148 .field1 .stuff .Maybe_489_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  enum Ordering_158   cmp567 (    struct Pos_26  l3752 ,    struct Pos_26  r3754 ) {
    enum Ordering_158  dref3755 = ( (  cmp157 ) ( ( (  l3752 ) .f_line ) ,  ( (  r3754 ) .f_line ) ) );
    switch (  dref3755 ) {
        case Ordering_158_EQ : {
            return ( (  cmp157 ) ( ( (  l3752 ) .f_bi ) ,  ( (  r3754 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_158  els3756 =  dref3755;
            return (  els3756 );
            break;
        }
    }
}

static  struct Pos_26   min566 (    struct Pos_26  l1319 ,    struct Pos_26  r1321 ) {
    if ( (  cmp567 ( (  l1319 ) , (  r1321 ) ) == 0 ) ) {
        return (  l1319 );
    } else {
        return (  r1321 );
    }
}

static  struct Pos_26   max568 (    struct Pos_26  l1324 ,    struct Pos_26  r1326 ) {
    if ( (  cmp567 ( (  l1324 ) , (  r1326 ) ) == 2 ) ) {
        return (  l1324 );
    } else {
        return (  r1326 );
    }
}

static  bool   eq570 (    int32_t  l110 ,    int32_t  r112 ) {
    return ( (  l110 ) == (  r112 ) );
}

static  bool   eq569 (    struct Pos_26  l3747 ,    struct Pos_26  r3749 ) {
    return ( (  eq570 ( ( (  l3747 ) .f_line ) , ( (  r3749 ) .f_line ) ) ) && (  eq570 ( ( (  l3747 ) .f_bi ) , ( (  r3749 ) .f_bi ) ) ) );
}

static  size_t   size571 (    struct List_9 *  l2474 ) {
    return ( ( * (  l2474 ) ) .f_count );
}

static  struct Line_12 *   get_dash_ptr576 (    struct List_9 *  list2342 ,    size_t  i2344 ) {
    if ( ( (  cmp292 ( (  i2344 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2344 ) , ( ( * (  list2342 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2344 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2342 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr421 ) ( ( ( * (  list2342 ) ) .f_elements ) ,  (  i2344 ) ) );
}

static  struct Line_12   get575 (    struct List_9 *  list2352 ,    size_t  i2354 ) {
    return ( * ( (  get_dash_ptr576 ) ( (  list2352 ) ,  (  i2354 ) ) ) );
}

static  struct Slice_14   to_dash_slice577 (    struct List_13  l2467 ) {
    uint8_t *  ptr2468 = ( ( (  l2467 ) .f_elements ) .f_ptr );
    return ( (struct Slice_14) { .f_ptr = (  ptr2468 ) , .f_count = ( (  l2467 ) .f_count ) } );
}

static  enum Unit_8   set578 (    struct List_9 *  list2362 ,    size_t  i2364 ,    struct Line_12  elem2366 ) {
    if ( ( (  cmp292 ( (  i2364 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2364 ) , ( ( * (  list2362 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2364 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2362 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set420 ) ( ( ( * (  list2362 ) ) .f_elements ) ,  (  i2364 ) ,  (  elem2366 ) ) );
    return ( Unit_8_Unit );
}

struct env585 {
    struct env19 envinst19;
    struct List_13 *  list2439;
};

struct envunion586 {
    enum Unit_8  (*fun) (  struct env585*  ,    uint8_t  );
    struct env585 env;
};

static  enum Unit_8   for_dash_each584 (    struct Slice_14  iterable1058 ,   struct envunion586  fun1060 ) {
    struct SliceIter_501  temp587 = ( (  into_dash_iter515 ) ( (  iterable1058 ) ) );
    struct SliceIter_501 *  it1061 = ( &temp587 );
    while ( ( true ) ) {
        struct Maybe_489  dref1062 = ( (  next509 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_489_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_489_Just_t ) {
                struct envunion586  temp588 = (  fun1060 );
                ( temp588.fun ( &temp588.env ,  ( dref1062 .stuff .Maybe_489_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env594 {
    ;
    ;
    struct Slice_14  new_dash_slice2383;
};

struct envunion595 {
    enum Unit_8  (*fun) (  struct env594*  ,    struct Tuple2_535  );
    struct env594 env;
};

static  enum Unit_8   lam596 (   struct env594* env ,    struct Tuple2_535  dref2384 ) {
    return ( (  set543 ) ( ( env->new_dash_slice2383 ) ,  ( (  i32_dash_size422 ) ( ( dref2384 .field1 ) ) ) ,  ( dref2384 .field0 ) ) );
}

static  enum Unit_8   for_dash_each597 (    struct Zip_532  iterable1058 ,   struct envunion595  fun1060 ) {
    struct Zip_532  temp598 = ( (  into_dash_iter537 ) ( (  iterable1058 ) ) );
    struct Zip_532 *  it1061 = ( &temp598 );
    while ( ( true ) ) {
        struct Maybe_538  dref1062 = ( (  next539 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_538_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_538_Just_t ) {
                struct envunion595  temp599 = (  fun1060 );
                ( temp599.fun ( &temp599.env ,  ( dref1062 .stuff .Maybe_538_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full593 (   struct env2* env ,    struct List_13 *  list2382 ) {
    if ( (  eq409 ( ( ( * (  list2382 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2382 ) .f_elements = ( (  allocate518 ) ( ( ( * (  list2382 ) ) .f_al ) ,  ( env->starting_dash_size2377 ) ) );
    } else {
        if ( (  eq409 ( ( ( * (  list2382 ) ) .f_count ) , ( ( ( * (  list2382 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_14  new_dash_slice2383 = ( (  allocate518 ) ( ( ( * (  list2382 ) ) .f_al ) ,  (  op_dash_mul415 ( ( ( * (  list2382 ) ) .f_count ) , ( env->growth_dash_factor2378 ) ) ) ) );
            struct env594 envinst594 = {
                .new_dash_slice2383 =  new_dash_slice2383 ,
            };
            struct envunion595  fun2387 = ( (struct envunion595){ .fun = (  enum Unit_8  (*) (  struct env594*  ,    struct Tuple2_535  ) )lam596 , .env =  envinst594 } );
            ( (  for_dash_each597 ) ( ( (  zip541 ) ( ( ( * (  list2382 ) ) .f_elements ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2387 ) ) );
            ( (  free560 ) ( ( ( * (  list2382 ) ) .f_al ) ,  ( ( * (  list2382 ) ) .f_elements ) ) );
            (*  list2382 ) .f_elements = (  new_dash_slice2383 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add591 (   struct env19* env ,    struct List_13 *  list2390 ,    uint8_t  elem2392 ) {
    struct envunion20  temp592 = ( (struct envunion20){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_13 *  ) )grow_dash_if_dash_full593 , .env =  env->envinst2 } );
    ( temp592.fun ( &temp592.env ,  (  list2390 ) ) );
    ( (  set543 ) ( ( ( * (  list2390 ) ) .f_elements ) ,  ( ( * (  list2390 ) ) .f_count ) ,  (  elem2392 ) ) );
    (*  list2390 ) .f_count = (  op_dash_add313 ( ( ( * (  list2390 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam589 (   struct env585* env ,    uint8_t  x2443 ) {
    struct envunion49  temp590 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env19*  ,    struct List_13 *  ,    uint8_t  ) )add591 , .env =  env->envinst19 } );
    return ( temp590.fun ( &temp590.env ,  ( env->list2439 ) ,  (  x2443 ) ) );
}

static  enum Unit_8   add_dash_all583 (   struct env48* env ,    struct List_13 *  list2439 ,    struct Slice_14  it2441 ) {
    struct env585 envinst585 = {
        .envinst19 = env->envinst19 ,
        .list2439 =  list2439 ,
    };
    ( (  for_dash_each584 ) ( (  it2441 ) ,  ( (struct envunion586){ .fun = (  enum Unit_8  (*) (  struct env585*  ,    uint8_t  ) )lam589 , .env =  envinst585 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_13   from_dash_iter580 (   struct env53* env ,    struct Slice_14  iter2480 ,    enum CAllocator_10  al2482 ) {
    struct List_13  temp581 = ( (  mk450 ) ( (  al2482 ) ) );
    struct List_13 *  list2483 = ( &temp581 );
    struct envunion54  temp582 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all583 , .env =  env->envinst48 } );
    ( temp582.fun ( &temp582.env ,  (  list2483 ) ,  (  iter2480 ) ) );
    return ( * (  list2483 ) );
}

static  struct StrView_27   or_dash_else601 (    struct Maybe_78  self1312 ,    struct StrView_27  alt1314 ) {
    struct Maybe_78  dref1315 = (  self1312 );
    if ( dref1315.tag == Maybe_78_None_t ) {
        return (  alt1314 );
    }
    else {
        if ( dref1315.tag == Maybe_78_Just_t ) {
            return ( dref1315 .stuff .Maybe_78_Just_s .field0 );
        }
    }
}

struct LineIter_603 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  struct Maybe_78   next604 (    struct LineIter_603 *  self2618 ) {
    if ( (  cmp292 ( ( ( * (  self2618 ) ) .f_last ) , ( ( ( ( * (  self2618 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
    size_t  i2619 = ( ( * (  self2618 ) ) .f_last );
    while ( ( (  cmp292 ( (  i2619 ) , ( ( ( ( * (  self2618 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq305 ( ( (  get487 ) ( ( ( ( * (  self2618 ) ) .f_og ) .f_contents ) ,  (  i2619 ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2619 = (  op_dash_add313 ( (  i2619 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2620 = ( (  byte_dash_substr496 ) ( ( ( * (  self2618 ) ) .f_og ) ,  ( ( * (  self2618 ) ) .f_last ) ,  (  i2619 ) ) );
    if ( (  cmp292 ( (  i2619 ) , ( ( ( ( * (  self2618 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2619 = (  op_dash_add313 ( (  i2619 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2618 ) .f_last = (  i2619 );
    return ( ( Maybe_78_Just ) ( (  line2620 ) ) );
}

static  struct LineIter_603   into_dash_iter606 (    struct LineIter_603  self2615 ) {
    return (  self2615 );
}

static  struct Maybe_78   head602 (    struct LineIter_603  it1126 ) {
    struct LineIter_603  temp605 = ( (  into_dash_iter606 ) ( (  it1126 ) ) );
    return ( (  next604 ) ( ( &temp605 ) ) );
}

static  struct LineIter_603   lines607 (    struct StrView_27  s2612 ) {
    return ( (struct LineIter_603) { .f_og = (  s2612 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env612 {
    ;
    struct Char_65  c2596;
};

struct envunion613 {
    bool  (*fun) (  struct env612*  ,    struct Char_65  );
    struct env612 env;
};

struct SplitIter_611 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion613  f_fun;
};

struct Drop_610 {
    struct SplitIter_611  field0;
    size_t  field1;
};

static struct Drop_610 Drop_610_Drop (  struct SplitIter_611  field0 ,  size_t  field1 ) {
    return ( struct Drop_610 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_609 {
    struct Drop_610  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

static  struct Zip_609   into_dash_iter614 (    struct Zip_609  self895 ) {
    return (  self895 );
}

static  struct Drop_610   into_dash_iter616 (    struct Drop_610  self812 ) {
    return (  self812 );
}

static  struct Zip_609   zip615 (    struct Drop_610  left906 ,    struct FromIter_426  right908 ) {
    struct Drop_610  left_dash_it909 = ( (  into_dash_iter616 ) ( (  left906 ) ) );
    struct FromIter_426  right_dash_it910 = ( (  into_dash_iter436 ) ( (  right908 ) ) );
    return ( (struct Zip_609) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

static  struct SplitIter_611   into_dash_iter618 (    struct SplitIter_611  self2601 ) {
    return (  self2601 );
}

static  struct Drop_610   drop617 (    struct SplitIter_611  iterable819 ,    size_t  i821 ) {
    struct SplitIter_611  it822 = ( (  into_dash_iter618 ) ( (  iterable819 ) ) );
    return ( ( Drop_610_Drop ) ( (  it822 ) ,  (  i821 ) ) );
}

static  struct SplitIter_611   split_dash_by_dash_filter620 (    struct StrView_27  s2589 ,   struct envunion613  fun2591 ) {
    return ( (struct SplitIter_611) { .f_og = (  s2589 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2591 ) } );
}

static  bool   lam621 (   struct env612* env ,    struct Char_65  cc2598 ) {
    return (  eq480 ( (  cc2598 ) , ( env->c2596 ) ) );
}

static  struct SplitIter_611   split_dash_by_dash_each619 (    struct StrView_27  s2594 ,    struct Char_65  c2596 ) {
    struct env612 envinst612 = {
        .c2596 =  c2596 ,
    };
    return ( (  split_dash_by_dash_filter620 ) ( (  s2594 ) ,  ( (struct envunion613){ .fun = (  bool  (*) (  struct env612*  ,    struct Char_65  ) )lam621 , .env =  envinst612 } ) ) );
}

struct Tuple2_624 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_624 Tuple2_624_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_624 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_623 {
    enum {
        Maybe_623_None_t,
        Maybe_623_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_624  field0;
        } Maybe_623_Just_s;
    } stuff;
};

static struct Maybe_623 Maybe_623_Just (  struct Tuple2_624  field0 ) {
    return ( struct Maybe_623 ) { .tag = Maybe_623_Just_t, .stuff = { .Maybe_623_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_78   next627 (    struct SplitIter_611 *  self2604 ) {
    if ( (  cmp292 ( ( ( * (  self2604 ) ) .f_last ) , ( ( ( ( * (  self2604 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
    size_t  i2605 = ( ( * (  self2604 ) ) .f_last );
    while ( (  cmp292 ( (  i2605 ) , ( ( ( ( * (  self2604 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2606 = ( (  get_dash_ptr544 ) ( ( ( ( * (  self2604 ) ) .f_og ) .f_contents ) ,  (  i2605 ) ) );
        struct Char_65  c2607 = ( (  scan_dash_from_dash_mem307 ) ( (  ptr2606 ) ) );
        struct envunion613  temp628 = ( ( * (  self2604 ) ) .f_fun );
        if ( ( temp628.fun ( &temp628.env ,  (  c2607 ) ) ) ) {
            break;
        }
        i2605 = (  op_dash_add313 ( (  i2605 ) , ( (  next_dash_char308 ) ( (  ptr2606 ) ) ) ) );
    }
    struct StrView_27  line2608 = ( (  byte_dash_substr496 ) ( ( ( * (  self2604 ) ) .f_og ) ,  ( ( * (  self2604 ) ) .f_last ) ,  (  i2605 ) ) );
    i2605 = (  op_dash_add313 ( (  i2605 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2604 ) .f_last = (  i2605 );
    return ( ( Maybe_78_Just ) ( (  line2608 ) ) );
}

static  struct Maybe_78   next626 (    struct Drop_610 *  dref814 ) {
    while ( (  cmp292 ( ( (* dref814 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next627 ) ( ( & ( (* dref814 ) .field0 ) ) ) );
        (* dref814 ) .field1 = (  op_dash_sub291 ( ( (* dref814 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next627 ) ( ( & ( (* dref814 ) .field0 ) ) ) );
}

static  struct Maybe_623   next625 (    struct Zip_609 *  self898 ) {
    struct Zip_609  copy899 = ( * (  self898 ) );
    while ( ( true ) ) {
        struct Maybe_78  dref900 = ( (  next626 ) ( ( & ( (  copy899 ) .f_left_dash_it ) ) ) );
        if ( dref900.tag == Maybe_78_None_t ) {
            return ( (struct Maybe_623) { .tag = Maybe_623_None_t } );
        }
        else {
            if ( dref900.tag == Maybe_78_Just_t ) {
                struct Maybe_155  dref902 = ( (  next432 ) ( ( & ( (  copy899 ) .f_right_dash_it ) ) ) );
                if ( dref902.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_623) { .tag = Maybe_623_None_t } );
                }
                else {
                    if ( dref902.tag == Maybe_155_Just_t ) {
                        ( (  next626 ) ( ( & ( ( * (  self898 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self898 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_623_Just ) ( ( ( Tuple2_624_Tuple2 ) ( ( dref900 .stuff .Maybe_78_Just_s .field0 ) ,  ( dref902 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion631 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

static  enum Unit_8   insert633 (   struct env37* env ,    struct List_9 *  list2395 ,    size_t  i2397 ,    struct Line_12  elem2399 ) {
    if ( ( (  cmp292 ( (  i2397 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2397 ) , ( ( * (  list2395 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2397 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2395 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq409 ( ( ( * (  list2395 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion39  temp634 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add406 , .env =  env->envinst6 } );
        ( temp634.fun ( &temp634.env ,  (  list2395 ) ,  (  elem2399 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion38  temp635 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full408 , .env =  env->envinst1 } );
    ( temp635.fun ( &temp635.env ,  (  list2395 ) ) );
    size_t  ii2400 = (  op_dash_sub291 ( ( ( * (  list2395 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp292 ( (  ii2400 ) , (  i2397 ) ) != 0 ) ) {
        ( (  set420 ) ( ( ( * (  list2395 ) ) .f_elements ) ,  (  op_dash_add313 ( (  ii2400 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get575 ) ( (  list2395 ) ,  (  ii2400 ) ) ) ) );
        if ( (  eq409 ( (  ii2400 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2400 = (  op_dash_sub291 ( (  ii2400 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set420 ) ( ( ( * (  list2395 ) ) .f_elements ) ,  (  i2397 ) ,  (  elem2399 ) ) );
    (*  list2395 ) .f_count = (  op_dash_add313 ( ( ( * (  list2395 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion637 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  enum Unit_8   free639 (    struct List_13 *  list2376 ) {
    ( (  free560 ) ( ( ( * (  list2376 ) ) .f_al ) ,  ( ( * (  list2376 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line638 (    struct Line_12 *  line3833 ) {
    ( (  free639 ) ( ( & ( ( * (  line3833 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot574 (   struct env96* env ,    struct TextBuf_105 *  self3881 ,    struct Pos_26  p3883 ,    struct StrView_27  bytes3885 ) {
    enum CAllocator_10  al3886 = ( ( ( * (  self3881 ) ) .f_buf ) .f_al );
    struct List_9 *  buf3887 = ( & ( ( * (  self3881 ) ) .f_buf ) );
    struct Line_12  extracted_dash_line_dash_buf3888 = ( (  get575 ) ( (  buf3887 ) ,  ( (  i32_dash_size422 ) ( ( (  p3883 ) .f_line ) ) ) ) );
    struct Slice_14  remaining3889 = ( (  from476 ) ( ( (  to_dash_slice577 ) ( ( (  extracted_dash_line_dash_buf3888 ) .f_line ) ) ) ,  ( (  i32_dash_size422 ) ( ( (  p3883 ) .f_bi ) ) ) ) );
    struct envunion97  temp579 = ( (struct envunion97){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter580 , .env =  env->envinst53 } );
    ( (  set578 ) ( (  buf3887 ) ,  ( (  i32_dash_size422 ) ( ( (  p3883 ) .f_line ) ) ) ,  ( (  mk_dash_line442 ) ( ( temp579.fun ( &temp579.env ,  ( (  subslice477 ) ( ( (  to_dash_slice577 ) ( ( (  extracted_dash_line_dash_buf3888 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size422 ) ( ( (  p3883 ) .f_bi ) ) ) ) ) ,  (  al3886 ) ) ) ) ) ) );
    struct Line_12 *  last_dash_line3890 = ( (  get_dash_ptr576 ) ( (  buf3887 ) ,  ( (  i32_dash_size422 ) ( ( (  p3883 ) .f_line ) ) ) ) );
    struct envunion99  temp600 = ( (struct envunion99){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all583 , .env =  env->envinst48 } );
    ( temp600.fun ( &temp600.env ,  ( & ( ( * (  last_dash_line3890 ) ) .f_line ) ) ,  ( ( (  or_dash_else601 ) ( ( (  head602 ) ( ( (  lines607 ) ( (  bytes3885 ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3891 = (  from_dash_integral56 ( 0 ) );
    struct Zip_609  temp608 =  into_dash_iter614 ( ( (  zip615 ) ( ( (  drop617 ) ( ( (  split_dash_by_dash_each619 ) ( (  bytes3885 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_623  __cond622 =  next625 (&temp608);
        if (  __cond622 .tag == 0 ) {
            break;
        }
        struct Tuple2_624  dref3892 =  __cond622 .stuff .Maybe_623_Just_s .field0;
        struct envunion631  temp630 = ( (struct envunion631){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter580 , .env =  env->envinst53 } );
        struct Line_12  temp629 = ( (  mk_dash_line442 ) ( ( temp630.fun ( &temp630.env ,  ( ( dref3892 .field0 ) .f_contents ) ,  (  al3886 ) ) ) ) );
        struct Line_12 *  nuline3895 = ( &temp629 );
        size_t  next_dash_line3896 = ( (  i32_dash_size422 ) ( (  op_dash_add159 ( ( (  p3883 ) .f_line ) , ( dref3892 .field1 ) ) ) ) );
        struct envunion98  temp632 = ( (struct envunion98){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  ) )insert633 , .env =  env->envinst37 } );
        ( temp632.fun ( &temp632.env ,  (  buf3887 ) ,  (  next_dash_line3896 ) ,  ( * (  nuline3895 ) ) ) );
        last_dash_line3890 = ( (  get_dash_ptr576 ) ( (  buf3887 ) ,  (  next_dash_line3896 ) ) );
        lines_dash_added3891 = (  op_dash_add159 ( (  lines_dash_added3891 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion637  temp636 = ( (struct envunion637){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all583 , .env =  env->envinst48 } );
    ( temp636.fun ( &temp636.env ,  ( & ( ( * (  last_dash_line3890 ) ) .f_line ) ) ,  (  remaining3889 ) ) );
    ( (  free_dash_line638 ) ( ( & (  extracted_dash_line_dash_buf3888 ) ) ) );
    return (  lines_dash_added3891 );
}

static  size_t   size640 (    struct List_13 *  l2474 ) {
    return ( ( * (  l2474 ) ) .f_count );
}

struct StrConcat_646 {
    struct StrConcat_82  field0;
    struct Char_65  field1;
};

static struct StrConcat_646 StrConcat_646_StrConcat (  struct StrConcat_82  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_646 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_645 {
    struct StrConcat_646  field0;
    size_t  field1;
};

static struct StrConcat_645 StrConcat_645_StrConcat (  struct StrConcat_646  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_645 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_644 {
    struct StrConcat_645  field0;
    struct Char_65  field1;
};

static struct StrConcat_644 StrConcat_644_StrConcat (  struct StrConcat_645  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_644 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_649 {
    struct StrView_27  field0;
    struct StrConcat_644  field1;
};

static struct StrConcat_649 StrConcat_649_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_644  field1 ) {
    return ( struct StrConcat_649 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_648 {
    struct StrConcat_649  field0;
    struct Char_65  field1;
};

static struct StrConcat_648 StrConcat_648_StrConcat (  struct StrConcat_649  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_648 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str653 (    struct StrConcat_646  self1254 ) {
    struct StrConcat_646  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str652 (    struct StrConcat_645  self1254 ) {
    struct StrConcat_645  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str653 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str651 (    struct StrConcat_644  self1254 ) {
    struct StrConcat_644  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str652 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str650 (    struct StrConcat_649  self1254 ) {
    struct StrConcat_649  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str651 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str647 (    struct StrConcat_648  self1254 ) {
    struct StrConcat_648  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str650 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic643 (    struct StrConcat_644  errmsg1295 ) {
    ( (  print_dash_str647 ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_649_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1295 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Drop_655 {
    struct Zip_532  field0;
    size_t  field1;
};

static struct Drop_655 Drop_655_Drop (  struct Zip_532  field0 ,  size_t  field1 ) {
    return ( struct Drop_655 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env656 {
    ;
    size_t  num_dash_elems2408;
    ;
    struct List_13 *  list2403;
    ;
};

struct envunion657 {
    enum Unit_8  (*fun) (  struct env656*  ,    struct Tuple2_535  );
    struct env656 env;
};

static  struct Drop_655   into_dash_iter659 (    struct Drop_655  self812 ) {
    return (  self812 );
}

static  struct Maybe_538   next660 (    struct Drop_655 *  dref814 ) {
    while ( (  cmp292 ( ( (* dref814 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next539 ) ( ( & ( (* dref814 ) .field0 ) ) ) );
        (* dref814 ) .field1 = (  op_dash_sub291 ( ( (* dref814 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next539 ) ( ( & ( (* dref814 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each654 (    struct Drop_655  iterable1058 ,   struct envunion657  fun1060 ) {
    struct Drop_655  temp658 = ( (  into_dash_iter659 ) ( (  iterable1058 ) ) );
    struct Drop_655 *  it1061 = ( &temp658 );
    while ( ( true ) ) {
        struct Maybe_538  dref1062 = ( (  next660 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_538_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_538_Just_t ) {
                struct envunion657  temp661 = (  fun1060 );
                ( temp661.fun ( &temp661.env ,  ( dref1062 .stuff .Maybe_538_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_655   drop662 (    struct Zip_532  iterable819 ,    size_t  i821 ) {
    struct Zip_532  it822 = ( (  into_dash_iter537 ) ( (  iterable819 ) ) );
    return ( ( Drop_655_Drop ) ( (  it822 ) ,  (  i821 ) ) );
}

static  struct SliceIter_501   into_dash_iter664 (    struct List_13  self2369 ) {
    return ( (  into_dash_iter515 ) ( ( (  subslice477 ) ( ( (  self2369 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2369 ) .f_count ) ) ) ) );
}

static  struct Zip_532   zip663 (    struct List_13  left906 ,    struct FromIter_426  right908 ) {
    struct SliceIter_501  left_dash_it909 = ( (  into_dash_iter664 ) ( (  left906 ) ) );
    struct FromIter_426  right_dash_it910 = ( (  into_dash_iter436 ) ( (  right908 ) ) );
    return ( (struct Zip_532) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

static  enum Unit_8   set666 (    struct List_13 *  list2362 ,    size_t  i2364 ,    uint8_t  elem2366 ) {
    if ( ( (  cmp292 ( (  i2364 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2364 ) , ( ( * (  list2362 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2364 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2362 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set543 ) ( ( ( * (  list2362 ) ) .f_elements ) ,  (  i2364 ) ,  (  elem2366 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam665 (   struct env656* env ,    struct Tuple2_535  dref2409 ) {
    return ( (  set666 ) ( ( env->list2403 ) ,  (  op_dash_sub291 ( ( (  i32_dash_size422 ) ( ( dref2409 .field1 ) ) ) , ( env->num_dash_elems2408 ) ) ) ,  ( dref2409 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range642 (   struct env40* env ,    struct List_13 *  list2403 ,    size_t  from2405 ,    size_t  to_dash_excl2407 ) {
    if ( (  cmp292 ( (  to_dash_excl2407 ) , (  from2405 ) ) == 0 ) ) {
        ( (  panic643 ) ( ( ( StrConcat_644_StrConcat ) ( ( ( StrConcat_645_StrConcat ) ( ( ( StrConcat_646_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2405 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2407 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp292 ( (  from2405 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2405 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2403 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp292 ( (  to_dash_excl2407 ) , ( ( * (  list2403 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2407 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2403 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2408 = (  op_dash_sub291 ( (  to_dash_excl2407 ) , (  from2405 ) ) );
    struct env656 envinst656 = {
        .num_dash_elems2408 =  num_dash_elems2408 ,
        .list2403 =  list2403 ,
    };
    ( (  for_dash_each654 ) ( ( (  drop662 ) ( ( (  zip663 ) ( ( * (  list2403 ) ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add313 ( (  from2405 ) , (  num_dash_elems2408 ) ) ) ) ) ,  ( (struct envunion657){ .fun = (  enum Unit_8  (*) (  struct env656*  ,    struct Tuple2_535  ) )lam665 , .env =  envinst656 } ) ) );
    (*  list2403 ) .f_count = (  op_dash_sub291 ( ( ( * (  list2403 ) ) .f_count ) , (  num_dash_elems2408 ) ) );
    size_t  capacity2412 = ( ( ( * (  list2403 ) ) .f_elements ) .f_count );
    if ( (  cmp292 ( (  op_dash_mul415 ( ( ( * (  list2403 ) ) .f_count ) , ( env->shrink_dash_factor2379 ) ) ) , (  capacity2412 ) ) == 0 ) ) {
        if ( (  eq409 ( ( ( * (  list2403 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free560 ) ( ( ( * (  list2403 ) ) .f_al ) ,  ( ( * (  list2403 ) ) .f_elements ) ) );
            (*  list2403 ) .f_elements = ( (  empty451 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2413 = (  op_dash_mul415 ( (  op_dash_add313 ( (  op_dash_div346 ( ( ( * (  list2403 ) ) .f_count ) , ( env->shrink_dash_factor2379 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2379 ) ) );
        struct Slice_14  new_dash_slice2414 = ( (  allocate518 ) ( ( ( * (  list2403 ) ) .f_al ) ,  (  new_dash_size2413 ) ) );
        ( (  copy_dash_to523 ) ( ( (  subslice477 ) ( ( ( * (  list2403 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2403 ) ) .f_count ) ) ) ,  (  new_dash_slice2414 ) ) );
        ( (  free560 ) ( ( ( * (  list2403 ) ) .f_al ) ,  ( ( * (  list2403 ) ) .f_elements ) ) );
        (*  list2403 ) .f_elements = (  new_dash_slice2414 );
    }
    return ( Unit_8_Unit );
}

struct envunion668 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

static  enum Unit_8   trim669 (    struct List_13 *  l2456 ,    size_t  new_dash_count2458 ) {
    (*  l2456 ) .f_count = ( (  min478 ) ( (  new_dash_count2458 ) ,  ( ( * (  l2456 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min670 (    int32_t  l1319 ,    int32_t  r1321 ) {
    if ( (  cmp157 ( (  l1319 ) , (  r1321 ) ) == 0 ) ) {
        return (  l1319 );
    } else {
        return (  r1321 );
    }
}

struct envunion672 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

struct Maybe_674 {
    enum {
        Maybe_674_None_t,
        Maybe_674_Just_t,
    } tag;
    union {
        struct {
            struct Slice_14  field0;
        } Maybe_674_Just_s;
    } stuff;
};

static struct Maybe_674 Maybe_674_Just (  struct Slice_14  field0 ) {
    return ( struct Maybe_674 ) { .tag = Maybe_674_Just_t, .stuff = { .Maybe_674_Just_s = { .field0 = field0 } } };
};

static  struct Slice_14   or_dash_else673 (    struct Maybe_674  self1312 ,    struct Slice_14  alt1314 ) {
    struct Maybe_674  dref1315 = (  self1312 );
    if ( dref1315.tag == Maybe_674_None_t ) {
        return (  alt1314 );
    }
    else {
        if ( dref1315.tag == Maybe_674_Just_t ) {
            return ( dref1315 .stuff .Maybe_674_Just_s .field0 );
        }
    }
}

static  struct Maybe_674   fmap_dash_maybe675 (    struct Maybe_386  x1537 ,    struct Slice_14 (*  fun1539 )(    struct Line_12  ) ) {
    struct Maybe_386  dref1540 = (  x1537 );
    if ( dref1540.tag == Maybe_386_None_t ) {
        return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
    }
    else {
        if ( dref1540.tag == Maybe_386_Just_t ) {
            return ( ( Maybe_674_Just ) ( ( (  fun1539 ) ( ( dref1540 .stuff .Maybe_386_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_386   try_dash_get676 (    struct List_9 *  list2357 ,    size_t  i2359 ) {
    if ( (  cmp292 ( (  i2359 ) , ( ( * (  list2357 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
    }
    return ( ( Maybe_386_Just ) ( ( (  get575 ) ( (  list2357 ) ,  (  i2359 ) ) ) ) );
}

static  struct Slice_14   lam677 (    struct Line_12  line3914 ) {
    return ( (  to_dash_slice577 ) ( ( (  line3914 ) .f_line ) ) );
}

struct StrConcat_682 {
    struct StrView_27  field0;
    struct StrView_27  field1;
};

static struct StrConcat_682 StrConcat_682_StrConcat (  struct StrView_27  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_682 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_681 {
    struct StrConcat_682  field0;
    struct Char_65  field1;
};

static struct StrConcat_681 StrConcat_681_StrConcat (  struct StrConcat_682  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_681 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str683 (    struct StrConcat_682  self1254 ) {
    struct StrConcat_682  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str680 (    struct StrConcat_681  self1254 ) {
    struct StrConcat_681  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str683 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert679 (    bool  cond1298 ,    struct StrView_27  msg1300 ) {
    if ( ( ! (  cond1298 ) ) ) {
        ( (  print_dash_str680 ) ( ( ( StrConcat_681_StrConcat ) ( ( ( StrConcat_682_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1300 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_687 {
    struct Zip_424  field0;
    size_t  field1;
};

static struct Drop_687 Drop_687_Drop (  struct Zip_424  field0 ,  size_t  field1 ) {
    return ( struct Drop_687 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env688 {
    ;
    size_t  num_dash_elems2408;
    ;
    struct List_9 *  list2403;
    ;
};

struct envunion689 {
    enum Unit_8  (*fun) (  struct env688*  ,    struct Tuple2_418  );
    struct env688 env;
};

static  struct Drop_687   into_dash_iter691 (    struct Drop_687  self812 ) {
    return (  self812 );
}

static  struct Maybe_429   next692 (    struct Drop_687 *  dref814 ) {
    while ( (  cmp292 ( ( (* dref814 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next430 ) ( ( & ( (* dref814 ) .field0 ) ) ) );
        (* dref814 ) .field1 = (  op_dash_sub291 ( ( (* dref814 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next430 ) ( ( & ( (* dref814 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each686 (    struct Drop_687  iterable1058 ,   struct envunion689  fun1060 ) {
    struct Drop_687  temp690 = ( (  into_dash_iter691 ) ( (  iterable1058 ) ) );
    struct Drop_687 *  it1061 = ( &temp690 );
    while ( ( true ) ) {
        struct Maybe_429  dref1062 = ( (  next692 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_429_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_429_Just_t ) {
                struct envunion689  temp693 = (  fun1060 );
                ( temp693.fun ( &temp693.env ,  ( dref1062 .stuff .Maybe_429_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_687   drop694 (    struct Zip_424  iterable819 ,    size_t  i821 ) {
    struct Zip_424  it822 = ( (  into_dash_iter428 ) ( (  iterable819 ) ) );
    return ( ( Drop_687_Drop ) ( (  it822 ) ,  (  i821 ) ) );
}

static  struct Slice_11   subslice697 (    struct Slice_11  slice2139 ,    size_t  from2141 ,    size_t  to2143 ) {
    struct Line_12 *  begin_dash_ptr2144 = ( (  offset_dash_ptr401 ) ( ( (  slice2139 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from2141 ) ) ) ) );
    if ( ( (  cmp292 ( (  from2141 ) , (  to2143 ) ) != 0 ) || (  cmp292 ( (  from2141 ) , ( (  slice2139 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2145 = (  op_dash_sub291 ( ( (  min478 ) ( (  to2143 ) ,  ( (  slice2139 ) .f_count ) ) ) , (  from2141 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  count2145 ) } );
}

static  struct SliceIter_425   into_dash_iter696 (    struct List_9  self2369 ) {
    return ( (  into_dash_iter435 ) ( ( (  subslice697 ) ( ( (  self2369 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2369 ) .f_count ) ) ) ) );
}

static  struct Zip_424   zip695 (    struct List_9  left906 ,    struct FromIter_426  right908 ) {
    struct SliceIter_425  left_dash_it909 = ( (  into_dash_iter696 ) ( (  left906 ) ) );
    struct FromIter_426  right_dash_it910 = ( (  into_dash_iter436 ) ( (  right908 ) ) );
    return ( (struct Zip_424) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

static  enum Unit_8   lam698 (   struct env688* env ,    struct Tuple2_418  dref2409 ) {
    return ( (  set578 ) ( ( env->list2403 ) ,  (  op_dash_sub291 ( ( (  i32_dash_size422 ) ( ( dref2409 .field1 ) ) ) , ( env->num_dash_elems2408 ) ) ) ,  ( dref2409 .field0 ) ) );
}

struct env701 {
    ;
    struct Slice_11  dest2216;
    ;
};

struct envunion702 {
    enum Unit_8  (*fun) (  struct env701*  ,    struct Tuple2_418  );
    struct env701 env;
};

static  enum Unit_8   for_dash_each700 (    struct Zip_424  iterable1058 ,   struct envunion702  fun1060 ) {
    struct Zip_424  temp703 = ( (  into_dash_iter428 ) ( (  iterable1058 ) ) );
    struct Zip_424 *  it1061 = ( &temp703 );
    while ( ( true ) ) {
        struct Maybe_429  dref1062 = ( (  next430 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_429_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_429_Just_t ) {
                struct envunion702  temp704 = (  fun1060 );
                ( temp704.fun ( &temp704.env ,  ( dref1062 .stuff .Maybe_429_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam705 (   struct env701* env ,    struct Tuple2_418  dref2217 ) {
    return ( (  set420 ) ( ( env->dest2216 ) ,  ( (  i32_dash_size422 ) ( ( dref2217 .field1 ) ) ) ,  ( dref2217 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to699 (    struct Slice_11  src2214 ,    struct Slice_11  dest2216 ) {
    if ( (  cmp292 ( ( (  src2214 ) .f_count ) , ( (  dest2216 ) .f_count ) ) == 2 ) ) {
        ( (  panic524 ) ( ( ( StrConcat_525_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2214 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2216 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env701 envinst701 = {
        .dest2216 =  dest2216 ,
    };
    ( (  for_dash_each700 ) ( ( (  zip434 ) ( (  src2214 ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion702){ .fun = (  enum Unit_8  (*) (  struct env701*  ,    struct Tuple2_418  ) )lam705 , .env =  envinst701 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range685 (   struct env41* env ,    struct List_9 *  list2403 ,    size_t  from2405 ,    size_t  to_dash_excl2407 ) {
    if ( (  cmp292 ( (  to_dash_excl2407 ) , (  from2405 ) ) == 0 ) ) {
        ( (  panic643 ) ( ( ( StrConcat_644_StrConcat ) ( ( ( StrConcat_645_StrConcat ) ( ( ( StrConcat_646_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2405 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2407 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp292 ( (  from2405 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2405 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2403 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp292 ( (  to_dash_excl2407 ) , ( ( * (  list2403 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2407 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2403 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2408 = (  op_dash_sub291 ( (  to_dash_excl2407 ) , (  from2405 ) ) );
    struct env688 envinst688 = {
        .num_dash_elems2408 =  num_dash_elems2408 ,
        .list2403 =  list2403 ,
    };
    ( (  for_dash_each686 ) ( ( (  drop694 ) ( ( (  zip695 ) ( ( * (  list2403 ) ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add313 ( (  from2405 ) , (  num_dash_elems2408 ) ) ) ) ) ,  ( (struct envunion689){ .fun = (  enum Unit_8  (*) (  struct env688*  ,    struct Tuple2_418  ) )lam698 , .env =  envinst688 } ) ) );
    (*  list2403 ) .f_count = (  op_dash_sub291 ( ( ( * (  list2403 ) ) .f_count ) , (  num_dash_elems2408 ) ) );
    size_t  capacity2412 = ( ( ( * (  list2403 ) ) .f_elements ) .f_count );
    if ( (  cmp292 ( (  op_dash_mul415 ( ( ( * (  list2403 ) ) .f_count ) , ( env->shrink_dash_factor2379 ) ) ) , (  capacity2412 ) ) == 0 ) ) {
        if ( (  eq409 ( ( ( * (  list2403 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free438 ) ( ( ( * (  list2403 ) ) .f_al ) ,  ( ( * (  list2403 ) ) .f_elements ) ) );
            (*  list2403 ) .f_elements = ( (  empty372 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2413 = (  op_dash_mul415 ( (  op_dash_add313 ( (  op_dash_div346 ( ( ( * (  list2403 ) ) .f_count ) , ( env->shrink_dash_factor2379 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2379 ) ) );
        struct Slice_11  new_dash_slice2414 = ( (  allocate410 ) ( ( ( * (  list2403 ) ) .f_al ) ,  (  new_dash_size2413 ) ) );
        ( (  copy_dash_to699 ) ( ( (  subslice697 ) ( ( ( * (  list2403 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2403 ) ) .f_count ) ) ) ,  (  new_dash_slice2414 ) ) );
        ( (  free438 ) ( ( ( * (  list2403 ) ) .f_al ) ,  ( ( * (  list2403 ) ) .f_elements ) ) );
        (*  list2403 ) .f_elements = (  new_dash_slice2414 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action565 (   struct env100* env ,    struct TextBuf_105 *  self3899 ,    struct Pos_26  from_dash_pos3901 ,    struct Pos_26  to_dash_pos3903 ,    struct StrView_27  bytes3905 ) {
    struct Pos_26  from3906 = ( (  min566 ) ( (  from_dash_pos3901 ) ,  (  to_dash_pos3903 ) ) );
    struct Pos_26  to3907 = ( (  max568 ) ( (  from_dash_pos3901 ) ,  (  to_dash_pos3903 ) ) );
    if ( (  eq569 ( (  to3907 ) , (  from3906 ) ) ) ) {
        enum CAllocator_10  al3908 = ( ( ( * (  self3899 ) ) .f_buf ) .f_al );
        if ( ( (  eq409 ( ( (  size571 ) ( ( & ( ( * (  self3899 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size422 ) ( ( (  from3906 ) .f_line ) ) ) ) ) && (  eq570 ( ( (  from3906 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion109  temp572 = ( (struct envunion109){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add406 , .env =  env->envinst6 } );
            ( temp572.fun ( &temp572.env ,  ( & ( ( * (  self3899 ) ) .f_buf ) ) ,  ( (  mk_dash_line442 ) ( ( (  mk450 ) ( (  al3908 ) ) ) ) ) ) );
        }
        struct envunion104  temp573 = ( (struct envunion104){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot574 , .env =  env->envinst96 } );
        ( temp573.fun ( &temp573.env ,  (  self3899 ) ,  (  from3906 ) ,  (  bytes3905 ) ) );
    } else {
        struct List_9 *  lines_dash_buf3909 = ( & ( ( * (  self3899 ) ) .f_buf ) );
        struct Line_12 *  first_dash_line3910 = ( (  get_dash_ptr576 ) ( (  lines_dash_buf3909 ) ,  ( (  i32_dash_size422 ) ( ( (  from3906 ) .f_line ) ) ) ) );
        (*  first_dash_line3910 ) .f_invalidated = ( true );
        if ( ( (  eq570 ( ( (  from3906 ) .f_line ) , ( (  to3907 ) .f_line ) ) ) && (  cmp157 ( ( (  to3907 ) .f_bi ) , (  op_dash_add159 ( ( (  size_dash_i32331 ) ( ( (  size640 ) ( ( & ( ( * (  first_dash_line3910 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion102  temp641 = ( (struct envunion102){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range642 , .env =  env->envinst40 } );
            ( temp641.fun ( &temp641.env ,  ( & ( ( * (  first_dash_line3910 ) ) .f_line ) ) ,  ( (  i32_dash_size422 ) ( ( (  from3906 ) .f_bi ) ) ) ,  ( (  i32_dash_size422 ) ( ( (  to3907 ) .f_bi ) ) ) ) );
            struct envunion668  temp667 = ( (struct envunion668){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot574 , .env =  env->envinst96 } );
            ( temp667.fun ( &temp667.env ,  (  self3899 ) ,  (  from3906 ) ,  (  bytes3905 ) ) );
        } else {
            ( (  trim669 ) ( ( & ( ( * (  first_dash_line3910 ) ) .f_line ) ) ,  ( (  i32_dash_size422 ) ( ( (  from3906 ) .f_bi ) ) ) ) );
            struct Line_12 *  last_dash_line3911 = ( (  get_dash_ptr576 ) ( (  lines_dash_buf3909 ) ,  ( (  i32_dash_size422 ) ( ( (  to3907 ) .f_line ) ) ) ) );
            (*  last_dash_line3911 ) .f_invalidated = ( true );
            to3907 .f_bi = ( (  min670 ) ( ( (  to3907 ) .f_bi ) ,  (  op_dash_add159 ( ( (  size_dash_i32331 ) ( ( (  size640 ) ( ( & ( ( * (  last_dash_line3911 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq570 ( ( (  to3907 ) .f_bi ) , (  op_dash_add159 ( ( (  size_dash_i32331 ) ( ( (  size640 ) ( ( & ( ( * (  last_dash_line3911 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to3907 .f_line = (  op_dash_add159 ( ( (  to3907 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to3907 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion672  temp671 = ( (struct envunion672){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot574 , .env =  env->envinst96 } );
            int32_t  lines_dash_added3912 = ( temp671.fun ( &temp671.env ,  (  self3899 ) ,  (  from3906 ) ,  (  bytes3905 ) ) );
            to3907 .f_line = (  op_dash_add159 ( ( (  to3907 ) .f_line ) , (  lines_dash_added3912 ) ) );
            from3906 .f_line = (  op_dash_add159 ( ( (  from3906 ) .f_line ) , (  lines_dash_added3912 ) ) );
            struct Slice_14  last_dash_line3915 = ( (  or_dash_else673 ) ( ( (  fmap_dash_maybe675 ) ( ( (  try_dash_get676 ) ( (  lines_dash_buf3909 ) ,  ( (  i32_dash_size422 ) ( ( (  to3907 ) .f_line ) ) ) ) ) ,  (  lam677 ) ) ) ,  ( (  empty451 ) ( ) ) ) );
            struct envunion101  temp678 = ( (struct envunion101){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all583 , .env =  env->envinst48 } );
            ( temp678.fun ( &temp678.env ,  ( & ( ( * (  first_dash_line3910 ) ) .f_line ) ) ,  ( (  from476 ) ( (  last_dash_line3915 ) ,  ( (  i32_dash_size422 ) ( ( (  to3907 ) .f_bi ) ) ) ) ) ) );
            ( (  assert679 ) ( (  cmp157 ( ( (  to3907 ) .f_line ) , ( (  from3906 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion103  temp684 = ( (struct envunion103){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range685 , .env =  env->envinst41 } );
            ( temp684.fun ( &temp684.env ,  ( & ( ( * (  self3899 ) ) .f_buf ) ) ,  ( (  i32_dash_size422 ) ( (  op_dash_add159 ( ( (  from3906 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add313 ( ( (  i32_dash_size422 ) ( ( (  to3907 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk706 (    int32_t  line3759 ,    int32_t  bi3761 ) {
    return ( (struct Pos_26) { .f_line = (  line3759 ) , .f_bi = (  bi3761 ) } );
}

static  struct Maybe_361   mk_dash_from_dash_file364 (   struct env114* env ,    enum CAllocator_10  al3935 ,    struct StrView_27  filename3937 ) {
    struct envunion115  temp366 = ( (struct envunion115){ .fun = (  struct TextBuf_105  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk367 , .env =  env->envinst112 } );
    struct TextBuf_105  temp365 = ( temp366.fun ( &temp366.env ,  (  al3935 ) ) );
    struct TextBuf_105 *  tb3938 = ( &temp365 );
    (*  tb3938 ) .f_filetype = ( (  detect_dash_filetype_dash_from_dash_filename465 ) ( (  filename3937 ) ) );
    struct StrView_27  filename03939 = ( (  clone_dash_0517 ) ( (  filename3937 ) ,  (  al3935 ) ) );
    struct Maybe_78  dref3940 = ( (  try_dash_read_dash_contents546 ) ( ( (  as_dash_const_dash_str557 ) ( (  filename03939 ) ) ) ,  (  al3935 ) ) );
    if ( dref3940.tag == Maybe_78_None_t ) {
        ( (  free559 ) ( (  filename03939 ) ,  (  al3935 ) ) );
        return ( (struct Maybe_361) { .tag = Maybe_361_None_t } );
    }
    else {
        if ( dref3940.tag == Maybe_78_Just_t ) {
            if ( (  eq562 ( ( (  try_dash_get492 ) ( ( ( dref3940 .stuff .Maybe_78_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub291 ( ( ( ( dref3940 .stuff .Maybe_78_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_489_Just ) ( ( (  ascii_dash_u8493 ) ( ( (  from_dash_charlike494 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref3940 .stuff .Maybe_78_Just_s .field0 = ( (  byte_dash_substr496 ) ( ( dref3940 .stuff .Maybe_78_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub291 ( ( ( ( dref3940 .stuff .Maybe_78_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion116  temp564 = ( (struct envunion116){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action565 , .env =  env->envinst100 } );
            ( temp564.fun ( &temp564.env ,  (  tb3938 ) ,  ( (  mk706 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk706 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( dref3940 .stuff .Maybe_78_Just_s .field0 ) ) );
            (*  tb3938 ) .f_filename = ( ( Maybe_78_Just ) ( (  filename03939 ) ) );
            return ( ( Maybe_361_Just ) ( ( * (  tb3938 ) ) ) );
        }
    }
}

struct envunion708 {
    struct TextBuf_105  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
};

struct envunion710 {
    struct TextBuf_105  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
};

static  struct Pane_221   mk713 (    enum CAllocator_10  al4193 ,    struct TextBuf_105 *  buf4195 ) {
    return ( (struct Pane_221) { .f_buf = (  buf4195 ) , .f_cursor = ( (  mk706 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_222_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_223) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
}

struct envunion716 {
    struct Tui_90  (*fun) (  struct env86*  );
    struct env86 env;
};

static  struct Termios_92   undefined720 (  ) {
    struct Termios_92  temp721;
    return (  temp721 );
}

static  int32_t   stdin_dash_fileno722 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct termios *   cast_dash_ptr723 (    struct Termios_92 *  p388 ) {
    return ( (struct termios * ) (  p388 ) );
}

static  uint32_t   u32_dash_and724 (    uint32_t  l2890 ,    uint32_t  r2892 ) {
    return ( (  l2890 ) & (  r2892 ) );
}

static  uint32_t   u32_dash_neg725 (    uint32_t  l2895 ) {
    return ( ~ (  l2895 ) );
}

struct Array_727 {
    uint32_t _arr [4];
};

struct ArrayIter_729 {
    struct Array_727  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_729   into_dash_iter730 (    struct Array_727  self2037 ) {
    return ( (struct ArrayIter_729) { .f_backing = (  self2037 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_731 {
    enum {
        Maybe_731_None_t,
        Maybe_731_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_731_Just_s;
    } stuff;
};

static struct Maybe_731 Maybe_731_Just (  uint32_t  field0 ) {
    return ( struct Maybe_731 ) { .tag = Maybe_731_Just_t, .stuff = { .Maybe_731_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr735 (    struct Array_727 *  p388 ) {
    return ( (uint32_t * ) (  p388 ) );
}

static  uint32_t *   offset_dash_ptr736 (    uint32_t *  x367 ,    int64_t  count369 ) {
    uint32_t  temp737;
    return ( (uint32_t * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp737 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr734 (    struct Array_727 *  arr1961 ,    size_t  i1964 ) {
    if ( ( (  cmp292 ( (  i1964 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1964 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i1964 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p1965 = ( ( (  cast_dash_ptr735 ) ( (  arr1961 ) ) ) );
    return ( (  offset_dash_ptr736 ) ( (  p1965 ) ,  ( (int64_t ) (  i1964 ) ) ) );
}

static  uint32_t   get733 (    struct Array_727 *  arr1968 ,    size_t  i1971 ) {
    return ( * ( (  get_dash_ptr734 ) ( (  arr1968 ) ,  (  i1971 ) ) ) );
}

static  struct Maybe_731   next732 (    struct ArrayIter_729 *  self2044 ) {
    if ( (  cmp292 ( ( ( * (  self2044 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    uint32_t  e2046 = ( (  get733 ) ( ( & ( ( * (  self2044 ) ) .f_backing ) ) ,  ( ( * (  self2044 ) ) .f_cur ) ) );
    (*  self2044 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2044 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_731_Just ) ( (  e2046 ) ) );
}

static  uint32_t   reduce728 (    struct Array_727  iterable1077 ,    uint32_t  base1079 ,    uint32_t (*  fun1081 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1082 = (  base1079 );
    struct ArrayIter_729  it1083 = ( (  into_dash_iter730 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1084 = ( (  next732 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_731_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_731_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp738 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp738);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp739;
    return (  temp739 );
}

static  uint32_t   u32_dash_or740 (    uint32_t  l2882 ,    uint32_t  r2884 ) {
    return ( (  l2882 ) | (  r2884 ) );
}

static  uint32_t   u32_dash_ors726 (    struct Array_727  vals2887 ) {
    return ( (  reduce728 ) ( (  vals2887 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or740 ) ) );
}

static  struct Array_727   from_dash_listlike741 (    struct Array_727 *  self359 ) {
    return ( * (  self359 ) );
}

static  uint32_t   echo743 (  ) {
    return (  from_dash_integral165 ( 8 ) );
}

static  uint32_t   icanon744 (  ) {
    return (  from_dash_integral165 ( 2 ) );
}

static  uint32_t   isig745 (  ) {
    return (  from_dash_integral165 ( 1 ) );
}

static  uint32_t   iexten746 (  ) {
    return (  from_dash_integral165 ( 32768 ) );
}

struct Array_748 {
    uint32_t _arr [5];
};

struct ArrayIter_750 {
    struct Array_748  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_750   into_dash_iter751 (    struct Array_748  self2037 ) {
    return ( (struct ArrayIter_750) { .f_backing = (  self2037 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr755 (    struct Array_748 *  p388 ) {
    return ( (uint32_t * ) (  p388 ) );
}

static  uint32_t *   get_dash_ptr754 (    struct Array_748 *  arr1961 ,    size_t  i1964 ) {
    if ( ( (  cmp292 ( (  i1964 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1964 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i1964 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p1965 = ( ( (  cast_dash_ptr755 ) ( (  arr1961 ) ) ) );
    return ( (  offset_dash_ptr736 ) ( (  p1965 ) ,  ( (int64_t ) (  i1964 ) ) ) );
}

static  uint32_t   get753 (    struct Array_748 *  arr1968 ,    size_t  i1971 ) {
    return ( * ( (  get_dash_ptr754 ) ( (  arr1968 ) ,  (  i1971 ) ) ) );
}

static  struct Maybe_731   next752 (    struct ArrayIter_750 *  self2044 ) {
    if ( (  cmp292 ( ( ( * (  self2044 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    uint32_t  e2046 = ( (  get753 ) ( ( & ( ( * (  self2044 ) ) .f_backing ) ) ,  ( ( * (  self2044 ) ) .f_cur ) ) );
    (*  self2044 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2044 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_731_Just ) ( (  e2046 ) ) );
}

static  uint32_t   reduce749 (    struct Array_748  iterable1077 ,    uint32_t  base1079 ,    uint32_t (*  fun1081 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1082 = (  base1079 );
    struct ArrayIter_750  it1083 = ( (  into_dash_iter751 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1084 = ( (  next752 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_731_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_731_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp756 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp756);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp757;
    return (  temp757 );
}

static  uint32_t   u32_dash_ors747 (    struct Array_748  vals2887 ) {
    return ( (  reduce749 ) ( (  vals2887 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or740 ) ) );
}

static  struct Array_748   from_dash_listlike758 (    struct Array_748 *  self359 ) {
    return ( * (  self359 ) );
}

static  uint32_t   brkint760 (  ) {
    return (  from_dash_integral165 ( 2 ) );
}

static  uint32_t   icrnl761 (  ) {
    return (  from_dash_integral165 ( 256 ) );
}

static  uint32_t   inpck762 (  ) {
    return (  from_dash_integral165 ( 16 ) );
}

static  uint32_t   istrip763 (  ) {
    return (  from_dash_integral165 ( 32 ) );
}

static  uint32_t   ixon764 (  ) {
    return (  from_dash_integral165 ( 1024 ) );
}

struct Array_766 {
    uint32_t _arr [1];
};

struct ArrayIter_768 {
    struct Array_766  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_768   into_dash_iter769 (    struct Array_766  self2037 ) {
    return ( (struct ArrayIter_768) { .f_backing = (  self2037 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr773 (    struct Array_766 *  p388 ) {
    return ( (uint32_t * ) (  p388 ) );
}

static  uint32_t *   get_dash_ptr772 (    struct Array_766 *  arr1961 ,    size_t  i1964 ) {
    if ( ( (  cmp292 ( (  i1964 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1964 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i1964 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p1965 = ( ( (  cast_dash_ptr773 ) ( (  arr1961 ) ) ) );
    return ( (  offset_dash_ptr736 ) ( (  p1965 ) ,  ( (int64_t ) (  i1964 ) ) ) );
}

static  uint32_t   get771 (    struct Array_766 *  arr1968 ,    size_t  i1971 ) {
    return ( * ( (  get_dash_ptr772 ) ( (  arr1968 ) ,  (  i1971 ) ) ) );
}

static  struct Maybe_731   next770 (    struct ArrayIter_768 *  self2044 ) {
    if ( (  cmp292 ( ( ( * (  self2044 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    uint32_t  e2046 = ( (  get771 ) ( ( & ( ( * (  self2044 ) ) .f_backing ) ) ,  ( ( * (  self2044 ) ) .f_cur ) ) );
    (*  self2044 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2044 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_731_Just ) ( (  e2046 ) ) );
}

static  uint32_t   reduce767 (    struct Array_766  iterable1077 ,    uint32_t  base1079 ,    uint32_t (*  fun1081 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1082 = (  base1079 );
    struct ArrayIter_768  it1083 = ( (  into_dash_iter769 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1084 = ( (  next770 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_731_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_731_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp774 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp774);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp775;
    return (  temp775 );
}

static  uint32_t   u32_dash_ors765 (    struct Array_766  vals2887 ) {
    return ( (  reduce767 ) ( (  vals2887 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or740 ) ) );
}

static  struct Array_766   from_dash_listlike776 (    struct Array_766 *  self359 ) {
    return ( * (  self359 ) );
}

static  uint32_t   opost778 (  ) {
    return (  from_dash_integral165 ( 1 ) );
}

static  uint32_t   cs8779 (  ) {
    return (  from_dash_integral165 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr782 (    struct Array_93 *  p388 ) {
    return ( (uint8_t * ) (  p388 ) );
}

static  uint8_t *   get_dash_ptr781 (    struct Array_93 *  arr1961 ,    size_t  i1964 ) {
    if ( ( (  cmp292 ( (  i1964 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1964 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i1964 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p1965 = ( ( (  cast_dash_ptr782 ) ( (  arr1961 ) ) ) );
    return ( (  offset_dash_ptr302 ) ( (  p1965 ) ,  ( (int64_t ) (  i1964 ) ) ) );
}

static  enum Unit_8   set780 (    struct Array_93 *  arr1974 ,    size_t  i1977 ,    uint8_t  e1979 ) {
    uint8_t *  p1980 = ( (  get_dash_ptr781 ) ( (  arr1974 ) ,  (  i1977 ) ) );
    (*  p1980 ) = (  e1979 );
    return ( Unit_8_Unit );
}

static  size_t   vmin783 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime784 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush785 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  struct Termios_92   enable_dash_raw_dash_mode718 (  ) {
    struct Termios_92  temp719 = ( (  undefined720 ) ( ) );
    struct Termios_92 *  orig_dash_termios3471 = ( &temp719 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  cast_dash_ptr723 ) ( (  orig_dash_termios3471 ) ) ) ) );
    struct Termios_92  raw3472 = ( * (  orig_dash_termios3471 ) );
    struct Array_727  temp742 = ( (struct Array_727) { ._arr = { ( (  echo743 ) ( ) ) , ( (  icanon744 ) ( ) ) , ( (  isig745 ) ( ) ) , ( ( (  iexten746 ) ( ) ) ) } } );
    raw3472 .f_c_dash_lflag = ( (  u32_dash_and724 ) ( ( (  raw3472 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg725 ) ( ( (  u32_dash_ors726 ) ( ( (  from_dash_listlike741 ) ( ( &temp742 ) ) ) ) ) ) ) ) );
    struct Array_748  temp759 = ( (struct Array_748) { ._arr = { ( (  brkint760 ) ( ) ) , ( (  icrnl761 ) ( ) ) , ( (  inpck762 ) ( ) ) , ( (  istrip763 ) ( ) ) , ( ( (  ixon764 ) ( ) ) ) } } );
    raw3472 .f_c_dash_iflag = ( (  u32_dash_and724 ) ( ( (  raw3472 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg725 ) ( ( (  u32_dash_ors747 ) ( ( (  from_dash_listlike758 ) ( ( &temp759 ) ) ) ) ) ) ) ) );
    struct Array_766  temp777 = ( (struct Array_766) { ._arr = { ( ( (  opost778 ) ( ) ) ) } } );
    raw3472 .f_c_dash_oflag = ( (  u32_dash_and724 ) ( ( (  raw3472 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg725 ) ( ( (  u32_dash_ors765 ) ( ( (  from_dash_listlike776 ) ( ( &temp777 ) ) ) ) ) ) ) ) );
    raw3472 .f_c_dash_cflag = ( (  u32_dash_or740 ) ( ( (  raw3472 ) .f_c_dash_cflag ) ,  ( (  cs8779 ) ( ) ) ) );
    ( (  set780 ) ( ( & ( (  raw3472 ) .f_c_dash_cc ) ) ,  ( (  vmin783 ) ( ) ) ,  (  from_dash_integral310 ( 0 ) ) ) );
    ( (  set780 ) ( ( & ( (  raw3472 ) .f_c_dash_cc ) ) ,  ( (  vtime784 ) ( ) ) ,  (  from_dash_integral310 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  tcsa_dash_flush785 ) ( ) ) ,  ( (  cast_dash_ptr723 ) ( ( & (  raw3472 ) ) ) ) ) );
    return ( * (  orig_dash_termios3471 ) );
}

static  enum Unit_8   for_dash_each788 (    struct StrViewIter_469  iterable1058 ,    enum Unit_8 (*  fun1060 )(    struct Char_65  ) ) {
    struct StrViewIter_469  temp789 = ( (  into_dash_iter470 ) ( (  iterable1058 ) ) );
    struct StrViewIter_469 *  it1061 = ( &temp789 );
    while ( ( true ) ) {
        struct Maybe_299  dref1062 = ( (  next474 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_299_Just_t ) {
                ( (  fun1060 ) ( ( dref1062 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print787 (    struct StrView_27  s1287 ) {
    ( (  for_dash_each788 ) ( ( (  chars471 ) ( (  s1287 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   hide_dash_cursor786 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors790 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen791 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse792 (  ) {
    ( (  print_dash_str330 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout793 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr549 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq797 (    enum Unit_8 *  l641 ,    enum Unit_8 *  r643 ) {
    return ( (  l641 ) == (  r643 ) );
}

static  enum Unit_8 *   cast798 (    const char*  x385 ) {
    return ( (enum Unit_8 * ) (  x385 ) );
}

static  void *   cast_dash_ptr802 (    enum Unit_8 * *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of803 (    enum Unit_8 *  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  enum Unit_8 *   zeroed800 (  ) {
    enum Unit_8 *  temp801;
    enum Unit_8 *  x625 = (  temp801 );
    ( ( memset ) ( ( (  cast_dash_ptr802 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of803 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  enum Unit_8 *   null_dash_ptr799 (  ) {
    return ( (  zeroed800 ) ( ) );
}

static  struct Maybe_322   from_dash_nullable_dash_c_dash_str796 (    const char*  s646 ) {
    if ( ( (  ptr_dash_eq797 ) ( ( (  cast798 ) ( (  s646 ) ) ) ,  ( ( (  null_dash_ptr799 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_322) { .tag = Maybe_322_None_t } );
    } else {
        return ( ( Maybe_322_Just ) ( (  s646 ) ) );
    }
}

static  struct Maybe_322   get795 (    const char*  s2655 ) {
    return ( (  from_dash_nullable_dash_c_dash_str796 ) ( ( ( getenv ) ( (  s2655 ) ) ) ) );
}

static  bool   eq804 (    const char*  l2076 ,    const char*  r2078 ) {
    return (  eq570 ( ( ( strcmp ) ( (  l2076 ) ,  (  r2078 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_91   query_dash_palette794 (  ) {
    struct Maybe_322  colorterm2656 = ( (  get795 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_322  dref2657 = (  colorterm2656 );
    if ( dref2657.tag == Maybe_322_Just_t ) {
        if ( ( (  eq804 ( ( dref2657 .stuff .Maybe_322_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq804 ( ( dref2657 .stuff .Maybe_322_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_91_PaletteRGB );
        }
    }
    else {
        if ( dref2657.tag == Maybe_322_None_t ) {
        }
    }
    struct Maybe_322  dref2659 = ( (  get795 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2659.tag == Maybe_322_Just_t ) {
        if ( (  eq804 ( ( dref2659 .stuff .Maybe_322_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_91_Palette8 );
        }
    }
    else {
        if ( dref2659.tag == Maybe_322_None_t ) {
        }
    }
    return ( ColorPalette_91_Palette16 );
}

struct Tuple2_805 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_805 Tuple2_805_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_805 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_807 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr811 (    struct Winsize_807 *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of812 (    struct Winsize_807  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  struct Winsize_807   zeroed809 (  ) {
    struct Winsize_807  temp810;
    struct Winsize_807  x625 = (  temp810 );
    ( ( memset ) ( ( (  cast_dash_ptr811 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of812 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  int32_t   stdout_dash_fileno813 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  uint64_t   from_dash_integral815 (    size_t  x65 ) {
    return ( (uint64_t ) (  x65 ) );
}

static  uint64_t   tiocgwinsz814 (  ) {
    return (  from_dash_integral815 ( 21523 ) );
}

static  int32_t   op_dash_neg816 (    int32_t  x236 ) {
    return ( (  from_dash_integral56 ( 0 ) ) - (  x236 ) );
}

static  bool   eq817 (    uint16_t  l125 ,    uint16_t  r127 ) {
    return ( (  l125 ) == (  r127 ) );
}

static  uint16_t   from_dash_integral818 (    size_t  x56 ) {
    return ( (uint16_t ) (  x56 ) );
}

static  void *   cast_dash_ptr824 (    uint32_t *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of825 (    uint32_t  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  uint32_t   zeroed822 (  ) {
    uint32_t  temp823;
    uint32_t  x625 = (  temp823 );
    ( ( memset ) ( ( (  cast_dash_ptr824 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of825 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  uint16_t *   cast826 (    uint32_t *  x385 ) {
    return ( (uint16_t * ) (  x385 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed820 (    uint16_t  x628 ) {
    uint32_t  temp821 = ( (  zeroed822 ) ( ) );
    uint32_t *  y629 = ( &temp821 );
    uint16_t *  yp630 = ( (  cast826 ) ( (  y629 ) ) );
    (*  yp630 ) = (  x628 );
    return ( * (  y629 ) );
}

static  uint32_t   u16_dash_u32819 (    uint16_t  x700 ) {
    return ( (  cast_dash_on_dash_zeroed820 ) ( (  x700 ) ) );
}

static  struct Tuple2_805   get_dash_dimensions806 (  ) {
    struct Winsize_807  temp808 = ( ( (  zeroed809 ) ( ) ) );
    struct Winsize_807 *  ws2644 = ( &temp808 );
    if ( ( (  eq570 ( ( ( ioctl ) ( ( (  stdout_dash_fileno813 ) ( ) ) ,  ( (  tiocgwinsz814 ) ( ) ) ,  (  ws2644 ) ) ) , (  op_dash_neg816 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq817 ( ( ( * (  ws2644 ) ) .f_ws_dash_col ) , (  from_dash_integral818 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_805_Tuple2 ) ( (  from_dash_integral165 ( 80 ) ) ,  (  from_dash_integral165 ( 24 ) ) ) );
    }
    return ( ( Tuple2_805_Tuple2 ) ( ( (  u16_dash_u32819 ) ( ( ( * (  ws2644 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32819 ) ( ( ( * (  ws2644 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined829 (  ) {
    struct timespec  temp830;
    return (  temp830 );
}

static  int32_t   clock_dash_monotonic831 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  struct timespec   now827 (  ) {
    struct timespec  temp828 = ( (  undefined829 ) ( ) );
    struct timespec *  t3433 = ( &temp828 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic831 ) ( ) ) ,  (  t3433 ) ) );
    return ( * (  t3433 ) );
}

struct env832 {
    bool *  should_dash_resize3485;
};

struct envunion833 {
    enum Unit_8  (*fun) (  struct env832*  ,    int32_t  );
    struct env832 env;
};

struct envunion833  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig834 ) {
    struct envunion833  temp835 = _intr_sigarr [  __intr__sig834 ];
    temp835.fun ( &temp835.env ,  __intr__sig834 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig836 ,   struct envunion833  __intr__fun837 ) {
    _intr_sigarr [  __intr__sig836 ] =  __intr__fun837;
    signal(  __intr__sig836 , _intr_sighandle );
    return Unit_8_Unit;
}

static  enum Unit_8   lam838 (   struct env832* env ,    int32_t  dref3492 ) {
    (* env->should_dash_resize3485 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst839 (    struct Tuple2_805  dref1515 ) {
    return ( dref1515 .field0 );
}

static  uint32_t   snd840 (    struct Tuple2_805  dref1518 ) {
    return ( dref1518 .field1 );
}

static  struct Tui_90   mk717 (   struct env86* env ) {
    struct Termios_92  og_dash_termios3487 = ( (  enable_dash_raw_dash_mode718 ) ( ) );
    ( (  hide_dash_cursor786 ) ( ) );
    ( (  reset_dash_colors790 ) ( ) );
    ( (  clear_dash_screen791 ) ( ) );
    ( (  enable_dash_mouse792 ) ( ) );
    ( (  flush_dash_stdout793 ) ( ) );
    enum ColorPalette_91  palette3488 = ( (  query_dash_palette794 ) ( ) );
    struct Tuple2_805  dims3489 = ( (  get_dash_dimensions806 ) ( ) );
    uint32_t  fps3490 = (  from_dash_integral165 ( 60 ) );
    struct timespec  last_dash_sync3491 = ( (  now827 ) ( ) );
    struct env832 envinst832 = {
        .should_dash_resize3485 = env->should_dash_resize3485 ,
    };
    ( _intr_register_signal ( (  from_dash_integral56 ( 28 ) ) , ( (struct envunion833){ .fun = (  enum Unit_8  (*) (  struct env832*  ,    int32_t  ) )lam838 , .env =  envinst832 } ) ) );
    return ( (struct Tui_90) { .f_width = ( (  fst839 ) ( (  dims3489 ) ) ) , .f_height = ( (  snd840 ) ( (  dims3489 ) ) ) , .f_target_dash_fps = (  fps3490 ) , .f_actual_dash_fps = (  from_dash_integral165 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3491 ) , .f_fps_dash_ts = (  last_dash_sync3491 ) , .f_fps_dash_count = (  from_dash_integral165 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3487 ) , .f_palette = (  palette3488 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_845 {
    size_t  f_size;
};

static  struct TypeSize_845   get_dash_typesize844 (  ) {
    struct Cell_280  temp846;
    return ( (struct TypeSize_845) { .f_size = ( sizeof( ( (  temp846 ) ) ) ) } );
}

static  struct Cell_280 *   cast_dash_ptr847 (    void *  p388 ) {
    return ( (struct Cell_280 * ) (  p388 ) );
}

static  struct Slice_279   allocate843 (    enum CAllocator_10  dref2303 ,    size_t  count2305 ) {
    if (!(  dref2303 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2306 = ( ( ( (  get_dash_typesize844 ) ( ) ) ) .f_size );
    struct Cell_280 *  ptr2307 = ( (  cast_dash_ptr847 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2306 ) , (  count2305 ) ) ) ) ) ) );
    return ( (struct Slice_279) { .f_ptr = (  ptr2307 ) , .f_count = (  count2305 ) } );
}

static  void *   cast_dash_ptr853 (    size_t *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of854 (    size_t  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  size_t   zeroed851 (  ) {
    size_t  temp852;
    size_t  x625 = (  temp852 );
    ( ( memset ) ( ( (  cast_dash_ptr853 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of854 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  uint32_t *   cast855 (    size_t *  x385 ) {
    return ( (uint32_t * ) (  x385 ) );
}

static  size_t   cast_dash_on_dash_zeroed849 (    uint32_t  x628 ) {
    size_t  temp850 = ( (  zeroed851 ) ( ) );
    size_t *  y629 = ( &temp850 );
    uint32_t *  yp630 = ( (  cast855 ) ( (  y629 ) ) );
    (*  yp630 ) = (  x628 );
    return ( * (  y629 ) );
}

static  size_t   u32_dash_size848 (    uint32_t  x706 ) {
    return ( (  cast_dash_on_dash_zeroed849 ) ( (  x706 ) ) );
}

struct env858 {
    ;
    struct Cell_280 (*  fun2265 )(    struct Cell_280  );
    ;
    ;
    struct Slice_279  s2263;
};

struct envunion859 {
    enum Unit_8  (*fun) (  struct env858*  ,    int32_t  );
    struct env858 env;
};

static  enum Unit_8   for_dash_each857 (    struct Range_150  iterable1058 ,   struct envunion859  fun1060 ) {
    struct RangeIter_153  temp860 = ( (  into_dash_iter154 ) ( (  iterable1058 ) ) );
    struct RangeIter_153 *  it1061 = ( &temp860 );
    while ( ( true ) ) {
        struct Maybe_155  dref1062 = ( (  next156 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_155_Just_t ) {
                struct envunion859  temp861 = (  fun1060 );
                ( temp861.fun ( &temp861.env ,  ( dref1062 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_280 *   offset_dash_ptr865 (    struct Cell_280 *  x367 ,    int64_t  count369 ) {
    struct Cell_280  temp866;
    return ( (struct Cell_280 * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp866 ) ) ) ) ) ) ) ) );
}

static  struct Cell_280 *   get_dash_ptr864 (    struct Slice_279  slice2105 ,    size_t  i2107 ) {
    if ( ( (  cmp292 ( (  i2107 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2107 ) , ( (  slice2105 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2107 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2105 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_280 *  elem_dash_ptr2108 = ( (  offset_dash_ptr865 ) ( ( (  slice2105 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2107 ) ) ) ) );
    return (  elem_dash_ptr2108 );
}

static  enum Unit_8   set863 (    struct Slice_279  slice2122 ,    size_t  i2124 ,    struct Cell_280  x2126 ) {
    struct Cell_280 *  ep2127 = ( (  get_dash_ptr864 ) ( (  slice2122 ) ,  (  i2124 ) ) );
    (*  ep2127 ) = (  x2126 );
    return ( Unit_8_Unit );
}

struct Maybe_870 {
    enum {
        Maybe_870_None_t,
        Maybe_870_Just_t,
    } tag;
    union {
        struct {
            struct Cell_280  field0;
        } Maybe_870_Just_s;
    } stuff;
};

static struct Maybe_870 Maybe_870_Just (  struct Cell_280  field0 ) {
    return ( struct Maybe_870 ) { .tag = Maybe_870_Just_t, .stuff = { .Maybe_870_Just_s = { .field0 = field0 } } };
};

static  struct Cell_280   undefined871 (  ) {
    struct Cell_280  temp872;
    return (  temp872 );
}

static  struct Cell_280   or_dash_fail869 (    struct Maybe_870  x1305 ,    struct StrConcat_323  errmsg1307 ) {
    struct Maybe_870  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_870_None_t ) {
        ( (  panic325 ) ( (  errmsg1307 ) ) );
        return ( (  undefined871 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_870_Just_t ) {
            return ( dref1308 .stuff .Maybe_870_Just_s .field0 );
        }
    }
}

static  struct Maybe_870   try_dash_get873 (    struct Slice_279  slice2111 ,    size_t  i2113 ) {
    if ( ( (  cmp292 ( (  i2113 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2113 ) , ( (  slice2111 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_870) { .tag = Maybe_870_None_t } );
    }
    struct Cell_280 *  elem_dash_ptr2114 = ( (  offset_dash_ptr865 ) ( ( (  slice2111 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2113 ) ) ) ) );
    return ( ( Maybe_870_Just ) ( ( * (  elem_dash_ptr2114 ) ) ) );
}

static  struct Cell_280   get868 (    struct Slice_279  slice2117 ,    size_t  i2119 ) {
    return ( (  or_dash_fail869 ) ( ( (  try_dash_get873 ) ( (  slice2117 ) ,  (  i2119 ) ) ) ,  ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2119 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2117 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_280   elem_dash_get867 (    struct Slice_279  self2130 ,    size_t  idx2132 ) {
    return ( (  get868 ) ( (  self2130 ) ,  (  idx2132 ) ) );
}

static  enum Unit_8   lam862 (   struct env858* env ,    int32_t  i2267 ) {
    return ( (  set863 ) ( ( env->s2263 ) ,  ( (  i32_dash_size422 ) ( (  i2267 ) ) ) ,  ( ( env->fun2265 ) ( (  elem_dash_get867 ( ( env->s2263 ) , ( (  i32_dash_size422 ) ( (  i2267 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map856 (    struct Slice_279  s2263 ,    struct Cell_280 (*  fun2265 )(    struct Cell_280  ) ) {
    struct env858 envinst858 = {
        .fun2265 =  fun2265 ,
        .s2263 =  s2263 ,
    };
    ( (  for_dash_each857 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32331 ) ( (  op_dash_sub291 ( ( (  s2263 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion859){ .fun = (  enum Unit_8  (*) (  struct env858*  ,    int32_t  ) )lam862 , .env =  envinst858 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_280   default_dash_cell875 (  ) {
    return ( (struct Cell_280) { .f_c = ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_280   lam874 (    struct Cell_280  dref3595 ) {
    return ( (  default_dash_cell875 ) ( ) );
}

struct env878 {
    ;
    struct Cell_280 (*  fun2265 )(    struct Cell_280  );
    ;
    ;
    struct Slice_279  s2263;
};

struct envunion879 {
    enum Unit_8  (*fun) (  struct env878*  ,    int32_t  );
    struct env878 env;
};

static  enum Unit_8   for_dash_each877 (    struct Range_150  iterable1058 ,   struct envunion879  fun1060 ) {
    struct RangeIter_153  temp880 = ( (  into_dash_iter154 ) ( (  iterable1058 ) ) );
    struct RangeIter_153 *  it1061 = ( &temp880 );
    while ( ( true ) ) {
        struct Maybe_155  dref1062 = ( (  next156 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_155_Just_t ) {
                struct envunion879  temp881 = (  fun1060 );
                ( temp881.fun ( &temp881.env ,  ( dref1062 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam882 (   struct env878* env ,    int32_t  i2267 ) {
    return ( (  set863 ) ( ( env->s2263 ) ,  ( (  i32_dash_size422 ) ( (  i2267 ) ) ) ,  ( ( env->fun2265 ) ( (  elem_dash_get867 ( ( env->s2263 ) , ( (  i32_dash_size422 ) ( (  i2267 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map876 (    struct Slice_279  s2263 ,    struct Cell_280 (*  fun2265 )(    struct Cell_280  ) ) {
    struct env878 envinst878 = {
        .fun2265 =  fun2265 ,
        .s2263 =  s2263 ,
    };
    ( (  for_dash_each877 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32331 ) ( (  op_dash_sub291 ( ( (  s2263 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion879){ .fun = (  enum Unit_8  (*) (  struct env878*  ,    int32_t  ) )lam882 , .env =  envinst878 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_280   lam883 (    struct Cell_280  dref3597 ) {
    return ( (  default_dash_cell875 ) ( ) );
}

static  struct Screen_278   mk_dash_screen842 (    struct Tui_90 *  tui3591 ,    enum CAllocator_10  al3593 ) {
    struct Slice_279  cur3594 = ( (  allocate843 ) ( (  al3593 ) ,  ( (  u32_dash_size848 ) ( (  op_dash_mul167 ( ( ( * (  tui3591 ) ) .f_width ) , ( ( * (  tui3591 ) ) .f_height ) ) ) ) ) ) );
    ( (  map856 ) ( (  cur3594 ) ,  (  lam874 ) ) );
    struct Slice_279  prev3596 = ( (  allocate843 ) ( (  al3593 ) ,  ( (  u32_dash_size848 ) ( (  op_dash_mul167 ( ( ( * (  tui3591 ) ) .f_width ) , ( ( * (  tui3591 ) ) .f_height ) ) ) ) ) ) );
    ( (  map876 ) ( (  prev3596 ) ,  (  lam883 ) ) );
    return ( (struct Screen_278) { .f_current = (  cur3594 ) , .f_previous = (  prev3596 ) , .f_al = (  al3593 ) , .f_tui = (  tui3591 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) } );
}

enum MouseButton_891 {
    MouseButton_891_MouseLeft,
    MouseButton_891_MouseMiddle,
    MouseButton_891_MouseRight,
    MouseButton_891_ScrollUp,
    MouseButton_891_ScrollDown,
};

struct MouseEvent_890 {
    enum MouseButton_891  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_889 {
    enum {
        InputEvent_889_Key_t,
        InputEvent_889_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_271  field0;
        } InputEvent_889_Key_s;
        struct {
            struct MouseEvent_890  field0;
        } InputEvent_889_Mouse_s;
    } stuff;
};

static struct InputEvent_889 InputEvent_889_Key (  struct Key_271  field0 ) {
    return ( struct InputEvent_889 ) { .tag = InputEvent_889_Key_t, .stuff = { .InputEvent_889_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_889 InputEvent_889_Mouse (  struct MouseEvent_890  field0 ) {
    return ( struct InputEvent_889 ) { .tag = InputEvent_889_Mouse_t, .stuff = { .InputEvent_889_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_888 {
    enum {
        Maybe_888_None_t,
        Maybe_888_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_889  field0;
        } Maybe_888_Just_s;
    } stuff;
};

static struct Maybe_888 Maybe_888_Just (  struct InputEvent_889  field0 ) {
    return ( struct Maybe_888 ) { .tag = Maybe_888_Just_t, .stuff = { .Maybe_888_Just_s = { .field0 = field0 } } };
};

struct envunion887 {
    struct Maybe_888  (*fun) (  struct env88*  ,    struct Tui_90 *  );
    struct env88 env;
};

struct env886 {
    struct env88 envinst88;
    struct Tui_90 *  tui4727;
};

struct envunion892 {
    struct Maybe_888  (*fun) (  struct env886*  );
    struct env886 env;
};

struct FunIter_885 {
    struct envunion892  f_fun;
    bool  f_finished;
};

static  struct FunIter_885   into_dash_iter893 (    struct FunIter_885  self1012 ) {
    return (  self1012 );
}

static  struct FunIter_885   from_dash_function894 (   struct envunion892  fun1020 ) {
    return ( (struct FunIter_885) { .f_fun = (  fun1020 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions899 (   struct env87* env ,    struct Tui_90 *  tui3557 ) {
    if ( ( ! ( * ( env->should_dash_resize3485 ) ) ) ) {
        return ( false );
    }
    (*  tui3557 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3485 ) = ( false );
    struct Tuple2_805  dim3558 = ( (  get_dash_dimensions806 ) ( ) );
    uint32_t  w3559 = ( (  fst839 ) ( (  dim3558 ) ) );
    uint32_t  h3560 = ( (  snd840 ) ( (  dim3558 ) ) );
    (*  tui3557 ) .f_width = (  w3559 );
    (*  tui3557 ) .f_height = (  h3560 );
    return ( true );
}

static  char   undefined902 (  ) {
    char  temp903;
    return (  temp903 );
}

struct Maybe_904 {
    enum {
        Maybe_904_None_t,
        Maybe_904_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_904_Just_s;
    } stuff;
};

static struct Maybe_904 Maybe_904_Just (  char  field0 ) {
    return ( struct Maybe_904 ) { .tag = Maybe_904_Just_t, .stuff = { .Maybe_904_Just_s = { .field0 = field0 } } };
};

struct Pollfd_906 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr907 (    struct Pollfd_906 *  p388 ) {
    return ( (struct pollfd * ) (  p388 ) );
}

static  void *   cast_dash_ptr910 (    char *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of911 (    char  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  char   zeroed908 (  ) {
    char  temp909;
    char  x625 = (  temp909 );
    ( ( memset ) ( ( (  cast_dash_ptr910 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of911 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  struct Maybe_904   read_dash_byte905 (    int32_t  timeout_dash_ms3479 ) {
    struct Pollfd_906  pfd3480 = ( (struct Pollfd_906) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral818 ( 1 ) ) , .f_revents = (  from_dash_integral818 ( 0 ) ) } );
    if ( (  cmp157 ( ( ( poll ) ( ( (  cast_dash_ptr907 ) ( ( & (  pfd3480 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3479 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_904) { .tag = Maybe_904_None_t } );
    }
    char  c3481 = ( ( (  zeroed908 ) ( ) ) );
    if ( (  cmp157 ( ( ( read ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  cast_dash_ptr910 ) ( ( & (  c3481 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_904) { .tag = Maybe_904_None_t } );
    }
    return ( ( Maybe_904_Just ) ( (  c3481 ) ) );
}

static  char   u8_dash_ascii912 (    uint8_t  b1443 ) {
    return ( ( (char ) (  b1443 ) ) );
}

static  uint8_t *   cast916 (    uint32_t *  x385 ) {
    return ( (uint8_t * ) (  x385 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed914 (    uint8_t  x628 ) {
    uint32_t  temp915 = ( (  zeroed822 ) ( ) );
    uint32_t *  y629 = ( &temp915 );
    uint8_t *  yp630 = ( (  cast916 ) ( (  y629 ) ) );
    (*  yp630 ) = (  x628 );
    return ( * (  y629 ) );
}

static  uint32_t   u8_dash_u32913 (    uint8_t  x727 ) {
    return ( (  cast_dash_on_dash_zeroed914 ) ( (  x727 ) ) );
}

struct Map_919 {
    struct StrViewIter_469  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_919 Map_919_Map (  struct StrViewIter_469  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_919 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_919   into_dash_iter920 (    struct Map_919  self763 ) {
    return (  self763 );
}

static  struct Maybe_731   next921 (    struct Map_919 *  dref765 ) {
    struct Maybe_299  dref768 = ( (  next474 ) ( ( & ( (* dref765 ) .field0 ) ) ) );
    if ( dref768.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    else {
        if ( dref768.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_731_Just ) ( ( ( (* dref765 ) .field1 ) ( ( dref768 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce918 (    struct Map_919  iterable1077 ,    uint32_t  base1079 ,    uint32_t (*  fun1081 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1082 = (  base1079 );
    struct Map_919  it1083 = ( (  into_dash_iter920 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1084 = ( (  next921 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_731_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_731_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp922 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp922);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp923;
    return (  temp923 );
}

static  struct Map_919   map924 (    struct StrView_27  iterable772 ,    uint32_t (*  fun774 )(    struct Char_65  ) ) {
    struct StrViewIter_469  it775 = ( (  into_dash_iter472 ) ( (  iterable772 ) ) );
    return ( ( Map_919_Map ) ( (  it775 ) ,  (  fun774 ) ) );
}

static  uint8_t *   cast929 (    size_t *  x385 ) {
    return ( (uint8_t * ) (  x385 ) );
}

static  size_t   cast_dash_on_dash_zeroed927 (    uint8_t  x628 ) {
    size_t  temp928 = ( (  zeroed851 ) ( ) );
    size_t *  y629 = ( &temp928 );
    uint8_t *  yp630 = ( (  cast929 ) ( (  y629 ) ) );
    (*  yp630 ) = (  x628 );
    return ( * (  y629 ) );
}

static  size_t   u8_dash_size926 (    uint8_t  x718 ) {
    return ( (  cast_dash_on_dash_zeroed927 ) ( (  x718 ) ) );
}

struct StrConcat_932 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_932 StrConcat_932_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_932 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_931 {
    struct StrConcat_932  field0;
    struct StrView_27  field1;
};

static struct StrConcat_931 StrConcat_931_StrConcat (  struct StrConcat_932  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_931 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_936 {
    struct StrView_27  field0;
    struct StrConcat_931  field1;
};

static struct StrConcat_936 StrConcat_936_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_931  field1 ) {
    return ( struct StrConcat_936 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_935 {
    struct StrConcat_936  field0;
    struct Char_65  field1;
};

static struct StrConcat_935 StrConcat_935_StrConcat (  struct StrConcat_936  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_935 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str939 (    struct StrConcat_932  self1254 ) {
    struct StrConcat_932  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str938 (    struct StrConcat_931  self1254 ) {
    struct StrConcat_931  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str939 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str937 (    struct StrConcat_936  self1254 ) {
    struct StrConcat_936  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str938 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str934 (    struct StrConcat_935  self1254 ) {
    struct StrConcat_935  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str937 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic933 (    struct StrConcat_931  errmsg1295 ) {
    ( (  print_dash_str934 ) ( ( ( StrConcat_935_StrConcat ) ( ( ( StrConcat_936_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1295 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail930 (    struct Maybe_489  x1305 ,    struct StrConcat_931  errmsg1307 ) {
    struct Maybe_489  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_489_None_t ) {
        ( (  panic933 ) ( (  errmsg1307 ) ) );
        return ( (  undefined490 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_489_Just_t ) {
            return ( dref1308 .stuff .Maybe_489_Just_s .field0 );
        }
    }
}

static  enum Ordering_158   cmp941 (    struct Char_65  l1411 ,    struct Char_65  r1413 ) {
    if ( ( ( !  eq409 ( ( (  l1411 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq409 ( ( (  r1413 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp942 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp942);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (  cmp309 ) ( ( (  char_dash_u8545 ) ( (  l1411 ) ) ) ,  ( (  char_dash_u8545 ) ( (  r1413 ) ) ) ) );
}

static  uint8_t   op_dash_sub943 (    uint8_t  l264 ,    uint8_t  r266 ) {
    return ( (  l264 ) - (  r266 ) );
}

static  uint8_t   op_dash_add944 (    uint8_t  l259 ,    uint8_t  r261 ) {
    return ( (  l259 ) + (  r261 ) );
}

static  struct Maybe_489   hex_dash_digit940 (    struct Char_65  c3046 ) {
    if ( ( (  cmp941 ( (  c3046 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp941 ( (  c3046 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_489_Just ) ( (  op_dash_sub943 ( ( (  char_dash_u8545 ) ( (  c3046 ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp941 ( (  c3046 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp941 ( (  c3046 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_489_Just ) ( (  op_dash_add944 ( (  op_dash_sub943 ( ( (  char_dash_u8545 ) ( (  c3046 ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral310 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp941 ( (  c3046 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp941 ( (  c3046 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_489_Just ) ( (  op_dash_add944 ( (  op_dash_sub943 ( ( (  char_dash_u8545 ) ( (  c3046 ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral310 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_489) { .tag = Maybe_489_None_t } );
}

static  uint32_t   lam925 (    struct Char_65  c3051 ) {
    return ( (  from_dash_integral165 ) ( ( (  u8_dash_size926 ) ( ( (  or_dash_fail930 ) ( ( (  hex_dash_digit940 ) ( (  c3051 ) ) ) ,  ( ( StrConcat_931_StrConcat ) ( ( ( StrConcat_932_StrConcat ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ,  (  c3051 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam945 (    uint32_t  elem3053 ,    uint32_t  b3055 ) {
    return (  op_dash_add171 ( (  op_dash_mul167 ( (  b3055 ) , (  from_dash_integral165 ( 16 ) ) ) ) , (  elem3053 ) ) );
}

static  uint32_t   from_dash_hex917 (    struct StrView_27  arr3049 ) {
    return ( (  reduce918 ) ( ( (  map924 ) ( (  arr3049 ) ,  (  lam925 ) ) ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  lam945 ) ) );
}

static  bool   eq947 (    char  l405 ,    char  r407 ) {
    return ( (  l405 ) == (  r407 ) );
}

struct Array_948 {
    char _arr [32];
};

static  void *   cast_dash_ptr952 (    struct Array_948 *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of953 (    struct Array_948  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  struct Array_948   zeroed950 (  ) {
    struct Array_948  temp951;
    struct Array_948  x625 = (  temp951 );
    ( ( memset ) ( ( (  cast_dash_ptr952 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of953 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  char *   cast_dash_ptr957 (    struct Array_948 *  p388 ) {
    return ( (char * ) (  p388 ) );
}

static  char *   offset_dash_ptr958 (    char *  x367 ,    int64_t  count369 ) {
    char  temp959;
    return ( (char * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp959 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr956 (    struct Array_948 *  arr1961 ,    size_t  i1964 ) {
    if ( ( (  cmp292 ( (  i1964 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1964 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i1964 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p1965 = ( ( (  cast_dash_ptr957 ) ( (  arr1961 ) ) ) );
    return ( (  offset_dash_ptr958 ) ( (  p1965 ) ,  ( (int64_t ) (  i1964 ) ) ) );
}

static  enum Unit_8   set955 (    struct Array_948 *  arr1974 ,    size_t  i1977 ,    char  e1979 ) {
    char *  p1980 = ( (  get_dash_ptr956 ) ( (  arr1974 ) ,  (  i1977 ) ) );
    (*  p1980 ) = (  e1979 );
    return ( Unit_8_Unit );
}

struct Slice_961 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail964 (    struct Maybe_904  x1305 ,    struct StrConcat_323  errmsg1307 ) {
    struct Maybe_904  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_904_None_t ) {
        ( (  panic325 ) ( (  errmsg1307 ) ) );
        return ( (  undefined902 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_904_Just_t ) {
            return ( dref1308 .stuff .Maybe_904_Just_s .field0 );
        }
    }
}

static  struct Maybe_904   try_dash_get965 (    struct Slice_961  slice2111 ,    size_t  i2113 ) {
    if ( ( (  cmp292 ( (  i2113 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2113 ) , ( (  slice2111 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_904) { .tag = Maybe_904_None_t } );
    }
    char *  elem_dash_ptr2114 = ( (  offset_dash_ptr958 ) ( ( (  slice2111 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2113 ) ) ) ) );
    return ( ( Maybe_904_Just ) ( ( * (  elem_dash_ptr2114 ) ) ) );
}

static  char   get963 (    struct Slice_961  slice2117 ,    size_t  i2119 ) {
    return ( (  or_dash_fail964 ) ( ( (  try_dash_get965 ) ( (  slice2117 ) ,  (  i2119 ) ) ) ,  ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2119 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2117 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get962 (    struct Slice_961  self2130 ,    size_t  idx2132 ) {
    return ( (  get963 ) ( (  self2130 ) ,  (  idx2132 ) ) );
}

struct Scanner_966 {
    struct StrViewIter_469  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_966   mk_dash_from_dash_str968 (    struct StrView_27  s3323 ) {
    return ( (struct Scanner_966) { .f_s = ( (  chars471 ) ( (  s3323 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_972 (    uint8_t *  x372 ,    size_t  count374 ) {
    return ( (  offset_dash_ptr302 ) ( (  x372 ) ,  ( (int64_t ) (  count374 ) ) ) );
}

static  struct StrView_27   substr969 (    struct StrView_27  s2528 ,    size_t  from2530 ,    size_t  to2532 ) {
    size_t  from_dash_bs2533 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_153  temp970 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( (  from2530 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond971 =  next156 (&temp970);
        if (  __cond971 .tag == 0 ) {
            break;
        }
        int32_t  dref2534 =  __cond971 .stuff .Maybe_155_Just_s .field0;
        if ( (  cmp292 ( (  from_dash_bs2533 ) , ( ( (  s2528 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2533 = (  op_dash_add313 ( (  from_dash_bs2533 ) , ( (  next_dash_char308 ) ( ( (  offset_dash_ptr_prime_972 ) ( ( ( (  s2528 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2533 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2535 = (  from_dash_bs2533 );
    struct RangeIter_153  temp973 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( (  to2532 ) ) ) , ( (  size_dash_i32331 ) ( (  from2530 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond974 =  next156 (&temp973);
        if (  __cond974 .tag == 0 ) {
            break;
        }
        int32_t  dref2536 =  __cond974 .stuff .Maybe_155_Just_s .field0;
        if ( (  cmp292 ( (  to_dash_bs2535 ) , ( ( (  s2528 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2535 = (  op_dash_add313 ( (  to_dash_bs2535 ) , ( (  next_dash_char308 ) ( ( (  offset_dash_ptr_prime_972 ) ( ( ( (  s2528 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2535 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice477 ) ( ( (  s2528 ) .f_contents ) ,  (  from_dash_bs2533 ) ,  (  to_dash_bs2535 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr977 (    char *  p388 ) {
    return ( (uint8_t * ) (  p388 ) );
}

static  struct Slice_14   cast_dash_slice976 (    struct Slice_961  s2290 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr977 ) ( ( (  s2290 ) .f_ptr ) ) ) , .f_count = ( (  s2290 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice975 (    struct Slice_961  sl2502 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice976 ) ( (  sl2502 ) ) ) } );
}

struct Maybe_978 {
    enum {
        Maybe_978_None_t,
        Maybe_978_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_978_Just_s;
    } stuff;
};

static struct Maybe_978 Maybe_978_Just (  int64_t  field0 ) {
    return ( struct Maybe_978 ) { .tag = Maybe_978_Just_t, .stuff = { .Maybe_978_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_980 {
    struct Scanner_966  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_966   into_dash_iter983 (    struct Scanner_966  self3314 ) {
    return (  self3314 );
}

static  struct Scanner_966   into_dash_iter982 (    struct Scanner_966 *  self752 ) {
    return ( (  into_dash_iter983 ) ( ( * (  self752 ) ) ) );
}

static  struct TakeWhile_980   take_dash_while981 (    struct Scanner_966 *  it954 ,    bool (*  pred956 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_980) { .f_it = ( (  into_dash_iter982 ) ( (  it954 ) ) ) , .f_pred = (  pred956 ) } );
}

static  struct Char_65   min986 (    struct Char_65  l1319 ,    struct Char_65  r1321 ) {
    if ( (  cmp941 ( (  l1319 ) , (  r1321 ) ) == 0 ) ) {
        return (  l1319 );
    } else {
        return (  r1321 );
    }
}

static  struct Char_65   max987 (    struct Char_65  l1324 ,    struct Char_65  r1326 ) {
    if ( (  cmp941 ( (  l1324 ) , (  r1326 ) ) == 2 ) ) {
        return (  l1324 );
    } else {
        return (  r1326 );
    }
}

static  bool   between985 (    struct Char_65  c1329 ,    struct Char_65  l1331 ,    struct Char_65  r1333 ) {
    struct Char_65  from1334 = ( (  min986 ) ( (  l1331 ) ,  (  r1333 ) ) );
    struct Char_65  to1335 = ( (  max987 ) ( (  l1331 ) ,  (  r1333 ) ) );
    return ( (  cmp941 ( (  from1334 ) , (  c1329 ) ) != 2 ) && (  cmp941 ( (  c1329 ) , (  to1335 ) ) != 2 ) );
}

static  bool   is_dash_digit984 (    struct Char_65  c1458 ) {
    return ( (  eq409 ( ( (  c1458 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between985 ) ( (  c1458 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) ) );
}

static  struct Maybe_299   next991 (    struct Scanner_966 *  self3309 ) {
    struct Maybe_299  dref3310 = ( (  next474 ) ( ( & ( ( * (  self3309 ) ) .f_s ) ) ) );
    if ( dref3310.tag == Maybe_299_Just_t ) {
        (*  self3309 ) .f_byte_dash_offset = (  op_dash_add313 ( ( ( * (  self3309 ) ) .f_byte_dash_offset ) , ( ( dref3310 .stuff .Maybe_299_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_299_Just ) ( ( dref3310 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref3310.tag == Maybe_299_None_t ) {
            return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
        }
    }
}

static  struct Maybe_299   next990 (    struct TakeWhile_980 *  self948 ) {
    struct Maybe_299  mx949 = ( (  next991 ) ( ( & ( ( * (  self948 ) ) .f_it ) ) ) );
    struct Maybe_299  dref950 = (  mx949 );
    if ( dref950.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref950.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self948 ) ) .f_pred ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct TakeWhile_980   into_dash_iter993 (    struct TakeWhile_980  self945 ) {
    return (  self945 );
}

static  struct Maybe_299   head989 (    struct TakeWhile_980  it1126 ) {
    struct TakeWhile_980  temp992 = ( (  into_dash_iter993 ) ( (  it1126 ) ) );
    return ( (  next990 ) ( ( &temp992 ) ) );
}

static  bool   null988 (    struct TakeWhile_980  it1135 ) {
    struct Maybe_299  dref1136 = ( (  head989 ) ( (  it1135 ) ) );
    if ( dref1136.tag == Maybe_299_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env996 {
    ;
    struct Scanner_966 *  it1170;
};

struct envunion997 {
    struct Maybe_299  (*fun) (  struct env996*  ,    int32_t  );
    struct env996 env;
};

static  enum Unit_8   for_dash_each995 (    struct Range_150  iterable1058 ,   struct envunion997  fun1060 ) {
    struct RangeIter_153  temp998 = ( (  into_dash_iter154 ) ( (  iterable1058 ) ) );
    struct RangeIter_153 *  it1061 = ( &temp998 );
    while ( ( true ) ) {
        struct Maybe_155  dref1062 = ( (  next156 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_155_Just_t ) {
                struct envunion997  temp999 = (  fun1060 );
                ( temp999.fun ( &temp999.env ,  ( dref1062 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_299   lam1000 (   struct env996* env ,    int32_t  dref1173 ) {
    return ( (  next991 ) ( ( env->it1170 ) ) );
}

static  enum Unit_8   drop_prime_994 (    struct Scanner_966 *  it1170 ,    size_t  n1172 ) {
    struct env996 envinst996 = {
        .it1170 =  it1170 ,
    };
    ( (  for_dash_each995 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32331 ) ( (  n1172 ) ) ) ) ) ,  ( (struct envunion997){ .fun = (  struct Maybe_299  (*) (  struct env996*  ,    int32_t  ) )lam1000 , .env =  envinst996 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce1002 (    struct TakeWhile_980  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct TakeWhile_980  it1083 = ( (  into_dash_iter993 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1084 = ( (  next990 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_299_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_299_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1003 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1003);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1004;
    return (  temp1004 );
}

static  size_t   lam1005 (    struct Char_65  dref1089 ,    size_t  x1091 ) {
    return (  op_dash_add313 ( (  x1091 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1001 (    struct TakeWhile_980  it1088 ) {
    return ( (  reduce1002 ) ( (  it1088 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1005 ) ) );
}

static  struct TakeWhile_980   chars1007 (    struct TakeWhile_980  self1835 ) {
    return (  self1835 );
}

static  struct Maybe_978   reduce1008 (    struct TakeWhile_980  iterable1077 ,    struct Maybe_978  base1079 ,    struct Maybe_978 (*  fun1081 )(    struct Char_65  ,    struct Maybe_978  ) ) {
    struct Maybe_978  x1082 = (  base1079 );
    struct TakeWhile_980  it1083 = ( (  into_dash_iter993 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1084 = ( (  next990 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_299_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_299_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1009 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1009);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_978  temp1010;
    return (  temp1010 );
}

static  void *   cast_dash_ptr1018 (    int32_t *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of1019 (    int32_t  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  int32_t   zeroed1016 (  ) {
    int32_t  temp1017;
    int32_t  x625 = (  temp1017 );
    ( ( memset ) ( ( (  cast_dash_ptr1018 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1019 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  uint8_t *   cast1020 (    int32_t *  x385 ) {
    return ( (uint8_t * ) (  x385 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1014 (    uint8_t  x628 ) {
    int32_t  temp1015 = ( (  zeroed1016 ) ( ) );
    int32_t *  y629 = ( &temp1015 );
    uint8_t *  yp630 = ( (  cast1020 ) ( (  y629 ) ) );
    (*  yp630 ) = (  x628 );
    return ( * (  y629 ) );
}

static  int32_t   u8_dash_i321013 (    uint8_t  x724 ) {
    return ( (  cast_dash_on_dash_zeroed1014 ) ( (  x724 ) ) );
}

static  struct Maybe_155   parse_dash_digit1012 (    struct Char_65  c1483 ) {
    if ( ( (  is_dash_digit984 ) ( (  c1483 ) ) ) ) {
        return ( ( Maybe_155_Just ) ( ( (  u8_dash_i321013 ) ( (  op_dash_sub943 ( ( (  char_dash_u8545 ) ( (  c1483 ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
}

static  int64_t   i32_dash_i641021 (    int32_t  x661 ) {
    return ( (int64_t ) (  x661 ) );
}

static  struct Maybe_978   sequence_dash_maybe1011 (    struct Char_65  e1881 ,    struct Maybe_978  b1883 ) {
    struct Maybe_978  dref1884 = (  b1883 );
    if ( dref1884.tag == Maybe_978_None_t ) {
        return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
    }
    else {
        if ( dref1884.tag == Maybe_978_Just_t ) {
            struct Maybe_155  dref1886 = ( (  parse_dash_digit1012 ) ( (  e1881 ) ) );
            if ( dref1886.tag == Maybe_155_None_t ) {
                return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
            }
            else {
                if ( dref1886.tag == Maybe_155_Just_t ) {
                    return ( ( Maybe_978_Just ) ( (  op_dash_add485 ( (  op_dash_mul288 ( ( dref1884 .stuff .Maybe_978_Just_s .field0 ) , (  from_dash_integral290 ( 10 ) ) ) ) , ( (  i32_dash_i641021 ) ( ( dref1886 .stuff .Maybe_155_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_978   parse_dash_int1006 (    struct TakeWhile_980  s1878 ) {
    struct TakeWhile_980  cs1888 = ( (  chars1007 ) ( (  s1878 ) ) );
    struct Maybe_299  dref1889 = ( (  head989 ) ( (  cs1888 ) ) );
    if ( dref1889.tag == Maybe_299_Just_t ) {
        return ( (  reduce1008 ) ( (  cs1888 ) ,  ( ( Maybe_978_Just ) ( (  from_dash_integral290 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1011 ) ) );
    }
    else {
        if ( dref1889.tag == Maybe_299_None_t ) {
            return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
        }
    }
}

static  struct Maybe_978   scan_dash_int979 (    struct Scanner_966 *  sc3329 ) {
    struct TakeWhile_980  digit_dash_chars3330 = ( (  take_dash_while981 ) ( (  sc3329 ) ,  (  is_dash_digit984 ) ) );
    if ( ( (  null988 ) ( (  digit_dash_chars3330 ) ) ) ) {
        return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
    }
    ( (  drop_prime_994 ) ( (  sc3329 ) ,  ( (  count1001 ) ( (  digit_dash_chars3330 ) ) ) ) );
    return ( (  parse_dash_int1006 ) ( (  digit_dash_chars3330 ) ) );
}

static  int32_t   i64_dash_i321023 (    int64_t  x673 ) {
    return ( (int32_t ) (  x673 ) );
}

struct StrConcat_1025 {
    struct StrView_27  field0;
    int64_t  field1;
};

static struct StrConcat_1025 StrConcat_1025_StrConcat (  struct StrView_27  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_1025 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1027 {
    struct StrView_27  field0;
    struct StrConcat_1025  field1;
};

static struct StrConcat_1027 StrConcat_1027_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1025  field1 ) {
    return ( struct StrConcat_1027 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1029 {
    struct StrConcat_1027  field0;
    struct Char_65  field1;
};

static struct StrConcat_1029 StrConcat_1029_StrConcat (  struct StrConcat_1027  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1029 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1034 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1033 {
    struct StrViewIter_469  f_left;
    struct IntStrIter_1034  f_right;
};

struct StrConcatIter_1032 {
    struct StrViewIter_469  f_left;
    struct StrConcatIter_1033  f_right;
};

enum EmptyIter_1036 {
    EmptyIter_1036_EmptyIter,
};

struct AppendIter_1035 {
    enum EmptyIter_1036  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

struct StrConcatIter_1031 {
    struct StrConcatIter_1032  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_1031   into_dash_iter1038 (    struct StrConcatIter_1031  self1242 ) {
    return (  self1242 );
}

struct env1045 {
    int64_t  base1338;
    ;
};

struct envunion1046 {
    int64_t  (*fun) (  struct env1045*  ,    int32_t  ,    int64_t  );
    struct env1045 env;
};

static  int64_t   reduce1044 (    struct Range_150  iterable1077 ,    int64_t  base1079 ,   struct envunion1046  fun1081 ) {
    int64_t  x1082 = (  base1079 );
    struct RangeIter_153  it1083 = ( (  into_dash_iter154 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1084 = ( (  next156 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_155_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_155_Just_t ) {
                struct envunion1046  temp1047 = (  fun1081 );
                x1082 = ( temp1047.fun ( &temp1047.env ,  ( dref1084 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1048 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1048);
    abort ( );
    ( Unit_8_Unit );
    int64_t  temp1049;
    return (  temp1049 );
}

static  int64_t   lam1050 (   struct env1045* env ,    int32_t  item1342 ,    int64_t  x1344 ) {
    return (  op_dash_mul288 ( (  x1344 ) , ( env->base1338 ) ) );
}

static  int64_t   pow1043 (    int64_t  base1338 ,    int32_t  p1340 ) {
    struct env1045 envinst1045 = {
        .base1338 =  base1338 ,
    };
    return ( (  reduce1044 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1340 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral290 ( 1 ) ) ,  ( (struct envunion1046){ .fun = (  int64_t  (*) (  struct env1045*  ,    int32_t  ,    int64_t  ) )lam1050 , .env =  envinst1045 } ) ) );
}

static  int64_t   op_dash_div1051 (    int64_t  l208 ,    int64_t  r210 ) {
    return ( (  l208 ) / (  r210 ) );
}

static  uint8_t   cast1052 (    int64_t  x385 ) {
    return ( (uint8_t ) (  x385 ) );
}

static  int64_t   op_dash_sub1053 (    int64_t  l198 ,    int64_t  r200 ) {
    return ( (  l198 ) - (  r200 ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1055 (    uint8_t *  ptr745 ,    uint8_t  b747 ) {
    size_t  s748 = ( ( (size_t ) (  ptr745 ) ) );
    size_t  exp749 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add313 ( (  op_dash_sub291 ( (  s748 ) , ( (  u8_dash_size926 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer344 ) ( (  ptr745 ) ) ) ) ) ) ) , (  op_dash_mul415 ( (  exp749 ) , ( (  u8_dash_size926 ) ( (  b747 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1056 (    size_t  x385 ) {
    return ( (uint8_t * ) (  x385 ) );
}

static  struct Char_65   char_dash_from_dash_u81054 (    uint8_t  b1229 ) {
    uint8_t *  ptr1230 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1055 ) ( ( ( (  cast1056 ) ( ( (  u8_dash_size926 ) ( (  b1229 ) ) ) ) ) ) ,  (  from_dash_integral310 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr1230 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_299   next1042 (    struct IntStrIter_1034 *  self1351 ) {
    if ( ( ( * (  self1351 ) ) .f_negative ) ) {
        (*  self1351 ) .f_negative = ( false );
        return ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    int64_t  trim_dash_down1352 = ( (  pow1043 ) ( (  from_dash_integral290 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1353 = (  op_dash_div1051 ( ( ( * (  self1351 ) ) .f_int ) , (  trim_dash_down1352 ) ) );
    int64_t  upper_dash_mask1354 = (  op_dash_mul288 ( (  op_dash_div1051 ( (  upper1353 ) , (  from_dash_integral290 ( 10 ) ) ) ) , (  from_dash_integral290 ( 10 ) ) ) );
    uint8_t  digit1355 = ( ( (  cast1052 ) ( (  op_dash_sub1053 ( (  upper1353 ) , (  upper_dash_mask1354 ) ) ) ) ) );
    (*  self1351 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1356 = ( (  char_dash_from_dash_u81054 ) ( (  op_dash_add944 ( (  digit1355 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_299_Just ) ( (  digit_dash_char1356 ) ) );
}

static  struct Maybe_299   next1041 (    struct StrConcatIter_1033 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1042 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next1040 (    struct StrConcatIter_1032 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1041 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next1058 (    enum EmptyIter_1036 *  dref759 ) {
    return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
}

static  struct Maybe_299   next1057 (    struct AppendIter_1035 *  self1006 ) {
    struct Maybe_299  dref1007 = ( (  next1058 ) ( ( & ( ( * (  self1006 ) ) .f_it ) ) ) );
    if ( dref1007.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1007 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1007.tag == Maybe_299_None_t ) {
            if ( ( ! ( ( * (  self1006 ) ) .f_appended ) ) ) {
                (*  self1006 ) .f_appended = ( true );
                return ( ( Maybe_299_Just ) ( ( ( * (  self1006 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
        }
    }
}

static  struct Maybe_299   next1039 (    struct StrConcatIter_1031 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next1040 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1030 (    struct StrConcatIter_1031  iterable1058 ,    enum Unit_8 (*  fun1060 )(    struct Char_65  ) ) {
    struct StrConcatIter_1031  temp1037 = ( (  into_dash_iter1038 ) ( (  iterable1058 ) ) );
    struct StrConcatIter_1031 *  it1061 = ( &temp1037 );
    while ( ( true ) ) {
        struct Maybe_299  dref1062 = ( (  next1039 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_299_Just_t ) {
                ( (  fun1060 ) ( ( dref1062 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp1067 (    int64_t  l158 ,    int64_t  r160 ) {
    return ( builtin_int64_tcmp( (  l158 ) , (  r160 ) ) );
}

static  int64_t   op_dash_neg1068 (    int64_t  l213 ) {
    return ( (  from_dash_integral290 ( 0 ) ) - (  l213 ) );
}

static  bool   eq1070 (    int64_t  l105 ,    int64_t  r107 ) {
    return ( (  l105 ) == (  r107 ) );
}

static  int32_t   count_dash_digits1069 (    int64_t  self1359 ) {
    if ( (  eq1070 ( (  self1359 ) , (  from_dash_integral290 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1360 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp1067 ( (  self1359 ) , (  from_dash_integral290 ( 0 ) ) ) == 2 ) ) {
        self1359 = (  op_dash_div1051 ( (  self1359 ) , (  from_dash_integral290 ( 10 ) ) ) );
        digits1360 = (  op_dash_add159 ( (  digits1360 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1360 );
}

static  struct IntStrIter_1034   int_dash_iter1066 (    int64_t  int1363 ) {
    if ( (  cmp1067 ( (  int1363 ) , (  from_dash_integral290 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1034) { .f_int = (  op_dash_neg1068 ( (  int1363 ) ) ) , .f_len = ( (  count_dash_digits1069 ) ( (  op_dash_neg1068 ( (  int1363 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1034) { .f_int = (  int1363 ) , .f_len = ( (  count_dash_digits1069 ) ( (  int1363 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1034   chars1065 (    int64_t  self1760 ) {
    return ( (  int_dash_iter1066 ) ( (  self1760 ) ) );
}

static  struct StrConcatIter_1033   into_dash_iter1064 (    struct StrConcat_1025  dref1249 ) {
    return ( (struct StrConcatIter_1033) { .f_left = ( (  chars471 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1065 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_1033   chars1063 (    struct StrConcat_1025  self1260 ) {
    return ( (  into_dash_iter1064 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_1032   into_dash_iter1062 (    struct StrConcat_1027  dref1249 ) {
    return ( (struct StrConcatIter_1032) { .f_left = ( (  chars471 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1063 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_1032   chars1061 (    struct StrConcat_1027  self1260 ) {
    return ( (  into_dash_iter1062 ) ( (  self1260 ) ) );
}

static  enum EmptyIter_1036   into_dash_iter1075 (    enum EmptyIter_1036  self757 ) {
    return (  self757 );
}

static  struct AppendIter_1035   append1074 (    enum EmptyIter_1036  it990 ,    struct Char_65  e992 ) {
    return ( (struct AppendIter_1035) { .f_it = ( (  into_dash_iter1075 ) ( (  it990 ) ) ) , .f_elem = (  e992 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_1035   cons1073 (    enum EmptyIter_1036  it995 ,    struct Char_65  e997 ) {
    return ( (  append1074 ) ( (  it995 ) ,  (  e997 ) ) );
}

static  enum EmptyIter_1036   nil1076 (  ) {
    return ( EmptyIter_1036_EmptyIter );
}

static  struct AppendIter_1035   single1072 (    struct Char_65  e1000 ) {
    return ( (  cons1073 ) ( ( (  nil1076 ) ( ) ) ,  (  e1000 ) ) );
}

static  struct AppendIter_1035   chars1071 (    struct Char_65  self1238 ) {
    return ( (  single1072 ) ( (  self1238 ) ) );
}

static  struct StrConcatIter_1031   into_dash_iter1060 (    struct StrConcat_1029  dref1249 ) {
    return ( (struct StrConcatIter_1031) { .f_left = ( (  chars1061 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_1031   chars1059 (    struct StrConcat_1029  self1260 ) {
    return ( (  into_dash_iter1060 ) ( (  self1260 ) ) );
}

static  enum Unit_8   print1028 (    struct StrConcat_1029  s1287 ) {
    ( (  for_dash_each1030 ) ( ( (  chars1059 ) ( (  s1287 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1026 (    struct StrConcat_1027  s1290 ) {
    ( (  print1028 ) ( ( ( StrConcat_1029_StrConcat ) ( (  s1290 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_891   undefined1077 (  ) {
    enum MouseButton_891  temp1078;
    return (  temp1078 );
}

static  enum MouseButton_891   panic_prime_1024 (    struct StrConcat_1025  errmsg2084 ) {
    ( (  println1026 ) ( ( ( StrConcat_1027_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg2084 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1077 ) ( ) );
}

static  enum MouseButton_891   btn_dash_to_dash_mouse_dash_button1022 (    int64_t  btn3517 ) {
    return ( {  int32_t  dref3518 = ( (  i64_dash_i321023 ) ( (  btn3517 ) ) ) ;  eq570 (  dref3518 ,  from_dash_integral56 ( 0 ) ) ? ( MouseButton_891_MouseLeft ) :  eq570 (  dref3518 ,  from_dash_integral56 ( 1 ) ) ? ( MouseButton_891_MouseMiddle ) :  eq570 (  dref3518 ,  from_dash_integral56 ( 2 ) ) ? ( MouseButton_891_MouseRight ) :  eq570 (  dref3518 ,  from_dash_integral56 ( 64 ) ) ? ( MouseButton_891_ScrollUp ) :  eq570 (  dref3518 ,  from_dash_integral56 ( 65 ) ) ? ( MouseButton_891_ScrollDown ) : ( (  panic_prime_1024 ) ( ( ( StrConcat_1025_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3517 ) ) ) ) ) ; } );
}

static  struct Scanner_966   mk1080 (    struct StrView_27  s3317 ) {
    return ( (struct Scanner_966) { .f_s = ( (  into_dash_iter472 ) ( (  s3317 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_888   parse_dash_csi960 (    struct Slice_961  seq3524 ) {
    if ( (  eq409 ( ( (  seq3524 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    char  last3525 = (  elem_dash_get962 ( (  seq3524 ) , (  op_dash_sub291 ( ( (  seq3524 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq947 ( (  elem_dash_get962 ( (  seq3524 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) && ( (  eq947 ( (  last3525 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) || (  eq947 ( (  last3525 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_966  temp967 = ( (  mk_dash_from_dash_str968 ) ( ( (  substr969 ) ( ( (  from_dash_ascii_dash_slice975 ) ( (  seq3524 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3524 ) .f_count ) ) ) ) );
        struct Scanner_966 *  sc3526 = ( &temp967 );
        struct Maybe_978  dref3527 = ( (  scan_dash_int979 ) ( (  sc3526 ) ) );
        if ( dref3527.tag == Maybe_978_None_t ) {
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
        else {
            if ( dref3527.tag == Maybe_978_Just_t ) {
                ( (  next991 ) ( (  sc3526 ) ) );
                struct Maybe_978  dref3529 = ( (  scan_dash_int979 ) ( (  sc3526 ) ) );
                if ( dref3529.tag == Maybe_978_None_t ) {
                    return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
                }
                else {
                    if ( dref3529.tag == Maybe_978_Just_t ) {
                        ( (  next991 ) ( (  sc3526 ) ) );
                        struct Maybe_978  dref3531 = ( (  scan_dash_int979 ) ( (  sc3526 ) ) );
                        if ( dref3531.tag == Maybe_978_None_t ) {
                            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
                        }
                        else {
                            if ( dref3531.tag == Maybe_978_Just_t ) {
                                return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Mouse ) ( ( (struct MouseEvent_890) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1022 ) ( ( dref3527 .stuff .Maybe_978_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub164 ( ( (  i64_dash_i321023 ) ( ( dref3529 .stuff .Maybe_978_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub164 ( ( (  i64_dash_i321023 ) ( ( dref3531 .stuff .Maybe_978_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq947 ( (  last3525 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq409 ( ( (  seq3524 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq947 ( (  last3525 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Up_t } ) ) ) ) );
        }
        if ( (  eq947 ( (  last3525 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Down_t } ) ) ) ) );
        }
        if ( (  eq947 ( (  last3525 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Right_t } ) ) ) ) );
        }
        if ( (  eq947 ( (  last3525 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Left_t } ) ) ) ) );
        }
        if ( (  eq947 ( (  last3525 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Home_t } ) ) ) ) );
        }
        if ( (  eq947 ( (  last3525 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    if ( (  eq947 ( (  last3525 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_966  temp1079 = ( (  mk1080 ) ( ( (  from_dash_ascii_dash_slice975 ) ( (  seq3524 ) ) ) ) );
        struct Scanner_966 *  sc3533 = ( &temp1079 );
        struct Maybe_978  dref3534 = ( (  scan_dash_int979 ) ( (  sc3533 ) ) );
        if ( dref3534.tag == Maybe_978_None_t ) {
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
        else {
            if ( dref3534.tag == Maybe_978_Just_t ) {
                return ( {  int32_t  dref3536 = ( (  i64_dash_i321023 ) ( ( dref3534 .stuff .Maybe_978_Just_s .field0 ) ) ) ;  eq570 (  dref3536 ,  from_dash_integral56 ( 1 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Home_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 2 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Insert_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 3 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Delete_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 4 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_End_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 5 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_PageUp_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 6 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_PageDown_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 15 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_F5_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 17 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_F6_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 18 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_F7_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 19 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_F8_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 20 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_F9_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 21 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_F10_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 23 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_F11_t } ) ) ) ) ) :  eq570 (  dref3536 ,  from_dash_integral56 ( 24 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_F12_t } ) ) ) ) ) : ( (struct Maybe_888) { .tag = Maybe_888_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
}

static  struct Slice_961   subslice1081 (    struct Slice_961  slice2139 ,    size_t  from2141 ,    size_t  to2143 ) {
    char *  begin_dash_ptr2144 = ( (  offset_dash_ptr958 ) ( ( (  slice2139 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from2141 ) ) ) ) );
    if ( ( (  cmp292 ( (  from2141 ) , (  to2143 ) ) != 0 ) || (  cmp292 ( (  from2141 ) , ( (  slice2139 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_961) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2145 = (  op_dash_sub291 ( ( (  min478 ) ( (  to2143 ) ,  ( (  slice2139 ) .f_count ) ) ) , (  from2141 ) ) );
    return ( (struct Slice_961) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  count2145 ) } );
}

static  char *   cast1083 (    struct Array_948 *  x385 ) {
    return ( (char * ) (  x385 ) );
}

static  struct Slice_961   as_dash_slice1082 (    struct Array_948 *  arr1987 ) {
    return ( (struct Slice_961) { .f_ptr = ( (  cast1083 ) ( (  arr1987 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1085 {
    enum {
        Maybe_1085_None_t,
        Maybe_1085_Just_t,
    } tag;
    union {
        struct {
            struct Key_271  field0;
        } Maybe_1085_Just_s;
    } stuff;
};

static struct Maybe_1085 Maybe_1085_Just (  struct Key_271  field0 ) {
    return ( struct Maybe_1085 ) { .tag = Maybe_1085_Just_t, .stuff = { .Maybe_1085_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1085   parse_dash_ss31086 (    char  c3521 ) {
    if ( (  eq947 ( (  c3521 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_271) { .tag = Key_271_Up_t } ) ) );
    }
    if ( (  eq947 ( (  c3521 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_271) { .tag = Key_271_Down_t } ) ) );
    }
    if ( (  eq947 ( (  c3521 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_271) { .tag = Key_271_Right_t } ) ) );
    }
    if ( (  eq947 ( (  c3521 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_271) { .tag = Key_271_Left_t } ) ) );
    }
    if ( (  eq947 ( (  c3521 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_271) { .tag = Key_271_Home_t } ) ) );
    }
    if ( (  eq947 ( (  c3521 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_271) { .tag = Key_271_End_t } ) ) );
    }
    if ( (  eq947 ( (  c3521 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_271) { .tag = Key_271_F1_t } ) ) );
    }
    if ( (  eq947 ( (  c3521 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_271) { .tag = Key_271_F2_t } ) ) );
    }
    if ( (  eq947 ( (  c3521 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_271) { .tag = Key_271_F3_t } ) ) );
    }
    if ( (  eq947 ( (  c3521 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_271) { .tag = Key_271_F4_t } ) ) );
    }
    return ( (struct Maybe_1085) { .tag = Maybe_1085_None_t } );
}

static  struct Maybe_888   read_dash_key900 (  ) {
    char  temp901 = ( (  undefined902 ) ( ) );
    char *  ch3538 = ( &temp901 );
    struct Maybe_904  dref3539 = ( (  read_dash_byte905 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3539.tag == Maybe_904_None_t ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    else {
        if ( dref3539.tag == Maybe_904_Just_t ) {
            (*  ch3538 ) = ( dref3539 .stuff .Maybe_904_Just_s .field0 );
        }
    }
    if ( (  eq305 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3538 ) ) ) ) , (  from_dash_integral310 ( 13 ) ) ) ) ) {
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Enter_t } ) ) ) ) );
    }
    if ( (  eq305 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3538 ) ) ) ) , (  from_dash_integral310 ( 127 ) ) ) ) ) {
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp309 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3538 ) ) ) ) , (  from_dash_integral310 ( 27 ) ) ) == 0 ) && ( !  eq305 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3538 ) ) ) ) , (  from_dash_integral310 ( 9 ) ) ) ) ) ) {
        char  letter3541 = ( (  u8_dash_ascii912 ) ( ( (  u32_dash_u8144 ) ( ( (  u32_dash_or740 ) ( ( (  u8_dash_u32913 ) ( ( (  ascii_dash_u8493 ) ( ( * (  ch3538 ) ) ) ) ) ) ,  ( (  from_dash_hex917 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( ( Key_271_Ctrl ) ( (  letter3541 ) ) ) ) ) ) );
    }
    if ( ( !  eq305 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3538 ) ) ) ) , (  from_dash_integral310 ( 27 ) ) ) ) ) {
        if ( (  cmp309 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3538 ) ) ) ) , (  from_dash_integral310 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key900 ) ( ) );
        } else {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( ( Key_271_Char ) ( ( * (  ch3538 ) ) ) ) ) ) ) );
        }
    }
    char  temp946 = ( (  undefined902 ) ( ) );
    char *  ch23542 = ( &temp946 );
    struct Maybe_904  dref3543 = ( (  read_dash_byte905 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3543.tag == Maybe_904_None_t ) {
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3543.tag == Maybe_904_Just_t ) {
            (*  ch23542 ) = ( dref3543 .stuff .Maybe_904_Just_s .field0 );
        }
    }
    if ( (  eq947 ( ( * (  ch23542 ) ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_948  temp949 = ( ( (  zeroed950 ) ( ) ) );
        struct Array_948 *  seq3545 = ( &temp949 );
        int32_t  slen3546 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp157 ( (  slen3546 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp954 = ( (  undefined902 ) ( ) );
            char *  sc3547 = ( &temp954 );
            struct Maybe_904  dref3548 = ( (  read_dash_byte905 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3548.tag == Maybe_904_None_t ) {
                break;
            }
            else {
                if ( dref3548.tag == Maybe_904_Just_t ) {
                    (*  sc3547 ) = ( dref3548 .stuff .Maybe_904_Just_s .field0 );
                }
            }
            ( (  set955 ) ( (  seq3545 ) ,  ( (  i32_dash_size422 ) ( (  slen3546 ) ) ) ,  ( * (  sc3547 ) ) ) );
            slen3546 = (  op_dash_add159 ( (  slen3546 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp309 ( ( (  ascii_dash_u8493 ) ( ( * (  sc3547 ) ) ) ) , (  from_dash_integral310 ( 64 ) ) ) != 0 ) && (  cmp309 ( ( (  ascii_dash_u8493 ) ( ( * (  sc3547 ) ) ) ) , (  from_dash_integral310 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi960 ) ( ( (  subslice1081 ) ( ( (  as_dash_slice1082 ) ( (  seq3545 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size422 ) ( (  slen3546 ) ) ) ) ) ) );
    }
    if ( (  eq947 ( ( * (  ch23542 ) ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1084 = ( (  undefined902 ) ( ) );
        char *  sc3550 = ( &temp1084 );
        struct Maybe_904  dref3551 = ( (  read_dash_byte905 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3551.tag == Maybe_904_None_t ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3551.tag == Maybe_904_Just_t ) {
                (*  sc3550 ) = ( dref3551 .stuff .Maybe_904_Just_s .field0 );
            }
        }
        struct Maybe_1085  dref3553 = ( (  parse_dash_ss31086 ) ( ( * (  sc3550 ) ) ) );
        if ( dref3553.tag == Maybe_1085_None_t ) {
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
        else {
            if ( dref3553.tag == Maybe_1085_Just_t ) {
                return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( dref3553 .stuff .Maybe_1085_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_271) { .tag = Key_271_Escape_t } ) ) ) ) );
}

static  struct Maybe_888   read_dash_event897 (   struct env88* env ,    struct Tui_90 *  tui3563 ) {
    struct envunion89  temp898 = ( (struct envunion89){ .fun = (  bool  (*) (  struct env87*  ,    struct Tui_90 *  ) )update_dash_dimensions899 , .env =  env->envinst87 } );
    ( temp898.fun ( &temp898.env ,  (  tui3563 ) ) );
    struct Maybe_888  dref3564 = ( (  read_dash_key900 ) ( ) );
    if ( dref3564.tag == Maybe_888_None_t ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    else {
        if ( dref3564.tag == Maybe_888_Just_t ) {
            (*  tui3563 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_888_Just ) ( ( dref3564 .stuff .Maybe_888_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_888   lam895 (   struct env886* env ) {
    struct envunion887  temp896 = ( (struct envunion887){ .fun = (  struct Maybe_888  (*) (  struct env88*  ,    struct Tui_90 *  ) )read_dash_event897 , .env =  env->envinst88 } );
    return ( temp896.fun ( &temp896.env ,  ( env->tui4727 ) ) );
}

static  struct Maybe_888   next1088 (    struct FunIter_885 *  self1015 ) {
    if ( ( ( * (  self1015 ) ) .f_finished ) ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    struct envunion892  temp1089 = ( ( * (  self1015 ) ) .f_fun );
    struct Maybe_888  dref1016 = ( temp1089.fun ( &temp1089.env ) );
    if ( dref1016.tag == Maybe_888_Just_t ) {
        return ( ( Maybe_888_Just ) ( ( dref1016 .stuff .Maybe_888_Just_s .field0 ) ) );
    }
    else {
        if ( dref1016.tag == Maybe_888_None_t ) {
            (*  self1015 ) .f_finished = ( true );
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
    }
}

struct env1092 {
    struct Editor_250 *  ed4577;
    ;
};

struct envunion1093 {
    enum Unit_8  (*fun) (  struct env1092*  ,    struct StrView_27  );
    struct env1092 env;
};

static  enum Unit_8   if_dash_just1091 (    struct Maybe_78  x1553 ,   struct envunion1093  fun1555 ) {
    struct Maybe_78  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_78_Just_t ) {
        struct envunion1093  temp1094 = (  fun1555 );
        ( temp1094.fun ( &temp1094.env ,  ( dref1556 .stuff .Maybe_78_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_78_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1095 (   struct env1092* env ,    struct StrView_27  msg4579 ) {
    ( (  free559 ) ( (  msg4579 ) ,  ( ( * ( env->ed4577 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1090 (    struct Editor_250 *  ed4577 ) {
    struct env1092 envinst1092 = {
        .ed4577 =  ed4577 ,
    };
    ( (  if_dash_just1091 ) ( ( ( * (  ed4577 ) ) .f_msg ) ,  ( (struct envunion1093){ .fun = (  enum Unit_8  (*) (  struct env1092*  ,    struct StrView_27  ) )lam1095 , .env =  envinst1092 } ) ) );
    (*  ed4577 ) .f_msg = ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1097 {
    enum Unit_8  (*fun) (  struct env266*  ,    struct Editor_250 *  ,    struct Key_271  );
    struct env266 env;
};

enum CursorMovement_1103 {
    CursorMovement_1103_NoChanges,
    CursorMovement_1103_UpdateVI,
    CursorMovement_1103_OverrideSelect,
};

struct Tuple2_1105 {
    enum CursorMovement_1103  field0;
    enum CursorMovement_1103  field1;
};

static struct Tuple2_1105 Tuple2_1105_Tuple2 (  enum CursorMovement_1103  field0 ,  enum CursorMovement_1103  field1 ) {
    return ( struct Tuple2_1105 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1104 (    enum CursorMovement_1103  l4318 ,    enum CursorMovement_1103  r4320 ) {
    return ( {  struct Tuple2_1105  dref4321 = ( ( Tuple2_1105_Tuple2 ) ( (  l4318 ) ,  (  r4320 ) ) ) ;  dref4321 .field0 == CursorMovement_1103_NoChanges &&  dref4321 .field1 == CursorMovement_1103_NoChanges ? ( true ) :  dref4321 .field0 == CursorMovement_1103_UpdateVI &&  dref4321 .field1 == CursorMovement_1103_UpdateVI ? ( true ) :  dref4321 .field0 == CursorMovement_1103_OverrideSelect &&  dref4321 .field1 == CursorMovement_1103_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_27   from_dash_bytes1109 (    struct Slice_14  sl2505 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2505 ) } );
}

static  struct StrView_27   line1108 (    struct TextBuf_105 *  self3852 ,    int32_t  li3854 ) {
    return ( (  from_dash_bytes1109 ) ( ( (  to_dash_slice577 ) ( ( ( (  get575 ) ( ( & ( ( * (  self3852 ) ) .f_buf ) ) ,  ( (  i32_dash_size422 ) ( (  li3854 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe1112 (    struct Maybe_78  x1544 ,    int32_t (*  fun1546 )(    struct StrView_27  ) ,    int32_t  default1548 ) {
    return ( {  struct Maybe_78  dref1549 = (  x1544 ) ; dref1549.tag == Maybe_78_Just_t ? ( (  fun1546 ) ( ( dref1549 .stuff .Maybe_78_Just_s .field0 ) ) ) : (  default1548 ) ; } );
}

static  struct Maybe_78   char_dash_replacement1113 (    struct Char_65  c4198 ) {
    if ( (  eq480 ( (  c4198 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_78_Just ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
}

static  size_t   reduce1116 (    struct StrViewIter_469  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct StrViewIter_469  it1083 = ( (  into_dash_iter470 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1084 = ( (  next474 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_299_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_299_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1117 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1117);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1118;
    return (  temp1118 );
}

static  size_t   lam1119 (    struct Char_65  dref1089 ,    size_t  x1091 ) {
    return (  op_dash_add313 ( (  x1091 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1115 (    struct StrViewIter_469  it1088 ) {
    return ( (  reduce1116 ) ( (  it1088 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1119 ) ) );
}

static  int32_t   lam1114 (    struct StrView_27  s4203 ) {
    return ( (  size_dash_i32331 ) ( ( (  count1115 ) ( ( (  chars471 ) ( (  s4203 ) ) ) ) ) ) );
}

static  int32_t   max1121 (    int32_t  l1324 ,    int32_t  r1326 ) {
    if ( (  cmp157 ( (  l1324 ) , (  r1326 ) ) == 2 ) ) {
        return (  l1324 );
    } else {
        return (  r1326 );
    }
}

static  void *   cast_dash_ptr1127 (    wchar_t *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of1128 (    wchar_t  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  wchar_t   zeroed1125 (  ) {
    wchar_t  temp1126;
    wchar_t  x625 = (  temp1126 );
    ( ( memset ) ( ( (  cast_dash_ptr1127 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1128 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  char *   cast_dash_ptr1129 (    uint8_t *  p388 ) {
    return ( (char * ) (  p388 ) );
}

static  size_t   cast1130 (    int64_t  x385 ) {
    return ( (size_t ) (  x385 ) );
}

struct TypeSize_1133 {
    size_t  f_size;
};

static  struct TypeSize_1133   get_dash_typesize1132 (  ) {
    wchar_t  temp1134;
    return ( (struct TypeSize_1133) { .f_size = ( sizeof( ( (  temp1134 ) ) ) ) } );
}

static  wchar_t   cast1136 (    uint32_t  x385 ) {
    return ( (wchar_t ) (  x385 ) );
}

static  wchar_t   to_dash_c_dash_wchar1123 (    struct Char_65  c1423 ) {
    struct CharDestructured_341  dref1424 = ( (  destructure343 ) ( (  c1423 ) ) );
    if ( dref1424.tag == CharDestructured_341_Ref_t ) {
        wchar_t  temp1124 = ( (  zeroed1125 ) ( ) );
        wchar_t *  wcp1426 = ( &temp1124 );
        size_t  num_dash_chars1427 = ( ( mbstowcs ) ( (  wcp1426 ) ,  ( (  cast_dash_ptr1129 ) ( ( ( dref1424 .stuff .CharDestructured_341_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq409 ( (  num_dash_chars1427 ) , ( ( (  cast1130 ) ( ( (  op_dash_neg1068 ( (  from_dash_integral290 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1131 = ( (  from_dash_string57 ) ( ( (uint8_t*)"could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1131);
            abort ( );
            ( Unit_8_Unit );
        }
        return ( * (  wcp1426 ) );
    }
    else {
        if ( dref1424.tag == CharDestructured_341_Scalar_t ) {
            if ( ( ! (  eq409 ( ( (  size_dash_of825 ) ( ( ( dref1424 .stuff .CharDestructured_341_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1132 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1135 = ( (  from_dash_string57 ) ( ( (uint8_t*)"Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1135);
                abort ( );
                ( Unit_8_Unit );
            }
            return ( (  cast1136 ) ( ( ( dref1424 .stuff .CharDestructured_341_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1122 (    struct Char_65  c2631 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1123 ) ( (  c2631 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1120 (    struct Char_65  c3608 ) {
    return ( (  max1121 ) ( ( (  wcwidth1122 ) ( (  c3608 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width1111 (    struct Char_65  c4201 ) {
    return ( (  maybe1112 ) ( ( (  char_dash_replacement1113 ) ( (  c4201 ) ) ) ,  (  lam1114 ) ,  ( (  rendered_dash_wcwidth1120 ) ( (  c4201 ) ) ) ) );
}

static  int32_t   pos_dash_vi1106 (    struct TextBuf_105 *  self4217 ,    struct Pos_26  pos4219 ) {
    int32_t  bi4220 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4221 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_469  temp1107 =  into_dash_iter470 ( ( (  chars471 ) ( ( (  line1108 ) ( (  self4217 ) ,  ( (  pos4219 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_299  __cond1110 =  next474 (&temp1107);
        if (  __cond1110 .tag == 0 ) {
            break;
        }
        struct Char_65  c4223 =  __cond1110 .stuff .Maybe_299_Just_s .field0;
        bi4220 = (  op_dash_add159 ( (  bi4220 ) , ( (  size_dash_i32331 ) ( ( (  c4223 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp157 ( ( (  pos4219 ) .f_bi ) , (  bi4220 ) ) == 0 ) ) {
            break;
        }
        vi4221 = (  op_dash_add159 ( (  vi4221 ) , ( (  char_dash_screen_dash_width1111 ) ( (  c4223 ) ) ) ) );
    }
    return (  vi4221 );
}

struct Tuple2_1139 {
    enum Mode_222  field0;
    enum Mode_222  field1;
};

static struct Tuple2_1139 Tuple2_1139_Tuple2 (  enum Mode_222  field0 ,  enum Mode_222  field1 ) {
    return ( struct Tuple2_1139 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1138 (    enum Mode_222  l4177 ,    enum Mode_222  r4179 ) {
    return ( {  struct Tuple2_1139  dref4180 = ( ( Tuple2_1139_Tuple2 ) ( (  l4177 ) ,  (  r4179 ) ) ) ;  dref4180 .field0 == Mode_222_Normal &&  dref4180 .field1 == Mode_222_Normal ? ( true ) :  dref4180 .field0 == Mode_222_Insert &&  dref4180 .field1 == Mode_222_Insert ? ( true ) :  dref4180 .field0 == Mode_222_Select &&  dref4180 .field1 == Mode_222_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1137 (    struct Pane_221 *  self4307 ,    struct Maybe_34  sel4309 ) {
    if ( ( !  eq1138 ( ( ( * (  self4307 ) ) .f_mode ) , ( Mode_222_Select ) ) ) ) {
        (*  self4307 ) .f_sel = (  sel4309 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors1102 (    struct Pane_221 *  self4324 ,    struct Pos_26  cur4326 ,    struct Maybe_34  sel4328 ,    enum CursorMovement_1103  cursor_dash_movement_dash_type4330 ) {
    if ( ( !  eq1104 ( (  cursor_dash_movement_dash_type4330 ) , ( CursorMovement_1103_NoChanges ) ) ) ) {
        (*  self4324 ) .f_vi = ( (  pos_dash_vi1106 ) ( ( ( * (  self4324 ) ) .f_buf ) ,  (  cur4326 ) ) );
    }
    (*  self4324 ) .f_cursor = (  cur4326 );
    if ( ( !  eq1104 ( (  cursor_dash_movement_dash_type4330 ) , ( CursorMovement_1103_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1137 ) ( (  self4324 ) ,  (  sel4328 ) ) );
    } else {
        (*  self4324 ) .f_sel = (  sel4328 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1141 (    struct StrView_27  self2551 ) {
    return ( ( (  self2551 ) .f_contents ) .f_count );
}

static  size_t   clamp1142 (    size_t  x1600 ,    size_t  mn1602 ,    size_t  mx1604 ) {
    if ( (  cmp292 ( (  x1600 ) , (  mn1602 ) ) == 0 ) ) {
        return (  mn1602 );
    } else {
        if ( (  cmp292 ( (  x1600 ) , (  mx1604 ) ) == 2 ) ) {
            return (  mx1604 );
        } else {
            return (  x1600 );
        }
    }
}

static  size_t   sync_dash_char1144 (    uint8_t *  p1381 ) {
    size_t  i1382 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb1383 = ( * ( (uint8_t * ) ( ( (void*) (  p1381 ) ) + (  op_dash_neg1068 ( ( (  size_dash_i64304 ) ( (  i1382 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp309 ( (  pb1383 ) , (  from_dash_integral310 ( 128 ) ) ) != 0 ) && (  cmp309 ( (  pb1383 ) , (  op_dash_add944 ( (  from_dash_integral310 ( 128 ) ) , (  from_dash_integral310 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i1382 );
        }
        i1382 = (  op_dash_add313 ( (  i1382 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1143 (    uint8_t *  p1386 ) {
    return (  op_dash_add313 ( ( (  sync_dash_char1144 ) ( ( (  offset_dash_ptr302 ) ( (  p1386 ) ,  (  op_dash_neg1068 ( (  from_dash_integral290 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1140 (    struct TextBuf_105 *  self3873 ,    struct Pos_26  pos3875 ) {
    if ( (  eq569 ( (  pos3875 ) , ( (  mk706 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk706 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq570 ( ( (  pos3875 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert679 ) ( (  cmp157 ( ( (  pos3875 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk706 ) ( (  op_dash_sub164 ( ( (  pos3875 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( ( (  line1108 ) ( (  self3873 ) ,  (  op_dash_sub164 ( ( (  pos3875 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line3876 = ( (  line1108 ) ( (  self3873 ) ,  ( (  pos3875 ) .f_line ) ) );
    size_t  pos_dash_bi3877 = ( (  clamp1142 ) ( ( (  i32_dash_size422 ) ( ( (  pos3875 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1141 ) ( (  line3876 ) ) ) ) );
    size_t  off3878 = ( (  previous_dash_char1143 ) ( ( (  offset_dash_ptr302 ) ( ( ( (  line3876 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  pos_dash_bi3877 ) ) ) ) ) ) );
    return ( (  mk706 ) ( ( (  pos3875 ) .f_line ) ,  ( (  size_dash_i32331 ) ( (  op_dash_sub291 ( (  pos_dash_bi3877 ) , (  off3878 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1101 (    struct Pane_221 *  self4336 ) {
    ( (  set_dash_cursors1102 ) ( (  self4336 ) ,  ( (  left_dash_pos1140 ) ( ( ( * (  self4336 ) ) .f_buf ) ,  ( ( * (  self4336 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_221 *   pane1145 (    struct Editor_250 *  ed4567 ) {
    return ( & ( ( * (  ed4567 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1148 (    struct TextBuf_105 *  self3857 ) {
    return ( (  size_dash_i32331 ) ( ( (  size571 ) ( ( & ( ( * (  self3857 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1147 (    struct TextBuf_105 *  self3865 ,    struct Pos_26  pos3867 ) {
    if ( (  cmp157 ( ( (  pos3867 ) .f_line ) , ( (  num_dash_lines1148 ) ( (  self3865 ) ) ) ) != 0 ) ) {
        return ( (  mk706 ) ( ( (  num_dash_lines1148 ) ( (  self3865 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_27  line3868 = ( (  line1108 ) ( (  self3865 ) ,  ( (  pos3867 ) .f_line ) ) );
    int64_t  bi3869 = ( (  i32_dash_i641021 ) ( ( (  pos3867 ) .f_bi ) ) );
    if ( (  cmp1067 ( (  bi3869 ) , ( (  size_dash_i64304 ) ( ( (  num_dash_bytes1141 ) ( (  line3868 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp157 ( (  op_dash_add159 ( ( (  pos3867 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1148 ) ( (  self3865 ) ) ) ) != 0 ) ) {
            return ( (  mk706 ) ( ( (  pos3867 ) .f_line ) ,  ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  line3868 ) ) ) ) ) ) );
        }
        return ( (  mk706 ) ( (  op_dash_add159 ( ( (  pos3867 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off3870 = ( (  size_dash_i32331 ) ( ( (  next_dash_char308 ) ( ( (  offset_dash_ptr302 ) ( ( ( (  line3868 ) .f_contents ) .f_ptr ) ,  (  bi3869 ) ) ) ) ) ) );
    return ( (  mk706 ) ( ( (  pos3867 ) .f_line ) ,  (  op_dash_add159 ( ( (  pos3867 ) .f_bi ) , (  off3870 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1146 (    struct Pane_221 *  self4333 ) {
    ( (  set_dash_cursors1102 ) ( (  self4333 ) ,  ( (  right_dash_pos1147 ) ( ( ( * (  self4333 ) ) .f_buf ) ,  ( ( * (  self4333 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1150 (    struct TextBuf_105 *  self4206 ,    int32_t  ln4208 ,    int32_t  vx4210 ) {
    int32_t  bi4211 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4212 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_469  temp1151 =  into_dash_iter470 ( ( (  chars471 ) ( ( (  line1108 ) ( (  self4206 ) ,  (  ln4208 ) ) ) ) ) );
    while (true) {
        struct Maybe_299  __cond1152 =  next474 (&temp1151);
        if (  __cond1152 .tag == 0 ) {
            break;
        }
        struct Char_65  c4214 =  __cond1152 .stuff .Maybe_299_Just_s .field0;
        vi4212 = (  op_dash_add159 ( (  vi4212 ) , ( (  char_dash_screen_dash_width1111 ) ( (  c4214 ) ) ) ) );
        if ( (  cmp157 ( (  vx4210 ) , (  vi4212 ) ) == 0 ) ) {
            break;
        }
        bi4211 = (  op_dash_add159 ( (  bi4211 ) , ( (  size_dash_i32331 ) ( ( (  c4214 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4211 );
}

static  enum Unit_8   move_dash_down1149 (    struct Pane_221 *  self4339 ,    int32_t  amnt4341 ) {
    struct Pos_26  cur4342 = ( ( * (  self4339 ) ) .f_cursor );
    int32_t  nu_dash_line4343 = ( (  min670 ) ( (  op_dash_add159 ( ( (  cur4342 ) .f_line ) , (  amnt4341 ) ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1148 ) ( ( ( * (  self4339 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4344 = ( ( * (  self4339 ) ) .f_vi );
    int32_t  bi4345 = ( (  vi_dash_bi1150 ) ( ( ( * (  self4339 ) ) .f_buf ) ,  (  nu_dash_line4343 ) ,  (  vci4344 ) ) );
    ( (  set_dash_cursors1102 ) ( (  self4339 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4343 ) , .f_bi = (  bi4345 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1153 (    struct Pane_221 *  self4348 ,    int32_t  amnt4350 ) {
    struct Pos_26  cur4351 = ( ( * (  self4348 ) ) .f_cursor );
    int32_t  nu_dash_line4352 = ( (  max1121 ) ( (  op_dash_sub164 ( ( (  cur4351 ) .f_line ) , (  amnt4350 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4353 = ( ( * (  self4348 ) ) .f_vi );
    int32_t  bi4354 = ( (  vi_dash_bi1150 ) ( ( ( * (  self4348 ) ) .f_buf ) ,  (  nu_dash_line4352 ) ,  (  vci4353 ) ) );
    ( (  set_dash_cursors1102 ) ( (  self4348 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4352 ) , .f_bi = (  bi4354 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1155 (    struct TextBuf_105 *  self3966 ) {
    (*  self3966 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_107_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1154 (    struct Pane_221 *  self4312 ,    enum Mode_222  mode4314 ) {
    if ( (  eq1138 ( (  mode4314 ) , ( Mode_222_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1155 ) ( ( ( * (  self4312 ) ) .f_buf ) ) );
    }
    (*  self4312 ) .f_mode = (  mode4314 );
    return ( Unit_8_Unit );
}

struct TakeWhile_1160 {
    struct StrViewIter_469  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1159 {
    struct TakeWhile_1160  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1159 Map_1159_Map (  struct TakeWhile_1160  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1159 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1159   into_dash_iter1162 (    struct Map_1159  self763 ) {
    return (  self763 );
}

static  struct Maybe_299   next1164 (    struct TakeWhile_1160 *  self948 ) {
    struct Maybe_299  mx949 = ( (  next474 ) ( ( & ( ( * (  self948 ) ) .f_it ) ) ) );
    struct Maybe_299  dref950 = (  mx949 );
    if ( dref950.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref950.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self948 ) ) .f_pred ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct Maybe_248   next1163 (    struct Map_1159 *  dref765 ) {
    struct Maybe_299  dref768 = ( (  next1164 ) ( ( & ( (* dref765 ) .field0 ) ) ) );
    if ( dref768.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    else {
        if ( dref768.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_248_Just ) ( ( ( (* dref765 ) .field1 ) ( ( dref768 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1161 (    struct Map_1159  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    size_t  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct Map_1159  it1083 = ( (  into_dash_iter1162 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_248  dref1084 = ( (  next1163 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_248_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_248_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_248_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1165 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1165);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1166;
    return (  temp1166 );
}

static  size_t   lam1167 (    size_t  v1096 ,    size_t  s1098 ) {
    return (  op_dash_add313 ( (  v1096 ) , (  s1098 ) ) );
}

static  size_t   sum1158 (    struct Map_1159  it1094 ) {
    return ( (  reduce1161 ) ( (  it1094 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1167 ) ) );
}

static  struct TakeWhile_1160   into_dash_iter1169 (    struct TakeWhile_1160  self945 ) {
    return (  self945 );
}

static  struct Map_1159   map1168 (    struct TakeWhile_1160  iterable772 ,    size_t (*  fun774 )(    struct Char_65  ) ) {
    struct TakeWhile_1160  it775 = ( (  into_dash_iter1169 ) ( (  iterable772 ) ) );
    return ( ( Map_1159_Map ) ( (  it775 ) ,  (  fun774 ) ) );
}

static  struct TakeWhile_1160   take_dash_while1170 (    struct StrView_27  it954 ,    bool (*  pred956 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1160) { .f_it = ( (  into_dash_iter472 ) ( (  it954 ) ) ) , .f_pred = (  pred956 ) } );
}

static  bool   lam1171 (    struct Char_65  c4402 ) {
    return (  eq480 ( (  c4402 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1172 (    struct Char_65  c4404 ) {
    return ( (  c4404 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1157 (    struct Pane_221 *  pane4398 ,    int32_t  line4400 ) {
    return ( (  size_dash_i32331 ) ( ( (  sum1158 ) ( ( (  map1168 ) ( ( (  take_dash_while1170 ) ( ( (  line1108 ) ( ( ( * (  pane4398 ) ) .f_buf ) ,  (  line4400 ) ) ) ,  (  lam1171 ) ) ) ,  (  lam1172 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1156 (    struct Pane_221 *  self4417 ) {
    struct Pos_26  cur4418 = ( ( * (  self4417 ) ) .f_cursor );
    int32_t  indent4419 = ( (  indent_dash_at_dash_line1157 ) ( (  self4417 ) ,  ( (  cur4418 ) .f_line ) ) );
    struct Pos_26  temp1173 = (  cur4418 );
    temp1173 .  f_bi = (  indent4419 );
    ( (  set_dash_cursors1102 ) ( (  self4417 ) ,  ( temp1173 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1174 (    struct Pane_221 *  self4422 ) {
    struct Pos_26  cur4423 = ( ( * (  self4422 ) ) .f_cursor );
    struct Pos_26  temp1175 = (  cur4423 );
    temp1175 .  f_bi = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( ( (  line1108 ) ( ( ( * (  self4422 ) ) .f_buf ) ,  ( (  cur4423 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors1102 ) ( (  self4422 ) ,  ( temp1175 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct SliceIter_1183 {
    struct Slice_31  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1182 {
    struct SliceIter_1183  field0;
    size_t  field1;
};

static struct Drop_1182 Drop_1182_Drop (  struct SliceIter_1183  field0 ,  size_t  field1 ) {
    return ( struct Drop_1182 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1182   into_dash_iter1184 (    struct Drop_1182  self812 ) {
    return (  self812 );
}

static  struct SliceIter_1183   into_dash_iter1187 (    struct Slice_31  self2185 ) {
    return ( (struct SliceIter_1183) { .f_slice = (  self2185 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1189 (    struct Changeset_32 *  x367 ,    int64_t  count369 ) {
    struct Changeset_32  temp1190;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp1190 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1188 (    struct Slice_31  slice2139 ,    size_t  from2141 ,    size_t  to2143 ) {
    struct Changeset_32 *  begin_dash_ptr2144 = ( (  offset_dash_ptr1189 ) ( ( (  slice2139 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from2141 ) ) ) ) );
    if ( ( (  cmp292 ( (  from2141 ) , (  to2143 ) ) != 0 ) || (  cmp292 ( (  from2141 ) , ( (  slice2139 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2145 = (  op_dash_sub291 ( ( (  min478 ) ( (  to2143 ) ,  ( (  slice2139 ) .f_count ) ) ) , (  from2141 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  count2145 ) } );
}

static  struct SliceIter_1183   into_dash_iter1186 (    struct List_30  self2369 ) {
    return ( (  into_dash_iter1187 ) ( ( (  subslice1188 ) ( ( (  self2369 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2369 ) .f_count ) ) ) ) );
}

static  struct Drop_1182   drop1185 (    struct List_30  iterable819 ,    size_t  i821 ) {
    struct SliceIter_1183  it822 = ( (  into_dash_iter1186 ) ( (  iterable819 ) ) );
    return ( ( Drop_1182_Drop ) ( (  it822 ) ,  (  i821 ) ) );
}

struct Maybe_1192 {
    enum {
        Maybe_1192_None_t,
        Maybe_1192_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_32  field0;
        } Maybe_1192_Just_s;
    } stuff;
};

static struct Maybe_1192 Maybe_1192_Just (  struct Changeset_32  field0 ) {
    return ( struct Maybe_1192 ) { .tag = Maybe_1192_Just_t, .stuff = { .Maybe_1192_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1192   next1194 (    struct SliceIter_1183 *  self2191 ) {
    size_t  off2192 = ( ( * (  self2191 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2191 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1192) { .tag = Maybe_1192_None_t } );
    }
    struct Changeset_32  elem2193 = ( * ( (  offset_dash_ptr1189 ) ( ( ( ( * (  self2191 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2192 ) ) ) ) ) );
    (*  self2191 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1192_Just ) ( (  elem2193 ) ) );
}

static  struct Maybe_1192   next1193 (    struct Drop_1182 *  dref814 ) {
    while ( (  cmp292 ( ( (* dref814 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1194 ) ( ( & ( (* dref814 ) .field0 ) ) ) );
        (* dref814 ) .field1 = (  op_dash_sub291 ( ( (* dref814 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1194 ) ( ( & ( (* dref814 ) .field0 ) ) ) );
}

struct env1197 {
    ;
    enum CAllocator_10  al3805;
};

struct envunion1198 {
    enum Unit_8  (*fun) (  struct env1197*  ,    struct Action_25  );
    struct env1197 env;
};

struct SliceIter_1199 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1199   into_dash_iter1202 (    struct Slice_24  self2185 ) {
    return ( (struct SliceIter_1199) { .f_slice = (  self2185 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1204 (    struct Action_25 *  x367 ,    int64_t  count369 ) {
    struct Action_25  temp1205;
    return ( (struct Action_25 * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp1205 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1203 (    struct Slice_24  slice2139 ,    size_t  from2141 ,    size_t  to2143 ) {
    struct Action_25 *  begin_dash_ptr2144 = ( (  offset_dash_ptr1204 ) ( ( (  slice2139 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from2141 ) ) ) ) );
    if ( ( (  cmp292 ( (  from2141 ) , (  to2143 ) ) != 0 ) || (  cmp292 ( (  from2141 ) , ( (  slice2139 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2145 = (  op_dash_sub291 ( ( (  min478 ) ( (  to2143 ) ,  ( (  slice2139 ) .f_count ) ) ) , (  from2141 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  count2145 ) } );
}

static  struct SliceIter_1199   into_dash_iter1201 (    struct List_23  self2369 ) {
    return ( (  into_dash_iter1202 ) ( ( (  subslice1203 ) ( ( (  self2369 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2369 ) .f_count ) ) ) ) );
}

struct Maybe_1206 {
    enum {
        Maybe_1206_None_t,
        Maybe_1206_Just_t,
    } tag;
    union {
        struct {
            struct Action_25  field0;
        } Maybe_1206_Just_s;
    } stuff;
};

static struct Maybe_1206 Maybe_1206_Just (  struct Action_25  field0 ) {
    return ( struct Maybe_1206 ) { .tag = Maybe_1206_Just_t, .stuff = { .Maybe_1206_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1206   next1207 (    struct SliceIter_1199 *  self2191 ) {
    size_t  off2192 = ( ( * (  self2191 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2191 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1206) { .tag = Maybe_1206_None_t } );
    }
    struct Action_25  elem2193 = ( * ( (  offset_dash_ptr1204 ) ( ( ( ( * (  self2191 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2192 ) ) ) ) ) );
    (*  self2191 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1206_Just ) ( (  elem2193 ) ) );
}

static  enum Unit_8   for_dash_each1196 (    struct List_23  iterable1058 ,   struct envunion1198  fun1060 ) {
    struct SliceIter_1199  temp1200 = ( (  into_dash_iter1201 ) ( (  iterable1058 ) ) );
    struct SliceIter_1199 *  it1061 = ( &temp1200 );
    while ( ( true ) ) {
        struct Maybe_1206  dref1062 = ( (  next1207 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_1206_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_1206_Just_t ) {
                struct envunion1198  temp1208 = (  fun1060 );
                ( temp1208.fun ( &temp1208.env ,  ( dref1062 .stuff .Maybe_1206_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1210 (    struct Action_25  action3798 ,    enum CAllocator_10  al3800 ) {
    ( (  free559 ) ( ( (  action3798 ) .f_fwd ) ,  (  al3800 ) ) );
    ( (  free559 ) ( ( (  action3798 ) .f_bwd ) ,  (  al3800 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1209 (   struct env1197* env ,    struct Action_25  a3807 ) {
    return ( (  free_dash_action1210 ) ( (  a3807 ) ,  ( env->al3805 ) ) );
}

static  void *   cast_dash_ptr1213 (    struct Action_25 *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  enum Unit_8   free1212 (    enum CAllocator_10  dref2309 ,    struct Slice_24  slice2311 ) {
    if (!(  dref2309 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1213 ) ( ( (  slice2311 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1211 (    struct List_23 *  list2376 ) {
    ( (  free1212 ) ( ( ( * (  list2376 ) ) .f_al ) ,  ( ( * (  list2376 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1195 (    struct Changeset_32  chs3803 ,    enum CAllocator_10  al3805 ) {
    struct env1197 envinst1197 = {
        .al3805 =  al3805 ,
    };
    ( (  for_dash_each1196 ) ( ( (  chs3803 ) .f_parts ) ,  ( (struct envunion1198){ .fun = (  enum Unit_8  (*) (  struct env1197*  ,    struct Action_25  ) )lam1209 , .env =  envinst1197 } ) ) );
    ( (  free1211 ) ( ( & ( (  chs3803 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1214 (    struct List_30 *  l2456 ,    size_t  new_dash_count2458 ) {
    (*  l2456 ) .f_count = ( (  min478 ) ( (  new_dash_count2458 ) ,  ( ( * (  l2456 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1180 (    struct Actions_106 *  actions3821 ) {
    enum CAllocator_10  al3822 = ( ( ( * (  actions3821 ) ) .f_list ) .f_al );
    size_t  cur3823 = ( ( * (  actions3821 ) ) .f_cur );
    struct Drop_1182  temp1181 =  into_dash_iter1184 ( ( (  drop1185 ) ( ( ( * (  actions3821 ) ) .f_list ) ,  (  cur3823 ) ) ) );
    while (true) {
        struct Maybe_1192  __cond1191 =  next1193 (&temp1181);
        if (  __cond1191 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action3825 =  __cond1191 .stuff .Maybe_1192_Just_s .field0;
        ( (  free_dash_changeset1195 ) ( (  action3825 ) ,  (  al3822 ) ) );
    }
    ( (  trim1214 ) ( ( & ( ( * (  actions3821 ) ) .f_list ) ) ,  (  cur3823 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1215 (    struct StrView_27  s2518 ,    enum CAllocator_10  al2520 ) {
    return ( (  clone_dash_0517 ) ( (  s2518 ) ,  (  al2520 ) ) );
}

static  struct Maybe_78   head1217 (    struct SplitIter_611  it1126 ) {
    struct SplitIter_611  temp1218 = ( (  into_dash_iter618 ) ( (  it1126 ) ) );
    return ( (  next627 ) ( ( &temp1218 ) ) );
}

static  struct Maybe_78   head1220 (    struct Drop_610  it1126 ) {
    struct Drop_610  temp1221 = ( (  into_dash_iter616 ) ( (  it1126 ) ) );
    return ( (  next626 ) ( ( &temp1221 ) ) );
}

static  bool   null1219 (    struct Drop_610  it1135 ) {
    struct Maybe_78  dref1136 = ( (  head1220 ) ( (  it1135 ) ) );
    if ( dref1136.tag == Maybe_78_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1223 (    struct StrView_27  errmsg1295 ) {
    ( (  print_dash_str680 ) ( ( ( StrConcat_681_StrConcat ) ( ( ( StrConcat_682_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1295 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_624   undefined1224 (  ) {
    struct Tuple2_624  temp1225;
    return (  temp1225 );
}

static  struct Tuple2_624   or_dash_fail1222 (    struct Maybe_623  x1305 ,    struct StrView_27  errmsg1307 ) {
    struct Maybe_623  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_623_None_t ) {
        ( (  panic1223 ) ( (  errmsg1307 ) ) );
        return ( (  undefined1224 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_623_Just_t ) {
            return ( dref1308 .stuff .Maybe_623_Just_s .field0 );
        }
    }
}

static  struct Maybe_623   reduce1227 (    struct Zip_609  iterable1077 ,    struct Maybe_623  base1079 ,    struct Maybe_623 (*  fun1081 )(    struct Tuple2_624  ,    struct Maybe_623  ) ) {
    struct Maybe_623  x1082 = (  base1079 );
    struct Zip_609  it1083 = ( (  into_dash_iter614 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_623  dref1084 = ( (  next625 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_623_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_623_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_623_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1228 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1228);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_623  temp1229;
    return (  temp1229 );
}

static  struct Maybe_623   lam1230 (    struct Tuple2_624  e1131 ,    struct Maybe_623  dref1132 ) {
    return ( ( Maybe_623_Just ) ( (  e1131 ) ) );
}

static  struct Maybe_623   last1226 (    struct Zip_609  it1129 ) {
    return ( (  reduce1227 ) ( (  it1129 ) ,  ( (struct Maybe_623) { .tag = Maybe_623_None_t } ) ,  (  lam1230 ) ) );
}

static  int32_t   snd1231 (    struct Tuple2_624  dref1518 ) {
    return ( dref1518 .field1 );
}

static  struct StrView_27   fst1232 (    struct Tuple2_624  dref1515 ) {
    return ( dref1515 .field0 );
}

static  struct Pos_26   pos_dash_after_dash_str1216 (    struct TextBuf_105 *  self3954 ,    struct StrView_27  bytes3956 ,    struct Pos_26  from3958 ) {
    struct SplitIter_611  lines3959 = ( (  split_dash_by_dash_each619 ) ( (  bytes3956 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line3960 = ( (  or_dash_else601 ) ( ( (  head1217 ) ( (  lines3959 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    struct Drop_610  headless3961 = ( (  drop617 ) ( (  lines3959 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1219 ) ( (  headless3961 ) ) ) ) {
        struct Pos_26  next_dash_pos3962 = ( (  mk706 ) ( ( (  from3958 ) .f_line ) ,  (  op_dash_add159 ( ( (  from3958 ) .f_bi ) , ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  first_dash_line3960 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3962 );
    } else {
        struct Tuple2_624  last_dash_line3963 = ( (  or_dash_fail1222 ) ( ( (  last1226 ) ( ( (  zip615 ) ( (  headless3961 ) ,  ( (  from437 ) ( (  op_dash_add159 ( ( (  from3958 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk706 ) ( ( (  snd1231 ) ( (  last_dash_line3963 ) ) ) ,  ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( ( (  fst1232 ) ( (  last_dash_line3963 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1238 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_27   from_dash_charlike1239 (    uint8_t *  ptr81 ,    size_t  count83 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr81 ) , .f_count = (  count83 ) } ) } );
}

struct envunion1243 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1245 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1247 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_27   str_dash_between1234 (   struct env125* env ,    struct TextBuf_105 *  self3986 ,    struct Pos_26  from3988 ,    struct Pos_26  to3990 ) {
    enum CAllocator_10  al3991 = ( ( ( * (  self3986 ) ) .f_buf ) .f_al );
    if ( (  eq570 ( ( (  from3988 ) .f_line ) , ( (  to3990 ) .f_line ) ) ) ) {
        if ( (  eq570 ( ( (  from3988 ) .f_line ) , ( (  num_dash_lines1148 ) ( (  self3986 ) ) ) ) ) ) {
            return ( (  clone1215 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  (  al3991 ) ) );
        }
        size_t  from_dash_bi3992 = ( (  i32_dash_size422 ) ( ( (  min670 ) ( ( (  from3988 ) .f_bi ) ,  ( (  to3990 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3993 = ( (  i32_dash_size422 ) ( ( (  max1121 ) ( ( (  from3988 ) .f_bi ) ,  ( (  to3990 ) .f_bi ) ) ) ) );
        return ( (  clone1215 ) ( ( (  byte_dash_substr496 ) ( ( (  line1108 ) ( (  self3986 ) ,  ( (  from3988 ) .f_line ) ) ) ,  (  from_dash_bi3992 ) ,  (  to_dash_bi3993 ) ) ) ,  (  al3991 ) ) );
    } else {
        struct Pos_26  from_dash_pos3994 = ( (  min566 ) ( (  from3988 ) ,  (  to3990 ) ) );
        struct Pos_26  to_dash_pos3995 = ( (  max568 ) ( (  from3988 ) ,  (  to3990 ) ) );
        struct List_13  temp1235 = ( (  mk450 ) ( (  al3991 ) ) );
        struct List_13 *  sb3996 = ( &temp1235 );
        struct StrView_27  first_dash_line3997 = ( (  line1108 ) ( (  self3986 ) ,  ( (  from_dash_pos3994 ) .f_line ) ) );
        struct envunion126  temp1236 = ( (struct envunion126){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all583 , .env =  env->envinst48 } );
        ( temp1236.fun ( &temp1236.env ,  (  sb3996 ) ,  ( ( (  byte_dash_substr496 ) ( (  first_dash_line3997 ) ,  ( (  i32_dash_size422 ) ( ( (  from_dash_pos3994 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1141 ) ( (  first_dash_line3997 ) ) ) ) ) .f_contents ) ) );
        struct envunion1238  temp1237 = ( (struct envunion1238){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all583 , .env =  env->envinst48 } );
        ( temp1237.fun ( &temp1237.env ,  (  sb3996 ) ,  ( ( ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_153  temp1240 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( ( (  from_dash_pos3994 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub164 ( ( (  to_dash_pos3995 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_155  __cond1241 =  next156 (&temp1240);
            if (  __cond1241 .tag == 0 ) {
                break;
            }
            int32_t  i3999 =  __cond1241 .stuff .Maybe_155_Just_s .field0;
            struct envunion1243  temp1242 = ( (struct envunion1243){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all583 , .env =  env->envinst48 } );
            ( temp1242.fun ( &temp1242.env ,  (  sb3996 ) ,  ( ( (  line1108 ) ( (  self3986 ) ,  (  i3999 ) ) ) .f_contents ) ) );
            struct envunion1245  temp1244 = ( (struct envunion1245){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all583 , .env =  env->envinst48 } );
            ( temp1244.fun ( &temp1244.env ,  (  sb3996 ) ,  ( ( ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1247  temp1246 = ( (struct envunion1247){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all583 , .env =  env->envinst48 } );
        ( temp1246.fun ( &temp1246.env ,  (  sb3996 ) ,  ( ( (  byte_dash_substr496 ) ( ( (  line1108 ) ( (  self3986 ) ,  ( (  to_dash_pos3995 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size422 ) ( ( (  to_dash_pos3995 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes1109 ) ( ( (  to_dash_slice577 ) ( ( * (  sb3996 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1248 (    struct Maybe_208  m1526 ) {
    struct Maybe_208  dref1527 = (  m1526 );
    if ( dref1527.tag == Maybe_208_None_t ) {
        return ( true );
    }
    else {
        if ( dref1527.tag == Maybe_208_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1250 {
    enum ChangesetInputType_107  field0;
    enum ChangesetInputType_107  field1;
};

static struct Tuple2_1250 Tuple2_1250_Tuple2 (  enum ChangesetInputType_107  field0 ,  enum ChangesetInputType_107  field1 ) {
    return ( struct Tuple2_1250 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1249 (    enum ChangesetInputType_107  l3811 ,    enum ChangesetInputType_107  r3813 ) {
    return ( {  struct Tuple2_1250  dref3814 = ( ( Tuple2_1250_Tuple2 ) ( (  l3811 ) ,  (  r3813 ) ) ) ;  dref3814 .field0 == ChangesetInputType_107_NoChangeset &&  dref3814 .field1 == ChangesetInputType_107_NoChangeset ? ( true ) :  dref3814 .field0 == ChangesetInputType_107_InputChangeset &&  dref3814 .field1 == ChangesetInputType_107_InputChangeset ? ( true ) :  dref3814 .field0 == ChangesetInputType_107_CustomChangeset &&  dref3814 .field1 == ChangesetInputType_107_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1252 (    struct Slice_31  slice2105 ,    size_t  i2107 ) {
    if ( ( (  cmp292 ( (  i2107 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2107 ) , ( (  slice2105 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2107 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2105 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr2108 = ( (  offset_dash_ptr1189 ) ( ( (  slice2105 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2107 ) ) ) ) );
    return (  elem_dash_ptr2108 );
}

static  struct Changeset_32 *   last_dash_ptr1251 (    struct Slice_31  s2296 ) {
    if ( (  eq409 ( ( (  s2296 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1223 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1252 ) ( (  s2296 ) ,  (  op_dash_sub291 ( ( (  s2296 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1253 (    struct List_30  l2467 ) {
    struct Changeset_32 *  ptr2468 = ( ( (  l2467 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2468 ) , .f_count = ( (  l2467 ) .f_count ) } );
}

struct envunion1255 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1261 {
    size_t  f_size;
};

static  struct TypeSize_1261   get_dash_typesize1260 (  ) {
    struct Action_25  temp1262;
    return ( (struct TypeSize_1261) { .f_size = ( sizeof( ( (  temp1262 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1263 (    void *  p388 ) {
    return ( (struct Action_25 * ) (  p388 ) );
}

static  struct Slice_24   allocate1259 (    enum CAllocator_10  dref2303 ,    size_t  count2305 ) {
    if (!(  dref2303 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2306 = ( ( ( (  get_dash_typesize1260 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr2307 = ( (  cast_dash_ptr1263 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2306 ) , (  count2305 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr2307 ) , .f_count = (  count2305 ) } );
}

struct env1264 {
    ;
    ;
    struct Slice_24  new_dash_slice2383;
};

struct Tuple2_1266 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1266 Tuple2_1266_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1266 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1265 {
    enum Unit_8  (*fun) (  struct env1264*  ,    struct Tuple2_1266  );
    struct env1264 env;
};

static  struct Action_25 *   get_dash_ptr1269 (    struct Slice_24  slice2105 ,    size_t  i2107 ) {
    if ( ( (  cmp292 ( (  i2107 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2107 ) , ( (  slice2105 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2107 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2105 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr2108 = ( (  offset_dash_ptr1204 ) ( ( (  slice2105 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2107 ) ) ) ) );
    return (  elem_dash_ptr2108 );
}

static  enum Unit_8   set1268 (    struct Slice_24  slice2122 ,    size_t  i2124 ,    struct Action_25  x2126 ) {
    struct Action_25 *  ep2127 = ( (  get_dash_ptr1269 ) ( (  slice2122 ) ,  (  i2124 ) ) );
    (*  ep2127 ) = (  x2126 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1267 (   struct env1264* env ,    struct Tuple2_1266  dref2384 ) {
    return ( (  set1268 ) ( ( env->new_dash_slice2383 ) ,  ( (  i32_dash_size422 ) ( ( dref2384 .field1 ) ) ) ,  ( dref2384 .field0 ) ) );
}

struct Zip_1271 {
    struct SliceIter_1199  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

static  struct Zip_1271   into_dash_iter1273 (    struct Zip_1271  self895 ) {
    return (  self895 );
}

struct Maybe_1274 {
    enum {
        Maybe_1274_None_t,
        Maybe_1274_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1266  field0;
        } Maybe_1274_Just_s;
    } stuff;
};

static struct Maybe_1274 Maybe_1274_Just (  struct Tuple2_1266  field0 ) {
    return ( struct Maybe_1274 ) { .tag = Maybe_1274_Just_t, .stuff = { .Maybe_1274_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1274   next1275 (    struct Zip_1271 *  self898 ) {
    struct Zip_1271  copy899 = ( * (  self898 ) );
    while ( ( true ) ) {
        struct Maybe_1206  dref900 = ( (  next1207 ) ( ( & ( (  copy899 ) .f_left_dash_it ) ) ) );
        if ( dref900.tag == Maybe_1206_None_t ) {
            return ( (struct Maybe_1274) { .tag = Maybe_1274_None_t } );
        }
        else {
            if ( dref900.tag == Maybe_1206_Just_t ) {
                struct Maybe_155  dref902 = ( (  next432 ) ( ( & ( (  copy899 ) .f_right_dash_it ) ) ) );
                if ( dref902.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_1274) { .tag = Maybe_1274_None_t } );
                }
                else {
                    if ( dref902.tag == Maybe_155_Just_t ) {
                        ( (  next1207 ) ( ( & ( ( * (  self898 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self898 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1274_Just ) ( ( ( Tuple2_1266_Tuple2 ) ( ( dref900 .stuff .Maybe_1206_Just_s .field0 ) ,  ( dref902 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1270 (    struct Zip_1271  iterable1058 ,   struct envunion1265  fun1060 ) {
    struct Zip_1271  temp1272 = ( (  into_dash_iter1273 ) ( (  iterable1058 ) ) );
    struct Zip_1271 *  it1061 = ( &temp1272 );
    while ( ( true ) ) {
        struct Maybe_1274  dref1062 = ( (  next1275 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_1274_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_1274_Just_t ) {
                struct envunion1265  temp1276 = (  fun1060 );
                ( temp1276.fun ( &temp1276.env ,  ( dref1062 .stuff .Maybe_1274_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1271   zip1277 (    struct Slice_24  left906 ,    struct FromIter_426  right908 ) {
    struct SliceIter_1199  left_dash_it909 = ( (  into_dash_iter1202 ) ( (  left906 ) ) );
    struct FromIter_426  right_dash_it910 = ( (  into_dash_iter436 ) ( (  right908 ) ) );
    return ( (struct Zip_1271) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1258 (   struct env3* env ,    struct List_23 *  list2382 ) {
    if ( (  eq409 ( ( ( * (  list2382 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2382 ) .f_elements = ( (  allocate1259 ) ( ( ( * (  list2382 ) ) .f_al ) ,  ( env->starting_dash_size2377 ) ) );
    } else {
        if ( (  eq409 ( ( ( * (  list2382 ) ) .f_count ) , ( ( ( * (  list2382 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2383 = ( (  allocate1259 ) ( ( ( * (  list2382 ) ) .f_al ) ,  (  op_dash_mul415 ( ( ( * (  list2382 ) ) .f_count ) , ( env->growth_dash_factor2378 ) ) ) ) );
            struct env1264 envinst1264 = {
                .new_dash_slice2383 =  new_dash_slice2383 ,
            };
            struct envunion1265  fun2387 = ( (struct envunion1265){ .fun = (  enum Unit_8  (*) (  struct env1264*  ,    struct Tuple2_1266  ) )lam1267 , .env =  envinst1264 } );
            ( (  for_dash_each1270 ) ( ( (  zip1277 ) ( ( ( * (  list2382 ) ) .f_elements ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2387 ) ) );
            ( (  free1212 ) ( ( ( * (  list2382 ) ) .f_al ) ,  ( ( * (  list2382 ) ) .f_elements ) ) );
            (*  list2382 ) .f_elements = (  new_dash_slice2383 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1256 (   struct env21* env ,    struct List_23 *  list2390 ,    struct Action_25  elem2392 ) {
    struct envunion22  temp1257 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1258 , .env =  env->envinst3 } );
    ( temp1257.fun ( &temp1257.env ,  (  list2390 ) ) );
    ( (  set1268 ) ( ( ( * (  list2390 ) ) .f_elements ) ,  ( ( * (  list2390 ) ) .f_count ) ,  (  elem2392 ) ) );
    (*  list2390 ) .f_count = (  op_dash_add313 ( ( ( * (  list2390 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1284 (    struct Action_25 * *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of1285 (    struct Action_25 *  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  struct Action_25 *   zeroed1282 (  ) {
    struct Action_25 *  temp1283;
    struct Action_25 *  x625 = (  temp1283 );
    ( ( memset ) ( ( (  cast_dash_ptr1284 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1285 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  struct Action_25 *   null_dash_ptr1281 (  ) {
    return ( (  zeroed1282 ) ( ) );
}

static  struct Slice_24   empty1280 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1281 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1279 (    enum CAllocator_10  al2372 ) {
    struct Slice_24  elements2373 = ( (  empty1280 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2372 ) , .f_elements = (  elements2373 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1286 (    struct Maybe_208  self1312 ,    struct Cursors_33  alt1314 ) {
    struct Maybe_208  dref1315 = (  self1312 );
    if ( dref1315.tag == Maybe_208_None_t ) {
        return (  alt1314 );
    }
    else {
        if ( dref1315.tag == Maybe_208_Just_t ) {
            return ( dref1315 .stuff .Maybe_208_Just_s .field0 );
        }
    }
}

struct TypeSize_1294 {
    size_t  f_size;
};

static  struct TypeSize_1294   get_dash_typesize1293 (  ) {
    struct Changeset_32  temp1295;
    return ( (struct TypeSize_1294) { .f_size = ( sizeof( ( (  temp1295 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1296 (    void *  p388 ) {
    return ( (struct Changeset_32 * ) (  p388 ) );
}

static  struct Slice_31   allocate1292 (    enum CAllocator_10  dref2303 ,    size_t  count2305 ) {
    if (!(  dref2303 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2306 = ( ( ( (  get_dash_typesize1293 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr2307 = ( (  cast_dash_ptr1296 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2306 ) , (  count2305 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr2307 ) , .f_count = (  count2305 ) } );
}

struct env1297 {
    ;
    ;
    struct Slice_31  new_dash_slice2383;
};

struct Tuple2_1299 {
    struct Changeset_32  field0;
    int32_t  field1;
};

static struct Tuple2_1299 Tuple2_1299_Tuple2 (  struct Changeset_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1299 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1298 {
    enum Unit_8  (*fun) (  struct env1297*  ,    struct Tuple2_1299  );
    struct env1297 env;
};

static  enum Unit_8   set1301 (    struct Slice_31  slice2122 ,    size_t  i2124 ,    struct Changeset_32  x2126 ) {
    struct Changeset_32 *  ep2127 = ( (  get_dash_ptr1252 ) ( (  slice2122 ) ,  (  i2124 ) ) );
    (*  ep2127 ) = (  x2126 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1300 (   struct env1297* env ,    struct Tuple2_1299  dref2384 ) {
    return ( (  set1301 ) ( ( env->new_dash_slice2383 ) ,  ( (  i32_dash_size422 ) ( ( dref2384 .field1 ) ) ) ,  ( dref2384 .field0 ) ) );
}

struct Zip_1303 {
    struct SliceIter_1183  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

static  struct Zip_1303   into_dash_iter1305 (    struct Zip_1303  self895 ) {
    return (  self895 );
}

struct Maybe_1306 {
    enum {
        Maybe_1306_None_t,
        Maybe_1306_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1299  field0;
        } Maybe_1306_Just_s;
    } stuff;
};

static struct Maybe_1306 Maybe_1306_Just (  struct Tuple2_1299  field0 ) {
    return ( struct Maybe_1306 ) { .tag = Maybe_1306_Just_t, .stuff = { .Maybe_1306_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1306   next1307 (    struct Zip_1303 *  self898 ) {
    struct Zip_1303  copy899 = ( * (  self898 ) );
    while ( ( true ) ) {
        struct Maybe_1192  dref900 = ( (  next1194 ) ( ( & ( (  copy899 ) .f_left_dash_it ) ) ) );
        if ( dref900.tag == Maybe_1192_None_t ) {
            return ( (struct Maybe_1306) { .tag = Maybe_1306_None_t } );
        }
        else {
            if ( dref900.tag == Maybe_1192_Just_t ) {
                struct Maybe_155  dref902 = ( (  next432 ) ( ( & ( (  copy899 ) .f_right_dash_it ) ) ) );
                if ( dref902.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_1306) { .tag = Maybe_1306_None_t } );
                }
                else {
                    if ( dref902.tag == Maybe_155_Just_t ) {
                        ( (  next1194 ) ( ( & ( ( * (  self898 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self898 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1306_Just ) ( ( ( Tuple2_1299_Tuple2 ) ( ( dref900 .stuff .Maybe_1192_Just_s .field0 ) ,  ( dref902 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1302 (    struct Zip_1303  iterable1058 ,   struct envunion1298  fun1060 ) {
    struct Zip_1303  temp1304 = ( (  into_dash_iter1305 ) ( (  iterable1058 ) ) );
    struct Zip_1303 *  it1061 = ( &temp1304 );
    while ( ( true ) ) {
        struct Maybe_1306  dref1062 = ( (  next1307 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_1306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_1306_Just_t ) {
                struct envunion1298  temp1308 = (  fun1060 );
                ( temp1308.fun ( &temp1308.env ,  ( dref1062 .stuff .Maybe_1306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1303   zip1309 (    struct Slice_31  left906 ,    struct FromIter_426  right908 ) {
    struct SliceIter_1183  left_dash_it909 = ( (  into_dash_iter1187 ) ( (  left906 ) ) );
    struct FromIter_426  right_dash_it910 = ( (  into_dash_iter436 ) ( (  right908 ) ) );
    return ( (struct Zip_1303) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

static  void *   cast_dash_ptr1311 (    struct Changeset_32 *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  enum Unit_8   free1310 (    enum CAllocator_10  dref2309 ,    struct Slice_31  slice2311 ) {
    if (!(  dref2309 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1311 ) ( ( (  slice2311 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1291 (   struct env4* env ,    struct List_30 *  list2382 ) {
    if ( (  eq409 ( ( ( * (  list2382 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2382 ) .f_elements = ( (  allocate1292 ) ( ( ( * (  list2382 ) ) .f_al ) ,  ( env->starting_dash_size2377 ) ) );
    } else {
        if ( (  eq409 ( ( ( * (  list2382 ) ) .f_count ) , ( ( ( * (  list2382 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2383 = ( (  allocate1292 ) ( ( ( * (  list2382 ) ) .f_al ) ,  (  op_dash_mul415 ( ( ( * (  list2382 ) ) .f_count ) , ( env->growth_dash_factor2378 ) ) ) ) );
            struct env1297 envinst1297 = {
                .new_dash_slice2383 =  new_dash_slice2383 ,
            };
            struct envunion1298  fun2387 = ( (struct envunion1298){ .fun = (  enum Unit_8  (*) (  struct env1297*  ,    struct Tuple2_1299  ) )lam1300 , .env =  envinst1297 } );
            ( (  for_dash_each1302 ) ( ( (  zip1309 ) ( ( ( * (  list2382 ) ) .f_elements ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2387 ) ) );
            ( (  free1310 ) ( ( ( * (  list2382 ) ) .f_al ) ,  ( ( * (  list2382 ) ) .f_elements ) ) );
            (*  list2382 ) .f_elements = (  new_dash_slice2383 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1289 (   struct env28* env ,    struct List_30 *  list2390 ,    struct Changeset_32  elem2392 ) {
    struct envunion29  temp1290 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1291 , .env =  env->envinst4 } );
    ( temp1290.fun ( &temp1290.env ,  (  list2390 ) ) );
    ( (  set1301 ) ( ( ( * (  list2390 ) ) .f_elements ) ,  ( ( * (  list2390 ) ) .f_count ) ,  (  elem2392 ) ) );
    (*  list2390 ) .f_count = (  op_dash_add313 ( ( ( * (  list2390 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1313 (   struct env119* env ,    struct TextBuf_105 *  self3949 ,    struct Action_25  action3951 ) {
    struct envunion120  temp1314 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action565 , .env =  env->envinst100 } );
    ( temp1314.fun ( &temp1314.env ,  (  self3949 ) ,  ( (  action3951 ) .f_from ) ,  ( (  action3951 ) .f_to_dash_bwd ) ,  ( (  action3951 ) .f_fwd ) ) );
    return ( (  action3951 ) .f_to_dash_fwd );
}

static  struct Maybe_208   change1179 (   struct env127* env ,    struct TextBuf_105 *  self4016 ,    struct Pos_26  from4018 ,    struct Pos_26  to4020 ,    struct StrView_27  bytes4022 ,    struct Maybe_208  before_dash_cursors4024 ) {
    struct Pos_26  from_dash_pos4025 = ( (  min566 ) ( (  from4018 ) ,  (  to4020 ) ) );
    struct Pos_26  to_dash_pos4026 = ( (  max568 ) ( (  from4018 ) ,  (  to4020 ) ) );
    struct Actions_106 *  actions4027 = ( & ( ( * (  self4016 ) ) .f_actions ) );
    ( (  trim_dash_actions1180 ) ( (  actions4027 ) ) );
    struct envunion131  temp1233 = ( (struct envunion131){ .fun = (  struct StrView_27  (*) (  struct env125*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1234 , .env =  env->envinst125 } );
    struct Action_25  action4028 = ( (struct Action_25) { .f_from = (  from4018 ) , .f_fwd = ( (  clone1215 ) ( (  bytes4022 ) ,  ( ( * (  self4016 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1216 ) ( (  self4016 ) ,  (  bytes4022 ) ,  (  from_dash_pos4025 ) ) ) , .f_bwd = ( temp1233.fun ( &temp1233.env ,  (  self4016 ) ,  (  from_dash_pos4025 ) ,  (  to_dash_pos4026 ) ) ) , .f_to_dash_bwd = (  to_dash_pos4026 ) } );
    enum CAllocator_10  al4029 = ( ( ( * (  actions4027 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in4030 = ( (  is_dash_none1248 ) ( (  before_dash_cursors4024 ) ) );
    if ( ( (  eq1249 ( ( ( ( * (  self4016 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_107_CustomChangeset ) ) ) || ( (  eq1249 ( ( ( ( * (  self4016 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_107_InputChangeset ) ) ) && (  is_dash_typed_dash_in4030 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset4031 = ( (  last_dash_ptr1251 ) ( ( (  to_dash_slice1253 ) ( ( ( * (  actions4027 ) ) .f_list ) ) ) ) );
        struct envunion1255  temp1254 = ( (struct envunion1255){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1256 , .env =  env->envinst21 } );
        ( temp1254.fun ( &temp1254.env ,  ( & ( ( * (  last_dash_changeset4031 ) ) .f_parts ) ) ,  (  action4028 ) ) );
    } else {
        struct Changeset_32  temp1278 = ( (struct Changeset_32) { .f_parts = ( (  mk1279 ) ( (  al4029 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1286 ) ( (  before_dash_cursors4024 ) ,  ( (struct Cursors_33) { .f_cur = (  from4018 ) , .f_sel = ( (  eq569 ( (  from4018 ) , (  to4020 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to4020 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset4032 = ( &temp1278 );
        struct envunion128  temp1287 = ( (struct envunion128){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1256 , .env =  env->envinst21 } );
        ( temp1287.fun ( &temp1287.env ,  ( & ( ( * (  changeset4032 ) ) .f_parts ) ) ,  (  action4028 ) ) );
        struct envunion130  temp1288 = ( (struct envunion130){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1289 , .env =  env->envinst28 } );
        ( temp1288.fun ( &temp1288.env ,  ( & ( ( * (  actions4027 ) ) .f_list ) ) ,  ( * (  changeset4032 ) ) ) );
        (*  actions4027 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in4030 ) ? ( ChangesetInputType_107_InputChangeset ) : ( ChangesetInputType_107_NoChangeset ) );
        (*  actions4027 ) .f_cur = (  op_dash_add313 ( ( ( * (  actions4027 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion129  temp1312 = ( (struct envunion129){ .fun = (  struct Pos_26  (*) (  struct env119*  ,    struct TextBuf_105 *  ,    struct Action_25  ) )action_dash_fwd1313 , .env =  env->envinst119 } );
    struct Pos_26  to_dash_fwd4033 = ( temp1312.fun ( &temp1312.env ,  (  self4016 ) ,  (  action4028 ) ) );
    if ( (  cmp292 ( ( (  num_dash_bytes1141 ) ( ( (  action4028 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd4034 = ( (  left_dash_pos1140 ) ( (  self4016 ) ,  (  to_dash_fwd4033 ) ) );
        return ( ( Maybe_208_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4034 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action4028 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_208_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd4033 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1177 (   struct env206* env ,    struct Pane_221 *  self4435 ,    struct StrView_27  s4437 ) {
    struct Pos_26  cur4438 = ( ( * (  self4435 ) ) .f_cursor );
    struct envunion207  temp1178 = ( (struct envunion207){ .fun = (  struct Maybe_208  (*) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  ) )change1179 , .env =  env->envinst127 } );
    ( temp1178.fun ( &temp1178.env ,  ( ( * (  self4435 ) ) .f_buf ) ,  (  cur4438 ) ,  (  cur4438 ) ,  (  s4437 ) ,  ( (struct Maybe_208) { .tag = Maybe_208_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1320 (   struct env217* env ,    struct Pane_221 *  self4473 ,    int32_t  line4475 ) {
    struct envunion218  temp1321 = ( (struct envunion218){ .fun = (  struct Maybe_208  (*) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  ) )change1179 , .env =  env->envinst127 } );
    ( temp1321.fun ( &temp1321.env ,  ( ( * (  self4473 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4475 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4475 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_208) { .tag = Maybe_208_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1316 (   struct env228* env ,    struct Pane_221 *  self4494 ,    int32_t  indent4496 ) {
    struct RangeIter_153  temp1317 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4496 ) ) ) );
    while (true) {
        struct Maybe_155  __cond1318 =  next156 (&temp1317);
        if (  __cond1318 .tag == 0 ) {
            break;
        }
        int32_t  dref4497 =  __cond1318 .stuff .Maybe_155_Just_s .field0;
        struct envunion229  temp1319 = ( (struct envunion229){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Pane_221 *  ,    int32_t  ) )indent_dash_at1320 , .env =  env->envinst217 } );
        ( temp1319.fun ( &temp1319.env ,  (  self4494 ) ,  ( ( ( * (  self4494 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1146 ) ( (  self4494 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1322 (    struct Pane_221 *  self4414 ) {
    struct Pos_26  temp1323 = ( ( * (  self4414 ) ) .f_cursor );
    temp1323 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors1102 ) ( (  self4414 ) ,  ( temp1323 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1325 {
    enum Unit_8  (*fun) (  struct env206*  ,    struct Pane_221 *  ,    struct StrView_27  );
    struct env206 env;
};

struct envunion1327 {
    enum Unit_8  (*fun) (  struct env228*  ,    struct Pane_221 *  ,    int32_t  );
    struct env228 env;
};

enum MoveDirection_1329 {
    MoveDirection_1329_MoveFwd,
    MoveDirection_1329_MoveBwd,
};

enum MoveTarget_1330 {
    MoveTarget_1330_NextWordStart,
    MoveTarget_1330_NextWordEnd,
};

static  struct Pos_26   own1332 (    struct Pos_26  x1513 ) {
    return (  x1513 );
}

struct env1333 {
    enum MoveDirection_1329  dir4377;
    ;
    ;
    struct Pos_26 *  prev4380;
    struct Pane_221 *  pane4375;
};

static  bool   is_dash_at_dash_line_dash_end1335 (    struct Pane_221 *  pane4357 ,    struct Pos_26  pos4359 ) {
    return (  eq409 ( ( (  i32_dash_size422 ) ( ( (  pos4359 ) .f_bi ) ) ) , ( (  num_dash_bytes1141 ) ( ( (  line1108 ) ( ( ( * (  pane4357 ) ) .f_buf ) ,  ( (  pos4359 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1334 (    struct Pane_221 *  pane4362 ) {
    return ( (  is_dash_at_dash_line_dash_end1335 ) ( (  pane4362 ) ,  ( ( * (  pane4362 ) ) .f_cursor ) ) );
}

struct envunion1337 {
    enum Unit_8  (*fun) (  struct env1333*  );
    struct env1333 env;
};

static  enum Unit_8   advance1338 (   struct env1333* env ) {
    (* env->prev4380 ) = ( ( * ( env->pane4375 ) ) .f_cursor );
    enum MoveDirection_1329  dref4382 = ( env->dir4377 );
    switch (  dref4382 ) {
        case MoveDirection_1329_MoveFwd : {
            ( (  move_dash_right1146 ) ( ( env->pane4375 ) ) );
            break;
        }
        case MoveDirection_1329_MoveBwd : {
            ( (  move_dash_left1101 ) ( ( env->pane4375 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1342 {
    CharType_1342_CharSpace,
    CharType_1342_CharWord,
    CharType_1342_CharPunctuation,
};

struct Tuple2_1343 {
    enum CharType_1342  field0;
    enum CharType_1342  field1;
};

static struct Tuple2_1343 Tuple2_1343_Tuple2 (  enum CharType_1342  field0 ,  enum CharType_1342  field1 ) {
    return ( struct Tuple2_1343 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1341 (    enum CharType_1342  l3777 ,    enum CharType_1342  r3779 ) {
    struct Tuple2_1343  dref3780 = ( ( Tuple2_1343_Tuple2 ) ( (  l3777 ) ,  (  r3779 ) ) );
    if (  dref3780 .field0 == CharType_1342_CharSpace &&  dref3780 .field1 == CharType_1342_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3780 .field0 == CharType_1342_CharWord &&  dref3780 .field1 == CharType_1342_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3780 .field0 == CharType_1342_CharPunctuation &&  dref3780 .field1 == CharType_1342_CharPunctuation ) {
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

static  bool   is_dash_alpha1346 (    struct Char_65  c1449 ) {
    return ( ( (  cmp292 ( ( (  c1449 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between985 ) ( (  c1449 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between985 ) ( (  c1449 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1345 (    struct Char_65  c1470 ) {
    return ( ( (  is_dash_alpha1346 ) ( (  c1470 ) ) ) || ( (  is_dash_digit984 ) ( (  c1470 ) ) ) );
}

static  bool   is_dash_whitespace1347 (    struct Char_65  c1452 ) {
    return ( ( (  eq480 ( (  c1452 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) || (  eq480 ( (  c1452 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq480 ( (  c1452 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1342   char_dash_type1344 (    struct Char_65  c3783 ) {
    if ( ( ( ( (  is_dash_alphanumeric1345 ) ( (  c3783 ) ) ) || (  eq480 ( (  c3783 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) || (  eq480 ( (  c3783 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1342_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1347 ) ( (  c3783 ) ) ) ) {
            return ( CharType_1342_CharSpace );
        } else {
            return ( CharType_1342_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1340 (    struct Char_65  l3786 ,    struct Char_65  r3788 ) {
    return ( !  eq1341 ( ( (  char_dash_type1344 ) ( (  l3786 ) ) ) , ( (  char_dash_type1344 ) ( (  r3788 ) ) ) ) );
}

static  struct Char_65   or_dash_else1349 (    struct Maybe_299  self1312 ,    struct Char_65  alt1314 ) {
    struct Maybe_299  dref1315 = (  self1312 );
    if ( dref1315.tag == Maybe_299_None_t ) {
        return (  alt1314 );
    }
    else {
        if ( dref1315.tag == Maybe_299_Just_t ) {
            return ( dref1315 .stuff .Maybe_299_Just_s .field0 );
        }
    }
}

static  struct Maybe_299   head1350 (    struct StrViewIter_469  it1126 ) {
    struct StrViewIter_469  temp1351 = ( (  into_dash_iter470 ) ( (  it1126 ) ) );
    return ( (  next474 ) ( ( &temp1351 ) ) );
}

static  struct Char_65   char_dash_at1348 (    struct Pane_221 *  pane4226 ,    struct Pos_26  pos4228 ) {
    struct StrView_27  line4229 = ( (  line1108 ) ( ( ( * (  pane4226 ) ) .f_buf ) ,  ( (  pos4228 ) .f_line ) ) );
    return ( (  or_dash_else1349 ) ( ( (  head1350 ) ( ( (  chars471 ) ( ( (  byte_dash_substr496 ) ( (  line4229 ) ,  ( (  i32_dash_size422 ) ( ( (  pos4228 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1141 ) ( (  line4229 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
}

struct StrConcatIter_1356 {
    struct StrViewIter_469  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_1356   into_dash_iter1358 (    struct StrConcatIter_1356  self1242 ) {
    return (  self1242 );
}

static  struct Maybe_299   next1359 (    struct StrConcatIter_1356 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1355 (    struct StrConcatIter_1356  iterable1058 ,    enum Unit_8 (*  fun1060 )(    struct Char_65  ) ) {
    struct StrConcatIter_1356  temp1357 = ( (  into_dash_iter1358 ) ( (  iterable1058 ) ) );
    struct StrConcatIter_1356 *  it1061 = ( &temp1357 );
    while ( ( true ) ) {
        struct Maybe_299  dref1062 = ( (  next1359 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_299_Just_t ) {
                ( (  fun1060 ) ( ( dref1062 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1356   into_dash_iter1361 (    struct StrConcat_71  dref1249 ) {
    return ( (struct StrConcatIter_1356) { .f_left = ( (  chars471 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_1356   chars1360 (    struct StrConcat_71  self1260 ) {
    return ( (  into_dash_iter1361 ) ( (  self1260 ) ) );
}

static  enum Unit_8   print1354 (    struct StrConcat_71  s1287 ) {
    ( (  for_dash_each1355 ) ( ( (  chars1360 ) ( (  s1287 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1353 (    struct StrView_27  s1290 ) {
    ( (  print1354 ) ( ( ( StrConcat_71_StrConcat ) ( (  s1290 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1362 (  ) {
    bool  temp1363;
    return (  temp1363 );
}

static  bool   todo1352 (  ) {
    ( (  println1353 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1362 ) ( ) );
}

static  bool   reached_dash_target1339 (    struct Pane_221 *  pane4367 ,    enum MoveTarget_1330  target4369 ,    struct Pos_26  prev4371 ) {
    return ( {  enum MoveTarget_1330  dref4372 = (  target4369 ) ;  dref4372 == MoveTarget_1330_NextWordStart ? ( ( (  is_dash_word_dash_boundary1340 ) ( ( (  char_dash_at1348 ) ( (  pane4367 ) ,  (  prev4371 ) ) ) ,  ( (  char_dash_at1348 ) ( (  pane4367 ) ,  ( ( * (  pane4367 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1341 ( ( (  char_dash_type1344 ) ( ( (  char_dash_at1348 ) ( (  pane4367 ) ,  ( ( * (  pane4367 ) ) .f_cursor ) ) ) ) ) , ( CharType_1342_CharSpace ) ) ) ) ) :  dref4372 == MoveTarget_1330_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1340 ) ( ( (  char_dash_at1348 ) ( (  pane4367 ) ,  (  prev4371 ) ) ) ,  ( (  char_dash_at1348 ) ( (  pane4367 ) ,  ( ( * (  pane4367 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1341 ( ( (  char_dash_type1344 ) ( ( (  char_dash_at1348 ) ( (  pane4367 ) ,  (  prev4371 ) ) ) ) ) , ( CharType_1342_CharSpace ) ) ) ) ) : ( (  todo1352 ) ( ) ) ; } );
}

struct envunion1365 {
    enum Unit_8  (*fun) (  struct env1333*  );
    struct env1333 env;
};

struct envunion1367 {
    enum Unit_8  (*fun) (  struct env1333*  );
    struct env1333 env;
};

static  enum Unit_8   advance_dash_word1328 (    struct Pane_221 *  pane4375 ,    enum MoveDirection_1329  dir4377 ,    enum MoveTarget_1330  target4379 ) {
    struct Pos_26  temp1331 = ( (  own1332 ) ( ( ( * (  pane4375 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4380 = ( &temp1331 );
    struct env1333 envinst1333 = {
        .dir4377 =  dir4377 ,
        .prev4380 =  prev4380 ,
        .pane4375 =  pane4375 ,
    };
    struct Pos_26  sel4383 = ( ( * (  pane4375 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4384 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1334 ) ( (  pane4375 ) ) );
    struct envunion1337  temp1336 = ( (struct envunion1337){ .fun = (  enum Unit_8  (*) (  struct env1333*  ) )advance1338 , .env =  envinst1333 } );
    ( temp1336.fun ( &temp1336.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4384 ) || ( (  reached_dash_target1339 ) ( (  pane4375 ) ,  (  target4379 ) ,  ( * (  prev4380 ) ) ) ) ) ) {
        sel4383 = ( ( * (  pane4375 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1334 ) ( (  pane4375 ) ) ) ) {
        if ( (  eq569 ( ( ( * (  pane4375 ) ) .f_cursor ) , ( * (  prev4380 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1365  temp1364 = ( (struct envunion1365){ .fun = (  enum Unit_8  (*) (  struct env1333*  ) )advance1338 , .env =  envinst1333 } );
        ( temp1364.fun ( &temp1364.env ) );
        sel4383 = ( ( * (  pane4375 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1367  temp1366 = ( (struct envunion1367){ .fun = (  enum Unit_8  (*) (  struct env1333*  ) )advance1338 , .env =  envinst1333 } );
        ( temp1366.fun ( &temp1366.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1334 ) ( (  pane4375 ) ) ) || ( (  reached_dash_target1339 ) ( (  pane4375 ) ,  (  target4379 ) ,  ( * (  prev4380 ) ) ) ) ) ) {
            enum MoveDirection_1329  dref4385 = (  dir4377 );
            switch (  dref4385 ) {
                case MoveDirection_1329_MoveFwd : {
                    ( (  move_dash_left1101 ) ( (  pane4375 ) ) );
                    break;
                }
                case MoveDirection_1329_MoveBwd : {
                    ( (  move_dash_right1146 ) ( (  pane4375 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq569 ( ( * (  prev4380 ) ) , ( ( * (  pane4375 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1137 ) ( (  pane4375 ) ,  ( ( Maybe_34_Just ) ( (  sel4383 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1372 (    struct List_30 *  l2474 ) {
    return ( ( * (  l2474 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1375 (    struct List_30 *  list2342 ,    size_t  i2344 ) {
    if ( ( (  cmp292 ( (  i2344 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2344 ) , ( ( * (  list2342 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2344 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2342 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1252 ) ( ( ( * (  list2342 ) ) .f_elements ) ,  (  i2344 ) ) );
}

static  struct Changeset_32   get1374 (    struct List_30 *  list2352 ,    size_t  i2354 ) {
    return ( * ( (  get_dash_ptr1375 ) ( (  list2352 ) ,  (  i2354 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1373 (    struct List_30  self2422 ,    size_t  k2424 ) {
    return ( (  get1374 ) ( ( & (  self2422 ) ) ,  (  k2424 ) ) );
}

static  struct Action_25   undefined1384 (  ) {
    struct Action_25  temp1385;
    return (  temp1385 );
}

static  struct Action_25   or_dash_fail1383 (    struct Maybe_1206  x1305 ,    struct StrConcat_323  errmsg1307 ) {
    struct Maybe_1206  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_1206_None_t ) {
        ( (  panic325 ) ( (  errmsg1307 ) ) );
        return ( (  undefined1384 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_1206_Just_t ) {
            return ( dref1308 .stuff .Maybe_1206_Just_s .field0 );
        }
    }
}

static  struct Maybe_1206   try_dash_get1386 (    struct Slice_24  slice2111 ,    size_t  i2113 ) {
    if ( ( (  cmp292 ( (  i2113 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2113 ) , ( (  slice2111 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1206) { .tag = Maybe_1206_None_t } );
    }
    struct Action_25 *  elem_dash_ptr2114 = ( (  offset_dash_ptr1204 ) ( ( (  slice2111 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2113 ) ) ) ) );
    return ( ( Maybe_1206_Just ) ( ( * (  elem_dash_ptr2114 ) ) ) );
}

static  struct Action_25   get1382 (    struct Slice_24  slice2117 ,    size_t  i2119 ) {
    return ( (  or_dash_fail1383 ) ( ( (  try_dash_get1386 ) ( (  slice2117 ) ,  (  i2119 ) ) ) ,  ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2119 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2117 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1381 (    struct Slice_24  self2130 ,    size_t  idx2132 ) {
    return ( (  get1382 ) ( (  self2130 ) ,  (  idx2132 ) ) );
}

static  struct Action_25   last1380 (    struct Slice_24  s2293 ) {
    if ( (  eq409 ( ( (  s2293 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1223 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1381 ( (  s2293 ) , (  op_dash_sub291 ( ( (  s2293 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1387 (    struct List_23  l2467 ) {
    struct Action_25 *  ptr2468 = ( ( (  l2467 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2468 ) , .f_count = ( (  l2467 ) .f_count ) } );
}

static  struct Maybe_208   redo1371 (   struct env123* env ,    struct TextBuf_105 *  self3976 ) {
    ( (  flush_dash_insert_dash_action1155 ) ( (  self3976 ) ) );
    struct Actions_106 *  actions3977 = ( & ( ( * (  self3976 ) ) .f_actions ) );
    if ( (  cmp292 ( ( ( * (  actions3977 ) ) .f_cur ) , ( (  size1372 ) ( ( & ( ( * (  actions3977 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_208) { .tag = Maybe_208_None_t } );
    }
    struct Changeset_32  changeset3978 = (  elem_dash_get1373 ( ( ( * (  actions3977 ) ) .f_list ) , ( ( * (  actions3977 ) ) .f_cur ) ) );
    struct Pos_26  temp1376;
    struct Pos_26  to_dash_fwd3979 = (  temp1376 );
    struct SliceIter_1199  temp1377 =  into_dash_iter1201 ( ( (  changeset3978 ) .f_parts ) );
    while (true) {
        struct Maybe_1206  __cond1378 =  next1207 (&temp1377);
        if (  __cond1378 .tag == 0 ) {
            break;
        }
        struct Action_25  action3981 =  __cond1378 .stuff .Maybe_1206_Just_s .field0;
        struct envunion124  temp1379 = ( (struct envunion124){ .fun = (  struct Pos_26  (*) (  struct env119*  ,    struct TextBuf_105 *  ,    struct Action_25  ) )action_dash_fwd1313 , .env =  env->envinst119 } );
        to_dash_fwd3979 = ( temp1379.fun ( &temp1379.env ,  (  self3976 ) ,  (  action3981 ) ) );
    }
    (*  actions3977 ) .f_cur = (  op_dash_add313 ( ( ( * (  actions3977 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action3982 = ( (  last1380 ) ( ( (  to_dash_slice1387 ) ( ( (  changeset3978 ) .f_parts ) ) ) ) );
    if ( (  cmp292 ( ( (  num_dash_bytes1141 ) ( ( (  last_dash_action3982 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3983 = ( (  left_dash_pos1140 ) ( (  self3976 ) ,  (  to_dash_fwd3979 ) ) );
        return ( ( Maybe_208_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3983 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action3982 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_208_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3979 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1389 {
    struct Pane_221 *  self4451;
    ;
};

struct envunion1390 {
    enum Unit_8  (*fun) (  struct env1389*  ,    struct Cursors_33  );
    struct env1389 env;
};

static  enum Unit_8   if_dash_just1388 (    struct Maybe_208  x1553 ,   struct envunion1390  fun1555 ) {
    struct Maybe_208  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_208_Just_t ) {
        struct envunion1390  temp1391 = (  fun1555 );
        ( temp1391.fun ( &temp1391.env ,  ( dref1556 .stuff .Maybe_208_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_208_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1392 (   struct env1389* env ,    struct Cursors_33  cursors4454 ) {
    ( (  set_dash_cursors1102 ) ( ( env->self4451 ) ,  ( (  cursors4454 ) .f_cur ) ,  ( (  cursors4454 ) .f_sel ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1369 (   struct env213* env ,    struct Pane_221 *  self4451 ) {
    struct envunion214  temp1370 = ( (struct envunion214){ .fun = (  struct Maybe_208  (*) (  struct env123*  ,    struct TextBuf_105 *  ) )redo1371 , .env =  env->envinst123 } );
    struct Maybe_208  mcursors4452 = ( temp1370.fun ( &temp1370.env ,  ( ( * (  self4451 ) ) .f_buf ) ) );
    struct env1389 envinst1389 = {
        .self4451 =  self4451 ,
    };
    ( (  if_dash_just1388 ) ( (  mcursors4452 ) ,  ( (struct envunion1390){ .fun = (  enum Unit_8  (*) (  struct env1389*  ,    struct Cursors_33  ) )lam1392 , .env =  envinst1389 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1398 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1398   into_dash_iter1399 (    struct SliceReversedIter_1398  self2256 ) {
    return (  self2256 );
}

static  struct SliceReversedIter_1398   reversed1400 (    struct Slice_24  slice2253 ) {
    return ( (struct SliceReversedIter_1398) { .f_slice = (  slice2253 ) , .f_current_dash_offset = ( (  slice2253 ) .f_count ) } );
}

static  struct Maybe_1206   next1402 (    struct SliceReversedIter_1398 *  self2259 ) {
    size_t  off2260 = ( ( * (  self2259 ) ) .f_current_dash_offset );
    if ( (  eq409 ( (  off2260 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1206) { .tag = Maybe_1206_None_t } );
    }
    (*  self2259 ) .f_current_dash_offset = (  op_dash_sub291 ( (  off2260 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1206_Just ) ( (  elem_dash_get1381 ( ( ( * (  self2259 ) ) .f_slice ) , ( ( * (  self2259 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1404 (   struct env117* env ,    struct TextBuf_105 *  self3944 ,    struct Action_25  action3946 ) {
    struct envunion118  temp1405 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action565 , .env =  env->envinst100 } );
    ( temp1405.fun ( &temp1405.env ,  (  self3944 ) ,  ( (  action3946 ) .f_from ) ,  ( (  action3946 ) .f_to_dash_fwd ) ,  ( (  action3946 ) .f_bwd ) ) );
    return ( (  action3946 ) .f_to_dash_bwd );
}

static  struct Maybe_208   undo1396 (   struct env121* env ,    struct TextBuf_105 *  self3969 ) {
    ( (  flush_dash_insert_dash_action1155 ) ( (  self3969 ) ) );
    struct Actions_106 *  actions3970 = ( & ( ( * (  self3969 ) ) .f_actions ) );
    if ( (  eq409 ( ( ( * (  actions3970 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_208) { .tag = Maybe_208_None_t } );
    }
    (*  actions3970 ) .f_cur = (  op_dash_sub291 ( ( ( * (  actions3970 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset3971 = (  elem_dash_get1373 ( ( ( * (  actions3970 ) ) .f_list ) , ( ( * (  actions3970 ) ) .f_cur ) ) );
    struct SliceReversedIter_1398  temp1397 =  into_dash_iter1399 ( ( (  reversed1400 ) ( ( (  to_dash_slice1387 ) ( ( (  changeset3971 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1206  __cond1401 =  next1402 (&temp1397);
        if (  __cond1401 .tag == 0 ) {
            break;
        }
        struct Action_25  action3973 =  __cond1401 .stuff .Maybe_1206_Just_s .field0;
        struct envunion122  temp1403 = ( (struct envunion122){ .fun = (  struct Pos_26  (*) (  struct env117*  ,    struct TextBuf_105 *  ,    struct Action_25  ) )action_dash_bwd1404 , .env =  env->envinst117 } );
        ( temp1403.fun ( &temp1403.env ,  (  self3969 ) ,  (  action3973 ) ) );
    }
    return ( ( Maybe_208_Just ) ( ( (  changeset3971 ) .f_before_dash_cursors ) ) );
}

struct env1407 {
    struct Pane_221 *  self4445;
    ;
};

struct envunion1408 {
    enum Unit_8  (*fun) (  struct env1407*  ,    struct Cursors_33  );
    struct env1407 env;
};

static  enum Unit_8   if_dash_just1406 (    struct Maybe_208  x1553 ,   struct envunion1408  fun1555 ) {
    struct Maybe_208  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_208_Just_t ) {
        struct envunion1408  temp1409 = (  fun1555 );
        ( temp1409.fun ( &temp1409.env ,  ( dref1556 .stuff .Maybe_208_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_208_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1410 (   struct env1407* env ,    struct Cursors_33  cursors4448 ) {
    ( (  set_dash_cursors1102 ) ( ( env->self4445 ) ,  ( (  cursors4448 ) .f_cur ) ,  ( (  cursors4448 ) .f_sel ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1394 (   struct env211* env ,    struct Pane_221 *  self4445 ) {
    struct envunion212  temp1395 = ( (struct envunion212){ .fun = (  struct Maybe_208  (*) (  struct env121*  ,    struct TextBuf_105 *  ) )undo1396 , .env =  env->envinst121 } );
    struct Maybe_208  mcursors4446 = ( temp1395.fun ( &temp1395.env ,  ( ( * (  self4445 ) ) .f_buf ) ) );
    struct env1407 envinst1407 = {
        .self4445 =  self4445 ,
    };
    ( (  if_dash_just1406 ) ( (  mcursors4446 ) ,  ( (struct envunion1408){ .fun = (  enum Unit_8  (*) (  struct env1407*  ,    struct Cursors_33  ) )lam1410 , .env =  envinst1407 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_232   minmax1414 (    struct Pos_26  l1586 ,    struct Pos_26  r1588 ) {
    return ( (  cmp567 ( (  l1586 ) , (  r1588 ) ) == 0 ) ? ( ( Tuple2_232_Tuple2 ) ( (  l1586 ) ,  (  r1588 ) ) ) : ( ( Tuple2_232_Tuple2 ) ( (  r1588 ) ,  (  l1586 ) ) ) );
}

static  struct Pos_26   or_dash_else1415 (    struct Maybe_34  self1312 ,    struct Pos_26  alt1314 ) {
    struct Maybe_34  dref1315 = (  self1312 );
    if ( dref1315.tag == Maybe_34_None_t ) {
        return (  alt1314 );
    }
    else {
        if ( dref1315.tag == Maybe_34_Just_t ) {
            return ( dref1315 .stuff .Maybe_34_Just_s .field0 );
        }
    }
}

static  struct Pos_26   fst1416 (    struct Tuple2_232  dref1515 ) {
    return ( dref1515 .field0 );
}

static  struct Pos_26   snd1417 (    struct Tuple2_232  dref1518 ) {
    return ( dref1518 .field1 );
}

static  struct Tuple2_232   selection1413 (    struct Pane_221 *  self4457 ) {
    struct Tuple2_232  from_dash_to4458 = ( (  minmax1414 ) ( ( (  or_dash_else1415 ) ( ( ( * (  self4457 ) ) .f_sel ) ,  ( ( * (  self4457 ) ) .f_cursor ) ) ) ,  ( ( * (  self4457 ) ) .f_cursor ) ) );
    struct Pos_26  from4459 = ( (  fst1416 ) ( (  from_dash_to4458 ) ) );
    struct Pos_26  to4460 = ( (  right_dash_pos1147 ) ( ( ( * (  self4457 ) ) .f_buf ) ,  ( (  snd1417 ) ( (  from_dash_to4458 ) ) ) ) );
    return ( ( Tuple2_232_Tuple2 ) ( (  from4459 ) ,  (  to4460 ) ) );
}

struct env1420 {
    struct Editor_250 *  ed4570;
    ;
};

struct envunion1421 {
    enum Unit_8  (*fun) (  struct env1420*  ,    struct StrView_27  );
    struct env1420 env;
};

static  enum Unit_8   if_dash_just1419 (    struct Maybe_78  x1553 ,   struct envunion1421  fun1555 ) {
    struct Maybe_78  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_78_Just_t ) {
        struct envunion1421  temp1422 = (  fun1555 );
        ( temp1422.fun ( &temp1422.env ,  ( dref1556 .stuff .Maybe_78_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_78_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1423 (   struct env1420* env ,    struct StrView_27  cp4574 ) {
    ( (  free559 ) ( (  cp4574 ) ,  ( ( * ( env->ed4570 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1412 (   struct env235* env ,    struct Editor_250 *  ed4570 ) {
    struct Tuple2_232  from_dash_to4571 = ( (  selection1413 ) ( ( (  pane1145 ) ( (  ed4570 ) ) ) ) );
    struct envunion236  temp1418 = ( (struct envunion236){ .fun = (  struct StrView_27  (*) (  struct env125*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1234 , .env =  env->envinst125 } );
    struct StrView_27  cpd4572 = ( temp1418.fun ( &temp1418.env ,  ( ( ( * (  ed4570 ) ) .f_pane ) .f_buf ) ,  ( (  fst1416 ) ( (  from_dash_to4571 ) ) ) ,  ( (  snd1417 ) ( (  from_dash_to4571 ) ) ) ) );
    struct env1420 envinst1420 = {
        .ed4570 =  ed4570 ,
    };
    ( (  if_dash_just1419 ) ( ( ( * (  ed4570 ) ) .f_clipboard ) ,  ( (struct envunion1421){ .fun = (  enum Unit_8  (*) (  struct env1420*  ,    struct StrView_27  ) )lam1423 , .env =  envinst1420 } ) ) );
    (*  ed4570 ) .f_clipboard = ( ( Maybe_78_Just ) ( (  cpd4572 ) ) );
    return ( Unit_8_Unit );
}

struct env1428 {
    ;
    struct Pane_221 *  self4463;
};

struct envunion1429 {
    enum Unit_8  (*fun) (  struct env1428*  ,    struct Cursors_33  );
    struct env1428 env;
};

static  enum Unit_8   if_dash_just1427 (    struct Maybe_208  x1553 ,   struct envunion1429  fun1555 ) {
    struct Maybe_208  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_208_Just_t ) {
        struct envunion1429  temp1430 = (  fun1555 );
        ( temp1430.fun ( &temp1430.env ,  ( dref1556 .stuff .Maybe_208_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_208_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1431 (   struct env1428* env ,    struct Cursors_33  cursors4470 ) {
    ( (  set_dash_cursors1102 ) ( ( env->self4463 ) ,  ( (  cursors4470 ) .f_cur ) ,  ( (  cursors4470 ) .f_sel ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1425 (   struct env215* env ,    struct Pane_221 *  self4463 ,    struct Tuple2_232  pos_prime_s4465 ,    struct StrView_27  cp4467 ) {
    struct envunion216  temp1426 = ( (struct envunion216){ .fun = (  struct Maybe_208  (*) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  ) )change1179 , .env =  env->envinst127 } );
    struct Maybe_208  mcursors4468 = ( temp1426.fun ( &temp1426.env ,  ( ( * (  self4463 ) ) .f_buf ) ,  ( (  fst1416 ) ( (  pos_prime_s4465 ) ) ) ,  ( (  snd1417 ) ( (  pos_prime_s4465 ) ) ) ,  (  cp4467 ) ,  ( ( Maybe_208_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4463 ) ) .f_cursor ) , .f_sel = ( ( * (  self4463 ) ) .f_sel ) } ) ) ) ) );
    struct env1428 envinst1428 = {
        .self4463 =  self4463 ,
    };
    ( (  if_dash_just1427 ) ( (  mcursors4468 ) ,  ( (struct envunion1429){ .fun = (  enum Unit_8  (*) (  struct env1428*  ,    struct Cursors_33  ) )lam1431 , .env =  envinst1428 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1433 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_250 *  );
    struct env235 env;
};

struct envunion1435 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  );
    struct env215 env;
};

struct envunion1437 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_250 *  );
    struct env235 env;
};

static  struct StrBuilder_62   mk1443 (    enum CAllocator_10  al2839 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk450 ) ( (  al2839 ) ) ) } );
}

struct IntStrIter_1449 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1448 {
    struct StrViewIter_469  f_left;
    struct IntStrIter_1449  f_right;
};

struct StrConcatIter_1447 {
    struct StrConcatIter_1448  f_left;
    struct StrViewIter_469  f_right;
};

struct env1450 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2807;
};

struct envunion1451 {
    enum Unit_8  (*fun) (  struct env1450*  ,    struct Char_65  );
    struct env1450 env;
};

static  struct StrConcatIter_1447   into_dash_iter1453 (    struct StrConcatIter_1447  self1242 ) {
    return (  self1242 );
}

struct env1459 {
    size_t  base1338;
    ;
};

struct envunion1460 {
    size_t  (*fun) (  struct env1459*  ,    int32_t  ,    size_t  );
    struct env1459 env;
};

static  size_t   reduce1458 (    struct Range_150  iterable1077 ,    size_t  base1079 ,   struct envunion1460  fun1081 ) {
    size_t  x1082 = (  base1079 );
    struct RangeIter_153  it1083 = ( (  into_dash_iter154 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1084 = ( (  next156 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_155_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_155_Just_t ) {
                struct envunion1460  temp1461 = (  fun1081 );
                x1082 = ( temp1461.fun ( &temp1461.env ,  ( dref1084 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1462 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1462);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1463;
    return (  temp1463 );
}

static  size_t   lam1464 (   struct env1459* env ,    int32_t  item1342 ,    size_t  x1344 ) {
    return (  op_dash_mul415 ( (  x1344 ) , ( env->base1338 ) ) );
}

static  size_t   pow1457 (    size_t  base1338 ,    int32_t  p1340 ) {
    struct env1459 envinst1459 = {
        .base1338 =  base1338 ,
    };
    return ( (  reduce1458 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1340 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1460){ .fun = (  size_t  (*) (  struct env1459*  ,    int32_t  ,    size_t  ) )lam1464 , .env =  envinst1459 } ) ) );
}

static  uint8_t   cast1465 (    size_t  x385 ) {
    return ( (uint8_t ) (  x385 ) );
}

static  struct Maybe_299   next1456 (    struct IntStrIter_1449 *  self1351 ) {
    if ( ( ( * (  self1351 ) ) .f_negative ) ) {
        (*  self1351 ) .f_negative = ( false );
        return ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    size_t  trim_dash_down1352 = ( (  pow1457 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1353 = (  op_dash_div346 ( ( ( * (  self1351 ) ) .f_int ) , (  trim_dash_down1352 ) ) );
    size_t  upper_dash_mask1354 = (  op_dash_mul415 ( (  op_dash_div346 ( (  upper1353 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1355 = ( ( (  cast1465 ) ( (  op_dash_sub291 ( (  upper1353 ) , (  upper_dash_mask1354 ) ) ) ) ) );
    (*  self1351 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1356 = ( (  char_dash_from_dash_u81054 ) ( (  op_dash_add944 ( (  digit1355 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_299_Just ) ( (  digit_dash_char1356 ) ) );
}

static  struct Maybe_299   next1455 (    struct StrConcatIter_1448 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1456 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next1454 (    struct StrConcatIter_1447 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next1455 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1446 (    struct StrConcatIter_1447  iterable1058 ,   struct envunion1451  fun1060 ) {
    struct StrConcatIter_1447  temp1452 = ( (  into_dash_iter1453 ) ( (  iterable1058 ) ) );
    struct StrConcatIter_1447 *  it1061 = ( &temp1452 );
    while ( ( true ) ) {
        struct Maybe_299  dref1062 = ( (  next1454 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_299_Just_t ) {
                struct envunion1451  temp1466 = (  fun1060 );
                ( temp1466.fun ( &temp1466.env ,  ( dref1062 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1473 (    size_t  self1359 ) {
    if ( (  eq409 ( (  self1359 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1360 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp292 ( (  self1359 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1359 = (  op_dash_div346 ( (  self1359 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1360 = (  op_dash_add159 ( (  digits1360 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1360 );
}

static  struct IntStrIter_1449   uint_dash_iter1472 (    size_t  int1366 ) {
    return ( (struct IntStrIter_1449) { .f_int = (  int1366 ) , .f_len = ( (  count_dash_digits1473 ) ( (  int1366 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1449   chars1471 (    size_t  self1378 ) {
    return ( (  uint_dash_iter1472 ) ( (  self1378 ) ) );
}

static  struct StrConcatIter_1448   into_dash_iter1470 (    struct StrConcat_82  dref1249 ) {
    return ( (struct StrConcatIter_1448) { .f_left = ( (  chars471 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1471 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_1448   chars1469 (    struct StrConcat_82  self1260 ) {
    return ( (  into_dash_iter1470 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_1447   into_dash_iter1468 (    struct StrConcat_81  dref1249 ) {
    return ( (struct StrConcatIter_1447) { .f_left = ( (  chars1469 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars471 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_1447   chars1467 (    struct StrConcat_81  self1260 ) {
    return ( (  into_dash_iter1468 ) ( (  self1260 ) ) );
}

static  enum Unit_8   write_dash_slice1478 (   struct env58* env ,    struct StrBuilder_62 *  builder2797 ,    struct Slice_14  s2799 ) {
    struct envunion59  temp1479 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all583 , .env =  env->envinst48 } );
    ( temp1479.fun ( &temp1479.env ,  ( & ( ( * (  builder2797 ) ) .f_chars ) ) ,  (  s2799 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_14   as_dash_u8_dash_slice1480 (    struct Char_65  c1417 ,    struct Array_340 *  buf1419 ) {
    struct Char_65  cc1420 = ( (  regularize339 ) ( (  c1417 ) ,  (  buf1419 ) ) );
    return ( (struct Slice_14) { .f_ptr = ( (  cc1420 ) .f_ptr ) , .f_count = ( (  cc1420 ) .f_num_dash_bytes ) } );
}

static  enum Unit_8   write_dash_char1476 (   struct env60* env ,    struct StrBuilder_62 *  builder2802 ,    struct Char_65  c2804 ) {
    struct envunion61  temp1477 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  ) )write_dash_slice1478 , .env =  env->envinst58 } );
    struct Array_340  temp1482;
    struct Array_340  temp1481 = (  temp1482 );
    ( temp1477.fun ( &temp1477.env ,  (  builder2802 ) ,  ( (  as_dash_u8_dash_slice1480 ) ( (  c2804 ) ,  ( &temp1481 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1474 (   struct env1450* env ,    struct Char_65  c2811 ) {
    struct envunion64  temp1475 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    return ( temp1475.fun ( &temp1475.env ,  ( env->builder2807 ) ,  (  c2811 ) ) );
}

static  enum Unit_8   write1445 (   struct env66* env ,    struct StrBuilder_62 *  builder2807 ,    struct StrConcat_81  s2809 ) {
    struct env1450 envinst1450 = {
        .envinst60 = env->envinst60 ,
        .builder2807 =  builder2807 ,
    };
    ( (  for_dash_each1446 ) ( ( (  chars1467 ) ( (  s2809 ) ) ) ,  ( (struct envunion1451){ .fun = (  enum Unit_8  (*) (  struct env1450*  ,    struct Char_65  ) )lam1474 , .env =  envinst1450 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1486 (    uint8_t *  p388 ) {
    return ( (uint8_t * ) (  p388 ) );
}

static  struct Slice_14   cast_dash_slice1485 (    struct Slice_14  s2290 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1486 ) ( ( (  s2290 ) .f_ptr ) ) ) , .f_count = ( (  s2290 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1484 (    struct StrBuilder_62 *  builder2845 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1485 ) ( ( (  subslice477 ) ( ( ( ( * (  builder2845 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2845 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1441 (   struct env79* env ,    struct StrConcat_81  s2865 ,    enum CAllocator_10  al2867 ) {
    struct StrBuilder_62  temp1442 = ( (  mk1443 ) ( (  al2867 ) ) );
    struct StrBuilder_62 *  sb2868 = ( &temp1442 );
    struct envunion80  temp1444 = ( (struct envunion80){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_81  ) )write1445 , .env =  env->envinst66 } );
    ( temp1444.fun ( &temp1444.env ,  (  sb2868 ) ,  (  s2865 ) ) );
    struct envunion75  temp1483 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    ( temp1483.fun ( &temp1483.env ,  (  sb2868 ) ,  ( (  nullchar556 ) ( ) ) ) );
    struct StrView_27  dynstr2869 = ( (  as_dash_str1484 ) ( (  sb2868 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2869 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub291 ( ( ( (  dynstr2869 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1439 (   struct env239* env ,    struct Editor_250 *  ed4582 ,    struct StrConcat_81  s4584 ) {
    ( (  reset_dash_msg1090 ) ( (  ed4582 ) ) );
    struct envunion240  temp1440 = ( (struct envunion240){ .fun = (  struct StrView_27  (*) (  struct env79*  ,    struct StrConcat_81  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1441 , .env =  env->envinst79 } );
    (*  ed4582 ) .f_msg = ( ( Maybe_78_Just ) ( ( temp1440.fun ( &temp1440.env ,  (  s4584 ) ,  ( ( * (  ed4582 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1489 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  );
    struct env215 env;
};

struct env1488 {
    ;
    ;
    ;
    ;
    ;
    struct env215 envinst215;
    ;
    ;
    ;
    ;
    struct Editor_250 *  ed4642;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion1490 {
    enum Unit_8  (*fun) (  struct env1488*  ,    struct StrView_27  );
    struct env1488 env;
};

static  enum Unit_8   if_dash_just1487 (    struct Maybe_78  x1553 ,   struct envunion1490  fun1555 ) {
    struct Maybe_78  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_78_Just_t ) {
        struct envunion1490  temp1491 = (  fun1555 );
        ( temp1491.fun ( &temp1491.env ,  ( dref1556 .stuff .Maybe_78_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_78_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1493 (    struct Pane_221 *  pane4393 ) {
    return ( {  struct Maybe_34  dref4394 = ( ( * (  pane4393 ) ) .f_sel ) ; dref4394.tag == Maybe_34_Just_t ? ( (  max568 ) ( ( ( * (  pane4393 ) ) .f_cursor ) ,  ( dref4394 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4393 ) ) .f_cursor ) ; } );
}

static  struct StrView_27   own1494 (    struct StrView_27  x1513 ) {
    return (  x1513 );
}

static  uint8_t   last1495 (    struct Slice_14  s2293 ) {
    if ( (  eq409 ( ( (  s2293 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1223 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get486 ( (  s2293 ) , (  op_dash_sub291 ( ( (  s2293 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1496 (    int32_t  x1600 ,    int32_t  mn1602 ,    int32_t  mx1604 ) {
    if ( (  cmp157 ( (  x1600 ) , (  mn1602 ) ) == 0 ) ) {
        return (  mn1602 );
    } else {
        if ( (  cmp157 ( (  x1600 ) , (  mx1604 ) ) == 2 ) ) {
            return (  mx1604 );
        } else {
            return (  x1600 );
        }
    }
}

struct envunion1499 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  );
    struct env215 env;
};

static  enum Unit_8   lam1492 (   struct env1488* env ,    struct StrView_27  cp4653 ) {
    struct Pos_26  start4654 = ( (  max_dash_pos1493 ) ( ( (  pane1145 ) ( ( env->ed4642 ) ) ) ) );
    struct StrView_27  cp4655 = ( (  own1494 ) ( (  cp4653 ) ) );
    if ( (  eq305 ( ( (  last1495 ) ( ( (  cp4655 ) .f_contents ) ) ) , ( (  ascii_dash_u8493 ) ( ( (  from_dash_charlike494 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        int32_t  max_dash_lines4656 = ( (  num_dash_lines1148 ) ( ( ( * ( (  pane1145 ) ( ( env->ed4642 ) ) ) ) .f_buf ) ) );
        struct Pos_26  start4657 = ( (struct Pos_26) { .f_line = ( (  clamp1496 ) ( (  op_dash_add159 ( ( (  start4654 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  max_dash_lines4656 ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
        if ( (  eq570 ( ( (  start4657 ) .f_line ) , (  max_dash_lines4656 ) ) ) ) {
            cp4655 = ( (  byte_dash_substr496 ) ( (  cp4655 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub291 ( ( ( (  cp4655 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
        struct envunion1489  temp1497 = ( (struct envunion1489){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
        ( temp1497.fun ( &temp1497.env ,  ( (  pane1145 ) ( ( env->ed4642 ) ) ) ,  ( ( Tuple2_232_Tuple2 ) ( (  start4657 ) ,  (  start4657 ) ) ) ,  (  cp4655 ) ) );
    } else {
        struct Pos_26  start4658 = ( (  right_dash_pos1147 ) ( ( ( ( * ( env->ed4642 ) ) .f_pane ) .f_buf ) ,  (  start4654 ) ) );
        struct envunion1499  temp1498 = ( (struct envunion1499){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
        ( temp1498.fun ( &temp1498.env ,  ( (  pane1145 ) ( ( env->ed4642 ) ) ) ,  ( ( Tuple2_232_Tuple2 ) ( (  start4658 ) ,  (  start4658 ) ) ) ,  (  cp4655 ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1502 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  );
    struct env215 env;
};

struct env1501 {
    ;
    struct Editor_250 *  ed4642;
    ;
    ;
    struct env215 envinst215;
    ;
    ;
    ;
    ;
};

struct envunion1503 {
    enum Unit_8  (*fun) (  struct env1501*  ,    struct StrView_27  );
    struct env1501 env;
};

static  enum Unit_8   if_dash_just1500 (    struct Maybe_78  x1553 ,   struct envunion1503  fun1555 ) {
    struct Maybe_78  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_78_Just_t ) {
        struct envunion1503  temp1504 = (  fun1555 );
        ( temp1504.fun ( &temp1504.env ,  ( dref1556 .stuff .Maybe_78_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_78_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1506 (    struct Pane_221 *  pane4388 ) {
    return ( {  struct Maybe_34  dref4389 = ( ( * (  pane4388 ) ) .f_sel ) ; dref4389.tag == Maybe_34_Just_t ? ( (  min566 ) ( ( ( * (  pane4388 ) ) .f_cursor ) ,  ( dref4389 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4388 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1505 (   struct env1501* env ,    struct StrView_27  cp4660 ) {
    struct Pos_26  start4661 = ( (  min_dash_pos1506 ) ( ( (  pane1145 ) ( ( env->ed4642 ) ) ) ) );
    if ( (  eq305 ( ( (  last1495 ) ( ( (  cp4660 ) .f_contents ) ) ) , ( (  ascii_dash_u8493 ) ( ( (  from_dash_charlike494 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1507 = (  start4661 );
        temp1507 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4661 = ( temp1507 );
    }
    struct envunion1502  temp1508 = ( (struct envunion1502){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
    ( temp1508.fun ( &temp1508.env ,  ( (  pane1145 ) ( ( env->ed4642 ) ) ) ,  ( ( Tuple2_232_Tuple2 ) ( (  start4661 ) ,  (  start4661 ) ) ) ,  (  cp4660 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1511 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  );
    struct env215 env;
};

struct env1510 {
    ;
    struct Editor_250 *  ed4642;
    ;
    ;
    ;
    struct env215 envinst215;
    ;
};

struct envunion1512 {
    enum Unit_8  (*fun) (  struct env1510*  ,    struct StrView_27  );
    struct env1510 env;
};

static  enum Unit_8   if_dash_just1509 (    struct Maybe_78  x1553 ,   struct envunion1512  fun1555 ) {
    struct Maybe_78  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_78_Just_t ) {
        struct envunion1512  temp1513 = (  fun1555 );
        ( temp1513.fun ( &temp1513.env ,  ( dref1556 .stuff .Maybe_78_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_78_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1514 (   struct env1510* env ,    struct StrView_27  cp4663 ) {
    struct Pos_26  start4664 = ( (  min_dash_pos1506 ) ( ( (  pane1145 ) ( ( env->ed4642 ) ) ) ) );
    struct Pos_26  end4665 = ( (  max_dash_pos1493 ) ( ( (  pane1145 ) ( ( env->ed4642 ) ) ) ) );
    struct envunion1511  temp1515 = ( (struct envunion1511){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
    struct Pos_26  temp1516 = (  end4665 );
    temp1516 .  f_bi = (  op_dash_add159 ( ( (  end4665 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( temp1515.fun ( &temp1515.env ,  ( (  pane1145 ) ( ( env->ed4642 ) ) ) ,  ( ( Tuple2_232_Tuple2 ) ( (  start4664 ) ,  ( temp1516 ) ) ) ,  (  cp4663 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1517 (    struct Pane_221 *  pane4407 ) {
    struct Pos_26  min_dash_pos4408 = ( (  min_dash_pos1506 ) ( (  pane4407 ) ) );
    struct Pos_26  max_dash_pos4409 = ( (  max_dash_pos1493 ) ( (  pane4407 ) ) );
    int32_t  max_dash_pos_dash_max4410 = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( ( (  line1108 ) ( ( ( * (  pane4407 ) ) .f_buf ) ,  ( (  max_dash_pos4409 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq570 ( ( (  min_dash_pos4408 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq570 ( ( (  max_dash_pos4409 ) .f_bi ) , (  max_dash_pos_dash_max4410 ) ) ) ) ) ) {
        struct Pos_26  temp1518 = (  min_dash_pos4408 );
        temp1518 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4407 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1518 ) ) );
        struct Pos_26  temp1519 = (  max_dash_pos4409 );
        temp1519 .  f_bi = (  max_dash_pos_dash_max4410 );
        (*  pane4407 ) .f_cursor = ( temp1519 );
    } else {
        if ( (  cmp157 ( (  op_dash_add159 ( ( (  max_dash_pos4409 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1148 ) ( ( ( * (  pane4407 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1520 = (  min_dash_pos4408 );
        temp1520 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4407 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1520 ) ) );
        int32_t  next_dash_line4411 = (  op_dash_add159 ( ( (  max_dash_pos4409 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4407 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4411 ) , .f_bi = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( ( (  line1108 ) ( ( ( * (  pane4407 ) ) .f_buf ) ,  (  next_dash_line4411 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1521 (    struct Maybe_34  m1526 ) {
    struct Maybe_34  dref1527 = (  m1526 );
    if ( dref1527.tag == Maybe_34_None_t ) {
        return ( true );
    }
    else {
        if ( dref1527.tag == Maybe_34_Just_t ) {
            return ( false );
        }
    }
}

struct Maybe_1523 {
    enum {
        Maybe_1523_None_t,
        Maybe_1523_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_232  field0;
        } Maybe_1523_Just_s;
    } stuff;
};

static struct Maybe_1523 Maybe_1523_Just (  struct Tuple2_232  field0 ) {
    return ( struct Maybe_1523 ) { .tag = Maybe_1523_Just_t, .stuff = { .Maybe_1523_Just_s = { .field0 = field0 } } };
};

struct env1525 {
    ;
    ;
    struct Pane_221 *  pane4515;
    ;
    ;
    struct StrView_27  query4519;
};

struct envunion1527 {
    struct Maybe_248  (*fun) (  struct env1525*  ,    struct Pos_26  );
    struct env1525 env;
};

static  struct Maybe_248   find_dash_slice1529 (    struct Slice_14  haystack2270 ,    struct Slice_14  needle2272 ) {
    struct RangeIter_153  temp1530 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( ( (  haystack2270 ) .f_count ) ) ) , ( (  size_dash_i32331 ) ( ( (  needle2272 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1531 =  next156 (&temp1530);
        if (  __cond1531 .tag == 0 ) {
            break;
        }
        int32_t  i2274 =  __cond1531 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq498 ( ( (  subslice477 ) ( (  haystack2270 ) ,  ( (  i32_dash_size422 ) ( (  i2274 ) ) ) ,  (  op_dash_add313 ( ( (  i32_dash_size422 ) ( (  i2274 ) ) ) , ( (  needle2272 ) .f_count ) ) ) ) ) , (  needle2272 ) ) ) ) {
            return ( ( Maybe_248_Just ) ( ( (  i32_dash_size422 ) ( (  i2274 ) ) ) ) );
        }
    }
    return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
}

static  struct Maybe_248   search_dash_on_dash_line1528 (   struct env1525* env ,    struct Pos_26  pos4522 ) {
    return ( (  find_dash_slice1529 ) ( ( ( (  byte_dash_substr_dash_from475 ) ( ( (  line1108 ) ( ( ( * ( env->pane4515 ) ) .f_buf ) ,  ( (  pos4522 ) .f_line ) ) ) ,  ( (  i32_dash_size422 ) ( ( (  pos4522 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4519 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1537 (    int32_t  l231 ,    int32_t  r233 ) {
    return ( (  l231 ) / (  r233 ) );
}

static  int32_t   op_dash_mul1538 (    int32_t  l226 ,    int32_t  r228 ) {
    return ( (  l226 ) * (  r228 ) );
}

static  int32_t   mod1536 (    int32_t  l1496 ,    int32_t  d1498 ) {
    int32_t  r1499 = (  op_dash_div1537 ( (  l1496 ) , (  d1498 ) ) );
    int32_t  m1500 = (  op_dash_sub164 ( (  l1496 ) , (  op_dash_mul1538 ( (  r1499 ) , (  d1498 ) ) ) ) );
    if ( (  cmp157 ( (  m1500 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add159 ( (  d1498 ) , (  m1500 ) ) );
    } else {
        return (  m1500 );
    }
}

struct envunion1540 {
    struct Maybe_248  (*fun) (  struct env1525*  ,    struct Pos_26  );
    struct env1525 env;
};

static  struct Maybe_1523   search_dash_from1524 (    struct Pane_221 *  pane4515 ,    struct Pos_26  pos4517 ,    struct StrView_27  query4519 ) {
    struct env1525 envinst1525 = {
        .pane4515 =  pane4515 ,
        .query4519 =  query4519 ,
    };
    struct envunion1527  temp1526 = ( (struct envunion1527){ .fun = (  struct Maybe_248  (*) (  struct env1525*  ,    struct Pos_26  ) )search_dash_on_dash_line1528 , .env =  envinst1525 } );
    struct Maybe_248  dref4523 = ( temp1526.fun ( &temp1526.env ,  (  pos4517 ) ) );
    if ( dref4523.tag == Maybe_248_Just_t ) {
        struct Pos_26  temp1532 = (  pos4517 );
        temp1532 .  f_bi = (  op_dash_add159 ( ( (  pos4517 ) .f_bi ) , ( (  size_dash_i32331 ) ( ( dref4523 .stuff .Maybe_248_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4525 = ( temp1532 );
        struct Pos_26  temp1533 = (  pos4517 );
        temp1533 .  f_bi = (  op_dash_sub164 ( (  op_dash_add159 ( ( (  pos4517 ) .f_bi ) , ( (  size_dash_i32331 ) ( (  op_dash_add313 ( ( dref4523 .stuff .Maybe_248_Just_s .field0 ) , ( (  num_dash_bytes1141 ) ( (  query4519 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4526 = ( temp1533 );
        return ( ( Maybe_1523_Just ) ( ( ( Tuple2_232_Tuple2 ) ( (  sel_dash_pos4525 ) ,  (  cur_dash_pos4526 ) ) ) ) );
    }
    else {
        if ( dref4523.tag == Maybe_248_None_t ) {
            int32_t  num_dash_lines4527 = ( (  num_dash_lines1148 ) ( ( ( * (  pane4515 ) ) .f_buf ) ) );
            struct RangeIter_153  temp1534 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4527 ) ) ) );
            while (true) {
                struct Maybe_155  __cond1535 =  next156 (&temp1534);
                if (  __cond1535 .tag == 0 ) {
                    break;
                }
                int32_t  i4529 =  __cond1535 .stuff .Maybe_155_Just_s .field0;
                int32_t  line4530 = ( (  mod1536 ) ( (  op_dash_add159 ( ( (  pos4517 ) .f_line ) , (  i4529 ) ) ) ,  (  num_dash_lines4527 ) ) );
                struct envunion1540  temp1539 = ( (struct envunion1540){ .fun = (  struct Maybe_248  (*) (  struct env1525*  ,    struct Pos_26  ) )search_dash_on_dash_line1528 , .env =  envinst1525 } );
                struct Maybe_248  dref4531 = ( temp1539.fun ( &temp1539.env ,  ( (struct Pos_26) { .f_line = (  line4530 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4531.tag == Maybe_248_Just_t ) {
                    struct Pos_26  sel_dash_pos4533 = ( (struct Pos_26) { .f_line = (  line4530 ) , .f_bi = ( (  size_dash_i32331 ) ( ( dref4531 .stuff .Maybe_248_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4534 = ( (struct Pos_26) { .f_line = (  line4530 ) , .f_bi = (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( (  op_dash_add313 ( ( dref4531 .stuff .Maybe_248_Just_s .field0 ) , ( (  num_dash_bytes1141 ) ( (  query4519 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1523_Just ) ( ( ( Tuple2_232_Tuple2 ) ( (  sel_dash_pos4533 ) ,  (  cur_dash_pos4534 ) ) ) ) );
                }
                else {
                    if ( dref4531.tag == Maybe_248_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1523) { .tag = Maybe_1523_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1522 (    struct Editor_250 *  ed4626 ) {
    struct Maybe_78  dref4627 = ( ( * (  ed4626 ) ) .f_search_dash_term );
    if ( dref4627.tag == Maybe_78_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4627.tag == Maybe_78_Just_t ) {
            struct Maybe_1523  dref4629 = ( (  search_dash_from1524 ) ( ( (  pane1145 ) ( (  ed4626 ) ) ) ,  ( (  max_dash_pos1493 ) ( ( (  pane1145 ) ( (  ed4626 ) ) ) ) ) ,  ( dref4627 .stuff .Maybe_78_Just_s .field0 ) ) );
            if ( dref4629.tag == Maybe_1523_None_t ) {
            }
            else {
                if ( dref4629.tag == Maybe_1523_Just_t ) {
                    ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4626 ) ) ) ,  ( dref4629 .stuff .Maybe_1523_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4629 .stuff .Maybe_1523_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_248   find_dash_last_dash_occurence_dash_of_dash_slice1543 (    struct Slice_14  haystack2277 ,    struct Slice_14  needle2279 ) {
    struct Maybe_248  occ2280 = ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    struct RangeIter_153  temp1544 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( ( (  haystack2277 ) .f_count ) ) ) , ( (  size_dash_i32331 ) ( ( (  needle2279 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1545 =  next156 (&temp1544);
        if (  __cond1545 .tag == 0 ) {
            break;
        }
        int32_t  i2282 =  __cond1545 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq498 ( ( (  subslice477 ) ( (  haystack2277 ) ,  ( (  i32_dash_size422 ) ( (  i2282 ) ) ) ,  (  op_dash_add313 ( ( (  i32_dash_size422 ) ( (  i2282 ) ) ) , ( (  needle2279 ) .f_count ) ) ) ) ) , (  needle2279 ) ) ) ) {
            occ2280 = ( ( Maybe_248_Just ) ( ( (  i32_dash_size422 ) ( (  i2282 ) ) ) ) );
        }
    }
    return (  occ2280 );
}

static  struct Maybe_1523   search_dash_back1542 (    struct Pane_221 *  pane4537 ,    struct Pos_26  pos4539 ,    struct StrView_27  query4541 ) {
    struct Maybe_248  dref4542 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1543 ) ( ( ( (  byte_dash_substr496 ) ( ( (  line1108 ) ( ( ( * (  pane4537 ) ) .f_buf ) ,  ( (  pos4539 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size422 ) ( ( (  pos4539 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4541 ) .f_contents ) ) );
    if ( dref4542.tag == Maybe_248_Just_t ) {
        struct Pos_26  temp1546 = (  pos4539 );
        temp1546 .  f_bi = ( (  size_dash_i32331 ) ( ( dref4542 .stuff .Maybe_248_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4544 = ( temp1546 );
        struct Pos_26  temp1547 = (  pos4539 );
        temp1547 .  f_bi = (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( (  op_dash_add313 ( ( dref4542 .stuff .Maybe_248_Just_s .field0 ) , ( (  num_dash_bytes1141 ) ( (  query4541 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4545 = ( temp1547 );
        return ( ( Maybe_1523_Just ) ( ( ( Tuple2_232_Tuple2 ) ( (  sel_dash_pos4544 ) ,  (  cur_dash_pos4545 ) ) ) ) );
    }
    else {
        if ( dref4542.tag == Maybe_248_None_t ) {
            int32_t  num_dash_lines4546 = ( (  num_dash_lines1148 ) ( ( ( * (  pane4537 ) ) .f_buf ) ) );
            struct RangeIter_153  temp1548 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4546 ) ) ) );
            while (true) {
                struct Maybe_155  __cond1549 =  next156 (&temp1548);
                if (  __cond1549 .tag == 0 ) {
                    break;
                }
                int32_t  i4548 =  __cond1549 .stuff .Maybe_155_Just_s .field0;
                int32_t  line4549 = ( (  mod1536 ) ( (  op_dash_sub164 ( ( (  pos4539 ) .f_line ) , (  i4548 ) ) ) ,  (  num_dash_lines4546 ) ) );
                struct Maybe_248  dref4550 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1543 ) ( ( ( (  line1108 ) ( ( ( * (  pane4537 ) ) .f_buf ) ,  (  line4549 ) ) ) .f_contents ) ,  ( (  query4541 ) .f_contents ) ) );
                if ( dref4550.tag == Maybe_248_Just_t ) {
                    struct Pos_26  sel_dash_pos4552 = ( (struct Pos_26) { .f_line = (  line4549 ) , .f_bi = ( (  size_dash_i32331 ) ( ( dref4550 .stuff .Maybe_248_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4553 = ( (struct Pos_26) { .f_line = (  line4549 ) , .f_bi = (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( (  op_dash_add313 ( ( dref4550 .stuff .Maybe_248_Just_s .field0 ) , ( (  num_dash_bytes1141 ) ( (  query4541 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1523_Just ) ( ( ( Tuple2_232_Tuple2 ) ( (  sel_dash_pos4552 ) ,  (  cur_dash_pos4553 ) ) ) ) );
                }
                else {
                    if ( dref4550.tag == Maybe_248_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1523) { .tag = Maybe_1523_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1541 (    struct Editor_250 *  ed4634 ) {
    struct Maybe_78  dref4635 = ( ( * (  ed4634 ) ) .f_search_dash_term );
    if ( dref4635.tag == Maybe_78_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4635.tag == Maybe_78_Just_t ) {
            struct Maybe_1523  dref4637 = ( (  search_dash_back1542 ) ( ( (  pane1145 ) ( (  ed4634 ) ) ) ,  ( (  min_dash_pos1506 ) ( ( (  pane1145 ) ( (  ed4634 ) ) ) ) ) ,  ( dref4635 .stuff .Maybe_78_Just_s .field0 ) ) );
            if ( dref4637.tag == Maybe_1523_None_t ) {
            }
            else {
                if ( dref4637.tag == Maybe_1523_Just_t ) {
                    ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4634 ) ) ) ,  ( dref4637 .stuff .Maybe_1523_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4637 .stuff .Maybe_1523_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1553 (   struct env132* env ,    struct TextBuf_105 *  self4037 ,    struct Cursors_33  before_dash_cursors4039 ) {
    struct Actions_106 *  actions4040 = ( & ( ( * (  self4037 ) ) .f_actions ) );
    ( (  trim_dash_actions1180 ) ( (  actions4040 ) ) );
    ( (  flush_dash_insert_dash_action1155 ) ( (  self4037 ) ) );
    ( (  assert679 ) ( (  eq1249 ( ( ( ( * (  self4037 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_107_NoChangeset ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al4041 = ( ( * (  self4037 ) ) .f_al );
    struct Changeset_32  temp1554 = ( (struct Changeset_32) { .f_parts = ( (  mk1279 ) ( (  al4041 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors4039 ) } );
    struct Changeset_32 *  changeset4042 = ( &temp1554 );
    struct envunion133  temp1555 = ( (struct envunion133){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1289 , .env =  env->envinst28 } );
    ( temp1555.fun ( &temp1555.env ,  ( & ( ( * (  actions4040 ) ) .f_list ) ) ,  ( * (  changeset4042 ) ) ) );
    (*  actions4040 ) .f_input_dash_changeset = ( ChangesetInputType_107_CustomChangeset );
    (*  actions4040 ) .f_cur = (  op_dash_add313 ( ( ( * (  actions4040 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1206   head1561 (    struct List_23  it1126 ) {
    struct SliceIter_1199  temp1562 = ( (  into_dash_iter1201 ) ( (  it1126 ) ) );
    return ( (  next1207 ) ( ( &temp1562 ) ) );
}

static  bool   null1560 (    struct List_23  it1135 ) {
    struct Maybe_1206  dref1136 = ( (  head1561 ) ( (  it1135 ) ) );
    if ( dref1136.tag == Maybe_1206_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1559 (    struct TextBuf_105 *  self4045 ) {
    ( (  flush_dash_insert_dash_action1155 ) ( (  self4045 ) ) );
    struct Actions_106 *  actions4046 = ( & ( ( * (  self4045 ) ) .f_actions ) );
    if ( ( (  null1560 ) ( ( ( * ( (  last_dash_ptr1251 ) ( ( (  to_dash_slice1253 ) ( ( ( * (  actions4046 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions4046 ) .f_cur = (  op_dash_sub291 ( ( ( * (  actions4046 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions4046 ) .f_input_dash_changeset = ( ChangesetInputType_107_NoChangeset );
        ( (  trim_dash_actions1180 ) ( (  actions4046 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1564 (    struct Maybe_34  x1537 ,    struct Pos_26 (*  fun1539 )(    struct Pos_26  ) ) {
    struct Maybe_34  dref1540 = (  x1537 );
    if ( dref1540.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1540.tag == Maybe_34_Just_t ) {
            return ( ( Maybe_34_Just ) ( ( (  fun1539 ) ( ( dref1540 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1565 (    struct Pos_26  sel4482 ) {
    struct Pos_26  temp1566 = (  sel4482 );
    temp1566 .  f_bi = (  op_dash_add159 ( ( (  sel4482 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1566 );
}

static  enum Unit_8   indent_dash_selection1551 (   struct env219* env ,    struct Pane_221 *  self4478 ) {
    struct envunion224  temp1552 = ( (struct envunion224){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  ) )begin_dash_changeset1553 , .env =  env->envinst132 } );
    ( temp1552.fun ( &temp1552.env ,  ( ( * (  self4478 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4478 ) ) .f_cursor ) , .f_sel = ( ( * (  self4478 ) ) .f_sel ) } ) ) );
    struct RangeIter_153  temp1556 =  into_dash_iter154 ( ( (  to163 ) ( ( ( (  min_dash_pos1506 ) ( (  self4478 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1493 ) ( (  self4478 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_155  __cond1557 =  next156 (&temp1556);
        if (  __cond1557 .tag == 0 ) {
            break;
        }
        int32_t  line4480 =  __cond1557 .stuff .Maybe_155_Just_s .field0;
        struct envunion220  temp1558 = ( (struct envunion220){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Pane_221 *  ,    int32_t  ) )indent_dash_at1320 , .env =  env->envinst217 } );
        ( temp1558.fun ( &temp1558.env ,  (  self4478 ) ,  (  line4480 ) ) );
    }
    ( (  end_dash_changeset1559 ) ( ( ( * (  self4478 ) ) .f_buf ) ) );
    struct Pos_26  temp1563 = ( ( * (  self4478 ) ) .f_cursor );
    temp1563 .  f_bi = (  op_dash_add159 ( ( ( ( * (  self4478 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors1102 ) ( (  self4478 ) ,  ( temp1563 ) ,  ( (  fmap_dash_maybe1564 ) ( ( ( * (  self4478 ) ) .f_sel ) ,  (  lam1565 ) ) ) ,  ( CursorMovement_1103_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1577 {
    ;
    ;
    bool  last_dash_char_dash_was_dash_tab4487;
};

struct envunion1578 {
    struct Pos_26  (*fun) (  struct env1577*  ,    struct Pos_26  );
    struct env1577 env;
};

static  struct Maybe_34   fmap_dash_maybe1576 (    struct Maybe_34  x1537 ,   struct envunion1578  fun1539 ) {
    struct Maybe_34  dref1540 = (  x1537 );
    if ( dref1540.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1540.tag == Maybe_34_Just_t ) {
            struct envunion1578  temp1579 = (  fun1539 );
            return ( ( Maybe_34_Just ) ( ( temp1579.fun ( &temp1579.env ,  ( dref1540 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1580 (   struct env1577* env ,    struct Pos_26  sel4491 ) {
    struct Pos_26  temp1581 = (  sel4491 );
    temp1581 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4487 ) ? (  op_dash_sub164 ( ( (  sel4491 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4491 ) .f_bi ) );
    return ( temp1581 );
}

static  enum Unit_8   dedent_dash_selection1568 (   struct env225* env ,    struct Pane_221 *  self4485 ) {
    struct envunion226  temp1569 = ( (struct envunion226){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  ) )begin_dash_changeset1553 , .env =  env->envinst132 } );
    ( temp1569.fun ( &temp1569.env ,  ( ( * (  self4485 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4485 ) ) .f_cursor ) , .f_sel = ( ( * (  self4485 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1570 = ( (  min_dash_pos1506 ) ( (  self4485 ) ) );
    temp1570 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4486 = (  eq480 ( ( (  char_dash_at1348 ) ( (  self4485 ) ,  ( temp1570 ) ) ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1571 = ( (  max_dash_pos1493 ) ( (  self4485 ) ) );
    temp1571 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4487 = (  eq480 ( ( (  char_dash_at1348 ) ( (  self4485 ) ,  ( temp1571 ) ) ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_153  temp1572 =  into_dash_iter154 ( ( (  to163 ) ( ( ( (  min_dash_pos1506 ) ( (  self4485 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1493 ) ( (  self4485 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_155  __cond1573 =  next156 (&temp1572);
        if (  __cond1573 .tag == 0 ) {
            break;
        }
        int32_t  line4489 =  __cond1573 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq480 ( ( (  char_dash_at1348 ) ( (  self4485 ) ,  ( (struct Pos_26) { .f_line = (  line4489 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion227  temp1574 = ( (struct envunion227){ .fun = (  struct Maybe_208  (*) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  ) )change1179 , .env =  env->envinst127 } );
            ( temp1574.fun ( &temp1574.env ,  ( ( * (  self4485 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4489 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4489 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_208) { .tag = Maybe_208_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1559 ) ( ( ( * (  self4485 ) ) .f_buf ) ) );
    struct Pos_26  temp1575 = ( ( * (  self4485 ) ) .f_cursor );
    temp1575 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4486 ) ? (  op_dash_sub164 ( ( ( ( * (  self4485 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4485 ) ) .f_cursor ) .f_bi ) );
    struct env1577 envinst1577 = {
        .last_dash_char_dash_was_dash_tab4487 =  last_dash_char_dash_was_dash_tab4487 ,
    };
    ( (  set_dash_cursors1102 ) ( (  self4485 ) ,  ( temp1575 ) ,  ( (  fmap_dash_maybe1576 ) ( ( ( * (  self4485 ) ) .f_sel ) ,  ( (struct envunion1578){ .fun = (  struct Pos_26  (*) (  struct env1577*  ,    struct Pos_26  ) )lam1580 , .env =  envinst1577 } ) ) ) ,  ( CursorMovement_1103_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1585 (  ) {
    int32_t  temp1586;
    return (  temp1586 );
}

static  int32_t   or_dash_fail1584 (    struct Maybe_155  x1305 ,    struct StrView_27  errmsg1307 ) {
    struct Maybe_155  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_155_None_t ) {
        ( (  panic1223 ) ( (  errmsg1307 ) ) );
        return ( (  undefined1585 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_155_Just_t ) {
            return ( dref1308 .stuff .Maybe_155_Just_s .field0 );
        }
    }
}

struct env1589 {
    struct Pane_221 *  self4500;
    ;
};

struct envunion1590 {
    int32_t  (*fun) (  struct env1589*  ,    int32_t  );
    struct env1589 env;
};

struct Map_1588 {
    struct RangeIter_153  field0;
    struct envunion1590  field1;
};

static struct Map_1588 Map_1588_Map (  struct RangeIter_153  field0 , struct envunion1590  field1 ) {
    return ( struct Map_1588 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1588   into_dash_iter1592 (    struct Map_1588  self763 ) {
    return (  self763 );
}

static  struct Maybe_155   next1593 (    struct Map_1588 *  dref765 ) {
    struct Maybe_155  dref768 = ( (  next156 ) ( ( & ( (* dref765 ) .field0 ) ) ) );
    if ( dref768.tag == Maybe_155_None_t ) {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
    else {
        if ( dref768.tag == Maybe_155_Just_t ) {
            struct envunion1590  temp1594 = ( (* dref765 ) .field1 );
            return ( ( Maybe_155_Just ) ( ( temp1594.fun ( &temp1594.env ,  ( dref768 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_155   reduce1591 (    struct Map_1588  iterable1077 ,    struct Maybe_155  base1079 ,    struct Maybe_155 (*  fun1081 )(    int32_t  ,    struct Maybe_155  ) ) {
    struct Maybe_155  x1082 = (  base1079 );
    struct Map_1588  it1083 = ( (  into_dash_iter1592 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1084 = ( (  next1593 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_155_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_155_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1595 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1595);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_155  temp1596;
    return (  temp1596 );
}

struct env1599 {
    int32_t  x1505;
    ;
};

struct envunion1600 {
    struct Maybe_155  (*fun) (  struct env1599*  ,    int32_t  );
    struct env1599 env;
};

static  struct Maybe_155   maybe1598 (    struct Maybe_155  x1544 ,   struct envunion1600  fun1546 ,    struct Maybe_155  default1548 ) {
    struct envunion1600  temp1601 = (  fun1546 );
    return ( {  struct Maybe_155  dref1549 = (  x1544 ) ; dref1549.tag == Maybe_155_Just_t ? ( temp1601.fun ( &temp1601.env ,  ( dref1549 .stuff .Maybe_155_Just_s .field0 ) ) ) : (  default1548 ) ; } );
}

static  struct Maybe_155   lam1602 (   struct env1599* env ,    int32_t  lm1574 ) {
    return ( ( Maybe_155_Just ) ( ( (  min670 ) ( (  lm1574 ) ,  ( env->x1505 ) ) ) ) );
}

static  struct Maybe_155   lam1597 (    int32_t  x1505 ,    struct Maybe_155  last_dash_min1507 ) {
    struct env1599 envinst1599 = {
        .x1505 =  x1505 ,
    };
    return ( (  maybe1598 ) ( (  last_dash_min1507 ) ,  ( (struct envunion1600){ .fun = (  struct Maybe_155  (*) (  struct env1599*  ,    int32_t  ) )lam1602 , .env =  envinst1599 } ) ,  ( ( Maybe_155_Just ) ( (  x1505 ) ) ) ) );
}

static  struct Maybe_155   minimum1587 (    struct Map_1588  it1503 ) {
    return ( (  reduce1591 ) ( (  it1503 ) ,  ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) ,  (  lam1597 ) ) );
}

static  struct Map_1588   map1603 (    struct Range_150  iterable772 ,   struct envunion1590  fun774 ) {
    struct RangeIter_153  it775 = ( (  into_dash_iter154 ) ( (  iterable772 ) ) );
    return ( ( Map_1588_Map ) ( (  it775 ) ,  (  fun774 ) ) );
}

static  int32_t   lam1604 (   struct env1589* env ,    int32_t  ln4504 ) {
    return ( (  indent_dash_at_dash_line1157 ) ( ( env->self4500 ) ,  (  ln4504 ) ) );
}

struct env1606 {
    ;
    ;
    struct Pane_221 *  self4500;
};

struct envunion1607 {
    bool  (*fun) (  struct env1606*  ,    int32_t  );
    struct env1606 env;
};

struct env1609 {
    struct envunion1607  fun1110;
};

struct envunion1610 {
    bool  (*fun) (  struct env1609*  ,    int32_t  ,    bool  );
    struct env1609 env;
};

static  bool   reduce1608 (    struct Range_150  iterable1077 ,    bool  base1079 ,   struct envunion1610  fun1081 ) {
    bool  x1082 = (  base1079 );
    struct RangeIter_153  it1083 = ( (  into_dash_iter154 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1084 = ( (  next156 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_155_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_155_Just_t ) {
                struct envunion1610  temp1611 = (  fun1081 );
                x1082 = ( temp1611.fun ( &temp1611.env ,  ( dref1084 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1612 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1612);
    abort ( );
    ( Unit_8_Unit );
    bool  temp1613;
    return (  temp1613 );
}

static  bool   lam1614 (   struct env1609* env ,    int32_t  e1112 ,    bool  x1114 ) {
    struct envunion1607  temp1615 = ( env->fun1110 );
    return ( ( temp1615.fun ( &temp1615.env ,  (  e1112 ) ) ) && (  x1114 ) );
}

static  bool   all1605 (    struct Range_150  it1108 ,   struct envunion1607  fun1110 ) {
    struct env1609 envinst1609 = {
        .fun1110 =  fun1110 ,
    };
    return ( (  reduce1608 ) ( (  it1108 ) ,  ( true ) ,  ( (struct envunion1610){ .fun = (  bool  (*) (  struct env1609*  ,    int32_t  ,    bool  ) )lam1614 , .env =  envinst1609 } ) ) );
}

static  bool   is_dash_just1617 (    struct Maybe_1523  m1522 ) {
    struct Maybe_1523  dref1523 = (  m1522 );
    if ( dref1523.tag == Maybe_1523_None_t ) {
        return ( false );
    }
    else {
        if ( dref1523.tag == Maybe_1523_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1619 (    struct Char_65  c4432 ) {
    return ( ( !  eq480 ( (  c4432 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1347 ) ( (  c4432 ) ) ) );
}

static  struct Maybe_1523   line_dash_begins_dash_with_dash_comment1618 (    struct Pane_221 *  self4426 ,    int32_t  line4428 ) {
    int32_t  indent4429 = ( (  indent_dash_at_dash_line1157 ) ( (  self4426 ) ,  (  line4428 ) ) );
    if ( (  eq480 ( ( (  char_dash_at1348 ) ( (  self4426 ) ,  ( (  mk706 ) ( (  line4428 ) ,  (  indent4429 ) ) ) ) ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4430 = (  op_dash_add159 ( (  indent4429 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1619 ) ( ( (  char_dash_at1348 ) ( (  self4426 ) ,  ( (  mk706 ) ( (  line4428 ) ,  (  i4430 ) ) ) ) ) ) ) ) {
            i4430 = (  op_dash_add159 ( (  i4430 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1523_Just ) ( ( ( Tuple2_232_Tuple2 ) ( ( (  mk706 ) ( (  line4428 ) ,  (  indent4429 ) ) ) ,  ( (  mk706 ) ( (  line4428 ) ,  (  i4430 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1523) { .tag = Maybe_1523_None_t } );
    }
}

static  bool   lam1616 (   struct env1606* env ,    int32_t  ln4507 ) {
    return ( (  is_dash_just1617 ) ( ( (  line_dash_begins_dash_with_dash_comment1618 ) ( ( env->self4500 ) ,  (  ln4507 ) ) ) ) );
}

static  struct Tuple2_232   undefined1625 (  ) {
    struct Tuple2_232  temp1626;
    return (  temp1626 );
}

static  struct Tuple2_232   or_dash_fail1624 (    struct Maybe_1523  x1305 ,    struct StrView_27  errmsg1307 ) {
    struct Maybe_1523  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_1523_None_t ) {
        ( (  panic1223 ) ( (  errmsg1307 ) ) );
        return ( (  undefined1625 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_1523_Just_t ) {
            return ( dref1308 .stuff .Maybe_1523_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1583 (   struct env230* env ,    struct Pane_221 *  self4500 ) {
    int32_t  from_dash_line4501 = ( ( (  min_dash_pos1506 ) ( (  self4500 ) ) ) .f_line );
    int32_t  to_dash_line4502 = ( ( (  max_dash_pos1493 ) ( (  self4500 ) ) ) .f_line );
    struct env1589 envinst1589 = {
        .self4500 =  self4500 ,
    };
    int32_t  min_dash_indent4505 = ( (  or_dash_fail1584 ) ( ( (  minimum1587 ) ( ( (  map1603 ) ( ( (  to163 ) ( (  from_dash_line4501 ) ,  (  to_dash_line4502 ) ) ) ,  ( (struct envunion1590){ .fun = (  int32_t  (*) (  struct env1589*  ,    int32_t  ) )lam1604 , .env =  envinst1589 } ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1606 envinst1606 = {
        .self4500 =  self4500 ,
    };
    bool  all_dash_have_dash_comment4508 = ( (  all1605 ) ( ( (  to163 ) ( (  from_dash_line4501 ) ,  (  to_dash_line4502 ) ) ) ,  ( (struct envunion1607){ .fun = (  bool  (*) (  struct env1606*  ,    int32_t  ) )lam1616 , .env =  envinst1606 } ) ) );
    struct envunion233  temp1620 = ( (struct envunion233){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  ) )begin_dash_changeset1553 , .env =  env->envinst132 } );
    ( temp1620.fun ( &temp1620.env ,  ( ( * (  self4500 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4500 ) ) .f_cursor ) , .f_sel = ( ( * (  self4500 ) ) .f_sel ) } ) ) );
    struct RangeIter_153  temp1621 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_line4501 ) ,  (  to_dash_line4502 ) ) ) );
    while (true) {
        struct Maybe_155  __cond1622 =  next156 (&temp1621);
        if (  __cond1622 .tag == 0 ) {
            break;
        }
        int32_t  line4510 =  __cond1622 .stuff .Maybe_155_Just_s .field0;
        struct Char_65  comment_dash_str4511 = ( (  from_dash_charlike356 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4508 ) ) ) {
            ( (  set_dash_cursors1102 ) ( (  self4500 ) ,  ( (  mk706 ) ( (  line4510 ) ,  (  min_dash_indent4505 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
            struct envunion234  temp1623 = ( (struct envunion234){ .fun = (  enum Unit_8  (*) (  struct env206*  ,    struct Pane_221 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1177 , .env =  env->envinst206 } );
            ( temp1623.fun ( &temp1623.env ,  (  self4500 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_232  tup4512 = ( (  or_dash_fail1624 ) ( ( (  line_dash_begins_dash_with_dash_comment1618 ) ( (  self4500 ) ,  (  line4510 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion231  temp1627 = ( (struct envunion231){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
            ( temp1627.fun ( &temp1627.env ,  (  self4500 ) ,  ( ( Tuple2_232_Tuple2 ) ( ( (  fst1416 ) ( (  tup4512 ) ) ) ,  ( (  snd1417 ) ( (  tup4512 ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1559 ) ( ( ( * (  self4500 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1100 (   struct env255* env ,    struct Editor_250 *  ed4642 ,    struct Key_271  key4644 ) {
    struct Key_271  dref4645 = (  key4644 );
    if ( dref4645.tag == Key_271_Char_t ) {
        if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4642 ) .f_running = ( false );
        } else {
            if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1101 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ) );
            } else {
                if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1146 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ) );
                } else {
                    if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1149 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1153 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( Mode_222_Insert ) ) );
                            } else {
                                if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1156 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ) );
                                    ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( Mode_222_Insert ) ) );
                                } else {
                                    if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1174 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ) );
                                        ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( Mode_222_Insert ) ) );
                                    } else {
                                        if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_221 *  pane4647 = ( (  pane1145 ) ( (  ed4642 ) ) );
                                            int32_t  indent4648 = ( (  indent_dash_at_dash_line1157 ) ( (  pane4647 ) ,  ( ( ( * (  pane4647 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1174 ) ( (  pane4647 ) ) );
                                            struct envunion260  temp1176 = ( (struct envunion260){ .fun = (  enum Unit_8  (*) (  struct env206*  ,    struct Pane_221 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1177 , .env =  env->envinst206 } );
                                            ( temp1176.fun ( &temp1176.env ,  (  pane4647 ) ,  ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1146 ) ( (  pane4647 ) ) );
                                            struct envunion258  temp1315 = ( (struct envunion258){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_221 *  ,    int32_t  ) )indent_dash_at_dash_current1316 , .env =  env->envinst228 } );
                                            ( temp1315.fun ( &temp1315.env ,  (  pane4647 ) ,  (  indent4648 ) ) );
                                            ( (  set_dash_mode1154 ) ( (  pane4647 ) ,  ( Mode_222_Insert ) ) );
                                        } else {
                                            if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_221 *  pane4649 = ( (  pane1145 ) ( (  ed4642 ) ) );
                                                int32_t  indent4650 = ( (  indent_dash_at_dash_line1157 ) ( (  pane4649 ) ,  ( ( ( * (  pane4649 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1322 ) ( (  pane4649 ) ) );
                                                struct envunion1325  temp1324 = ( (struct envunion1325){ .fun = (  enum Unit_8  (*) (  struct env206*  ,    struct Pane_221 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1177 , .env =  env->envinst206 } );
                                                ( temp1324.fun ( &temp1324.env ,  (  pane4649 ) ,  ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1327  temp1326 = ( (struct envunion1327){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_221 *  ,    int32_t  ) )indent_dash_at_dash_current1316 , .env =  env->envinst228 } );
                                                ( temp1326.fun ( &temp1326.env ,  (  pane4649 ) ,  (  indent4650 ) ) );
                                                ( (  set_dash_mode1154 ) ( (  pane4649 ) ,  ( Mode_222_Insert ) ) );
                                            } else {
                                                if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1328 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( MoveDirection_1329_MoveFwd ) ,  ( MoveTarget_1330_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1328 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( MoveDirection_1329_MoveFwd ) ,  ( MoveTarget_1330_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1328 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( MoveDirection_1329_MoveBwd ) ,  ( MoveTarget_1330_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion264  temp1368 = ( (struct envunion264){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_221 *  ) )redo1369 , .env =  env->envinst213 } );
                                                                ( temp1368.fun ( &temp1368.env ,  ( (  pane1145 ) ( (  ed4642 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion263  temp1393 = ( (struct envunion263){ .fun = (  enum Unit_8  (*) (  struct env211*  ,    struct Pane_221 *  ) )undo1394 , .env =  env->envinst211 } );
                                                                    ( temp1393.fun ( &temp1393.env ,  ( (  pane1145 ) ( (  ed4642 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion257  temp1411 = ( (struct envunion257){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_250 *  ) )copy_dash_selection_dash_to_dash_clipboard1412 , .env =  env->envinst235 } );
                                                                        ( temp1411.fun ( &temp1411.env ,  (  ed4642 ) ) );
                                                                        struct envunion256  temp1424 = ( (struct envunion256){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
                                                                        ( temp1424.fun ( &temp1424.env ,  ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( (  selection1413 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( Mode_222_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1433  temp1432 = ( (struct envunion1433){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_250 *  ) )copy_dash_selection_dash_to_dash_clipboard1412 , .env =  env->envinst235 } );
                                                                            ( temp1432.fun ( &temp1432.env ,  (  ed4642 ) ) );
                                                                            struct envunion1435  temp1434 = ( (struct envunion1435){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_221 *  ,    struct Tuple2_232  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
                                                                            ( temp1434.fun ( &temp1434.env ,  ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( (  selection1413 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( Mode_222_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1437  temp1436 = ( (struct envunion1437){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_250 *  ) )copy_dash_selection_dash_to_dash_clipboard1412 , .env =  env->envinst235 } );
                                                                                ( temp1436.fun ( &temp1436.env ,  (  ed4642 ) ) );
                                                                                size_t  bytes_dash_yanked4651 = ( (  num_dash_bytes1141 ) ( ( (  or_dash_else601 ) ( ( ( * (  ed4642 ) ) .f_clipboard ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion259  temp1438 = ( (struct envunion259){ .fun = (  enum Unit_8  (*) (  struct env239*  ,    struct Editor_250 *  ,    struct StrConcat_81  ) )set_dash_msg1439 , .env =  env->envinst239 } );
                                                                                ( temp1438.fun ( &temp1438.env ,  (  ed4642 ) ,  ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4651 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1488 envinst1488 = {
                                                                                        .envinst215 = env->envinst215 ,
                                                                                        .ed4642 =  ed4642 ,
                                                                                    };
                                                                                    ( (  if_dash_just1487 ) ( ( ( * (  ed4642 ) ) .f_clipboard ) ,  ( (struct envunion1490){ .fun = (  enum Unit_8  (*) (  struct env1488*  ,    struct StrView_27  ) )lam1492 , .env =  envinst1488 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1501 envinst1501 = {
                                                                                            .ed4642 =  ed4642 ,
                                                                                            .envinst215 = env->envinst215 ,
                                                                                        };
                                                                                        ( (  if_dash_just1500 ) ( ( ( * (  ed4642 ) ) .f_clipboard ) ,  ( (struct envunion1503){ .fun = (  enum Unit_8  (*) (  struct env1501*  ,    struct StrView_27  ) )lam1505 , .env =  envinst1501 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1510 envinst1510 = {
                                                                                                .ed4642 =  ed4642 ,
                                                                                                .envinst215 = env->envinst215 ,
                                                                                            };
                                                                                            ( (  if_dash_just1509 ) ( ( ( * (  ed4642 ) ) .f_clipboard ) ,  ( (struct envunion1512){ .fun = (  enum Unit_8  (*) (  struct env1510*  ,    struct StrView_27  ) )lam1514 , .env =  envinst1510 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1517 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( Mode_222_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1521 ) ( ( ( ( * (  ed4642 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4642 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4642 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4642 ) .f_mode = ( ( EditorMode_251_Cmd ) ( ( ( * ( (  pane1145 ) ( (  ed4642 ) ) ) ) .f_cursor ) ,  ( (  mk1443 ) ( ( ( * (  ed4642 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4642 ) .f_mode = ( ( EditorMode_251_Search ) ( ( ( * ( (  pane1145 ) ( (  ed4642 ) ) ) ) .f_cursor ) ,  ( (  mk1443 ) ( ( ( * (  ed4642 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1522 ) ( (  ed4642 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1541 ) ( (  ed4642 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion265  temp1550 = ( (struct envunion265){ .fun = (  enum Unit_8  (*) (  struct env219*  ,    struct Pane_221 *  ) )indent_dash_selection1551 , .env =  env->envinst219 } );
                                                                                                                        ( temp1550.fun ( &temp1550.env ,  ( (  pane1145 ) ( (  ed4642 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion262  temp1567 = ( (struct envunion262){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_221 *  ) )dedent_dash_selection1568 , .env =  env->envinst225 } );
                                                                                                                            ( temp1567.fun ( &temp1567.env ,  ( (  pane1145 ) ( (  ed4642 ) ) ) ) );
                                                                                                                        } else {
                                                                                                                            if ( (  eq947 ( ( dref4645 .stuff .Key_271_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
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
        if ( dref4645.tag == Key_271_Escape_t ) {
            ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  ( Mode_222_Normal ) ) );
        }
        else {
            if ( dref4645.tag == Key_271_Ctrl_t ) {
                if ( (  eq947 ( ( dref4645 .stuff .Key_271_Ctrl_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion261  temp1582 = ( (struct envunion261){ .fun = (  enum Unit_8  (*) (  struct env230*  ,    struct Pane_221 *  ) )toggle_dash_comment1583 , .env =  env->envinst230 } );
                    ( temp1582.fun ( &temp1582.env ,  ( (  pane1145 ) ( (  ed4642 ) ) ) ) );
                } else {
                    if ( (  eq947 ( ( dref4645 .stuff .Key_271_Ctrl_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1153 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq947 ( ( dref4645 .stuff .Key_271_Ctrl_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1149 ) ( ( (  pane1145 ) ( (  ed4642 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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

struct envunion1629 {
    enum Unit_8  (*fun) (  struct env255*  ,    struct Editor_250 *  ,    struct Key_271  );
    struct env255 env;
};

static  enum Unit_8   backspace1633 (   struct env209* env ,    struct Pane_221 *  self4441 ) {
    struct Pos_26  prev_dash_cur4442 = ( ( * (  self4441 ) ) .f_cursor );
    ( (  move_dash_left1101 ) ( (  self4441 ) ) );
    struct envunion210  temp1634 = ( (struct envunion210){ .fun = (  struct Maybe_208  (*) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  ) )change1179 , .env =  env->envinst127 } );
    ( temp1634.fun ( &temp1634.env ,  ( ( * (  self4441 ) ) .f_buf ) ,  ( ( * (  self4441 ) ) .f_cursor ) ,  (  prev_dash_cur4442 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_208) { .tag = Maybe_208_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1636 {
    char _arr [1];
};

static  char *   cast1637 (    struct Array_1636 *  x385 ) {
    return ( (char * ) (  x385 ) );
}

static  struct Slice_961   as_dash_slice1635 (    struct Array_1636 *  arr1987 ) {
    return ( (struct Slice_961) { .f_ptr = ( (  cast1637 ) ( (  arr1987 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1636   from_dash_listlike1639 (    struct Array_1636 *  self359 ) {
    return ( * (  self359 ) );
}

struct envunion1642 {
    enum Unit_8  (*fun) (  struct env206*  ,    struct Pane_221 *  ,    struct StrView_27  );
    struct env206 env;
};

struct Scanner_1645 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1645   mk_dash_from_dash_strview1647 (    struct StrView_27  s3320 ) {
    return ( (struct Scanner_1645) { .f_s = (  s3320 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1653 {
    struct StrViewIter_469  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1652 {
    struct TakeWhile_1653  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1652 Map_1652_Map (  struct TakeWhile_1653  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1652 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1652   into_dash_iter1655 (    struct Map_1652  self763 ) {
    return (  self763 );
}

static  struct Maybe_299   next1657 (    struct TakeWhile_1653 *  self948 ) {
    struct Maybe_299  mx949 = ( (  next474 ) ( ( & ( ( * (  self948 ) ) .f_it ) ) ) );
    struct Maybe_299  dref950 = (  mx949 );
    if ( dref950.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref950.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self948 ) ) .f_pred ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct Maybe_248   next1656 (    struct Map_1652 *  dref765 ) {
    struct Maybe_299  dref768 = ( (  next1657 ) ( ( & ( (* dref765 ) .field0 ) ) ) );
    if ( dref768.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    else {
        if ( dref768.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_248_Just ) ( ( ( (* dref765 ) .field1 ) ( ( dref768 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1654 (    struct Map_1652  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    size_t  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct Map_1652  it1083 = ( (  into_dash_iter1655 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_248  dref1084 = ( (  next1656 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_248_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_248_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_248_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1658 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1658);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1659;
    return (  temp1659 );
}

static  size_t   lam1660 (    size_t  v1096 ,    size_t  s1098 ) {
    return (  op_dash_add313 ( (  v1096 ) , (  s1098 ) ) );
}

static  size_t   sum1651 (    struct Map_1652  it1094 ) {
    return ( (  reduce1654 ) ( (  it1094 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1660 ) ) );
}

static  struct TakeWhile_1653   into_dash_iter1662 (    struct TakeWhile_1653  self945 ) {
    return (  self945 );
}

static  struct Map_1652   map1661 (    struct TakeWhile_1653  iterable772 ,    size_t (*  fun774 )(    struct Char_65  ) ) {
    struct TakeWhile_1653  it775 = ( (  into_dash_iter1662 ) ( (  iterable772 ) ) );
    return ( ( Map_1652_Map ) ( (  it775 ) ,  (  fun774 ) ) );
}

static  struct TakeWhile_1653   take_dash_while1663 (    struct StrViewIter_469  it954 ,    bool (*  pred956 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1653) { .f_it = ( (  into_dash_iter470 ) ( (  it954 ) ) ) , .f_pred = (  pred956 ) } );
}

static  size_t   lam1664 (    struct Char_65  c2568 ) {
    return ( (  c2568 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1650 (    struct StrView_27  self2564 ,    bool (*  fun2566 )(    struct Char_65  ) ) {
    size_t  bi2569 = ( (  sum1651 ) ( ( (  map1661 ) ( ( (  take_dash_while1663 ) ( ( (  chars471 ) ( (  self2564 ) ) ) ,  (  fun2566 ) ) ) ,  (  lam1664 ) ) ) ) );
    return ( (  byte_dash_substr496 ) ( (  self2564 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2569 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1649 (    struct Scanner_1645 *  sc3395 ,    bool (*  fun3397 )(    struct Char_65  ) ) {
    struct StrView_27  s3398 = ( (  take_dash_while1650 ) ( ( ( * (  sc3395 ) ) .f_s ) ,  (  fun3397 ) ) );
    (*  sc3395 ) .f_s = ( (  byte_dash_substr_dash_from475 ) ( ( ( * (  sc3395 ) ) .f_s ) ,  ( (  num_dash_bytes1141 ) ( (  s3398 ) ) ) ) );
    return (  s3398 );
}

static  enum Unit_8   drop_dash_str_dash_while1648 (    struct Scanner_1645 *  sc3401 ,    bool (*  fun3403 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1649 ) ( (  sc3401 ) ,  (  fun3403 ) ) );
    return ( Unit_8_Unit );
}

struct TakeWhile_1669 {
    struct StrViewIter_469  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1668 {
    struct TakeWhile_1669  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1668 Map_1668_Map (  struct TakeWhile_1669  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1668 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1668   into_dash_iter1671 (    struct Map_1668  self763 ) {
    return (  self763 );
}

static  struct Maybe_299   next1673 (    struct TakeWhile_1669 *  self948 ) {
    struct Maybe_299  mx949 = ( (  next474 ) ( ( & ( ( * (  self948 ) ) .f_it ) ) ) );
    struct Maybe_299  dref950 = (  mx949 );
    if ( dref950.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref950.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self948 ) ) .f_pred ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct Maybe_248   next1672 (    struct Map_1668 *  dref765 ) {
    struct Maybe_299  dref768 = ( (  next1673 ) ( ( & ( (* dref765 ) .field0 ) ) ) );
    if ( dref768.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    else {
        if ( dref768.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_248_Just ) ( ( ( (* dref765 ) .field1 ) ( ( dref768 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1670 (    struct Map_1668  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    size_t  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct Map_1668  it1083 = ( (  into_dash_iter1671 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_248  dref1084 = ( (  next1672 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_248_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_248_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_248_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1674 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1674);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1675;
    return (  temp1675 );
}

static  size_t   lam1676 (    size_t  v1096 ,    size_t  s1098 ) {
    return (  op_dash_add313 ( (  v1096 ) , (  s1098 ) ) );
}

static  size_t   sum1667 (    struct Map_1668  it1094 ) {
    return ( (  reduce1670 ) ( (  it1094 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1676 ) ) );
}

static  struct TakeWhile_1669   into_dash_iter1678 (    struct TakeWhile_1669  self945 ) {
    return (  self945 );
}

static  struct Map_1668   map1677 (    struct TakeWhile_1669  iterable772 ,    size_t (*  fun774 )(    struct Char_65  ) ) {
    struct TakeWhile_1669  it775 = ( (  into_dash_iter1678 ) ( (  iterable772 ) ) );
    return ( ( Map_1668_Map ) ( (  it775 ) ,  (  fun774 ) ) );
}

static  struct TakeWhile_1669   take_dash_while1679 (    struct StrViewIter_469  it954 ,    bool (*  pred956 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1669) { .f_it = ( (  into_dash_iter470 ) ( (  it954 ) ) ) , .f_pred = (  pred956 ) } );
}

static  size_t   lam1680 (    struct Char_65  c2568 ) {
    return ( (  c2568 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1666 (    struct StrView_27  self2564 ,    bool (*  fun2566 )(    struct Char_65  ) ) {
    size_t  bi2569 = ( (  sum1667 ) ( ( (  map1677 ) ( ( (  take_dash_while1679 ) ( ( (  chars471 ) ( (  self2564 ) ) ) ,  (  fun2566 ) ) ) ,  (  lam1680 ) ) ) ) );
    return ( (  byte_dash_substr496 ) ( (  self2564 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2569 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1665 (    struct Scanner_1645 *  sc3395 ,    bool (*  fun3397 )(    struct Char_65  ) ) {
    struct StrView_27  s3398 = ( (  take_dash_while1666 ) ( ( ( * (  sc3395 ) ) .f_s ) ,  (  fun3397 ) ) );
    (*  sc3395 ) .f_s = ( (  byte_dash_substr_dash_from475 ) ( ( ( * (  sc3395 ) ) .f_s ) ,  ( (  num_dash_bytes1141 ) ( (  s3398 ) ) ) ) );
    return (  s3398 );
}

static  bool   is_dash_not_dash_whitespace1681 (    struct Char_65  c1455 ) {
    return ( ! ( (  is_dash_whitespace1347 ) ( (  c1455 ) ) ) );
}

static  struct Maybe_299   head1683 (    struct StrView_27  it1126 ) {
    struct StrViewIter_469  temp1684 = ( (  into_dash_iter472 ) ( (  it1126 ) ) );
    return ( (  next474 ) ( ( &temp1684 ) ) );
}

static  bool   null1682 (    struct StrView_27  it1135 ) {
    struct Maybe_299  dref1136 = ( (  head1683 ) ( (  it1135 ) ) );
    if ( dref1136.tag == Maybe_299_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_78   maybe1687 (    struct Maybe_78  x1544 ,    struct Maybe_78 (*  fun1546 )(    struct StrView_27  ) ,    struct Maybe_78  default1548 ) {
    return ( {  struct Maybe_78  dref1549 = (  x1544 ) ; dref1549.tag == Maybe_78_Just_t ? ( (  fun1546 ) ( ( dref1549 .stuff .Maybe_78_Just_s .field0 ) ) ) : (  default1548 ) ; } );
}

static  bool   is_dash_none1688 (    struct Maybe_78  m1526 ) {
    struct Maybe_78  dref1527 = (  m1526 );
    if ( dref1527.tag == Maybe_78_None_t ) {
        return ( true );
    }
    else {
        if ( dref1527.tag == Maybe_78_Just_t ) {
            return ( false );
        }
    }
}

struct env1697 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2807;
};

struct envunion1698 {
    enum Unit_8  (*fun) (  struct env1697*  ,    struct Char_65  );
    struct env1697 env;
};

static  enum Unit_8   for_dash_each1696 (    struct StrConcatIter_1356  iterable1058 ,   struct envunion1698  fun1060 ) {
    struct StrConcatIter_1356  temp1699 = ( (  into_dash_iter1358 ) ( (  iterable1058 ) ) );
    struct StrConcatIter_1356 *  it1061 = ( &temp1699 );
    while ( ( true ) ) {
        struct Maybe_299  dref1062 = ( (  next1359 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_299_Just_t ) {
                struct envunion1698  temp1700 = (  fun1060 );
                ( temp1700.fun ( &temp1700.env ,  ( dref1062 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1701 (   struct env1697* env ,    struct Char_65  c2811 ) {
    struct envunion64  temp1702 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    return ( temp1702.fun ( &temp1702.env ,  ( env->builder2807 ) ,  (  c2811 ) ) );
}

static  enum Unit_8   write1695 (   struct env68* env ,    struct StrBuilder_62 *  builder2807 ,    struct StrConcat_71  s2809 ) {
    struct env1697 envinst1697 = {
        .envinst60 = env->envinst60 ,
        .builder2807 =  builder2807 ,
    };
    ( (  for_dash_each1696 ) ( ( (  chars1360 ) ( (  s2809 ) ) ) ,  ( (struct envunion1698){ .fun = (  enum Unit_8  (*) (  struct env1697*  ,    struct Char_65  ) )lam1701 , .env =  envinst1697 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1693 (   struct env69* env ,    struct StrBuilder_62 *  builder2814 ,    struct StrView_27  s2816 ) {
    struct envunion70  temp1694 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  ) )write1695 , .env =  env->envinst68 } );
    return ( temp1694.fun ( &temp1694.env ,  (  builder2814 ) ,  ( ( StrConcat_71_StrConcat ) ( (  s2816 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1704 (  ) {
    struct StrView_27  temp1705;
    return (  temp1705 );
}

static  struct StrView_27   or_dash_fail1703 (    struct Maybe_78  x1305 ,    struct StrView_27  errmsg1307 ) {
    struct Maybe_78  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_78_None_t ) {
        ( (  panic1223 ) ( (  errmsg1307 ) ) );
        return ( (  undefined1704 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_78_Just_t ) {
            return ( dref1308 .stuff .Maybe_78_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_469   chars1708 (    struct StrBuilder_62  s2859 ) {
    return ( (  into_dash_iter472 ) ( ( (  as_dash_str1484 ) ( ( & (  s2859 ) ) ) ) ) );
}

static  struct StrViewIter_469   chars1707 (    struct StrBuilder_62 *  self1706 ) {
    return ( (  chars1708 ) ( ( * (  self1706 ) ) ) );
}

static  int32_t   fprintf_dash_char1709 (    FILE *  file1431 ,    struct Char_65  c1433 ) {
    struct Array_340  temp1711;
    struct Array_340  temp1710 = (  temp1711 );
    struct Char_65  c1434 = ( (  regularize339 ) ( (  c1433 ) ,  ( &temp1710 ) ) );
    return ( ( fprintf ) ( (  file1431 ) ,  ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32331 ) ( ( (  c1434 ) .f_num_dash_bytes ) ) ) ,  ( (  c1434 ) .f_ptr ) ) );
}

static  bool   unreachable1712 (  ) {
    ( (  println1353 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1362 ) ( ) );
}

static  bool   try_dash_write_dash_contents1706 (    const char*  filename3096 ,    struct StrBuilder_62 *  contents3098 ) {
    FILE *  file3099 = ( ( fopen ) ( (  filename3096 ) ,  ( (  from_dash_charlike547 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null548 ) ( (  file3099 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_469  it3100 = ( (  chars1707 ) ( (  contents3098 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref3101 = ( (  next474 ) ( ( & (  it3100 ) ) ) );
        if ( dref3101.tag == Maybe_299_None_t ) {
            ( ( fclose ) ( (  file3099 ) ) );
            return ( true );
        }
        else {
            if ( dref3101.tag == Maybe_299_Just_t ) {
                int32_t  chars_dash_written3103 = ( (  fprintf_dash_char1709 ) ( (  file3099 ) ,  ( dref3101 .stuff .Maybe_299_Just_s .field0 ) ) );
                if ( (  cmp157 ( (  chars_dash_written3103 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1712 ) ( ) );
}

static  enum Unit_8   free1713 (    struct StrBuilder_62 *  builder2851 ) {
    ( (  free639 ) ( ( & ( ( * (  builder2851 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1714 (    struct Maybe_78  m1522 ) {
    struct Maybe_78  dref1523 = (  m1522 );
    if ( dref1523.tag == Maybe_78_None_t ) {
        return ( false );
    }
    else {
        if ( dref1523.tag == Maybe_78_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_248   write_dash_to_dash_file1686 (   struct env110* env ,    struct TextBuf_105 *  self3918 ,    struct Maybe_78  altname3920 ) {
    struct Maybe_78  filename3921 = ( (  maybe1687 ) ( (  altname3920 ) ,  ( Maybe_78_Just ) ,  ( ( * (  self3918 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1688 ) ( (  filename3921 ) ) ) ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    enum CAllocator_10  al3922 = ( ( * (  self3918 ) ) .f_al );
    struct StrBuilder_62  temp1689 = ( (  mk1443 ) ( (  al3922 ) ) );
    struct StrBuilder_62 *  sb3923 = ( &temp1689 );
    struct RangeIter_153  temp1690 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1148 ) ( (  self3918 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1691 =  next156 (&temp1690);
        if (  __cond1691 .tag == 0 ) {
            break;
        }
        int32_t  ln3925 =  __cond1691 .stuff .Maybe_155_Just_s .field0;
        struct envunion111  temp1692 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )writeln1693 , .env =  env->envinst69 } );
        ( temp1692.fun ( &temp1692.env ,  (  sb3923 ) ,  ( (  line1108 ) ( (  self3918 ) ,  (  ln3925 ) ) ) ) );
    }
    struct StrView_27  filename03926 = ( (  clone_dash_0517 ) ( ( (  or_dash_fail1703 ) ( (  filename3921 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"expect filename" ) ,  ( 15 ) ) ) ) ) ,  (  al3922 ) ) );
    bool  result3927 = ( (  try_dash_write_dash_contents1706 ) ( ( (  as_dash_const_dash_str557 ) ( (  filename03926 ) ) ) ,  (  sb3923 ) ) );
    ( (  free559 ) ( (  filename03926 ) ,  (  al3922 ) ) );
    ( (  free1713 ) ( (  sb3923 ) ) );
    if ( ( ! (  result3927 ) ) ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    if ( ( (  is_dash_just1714 ) ( (  altname3920 ) ) ) ) {
        struct Maybe_78  dref3928 = ( ( * (  self3918 ) ) .f_filename );
        if ( dref3928.tag == Maybe_78_Just_t ) {
            ( (  free559 ) ( ( dref3928 .stuff .Maybe_78_Just_s .field0 ) ,  (  al3922 ) ) );
        }
        else {
            if ( dref3928.tag == Maybe_78_None_t ) {
            }
        }
        (*  self3918 ) .f_filename = (  altname3920 );
    }
    return ( ( Maybe_248_Just ) ( ( (  num_dash_bytes1141 ) ( ( (  as_dash_str1484 ) ( (  sb3923 ) ) ) ) ) ) );
}

struct env1723 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2807;
};

struct envunion1724 {
    enum Unit_8  (*fun) (  struct env1723*  ,    struct Char_65  );
    struct env1723 env;
};

static  enum Unit_8   for_dash_each1722 (    struct StrViewIter_469  iterable1058 ,   struct envunion1724  fun1060 ) {
    struct StrViewIter_469  temp1725 = ( (  into_dash_iter470 ) ( (  iterable1058 ) ) );
    struct StrViewIter_469 *  it1061 = ( &temp1725 );
    while ( ( true ) ) {
        struct Maybe_299  dref1062 = ( (  next474 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_299_Just_t ) {
                struct envunion1724  temp1726 = (  fun1060 );
                ( temp1726.fun ( &temp1726.env ,  ( dref1062 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1727 (   struct env1723* env ,    struct Char_65  c2811 ) {
    struct envunion64  temp1728 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    return ( temp1728.fun ( &temp1728.env ,  ( env->builder2807 ) ,  (  c2811 ) ) );
}

static  enum Unit_8   write1721 (   struct env67* env ,    struct StrBuilder_62 *  builder2807 ,    struct StrView_27  s2809 ) {
    struct env1723 envinst1723 = {
        .envinst60 = env->envinst60 ,
        .builder2807 =  builder2807 ,
    };
    ( (  for_dash_each1722 ) ( ( (  chars471 ) ( (  s2809 ) ) ) ,  ( (struct envunion1724){ .fun = (  enum Unit_8  (*) (  struct env1723*  ,    struct Char_65  ) )lam1727 , .env =  envinst1723 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1718 (   struct env83* env ,    struct StrView_27  s2865 ,    enum CAllocator_10  al2867 ) {
    struct StrBuilder_62  temp1719 = ( (  mk1443 ) ( (  al2867 ) ) );
    struct StrBuilder_62 *  sb2868 = ( &temp1719 );
    struct envunion84  temp1720 = ( (struct envunion84){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1721 , .env =  env->envinst67 } );
    ( temp1720.fun ( &temp1720.env ,  (  sb2868 ) ,  (  s2865 ) ) );
    struct envunion75  temp1729 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    ( temp1729.fun ( &temp1729.env ,  (  sb2868 ) ,  ( (  nullchar556 ) ( ) ) ) );
    struct StrView_27  dynstr2869 = ( (  as_dash_str1484 ) ( (  sb2868 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2869 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub291 ( ( ( (  dynstr2869 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1716 (   struct env241* env ,    struct Editor_250 *  ed4582 ,    struct StrView_27  s4584 ) {
    ( (  reset_dash_msg1090 ) ( (  ed4582 ) ) );
    struct envunion242  temp1717 = ( (struct envunion242){ .fun = (  struct StrView_27  (*) (  struct env83*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1718 , .env =  env->envinst83 } );
    (*  ed4582 ) .f_msg = ( ( Maybe_78_Just ) ( ( temp1717.fun ( &temp1717.env ,  (  s4584 ) ,  ( ( * (  ed4582 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcatIter_1741 {
    struct StrViewIter_469  f_left;
    struct StrViewIter_469  f_right;
};

struct StrConcatIter_1740 {
    struct StrConcatIter_1741  f_left;
    struct AppendIter_1035  f_right;
};

struct StrCaseIter_1739 {
    enum {
        StrCaseIter_1739_StrCaseIter1_t,
        StrCaseIter_1739_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_469  field0;
        } StrCaseIter_1739_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1740  field0;
        } StrCaseIter_1739_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1739 StrCaseIter_1739_StrCaseIter1 (  struct StrViewIter_469  field0 ) {
    return ( struct StrCaseIter_1739 ) { .tag = StrCaseIter_1739_StrCaseIter1_t, .stuff = { .StrCaseIter_1739_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1739 StrCaseIter_1739_StrCaseIter2 (  struct StrConcatIter_1740  field0 ) {
    return ( struct StrCaseIter_1739 ) { .tag = StrCaseIter_1739_StrCaseIter2_t, .stuff = { .StrCaseIter_1739_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1738 {
    struct StrViewIter_469  f_left;
    struct StrCaseIter_1739  f_right;
};

struct env1742 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2807;
};

struct envunion1743 {
    enum Unit_8  (*fun) (  struct env1742*  ,    struct Char_65  );
    struct env1742 env;
};

static  struct StrConcatIter_1738   into_dash_iter1745 (    struct StrConcatIter_1738  self1242 ) {
    return (  self1242 );
}

static  struct Maybe_299   next1749 (    struct StrConcatIter_1741 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next1748 (    struct StrConcatIter_1740 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next1749 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next1747 (    struct StrCaseIter_1739 *  self1682 ) {
    struct StrCaseIter_1739 *  dref1683 = (  self1682 );
    if ( (* dref1683 ).tag == StrCaseIter_1739_StrCaseIter1_t ) {
        return ( (  next474 ) ( ( & ( (* dref1683 ) .stuff .StrCaseIter_1739_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1683 ).tag == StrCaseIter_1739_StrCaseIter2_t ) {
            return ( (  next1748 ) ( ( & ( (* dref1683 ) .stuff .StrCaseIter_1739_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_299   next1746 (    struct StrConcatIter_1738 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1747 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1737 (    struct StrConcatIter_1738  iterable1058 ,   struct envunion1743  fun1060 ) {
    struct StrConcatIter_1738  temp1744 = ( (  into_dash_iter1745 ) ( (  iterable1058 ) ) );
    struct StrConcatIter_1738 *  it1061 = ( &temp1744 );
    while ( ( true ) ) {
        struct Maybe_299  dref1062 = ( (  next1746 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_299_Just_t ) {
                struct envunion1743  temp1750 = (  fun1060 );
                ( temp1750.fun ( &temp1750.env ,  ( dref1062 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrCase_1754 {
    enum {
        StrCase_1754_StrCase1_t,
        StrCase_1754_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_1754_StrCase1_s;
        struct {
            struct StrConcat_681  field0;
        } StrCase_1754_StrCase2_s;
    } stuff;
};

static struct StrCase_1754 StrCase_1754_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_1754 ) { .tag = StrCase_1754_StrCase1_t, .stuff = { .StrCase_1754_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1754 StrCase_1754_StrCase2 (  struct StrConcat_681  field0 ) {
    return ( struct StrCase_1754 ) { .tag = StrCase_1754_StrCase2_t, .stuff = { .StrCase_1754_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1741   into_dash_iter1761 (    struct StrConcat_682  dref1249 ) {
    return ( (struct StrConcatIter_1741) { .f_left = ( (  chars471 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars471 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_1741   chars1760 (    struct StrConcat_682  self1260 ) {
    return ( (  into_dash_iter1761 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_1740   into_dash_iter1759 (    struct StrConcat_681  dref1249 ) {
    return ( (struct StrConcatIter_1740) { .f_left = ( (  chars1760 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_1740   chars1758 (    struct StrConcat_681  self1260 ) {
    return ( (  into_dash_iter1759 ) ( (  self1260 ) ) );
}

static  struct StrCaseIter_1739   into_dash_iter1757 (    struct StrCase_1754  self1688 ) {
    struct StrCase_1754  dref1689 = (  self1688 );
    if ( dref1689.tag == StrCase_1754_StrCase1_t ) {
        return ( ( StrCaseIter_1739_StrCaseIter1 ) ( ( (  chars471 ) ( ( dref1689 .stuff .StrCase_1754_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1689.tag == StrCase_1754_StrCase2_t ) {
            return ( ( StrCaseIter_1739_StrCaseIter2 ) ( ( (  chars1758 ) ( ( dref1689 .stuff .StrCase_1754_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1739   chars1756 (    struct StrCase_1754  self1700 ) {
    return ( (  into_dash_iter1757 ) ( (  self1700 ) ) );
}

static  struct StrCaseIter_1739   chars1753 (    struct Maybe_78  self1714 ) {
    struct StrCase_1754  temp1755;
    struct StrCase_1754  c1715 = (  temp1755 );
    struct Maybe_78  dref1716 = (  self1714 );
    if ( dref1716.tag == Maybe_78_None_t ) {
        c1715 = ( ( StrCase_1754_StrCase1 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1716.tag == Maybe_78_Just_t ) {
            c1715 = ( ( StrCase_1754_StrCase2 ) ( ( ( StrConcat_681_StrConcat ) ( ( ( StrConcat_682_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Just(" ) ,  ( 5 ) ) ) ,  ( dref1716 .stuff .Maybe_78_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1756 ) ( (  c1715 ) ) );
}

static  struct StrConcatIter_1738   into_dash_iter1752 (    struct StrConcat_77  dref1249 ) {
    return ( (struct StrConcatIter_1738) { .f_left = ( (  chars471 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1753 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_1738   chars1751 (    struct StrConcat_77  self1260 ) {
    return ( (  into_dash_iter1752 ) ( (  self1260 ) ) );
}

static  enum Unit_8   lam1762 (   struct env1742* env ,    struct Char_65  c2811 ) {
    struct envunion64  temp1763 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    return ( temp1763.fun ( &temp1763.env ,  ( env->builder2807 ) ,  (  c2811 ) ) );
}

static  enum Unit_8   write1736 (   struct env63* env ,    struct StrBuilder_62 *  builder2807 ,    struct StrConcat_77  s2809 ) {
    struct env1742 envinst1742 = {
        .envinst60 = env->envinst60 ,
        .builder2807 =  builder2807 ,
    };
    ( (  for_dash_each1737 ) ( ( (  chars1751 ) ( (  s2809 ) ) ) ,  ( (struct envunion1743){ .fun = (  enum Unit_8  (*) (  struct env1742*  ,    struct Char_65  ) )lam1762 , .env =  envinst1742 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1733 (   struct env74* env ,    struct StrConcat_77  s2865 ,    enum CAllocator_10  al2867 ) {
    struct StrBuilder_62  temp1734 = ( (  mk1443 ) ( (  al2867 ) ) );
    struct StrBuilder_62 *  sb2868 = ( &temp1734 );
    struct envunion76  temp1735 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_77  ) )write1736 , .env =  env->envinst63 } );
    ( temp1735.fun ( &temp1735.env ,  (  sb2868 ) ,  (  s2865 ) ) );
    struct envunion75  temp1764 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    ( temp1764.fun ( &temp1764.env ,  (  sb2868 ) ,  ( (  nullchar556 ) ( ) ) ) );
    struct StrView_27  dynstr2869 = ( (  as_dash_str1484 ) ( (  sb2868 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2869 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub291 ( ( ( (  dynstr2869 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1731 (   struct env237* env ,    struct Editor_250 *  ed4582 ,    struct StrConcat_77  s4584 ) {
    ( (  reset_dash_msg1090 ) ( (  ed4582 ) ) );
    struct envunion238  temp1732 = ( (struct envunion238){ .fun = (  struct StrView_27  (*) (  struct env74*  ,    struct StrConcat_77  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1733 , .env =  env->envinst74 } );
    (*  ed4582 ) .f_msg = ( ( Maybe_78_Just ) ( ( temp1732.fun ( &temp1732.env ,  (  s4584 ) ,  ( ( * (  ed4582 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undefined1767 (  ) {
    enum Unit_8  temp1768;
    return (  temp1768 );
}

static  enum Unit_8   todo1766 (  ) {
    ( (  println1353 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1767 ) ( ) );
}

struct Tuple2_1772 {
    struct Maybe_299  field0;
    struct Maybe_299  field1;
};

static struct Tuple2_1772 Tuple2_1772_Tuple2 (  struct Maybe_299  field0 ,  struct Maybe_299  field1 ) {
    return ( struct Tuple2_1772 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1769 (    struct StrView_27  s1893 ,    struct StrView_27  beg1895 ) {
    struct StrViewIter_469  temp1770 = ( (  chars471 ) ( (  s1893 ) ) );
    struct StrViewIter_469 *  scs1896 = ( &temp1770 );
    struct StrViewIter_469  temp1771 = ( (  chars471 ) ( (  beg1895 ) ) );
    struct StrViewIter_469 *  begcs1897 = ( &temp1771 );
    while ( ( true ) ) {
        struct Tuple2_1772  dref1898 = ( ( Tuple2_1772_Tuple2 ) ( ( (  next474 ) ( (  scs1896 ) ) ) ,  ( (  next474 ) ( (  begcs1897 ) ) ) ) );
        if ( dref1898 .field0.tag == Maybe_299_Just_t && dref1898 .field1.tag == Maybe_299_Just_t ) {
            if ( ( !  eq480 ( ( dref1898 .field0 .stuff .Maybe_299_Just_s .field0 ) , ( dref1898 .field1 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref1898 .field0.tag == Maybe_299_None_t && dref1898 .field1.tag == Maybe_299_Just_t ) {
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

struct SliceAddressIter_1775 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_1775   into_dash_iter1776 (    struct SliceAddressIter_1775  self2206 ) {
    return (  self2206 );
}

static  struct SliceAddressIter_1775   addresses1778 (    struct Slice_11  slice2203 ) {
    return ( (struct SliceAddressIter_1775) { .f_slice = (  slice2203 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_11   to_dash_slice1779 (    struct List_9  l2467 ) {
    struct Line_12 *  ptr2468 = ( ( (  l2467 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2468 ) , .f_count = ( (  l2467 ) .f_count ) } );
}

static  struct SliceAddressIter_1775   addresses1777 (    struct List_9  l2471 ) {
    return ( (  addresses1778 ) ( ( (  to_dash_slice1779 ) ( (  l2471 ) ) ) ) );
}

struct Maybe_1781 {
    enum {
        Maybe_1781_None_t,
        Maybe_1781_Just_t,
    } tag;
    union {
        struct {
            struct Line_12 *  field0;
        } Maybe_1781_Just_s;
    } stuff;
};

static struct Maybe_1781 Maybe_1781_Just (  struct Line_12 *  field0 ) {
    return ( struct Maybe_1781 ) { .tag = Maybe_1781_Just_t, .stuff = { .Maybe_1781_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1781   next1782 (    struct SliceAddressIter_1775 *  self2209 ) {
    size_t  off2210 = ( ( * (  self2209 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2210 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2209 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1781) { .tag = Maybe_1781_None_t } );
    }
    struct Line_12 *  elem2211 = ( (  offset_dash_ptr401 ) ( ( ( ( * (  self2209 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2210 ) ) ) ) );
    (*  self2209 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2210 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1781_Just ) ( (  elem2211 ) ) );
}

static  enum Unit_8   set_dash_filetype1773 (    struct TextBuf_105 *  self4049 ,    enum Filetype_108  type4051 ) {
    (*  self4049 ) .f_filetype = (  type4051 );
    struct SliceAddressIter_1775  temp1774 =  into_dash_iter1776 ( ( (  addresses1777 ) ( ( ( * (  self4049 ) ) .f_buf ) ) ) );
    while (true) {
        struct Maybe_1781  __cond1780 =  next1782 (&temp1774);
        if (  __cond1780 .tag == 0 ) {
            break;
        }
        struct Line_12 *  line4053 =  __cond1780 .stuff .Maybe_1781_Just_s .field0;
        (*  line4053 ) .f_invalidated = ( true );
    }
    return ( Unit_8_Unit );
}

struct envunion1784 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env241 env;
};

struct env1787 {
    bool (*  fun1110 )(    struct Char_65  );
};

struct envunion1788 {
    bool  (*fun) (  struct env1787*  ,    struct Char_65  ,    bool  );
    struct env1787 env;
};

static  bool   reduce1786 (    struct StrView_27  iterable1077 ,    bool  base1079 ,   struct envunion1788  fun1081 ) {
    bool  x1082 = (  base1079 );
    struct StrViewIter_469  it1083 = ( (  into_dash_iter472 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1084 = ( (  next474 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_299_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_299_Just_t ) {
                struct envunion1788  temp1789 = (  fun1081 );
                x1082 = ( temp1789.fun ( &temp1789.env ,  ( dref1084 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1790 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1790);
    abort ( );
    ( Unit_8_Unit );
    bool  temp1791;
    return (  temp1791 );
}

static  bool   lam1792 (   struct env1787* env ,    struct Char_65  e1112 ,    bool  x1114 ) {
    return ( ( ( env->fun1110 ) ( (  e1112 ) ) ) && (  x1114 ) );
}

static  bool   all1785 (    struct StrView_27  it1108 ,    bool (*  fun1110 )(    struct Char_65  ) ) {
    struct env1787 envinst1787 = {
        .fun1110 =  fun1110 ,
    };
    return ( (  reduce1786 ) ( (  it1108 ) ,  ( true ) ,  ( (struct envunion1788){ .fun = (  bool  (*) (  struct env1787*  ,    struct Char_65  ,    bool  ) )lam1792 , .env =  envinst1787 } ) ) );
}

struct envunion1794 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env241 env;
};

static  enum Unit_8   run_dash_cmd1644 (   struct env246* env ,    struct Editor_250 *  ed4601 ,    struct StrView_27  s4603 ) {
    struct Scanner_1645  temp1646 = ( (  mk_dash_from_dash_strview1647 ) ( (  s4603 ) ) );
    struct Scanner_1645 *  sc4604 = ( &temp1646 );
    ( (  drop_dash_str_dash_while1648 ) ( (  sc4604 ) ,  (  is_dash_whitespace1347 ) ) );
    struct StrView_27  cmd4605 = ( (  take_dash_str_dash_while1665 ) ( (  sc4604 ) ,  (  is_dash_not_dash_whitespace1681 ) ) );
    ( (  drop_dash_str_dash_while1648 ) ( (  sc4604 ) ,  (  is_dash_whitespace1347 ) ) );
    if ( (  eq497 ( (  cmd4605 ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4601 ) .f_running = ( false );
    } else {
        if ( (  eq497 ( (  cmd4605 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq497 ( (  cmd4605 ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4606 = ( (  take_dash_str_dash_while1665 ) ( (  sc4604 ) ,  (  is_dash_not_dash_whitespace1681 ) ) );
                struct Maybe_78  filename4607 = ( ( (  null1682 ) ( (  filename4606 ) ) ) ? ( (struct Maybe_78) { .tag = Maybe_78_None_t } ) : ( ( Maybe_78_Just ) ( (  filename4606 ) ) ) );
                struct envunion247  temp1685 = ( (struct envunion247){ .fun = (  struct Maybe_248  (*) (  struct env110*  ,    struct TextBuf_105 *  ,    struct Maybe_78  ) )write_dash_to_dash_file1686 , .env =  env->envinst110 } );
                struct Maybe_248  write_dash_result4608 = ( temp1685.fun ( &temp1685.env ,  ( ( * ( (  pane1145 ) ( (  ed4601 ) ) ) ) .f_buf ) ,  (  filename4607 ) ) );
                struct Maybe_248  dref4609 = (  write_dash_result4608 );
                if ( dref4609.tag == Maybe_248_None_t ) {
                    if ( ( (  is_dash_none1688 ) ( (  filename4607 ) ) ) ) {
                        struct envunion254  temp1715 = ( (struct envunion254){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_250 *  ,    struct StrView_27  ) )set_dash_msg1716 , .env =  env->envinst241 } );
                        ( temp1715.fun ( &temp1715.env ,  (  ed4601 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"could not save changes (!?)" ) ,  ( 27 ) ) ) ) );
                    } else {
                        struct envunion249  temp1730 = ( (struct envunion249){ .fun = (  enum Unit_8  (*) (  struct env237*  ,    struct Editor_250 *  ,    struct StrConcat_77  ) )set_dash_msg1731 , .env =  env->envinst237 } );
                        ( temp1730.fun ( &temp1730.env ,  (  ed4601 ) ,  ( ( StrConcat_77_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4607 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4609.tag == Maybe_248_Just_t ) {
                        struct envunion253  temp1765 = ( (struct envunion253){ .fun = (  enum Unit_8  (*) (  struct env239*  ,    struct Editor_250 *  ,    struct StrConcat_81  ) )set_dash_msg1439 , .env =  env->envinst239 } );
                        ( temp1765.fun ( &temp1765.env ,  (  ed4601 ) ,  ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"written " ) ,  ( 8 ) ) ) ,  ( dref4609 .stuff .Maybe_248_Just_s .field0 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq497 ( (  cmd4605 ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1766 ) ( ) );
                } else {
                    if ( (  eq497 ( (  cmd4605 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_27  what4611 = ( (  take_dash_str_dash_while1665 ) ( (  sc4604 ) ,  (  is_dash_not_dash_whitespace1681 ) ) );
                        if ( (  eq497 ( (  what4611 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed4601 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq497 ( (  what4611 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed4601 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp292 ( ( (  count1115 ) ( ( (  chars471 ) ( (  what4611 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1769 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"absolute" ) ,  ( 8 ) ) ) ,  (  what4611 ) ) ) ) ) {
                                    (* (*  ed4601 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp292 ( ( (  count1115 ) ( ( (  chars471 ) ( (  what4611 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1769 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"relative" ) ,  ( 8 ) ) ) ,  (  what4611 ) ) ) ) ) {
                                        (* (*  ed4601 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq497 ( (  cmd4605 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"ft" ) ,  ( 2 ) ) ) ) ) ) {
                            struct StrView_27  type4612 = ( (  take_dash_str_dash_while1665 ) ( (  sc4604 ) ,  (  is_dash_not_dash_whitespace1681 ) ) );
                            struct TextBuf_105 *  tb4613 = ( ( * ( (  pane1145 ) ( (  ed4601 ) ) ) ) .f_buf );
                            if ( (  eq497 ( (  type4612 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"text" ) ,  ( 4 ) ) ) ) ) ) {
                                ( (  set_dash_filetype1773 ) ( (  tb4613 ) ,  ( Filetype_108_Text ) ) );
                            } else {
                                if ( (  eq497 ( (  type4612 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) ) ) ) {
                                    ( (  set_dash_filetype1773 ) ( (  tb4613 ) ,  ( Filetype_108_KC ) ) );
                                } else {
                                    if ( (  eq497 ( (  type4612 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                                        ( (  set_dash_filetype1773 ) ( (  tb4613 ) ,  ( Filetype_108_Markdown ) ) );
                                    } else {
                                        struct envunion1784  temp1783 = ( (struct envunion1784){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_250 *  ,    struct StrView_27  ) )set_dash_msg1716 , .env =  env->envinst241 } );
                                        ( temp1783.fun ( &temp1783.env ,  (  ed4601 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"unknown file type" ) ,  ( 17 ) ) ) ) );
                                    }
                                }
                            }
                        } else {
                            if ( (  eq497 ( (  cmd4605 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                            } else {
                                if ( ( (  all1785 ) ( (  cmd4605 ) ,  (  is_dash_digit984 ) ) ) ) {
                                } else {
                                    struct envunion1794  temp1793 = ( (struct envunion1794){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_250 *  ,    struct StrView_27  ) )set_dash_msg1716 , .env =  env->envinst241 } );
                                    ( temp1793.fun ( &temp1793.env ,  (  ed4601 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"unknown command" ) ,  ( 15 ) ) ) ) );
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

static  struct Char_65   from_dash_u81797 (    uint8_t  b1437 ) {
    return ( (  char_dash_from_dash_u81054 ) ( (  b1437 ) ) );
}

static  struct Char_65   ascii_dash_char1796 (    char  c1446 ) {
    return ( (  from_dash_u81797 ) ( ( (  ascii_dash_u8493 ) ( (  c1446 ) ) ) ) );
}

static  struct Maybe_978   reduce1801 (    struct StrViewIter_469  iterable1077 ,    struct Maybe_978  base1079 ,    struct Maybe_978 (*  fun1081 )(    struct Char_65  ,    struct Maybe_978  ) ) {
    struct Maybe_978  x1082 = (  base1079 );
    struct StrViewIter_469  it1083 = ( (  into_dash_iter470 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1084 = ( (  next474 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_299_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_299_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1802 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1802);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_978  temp1803;
    return (  temp1803 );
}

static  struct Maybe_978   sequence_dash_maybe1804 (    struct Char_65  e1881 ,    struct Maybe_978  b1883 ) {
    struct Maybe_978  dref1884 = (  b1883 );
    if ( dref1884.tag == Maybe_978_None_t ) {
        return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
    }
    else {
        if ( dref1884.tag == Maybe_978_Just_t ) {
            struct Maybe_155  dref1886 = ( (  parse_dash_digit1012 ) ( (  e1881 ) ) );
            if ( dref1886.tag == Maybe_155_None_t ) {
                return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
            }
            else {
                if ( dref1886.tag == Maybe_155_Just_t ) {
                    return ( ( Maybe_978_Just ) ( (  op_dash_add485 ( (  op_dash_mul288 ( ( dref1884 .stuff .Maybe_978_Just_s .field0 ) , (  from_dash_integral290 ( 10 ) ) ) ) , ( (  i32_dash_i641021 ) ( ( dref1886 .stuff .Maybe_155_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_978   parse_dash_int1800 (    struct StrView_27  s1878 ) {
    struct StrViewIter_469  cs1888 = ( (  chars471 ) ( (  s1878 ) ) );
    struct Maybe_299  dref1889 = ( (  head1350 ) ( (  cs1888 ) ) );
    if ( dref1889.tag == Maybe_299_Just_t ) {
        return ( (  reduce1801 ) ( (  cs1888 ) ,  ( ( Maybe_978_Just ) ( (  from_dash_integral290 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1804 ) ) );
    }
    else {
        if ( dref1889.tag == Maybe_299_None_t ) {
            return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
        }
    }
}

struct TakeWhile_1810 {
    struct StrViewIter_469  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1809 {
    struct TakeWhile_1810  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1809 Map_1809_Map (  struct TakeWhile_1810  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1809 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1809   into_dash_iter1812 (    struct Map_1809  self763 ) {
    return (  self763 );
}

static  struct Maybe_299   next1814 (    struct TakeWhile_1810 *  self948 ) {
    struct Maybe_299  mx949 = ( (  next474 ) ( ( & ( ( * (  self948 ) ) .f_it ) ) ) );
    struct Maybe_299  dref950 = (  mx949 );
    if ( dref950.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref950.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self948 ) ) .f_pred ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct Maybe_248   next1813 (    struct Map_1809 *  dref765 ) {
    struct Maybe_299  dref768 = ( (  next1814 ) ( ( & ( (* dref765 ) .field0 ) ) ) );
    if ( dref768.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    else {
        if ( dref768.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_248_Just ) ( ( ( (* dref765 ) .field1 ) ( ( dref768 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1811 (    struct Map_1809  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    size_t  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct Map_1809  it1083 = ( (  into_dash_iter1812 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_248  dref1084 = ( (  next1813 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_248_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_248_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_248_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1815 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1815);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1816;
    return (  temp1816 );
}

static  size_t   lam1817 (    size_t  v1096 ,    size_t  s1098 ) {
    return (  op_dash_add313 ( (  v1096 ) , (  s1098 ) ) );
}

static  size_t   sum1808 (    struct Map_1809  it1094 ) {
    return ( (  reduce1811 ) ( (  it1094 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1817 ) ) );
}

static  struct TakeWhile_1810   into_dash_iter1819 (    struct TakeWhile_1810  self945 ) {
    return (  self945 );
}

static  struct Map_1809   map1818 (    struct TakeWhile_1810  iterable772 ,    size_t (*  fun774 )(    struct Char_65  ) ) {
    struct TakeWhile_1810  it775 = ( (  into_dash_iter1819 ) ( (  iterable772 ) ) );
    return ( ( Map_1809_Map ) ( (  it775 ) ,  (  fun774 ) ) );
}

static  struct TakeWhile_1810   take_dash_while1820 (    struct StrViewIter_469  it954 ,    bool (*  pred956 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1810) { .f_it = ( (  into_dash_iter470 ) ( (  it954 ) ) ) , .f_pred = (  pred956 ) } );
}

static  size_t   lam1821 (    struct Char_65  c2568 ) {
    return ( (  c2568 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1807 (    struct StrView_27  self2564 ,    bool (*  fun2566 )(    struct Char_65  ) ) {
    size_t  bi2569 = ( (  sum1808 ) ( ( (  map1818 ) ( ( (  take_dash_while1820 ) ( ( (  chars471 ) ( (  self2564 ) ) ) ,  (  fun2566 ) ) ) ,  (  lam1821 ) ) ) ) );
    return ( (  byte_dash_substr496 ) ( (  self2564 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2569 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1806 (    struct Scanner_1645 *  sc3395 ,    bool (*  fun3397 )(    struct Char_65  ) ) {
    struct StrView_27  s3398 = ( (  take_dash_while1807 ) ( ( ( * (  sc3395 ) ) .f_s ) ,  (  fun3397 ) ) );
    (*  sc3395 ) .f_s = ( (  byte_dash_substr_dash_from475 ) ( ( ( * (  sc3395 ) ) .f_s ) ,  ( (  num_dash_bytes1141 ) ( (  s3398 ) ) ) ) );
    return (  s3398 );
}

struct TakeWhile_1826 {
    struct StrViewIter_469  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1825 {
    struct TakeWhile_1826  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1825 Map_1825_Map (  struct TakeWhile_1826  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1825 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1825   into_dash_iter1828 (    struct Map_1825  self763 ) {
    return (  self763 );
}

static  struct Maybe_299   next1830 (    struct TakeWhile_1826 *  self948 ) {
    struct Maybe_299  mx949 = ( (  next474 ) ( ( & ( ( * (  self948 ) ) .f_it ) ) ) );
    struct Maybe_299  dref950 = (  mx949 );
    if ( dref950.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref950.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self948 ) ) .f_pred ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref950 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct Maybe_248   next1829 (    struct Map_1825 *  dref765 ) {
    struct Maybe_299  dref768 = ( (  next1830 ) ( ( & ( (* dref765 ) .field0 ) ) ) );
    if ( dref768.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    else {
        if ( dref768.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_248_Just ) ( ( ( (* dref765 ) .field1 ) ( ( dref768 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1827 (    struct Map_1825  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    size_t  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct Map_1825  it1083 = ( (  into_dash_iter1828 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_248  dref1084 = ( (  next1829 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_248_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_248_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_248_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1831 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1831);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1832;
    return (  temp1832 );
}

static  size_t   lam1833 (    size_t  v1096 ,    size_t  s1098 ) {
    return (  op_dash_add313 ( (  v1096 ) , (  s1098 ) ) );
}

static  size_t   sum1824 (    struct Map_1825  it1094 ) {
    return ( (  reduce1827 ) ( (  it1094 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1833 ) ) );
}

static  struct TakeWhile_1826   into_dash_iter1835 (    struct TakeWhile_1826  self945 ) {
    return (  self945 );
}

static  struct Map_1825   map1834 (    struct TakeWhile_1826  iterable772 ,    size_t (*  fun774 )(    struct Char_65  ) ) {
    struct TakeWhile_1826  it775 = ( (  into_dash_iter1835 ) ( (  iterable772 ) ) );
    return ( ( Map_1825_Map ) ( (  it775 ) ,  (  fun774 ) ) );
}

static  struct TakeWhile_1826   take_dash_while1836 (    struct StrViewIter_469  it954 ,    bool (*  pred956 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1826) { .f_it = ( (  into_dash_iter470 ) ( (  it954 ) ) ) , .f_pred = (  pred956 ) } );
}

static  size_t   lam1837 (    struct Char_65  c2568 ) {
    return ( (  c2568 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1823 (    struct StrView_27  self2564 ,    bool (*  fun2566 )(    struct Char_65  ) ) {
    size_t  bi2569 = ( (  sum1824 ) ( ( (  map1834 ) ( ( (  take_dash_while1836 ) ( ( (  chars471 ) ( (  self2564 ) ) ) ,  (  fun2566 ) ) ) ,  (  lam1837 ) ) ) ) );
    return ( (  byte_dash_substr496 ) ( (  self2564 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2569 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1822 (    struct Scanner_1645 *  sc3395 ,    bool (*  fun3397 )(    struct Char_65  ) ) {
    struct StrView_27  s3398 = ( (  take_dash_while1823 ) ( ( ( * (  sc3395 ) ) .f_s ) ,  (  fun3397 ) ) );
    (*  sc3395 ) .f_s = ( (  byte_dash_substr_dash_from475 ) ( ( ( * (  sc3395 ) ) .f_s ) ,  ( (  num_dash_bytes1141 ) ( (  s3398 ) ) ) ) );
    return (  s3398 );
}

static  bool   lam1838 (    struct Char_65  c4597 ) {
    return ( ! ( (  is_dash_whitespace1347 ) ( (  c4597 ) ) ) );
}

static  struct Theme_172 *   or_dash_else1839 (    struct Maybe_245  self1312 ,    struct Theme_172 *  alt1314 ) {
    struct Maybe_245  dref1315 = (  self1312 );
    if ( dref1315.tag == Maybe_245_None_t ) {
        return (  alt1314 );
    }
    else {
        if ( dref1315.tag == Maybe_245_Just_t ) {
            return ( dref1315 .stuff .Maybe_245_Just_s .field0 );
        }
    }
}

struct SliceIter_1845 {
    struct Slice_193  f_slice;
    size_t  f_current_dash_offset;
};

struct env1846 {
    struct StrView_27  name4160;
    ;
};

struct envunion1847 {
    bool  (*fun) (  struct env1846*  ,    struct Tuple2_194  );
    struct env1846 env;
};

struct Filter_1844 {
    struct SliceIter_1845  f_og;
    struct envunion1847  f_fun;
};

struct Map_1843 {
    struct Filter_1844  field0;
    struct Theme_172 * (*  field1 )(    struct Tuple2_194  );
};

static struct Map_1843 Map_1843_Map (  struct Filter_1844  field0 ,  struct Theme_172 * (*  field1 )(    struct Tuple2_194  ) ) {
    return ( struct Map_1843 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1849 {
    enum {
        Maybe_1849_None_t,
        Maybe_1849_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_194  field0;
        } Maybe_1849_Just_s;
    } stuff;
};

static struct Maybe_1849 Maybe_1849_Just (  struct Tuple2_194  field0 ) {
    return ( struct Maybe_1849 ) { .tag = Maybe_1849_Just_t, .stuff = { .Maybe_1849_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_194 *   offset_dash_ptr1852 (    struct Tuple2_194 *  x367 ,    int64_t  count369 ) {
    struct Tuple2_194  temp1853;
    return ( (struct Tuple2_194 * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp1853 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1849   next1851 (    struct SliceIter_1845 *  self2191 ) {
    size_t  off2192 = ( ( * (  self2191 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2191 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1849) { .tag = Maybe_1849_None_t } );
    }
    struct Tuple2_194  elem2193 = ( * ( (  offset_dash_ptr1852 ) ( ( ( ( * (  self2191 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2192 ) ) ) ) ) );
    (*  self2191 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1849_Just ) ( (  elem2193 ) ) );
}

static  struct Maybe_1849   next1850 (    struct Filter_1844 *  self800 ) {
    while ( ( true ) ) {
        struct Maybe_1849  dref801 = ( (  next1851 ) ( ( & ( ( * (  self800 ) ) .f_og ) ) ) );
        if ( dref801.tag == Maybe_1849_None_t ) {
            return ( (struct Maybe_1849) { .tag = Maybe_1849_None_t } );
        }
        else {
            if ( dref801.tag == Maybe_1849_Just_t ) {
                struct envunion1847  temp1854 = ( ( * (  self800 ) ) .f_fun );
                if ( ( temp1854.fun ( &temp1854.env ,  ( dref801 .stuff .Maybe_1849_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1849_Just ) ( ( dref801 .stuff .Maybe_1849_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1849  temp1855;
    return (  temp1855 );
}

static  struct Maybe_245   next1848 (    struct Map_1843 *  dref765 ) {
    struct Maybe_1849  dref768 = ( (  next1850 ) ( ( & ( (* dref765 ) .field0 ) ) ) );
    if ( dref768.tag == Maybe_1849_None_t ) {
        return ( (struct Maybe_245) { .tag = Maybe_245_None_t } );
    }
    else {
        if ( dref768.tag == Maybe_1849_Just_t ) {
            return ( ( Maybe_245_Just ) ( ( ( (* dref765 ) .field1 ) ( ( dref768 .stuff .Maybe_1849_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1843   into_dash_iter1857 (    struct Map_1843  self763 ) {
    return (  self763 );
}

static  struct Maybe_245   head1842 (    struct Map_1843  it1126 ) {
    struct Map_1843  temp1856 = ( (  into_dash_iter1857 ) ( (  it1126 ) ) );
    return ( (  next1848 ) ( ( &temp1856 ) ) );
}

static  struct Filter_1844   into_dash_iter1859 (    struct Filter_1844  self797 ) {
    return (  self797 );
}

static  struct Map_1843   map1858 (    struct Filter_1844  iterable772 ,    struct Theme_172 * (*  fun774 )(    struct Tuple2_194  ) ) {
    struct Filter_1844  it775 = ( (  into_dash_iter1859 ) ( (  iterable772 ) ) );
    return ( ( Map_1843_Map ) ( (  it775 ) ,  (  fun774 ) ) );
}

static  struct SliceIter_1845   into_dash_iter1861 (    struct Slice_193  self2185 ) {
    return ( (struct SliceIter_1845) { .f_slice = (  self2185 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1844   filter1860 (    struct Slice_193  iterable805 ,   struct envunion1847  fun807 ) {
    struct SliceIter_1845  it808 = ( (  into_dash_iter1861 ) ( (  iterable805 ) ) );
    return ( (struct Filter_1844) { .f_og = (  it808 ) , .f_fun = (  fun807 ) } );
}

static  bool   lam1862 (   struct env1846* env ,    struct Tuple2_194  dref4161 ) {
    return ( (  begins_dash_with1769 ) ( ( dref4161 .field0 ) ,  ( env->name4160 ) ) );
}

static  struct Theme_172 *   snd1863 (    struct Tuple2_194  dref1518 ) {
    return ( dref1518 .field1 );
}

static  struct Maybe_245   match_dash_theme1841 (   struct env202* env ,    struct StrView_27  name4160 ) {
    if ( ( (  null1682 ) ( (  name4160 ) ) ) ) {
        return ( (struct Maybe_245) { .tag = Maybe_245_None_t } );
    }
    struct env1846 envinst1846 = {
        .name4160 =  name4160 ,
    };
    return ( (  head1842 ) ( ( (  map1858 ) ( ( (  filter1860 ) ( ( env->all_dash_themes4157 ) ,  ( (struct envunion1847){ .fun = (  bool  (*) (  struct env1846*  ,    struct Tuple2_194  ) )lam1862 , .env =  envinst1846 } ) ) ) ,  (  snd1863 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1799 (   struct env243* env ,    struct Editor_250 *  ed4587 ,    struct StrView_27  cmd4589 ) {
    struct Maybe_978  dref4590 = ( (  parse_dash_int1800 ) ( (  cmd4589 ) ) );
    if ( dref4590.tag == Maybe_978_Just_t ) {
        int32_t  line4592 = ( (  clamp1496 ) ( ( (  i64_dash_i321023 ) ( ( dref4590 .stuff .Maybe_978_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (  num_dash_lines1148 ) ( ( ( * ( (  pane1145 ) ( (  ed4587 ) ) ) ) .f_buf ) ) ) ) );
        int32_t  line4593 = (  op_dash_sub164 ( (  line4592 ) , (  from_dash_integral56 ( 1 ) ) ) );
        ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4587 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4593 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
    }
    else {
        if ( dref4590.tag == Maybe_978_None_t ) {
            struct Scanner_1645  temp1805 = ( (  mk_dash_from_dash_strview1647 ) ( (  cmd4589 ) ) );
            struct Scanner_1645 *  sc4594 = ( &temp1805 );
            struct StrView_27  cmd4595 = ( (  take_dash_str_dash_while1806 ) ( (  sc4594 ) ,  (  is_dash_alpha1346 ) ) );
            if ( (  eq497 ( (  cmd4595 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1648 ) ( (  sc4594 ) ,  (  is_dash_whitespace1347 ) ) );
                struct StrView_27  theme_dash_name4598 = ( (  take_dash_str_dash_while1822 ) ( (  sc4594 ) ,  (  lam1838 ) ) );
                struct envunion244  temp1840 = ( (struct envunion244){ .fun = (  struct Maybe_245  (*) (  struct env202*  ,    struct StrView_27  ) )match_dash_theme1841 , .env =  env->envinst202 } );
                (* (*  ed4587 ) .f_cfg ) .f_theme = ( (  or_dash_else1839 ) ( ( temp1840.fun ( &temp1840.env ,  (  theme_dash_name4598 ) ) ) ,  ( ( * (  ed4587 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_469   into_dash_iter1867 (    struct StrBuilder_62  self2862 ) {
    return ( (  chars1708 ) ( (  self2862 ) ) );
}

static  struct Maybe_299   head1865 (    struct StrBuilder_62  it1126 ) {
    struct StrViewIter_469  temp1866 = ( (  into_dash_iter1867 ) ( (  it1126 ) ) );
    return ( (  next474 ) ( ( &temp1866 ) ) );
}

static  bool   null1864 (    struct StrBuilder_62  it1135 ) {
    struct Maybe_299  dref1136 = ( (  head1865 ) ( (  it1135 ) ) );
    if ( dref1136.tag == Maybe_299_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1873 (   struct env42* env ,    struct List_13 *  list2417 ,    size_t  i2419 ) {
    struct envunion43  temp1874 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range642 , .env =  env->envinst40 } );
    ( temp1874.fun ( &temp1874.env ,  (  list2417 ) ,  (  i2419 ) ,  (  op_dash_add313 ( (  i2419 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1871 (   struct env44* env ,    struct List_13 *  list2433 ) {
    if ( (  eq409 ( ( ( * (  list2433 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1223 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1872 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_13 *  ,    size_t  ) )remove1873 , .env =  env->envinst42 } );
    return ( temp1872.fun ( &temp1872.env ,  (  list2433 ) ,  (  op_dash_sub291 ( ( ( * (  list2433 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1869 (   struct env72* env ,    struct StrBuilder_62 *  sb2825 ) {
    struct envunion73  temp1870 = ( (struct envunion73){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_13 *  ) )pop1871 , .env =  env->envinst44 } );
    return ( temp1870.fun ( &temp1870.env ,  ( & ( ( * (  sb2825 ) ) .f_chars ) ) ) );
}

struct envunion1876 {
    enum Unit_8  (*fun) (  struct env243*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env243 env;
};

struct env1878 {
    ;
    struct Editor_250 *  ed4669;
};

struct envunion1879 {
    enum Unit_8  (*fun) (  struct env1878*  ,    struct StrView_27  );
    struct env1878 env;
};

static  enum Unit_8   if_dash_just1877 (    struct Maybe_78  x1553 ,   struct envunion1879  fun1555 ) {
    struct Maybe_78  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_78_Just_t ) {
        struct envunion1879  temp1880 = (  fun1555 );
        ( temp1880.fun ( &temp1880.env ,  ( dref1556 .stuff .Maybe_78_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_78_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1881 (   struct env1878* env ,    struct StrView_27  st4686 ) {
    ( (  free559 ) ( (  st4686 ) ,  ( ( * ( env->ed4669 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1883 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  enum Unit_8   live_dash_search1884 (    struct Editor_250 *  ed4616 ,    struct Pos_26  begin_dash_pos4618 ,    struct StrView_27  query4620 ) {
    if ( ( ! ( (  null1682 ) ( (  query4620 ) ) ) ) ) {
        struct Maybe_1523  dref4621 = ( (  search_dash_from1524 ) ( ( (  pane1145 ) ( (  ed4616 ) ) ) ,  (  begin_dash_pos4618 ) ,  (  query4620 ) ) );
        if ( dref4621.tag == Maybe_1523_Just_t ) {
            ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4616 ) ) ) ,  ( dref4621 .stuff .Maybe_1523_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4621 .stuff .Maybe_1523_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1103_NoChanges ) ) );
        }
        else {
            if ( dref4621.tag == Maybe_1523_None_t ) {
                ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4616 ) ) ) ,  (  begin_dash_pos4618 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4616 ) ) ) ,  (  begin_dash_pos4618 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1886 {
    enum Unit_8  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

static  enum Unit_8   handle_dash_key1098 (   struct env266* env ,    struct Editor_250 *  ed4669 ,    struct Key_271  key4671 ) {
    struct EditorMode_251 *  dref4672 = ( & ( ( * (  ed4669 ) ) .f_mode ) );
    if ( (* dref4672 ).tag == EditorMode_251_Normal_t ) {
        enum Mode_222  dref4673 = ( ( ( * (  ed4669 ) ) .f_pane ) .f_mode );
        switch (  dref4673 ) {
            case Mode_222_Normal : {
                struct envunion270  temp1099 = ( (struct envunion270){ .fun = (  enum Unit_8  (*) (  struct env255*  ,    struct Editor_250 *  ,    struct Key_271  ) )handle_dash_normal_dash_key1100 , .env =  env->envinst255 } );
                ( temp1099.fun ( &temp1099.env ,  (  ed4669 ) ,  (  key4671 ) ) );
                break;
            }
            case Mode_222_Select : {
                struct envunion1629  temp1628 = ( (struct envunion1629){ .fun = (  enum Unit_8  (*) (  struct env255*  ,    struct Editor_250 *  ,    struct Key_271  ) )handle_dash_normal_dash_key1100 , .env =  env->envinst255 } );
                ( temp1628.fun ( &temp1628.env ,  (  ed4669 ) ,  (  key4671 ) ) );
                break;
            }
            case Mode_222_Insert : {
                struct Key_271  dref4674 = (  key4671 );
                if ( dref4674.tag == Key_271_Escape_t ) {
                    ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4669 ) ) ) ,  ( Mode_222_Normal ) ) );
                }
                else {
                    if ( dref4674.tag == Key_271_Enter_t ) {
                        int32_t  indent4675 = ( (  indent_dash_at_dash_line1157 ) ( ( (  pane1145 ) ( (  ed4669 ) ) ) ,  ( ( ( * ( (  pane1145 ) ( (  ed4669 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion274  temp1630 = ( (struct envunion274){ .fun = (  enum Unit_8  (*) (  struct env206*  ,    struct Pane_221 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1177 , .env =  env->envinst206 } );
                        ( temp1630.fun ( &temp1630.env ,  ( (  pane1145 ) ( (  ed4669 ) ) ) ,  ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1146 ) ( ( (  pane1145 ) ( (  ed4669 ) ) ) ) );
                        struct envunion272  temp1631 = ( (struct envunion272){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_221 *  ,    int32_t  ) )indent_dash_at_dash_current1316 , .env =  env->envinst228 } );
                        ( temp1631.fun ( &temp1631.env ,  ( (  pane1145 ) ( (  ed4669 ) ) ) ,  (  indent4675 ) ) );
                    }
                    else {
                        if ( dref4674.tag == Key_271_Backspace_t ) {
                            struct envunion267  temp1632 = ( (struct envunion267){ .fun = (  enum Unit_8  (*) (  struct env209*  ,    struct Pane_221 *  ) )backspace1633 , .env =  env->envinst209 } );
                            ( temp1632.fun ( &temp1632.env ,  ( (  pane1145 ) ( (  ed4669 ) ) ) ) );
                        }
                        else {
                            if ( dref4674.tag == Key_271_Char_t ) {
                                struct Array_1636  temp1640 = ( (struct Array_1636) { ._arr = { ( dref4674 .stuff .Key_271_Char_s .field0 ) } } );
                                struct Array_1636  temp1638 = ( (  from_dash_listlike1639 ) ( ( &temp1640 ) ) );
                                struct StrView_27  s4677 = ( (  from_dash_ascii_dash_slice975 ) ( ( (  as_dash_slice1635 ) ( ( &temp1638 ) ) ) ) );
                                struct envunion1642  temp1641 = ( (struct envunion1642){ .fun = (  enum Unit_8  (*) (  struct env206*  ,    struct Pane_221 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1177 , .env =  env->envinst206 } );
                                ( temp1641.fun ( &temp1641.env ,  ( (  pane1145 ) ( (  ed4669 ) ) ) ,  (  s4677 ) ) );
                                ( (  move_dash_right1146 ) ( ( (  pane1145 ) ( (  ed4669 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4672 ).tag == EditorMode_251_Cmd_t ) {
            struct Key_271  dref4680 = (  key4671 );
            if ( dref4680.tag == Key_271_Escape_t ) {
                ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4669 ) ) ) ,  ( (* dref4672 ) .stuff .EditorMode_251_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                (*  ed4669 ) .f_mode = ( (struct EditorMode_251) { .tag = EditorMode_251_Normal_t } );
                (* (*  ed4669 ) .f_cfg ) .f_theme = ( ( * (  ed4669 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4680.tag == Key_271_Enter_t ) {
                    struct envunion273  temp1643 = ( (struct envunion273){ .fun = (  enum Unit_8  (*) (  struct env246*  ,    struct Editor_250 *  ,    struct StrView_27  ) )run_dash_cmd1644 , .env =  env->envinst246 } );
                    ( temp1643.fun ( &temp1643.env ,  (  ed4669 ) ,  ( (  as_dash_str1484 ) ( ( & ( (* dref4672 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1713 ) ( ( & ( (* dref4672 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4669 ) ) ) ,  ( ( * ( (  pane1145 ) ( (  ed4669 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                    (*  ed4669 ) .f_mode = ( (struct EditorMode_251) { .tag = EditorMode_251_Normal_t } );
                    (*  ed4669 ) .f_og_dash_theme = ( ( * ( ( * (  ed4669 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref4680.tag == Key_271_Char_t ) {
                        struct envunion268  temp1795 = ( (struct envunion268){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
                        ( temp1795.fun ( &temp1795.env ,  ( & ( (* dref4672 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1796 ) ( ( dref4680 .stuff .Key_271_Char_s .field0 ) ) ) ) );
                        struct envunion275  temp1798 = ( (struct envunion275){ .fun = (  enum Unit_8  (*) (  struct env243*  ,    struct Editor_250 *  ,    struct StrView_27  ) )live_dash_cmd1799 , .env =  env->envinst243 } );
                        ( temp1798.fun ( &temp1798.env ,  (  ed4669 ) ,  ( (  as_dash_str1484 ) ( ( & ( (* dref4672 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4680.tag == Key_271_Backspace_t ) {
                            if ( ( ! ( (  null1864 ) ( ( (* dref4672 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion269  temp1868 = ( (struct envunion269){ .fun = (  enum Unit_8  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1869 , .env =  env->envinst72 } );
                                ( temp1868.fun ( &temp1868.env ,  ( & ( (* dref4672 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1876  temp1875 = ( (struct envunion1876){ .fun = (  enum Unit_8  (*) (  struct env243*  ,    struct Editor_250 *  ,    struct StrView_27  ) )live_dash_cmd1799 , .env =  env->envinst243 } );
                            ( temp1875.fun ( &temp1875.env ,  (  ed4669 ) ,  ( (  as_dash_str1484 ) ( ( & ( (* dref4672 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4672 ).tag == EditorMode_251_Search_t ) {
                struct Key_271  dref4684 = (  key4671 );
                if ( dref4684.tag == Key_271_Escape_t ) {
                    ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4669 ) ) ) ,  ( (* dref4672 ) .stuff .EditorMode_251_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                    (*  ed4669 ) .f_mode = ( (struct EditorMode_251) { .tag = EditorMode_251_Normal_t } );
                }
                else {
                    if ( dref4684.tag == Key_271_Enter_t ) {
                        ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4669 ) ) ) ,  ( ( * ( (  pane1145 ) ( (  ed4669 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1145 ) ( (  ed4669 ) ) ) ) .f_sel ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                        struct env1878 envinst1878 = {
                            .ed4669 =  ed4669 ,
                        };
                        ( (  if_dash_just1877 ) ( ( ( * (  ed4669 ) ) .f_search_dash_term ) ,  ( (struct envunion1879){ .fun = (  enum Unit_8  (*) (  struct env1878*  ,    struct StrView_27  ) )lam1881 , .env =  envinst1878 } ) ) );
                        if ( ( ! ( (  null1864 ) ( ( (* dref4672 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4687 = ( ( * ( (  pane1145 ) ( (  ed4669 ) ) ) ) .f_cursor );
                            struct Pos_26  from4688 = ( (  or_dash_else1415 ) ( ( ( * ( (  pane1145 ) ( (  ed4669 ) ) ) ) .f_sel ) ,  (  to4687 ) ) );
                            (*  ed4669 ) .f_search_dash_term = ( ( Maybe_78_Just ) ( ( (  as_dash_str1484 ) ( ( & ( (* dref4672 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4669 ) .f_search_dash_term = ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
                        }
                        (*  ed4669 ) .f_mode = ( (struct EditorMode_251) { .tag = EditorMode_251_Normal_t } );
                    }
                    else {
                        if ( dref4684.tag == Key_271_Char_t ) {
                            struct envunion1883  temp1882 = ( (struct envunion1883){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
                            ( temp1882.fun ( &temp1882.env ,  ( & ( (* dref4672 ) .stuff .EditorMode_251_Search_s .field1 ) ) ,  ( (  ascii_dash_char1796 ) ( ( dref4684 .stuff .Key_271_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1884 ) ( (  ed4669 ) ,  ( (* dref4672 ) .stuff .EditorMode_251_Search_s .field0 ) ,  ( (  as_dash_str1484 ) ( ( & ( (* dref4672 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4684.tag == Key_271_Backspace_t ) {
                                if ( ( ! ( (  null1864 ) ( ( (* dref4672 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1886  temp1885 = ( (struct envunion1886){ .fun = (  enum Unit_8  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1869 , .env =  env->envinst72 } );
                                    ( temp1885.fun ( &temp1885.env ,  ( & ( (* dref4672 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1884 ) ( (  ed4669 ) ,  ( (* dref4672 ) .stuff .EditorMode_251_Search_s .field0 ) ,  ( (  as_dash_str1484 ) ( ( & ( (* dref4672 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1766 ) ( ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1888 {
    bool  (*fun) (  struct env94*  ,    struct Screen_278 *  );
    struct env94 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1889 (   struct env94* env ,    struct Screen_278 *  screen3641 ) {
    struct Tui_90 *  tui3642 = ( ( * (  screen3641 ) ) .f_tui );
    struct envunion95  temp1890 = ( (struct envunion95){ .fun = (  bool  (*) (  struct env87*  ,    struct Tui_90 *  ) )update_dash_dimensions899 , .env =  env->envinst87 } );
    bool  updated_dash_dimensions3643 = ( temp1890.fun ( &temp1890.env ,  (  tui3642 ) ) );
    if ( ( ! (  updated_dash_dimensions3643 ) ) ) {
        return ( false );
    }
    (*  screen3641 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3644 = ( ( * ( ( * (  screen3641 ) ) .f_tui ) ) .f_width );
    uint32_t  h3645 = ( ( * ( ( * (  screen3641 ) ) .f_tui ) ) .f_height );
    size_t  nusz3646 = ( (  u32_dash_size848 ) ( (  op_dash_mul167 ( (  w3644 ) , (  h3645 ) ) ) ) );
    if ( (  cmp292 ( (  nusz3646 ) , ( ( ( * (  screen3641 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_278  nuscreen3647 = ( (  mk_dash_screen842 ) ( (  tui3642 ) ,  ( ( * (  screen3641 ) ) .f_al ) ) );
    (*  screen3641 ) .f_current = ( (  nuscreen3647 ) .f_current );
    (*  screen3641 ) .f_previous = ( (  nuscreen3647 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1891 (    struct Tui_90 *  tui3568 ) {
    bool  redraw3569 = ( ( * (  tui3568 ) ) .f_should_dash_redraw );
    (*  tui3568 ) .f_should_dash_redraw = ( false );
    return (  redraw3569 );
}

struct env1895 {
    ;
    struct Cell_280 (*  fun2265 )(    struct Cell_280  );
    ;
    ;
    struct Slice_279  s2263;
};

struct envunion1896 {
    enum Unit_8  (*fun) (  struct env1895*  ,    int32_t  );
    struct env1895 env;
};

static  enum Unit_8   for_dash_each1894 (    struct Range_150  iterable1058 ,   struct envunion1896  fun1060 ) {
    struct RangeIter_153  temp1897 = ( (  into_dash_iter154 ) ( (  iterable1058 ) ) );
    struct RangeIter_153 *  it1061 = ( &temp1897 );
    while ( ( true ) ) {
        struct Maybe_155  dref1062 = ( (  next156 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_155_Just_t ) {
                struct envunion1896  temp1898 = (  fun1060 );
                ( temp1898.fun ( &temp1898.env ,  ( dref1062 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1899 (   struct env1895* env ,    int32_t  i2267 ) {
    return ( (  set863 ) ( ( env->s2263 ) ,  ( (  i32_dash_size422 ) ( (  i2267 ) ) ) ,  ( ( env->fun2265 ) ( (  elem_dash_get867 ( ( env->s2263 ) , ( (  i32_dash_size422 ) ( (  i2267 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1893 (    struct Slice_279  s2263 ,    struct Cell_280 (*  fun2265 )(    struct Cell_280  ) ) {
    struct env1895 envinst1895 = {
        .fun2265 =  fun2265 ,
        .s2263 =  s2263 ,
    };
    ( (  for_dash_each1894 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32331 ) ( (  op_dash_sub291 ( ( (  s2263 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1896){ .fun = (  enum Unit_8  (*) (  struct env1895*  ,    int32_t  ) )lam1899 , .env =  envinst1895 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_280   lam1900 (    struct Cell_280  dref3605 ) {
    return ( (  default_dash_cell875 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1892 (    struct Screen_278 *  screen3604 ) {
    ( (  map1893 ) ( ( ( * (  screen3604 ) ) .f_current ) ,  (  lam1900 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1901 (    struct Screen_278 *  screen3650 ,    struct Color_138  c3652 ) {
    (*  screen3650 ) .f_default_dash_fg = (  c3652 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1902 (    struct Screen_278 *  screen3655 ,    struct Color_138  c3657 ) {
    (*  screen3655 ) .f_default_dash_bg = (  c3657 );
    return ( Unit_8_Unit );
}

static  int32_t   cast1906 (    uint32_t  x385 ) {
    return ( (int32_t ) (  x385 ) );
}

static  int32_t   u32_dash_i321905 (    uint32_t  x715 ) {
    return ( (  cast1906 ) ( (  x715 ) ) );
}

struct Maybe_1911 {
    enum {
        Maybe_1911_None_t,
        Maybe_1911_Just_t,
    } tag;
    union {
        struct {
            struct Cell_280 *  field0;
        } Maybe_1911_Just_s;
    } stuff;
};

static struct Maybe_1911 Maybe_1911_Just (  struct Cell_280 *  field0 ) {
    return ( struct Maybe_1911 ) { .tag = Maybe_1911_Just_t, .stuff = { .Maybe_1911_Just_s = { .field0 = field0 } } };
};

static  struct Cell_280 *   undefined1912 (  ) {
    struct Cell_280 *  temp1913;
    return (  temp1913 );
}

static  struct Cell_280 *   or_dash_fail1910 (    struct Maybe_1911  x1305 ,    struct StrView_27  errmsg1307 ) {
    struct Maybe_1911  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_1911_None_t ) {
        ( (  panic1223 ) ( (  errmsg1307 ) ) );
        return ( (  undefined1912 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_1911_Just_t ) {
            return ( dref1308 .stuff .Maybe_1911_Just_s .field0 );
        }
    }
}

static  struct Maybe_1911   get_dash_cell_dash_ptr1914 (    struct Screen_278 *  screen3671 ,    int32_t  x3673 ,    int32_t  y3675 ) {
    int32_t  w3676 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3671 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  x3673 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  x3673 ) , (  w3676 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1911) { .tag = Maybe_1911_None_t } );
    }
    if ( ( (  cmp157 ( (  y3675 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3675 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3671 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1911) { .tag = Maybe_1911_None_t } );
    }
    size_t  i3677 = ( (  i32_dash_size422 ) ( (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3675 ) , (  w3676 ) ) ) , (  x3673 ) ) ) ) );
    return ( ( Maybe_1911_Just ) ( ( (  get_dash_ptr864 ) ( ( ( * (  screen3671 ) ) .f_current ) ,  (  i3677 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1903 (    struct Screen_278 *  screen3680 ) {
    struct RangeIter_153  temp1904 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3680 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1907 =  next156 (&temp1904);
        if (  __cond1907 .tag == 0 ) {
            break;
        }
        int32_t  y3682 =  __cond1907 .stuff .Maybe_155_Just_s .field0;
        struct RangeIter_153  temp1908 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3680 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_155  __cond1909 =  next156 (&temp1908);
            if (  __cond1909 .tag == 0 ) {
                break;
            }
            int32_t  x3684 =  __cond1909 .stuff .Maybe_155_Just_s .field0;
            struct Cell_280 *  cell3685 = ( (  or_dash_fail1910 ) ( ( (  get_dash_cell_dash_ptr1914 ) ( (  screen3680 ) ,  (  x3684 ) ,  (  y3682 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3685 ) .f_bg = ( ( * (  screen3680 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1916 {
    enum Unit_8  (*fun) (  struct env276*  ,    struct Screen_278 *  ,    struct Editor_250 *  );
    struct env276 env;
};

struct IntStrIter_1921 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1921   into_dash_iter1923 (    struct IntStrIter_1921  self1348 ) {
    return (  self1348 );
}

struct env1927 {
    ;
    int32_t  base1338;
};

struct envunion1928 {
    int32_t  (*fun) (  struct env1927*  ,    int32_t  ,    int32_t  );
    struct env1927 env;
};

static  int32_t   reduce1926 (    struct Range_150  iterable1077 ,    int32_t  base1079 ,   struct envunion1928  fun1081 ) {
    int32_t  x1082 = (  base1079 );
    struct RangeIter_153  it1083 = ( (  into_dash_iter154 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1084 = ( (  next156 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_155_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_155_Just_t ) {
                struct envunion1928  temp1929 = (  fun1081 );
                x1082 = ( temp1929.fun ( &temp1929.env ,  ( dref1084 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1930 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1930);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp1931;
    return (  temp1931 );
}

static  int32_t   lam1932 (   struct env1927* env ,    int32_t  item1342 ,    int32_t  x1344 ) {
    return (  op_dash_mul1538 ( (  x1344 ) , ( env->base1338 ) ) );
}

static  int32_t   pow1925 (    int32_t  base1338 ,    int32_t  p1340 ) {
    struct env1927 envinst1927 = {
        .base1338 =  base1338 ,
    };
    return ( (  reduce1926 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1340 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion1928){ .fun = (  int32_t  (*) (  struct env1927*  ,    int32_t  ,    int32_t  ) )lam1932 , .env =  envinst1927 } ) ) );
}

static  struct Maybe_299   next1924 (    struct IntStrIter_1921 *  self1351 ) {
    if ( ( ( * (  self1351 ) ) .f_negative ) ) {
        (*  self1351 ) .f_negative = ( false );
        return ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    int32_t  trim_dash_down1352 = ( (  pow1925 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1353 = (  op_dash_div1537 ( ( ( * (  self1351 ) ) .f_int ) , (  trim_dash_down1352 ) ) );
    int32_t  upper_dash_mask1354 = (  op_dash_mul1538 ( (  op_dash_div1537 ( (  upper1353 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1355 = ( ( (  cast306 ) ( (  op_dash_sub164 ( (  upper1353 ) , (  upper_dash_mask1354 ) ) ) ) ) );
    (*  self1351 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1356 = ( (  char_dash_from_dash_u81054 ) ( (  op_dash_add944 ( (  digit1355 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_299_Just ) ( (  digit_dash_char1356 ) ) );
}

static  size_t   reduce1922 (    struct IntStrIter_1921  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct IntStrIter_1921  it1083 = ( (  into_dash_iter1923 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1084 = ( (  next1924 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_299_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_299_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1933 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1933);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1934;
    return (  temp1934 );
}

static  size_t   lam1935 (    struct Char_65  dref1089 ,    size_t  x1091 ) {
    return (  op_dash_add313 ( (  x1091 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1920 (    struct IntStrIter_1921  it1088 ) {
    return ( (  reduce1922 ) ( (  it1088 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1935 ) ) );
}

static  int32_t   count_dash_digits1938 (    int32_t  self1359 ) {
    if ( (  eq570 ( (  self1359 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1360 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp157 ( (  self1359 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1359 = (  op_dash_div1537 ( (  self1359 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1360 = (  op_dash_add159 ( (  digits1360 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1360 );
}

static  struct IntStrIter_1921   int_dash_iter1937 (    int32_t  int1363 ) {
    if ( (  cmp157 ( (  int1363 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1921) { .f_int = (  op_dash_neg816 ( (  int1363 ) ) ) , .f_len = ( (  count_dash_digits1938 ) ( (  op_dash_neg816 ( (  int1363 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1921) { .f_int = (  int1363 ) , .f_len = ( (  count_dash_digits1938 ) ( (  int1363 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1921   chars1936 (    int32_t  self1372 ) {
    return ( (  int_dash_iter1937 ) ( (  self1372 ) ) );
}

static  int32_t   screen_dash_width1940 (    struct ScreenDims_281  sd4240 ) {
    return (  op_dash_add159 ( (  op_dash_sub164 ( ( (  sd4240 ) .f_to_dash_sx ) , ( (  sd4240 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1941 (    struct ScreenDims_281  sd4243 ) {
    return (  op_dash_add159 ( (  op_dash_sub164 ( ( (  sd4243 ) .f_to_dash_sy ) , ( (  sd4243 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1939 (    struct Pane_221 *  pane4246 ,    struct ScreenDims_281  sd4248 ) {
    struct Pos_26  cur4249 = ( ( * (  pane4246 ) ) .f_cursor );
    int32_t  cur_dash_sx4250 = ( (  pos_dash_vi1106 ) ( ( ( * (  pane4246 ) ) .f_buf ) ,  (  cur4249 ) ) );
    struct ScreenCursorOffset_223  sc_dash_off4251 = ( ( * (  pane4246 ) ) .f_sc_dash_off );
    int32_t  sw4252 = (  op_dash_sub164 ( ( (  screen_dash_width1940 ) ( (  sd4248 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh4253 = (  op_dash_sub164 ( ( (  screen_dash_height1941 ) ( (  sd4248 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin4254 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4255 = ( (  pos_dash_vi1106 ) ( ( ( * (  pane4246 ) ) .f_buf ) ,  (  cur4249 ) ) );
    int32_t  csx4256 = (  op_dash_sub164 ( (  csi4255 ) , ( (  sc_dash_off4251 ) .f_screen_dash_left ) ) );
    int32_t  csy4257 = (  op_dash_sub164 ( ( (  cur4249 ) .f_line ) , ( (  sc_dash_off4251 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4258 = ( (  sc_dash_off4251 ) .f_screen_dash_left );
    if ( (  cmp157 ( (  csx4256 ) , (  margin4254 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4258 = (  op_dash_sub164 ( (  csi4255 ) , (  margin4254 ) ) );
    } else {
        if ( (  cmp157 ( (  csx4256 ) , (  op_dash_sub164 ( (  sw4252 ) , (  margin4254 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4258 = (  op_dash_sub164 ( (  csi4255 ) , (  op_dash_sub164 ( (  sw4252 ) , (  margin4254 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4259 = ( (  max1121 ) ( (  nu_dash_screen_dash_left4258 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4260 = ( (  sc_dash_off4251 ) .f_screen_dash_top );
    if ( (  cmp157 ( (  csy4257 ) , (  margin4254 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4260 = (  op_dash_sub164 ( ( (  cur4249 ) .f_line ) , (  margin4254 ) ) );
    } else {
        if ( (  cmp157 ( (  csy4257 ) , (  op_dash_sub164 ( (  sh4253 ) , (  margin4254 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4260 = (  op_dash_sub164 ( ( (  cur4249 ) .f_line ) , (  op_dash_sub164 ( (  sh4253 ) , (  margin4254 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4261 = ( (  max1121 ) ( (  nu_dash_screen_dash_top4260 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane4246 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_223) { .f_screen_dash_top = (  nu_dash_screen_dash_top4261 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4259 ) } );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_colors1946 (    struct Screen_278 *  screen3660 ,    struct Color_138  fg3662 ,    struct Color_138  bg3664 ) {
    (*  screen3660 ) .f_default_dash_fg = (  fg3662 );
    (*  screen3660 ) .f_default_dash_bg = (  bg3664 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors1945 (    struct Screen_278 *  screen4264 ,    struct Colors_173  colors4266 ) {
    ( (  set_dash_screen_dash_colors1946 ) ( (  screen4264 ) ,  ( (  colors4266 ) .f_fg ) ,  ( (  colors4266 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   abs1947 (    int32_t  x1591 ) {
    return ( (  cmp157 ( (  x1591 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ? (  x1591 ) : (  op_dash_neg816 ( (  x1591 ) ) ) );
}

struct Map_1950 {
    struct IntStrIter_1921  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1950 Map_1950_Map (  struct IntStrIter_1921  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1950 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1950   into_dash_iter1952 (    struct Map_1950  self763 ) {
    return (  self763 );
}

static  struct Maybe_155   next1953 (    struct Map_1950 *  dref765 ) {
    struct Maybe_299  dref768 = ( (  next1924 ) ( ( & ( (* dref765 ) .field0 ) ) ) );
    if ( dref768.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
    else {
        if ( dref768.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_155_Just ) ( ( ( (* dref765 ) .field1 ) ( ( dref768 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1951 (    struct Map_1950  iterable1077 ,    int32_t  base1079 ,    int32_t (*  fun1081 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1082 = (  base1079 );
    struct Map_1950  it1083 = ( (  into_dash_iter1952 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1084 = ( (  next1953 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_155_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_155_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp1954 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1954);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp1955;
    return (  temp1955 );
}

static  int32_t   lam1956 (    int32_t  v1096 ,    int32_t  s1098 ) {
    return (  op_dash_add159 ( (  v1096 ) , (  s1098 ) ) );
}

static  int32_t   sum1949 (    struct Map_1950  it1094 ) {
    return ( (  reduce1951 ) ( (  it1094 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1956 ) ) );
}

static  struct Map_1950   map1957 (    struct IntStrIter_1921  iterable772 ,    int32_t (*  fun774 )(    struct Char_65  ) ) {
    struct IntStrIter_1921  it775 = ( (  into_dash_iter1923 ) ( (  iterable772 ) ) );
    return ( ( Map_1950_Map ) ( (  it775 ) ,  (  fun774 ) ) );
}

static  enum Unit_8   put_dash_char1961 (    struct Screen_278 *  screen3688 ,    struct Char_65  c3690 ,    int32_t  x3692 ,    int32_t  y3694 ) {
    int32_t  w3695 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3688 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp157 ( (  x3692 ) , (  w3695 ) ) != 0 ) || (  cmp157 ( (  y3694 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3688 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp157 ( (  x3692 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp157 ( (  y3694 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3696 = ( (  i32_dash_size422 ) ( (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3694 ) , (  w3695 ) ) ) , (  x3692 ) ) ) ) );
    struct Color_138  fg3697 = ( ( * (  screen3688 ) ) .f_default_dash_fg );
    struct Color_138  bg3698 = ( ( * (  screen3688 ) ) .f_default_dash_bg );
    struct Char_65  c3699 = (  c3690 );
    int32_t  char_dash_width3700 = ( (  wcwidth1122 ) ( (  c3699 ) ) );
    if ( ( (  cmp157 ( (  x3692 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp157 ( ( (  elem_dash_get867 ( ( ( * (  screen3688 ) ) .f_current ) , (  op_dash_sub291 ( (  i3696 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_280  pc3701 = (  elem_dash_get867 ( ( ( * (  screen3688 ) ) .f_current ) , (  op_dash_sub291 ( (  i3696 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set863 ) ( ( ( * (  screen3688 ) ) .f_current ) ,  (  op_dash_sub291 ( (  i3696 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_280) { .f_c = ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3701 ) .f_fg ) , .f_bg = ( (  pc3701 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set863 ) ( ( ( * (  screen3688 ) ) .f_current ) ,  (  i3696 ) ,  ( (struct Cell_280) { .f_c = (  c3699 ) , .f_fg = (  fg3697 ) , .f_bg = (  bg3698 ) , .f_char_dash_width = (  char_dash_width3700 ) } ) ) );
    struct RangeIter_153  temp1962 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( (  x3692 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min670 ) ( (  op_dash_sub164 ( (  op_dash_add159 ( (  x3692 ) , (  char_dash_width3700 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3695 ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1963 =  next156 (&temp1962);
        if (  __cond1963 .tag == 0 ) {
            break;
        }
        int32_t  xx3703 =  __cond1963 .stuff .Maybe_155_Just_s .field0;
        size_t  i3704 = ( (  i32_dash_size422 ) ( (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3694 ) , (  w3695 ) ) ) , (  xx3703 ) ) ) ) );
        ( (  set863 ) ( ( ( * (  screen3688 ) ) .f_current ) ,  (  i3704 ) ,  ( (struct Cell_280) { .f_c = ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = (  fg3697 ) , .f_bg = (  bg3698 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1958 (    struct Screen_278 *  screen3707 ,    int32_t  s3709 ,    int32_t  x3711 ,    int32_t  y3713 ) {
    int32_t  w3714 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3707 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3713 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3713 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3707 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3715 = (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3713 ) , (  w3714 ) ) ) , (  x3711 ) ) );
    int32_t  x3716 = ( (  min670 ) ( (  x3711 ) ,  (  w3714 ) ) );
    size_t  max_dash_len3717 = ( (  i32_dash_size422 ) ( (  op_dash_sub164 ( (  w3714 ) , (  x3716 ) ) ) ) );
    int32_t  xx3718 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_1921  temp1959 =  into_dash_iter1923 ( ( (  chars1936 ) ( (  s3709 ) ) ) );
    while (true) {
        struct Maybe_299  __cond1960 =  next1924 (&temp1959);
        if (  __cond1960 .tag == 0 ) {
            break;
        }
        struct Char_65  c3720 =  __cond1960 .stuff .Maybe_299_Just_s .field0;
        ( (  put_dash_char1961 ) ( (  screen3707 ) ,  (  c3720 ) ,  (  op_dash_add159 ( (  x3716 ) , (  xx3718 ) ) ) ,  (  y3713 ) ) );
        xx3718 = (  op_dash_add159 ( (  xx3718 ) , ( (  rendered_dash_wcwidth1120 ) ( (  c3720 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1948 (    struct Screen_278 *  screen3723 ,    int32_t  s3725 ,    int32_t  x3727 ,    int32_t  y3729 ) {
    int32_t  slen3730 = ( (  sum1949 ) ( ( (  map1957 ) ( ( (  chars1936 ) ( (  s3725 ) ) ) ,  (  rendered_dash_wcwidth1120 ) ) ) ) );
    int32_t  w3731 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3723 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3732 = (  op_dash_sub164 ( (  op_dash_sub164 ( (  w3731 ) , (  x3727 ) ) ) , (  slen3730 ) ) );
    ( (  draw_dash_str1958 ) ( (  screen3723 ) ,  (  s3725 ) ,  (  x3732 ) ,  (  y3729 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1965 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct StrConcat_1965 StrConcat_1965_StrConcat (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1965 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1968 {
    struct StrView_27  field0;
    struct StrConcat_1965  field1;
};

static struct StrConcat_1968 StrConcat_1968_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1965  field1 ) {
    return ( struct StrConcat_1968 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1967 {
    struct StrConcat_1968  field0;
    struct Char_65  field1;
};

static struct StrConcat_1967 StrConcat_1967_StrConcat (  struct StrConcat_1968  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1967 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1970 (    struct StrConcat_1965  self1254 ) {
    struct StrConcat_1965  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str399 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1969 (    struct StrConcat_1968  self1254 ) {
    struct StrConcat_1968  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str1970 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1966 (    struct StrConcat_1967  self1254 ) {
    struct StrConcat_1967  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str1969 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1964 (    bool  cond1298 ,    struct StrConcat_1965  msg1300 ) {
    if ( ( ! (  cond1298 ) ) ) {
        ( (  print_dash_str1966 ) ( ( ( StrConcat_1967_StrConcat ) ( ( ( StrConcat_1968_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1300 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1972 {
    struct StrViewIter_469  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1972   into_dash_iter1973 (    struct AppendIter_1972  self1003 ) {
    return (  self1003 );
}

static  struct AppendIter_1972   append1974 (    struct StrViewIter_469  it990 ,    struct Char_65  e992 ) {
    return ( (struct AppendIter_1972) { .f_it = ( (  into_dash_iter470 ) ( (  it990 ) ) ) , .f_elem = (  e992 ) , .f_appended = ( false ) } );
}

static  struct Maybe_299   next1976 (    struct AppendIter_1972 *  self1006 ) {
    struct Maybe_299  dref1007 = ( (  next474 ) ( ( & ( ( * (  self1006 ) ) .f_it ) ) ) );
    if ( dref1007.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1007 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1007.tag == Maybe_299_None_t ) {
            if ( ( ! ( ( * (  self1006 ) ) .f_appended ) ) ) {
                (*  self1006 ) .f_appended = ( true );
                return ( ( Maybe_299_Just ) ( ( ( * (  self1006 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
        }
    }
}

static  bool   between1978 (    struct Pos_26  c1329 ,    struct Pos_26  l1331 ,    struct Pos_26  r1333 ) {
    struct Pos_26  from1334 = ( (  min566 ) ( (  l1331 ) ,  (  r1333 ) ) );
    struct Pos_26  to1335 = ( (  max568 ) ( (  l1331 ) ,  (  r1333 ) ) );
    return ( (  cmp567 ( (  from1334 ) , (  c1329 ) ) != 2 ) && (  cmp567 ( (  c1329 ) , (  to1335 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1977 (    struct Pane_221 *  pane4232 ,    struct Pos_26  pos4234 ) {
    return ( {  struct Maybe_34  dref4235 = ( ( * (  pane4232 ) ) .f_sel ) ; dref4235.tag == Maybe_34_Just_t ? ( (  between1978 ) ( (  pos4234 ) ,  ( ( * (  pane4232 ) ) .f_cursor ) ,  ( dref4235 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1980 {
    ;
    struct Theme_172 *  theme4276;
    struct Screen_278 *  screen4269;
    ;
};

struct envunion1981 {
    enum Unit_8  (*fun) (  struct env1980*  ,    enum HighlightType_18  );
    struct env1980 env;
};

static  enum Unit_8   if_dash_just1979 (    struct Maybe_205  x1553 ,   struct envunion1981  fun1555 ) {
    struct Maybe_205  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_205_Just_t ) {
        struct envunion1981  temp1982 = (  fun1555 );
        ( temp1982.fun ( &temp1982.env ,  ( dref1556 .stuff .Maybe_205_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_205_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1987 (    struct List_15 *  l2456 ,    size_t  new_dash_count2458 ) {
    (*  l2456 ) .f_count = ( (  min478 ) ( (  new_dash_count2458 ) ,  ( ( * (  l2456 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_299   head1990 (    struct Scanner_966 *  it1126 ) {
    struct Scanner_966  temp1991 = ( (  into_dash_iter982 ) ( (  it1126 ) ) );
    return ( (  next991 ) ( ( &temp1991 ) ) );
}

static  bool   null1989 (    struct Scanner_966 *  it1135 ) {
    struct Maybe_299  dref1136 = ( (  head1990 ) ( (  it1135 ) ) );
    if ( dref1136.tag == Maybe_299_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_299   peek1992 (    struct Scanner_966 *  sc3339 ) {
    return ( (  head1350 ) ( ( ( * (  sc3339 ) ) .f_s ) ) );
}

static  bool   eq1994 (    struct Maybe_299  l145 ,    struct Maybe_299  r147 ) {
    struct Tuple2_1772  dref148 = ( ( Tuple2_1772_Tuple2 ) ( (  l145 ) ,  (  r147 ) ) );
    if ( dref148 .field0.tag == Maybe_299_None_t && dref148 .field1.tag == Maybe_299_None_t ) {
        return ( true );
    }
    else {
        if ( dref148 .field0.tag == Maybe_299_Just_t && dref148 .field1.tag == Maybe_299_Just_t ) {
            return (  eq480 ( ( dref148 .field0 .stuff .Maybe_299_Just_s .field0 ) , ( dref148 .field1 .stuff .Maybe_299_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char1993 (    struct Scanner_966 *  sc3342 ,    struct Char_65  char3344 ) {
    if ( (  eq1994 ( ( (  peek1992 ) ( (  sc3342 ) ) ) , ( ( Maybe_299_Just ) ( (  char3344 ) ) ) ) ) ) {
        ( (  drop_prime_994 ) ( (  sc3342 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   char_dash_satisfies1996 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1995 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1996 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1997 (    struct Char_65  c4069 ) {
    return ( !  eq480 ( (  c4069 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ) );
}

struct envunion1999 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct TypeSize_2005 {
    size_t  f_size;
};

static  struct TypeSize_2005   get_dash_typesize2004 (  ) {
    struct Highlight_17  temp2006;
    return ( (struct TypeSize_2005) { .f_size = ( sizeof( ( (  temp2006 ) ) ) ) } );
}

static  struct Highlight_17 *   cast_dash_ptr2007 (    void *  p388 ) {
    return ( (struct Highlight_17 * ) (  p388 ) );
}

static  struct Slice_16   allocate2003 (    enum CAllocator_10  dref2303 ,    size_t  count2305 ) {
    if (!(  dref2303 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2306 = ( ( ( (  get_dash_typesize2004 ) ( ) ) ) .f_size );
    struct Highlight_17 *  ptr2307 = ( (  cast_dash_ptr2007 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2306 ) , (  count2305 ) ) ) ) ) ) );
    return ( (struct Slice_16) { .f_ptr = (  ptr2307 ) , .f_count = (  count2305 ) } );
}

struct env2008 {
    ;
    ;
    struct Slice_16  new_dash_slice2383;
};

struct Tuple2_2010 {
    struct Highlight_17  field0;
    int32_t  field1;
};

static struct Tuple2_2010 Tuple2_2010_Tuple2 (  struct Highlight_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2010 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2009 {
    enum Unit_8  (*fun) (  struct env2008*  ,    struct Tuple2_2010  );
    struct env2008 env;
};

static  struct Highlight_17 *   offset_dash_ptr2014 (    struct Highlight_17 *  x367 ,    int64_t  count369 ) {
    struct Highlight_17  temp2015;
    return ( (struct Highlight_17 * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp2015 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_17 *   get_dash_ptr2013 (    struct Slice_16  slice2105 ,    size_t  i2107 ) {
    if ( ( (  cmp292 ( (  i2107 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2107 ) , ( (  slice2105 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2107 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2105 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_17 *  elem_dash_ptr2108 = ( (  offset_dash_ptr2014 ) ( ( (  slice2105 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i2107 ) ) ) ) );
    return (  elem_dash_ptr2108 );
}

static  enum Unit_8   set2012 (    struct Slice_16  slice2122 ,    size_t  i2124 ,    struct Highlight_17  x2126 ) {
    struct Highlight_17 *  ep2127 = ( (  get_dash_ptr2013 ) ( (  slice2122 ) ,  (  i2124 ) ) );
    (*  ep2127 ) = (  x2126 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2011 (   struct env2008* env ,    struct Tuple2_2010  dref2384 ) {
    return ( (  set2012 ) ( ( env->new_dash_slice2383 ) ,  ( (  i32_dash_size422 ) ( ( dref2384 .field1 ) ) ) ,  ( dref2384 .field0 ) ) );
}

struct SliceIter_2018 {
    struct Slice_16  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2017 {
    struct SliceIter_2018  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

static  struct Zip_2017   into_dash_iter2020 (    struct Zip_2017  self895 ) {
    return (  self895 );
}

struct Maybe_2021 {
    enum {
        Maybe_2021_None_t,
        Maybe_2021_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2010  field0;
        } Maybe_2021_Just_s;
    } stuff;
};

static struct Maybe_2021 Maybe_2021_Just (  struct Tuple2_2010  field0 ) {
    return ( struct Maybe_2021 ) { .tag = Maybe_2021_Just_t, .stuff = { .Maybe_2021_Just_s = { .field0 = field0 } } };
};

struct Maybe_2023 {
    enum {
        Maybe_2023_None_t,
        Maybe_2023_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_17  field0;
        } Maybe_2023_Just_s;
    } stuff;
};

static struct Maybe_2023 Maybe_2023_Just (  struct Highlight_17  field0 ) {
    return ( struct Maybe_2023 ) { .tag = Maybe_2023_Just_t, .stuff = { .Maybe_2023_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2023   next2024 (    struct SliceIter_2018 *  self2191 ) {
    size_t  off2192 = ( ( * (  self2191 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2191 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2023) { .tag = Maybe_2023_None_t } );
    }
    struct Highlight_17  elem2193 = ( * ( (  offset_dash_ptr2014 ) ( ( ( ( * (  self2191 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2192 ) ) ) ) ) );
    (*  self2191 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2023_Just ) ( (  elem2193 ) ) );
}

static  struct Maybe_2021   next2022 (    struct Zip_2017 *  self898 ) {
    struct Zip_2017  copy899 = ( * (  self898 ) );
    while ( ( true ) ) {
        struct Maybe_2023  dref900 = ( (  next2024 ) ( ( & ( (  copy899 ) .f_left_dash_it ) ) ) );
        if ( dref900.tag == Maybe_2023_None_t ) {
            return ( (struct Maybe_2021) { .tag = Maybe_2021_None_t } );
        }
        else {
            if ( dref900.tag == Maybe_2023_Just_t ) {
                struct Maybe_155  dref902 = ( (  next432 ) ( ( & ( (  copy899 ) .f_right_dash_it ) ) ) );
                if ( dref902.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_2021) { .tag = Maybe_2021_None_t } );
                }
                else {
                    if ( dref902.tag == Maybe_155_Just_t ) {
                        ( (  next2024 ) ( ( & ( ( * (  self898 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self898 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2021_Just ) ( ( ( Tuple2_2010_Tuple2 ) ( ( dref900 .stuff .Maybe_2023_Just_s .field0 ) ,  ( dref902 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2016 (    struct Zip_2017  iterable1058 ,   struct envunion2009  fun1060 ) {
    struct Zip_2017  temp2019 = ( (  into_dash_iter2020 ) ( (  iterable1058 ) ) );
    struct Zip_2017 *  it1061 = ( &temp2019 );
    while ( ( true ) ) {
        struct Maybe_2021  dref1062 = ( (  next2022 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_2021_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_2021_Just_t ) {
                struct envunion2009  temp2025 = (  fun1060 );
                ( temp2025.fun ( &temp2025.env ,  ( dref1062 .stuff .Maybe_2021_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2018   into_dash_iter2027 (    struct Slice_16  self2185 ) {
    return ( (struct SliceIter_2018) { .f_slice = (  self2185 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2017   zip2026 (    struct Slice_16  left906 ,    struct FromIter_426  right908 ) {
    struct SliceIter_2018  left_dash_it909 = ( (  into_dash_iter2027 ) ( (  left906 ) ) );
    struct FromIter_426  right_dash_it910 = ( (  into_dash_iter436 ) ( (  right908 ) ) );
    return ( (struct Zip_2017) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

static  void *   cast_dash_ptr2029 (    struct Highlight_17 *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  enum Unit_8   free2028 (    enum CAllocator_10  dref2309 ,    struct Slice_16  slice2311 ) {
    if (!(  dref2309 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2029 ) ( ( (  slice2311 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full2002 (   struct env5* env ,    struct List_15 *  list2382 ) {
    if ( (  eq409 ( ( ( * (  list2382 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2382 ) .f_elements = ( (  allocate2003 ) ( ( ( * (  list2382 ) ) .f_al ) ,  ( env->starting_dash_size2377 ) ) );
    } else {
        if ( (  eq409 ( ( ( * (  list2382 ) ) .f_count ) , ( ( ( * (  list2382 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_16  new_dash_slice2383 = ( (  allocate2003 ) ( ( ( * (  list2382 ) ) .f_al ) ,  (  op_dash_mul415 ( ( ( * (  list2382 ) ) .f_count ) , ( env->growth_dash_factor2378 ) ) ) ) );
            struct env2008 envinst2008 = {
                .new_dash_slice2383 =  new_dash_slice2383 ,
            };
            struct envunion2009  fun2387 = ( (struct envunion2009){ .fun = (  enum Unit_8  (*) (  struct env2008*  ,    struct Tuple2_2010  ) )lam2011 , .env =  envinst2008 } );
            ( (  for_dash_each2016 ) ( ( (  zip2026 ) ( ( ( * (  list2382 ) ) .f_elements ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2387 ) ) );
            ( (  free2028 ) ( ( ( * (  list2382 ) ) .f_al ) ,  ( ( * (  list2382 ) ) .f_elements ) ) );
            (*  list2382 ) .f_elements = (  new_dash_slice2383 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add2000 (   struct env35* env ,    struct List_15 *  list2390 ,    struct Highlight_17  elem2392 ) {
    struct envunion36  temp2001 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_15 *  ) )grow_dash_if_dash_full2002 , .env =  env->envinst5 } );
    ( temp2001.fun ( &temp2001.env ,  (  list2390 ) ) );
    ( (  set2012 ) ( ( ( * (  list2390 ) ) .f_elements ) ,  ( ( * (  list2390 ) ) .f_count ) ,  (  elem2392 ) ) );
    (*  list2390 ) .f_count = (  op_dash_add313 ( ( ( * (  list2390 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2031 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2033 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2032 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2033 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2034 (    struct Char_65  c4072 ) {
    return ( ( !  eq480 ( (  c4072 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) && ( !  eq480 ( (  c4072 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2036 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2037 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2039 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2038 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2039 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2040 (    struct Char_65  c4075 ) {
    return ( (  eq1341 ( ( (  char_dash_type1344 ) ( (  c4075 ) ) ) , ( CharType_1342_CharWord ) ) ) || (  eq480 ( (  c4075 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2042 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_2044 {
    struct StrView_27 _arr [2];
};

struct env2045 {
    ;
    struct Scanner_966 *  sc4065;
};

struct envunion2046 {
    bool  (*fun) (  struct env2045*  ,    struct StrView_27  );
    struct env2045 env;
};

struct env2048 {
    struct envunion2046  fun1119;
};

struct envunion2049 {
    bool  (*fun) (  struct env2048*  ,    struct StrView_27  ,    bool  );
    struct env2048 env;
};

struct ArrayIter_2050 {
    struct Array_2044  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2050   into_dash_iter2051 (    struct Array_2044  self2037 ) {
    return ( (struct ArrayIter_2050) { .f_backing = (  self2037 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2055 (    struct Array_2044 *  p388 ) {
    return ( (struct StrView_27 * ) (  p388 ) );
}

static  struct StrView_27 *   offset_dash_ptr2056 (    struct StrView_27 *  x367 ,    int64_t  count369 ) {
    struct StrView_27  temp2057;
    return ( (struct StrView_27 * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp2057 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr2054 (    struct Array_2044 *  arr1961 ,    size_t  i1964 ) {
    if ( ( (  cmp292 ( (  i1964 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1964 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i1964 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p1965 = ( ( (  cast_dash_ptr2055 ) ( (  arr1961 ) ) ) );
    return ( (  offset_dash_ptr2056 ) ( (  p1965 ) ,  ( (int64_t ) (  i1964 ) ) ) );
}

static  struct StrView_27   get2053 (    struct Array_2044 *  arr1968 ,    size_t  i1971 ) {
    return ( * ( (  get_dash_ptr2054 ) ( (  arr1968 ) ,  (  i1971 ) ) ) );
}

static  struct Maybe_78   next2052 (    struct ArrayIter_2050 *  self2044 ) {
    if ( (  cmp292 ( ( ( * (  self2044 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
    struct StrView_27  e2046 = ( (  get2053 ) ( ( & ( ( * (  self2044 ) ) .f_backing ) ) ,  ( ( * (  self2044 ) ) .f_cur ) ) );
    (*  self2044 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2044 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_78_Just ) ( (  e2046 ) ) );
}

static  bool   reduce2047 (    struct Array_2044  iterable1077 ,    bool  base1079 ,   struct envunion2049  fun1081 ) {
    bool  x1082 = (  base1079 );
    struct ArrayIter_2050  it1083 = ( (  into_dash_iter2051 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_78  dref1084 = ( (  next2052 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_78_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_78_Just_t ) {
                struct envunion2049  temp2058 = (  fun1081 );
                x1082 = ( temp2058.fun ( &temp2058.env ,  ( dref1084 .stuff .Maybe_78_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp2059 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2059);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2060;
    return (  temp2060 );
}

static  bool   lam2061 (   struct env2048* env ,    struct StrView_27  e1121 ,    bool  x1123 ) {
    struct envunion2046  temp2062 = ( env->fun1119 );
    return ( ( temp2062.fun ( &temp2062.env ,  (  e1121 ) ) ) || (  x1123 ) );
}

static  bool   any2043 (    struct Array_2044  it1117 ,   struct envunion2046  fun1119 ) {
    struct env2048 envinst2048 = {
        .fun1119 =  fun1119 ,
    };
    return ( (  reduce2047 ) ( (  it1117 ) ,  ( false ) ,  ( (struct envunion2049){ .fun = (  bool  (*) (  struct env2048*  ,    struct StrView_27  ,    bool  ) )lam2061 , .env =  envinst2048 } ) ) );
}

static  struct Array_2044   from_dash_listlike2063 (    struct Array_2044 *  self359 ) {
    return ( * (  self359 ) );
}

static  struct StrViewIter_469   own2069 (    struct StrViewIter_469  x1513 ) {
    return (  x1513 );
}

static  bool   matches_dash_str2066 (    struct Scanner_966 *  sc3354 ,    struct StrView_27  s3356 ) {
    size_t  skip3357 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_469  temp2067 = ( (  chars471 ) ( (  s3356 ) ) );
    struct StrViewIter_469 *  ss3358 = ( &temp2067 );
    struct StrViewIter_469  temp2068 = ( (  own2069 ) ( ( ( * (  sc3354 ) ) .f_s ) ) );
    struct StrViewIter_469 *  sccp3359 = ( &temp2068 );
    while ( ( true ) ) {
        struct Tuple2_1772  dref3360 = ( ( Tuple2_1772_Tuple2 ) ( ( (  next474 ) ( (  sccp3359 ) ) ) ,  ( (  next474 ) ( (  ss3358 ) ) ) ) );
        if ( dref3360 .field1.tag == Maybe_299_None_t ) {
            ( (  drop_prime_994 ) ( (  sc3354 ) ,  (  skip3357 ) ) );
            return ( true );
        }
        else {
            if ( dref3360 .field0.tag == Maybe_299_Just_t && dref3360 .field1.tag == Maybe_299_Just_t ) {
                if ( ( !  eq480 ( ( dref3360 .field0 .stuff .Maybe_299_Just_s .field0 ) , ( dref3360 .field1 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3357 = (  op_dash_add313 ( (  skip3357 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2065 (   struct env2045* env ,    struct StrView_27  sym4078 ) {
    return ( (  matches_dash_str2066 ) ( ( env->sc4065 ) ,  (  sym4078 ) ) );
}

struct envunion2071 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_2073 {
    struct StrView_27 _arr [12];
};

struct env2074 {
    ;
    struct Scanner_966 *  sc4065;
};

struct envunion2075 {
    bool  (*fun) (  struct env2074*  ,    struct StrView_27  );
    struct env2074 env;
};

struct env2077 {
    struct envunion2075  fun1119;
};

struct envunion2078 {
    bool  (*fun) (  struct env2077*  ,    struct StrView_27  ,    bool  );
    struct env2077 env;
};

struct ArrayIter_2079 {
    struct Array_2073  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2079   into_dash_iter2080 (    struct Array_2073  self2037 ) {
    return ( (struct ArrayIter_2079) { .f_backing = (  self2037 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2084 (    struct Array_2073 *  p388 ) {
    return ( (struct StrView_27 * ) (  p388 ) );
}

static  struct StrView_27 *   get_dash_ptr2083 (    struct Array_2073 *  arr1961 ,    size_t  i1964 ) {
    if ( ( (  cmp292 ( (  i1964 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1964 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i1964 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p1965 = ( ( (  cast_dash_ptr2084 ) ( (  arr1961 ) ) ) );
    return ( (  offset_dash_ptr2056 ) ( (  p1965 ) ,  ( (int64_t ) (  i1964 ) ) ) );
}

static  struct StrView_27   get2082 (    struct Array_2073 *  arr1968 ,    size_t  i1971 ) {
    return ( * ( (  get_dash_ptr2083 ) ( (  arr1968 ) ,  (  i1971 ) ) ) );
}

static  struct Maybe_78   next2081 (    struct ArrayIter_2079 *  self2044 ) {
    if ( (  cmp292 ( ( ( * (  self2044 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
    struct StrView_27  e2046 = ( (  get2082 ) ( ( & ( ( * (  self2044 ) ) .f_backing ) ) ,  ( ( * (  self2044 ) ) .f_cur ) ) );
    (*  self2044 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2044 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_78_Just ) ( (  e2046 ) ) );
}

static  bool   reduce2076 (    struct Array_2073  iterable1077 ,    bool  base1079 ,   struct envunion2078  fun1081 ) {
    bool  x1082 = (  base1079 );
    struct ArrayIter_2079  it1083 = ( (  into_dash_iter2080 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_78  dref1084 = ( (  next2081 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_78_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_78_Just_t ) {
                struct envunion2078  temp2085 = (  fun1081 );
                x1082 = ( temp2085.fun ( &temp2085.env ,  ( dref1084 .stuff .Maybe_78_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp2086 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2086);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2087;
    return (  temp2087 );
}

static  bool   lam2088 (   struct env2077* env ,    struct StrView_27  e1121 ,    bool  x1123 ) {
    struct envunion2075  temp2089 = ( env->fun1119 );
    return ( ( temp2089.fun ( &temp2089.env ,  (  e1121 ) ) ) || (  x1123 ) );
}

static  bool   any2072 (    struct Array_2073  it1117 ,   struct envunion2075  fun1119 ) {
    struct env2077 envinst2077 = {
        .fun1119 =  fun1119 ,
    };
    return ( (  reduce2076 ) ( (  it1117 ) ,  ( false ) ,  ( (struct envunion2078){ .fun = (  bool  (*) (  struct env2077*  ,    struct StrView_27  ,    bool  ) )lam2088 , .env =  envinst2077 } ) ) );
}

static  struct Array_2073   from_dash_listlike2090 (    struct Array_2073 *  self359 ) {
    return ( * (  self359 ) );
}

static  bool   lam2092 (   struct env2074* env ,    struct StrView_27  sym4082 ) {
    return ( (  matches_dash_str2066 ) ( ( env->sc4065 ) ,  (  sym4082 ) ) );
}

struct envunion2094 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2096 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2095 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2096 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2097 (    struct Char_65  c4086 ) {
    return ( (  eq1341 ( ( (  char_dash_type1344 ) ( (  c4086 ) ) ) , ( CharType_1342_CharWord ) ) ) || (  eq480 ( (  c4086 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2098 (    struct Maybe_299  x1544 ,    bool (*  fun1546 )(    struct Char_65  ) ,    bool  default1548 ) {
    return ( {  struct Maybe_299  dref1549 = (  x1544 ) ; dref1549.tag == Maybe_299_Just_t ? ( (  fun1546 ) ( ( dref1549 .stuff .Maybe_299_Just_s .field0 ) ) ) : (  default1548 ) ; } );
}

static  bool   is_dash_upper2099 (    struct Char_65  c1473 ) {
    return ( (  eq409 ( ( (  c1473 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between985 ) ( (  c1473 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2100 {
    struct StrView_27 _arr [6];
};

static  struct Array_2100   from_dash_listlike2101 (    struct Array_2100 *  self359 ) {
    return ( * (  self359 ) );
}

struct Array_2103 {
    struct StrView_27 _arr [15];
};

static  struct Array_2103   from_dash_listlike2104 (    struct Array_2103 *  self359 ) {
    return ( * (  self359 ) );
}

struct env2107 {
    struct StrView_27  ident4090;
    ;
};

struct envunion2108 {
    bool  (*fun) (  struct env2107*  ,    struct StrView_27  );
    struct env2107 env;
};

struct env2110 {
    struct envunion2108  fun1119;
};

struct envunion2111 {
    bool  (*fun) (  struct env2110*  ,    struct StrView_27  ,    bool  );
    struct env2110 env;
};

struct ArrayIter_2112 {
    struct Array_2100  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2112   into_dash_iter2113 (    struct Array_2100  self2037 ) {
    return ( (struct ArrayIter_2112) { .f_backing = (  self2037 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2117 (    struct Array_2100 *  p388 ) {
    return ( (struct StrView_27 * ) (  p388 ) );
}

static  struct StrView_27 *   get_dash_ptr2116 (    struct Array_2100 *  arr1961 ,    size_t  i1964 ) {
    if ( ( (  cmp292 ( (  i1964 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1964 ) , ( (size_t ) ( 6 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i1964 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 6 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p1965 = ( ( (  cast_dash_ptr2117 ) ( (  arr1961 ) ) ) );
    return ( (  offset_dash_ptr2056 ) ( (  p1965 ) ,  ( (int64_t ) (  i1964 ) ) ) );
}

static  struct StrView_27   get2115 (    struct Array_2100 *  arr1968 ,    size_t  i1971 ) {
    return ( * ( (  get_dash_ptr2116 ) ( (  arr1968 ) ,  (  i1971 ) ) ) );
}

static  struct Maybe_78   next2114 (    struct ArrayIter_2112 *  self2044 ) {
    if ( (  cmp292 ( ( ( * (  self2044 ) ) .f_cur ) , ( (size_t ) ( 6 ) ) ) != 0 ) ) {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
    struct StrView_27  e2046 = ( (  get2115 ) ( ( & ( ( * (  self2044 ) ) .f_backing ) ) ,  ( ( * (  self2044 ) ) .f_cur ) ) );
    (*  self2044 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2044 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_78_Just ) ( (  e2046 ) ) );
}

static  bool   reduce2109 (    struct Array_2100  iterable1077 ,    bool  base1079 ,   struct envunion2111  fun1081 ) {
    bool  x1082 = (  base1079 );
    struct ArrayIter_2112  it1083 = ( (  into_dash_iter2113 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_78  dref1084 = ( (  next2114 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_78_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_78_Just_t ) {
                struct envunion2111  temp2118 = (  fun1081 );
                x1082 = ( temp2118.fun ( &temp2118.env ,  ( dref1084 .stuff .Maybe_78_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp2119 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2119);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2120;
    return (  temp2120 );
}

static  bool   lam2121 (   struct env2110* env ,    struct StrView_27  e1121 ,    bool  x1123 ) {
    struct envunion2108  temp2122 = ( env->fun1119 );
    return ( ( temp2122.fun ( &temp2122.env ,  (  e1121 ) ) ) || (  x1123 ) );
}

static  bool   any2106 (    struct Array_2100  it1117 ,   struct envunion2108  fun1119 ) {
    struct env2110 envinst2110 = {
        .fun1119 =  fun1119 ,
    };
    return ( (  reduce2109 ) ( (  it1117 ) ,  ( false ) ,  ( (struct envunion2111){ .fun = (  bool  (*) (  struct env2110*  ,    struct StrView_27  ,    bool  ) )lam2121 , .env =  envinst2110 } ) ) );
}

static  bool   lam2123 (   struct env2107* env ,    struct StrView_27  kw4094 ) {
    return (  eq497 ( (  kw4094 ) , ( env->ident4090 ) ) );
}

struct env2125 {
    struct StrView_27  ident4090;
    ;
};

struct envunion2126 {
    bool  (*fun) (  struct env2125*  ,    struct StrView_27  );
    struct env2125 env;
};

struct env2128 {
    struct envunion2126  fun1119;
};

struct envunion2129 {
    bool  (*fun) (  struct env2128*  ,    struct StrView_27  ,    bool  );
    struct env2128 env;
};

struct ArrayIter_2130 {
    struct Array_2103  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2130   into_dash_iter2131 (    struct Array_2103  self2037 ) {
    return ( (struct ArrayIter_2130) { .f_backing = (  self2037 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2135 (    struct Array_2103 *  p388 ) {
    return ( (struct StrView_27 * ) (  p388 ) );
}

static  struct StrView_27 *   get_dash_ptr2134 (    struct Array_2103 *  arr1961 ,    size_t  i1964 ) {
    if ( ( (  cmp292 ( (  i1964 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1964 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i1964 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p1965 = ( ( (  cast_dash_ptr2135 ) ( (  arr1961 ) ) ) );
    return ( (  offset_dash_ptr2056 ) ( (  p1965 ) ,  ( (int64_t ) (  i1964 ) ) ) );
}

static  struct StrView_27   get2133 (    struct Array_2103 *  arr1968 ,    size_t  i1971 ) {
    return ( * ( (  get_dash_ptr2134 ) ( (  arr1968 ) ,  (  i1971 ) ) ) );
}

static  struct Maybe_78   next2132 (    struct ArrayIter_2130 *  self2044 ) {
    if ( (  cmp292 ( ( ( * (  self2044 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
    struct StrView_27  e2046 = ( (  get2133 ) ( ( & ( ( * (  self2044 ) ) .f_backing ) ) ,  ( ( * (  self2044 ) ) .f_cur ) ) );
    (*  self2044 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2044 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_78_Just ) ( (  e2046 ) ) );
}

static  bool   reduce2127 (    struct Array_2103  iterable1077 ,    bool  base1079 ,   struct envunion2129  fun1081 ) {
    bool  x1082 = (  base1079 );
    struct ArrayIter_2130  it1083 = ( (  into_dash_iter2131 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_78  dref1084 = ( (  next2132 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_78_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_78_Just_t ) {
                struct envunion2129  temp2136 = (  fun1081 );
                x1082 = ( temp2136.fun ( &temp2136.env ,  ( dref1084 .stuff .Maybe_78_Just_s .field0 ) ,  (  x1082 ) ) );
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

static  bool   lam2139 (   struct env2128* env ,    struct StrView_27  e1121 ,    bool  x1123 ) {
    struct envunion2126  temp2140 = ( env->fun1119 );
    return ( ( temp2140.fun ( &temp2140.env ,  (  e1121 ) ) ) || (  x1123 ) );
}

static  bool   any2124 (    struct Array_2103  it1117 ,   struct envunion2126  fun1119 ) {
    struct env2128 envinst2128 = {
        .fun1119 =  fun1119 ,
    };
    return ( (  reduce2127 ) ( (  it1117 ) ,  ( false ) ,  ( (struct envunion2129){ .fun = (  bool  (*) (  struct env2128*  ,    struct StrView_27  ,    bool  ) )lam2139 , .env =  envinst2128 } ) ) );
}

static  bool   lam2141 (   struct env2125* env ,    struct StrView_27  kw4096 ) {
    return (  eq497 ( (  kw4096 ) , ( env->ident4090 ) ) );
}

struct envunion2143 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_978   int2144 (    struct Scanner_966 *  sc3333 ) {
    return ( (  scan_dash_int979 ) ( (  sc3333 ) ) );
}

static  bool   char_dash_satisfies2146 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2145 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2146 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2147 (    struct Char_65  c1461 ) {
    return ( (  eq409 ( ( (  c1461 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit984 ) ( (  c1461 ) ) ) || ( (  between985 ) ( (  c1461 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between985 ) ( (  c1461 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2149 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2150 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2037 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2152 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2154 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2153 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2154 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2155 (    struct Char_65  c1467 ) {
    return ( (  eq409 ( ( (  c1467 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between985 ) ( (  c1467 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2157 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2159 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2158 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2159 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2161 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2163 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2162 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2163 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2164 (    struct Char_65  c1464 ) {
    return ( (  eq409 ( ( (  c1464 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq480 ( (  c1464 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) || (  eq480 ( (  c1464 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2167 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2169 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2171 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2174 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2176 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2175 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2176 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2178 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2180 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2182 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2184 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2186 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2185 (    struct Scanner_966 *  sc3365 ,    bool (*  condition3367 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2186 ) ( (  sc3365 ) ,  (  condition3367 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   gcode_dash_keyword_dash_char2187 (    struct Char_65  c4056 ) {
    return ( ( (  is_dash_not_dash_whitespace1681 ) ( (  c4056 ) ) ) && ( !  eq480 ( (  c4056 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) );
}

static  uint8_t   char_dash_case_dash_diff2189 (  ) {
    return (  op_dash_sub943 ( ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Char_65   to_dash_lower2188 (    struct Char_65  c1480 ) {
    if ( ( (  is_dash_upper2099 ) ( (  c1480 ) ) ) ) {
        ( (  assert679 ) ( (  eq409 ( ( (  c1480 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"(to-lower) utf8 not yet supported." ) ,  ( 34 ) ) ) ) );
        return ( (  from_dash_u81797 ) ( (  op_dash_add944 ( ( (  char_dash_u8545 ) ( (  c1480 ) ) ) , ( (  char_dash_case_dash_diff2189 ) ( ) ) ) ) ) );
    }
    return (  c1480 );
}

struct StrConcat_2195 {
    struct StrView_27  field0;
    struct StrConcat_646  field1;
};

static struct StrConcat_2195 StrConcat_2195_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_646  field1 ) {
    return ( struct StrConcat_2195 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2194 {
    struct StrConcat_2195  field0;
    struct Char_65  field1;
};

static struct StrConcat_2194 StrConcat_2194_StrConcat (  struct StrConcat_2195  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2194 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2196 (    struct StrConcat_2195  self1254 ) {
    struct StrConcat_2195  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str653 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2193 (    struct StrConcat_2194  self1254 ) {
    struct StrConcat_2194  dref1255 = (  self1254 );
    if ( true ) {
        ( (  print_dash_str2196 ) ( ( dref1255 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1255 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic2192 (    struct StrConcat_646  errmsg1295 ) {
    ( (  print_dash_str2193 ) ( ( ( StrConcat_2194_StrConcat ) ( ( ( StrConcat_2195_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1295 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Char_65   undefined2197 (  ) {
    struct Char_65  temp2198;
    return (  temp2198 );
}

static  struct Char_65   or_dash_fail2191 (    struct Maybe_299  x1305 ,    struct StrConcat_646  errmsg1307 ) {
    struct Maybe_299  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_299_None_t ) {
        ( (  panic2192 ) ( (  errmsg1307 ) ) );
        return ( (  undefined2197 ) ( ) );
    }
    else {
        if ( dref1308.tag == Maybe_299_Just_t ) {
            return ( dref1308 .stuff .Maybe_299_Just_s .field0 );
        }
    }
}

static  struct Char_65   char_dash_at_dash_offset2190 (    struct StrView_27  self2559 ,    size_t  i2561 ) {
    return ( (  or_dash_fail2191 ) ( ( (  head1350 ) ( ( (  chars471 ) ( ( (struct StrView_27) { .f_contents = ( (  from476 ) ( ( (  self2559 ) .f_contents ) ,  (  i2561 ) ) ) } ) ) ) ) ) ,  ( ( StrConcat_646_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(StrView.char-at-offset) off too great for this StrView (" ) ,  ( 57 ) ) ) ,  (  i2561 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2200 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2202 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2203 (    struct Scanner_966 *  sc3347 ,    bool (*  condition3349 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3350 = ( (  head1350 ) ( ( ( * (  sc3347 ) ) .f_s ) ) );
    if ( dref3350.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3349 ) ( ( dref3350 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3347 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3350.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  bool   lam2204 (    struct Char_65  c4121 ) {
    return ( !  eq480 ( (  c4121 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) );
}

struct envunion2206 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1986 (   struct env134* env ,    struct TextBuf_105 *  self4059 ,    struct Line_12 *  line4061 ) {
    if ( ( ! ( ( * (  line4061 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_15 *  hls4062 = ( & ( ( * (  line4061 ) ) .f_highlights ) );
    ( (  trim1987 ) ( (  hls4062 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv4063 = ( (  from_dash_bytes1109 ) ( ( (  to_dash_slice577 ) ( ( ( * (  line4061 ) ) .f_line ) ) ) ) );
    enum Filetype_108  dref4064 = ( ( * (  self4059 ) ) .f_filetype );
    switch (  dref4064 ) {
        case Filetype_108_Text : {
            break;
        }
        case Filetype_108_KC : {
            struct Scanner_966  temp1988 = ( (  mk_dash_from_dash_str968 ) ( (  line_dash_sv4063 ) ) );
            struct Scanner_966 *  sc4065 = ( &temp1988 );
            while ( ( ! ( (  null1989 ) ( (  sc4065 ) ) ) ) ) {
                int32_t  from_dash_off4066 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                struct Maybe_299  first_dash_char4067 = ( (  peek1992 ) ( (  sc4065 ) ) );
                if ( ( (  try_dash_char1993 ) ( (  sc4065 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  try_dash_char1993 ) ( (  sc4065 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  skip_dash_while1995 ) ( (  sc4065 ) ,  (  lam1997 ) ) );
                        ( (  drop_prime_994 ) ( (  sc4065 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        int32_t  to_dash_off4070 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                        struct envunion1999  temp1998 = ( (struct envunion1999){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                        ( temp1998.fun ( &temp1998.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  line_dash_sv4063 ) ) ) ) ) , .f_type = ( HighlightType_18_Special3 ) } ) ) );
                    } else {
                        struct envunion2031  temp2030 = ( (struct envunion2031){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                        ( temp2030.fun ( &temp2030.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  line_dash_sv4063 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
                    }
                    break;
                } else {
                    if ( ( (  try_dash_char1993 ) ( (  sc4065 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) {
                        while ( ( true ) ) {
                            ( (  skip_dash_while2032 ) ( (  sc4065 ) ,  (  lam2034 ) ) );
                            if ( (  eq1994 ( ( (  peek1992 ) ( (  sc4065 ) ) ) , ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                ( (  drop_prime_994 ) ( (  sc4065 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                if ( (  eq1994 ( ( (  peek1992 ) ( (  sc4065 ) ) ) , ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                    ( (  drop_prime_994 ) ( (  sc4065 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                } else {
                                }
                            } else {
                                ( (  drop_prime_994 ) ( (  sc4065 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                break;
                            }
                        }
                        int32_t  cur_dash_off4073 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2036  temp2035 = ( (struct envunion2036){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                        ( temp2035.fun ( &temp2035.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = (  cur_dash_off4073 ) , .f_type = ( HighlightType_18_String ) } ) ) );
                    } else {
                        if ( ( (  try_dash_char1993 ) ( (  sc4065 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"@" ) ,  ( 1 ) ) ) ) ) ) {
                            if ( ( (  char_dash_satisfies2037 ) ( (  sc4065 ) ,  (  is_dash_alpha1346 ) ) ) ) {
                                ( (  skip_dash_while2038 ) ( (  sc4065 ) ,  (  lam2040 ) ) );
                                int32_t  cur_dash_off4076 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                struct envunion2042  temp2041 = ( (struct envunion2042){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                ( temp2041.fun ( &temp2041.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = (  cur_dash_off4076 ) , .f_type = ( HighlightType_18_Ident3 ) } ) ) );
                            } else {
                            }
                        } else {
                            struct Array_2044  temp2064 = ( (struct Array_2044) { ._arr = { ( (  from_dash_string201 ) ( ( (uint8_t*)"==" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"/=" ) ,  ( 2 ) ) ) } } );
                            struct env2045 envinst2045 = {
                                .sc4065 =  sc4065 ,
                            };
                            if ( ( (  any2043 ) ( ( (  from_dash_listlike2063 ) ( ( &temp2064 ) ) ) ,  ( (struct envunion2046){ .fun = (  bool  (*) (  struct env2045*  ,    struct StrView_27  ) )lam2065 , .env =  envinst2045 } ) ) ) ) {
                                int32_t  cur_dash_off4079 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                enum HighlightType_18  type4080 = ( HighlightType_18_Special2 );
                                struct envunion2071  temp2070 = ( (struct envunion2071){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                ( temp2070.fun ( &temp2070.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = (  cur_dash_off4079 ) , .f_type = (  type4080 ) } ) ) );
                            } else {
                                struct Array_2073  temp2091 = ( (struct Array_2073) { ._arr = { ( (  from_dash_string201 ) ( ( (uint8_t*)"<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"&" ) ,  ( 1 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) } } );
                                struct env2074 envinst2074 = {
                                    .sc4065 =  sc4065 ,
                                };
                                if ( ( (  any2072 ) ( ( (  from_dash_listlike2090 ) ( ( &temp2091 ) ) ) ,  ( (struct envunion2075){ .fun = (  bool  (*) (  struct env2074*  ,    struct StrView_27  ) )lam2092 , .env =  envinst2074 } ) ) ) ) {
                                    int32_t  cur_dash_off4083 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_18  type4084 = ( HighlightType_18_Special1 );
                                    struct envunion2094  temp2093 = ( (struct envunion2094){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                    ( temp2093.fun ( &temp2093.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = (  cur_dash_off4083 ) , .f_type = (  type4084 ) } ) ) );
                                } else {
                                    if ( ( (  char_dash_satisfies2037 ) ( (  sc4065 ) ,  (  is_dash_alpha1346 ) ) ) ) {
                                        ( (  skip_dash_while2095 ) ( (  sc4065 ) ,  (  lam2097 ) ) );
                                        int32_t  cur_dash_off4087 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                        bool  first_dash_char_dash_uppercase4088 = ( (  maybe2098 ) ( (  first_dash_char4067 ) ,  (  is_dash_upper2099 ) ,  ( false ) ) );
                                        enum HighlightType_18  type4089 = ( (  first_dash_char_dash_uppercase4088 ) ? ( HighlightType_18_Ident2 ) : ( HighlightType_18_Ident1 ) );
                                        struct StrView_27  ident4090 = ( ( (  byte_dash_substr496 ) ( (  line_dash_sv4063 ) ,  ( (  i32_dash_size422 ) ( (  from_dash_off4066 ) ) ) ,  ( (  i32_dash_size422 ) ( (  cur_dash_off4087 ) ) ) ) ) );
                                        struct Array_2100  temp2102 = ( (struct Array_2100) { ._arr = { ( (  from_dash_string201 ) ( ( (uint8_t*)"fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"class" ) ,  ( 5 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"external" ) ,  ( 8 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"use" ) ,  ( 3 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"export" ) ,  ( 6 ) ) ) } } );
                                        struct Array_2100  keywords14091 = ( (  from_dash_listlike2101 ) ( ( &temp2102 ) ) );
                                        struct Array_2103  temp2105 = ( (struct Array_2103) { ._arr = { ( (  from_dash_string201 ) ( ( (uint8_t*)"if" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"else" ) ,  ( 4 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"case" ) ,  ( 4 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"for" ) ,  ( 3 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"in" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"while" ) ,  ( 5 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"break" ) ,  ( 5 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"as" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"or" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"and" ) ,  ( 3 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"not" ) ,  ( 3 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"return" ) ,  ( 6 ) ) ) } } );
                                        struct Array_2103  keywords24092 = ( (  from_dash_listlike2104 ) ( ( &temp2105 ) ) );
                                        struct env2107 envinst2107 = {
                                            .ident4090 =  ident4090 ,
                                        };
                                        if ( ( (  any2106 ) ( (  keywords14091 ) ,  ( (struct envunion2108){ .fun = (  bool  (*) (  struct env2107*  ,    struct StrView_27  ) )lam2123 , .env =  envinst2107 } ) ) ) ) {
                                            type4089 = ( HighlightType_18_Keyword1 );
                                        } else {
                                            struct env2125 envinst2125 = {
                                                .ident4090 =  ident4090 ,
                                            };
                                            if ( ( (  any2124 ) ( (  keywords24092 ) ,  ( (struct envunion2126){ .fun = (  bool  (*) (  struct env2125*  ,    struct StrView_27  ) )lam2141 , .env =  envinst2125 } ) ) ) ) {
                                                type4089 = ( HighlightType_18_Keyword2 );
                                            } else {
                                                if ( ( ( ! (  first_dash_char_dash_uppercase4088 ) ) && (  eq1994 ( ( (  peek1992 ) ( (  sc4065 ) ) ) , ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                                    type4089 = ( HighlightType_18_Ident4 );
                                                }
                                            }
                                        }
                                        struct envunion2143  temp2142 = ( (struct envunion2143){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                        ( temp2142.fun ( &temp2142.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = (  cur_dash_off4087 ) , .f_type = (  type4089 ) } ) ) );
                                    } else {
                                        struct Maybe_978  dref4097 = ( (  int2144 ) ( (  sc4065 ) ) );
                                        if ( dref4097.tag == Maybe_978_Just_t ) {
                                            int32_t  cur_dash_off4099 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                            enum HighlightType_18  type4100 = ( HighlightType_18_Number );
                                            if ( (  eq1070 ( ( dref4097 .stuff .Maybe_978_Just_s .field0 ) , (  from_dash_integral290 ( 0 ) ) ) ) ) {
                                                if ( ( (  try_dash_char1993 ) ( (  sc4065 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2145 ) ( (  sc4065 ) ,  (  is_dash_hex2147 ) ) );
                                                    int32_t  cur_dash_off4101 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2149  temp2148 = ( (struct envunion2149){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                                    ( temp2148.fun ( &temp2148.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = (  cur_dash_off4101 ) , .f_type = (  type4100 ) } ) ) );
                                                    ( (  skip_dash_while2150 ) ( (  sc4065 ) ,  (  is_dash_alpha1346 ) ) );
                                                    int32_t  invalid_dash_off4102 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq570 ( (  cur_dash_off4101 ) , (  invalid_dash_off4102 ) ) ) ) {
                                                        struct envunion2152  temp2151 = ( (struct envunion2152){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                                        ( temp2151.fun ( &temp2151.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off4101 ) , .f_to = (  invalid_dash_off4102 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    if ( ( (  try_dash_char1993 ) ( (  sc4065 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  skip_dash_while2153 ) ( (  sc4065 ) ,  (  is_dash_octal2155 ) ) );
                                                        int32_t  cur_dash_off4103 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                                        struct envunion2157  temp2156 = ( (struct envunion2157){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                                        ( temp2156.fun ( &temp2156.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = (  cur_dash_off4103 ) , .f_type = (  type4100 ) } ) ) );
                                                        ( (  skip_dash_while2158 ) ( (  sc4065 ) ,  (  is_dash_digit984 ) ) );
                                                        int32_t  invalid_dash_off4104 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                                        if ( ( !  eq570 ( (  cur_dash_off4103 ) , (  invalid_dash_off4104 ) ) ) ) {
                                                            struct envunion2161  temp2160 = ( (struct envunion2161){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                                            ( temp2160.fun ( &temp2160.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off4103 ) , .f_to = (  invalid_dash_off4104 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                        }
                                                    } else {
                                                        if ( ( (  try_dash_char1993 ) ( (  sc4065 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  skip_dash_while2162 ) ( (  sc4065 ) ,  (  is_dash_binary2164 ) ) );
                                                            int32_t  cur_dash_off4105 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                                            struct envunion135  temp2165 = ( (struct envunion135){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                                            ( temp2165.fun ( &temp2165.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = (  cur_dash_off4105 ) , .f_type = (  type4100 ) } ) ) );
                                                            ( (  skip_dash_while2158 ) ( (  sc4065 ) ,  (  is_dash_digit984 ) ) );
                                                            int32_t  invalid_dash_off4106 = ( (  size_dash_i32331 ) ( ( ( * (  sc4065 ) ) .f_byte_dash_offset ) ) );
                                                            if ( ( !  eq570 ( (  cur_dash_off4105 ) , (  invalid_dash_off4106 ) ) ) ) {
                                                                struct envunion2167  temp2166 = ( (struct envunion2167){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                                                ( temp2166.fun ( &temp2166.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off4105 ) , .f_to = (  invalid_dash_off4106 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                            }
                                                        } else {
                                                            struct envunion2169  temp2168 = ( (struct envunion2169){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                                            ( temp2168.fun ( &temp2168.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = (  cur_dash_off4099 ) , .f_type = (  type4100 ) } ) ) );
                                                        }
                                                    }
                                                }
                                            } else {
                                                struct envunion2171  temp2170 = ( (struct envunion2171){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                                                ( temp2170.fun ( &temp2170.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4066 ) , .f_to = (  cur_dash_off4099 ) , .f_type = (  type4100 ) } ) ) );
                                            }
                                        }
                                        else {
                                            if ( dref4097.tag == Maybe_978_None_t ) {
                                                ( (  drop_prime_994 ) ( (  sc4065 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        case Filetype_108_Markdown : {
            struct Scanner_966  temp2172 = ( (  mk_dash_from_dash_str968 ) ( (  line_dash_sv4063 ) ) );
            struct Scanner_966 *  sc4107 = ( &temp2172 );
            if ( ( (  try_dash_char1993 ) ( (  sc4107 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
                struct envunion2174  temp2173 = ( (struct envunion2174){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                ( temp2173.fun ( &temp2173.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_integral56 ( 0 ) ) , .f_to = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  line_dash_sv4063 ) ) ) ) ) , .f_type = ( HighlightType_18_Keyword1 ) } ) ) );
            } else {
                ( (  skip_dash_while2175 ) ( (  sc4107 ) ,  (  is_dash_whitespace1347 ) ) );
                int32_t  from_dash_off4108 = ( (  size_dash_i32331 ) ( ( ( * (  sc4107 ) ) .f_byte_dash_offset ) ) );
                if ( ( (  try_dash_char1993 ) ( (  sc4107 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) {
                    int32_t  to_dash_off4109 = ( (  size_dash_i32331 ) ( ( ( * (  sc4107 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2178  temp2177 = ( (struct envunion2178){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                    ( temp2177.fun ( &temp2177.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4108 ) , .f_to = (  to_dash_off4109 ) , .f_type = ( HighlightType_18_Special1 ) } ) ) );
                    ( (  skip_dash_while2175 ) ( (  sc4107 ) ,  (  is_dash_whitespace1347 ) ) );
                    int32_t  from_dash_off4110 = ( (  size_dash_i32331 ) ( ( ( * (  sc4107 ) ) .f_byte_dash_offset ) ) );
                    if ( ( (  matches_dash_str2066 ) ( (  sc4107 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"[ ]" ) ,  ( 3 ) ) ) ) ) ) {
                        int32_t  to_dash_off4111 = ( (  size_dash_i32331 ) ( ( ( * (  sc4107 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2180  temp2179 = ( (struct envunion2180){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                        ( temp2179.fun ( &temp2179.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4110 ) , .f_to = (  to_dash_off4111 ) , .f_type = ( HighlightType_18_Keyword1 ) } ) ) );
                    } else {
                        if ( ( ( (  matches_dash_str2066 ) ( (  sc4107 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"[x]" ) ,  ( 3 ) ) ) ) ) || ( (  matches_dash_str2066 ) ( (  sc4107 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"[X]" ) ,  ( 3 ) ) ) ) ) ) ) {
                            int32_t  to_dash_off4112 = ( (  size_dash_i32331 ) ( ( ( * (  sc4107 ) ) .f_byte_dash_offset ) ) );
                            struct envunion2182  temp2181 = ( (struct envunion2182){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                            ( temp2181.fun ( &temp2181.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4110 ) , .f_to = (  to_dash_off4112 ) , .f_type = ( HighlightType_18_Keyword2 ) } ) ) );
                        }
                    }
                }
            }
            break;
        }
        case Filetype_108_GCode : {
            struct Scanner_966  temp2183 = ( (  mk_dash_from_dash_str968 ) ( (  line_dash_sv4063 ) ) );
            struct Scanner_966 *  sc4113 = ( &temp2183 );
            ( (  skip_dash_while2175 ) ( (  sc4113 ) ,  (  is_dash_whitespace1347 ) ) );
            int32_t  first_dash_from_dash_off4114 = ( (  size_dash_i32331 ) ( ( ( * (  sc4113 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  char_dash_satisfies2184 ) ( (  sc4113 ) ,  (  is_dash_alphanumeric1345 ) ) ) ) {
                ( (  skip_dash_while2185 ) ( (  sc4113 ) ,  (  gcode_dash_keyword_dash_char2187 ) ) );
                int32_t  first_dash_to_dash_off4115 = ( (  size_dash_i32331 ) ( ( ( * (  sc4113 ) ) .f_byte_dash_offset ) ) );
                enum HighlightType_18  type4116 = ( HighlightType_18_Invalid );
                struct Char_65  first_dash_char4117 = ( (  to_dash_lower2188 ) ( ( (  char_dash_at_dash_offset2190 ) ( (  line_dash_sv4063 ) ,  ( (  i32_dash_size422 ) ( (  first_dash_from_dash_off4114 ) ) ) ) ) ) );
                if ( (  eq480 ( (  first_dash_char4117 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) {
                    type4116 = ( HighlightType_18_Keyword1 );
                } else {
                    if ( (  eq480 ( (  first_dash_char4117 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                        type4116 = ( HighlightType_18_Ident1 );
                    }
                }
                struct envunion2200  temp2199 = ( (struct envunion2200){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                ( temp2199.fun ( &temp2199.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  first_dash_from_dash_off4114 ) , .f_to = (  first_dash_to_dash_off4115 ) , .f_type = (  type4116 ) } ) ) );
                ( (  skip_dash_while2175 ) ( (  sc4113 ) ,  (  is_dash_whitespace1347 ) ) );
                int32_t  from_dash_off4118 = ( (  size_dash_i32331 ) ( ( ( * (  sc4113 ) ) .f_byte_dash_offset ) ) );
                while ( ( (  char_dash_satisfies2184 ) ( (  sc4113 ) ,  (  is_dash_alphanumeric1345 ) ) ) ) {
                    ( (  skip_dash_while2185 ) ( (  sc4113 ) ,  (  gcode_dash_keyword_dash_char2187 ) ) );
                    int32_t  to_dash_off4119 = ( (  size_dash_i32331 ) ( ( ( * (  sc4113 ) ) .f_byte_dash_offset ) ) );
                    ( (  skip_dash_while2175 ) ( (  sc4113 ) ,  (  is_dash_whitespace1347 ) ) );
                    struct envunion2202  temp2201 = ( (struct envunion2202){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                    ( temp2201.fun ( &temp2201.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4118 ) , .f_to = (  to_dash_off4119 ) , .f_type = ( HighlightType_18_Ident4 ) } ) ) );
                }
            }
            while ( ( (  char_dash_satisfies2203 ) ( (  sc4113 ) ,  (  lam2204 ) ) ) ) {
            }
            int32_t  from_dash_off4122 = ( (  size_dash_i32331 ) ( ( ( * (  sc4113 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  try_dash_char1993 ) ( (  sc4113 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ) {
                struct envunion2206  temp2205 = ( (struct envunion2206){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2000 , .env =  env->envinst35 } );
                ( temp2205.fun ( &temp2205.env ,  (  hls4062 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4122 ) , .f_to = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  line_dash_sv4063 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
            }
            break;
        }
    }
    (*  line4061 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_16   subslice2209 (    struct Slice_16  slice2139 ,    size_t  from2141 ,    size_t  to2143 ) {
    struct Highlight_17 *  begin_dash_ptr2144 = ( (  offset_dash_ptr2014 ) ( ( (  slice2139 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from2141 ) ) ) ) );
    if ( ( (  cmp292 ( (  from2141 ) , (  to2143 ) ) != 0 ) || (  cmp292 ( (  from2141 ) , ( (  slice2139 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2145 = (  op_dash_sub291 ( ( (  min478 ) ( (  to2143 ) ,  ( (  slice2139 ) .f_count ) ) ) , (  from2141 ) ) );
    return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  count2145 ) } );
}

static  struct SliceIter_2018   into_dash_iter2208 (    struct List_15  self2369 ) {
    return ( (  into_dash_iter2027 ) ( ( (  subslice2209 ) ( ( (  self2369 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2369 ) .f_count ) ) ) ) );
}

static  bool   between2211 (    int32_t  c1329 ,    int32_t  l1331 ,    int32_t  r1333 ) {
    int32_t  from1334 = ( (  min670 ) ( (  l1331 ) ,  (  r1333 ) ) );
    int32_t  to1335 = ( (  max1121 ) ( (  l1331 ) ,  (  r1333 ) ) );
    return ( (  cmp157 ( (  from1334 ) , (  c1329 ) ) != 2 ) && (  cmp157 ( (  c1329 ) , (  to1335 ) ) != 2 ) );
}

static  struct Maybe_205   highlight_dash_at1984 (   struct env136* env ,    struct TextBuf_105 *  self4125 ,    struct Pos_26  pos4127 ) {
    struct Line_12 *  line4128 = ( (  get_dash_ptr576 ) ( ( & ( ( * (  self4125 ) ) .f_buf ) ) ,  ( (  i32_dash_size422 ) ( ( (  pos4127 ) .f_line ) ) ) ) );
    struct envunion137  temp1985 = ( (struct envunion137){ .fun = (  enum Unit_8  (*) (  struct env134*  ,    struct TextBuf_105 *  ,    struct Line_12 *  ) )recompute_dash_highlights_dash_at_dash_line1986 , .env =  env->envinst134 } );
    ( temp1985.fun ( &temp1985.env ,  (  self4125 ) ,  (  line4128 ) ) );
    struct SliceIter_2018  temp2207 =  into_dash_iter2208 ( ( ( * (  line4128 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2023  __cond2210 =  next2024 (&temp2207);
        if (  __cond2210 .tag == 0 ) {
            break;
        }
        struct Highlight_17  hl4130 =  __cond2210 .stuff .Maybe_2023_Just_s .field0;
        if ( ( (  between2211 ) ( ( (  pos4127 ) .f_bi ) ,  ( (  hl4130 ) .f_from ) ,  (  op_dash_sub164 ( ( (  hl4130 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_205_Just ) ( ( (  hl4130 ) .f_type ) ) );
        }
        if ( (  cmp157 ( ( (  pos4127 ) .f_bi ) , ( (  hl4130 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_205) { .tag = Maybe_205_None_t } );
        }
    }
    return ( (struct Maybe_205) { .tag = Maybe_205_None_t } );
}

struct Maybe_2215 {
    enum {
        Maybe_2215_None_t,
        Maybe_2215_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_175  field0;
        } Maybe_2215_Just_s;
    } stuff;
};

static struct Maybe_2215 Maybe_2215_Just (  struct HighlightColors_175  field0 ) {
    return ( struct Maybe_2215 ) { .tag = Maybe_2215_Just_t, .stuff = { .Maybe_2215_Just_s = { .field0 = field0 } } };
};

struct env2216 {
    ;
    struct Theme_172 *  theme4166;
};

struct envunion2217 {
    struct Colors_173  (*fun) (  struct env2216*  ,    struct HighlightColors_175  );
    struct env2216 env;
};

static  struct Colors_173   maybe2214 (    struct Maybe_2215  x1544 ,   struct envunion2217  fun1546 ,    struct Colors_173  default1548 ) {
    struct envunion2217  temp2218 = (  fun1546 );
    return ( {  struct Maybe_2215  dref1549 = (  x1544 ) ; dref1549.tag == Maybe_2215_Just_t ? ( temp2218.fun ( &temp2218.env ,  ( dref1549 .stuff .Maybe_2215_Just_s .field0 ) ) ) : (  default1548 ) ; } );
}

struct SliceIter_2221 {
    struct Slice_174  f_slice;
    size_t  f_current_dash_offset;
};

struct env2222 {
    enum HighlightType_18  hltype4168;
    ;
};

struct envunion2223 {
    bool  (*fun) (  struct env2222*  ,    struct HighlightColors_175  );
    struct env2222 env;
};

struct Filter_2220 {
    struct SliceIter_2221  f_og;
    struct envunion2223  f_fun;
};

static  struct HighlightColors_175 *   offset_dash_ptr2226 (    struct HighlightColors_175 *  x367 ,    int64_t  count369 ) {
    struct HighlightColors_175  temp2227;
    return ( (struct HighlightColors_175 * ) ( ( (void*) (  x367 ) ) + (  op_dash_mul288 ( (  count369 ) , ( (int64_t ) ( sizeof( ( (  temp2227 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2215   next2225 (    struct SliceIter_2221 *  self2191 ) {
    size_t  off2192 = ( ( * (  self2191 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2191 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2215) { .tag = Maybe_2215_None_t } );
    }
    struct HighlightColors_175  elem2193 = ( * ( (  offset_dash_ptr2226 ) ( ( ( ( * (  self2191 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2192 ) ) ) ) ) );
    (*  self2191 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2215_Just ) ( (  elem2193 ) ) );
}

static  struct Maybe_2215   next2224 (    struct Filter_2220 *  self800 ) {
    while ( ( true ) ) {
        struct Maybe_2215  dref801 = ( (  next2225 ) ( ( & ( ( * (  self800 ) ) .f_og ) ) ) );
        if ( dref801.tag == Maybe_2215_None_t ) {
            return ( (struct Maybe_2215) { .tag = Maybe_2215_None_t } );
        }
        else {
            if ( dref801.tag == Maybe_2215_Just_t ) {
                struct envunion2223  temp2228 = ( ( * (  self800 ) ) .f_fun );
                if ( ( temp2228.fun ( &temp2228.env ,  ( dref801 .stuff .Maybe_2215_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2215_Just ) ( ( dref801 .stuff .Maybe_2215_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2215  temp2229;
    return (  temp2229 );
}

static  struct Filter_2220   into_dash_iter2231 (    struct Filter_2220  self797 ) {
    return (  self797 );
}

static  struct Maybe_2215   head2219 (    struct Filter_2220  it1126 ) {
    struct Filter_2220  temp2230 = ( (  into_dash_iter2231 ) ( (  it1126 ) ) );
    return ( (  next2224 ) ( ( &temp2230 ) ) );
}

static  struct SliceIter_2221   into_dash_iter2233 (    struct Slice_174  self2185 ) {
    return ( (struct SliceIter_2221) { .f_slice = (  self2185 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2220   filter2232 (    struct Slice_174  iterable805 ,   struct envunion2223  fun807 ) {
    struct SliceIter_2221  it808 = ( (  into_dash_iter2233 ) ( (  iterable805 ) ) );
    return ( (struct Filter_2220) { .f_og = (  it808 ) , .f_fun = (  fun807 ) } );
}

static  bool   eq2236 (    uint32_t  l115 ,    uint32_t  r117 ) {
    return ( (  l115 ) == (  r117 ) );
}

static  enum HighlightType_18 *   cast2239 (    uint32_t *  x385 ) {
    return ( (enum HighlightType_18 * ) (  x385 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2237 (    enum HighlightType_18  x628 ) {
    uint32_t  temp2238 = ( (  zeroed822 ) ( ) );
    uint32_t *  y629 = ( &temp2238 );
    enum HighlightType_18 *  yp630 = ( (  cast2239 ) ( (  y629 ) ) );
    (*  yp630 ) = (  x628 );
    return ( * (  y629 ) );
}

static  bool   eq2235 (    enum HighlightType_18  l3771 ,    enum HighlightType_18  r3773 ) {
    return (  eq2236 ( ( ( (  cast_dash_on_dash_zeroed2237 ) ( (  l3771 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2237 ) ( (  r3773 ) ) ) ) );
}

static  bool   lam2234 (   struct env2222* env ,    struct HighlightColors_175  hlc4170 ) {
    return (  eq2235 ( ( (  hlc4170 ) .f_type ) , ( env->hltype4168 ) ) );
}

static  struct Color_138   or_dash_else2241 (    struct Maybe_176  self1312 ,    struct Color_138  alt1314 ) {
    struct Maybe_176  dref1315 = (  self1312 );
    if ( dref1315.tag == Maybe_176_None_t ) {
        return (  alt1314 );
    }
    else {
        if ( dref1315.tag == Maybe_176_Just_t ) {
            return ( dref1315 .stuff .Maybe_176_Just_s .field0 );
        }
    }
}

static  struct Colors_173   lam2240 (   struct env2216* env ,    struct HighlightColors_175  hlc4172 ) {
    return ( (struct Colors_173) { .f_fg = ( (  hlc4172 ) .f_fg ) , .f_bg = ( (  or_dash_else2241 ) ( ( (  hlc4172 ) .f_bg ) ,  ( ( ( * ( env->theme4166 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_173   find_dash_colors_dash_for_dash_highlight2213 (    struct Theme_172 *  theme4166 ,    enum HighlightType_18  hltype4168 ) {
    struct env2222 envinst2222 = {
        .hltype4168 =  hltype4168 ,
    };
    struct env2216 envinst2216 = {
        .theme4166 =  theme4166 ,
    };
    return ( (  maybe2214 ) ( ( (  head2219 ) ( ( (  filter2232 ) ( ( ( * (  theme4166 ) ) .f_highlights ) ,  ( (struct envunion2223){ .fun = (  bool  (*) (  struct env2222*  ,    struct HighlightColors_175  ) )lam2234 , .env =  envinst2222 } ) ) ) ) ) ,  ( (struct envunion2217){ .fun = (  struct Colors_173  (*) (  struct env2216*  ,    struct HighlightColors_175  ) )lam2240 , .env =  envinst2216 } ) ,  ( ( * (  theme4166 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2212 (   struct env1980* env ,    enum HighlightType_18  type4299 ) {
    ( (  set_dash_colors1945 ) ( ( env->screen4269 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2213 ) ( ( env->theme4276 ) ,  (  type4299 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2245 (  ) {
    ( (  println1353 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1704 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2244 (    enum Mode_222  mode4187 ) {
    return ( {  enum Mode_222  dref4188 = (  mode4187 ) ;  dref4188 == Mode_222_Normal ? ( (  from_dash_string201 ) ( ( (uint8_t*)"NOR" ) ,  ( 3 ) ) ) :  dref4188 == Mode_222_Insert ? ( (  from_dash_string201 ) ( ( (uint8_t*)"INS" ) ,  ( 3 ) ) ) :  dref4188 == Mode_222_Select ? ( (  from_dash_string201 ) ( ( (uint8_t*)"SEL" ) ,  ( 3 ) ) ) : ( (  todo2245 ) ( ) ) ; } );
}

struct StrConcat_2248 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2248 StrConcat_2248_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2248 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2247 {
    struct StrConcat_2248  field0;
    struct Char_65  field1;
};

static struct StrConcat_2247 StrConcat_2247_StrConcat (  struct StrConcat_2248  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2247 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2251 {
    struct AppendIter_1035  f_left;
    struct StrViewIter_469  f_right;
};

struct StrConcatIter_2250 {
    struct StrConcatIter_2251  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_2250   into_dash_iter2252 (    struct StrConcatIter_2250  self1242 ) {
    return (  self1242 );
}

static  struct StrConcatIter_2251   into_dash_iter2256 (    struct StrConcat_2248  dref1249 ) {
    return ( (struct StrConcatIter_2251) { .f_left = ( (  chars1071 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars471 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2251   chars2255 (    struct StrConcat_2248  self1260 ) {
    return ( (  into_dash_iter2256 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_2250   into_dash_iter2254 (    struct StrConcat_2247  dref1249 ) {
    return ( (struct StrConcatIter_2250) { .f_left = ( (  chars2255 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2250   chars2253 (    struct StrConcat_2247  self1260 ) {
    return ( (  into_dash_iter2254 ) ( (  self1260 ) ) );
}

static  struct Maybe_299   next2259 (    struct StrConcatIter_2251 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2258 (    struct StrConcatIter_2250 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2259 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2246 (    struct Screen_278 *  screen3707 ,    struct StrConcat_2247  s3709 ,    int32_t  x3711 ,    int32_t  y3713 ) {
    int32_t  w3714 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3707 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3713 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3713 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3707 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3715 = (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3713 ) , (  w3714 ) ) ) , (  x3711 ) ) );
    int32_t  x3716 = ( (  min670 ) ( (  x3711 ) ,  (  w3714 ) ) );
    size_t  max_dash_len3717 = ( (  i32_dash_size422 ) ( (  op_dash_sub164 ( (  w3714 ) , (  x3716 ) ) ) ) );
    int32_t  xx3718 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2250  temp2249 =  into_dash_iter2252 ( ( (  chars2253 ) ( (  s3709 ) ) ) );
    while (true) {
        struct Maybe_299  __cond2257 =  next2258 (&temp2249);
        if (  __cond2257 .tag == 0 ) {
            break;
        }
        struct Char_65  c3720 =  __cond2257 .stuff .Maybe_299_Just_s .field0;
        ( (  put_dash_char1961 ) ( (  screen3707 ) ,  (  c3720 ) ,  (  op_dash_add159 ( (  x3716 ) , (  xx3718 ) ) ) ,  (  y3713 ) ) );
        xx3718 = (  op_dash_add159 ( (  xx3718 ) , ( (  rendered_dash_wcwidth1120 ) ( (  c3720 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1919 (   struct env203* env ,    struct Screen_278 *  screen4269 ,    struct Pane_221 *  pane4271 ,    struct ScreenDims_281  sd4273 ,    struct Config_252 *  cfg4275 ) {
    struct Theme_172 *  theme4276 = ( ( * (  cfg4275 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4277 = ( ( * (  cfg4275 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4278 = ( ( * (  cfg4275 ) ) .f_relative_dash_line_dash_numbers );
    int32_t  max_dash_line_dash_num_dash_chars4279 = ( (  size_dash_i32331 ) ( ( (  count1920 ) ( ( (  chars1936 ) ( ( (  num_dash_lines1148 ) ( ( ( * (  pane4271 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4280 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4281 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4282 = ( (  display_dash_line_dash_numbers4277 ) ? (  op_dash_add159 ( (  op_dash_add159 ( (  max_dash_line_dash_num_dash_chars4279 ) , (  num_dash_front_dash_margin4280 ) ) ) , (  num_dash_back_dash_margin4281 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct ScreenDims_281  temp1942 = (  sd4273 );
    temp1942 .  f_from_dash_sx = (  op_dash_add159 ( ( (  sd4273 ) .f_from_dash_sx ) , (  total_dash_margin4282 ) ) );
    ( (  update_dash_screen_dash_offset1939 ) ( (  pane4271 ) ,  ( temp1942 ) ) );
    struct ScreenCursorOffset_223  sc_dash_off4283 = ( ( * (  pane4271 ) ) .f_sc_dash_off );
    struct RangeIter_153  temp1943 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( ( (  sc_dash_off4283 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min670 ) ( ( (  num_dash_lines1148 ) ( ( ( * (  pane4271 ) ) .f_buf ) ) ) ,  (  op_dash_add159 ( ( (  sc_dash_off4283 ) .f_screen_dash_top ) , ( (  screen_dash_height1941 ) ( (  sd4273 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1944 =  next156 (&temp1943);
        if (  __cond1944 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4285 =  __cond1944 .stuff .Maybe_155_Just_s .field0;
        int32_t  ybi4286 = (  op_dash_sub164 ( (  line_dash_num4285 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4287 = ( (  vi_dash_bi1150 ) ( ( ( * (  pane4271 ) ) .f_buf ) ,  (  ybi4286 ) ,  ( (  sc_dash_off4283 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4288 = ( (  line1108 ) ( ( ( * (  pane4271 ) ) .f_buf ) ,  (  ybi4286 ) ) );
        int32_t  ys4289 = (  op_dash_sub164 ( (  op_dash_sub164 ( (  op_dash_add159 ( ( (  sd4273 ) .f_from_dash_sy ) , (  line_dash_num4285 ) ) ) , ( (  sc_dash_off4283 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4277 ) ) {
            if ( (  eq570 ( ( ( ( * (  pane4271 ) ) .f_cursor ) .f_line ) , (  ybi4286 ) ) ) ) {
                ( (  set_dash_colors1945 ) ( (  screen4269 ) ,  ( ( * (  theme4276 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors1945 ) ( (  screen4269 ) ,  ( ( * (  theme4276 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4290 = ( ( ( ! (  relative_dash_line_dash_numbers4278 ) ) || (  eq570 ( ( ( ( * (  pane4271 ) ) .f_cursor ) .f_line ) , (  ybi4286 ) ) ) ) ? (  line_dash_num4285 ) : ( (  abs1947 ) ( (  op_dash_sub164 ( ( ( ( * (  pane4271 ) ) .f_cursor ) .f_line ) , (  ybi4286 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right1948 ) ( (  screen4269 ) ,  (  line_dash_display4290 ) ,  (  op_dash_add159 ( (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen4269 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4273 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4282 ) ) ) , (  num_dash_back_dash_margin4281 ) ) ) ,  (  ys4289 ) ) );
            ( (  set_dash_colors1945 ) ( (  screen4269 ) ,  ( ( * (  theme4276 ) ) .f_default ) ) );
        }
        int32_t  vx4291 = (  op_dash_sub164 ( ( (  pos_dash_vi1106 ) ( ( ( * (  pane4271 ) ) .f_buf ) ,  ( (  mk706 ) ( (  ybi4286 ) ,  (  xbi4287 ) ) ) ) ) , ( (  sc_dash_off4283 ) .f_screen_dash_left ) ) );
        ( (  assert1964 ) ( (  cmp157 ( (  vx4291 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1965_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4291 ) ) ) ) );
        int32_t  left_dash_offset4292 = (  op_dash_add159 ( ( (  sd4273 ) .f_from_dash_sx ) , (  total_dash_margin4282 ) ) );
        struct AppendIter_1972  temp1971 =  into_dash_iter1973 ( ( (  append1974 ) ( ( (  chars471 ) ( ( (  byte_dash_substr_dash_from475 ) ( (  line_dash_content4288 ) ,  ( (  i32_dash_size422 ) ( (  xbi4287 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_299  __cond1975 =  next1976 (&temp1971);
            if (  __cond1975 .tag == 0 ) {
                break;
            }
            struct Char_65  c4294 =  __cond1975 .stuff .Maybe_299_Just_s .field0;
            if ( (  cmp157 ( (  vx4291 ) , ( (  sd4273 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4295 = ( (  mk706 ) ( (  ybi4286 ) ,  (  xbi4287 ) ) );
            bool  is_dash_cursor4296 = (  eq569 ( (  curpos4295 ) , ( ( * (  pane4271 ) ) .f_cursor ) ) );
            bool  in_dash_selection4297 = ( (  is_dash_in_dash_selection1977 ) ( (  pane4271 ) ,  ( (  mk706 ) ( (  ybi4286 ) ,  (  xbi4287 ) ) ) ) );
            if ( (  is_dash_cursor4296 ) ) {
                ( (  set_dash_colors1945 ) ( (  screen4269 ) ,  ( ( * (  theme4276 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4297 ) ) {
                    ( (  set_dash_colors1945 ) ( (  screen4269 ) ,  ( ( * (  theme4276 ) ) .f_selection ) ) );
                } else {
                    struct envunion204  temp1983 = ( (struct envunion204){ .fun = (  struct Maybe_205  (*) (  struct env136*  ,    struct TextBuf_105 *  ,    struct Pos_26  ) )highlight_dash_at1984 , .env =  env->envinst136 } );
                    struct env1980 envinst1980 = {
                        .theme4276 =  theme4276 ,
                        .screen4269 =  screen4269 ,
                    };
                    ( (  if_dash_just1979 ) ( ( temp1983.fun ( &temp1983.env ,  ( ( * (  pane4271 ) ) .f_buf ) ,  (  curpos4295 ) ) ) ,  ( (struct envunion1981){ .fun = (  enum Unit_8  (*) (  struct env1980*  ,    enum HighlightType_18  ) )lam2212 , .env =  envinst1980 } ) ) );
                }
            }
            struct Maybe_78  dref4300 = ( (  char_dash_replacement1113 ) ( (  c4294 ) ) );
            if ( dref4300.tag == Maybe_78_None_t ) {
                if ( ( ! ( (  cmp157 ( (  vx4291 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  op_dash_sub164 ( (  op_dash_add159 ( (  vx4291 ) , ( (  char_dash_screen_dash_width1111 ) ( (  c4294 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4273 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1961 ) ( (  screen4269 ) ,  (  c4294 ) ,  (  op_dash_add159 ( (  left_dash_offset4292 ) , (  vx4291 ) ) ) ,  (  ys4289 ) ) );
                }
                vx4291 = (  op_dash_add159 ( (  vx4291 ) , ( (  char_dash_screen_dash_width1111 ) ( (  c4294 ) ) ) ) );
            }
            else {
                if ( dref4300.tag == Maybe_78_Just_t ) {
                    struct StrViewIter_469  temp2242 =  into_dash_iter470 ( ( (  chars471 ) ( ( dref4300 .stuff .Maybe_78_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_299  __cond2243 =  next474 (&temp2242);
                        if (  __cond2243 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4303 =  __cond2243 .stuff .Maybe_299_Just_s .field0;
                        if ( (  cmp157 ( (  vx4291 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1961 ) ( (  screen4269 ) ,  (  c4303 ) ,  (  op_dash_add159 ( (  left_dash_offset4292 ) , (  vx4291 ) ) ) ,  (  ys4289 ) ) );
                        }
                        vx4291 = (  op_dash_add159 ( (  vx4291 ) , ( (  char_dash_screen_dash_width1111 ) ( (  c4303 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors1945 ) ( (  screen4269 ) ,  ( ( * (  theme4276 ) ) .f_default ) ) );
            xbi4287 = (  op_dash_add159 ( (  xbi4287 ) , ( (  size_dash_i32331 ) ( ( (  c4294 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors1945 ) ( (  screen4269 ) ,  ( ( * (  theme4276 ) ) .f_overlay ) ) );
    struct StrView_27  modename4304 = ( (  short_dash_mode_dash_name2244 ) ( ( ( * (  pane4271 ) ) .f_mode ) ) );
    ( (  draw_dash_str2246 ) ( (  screen4269 ) ,  ( ( StrConcat_2247_StrConcat ) ( ( ( StrConcat_2248_StrConcat ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  modename4304 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4273 ) .f_from_dash_sx ) ,  ( (  sd4273 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2261 {
    ;
    ;
    ;
    ;
    struct Screen_278 *  screen4692;
    ;
    ;
    ;
    ;
    ;
};

struct envunion2262 {
    enum Unit_8  (*fun) (  struct env2261*  ,    struct StrView_27  );
    struct env2261 env;
};

static  enum Unit_8   if_dash_just2260 (    struct Maybe_78  x1553 ,   struct envunion2262  fun1555 ) {
    struct Maybe_78  dref1556 = (  x1553 );
    if ( dref1556.tag == Maybe_78_Just_t ) {
        struct envunion2262  temp2263 = (  fun1555 );
        ( temp2263.fun ( &temp2263.env ,  ( dref1556 .stuff .Maybe_78_Just_s .field0 ) ) );
    }
    else {
        if ( dref1556.tag == Maybe_78_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2264 (   struct env2261* env ,    struct StrView_27  msg4697 ) {
    int32_t  num_dash_chars4698 = ( (  size_dash_i32331 ) ( ( (  count1115 ) ( ( (  chars471 ) ( (  msg4697 ) ) ) ) ) ) );
    ( (  draw_dash_str2246 ) ( ( env->screen4692 ) ,  ( ( StrConcat_2247_StrConcat ) ( ( ( StrConcat_2248_StrConcat ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  msg4697 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1537 ( (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * ( env->screen4692 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4698 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * ( env->screen4692 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2267 {
    struct StrView_27  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2267 StrConcat_2267_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2267 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2266 {
    struct StrConcat_2267  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2266 StrConcat_2266_StrConcat (  struct StrConcat_2267  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2266 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2265 {
    struct StrConcat_2266  field0;
    struct Char_65  field1;
};

static struct StrConcat_2265 StrConcat_2265_StrConcat (  struct StrConcat_2266  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2265 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2270 {
    struct StrConcatIter_1741  f_left;
    struct StrViewIter_469  f_right;
};

struct StrConcatIter_2269 {
    struct StrConcatIter_2270  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_2269   into_dash_iter2272 (    struct StrConcatIter_2269  self1242 ) {
    return (  self1242 );
}

static  struct Maybe_299   next2274 (    struct StrConcatIter_2270 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next1749 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2273 (    struct StrConcatIter_2269 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2274 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2271 (    struct StrConcatIter_2269  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct StrConcatIter_2269  it1083 = ( (  into_dash_iter2272 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1084 = ( (  next2273 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_299_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_299_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp2275 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2275);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2276;
    return (  temp2276 );
}

static  size_t   lam2277 (    struct Char_65  dref1089 ,    size_t  x1091 ) {
    return (  op_dash_add313 ( (  x1091 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2268 (    struct StrConcatIter_2269  it1088 ) {
    return ( (  reduce2271 ) ( (  it1088 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2277 ) ) );
}

static  struct StrConcatIter_1741   into_dash_iter2283 (    struct StrConcat_2267  dref1249 ) {
    return ( (struct StrConcatIter_1741) { .f_left = ( (  chars471 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1708 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_1741   chars2282 (    struct StrConcat_2267  self1260 ) {
    return ( (  into_dash_iter2283 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_2270   into_dash_iter2281 (    struct StrConcat_2266  dref1249 ) {
    return ( (struct StrConcatIter_2270) { .f_left = ( (  chars2282 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars471 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2270   chars2280 (    struct StrConcat_2266  self1260 ) {
    return ( (  into_dash_iter2281 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_2269   into_dash_iter2279 (    struct StrConcat_2265  dref1249 ) {
    return ( (struct StrConcatIter_2269) { .f_left = ( (  chars2280 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2269   chars2278 (    struct StrConcat_2265  self1260 ) {
    return ( (  into_dash_iter2279 ) ( (  self1260 ) ) );
}

static  enum Unit_8   draw_dash_str2284 (    struct Screen_278 *  screen3707 ,    struct StrConcat_2265  s3709 ,    int32_t  x3711 ,    int32_t  y3713 ) {
    int32_t  w3714 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3707 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3713 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3713 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3707 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3715 = (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3713 ) , (  w3714 ) ) ) , (  x3711 ) ) );
    int32_t  x3716 = ( (  min670 ) ( (  x3711 ) ,  (  w3714 ) ) );
    size_t  max_dash_len3717 = ( (  i32_dash_size422 ) ( (  op_dash_sub164 ( (  w3714 ) , (  x3716 ) ) ) ) );
    int32_t  xx3718 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2269  temp2285 =  into_dash_iter2272 ( ( (  chars2278 ) ( (  s3709 ) ) ) );
    while (true) {
        struct Maybe_299  __cond2286 =  next2273 (&temp2285);
        if (  __cond2286 .tag == 0 ) {
            break;
        }
        struct Char_65  c3720 =  __cond2286 .stuff .Maybe_299_Just_s .field0;
        ( (  put_dash_char1961 ) ( (  screen3707 ) ,  (  c3720 ) ,  (  op_dash_add159 ( (  x3716 ) , (  xx3718 ) ) ) ,  (  y3713 ) ) );
        xx3718 = (  op_dash_add159 ( (  xx3718 ) , ( (  rendered_dash_wcwidth1120 ) ( (  c3720 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2287 {
    struct StrConcat_2266  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2287 StrConcat_2287_StrConcat (  struct StrConcat_2266  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2287 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2289 {
    struct StrConcatIter_2270  f_left;
    struct StrViewIter_469  f_right;
};

static  struct StrConcatIter_2289   into_dash_iter2291 (    struct StrConcatIter_2289  self1242 ) {
    return (  self1242 );
}

static  struct Maybe_299   next2292 (    struct StrConcatIter_2289 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2274 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2290 (    struct StrConcatIter_2289  iterable1077 ,    size_t  base1079 ,    size_t (*  fun1081 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1082 = (  base1079 );
    struct StrConcatIter_2289  it1083 = ( (  into_dash_iter2291 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1084 = ( (  next2292 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_299_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_299_Just_t ) {
                x1082 = ( (  fun1081 ) ( ( dref1084 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp2293 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2293);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2294;
    return (  temp2294 );
}

static  size_t   lam2295 (    struct Char_65  dref1089 ,    size_t  x1091 ) {
    return (  op_dash_add313 ( (  x1091 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2288 (    struct StrConcatIter_2289  it1088 ) {
    return ( (  reduce2290 ) ( (  it1088 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2295 ) ) );
}

static  struct StrConcatIter_2289   into_dash_iter2297 (    struct StrConcat_2287  dref1249 ) {
    return ( (struct StrConcatIter_2289) { .f_left = ( (  chars2280 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars471 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2289   chars2296 (    struct StrConcat_2287  self1260 ) {
    return ( (  into_dash_iter2297 ) ( (  self1260 ) ) );
}

static  enum Unit_8   draw_dash_str2298 (    struct Screen_278 *  screen3707 ,    struct StrConcat_2287  s3709 ,    int32_t  x3711 ,    int32_t  y3713 ) {
    int32_t  w3714 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3707 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3713 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3713 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3707 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3715 = (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3713 ) , (  w3714 ) ) ) , (  x3711 ) ) );
    int32_t  x3716 = ( (  min670 ) ( (  x3711 ) ,  (  w3714 ) ) );
    size_t  max_dash_len3717 = ( (  i32_dash_size422 ) ( (  op_dash_sub164 ( (  w3714 ) , (  x3716 ) ) ) ) );
    int32_t  xx3718 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2289  temp2299 =  into_dash_iter2291 ( ( (  chars2296 ) ( (  s3709 ) ) ) );
    while (true) {
        struct Maybe_299  __cond2300 =  next2292 (&temp2299);
        if (  __cond2300 .tag == 0 ) {
            break;
        }
        struct Char_65  c3720 =  __cond2300 .stuff .Maybe_299_Just_s .field0;
        ( (  put_dash_char1961 ) ( (  screen3707 ) ,  (  c3720 ) ,  (  op_dash_add159 ( (  x3716 ) , (  xx3718 ) ) ) ,  (  y3713 ) ) );
        xx3718 = (  op_dash_add159 ( (  xx3718 ) , ( (  rendered_dash_wcwidth1120 ) ( (  c3720 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1917 (   struct env276* env ,    struct Screen_278 *  screen4692 ,    struct Editor_250 *  ed4694 ) {
    struct ScreenDims_281  screen_dash_dims4695 = ( (struct ScreenDims_281) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen4692 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen4692 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion277  temp1918 = ( (struct envunion277){ .fun = (  enum Unit_8  (*) (  struct env203*  ,    struct Screen_278 *  ,    struct Pane_221 *  ,    struct ScreenDims_281  ,    struct Config_252 *  ) )render1919 , .env =  env->envinst203 } );
    ( temp1918.fun ( &temp1918.env ,  (  screen4692 ) ,  ( (  pane1145 ) ( (  ed4694 ) ) ) ,  (  screen_dash_dims4695 ) ,  ( ( * (  ed4694 ) ) .f_cfg ) ) );
    struct env2261 envinst2261 = {
        .screen4692 =  screen4692 ,
    };
    ( (  if_dash_just2260 ) ( ( ( * (  ed4694 ) ) .f_msg ) ,  ( (struct envunion2262){ .fun = (  enum Unit_8  (*) (  struct env2261*  ,    struct StrView_27  ) )lam2264 , .env =  envinst2261 } ) ) );
    struct EditorMode_251  dref4699 = ( ( * (  ed4694 ) ) .f_mode );
    if ( dref4699.tag == EditorMode_251_Normal_t ) {
    }
    else {
        if ( dref4699.tag == EditorMode_251_Cmd_t ) {
            int32_t  num_dash_chars4701 = ( (  size_dash_i32331 ) ( ( (  count1115 ) ( ( (  chars1708 ) ( ( dref4699 .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4702 = ( (  eq570 ( ( (  mod1536 ) ( (  num_dash_chars4701 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1239 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4703 = (  op_dash_add159 ( (  num_dash_chars4701 ) , ( (  mod1536 ) ( (  num_dash_chars4701 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
            struct StrConcat_2265  full_dash_str4704 = ( ( StrConcat_2265_StrConcat ) ( ( ( StrConcat_2266_StrConcat ) ( ( ( StrConcat_2267_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)" \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4699 .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ,  (  pad4702 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4705 = ( (  size_dash_i32331 ) ( ( (  count2268 ) ( ( (  chars2278 ) ( (  full_dash_str4704 ) ) ) ) ) ) );
            ( (  draw_dash_str2284 ) ( (  screen4692 ) ,  (  full_dash_str4704 ) ,  (  op_dash_div1537 ( (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen4692 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4705 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
        }
        else {
            if ( dref4699.tag == EditorMode_251_Search_t ) {
                int32_t  num_dash_chars4707 = ( (  size_dash_i32331 ) ( ( (  count1115 ) ( ( (  chars1708 ) ( ( dref4699 .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4708 = ( (  eq570 ( ( (  mod1536 ) ( (  num_dash_chars4707 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1239 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4709 = (  op_dash_add159 ( (  num_dash_chars4707 ) , ( (  mod1536 ) ( (  num_dash_chars4707 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
                struct StrConcat_2287  full_dash_str4710 = ( ( StrConcat_2287_StrConcat ) ( ( ( StrConcat_2266_StrConcat ) ( ( ( StrConcat_2267_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)" \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4699 .stuff .EditorMode_251_Search_s .field1 ) ) ) ,  (  pad4708 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4711 = ( (  size_dash_i32331 ) ( ( (  count2288 ) ( ( (  chars2296 ) ( (  full_dash_str4710 ) ) ) ) ) ) );
                ( (  draw_dash_str2298 ) ( (  screen4692 ) ,  (  full_dash_str4710 ) ,  (  op_dash_div1537 ( (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen4692 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4711 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            }
        }
    }
    int32_t  temp2301 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4712 = ( &temp2301 );
    return ( Unit_8_Unit );
}

struct RenderState_2303 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_138  f_fg;
    struct Color_138  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2310 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2310 StrConcat_2310_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2310 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2309 {
    struct StrConcat_2310  field0;
    struct Char_65  field1;
};

static struct StrConcat_2309 StrConcat_2309_StrConcat (  struct StrConcat_2310  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2309 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2308 {
    struct StrConcat_2309  field0;
    uint32_t  field1;
};

static struct StrConcat_2308 StrConcat_2308_StrConcat (  struct StrConcat_2309  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2308 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2307 {
    struct StrConcat_2308  field0;
    struct Char_65  field1;
};

static struct StrConcat_2307 StrConcat_2307_StrConcat (  struct StrConcat_2308  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2307 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2316 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2315 {
    struct StrViewIter_469  f_left;
    struct IntStrIter_2316  f_right;
};

struct StrConcatIter_2314 {
    struct StrConcatIter_2315  f_left;
    struct AppendIter_1035  f_right;
};

struct StrConcatIter_2313 {
    struct StrConcatIter_2314  f_left;
    struct IntStrIter_2316  f_right;
};

struct StrConcatIter_2312 {
    struct StrConcatIter_2313  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_2312   into_dash_iter2318 (    struct StrConcatIter_2312  self1242 ) {
    return (  self1242 );
}

static  struct Maybe_299   next2323 (    struct IntStrIter_2316 *  self1351 ) {
    if ( ( ( * (  self1351 ) ) .f_negative ) ) {
        (*  self1351 ) .f_negative = ( false );
        return ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    uint32_t  trim_dash_down1352 = ( (  pow148 ) ( (  from_dash_integral165 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1353 = (  op_dash_div147 ( ( ( * (  self1351 ) ) .f_int ) , (  trim_dash_down1352 ) ) );
    uint32_t  upper_dash_mask1354 = (  op_dash_mul167 ( (  op_dash_div147 ( (  upper1353 ) , (  from_dash_integral165 ( 10 ) ) ) ) , (  from_dash_integral165 ( 10 ) ) ) );
    uint8_t  digit1355 = ( ( (  cast145 ) ( (  op_dash_sub169 ( (  upper1353 ) , (  upper_dash_mask1354 ) ) ) ) ) );
    (*  self1351 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1356 = ( (  char_dash_from_dash_u81054 ) ( (  op_dash_add944 ( (  digit1355 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_299_Just ) ( (  digit_dash_char1356 ) ) );
}

static  struct Maybe_299   next2322 (    struct StrConcatIter_2315 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next2323 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2321 (    struct StrConcatIter_2314 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2322 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2320 (    struct StrConcatIter_2313 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2321 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next2323 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2319 (    struct StrConcatIter_2312 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2320 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2311 (    struct StrConcatIter_2312  iterable1058 ,    enum Unit_8 (*  fun1060 )(    struct Char_65  ) ) {
    struct StrConcatIter_2312  temp2317 = ( (  into_dash_iter2318 ) ( (  iterable1058 ) ) );
    struct StrConcatIter_2312 *  it1061 = ( &temp2317 );
    while ( ( true ) ) {
        struct Maybe_299  dref1062 = ( (  next2319 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_299_Just_t ) {
                ( (  fun1060 ) ( ( dref1062 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2334 (    uint32_t  self1359 ) {
    if ( (  eq2236 ( (  self1359 ) , (  from_dash_integral165 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1360 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp170 ( (  self1359 ) , (  from_dash_integral165 ( 0 ) ) ) == 2 ) ) {
        self1359 = (  op_dash_div147 ( (  self1359 ) , (  from_dash_integral165 ( 10 ) ) ) );
        digits1360 = (  op_dash_add159 ( (  digits1360 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1360 );
}

static  struct IntStrIter_2316   uint_dash_iter2333 (    uint32_t  int1366 ) {
    return ( (struct IntStrIter_2316) { .f_int = (  int1366 ) , .f_len = ( (  count_dash_digits2334 ) ( (  int1366 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2316   chars2332 (    uint32_t  self1748 ) {
    return ( (  uint_dash_iter2333 ) ( (  self1748 ) ) );
}

static  struct StrConcatIter_2315   into_dash_iter2331 (    struct StrConcat_2310  dref1249 ) {
    return ( (struct StrConcatIter_2315) { .f_left = ( (  chars471 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars2332 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2315   chars2330 (    struct StrConcat_2310  self1260 ) {
    return ( (  into_dash_iter2331 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_2314   into_dash_iter2329 (    struct StrConcat_2309  dref1249 ) {
    return ( (struct StrConcatIter_2314) { .f_left = ( (  chars2330 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2314   chars2328 (    struct StrConcat_2309  self1260 ) {
    return ( (  into_dash_iter2329 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_2313   into_dash_iter2327 (    struct StrConcat_2308  dref1249 ) {
    return ( (struct StrConcatIter_2313) { .f_left = ( (  chars2328 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars2332 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2313   chars2326 (    struct StrConcat_2308  self1260 ) {
    return ( (  into_dash_iter2327 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_2312   into_dash_iter2325 (    struct StrConcat_2307  dref1249 ) {
    return ( (struct StrConcatIter_2312) { .f_left = ( (  chars2326 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2312   chars2324 (    struct StrConcat_2307  self1260 ) {
    return ( (  into_dash_iter2325 ) ( (  self1260 ) ) );
}

static  enum Unit_8   print2306 (    struct StrConcat_2307  s1287 ) {
    ( (  for_dash_each2311 ) ( ( (  chars2324 ) ( (  s1287 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2305 (    uint32_t  x2636 ,    uint32_t  y2638 ) {
    uint32_t  x2639 = (  op_dash_add171 ( (  x2636 ) , (  from_dash_integral165 ( 1 ) ) ) );
    uint32_t  y2640 = (  op_dash_add171 ( (  y2638 ) , (  from_dash_integral165 ( 1 ) ) ) );
    ( (  print2306 ) ( ( ( StrConcat_2307_StrConcat ) ( ( ( StrConcat_2308_StrConcat ) ( ( ( StrConcat_2309_StrConcat ) ( ( ( StrConcat_2310_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[" ) ,  ( 2 ) ) ) ,  (  y2640 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  (  x2639 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_279   subslice2337 (    struct Slice_279  slice2139 ,    size_t  from2141 ,    size_t  to2143 ) {
    struct Cell_280 *  begin_dash_ptr2144 = ( (  offset_dash_ptr865 ) ( ( (  slice2139 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from2141 ) ) ) ) );
    if ( ( (  cmp292 ( (  from2141 ) , (  to2143 ) ) != 0 ) || (  cmp292 ( (  from2141 ) , ( (  slice2139 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_279) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2145 = (  op_dash_sub291 ( ( (  min478 ) ( (  to2143 ) ,  ( (  slice2139 ) .f_count ) ) ) , (  from2141 ) ) );
    return ( (struct Slice_279) { .f_ptr = (  begin_dash_ptr2144 ) , .f_count = (  count2145 ) } );
}

struct SliceIter_2340 {
    struct Slice_279  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2339 {
    struct SliceIter_2340  f_left_dash_it;
    struct SliceIter_2340  f_right_dash_it;
};

struct Tuple2_2341 {
    struct Cell_280  field0;
    struct Cell_280  field1;
};

static struct Tuple2_2341 Tuple2_2341_Tuple2 (  struct Cell_280  field0 ,  struct Cell_280  field1 ) {
    return ( struct Tuple2_2341 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2343 {
    bool (*  fun1119 )(    struct Tuple2_2341  );
};

struct envunion2344 {
    bool  (*fun) (  struct env2343*  ,    struct Tuple2_2341  ,    bool  );
    struct env2343 env;
};

static  struct Zip_2339   into_dash_iter2345 (    struct Zip_2339  self895 ) {
    return (  self895 );
}

struct Maybe_2346 {
    enum {
        Maybe_2346_None_t,
        Maybe_2346_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2341  field0;
        } Maybe_2346_Just_s;
    } stuff;
};

static struct Maybe_2346 Maybe_2346_Just (  struct Tuple2_2341  field0 ) {
    return ( struct Maybe_2346 ) { .tag = Maybe_2346_Just_t, .stuff = { .Maybe_2346_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_870   next2348 (    struct SliceIter_2340 *  self2191 ) {
    size_t  off2192 = ( ( * (  self2191 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2191 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_870) { .tag = Maybe_870_None_t } );
    }
    struct Cell_280  elem2193 = ( * ( (  offset_dash_ptr865 ) ( ( ( ( * (  self2191 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2192 ) ) ) ) ) );
    (*  self2191 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2192 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_870_Just ) ( (  elem2193 ) ) );
}

static  struct Maybe_2346   next2347 (    struct Zip_2339 *  self898 ) {
    struct Zip_2339  copy899 = ( * (  self898 ) );
    while ( ( true ) ) {
        struct Maybe_870  dref900 = ( (  next2348 ) ( ( & ( (  copy899 ) .f_left_dash_it ) ) ) );
        if ( dref900.tag == Maybe_870_None_t ) {
            return ( (struct Maybe_2346) { .tag = Maybe_2346_None_t } );
        }
        else {
            if ( dref900.tag == Maybe_870_Just_t ) {
                struct Maybe_870  dref902 = ( (  next2348 ) ( ( & ( (  copy899 ) .f_right_dash_it ) ) ) );
                if ( dref902.tag == Maybe_870_None_t ) {
                    return ( (struct Maybe_2346) { .tag = Maybe_2346_None_t } );
                }
                else {
                    if ( dref902.tag == Maybe_870_Just_t ) {
                        ( (  next2348 ) ( ( & ( ( * (  self898 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2348 ) ( ( & ( ( * (  self898 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2346_Just ) ( ( ( Tuple2_2341_Tuple2 ) ( ( dref900 .stuff .Maybe_870_Just_s .field0 ) ,  ( dref902 .stuff .Maybe_870_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2342 (    struct Zip_2339  iterable1077 ,    bool  base1079 ,   struct envunion2344  fun1081 ) {
    bool  x1082 = (  base1079 );
    struct Zip_2339  it1083 = ( (  into_dash_iter2345 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_2346  dref1084 = ( (  next2347 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_2346_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_2346_Just_t ) {
                struct envunion2344  temp2349 = (  fun1081 );
                x1082 = ( temp2349.fun ( &temp2349.env ,  ( dref1084 .stuff .Maybe_2346_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp2350 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2350);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2351;
    return (  temp2351 );
}

static  bool   lam2352 (   struct env2343* env ,    struct Tuple2_2341  e1121 ,    bool  x1123 ) {
    return ( ( ( env->fun1119 ) ( (  e1121 ) ) ) || (  x1123 ) );
}

static  bool   any2338 (    struct Zip_2339  it1117 ,    bool (*  fun1119 )(    struct Tuple2_2341  ) ) {
    struct env2343 envinst2343 = {
        .fun1119 =  fun1119 ,
    };
    return ( (  reduce2342 ) ( (  it1117 ) ,  ( false ) ,  ( (struct envunion2344){ .fun = (  bool  (*) (  struct env2343*  ,    struct Tuple2_2341  ,    bool  ) )lam2352 , .env =  envinst2343 } ) ) );
}

static  struct SliceIter_2340   into_dash_iter2354 (    struct Slice_279  self2185 ) {
    return ( (struct SliceIter_2340) { .f_slice = (  self2185 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2339   zip2353 (    struct Slice_279  left906 ,    struct Slice_279  right908 ) {
    struct SliceIter_2340  left_dash_it909 = ( (  into_dash_iter2354 ) ( (  left906 ) ) );
    struct SliceIter_2340  right_dash_it910 = ( (  into_dash_iter2354 ) ( (  right908 ) ) );
    return ( (struct Zip_2339) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

struct Tuple2_2358 {
    struct Color_138  field0;
    struct Color_138  field1;
};

static struct Tuple2_2358 Tuple2_2358_Tuple2 (  struct Color_138  field0 ,  struct Color_138  field1 ) {
    return ( struct Tuple2_2358 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_139 *   cast2362 (    int32_t *  x385 ) {
    return ( (enum Color8_139 * ) (  x385 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2360 (    enum Color8_139  x628 ) {
    int32_t  temp2361 = ( (  zeroed1016 ) ( ) );
    int32_t *  y629 = ( &temp2361 );
    enum Color8_139 *  yp630 = ( (  cast2362 ) ( (  y629 ) ) );
    (*  yp630 ) = (  x628 );
    return ( * (  y629 ) );
}

static  bool   eq2359 (    enum Color8_139  l2664 ,    enum Color8_139  r2666 ) {
    return (  eq570 ( ( ( (  cast_dash_on_dash_zeroed2360 ) ( (  l2664 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2360 ) ( (  r2666 ) ) ) ) );
}

static  enum Color16_140 *   cast2366 (    int32_t *  x385 ) {
    return ( (enum Color16_140 * ) (  x385 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2364 (    enum Color16_140  x628 ) {
    int32_t  temp2365 = ( (  zeroed1016 ) ( ) );
    int32_t *  y629 = ( &temp2365 );
    enum Color16_140 *  yp630 = ( (  cast2366 ) ( (  y629 ) ) );
    (*  yp630 ) = (  x628 );
    return ( * (  y629 ) );
}

static  bool   eq2363 (    enum Color16_140  l2670 ,    enum Color16_140  r2672 ) {
    return (  eq570 ( ( ( (  cast_dash_on_dash_zeroed2364 ) ( (  l2670 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2364 ) ( (  r2672 ) ) ) ) );
}

static  bool   eq2367 (    struct RGB_141  l2700 ,    struct RGB_141  r2702 ) {
    return ( ( (  eq305 ( ( (  l2700 ) .f_r ) , ( (  r2702 ) .f_r ) ) ) && (  eq305 ( ( (  l2700 ) .f_g ) , ( (  r2702 ) .f_g ) ) ) ) && (  eq305 ( ( (  l2700 ) .f_b ) , ( (  r2702 ) .f_b ) ) ) );
}

static  bool   eq2357 (    struct Color_138  l2722 ,    struct Color_138  r2724 ) {
    return ( {  struct Tuple2_2358  dref2725 = ( ( Tuple2_2358_Tuple2 ) ( (  l2722 ) ,  (  r2724 ) ) ) ; dref2725 .field0.tag == Color_138_ColorDefault_t && dref2725 .field1.tag == Color_138_ColorDefault_t ? ( true ) : dref2725 .field0.tag == Color_138_Color8_t && dref2725 .field1.tag == Color_138_Color8_t ? (  eq2359 ( ( dref2725 .field0 .stuff .Color_138_Color8_s .field0 ) , ( dref2725 .field1 .stuff .Color_138_Color8_s .field0 ) ) ) : dref2725 .field0.tag == Color_138_Color16_t && dref2725 .field1.tag == Color_138_Color16_t ? (  eq2363 ( ( dref2725 .field0 .stuff .Color_138_Color16_s .field0 ) , ( dref2725 .field1 .stuff .Color_138_Color16_s .field0 ) ) ) : dref2725 .field0.tag == Color_138_Color256_t && dref2725 .field1.tag == Color_138_Color256_t ? (  eq305 ( ( dref2725 .field0 .stuff .Color_138_Color256_s .field0 ) , ( dref2725 .field1 .stuff .Color_138_Color256_s .field0 ) ) ) : dref2725 .field0.tag == Color_138_ColorRGB_t && dref2725 .field1.tag == Color_138_ColorRGB_t ? (  eq2367 ( ( dref2725 .field0 .stuff .Color_138_ColorRGB_s .field0 ) , ( dref2725 .field1 .stuff .Color_138_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2356 (    struct Cell_280  l3580 ,    struct Cell_280  r3582 ) {
    if ( ( !  eq480 ( ( (  l3580 ) .f_c ) , ( (  r3582 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2357 ( ( (  l3580 ) .f_fg ) , ( (  r3582 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2357 ( ( (  l3580 ) .f_bg ) , ( (  r3582 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2355 (    struct Tuple2_2341  dref3636 ) {
    return ( !  eq2356 ( ( dref3636 .field0 ) , ( dref3636 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2370 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82371 (    enum Color8_139  color2675 ) {
    enum Color8_139  dref2676 = (  color2675 );
    switch (  dref2676 ) {
        case Color8_139_Black8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Red8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Green8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Yellow8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Blue8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Magenta8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Cyan8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_White8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162372 (    enum Color16_140  color2679 ) {
    enum Color16_140  dref2680 = (  color2679 );
    switch (  dref2680 ) {
        case Color16_140_Black16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Red16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Green16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Yellow16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Blue16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Magenta16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Cyan16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_White16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightBlack16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightRed16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightGreen16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightYellow16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightBlue16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightMagenta16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightCyan16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightWhite16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2376 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2376 StrConcat_2376_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2376 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2375 {
    struct StrConcat_2376  field0;
    struct Char_65  field1;
};

static struct StrConcat_2375 StrConcat_2375_StrConcat (  struct StrConcat_2376  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2375 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2380 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2379 {
    struct StrViewIter_469  f_left;
    struct IntStrIter_2380  f_right;
};

struct StrConcatIter_2378 {
    struct StrConcatIter_2379  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_2378   into_dash_iter2382 (    struct StrConcatIter_2378  self1242 ) {
    return (  self1242 );
}

struct env2388 {
    ;
    uint8_t  base1338;
};

struct envunion2389 {
    uint8_t  (*fun) (  struct env2388*  ,    int32_t  ,    uint8_t  );
    struct env2388 env;
};

static  uint8_t   reduce2387 (    struct Range_150  iterable1077 ,    uint8_t  base1079 ,   struct envunion2389  fun1081 ) {
    uint8_t  x1082 = (  base1079 );
    struct RangeIter_153  it1083 = ( (  into_dash_iter154 ) ( (  iterable1077 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1084 = ( (  next156 ) ( ( & (  it1083 ) ) ) );
        if ( dref1084.tag == Maybe_155_None_t ) {
            return (  x1082 );
        }
        else {
            if ( dref1084.tag == Maybe_155_Just_t ) {
                struct envunion2389  temp2390 = (  fun1081 );
                x1082 = ( temp2390.fun ( &temp2390.env ,  ( dref1084 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1082 ) ) );
            }
        }
    }
    const char*  temp2391 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2391);
    abort ( );
    ( Unit_8_Unit );
    uint8_t  temp2392;
    return (  temp2392 );
}

static  uint8_t   op_dash_mul2394 (    uint8_t  l269 ,    uint8_t  r271 ) {
    return ( (  l269 ) * (  r271 ) );
}

static  uint8_t   lam2393 (   struct env2388* env ,    int32_t  item1342 ,    uint8_t  x1344 ) {
    return (  op_dash_mul2394 ( (  x1344 ) , ( env->base1338 ) ) );
}

static  uint8_t   pow2386 (    uint8_t  base1338 ,    int32_t  p1340 ) {
    struct env2388 envinst2388 = {
        .base1338 =  base1338 ,
    };
    return ( (  reduce2387 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1340 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral310 ( 1 ) ) ,  ( (struct envunion2389){ .fun = (  uint8_t  (*) (  struct env2388*  ,    int32_t  ,    uint8_t  ) )lam2393 , .env =  envinst2388 } ) ) );
}

static  uint8_t   op_dash_div2395 (    uint8_t  l274 ,    uint8_t  r276 ) {
    return ( (  l274 ) / (  r276 ) );
}

static  uint8_t   cast2396 (    uint8_t  x385 ) {
    return ( (uint8_t ) (  x385 ) );
}

static  struct Maybe_299   next2385 (    struct IntStrIter_2380 *  self1351 ) {
    if ( ( ( * (  self1351 ) ) .f_negative ) ) {
        (*  self1351 ) .f_negative = ( false );
        return ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    uint8_t  trim_dash_down1352 = ( (  pow2386 ) ( (  from_dash_integral310 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1353 = (  op_dash_div2395 ( ( ( * (  self1351 ) ) .f_int ) , (  trim_dash_down1352 ) ) );
    uint8_t  upper_dash_mask1354 = (  op_dash_mul2394 ( (  op_dash_div2395 ( (  upper1353 ) , (  from_dash_integral310 ( 10 ) ) ) ) , (  from_dash_integral310 ( 10 ) ) ) );
    uint8_t  digit1355 = ( ( (  cast2396 ) ( (  op_dash_sub943 ( (  upper1353 ) , (  upper_dash_mask1354 ) ) ) ) ) );
    (*  self1351 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1351 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1356 = ( (  char_dash_from_dash_u81054 ) ( (  op_dash_add944 ( (  digit1355 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_299_Just ) ( (  digit_dash_char1356 ) ) );
}

static  struct Maybe_299   next2384 (    struct StrConcatIter_2379 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next474 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next2385 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2383 (    struct StrConcatIter_2378 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2384 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2377 (    struct StrConcatIter_2378  iterable1058 ,    enum Unit_8 (*  fun1060 )(    struct Char_65  ) ) {
    struct StrConcatIter_2378  temp2381 = ( (  into_dash_iter2382 ) ( (  iterable1058 ) ) );
    struct StrConcatIter_2378 *  it1061 = ( &temp2381 );
    while ( ( true ) ) {
        struct Maybe_299  dref1062 = ( (  next2383 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_299_Just_t ) {
                ( (  fun1060 ) ( ( dref1062 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2403 (    uint8_t  self1359 ) {
    if ( (  eq305 ( (  self1359 ) , (  from_dash_integral310 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1360 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp309 ( (  self1359 ) , (  from_dash_integral310 ( 0 ) ) ) == 2 ) ) {
        self1359 = (  op_dash_div2395 ( (  self1359 ) , (  from_dash_integral310 ( 10 ) ) ) );
        digits1360 = (  op_dash_add159 ( (  digits1360 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1360 );
}

static  struct IntStrIter_2380   uint_dash_iter2402 (    uint8_t  int1366 ) {
    return ( (struct IntStrIter_2380) { .f_int = (  int1366 ) , .f_len = ( (  count_dash_digits2403 ) ( (  int1366 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2380   chars2401 (    uint8_t  self1754 ) {
    return ( (  uint_dash_iter2402 ) ( (  self1754 ) ) );
}

static  struct StrConcatIter_2379   into_dash_iter2400 (    struct StrConcat_2376  dref1249 ) {
    return ( (struct StrConcatIter_2379) { .f_left = ( (  chars471 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars2401 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2379   chars2399 (    struct StrConcat_2376  self1260 ) {
    return ( (  into_dash_iter2400 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_2378   into_dash_iter2398 (    struct StrConcat_2375  dref1249 ) {
    return ( (struct StrConcatIter_2378) { .f_left = ( (  chars2399 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2378   chars2397 (    struct StrConcat_2375  self1260 ) {
    return ( (  into_dash_iter2398 ) ( (  self1260 ) ) );
}

static  enum Unit_8   print2374 (    struct StrConcat_2375  s1287 ) {
    ( (  for_dash_each2377 ) ( ( (  chars2397 ) ( (  s1287 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562373 (    uint8_t  color2693 ) {
    ( (  print2374 ) ( ( ( StrConcat_2375_StrConcat ) ( ( ( StrConcat_2376_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2693 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2409 {
    struct StrConcat_2375  field0;
    uint8_t  field1;
};

static struct StrConcat_2409 StrConcat_2409_StrConcat (  struct StrConcat_2375  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2409 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2408 {
    struct StrConcat_2409  field0;
    struct Char_65  field1;
};

static struct StrConcat_2408 StrConcat_2408_StrConcat (  struct StrConcat_2409  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2408 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2407 {
    struct StrConcat_2408  field0;
    uint8_t  field1;
};

static struct StrConcat_2407 StrConcat_2407_StrConcat (  struct StrConcat_2408  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2407 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2406 {
    struct StrConcat_2407  field0;
    struct Char_65  field1;
};

static struct StrConcat_2406 StrConcat_2406_StrConcat (  struct StrConcat_2407  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2406 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2414 {
    struct StrConcatIter_2378  f_left;
    struct IntStrIter_2380  f_right;
};

struct StrConcatIter_2413 {
    struct StrConcatIter_2414  f_left;
    struct AppendIter_1035  f_right;
};

struct StrConcatIter_2412 {
    struct StrConcatIter_2413  f_left;
    struct IntStrIter_2380  f_right;
};

struct StrConcatIter_2411 {
    struct StrConcatIter_2412  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_2411   into_dash_iter2416 (    struct StrConcatIter_2411  self1242 ) {
    return (  self1242 );
}

static  struct Maybe_299   next2420 (    struct StrConcatIter_2414 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2383 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next2385 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2419 (    struct StrConcatIter_2413 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2420 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2418 (    struct StrConcatIter_2412 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2419 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next2385 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2417 (    struct StrConcatIter_2411 *  self1245 ) {
    struct Maybe_299  dref1246 = ( (  next2418 ) ( ( & ( ( * (  self1245 ) ) .f_left ) ) ) );
    if ( dref1246.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1246.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1245 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2410 (    struct StrConcatIter_2411  iterable1058 ,    enum Unit_8 (*  fun1060 )(    struct Char_65  ) ) {
    struct StrConcatIter_2411  temp2415 = ( (  into_dash_iter2416 ) ( (  iterable1058 ) ) );
    struct StrConcatIter_2411 *  it1061 = ( &temp2415 );
    while ( ( true ) ) {
        struct Maybe_299  dref1062 = ( (  next2417 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_299_Just_t ) {
                ( (  fun1060 ) ( ( dref1062 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2414   into_dash_iter2428 (    struct StrConcat_2409  dref1249 ) {
    return ( (struct StrConcatIter_2414) { .f_left = ( (  chars2397 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars2401 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2414   chars2427 (    struct StrConcat_2409  self1260 ) {
    return ( (  into_dash_iter2428 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_2413   into_dash_iter2426 (    struct StrConcat_2408  dref1249 ) {
    return ( (struct StrConcatIter_2413) { .f_left = ( (  chars2427 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2413   chars2425 (    struct StrConcat_2408  self1260 ) {
    return ( (  into_dash_iter2426 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_2412   into_dash_iter2424 (    struct StrConcat_2407  dref1249 ) {
    return ( (struct StrConcatIter_2412) { .f_left = ( (  chars2425 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars2401 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2412   chars2423 (    struct StrConcat_2407  self1260 ) {
    return ( (  into_dash_iter2424 ) ( (  self1260 ) ) );
}

static  struct StrConcatIter_2411   into_dash_iter2422 (    struct StrConcat_2406  dref1249 ) {
    return ( (struct StrConcatIter_2411) { .f_left = ( (  chars2423 ) ( ( dref1249 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1249 .field1 ) ) ) } );
}

static  struct StrConcatIter_2411   chars2421 (    struct StrConcat_2406  self1260 ) {
    return ( (  into_dash_iter2422 ) ( (  self1260 ) ) );
}

static  enum Unit_8   print2405 (    struct StrConcat_2406  s1287 ) {
    ( (  for_dash_each2410 ) ( ( (  chars2421 ) ( (  s1287 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2404 (    struct RGB_141  c2715 ) {
    ( (  print2405 ) ( ( ( StrConcat_2406_StrConcat ) ( ( ( StrConcat_2407_StrConcat ) ( ( ( StrConcat_2408_StrConcat ) ( ( ( StrConcat_2409_StrConcat ) ( ( ( StrConcat_2375_StrConcat ) ( ( ( StrConcat_2376_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2715 ) .f_r ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2715 ) .f_g ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2715 ) .f_b ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2369 (    struct Color_138  c2736 ) {
    struct Color_138  dref2737 = (  c2736 );
    if ( dref2737.tag == Color_138_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2370 ) ( ) );
    }
    else {
        if ( dref2737.tag == Color_138_Color8_t ) {
            ( (  set_dash_fg82371 ) ( ( dref2737 .stuff .Color_138_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2737.tag == Color_138_Color16_t ) {
                ( (  set_dash_fg162372 ) ( ( dref2737 .stuff .Color_138_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2737.tag == Color_138_Color256_t ) {
                    ( (  set_dash_fg2562373 ) ( ( dref2737 .stuff .Color_138_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2737.tag == Color_138_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2404 ) ( ( dref2737 .stuff .Color_138_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2430 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82431 (    enum Color8_139  color2683 ) {
    enum Color8_139  dref2684 = (  color2683 );
    switch (  dref2684 ) {
        case Color8_139_Black8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Red8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Green8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Yellow8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Blue8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Magenta8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Cyan8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_White8 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162432 (    enum Color16_140  color2687 ) {
    enum Color16_140  dref2688 = (  color2687 );
    switch (  dref2688 ) {
        case Color16_140_Black16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Red16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Green16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Yellow16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Blue16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Magenta16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Cyan16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_White16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightBlack16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightRed16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightGreen16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightYellow16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightBlue16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightMagenta16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightCyan16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightWhite16 : {
            ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562433 (    uint8_t  color2696 ) {
    ( (  print2374 ) ( ( ( StrConcat_2375_StrConcat ) ( ( ( StrConcat_2376_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2696 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2434 (    struct RGB_141  c2718 ) {
    ( (  print2405 ) ( ( ( StrConcat_2406_StrConcat ) ( ( ( StrConcat_2407_StrConcat ) ( ( ( StrConcat_2408_StrConcat ) ( ( ( StrConcat_2409_StrConcat ) ( ( ( StrConcat_2375_StrConcat ) ( ( ( StrConcat_2376_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2718 ) .f_r ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2718 ) .f_g ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2718 ) .f_b ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2429 (    struct Color_138  c2744 ) {
    struct Color_138  dref2745 = (  c2744 );
    if ( dref2745.tag == Color_138_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2430 ) ( ) );
    }
    else {
        if ( dref2745.tag == Color_138_Color8_t ) {
            ( (  set_dash_bg82431 ) ( ( dref2745 .stuff .Color_138_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2745.tag == Color_138_Color16_t ) {
                ( (  set_dash_bg162432 ) ( ( dref2745 .stuff .Color_138_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2745.tag == Color_138_Color256_t ) {
                    ( (  set_dash_bg2562433 ) ( ( dref2745 .stuff .Color_138_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2745.tag == Color_138_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2434 ) ( ( dref2745 .stuff .Color_138_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322435 (    int32_t  x658 ) {
    return ( (uint32_t ) (  x658 ) );
}

static  enum Unit_8   emit_dash_cell2368 (    struct RenderState_2303 *  rs3612 ,    struct Cell_280 *  c3614 ,    uint32_t  x3616 ,    uint32_t  y3618 ) {
    if ( ( ( !  eq2236 ( (  x3616 ) , ( ( * (  rs3612 ) ) .f_x ) ) ) || ( !  eq2236 ( (  y3618 ) , ( ( * (  rs3612 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2305 ) ( (  x3616 ) ,  (  y3618 ) ) );
        (*  rs3612 ) .f_x = (  x3616 );
        (*  rs3612 ) .f_y = (  y3618 );
    }
    struct Char_65  char3619 = ( ( * (  c3614 ) ) .f_c );
    struct Color_138  bg3620 = ( ( * (  c3614 ) ) .f_bg );
    if ( (  eq570 ( ( ( * (  c3614 ) ) .f_char_dash_width ) , (  op_dash_neg816 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3619 = ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) );
        bg3620 = ( ( Color_138_Color8 ) ( ( Color8_139_Red8 ) ) );
    }
    if ( ( !  eq2357 ( ( ( * (  rs3612 ) ) .f_fg ) , ( ( * (  c3614 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2369 ) ( ( ( * (  c3614 ) ) .f_fg ) ) );
        (*  rs3612 ) .f_fg = ( ( * (  c3614 ) ) .f_fg );
    }
    if ( ( !  eq2357 ( ( ( * (  rs3612 ) ) .f_bg ) , (  bg3620 ) ) ) ) {
        ( (  set_dash_bg2429 ) ( (  bg3620 ) ) );
        (*  rs3612 ) .f_bg = (  bg3620 );
    }
    ( (  print_dash_str337 ) ( (  char3619 ) ) );
    uint32_t  char_dash_width3621 = ( (  i32_dash_u322435 ) ( ( (  max1121 ) ( ( ( * (  c3614 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3612 ) .f_x = (  op_dash_add171 ( ( ( * (  rs3612 ) ) .f_x ) , (  char_dash_width3621 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2438 {
    struct SliceIter_2340  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

struct env2439 {
    ;
    struct Slice_279  dest2216;
    ;
};

struct Tuple2_2441 {
    struct Cell_280  field0;
    int32_t  field1;
};

static struct Tuple2_2441 Tuple2_2441_Tuple2 (  struct Cell_280  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2441 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2440 {
    enum Unit_8  (*fun) (  struct env2439*  ,    struct Tuple2_2441  );
    struct env2439 env;
};

static  struct Zip_2438   into_dash_iter2443 (    struct Zip_2438  self895 ) {
    return (  self895 );
}

struct Maybe_2444 {
    enum {
        Maybe_2444_None_t,
        Maybe_2444_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2441  field0;
        } Maybe_2444_Just_s;
    } stuff;
};

static struct Maybe_2444 Maybe_2444_Just (  struct Tuple2_2441  field0 ) {
    return ( struct Maybe_2444 ) { .tag = Maybe_2444_Just_t, .stuff = { .Maybe_2444_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2444   next2445 (    struct Zip_2438 *  self898 ) {
    struct Zip_2438  copy899 = ( * (  self898 ) );
    while ( ( true ) ) {
        struct Maybe_870  dref900 = ( (  next2348 ) ( ( & ( (  copy899 ) .f_left_dash_it ) ) ) );
        if ( dref900.tag == Maybe_870_None_t ) {
            return ( (struct Maybe_2444) { .tag = Maybe_2444_None_t } );
        }
        else {
            if ( dref900.tag == Maybe_870_Just_t ) {
                struct Maybe_155  dref902 = ( (  next432 ) ( ( & ( (  copy899 ) .f_right_dash_it ) ) ) );
                if ( dref902.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_2444) { .tag = Maybe_2444_None_t } );
                }
                else {
                    if ( dref902.tag == Maybe_155_Just_t ) {
                        ( (  next2348 ) ( ( & ( ( * (  self898 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self898 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2444_Just ) ( ( ( Tuple2_2441_Tuple2 ) ( ( dref900 .stuff .Maybe_870_Just_s .field0 ) ,  ( dref902 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2437 (    struct Zip_2438  iterable1058 ,   struct envunion2440  fun1060 ) {
    struct Zip_2438  temp2442 = ( (  into_dash_iter2443 ) ( (  iterable1058 ) ) );
    struct Zip_2438 *  it1061 = ( &temp2442 );
    while ( ( true ) ) {
        struct Maybe_2444  dref1062 = ( (  next2445 ) ( (  it1061 ) ) );
        if ( dref1062.tag == Maybe_2444_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1062.tag == Maybe_2444_Just_t ) {
                struct envunion2440  temp2446 = (  fun1060 );
                ( temp2446.fun ( &temp2446.env ,  ( dref1062 .stuff .Maybe_2444_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2438   zip2447 (    struct Slice_279  left906 ,    struct FromIter_426  right908 ) {
    struct SliceIter_2340  left_dash_it909 = ( (  into_dash_iter2354 ) ( (  left906 ) ) );
    struct FromIter_426  right_dash_it910 = ( (  into_dash_iter436 ) ( (  right908 ) ) );
    return ( (struct Zip_2438) { .f_left_dash_it = (  left_dash_it909 ) , .f_right_dash_it = (  right_dash_it910 ) } );
}

static  enum Unit_8   lam2448 (   struct env2439* env ,    struct Tuple2_2441  dref2217 ) {
    return ( (  set863 ) ( ( env->dest2216 ) ,  ( (  i32_dash_size422 ) ( ( dref2217 .field1 ) ) ) ,  ( dref2217 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2436 (    struct Slice_279  src2214 ,    struct Slice_279  dest2216 ) {
    if ( (  cmp292 ( ( (  src2214 ) .f_count ) , ( (  dest2216 ) .f_count ) ) == 2 ) ) {
        ( (  panic524 ) ( ( ( StrConcat_525_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2214 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2216 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2439 envinst2439 = {
        .dest2216 =  dest2216 ,
    };
    ( (  for_dash_each2437 ) ( ( (  zip2447 ) ( (  src2214 ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2440){ .fun = (  enum Unit_8  (*) (  struct env2439*  ,    struct Tuple2_2441  ) )lam2448 , .env =  envinst2439 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2302 (    struct Screen_278 *  screen3624 ) {
    int32_t  w3625 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3624 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3626 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3624 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2303  temp2304 = ( (struct RenderState_2303) { .f_x = (  from_dash_integral165 ( 0 ) ) , .f_y = (  from_dash_integral165 ( 0 ) ) , .f_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_changes = (  from_dash_integral165 ( 0 ) ) } );
    struct RenderState_2303 *  rs3627 = ( &temp2304 );
    ( (  move_dash_cursor_dash_to2305 ) ( (  from_dash_integral165 ( 0 ) ) ,  (  from_dash_integral165 ( 0 ) ) ) );
    struct RangeIter_153  temp2335 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  h3626 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond2336 =  next156 (&temp2335);
        if (  __cond2336 .tag == 0 ) {
            break;
        }
        int32_t  y3629 =  __cond2336 .stuff .Maybe_155_Just_s .field0;
        int32_t  x_dash_v3630 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp157 ( (  x_dash_v3630 ) , (  w3625 ) ) == 0 ) ) {
            size_t  i3631 = ( (  i32_dash_size422 ) ( (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3629 ) , (  w3625 ) ) ) , (  x_dash_v3630 ) ) ) ) );
            struct Cell_280 *  cur3632 = ( (  get_dash_ptr864 ) ( ( ( * (  screen3624 ) ) .f_current ) ,  (  i3631 ) ) );
            int32_t  char_dash_width3633 = ( (  max1121 ) ( ( ( * (  cur3632 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_279  curs3634 = ( (  subslice2337 ) ( ( ( * (  screen3624 ) ) .f_current ) ,  (  i3631 ) ,  (  op_dash_add313 ( (  i3631 ) , ( (  i32_dash_size422 ) ( (  char_dash_width3633 ) ) ) ) ) ) );
            struct Slice_279  prevs3635 = ( (  subslice2337 ) ( ( ( * (  screen3624 ) ) .f_previous ) ,  (  i3631 ) ,  (  op_dash_add313 ( (  i3631 ) , ( (  i32_dash_size422 ) ( (  char_dash_width3633 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3624 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2338 ) ( ( (  zip2353 ) ( (  curs3634 ) ,  (  prevs3635 ) ) ) ,  (  lam2355 ) ) ) ) ) {
                (*  rs3627 ) .f_changes = (  op_dash_add171 ( ( ( * (  rs3627 ) ) .f_changes ) , (  from_dash_integral165 ( 1 ) ) ) );
                ( (  emit_dash_cell2368 ) ( (  rs3627 ) ,  (  cur3632 ) ,  ( (  i32_dash_u322435 ) ( (  x_dash_v3630 ) ) ) ,  ( (  i32_dash_u322435 ) ( (  y3629 ) ) ) ) );
                ( (  copy_dash_to2436 ) ( (  curs3634 ) ,  (  prevs3635 ) ) );
            }
            x_dash_v3630 = (  op_dash_add159 ( (  x_dash_v3630 ) , (  char_dash_width3633 ) ) );
        }
    }
    (*  screen3624 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors790 ) ( ) );
    ( (  flush_dash_stdout793 ) ( ) );
    return ( ( * (  rs3627 ) ) .f_changes );
}

static  void *   cast_dash_ptr2455 (    struct timespec * *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  size_t   size_dash_of2456 (    struct timespec *  x379 ) {
    return ( sizeof( (  x379 ) ) );
}

static  struct timespec *   zeroed2453 (  ) {
    struct timespec *  temp2454;
    struct timespec *  x625 = (  temp2454 );
    ( ( memset ) ( ( (  cast_dash_ptr2455 ) ( ( & (  x625 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2456 ) ( (  x625 ) ) ) ) );
    return (  x625 );
}

static  struct timespec *   null_dash_ptr2452 (  ) {
    return ( (  zeroed2453 ) ( ) );
}

static  enum Unit_8   sync2449 (    struct Tui_90 *  tui3495 ) {
    if ( (  eq2236 ( ( ( * (  tui3495 ) ) .f_target_dash_fps ) , (  from_dash_integral165 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3496 = (  op_dash_div1051 ( (  from_dash_integral290 ( 1000000000 ) ) , ( (  size_dash_i64304 ) ( ( (  u32_dash_size848 ) ( ( ( * (  tui3495 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2450 = ( (  undefined829 ) ( ) );
    struct timespec *  now3497 = ( &temp2450 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic831 ) ( ) ) ,  (  now3497 ) ) );
    int64_t  elapsed_dash_ns3498 = (  op_dash_add485 ( (  op_dash_mul288 ( (  op_dash_sub1053 ( ( ( * (  now3497 ) ) .tv_sec ) , ( ( ( * (  tui3495 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral290 ( 1000000000 ) ) ) ) , (  op_dash_sub1053 ( ( ( * (  now3497 ) ) .tv_nsec ) , ( ( ( * (  tui3495 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3499 = (  op_dash_sub1053 ( (  frame_dash_ns3496 ) , (  elapsed_dash_ns3498 ) ) );
    if ( (  cmp1067 ( (  sleep_dash_ns3499 ) , (  from_dash_integral290 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2451 = ( (struct timespec) { .tv_sec = (  from_dash_integral290 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3499 ) } );
        struct timespec *  ts3500 = ( &temp2451 );
        ( ( nanosleep ) ( (  ts3500 ) ,  ( (  null_dash_ptr2452 ) ( ) ) ) );
    }
    struct timespec  temp2457 = ( (  undefined829 ) ( ) );
    struct timespec *  last_dash_sync3501 = ( &temp2457 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic831 ) ( ) ) ,  (  last_dash_sync3501 ) ) );
    (*  tui3495 ) .f_last_dash_sync = ( * (  last_dash_sync3501 ) );
    (*  tui3495 ) .f_fps_dash_count = (  op_dash_add171 ( ( ( * (  tui3495 ) ) .f_fps_dash_count ) , (  from_dash_integral165 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3502 = (  op_dash_add485 ( (  op_dash_mul288 ( (  op_dash_sub1053 ( ( ( ( * (  tui3495 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3495 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral290 ( 1000 ) ) ) ) , (  op_dash_div1051 ( (  op_dash_sub1053 ( ( ( ( * (  tui3495 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3495 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral290 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1067 ( (  fps_dash_elapsed_dash_ms3502 ) , (  from_dash_integral290 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3495 ) .f_actual_dash_fps = ( ( * (  tui3495 ) ) .f_fps_dash_count );
        (*  tui3495 ) .f_fps_dash_count = (  from_dash_integral165 ( 0 ) );
        (*  tui3495 ) .f_fps_dash_ts = ( ( * (  tui3495 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2460 (    struct Cell_280 *  p388 ) {
    return ( (void * ) (  p388 ) );
}

static  enum Unit_8   free2459 (    enum CAllocator_10  dref2309 ,    struct Slice_279  slice2311 ) {
    if (!(  dref2309 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2460 ) ( ( (  slice2311 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2458 (    struct Screen_278 *  screen3600 ) {
    enum CAllocator_10  al3601 = ( ( * (  screen3600 ) ) .f_al );
    ( (  free2459 ) ( (  al3601 ) ,  ( ( * (  screen3600 ) ) .f_current ) ) );
    ( (  free2459 ) ( (  al3601 ) ,  ( ( * (  screen3600 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2462 (  ) {
    ( (  print_dash_str330 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2463 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2464 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2465 (    struct Termios_92 *  og_dash_termios3475 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  tcsa_dash_flush785 ) ( ) ) ,  ( (  cast_dash_ptr723 ) ( (  og_dash_termios3475 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2461 (    struct Tui_90 *  tui3505 ) {
    ( (  disable_dash_mouse2462 ) ( ) );
    ( (  show_dash_cursor2463 ) ( ) );
    ( (  reset_dash_colors790 ) ( ) );
    ( (  clear_dash_screen791 ) ( ) );
    ( (  reset_dash_cursor_dash_position2464 ) ( ) );
    ( (  disable_dash_raw_dash_mode2465 ) ( ( & ( ( * (  tui3505 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout793 ) ( ) );
    return ( Unit_8_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2377 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2378 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2379 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .starting_dash_size2377 =  starting_dash_size2377 ,
        .growth_dash_factor2378 =  growth_dash_factor2378 ,
    };
    struct env2 envinst2 = {
        .starting_dash_size2377 =  starting_dash_size2377 ,
        .growth_dash_factor2378 =  growth_dash_factor2378 ,
    };
    struct env3 envinst3 = {
        .starting_dash_size2377 =  starting_dash_size2377 ,
        .growth_dash_factor2378 =  growth_dash_factor2378 ,
    };
    struct env4 envinst4 = {
        .starting_dash_size2377 =  starting_dash_size2377 ,
        .growth_dash_factor2378 =  growth_dash_factor2378 ,
    };
    struct env5 envinst5 = {
        .starting_dash_size2377 =  starting_dash_size2377 ,
        .growth_dash_factor2378 =  growth_dash_factor2378 ,
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
        .envinst1 = envinst1 ,
        .envinst6 = envinst6 ,
    };
    struct env40 envinst40 = {
        .shrink_dash_factor2379 =  shrink_dash_factor2379 ,
    };
    struct env41 envinst41 = {
        .shrink_dash_factor2379 =  shrink_dash_factor2379 ,
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
    struct env74 envinst74 = {
        .envinst60 = envinst60 ,
        .envinst63 = envinst63 ,
    };
    struct env79 envinst79 = {
        .envinst60 = envinst60 ,
        .envinst66 = envinst66 ,
    };
    struct env83 envinst83 = {
        .envinst60 = envinst60 ,
        .envinst67 = envinst67 ,
    };
    bool  temp85 = ( false );
    bool *  should_dash_resize3485 = ( &temp85 );
    struct env86 envinst86 = {
        .should_dash_resize3485 =  should_dash_resize3485 ,
    };
    struct env87 envinst87 = {
        .should_dash_resize3485 =  should_dash_resize3485 ,
    };
    struct env88 envinst88 = {
        .envinst87 = envinst87 ,
    };
    struct env94 envinst94 = {
        .envinst87 = envinst87 ,
    };
    struct env96 envinst96 = {
        .envinst53 = envinst53 ,
        .envinst37 = envinst37 ,
        .envinst48 = envinst48 ,
    };
    struct env100 envinst100 = {
        .envinst48 = envinst48 ,
        .envinst40 = envinst40 ,
        .envinst41 = envinst41 ,
        .envinst96 = envinst96 ,
        .envinst6 = envinst6 ,
    };
    struct env110 envinst110 = {
        .envinst69 = envinst69 ,
    };
    struct env112 envinst112 = {
        .envinst50 = envinst50 ,
    };
    struct env114 envinst114 = {
        .envinst112 = envinst112 ,
        .envinst100 = envinst100 ,
    };
    struct env117 envinst117 = {
        .envinst100 = envinst100 ,
    };
    struct env119 envinst119 = {
        .envinst100 = envinst100 ,
    };
    struct env121 envinst121 = {
        .envinst117 = envinst117 ,
    };
    struct env123 envinst123 = {
        .envinst119 = envinst119 ,
    };
    struct env125 envinst125 = {
        .envinst48 = envinst48 ,
    };
    struct env127 envinst127 = {
        .envinst21 = envinst21 ,
        .envinst119 = envinst119 ,
        .envinst28 = envinst28 ,
        .envinst125 = envinst125 ,
    };
    struct env132 envinst132 = {
        .envinst28 = envinst28 ,
    };
    struct env134 envinst134 = {
        .envinst35 = envinst35 ,
    };
    struct env136 envinst136 = {
        .envinst134 = envinst134 ,
    };
    struct Color_138  camel4142 = ( (  rgb142 ) ( (  from_dash_integral165 ( 11766360 ) ) ) );
    struct Color_138  olive4143 = ( (  rgb142 ) ( (  from_dash_integral165 ( 7303983 ) ) ) );
    struct Color_138  tea_dash_green4144 = ( (  rgb142 ) ( (  from_dash_integral165 ( 14875064 ) ) ) );
    struct Color_138  chocolate4145 = ( (  rgb142 ) ( (  from_dash_integral165 ( 13721620 ) ) ) );
    struct Color_138  muted_dash_olive4146 = ( (  rgb142 ) ( (  from_dash_integral165 ( 12308106 ) ) ) );
    struct Color_138  palm_dash_leaf4147 = ( (  rgb142 ) ( (  from_dash_integral165 ( 9674588 ) ) ) );
    struct Color_138  lime_dash_green4148 = ( (  rgb142 ) ( (  from_dash_integral165 ( 3263232 ) ) ) );
    struct Color_138  forest_dash_green4149 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1153058 ) ) ) );
    struct Color_138  green4150 = ( (  rgb142 ) ( (  from_dash_integral165 ( 2781729 ) ) ) );
    struct Color_138  dark_dash_spruce4151 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1983518 ) ) ) );
    struct Color_138  evergreen4152 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1386004 ) ) ) );
    struct Array_179  temp183 = ( (struct Array_179) { ._arr = { ( (  hlt184 ) ( ( HighlightType_18_Number ) ,  (  green4150 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_String ) ,  (  camel4142 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_Comment ) ,  (  dark_dash_spruce4151 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_Ident1 ) ,  (  lime_dash_green4148 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_Ident2 ) ,  (  muted_dash_olive4146 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_Ident3 ) ,  (  tea_dash_green4144 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_Ident4 ) ,  (  palm_dash_leaf4147 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_Keyword1 ) ,  (  tea_dash_green4144 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_Keyword2 ) ,  (  chocolate4145 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_Special1 ) ,  (  olive4143 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_Special2 ) ,  (  forest_dash_green4149 ) ) ) , ( (  hlt184 ) ( ( HighlightType_18_Special3 ) ,  (  camel4142 ) ) ) , ( (struct HighlightColors_175) { .f_type = ( HighlightType_18_Invalid ) , .f_fg = (  evergreen4152 ) , .f_bg = ( ( Maybe_176_Just ) ( ( ( Color_138_Color8 ) ( ( Color8_139_Red8 ) ) ) ) ) } ) } } );
    struct Array_179  temp181 = ( (  from_dash_listlike182 ) ( ( &temp183 ) ) );
    struct Theme_172  temp177 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = (  evergreen4152 ) , .f_fg = (  lime_dash_green4148 ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = (  lime_dash_green4148 ) , .f_fg = (  evergreen4152 ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = (  forest_dash_green4149 ) , .f_fg = (  evergreen4152 ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = (  evergreen4152 ) , .f_fg = (  forest_dash_green4149 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = (  evergreen4152 ) , .f_fg = (  tea_dash_green4144 ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = (  dark_dash_spruce4151 ) , .f_fg = (  lime_dash_green4148 ) } ) , .f_highlights = ( (  as_dash_slice178 ) ( ( &temp181 ) ) ) } );
    struct Theme_172 *  goblin_dash_ultra4153 = ( &temp177 );
    struct Theme_172  temp185 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_highlights = ( (  empty186 ) ( ) ) } );
    struct Theme_172 *  dark_dash_theme4154 = ( &temp185 );
    struct Theme_172  temp192 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_White16 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_highlights = ( (  empty186 ) ( ) ) } );
    struct Theme_172 *  light_dash_theme4155 = ( &temp192 );
    struct Theme_172 *  default4156 = (  goblin_dash_ultra4153 );
    struct Array_196  temp200 = ( (struct Array_196) { ._arr = { ( ( Tuple2_194_Tuple2 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"default" ) ,  ( 7 ) ) ) ,  (  default4156 ) ) ) , ( ( Tuple2_194_Tuple2 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra4153 ) ) ) , ( ( Tuple2_194_Tuple2 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme4154 ) ) ) , ( ( Tuple2_194_Tuple2 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"light-mono" ) ,  ( 10 ) ) ) ,  (  light_dash_theme4155 ) ) ) } } );
    struct Array_196  temp198 = ( (  from_dash_listlike199 ) ( ( &temp200 ) ) );
    struct Slice_193  all_dash_themes4157 = ( (  as_dash_slice195 ) ( ( &temp198 ) ) );
    struct env202 envinst202 = {
        .all_dash_themes4157 =  all_dash_themes4157 ,
    };
    struct env203 envinst203 = {
        .envinst136 = envinst136 ,
    };
    struct env206 envinst206 = {
        .envinst127 = envinst127 ,
    };
    struct env209 envinst209 = {
        .envinst127 = envinst127 ,
    };
    struct env211 envinst211 = {
        .envinst121 = envinst121 ,
    };
    struct env213 envinst213 = {
        .envinst123 = envinst123 ,
    };
    struct env215 envinst215 = {
        .envinst127 = envinst127 ,
    };
    struct env217 envinst217 = {
        .envinst127 = envinst127 ,
    };
    struct env219 envinst219 = {
        .envinst217 = envinst217 ,
        .envinst132 = envinst132 ,
    };
    struct env225 envinst225 = {
        .envinst132 = envinst132 ,
        .envinst127 = envinst127 ,
    };
    struct env228 envinst228 = {
        .envinst217 = envinst217 ,
    };
    struct env230 envinst230 = {
        .envinst215 = envinst215 ,
        .envinst132 = envinst132 ,
        .envinst206 = envinst206 ,
    };
    struct env235 envinst235 = {
        .envinst125 = envinst125 ,
    };
    struct env237 envinst237 = {
        .envinst74 = envinst74 ,
    };
    struct env239 envinst239 = {
        .envinst79 = envinst79 ,
    };
    struct env241 envinst241 = {
        .envinst83 = envinst83 ,
    };
    struct env243 envinst243 = {
        .envinst202 = envinst202 ,
    };
    struct env246 envinst246 = {
        .envinst110 = envinst110 ,
        .envinst237 = envinst237 ,
        .envinst239 = envinst239 ,
        .envinst241 = envinst241 ,
    };
    struct env255 envinst255 = {
        .envinst215 = envinst215 ,
        .envinst235 = envinst235 ,
        .envinst228 = envinst228 ,
        .envinst239 = envinst239 ,
        .envinst206 = envinst206 ,
        .envinst230 = envinst230 ,
        .envinst225 = envinst225 ,
        .envinst211 = envinst211 ,
        .envinst213 = envinst213 ,
        .envinst219 = envinst219 ,
    };
    struct env266 envinst266 = {
        .envinst209 = envinst209 ,
        .envinst60 = envinst60 ,
        .envinst72 = envinst72 ,
        .envinst255 = envinst255 ,
        .envinst228 = envinst228 ,
        .envinst246 = envinst246 ,
        .envinst206 = envinst206 ,
        .envinst243 = envinst243 ,
    };
    struct env276 envinst276 = {
        .envinst203 = envinst203 ,
    };
    enum CAllocator_10  al4716 = ( (  idc282 ) ( ) );
    struct TextBuf_105  temp284;
    struct TextBuf_105  temp283 = (  temp284 );
    struct TextBuf_105 *  tb4717 = ( &temp283 );
    struct Slice_285  args4720 = ( (  get286 ) ( ) );
    struct Maybe_78  initial_dash_message4721 = ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    if ( (  cmp292 ( ( (  args4720 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4722 = ( (  from_dash_const_dash_str293 ) ( (  elem_dash_get319 ( (  args4720 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion363  temp362 = ( (struct envunion363){ .fun = (  struct Maybe_361  (*) (  struct env114*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file364 , .env =  envinst114 } );
        struct Maybe_361  dref4723 = ( temp362.fun ( &temp362.env ,  (  al4716 ) ,  (  fname4722 ) ) );
        if ( dref4723.tag == Maybe_361_None_t ) {
            struct envunion708  temp707 = ( (struct envunion708){ .fun = (  struct TextBuf_105  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk367 , .env =  envinst112 } );
            (*  tb4717 ) = ( temp707.fun ( &temp707.env ,  (  al4716 ) ) );
            (*  tb4717 ) .f_filename = ( ( Maybe_78_Just ) ( ( (  clone_dash_0517 ) ( (  fname4722 ) ,  (  al4716 ) ) ) ) );
        }
        else {
            if ( dref4723.tag == Maybe_361_Just_t ) {
                (*  tb4717 ) = ( dref4723 .stuff .Maybe_361_Just_s .field0 );
            }
        }
    } else {
        struct envunion710  temp709 = ( (struct envunion710){ .fun = (  struct TextBuf_105  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk367 , .env =  envinst112 } );
        (*  tb4717 ) = ( temp709.fun ( &temp709.env ,  (  al4716 ) ) );
    }
    struct Config_252  temp711 = ( (struct Config_252) { .f_theme = (  default4156 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_252 *  cfg4725 = ( &temp711 );
    struct Editor_250  temp712 = ( (struct Editor_250) { .f_running = ( true ) , .f_al = (  al4716 ) , .f_pane = ( (  mk713 ) ( (  al4716 ) ,  (  tb4717 ) ) ) , .f_clipboard = ( (struct Maybe_78) { .tag = Maybe_78_None_t } ) , .f_search_dash_term = ( (struct Maybe_78) { .tag = Maybe_78_None_t } ) , .f_mode = ( (struct EditorMode_251) { .tag = EditorMode_251_Normal_t } ) , .f_msg = (  initial_dash_message4721 ) , .f_cfg = (  cfg4725 ) , .f_og_dash_theme = (  default4156 ) } );
    struct Editor_250 *  ed4726 = ( &temp712 );
    struct envunion716  temp715 = ( (struct envunion716){ .fun = (  struct Tui_90  (*) (  struct env86*  ) )mk717 , .env =  envinst86 } );
    struct Tui_90  temp714 = ( temp715.fun ( &temp715.env ) );
    struct Tui_90 *  tui4727 = ( &temp714 );
    struct Screen_278  temp841 = ( (  mk_dash_screen842 ) ( (  tui4727 ) ,  (  al4716 ) ) );
    struct Screen_278 *  screen4728 = ( &temp841 );
    uint32_t  last_dash_redraw_dash_changes4729 = (  from_dash_integral165 ( 0 ) );
    while ( ( ( * (  ed4726 ) ) .f_running ) ) {
        struct env886 envinst886 = {
            .envinst88 = envinst88 ,
            .tui4727 =  tui4727 ,
        };
        struct FunIter_885  temp884 =  into_dash_iter893 ( ( (  from_dash_function894 ) ( ( (struct envunion892){ .fun = (  struct Maybe_888  (*) (  struct env886*  ) )lam895 , .env =  envinst886 } ) ) ) );
        while (true) {
            struct Maybe_888  __cond1087 =  next1088 (&temp884);
            if (  __cond1087 .tag == 0 ) {
                break;
            }
            struct InputEvent_889  ev4731 =  __cond1087 .stuff .Maybe_888_Just_s .field0;
            struct InputEvent_889  dref4732 = (  ev4731 );
            if ( dref4732.tag == InputEvent_889_Key_t ) {
                ( (  reset_dash_msg1090 ) ( (  ed4726 ) ) );
                struct envunion1097  temp1096 = ( (struct envunion1097){ .fun = (  enum Unit_8  (*) (  struct env266*  ,    struct Editor_250 *  ,    struct Key_271  ) )handle_dash_key1098 , .env =  envinst266 } );
                ( temp1096.fun ( &temp1096.env ,  (  ed4726 ) ,  ( dref4732 .stuff .InputEvent_889_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1888  temp1887 = ( (struct envunion1888){ .fun = (  bool  (*) (  struct env94*  ,    struct Screen_278 *  ) )resize_dash_screen_dash_if_dash_needed1889 , .env =  envinst94 } );
        ( temp1887.fun ( &temp1887.env ,  (  screen4728 ) ) );
        if ( ( (  should_dash_redraw1891 ) ( (  tui4727 ) ) ) ) {
            (*  screen4728 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1892 ) ( (  screen4728 ) ) );
            struct Theme_172 *  theme4734 = ( ( * ( ( * (  ed4726 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg1901 ) ( (  screen4728 ) ,  ( ( ( * (  theme4734 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1902 ) ( (  screen4728 ) ,  ( ( ( * (  theme4734 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1903 ) ( (  screen4728 ) ) );
            struct envunion1916  temp1915 = ( (struct envunion1916){ .fun = (  enum Unit_8  (*) (  struct env276*  ,    struct Screen_278 *  ,    struct Editor_250 *  ) )render_dash_editor1917 , .env =  envinst276 } );
            ( temp1915.fun ( &temp1915.env ,  (  screen4728 ) ,  (  ed4726 ) ) );
            last_dash_redraw_dash_changes4729 = ( (  render_dash_screen2302 ) ( (  screen4728 ) ) );
        }
        ( (  sync2449 ) ( (  tui4727 ) ) );
    }
    ( (  free_dash_screen2458 ) ( (  screen4728 ) ) );
    ( (  deinit2461 ) ( (  tui4727 ) ) );
}
