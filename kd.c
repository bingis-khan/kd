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
    size_t  starting_dash_size2212;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2213;
    ;
};

struct env2 {
    size_t  starting_dash_size2212;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2213;
    ;
};

struct env3 {
    size_t  starting_dash_size2212;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2213;
    ;
};

struct env4 {
    size_t  starting_dash_size2212;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2213;
    ;
};

struct env5 {
    size_t  starting_dash_size2212;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2213;
    ;
};

enum Unit_8 {
    Unit_8_Unit,
};

enum CAllocator_10 {
    CAllocator_10_CAllocator,
};

struct Slice_11 {
    uint8_t *  f_ptr;
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

enum HighlightType_20 {
    HighlightType_20_Number,
    HighlightType_20_String,
    HighlightType_20_Comment,
    HighlightType_20_Ident1,
    HighlightType_20_Ident2,
    HighlightType_20_Ident3,
    HighlightType_20_Ident4,
    HighlightType_20_Keyword1,
    HighlightType_20_Keyword2,
    HighlightType_20_Special1,
    HighlightType_20_Special2,
    HighlightType_20_Special3,
    HighlightType_20_Invalid,
};

struct Highlight_19 {
    enum HighlightType_20  f_type;
    int32_t  f_from;
    int32_t  f_to;
};

struct Slice_18 {
    struct Highlight_19 *  f_ptr;
    size_t  f_count;
};

struct List_17 {
    enum CAllocator_10  f_al;
    struct Slice_18  f_elements;
    size_t  f_count;
};

struct Line_16 {
    struct List_9  f_line;
    bool  f_invalidated;
    struct List_17  f_highlights;
};

struct Slice_15 {
    struct Line_16 *  f_ptr;
    size_t  f_count;
};

struct List_14 {
    enum CAllocator_10  f_al;
    struct Slice_15  f_elements;
    size_t  f_count;
};

struct envunion13 {
    enum Unit_8  (*fun) (  struct env2*  ,    struct List_14 *  );
    struct env2 env;
};

struct env12 {
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
    struct Slice_11  f_contents;
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
    enum Unit_8  (*fun) (  struct env5*  ,    struct List_17 *  );
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
    enum Unit_8  (*fun) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  );
    struct env12 env;
};

struct envunion39 {
    enum Unit_8  (*fun) (  struct env2*  ,    struct List_14 *  );
    struct env2 env;
};

struct env37 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env12 envinst12;
    struct env2 envinst2;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2214;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2214;
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
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  );
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
    enum Unit_8  (*fun) (  struct env42*  ,    struct List_9 *  ,    size_t  );
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
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    uint8_t  );
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
    enum Unit_8  (*fun) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  );
    struct env12 env;
};

struct env48 {
    ;
    ;
    ;
    ;
    ;
    struct env12 envinst12;
};

struct envunion51 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
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

struct Array_54 {
    struct Line_16 _arr [1];
};

struct envunion53 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_14 *  ,    struct Array_54  );
    struct env48 env;
};

struct env52 {
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

static  const char*   from_dash_string57 (    uint8_t *  ptr83 ,    size_t  dref84 ) {
    return ( ( (const char* ) (  ptr83 ) ) );
}

struct envunion59 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct env58 {
    struct env46 envinst46;
    ;
    ;
};

struct StrBuilder_62 {
    struct List_9  f_chars;
};

struct envunion61 {
    enum Unit_8  (*fun) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_11  );
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
    struct env60 envinst60;
    ;
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
    struct env60 envinst60;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env68 {
    struct env60 envinst60;
    ;
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
    enum Unit_8  (*fun) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  );
    struct env63 env;
};

struct env69 {
    struct env63 envinst63;
    ;
    ;
    ;
    ;
    ;
};

struct envunion73 {
    enum Unit_8  (*fun) (  struct env44*  ,    struct List_9 *  );
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

struct envunion76 {
    enum Unit_8  (*fun) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrView_27  );
    struct env66 env;
};

struct env74 {
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
    ;
    struct env66 envinst66;
};

struct Maybe_80 {
    enum {
        Maybe_80_None_t,
        Maybe_80_Just_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } Maybe_80_Just_s;
    } stuff;
};

static struct Maybe_80 Maybe_80_Just (  struct StrView_27  field0 ) {
    return ( struct Maybe_80 ) { .tag = Maybe_80_Just_t, .stuff = { .Maybe_80_Just_s = { .field0 = field0 } } };
};

struct StrConcat_79 {
    struct StrView_27  field0;
    struct Maybe_80  field1;
};

static struct StrConcat_79 StrConcat_79_StrConcat (  struct StrView_27  field0 ,  struct Maybe_80  field1 ) {
    return ( struct StrConcat_79 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion78 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrConcat_79  );
    struct env67 env;
};

struct env77 {
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

struct StrConcat_84 {
    struct StrView_27  field0;
    size_t  field1;
};

static struct StrConcat_84 StrConcat_84_StrConcat (  struct StrView_27  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_84 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_83 {
    struct StrConcat_84  field0;
    struct StrView_27  field1;
};

static struct StrConcat_83 StrConcat_83_StrConcat (  struct StrConcat_84  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_83 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion82 {
    enum Unit_8  (*fun) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_83  );
    struct env68 env;
};

struct env81 {
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
    struct env68 envinst68;
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
    bool *  should_dash_resize3421;
    ;
    ;
    ;
    ;
    ;
};

struct env87 {
    ;
    ;
    ;
    bool *  should_dash_resize3421;
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
    struct env87 envinst87;
    ;
    ;
    ;
    ;
    ;
};

struct envunion97 {
    enum Unit_8  (*fun) (  struct env37*  ,    struct List_14 *  ,    size_t  ,    struct Line_16  );
    struct env37 env;
};

struct envunion98 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion99 {
    struct List_9  (*fun) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  );
    struct env50 env;
};

struct env96 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env37 envinst37;
    ;
    struct env46 envinst46;
    ;
    struct env50 envinst50;
    ;
    ;
    ;
    ;
    ;
    ;
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
    enum Unit_8  (*fun) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  );
    struct env12 env;
};

struct envunion102 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion103 {
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  );
    struct env40 env;
};

struct envunion104 {
    enum Unit_8  (*fun) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  );
    struct env41 env;
};

enum ChangesetInputType_108 {
    ChangesetInputType_108_NoChangeset,
    ChangesetInputType_108_InputChangeset,
    ChangesetInputType_108_CustomChangeset,
};

struct Actions_107 {
    struct List_30  f_list;
    size_t  f_cur;
    enum ChangesetInputType_108  f_input_dash_changeset;
};

enum Filetype_109 {
    Filetype_109_Text,
    Filetype_109_KC,
    Filetype_109_Markdown,
    Filetype_109_GCode,
};

struct TextBuf_106 {
    enum CAllocator_10  f_al;
    struct List_14  f_buf;
    struct Actions_107  f_actions;
    struct Maybe_80  f_filename;
    enum Filetype_109  f_filetype;
};

struct envunion105 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct StrView_27  );
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
    struct env12 envinst12;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env46 envinst46;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env40 envinst40;
    struct env41 envinst41;
    struct env96 envinst96;
    ;
    ;
    ;
    ;
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
    struct env69 envinst69;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion113 {
    struct List_14  (*fun) (  struct env52*  ,    struct Array_54  ,    enum CAllocator_10  );
    struct env52 env;
};

struct env112 {
    ;
    ;
    ;
    struct env52 envinst52;
    ;
    ;
    ;
};

struct envunion115 {
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env100 env;
};

struct envunion116 {
    struct TextBuf_106  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
};

struct env114 {
    ;
    ;
    ;
    ;
    ;
    struct env100 envinst100;
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
    ;
    ;
    ;
    ;
};

struct envunion118 {
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
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
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
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
    struct Pos_26  (*fun) (  struct env117*  ,    struct TextBuf_106 *  ,    struct Action_25  );
    struct env117 env;
};

struct env121 {
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
    ;
    ;
};

struct envunion124 {
    struct Pos_26  (*fun) (  struct env119*  ,    struct TextBuf_106 *  ,    struct Action_25  );
    struct env119 env;
};

struct env123 {
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
    ;
};

struct envunion126 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
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
    struct env46 envinst46;
    ;
    ;
    ;
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
    struct Pos_26  (*fun) (  struct env119*  ,    struct TextBuf_106 *  ,    struct Action_25  );
    struct env119 env;
};

struct envunion129 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct envunion130 {
    enum Unit_8  (*fun) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  );
    struct env28 env;
};

struct envunion131 {
    struct StrView_27  (*fun) (  struct env125*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env125 env;
};

struct env127 {
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
    ;
    struct env125 envinst125;
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
    struct env28 envinst28;
    ;
    ;
    ;
    ;
    ;
};

struct envunion135 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
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
};

struct envunion137 {
    enum Unit_8  (*fun) (  struct env134*  ,    struct TextBuf_106 *  ,    struct Line_16 *  );
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

static  uint8_t   cast145 (    uint32_t  x357 ) {
    return ( (uint8_t ) (  x357 ) );
}

static  uint8_t   u32_dash_u8144 (    uint32_t  x684 ) {
    return ( (  cast145 ) ( (  x684 ) ) );
}

static  uint32_t   op_dash_div147 (    uint32_t  l246 ,    uint32_t  r248 ) {
    return ( (  l246 ) / (  r248 ) );
}

struct Range_150 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_150 Range_150_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_150 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env151 {
    uint32_t  base1304;
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

static  struct RangeIter_153   into_dash_iter154 (    struct Range_150  dref816 ) {
    return ( ( RangeIter_153_RangeIter ) ( ( ( Range_150_Range ) ( ( dref816 .field0 ) ,  ( dref816 .field1 ) ) ) ,  ( dref816 .field0 ) ) );
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

static  enum Ordering_158   cmp157 (    int32_t  l160 ,    int32_t  r162 ) {
    return ( builtin_int32_tcmp( (  l160 ) , (  r162 ) ) );
}

static  int32_t   op_dash_add159 (    int32_t  l208 ,    int32_t  r210 ) {
    return ( (  l208 ) + (  r210 ) );
}

static  struct Maybe_155   next156 (    struct RangeIter_153 *  self824 ) {
    struct RangeIter_153  dref825 = ( * (  self824 ) );
    if ( true ) {
        if ( (  cmp157 ( ( dref825 .field1 ) , ( dref825 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
        }
        struct Maybe_155  x829 = ( ( Maybe_155_Just ) ( ( dref825 .field1 ) ) );
        (*  self824 ) = ( ( RangeIter_153_RangeIter ) ( ( ( Range_150_Range ) ( ( dref825 .field0 .field0 ) ,  ( dref825 .field0 .field1 ) ) ) ,  (  op_dash_add159 ( ( dref825 .field1 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        return (  x829 );
    }
}

static  uint32_t   reduce149 (    struct Range_150  iterable1043 ,    uint32_t  base1045 ,   struct envunion152  fun1047 ) {
    uint32_t  x1048 = (  base1045 );
    struct RangeIter_153  it1049 = ( (  into_dash_iter154 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1050 = ( (  next156 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_155_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_155_Just_t ) {
                struct envunion152  temp160 = (  fun1047 );
                x1048 = ( temp160.fun ( &temp160.env ,  ( dref1050 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  struct Range_150   to163 (    int32_t  from807 ,    int32_t  to809 ) {
    return ( ( Range_150_Range ) ( (  from807 ) ,  (  to809 ) ) );
}

static  int32_t   op_dash_sub164 (    int32_t  l213 ,    int32_t  r215 ) {
    return ( (  l213 ) - (  r215 ) );
}

static  uint32_t   from_dash_integral165 (    size_t  x53 ) {
    return ( (uint32_t ) (  x53 ) );
}

static  uint32_t   op_dash_mul167 (    uint32_t  l241 ,    uint32_t  r243 ) {
    return ( (  l241 ) * (  r243 ) );
}

static  uint32_t   lam166 (   struct env151* env ,    int32_t  item1308 ,    uint32_t  x1310 ) {
    return (  op_dash_mul167 ( (  x1310 ) , ( env->base1304 ) ) );
}

static  uint32_t   pow148 (    uint32_t  base1304 ,    int32_t  p1306 ) {
    struct env151 envinst151 = {
        .base1304 =  base1304 ,
    };
    return ( (  reduce149 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1306 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral165 ( 1 ) ) ,  ( (struct envunion152){ .fun = (  uint32_t  (*) (  struct env151*  ,    int32_t  ,    uint32_t  ) )lam166 , .env =  envinst151 } ) ) );
}

static  uint32_t   rshift146 (    uint32_t  x1457 ,    int32_t  am1459 ) {
    return (  op_dash_div147 ( (  x1457 ) , ( (  pow148 ) ( (  from_dash_integral165 ( 2 ) ) ,  (  am1459 ) ) ) ) );
}

static  uint32_t   op_dash_sub169 (    uint32_t  l236 ,    uint32_t  r238 ) {
    return ( (  l236 ) - (  r238 ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp170 (    uint32_t  l165 ,    uint32_t  r167 ) {
    return ( builtin_uint32_tcmp( (  l165 ) , (  r167 ) ) );
}

static  uint32_t   op_dash_add171 (    uint32_t  l231 ,    uint32_t  r233 ) {
    return ( (  l231 ) + (  r233 ) );
}

static  uint32_t   mod168 (    uint32_t  l1462 ,    uint32_t  d1464 ) {
    uint32_t  r1465 = (  op_dash_div147 ( (  l1462 ) , (  d1464 ) ) );
    uint32_t  m1466 = (  op_dash_sub169 ( (  l1462 ) , (  op_dash_mul167 ( (  r1465 ) , (  d1464 ) ) ) ) );
    if ( (  cmp170 ( (  m1466 ) , (  from_dash_integral165 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add171 ( (  d1464 ) , (  m1466 ) ) );
    } else {
        return (  m1466 );
    }
}

static  struct RGB_141   rgb_dash_from_dash_hex143 (    uint32_t  n2648 ) {
    return ( (struct RGB_141) { .f_r = ( (  u32_dash_u8144 ) ( ( (  rshift146 ) ( (  n2648 ) ,  (  from_dash_integral56 ( 16 ) ) ) ) ) ) , .f_g = ( (  u32_dash_u8144 ) ( ( (  mod168 ) ( ( (  rshift146 ) ( (  n2648 ) ,  (  from_dash_integral56 ( 8 ) ) ) ) ,  (  from_dash_integral165 ( 256 ) ) ) ) ) ) , .f_b = ( (  u32_dash_u8144 ) ( ( (  mod168 ) ( (  n2648 ) ,  (  from_dash_integral165 ( 256 ) ) ) ) ) ) } );
}

static  struct Color_138   rgb142 (    uint32_t  x4077 ) {
    return ( ( Color_138_ColorRGB ) ( ( (  rgb_dash_from_dash_hex143 ) ( (  x4077 ) ) ) ) );
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
    enum HighlightType_20  f_type;
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

static  struct HighlightColors_175 *   cast180 (    struct Array_179 *  x357 ) {
    return ( (struct HighlightColors_175 * ) (  x357 ) );
}

static  struct Slice_174   as_dash_slice178 (    struct Array_179 *  arr2489 ) {
    return ( (struct Slice_174) { .f_ptr = ( (  cast180 ) ( (  arr2489 ) ) ) , .f_count = ( (size_t ) ( 13 ) ) } );
}

static  struct Array_179   from_dash_listlike182 (    struct Array_179 *  self331 ) {
    return ( * (  self331 ) );
}

static  struct HighlightColors_175   hlt184 (    enum HighlightType_20  type4071 ,    struct Color_138  fg4073 ) {
    return ( (struct HighlightColors_175) { .f_type = (  type4071 ) , .f_fg = (  fg4073 ) , .f_bg = ( (struct Maybe_176) { .tag = Maybe_176_None_t } ) } );
}

static  void *   cast_dash_ptr190 (    struct HighlightColors_175 * *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of191 (    struct HighlightColors_175 *  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  struct HighlightColors_175 *   zeroed188 (  ) {
    struct HighlightColors_175 *  temp189;
    struct HighlightColors_175 *  x597 = (  temp189 );
    ( ( memset ) ( ( (  cast_dash_ptr190 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of191 ) ( (  x597 ) ) ) ) );
    return (  x597 );
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

static  struct Tuple2_194 *   cast197 (    struct Array_196 *  x357 ) {
    return ( (struct Tuple2_194 * ) (  x357 ) );
}

static  struct Slice_193   as_dash_slice195 (    struct Array_196 *  arr2489 ) {
    return ( (struct Slice_193) { .f_ptr = ( (  cast197 ) ( (  arr2489 ) ) ) , .f_count = ( (size_t ) ( 4 ) ) } );
}

static  struct Array_196   from_dash_listlike199 (    struct Array_196 *  self331 ) {
    return ( * (  self331 ) );
}

static  struct StrView_27   from_dash_string201 (    uint8_t *  ptr87 ,    size_t  count89 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr87 ) , .f_count = (  count89 ) } ) } );
}

struct env202 {
    ;
    ;
    ;
    ;
    ;
    struct Slice_193  all_dash_themes4093;
    ;
};

struct Maybe_205 {
    enum {
        Maybe_205_None_t,
        Maybe_205_Just_t,
    } tag;
    union {
        struct {
            enum HighlightType_20  field0;
        } Maybe_205_Just_s;
    } stuff;
};

static struct Maybe_205 Maybe_205_Just (  enum HighlightType_20  field0 ) {
    return ( struct Maybe_205 ) { .tag = Maybe_205_Just_t, .stuff = { .Maybe_205_Just_s = { .field0 = field0 } } };
};

struct envunion204 {
    struct Maybe_205  (*fun) (  struct env136*  ,    struct TextBuf_106 *  ,    struct Pos_26  );
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
    struct Maybe_208  (*fun) (  struct env127*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  );
    struct env127 env;
};

struct env206 {
    ;
    ;
    ;
    struct env127 envinst127;
    ;
    ;
    ;
    ;
    ;
};

struct envunion210 {
    struct Maybe_208  (*fun) (  struct env127*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  );
    struct env127 env;
};

struct env209 {
    ;
    ;
    ;
    ;
    ;
    struct env127 envinst127;
    ;
    ;
    ;
    ;
    ;
};

struct envunion212 {
    struct Maybe_208  (*fun) (  struct env121*  ,    struct TextBuf_106 *  );
    struct env121 env;
};

struct env211 {
    struct env121 envinst121;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion214 {
    struct Maybe_208  (*fun) (  struct env123*  ,    struct TextBuf_106 *  );
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
    struct Maybe_208  (*fun) (  struct env127*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  );
    struct env127 env;
};

struct env215 {
    ;
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
};

struct envunion218 {
    struct Maybe_208  (*fun) (  struct env127*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  );
    struct env127 env;
};

struct env217 {
    ;
    ;
    ;
    ;
    ;
    struct env127 envinst127;
    ;
    ;
    ;
    ;
    ;
};

struct envunion220 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_106 *  ,    struct Cursors_33  );
    struct env132 env;
};

enum Mode_223 {
    Mode_223_Normal,
    Mode_223_Insert,
    Mode_223_Select,
};

struct ScreenCursorOffset_224 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_222 {
    struct TextBuf_106 *  f_buf;
    struct Pos_26  f_cursor;
    int32_t  f_vi;
    struct Maybe_34  f_sel;
    enum Mode_223  f_mode;
    struct ScreenCursorOffset_224  f_sc_dash_off;
};

struct envunion221 {
    enum Unit_8  (*fun) (  struct env217*  ,    struct Pane_222 *  ,    int32_t  );
    struct env217 env;
};

struct env219 {
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
    struct env217 envinst217;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion226 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_106 *  ,    struct Cursors_33  );
    struct env132 env;
};

struct envunion227 {
    struct Maybe_208  (*fun) (  struct env127*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  );
    struct env127 env;
};

struct env225 {
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
    ;
    struct env127 envinst127;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion229 {
    enum Unit_8  (*fun) (  struct env217*  ,    struct Pane_222 *  ,    int32_t  );
    struct env217 env;
};

struct env228 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env217 envinst217;
    ;
    ;
    ;
};

struct envunion231 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_106 *  ,    struct Cursors_33  );
    struct env132 env;
};

struct Tuple2_233 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_233 Tuple2_233_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_233 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion232 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  );
    struct env215 env;
};

struct envunion234 {
    enum Unit_8  (*fun) (  struct env206*  ,    struct Pane_222 *  ,    struct StrView_27  );
    struct env206 env;
};

struct env230 {
    ;
    struct env132 envinst132;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct envunion236 {
    struct StrView_27  (*fun) (  struct env125*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  );
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
    struct StrView_27  (*fun) (  struct env74*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env74 env;
};

struct env237 {
    struct env74 envinst74;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion240 {
    struct StrView_27  (*fun) (  struct env77*  ,    struct StrConcat_79  ,    enum CAllocator_10  );
    struct env77 env;
};

struct env239 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env77 envinst77;
};

struct envunion242 {
    struct StrView_27  (*fun) (  struct env81*  ,    struct StrConcat_83  ,    enum CAllocator_10  );
    struct env81 env;
};

struct env241 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env81 envinst81;
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
    ;
    ;
    struct env202 envinst202;
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
    struct Maybe_248  (*fun) (  struct env110*  ,    struct TextBuf_106 *  ,    struct Maybe_80  );
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
    struct Pane_222  f_pane;
    struct Maybe_80  f_clipboard;
    struct Maybe_80  f_search_dash_term;
    struct EditorMode_251  f_mode;
    struct Maybe_80  f_msg;
    struct Config_252 *  f_cfg;
    struct Theme_172 *  f_og_dash_theme;
};

struct envunion249 {
    enum Unit_8  (*fun) (  struct env237*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env237 env;
};

struct envunion253 {
    enum Unit_8  (*fun) (  struct env239*  ,    struct Editor_250 *  ,    struct StrConcat_79  );
    struct env239 env;
};

struct envunion254 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_250 *  ,    struct StrConcat_83  );
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
    ;
    ;
    ;
    ;
    struct env110 envinst110;
    ;
    ;
    ;
    struct env237 envinst237;
    struct env239 envinst239;
    struct env241 envinst241;
    ;
    ;
    ;
};

struct envunion256 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_222 *  );
    struct env225 env;
};

struct envunion257 {
    enum Unit_8  (*fun) (  struct env211*  ,    struct Pane_222 *  );
    struct env211 env;
};

struct envunion258 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_222 *  );
    struct env213 env;
};

struct envunion259 {
    enum Unit_8  (*fun) (  struct env219*  ,    struct Pane_222 *  );
    struct env219 env;
};

struct envunion260 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_250 *  );
    struct env235 env;
};

struct envunion261 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  );
    struct env215 env;
};

struct envunion262 {
    enum Unit_8  (*fun) (  struct env228*  ,    struct Pane_222 *  ,    int32_t  );
    struct env228 env;
};

struct envunion263 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_250 *  ,    struct StrConcat_83  );
    struct env241 env;
};

struct envunion264 {
    enum Unit_8  (*fun) (  struct env206*  ,    struct Pane_222 *  ,    struct StrView_27  );
    struct env206 env;
};

struct envunion265 {
    enum Unit_8  (*fun) (  struct env230*  ,    struct Pane_222 *  );
    struct env230 env;
};

struct env255 {
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
    struct env211 envinst211;
    ;
    ;
    ;
    struct env213 envinst213;
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
    struct env235 envinst235;
    ;
    ;
    struct env215 envinst215;
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
    ;
    ;
    struct env241 envinst241;
    ;
    ;
    ;
    ;
    struct env206 envinst206;
    ;
    ;
    struct env230 envinst230;
    ;
};

struct envunion267 {
    enum Unit_8  (*fun) (  struct env243*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env243 env;
};

struct envunion268 {
    enum Unit_8  (*fun) (  struct env209*  ,    struct Pane_222 *  );
    struct env209 env;
};

struct envunion269 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion270 {
    enum Unit_8  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct Key_272 {
    enum {
        Key_272_Escape_t,
        Key_272_Enter_t,
        Key_272_Tab_t,
        Key_272_Backspace_t,
        Key_272_Char_t,
        Key_272_Ctrl_t,
        Key_272_Up_t,
        Key_272_Down_t,
        Key_272_Left_t,
        Key_272_Right_t,
        Key_272_Home_t,
        Key_272_End_t,
        Key_272_PageUp_t,
        Key_272_PageDown_t,
        Key_272_Delete_t,
        Key_272_Insert_t,
        Key_272_F1_t,
        Key_272_F2_t,
        Key_272_F3_t,
        Key_272_F4_t,
        Key_272_F5_t,
        Key_272_F6_t,
        Key_272_F7_t,
        Key_272_F8_t,
        Key_272_F9_t,
        Key_272_F10_t,
        Key_272_F11_t,
        Key_272_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_272_Char_s;
        struct {
            char  field0;
        } Key_272_Ctrl_s;
    } stuff;
};

static struct Key_272 Key_272_Char (  char  field0 ) {
    return ( struct Key_272 ) { .tag = Key_272_Char_t, .stuff = { .Key_272_Char_s = { .field0 = field0 } } };
};

static struct Key_272 Key_272_Ctrl (  char  field0 ) {
    return ( struct Key_272 ) { .tag = Key_272_Ctrl_t, .stuff = { .Key_272_Ctrl_s = { .field0 = field0 } } };
};

struct envunion271 {
    enum Unit_8  (*fun) (  struct env255*  ,    struct Editor_250 *  ,    struct Key_272  );
    struct env255 env;
};

struct envunion273 {
    enum Unit_8  (*fun) (  struct env228*  ,    struct Pane_222 *  ,    int32_t  );
    struct env228 env;
};

struct envunion274 {
    enum Unit_8  (*fun) (  struct env246*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env246 env;
};

struct envunion275 {
    enum Unit_8  (*fun) (  struct env206*  ,    struct Pane_222 *  ,    struct StrView_27  );
    struct env206 env;
};

struct env266 {
    struct env243 envinst243;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env209 envinst209;
    struct env60 envinst60;
    ;
    struct env72 envinst72;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env255 envinst255;
    struct env228 envinst228;
    struct env246 envinst246;
    ;
    ;
    struct env206 envinst206;
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
    enum Unit_8  (*fun) (  struct env203*  ,    struct Screen_278 *  ,    struct Pane_222 *  ,    struct ScreenDims_281  ,    struct Config_252 *  );
    struct env203 env;
};

struct env276 {
    ;
    ;
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
};

static  enum CAllocator_10   idc282 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct Slice_285 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul288 (    int64_t  l195 ,    int64_t  r197 ) {
    return ( (  l195 ) * (  r197 ) );
}

static  const char* *   offset_dash_ptr287 (    const char* *  x339 ,    int64_t  count341 ) {
    const char*  temp289;
    return ( (const char* * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp289 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral290 (    size_t  x47 ) {
    return ( (int64_t ) (  x47 ) );
}

static  size_t   op_dash_sub291 (    size_t  l276 ,    size_t  r278 ) {
    return ( (  l276 ) - (  r278 ) );
}

static  struct Slice_285   get286 (  ) {
    return ( (struct Slice_285) { .f_ptr = ( (  offset_dash_ptr287 ) ( ( _global_argv ) ,  (  from_dash_integral290 ( 1 ) ) ) ) , .f_count = (  op_dash_sub291 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp292 (    size_t  l180 ,    size_t  r182 ) {
    return ( builtin_size_tcmp( (  l180 ) , (  r182 ) ) );
}

struct ConstStrIter_296 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_296   into_dash_iter298 (    struct ConstStrIter_296  self1583 ) {
    return (  self1583 );
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

static  uint8_t *   cast301 (    const char*  x357 ) {
    return ( (uint8_t * ) (  x357 ) );
}

static  uint8_t *   offset_dash_ptr302 (    uint8_t *  x339 ,    int64_t  count341 ) {
    uint8_t  temp303;
    return ( (uint8_t * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp303 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64304 (    size_t  x621 ) {
    return ( (int64_t ) (  x621 ) );
}

static  bool   eq305 (    uint8_t  l117 ,    uint8_t  r119 ) {
    return ( (  l117 ) == (  r119 ) );
}

static  uint8_t   cast306 (    int32_t  x357 ) {
    return ( (uint8_t ) (  x357 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp309 (    uint8_t  l170 ,    uint8_t  r172 ) {
    return ( builtin_uint8_tcmp( (  l170 ) , (  r172 ) ) );
}

static  uint8_t   from_dash_integral310 (    size_t  x62 ) {
    return ( (uint8_t ) (  x62 ) );
}

static  size_t   next_dash_char308 (    uint8_t *  p1181 ) {
    uint8_t  pb1182 = ( * (  p1181 ) );
    if ( (  cmp309 ( (  pb1182 ) , (  from_dash_integral310 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp309 ( (  pb1182 ) , (  from_dash_integral310 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp309 ( (  pb1182 ) , (  from_dash_integral310 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp309 ( (  pb1182 ) , (  from_dash_integral310 ( 192 ) ) ) != 0 ) ) {
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

static  struct Char_65   scan_dash_from_dash_mem307 (    uint8_t *  p1185 ) {
    size_t  clen1186 = ( (  next_dash_char308 ) ( (  p1185 ) ) );
    if ( (  cmp292 ( (  clen1186 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp312 = ( (  from_dash_string57 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp312);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p1185 ) , .f_num_dash_bytes = (  clen1186 ) } );
}

static  size_t   op_dash_add313 (    size_t  l271 ,    size_t  r273 ) {
    return ( (  l271 ) + (  r273 ) );
}

static  struct Maybe_299   next300 (    struct ConstStrIter_296 *  self1586 ) {
    uint8_t *  char_dash_ptr1587 = ( ( (  cast301 ) ( ( ( * (  self1586 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1588 = ( (  offset_dash_ptr302 ) ( (  char_dash_ptr1587 ) ,  ( (  size_dash_i64304 ) ( ( ( * (  self1586 ) ) .f_i ) ) ) ) );
    if ( (  eq305 ( ( * (  optr1588 ) ) , ( (  cast306 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    struct Char_65  char1589 = ( (  scan_dash_from_dash_mem307 ) ( (  optr1588 ) ) );
    (*  self1586 ) .f_i = (  op_dash_add313 ( ( ( * (  self1586 ) ) .f_i ) , ( (  char1589 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_299_Just ) ( (  char1589 ) ) );
}

static  size_t   reduce297 (    struct ConstStrIter_296  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct ConstStrIter_296  it1049 = ( (  into_dash_iter298 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1050 = ( (  next300 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_299_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_299_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  size_t   lam316 (    struct Char_65  dref1055 ,    size_t  x1057 ) {
    return (  op_dash_add313 ( (  x1057 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count295 (    struct ConstStrIter_296  it1054 ) {
    return ( (  reduce297 ) ( (  it1054 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam316 ) ) );
}

static  struct ConstStrIter_296   into_dash_iter318 (    const char*  self1580 ) {
    return ( (struct ConstStrIter_296) { .f_ogstr = (  self1580 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_296   chars317 (    const char*  self1595 ) {
    return ( (  into_dash_iter318 ) ( (  self1595 ) ) );
}

static  size_t   const_dash_str_dash_len294 (    const char*  s1838 ) {
    return ( (  count295 ) ( ( (  chars317 ) ( (  s1838 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str293 (    const char*  s2324 ) {
    size_t  len2325 = ( (  const_dash_str_dash_len294 ) ( (  s2324 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  cast301 ) ( (  s2324 ) ) ) , .f_count = (  len2325 ) } ) } );
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
    struct StrConcat_83  field0;
    size_t  field1;
};

static struct StrConcat_324 StrConcat_324_StrConcat (  struct StrConcat_83  field0 ,  size_t  field1 ) {
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

static  int32_t   size_dash_i32331 (    size_t  x657 ) {
    return ( (int32_t ) (  x657 ) );
}

static  enum Unit_8   print_dash_str330 (    struct StrView_27  self1241 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32331 ) ( ( ( (  self1241 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1241 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str336 (    size_t  self1341 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1341 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str335 (    struct StrConcat_84  self1220 ) {
    struct StrConcat_84  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str334 (    struct StrConcat_83  self1220 ) {
    struct StrConcat_83  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str333 (    struct StrConcat_324  self1220 ) {
    struct StrConcat_324  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str334 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1221 .field1 ) ) );
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

static  uint8_t   size_dash_u8345 (    size_t  x666 ) {
    return ( (uint8_t ) (  x666 ) );
}

static  size_t   op_dash_div346 (    size_t  l286 ,    size_t  r288 ) {
    return ( (  l286 ) / (  r288 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer344 (    uint8_t *  ptr708 ) {
    return ( (  size_dash_u8345 ) ( (  op_dash_div346 ( ( ( (size_t ) (  ptr708 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint32_t   size_dash_u32347 (    size_t  x660 ) {
    return ( (uint32_t ) (  x660 ) );
}

static  size_t   cast348 (    uint8_t *  x357 ) {
    return ( (size_t ) (  x357 ) );
}

static  struct CharDestructured_341   destructure343 (    struct Char_65  c1162 ) {
    if ( (  eq305 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer344 ) ( ( (  c1162 ) .f_ptr ) ) ) , (  from_dash_integral310 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_341_Scalar ) ( ( (struct Scalar_342) { .f_value = ( (  size_dash_u32347 ) ( ( ( (  cast348 ) ( ( (  c1162 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_341_Ref ) ( (  c1162 ) ) );
    }
}

static  struct Array_340   from_dash_listlike351 (    struct Array_340 *  self331 ) {
    return ( * (  self331 ) );
}

static  struct Array_340   unscalarize349 (    struct Scalar_342  scalar1165 ) {
    if ( (  cmp170 ( ( (  scalar1165 ) .f_value ) , (  from_dash_integral165 ( 128 ) ) ) == 2 ) ) {
        const char*  temp350 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp350);
        abort ( );
        ( Unit_8_Unit );
    }
    uint8_t  b1166 = ( (  u32_dash_u8144 ) ( ( (  scalar1165 ) .f_value ) ) );
    struct Array_340  temp352 = ( (struct Array_340) { ._arr = { (  b1166 ) , (  from_dash_integral310 ( 0 ) ) , (  from_dash_integral310 ( 0 ) ) , (  from_dash_integral310 ( 0 ) ) } } );
    return ( (  from_dash_listlike351 ) ( ( &temp352 ) ) );
}

static  uint8_t *   cast_dash_ptr353 (    struct Array_340 *  p360 ) {
    return ( (uint8_t * ) (  p360 ) );
}

static  struct Char_65   regularize339 (    struct Char_65  c1169 ,    struct Array_340 *  possible_dash_scalar_dash_mem1171 ) {
    struct CharDestructured_341  dref1172 = ( (  destructure343 ) ( (  c1169 ) ) );
    if ( dref1172.tag == CharDestructured_341_Ref_t ) {
        return ( dref1172 .stuff .CharDestructured_341_Ref_s .field0 );
    }
    else {
        if ( dref1172.tag == CharDestructured_341_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1171 ) = ( (  unscalarize349 ) ( ( dref1172 .stuff .CharDestructured_341_Scalar_s .field0 ) ) );
            return ( (struct Char_65) { .f_ptr = ( (  cast_dash_ptr353 ) ( (  possible_dash_scalar_dash_mem1171 ) ) ) , .f_num_dash_bytes = ( (  c1169 ) .f_num_dash_bytes ) } );
        }
    }
}

static  enum Unit_8   printf_dash_char338 (    struct Char_65  c1177 ) {
    struct Array_340  temp355;
    struct Array_340  temp354 = (  temp355 );
    struct Char_65  c1178 = ( (  regularize339 ) ( (  c1177 ) ,  ( &temp354 ) ) );
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32331 ) ( ( (  c1178 ) .f_num_dash_bytes ) ) ) ,  ( (  c1178 ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str337 (    struct Char_65  self1201 ) {
    ( (  printf_dash_char338 ) ( (  self1201 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str332 (    struct StrConcat_323  self1220 ) {
    struct StrConcat_323  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str333 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str329 (    struct StrConcat_328  self1220 ) {
    struct StrConcat_328  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str332 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str326 (    struct StrConcat_327  self1220 ) {
    struct StrConcat_327  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str329 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  uint8_t *   cast357 (    uint8_t *  x357 ) {
    return ( (uint8_t * ) (  x357 ) );
}

static  struct Char_65   from_dash_charlike356 (    uint8_t *  ptr1189 ,    size_t  num_dash_bytes1191 ) {
    uint8_t *  ptr1192 = ( ( (  cast357 ) ( (  ptr1189 ) ) ) );
    return ( (  scan_dash_from_dash_mem307 ) ( (  ptr1192 ) ) );
}

static  enum Unit_8   panic325 (    struct StrConcat_323  errmsg1261 ) {
    ( (  print_dash_str326 ) ( ( ( StrConcat_327_StrConcat ) ( ( ( StrConcat_328_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1261 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  const char*   undefined358 (  ) {
    const char*  temp359;
    return (  temp359 );
}

static  const char*   or_dash_fail321 (    struct Maybe_322  x1271 ,    struct StrConcat_323  errmsg1273 ) {
    struct Maybe_322  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_322_None_t ) {
        ( (  panic325 ) ( (  errmsg1273 ) ) );
        return ( (  undefined358 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_322_Just_t ) {
            return ( dref1274 .stuff .Maybe_322_Just_s .field0 );
        }
    }
}

static  struct Maybe_322   try_dash_get360 (    struct Slice_285  slice1946 ,    size_t  i1948 ) {
    if ( ( (  cmp292 ( (  i1948 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1948 ) , ( (  slice1946 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_322) { .tag = Maybe_322_None_t } );
    }
    const char* *  elem_dash_ptr1949 = ( (  offset_dash_ptr287 ) ( ( (  slice1946 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1948 ) ) ) ) );
    return ( ( Maybe_322_Just ) ( ( * (  elem_dash_ptr1949 ) ) ) );
}

static  const char*   get320 (    struct Slice_285  slice1952 ,    size_t  i1954 ) {
    return ( (  or_dash_fail321 ) ( ( (  try_dash_get360 ) ( (  slice1952 ) ,  (  i1954 ) ) ) ,  ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1954 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1952 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get319 (    struct Slice_285  self1965 ,    size_t  idx1967 ) {
    return ( (  get320 ) ( (  self1965 ) ,  (  idx1967 ) ) );
}

struct Maybe_361 {
    enum {
        Maybe_361_None_t,
        Maybe_361_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_106  field0;
        } Maybe_361_Just_s;
    } stuff;
};

static struct Maybe_361 Maybe_361_Just (  struct TextBuf_106  field0 ) {
    return ( struct Maybe_361 ) { .tag = Maybe_361_Just_t, .stuff = { .Maybe_361_Just_s = { .field0 = field0 } } };
};

struct envunion363 {
    struct Maybe_361  (*fun) (  struct env114*  ,    enum CAllocator_10  ,    struct StrView_27  );
    struct env114 env;
};

static  void *   cast_dash_ptr376 (    struct Line_16 * *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of377 (    struct Line_16 *  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  struct Line_16 *   zeroed374 (  ) {
    struct Line_16 *  temp375;
    struct Line_16 *  x597 = (  temp375 );
    ( ( memset ) ( ( (  cast_dash_ptr376 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of377 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  struct Line_16 *   null_dash_ptr373 (  ) {
    return ( (  zeroed374 ) ( ) );
}

static  struct Slice_15   empty372 (  ) {
    return ( (struct Slice_15) { .f_ptr = ( (  null_dash_ptr373 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_14   mk371 (    enum CAllocator_10  al2207 ) {
    struct Slice_15  elements2208 = ( (  empty372 ) ( ) );
    return ( (struct List_14) { .f_al = (  al2207 ) , .f_elements = (  elements2208 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env381 {
    struct List_14 *  list2274;
    struct env12 envinst12;
};

struct envunion382 {
    enum Unit_8  (*fun) (  struct env381*  ,    struct Line_16  );
    struct env381 env;
};

struct ArrayIter_383 {
    struct Array_54  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_383   into_dash_iter385 (    struct Array_54  self2539 ) {
    return ( (struct ArrayIter_383) { .f_backing = (  self2539 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_386 {
    enum {
        Maybe_386_None_t,
        Maybe_386_Just_t,
    } tag;
    union {
        struct {
            struct Line_16  field0;
        } Maybe_386_Just_s;
    } stuff;
};

static struct Maybe_386 Maybe_386_Just (  struct Line_16  field0 ) {
    return ( struct Maybe_386 ) { .tag = Maybe_386_Just_t, .stuff = { .Maybe_386_Just_s = { .field0 = field0 } } };
};

struct StrConcat_392 {
    struct StrConcat_83  field0;
    int32_t  field1;
};

static struct StrConcat_392 StrConcat_392_StrConcat (  struct StrConcat_83  field0 ,  int32_t  field1 ) {
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

static  enum Unit_8   print_dash_str399 (    int32_t  self1335 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1335 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str398 (    struct StrConcat_392  self1220 ) {
    struct StrConcat_392  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str334 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str399 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str397 (    struct StrConcat_391  self1220 ) {
    struct StrConcat_391  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str398 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str396 (    struct StrConcat_395  self1220 ) {
    struct StrConcat_395  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str397 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str393 (    struct StrConcat_394  self1220 ) {
    struct StrConcat_394  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str396 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic390 (    struct StrConcat_391  errmsg1261 ) {
    ( (  print_dash_str393 ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_395_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1261 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Line_16 *   cast_dash_ptr400 (    struct Array_54 *  p360 ) {
    return ( (struct Line_16 * ) (  p360 ) );
}

static  struct Line_16 *   offset_dash_ptr401 (    struct Line_16 *  x339 ,    int64_t  count341 ) {
    struct Line_16  temp402;
    return ( (struct Line_16 * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp402 ) ) ) ) ) ) ) ) );
}

static  struct Line_16 *   get_dash_ptr389 (    struct Array_54 *  arr2463 ,    size_t  i2466 ) {
    if ( ( (  cmp292 ( (  i2466 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2466 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2466 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  p2467 = ( ( (  cast_dash_ptr400 ) ( (  arr2463 ) ) ) );
    return ( (  offset_dash_ptr401 ) ( (  p2467 ) ,  ( (int64_t ) (  i2466 ) ) ) );
}

static  struct Line_16   get388 (    struct Array_54 *  arr2470 ,    size_t  i2473 ) {
    return ( * ( (  get_dash_ptr389 ) ( (  arr2470 ) ,  (  i2473 ) ) ) );
}

static  struct Maybe_386   next387 (    struct ArrayIter_383 *  self2546 ) {
    if ( (  cmp292 ( ( ( * (  self2546 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
    }
    struct Line_16  e2548 = ( (  get388 ) ( ( & ( ( * (  self2546 ) ) .f_backing ) ) ,  ( ( * (  self2546 ) ) .f_cur ) ) );
    (*  self2546 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2546 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_386_Just ) ( (  e2548 ) ) );
}

static  enum Unit_8   for_dash_each380 (    struct Array_54  iterable1024 ,   struct envunion382  fun1026 ) {
    struct ArrayIter_383  temp384 = ( (  into_dash_iter385 ) ( (  iterable1024 ) ) );
    struct ArrayIter_383 *  it1027 = ( &temp384 );
    while ( ( true ) ) {
        struct Maybe_386  dref1028 = ( (  next387 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_386_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_386_Just_t ) {
                struct envunion382  temp403 = (  fun1026 );
                ( temp403.fun ( &temp403.env ,  ( dref1028 .stuff .Maybe_386_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  bool   eq409 (    size_t  l127 ,    size_t  r129 ) {
    return ( (  l127 ) == (  r129 ) );
}

struct TypeSize_412 {
    size_t  f_size;
};

static  struct TypeSize_412   get_dash_typesize411 (  ) {
    struct Line_16  temp413;
    return ( (struct TypeSize_412) { .f_size = ( sizeof( ( (  temp413 ) ) ) ) } );
}

static  struct Line_16 *   cast_dash_ptr414 (    void *  p360 ) {
    return ( (struct Line_16 * ) (  p360 ) );
}

static  size_t   op_dash_mul415 (    size_t  l281 ,    size_t  r283 ) {
    return ( (  l281 ) * (  r283 ) );
}

static  struct Slice_15   allocate410 (    enum CAllocator_10  dref2138 ,    size_t  count2140 ) {
    if (!(  dref2138 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2141 = ( ( ( (  get_dash_typesize411 ) ( ) ) ) .f_size );
    struct Line_16 *  ptr2142 = ( (  cast_dash_ptr414 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2141 ) , (  count2140 ) ) ) ) ) ) );
    return ( (struct Slice_15) { .f_ptr = (  ptr2142 ) , .f_count = (  count2140 ) } );
}

struct env416 {
    ;
    struct Slice_15  new_dash_slice2218;
    ;
};

struct Tuple2_418 {
    struct Line_16  field0;
    int32_t  field1;
};

static struct Tuple2_418 Tuple2_418_Tuple2 (  struct Line_16  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_418 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion417 {
    enum Unit_8  (*fun) (  struct env416*  ,    struct Tuple2_418  );
    struct env416 env;
};

static  struct Line_16 *   get_dash_ptr421 (    struct Slice_15  slice1940 ,    size_t  i1942 ) {
    if ( ( (  cmp292 ( (  i1942 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1942 ) , ( (  slice1940 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1942 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1940 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  elem_dash_ptr1943 = ( (  offset_dash_ptr401 ) ( ( (  slice1940 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1942 ) ) ) ) );
    return (  elem_dash_ptr1943 );
}

static  enum Unit_8   set420 (    struct Slice_15  slice1957 ,    size_t  i1959 ,    struct Line_16  x1961 ) {
    struct Line_16 *  ep1962 = ( (  get_dash_ptr421 ) ( (  slice1957 ) ,  (  i1959 ) ) );
    (*  ep1962 ) = (  x1961 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size422 (    int32_t  x636 ) {
    return ( (size_t ) ( (int64_t ) (  x636 ) ) );
}

static  enum Unit_8   lam419 (   struct env416* env ,    struct Tuple2_418  dref2219 ) {
    return ( (  set420 ) ( ( env->new_dash_slice2218 ) ,  ( (  i32_dash_size422 ) ( ( dref2219 .field1 ) ) ) ,  ( dref2219 .field0 ) ) );
}

struct SliceIter_425 {
    struct Slice_15  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_426 {
    int32_t  f_from;
};

struct Zip_424 {
    struct SliceIter_425  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

static  struct Zip_424   into_dash_iter428 (    struct Zip_424  self861 ) {
    return (  self861 );
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

static  struct Maybe_386   next431 (    struct SliceIter_425 *  self2026 ) {
    size_t  off2027 = ( ( * (  self2026 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2026 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
    }
    struct Line_16  elem2028 = ( * ( (  offset_dash_ptr401 ) ( ( ( ( * (  self2026 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2027 ) ) ) ) ) );
    (*  self2026 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_386_Just ) ( (  elem2028 ) ) );
}

static  struct Maybe_155   next432 (    struct FromIter_426 *  dref838 ) {
    int32_t  v840 = ( ( (* dref838 ) ) .f_from );
    (* dref838 ) .f_from = (  op_dash_add159 ( ( ( (* dref838 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_155_Just ) ( (  v840 ) ) );
}

static  struct Maybe_429   next430 (    struct Zip_424 *  self864 ) {
    struct Zip_424  copy865 = ( * (  self864 ) );
    while ( ( true ) ) {
        struct Maybe_386  dref866 = ( (  next431 ) ( ( & ( (  copy865 ) .f_left_dash_it ) ) ) );
        if ( dref866.tag == Maybe_386_None_t ) {
            return ( (struct Maybe_429) { .tag = Maybe_429_None_t } );
        }
        else {
            if ( dref866.tag == Maybe_386_Just_t ) {
                struct Maybe_155  dref868 = ( (  next432 ) ( ( & ( (  copy865 ) .f_right_dash_it ) ) ) );
                if ( dref868.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_429) { .tag = Maybe_429_None_t } );
                }
                else {
                    if ( dref868.tag == Maybe_155_Just_t ) {
                        ( (  next431 ) ( ( & ( ( * (  self864 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self864 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_429_Just ) ( ( ( Tuple2_418_Tuple2 ) ( ( dref866 .stuff .Maybe_386_Just_s .field0 ) ,  ( dref868 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each423 (    struct Zip_424  iterable1024 ,   struct envunion417  fun1026 ) {
    struct Zip_424  temp427 = ( (  into_dash_iter428 ) ( (  iterable1024 ) ) );
    struct Zip_424 *  it1027 = ( &temp427 );
    while ( ( true ) ) {
        struct Maybe_429  dref1028 = ( (  next430 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_429_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_429_Just_t ) {
                struct envunion417  temp433 = (  fun1026 );
                ( temp433.fun ( &temp433.env ,  ( dref1028 .stuff .Maybe_429_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_425   into_dash_iter435 (    struct Slice_15  self2020 ) {
    return ( (struct SliceIter_425) { .f_slice = (  self2020 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_426   into_dash_iter436 (    struct FromIter_426  it836 ) {
    return (  it836 );
}

static  struct Zip_424   zip434 (    struct Slice_15  left872 ,    struct FromIter_426  right874 ) {
    struct SliceIter_425  left_dash_it875 = ( (  into_dash_iter435 ) ( (  left872 ) ) );
    struct FromIter_426  right_dash_it876 = ( (  into_dash_iter436 ) ( (  right874 ) ) );
    return ( (struct Zip_424) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

static  struct FromIter_426   from437 (    int32_t  f833 ) {
    return ( (struct FromIter_426) { .f_from = (  f833 ) } );
}

static  void *   cast_dash_ptr439 (    struct Line_16 *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  enum Unit_8   free438 (    enum CAllocator_10  dref2144 ,    struct Slice_15  slice2146 ) {
    if (!(  dref2144 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr439 ) ( ( (  slice2146 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full408 (   struct env2* env ,    struct List_14 *  list2217 ) {
    if ( (  eq409 ( ( ( * (  list2217 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2217 ) .f_elements = ( (  allocate410 ) ( ( ( * (  list2217 ) ) .f_al ) ,  ( env->starting_dash_size2212 ) ) );
    } else {
        if ( (  eq409 ( ( ( * (  list2217 ) ) .f_count ) , ( ( ( * (  list2217 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_15  new_dash_slice2218 = ( (  allocate410 ) ( ( ( * (  list2217 ) ) .f_al ) ,  (  op_dash_mul415 ( ( ( * (  list2217 ) ) .f_count ) , ( env->growth_dash_factor2213 ) ) ) ) );
            struct env416 envinst416 = {
                .new_dash_slice2218 =  new_dash_slice2218 ,
            };
            struct envunion417  fun2222 = ( (struct envunion417){ .fun = (  enum Unit_8  (*) (  struct env416*  ,    struct Tuple2_418  ) )lam419 , .env =  envinst416 } );
            ( (  for_dash_each423 ) ( ( (  zip434 ) ( ( ( * (  list2217 ) ) .f_elements ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2222 ) ) );
            ( (  free438 ) ( ( ( * (  list2217 ) ) .f_al ) ,  ( ( * (  list2217 ) ) .f_elements ) ) );
            (*  list2217 ) .f_elements = (  new_dash_slice2218 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add406 (   struct env12* env ,    struct List_14 *  list2225 ,    struct Line_16  elem2227 ) {
    struct envunion13  temp407 = ( (struct envunion13){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full408 , .env =  env->envinst2 } );
    ( temp407.fun ( &temp407.env ,  (  list2225 ) ) );
    ( (  set420 ) ( ( ( * (  list2225 ) ) .f_elements ) ,  ( ( * (  list2225 ) ) .f_count ) ,  (  elem2227 ) ) );
    (*  list2225 ) .f_count = (  op_dash_add313 ( ( ( * (  list2225 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam404 (   struct env381* env ,    struct Line_16  x2278 ) {
    struct envunion49  temp405 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add406 , .env =  env->envinst12 } );
    return ( temp405.fun ( &temp405.env ,  ( env->list2274 ) ,  (  x2278 ) ) );
}

static  enum Unit_8   add_dash_all379 (   struct env48* env ,    struct List_14 *  list2274 ,    struct Array_54  it2276 ) {
    struct env381 envinst381 = {
        .list2274 =  list2274 ,
        .envinst12 = env->envinst12 ,
    };
    ( (  for_dash_each380 ) ( (  it2276 ) ,  ( (struct envunion382){ .fun = (  enum Unit_8  (*) (  struct env381*  ,    struct Line_16  ) )lam404 , .env =  envinst381 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_14   from_dash_iter369 (   struct env52* env ,    struct Array_54  iter2315 ,    enum CAllocator_10  al2317 ) {
    struct List_14  temp370 = ( (  mk371 ) ( (  al2317 ) ) );
    struct List_14 *  list2318 = ( &temp370 );
    struct envunion53  temp378 = ( (struct envunion53){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_14 *  ,    struct Array_54  ) )add_dash_all379 , .env =  env->envinst48 } );
    ( temp378.fun ( &temp378.env ,  (  list2318 ) ,  (  iter2315 ) ) );
    return ( * (  list2318 ) );
}

static  struct Array_54   from_dash_listlike440 (    struct Array_54 *  self331 ) {
    return ( * (  self331 ) );
}

static  void *   cast_dash_ptr448 (    struct Highlight_19 * *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of449 (    struct Highlight_19 *  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  struct Highlight_19 *   zeroed446 (  ) {
    struct Highlight_19 *  temp447;
    struct Highlight_19 *  x597 = (  temp447 );
    ( ( memset ) ( ( (  cast_dash_ptr448 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of449 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  struct Highlight_19 *   null_dash_ptr445 (  ) {
    return ( (  zeroed446 ) ( ) );
}

static  struct Slice_18   empty444 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr445 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk443 (    enum CAllocator_10  al2207 ) {
    struct Slice_18  elements2208 = ( (  empty444 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2207 ) , .f_elements = (  elements2208 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_16   mk_dash_line442 (    struct List_9  initial3766 ) {
    return ( (struct Line_16) { .f_line = (  initial3766 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk443 ) ( ( (  initial3766 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr455 (    uint8_t * *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of456 (    uint8_t *  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  uint8_t *   zeroed453 (  ) {
    uint8_t *  temp454;
    uint8_t *  x597 = (  temp454 );
    ( ( memset ) ( ( (  cast_dash_ptr455 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of456 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  uint8_t *   null_dash_ptr452 (  ) {
    return ( (  zeroed453 ) ( ) );
}

static  struct Slice_11   empty451 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr452 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk450 (    enum CAllocator_10  al2207 ) {
    struct Slice_11  elements2208 = ( (  empty451 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2207 ) , .f_elements = (  elements2208 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr463 (    struct Changeset_32 * *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of464 (    struct Changeset_32 *  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  struct Changeset_32 *   zeroed461 (  ) {
    struct Changeset_32 *  temp462;
    struct Changeset_32 *  x597 = (  temp462 );
    ( ( memset ) ( ( (  cast_dash_ptr463 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of464 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  struct Changeset_32 *   null_dash_ptr460 (  ) {
    return ( (  zeroed461 ) ( ) );
}

static  struct Slice_31   empty459 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr460 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk458 (    enum CAllocator_10  al2207 ) {
    struct Slice_31  elements2208 = ( (  empty459 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2207 ) , .f_elements = (  elements2208 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_107   mk_dash_actions457 (    enum CAllocator_10  al3754 ) {
    return ( (struct Actions_107) { .f_list = ( (  mk458 ) ( (  al3754 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_108_NoChangeset ) } );
}

static  struct TextBuf_106   mk367 (   struct env112* env ,    enum CAllocator_10  al3868 ) {
    struct envunion113  temp368 = ( (struct envunion113){ .fun = (  struct List_14  (*) (  struct env52*  ,    struct Array_54  ,    enum CAllocator_10  ) )from_dash_iter369 , .env =  env->envinst52 } );
    struct Array_54  temp441 = ( (struct Array_54) { ._arr = { ( (  mk_dash_line442 ) ( ( (  mk450 ) ( (  al3868 ) ) ) ) ) } } );
    return ( (struct TextBuf_106) { .f_al = (  al3868 ) , .f_buf = ( temp368.fun ( &temp368.env ,  ( (  from_dash_listlike440 ) ( ( &temp441 ) ) ) ,  (  al3868 ) ) ) , .f_actions = ( (  mk_dash_actions457 ) ( (  al3868 ) ) ) , .f_filename = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_filetype = ( Filetype_109_Text ) } );
}

struct StrViewIter_469 {
    struct StrView_27  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_469   into_dash_iter470 (    struct StrViewIter_469  self1233 ) {
    return (  self1233 );
}

static  struct StrViewIter_469   into_dash_iter472 (    struct StrView_27  self1230 ) {
    return ( (struct StrViewIter_469) { .f_ds = (  self1230 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_469   chars471 (    struct StrView_27  self1244 ) {
    return ( (  into_dash_iter472 ) ( (  self1244 ) ) );
}

static  struct Maybe_299   next474 (    struct StrViewIter_469 *  self1236 ) {
    if ( (  cmp292 ( ( ( * (  self1236 ) ) .f_i ) , ( ( ( ( * (  self1236 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    uint8_t *  char_dash_ptr1237 = ( ( (  offset_dash_ptr302 ) ( ( (  cast357 ) ( ( ( ( ( * (  self1236 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64304 ) ( ( ( * (  self1236 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1238 = ( (  scan_dash_from_dash_mem307 ) ( (  char_dash_ptr1237 ) ) );
    (*  self1236 ) .f_i = (  op_dash_add313 ( ( ( * (  self1236 ) ) .f_i ) , ( (  char1238 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_299_Just ) ( (  char1238 ) ) );
}

static  size_t   min478 (    size_t  l1285 ,    size_t  r1287 ) {
    if ( (  cmp292 ( (  l1285 ) , (  r1287 ) ) == 0 ) ) {
        return (  l1285 );
    } else {
        return (  r1287 );
    }
}

static  struct Slice_11   subslice477 (    struct Slice_11  slice1974 ,    size_t  from1976 ,    size_t  to1978 ) {
    uint8_t *  begin_dash_ptr1979 = ( (  offset_dash_ptr302 ) ( ( (  slice1974 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from1976 ) ) ) ) );
    if ( ( (  cmp292 ( (  from1976 ) , (  to1978 ) ) != 0 ) || (  cmp292 ( (  from1976 ) , ( (  slice1974 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1980 = (  op_dash_sub291 ( ( (  min478 ) ( (  to1978 ) ,  ( (  slice1974 ) .f_count ) ) ) , (  from1976 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  count1980 ) } );
}

static  struct Slice_11   from476 (    struct Slice_11  slice1983 ,    size_t  from1985 ) {
    return ( (  subslice477 ) ( (  slice1983 ) ,  (  from1985 ) ,  ( (  slice1983 ) .f_count ) ) );
}

static  struct StrView_27   byte_dash_substr_dash_from475 (    struct StrView_27  s2381 ,    size_t  from2383 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from476 ) ( ( (  s2381 ) .f_contents ) ,  (  from2383 ) ) ) } );
}

static  struct StrView_27   drop_dash_while467 (    struct StrView_27  sv2410 ,    bool (*  fun2412 )(    struct Char_65  ) ) {
    size_t  from2413 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_469  temp468 =  into_dash_iter470 ( ( (  chars471 ) ( (  sv2410 ) ) ) );
    while (true) {
        struct Maybe_299  __cond473 =  next474 (&temp468);
        if (  __cond473 .tag == 0 ) {
            break;
        }
        struct Char_65  c2415 =  __cond473 .stuff .Maybe_299_Just_s .field0;
        if ( ( ! ( (  fun2412 ) ( (  c2415 ) ) ) ) ) {
            break;
        }
        from2413 = (  op_dash_add313 ( (  from2413 ) , ( (  c2415 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from475 ) ( (  sv2410 ) ,  (  from2413 ) ) );
}

static  struct Array_340   uninit_dash_buf482 (  ) {
    struct Array_340  temp483;
    return (  temp483 );
}

static  int64_t   op_dash_add485 (    int64_t  l185 ,    int64_t  r187 ) {
    return ( (  l185 ) + (  r187 ) );
}

static  bool   eq480 (    struct Char_65  l1369 ,    struct Char_65  r1371 ) {
    if ( ( !  eq409 ( ( (  l1369 ) .f_num_dash_bytes ) , ( (  r1371 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Array_340  temp481 = ( (  uninit_dash_buf482 ) ( ) );
    struct Char_65  lc1372 = ( (  regularize339 ) ( (  l1369 ) ,  ( &temp481 ) ) );
    struct Array_340  temp484 = ( (  uninit_dash_buf482 ) ( ) );
    struct Char_65  rc1373 = ( (  regularize339 ) ( (  r1371 ) ,  ( &temp484 ) ) );
    int64_t  i1374 = (  from_dash_integral290 ( 0 ) );
    while ( (  cmp292 ( ( (size_t ) (  i1374 ) ) , ( (  lc1372 ) .f_num_dash_bytes ) ) == 0 ) ) {
        if ( ( !  eq305 ( ( * ( (uint8_t * ) ( ( (void*) ( (  lc1372 ) .f_ptr ) ) + (  i1374 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( (  rc1373 ) .f_ptr ) ) + (  i1374 ) ) ) ) ) ) ) {
            return ( false );
        }
        i1374 = (  op_dash_add485 ( (  i1374 ) , (  from_dash_integral290 ( 1 ) ) ) );
    }
    return ( true );
}

static  bool   lam479 (    struct Char_65  c3778 ) {
    return (  eq480 ( (  c3778 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) );
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

static  uint8_t   or_dash_fail488 (    struct Maybe_489  x1271 ,    struct StrConcat_323  errmsg1273 ) {
    struct Maybe_489  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_489_None_t ) {
        ( (  panic325 ) ( (  errmsg1273 ) ) );
        return ( (  undefined490 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_489_Just_t ) {
            return ( dref1274 .stuff .Maybe_489_Just_s .field0 );
        }
    }
}

static  struct Maybe_489   try_dash_get492 (    struct Slice_11  slice1946 ,    size_t  i1948 ) {
    if ( ( (  cmp292 ( (  i1948 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1948 ) , ( (  slice1946 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_489) { .tag = Maybe_489_None_t } );
    }
    uint8_t *  elem_dash_ptr1949 = ( (  offset_dash_ptr302 ) ( ( (  slice1946 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1948 ) ) ) ) );
    return ( ( Maybe_489_Just ) ( ( * (  elem_dash_ptr1949 ) ) ) );
}

static  uint8_t   get487 (    struct Slice_11  slice1952 ,    size_t  i1954 ) {
    return ( (  or_dash_fail488 ) ( ( (  try_dash_get492 ) ( (  slice1952 ) ,  (  i1954 ) ) ) ,  ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1954 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1952 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get486 (    struct Slice_11  self1965 ,    size_t  idx1967 ) {
    return ( (  get487 ) ( (  self1965 ) ,  (  idx1967 ) ) );
}

static  uint8_t   ascii_dash_u8493 (    char  c1406 ) {
    return ( ( (uint8_t ) (  c1406 ) ) );
}

static  char   from_dash_charlike494 (    uint8_t *  ptr372 ,    size_t  num_dash_bytes374 ) {
    if ( ( !  eq409 ( (  num_dash_bytes374 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp495 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp495);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr372 ) ) ) );
}

static  struct StrView_27   byte_dash_substr496 (    struct StrView_27  s2374 ,    size_t  from2376 ,    size_t  to2378 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice477 ) ( ( (  s2374 ) .f_contents ) ,  (  from2376 ) ,  (  to2378 ) ) ) } );
}

static  struct Maybe_80   extension466 (    struct StrView_27  path3776 ) {
    struct StrView_27  path3779 = ( (  drop_dash_while467 ) ( (  path3776 ) ,  (  lam479 ) ) );
    size_t  i3780 = ( ( (  path3779 ) .f_contents ) .f_count );
    while ( (  cmp292 ( (  i3780 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i3780 = (  op_dash_sub291 ( (  i3780 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq305 ( (  elem_dash_get486 ( ( (  path3779 ) .f_contents ) , (  i3780 ) ) ) , ( (  ascii_dash_u8493 ) ( ( (  from_dash_charlike494 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq409 ( (  i3780 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  ext3781 = ( (  byte_dash_substr496 ) ( (  path3779 ) ,  (  op_dash_add313 ( (  i3780 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path3779 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_80_Just ) ( (  ext3781 ) ) );
}

struct SliceIter_501 {
    struct Slice_11  f_slice;
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
    bool (*  fun1076 )(    struct Tuple2_502  );
};

struct envunion505 {
    bool  (*fun) (  struct env504*  ,    struct Tuple2_502  ,    bool  );
    struct env504 env;
};

static  struct Zip_500   into_dash_iter506 (    struct Zip_500  self861 ) {
    return (  self861 );
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

static  struct Maybe_489   next509 (    struct SliceIter_501 *  self2026 ) {
    size_t  off2027 = ( ( * (  self2026 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2026 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_489) { .tag = Maybe_489_None_t } );
    }
    uint8_t  elem2028 = ( * ( (  offset_dash_ptr302 ) ( ( ( ( * (  self2026 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2027 ) ) ) ) ) );
    (*  self2026 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_489_Just ) ( (  elem2028 ) ) );
}

static  struct Maybe_507   next508 (    struct Zip_500 *  self864 ) {
    struct Zip_500  copy865 = ( * (  self864 ) );
    while ( ( true ) ) {
        struct Maybe_489  dref866 = ( (  next509 ) ( ( & ( (  copy865 ) .f_left_dash_it ) ) ) );
        if ( dref866.tag == Maybe_489_None_t ) {
            return ( (struct Maybe_507) { .tag = Maybe_507_None_t } );
        }
        else {
            if ( dref866.tag == Maybe_489_Just_t ) {
                struct Maybe_489  dref868 = ( (  next509 ) ( ( & ( (  copy865 ) .f_right_dash_it ) ) ) );
                if ( dref868.tag == Maybe_489_None_t ) {
                    return ( (struct Maybe_507) { .tag = Maybe_507_None_t } );
                }
                else {
                    if ( dref868.tag == Maybe_489_Just_t ) {
                        ( (  next509 ) ( ( & ( ( * (  self864 ) ) .f_left_dash_it ) ) ) );
                        ( (  next509 ) ( ( & ( ( * (  self864 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_507_Just ) ( ( ( Tuple2_502_Tuple2 ) ( ( dref866 .stuff .Maybe_489_Just_s .field0 ) ,  ( dref868 .stuff .Maybe_489_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce503 (    struct Zip_500  iterable1043 ,    bool  base1045 ,   struct envunion505  fun1047 ) {
    bool  x1048 = (  base1045 );
    struct Zip_500  it1049 = ( (  into_dash_iter506 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_507  dref1050 = ( (  next508 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_507_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_507_Just_t ) {
                struct envunion505  temp510 = (  fun1047 );
                x1048 = ( temp510.fun ( &temp510.env ,  ( dref1050 .stuff .Maybe_507_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  bool   lam513 (   struct env504* env ,    struct Tuple2_502  e1078 ,    bool  x1080 ) {
    return ( ( ( env->fun1076 ) ( (  e1078 ) ) ) && (  x1080 ) );
}

static  bool   all499 (    struct Zip_500  it1074 ,    bool (*  fun1076 )(    struct Tuple2_502  ) ) {
    struct env504 envinst504 = {
        .fun1076 =  fun1076 ,
    };
    return ( (  reduce503 ) ( (  it1074 ) ,  ( true ) ,  ( (struct envunion505){ .fun = (  bool  (*) (  struct env504*  ,    struct Tuple2_502  ,    bool  ) )lam513 , .env =  envinst504 } ) ) );
}

static  struct SliceIter_501   into_dash_iter515 (    struct Slice_11  self2020 ) {
    return ( (struct SliceIter_501) { .f_slice = (  self2020 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_500   zip514 (    struct Slice_11  left872 ,    struct Slice_11  right874 ) {
    struct SliceIter_501  left_dash_it875 = ( (  into_dash_iter515 ) ( (  left872 ) ) );
    struct SliceIter_501  right_dash_it876 = ( (  into_dash_iter515 ) ( (  right874 ) ) );
    return ( (struct Zip_500) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

static  bool   lam516 (    struct Tuple2_502  dref2060 ) {
    return (  eq305 ( ( dref2060 .field0 ) , ( dref2060 .field1 ) ) );
}

static  bool   eq498 (    struct Slice_11  l2057 ,    struct Slice_11  r2059 ) {
    if ( ( !  eq409 ( ( (  l2057 ) .f_count ) , ( (  r2059 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all499 ) ( ( (  zip514 ) ( (  l2057 ) ,  (  r2059 ) ) ) ,  (  lam516 ) ) );
}

static  bool   eq497 (    struct StrView_27  l2418 ,    struct StrView_27  r2420 ) {
    return (  eq498 ( ( (  l2418 ) .f_contents ) , ( (  r2420 ) .f_contents ) ) );
}

static  enum Filetype_109   detect_dash_filetype_dash_from_dash_filename465 (    struct StrView_27  filename3773 ) {
    struct Maybe_80  mext3782 = ( (  extension466 ) ( (  filename3773 ) ) );
    struct Maybe_80  dref3783 = (  mext3782 );
    if ( dref3783.tag == Maybe_80_None_t ) {
        return ( Filetype_109_Text );
    }
    else {
        if ( dref3783.tag == Maybe_80_Just_t ) {
            if ( ( (  eq497 ( ( dref3783 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) ) ) || (  eq497 ( ( dref3783 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"kkc" ) ,  ( 3 ) ) ) ) ) ) ) {
                return ( Filetype_109_KC );
            } else {
                if ( (  eq497 ( ( dref3783 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                    return ( Filetype_109_Markdown );
                } else {
                    if ( (  eq497 ( ( dref3783 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"gcode" ) ,  ( 5 ) ) ) ) ) ) {
                        return ( Filetype_109_GCode );
                    } else {
                        return ( Filetype_109_Text );
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

static  uint8_t *   cast_dash_ptr522 (    void *  p360 ) {
    return ( (uint8_t * ) (  p360 ) );
}

static  struct Slice_11   allocate518 (    enum CAllocator_10  dref2138 ,    size_t  count2140 ) {
    if (!(  dref2138 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2141 = ( ( ( (  get_dash_typesize519 ) ( ) ) ) .f_size );
    uint8_t *  ptr2142 = ( (  cast_dash_ptr522 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2141 ) , (  count2140 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr2142 ) , .f_count = (  count2140 ) } );
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

static  enum Unit_8   print_dash_str530 (    struct StrConcat_525  self1220 ) {
    struct StrConcat_525  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str333 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str529 (    struct StrConcat_528  self1220 ) {
    struct StrConcat_528  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str530 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str526 (    struct StrConcat_527  self1220 ) {
    struct StrConcat_527  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str529 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic524 (    struct StrConcat_525  errmsg1261 ) {
    ( (  print_dash_str526 ) ( ( ( StrConcat_527_StrConcat ) ( ( ( StrConcat_528_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1261 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Zip_532 {
    struct SliceIter_501  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

struct env533 {
    ;
    struct Slice_11  dest2051;
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

static  struct Zip_532   into_dash_iter537 (    struct Zip_532  self861 ) {
    return (  self861 );
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

static  struct Maybe_538   next539 (    struct Zip_532 *  self864 ) {
    struct Zip_532  copy865 = ( * (  self864 ) );
    while ( ( true ) ) {
        struct Maybe_489  dref866 = ( (  next509 ) ( ( & ( (  copy865 ) .f_left_dash_it ) ) ) );
        if ( dref866.tag == Maybe_489_None_t ) {
            return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
        }
        else {
            if ( dref866.tag == Maybe_489_Just_t ) {
                struct Maybe_155  dref868 = ( (  next432 ) ( ( & ( (  copy865 ) .f_right_dash_it ) ) ) );
                if ( dref868.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
                }
                else {
                    if ( dref868.tag == Maybe_155_Just_t ) {
                        ( (  next509 ) ( ( & ( ( * (  self864 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self864 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_538_Just ) ( ( ( Tuple2_535_Tuple2 ) ( ( dref866 .stuff .Maybe_489_Just_s .field0 ) ,  ( dref868 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each531 (    struct Zip_532  iterable1024 ,   struct envunion534  fun1026 ) {
    struct Zip_532  temp536 = ( (  into_dash_iter537 ) ( (  iterable1024 ) ) );
    struct Zip_532 *  it1027 = ( &temp536 );
    while ( ( true ) ) {
        struct Maybe_538  dref1028 = ( (  next539 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_538_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_538_Just_t ) {
                struct envunion534  temp540 = (  fun1026 );
                ( temp540.fun ( &temp540.env ,  ( dref1028 .stuff .Maybe_538_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_532   zip541 (    struct Slice_11  left872 ,    struct FromIter_426  right874 ) {
    struct SliceIter_501  left_dash_it875 = ( (  into_dash_iter515 ) ( (  left872 ) ) );
    struct FromIter_426  right_dash_it876 = ( (  into_dash_iter436 ) ( (  right874 ) ) );
    return ( (struct Zip_532) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

static  uint8_t *   get_dash_ptr544 (    struct Slice_11  slice1940 ,    size_t  i1942 ) {
    if ( ( (  cmp292 ( (  i1942 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1942 ) , ( (  slice1940 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1942 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1940 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1943 = ( (  offset_dash_ptr302 ) ( ( (  slice1940 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1942 ) ) ) ) );
    return (  elem_dash_ptr1943 );
}

static  enum Unit_8   set543 (    struct Slice_11  slice1957 ,    size_t  i1959 ,    uint8_t  x1961 ) {
    uint8_t *  ep1962 = ( (  get_dash_ptr544 ) ( (  slice1957 ) ,  (  i1959 ) ) );
    (*  ep1962 ) = (  x1961 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam542 (   struct env533* env ,    struct Tuple2_535  dref2052 ) {
    return ( (  set543 ) ( ( env->dest2051 ) ,  ( (  i32_dash_size422 ) ( ( dref2052 .field1 ) ) ) ,  ( dref2052 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to523 (    struct Slice_11  src2049 ,    struct Slice_11  dest2051 ) {
    if ( (  cmp292 ( ( (  src2049 ) .f_count ) , ( (  dest2051 ) .f_count ) ) == 2 ) ) {
        ( (  panic524 ) ( ( ( StrConcat_525_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2049 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2051 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env533 envinst533 = {
        .dest2051 =  dest2051 ,
    };
    ( (  for_dash_each531 ) ( ( (  zip541 ) ( (  src2049 ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion534){ .fun = (  enum Unit_8  (*) (  struct env533*  ,    struct Tuple2_535  ) )lam542 , .env =  envinst533 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   char_dash_u8545 (    struct Char_65  c1358 ) {
    struct CharDestructured_341  dref1359 = ( (  destructure343 ) ( (  c1358 ) ) );
    if ( dref1359.tag == CharDestructured_341_Ref_t ) {
        return ( * ( ( dref1359 .stuff .CharDestructured_341_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1359.tag == CharDestructured_341_Scalar_t ) {
            return ( (  u32_dash_u8144 ) ( ( ( dref1359 .stuff .CharDestructured_341_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_27   clone_dash_0517 (    struct StrView_27  s2343 ,    enum CAllocator_10  al2345 ) {
    size_t  cnt2346 = ( ( (  s2343 ) .f_contents ) .f_count );
    struct Slice_11  nus2347 = ( (  allocate518 ) ( (  al2345 ) ,  (  op_dash_add313 ( (  cnt2346 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to523 ) ( ( (  s2343 ) .f_contents ) ,  (  nus2347 ) ) );
    ( (  set543 ) ( (  nus2347 ) ,  (  cnt2346 ) ,  ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2347 ) .f_ptr ) , .f_count = (  cnt2346 ) } ) } );
}

static  const char*   from_dash_charlike547 (    uint8_t *  ptr74 ,    size_t  dref75 ) {
    return ( ( (const char* ) (  ptr74 ) ) );
}

static  void *   cast_dash_ptr552 (    FILE * *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of553 (    FILE *  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  FILE *   zeroed550 (  ) {
    FILE *  temp551;
    FILE *  x597 = (  temp551 );
    ( ( memset ) ( ( (  cast_dash_ptr552 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of553 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  FILE *   null_dash_ptr549 (  ) {
    return ( (  zeroed550 ) ( ) );
}

static  bool   is_dash_ptr_dash_null548 (    FILE *  p607 ) {
    return ( (  p607 ) == ( (  null_dash_ptr549 ) ( ) ) );
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

static  struct Maybe_80   try_dash_read_dash_contents546 (    const char*  filename3018 ,    enum CAllocator_10  al3020 ) {
    FILE *  file3021 = ( ( fopen ) ( (  filename3018 ) ,  ( (  from_dash_charlike547 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null548 ) ( (  file3021 ) ) ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    ( ( fseek ) ( (  file3021 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end554 ) ( ) ) ) );
    int32_t  file_dash_size3022 = ( ( ftell ) ( (  file3021 ) ) );
    ( ( fseek ) ( (  file3021 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set555 ) ( ) ) ) );
    struct Slice_11  file_dash_buf3023 = ( ( (  allocate518 ) ( (  al3020 ) ,  (  op_dash_add313 ( ( (  i32_dash_size422 ) ( (  file_dash_size3022 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3023 ) .f_ptr ) ,  (  file_dash_size3022 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file3021 ) ) );
    ( (  set543 ) ( (  file_dash_buf3023 ) ,  ( (  i32_dash_size422 ) ( (  file_dash_size3022 ) ) ) ,  ( (  char_dash_u8545 ) ( ( (  nullchar556 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3021 ) ) );
    struct StrView_27  str3024 = ( (struct StrView_27) { .f_contents = ( (  subslice477 ) ( (  file_dash_buf3023 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub291 ( ( (  file_dash_buf3023 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_80_Just ) ( (  str3024 ) ) );
}

static  const char*   cast558 (    uint8_t *  x357 ) {
    return ( (const char* ) (  x357 ) );
}

static  const char*   as_dash_const_dash_str557 (    struct StrView_27  s2350 ) {
    return ( (  cast558 ) ( ( ( (  s2350 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr561 (    uint8_t *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  enum Unit_8   free560 (    enum CAllocator_10  dref2144 ,    struct Slice_11  slice2146 ) {
    if (!(  dref2144 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr561 ) ( ( (  slice2146 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free559 (    struct StrView_27  s2358 ,    enum CAllocator_10  al2360 ) {
    ( (  free560 ) ( (  al2360 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2358 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

struct Tuple2_563 {
    struct Maybe_489  field0;
    struct Maybe_489  field1;
};

static struct Tuple2_563 Tuple2_563_Tuple2 (  struct Maybe_489  field0 ,  struct Maybe_489  field1 ) {
    return ( struct Tuple2_563 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq562 (    struct Maybe_489  l142 ,    struct Maybe_489  r144 ) {
    struct Tuple2_563  dref145 = ( ( Tuple2_563_Tuple2 ) ( (  l142 ) ,  (  r144 ) ) );
    if ( dref145 .field0.tag == Maybe_489_None_t && dref145 .field1.tag == Maybe_489_None_t ) {
        return ( true );
    }
    else {
        if ( dref145 .field0.tag == Maybe_489_Just_t && dref145 .field1.tag == Maybe_489_Just_t ) {
            return (  eq305 ( ( dref145 .field0 .stuff .Maybe_489_Just_s .field0 ) , ( dref145 .field1 .stuff .Maybe_489_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  enum Ordering_158   cmp567 (    struct Pos_26  l3688 ,    struct Pos_26  r3690 ) {
    enum Ordering_158  dref3691 = ( (  cmp157 ) ( ( (  l3688 ) .f_line ) ,  ( (  r3690 ) .f_line ) ) );
    switch (  dref3691 ) {
        case Ordering_158_EQ : {
            return ( (  cmp157 ) ( ( (  l3688 ) .f_bi ) ,  ( (  r3690 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_158  els3692 =  dref3691;
            return (  els3692 );
            break;
        }
    }
}

static  struct Pos_26   min566 (    struct Pos_26  l1285 ,    struct Pos_26  r1287 ) {
    if ( (  cmp567 ( (  l1285 ) , (  r1287 ) ) == 0 ) ) {
        return (  l1285 );
    } else {
        return (  r1287 );
    }
}

static  struct Pos_26   max568 (    struct Pos_26  l1290 ,    struct Pos_26  r1292 ) {
    if ( (  cmp567 ( (  l1290 ) , (  r1292 ) ) == 2 ) ) {
        return (  l1290 );
    } else {
        return (  r1292 );
    }
}

static  bool   eq570 (    int32_t  l107 ,    int32_t  r109 ) {
    return ( (  l107 ) == (  r109 ) );
}

static  bool   eq569 (    struct Pos_26  l3683 ,    struct Pos_26  r3685 ) {
    return ( (  eq570 ( ( (  l3683 ) .f_line ) , ( (  r3685 ) .f_line ) ) ) && (  eq570 ( ( (  l3683 ) .f_bi ) , ( (  r3685 ) .f_bi ) ) ) );
}

static  size_t   size571 (    struct List_14 *  l2309 ) {
    return ( ( * (  l2309 ) ) .f_count );
}

static  struct Line_16 *   get_dash_ptr576 (    struct List_14 *  list2177 ,    size_t  i2179 ) {
    if ( ( (  cmp292 ( (  i2179 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2179 ) , ( ( * (  list2177 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2179 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2177 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr421 ) ( ( ( * (  list2177 ) ) .f_elements ) ,  (  i2179 ) ) );
}

static  struct Line_16   get575 (    struct List_14 *  list2187 ,    size_t  i2189 ) {
    return ( * ( (  get_dash_ptr576 ) ( (  list2187 ) ,  (  i2189 ) ) ) );
}

static  struct Slice_11   to_dash_slice577 (    struct List_9  l2302 ) {
    uint8_t *  ptr2303 = ( ( (  l2302 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2303 ) , .f_count = ( (  l2302 ) .f_count ) } );
}

static  enum Unit_8   set578 (    struct List_14 *  list2197 ,    size_t  i2199 ,    struct Line_16  elem2201 ) {
    if ( ( (  cmp292 ( (  i2199 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2199 ) , ( ( * (  list2197 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2199 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2197 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set420 ) ( ( ( * (  list2197 ) ) .f_elements ) ,  (  i2199 ) ,  (  elem2201 ) ) );
    return ( Unit_8_Unit );
}

struct envunion580 {
    struct List_9  (*fun) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  );
    struct env50 env;
};

struct env586 {
    struct List_9 *  list2274;
    struct env6 envinst6;
};

struct envunion587 {
    enum Unit_8  (*fun) (  struct env586*  ,    uint8_t  );
    struct env586 env;
};

static  enum Unit_8   for_dash_each585 (    struct Slice_11  iterable1024 ,   struct envunion587  fun1026 ) {
    struct SliceIter_501  temp588 = ( (  into_dash_iter515 ) ( (  iterable1024 ) ) );
    struct SliceIter_501 *  it1027 = ( &temp588 );
    while ( ( true ) ) {
        struct Maybe_489  dref1028 = ( (  next509 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_489_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_489_Just_t ) {
                struct envunion587  temp589 = (  fun1026 );
                ( temp589.fun ( &temp589.env ,  ( dref1028 .stuff .Maybe_489_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env595 {
    ;
    struct Slice_11  new_dash_slice2218;
    ;
};

struct envunion596 {
    enum Unit_8  (*fun) (  struct env595*  ,    struct Tuple2_535  );
    struct env595 env;
};

static  enum Unit_8   lam597 (   struct env595* env ,    struct Tuple2_535  dref2219 ) {
    return ( (  set543 ) ( ( env->new_dash_slice2218 ) ,  ( (  i32_dash_size422 ) ( ( dref2219 .field1 ) ) ) ,  ( dref2219 .field0 ) ) );
}

static  enum Unit_8   for_dash_each598 (    struct Zip_532  iterable1024 ,   struct envunion596  fun1026 ) {
    struct Zip_532  temp599 = ( (  into_dash_iter537 ) ( (  iterable1024 ) ) );
    struct Zip_532 *  it1027 = ( &temp599 );
    while ( ( true ) ) {
        struct Maybe_538  dref1028 = ( (  next539 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_538_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_538_Just_t ) {
                struct envunion596  temp600 = (  fun1026 );
                ( temp600.fun ( &temp600.env ,  ( dref1028 .stuff .Maybe_538_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full594 (   struct env1* env ,    struct List_9 *  list2217 ) {
    if ( (  eq409 ( ( ( * (  list2217 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2217 ) .f_elements = ( (  allocate518 ) ( ( ( * (  list2217 ) ) .f_al ) ,  ( env->starting_dash_size2212 ) ) );
    } else {
        if ( (  eq409 ( ( ( * (  list2217 ) ) .f_count ) , ( ( ( * (  list2217 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2218 = ( (  allocate518 ) ( ( ( * (  list2217 ) ) .f_al ) ,  (  op_dash_mul415 ( ( ( * (  list2217 ) ) .f_count ) , ( env->growth_dash_factor2213 ) ) ) ) );
            struct env595 envinst595 = {
                .new_dash_slice2218 =  new_dash_slice2218 ,
            };
            struct envunion596  fun2222 = ( (struct envunion596){ .fun = (  enum Unit_8  (*) (  struct env595*  ,    struct Tuple2_535  ) )lam597 , .env =  envinst595 } );
            ( (  for_dash_each598 ) ( ( (  zip541 ) ( ( ( * (  list2217 ) ) .f_elements ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2222 ) ) );
            ( (  free560 ) ( ( ( * (  list2217 ) ) .f_al ) ,  ( ( * (  list2217 ) ) .f_elements ) ) );
            (*  list2217 ) .f_elements = (  new_dash_slice2218 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add592 (   struct env6* env ,    struct List_9 *  list2225 ,    uint8_t  elem2227 ) {
    struct envunion7  temp593 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full594 , .env =  env->envinst1 } );
    ( temp593.fun ( &temp593.env ,  (  list2225 ) ) );
    ( (  set543 ) ( ( ( * (  list2225 ) ) .f_elements ) ,  ( ( * (  list2225 ) ) .f_count ) ,  (  elem2227 ) ) );
    (*  list2225 ) .f_count = (  op_dash_add313 ( ( ( * (  list2225 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam590 (   struct env586* env ,    uint8_t  x2278 ) {
    struct envunion47  temp591 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add592 , .env =  env->envinst6 } );
    return ( temp591.fun ( &temp591.env ,  ( env->list2274 ) ,  (  x2278 ) ) );
}

static  enum Unit_8   add_dash_all584 (   struct env46* env ,    struct List_9 *  list2274 ,    struct Slice_11  it2276 ) {
    struct env586 envinst586 = {
        .list2274 =  list2274 ,
        .envinst6 = env->envinst6 ,
    };
    ( (  for_dash_each585 ) ( (  it2276 ) ,  ( (struct envunion587){ .fun = (  enum Unit_8  (*) (  struct env586*  ,    uint8_t  ) )lam590 , .env =  envinst586 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter581 (   struct env50* env ,    struct Slice_11  iter2315 ,    enum CAllocator_10  al2317 ) {
    struct List_9  temp582 = ( (  mk450 ) ( (  al2317 ) ) );
    struct List_9 *  list2318 = ( &temp582 );
    struct envunion51  temp583 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all584 , .env =  env->envinst46 } );
    ( temp583.fun ( &temp583.env ,  (  list2318 ) ,  (  iter2315 ) ) );
    return ( * (  list2318 ) );
}

static  struct StrView_27   or_dash_else602 (    struct Maybe_80  self1278 ,    struct StrView_27  alt1280 ) {
    struct Maybe_80  dref1281 = (  self1278 );
    if ( dref1281.tag == Maybe_80_None_t ) {
        return (  alt1280 );
    }
    else {
        if ( dref1281.tag == Maybe_80_Just_t ) {
            return ( dref1281 .stuff .Maybe_80_Just_s .field0 );
        }
    }
}

struct LineIter_604 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  struct Maybe_80   next605 (    struct LineIter_604 *  self2453 ) {
    if ( (  cmp292 ( ( ( * (  self2453 ) ) .f_last ) , ( ( ( ( * (  self2453 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    size_t  i2454 = ( ( * (  self2453 ) ) .f_last );
    while ( ( (  cmp292 ( (  i2454 ) , ( ( ( ( * (  self2453 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq305 ( ( (  get487 ) ( ( ( ( * (  self2453 ) ) .f_og ) .f_contents ) ,  (  i2454 ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2454 = (  op_dash_add313 ( (  i2454 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2455 = ( (  byte_dash_substr496 ) ( ( ( * (  self2453 ) ) .f_og ) ,  ( ( * (  self2453 ) ) .f_last ) ,  (  i2454 ) ) );
    if ( (  cmp292 ( (  i2454 ) , ( ( ( ( * (  self2453 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2454 = (  op_dash_add313 ( (  i2454 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2453 ) .f_last = (  i2454 );
    return ( ( Maybe_80_Just ) ( (  line2455 ) ) );
}

static  struct LineIter_604   into_dash_iter607 (    struct LineIter_604  self2450 ) {
    return (  self2450 );
}

static  struct Maybe_80   head603 (    struct LineIter_604  it1092 ) {
    struct LineIter_604  temp606 = ( (  into_dash_iter607 ) ( (  it1092 ) ) );
    return ( (  next605 ) ( ( &temp606 ) ) );
}

static  struct LineIter_604   lines608 (    struct StrView_27  s2447 ) {
    return ( (struct LineIter_604) { .f_og = (  s2447 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env613 {
    ;
    struct Char_65  c2431;
};

struct envunion614 {
    bool  (*fun) (  struct env613*  ,    struct Char_65  );
    struct env613 env;
};

struct SplitIter_612 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion614  f_fun;
};

struct Drop_611 {
    struct SplitIter_612  field0;
    size_t  field1;
};

static struct Drop_611 Drop_611_Drop (  struct SplitIter_612  field0 ,  size_t  field1 ) {
    return ( struct Drop_611 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_610 {
    struct Drop_611  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

static  struct Zip_610   into_dash_iter615 (    struct Zip_610  self861 ) {
    return (  self861 );
}

static  struct Drop_611   into_dash_iter617 (    struct Drop_611  self778 ) {
    return (  self778 );
}

static  struct Zip_610   zip616 (    struct Drop_611  left872 ,    struct FromIter_426  right874 ) {
    struct Drop_611  left_dash_it875 = ( (  into_dash_iter617 ) ( (  left872 ) ) );
    struct FromIter_426  right_dash_it876 = ( (  into_dash_iter436 ) ( (  right874 ) ) );
    return ( (struct Zip_610) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

static  struct SplitIter_612   into_dash_iter619 (    struct SplitIter_612  self2436 ) {
    return (  self2436 );
}

static  struct Drop_611   drop618 (    struct SplitIter_612  iterable785 ,    size_t  i787 ) {
    struct SplitIter_612  it788 = ( (  into_dash_iter619 ) ( (  iterable785 ) ) );
    return ( ( Drop_611_Drop ) ( (  it788 ) ,  (  i787 ) ) );
}

static  struct SplitIter_612   split_dash_by_dash_filter621 (    struct StrView_27  s2424 ,   struct envunion614  fun2426 ) {
    return ( (struct SplitIter_612) { .f_og = (  s2424 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2426 ) } );
}

static  bool   lam622 (   struct env613* env ,    struct Char_65  cc2433 ) {
    return (  eq480 ( (  cc2433 ) , ( env->c2431 ) ) );
}

static  struct SplitIter_612   split_dash_by_dash_each620 (    struct StrView_27  s2429 ,    struct Char_65  c2431 ) {
    struct env613 envinst613 = {
        .c2431 =  c2431 ,
    };
    return ( (  split_dash_by_dash_filter621 ) ( (  s2429 ) ,  ( (struct envunion614){ .fun = (  bool  (*) (  struct env613*  ,    struct Char_65  ) )lam622 , .env =  envinst613 } ) ) );
}

struct Tuple2_625 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_625 Tuple2_625_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_625 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_624 {
    enum {
        Maybe_624_None_t,
        Maybe_624_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_625  field0;
        } Maybe_624_Just_s;
    } stuff;
};

static struct Maybe_624 Maybe_624_Just (  struct Tuple2_625  field0 ) {
    return ( struct Maybe_624 ) { .tag = Maybe_624_Just_t, .stuff = { .Maybe_624_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_80   next628 (    struct SplitIter_612 *  self2439 ) {
    if ( (  cmp292 ( ( ( * (  self2439 ) ) .f_last ) , ( ( ( ( * (  self2439 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    size_t  i2440 = ( ( * (  self2439 ) ) .f_last );
    while ( (  cmp292 ( (  i2440 ) , ( ( ( ( * (  self2439 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2441 = ( (  get_dash_ptr544 ) ( ( ( ( * (  self2439 ) ) .f_og ) .f_contents ) ,  (  i2440 ) ) );
        struct Char_65  c2442 = ( (  scan_dash_from_dash_mem307 ) ( (  ptr2441 ) ) );
        struct envunion614  temp629 = ( ( * (  self2439 ) ) .f_fun );
        if ( ( temp629.fun ( &temp629.env ,  (  c2442 ) ) ) ) {
            break;
        }
        i2440 = (  op_dash_add313 ( (  i2440 ) , ( (  next_dash_char308 ) ( (  ptr2441 ) ) ) ) );
    }
    struct StrView_27  line2443 = ( (  byte_dash_substr496 ) ( ( ( * (  self2439 ) ) .f_og ) ,  ( ( * (  self2439 ) ) .f_last ) ,  (  i2440 ) ) );
    i2440 = (  op_dash_add313 ( (  i2440 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2439 ) .f_last = (  i2440 );
    return ( ( Maybe_80_Just ) ( (  line2443 ) ) );
}

static  struct Maybe_80   next627 (    struct Drop_611 *  dref780 ) {
    while ( (  cmp292 ( ( (* dref780 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next628 ) ( ( & ( (* dref780 ) .field0 ) ) ) );
        (* dref780 ) .field1 = (  op_dash_sub291 ( ( (* dref780 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next628 ) ( ( & ( (* dref780 ) .field0 ) ) ) );
}

static  struct Maybe_624   next626 (    struct Zip_610 *  self864 ) {
    struct Zip_610  copy865 = ( * (  self864 ) );
    while ( ( true ) ) {
        struct Maybe_80  dref866 = ( (  next627 ) ( ( & ( (  copy865 ) .f_left_dash_it ) ) ) );
        if ( dref866.tag == Maybe_80_None_t ) {
            return ( (struct Maybe_624) { .tag = Maybe_624_None_t } );
        }
        else {
            if ( dref866.tag == Maybe_80_Just_t ) {
                struct Maybe_155  dref868 = ( (  next432 ) ( ( & ( (  copy865 ) .f_right_dash_it ) ) ) );
                if ( dref868.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_624) { .tag = Maybe_624_None_t } );
                }
                else {
                    if ( dref868.tag == Maybe_155_Just_t ) {
                        ( (  next627 ) ( ( & ( ( * (  self864 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self864 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_624_Just ) ( ( ( Tuple2_625_Tuple2 ) ( ( dref866 .stuff .Maybe_80_Just_s .field0 ) ,  ( dref868 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   insert633 (   struct env37* env ,    struct List_14 *  list2230 ,    size_t  i2232 ,    struct Line_16  elem2234 ) {
    if ( ( (  cmp292 ( (  i2232 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2232 ) , ( ( * (  list2230 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2232 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2230 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq409 ( ( ( * (  list2230 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp634 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add406 , .env =  env->envinst12 } );
        ( temp634.fun ( &temp634.env ,  (  list2230 ) ,  (  elem2234 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp635 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full408 , .env =  env->envinst2 } );
    ( temp635.fun ( &temp635.env ,  (  list2230 ) ) );
    size_t  ii2235 = (  op_dash_sub291 ( ( ( * (  list2230 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp292 ( (  ii2235 ) , (  i2232 ) ) != 0 ) ) {
        ( (  set420 ) ( ( ( * (  list2230 ) ) .f_elements ) ,  (  op_dash_add313 ( (  ii2235 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get575 ) ( (  list2230 ) ,  (  ii2235 ) ) ) ) );
        if ( (  eq409 ( (  ii2235 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2235 = (  op_dash_sub291 ( (  ii2235 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set420 ) ( ( ( * (  list2230 ) ) .f_elements ) ,  (  i2232 ) ,  (  elem2234 ) ) );
    (*  list2230 ) .f_count = (  op_dash_add313 ( ( ( * (  list2230 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion637 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  enum Unit_8   free639 (    struct List_9 *  list2211 ) {
    ( (  free560 ) ( ( ( * (  list2211 ) ) .f_al ) ,  ( ( * (  list2211 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line638 (    struct Line_16 *  line3769 ) {
    ( (  free639 ) ( ( & ( ( * (  line3769 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot574 (   struct env96* env ,    struct TextBuf_106 *  self3817 ,    struct Pos_26  p3819 ,    struct StrView_27  bytes3821 ) {
    enum CAllocator_10  al3822 = ( ( ( * (  self3817 ) ) .f_buf ) .f_al );
    struct List_14 *  buf3823 = ( & ( ( * (  self3817 ) ) .f_buf ) );
    struct Line_16  extracted_dash_line_dash_buf3824 = ( (  get575 ) ( (  buf3823 ) ,  ( (  i32_dash_size422 ) ( ( (  p3819 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3825 = ( (  from476 ) ( ( (  to_dash_slice577 ) ( ( (  extracted_dash_line_dash_buf3824 ) .f_line ) ) ) ,  ( (  i32_dash_size422 ) ( ( (  p3819 ) .f_bi ) ) ) ) );
    struct envunion580  temp579 = ( (struct envunion580){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter581 , .env =  env->envinst50 } );
    ( (  set578 ) ( (  buf3823 ) ,  ( (  i32_dash_size422 ) ( ( (  p3819 ) .f_line ) ) ) ,  ( (  mk_dash_line442 ) ( ( temp579.fun ( &temp579.env ,  ( (  subslice477 ) ( ( (  to_dash_slice577 ) ( ( (  extracted_dash_line_dash_buf3824 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size422 ) ( ( (  p3819 ) .f_bi ) ) ) ) ) ,  (  al3822 ) ) ) ) ) ) );
    struct Line_16 *  last_dash_line3826 = ( (  get_dash_ptr576 ) ( (  buf3823 ) ,  ( (  i32_dash_size422 ) ( ( (  p3819 ) .f_line ) ) ) ) );
    struct envunion98  temp601 = ( (struct envunion98){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all584 , .env =  env->envinst46 } );
    ( temp601.fun ( &temp601.env ,  ( & ( ( * (  last_dash_line3826 ) ) .f_line ) ) ,  ( ( (  or_dash_else602 ) ( ( (  head603 ) ( ( (  lines608 ) ( (  bytes3821 ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3827 = (  from_dash_integral56 ( 0 ) );
    struct Zip_610  temp609 =  into_dash_iter615 ( ( (  zip616 ) ( ( (  drop618 ) ( ( (  split_dash_by_dash_each620 ) ( (  bytes3821 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_624  __cond623 =  next626 (&temp609);
        if (  __cond623 .tag == 0 ) {
            break;
        }
        struct Tuple2_625  dref3828 =  __cond623 .stuff .Maybe_624_Just_s .field0;
        struct envunion99  temp631 = ( (struct envunion99){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter581 , .env =  env->envinst50 } );
        struct Line_16  temp630 = ( (  mk_dash_line442 ) ( ( temp631.fun ( &temp631.env ,  ( ( dref3828 .field0 ) .f_contents ) ,  (  al3822 ) ) ) ) );
        struct Line_16 *  nuline3831 = ( &temp630 );
        size_t  next_dash_line3832 = ( (  i32_dash_size422 ) ( (  op_dash_add159 ( ( (  p3819 ) .f_line ) , ( dref3828 .field1 ) ) ) ) );
        struct envunion97  temp632 = ( (struct envunion97){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_14 *  ,    size_t  ,    struct Line_16  ) )insert633 , .env =  env->envinst37 } );
        ( temp632.fun ( &temp632.env ,  (  buf3823 ) ,  (  next_dash_line3832 ) ,  ( * (  nuline3831 ) ) ) );
        last_dash_line3826 = ( (  get_dash_ptr576 ) ( (  buf3823 ) ,  (  next_dash_line3832 ) ) );
        lines_dash_added3827 = (  op_dash_add159 ( (  lines_dash_added3827 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion637  temp636 = ( (struct envunion637){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all584 , .env =  env->envinst46 } );
    ( temp636.fun ( &temp636.env ,  ( & ( ( * (  last_dash_line3826 ) ) .f_line ) ) ,  (  remaining3825 ) ) );
    ( (  free_dash_line638 ) ( ( & (  extracted_dash_line_dash_buf3824 ) ) ) );
    return (  lines_dash_added3827 );
}

static  size_t   size640 (    struct List_9 *  l2309 ) {
    return ( ( * (  l2309 ) ) .f_count );
}

struct StrConcat_646 {
    struct StrConcat_84  field0;
    struct Char_65  field1;
};

static struct StrConcat_646 StrConcat_646_StrConcat (  struct StrConcat_84  field0 ,  struct Char_65  field1 ) {
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

static  enum Unit_8   print_dash_str653 (    struct StrConcat_646  self1220 ) {
    struct StrConcat_646  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str652 (    struct StrConcat_645  self1220 ) {
    struct StrConcat_645  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str653 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str651 (    struct StrConcat_644  self1220 ) {
    struct StrConcat_644  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str652 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str650 (    struct StrConcat_649  self1220 ) {
    struct StrConcat_649  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str651 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str647 (    struct StrConcat_648  self1220 ) {
    struct StrConcat_648  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str650 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic643 (    struct StrConcat_644  errmsg1261 ) {
    ( (  print_dash_str647 ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_649_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1261 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
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
    ;
    size_t  num_dash_elems2243;
    ;
    struct List_9 *  list2238;
};

struct envunion657 {
    enum Unit_8  (*fun) (  struct env656*  ,    struct Tuple2_535  );
    struct env656 env;
};

static  struct Drop_655   into_dash_iter659 (    struct Drop_655  self778 ) {
    return (  self778 );
}

static  struct Maybe_538   next660 (    struct Drop_655 *  dref780 ) {
    while ( (  cmp292 ( ( (* dref780 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next539 ) ( ( & ( (* dref780 ) .field0 ) ) ) );
        (* dref780 ) .field1 = (  op_dash_sub291 ( ( (* dref780 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next539 ) ( ( & ( (* dref780 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each654 (    struct Drop_655  iterable1024 ,   struct envunion657  fun1026 ) {
    struct Drop_655  temp658 = ( (  into_dash_iter659 ) ( (  iterable1024 ) ) );
    struct Drop_655 *  it1027 = ( &temp658 );
    while ( ( true ) ) {
        struct Maybe_538  dref1028 = ( (  next660 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_538_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_538_Just_t ) {
                struct envunion657  temp661 = (  fun1026 );
                ( temp661.fun ( &temp661.env ,  ( dref1028 .stuff .Maybe_538_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_655   drop662 (    struct Zip_532  iterable785 ,    size_t  i787 ) {
    struct Zip_532  it788 = ( (  into_dash_iter537 ) ( (  iterable785 ) ) );
    return ( ( Drop_655_Drop ) ( (  it788 ) ,  (  i787 ) ) );
}

static  struct SliceIter_501   into_dash_iter664 (    struct List_9  self2204 ) {
    return ( (  into_dash_iter515 ) ( ( (  subslice477 ) ( ( (  self2204 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2204 ) .f_count ) ) ) ) );
}

static  struct Zip_532   zip663 (    struct List_9  left872 ,    struct FromIter_426  right874 ) {
    struct SliceIter_501  left_dash_it875 = ( (  into_dash_iter664 ) ( (  left872 ) ) );
    struct FromIter_426  right_dash_it876 = ( (  into_dash_iter436 ) ( (  right874 ) ) );
    return ( (struct Zip_532) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

static  enum Unit_8   set666 (    struct List_9 *  list2197 ,    size_t  i2199 ,    uint8_t  elem2201 ) {
    if ( ( (  cmp292 ( (  i2199 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2199 ) , ( ( * (  list2197 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2199 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2197 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set543 ) ( ( ( * (  list2197 ) ) .f_elements ) ,  (  i2199 ) ,  (  elem2201 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam665 (   struct env656* env ,    struct Tuple2_535  dref2244 ) {
    return ( (  set666 ) ( ( env->list2238 ) ,  (  op_dash_sub291 ( ( (  i32_dash_size422 ) ( ( dref2244 .field1 ) ) ) , ( env->num_dash_elems2243 ) ) ) ,  ( dref2244 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range642 (   struct env40* env ,    struct List_9 *  list2238 ,    size_t  from2240 ,    size_t  to_dash_excl2242 ) {
    if ( (  cmp292 ( (  to_dash_excl2242 ) , (  from2240 ) ) == 0 ) ) {
        ( (  panic643 ) ( ( ( StrConcat_644_StrConcat ) ( ( ( StrConcat_645_StrConcat ) ( ( ( StrConcat_646_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2240 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2242 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp292 ( (  from2240 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2240 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2238 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp292 ( (  to_dash_excl2242 ) , ( ( * (  list2238 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2242 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2238 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2243 = (  op_dash_sub291 ( (  to_dash_excl2242 ) , (  from2240 ) ) );
    struct env656 envinst656 = {
        .num_dash_elems2243 =  num_dash_elems2243 ,
        .list2238 =  list2238 ,
    };
    ( (  for_dash_each654 ) ( ( (  drop662 ) ( ( (  zip663 ) ( ( * (  list2238 ) ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add313 ( (  from2240 ) , (  num_dash_elems2243 ) ) ) ) ) ,  ( (struct envunion657){ .fun = (  enum Unit_8  (*) (  struct env656*  ,    struct Tuple2_535  ) )lam665 , .env =  envinst656 } ) ) );
    (*  list2238 ) .f_count = (  op_dash_sub291 ( ( ( * (  list2238 ) ) .f_count ) , (  num_dash_elems2243 ) ) );
    size_t  capacity2247 = ( ( ( * (  list2238 ) ) .f_elements ) .f_count );
    if ( (  cmp292 ( (  op_dash_mul415 ( ( ( * (  list2238 ) ) .f_count ) , ( env->shrink_dash_factor2214 ) ) ) , (  capacity2247 ) ) == 0 ) ) {
        if ( (  eq409 ( ( ( * (  list2238 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free560 ) ( ( ( * (  list2238 ) ) .f_al ) ,  ( ( * (  list2238 ) ) .f_elements ) ) );
            (*  list2238 ) .f_elements = ( (  empty451 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2248 = (  op_dash_mul415 ( (  op_dash_add313 ( (  op_dash_div346 ( ( ( * (  list2238 ) ) .f_count ) , ( env->shrink_dash_factor2214 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2214 ) ) );
        struct Slice_11  new_dash_slice2249 = ( (  allocate518 ) ( ( ( * (  list2238 ) ) .f_al ) ,  (  new_dash_size2248 ) ) );
        ( (  copy_dash_to523 ) ( ( (  subslice477 ) ( ( ( * (  list2238 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2238 ) ) .f_count ) ) ) ,  (  new_dash_slice2249 ) ) );
        ( (  free560 ) ( ( ( * (  list2238 ) ) .f_al ) ,  ( ( * (  list2238 ) ) .f_elements ) ) );
        (*  list2238 ) .f_elements = (  new_dash_slice2249 );
    }
    return ( Unit_8_Unit );
}

struct envunion668 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

static  enum Unit_8   trim669 (    struct List_9 *  l2291 ,    size_t  new_dash_count2293 ) {
    (*  l2291 ) .f_count = ( (  min478 ) ( (  new_dash_count2293 ) ,  ( ( * (  l2291 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min670 (    int32_t  l1285 ,    int32_t  r1287 ) {
    if ( (  cmp157 ( (  l1285 ) , (  r1287 ) ) == 0 ) ) {
        return (  l1285 );
    } else {
        return (  r1287 );
    }
}

struct envunion672 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

struct Maybe_674 {
    enum {
        Maybe_674_None_t,
        Maybe_674_Just_t,
    } tag;
    union {
        struct {
            struct Slice_11  field0;
        } Maybe_674_Just_s;
    } stuff;
};

static struct Maybe_674 Maybe_674_Just (  struct Slice_11  field0 ) {
    return ( struct Maybe_674 ) { .tag = Maybe_674_Just_t, .stuff = { .Maybe_674_Just_s = { .field0 = field0 } } };
};

static  struct Slice_11   or_dash_else673 (    struct Maybe_674  self1278 ,    struct Slice_11  alt1280 ) {
    struct Maybe_674  dref1281 = (  self1278 );
    if ( dref1281.tag == Maybe_674_None_t ) {
        return (  alt1280 );
    }
    else {
        if ( dref1281.tag == Maybe_674_Just_t ) {
            return ( dref1281 .stuff .Maybe_674_Just_s .field0 );
        }
    }
}

static  struct Maybe_674   fmap_dash_maybe675 (    struct Maybe_386  x1503 ,    struct Slice_11 (*  fun1505 )(    struct Line_16  ) ) {
    struct Maybe_386  dref1506 = (  x1503 );
    if ( dref1506.tag == Maybe_386_None_t ) {
        return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
    }
    else {
        if ( dref1506.tag == Maybe_386_Just_t ) {
            return ( ( Maybe_674_Just ) ( ( (  fun1505 ) ( ( dref1506 .stuff .Maybe_386_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_386   try_dash_get676 (    struct List_14 *  list2192 ,    size_t  i2194 ) {
    if ( (  cmp292 ( (  i2194 ) , ( ( * (  list2192 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
    }
    return ( ( Maybe_386_Just ) ( ( (  get575 ) ( (  list2192 ) ,  (  i2194 ) ) ) ) );
}

static  struct Slice_11   lam677 (    struct Line_16  line3850 ) {
    return ( (  to_dash_slice577 ) ( ( (  line3850 ) .f_line ) ) );
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

static  enum Unit_8   print_dash_str683 (    struct StrConcat_682  self1220 ) {
    struct StrConcat_682  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str680 (    struct StrConcat_681  self1220 ) {
    struct StrConcat_681  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str683 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert679 (    bool  cond1264 ,    struct StrView_27  msg1266 ) {
    if ( ( ! (  cond1264 ) ) ) {
        ( (  print_dash_str680 ) ( ( ( StrConcat_681_StrConcat ) ( ( ( StrConcat_682_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1266 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
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
    ;
    size_t  num_dash_elems2243;
    ;
    struct List_14 *  list2238;
};

struct envunion689 {
    enum Unit_8  (*fun) (  struct env688*  ,    struct Tuple2_418  );
    struct env688 env;
};

static  struct Drop_687   into_dash_iter691 (    struct Drop_687  self778 ) {
    return (  self778 );
}

static  struct Maybe_429   next692 (    struct Drop_687 *  dref780 ) {
    while ( (  cmp292 ( ( (* dref780 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next430 ) ( ( & ( (* dref780 ) .field0 ) ) ) );
        (* dref780 ) .field1 = (  op_dash_sub291 ( ( (* dref780 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next430 ) ( ( & ( (* dref780 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each686 (    struct Drop_687  iterable1024 ,   struct envunion689  fun1026 ) {
    struct Drop_687  temp690 = ( (  into_dash_iter691 ) ( (  iterable1024 ) ) );
    struct Drop_687 *  it1027 = ( &temp690 );
    while ( ( true ) ) {
        struct Maybe_429  dref1028 = ( (  next692 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_429_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_429_Just_t ) {
                struct envunion689  temp693 = (  fun1026 );
                ( temp693.fun ( &temp693.env ,  ( dref1028 .stuff .Maybe_429_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_687   drop694 (    struct Zip_424  iterable785 ,    size_t  i787 ) {
    struct Zip_424  it788 = ( (  into_dash_iter428 ) ( (  iterable785 ) ) );
    return ( ( Drop_687_Drop ) ( (  it788 ) ,  (  i787 ) ) );
}

static  struct Slice_15   subslice697 (    struct Slice_15  slice1974 ,    size_t  from1976 ,    size_t  to1978 ) {
    struct Line_16 *  begin_dash_ptr1979 = ( (  offset_dash_ptr401 ) ( ( (  slice1974 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from1976 ) ) ) ) );
    if ( ( (  cmp292 ( (  from1976 ) , (  to1978 ) ) != 0 ) || (  cmp292 ( (  from1976 ) , ( (  slice1974 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1980 = (  op_dash_sub291 ( ( (  min478 ) ( (  to1978 ) ,  ( (  slice1974 ) .f_count ) ) ) , (  from1976 ) ) );
    return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  count1980 ) } );
}

static  struct SliceIter_425   into_dash_iter696 (    struct List_14  self2204 ) {
    return ( (  into_dash_iter435 ) ( ( (  subslice697 ) ( ( (  self2204 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2204 ) .f_count ) ) ) ) );
}

static  struct Zip_424   zip695 (    struct List_14  left872 ,    struct FromIter_426  right874 ) {
    struct SliceIter_425  left_dash_it875 = ( (  into_dash_iter696 ) ( (  left872 ) ) );
    struct FromIter_426  right_dash_it876 = ( (  into_dash_iter436 ) ( (  right874 ) ) );
    return ( (struct Zip_424) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

static  enum Unit_8   lam698 (   struct env688* env ,    struct Tuple2_418  dref2244 ) {
    return ( (  set578 ) ( ( env->list2238 ) ,  (  op_dash_sub291 ( ( (  i32_dash_size422 ) ( ( dref2244 .field1 ) ) ) , ( env->num_dash_elems2243 ) ) ) ,  ( dref2244 .field0 ) ) );
}

struct env701 {
    ;
    struct Slice_15  dest2051;
    ;
};

struct envunion702 {
    enum Unit_8  (*fun) (  struct env701*  ,    struct Tuple2_418  );
    struct env701 env;
};

static  enum Unit_8   for_dash_each700 (    struct Zip_424  iterable1024 ,   struct envunion702  fun1026 ) {
    struct Zip_424  temp703 = ( (  into_dash_iter428 ) ( (  iterable1024 ) ) );
    struct Zip_424 *  it1027 = ( &temp703 );
    while ( ( true ) ) {
        struct Maybe_429  dref1028 = ( (  next430 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_429_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_429_Just_t ) {
                struct envunion702  temp704 = (  fun1026 );
                ( temp704.fun ( &temp704.env ,  ( dref1028 .stuff .Maybe_429_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam705 (   struct env701* env ,    struct Tuple2_418  dref2052 ) {
    return ( (  set420 ) ( ( env->dest2051 ) ,  ( (  i32_dash_size422 ) ( ( dref2052 .field1 ) ) ) ,  ( dref2052 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to699 (    struct Slice_15  src2049 ,    struct Slice_15  dest2051 ) {
    if ( (  cmp292 ( ( (  src2049 ) .f_count ) , ( (  dest2051 ) .f_count ) ) == 2 ) ) {
        ( (  panic524 ) ( ( ( StrConcat_525_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2049 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2051 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env701 envinst701 = {
        .dest2051 =  dest2051 ,
    };
    ( (  for_dash_each700 ) ( ( (  zip434 ) ( (  src2049 ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion702){ .fun = (  enum Unit_8  (*) (  struct env701*  ,    struct Tuple2_418  ) )lam705 , .env =  envinst701 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range685 (   struct env41* env ,    struct List_14 *  list2238 ,    size_t  from2240 ,    size_t  to_dash_excl2242 ) {
    if ( (  cmp292 ( (  to_dash_excl2242 ) , (  from2240 ) ) == 0 ) ) {
        ( (  panic643 ) ( ( ( StrConcat_644_StrConcat ) ( ( ( StrConcat_645_StrConcat ) ( ( ( StrConcat_646_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2240 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2242 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp292 ( (  from2240 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2240 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2238 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp292 ( (  to_dash_excl2242 ) , ( ( * (  list2238 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2242 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2238 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2243 = (  op_dash_sub291 ( (  to_dash_excl2242 ) , (  from2240 ) ) );
    struct env688 envinst688 = {
        .num_dash_elems2243 =  num_dash_elems2243 ,
        .list2238 =  list2238 ,
    };
    ( (  for_dash_each686 ) ( ( (  drop694 ) ( ( (  zip695 ) ( ( * (  list2238 ) ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add313 ( (  from2240 ) , (  num_dash_elems2243 ) ) ) ) ) ,  ( (struct envunion689){ .fun = (  enum Unit_8  (*) (  struct env688*  ,    struct Tuple2_418  ) )lam698 , .env =  envinst688 } ) ) );
    (*  list2238 ) .f_count = (  op_dash_sub291 ( ( ( * (  list2238 ) ) .f_count ) , (  num_dash_elems2243 ) ) );
    size_t  capacity2247 = ( ( ( * (  list2238 ) ) .f_elements ) .f_count );
    if ( (  cmp292 ( (  op_dash_mul415 ( ( ( * (  list2238 ) ) .f_count ) , ( env->shrink_dash_factor2214 ) ) ) , (  capacity2247 ) ) == 0 ) ) {
        if ( (  eq409 ( ( ( * (  list2238 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free438 ) ( ( ( * (  list2238 ) ) .f_al ) ,  ( ( * (  list2238 ) ) .f_elements ) ) );
            (*  list2238 ) .f_elements = ( (  empty372 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2248 = (  op_dash_mul415 ( (  op_dash_add313 ( (  op_dash_div346 ( ( ( * (  list2238 ) ) .f_count ) , ( env->shrink_dash_factor2214 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2214 ) ) );
        struct Slice_15  new_dash_slice2249 = ( (  allocate410 ) ( ( ( * (  list2238 ) ) .f_al ) ,  (  new_dash_size2248 ) ) );
        ( (  copy_dash_to699 ) ( ( (  subslice697 ) ( ( ( * (  list2238 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2238 ) ) .f_count ) ) ) ,  (  new_dash_slice2249 ) ) );
        ( (  free438 ) ( ( ( * (  list2238 ) ) .f_al ) ,  ( ( * (  list2238 ) ) .f_elements ) ) );
        (*  list2238 ) .f_elements = (  new_dash_slice2249 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action565 (   struct env100* env ,    struct TextBuf_106 *  self3835 ,    struct Pos_26  from_dash_pos3837 ,    struct Pos_26  to_dash_pos3839 ,    struct StrView_27  bytes3841 ) {
    struct Pos_26  from3842 = ( (  min566 ) ( (  from_dash_pos3837 ) ,  (  to_dash_pos3839 ) ) );
    struct Pos_26  to3843 = ( (  max568 ) ( (  from_dash_pos3837 ) ,  (  to_dash_pos3839 ) ) );
    if ( (  eq569 ( (  to3843 ) , (  from3842 ) ) ) ) {
        enum CAllocator_10  al3844 = ( ( ( * (  self3835 ) ) .f_buf ) .f_al );
        if ( ( (  eq409 ( ( (  size571 ) ( ( & ( ( * (  self3835 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size422 ) ( ( (  from3842 ) .f_line ) ) ) ) ) && (  eq570 ( ( (  from3842 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion101  temp572 = ( (struct envunion101){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add406 , .env =  env->envinst12 } );
            ( temp572.fun ( &temp572.env ,  ( & ( ( * (  self3835 ) ) .f_buf ) ) ,  ( (  mk_dash_line442 ) ( ( (  mk450 ) ( (  al3844 ) ) ) ) ) ) );
        }
        struct envunion105  temp573 = ( (struct envunion105){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot574 , .env =  env->envinst96 } );
        ( temp573.fun ( &temp573.env ,  (  self3835 ) ,  (  from3842 ) ,  (  bytes3841 ) ) );
    } else {
        struct List_14 *  lines_dash_buf3845 = ( & ( ( * (  self3835 ) ) .f_buf ) );
        struct Line_16 *  first_dash_line3846 = ( (  get_dash_ptr576 ) ( (  lines_dash_buf3845 ) ,  ( (  i32_dash_size422 ) ( ( (  from3842 ) .f_line ) ) ) ) );
        (*  first_dash_line3846 ) .f_invalidated = ( true );
        if ( ( (  eq570 ( ( (  from3842 ) .f_line ) , ( (  to3843 ) .f_line ) ) ) && (  cmp157 ( ( (  to3843 ) .f_bi ) , (  op_dash_add159 ( ( (  size_dash_i32331 ) ( ( (  size640 ) ( ( & ( ( * (  first_dash_line3846 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion103  temp641 = ( (struct envunion103){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range642 , .env =  env->envinst40 } );
            ( temp641.fun ( &temp641.env ,  ( & ( ( * (  first_dash_line3846 ) ) .f_line ) ) ,  ( (  i32_dash_size422 ) ( ( (  from3842 ) .f_bi ) ) ) ,  ( (  i32_dash_size422 ) ( ( (  to3843 ) .f_bi ) ) ) ) );
            struct envunion668  temp667 = ( (struct envunion668){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot574 , .env =  env->envinst96 } );
            ( temp667.fun ( &temp667.env ,  (  self3835 ) ,  (  from3842 ) ,  (  bytes3841 ) ) );
        } else {
            ( (  trim669 ) ( ( & ( ( * (  first_dash_line3846 ) ) .f_line ) ) ,  ( (  i32_dash_size422 ) ( ( (  from3842 ) .f_bi ) ) ) ) );
            struct Line_16 *  last_dash_line3847 = ( (  get_dash_ptr576 ) ( (  lines_dash_buf3845 ) ,  ( (  i32_dash_size422 ) ( ( (  to3843 ) .f_line ) ) ) ) );
            (*  last_dash_line3847 ) .f_invalidated = ( true );
            to3843 .f_bi = ( (  min670 ) ( ( (  to3843 ) .f_bi ) ,  (  op_dash_add159 ( ( (  size_dash_i32331 ) ( ( (  size640 ) ( ( & ( ( * (  last_dash_line3847 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq570 ( ( (  to3843 ) .f_bi ) , (  op_dash_add159 ( ( (  size_dash_i32331 ) ( ( (  size640 ) ( ( & ( ( * (  last_dash_line3847 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to3843 .f_line = (  op_dash_add159 ( ( (  to3843 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to3843 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion672  temp671 = ( (struct envunion672){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot574 , .env =  env->envinst96 } );
            int32_t  lines_dash_added3848 = ( temp671.fun ( &temp671.env ,  (  self3835 ) ,  (  from3842 ) ,  (  bytes3841 ) ) );
            to3843 .f_line = (  op_dash_add159 ( ( (  to3843 ) .f_line ) , (  lines_dash_added3848 ) ) );
            from3842 .f_line = (  op_dash_add159 ( ( (  from3842 ) .f_line ) , (  lines_dash_added3848 ) ) );
            struct Slice_11  last_dash_line3851 = ( (  or_dash_else673 ) ( ( (  fmap_dash_maybe675 ) ( ( (  try_dash_get676 ) ( (  lines_dash_buf3845 ) ,  ( (  i32_dash_size422 ) ( ( (  to3843 ) .f_line ) ) ) ) ) ,  (  lam677 ) ) ) ,  ( (  empty451 ) ( ) ) ) );
            struct envunion102  temp678 = ( (struct envunion102){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all584 , .env =  env->envinst46 } );
            ( temp678.fun ( &temp678.env ,  ( & ( ( * (  first_dash_line3846 ) ) .f_line ) ) ,  ( (  from476 ) ( (  last_dash_line3851 ) ,  ( (  i32_dash_size422 ) ( ( (  to3843 ) .f_bi ) ) ) ) ) ) );
            ( (  assert679 ) ( (  cmp157 ( ( (  to3843 ) .f_line ) , ( (  from3842 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion104  temp684 = ( (struct envunion104){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  ) )remove_dash_range685 , .env =  env->envinst41 } );
            ( temp684.fun ( &temp684.env ,  ( & ( ( * (  self3835 ) ) .f_buf ) ) ,  ( (  i32_dash_size422 ) ( (  op_dash_add159 ( ( (  from3842 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add313 ( ( (  i32_dash_size422 ) ( ( (  to3843 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk706 (    int32_t  line3695 ,    int32_t  bi3697 ) {
    return ( (struct Pos_26) { .f_line = (  line3695 ) , .f_bi = (  bi3697 ) } );
}

static  struct Maybe_361   mk_dash_from_dash_file364 (   struct env114* env ,    enum CAllocator_10  al3871 ,    struct StrView_27  filename3873 ) {
    struct envunion116  temp366 = ( (struct envunion116){ .fun = (  struct TextBuf_106  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk367 , .env =  env->envinst112 } );
    struct TextBuf_106  temp365 = ( temp366.fun ( &temp366.env ,  (  al3871 ) ) );
    struct TextBuf_106 *  tb3874 = ( &temp365 );
    (*  tb3874 ) .f_filetype = ( (  detect_dash_filetype_dash_from_dash_filename465 ) ( (  filename3873 ) ) );
    struct StrView_27  filename03875 = ( (  clone_dash_0517 ) ( (  filename3873 ) ,  (  al3871 ) ) );
    struct Maybe_80  dref3876 = ( (  try_dash_read_dash_contents546 ) ( ( (  as_dash_const_dash_str557 ) ( (  filename03875 ) ) ) ,  (  al3871 ) ) );
    if ( dref3876.tag == Maybe_80_None_t ) {
        ( (  free559 ) ( (  filename03875 ) ,  (  al3871 ) ) );
        return ( (struct Maybe_361) { .tag = Maybe_361_None_t } );
    }
    else {
        if ( dref3876.tag == Maybe_80_Just_t ) {
            if ( (  eq562 ( ( (  try_dash_get492 ) ( ( ( dref3876 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub291 ( ( ( ( dref3876 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_489_Just ) ( ( (  ascii_dash_u8493 ) ( ( (  from_dash_charlike494 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref3876 .stuff .Maybe_80_Just_s .field0 = ( (  byte_dash_substr496 ) ( ( dref3876 .stuff .Maybe_80_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub291 ( ( ( ( dref3876 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion115  temp564 = ( (struct envunion115){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action565 , .env =  env->envinst100 } );
            ( temp564.fun ( &temp564.env ,  (  tb3874 ) ,  ( (  mk706 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk706 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( dref3876 .stuff .Maybe_80_Just_s .field0 ) ) );
            (*  tb3874 ) .f_filename = ( ( Maybe_80_Just ) ( (  filename03875 ) ) );
            return ( ( Maybe_361_Just ) ( ( * (  tb3874 ) ) ) );
        }
    }
}

struct envunion708 {
    struct TextBuf_106  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
};

struct envunion710 {
    struct TextBuf_106  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
};

static  struct Pane_222   mk713 (    enum CAllocator_10  al4129 ,    struct TextBuf_106 *  buf4131 ) {
    return ( (struct Pane_222) { .f_buf = (  buf4131 ) , .f_cursor = ( (  mk706 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_223_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_224) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
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

static  struct termios *   cast_dash_ptr723 (    struct Termios_92 *  p360 ) {
    return ( (struct termios * ) (  p360 ) );
}

static  uint32_t   u32_dash_and724 (    uint32_t  l2826 ,    uint32_t  r2828 ) {
    return ( (  l2826 ) & (  r2828 ) );
}

static  uint32_t   u32_dash_neg725 (    uint32_t  l2831 ) {
    return ( ~ (  l2831 ) );
}

struct Array_727 {
    uint32_t _arr [4];
};

struct ArrayIter_729 {
    struct Array_727  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_729   into_dash_iter730 (    struct Array_727  self2539 ) {
    return ( (struct ArrayIter_729) { .f_backing = (  self2539 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
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

static  uint32_t *   cast_dash_ptr735 (    struct Array_727 *  p360 ) {
    return ( (uint32_t * ) (  p360 ) );
}

static  uint32_t *   offset_dash_ptr736 (    uint32_t *  x339 ,    int64_t  count341 ) {
    uint32_t  temp737;
    return ( (uint32_t * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp737 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr734 (    struct Array_727 *  arr2463 ,    size_t  i2466 ) {
    if ( ( (  cmp292 ( (  i2466 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2466 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2466 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2467 = ( ( (  cast_dash_ptr735 ) ( (  arr2463 ) ) ) );
    return ( (  offset_dash_ptr736 ) ( (  p2467 ) ,  ( (int64_t ) (  i2466 ) ) ) );
}

static  uint32_t   get733 (    struct Array_727 *  arr2470 ,    size_t  i2473 ) {
    return ( * ( (  get_dash_ptr734 ) ( (  arr2470 ) ,  (  i2473 ) ) ) );
}

static  struct Maybe_731   next732 (    struct ArrayIter_729 *  self2546 ) {
    if ( (  cmp292 ( ( ( * (  self2546 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    uint32_t  e2548 = ( (  get733 ) ( ( & ( ( * (  self2546 ) ) .f_backing ) ) ,  ( ( * (  self2546 ) ) .f_cur ) ) );
    (*  self2546 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2546 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_731_Just ) ( (  e2548 ) ) );
}

static  uint32_t   reduce728 (    struct Array_727  iterable1043 ,    uint32_t  base1045 ,    uint32_t (*  fun1047 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1048 = (  base1045 );
    struct ArrayIter_729  it1049 = ( (  into_dash_iter730 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1050 = ( (  next732 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_731_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_731_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  uint32_t   u32_dash_or740 (    uint32_t  l2818 ,    uint32_t  r2820 ) {
    return ( (  l2818 ) | (  r2820 ) );
}

static  uint32_t   u32_dash_ors726 (    struct Array_727  vals2823 ) {
    return ( (  reduce728 ) ( (  vals2823 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or740 ) ) );
}

static  struct Array_727   from_dash_listlike741 (    struct Array_727 *  self331 ) {
    return ( * (  self331 ) );
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

static  struct ArrayIter_750   into_dash_iter751 (    struct Array_748  self2539 ) {
    return ( (struct ArrayIter_750) { .f_backing = (  self2539 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr755 (    struct Array_748 *  p360 ) {
    return ( (uint32_t * ) (  p360 ) );
}

static  uint32_t *   get_dash_ptr754 (    struct Array_748 *  arr2463 ,    size_t  i2466 ) {
    if ( ( (  cmp292 ( (  i2466 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2466 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2466 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2467 = ( ( (  cast_dash_ptr755 ) ( (  arr2463 ) ) ) );
    return ( (  offset_dash_ptr736 ) ( (  p2467 ) ,  ( (int64_t ) (  i2466 ) ) ) );
}

static  uint32_t   get753 (    struct Array_748 *  arr2470 ,    size_t  i2473 ) {
    return ( * ( (  get_dash_ptr754 ) ( (  arr2470 ) ,  (  i2473 ) ) ) );
}

static  struct Maybe_731   next752 (    struct ArrayIter_750 *  self2546 ) {
    if ( (  cmp292 ( ( ( * (  self2546 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    uint32_t  e2548 = ( (  get753 ) ( ( & ( ( * (  self2546 ) ) .f_backing ) ) ,  ( ( * (  self2546 ) ) .f_cur ) ) );
    (*  self2546 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2546 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_731_Just ) ( (  e2548 ) ) );
}

static  uint32_t   reduce749 (    struct Array_748  iterable1043 ,    uint32_t  base1045 ,    uint32_t (*  fun1047 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1048 = (  base1045 );
    struct ArrayIter_750  it1049 = ( (  into_dash_iter751 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1050 = ( (  next752 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_731_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_731_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  uint32_t   u32_dash_ors747 (    struct Array_748  vals2823 ) {
    return ( (  reduce749 ) ( (  vals2823 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or740 ) ) );
}

static  struct Array_748   from_dash_listlike758 (    struct Array_748 *  self331 ) {
    return ( * (  self331 ) );
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

static  struct ArrayIter_768   into_dash_iter769 (    struct Array_766  self2539 ) {
    return ( (struct ArrayIter_768) { .f_backing = (  self2539 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr773 (    struct Array_766 *  p360 ) {
    return ( (uint32_t * ) (  p360 ) );
}

static  uint32_t *   get_dash_ptr772 (    struct Array_766 *  arr2463 ,    size_t  i2466 ) {
    if ( ( (  cmp292 ( (  i2466 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2466 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2466 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2467 = ( ( (  cast_dash_ptr773 ) ( (  arr2463 ) ) ) );
    return ( (  offset_dash_ptr736 ) ( (  p2467 ) ,  ( (int64_t ) (  i2466 ) ) ) );
}

static  uint32_t   get771 (    struct Array_766 *  arr2470 ,    size_t  i2473 ) {
    return ( * ( (  get_dash_ptr772 ) ( (  arr2470 ) ,  (  i2473 ) ) ) );
}

static  struct Maybe_731   next770 (    struct ArrayIter_768 *  self2546 ) {
    if ( (  cmp292 ( ( ( * (  self2546 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    uint32_t  e2548 = ( (  get771 ) ( ( & ( ( * (  self2546 ) ) .f_backing ) ) ,  ( ( * (  self2546 ) ) .f_cur ) ) );
    (*  self2546 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2546 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_731_Just ) ( (  e2548 ) ) );
}

static  uint32_t   reduce767 (    struct Array_766  iterable1043 ,    uint32_t  base1045 ,    uint32_t (*  fun1047 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1048 = (  base1045 );
    struct ArrayIter_768  it1049 = ( (  into_dash_iter769 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1050 = ( (  next770 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_731_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_731_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  uint32_t   u32_dash_ors765 (    struct Array_766  vals2823 ) {
    return ( (  reduce767 ) ( (  vals2823 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or740 ) ) );
}

static  struct Array_766   from_dash_listlike776 (    struct Array_766 *  self331 ) {
    return ( * (  self331 ) );
}

static  uint32_t   opost778 (  ) {
    return (  from_dash_integral165 ( 1 ) );
}

static  uint32_t   cs8779 (  ) {
    return (  from_dash_integral165 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr782 (    struct Array_93 *  p360 ) {
    return ( (uint8_t * ) (  p360 ) );
}

static  uint8_t *   get_dash_ptr781 (    struct Array_93 *  arr2463 ,    size_t  i2466 ) {
    if ( ( (  cmp292 ( (  i2466 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2466 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2466 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2467 = ( ( (  cast_dash_ptr782 ) ( (  arr2463 ) ) ) );
    return ( (  offset_dash_ptr302 ) ( (  p2467 ) ,  ( (int64_t ) (  i2466 ) ) ) );
}

static  enum Unit_8   set780 (    struct Array_93 *  arr2476 ,    size_t  i2479 ,    uint8_t  e2481 ) {
    uint8_t *  p2482 = ( (  get_dash_ptr781 ) ( (  arr2476 ) ,  (  i2479 ) ) );
    (*  p2482 ) = (  e2481 );
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
    struct Termios_92 *  orig_dash_termios3407 = ( &temp719 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  cast_dash_ptr723 ) ( (  orig_dash_termios3407 ) ) ) ) );
    struct Termios_92  raw3408 = ( * (  orig_dash_termios3407 ) );
    struct Array_727  temp742 = ( (struct Array_727) { ._arr = { ( (  echo743 ) ( ) ) , ( (  icanon744 ) ( ) ) , ( (  isig745 ) ( ) ) , ( ( (  iexten746 ) ( ) ) ) } } );
    raw3408 .f_c_dash_lflag = ( (  u32_dash_and724 ) ( ( (  raw3408 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg725 ) ( ( (  u32_dash_ors726 ) ( ( (  from_dash_listlike741 ) ( ( &temp742 ) ) ) ) ) ) ) ) );
    struct Array_748  temp759 = ( (struct Array_748) { ._arr = { ( (  brkint760 ) ( ) ) , ( (  icrnl761 ) ( ) ) , ( (  inpck762 ) ( ) ) , ( (  istrip763 ) ( ) ) , ( ( (  ixon764 ) ( ) ) ) } } );
    raw3408 .f_c_dash_iflag = ( (  u32_dash_and724 ) ( ( (  raw3408 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg725 ) ( ( (  u32_dash_ors747 ) ( ( (  from_dash_listlike758 ) ( ( &temp759 ) ) ) ) ) ) ) ) );
    struct Array_766  temp777 = ( (struct Array_766) { ._arr = { ( ( (  opost778 ) ( ) ) ) } } );
    raw3408 .f_c_dash_oflag = ( (  u32_dash_and724 ) ( ( (  raw3408 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg725 ) ( ( (  u32_dash_ors765 ) ( ( (  from_dash_listlike776 ) ( ( &temp777 ) ) ) ) ) ) ) ) );
    raw3408 .f_c_dash_cflag = ( (  u32_dash_or740 ) ( ( (  raw3408 ) .f_c_dash_cflag ) ,  ( (  cs8779 ) ( ) ) ) );
    ( (  set780 ) ( ( & ( (  raw3408 ) .f_c_dash_cc ) ) ,  ( (  vmin783 ) ( ) ) ,  (  from_dash_integral310 ( 0 ) ) ) );
    ( (  set780 ) ( ( & ( (  raw3408 ) .f_c_dash_cc ) ) ,  ( (  vtime784 ) ( ) ) ,  (  from_dash_integral310 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  tcsa_dash_flush785 ) ( ) ) ,  ( (  cast_dash_ptr723 ) ( ( & (  raw3408 ) ) ) ) ) );
    return ( * (  orig_dash_termios3407 ) );
}

static  enum Unit_8   for_dash_each788 (    struct StrViewIter_469  iterable1024 ,    enum Unit_8 (*  fun1026 )(    struct Char_65  ) ) {
    struct StrViewIter_469  temp789 = ( (  into_dash_iter470 ) ( (  iterable1024 ) ) );
    struct StrViewIter_469 *  it1027 = ( &temp789 );
    while ( ( true ) ) {
        struct Maybe_299  dref1028 = ( (  next474 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_299_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print787 (    struct StrView_27  s1253 ) {
    ( (  for_dash_each788 ) ( ( (  chars471 ) ( (  s1253 ) ) ) ,  (  printf_dash_char338 ) ) );
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

static  bool   ptr_dash_eq797 (    enum Unit_8 *  l613 ,    enum Unit_8 *  r615 ) {
    return ( (  l613 ) == (  r615 ) );
}

static  enum Unit_8 *   cast798 (    const char*  x357 ) {
    return ( (enum Unit_8 * ) (  x357 ) );
}

static  void *   cast_dash_ptr802 (    enum Unit_8 * *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of803 (    enum Unit_8 *  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  enum Unit_8 *   zeroed800 (  ) {
    enum Unit_8 *  temp801;
    enum Unit_8 *  x597 = (  temp801 );
    ( ( memset ) ( ( (  cast_dash_ptr802 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of803 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  enum Unit_8 *   null_dash_ptr799 (  ) {
    return ( (  zeroed800 ) ( ) );
}

static  struct Maybe_322   from_dash_nullable_dash_c_dash_str796 (    const char*  s618 ) {
    if ( ( (  ptr_dash_eq797 ) ( ( (  cast798 ) ( (  s618 ) ) ) ,  ( ( (  null_dash_ptr799 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_322) { .tag = Maybe_322_None_t } );
    } else {
        return ( ( Maybe_322_Just ) ( (  s618 ) ) );
    }
}

static  struct Maybe_322   get795 (    const char*  s2591 ) {
    return ( (  from_dash_nullable_dash_c_dash_str796 ) ( ( ( getenv ) ( (  s2591 ) ) ) ) );
}

static  bool   eq804 (    const char*  l1911 ,    const char*  r1913 ) {
    return (  eq570 ( ( ( strcmp ) ( (  l1911 ) ,  (  r1913 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_91   query_dash_palette794 (  ) {
    struct Maybe_322  colorterm2592 = ( (  get795 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_322  dref2593 = (  colorterm2592 );
    if ( dref2593.tag == Maybe_322_Just_t ) {
        if ( ( (  eq804 ( ( dref2593 .stuff .Maybe_322_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq804 ( ( dref2593 .stuff .Maybe_322_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_91_PaletteRGB );
        }
    }
    else {
        if ( dref2593.tag == Maybe_322_None_t ) {
        }
    }
    struct Maybe_322  dref2595 = ( (  get795 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2595.tag == Maybe_322_Just_t ) {
        if ( (  eq804 ( ( dref2595 .stuff .Maybe_322_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_91_Palette8 );
        }
    }
    else {
        if ( dref2595.tag == Maybe_322_None_t ) {
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

static  void *   cast_dash_ptr811 (    struct Winsize_807 *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of812 (    struct Winsize_807  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  struct Winsize_807   zeroed809 (  ) {
    struct Winsize_807  temp810;
    struct Winsize_807  x597 = (  temp810 );
    ( ( memset ) ( ( (  cast_dash_ptr811 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of812 ) ( (  x597 ) ) ) ) );
    return (  x597 );
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

static  int32_t   op_dash_neg816 (    int32_t  x228 ) {
    return ( (  from_dash_integral56 ( 0 ) ) - (  x228 ) );
}

static  bool   eq817 (    uint16_t  l122 ,    uint16_t  r124 ) {
    return ( (  l122 ) == (  r124 ) );
}

static  uint16_t   from_dash_integral818 (    size_t  x56 ) {
    return ( (uint16_t ) (  x56 ) );
}

static  void *   cast_dash_ptr824 (    uint32_t *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of825 (    uint32_t  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  uint32_t   zeroed822 (  ) {
    uint32_t  temp823;
    uint32_t  x597 = (  temp823 );
    ( ( memset ) ( ( (  cast_dash_ptr824 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of825 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  uint16_t *   cast826 (    uint32_t *  x357 ) {
    return ( (uint16_t * ) (  x357 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed820 (    uint16_t  x600 ) {
    uint32_t  temp821 = ( (  zeroed822 ) ( ) );
    uint32_t *  y601 = ( &temp821 );
    uint16_t *  yp602 = ( (  cast826 ) ( (  y601 ) ) );
    (*  yp602 ) = (  x600 );
    return ( * (  y601 ) );
}

static  uint32_t   u16_dash_u32819 (    uint16_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed820 ) ( (  x672 ) ) );
}

static  struct Tuple2_805   get_dash_dimensions806 (  ) {
    struct Winsize_807  temp808 = ( ( (  zeroed809 ) ( ) ) );
    struct Winsize_807 *  ws2580 = ( &temp808 );
    if ( ( (  eq570 ( ( ( ioctl ) ( ( (  stdout_dash_fileno813 ) ( ) ) ,  ( (  tiocgwinsz814 ) ( ) ) ,  (  ws2580 ) ) ) , (  op_dash_neg816 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq817 ( ( ( * (  ws2580 ) ) .f_ws_dash_col ) , (  from_dash_integral818 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_805_Tuple2 ) ( (  from_dash_integral165 ( 80 ) ) ,  (  from_dash_integral165 ( 24 ) ) ) );
    }
    return ( ( Tuple2_805_Tuple2 ) ( ( (  u16_dash_u32819 ) ( ( ( * (  ws2580 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32819 ) ( ( ( * (  ws2580 ) ) .f_ws_dash_row ) ) ) ) );
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
    struct timespec *  t3369 = ( &temp828 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic831 ) ( ) ) ,  (  t3369 ) ) );
    return ( * (  t3369 ) );
}

struct env832 {
    bool *  should_dash_resize3421;
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

static  enum Unit_8   lam838 (   struct env832* env ,    int32_t  dref3428 ) {
    (* env->should_dash_resize3421 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst839 (    struct Tuple2_805  dref1481 ) {
    return ( dref1481 .field0 );
}

static  uint32_t   snd840 (    struct Tuple2_805  dref1484 ) {
    return ( dref1484 .field1 );
}

static  struct Tui_90   mk717 (   struct env86* env ) {
    struct Termios_92  og_dash_termios3423 = ( (  enable_dash_raw_dash_mode718 ) ( ) );
    ( (  hide_dash_cursor786 ) ( ) );
    ( (  reset_dash_colors790 ) ( ) );
    ( (  clear_dash_screen791 ) ( ) );
    ( (  enable_dash_mouse792 ) ( ) );
    ( (  flush_dash_stdout793 ) ( ) );
    enum ColorPalette_91  palette3424 = ( (  query_dash_palette794 ) ( ) );
    struct Tuple2_805  dims3425 = ( (  get_dash_dimensions806 ) ( ) );
    uint32_t  fps3426 = (  from_dash_integral165 ( 60 ) );
    struct timespec  last_dash_sync3427 = ( (  now827 ) ( ) );
    struct env832 envinst832 = {
        .should_dash_resize3421 = env->should_dash_resize3421 ,
    };
    ( _intr_register_signal ( (  from_dash_integral56 ( 28 ) ) , ( (struct envunion833){ .fun = (  enum Unit_8  (*) (  struct env832*  ,    int32_t  ) )lam838 , .env =  envinst832 } ) ) );
    return ( (struct Tui_90) { .f_width = ( (  fst839 ) ( (  dims3425 ) ) ) , .f_height = ( (  snd840 ) ( (  dims3425 ) ) ) , .f_target_dash_fps = (  fps3426 ) , .f_actual_dash_fps = (  from_dash_integral165 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3427 ) , .f_fps_dash_ts = (  last_dash_sync3427 ) , .f_fps_dash_count = (  from_dash_integral165 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3423 ) , .f_palette = (  palette3424 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_845 {
    size_t  f_size;
};

static  struct TypeSize_845   get_dash_typesize844 (  ) {
    struct Cell_280  temp846;
    return ( (struct TypeSize_845) { .f_size = ( sizeof( ( (  temp846 ) ) ) ) } );
}

static  struct Cell_280 *   cast_dash_ptr847 (    void *  p360 ) {
    return ( (struct Cell_280 * ) (  p360 ) );
}

static  struct Slice_279   allocate843 (    enum CAllocator_10  dref2138 ,    size_t  count2140 ) {
    if (!(  dref2138 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2141 = ( ( ( (  get_dash_typesize844 ) ( ) ) ) .f_size );
    struct Cell_280 *  ptr2142 = ( (  cast_dash_ptr847 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2141 ) , (  count2140 ) ) ) ) ) ) );
    return ( (struct Slice_279) { .f_ptr = (  ptr2142 ) , .f_count = (  count2140 ) } );
}

static  void *   cast_dash_ptr853 (    size_t *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of854 (    size_t  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  size_t   zeroed851 (  ) {
    size_t  temp852;
    size_t  x597 = (  temp852 );
    ( ( memset ) ( ( (  cast_dash_ptr853 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of854 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  uint32_t *   cast855 (    size_t *  x357 ) {
    return ( (uint32_t * ) (  x357 ) );
}

static  size_t   cast_dash_on_dash_zeroed849 (    uint32_t  x600 ) {
    size_t  temp850 = ( (  zeroed851 ) ( ) );
    size_t *  y601 = ( &temp850 );
    uint32_t *  yp602 = ( (  cast855 ) ( (  y601 ) ) );
    (*  yp602 ) = (  x600 );
    return ( * (  y601 ) );
}

static  size_t   u32_dash_size848 (    uint32_t  x678 ) {
    return ( (  cast_dash_on_dash_zeroed849 ) ( (  x678 ) ) );
}

struct env858 {
    ;
    struct Slice_279  s2098;
    ;
    struct Cell_280 (*  fun2100 )(    struct Cell_280  );
    ;
};

struct envunion859 {
    enum Unit_8  (*fun) (  struct env858*  ,    int32_t  );
    struct env858 env;
};

static  enum Unit_8   for_dash_each857 (    struct Range_150  iterable1024 ,   struct envunion859  fun1026 ) {
    struct RangeIter_153  temp860 = ( (  into_dash_iter154 ) ( (  iterable1024 ) ) );
    struct RangeIter_153 *  it1027 = ( &temp860 );
    while ( ( true ) ) {
        struct Maybe_155  dref1028 = ( (  next156 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_155_Just_t ) {
                struct envunion859  temp861 = (  fun1026 );
                ( temp861.fun ( &temp861.env ,  ( dref1028 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_280 *   offset_dash_ptr865 (    struct Cell_280 *  x339 ,    int64_t  count341 ) {
    struct Cell_280  temp866;
    return ( (struct Cell_280 * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp866 ) ) ) ) ) ) ) ) );
}

static  struct Cell_280 *   get_dash_ptr864 (    struct Slice_279  slice1940 ,    size_t  i1942 ) {
    if ( ( (  cmp292 ( (  i1942 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1942 ) , ( (  slice1940 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1942 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1940 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_280 *  elem_dash_ptr1943 = ( (  offset_dash_ptr865 ) ( ( (  slice1940 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1942 ) ) ) ) );
    return (  elem_dash_ptr1943 );
}

static  enum Unit_8   set863 (    struct Slice_279  slice1957 ,    size_t  i1959 ,    struct Cell_280  x1961 ) {
    struct Cell_280 *  ep1962 = ( (  get_dash_ptr864 ) ( (  slice1957 ) ,  (  i1959 ) ) );
    (*  ep1962 ) = (  x1961 );
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

static  struct Cell_280   or_dash_fail869 (    struct Maybe_870  x1271 ,    struct StrConcat_323  errmsg1273 ) {
    struct Maybe_870  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_870_None_t ) {
        ( (  panic325 ) ( (  errmsg1273 ) ) );
        return ( (  undefined871 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_870_Just_t ) {
            return ( dref1274 .stuff .Maybe_870_Just_s .field0 );
        }
    }
}

static  struct Maybe_870   try_dash_get873 (    struct Slice_279  slice1946 ,    size_t  i1948 ) {
    if ( ( (  cmp292 ( (  i1948 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1948 ) , ( (  slice1946 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_870) { .tag = Maybe_870_None_t } );
    }
    struct Cell_280 *  elem_dash_ptr1949 = ( (  offset_dash_ptr865 ) ( ( (  slice1946 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1948 ) ) ) ) );
    return ( ( Maybe_870_Just ) ( ( * (  elem_dash_ptr1949 ) ) ) );
}

static  struct Cell_280   get868 (    struct Slice_279  slice1952 ,    size_t  i1954 ) {
    return ( (  or_dash_fail869 ) ( ( (  try_dash_get873 ) ( (  slice1952 ) ,  (  i1954 ) ) ) ,  ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1954 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1952 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_280   elem_dash_get867 (    struct Slice_279  self1965 ,    size_t  idx1967 ) {
    return ( (  get868 ) ( (  self1965 ) ,  (  idx1967 ) ) );
}

static  enum Unit_8   lam862 (   struct env858* env ,    int32_t  i2102 ) {
    return ( (  set863 ) ( ( env->s2098 ) ,  ( (  i32_dash_size422 ) ( (  i2102 ) ) ) ,  ( ( env->fun2100 ) ( (  elem_dash_get867 ( ( env->s2098 ) , ( (  i32_dash_size422 ) ( (  i2102 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map856 (    struct Slice_279  s2098 ,    struct Cell_280 (*  fun2100 )(    struct Cell_280  ) ) {
    struct env858 envinst858 = {
        .s2098 =  s2098 ,
        .fun2100 =  fun2100 ,
    };
    ( (  for_dash_each857 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32331 ) ( (  op_dash_sub291 ( ( (  s2098 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion859){ .fun = (  enum Unit_8  (*) (  struct env858*  ,    int32_t  ) )lam862 , .env =  envinst858 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_280   default_dash_cell875 (  ) {
    return ( (struct Cell_280) { .f_c = ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_280   lam874 (    struct Cell_280  dref3531 ) {
    return ( (  default_dash_cell875 ) ( ) );
}

struct env878 {
    ;
    struct Slice_279  s2098;
    ;
    struct Cell_280 (*  fun2100 )(    struct Cell_280  );
    ;
};

struct envunion879 {
    enum Unit_8  (*fun) (  struct env878*  ,    int32_t  );
    struct env878 env;
};

static  enum Unit_8   for_dash_each877 (    struct Range_150  iterable1024 ,   struct envunion879  fun1026 ) {
    struct RangeIter_153  temp880 = ( (  into_dash_iter154 ) ( (  iterable1024 ) ) );
    struct RangeIter_153 *  it1027 = ( &temp880 );
    while ( ( true ) ) {
        struct Maybe_155  dref1028 = ( (  next156 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_155_Just_t ) {
                struct envunion879  temp881 = (  fun1026 );
                ( temp881.fun ( &temp881.env ,  ( dref1028 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam882 (   struct env878* env ,    int32_t  i2102 ) {
    return ( (  set863 ) ( ( env->s2098 ) ,  ( (  i32_dash_size422 ) ( (  i2102 ) ) ) ,  ( ( env->fun2100 ) ( (  elem_dash_get867 ( ( env->s2098 ) , ( (  i32_dash_size422 ) ( (  i2102 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map876 (    struct Slice_279  s2098 ,    struct Cell_280 (*  fun2100 )(    struct Cell_280  ) ) {
    struct env878 envinst878 = {
        .s2098 =  s2098 ,
        .fun2100 =  fun2100 ,
    };
    ( (  for_dash_each877 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32331 ) ( (  op_dash_sub291 ( ( (  s2098 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion879){ .fun = (  enum Unit_8  (*) (  struct env878*  ,    int32_t  ) )lam882 , .env =  envinst878 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_280   lam883 (    struct Cell_280  dref3533 ) {
    return ( (  default_dash_cell875 ) ( ) );
}

static  struct Screen_278   mk_dash_screen842 (    struct Tui_90 *  tui3527 ,    enum CAllocator_10  al3529 ) {
    struct Slice_279  cur3530 = ( (  allocate843 ) ( (  al3529 ) ,  ( (  u32_dash_size848 ) ( (  op_dash_mul167 ( ( ( * (  tui3527 ) ) .f_width ) , ( ( * (  tui3527 ) ) .f_height ) ) ) ) ) ) );
    ( (  map856 ) ( (  cur3530 ) ,  (  lam874 ) ) );
    struct Slice_279  prev3532 = ( (  allocate843 ) ( (  al3529 ) ,  ( (  u32_dash_size848 ) ( (  op_dash_mul167 ( ( ( * (  tui3527 ) ) .f_width ) , ( ( * (  tui3527 ) ) .f_height ) ) ) ) ) ) );
    ( (  map876 ) ( (  prev3532 ) ,  (  lam883 ) ) );
    return ( (struct Screen_278) { .f_current = (  cur3530 ) , .f_previous = (  prev3532 ) , .f_al = (  al3529 ) , .f_tui = (  tui3527 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) } );
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
            struct Key_272  field0;
        } InputEvent_889_Key_s;
        struct {
            struct MouseEvent_890  field0;
        } InputEvent_889_Mouse_s;
    } stuff;
};

static struct InputEvent_889 InputEvent_889_Key (  struct Key_272  field0 ) {
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
    struct Tui_90 *  tui4665;
    struct env88 envinst88;
};

struct envunion892 {
    struct Maybe_888  (*fun) (  struct env886*  );
    struct env886 env;
};

struct FunIter_885 {
    struct envunion892  f_fun;
    bool  f_finished;
};

static  struct FunIter_885   into_dash_iter893 (    struct FunIter_885  self978 ) {
    return (  self978 );
}

static  struct FunIter_885   from_dash_function894 (   struct envunion892  fun986 ) {
    return ( (struct FunIter_885) { .f_fun = (  fun986 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions899 (   struct env87* env ,    struct Tui_90 *  tui3493 ) {
    if ( ( ! ( * ( env->should_dash_resize3421 ) ) ) ) {
        return ( false );
    }
    (*  tui3493 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3421 ) = ( false );
    struct Tuple2_805  dim3494 = ( (  get_dash_dimensions806 ) ( ) );
    uint32_t  w3495 = ( (  fst839 ) ( (  dim3494 ) ) );
    uint32_t  h3496 = ( (  snd840 ) ( (  dim3494 ) ) );
    (*  tui3493 ) .f_width = (  w3495 );
    (*  tui3493 ) .f_height = (  h3496 );
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

static  struct pollfd *   cast_dash_ptr907 (    struct Pollfd_906 *  p360 ) {
    return ( (struct pollfd * ) (  p360 ) );
}

static  void *   cast_dash_ptr910 (    char *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of911 (    char  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  char   zeroed908 (  ) {
    char  temp909;
    char  x597 = (  temp909 );
    ( ( memset ) ( ( (  cast_dash_ptr910 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of911 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  struct Maybe_904   read_dash_byte905 (    int32_t  timeout_dash_ms3415 ) {
    struct Pollfd_906  pfd3416 = ( (struct Pollfd_906) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral818 ( 1 ) ) , .f_revents = (  from_dash_integral818 ( 0 ) ) } );
    if ( (  cmp157 ( ( ( poll ) ( ( (  cast_dash_ptr907 ) ( ( & (  pfd3416 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3415 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_904) { .tag = Maybe_904_None_t } );
    }
    char  c3417 = ( ( (  zeroed908 ) ( ) ) );
    if ( (  cmp157 ( ( ( read ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  cast_dash_ptr910 ) ( ( & (  c3417 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_904) { .tag = Maybe_904_None_t } );
    }
    return ( ( Maybe_904_Just ) ( (  c3417 ) ) );
}

static  char   u8_dash_ascii912 (    uint8_t  b1409 ) {
    return ( ( (char ) (  b1409 ) ) );
}

static  uint8_t *   cast916 (    uint32_t *  x357 ) {
    return ( (uint8_t * ) (  x357 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed914 (    uint8_t  x600 ) {
    uint32_t  temp915 = ( (  zeroed822 ) ( ) );
    uint32_t *  y601 = ( &temp915 );
    uint8_t *  yp602 = ( (  cast916 ) ( (  y601 ) ) );
    (*  yp602 ) = (  x600 );
    return ( * (  y601 ) );
}

static  uint32_t   u8_dash_u32913 (    uint8_t  x699 ) {
    return ( (  cast_dash_on_dash_zeroed914 ) ( (  x699 ) ) );
}

struct Map_919 {
    struct StrViewIter_469  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_919 Map_919_Map (  struct StrViewIter_469  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_919 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_919   into_dash_iter920 (    struct Map_919  self729 ) {
    return (  self729 );
}

static  struct Maybe_731   next921 (    struct Map_919 *  dref731 ) {
    struct Maybe_299  dref734 = ( (  next474 ) ( ( & ( (* dref731 ) .field0 ) ) ) );
    if ( dref734.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    else {
        if ( dref734.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_731_Just ) ( ( ( (* dref731 ) .field1 ) ( ( dref734 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce918 (    struct Map_919  iterable1043 ,    uint32_t  base1045 ,    uint32_t (*  fun1047 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1048 = (  base1045 );
    struct Map_919  it1049 = ( (  into_dash_iter920 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1050 = ( (  next921 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_731_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_731_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  struct Map_919   map924 (    struct StrView_27  iterable738 ,    uint32_t (*  fun740 )(    struct Char_65  ) ) {
    struct StrViewIter_469  it741 = ( (  into_dash_iter472 ) ( (  iterable738 ) ) );
    return ( ( Map_919_Map ) ( (  it741 ) ,  (  fun740 ) ) );
}

static  uint8_t *   cast929 (    size_t *  x357 ) {
    return ( (uint8_t * ) (  x357 ) );
}

static  size_t   cast_dash_on_dash_zeroed927 (    uint8_t  x600 ) {
    size_t  temp928 = ( (  zeroed851 ) ( ) );
    size_t *  y601 = ( &temp928 );
    uint8_t *  yp602 = ( (  cast929 ) ( (  y601 ) ) );
    (*  yp602 ) = (  x600 );
    return ( * (  y601 ) );
}

static  size_t   u8_dash_size926 (    uint8_t  x690 ) {
    return ( (  cast_dash_on_dash_zeroed927 ) ( (  x690 ) ) );
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

static  enum Unit_8   print_dash_str939 (    struct StrConcat_932  self1220 ) {
    struct StrConcat_932  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str938 (    struct StrConcat_931  self1220 ) {
    struct StrConcat_931  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str939 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str937 (    struct StrConcat_936  self1220 ) {
    struct StrConcat_936  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str938 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str934 (    struct StrConcat_935  self1220 ) {
    struct StrConcat_935  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str937 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic933 (    struct StrConcat_931  errmsg1261 ) {
    ( (  print_dash_str934 ) ( ( ( StrConcat_935_StrConcat ) ( ( ( StrConcat_936_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1261 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail930 (    struct Maybe_489  x1271 ,    struct StrConcat_931  errmsg1273 ) {
    struct Maybe_489  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_489_None_t ) {
        ( (  panic933 ) ( (  errmsg1273 ) ) );
        return ( (  undefined490 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_489_Just_t ) {
            return ( dref1274 .stuff .Maybe_489_Just_s .field0 );
        }
    }
}

static  enum Ordering_158   cmp941 (    struct Char_65  l1377 ,    struct Char_65  r1379 ) {
    if ( ( ( !  eq409 ( ( (  l1377 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq409 ( ( (  r1379 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp942 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp942);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (  cmp309 ) ( ( (  char_dash_u8545 ) ( (  l1377 ) ) ) ,  ( (  char_dash_u8545 ) ( (  r1379 ) ) ) ) );
}

static  uint8_t   op_dash_sub943 (    uint8_t  l256 ,    uint8_t  r258 ) {
    return ( (  l256 ) - (  r258 ) );
}

static  uint8_t   op_dash_add944 (    uint8_t  l251 ,    uint8_t  r253 ) {
    return ( (  l251 ) + (  r253 ) );
}

static  struct Maybe_489   hex_dash_digit940 (    struct Char_65  c2982 ) {
    if ( ( (  cmp941 ( (  c2982 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp941 ( (  c2982 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_489_Just ) ( (  op_dash_sub943 ( ( (  char_dash_u8545 ) ( (  c2982 ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp941 ( (  c2982 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp941 ( (  c2982 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_489_Just ) ( (  op_dash_add944 ( (  op_dash_sub943 ( ( (  char_dash_u8545 ) ( (  c2982 ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral310 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp941 ( (  c2982 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp941 ( (  c2982 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_489_Just ) ( (  op_dash_add944 ( (  op_dash_sub943 ( ( (  char_dash_u8545 ) ( (  c2982 ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral310 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_489) { .tag = Maybe_489_None_t } );
}

static  uint32_t   lam925 (    struct Char_65  c2987 ) {
    return ( (  from_dash_integral165 ) ( ( (  u8_dash_size926 ) ( ( (  or_dash_fail930 ) ( ( (  hex_dash_digit940 ) ( (  c2987 ) ) ) ,  ( ( StrConcat_931_StrConcat ) ( ( ( StrConcat_932_StrConcat ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ,  (  c2987 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam945 (    uint32_t  elem2989 ,    uint32_t  b2991 ) {
    return (  op_dash_add171 ( (  op_dash_mul167 ( (  b2991 ) , (  from_dash_integral165 ( 16 ) ) ) ) , (  elem2989 ) ) );
}

static  uint32_t   from_dash_hex917 (    struct StrView_27  arr2985 ) {
    return ( (  reduce918 ) ( ( (  map924 ) ( (  arr2985 ) ,  (  lam925 ) ) ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  lam945 ) ) );
}

static  bool   eq947 (    char  l377 ,    char  r379 ) {
    return ( (  l377 ) == (  r379 ) );
}

struct Array_948 {
    char _arr [32];
};

static  void *   cast_dash_ptr952 (    struct Array_948 *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of953 (    struct Array_948  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  struct Array_948   zeroed950 (  ) {
    struct Array_948  temp951;
    struct Array_948  x597 = (  temp951 );
    ( ( memset ) ( ( (  cast_dash_ptr952 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of953 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  char *   cast_dash_ptr957 (    struct Array_948 *  p360 ) {
    return ( (char * ) (  p360 ) );
}

static  char *   offset_dash_ptr958 (    char *  x339 ,    int64_t  count341 ) {
    char  temp959;
    return ( (char * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp959 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr956 (    struct Array_948 *  arr2463 ,    size_t  i2466 ) {
    if ( ( (  cmp292 ( (  i2466 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2466 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2466 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2467 = ( ( (  cast_dash_ptr957 ) ( (  arr2463 ) ) ) );
    return ( (  offset_dash_ptr958 ) ( (  p2467 ) ,  ( (int64_t ) (  i2466 ) ) ) );
}

static  enum Unit_8   set955 (    struct Array_948 *  arr2476 ,    size_t  i2479 ,    char  e2481 ) {
    char *  p2482 = ( (  get_dash_ptr956 ) ( (  arr2476 ) ,  (  i2479 ) ) );
    (*  p2482 ) = (  e2481 );
    return ( Unit_8_Unit );
}

struct Slice_961 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail964 (    struct Maybe_904  x1271 ,    struct StrConcat_323  errmsg1273 ) {
    struct Maybe_904  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_904_None_t ) {
        ( (  panic325 ) ( (  errmsg1273 ) ) );
        return ( (  undefined902 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_904_Just_t ) {
            return ( dref1274 .stuff .Maybe_904_Just_s .field0 );
        }
    }
}

static  struct Maybe_904   try_dash_get965 (    struct Slice_961  slice1946 ,    size_t  i1948 ) {
    if ( ( (  cmp292 ( (  i1948 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1948 ) , ( (  slice1946 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_904) { .tag = Maybe_904_None_t } );
    }
    char *  elem_dash_ptr1949 = ( (  offset_dash_ptr958 ) ( ( (  slice1946 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1948 ) ) ) ) );
    return ( ( Maybe_904_Just ) ( ( * (  elem_dash_ptr1949 ) ) ) );
}

static  char   get963 (    struct Slice_961  slice1952 ,    size_t  i1954 ) {
    return ( (  or_dash_fail964 ) ( ( (  try_dash_get965 ) ( (  slice1952 ) ,  (  i1954 ) ) ) ,  ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1954 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1952 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get962 (    struct Slice_961  self1965 ,    size_t  idx1967 ) {
    return ( (  get963 ) ( (  self1965 ) ,  (  idx1967 ) ) );
}

struct Scanner_966 {
    struct StrViewIter_469  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_966   mk_dash_from_dash_str968 (    struct StrView_27  s3259 ) {
    return ( (struct Scanner_966) { .f_s = ( (  chars471 ) ( (  s3259 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_972 (    uint8_t *  x344 ,    size_t  count346 ) {
    return ( (  offset_dash_ptr302 ) ( (  x344 ) ,  ( (int64_t ) (  count346 ) ) ) );
}

static  struct StrView_27   substr969 (    struct StrView_27  s2363 ,    size_t  from2365 ,    size_t  to2367 ) {
    size_t  from_dash_bs2368 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_153  temp970 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( (  from2365 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond971 =  next156 (&temp970);
        if (  __cond971 .tag == 0 ) {
            break;
        }
        int32_t  dref2369 =  __cond971 .stuff .Maybe_155_Just_s .field0;
        if ( (  cmp292 ( (  from_dash_bs2368 ) , ( ( (  s2363 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2368 = (  op_dash_add313 ( (  from_dash_bs2368 ) , ( (  next_dash_char308 ) ( ( (  offset_dash_ptr_prime_972 ) ( ( ( (  s2363 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2368 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2370 = (  from_dash_bs2368 );
    struct RangeIter_153  temp973 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( (  to2367 ) ) ) , ( (  size_dash_i32331 ) ( (  from2365 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond974 =  next156 (&temp973);
        if (  __cond974 .tag == 0 ) {
            break;
        }
        int32_t  dref2371 =  __cond974 .stuff .Maybe_155_Just_s .field0;
        if ( (  cmp292 ( (  to_dash_bs2370 ) , ( ( (  s2363 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2370 = (  op_dash_add313 ( (  to_dash_bs2370 ) , ( (  next_dash_char308 ) ( ( (  offset_dash_ptr_prime_972 ) ( ( ( (  s2363 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2370 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice477 ) ( ( (  s2363 ) .f_contents ) ,  (  from_dash_bs2368 ) ,  (  to_dash_bs2370 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr977 (    char *  p360 ) {
    return ( (uint8_t * ) (  p360 ) );
}

static  struct Slice_11   cast_dash_slice976 (    struct Slice_961  s2125 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr977 ) ( ( (  s2125 ) .f_ptr ) ) ) , .f_count = ( (  s2125 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice975 (    struct Slice_961  sl2337 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice976 ) ( (  sl2337 ) ) ) } );
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

static  struct Scanner_966   into_dash_iter983 (    struct Scanner_966  self3250 ) {
    return (  self3250 );
}

static  struct Scanner_966   into_dash_iter982 (    struct Scanner_966 *  self718 ) {
    return ( (  into_dash_iter983 ) ( ( * (  self718 ) ) ) );
}

static  struct TakeWhile_980   take_dash_while981 (    struct Scanner_966 *  it920 ,    bool (*  pred922 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_980) { .f_it = ( (  into_dash_iter982 ) ( (  it920 ) ) ) , .f_pred = (  pred922 ) } );
}

static  struct Char_65   min986 (    struct Char_65  l1285 ,    struct Char_65  r1287 ) {
    if ( (  cmp941 ( (  l1285 ) , (  r1287 ) ) == 0 ) ) {
        return (  l1285 );
    } else {
        return (  r1287 );
    }
}

static  struct Char_65   max987 (    struct Char_65  l1290 ,    struct Char_65  r1292 ) {
    if ( (  cmp941 ( (  l1290 ) , (  r1292 ) ) == 2 ) ) {
        return (  l1290 );
    } else {
        return (  r1292 );
    }
}

static  bool   between985 (    struct Char_65  c1295 ,    struct Char_65  l1297 ,    struct Char_65  r1299 ) {
    struct Char_65  from1300 = ( (  min986 ) ( (  l1297 ) ,  (  r1299 ) ) );
    struct Char_65  to1301 = ( (  max987 ) ( (  l1297 ) ,  (  r1299 ) ) );
    return ( (  cmp941 ( (  from1300 ) , (  c1295 ) ) != 2 ) && (  cmp941 ( (  c1295 ) , (  to1301 ) ) != 2 ) );
}

static  bool   is_dash_digit984 (    struct Char_65  c1424 ) {
    return ( (  eq409 ( ( (  c1424 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between985 ) ( (  c1424 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) ) );
}

static  struct Maybe_299   next991 (    struct Scanner_966 *  self3245 ) {
    struct Maybe_299  dref3246 = ( (  next474 ) ( ( & ( ( * (  self3245 ) ) .f_s ) ) ) );
    if ( dref3246.tag == Maybe_299_Just_t ) {
        (*  self3245 ) .f_byte_dash_offset = (  op_dash_add313 ( ( ( * (  self3245 ) ) .f_byte_dash_offset ) , ( ( dref3246 .stuff .Maybe_299_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_299_Just ) ( ( dref3246 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref3246.tag == Maybe_299_None_t ) {
            return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
        }
    }
}

static  struct Maybe_299   next990 (    struct TakeWhile_980 *  self914 ) {
    struct Maybe_299  mx915 = ( (  next991 ) ( ( & ( ( * (  self914 ) ) .f_it ) ) ) );
    struct Maybe_299  dref916 = (  mx915 );
    if ( dref916.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref916.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self914 ) ) .f_pred ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct TakeWhile_980   into_dash_iter993 (    struct TakeWhile_980  self911 ) {
    return (  self911 );
}

static  struct Maybe_299   head989 (    struct TakeWhile_980  it1092 ) {
    struct TakeWhile_980  temp992 = ( (  into_dash_iter993 ) ( (  it1092 ) ) );
    return ( (  next990 ) ( ( &temp992 ) ) );
}

static  bool   null988 (    struct TakeWhile_980  it1101 ) {
    struct Maybe_299  dref1102 = ( (  head989 ) ( (  it1101 ) ) );
    if ( dref1102.tag == Maybe_299_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env996 {
    struct Scanner_966 *  it1136;
    ;
};

struct envunion997 {
    struct Maybe_299  (*fun) (  struct env996*  ,    int32_t  );
    struct env996 env;
};

static  enum Unit_8   for_dash_each995 (    struct Range_150  iterable1024 ,   struct envunion997  fun1026 ) {
    struct RangeIter_153  temp998 = ( (  into_dash_iter154 ) ( (  iterable1024 ) ) );
    struct RangeIter_153 *  it1027 = ( &temp998 );
    while ( ( true ) ) {
        struct Maybe_155  dref1028 = ( (  next156 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_155_Just_t ) {
                struct envunion997  temp999 = (  fun1026 );
                ( temp999.fun ( &temp999.env ,  ( dref1028 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_299   lam1000 (   struct env996* env ,    int32_t  dref1139 ) {
    return ( (  next991 ) ( ( env->it1136 ) ) );
}

static  enum Unit_8   drop_prime_994 (    struct Scanner_966 *  it1136 ,    size_t  n1138 ) {
    struct env996 envinst996 = {
        .it1136 =  it1136 ,
    };
    ( (  for_dash_each995 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32331 ) ( (  n1138 ) ) ) ) ) ,  ( (struct envunion997){ .fun = (  struct Maybe_299  (*) (  struct env996*  ,    int32_t  ) )lam1000 , .env =  envinst996 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce1002 (    struct TakeWhile_980  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct TakeWhile_980  it1049 = ( (  into_dash_iter993 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1050 = ( (  next990 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_299_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_299_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  size_t   lam1005 (    struct Char_65  dref1055 ,    size_t  x1057 ) {
    return (  op_dash_add313 ( (  x1057 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1001 (    struct TakeWhile_980  it1054 ) {
    return ( (  reduce1002 ) ( (  it1054 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1005 ) ) );
}

static  struct TakeWhile_980   chars1007 (    struct TakeWhile_980  self1801 ) {
    return (  self1801 );
}

static  struct Maybe_978   reduce1008 (    struct TakeWhile_980  iterable1043 ,    struct Maybe_978  base1045 ,    struct Maybe_978 (*  fun1047 )(    struct Char_65  ,    struct Maybe_978  ) ) {
    struct Maybe_978  x1048 = (  base1045 );
    struct TakeWhile_980  it1049 = ( (  into_dash_iter993 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1050 = ( (  next990 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_299_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_299_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  void *   cast_dash_ptr1018 (    int32_t *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of1019 (    int32_t  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  int32_t   zeroed1016 (  ) {
    int32_t  temp1017;
    int32_t  x597 = (  temp1017 );
    ( ( memset ) ( ( (  cast_dash_ptr1018 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1019 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  uint8_t *   cast1020 (    int32_t *  x357 ) {
    return ( (uint8_t * ) (  x357 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1014 (    uint8_t  x600 ) {
    int32_t  temp1015 = ( (  zeroed1016 ) ( ) );
    int32_t *  y601 = ( &temp1015 );
    uint8_t *  yp602 = ( (  cast1020 ) ( (  y601 ) ) );
    (*  yp602 ) = (  x600 );
    return ( * (  y601 ) );
}

static  int32_t   u8_dash_i321013 (    uint8_t  x696 ) {
    return ( (  cast_dash_on_dash_zeroed1014 ) ( (  x696 ) ) );
}

static  struct Maybe_155   parse_dash_digit1012 (    struct Char_65  c1449 ) {
    if ( ( (  is_dash_digit984 ) ( (  c1449 ) ) ) ) {
        return ( ( Maybe_155_Just ) ( ( (  u8_dash_i321013 ) ( (  op_dash_sub943 ( ( (  char_dash_u8545 ) ( (  c1449 ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
}

static  int64_t   i32_dash_i641021 (    int32_t  x633 ) {
    return ( (int64_t ) (  x633 ) );
}

static  struct Maybe_978   sequence_dash_maybe1011 (    struct Char_65  e1847 ,    struct Maybe_978  b1849 ) {
    struct Maybe_978  dref1850 = (  b1849 );
    if ( dref1850.tag == Maybe_978_None_t ) {
        return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
    }
    else {
        if ( dref1850.tag == Maybe_978_Just_t ) {
            struct Maybe_155  dref1852 = ( (  parse_dash_digit1012 ) ( (  e1847 ) ) );
            if ( dref1852.tag == Maybe_155_None_t ) {
                return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
            }
            else {
                if ( dref1852.tag == Maybe_155_Just_t ) {
                    return ( ( Maybe_978_Just ) ( (  op_dash_add485 ( (  op_dash_mul288 ( ( dref1850 .stuff .Maybe_978_Just_s .field0 ) , (  from_dash_integral290 ( 10 ) ) ) ) , ( (  i32_dash_i641021 ) ( ( dref1852 .stuff .Maybe_155_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_978   parse_dash_int1006 (    struct TakeWhile_980  s1844 ) {
    struct TakeWhile_980  cs1854 = ( (  chars1007 ) ( (  s1844 ) ) );
    struct Maybe_299  dref1855 = ( (  head989 ) ( (  cs1854 ) ) );
    if ( dref1855.tag == Maybe_299_Just_t ) {
        return ( (  reduce1008 ) ( (  cs1854 ) ,  ( ( Maybe_978_Just ) ( (  from_dash_integral290 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1011 ) ) );
    }
    else {
        if ( dref1855.tag == Maybe_299_None_t ) {
            return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
        }
    }
}

static  struct Maybe_978   scan_dash_int979 (    struct Scanner_966 *  sc3265 ) {
    struct TakeWhile_980  digit_dash_chars3266 = ( (  take_dash_while981 ) ( (  sc3265 ) ,  (  is_dash_digit984 ) ) );
    if ( ( (  null988 ) ( (  digit_dash_chars3266 ) ) ) ) {
        return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
    }
    ( (  drop_prime_994 ) ( (  sc3265 ) ,  ( (  count1001 ) ( (  digit_dash_chars3266 ) ) ) ) );
    return ( (  parse_dash_int1006 ) ( (  digit_dash_chars3266 ) ) );
}

static  int32_t   i64_dash_i321023 (    int64_t  x645 ) {
    return ( (int32_t ) (  x645 ) );
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

static  struct StrConcatIter_1031   into_dash_iter1038 (    struct StrConcatIter_1031  self1208 ) {
    return (  self1208 );
}

struct env1045 {
    int64_t  base1304;
    ;
};

struct envunion1046 {
    int64_t  (*fun) (  struct env1045*  ,    int32_t  ,    int64_t  );
    struct env1045 env;
};

static  int64_t   reduce1044 (    struct Range_150  iterable1043 ,    int64_t  base1045 ,   struct envunion1046  fun1047 ) {
    int64_t  x1048 = (  base1045 );
    struct RangeIter_153  it1049 = ( (  into_dash_iter154 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1050 = ( (  next156 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_155_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_155_Just_t ) {
                struct envunion1046  temp1047 = (  fun1047 );
                x1048 = ( temp1047.fun ( &temp1047.env ,  ( dref1050 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  int64_t   lam1050 (   struct env1045* env ,    int32_t  item1308 ,    int64_t  x1310 ) {
    return (  op_dash_mul288 ( (  x1310 ) , ( env->base1304 ) ) );
}

static  int64_t   pow1043 (    int64_t  base1304 ,    int32_t  p1306 ) {
    struct env1045 envinst1045 = {
        .base1304 =  base1304 ,
    };
    return ( (  reduce1044 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1306 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral290 ( 1 ) ) ,  ( (struct envunion1046){ .fun = (  int64_t  (*) (  struct env1045*  ,    int32_t  ,    int64_t  ) )lam1050 , .env =  envinst1045 } ) ) );
}

static  int64_t   op_dash_div1051 (    int64_t  l200 ,    int64_t  r202 ) {
    return ( (  l200 ) / (  r202 ) );
}

static  uint8_t   cast1052 (    int64_t  x357 ) {
    return ( (uint8_t ) (  x357 ) );
}

static  int64_t   op_dash_sub1053 (    int64_t  l190 ,    int64_t  r192 ) {
    return ( (  l190 ) - (  r192 ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1055 (    uint8_t *  ptr711 ,    uint8_t  b713 ) {
    size_t  s714 = ( ( (size_t ) (  ptr711 ) ) );
    size_t  exp715 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add313 ( (  op_dash_sub291 ( (  s714 ) , ( (  u8_dash_size926 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer344 ) ( (  ptr711 ) ) ) ) ) ) ) , (  op_dash_mul415 ( (  exp715 ) , ( (  u8_dash_size926 ) ( (  b713 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1056 (    size_t  x357 ) {
    return ( (uint8_t * ) (  x357 ) );
}

static  struct Char_65   char_dash_from_dash_u81054 (    uint8_t  b1195 ) {
    uint8_t *  ptr1196 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1055 ) ( ( ( (  cast1056 ) ( ( (  u8_dash_size926 ) ( (  b1195 ) ) ) ) ) ) ,  (  from_dash_integral310 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr1196 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_299   next1042 (    struct IntStrIter_1034 *  self1317 ) {
    if ( ( ( * (  self1317 ) ) .f_negative ) ) {
        (*  self1317 ) .f_negative = ( false );
        return ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    int64_t  trim_dash_down1318 = ( (  pow1043 ) ( (  from_dash_integral290 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1319 = (  op_dash_div1051 ( ( ( * (  self1317 ) ) .f_int ) , (  trim_dash_down1318 ) ) );
    int64_t  upper_dash_mask1320 = (  op_dash_mul288 ( (  op_dash_div1051 ( (  upper1319 ) , (  from_dash_integral290 ( 10 ) ) ) ) , (  from_dash_integral290 ( 10 ) ) ) );
    uint8_t  digit1321 = ( ( (  cast1052 ) ( (  op_dash_sub1053 ( (  upper1319 ) , (  upper_dash_mask1320 ) ) ) ) ) );
    (*  self1317 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1322 = ( (  char_dash_from_dash_u81054 ) ( (  op_dash_add944 ( (  digit1321 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_299_Just ) ( (  digit_dash_char1322 ) ) );
}

static  struct Maybe_299   next1041 (    struct StrConcatIter_1033 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1042 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next1040 (    struct StrConcatIter_1032 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1041 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next1058 (    enum EmptyIter_1036 *  dref725 ) {
    return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
}

static  struct Maybe_299   next1057 (    struct AppendIter_1035 *  self972 ) {
    struct Maybe_299  dref973 = ( (  next1058 ) ( ( & ( ( * (  self972 ) ) .f_it ) ) ) );
    if ( dref973.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref973 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref973.tag == Maybe_299_None_t ) {
            if ( ( ! ( ( * (  self972 ) ) .f_appended ) ) ) {
                (*  self972 ) .f_appended = ( true );
                return ( ( Maybe_299_Just ) ( ( ( * (  self972 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
        }
    }
}

static  struct Maybe_299   next1039 (    struct StrConcatIter_1031 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next1040 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1030 (    struct StrConcatIter_1031  iterable1024 ,    enum Unit_8 (*  fun1026 )(    struct Char_65  ) ) {
    struct StrConcatIter_1031  temp1037 = ( (  into_dash_iter1038 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_1031 *  it1027 = ( &temp1037 );
    while ( ( true ) ) {
        struct Maybe_299  dref1028 = ( (  next1039 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_299_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp1067 (    int64_t  l155 ,    int64_t  r157 ) {
    return ( builtin_int64_tcmp( (  l155 ) , (  r157 ) ) );
}

static  int64_t   op_dash_neg1068 (    int64_t  l205 ) {
    return ( (  from_dash_integral290 ( 0 ) ) - (  l205 ) );
}

static  bool   eq1070 (    int64_t  l102 ,    int64_t  r104 ) {
    return ( (  l102 ) == (  r104 ) );
}

static  int32_t   count_dash_digits1069 (    int64_t  self1325 ) {
    if ( (  eq1070 ( (  self1325 ) , (  from_dash_integral290 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1326 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp1067 ( (  self1325 ) , (  from_dash_integral290 ( 0 ) ) ) == 2 ) ) {
        self1325 = (  op_dash_div1051 ( (  self1325 ) , (  from_dash_integral290 ( 10 ) ) ) );
        digits1326 = (  op_dash_add159 ( (  digits1326 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1326 );
}

static  struct IntStrIter_1034   int_dash_iter1066 (    int64_t  int1329 ) {
    if ( (  cmp1067 ( (  int1329 ) , (  from_dash_integral290 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1034) { .f_int = (  op_dash_neg1068 ( (  int1329 ) ) ) , .f_len = ( (  count_dash_digits1069 ) ( (  op_dash_neg1068 ( (  int1329 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1034) { .f_int = (  int1329 ) , .f_len = ( (  count_dash_digits1069 ) ( (  int1329 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1034   chars1065 (    int64_t  self1726 ) {
    return ( (  int_dash_iter1066 ) ( (  self1726 ) ) );
}

static  struct StrConcatIter_1033   into_dash_iter1064 (    struct StrConcat_1025  dref1215 ) {
    return ( (struct StrConcatIter_1033) { .f_left = ( (  chars471 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1065 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_1033   chars1063 (    struct StrConcat_1025  self1226 ) {
    return ( (  into_dash_iter1064 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_1032   into_dash_iter1062 (    struct StrConcat_1027  dref1215 ) {
    return ( (struct StrConcatIter_1032) { .f_left = ( (  chars471 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1063 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_1032   chars1061 (    struct StrConcat_1027  self1226 ) {
    return ( (  into_dash_iter1062 ) ( (  self1226 ) ) );
}

static  enum EmptyIter_1036   into_dash_iter1075 (    enum EmptyIter_1036  self723 ) {
    return (  self723 );
}

static  struct AppendIter_1035   append1074 (    enum EmptyIter_1036  it956 ,    struct Char_65  e958 ) {
    return ( (struct AppendIter_1035) { .f_it = ( (  into_dash_iter1075 ) ( (  it956 ) ) ) , .f_elem = (  e958 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_1035   cons1073 (    enum EmptyIter_1036  it961 ,    struct Char_65  e963 ) {
    return ( (  append1074 ) ( (  it961 ) ,  (  e963 ) ) );
}

static  enum EmptyIter_1036   nil1076 (  ) {
    return ( EmptyIter_1036_EmptyIter );
}

static  struct AppendIter_1035   single1072 (    struct Char_65  e966 ) {
    return ( (  cons1073 ) ( ( (  nil1076 ) ( ) ) ,  (  e966 ) ) );
}

static  struct AppendIter_1035   chars1071 (    struct Char_65  self1204 ) {
    return ( (  single1072 ) ( (  self1204 ) ) );
}

static  struct StrConcatIter_1031   into_dash_iter1060 (    struct StrConcat_1029  dref1215 ) {
    return ( (struct StrConcatIter_1031) { .f_left = ( (  chars1061 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_1031   chars1059 (    struct StrConcat_1029  self1226 ) {
    return ( (  into_dash_iter1060 ) ( (  self1226 ) ) );
}

static  enum Unit_8   print1028 (    struct StrConcat_1029  s1253 ) {
    ( (  for_dash_each1030 ) ( ( (  chars1059 ) ( (  s1253 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1026 (    struct StrConcat_1027  s1256 ) {
    ( (  print1028 ) ( ( ( StrConcat_1029_StrConcat ) ( (  s1256 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_891   undefined1077 (  ) {
    enum MouseButton_891  temp1078;
    return (  temp1078 );
}

static  enum MouseButton_891   panic_prime_1024 (    struct StrConcat_1025  errmsg1919 ) {
    ( (  println1026 ) ( ( ( StrConcat_1027_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1919 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1077 ) ( ) );
}

static  enum MouseButton_891   btn_dash_to_dash_mouse_dash_button1022 (    int64_t  btn3453 ) {
    return ( {  int32_t  dref3454 = ( (  i64_dash_i321023 ) ( (  btn3453 ) ) ) ;  eq570 (  dref3454 ,  from_dash_integral56 ( 0 ) ) ? ( MouseButton_891_MouseLeft ) :  eq570 (  dref3454 ,  from_dash_integral56 ( 1 ) ) ? ( MouseButton_891_MouseMiddle ) :  eq570 (  dref3454 ,  from_dash_integral56 ( 2 ) ) ? ( MouseButton_891_MouseRight ) :  eq570 (  dref3454 ,  from_dash_integral56 ( 64 ) ) ? ( MouseButton_891_ScrollUp ) :  eq570 (  dref3454 ,  from_dash_integral56 ( 65 ) ) ? ( MouseButton_891_ScrollDown ) : ( (  panic_prime_1024 ) ( ( ( StrConcat_1025_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3453 ) ) ) ) ) ; } );
}

static  struct Scanner_966   mk1080 (    struct StrView_27  s3253 ) {
    return ( (struct Scanner_966) { .f_s = ( (  into_dash_iter472 ) ( (  s3253 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_888   parse_dash_csi960 (    struct Slice_961  seq3460 ) {
    if ( (  eq409 ( ( (  seq3460 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    char  last3461 = (  elem_dash_get962 ( (  seq3460 ) , (  op_dash_sub291 ( ( (  seq3460 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq947 ( (  elem_dash_get962 ( (  seq3460 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) && ( (  eq947 ( (  last3461 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) || (  eq947 ( (  last3461 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_966  temp967 = ( (  mk_dash_from_dash_str968 ) ( ( (  substr969 ) ( ( (  from_dash_ascii_dash_slice975 ) ( (  seq3460 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3460 ) .f_count ) ) ) ) );
        struct Scanner_966 *  sc3462 = ( &temp967 );
        struct Maybe_978  dref3463 = ( (  scan_dash_int979 ) ( (  sc3462 ) ) );
        if ( dref3463.tag == Maybe_978_None_t ) {
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
        else {
            if ( dref3463.tag == Maybe_978_Just_t ) {
                ( (  next991 ) ( (  sc3462 ) ) );
                struct Maybe_978  dref3465 = ( (  scan_dash_int979 ) ( (  sc3462 ) ) );
                if ( dref3465.tag == Maybe_978_None_t ) {
                    return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
                }
                else {
                    if ( dref3465.tag == Maybe_978_Just_t ) {
                        ( (  next991 ) ( (  sc3462 ) ) );
                        struct Maybe_978  dref3467 = ( (  scan_dash_int979 ) ( (  sc3462 ) ) );
                        if ( dref3467.tag == Maybe_978_None_t ) {
                            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
                        }
                        else {
                            if ( dref3467.tag == Maybe_978_Just_t ) {
                                return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Mouse ) ( ( (struct MouseEvent_890) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1022 ) ( ( dref3463 .stuff .Maybe_978_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub164 ( ( (  i64_dash_i321023 ) ( ( dref3465 .stuff .Maybe_978_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub164 ( ( (  i64_dash_i321023 ) ( ( dref3467 .stuff .Maybe_978_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq947 ( (  last3461 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq409 ( ( (  seq3460 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq947 ( (  last3461 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Up_t } ) ) ) ) );
        }
        if ( (  eq947 ( (  last3461 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Down_t } ) ) ) ) );
        }
        if ( (  eq947 ( (  last3461 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Right_t } ) ) ) ) );
        }
        if ( (  eq947 ( (  last3461 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Left_t } ) ) ) ) );
        }
        if ( (  eq947 ( (  last3461 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Home_t } ) ) ) ) );
        }
        if ( (  eq947 ( (  last3461 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    if ( (  eq947 ( (  last3461 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_966  temp1079 = ( (  mk1080 ) ( ( (  from_dash_ascii_dash_slice975 ) ( (  seq3460 ) ) ) ) );
        struct Scanner_966 *  sc3469 = ( &temp1079 );
        struct Maybe_978  dref3470 = ( (  scan_dash_int979 ) ( (  sc3469 ) ) );
        if ( dref3470.tag == Maybe_978_None_t ) {
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
        else {
            if ( dref3470.tag == Maybe_978_Just_t ) {
                return ( {  int32_t  dref3472 = ( (  i64_dash_i321023 ) ( ( dref3470 .stuff .Maybe_978_Just_s .field0 ) ) ) ;  eq570 (  dref3472 ,  from_dash_integral56 ( 1 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Home_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 2 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Insert_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 3 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Delete_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 4 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_End_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 5 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_PageUp_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 6 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_PageDown_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 15 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_F5_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 17 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_F6_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 18 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_F7_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 19 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_F8_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 20 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_F9_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 21 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_F10_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 23 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_F11_t } ) ) ) ) ) :  eq570 (  dref3472 ,  from_dash_integral56 ( 24 ) ) ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_F12_t } ) ) ) ) ) : ( (struct Maybe_888) { .tag = Maybe_888_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
}

static  struct Slice_961   subslice1081 (    struct Slice_961  slice1974 ,    size_t  from1976 ,    size_t  to1978 ) {
    char *  begin_dash_ptr1979 = ( (  offset_dash_ptr958 ) ( ( (  slice1974 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from1976 ) ) ) ) );
    if ( ( (  cmp292 ( (  from1976 ) , (  to1978 ) ) != 0 ) || (  cmp292 ( (  from1976 ) , ( (  slice1974 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_961) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1980 = (  op_dash_sub291 ( ( (  min478 ) ( (  to1978 ) ,  ( (  slice1974 ) .f_count ) ) ) , (  from1976 ) ) );
    return ( (struct Slice_961) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  count1980 ) } );
}

static  char *   cast1083 (    struct Array_948 *  x357 ) {
    return ( (char * ) (  x357 ) );
}

static  struct Slice_961   as_dash_slice1082 (    struct Array_948 *  arr2489 ) {
    return ( (struct Slice_961) { .f_ptr = ( (  cast1083 ) ( (  arr2489 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1085 {
    enum {
        Maybe_1085_None_t,
        Maybe_1085_Just_t,
    } tag;
    union {
        struct {
            struct Key_272  field0;
        } Maybe_1085_Just_s;
    } stuff;
};

static struct Maybe_1085 Maybe_1085_Just (  struct Key_272  field0 ) {
    return ( struct Maybe_1085 ) { .tag = Maybe_1085_Just_t, .stuff = { .Maybe_1085_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1085   parse_dash_ss31086 (    char  c3457 ) {
    if ( (  eq947 ( (  c3457 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_272) { .tag = Key_272_Up_t } ) ) );
    }
    if ( (  eq947 ( (  c3457 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_272) { .tag = Key_272_Down_t } ) ) );
    }
    if ( (  eq947 ( (  c3457 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_272) { .tag = Key_272_Right_t } ) ) );
    }
    if ( (  eq947 ( (  c3457 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_272) { .tag = Key_272_Left_t } ) ) );
    }
    if ( (  eq947 ( (  c3457 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_272) { .tag = Key_272_Home_t } ) ) );
    }
    if ( (  eq947 ( (  c3457 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_272) { .tag = Key_272_End_t } ) ) );
    }
    if ( (  eq947 ( (  c3457 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_272) { .tag = Key_272_F1_t } ) ) );
    }
    if ( (  eq947 ( (  c3457 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_272) { .tag = Key_272_F2_t } ) ) );
    }
    if ( (  eq947 ( (  c3457 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_272) { .tag = Key_272_F3_t } ) ) );
    }
    if ( (  eq947 ( (  c3457 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1085_Just ) ( ( (struct Key_272) { .tag = Key_272_F4_t } ) ) );
    }
    return ( (struct Maybe_1085) { .tag = Maybe_1085_None_t } );
}

static  struct Maybe_888   read_dash_key900 (  ) {
    char  temp901 = ( (  undefined902 ) ( ) );
    char *  ch3474 = ( &temp901 );
    struct Maybe_904  dref3475 = ( (  read_dash_byte905 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3475.tag == Maybe_904_None_t ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    else {
        if ( dref3475.tag == Maybe_904_Just_t ) {
            (*  ch3474 ) = ( dref3475 .stuff .Maybe_904_Just_s .field0 );
        }
    }
    if ( (  eq305 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3474 ) ) ) ) , (  from_dash_integral310 ( 13 ) ) ) ) ) {
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Enter_t } ) ) ) ) );
    }
    if ( (  eq305 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3474 ) ) ) ) , (  from_dash_integral310 ( 127 ) ) ) ) ) {
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp309 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3474 ) ) ) ) , (  from_dash_integral310 ( 27 ) ) ) == 0 ) && ( !  eq305 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3474 ) ) ) ) , (  from_dash_integral310 ( 9 ) ) ) ) ) ) {
        char  letter3477 = ( (  u8_dash_ascii912 ) ( ( (  u32_dash_u8144 ) ( ( (  u32_dash_or740 ) ( ( (  u8_dash_u32913 ) ( ( (  ascii_dash_u8493 ) ( ( * (  ch3474 ) ) ) ) ) ) ,  ( (  from_dash_hex917 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( ( Key_272_Ctrl ) ( (  letter3477 ) ) ) ) ) ) );
    }
    if ( ( !  eq305 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3474 ) ) ) ) , (  from_dash_integral310 ( 27 ) ) ) ) ) {
        if ( (  cmp309 ( ( (  ascii_dash_u8493 ) ( ( * (  ch3474 ) ) ) ) , (  from_dash_integral310 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key900 ) ( ) );
        } else {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( ( Key_272_Char ) ( ( * (  ch3474 ) ) ) ) ) ) ) );
        }
    }
    char  temp946 = ( (  undefined902 ) ( ) );
    char *  ch23478 = ( &temp946 );
    struct Maybe_904  dref3479 = ( (  read_dash_byte905 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3479.tag == Maybe_904_None_t ) {
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3479.tag == Maybe_904_Just_t ) {
            (*  ch23478 ) = ( dref3479 .stuff .Maybe_904_Just_s .field0 );
        }
    }
    if ( (  eq947 ( ( * (  ch23478 ) ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_948  temp949 = ( ( (  zeroed950 ) ( ) ) );
        struct Array_948 *  seq3481 = ( &temp949 );
        int32_t  slen3482 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp157 ( (  slen3482 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp954 = ( (  undefined902 ) ( ) );
            char *  sc3483 = ( &temp954 );
            struct Maybe_904  dref3484 = ( (  read_dash_byte905 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3484.tag == Maybe_904_None_t ) {
                break;
            }
            else {
                if ( dref3484.tag == Maybe_904_Just_t ) {
                    (*  sc3483 ) = ( dref3484 .stuff .Maybe_904_Just_s .field0 );
                }
            }
            ( (  set955 ) ( (  seq3481 ) ,  ( (  i32_dash_size422 ) ( (  slen3482 ) ) ) ,  ( * (  sc3483 ) ) ) );
            slen3482 = (  op_dash_add159 ( (  slen3482 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp309 ( ( (  ascii_dash_u8493 ) ( ( * (  sc3483 ) ) ) ) , (  from_dash_integral310 ( 64 ) ) ) != 0 ) && (  cmp309 ( ( (  ascii_dash_u8493 ) ( ( * (  sc3483 ) ) ) ) , (  from_dash_integral310 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi960 ) ( ( (  subslice1081 ) ( ( (  as_dash_slice1082 ) ( (  seq3481 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size422 ) ( (  slen3482 ) ) ) ) ) ) );
    }
    if ( (  eq947 ( ( * (  ch23478 ) ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1084 = ( (  undefined902 ) ( ) );
        char *  sc3486 = ( &temp1084 );
        struct Maybe_904  dref3487 = ( (  read_dash_byte905 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3487.tag == Maybe_904_None_t ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3487.tag == Maybe_904_Just_t ) {
                (*  sc3486 ) = ( dref3487 .stuff .Maybe_904_Just_s .field0 );
            }
        }
        struct Maybe_1085  dref3489 = ( (  parse_dash_ss31086 ) ( ( * (  sc3486 ) ) ) );
        if ( dref3489.tag == Maybe_1085_None_t ) {
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
        else {
            if ( dref3489.tag == Maybe_1085_Just_t ) {
                return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( dref3489 .stuff .Maybe_1085_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_272) { .tag = Key_272_Escape_t } ) ) ) ) );
}

static  struct Maybe_888   read_dash_event897 (   struct env88* env ,    struct Tui_90 *  tui3499 ) {
    struct envunion89  temp898 = ( (struct envunion89){ .fun = (  bool  (*) (  struct env87*  ,    struct Tui_90 *  ) )update_dash_dimensions899 , .env =  env->envinst87 } );
    ( temp898.fun ( &temp898.env ,  (  tui3499 ) ) );
    struct Maybe_888  dref3500 = ( (  read_dash_key900 ) ( ) );
    if ( dref3500.tag == Maybe_888_None_t ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    else {
        if ( dref3500.tag == Maybe_888_Just_t ) {
            (*  tui3499 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_888_Just ) ( ( dref3500 .stuff .Maybe_888_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_888   lam895 (   struct env886* env ) {
    struct envunion887  temp896 = ( (struct envunion887){ .fun = (  struct Maybe_888  (*) (  struct env88*  ,    struct Tui_90 *  ) )read_dash_event897 , .env =  env->envinst88 } );
    return ( temp896.fun ( &temp896.env ,  ( env->tui4665 ) ) );
}

static  struct Maybe_888   next1088 (    struct FunIter_885 *  self981 ) {
    if ( ( ( * (  self981 ) ) .f_finished ) ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    struct envunion892  temp1089 = ( ( * (  self981 ) ) .f_fun );
    struct Maybe_888  dref982 = ( temp1089.fun ( &temp1089.env ) );
    if ( dref982.tag == Maybe_888_Just_t ) {
        return ( ( Maybe_888_Just ) ( ( dref982 .stuff .Maybe_888_Just_s .field0 ) ) );
    }
    else {
        if ( dref982.tag == Maybe_888_None_t ) {
            (*  self981 ) .f_finished = ( true );
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
    }
}

struct env1092 {
    struct Editor_250 *  ed4515;
    ;
};

struct envunion1093 {
    enum Unit_8  (*fun) (  struct env1092*  ,    struct StrView_27  );
    struct env1092 env;
};

static  enum Unit_8   if_dash_just1091 (    struct Maybe_80  x1519 ,   struct envunion1093  fun1521 ) {
    struct Maybe_80  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_80_Just_t ) {
        struct envunion1093  temp1094 = (  fun1521 );
        ( temp1094.fun ( &temp1094.env ,  ( dref1522 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1095 (   struct env1092* env ,    struct StrView_27  msg4517 ) {
    ( (  free559 ) ( (  msg4517 ) ,  ( ( * ( env->ed4515 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1090 (    struct Editor_250 *  ed4515 ) {
    struct env1092 envinst1092 = {
        .ed4515 =  ed4515 ,
    };
    ( (  if_dash_just1091 ) ( ( ( * (  ed4515 ) ) .f_msg ) ,  ( (struct envunion1093){ .fun = (  enum Unit_8  (*) (  struct env1092*  ,    struct StrView_27  ) )lam1095 , .env =  envinst1092 } ) ) );
    (*  ed4515 ) .f_msg = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1097 {
    enum Unit_8  (*fun) (  struct env266*  ,    struct Editor_250 *  ,    struct Key_272  );
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

static  bool   eq1104 (    enum CursorMovement_1103  l4256 ,    enum CursorMovement_1103  r4258 ) {
    return ( {  struct Tuple2_1105  dref4259 = ( ( Tuple2_1105_Tuple2 ) ( (  l4256 ) ,  (  r4258 ) ) ) ;  dref4259 .field0 == CursorMovement_1103_NoChanges &&  dref4259 .field1 == CursorMovement_1103_NoChanges ? ( true ) :  dref4259 .field0 == CursorMovement_1103_UpdateVI &&  dref4259 .field1 == CursorMovement_1103_UpdateVI ? ( true ) :  dref4259 .field0 == CursorMovement_1103_OverrideSelect &&  dref4259 .field1 == CursorMovement_1103_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_27   from_dash_bytes1109 (    struct Slice_11  sl2340 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2340 ) } );
}

static  struct StrView_27   line1108 (    struct TextBuf_106 *  self3788 ,    int32_t  li3790 ) {
    return ( (  from_dash_bytes1109 ) ( ( (  to_dash_slice577 ) ( ( ( (  get575 ) ( ( & ( ( * (  self3788 ) ) .f_buf ) ) ,  ( (  i32_dash_size422 ) ( (  li3790 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe1112 (    struct Maybe_80  x1510 ,    int32_t (*  fun1512 )(    struct StrView_27  ) ,    int32_t  default1514 ) {
    return ( {  struct Maybe_80  dref1515 = (  x1510 ) ; dref1515.tag == Maybe_80_Just_t ? ( (  fun1512 ) ( ( dref1515 .stuff .Maybe_80_Just_s .field0 ) ) ) : (  default1514 ) ; } );
}

static  struct Maybe_80   char_dash_replacement1113 (    struct Char_65  c4134 ) {
    if ( (  eq480 ( (  c4134 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_80_Just ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
}

static  size_t   reduce1116 (    struct StrViewIter_469  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct StrViewIter_469  it1049 = ( (  into_dash_iter470 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1050 = ( (  next474 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_299_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_299_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  size_t   lam1119 (    struct Char_65  dref1055 ,    size_t  x1057 ) {
    return (  op_dash_add313 ( (  x1057 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1115 (    struct StrViewIter_469  it1054 ) {
    return ( (  reduce1116 ) ( (  it1054 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1119 ) ) );
}

static  int32_t   lam1114 (    struct StrView_27  s4139 ) {
    return ( (  size_dash_i32331 ) ( ( (  count1115 ) ( ( (  chars471 ) ( (  s4139 ) ) ) ) ) ) );
}

static  int32_t   max1121 (    int32_t  l1290 ,    int32_t  r1292 ) {
    if ( (  cmp157 ( (  l1290 ) , (  r1292 ) ) == 2 ) ) {
        return (  l1290 );
    } else {
        return (  r1292 );
    }
}

static  void *   cast_dash_ptr1127 (    wchar_t *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of1128 (    wchar_t  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  wchar_t   zeroed1125 (  ) {
    wchar_t  temp1126;
    wchar_t  x597 = (  temp1126 );
    ( ( memset ) ( ( (  cast_dash_ptr1127 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1128 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  char *   cast_dash_ptr1129 (    uint8_t *  p360 ) {
    return ( (char * ) (  p360 ) );
}

static  size_t   cast1130 (    int64_t  x357 ) {
    return ( (size_t ) (  x357 ) );
}

struct TypeSize_1133 {
    size_t  f_size;
};

static  struct TypeSize_1133   get_dash_typesize1132 (  ) {
    wchar_t  temp1134;
    return ( (struct TypeSize_1133) { .f_size = ( sizeof( ( (  temp1134 ) ) ) ) } );
}

static  wchar_t   cast1136 (    uint32_t  x357 ) {
    return ( (wchar_t ) (  x357 ) );
}

static  wchar_t   to_dash_c_dash_wchar1123 (    struct Char_65  c1389 ) {
    struct CharDestructured_341  dref1390 = ( (  destructure343 ) ( (  c1389 ) ) );
    if ( dref1390.tag == CharDestructured_341_Ref_t ) {
        wchar_t  temp1124 = ( (  zeroed1125 ) ( ) );
        wchar_t *  wcp1392 = ( &temp1124 );
        size_t  num_dash_chars1393 = ( ( mbstowcs ) ( (  wcp1392 ) ,  ( (  cast_dash_ptr1129 ) ( ( ( dref1390 .stuff .CharDestructured_341_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq409 ( (  num_dash_chars1393 ) , ( ( (  cast1130 ) ( ( (  op_dash_neg1068 ( (  from_dash_integral290 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1131 = ( (  from_dash_string57 ) ( ( (uint8_t*)"could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1131);
            abort ( );
            ( Unit_8_Unit );
        }
        return ( * (  wcp1392 ) );
    }
    else {
        if ( dref1390.tag == CharDestructured_341_Scalar_t ) {
            if ( ( ! (  eq409 ( ( (  size_dash_of825 ) ( ( ( dref1390 .stuff .CharDestructured_341_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1132 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1135 = ( (  from_dash_string57 ) ( ( (uint8_t*)"Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1135);
                abort ( );
                ( Unit_8_Unit );
            }
            return ( (  cast1136 ) ( ( ( dref1390 .stuff .CharDestructured_341_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1122 (    struct Char_65  c2567 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1123 ) ( (  c2567 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1120 (    struct Char_65  c3544 ) {
    return ( (  max1121 ) ( ( (  wcwidth1122 ) ( (  c3544 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width1111 (    struct Char_65  c4137 ) {
    return ( (  maybe1112 ) ( ( (  char_dash_replacement1113 ) ( (  c4137 ) ) ) ,  (  lam1114 ) ,  ( (  rendered_dash_wcwidth1120 ) ( (  c4137 ) ) ) ) );
}

static  int32_t   pos_dash_vi1106 (    struct TextBuf_106 *  self4153 ,    struct Pos_26  pos4155 ) {
    int32_t  bi4156 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4157 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_469  temp1107 =  into_dash_iter470 ( ( (  chars471 ) ( ( (  line1108 ) ( (  self4153 ) ,  ( (  pos4155 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_299  __cond1110 =  next474 (&temp1107);
        if (  __cond1110 .tag == 0 ) {
            break;
        }
        struct Char_65  c4159 =  __cond1110 .stuff .Maybe_299_Just_s .field0;
        bi4156 = (  op_dash_add159 ( (  bi4156 ) , ( (  size_dash_i32331 ) ( ( (  c4159 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp157 ( ( (  pos4155 ) .f_bi ) , (  bi4156 ) ) == 0 ) ) {
            break;
        }
        vi4157 = (  op_dash_add159 ( (  vi4157 ) , ( (  char_dash_screen_dash_width1111 ) ( (  c4159 ) ) ) ) );
    }
    return (  vi4157 );
}

struct Tuple2_1139 {
    enum Mode_223  field0;
    enum Mode_223  field1;
};

static struct Tuple2_1139 Tuple2_1139_Tuple2 (  enum Mode_223  field0 ,  enum Mode_223  field1 ) {
    return ( struct Tuple2_1139 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1138 (    enum Mode_223  l4113 ,    enum Mode_223  r4115 ) {
    return ( {  struct Tuple2_1139  dref4116 = ( ( Tuple2_1139_Tuple2 ) ( (  l4113 ) ,  (  r4115 ) ) ) ;  dref4116 .field0 == Mode_223_Normal &&  dref4116 .field1 == Mode_223_Normal ? ( true ) :  dref4116 .field0 == Mode_223_Insert &&  dref4116 .field1 == Mode_223_Insert ? ( true ) :  dref4116 .field0 == Mode_223_Select &&  dref4116 .field1 == Mode_223_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1137 (    struct Pane_222 *  self4245 ,    struct Maybe_34  sel4247 ) {
    if ( ( !  eq1138 ( ( ( * (  self4245 ) ) .f_mode ) , ( Mode_223_Select ) ) ) ) {
        (*  self4245 ) .f_sel = (  sel4247 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors1102 (    struct Pane_222 *  self4262 ,    struct Pos_26  cur4264 ,    struct Maybe_34  sel4266 ,    enum CursorMovement_1103  cursor_dash_movement_dash_type4268 ) {
    if ( ( !  eq1104 ( (  cursor_dash_movement_dash_type4268 ) , ( CursorMovement_1103_NoChanges ) ) ) ) {
        (*  self4262 ) .f_vi = ( (  pos_dash_vi1106 ) ( ( ( * (  self4262 ) ) .f_buf ) ,  (  cur4264 ) ) );
    }
    (*  self4262 ) .f_cursor = (  cur4264 );
    if ( ( !  eq1104 ( (  cursor_dash_movement_dash_type4268 ) , ( CursorMovement_1103_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1137 ) ( (  self4262 ) ,  (  sel4266 ) ) );
    } else {
        (*  self4262 ) .f_sel = (  sel4266 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1141 (    struct StrView_27  self2386 ) {
    return ( ( (  self2386 ) .f_contents ) .f_count );
}

static  size_t   clamp1142 (    size_t  x1566 ,    size_t  mn1568 ,    size_t  mx1570 ) {
    if ( (  cmp292 ( (  x1566 ) , (  mn1568 ) ) == 0 ) ) {
        return (  mn1568 );
    } else {
        if ( (  cmp292 ( (  x1566 ) , (  mx1570 ) ) == 2 ) ) {
            return (  mx1570 );
        } else {
            return (  x1566 );
        }
    }
}

static  size_t   sync_dash_char1144 (    uint8_t *  p1347 ) {
    size_t  i1348 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb1349 = ( * ( (uint8_t * ) ( ( (void*) (  p1347 ) ) + (  op_dash_neg1068 ( ( (  size_dash_i64304 ) ( (  i1348 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp309 ( (  pb1349 ) , (  from_dash_integral310 ( 128 ) ) ) != 0 ) && (  cmp309 ( (  pb1349 ) , (  op_dash_add944 ( (  from_dash_integral310 ( 128 ) ) , (  from_dash_integral310 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i1348 );
        }
        i1348 = (  op_dash_add313 ( (  i1348 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1143 (    uint8_t *  p1352 ) {
    return (  op_dash_add313 ( ( (  sync_dash_char1144 ) ( ( (  offset_dash_ptr302 ) ( (  p1352 ) ,  (  op_dash_neg1068 ( (  from_dash_integral290 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1140 (    struct TextBuf_106 *  self3809 ,    struct Pos_26  pos3811 ) {
    if ( (  eq569 ( (  pos3811 ) , ( (  mk706 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk706 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq570 ( ( (  pos3811 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert679 ) ( (  cmp157 ( ( (  pos3811 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk706 ) ( (  op_dash_sub164 ( ( (  pos3811 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( ( (  line1108 ) ( (  self3809 ) ,  (  op_dash_sub164 ( ( (  pos3811 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line3812 = ( (  line1108 ) ( (  self3809 ) ,  ( (  pos3811 ) .f_line ) ) );
    size_t  pos_dash_bi3813 = ( (  clamp1142 ) ( ( (  i32_dash_size422 ) ( ( (  pos3811 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1141 ) ( (  line3812 ) ) ) ) );
    size_t  off3814 = ( (  previous_dash_char1143 ) ( ( (  offset_dash_ptr302 ) ( ( ( (  line3812 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  pos_dash_bi3813 ) ) ) ) ) ) );
    return ( (  mk706 ) ( ( (  pos3811 ) .f_line ) ,  ( (  size_dash_i32331 ) ( (  op_dash_sub291 ( (  pos_dash_bi3813 ) , (  off3814 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1101 (    struct Pane_222 *  self4274 ) {
    ( (  set_dash_cursors1102 ) ( (  self4274 ) ,  ( (  left_dash_pos1140 ) ( ( ( * (  self4274 ) ) .f_buf ) ,  ( ( * (  self4274 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_222 *   pane1145 (    struct Editor_250 *  ed4505 ) {
    return ( & ( ( * (  ed4505 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1148 (    struct TextBuf_106 *  self3793 ) {
    return ( (  size_dash_i32331 ) ( ( (  size571 ) ( ( & ( ( * (  self3793 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1147 (    struct TextBuf_106 *  self3801 ,    struct Pos_26  pos3803 ) {
    if ( (  cmp157 ( ( (  pos3803 ) .f_line ) , ( (  num_dash_lines1148 ) ( (  self3801 ) ) ) ) != 0 ) ) {
        return ( (  mk706 ) ( ( (  num_dash_lines1148 ) ( (  self3801 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_27  line3804 = ( (  line1108 ) ( (  self3801 ) ,  ( (  pos3803 ) .f_line ) ) );
    int64_t  bi3805 = ( (  i32_dash_i641021 ) ( ( (  pos3803 ) .f_bi ) ) );
    if ( (  cmp1067 ( (  bi3805 ) , ( (  size_dash_i64304 ) ( ( (  num_dash_bytes1141 ) ( (  line3804 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp157 ( (  op_dash_add159 ( ( (  pos3803 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1148 ) ( (  self3801 ) ) ) ) != 0 ) ) {
            return ( (  mk706 ) ( ( (  pos3803 ) .f_line ) ,  ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  line3804 ) ) ) ) ) ) );
        }
        return ( (  mk706 ) ( (  op_dash_add159 ( ( (  pos3803 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off3806 = ( (  size_dash_i32331 ) ( ( (  next_dash_char308 ) ( ( (  offset_dash_ptr302 ) ( ( ( (  line3804 ) .f_contents ) .f_ptr ) ,  (  bi3805 ) ) ) ) ) ) );
    return ( (  mk706 ) ( ( (  pos3803 ) .f_line ) ,  (  op_dash_add159 ( ( (  pos3803 ) .f_bi ) , (  off3806 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1146 (    struct Pane_222 *  self4271 ) {
    ( (  set_dash_cursors1102 ) ( (  self4271 ) ,  ( (  right_dash_pos1147 ) ( ( ( * (  self4271 ) ) .f_buf ) ,  ( ( * (  self4271 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1150 (    struct TextBuf_106 *  self4142 ,    int32_t  ln4144 ,    int32_t  vx4146 ) {
    int32_t  bi4147 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4148 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_469  temp1151 =  into_dash_iter470 ( ( (  chars471 ) ( ( (  line1108 ) ( (  self4142 ) ,  (  ln4144 ) ) ) ) ) );
    while (true) {
        struct Maybe_299  __cond1152 =  next474 (&temp1151);
        if (  __cond1152 .tag == 0 ) {
            break;
        }
        struct Char_65  c4150 =  __cond1152 .stuff .Maybe_299_Just_s .field0;
        vi4148 = (  op_dash_add159 ( (  vi4148 ) , ( (  char_dash_screen_dash_width1111 ) ( (  c4150 ) ) ) ) );
        if ( (  cmp157 ( (  vx4146 ) , (  vi4148 ) ) == 0 ) ) {
            break;
        }
        bi4147 = (  op_dash_add159 ( (  bi4147 ) , ( (  size_dash_i32331 ) ( ( (  c4150 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4147 );
}

static  enum Unit_8   move_dash_down1149 (    struct Pane_222 *  self4277 ,    int32_t  amnt4279 ) {
    struct Pos_26  cur4280 = ( ( * (  self4277 ) ) .f_cursor );
    int32_t  nu_dash_line4281 = ( (  min670 ) ( (  op_dash_add159 ( ( (  cur4280 ) .f_line ) , (  amnt4279 ) ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1148 ) ( ( ( * (  self4277 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4282 = ( ( * (  self4277 ) ) .f_vi );
    int32_t  bi4283 = ( (  vi_dash_bi1150 ) ( ( ( * (  self4277 ) ) .f_buf ) ,  (  nu_dash_line4281 ) ,  (  vci4282 ) ) );
    ( (  set_dash_cursors1102 ) ( (  self4277 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4281 ) , .f_bi = (  bi4283 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1153 (    struct Pane_222 *  self4286 ,    int32_t  amnt4288 ) {
    struct Pos_26  cur4289 = ( ( * (  self4286 ) ) .f_cursor );
    int32_t  nu_dash_line4290 = ( (  max1121 ) ( (  op_dash_sub164 ( ( (  cur4289 ) .f_line ) , (  amnt4288 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4291 = ( ( * (  self4286 ) ) .f_vi );
    int32_t  bi4292 = ( (  vi_dash_bi1150 ) ( ( ( * (  self4286 ) ) .f_buf ) ,  (  nu_dash_line4290 ) ,  (  vci4291 ) ) );
    ( (  set_dash_cursors1102 ) ( (  self4286 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4290 ) , .f_bi = (  bi4292 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1155 (    struct TextBuf_106 *  self3902 ) {
    (*  self3902 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_108_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1154 (    struct Pane_222 *  self4250 ,    enum Mode_223  mode4252 ) {
    if ( (  eq1138 ( (  mode4252 ) , ( Mode_223_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1155 ) ( ( ( * (  self4250 ) ) .f_buf ) ) );
    }
    (*  self4250 ) .f_mode = (  mode4252 );
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

static  struct Map_1159   into_dash_iter1162 (    struct Map_1159  self729 ) {
    return (  self729 );
}

static  struct Maybe_299   next1164 (    struct TakeWhile_1160 *  self914 ) {
    struct Maybe_299  mx915 = ( (  next474 ) ( ( & ( ( * (  self914 ) ) .f_it ) ) ) );
    struct Maybe_299  dref916 = (  mx915 );
    if ( dref916.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref916.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self914 ) ) .f_pred ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct Maybe_248   next1163 (    struct Map_1159 *  dref731 ) {
    struct Maybe_299  dref734 = ( (  next1164 ) ( ( & ( (* dref731 ) .field0 ) ) ) );
    if ( dref734.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    else {
        if ( dref734.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_248_Just ) ( ( ( (* dref731 ) .field1 ) ( ( dref734 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1161 (    struct Map_1159  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    size_t  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct Map_1159  it1049 = ( (  into_dash_iter1162 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_248  dref1050 = ( (  next1163 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_248_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_248_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_248_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  size_t   lam1167 (    size_t  v1062 ,    size_t  s1064 ) {
    return (  op_dash_add313 ( (  v1062 ) , (  s1064 ) ) );
}

static  size_t   sum1158 (    struct Map_1159  it1060 ) {
    return ( (  reduce1161 ) ( (  it1060 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1167 ) ) );
}

static  struct TakeWhile_1160   into_dash_iter1169 (    struct TakeWhile_1160  self911 ) {
    return (  self911 );
}

static  struct Map_1159   map1168 (    struct TakeWhile_1160  iterable738 ,    size_t (*  fun740 )(    struct Char_65  ) ) {
    struct TakeWhile_1160  it741 = ( (  into_dash_iter1169 ) ( (  iterable738 ) ) );
    return ( ( Map_1159_Map ) ( (  it741 ) ,  (  fun740 ) ) );
}

static  struct TakeWhile_1160   take_dash_while1170 (    struct StrView_27  it920 ,    bool (*  pred922 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1160) { .f_it = ( (  into_dash_iter472 ) ( (  it920 ) ) ) , .f_pred = (  pred922 ) } );
}

static  bool   lam1171 (    struct Char_65  c4340 ) {
    return (  eq480 ( (  c4340 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1172 (    struct Char_65  c4342 ) {
    return ( (  c4342 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1157 (    struct Pane_222 *  pane4336 ,    int32_t  line4338 ) {
    return ( (  size_dash_i32331 ) ( ( (  sum1158 ) ( ( (  map1168 ) ( ( (  take_dash_while1170 ) ( ( (  line1108 ) ( ( ( * (  pane4336 ) ) .f_buf ) ,  (  line4338 ) ) ) ,  (  lam1171 ) ) ) ,  (  lam1172 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1156 (    struct Pane_222 *  self4355 ) {
    struct Pos_26  cur4356 = ( ( * (  self4355 ) ) .f_cursor );
    int32_t  indent4357 = ( (  indent_dash_at_dash_line1157 ) ( (  self4355 ) ,  ( (  cur4356 ) .f_line ) ) );
    struct Pos_26  temp1173 = (  cur4356 );
    temp1173 .  f_bi = (  indent4357 );
    ( (  set_dash_cursors1102 ) ( (  self4355 ) ,  ( temp1173 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1174 (    struct Pane_222 *  self4360 ) {
    struct Pos_26  cur4361 = ( ( * (  self4360 ) ) .f_cursor );
    struct Pos_26  temp1175 = (  cur4361 );
    temp1175 .  f_bi = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( ( (  line1108 ) ( ( ( * (  self4360 ) ) .f_buf ) ,  ( (  cur4361 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors1102 ) ( (  self4360 ) ,  ( temp1175 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
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

static  struct Drop_1182   into_dash_iter1184 (    struct Drop_1182  self778 ) {
    return (  self778 );
}

static  struct SliceIter_1183   into_dash_iter1187 (    struct Slice_31  self2020 ) {
    return ( (struct SliceIter_1183) { .f_slice = (  self2020 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1189 (    struct Changeset_32 *  x339 ,    int64_t  count341 ) {
    struct Changeset_32  temp1190;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp1190 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1188 (    struct Slice_31  slice1974 ,    size_t  from1976 ,    size_t  to1978 ) {
    struct Changeset_32 *  begin_dash_ptr1979 = ( (  offset_dash_ptr1189 ) ( ( (  slice1974 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from1976 ) ) ) ) );
    if ( ( (  cmp292 ( (  from1976 ) , (  to1978 ) ) != 0 ) || (  cmp292 ( (  from1976 ) , ( (  slice1974 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1980 = (  op_dash_sub291 ( ( (  min478 ) ( (  to1978 ) ,  ( (  slice1974 ) .f_count ) ) ) , (  from1976 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  count1980 ) } );
}

static  struct SliceIter_1183   into_dash_iter1186 (    struct List_30  self2204 ) {
    return ( (  into_dash_iter1187 ) ( ( (  subslice1188 ) ( ( (  self2204 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2204 ) .f_count ) ) ) ) );
}

static  struct Drop_1182   drop1185 (    struct List_30  iterable785 ,    size_t  i787 ) {
    struct SliceIter_1183  it788 = ( (  into_dash_iter1186 ) ( (  iterable785 ) ) );
    return ( ( Drop_1182_Drop ) ( (  it788 ) ,  (  i787 ) ) );
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

static  struct Maybe_1192   next1194 (    struct SliceIter_1183 *  self2026 ) {
    size_t  off2027 = ( ( * (  self2026 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2026 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1192) { .tag = Maybe_1192_None_t } );
    }
    struct Changeset_32  elem2028 = ( * ( (  offset_dash_ptr1189 ) ( ( ( ( * (  self2026 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2027 ) ) ) ) ) );
    (*  self2026 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1192_Just ) ( (  elem2028 ) ) );
}

static  struct Maybe_1192   next1193 (    struct Drop_1182 *  dref780 ) {
    while ( (  cmp292 ( ( (* dref780 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1194 ) ( ( & ( (* dref780 ) .field0 ) ) ) );
        (* dref780 ) .field1 = (  op_dash_sub291 ( ( (* dref780 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1194 ) ( ( & ( (* dref780 ) .field0 ) ) ) );
}

struct env1197 {
    ;
    enum CAllocator_10  al3741;
};

struct envunion1198 {
    enum Unit_8  (*fun) (  struct env1197*  ,    struct Action_25  );
    struct env1197 env;
};

struct SliceIter_1199 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1199   into_dash_iter1202 (    struct Slice_24  self2020 ) {
    return ( (struct SliceIter_1199) { .f_slice = (  self2020 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1204 (    struct Action_25 *  x339 ,    int64_t  count341 ) {
    struct Action_25  temp1205;
    return ( (struct Action_25 * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp1205 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1203 (    struct Slice_24  slice1974 ,    size_t  from1976 ,    size_t  to1978 ) {
    struct Action_25 *  begin_dash_ptr1979 = ( (  offset_dash_ptr1204 ) ( ( (  slice1974 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from1976 ) ) ) ) );
    if ( ( (  cmp292 ( (  from1976 ) , (  to1978 ) ) != 0 ) || (  cmp292 ( (  from1976 ) , ( (  slice1974 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1980 = (  op_dash_sub291 ( ( (  min478 ) ( (  to1978 ) ,  ( (  slice1974 ) .f_count ) ) ) , (  from1976 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  count1980 ) } );
}

static  struct SliceIter_1199   into_dash_iter1201 (    struct List_23  self2204 ) {
    return ( (  into_dash_iter1202 ) ( ( (  subslice1203 ) ( ( (  self2204 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2204 ) .f_count ) ) ) ) );
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

static  struct Maybe_1206   next1207 (    struct SliceIter_1199 *  self2026 ) {
    size_t  off2027 = ( ( * (  self2026 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2026 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1206) { .tag = Maybe_1206_None_t } );
    }
    struct Action_25  elem2028 = ( * ( (  offset_dash_ptr1204 ) ( ( ( ( * (  self2026 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2027 ) ) ) ) ) );
    (*  self2026 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1206_Just ) ( (  elem2028 ) ) );
}

static  enum Unit_8   for_dash_each1196 (    struct List_23  iterable1024 ,   struct envunion1198  fun1026 ) {
    struct SliceIter_1199  temp1200 = ( (  into_dash_iter1201 ) ( (  iterable1024 ) ) );
    struct SliceIter_1199 *  it1027 = ( &temp1200 );
    while ( ( true ) ) {
        struct Maybe_1206  dref1028 = ( (  next1207 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_1206_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_1206_Just_t ) {
                struct envunion1198  temp1208 = (  fun1026 );
                ( temp1208.fun ( &temp1208.env ,  ( dref1028 .stuff .Maybe_1206_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1210 (    struct Action_25  action3734 ,    enum CAllocator_10  al3736 ) {
    ( (  free559 ) ( ( (  action3734 ) .f_fwd ) ,  (  al3736 ) ) );
    ( (  free559 ) ( ( (  action3734 ) .f_bwd ) ,  (  al3736 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1209 (   struct env1197* env ,    struct Action_25  a3743 ) {
    return ( (  free_dash_action1210 ) ( (  a3743 ) ,  ( env->al3741 ) ) );
}

static  void *   cast_dash_ptr1213 (    struct Action_25 *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  enum Unit_8   free1212 (    enum CAllocator_10  dref2144 ,    struct Slice_24  slice2146 ) {
    if (!(  dref2144 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1213 ) ( ( (  slice2146 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1211 (    struct List_23 *  list2211 ) {
    ( (  free1212 ) ( ( ( * (  list2211 ) ) .f_al ) ,  ( ( * (  list2211 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1195 (    struct Changeset_32  chs3739 ,    enum CAllocator_10  al3741 ) {
    struct env1197 envinst1197 = {
        .al3741 =  al3741 ,
    };
    ( (  for_dash_each1196 ) ( ( (  chs3739 ) .f_parts ) ,  ( (struct envunion1198){ .fun = (  enum Unit_8  (*) (  struct env1197*  ,    struct Action_25  ) )lam1209 , .env =  envinst1197 } ) ) );
    ( (  free1211 ) ( ( & ( (  chs3739 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1214 (    struct List_30 *  l2291 ,    size_t  new_dash_count2293 ) {
    (*  l2291 ) .f_count = ( (  min478 ) ( (  new_dash_count2293 ) ,  ( ( * (  l2291 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1180 (    struct Actions_107 *  actions3757 ) {
    enum CAllocator_10  al3758 = ( ( ( * (  actions3757 ) ) .f_list ) .f_al );
    size_t  cur3759 = ( ( * (  actions3757 ) ) .f_cur );
    struct Drop_1182  temp1181 =  into_dash_iter1184 ( ( (  drop1185 ) ( ( ( * (  actions3757 ) ) .f_list ) ,  (  cur3759 ) ) ) );
    while (true) {
        struct Maybe_1192  __cond1191 =  next1193 (&temp1181);
        if (  __cond1191 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action3761 =  __cond1191 .stuff .Maybe_1192_Just_s .field0;
        ( (  free_dash_changeset1195 ) ( (  action3761 ) ,  (  al3758 ) ) );
    }
    ( (  trim1214 ) ( ( & ( ( * (  actions3757 ) ) .f_list ) ) ,  (  cur3759 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1215 (    struct StrView_27  s2353 ,    enum CAllocator_10  al2355 ) {
    return ( (  clone_dash_0517 ) ( (  s2353 ) ,  (  al2355 ) ) );
}

static  struct Maybe_80   head1217 (    struct SplitIter_612  it1092 ) {
    struct SplitIter_612  temp1218 = ( (  into_dash_iter619 ) ( (  it1092 ) ) );
    return ( (  next628 ) ( ( &temp1218 ) ) );
}

static  struct Maybe_80   head1220 (    struct Drop_611  it1092 ) {
    struct Drop_611  temp1221 = ( (  into_dash_iter617 ) ( (  it1092 ) ) );
    return ( (  next627 ) ( ( &temp1221 ) ) );
}

static  bool   null1219 (    struct Drop_611  it1101 ) {
    struct Maybe_80  dref1102 = ( (  head1220 ) ( (  it1101 ) ) );
    if ( dref1102.tag == Maybe_80_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1223 (    struct StrView_27  errmsg1261 ) {
    ( (  print_dash_str680 ) ( ( ( StrConcat_681_StrConcat ) ( ( ( StrConcat_682_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1261 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_625   undefined1224 (  ) {
    struct Tuple2_625  temp1225;
    return (  temp1225 );
}

static  struct Tuple2_625   or_dash_fail1222 (    struct Maybe_624  x1271 ,    struct StrView_27  errmsg1273 ) {
    struct Maybe_624  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_624_None_t ) {
        ( (  panic1223 ) ( (  errmsg1273 ) ) );
        return ( (  undefined1224 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_624_Just_t ) {
            return ( dref1274 .stuff .Maybe_624_Just_s .field0 );
        }
    }
}

static  struct Maybe_624   reduce1227 (    struct Zip_610  iterable1043 ,    struct Maybe_624  base1045 ,    struct Maybe_624 (*  fun1047 )(    struct Tuple2_625  ,    struct Maybe_624  ) ) {
    struct Maybe_624  x1048 = (  base1045 );
    struct Zip_610  it1049 = ( (  into_dash_iter615 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_624  dref1050 = ( (  next626 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_624_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_624_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_624_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    const char*  temp1228 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1228);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_624  temp1229;
    return (  temp1229 );
}

static  struct Maybe_624   lam1230 (    struct Tuple2_625  e1097 ,    struct Maybe_624  dref1098 ) {
    return ( ( Maybe_624_Just ) ( (  e1097 ) ) );
}

static  struct Maybe_624   last1226 (    struct Zip_610  it1095 ) {
    return ( (  reduce1227 ) ( (  it1095 ) ,  ( (struct Maybe_624) { .tag = Maybe_624_None_t } ) ,  (  lam1230 ) ) );
}

static  int32_t   snd1231 (    struct Tuple2_625  dref1484 ) {
    return ( dref1484 .field1 );
}

static  struct StrView_27   fst1232 (    struct Tuple2_625  dref1481 ) {
    return ( dref1481 .field0 );
}

static  struct Pos_26   pos_dash_after_dash_str1216 (    struct TextBuf_106 *  self3890 ,    struct StrView_27  bytes3892 ,    struct Pos_26  from3894 ) {
    struct SplitIter_612  lines3895 = ( (  split_dash_by_dash_each620 ) ( (  bytes3892 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line3896 = ( (  or_dash_else602 ) ( ( (  head1217 ) ( (  lines3895 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    struct Drop_611  headless3897 = ( (  drop618 ) ( (  lines3895 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1219 ) ( (  headless3897 ) ) ) ) {
        struct Pos_26  next_dash_pos3898 = ( (  mk706 ) ( ( (  from3894 ) .f_line ) ,  (  op_dash_add159 ( ( (  from3894 ) .f_bi ) , ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  first_dash_line3896 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3898 );
    } else {
        struct Tuple2_625  last_dash_line3899 = ( (  or_dash_fail1222 ) ( ( (  last1226 ) ( ( (  zip616 ) ( (  headless3897 ) ,  ( (  from437 ) ( (  op_dash_add159 ( ( (  from3894 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk706 ) ( ( (  snd1231 ) ( (  last_dash_line3899 ) ) ) ,  ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( ( (  fst1232 ) ( (  last_dash_line3899 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1238 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   from_dash_charlike1239 (    uint8_t *  ptr78 ,    size_t  count80 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr78 ) , .f_count = (  count80 ) } ) } );
}

struct envunion1243 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1245 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1247 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   str_dash_between1234 (   struct env125* env ,    struct TextBuf_106 *  self3922 ,    struct Pos_26  from3924 ,    struct Pos_26  to3926 ) {
    enum CAllocator_10  al3927 = ( ( ( * (  self3922 ) ) .f_buf ) .f_al );
    if ( (  eq570 ( ( (  from3924 ) .f_line ) , ( (  to3926 ) .f_line ) ) ) ) {
        if ( (  eq570 ( ( (  from3924 ) .f_line ) , ( (  num_dash_lines1148 ) ( (  self3922 ) ) ) ) ) ) {
            return ( (  clone1215 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  (  al3927 ) ) );
        }
        size_t  from_dash_bi3928 = ( (  i32_dash_size422 ) ( ( (  min670 ) ( ( (  from3924 ) .f_bi ) ,  ( (  to3926 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3929 = ( (  i32_dash_size422 ) ( ( (  max1121 ) ( ( (  from3924 ) .f_bi ) ,  ( (  to3926 ) .f_bi ) ) ) ) );
        return ( (  clone1215 ) ( ( (  byte_dash_substr496 ) ( ( (  line1108 ) ( (  self3922 ) ,  ( (  from3924 ) .f_line ) ) ) ,  (  from_dash_bi3928 ) ,  (  to_dash_bi3929 ) ) ) ,  (  al3927 ) ) );
    } else {
        struct Pos_26  from_dash_pos3930 = ( (  min566 ) ( (  from3924 ) ,  (  to3926 ) ) );
        struct Pos_26  to_dash_pos3931 = ( (  max568 ) ( (  from3924 ) ,  (  to3926 ) ) );
        struct List_9  temp1235 = ( (  mk450 ) ( (  al3927 ) ) );
        struct List_9 *  sb3932 = ( &temp1235 );
        struct StrView_27  first_dash_line3933 = ( (  line1108 ) ( (  self3922 ) ,  ( (  from_dash_pos3930 ) .f_line ) ) );
        struct envunion126  temp1236 = ( (struct envunion126){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all584 , .env =  env->envinst46 } );
        ( temp1236.fun ( &temp1236.env ,  (  sb3932 ) ,  ( ( (  byte_dash_substr496 ) ( (  first_dash_line3933 ) ,  ( (  i32_dash_size422 ) ( ( (  from_dash_pos3930 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1141 ) ( (  first_dash_line3933 ) ) ) ) ) .f_contents ) ) );
        struct envunion1238  temp1237 = ( (struct envunion1238){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all584 , .env =  env->envinst46 } );
        ( temp1237.fun ( &temp1237.env ,  (  sb3932 ) ,  ( ( ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_153  temp1240 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( ( (  from_dash_pos3930 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub164 ( ( (  to_dash_pos3931 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_155  __cond1241 =  next156 (&temp1240);
            if (  __cond1241 .tag == 0 ) {
                break;
            }
            int32_t  i3935 =  __cond1241 .stuff .Maybe_155_Just_s .field0;
            struct envunion1243  temp1242 = ( (struct envunion1243){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all584 , .env =  env->envinst46 } );
            ( temp1242.fun ( &temp1242.env ,  (  sb3932 ) ,  ( ( (  line1108 ) ( (  self3922 ) ,  (  i3935 ) ) ) .f_contents ) ) );
            struct envunion1245  temp1244 = ( (struct envunion1245){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all584 , .env =  env->envinst46 } );
            ( temp1244.fun ( &temp1244.env ,  (  sb3932 ) ,  ( ( ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1247  temp1246 = ( (struct envunion1247){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all584 , .env =  env->envinst46 } );
        ( temp1246.fun ( &temp1246.env ,  (  sb3932 ) ,  ( ( (  byte_dash_substr496 ) ( ( (  line1108 ) ( (  self3922 ) ,  ( (  to_dash_pos3931 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size422 ) ( ( (  to_dash_pos3931 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes1109 ) ( ( (  to_dash_slice577 ) ( ( * (  sb3932 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1248 (    struct Maybe_208  m1492 ) {
    struct Maybe_208  dref1493 = (  m1492 );
    if ( dref1493.tag == Maybe_208_None_t ) {
        return ( true );
    }
    else {
        if ( dref1493.tag == Maybe_208_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1250 {
    enum ChangesetInputType_108  field0;
    enum ChangesetInputType_108  field1;
};

static struct Tuple2_1250 Tuple2_1250_Tuple2 (  enum ChangesetInputType_108  field0 ,  enum ChangesetInputType_108  field1 ) {
    return ( struct Tuple2_1250 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1249 (    enum ChangesetInputType_108  l3747 ,    enum ChangesetInputType_108  r3749 ) {
    return ( {  struct Tuple2_1250  dref3750 = ( ( Tuple2_1250_Tuple2 ) ( (  l3747 ) ,  (  r3749 ) ) ) ;  dref3750 .field0 == ChangesetInputType_108_NoChangeset &&  dref3750 .field1 == ChangesetInputType_108_NoChangeset ? ( true ) :  dref3750 .field0 == ChangesetInputType_108_InputChangeset &&  dref3750 .field1 == ChangesetInputType_108_InputChangeset ? ( true ) :  dref3750 .field0 == ChangesetInputType_108_CustomChangeset &&  dref3750 .field1 == ChangesetInputType_108_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1252 (    struct Slice_31  slice1940 ,    size_t  i1942 ) {
    if ( ( (  cmp292 ( (  i1942 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1942 ) , ( (  slice1940 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1942 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1940 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr1943 = ( (  offset_dash_ptr1189 ) ( ( (  slice1940 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1942 ) ) ) ) );
    return (  elem_dash_ptr1943 );
}

static  struct Changeset_32 *   last_dash_ptr1251 (    struct Slice_31  s2131 ) {
    if ( (  eq409 ( ( (  s2131 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1223 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1252 ) ( (  s2131 ) ,  (  op_dash_sub291 ( ( (  s2131 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1253 (    struct List_30  l2302 ) {
    struct Changeset_32 *  ptr2303 = ( ( (  l2302 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2303 ) , .f_count = ( (  l2302 ) .f_count ) } );
}

struct TypeSize_1260 {
    size_t  f_size;
};

static  struct TypeSize_1260   get_dash_typesize1259 (  ) {
    struct Action_25  temp1261;
    return ( (struct TypeSize_1260) { .f_size = ( sizeof( ( (  temp1261 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1262 (    void *  p360 ) {
    return ( (struct Action_25 * ) (  p360 ) );
}

static  struct Slice_24   allocate1258 (    enum CAllocator_10  dref2138 ,    size_t  count2140 ) {
    if (!(  dref2138 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2141 = ( ( ( (  get_dash_typesize1259 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr2142 = ( (  cast_dash_ptr1262 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2141 ) , (  count2140 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr2142 ) , .f_count = (  count2140 ) } );
}

struct env1263 {
    ;
    struct Slice_24  new_dash_slice2218;
    ;
};

struct Tuple2_1265 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1265 Tuple2_1265_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1265 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1264 {
    enum Unit_8  (*fun) (  struct env1263*  ,    struct Tuple2_1265  );
    struct env1263 env;
};

static  struct Action_25 *   get_dash_ptr1268 (    struct Slice_24  slice1940 ,    size_t  i1942 ) {
    if ( ( (  cmp292 ( (  i1942 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1942 ) , ( (  slice1940 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1942 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1940 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr1943 = ( (  offset_dash_ptr1204 ) ( ( (  slice1940 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1942 ) ) ) ) );
    return (  elem_dash_ptr1943 );
}

static  enum Unit_8   set1267 (    struct Slice_24  slice1957 ,    size_t  i1959 ,    struct Action_25  x1961 ) {
    struct Action_25 *  ep1962 = ( (  get_dash_ptr1268 ) ( (  slice1957 ) ,  (  i1959 ) ) );
    (*  ep1962 ) = (  x1961 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1266 (   struct env1263* env ,    struct Tuple2_1265  dref2219 ) {
    return ( (  set1267 ) ( ( env->new_dash_slice2218 ) ,  ( (  i32_dash_size422 ) ( ( dref2219 .field1 ) ) ) ,  ( dref2219 .field0 ) ) );
}

struct Zip_1270 {
    struct SliceIter_1199  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

static  struct Zip_1270   into_dash_iter1272 (    struct Zip_1270  self861 ) {
    return (  self861 );
}

struct Maybe_1273 {
    enum {
        Maybe_1273_None_t,
        Maybe_1273_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1265  field0;
        } Maybe_1273_Just_s;
    } stuff;
};

static struct Maybe_1273 Maybe_1273_Just (  struct Tuple2_1265  field0 ) {
    return ( struct Maybe_1273 ) { .tag = Maybe_1273_Just_t, .stuff = { .Maybe_1273_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1273   next1274 (    struct Zip_1270 *  self864 ) {
    struct Zip_1270  copy865 = ( * (  self864 ) );
    while ( ( true ) ) {
        struct Maybe_1206  dref866 = ( (  next1207 ) ( ( & ( (  copy865 ) .f_left_dash_it ) ) ) );
        if ( dref866.tag == Maybe_1206_None_t ) {
            return ( (struct Maybe_1273) { .tag = Maybe_1273_None_t } );
        }
        else {
            if ( dref866.tag == Maybe_1206_Just_t ) {
                struct Maybe_155  dref868 = ( (  next432 ) ( ( & ( (  copy865 ) .f_right_dash_it ) ) ) );
                if ( dref868.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_1273) { .tag = Maybe_1273_None_t } );
                }
                else {
                    if ( dref868.tag == Maybe_155_Just_t ) {
                        ( (  next1207 ) ( ( & ( ( * (  self864 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self864 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1273_Just ) ( ( ( Tuple2_1265_Tuple2 ) ( ( dref866 .stuff .Maybe_1206_Just_s .field0 ) ,  ( dref868 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1269 (    struct Zip_1270  iterable1024 ,   struct envunion1264  fun1026 ) {
    struct Zip_1270  temp1271 = ( (  into_dash_iter1272 ) ( (  iterable1024 ) ) );
    struct Zip_1270 *  it1027 = ( &temp1271 );
    while ( ( true ) ) {
        struct Maybe_1273  dref1028 = ( (  next1274 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_1273_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_1273_Just_t ) {
                struct envunion1264  temp1275 = (  fun1026 );
                ( temp1275.fun ( &temp1275.env ,  ( dref1028 .stuff .Maybe_1273_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1270   zip1276 (    struct Slice_24  left872 ,    struct FromIter_426  right874 ) {
    struct SliceIter_1199  left_dash_it875 = ( (  into_dash_iter1202 ) ( (  left872 ) ) );
    struct FromIter_426  right_dash_it876 = ( (  into_dash_iter436 ) ( (  right874 ) ) );
    return ( (struct Zip_1270) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1257 (   struct env3* env ,    struct List_23 *  list2217 ) {
    if ( (  eq409 ( ( ( * (  list2217 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2217 ) .f_elements = ( (  allocate1258 ) ( ( ( * (  list2217 ) ) .f_al ) ,  ( env->starting_dash_size2212 ) ) );
    } else {
        if ( (  eq409 ( ( ( * (  list2217 ) ) .f_count ) , ( ( ( * (  list2217 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2218 = ( (  allocate1258 ) ( ( ( * (  list2217 ) ) .f_al ) ,  (  op_dash_mul415 ( ( ( * (  list2217 ) ) .f_count ) , ( env->growth_dash_factor2213 ) ) ) ) );
            struct env1263 envinst1263 = {
                .new_dash_slice2218 =  new_dash_slice2218 ,
            };
            struct envunion1264  fun2222 = ( (struct envunion1264){ .fun = (  enum Unit_8  (*) (  struct env1263*  ,    struct Tuple2_1265  ) )lam1266 , .env =  envinst1263 } );
            ( (  for_dash_each1269 ) ( ( (  zip1276 ) ( ( ( * (  list2217 ) ) .f_elements ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2222 ) ) );
            ( (  free1212 ) ( ( ( * (  list2217 ) ) .f_al ) ,  ( ( * (  list2217 ) ) .f_elements ) ) );
            (*  list2217 ) .f_elements = (  new_dash_slice2218 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1255 (   struct env21* env ,    struct List_23 *  list2225 ,    struct Action_25  elem2227 ) {
    struct envunion22  temp1256 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1257 , .env =  env->envinst3 } );
    ( temp1256.fun ( &temp1256.env ,  (  list2225 ) ) );
    ( (  set1267 ) ( ( ( * (  list2225 ) ) .f_elements ) ,  ( ( * (  list2225 ) ) .f_count ) ,  (  elem2227 ) ) );
    (*  list2225 ) .f_count = (  op_dash_add313 ( ( ( * (  list2225 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1283 (    struct Action_25 * *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of1284 (    struct Action_25 *  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  struct Action_25 *   zeroed1281 (  ) {
    struct Action_25 *  temp1282;
    struct Action_25 *  x597 = (  temp1282 );
    ( ( memset ) ( ( (  cast_dash_ptr1283 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1284 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  struct Action_25 *   null_dash_ptr1280 (  ) {
    return ( (  zeroed1281 ) ( ) );
}

static  struct Slice_24   empty1279 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1280 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1278 (    enum CAllocator_10  al2207 ) {
    struct Slice_24  elements2208 = ( (  empty1279 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2207 ) , .f_elements = (  elements2208 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1285 (    struct Maybe_208  self1278 ,    struct Cursors_33  alt1280 ) {
    struct Maybe_208  dref1281 = (  self1278 );
    if ( dref1281.tag == Maybe_208_None_t ) {
        return (  alt1280 );
    }
    else {
        if ( dref1281.tag == Maybe_208_Just_t ) {
            return ( dref1281 .stuff .Maybe_208_Just_s .field0 );
        }
    }
}

struct envunion1287 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1294 {
    size_t  f_size;
};

static  struct TypeSize_1294   get_dash_typesize1293 (  ) {
    struct Changeset_32  temp1295;
    return ( (struct TypeSize_1294) { .f_size = ( sizeof( ( (  temp1295 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1296 (    void *  p360 ) {
    return ( (struct Changeset_32 * ) (  p360 ) );
}

static  struct Slice_31   allocate1292 (    enum CAllocator_10  dref2138 ,    size_t  count2140 ) {
    if (!(  dref2138 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2141 = ( ( ( (  get_dash_typesize1293 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr2142 = ( (  cast_dash_ptr1296 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2141 ) , (  count2140 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr2142 ) , .f_count = (  count2140 ) } );
}

struct env1297 {
    ;
    struct Slice_31  new_dash_slice2218;
    ;
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

static  enum Unit_8   set1301 (    struct Slice_31  slice1957 ,    size_t  i1959 ,    struct Changeset_32  x1961 ) {
    struct Changeset_32 *  ep1962 = ( (  get_dash_ptr1252 ) ( (  slice1957 ) ,  (  i1959 ) ) );
    (*  ep1962 ) = (  x1961 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1300 (   struct env1297* env ,    struct Tuple2_1299  dref2219 ) {
    return ( (  set1301 ) ( ( env->new_dash_slice2218 ) ,  ( (  i32_dash_size422 ) ( ( dref2219 .field1 ) ) ) ,  ( dref2219 .field0 ) ) );
}

struct Zip_1303 {
    struct SliceIter_1183  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

static  struct Zip_1303   into_dash_iter1305 (    struct Zip_1303  self861 ) {
    return (  self861 );
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

static  struct Maybe_1306   next1307 (    struct Zip_1303 *  self864 ) {
    struct Zip_1303  copy865 = ( * (  self864 ) );
    while ( ( true ) ) {
        struct Maybe_1192  dref866 = ( (  next1194 ) ( ( & ( (  copy865 ) .f_left_dash_it ) ) ) );
        if ( dref866.tag == Maybe_1192_None_t ) {
            return ( (struct Maybe_1306) { .tag = Maybe_1306_None_t } );
        }
        else {
            if ( dref866.tag == Maybe_1192_Just_t ) {
                struct Maybe_155  dref868 = ( (  next432 ) ( ( & ( (  copy865 ) .f_right_dash_it ) ) ) );
                if ( dref868.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_1306) { .tag = Maybe_1306_None_t } );
                }
                else {
                    if ( dref868.tag == Maybe_155_Just_t ) {
                        ( (  next1194 ) ( ( & ( ( * (  self864 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self864 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1306_Just ) ( ( ( Tuple2_1299_Tuple2 ) ( ( dref866 .stuff .Maybe_1192_Just_s .field0 ) ,  ( dref868 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1302 (    struct Zip_1303  iterable1024 ,   struct envunion1298  fun1026 ) {
    struct Zip_1303  temp1304 = ( (  into_dash_iter1305 ) ( (  iterable1024 ) ) );
    struct Zip_1303 *  it1027 = ( &temp1304 );
    while ( ( true ) ) {
        struct Maybe_1306  dref1028 = ( (  next1307 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_1306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_1306_Just_t ) {
                struct envunion1298  temp1308 = (  fun1026 );
                ( temp1308.fun ( &temp1308.env ,  ( dref1028 .stuff .Maybe_1306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1303   zip1309 (    struct Slice_31  left872 ,    struct FromIter_426  right874 ) {
    struct SliceIter_1183  left_dash_it875 = ( (  into_dash_iter1187 ) ( (  left872 ) ) );
    struct FromIter_426  right_dash_it876 = ( (  into_dash_iter436 ) ( (  right874 ) ) );
    return ( (struct Zip_1303) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

static  void *   cast_dash_ptr1311 (    struct Changeset_32 *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  enum Unit_8   free1310 (    enum CAllocator_10  dref2144 ,    struct Slice_31  slice2146 ) {
    if (!(  dref2144 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1311 ) ( ( (  slice2146 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1291 (   struct env4* env ,    struct List_30 *  list2217 ) {
    if ( (  eq409 ( ( ( * (  list2217 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2217 ) .f_elements = ( (  allocate1292 ) ( ( ( * (  list2217 ) ) .f_al ) ,  ( env->starting_dash_size2212 ) ) );
    } else {
        if ( (  eq409 ( ( ( * (  list2217 ) ) .f_count ) , ( ( ( * (  list2217 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2218 = ( (  allocate1292 ) ( ( ( * (  list2217 ) ) .f_al ) ,  (  op_dash_mul415 ( ( ( * (  list2217 ) ) .f_count ) , ( env->growth_dash_factor2213 ) ) ) ) );
            struct env1297 envinst1297 = {
                .new_dash_slice2218 =  new_dash_slice2218 ,
            };
            struct envunion1298  fun2222 = ( (struct envunion1298){ .fun = (  enum Unit_8  (*) (  struct env1297*  ,    struct Tuple2_1299  ) )lam1300 , .env =  envinst1297 } );
            ( (  for_dash_each1302 ) ( ( (  zip1309 ) ( ( ( * (  list2217 ) ) .f_elements ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2222 ) ) );
            ( (  free1310 ) ( ( ( * (  list2217 ) ) .f_al ) ,  ( ( * (  list2217 ) ) .f_elements ) ) );
            (*  list2217 ) .f_elements = (  new_dash_slice2218 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1289 (   struct env28* env ,    struct List_30 *  list2225 ,    struct Changeset_32  elem2227 ) {
    struct envunion29  temp1290 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1291 , .env =  env->envinst4 } );
    ( temp1290.fun ( &temp1290.env ,  (  list2225 ) ) );
    ( (  set1301 ) ( ( ( * (  list2225 ) ) .f_elements ) ,  ( ( * (  list2225 ) ) .f_count ) ,  (  elem2227 ) ) );
    (*  list2225 ) .f_count = (  op_dash_add313 ( ( ( * (  list2225 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1313 (   struct env119* env ,    struct TextBuf_106 *  self3885 ,    struct Action_25  action3887 ) {
    struct envunion120  temp1314 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action565 , .env =  env->envinst100 } );
    ( temp1314.fun ( &temp1314.env ,  (  self3885 ) ,  ( (  action3887 ) .f_from ) ,  ( (  action3887 ) .f_to_dash_bwd ) ,  ( (  action3887 ) .f_fwd ) ) );
    return ( (  action3887 ) .f_to_dash_fwd );
}

static  struct Maybe_208   change1179 (   struct env127* env ,    struct TextBuf_106 *  self3952 ,    struct Pos_26  from3954 ,    struct Pos_26  to3956 ,    struct StrView_27  bytes3958 ,    struct Maybe_208  before_dash_cursors3960 ) {
    struct Pos_26  from_dash_pos3961 = ( (  min566 ) ( (  from3954 ) ,  (  to3956 ) ) );
    struct Pos_26  to_dash_pos3962 = ( (  max568 ) ( (  from3954 ) ,  (  to3956 ) ) );
    struct Actions_107 *  actions3963 = ( & ( ( * (  self3952 ) ) .f_actions ) );
    ( (  trim_dash_actions1180 ) ( (  actions3963 ) ) );
    struct envunion131  temp1233 = ( (struct envunion131){ .fun = (  struct StrView_27  (*) (  struct env125*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1234 , .env =  env->envinst125 } );
    struct Action_25  action3964 = ( (struct Action_25) { .f_from = (  from3954 ) , .f_fwd = ( (  clone1215 ) ( (  bytes3958 ) ,  ( ( * (  self3952 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1216 ) ( (  self3952 ) ,  (  bytes3958 ) ,  (  from_dash_pos3961 ) ) ) , .f_bwd = ( temp1233.fun ( &temp1233.env ,  (  self3952 ) ,  (  from_dash_pos3961 ) ,  (  to_dash_pos3962 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3962 ) } );
    enum CAllocator_10  al3965 = ( ( ( * (  actions3963 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3966 = ( (  is_dash_none1248 ) ( (  before_dash_cursors3960 ) ) );
    if ( ( (  eq1249 ( ( ( ( * (  self3952 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_108_CustomChangeset ) ) ) || ( (  eq1249 ( ( ( ( * (  self3952 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_108_InputChangeset ) ) ) && (  is_dash_typed_dash_in3966 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset3967 = ( (  last_dash_ptr1251 ) ( ( (  to_dash_slice1253 ) ( ( ( * (  actions3963 ) ) .f_list ) ) ) ) );
        struct envunion129  temp1254 = ( (struct envunion129){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1255 , .env =  env->envinst21 } );
        ( temp1254.fun ( &temp1254.env ,  ( & ( ( * (  last_dash_changeset3967 ) ) .f_parts ) ) ,  (  action3964 ) ) );
    } else {
        struct Changeset_32  temp1277 = ( (struct Changeset_32) { .f_parts = ( (  mk1278 ) ( (  al3965 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1285 ) ( (  before_dash_cursors3960 ) ,  ( (struct Cursors_33) { .f_cur = (  from3954 ) , .f_sel = ( (  eq569 ( (  from3954 ) , (  to3956 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to3956 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset3968 = ( &temp1277 );
        struct envunion1287  temp1286 = ( (struct envunion1287){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1255 , .env =  env->envinst21 } );
        ( temp1286.fun ( &temp1286.env ,  ( & ( ( * (  changeset3968 ) ) .f_parts ) ) ,  (  action3964 ) ) );
        struct envunion130  temp1288 = ( (struct envunion130){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1289 , .env =  env->envinst28 } );
        ( temp1288.fun ( &temp1288.env ,  ( & ( ( * (  actions3963 ) ) .f_list ) ) ,  ( * (  changeset3968 ) ) ) );
        (*  actions3963 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3966 ) ? ( ChangesetInputType_108_InputChangeset ) : ( ChangesetInputType_108_NoChangeset ) );
        (*  actions3963 ) .f_cur = (  op_dash_add313 ( ( ( * (  actions3963 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion128  temp1312 = ( (struct envunion128){ .fun = (  struct Pos_26  (*) (  struct env119*  ,    struct TextBuf_106 *  ,    struct Action_25  ) )action_dash_fwd1313 , .env =  env->envinst119 } );
    struct Pos_26  to_dash_fwd3969 = ( temp1312.fun ( &temp1312.env ,  (  self3952 ) ,  (  action3964 ) ) );
    if ( (  cmp292 ( ( (  num_dash_bytes1141 ) ( ( (  action3964 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3970 = ( (  left_dash_pos1140 ) ( (  self3952 ) ,  (  to_dash_fwd3969 ) ) );
        return ( ( Maybe_208_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3970 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action3964 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_208_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3969 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1177 (   struct env206* env ,    struct Pane_222 *  self4373 ,    struct StrView_27  s4375 ) {
    struct Pos_26  cur4376 = ( ( * (  self4373 ) ) .f_cursor );
    struct envunion207  temp1178 = ( (struct envunion207){ .fun = (  struct Maybe_208  (*) (  struct env127*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  ) )change1179 , .env =  env->envinst127 } );
    ( temp1178.fun ( &temp1178.env ,  ( ( * (  self4373 ) ) .f_buf ) ,  (  cur4376 ) ,  (  cur4376 ) ,  (  s4375 ) ,  ( (struct Maybe_208) { .tag = Maybe_208_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1320 (   struct env217* env ,    struct Pane_222 *  self4411 ,    int32_t  line4413 ) {
    struct envunion218  temp1321 = ( (struct envunion218){ .fun = (  struct Maybe_208  (*) (  struct env127*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  ) )change1179 , .env =  env->envinst127 } );
    ( temp1321.fun ( &temp1321.env ,  ( ( * (  self4411 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4413 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4413 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_208) { .tag = Maybe_208_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1316 (   struct env228* env ,    struct Pane_222 *  self4432 ,    int32_t  indent4434 ) {
    struct RangeIter_153  temp1317 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4434 ) ) ) );
    while (true) {
        struct Maybe_155  __cond1318 =  next156 (&temp1317);
        if (  __cond1318 .tag == 0 ) {
            break;
        }
        int32_t  dref4435 =  __cond1318 .stuff .Maybe_155_Just_s .field0;
        struct envunion229  temp1319 = ( (struct envunion229){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Pane_222 *  ,    int32_t  ) )indent_dash_at1320 , .env =  env->envinst217 } );
        ( temp1319.fun ( &temp1319.env ,  (  self4432 ) ,  ( ( ( * (  self4432 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1146 ) ( (  self4432 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1322 (    struct Pane_222 *  self4352 ) {
    struct Pos_26  temp1323 = ( ( * (  self4352 ) ) .f_cursor );
    temp1323 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors1102 ) ( (  self4352 ) ,  ( temp1323 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1325 {
    enum Unit_8  (*fun) (  struct env206*  ,    struct Pane_222 *  ,    struct StrView_27  );
    struct env206 env;
};

struct envunion1327 {
    enum Unit_8  (*fun) (  struct env228*  ,    struct Pane_222 *  ,    int32_t  );
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

static  struct Pos_26   own1332 (    struct Pos_26  x1479 ) {
    return (  x1479 );
}

struct env1333 {
    ;
    struct Pane_222 *  pane4313;
    enum MoveDirection_1329  dir4315;
    struct Pos_26 *  prev4318;
    ;
};

static  bool   is_dash_at_dash_line_dash_end1335 (    struct Pane_222 *  pane4295 ,    struct Pos_26  pos4297 ) {
    return (  eq409 ( ( (  i32_dash_size422 ) ( ( (  pos4297 ) .f_bi ) ) ) , ( (  num_dash_bytes1141 ) ( ( (  line1108 ) ( ( ( * (  pane4295 ) ) .f_buf ) ,  ( (  pos4297 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1334 (    struct Pane_222 *  pane4300 ) {
    return ( (  is_dash_at_dash_line_dash_end1335 ) ( (  pane4300 ) ,  ( ( * (  pane4300 ) ) .f_cursor ) ) );
}

struct envunion1337 {
    enum Unit_8  (*fun) (  struct env1333*  );
    struct env1333 env;
};

static  enum Unit_8   advance1338 (   struct env1333* env ) {
    (* env->prev4318 ) = ( ( * ( env->pane4313 ) ) .f_cursor );
    enum MoveDirection_1329  dref4320 = ( env->dir4315 );
    switch (  dref4320 ) {
        case MoveDirection_1329_MoveFwd : {
            ( (  move_dash_right1146 ) ( ( env->pane4313 ) ) );
            break;
        }
        case MoveDirection_1329_MoveBwd : {
            ( (  move_dash_left1101 ) ( ( env->pane4313 ) ) );
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

static  bool   eq1341 (    enum CharType_1342  l3713 ,    enum CharType_1342  r3715 ) {
    struct Tuple2_1343  dref3716 = ( ( Tuple2_1343_Tuple2 ) ( (  l3713 ) ,  (  r3715 ) ) );
    if (  dref3716 .field0 == CharType_1342_CharSpace &&  dref3716 .field1 == CharType_1342_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3716 .field0 == CharType_1342_CharWord &&  dref3716 .field1 == CharType_1342_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3716 .field0 == CharType_1342_CharPunctuation &&  dref3716 .field1 == CharType_1342_CharPunctuation ) {
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

static  bool   is_dash_alpha1346 (    struct Char_65  c1415 ) {
    return ( ( (  cmp292 ( ( (  c1415 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between985 ) ( (  c1415 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between985 ) ( (  c1415 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1345 (    struct Char_65  c1436 ) {
    return ( ( (  is_dash_alpha1346 ) ( (  c1436 ) ) ) || ( (  is_dash_digit984 ) ( (  c1436 ) ) ) );
}

static  bool   is_dash_whitespace1347 (    struct Char_65  c1418 ) {
    return ( ( (  eq480 ( (  c1418 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) || (  eq480 ( (  c1418 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq480 ( (  c1418 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1342   char_dash_type1344 (    struct Char_65  c3719 ) {
    if ( ( ( ( (  is_dash_alphanumeric1345 ) ( (  c3719 ) ) ) || (  eq480 ( (  c3719 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) || (  eq480 ( (  c3719 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1342_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1347 ) ( (  c3719 ) ) ) ) {
            return ( CharType_1342_CharSpace );
        } else {
            return ( CharType_1342_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1340 (    struct Char_65  l3722 ,    struct Char_65  r3724 ) {
    return ( !  eq1341 ( ( (  char_dash_type1344 ) ( (  l3722 ) ) ) , ( (  char_dash_type1344 ) ( (  r3724 ) ) ) ) );
}

static  struct Char_65   or_dash_else1349 (    struct Maybe_299  self1278 ,    struct Char_65  alt1280 ) {
    struct Maybe_299  dref1281 = (  self1278 );
    if ( dref1281.tag == Maybe_299_None_t ) {
        return (  alt1280 );
    }
    else {
        if ( dref1281.tag == Maybe_299_Just_t ) {
            return ( dref1281 .stuff .Maybe_299_Just_s .field0 );
        }
    }
}

static  struct Maybe_299   head1350 (    struct StrViewIter_469  it1092 ) {
    struct StrViewIter_469  temp1351 = ( (  into_dash_iter470 ) ( (  it1092 ) ) );
    return ( (  next474 ) ( ( &temp1351 ) ) );
}

static  struct Char_65   char_dash_at1348 (    struct Pane_222 *  pane4162 ,    struct Pos_26  pos4164 ) {
    struct StrView_27  line4165 = ( (  line1108 ) ( ( ( * (  pane4162 ) ) .f_buf ) ,  ( (  pos4164 ) .f_line ) ) );
    return ( (  or_dash_else1349 ) ( ( (  head1350 ) ( ( (  chars471 ) ( ( (  byte_dash_substr496 ) ( (  line4165 ) ,  ( (  i32_dash_size422 ) ( ( (  pos4164 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1141 ) ( (  line4165 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
}

struct StrConcatIter_1356 {
    struct StrViewIter_469  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_1356   into_dash_iter1358 (    struct StrConcatIter_1356  self1208 ) {
    return (  self1208 );
}

static  struct Maybe_299   next1359 (    struct StrConcatIter_1356 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1355 (    struct StrConcatIter_1356  iterable1024 ,    enum Unit_8 (*  fun1026 )(    struct Char_65  ) ) {
    struct StrConcatIter_1356  temp1357 = ( (  into_dash_iter1358 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_1356 *  it1027 = ( &temp1357 );
    while ( ( true ) ) {
        struct Maybe_299  dref1028 = ( (  next1359 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_299_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1356   into_dash_iter1361 (    struct StrConcat_71  dref1215 ) {
    return ( (struct StrConcatIter_1356) { .f_left = ( (  chars471 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_1356   chars1360 (    struct StrConcat_71  self1226 ) {
    return ( (  into_dash_iter1361 ) ( (  self1226 ) ) );
}

static  enum Unit_8   print1354 (    struct StrConcat_71  s1253 ) {
    ( (  for_dash_each1355 ) ( ( (  chars1360 ) ( (  s1253 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1353 (    struct StrView_27  s1256 ) {
    ( (  print1354 ) ( ( ( StrConcat_71_StrConcat ) ( (  s1256 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
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

static  bool   reached_dash_target1339 (    struct Pane_222 *  pane4305 ,    enum MoveTarget_1330  target4307 ,    struct Pos_26  prev4309 ) {
    return ( {  enum MoveTarget_1330  dref4310 = (  target4307 ) ;  dref4310 == MoveTarget_1330_NextWordStart ? ( ( (  is_dash_word_dash_boundary1340 ) ( ( (  char_dash_at1348 ) ( (  pane4305 ) ,  (  prev4309 ) ) ) ,  ( (  char_dash_at1348 ) ( (  pane4305 ) ,  ( ( * (  pane4305 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1341 ( ( (  char_dash_type1344 ) ( ( (  char_dash_at1348 ) ( (  pane4305 ) ,  ( ( * (  pane4305 ) ) .f_cursor ) ) ) ) ) , ( CharType_1342_CharSpace ) ) ) ) ) :  dref4310 == MoveTarget_1330_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1340 ) ( ( (  char_dash_at1348 ) ( (  pane4305 ) ,  (  prev4309 ) ) ) ,  ( (  char_dash_at1348 ) ( (  pane4305 ) ,  ( ( * (  pane4305 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1341 ( ( (  char_dash_type1344 ) ( ( (  char_dash_at1348 ) ( (  pane4305 ) ,  (  prev4309 ) ) ) ) ) , ( CharType_1342_CharSpace ) ) ) ) ) : ( (  todo1352 ) ( ) ) ; } );
}

struct envunion1365 {
    enum Unit_8  (*fun) (  struct env1333*  );
    struct env1333 env;
};

struct envunion1367 {
    enum Unit_8  (*fun) (  struct env1333*  );
    struct env1333 env;
};

static  enum Unit_8   advance_dash_word1328 (    struct Pane_222 *  pane4313 ,    enum MoveDirection_1329  dir4315 ,    enum MoveTarget_1330  target4317 ) {
    struct Pos_26  temp1331 = ( (  own1332 ) ( ( ( * (  pane4313 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4318 = ( &temp1331 );
    struct env1333 envinst1333 = {
        .pane4313 =  pane4313 ,
        .dir4315 =  dir4315 ,
        .prev4318 =  prev4318 ,
    };
    struct Pos_26  sel4321 = ( ( * (  pane4313 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4322 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1334 ) ( (  pane4313 ) ) );
    struct envunion1337  temp1336 = ( (struct envunion1337){ .fun = (  enum Unit_8  (*) (  struct env1333*  ) )advance1338 , .env =  envinst1333 } );
    ( temp1336.fun ( &temp1336.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4322 ) || ( (  reached_dash_target1339 ) ( (  pane4313 ) ,  (  target4317 ) ,  ( * (  prev4318 ) ) ) ) ) ) {
        sel4321 = ( ( * (  pane4313 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1334 ) ( (  pane4313 ) ) ) ) {
        if ( (  eq569 ( ( ( * (  pane4313 ) ) .f_cursor ) , ( * (  prev4318 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1365  temp1364 = ( (struct envunion1365){ .fun = (  enum Unit_8  (*) (  struct env1333*  ) )advance1338 , .env =  envinst1333 } );
        ( temp1364.fun ( &temp1364.env ) );
        sel4321 = ( ( * (  pane4313 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1367  temp1366 = ( (struct envunion1367){ .fun = (  enum Unit_8  (*) (  struct env1333*  ) )advance1338 , .env =  envinst1333 } );
        ( temp1366.fun ( &temp1366.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1334 ) ( (  pane4313 ) ) ) || ( (  reached_dash_target1339 ) ( (  pane4313 ) ,  (  target4317 ) ,  ( * (  prev4318 ) ) ) ) ) ) {
            enum MoveDirection_1329  dref4323 = (  dir4315 );
            switch (  dref4323 ) {
                case MoveDirection_1329_MoveFwd : {
                    ( (  move_dash_left1101 ) ( (  pane4313 ) ) );
                    break;
                }
                case MoveDirection_1329_MoveBwd : {
                    ( (  move_dash_right1146 ) ( (  pane4313 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq569 ( ( * (  prev4318 ) ) , ( ( * (  pane4313 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1137 ) ( (  pane4313 ) ,  ( ( Maybe_34_Just ) ( (  sel4321 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1372 (    struct List_30 *  l2309 ) {
    return ( ( * (  l2309 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1375 (    struct List_30 *  list2177 ,    size_t  i2179 ) {
    if ( ( (  cmp292 ( (  i2179 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2179 ) , ( ( * (  list2177 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2179 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2177 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1252 ) ( ( ( * (  list2177 ) ) .f_elements ) ,  (  i2179 ) ) );
}

static  struct Changeset_32   get1374 (    struct List_30 *  list2187 ,    size_t  i2189 ) {
    return ( * ( (  get_dash_ptr1375 ) ( (  list2187 ) ,  (  i2189 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1373 (    struct List_30  self2257 ,    size_t  k2259 ) {
    return ( (  get1374 ) ( ( & (  self2257 ) ) ,  (  k2259 ) ) );
}

static  struct Action_25   undefined1384 (  ) {
    struct Action_25  temp1385;
    return (  temp1385 );
}

static  struct Action_25   or_dash_fail1383 (    struct Maybe_1206  x1271 ,    struct StrConcat_323  errmsg1273 ) {
    struct Maybe_1206  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_1206_None_t ) {
        ( (  panic325 ) ( (  errmsg1273 ) ) );
        return ( (  undefined1384 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_1206_Just_t ) {
            return ( dref1274 .stuff .Maybe_1206_Just_s .field0 );
        }
    }
}

static  struct Maybe_1206   try_dash_get1386 (    struct Slice_24  slice1946 ,    size_t  i1948 ) {
    if ( ( (  cmp292 ( (  i1948 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1948 ) , ( (  slice1946 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1206) { .tag = Maybe_1206_None_t } );
    }
    struct Action_25 *  elem_dash_ptr1949 = ( (  offset_dash_ptr1204 ) ( ( (  slice1946 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1948 ) ) ) ) );
    return ( ( Maybe_1206_Just ) ( ( * (  elem_dash_ptr1949 ) ) ) );
}

static  struct Action_25   get1382 (    struct Slice_24  slice1952 ,    size_t  i1954 ) {
    return ( (  or_dash_fail1383 ) ( ( (  try_dash_get1386 ) ( (  slice1952 ) ,  (  i1954 ) ) ) ,  ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1954 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1952 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1381 (    struct Slice_24  self1965 ,    size_t  idx1967 ) {
    return ( (  get1382 ) ( (  self1965 ) ,  (  idx1967 ) ) );
}

static  struct Action_25   last1380 (    struct Slice_24  s2128 ) {
    if ( (  eq409 ( ( (  s2128 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1223 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1381 ( (  s2128 ) , (  op_dash_sub291 ( ( (  s2128 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1387 (    struct List_23  l2302 ) {
    struct Action_25 *  ptr2303 = ( ( (  l2302 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2303 ) , .f_count = ( (  l2302 ) .f_count ) } );
}

static  struct Maybe_208   redo1371 (   struct env123* env ,    struct TextBuf_106 *  self3912 ) {
    ( (  flush_dash_insert_dash_action1155 ) ( (  self3912 ) ) );
    struct Actions_107 *  actions3913 = ( & ( ( * (  self3912 ) ) .f_actions ) );
    if ( (  cmp292 ( ( ( * (  actions3913 ) ) .f_cur ) , ( (  size1372 ) ( ( & ( ( * (  actions3913 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_208) { .tag = Maybe_208_None_t } );
    }
    struct Changeset_32  changeset3914 = (  elem_dash_get1373 ( ( ( * (  actions3913 ) ) .f_list ) , ( ( * (  actions3913 ) ) .f_cur ) ) );
    struct Pos_26  temp1376;
    struct Pos_26  to_dash_fwd3915 = (  temp1376 );
    struct SliceIter_1199  temp1377 =  into_dash_iter1201 ( ( (  changeset3914 ) .f_parts ) );
    while (true) {
        struct Maybe_1206  __cond1378 =  next1207 (&temp1377);
        if (  __cond1378 .tag == 0 ) {
            break;
        }
        struct Action_25  action3917 =  __cond1378 .stuff .Maybe_1206_Just_s .field0;
        struct envunion124  temp1379 = ( (struct envunion124){ .fun = (  struct Pos_26  (*) (  struct env119*  ,    struct TextBuf_106 *  ,    struct Action_25  ) )action_dash_fwd1313 , .env =  env->envinst119 } );
        to_dash_fwd3915 = ( temp1379.fun ( &temp1379.env ,  (  self3912 ) ,  (  action3917 ) ) );
    }
    (*  actions3913 ) .f_cur = (  op_dash_add313 ( ( ( * (  actions3913 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action3918 = ( (  last1380 ) ( ( (  to_dash_slice1387 ) ( ( (  changeset3914 ) .f_parts ) ) ) ) );
    if ( (  cmp292 ( ( (  num_dash_bytes1141 ) ( ( (  last_dash_action3918 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3919 = ( (  left_dash_pos1140 ) ( (  self3912 ) ,  (  to_dash_fwd3915 ) ) );
        return ( ( Maybe_208_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3919 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action3918 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_208_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3915 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1389 {
    ;
    struct Pane_222 *  self4389;
};

struct envunion1390 {
    enum Unit_8  (*fun) (  struct env1389*  ,    struct Cursors_33  );
    struct env1389 env;
};

static  enum Unit_8   if_dash_just1388 (    struct Maybe_208  x1519 ,   struct envunion1390  fun1521 ) {
    struct Maybe_208  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_208_Just_t ) {
        struct envunion1390  temp1391 = (  fun1521 );
        ( temp1391.fun ( &temp1391.env ,  ( dref1522 .stuff .Maybe_208_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_208_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1392 (   struct env1389* env ,    struct Cursors_33  cursors4392 ) {
    ( (  set_dash_cursors1102 ) ( ( env->self4389 ) ,  ( (  cursors4392 ) .f_cur ) ,  ( (  cursors4392 ) .f_sel ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1369 (   struct env213* env ,    struct Pane_222 *  self4389 ) {
    struct envunion214  temp1370 = ( (struct envunion214){ .fun = (  struct Maybe_208  (*) (  struct env123*  ,    struct TextBuf_106 *  ) )redo1371 , .env =  env->envinst123 } );
    struct Maybe_208  mcursors4390 = ( temp1370.fun ( &temp1370.env ,  ( ( * (  self4389 ) ) .f_buf ) ) );
    struct env1389 envinst1389 = {
        .self4389 =  self4389 ,
    };
    ( (  if_dash_just1388 ) ( (  mcursors4390 ) ,  ( (struct envunion1390){ .fun = (  enum Unit_8  (*) (  struct env1389*  ,    struct Cursors_33  ) )lam1392 , .env =  envinst1389 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1398 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1398   into_dash_iter1399 (    struct SliceReversedIter_1398  self2091 ) {
    return (  self2091 );
}

static  struct SliceReversedIter_1398   reversed1400 (    struct Slice_24  slice2088 ) {
    return ( (struct SliceReversedIter_1398) { .f_slice = (  slice2088 ) , .f_current_dash_offset = ( (  slice2088 ) .f_count ) } );
}

static  struct Maybe_1206   next1402 (    struct SliceReversedIter_1398 *  self2094 ) {
    size_t  off2095 = ( ( * (  self2094 ) ) .f_current_dash_offset );
    if ( (  eq409 ( (  off2095 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1206) { .tag = Maybe_1206_None_t } );
    }
    (*  self2094 ) .f_current_dash_offset = (  op_dash_sub291 ( (  off2095 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1206_Just ) ( (  elem_dash_get1381 ( ( ( * (  self2094 ) ) .f_slice ) , ( ( * (  self2094 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1404 (   struct env117* env ,    struct TextBuf_106 *  self3880 ,    struct Action_25  action3882 ) {
    struct envunion118  temp1405 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action565 , .env =  env->envinst100 } );
    ( temp1405.fun ( &temp1405.env ,  (  self3880 ) ,  ( (  action3882 ) .f_from ) ,  ( (  action3882 ) .f_to_dash_fwd ) ,  ( (  action3882 ) .f_bwd ) ) );
    return ( (  action3882 ) .f_to_dash_bwd );
}

static  struct Maybe_208   undo1396 (   struct env121* env ,    struct TextBuf_106 *  self3905 ) {
    ( (  flush_dash_insert_dash_action1155 ) ( (  self3905 ) ) );
    struct Actions_107 *  actions3906 = ( & ( ( * (  self3905 ) ) .f_actions ) );
    if ( (  eq409 ( ( ( * (  actions3906 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_208) { .tag = Maybe_208_None_t } );
    }
    (*  actions3906 ) .f_cur = (  op_dash_sub291 ( ( ( * (  actions3906 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset3907 = (  elem_dash_get1373 ( ( ( * (  actions3906 ) ) .f_list ) , ( ( * (  actions3906 ) ) .f_cur ) ) );
    struct SliceReversedIter_1398  temp1397 =  into_dash_iter1399 ( ( (  reversed1400 ) ( ( (  to_dash_slice1387 ) ( ( (  changeset3907 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1206  __cond1401 =  next1402 (&temp1397);
        if (  __cond1401 .tag == 0 ) {
            break;
        }
        struct Action_25  action3909 =  __cond1401 .stuff .Maybe_1206_Just_s .field0;
        struct envunion122  temp1403 = ( (struct envunion122){ .fun = (  struct Pos_26  (*) (  struct env117*  ,    struct TextBuf_106 *  ,    struct Action_25  ) )action_dash_bwd1404 , .env =  env->envinst117 } );
        ( temp1403.fun ( &temp1403.env ,  (  self3905 ) ,  (  action3909 ) ) );
    }
    return ( ( Maybe_208_Just ) ( ( (  changeset3907 ) .f_before_dash_cursors ) ) );
}

struct env1407 {
    ;
    struct Pane_222 *  self4383;
};

struct envunion1408 {
    enum Unit_8  (*fun) (  struct env1407*  ,    struct Cursors_33  );
    struct env1407 env;
};

static  enum Unit_8   if_dash_just1406 (    struct Maybe_208  x1519 ,   struct envunion1408  fun1521 ) {
    struct Maybe_208  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_208_Just_t ) {
        struct envunion1408  temp1409 = (  fun1521 );
        ( temp1409.fun ( &temp1409.env ,  ( dref1522 .stuff .Maybe_208_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_208_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1410 (   struct env1407* env ,    struct Cursors_33  cursors4386 ) {
    ( (  set_dash_cursors1102 ) ( ( env->self4383 ) ,  ( (  cursors4386 ) .f_cur ) ,  ( (  cursors4386 ) .f_sel ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1394 (   struct env211* env ,    struct Pane_222 *  self4383 ) {
    struct envunion212  temp1395 = ( (struct envunion212){ .fun = (  struct Maybe_208  (*) (  struct env121*  ,    struct TextBuf_106 *  ) )undo1396 , .env =  env->envinst121 } );
    struct Maybe_208  mcursors4384 = ( temp1395.fun ( &temp1395.env ,  ( ( * (  self4383 ) ) .f_buf ) ) );
    struct env1407 envinst1407 = {
        .self4383 =  self4383 ,
    };
    ( (  if_dash_just1406 ) ( (  mcursors4384 ) ,  ( (struct envunion1408){ .fun = (  enum Unit_8  (*) (  struct env1407*  ,    struct Cursors_33  ) )lam1410 , .env =  envinst1407 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_233   minmax1414 (    struct Pos_26  l1552 ,    struct Pos_26  r1554 ) {
    return ( (  cmp567 ( (  l1552 ) , (  r1554 ) ) == 0 ) ? ( ( Tuple2_233_Tuple2 ) ( (  l1552 ) ,  (  r1554 ) ) ) : ( ( Tuple2_233_Tuple2 ) ( (  r1554 ) ,  (  l1552 ) ) ) );
}

static  struct Pos_26   or_dash_else1415 (    struct Maybe_34  self1278 ,    struct Pos_26  alt1280 ) {
    struct Maybe_34  dref1281 = (  self1278 );
    if ( dref1281.tag == Maybe_34_None_t ) {
        return (  alt1280 );
    }
    else {
        if ( dref1281.tag == Maybe_34_Just_t ) {
            return ( dref1281 .stuff .Maybe_34_Just_s .field0 );
        }
    }
}

static  struct Pos_26   fst1416 (    struct Tuple2_233  dref1481 ) {
    return ( dref1481 .field0 );
}

static  struct Pos_26   snd1417 (    struct Tuple2_233  dref1484 ) {
    return ( dref1484 .field1 );
}

static  struct Tuple2_233   selection1413 (    struct Pane_222 *  self4395 ) {
    struct Tuple2_233  from_dash_to4396 = ( (  minmax1414 ) ( ( (  or_dash_else1415 ) ( ( ( * (  self4395 ) ) .f_sel ) ,  ( ( * (  self4395 ) ) .f_cursor ) ) ) ,  ( ( * (  self4395 ) ) .f_cursor ) ) );
    struct Pos_26  from4397 = ( (  fst1416 ) ( (  from_dash_to4396 ) ) );
    struct Pos_26  to4398 = ( (  right_dash_pos1147 ) ( ( ( * (  self4395 ) ) .f_buf ) ,  ( (  snd1417 ) ( (  from_dash_to4396 ) ) ) ) );
    return ( ( Tuple2_233_Tuple2 ) ( (  from4397 ) ,  (  to4398 ) ) );
}

struct env1420 {
    ;
    struct Editor_250 *  ed4508;
};

struct envunion1421 {
    enum Unit_8  (*fun) (  struct env1420*  ,    struct StrView_27  );
    struct env1420 env;
};

static  enum Unit_8   if_dash_just1419 (    struct Maybe_80  x1519 ,   struct envunion1421  fun1521 ) {
    struct Maybe_80  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_80_Just_t ) {
        struct envunion1421  temp1422 = (  fun1521 );
        ( temp1422.fun ( &temp1422.env ,  ( dref1522 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1423 (   struct env1420* env ,    struct StrView_27  cp4512 ) {
    ( (  free559 ) ( (  cp4512 ) ,  ( ( * ( env->ed4508 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1412 (   struct env235* env ,    struct Editor_250 *  ed4508 ) {
    struct Tuple2_233  from_dash_to4509 = ( (  selection1413 ) ( ( (  pane1145 ) ( (  ed4508 ) ) ) ) );
    struct envunion236  temp1418 = ( (struct envunion236){ .fun = (  struct StrView_27  (*) (  struct env125*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1234 , .env =  env->envinst125 } );
    struct StrView_27  cpd4510 = ( temp1418.fun ( &temp1418.env ,  ( ( ( * (  ed4508 ) ) .f_pane ) .f_buf ) ,  ( (  fst1416 ) ( (  from_dash_to4509 ) ) ) ,  ( (  snd1417 ) ( (  from_dash_to4509 ) ) ) ) );
    struct env1420 envinst1420 = {
        .ed4508 =  ed4508 ,
    };
    ( (  if_dash_just1419 ) ( ( ( * (  ed4508 ) ) .f_clipboard ) ,  ( (struct envunion1421){ .fun = (  enum Unit_8  (*) (  struct env1420*  ,    struct StrView_27  ) )lam1423 , .env =  envinst1420 } ) ) );
    (*  ed4508 ) .f_clipboard = ( ( Maybe_80_Just ) ( (  cpd4510 ) ) );
    return ( Unit_8_Unit );
}

struct env1428 {
    struct Pane_222 *  self4401;
    ;
};

struct envunion1429 {
    enum Unit_8  (*fun) (  struct env1428*  ,    struct Cursors_33  );
    struct env1428 env;
};

static  enum Unit_8   if_dash_just1427 (    struct Maybe_208  x1519 ,   struct envunion1429  fun1521 ) {
    struct Maybe_208  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_208_Just_t ) {
        struct envunion1429  temp1430 = (  fun1521 );
        ( temp1430.fun ( &temp1430.env ,  ( dref1522 .stuff .Maybe_208_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_208_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1431 (   struct env1428* env ,    struct Cursors_33  cursors4408 ) {
    ( (  set_dash_cursors1102 ) ( ( env->self4401 ) ,  ( (  cursors4408 ) .f_cur ) ,  ( (  cursors4408 ) .f_sel ) ,  ( CursorMovement_1103_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1425 (   struct env215* env ,    struct Pane_222 *  self4401 ,    struct Tuple2_233  pos_prime_s4403 ,    struct StrView_27  cp4405 ) {
    struct envunion216  temp1426 = ( (struct envunion216){ .fun = (  struct Maybe_208  (*) (  struct env127*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  ) )change1179 , .env =  env->envinst127 } );
    struct Maybe_208  mcursors4406 = ( temp1426.fun ( &temp1426.env ,  ( ( * (  self4401 ) ) .f_buf ) ,  ( (  fst1416 ) ( (  pos_prime_s4403 ) ) ) ,  ( (  snd1417 ) ( (  pos_prime_s4403 ) ) ) ,  (  cp4405 ) ,  ( ( Maybe_208_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4401 ) ) .f_cursor ) , .f_sel = ( ( * (  self4401 ) ) .f_sel ) } ) ) ) ) );
    struct env1428 envinst1428 = {
        .self4401 =  self4401 ,
    };
    ( (  if_dash_just1427 ) ( (  mcursors4406 ) ,  ( (struct envunion1429){ .fun = (  enum Unit_8  (*) (  struct env1428*  ,    struct Cursors_33  ) )lam1431 , .env =  envinst1428 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1433 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_250 *  );
    struct env235 env;
};

struct envunion1435 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  );
    struct env215 env;
};

struct envunion1437 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_250 *  );
    struct env235 env;
};

static  struct StrBuilder_62   mk1443 (    enum CAllocator_10  al2775 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk450 ) ( (  al2775 ) ) ) } );
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
    struct StrBuilder_62 *  builder2743;
};

struct envunion1451 {
    enum Unit_8  (*fun) (  struct env1450*  ,    struct Char_65  );
    struct env1450 env;
};

static  struct StrConcatIter_1447   into_dash_iter1453 (    struct StrConcatIter_1447  self1208 ) {
    return (  self1208 );
}

struct env1459 {
    size_t  base1304;
    ;
};

struct envunion1460 {
    size_t  (*fun) (  struct env1459*  ,    int32_t  ,    size_t  );
    struct env1459 env;
};

static  size_t   reduce1458 (    struct Range_150  iterable1043 ,    size_t  base1045 ,   struct envunion1460  fun1047 ) {
    size_t  x1048 = (  base1045 );
    struct RangeIter_153  it1049 = ( (  into_dash_iter154 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1050 = ( (  next156 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_155_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_155_Just_t ) {
                struct envunion1460  temp1461 = (  fun1047 );
                x1048 = ( temp1461.fun ( &temp1461.env ,  ( dref1050 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  size_t   lam1464 (   struct env1459* env ,    int32_t  item1308 ,    size_t  x1310 ) {
    return (  op_dash_mul415 ( (  x1310 ) , ( env->base1304 ) ) );
}

static  size_t   pow1457 (    size_t  base1304 ,    int32_t  p1306 ) {
    struct env1459 envinst1459 = {
        .base1304 =  base1304 ,
    };
    return ( (  reduce1458 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1306 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1460){ .fun = (  size_t  (*) (  struct env1459*  ,    int32_t  ,    size_t  ) )lam1464 , .env =  envinst1459 } ) ) );
}

static  uint8_t   cast1465 (    size_t  x357 ) {
    return ( (uint8_t ) (  x357 ) );
}

static  struct Maybe_299   next1456 (    struct IntStrIter_1449 *  self1317 ) {
    if ( ( ( * (  self1317 ) ) .f_negative ) ) {
        (*  self1317 ) .f_negative = ( false );
        return ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    size_t  trim_dash_down1318 = ( (  pow1457 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1319 = (  op_dash_div346 ( ( ( * (  self1317 ) ) .f_int ) , (  trim_dash_down1318 ) ) );
    size_t  upper_dash_mask1320 = (  op_dash_mul415 ( (  op_dash_div346 ( (  upper1319 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1321 = ( ( (  cast1465 ) ( (  op_dash_sub291 ( (  upper1319 ) , (  upper_dash_mask1320 ) ) ) ) ) );
    (*  self1317 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1322 = ( (  char_dash_from_dash_u81054 ) ( (  op_dash_add944 ( (  digit1321 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_299_Just ) ( (  digit_dash_char1322 ) ) );
}

static  struct Maybe_299   next1455 (    struct StrConcatIter_1448 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1456 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next1454 (    struct StrConcatIter_1447 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next1455 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1446 (    struct StrConcatIter_1447  iterable1024 ,   struct envunion1451  fun1026 ) {
    struct StrConcatIter_1447  temp1452 = ( (  into_dash_iter1453 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_1447 *  it1027 = ( &temp1452 );
    while ( ( true ) ) {
        struct Maybe_299  dref1028 = ( (  next1454 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_299_Just_t ) {
                struct envunion1451  temp1466 = (  fun1026 );
                ( temp1466.fun ( &temp1466.env ,  ( dref1028 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1473 (    size_t  self1325 ) {
    if ( (  eq409 ( (  self1325 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1326 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp292 ( (  self1325 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1325 = (  op_dash_div346 ( (  self1325 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1326 = (  op_dash_add159 ( (  digits1326 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1326 );
}

static  struct IntStrIter_1449   uint_dash_iter1472 (    size_t  int1332 ) {
    return ( (struct IntStrIter_1449) { .f_int = (  int1332 ) , .f_len = ( (  count_dash_digits1473 ) ( (  int1332 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1449   chars1471 (    size_t  self1344 ) {
    return ( (  uint_dash_iter1472 ) ( (  self1344 ) ) );
}

static  struct StrConcatIter_1448   into_dash_iter1470 (    struct StrConcat_84  dref1215 ) {
    return ( (struct StrConcatIter_1448) { .f_left = ( (  chars471 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1471 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_1448   chars1469 (    struct StrConcat_84  self1226 ) {
    return ( (  into_dash_iter1470 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_1447   into_dash_iter1468 (    struct StrConcat_83  dref1215 ) {
    return ( (struct StrConcatIter_1447) { .f_left = ( (  chars1469 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars471 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_1447   chars1467 (    struct StrConcat_83  self1226 ) {
    return ( (  into_dash_iter1468 ) ( (  self1226 ) ) );
}

static  enum Unit_8   write_dash_slice1478 (   struct env58* env ,    struct StrBuilder_62 *  builder2733 ,    struct Slice_11  s2735 ) {
    struct envunion59  temp1479 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all584 , .env =  env->envinst46 } );
    ( temp1479.fun ( &temp1479.env ,  ( & ( ( * (  builder2733 ) ) .f_chars ) ) ,  (  s2735 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_11   as_dash_u8_dash_slice1480 (    struct Char_65  c1383 ,    struct Array_340 *  buf1385 ) {
    struct Char_65  cc1386 = ( (  regularize339 ) ( (  c1383 ) ,  (  buf1385 ) ) );
    return ( (struct Slice_11) { .f_ptr = ( (  cc1386 ) .f_ptr ) , .f_count = ( (  cc1386 ) .f_num_dash_bytes ) } );
}

static  enum Unit_8   write_dash_char1476 (   struct env60* env ,    struct StrBuilder_62 *  builder2738 ,    struct Char_65  c2740 ) {
    struct envunion61  temp1477 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_11  ) )write_dash_slice1478 , .env =  env->envinst58 } );
    struct Array_340  temp1482;
    struct Array_340  temp1481 = (  temp1482 );
    ( temp1477.fun ( &temp1477.env ,  (  builder2738 ) ,  ( (  as_dash_u8_dash_slice1480 ) ( (  c2740 ) ,  ( &temp1481 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1474 (   struct env1450* env ,    struct Char_65  c2747 ) {
    struct envunion64  temp1475 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    return ( temp1475.fun ( &temp1475.env ,  ( env->builder2743 ) ,  (  c2747 ) ) );
}

static  enum Unit_8   write1445 (   struct env68* env ,    struct StrBuilder_62 *  builder2743 ,    struct StrConcat_83  s2745 ) {
    struct env1450 envinst1450 = {
        .envinst60 = env->envinst60 ,
        .builder2743 =  builder2743 ,
    };
    ( (  for_dash_each1446 ) ( ( (  chars1467 ) ( (  s2745 ) ) ) ,  ( (struct envunion1451){ .fun = (  enum Unit_8  (*) (  struct env1450*  ,    struct Char_65  ) )lam1474 , .env =  envinst1450 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1486 (    uint8_t *  p360 ) {
    return ( (uint8_t * ) (  p360 ) );
}

static  struct Slice_11   cast_dash_slice1485 (    struct Slice_11  s2125 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr1486 ) ( ( (  s2125 ) .f_ptr ) ) ) , .f_count = ( (  s2125 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1484 (    struct StrBuilder_62 *  builder2781 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1485 ) ( ( (  subslice477 ) ( ( ( ( * (  builder2781 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2781 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1441 (   struct env81* env ,    struct StrConcat_83  s2801 ,    enum CAllocator_10  al2803 ) {
    struct StrBuilder_62  temp1442 = ( (  mk1443 ) ( (  al2803 ) ) );
    struct StrBuilder_62 *  sb2804 = ( &temp1442 );
    struct envunion82  temp1444 = ( (struct envunion82){ .fun = (  enum Unit_8  (*) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_83  ) )write1445 , .env =  env->envinst68 } );
    ( temp1444.fun ( &temp1444.env ,  (  sb2804 ) ,  (  s2801 ) ) );
    struct envunion75  temp1483 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    ( temp1483.fun ( &temp1483.env ,  (  sb2804 ) ,  ( (  nullchar556 ) ( ) ) ) );
    struct StrView_27  dynstr2805 = ( (  as_dash_str1484 ) ( (  sb2804 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2805 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub291 ( ( ( (  dynstr2805 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1439 (   struct env241* env ,    struct Editor_250 *  ed4520 ,    struct StrConcat_83  s4522 ) {
    ( (  reset_dash_msg1090 ) ( (  ed4520 ) ) );
    struct envunion242  temp1440 = ( (struct envunion242){ .fun = (  struct StrView_27  (*) (  struct env81*  ,    struct StrConcat_83  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1441 , .env =  env->envinst81 } );
    (*  ed4520 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1440.fun ( &temp1440.env ,  (  s4522 ) ,  ( ( * (  ed4520 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1489 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  );
    struct env215 env;
};

struct env1488 {
    struct Editor_250 *  ed4580;
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
    ;
    ;
    ;
    ;
};

struct envunion1490 {
    enum Unit_8  (*fun) (  struct env1488*  ,    struct StrView_27  );
    struct env1488 env;
};

static  enum Unit_8   if_dash_just1487 (    struct Maybe_80  x1519 ,   struct envunion1490  fun1521 ) {
    struct Maybe_80  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_80_Just_t ) {
        struct envunion1490  temp1491 = (  fun1521 );
        ( temp1491.fun ( &temp1491.env ,  ( dref1522 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1493 (    struct Pane_222 *  pane4331 ) {
    return ( {  struct Maybe_34  dref4332 = ( ( * (  pane4331 ) ) .f_sel ) ; dref4332.tag == Maybe_34_Just_t ? ( (  max568 ) ( ( ( * (  pane4331 ) ) .f_cursor ) ,  ( dref4332 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4331 ) ) .f_cursor ) ; } );
}

static  struct StrView_27   own1494 (    struct StrView_27  x1479 ) {
    return (  x1479 );
}

static  uint8_t   last1495 (    struct Slice_11  s2128 ) {
    if ( (  eq409 ( ( (  s2128 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1223 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get486 ( (  s2128 ) , (  op_dash_sub291 ( ( (  s2128 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1496 (    int32_t  x1566 ,    int32_t  mn1568 ,    int32_t  mx1570 ) {
    if ( (  cmp157 ( (  x1566 ) , (  mn1568 ) ) == 0 ) ) {
        return (  mn1568 );
    } else {
        if ( (  cmp157 ( (  x1566 ) , (  mx1570 ) ) == 2 ) ) {
            return (  mx1570 );
        } else {
            return (  x1566 );
        }
    }
}

struct envunion1498 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  );
    struct env215 env;
};

static  enum Unit_8   lam1492 (   struct env1488* env ,    struct StrView_27  cp4591 ) {
    struct Pos_26  start4592 = ( (  max_dash_pos1493 ) ( ( (  pane1145 ) ( ( env->ed4580 ) ) ) ) );
    struct StrView_27  cp4593 = ( (  own1494 ) ( (  cp4591 ) ) );
    if ( (  eq305 ( ( (  last1495 ) ( ( (  cp4593 ) .f_contents ) ) ) , ( (  ascii_dash_u8493 ) ( ( (  from_dash_charlike494 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        int32_t  max_dash_lines4594 = ( (  num_dash_lines1148 ) ( ( ( * ( (  pane1145 ) ( ( env->ed4580 ) ) ) ) .f_buf ) ) );
        struct Pos_26  start4595 = ( (struct Pos_26) { .f_line = ( (  clamp1496 ) ( (  op_dash_add159 ( ( (  start4592 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  max_dash_lines4594 ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
        if ( (  eq570 ( ( (  start4595 ) .f_line ) , (  max_dash_lines4594 ) ) ) ) {
            cp4593 = ( (  byte_dash_substr496 ) ( (  cp4593 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub291 ( ( ( (  cp4593 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
        struct envunion1498  temp1497 = ( (struct envunion1498){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
        ( temp1497.fun ( &temp1497.env ,  ( (  pane1145 ) ( ( env->ed4580 ) ) ) ,  ( ( Tuple2_233_Tuple2 ) ( (  start4595 ) ,  (  start4595 ) ) ) ,  (  cp4593 ) ) );
    } else {
        struct Pos_26  start4596 = ( (  right_dash_pos1147 ) ( ( ( ( * ( env->ed4580 ) ) .f_pane ) .f_buf ) ,  (  start4592 ) ) );
        struct envunion1489  temp1499 = ( (struct envunion1489){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
        ( temp1499.fun ( &temp1499.env ,  ( (  pane1145 ) ( ( env->ed4580 ) ) ) ,  ( ( Tuple2_233_Tuple2 ) ( (  start4596 ) ,  (  start4596 ) ) ) ,  (  cp4593 ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1502 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  );
    struct env215 env;
};

struct env1501 {
    ;
    struct Editor_250 *  ed4580;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env215 envinst215;
};

struct envunion1503 {
    enum Unit_8  (*fun) (  struct env1501*  ,    struct StrView_27  );
    struct env1501 env;
};

static  enum Unit_8   if_dash_just1500 (    struct Maybe_80  x1519 ,   struct envunion1503  fun1521 ) {
    struct Maybe_80  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_80_Just_t ) {
        struct envunion1503  temp1504 = (  fun1521 );
        ( temp1504.fun ( &temp1504.env ,  ( dref1522 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1506 (    struct Pane_222 *  pane4326 ) {
    return ( {  struct Maybe_34  dref4327 = ( ( * (  pane4326 ) ) .f_sel ) ; dref4327.tag == Maybe_34_Just_t ? ( (  min566 ) ( ( ( * (  pane4326 ) ) .f_cursor ) ,  ( dref4327 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4326 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1505 (   struct env1501* env ,    struct StrView_27  cp4598 ) {
    struct Pos_26  start4599 = ( (  min_dash_pos1506 ) ( ( (  pane1145 ) ( ( env->ed4580 ) ) ) ) );
    if ( (  eq305 ( ( (  last1495 ) ( ( (  cp4598 ) .f_contents ) ) ) , ( (  ascii_dash_u8493 ) ( ( (  from_dash_charlike494 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1507 = (  start4599 );
        temp1507 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4599 = ( temp1507 );
    }
    struct envunion1502  temp1508 = ( (struct envunion1502){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
    ( temp1508.fun ( &temp1508.env ,  ( (  pane1145 ) ( ( env->ed4580 ) ) ) ,  ( ( Tuple2_233_Tuple2 ) ( (  start4599 ) ,  (  start4599 ) ) ) ,  (  cp4598 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1511 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  );
    struct env215 env;
};

struct env1510 {
    ;
    struct Editor_250 *  ed4580;
    ;
    ;
    ;
    ;
    struct env215 envinst215;
};

struct envunion1512 {
    enum Unit_8  (*fun) (  struct env1510*  ,    struct StrView_27  );
    struct env1510 env;
};

static  enum Unit_8   if_dash_just1509 (    struct Maybe_80  x1519 ,   struct envunion1512  fun1521 ) {
    struct Maybe_80  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_80_Just_t ) {
        struct envunion1512  temp1513 = (  fun1521 );
        ( temp1513.fun ( &temp1513.env ,  ( dref1522 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1514 (   struct env1510* env ,    struct StrView_27  cp4601 ) {
    struct Pos_26  start4602 = ( (  min_dash_pos1506 ) ( ( (  pane1145 ) ( ( env->ed4580 ) ) ) ) );
    struct Pos_26  end4603 = ( (  max_dash_pos1493 ) ( ( (  pane1145 ) ( ( env->ed4580 ) ) ) ) );
    struct envunion1511  temp1515 = ( (struct envunion1511){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
    struct Pos_26  temp1516 = (  end4603 );
    temp1516 .  f_bi = (  op_dash_add159 ( ( (  end4603 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( temp1515.fun ( &temp1515.env ,  ( (  pane1145 ) ( ( env->ed4580 ) ) ) ,  ( ( Tuple2_233_Tuple2 ) ( (  start4602 ) ,  ( temp1516 ) ) ) ,  (  cp4601 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1517 (    struct Pane_222 *  pane4345 ) {
    struct Pos_26  min_dash_pos4346 = ( (  min_dash_pos1506 ) ( (  pane4345 ) ) );
    struct Pos_26  max_dash_pos4347 = ( (  max_dash_pos1493 ) ( (  pane4345 ) ) );
    int32_t  max_dash_pos_dash_max4348 = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( ( (  line1108 ) ( ( ( * (  pane4345 ) ) .f_buf ) ,  ( (  max_dash_pos4347 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq570 ( ( (  min_dash_pos4346 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq570 ( ( (  max_dash_pos4347 ) .f_bi ) , (  max_dash_pos_dash_max4348 ) ) ) ) ) ) {
        struct Pos_26  temp1518 = (  min_dash_pos4346 );
        temp1518 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4345 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1518 ) ) );
        struct Pos_26  temp1519 = (  max_dash_pos4347 );
        temp1519 .  f_bi = (  max_dash_pos_dash_max4348 );
        (*  pane4345 ) .f_cursor = ( temp1519 );
    } else {
        if ( (  cmp157 ( (  op_dash_add159 ( ( (  max_dash_pos4347 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1148 ) ( ( ( * (  pane4345 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1520 = (  min_dash_pos4346 );
        temp1520 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4345 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1520 ) ) );
        int32_t  next_dash_line4349 = (  op_dash_add159 ( ( (  max_dash_pos4347 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4345 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4349 ) , .f_bi = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( ( (  line1108 ) ( ( ( * (  pane4345 ) ) .f_buf ) ,  (  next_dash_line4349 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1521 (    struct Maybe_34  m1492 ) {
    struct Maybe_34  dref1493 = (  m1492 );
    if ( dref1493.tag == Maybe_34_None_t ) {
        return ( true );
    }
    else {
        if ( dref1493.tag == Maybe_34_Just_t ) {
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
            struct Tuple2_233  field0;
        } Maybe_1523_Just_s;
    } stuff;
};

static struct Maybe_1523 Maybe_1523_Just (  struct Tuple2_233  field0 ) {
    return ( struct Maybe_1523 ) { .tag = Maybe_1523_Just_t, .stuff = { .Maybe_1523_Just_s = { .field0 = field0 } } };
};

struct env1525 {
    ;
    ;
    struct StrView_27  query4457;
    ;
    struct Pane_222 *  pane4453;
    ;
};

struct envunion1527 {
    struct Maybe_248  (*fun) (  struct env1525*  ,    struct Pos_26  );
    struct env1525 env;
};

static  struct Maybe_248   find_dash_slice1529 (    struct Slice_11  haystack2105 ,    struct Slice_11  needle2107 ) {
    struct RangeIter_153  temp1530 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( ( (  haystack2105 ) .f_count ) ) ) , ( (  size_dash_i32331 ) ( ( (  needle2107 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1531 =  next156 (&temp1530);
        if (  __cond1531 .tag == 0 ) {
            break;
        }
        int32_t  i2109 =  __cond1531 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq498 ( ( (  subslice477 ) ( (  haystack2105 ) ,  ( (  i32_dash_size422 ) ( (  i2109 ) ) ) ,  (  op_dash_add313 ( ( (  i32_dash_size422 ) ( (  i2109 ) ) ) , ( (  needle2107 ) .f_count ) ) ) ) ) , (  needle2107 ) ) ) ) {
            return ( ( Maybe_248_Just ) ( ( (  i32_dash_size422 ) ( (  i2109 ) ) ) ) );
        }
    }
    return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
}

static  struct Maybe_248   search_dash_on_dash_line1528 (   struct env1525* env ,    struct Pos_26  pos4460 ) {
    return ( (  find_dash_slice1529 ) ( ( ( (  byte_dash_substr_dash_from475 ) ( ( (  line1108 ) ( ( ( * ( env->pane4453 ) ) .f_buf ) ,  ( (  pos4460 ) .f_line ) ) ) ,  ( (  i32_dash_size422 ) ( ( (  pos4460 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4457 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1537 (    int32_t  l223 ,    int32_t  r225 ) {
    return ( (  l223 ) / (  r225 ) );
}

static  int32_t   op_dash_mul1538 (    int32_t  l218 ,    int32_t  r220 ) {
    return ( (  l218 ) * (  r220 ) );
}

static  int32_t   mod1536 (    int32_t  l1462 ,    int32_t  d1464 ) {
    int32_t  r1465 = (  op_dash_div1537 ( (  l1462 ) , (  d1464 ) ) );
    int32_t  m1466 = (  op_dash_sub164 ( (  l1462 ) , (  op_dash_mul1538 ( (  r1465 ) , (  d1464 ) ) ) ) );
    if ( (  cmp157 ( (  m1466 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add159 ( (  d1464 ) , (  m1466 ) ) );
    } else {
        return (  m1466 );
    }
}

struct envunion1540 {
    struct Maybe_248  (*fun) (  struct env1525*  ,    struct Pos_26  );
    struct env1525 env;
};

static  struct Maybe_1523   search_dash_from1524 (    struct Pane_222 *  pane4453 ,    struct Pos_26  pos4455 ,    struct StrView_27  query4457 ) {
    struct env1525 envinst1525 = {
        .query4457 =  query4457 ,
        .pane4453 =  pane4453 ,
    };
    struct envunion1527  temp1526 = ( (struct envunion1527){ .fun = (  struct Maybe_248  (*) (  struct env1525*  ,    struct Pos_26  ) )search_dash_on_dash_line1528 , .env =  envinst1525 } );
    struct Maybe_248  dref4461 = ( temp1526.fun ( &temp1526.env ,  (  pos4455 ) ) );
    if ( dref4461.tag == Maybe_248_Just_t ) {
        struct Pos_26  temp1532 = (  pos4455 );
        temp1532 .  f_bi = (  op_dash_add159 ( ( (  pos4455 ) .f_bi ) , ( (  size_dash_i32331 ) ( ( dref4461 .stuff .Maybe_248_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4463 = ( temp1532 );
        struct Pos_26  temp1533 = (  pos4455 );
        temp1533 .  f_bi = (  op_dash_sub164 ( (  op_dash_add159 ( ( (  pos4455 ) .f_bi ) , ( (  size_dash_i32331 ) ( (  op_dash_add313 ( ( dref4461 .stuff .Maybe_248_Just_s .field0 ) , ( (  num_dash_bytes1141 ) ( (  query4457 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4464 = ( temp1533 );
        return ( ( Maybe_1523_Just ) ( ( ( Tuple2_233_Tuple2 ) ( (  sel_dash_pos4463 ) ,  (  cur_dash_pos4464 ) ) ) ) );
    }
    else {
        if ( dref4461.tag == Maybe_248_None_t ) {
            int32_t  num_dash_lines4465 = ( (  num_dash_lines1148 ) ( ( ( * (  pane4453 ) ) .f_buf ) ) );
            struct RangeIter_153  temp1534 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4465 ) ) ) );
            while (true) {
                struct Maybe_155  __cond1535 =  next156 (&temp1534);
                if (  __cond1535 .tag == 0 ) {
                    break;
                }
                int32_t  i4467 =  __cond1535 .stuff .Maybe_155_Just_s .field0;
                int32_t  line4468 = ( (  mod1536 ) ( (  op_dash_add159 ( ( (  pos4455 ) .f_line ) , (  i4467 ) ) ) ,  (  num_dash_lines4465 ) ) );
                struct envunion1540  temp1539 = ( (struct envunion1540){ .fun = (  struct Maybe_248  (*) (  struct env1525*  ,    struct Pos_26  ) )search_dash_on_dash_line1528 , .env =  envinst1525 } );
                struct Maybe_248  dref4469 = ( temp1539.fun ( &temp1539.env ,  ( (struct Pos_26) { .f_line = (  line4468 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4469.tag == Maybe_248_Just_t ) {
                    struct Pos_26  sel_dash_pos4471 = ( (struct Pos_26) { .f_line = (  line4468 ) , .f_bi = ( (  size_dash_i32331 ) ( ( dref4469 .stuff .Maybe_248_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4472 = ( (struct Pos_26) { .f_line = (  line4468 ) , .f_bi = (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( (  op_dash_add313 ( ( dref4469 .stuff .Maybe_248_Just_s .field0 ) , ( (  num_dash_bytes1141 ) ( (  query4457 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1523_Just ) ( ( ( Tuple2_233_Tuple2 ) ( (  sel_dash_pos4471 ) ,  (  cur_dash_pos4472 ) ) ) ) );
                }
                else {
                    if ( dref4469.tag == Maybe_248_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1523) { .tag = Maybe_1523_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1522 (    struct Editor_250 *  ed4564 ) {
    struct Maybe_80  dref4565 = ( ( * (  ed4564 ) ) .f_search_dash_term );
    if ( dref4565.tag == Maybe_80_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4565.tag == Maybe_80_Just_t ) {
            struct Maybe_1523  dref4567 = ( (  search_dash_from1524 ) ( ( (  pane1145 ) ( (  ed4564 ) ) ) ,  ( (  max_dash_pos1493 ) ( ( (  pane1145 ) ( (  ed4564 ) ) ) ) ) ,  ( dref4565 .stuff .Maybe_80_Just_s .field0 ) ) );
            if ( dref4567.tag == Maybe_1523_None_t ) {
            }
            else {
                if ( dref4567.tag == Maybe_1523_Just_t ) {
                    ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4564 ) ) ) ,  ( dref4567 .stuff .Maybe_1523_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4567 .stuff .Maybe_1523_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_248   find_dash_last_dash_occurence_dash_of_dash_slice1543 (    struct Slice_11  haystack2112 ,    struct Slice_11  needle2114 ) {
    struct Maybe_248  occ2115 = ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    struct RangeIter_153  temp1544 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( ( (  haystack2112 ) .f_count ) ) ) , ( (  size_dash_i32331 ) ( ( (  needle2114 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1545 =  next156 (&temp1544);
        if (  __cond1545 .tag == 0 ) {
            break;
        }
        int32_t  i2117 =  __cond1545 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq498 ( ( (  subslice477 ) ( (  haystack2112 ) ,  ( (  i32_dash_size422 ) ( (  i2117 ) ) ) ,  (  op_dash_add313 ( ( (  i32_dash_size422 ) ( (  i2117 ) ) ) , ( (  needle2114 ) .f_count ) ) ) ) ) , (  needle2114 ) ) ) ) {
            occ2115 = ( ( Maybe_248_Just ) ( ( (  i32_dash_size422 ) ( (  i2117 ) ) ) ) );
        }
    }
    return (  occ2115 );
}

static  struct Maybe_1523   search_dash_back1542 (    struct Pane_222 *  pane4475 ,    struct Pos_26  pos4477 ,    struct StrView_27  query4479 ) {
    struct Maybe_248  dref4480 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1543 ) ( ( ( (  byte_dash_substr496 ) ( ( (  line1108 ) ( ( ( * (  pane4475 ) ) .f_buf ) ,  ( (  pos4477 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size422 ) ( ( (  pos4477 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4479 ) .f_contents ) ) );
    if ( dref4480.tag == Maybe_248_Just_t ) {
        struct Pos_26  temp1546 = (  pos4477 );
        temp1546 .  f_bi = ( (  size_dash_i32331 ) ( ( dref4480 .stuff .Maybe_248_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4482 = ( temp1546 );
        struct Pos_26  temp1547 = (  pos4477 );
        temp1547 .  f_bi = (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( (  op_dash_add313 ( ( dref4480 .stuff .Maybe_248_Just_s .field0 ) , ( (  num_dash_bytes1141 ) ( (  query4479 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4483 = ( temp1547 );
        return ( ( Maybe_1523_Just ) ( ( ( Tuple2_233_Tuple2 ) ( (  sel_dash_pos4482 ) ,  (  cur_dash_pos4483 ) ) ) ) );
    }
    else {
        if ( dref4480.tag == Maybe_248_None_t ) {
            int32_t  num_dash_lines4484 = ( (  num_dash_lines1148 ) ( ( ( * (  pane4475 ) ) .f_buf ) ) );
            struct RangeIter_153  temp1548 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4484 ) ) ) );
            while (true) {
                struct Maybe_155  __cond1549 =  next156 (&temp1548);
                if (  __cond1549 .tag == 0 ) {
                    break;
                }
                int32_t  i4486 =  __cond1549 .stuff .Maybe_155_Just_s .field0;
                int32_t  line4487 = ( (  mod1536 ) ( (  op_dash_sub164 ( ( (  pos4477 ) .f_line ) , (  i4486 ) ) ) ,  (  num_dash_lines4484 ) ) );
                struct Maybe_248  dref4488 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1543 ) ( ( ( (  line1108 ) ( ( ( * (  pane4475 ) ) .f_buf ) ,  (  line4487 ) ) ) .f_contents ) ,  ( (  query4479 ) .f_contents ) ) );
                if ( dref4488.tag == Maybe_248_Just_t ) {
                    struct Pos_26  sel_dash_pos4490 = ( (struct Pos_26) { .f_line = (  line4487 ) , .f_bi = ( (  size_dash_i32331 ) ( ( dref4488 .stuff .Maybe_248_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4491 = ( (struct Pos_26) { .f_line = (  line4487 ) , .f_bi = (  op_dash_sub164 ( ( (  size_dash_i32331 ) ( (  op_dash_add313 ( ( dref4488 .stuff .Maybe_248_Just_s .field0 ) , ( (  num_dash_bytes1141 ) ( (  query4479 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1523_Just ) ( ( ( Tuple2_233_Tuple2 ) ( (  sel_dash_pos4490 ) ,  (  cur_dash_pos4491 ) ) ) ) );
                }
                else {
                    if ( dref4488.tag == Maybe_248_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1523) { .tag = Maybe_1523_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1541 (    struct Editor_250 *  ed4572 ) {
    struct Maybe_80  dref4573 = ( ( * (  ed4572 ) ) .f_search_dash_term );
    if ( dref4573.tag == Maybe_80_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4573.tag == Maybe_80_Just_t ) {
            struct Maybe_1523  dref4575 = ( (  search_dash_back1542 ) ( ( (  pane1145 ) ( (  ed4572 ) ) ) ,  ( (  min_dash_pos1506 ) ( ( (  pane1145 ) ( (  ed4572 ) ) ) ) ) ,  ( dref4573 .stuff .Maybe_80_Just_s .field0 ) ) );
            if ( dref4575.tag == Maybe_1523_None_t ) {
            }
            else {
                if ( dref4575.tag == Maybe_1523_Just_t ) {
                    ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4572 ) ) ) ,  ( dref4575 .stuff .Maybe_1523_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4575 .stuff .Maybe_1523_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1553 (   struct env132* env ,    struct TextBuf_106 *  self3973 ,    struct Cursors_33  before_dash_cursors3975 ) {
    struct Actions_107 *  actions3976 = ( & ( ( * (  self3973 ) ) .f_actions ) );
    ( (  trim_dash_actions1180 ) ( (  actions3976 ) ) );
    ( (  flush_dash_insert_dash_action1155 ) ( (  self3973 ) ) );
    ( (  assert679 ) ( (  eq1249 ( ( ( ( * (  self3973 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_108_NoChangeset ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al3977 = ( ( * (  self3973 ) ) .f_al );
    struct Changeset_32  temp1554 = ( (struct Changeset_32) { .f_parts = ( (  mk1278 ) ( (  al3977 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3975 ) } );
    struct Changeset_32 *  changeset3978 = ( &temp1554 );
    struct envunion133  temp1555 = ( (struct envunion133){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1289 , .env =  env->envinst28 } );
    ( temp1555.fun ( &temp1555.env ,  ( & ( ( * (  actions3976 ) ) .f_list ) ) ,  ( * (  changeset3978 ) ) ) );
    (*  actions3976 ) .f_input_dash_changeset = ( ChangesetInputType_108_CustomChangeset );
    (*  actions3976 ) .f_cur = (  op_dash_add313 ( ( ( * (  actions3976 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1206   head1561 (    struct List_23  it1092 ) {
    struct SliceIter_1199  temp1562 = ( (  into_dash_iter1201 ) ( (  it1092 ) ) );
    return ( (  next1207 ) ( ( &temp1562 ) ) );
}

static  bool   null1560 (    struct List_23  it1101 ) {
    struct Maybe_1206  dref1102 = ( (  head1561 ) ( (  it1101 ) ) );
    if ( dref1102.tag == Maybe_1206_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1559 (    struct TextBuf_106 *  self3981 ) {
    ( (  flush_dash_insert_dash_action1155 ) ( (  self3981 ) ) );
    struct Actions_107 *  actions3982 = ( & ( ( * (  self3981 ) ) .f_actions ) );
    if ( ( (  null1560 ) ( ( ( * ( (  last_dash_ptr1251 ) ( ( (  to_dash_slice1253 ) ( ( ( * (  actions3982 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3982 ) .f_cur = (  op_dash_sub291 ( ( ( * (  actions3982 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3982 ) .f_input_dash_changeset = ( ChangesetInputType_108_NoChangeset );
        ( (  trim_dash_actions1180 ) ( (  actions3982 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1564 (    struct Maybe_34  x1503 ,    struct Pos_26 (*  fun1505 )(    struct Pos_26  ) ) {
    struct Maybe_34  dref1506 = (  x1503 );
    if ( dref1506.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1506.tag == Maybe_34_Just_t ) {
            return ( ( Maybe_34_Just ) ( ( (  fun1505 ) ( ( dref1506 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1565 (    struct Pos_26  sel4420 ) {
    struct Pos_26  temp1566 = (  sel4420 );
    temp1566 .  f_bi = (  op_dash_add159 ( ( (  sel4420 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1566 );
}

static  enum Unit_8   indent_dash_selection1551 (   struct env219* env ,    struct Pane_222 *  self4416 ) {
    struct envunion220  temp1552 = ( (struct envunion220){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_106 *  ,    struct Cursors_33  ) )begin_dash_changeset1553 , .env =  env->envinst132 } );
    ( temp1552.fun ( &temp1552.env ,  ( ( * (  self4416 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4416 ) ) .f_cursor ) , .f_sel = ( ( * (  self4416 ) ) .f_sel ) } ) ) );
    struct RangeIter_153  temp1556 =  into_dash_iter154 ( ( (  to163 ) ( ( ( (  min_dash_pos1506 ) ( (  self4416 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1493 ) ( (  self4416 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_155  __cond1557 =  next156 (&temp1556);
        if (  __cond1557 .tag == 0 ) {
            break;
        }
        int32_t  line4418 =  __cond1557 .stuff .Maybe_155_Just_s .field0;
        struct envunion221  temp1558 = ( (struct envunion221){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Pane_222 *  ,    int32_t  ) )indent_dash_at1320 , .env =  env->envinst217 } );
        ( temp1558.fun ( &temp1558.env ,  (  self4416 ) ,  (  line4418 ) ) );
    }
    ( (  end_dash_changeset1559 ) ( ( ( * (  self4416 ) ) .f_buf ) ) );
    struct Pos_26  temp1563 = ( ( * (  self4416 ) ) .f_cursor );
    temp1563 .  f_bi = (  op_dash_add159 ( ( ( ( * (  self4416 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors1102 ) ( (  self4416 ) ,  ( temp1563 ) ,  ( (  fmap_dash_maybe1564 ) ( ( ( * (  self4416 ) ) .f_sel ) ,  (  lam1565 ) ) ) ,  ( CursorMovement_1103_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1577 {
    ;
    bool  last_dash_char_dash_was_dash_tab4425;
    ;
};

struct envunion1578 {
    struct Pos_26  (*fun) (  struct env1577*  ,    struct Pos_26  );
    struct env1577 env;
};

static  struct Maybe_34   fmap_dash_maybe1576 (    struct Maybe_34  x1503 ,   struct envunion1578  fun1505 ) {
    struct Maybe_34  dref1506 = (  x1503 );
    if ( dref1506.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1506.tag == Maybe_34_Just_t ) {
            struct envunion1578  temp1579 = (  fun1505 );
            return ( ( Maybe_34_Just ) ( ( temp1579.fun ( &temp1579.env ,  ( dref1506 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1580 (   struct env1577* env ,    struct Pos_26  sel4429 ) {
    struct Pos_26  temp1581 = (  sel4429 );
    temp1581 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4425 ) ? (  op_dash_sub164 ( ( (  sel4429 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4429 ) .f_bi ) );
    return ( temp1581 );
}

static  enum Unit_8   dedent_dash_selection1568 (   struct env225* env ,    struct Pane_222 *  self4423 ) {
    struct envunion226  temp1569 = ( (struct envunion226){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_106 *  ,    struct Cursors_33  ) )begin_dash_changeset1553 , .env =  env->envinst132 } );
    ( temp1569.fun ( &temp1569.env ,  ( ( * (  self4423 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4423 ) ) .f_cursor ) , .f_sel = ( ( * (  self4423 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1570 = ( (  min_dash_pos1506 ) ( (  self4423 ) ) );
    temp1570 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4424 = (  eq480 ( ( (  char_dash_at1348 ) ( (  self4423 ) ,  ( temp1570 ) ) ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1571 = ( (  max_dash_pos1493 ) ( (  self4423 ) ) );
    temp1571 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4425 = (  eq480 ( ( (  char_dash_at1348 ) ( (  self4423 ) ,  ( temp1571 ) ) ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_153  temp1572 =  into_dash_iter154 ( ( (  to163 ) ( ( ( (  min_dash_pos1506 ) ( (  self4423 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1493 ) ( (  self4423 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_155  __cond1573 =  next156 (&temp1572);
        if (  __cond1573 .tag == 0 ) {
            break;
        }
        int32_t  line4427 =  __cond1573 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq480 ( ( (  char_dash_at1348 ) ( (  self4423 ) ,  ( (struct Pos_26) { .f_line = (  line4427 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion227  temp1574 = ( (struct envunion227){ .fun = (  struct Maybe_208  (*) (  struct env127*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  ) )change1179 , .env =  env->envinst127 } );
            ( temp1574.fun ( &temp1574.env ,  ( ( * (  self4423 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4427 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4427 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_208) { .tag = Maybe_208_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1559 ) ( ( ( * (  self4423 ) ) .f_buf ) ) );
    struct Pos_26  temp1575 = ( ( * (  self4423 ) ) .f_cursor );
    temp1575 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4424 ) ? (  op_dash_sub164 ( ( ( ( * (  self4423 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4423 ) ) .f_cursor ) .f_bi ) );
    struct env1577 envinst1577 = {
        .last_dash_char_dash_was_dash_tab4425 =  last_dash_char_dash_was_dash_tab4425 ,
    };
    ( (  set_dash_cursors1102 ) ( (  self4423 ) ,  ( temp1575 ) ,  ( (  fmap_dash_maybe1576 ) ( ( ( * (  self4423 ) ) .f_sel ) ,  ( (struct envunion1578){ .fun = (  struct Pos_26  (*) (  struct env1577*  ,    struct Pos_26  ) )lam1580 , .env =  envinst1577 } ) ) ) ,  ( CursorMovement_1103_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1585 (  ) {
    int32_t  temp1586;
    return (  temp1586 );
}

static  int32_t   or_dash_fail1584 (    struct Maybe_155  x1271 ,    struct StrView_27  errmsg1273 ) {
    struct Maybe_155  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_155_None_t ) {
        ( (  panic1223 ) ( (  errmsg1273 ) ) );
        return ( (  undefined1585 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_155_Just_t ) {
            return ( dref1274 .stuff .Maybe_155_Just_s .field0 );
        }
    }
}

struct env1589 {
    ;
    struct Pane_222 *  self4438;
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

static  struct Map_1588   into_dash_iter1592 (    struct Map_1588  self729 ) {
    return (  self729 );
}

static  struct Maybe_155   next1593 (    struct Map_1588 *  dref731 ) {
    struct Maybe_155  dref734 = ( (  next156 ) ( ( & ( (* dref731 ) .field0 ) ) ) );
    if ( dref734.tag == Maybe_155_None_t ) {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
    else {
        if ( dref734.tag == Maybe_155_Just_t ) {
            struct envunion1590  temp1594 = ( (* dref731 ) .field1 );
            return ( ( Maybe_155_Just ) ( ( temp1594.fun ( &temp1594.env ,  ( dref734 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_155   reduce1591 (    struct Map_1588  iterable1043 ,    struct Maybe_155  base1045 ,    struct Maybe_155 (*  fun1047 )(    int32_t  ,    struct Maybe_155  ) ) {
    struct Maybe_155  x1048 = (  base1045 );
    struct Map_1588  it1049 = ( (  into_dash_iter1592 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1050 = ( (  next1593 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_155_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_155_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1048 ) ) );
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
    ;
    int32_t  x1471;
};

struct envunion1600 {
    struct Maybe_155  (*fun) (  struct env1599*  ,    int32_t  );
    struct env1599 env;
};

static  struct Maybe_155   maybe1598 (    struct Maybe_155  x1510 ,   struct envunion1600  fun1512 ,    struct Maybe_155  default1514 ) {
    struct envunion1600  temp1601 = (  fun1512 );
    return ( {  struct Maybe_155  dref1515 = (  x1510 ) ; dref1515.tag == Maybe_155_Just_t ? ( temp1601.fun ( &temp1601.env ,  ( dref1515 .stuff .Maybe_155_Just_s .field0 ) ) ) : (  default1514 ) ; } );
}

static  struct Maybe_155   lam1602 (   struct env1599* env ,    int32_t  lm1540 ) {
    return ( ( Maybe_155_Just ) ( ( (  min670 ) ( (  lm1540 ) ,  ( env->x1471 ) ) ) ) );
}

static  struct Maybe_155   lam1597 (    int32_t  x1471 ,    struct Maybe_155  last_dash_min1473 ) {
    struct env1599 envinst1599 = {
        .x1471 =  x1471 ,
    };
    return ( (  maybe1598 ) ( (  last_dash_min1473 ) ,  ( (struct envunion1600){ .fun = (  struct Maybe_155  (*) (  struct env1599*  ,    int32_t  ) )lam1602 , .env =  envinst1599 } ) ,  ( ( Maybe_155_Just ) ( (  x1471 ) ) ) ) );
}

static  struct Maybe_155   minimum1587 (    struct Map_1588  it1469 ) {
    return ( (  reduce1591 ) ( (  it1469 ) ,  ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) ,  (  lam1597 ) ) );
}

static  struct Map_1588   map1603 (    struct Range_150  iterable738 ,   struct envunion1590  fun740 ) {
    struct RangeIter_153  it741 = ( (  into_dash_iter154 ) ( (  iterable738 ) ) );
    return ( ( Map_1588_Map ) ( (  it741 ) ,  (  fun740 ) ) );
}

static  int32_t   lam1604 (   struct env1589* env ,    int32_t  ln4442 ) {
    return ( (  indent_dash_at_dash_line1157 ) ( ( env->self4438 ) ,  (  ln4442 ) ) );
}

struct env1606 {
    ;
    struct Pane_222 *  self4438;
    ;
};

struct envunion1607 {
    bool  (*fun) (  struct env1606*  ,    int32_t  );
    struct env1606 env;
};

struct env1609 {
    struct envunion1607  fun1076;
};

struct envunion1610 {
    bool  (*fun) (  struct env1609*  ,    int32_t  ,    bool  );
    struct env1609 env;
};

static  bool   reduce1608 (    struct Range_150  iterable1043 ,    bool  base1045 ,   struct envunion1610  fun1047 ) {
    bool  x1048 = (  base1045 );
    struct RangeIter_153  it1049 = ( (  into_dash_iter154 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1050 = ( (  next156 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_155_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_155_Just_t ) {
                struct envunion1610  temp1611 = (  fun1047 );
                x1048 = ( temp1611.fun ( &temp1611.env ,  ( dref1050 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  bool   lam1614 (   struct env1609* env ,    int32_t  e1078 ,    bool  x1080 ) {
    struct envunion1607  temp1615 = ( env->fun1076 );
    return ( ( temp1615.fun ( &temp1615.env ,  (  e1078 ) ) ) && (  x1080 ) );
}

static  bool   all1605 (    struct Range_150  it1074 ,   struct envunion1607  fun1076 ) {
    struct env1609 envinst1609 = {
        .fun1076 =  fun1076 ,
    };
    return ( (  reduce1608 ) ( (  it1074 ) ,  ( true ) ,  ( (struct envunion1610){ .fun = (  bool  (*) (  struct env1609*  ,    int32_t  ,    bool  ) )lam1614 , .env =  envinst1609 } ) ) );
}

static  bool   is_dash_just1617 (    struct Maybe_1523  m1488 ) {
    struct Maybe_1523  dref1489 = (  m1488 );
    if ( dref1489.tag == Maybe_1523_None_t ) {
        return ( false );
    }
    else {
        if ( dref1489.tag == Maybe_1523_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1619 (    struct Char_65  c4370 ) {
    return ( ( !  eq480 ( (  c4370 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1347 ) ( (  c4370 ) ) ) );
}

static  struct Maybe_1523   line_dash_begins_dash_with_dash_comment1618 (    struct Pane_222 *  self4364 ,    int32_t  line4366 ) {
    int32_t  indent4367 = ( (  indent_dash_at_dash_line1157 ) ( (  self4364 ) ,  (  line4366 ) ) );
    if ( (  eq480 ( ( (  char_dash_at1348 ) ( (  self4364 ) ,  ( (  mk706 ) ( (  line4366 ) ,  (  indent4367 ) ) ) ) ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4368 = (  op_dash_add159 ( (  indent4367 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1619 ) ( ( (  char_dash_at1348 ) ( (  self4364 ) ,  ( (  mk706 ) ( (  line4366 ) ,  (  i4368 ) ) ) ) ) ) ) ) {
            i4368 = (  op_dash_add159 ( (  i4368 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1523_Just ) ( ( ( Tuple2_233_Tuple2 ) ( ( (  mk706 ) ( (  line4366 ) ,  (  indent4367 ) ) ) ,  ( (  mk706 ) ( (  line4366 ) ,  (  i4368 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1523) { .tag = Maybe_1523_None_t } );
    }
}

static  bool   lam1616 (   struct env1606* env ,    int32_t  ln4445 ) {
    return ( (  is_dash_just1617 ) ( ( (  line_dash_begins_dash_with_dash_comment1618 ) ( ( env->self4438 ) ,  (  ln4445 ) ) ) ) );
}

static  struct Tuple2_233   undefined1625 (  ) {
    struct Tuple2_233  temp1626;
    return (  temp1626 );
}

static  struct Tuple2_233   or_dash_fail1624 (    struct Maybe_1523  x1271 ,    struct StrView_27  errmsg1273 ) {
    struct Maybe_1523  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_1523_None_t ) {
        ( (  panic1223 ) ( (  errmsg1273 ) ) );
        return ( (  undefined1625 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_1523_Just_t ) {
            return ( dref1274 .stuff .Maybe_1523_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1583 (   struct env230* env ,    struct Pane_222 *  self4438 ) {
    int32_t  from_dash_line4439 = ( ( (  min_dash_pos1506 ) ( (  self4438 ) ) ) .f_line );
    int32_t  to_dash_line4440 = ( ( (  max_dash_pos1493 ) ( (  self4438 ) ) ) .f_line );
    struct env1589 envinst1589 = {
        .self4438 =  self4438 ,
    };
    int32_t  min_dash_indent4443 = ( (  or_dash_fail1584 ) ( ( (  minimum1587 ) ( ( (  map1603 ) ( ( (  to163 ) ( (  from_dash_line4439 ) ,  (  to_dash_line4440 ) ) ) ,  ( (struct envunion1590){ .fun = (  int32_t  (*) (  struct env1589*  ,    int32_t  ) )lam1604 , .env =  envinst1589 } ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1606 envinst1606 = {
        .self4438 =  self4438 ,
    };
    bool  all_dash_have_dash_comment4446 = ( (  all1605 ) ( ( (  to163 ) ( (  from_dash_line4439 ) ,  (  to_dash_line4440 ) ) ) ,  ( (struct envunion1607){ .fun = (  bool  (*) (  struct env1606*  ,    int32_t  ) )lam1616 , .env =  envinst1606 } ) ) );
    struct envunion231  temp1620 = ( (struct envunion231){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_106 *  ,    struct Cursors_33  ) )begin_dash_changeset1553 , .env =  env->envinst132 } );
    ( temp1620.fun ( &temp1620.env ,  ( ( * (  self4438 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4438 ) ) .f_cursor ) , .f_sel = ( ( * (  self4438 ) ) .f_sel ) } ) ) );
    struct RangeIter_153  temp1621 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_line4439 ) ,  (  to_dash_line4440 ) ) ) );
    while (true) {
        struct Maybe_155  __cond1622 =  next156 (&temp1621);
        if (  __cond1622 .tag == 0 ) {
            break;
        }
        int32_t  line4448 =  __cond1622 .stuff .Maybe_155_Just_s .field0;
        struct Char_65  comment_dash_str4449 = ( (  from_dash_charlike356 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4446 ) ) ) {
            ( (  set_dash_cursors1102 ) ( (  self4438 ) ,  ( (  mk706 ) ( (  line4448 ) ,  (  min_dash_indent4443 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
            struct envunion234  temp1623 = ( (struct envunion234){ .fun = (  enum Unit_8  (*) (  struct env206*  ,    struct Pane_222 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1177 , .env =  env->envinst206 } );
            ( temp1623.fun ( &temp1623.env ,  (  self4438 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_233  tup4450 = ( (  or_dash_fail1624 ) ( ( (  line_dash_begins_dash_with_dash_comment1618 ) ( (  self4438 ) ,  (  line4448 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion232  temp1627 = ( (struct envunion232){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
            ( temp1627.fun ( &temp1627.env ,  (  self4438 ) ,  ( ( Tuple2_233_Tuple2 ) ( ( (  fst1416 ) ( (  tup4450 ) ) ) ,  ( (  snd1417 ) ( (  tup4450 ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1559 ) ( ( ( * (  self4438 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1100 (   struct env255* env ,    struct Editor_250 *  ed4580 ,    struct Key_272  key4582 ) {
    struct Key_272  dref4583 = (  key4582 );
    if ( dref4583.tag == Key_272_Char_t ) {
        if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4580 ) .f_running = ( false );
        } else {
            if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1101 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ) );
            } else {
                if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1146 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ) );
                } else {
                    if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1149 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1153 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( Mode_223_Insert ) ) );
                            } else {
                                if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1156 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ) );
                                    ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( Mode_223_Insert ) ) );
                                } else {
                                    if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1174 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ) );
                                        ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( Mode_223_Insert ) ) );
                                    } else {
                                        if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_222 *  pane4585 = ( (  pane1145 ) ( (  ed4580 ) ) );
                                            int32_t  indent4586 = ( (  indent_dash_at_dash_line1157 ) ( (  pane4585 ) ,  ( ( ( * (  pane4585 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1174 ) ( (  pane4585 ) ) );
                                            struct envunion264  temp1176 = ( (struct envunion264){ .fun = (  enum Unit_8  (*) (  struct env206*  ,    struct Pane_222 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1177 , .env =  env->envinst206 } );
                                            ( temp1176.fun ( &temp1176.env ,  (  pane4585 ) ,  ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1146 ) ( (  pane4585 ) ) );
                                            struct envunion262  temp1315 = ( (struct envunion262){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_222 *  ,    int32_t  ) )indent_dash_at_dash_current1316 , .env =  env->envinst228 } );
                                            ( temp1315.fun ( &temp1315.env ,  (  pane4585 ) ,  (  indent4586 ) ) );
                                            ( (  set_dash_mode1154 ) ( (  pane4585 ) ,  ( Mode_223_Insert ) ) );
                                        } else {
                                            if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_222 *  pane4587 = ( (  pane1145 ) ( (  ed4580 ) ) );
                                                int32_t  indent4588 = ( (  indent_dash_at_dash_line1157 ) ( (  pane4587 ) ,  ( ( ( * (  pane4587 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1322 ) ( (  pane4587 ) ) );
                                                struct envunion1325  temp1324 = ( (struct envunion1325){ .fun = (  enum Unit_8  (*) (  struct env206*  ,    struct Pane_222 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1177 , .env =  env->envinst206 } );
                                                ( temp1324.fun ( &temp1324.env ,  (  pane4587 ) ,  ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1327  temp1326 = ( (struct envunion1327){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_222 *  ,    int32_t  ) )indent_dash_at_dash_current1316 , .env =  env->envinst228 } );
                                                ( temp1326.fun ( &temp1326.env ,  (  pane4587 ) ,  (  indent4588 ) ) );
                                                ( (  set_dash_mode1154 ) ( (  pane4587 ) ,  ( Mode_223_Insert ) ) );
                                            } else {
                                                if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1328 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( MoveDirection_1329_MoveFwd ) ,  ( MoveTarget_1330_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1328 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( MoveDirection_1329_MoveFwd ) ,  ( MoveTarget_1330_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1328 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( MoveDirection_1329_MoveBwd ) ,  ( MoveTarget_1330_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion258  temp1368 = ( (struct envunion258){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_222 *  ) )redo1369 , .env =  env->envinst213 } );
                                                                ( temp1368.fun ( &temp1368.env ,  ( (  pane1145 ) ( (  ed4580 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion257  temp1393 = ( (struct envunion257){ .fun = (  enum Unit_8  (*) (  struct env211*  ,    struct Pane_222 *  ) )undo1394 , .env =  env->envinst211 } );
                                                                    ( temp1393.fun ( &temp1393.env ,  ( (  pane1145 ) ( (  ed4580 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion260  temp1411 = ( (struct envunion260){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_250 *  ) )copy_dash_selection_dash_to_dash_clipboard1412 , .env =  env->envinst235 } );
                                                                        ( temp1411.fun ( &temp1411.env ,  (  ed4580 ) ) );
                                                                        struct envunion261  temp1424 = ( (struct envunion261){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
                                                                        ( temp1424.fun ( &temp1424.env ,  ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( (  selection1413 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( Mode_223_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1433  temp1432 = ( (struct envunion1433){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_250 *  ) )copy_dash_selection_dash_to_dash_clipboard1412 , .env =  env->envinst235 } );
                                                                            ( temp1432.fun ( &temp1432.env ,  (  ed4580 ) ) );
                                                                            struct envunion1435  temp1434 = ( (struct envunion1435){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_222 *  ,    struct Tuple2_233  ,    struct StrView_27  ) )replace_dash_selection1425 , .env =  env->envinst215 } );
                                                                            ( temp1434.fun ( &temp1434.env ,  ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( (  selection1413 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( Mode_223_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1437  temp1436 = ( (struct envunion1437){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_250 *  ) )copy_dash_selection_dash_to_dash_clipboard1412 , .env =  env->envinst235 } );
                                                                                ( temp1436.fun ( &temp1436.env ,  (  ed4580 ) ) );
                                                                                size_t  bytes_dash_yanked4589 = ( (  num_dash_bytes1141 ) ( ( (  or_dash_else602 ) ( ( ( * (  ed4580 ) ) .f_clipboard ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion263  temp1438 = ( (struct envunion263){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_250 *  ,    struct StrConcat_83  ) )set_dash_msg1439 , .env =  env->envinst241 } );
                                                                                ( temp1438.fun ( &temp1438.env ,  (  ed4580 ) ,  ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4589 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1488 envinst1488 = {
                                                                                        .ed4580 =  ed4580 ,
                                                                                        .envinst215 = env->envinst215 ,
                                                                                    };
                                                                                    ( (  if_dash_just1487 ) ( ( ( * (  ed4580 ) ) .f_clipboard ) ,  ( (struct envunion1490){ .fun = (  enum Unit_8  (*) (  struct env1488*  ,    struct StrView_27  ) )lam1492 , .env =  envinst1488 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1501 envinst1501 = {
                                                                                            .ed4580 =  ed4580 ,
                                                                                            .envinst215 = env->envinst215 ,
                                                                                        };
                                                                                        ( (  if_dash_just1500 ) ( ( ( * (  ed4580 ) ) .f_clipboard ) ,  ( (struct envunion1503){ .fun = (  enum Unit_8  (*) (  struct env1501*  ,    struct StrView_27  ) )lam1505 , .env =  envinst1501 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1510 envinst1510 = {
                                                                                                .ed4580 =  ed4580 ,
                                                                                                .envinst215 = env->envinst215 ,
                                                                                            };
                                                                                            ( (  if_dash_just1509 ) ( ( ( * (  ed4580 ) ) .f_clipboard ) ,  ( (struct envunion1512){ .fun = (  enum Unit_8  (*) (  struct env1510*  ,    struct StrView_27  ) )lam1514 , .env =  envinst1510 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1517 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( Mode_223_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1521 ) ( ( ( ( * (  ed4580 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4580 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4580 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4580 ) .f_mode = ( ( EditorMode_251_Cmd ) ( ( ( * ( (  pane1145 ) ( (  ed4580 ) ) ) ) .f_cursor ) ,  ( (  mk1443 ) ( ( ( * (  ed4580 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4580 ) .f_mode = ( ( EditorMode_251_Search ) ( ( ( * ( (  pane1145 ) ( (  ed4580 ) ) ) ) .f_cursor ) ,  ( (  mk1443 ) ( ( ( * (  ed4580 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1522 ) ( (  ed4580 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1541 ) ( (  ed4580 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion259  temp1550 = ( (struct envunion259){ .fun = (  enum Unit_8  (*) (  struct env219*  ,    struct Pane_222 *  ) )indent_dash_selection1551 , .env =  env->envinst219 } );
                                                                                                                        ( temp1550.fun ( &temp1550.env ,  ( (  pane1145 ) ( (  ed4580 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion256  temp1567 = ( (struct envunion256){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_222 *  ) )dedent_dash_selection1568 , .env =  env->envinst225 } );
                                                                                                                            ( temp1567.fun ( &temp1567.env ,  ( (  pane1145 ) ( (  ed4580 ) ) ) ) );
                                                                                                                        } else {
                                                                                                                            if ( (  eq947 ( ( dref4583 .stuff .Key_272_Char_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
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
        if ( dref4583.tag == Key_272_Escape_t ) {
            ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  ( Mode_223_Normal ) ) );
        }
        else {
            if ( dref4583.tag == Key_272_Ctrl_t ) {
                if ( (  eq947 ( ( dref4583 .stuff .Key_272_Ctrl_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion265  temp1582 = ( (struct envunion265){ .fun = (  enum Unit_8  (*) (  struct env230*  ,    struct Pane_222 *  ) )toggle_dash_comment1583 , .env =  env->envinst230 } );
                    ( temp1582.fun ( &temp1582.env ,  ( (  pane1145 ) ( (  ed4580 ) ) ) ) );
                } else {
                    if ( (  eq947 ( ( dref4583 .stuff .Key_272_Ctrl_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1153 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq947 ( ( dref4583 .stuff .Key_272_Ctrl_s .field0 ) , ( (  from_dash_charlike494 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1149 ) ( ( (  pane1145 ) ( (  ed4580 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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
    enum Unit_8  (*fun) (  struct env255*  ,    struct Editor_250 *  ,    struct Key_272  );
    struct env255 env;
};

struct envunion1631 {
    enum Unit_8  (*fun) (  struct env206*  ,    struct Pane_222 *  ,    struct StrView_27  );
    struct env206 env;
};

static  enum Unit_8   backspace1634 (   struct env209* env ,    struct Pane_222 *  self4379 ) {
    struct Pos_26  prev_dash_cur4380 = ( ( * (  self4379 ) ) .f_cursor );
    ( (  move_dash_left1101 ) ( (  self4379 ) ) );
    struct envunion210  temp1635 = ( (struct envunion210){ .fun = (  struct Maybe_208  (*) (  struct env127*  ,    struct TextBuf_106 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_208  ) )change1179 , .env =  env->envinst127 } );
    ( temp1635.fun ( &temp1635.env ,  ( ( * (  self4379 ) ) .f_buf ) ,  ( ( * (  self4379 ) ) .f_cursor ) ,  (  prev_dash_cur4380 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_208) { .tag = Maybe_208_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1637 {
    char _arr [1];
};

static  char *   cast1638 (    struct Array_1637 *  x357 ) {
    return ( (char * ) (  x357 ) );
}

static  struct Slice_961   as_dash_slice1636 (    struct Array_1637 *  arr2489 ) {
    return ( (struct Slice_961) { .f_ptr = ( (  cast1638 ) ( (  arr2489 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1637   from_dash_listlike1640 (    struct Array_1637 *  self331 ) {
    return ( * (  self331 ) );
}

struct Scanner_1645 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1645   mk_dash_from_dash_strview1647 (    struct StrView_27  s3256 ) {
    return ( (struct Scanner_1645) { .f_s = (  s3256 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
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

static  struct Map_1652   into_dash_iter1655 (    struct Map_1652  self729 ) {
    return (  self729 );
}

static  struct Maybe_299   next1657 (    struct TakeWhile_1653 *  self914 ) {
    struct Maybe_299  mx915 = ( (  next474 ) ( ( & ( ( * (  self914 ) ) .f_it ) ) ) );
    struct Maybe_299  dref916 = (  mx915 );
    if ( dref916.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref916.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self914 ) ) .f_pred ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct Maybe_248   next1656 (    struct Map_1652 *  dref731 ) {
    struct Maybe_299  dref734 = ( (  next1657 ) ( ( & ( (* dref731 ) .field0 ) ) ) );
    if ( dref734.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    else {
        if ( dref734.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_248_Just ) ( ( ( (* dref731 ) .field1 ) ( ( dref734 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1654 (    struct Map_1652  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    size_t  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct Map_1652  it1049 = ( (  into_dash_iter1655 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_248  dref1050 = ( (  next1656 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_248_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_248_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_248_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  size_t   lam1660 (    size_t  v1062 ,    size_t  s1064 ) {
    return (  op_dash_add313 ( (  v1062 ) , (  s1064 ) ) );
}

static  size_t   sum1651 (    struct Map_1652  it1060 ) {
    return ( (  reduce1654 ) ( (  it1060 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1660 ) ) );
}

static  struct TakeWhile_1653   into_dash_iter1662 (    struct TakeWhile_1653  self911 ) {
    return (  self911 );
}

static  struct Map_1652   map1661 (    struct TakeWhile_1653  iterable738 ,    size_t (*  fun740 )(    struct Char_65  ) ) {
    struct TakeWhile_1653  it741 = ( (  into_dash_iter1662 ) ( (  iterable738 ) ) );
    return ( ( Map_1652_Map ) ( (  it741 ) ,  (  fun740 ) ) );
}

static  struct TakeWhile_1653   take_dash_while1663 (    struct StrViewIter_469  it920 ,    bool (*  pred922 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1653) { .f_it = ( (  into_dash_iter470 ) ( (  it920 ) ) ) , .f_pred = (  pred922 ) } );
}

static  size_t   lam1664 (    struct Char_65  c2403 ) {
    return ( (  c2403 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1650 (    struct StrView_27  self2399 ,    bool (*  fun2401 )(    struct Char_65  ) ) {
    size_t  bi2404 = ( (  sum1651 ) ( ( (  map1661 ) ( ( (  take_dash_while1663 ) ( ( (  chars471 ) ( (  self2399 ) ) ) ,  (  fun2401 ) ) ) ,  (  lam1664 ) ) ) ) );
    return ( (  byte_dash_substr496 ) ( (  self2399 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2404 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1649 (    struct Scanner_1645 *  sc3331 ,    bool (*  fun3333 )(    struct Char_65  ) ) {
    struct StrView_27  s3334 = ( (  take_dash_while1650 ) ( ( ( * (  sc3331 ) ) .f_s ) ,  (  fun3333 ) ) );
    (*  sc3331 ) .f_s = ( (  byte_dash_substr_dash_from475 ) ( ( ( * (  sc3331 ) ) .f_s ) ,  ( (  num_dash_bytes1141 ) ( (  s3334 ) ) ) ) );
    return (  s3334 );
}

static  enum Unit_8   drop_dash_str_dash_while1648 (    struct Scanner_1645 *  sc3337 ,    bool (*  fun3339 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1649 ) ( (  sc3337 ) ,  (  fun3339 ) ) );
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

static  struct Map_1668   into_dash_iter1671 (    struct Map_1668  self729 ) {
    return (  self729 );
}

static  struct Maybe_299   next1673 (    struct TakeWhile_1669 *  self914 ) {
    struct Maybe_299  mx915 = ( (  next474 ) ( ( & ( ( * (  self914 ) ) .f_it ) ) ) );
    struct Maybe_299  dref916 = (  mx915 );
    if ( dref916.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref916.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self914 ) ) .f_pred ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct Maybe_248   next1672 (    struct Map_1668 *  dref731 ) {
    struct Maybe_299  dref734 = ( (  next1673 ) ( ( & ( (* dref731 ) .field0 ) ) ) );
    if ( dref734.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    else {
        if ( dref734.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_248_Just ) ( ( ( (* dref731 ) .field1 ) ( ( dref734 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1670 (    struct Map_1668  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    size_t  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct Map_1668  it1049 = ( (  into_dash_iter1671 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_248  dref1050 = ( (  next1672 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_248_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_248_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_248_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  size_t   lam1676 (    size_t  v1062 ,    size_t  s1064 ) {
    return (  op_dash_add313 ( (  v1062 ) , (  s1064 ) ) );
}

static  size_t   sum1667 (    struct Map_1668  it1060 ) {
    return ( (  reduce1670 ) ( (  it1060 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1676 ) ) );
}

static  struct TakeWhile_1669   into_dash_iter1678 (    struct TakeWhile_1669  self911 ) {
    return (  self911 );
}

static  struct Map_1668   map1677 (    struct TakeWhile_1669  iterable738 ,    size_t (*  fun740 )(    struct Char_65  ) ) {
    struct TakeWhile_1669  it741 = ( (  into_dash_iter1678 ) ( (  iterable738 ) ) );
    return ( ( Map_1668_Map ) ( (  it741 ) ,  (  fun740 ) ) );
}

static  struct TakeWhile_1669   take_dash_while1679 (    struct StrViewIter_469  it920 ,    bool (*  pred922 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1669) { .f_it = ( (  into_dash_iter470 ) ( (  it920 ) ) ) , .f_pred = (  pred922 ) } );
}

static  size_t   lam1680 (    struct Char_65  c2403 ) {
    return ( (  c2403 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1666 (    struct StrView_27  self2399 ,    bool (*  fun2401 )(    struct Char_65  ) ) {
    size_t  bi2404 = ( (  sum1667 ) ( ( (  map1677 ) ( ( (  take_dash_while1679 ) ( ( (  chars471 ) ( (  self2399 ) ) ) ,  (  fun2401 ) ) ) ,  (  lam1680 ) ) ) ) );
    return ( (  byte_dash_substr496 ) ( (  self2399 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2404 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1665 (    struct Scanner_1645 *  sc3331 ,    bool (*  fun3333 )(    struct Char_65  ) ) {
    struct StrView_27  s3334 = ( (  take_dash_while1666 ) ( ( ( * (  sc3331 ) ) .f_s ) ,  (  fun3333 ) ) );
    (*  sc3331 ) .f_s = ( (  byte_dash_substr_dash_from475 ) ( ( ( * (  sc3331 ) ) .f_s ) ,  ( (  num_dash_bytes1141 ) ( (  s3334 ) ) ) ) );
    return (  s3334 );
}

static  bool   is_dash_not_dash_whitespace1681 (    struct Char_65  c1421 ) {
    return ( ! ( (  is_dash_whitespace1347 ) ( (  c1421 ) ) ) );
}

static  struct Maybe_299   head1683 (    struct StrView_27  it1092 ) {
    struct StrViewIter_469  temp1684 = ( (  into_dash_iter472 ) ( (  it1092 ) ) );
    return ( (  next474 ) ( ( &temp1684 ) ) );
}

static  bool   null1682 (    struct StrView_27  it1101 ) {
    struct Maybe_299  dref1102 = ( (  head1683 ) ( (  it1101 ) ) );
    if ( dref1102.tag == Maybe_299_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_80   maybe1687 (    struct Maybe_80  x1510 ,    struct Maybe_80 (*  fun1512 )(    struct StrView_27  ) ,    struct Maybe_80  default1514 ) {
    return ( {  struct Maybe_80  dref1515 = (  x1510 ) ; dref1515.tag == Maybe_80_Just_t ? ( (  fun1512 ) ( ( dref1515 .stuff .Maybe_80_Just_s .field0 ) ) ) : (  default1514 ) ; } );
}

static  bool   is_dash_none1688 (    struct Maybe_80  m1492 ) {
    struct Maybe_80  dref1493 = (  m1492 );
    if ( dref1493.tag == Maybe_80_None_t ) {
        return ( true );
    }
    else {
        if ( dref1493.tag == Maybe_80_Just_t ) {
            return ( false );
        }
    }
}

struct env1697 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2743;
};

struct envunion1698 {
    enum Unit_8  (*fun) (  struct env1697*  ,    struct Char_65  );
    struct env1697 env;
};

static  enum Unit_8   for_dash_each1696 (    struct StrConcatIter_1356  iterable1024 ,   struct envunion1698  fun1026 ) {
    struct StrConcatIter_1356  temp1699 = ( (  into_dash_iter1358 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_1356 *  it1027 = ( &temp1699 );
    while ( ( true ) ) {
        struct Maybe_299  dref1028 = ( (  next1359 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_299_Just_t ) {
                struct envunion1698  temp1700 = (  fun1026 );
                ( temp1700.fun ( &temp1700.env ,  ( dref1028 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1701 (   struct env1697* env ,    struct Char_65  c2747 ) {
    struct envunion64  temp1702 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    return ( temp1702.fun ( &temp1702.env ,  ( env->builder2743 ) ,  (  c2747 ) ) );
}

static  enum Unit_8   write1695 (   struct env63* env ,    struct StrBuilder_62 *  builder2743 ,    struct StrConcat_71  s2745 ) {
    struct env1697 envinst1697 = {
        .envinst60 = env->envinst60 ,
        .builder2743 =  builder2743 ,
    };
    ( (  for_dash_each1696 ) ( ( (  chars1360 ) ( (  s2745 ) ) ) ,  ( (struct envunion1698){ .fun = (  enum Unit_8  (*) (  struct env1697*  ,    struct Char_65  ) )lam1701 , .env =  envinst1697 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1693 (   struct env69* env ,    struct StrBuilder_62 *  builder2750 ,    struct StrView_27  s2752 ) {
    struct envunion70  temp1694 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  ) )write1695 , .env =  env->envinst63 } );
    return ( temp1694.fun ( &temp1694.env ,  (  builder2750 ) ,  ( ( StrConcat_71_StrConcat ) ( (  s2752 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1704 (  ) {
    struct StrView_27  temp1705;
    return (  temp1705 );
}

static  struct StrView_27   or_dash_fail1703 (    struct Maybe_80  x1271 ,    struct StrView_27  errmsg1273 ) {
    struct Maybe_80  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_80_None_t ) {
        ( (  panic1223 ) ( (  errmsg1273 ) ) );
        return ( (  undefined1704 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_80_Just_t ) {
            return ( dref1274 .stuff .Maybe_80_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_469   chars1708 (    struct StrBuilder_62  s2795 ) {
    return ( (  into_dash_iter472 ) ( ( (  as_dash_str1484 ) ( ( & (  s2795 ) ) ) ) ) );
}

static  struct StrViewIter_469   chars1707 (    struct StrBuilder_62 *  self1672 ) {
    return ( (  chars1708 ) ( ( * (  self1672 ) ) ) );
}

static  int32_t   fprintf_dash_char1709 (    FILE *  file1397 ,    struct Char_65  c1399 ) {
    struct Array_340  temp1711;
    struct Array_340  temp1710 = (  temp1711 );
    struct Char_65  c1400 = ( (  regularize339 ) ( (  c1399 ) ,  ( &temp1710 ) ) );
    return ( ( fprintf ) ( (  file1397 ) ,  ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32331 ) ( ( (  c1400 ) .f_num_dash_bytes ) ) ) ,  ( (  c1400 ) .f_ptr ) ) );
}

static  bool   unreachable1712 (  ) {
    ( (  println1353 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1362 ) ( ) );
}

static  bool   try_dash_write_dash_contents1706 (    const char*  filename3032 ,    struct StrBuilder_62 *  contents3034 ) {
    FILE *  file3035 = ( ( fopen ) ( (  filename3032 ) ,  ( (  from_dash_charlike547 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null548 ) ( (  file3035 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_469  it3036 = ( (  chars1707 ) ( (  contents3034 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref3037 = ( (  next474 ) ( ( & (  it3036 ) ) ) );
        if ( dref3037.tag == Maybe_299_None_t ) {
            ( ( fclose ) ( (  file3035 ) ) );
            return ( true );
        }
        else {
            if ( dref3037.tag == Maybe_299_Just_t ) {
                int32_t  chars_dash_written3039 = ( (  fprintf_dash_char1709 ) ( (  file3035 ) ,  ( dref3037 .stuff .Maybe_299_Just_s .field0 ) ) );
                if ( (  cmp157 ( (  chars_dash_written3039 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1712 ) ( ) );
}

static  enum Unit_8   free1713 (    struct StrBuilder_62 *  builder2787 ) {
    ( (  free639 ) ( ( & ( ( * (  builder2787 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1714 (    struct Maybe_80  m1488 ) {
    struct Maybe_80  dref1489 = (  m1488 );
    if ( dref1489.tag == Maybe_80_None_t ) {
        return ( false );
    }
    else {
        if ( dref1489.tag == Maybe_80_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_248   write_dash_to_dash_file1686 (   struct env110* env ,    struct TextBuf_106 *  self3854 ,    struct Maybe_80  altname3856 ) {
    struct Maybe_80  filename3857 = ( (  maybe1687 ) ( (  altname3856 ) ,  ( Maybe_80_Just ) ,  ( ( * (  self3854 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1688 ) ( (  filename3857 ) ) ) ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    enum CAllocator_10  al3858 = ( ( * (  self3854 ) ) .f_al );
    struct StrBuilder_62  temp1689 = ( (  mk1443 ) ( (  al3858 ) ) );
    struct StrBuilder_62 *  sb3859 = ( &temp1689 );
    struct RangeIter_153  temp1690 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1148 ) ( (  self3854 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1691 =  next156 (&temp1690);
        if (  __cond1691 .tag == 0 ) {
            break;
        }
        int32_t  ln3861 =  __cond1691 .stuff .Maybe_155_Just_s .field0;
        struct envunion111  temp1692 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )writeln1693 , .env =  env->envinst69 } );
        ( temp1692.fun ( &temp1692.env ,  (  sb3859 ) ,  ( (  line1108 ) ( (  self3854 ) ,  (  ln3861 ) ) ) ) );
    }
    struct StrView_27  filename03862 = ( (  clone_dash_0517 ) ( ( (  or_dash_fail1703 ) ( (  filename3857 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"expect filename" ) ,  ( 15 ) ) ) ) ) ,  (  al3858 ) ) );
    bool  result3863 = ( (  try_dash_write_dash_contents1706 ) ( ( (  as_dash_const_dash_str557 ) ( (  filename03862 ) ) ) ,  (  sb3859 ) ) );
    ( (  free559 ) ( (  filename03862 ) ,  (  al3858 ) ) );
    ( (  free1713 ) ( (  sb3859 ) ) );
    if ( ( ! (  result3863 ) ) ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    if ( ( (  is_dash_just1714 ) ( (  altname3856 ) ) ) ) {
        struct Maybe_80  dref3864 = ( ( * (  self3854 ) ) .f_filename );
        if ( dref3864.tag == Maybe_80_Just_t ) {
            ( (  free559 ) ( ( dref3864 .stuff .Maybe_80_Just_s .field0 ) ,  (  al3858 ) ) );
        }
        else {
            if ( dref3864.tag == Maybe_80_None_t ) {
            }
        }
        (*  self3854 ) .f_filename = (  altname3856 );
    }
    return ( ( Maybe_248_Just ) ( ( (  num_dash_bytes1141 ) ( ( (  as_dash_str1484 ) ( (  sb3859 ) ) ) ) ) ) );
}

struct env1723 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2743;
};

struct envunion1724 {
    enum Unit_8  (*fun) (  struct env1723*  ,    struct Char_65  );
    struct env1723 env;
};

static  enum Unit_8   for_dash_each1722 (    struct StrViewIter_469  iterable1024 ,   struct envunion1724  fun1026 ) {
    struct StrViewIter_469  temp1725 = ( (  into_dash_iter470 ) ( (  iterable1024 ) ) );
    struct StrViewIter_469 *  it1027 = ( &temp1725 );
    while ( ( true ) ) {
        struct Maybe_299  dref1028 = ( (  next474 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_299_Just_t ) {
                struct envunion1724  temp1726 = (  fun1026 );
                ( temp1726.fun ( &temp1726.env ,  ( dref1028 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1727 (   struct env1723* env ,    struct Char_65  c2747 ) {
    struct envunion64  temp1728 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    return ( temp1728.fun ( &temp1728.env ,  ( env->builder2743 ) ,  (  c2747 ) ) );
}

static  enum Unit_8   write1721 (   struct env66* env ,    struct StrBuilder_62 *  builder2743 ,    struct StrView_27  s2745 ) {
    struct env1723 envinst1723 = {
        .envinst60 = env->envinst60 ,
        .builder2743 =  builder2743 ,
    };
    ( (  for_dash_each1722 ) ( ( (  chars471 ) ( (  s2745 ) ) ) ,  ( (struct envunion1724){ .fun = (  enum Unit_8  (*) (  struct env1723*  ,    struct Char_65  ) )lam1727 , .env =  envinst1723 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1718 (   struct env74* env ,    struct StrView_27  s2801 ,    enum CAllocator_10  al2803 ) {
    struct StrBuilder_62  temp1719 = ( (  mk1443 ) ( (  al2803 ) ) );
    struct StrBuilder_62 *  sb2804 = ( &temp1719 );
    struct envunion76  temp1720 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1721 , .env =  env->envinst66 } );
    ( temp1720.fun ( &temp1720.env ,  (  sb2804 ) ,  (  s2801 ) ) );
    struct envunion75  temp1729 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    ( temp1729.fun ( &temp1729.env ,  (  sb2804 ) ,  ( (  nullchar556 ) ( ) ) ) );
    struct StrView_27  dynstr2805 = ( (  as_dash_str1484 ) ( (  sb2804 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2805 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub291 ( ( ( (  dynstr2805 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1716 (   struct env237* env ,    struct Editor_250 *  ed4520 ,    struct StrView_27  s4522 ) {
    ( (  reset_dash_msg1090 ) ( (  ed4520 ) ) );
    struct envunion238  temp1717 = ( (struct envunion238){ .fun = (  struct StrView_27  (*) (  struct env74*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1718 , .env =  env->envinst74 } );
    (*  ed4520 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1717.fun ( &temp1717.env ,  (  s4522 ) ,  ( ( * (  ed4520 ) ) .f_al ) ) ) ) );
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
    struct StrBuilder_62 *  builder2743;
};

struct envunion1743 {
    enum Unit_8  (*fun) (  struct env1742*  ,    struct Char_65  );
    struct env1742 env;
};

static  struct StrConcatIter_1738   into_dash_iter1745 (    struct StrConcatIter_1738  self1208 ) {
    return (  self1208 );
}

static  struct Maybe_299   next1749 (    struct StrConcatIter_1741 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next1748 (    struct StrConcatIter_1740 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next1749 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next1747 (    struct StrCaseIter_1739 *  self1648 ) {
    struct StrCaseIter_1739 *  dref1649 = (  self1648 );
    if ( (* dref1649 ).tag == StrCaseIter_1739_StrCaseIter1_t ) {
        return ( (  next474 ) ( ( & ( (* dref1649 ) .stuff .StrCaseIter_1739_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1649 ).tag == StrCaseIter_1739_StrCaseIter2_t ) {
            return ( (  next1748 ) ( ( & ( (* dref1649 ) .stuff .StrCaseIter_1739_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_299   next1746 (    struct StrConcatIter_1738 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1747 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1737 (    struct StrConcatIter_1738  iterable1024 ,   struct envunion1743  fun1026 ) {
    struct StrConcatIter_1738  temp1744 = ( (  into_dash_iter1745 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_1738 *  it1027 = ( &temp1744 );
    while ( ( true ) ) {
        struct Maybe_299  dref1028 = ( (  next1746 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_299_Just_t ) {
                struct envunion1743  temp1750 = (  fun1026 );
                ( temp1750.fun ( &temp1750.env ,  ( dref1028 .stuff .Maybe_299_Just_s .field0 ) ) );
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

static  struct StrConcatIter_1741   into_dash_iter1761 (    struct StrConcat_682  dref1215 ) {
    return ( (struct StrConcatIter_1741) { .f_left = ( (  chars471 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars471 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_1741   chars1760 (    struct StrConcat_682  self1226 ) {
    return ( (  into_dash_iter1761 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_1740   into_dash_iter1759 (    struct StrConcat_681  dref1215 ) {
    return ( (struct StrConcatIter_1740) { .f_left = ( (  chars1760 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_1740   chars1758 (    struct StrConcat_681  self1226 ) {
    return ( (  into_dash_iter1759 ) ( (  self1226 ) ) );
}

static  struct StrCaseIter_1739   into_dash_iter1757 (    struct StrCase_1754  self1654 ) {
    struct StrCase_1754  dref1655 = (  self1654 );
    if ( dref1655.tag == StrCase_1754_StrCase1_t ) {
        return ( ( StrCaseIter_1739_StrCaseIter1 ) ( ( (  chars471 ) ( ( dref1655 .stuff .StrCase_1754_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1655.tag == StrCase_1754_StrCase2_t ) {
            return ( ( StrCaseIter_1739_StrCaseIter2 ) ( ( (  chars1758 ) ( ( dref1655 .stuff .StrCase_1754_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1739   chars1756 (    struct StrCase_1754  self1666 ) {
    return ( (  into_dash_iter1757 ) ( (  self1666 ) ) );
}

static  struct StrCaseIter_1739   chars1753 (    struct Maybe_80  self1680 ) {
    struct StrCase_1754  temp1755;
    struct StrCase_1754  c1681 = (  temp1755 );
    struct Maybe_80  dref1682 = (  self1680 );
    if ( dref1682.tag == Maybe_80_None_t ) {
        c1681 = ( ( StrCase_1754_StrCase1 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1682.tag == Maybe_80_Just_t ) {
            c1681 = ( ( StrCase_1754_StrCase2 ) ( ( ( StrConcat_681_StrConcat ) ( ( ( StrConcat_682_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Just(" ) ,  ( 5 ) ) ) ,  ( dref1682 .stuff .Maybe_80_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1756 ) ( (  c1681 ) ) );
}

static  struct StrConcatIter_1738   into_dash_iter1752 (    struct StrConcat_79  dref1215 ) {
    return ( (struct StrConcatIter_1738) { .f_left = ( (  chars471 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1753 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_1738   chars1751 (    struct StrConcat_79  self1226 ) {
    return ( (  into_dash_iter1752 ) ( (  self1226 ) ) );
}

static  enum Unit_8   lam1762 (   struct env1742* env ,    struct Char_65  c2747 ) {
    struct envunion64  temp1763 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    return ( temp1763.fun ( &temp1763.env ,  ( env->builder2743 ) ,  (  c2747 ) ) );
}

static  enum Unit_8   write1736 (   struct env67* env ,    struct StrBuilder_62 *  builder2743 ,    struct StrConcat_79  s2745 ) {
    struct env1742 envinst1742 = {
        .envinst60 = env->envinst60 ,
        .builder2743 =  builder2743 ,
    };
    ( (  for_dash_each1737 ) ( ( (  chars1751 ) ( (  s2745 ) ) ) ,  ( (struct envunion1743){ .fun = (  enum Unit_8  (*) (  struct env1742*  ,    struct Char_65  ) )lam1762 , .env =  envinst1742 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1733 (   struct env77* env ,    struct StrConcat_79  s2801 ,    enum CAllocator_10  al2803 ) {
    struct StrBuilder_62  temp1734 = ( (  mk1443 ) ( (  al2803 ) ) );
    struct StrBuilder_62 *  sb2804 = ( &temp1734 );
    struct envunion78  temp1735 = ( (struct envunion78){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrConcat_79  ) )write1736 , .env =  env->envinst67 } );
    ( temp1735.fun ( &temp1735.env ,  (  sb2804 ) ,  (  s2801 ) ) );
    struct envunion75  temp1764 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
    ( temp1764.fun ( &temp1764.env ,  (  sb2804 ) ,  ( (  nullchar556 ) ( ) ) ) );
    struct StrView_27  dynstr2805 = ( (  as_dash_str1484 ) ( (  sb2804 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2805 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub291 ( ( ( (  dynstr2805 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1731 (   struct env239* env ,    struct Editor_250 *  ed4520 ,    struct StrConcat_79  s4522 ) {
    ( (  reset_dash_msg1090 ) ( (  ed4520 ) ) );
    struct envunion240  temp1732 = ( (struct envunion240){ .fun = (  struct StrView_27  (*) (  struct env77*  ,    struct StrConcat_79  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1733 , .env =  env->envinst77 } );
    (*  ed4520 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1732.fun ( &temp1732.env ,  (  s4522 ) ,  ( ( * (  ed4520 ) ) .f_al ) ) ) ) );
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

static  bool   begins_dash_with1769 (    struct StrView_27  s1859 ,    struct StrView_27  beg1861 ) {
    struct StrViewIter_469  temp1770 = ( (  chars471 ) ( (  s1859 ) ) );
    struct StrViewIter_469 *  scs1862 = ( &temp1770 );
    struct StrViewIter_469  temp1771 = ( (  chars471 ) ( (  beg1861 ) ) );
    struct StrViewIter_469 *  begcs1863 = ( &temp1771 );
    while ( ( true ) ) {
        struct Tuple2_1772  dref1864 = ( ( Tuple2_1772_Tuple2 ) ( ( (  next474 ) ( (  scs1862 ) ) ) ,  ( (  next474 ) ( (  begcs1863 ) ) ) ) );
        if ( dref1864 .field0.tag == Maybe_299_Just_t && dref1864 .field1.tag == Maybe_299_Just_t ) {
            if ( ( !  eq480 ( ( dref1864 .field0 .stuff .Maybe_299_Just_s .field0 ) , ( dref1864 .field1 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref1864 .field0.tag == Maybe_299_None_t && dref1864 .field1.tag == Maybe_299_Just_t ) {
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
    struct Slice_15  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_1775   into_dash_iter1776 (    struct SliceAddressIter_1775  self2041 ) {
    return (  self2041 );
}

static  struct SliceAddressIter_1775   addresses1778 (    struct Slice_15  slice2038 ) {
    return ( (struct SliceAddressIter_1775) { .f_slice = (  slice2038 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_15   to_dash_slice1779 (    struct List_14  l2302 ) {
    struct Line_16 *  ptr2303 = ( ( (  l2302 ) .f_elements ) .f_ptr );
    return ( (struct Slice_15) { .f_ptr = (  ptr2303 ) , .f_count = ( (  l2302 ) .f_count ) } );
}

static  struct SliceAddressIter_1775   addresses1777 (    struct List_14  l2306 ) {
    return ( (  addresses1778 ) ( ( (  to_dash_slice1779 ) ( (  l2306 ) ) ) ) );
}

struct Maybe_1781 {
    enum {
        Maybe_1781_None_t,
        Maybe_1781_Just_t,
    } tag;
    union {
        struct {
            struct Line_16 *  field0;
        } Maybe_1781_Just_s;
    } stuff;
};

static struct Maybe_1781 Maybe_1781_Just (  struct Line_16 *  field0 ) {
    return ( struct Maybe_1781 ) { .tag = Maybe_1781_Just_t, .stuff = { .Maybe_1781_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1781   next1782 (    struct SliceAddressIter_1775 *  self2044 ) {
    size_t  off2045 = ( ( * (  self2044 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2045 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2044 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1781) { .tag = Maybe_1781_None_t } );
    }
    struct Line_16 *  elem2046 = ( (  offset_dash_ptr401 ) ( ( ( ( * (  self2044 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2045 ) ) ) ) );
    (*  self2044 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2045 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1781_Just ) ( (  elem2046 ) ) );
}

static  enum Unit_8   set_dash_filetype1773 (    struct TextBuf_106 *  self3985 ,    enum Filetype_109  type3987 ) {
    (*  self3985 ) .f_filetype = (  type3987 );
    struct SliceAddressIter_1775  temp1774 =  into_dash_iter1776 ( ( (  addresses1777 ) ( ( ( * (  self3985 ) ) .f_buf ) ) ) );
    while (true) {
        struct Maybe_1781  __cond1780 =  next1782 (&temp1774);
        if (  __cond1780 .tag == 0 ) {
            break;
        }
        struct Line_16 *  line3989 =  __cond1780 .stuff .Maybe_1781_Just_s .field0;
        (*  line3989 ) .f_invalidated = ( true );
    }
    return ( Unit_8_Unit );
}

struct envunion1784 {
    enum Unit_8  (*fun) (  struct env237*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env237 env;
};

struct env1787 {
    bool (*  fun1076 )(    struct Char_65  );
};

struct envunion1788 {
    bool  (*fun) (  struct env1787*  ,    struct Char_65  ,    bool  );
    struct env1787 env;
};

static  bool   reduce1786 (    struct StrView_27  iterable1043 ,    bool  base1045 ,   struct envunion1788  fun1047 ) {
    bool  x1048 = (  base1045 );
    struct StrViewIter_469  it1049 = ( (  into_dash_iter472 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1050 = ( (  next474 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_299_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_299_Just_t ) {
                struct envunion1788  temp1789 = (  fun1047 );
                x1048 = ( temp1789.fun ( &temp1789.env ,  ( dref1050 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  bool   lam1792 (   struct env1787* env ,    struct Char_65  e1078 ,    bool  x1080 ) {
    return ( ( ( env->fun1076 ) ( (  e1078 ) ) ) && (  x1080 ) );
}

static  bool   all1785 (    struct StrView_27  it1074 ,    bool (*  fun1076 )(    struct Char_65  ) ) {
    struct env1787 envinst1787 = {
        .fun1076 =  fun1076 ,
    };
    return ( (  reduce1786 ) ( (  it1074 ) ,  ( true ) ,  ( (struct envunion1788){ .fun = (  bool  (*) (  struct env1787*  ,    struct Char_65  ,    bool  ) )lam1792 , .env =  envinst1787 } ) ) );
}

struct envunion1794 {
    enum Unit_8  (*fun) (  struct env237*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env237 env;
};

static  enum Unit_8   run_dash_cmd1644 (   struct env246* env ,    struct Editor_250 *  ed4539 ,    struct StrView_27  s4541 ) {
    struct Scanner_1645  temp1646 = ( (  mk_dash_from_dash_strview1647 ) ( (  s4541 ) ) );
    struct Scanner_1645 *  sc4542 = ( &temp1646 );
    ( (  drop_dash_str_dash_while1648 ) ( (  sc4542 ) ,  (  is_dash_whitespace1347 ) ) );
    struct StrView_27  cmd4543 = ( (  take_dash_str_dash_while1665 ) ( (  sc4542 ) ,  (  is_dash_not_dash_whitespace1681 ) ) );
    ( (  drop_dash_str_dash_while1648 ) ( (  sc4542 ) ,  (  is_dash_whitespace1347 ) ) );
    if ( (  eq497 ( (  cmd4543 ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4539 ) .f_running = ( false );
    } else {
        if ( (  eq497 ( (  cmd4543 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq497 ( (  cmd4543 ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4544 = ( (  take_dash_str_dash_while1665 ) ( (  sc4542 ) ,  (  is_dash_not_dash_whitespace1681 ) ) );
                struct Maybe_80  filename4545 = ( ( (  null1682 ) ( (  filename4544 ) ) ) ? ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) : ( ( Maybe_80_Just ) ( (  filename4544 ) ) ) );
                struct envunion247  temp1685 = ( (struct envunion247){ .fun = (  struct Maybe_248  (*) (  struct env110*  ,    struct TextBuf_106 *  ,    struct Maybe_80  ) )write_dash_to_dash_file1686 , .env =  env->envinst110 } );
                struct Maybe_248  write_dash_result4546 = ( temp1685.fun ( &temp1685.env ,  ( ( * ( (  pane1145 ) ( (  ed4539 ) ) ) ) .f_buf ) ,  (  filename4545 ) ) );
                struct Maybe_248  dref4547 = (  write_dash_result4546 );
                if ( dref4547.tag == Maybe_248_None_t ) {
                    if ( ( (  is_dash_none1688 ) ( (  filename4545 ) ) ) ) {
                        struct envunion249  temp1715 = ( (struct envunion249){ .fun = (  enum Unit_8  (*) (  struct env237*  ,    struct Editor_250 *  ,    struct StrView_27  ) )set_dash_msg1716 , .env =  env->envinst237 } );
                        ( temp1715.fun ( &temp1715.env ,  (  ed4539 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"could not save changes (!?)" ) ,  ( 27 ) ) ) ) );
                    } else {
                        struct envunion253  temp1730 = ( (struct envunion253){ .fun = (  enum Unit_8  (*) (  struct env239*  ,    struct Editor_250 *  ,    struct StrConcat_79  ) )set_dash_msg1731 , .env =  env->envinst239 } );
                        ( temp1730.fun ( &temp1730.env ,  (  ed4539 ) ,  ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4545 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4547.tag == Maybe_248_Just_t ) {
                        struct envunion254  temp1765 = ( (struct envunion254){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_250 *  ,    struct StrConcat_83  ) )set_dash_msg1439 , .env =  env->envinst241 } );
                        ( temp1765.fun ( &temp1765.env ,  (  ed4539 ) ,  ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"written " ) ,  ( 8 ) ) ) ,  ( dref4547 .stuff .Maybe_248_Just_s .field0 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)" bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq497 ( (  cmd4543 ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1766 ) ( ) );
                } else {
                    if ( (  eq497 ( (  cmd4543 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_27  what4549 = ( (  take_dash_str_dash_while1665 ) ( (  sc4542 ) ,  (  is_dash_not_dash_whitespace1681 ) ) );
                        if ( (  eq497 ( (  what4549 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed4539 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq497 ( (  what4549 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed4539 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp292 ( ( (  count1115 ) ( ( (  chars471 ) ( (  what4549 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1769 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"absolute" ) ,  ( 8 ) ) ) ,  (  what4549 ) ) ) ) ) {
                                    (* (*  ed4539 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp292 ( ( (  count1115 ) ( ( (  chars471 ) ( (  what4549 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1769 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"relative" ) ,  ( 8 ) ) ) ,  (  what4549 ) ) ) ) ) {
                                        (* (*  ed4539 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq497 ( (  cmd4543 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"ft" ) ,  ( 2 ) ) ) ) ) ) {
                            struct StrView_27  type4550 = ( (  take_dash_str_dash_while1665 ) ( (  sc4542 ) ,  (  is_dash_not_dash_whitespace1681 ) ) );
                            struct TextBuf_106 *  tb4551 = ( ( * ( (  pane1145 ) ( (  ed4539 ) ) ) ) .f_buf );
                            if ( (  eq497 ( (  type4550 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"text" ) ,  ( 4 ) ) ) ) ) ) {
                                ( (  set_dash_filetype1773 ) ( (  tb4551 ) ,  ( Filetype_109_Text ) ) );
                            } else {
                                if ( (  eq497 ( (  type4550 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) ) ) ) {
                                    ( (  set_dash_filetype1773 ) ( (  tb4551 ) ,  ( Filetype_109_KC ) ) );
                                } else {
                                    if ( (  eq497 ( (  type4550 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                                        ( (  set_dash_filetype1773 ) ( (  tb4551 ) ,  ( Filetype_109_Markdown ) ) );
                                    } else {
                                        struct envunion1784  temp1783 = ( (struct envunion1784){ .fun = (  enum Unit_8  (*) (  struct env237*  ,    struct Editor_250 *  ,    struct StrView_27  ) )set_dash_msg1716 , .env =  env->envinst237 } );
                                        ( temp1783.fun ( &temp1783.env ,  (  ed4539 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"unknown file type" ) ,  ( 17 ) ) ) ) );
                                    }
                                }
                            }
                        } else {
                            if ( (  eq497 ( (  cmd4543 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                            } else {
                                if ( ( (  all1785 ) ( (  cmd4543 ) ,  (  is_dash_digit984 ) ) ) ) {
                                } else {
                                    struct envunion1794  temp1793 = ( (struct envunion1794){ .fun = (  enum Unit_8  (*) (  struct env237*  ,    struct Editor_250 *  ,    struct StrView_27  ) )set_dash_msg1716 , .env =  env->envinst237 } );
                                    ( temp1793.fun ( &temp1793.env ,  (  ed4539 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"unknown command" ) ,  ( 15 ) ) ) ) );
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

static  struct Char_65   from_dash_u81797 (    uint8_t  b1403 ) {
    return ( (  char_dash_from_dash_u81054 ) ( (  b1403 ) ) );
}

static  struct Char_65   ascii_dash_char1796 (    char  c1412 ) {
    return ( (  from_dash_u81797 ) ( ( (  ascii_dash_u8493 ) ( (  c1412 ) ) ) ) );
}

static  struct Maybe_978   reduce1801 (    struct StrViewIter_469  iterable1043 ,    struct Maybe_978  base1045 ,    struct Maybe_978 (*  fun1047 )(    struct Char_65  ,    struct Maybe_978  ) ) {
    struct Maybe_978  x1048 = (  base1045 );
    struct StrViewIter_469  it1049 = ( (  into_dash_iter470 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1050 = ( (  next474 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_299_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_299_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  struct Maybe_978   sequence_dash_maybe1804 (    struct Char_65  e1847 ,    struct Maybe_978  b1849 ) {
    struct Maybe_978  dref1850 = (  b1849 );
    if ( dref1850.tag == Maybe_978_None_t ) {
        return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
    }
    else {
        if ( dref1850.tag == Maybe_978_Just_t ) {
            struct Maybe_155  dref1852 = ( (  parse_dash_digit1012 ) ( (  e1847 ) ) );
            if ( dref1852.tag == Maybe_155_None_t ) {
                return ( (struct Maybe_978) { .tag = Maybe_978_None_t } );
            }
            else {
                if ( dref1852.tag == Maybe_155_Just_t ) {
                    return ( ( Maybe_978_Just ) ( (  op_dash_add485 ( (  op_dash_mul288 ( ( dref1850 .stuff .Maybe_978_Just_s .field0 ) , (  from_dash_integral290 ( 10 ) ) ) ) , ( (  i32_dash_i641021 ) ( ( dref1852 .stuff .Maybe_155_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_978   parse_dash_int1800 (    struct StrView_27  s1844 ) {
    struct StrViewIter_469  cs1854 = ( (  chars471 ) ( (  s1844 ) ) );
    struct Maybe_299  dref1855 = ( (  head1350 ) ( (  cs1854 ) ) );
    if ( dref1855.tag == Maybe_299_Just_t ) {
        return ( (  reduce1801 ) ( (  cs1854 ) ,  ( ( Maybe_978_Just ) ( (  from_dash_integral290 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1804 ) ) );
    }
    else {
        if ( dref1855.tag == Maybe_299_None_t ) {
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

static  struct Map_1809   into_dash_iter1812 (    struct Map_1809  self729 ) {
    return (  self729 );
}

static  struct Maybe_299   next1814 (    struct TakeWhile_1810 *  self914 ) {
    struct Maybe_299  mx915 = ( (  next474 ) ( ( & ( ( * (  self914 ) ) .f_it ) ) ) );
    struct Maybe_299  dref916 = (  mx915 );
    if ( dref916.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref916.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self914 ) ) .f_pred ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct Maybe_248   next1813 (    struct Map_1809 *  dref731 ) {
    struct Maybe_299  dref734 = ( (  next1814 ) ( ( & ( (* dref731 ) .field0 ) ) ) );
    if ( dref734.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    else {
        if ( dref734.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_248_Just ) ( ( ( (* dref731 ) .field1 ) ( ( dref734 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1811 (    struct Map_1809  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    size_t  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct Map_1809  it1049 = ( (  into_dash_iter1812 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_248  dref1050 = ( (  next1813 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_248_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_248_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_248_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  size_t   lam1817 (    size_t  v1062 ,    size_t  s1064 ) {
    return (  op_dash_add313 ( (  v1062 ) , (  s1064 ) ) );
}

static  size_t   sum1808 (    struct Map_1809  it1060 ) {
    return ( (  reduce1811 ) ( (  it1060 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1817 ) ) );
}

static  struct TakeWhile_1810   into_dash_iter1819 (    struct TakeWhile_1810  self911 ) {
    return (  self911 );
}

static  struct Map_1809   map1818 (    struct TakeWhile_1810  iterable738 ,    size_t (*  fun740 )(    struct Char_65  ) ) {
    struct TakeWhile_1810  it741 = ( (  into_dash_iter1819 ) ( (  iterable738 ) ) );
    return ( ( Map_1809_Map ) ( (  it741 ) ,  (  fun740 ) ) );
}

static  struct TakeWhile_1810   take_dash_while1820 (    struct StrViewIter_469  it920 ,    bool (*  pred922 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1810) { .f_it = ( (  into_dash_iter470 ) ( (  it920 ) ) ) , .f_pred = (  pred922 ) } );
}

static  size_t   lam1821 (    struct Char_65  c2403 ) {
    return ( (  c2403 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1807 (    struct StrView_27  self2399 ,    bool (*  fun2401 )(    struct Char_65  ) ) {
    size_t  bi2404 = ( (  sum1808 ) ( ( (  map1818 ) ( ( (  take_dash_while1820 ) ( ( (  chars471 ) ( (  self2399 ) ) ) ,  (  fun2401 ) ) ) ,  (  lam1821 ) ) ) ) );
    return ( (  byte_dash_substr496 ) ( (  self2399 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2404 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1806 (    struct Scanner_1645 *  sc3331 ,    bool (*  fun3333 )(    struct Char_65  ) ) {
    struct StrView_27  s3334 = ( (  take_dash_while1807 ) ( ( ( * (  sc3331 ) ) .f_s ) ,  (  fun3333 ) ) );
    (*  sc3331 ) .f_s = ( (  byte_dash_substr_dash_from475 ) ( ( ( * (  sc3331 ) ) .f_s ) ,  ( (  num_dash_bytes1141 ) ( (  s3334 ) ) ) ) );
    return (  s3334 );
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

static  struct Map_1825   into_dash_iter1828 (    struct Map_1825  self729 ) {
    return (  self729 );
}

static  struct Maybe_299   next1830 (    struct TakeWhile_1826 *  self914 ) {
    struct Maybe_299  mx915 = ( (  next474 ) ( ( & ( ( * (  self914 ) ) .f_it ) ) ) );
    struct Maybe_299  dref916 = (  mx915 );
    if ( dref916.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    else {
        if ( dref916.tag == Maybe_299_Just_t ) {
            if ( ( ( ( * (  self914 ) ) .f_pred ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_299_Just ) ( ( dref916 .stuff .Maybe_299_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
            }
        }
    }
}

static  struct Maybe_248   next1829 (    struct Map_1825 *  dref731 ) {
    struct Maybe_299  dref734 = ( (  next1830 ) ( ( & ( (* dref731 ) .field0 ) ) ) );
    if ( dref734.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_248) { .tag = Maybe_248_None_t } );
    }
    else {
        if ( dref734.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_248_Just ) ( ( ( (* dref731 ) .field1 ) ( ( dref734 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1827 (    struct Map_1825  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    size_t  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct Map_1825  it1049 = ( (  into_dash_iter1828 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_248  dref1050 = ( (  next1829 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_248_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_248_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_248_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  size_t   lam1833 (    size_t  v1062 ,    size_t  s1064 ) {
    return (  op_dash_add313 ( (  v1062 ) , (  s1064 ) ) );
}

static  size_t   sum1824 (    struct Map_1825  it1060 ) {
    return ( (  reduce1827 ) ( (  it1060 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1833 ) ) );
}

static  struct TakeWhile_1826   into_dash_iter1835 (    struct TakeWhile_1826  self911 ) {
    return (  self911 );
}

static  struct Map_1825   map1834 (    struct TakeWhile_1826  iterable738 ,    size_t (*  fun740 )(    struct Char_65  ) ) {
    struct TakeWhile_1826  it741 = ( (  into_dash_iter1835 ) ( (  iterable738 ) ) );
    return ( ( Map_1825_Map ) ( (  it741 ) ,  (  fun740 ) ) );
}

static  struct TakeWhile_1826   take_dash_while1836 (    struct StrViewIter_469  it920 ,    bool (*  pred922 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1826) { .f_it = ( (  into_dash_iter470 ) ( (  it920 ) ) ) , .f_pred = (  pred922 ) } );
}

static  size_t   lam1837 (    struct Char_65  c2403 ) {
    return ( (  c2403 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1823 (    struct StrView_27  self2399 ,    bool (*  fun2401 )(    struct Char_65  ) ) {
    size_t  bi2404 = ( (  sum1824 ) ( ( (  map1834 ) ( ( (  take_dash_while1836 ) ( ( (  chars471 ) ( (  self2399 ) ) ) ,  (  fun2401 ) ) ) ,  (  lam1837 ) ) ) ) );
    return ( (  byte_dash_substr496 ) ( (  self2399 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2404 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1822 (    struct Scanner_1645 *  sc3331 ,    bool (*  fun3333 )(    struct Char_65  ) ) {
    struct StrView_27  s3334 = ( (  take_dash_while1823 ) ( ( ( * (  sc3331 ) ) .f_s ) ,  (  fun3333 ) ) );
    (*  sc3331 ) .f_s = ( (  byte_dash_substr_dash_from475 ) ( ( ( * (  sc3331 ) ) .f_s ) ,  ( (  num_dash_bytes1141 ) ( (  s3334 ) ) ) ) );
    return (  s3334 );
}

static  bool   lam1838 (    struct Char_65  c4535 ) {
    return ( ! ( (  is_dash_whitespace1347 ) ( (  c4535 ) ) ) );
}

static  struct Theme_172 *   or_dash_else1839 (    struct Maybe_245  self1278 ,    struct Theme_172 *  alt1280 ) {
    struct Maybe_245  dref1281 = (  self1278 );
    if ( dref1281.tag == Maybe_245_None_t ) {
        return (  alt1280 );
    }
    else {
        if ( dref1281.tag == Maybe_245_Just_t ) {
            return ( dref1281 .stuff .Maybe_245_Just_s .field0 );
        }
    }
}

struct SliceIter_1845 {
    struct Slice_193  f_slice;
    size_t  f_current_dash_offset;
};

struct env1846 {
    struct StrView_27  name4096;
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

static  struct Tuple2_194 *   offset_dash_ptr1852 (    struct Tuple2_194 *  x339 ,    int64_t  count341 ) {
    struct Tuple2_194  temp1853;
    return ( (struct Tuple2_194 * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp1853 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1849   next1851 (    struct SliceIter_1845 *  self2026 ) {
    size_t  off2027 = ( ( * (  self2026 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2026 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1849) { .tag = Maybe_1849_None_t } );
    }
    struct Tuple2_194  elem2028 = ( * ( (  offset_dash_ptr1852 ) ( ( ( ( * (  self2026 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2027 ) ) ) ) ) );
    (*  self2026 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1849_Just ) ( (  elem2028 ) ) );
}

static  struct Maybe_1849   next1850 (    struct Filter_1844 *  self766 ) {
    while ( ( true ) ) {
        struct Maybe_1849  dref767 = ( (  next1851 ) ( ( & ( ( * (  self766 ) ) .f_og ) ) ) );
        if ( dref767.tag == Maybe_1849_None_t ) {
            return ( (struct Maybe_1849) { .tag = Maybe_1849_None_t } );
        }
        else {
            if ( dref767.tag == Maybe_1849_Just_t ) {
                struct envunion1847  temp1854 = ( ( * (  self766 ) ) .f_fun );
                if ( ( temp1854.fun ( &temp1854.env ,  ( dref767 .stuff .Maybe_1849_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1849_Just ) ( ( dref767 .stuff .Maybe_1849_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1849  temp1855;
    return (  temp1855 );
}

static  struct Maybe_245   next1848 (    struct Map_1843 *  dref731 ) {
    struct Maybe_1849  dref734 = ( (  next1850 ) ( ( & ( (* dref731 ) .field0 ) ) ) );
    if ( dref734.tag == Maybe_1849_None_t ) {
        return ( (struct Maybe_245) { .tag = Maybe_245_None_t } );
    }
    else {
        if ( dref734.tag == Maybe_1849_Just_t ) {
            return ( ( Maybe_245_Just ) ( ( ( (* dref731 ) .field1 ) ( ( dref734 .stuff .Maybe_1849_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1843   into_dash_iter1857 (    struct Map_1843  self729 ) {
    return (  self729 );
}

static  struct Maybe_245   head1842 (    struct Map_1843  it1092 ) {
    struct Map_1843  temp1856 = ( (  into_dash_iter1857 ) ( (  it1092 ) ) );
    return ( (  next1848 ) ( ( &temp1856 ) ) );
}

static  struct Filter_1844   into_dash_iter1859 (    struct Filter_1844  self763 ) {
    return (  self763 );
}

static  struct Map_1843   map1858 (    struct Filter_1844  iterable738 ,    struct Theme_172 * (*  fun740 )(    struct Tuple2_194  ) ) {
    struct Filter_1844  it741 = ( (  into_dash_iter1859 ) ( (  iterable738 ) ) );
    return ( ( Map_1843_Map ) ( (  it741 ) ,  (  fun740 ) ) );
}

static  struct SliceIter_1845   into_dash_iter1861 (    struct Slice_193  self2020 ) {
    return ( (struct SliceIter_1845) { .f_slice = (  self2020 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1844   filter1860 (    struct Slice_193  iterable771 ,   struct envunion1847  fun773 ) {
    struct SliceIter_1845  it774 = ( (  into_dash_iter1861 ) ( (  iterable771 ) ) );
    return ( (struct Filter_1844) { .f_og = (  it774 ) , .f_fun = (  fun773 ) } );
}

static  bool   lam1862 (   struct env1846* env ,    struct Tuple2_194  dref4097 ) {
    return ( (  begins_dash_with1769 ) ( ( dref4097 .field0 ) ,  ( env->name4096 ) ) );
}

static  struct Theme_172 *   snd1863 (    struct Tuple2_194  dref1484 ) {
    return ( dref1484 .field1 );
}

static  struct Maybe_245   match_dash_theme1841 (   struct env202* env ,    struct StrView_27  name4096 ) {
    if ( ( (  null1682 ) ( (  name4096 ) ) ) ) {
        return ( (struct Maybe_245) { .tag = Maybe_245_None_t } );
    }
    struct env1846 envinst1846 = {
        .name4096 =  name4096 ,
    };
    return ( (  head1842 ) ( ( (  map1858 ) ( ( (  filter1860 ) ( ( env->all_dash_themes4093 ) ,  ( (struct envunion1847){ .fun = (  bool  (*) (  struct env1846*  ,    struct Tuple2_194  ) )lam1862 , .env =  envinst1846 } ) ) ) ,  (  snd1863 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1799 (   struct env243* env ,    struct Editor_250 *  ed4525 ,    struct StrView_27  cmd4527 ) {
    struct Maybe_978  dref4528 = ( (  parse_dash_int1800 ) ( (  cmd4527 ) ) );
    if ( dref4528.tag == Maybe_978_Just_t ) {
        int32_t  line4530 = ( (  clamp1496 ) ( ( (  i64_dash_i321023 ) ( ( dref4528 .stuff .Maybe_978_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (  num_dash_lines1148 ) ( ( ( * ( (  pane1145 ) ( (  ed4525 ) ) ) ) .f_buf ) ) ) ) );
        int32_t  line4531 = (  op_dash_sub164 ( (  line4530 ) , (  from_dash_integral56 ( 1 ) ) ) );
        ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4525 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4531 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
    }
    else {
        if ( dref4528.tag == Maybe_978_None_t ) {
            struct Scanner_1645  temp1805 = ( (  mk_dash_from_dash_strview1647 ) ( (  cmd4527 ) ) );
            struct Scanner_1645 *  sc4532 = ( &temp1805 );
            struct StrView_27  cmd4533 = ( (  take_dash_str_dash_while1806 ) ( (  sc4532 ) ,  (  is_dash_alpha1346 ) ) );
            if ( (  eq497 ( (  cmd4533 ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1648 ) ( (  sc4532 ) ,  (  is_dash_whitespace1347 ) ) );
                struct StrView_27  theme_dash_name4536 = ( (  take_dash_str_dash_while1822 ) ( (  sc4532 ) ,  (  lam1838 ) ) );
                struct envunion244  temp1840 = ( (struct envunion244){ .fun = (  struct Maybe_245  (*) (  struct env202*  ,    struct StrView_27  ) )match_dash_theme1841 , .env =  env->envinst202 } );
                (* (*  ed4525 ) .f_cfg ) .f_theme = ( (  or_dash_else1839 ) ( ( temp1840.fun ( &temp1840.env ,  (  theme_dash_name4536 ) ) ) ,  ( ( * (  ed4525 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_469   into_dash_iter1867 (    struct StrBuilder_62  self2798 ) {
    return ( (  chars1708 ) ( (  self2798 ) ) );
}

static  struct Maybe_299   head1865 (    struct StrBuilder_62  it1092 ) {
    struct StrViewIter_469  temp1866 = ( (  into_dash_iter1867 ) ( (  it1092 ) ) );
    return ( (  next474 ) ( ( &temp1866 ) ) );
}

static  bool   null1864 (    struct StrBuilder_62  it1101 ) {
    struct Maybe_299  dref1102 = ( (  head1865 ) ( (  it1101 ) ) );
    if ( dref1102.tag == Maybe_299_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1873 (   struct env42* env ,    struct List_9 *  list2252 ,    size_t  i2254 ) {
    struct envunion43  temp1874 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range642 , .env =  env->envinst40 } );
    ( temp1874.fun ( &temp1874.env ,  (  list2252 ) ,  (  i2254 ) ,  (  op_dash_add313 ( (  i2254 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1871 (   struct env44* env ,    struct List_9 *  list2268 ) {
    if ( (  eq409 ( ( ( * (  list2268 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1223 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1872 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_9 *  ,    size_t  ) )remove1873 , .env =  env->envinst42 } );
    return ( temp1872.fun ( &temp1872.env ,  (  list2268 ) ,  (  op_dash_sub291 ( ( ( * (  list2268 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1869 (   struct env72* env ,    struct StrBuilder_62 *  sb2761 ) {
    struct envunion73  temp1870 = ( (struct envunion73){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_9 *  ) )pop1871 , .env =  env->envinst44 } );
    return ( temp1870.fun ( &temp1870.env ,  ( & ( ( * (  sb2761 ) ) .f_chars ) ) ) );
}

struct envunion1876 {
    enum Unit_8  (*fun) (  struct env243*  ,    struct Editor_250 *  ,    struct StrView_27  );
    struct env243 env;
};

struct env1878 {
    ;
    struct Editor_250 *  ed4607;
};

struct envunion1879 {
    enum Unit_8  (*fun) (  struct env1878*  ,    struct StrView_27  );
    struct env1878 env;
};

static  enum Unit_8   if_dash_just1877 (    struct Maybe_80  x1519 ,   struct envunion1879  fun1521 ) {
    struct Maybe_80  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_80_Just_t ) {
        struct envunion1879  temp1880 = (  fun1521 );
        ( temp1880.fun ( &temp1880.env ,  ( dref1522 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1881 (   struct env1878* env ,    struct StrView_27  st4624 ) {
    ( (  free559 ) ( (  st4624 ) ,  ( ( * ( env->ed4607 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1883 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  enum Unit_8   live_dash_search1884 (    struct Editor_250 *  ed4554 ,    struct Pos_26  begin_dash_pos4556 ,    struct StrView_27  query4558 ) {
    if ( ( ! ( (  null1682 ) ( (  query4558 ) ) ) ) ) {
        struct Maybe_1523  dref4559 = ( (  search_dash_from1524 ) ( ( (  pane1145 ) ( (  ed4554 ) ) ) ,  (  begin_dash_pos4556 ) ,  (  query4558 ) ) );
        if ( dref4559.tag == Maybe_1523_Just_t ) {
            ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4554 ) ) ) ,  ( dref4559 .stuff .Maybe_1523_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4559 .stuff .Maybe_1523_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1103_NoChanges ) ) );
        }
        else {
            if ( dref4559.tag == Maybe_1523_None_t ) {
                ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4554 ) ) ) ,  (  begin_dash_pos4556 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4554 ) ) ) ,  (  begin_dash_pos4556 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1886 {
    enum Unit_8  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

static  enum Unit_8   handle_dash_key1098 (   struct env266* env ,    struct Editor_250 *  ed4607 ,    struct Key_272  key4609 ) {
    struct EditorMode_251 *  dref4610 = ( & ( ( * (  ed4607 ) ) .f_mode ) );
    if ( (* dref4610 ).tag == EditorMode_251_Normal_t ) {
        enum Mode_223  dref4611 = ( ( ( * (  ed4607 ) ) .f_pane ) .f_mode );
        switch (  dref4611 ) {
            case Mode_223_Normal : {
                struct envunion271  temp1099 = ( (struct envunion271){ .fun = (  enum Unit_8  (*) (  struct env255*  ,    struct Editor_250 *  ,    struct Key_272  ) )handle_dash_normal_dash_key1100 , .env =  env->envinst255 } );
                ( temp1099.fun ( &temp1099.env ,  (  ed4607 ) ,  (  key4609 ) ) );
                break;
            }
            case Mode_223_Select : {
                struct envunion1629  temp1628 = ( (struct envunion1629){ .fun = (  enum Unit_8  (*) (  struct env255*  ,    struct Editor_250 *  ,    struct Key_272  ) )handle_dash_normal_dash_key1100 , .env =  env->envinst255 } );
                ( temp1628.fun ( &temp1628.env ,  (  ed4607 ) ,  (  key4609 ) ) );
                break;
            }
            case Mode_223_Insert : {
                struct Key_272  dref4612 = (  key4609 );
                if ( dref4612.tag == Key_272_Escape_t ) {
                    ( (  set_dash_mode1154 ) ( ( (  pane1145 ) ( (  ed4607 ) ) ) ,  ( Mode_223_Normal ) ) );
                }
                else {
                    if ( dref4612.tag == Key_272_Enter_t ) {
                        int32_t  indent4613 = ( (  indent_dash_at_dash_line1157 ) ( ( (  pane1145 ) ( (  ed4607 ) ) ) ,  ( ( ( * ( (  pane1145 ) ( (  ed4607 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion1631  temp1630 = ( (struct envunion1631){ .fun = (  enum Unit_8  (*) (  struct env206*  ,    struct Pane_222 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1177 , .env =  env->envinst206 } );
                        ( temp1630.fun ( &temp1630.env ,  ( (  pane1145 ) ( (  ed4607 ) ) ) ,  ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1146 ) ( ( (  pane1145 ) ( (  ed4607 ) ) ) ) );
                        struct envunion273  temp1632 = ( (struct envunion273){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_222 *  ,    int32_t  ) )indent_dash_at_dash_current1316 , .env =  env->envinst228 } );
                        ( temp1632.fun ( &temp1632.env ,  ( (  pane1145 ) ( (  ed4607 ) ) ) ,  (  indent4613 ) ) );
                    }
                    else {
                        if ( dref4612.tag == Key_272_Backspace_t ) {
                            struct envunion268  temp1633 = ( (struct envunion268){ .fun = (  enum Unit_8  (*) (  struct env209*  ,    struct Pane_222 *  ) )backspace1634 , .env =  env->envinst209 } );
                            ( temp1633.fun ( &temp1633.env ,  ( (  pane1145 ) ( (  ed4607 ) ) ) ) );
                        }
                        else {
                            if ( dref4612.tag == Key_272_Char_t ) {
                                struct Array_1637  temp1641 = ( (struct Array_1637) { ._arr = { ( dref4612 .stuff .Key_272_Char_s .field0 ) } } );
                                struct Array_1637  temp1639 = ( (  from_dash_listlike1640 ) ( ( &temp1641 ) ) );
                                struct StrView_27  s4615 = ( (  from_dash_ascii_dash_slice975 ) ( ( (  as_dash_slice1636 ) ( ( &temp1639 ) ) ) ) );
                                struct envunion275  temp1642 = ( (struct envunion275){ .fun = (  enum Unit_8  (*) (  struct env206*  ,    struct Pane_222 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1177 , .env =  env->envinst206 } );
                                ( temp1642.fun ( &temp1642.env ,  ( (  pane1145 ) ( (  ed4607 ) ) ) ,  (  s4615 ) ) );
                                ( (  move_dash_right1146 ) ( ( (  pane1145 ) ( (  ed4607 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4610 ).tag == EditorMode_251_Cmd_t ) {
            struct Key_272  dref4618 = (  key4609 );
            if ( dref4618.tag == Key_272_Escape_t ) {
                ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4607 ) ) ) ,  ( (* dref4610 ) .stuff .EditorMode_251_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                (*  ed4607 ) .f_mode = ( (struct EditorMode_251) { .tag = EditorMode_251_Normal_t } );
                (* (*  ed4607 ) .f_cfg ) .f_theme = ( ( * (  ed4607 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4618.tag == Key_272_Enter_t ) {
                    struct envunion274  temp1643 = ( (struct envunion274){ .fun = (  enum Unit_8  (*) (  struct env246*  ,    struct Editor_250 *  ,    struct StrView_27  ) )run_dash_cmd1644 , .env =  env->envinst246 } );
                    ( temp1643.fun ( &temp1643.env ,  (  ed4607 ) ,  ( (  as_dash_str1484 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1713 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4607 ) ) ) ,  ( ( * ( (  pane1145 ) ( (  ed4607 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                    (*  ed4607 ) .f_mode = ( (struct EditorMode_251) { .tag = EditorMode_251_Normal_t } );
                    (*  ed4607 ) .f_og_dash_theme = ( ( * ( ( * (  ed4607 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref4618.tag == Key_272_Char_t ) {
                        struct envunion269  temp1795 = ( (struct envunion269){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
                        ( temp1795.fun ( &temp1795.env ,  ( & ( (* dref4610 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1796 ) ( ( dref4618 .stuff .Key_272_Char_s .field0 ) ) ) ) );
                        struct envunion267  temp1798 = ( (struct envunion267){ .fun = (  enum Unit_8  (*) (  struct env243*  ,    struct Editor_250 *  ,    struct StrView_27  ) )live_dash_cmd1799 , .env =  env->envinst243 } );
                        ( temp1798.fun ( &temp1798.env ,  (  ed4607 ) ,  ( (  as_dash_str1484 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4618.tag == Key_272_Backspace_t ) {
                            if ( ( ! ( (  null1864 ) ( ( (* dref4610 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion270  temp1868 = ( (struct envunion270){ .fun = (  enum Unit_8  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1869 , .env =  env->envinst72 } );
                                ( temp1868.fun ( &temp1868.env ,  ( & ( (* dref4610 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1876  temp1875 = ( (struct envunion1876){ .fun = (  enum Unit_8  (*) (  struct env243*  ,    struct Editor_250 *  ,    struct StrView_27  ) )live_dash_cmd1799 , .env =  env->envinst243 } );
                            ( temp1875.fun ( &temp1875.env ,  (  ed4607 ) ,  ( (  as_dash_str1484 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4610 ).tag == EditorMode_251_Search_t ) {
                struct Key_272  dref4622 = (  key4609 );
                if ( dref4622.tag == Key_272_Escape_t ) {
                    ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4607 ) ) ) ,  ( (* dref4610 ) .stuff .EditorMode_251_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                    (*  ed4607 ) .f_mode = ( (struct EditorMode_251) { .tag = EditorMode_251_Normal_t } );
                }
                else {
                    if ( dref4622.tag == Key_272_Enter_t ) {
                        ( (  set_dash_cursors1102 ) ( ( (  pane1145 ) ( (  ed4607 ) ) ) ,  ( ( * ( (  pane1145 ) ( (  ed4607 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1145 ) ( (  ed4607 ) ) ) ) .f_sel ) ,  ( CursorMovement_1103_UpdateVI ) ) );
                        struct env1878 envinst1878 = {
                            .ed4607 =  ed4607 ,
                        };
                        ( (  if_dash_just1877 ) ( ( ( * (  ed4607 ) ) .f_search_dash_term ) ,  ( (struct envunion1879){ .fun = (  enum Unit_8  (*) (  struct env1878*  ,    struct StrView_27  ) )lam1881 , .env =  envinst1878 } ) ) );
                        if ( ( ! ( (  null1864 ) ( ( (* dref4610 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4625 = ( ( * ( (  pane1145 ) ( (  ed4607 ) ) ) ) .f_cursor );
                            struct Pos_26  from4626 = ( (  or_dash_else1415 ) ( ( ( * ( (  pane1145 ) ( (  ed4607 ) ) ) ) .f_sel ) ,  (  to4625 ) ) );
                            (*  ed4607 ) .f_search_dash_term = ( ( Maybe_80_Just ) ( ( (  as_dash_str1484 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4607 ) .f_search_dash_term = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
                        }
                        (*  ed4607 ) .f_mode = ( (struct EditorMode_251) { .tag = EditorMode_251_Normal_t } );
                    }
                    else {
                        if ( dref4622.tag == Key_272_Char_t ) {
                            struct envunion1883  temp1882 = ( (struct envunion1883){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1476 , .env =  env->envinst60 } );
                            ( temp1882.fun ( &temp1882.env ,  ( & ( (* dref4610 ) .stuff .EditorMode_251_Search_s .field1 ) ) ,  ( (  ascii_dash_char1796 ) ( ( dref4622 .stuff .Key_272_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1884 ) ( (  ed4607 ) ,  ( (* dref4610 ) .stuff .EditorMode_251_Search_s .field0 ) ,  ( (  as_dash_str1484 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4622.tag == Key_272_Backspace_t ) {
                                if ( ( ! ( (  null1864 ) ( ( (* dref4610 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1886  temp1885 = ( (struct envunion1886){ .fun = (  enum Unit_8  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1869 , .env =  env->envinst72 } );
                                    ( temp1885.fun ( &temp1885.env ,  ( & ( (* dref4610 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1884 ) ( (  ed4607 ) ,  ( (* dref4610 ) .stuff .EditorMode_251_Search_s .field0 ) ,  ( (  as_dash_str1484 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) );
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

static  bool   resize_dash_screen_dash_if_dash_needed1889 (   struct env94* env ,    struct Screen_278 *  screen3577 ) {
    struct Tui_90 *  tui3578 = ( ( * (  screen3577 ) ) .f_tui );
    struct envunion95  temp1890 = ( (struct envunion95){ .fun = (  bool  (*) (  struct env87*  ,    struct Tui_90 *  ) )update_dash_dimensions899 , .env =  env->envinst87 } );
    bool  updated_dash_dimensions3579 = ( temp1890.fun ( &temp1890.env ,  (  tui3578 ) ) );
    if ( ( ! (  updated_dash_dimensions3579 ) ) ) {
        return ( false );
    }
    (*  screen3577 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3580 = ( ( * ( ( * (  screen3577 ) ) .f_tui ) ) .f_width );
    uint32_t  h3581 = ( ( * ( ( * (  screen3577 ) ) .f_tui ) ) .f_height );
    size_t  nusz3582 = ( (  u32_dash_size848 ) ( (  op_dash_mul167 ( (  w3580 ) , (  h3581 ) ) ) ) );
    if ( (  cmp292 ( (  nusz3582 ) , ( ( ( * (  screen3577 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_278  nuscreen3583 = ( (  mk_dash_screen842 ) ( (  tui3578 ) ,  ( ( * (  screen3577 ) ) .f_al ) ) );
    (*  screen3577 ) .f_current = ( (  nuscreen3583 ) .f_current );
    (*  screen3577 ) .f_previous = ( (  nuscreen3583 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1891 (    struct Tui_90 *  tui3504 ) {
    bool  redraw3505 = ( ( * (  tui3504 ) ) .f_should_dash_redraw );
    (*  tui3504 ) .f_should_dash_redraw = ( false );
    return (  redraw3505 );
}

struct env1895 {
    ;
    struct Slice_279  s2098;
    ;
    struct Cell_280 (*  fun2100 )(    struct Cell_280  );
    ;
};

struct envunion1896 {
    enum Unit_8  (*fun) (  struct env1895*  ,    int32_t  );
    struct env1895 env;
};

static  enum Unit_8   for_dash_each1894 (    struct Range_150  iterable1024 ,   struct envunion1896  fun1026 ) {
    struct RangeIter_153  temp1897 = ( (  into_dash_iter154 ) ( (  iterable1024 ) ) );
    struct RangeIter_153 *  it1027 = ( &temp1897 );
    while ( ( true ) ) {
        struct Maybe_155  dref1028 = ( (  next156 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_155_Just_t ) {
                struct envunion1896  temp1898 = (  fun1026 );
                ( temp1898.fun ( &temp1898.env ,  ( dref1028 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1899 (   struct env1895* env ,    int32_t  i2102 ) {
    return ( (  set863 ) ( ( env->s2098 ) ,  ( (  i32_dash_size422 ) ( (  i2102 ) ) ) ,  ( ( env->fun2100 ) ( (  elem_dash_get867 ( ( env->s2098 ) , ( (  i32_dash_size422 ) ( (  i2102 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1893 (    struct Slice_279  s2098 ,    struct Cell_280 (*  fun2100 )(    struct Cell_280  ) ) {
    struct env1895 envinst1895 = {
        .s2098 =  s2098 ,
        .fun2100 =  fun2100 ,
    };
    ( (  for_dash_each1894 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32331 ) ( (  op_dash_sub291 ( ( (  s2098 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1896){ .fun = (  enum Unit_8  (*) (  struct env1895*  ,    int32_t  ) )lam1899 , .env =  envinst1895 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_280   lam1900 (    struct Cell_280  dref3541 ) {
    return ( (  default_dash_cell875 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1892 (    struct Screen_278 *  screen3540 ) {
    ( (  map1893 ) ( ( ( * (  screen3540 ) ) .f_current ) ,  (  lam1900 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1901 (    struct Screen_278 *  screen3586 ,    struct Color_138  c3588 ) {
    (*  screen3586 ) .f_default_dash_fg = (  c3588 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1902 (    struct Screen_278 *  screen3591 ,    struct Color_138  c3593 ) {
    (*  screen3591 ) .f_default_dash_bg = (  c3593 );
    return ( Unit_8_Unit );
}

static  int32_t   cast1906 (    uint32_t  x357 ) {
    return ( (int32_t ) (  x357 ) );
}

static  int32_t   u32_dash_i321905 (    uint32_t  x687 ) {
    return ( (  cast1906 ) ( (  x687 ) ) );
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

static  struct Cell_280 *   or_dash_fail1910 (    struct Maybe_1911  x1271 ,    struct StrView_27  errmsg1273 ) {
    struct Maybe_1911  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_1911_None_t ) {
        ( (  panic1223 ) ( (  errmsg1273 ) ) );
        return ( (  undefined1912 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_1911_Just_t ) {
            return ( dref1274 .stuff .Maybe_1911_Just_s .field0 );
        }
    }
}

static  struct Maybe_1911   get_dash_cell_dash_ptr1914 (    struct Screen_278 *  screen3607 ,    int32_t  x3609 ,    int32_t  y3611 ) {
    int32_t  w3612 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3607 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  x3609 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  x3609 ) , (  w3612 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1911) { .tag = Maybe_1911_None_t } );
    }
    if ( ( (  cmp157 ( (  y3611 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3611 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3607 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1911) { .tag = Maybe_1911_None_t } );
    }
    size_t  i3613 = ( (  i32_dash_size422 ) ( (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3611 ) , (  w3612 ) ) ) , (  x3609 ) ) ) ) );
    return ( ( Maybe_1911_Just ) ( ( (  get_dash_ptr864 ) ( ( ( * (  screen3607 ) ) .f_current ) ,  (  i3613 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1903 (    struct Screen_278 *  screen3616 ) {
    struct RangeIter_153  temp1904 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3616 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1907 =  next156 (&temp1904);
        if (  __cond1907 .tag == 0 ) {
            break;
        }
        int32_t  y3618 =  __cond1907 .stuff .Maybe_155_Just_s .field0;
        struct RangeIter_153  temp1908 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3616 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_155  __cond1909 =  next156 (&temp1908);
            if (  __cond1909 .tag == 0 ) {
                break;
            }
            int32_t  x3620 =  __cond1909 .stuff .Maybe_155_Just_s .field0;
            struct Cell_280 *  cell3621 = ( (  or_dash_fail1910 ) ( ( (  get_dash_cell_dash_ptr1914 ) ( (  screen3616 ) ,  (  x3620 ) ,  (  y3618 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3621 ) .f_bg = ( ( * (  screen3616 ) ) .f_default_dash_bg );
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

static  struct IntStrIter_1921   into_dash_iter1923 (    struct IntStrIter_1921  self1314 ) {
    return (  self1314 );
}

struct env1927 {
    int32_t  base1304;
    ;
};

struct envunion1928 {
    int32_t  (*fun) (  struct env1927*  ,    int32_t  ,    int32_t  );
    struct env1927 env;
};

static  int32_t   reduce1926 (    struct Range_150  iterable1043 ,    int32_t  base1045 ,   struct envunion1928  fun1047 ) {
    int32_t  x1048 = (  base1045 );
    struct RangeIter_153  it1049 = ( (  into_dash_iter154 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1050 = ( (  next156 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_155_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_155_Just_t ) {
                struct envunion1928  temp1929 = (  fun1047 );
                x1048 = ( temp1929.fun ( &temp1929.env ,  ( dref1050 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  int32_t   lam1932 (   struct env1927* env ,    int32_t  item1308 ,    int32_t  x1310 ) {
    return (  op_dash_mul1538 ( (  x1310 ) , ( env->base1304 ) ) );
}

static  int32_t   pow1925 (    int32_t  base1304 ,    int32_t  p1306 ) {
    struct env1927 envinst1927 = {
        .base1304 =  base1304 ,
    };
    return ( (  reduce1926 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1306 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion1928){ .fun = (  int32_t  (*) (  struct env1927*  ,    int32_t  ,    int32_t  ) )lam1932 , .env =  envinst1927 } ) ) );
}

static  struct Maybe_299   next1924 (    struct IntStrIter_1921 *  self1317 ) {
    if ( ( ( * (  self1317 ) ) .f_negative ) ) {
        (*  self1317 ) .f_negative = ( false );
        return ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    int32_t  trim_dash_down1318 = ( (  pow1925 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1319 = (  op_dash_div1537 ( ( ( * (  self1317 ) ) .f_int ) , (  trim_dash_down1318 ) ) );
    int32_t  upper_dash_mask1320 = (  op_dash_mul1538 ( (  op_dash_div1537 ( (  upper1319 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1321 = ( ( (  cast306 ) ( (  op_dash_sub164 ( (  upper1319 ) , (  upper_dash_mask1320 ) ) ) ) ) );
    (*  self1317 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1322 = ( (  char_dash_from_dash_u81054 ) ( (  op_dash_add944 ( (  digit1321 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_299_Just ) ( (  digit_dash_char1322 ) ) );
}

static  size_t   reduce1922 (    struct IntStrIter_1921  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct IntStrIter_1921  it1049 = ( (  into_dash_iter1923 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1050 = ( (  next1924 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_299_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_299_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1048 ) ) );
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

static  size_t   lam1935 (    struct Char_65  dref1055 ,    size_t  x1057 ) {
    return (  op_dash_add313 ( (  x1057 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1920 (    struct IntStrIter_1921  it1054 ) {
    return ( (  reduce1922 ) ( (  it1054 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1935 ) ) );
}

static  int32_t   count_dash_digits1938 (    int32_t  self1325 ) {
    if ( (  eq570 ( (  self1325 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1326 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp157 ( (  self1325 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1325 = (  op_dash_div1537 ( (  self1325 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1326 = (  op_dash_add159 ( (  digits1326 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1326 );
}

static  struct IntStrIter_1921   int_dash_iter1937 (    int32_t  int1329 ) {
    if ( (  cmp157 ( (  int1329 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1921) { .f_int = (  op_dash_neg816 ( (  int1329 ) ) ) , .f_len = ( (  count_dash_digits1938 ) ( (  op_dash_neg816 ( (  int1329 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1921) { .f_int = (  int1329 ) , .f_len = ( (  count_dash_digits1938 ) ( (  int1329 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1921   chars1936 (    int32_t  self1338 ) {
    return ( (  int_dash_iter1937 ) ( (  self1338 ) ) );
}

static  int32_t   screen_dash_width1940 (    struct ScreenDims_281  sd4176 ) {
    return (  op_dash_add159 ( (  op_dash_sub164 ( ( (  sd4176 ) .f_to_dash_sx ) , ( (  sd4176 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1941 (    struct ScreenDims_281  sd4179 ) {
    return (  op_dash_add159 ( (  op_dash_sub164 ( ( (  sd4179 ) .f_to_dash_sy ) , ( (  sd4179 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1939 (    struct Pane_222 *  pane4182 ,    struct ScreenDims_281  sd4184 ,    int32_t  pane_dash_margin_dash_size4186 ) {
    struct Pos_26  cur4187 = ( ( * (  pane4182 ) ) .f_cursor );
    int32_t  cur_dash_sx4188 = ( (  pos_dash_vi1106 ) ( ( ( * (  pane4182 ) ) .f_buf ) ,  (  cur4187 ) ) );
    struct ScreenCursorOffset_224  sc_dash_off4189 = ( ( * (  pane4182 ) ) .f_sc_dash_off );
    int32_t  sw4190 = (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  screen_dash_width1940 ) ( (  sd4184 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , (  pane_dash_margin_dash_size4186 ) ) );
    int32_t  sh4191 = (  op_dash_sub164 ( ( (  screen_dash_height1941 ) ( (  sd4184 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin4192 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4193 = ( (  pos_dash_vi1106 ) ( ( ( * (  pane4182 ) ) .f_buf ) ,  (  cur4187 ) ) );
    int32_t  csx4194 = (  op_dash_sub164 ( (  csi4193 ) , ( (  sc_dash_off4189 ) .f_screen_dash_left ) ) );
    int32_t  csy4195 = (  op_dash_sub164 ( ( (  cur4187 ) .f_line ) , ( (  sc_dash_off4189 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4196 = ( (  sc_dash_off4189 ) .f_screen_dash_left );
    if ( (  cmp157 ( (  csx4194 ) , (  margin4192 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4196 = (  op_dash_sub164 ( (  csi4193 ) , (  margin4192 ) ) );
    } else {
        if ( (  cmp157 ( (  csx4194 ) , (  op_dash_sub164 ( (  sw4190 ) , (  margin4192 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4196 = (  op_dash_sub164 ( (  csi4193 ) , (  op_dash_sub164 ( (  sw4190 ) , (  margin4192 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4197 = ( (  max1121 ) ( (  nu_dash_screen_dash_left4196 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4198 = ( (  sc_dash_off4189 ) .f_screen_dash_top );
    if ( (  cmp157 ( (  csy4195 ) , (  margin4192 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4198 = (  op_dash_sub164 ( ( (  cur4187 ) .f_line ) , (  margin4192 ) ) );
    } else {
        if ( (  cmp157 ( (  csy4195 ) , (  op_dash_sub164 ( (  sh4191 ) , (  margin4192 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4198 = (  op_dash_sub164 ( ( (  cur4187 ) .f_line ) , (  op_dash_sub164 ( (  sh4191 ) , (  margin4192 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4199 = ( (  max1121 ) ( (  nu_dash_screen_dash_top4198 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane4182 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_224) { .f_screen_dash_top = (  nu_dash_screen_dash_top4199 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4197 ) } );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_colors1945 (    struct Screen_278 *  screen3596 ,    struct Color_138  fg3598 ,    struct Color_138  bg3600 ) {
    (*  screen3596 ) .f_default_dash_fg = (  fg3598 );
    (*  screen3596 ) .f_default_dash_bg = (  bg3600 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors1944 (    struct Screen_278 *  screen4202 ,    struct Colors_173  colors4204 ) {
    ( (  set_dash_screen_dash_colors1945 ) ( (  screen4202 ) ,  ( (  colors4204 ) .f_fg ) ,  ( (  colors4204 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   abs1946 (    int32_t  x1557 ) {
    return ( (  cmp157 ( (  x1557 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ? (  x1557 ) : (  op_dash_neg816 ( (  x1557 ) ) ) );
}

struct Map_1949 {
    struct IntStrIter_1921  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1949 Map_1949_Map (  struct IntStrIter_1921  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1949 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1949   into_dash_iter1951 (    struct Map_1949  self729 ) {
    return (  self729 );
}

static  struct Maybe_155   next1952 (    struct Map_1949 *  dref731 ) {
    struct Maybe_299  dref734 = ( (  next1924 ) ( ( & ( (* dref731 ) .field0 ) ) ) );
    if ( dref734.tag == Maybe_299_None_t ) {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
    else {
        if ( dref734.tag == Maybe_299_Just_t ) {
            return ( ( Maybe_155_Just ) ( ( ( (* dref731 ) .field1 ) ( ( dref734 .stuff .Maybe_299_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1950 (    struct Map_1949  iterable1043 ,    int32_t  base1045 ,    int32_t (*  fun1047 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1048 = (  base1045 );
    struct Map_1949  it1049 = ( (  into_dash_iter1951 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1050 = ( (  next1952 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_155_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_155_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    const char*  temp1953 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1953);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp1954;
    return (  temp1954 );
}

static  int32_t   lam1955 (    int32_t  v1062 ,    int32_t  s1064 ) {
    return (  op_dash_add159 ( (  v1062 ) , (  s1064 ) ) );
}

static  int32_t   sum1948 (    struct Map_1949  it1060 ) {
    return ( (  reduce1950 ) ( (  it1060 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1955 ) ) );
}

static  struct Map_1949   map1956 (    struct IntStrIter_1921  iterable738 ,    int32_t (*  fun740 )(    struct Char_65  ) ) {
    struct IntStrIter_1921  it741 = ( (  into_dash_iter1923 ) ( (  iterable738 ) ) );
    return ( ( Map_1949_Map ) ( (  it741 ) ,  (  fun740 ) ) );
}

static  enum Unit_8   put_dash_char1960 (    struct Screen_278 *  screen3624 ,    struct Char_65  c3626 ,    int32_t  x3628 ,    int32_t  y3630 ) {
    int32_t  w3631 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3624 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp157 ( (  x3628 ) , (  w3631 ) ) != 0 ) || (  cmp157 ( (  y3630 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3624 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp157 ( (  x3628 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp157 ( (  y3630 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3632 = ( (  i32_dash_size422 ) ( (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3630 ) , (  w3631 ) ) ) , (  x3628 ) ) ) ) );
    struct Color_138  fg3633 = ( ( * (  screen3624 ) ) .f_default_dash_fg );
    struct Color_138  bg3634 = ( ( * (  screen3624 ) ) .f_default_dash_bg );
    struct Char_65  c3635 = (  c3626 );
    int32_t  char_dash_width3636 = ( (  wcwidth1122 ) ( (  c3635 ) ) );
    if ( ( (  cmp157 ( (  x3628 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp157 ( ( (  elem_dash_get867 ( ( ( * (  screen3624 ) ) .f_current ) , (  op_dash_sub291 ( (  i3632 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_280  pc3637 = (  elem_dash_get867 ( ( ( * (  screen3624 ) ) .f_current ) , (  op_dash_sub291 ( (  i3632 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set863 ) ( ( ( * (  screen3624 ) ) .f_current ) ,  (  op_dash_sub291 ( (  i3632 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_280) { .f_c = ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3637 ) .f_fg ) , .f_bg = ( (  pc3637 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set863 ) ( ( ( * (  screen3624 ) ) .f_current ) ,  (  i3632 ) ,  ( (struct Cell_280) { .f_c = (  c3635 ) , .f_fg = (  fg3633 ) , .f_bg = (  bg3634 ) , .f_char_dash_width = (  char_dash_width3636 ) } ) ) );
    struct RangeIter_153  temp1961 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( (  x3628 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min670 ) ( (  op_dash_sub164 ( (  op_dash_add159 ( (  x3628 ) , (  char_dash_width3636 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3631 ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1962 =  next156 (&temp1961);
        if (  __cond1962 .tag == 0 ) {
            break;
        }
        int32_t  xx3639 =  __cond1962 .stuff .Maybe_155_Just_s .field0;
        size_t  i3640 = ( (  i32_dash_size422 ) ( (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3630 ) , (  w3631 ) ) ) , (  xx3639 ) ) ) ) );
        ( (  set863 ) ( ( ( * (  screen3624 ) ) .f_current ) ,  (  i3640 ) ,  ( (struct Cell_280) { .f_c = ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = (  fg3633 ) , .f_bg = (  bg3634 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1957 (    struct Screen_278 *  screen3643 ,    int32_t  s3645 ,    int32_t  x3647 ,    int32_t  y3649 ) {
    int32_t  w3650 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3643 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3649 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3649 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3643 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3651 = (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3649 ) , (  w3650 ) ) ) , (  x3647 ) ) );
    int32_t  x3652 = ( (  min670 ) ( (  x3647 ) ,  (  w3650 ) ) );
    size_t  max_dash_len3653 = ( (  i32_dash_size422 ) ( (  op_dash_sub164 ( (  w3650 ) , (  x3652 ) ) ) ) );
    int32_t  xx3654 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_1921  temp1958 =  into_dash_iter1923 ( ( (  chars1936 ) ( (  s3645 ) ) ) );
    while (true) {
        struct Maybe_299  __cond1959 =  next1924 (&temp1958);
        if (  __cond1959 .tag == 0 ) {
            break;
        }
        struct Char_65  c3656 =  __cond1959 .stuff .Maybe_299_Just_s .field0;
        ( (  put_dash_char1960 ) ( (  screen3643 ) ,  (  c3656 ) ,  (  op_dash_add159 ( (  x3652 ) , (  xx3654 ) ) ) ,  (  y3649 ) ) );
        xx3654 = (  op_dash_add159 ( (  xx3654 ) , ( (  rendered_dash_wcwidth1120 ) ( (  c3656 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1947 (    struct Screen_278 *  screen3659 ,    int32_t  s3661 ,    int32_t  x3663 ,    int32_t  y3665 ) {
    int32_t  slen3666 = ( (  sum1948 ) ( ( (  map1956 ) ( ( (  chars1936 ) ( (  s3661 ) ) ) ,  (  rendered_dash_wcwidth1120 ) ) ) ) );
    int32_t  w3667 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3659 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3668 = (  op_dash_sub164 ( (  op_dash_sub164 ( (  w3667 ) , (  x3663 ) ) ) , (  slen3666 ) ) );
    ( (  draw_dash_str1957 ) ( (  screen3659 ) ,  (  s3661 ) ,  (  x3668 ) ,  (  y3665 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1964 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct StrConcat_1964 StrConcat_1964_StrConcat (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1964 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1967 {
    struct StrView_27  field0;
    struct StrConcat_1964  field1;
};

static struct StrConcat_1967 StrConcat_1967_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1964  field1 ) {
    return ( struct StrConcat_1967 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1966 {
    struct StrConcat_1967  field0;
    struct Char_65  field1;
};

static struct StrConcat_1966 StrConcat_1966_StrConcat (  struct StrConcat_1967  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1966 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1969 (    struct StrConcat_1964  self1220 ) {
    struct StrConcat_1964  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str399 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1968 (    struct StrConcat_1967  self1220 ) {
    struct StrConcat_1967  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str1969 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1965 (    struct StrConcat_1966  self1220 ) {
    struct StrConcat_1966  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str1968 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1963 (    bool  cond1264 ,    struct StrConcat_1964  msg1266 ) {
    if ( ( ! (  cond1264 ) ) ) {
        ( (  print_dash_str1965 ) ( ( ( StrConcat_1966_StrConcat ) ( ( ( StrConcat_1967_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1266 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1971 {
    struct StrViewIter_469  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1971   into_dash_iter1972 (    struct AppendIter_1971  self969 ) {
    return (  self969 );
}

static  struct AppendIter_1971   append1973 (    struct StrViewIter_469  it956 ,    struct Char_65  e958 ) {
    return ( (struct AppendIter_1971) { .f_it = ( (  into_dash_iter470 ) ( (  it956 ) ) ) , .f_elem = (  e958 ) , .f_appended = ( false ) } );
}

static  struct Maybe_299   next1975 (    struct AppendIter_1971 *  self972 ) {
    struct Maybe_299  dref973 = ( (  next474 ) ( ( & ( ( * (  self972 ) ) .f_it ) ) ) );
    if ( dref973.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref973 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref973.tag == Maybe_299_None_t ) {
            if ( ( ! ( ( * (  self972 ) ) .f_appended ) ) ) {
                (*  self972 ) .f_appended = ( true );
                return ( ( Maybe_299_Just ) ( ( ( * (  self972 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
        }
    }
}

static  bool   between1977 (    struct Pos_26  c1295 ,    struct Pos_26  l1297 ,    struct Pos_26  r1299 ) {
    struct Pos_26  from1300 = ( (  min566 ) ( (  l1297 ) ,  (  r1299 ) ) );
    struct Pos_26  to1301 = ( (  max568 ) ( (  l1297 ) ,  (  r1299 ) ) );
    return ( (  cmp567 ( (  from1300 ) , (  c1295 ) ) != 2 ) && (  cmp567 ( (  c1295 ) , (  to1301 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1976 (    struct Pane_222 *  pane4168 ,    struct Pos_26  pos4170 ) {
    return ( {  struct Maybe_34  dref4171 = ( ( * (  pane4168 ) ) .f_sel ) ; dref4171.tag == Maybe_34_Just_t ? ( (  between1977 ) ( (  pos4170 ) ,  ( ( * (  pane4168 ) ) .f_cursor ) ,  ( dref4171 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1979 {
    ;
    ;
    struct Theme_172 *  theme4214;
    struct Screen_278 *  screen4207;
};

struct envunion1980 {
    enum Unit_8  (*fun) (  struct env1979*  ,    enum HighlightType_20  );
    struct env1979 env;
};

static  enum Unit_8   if_dash_just1978 (    struct Maybe_205  x1519 ,   struct envunion1980  fun1521 ) {
    struct Maybe_205  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_205_Just_t ) {
        struct envunion1980  temp1981 = (  fun1521 );
        ( temp1981.fun ( &temp1981.env ,  ( dref1522 .stuff .Maybe_205_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_205_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1986 (    struct List_17 *  l2291 ,    size_t  new_dash_count2293 ) {
    (*  l2291 ) .f_count = ( (  min478 ) ( (  new_dash_count2293 ) ,  ( ( * (  l2291 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_299   head1989 (    struct Scanner_966 *  it1092 ) {
    struct Scanner_966  temp1990 = ( (  into_dash_iter982 ) ( (  it1092 ) ) );
    return ( (  next991 ) ( ( &temp1990 ) ) );
}

static  bool   null1988 (    struct Scanner_966 *  it1101 ) {
    struct Maybe_299  dref1102 = ( (  head1989 ) ( (  it1101 ) ) );
    if ( dref1102.tag == Maybe_299_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_299   peek1991 (    struct Scanner_966 *  sc3275 ) {
    return ( (  head1350 ) ( ( ( * (  sc3275 ) ) .f_s ) ) );
}

static  bool   eq1993 (    struct Maybe_299  l142 ,    struct Maybe_299  r144 ) {
    struct Tuple2_1772  dref145 = ( ( Tuple2_1772_Tuple2 ) ( (  l142 ) ,  (  r144 ) ) );
    if ( dref145 .field0.tag == Maybe_299_None_t && dref145 .field1.tag == Maybe_299_None_t ) {
        return ( true );
    }
    else {
        if ( dref145 .field0.tag == Maybe_299_Just_t && dref145 .field1.tag == Maybe_299_Just_t ) {
            return (  eq480 ( ( dref145 .field0 .stuff .Maybe_299_Just_s .field0 ) , ( dref145 .field1 .stuff .Maybe_299_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char1992 (    struct Scanner_966 *  sc3278 ,    struct Char_65  char3280 ) {
    if ( (  eq1993 ( ( (  peek1991 ) ( (  sc3278 ) ) ) , ( ( Maybe_299_Just ) ( (  char3280 ) ) ) ) ) ) {
        ( (  drop_prime_994 ) ( (  sc3278 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   char_dash_satisfies1995 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1994 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1995 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1996 (    struct Char_65  c4005 ) {
    return ( !  eq480 ( (  c4005 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ) );
}

struct TypeSize_2003 {
    size_t  f_size;
};

static  struct TypeSize_2003   get_dash_typesize2002 (  ) {
    struct Highlight_19  temp2004;
    return ( (struct TypeSize_2003) { .f_size = ( sizeof( ( (  temp2004 ) ) ) ) } );
}

static  struct Highlight_19 *   cast_dash_ptr2005 (    void *  p360 ) {
    return ( (struct Highlight_19 * ) (  p360 ) );
}

static  struct Slice_18   allocate2001 (    enum CAllocator_10  dref2138 ,    size_t  count2140 ) {
    if (!(  dref2138 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2141 = ( ( ( (  get_dash_typesize2002 ) ( ) ) ) .f_size );
    struct Highlight_19 *  ptr2142 = ( (  cast_dash_ptr2005 ) ( ( ( malloc ) ( (  op_dash_mul415 ( (  size2141 ) , (  count2140 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr2142 ) , .f_count = (  count2140 ) } );
}

struct env2006 {
    ;
    struct Slice_18  new_dash_slice2218;
    ;
};

struct Tuple2_2008 {
    struct Highlight_19  field0;
    int32_t  field1;
};

static struct Tuple2_2008 Tuple2_2008_Tuple2 (  struct Highlight_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2008 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2007 {
    enum Unit_8  (*fun) (  struct env2006*  ,    struct Tuple2_2008  );
    struct env2006 env;
};

static  struct Highlight_19 *   offset_dash_ptr2012 (    struct Highlight_19 *  x339 ,    int64_t  count341 ) {
    struct Highlight_19  temp2013;
    return ( (struct Highlight_19 * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp2013 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_19 *   get_dash_ptr2011 (    struct Slice_18  slice1940 ,    size_t  i1942 ) {
    if ( ( (  cmp292 ( (  i1942 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i1942 ) , ( (  slice1940 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic325 ) ( ( ( StrConcat_323_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1942 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1940 ) .f_count ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_19 *  elem_dash_ptr1943 = ( (  offset_dash_ptr2012 ) ( ( (  slice1940 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  i1942 ) ) ) ) );
    return (  elem_dash_ptr1943 );
}

static  enum Unit_8   set2010 (    struct Slice_18  slice1957 ,    size_t  i1959 ,    struct Highlight_19  x1961 ) {
    struct Highlight_19 *  ep1962 = ( (  get_dash_ptr2011 ) ( (  slice1957 ) ,  (  i1959 ) ) );
    (*  ep1962 ) = (  x1961 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2009 (   struct env2006* env ,    struct Tuple2_2008  dref2219 ) {
    return ( (  set2010 ) ( ( env->new_dash_slice2218 ) ,  ( (  i32_dash_size422 ) ( ( dref2219 .field1 ) ) ) ,  ( dref2219 .field0 ) ) );
}

struct SliceIter_2016 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2015 {
    struct SliceIter_2016  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

static  struct Zip_2015   into_dash_iter2018 (    struct Zip_2015  self861 ) {
    return (  self861 );
}

struct Maybe_2019 {
    enum {
        Maybe_2019_None_t,
        Maybe_2019_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2008  field0;
        } Maybe_2019_Just_s;
    } stuff;
};

static struct Maybe_2019 Maybe_2019_Just (  struct Tuple2_2008  field0 ) {
    return ( struct Maybe_2019 ) { .tag = Maybe_2019_Just_t, .stuff = { .Maybe_2019_Just_s = { .field0 = field0 } } };
};

struct Maybe_2021 {
    enum {
        Maybe_2021_None_t,
        Maybe_2021_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_19  field0;
        } Maybe_2021_Just_s;
    } stuff;
};

static struct Maybe_2021 Maybe_2021_Just (  struct Highlight_19  field0 ) {
    return ( struct Maybe_2021 ) { .tag = Maybe_2021_Just_t, .stuff = { .Maybe_2021_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2021   next2022 (    struct SliceIter_2016 *  self2026 ) {
    size_t  off2027 = ( ( * (  self2026 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2026 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2021) { .tag = Maybe_2021_None_t } );
    }
    struct Highlight_19  elem2028 = ( * ( (  offset_dash_ptr2012 ) ( ( ( ( * (  self2026 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2027 ) ) ) ) ) );
    (*  self2026 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2021_Just ) ( (  elem2028 ) ) );
}

static  struct Maybe_2019   next2020 (    struct Zip_2015 *  self864 ) {
    struct Zip_2015  copy865 = ( * (  self864 ) );
    while ( ( true ) ) {
        struct Maybe_2021  dref866 = ( (  next2022 ) ( ( & ( (  copy865 ) .f_left_dash_it ) ) ) );
        if ( dref866.tag == Maybe_2021_None_t ) {
            return ( (struct Maybe_2019) { .tag = Maybe_2019_None_t } );
        }
        else {
            if ( dref866.tag == Maybe_2021_Just_t ) {
                struct Maybe_155  dref868 = ( (  next432 ) ( ( & ( (  copy865 ) .f_right_dash_it ) ) ) );
                if ( dref868.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_2019) { .tag = Maybe_2019_None_t } );
                }
                else {
                    if ( dref868.tag == Maybe_155_Just_t ) {
                        ( (  next2022 ) ( ( & ( ( * (  self864 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self864 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2019_Just ) ( ( ( Tuple2_2008_Tuple2 ) ( ( dref866 .stuff .Maybe_2021_Just_s .field0 ) ,  ( dref868 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2014 (    struct Zip_2015  iterable1024 ,   struct envunion2007  fun1026 ) {
    struct Zip_2015  temp2017 = ( (  into_dash_iter2018 ) ( (  iterable1024 ) ) );
    struct Zip_2015 *  it1027 = ( &temp2017 );
    while ( ( true ) ) {
        struct Maybe_2019  dref1028 = ( (  next2020 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_2019_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_2019_Just_t ) {
                struct envunion2007  temp2023 = (  fun1026 );
                ( temp2023.fun ( &temp2023.env ,  ( dref1028 .stuff .Maybe_2019_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2016   into_dash_iter2025 (    struct Slice_18  self2020 ) {
    return ( (struct SliceIter_2016) { .f_slice = (  self2020 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2015   zip2024 (    struct Slice_18  left872 ,    struct FromIter_426  right874 ) {
    struct SliceIter_2016  left_dash_it875 = ( (  into_dash_iter2025 ) ( (  left872 ) ) );
    struct FromIter_426  right_dash_it876 = ( (  into_dash_iter436 ) ( (  right874 ) ) );
    return ( (struct Zip_2015) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

static  void *   cast_dash_ptr2027 (    struct Highlight_19 *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  enum Unit_8   free2026 (    enum CAllocator_10  dref2144 ,    struct Slice_18  slice2146 ) {
    if (!(  dref2144 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2027 ) ( ( (  slice2146 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full2000 (   struct env5* env ,    struct List_17 *  list2217 ) {
    if ( (  eq409 ( ( ( * (  list2217 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2217 ) .f_elements = ( (  allocate2001 ) ( ( ( * (  list2217 ) ) .f_al ) ,  ( env->starting_dash_size2212 ) ) );
    } else {
        if ( (  eq409 ( ( ( * (  list2217 ) ) .f_count ) , ( ( ( * (  list2217 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2218 = ( (  allocate2001 ) ( ( ( * (  list2217 ) ) .f_al ) ,  (  op_dash_mul415 ( ( ( * (  list2217 ) ) .f_count ) , ( env->growth_dash_factor2213 ) ) ) ) );
            struct env2006 envinst2006 = {
                .new_dash_slice2218 =  new_dash_slice2218 ,
            };
            struct envunion2007  fun2222 = ( (struct envunion2007){ .fun = (  enum Unit_8  (*) (  struct env2006*  ,    struct Tuple2_2008  ) )lam2009 , .env =  envinst2006 } );
            ( (  for_dash_each2014 ) ( ( (  zip2024 ) ( ( ( * (  list2217 ) ) .f_elements ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2222 ) ) );
            ( (  free2026 ) ( ( ( * (  list2217 ) ) .f_al ) ,  ( ( * (  list2217 ) ) .f_elements ) ) );
            (*  list2217 ) .f_elements = (  new_dash_slice2218 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1998 (   struct env35* env ,    struct List_17 *  list2225 ,    struct Highlight_19  elem2227 ) {
    struct envunion36  temp1999 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_17 *  ) )grow_dash_if_dash_full2000 , .env =  env->envinst5 } );
    ( temp1999.fun ( &temp1999.env ,  (  list2225 ) ) );
    ( (  set2010 ) ( ( ( * (  list2225 ) ) .f_elements ) ,  ( ( * (  list2225 ) ) .f_count ) ,  (  elem2227 ) ) );
    (*  list2225 ) .f_count = (  op_dash_add313 ( ( ( * (  list2225 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2029 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2031 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2030 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2031 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2032 (    struct Char_65  c4008 ) {
    return ( ( !  eq480 ( (  c4008 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) && ( !  eq480 ( (  c4008 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2034 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2035 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2037 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2036 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2037 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2038 (    struct Char_65  c4011 ) {
    return ( (  eq1341 ( ( (  char_dash_type1344 ) ( (  c4011 ) ) ) , ( CharType_1342_CharWord ) ) ) || (  eq480 ( (  c4011 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2040 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2042 {
    struct StrView_27 _arr [2];
};

struct env2043 {
    ;
    struct Scanner_966 *  sc4001;
};

struct envunion2044 {
    bool  (*fun) (  struct env2043*  ,    struct StrView_27  );
    struct env2043 env;
};

struct env2046 {
    struct envunion2044  fun1085;
};

struct envunion2047 {
    bool  (*fun) (  struct env2046*  ,    struct StrView_27  ,    bool  );
    struct env2046 env;
};

struct ArrayIter_2048 {
    struct Array_2042  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2048   into_dash_iter2049 (    struct Array_2042  self2539 ) {
    return ( (struct ArrayIter_2048) { .f_backing = (  self2539 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2053 (    struct Array_2042 *  p360 ) {
    return ( (struct StrView_27 * ) (  p360 ) );
}

static  struct StrView_27 *   offset_dash_ptr2054 (    struct StrView_27 *  x339 ,    int64_t  count341 ) {
    struct StrView_27  temp2055;
    return ( (struct StrView_27 * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp2055 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr2052 (    struct Array_2042 *  arr2463 ,    size_t  i2466 ) {
    if ( ( (  cmp292 ( (  i2466 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2466 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2466 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2467 = ( ( (  cast_dash_ptr2053 ) ( (  arr2463 ) ) ) );
    return ( (  offset_dash_ptr2054 ) ( (  p2467 ) ,  ( (int64_t ) (  i2466 ) ) ) );
}

static  struct StrView_27   get2051 (    struct Array_2042 *  arr2470 ,    size_t  i2473 ) {
    return ( * ( (  get_dash_ptr2052 ) ( (  arr2470 ) ,  (  i2473 ) ) ) );
}

static  struct Maybe_80   next2050 (    struct ArrayIter_2048 *  self2546 ) {
    if ( (  cmp292 ( ( ( * (  self2546 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2548 = ( (  get2051 ) ( ( & ( ( * (  self2546 ) ) .f_backing ) ) ,  ( ( * (  self2546 ) ) .f_cur ) ) );
    (*  self2546 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2546 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2548 ) ) );
}

static  bool   reduce2045 (    struct Array_2042  iterable1043 ,    bool  base1045 ,   struct envunion2047  fun1047 ) {
    bool  x1048 = (  base1045 );
    struct ArrayIter_2048  it1049 = ( (  into_dash_iter2049 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1050 = ( (  next2050 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_80_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_80_Just_t ) {
                struct envunion2047  temp2056 = (  fun1047 );
                x1048 = ( temp2056.fun ( &temp2056.env ,  ( dref1050 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    const char*  temp2057 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2057);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2058;
    return (  temp2058 );
}

static  bool   lam2059 (   struct env2046* env ,    struct StrView_27  e1087 ,    bool  x1089 ) {
    struct envunion2044  temp2060 = ( env->fun1085 );
    return ( ( temp2060.fun ( &temp2060.env ,  (  e1087 ) ) ) || (  x1089 ) );
}

static  bool   any2041 (    struct Array_2042  it1083 ,   struct envunion2044  fun1085 ) {
    struct env2046 envinst2046 = {
        .fun1085 =  fun1085 ,
    };
    return ( (  reduce2045 ) ( (  it1083 ) ,  ( false ) ,  ( (struct envunion2047){ .fun = (  bool  (*) (  struct env2046*  ,    struct StrView_27  ,    bool  ) )lam2059 , .env =  envinst2046 } ) ) );
}

static  struct Array_2042   from_dash_listlike2061 (    struct Array_2042 *  self331 ) {
    return ( * (  self331 ) );
}

static  struct StrViewIter_469   own2067 (    struct StrViewIter_469  x1479 ) {
    return (  x1479 );
}

static  bool   matches_dash_str2064 (    struct Scanner_966 *  sc3290 ,    struct StrView_27  s3292 ) {
    size_t  skip3293 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_469  temp2065 = ( (  chars471 ) ( (  s3292 ) ) );
    struct StrViewIter_469 *  ss3294 = ( &temp2065 );
    struct StrViewIter_469  temp2066 = ( (  own2067 ) ( ( ( * (  sc3290 ) ) .f_s ) ) );
    struct StrViewIter_469 *  sccp3295 = ( &temp2066 );
    while ( ( true ) ) {
        struct Tuple2_1772  dref3296 = ( ( Tuple2_1772_Tuple2 ) ( ( (  next474 ) ( (  sccp3295 ) ) ) ,  ( (  next474 ) ( (  ss3294 ) ) ) ) );
        if ( dref3296 .field1.tag == Maybe_299_None_t ) {
            ( (  drop_prime_994 ) ( (  sc3290 ) ,  (  skip3293 ) ) );
            return ( true );
        }
        else {
            if ( dref3296 .field0.tag == Maybe_299_Just_t && dref3296 .field1.tag == Maybe_299_Just_t ) {
                if ( ( !  eq480 ( ( dref3296 .field0 .stuff .Maybe_299_Just_s .field0 ) , ( dref3296 .field1 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3293 = (  op_dash_add313 ( (  skip3293 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2063 (   struct env2043* env ,    struct StrView_27  sym4014 ) {
    return ( (  matches_dash_str2064 ) ( ( env->sc4001 ) ,  (  sym4014 ) ) );
}

struct envunion2069 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2071 {
    struct StrView_27 _arr [12];
};

struct env2072 {
    ;
    struct Scanner_966 *  sc4001;
};

struct envunion2073 {
    bool  (*fun) (  struct env2072*  ,    struct StrView_27  );
    struct env2072 env;
};

struct env2075 {
    struct envunion2073  fun1085;
};

struct envunion2076 {
    bool  (*fun) (  struct env2075*  ,    struct StrView_27  ,    bool  );
    struct env2075 env;
};

struct ArrayIter_2077 {
    struct Array_2071  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2077   into_dash_iter2078 (    struct Array_2071  self2539 ) {
    return ( (struct ArrayIter_2077) { .f_backing = (  self2539 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2082 (    struct Array_2071 *  p360 ) {
    return ( (struct StrView_27 * ) (  p360 ) );
}

static  struct StrView_27 *   get_dash_ptr2081 (    struct Array_2071 *  arr2463 ,    size_t  i2466 ) {
    if ( ( (  cmp292 ( (  i2466 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2466 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2466 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2467 = ( ( (  cast_dash_ptr2082 ) ( (  arr2463 ) ) ) );
    return ( (  offset_dash_ptr2054 ) ( (  p2467 ) ,  ( (int64_t ) (  i2466 ) ) ) );
}

static  struct StrView_27   get2080 (    struct Array_2071 *  arr2470 ,    size_t  i2473 ) {
    return ( * ( (  get_dash_ptr2081 ) ( (  arr2470 ) ,  (  i2473 ) ) ) );
}

static  struct Maybe_80   next2079 (    struct ArrayIter_2077 *  self2546 ) {
    if ( (  cmp292 ( ( ( * (  self2546 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2548 = ( (  get2080 ) ( ( & ( ( * (  self2546 ) ) .f_backing ) ) ,  ( ( * (  self2546 ) ) .f_cur ) ) );
    (*  self2546 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2546 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2548 ) ) );
}

static  bool   reduce2074 (    struct Array_2071  iterable1043 ,    bool  base1045 ,   struct envunion2076  fun1047 ) {
    bool  x1048 = (  base1045 );
    struct ArrayIter_2077  it1049 = ( (  into_dash_iter2078 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1050 = ( (  next2079 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_80_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_80_Just_t ) {
                struct envunion2076  temp2083 = (  fun1047 );
                x1048 = ( temp2083.fun ( &temp2083.env ,  ( dref1050 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    const char*  temp2084 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2084);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2085;
    return (  temp2085 );
}

static  bool   lam2086 (   struct env2075* env ,    struct StrView_27  e1087 ,    bool  x1089 ) {
    struct envunion2073  temp2087 = ( env->fun1085 );
    return ( ( temp2087.fun ( &temp2087.env ,  (  e1087 ) ) ) || (  x1089 ) );
}

static  bool   any2070 (    struct Array_2071  it1083 ,   struct envunion2073  fun1085 ) {
    struct env2075 envinst2075 = {
        .fun1085 =  fun1085 ,
    };
    return ( (  reduce2074 ) ( (  it1083 ) ,  ( false ) ,  ( (struct envunion2076){ .fun = (  bool  (*) (  struct env2075*  ,    struct StrView_27  ,    bool  ) )lam2086 , .env =  envinst2075 } ) ) );
}

static  struct Array_2071   from_dash_listlike2088 (    struct Array_2071 *  self331 ) {
    return ( * (  self331 ) );
}

static  bool   lam2090 (   struct env2072* env ,    struct StrView_27  sym4018 ) {
    return ( (  matches_dash_str2064 ) ( ( env->sc4001 ) ,  (  sym4018 ) ) );
}

struct envunion2092 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2094 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2093 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2094 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2095 (    struct Char_65  c4022 ) {
    return ( (  eq1341 ( ( (  char_dash_type1344 ) ( (  c4022 ) ) ) , ( CharType_1342_CharWord ) ) ) || (  eq480 ( (  c4022 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2096 (    struct Maybe_299  x1510 ,    bool (*  fun1512 )(    struct Char_65  ) ,    bool  default1514 ) {
    return ( {  struct Maybe_299  dref1515 = (  x1510 ) ; dref1515.tag == Maybe_299_Just_t ? ( (  fun1512 ) ( ( dref1515 .stuff .Maybe_299_Just_s .field0 ) ) ) : (  default1514 ) ; } );
}

static  bool   is_dash_upper2097 (    struct Char_65  c1439 ) {
    return ( (  eq409 ( ( (  c1439 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between985 ) ( (  c1439 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2098 {
    struct StrView_27 _arr [6];
};

static  struct Array_2098   from_dash_listlike2099 (    struct Array_2098 *  self331 ) {
    return ( * (  self331 ) );
}

struct Array_2101 {
    struct StrView_27 _arr [15];
};

static  struct Array_2101   from_dash_listlike2102 (    struct Array_2101 *  self331 ) {
    return ( * (  self331 ) );
}

struct env2105 {
    ;
    struct StrView_27  ident4026;
};

struct envunion2106 {
    bool  (*fun) (  struct env2105*  ,    struct StrView_27  );
    struct env2105 env;
};

struct env2108 {
    struct envunion2106  fun1085;
};

struct envunion2109 {
    bool  (*fun) (  struct env2108*  ,    struct StrView_27  ,    bool  );
    struct env2108 env;
};

struct ArrayIter_2110 {
    struct Array_2098  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2110   into_dash_iter2111 (    struct Array_2098  self2539 ) {
    return ( (struct ArrayIter_2110) { .f_backing = (  self2539 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2115 (    struct Array_2098 *  p360 ) {
    return ( (struct StrView_27 * ) (  p360 ) );
}

static  struct StrView_27 *   get_dash_ptr2114 (    struct Array_2098 *  arr2463 ,    size_t  i2466 ) {
    if ( ( (  cmp292 ( (  i2466 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2466 ) , ( (size_t ) ( 6 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2466 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 6 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2467 = ( ( (  cast_dash_ptr2115 ) ( (  arr2463 ) ) ) );
    return ( (  offset_dash_ptr2054 ) ( (  p2467 ) ,  ( (int64_t ) (  i2466 ) ) ) );
}

static  struct StrView_27   get2113 (    struct Array_2098 *  arr2470 ,    size_t  i2473 ) {
    return ( * ( (  get_dash_ptr2114 ) ( (  arr2470 ) ,  (  i2473 ) ) ) );
}

static  struct Maybe_80   next2112 (    struct ArrayIter_2110 *  self2546 ) {
    if ( (  cmp292 ( ( ( * (  self2546 ) ) .f_cur ) , ( (size_t ) ( 6 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2548 = ( (  get2113 ) ( ( & ( ( * (  self2546 ) ) .f_backing ) ) ,  ( ( * (  self2546 ) ) .f_cur ) ) );
    (*  self2546 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2546 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2548 ) ) );
}

static  bool   reduce2107 (    struct Array_2098  iterable1043 ,    bool  base1045 ,   struct envunion2109  fun1047 ) {
    bool  x1048 = (  base1045 );
    struct ArrayIter_2110  it1049 = ( (  into_dash_iter2111 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1050 = ( (  next2112 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_80_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_80_Just_t ) {
                struct envunion2109  temp2116 = (  fun1047 );
                x1048 = ( temp2116.fun ( &temp2116.env ,  ( dref1050 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    const char*  temp2117 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2117);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2118;
    return (  temp2118 );
}

static  bool   lam2119 (   struct env2108* env ,    struct StrView_27  e1087 ,    bool  x1089 ) {
    struct envunion2106  temp2120 = ( env->fun1085 );
    return ( ( temp2120.fun ( &temp2120.env ,  (  e1087 ) ) ) || (  x1089 ) );
}

static  bool   any2104 (    struct Array_2098  it1083 ,   struct envunion2106  fun1085 ) {
    struct env2108 envinst2108 = {
        .fun1085 =  fun1085 ,
    };
    return ( (  reduce2107 ) ( (  it1083 ) ,  ( false ) ,  ( (struct envunion2109){ .fun = (  bool  (*) (  struct env2108*  ,    struct StrView_27  ,    bool  ) )lam2119 , .env =  envinst2108 } ) ) );
}

static  bool   lam2121 (   struct env2105* env ,    struct StrView_27  kw4030 ) {
    return (  eq497 ( (  kw4030 ) , ( env->ident4026 ) ) );
}

struct env2123 {
    ;
    struct StrView_27  ident4026;
};

struct envunion2124 {
    bool  (*fun) (  struct env2123*  ,    struct StrView_27  );
    struct env2123 env;
};

struct env2126 {
    struct envunion2124  fun1085;
};

struct envunion2127 {
    bool  (*fun) (  struct env2126*  ,    struct StrView_27  ,    bool  );
    struct env2126 env;
};

struct ArrayIter_2128 {
    struct Array_2101  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2128   into_dash_iter2129 (    struct Array_2101  self2539 ) {
    return ( (struct ArrayIter_2128) { .f_backing = (  self2539 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2133 (    struct Array_2101 *  p360 ) {
    return ( (struct StrView_27 * ) (  p360 ) );
}

static  struct StrView_27 *   get_dash_ptr2132 (    struct Array_2101 *  arr2463 ,    size_t  i2466 ) {
    if ( ( (  cmp292 ( (  i2466 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp292 ( (  i2466 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2466 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2467 = ( ( (  cast_dash_ptr2133 ) ( (  arr2463 ) ) ) );
    return ( (  offset_dash_ptr2054 ) ( (  p2467 ) ,  ( (int64_t ) (  i2466 ) ) ) );
}

static  struct StrView_27   get2131 (    struct Array_2101 *  arr2470 ,    size_t  i2473 ) {
    return ( * ( (  get_dash_ptr2132 ) ( (  arr2470 ) ,  (  i2473 ) ) ) );
}

static  struct Maybe_80   next2130 (    struct ArrayIter_2128 *  self2546 ) {
    if ( (  cmp292 ( ( ( * (  self2546 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2548 = ( (  get2131 ) ( ( & ( ( * (  self2546 ) ) .f_backing ) ) ,  ( ( * (  self2546 ) ) .f_cur ) ) );
    (*  self2546 ) .f_cur = (  op_dash_add313 ( ( ( * (  self2546 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2548 ) ) );
}

static  bool   reduce2125 (    struct Array_2101  iterable1043 ,    bool  base1045 ,   struct envunion2127  fun1047 ) {
    bool  x1048 = (  base1045 );
    struct ArrayIter_2128  it1049 = ( (  into_dash_iter2129 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1050 = ( (  next2130 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_80_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_80_Just_t ) {
                struct envunion2127  temp2134 = (  fun1047 );
                x1048 = ( temp2134.fun ( &temp2134.env ,  ( dref1050 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    const char*  temp2135 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2135);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2136;
    return (  temp2136 );
}

static  bool   lam2137 (   struct env2126* env ,    struct StrView_27  e1087 ,    bool  x1089 ) {
    struct envunion2124  temp2138 = ( env->fun1085 );
    return ( ( temp2138.fun ( &temp2138.env ,  (  e1087 ) ) ) || (  x1089 ) );
}

static  bool   any2122 (    struct Array_2101  it1083 ,   struct envunion2124  fun1085 ) {
    struct env2126 envinst2126 = {
        .fun1085 =  fun1085 ,
    };
    return ( (  reduce2125 ) ( (  it1083 ) ,  ( false ) ,  ( (struct envunion2127){ .fun = (  bool  (*) (  struct env2126*  ,    struct StrView_27  ,    bool  ) )lam2137 , .env =  envinst2126 } ) ) );
}

static  bool   lam2139 (   struct env2123* env ,    struct StrView_27  kw4032 ) {
    return (  eq497 ( (  kw4032 ) , ( env->ident4026 ) ) );
}

struct envunion2141 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  struct Maybe_978   int2142 (    struct Scanner_966 *  sc3269 ) {
    return ( (  scan_dash_int979 ) ( (  sc3269 ) ) );
}

static  bool   char_dash_satisfies2144 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2143 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2144 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2145 (    struct Char_65  c1427 ) {
    return ( (  eq409 ( ( (  c1427 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit984 ) ( (  c1427 ) ) ) || ( (  between985 ) ( (  c1427 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between985 ) ( (  c1427 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2147 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2148 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2035 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2150 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2152 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2151 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2152 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2153 (    struct Char_65  c1433 ) {
    return ( (  eq409 ( ( (  c1433 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between985 ) ( (  c1433 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2155 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2157 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2156 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2157 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2159 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2161 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2160 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2161 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2162 (    struct Char_65  c1430 ) {
    return ( (  eq409 ( ( (  c1430 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq480 ( (  c1430 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) || (  eq480 ( (  c1430 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2164 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2166 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2168 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2170 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2173 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2175 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2174 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2175 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2177 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2179 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2181 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2183 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2185 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2184 (    struct Scanner_966 *  sc3301 ,    bool (*  condition3303 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2185 ) ( (  sc3301 ) ,  (  condition3303 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   gcode_dash_keyword_dash_char2186 (    struct Char_65  c3992 ) {
    return ( ( (  is_dash_not_dash_whitespace1681 ) ( (  c3992 ) ) ) && ( !  eq480 ( (  c3992 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) );
}

static  uint8_t   char_dash_case_dash_diff2188 (  ) {
    return (  op_dash_sub943 ( ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) , ( (  char_dash_u8545 ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Char_65   to_dash_lower2187 (    struct Char_65  c1446 ) {
    if ( ( (  is_dash_upper2097 ) ( (  c1446 ) ) ) ) {
        ( (  assert679 ) ( (  eq409 ( ( (  c1446 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"(to-lower) utf8 not yet supported." ) ,  ( 34 ) ) ) ) );
        return ( (  from_dash_u81797 ) ( (  op_dash_add944 ( ( (  char_dash_u8545 ) ( (  c1446 ) ) ) , ( (  char_dash_case_dash_diff2188 ) ( ) ) ) ) ) );
    }
    return (  c1446 );
}

struct StrConcat_2194 {
    struct StrView_27  field0;
    struct StrConcat_646  field1;
};

static struct StrConcat_2194 StrConcat_2194_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_646  field1 ) {
    return ( struct StrConcat_2194 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2193 {
    struct StrConcat_2194  field0;
    struct Char_65  field1;
};

static struct StrConcat_2193 StrConcat_2193_StrConcat (  struct StrConcat_2194  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2193 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2195 (    struct StrConcat_2194  self1220 ) {
    struct StrConcat_2194  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str653 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2192 (    struct StrConcat_2193  self1220 ) {
    struct StrConcat_2193  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str2195 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic2191 (    struct StrConcat_646  errmsg1261 ) {
    ( (  print_dash_str2192 ) ( ( ( StrConcat_2193_StrConcat ) ( ( ( StrConcat_2194_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1261 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Char_65   undefined2196 (  ) {
    struct Char_65  temp2197;
    return (  temp2197 );
}

static  struct Char_65   or_dash_fail2190 (    struct Maybe_299  x1271 ,    struct StrConcat_646  errmsg1273 ) {
    struct Maybe_299  dref1274 = (  x1271 );
    if ( dref1274.tag == Maybe_299_None_t ) {
        ( (  panic2191 ) ( (  errmsg1273 ) ) );
        return ( (  undefined2196 ) ( ) );
    }
    else {
        if ( dref1274.tag == Maybe_299_Just_t ) {
            return ( dref1274 .stuff .Maybe_299_Just_s .field0 );
        }
    }
}

static  struct Char_65   char_dash_at_dash_offset2189 (    struct StrView_27  self2394 ,    size_t  i2396 ) {
    return ( (  or_dash_fail2190 ) ( ( (  head1350 ) ( ( (  chars471 ) ( ( (struct StrView_27) { .f_contents = ( (  from476 ) ( ( (  self2394 ) .f_contents ) ,  (  i2396 ) ) ) } ) ) ) ) ) ,  ( ( StrConcat_646_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"(StrView.char-at-offset) off too great for this StrView (" ) ,  ( 57 ) ) ) ,  (  i2396 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2199 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2201 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2202 (    struct Scanner_966 *  sc3283 ,    bool (*  condition3285 )(    struct Char_65  ) ) {
    struct Maybe_299  dref3286 = ( (  head1350 ) ( ( ( * (  sc3283 ) ) .f_s ) ) );
    if ( dref3286.tag == Maybe_299_Just_t ) {
        if ( ( (  condition3285 ) ( ( dref3286 .stuff .Maybe_299_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_994 ) ( (  sc3283 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3286.tag == Maybe_299_None_t ) {
            return ( false );
        }
    }
}

static  bool   lam2203 (    struct Char_65  c4057 ) {
    return ( !  eq480 ( (  c4057 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) );
}

struct envunion2205 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1985 (   struct env134* env ,    struct TextBuf_106 *  self3995 ,    struct Line_16 *  line3997 ) {
    if ( ( ! ( ( * (  line3997 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_17 *  hls3998 = ( & ( ( * (  line3997 ) ) .f_highlights ) );
    ( (  trim1986 ) ( (  hls3998 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv3999 = ( (  from_dash_bytes1109 ) ( ( (  to_dash_slice577 ) ( ( ( * (  line3997 ) ) .f_line ) ) ) ) );
    enum Filetype_109  dref4000 = ( ( * (  self3995 ) ) .f_filetype );
    switch (  dref4000 ) {
        case Filetype_109_Text : {
            break;
        }
        case Filetype_109_KC : {
            struct Scanner_966  temp1987 = ( (  mk_dash_from_dash_str968 ) ( (  line_dash_sv3999 ) ) );
            struct Scanner_966 *  sc4001 = ( &temp1987 );
            while ( ( ! ( (  null1988 ) ( (  sc4001 ) ) ) ) ) {
                int32_t  from_dash_off4002 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                struct Maybe_299  first_dash_char4003 = ( (  peek1991 ) ( (  sc4001 ) ) );
                if ( ( (  try_dash_char1992 ) ( (  sc4001 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  try_dash_char1992 ) ( (  sc4001 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  skip_dash_while1994 ) ( (  sc4001 ) ,  (  lam1996 ) ) );
                        ( (  drop_prime_994 ) ( (  sc4001 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        int32_t  to_dash_off4006 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                        struct envunion135  temp1997 = ( (struct envunion135){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                        ( temp1997.fun ( &temp1997.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  line_dash_sv3999 ) ) ) ) ) , .f_type = ( HighlightType_20_Special3 ) } ) ) );
                    } else {
                        struct envunion2029  temp2028 = ( (struct envunion2029){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                        ( temp2028.fun ( &temp2028.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  line_dash_sv3999 ) ) ) ) ) , .f_type = ( HighlightType_20_Comment ) } ) ) );
                    }
                    break;
                } else {
                    if ( ( (  try_dash_char1992 ) ( (  sc4001 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) {
                        while ( ( true ) ) {
                            ( (  skip_dash_while2030 ) ( (  sc4001 ) ,  (  lam2032 ) ) );
                            if ( (  eq1993 ( ( (  peek1991 ) ( (  sc4001 ) ) ) , ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                ( (  drop_prime_994 ) ( (  sc4001 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                if ( (  eq1993 ( ( (  peek1991 ) ( (  sc4001 ) ) ) , ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                    ( (  drop_prime_994 ) ( (  sc4001 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                } else {
                                }
                            } else {
                                ( (  drop_prime_994 ) ( (  sc4001 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                break;
                            }
                        }
                        int32_t  cur_dash_off4009 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2034  temp2033 = ( (struct envunion2034){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                        ( temp2033.fun ( &temp2033.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = (  cur_dash_off4009 ) , .f_type = ( HighlightType_20_String ) } ) ) );
                    } else {
                        if ( ( (  try_dash_char1992 ) ( (  sc4001 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"@" ) ,  ( 1 ) ) ) ) ) ) {
                            if ( ( (  char_dash_satisfies2035 ) ( (  sc4001 ) ,  (  is_dash_alpha1346 ) ) ) ) {
                                ( (  skip_dash_while2036 ) ( (  sc4001 ) ,  (  lam2038 ) ) );
                                int32_t  cur_dash_off4012 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                struct envunion2040  temp2039 = ( (struct envunion2040){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                ( temp2039.fun ( &temp2039.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = (  cur_dash_off4012 ) , .f_type = ( HighlightType_20_Ident3 ) } ) ) );
                            } else {
                            }
                        } else {
                            struct Array_2042  temp2062 = ( (struct Array_2042) { ._arr = { ( (  from_dash_string201 ) ( ( (uint8_t*)"==" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"/=" ) ,  ( 2 ) ) ) } } );
                            struct env2043 envinst2043 = {
                                .sc4001 =  sc4001 ,
                            };
                            if ( ( (  any2041 ) ( ( (  from_dash_listlike2061 ) ( ( &temp2062 ) ) ) ,  ( (struct envunion2044){ .fun = (  bool  (*) (  struct env2043*  ,    struct StrView_27  ) )lam2063 , .env =  envinst2043 } ) ) ) ) {
                                int32_t  cur_dash_off4015 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                enum HighlightType_20  type4016 = ( HighlightType_20_Special2 );
                                struct envunion2069  temp2068 = ( (struct envunion2069){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                ( temp2068.fun ( &temp2068.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = (  cur_dash_off4015 ) , .f_type = (  type4016 ) } ) ) );
                            } else {
                                struct Array_2071  temp2089 = ( (struct Array_2071) { ._arr = { ( (  from_dash_string201 ) ( ( (uint8_t*)"<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"&" ) ,  ( 1 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1239 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) } } );
                                struct env2072 envinst2072 = {
                                    .sc4001 =  sc4001 ,
                                };
                                if ( ( (  any2070 ) ( ( (  from_dash_listlike2088 ) ( ( &temp2089 ) ) ) ,  ( (struct envunion2073){ .fun = (  bool  (*) (  struct env2072*  ,    struct StrView_27  ) )lam2090 , .env =  envinst2072 } ) ) ) ) {
                                    int32_t  cur_dash_off4019 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_20  type4020 = ( HighlightType_20_Special1 );
                                    struct envunion2092  temp2091 = ( (struct envunion2092){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                    ( temp2091.fun ( &temp2091.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = (  cur_dash_off4019 ) , .f_type = (  type4020 ) } ) ) );
                                } else {
                                    if ( ( (  char_dash_satisfies2035 ) ( (  sc4001 ) ,  (  is_dash_alpha1346 ) ) ) ) {
                                        ( (  skip_dash_while2093 ) ( (  sc4001 ) ,  (  lam2095 ) ) );
                                        int32_t  cur_dash_off4023 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                        bool  first_dash_char_dash_uppercase4024 = ( (  maybe2096 ) ( (  first_dash_char4003 ) ,  (  is_dash_upper2097 ) ,  ( false ) ) );
                                        enum HighlightType_20  type4025 = ( (  first_dash_char_dash_uppercase4024 ) ? ( HighlightType_20_Ident2 ) : ( HighlightType_20_Ident1 ) );
                                        struct StrView_27  ident4026 = ( ( (  byte_dash_substr496 ) ( (  line_dash_sv3999 ) ,  ( (  i32_dash_size422 ) ( (  from_dash_off4002 ) ) ) ,  ( (  i32_dash_size422 ) ( (  cur_dash_off4023 ) ) ) ) ) );
                                        struct Array_2098  temp2100 = ( (struct Array_2098) { ._arr = { ( (  from_dash_string201 ) ( ( (uint8_t*)"fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"class" ) ,  ( 5 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"external" ) ,  ( 8 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"use" ) ,  ( 3 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"export" ) ,  ( 6 ) ) ) } } );
                                        struct Array_2098  keywords14027 = ( (  from_dash_listlike2099 ) ( ( &temp2100 ) ) );
                                        struct Array_2101  temp2103 = ( (struct Array_2101) { ._arr = { ( (  from_dash_string201 ) ( ( (uint8_t*)"if" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"else" ) ,  ( 4 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"case" ) ,  ( 4 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"for" ) ,  ( 3 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"in" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"while" ) ,  ( 5 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"break" ) ,  ( 5 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"as" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"or" ) ,  ( 2 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"and" ) ,  ( 3 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"not" ) ,  ( 3 ) ) ) , ( (  from_dash_string201 ) ( ( (uint8_t*)"return" ) ,  ( 6 ) ) ) } } );
                                        struct Array_2101  keywords24028 = ( (  from_dash_listlike2102 ) ( ( &temp2103 ) ) );
                                        struct env2105 envinst2105 = {
                                            .ident4026 =  ident4026 ,
                                        };
                                        if ( ( (  any2104 ) ( (  keywords14027 ) ,  ( (struct envunion2106){ .fun = (  bool  (*) (  struct env2105*  ,    struct StrView_27  ) )lam2121 , .env =  envinst2105 } ) ) ) ) {
                                            type4025 = ( HighlightType_20_Keyword1 );
                                        } else {
                                            struct env2123 envinst2123 = {
                                                .ident4026 =  ident4026 ,
                                            };
                                            if ( ( (  any2122 ) ( (  keywords24028 ) ,  ( (struct envunion2124){ .fun = (  bool  (*) (  struct env2123*  ,    struct StrView_27  ) )lam2139 , .env =  envinst2123 } ) ) ) ) {
                                                type4025 = ( HighlightType_20_Keyword2 );
                                            } else {
                                                if ( ( ( ! (  first_dash_char_dash_uppercase4024 ) ) && (  eq1993 ( ( (  peek1991 ) ( (  sc4001 ) ) ) , ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                                    type4025 = ( HighlightType_20_Ident4 );
                                                }
                                            }
                                        }
                                        struct envunion2141  temp2140 = ( (struct envunion2141){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                        ( temp2140.fun ( &temp2140.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = (  cur_dash_off4023 ) , .f_type = (  type4025 ) } ) ) );
                                    } else {
                                        struct Maybe_978  dref4033 = ( (  int2142 ) ( (  sc4001 ) ) );
                                        if ( dref4033.tag == Maybe_978_Just_t ) {
                                            int32_t  cur_dash_off4035 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                            enum HighlightType_20  type4036 = ( HighlightType_20_Number );
                                            if ( (  eq1070 ( ( dref4033 .stuff .Maybe_978_Just_s .field0 ) , (  from_dash_integral290 ( 0 ) ) ) ) ) {
                                                if ( ( (  try_dash_char1992 ) ( (  sc4001 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2143 ) ( (  sc4001 ) ,  (  is_dash_hex2145 ) ) );
                                                    int32_t  cur_dash_off4037 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2147  temp2146 = ( (struct envunion2147){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                                    ( temp2146.fun ( &temp2146.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = (  cur_dash_off4037 ) , .f_type = (  type4036 ) } ) ) );
                                                    ( (  skip_dash_while2148 ) ( (  sc4001 ) ,  (  is_dash_alpha1346 ) ) );
                                                    int32_t  invalid_dash_off4038 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq570 ( (  cur_dash_off4037 ) , (  invalid_dash_off4038 ) ) ) ) {
                                                        struct envunion2150  temp2149 = ( (struct envunion2150){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                                        ( temp2149.fun ( &temp2149.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off4037 ) , .f_to = (  invalid_dash_off4038 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    if ( ( (  try_dash_char1992 ) ( (  sc4001 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  skip_dash_while2151 ) ( (  sc4001 ) ,  (  is_dash_octal2153 ) ) );
                                                        int32_t  cur_dash_off4039 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                                        struct envunion2155  temp2154 = ( (struct envunion2155){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                                        ( temp2154.fun ( &temp2154.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = (  cur_dash_off4039 ) , .f_type = (  type4036 ) } ) ) );
                                                        ( (  skip_dash_while2156 ) ( (  sc4001 ) ,  (  is_dash_digit984 ) ) );
                                                        int32_t  invalid_dash_off4040 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                                        if ( ( !  eq570 ( (  cur_dash_off4039 ) , (  invalid_dash_off4040 ) ) ) ) {
                                                            struct envunion2159  temp2158 = ( (struct envunion2159){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                                            ( temp2158.fun ( &temp2158.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off4039 ) , .f_to = (  invalid_dash_off4040 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                        }
                                                    } else {
                                                        if ( ( (  try_dash_char1992 ) ( (  sc4001 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  skip_dash_while2160 ) ( (  sc4001 ) ,  (  is_dash_binary2162 ) ) );
                                                            int32_t  cur_dash_off4041 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                                            struct envunion2164  temp2163 = ( (struct envunion2164){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                                            ( temp2163.fun ( &temp2163.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = (  cur_dash_off4041 ) , .f_type = (  type4036 ) } ) ) );
                                                            ( (  skip_dash_while2156 ) ( (  sc4001 ) ,  (  is_dash_digit984 ) ) );
                                                            int32_t  invalid_dash_off4042 = ( (  size_dash_i32331 ) ( ( ( * (  sc4001 ) ) .f_byte_dash_offset ) ) );
                                                            if ( ( !  eq570 ( (  cur_dash_off4041 ) , (  invalid_dash_off4042 ) ) ) ) {
                                                                struct envunion2166  temp2165 = ( (struct envunion2166){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                                                ( temp2165.fun ( &temp2165.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off4041 ) , .f_to = (  invalid_dash_off4042 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                            }
                                                        } else {
                                                            struct envunion2168  temp2167 = ( (struct envunion2168){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                                            ( temp2167.fun ( &temp2167.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = (  cur_dash_off4035 ) , .f_type = (  type4036 ) } ) ) );
                                                        }
                                                    }
                                                }
                                            } else {
                                                struct envunion2170  temp2169 = ( (struct envunion2170){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                                                ( temp2169.fun ( &temp2169.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4002 ) , .f_to = (  cur_dash_off4035 ) , .f_type = (  type4036 ) } ) ) );
                                            }
                                        }
                                        else {
                                            if ( dref4033.tag == Maybe_978_None_t ) {
                                                ( (  drop_prime_994 ) ( (  sc4001 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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
        case Filetype_109_Markdown : {
            struct Scanner_966  temp2171 = ( (  mk_dash_from_dash_str968 ) ( (  line_dash_sv3999 ) ) );
            struct Scanner_966 *  sc4043 = ( &temp2171 );
            if ( ( (  try_dash_char1992 ) ( (  sc4043 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
                struct envunion2173  temp2172 = ( (struct envunion2173){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                ( temp2172.fun ( &temp2172.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_integral56 ( 0 ) ) , .f_to = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  line_dash_sv3999 ) ) ) ) ) , .f_type = ( HighlightType_20_Keyword1 ) } ) ) );
            } else {
                ( (  skip_dash_while2174 ) ( (  sc4043 ) ,  (  is_dash_whitespace1347 ) ) );
                int32_t  from_dash_off4044 = ( (  size_dash_i32331 ) ( ( ( * (  sc4043 ) ) .f_byte_dash_offset ) ) );
                if ( ( (  try_dash_char1992 ) ( (  sc4043 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) {
                    int32_t  to_dash_off4045 = ( (  size_dash_i32331 ) ( ( ( * (  sc4043 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2177  temp2176 = ( (struct envunion2177){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                    ( temp2176.fun ( &temp2176.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4044 ) , .f_to = (  to_dash_off4045 ) , .f_type = ( HighlightType_20_Special1 ) } ) ) );
                    ( (  skip_dash_while2174 ) ( (  sc4043 ) ,  (  is_dash_whitespace1347 ) ) );
                    int32_t  from_dash_off4046 = ( (  size_dash_i32331 ) ( ( ( * (  sc4043 ) ) .f_byte_dash_offset ) ) );
                    if ( ( (  matches_dash_str2064 ) ( (  sc4043 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"[ ]" ) ,  ( 3 ) ) ) ) ) ) {
                        int32_t  to_dash_off4047 = ( (  size_dash_i32331 ) ( ( ( * (  sc4043 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2179  temp2178 = ( (struct envunion2179){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                        ( temp2178.fun ( &temp2178.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4046 ) , .f_to = (  to_dash_off4047 ) , .f_type = ( HighlightType_20_Keyword1 ) } ) ) );
                    } else {
                        if ( ( ( (  matches_dash_str2064 ) ( (  sc4043 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"[x]" ) ,  ( 3 ) ) ) ) ) || ( (  matches_dash_str2064 ) ( (  sc4043 ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"[X]" ) ,  ( 3 ) ) ) ) ) ) ) {
                            int32_t  to_dash_off4048 = ( (  size_dash_i32331 ) ( ( ( * (  sc4043 ) ) .f_byte_dash_offset ) ) );
                            struct envunion2181  temp2180 = ( (struct envunion2181){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                            ( temp2180.fun ( &temp2180.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4046 ) , .f_to = (  to_dash_off4048 ) , .f_type = ( HighlightType_20_Keyword2 ) } ) ) );
                        }
                    }
                }
            }
            break;
        }
        case Filetype_109_GCode : {
            struct Scanner_966  temp2182 = ( (  mk_dash_from_dash_str968 ) ( (  line_dash_sv3999 ) ) );
            struct Scanner_966 *  sc4049 = ( &temp2182 );
            ( (  skip_dash_while2174 ) ( (  sc4049 ) ,  (  is_dash_whitespace1347 ) ) );
            int32_t  first_dash_from_dash_off4050 = ( (  size_dash_i32331 ) ( ( ( * (  sc4049 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  char_dash_satisfies2183 ) ( (  sc4049 ) ,  (  is_dash_alphanumeric1345 ) ) ) ) {
                ( (  skip_dash_while2184 ) ( (  sc4049 ) ,  (  gcode_dash_keyword_dash_char2186 ) ) );
                int32_t  first_dash_to_dash_off4051 = ( (  size_dash_i32331 ) ( ( ( * (  sc4049 ) ) .f_byte_dash_offset ) ) );
                enum HighlightType_20  type4052 = ( HighlightType_20_Invalid );
                struct Char_65  first_dash_char4053 = ( (  to_dash_lower2187 ) ( ( (  char_dash_at_dash_offset2189 ) ( (  line_dash_sv3999 ) ,  ( (  i32_dash_size422 ) ( (  first_dash_from_dash_off4050 ) ) ) ) ) ) );
                if ( (  eq480 ( (  first_dash_char4053 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) {
                    type4052 = ( HighlightType_20_Keyword1 );
                } else {
                    if ( (  eq480 ( (  first_dash_char4053 ) , ( (  from_dash_charlike356 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                        type4052 = ( HighlightType_20_Ident1 );
                    }
                }
                struct envunion2199  temp2198 = ( (struct envunion2199){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                ( temp2198.fun ( &temp2198.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  first_dash_from_dash_off4050 ) , .f_to = (  first_dash_to_dash_off4051 ) , .f_type = (  type4052 ) } ) ) );
                ( (  skip_dash_while2174 ) ( (  sc4049 ) ,  (  is_dash_whitespace1347 ) ) );
                int32_t  from_dash_off4054 = ( (  size_dash_i32331 ) ( ( ( * (  sc4049 ) ) .f_byte_dash_offset ) ) );
                while ( ( (  char_dash_satisfies2183 ) ( (  sc4049 ) ,  (  is_dash_alphanumeric1345 ) ) ) ) {
                    ( (  skip_dash_while2184 ) ( (  sc4049 ) ,  (  gcode_dash_keyword_dash_char2186 ) ) );
                    int32_t  to_dash_off4055 = ( (  size_dash_i32331 ) ( ( ( * (  sc4049 ) ) .f_byte_dash_offset ) ) );
                    ( (  skip_dash_while2174 ) ( (  sc4049 ) ,  (  is_dash_whitespace1347 ) ) );
                    struct envunion2201  temp2200 = ( (struct envunion2201){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                    ( temp2200.fun ( &temp2200.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4054 ) , .f_to = (  to_dash_off4055 ) , .f_type = ( HighlightType_20_Ident4 ) } ) ) );
                }
            }
            while ( ( (  char_dash_satisfies2202 ) ( (  sc4049 ) ,  (  lam2203 ) ) ) ) {
            }
            int32_t  from_dash_off4058 = ( (  size_dash_i32331 ) ( ( ( * (  sc4049 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  try_dash_char1992 ) ( (  sc4049 ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ) {
                struct envunion2205  temp2204 = ( (struct envunion2205){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1998 , .env =  env->envinst35 } );
                ( temp2204.fun ( &temp2204.env ,  (  hls3998 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4058 ) , .f_to = ( (  size_dash_i32331 ) ( ( (  num_dash_bytes1141 ) ( (  line_dash_sv3999 ) ) ) ) ) , .f_type = ( HighlightType_20_Comment ) } ) ) );
            }
            break;
        }
    }
    (*  line3997 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_18   subslice2208 (    struct Slice_18  slice1974 ,    size_t  from1976 ,    size_t  to1978 ) {
    struct Highlight_19 *  begin_dash_ptr1979 = ( (  offset_dash_ptr2012 ) ( ( (  slice1974 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from1976 ) ) ) ) );
    if ( ( (  cmp292 ( (  from1976 ) , (  to1978 ) ) != 0 ) || (  cmp292 ( (  from1976 ) , ( (  slice1974 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1980 = (  op_dash_sub291 ( ( (  min478 ) ( (  to1978 ) ,  ( (  slice1974 ) .f_count ) ) ) , (  from1976 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  count1980 ) } );
}

static  struct SliceIter_2016   into_dash_iter2207 (    struct List_17  self2204 ) {
    return ( (  into_dash_iter2025 ) ( ( (  subslice2208 ) ( ( (  self2204 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2204 ) .f_count ) ) ) ) );
}

static  bool   between2210 (    int32_t  c1295 ,    int32_t  l1297 ,    int32_t  r1299 ) {
    int32_t  from1300 = ( (  min670 ) ( (  l1297 ) ,  (  r1299 ) ) );
    int32_t  to1301 = ( (  max1121 ) ( (  l1297 ) ,  (  r1299 ) ) );
    return ( (  cmp157 ( (  from1300 ) , (  c1295 ) ) != 2 ) && (  cmp157 ( (  c1295 ) , (  to1301 ) ) != 2 ) );
}

static  struct Maybe_205   highlight_dash_at1983 (   struct env136* env ,    struct TextBuf_106 *  self4061 ,    struct Pos_26  pos4063 ) {
    struct Line_16 *  line4064 = ( (  get_dash_ptr576 ) ( ( & ( ( * (  self4061 ) ) .f_buf ) ) ,  ( (  i32_dash_size422 ) ( ( (  pos4063 ) .f_line ) ) ) ) );
    struct envunion137  temp1984 = ( (struct envunion137){ .fun = (  enum Unit_8  (*) (  struct env134*  ,    struct TextBuf_106 *  ,    struct Line_16 *  ) )recompute_dash_highlights_dash_at_dash_line1985 , .env =  env->envinst134 } );
    ( temp1984.fun ( &temp1984.env ,  (  self4061 ) ,  (  line4064 ) ) );
    struct SliceIter_2016  temp2206 =  into_dash_iter2207 ( ( ( * (  line4064 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2021  __cond2209 =  next2022 (&temp2206);
        if (  __cond2209 .tag == 0 ) {
            break;
        }
        struct Highlight_19  hl4066 =  __cond2209 .stuff .Maybe_2021_Just_s .field0;
        if ( ( (  between2210 ) ( ( (  pos4063 ) .f_bi ) ,  ( (  hl4066 ) .f_from ) ,  (  op_dash_sub164 ( ( (  hl4066 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_205_Just ) ( ( (  hl4066 ) .f_type ) ) );
        }
        if ( (  cmp157 ( ( (  pos4063 ) .f_bi ) , ( (  hl4066 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_205) { .tag = Maybe_205_None_t } );
        }
    }
    return ( (struct Maybe_205) { .tag = Maybe_205_None_t } );
}

struct Maybe_2214 {
    enum {
        Maybe_2214_None_t,
        Maybe_2214_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_175  field0;
        } Maybe_2214_Just_s;
    } stuff;
};

static struct Maybe_2214 Maybe_2214_Just (  struct HighlightColors_175  field0 ) {
    return ( struct Maybe_2214 ) { .tag = Maybe_2214_Just_t, .stuff = { .Maybe_2214_Just_s = { .field0 = field0 } } };
};

struct env2215 {
    ;
    struct Theme_172 *  theme4102;
};

struct envunion2216 {
    struct Colors_173  (*fun) (  struct env2215*  ,    struct HighlightColors_175  );
    struct env2215 env;
};

static  struct Colors_173   maybe2213 (    struct Maybe_2214  x1510 ,   struct envunion2216  fun1512 ,    struct Colors_173  default1514 ) {
    struct envunion2216  temp2217 = (  fun1512 );
    return ( {  struct Maybe_2214  dref1515 = (  x1510 ) ; dref1515.tag == Maybe_2214_Just_t ? ( temp2217.fun ( &temp2217.env ,  ( dref1515 .stuff .Maybe_2214_Just_s .field0 ) ) ) : (  default1514 ) ; } );
}

struct SliceIter_2220 {
    struct Slice_174  f_slice;
    size_t  f_current_dash_offset;
};

struct env2221 {
    enum HighlightType_20  hltype4104;
    ;
};

struct envunion2222 {
    bool  (*fun) (  struct env2221*  ,    struct HighlightColors_175  );
    struct env2221 env;
};

struct Filter_2219 {
    struct SliceIter_2220  f_og;
    struct envunion2222  f_fun;
};

static  struct HighlightColors_175 *   offset_dash_ptr2225 (    struct HighlightColors_175 *  x339 ,    int64_t  count341 ) {
    struct HighlightColors_175  temp2226;
    return ( (struct HighlightColors_175 * ) ( ( (void*) (  x339 ) ) + (  op_dash_mul288 ( (  count341 ) , ( (int64_t ) ( sizeof( ( (  temp2226 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2214   next2224 (    struct SliceIter_2220 *  self2026 ) {
    size_t  off2027 = ( ( * (  self2026 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2026 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2214) { .tag = Maybe_2214_None_t } );
    }
    struct HighlightColors_175  elem2028 = ( * ( (  offset_dash_ptr2225 ) ( ( ( ( * (  self2026 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2027 ) ) ) ) ) );
    (*  self2026 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2214_Just ) ( (  elem2028 ) ) );
}

static  struct Maybe_2214   next2223 (    struct Filter_2219 *  self766 ) {
    while ( ( true ) ) {
        struct Maybe_2214  dref767 = ( (  next2224 ) ( ( & ( ( * (  self766 ) ) .f_og ) ) ) );
        if ( dref767.tag == Maybe_2214_None_t ) {
            return ( (struct Maybe_2214) { .tag = Maybe_2214_None_t } );
        }
        else {
            if ( dref767.tag == Maybe_2214_Just_t ) {
                struct envunion2222  temp2227 = ( ( * (  self766 ) ) .f_fun );
                if ( ( temp2227.fun ( &temp2227.env ,  ( dref767 .stuff .Maybe_2214_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2214_Just ) ( ( dref767 .stuff .Maybe_2214_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2214  temp2228;
    return (  temp2228 );
}

static  struct Filter_2219   into_dash_iter2230 (    struct Filter_2219  self763 ) {
    return (  self763 );
}

static  struct Maybe_2214   head2218 (    struct Filter_2219  it1092 ) {
    struct Filter_2219  temp2229 = ( (  into_dash_iter2230 ) ( (  it1092 ) ) );
    return ( (  next2223 ) ( ( &temp2229 ) ) );
}

static  struct SliceIter_2220   into_dash_iter2232 (    struct Slice_174  self2020 ) {
    return ( (struct SliceIter_2220) { .f_slice = (  self2020 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2219   filter2231 (    struct Slice_174  iterable771 ,   struct envunion2222  fun773 ) {
    struct SliceIter_2220  it774 = ( (  into_dash_iter2232 ) ( (  iterable771 ) ) );
    return ( (struct Filter_2219) { .f_og = (  it774 ) , .f_fun = (  fun773 ) } );
}

static  bool   eq2235 (    uint32_t  l112 ,    uint32_t  r114 ) {
    return ( (  l112 ) == (  r114 ) );
}

static  enum HighlightType_20 *   cast2238 (    uint32_t *  x357 ) {
    return ( (enum HighlightType_20 * ) (  x357 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2236 (    enum HighlightType_20  x600 ) {
    uint32_t  temp2237 = ( (  zeroed822 ) ( ) );
    uint32_t *  y601 = ( &temp2237 );
    enum HighlightType_20 *  yp602 = ( (  cast2238 ) ( (  y601 ) ) );
    (*  yp602 ) = (  x600 );
    return ( * (  y601 ) );
}

static  bool   eq2234 (    enum HighlightType_20  l3707 ,    enum HighlightType_20  r3709 ) {
    return (  eq2235 ( ( ( (  cast_dash_on_dash_zeroed2236 ) ( (  l3707 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2236 ) ( (  r3709 ) ) ) ) );
}

static  bool   lam2233 (   struct env2221* env ,    struct HighlightColors_175  hlc4106 ) {
    return (  eq2234 ( ( (  hlc4106 ) .f_type ) , ( env->hltype4104 ) ) );
}

static  struct Color_138   or_dash_else2240 (    struct Maybe_176  self1278 ,    struct Color_138  alt1280 ) {
    struct Maybe_176  dref1281 = (  self1278 );
    if ( dref1281.tag == Maybe_176_None_t ) {
        return (  alt1280 );
    }
    else {
        if ( dref1281.tag == Maybe_176_Just_t ) {
            return ( dref1281 .stuff .Maybe_176_Just_s .field0 );
        }
    }
}

static  struct Colors_173   lam2239 (   struct env2215* env ,    struct HighlightColors_175  hlc4108 ) {
    return ( (struct Colors_173) { .f_fg = ( (  hlc4108 ) .f_fg ) , .f_bg = ( (  or_dash_else2240 ) ( ( (  hlc4108 ) .f_bg ) ,  ( ( ( * ( env->theme4102 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_173   find_dash_colors_dash_for_dash_highlight2212 (    struct Theme_172 *  theme4102 ,    enum HighlightType_20  hltype4104 ) {
    struct env2221 envinst2221 = {
        .hltype4104 =  hltype4104 ,
    };
    struct env2215 envinst2215 = {
        .theme4102 =  theme4102 ,
    };
    return ( (  maybe2213 ) ( ( (  head2218 ) ( ( (  filter2231 ) ( ( ( * (  theme4102 ) ) .f_highlights ) ,  ( (struct envunion2222){ .fun = (  bool  (*) (  struct env2221*  ,    struct HighlightColors_175  ) )lam2233 , .env =  envinst2221 } ) ) ) ) ) ,  ( (struct envunion2216){ .fun = (  struct Colors_173  (*) (  struct env2215*  ,    struct HighlightColors_175  ) )lam2239 , .env =  envinst2215 } ) ,  ( ( * (  theme4102 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2211 (   struct env1979* env ,    enum HighlightType_20  type4237 ) {
    ( (  set_dash_colors1944 ) ( ( env->screen4207 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2212 ) ( ( env->theme4214 ) ,  (  type4237 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2244 (  ) {
    ( (  println1353 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1704 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2243 (    enum Mode_223  mode4123 ) {
    return ( {  enum Mode_223  dref4124 = (  mode4123 ) ;  dref4124 == Mode_223_Normal ? ( (  from_dash_string201 ) ( ( (uint8_t*)"NOR" ) ,  ( 3 ) ) ) :  dref4124 == Mode_223_Insert ? ( (  from_dash_string201 ) ( ( (uint8_t*)"INS" ) ,  ( 3 ) ) ) :  dref4124 == Mode_223_Select ? ( (  from_dash_string201 ) ( ( (uint8_t*)"SEL" ) ,  ( 3 ) ) ) : ( (  todo2244 ) ( ) ) ; } );
}

struct StrConcat_2247 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2247 StrConcat_2247_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2247 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2246 {
    struct StrConcat_2247  field0;
    struct Char_65  field1;
};

static struct StrConcat_2246 StrConcat_2246_StrConcat (  struct StrConcat_2247  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2246 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2250 {
    struct AppendIter_1035  f_left;
    struct StrViewIter_469  f_right;
};

struct StrConcatIter_2249 {
    struct StrConcatIter_2250  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_2249   into_dash_iter2251 (    struct StrConcatIter_2249  self1208 ) {
    return (  self1208 );
}

static  struct StrConcatIter_2250   into_dash_iter2255 (    struct StrConcat_2247  dref1215 ) {
    return ( (struct StrConcatIter_2250) { .f_left = ( (  chars1071 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars471 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2250   chars2254 (    struct StrConcat_2247  self1226 ) {
    return ( (  into_dash_iter2255 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_2249   into_dash_iter2253 (    struct StrConcat_2246  dref1215 ) {
    return ( (struct StrConcatIter_2249) { .f_left = ( (  chars2254 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2249   chars2252 (    struct StrConcat_2246  self1226 ) {
    return ( (  into_dash_iter2253 ) ( (  self1226 ) ) );
}

static  struct Maybe_299   next2258 (    struct StrConcatIter_2250 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2257 (    struct StrConcatIter_2249 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2258 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2245 (    struct Screen_278 *  screen3643 ,    struct StrConcat_2246  s3645 ,    int32_t  x3647 ,    int32_t  y3649 ) {
    int32_t  w3650 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3643 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3649 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3649 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3643 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3651 = (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3649 ) , (  w3650 ) ) ) , (  x3647 ) ) );
    int32_t  x3652 = ( (  min670 ) ( (  x3647 ) ,  (  w3650 ) ) );
    size_t  max_dash_len3653 = ( (  i32_dash_size422 ) ( (  op_dash_sub164 ( (  w3650 ) , (  x3652 ) ) ) ) );
    int32_t  xx3654 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2249  temp2248 =  into_dash_iter2251 ( ( (  chars2252 ) ( (  s3645 ) ) ) );
    while (true) {
        struct Maybe_299  __cond2256 =  next2257 (&temp2248);
        if (  __cond2256 .tag == 0 ) {
            break;
        }
        struct Char_65  c3656 =  __cond2256 .stuff .Maybe_299_Just_s .field0;
        ( (  put_dash_char1960 ) ( (  screen3643 ) ,  (  c3656 ) ,  (  op_dash_add159 ( (  x3652 ) , (  xx3654 ) ) ) ,  (  y3649 ) ) );
        xx3654 = (  op_dash_add159 ( (  xx3654 ) , ( (  rendered_dash_wcwidth1120 ) ( (  c3656 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1919 (   struct env203* env ,    struct Screen_278 *  screen4207 ,    struct Pane_222 *  pane4209 ,    struct ScreenDims_281  sd4211 ,    struct Config_252 *  cfg4213 ) {
    struct Theme_172 *  theme4214 = ( ( * (  cfg4213 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4215 = ( ( * (  cfg4213 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4216 = ( ( * (  cfg4213 ) ) .f_relative_dash_line_dash_numbers );
    int32_t  max_dash_line_dash_num_dash_chars4217 = ( (  size_dash_i32331 ) ( ( (  count1920 ) ( ( (  chars1936 ) ( ( (  num_dash_lines1148 ) ( ( ( * (  pane4209 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4218 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4219 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4220 = ( (  display_dash_line_dash_numbers4215 ) ? (  op_dash_add159 ( (  op_dash_add159 ( (  max_dash_line_dash_num_dash_chars4217 ) , (  num_dash_front_dash_margin4218 ) ) ) , (  num_dash_back_dash_margin4219 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    ( (  update_dash_screen_dash_offset1939 ) ( (  pane4209 ) ,  (  sd4211 ) ,  (  total_dash_margin4220 ) ) );
    struct ScreenCursorOffset_224  sc_dash_off4221 = ( ( * (  pane4209 ) ) .f_sc_dash_off );
    struct RangeIter_153  temp1942 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( ( (  sc_dash_off4221 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min670 ) ( ( (  num_dash_lines1148 ) ( ( ( * (  pane4209 ) ) .f_buf ) ) ) ,  (  op_dash_add159 ( ( (  sc_dash_off4221 ) .f_screen_dash_top ) , ( (  screen_dash_height1941 ) ( (  sd4211 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1943 =  next156 (&temp1942);
        if (  __cond1943 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4223 =  __cond1943 .stuff .Maybe_155_Just_s .field0;
        int32_t  ybi4224 = (  op_dash_sub164 ( (  line_dash_num4223 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4225 = ( (  vi_dash_bi1150 ) ( ( ( * (  pane4209 ) ) .f_buf ) ,  (  ybi4224 ) ,  ( (  sc_dash_off4221 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4226 = ( (  line1108 ) ( ( ( * (  pane4209 ) ) .f_buf ) ,  (  ybi4224 ) ) );
        int32_t  ys4227 = (  op_dash_sub164 ( (  op_dash_sub164 ( (  op_dash_add159 ( ( (  sd4211 ) .f_from_dash_sy ) , (  line_dash_num4223 ) ) ) , ( (  sc_dash_off4221 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4215 ) ) {
            if ( (  eq570 ( ( ( ( * (  pane4209 ) ) .f_cursor ) .f_line ) , (  ybi4224 ) ) ) ) {
                ( (  set_dash_colors1944 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors1944 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4228 = ( ( ( ! (  relative_dash_line_dash_numbers4216 ) ) || (  eq570 ( ( ( ( * (  pane4209 ) ) .f_cursor ) .f_line ) , (  ybi4224 ) ) ) ) ? (  line_dash_num4223 ) : ( (  abs1946 ) ( (  op_dash_sub164 ( ( ( ( * (  pane4209 ) ) .f_cursor ) .f_line ) , (  ybi4224 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right1947 ) ( (  screen4207 ) ,  (  line_dash_display4228 ) ,  (  op_dash_add159 ( (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen4207 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4211 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4220 ) ) ) , (  num_dash_back_dash_margin4219 ) ) ) ,  (  ys4227 ) ) );
            ( (  set_dash_colors1944 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_default ) ) );
        }
        int32_t  vx4229 = (  op_dash_sub164 ( ( (  pos_dash_vi1106 ) ( ( ( * (  pane4209 ) ) .f_buf ) ,  ( (  mk706 ) ( (  ybi4224 ) ,  (  xbi4225 ) ) ) ) ) , ( (  sc_dash_off4221 ) .f_screen_dash_left ) ) );
        ( (  assert1963 ) ( (  cmp157 ( (  vx4229 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1964_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4229 ) ) ) ) );
        int32_t  left_dash_offset4230 = (  op_dash_add159 ( ( (  sd4211 ) .f_from_dash_sx ) , (  total_dash_margin4220 ) ) );
        struct AppendIter_1971  temp1970 =  into_dash_iter1972 ( ( (  append1973 ) ( ( (  chars471 ) ( ( (  byte_dash_substr_dash_from475 ) ( (  line_dash_content4226 ) ,  ( (  i32_dash_size422 ) ( (  xbi4225 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_299  __cond1974 =  next1975 (&temp1970);
            if (  __cond1974 .tag == 0 ) {
                break;
            }
            struct Char_65  c4232 =  __cond1974 .stuff .Maybe_299_Just_s .field0;
            if ( (  cmp157 ( (  vx4229 ) , ( (  sd4211 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4233 = ( (  mk706 ) ( (  ybi4224 ) ,  (  xbi4225 ) ) );
            bool  is_dash_cursor4234 = (  eq569 ( (  curpos4233 ) , ( ( * (  pane4209 ) ) .f_cursor ) ) );
            bool  in_dash_selection4235 = ( (  is_dash_in_dash_selection1976 ) ( (  pane4209 ) ,  ( (  mk706 ) ( (  ybi4224 ) ,  (  xbi4225 ) ) ) ) );
            if ( (  is_dash_cursor4234 ) ) {
                ( (  set_dash_colors1944 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4235 ) ) {
                    ( (  set_dash_colors1944 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_selection ) ) );
                } else {
                    struct envunion204  temp1982 = ( (struct envunion204){ .fun = (  struct Maybe_205  (*) (  struct env136*  ,    struct TextBuf_106 *  ,    struct Pos_26  ) )highlight_dash_at1983 , .env =  env->envinst136 } );
                    struct env1979 envinst1979 = {
                        .theme4214 =  theme4214 ,
                        .screen4207 =  screen4207 ,
                    };
                    ( (  if_dash_just1978 ) ( ( temp1982.fun ( &temp1982.env ,  ( ( * (  pane4209 ) ) .f_buf ) ,  (  curpos4233 ) ) ) ,  ( (struct envunion1980){ .fun = (  enum Unit_8  (*) (  struct env1979*  ,    enum HighlightType_20  ) )lam2211 , .env =  envinst1979 } ) ) );
                }
            }
            struct Maybe_80  dref4238 = ( (  char_dash_replacement1113 ) ( (  c4232 ) ) );
            if ( dref4238.tag == Maybe_80_None_t ) {
                if ( ( ! ( (  cmp157 ( (  vx4229 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  op_dash_sub164 ( (  op_dash_add159 ( (  vx4229 ) , ( (  char_dash_screen_dash_width1111 ) ( (  c4232 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4211 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1960 ) ( (  screen4207 ) ,  (  c4232 ) ,  (  op_dash_add159 ( (  left_dash_offset4230 ) , (  vx4229 ) ) ) ,  (  ys4227 ) ) );
                }
                vx4229 = (  op_dash_add159 ( (  vx4229 ) , ( (  char_dash_screen_dash_width1111 ) ( (  c4232 ) ) ) ) );
            }
            else {
                if ( dref4238.tag == Maybe_80_Just_t ) {
                    struct StrViewIter_469  temp2241 =  into_dash_iter470 ( ( (  chars471 ) ( ( dref4238 .stuff .Maybe_80_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_299  __cond2242 =  next474 (&temp2241);
                        if (  __cond2242 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4241 =  __cond2242 .stuff .Maybe_299_Just_s .field0;
                        if ( (  cmp157 ( (  vx4229 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1960 ) ( (  screen4207 ) ,  (  c4241 ) ,  (  op_dash_add159 ( (  left_dash_offset4230 ) , (  vx4229 ) ) ) ,  (  ys4227 ) ) );
                        }
                        vx4229 = (  op_dash_add159 ( (  vx4229 ) , ( (  char_dash_screen_dash_width1111 ) ( (  c4241 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors1944 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_default ) ) );
            xbi4225 = (  op_dash_add159 ( (  xbi4225 ) , ( (  size_dash_i32331 ) ( ( (  c4232 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors1944 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_overlay ) ) );
    struct StrView_27  modename4242 = ( (  short_dash_mode_dash_name2243 ) ( ( ( * (  pane4209 ) ) .f_mode ) ) );
    ( (  draw_dash_str2245 ) ( (  screen4207 ) ,  ( ( StrConcat_2246_StrConcat ) ( ( ( StrConcat_2247_StrConcat ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  modename4242 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4211 ) .f_from_dash_sx ) ,  ( (  sd4211 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2260 {
    ;
    ;
    struct Screen_278 *  screen4630;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion2261 {
    enum Unit_8  (*fun) (  struct env2260*  ,    struct StrView_27  );
    struct env2260 env;
};

static  enum Unit_8   if_dash_just2259 (    struct Maybe_80  x1519 ,   struct envunion2261  fun1521 ) {
    struct Maybe_80  dref1522 = (  x1519 );
    if ( dref1522.tag == Maybe_80_Just_t ) {
        struct envunion2261  temp2262 = (  fun1521 );
        ( temp2262.fun ( &temp2262.env ,  ( dref1522 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1522.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2263 (   struct env2260* env ,    struct StrView_27  msg4635 ) {
    int32_t  num_dash_chars4636 = ( (  size_dash_i32331 ) ( ( (  count1115 ) ( ( (  chars471 ) ( (  msg4635 ) ) ) ) ) ) );
    ( (  draw_dash_str2245 ) ( ( env->screen4630 ) ,  ( ( StrConcat_2246_StrConcat ) ( ( ( StrConcat_2247_StrConcat ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  msg4635 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1537 ( (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * ( env->screen4630 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4636 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * ( env->screen4630 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2266 {
    struct StrView_27  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2266 StrConcat_2266_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2266 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2265 {
    struct StrConcat_2266  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2265 StrConcat_2265_StrConcat (  struct StrConcat_2266  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2265 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2264 {
    struct StrConcat_2265  field0;
    struct Char_65  field1;
};

static struct StrConcat_2264 StrConcat_2264_StrConcat (  struct StrConcat_2265  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2264 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2269 {
    struct StrConcatIter_1741  f_left;
    struct StrViewIter_469  f_right;
};

struct StrConcatIter_2268 {
    struct StrConcatIter_2269  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_2268   into_dash_iter2271 (    struct StrConcatIter_2268  self1208 ) {
    return (  self1208 );
}

static  struct Maybe_299   next2273 (    struct StrConcatIter_2269 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next1749 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2272 (    struct StrConcatIter_2268 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2273 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2270 (    struct StrConcatIter_2268  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct StrConcatIter_2268  it1049 = ( (  into_dash_iter2271 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1050 = ( (  next2272 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_299_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_299_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    const char*  temp2274 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2274);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2275;
    return (  temp2275 );
}

static  size_t   lam2276 (    struct Char_65  dref1055 ,    size_t  x1057 ) {
    return (  op_dash_add313 ( (  x1057 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2267 (    struct StrConcatIter_2268  it1054 ) {
    return ( (  reduce2270 ) ( (  it1054 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2276 ) ) );
}

static  struct StrConcatIter_1741   into_dash_iter2282 (    struct StrConcat_2266  dref1215 ) {
    return ( (struct StrConcatIter_1741) { .f_left = ( (  chars471 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1708 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_1741   chars2281 (    struct StrConcat_2266  self1226 ) {
    return ( (  into_dash_iter2282 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_2269   into_dash_iter2280 (    struct StrConcat_2265  dref1215 ) {
    return ( (struct StrConcatIter_2269) { .f_left = ( (  chars2281 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars471 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2269   chars2279 (    struct StrConcat_2265  self1226 ) {
    return ( (  into_dash_iter2280 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_2268   into_dash_iter2278 (    struct StrConcat_2264  dref1215 ) {
    return ( (struct StrConcatIter_2268) { .f_left = ( (  chars2279 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2268   chars2277 (    struct StrConcat_2264  self1226 ) {
    return ( (  into_dash_iter2278 ) ( (  self1226 ) ) );
}

static  enum Unit_8   draw_dash_str2283 (    struct Screen_278 *  screen3643 ,    struct StrConcat_2264  s3645 ,    int32_t  x3647 ,    int32_t  y3649 ) {
    int32_t  w3650 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3643 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3649 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3649 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3643 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3651 = (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3649 ) , (  w3650 ) ) ) , (  x3647 ) ) );
    int32_t  x3652 = ( (  min670 ) ( (  x3647 ) ,  (  w3650 ) ) );
    size_t  max_dash_len3653 = ( (  i32_dash_size422 ) ( (  op_dash_sub164 ( (  w3650 ) , (  x3652 ) ) ) ) );
    int32_t  xx3654 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2268  temp2284 =  into_dash_iter2271 ( ( (  chars2277 ) ( (  s3645 ) ) ) );
    while (true) {
        struct Maybe_299  __cond2285 =  next2272 (&temp2284);
        if (  __cond2285 .tag == 0 ) {
            break;
        }
        struct Char_65  c3656 =  __cond2285 .stuff .Maybe_299_Just_s .field0;
        ( (  put_dash_char1960 ) ( (  screen3643 ) ,  (  c3656 ) ,  (  op_dash_add159 ( (  x3652 ) , (  xx3654 ) ) ) ,  (  y3649 ) ) );
        xx3654 = (  op_dash_add159 ( (  xx3654 ) , ( (  rendered_dash_wcwidth1120 ) ( (  c3656 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2286 {
    struct StrConcat_2265  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2286 StrConcat_2286_StrConcat (  struct StrConcat_2265  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2286 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2288 {
    struct StrConcatIter_2269  f_left;
    struct StrViewIter_469  f_right;
};

static  struct StrConcatIter_2288   into_dash_iter2290 (    struct StrConcatIter_2288  self1208 ) {
    return (  self1208 );
}

static  struct Maybe_299   next2291 (    struct StrConcatIter_2288 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2273 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2289 (    struct StrConcatIter_2288  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct StrConcatIter_2288  it1049 = ( (  into_dash_iter2290 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_299  dref1050 = ( (  next2291 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_299_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_299_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_299_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    const char*  temp2292 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2292);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2293;
    return (  temp2293 );
}

static  size_t   lam2294 (    struct Char_65  dref1055 ,    size_t  x1057 ) {
    return (  op_dash_add313 ( (  x1057 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2287 (    struct StrConcatIter_2288  it1054 ) {
    return ( (  reduce2289 ) ( (  it1054 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2294 ) ) );
}

static  struct StrConcatIter_2288   into_dash_iter2296 (    struct StrConcat_2286  dref1215 ) {
    return ( (struct StrConcatIter_2288) { .f_left = ( (  chars2279 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars471 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2288   chars2295 (    struct StrConcat_2286  self1226 ) {
    return ( (  into_dash_iter2296 ) ( (  self1226 ) ) );
}

static  enum Unit_8   draw_dash_str2297 (    struct Screen_278 *  screen3643 ,    struct StrConcat_2286  s3645 ,    int32_t  x3647 ,    int32_t  y3649 ) {
    int32_t  w3650 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3643 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3649 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3649 ) , ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3643 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3651 = (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3649 ) , (  w3650 ) ) ) , (  x3647 ) ) );
    int32_t  x3652 = ( (  min670 ) ( (  x3647 ) ,  (  w3650 ) ) );
    size_t  max_dash_len3653 = ( (  i32_dash_size422 ) ( (  op_dash_sub164 ( (  w3650 ) , (  x3652 ) ) ) ) );
    int32_t  xx3654 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2288  temp2298 =  into_dash_iter2290 ( ( (  chars2295 ) ( (  s3645 ) ) ) );
    while (true) {
        struct Maybe_299  __cond2299 =  next2291 (&temp2298);
        if (  __cond2299 .tag == 0 ) {
            break;
        }
        struct Char_65  c3656 =  __cond2299 .stuff .Maybe_299_Just_s .field0;
        ( (  put_dash_char1960 ) ( (  screen3643 ) ,  (  c3656 ) ,  (  op_dash_add159 ( (  x3652 ) , (  xx3654 ) ) ) ,  (  y3649 ) ) );
        xx3654 = (  op_dash_add159 ( (  xx3654 ) , ( (  rendered_dash_wcwidth1120 ) ( (  c3656 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1917 (   struct env276* env ,    struct Screen_278 *  screen4630 ,    struct Editor_250 *  ed4632 ) {
    struct ScreenDims_281  screen_dash_dims4633 = ( (struct ScreenDims_281) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen4630 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen4630 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion277  temp1918 = ( (struct envunion277){ .fun = (  enum Unit_8  (*) (  struct env203*  ,    struct Screen_278 *  ,    struct Pane_222 *  ,    struct ScreenDims_281  ,    struct Config_252 *  ) )render1919 , .env =  env->envinst203 } );
    ( temp1918.fun ( &temp1918.env ,  (  screen4630 ) ,  ( (  pane1145 ) ( (  ed4632 ) ) ) ,  (  screen_dash_dims4633 ) ,  ( ( * (  ed4632 ) ) .f_cfg ) ) );
    struct env2260 envinst2260 = {
        .screen4630 =  screen4630 ,
    };
    ( (  if_dash_just2259 ) ( ( ( * (  ed4632 ) ) .f_msg ) ,  ( (struct envunion2261){ .fun = (  enum Unit_8  (*) (  struct env2260*  ,    struct StrView_27  ) )lam2263 , .env =  envinst2260 } ) ) );
    struct EditorMode_251  dref4637 = ( ( * (  ed4632 ) ) .f_mode );
    if ( dref4637.tag == EditorMode_251_Normal_t ) {
    }
    else {
        if ( dref4637.tag == EditorMode_251_Cmd_t ) {
            int32_t  num_dash_chars4639 = ( (  size_dash_i32331 ) ( ( (  count1115 ) ( ( (  chars1708 ) ( ( dref4637 .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4640 = ( (  eq570 ( ( (  mod1536 ) ( (  num_dash_chars4639 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1239 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4641 = (  op_dash_add159 ( (  num_dash_chars4639 ) , ( (  mod1536 ) ( (  num_dash_chars4639 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
            struct StrConcat_2264  full_dash_str4642 = ( ( StrConcat_2264_StrConcat ) ( ( ( StrConcat_2265_StrConcat ) ( ( ( StrConcat_2266_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)" \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4637 .stuff .EditorMode_251_Cmd_s .field1 ) ) ) ,  (  pad4640 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4643 = ( (  size_dash_i32331 ) ( ( (  count2267 ) ( ( (  chars2277 ) ( (  full_dash_str4642 ) ) ) ) ) ) );
            ( (  draw_dash_str2283 ) ( (  screen4630 ) ,  (  full_dash_str4642 ) ,  (  op_dash_div1537 ( (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen4630 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4643 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
        }
        else {
            if ( dref4637.tag == EditorMode_251_Search_t ) {
                int32_t  num_dash_chars4645 = ( (  size_dash_i32331 ) ( ( (  count1115 ) ( ( (  chars1708 ) ( ( dref4637 .stuff .EditorMode_251_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4646 = ( (  eq570 ( ( (  mod1536 ) ( (  num_dash_chars4645 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string201 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1239 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4647 = (  op_dash_add159 ( (  num_dash_chars4645 ) , ( (  mod1536 ) ( (  num_dash_chars4645 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
                struct StrConcat_2286  full_dash_str4648 = ( ( StrConcat_2286_StrConcat ) ( ( ( StrConcat_2265_StrConcat ) ( ( ( StrConcat_2266_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)" \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4637 .stuff .EditorMode_251_Search_s .field1 ) ) ) ,  (  pad4646 ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4649 = ( (  size_dash_i32331 ) ( ( (  count2287 ) ( ( (  chars2295 ) ( (  full_dash_str4648 ) ) ) ) ) ) );
                ( (  draw_dash_str2297 ) ( (  screen4630 ) ,  (  full_dash_str4648 ) ,  (  op_dash_div1537 ( (  op_dash_sub164 ( ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen4630 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4649 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            }
        }
    }
    int32_t  temp2300 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4650 = ( &temp2300 );
    return ( Unit_8_Unit );
}

struct RenderState_2302 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_138  f_fg;
    struct Color_138  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2309 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2309 StrConcat_2309_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2309 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2308 {
    struct StrConcat_2309  field0;
    struct Char_65  field1;
};

static struct StrConcat_2308 StrConcat_2308_StrConcat (  struct StrConcat_2309  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2308 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2307 {
    struct StrConcat_2308  field0;
    uint32_t  field1;
};

static struct StrConcat_2307 StrConcat_2307_StrConcat (  struct StrConcat_2308  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2307 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2306 {
    struct StrConcat_2307  field0;
    struct Char_65  field1;
};

static struct StrConcat_2306 StrConcat_2306_StrConcat (  struct StrConcat_2307  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2306 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2315 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2314 {
    struct StrViewIter_469  f_left;
    struct IntStrIter_2315  f_right;
};

struct StrConcatIter_2313 {
    struct StrConcatIter_2314  f_left;
    struct AppendIter_1035  f_right;
};

struct StrConcatIter_2312 {
    struct StrConcatIter_2313  f_left;
    struct IntStrIter_2315  f_right;
};

struct StrConcatIter_2311 {
    struct StrConcatIter_2312  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_2311   into_dash_iter2317 (    struct StrConcatIter_2311  self1208 ) {
    return (  self1208 );
}

static  struct Maybe_299   next2322 (    struct IntStrIter_2315 *  self1317 ) {
    if ( ( ( * (  self1317 ) ) .f_negative ) ) {
        (*  self1317 ) .f_negative = ( false );
        return ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    uint32_t  trim_dash_down1318 = ( (  pow148 ) ( (  from_dash_integral165 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1319 = (  op_dash_div147 ( ( ( * (  self1317 ) ) .f_int ) , (  trim_dash_down1318 ) ) );
    uint32_t  upper_dash_mask1320 = (  op_dash_mul167 ( (  op_dash_div147 ( (  upper1319 ) , (  from_dash_integral165 ( 10 ) ) ) ) , (  from_dash_integral165 ( 10 ) ) ) );
    uint8_t  digit1321 = ( ( (  cast145 ) ( (  op_dash_sub169 ( (  upper1319 ) , (  upper_dash_mask1320 ) ) ) ) ) );
    (*  self1317 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1322 = ( (  char_dash_from_dash_u81054 ) ( (  op_dash_add944 ( (  digit1321 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_299_Just ) ( (  digit_dash_char1322 ) ) );
}

static  struct Maybe_299   next2321 (    struct StrConcatIter_2314 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next2322 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2320 (    struct StrConcatIter_2313 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2321 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2319 (    struct StrConcatIter_2312 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2320 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next2322 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2318 (    struct StrConcatIter_2311 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2319 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2310 (    struct StrConcatIter_2311  iterable1024 ,    enum Unit_8 (*  fun1026 )(    struct Char_65  ) ) {
    struct StrConcatIter_2311  temp2316 = ( (  into_dash_iter2317 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_2311 *  it1027 = ( &temp2316 );
    while ( ( true ) ) {
        struct Maybe_299  dref1028 = ( (  next2318 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_299_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2333 (    uint32_t  self1325 ) {
    if ( (  eq2235 ( (  self1325 ) , (  from_dash_integral165 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1326 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp170 ( (  self1325 ) , (  from_dash_integral165 ( 0 ) ) ) == 2 ) ) {
        self1325 = (  op_dash_div147 ( (  self1325 ) , (  from_dash_integral165 ( 10 ) ) ) );
        digits1326 = (  op_dash_add159 ( (  digits1326 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1326 );
}

static  struct IntStrIter_2315   uint_dash_iter2332 (    uint32_t  int1332 ) {
    return ( (struct IntStrIter_2315) { .f_int = (  int1332 ) , .f_len = ( (  count_dash_digits2333 ) ( (  int1332 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2315   chars2331 (    uint32_t  self1714 ) {
    return ( (  uint_dash_iter2332 ) ( (  self1714 ) ) );
}

static  struct StrConcatIter_2314   into_dash_iter2330 (    struct StrConcat_2309  dref1215 ) {
    return ( (struct StrConcatIter_2314) { .f_left = ( (  chars471 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars2331 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2314   chars2329 (    struct StrConcat_2309  self1226 ) {
    return ( (  into_dash_iter2330 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_2313   into_dash_iter2328 (    struct StrConcat_2308  dref1215 ) {
    return ( (struct StrConcatIter_2313) { .f_left = ( (  chars2329 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2313   chars2327 (    struct StrConcat_2308  self1226 ) {
    return ( (  into_dash_iter2328 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_2312   into_dash_iter2326 (    struct StrConcat_2307  dref1215 ) {
    return ( (struct StrConcatIter_2312) { .f_left = ( (  chars2327 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars2331 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2312   chars2325 (    struct StrConcat_2307  self1226 ) {
    return ( (  into_dash_iter2326 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_2311   into_dash_iter2324 (    struct StrConcat_2306  dref1215 ) {
    return ( (struct StrConcatIter_2311) { .f_left = ( (  chars2325 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2311   chars2323 (    struct StrConcat_2306  self1226 ) {
    return ( (  into_dash_iter2324 ) ( (  self1226 ) ) );
}

static  enum Unit_8   print2305 (    struct StrConcat_2306  s1253 ) {
    ( (  for_dash_each2310 ) ( ( (  chars2323 ) ( (  s1253 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2304 (    uint32_t  x2572 ,    uint32_t  y2574 ) {
    uint32_t  x2575 = (  op_dash_add171 ( (  x2572 ) , (  from_dash_integral165 ( 1 ) ) ) );
    uint32_t  y2576 = (  op_dash_add171 ( (  y2574 ) , (  from_dash_integral165 ( 1 ) ) ) );
    ( (  print2305 ) ( ( ( StrConcat_2306_StrConcat ) ( ( ( StrConcat_2307_StrConcat ) ( ( ( StrConcat_2308_StrConcat ) ( ( ( StrConcat_2309_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[" ) ,  ( 2 ) ) ) ,  (  y2576 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  (  x2575 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_279   subslice2336 (    struct Slice_279  slice1974 ,    size_t  from1976 ,    size_t  to1978 ) {
    struct Cell_280 *  begin_dash_ptr1979 = ( (  offset_dash_ptr865 ) ( ( (  slice1974 ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  from1976 ) ) ) ) );
    if ( ( (  cmp292 ( (  from1976 ) , (  to1978 ) ) != 0 ) || (  cmp292 ( (  from1976 ) , ( (  slice1974 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_279) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1980 = (  op_dash_sub291 ( ( (  min478 ) ( (  to1978 ) ,  ( (  slice1974 ) .f_count ) ) ) , (  from1976 ) ) );
    return ( (struct Slice_279) { .f_ptr = (  begin_dash_ptr1979 ) , .f_count = (  count1980 ) } );
}

struct SliceIter_2339 {
    struct Slice_279  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2338 {
    struct SliceIter_2339  f_left_dash_it;
    struct SliceIter_2339  f_right_dash_it;
};

struct Tuple2_2340 {
    struct Cell_280  field0;
    struct Cell_280  field1;
};

static struct Tuple2_2340 Tuple2_2340_Tuple2 (  struct Cell_280  field0 ,  struct Cell_280  field1 ) {
    return ( struct Tuple2_2340 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2342 {
    bool (*  fun1085 )(    struct Tuple2_2340  );
};

struct envunion2343 {
    bool  (*fun) (  struct env2342*  ,    struct Tuple2_2340  ,    bool  );
    struct env2342 env;
};

static  struct Zip_2338   into_dash_iter2344 (    struct Zip_2338  self861 ) {
    return (  self861 );
}

struct Maybe_2345 {
    enum {
        Maybe_2345_None_t,
        Maybe_2345_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2340  field0;
        } Maybe_2345_Just_s;
    } stuff;
};

static struct Maybe_2345 Maybe_2345_Just (  struct Tuple2_2340  field0 ) {
    return ( struct Maybe_2345 ) { .tag = Maybe_2345_Just_t, .stuff = { .Maybe_2345_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_870   next2347 (    struct SliceIter_2339 *  self2026 ) {
    size_t  off2027 = ( ( * (  self2026 ) ) .f_current_dash_offset );
    if ( (  cmp292 ( (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2026 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_870) { .tag = Maybe_870_None_t } );
    }
    struct Cell_280  elem2028 = ( * ( (  offset_dash_ptr865 ) ( ( ( ( * (  self2026 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64304 ) ( (  off2027 ) ) ) ) ) );
    (*  self2026 ) .f_current_dash_offset = (  op_dash_add313 ( (  off2027 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_870_Just ) ( (  elem2028 ) ) );
}

static  struct Maybe_2345   next2346 (    struct Zip_2338 *  self864 ) {
    struct Zip_2338  copy865 = ( * (  self864 ) );
    while ( ( true ) ) {
        struct Maybe_870  dref866 = ( (  next2347 ) ( ( & ( (  copy865 ) .f_left_dash_it ) ) ) );
        if ( dref866.tag == Maybe_870_None_t ) {
            return ( (struct Maybe_2345) { .tag = Maybe_2345_None_t } );
        }
        else {
            if ( dref866.tag == Maybe_870_Just_t ) {
                struct Maybe_870  dref868 = ( (  next2347 ) ( ( & ( (  copy865 ) .f_right_dash_it ) ) ) );
                if ( dref868.tag == Maybe_870_None_t ) {
                    return ( (struct Maybe_2345) { .tag = Maybe_2345_None_t } );
                }
                else {
                    if ( dref868.tag == Maybe_870_Just_t ) {
                        ( (  next2347 ) ( ( & ( ( * (  self864 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2347 ) ( ( & ( ( * (  self864 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2345_Just ) ( ( ( Tuple2_2340_Tuple2 ) ( ( dref866 .stuff .Maybe_870_Just_s .field0 ) ,  ( dref868 .stuff .Maybe_870_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2341 (    struct Zip_2338  iterable1043 ,    bool  base1045 ,   struct envunion2343  fun1047 ) {
    bool  x1048 = (  base1045 );
    struct Zip_2338  it1049 = ( (  into_dash_iter2344 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_2345  dref1050 = ( (  next2346 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_2345_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_2345_Just_t ) {
                struct envunion2343  temp2348 = (  fun1047 );
                x1048 = ( temp2348.fun ( &temp2348.env ,  ( dref1050 .stuff .Maybe_2345_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    const char*  temp2349 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2349);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2350;
    return (  temp2350 );
}

static  bool   lam2351 (   struct env2342* env ,    struct Tuple2_2340  e1087 ,    bool  x1089 ) {
    return ( ( ( env->fun1085 ) ( (  e1087 ) ) ) || (  x1089 ) );
}

static  bool   any2337 (    struct Zip_2338  it1083 ,    bool (*  fun1085 )(    struct Tuple2_2340  ) ) {
    struct env2342 envinst2342 = {
        .fun1085 =  fun1085 ,
    };
    return ( (  reduce2341 ) ( (  it1083 ) ,  ( false ) ,  ( (struct envunion2343){ .fun = (  bool  (*) (  struct env2342*  ,    struct Tuple2_2340  ,    bool  ) )lam2351 , .env =  envinst2342 } ) ) );
}

static  struct SliceIter_2339   into_dash_iter2353 (    struct Slice_279  self2020 ) {
    return ( (struct SliceIter_2339) { .f_slice = (  self2020 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2338   zip2352 (    struct Slice_279  left872 ,    struct Slice_279  right874 ) {
    struct SliceIter_2339  left_dash_it875 = ( (  into_dash_iter2353 ) ( (  left872 ) ) );
    struct SliceIter_2339  right_dash_it876 = ( (  into_dash_iter2353 ) ( (  right874 ) ) );
    return ( (struct Zip_2338) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

struct Tuple2_2357 {
    struct Color_138  field0;
    struct Color_138  field1;
};

static struct Tuple2_2357 Tuple2_2357_Tuple2 (  struct Color_138  field0 ,  struct Color_138  field1 ) {
    return ( struct Tuple2_2357 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_139 *   cast2361 (    int32_t *  x357 ) {
    return ( (enum Color8_139 * ) (  x357 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2359 (    enum Color8_139  x600 ) {
    int32_t  temp2360 = ( (  zeroed1016 ) ( ) );
    int32_t *  y601 = ( &temp2360 );
    enum Color8_139 *  yp602 = ( (  cast2361 ) ( (  y601 ) ) );
    (*  yp602 ) = (  x600 );
    return ( * (  y601 ) );
}

static  bool   eq2358 (    enum Color8_139  l2600 ,    enum Color8_139  r2602 ) {
    return (  eq570 ( ( ( (  cast_dash_on_dash_zeroed2359 ) ( (  l2600 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2359 ) ( (  r2602 ) ) ) ) );
}

static  enum Color16_140 *   cast2365 (    int32_t *  x357 ) {
    return ( (enum Color16_140 * ) (  x357 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2363 (    enum Color16_140  x600 ) {
    int32_t  temp2364 = ( (  zeroed1016 ) ( ) );
    int32_t *  y601 = ( &temp2364 );
    enum Color16_140 *  yp602 = ( (  cast2365 ) ( (  y601 ) ) );
    (*  yp602 ) = (  x600 );
    return ( * (  y601 ) );
}

static  bool   eq2362 (    enum Color16_140  l2606 ,    enum Color16_140  r2608 ) {
    return (  eq570 ( ( ( (  cast_dash_on_dash_zeroed2363 ) ( (  l2606 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2363 ) ( (  r2608 ) ) ) ) );
}

static  bool   eq2366 (    struct RGB_141  l2636 ,    struct RGB_141  r2638 ) {
    return ( ( (  eq305 ( ( (  l2636 ) .f_r ) , ( (  r2638 ) .f_r ) ) ) && (  eq305 ( ( (  l2636 ) .f_g ) , ( (  r2638 ) .f_g ) ) ) ) && (  eq305 ( ( (  l2636 ) .f_b ) , ( (  r2638 ) .f_b ) ) ) );
}

static  bool   eq2356 (    struct Color_138  l2658 ,    struct Color_138  r2660 ) {
    return ( {  struct Tuple2_2357  dref2661 = ( ( Tuple2_2357_Tuple2 ) ( (  l2658 ) ,  (  r2660 ) ) ) ; dref2661 .field0.tag == Color_138_ColorDefault_t && dref2661 .field1.tag == Color_138_ColorDefault_t ? ( true ) : dref2661 .field0.tag == Color_138_Color8_t && dref2661 .field1.tag == Color_138_Color8_t ? (  eq2358 ( ( dref2661 .field0 .stuff .Color_138_Color8_s .field0 ) , ( dref2661 .field1 .stuff .Color_138_Color8_s .field0 ) ) ) : dref2661 .field0.tag == Color_138_Color16_t && dref2661 .field1.tag == Color_138_Color16_t ? (  eq2362 ( ( dref2661 .field0 .stuff .Color_138_Color16_s .field0 ) , ( dref2661 .field1 .stuff .Color_138_Color16_s .field0 ) ) ) : dref2661 .field0.tag == Color_138_Color256_t && dref2661 .field1.tag == Color_138_Color256_t ? (  eq305 ( ( dref2661 .field0 .stuff .Color_138_Color256_s .field0 ) , ( dref2661 .field1 .stuff .Color_138_Color256_s .field0 ) ) ) : dref2661 .field0.tag == Color_138_ColorRGB_t && dref2661 .field1.tag == Color_138_ColorRGB_t ? (  eq2366 ( ( dref2661 .field0 .stuff .Color_138_ColorRGB_s .field0 ) , ( dref2661 .field1 .stuff .Color_138_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2355 (    struct Cell_280  l3516 ,    struct Cell_280  r3518 ) {
    if ( ( !  eq480 ( ( (  l3516 ) .f_c ) , ( (  r3518 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2356 ( ( (  l3516 ) .f_fg ) , ( (  r3518 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2356 ( ( (  l3516 ) .f_bg ) , ( (  r3518 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2354 (    struct Tuple2_2340  dref3572 ) {
    return ( !  eq2355 ( ( dref3572 .field0 ) , ( dref3572 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2369 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82370 (    enum Color8_139  color2611 ) {
    enum Color8_139  dref2612 = (  color2611 );
    switch (  dref2612 ) {
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

static  enum Unit_8   set_dash_fg162371 (    enum Color16_140  color2615 ) {
    enum Color16_140  dref2616 = (  color2615 );
    switch (  dref2616 ) {
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

struct StrConcat_2375 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2375 StrConcat_2375_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2375 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2374 {
    struct StrConcat_2375  field0;
    struct Char_65  field1;
};

static struct StrConcat_2374 StrConcat_2374_StrConcat (  struct StrConcat_2375  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2374 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2379 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2378 {
    struct StrViewIter_469  f_left;
    struct IntStrIter_2379  f_right;
};

struct StrConcatIter_2377 {
    struct StrConcatIter_2378  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_2377   into_dash_iter2381 (    struct StrConcatIter_2377  self1208 ) {
    return (  self1208 );
}

struct env2387 {
    uint8_t  base1304;
    ;
};

struct envunion2388 {
    uint8_t  (*fun) (  struct env2387*  ,    int32_t  ,    uint8_t  );
    struct env2387 env;
};

static  uint8_t   reduce2386 (    struct Range_150  iterable1043 ,    uint8_t  base1045 ,   struct envunion2388  fun1047 ) {
    uint8_t  x1048 = (  base1045 );
    struct RangeIter_153  it1049 = ( (  into_dash_iter154 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1050 = ( (  next156 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_155_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_155_Just_t ) {
                struct envunion2388  temp2389 = (  fun1047 );
                x1048 = ( temp2389.fun ( &temp2389.env ,  ( dref1050 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    const char*  temp2390 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2390);
    abort ( );
    ( Unit_8_Unit );
    uint8_t  temp2391;
    return (  temp2391 );
}

static  uint8_t   op_dash_mul2393 (    uint8_t  l261 ,    uint8_t  r263 ) {
    return ( (  l261 ) * (  r263 ) );
}

static  uint8_t   lam2392 (   struct env2387* env ,    int32_t  item1308 ,    uint8_t  x1310 ) {
    return (  op_dash_mul2393 ( (  x1310 ) , ( env->base1304 ) ) );
}

static  uint8_t   pow2385 (    uint8_t  base1304 ,    int32_t  p1306 ) {
    struct env2387 envinst2387 = {
        .base1304 =  base1304 ,
    };
    return ( (  reduce2386 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1306 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral310 ( 1 ) ) ,  ( (struct envunion2388){ .fun = (  uint8_t  (*) (  struct env2387*  ,    int32_t  ,    uint8_t  ) )lam2392 , .env =  envinst2387 } ) ) );
}

static  uint8_t   op_dash_div2394 (    uint8_t  l266 ,    uint8_t  r268 ) {
    return ( (  l266 ) / (  r268 ) );
}

static  uint8_t   cast2395 (    uint8_t  x357 ) {
    return ( (uint8_t ) (  x357 ) );
}

static  struct Maybe_299   next2384 (    struct IntStrIter_2379 *  self1317 ) {
    if ( ( ( * (  self1317 ) ) .f_negative ) ) {
        (*  self1317 ) .f_negative = ( false );
        return ( ( Maybe_299_Just ) ( ( (  from_dash_charlike356 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_299) { .tag = Maybe_299_None_t } );
    }
    uint8_t  trim_dash_down1318 = ( (  pow2385 ) ( (  from_dash_integral310 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1319 = (  op_dash_div2394 ( ( ( * (  self1317 ) ) .f_int ) , (  trim_dash_down1318 ) ) );
    uint8_t  upper_dash_mask1320 = (  op_dash_mul2393 ( (  op_dash_div2394 ( (  upper1319 ) , (  from_dash_integral310 ( 10 ) ) ) ) , (  from_dash_integral310 ( 10 ) ) ) );
    uint8_t  digit1321 = ( ( (  cast2395 ) ( (  op_dash_sub943 ( (  upper1319 ) , (  upper_dash_mask1320 ) ) ) ) ) );
    (*  self1317 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1317 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1322 = ( (  char_dash_from_dash_u81054 ) ( (  op_dash_add944 ( (  digit1321 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_299_Just ) ( (  digit_dash_char1322 ) ) );
}

static  struct Maybe_299   next2383 (    struct StrConcatIter_2378 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next474 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next2384 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2382 (    struct StrConcatIter_2377 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2383 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2376 (    struct StrConcatIter_2377  iterable1024 ,    enum Unit_8 (*  fun1026 )(    struct Char_65  ) ) {
    struct StrConcatIter_2377  temp2380 = ( (  into_dash_iter2381 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_2377 *  it1027 = ( &temp2380 );
    while ( ( true ) ) {
        struct Maybe_299  dref1028 = ( (  next2382 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_299_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2402 (    uint8_t  self1325 ) {
    if ( (  eq305 ( (  self1325 ) , (  from_dash_integral310 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1326 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp309 ( (  self1325 ) , (  from_dash_integral310 ( 0 ) ) ) == 2 ) ) {
        self1325 = (  op_dash_div2394 ( (  self1325 ) , (  from_dash_integral310 ( 10 ) ) ) );
        digits1326 = (  op_dash_add159 ( (  digits1326 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1326 );
}

static  struct IntStrIter_2379   uint_dash_iter2401 (    uint8_t  int1332 ) {
    return ( (struct IntStrIter_2379) { .f_int = (  int1332 ) , .f_len = ( (  count_dash_digits2402 ) ( (  int1332 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2379   chars2400 (    uint8_t  self1720 ) {
    return ( (  uint_dash_iter2401 ) ( (  self1720 ) ) );
}

static  struct StrConcatIter_2378   into_dash_iter2399 (    struct StrConcat_2375  dref1215 ) {
    return ( (struct StrConcatIter_2378) { .f_left = ( (  chars471 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars2400 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2378   chars2398 (    struct StrConcat_2375  self1226 ) {
    return ( (  into_dash_iter2399 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_2377   into_dash_iter2397 (    struct StrConcat_2374  dref1215 ) {
    return ( (struct StrConcatIter_2377) { .f_left = ( (  chars2398 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2377   chars2396 (    struct StrConcat_2374  self1226 ) {
    return ( (  into_dash_iter2397 ) ( (  self1226 ) ) );
}

static  enum Unit_8   print2373 (    struct StrConcat_2374  s1253 ) {
    ( (  for_dash_each2376 ) ( ( (  chars2396 ) ( (  s1253 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562372 (    uint8_t  color2629 ) {
    ( (  print2373 ) ( ( ( StrConcat_2374_StrConcat ) ( ( ( StrConcat_2375_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2629 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2408 {
    struct StrConcat_2374  field0;
    uint8_t  field1;
};

static struct StrConcat_2408 StrConcat_2408_StrConcat (  struct StrConcat_2374  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2408 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2407 {
    struct StrConcat_2408  field0;
    struct Char_65  field1;
};

static struct StrConcat_2407 StrConcat_2407_StrConcat (  struct StrConcat_2408  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2407 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2406 {
    struct StrConcat_2407  field0;
    uint8_t  field1;
};

static struct StrConcat_2406 StrConcat_2406_StrConcat (  struct StrConcat_2407  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2406 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2405 {
    struct StrConcat_2406  field0;
    struct Char_65  field1;
};

static struct StrConcat_2405 StrConcat_2405_StrConcat (  struct StrConcat_2406  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2405 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2413 {
    struct StrConcatIter_2377  f_left;
    struct IntStrIter_2379  f_right;
};

struct StrConcatIter_2412 {
    struct StrConcatIter_2413  f_left;
    struct AppendIter_1035  f_right;
};

struct StrConcatIter_2411 {
    struct StrConcatIter_2412  f_left;
    struct IntStrIter_2379  f_right;
};

struct StrConcatIter_2410 {
    struct StrConcatIter_2411  f_left;
    struct AppendIter_1035  f_right;
};

static  struct StrConcatIter_2410   into_dash_iter2415 (    struct StrConcatIter_2410  self1208 ) {
    return (  self1208 );
}

static  struct Maybe_299   next2419 (    struct StrConcatIter_2413 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2382 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next2384 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2418 (    struct StrConcatIter_2412 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2419 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2417 (    struct StrConcatIter_2411 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2418 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next2384 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_299   next2416 (    struct StrConcatIter_2410 *  self1211 ) {
    struct Maybe_299  dref1212 = ( (  next2417 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_299_Just_t ) {
        return ( ( Maybe_299_Just ) ( ( dref1212 .stuff .Maybe_299_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_299_None_t ) {
            return ( (  next1057 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2409 (    struct StrConcatIter_2410  iterable1024 ,    enum Unit_8 (*  fun1026 )(    struct Char_65  ) ) {
    struct StrConcatIter_2410  temp2414 = ( (  into_dash_iter2415 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_2410 *  it1027 = ( &temp2414 );
    while ( ( true ) ) {
        struct Maybe_299  dref1028 = ( (  next2416 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_299_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_299_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_299_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2413   into_dash_iter2427 (    struct StrConcat_2408  dref1215 ) {
    return ( (struct StrConcatIter_2413) { .f_left = ( (  chars2396 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars2400 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2413   chars2426 (    struct StrConcat_2408  self1226 ) {
    return ( (  into_dash_iter2427 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_2412   into_dash_iter2425 (    struct StrConcat_2407  dref1215 ) {
    return ( (struct StrConcatIter_2412) { .f_left = ( (  chars2426 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2412   chars2424 (    struct StrConcat_2407  self1226 ) {
    return ( (  into_dash_iter2425 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_2411   into_dash_iter2423 (    struct StrConcat_2406  dref1215 ) {
    return ( (struct StrConcatIter_2411) { .f_left = ( (  chars2424 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars2400 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2411   chars2422 (    struct StrConcat_2406  self1226 ) {
    return ( (  into_dash_iter2423 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_2410   into_dash_iter2421 (    struct StrConcat_2405  dref1215 ) {
    return ( (struct StrConcatIter_2410) { .f_left = ( (  chars2422 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars1071 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_2410   chars2420 (    struct StrConcat_2405  self1226 ) {
    return ( (  into_dash_iter2421 ) ( (  self1226 ) ) );
}

static  enum Unit_8   print2404 (    struct StrConcat_2405  s1253 ) {
    ( (  for_dash_each2409 ) ( ( (  chars2420 ) ( (  s1253 ) ) ) ,  (  printf_dash_char338 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2403 (    struct RGB_141  c2651 ) {
    ( (  print2404 ) ( ( ( StrConcat_2405_StrConcat ) ( ( ( StrConcat_2406_StrConcat ) ( ( ( StrConcat_2407_StrConcat ) ( ( ( StrConcat_2408_StrConcat ) ( ( ( StrConcat_2374_StrConcat ) ( ( ( StrConcat_2375_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2651 ) .f_r ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2651 ) .f_g ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2651 ) .f_b ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2368 (    struct Color_138  c2672 ) {
    struct Color_138  dref2673 = (  c2672 );
    if ( dref2673.tag == Color_138_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2369 ) ( ) );
    }
    else {
        if ( dref2673.tag == Color_138_Color8_t ) {
            ( (  set_dash_fg82370 ) ( ( dref2673 .stuff .Color_138_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2673.tag == Color_138_Color16_t ) {
                ( (  set_dash_fg162371 ) ( ( dref2673 .stuff .Color_138_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2673.tag == Color_138_Color256_t ) {
                    ( (  set_dash_fg2562372 ) ( ( dref2673 .stuff .Color_138_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2673.tag == Color_138_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2403 ) ( ( dref2673 .stuff .Color_138_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2429 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82430 (    enum Color8_139  color2619 ) {
    enum Color8_139  dref2620 = (  color2619 );
    switch (  dref2620 ) {
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

static  enum Unit_8   set_dash_bg162431 (    enum Color16_140  color2623 ) {
    enum Color16_140  dref2624 = (  color2623 );
    switch (  dref2624 ) {
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

static  enum Unit_8   set_dash_bg2562432 (    uint8_t  color2632 ) {
    ( (  print2373 ) ( ( ( StrConcat_2374_StrConcat ) ( ( ( StrConcat_2375_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2632 ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2433 (    struct RGB_141  c2654 ) {
    ( (  print2404 ) ( ( ( StrConcat_2405_StrConcat ) ( ( ( StrConcat_2406_StrConcat ) ( ( ( StrConcat_2407_StrConcat ) ( ( ( StrConcat_2408_StrConcat ) ( ( ( StrConcat_2374_StrConcat ) ( ( ( StrConcat_2375_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2654 ) .f_r ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2654 ) .f_g ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2654 ) .f_b ) ) ) ,  ( (  from_dash_charlike356 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2428 (    struct Color_138  c2680 ) {
    struct Color_138  dref2681 = (  c2680 );
    if ( dref2681.tag == Color_138_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2429 ) ( ) );
    }
    else {
        if ( dref2681.tag == Color_138_Color8_t ) {
            ( (  set_dash_bg82430 ) ( ( dref2681 .stuff .Color_138_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2681.tag == Color_138_Color16_t ) {
                ( (  set_dash_bg162431 ) ( ( dref2681 .stuff .Color_138_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2681.tag == Color_138_Color256_t ) {
                    ( (  set_dash_bg2562432 ) ( ( dref2681 .stuff .Color_138_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2681.tag == Color_138_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2433 ) ( ( dref2681 .stuff .Color_138_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322434 (    int32_t  x630 ) {
    return ( (uint32_t ) (  x630 ) );
}

static  enum Unit_8   emit_dash_cell2367 (    struct RenderState_2302 *  rs3548 ,    struct Cell_280 *  c3550 ,    uint32_t  x3552 ,    uint32_t  y3554 ) {
    if ( ( ( !  eq2235 ( (  x3552 ) , ( ( * (  rs3548 ) ) .f_x ) ) ) || ( !  eq2235 ( (  y3554 ) , ( ( * (  rs3548 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2304 ) ( (  x3552 ) ,  (  y3554 ) ) );
        (*  rs3548 ) .f_x = (  x3552 );
        (*  rs3548 ) .f_y = (  y3554 );
    }
    struct Char_65  char3555 = ( ( * (  c3550 ) ) .f_c );
    struct Color_138  bg3556 = ( ( * (  c3550 ) ) .f_bg );
    if ( (  eq570 ( ( ( * (  c3550 ) ) .f_char_dash_width ) , (  op_dash_neg816 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3555 = ( (  from_dash_charlike356 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) );
        bg3556 = ( ( Color_138_Color8 ) ( ( Color8_139_Red8 ) ) );
    }
    if ( ( !  eq2356 ( ( ( * (  rs3548 ) ) .f_fg ) , ( ( * (  c3550 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2368 ) ( ( ( * (  c3550 ) ) .f_fg ) ) );
        (*  rs3548 ) .f_fg = ( ( * (  c3550 ) ) .f_fg );
    }
    if ( ( !  eq2356 ( ( ( * (  rs3548 ) ) .f_bg ) , (  bg3556 ) ) ) ) {
        ( (  set_dash_bg2428 ) ( (  bg3556 ) ) );
        (*  rs3548 ) .f_bg = (  bg3556 );
    }
    ( (  print_dash_str337 ) ( (  char3555 ) ) );
    uint32_t  char_dash_width3557 = ( (  i32_dash_u322434 ) ( ( (  max1121 ) ( ( ( * (  c3550 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3548 ) .f_x = (  op_dash_add171 ( ( ( * (  rs3548 ) ) .f_x ) , (  char_dash_width3557 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2437 {
    struct SliceIter_2339  f_left_dash_it;
    struct FromIter_426  f_right_dash_it;
};

struct env2438 {
    ;
    struct Slice_279  dest2051;
    ;
};

struct Tuple2_2440 {
    struct Cell_280  field0;
    int32_t  field1;
};

static struct Tuple2_2440 Tuple2_2440_Tuple2 (  struct Cell_280  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2440 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2439 {
    enum Unit_8  (*fun) (  struct env2438*  ,    struct Tuple2_2440  );
    struct env2438 env;
};

static  struct Zip_2437   into_dash_iter2442 (    struct Zip_2437  self861 ) {
    return (  self861 );
}

struct Maybe_2443 {
    enum {
        Maybe_2443_None_t,
        Maybe_2443_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2440  field0;
        } Maybe_2443_Just_s;
    } stuff;
};

static struct Maybe_2443 Maybe_2443_Just (  struct Tuple2_2440  field0 ) {
    return ( struct Maybe_2443 ) { .tag = Maybe_2443_Just_t, .stuff = { .Maybe_2443_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2443   next2444 (    struct Zip_2437 *  self864 ) {
    struct Zip_2437  copy865 = ( * (  self864 ) );
    while ( ( true ) ) {
        struct Maybe_870  dref866 = ( (  next2347 ) ( ( & ( (  copy865 ) .f_left_dash_it ) ) ) );
        if ( dref866.tag == Maybe_870_None_t ) {
            return ( (struct Maybe_2443) { .tag = Maybe_2443_None_t } );
        }
        else {
            if ( dref866.tag == Maybe_870_Just_t ) {
                struct Maybe_155  dref868 = ( (  next432 ) ( ( & ( (  copy865 ) .f_right_dash_it ) ) ) );
                if ( dref868.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_2443) { .tag = Maybe_2443_None_t } );
                }
                else {
                    if ( dref868.tag == Maybe_155_Just_t ) {
                        ( (  next2347 ) ( ( & ( ( * (  self864 ) ) .f_left_dash_it ) ) ) );
                        ( (  next432 ) ( ( & ( ( * (  self864 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2443_Just ) ( ( ( Tuple2_2440_Tuple2 ) ( ( dref866 .stuff .Maybe_870_Just_s .field0 ) ,  ( dref868 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2436 (    struct Zip_2437  iterable1024 ,   struct envunion2439  fun1026 ) {
    struct Zip_2437  temp2441 = ( (  into_dash_iter2442 ) ( (  iterable1024 ) ) );
    struct Zip_2437 *  it1027 = ( &temp2441 );
    while ( ( true ) ) {
        struct Maybe_2443  dref1028 = ( (  next2444 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_2443_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_2443_Just_t ) {
                struct envunion2439  temp2445 = (  fun1026 );
                ( temp2445.fun ( &temp2445.env ,  ( dref1028 .stuff .Maybe_2443_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2437   zip2446 (    struct Slice_279  left872 ,    struct FromIter_426  right874 ) {
    struct SliceIter_2339  left_dash_it875 = ( (  into_dash_iter2353 ) ( (  left872 ) ) );
    struct FromIter_426  right_dash_it876 = ( (  into_dash_iter436 ) ( (  right874 ) ) );
    return ( (struct Zip_2437) { .f_left_dash_it = (  left_dash_it875 ) , .f_right_dash_it = (  right_dash_it876 ) } );
}

static  enum Unit_8   lam2447 (   struct env2438* env ,    struct Tuple2_2440  dref2052 ) {
    return ( (  set863 ) ( ( env->dest2051 ) ,  ( (  i32_dash_size422 ) ( ( dref2052 .field1 ) ) ) ,  ( dref2052 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2435 (    struct Slice_279  src2049 ,    struct Slice_279  dest2051 ) {
    if ( (  cmp292 ( ( (  src2049 ) .f_count ) , ( (  dest2051 ) .f_count ) ) == 2 ) ) {
        ( (  panic524 ) ( ( ( StrConcat_525_StrConcat ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2049 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2051 ) .f_count ) ) ) ,  ( (  from_dash_string201 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2438 envinst2438 = {
        .dest2051 =  dest2051 ,
    };
    ( (  for_dash_each2436 ) ( ( (  zip2446 ) ( (  src2049 ) ,  ( (  from437 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2439){ .fun = (  enum Unit_8  (*) (  struct env2438*  ,    struct Tuple2_2440  ) )lam2447 , .env =  envinst2438 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2301 (    struct Screen_278 *  screen3560 ) {
    int32_t  w3561 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3560 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3562 = ( (  u32_dash_i321905 ) ( ( ( * ( ( * (  screen3560 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2302  temp2303 = ( (struct RenderState_2302) { .f_x = (  from_dash_integral165 ( 0 ) ) , .f_y = (  from_dash_integral165 ( 0 ) ) , .f_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_changes = (  from_dash_integral165 ( 0 ) ) } );
    struct RenderState_2302 *  rs3563 = ( &temp2303 );
    ( (  move_dash_cursor_dash_to2304 ) ( (  from_dash_integral165 ( 0 ) ) ,  (  from_dash_integral165 ( 0 ) ) ) );
    struct RangeIter_153  temp2334 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  h3562 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond2335 =  next156 (&temp2334);
        if (  __cond2335 .tag == 0 ) {
            break;
        }
        int32_t  y3565 =  __cond2335 .stuff .Maybe_155_Just_s .field0;
        int32_t  x_dash_v3566 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp157 ( (  x_dash_v3566 ) , (  w3561 ) ) == 0 ) ) {
            size_t  i3567 = ( (  i32_dash_size422 ) ( (  op_dash_add159 ( (  op_dash_mul1538 ( (  y3565 ) , (  w3561 ) ) ) , (  x_dash_v3566 ) ) ) ) );
            struct Cell_280 *  cur3568 = ( (  get_dash_ptr864 ) ( ( ( * (  screen3560 ) ) .f_current ) ,  (  i3567 ) ) );
            int32_t  char_dash_width3569 = ( (  max1121 ) ( ( ( * (  cur3568 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_279  curs3570 = ( (  subslice2336 ) ( ( ( * (  screen3560 ) ) .f_current ) ,  (  i3567 ) ,  (  op_dash_add313 ( (  i3567 ) , ( (  i32_dash_size422 ) ( (  char_dash_width3569 ) ) ) ) ) ) );
            struct Slice_279  prevs3571 = ( (  subslice2336 ) ( ( ( * (  screen3560 ) ) .f_previous ) ,  (  i3567 ) ,  (  op_dash_add313 ( (  i3567 ) , ( (  i32_dash_size422 ) ( (  char_dash_width3569 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3560 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2337 ) ( ( (  zip2352 ) ( (  curs3570 ) ,  (  prevs3571 ) ) ) ,  (  lam2354 ) ) ) ) ) {
                (*  rs3563 ) .f_changes = (  op_dash_add171 ( ( ( * (  rs3563 ) ) .f_changes ) , (  from_dash_integral165 ( 1 ) ) ) );
                ( (  emit_dash_cell2367 ) ( (  rs3563 ) ,  (  cur3568 ) ,  ( (  i32_dash_u322434 ) ( (  x_dash_v3566 ) ) ) ,  ( (  i32_dash_u322434 ) ( (  y3565 ) ) ) ) );
                ( (  copy_dash_to2435 ) ( (  curs3570 ) ,  (  prevs3571 ) ) );
            }
            x_dash_v3566 = (  op_dash_add159 ( (  x_dash_v3566 ) , (  char_dash_width3569 ) ) );
        }
    }
    (*  screen3560 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors790 ) ( ) );
    ( (  flush_dash_stdout793 ) ( ) );
    return ( ( * (  rs3563 ) ) .f_changes );
}

static  void *   cast_dash_ptr2454 (    struct timespec * *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  size_t   size_dash_of2455 (    struct timespec *  x351 ) {
    return ( sizeof( (  x351 ) ) );
}

static  struct timespec *   zeroed2452 (  ) {
    struct timespec *  temp2453;
    struct timespec *  x597 = (  temp2453 );
    ( ( memset ) ( ( (  cast_dash_ptr2454 ) ( ( & (  x597 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2455 ) ( (  x597 ) ) ) ) );
    return (  x597 );
}

static  struct timespec *   null_dash_ptr2451 (  ) {
    return ( (  zeroed2452 ) ( ) );
}

static  enum Unit_8   sync2448 (    struct Tui_90 *  tui3431 ) {
    if ( (  eq2235 ( ( ( * (  tui3431 ) ) .f_target_dash_fps ) , (  from_dash_integral165 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3432 = (  op_dash_div1051 ( (  from_dash_integral290 ( 1000000000 ) ) , ( (  size_dash_i64304 ) ( ( (  u32_dash_size848 ) ( ( ( * (  tui3431 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2449 = ( (  undefined829 ) ( ) );
    struct timespec *  now3433 = ( &temp2449 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic831 ) ( ) ) ,  (  now3433 ) ) );
    int64_t  elapsed_dash_ns3434 = (  op_dash_add485 ( (  op_dash_mul288 ( (  op_dash_sub1053 ( ( ( * (  now3433 ) ) .tv_sec ) , ( ( ( * (  tui3431 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral290 ( 1000000000 ) ) ) ) , (  op_dash_sub1053 ( ( ( * (  now3433 ) ) .tv_nsec ) , ( ( ( * (  tui3431 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3435 = (  op_dash_sub1053 ( (  frame_dash_ns3432 ) , (  elapsed_dash_ns3434 ) ) );
    if ( (  cmp1067 ( (  sleep_dash_ns3435 ) , (  from_dash_integral290 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2450 = ( (struct timespec) { .tv_sec = (  from_dash_integral290 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3435 ) } );
        struct timespec *  ts3436 = ( &temp2450 );
        ( ( nanosleep ) ( (  ts3436 ) ,  ( (  null_dash_ptr2451 ) ( ) ) ) );
    }
    struct timespec  temp2456 = ( (  undefined829 ) ( ) );
    struct timespec *  last_dash_sync3437 = ( &temp2456 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic831 ) ( ) ) ,  (  last_dash_sync3437 ) ) );
    (*  tui3431 ) .f_last_dash_sync = ( * (  last_dash_sync3437 ) );
    (*  tui3431 ) .f_fps_dash_count = (  op_dash_add171 ( ( ( * (  tui3431 ) ) .f_fps_dash_count ) , (  from_dash_integral165 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3438 = (  op_dash_add485 ( (  op_dash_mul288 ( (  op_dash_sub1053 ( ( ( ( * (  tui3431 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3431 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral290 ( 1000 ) ) ) ) , (  op_dash_div1051 ( (  op_dash_sub1053 ( ( ( ( * (  tui3431 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3431 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral290 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1067 ( (  fps_dash_elapsed_dash_ms3438 ) , (  from_dash_integral290 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3431 ) .f_actual_dash_fps = ( ( * (  tui3431 ) ) .f_fps_dash_count );
        (*  tui3431 ) .f_fps_dash_count = (  from_dash_integral165 ( 0 ) );
        (*  tui3431 ) .f_fps_dash_ts = ( ( * (  tui3431 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2459 (    struct Cell_280 *  p360 ) {
    return ( (void * ) (  p360 ) );
}

static  enum Unit_8   free2458 (    enum CAllocator_10  dref2144 ,    struct Slice_279  slice2146 ) {
    if (!(  dref2144 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2459 ) ( ( (  slice2146 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2457 (    struct Screen_278 *  screen3536 ) {
    enum CAllocator_10  al3537 = ( ( * (  screen3536 ) ) .f_al );
    ( (  free2458 ) ( (  al3537 ) ,  ( ( * (  screen3536 ) ) .f_current ) ) );
    ( (  free2458 ) ( (  al3537 ) ,  ( ( * (  screen3536 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2461 (  ) {
    ( (  print_dash_str330 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2462 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2463 (  ) {
    ( (  print787 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2464 (    struct Termios_92 *  og_dash_termios3411 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  tcsa_dash_flush785 ) ( ) ) ,  ( (  cast_dash_ptr723 ) ( (  og_dash_termios3411 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2460 (    struct Tui_90 *  tui3441 ) {
    ( (  disable_dash_mouse2461 ) ( ) );
    ( (  show_dash_cursor2462 ) ( ) );
    ( (  reset_dash_colors790 ) ( ) );
    ( (  clear_dash_screen791 ) ( ) );
    ( (  reset_dash_cursor_dash_position2463 ) ( ) );
    ( (  disable_dash_raw_dash_mode2464 ) ( ( & ( ( * (  tui3441 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout793 ) ( ) );
    return ( Unit_8_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2212 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2213 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2214 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .starting_dash_size2212 =  starting_dash_size2212 ,
        .growth_dash_factor2213 =  growth_dash_factor2213 ,
    };
    struct env2 envinst2 = {
        .starting_dash_size2212 =  starting_dash_size2212 ,
        .growth_dash_factor2213 =  growth_dash_factor2213 ,
    };
    struct env3 envinst3 = {
        .starting_dash_size2212 =  starting_dash_size2212 ,
        .growth_dash_factor2213 =  growth_dash_factor2213 ,
    };
    struct env4 envinst4 = {
        .starting_dash_size2212 =  starting_dash_size2212 ,
        .growth_dash_factor2213 =  growth_dash_factor2213 ,
    };
    struct env5 envinst5 = {
        .starting_dash_size2212 =  starting_dash_size2212 ,
        .growth_dash_factor2213 =  growth_dash_factor2213 ,
    };
    struct env6 envinst6 = {
        .envinst1 = envinst1 ,
    };
    struct env12 envinst12 = {
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
        .envinst12 = envinst12 ,
        .envinst2 = envinst2 ,
    };
    struct env40 envinst40 = {
        .shrink_dash_factor2214 =  shrink_dash_factor2214 ,
    };
    struct env41 envinst41 = {
        .shrink_dash_factor2214 =  shrink_dash_factor2214 ,
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
        .envinst12 = envinst12 ,
    };
    struct env50 envinst50 = {
        .envinst46 = envinst46 ,
    };
    struct env52 envinst52 = {
        .envinst48 = envinst48 ,
    };
    ( ( setlocale ) ( ( (  lc_dash_ctype55 ) ( ) ) ,  ( (  from_dash_string57 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    struct env58 envinst58 = {
        .envinst46 = envinst46 ,
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
        .envinst63 = envinst63 ,
    };
    struct env72 envinst72 = {
        .envinst44 = envinst44 ,
    };
    struct env74 envinst74 = {
        .envinst60 = envinst60 ,
        .envinst66 = envinst66 ,
    };
    struct env77 envinst77 = {
        .envinst60 = envinst60 ,
        .envinst67 = envinst67 ,
    };
    struct env81 envinst81 = {
        .envinst60 = envinst60 ,
        .envinst68 = envinst68 ,
    };
    bool  temp85 = ( false );
    bool *  should_dash_resize3421 = ( &temp85 );
    struct env86 envinst86 = {
        .should_dash_resize3421 =  should_dash_resize3421 ,
    };
    struct env87 envinst87 = {
        .should_dash_resize3421 =  should_dash_resize3421 ,
    };
    struct env88 envinst88 = {
        .envinst87 = envinst87 ,
    };
    struct env94 envinst94 = {
        .envinst87 = envinst87 ,
    };
    struct env96 envinst96 = {
        .envinst37 = envinst37 ,
        .envinst46 = envinst46 ,
        .envinst50 = envinst50 ,
    };
    struct env100 envinst100 = {
        .envinst12 = envinst12 ,
        .envinst46 = envinst46 ,
        .envinst40 = envinst40 ,
        .envinst41 = envinst41 ,
        .envinst96 = envinst96 ,
    };
    struct env110 envinst110 = {
        .envinst69 = envinst69 ,
    };
    struct env112 envinst112 = {
        .envinst52 = envinst52 ,
    };
    struct env114 envinst114 = {
        .envinst100 = envinst100 ,
        .envinst112 = envinst112 ,
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
        .envinst46 = envinst46 ,
    };
    struct env127 envinst127 = {
        .envinst119 = envinst119 ,
        .envinst21 = envinst21 ,
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
    struct Color_138  camel4078 = ( (  rgb142 ) ( (  from_dash_integral165 ( 11766360 ) ) ) );
    struct Color_138  olive4079 = ( (  rgb142 ) ( (  from_dash_integral165 ( 7303983 ) ) ) );
    struct Color_138  tea_dash_green4080 = ( (  rgb142 ) ( (  from_dash_integral165 ( 14875064 ) ) ) );
    struct Color_138  chocolate4081 = ( (  rgb142 ) ( (  from_dash_integral165 ( 13721620 ) ) ) );
    struct Color_138  muted_dash_olive4082 = ( (  rgb142 ) ( (  from_dash_integral165 ( 12308106 ) ) ) );
    struct Color_138  palm_dash_leaf4083 = ( (  rgb142 ) ( (  from_dash_integral165 ( 9674588 ) ) ) );
    struct Color_138  lime_dash_green4084 = ( (  rgb142 ) ( (  from_dash_integral165 ( 3263232 ) ) ) );
    struct Color_138  forest_dash_green4085 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1153058 ) ) ) );
    struct Color_138  green4086 = ( (  rgb142 ) ( (  from_dash_integral165 ( 2781729 ) ) ) );
    struct Color_138  dark_dash_spruce4087 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1983518 ) ) ) );
    struct Color_138  evergreen4088 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1386004 ) ) ) );
    struct Array_179  temp183 = ( (struct Array_179) { ._arr = { ( (  hlt184 ) ( ( HighlightType_20_Number ) ,  (  green4086 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_String ) ,  (  camel4078 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_Comment ) ,  (  dark_dash_spruce4087 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_Ident1 ) ,  (  lime_dash_green4084 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_Ident2 ) ,  (  muted_dash_olive4082 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_Ident3 ) ,  (  tea_dash_green4080 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_Ident4 ) ,  (  palm_dash_leaf4083 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_Keyword1 ) ,  (  tea_dash_green4080 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_Keyword2 ) ,  (  chocolate4081 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_Special1 ) ,  (  olive4079 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_Special2 ) ,  (  forest_dash_green4085 ) ) ) , ( (  hlt184 ) ( ( HighlightType_20_Special3 ) ,  (  camel4078 ) ) ) , ( (struct HighlightColors_175) { .f_type = ( HighlightType_20_Invalid ) , .f_fg = (  evergreen4088 ) , .f_bg = ( ( Maybe_176_Just ) ( ( ( Color_138_Color8 ) ( ( Color8_139_Red8 ) ) ) ) ) } ) } } );
    struct Array_179  temp181 = ( (  from_dash_listlike182 ) ( ( &temp183 ) ) );
    struct Theme_172  temp177 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = (  evergreen4088 ) , .f_fg = (  lime_dash_green4084 ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = (  lime_dash_green4084 ) , .f_fg = (  evergreen4088 ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = (  forest_dash_green4085 ) , .f_fg = (  evergreen4088 ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = (  evergreen4088 ) , .f_fg = (  forest_dash_green4085 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = (  evergreen4088 ) , .f_fg = (  tea_dash_green4080 ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = (  dark_dash_spruce4087 ) , .f_fg = (  lime_dash_green4084 ) } ) , .f_highlights = ( (  as_dash_slice178 ) ( ( &temp181 ) ) ) } );
    struct Theme_172 *  goblin_dash_ultra4089 = ( &temp177 );
    struct Theme_172  temp185 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_highlights = ( (  empty186 ) ( ) ) } );
    struct Theme_172 *  dark_dash_theme4090 = ( &temp185 );
    struct Theme_172  temp192 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_White16 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_highlights = ( (  empty186 ) ( ) ) } );
    struct Theme_172 *  light_dash_theme4091 = ( &temp192 );
    struct Theme_172 *  default4092 = (  goblin_dash_ultra4089 );
    struct Array_196  temp200 = ( (struct Array_196) { ._arr = { ( ( Tuple2_194_Tuple2 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"default" ) ,  ( 7 ) ) ) ,  (  default4092 ) ) ) , ( ( Tuple2_194_Tuple2 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra4089 ) ) ) , ( ( Tuple2_194_Tuple2 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme4090 ) ) ) , ( ( Tuple2_194_Tuple2 ) ( ( (  from_dash_string201 ) ( ( (uint8_t*)"light-mono" ) ,  ( 10 ) ) ) ,  (  light_dash_theme4091 ) ) ) } } );
    struct Array_196  temp198 = ( (  from_dash_listlike199 ) ( ( &temp200 ) ) );
    struct Slice_193  all_dash_themes4093 = ( (  as_dash_slice195 ) ( ( &temp198 ) ) );
    struct env202 envinst202 = {
        .all_dash_themes4093 =  all_dash_themes4093 ,
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
        .envinst132 = envinst132 ,
        .envinst217 = envinst217 ,
    };
    struct env225 envinst225 = {
        .envinst132 = envinst132 ,
        .envinst127 = envinst127 ,
    };
    struct env228 envinst228 = {
        .envinst217 = envinst217 ,
    };
    struct env230 envinst230 = {
        .envinst132 = envinst132 ,
        .envinst215 = envinst215 ,
        .envinst206 = envinst206 ,
    };
    struct env235 envinst235 = {
        .envinst125 = envinst125 ,
    };
    struct env237 envinst237 = {
        .envinst74 = envinst74 ,
    };
    struct env239 envinst239 = {
        .envinst77 = envinst77 ,
    };
    struct env241 envinst241 = {
        .envinst81 = envinst81 ,
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
        .envinst225 = envinst225 ,
        .envinst211 = envinst211 ,
        .envinst213 = envinst213 ,
        .envinst219 = envinst219 ,
        .envinst235 = envinst235 ,
        .envinst215 = envinst215 ,
        .envinst228 = envinst228 ,
        .envinst241 = envinst241 ,
        .envinst206 = envinst206 ,
        .envinst230 = envinst230 ,
    };
    struct env266 envinst266 = {
        .envinst243 = envinst243 ,
        .envinst209 = envinst209 ,
        .envinst60 = envinst60 ,
        .envinst72 = envinst72 ,
        .envinst255 = envinst255 ,
        .envinst228 = envinst228 ,
        .envinst246 = envinst246 ,
        .envinst206 = envinst206 ,
    };
    struct env276 envinst276 = {
        .envinst203 = envinst203 ,
    };
    enum CAllocator_10  al4654 = ( (  idc282 ) ( ) );
    struct TextBuf_106  temp284;
    struct TextBuf_106  temp283 = (  temp284 );
    struct TextBuf_106 *  tb4655 = ( &temp283 );
    struct Slice_285  args4658 = ( (  get286 ) ( ) );
    struct Maybe_80  initial_dash_message4659 = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    if ( (  cmp292 ( ( (  args4658 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4660 = ( (  from_dash_const_dash_str293 ) ( (  elem_dash_get319 ( (  args4658 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion363  temp362 = ( (struct envunion363){ .fun = (  struct Maybe_361  (*) (  struct env114*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file364 , .env =  envinst114 } );
        struct Maybe_361  dref4661 = ( temp362.fun ( &temp362.env ,  (  al4654 ) ,  (  fname4660 ) ) );
        if ( dref4661.tag == Maybe_361_None_t ) {
            struct envunion708  temp707 = ( (struct envunion708){ .fun = (  struct TextBuf_106  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk367 , .env =  envinst112 } );
            (*  tb4655 ) = ( temp707.fun ( &temp707.env ,  (  al4654 ) ) );
            (*  tb4655 ) .f_filename = ( ( Maybe_80_Just ) ( ( (  clone_dash_0517 ) ( (  fname4660 ) ,  (  al4654 ) ) ) ) );
        }
        else {
            if ( dref4661.tag == Maybe_361_Just_t ) {
                (*  tb4655 ) = ( dref4661 .stuff .Maybe_361_Just_s .field0 );
            }
        }
    } else {
        struct envunion710  temp709 = ( (struct envunion710){ .fun = (  struct TextBuf_106  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk367 , .env =  envinst112 } );
        (*  tb4655 ) = ( temp709.fun ( &temp709.env ,  (  al4654 ) ) );
    }
    struct Config_252  temp711 = ( (struct Config_252) { .f_theme = (  default4092 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_252 *  cfg4663 = ( &temp711 );
    struct Editor_250  temp712 = ( (struct Editor_250) { .f_running = ( true ) , .f_al = (  al4654 ) , .f_pane = ( (  mk713 ) ( (  al4654 ) ,  (  tb4655 ) ) ) , .f_clipboard = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_search_dash_term = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_mode = ( (struct EditorMode_251) { .tag = EditorMode_251_Normal_t } ) , .f_msg = (  initial_dash_message4659 ) , .f_cfg = (  cfg4663 ) , .f_og_dash_theme = (  default4092 ) } );
    struct Editor_250 *  ed4664 = ( &temp712 );
    struct envunion716  temp715 = ( (struct envunion716){ .fun = (  struct Tui_90  (*) (  struct env86*  ) )mk717 , .env =  envinst86 } );
    struct Tui_90  temp714 = ( temp715.fun ( &temp715.env ) );
    struct Tui_90 *  tui4665 = ( &temp714 );
    struct Screen_278  temp841 = ( (  mk_dash_screen842 ) ( (  tui4665 ) ,  (  al4654 ) ) );
    struct Screen_278 *  screen4666 = ( &temp841 );
    uint32_t  last_dash_redraw_dash_changes4667 = (  from_dash_integral165 ( 0 ) );
    while ( ( ( * (  ed4664 ) ) .f_running ) ) {
        struct env886 envinst886 = {
            .tui4665 =  tui4665 ,
            .envinst88 = envinst88 ,
        };
        struct FunIter_885  temp884 =  into_dash_iter893 ( ( (  from_dash_function894 ) ( ( (struct envunion892){ .fun = (  struct Maybe_888  (*) (  struct env886*  ) )lam895 , .env =  envinst886 } ) ) ) );
        while (true) {
            struct Maybe_888  __cond1087 =  next1088 (&temp884);
            if (  __cond1087 .tag == 0 ) {
                break;
            }
            struct InputEvent_889  ev4669 =  __cond1087 .stuff .Maybe_888_Just_s .field0;
            struct InputEvent_889  dref4670 = (  ev4669 );
            if ( dref4670.tag == InputEvent_889_Key_t ) {
                ( (  reset_dash_msg1090 ) ( (  ed4664 ) ) );
                struct envunion1097  temp1096 = ( (struct envunion1097){ .fun = (  enum Unit_8  (*) (  struct env266*  ,    struct Editor_250 *  ,    struct Key_272  ) )handle_dash_key1098 , .env =  envinst266 } );
                ( temp1096.fun ( &temp1096.env ,  (  ed4664 ) ,  ( dref4670 .stuff .InputEvent_889_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1888  temp1887 = ( (struct envunion1888){ .fun = (  bool  (*) (  struct env94*  ,    struct Screen_278 *  ) )resize_dash_screen_dash_if_dash_needed1889 , .env =  envinst94 } );
        ( temp1887.fun ( &temp1887.env ,  (  screen4666 ) ) );
        if ( ( (  should_dash_redraw1891 ) ( (  tui4665 ) ) ) ) {
            (*  screen4666 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1892 ) ( (  screen4666 ) ) );
            struct Theme_172 *  theme4672 = ( ( * ( ( * (  ed4664 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg1901 ) ( (  screen4666 ) ,  ( ( ( * (  theme4672 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1902 ) ( (  screen4666 ) ,  ( ( ( * (  theme4672 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1903 ) ( (  screen4666 ) ) );
            struct envunion1916  temp1915 = ( (struct envunion1916){ .fun = (  enum Unit_8  (*) (  struct env276*  ,    struct Screen_278 *  ,    struct Editor_250 *  ) )render_dash_editor1917 , .env =  envinst276 } );
            ( temp1915.fun ( &temp1915.env ,  (  screen4666 ) ,  (  ed4664 ) ) );
            last_dash_redraw_dash_changes4667 = ( (  render_dash_screen2301 ) ( (  screen4666 ) ) );
        }
        ( (  sync2448 ) ( (  tui4665 ) ) );
    }
    ( (  free_dash_screen2457 ) ( (  screen4666 ) ) );
    ( (  deinit2460 ) ( (  tui4665 ) ) );
}
