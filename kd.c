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
    size_t  growth_dash_factor2074;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size2073;
    ;
};

struct env2 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2074;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size2073;
    ;
};

struct env3 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2074;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size2073;
    ;
};

struct env4 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2074;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size2073;
    ;
};

struct env5 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2074;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size2073;
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
    struct env12 envinst12;
    ;
    ;
    struct env2 envinst2;
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
    size_t  shrink_dash_factor2075;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    size_t  shrink_dash_factor2075;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env6 envinst6;
    ;
};

struct envunion49 {
    enum Unit_8  (*fun) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  );
    struct env12 env;
};

struct env48 {
    ;
    ;
    ;
    struct env12 envinst12;
    ;
    ;
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
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
};

struct env66 {
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
};

struct env67 {
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
};

struct env68 {
    ;
    ;
    ;
    struct env60 envinst60;
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
    struct env44 envinst44;
    ;
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
    ;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    struct env66 envinst66;
    ;
    ;
    ;
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
    struct env67 envinst67;
    ;
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
    struct env68 envinst68;
    ;
};

struct env86 {
    ;
    bool *  should_dash_resize3423;
    ;
    ;
    ;
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

struct env87 {
    ;
    bool *  should_dash_resize3423;
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
    ;
    struct env87 envinst87;
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
    struct List_9  (*fun) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  );
    struct env50 env;
};

struct envunion98 {
    enum Unit_8  (*fun) (  struct env37*  ,    struct List_14 *  ,    size_t  ,    struct Line_16  );
    struct env37 env;
};

struct envunion99 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env50 envinst50;
    struct env37 envinst37;
    ;
    ;
    ;
    struct env46 envinst46;
};

struct envunion101 {
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  );
    struct env40 env;
};

struct envunion102 {
    enum Unit_8  (*fun) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  );
    struct env41 env;
};

struct envunion103 {
    enum Unit_8  (*fun) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  );
    struct env12 env;
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
    struct List_14  f_buf;
    struct Actions_106  f_actions;
    struct Maybe_80  f_filename;
    enum Filetype_108  f_filetype;
};

struct envunion104 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

struct envunion109 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
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
    struct env40 envinst40;
    struct env41 envinst41;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env96 envinst96;
    ;
    ;
    struct env46 envinst46;
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
};

struct envunion113 {
    struct List_14  (*fun) (  struct env52*  ,    struct Array_54  ,    enum CAllocator_10  );
    struct env52 env;
};

struct env112 {
    ;
    ;
    ;
    ;
    struct env52 envinst52;
    ;
    ;
};

struct envunion115 {
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env100 env;
};

struct envunion116 {
    struct TextBuf_105  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
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
    ;
    ;
    struct env100 envinst100;
    ;
    ;
    struct env112 envinst112;
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
    struct env100 envinst100;
    ;
};

struct envunion120 {
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env100 env;
};

struct env119 {
    ;
    ;
    ;
    struct env100 envinst100;
    ;
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
    ;
    ;
    ;
    struct env117 envinst117;
    ;
    ;
};

struct envunion124 {
    struct Pos_26  (*fun) (  struct env119*  ,    struct TextBuf_105 *  ,    struct Action_25  );
    struct env119 env;
};

struct env123 {
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
    ;
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
};

struct envunion128 {
    struct Pos_26  (*fun) (  struct env119*  ,    struct TextBuf_105 *  ,    struct Action_25  );
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
    struct StrView_27  (*fun) (  struct env125*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env125 env;
};

struct env127 {
    ;
    ;
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
    ;
    ;
    ;
    ;
    ;
    struct env21 envinst21;
    struct env28 envinst28;
    struct env125 envinst125;
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
    ;
    ;
    ;
    ;
    ;
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
};

struct envunion137 {
    enum Unit_8  (*fun) (  struct env134*  ,    struct TextBuf_105 *  ,    struct Line_16 *  );
    struct env134 env;
};

struct env136 {
    ;
    ;
    struct env134 envinst134;
    ;
    ;
    ;
    ;
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

static  uint8_t   cast145 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8144 (    uint32_t  x658 ) {
    return ( (  cast145 ) ( (  x658 ) ) );
}

static  uint32_t   op_dash_div147 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

struct Range_150 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_150 Range_150_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_150 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env151 {
    uint32_t  base1240;
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

static  struct RangeIter_153   into_dash_iter154 (    struct Range_150  dref896 ) {
    return ( ( RangeIter_153_RangeIter ) ( ( ( Range_150_Range ) ( ( dref896 .field0 ) ,  ( dref896 .field1 ) ) ) ,  ( dref896 .field0 ) ) );
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

static  enum Ordering_158   cmp157 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  int32_t   op_dash_add159 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_155   next156 (    struct RangeIter_153 *  self904 ) {
    struct RangeIter_153  dref905 = ( * (  self904 ) );
    if ( true ) {
        if ( (  cmp157 ( ( dref905 .field1 ) , ( dref905 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
        }
        struct Maybe_155  x909 = ( ( Maybe_155_Just ) ( ( dref905 .field1 ) ) );
        (*  self904 ) = ( ( RangeIter_153_RangeIter ) ( ( ( Range_150_Range ) ( ( dref905 .field0 .field0 ) ,  ( dref905 .field0 .field1 ) ) ) ,  (  op_dash_add159 ( ( dref905 .field1 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        return (  x909 );
    }
}

static  uint32_t   reduce149 (    struct Range_150  iterable1123 ,    uint32_t  base1125 ,   struct envunion152  fun1127 ) {
    uint32_t  x1128 = (  base1125 );
    struct RangeIter_153  it1129 = ( (  into_dash_iter154 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1130 = ( (  next156 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_155_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_155_Just_t ) {
                struct envunion152  temp160 = (  fun1127 );
                x1128 = ( temp160.fun ( &temp160.env ,  ( dref1130 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp161 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp161);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp162;
    return (  temp162 );
}

static  struct Range_150   to163 (    int32_t  from887 ,    int32_t  to889 ) {
    return ( ( Range_150_Range ) ( (  from887 ) ,  (  to889 ) ) );
}

static  int32_t   op_dash_sub164 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint32_t   from_dash_integral165 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint32_t   op_dash_mul167 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

static  uint32_t   lam166 (   struct env151* env ,    int32_t  item1244 ,    uint32_t  x1246 ) {
    return (  op_dash_mul167 ( (  x1246 ) , ( env->base1240 ) ) );
}

static  uint32_t   pow148 (    uint32_t  base1240 ,    int32_t  p1242 ) {
    struct env151 envinst151 = {
        .base1240 =  base1240 ,
    };
    return ( (  reduce149 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1242 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral165 ( 1 ) ) ,  ( (struct envunion152){ .fun = (  uint32_t  (*) (  struct env151*  ,    int32_t  ,    uint32_t  ) )lam166 , .env =  envinst151 } ) ) );
}

static  uint32_t   rshift146 (    uint32_t  x1254 ,    int32_t  am1256 ) {
    return (  op_dash_div147 ( (  x1254 ) , ( (  pow148 ) ( (  from_dash_integral165 ( 2 ) ) ,  (  am1256 ) ) ) ) );
}

static  uint32_t   op_dash_sub169 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp170 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   op_dash_add171 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   mod168 (    uint32_t  l1259 ,    uint32_t  d1261 ) {
    uint32_t  r1262 = (  op_dash_div147 ( (  l1259 ) , (  d1261 ) ) );
    uint32_t  m1263 = (  op_dash_sub169 ( (  l1259 ) , (  op_dash_mul167 ( (  r1262 ) , (  d1261 ) ) ) ) );
    if ( (  cmp170 ( (  m1263 ) , (  from_dash_integral165 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add171 ( (  d1261 ) , (  m1263 ) ) );
    } else {
        return (  m1263 );
    }
}

static  struct RGB_141   rgb_dash_from_dash_hex143 (    uint32_t  n2741 ) {
    return ( (struct RGB_141) { .f_r = ( (  u32_dash_u8144 ) ( ( (  rshift146 ) ( (  n2741 ) ,  (  from_dash_integral56 ( 16 ) ) ) ) ) ) , .f_g = ( (  u32_dash_u8144 ) ( ( (  mod168 ) ( ( (  rshift146 ) ( (  n2741 ) ,  (  from_dash_integral56 ( 8 ) ) ) ) ,  (  from_dash_integral165 ( 256 ) ) ) ) ) ) , .f_b = ( (  u32_dash_u8144 ) ( ( (  mod168 ) ( (  n2741 ) ,  (  from_dash_integral165 ( 256 ) ) ) ) ) ) } );
}

static  struct Color_138   rgb142 (    uint32_t  x4079 ) {
    return ( ( Color_138_ColorRGB ) ( ( (  rgb_dash_from_dash_hex143 ) ( (  x4079 ) ) ) ) );
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

static  struct HighlightColors_175 *   cast180 (    struct Array_179 *  x356 ) {
    return ( (struct HighlightColors_175 * ) (  x356 ) );
}

static  struct Slice_174   as_dash_slice178 (    struct Array_179 *  arr2330 ) {
    return ( (struct Slice_174) { .f_ptr = ( (  cast180 ) ( (  arr2330 ) ) ) , .f_count = ( (size_t ) ( 13 ) ) } );
}

static  struct Array_179   from_dash_listlike182 (    struct Array_179  self330 ) {
    return (  self330 );
}

static  struct HighlightColors_175   hlt183 (    enum HighlightType_20  type4073 ,    struct Color_138  fg4075 ) {
    return ( (struct HighlightColors_175) { .f_type = (  type4073 ) , .f_fg = (  fg4075 ) , .f_bg = ( (struct Maybe_176) { .tag = Maybe_176_None_t } ) } );
}

static  void *   cast_dash_ptr189 (    struct HighlightColors_175 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of190 (    struct HighlightColors_175 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct HighlightColors_175 *   zeroed187 (  ) {
    struct HighlightColors_175 *  temp188;
    struct HighlightColors_175 *  x571 = (  temp188 );
    ( ( memset ) ( ( (  cast_dash_ptr189 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of190 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct HighlightColors_175 *   null_dash_ptr186 (  ) {
    return ( (  zeroed187 ) ( ) );
}

static  struct Slice_174   empty185 (  ) {
    return ( (struct Slice_174) { .f_ptr = ( (  null_dash_ptr186 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct Tuple2_193 {
    struct StrView_27  field0;
    struct Theme_172 *  field1;
};

static struct Tuple2_193 Tuple2_193_Tuple2 (  struct StrView_27  field0 ,  struct Theme_172 *  field1 ) {
    return ( struct Tuple2_193 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_192 {
    struct Tuple2_193 *  f_ptr;
    size_t  f_count;
};

struct Array_195 {
    struct Tuple2_193 _arr [4];
};

static  struct Tuple2_193 *   cast196 (    struct Array_195 *  x356 ) {
    return ( (struct Tuple2_193 * ) (  x356 ) );
}

static  struct Slice_192   as_dash_slice194 (    struct Array_195 *  arr2330 ) {
    return ( (struct Slice_192) { .f_ptr = ( (  cast196 ) ( (  arr2330 ) ) ) , .f_count = ( (size_t ) ( 4 ) ) } );
}

static  struct Array_195   from_dash_listlike198 (    struct Array_195  self330 ) {
    return (  self330 );
}

static  struct StrView_27   from_dash_string199 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

struct env200 {
    ;
    ;
    ;
    ;
    struct Slice_192  all_dash_themes4095;
    ;
    ;
};

struct Maybe_203 {
    enum {
        Maybe_203_None_t,
        Maybe_203_Just_t,
    } tag;
    union {
        struct {
            enum HighlightType_20  field0;
        } Maybe_203_Just_s;
    } stuff;
};

static struct Maybe_203 Maybe_203_Just (  enum HighlightType_20  field0 ) {
    return ( struct Maybe_203 ) { .tag = Maybe_203_Just_t, .stuff = { .Maybe_203_Just_s = { .field0 = field0 } } };
};

struct envunion202 {
    struct Maybe_203  (*fun) (  struct env136*  ,    struct TextBuf_105 *  ,    struct Pos_26  );
    struct env136 env;
};

struct env201 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct Maybe_206 {
    enum {
        Maybe_206_None_t,
        Maybe_206_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_33  field0;
        } Maybe_206_Just_s;
    } stuff;
};

static struct Maybe_206 Maybe_206_Just (  struct Cursors_33  field0 ) {
    return ( struct Maybe_206 ) { .tag = Maybe_206_Just_t, .stuff = { .Maybe_206_Just_s = { .field0 = field0 } } };
};

struct envunion205 {
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
    struct env127 env;
};

struct env204 {
    struct env127 envinst127;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion208 {
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
    struct env127 env;
};

struct env207 {
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

struct envunion210 {
    struct Maybe_206  (*fun) (  struct env121*  ,    struct TextBuf_105 *  );
    struct env121 env;
};

struct env209 {
    ;
    ;
    ;
    struct env121 envinst121;
    ;
    ;
    ;
};

struct envunion212 {
    struct Maybe_206  (*fun) (  struct env123*  ,    struct TextBuf_105 *  );
    struct env123 env;
};

struct env211 {
    ;
    ;
    ;
    ;
    struct env123 envinst123;
    ;
    ;
};

struct envunion214 {
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
    struct env127 env;
};

struct env213 {
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
};

struct envunion216 {
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
    struct env127 env;
};

struct env215 {
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

enum Mode_220 {
    Mode_220_Normal,
    Mode_220_Insert,
    Mode_220_Select,
};

struct ScreenCursorOffset_221 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_219 {
    struct TextBuf_105 *  f_buf;
    struct Pos_26  f_cursor;
    int32_t  f_vi;
    struct Maybe_34  f_sel;
    enum Mode_220  f_mode;
    struct ScreenCursorOffset_221  f_sc_dash_off;
};

struct envunion218 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_219 *  ,    int32_t  );
    struct env215 env;
};

struct envunion222 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  );
    struct env132 env;
};

struct env217 {
    ;
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
    struct env132 envinst132;
    ;
    ;
    ;
    ;
};

struct envunion224 {
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
    struct env127 env;
};

struct envunion225 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  );
    struct env132 env;
};

struct env223 {
    ;
    ;
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
    struct env132 envinst132;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion227 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_219 *  ,    int32_t  );
    struct env215 env;
};

struct env226 {
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
};

struct envunion229 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  );
    struct env132 env;
};

struct Tuple2_231 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_231 Tuple2_231_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_231 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion230 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion232 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  );
    struct env204 env;
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
    struct env132 envinst132;
    ;
    struct env213 envinst213;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env204 envinst204;
    ;
    ;
    ;
    ;
};

struct envunion234 {
    struct StrView_27  (*fun) (  struct env125*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env125 env;
};

struct env233 {
    ;
    ;
    ;
    ;
    ;
    struct env125 envinst125;
    ;
    ;
    ;
};

struct envunion236 {
    struct StrView_27  (*fun) (  struct env74*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env74 env;
};

struct env235 {
    ;
    ;
    struct env74 envinst74;
    ;
    ;
    ;
    ;
};

struct envunion238 {
    struct StrView_27  (*fun) (  struct env77*  ,    struct StrConcat_79  ,    enum CAllocator_10  );
    struct env77 env;
};

struct env237 {
    ;
    ;
    ;
    struct env77 envinst77;
    ;
    ;
    ;
};

struct envunion240 {
    struct StrView_27  (*fun) (  struct env81*  ,    struct StrConcat_83  ,    enum CAllocator_10  );
    struct env81 env;
};

struct env239 {
    ;
    ;
    ;
    struct env81 envinst81;
    ;
    ;
    ;
};

struct Maybe_243 {
    enum {
        Maybe_243_None_t,
        Maybe_243_Just_t,
    } tag;
    union {
        struct {
            struct Theme_172 *  field0;
        } Maybe_243_Just_s;
    } stuff;
};

static struct Maybe_243 Maybe_243_Just (  struct Theme_172 *  field0 ) {
    return ( struct Maybe_243 ) { .tag = Maybe_243_Just_t, .stuff = { .Maybe_243_Just_s = { .field0 = field0 } } };
};

struct envunion242 {
    struct Maybe_243  (*fun) (  struct env200*  ,    struct StrView_27  );
    struct env200 env;
};

struct env241 {
    struct env200 envinst200;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct Maybe_246 {
    enum {
        Maybe_246_None_t,
        Maybe_246_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_246_Just_s;
    } stuff;
};

static struct Maybe_246 Maybe_246_Just (  size_t  field0 ) {
    return ( struct Maybe_246 ) { .tag = Maybe_246_Just_t, .stuff = { .Maybe_246_Just_s = { .field0 = field0 } } };
};

struct envunion245 {
    struct Maybe_246  (*fun) (  struct env110*  ,    struct TextBuf_105 *  ,    struct Maybe_80  );
    struct env110 env;
};

struct EditorMode_249 {
    enum {
        EditorMode_249_Normal_t,
        EditorMode_249_Cmd_t,
        EditorMode_249_Search_t,
    } tag;
    union {
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_249_Cmd_s;
        struct {
            struct Pos_26  field0;
            struct StrBuilder_62  field1;
        } EditorMode_249_Search_s;
    } stuff;
};

static struct EditorMode_249 EditorMode_249_Cmd (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_249 ) { .tag = EditorMode_249_Cmd_t, .stuff = { .EditorMode_249_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_249 EditorMode_249_Search (  struct Pos_26  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_249 ) { .tag = EditorMode_249_Search_t, .stuff = { .EditorMode_249_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Config_250 {
    struct Theme_172 *  f_theme;
    bool  f_display_dash_line_dash_numbers;
    bool  f_relative_dash_line_dash_numbers;
};

struct Editor_248 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_219  f_pane;
    struct Maybe_80  f_clipboard;
    struct Maybe_80  f_search_dash_term;
    struct EditorMode_249  f_mode;
    struct Maybe_80  f_msg;
    struct Config_250 *  f_cfg;
    struct Theme_172 *  f_og_dash_theme;
};

struct envunion247 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env235 env;
};

struct envunion251 {
    enum Unit_8  (*fun) (  struct env237*  ,    struct Editor_248 *  ,    struct StrConcat_79  );
    struct env237 env;
};

struct envunion252 {
    enum Unit_8  (*fun) (  struct env239*  ,    struct Editor_248 *  ,    struct StrConcat_83  );
    struct env239 env;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env110 envinst110;
    struct env235 envinst235;
    struct env237 envinst237;
    struct env239 envinst239;
    ;
    ;
    ;
    ;
};

struct envunion254 {
    enum Unit_8  (*fun) (  struct env223*  ,    struct Pane_219 *  );
    struct env223 env;
};

struct envunion255 {
    enum Unit_8  (*fun) (  struct env209*  ,    struct Pane_219 *  );
    struct env209 env;
};

struct envunion256 {
    enum Unit_8  (*fun) (  struct env211*  ,    struct Pane_219 *  );
    struct env211 env;
};

struct envunion257 {
    enum Unit_8  (*fun) (  struct env217*  ,    struct Pane_219 *  );
    struct env217 env;
};

struct envunion258 {
    enum Unit_8  (*fun) (  struct env233*  ,    struct Editor_248 *  );
    struct env233 env;
};

struct envunion259 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion260 {
    enum Unit_8  (*fun) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  );
    struct env226 env;
};

struct envunion261 {
    enum Unit_8  (*fun) (  struct env239*  ,    struct Editor_248 *  ,    struct StrConcat_83  );
    struct env239 env;
};

struct envunion262 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  );
    struct env204 env;
};

struct envunion263 {
    enum Unit_8  (*fun) (  struct env228*  ,    struct Pane_219 *  );
    struct env228 env;
};

struct env253 {
    ;
    ;
    ;
    ;
    struct env223 envinst223;
    ;
    ;
    ;
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
    ;
    ;
    ;
    struct env211 envinst211;
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
    ;
    ;
    ;
    ;
    struct env233 envinst233;
    struct env213 envinst213;
    ;
    ;
    ;
    ;
    struct env226 envinst226;
    ;
    struct env239 envinst239;
    ;
    ;
    struct env204 envinst204;
    ;
    ;
    ;
    ;
    struct env228 envinst228;
};

struct envunion265 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env241 env;
};

struct envunion266 {
    enum Unit_8  (*fun) (  struct env207*  ,    struct Pane_219 *  );
    struct env207 env;
};

struct Key_268 {
    enum {
        Key_268_Escape_t,
        Key_268_Enter_t,
        Key_268_Tab_t,
        Key_268_Backspace_t,
        Key_268_Char_t,
        Key_268_Ctrl_t,
        Key_268_Up_t,
        Key_268_Down_t,
        Key_268_Left_t,
        Key_268_Right_t,
        Key_268_Home_t,
        Key_268_End_t,
        Key_268_PageUp_t,
        Key_268_PageDown_t,
        Key_268_Delete_t,
        Key_268_Insert_t,
        Key_268_F1_t,
        Key_268_F2_t,
        Key_268_F3_t,
        Key_268_F4_t,
        Key_268_F5_t,
        Key_268_F6_t,
        Key_268_F7_t,
        Key_268_F8_t,
        Key_268_F9_t,
        Key_268_F10_t,
        Key_268_F11_t,
        Key_268_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_268_Char_s;
        struct {
            char  field0;
        } Key_268_Ctrl_s;
    } stuff;
};

static struct Key_268 Key_268_Char (  char  field0 ) {
    return ( struct Key_268 ) { .tag = Key_268_Char_t, .stuff = { .Key_268_Char_s = { .field0 = field0 } } };
};

static struct Key_268 Key_268_Ctrl (  char  field0 ) {
    return ( struct Key_268 ) { .tag = Key_268_Ctrl_t, .stuff = { .Key_268_Ctrl_s = { .field0 = field0 } } };
};

struct envunion267 {
    enum Unit_8  (*fun) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_268  );
    struct env253 env;
};

struct envunion269 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion270 {
    enum Unit_8  (*fun) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  );
    struct env226 env;
};

struct envunion271 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env244 env;
};

struct envunion272 {
    enum Unit_8  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct envunion273 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  );
    struct env204 env;
};

struct env264 {
    struct env241 envinst241;
    ;
    ;
    ;
    ;
    ;
    struct env207 envinst207;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env253 envinst253;
    struct env60 envinst60;
    ;
    ;
    struct env226 envinst226;
    struct env244 envinst244;
    ;
    struct env72 envinst72;
    ;
    struct env204 envinst204;
    ;
};

struct Cell_278 {
    struct Char_65  f_c;
    struct Color_138  f_fg;
    struct Color_138  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_277 {
    struct Cell_278 *  f_ptr;
    size_t  f_count;
};

struct Screen_276 {
    enum CAllocator_10  f_al;
    struct Tui_90 *  f_tui;
    struct Slice_277  f_current;
    struct Slice_277  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_138  f_default_dash_fg;
    struct Color_138  f_default_dash_bg;
};

struct ScreenDims_279 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion275 {
    enum Unit_8  (*fun) (  struct env201*  ,    struct Screen_276 *  ,    struct Pane_219 *  ,    struct ScreenDims_279  ,    struct Config_250 *  );
    struct env201 env;
};

struct env274 {
    ;
    ;
    ;
    struct env201 envinst201;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum CAllocator_10   idc280 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct Slice_283 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul286 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  const char* *   offset_dash_ptr285 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp287;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp287 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral288 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub289 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_283   get284 (  ) {
    return ( (struct Slice_283) { .f_ptr = ( (  offset_dash_ptr285 ) ( ( _global_argv ) ,  (  from_dash_integral288 ( 1 ) ) ) ) , .f_count = (  op_dash_sub289 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp290 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct ConstStrIter_294 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_294   into_dash_iter296 (    struct ConstStrIter_294  self1425 ) {
    return (  self1425 );
}

struct Maybe_297 {
    enum {
        Maybe_297_None_t,
        Maybe_297_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_297_Just_s;
    } stuff;
};

static struct Maybe_297 Maybe_297_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_297 ) { .tag = Maybe_297_Just_t, .stuff = { .Maybe_297_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   cast299 (    const char*  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint8_t *   offset_dash_ptr300 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp301;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp301 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64302 (    size_t  x595 ) {
    return ( (int64_t ) (  x595 ) );
}

static  bool   eq303 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   cast304 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp307 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  uint8_t   from_dash_integral308 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  size_t   next_dash_char306 (    uint8_t *  p689 ) {
    uint8_t  pb690 = ( * (  p689 ) );
    if ( (  cmp307 ( (  pb690 ) , (  from_dash_integral308 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp307 ( (  pb690 ) , (  from_dash_integral308 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp307 ( (  pb690 ) , (  from_dash_integral308 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp307 ( (  pb690 ) , (  from_dash_integral308 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp309 = ( (  from_dash_string57 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp309);
                    exit ( 1 );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem305 (    uint8_t *  p701 ) {
    size_t  clen702 = ( (  next_dash_char306 ) ( (  p701 ) ) );
    if ( (  cmp290 ( (  clen702 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp310 = ( (  from_dash_string57 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp310);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p701 ) , .f_num_dash_bytes = (  clen702 ) } );
}

static  size_t   op_dash_add311 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_297   next298 (    struct ConstStrIter_294 *  self1428 ) {
    uint8_t *  char_dash_ptr1429 = ( ( (  cast299 ) ( ( ( * (  self1428 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1430 = ( (  offset_dash_ptr300 ) ( (  char_dash_ptr1429 ) ,  ( (  size_dash_i64302 ) ( ( ( * (  self1428 ) ) .f_i ) ) ) ) );
    if ( (  eq303 ( ( * (  optr1430 ) ) , ( (  cast304 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    struct Char_65  char1431 = ( (  scan_dash_from_dash_mem305 ) ( (  optr1430 ) ) );
    (*  self1428 ) .f_i = (  op_dash_add311 ( ( ( * (  self1428 ) ) .f_i ) , ( (  char1431 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_297_Just ) ( (  char1431 ) ) );
}

static  size_t   reduce295 (    struct ConstStrIter_294  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct ConstStrIter_294  it1129 = ( (  into_dash_iter296 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1130 = ( (  next298 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_297_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_297_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp312 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp312);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp313;
    return (  temp313 );
}

static  size_t   lam314 (    struct Char_65  dref1135 ,    size_t  x1137 ) {
    return (  op_dash_add311 ( (  x1137 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count293 (    struct ConstStrIter_294  it1134 ) {
    return ( (  reduce295 ) ( (  it1134 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam314 ) ) );
}

static  struct ConstStrIter_294   into_dash_iter316 (    const char*  self1422 ) {
    return ( (struct ConstStrIter_294) { .f_ogstr = (  self1422 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_294   chars315 (    const char*  self1437 ) {
    return ( (  into_dash_iter316 ) ( (  self1437 ) ) );
}

static  size_t   const_dash_str_dash_len292 (    const char*  s1724 ) {
    return ( (  count293 ) ( ( (  chars315 ) ( (  s1724 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str291 (    const char*  s2028 ) {
    size_t  len2029 = ( (  const_dash_str_dash_len292 ) ( (  s2028 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  cast299 ) ( (  s2028 ) ) ) , .f_count = (  len2029 ) } ) } );
}

struct Maybe_320 {
    enum {
        Maybe_320_None_t,
        Maybe_320_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_320_Just_s;
    } stuff;
};

static struct Maybe_320 Maybe_320_Just (  const char*  field0 ) {
    return ( struct Maybe_320 ) { .tag = Maybe_320_Just_t, .stuff = { .Maybe_320_Just_s = { .field0 = field0 } } };
};

struct StrConcat_322 {
    struct StrConcat_83  field0;
    size_t  field1;
};

static struct StrConcat_322 StrConcat_322_StrConcat (  struct StrConcat_83  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_322 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_321 {
    struct StrConcat_322  field0;
    struct Char_65  field1;
};

static struct StrConcat_321 StrConcat_321_StrConcat (  struct StrConcat_322  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_321 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_326 {
    struct StrView_27  field0;
    struct StrConcat_321  field1;
};

static struct StrConcat_326 StrConcat_326_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_321  field1 ) {
    return ( struct StrConcat_326 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_325 {
    struct StrConcat_326  field0;
    struct Char_65  field1;
};

static struct StrConcat_325 StrConcat_325_StrConcat (  struct StrConcat_326  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_325 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32329 (    size_t  x631 ) {
    return ( (int32_t ) (  x631 ) );
}

static  enum Unit_8   print_dash_str328 (    struct StrView_27  self1409 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32329 ) ( ( ( (  self1409 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1409 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str334 (    size_t  self1500 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1500 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str333 (    struct StrConcat_84  self1539 ) {
    struct StrConcat_84  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str334 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str332 (    struct StrConcat_83  self1539 ) {
    struct StrConcat_83  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str333 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str331 (    struct StrConcat_322  self1539 ) {
    struct StrConcat_322  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str332 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str334 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Scalar_338 {
    uint32_t  f_value;
};

struct CharDestructured_337 {
    enum {
        CharDestructured_337_Ref_t,
        CharDestructured_337_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_337_Ref_s;
        struct {
            struct Scalar_338  field0;
        } CharDestructured_337_Scalar_s;
    } stuff;
};

static struct CharDestructured_337 CharDestructured_337_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_337 ) { .tag = CharDestructured_337_Ref_t, .stuff = { .CharDestructured_337_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_337 CharDestructured_337_Scalar (  struct Scalar_338  field0 ) {
    return ( struct CharDestructured_337 ) { .tag = CharDestructured_337_Scalar_t, .stuff = { .CharDestructured_337_Scalar_s = { .field0 = field0 } } };
};

static  uint8_t   size_dash_u8341 (    size_t  x640 ) {
    return ( (uint8_t ) (  x640 ) );
}

static  size_t   op_dash_div342 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer340 (    uint8_t *  ptr679 ) {
    return ( (  size_dash_u8341 ) ( (  op_dash_div342 ( ( ( (size_t ) (  ptr679 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint32_t   size_dash_u32343 (    size_t  x634 ) {
    return ( (uint32_t ) (  x634 ) );
}

static  size_t   cast344 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_337   destructure339 (    struct Char_65  c713 ) {
    if ( (  eq303 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer340 ) ( ( (  c713 ) .f_ptr ) ) ) , (  from_dash_integral308 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_337_Scalar ) ( ( (struct Scalar_338) { .f_value = ( (  size_dash_u32343 ) ( ( ( (  cast344 ) ( ( (  c713 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_337_Ref ) ( (  c713 ) ) );
    }
}

static  enum Unit_8   printf_dash_char336 (    struct Char_65  c771 ) {
    struct CharDestructured_337  dref772 = ( (  destructure339 ) ( (  c771 ) ) );
    if ( dref772.tag == CharDestructured_337_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32329 ) ( ( ( dref772 .stuff .CharDestructured_337_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref772 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref772.tag == CharDestructured_337_Scalar_t ) {
            if ( (  cmp170 ( ( ( dref772 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) , (  from_dash_integral165 ( 127 ) ) ) == 2 ) ) {
                const char*  temp345 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp345);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8144 ) ( ( ( dref772 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str335 (    struct Char_65  self1440 ) {
    ( (  printf_dash_char336 ) ( (  self1440 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str330 (    struct StrConcat_321  self1539 ) {
    struct StrConcat_321  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str327 (    struct StrConcat_326  self1539 ) {
    struct StrConcat_326  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str324 (    struct StrConcat_325  self1539 ) {
    struct StrConcat_325  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str327 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  uint8_t *   cast347 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_charlike346 (    uint8_t *  ptr705 ,    size_t  num_dash_bytes707 ) {
    uint8_t *  ptr708 = ( ( (  cast347 ) ( (  ptr705 ) ) ) );
    return ( (  scan_dash_from_dash_mem305 ) ( (  ptr708 ) ) );
}

static  enum Unit_8   panic323 (    struct StrConcat_321  errmsg1743 ) {
    ( (  print_dash_str324 ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_326_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1743 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  const char*   undefined348 (  ) {
    const char*  temp349;
    return (  temp349 );
}

static  const char*   or_dash_fail319 (    struct Maybe_320  x1756 ,    struct StrConcat_321  errmsg1758 ) {
    struct Maybe_320  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_320_None_t ) {
        ( (  panic323 ) ( (  errmsg1758 ) ) );
        return ( (  undefined348 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_320_Just_t ) {
            return ( dref1759 .stuff .Maybe_320_Just_s .field0 );
        }
    }
}

static  struct Maybe_320   try_dash_get350 (    struct Slice_283  slice1794 ,    size_t  i1796 ) {
    if ( ( (  cmp290 ( (  i1796 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1796 ) , ( (  slice1794 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_320) { .tag = Maybe_320_None_t } );
    }
    const char* *  elem_dash_ptr1797 = ( (  offset_dash_ptr285 ) ( ( (  slice1794 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1796 ) ) ) ) );
    return ( ( Maybe_320_Just ) ( ( * (  elem_dash_ptr1797 ) ) ) );
}

static  const char*   get318 (    struct Slice_283  slice1800 ,    size_t  i1802 ) {
    return ( (  or_dash_fail319 ) ( ( (  try_dash_get350 ) ( (  slice1800 ) ,  (  i1802 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1802 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1800 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get317 (    struct Slice_283  self1813 ,    size_t  idx1815 ) {
    return ( (  get318 ) ( (  self1813 ) ,  (  idx1815 ) ) );
}

struct Maybe_351 {
    enum {
        Maybe_351_None_t,
        Maybe_351_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_105  field0;
        } Maybe_351_Just_s;
    } stuff;
};

static struct Maybe_351 Maybe_351_Just (  struct TextBuf_105  field0 ) {
    return ( struct Maybe_351 ) { .tag = Maybe_351_Just_t, .stuff = { .Maybe_351_Just_s = { .field0 = field0 } } };
};

struct envunion353 {
    struct Maybe_351  (*fun) (  struct env114*  ,    enum CAllocator_10  ,    struct StrView_27  );
    struct env114 env;
};

static  void *   cast_dash_ptr366 (    struct Line_16 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of367 (    struct Line_16 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Line_16 *   zeroed364 (  ) {
    struct Line_16 *  temp365;
    struct Line_16 *  x571 = (  temp365 );
    ( ( memset ) ( ( (  cast_dash_ptr366 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of367 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Line_16 *   null_dash_ptr363 (  ) {
    return ( (  zeroed364 ) ( ) );
}

static  struct Slice_15   empty362 (  ) {
    return ( (struct Slice_15) { .f_ptr = ( (  null_dash_ptr363 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_14   mk361 (    enum CAllocator_10  al2068 ) {
    struct Slice_15  elements2069 = ( (  empty362 ) ( ) );
    return ( (struct List_14) { .f_al = (  al2068 ) , .f_elements = (  elements2069 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env371 {
    struct env12 envinst12;
    struct List_14 *  list2135;
};

struct envunion372 {
    enum Unit_8  (*fun) (  struct env371*  ,    struct Line_16  );
    struct env371 env;
};

struct ArrayIter_373 {
    struct Array_54  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_373   into_dash_iter375 (    struct Array_54  self2380 ) {
    return ( (struct ArrayIter_373) { .f_backing = (  self2380 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_376 {
    enum {
        Maybe_376_None_t,
        Maybe_376_Just_t,
    } tag;
    union {
        struct {
            struct Line_16  field0;
        } Maybe_376_Just_s;
    } stuff;
};

static struct Maybe_376 Maybe_376_Just (  struct Line_16  field0 ) {
    return ( struct Maybe_376 ) { .tag = Maybe_376_Just_t, .stuff = { .Maybe_376_Just_s = { .field0 = field0 } } };
};

struct StrConcat_382 {
    struct StrConcat_83  field0;
    int32_t  field1;
};

static struct StrConcat_382 StrConcat_382_StrConcat (  struct StrConcat_83  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_382 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_381 {
    struct StrConcat_382  field0;
    struct Char_65  field1;
};

static struct StrConcat_381 StrConcat_381_StrConcat (  struct StrConcat_382  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_381 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_385 {
    struct StrView_27  field0;
    struct StrConcat_381  field1;
};

static struct StrConcat_385 StrConcat_385_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_381  field1 ) {
    return ( struct StrConcat_385 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_384 {
    struct StrConcat_385  field0;
    struct Char_65  field1;
};

static struct StrConcat_384 StrConcat_384_StrConcat (  struct StrConcat_385  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_384 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str389 (    int32_t  self1476 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1476 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str388 (    struct StrConcat_382  self1539 ) {
    struct StrConcat_382  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str332 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str389 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str387 (    struct StrConcat_381  self1539 ) {
    struct StrConcat_381  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str388 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str386 (    struct StrConcat_385  self1539 ) {
    struct StrConcat_385  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str387 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str383 (    struct StrConcat_384  self1539 ) {
    struct StrConcat_384  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str386 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic380 (    struct StrConcat_381  errmsg1743 ) {
    ( (  print_dash_str383 ) ( ( ( StrConcat_384_StrConcat ) ( ( ( StrConcat_385_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1743 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Line_16 *   cast_dash_ptr390 (    struct Array_54 *  p359 ) {
    return ( (struct Line_16 * ) (  p359 ) );
}

static  struct Line_16 *   offset_dash_ptr391 (    struct Line_16 *  x338 ,    int64_t  count340 ) {
    struct Line_16  temp392;
    return ( (struct Line_16 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp392 ) ) ) ) ) ) ) ) );
}

static  struct Line_16 *   get_dash_ptr379 (    struct Array_54 *  arr2308 ,    size_t  i2311 ) {
    if ( ( (  cmp290 ( (  i2311 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2311 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2311 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  p2312 = ( ( (  cast_dash_ptr390 ) ( (  arr2308 ) ) ) );
    return ( (  offset_dash_ptr391 ) ( (  p2312 ) ,  ( (int64_t ) (  i2311 ) ) ) );
}

static  struct Line_16   get378 (    struct Array_54 *  arr2315 ,    size_t  i2318 ) {
    return ( * ( (  get_dash_ptr379 ) ( (  arr2315 ) ,  (  i2318 ) ) ) );
}

static  struct Maybe_376   next377 (    struct ArrayIter_373 *  self2387 ) {
    if ( (  cmp290 ( ( ( * (  self2387 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_376) { .tag = Maybe_376_None_t } );
    }
    struct Line_16  e2389 = ( (  get378 ) ( ( & ( ( * (  self2387 ) ) .f_backing ) ) ,  ( ( * (  self2387 ) ) .f_cur ) ) );
    (*  self2387 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2387 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_376_Just ) ( (  e2389 ) ) );
}

static  enum Unit_8   for_dash_each370 (    struct Array_54  iterable1104 ,   struct envunion372  fun1106 ) {
    struct ArrayIter_373  temp374 = ( (  into_dash_iter375 ) ( (  iterable1104 ) ) );
    struct ArrayIter_373 *  it1107 = ( &temp374 );
    while ( ( true ) ) {
        struct Maybe_376  dref1108 = ( (  next377 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_376_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_376_Just_t ) {
                struct envunion372  temp393 = (  fun1106 );
                ( temp393.fun ( &temp393.env ,  ( dref1108 .stuff .Maybe_376_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  bool   eq399 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_402 {
    size_t  f_size;
};

static  struct TypeSize_402   get_dash_typesize401 (  ) {
    struct Line_16  temp403;
    return ( (struct TypeSize_402) { .f_size = ( sizeof( ( (  temp403 ) ) ) ) } );
}

static  struct Line_16 *   cast_dash_ptr404 (    void *  p359 ) {
    return ( (struct Line_16 * ) (  p359 ) );
}

static  size_t   op_dash_mul405 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_15   allocate400 (    enum CAllocator_10  dref1990 ,    size_t  count1992 ) {
    if (!(  dref1990 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1993 = ( ( ( (  get_dash_typesize401 ) ( ) ) ) .f_size );
    struct Line_16 *  ptr1994 = ( (  cast_dash_ptr404 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1993 ) , (  count1992 ) ) ) ) ) ) );
    return ( (struct Slice_15) { .f_ptr = (  ptr1994 ) , .f_count = (  count1992 ) } );
}

struct env406 {
    ;
    ;
    struct Slice_15  new_dash_slice2079;
};

struct Tuple2_408 {
    struct Line_16  field0;
    int32_t  field1;
};

static struct Tuple2_408 Tuple2_408_Tuple2 (  struct Line_16  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_408 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion407 {
    enum Unit_8  (*fun) (  struct env406*  ,    struct Tuple2_408  );
    struct env406 env;
};

static  struct Line_16 *   get_dash_ptr411 (    struct Slice_15  slice1788 ,    size_t  i1790 ) {
    if ( ( (  cmp290 ( (  i1790 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1790 ) , ( (  slice1788 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  elem_dash_ptr1791 = ( (  offset_dash_ptr391 ) ( ( (  slice1788 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1790 ) ) ) ) );
    return (  elem_dash_ptr1791 );
}

static  enum Unit_8   set410 (    struct Slice_15  slice1805 ,    size_t  i1807 ,    struct Line_16  x1809 ) {
    struct Line_16 *  ep1810 = ( (  get_dash_ptr411 ) ( (  slice1805 ) ,  (  i1807 ) ) );
    (*  ep1810 ) = (  x1809 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size412 (    int32_t  x610 ) {
    return ( (size_t ) ( (int64_t ) (  x610 ) ) );
}

static  enum Unit_8   lam409 (   struct env406* env ,    struct Tuple2_408  dref2080 ) {
    return ( (  set410 ) ( ( env->new_dash_slice2079 ) ,  ( (  i32_dash_size412 ) ( ( dref2080 .field1 ) ) ) ,  ( dref2080 .field0 ) ) );
}

struct SliceIter_415 {
    struct Slice_15  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_416 {
    int32_t  f_from;
};

struct Zip_414 {
    struct SliceIter_415  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_414   into_dash_iter418 (    struct Zip_414  self941 ) {
    return (  self941 );
}

struct Maybe_419 {
    enum {
        Maybe_419_None_t,
        Maybe_419_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_408  field0;
        } Maybe_419_Just_s;
    } stuff;
};

static struct Maybe_419 Maybe_419_Just (  struct Tuple2_408  field0 ) {
    return ( struct Maybe_419 ) { .tag = Maybe_419_Just_t, .stuff = { .Maybe_419_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_376   next421 (    struct SliceIter_415 *  self1870 ) {
    size_t  off1871 = ( ( * (  self1870 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1870 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_376) { .tag = Maybe_376_None_t } );
    }
    struct Line_16  elem1872 = ( * ( (  offset_dash_ptr391 ) ( ( ( ( * (  self1870 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1871 ) ) ) ) ) );
    (*  self1870 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_376_Just ) ( (  elem1872 ) ) );
}

static  struct Maybe_155   next422 (    struct FromIter_416 *  dref918 ) {
    int32_t  v920 = ( ( (* dref918 ) ) .f_from );
    (* dref918 ) .f_from = (  op_dash_add159 ( ( ( (* dref918 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_155_Just ) ( (  v920 ) ) );
}

static  struct Maybe_419   next420 (    struct Zip_414 *  self944 ) {
    struct Zip_414  copy945 = ( * (  self944 ) );
    while ( ( true ) ) {
        struct Maybe_376  dref946 = ( (  next421 ) ( ( & ( (  copy945 ) .f_left_dash_it ) ) ) );
        if ( dref946.tag == Maybe_376_None_t ) {
            return ( (struct Maybe_419) { .tag = Maybe_419_None_t } );
        }
        else {
            if ( dref946.tag == Maybe_376_Just_t ) {
                struct Maybe_155  dref948 = ( (  next422 ) ( ( & ( (  copy945 ) .f_right_dash_it ) ) ) );
                if ( dref948.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_419) { .tag = Maybe_419_None_t } );
                }
                else {
                    if ( dref948.tag == Maybe_155_Just_t ) {
                        ( (  next421 ) ( ( & ( ( * (  self944 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self944 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_419_Just ) ( ( ( Tuple2_408_Tuple2 ) ( ( dref946 .stuff .Maybe_376_Just_s .field0 ) ,  ( dref948 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each413 (    struct Zip_414  iterable1104 ,   struct envunion407  fun1106 ) {
    struct Zip_414  temp417 = ( (  into_dash_iter418 ) ( (  iterable1104 ) ) );
    struct Zip_414 *  it1107 = ( &temp417 );
    while ( ( true ) ) {
        struct Maybe_419  dref1108 = ( (  next420 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_419_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_419_Just_t ) {
                struct envunion407  temp423 = (  fun1106 );
                ( temp423.fun ( &temp423.env ,  ( dref1108 .stuff .Maybe_419_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_415   into_dash_iter425 (    struct Slice_15  self1864 ) {
    return ( (struct SliceIter_415) { .f_slice = (  self1864 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_416   into_dash_iter426 (    struct FromIter_416  it916 ) {
    return (  it916 );
}

static  struct Zip_414   zip424 (    struct Slice_15  left952 ,    struct FromIter_416  right954 ) {
    struct SliceIter_415  left_dash_it955 = ( (  into_dash_iter425 ) ( (  left952 ) ) );
    struct FromIter_416  right_dash_it956 = ( (  into_dash_iter426 ) ( (  right954 ) ) );
    return ( (struct Zip_414) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

static  struct FromIter_416   from427 (    int32_t  f913 ) {
    return ( (struct FromIter_416) { .f_from = (  f913 ) } );
}

static  void *   cast_dash_ptr429 (    struct Line_16 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free428 (    enum CAllocator_10  dref1996 ,    struct Slice_15  slice1998 ) {
    if (!(  dref1996 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr429 ) ( ( (  slice1998 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full398 (   struct env2* env ,    struct List_14 *  list2078 ) {
    if ( (  eq399 ( ( ( * (  list2078 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2078 ) .f_elements = ( (  allocate400 ) ( ( ( * (  list2078 ) ) .f_al ) ,  ( env->starting_dash_size2073 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2078 ) ) .f_count ) , ( ( ( * (  list2078 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_15  new_dash_slice2079 = ( (  allocate400 ) ( ( ( * (  list2078 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2078 ) ) .f_count ) , ( env->growth_dash_factor2074 ) ) ) ) );
            struct env406 envinst406 = {
                .new_dash_slice2079 =  new_dash_slice2079 ,
            };
            struct envunion407  fun2083 = ( (struct envunion407){ .fun = (  enum Unit_8  (*) (  struct env406*  ,    struct Tuple2_408  ) )lam409 , .env =  envinst406 } );
            ( (  for_dash_each413 ) ( ( (  zip424 ) ( ( ( * (  list2078 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2083 ) ) );
            ( (  free428 ) ( ( ( * (  list2078 ) ) .f_al ) ,  ( ( * (  list2078 ) ) .f_elements ) ) );
            (*  list2078 ) .f_elements = (  new_dash_slice2079 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add396 (   struct env12* env ,    struct List_14 *  list2086 ,    struct Line_16  elem2088 ) {
    struct envunion13  temp397 = ( (struct envunion13){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full398 , .env =  env->envinst2 } );
    ( temp397.fun ( &temp397.env ,  (  list2086 ) ) );
    ( (  set410 ) ( ( ( * (  list2086 ) ) .f_elements ) ,  ( ( * (  list2086 ) ) .f_count ) ,  (  elem2088 ) ) );
    (*  list2086 ) .f_count = (  op_dash_add311 ( ( ( * (  list2086 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam394 (   struct env371* env ,    struct Line_16  x2139 ) {
    struct envunion49  temp395 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add396 , .env =  env->envinst12 } );
    return ( temp395.fun ( &temp395.env ,  ( env->list2135 ) ,  (  x2139 ) ) );
}

static  enum Unit_8   add_dash_all369 (   struct env48* env ,    struct List_14 *  list2135 ,    struct Array_54  it2137 ) {
    struct env371 envinst371 = {
        .envinst12 = env->envinst12 ,
        .list2135 =  list2135 ,
    };
    ( (  for_dash_each370 ) ( (  it2137 ) ,  ( (struct envunion372){ .fun = (  enum Unit_8  (*) (  struct env371*  ,    struct Line_16  ) )lam394 , .env =  envinst371 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_14   from_dash_iter359 (   struct env52* env ,    struct Array_54  iter2176 ,    enum CAllocator_10  al2178 ) {
    struct List_14  temp360 = ( (  mk361 ) ( (  al2178 ) ) );
    struct List_14 *  list2179 = ( &temp360 );
    struct envunion53  temp368 = ( (struct envunion53){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_14 *  ,    struct Array_54  ) )add_dash_all369 , .env =  env->envinst48 } );
    ( temp368.fun ( &temp368.env ,  (  list2179 ) ,  (  iter2176 ) ) );
    return ( * (  list2179 ) );
}

static  struct Array_54   from_dash_listlike430 (    struct Array_54  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr437 (    struct Highlight_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of438 (    struct Highlight_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Highlight_19 *   zeroed435 (  ) {
    struct Highlight_19 *  temp436;
    struct Highlight_19 *  x571 = (  temp436 );
    ( ( memset ) ( ( (  cast_dash_ptr437 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of438 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Highlight_19 *   null_dash_ptr434 (  ) {
    return ( (  zeroed435 ) ( ) );
}

static  struct Slice_18   empty433 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr434 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk432 (    enum CAllocator_10  al2068 ) {
    struct Slice_18  elements2069 = ( (  empty433 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2068 ) , .f_elements = (  elements2069 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_16   mk_dash_line431 (    struct List_9  initial3768 ) {
    return ( (struct Line_16) { .f_line = (  initial3768 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk432 ) ( ( (  initial3768 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr444 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of445 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed442 (  ) {
    uint8_t *  temp443;
    uint8_t *  x571 = (  temp443 );
    ( ( memset ) ( ( (  cast_dash_ptr444 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of445 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   null_dash_ptr441 (  ) {
    return ( (  zeroed442 ) ( ) );
}

static  struct Slice_11   empty440 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr441 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk439 (    enum CAllocator_10  al2068 ) {
    struct Slice_11  elements2069 = ( (  empty440 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2068 ) , .f_elements = (  elements2069 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr452 (    struct Changeset_32 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of453 (    struct Changeset_32 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_32 *   zeroed450 (  ) {
    struct Changeset_32 *  temp451;
    struct Changeset_32 *  x571 = (  temp451 );
    ( ( memset ) ( ( (  cast_dash_ptr452 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of453 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Changeset_32 *   null_dash_ptr449 (  ) {
    return ( (  zeroed450 ) ( ) );
}

static  struct Slice_31   empty448 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr449 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk447 (    enum CAllocator_10  al2068 ) {
    struct Slice_31  elements2069 = ( (  empty448 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2068 ) , .f_elements = (  elements2069 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_106   mk_dash_actions446 (    enum CAllocator_10  al3756 ) {
    return ( (struct Actions_106) { .f_list = ( (  mk447 ) ( (  al3756 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_107_NoChangeset ) } );
}

static  struct TextBuf_105   mk357 (   struct env112* env ,    enum CAllocator_10  al3870 ) {
    struct envunion113  temp358 = ( (struct envunion113){ .fun = (  struct List_14  (*) (  struct env52*  ,    struct Array_54  ,    enum CAllocator_10  ) )from_dash_iter359 , .env =  env->envinst52 } );
    return ( (struct TextBuf_105) { .f_al = (  al3870 ) , .f_buf = ( temp358.fun ( &temp358.env ,  ( (  from_dash_listlike430 ) ( ( (struct Array_54) { ._arr = { ( (  mk_dash_line431 ) ( ( (  mk439 ) ( (  al3870 ) ) ) ) ) } } ) ) ) ,  (  al3870 ) ) ) , .f_actions = ( (  mk_dash_actions446 ) ( (  al3870 ) ) ) , .f_filename = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_filetype = ( Filetype_108_Text ) } );
}

struct StrViewIter_458 {
    struct StrView_27  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_458   into_dash_iter459 (    struct StrViewIter_458  self1401 ) {
    return (  self1401 );
}

static  struct StrViewIter_458   into_dash_iter461 (    struct StrView_27  self1398 ) {
    return ( (struct StrViewIter_458) { .f_ds = (  self1398 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_458   chars460 (    struct StrView_27  self1412 ) {
    return ( (  into_dash_iter461 ) ( (  self1412 ) ) );
}

static  struct Maybe_297   next463 (    struct StrViewIter_458 *  self1404 ) {
    if ( (  cmp290 ( ( ( * (  self1404 ) ) .f_i ) , ( ( ( ( * (  self1404 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint8_t *  char_dash_ptr1405 = ( ( (  offset_dash_ptr300 ) ( ( (  cast347 ) ( ( ( ( ( * (  self1404 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64302 ) ( ( ( * (  self1404 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1406 = ( (  scan_dash_from_dash_mem305 ) ( (  char_dash_ptr1405 ) ) );
    (*  self1404 ) .f_i = (  op_dash_add311 ( ( ( * (  self1404 ) ) .f_i ) , ( (  char1406 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_297_Just ) ( (  char1406 ) ) );
}

static  size_t   min467 (    size_t  l1266 ,    size_t  r1268 ) {
    if ( (  cmp290 ( (  l1266 ) , (  r1268 ) ) == 0 ) ) {
        return (  l1266 );
    } else {
        return (  r1268 );
    }
}

static  struct Slice_11   subslice466 (    struct Slice_11  slice1818 ,    size_t  from1820 ,    size_t  to1822 ) {
    uint8_t *  begin_dash_ptr1823 = ( (  offset_dash_ptr300 ) ( ( (  slice1818 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1820 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1820 ) , (  to1822 ) ) != 0 ) || (  cmp290 ( (  from1820 ) , ( (  slice1818 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1824 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1822 ) ,  ( (  slice1818 ) .f_count ) ) ) , (  from1820 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  count1824 ) } );
}

static  struct Slice_11   from465 (    struct Slice_11  slice1827 ,    size_t  from1829 ) {
    return ( (  subslice466 ) ( (  slice1827 ) ,  (  from1829 ) ,  ( (  slice1827 ) .f_count ) ) );
}

static  struct StrView_27   byte_dash_substr_dash_from464 (    struct StrView_27  s2230 ,    size_t  from2232 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from465 ) ( ( (  s2230 ) .f_contents ) ,  (  from2232 ) ) ) } );
}

static  struct StrView_27   drop_dash_while456 (    struct StrView_27  sv2259 ,    bool (*  fun2261 )(    struct Char_65  ) ) {
    size_t  from2262 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_458  temp457 =  into_dash_iter459 ( ( (  chars460 ) ( (  sv2259 ) ) ) );
    while (true) {
        struct Maybe_297  __cond462 =  next463 (&temp457);
        if (  __cond462 .tag == 0 ) {
            break;
        }
        struct Char_65  c2264 =  __cond462 .stuff .Maybe_297_Just_s .field0;
        if ( ( ! ( (  fun2261 ) ( (  c2264 ) ) ) ) ) {
            break;
        }
        from2262 = (  op_dash_add311 ( (  from2262 ) , ( (  c2264 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from464 ) ( (  sv2259 ) ,  (  from2262 ) ) );
}

struct Tuple2_470 {
    struct CharDestructured_337  field0;
    struct CharDestructured_337  field1;
};

static struct Tuple2_470 Tuple2_470_Tuple2 (  struct CharDestructured_337  field0 ,  struct CharDestructured_337  field1 ) {
    return ( struct Tuple2_470 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add471 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq473 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq472 (    struct Scalar_338  l737 ,    struct Scalar_338  r739 ) {
    return (  eq473 ( ( (  l737 ) .f_value ) , ( (  r739 ) .f_value ) ) );
}

static  bool   eq469 (    struct Char_65  l742 ,    struct Char_65  r744 ) {
    if ( ( !  eq399 ( ( (  l742 ) .f_num_dash_bytes ) , ( (  r744 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_470  dref745 = ( ( Tuple2_470_Tuple2 ) ( ( (  destructure339 ) ( (  l742 ) ) ) ,  ( (  destructure339 ) ( (  r744 ) ) ) ) );
    if ( dref745 .field0.tag == CharDestructured_337_Ref_t && dref745 .field1.tag == CharDestructured_337_Ref_t ) {
        int64_t  i748 = (  from_dash_integral288 ( 0 ) );
        while ( (  cmp290 ( ( (size_t ) (  i748 ) ) , ( ( dref745 .field0 .stuff .CharDestructured_337_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq303 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref745 .field0 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) + (  i748 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref745 .field1 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) + (  i748 ) ) ) ) ) ) ) {
                return ( false );
            }
            i748 = (  op_dash_add471 ( (  i748 ) , (  from_dash_integral288 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref745 .field0.tag == CharDestructured_337_Scalar_t && dref745 .field1.tag == CharDestructured_337_Scalar_t ) {
            return (  eq472 ( ( dref745 .field0 .stuff .CharDestructured_337_Scalar_s .field0 ) , ( dref745 .field1 .stuff .CharDestructured_337_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref745 .field0.tag == CharDestructured_337_Scalar_t && dref745 .field1.tag == CharDestructured_337_Ref_t ) {
                return (  eq303 ( ( (  u32_dash_u8144 ) ( ( ( dref745 .field0 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref745 .field1 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref745 .field0.tag == CharDestructured_337_Ref_t && dref745 .field1.tag == CharDestructured_337_Scalar_t ) {
                    return (  eq303 ( ( (  u32_dash_u8144 ) ( ( ( dref745 .field1 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref745 .field0 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam468 (    struct Char_65  c3780 ) {
    return (  eq469 ( (  c3780 ) , ( (  from_dash_charlike346 ) ( ( "." ) ,  ( 1 ) ) ) ) );
}

struct Maybe_477 {
    enum {
        Maybe_477_None_t,
        Maybe_477_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_477_Just_s;
    } stuff;
};

static struct Maybe_477 Maybe_477_Just (  uint8_t  field0 ) {
    return ( struct Maybe_477 ) { .tag = Maybe_477_Just_t, .stuff = { .Maybe_477_Just_s = { .field0 = field0 } } };
};

static  uint8_t   undefined478 (  ) {
    uint8_t  temp479;
    return (  temp479 );
}

static  uint8_t   or_dash_fail476 (    struct Maybe_477  x1756 ,    struct StrConcat_321  errmsg1758 ) {
    struct Maybe_477  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_477_None_t ) {
        ( (  panic323 ) ( (  errmsg1758 ) ) );
        return ( (  undefined478 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_477_Just_t ) {
            return ( dref1759 .stuff .Maybe_477_Just_s .field0 );
        }
    }
}

static  struct Maybe_477   try_dash_get480 (    struct Slice_11  slice1794 ,    size_t  i1796 ) {
    if ( ( (  cmp290 ( (  i1796 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1796 ) , ( (  slice1794 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_477) { .tag = Maybe_477_None_t } );
    }
    uint8_t *  elem_dash_ptr1797 = ( (  offset_dash_ptr300 ) ( ( (  slice1794 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1796 ) ) ) ) );
    return ( ( Maybe_477_Just ) ( ( * (  elem_dash_ptr1797 ) ) ) );
}

static  uint8_t   get475 (    struct Slice_11  slice1800 ,    size_t  i1802 ) {
    return ( (  or_dash_fail476 ) ( ( (  try_dash_get480 ) ( (  slice1800 ) ,  (  i1802 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1802 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1800 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get474 (    struct Slice_11  self1813 ,    size_t  idx1815 ) {
    return ( (  get475 ) ( (  self1813 ) ,  (  idx1815 ) ) );
}

static  uint8_t   ascii_dash_u8481 (    char  c789 ) {
    return ( ( (uint8_t ) (  c789 ) ) );
}

static  char   from_dash_charlike482 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq399 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp483 = ( (  from_dash_string57 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp483);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

static  struct StrView_27   byte_dash_substr484 (    struct StrView_27  s2223 ,    size_t  from2225 ,    size_t  to2227 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice466 ) ( ( (  s2223 ) .f_contents ) ,  (  from2225 ) ,  (  to2227 ) ) ) } );
}

static  struct Maybe_80   extension455 (    struct StrView_27  path3778 ) {
    struct StrView_27  path3781 = ( (  drop_dash_while456 ) ( (  path3778 ) ,  (  lam468 ) ) );
    size_t  i3782 = ( ( (  path3781 ) .f_contents ) .f_count );
    while ( (  cmp290 ( (  i3782 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i3782 = (  op_dash_sub289 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq303 ( (  elem_dash_get474 ( ( (  path3781 ) .f_contents ) , (  i3782 ) ) ) , ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq399 ( (  i3782 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  ext3783 = ( (  byte_dash_substr484 ) ( (  path3781 ) ,  (  op_dash_add311 ( (  i3782 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path3781 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_80_Just ) ( (  ext3783 ) ) );
}

struct SliceIter_489 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_488 {
    struct SliceIter_489  f_left_dash_it;
    struct SliceIter_489  f_right_dash_it;
};

struct Tuple2_490 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_490 Tuple2_490_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_490 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env492 {
    bool (*  fun1156 )(    struct Tuple2_490  );
};

struct envunion493 {
    bool  (*fun) (  struct env492*  ,    struct Tuple2_490  ,    bool  );
    struct env492 env;
};

static  struct Zip_488   into_dash_iter494 (    struct Zip_488  self941 ) {
    return (  self941 );
}

struct Maybe_495 {
    enum {
        Maybe_495_None_t,
        Maybe_495_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_490  field0;
        } Maybe_495_Just_s;
    } stuff;
};

static struct Maybe_495 Maybe_495_Just (  struct Tuple2_490  field0 ) {
    return ( struct Maybe_495 ) { .tag = Maybe_495_Just_t, .stuff = { .Maybe_495_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_477   next497 (    struct SliceIter_489 *  self1870 ) {
    size_t  off1871 = ( ( * (  self1870 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1870 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_477) { .tag = Maybe_477_None_t } );
    }
    uint8_t  elem1872 = ( * ( (  offset_dash_ptr300 ) ( ( ( ( * (  self1870 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1871 ) ) ) ) ) );
    (*  self1870 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_477_Just ) ( (  elem1872 ) ) );
}

static  struct Maybe_495   next496 (    struct Zip_488 *  self944 ) {
    struct Zip_488  copy945 = ( * (  self944 ) );
    while ( ( true ) ) {
        struct Maybe_477  dref946 = ( (  next497 ) ( ( & ( (  copy945 ) .f_left_dash_it ) ) ) );
        if ( dref946.tag == Maybe_477_None_t ) {
            return ( (struct Maybe_495) { .tag = Maybe_495_None_t } );
        }
        else {
            if ( dref946.tag == Maybe_477_Just_t ) {
                struct Maybe_477  dref948 = ( (  next497 ) ( ( & ( (  copy945 ) .f_right_dash_it ) ) ) );
                if ( dref948.tag == Maybe_477_None_t ) {
                    return ( (struct Maybe_495) { .tag = Maybe_495_None_t } );
                }
                else {
                    if ( dref948.tag == Maybe_477_Just_t ) {
                        ( (  next497 ) ( ( & ( ( * (  self944 ) ) .f_left_dash_it ) ) ) );
                        ( (  next497 ) ( ( & ( ( * (  self944 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_495_Just ) ( ( ( Tuple2_490_Tuple2 ) ( ( dref946 .stuff .Maybe_477_Just_s .field0 ) ,  ( dref948 .stuff .Maybe_477_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce491 (    struct Zip_488  iterable1123 ,    bool  base1125 ,   struct envunion493  fun1127 ) {
    bool  x1128 = (  base1125 );
    struct Zip_488  it1129 = ( (  into_dash_iter494 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_495  dref1130 = ( (  next496 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_495_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_495_Just_t ) {
                struct envunion493  temp498 = (  fun1127 );
                x1128 = ( temp498.fun ( &temp498.env ,  ( dref1130 .stuff .Maybe_495_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp499 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp499);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp500;
    return (  temp500 );
}

static  bool   lam501 (   struct env492* env ,    struct Tuple2_490  e1158 ,    bool  x1160 ) {
    return ( ( ( env->fun1156 ) ( (  e1158 ) ) ) && (  x1160 ) );
}

static  bool   all487 (    struct Zip_488  it1154 ,    bool (*  fun1156 )(    struct Tuple2_490  ) ) {
    struct env492 envinst492 = {
        .fun1156 =  fun1156 ,
    };
    return ( (  reduce491 ) ( (  it1154 ) ,  ( true ) ,  ( (struct envunion493){ .fun = (  bool  (*) (  struct env492*  ,    struct Tuple2_490  ,    bool  ) )lam501 , .env =  envinst492 } ) ) );
}

static  struct SliceIter_489   into_dash_iter503 (    struct Slice_11  self1864 ) {
    return ( (struct SliceIter_489) { .f_slice = (  self1864 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_488   zip502 (    struct Slice_11  left952 ,    struct Slice_11  right954 ) {
    struct SliceIter_489  left_dash_it955 = ( (  into_dash_iter503 ) ( (  left952 ) ) );
    struct SliceIter_489  right_dash_it956 = ( (  into_dash_iter503 ) ( (  right954 ) ) );
    return ( (struct Zip_488) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

static  bool   lam504 (    struct Tuple2_490  dref1904 ) {
    return (  eq303 ( ( dref1904 .field0 ) , ( dref1904 .field1 ) ) );
}

static  bool   eq486 (    struct Slice_11  l1901 ,    struct Slice_11  r1903 ) {
    if ( ( !  eq399 ( ( (  l1901 ) .f_count ) , ( (  r1903 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all487 ) ( ( (  zip502 ) ( (  l1901 ) ,  (  r1903 ) ) ) ,  (  lam504 ) ) );
}

static  bool   eq485 (    struct StrView_27  l2267 ,    struct StrView_27  r2269 ) {
    return (  eq486 ( ( (  l2267 ) .f_contents ) , ( (  r2269 ) .f_contents ) ) );
}

static  enum Filetype_108   detect_dash_filetype_dash_from_dash_filename454 (    struct StrView_27  filename3775 ) {
    struct Maybe_80  mext3784 = ( (  extension455 ) ( (  filename3775 ) ) );
    struct Maybe_80  dref3785 = (  mext3784 );
    if ( dref3785.tag == Maybe_80_None_t ) {
        return ( Filetype_108_Text );
    }
    else {
        if ( dref3785.tag == Maybe_80_Just_t ) {
            if ( ( (  eq485 ( ( dref3785 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string199 ) ( ( "kc" ) ,  ( 2 ) ) ) ) ) || (  eq485 ( ( dref3785 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string199 ) ( ( "kkc" ) ,  ( 3 ) ) ) ) ) ) ) {
                return ( Filetype_108_KC );
            } else {
                if ( (  eq485 ( ( dref3785 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string199 ) ( ( "md" ) ,  ( 2 ) ) ) ) ) ) {
                    return ( Filetype_108_Markdown );
                } else {
                    if ( (  eq485 ( ( dref3785 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string199 ) ( ( "gcode" ) ,  ( 5 ) ) ) ) ) ) {
                        return ( Filetype_108_GCode );
                    } else {
                        return ( Filetype_108_Text );
                    }
                }
            }
        }
    }
}

struct TypeSize_508 {
    size_t  f_size;
};

static  struct TypeSize_508   get_dash_typesize507 (  ) {
    uint8_t  temp509;
    return ( (struct TypeSize_508) { .f_size = ( sizeof( ( (  temp509 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr510 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   allocate506 (    enum CAllocator_10  dref1990 ,    size_t  count1992 ) {
    if (!(  dref1990 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1993 = ( ( ( (  get_dash_typesize507 ) ( ) ) ) .f_size );
    uint8_t *  ptr1994 = ( (  cast_dash_ptr510 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1993 ) , (  count1992 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1994 ) , .f_count = (  count1992 ) } );
}

struct StrConcat_513 {
    struct StrConcat_322  field0;
    struct StrView_27  field1;
};

static struct StrConcat_513 StrConcat_513_StrConcat (  struct StrConcat_322  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_513 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_516 {
    struct StrView_27  field0;
    struct StrConcat_513  field1;
};

static struct StrConcat_516 StrConcat_516_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_513  field1 ) {
    return ( struct StrConcat_516 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_515 {
    struct StrConcat_516  field0;
    struct Char_65  field1;
};

static struct StrConcat_515 StrConcat_515_StrConcat (  struct StrConcat_516  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_515 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str518 (    struct StrConcat_513  self1539 ) {
    struct StrConcat_513  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str517 (    struct StrConcat_516  self1539 ) {
    struct StrConcat_516  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str518 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str514 (    struct StrConcat_515  self1539 ) {
    struct StrConcat_515  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str517 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic512 (    struct StrConcat_513  errmsg1743 ) {
    ( (  print_dash_str514 ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_516_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1743 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Zip_520 {
    struct SliceIter_489  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

struct env521 {
    ;
    ;
    struct Slice_11  dest1895;
};

struct Tuple2_523 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_523 Tuple2_523_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_523 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion522 {
    enum Unit_8  (*fun) (  struct env521*  ,    struct Tuple2_523  );
    struct env521 env;
};

static  struct Zip_520   into_dash_iter525 (    struct Zip_520  self941 ) {
    return (  self941 );
}

struct Maybe_526 {
    enum {
        Maybe_526_None_t,
        Maybe_526_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_523  field0;
        } Maybe_526_Just_s;
    } stuff;
};

static struct Maybe_526 Maybe_526_Just (  struct Tuple2_523  field0 ) {
    return ( struct Maybe_526 ) { .tag = Maybe_526_Just_t, .stuff = { .Maybe_526_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_526   next527 (    struct Zip_520 *  self944 ) {
    struct Zip_520  copy945 = ( * (  self944 ) );
    while ( ( true ) ) {
        struct Maybe_477  dref946 = ( (  next497 ) ( ( & ( (  copy945 ) .f_left_dash_it ) ) ) );
        if ( dref946.tag == Maybe_477_None_t ) {
            return ( (struct Maybe_526) { .tag = Maybe_526_None_t } );
        }
        else {
            if ( dref946.tag == Maybe_477_Just_t ) {
                struct Maybe_155  dref948 = ( (  next422 ) ( ( & ( (  copy945 ) .f_right_dash_it ) ) ) );
                if ( dref948.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_526) { .tag = Maybe_526_None_t } );
                }
                else {
                    if ( dref948.tag == Maybe_155_Just_t ) {
                        ( (  next497 ) ( ( & ( ( * (  self944 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self944 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_526_Just ) ( ( ( Tuple2_523_Tuple2 ) ( ( dref946 .stuff .Maybe_477_Just_s .field0 ) ,  ( dref948 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each519 (    struct Zip_520  iterable1104 ,   struct envunion522  fun1106 ) {
    struct Zip_520  temp524 = ( (  into_dash_iter525 ) ( (  iterable1104 ) ) );
    struct Zip_520 *  it1107 = ( &temp524 );
    while ( ( true ) ) {
        struct Maybe_526  dref1108 = ( (  next527 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_526_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_526_Just_t ) {
                struct envunion522  temp528 = (  fun1106 );
                ( temp528.fun ( &temp528.env ,  ( dref1108 .stuff .Maybe_526_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_520   zip529 (    struct Slice_11  left952 ,    struct FromIter_416  right954 ) {
    struct SliceIter_489  left_dash_it955 = ( (  into_dash_iter503 ) ( (  left952 ) ) );
    struct FromIter_416  right_dash_it956 = ( (  into_dash_iter426 ) ( (  right954 ) ) );
    return ( (struct Zip_520) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

static  uint8_t *   get_dash_ptr532 (    struct Slice_11  slice1788 ,    size_t  i1790 ) {
    if ( ( (  cmp290 ( (  i1790 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1790 ) , ( (  slice1788 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1791 = ( (  offset_dash_ptr300 ) ( ( (  slice1788 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1790 ) ) ) ) );
    return (  elem_dash_ptr1791 );
}

static  enum Unit_8   set531 (    struct Slice_11  slice1805 ,    size_t  i1807 ,    uint8_t  x1809 ) {
    uint8_t *  ep1810 = ( (  get_dash_ptr532 ) ( (  slice1805 ) ,  (  i1807 ) ) );
    (*  ep1810 ) = (  x1809 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam530 (   struct env521* env ,    struct Tuple2_523  dref1896 ) {
    return ( (  set531 ) ( ( env->dest1895 ) ,  ( (  i32_dash_size412 ) ( ( dref1896 .field1 ) ) ) ,  ( dref1896 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to511 (    struct Slice_11  src1893 ,    struct Slice_11  dest1895 ) {
    if ( (  cmp290 ( ( (  src1893 ) .f_count ) , ( (  dest1895 ) .f_count ) ) == 2 ) ) {
        ( (  panic512 ) ( ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1893 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1895 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env521 envinst521 = {
        .dest1895 =  dest1895 ,
    };
    ( (  for_dash_each519 ) ( ( (  zip529 ) ( (  src1893 ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion522){ .fun = (  enum Unit_8  (*) (  struct env521*  ,    struct Tuple2_523  ) )lam530 , .env =  envinst521 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   char_dash_u8533 (    struct Char_65  c719 ) {
    struct CharDestructured_337  dref720 = ( (  destructure339 ) ( (  c719 ) ) );
    if ( dref720.tag == CharDestructured_337_Ref_t ) {
        return ( * ( ( dref720 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref720.tag == CharDestructured_337_Scalar_t ) {
            return ( (  u32_dash_u8144 ) ( ( ( dref720 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_27   clone_dash_0505 (    struct StrView_27  s2192 ,    enum CAllocator_10  al2194 ) {
    size_t  cnt2195 = ( ( (  s2192 ) .f_contents ) .f_count );
    struct Slice_11  nus2196 = ( (  allocate506 ) ( (  al2194 ) ,  (  op_dash_add311 ( (  cnt2195 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to511 ) ( ( (  s2192 ) .f_contents ) ,  (  nus2196 ) ) );
    ( (  set531 ) ( (  nus2196 ) ,  (  cnt2195 ) ,  ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2196 ) .f_ptr ) , .f_count = (  cnt2195 ) } ) } );
}

static  const char*   from_dash_charlike535 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr540 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of541 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed538 (  ) {
    FILE *  temp539;
    FILE *  x571 = (  temp539 );
    ( ( memset ) ( ( (  cast_dash_ptr540 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of541 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  FILE *   null_dash_ptr537 (  ) {
    return ( (  zeroed538 ) ( ) );
}

static  bool   is_dash_ptr_dash_null536 (    FILE *  p581 ) {
    return ( (  p581 ) == ( (  null_dash_ptr537 ) ( ) ) );
}

static  int32_t   seek_dash_end542 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  int32_t   seek_dash_set543 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct Char_65   nullchar544 (  ) {
    return ( (  from_dash_charlike346 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_80   try_dash_read_dash_contents534 (    const char*  filename3020 ,    enum CAllocator_10  al3022 ) {
    FILE *  file3023 = ( ( fopen ) ( (  filename3020 ) ,  ( (  from_dash_charlike535 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null536 ) ( (  file3023 ) ) ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    ( ( fseek ) ( (  file3023 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end542 ) ( ) ) ) );
    int32_t  file_dash_size3024 = ( ( ftell ) ( (  file3023 ) ) );
    ( ( fseek ) ( (  file3023 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set543 ) ( ) ) ) );
    struct Slice_11  file_dash_buf3025 = ( ( (  allocate506 ) ( (  al3022 ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( (  file_dash_size3024 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3025 ) .f_ptr ) ,  (  file_dash_size3024 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file3023 ) ) );
    ( (  set531 ) ( (  file_dash_buf3025 ) ,  ( (  i32_dash_size412 ) ( (  file_dash_size3024 ) ) ) ,  ( (  char_dash_u8533 ) ( ( (  nullchar544 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3023 ) ) );
    struct StrView_27  str3026 = ( (struct StrView_27) { .f_contents = ( (  subslice466 ) ( (  file_dash_buf3025 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub289 ( ( (  file_dash_buf3025 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_80_Just ) ( (  str3026 ) ) );
}

static  const char*   cast546 (    uint8_t *  x356 ) {
    return ( (const char* ) (  x356 ) );
}

static  const char*   as_dash_const_dash_str545 (    struct StrView_27  s2199 ) {
    return ( (  cast546 ) ( ( ( (  s2199 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr549 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free548 (    enum CAllocator_10  dref1996 ,    struct Slice_11  slice1998 ) {
    if (!(  dref1996 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr549 ) ( ( (  slice1998 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free547 (    struct StrView_27  s2207 ,    enum CAllocator_10  al2209 ) {
    ( (  free548 ) ( (  al2209 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2207 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

struct Tuple2_551 {
    struct Maybe_477  field0;
    struct Maybe_477  field1;
};

static struct Tuple2_551 Tuple2_551_Tuple2 (  struct Maybe_477  field0 ,  struct Maybe_477  field1 ) {
    return ( struct Tuple2_551 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq550 (    struct Maybe_477  l141 ,    struct Maybe_477  r143 ) {
    struct Tuple2_551  dref144 = ( ( Tuple2_551_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_477_None_t && dref144 .field1.tag == Maybe_477_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_477_Just_t && dref144 .field1.tag == Maybe_477_Just_t ) {
            return (  eq303 ( ( dref144 .field0 .stuff .Maybe_477_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_477_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  enum Ordering_158   cmp555 (    struct Pos_26  l3690 ,    struct Pos_26  r3692 ) {
    enum Ordering_158  dref3693 = ( (  cmp157 ) ( ( (  l3690 ) .f_line ) ,  ( (  r3692 ) .f_line ) ) );
    switch (  dref3693 ) {
        case Ordering_158_EQ : {
            return ( (  cmp157 ) ( ( (  l3690 ) .f_bi ) ,  ( (  r3692 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_158  els3694 =  dref3693;
            return (  els3694 );
            break;
        }
    }
}

static  struct Pos_26   min554 (    struct Pos_26  l1266 ,    struct Pos_26  r1268 ) {
    if ( (  cmp555 ( (  l1266 ) , (  r1268 ) ) == 0 ) ) {
        return (  l1266 );
    } else {
        return (  r1268 );
    }
}

static  struct Pos_26   max556 (    struct Pos_26  l1345 ,    struct Pos_26  r1347 ) {
    if ( (  cmp555 ( (  l1345 ) , (  r1347 ) ) == 2 ) ) {
        return (  l1345 );
    } else {
        return (  r1347 );
    }
}

static  bool   eq558 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq557 (    struct Pos_26  l3685 ,    struct Pos_26  r3687 ) {
    return ( (  eq558 ( ( (  l3685 ) .f_line ) , ( (  r3687 ) .f_line ) ) ) && (  eq558 ( ( (  l3685 ) .f_bi ) , ( (  r3687 ) .f_bi ) ) ) );
}

static  size_t   size559 (    struct List_14 *  l2170 ) {
    return ( ( * (  l2170 ) ) .f_count );
}

struct envunion562 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

static  struct Line_16 *   get_dash_ptr565 (    struct List_14 *  list2038 ,    size_t  i2040 ) {
    if ( ( (  cmp290 ( (  i2040 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2040 ) , ( ( * (  list2038 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2040 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2038 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr411 ) ( ( ( * (  list2038 ) ) .f_elements ) ,  (  i2040 ) ) );
}

static  struct Line_16   get564 (    struct List_14 *  list2048 ,    size_t  i2050 ) {
    return ( * ( (  get_dash_ptr565 ) ( (  list2048 ) ,  (  i2050 ) ) ) );
}

static  struct Slice_11   to_dash_slice566 (    struct List_9  l2163 ) {
    uint8_t *  ptr2164 = ( ( (  l2163 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2164 ) , .f_count = ( (  l2163 ) .f_count ) } );
}

static  enum Unit_8   set567 (    struct List_14 *  list2058 ,    size_t  i2060 ,    struct Line_16  elem2062 ) {
    if ( ( (  cmp290 ( (  i2060 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2060 ) , ( ( * (  list2058 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2060 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2058 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set410 ) ( ( ( * (  list2058 ) ) .f_elements ) ,  (  i2060 ) ,  (  elem2062 ) ) );
    return ( Unit_8_Unit );
}

struct env574 {
    struct env6 envinst6;
    struct List_9 *  list2135;
};

struct envunion575 {
    enum Unit_8  (*fun) (  struct env574*  ,    uint8_t  );
    struct env574 env;
};

static  enum Unit_8   for_dash_each573 (    struct Slice_11  iterable1104 ,   struct envunion575  fun1106 ) {
    struct SliceIter_489  temp576 = ( (  into_dash_iter503 ) ( (  iterable1104 ) ) );
    struct SliceIter_489 *  it1107 = ( &temp576 );
    while ( ( true ) ) {
        struct Maybe_477  dref1108 = ( (  next497 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_477_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_477_Just_t ) {
                struct envunion575  temp577 = (  fun1106 );
                ( temp577.fun ( &temp577.env ,  ( dref1108 .stuff .Maybe_477_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env583 {
    ;
    ;
    struct Slice_11  new_dash_slice2079;
};

struct envunion584 {
    enum Unit_8  (*fun) (  struct env583*  ,    struct Tuple2_523  );
    struct env583 env;
};

static  enum Unit_8   lam585 (   struct env583* env ,    struct Tuple2_523  dref2080 ) {
    return ( (  set531 ) ( ( env->new_dash_slice2079 ) ,  ( (  i32_dash_size412 ) ( ( dref2080 .field1 ) ) ) ,  ( dref2080 .field0 ) ) );
}

static  enum Unit_8   for_dash_each586 (    struct Zip_520  iterable1104 ,   struct envunion584  fun1106 ) {
    struct Zip_520  temp587 = ( (  into_dash_iter525 ) ( (  iterable1104 ) ) );
    struct Zip_520 *  it1107 = ( &temp587 );
    while ( ( true ) ) {
        struct Maybe_526  dref1108 = ( (  next527 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_526_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_526_Just_t ) {
                struct envunion584  temp588 = (  fun1106 );
                ( temp588.fun ( &temp588.env ,  ( dref1108 .stuff .Maybe_526_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full582 (   struct env1* env ,    struct List_9 *  list2078 ) {
    if ( (  eq399 ( ( ( * (  list2078 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2078 ) .f_elements = ( (  allocate506 ) ( ( ( * (  list2078 ) ) .f_al ) ,  ( env->starting_dash_size2073 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2078 ) ) .f_count ) , ( ( ( * (  list2078 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2079 = ( (  allocate506 ) ( ( ( * (  list2078 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2078 ) ) .f_count ) , ( env->growth_dash_factor2074 ) ) ) ) );
            struct env583 envinst583 = {
                .new_dash_slice2079 =  new_dash_slice2079 ,
            };
            struct envunion584  fun2083 = ( (struct envunion584){ .fun = (  enum Unit_8  (*) (  struct env583*  ,    struct Tuple2_523  ) )lam585 , .env =  envinst583 } );
            ( (  for_dash_each586 ) ( ( (  zip529 ) ( ( ( * (  list2078 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2083 ) ) );
            ( (  free548 ) ( ( ( * (  list2078 ) ) .f_al ) ,  ( ( * (  list2078 ) ) .f_elements ) ) );
            (*  list2078 ) .f_elements = (  new_dash_slice2079 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add580 (   struct env6* env ,    struct List_9 *  list2086 ,    uint8_t  elem2088 ) {
    struct envunion7  temp581 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full582 , .env =  env->envinst1 } );
    ( temp581.fun ( &temp581.env ,  (  list2086 ) ) );
    ( (  set531 ) ( ( ( * (  list2086 ) ) .f_elements ) ,  ( ( * (  list2086 ) ) .f_count ) ,  (  elem2088 ) ) );
    (*  list2086 ) .f_count = (  op_dash_add311 ( ( ( * (  list2086 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam578 (   struct env574* env ,    uint8_t  x2139 ) {
    struct envunion47  temp579 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add580 , .env =  env->envinst6 } );
    return ( temp579.fun ( &temp579.env ,  ( env->list2135 ) ,  (  x2139 ) ) );
}

static  enum Unit_8   add_dash_all572 (   struct env46* env ,    struct List_9 *  list2135 ,    struct Slice_11  it2137 ) {
    struct env574 envinst574 = {
        .envinst6 = env->envinst6 ,
        .list2135 =  list2135 ,
    };
    ( (  for_dash_each573 ) ( (  it2137 ) ,  ( (struct envunion575){ .fun = (  enum Unit_8  (*) (  struct env574*  ,    uint8_t  ) )lam578 , .env =  envinst574 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter569 (   struct env50* env ,    struct Slice_11  iter2176 ,    enum CAllocator_10  al2178 ) {
    struct List_9  temp570 = ( (  mk439 ) ( (  al2178 ) ) );
    struct List_9 *  list2179 = ( &temp570 );
    struct envunion51  temp571 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all572 , .env =  env->envinst46 } );
    ( temp571.fun ( &temp571.env ,  (  list2179 ) ,  (  iter2176 ) ) );
    return ( * (  list2179 ) );
}

static  struct StrView_27   or_dash_else590 (    struct Maybe_80  self1763 ,    struct StrView_27  alt1765 ) {
    struct Maybe_80  dref1766 = (  self1763 );
    if ( dref1766.tag == Maybe_80_None_t ) {
        return (  alt1765 );
    }
    else {
        if ( dref1766.tag == Maybe_80_Just_t ) {
            return ( dref1766 .stuff .Maybe_80_Just_s .field0 );
        }
    }
}

struct LineIter_592 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  struct Maybe_80   next593 (    struct LineIter_592 *  self2492 ) {
    if ( (  cmp290 ( ( ( * (  self2492 ) ) .f_last ) , ( ( ( ( * (  self2492 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    size_t  i2493 = ( ( * (  self2492 ) ) .f_last );
    while ( ( (  cmp290 ( (  i2493 ) , ( ( ( ( * (  self2492 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq303 ( ( (  get475 ) ( ( ( ( * (  self2492 ) ) .f_og ) .f_contents ) ,  (  i2493 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2493 = (  op_dash_add311 ( (  i2493 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2494 = ( (  byte_dash_substr484 ) ( ( ( * (  self2492 ) ) .f_og ) ,  ( ( * (  self2492 ) ) .f_last ) ,  (  i2493 ) ) );
    if ( (  cmp290 ( (  i2493 ) , ( ( ( ( * (  self2492 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2493 = (  op_dash_add311 ( (  i2493 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2492 ) .f_last = (  i2493 );
    return ( ( Maybe_80_Just ) ( (  line2494 ) ) );
}

static  struct LineIter_592   into_dash_iter595 (    struct LineIter_592  self2489 ) {
    return (  self2489 );
}

static  struct Maybe_80   head591 (    struct LineIter_592  it1172 ) {
    struct LineIter_592  temp594 = ( (  into_dash_iter595 ) ( (  it1172 ) ) );
    return ( (  next593 ) ( ( &temp594 ) ) );
}

static  struct LineIter_592   lines596 (    struct StrView_27  s2486 ) {
    return ( (struct LineIter_592) { .f_og = (  s2486 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env601 {
    struct Char_65  c2280;
    ;
};

struct envunion602 {
    bool  (*fun) (  struct env601*  ,    struct Char_65  );
    struct env601 env;
};

struct SplitIter_600 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion602  f_fun;
};

struct Drop_599 {
    struct SplitIter_600  field0;
    size_t  field1;
};

static struct Drop_599 Drop_599_Drop (  struct SplitIter_600  field0 ,  size_t  field1 ) {
    return ( struct Drop_599 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_598 {
    struct Drop_599  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_598   into_dash_iter603 (    struct Zip_598  self941 ) {
    return (  self941 );
}

static  struct Drop_599   into_dash_iter605 (    struct Drop_599  self858 ) {
    return (  self858 );
}

static  struct Zip_598   zip604 (    struct Drop_599  left952 ,    struct FromIter_416  right954 ) {
    struct Drop_599  left_dash_it955 = ( (  into_dash_iter605 ) ( (  left952 ) ) );
    struct FromIter_416  right_dash_it956 = ( (  into_dash_iter426 ) ( (  right954 ) ) );
    return ( (struct Zip_598) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

static  struct SplitIter_600   into_dash_iter607 (    struct SplitIter_600  self2285 ) {
    return (  self2285 );
}

static  struct Drop_599   drop606 (    struct SplitIter_600  iterable865 ,    size_t  i867 ) {
    struct SplitIter_600  it868 = ( (  into_dash_iter607 ) ( (  iterable865 ) ) );
    return ( ( Drop_599_Drop ) ( (  it868 ) ,  (  i867 ) ) );
}

static  struct SplitIter_600   split_dash_by_dash_filter609 (    struct StrView_27  s2273 ,   struct envunion602  fun2275 ) {
    return ( (struct SplitIter_600) { .f_og = (  s2273 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2275 ) } );
}

static  bool   lam610 (   struct env601* env ,    struct Char_65  cc2282 ) {
    return (  eq469 ( (  cc2282 ) , ( env->c2280 ) ) );
}

static  struct SplitIter_600   split_dash_by_dash_each608 (    struct StrView_27  s2278 ,    struct Char_65  c2280 ) {
    struct env601 envinst601 = {
        .c2280 =  c2280 ,
    };
    return ( (  split_dash_by_dash_filter609 ) ( (  s2278 ) ,  ( (struct envunion602){ .fun = (  bool  (*) (  struct env601*  ,    struct Char_65  ) )lam610 , .env =  envinst601 } ) ) );
}

struct Tuple2_613 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_613 Tuple2_613_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_613 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_612 {
    enum {
        Maybe_612_None_t,
        Maybe_612_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_613  field0;
        } Maybe_612_Just_s;
    } stuff;
};

static struct Maybe_612 Maybe_612_Just (  struct Tuple2_613  field0 ) {
    return ( struct Maybe_612 ) { .tag = Maybe_612_Just_t, .stuff = { .Maybe_612_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_80   next616 (    struct SplitIter_600 *  self2288 ) {
    if ( (  cmp290 ( ( ( * (  self2288 ) ) .f_last ) , ( ( ( ( * (  self2288 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    size_t  i2289 = ( ( * (  self2288 ) ) .f_last );
    while ( (  cmp290 ( (  i2289 ) , ( ( ( ( * (  self2288 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2290 = ( (  get_dash_ptr532 ) ( ( ( ( * (  self2288 ) ) .f_og ) .f_contents ) ,  (  i2289 ) ) );
        struct Char_65  c2291 = ( (  scan_dash_from_dash_mem305 ) ( (  ptr2290 ) ) );
        struct envunion602  temp617 = ( ( * (  self2288 ) ) .f_fun );
        if ( ( temp617.fun ( &temp617.env ,  (  c2291 ) ) ) ) {
            break;
        }
        i2289 = (  op_dash_add311 ( (  i2289 ) , ( (  next_dash_char306 ) ( (  ptr2290 ) ) ) ) );
    }
    struct StrView_27  line2292 = ( (  byte_dash_substr484 ) ( ( ( * (  self2288 ) ) .f_og ) ,  ( ( * (  self2288 ) ) .f_last ) ,  (  i2289 ) ) );
    i2289 = (  op_dash_add311 ( (  i2289 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2288 ) .f_last = (  i2289 );
    return ( ( Maybe_80_Just ) ( (  line2292 ) ) );
}

static  struct Maybe_80   next615 (    struct Drop_599 *  dref860 ) {
    while ( (  cmp290 ( ( (* dref860 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next616 ) ( ( & ( (* dref860 ) .field0 ) ) ) );
        (* dref860 ) .field1 = (  op_dash_sub289 ( ( (* dref860 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next616 ) ( ( & ( (* dref860 ) .field0 ) ) ) );
}

static  struct Maybe_612   next614 (    struct Zip_598 *  self944 ) {
    struct Zip_598  copy945 = ( * (  self944 ) );
    while ( ( true ) ) {
        struct Maybe_80  dref946 = ( (  next615 ) ( ( & ( (  copy945 ) .f_left_dash_it ) ) ) );
        if ( dref946.tag == Maybe_80_None_t ) {
            return ( (struct Maybe_612) { .tag = Maybe_612_None_t } );
        }
        else {
            if ( dref946.tag == Maybe_80_Just_t ) {
                struct Maybe_155  dref948 = ( (  next422 ) ( ( & ( (  copy945 ) .f_right_dash_it ) ) ) );
                if ( dref948.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_612) { .tag = Maybe_612_None_t } );
                }
                else {
                    if ( dref948.tag == Maybe_155_Just_t ) {
                        ( (  next615 ) ( ( & ( ( * (  self944 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self944 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_612_Just ) ( ( ( Tuple2_613_Tuple2 ) ( ( dref946 .stuff .Maybe_80_Just_s .field0 ) ,  ( dref948 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion620 {
    struct List_9  (*fun) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  );
    struct env50 env;
};

static  enum Unit_8   insert622 (   struct env37* env ,    struct List_14 *  list2091 ,    size_t  i2093 ,    struct Line_16  elem2095 ) {
    if ( ( (  cmp290 ( (  i2093 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2093 ) , ( ( * (  list2091 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2093 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2091 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq399 ( ( ( * (  list2091 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp623 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add396 , .env =  env->envinst12 } );
        ( temp623.fun ( &temp623.env ,  (  list2091 ) ,  (  elem2095 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp624 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full398 , .env =  env->envinst2 } );
    ( temp624.fun ( &temp624.env ,  (  list2091 ) ) );
    size_t  ii2096 = (  op_dash_sub289 ( ( ( * (  list2091 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp290 ( (  ii2096 ) , (  i2093 ) ) != 0 ) ) {
        ( (  set410 ) ( ( ( * (  list2091 ) ) .f_elements ) ,  (  op_dash_add311 ( (  ii2096 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get564 ) ( (  list2091 ) ,  (  ii2096 ) ) ) ) );
        if ( (  eq399 ( (  ii2096 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2096 = (  op_dash_sub289 ( (  ii2096 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set410 ) ( ( ( * (  list2091 ) ) .f_elements ) ,  (  i2093 ) ,  (  elem2095 ) ) );
    (*  list2091 ) .f_count = (  op_dash_add311 ( ( ( * (  list2091 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion626 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  enum Unit_8   free628 (    struct List_9 *  list2072 ) {
    ( (  free548 ) ( ( ( * (  list2072 ) ) .f_al ) ,  ( ( * (  list2072 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line627 (    struct Line_16 *  line3771 ) {
    ( (  free628 ) ( ( & ( ( * (  line3771 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot563 (   struct env96* env ,    struct TextBuf_105 *  self3819 ,    struct Pos_26  p3821 ,    struct StrView_27  bytes3823 ) {
    enum CAllocator_10  al3824 = ( ( ( * (  self3819 ) ) .f_buf ) .f_al );
    struct List_14 *  buf3825 = ( & ( ( * (  self3819 ) ) .f_buf ) );
    struct Line_16  extracted_dash_line_dash_buf3826 = ( (  get564 ) ( (  buf3825 ) ,  ( (  i32_dash_size412 ) ( ( (  p3821 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3827 = ( (  from465 ) ( ( (  to_dash_slice566 ) ( ( (  extracted_dash_line_dash_buf3826 ) .f_line ) ) ) ,  ( (  i32_dash_size412 ) ( ( (  p3821 ) .f_bi ) ) ) ) );
    struct envunion97  temp568 = ( (struct envunion97){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter569 , .env =  env->envinst50 } );
    ( (  set567 ) ( (  buf3825 ) ,  ( (  i32_dash_size412 ) ( ( (  p3821 ) .f_line ) ) ) ,  ( (  mk_dash_line431 ) ( ( temp568.fun ( &temp568.env ,  ( (  subslice466 ) ( ( (  to_dash_slice566 ) ( ( (  extracted_dash_line_dash_buf3826 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( ( (  p3821 ) .f_bi ) ) ) ) ) ,  (  al3824 ) ) ) ) ) ) );
    struct Line_16 *  last_dash_line3828 = ( (  get_dash_ptr565 ) ( (  buf3825 ) ,  ( (  i32_dash_size412 ) ( ( (  p3821 ) .f_line ) ) ) ) );
    struct envunion99  temp589 = ( (struct envunion99){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all572 , .env =  env->envinst46 } );
    ( temp589.fun ( &temp589.env ,  ( & ( ( * (  last_dash_line3828 ) ) .f_line ) ) ,  ( ( (  or_dash_else590 ) ( ( (  head591 ) ( ( (  lines596 ) ( (  bytes3823 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3829 = (  from_dash_integral56 ( 0 ) );
    struct Zip_598  temp597 =  into_dash_iter603 ( ( (  zip604 ) ( ( (  drop606 ) ( ( (  split_dash_by_dash_each608 ) ( (  bytes3823 ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_612  __cond611 =  next614 (&temp597);
        if (  __cond611 .tag == 0 ) {
            break;
        }
        struct Tuple2_613  dref3830 =  __cond611 .stuff .Maybe_612_Just_s .field0;
        struct envunion620  temp619 = ( (struct envunion620){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter569 , .env =  env->envinst50 } );
        struct Line_16  temp618 = ( (  mk_dash_line431 ) ( ( temp619.fun ( &temp619.env ,  ( ( dref3830 .field0 ) .f_contents ) ,  (  al3824 ) ) ) ) );
        struct Line_16 *  nuline3833 = ( &temp618 );
        size_t  next_dash_line3834 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( ( (  p3821 ) .f_line ) , ( dref3830 .field1 ) ) ) ) );
        struct envunion98  temp621 = ( (struct envunion98){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_14 *  ,    size_t  ,    struct Line_16  ) )insert622 , .env =  env->envinst37 } );
        ( temp621.fun ( &temp621.env ,  (  buf3825 ) ,  (  next_dash_line3834 ) ,  ( * (  nuline3833 ) ) ) );
        last_dash_line3828 = ( (  get_dash_ptr565 ) ( (  buf3825 ) ,  (  next_dash_line3834 ) ) );
        lines_dash_added3829 = (  op_dash_add159 ( (  lines_dash_added3829 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion626  temp625 = ( (struct envunion626){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all572 , .env =  env->envinst46 } );
    ( temp625.fun ( &temp625.env ,  ( & ( ( * (  last_dash_line3828 ) ) .f_line ) ) ,  (  remaining3827 ) ) );
    ( (  free_dash_line627 ) ( ( & (  extracted_dash_line_dash_buf3826 ) ) ) );
    return (  lines_dash_added3829 );
}

static  size_t   size629 (    struct List_9 *  l2170 ) {
    return ( ( * (  l2170 ) ) .f_count );
}

struct StrConcat_635 {
    struct StrConcat_84  field0;
    struct Char_65  field1;
};

static struct StrConcat_635 StrConcat_635_StrConcat (  struct StrConcat_84  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_635 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_634 {
    struct StrConcat_635  field0;
    size_t  field1;
};

static struct StrConcat_634 StrConcat_634_StrConcat (  struct StrConcat_635  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_634 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_633 {
    struct StrConcat_634  field0;
    struct Char_65  field1;
};

static struct StrConcat_633 StrConcat_633_StrConcat (  struct StrConcat_634  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_633 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_638 {
    struct StrView_27  field0;
    struct StrConcat_633  field1;
};

static struct StrConcat_638 StrConcat_638_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_633  field1 ) {
    return ( struct StrConcat_638 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_637 {
    struct StrConcat_638  field0;
    struct Char_65  field1;
};

static struct StrConcat_637 StrConcat_637_StrConcat (  struct StrConcat_638  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_637 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str642 (    struct StrConcat_635  self1539 ) {
    struct StrConcat_635  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str333 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str641 (    struct StrConcat_634  self1539 ) {
    struct StrConcat_634  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str642 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str334 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str640 (    struct StrConcat_633  self1539 ) {
    struct StrConcat_633  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str641 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str639 (    struct StrConcat_638  self1539 ) {
    struct StrConcat_638  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str640 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str636 (    struct StrConcat_637  self1539 ) {
    struct StrConcat_637  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str639 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic632 (    struct StrConcat_633  errmsg1743 ) {
    ( (  print_dash_str636 ) ( ( ( StrConcat_637_StrConcat ) ( ( ( StrConcat_638_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1743 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Drop_644 {
    struct Zip_520  field0;
    size_t  field1;
};

static struct Drop_644 Drop_644_Drop (  struct Zip_520  field0 ,  size_t  field1 ) {
    return ( struct Drop_644 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env645 {
    ;
    ;
    size_t  num_dash_elems2104;
    struct List_9 *  list2099;
    ;
};

struct envunion646 {
    enum Unit_8  (*fun) (  struct env645*  ,    struct Tuple2_523  );
    struct env645 env;
};

static  struct Drop_644   into_dash_iter648 (    struct Drop_644  self858 ) {
    return (  self858 );
}

static  struct Maybe_526   next649 (    struct Drop_644 *  dref860 ) {
    while ( (  cmp290 ( ( (* dref860 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next527 ) ( ( & ( (* dref860 ) .field0 ) ) ) );
        (* dref860 ) .field1 = (  op_dash_sub289 ( ( (* dref860 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next527 ) ( ( & ( (* dref860 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each643 (    struct Drop_644  iterable1104 ,   struct envunion646  fun1106 ) {
    struct Drop_644  temp647 = ( (  into_dash_iter648 ) ( (  iterable1104 ) ) );
    struct Drop_644 *  it1107 = ( &temp647 );
    while ( ( true ) ) {
        struct Maybe_526  dref1108 = ( (  next649 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_526_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_526_Just_t ) {
                struct envunion646  temp650 = (  fun1106 );
                ( temp650.fun ( &temp650.env ,  ( dref1108 .stuff .Maybe_526_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_644   drop651 (    struct Zip_520  iterable865 ,    size_t  i867 ) {
    struct Zip_520  it868 = ( (  into_dash_iter525 ) ( (  iterable865 ) ) );
    return ( ( Drop_644_Drop ) ( (  it868 ) ,  (  i867 ) ) );
}

static  struct SliceIter_489   into_dash_iter653 (    struct List_9  self2065 ) {
    return ( (  into_dash_iter503 ) ( ( (  subslice466 ) ( ( (  self2065 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2065 ) .f_count ) ) ) ) );
}

static  struct Zip_520   zip652 (    struct List_9  left952 ,    struct FromIter_416  right954 ) {
    struct SliceIter_489  left_dash_it955 = ( (  into_dash_iter653 ) ( (  left952 ) ) );
    struct FromIter_416  right_dash_it956 = ( (  into_dash_iter426 ) ( (  right954 ) ) );
    return ( (struct Zip_520) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

static  enum Unit_8   set655 (    struct List_9 *  list2058 ,    size_t  i2060 ,    uint8_t  elem2062 ) {
    if ( ( (  cmp290 ( (  i2060 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2060 ) , ( ( * (  list2058 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2060 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2058 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set531 ) ( ( ( * (  list2058 ) ) .f_elements ) ,  (  i2060 ) ,  (  elem2062 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam654 (   struct env645* env ,    struct Tuple2_523  dref2105 ) {
    return ( (  set655 ) ( ( env->list2099 ) ,  (  op_dash_sub289 ( ( (  i32_dash_size412 ) ( ( dref2105 .field1 ) ) ) , ( env->num_dash_elems2104 ) ) ) ,  ( dref2105 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range631 (   struct env40* env ,    struct List_9 *  list2099 ,    size_t  from2101 ,    size_t  to_dash_excl2103 ) {
    if ( (  cmp290 ( (  to_dash_excl2103 ) , (  from2101 ) ) == 0 ) ) {
        ( (  panic632 ) ( ( ( StrConcat_633_StrConcat ) ( ( ( StrConcat_634_StrConcat ) ( ( ( StrConcat_635_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2101 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2103 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  from2101 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2101 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2099 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  to_dash_excl2103 ) , ( ( * (  list2099 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2103 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2099 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2104 = (  op_dash_sub289 ( (  to_dash_excl2103 ) , (  from2101 ) ) );
    struct env645 envinst645 = {
        .num_dash_elems2104 =  num_dash_elems2104 ,
        .list2099 =  list2099 ,
    };
    ( (  for_dash_each643 ) ( ( (  drop651 ) ( ( (  zip652 ) ( ( * (  list2099 ) ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add311 ( (  from2101 ) , (  num_dash_elems2104 ) ) ) ) ) ,  ( (struct envunion646){ .fun = (  enum Unit_8  (*) (  struct env645*  ,    struct Tuple2_523  ) )lam654 , .env =  envinst645 } ) ) );
    (*  list2099 ) .f_count = (  op_dash_sub289 ( ( ( * (  list2099 ) ) .f_count ) , (  num_dash_elems2104 ) ) );
    size_t  capacity2108 = ( ( ( * (  list2099 ) ) .f_elements ) .f_count );
    if ( (  cmp290 ( (  op_dash_mul405 ( ( ( * (  list2099 ) ) .f_count ) , ( env->shrink_dash_factor2075 ) ) ) , (  capacity2108 ) ) == 0 ) ) {
        if ( (  eq399 ( ( ( * (  list2099 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free548 ) ( ( ( * (  list2099 ) ) .f_al ) ,  ( ( * (  list2099 ) ) .f_elements ) ) );
            (*  list2099 ) .f_elements = ( (  empty440 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2109 = (  op_dash_mul405 ( (  op_dash_add311 ( (  op_dash_div342 ( ( ( * (  list2099 ) ) .f_count ) , ( env->shrink_dash_factor2075 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2075 ) ) );
        struct Slice_11  new_dash_slice2110 = ( (  allocate506 ) ( ( ( * (  list2099 ) ) .f_al ) ,  (  new_dash_size2109 ) ) );
        ( (  copy_dash_to511 ) ( ( (  subslice466 ) ( ( ( * (  list2099 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2099 ) ) .f_count ) ) ) ,  (  new_dash_slice2110 ) ) );
        ( (  free548 ) ( ( ( * (  list2099 ) ) .f_al ) ,  ( ( * (  list2099 ) ) .f_elements ) ) );
        (*  list2099 ) .f_elements = (  new_dash_slice2110 );
    }
    return ( Unit_8_Unit );
}

struct envunion657 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

static  enum Unit_8   trim658 (    struct List_9 *  l2152 ,    size_t  new_dash_count2154 ) {
    (*  l2152 ) .f_count = ( (  min467 ) ( (  new_dash_count2154 ) ,  ( ( * (  l2152 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min659 (    int32_t  l1266 ,    int32_t  r1268 ) {
    if ( (  cmp157 ( (  l1266 ) , (  r1268 ) ) == 0 ) ) {
        return (  l1266 );
    } else {
        return (  r1268 );
    }
}

struct Maybe_662 {
    enum {
        Maybe_662_None_t,
        Maybe_662_Just_t,
    } tag;
    union {
        struct {
            struct Slice_11  field0;
        } Maybe_662_Just_s;
    } stuff;
};

static struct Maybe_662 Maybe_662_Just (  struct Slice_11  field0 ) {
    return ( struct Maybe_662 ) { .tag = Maybe_662_Just_t, .stuff = { .Maybe_662_Just_s = { .field0 = field0 } } };
};

static  struct Slice_11   or_dash_else661 (    struct Maybe_662  self1763 ,    struct Slice_11  alt1765 ) {
    struct Maybe_662  dref1766 = (  self1763 );
    if ( dref1766.tag == Maybe_662_None_t ) {
        return (  alt1765 );
    }
    else {
        if ( dref1766.tag == Maybe_662_Just_t ) {
            return ( dref1766 .stuff .Maybe_662_Just_s .field0 );
        }
    }
}

static  struct Maybe_662   fmap_dash_maybe663 (    struct Maybe_376  x1305 ,    struct Slice_11 (*  fun1307 )(    struct Line_16  ) ) {
    struct Maybe_376  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_376_None_t ) {
        return ( (struct Maybe_662) { .tag = Maybe_662_None_t } );
    }
    else {
        if ( dref1308.tag == Maybe_376_Just_t ) {
            return ( ( Maybe_662_Just ) ( ( (  fun1307 ) ( ( dref1308 .stuff .Maybe_376_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_376   try_dash_get664 (    struct List_14 *  list2053 ,    size_t  i2055 ) {
    if ( (  cmp290 ( (  i2055 ) , ( ( * (  list2053 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_376) { .tag = Maybe_376_None_t } );
    }
    return ( ( Maybe_376_Just ) ( ( (  get564 ) ( (  list2053 ) ,  (  i2055 ) ) ) ) );
}

static  struct Slice_11   lam665 (    struct Line_16  line3852 ) {
    return ( (  to_dash_slice566 ) ( ( (  line3852 ) .f_line ) ) );
}

struct StrConcat_670 {
    struct StrView_27  field0;
    struct StrView_27  field1;
};

static struct StrConcat_670 StrConcat_670_StrConcat (  struct StrView_27  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_670 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_669 {
    struct StrConcat_670  field0;
    struct Char_65  field1;
};

static struct StrConcat_669 StrConcat_669_StrConcat (  struct StrConcat_670  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_669 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str671 (    struct StrConcat_670  self1539 ) {
    struct StrConcat_670  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str668 (    struct StrConcat_669  self1539 ) {
    struct StrConcat_669  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str671 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert667 (    bool  cond1749 ,    struct StrView_27  msg1751 ) {
    if ( ( ! (  cond1749 ) ) ) {
        ( (  print_dash_str668 ) ( ( ( StrConcat_669_StrConcat ) ( ( ( StrConcat_670_StrConcat ) ( ( (  from_dash_string199 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1751 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_675 {
    struct Zip_414  field0;
    size_t  field1;
};

static struct Drop_675 Drop_675_Drop (  struct Zip_414  field0 ,  size_t  field1 ) {
    return ( struct Drop_675 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env676 {
    ;
    ;
    size_t  num_dash_elems2104;
    struct List_14 *  list2099;
    ;
};

struct envunion677 {
    enum Unit_8  (*fun) (  struct env676*  ,    struct Tuple2_408  );
    struct env676 env;
};

static  struct Drop_675   into_dash_iter679 (    struct Drop_675  self858 ) {
    return (  self858 );
}

static  struct Maybe_419   next680 (    struct Drop_675 *  dref860 ) {
    while ( (  cmp290 ( ( (* dref860 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next420 ) ( ( & ( (* dref860 ) .field0 ) ) ) );
        (* dref860 ) .field1 = (  op_dash_sub289 ( ( (* dref860 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next420 ) ( ( & ( (* dref860 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each674 (    struct Drop_675  iterable1104 ,   struct envunion677  fun1106 ) {
    struct Drop_675  temp678 = ( (  into_dash_iter679 ) ( (  iterable1104 ) ) );
    struct Drop_675 *  it1107 = ( &temp678 );
    while ( ( true ) ) {
        struct Maybe_419  dref1108 = ( (  next680 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_419_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_419_Just_t ) {
                struct envunion677  temp681 = (  fun1106 );
                ( temp681.fun ( &temp681.env ,  ( dref1108 .stuff .Maybe_419_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_675   drop682 (    struct Zip_414  iterable865 ,    size_t  i867 ) {
    struct Zip_414  it868 = ( (  into_dash_iter418 ) ( (  iterable865 ) ) );
    return ( ( Drop_675_Drop ) ( (  it868 ) ,  (  i867 ) ) );
}

static  struct Slice_15   subslice685 (    struct Slice_15  slice1818 ,    size_t  from1820 ,    size_t  to1822 ) {
    struct Line_16 *  begin_dash_ptr1823 = ( (  offset_dash_ptr391 ) ( ( (  slice1818 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1820 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1820 ) , (  to1822 ) ) != 0 ) || (  cmp290 ( (  from1820 ) , ( (  slice1818 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1824 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1822 ) ,  ( (  slice1818 ) .f_count ) ) ) , (  from1820 ) ) );
    return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  count1824 ) } );
}

static  struct SliceIter_415   into_dash_iter684 (    struct List_14  self2065 ) {
    return ( (  into_dash_iter425 ) ( ( (  subslice685 ) ( ( (  self2065 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2065 ) .f_count ) ) ) ) );
}

static  struct Zip_414   zip683 (    struct List_14  left952 ,    struct FromIter_416  right954 ) {
    struct SliceIter_415  left_dash_it955 = ( (  into_dash_iter684 ) ( (  left952 ) ) );
    struct FromIter_416  right_dash_it956 = ( (  into_dash_iter426 ) ( (  right954 ) ) );
    return ( (struct Zip_414) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

static  enum Unit_8   lam686 (   struct env676* env ,    struct Tuple2_408  dref2105 ) {
    return ( (  set567 ) ( ( env->list2099 ) ,  (  op_dash_sub289 ( ( (  i32_dash_size412 ) ( ( dref2105 .field1 ) ) ) , ( env->num_dash_elems2104 ) ) ) ,  ( dref2105 .field0 ) ) );
}

struct env689 {
    ;
    ;
    struct Slice_15  dest1895;
};

struct envunion690 {
    enum Unit_8  (*fun) (  struct env689*  ,    struct Tuple2_408  );
    struct env689 env;
};

static  enum Unit_8   for_dash_each688 (    struct Zip_414  iterable1104 ,   struct envunion690  fun1106 ) {
    struct Zip_414  temp691 = ( (  into_dash_iter418 ) ( (  iterable1104 ) ) );
    struct Zip_414 *  it1107 = ( &temp691 );
    while ( ( true ) ) {
        struct Maybe_419  dref1108 = ( (  next420 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_419_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_419_Just_t ) {
                struct envunion690  temp692 = (  fun1106 );
                ( temp692.fun ( &temp692.env ,  ( dref1108 .stuff .Maybe_419_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam693 (   struct env689* env ,    struct Tuple2_408  dref1896 ) {
    return ( (  set410 ) ( ( env->dest1895 ) ,  ( (  i32_dash_size412 ) ( ( dref1896 .field1 ) ) ) ,  ( dref1896 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to687 (    struct Slice_15  src1893 ,    struct Slice_15  dest1895 ) {
    if ( (  cmp290 ( ( (  src1893 ) .f_count ) , ( (  dest1895 ) .f_count ) ) == 2 ) ) {
        ( (  panic512 ) ( ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1893 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1895 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env689 envinst689 = {
        .dest1895 =  dest1895 ,
    };
    ( (  for_dash_each688 ) ( ( (  zip424 ) ( (  src1893 ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion690){ .fun = (  enum Unit_8  (*) (  struct env689*  ,    struct Tuple2_408  ) )lam693 , .env =  envinst689 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range673 (   struct env41* env ,    struct List_14 *  list2099 ,    size_t  from2101 ,    size_t  to_dash_excl2103 ) {
    if ( (  cmp290 ( (  to_dash_excl2103 ) , (  from2101 ) ) == 0 ) ) {
        ( (  panic632 ) ( ( ( StrConcat_633_StrConcat ) ( ( ( StrConcat_634_StrConcat ) ( ( ( StrConcat_635_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2101 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2103 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  from2101 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2101 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2099 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  to_dash_excl2103 ) , ( ( * (  list2099 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2103 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2099 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2104 = (  op_dash_sub289 ( (  to_dash_excl2103 ) , (  from2101 ) ) );
    struct env676 envinst676 = {
        .num_dash_elems2104 =  num_dash_elems2104 ,
        .list2099 =  list2099 ,
    };
    ( (  for_dash_each674 ) ( ( (  drop682 ) ( ( (  zip683 ) ( ( * (  list2099 ) ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add311 ( (  from2101 ) , (  num_dash_elems2104 ) ) ) ) ) ,  ( (struct envunion677){ .fun = (  enum Unit_8  (*) (  struct env676*  ,    struct Tuple2_408  ) )lam686 , .env =  envinst676 } ) ) );
    (*  list2099 ) .f_count = (  op_dash_sub289 ( ( ( * (  list2099 ) ) .f_count ) , (  num_dash_elems2104 ) ) );
    size_t  capacity2108 = ( ( ( * (  list2099 ) ) .f_elements ) .f_count );
    if ( (  cmp290 ( (  op_dash_mul405 ( ( ( * (  list2099 ) ) .f_count ) , ( env->shrink_dash_factor2075 ) ) ) , (  capacity2108 ) ) == 0 ) ) {
        if ( (  eq399 ( ( ( * (  list2099 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free428 ) ( ( ( * (  list2099 ) ) .f_al ) ,  ( ( * (  list2099 ) ) .f_elements ) ) );
            (*  list2099 ) .f_elements = ( (  empty362 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2109 = (  op_dash_mul405 ( (  op_dash_add311 ( (  op_dash_div342 ( ( ( * (  list2099 ) ) .f_count ) , ( env->shrink_dash_factor2075 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2075 ) ) );
        struct Slice_15  new_dash_slice2110 = ( (  allocate400 ) ( ( ( * (  list2099 ) ) .f_al ) ,  (  new_dash_size2109 ) ) );
        ( (  copy_dash_to687 ) ( ( (  subslice685 ) ( ( ( * (  list2099 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2099 ) ) .f_count ) ) ) ,  (  new_dash_slice2110 ) ) );
        ( (  free428 ) ( ( ( * (  list2099 ) ) .f_al ) ,  ( ( * (  list2099 ) ) .f_elements ) ) );
        (*  list2099 ) .f_elements = (  new_dash_slice2110 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action553 (   struct env100* env ,    struct TextBuf_105 *  self3837 ,    struct Pos_26  from_dash_pos3839 ,    struct Pos_26  to_dash_pos3841 ,    struct StrView_27  bytes3843 ) {
    struct Pos_26  from3844 = ( (  min554 ) ( (  from_dash_pos3839 ) ,  (  to_dash_pos3841 ) ) );
    struct Pos_26  to3845 = ( (  max556 ) ( (  from_dash_pos3839 ) ,  (  to_dash_pos3841 ) ) );
    if ( (  eq557 ( (  to3845 ) , (  from3844 ) ) ) ) {
        enum CAllocator_10  al3846 = ( ( ( * (  self3837 ) ) .f_buf ) .f_al );
        if ( ( (  eq399 ( ( (  size559 ) ( ( & ( ( * (  self3837 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size412 ) ( ( (  from3844 ) .f_line ) ) ) ) ) && (  eq558 ( ( (  from3844 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion103  temp560 = ( (struct envunion103){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add396 , .env =  env->envinst12 } );
            ( temp560.fun ( &temp560.env ,  ( & ( ( * (  self3837 ) ) .f_buf ) ) ,  ( (  mk_dash_line431 ) ( ( (  mk439 ) ( (  al3846 ) ) ) ) ) ) );
        }
        struct envunion562  temp561 = ( (struct envunion562){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot563 , .env =  env->envinst96 } );
        ( temp561.fun ( &temp561.env ,  (  self3837 ) ,  (  from3844 ) ,  (  bytes3843 ) ) );
    } else {
        struct List_14 *  lines_dash_buf3847 = ( & ( ( * (  self3837 ) ) .f_buf ) );
        struct Line_16 *  first_dash_line3848 = ( (  get_dash_ptr565 ) ( (  lines_dash_buf3847 ) ,  ( (  i32_dash_size412 ) ( ( (  from3844 ) .f_line ) ) ) ) );
        (*  first_dash_line3848 ) .f_invalidated = ( true );
        if ( ( (  eq558 ( ( (  from3844 ) .f_line ) , ( (  to3845 ) .f_line ) ) ) && (  cmp157 ( ( (  to3845 ) .f_bi ) , (  op_dash_add159 ( ( (  size_dash_i32329 ) ( ( (  size629 ) ( ( & ( ( * (  first_dash_line3848 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion101  temp630 = ( (struct envunion101){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range631 , .env =  env->envinst40 } );
            ( temp630.fun ( &temp630.env ,  ( & ( ( * (  first_dash_line3848 ) ) .f_line ) ) ,  ( (  i32_dash_size412 ) ( ( (  from3844 ) .f_bi ) ) ) ,  ( (  i32_dash_size412 ) ( ( (  to3845 ) .f_bi ) ) ) ) );
            struct envunion657  temp656 = ( (struct envunion657){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot563 , .env =  env->envinst96 } );
            ( temp656.fun ( &temp656.env ,  (  self3837 ) ,  (  from3844 ) ,  (  bytes3843 ) ) );
        } else {
            ( (  trim658 ) ( ( & ( ( * (  first_dash_line3848 ) ) .f_line ) ) ,  ( (  i32_dash_size412 ) ( ( (  from3844 ) .f_bi ) ) ) ) );
            struct Line_16 *  last_dash_line3849 = ( (  get_dash_ptr565 ) ( (  lines_dash_buf3847 ) ,  ( (  i32_dash_size412 ) ( ( (  to3845 ) .f_line ) ) ) ) );
            (*  last_dash_line3849 ) .f_invalidated = ( true );
            to3845 .f_bi = ( (  min659 ) ( ( (  to3845 ) .f_bi ) ,  (  op_dash_add159 ( ( (  size_dash_i32329 ) ( ( (  size629 ) ( ( & ( ( * (  last_dash_line3849 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq558 ( ( (  to3845 ) .f_bi ) , (  op_dash_add159 ( ( (  size_dash_i32329 ) ( ( (  size629 ) ( ( & ( ( * (  last_dash_line3849 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to3845 .f_line = (  op_dash_add159 ( ( (  to3845 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to3845 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion104  temp660 = ( (struct envunion104){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot563 , .env =  env->envinst96 } );
            int32_t  lines_dash_added3850 = ( temp660.fun ( &temp660.env ,  (  self3837 ) ,  (  from3844 ) ,  (  bytes3843 ) ) );
            to3845 .f_line = (  op_dash_add159 ( ( (  to3845 ) .f_line ) , (  lines_dash_added3850 ) ) );
            from3844 .f_line = (  op_dash_add159 ( ( (  from3844 ) .f_line ) , (  lines_dash_added3850 ) ) );
            struct Slice_11  last_dash_line3853 = ( (  or_dash_else661 ) ( ( (  fmap_dash_maybe663 ) ( ( (  try_dash_get664 ) ( (  lines_dash_buf3847 ) ,  ( (  i32_dash_size412 ) ( ( (  to3845 ) .f_line ) ) ) ) ) ,  (  lam665 ) ) ) ,  ( (  empty440 ) ( ) ) ) );
            struct envunion109  temp666 = ( (struct envunion109){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all572 , .env =  env->envinst46 } );
            ( temp666.fun ( &temp666.env ,  ( & ( ( * (  first_dash_line3848 ) ) .f_line ) ) ,  ( (  from465 ) ( (  last_dash_line3853 ) ,  ( (  i32_dash_size412 ) ( ( (  to3845 ) .f_bi ) ) ) ) ) ) );
            ( (  assert667 ) ( (  cmp157 ( ( (  to3845 ) .f_line ) , ( (  from3844 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string199 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion102  temp672 = ( (struct envunion102){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  ) )remove_dash_range673 , .env =  env->envinst41 } );
            ( temp672.fun ( &temp672.env ,  ( & ( ( * (  self3837 ) ) .f_buf ) ) ,  ( (  i32_dash_size412 ) ( (  op_dash_add159 ( ( (  from3844 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( ( (  to3845 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk694 (    int32_t  line3697 ,    int32_t  bi3699 ) {
    return ( (struct Pos_26) { .f_line = (  line3697 ) , .f_bi = (  bi3699 ) } );
}

static  struct Maybe_351   mk_dash_from_dash_file354 (   struct env114* env ,    enum CAllocator_10  al3873 ,    struct StrView_27  filename3875 ) {
    struct envunion116  temp356 = ( (struct envunion116){ .fun = (  struct TextBuf_105  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk357 , .env =  env->envinst112 } );
    struct TextBuf_105  temp355 = ( temp356.fun ( &temp356.env ,  (  al3873 ) ) );
    struct TextBuf_105 *  tb3876 = ( &temp355 );
    (*  tb3876 ) .f_filetype = ( (  detect_dash_filetype_dash_from_dash_filename454 ) ( (  filename3875 ) ) );
    struct StrView_27  filename03877 = ( (  clone_dash_0505 ) ( (  filename3875 ) ,  (  al3873 ) ) );
    struct Maybe_80  dref3878 = ( (  try_dash_read_dash_contents534 ) ( ( (  as_dash_const_dash_str545 ) ( (  filename03877 ) ) ) ,  (  al3873 ) ) );
    if ( dref3878.tag == Maybe_80_None_t ) {
        ( (  free547 ) ( (  filename03877 ) ,  (  al3873 ) ) );
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref3878.tag == Maybe_80_Just_t ) {
            if ( (  eq550 ( ( (  try_dash_get480 ) ( ( ( dref3878 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub289 ( ( ( ( dref3878 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_477_Just ) ( ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref3878 .stuff .Maybe_80_Just_s .field0 = ( (  byte_dash_substr484 ) ( ( dref3878 .stuff .Maybe_80_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub289 ( ( ( ( dref3878 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion115  temp552 = ( (struct envunion115){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action553 , .env =  env->envinst100 } );
            ( temp552.fun ( &temp552.env ,  (  tb3876 ) ,  ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( dref3878 .stuff .Maybe_80_Just_s .field0 ) ) );
            (*  tb3876 ) .f_filename = ( ( Maybe_80_Just ) ( (  filename03877 ) ) );
            return ( ( Maybe_351_Just ) ( ( * (  tb3876 ) ) ) );
        }
    }
}

struct envunion696 {
    struct TextBuf_105  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
};

struct envunion698 {
    struct TextBuf_105  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
};

static  struct Pane_219   mk701 (    enum CAllocator_10  al4131 ,    struct TextBuf_105 *  buf4133 ) {
    return ( (struct Pane_219) { .f_buf = (  buf4133 ) , .f_cursor = ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_220_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_221) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
}

struct envunion704 {
    struct Tui_90  (*fun) (  struct env86*  );
    struct env86 env;
};

static  struct Termios_92   undefined708 (  ) {
    struct Termios_92  temp709;
    return (  temp709 );
}

static  int32_t   stdin_dash_fileno710 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct termios *   cast_dash_ptr711 (    struct Termios_92 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and712 (    uint32_t  l2919 ,    uint32_t  r2921 ) {
    return ( (  l2919 ) & (  r2921 ) );
}

static  uint32_t   u32_dash_neg713 (    uint32_t  l2924 ) {
    return ( ~ (  l2924 ) );
}

struct Array_715 {
    uint32_t _arr [4];
};

struct ArrayIter_717 {
    struct Array_715  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_717   into_dash_iter718 (    struct Array_715  self2380 ) {
    return ( (struct ArrayIter_717) { .f_backing = (  self2380 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_719 {
    enum {
        Maybe_719_None_t,
        Maybe_719_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_719_Just_s;
    } stuff;
};

static struct Maybe_719 Maybe_719_Just (  uint32_t  field0 ) {
    return ( struct Maybe_719 ) { .tag = Maybe_719_Just_t, .stuff = { .Maybe_719_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr723 (    struct Array_715 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr724 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp725;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp725 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr722 (    struct Array_715 *  arr2308 ,    size_t  i2311 ) {
    if ( ( (  cmp290 ( (  i2311 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2311 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2311 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2312 = ( ( (  cast_dash_ptr723 ) ( (  arr2308 ) ) ) );
    return ( (  offset_dash_ptr724 ) ( (  p2312 ) ,  ( (int64_t ) (  i2311 ) ) ) );
}

static  uint32_t   get721 (    struct Array_715 *  arr2315 ,    size_t  i2318 ) {
    return ( * ( (  get_dash_ptr722 ) ( (  arr2315 ) ,  (  i2318 ) ) ) );
}

static  struct Maybe_719   next720 (    struct ArrayIter_717 *  self2387 ) {
    if ( (  cmp290 ( ( ( * (  self2387 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    uint32_t  e2389 = ( (  get721 ) ( ( & ( ( * (  self2387 ) ) .f_backing ) ) ,  ( ( * (  self2387 ) ) .f_cur ) ) );
    (*  self2387 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2387 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_719_Just ) ( (  e2389 ) ) );
}

static  uint32_t   reduce716 (    struct Array_715  iterable1123 ,    uint32_t  base1125 ,    uint32_t (*  fun1127 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1128 = (  base1125 );
    struct ArrayIter_717  it1129 = ( (  into_dash_iter718 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1130 = ( (  next720 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_719_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_719_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp726 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp726);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp727;
    return (  temp727 );
}

static  uint32_t   u32_dash_or728 (    uint32_t  l2911 ,    uint32_t  r2913 ) {
    return ( (  l2911 ) | (  r2913 ) );
}

static  uint32_t   u32_dash_ors714 (    struct Array_715  vals2916 ) {
    return ( (  reduce716 ) ( (  vals2916 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or728 ) ) );
}

static  struct Array_715   from_dash_listlike729 (    struct Array_715  self330 ) {
    return (  self330 );
}

static  uint32_t   echo730 (  ) {
    return (  from_dash_integral165 ( 8 ) );
}

static  uint32_t   icanon731 (  ) {
    return (  from_dash_integral165 ( 2 ) );
}

static  uint32_t   isig732 (  ) {
    return (  from_dash_integral165 ( 1 ) );
}

static  uint32_t   iexten733 (  ) {
    return (  from_dash_integral165 ( 32768 ) );
}

struct Array_735 {
    uint32_t _arr [5];
};

struct ArrayIter_737 {
    struct Array_735  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_737   into_dash_iter738 (    struct Array_735  self2380 ) {
    return ( (struct ArrayIter_737) { .f_backing = (  self2380 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr742 (    struct Array_735 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr741 (    struct Array_735 *  arr2308 ,    size_t  i2311 ) {
    if ( ( (  cmp290 ( (  i2311 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2311 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2311 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2312 = ( ( (  cast_dash_ptr742 ) ( (  arr2308 ) ) ) );
    return ( (  offset_dash_ptr724 ) ( (  p2312 ) ,  ( (int64_t ) (  i2311 ) ) ) );
}

static  uint32_t   get740 (    struct Array_735 *  arr2315 ,    size_t  i2318 ) {
    return ( * ( (  get_dash_ptr741 ) ( (  arr2315 ) ,  (  i2318 ) ) ) );
}

static  struct Maybe_719   next739 (    struct ArrayIter_737 *  self2387 ) {
    if ( (  cmp290 ( ( ( * (  self2387 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    uint32_t  e2389 = ( (  get740 ) ( ( & ( ( * (  self2387 ) ) .f_backing ) ) ,  ( ( * (  self2387 ) ) .f_cur ) ) );
    (*  self2387 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2387 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_719_Just ) ( (  e2389 ) ) );
}

static  uint32_t   reduce736 (    struct Array_735  iterable1123 ,    uint32_t  base1125 ,    uint32_t (*  fun1127 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1128 = (  base1125 );
    struct ArrayIter_737  it1129 = ( (  into_dash_iter738 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1130 = ( (  next739 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_719_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_719_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp743 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp743);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp744;
    return (  temp744 );
}

static  uint32_t   u32_dash_ors734 (    struct Array_735  vals2916 ) {
    return ( (  reduce736 ) ( (  vals2916 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or728 ) ) );
}

static  struct Array_735   from_dash_listlike745 (    struct Array_735  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint746 (  ) {
    return (  from_dash_integral165 ( 2 ) );
}

static  uint32_t   icrnl747 (  ) {
    return (  from_dash_integral165 ( 256 ) );
}

static  uint32_t   inpck748 (  ) {
    return (  from_dash_integral165 ( 16 ) );
}

static  uint32_t   istrip749 (  ) {
    return (  from_dash_integral165 ( 32 ) );
}

static  uint32_t   ixon750 (  ) {
    return (  from_dash_integral165 ( 1024 ) );
}

struct Array_752 {
    uint32_t _arr [1];
};

struct ArrayIter_754 {
    struct Array_752  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_754   into_dash_iter755 (    struct Array_752  self2380 ) {
    return ( (struct ArrayIter_754) { .f_backing = (  self2380 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr759 (    struct Array_752 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr758 (    struct Array_752 *  arr2308 ,    size_t  i2311 ) {
    if ( ( (  cmp290 ( (  i2311 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2311 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2311 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2312 = ( ( (  cast_dash_ptr759 ) ( (  arr2308 ) ) ) );
    return ( (  offset_dash_ptr724 ) ( (  p2312 ) ,  ( (int64_t ) (  i2311 ) ) ) );
}

static  uint32_t   get757 (    struct Array_752 *  arr2315 ,    size_t  i2318 ) {
    return ( * ( (  get_dash_ptr758 ) ( (  arr2315 ) ,  (  i2318 ) ) ) );
}

static  struct Maybe_719   next756 (    struct ArrayIter_754 *  self2387 ) {
    if ( (  cmp290 ( ( ( * (  self2387 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    uint32_t  e2389 = ( (  get757 ) ( ( & ( ( * (  self2387 ) ) .f_backing ) ) ,  ( ( * (  self2387 ) ) .f_cur ) ) );
    (*  self2387 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2387 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_719_Just ) ( (  e2389 ) ) );
}

static  uint32_t   reduce753 (    struct Array_752  iterable1123 ,    uint32_t  base1125 ,    uint32_t (*  fun1127 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1128 = (  base1125 );
    struct ArrayIter_754  it1129 = ( (  into_dash_iter755 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1130 = ( (  next756 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_719_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_719_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp760 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp760);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp761;
    return (  temp761 );
}

static  uint32_t   u32_dash_ors751 (    struct Array_752  vals2916 ) {
    return ( (  reduce753 ) ( (  vals2916 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or728 ) ) );
}

static  struct Array_752   from_dash_listlike762 (    struct Array_752  self330 ) {
    return (  self330 );
}

static  uint32_t   opost763 (  ) {
    return (  from_dash_integral165 ( 1 ) );
}

static  uint32_t   cs8764 (  ) {
    return (  from_dash_integral165 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr767 (    struct Array_93 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr766 (    struct Array_93 *  arr2308 ,    size_t  i2311 ) {
    if ( ( (  cmp290 ( (  i2311 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2311 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2311 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2312 = ( ( (  cast_dash_ptr767 ) ( (  arr2308 ) ) ) );
    return ( (  offset_dash_ptr300 ) ( (  p2312 ) ,  ( (int64_t ) (  i2311 ) ) ) );
}

static  enum Unit_8   set765 (    struct Array_93 *  arr2321 ,    size_t  i2324 ,    uint8_t  e2326 ) {
    uint8_t *  p2327 = ( (  get_dash_ptr766 ) ( (  arr2321 ) ,  (  i2324 ) ) );
    (*  p2327 ) = (  e2326 );
    return ( Unit_8_Unit );
}

static  size_t   vmin768 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime769 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush770 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  struct Termios_92   enable_dash_raw_dash_mode706 (  ) {
    struct Termios_92  temp707 = ( (  undefined708 ) ( ) );
    struct Termios_92 *  orig_dash_termios3409 = ( &temp707 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  cast_dash_ptr711 ) ( (  orig_dash_termios3409 ) ) ) ) );
    struct Termios_92  raw3410 = ( * (  orig_dash_termios3409 ) );
    raw3410 .f_c_dash_lflag = ( (  u32_dash_and712 ) ( ( (  raw3410 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg713 ) ( ( (  u32_dash_ors714 ) ( ( (  from_dash_listlike729 ) ( ( (struct Array_715) { ._arr = { ( (  echo730 ) ( ) ) , ( (  icanon731 ) ( ) ) , ( (  isig732 ) ( ) ) , ( ( (  iexten733 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3410 .f_c_dash_iflag = ( (  u32_dash_and712 ) ( ( (  raw3410 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg713 ) ( ( (  u32_dash_ors734 ) ( ( (  from_dash_listlike745 ) ( ( (struct Array_735) { ._arr = { ( (  brkint746 ) ( ) ) , ( (  icrnl747 ) ( ) ) , ( (  inpck748 ) ( ) ) , ( (  istrip749 ) ( ) ) , ( ( (  ixon750 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3410 .f_c_dash_oflag = ( (  u32_dash_and712 ) ( ( (  raw3410 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg713 ) ( ( (  u32_dash_ors751 ) ( ( (  from_dash_listlike762 ) ( ( (struct Array_752) { ._arr = { ( ( (  opost763 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3410 .f_c_dash_cflag = ( (  u32_dash_or728 ) ( ( (  raw3410 ) .f_c_dash_cflag ) ,  ( (  cs8764 ) ( ) ) ) );
    ( (  set765 ) ( ( & ( (  raw3410 ) .f_c_dash_cc ) ) ,  ( (  vmin768 ) ( ) ) ,  (  from_dash_integral308 ( 0 ) ) ) );
    ( (  set765 ) ( ( & ( (  raw3410 ) .f_c_dash_cc ) ) ,  ( (  vtime769 ) ( ) ) ,  (  from_dash_integral308 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  tcsa_dash_flush770 ) ( ) ) ,  ( (  cast_dash_ptr711 ) ( ( & (  raw3410 ) ) ) ) ) );
    return ( * (  orig_dash_termios3409 ) );
}

static  enum Unit_8   for_dash_each773 (    struct StrViewIter_458  iterable1104 ,    enum Unit_8 (*  fun1106 )(    struct Char_65  ) ) {
    struct StrViewIter_458  temp774 = ( (  into_dash_iter459 ) ( (  iterable1104 ) ) );
    struct StrViewIter_458 *  it1107 = ( &temp774 );
    while ( ( true ) ) {
        struct Maybe_297  dref1108 = ( (  next463 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_297_Just_t ) {
                ( (  fun1106 ) ( ( dref1108 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print772 (    struct StrView_27  s2651 ) {
    ( (  for_dash_each773 ) ( ( (  chars460 ) ( (  s2651 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   hide_dash_cursor771 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors775 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen776 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse777 (  ) {
    ( (  print_dash_str328 ) ( ( (  from_dash_string199 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout778 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr537 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq782 (    enum Unit_8 *  l587 ,    enum Unit_8 *  r589 ) {
    return ( (  l587 ) == (  r589 ) );
}

static  enum Unit_8 *   cast783 (    const char*  x356 ) {
    return ( (enum Unit_8 * ) (  x356 ) );
}

static  void *   cast_dash_ptr787 (    enum Unit_8 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of788 (    enum Unit_8 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_8 *   zeroed785 (  ) {
    enum Unit_8 *  temp786;
    enum Unit_8 *  x571 = (  temp786 );
    ( ( memset ) ( ( (  cast_dash_ptr787 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of788 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  enum Unit_8 *   null_dash_ptr784 (  ) {
    return ( (  zeroed785 ) ( ) );
}

static  struct Maybe_320   from_dash_nullable_dash_c_dash_str781 (    const char*  s592 ) {
    if ( ( (  ptr_dash_eq782 ) ( ( (  cast783 ) ( (  s592 ) ) ) ,  ( ( (  null_dash_ptr784 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_320) { .tag = Maybe_320_None_t } );
    } else {
        return ( ( Maybe_320_Just ) ( (  s592 ) ) );
    }
}

static  struct Maybe_320   get780 (    const char*  s2684 ) {
    return ( (  from_dash_nullable_dash_c_dash_str781 ) ( ( ( getenv ) ( (  s2684 ) ) ) ) );
}

static  bool   eq789 (    const char*  l1727 ,    const char*  r1729 ) {
    return (  eq558 ( ( ( strcmp ) ( (  l1727 ) ,  (  r1729 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_91   query_dash_palette779 (  ) {
    struct Maybe_320  colorterm2685 = ( (  get780 ) ( ( (  from_dash_string57 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_320  dref2686 = (  colorterm2685 );
    if ( dref2686.tag == Maybe_320_Just_t ) {
        if ( ( (  eq789 ( ( dref2686 .stuff .Maybe_320_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq789 ( ( dref2686 .stuff .Maybe_320_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_91_PaletteRGB );
        }
    }
    else {
        if ( dref2686.tag == Maybe_320_None_t ) {
        }
    }
    struct Maybe_320  dref2688 = ( (  get780 ) ( ( (  from_dash_string57 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2688.tag == Maybe_320_Just_t ) {
        if ( (  eq789 ( ( dref2688 .stuff .Maybe_320_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_91_Palette8 );
        }
    }
    else {
        if ( dref2688.tag == Maybe_320_None_t ) {
        }
    }
    return ( ColorPalette_91_Palette16 );
}

struct Tuple2_790 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_790 Tuple2_790_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_790 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_792 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr796 (    struct Winsize_792 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of797 (    struct Winsize_792  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_792   zeroed794 (  ) {
    struct Winsize_792  temp795;
    struct Winsize_792  x571 = (  temp795 );
    ( ( memset ) ( ( (  cast_dash_ptr796 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of797 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  int32_t   stdout_dash_fileno798 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  uint64_t   from_dash_integral800 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz799 (  ) {
    return (  from_dash_integral800 ( 21523 ) );
}

static  int32_t   op_dash_neg801 (    int32_t  x227 ) {
    return ( (  from_dash_integral56 ( 0 ) ) - (  x227 ) );
}

static  bool   eq802 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral803 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr809 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of810 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed807 (  ) {
    uint32_t  temp808;
    uint32_t  x571 = (  temp808 );
    ( ( memset ) ( ( (  cast_dash_ptr809 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of810 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint16_t *   cast811 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed805 (    uint16_t  x574 ) {
    uint32_t  temp806 = ( (  zeroed807 ) ( ) );
    uint32_t *  y575 = ( &temp806 );
    uint16_t *  yp576 = ( (  cast811 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  uint32_t   u16_dash_u32804 (    uint16_t  x646 ) {
    return ( (  cast_dash_on_dash_zeroed805 ) ( (  x646 ) ) );
}

static  struct Tuple2_790   get_dash_dimensions791 (  ) {
    struct Winsize_792  temp793 = ( ( (  zeroed794 ) ( ) ) );
    struct Winsize_792 *  ws2673 = ( &temp793 );
    if ( ( (  eq558 ( ( ( ioctl ) ( ( (  stdout_dash_fileno798 ) ( ) ) ,  ( (  tiocgwinsz799 ) ( ) ) ,  (  ws2673 ) ) ) , (  op_dash_neg801 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq802 ( ( ( * (  ws2673 ) ) .f_ws_dash_col ) , (  from_dash_integral803 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_790_Tuple2 ) ( (  from_dash_integral165 ( 80 ) ) ,  (  from_dash_integral165 ( 24 ) ) ) );
    }
    return ( ( Tuple2_790_Tuple2 ) ( ( (  u16_dash_u32804 ) ( ( ( * (  ws2673 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32804 ) ( ( ( * (  ws2673 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined814 (  ) {
    struct timespec  temp815;
    return (  temp815 );
}

static  int32_t   clock_dash_monotonic816 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  struct timespec   now812 (  ) {
    struct timespec  temp813 = ( (  undefined814 ) ( ) );
    struct timespec *  t3371 = ( &temp813 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic816 ) ( ) ) ,  (  t3371 ) ) );
    return ( * (  t3371 ) );
}

struct env817 {
    bool *  should_dash_resize3423;
};

struct envunion818 {
    enum Unit_8  (*fun) (  struct env817*  ,    int32_t  );
    struct env817 env;
};

struct envunion818  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig819 ) {
    struct envunion818  temp820 = _intr_sigarr [  __intr__sig819 ];
    temp820.fun ( &temp820.env ,  __intr__sig819 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig821 ,   struct envunion818  __intr__fun822 ) {
    _intr_sigarr [  __intr__sig821 ] =  __intr__fun822;
    signal(  __intr__sig821 , _intr_sighandle );
    return Unit_8_Unit;
}

static  enum Unit_8   lam823 (   struct env817* env ,    int32_t  dref3430 ) {
    (* env->should_dash_resize3423 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst824 (    struct Tuple2_790  dref1283 ) {
    return ( dref1283 .field0 );
}

static  uint32_t   snd825 (    struct Tuple2_790  dref1286 ) {
    return ( dref1286 .field1 );
}

static  struct Tui_90   mk705 (   struct env86* env ) {
    struct Termios_92  og_dash_termios3425 = ( (  enable_dash_raw_dash_mode706 ) ( ) );
    ( (  hide_dash_cursor771 ) ( ) );
    ( (  reset_dash_colors775 ) ( ) );
    ( (  clear_dash_screen776 ) ( ) );
    ( (  enable_dash_mouse777 ) ( ) );
    ( (  flush_dash_stdout778 ) ( ) );
    enum ColorPalette_91  palette3426 = ( (  query_dash_palette779 ) ( ) );
    struct Tuple2_790  dims3427 = ( (  get_dash_dimensions791 ) ( ) );
    uint32_t  fps3428 = (  from_dash_integral165 ( 60 ) );
    struct timespec  last_dash_sync3429 = ( (  now812 ) ( ) );
    struct env817 envinst817 = {
        .should_dash_resize3423 = env->should_dash_resize3423 ,
    };
    ( _intr_register_signal ( (  from_dash_integral56 ( 28 ) ) , ( (struct envunion818){ .fun = (  enum Unit_8  (*) (  struct env817*  ,    int32_t  ) )lam823 , .env =  envinst817 } ) ) );
    return ( (struct Tui_90) { .f_width = ( (  fst824 ) ( (  dims3427 ) ) ) , .f_height = ( (  snd825 ) ( (  dims3427 ) ) ) , .f_target_dash_fps = (  fps3428 ) , .f_actual_dash_fps = (  from_dash_integral165 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3429 ) , .f_fps_dash_ts = (  last_dash_sync3429 ) , .f_fps_dash_count = (  from_dash_integral165 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3425 ) , .f_palette = (  palette3426 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_830 {
    size_t  f_size;
};

static  struct TypeSize_830   get_dash_typesize829 (  ) {
    struct Cell_278  temp831;
    return ( (struct TypeSize_830) { .f_size = ( sizeof( ( (  temp831 ) ) ) ) } );
}

static  struct Cell_278 *   cast_dash_ptr832 (    void *  p359 ) {
    return ( (struct Cell_278 * ) (  p359 ) );
}

static  struct Slice_277   allocate828 (    enum CAllocator_10  dref1990 ,    size_t  count1992 ) {
    if (!(  dref1990 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1993 = ( ( ( (  get_dash_typesize829 ) ( ) ) ) .f_size );
    struct Cell_278 *  ptr1994 = ( (  cast_dash_ptr832 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1993 ) , (  count1992 ) ) ) ) ) ) );
    return ( (struct Slice_277) { .f_ptr = (  ptr1994 ) , .f_count = (  count1992 ) } );
}

static  void *   cast_dash_ptr838 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of839 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed836 (  ) {
    size_t  temp837;
    size_t  x571 = (  temp837 );
    ( ( memset ) ( ( (  cast_dash_ptr838 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of839 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint32_t *   cast840 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed834 (    uint32_t  x574 ) {
    size_t  temp835 = ( (  zeroed836 ) ( ) );
    size_t *  y575 = ( &temp835 );
    uint32_t *  yp576 = ( (  cast840 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  size_t   u32_dash_size833 (    uint32_t  x652 ) {
    return ( (  cast_dash_on_dash_zeroed834 ) ( (  x652 ) ) );
}

struct env843 {
    ;
    ;
    struct Cell_278 (*  fun1944 )(    struct Cell_278  );
    ;
    struct Slice_277  s1942;
};

struct envunion844 {
    enum Unit_8  (*fun) (  struct env843*  ,    int32_t  );
    struct env843 env;
};

static  enum Unit_8   for_dash_each842 (    struct Range_150  iterable1104 ,   struct envunion844  fun1106 ) {
    struct RangeIter_153  temp845 = ( (  into_dash_iter154 ) ( (  iterable1104 ) ) );
    struct RangeIter_153 *  it1107 = ( &temp845 );
    while ( ( true ) ) {
        struct Maybe_155  dref1108 = ( (  next156 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_155_Just_t ) {
                struct envunion844  temp846 = (  fun1106 );
                ( temp846.fun ( &temp846.env ,  ( dref1108 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_278 *   offset_dash_ptr850 (    struct Cell_278 *  x338 ,    int64_t  count340 ) {
    struct Cell_278  temp851;
    return ( (struct Cell_278 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp851 ) ) ) ) ) ) ) ) );
}

static  struct Cell_278 *   get_dash_ptr849 (    struct Slice_277  slice1788 ,    size_t  i1790 ) {
    if ( ( (  cmp290 ( (  i1790 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1790 ) , ( (  slice1788 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_278 *  elem_dash_ptr1791 = ( (  offset_dash_ptr850 ) ( ( (  slice1788 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1790 ) ) ) ) );
    return (  elem_dash_ptr1791 );
}

static  enum Unit_8   set848 (    struct Slice_277  slice1805 ,    size_t  i1807 ,    struct Cell_278  x1809 ) {
    struct Cell_278 *  ep1810 = ( (  get_dash_ptr849 ) ( (  slice1805 ) ,  (  i1807 ) ) );
    (*  ep1810 ) = (  x1809 );
    return ( Unit_8_Unit );
}

struct Maybe_855 {
    enum {
        Maybe_855_None_t,
        Maybe_855_Just_t,
    } tag;
    union {
        struct {
            struct Cell_278  field0;
        } Maybe_855_Just_s;
    } stuff;
};

static struct Maybe_855 Maybe_855_Just (  struct Cell_278  field0 ) {
    return ( struct Maybe_855 ) { .tag = Maybe_855_Just_t, .stuff = { .Maybe_855_Just_s = { .field0 = field0 } } };
};

static  struct Cell_278   undefined856 (  ) {
    struct Cell_278  temp857;
    return (  temp857 );
}

static  struct Cell_278   or_dash_fail854 (    struct Maybe_855  x1756 ,    struct StrConcat_321  errmsg1758 ) {
    struct Maybe_855  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_855_None_t ) {
        ( (  panic323 ) ( (  errmsg1758 ) ) );
        return ( (  undefined856 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_855_Just_t ) {
            return ( dref1759 .stuff .Maybe_855_Just_s .field0 );
        }
    }
}

static  struct Maybe_855   try_dash_get858 (    struct Slice_277  slice1794 ,    size_t  i1796 ) {
    if ( ( (  cmp290 ( (  i1796 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1796 ) , ( (  slice1794 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_855) { .tag = Maybe_855_None_t } );
    }
    struct Cell_278 *  elem_dash_ptr1797 = ( (  offset_dash_ptr850 ) ( ( (  slice1794 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1796 ) ) ) ) );
    return ( ( Maybe_855_Just ) ( ( * (  elem_dash_ptr1797 ) ) ) );
}

static  struct Cell_278   get853 (    struct Slice_277  slice1800 ,    size_t  i1802 ) {
    return ( (  or_dash_fail854 ) ( ( (  try_dash_get858 ) ( (  slice1800 ) ,  (  i1802 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1802 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1800 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_278   elem_dash_get852 (    struct Slice_277  self1813 ,    size_t  idx1815 ) {
    return ( (  get853 ) ( (  self1813 ) ,  (  idx1815 ) ) );
}

static  enum Unit_8   lam847 (   struct env843* env ,    int32_t  i1946 ) {
    return ( (  set848 ) ( ( env->s1942 ) ,  ( (  i32_dash_size412 ) ( (  i1946 ) ) ) ,  ( ( env->fun1944 ) ( (  elem_dash_get852 ( ( env->s1942 ) , ( (  i32_dash_size412 ) ( (  i1946 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map841 (    struct Slice_277  s1942 ,    struct Cell_278 (*  fun1944 )(    struct Cell_278  ) ) {
    struct env843 envinst843 = {
        .fun1944 =  fun1944 ,
        .s1942 =  s1942 ,
    };
    ( (  for_dash_each842 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( ( (  s1942 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion844){ .fun = (  enum Unit_8  (*) (  struct env843*  ,    int32_t  ) )lam847 , .env =  envinst843 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_278   default_dash_cell860 (  ) {
    return ( (struct Cell_278) { .f_c = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_278   lam859 (    struct Cell_278  dref3533 ) {
    return ( (  default_dash_cell860 ) ( ) );
}

struct env863 {
    ;
    ;
    struct Cell_278 (*  fun1944 )(    struct Cell_278  );
    ;
    struct Slice_277  s1942;
};

struct envunion864 {
    enum Unit_8  (*fun) (  struct env863*  ,    int32_t  );
    struct env863 env;
};

static  enum Unit_8   for_dash_each862 (    struct Range_150  iterable1104 ,   struct envunion864  fun1106 ) {
    struct RangeIter_153  temp865 = ( (  into_dash_iter154 ) ( (  iterable1104 ) ) );
    struct RangeIter_153 *  it1107 = ( &temp865 );
    while ( ( true ) ) {
        struct Maybe_155  dref1108 = ( (  next156 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_155_Just_t ) {
                struct envunion864  temp866 = (  fun1106 );
                ( temp866.fun ( &temp866.env ,  ( dref1108 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam867 (   struct env863* env ,    int32_t  i1946 ) {
    return ( (  set848 ) ( ( env->s1942 ) ,  ( (  i32_dash_size412 ) ( (  i1946 ) ) ) ,  ( ( env->fun1944 ) ( (  elem_dash_get852 ( ( env->s1942 ) , ( (  i32_dash_size412 ) ( (  i1946 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map861 (    struct Slice_277  s1942 ,    struct Cell_278 (*  fun1944 )(    struct Cell_278  ) ) {
    struct env863 envinst863 = {
        .fun1944 =  fun1944 ,
        .s1942 =  s1942 ,
    };
    ( (  for_dash_each862 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( ( (  s1942 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion864){ .fun = (  enum Unit_8  (*) (  struct env863*  ,    int32_t  ) )lam867 , .env =  envinst863 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_278   lam868 (    struct Cell_278  dref3535 ) {
    return ( (  default_dash_cell860 ) ( ) );
}

static  struct Screen_276   mk_dash_screen827 (    struct Tui_90 *  tui3529 ,    enum CAllocator_10  al3531 ) {
    struct Slice_277  cur3532 = ( (  allocate828 ) ( (  al3531 ) ,  ( (  u32_dash_size833 ) ( (  op_dash_mul167 ( ( ( * (  tui3529 ) ) .f_width ) , ( ( * (  tui3529 ) ) .f_height ) ) ) ) ) ) );
    ( (  map841 ) ( (  cur3532 ) ,  (  lam859 ) ) );
    struct Slice_277  prev3534 = ( (  allocate828 ) ( (  al3531 ) ,  ( (  u32_dash_size833 ) ( (  op_dash_mul167 ( ( ( * (  tui3529 ) ) .f_width ) , ( ( * (  tui3529 ) ) .f_height ) ) ) ) ) ) );
    ( (  map861 ) ( (  prev3534 ) ,  (  lam868 ) ) );
    return ( (struct Screen_276) { .f_current = (  cur3532 ) , .f_previous = (  prev3534 ) , .f_al = (  al3531 ) , .f_tui = (  tui3529 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) } );
}

enum MouseButton_876 {
    MouseButton_876_MouseLeft,
    MouseButton_876_MouseMiddle,
    MouseButton_876_MouseRight,
    MouseButton_876_ScrollUp,
    MouseButton_876_ScrollDown,
};

struct MouseEvent_875 {
    enum MouseButton_876  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_874 {
    enum {
        InputEvent_874_Key_t,
        InputEvent_874_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_268  field0;
        } InputEvent_874_Key_s;
        struct {
            struct MouseEvent_875  field0;
        } InputEvent_874_Mouse_s;
    } stuff;
};

static struct InputEvent_874 InputEvent_874_Key (  struct Key_268  field0 ) {
    return ( struct InputEvent_874 ) { .tag = InputEvent_874_Key_t, .stuff = { .InputEvent_874_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_874 InputEvent_874_Mouse (  struct MouseEvent_875  field0 ) {
    return ( struct InputEvent_874 ) { .tag = InputEvent_874_Mouse_t, .stuff = { .InputEvent_874_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_873 {
    enum {
        Maybe_873_None_t,
        Maybe_873_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_874  field0;
        } Maybe_873_Just_s;
    } stuff;
};

static struct Maybe_873 Maybe_873_Just (  struct InputEvent_874  field0 ) {
    return ( struct Maybe_873 ) { .tag = Maybe_873_Just_t, .stuff = { .Maybe_873_Just_s = { .field0 = field0 } } };
};

struct envunion872 {
    struct Maybe_873  (*fun) (  struct env88*  ,    struct Tui_90 *  );
    struct env88 env;
};

struct env871 {
    struct env88 envinst88;
    struct Tui_90 *  tui4665;
};

struct envunion877 {
    struct Maybe_873  (*fun) (  struct env871*  );
    struct env871 env;
};

struct FunIter_870 {
    struct envunion877  f_fun;
    bool  f_finished;
};

static  struct FunIter_870   into_dash_iter878 (    struct FunIter_870  self1058 ) {
    return (  self1058 );
}

static  struct FunIter_870   from_dash_function879 (   struct envunion877  fun1066 ) {
    return ( (struct FunIter_870) { .f_fun = (  fun1066 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions884 (   struct env87* env ,    struct Tui_90 *  tui3495 ) {
    if ( ( ! ( * ( env->should_dash_resize3423 ) ) ) ) {
        return ( false );
    }
    (*  tui3495 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3423 ) = ( false );
    struct Tuple2_790  dim3496 = ( (  get_dash_dimensions791 ) ( ) );
    uint32_t  w3497 = ( (  fst824 ) ( (  dim3496 ) ) );
    uint32_t  h3498 = ( (  snd825 ) ( (  dim3496 ) ) );
    (*  tui3495 ) .f_width = (  w3497 );
    (*  tui3495 ) .f_height = (  h3498 );
    return ( true );
}

static  char   undefined887 (  ) {
    char  temp888;
    return (  temp888 );
}

struct Maybe_889 {
    enum {
        Maybe_889_None_t,
        Maybe_889_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_889_Just_s;
    } stuff;
};

static struct Maybe_889 Maybe_889_Just (  char  field0 ) {
    return ( struct Maybe_889 ) { .tag = Maybe_889_Just_t, .stuff = { .Maybe_889_Just_s = { .field0 = field0 } } };
};

struct Pollfd_891 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr892 (    struct Pollfd_891 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr895 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of896 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed893 (  ) {
    char  temp894;
    char  x571 = (  temp894 );
    ( ( memset ) ( ( (  cast_dash_ptr895 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of896 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Maybe_889   read_dash_byte890 (    int32_t  timeout_dash_ms3417 ) {
    struct Pollfd_891  pfd3418 = ( (struct Pollfd_891) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral803 ( 1 ) ) , .f_revents = (  from_dash_integral803 ( 0 ) ) } );
    if ( (  cmp157 ( ( ( poll ) ( ( (  cast_dash_ptr892 ) ( ( & (  pfd3418 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3417 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_889) { .tag = Maybe_889_None_t } );
    }
    char  c3419 = ( ( (  zeroed893 ) ( ) ) );
    if ( (  cmp157 ( ( ( read ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  cast_dash_ptr895 ) ( ( & (  c3419 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_889) { .tag = Maybe_889_None_t } );
    }
    return ( ( Maybe_889_Just ) ( (  c3419 ) ) );
}

static  char   u8_dash_ascii897 (    uint8_t  b792 ) {
    return ( ( (char ) (  b792 ) ) );
}

static  uint8_t *   cast901 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed899 (    uint8_t  x574 ) {
    uint32_t  temp900 = ( (  zeroed807 ) ( ) );
    uint32_t *  y575 = ( &temp900 );
    uint8_t *  yp576 = ( (  cast901 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  uint32_t   u8_dash_u32898 (    uint8_t  x673 ) {
    return ( (  cast_dash_on_dash_zeroed899 ) ( (  x673 ) ) );
}

struct Map_904 {
    struct StrViewIter_458  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_904 Map_904_Map (  struct StrViewIter_458  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_904 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_904   into_dash_iter905 (    struct Map_904  self809 ) {
    return (  self809 );
}

static  struct Maybe_719   next906 (    struct Map_904 *  dref811 ) {
    struct Maybe_297  dref814 = ( (  next463 ) ( ( & ( (* dref811 ) .field0 ) ) ) );
    if ( dref814.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    else {
        if ( dref814.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_719_Just ) ( ( ( (* dref811 ) .field1 ) ( ( dref814 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce903 (    struct Map_904  iterable1123 ,    uint32_t  base1125 ,    uint32_t (*  fun1127 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1128 = (  base1125 );
    struct Map_904  it1129 = ( (  into_dash_iter905 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1130 = ( (  next906 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_719_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_719_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp907 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp907);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp908;
    return (  temp908 );
}

static  struct Map_904   map909 (    struct StrView_27  iterable818 ,    uint32_t (*  fun820 )(    struct Char_65  ) ) {
    struct StrViewIter_458  it821 = ( (  into_dash_iter461 ) ( (  iterable818 ) ) );
    return ( ( Map_904_Map ) ( (  it821 ) ,  (  fun820 ) ) );
}

static  void *   cast_dash_ptr916 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of917 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed914 (  ) {
    int64_t  temp915;
    int64_t  x571 = (  temp915 );
    ( ( memset ) ( ( (  cast_dash_ptr916 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of917 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   cast918 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed912 (    uint8_t  x574 ) {
    int64_t  temp913 = ( (  zeroed914 ) ( ) );
    int64_t *  y575 = ( &temp913 );
    uint8_t *  yp576 = ( (  cast918 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  int64_t   u8_dash_i64911 (    uint8_t  x667 ) {
    return ( (  cast_dash_on_dash_zeroed912 ) ( (  x667 ) ) );
}

struct StrConcat_921 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_921 StrConcat_921_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_921 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_920 {
    struct StrConcat_921  field0;
    struct StrView_27  field1;
};

static struct StrConcat_920 StrConcat_920_StrConcat (  struct StrConcat_921  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_920 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_925 {
    struct StrView_27  field0;
    struct StrConcat_920  field1;
};

static struct StrConcat_925 StrConcat_925_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_920  field1 ) {
    return ( struct StrConcat_925 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_924 {
    struct StrConcat_925  field0;
    struct Char_65  field1;
};

static struct StrConcat_924 StrConcat_924_StrConcat (  struct StrConcat_925  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_924 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str928 (    struct StrConcat_921  self1539 ) {
    struct StrConcat_921  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str927 (    struct StrConcat_920  self1539 ) {
    struct StrConcat_920  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str928 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str926 (    struct StrConcat_925  self1539 ) {
    struct StrConcat_925  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str927 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str923 (    struct StrConcat_924  self1539 ) {
    struct StrConcat_924  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str926 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic922 (    struct StrConcat_920  errmsg1743 ) {
    ( (  print_dash_str923 ) ( ( ( StrConcat_924_StrConcat ) ( ( ( StrConcat_925_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1743 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail919 (    struct Maybe_477  x1756 ,    struct StrConcat_920  errmsg1758 ) {
    struct Maybe_477  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_477_None_t ) {
        ( (  panic922 ) ( (  errmsg1758 ) ) );
        return ( (  undefined478 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_477_Just_t ) {
            return ( dref1759 .stuff .Maybe_477_Just_s .field0 );
        }
    }
}

static  enum Ordering_158   cmp930 (    struct Char_65  l757 ,    struct Char_65  r759 ) {
    if ( ( ( !  eq399 ( ( (  l757 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq399 ( ( (  r759 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp931 = ( (  from_dash_string57 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp931);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (  cmp307 ) ( ( (  char_dash_u8533 ) ( (  l757 ) ) ) ,  ( (  char_dash_u8533 ) ( (  r759 ) ) ) ) );
}

static  uint8_t   op_dash_sub932 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add933 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_477   hex_dash_digit929 (    struct Char_65  c2633 ) {
    if ( ( (  cmp930 ( (  c2633 ) , ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp930 ( (  c2633 ) , ( (  from_dash_charlike346 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_477_Just ) ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2633 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp930 ( (  c2633 ) , ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp930 ( (  c2633 ) , ( (  from_dash_charlike346 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_477_Just ) ( (  op_dash_add933 ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2633 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral308 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp930 ( (  c2633 ) , ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp930 ( (  c2633 ) , ( (  from_dash_charlike346 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_477_Just ) ( (  op_dash_add933 ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2633 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral308 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_477) { .tag = Maybe_477_None_t } );
}

static  uint32_t   lam910 (    struct Char_65  c2638 ) {
    return ( (  from_dash_integral165 ) ( ( (  u8_dash_i64911 ) ( ( (  or_dash_fail919 ) ( ( (  hex_dash_digit929 ) ( (  c2638 ) ) ) ,  ( ( StrConcat_920_StrConcat ) ( ( ( StrConcat_921_StrConcat ) ( ( (  from_dash_charlike346 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2638 ) ) ) ,  ( (  from_dash_string199 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam934 (    uint32_t  elem2640 ,    uint32_t  b2642 ) {
    return (  op_dash_add171 ( (  op_dash_mul167 ( (  b2642 ) , (  from_dash_integral165 ( 16 ) ) ) ) , (  elem2640 ) ) );
}

static  uint32_t   from_dash_hex902 (    struct StrView_27  arr2636 ) {
    return ( (  reduce903 ) ( ( (  map909 ) ( (  arr2636 ) ,  (  lam910 ) ) ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  lam934 ) ) );
}

static  bool   eq936 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

struct Array_937 {
    char _arr [32];
};

static  void *   cast_dash_ptr941 (    struct Array_937 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of942 (    struct Array_937  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_937   zeroed939 (  ) {
    struct Array_937  temp940;
    struct Array_937  x571 = (  temp940 );
    ( ( memset ) ( ( (  cast_dash_ptr941 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of942 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  char *   cast_dash_ptr946 (    struct Array_937 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr947 (    char *  x338 ,    int64_t  count340 ) {
    char  temp948;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp948 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr945 (    struct Array_937 *  arr2308 ,    size_t  i2311 ) {
    if ( ( (  cmp290 ( (  i2311 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2311 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2311 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2312 = ( ( (  cast_dash_ptr946 ) ( (  arr2308 ) ) ) );
    return ( (  offset_dash_ptr947 ) ( (  p2312 ) ,  ( (int64_t ) (  i2311 ) ) ) );
}

static  enum Unit_8   set944 (    struct Array_937 *  arr2321 ,    size_t  i2324 ,    char  e2326 ) {
    char *  p2327 = ( (  get_dash_ptr945 ) ( (  arr2321 ) ,  (  i2324 ) ) );
    (*  p2327 ) = (  e2326 );
    return ( Unit_8_Unit );
}

struct Slice_950 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail953 (    struct Maybe_889  x1756 ,    struct StrConcat_321  errmsg1758 ) {
    struct Maybe_889  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_889_None_t ) {
        ( (  panic323 ) ( (  errmsg1758 ) ) );
        return ( (  undefined887 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_889_Just_t ) {
            return ( dref1759 .stuff .Maybe_889_Just_s .field0 );
        }
    }
}

static  struct Maybe_889   try_dash_get954 (    struct Slice_950  slice1794 ,    size_t  i1796 ) {
    if ( ( (  cmp290 ( (  i1796 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1796 ) , ( (  slice1794 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_889) { .tag = Maybe_889_None_t } );
    }
    char *  elem_dash_ptr1797 = ( (  offset_dash_ptr947 ) ( ( (  slice1794 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1796 ) ) ) ) );
    return ( ( Maybe_889_Just ) ( ( * (  elem_dash_ptr1797 ) ) ) );
}

static  char   get952 (    struct Slice_950  slice1800 ,    size_t  i1802 ) {
    return ( (  or_dash_fail953 ) ( ( (  try_dash_get954 ) ( (  slice1800 ) ,  (  i1802 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1802 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1800 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get951 (    struct Slice_950  self1813 ,    size_t  idx1815 ) {
    return ( (  get952 ) ( (  self1813 ) ,  (  idx1815 ) ) );
}

struct Scanner_955 {
    struct StrViewIter_458  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_955   mk_dash_from_dash_str957 (    struct StrView_27  s3261 ) {
    return ( (struct Scanner_955) { .f_s = ( (  chars460 ) ( (  s3261 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_961 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr300 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_27   substr958 (    struct StrView_27  s2212 ,    size_t  from2214 ,    size_t  to2216 ) {
    size_t  from_dash_bs2217 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_153  temp959 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  from2214 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond960 =  next156 (&temp959);
        if (  __cond960 .tag == 0 ) {
            break;
        }
        int32_t  dref2218 =  __cond960 .stuff .Maybe_155_Just_s .field0;
        if ( (  cmp290 ( (  from_dash_bs2217 ) , ( ( (  s2212 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2217 = (  op_dash_add311 ( (  from_dash_bs2217 ) , ( (  next_dash_char306 ) ( ( (  offset_dash_ptr_prime_961 ) ( ( ( (  s2212 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2217 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2219 = (  from_dash_bs2217 );
    struct RangeIter_153  temp962 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  to2216 ) ) ) , ( (  size_dash_i32329 ) ( (  from2214 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond963 =  next156 (&temp962);
        if (  __cond963 .tag == 0 ) {
            break;
        }
        int32_t  dref2220 =  __cond963 .stuff .Maybe_155_Just_s .field0;
        if ( (  cmp290 ( (  to_dash_bs2219 ) , ( ( (  s2212 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2219 = (  op_dash_add311 ( (  to_dash_bs2219 ) , ( (  next_dash_char306 ) ( ( (  offset_dash_ptr_prime_961 ) ( ( ( (  s2212 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2219 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice466 ) ( ( (  s2212 ) .f_contents ) ,  (  from_dash_bs2217 ) ,  (  to_dash_bs2219 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr966 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice965 (    struct Slice_950  s1969 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr966 ) ( ( (  s1969 ) .f_ptr ) ) ) , .f_count = ( (  s1969 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice964 (    struct Slice_950  sl2186 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice965 ) ( (  sl2186 ) ) ) } );
}

struct Maybe_967 {
    enum {
        Maybe_967_None_t,
        Maybe_967_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_967_Just_s;
    } stuff;
};

static struct Maybe_967 Maybe_967_Just (  int64_t  field0 ) {
    return ( struct Maybe_967 ) { .tag = Maybe_967_Just_t, .stuff = { .Maybe_967_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_969 {
    struct Scanner_955  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_955   into_dash_iter972 (    struct Scanner_955  self3252 ) {
    return (  self3252 );
}

static  struct Scanner_955   into_dash_iter971 (    struct Scanner_955 *  self798 ) {
    return ( (  into_dash_iter972 ) ( ( * (  self798 ) ) ) );
}

static  struct TakeWhile_969   take_dash_while970 (    struct Scanner_955 *  it1000 ,    bool (*  pred1002 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_969) { .f_it = ( (  into_dash_iter971 ) ( (  it1000 ) ) ) , .f_pred = (  pred1002 ) } );
}

static  bool   is_dash_digit973 (    struct Char_65  c2539 ) {
    return ( (  cmp307 ( ( (  char_dash_u8533 ) ( (  c2539 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp307 ( ( (  char_dash_u8533 ) ( (  c2539 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_297   next977 (    struct Scanner_955 *  self3247 ) {
    struct Maybe_297  dref3248 = ( (  next463 ) ( ( & ( ( * (  self3247 ) ) .f_s ) ) ) );
    if ( dref3248.tag == Maybe_297_Just_t ) {
        (*  self3247 ) .f_byte_dash_offset = (  op_dash_add311 ( ( ( * (  self3247 ) ) .f_byte_dash_offset ) , ( ( dref3248 .stuff .Maybe_297_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_297_Just ) ( ( dref3248 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref3248.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct Maybe_297   next976 (    struct TakeWhile_969 *  self994 ) {
    struct Maybe_297  mx995 = ( (  next977 ) ( ( & ( ( * (  self994 ) ) .f_it ) ) ) );
    struct Maybe_297  dref996 = (  mx995 );
    if ( dref996.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref996.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self994 ) ) .f_pred ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct TakeWhile_969   into_dash_iter979 (    struct TakeWhile_969  self991 ) {
    return (  self991 );
}

static  struct Maybe_297   head975 (    struct TakeWhile_969  it1172 ) {
    struct TakeWhile_969  temp978 = ( (  into_dash_iter979 ) ( (  it1172 ) ) );
    return ( (  next976 ) ( ( &temp978 ) ) );
}

static  bool   null974 (    struct TakeWhile_969  it1181 ) {
    struct Maybe_297  dref1182 = ( (  head975 ) ( (  it1181 ) ) );
    if ( dref1182.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env982 {
    struct Scanner_955 *  it1216;
    ;
};

struct envunion983 {
    struct Maybe_297  (*fun) (  struct env982*  ,    int32_t  );
    struct env982 env;
};

static  enum Unit_8   for_dash_each981 (    struct Range_150  iterable1104 ,   struct envunion983  fun1106 ) {
    struct RangeIter_153  temp984 = ( (  into_dash_iter154 ) ( (  iterable1104 ) ) );
    struct RangeIter_153 *  it1107 = ( &temp984 );
    while ( ( true ) ) {
        struct Maybe_155  dref1108 = ( (  next156 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_155_Just_t ) {
                struct envunion983  temp985 = (  fun1106 );
                ( temp985.fun ( &temp985.env ,  ( dref1108 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_297   lam986 (   struct env982* env ,    int32_t  dref1219 ) {
    return ( (  next977 ) ( ( env->it1216 ) ) );
}

static  enum Unit_8   drop_prime_980 (    struct Scanner_955 *  it1216 ,    size_t  n1218 ) {
    struct env982 envinst982 = {
        .it1216 =  it1216 ,
    };
    ( (  for_dash_each981 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32329 ) ( (  n1218 ) ) ) ) ) ,  ( (struct envunion983){ .fun = (  struct Maybe_297  (*) (  struct env982*  ,    int32_t  ) )lam986 , .env =  envinst982 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce988 (    struct TakeWhile_969  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct TakeWhile_969  it1129 = ( (  into_dash_iter979 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1130 = ( (  next976 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_297_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_297_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp989 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp989);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp990;
    return (  temp990 );
}

static  size_t   lam991 (    struct Char_65  dref1135 ,    size_t  x1137 ) {
    return (  op_dash_add311 ( (  x1137 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count987 (    struct TakeWhile_969  it1134 ) {
    return ( (  reduce988 ) ( (  it1134 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam991 ) ) );
}

static  struct TakeWhile_969   chars993 (    struct TakeWhile_969  self1687 ) {
    return (  self1687 );
}

static  struct Maybe_967   reduce994 (    struct TakeWhile_969  iterable1123 ,    struct Maybe_967  base1125 ,    struct Maybe_967 (*  fun1127 )(    struct Char_65  ,    struct Maybe_967  ) ) {
    struct Maybe_967  x1128 = (  base1125 );
    struct TakeWhile_969  it1129 = ( (  into_dash_iter979 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1130 = ( (  next976 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_297_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_297_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp995 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp995);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_967  temp996;
    return (  temp996 );
}

static  void *   cast_dash_ptr1004 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1005 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed1002 (  ) {
    int32_t  temp1003;
    int32_t  x571 = (  temp1003 );
    ( ( memset ) ( ( (  cast_dash_ptr1004 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1005 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   cast1006 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1000 (    uint8_t  x574 ) {
    int32_t  temp1001 = ( (  zeroed1002 ) ( ) );
    int32_t *  y575 = ( &temp1001 );
    uint8_t *  yp576 = ( (  cast1006 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  int32_t   u8_dash_i32999 (    uint8_t  x670 ) {
    return ( (  cast_dash_on_dash_zeroed1000 ) ( (  x670 ) ) );
}

static  struct Maybe_155   parse_dash_digit998 (    struct Char_65  c2542 ) {
    if ( ( (  is_dash_digit973 ) ( (  c2542 ) ) ) ) {
        return ( ( Maybe_155_Just ) ( ( (  u8_dash_i32999 ) ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2542 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
}

static  int64_t   i32_dash_i641007 (    int32_t  x607 ) {
    return ( (int64_t ) (  x607 ) );
}

static  struct Maybe_967   sequence_dash_maybe997 (    struct Char_65  e2548 ,    struct Maybe_967  b2550 ) {
    struct Maybe_967  dref2551 = (  b2550 );
    if ( dref2551.tag == Maybe_967_None_t ) {
        return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
    }
    else {
        if ( dref2551.tag == Maybe_967_Just_t ) {
            struct Maybe_155  dref2553 = ( (  parse_dash_digit998 ) ( (  e2548 ) ) );
            if ( dref2553.tag == Maybe_155_None_t ) {
                return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
            }
            else {
                if ( dref2553.tag == Maybe_155_Just_t ) {
                    return ( ( Maybe_967_Just ) ( (  op_dash_add471 ( (  op_dash_mul286 ( ( dref2551 .stuff .Maybe_967_Just_s .field0 ) , (  from_dash_integral288 ( 10 ) ) ) ) , ( (  i32_dash_i641007 ) ( ( dref2553 .stuff .Maybe_155_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_967   parse_dash_int992 (    struct TakeWhile_969  s2545 ) {
    struct TakeWhile_969  cs2555 = ( (  chars993 ) ( (  s2545 ) ) );
    struct Maybe_297  dref2556 = ( (  head975 ) ( (  cs2555 ) ) );
    if ( dref2556.tag == Maybe_297_Just_t ) {
        return ( (  reduce994 ) ( (  cs2555 ) ,  ( ( Maybe_967_Just ) ( (  from_dash_integral288 ( 0 ) ) ) ) ,  (  sequence_dash_maybe997 ) ) );
    }
    else {
        if ( dref2556.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
        }
    }
}

static  struct Maybe_967   scan_dash_int968 (    struct Scanner_955 *  sc3267 ) {
    struct TakeWhile_969  digit_dash_chars3268 = ( (  take_dash_while970 ) ( (  sc3267 ) ,  (  is_dash_digit973 ) ) );
    if ( ( (  null974 ) ( (  digit_dash_chars3268 ) ) ) ) {
        return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
    }
    ( (  drop_prime_980 ) ( (  sc3267 ) ,  ( (  count987 ) ( (  digit_dash_chars3268 ) ) ) ) );
    return ( (  parse_dash_int992 ) ( (  digit_dash_chars3268 ) ) );
}

static  int32_t   i64_dash_i321009 (    int64_t  x619 ) {
    return ( (int32_t ) (  x619 ) );
}

struct StrConcat_1011 {
    struct StrView_27  field0;
    int64_t  field1;
};

static struct StrConcat_1011 StrConcat_1011_StrConcat (  struct StrView_27  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_1011 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1014 {
    struct StrView_27  field0;
    struct StrConcat_1011  field1;
};

static struct StrConcat_1014 StrConcat_1014_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1011  field1 ) {
    return ( struct StrConcat_1014 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1013 {
    struct StrConcat_1014  field0;
    struct Char_65  field1;
};

static struct StrConcat_1013 StrConcat_1013_StrConcat (  struct StrConcat_1014  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1013 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1019 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1018 {
    struct StrViewIter_458  f_left;
    struct IntStrIter_1019  f_right;
};

struct StrConcatIter_1017 {
    struct StrViewIter_458  f_left;
    struct StrConcatIter_1018  f_right;
};

enum EmptyIter_1021 {
    EmptyIter_1021_EmptyIter,
};

struct AppendIter_1020 {
    enum EmptyIter_1021  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

struct StrConcatIter_1016 {
    struct StrConcatIter_1017  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_1016   into_dash_iter1023 (    struct StrConcatIter_1016  self1527 ) {
    return (  self1527 );
}

struct env1030 {
    int64_t  base1240;
    ;
};

struct envunion1031 {
    int64_t  (*fun) (  struct env1030*  ,    int32_t  ,    int64_t  );
    struct env1030 env;
};

static  int64_t   reduce1029 (    struct Range_150  iterable1123 ,    int64_t  base1125 ,   struct envunion1031  fun1127 ) {
    int64_t  x1128 = (  base1125 );
    struct RangeIter_153  it1129 = ( (  into_dash_iter154 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1130 = ( (  next156 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_155_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_155_Just_t ) {
                struct envunion1031  temp1032 = (  fun1127 );
                x1128 = ( temp1032.fun ( &temp1032.env ,  ( dref1130 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1033 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1033);
    exit ( 1 );
    ( Unit_8_Unit );
    int64_t  temp1034;
    return (  temp1034 );
}

static  int64_t   lam1035 (   struct env1030* env ,    int32_t  item1244 ,    int64_t  x1246 ) {
    return (  op_dash_mul286 ( (  x1246 ) , ( env->base1240 ) ) );
}

static  int64_t   pow1028 (    int64_t  base1240 ,    int32_t  p1242 ) {
    struct env1030 envinst1030 = {
        .base1240 =  base1240 ,
    };
    return ( (  reduce1029 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1242 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral288 ( 1 ) ) ,  ( (struct envunion1031){ .fun = (  int64_t  (*) (  struct env1030*  ,    int32_t  ,    int64_t  ) )lam1035 , .env =  envinst1030 } ) ) );
}

static  int64_t   op_dash_div1036 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast1037 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub1038 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast1044 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed1042 (    uint8_t  x574 ) {
    size_t  temp1043 = ( (  zeroed836 ) ( ) );
    size_t *  y575 = ( &temp1043 );
    uint8_t *  yp576 = ( (  cast1044 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  size_t   u8_dash_size1041 (    uint8_t  x664 ) {
    return ( (  cast_dash_on_dash_zeroed1042 ) ( (  x664 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1040 (    uint8_t *  ptr682 ,    uint8_t  b684 ) {
    size_t  s685 = ( ( (size_t ) (  ptr682 ) ) );
    size_t  exp686 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add311 ( (  op_dash_sub289 ( (  s685 ) , ( (  u8_dash_size1041 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer340 ) ( (  ptr682 ) ) ) ) ) ) ) , (  op_dash_mul405 ( (  exp686 ) , ( (  u8_dash_size1041 ) ( (  b684 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1045 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_u81039 (    uint8_t  b785 ) {
    uint8_t *  ptr786 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1040 ) ( ( ( (  cast1045 ) ( ( (  u8_dash_size1041 ) ( (  b785 ) ) ) ) ) ) ,  (  from_dash_integral308 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr786 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_297   next1027 (    struct IntStrIter_1019 *  self1458 ) {
    if ( ( ( * (  self1458 ) ) .f_negative ) ) {
        (*  self1458 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    int64_t  trim_dash_down1459 = ( (  pow1028 ) ( (  from_dash_integral288 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1460 = (  op_dash_div1036 ( ( ( * (  self1458 ) ) .f_int ) , (  trim_dash_down1459 ) ) );
    int64_t  upper_dash_mask1461 = (  op_dash_mul286 ( (  op_dash_div1036 ( (  upper1460 ) , (  from_dash_integral288 ( 10 ) ) ) ) , (  from_dash_integral288 ( 10 ) ) ) );
    uint8_t  digit1462 = ( ( (  cast1037 ) ( (  op_dash_sub1038 ( (  upper1460 ) , (  upper_dash_mask1461 ) ) ) ) ) );
    (*  self1458 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1463 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1462 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1463 ) ) );
}

static  struct Maybe_297   next1026 (    struct StrConcatIter_1018 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1027 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1025 (    struct StrConcatIter_1017 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1026 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1047 (    enum EmptyIter_1021 *  dref805 ) {
    return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
}

static  struct Maybe_297   next1046 (    struct AppendIter_1020 *  self1052 ) {
    struct Maybe_297  dref1053 = ( (  next1047 ) ( ( & ( ( * (  self1052 ) ) .f_it ) ) ) );
    if ( dref1053.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1053 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1053.tag == Maybe_297_None_t ) {
            if ( ( ! ( ( * (  self1052 ) ) .f_appended ) ) ) {
                (*  self1052 ) .f_appended = ( true );
                return ( ( Maybe_297_Just ) ( ( ( * (  self1052 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct Maybe_297   next1024 (    struct StrConcatIter_1016 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next1025 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1015 (    struct StrConcatIter_1016  iterable1104 ,    enum Unit_8 (*  fun1106 )(    struct Char_65  ) ) {
    struct StrConcatIter_1016  temp1022 = ( (  into_dash_iter1023 ) ( (  iterable1104 ) ) );
    struct StrConcatIter_1016 *  it1107 = ( &temp1022 );
    while ( ( true ) ) {
        struct Maybe_297  dref1108 = ( (  next1024 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_297_Just_t ) {
                ( (  fun1106 ) ( ( dref1108 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_158   cmp1056 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg1057 (    int64_t  l204 ) {
    return ( (  from_dash_integral288 ( 0 ) ) - (  l204 ) );
}

static  bool   eq1059 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits1058 (    int64_t  self1466 ) {
    if ( (  eq1059 ( (  self1466 ) , (  from_dash_integral288 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1467 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp1056 ( (  self1466 ) , (  from_dash_integral288 ( 0 ) ) ) == 2 ) ) {
        self1466 = (  op_dash_div1036 ( (  self1466 ) , (  from_dash_integral288 ( 10 ) ) ) );
        digits1467 = (  op_dash_add159 ( (  digits1467 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1467 );
}

static  struct IntStrIter_1019   int_dash_iter1055 (    int64_t  int1470 ) {
    if ( (  cmp1056 ( (  int1470 ) , (  from_dash_integral288 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1019) { .f_int = (  op_dash_neg1057 ( (  int1470 ) ) ) , .f_len = ( (  count_dash_digits1058 ) ( (  op_dash_neg1057 ( (  int1470 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1019) { .f_int = (  int1470 ) , .f_len = ( (  count_dash_digits1058 ) ( (  int1470 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1019   chars1054 (    int64_t  self1497 ) {
    return ( (  int_dash_iter1055 ) ( (  self1497 ) ) );
}

static  struct StrConcatIter_1018   into_dash_iter1053 (    struct StrConcat_1011  dref1534 ) {
    return ( (struct StrConcatIter_1018) { .f_left = ( (  chars460 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1054 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_1018   chars1052 (    struct StrConcat_1011  self1545 ) {
    return ( (  into_dash_iter1053 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_1017   into_dash_iter1051 (    struct StrConcat_1014  dref1534 ) {
    return ( (struct StrConcatIter_1017) { .f_left = ( (  chars460 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1052 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_1017   chars1050 (    struct StrConcat_1014  self1545 ) {
    return ( (  into_dash_iter1051 ) ( (  self1545 ) ) );
}

static  enum EmptyIter_1021   into_dash_iter1064 (    enum EmptyIter_1021  self803 ) {
    return (  self803 );
}

static  struct AppendIter_1020   append1063 (    enum EmptyIter_1021  it1036 ,    struct Char_65  e1038 ) {
    return ( (struct AppendIter_1020) { .f_it = ( (  into_dash_iter1064 ) ( (  it1036 ) ) ) , .f_elem = (  e1038 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_1020   cons1062 (    enum EmptyIter_1021  it1041 ,    struct Char_65  e1043 ) {
    return ( (  append1063 ) ( (  it1041 ) ,  (  e1043 ) ) );
}

static  enum EmptyIter_1021   nil1065 (  ) {
    return ( EmptyIter_1021_EmptyIter );
}

static  struct AppendIter_1020   single1061 (    struct Char_65  e1046 ) {
    return ( (  cons1062 ) ( ( (  nil1065 ) ( ) ) ,  (  e1046 ) ) );
}

static  struct AppendIter_1020   chars1060 (    struct Char_65  self1443 ) {
    return ( (  single1061 ) ( (  self1443 ) ) );
}

static  struct StrConcatIter_1016   into_dash_iter1049 (    struct StrConcat_1013  dref1534 ) {
    return ( (struct StrConcatIter_1016) { .f_left = ( (  chars1050 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_1016   chars1048 (    struct StrConcat_1013  self1545 ) {
    return ( (  into_dash_iter1049 ) ( (  self1545 ) ) );
}

static  enum Unit_8   print1012 (    struct StrConcat_1013  s1732 ) {
    ( (  for_dash_each1015 ) ( ( (  chars1048 ) ( (  s1732 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_876   undefined1066 (  ) {
    enum MouseButton_876  temp1067;
    return (  temp1067 );
}

static  enum MouseButton_876   panic_prime_1010 (    struct StrConcat_1011  errmsg1746 ) {
    ( (  print1012 ) ( ( ( StrConcat_1013_StrConcat ) ( ( ( StrConcat_1014_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1746 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1066 ) ( ) );
}

static  enum MouseButton_876   btn_dash_to_dash_mouse_dash_button1008 (    int64_t  btn3455 ) {
    return ( {  int32_t  dref3456 = ( (  i64_dash_i321009 ) ( (  btn3455 ) ) ) ;  dref3456 == 0 ? ( MouseButton_876_MouseLeft ) :  dref3456 == 1 ? ( MouseButton_876_MouseMiddle ) :  dref3456 == 2 ? ( MouseButton_876_MouseRight ) :  dref3456 == 64 ? ( MouseButton_876_ScrollUp ) :  dref3456 == 65 ? ( MouseButton_876_ScrollDown ) : ( (  panic_prime_1010 ) ( ( ( StrConcat_1011_StrConcat ) ( ( (  from_dash_string199 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3455 ) ) ) ) ) ; } );
}

static  struct Scanner_955   mk1069 (    struct StrView_27  s3255 ) {
    return ( (struct Scanner_955) { .f_s = ( (  into_dash_iter461 ) ( (  s3255 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_873   parse_dash_csi949 (    struct Slice_950  seq3462 ) {
    if ( (  eq399 ( ( (  seq3462 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    char  last3463 = (  elem_dash_get951 ( (  seq3462 ) , (  op_dash_sub289 ( ( (  seq3462 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq936 ( (  elem_dash_get951 ( (  seq3462 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike482 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq936 ( (  last3463 ) , ( (  from_dash_charlike482 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq936 ( (  last3463 ) , ( (  from_dash_charlike482 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_955  temp956 = ( (  mk_dash_from_dash_str957 ) ( ( (  substr958 ) ( ( (  from_dash_ascii_dash_slice964 ) ( (  seq3462 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3462 ) .f_count ) ) ) ) );
        struct Scanner_955 *  sc3464 = ( &temp956 );
        struct Maybe_967  dref3465 = ( (  scan_dash_int968 ) ( (  sc3464 ) ) );
        if ( dref3465.tag == Maybe_967_None_t ) {
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
        else {
            if ( dref3465.tag == Maybe_967_Just_t ) {
                ( (  next977 ) ( (  sc3464 ) ) );
                struct Maybe_967  dref3467 = ( (  scan_dash_int968 ) ( (  sc3464 ) ) );
                if ( dref3467.tag == Maybe_967_None_t ) {
                    return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
                }
                else {
                    if ( dref3467.tag == Maybe_967_Just_t ) {
                        ( (  next977 ) ( (  sc3464 ) ) );
                        struct Maybe_967  dref3469 = ( (  scan_dash_int968 ) ( (  sc3464 ) ) );
                        if ( dref3469.tag == Maybe_967_None_t ) {
                            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
                        }
                        else {
                            if ( dref3469.tag == Maybe_967_Just_t ) {
                                return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Mouse ) ( ( (struct MouseEvent_875) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1008 ) ( ( dref3465 .stuff .Maybe_967_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub164 ( ( (  i64_dash_i321009 ) ( ( dref3467 .stuff .Maybe_967_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub164 ( ( (  i64_dash_i321009 ) ( ( dref3469 .stuff .Maybe_967_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq936 ( (  last3463 ) , ( (  from_dash_charlike482 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq399 ( ( (  seq3462 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq936 ( (  last3463 ) , ( (  from_dash_charlike482 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Up_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3463 ) , ( (  from_dash_charlike482 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Down_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3463 ) , ( (  from_dash_charlike482 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Right_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3463 ) , ( (  from_dash_charlike482 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Left_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3463 ) , ( (  from_dash_charlike482 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Home_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3463 ) , ( (  from_dash_charlike482 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    if ( (  eq936 ( (  last3463 ) , ( (  from_dash_charlike482 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_955  temp1068 = ( (  mk1069 ) ( ( (  from_dash_ascii_dash_slice964 ) ( (  seq3462 ) ) ) ) );
        struct Scanner_955 *  sc3471 = ( &temp1068 );
        struct Maybe_967  dref3472 = ( (  scan_dash_int968 ) ( (  sc3471 ) ) );
        if ( dref3472.tag == Maybe_967_None_t ) {
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
        else {
            if ( dref3472.tag == Maybe_967_Just_t ) {
                return ( {  int32_t  dref3474 = ( (  i64_dash_i321009 ) ( ( dref3472 .stuff .Maybe_967_Just_s .field0 ) ) ) ;  dref3474 == 1 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Home_t } ) ) ) ) ) :  dref3474 == 2 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Insert_t } ) ) ) ) ) :  dref3474 == 3 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Delete_t } ) ) ) ) ) :  dref3474 == 4 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_End_t } ) ) ) ) ) :  dref3474 == 5 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_PageUp_t } ) ) ) ) ) :  dref3474 == 6 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_PageDown_t } ) ) ) ) ) :  dref3474 == 15 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_F5_t } ) ) ) ) ) :  dref3474 == 17 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_F6_t } ) ) ) ) ) :  dref3474 == 18 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_F7_t } ) ) ) ) ) :  dref3474 == 19 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_F8_t } ) ) ) ) ) :  dref3474 == 20 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_F9_t } ) ) ) ) ) :  dref3474 == 21 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_F10_t } ) ) ) ) ) :  dref3474 == 23 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_F11_t } ) ) ) ) ) :  dref3474 == 24 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_F12_t } ) ) ) ) ) : ( (struct Maybe_873) { .tag = Maybe_873_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
}

static  struct Slice_950   subslice1070 (    struct Slice_950  slice1818 ,    size_t  from1820 ,    size_t  to1822 ) {
    char *  begin_dash_ptr1823 = ( (  offset_dash_ptr947 ) ( ( (  slice1818 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1820 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1820 ) , (  to1822 ) ) != 0 ) || (  cmp290 ( (  from1820 ) , ( (  slice1818 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_950) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1824 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1822 ) ,  ( (  slice1818 ) .f_count ) ) ) , (  from1820 ) ) );
    return ( (struct Slice_950) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  count1824 ) } );
}

static  char *   cast1072 (    struct Array_937 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_950   as_dash_slice1071 (    struct Array_937 *  arr2330 ) {
    return ( (struct Slice_950) { .f_ptr = ( (  cast1072 ) ( (  arr2330 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1074 {
    enum {
        Maybe_1074_None_t,
        Maybe_1074_Just_t,
    } tag;
    union {
        struct {
            struct Key_268  field0;
        } Maybe_1074_Just_s;
    } stuff;
};

static struct Maybe_1074 Maybe_1074_Just (  struct Key_268  field0 ) {
    return ( struct Maybe_1074 ) { .tag = Maybe_1074_Just_t, .stuff = { .Maybe_1074_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1074   parse_dash_ss31075 (    char  c3459 ) {
    if ( (  eq936 ( (  c3459 ) , ( (  from_dash_charlike482 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_268) { .tag = Key_268_Up_t } ) ) );
    }
    if ( (  eq936 ( (  c3459 ) , ( (  from_dash_charlike482 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_268) { .tag = Key_268_Down_t } ) ) );
    }
    if ( (  eq936 ( (  c3459 ) , ( (  from_dash_charlike482 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_268) { .tag = Key_268_Right_t } ) ) );
    }
    if ( (  eq936 ( (  c3459 ) , ( (  from_dash_charlike482 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_268) { .tag = Key_268_Left_t } ) ) );
    }
    if ( (  eq936 ( (  c3459 ) , ( (  from_dash_charlike482 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_268) { .tag = Key_268_Home_t } ) ) );
    }
    if ( (  eq936 ( (  c3459 ) , ( (  from_dash_charlike482 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_268) { .tag = Key_268_End_t } ) ) );
    }
    if ( (  eq936 ( (  c3459 ) , ( (  from_dash_charlike482 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_268) { .tag = Key_268_F1_t } ) ) );
    }
    if ( (  eq936 ( (  c3459 ) , ( (  from_dash_charlike482 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_268) { .tag = Key_268_F2_t } ) ) );
    }
    if ( (  eq936 ( (  c3459 ) , ( (  from_dash_charlike482 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_268) { .tag = Key_268_F3_t } ) ) );
    }
    if ( (  eq936 ( (  c3459 ) , ( (  from_dash_charlike482 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_268) { .tag = Key_268_F4_t } ) ) );
    }
    return ( (struct Maybe_1074) { .tag = Maybe_1074_None_t } );
}

static  struct Maybe_873   read_dash_key885 (  ) {
    char  temp886 = ( (  undefined887 ) ( ) );
    char *  ch3476 = ( &temp886 );
    struct Maybe_889  dref3477 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3477.tag == Maybe_889_None_t ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    else {
        if ( dref3477.tag == Maybe_889_Just_t ) {
            (*  ch3476 ) = ( dref3477 .stuff .Maybe_889_Just_s .field0 );
        }
    }
    if ( (  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3476 ) ) ) ) , (  from_dash_integral308 ( 13 ) ) ) ) ) {
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Enter_t } ) ) ) ) );
    }
    if ( (  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3476 ) ) ) ) , (  from_dash_integral308 ( 127 ) ) ) ) ) {
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3476 ) ) ) ) , (  from_dash_integral308 ( 27 ) ) ) == 0 ) && ( !  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3476 ) ) ) ) , (  from_dash_integral308 ( 9 ) ) ) ) ) ) {
        char  letter3479 = ( (  u8_dash_ascii897 ) ( ( (  u32_dash_u8144 ) ( ( (  u32_dash_or728 ) ( ( (  u8_dash_u32898 ) ( ( (  ascii_dash_u8481 ) ( ( * (  ch3476 ) ) ) ) ) ) ,  ( (  from_dash_hex902 ) ( ( (  from_dash_string199 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( ( Key_268_Ctrl ) ( (  letter3479 ) ) ) ) ) ) );
    }
    if ( ( !  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3476 ) ) ) ) , (  from_dash_integral308 ( 27 ) ) ) ) ) {
        if ( (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3476 ) ) ) ) , (  from_dash_integral308 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key885 ) ( ) );
        } else {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( ( Key_268_Char ) ( ( * (  ch3476 ) ) ) ) ) ) ) );
        }
    }
    char  temp935 = ( (  undefined887 ) ( ) );
    char *  ch23480 = ( &temp935 );
    struct Maybe_889  dref3481 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3481.tag == Maybe_889_None_t ) {
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3481.tag == Maybe_889_Just_t ) {
            (*  ch23480 ) = ( dref3481 .stuff .Maybe_889_Just_s .field0 );
        }
    }
    if ( (  eq936 ( ( * (  ch23480 ) ) , ( (  from_dash_charlike482 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_937  temp938 = ( ( (  zeroed939 ) ( ) ) );
        struct Array_937 *  seq3483 = ( &temp938 );
        int32_t  slen3484 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp157 ( (  slen3484 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp943 = ( (  undefined887 ) ( ) );
            char *  sc3485 = ( &temp943 );
            struct Maybe_889  dref3486 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3486.tag == Maybe_889_None_t ) {
                break;
            }
            else {
                if ( dref3486.tag == Maybe_889_Just_t ) {
                    (*  sc3485 ) = ( dref3486 .stuff .Maybe_889_Just_s .field0 );
                }
            }
            ( (  set944 ) ( (  seq3483 ) ,  ( (  i32_dash_size412 ) ( (  slen3484 ) ) ) ,  ( * (  sc3485 ) ) ) );
            slen3484 = (  op_dash_add159 ( (  slen3484 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  sc3485 ) ) ) ) , (  from_dash_integral308 ( 64 ) ) ) != 0 ) && (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  sc3485 ) ) ) ) , (  from_dash_integral308 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi949 ) ( ( (  subslice1070 ) ( ( (  as_dash_slice1071 ) ( (  seq3483 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( (  slen3484 ) ) ) ) ) ) );
    }
    if ( (  eq936 ( ( * (  ch23480 ) ) , ( (  from_dash_charlike482 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1073 = ( (  undefined887 ) ( ) );
        char *  sc3488 = ( &temp1073 );
        struct Maybe_889  dref3489 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3489.tag == Maybe_889_None_t ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3489.tag == Maybe_889_Just_t ) {
                (*  sc3488 ) = ( dref3489 .stuff .Maybe_889_Just_s .field0 );
            }
        }
        struct Maybe_1074  dref3491 = ( (  parse_dash_ss31075 ) ( ( * (  sc3488 ) ) ) );
        if ( dref3491.tag == Maybe_1074_None_t ) {
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
        else {
            if ( dref3491.tag == Maybe_1074_Just_t ) {
                return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( dref3491 .stuff .Maybe_1074_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_268) { .tag = Key_268_Escape_t } ) ) ) ) );
}

static  struct Maybe_873   read_dash_event882 (   struct env88* env ,    struct Tui_90 *  tui3501 ) {
    struct envunion89  temp883 = ( (struct envunion89){ .fun = (  bool  (*) (  struct env87*  ,    struct Tui_90 *  ) )update_dash_dimensions884 , .env =  env->envinst87 } );
    ( temp883.fun ( &temp883.env ,  (  tui3501 ) ) );
    struct Maybe_873  dref3502 = ( (  read_dash_key885 ) ( ) );
    if ( dref3502.tag == Maybe_873_None_t ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    else {
        if ( dref3502.tag == Maybe_873_Just_t ) {
            (*  tui3501 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_873_Just ) ( ( dref3502 .stuff .Maybe_873_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_873   lam880 (   struct env871* env ) {
    struct envunion872  temp881 = ( (struct envunion872){ .fun = (  struct Maybe_873  (*) (  struct env88*  ,    struct Tui_90 *  ) )read_dash_event882 , .env =  env->envinst88 } );
    return ( temp881.fun ( &temp881.env ,  ( env->tui4665 ) ) );
}

static  struct Maybe_873   next1077 (    struct FunIter_870 *  self1061 ) {
    if ( ( ( * (  self1061 ) ) .f_finished ) ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    struct envunion877  temp1078 = ( ( * (  self1061 ) ) .f_fun );
    struct Maybe_873  dref1062 = ( temp1078.fun ( &temp1078.env ) );
    if ( dref1062.tag == Maybe_873_Just_t ) {
        return ( ( Maybe_873_Just ) ( ( dref1062 .stuff .Maybe_873_Just_s .field0 ) ) );
    }
    else {
        if ( dref1062.tag == Maybe_873_None_t ) {
            (*  self1061 ) .f_finished = ( true );
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
    }
}

struct env1081 {
    struct Editor_248 *  ed4515;
    ;
};

struct envunion1082 {
    enum Unit_8  (*fun) (  struct env1081*  ,    struct StrView_27  );
    struct env1081 env;
};

static  enum Unit_8   if_dash_just1080 (    struct Maybe_80  x1321 ,   struct envunion1082  fun1323 ) {
    struct Maybe_80  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_80_Just_t ) {
        struct envunion1082  temp1083 = (  fun1323 );
        ( temp1083.fun ( &temp1083.env ,  ( dref1324 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1084 (   struct env1081* env ,    struct StrView_27  msg4517 ) {
    ( (  free547 ) ( (  msg4517 ) ,  ( ( * ( env->ed4515 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1079 (    struct Editor_248 *  ed4515 ) {
    struct env1081 envinst1081 = {
        .ed4515 =  ed4515 ,
    };
    ( (  if_dash_just1080 ) ( ( ( * (  ed4515 ) ) .f_msg ) ,  ( (struct envunion1082){ .fun = (  enum Unit_8  (*) (  struct env1081*  ,    struct StrView_27  ) )lam1084 , .env =  envinst1081 } ) ) );
    (*  ed4515 ) .f_msg = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1086 {
    enum Unit_8  (*fun) (  struct env264*  ,    struct Editor_248 *  ,    struct Key_268  );
    struct env264 env;
};

enum CursorMovement_1092 {
    CursorMovement_1092_NoChanges,
    CursorMovement_1092_UpdateVI,
    CursorMovement_1092_OverrideSelect,
};

struct Tuple2_1094 {
    enum CursorMovement_1092  field0;
    enum CursorMovement_1092  field1;
};

static struct Tuple2_1094 Tuple2_1094_Tuple2 (  enum CursorMovement_1092  field0 ,  enum CursorMovement_1092  field1 ) {
    return ( struct Tuple2_1094 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1093 (    enum CursorMovement_1092  l4256 ,    enum CursorMovement_1092  r4258 ) {
    return ( {  struct Tuple2_1094  dref4259 = ( ( Tuple2_1094_Tuple2 ) ( (  l4256 ) ,  (  r4258 ) ) ) ;  dref4259 .field0 == CursorMovement_1092_NoChanges &&  dref4259 .field1 == CursorMovement_1092_NoChanges ? ( true ) :  dref4259 .field0 == CursorMovement_1092_UpdateVI &&  dref4259 .field1 == CursorMovement_1092_UpdateVI ? ( true ) :  dref4259 .field0 == CursorMovement_1092_OverrideSelect &&  dref4259 .field1 == CursorMovement_1092_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_27   from_dash_bytes1098 (    struct Slice_11  sl2189 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2189 ) } );
}

static  struct StrView_27   line1097 (    struct TextBuf_105 *  self3790 ,    int32_t  li3792 ) {
    return ( (  from_dash_bytes1098 ) ( ( (  to_dash_slice566 ) ( ( ( (  get564 ) ( ( & ( ( * (  self3790 ) ) .f_buf ) ) ,  ( (  i32_dash_size412 ) ( (  li3792 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe1101 (    struct Maybe_80  x1312 ,    int32_t (*  fun1314 )(    struct StrView_27  ) ,    int32_t  default1316 ) {
    return ( {  struct Maybe_80  dref1317 = (  x1312 ) ; dref1317.tag == Maybe_80_Just_t ? ( (  fun1314 ) ( ( dref1317 .stuff .Maybe_80_Just_s .field0 ) ) ) : (  default1316 ) ; } );
}

static  struct Maybe_80   char_dash_replacement1102 (    struct Char_65  c4136 ) {
    if ( (  eq469 ( (  c4136 ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_80_Just ) ( ( (  from_dash_string199 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
}

static  size_t   reduce1105 (    struct StrViewIter_458  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct StrViewIter_458  it1129 = ( (  into_dash_iter459 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1130 = ( (  next463 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_297_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_297_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1106 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1106);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1107;
    return (  temp1107 );
}

static  size_t   lam1108 (    struct Char_65  dref1135 ,    size_t  x1137 ) {
    return (  op_dash_add311 ( (  x1137 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1104 (    struct StrViewIter_458  it1134 ) {
    return ( (  reduce1105 ) ( (  it1134 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1108 ) ) );
}

static  int32_t   lam1103 (    struct StrView_27  s4141 ) {
    return ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars460 ) ( (  s4141 ) ) ) ) ) ) );
}

static  int32_t   max1110 (    int32_t  l1345 ,    int32_t  r1347 ) {
    if ( (  cmp157 ( (  l1345 ) , (  r1347 ) ) == 2 ) ) {
        return (  l1345 );
    } else {
        return (  r1347 );
    }
}

static  void *   cast_dash_ptr1116 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1117 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed1114 (  ) {
    wchar_t  temp1115;
    wchar_t  x571 = (  temp1115 );
    ( ( memset ) ( ( (  cast_dash_ptr1116 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1117 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  char *   cast_dash_ptr1118 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast1119 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_1122 {
    size_t  f_size;
};

static  struct TypeSize_1122   get_dash_typesize1121 (  ) {
    wchar_t  temp1123;
    return ( (struct TypeSize_1122) { .f_size = ( sizeof( ( (  temp1123 ) ) ) ) } );
}

static  wchar_t   cast1125 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar1112 (    struct Char_65  c763 ) {
    struct CharDestructured_337  dref764 = ( (  destructure339 ) ( (  c763 ) ) );
    if ( dref764.tag == CharDestructured_337_Ref_t ) {
        wchar_t  temp1113 = ( (  zeroed1114 ) ( ) );
        wchar_t *  wcp766 = ( &temp1113 );
        size_t  num_dash_chars767 = ( ( mbstowcs ) ( (  wcp766 ) ,  ( (  cast_dash_ptr1118 ) ( ( ( dref764 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq399 ( (  num_dash_chars767 ) , ( ( (  cast1119 ) ( ( (  op_dash_neg1057 ( (  from_dash_integral288 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1120 = ( (  from_dash_string57 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1120);
            exit ( 1 );
            ( Unit_8_Unit );
        }
        return ( * (  wcp766 ) );
    }
    else {
        if ( dref764.tag == CharDestructured_337_Scalar_t ) {
            if ( ( ! (  eq399 ( ( (  size_dash_of810 ) ( ( ( dref764 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1121 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1124 = ( (  from_dash_string57 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1124);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( (  cast1125 ) ( ( ( dref764 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1111 (    struct Char_65  c2660 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1112 ) ( (  c2660 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1109 (    struct Char_65  c3546 ) {
    return ( (  max1110 ) ( ( (  wcwidth1111 ) ( (  c3546 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width1100 (    struct Char_65  c4139 ) {
    return ( (  maybe1101 ) ( ( (  char_dash_replacement1102 ) ( (  c4139 ) ) ) ,  (  lam1103 ) ,  ( (  rendered_dash_wcwidth1109 ) ( (  c4139 ) ) ) ) );
}

static  int32_t   pos_dash_vi1095 (    struct TextBuf_105 *  self4155 ,    struct Pos_26  pos4157 ) {
    int32_t  bi4158 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4159 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_458  temp1096 =  into_dash_iter459 ( ( (  chars460 ) ( ( (  line1097 ) ( (  self4155 ) ,  ( (  pos4157 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_297  __cond1099 =  next463 (&temp1096);
        if (  __cond1099 .tag == 0 ) {
            break;
        }
        struct Char_65  c4161 =  __cond1099 .stuff .Maybe_297_Just_s .field0;
        bi4158 = (  op_dash_add159 ( (  bi4158 ) , ( (  size_dash_i32329 ) ( ( (  c4161 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp157 ( ( (  pos4157 ) .f_bi ) , (  bi4158 ) ) == 0 ) ) {
            break;
        }
        vi4159 = (  op_dash_add159 ( (  vi4159 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4161 ) ) ) ) );
    }
    return (  vi4159 );
}

struct Tuple2_1128 {
    enum Mode_220  field0;
    enum Mode_220  field1;
};

static struct Tuple2_1128 Tuple2_1128_Tuple2 (  enum Mode_220  field0 ,  enum Mode_220  field1 ) {
    return ( struct Tuple2_1128 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1127 (    enum Mode_220  l4115 ,    enum Mode_220  r4117 ) {
    return ( {  struct Tuple2_1128  dref4118 = ( ( Tuple2_1128_Tuple2 ) ( (  l4115 ) ,  (  r4117 ) ) ) ;  dref4118 .field0 == Mode_220_Normal &&  dref4118 .field1 == Mode_220_Normal ? ( true ) :  dref4118 .field0 == Mode_220_Insert &&  dref4118 .field1 == Mode_220_Insert ? ( true ) :  dref4118 .field0 == Mode_220_Select &&  dref4118 .field1 == Mode_220_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1126 (    struct Pane_219 *  self4245 ,    struct Maybe_34  sel4247 ) {
    if ( ( !  eq1127 ( ( ( * (  self4245 ) ) .f_mode ) , ( Mode_220_Select ) ) ) ) {
        (*  self4245 ) .f_sel = (  sel4247 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors1091 (    struct Pane_219 *  self4262 ,    struct Pos_26  cur4264 ,    struct Maybe_34  sel4266 ,    enum CursorMovement_1092  cursor_dash_movement_dash_type4268 ) {
    if ( ( !  eq1093 ( (  cursor_dash_movement_dash_type4268 ) , ( CursorMovement_1092_NoChanges ) ) ) ) {
        (*  self4262 ) .f_vi = ( (  pos_dash_vi1095 ) ( ( ( * (  self4262 ) ) .f_buf ) ,  (  cur4264 ) ) );
    }
    (*  self4262 ) .f_cursor = (  cur4264 );
    if ( ( !  eq1093 ( (  cursor_dash_movement_dash_type4268 ) , ( CursorMovement_1092_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1126 ) ( (  self4262 ) ,  (  sel4266 ) ) );
    } else {
        (*  self4262 ) .f_sel = (  sel4266 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1130 (    struct StrView_27  self2235 ) {
    return ( ( (  self2235 ) .f_contents ) .f_count );
}

static  size_t   clamp1131 (    size_t  x1382 ,    size_t  mn1384 ,    size_t  mx1386 ) {
    if ( (  cmp290 ( (  x1382 ) , (  mn1384 ) ) == 0 ) ) {
        return (  mn1384 );
    } else {
        if ( (  cmp290 ( (  x1382 ) , (  mx1386 ) ) == 2 ) ) {
            return (  mx1386 );
        } else {
            return (  x1382 );
        }
    }
}

static  size_t   sync_dash_char1133 (    uint8_t *  p693 ) {
    size_t  i694 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb695 = ( * ( (uint8_t * ) ( ( (void*) (  p693 ) ) + (  op_dash_neg1057 ( ( (  size_dash_i64302 ) ( (  i694 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp307 ( (  pb695 ) , (  from_dash_integral308 ( 128 ) ) ) != 0 ) && (  cmp307 ( (  pb695 ) , (  op_dash_add933 ( (  from_dash_integral308 ( 128 ) ) , (  from_dash_integral308 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i694 );
        }
        i694 = (  op_dash_add311 ( (  i694 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1132 (    uint8_t *  p698 ) {
    return (  op_dash_add311 ( ( (  sync_dash_char1133 ) ( ( (  offset_dash_ptr300 ) ( (  p698 ) ,  (  op_dash_neg1057 ( (  from_dash_integral288 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1129 (    struct TextBuf_105 *  self3811 ,    struct Pos_26  pos3813 ) {
    if ( (  eq557 ( (  pos3813 ) , ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq558 ( ( (  pos3813 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert667 ) ( (  cmp157 ( ( (  pos3813 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string199 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk694 ) ( (  op_dash_sub164 ( ( (  pos3813 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( (  self3811 ) ,  (  op_dash_sub164 ( ( (  pos3813 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line3814 = ( (  line1097 ) ( (  self3811 ) ,  ( (  pos3813 ) .f_line ) ) );
    size_t  pos_dash_bi3815 = ( (  clamp1131 ) ( ( (  i32_dash_size412 ) ( ( (  pos3813 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1130 ) ( (  line3814 ) ) ) ) );
    size_t  off3816 = ( (  previous_dash_char1132 ) ( ( (  offset_dash_ptr300 ) ( ( ( (  line3814 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  pos_dash_bi3815 ) ) ) ) ) ) );
    return ( (  mk694 ) ( ( (  pos3813 ) .f_line ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( (  pos_dash_bi3815 ) , (  off3816 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1090 (    struct Pane_219 *  self4274 ) {
    ( (  set_dash_cursors1091 ) ( (  self4274 ) ,  ( (  left_dash_pos1129 ) ( ( ( * (  self4274 ) ) .f_buf ) ,  ( ( * (  self4274 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_219 *   pane1134 (    struct Editor_248 *  ed4505 ) {
    return ( & ( ( * (  ed4505 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1137 (    struct TextBuf_105 *  self3795 ) {
    return ( (  size_dash_i32329 ) ( ( (  size559 ) ( ( & ( ( * (  self3795 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1136 (    struct TextBuf_105 *  self3803 ,    struct Pos_26  pos3805 ) {
    if ( (  cmp157 ( ( (  pos3805 ) .f_line ) , ( (  num_dash_lines1137 ) ( (  self3803 ) ) ) ) != 0 ) ) {
        return ( (  mk694 ) ( ( (  num_dash_lines1137 ) ( (  self3803 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_27  line3806 = ( (  line1097 ) ( (  self3803 ) ,  ( (  pos3805 ) .f_line ) ) );
    int64_t  bi3807 = ( (  i32_dash_i641007 ) ( ( (  pos3805 ) .f_bi ) ) );
    if ( (  cmp1056 ( (  bi3807 ) , ( (  size_dash_i64302 ) ( ( (  num_dash_bytes1130 ) ( (  line3806 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp157 ( (  op_dash_add159 ( ( (  pos3805 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1137 ) ( (  self3803 ) ) ) ) != 0 ) ) {
            return ( (  mk694 ) ( ( (  pos3805 ) .f_line ) ,  ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line3806 ) ) ) ) ) ) );
        }
        return ( (  mk694 ) ( (  op_dash_add159 ( ( (  pos3805 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off3808 = ( (  size_dash_i32329 ) ( ( (  next_dash_char306 ) ( ( (  offset_dash_ptr300 ) ( ( ( (  line3806 ) .f_contents ) .f_ptr ) ,  (  bi3807 ) ) ) ) ) ) );
    return ( (  mk694 ) ( ( (  pos3805 ) .f_line ) ,  (  op_dash_add159 ( ( (  pos3805 ) .f_bi ) , (  off3808 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1135 (    struct Pane_219 *  self4271 ) {
    ( (  set_dash_cursors1091 ) ( (  self4271 ) ,  ( (  right_dash_pos1136 ) ( ( ( * (  self4271 ) ) .f_buf ) ,  ( ( * (  self4271 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1139 (    struct TextBuf_105 *  self4144 ,    int32_t  ln4146 ,    int32_t  vx4148 ) {
    int32_t  bi4149 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4150 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_458  temp1140 =  into_dash_iter459 ( ( (  chars460 ) ( ( (  line1097 ) ( (  self4144 ) ,  (  ln4146 ) ) ) ) ) );
    while (true) {
        struct Maybe_297  __cond1141 =  next463 (&temp1140);
        if (  __cond1141 .tag == 0 ) {
            break;
        }
        struct Char_65  c4152 =  __cond1141 .stuff .Maybe_297_Just_s .field0;
        vi4150 = (  op_dash_add159 ( (  vi4150 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4152 ) ) ) ) );
        if ( (  cmp157 ( (  vx4148 ) , (  vi4150 ) ) == 0 ) ) {
            break;
        }
        bi4149 = (  op_dash_add159 ( (  bi4149 ) , ( (  size_dash_i32329 ) ( ( (  c4152 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4149 );
}

static  enum Unit_8   move_dash_down1138 (    struct Pane_219 *  self4277 ,    int32_t  amnt4279 ) {
    struct Pos_26  cur4280 = ( ( * (  self4277 ) ) .f_cursor );
    int32_t  nu_dash_line4281 = ( (  min659 ) ( (  op_dash_add159 ( ( (  cur4280 ) .f_line ) , (  amnt4279 ) ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1137 ) ( ( ( * (  self4277 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4282 = ( ( * (  self4277 ) ) .f_vi );
    int32_t  bi4283 = ( (  vi_dash_bi1139 ) ( ( ( * (  self4277 ) ) .f_buf ) ,  (  nu_dash_line4281 ) ,  (  vci4282 ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4277 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4281 ) , .f_bi = (  bi4283 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1142 (    struct Pane_219 *  self4286 ,    int32_t  amnt4288 ) {
    struct Pos_26  cur4289 = ( ( * (  self4286 ) ) .f_cursor );
    int32_t  nu_dash_line4290 = ( (  max1110 ) ( (  op_dash_sub164 ( ( (  cur4289 ) .f_line ) , (  amnt4288 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4291 = ( ( * (  self4286 ) ) .f_vi );
    int32_t  bi4292 = ( (  vi_dash_bi1139 ) ( ( ( * (  self4286 ) ) .f_buf ) ,  (  nu_dash_line4290 ) ,  (  vci4291 ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4286 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4290 ) , .f_bi = (  bi4292 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1144 (    struct TextBuf_105 *  self3904 ) {
    (*  self3904 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_107_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1143 (    struct Pane_219 *  self4250 ,    enum Mode_220  mode4252 ) {
    if ( (  eq1127 ( (  mode4252 ) , ( Mode_220_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1144 ) ( ( ( * (  self4250 ) ) .f_buf ) ) );
    }
    (*  self4250 ) .f_mode = (  mode4252 );
    return ( Unit_8_Unit );
}

struct TakeWhile_1149 {
    struct StrViewIter_458  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1148 {
    struct TakeWhile_1149  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1148 Map_1148_Map (  struct TakeWhile_1149  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1148 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1148   into_dash_iter1151 (    struct Map_1148  self809 ) {
    return (  self809 );
}

static  struct Maybe_297   next1153 (    struct TakeWhile_1149 *  self994 ) {
    struct Maybe_297  mx995 = ( (  next463 ) ( ( & ( ( * (  self994 ) ) .f_it ) ) ) );
    struct Maybe_297  dref996 = (  mx995 );
    if ( dref996.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref996.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self994 ) ) .f_pred ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1152 (    struct Map_1148 *  dref811 ) {
    struct Maybe_297  dref814 = ( (  next1153 ) ( ( & ( (* dref811 ) .field0 ) ) ) );
    if ( dref814.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref814.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref811 ) .field1 ) ( ( dref814 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1150 (    struct Map_1148  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    size_t  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct Map_1148  it1129 = ( (  into_dash_iter1151 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1130 = ( (  next1152 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_246_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_246_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1154 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1154);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1155;
    return (  temp1155 );
}

static  size_t   lam1156 (    size_t  v1142 ,    size_t  s1144 ) {
    return (  op_dash_add311 ( (  v1142 ) , (  s1144 ) ) );
}

static  size_t   sum1147 (    struct Map_1148  it1140 ) {
    return ( (  reduce1150 ) ( (  it1140 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1156 ) ) );
}

static  struct TakeWhile_1149   into_dash_iter1158 (    struct TakeWhile_1149  self991 ) {
    return (  self991 );
}

static  struct Map_1148   map1157 (    struct TakeWhile_1149  iterable818 ,    size_t (*  fun820 )(    struct Char_65  ) ) {
    struct TakeWhile_1149  it821 = ( (  into_dash_iter1158 ) ( (  iterable818 ) ) );
    return ( ( Map_1148_Map ) ( (  it821 ) ,  (  fun820 ) ) );
}

static  struct TakeWhile_1149   take_dash_while1159 (    struct StrView_27  it1000 ,    bool (*  pred1002 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1149) { .f_it = ( (  into_dash_iter461 ) ( (  it1000 ) ) ) , .f_pred = (  pred1002 ) } );
}

static  bool   lam1160 (    struct Char_65  c4340 ) {
    return (  eq469 ( (  c4340 ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1161 (    struct Char_65  c4342 ) {
    return ( (  c4342 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1146 (    struct Pane_219 *  pane4336 ,    int32_t  line4338 ) {
    return ( (  size_dash_i32329 ) ( ( (  sum1147 ) ( ( (  map1157 ) ( ( (  take_dash_while1159 ) ( ( (  line1097 ) ( ( ( * (  pane4336 ) ) .f_buf ) ,  (  line4338 ) ) ) ,  (  lam1160 ) ) ) ,  (  lam1161 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1145 (    struct Pane_219 *  self4355 ) {
    struct Pos_26  cur4356 = ( ( * (  self4355 ) ) .f_cursor );
    int32_t  indent4357 = ( (  indent_dash_at_dash_line1146 ) ( (  self4355 ) ,  ( (  cur4356 ) .f_line ) ) );
    struct Pos_26  temp1162 = (  cur4356 );
    temp1162 .  f_bi = (  indent4357 );
    ( (  set_dash_cursors1091 ) ( (  self4355 ) ,  ( temp1162 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1163 (    struct Pane_219 *  self4360 ) {
    struct Pos_26  cur4361 = ( ( * (  self4360 ) ) .f_cursor );
    struct Pos_26  temp1164 = (  cur4361 );
    temp1164 .  f_bi = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  self4360 ) ) .f_buf ) ,  ( (  cur4361 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4360 ) ,  ( temp1164 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct SliceIter_1172 {
    struct Slice_31  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1171 {
    struct SliceIter_1172  field0;
    size_t  field1;
};

static struct Drop_1171 Drop_1171_Drop (  struct SliceIter_1172  field0 ,  size_t  field1 ) {
    return ( struct Drop_1171 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1171   into_dash_iter1173 (    struct Drop_1171  self858 ) {
    return (  self858 );
}

static  struct SliceIter_1172   into_dash_iter1176 (    struct Slice_31  self1864 ) {
    return ( (struct SliceIter_1172) { .f_slice = (  self1864 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1178 (    struct Changeset_32 *  x338 ,    int64_t  count340 ) {
    struct Changeset_32  temp1179;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1179 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1177 (    struct Slice_31  slice1818 ,    size_t  from1820 ,    size_t  to1822 ) {
    struct Changeset_32 *  begin_dash_ptr1823 = ( (  offset_dash_ptr1178 ) ( ( (  slice1818 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1820 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1820 ) , (  to1822 ) ) != 0 ) || (  cmp290 ( (  from1820 ) , ( (  slice1818 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1824 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1822 ) ,  ( (  slice1818 ) .f_count ) ) ) , (  from1820 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  count1824 ) } );
}

static  struct SliceIter_1172   into_dash_iter1175 (    struct List_30  self2065 ) {
    return ( (  into_dash_iter1176 ) ( ( (  subslice1177 ) ( ( (  self2065 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2065 ) .f_count ) ) ) ) );
}

static  struct Drop_1171   drop1174 (    struct List_30  iterable865 ,    size_t  i867 ) {
    struct SliceIter_1172  it868 = ( (  into_dash_iter1175 ) ( (  iterable865 ) ) );
    return ( ( Drop_1171_Drop ) ( (  it868 ) ,  (  i867 ) ) );
}

struct Maybe_1181 {
    enum {
        Maybe_1181_None_t,
        Maybe_1181_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_32  field0;
        } Maybe_1181_Just_s;
    } stuff;
};

static struct Maybe_1181 Maybe_1181_Just (  struct Changeset_32  field0 ) {
    return ( struct Maybe_1181 ) { .tag = Maybe_1181_Just_t, .stuff = { .Maybe_1181_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1181   next1183 (    struct SliceIter_1172 *  self1870 ) {
    size_t  off1871 = ( ( * (  self1870 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1870 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1181) { .tag = Maybe_1181_None_t } );
    }
    struct Changeset_32  elem1872 = ( * ( (  offset_dash_ptr1178 ) ( ( ( ( * (  self1870 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1871 ) ) ) ) ) );
    (*  self1870 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1181_Just ) ( (  elem1872 ) ) );
}

static  struct Maybe_1181   next1182 (    struct Drop_1171 *  dref860 ) {
    while ( (  cmp290 ( ( (* dref860 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1183 ) ( ( & ( (* dref860 ) .field0 ) ) ) );
        (* dref860 ) .field1 = (  op_dash_sub289 ( ( (* dref860 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1183 ) ( ( & ( (* dref860 ) .field0 ) ) ) );
}

struct env1186 {
    ;
    enum CAllocator_10  al3743;
};

struct envunion1187 {
    enum Unit_8  (*fun) (  struct env1186*  ,    struct Action_25  );
    struct env1186 env;
};

struct SliceIter_1188 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1188   into_dash_iter1191 (    struct Slice_24  self1864 ) {
    return ( (struct SliceIter_1188) { .f_slice = (  self1864 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1193 (    struct Action_25 *  x338 ,    int64_t  count340 ) {
    struct Action_25  temp1194;
    return ( (struct Action_25 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1194 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1192 (    struct Slice_24  slice1818 ,    size_t  from1820 ,    size_t  to1822 ) {
    struct Action_25 *  begin_dash_ptr1823 = ( (  offset_dash_ptr1193 ) ( ( (  slice1818 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1820 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1820 ) , (  to1822 ) ) != 0 ) || (  cmp290 ( (  from1820 ) , ( (  slice1818 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1824 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1822 ) ,  ( (  slice1818 ) .f_count ) ) ) , (  from1820 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  count1824 ) } );
}

static  struct SliceIter_1188   into_dash_iter1190 (    struct List_23  self2065 ) {
    return ( (  into_dash_iter1191 ) ( ( (  subslice1192 ) ( ( (  self2065 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2065 ) .f_count ) ) ) ) );
}

struct Maybe_1195 {
    enum {
        Maybe_1195_None_t,
        Maybe_1195_Just_t,
    } tag;
    union {
        struct {
            struct Action_25  field0;
        } Maybe_1195_Just_s;
    } stuff;
};

static struct Maybe_1195 Maybe_1195_Just (  struct Action_25  field0 ) {
    return ( struct Maybe_1195 ) { .tag = Maybe_1195_Just_t, .stuff = { .Maybe_1195_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1195   next1196 (    struct SliceIter_1188 *  self1870 ) {
    size_t  off1871 = ( ( * (  self1870 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1870 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
    }
    struct Action_25  elem1872 = ( * ( (  offset_dash_ptr1193 ) ( ( ( ( * (  self1870 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1871 ) ) ) ) ) );
    (*  self1870 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1195_Just ) ( (  elem1872 ) ) );
}

static  enum Unit_8   for_dash_each1185 (    struct List_23  iterable1104 ,   struct envunion1187  fun1106 ) {
    struct SliceIter_1188  temp1189 = ( (  into_dash_iter1190 ) ( (  iterable1104 ) ) );
    struct SliceIter_1188 *  it1107 = ( &temp1189 );
    while ( ( true ) ) {
        struct Maybe_1195  dref1108 = ( (  next1196 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_1195_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_1195_Just_t ) {
                struct envunion1187  temp1197 = (  fun1106 );
                ( temp1197.fun ( &temp1197.env ,  ( dref1108 .stuff .Maybe_1195_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1199 (    struct Action_25  action3736 ,    enum CAllocator_10  al3738 ) {
    ( (  free547 ) ( ( (  action3736 ) .f_fwd ) ,  (  al3738 ) ) );
    ( (  free547 ) ( ( (  action3736 ) .f_bwd ) ,  (  al3738 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1198 (   struct env1186* env ,    struct Action_25  a3745 ) {
    return ( (  free_dash_action1199 ) ( (  a3745 ) ,  ( env->al3743 ) ) );
}

static  void *   cast_dash_ptr1202 (    struct Action_25 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1201 (    enum CAllocator_10  dref1996 ,    struct Slice_24  slice1998 ) {
    if (!(  dref1996 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1202 ) ( ( (  slice1998 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1200 (    struct List_23 *  list2072 ) {
    ( (  free1201 ) ( ( ( * (  list2072 ) ) .f_al ) ,  ( ( * (  list2072 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1184 (    struct Changeset_32  chs3741 ,    enum CAllocator_10  al3743 ) {
    struct env1186 envinst1186 = {
        .al3743 =  al3743 ,
    };
    ( (  for_dash_each1185 ) ( ( (  chs3741 ) .f_parts ) ,  ( (struct envunion1187){ .fun = (  enum Unit_8  (*) (  struct env1186*  ,    struct Action_25  ) )lam1198 , .env =  envinst1186 } ) ) );
    ( (  free1200 ) ( ( & ( (  chs3741 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1203 (    struct List_30 *  l2152 ,    size_t  new_dash_count2154 ) {
    (*  l2152 ) .f_count = ( (  min467 ) ( (  new_dash_count2154 ) ,  ( ( * (  l2152 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1169 (    struct Actions_106 *  actions3759 ) {
    enum CAllocator_10  al3760 = ( ( ( * (  actions3759 ) ) .f_list ) .f_al );
    size_t  cur3761 = ( ( * (  actions3759 ) ) .f_cur );
    struct Drop_1171  temp1170 =  into_dash_iter1173 ( ( (  drop1174 ) ( ( ( * (  actions3759 ) ) .f_list ) ,  (  cur3761 ) ) ) );
    while (true) {
        struct Maybe_1181  __cond1180 =  next1182 (&temp1170);
        if (  __cond1180 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action3763 =  __cond1180 .stuff .Maybe_1181_Just_s .field0;
        ( (  free_dash_changeset1184 ) ( (  action3763 ) ,  (  al3760 ) ) );
    }
    ( (  trim1203 ) ( ( & ( ( * (  actions3759 ) ) .f_list ) ) ,  (  cur3761 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1204 (    struct StrView_27  s2202 ,    enum CAllocator_10  al2204 ) {
    return ( (  clone_dash_0505 ) ( (  s2202 ) ,  (  al2204 ) ) );
}

static  struct Maybe_80   head1206 (    struct SplitIter_600  it1172 ) {
    struct SplitIter_600  temp1207 = ( (  into_dash_iter607 ) ( (  it1172 ) ) );
    return ( (  next616 ) ( ( &temp1207 ) ) );
}

static  struct Maybe_80   head1209 (    struct Drop_599  it1172 ) {
    struct Drop_599  temp1210 = ( (  into_dash_iter605 ) ( (  it1172 ) ) );
    return ( (  next615 ) ( ( &temp1210 ) ) );
}

static  bool   null1208 (    struct Drop_599  it1181 ) {
    struct Maybe_80  dref1182 = ( (  head1209 ) ( (  it1181 ) ) );
    if ( dref1182.tag == Maybe_80_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1212 (    struct StrView_27  errmsg1743 ) {
    ( (  print_dash_str668 ) ( ( ( StrConcat_669_StrConcat ) ( ( ( StrConcat_670_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1743 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_613   undefined1213 (  ) {
    struct Tuple2_613  temp1214;
    return (  temp1214 );
}

static  struct Tuple2_613   or_dash_fail1211 (    struct Maybe_612  x1756 ,    struct StrView_27  errmsg1758 ) {
    struct Maybe_612  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_612_None_t ) {
        ( (  panic1212 ) ( (  errmsg1758 ) ) );
        return ( (  undefined1213 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_612_Just_t ) {
            return ( dref1759 .stuff .Maybe_612_Just_s .field0 );
        }
    }
}

static  struct Maybe_612   reduce1216 (    struct Zip_598  iterable1123 ,    struct Maybe_612  base1125 ,    struct Maybe_612 (*  fun1127 )(    struct Tuple2_613  ,    struct Maybe_612  ) ) {
    struct Maybe_612  x1128 = (  base1125 );
    struct Zip_598  it1129 = ( (  into_dash_iter603 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_612  dref1130 = ( (  next614 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_612_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_612_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_612_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1217 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1217);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_612  temp1218;
    return (  temp1218 );
}

static  struct Maybe_612   lam1219 (    struct Tuple2_613  e1177 ,    struct Maybe_612  dref1178 ) {
    return ( ( Maybe_612_Just ) ( (  e1177 ) ) );
}

static  struct Maybe_612   last1215 (    struct Zip_598  it1175 ) {
    return ( (  reduce1216 ) ( (  it1175 ) ,  ( (struct Maybe_612) { .tag = Maybe_612_None_t } ) ,  (  lam1219 ) ) );
}

static  int32_t   snd1220 (    struct Tuple2_613  dref1286 ) {
    return ( dref1286 .field1 );
}

static  struct StrView_27   fst1221 (    struct Tuple2_613  dref1283 ) {
    return ( dref1283 .field0 );
}

static  struct Pos_26   pos_dash_after_dash_str1205 (    struct TextBuf_105 *  self3892 ,    struct StrView_27  bytes3894 ,    struct Pos_26  from3896 ) {
    struct SplitIter_600  lines3897 = ( (  split_dash_by_dash_each608 ) ( (  bytes3894 ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line3898 = ( (  or_dash_else590 ) ( ( (  head1206 ) ( (  lines3897 ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_599  headless3899 = ( (  drop606 ) ( (  lines3897 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1208 ) ( (  headless3899 ) ) ) ) {
        struct Pos_26  next_dash_pos3900 = ( (  mk694 ) ( ( (  from3896 ) .f_line ) ,  (  op_dash_add159 ( ( (  from3896 ) .f_bi ) , ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  first_dash_line3898 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3900 );
    } else {
        struct Tuple2_613  last_dash_line3901 = ( (  or_dash_fail1211 ) ( ( (  last1215 ) ( ( (  zip604 ) ( (  headless3899 ) ,  ( (  from427 ) ( (  op_dash_add159 ( ( (  from3896 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk694 ) ( ( (  snd1220 ) ( (  last_dash_line3901 ) ) ) ,  ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  fst1221 ) ( (  last_dash_line3901 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1226 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1228 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   from_dash_charlike1229 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1234 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1236 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   str_dash_between1223 (   struct env125* env ,    struct TextBuf_105 *  self3924 ,    struct Pos_26  from3926 ,    struct Pos_26  to3928 ) {
    enum CAllocator_10  al3929 = ( ( ( * (  self3924 ) ) .f_buf ) .f_al );
    if ( (  eq558 ( ( (  from3926 ) .f_line ) , ( (  to3928 ) .f_line ) ) ) ) {
        if ( (  eq558 ( ( (  from3926 ) .f_line ) , ( (  num_dash_lines1137 ) ( (  self3924 ) ) ) ) ) ) {
            return ( (  clone1204 ) ( ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ,  (  al3929 ) ) );
        }
        size_t  from_dash_bi3930 = ( (  i32_dash_size412 ) ( ( (  min659 ) ( ( (  from3926 ) .f_bi ) ,  ( (  to3928 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3931 = ( (  i32_dash_size412 ) ( ( (  max1110 ) ( ( (  from3926 ) .f_bi ) ,  ( (  to3928 ) .f_bi ) ) ) ) );
        return ( (  clone1204 ) ( ( (  byte_dash_substr484 ) ( ( (  line1097 ) ( (  self3924 ) ,  ( (  from3926 ) .f_line ) ) ) ,  (  from_dash_bi3930 ) ,  (  to_dash_bi3931 ) ) ) ,  (  al3929 ) ) );
    } else {
        struct Pos_26  from_dash_pos3932 = ( (  min554 ) ( (  from3926 ) ,  (  to3928 ) ) );
        struct Pos_26  to_dash_pos3933 = ( (  max556 ) ( (  from3926 ) ,  (  to3928 ) ) );
        struct List_9  temp1224 = ( (  mk439 ) ( (  al3929 ) ) );
        struct List_9 *  sb3934 = ( &temp1224 );
        struct StrView_27  first_dash_line3935 = ( (  line1097 ) ( (  self3924 ) ,  ( (  from_dash_pos3932 ) .f_line ) ) );
        struct envunion1226  temp1225 = ( (struct envunion1226){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all572 , .env =  env->envinst46 } );
        ( temp1225.fun ( &temp1225.env ,  (  sb3934 ) ,  ( ( (  byte_dash_substr484 ) ( (  first_dash_line3935 ) ,  ( (  i32_dash_size412 ) ( ( (  from_dash_pos3932 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1130 ) ( (  first_dash_line3935 ) ) ) ) ) .f_contents ) ) );
        struct envunion1228  temp1227 = ( (struct envunion1228){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all572 , .env =  env->envinst46 } );
        ( temp1227.fun ( &temp1227.env ,  (  sb3934 ) ,  ( ( ( (  from_dash_charlike1229 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_153  temp1230 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( ( (  from_dash_pos3932 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub164 ( ( (  to_dash_pos3933 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_155  __cond1231 =  next156 (&temp1230);
            if (  __cond1231 .tag == 0 ) {
                break;
            }
            int32_t  i3937 =  __cond1231 .stuff .Maybe_155_Just_s .field0;
            struct envunion126  temp1232 = ( (struct envunion126){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all572 , .env =  env->envinst46 } );
            ( temp1232.fun ( &temp1232.env ,  (  sb3934 ) ,  ( ( (  line1097 ) ( (  self3924 ) ,  (  i3937 ) ) ) .f_contents ) ) );
            struct envunion1234  temp1233 = ( (struct envunion1234){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all572 , .env =  env->envinst46 } );
            ( temp1233.fun ( &temp1233.env ,  (  sb3934 ) ,  ( ( ( (  from_dash_charlike1229 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1236  temp1235 = ( (struct envunion1236){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all572 , .env =  env->envinst46 } );
        ( temp1235.fun ( &temp1235.env ,  (  sb3934 ) ,  ( ( (  byte_dash_substr484 ) ( ( (  line1097 ) ( (  self3924 ) ,  ( (  to_dash_pos3933 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( ( (  to_dash_pos3933 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes1098 ) ( ( (  to_dash_slice566 ) ( ( * (  sb3934 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1237 (    struct Maybe_206  m1294 ) {
    struct Maybe_206  dref1295 = (  m1294 );
    if ( dref1295.tag == Maybe_206_None_t ) {
        return ( true );
    }
    else {
        if ( dref1295.tag == Maybe_206_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1239 {
    enum ChangesetInputType_107  field0;
    enum ChangesetInputType_107  field1;
};

static struct Tuple2_1239 Tuple2_1239_Tuple2 (  enum ChangesetInputType_107  field0 ,  enum ChangesetInputType_107  field1 ) {
    return ( struct Tuple2_1239 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1238 (    enum ChangesetInputType_107  l3749 ,    enum ChangesetInputType_107  r3751 ) {
    return ( {  struct Tuple2_1239  dref3752 = ( ( Tuple2_1239_Tuple2 ) ( (  l3749 ) ,  (  r3751 ) ) ) ;  dref3752 .field0 == ChangesetInputType_107_NoChangeset &&  dref3752 .field1 == ChangesetInputType_107_NoChangeset ? ( true ) :  dref3752 .field0 == ChangesetInputType_107_InputChangeset &&  dref3752 .field1 == ChangesetInputType_107_InputChangeset ? ( true ) :  dref3752 .field0 == ChangesetInputType_107_CustomChangeset &&  dref3752 .field1 == ChangesetInputType_107_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1241 (    struct Slice_31  slice1788 ,    size_t  i1790 ) {
    if ( ( (  cmp290 ( (  i1790 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1790 ) , ( (  slice1788 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr1791 = ( (  offset_dash_ptr1178 ) ( ( (  slice1788 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1790 ) ) ) ) );
    return (  elem_dash_ptr1791 );
}

static  struct Changeset_32 *   last_dash_ptr1240 (    struct Slice_31  s1975 ) {
    if ( (  eq399 ( ( (  s1975 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1241 ) ( (  s1975 ) ,  (  op_dash_sub289 ( ( (  s1975 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1242 (    struct List_30  l2163 ) {
    struct Changeset_32 *  ptr2164 = ( ( (  l2163 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2164 ) , .f_count = ( (  l2163 ) .f_count ) } );
}

struct TypeSize_1249 {
    size_t  f_size;
};

static  struct TypeSize_1249   get_dash_typesize1248 (  ) {
    struct Action_25  temp1250;
    return ( (struct TypeSize_1249) { .f_size = ( sizeof( ( (  temp1250 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1251 (    void *  p359 ) {
    return ( (struct Action_25 * ) (  p359 ) );
}

static  struct Slice_24   allocate1247 (    enum CAllocator_10  dref1990 ,    size_t  count1992 ) {
    if (!(  dref1990 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1993 = ( ( ( (  get_dash_typesize1248 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr1994 = ( (  cast_dash_ptr1251 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1993 ) , (  count1992 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr1994 ) , .f_count = (  count1992 ) } );
}

struct env1252 {
    ;
    ;
    struct Slice_24  new_dash_slice2079;
};

struct Tuple2_1254 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1254 Tuple2_1254_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1254 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1253 {
    enum Unit_8  (*fun) (  struct env1252*  ,    struct Tuple2_1254  );
    struct env1252 env;
};

static  struct Action_25 *   get_dash_ptr1257 (    struct Slice_24  slice1788 ,    size_t  i1790 ) {
    if ( ( (  cmp290 ( (  i1790 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1790 ) , ( (  slice1788 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr1791 = ( (  offset_dash_ptr1193 ) ( ( (  slice1788 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1790 ) ) ) ) );
    return (  elem_dash_ptr1791 );
}

static  enum Unit_8   set1256 (    struct Slice_24  slice1805 ,    size_t  i1807 ,    struct Action_25  x1809 ) {
    struct Action_25 *  ep1810 = ( (  get_dash_ptr1257 ) ( (  slice1805 ) ,  (  i1807 ) ) );
    (*  ep1810 ) = (  x1809 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1255 (   struct env1252* env ,    struct Tuple2_1254  dref2080 ) {
    return ( (  set1256 ) ( ( env->new_dash_slice2079 ) ,  ( (  i32_dash_size412 ) ( ( dref2080 .field1 ) ) ) ,  ( dref2080 .field0 ) ) );
}

struct Zip_1259 {
    struct SliceIter_1188  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_1259   into_dash_iter1261 (    struct Zip_1259  self941 ) {
    return (  self941 );
}

struct Maybe_1262 {
    enum {
        Maybe_1262_None_t,
        Maybe_1262_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1254  field0;
        } Maybe_1262_Just_s;
    } stuff;
};

static struct Maybe_1262 Maybe_1262_Just (  struct Tuple2_1254  field0 ) {
    return ( struct Maybe_1262 ) { .tag = Maybe_1262_Just_t, .stuff = { .Maybe_1262_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1262   next1263 (    struct Zip_1259 *  self944 ) {
    struct Zip_1259  copy945 = ( * (  self944 ) );
    while ( ( true ) ) {
        struct Maybe_1195  dref946 = ( (  next1196 ) ( ( & ( (  copy945 ) .f_left_dash_it ) ) ) );
        if ( dref946.tag == Maybe_1195_None_t ) {
            return ( (struct Maybe_1262) { .tag = Maybe_1262_None_t } );
        }
        else {
            if ( dref946.tag == Maybe_1195_Just_t ) {
                struct Maybe_155  dref948 = ( (  next422 ) ( ( & ( (  copy945 ) .f_right_dash_it ) ) ) );
                if ( dref948.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_1262) { .tag = Maybe_1262_None_t } );
                }
                else {
                    if ( dref948.tag == Maybe_155_Just_t ) {
                        ( (  next1196 ) ( ( & ( ( * (  self944 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self944 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1262_Just ) ( ( ( Tuple2_1254_Tuple2 ) ( ( dref946 .stuff .Maybe_1195_Just_s .field0 ) ,  ( dref948 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1258 (    struct Zip_1259  iterable1104 ,   struct envunion1253  fun1106 ) {
    struct Zip_1259  temp1260 = ( (  into_dash_iter1261 ) ( (  iterable1104 ) ) );
    struct Zip_1259 *  it1107 = ( &temp1260 );
    while ( ( true ) ) {
        struct Maybe_1262  dref1108 = ( (  next1263 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_1262_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_1262_Just_t ) {
                struct envunion1253  temp1264 = (  fun1106 );
                ( temp1264.fun ( &temp1264.env ,  ( dref1108 .stuff .Maybe_1262_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1259   zip1265 (    struct Slice_24  left952 ,    struct FromIter_416  right954 ) {
    struct SliceIter_1188  left_dash_it955 = ( (  into_dash_iter1191 ) ( (  left952 ) ) );
    struct FromIter_416  right_dash_it956 = ( (  into_dash_iter426 ) ( (  right954 ) ) );
    return ( (struct Zip_1259) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1246 (   struct env3* env ,    struct List_23 *  list2078 ) {
    if ( (  eq399 ( ( ( * (  list2078 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2078 ) .f_elements = ( (  allocate1247 ) ( ( ( * (  list2078 ) ) .f_al ) ,  ( env->starting_dash_size2073 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2078 ) ) .f_count ) , ( ( ( * (  list2078 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2079 = ( (  allocate1247 ) ( ( ( * (  list2078 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2078 ) ) .f_count ) , ( env->growth_dash_factor2074 ) ) ) ) );
            struct env1252 envinst1252 = {
                .new_dash_slice2079 =  new_dash_slice2079 ,
            };
            struct envunion1253  fun2083 = ( (struct envunion1253){ .fun = (  enum Unit_8  (*) (  struct env1252*  ,    struct Tuple2_1254  ) )lam1255 , .env =  envinst1252 } );
            ( (  for_dash_each1258 ) ( ( (  zip1265 ) ( ( ( * (  list2078 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2083 ) ) );
            ( (  free1201 ) ( ( ( * (  list2078 ) ) .f_al ) ,  ( ( * (  list2078 ) ) .f_elements ) ) );
            (*  list2078 ) .f_elements = (  new_dash_slice2079 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1244 (   struct env21* env ,    struct List_23 *  list2086 ,    struct Action_25  elem2088 ) {
    struct envunion22  temp1245 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1246 , .env =  env->envinst3 } );
    ( temp1245.fun ( &temp1245.env ,  (  list2086 ) ) );
    ( (  set1256 ) ( ( ( * (  list2086 ) ) .f_elements ) ,  ( ( * (  list2086 ) ) .f_count ) ,  (  elem2088 ) ) );
    (*  list2086 ) .f_count = (  op_dash_add311 ( ( ( * (  list2086 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1272 (    struct Action_25 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1273 (    struct Action_25 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_25 *   zeroed1270 (  ) {
    struct Action_25 *  temp1271;
    struct Action_25 *  x571 = (  temp1271 );
    ( ( memset ) ( ( (  cast_dash_ptr1272 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1273 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Action_25 *   null_dash_ptr1269 (  ) {
    return ( (  zeroed1270 ) ( ) );
}

static  struct Slice_24   empty1268 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1269 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1267 (    enum CAllocator_10  al2068 ) {
    struct Slice_24  elements2069 = ( (  empty1268 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2068 ) , .f_elements = (  elements2069 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1274 (    struct Maybe_206  self1763 ,    struct Cursors_33  alt1765 ) {
    struct Maybe_206  dref1766 = (  self1763 );
    if ( dref1766.tag == Maybe_206_None_t ) {
        return (  alt1765 );
    }
    else {
        if ( dref1766.tag == Maybe_206_Just_t ) {
            return ( dref1766 .stuff .Maybe_206_Just_s .field0 );
        }
    }
}

struct envunion1276 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1283 {
    size_t  f_size;
};

static  struct TypeSize_1283   get_dash_typesize1282 (  ) {
    struct Changeset_32  temp1284;
    return ( (struct TypeSize_1283) { .f_size = ( sizeof( ( (  temp1284 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1285 (    void *  p359 ) {
    return ( (struct Changeset_32 * ) (  p359 ) );
}

static  struct Slice_31   allocate1281 (    enum CAllocator_10  dref1990 ,    size_t  count1992 ) {
    if (!(  dref1990 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1993 = ( ( ( (  get_dash_typesize1282 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr1994 = ( (  cast_dash_ptr1285 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1993 ) , (  count1992 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr1994 ) , .f_count = (  count1992 ) } );
}

struct env1286 {
    ;
    ;
    struct Slice_31  new_dash_slice2079;
};

struct Tuple2_1288 {
    struct Changeset_32  field0;
    int32_t  field1;
};

static struct Tuple2_1288 Tuple2_1288_Tuple2 (  struct Changeset_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1288 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1287 {
    enum Unit_8  (*fun) (  struct env1286*  ,    struct Tuple2_1288  );
    struct env1286 env;
};

static  enum Unit_8   set1290 (    struct Slice_31  slice1805 ,    size_t  i1807 ,    struct Changeset_32  x1809 ) {
    struct Changeset_32 *  ep1810 = ( (  get_dash_ptr1241 ) ( (  slice1805 ) ,  (  i1807 ) ) );
    (*  ep1810 ) = (  x1809 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1289 (   struct env1286* env ,    struct Tuple2_1288  dref2080 ) {
    return ( (  set1290 ) ( ( env->new_dash_slice2079 ) ,  ( (  i32_dash_size412 ) ( ( dref2080 .field1 ) ) ) ,  ( dref2080 .field0 ) ) );
}

struct Zip_1292 {
    struct SliceIter_1172  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_1292   into_dash_iter1294 (    struct Zip_1292  self941 ) {
    return (  self941 );
}

struct Maybe_1295 {
    enum {
        Maybe_1295_None_t,
        Maybe_1295_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1288  field0;
        } Maybe_1295_Just_s;
    } stuff;
};

static struct Maybe_1295 Maybe_1295_Just (  struct Tuple2_1288  field0 ) {
    return ( struct Maybe_1295 ) { .tag = Maybe_1295_Just_t, .stuff = { .Maybe_1295_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1295   next1296 (    struct Zip_1292 *  self944 ) {
    struct Zip_1292  copy945 = ( * (  self944 ) );
    while ( ( true ) ) {
        struct Maybe_1181  dref946 = ( (  next1183 ) ( ( & ( (  copy945 ) .f_left_dash_it ) ) ) );
        if ( dref946.tag == Maybe_1181_None_t ) {
            return ( (struct Maybe_1295) { .tag = Maybe_1295_None_t } );
        }
        else {
            if ( dref946.tag == Maybe_1181_Just_t ) {
                struct Maybe_155  dref948 = ( (  next422 ) ( ( & ( (  copy945 ) .f_right_dash_it ) ) ) );
                if ( dref948.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_1295) { .tag = Maybe_1295_None_t } );
                }
                else {
                    if ( dref948.tag == Maybe_155_Just_t ) {
                        ( (  next1183 ) ( ( & ( ( * (  self944 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self944 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1295_Just ) ( ( ( Tuple2_1288_Tuple2 ) ( ( dref946 .stuff .Maybe_1181_Just_s .field0 ) ,  ( dref948 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1291 (    struct Zip_1292  iterable1104 ,   struct envunion1287  fun1106 ) {
    struct Zip_1292  temp1293 = ( (  into_dash_iter1294 ) ( (  iterable1104 ) ) );
    struct Zip_1292 *  it1107 = ( &temp1293 );
    while ( ( true ) ) {
        struct Maybe_1295  dref1108 = ( (  next1296 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_1295_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_1295_Just_t ) {
                struct envunion1287  temp1297 = (  fun1106 );
                ( temp1297.fun ( &temp1297.env ,  ( dref1108 .stuff .Maybe_1295_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1292   zip1298 (    struct Slice_31  left952 ,    struct FromIter_416  right954 ) {
    struct SliceIter_1172  left_dash_it955 = ( (  into_dash_iter1176 ) ( (  left952 ) ) );
    struct FromIter_416  right_dash_it956 = ( (  into_dash_iter426 ) ( (  right954 ) ) );
    return ( (struct Zip_1292) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

static  void *   cast_dash_ptr1300 (    struct Changeset_32 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1299 (    enum CAllocator_10  dref1996 ,    struct Slice_31  slice1998 ) {
    if (!(  dref1996 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1300 ) ( ( (  slice1998 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1280 (   struct env4* env ,    struct List_30 *  list2078 ) {
    if ( (  eq399 ( ( ( * (  list2078 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2078 ) .f_elements = ( (  allocate1281 ) ( ( ( * (  list2078 ) ) .f_al ) ,  ( env->starting_dash_size2073 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2078 ) ) .f_count ) , ( ( ( * (  list2078 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2079 = ( (  allocate1281 ) ( ( ( * (  list2078 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2078 ) ) .f_count ) , ( env->growth_dash_factor2074 ) ) ) ) );
            struct env1286 envinst1286 = {
                .new_dash_slice2079 =  new_dash_slice2079 ,
            };
            struct envunion1287  fun2083 = ( (struct envunion1287){ .fun = (  enum Unit_8  (*) (  struct env1286*  ,    struct Tuple2_1288  ) )lam1289 , .env =  envinst1286 } );
            ( (  for_dash_each1291 ) ( ( (  zip1298 ) ( ( ( * (  list2078 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2083 ) ) );
            ( (  free1299 ) ( ( ( * (  list2078 ) ) .f_al ) ,  ( ( * (  list2078 ) ) .f_elements ) ) );
            (*  list2078 ) .f_elements = (  new_dash_slice2079 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1278 (   struct env28* env ,    struct List_30 *  list2086 ,    struct Changeset_32  elem2088 ) {
    struct envunion29  temp1279 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1280 , .env =  env->envinst4 } );
    ( temp1279.fun ( &temp1279.env ,  (  list2086 ) ) );
    ( (  set1290 ) ( ( ( * (  list2086 ) ) .f_elements ) ,  ( ( * (  list2086 ) ) .f_count ) ,  (  elem2088 ) ) );
    (*  list2086 ) .f_count = (  op_dash_add311 ( ( ( * (  list2086 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1302 (   struct env119* env ,    struct TextBuf_105 *  self3887 ,    struct Action_25  action3889 ) {
    struct envunion120  temp1303 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action553 , .env =  env->envinst100 } );
    ( temp1303.fun ( &temp1303.env ,  (  self3887 ) ,  ( (  action3889 ) .f_from ) ,  ( (  action3889 ) .f_to_dash_bwd ) ,  ( (  action3889 ) .f_fwd ) ) );
    return ( (  action3889 ) .f_to_dash_fwd );
}

static  struct Maybe_206   change1168 (   struct env127* env ,    struct TextBuf_105 *  self3954 ,    struct Pos_26  from3956 ,    struct Pos_26  to3958 ,    struct StrView_27  bytes3960 ,    struct Maybe_206  before_dash_cursors3962 ) {
    struct Pos_26  from_dash_pos3963 = ( (  min554 ) ( (  from3956 ) ,  (  to3958 ) ) );
    struct Pos_26  to_dash_pos3964 = ( (  max556 ) ( (  from3956 ) ,  (  to3958 ) ) );
    struct Actions_106 *  actions3965 = ( & ( ( * (  self3954 ) ) .f_actions ) );
    ( (  trim_dash_actions1169 ) ( (  actions3965 ) ) );
    struct envunion131  temp1222 = ( (struct envunion131){ .fun = (  struct StrView_27  (*) (  struct env125*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1223 , .env =  env->envinst125 } );
    struct Action_25  action3966 = ( (struct Action_25) { .f_from = (  from3956 ) , .f_fwd = ( (  clone1204 ) ( (  bytes3960 ) ,  ( ( * (  self3954 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1205 ) ( (  self3954 ) ,  (  bytes3960 ) ,  (  from_dash_pos3963 ) ) ) , .f_bwd = ( temp1222.fun ( &temp1222.env ,  (  self3954 ) ,  (  from_dash_pos3963 ) ,  (  to_dash_pos3964 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3964 ) } );
    enum CAllocator_10  al3967 = ( ( ( * (  actions3965 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3968 = ( (  is_dash_none1237 ) ( (  before_dash_cursors3962 ) ) );
    if ( ( (  eq1238 ( ( ( ( * (  self3954 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_107_CustomChangeset ) ) ) || ( (  eq1238 ( ( ( ( * (  self3954 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_107_InputChangeset ) ) ) && (  is_dash_typed_dash_in3968 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset3969 = ( (  last_dash_ptr1240 ) ( ( (  to_dash_slice1242 ) ( ( ( * (  actions3965 ) ) .f_list ) ) ) ) );
        struct envunion129  temp1243 = ( (struct envunion129){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1244 , .env =  env->envinst21 } );
        ( temp1243.fun ( &temp1243.env ,  ( & ( ( * (  last_dash_changeset3969 ) ) .f_parts ) ) ,  (  action3966 ) ) );
    } else {
        struct Changeset_32  temp1266 = ( (struct Changeset_32) { .f_parts = ( (  mk1267 ) ( (  al3967 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1274 ) ( (  before_dash_cursors3962 ) ,  ( (struct Cursors_33) { .f_cur = (  from3956 ) , .f_sel = ( (  eq557 ( (  from3956 ) , (  to3958 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to3958 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset3970 = ( &temp1266 );
        struct envunion1276  temp1275 = ( (struct envunion1276){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1244 , .env =  env->envinst21 } );
        ( temp1275.fun ( &temp1275.env ,  ( & ( ( * (  changeset3970 ) ) .f_parts ) ) ,  (  action3966 ) ) );
        struct envunion130  temp1277 = ( (struct envunion130){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1278 , .env =  env->envinst28 } );
        ( temp1277.fun ( &temp1277.env ,  ( & ( ( * (  actions3965 ) ) .f_list ) ) ,  ( * (  changeset3970 ) ) ) );
        (*  actions3965 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3968 ) ? ( ChangesetInputType_107_InputChangeset ) : ( ChangesetInputType_107_NoChangeset ) );
        (*  actions3965 ) .f_cur = (  op_dash_add311 ( ( ( * (  actions3965 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion128  temp1301 = ( (struct envunion128){ .fun = (  struct Pos_26  (*) (  struct env119*  ,    struct TextBuf_105 *  ,    struct Action_25  ) )action_dash_fwd1302 , .env =  env->envinst119 } );
    struct Pos_26  to_dash_fwd3971 = ( temp1301.fun ( &temp1301.env ,  (  self3954 ) ,  (  action3966 ) ) );
    if ( (  cmp290 ( ( (  num_dash_bytes1130 ) ( ( (  action3966 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3972 = ( (  left_dash_pos1129 ) ( (  self3954 ) ,  (  to_dash_fwd3971 ) ) );
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3972 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action3966 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3971 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1166 (   struct env204* env ,    struct Pane_219 *  self4373 ,    struct StrView_27  s4375 ) {
    struct Pos_26  cur4376 = ( ( * (  self4373 ) ) .f_cursor );
    struct envunion205  temp1167 = ( (struct envunion205){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    ( temp1167.fun ( &temp1167.env ,  ( ( * (  self4373 ) ) .f_buf ) ,  (  cur4376 ) ,  (  cur4376 ) ,  (  s4375 ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1309 (   struct env215* env ,    struct Pane_219 *  self4411 ,    int32_t  line4413 ) {
    struct envunion216  temp1310 = ( (struct envunion216){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    ( temp1310.fun ( &temp1310.env ,  ( ( * (  self4411 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4413 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4413 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike1229 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1305 (   struct env226* env ,    struct Pane_219 *  self4432 ,    int32_t  indent4434 ) {
    struct RangeIter_153  temp1306 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4434 ) ) ) );
    while (true) {
        struct Maybe_155  __cond1307 =  next156 (&temp1306);
        if (  __cond1307 .tag == 0 ) {
            break;
        }
        int32_t  dref4435 =  __cond1307 .stuff .Maybe_155_Just_s .field0;
        struct envunion227  temp1308 = ( (struct envunion227){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at1309 , .env =  env->envinst215 } );
        ( temp1308.fun ( &temp1308.env ,  (  self4432 ) ,  ( ( ( * (  self4432 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1135 ) ( (  self4432 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1311 (    struct Pane_219 *  self4352 ) {
    struct Pos_26  temp1312 = ( ( * (  self4352 ) ) .f_cursor );
    temp1312 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors1091 ) ( (  self4352 ) ,  ( temp1312 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1314 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  );
    struct env204 env;
};

struct envunion1316 {
    enum Unit_8  (*fun) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  );
    struct env226 env;
};

enum MoveDirection_1318 {
    MoveDirection_1318_MoveFwd,
    MoveDirection_1318_MoveBwd,
};

enum MoveTarget_1319 {
    MoveTarget_1319_NextWordStart,
    MoveTarget_1319_NextWordEnd,
};

static  struct Pos_26   own1321 (    struct Pos_26  x1281 ) {
    return (  x1281 );
}

struct env1322 {
    ;
    struct Pane_219 *  pane4313;
    enum MoveDirection_1318  dir4315;
    struct Pos_26 *  prev4318;
    ;
};

static  bool   is_dash_at_dash_line_dash_end1324 (    struct Pane_219 *  pane4295 ,    struct Pos_26  pos4297 ) {
    return (  eq399 ( ( (  i32_dash_size412 ) ( ( (  pos4297 ) .f_bi ) ) ) , ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  pane4295 ) ) .f_buf ) ,  ( (  pos4297 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1323 (    struct Pane_219 *  pane4300 ) {
    return ( (  is_dash_at_dash_line_dash_end1324 ) ( (  pane4300 ) ,  ( ( * (  pane4300 ) ) .f_cursor ) ) );
}

struct envunion1326 {
    enum Unit_8  (*fun) (  struct env1322*  );
    struct env1322 env;
};

static  enum Unit_8   advance1327 (   struct env1322* env ) {
    (* env->prev4318 ) = ( ( * ( env->pane4313 ) ) .f_cursor );
    enum MoveDirection_1318  dref4320 = ( env->dir4315 );
    switch (  dref4320 ) {
        case MoveDirection_1318_MoveFwd : {
            ( (  move_dash_right1135 ) ( ( env->pane4313 ) ) );
            break;
        }
        case MoveDirection_1318_MoveBwd : {
            ( (  move_dash_left1090 ) ( ( env->pane4313 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1331 {
    CharType_1331_CharSpace,
    CharType_1331_CharWord,
    CharType_1331_CharPunctuation,
};

struct Tuple2_1332 {
    enum CharType_1331  field0;
    enum CharType_1331  field1;
};

static struct Tuple2_1332 Tuple2_1332_Tuple2 (  enum CharType_1331  field0 ,  enum CharType_1331  field1 ) {
    return ( struct Tuple2_1332 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1330 (    enum CharType_1331  l3715 ,    enum CharType_1331  r3717 ) {
    struct Tuple2_1332  dref3718 = ( ( Tuple2_1332_Tuple2 ) ( (  l3715 ) ,  (  r3717 ) ) );
    if (  dref3718 .field0 == CharType_1331_CharSpace &&  dref3718 .field1 == CharType_1331_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3718 .field0 == CharType_1331_CharWord &&  dref3718 .field1 == CharType_1331_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3718 .field0 == CharType_1331_CharPunctuation &&  dref3718 .field1 == CharType_1331_CharPunctuation ) {
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

static  struct Char_65   min1337 (    struct Char_65  l1266 ,    struct Char_65  r1268 ) {
    if ( (  cmp930 ( (  l1266 ) , (  r1268 ) ) == 0 ) ) {
        return (  l1266 );
    } else {
        return (  r1268 );
    }
}

static  struct Char_65   max1338 (    struct Char_65  l1345 ,    struct Char_65  r1347 ) {
    if ( (  cmp930 ( (  l1345 ) , (  r1347 ) ) == 2 ) ) {
        return (  l1345 );
    } else {
        return (  r1347 );
    }
}

static  bool   between1336 (    struct Char_65  c1367 ,    struct Char_65  l1369 ,    struct Char_65  r1371 ) {
    struct Char_65  from1372 = ( (  min1337 ) ( (  l1369 ) ,  (  r1371 ) ) );
    struct Char_65  to1373 = ( (  max1338 ) ( (  l1369 ) ,  (  r1371 ) ) );
    return ( (  cmp930 ( (  from1372 ) , (  c1367 ) ) != 2 ) && (  cmp930 ( (  c1367 ) , (  to1373 ) ) != 2 ) );
}

static  bool   is_dash_alpha1335 (    struct Char_65  c2447 ) {
    return ( ( (  cmp290 ( ( (  c2447 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1336 ) ( (  c2447 ) ,  ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1336 ) ( (  c2447 ) ,  ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1339 (    struct Char_65  c2450 ) {
    return ( (  eq399 ( ( (  c2450 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1336 ) ( (  c2450 ) ,  ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1334 (    struct Char_65  c2462 ) {
    return ( ( (  is_dash_alpha1335 ) ( (  c2462 ) ) ) || ( (  is_dash_digit1339 ) ( (  c2462 ) ) ) );
}

static  bool   is_dash_whitespace1340 (    struct Char_65  c2438 ) {
    return ( ( (  eq469 ( (  c2438 ) , ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq469 ( (  c2438 ) , ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq469 ( (  c2438 ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1331   char_dash_type1333 (    struct Char_65  c3721 ) {
    if ( ( ( ( (  is_dash_alphanumeric1334 ) ( (  c3721 ) ) ) || (  eq469 ( (  c3721 ) , ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq469 ( (  c3721 ) , ( (  from_dash_charlike346 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1331_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1340 ) ( (  c3721 ) ) ) ) {
            return ( CharType_1331_CharSpace );
        } else {
            return ( CharType_1331_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1329 (    struct Char_65  l3724 ,    struct Char_65  r3726 ) {
    return ( !  eq1330 ( ( (  char_dash_type1333 ) ( (  l3724 ) ) ) , ( (  char_dash_type1333 ) ( (  r3726 ) ) ) ) );
}

static  struct Char_65   or_dash_else1342 (    struct Maybe_297  self1763 ,    struct Char_65  alt1765 ) {
    struct Maybe_297  dref1766 = (  self1763 );
    if ( dref1766.tag == Maybe_297_None_t ) {
        return (  alt1765 );
    }
    else {
        if ( dref1766.tag == Maybe_297_Just_t ) {
            return ( dref1766 .stuff .Maybe_297_Just_s .field0 );
        }
    }
}

static  struct Maybe_297   head1343 (    struct StrViewIter_458  it1172 ) {
    struct StrViewIter_458  temp1344 = ( (  into_dash_iter459 ) ( (  it1172 ) ) );
    return ( (  next463 ) ( ( &temp1344 ) ) );
}

static  struct Char_65   char_dash_at1341 (    struct Pane_219 *  pane4164 ,    struct Pos_26  pos4166 ) {
    struct StrView_27  line4167 = ( (  line1097 ) ( ( ( * (  pane4164 ) ) .f_buf ) ,  ( (  pos4166 ) .f_line ) ) );
    return ( (  or_dash_else1342 ) ( ( (  head1343 ) ( ( (  chars460 ) ( ( (  byte_dash_substr484 ) ( (  line4167 ) ,  ( (  i32_dash_size412 ) ( ( (  pos4166 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1130 ) ( (  line4167 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_8   print1346 (    struct StrView_27  s1732 ) {
    ( (  for_dash_each773 ) ( ( (  chars460 ) ( (  s1732 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1347 (  ) {
    bool  temp1348;
    return (  temp1348 );
}

static  bool   todo1345 (  ) {
    ( (  print1346 ) ( ( (  from_dash_string199 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1347 ) ( ) );
}

static  bool   reached_dash_target1328 (    struct Pane_219 *  pane4305 ,    enum MoveTarget_1319  target4307 ,    struct Pos_26  prev4309 ) {
    return ( {  enum MoveTarget_1319  dref4310 = (  target4307 ) ;  dref4310 == MoveTarget_1319_NextWordStart ? ( ( (  is_dash_word_dash_boundary1329 ) ( ( (  char_dash_at1341 ) ( (  pane4305 ) ,  (  prev4309 ) ) ) ,  ( (  char_dash_at1341 ) ( (  pane4305 ) ,  ( ( * (  pane4305 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1330 ( ( (  char_dash_type1333 ) ( ( (  char_dash_at1341 ) ( (  pane4305 ) ,  ( ( * (  pane4305 ) ) .f_cursor ) ) ) ) ) , ( CharType_1331_CharSpace ) ) ) ) ) :  dref4310 == MoveTarget_1319_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1329 ) ( ( (  char_dash_at1341 ) ( (  pane4305 ) ,  (  prev4309 ) ) ) ,  ( (  char_dash_at1341 ) ( (  pane4305 ) ,  ( ( * (  pane4305 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1330 ( ( (  char_dash_type1333 ) ( ( (  char_dash_at1341 ) ( (  pane4305 ) ,  (  prev4309 ) ) ) ) ) , ( CharType_1331_CharSpace ) ) ) ) ) : ( (  todo1345 ) ( ) ) ; } );
}

struct envunion1350 {
    enum Unit_8  (*fun) (  struct env1322*  );
    struct env1322 env;
};

struct envunion1352 {
    enum Unit_8  (*fun) (  struct env1322*  );
    struct env1322 env;
};

static  enum Unit_8   advance_dash_word1317 (    struct Pane_219 *  pane4313 ,    enum MoveDirection_1318  dir4315 ,    enum MoveTarget_1319  target4317 ) {
    struct Pos_26  temp1320 = ( (  own1321 ) ( ( ( * (  pane4313 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4318 = ( &temp1320 );
    struct env1322 envinst1322 = {
        .pane4313 =  pane4313 ,
        .dir4315 =  dir4315 ,
        .prev4318 =  prev4318 ,
    };
    struct Pos_26  sel4321 = ( ( * (  pane4313 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4322 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1323 ) ( (  pane4313 ) ) );
    struct envunion1326  temp1325 = ( (struct envunion1326){ .fun = (  enum Unit_8  (*) (  struct env1322*  ) )advance1327 , .env =  envinst1322 } );
    ( temp1325.fun ( &temp1325.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4322 ) || ( (  reached_dash_target1328 ) ( (  pane4313 ) ,  (  target4317 ) ,  ( * (  prev4318 ) ) ) ) ) ) {
        sel4321 = ( ( * (  pane4313 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1323 ) ( (  pane4313 ) ) ) ) {
        if ( (  eq557 ( ( ( * (  pane4313 ) ) .f_cursor ) , ( * (  prev4318 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1350  temp1349 = ( (struct envunion1350){ .fun = (  enum Unit_8  (*) (  struct env1322*  ) )advance1327 , .env =  envinst1322 } );
        ( temp1349.fun ( &temp1349.env ) );
        sel4321 = ( ( * (  pane4313 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1352  temp1351 = ( (struct envunion1352){ .fun = (  enum Unit_8  (*) (  struct env1322*  ) )advance1327 , .env =  envinst1322 } );
        ( temp1351.fun ( &temp1351.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1323 ) ( (  pane4313 ) ) ) || ( (  reached_dash_target1328 ) ( (  pane4313 ) ,  (  target4317 ) ,  ( * (  prev4318 ) ) ) ) ) ) {
            enum MoveDirection_1318  dref4323 = (  dir4315 );
            switch (  dref4323 ) {
                case MoveDirection_1318_MoveFwd : {
                    ( (  move_dash_left1090 ) ( (  pane4313 ) ) );
                    break;
                }
                case MoveDirection_1318_MoveBwd : {
                    ( (  move_dash_right1135 ) ( (  pane4313 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq557 ( ( * (  prev4318 ) ) , ( ( * (  pane4313 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1126 ) ( (  pane4313 ) ,  ( ( Maybe_34_Just ) ( (  sel4321 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1357 (    struct List_30 *  l2170 ) {
    return ( ( * (  l2170 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1360 (    struct List_30 *  list2038 ,    size_t  i2040 ) {
    if ( ( (  cmp290 ( (  i2040 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2040 ) , ( ( * (  list2038 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2040 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2038 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1241 ) ( ( ( * (  list2038 ) ) .f_elements ) ,  (  i2040 ) ) );
}

static  struct Changeset_32   get1359 (    struct List_30 *  list2048 ,    size_t  i2050 ) {
    return ( * ( (  get_dash_ptr1360 ) ( (  list2048 ) ,  (  i2050 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1358 (    struct List_30  self2118 ,    size_t  k2120 ) {
    return ( (  get1359 ) ( ( & (  self2118 ) ) ,  (  k2120 ) ) );
}

static  struct Action_25   undefined1369 (  ) {
    struct Action_25  temp1370;
    return (  temp1370 );
}

static  struct Action_25   or_dash_fail1368 (    struct Maybe_1195  x1756 ,    struct StrConcat_321  errmsg1758 ) {
    struct Maybe_1195  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_1195_None_t ) {
        ( (  panic323 ) ( (  errmsg1758 ) ) );
        return ( (  undefined1369 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_1195_Just_t ) {
            return ( dref1759 .stuff .Maybe_1195_Just_s .field0 );
        }
    }
}

static  struct Maybe_1195   try_dash_get1371 (    struct Slice_24  slice1794 ,    size_t  i1796 ) {
    if ( ( (  cmp290 ( (  i1796 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1796 ) , ( (  slice1794 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
    }
    struct Action_25 *  elem_dash_ptr1797 = ( (  offset_dash_ptr1193 ) ( ( (  slice1794 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1796 ) ) ) ) );
    return ( ( Maybe_1195_Just ) ( ( * (  elem_dash_ptr1797 ) ) ) );
}

static  struct Action_25   get1367 (    struct Slice_24  slice1800 ,    size_t  i1802 ) {
    return ( (  or_dash_fail1368 ) ( ( (  try_dash_get1371 ) ( (  slice1800 ) ,  (  i1802 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1802 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1800 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1366 (    struct Slice_24  self1813 ,    size_t  idx1815 ) {
    return ( (  get1367 ) ( (  self1813 ) ,  (  idx1815 ) ) );
}

static  struct Action_25   last1365 (    struct Slice_24  s1972 ) {
    if ( (  eq399 ( ( (  s1972 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1366 ( (  s1972 ) , (  op_dash_sub289 ( ( (  s1972 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1372 (    struct List_23  l2163 ) {
    struct Action_25 *  ptr2164 = ( ( (  l2163 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2164 ) , .f_count = ( (  l2163 ) .f_count ) } );
}

static  struct Maybe_206   redo1356 (   struct env123* env ,    struct TextBuf_105 *  self3914 ) {
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3914 ) ) );
    struct Actions_106 *  actions3915 = ( & ( ( * (  self3914 ) ) .f_actions ) );
    if ( (  cmp290 ( ( ( * (  actions3915 ) ) .f_cur ) , ( (  size1357 ) ( ( & ( ( * (  actions3915 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_206) { .tag = Maybe_206_None_t } );
    }
    struct Changeset_32  changeset3916 = (  elem_dash_get1358 ( ( ( * (  actions3915 ) ) .f_list ) , ( ( * (  actions3915 ) ) .f_cur ) ) );
    struct Pos_26  temp1361;
    struct Pos_26  to_dash_fwd3917 = (  temp1361 );
    struct SliceIter_1188  temp1362 =  into_dash_iter1190 ( ( (  changeset3916 ) .f_parts ) );
    while (true) {
        struct Maybe_1195  __cond1363 =  next1196 (&temp1362);
        if (  __cond1363 .tag == 0 ) {
            break;
        }
        struct Action_25  action3919 =  __cond1363 .stuff .Maybe_1195_Just_s .field0;
        struct envunion124  temp1364 = ( (struct envunion124){ .fun = (  struct Pos_26  (*) (  struct env119*  ,    struct TextBuf_105 *  ,    struct Action_25  ) )action_dash_fwd1302 , .env =  env->envinst119 } );
        to_dash_fwd3917 = ( temp1364.fun ( &temp1364.env ,  (  self3914 ) ,  (  action3919 ) ) );
    }
    (*  actions3915 ) .f_cur = (  op_dash_add311 ( ( ( * (  actions3915 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action3920 = ( (  last1365 ) ( ( (  to_dash_slice1372 ) ( ( (  changeset3916 ) .f_parts ) ) ) ) );
    if ( (  cmp290 ( ( (  num_dash_bytes1130 ) ( ( (  last_dash_action3920 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3921 = ( (  left_dash_pos1129 ) ( (  self3914 ) ,  (  to_dash_fwd3917 ) ) );
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3921 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action3920 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3917 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1374 {
    ;
    struct Pane_219 *  self4389;
};

struct envunion1375 {
    enum Unit_8  (*fun) (  struct env1374*  ,    struct Cursors_33  );
    struct env1374 env;
};

static  enum Unit_8   if_dash_just1373 (    struct Maybe_206  x1321 ,   struct envunion1375  fun1323 ) {
    struct Maybe_206  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_206_Just_t ) {
        struct envunion1375  temp1376 = (  fun1323 );
        ( temp1376.fun ( &temp1376.env ,  ( dref1324 .stuff .Maybe_206_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_206_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1377 (   struct env1374* env ,    struct Cursors_33  cursors4392 ) {
    ( (  set_dash_cursors1091 ) ( ( env->self4389 ) ,  ( (  cursors4392 ) .f_cur ) ,  ( (  cursors4392 ) .f_sel ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1354 (   struct env211* env ,    struct Pane_219 *  self4389 ) {
    struct envunion212  temp1355 = ( (struct envunion212){ .fun = (  struct Maybe_206  (*) (  struct env123*  ,    struct TextBuf_105 *  ) )redo1356 , .env =  env->envinst123 } );
    struct Maybe_206  mcursors4390 = ( temp1355.fun ( &temp1355.env ,  ( ( * (  self4389 ) ) .f_buf ) ) );
    struct env1374 envinst1374 = {
        .self4389 =  self4389 ,
    };
    ( (  if_dash_just1373 ) ( (  mcursors4390 ) ,  ( (struct envunion1375){ .fun = (  enum Unit_8  (*) (  struct env1374*  ,    struct Cursors_33  ) )lam1377 , .env =  envinst1374 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1383 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1383   into_dash_iter1384 (    struct SliceReversedIter_1383  self1935 ) {
    return (  self1935 );
}

static  struct SliceReversedIter_1383   reversed1385 (    struct Slice_24  slice1932 ) {
    return ( (struct SliceReversedIter_1383) { .f_slice = (  slice1932 ) , .f_current_dash_offset = ( (  slice1932 ) .f_count ) } );
}

static  struct Maybe_1195   next1387 (    struct SliceReversedIter_1383 *  self1938 ) {
    size_t  off1939 = ( ( * (  self1938 ) ) .f_current_dash_offset );
    if ( (  eq399 ( (  off1939 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
    }
    (*  self1938 ) .f_current_dash_offset = (  op_dash_sub289 ( (  off1939 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1195_Just ) ( (  elem_dash_get1366 ( ( ( * (  self1938 ) ) .f_slice ) , ( ( * (  self1938 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1389 (   struct env117* env ,    struct TextBuf_105 *  self3882 ,    struct Action_25  action3884 ) {
    struct envunion118  temp1390 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action553 , .env =  env->envinst100 } );
    ( temp1390.fun ( &temp1390.env ,  (  self3882 ) ,  ( (  action3884 ) .f_from ) ,  ( (  action3884 ) .f_to_dash_fwd ) ,  ( (  action3884 ) .f_bwd ) ) );
    return ( (  action3884 ) .f_to_dash_bwd );
}

static  struct Maybe_206   undo1381 (   struct env121* env ,    struct TextBuf_105 *  self3907 ) {
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3907 ) ) );
    struct Actions_106 *  actions3908 = ( & ( ( * (  self3907 ) ) .f_actions ) );
    if ( (  eq399 ( ( ( * (  actions3908 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_206) { .tag = Maybe_206_None_t } );
    }
    (*  actions3908 ) .f_cur = (  op_dash_sub289 ( ( ( * (  actions3908 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset3909 = (  elem_dash_get1358 ( ( ( * (  actions3908 ) ) .f_list ) , ( ( * (  actions3908 ) ) .f_cur ) ) );
    struct SliceReversedIter_1383  temp1382 =  into_dash_iter1384 ( ( (  reversed1385 ) ( ( (  to_dash_slice1372 ) ( ( (  changeset3909 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1195  __cond1386 =  next1387 (&temp1382);
        if (  __cond1386 .tag == 0 ) {
            break;
        }
        struct Action_25  action3911 =  __cond1386 .stuff .Maybe_1195_Just_s .field0;
        struct envunion122  temp1388 = ( (struct envunion122){ .fun = (  struct Pos_26  (*) (  struct env117*  ,    struct TextBuf_105 *  ,    struct Action_25  ) )action_dash_bwd1389 , .env =  env->envinst117 } );
        ( temp1388.fun ( &temp1388.env ,  (  self3907 ) ,  (  action3911 ) ) );
    }
    return ( ( Maybe_206_Just ) ( ( (  changeset3909 ) .f_before_dash_cursors ) ) );
}

struct env1392 {
    ;
    struct Pane_219 *  self4383;
};

struct envunion1393 {
    enum Unit_8  (*fun) (  struct env1392*  ,    struct Cursors_33  );
    struct env1392 env;
};

static  enum Unit_8   if_dash_just1391 (    struct Maybe_206  x1321 ,   struct envunion1393  fun1323 ) {
    struct Maybe_206  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_206_Just_t ) {
        struct envunion1393  temp1394 = (  fun1323 );
        ( temp1394.fun ( &temp1394.env ,  ( dref1324 .stuff .Maybe_206_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_206_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1395 (   struct env1392* env ,    struct Cursors_33  cursors4386 ) {
    ( (  set_dash_cursors1091 ) ( ( env->self4383 ) ,  ( (  cursors4386 ) .f_cur ) ,  ( (  cursors4386 ) .f_sel ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1379 (   struct env209* env ,    struct Pane_219 *  self4383 ) {
    struct envunion210  temp1380 = ( (struct envunion210){ .fun = (  struct Maybe_206  (*) (  struct env121*  ,    struct TextBuf_105 *  ) )undo1381 , .env =  env->envinst121 } );
    struct Maybe_206  mcursors4384 = ( temp1380.fun ( &temp1380.env ,  ( ( * (  self4383 ) ) .f_buf ) ) );
    struct env1392 envinst1392 = {
        .self4383 =  self4383 ,
    };
    ( (  if_dash_just1391 ) ( (  mcursors4384 ) ,  ( (struct envunion1393){ .fun = (  enum Unit_8  (*) (  struct env1392*  ,    struct Cursors_33  ) )lam1395 , .env =  envinst1392 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_231   minmax1399 (    struct Pos_26  l1359 ,    struct Pos_26  r1361 ) {
    return ( (  cmp555 ( (  l1359 ) , (  r1361 ) ) == 0 ) ? ( ( Tuple2_231_Tuple2 ) ( (  l1359 ) ,  (  r1361 ) ) ) : ( ( Tuple2_231_Tuple2 ) ( (  r1361 ) ,  (  l1359 ) ) ) );
}

static  struct Pos_26   or_dash_else1400 (    struct Maybe_34  self1763 ,    struct Pos_26  alt1765 ) {
    struct Maybe_34  dref1766 = (  self1763 );
    if ( dref1766.tag == Maybe_34_None_t ) {
        return (  alt1765 );
    }
    else {
        if ( dref1766.tag == Maybe_34_Just_t ) {
            return ( dref1766 .stuff .Maybe_34_Just_s .field0 );
        }
    }
}

static  struct Pos_26   fst1401 (    struct Tuple2_231  dref1283 ) {
    return ( dref1283 .field0 );
}

static  struct Pos_26   snd1402 (    struct Tuple2_231  dref1286 ) {
    return ( dref1286 .field1 );
}

static  struct Tuple2_231   selection1398 (    struct Pane_219 *  self4395 ) {
    struct Tuple2_231  from_dash_to4396 = ( (  minmax1399 ) ( ( (  or_dash_else1400 ) ( ( ( * (  self4395 ) ) .f_sel ) ,  ( ( * (  self4395 ) ) .f_cursor ) ) ) ,  ( ( * (  self4395 ) ) .f_cursor ) ) );
    struct Pos_26  from4397 = ( (  fst1401 ) ( (  from_dash_to4396 ) ) );
    struct Pos_26  to4398 = ( (  right_dash_pos1136 ) ( ( ( * (  self4395 ) ) .f_buf ) ,  ( (  snd1402 ) ( (  from_dash_to4396 ) ) ) ) );
    return ( ( Tuple2_231_Tuple2 ) ( (  from4397 ) ,  (  to4398 ) ) );
}

struct env1405 {
    struct Editor_248 *  ed4508;
    ;
};

struct envunion1406 {
    enum Unit_8  (*fun) (  struct env1405*  ,    struct StrView_27  );
    struct env1405 env;
};

static  enum Unit_8   if_dash_just1404 (    struct Maybe_80  x1321 ,   struct envunion1406  fun1323 ) {
    struct Maybe_80  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_80_Just_t ) {
        struct envunion1406  temp1407 = (  fun1323 );
        ( temp1407.fun ( &temp1407.env ,  ( dref1324 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1408 (   struct env1405* env ,    struct StrView_27  cp4512 ) {
    ( (  free547 ) ( (  cp4512 ) ,  ( ( * ( env->ed4508 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1397 (   struct env233* env ,    struct Editor_248 *  ed4508 ) {
    struct Tuple2_231  from_dash_to4509 = ( (  selection1398 ) ( ( (  pane1134 ) ( (  ed4508 ) ) ) ) );
    struct envunion234  temp1403 = ( (struct envunion234){ .fun = (  struct StrView_27  (*) (  struct env125*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1223 , .env =  env->envinst125 } );
    struct StrView_27  cpd4510 = ( temp1403.fun ( &temp1403.env ,  ( ( ( * (  ed4508 ) ) .f_pane ) .f_buf ) ,  ( (  fst1401 ) ( (  from_dash_to4509 ) ) ) ,  ( (  snd1402 ) ( (  from_dash_to4509 ) ) ) ) );
    struct env1405 envinst1405 = {
        .ed4508 =  ed4508 ,
    };
    ( (  if_dash_just1404 ) ( ( ( * (  ed4508 ) ) .f_clipboard ) ,  ( (struct envunion1406){ .fun = (  enum Unit_8  (*) (  struct env1405*  ,    struct StrView_27  ) )lam1408 , .env =  envinst1405 } ) ) );
    (*  ed4508 ) .f_clipboard = ( ( Maybe_80_Just ) ( (  cpd4510 ) ) );
    return ( Unit_8_Unit );
}

struct env1413 {
    struct Pane_219 *  self4401;
    ;
};

struct envunion1414 {
    enum Unit_8  (*fun) (  struct env1413*  ,    struct Cursors_33  );
    struct env1413 env;
};

static  enum Unit_8   if_dash_just1412 (    struct Maybe_206  x1321 ,   struct envunion1414  fun1323 ) {
    struct Maybe_206  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_206_Just_t ) {
        struct envunion1414  temp1415 = (  fun1323 );
        ( temp1415.fun ( &temp1415.env ,  ( dref1324 .stuff .Maybe_206_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_206_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1416 (   struct env1413* env ,    struct Cursors_33  cursors4408 ) {
    ( (  set_dash_cursors1091 ) ( ( env->self4401 ) ,  ( (  cursors4408 ) .f_cur ) ,  ( (  cursors4408 ) .f_sel ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1410 (   struct env213* env ,    struct Pane_219 *  self4401 ,    struct Tuple2_231  pos_prime_s4403 ,    struct StrView_27  cp4405 ) {
    struct envunion214  temp1411 = ( (struct envunion214){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    struct Maybe_206  mcursors4406 = ( temp1411.fun ( &temp1411.env ,  ( ( * (  self4401 ) ) .f_buf ) ,  ( (  fst1401 ) ( (  pos_prime_s4403 ) ) ) ,  ( (  snd1402 ) ( (  pos_prime_s4403 ) ) ) ,  (  cp4405 ) ,  ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4401 ) ) .f_cursor ) , .f_sel = ( ( * (  self4401 ) ) .f_sel ) } ) ) ) ) );
    struct env1413 envinst1413 = {
        .self4401 =  self4401 ,
    };
    ( (  if_dash_just1412 ) ( (  mcursors4406 ) ,  ( (struct envunion1414){ .fun = (  enum Unit_8  (*) (  struct env1413*  ,    struct Cursors_33  ) )lam1416 , .env =  envinst1413 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1418 {
    enum Unit_8  (*fun) (  struct env233*  ,    struct Editor_248 *  );
    struct env233 env;
};

struct envunion1420 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion1422 {
    enum Unit_8  (*fun) (  struct env233*  ,    struct Editor_248 *  );
    struct env233 env;
};

static  struct StrBuilder_62   mk1428 (    enum CAllocator_10  al2868 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk439 ) ( (  al2868 ) ) ) } );
}

struct IntStrIter_1434 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1433 {
    struct StrViewIter_458  f_left;
    struct IntStrIter_1434  f_right;
};

struct StrConcatIter_1432 {
    struct StrConcatIter_1433  f_left;
    struct StrViewIter_458  f_right;
};

struct env1435 {
    struct StrBuilder_62 *  builder2836;
    struct env60 envinst60;
};

struct envunion1436 {
    enum Unit_8  (*fun) (  struct env1435*  ,    struct Char_65  );
    struct env1435 env;
};

static  struct StrConcatIter_1432   into_dash_iter1438 (    struct StrConcatIter_1432  self1527 ) {
    return (  self1527 );
}

struct env1444 {
    size_t  base1240;
    ;
};

struct envunion1445 {
    size_t  (*fun) (  struct env1444*  ,    int32_t  ,    size_t  );
    struct env1444 env;
};

static  size_t   reduce1443 (    struct Range_150  iterable1123 ,    size_t  base1125 ,   struct envunion1445  fun1127 ) {
    size_t  x1128 = (  base1125 );
    struct RangeIter_153  it1129 = ( (  into_dash_iter154 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1130 = ( (  next156 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_155_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_155_Just_t ) {
                struct envunion1445  temp1446 = (  fun1127 );
                x1128 = ( temp1446.fun ( &temp1446.env ,  ( dref1130 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1447 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1447);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1448;
    return (  temp1448 );
}

static  size_t   lam1449 (   struct env1444* env ,    int32_t  item1244 ,    size_t  x1246 ) {
    return (  op_dash_mul405 ( (  x1246 ) , ( env->base1240 ) ) );
}

static  size_t   pow1442 (    size_t  base1240 ,    int32_t  p1242 ) {
    struct env1444 envinst1444 = {
        .base1240 =  base1240 ,
    };
    return ( (  reduce1443 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1242 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1445){ .fun = (  size_t  (*) (  struct env1444*  ,    int32_t  ,    size_t  ) )lam1449 , .env =  envinst1444 } ) ) );
}

static  uint8_t   cast1450 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_297   next1441 (    struct IntStrIter_1434 *  self1458 ) {
    if ( ( ( * (  self1458 ) ) .f_negative ) ) {
        (*  self1458 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    size_t  trim_dash_down1459 = ( (  pow1442 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1460 = (  op_dash_div342 ( ( ( * (  self1458 ) ) .f_int ) , (  trim_dash_down1459 ) ) );
    size_t  upper_dash_mask1461 = (  op_dash_mul405 ( (  op_dash_div342 ( (  upper1460 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1462 = ( ( (  cast1450 ) ( (  op_dash_sub289 ( (  upper1460 ) , (  upper_dash_mask1461 ) ) ) ) ) );
    (*  self1458 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1463 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1462 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1463 ) ) );
}

static  struct Maybe_297   next1440 (    struct StrConcatIter_1433 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1441 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1439 (    struct StrConcatIter_1432 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next1440 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1431 (    struct StrConcatIter_1432  iterable1104 ,   struct envunion1436  fun1106 ) {
    struct StrConcatIter_1432  temp1437 = ( (  into_dash_iter1438 ) ( (  iterable1104 ) ) );
    struct StrConcatIter_1432 *  it1107 = ( &temp1437 );
    while ( ( true ) ) {
        struct Maybe_297  dref1108 = ( (  next1439 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_297_Just_t ) {
                struct envunion1436  temp1451 = (  fun1106 );
                ( temp1451.fun ( &temp1451.env ,  ( dref1108 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1458 (    size_t  self1466 ) {
    if ( (  eq399 ( (  self1466 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1467 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp290 ( (  self1466 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1466 = (  op_dash_div342 ( (  self1466 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1467 = (  op_dash_add159 ( (  digits1467 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1467 );
}

static  struct IntStrIter_1434   uint_dash_iter1457 (    size_t  int1473 ) {
    return ( (struct IntStrIter_1434) { .f_int = (  int1473 ) , .f_len = ( (  count_dash_digits1458 ) ( (  int1473 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1434   chars1456 (    size_t  self1503 ) {
    return ( (  uint_dash_iter1457 ) ( (  self1503 ) ) );
}

static  struct StrConcatIter_1433   into_dash_iter1455 (    struct StrConcat_84  dref1534 ) {
    return ( (struct StrConcatIter_1433) { .f_left = ( (  chars460 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1456 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_1433   chars1454 (    struct StrConcat_84  self1545 ) {
    return ( (  into_dash_iter1455 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_1432   into_dash_iter1453 (    struct StrConcat_83  dref1534 ) {
    return ( (struct StrConcatIter_1432) { .f_left = ( (  chars1454 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_1432   chars1452 (    struct StrConcat_83  self1545 ) {
    return ( (  into_dash_iter1453 ) ( (  self1545 ) ) );
}

static  enum Unit_8   write_dash_slice1463 (   struct env58* env ,    struct StrBuilder_62 *  builder2826 ,    struct Slice_11  s2828 ) {
    struct envunion59  temp1464 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all572 , .env =  env->envinst46 } );
    ( temp1464.fun ( &temp1464.env ,  ( & ( ( * (  builder2826 ) ) .f_chars ) ) ,  (  s2828 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_11   from_dash_char1465 (    struct Char_65  c1978 ,    uint8_t *  buf1980 ) {
    struct CharDestructured_337  dref1981 = ( (  destructure339 ) ( (  c1978 ) ) );
    if ( dref1981.tag == CharDestructured_337_Ref_t ) {
        return ( (struct Slice_11) { .f_ptr = ( ( dref1981 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1981 .stuff .CharDestructured_337_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1981.tag == CharDestructured_337_Scalar_t ) {
            if ( (  cmp170 ( ( ( dref1981 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) , (  from_dash_integral165 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1466 = ( (  from_dash_string57 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1466);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            (*  buf1980 ) = ( (  u32_dash_u8144 ) ( ( ( dref1981 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_11) { .f_ptr = (  buf1980 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_8   write_dash_char1461 (   struct env60* env ,    struct StrBuilder_62 *  builder2831 ,    struct Char_65  c2833 ) {
    struct envunion61  temp1462 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_11  ) )write_dash_slice1463 , .env =  env->envinst58 } );
    uint8_t  temp1468;
    uint8_t  temp1467 = (  temp1468 );
    ( temp1462.fun ( &temp1462.env ,  (  builder2831 ) ,  ( (  from_dash_char1465 ) ( (  c2833 ) ,  ( &temp1467 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1459 (   struct env1435* env ,    struct Char_65  c2840 ) {
    struct envunion64  temp1460 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1460.fun ( &temp1460.env ,  ( env->builder2836 ) ,  (  c2840 ) ) );
}

static  enum Unit_8   write1430 (   struct env68* env ,    struct StrBuilder_62 *  builder2836 ,    struct StrConcat_83  s2838 ) {
    struct env1435 envinst1435 = {
        .builder2836 =  builder2836 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1431 ) ( ( (  chars1452 ) ( (  s2838 ) ) ) ,  ( (struct envunion1436){ .fun = (  enum Unit_8  (*) (  struct env1435*  ,    struct Char_65  ) )lam1459 , .env =  envinst1435 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1472 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice1471 (    struct Slice_11  s1969 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr1472 ) ( ( (  s1969 ) .f_ptr ) ) ) , .f_count = ( (  s1969 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1470 (    struct StrBuilder_62 *  builder2874 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1471 ) ( ( (  subslice466 ) ( ( ( ( * (  builder2874 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2874 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1426 (   struct env81* env ,    struct StrConcat_83  s2894 ,    enum CAllocator_10  al2896 ) {
    struct StrBuilder_62  temp1427 = ( (  mk1428 ) ( (  al2896 ) ) );
    struct StrBuilder_62 *  sb2897 = ( &temp1427 );
    struct envunion82  temp1429 = ( (struct envunion82){ .fun = (  enum Unit_8  (*) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_83  ) )write1430 , .env =  env->envinst68 } );
    ( temp1429.fun ( &temp1429.env ,  (  sb2897 ) ,  (  s2894 ) ) );
    struct envunion75  temp1469 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    ( temp1469.fun ( &temp1469.env ,  (  sb2897 ) ,  ( (  nullchar544 ) ( ) ) ) );
    struct StrView_27  dynstr2898 = ( (  as_dash_str1470 ) ( (  sb2897 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2898 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub289 ( ( ( (  dynstr2898 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1424 (   struct env239* env ,    struct Editor_248 *  ed4520 ,    struct StrConcat_83  s4522 ) {
    ( (  reset_dash_msg1079 ) ( (  ed4520 ) ) );
    struct envunion240  temp1425 = ( (struct envunion240){ .fun = (  struct StrView_27  (*) (  struct env81*  ,    struct StrConcat_83  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1426 , .env =  env->envinst81 } );
    (*  ed4520 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1425.fun ( &temp1425.env ,  (  s4522 ) ,  ( ( * (  ed4520 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1475 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  );
    struct env213 env;
};

struct env1474 {
    ;
    struct Editor_248 *  ed4580;
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
    ;
    ;
    ;
    ;
};

struct envunion1476 {
    enum Unit_8  (*fun) (  struct env1474*  ,    struct StrView_27  );
    struct env1474 env;
};

static  enum Unit_8   if_dash_just1473 (    struct Maybe_80  x1321 ,   struct envunion1476  fun1323 ) {
    struct Maybe_80  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_80_Just_t ) {
        struct envunion1476  temp1477 = (  fun1323 );
        ( temp1477.fun ( &temp1477.env ,  ( dref1324 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1479 (    struct Pane_219 *  pane4331 ) {
    return ( {  struct Maybe_34  dref4332 = ( ( * (  pane4331 ) ) .f_sel ) ; dref4332.tag == Maybe_34_Just_t ? ( (  max556 ) ( ( ( * (  pane4331 ) ) .f_cursor ) ,  ( dref4332 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4331 ) ) .f_cursor ) ; } );
}

static  struct StrView_27   own1480 (    struct StrView_27  x1281 ) {
    return (  x1281 );
}

static  uint8_t   last1481 (    struct Slice_11  s1972 ) {
    if ( (  eq399 ( ( (  s1972 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get474 ( (  s1972 ) , (  op_dash_sub289 ( ( (  s1972 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1482 (    int32_t  x1382 ,    int32_t  mn1384 ,    int32_t  mx1386 ) {
    if ( (  cmp157 ( (  x1382 ) , (  mn1384 ) ) == 0 ) ) {
        return (  mn1384 );
    } else {
        if ( (  cmp157 ( (  x1382 ) , (  mx1386 ) ) == 2 ) ) {
            return (  mx1386 );
        } else {
            return (  x1382 );
        }
    }
}

struct envunion1484 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  );
    struct env213 env;
};

static  enum Unit_8   lam1478 (   struct env1474* env ,    struct StrView_27  cp4591 ) {
    struct Pos_26  start4592 = ( (  max_dash_pos1479 ) ( ( (  pane1134 ) ( ( env->ed4580 ) ) ) ) );
    struct StrView_27  cp4593 = ( (  own1480 ) ( (  cp4591 ) ) );
    if ( (  eq303 ( ( (  last1481 ) ( ( (  cp4593 ) .f_contents ) ) ) , ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        int32_t  max_dash_lines4594 = ( (  num_dash_lines1137 ) ( ( ( * ( (  pane1134 ) ( ( env->ed4580 ) ) ) ) .f_buf ) ) );
        struct Pos_26  start4595 = ( (struct Pos_26) { .f_line = ( (  clamp1482 ) ( (  op_dash_add159 ( ( (  start4592 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  max_dash_lines4594 ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
        if ( (  eq558 ( ( (  start4595 ) .f_line ) , (  max_dash_lines4594 ) ) ) ) {
            cp4593 = ( (  byte_dash_substr484 ) ( (  cp4593 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub289 ( ( ( (  cp4593 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
        struct envunion1484  temp1483 = ( (struct envunion1484){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
        ( temp1483.fun ( &temp1483.env ,  ( (  pane1134 ) ( ( env->ed4580 ) ) ) ,  ( ( Tuple2_231_Tuple2 ) ( (  start4595 ) ,  (  start4595 ) ) ) ,  (  cp4593 ) ) );
    } else {
        struct Pos_26  start4596 = ( (  right_dash_pos1136 ) ( ( ( ( * ( env->ed4580 ) ) .f_pane ) .f_buf ) ,  (  start4592 ) ) );
        struct envunion1475  temp1485 = ( (struct envunion1475){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
        ( temp1485.fun ( &temp1485.env ,  ( (  pane1134 ) ( ( env->ed4580 ) ) ) ,  ( ( Tuple2_231_Tuple2 ) ( (  start4596 ) ,  (  start4596 ) ) ) ,  (  cp4593 ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1488 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  );
    struct env213 env;
};

struct env1487 {
    struct Editor_248 *  ed4580;
    ;
    ;
    ;
    ;
    ;
    struct env213 envinst213;
    ;
    ;
};

struct envunion1489 {
    enum Unit_8  (*fun) (  struct env1487*  ,    struct StrView_27  );
    struct env1487 env;
};

static  enum Unit_8   if_dash_just1486 (    struct Maybe_80  x1321 ,   struct envunion1489  fun1323 ) {
    struct Maybe_80  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_80_Just_t ) {
        struct envunion1489  temp1490 = (  fun1323 );
        ( temp1490.fun ( &temp1490.env ,  ( dref1324 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1492 (    struct Pane_219 *  pane4326 ) {
    return ( {  struct Maybe_34  dref4327 = ( ( * (  pane4326 ) ) .f_sel ) ; dref4327.tag == Maybe_34_Just_t ? ( (  min554 ) ( ( ( * (  pane4326 ) ) .f_cursor ) ,  ( dref4327 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4326 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1491 (   struct env1487* env ,    struct StrView_27  cp4598 ) {
    struct Pos_26  start4599 = ( (  min_dash_pos1492 ) ( ( (  pane1134 ) ( ( env->ed4580 ) ) ) ) );
    if ( (  eq303 ( ( (  last1481 ) ( ( (  cp4598 ) .f_contents ) ) ) , ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1493 = (  start4599 );
        temp1493 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4599 = ( temp1493 );
    }
    struct envunion1488  temp1494 = ( (struct envunion1488){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
    ( temp1494.fun ( &temp1494.env ,  ( (  pane1134 ) ( ( env->ed4580 ) ) ) ,  ( ( Tuple2_231_Tuple2 ) ( (  start4599 ) ,  (  start4599 ) ) ) ,  (  cp4598 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1497 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  );
    struct env213 env;
};

struct env1496 {
    struct Editor_248 *  ed4580;
    ;
    ;
    ;
    ;
    ;
    struct env213 envinst213;
};

struct envunion1498 {
    enum Unit_8  (*fun) (  struct env1496*  ,    struct StrView_27  );
    struct env1496 env;
};

static  enum Unit_8   if_dash_just1495 (    struct Maybe_80  x1321 ,   struct envunion1498  fun1323 ) {
    struct Maybe_80  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_80_Just_t ) {
        struct envunion1498  temp1499 = (  fun1323 );
        ( temp1499.fun ( &temp1499.env ,  ( dref1324 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1500 (   struct env1496* env ,    struct StrView_27  cp4601 ) {
    struct Pos_26  start4602 = ( (  min_dash_pos1492 ) ( ( (  pane1134 ) ( ( env->ed4580 ) ) ) ) );
    struct Pos_26  end4603 = ( (  max_dash_pos1479 ) ( ( (  pane1134 ) ( ( env->ed4580 ) ) ) ) );
    struct envunion1497  temp1501 = ( (struct envunion1497){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
    struct Pos_26  temp1502 = (  end4603 );
    temp1502 .  f_bi = (  op_dash_add159 ( ( (  end4603 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( temp1501.fun ( &temp1501.env ,  ( (  pane1134 ) ( ( env->ed4580 ) ) ) ,  ( ( Tuple2_231_Tuple2 ) ( (  start4602 ) ,  ( temp1502 ) ) ) ,  (  cp4601 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1503 (    struct Pane_219 *  pane4345 ) {
    struct Pos_26  min_dash_pos4346 = ( (  min_dash_pos1492 ) ( (  pane4345 ) ) );
    struct Pos_26  max_dash_pos4347 = ( (  max_dash_pos1479 ) ( (  pane4345 ) ) );
    int32_t  max_dash_pos_dash_max4348 = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  pane4345 ) ) .f_buf ) ,  ( (  max_dash_pos4347 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq558 ( ( (  min_dash_pos4346 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq558 ( ( (  max_dash_pos4347 ) .f_bi ) , (  max_dash_pos_dash_max4348 ) ) ) ) ) ) {
        struct Pos_26  temp1504 = (  min_dash_pos4346 );
        temp1504 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4345 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1504 ) ) );
        struct Pos_26  temp1505 = (  max_dash_pos4347 );
        temp1505 .  f_bi = (  max_dash_pos_dash_max4348 );
        (*  pane4345 ) .f_cursor = ( temp1505 );
    } else {
        if ( (  cmp157 ( (  op_dash_add159 ( ( (  max_dash_pos4347 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1137 ) ( ( ( * (  pane4345 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1506 = (  min_dash_pos4346 );
        temp1506 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4345 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1506 ) ) );
        int32_t  next_dash_line4349 = (  op_dash_add159 ( ( (  max_dash_pos4347 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4345 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4349 ) , .f_bi = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  pane4345 ) ) .f_buf ) ,  (  next_dash_line4349 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1507 (    struct Maybe_34  m1294 ) {
    struct Maybe_34  dref1295 = (  m1294 );
    if ( dref1295.tag == Maybe_34_None_t ) {
        return ( true );
    }
    else {
        if ( dref1295.tag == Maybe_34_Just_t ) {
            return ( false );
        }
    }
}

struct Maybe_1509 {
    enum {
        Maybe_1509_None_t,
        Maybe_1509_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_231  field0;
        } Maybe_1509_Just_s;
    } stuff;
};

static struct Maybe_1509 Maybe_1509_Just (  struct Tuple2_231  field0 ) {
    return ( struct Maybe_1509 ) { .tag = Maybe_1509_Just_t, .stuff = { .Maybe_1509_Just_s = { .field0 = field0 } } };
};

struct env1511 {
    ;
    ;
    struct StrView_27  query4457;
    ;
    struct Pane_219 *  pane4453;
    ;
};

struct envunion1513 {
    struct Maybe_246  (*fun) (  struct env1511*  ,    struct Pos_26  );
    struct env1511 env;
};

static  struct Maybe_246   find_dash_slice1515 (    struct Slice_11  haystack1949 ,    struct Slice_11  needle1951 ) {
    struct RangeIter_153  temp1516 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( ( (  haystack1949 ) .f_count ) ) ) , ( (  size_dash_i32329 ) ( ( (  needle1951 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1517 =  next156 (&temp1516);
        if (  __cond1517 .tag == 0 ) {
            break;
        }
        int32_t  i1953 =  __cond1517 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq486 ( ( (  subslice466 ) ( (  haystack1949 ) ,  ( (  i32_dash_size412 ) ( (  i1953 ) ) ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( (  i1953 ) ) ) , ( (  needle1951 ) .f_count ) ) ) ) ) , (  needle1951 ) ) ) ) {
            return ( ( Maybe_246_Just ) ( ( (  i32_dash_size412 ) ( (  i1953 ) ) ) ) );
        }
    }
    return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
}

static  struct Maybe_246   search_dash_on_dash_line1514 (   struct env1511* env ,    struct Pos_26  pos4460 ) {
    return ( (  find_dash_slice1515 ) ( ( ( (  byte_dash_substr_dash_from464 ) ( ( (  line1097 ) ( ( ( * ( env->pane4453 ) ) .f_buf ) ,  ( (  pos4460 ) .f_line ) ) ) ,  ( (  i32_dash_size412 ) ( ( (  pos4460 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4457 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1523 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1524 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1522 (    int32_t  l1259 ,    int32_t  d1261 ) {
    int32_t  r1262 = (  op_dash_div1523 ( (  l1259 ) , (  d1261 ) ) );
    int32_t  m1263 = (  op_dash_sub164 ( (  l1259 ) , (  op_dash_mul1524 ( (  r1262 ) , (  d1261 ) ) ) ) );
    if ( (  cmp157 ( (  m1263 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add159 ( (  d1261 ) , (  m1263 ) ) );
    } else {
        return (  m1263 );
    }
}

struct envunion1526 {
    struct Maybe_246  (*fun) (  struct env1511*  ,    struct Pos_26  );
    struct env1511 env;
};

static  struct Maybe_1509   search_dash_from1510 (    struct Pane_219 *  pane4453 ,    struct Pos_26  pos4455 ,    struct StrView_27  query4457 ) {
    struct env1511 envinst1511 = {
        .query4457 =  query4457 ,
        .pane4453 =  pane4453 ,
    };
    struct envunion1513  temp1512 = ( (struct envunion1513){ .fun = (  struct Maybe_246  (*) (  struct env1511*  ,    struct Pos_26  ) )search_dash_on_dash_line1514 , .env =  envinst1511 } );
    struct Maybe_246  dref4461 = ( temp1512.fun ( &temp1512.env ,  (  pos4455 ) ) );
    if ( dref4461.tag == Maybe_246_Just_t ) {
        struct Pos_26  temp1518 = (  pos4455 );
        temp1518 .  f_bi = (  op_dash_add159 ( ( (  pos4455 ) .f_bi ) , ( (  size_dash_i32329 ) ( ( dref4461 .stuff .Maybe_246_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4463 = ( temp1518 );
        struct Pos_26  temp1519 = (  pos4455 );
        temp1519 .  f_bi = (  op_dash_sub164 ( (  op_dash_add159 ( ( (  pos4455 ) .f_bi ) , ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4461 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4457 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4464 = ( temp1519 );
        return ( ( Maybe_1509_Just ) ( ( ( Tuple2_231_Tuple2 ) ( (  sel_dash_pos4463 ) ,  (  cur_dash_pos4464 ) ) ) ) );
    }
    else {
        if ( dref4461.tag == Maybe_246_None_t ) {
            int32_t  num_dash_lines4465 = ( (  num_dash_lines1137 ) ( ( ( * (  pane4453 ) ) .f_buf ) ) );
            struct RangeIter_153  temp1520 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4465 ) ) ) );
            while (true) {
                struct Maybe_155  __cond1521 =  next156 (&temp1520);
                if (  __cond1521 .tag == 0 ) {
                    break;
                }
                int32_t  i4467 =  __cond1521 .stuff .Maybe_155_Just_s .field0;
                int32_t  line4468 = ( (  mod1522 ) ( (  op_dash_add159 ( ( (  pos4455 ) .f_line ) , (  i4467 ) ) ) ,  (  num_dash_lines4465 ) ) );
                struct envunion1526  temp1525 = ( (struct envunion1526){ .fun = (  struct Maybe_246  (*) (  struct env1511*  ,    struct Pos_26  ) )search_dash_on_dash_line1514 , .env =  envinst1511 } );
                struct Maybe_246  dref4469 = ( temp1525.fun ( &temp1525.env ,  ( (struct Pos_26) { .f_line = (  line4468 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4469.tag == Maybe_246_Just_t ) {
                    struct Pos_26  sel_dash_pos4471 = ( (struct Pos_26) { .f_line = (  line4468 ) , .f_bi = ( (  size_dash_i32329 ) ( ( dref4469 .stuff .Maybe_246_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4472 = ( (struct Pos_26) { .f_line = (  line4468 ) , .f_bi = (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4469 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4457 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1509_Just ) ( ( ( Tuple2_231_Tuple2 ) ( (  sel_dash_pos4471 ) ,  (  cur_dash_pos4472 ) ) ) ) );
                }
                else {
                    if ( dref4469.tag == Maybe_246_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1509) { .tag = Maybe_1509_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1508 (    struct Editor_248 *  ed4564 ) {
    struct Maybe_80  dref4565 = ( ( * (  ed4564 ) ) .f_search_dash_term );
    if ( dref4565.tag == Maybe_80_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4565.tag == Maybe_80_Just_t ) {
            struct Maybe_1509  dref4567 = ( (  search_dash_from1510 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ,  ( (  max_dash_pos1479 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ) ) ,  ( dref4565 .stuff .Maybe_80_Just_s .field0 ) ) );
            if ( dref4567.tag == Maybe_1509_None_t ) {
            }
            else {
                if ( dref4567.tag == Maybe_1509_Just_t ) {
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ,  ( dref4567 .stuff .Maybe_1509_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4567 .stuff .Maybe_1509_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_246   find_dash_last_dash_occurence_dash_of_dash_slice1529 (    struct Slice_11  haystack1956 ,    struct Slice_11  needle1958 ) {
    struct Maybe_246  occ1959 = ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    struct RangeIter_153  temp1530 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( ( (  haystack1956 ) .f_count ) ) ) , ( (  size_dash_i32329 ) ( ( (  needle1958 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1531 =  next156 (&temp1530);
        if (  __cond1531 .tag == 0 ) {
            break;
        }
        int32_t  i1961 =  __cond1531 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq486 ( ( (  subslice466 ) ( (  haystack1956 ) ,  ( (  i32_dash_size412 ) ( (  i1961 ) ) ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( (  i1961 ) ) ) , ( (  needle1958 ) .f_count ) ) ) ) ) , (  needle1958 ) ) ) ) {
            occ1959 = ( ( Maybe_246_Just ) ( ( (  i32_dash_size412 ) ( (  i1961 ) ) ) ) );
        }
    }
    return (  occ1959 );
}

static  struct Maybe_1509   search_dash_back1528 (    struct Pane_219 *  pane4475 ,    struct Pos_26  pos4477 ,    struct StrView_27  query4479 ) {
    struct Maybe_246  dref4480 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1529 ) ( ( ( (  byte_dash_substr484 ) ( ( (  line1097 ) ( ( ( * (  pane4475 ) ) .f_buf ) ,  ( (  pos4477 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( ( (  pos4477 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4479 ) .f_contents ) ) );
    if ( dref4480.tag == Maybe_246_Just_t ) {
        struct Pos_26  temp1532 = (  pos4477 );
        temp1532 .  f_bi = ( (  size_dash_i32329 ) ( ( dref4480 .stuff .Maybe_246_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4482 = ( temp1532 );
        struct Pos_26  temp1533 = (  pos4477 );
        temp1533 .  f_bi = (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4480 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4479 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4483 = ( temp1533 );
        return ( ( Maybe_1509_Just ) ( ( ( Tuple2_231_Tuple2 ) ( (  sel_dash_pos4482 ) ,  (  cur_dash_pos4483 ) ) ) ) );
    }
    else {
        if ( dref4480.tag == Maybe_246_None_t ) {
            int32_t  num_dash_lines4484 = ( (  num_dash_lines1137 ) ( ( ( * (  pane4475 ) ) .f_buf ) ) );
            struct RangeIter_153  temp1534 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4484 ) ) ) );
            while (true) {
                struct Maybe_155  __cond1535 =  next156 (&temp1534);
                if (  __cond1535 .tag == 0 ) {
                    break;
                }
                int32_t  i4486 =  __cond1535 .stuff .Maybe_155_Just_s .field0;
                int32_t  line4487 = ( (  mod1522 ) ( (  op_dash_sub164 ( ( (  pos4477 ) .f_line ) , (  i4486 ) ) ) ,  (  num_dash_lines4484 ) ) );
                struct Maybe_246  dref4488 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1529 ) ( ( ( (  line1097 ) ( ( ( * (  pane4475 ) ) .f_buf ) ,  (  line4487 ) ) ) .f_contents ) ,  ( (  query4479 ) .f_contents ) ) );
                if ( dref4488.tag == Maybe_246_Just_t ) {
                    struct Pos_26  sel_dash_pos4490 = ( (struct Pos_26) { .f_line = (  line4487 ) , .f_bi = ( (  size_dash_i32329 ) ( ( dref4488 .stuff .Maybe_246_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4491 = ( (struct Pos_26) { .f_line = (  line4487 ) , .f_bi = (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4488 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4479 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1509_Just ) ( ( ( Tuple2_231_Tuple2 ) ( (  sel_dash_pos4490 ) ,  (  cur_dash_pos4491 ) ) ) ) );
                }
                else {
                    if ( dref4488.tag == Maybe_246_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1509) { .tag = Maybe_1509_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1527 (    struct Editor_248 *  ed4572 ) {
    struct Maybe_80  dref4573 = ( ( * (  ed4572 ) ) .f_search_dash_term );
    if ( dref4573.tag == Maybe_80_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4573.tag == Maybe_80_Just_t ) {
            struct Maybe_1509  dref4575 = ( (  search_dash_back1528 ) ( ( (  pane1134 ) ( (  ed4572 ) ) ) ,  ( (  min_dash_pos1492 ) ( ( (  pane1134 ) ( (  ed4572 ) ) ) ) ) ,  ( dref4573 .stuff .Maybe_80_Just_s .field0 ) ) );
            if ( dref4575.tag == Maybe_1509_None_t ) {
            }
            else {
                if ( dref4575.tag == Maybe_1509_Just_t ) {
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4572 ) ) ) ,  ( dref4575 .stuff .Maybe_1509_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4575 .stuff .Maybe_1509_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1539 (   struct env132* env ,    struct TextBuf_105 *  self3975 ,    struct Cursors_33  before_dash_cursors3977 ) {
    struct Actions_106 *  actions3978 = ( & ( ( * (  self3975 ) ) .f_actions ) );
    ( (  trim_dash_actions1169 ) ( (  actions3978 ) ) );
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3975 ) ) );
    ( (  assert667 ) ( (  eq1238 ( ( ( ( * (  self3975 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_107_NoChangeset ) ) ) ,  ( (  from_dash_string199 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al3979 = ( ( * (  self3975 ) ) .f_al );
    struct Changeset_32  temp1540 = ( (struct Changeset_32) { .f_parts = ( (  mk1267 ) ( (  al3979 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3977 ) } );
    struct Changeset_32 *  changeset3980 = ( &temp1540 );
    struct envunion133  temp1541 = ( (struct envunion133){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1278 , .env =  env->envinst28 } );
    ( temp1541.fun ( &temp1541.env ,  ( & ( ( * (  actions3978 ) ) .f_list ) ) ,  ( * (  changeset3980 ) ) ) );
    (*  actions3978 ) .f_input_dash_changeset = ( ChangesetInputType_107_CustomChangeset );
    (*  actions3978 ) .f_cur = (  op_dash_add311 ( ( ( * (  actions3978 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1195   head1547 (    struct List_23  it1172 ) {
    struct SliceIter_1188  temp1548 = ( (  into_dash_iter1190 ) ( (  it1172 ) ) );
    return ( (  next1196 ) ( ( &temp1548 ) ) );
}

static  bool   null1546 (    struct List_23  it1181 ) {
    struct Maybe_1195  dref1182 = ( (  head1547 ) ( (  it1181 ) ) );
    if ( dref1182.tag == Maybe_1195_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1545 (    struct TextBuf_105 *  self3983 ) {
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3983 ) ) );
    struct Actions_106 *  actions3984 = ( & ( ( * (  self3983 ) ) .f_actions ) );
    if ( ( (  null1546 ) ( ( ( * ( (  last_dash_ptr1240 ) ( ( (  to_dash_slice1242 ) ( ( ( * (  actions3984 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3984 ) .f_cur = (  op_dash_sub289 ( ( ( * (  actions3984 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3984 ) .f_input_dash_changeset = ( ChangesetInputType_107_NoChangeset );
        ( (  trim_dash_actions1169 ) ( (  actions3984 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1550 (    struct Maybe_34  x1305 ,    struct Pos_26 (*  fun1307 )(    struct Pos_26  ) ) {
    struct Maybe_34  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1308.tag == Maybe_34_Just_t ) {
            return ( ( Maybe_34_Just ) ( ( (  fun1307 ) ( ( dref1308 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1551 (    struct Pos_26  sel4420 ) {
    struct Pos_26  temp1552 = (  sel4420 );
    temp1552 .  f_bi = (  op_dash_add159 ( ( (  sel4420 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1552 );
}

static  enum Unit_8   indent_dash_selection1537 (   struct env217* env ,    struct Pane_219 *  self4416 ) {
    struct envunion222  temp1538 = ( (struct envunion222){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  ) )begin_dash_changeset1539 , .env =  env->envinst132 } );
    ( temp1538.fun ( &temp1538.env ,  ( ( * (  self4416 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4416 ) ) .f_cursor ) , .f_sel = ( ( * (  self4416 ) ) .f_sel ) } ) ) );
    struct RangeIter_153  temp1542 =  into_dash_iter154 ( ( (  to163 ) ( ( ( (  min_dash_pos1492 ) ( (  self4416 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1479 ) ( (  self4416 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_155  __cond1543 =  next156 (&temp1542);
        if (  __cond1543 .tag == 0 ) {
            break;
        }
        int32_t  line4418 =  __cond1543 .stuff .Maybe_155_Just_s .field0;
        struct envunion218  temp1544 = ( (struct envunion218){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at1309 , .env =  env->envinst215 } );
        ( temp1544.fun ( &temp1544.env ,  (  self4416 ) ,  (  line4418 ) ) );
    }
    ( (  end_dash_changeset1545 ) ( ( ( * (  self4416 ) ) .f_buf ) ) );
    struct Pos_26  temp1549 = ( ( * (  self4416 ) ) .f_cursor );
    temp1549 .  f_bi = (  op_dash_add159 ( ( ( ( * (  self4416 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4416 ) ,  ( temp1549 ) ,  ( (  fmap_dash_maybe1550 ) ( ( ( * (  self4416 ) ) .f_sel ) ,  (  lam1551 ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1563 {
    bool  last_dash_char_dash_was_dash_tab4425;
    ;
    ;
};

struct envunion1564 {
    struct Pos_26  (*fun) (  struct env1563*  ,    struct Pos_26  );
    struct env1563 env;
};

static  struct Maybe_34   fmap_dash_maybe1562 (    struct Maybe_34  x1305 ,   struct envunion1564  fun1307 ) {
    struct Maybe_34  dref1308 = (  x1305 );
    if ( dref1308.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1308.tag == Maybe_34_Just_t ) {
            struct envunion1564  temp1565 = (  fun1307 );
            return ( ( Maybe_34_Just ) ( ( temp1565.fun ( &temp1565.env ,  ( dref1308 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1566 (   struct env1563* env ,    struct Pos_26  sel4429 ) {
    struct Pos_26  temp1567 = (  sel4429 );
    temp1567 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4425 ) ? (  op_dash_sub164 ( ( (  sel4429 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4429 ) .f_bi ) );
    return ( temp1567 );
}

static  enum Unit_8   dedent_dash_selection1554 (   struct env223* env ,    struct Pane_219 *  self4423 ) {
    struct envunion225  temp1555 = ( (struct envunion225){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  ) )begin_dash_changeset1539 , .env =  env->envinst132 } );
    ( temp1555.fun ( &temp1555.env ,  ( ( * (  self4423 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4423 ) ) .f_cursor ) , .f_sel = ( ( * (  self4423 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1556 = ( (  min_dash_pos1492 ) ( (  self4423 ) ) );
    temp1556 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4424 = (  eq469 ( ( (  char_dash_at1341 ) ( (  self4423 ) ,  ( temp1556 ) ) ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1557 = ( (  max_dash_pos1479 ) ( (  self4423 ) ) );
    temp1557 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4425 = (  eq469 ( ( (  char_dash_at1341 ) ( (  self4423 ) ,  ( temp1557 ) ) ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_153  temp1558 =  into_dash_iter154 ( ( (  to163 ) ( ( ( (  min_dash_pos1492 ) ( (  self4423 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1479 ) ( (  self4423 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_155  __cond1559 =  next156 (&temp1558);
        if (  __cond1559 .tag == 0 ) {
            break;
        }
        int32_t  line4427 =  __cond1559 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq469 ( ( (  char_dash_at1341 ) ( (  self4423 ) ,  ( (struct Pos_26) { .f_line = (  line4427 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion224  temp1560 = ( (struct envunion224){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
            ( temp1560.fun ( &temp1560.env ,  ( ( * (  self4423 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4427 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4427 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1545 ) ( ( ( * (  self4423 ) ) .f_buf ) ) );
    struct Pos_26  temp1561 = ( ( * (  self4423 ) ) .f_cursor );
    temp1561 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4424 ) ? (  op_dash_sub164 ( ( ( ( * (  self4423 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4423 ) ) .f_cursor ) .f_bi ) );
    struct env1563 envinst1563 = {
        .last_dash_char_dash_was_dash_tab4425 =  last_dash_char_dash_was_dash_tab4425 ,
    };
    ( (  set_dash_cursors1091 ) ( (  self4423 ) ,  ( temp1561 ) ,  ( (  fmap_dash_maybe1562 ) ( ( ( * (  self4423 ) ) .f_sel ) ,  ( (struct envunion1564){ .fun = (  struct Pos_26  (*) (  struct env1563*  ,    struct Pos_26  ) )lam1566 , .env =  envinst1563 } ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1571 (  ) {
    int32_t  temp1572;
    return (  temp1572 );
}

static  int32_t   or_dash_fail1570 (    struct Maybe_155  x1756 ,    struct StrView_27  errmsg1758 ) {
    struct Maybe_155  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_155_None_t ) {
        ( (  panic1212 ) ( (  errmsg1758 ) ) );
        return ( (  undefined1571 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_155_Just_t ) {
            return ( dref1759 .stuff .Maybe_155_Just_s .field0 );
        }
    }
}

struct env1575 {
    ;
    struct Pane_219 *  self4438;
};

struct envunion1576 {
    int32_t  (*fun) (  struct env1575*  ,    int32_t  );
    struct env1575 env;
};

struct Map_1574 {
    struct RangeIter_153  field0;
    struct envunion1576  field1;
};

static struct Map_1574 Map_1574_Map (  struct RangeIter_153  field0 , struct envunion1576  field1 ) {
    return ( struct Map_1574 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1574   into_dash_iter1578 (    struct Map_1574  self809 ) {
    return (  self809 );
}

static  struct Maybe_155   next1579 (    struct Map_1574 *  dref811 ) {
    struct Maybe_155  dref814 = ( (  next156 ) ( ( & ( (* dref811 ) .field0 ) ) ) );
    if ( dref814.tag == Maybe_155_None_t ) {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
    else {
        if ( dref814.tag == Maybe_155_Just_t ) {
            struct envunion1576  temp1580 = ( (* dref811 ) .field1 );
            return ( ( Maybe_155_Just ) ( ( temp1580.fun ( &temp1580.env ,  ( dref814 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_155   reduce1577 (    struct Map_1574  iterable1123 ,    struct Maybe_155  base1125 ,    struct Maybe_155 (*  fun1127 )(    int32_t  ,    struct Maybe_155  ) ) {
    struct Maybe_155  x1128 = (  base1125 );
    struct Map_1574  it1129 = ( (  into_dash_iter1578 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1130 = ( (  next1579 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_155_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_155_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1581 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1581);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_155  temp1582;
    return (  temp1582 );
}

struct env1585 {
    ;
    int32_t  x1273;
};

struct envunion1586 {
    struct Maybe_155  (*fun) (  struct env1585*  ,    int32_t  );
    struct env1585 env;
};

static  struct Maybe_155   maybe1584 (    struct Maybe_155  x1312 ,   struct envunion1586  fun1314 ,    struct Maybe_155  default1316 ) {
    struct envunion1586  temp1587 = (  fun1314 );
    return ( {  struct Maybe_155  dref1317 = (  x1312 ) ; dref1317.tag == Maybe_155_Just_t ? ( temp1587.fun ( &temp1587.env ,  ( dref1317 .stuff .Maybe_155_Just_s .field0 ) ) ) : (  default1316 ) ; } );
}

static  struct Maybe_155   lam1588 (   struct env1585* env ,    int32_t  lm1342 ) {
    return ( ( Maybe_155_Just ) ( ( (  min659 ) ( (  lm1342 ) ,  ( env->x1273 ) ) ) ) );
}

static  struct Maybe_155   lam1583 (    int32_t  x1273 ,    struct Maybe_155  last_dash_min1275 ) {
    struct env1585 envinst1585 = {
        .x1273 =  x1273 ,
    };
    return ( (  maybe1584 ) ( (  last_dash_min1275 ) ,  ( (struct envunion1586){ .fun = (  struct Maybe_155  (*) (  struct env1585*  ,    int32_t  ) )lam1588 , .env =  envinst1585 } ) ,  ( ( Maybe_155_Just ) ( (  x1273 ) ) ) ) );
}

static  struct Maybe_155   minimum1573 (    struct Map_1574  it1271 ) {
    return ( (  reduce1577 ) ( (  it1271 ) ,  ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) ,  (  lam1583 ) ) );
}

static  struct Map_1574   map1589 (    struct Range_150  iterable818 ,   struct envunion1576  fun820 ) {
    struct RangeIter_153  it821 = ( (  into_dash_iter154 ) ( (  iterable818 ) ) );
    return ( ( Map_1574_Map ) ( (  it821 ) ,  (  fun820 ) ) );
}

static  int32_t   lam1590 (   struct env1575* env ,    int32_t  ln4442 ) {
    return ( (  indent_dash_at_dash_line1146 ) ( ( env->self4438 ) ,  (  ln4442 ) ) );
}

struct env1592 {
    ;
    struct Pane_219 *  self4438;
    ;
};

struct envunion1593 {
    bool  (*fun) (  struct env1592*  ,    int32_t  );
    struct env1592 env;
};

struct env1595 {
    struct envunion1593  fun1156;
};

struct envunion1596 {
    bool  (*fun) (  struct env1595*  ,    int32_t  ,    bool  );
    struct env1595 env;
};

static  bool   reduce1594 (    struct Range_150  iterable1123 ,    bool  base1125 ,   struct envunion1596  fun1127 ) {
    bool  x1128 = (  base1125 );
    struct RangeIter_153  it1129 = ( (  into_dash_iter154 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1130 = ( (  next156 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_155_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_155_Just_t ) {
                struct envunion1596  temp1597 = (  fun1127 );
                x1128 = ( temp1597.fun ( &temp1597.env ,  ( dref1130 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1598 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1598);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1599;
    return (  temp1599 );
}

static  bool   lam1600 (   struct env1595* env ,    int32_t  e1158 ,    bool  x1160 ) {
    struct envunion1593  temp1601 = ( env->fun1156 );
    return ( ( temp1601.fun ( &temp1601.env ,  (  e1158 ) ) ) && (  x1160 ) );
}

static  bool   all1591 (    struct Range_150  it1154 ,   struct envunion1593  fun1156 ) {
    struct env1595 envinst1595 = {
        .fun1156 =  fun1156 ,
    };
    return ( (  reduce1594 ) ( (  it1154 ) ,  ( true ) ,  ( (struct envunion1596){ .fun = (  bool  (*) (  struct env1595*  ,    int32_t  ,    bool  ) )lam1600 , .env =  envinst1595 } ) ) );
}

static  bool   is_dash_just1603 (    struct Maybe_1509  m1290 ) {
    struct Maybe_1509  dref1291 = (  m1290 );
    if ( dref1291.tag == Maybe_1509_None_t ) {
        return ( false );
    }
    else {
        if ( dref1291.tag == Maybe_1509_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1605 (    struct Char_65  c4370 ) {
    return ( ( !  eq469 ( (  c4370 ) , ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1340 ) ( (  c4370 ) ) ) );
}

static  struct Maybe_1509   line_dash_begins_dash_with_dash_comment1604 (    struct Pane_219 *  self4364 ,    int32_t  line4366 ) {
    int32_t  indent4367 = ( (  indent_dash_at_dash_line1146 ) ( (  self4364 ) ,  (  line4366 ) ) );
    if ( (  eq469 ( ( (  char_dash_at1341 ) ( (  self4364 ) ,  ( (  mk694 ) ( (  line4366 ) ,  (  indent4367 ) ) ) ) ) , ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4368 = (  op_dash_add159 ( (  indent4367 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1605 ) ( ( (  char_dash_at1341 ) ( (  self4364 ) ,  ( (  mk694 ) ( (  line4366 ) ,  (  i4368 ) ) ) ) ) ) ) ) {
            i4368 = (  op_dash_add159 ( (  i4368 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1509_Just ) ( ( ( Tuple2_231_Tuple2 ) ( ( (  mk694 ) ( (  line4366 ) ,  (  indent4367 ) ) ) ,  ( (  mk694 ) ( (  line4366 ) ,  (  i4368 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1509) { .tag = Maybe_1509_None_t } );
    }
}

static  bool   lam1602 (   struct env1592* env ,    int32_t  ln4445 ) {
    return ( (  is_dash_just1603 ) ( ( (  line_dash_begins_dash_with_dash_comment1604 ) ( ( env->self4438 ) ,  (  ln4445 ) ) ) ) );
}

static  struct Tuple2_231   undefined1611 (  ) {
    struct Tuple2_231  temp1612;
    return (  temp1612 );
}

static  struct Tuple2_231   or_dash_fail1610 (    struct Maybe_1509  x1756 ,    struct StrView_27  errmsg1758 ) {
    struct Maybe_1509  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_1509_None_t ) {
        ( (  panic1212 ) ( (  errmsg1758 ) ) );
        return ( (  undefined1611 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_1509_Just_t ) {
            return ( dref1759 .stuff .Maybe_1509_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1569 (   struct env228* env ,    struct Pane_219 *  self4438 ) {
    int32_t  from_dash_line4439 = ( ( (  min_dash_pos1492 ) ( (  self4438 ) ) ) .f_line );
    int32_t  to_dash_line4440 = ( ( (  max_dash_pos1479 ) ( (  self4438 ) ) ) .f_line );
    struct env1575 envinst1575 = {
        .self4438 =  self4438 ,
    };
    int32_t  min_dash_indent4443 = ( (  or_dash_fail1570 ) ( ( (  minimum1573 ) ( ( (  map1589 ) ( ( (  to163 ) ( (  from_dash_line4439 ) ,  (  to_dash_line4440 ) ) ) ,  ( (struct envunion1576){ .fun = (  int32_t  (*) (  struct env1575*  ,    int32_t  ) )lam1590 , .env =  envinst1575 } ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1592 envinst1592 = {
        .self4438 =  self4438 ,
    };
    bool  all_dash_have_dash_comment4446 = ( (  all1591 ) ( ( (  to163 ) ( (  from_dash_line4439 ) ,  (  to_dash_line4440 ) ) ) ,  ( (struct envunion1593){ .fun = (  bool  (*) (  struct env1592*  ,    int32_t  ) )lam1602 , .env =  envinst1592 } ) ) );
    struct envunion229  temp1606 = ( (struct envunion229){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_105 *  ,    struct Cursors_33  ) )begin_dash_changeset1539 , .env =  env->envinst132 } );
    ( temp1606.fun ( &temp1606.env ,  ( ( * (  self4438 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4438 ) ) .f_cursor ) , .f_sel = ( ( * (  self4438 ) ) .f_sel ) } ) ) );
    struct RangeIter_153  temp1607 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_line4439 ) ,  (  to_dash_line4440 ) ) ) );
    while (true) {
        struct Maybe_155  __cond1608 =  next156 (&temp1607);
        if (  __cond1608 .tag == 0 ) {
            break;
        }
        int32_t  line4448 =  __cond1608 .stuff .Maybe_155_Just_s .field0;
        struct Char_65  comment_dash_str4449 = ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4446 ) ) ) {
            ( (  set_dash_cursors1091 ) ( (  self4438 ) ,  ( (  mk694 ) ( (  line4448 ) ,  (  min_dash_indent4443 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
            struct envunion232  temp1609 = ( (struct envunion232){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
            ( temp1609.fun ( &temp1609.env ,  (  self4438 ) ,  ( (  from_dash_string199 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_231  tup4450 = ( (  or_dash_fail1610 ) ( ( (  line_dash_begins_dash_with_dash_comment1604 ) ( (  self4438 ) ,  (  line4448 ) ) ) ,  ( (  from_dash_string199 ) ( ( "(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion230  temp1613 = ( (struct envunion230){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
            ( temp1613.fun ( &temp1613.env ,  (  self4438 ) ,  ( ( Tuple2_231_Tuple2 ) ( ( (  fst1401 ) ( (  tup4450 ) ) ) ,  ( (  snd1402 ) ( (  tup4450 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1545 ) ( ( ( * (  self4438 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1089 (   struct env253* env ,    struct Editor_248 *  ed4580 ,    struct Key_268  key4582 ) {
    struct Key_268  dref4583 = (  key4582 );
    if ( dref4583.tag == Key_268_Char_t ) {
        if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4580 ) .f_running = ( false );
        } else {
            if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1090 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ) );
            } else {
                if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1135 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ) );
                } else {
                    if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1138 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1142 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( Mode_220_Insert ) ) );
                            } else {
                                if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1145 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ) );
                                    ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( Mode_220_Insert ) ) );
                                } else {
                                    if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1163 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ) );
                                        ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( Mode_220_Insert ) ) );
                                    } else {
                                        if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_219 *  pane4585 = ( (  pane1134 ) ( (  ed4580 ) ) );
                                            int32_t  indent4586 = ( (  indent_dash_at_dash_line1146 ) ( (  pane4585 ) ,  ( ( ( * (  pane4585 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1163 ) ( (  pane4585 ) ) );
                                            struct envunion262  temp1165 = ( (struct envunion262){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                                            ( temp1165.fun ( &temp1165.env ,  (  pane4585 ) ,  ( (  from_dash_charlike1229 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1135 ) ( (  pane4585 ) ) );
                                            struct envunion260  temp1304 = ( (struct envunion260){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at_dash_current1305 , .env =  env->envinst226 } );
                                            ( temp1304.fun ( &temp1304.env ,  (  pane4585 ) ,  (  indent4586 ) ) );
                                            ( (  set_dash_mode1143 ) ( (  pane4585 ) ,  ( Mode_220_Insert ) ) );
                                        } else {
                                            if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_219 *  pane4587 = ( (  pane1134 ) ( (  ed4580 ) ) );
                                                int32_t  indent4588 = ( (  indent_dash_at_dash_line1146 ) ( (  pane4587 ) ,  ( ( ( * (  pane4587 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1311 ) ( (  pane4587 ) ) );
                                                struct envunion1314  temp1313 = ( (struct envunion1314){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                                                ( temp1313.fun ( &temp1313.env ,  (  pane4587 ) ,  ( (  from_dash_charlike1229 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1316  temp1315 = ( (struct envunion1316){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at_dash_current1305 , .env =  env->envinst226 } );
                                                ( temp1315.fun ( &temp1315.env ,  (  pane4587 ) ,  (  indent4588 ) ) );
                                                ( (  set_dash_mode1143 ) ( (  pane4587 ) ,  ( Mode_220_Insert ) ) );
                                            } else {
                                                if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1317 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( MoveDirection_1318_MoveFwd ) ,  ( MoveTarget_1319_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1317 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( MoveDirection_1318_MoveFwd ) ,  ( MoveTarget_1319_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1317 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( MoveDirection_1318_MoveBwd ) ,  ( MoveTarget_1319_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion256  temp1353 = ( (struct envunion256){ .fun = (  enum Unit_8  (*) (  struct env211*  ,    struct Pane_219 *  ) )redo1354 , .env =  env->envinst211 } );
                                                                ( temp1353.fun ( &temp1353.env ,  ( (  pane1134 ) ( (  ed4580 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion255  temp1378 = ( (struct envunion255){ .fun = (  enum Unit_8  (*) (  struct env209*  ,    struct Pane_219 *  ) )undo1379 , .env =  env->envinst209 } );
                                                                    ( temp1378.fun ( &temp1378.env ,  ( (  pane1134 ) ( (  ed4580 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion258  temp1396 = ( (struct envunion258){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Editor_248 *  ) )copy_dash_selection_dash_to_dash_clipboard1397 , .env =  env->envinst233 } );
                                                                        ( temp1396.fun ( &temp1396.env ,  (  ed4580 ) ) );
                                                                        struct envunion259  temp1409 = ( (struct envunion259){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
                                                                        ( temp1409.fun ( &temp1409.env ,  ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( (  selection1398 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( Mode_220_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1418  temp1417 = ( (struct envunion1418){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Editor_248 *  ) )copy_dash_selection_dash_to_dash_clipboard1397 , .env =  env->envinst233 } );
                                                                            ( temp1417.fun ( &temp1417.env ,  (  ed4580 ) ) );
                                                                            struct envunion1420  temp1419 = ( (struct envunion1420){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_231  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
                                                                            ( temp1419.fun ( &temp1419.env ,  ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( (  selection1398 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( Mode_220_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1422  temp1421 = ( (struct envunion1422){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Editor_248 *  ) )copy_dash_selection_dash_to_dash_clipboard1397 , .env =  env->envinst233 } );
                                                                                ( temp1421.fun ( &temp1421.env ,  (  ed4580 ) ) );
                                                                                size_t  bytes_dash_yanked4589 = ( (  num_dash_bytes1130 ) ( ( (  or_dash_else590 ) ( ( ( * (  ed4580 ) ) .f_clipboard ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion261  temp1423 = ( (struct envunion261){ .fun = (  enum Unit_8  (*) (  struct env239*  ,    struct Editor_248 *  ,    struct StrConcat_83  ) )set_dash_msg1424 , .env =  env->envinst239 } );
                                                                                ( temp1423.fun ( &temp1423.env ,  (  ed4580 ) ,  ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4589 ) ) ) ,  ( (  from_dash_string199 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1474 envinst1474 = {
                                                                                        .ed4580 =  ed4580 ,
                                                                                        .envinst213 = env->envinst213 ,
                                                                                    };
                                                                                    ( (  if_dash_just1473 ) ( ( ( * (  ed4580 ) ) .f_clipboard ) ,  ( (struct envunion1476){ .fun = (  enum Unit_8  (*) (  struct env1474*  ,    struct StrView_27  ) )lam1478 , .env =  envinst1474 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1487 envinst1487 = {
                                                                                            .ed4580 =  ed4580 ,
                                                                                            .envinst213 = env->envinst213 ,
                                                                                        };
                                                                                        ( (  if_dash_just1486 ) ( ( ( * (  ed4580 ) ) .f_clipboard ) ,  ( (struct envunion1489){ .fun = (  enum Unit_8  (*) (  struct env1487*  ,    struct StrView_27  ) )lam1491 , .env =  envinst1487 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1496 envinst1496 = {
                                                                                                .ed4580 =  ed4580 ,
                                                                                                .envinst213 = env->envinst213 ,
                                                                                            };
                                                                                            ( (  if_dash_just1495 ) ( ( ( * (  ed4580 ) ) .f_clipboard ) ,  ( (struct envunion1498){ .fun = (  enum Unit_8  (*) (  struct env1496*  ,    struct StrView_27  ) )lam1500 , .env =  envinst1496 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1503 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( Mode_220_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1507 ) ( ( ( ( * (  ed4580 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4580 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4580 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4580 ) .f_mode = ( ( EditorMode_249_Cmd ) ( ( ( * ( (  pane1134 ) ( (  ed4580 ) ) ) ) .f_cursor ) ,  ( (  mk1428 ) ( ( ( * (  ed4580 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4580 ) .f_mode = ( ( EditorMode_249_Search ) ( ( ( * ( (  pane1134 ) ( (  ed4580 ) ) ) ) .f_cursor ) ,  ( (  mk1428 ) ( ( ( * (  ed4580 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1508 ) ( (  ed4580 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1527 ) ( (  ed4580 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion257  temp1536 = ( (struct envunion257){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Pane_219 *  ) )indent_dash_selection1537 , .env =  env->envinst217 } );
                                                                                                                        ( temp1536.fun ( &temp1536.env ,  ( (  pane1134 ) ( (  ed4580 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq936 ( ( dref4583 .stuff .Key_268_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion254  temp1553 = ( (struct envunion254){ .fun = (  enum Unit_8  (*) (  struct env223*  ,    struct Pane_219 *  ) )dedent_dash_selection1554 , .env =  env->envinst223 } );
                                                                                                                            ( temp1553.fun ( &temp1553.env ,  ( (  pane1134 ) ( (  ed4580 ) ) ) ) );
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
        if ( dref4583.tag == Key_268_Escape_t ) {
            ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  ( Mode_220_Normal ) ) );
        }
        else {
            if ( dref4583.tag == Key_268_Ctrl_t ) {
                if ( (  eq936 ( ( dref4583 .stuff .Key_268_Ctrl_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion263  temp1568 = ( (struct envunion263){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_219 *  ) )toggle_dash_comment1569 , .env =  env->envinst228 } );
                    ( temp1568.fun ( &temp1568.env ,  ( (  pane1134 ) ( (  ed4580 ) ) ) ) );
                } else {
                    if ( (  eq936 ( ( dref4583 .stuff .Key_268_Ctrl_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1142 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq936 ( ( dref4583 .stuff .Key_268_Ctrl_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1138 ) ( ( (  pane1134 ) ( (  ed4580 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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

struct envunion1615 {
    enum Unit_8  (*fun) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_268  );
    struct env253 env;
};

struct envunion1617 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  );
    struct env204 env;
};

static  enum Unit_8   backspace1620 (   struct env207* env ,    struct Pane_219 *  self4379 ) {
    struct Pos_26  prev_dash_cur4380 = ( ( * (  self4379 ) ) .f_cursor );
    ( (  move_dash_left1090 ) ( (  self4379 ) ) );
    struct envunion208  temp1621 = ( (struct envunion208){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_105 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    ( temp1621.fun ( &temp1621.env ,  ( ( * (  self4379 ) ) .f_buf ) ,  ( ( * (  self4379 ) ) .f_cursor ) ,  (  prev_dash_cur4380 ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1623 {
    char _arr [1];
};

static  char *   cast1624 (    struct Array_1623 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_950   as_dash_slice1622 (    struct Array_1623 *  arr2330 ) {
    return ( (struct Slice_950) { .f_ptr = ( (  cast1624 ) ( (  arr2330 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1623   from_dash_listlike1626 (    struct Array_1623  self330 ) {
    return (  self330 );
}

struct Scanner_1630 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1630   mk_dash_from_dash_strview1632 (    struct StrView_27  s3258 ) {
    return ( (struct Scanner_1630) { .f_s = (  s3258 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1638 {
    struct StrViewIter_458  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1637 {
    struct TakeWhile_1638  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1637 Map_1637_Map (  struct TakeWhile_1638  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1637 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1637   into_dash_iter1640 (    struct Map_1637  self809 ) {
    return (  self809 );
}

static  struct Maybe_297   next1642 (    struct TakeWhile_1638 *  self994 ) {
    struct Maybe_297  mx995 = ( (  next463 ) ( ( & ( ( * (  self994 ) ) .f_it ) ) ) );
    struct Maybe_297  dref996 = (  mx995 );
    if ( dref996.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref996.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self994 ) ) .f_pred ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1641 (    struct Map_1637 *  dref811 ) {
    struct Maybe_297  dref814 = ( (  next1642 ) ( ( & ( (* dref811 ) .field0 ) ) ) );
    if ( dref814.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref814.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref811 ) .field1 ) ( ( dref814 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1639 (    struct Map_1637  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    size_t  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct Map_1637  it1129 = ( (  into_dash_iter1640 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1130 = ( (  next1641 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_246_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_246_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1643 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1643);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1644;
    return (  temp1644 );
}

static  size_t   lam1645 (    size_t  v1142 ,    size_t  s1144 ) {
    return (  op_dash_add311 ( (  v1142 ) , (  s1144 ) ) );
}

static  size_t   sum1636 (    struct Map_1637  it1140 ) {
    return ( (  reduce1639 ) ( (  it1140 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1645 ) ) );
}

static  struct TakeWhile_1638   into_dash_iter1647 (    struct TakeWhile_1638  self991 ) {
    return (  self991 );
}

static  struct Map_1637   map1646 (    struct TakeWhile_1638  iterable818 ,    size_t (*  fun820 )(    struct Char_65  ) ) {
    struct TakeWhile_1638  it821 = ( (  into_dash_iter1647 ) ( (  iterable818 ) ) );
    return ( ( Map_1637_Map ) ( (  it821 ) ,  (  fun820 ) ) );
}

static  struct TakeWhile_1638   take_dash_while1648 (    struct StrViewIter_458  it1000 ,    bool (*  pred1002 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1638) { .f_it = ( (  into_dash_iter459 ) ( (  it1000 ) ) ) , .f_pred = (  pred1002 ) } );
}

static  size_t   lam1649 (    struct Char_65  c2252 ) {
    return ( (  c2252 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1635 (    struct StrView_27  self2248 ,    bool (*  fun2250 )(    struct Char_65  ) ) {
    size_t  bi2253 = ( (  sum1636 ) ( ( (  map1646 ) ( ( (  take_dash_while1648 ) ( ( (  chars460 ) ( (  self2248 ) ) ) ,  (  fun2250 ) ) ) ,  (  lam1649 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2248 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2253 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1634 (    struct Scanner_1630 *  sc3333 ,    bool (*  fun3335 )(    struct Char_65  ) ) {
    struct StrView_27  s3336 = ( (  take_dash_while1635 ) ( ( ( * (  sc3333 ) ) .f_s ) ,  (  fun3335 ) ) );
    (*  sc3333 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3333 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3336 ) ) ) ) );
    return (  s3336 );
}

static  enum Unit_8   drop_dash_str_dash_while1633 (    struct Scanner_1630 *  sc3339 ,    bool (*  fun3341 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1634 ) ( (  sc3339 ) ,  (  fun3341 ) ) );
    return ( Unit_8_Unit );
}

struct TakeWhile_1654 {
    struct StrViewIter_458  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1653 {
    struct TakeWhile_1654  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1653 Map_1653_Map (  struct TakeWhile_1654  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1653 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1653   into_dash_iter1656 (    struct Map_1653  self809 ) {
    return (  self809 );
}

static  struct Maybe_297   next1658 (    struct TakeWhile_1654 *  self994 ) {
    struct Maybe_297  mx995 = ( (  next463 ) ( ( & ( ( * (  self994 ) ) .f_it ) ) ) );
    struct Maybe_297  dref996 = (  mx995 );
    if ( dref996.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref996.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self994 ) ) .f_pred ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1657 (    struct Map_1653 *  dref811 ) {
    struct Maybe_297  dref814 = ( (  next1658 ) ( ( & ( (* dref811 ) .field0 ) ) ) );
    if ( dref814.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref814.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref811 ) .field1 ) ( ( dref814 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1655 (    struct Map_1653  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    size_t  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct Map_1653  it1129 = ( (  into_dash_iter1656 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1130 = ( (  next1657 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_246_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_246_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1659 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1659);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1660;
    return (  temp1660 );
}

static  size_t   lam1661 (    size_t  v1142 ,    size_t  s1144 ) {
    return (  op_dash_add311 ( (  v1142 ) , (  s1144 ) ) );
}

static  size_t   sum1652 (    struct Map_1653  it1140 ) {
    return ( (  reduce1655 ) ( (  it1140 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1661 ) ) );
}

static  struct TakeWhile_1654   into_dash_iter1663 (    struct TakeWhile_1654  self991 ) {
    return (  self991 );
}

static  struct Map_1653   map1662 (    struct TakeWhile_1654  iterable818 ,    size_t (*  fun820 )(    struct Char_65  ) ) {
    struct TakeWhile_1654  it821 = ( (  into_dash_iter1663 ) ( (  iterable818 ) ) );
    return ( ( Map_1653_Map ) ( (  it821 ) ,  (  fun820 ) ) );
}

static  struct TakeWhile_1654   take_dash_while1664 (    struct StrViewIter_458  it1000 ,    bool (*  pred1002 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1654) { .f_it = ( (  into_dash_iter459 ) ( (  it1000 ) ) ) , .f_pred = (  pred1002 ) } );
}

static  size_t   lam1665 (    struct Char_65  c2252 ) {
    return ( (  c2252 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1651 (    struct StrView_27  self2248 ,    bool (*  fun2250 )(    struct Char_65  ) ) {
    size_t  bi2253 = ( (  sum1652 ) ( ( (  map1662 ) ( ( (  take_dash_while1664 ) ( ( (  chars460 ) ( (  self2248 ) ) ) ,  (  fun2250 ) ) ) ,  (  lam1665 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2248 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2253 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1650 (    struct Scanner_1630 *  sc3333 ,    bool (*  fun3335 )(    struct Char_65  ) ) {
    struct StrView_27  s3336 = ( (  take_dash_while1651 ) ( ( ( * (  sc3333 ) ) .f_s ) ,  (  fun3335 ) ) );
    (*  sc3333 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3333 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3336 ) ) ) ) );
    return (  s3336 );
}

static  bool   is_dash_not_dash_whitespace1666 (    struct Char_65  c2441 ) {
    return ( ! ( (  is_dash_whitespace1340 ) ( (  c2441 ) ) ) );
}

static  struct Maybe_297   head1668 (    struct StrView_27  it1172 ) {
    struct StrViewIter_458  temp1669 = ( (  into_dash_iter461 ) ( (  it1172 ) ) );
    return ( (  next463 ) ( ( &temp1669 ) ) );
}

static  bool   null1667 (    struct StrView_27  it1181 ) {
    struct Maybe_297  dref1182 = ( (  head1668 ) ( (  it1181 ) ) );
    if ( dref1182.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_80   maybe1672 (    struct Maybe_80  x1312 ,    struct Maybe_80 (*  fun1314 )(    struct StrView_27  ) ,    struct Maybe_80  default1316 ) {
    return ( {  struct Maybe_80  dref1317 = (  x1312 ) ; dref1317.tag == Maybe_80_Just_t ? ( (  fun1314 ) ( ( dref1317 .stuff .Maybe_80_Just_s .field0 ) ) ) : (  default1316 ) ; } );
}

static  bool   is_dash_none1673 (    struct Maybe_80  m1294 ) {
    struct Maybe_80  dref1295 = (  m1294 );
    if ( dref1295.tag == Maybe_80_None_t ) {
        return ( true );
    }
    else {
        if ( dref1295.tag == Maybe_80_Just_t ) {
            return ( false );
        }
    }
}

struct StrConcatIter_1682 {
    struct StrViewIter_458  f_left;
    struct AppendIter_1020  f_right;
};

struct env1683 {
    struct StrBuilder_62 *  builder2836;
    struct env60 envinst60;
};

struct envunion1684 {
    enum Unit_8  (*fun) (  struct env1683*  ,    struct Char_65  );
    struct env1683 env;
};

static  struct StrConcatIter_1682   into_dash_iter1686 (    struct StrConcatIter_1682  self1527 ) {
    return (  self1527 );
}

static  struct Maybe_297   next1687 (    struct StrConcatIter_1682 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1681 (    struct StrConcatIter_1682  iterable1104 ,   struct envunion1684  fun1106 ) {
    struct StrConcatIter_1682  temp1685 = ( (  into_dash_iter1686 ) ( (  iterable1104 ) ) );
    struct StrConcatIter_1682 *  it1107 = ( &temp1685 );
    while ( ( true ) ) {
        struct Maybe_297  dref1108 = ( (  next1687 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_297_Just_t ) {
                struct envunion1684  temp1688 = (  fun1106 );
                ( temp1688.fun ( &temp1688.env ,  ( dref1108 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1682   into_dash_iter1690 (    struct StrConcat_71  dref1534 ) {
    return ( (struct StrConcatIter_1682) { .f_left = ( (  chars460 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_1682   chars1689 (    struct StrConcat_71  self1545 ) {
    return ( (  into_dash_iter1690 ) ( (  self1545 ) ) );
}

static  enum Unit_8   lam1691 (   struct env1683* env ,    struct Char_65  c2840 ) {
    struct envunion64  temp1692 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1692.fun ( &temp1692.env ,  ( env->builder2836 ) ,  (  c2840 ) ) );
}

static  enum Unit_8   write1680 (   struct env63* env ,    struct StrBuilder_62 *  builder2836 ,    struct StrConcat_71  s2838 ) {
    struct env1683 envinst1683 = {
        .builder2836 =  builder2836 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1681 ) ( ( (  chars1689 ) ( (  s2838 ) ) ) ,  ( (struct envunion1684){ .fun = (  enum Unit_8  (*) (  struct env1683*  ,    struct Char_65  ) )lam1691 , .env =  envinst1683 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1678 (   struct env69* env ,    struct StrBuilder_62 *  builder2843 ,    struct StrView_27  s2845 ) {
    struct envunion70  temp1679 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  ) )write1680 , .env =  env->envinst63 } );
    return ( temp1679.fun ( &temp1679.env ,  (  builder2843 ) ,  ( ( StrConcat_71_StrConcat ) ( (  s2845 ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1694 (  ) {
    struct StrView_27  temp1695;
    return (  temp1695 );
}

static  struct StrView_27   or_dash_fail1693 (    struct Maybe_80  x1756 ,    struct StrView_27  errmsg1758 ) {
    struct Maybe_80  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_80_None_t ) {
        ( (  panic1212 ) ( (  errmsg1758 ) ) );
        return ( (  undefined1694 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_80_Just_t ) {
            return ( dref1759 .stuff .Maybe_80_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_458   chars1698 (    struct StrBuilder_62  s2888 ) {
    return ( (  into_dash_iter461 ) ( ( (  as_dash_str1470 ) ( ( & (  s2888 ) ) ) ) ) );
}

static  struct StrViewIter_458   chars1697 (    struct StrBuilder_62 *  self1576 ) {
    return ( (  chars1698 ) ( ( * (  self1576 ) ) ) );
}

static  int32_t   fprintf_dash_char1699 (    FILE *  file777 ,    struct Char_65  c779 ) {
    struct CharDestructured_337  dref780 = ( (  destructure339 ) ( (  c779 ) ) );
    if ( dref780.tag == CharDestructured_337_Ref_t ) {
        return ( ( fprintf ) ( (  file777 ) ,  ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32329 ) ( ( ( dref780 .stuff .CharDestructured_337_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref780 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref780.tag == CharDestructured_337_Scalar_t ) {
            if ( (  cmp170 ( ( ( dref780 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) , (  from_dash_integral165 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1700 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp1700);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( ( fprintf ) ( (  file777 ) ,  ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8144 ) ( ( ( dref780 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
}

static  bool   unreachable1701 (  ) {
    ( (  print1346 ) ( ( (  from_dash_string199 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1347 ) ( ) );
}

static  bool   try_dash_write_dash_contents1696 (    const char*  filename3034 ,    struct StrBuilder_62 *  contents3036 ) {
    FILE *  file3037 = ( ( fopen ) ( (  filename3034 ) ,  ( (  from_dash_charlike535 ) ( ( "w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null536 ) ( (  file3037 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_458  it3038 = ( (  chars1697 ) ( (  contents3036 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref3039 = ( (  next463 ) ( ( & (  it3038 ) ) ) );
        if ( dref3039.tag == Maybe_297_None_t ) {
            ( ( fclose ) ( (  file3037 ) ) );
            return ( true );
        }
        else {
            if ( dref3039.tag == Maybe_297_Just_t ) {
                int32_t  chars_dash_written3041 = ( (  fprintf_dash_char1699 ) ( (  file3037 ) ,  ( dref3039 .stuff .Maybe_297_Just_s .field0 ) ) );
                if ( (  cmp157 ( (  chars_dash_written3041 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1701 ) ( ) );
}

static  enum Unit_8   free1702 (    struct StrBuilder_62 *  builder2880 ) {
    ( (  free628 ) ( ( & ( ( * (  builder2880 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1703 (    struct Maybe_80  m1290 ) {
    struct Maybe_80  dref1291 = (  m1290 );
    if ( dref1291.tag == Maybe_80_None_t ) {
        return ( false );
    }
    else {
        if ( dref1291.tag == Maybe_80_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_246   write_dash_to_dash_file1671 (   struct env110* env ,    struct TextBuf_105 *  self3856 ,    struct Maybe_80  altname3858 ) {
    struct Maybe_80  filename3859 = ( (  maybe1672 ) ( (  altname3858 ) ,  ( Maybe_80_Just ) ,  ( ( * (  self3856 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1673 ) ( (  filename3859 ) ) ) ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    enum CAllocator_10  al3860 = ( ( * (  self3856 ) ) .f_al );
    struct StrBuilder_62  temp1674 = ( (  mk1428 ) ( (  al3860 ) ) );
    struct StrBuilder_62 *  sb3861 = ( &temp1674 );
    struct RangeIter_153  temp1675 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1137 ) ( (  self3856 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1676 =  next156 (&temp1675);
        if (  __cond1676 .tag == 0 ) {
            break;
        }
        int32_t  ln3863 =  __cond1676 .stuff .Maybe_155_Just_s .field0;
        struct envunion111  temp1677 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )writeln1678 , .env =  env->envinst69 } );
        ( temp1677.fun ( &temp1677.env ,  (  sb3861 ) ,  ( (  line1097 ) ( (  self3856 ) ,  (  ln3863 ) ) ) ) );
    }
    struct StrView_27  filename03864 = ( (  clone_dash_0505 ) ( ( (  or_dash_fail1693 ) ( (  filename3859 ) ,  ( (  from_dash_string199 ) ( ( "expect filename" ) ,  ( 15 ) ) ) ) ) ,  (  al3860 ) ) );
    bool  result3865 = ( (  try_dash_write_dash_contents1696 ) ( ( (  as_dash_const_dash_str545 ) ( (  filename03864 ) ) ) ,  (  sb3861 ) ) );
    ( (  free547 ) ( (  filename03864 ) ,  (  al3860 ) ) );
    ( (  free1702 ) ( (  sb3861 ) ) );
    if ( ( ! (  result3865 ) ) ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    if ( ( (  is_dash_just1703 ) ( (  altname3858 ) ) ) ) {
        struct Maybe_80  dref3866 = ( ( * (  self3856 ) ) .f_filename );
        if ( dref3866.tag == Maybe_80_Just_t ) {
            ( (  free547 ) ( ( dref3866 .stuff .Maybe_80_Just_s .field0 ) ,  (  al3860 ) ) );
        }
        else {
            if ( dref3866.tag == Maybe_80_None_t ) {
            }
        }
        (*  self3856 ) .f_filename = (  altname3858 );
    }
    return ( ( Maybe_246_Just ) ( ( (  num_dash_bytes1130 ) ( ( (  as_dash_str1470 ) ( (  sb3861 ) ) ) ) ) ) );
}

struct env1712 {
    struct StrBuilder_62 *  builder2836;
    struct env60 envinst60;
};

struct envunion1713 {
    enum Unit_8  (*fun) (  struct env1712*  ,    struct Char_65  );
    struct env1712 env;
};

static  enum Unit_8   for_dash_each1711 (    struct StrViewIter_458  iterable1104 ,   struct envunion1713  fun1106 ) {
    struct StrViewIter_458  temp1714 = ( (  into_dash_iter459 ) ( (  iterable1104 ) ) );
    struct StrViewIter_458 *  it1107 = ( &temp1714 );
    while ( ( true ) ) {
        struct Maybe_297  dref1108 = ( (  next463 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_297_Just_t ) {
                struct envunion1713  temp1715 = (  fun1106 );
                ( temp1715.fun ( &temp1715.env ,  ( dref1108 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1716 (   struct env1712* env ,    struct Char_65  c2840 ) {
    struct envunion64  temp1717 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1717.fun ( &temp1717.env ,  ( env->builder2836 ) ,  (  c2840 ) ) );
}

static  enum Unit_8   write1710 (   struct env66* env ,    struct StrBuilder_62 *  builder2836 ,    struct StrView_27  s2838 ) {
    struct env1712 envinst1712 = {
        .builder2836 =  builder2836 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1711 ) ( ( (  chars460 ) ( (  s2838 ) ) ) ,  ( (struct envunion1713){ .fun = (  enum Unit_8  (*) (  struct env1712*  ,    struct Char_65  ) )lam1716 , .env =  envinst1712 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1707 (   struct env74* env ,    struct StrView_27  s2894 ,    enum CAllocator_10  al2896 ) {
    struct StrBuilder_62  temp1708 = ( (  mk1428 ) ( (  al2896 ) ) );
    struct StrBuilder_62 *  sb2897 = ( &temp1708 );
    struct envunion76  temp1709 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1710 , .env =  env->envinst66 } );
    ( temp1709.fun ( &temp1709.env ,  (  sb2897 ) ,  (  s2894 ) ) );
    struct envunion75  temp1718 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    ( temp1718.fun ( &temp1718.env ,  (  sb2897 ) ,  ( (  nullchar544 ) ( ) ) ) );
    struct StrView_27  dynstr2898 = ( (  as_dash_str1470 ) ( (  sb2897 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2898 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub289 ( ( ( (  dynstr2898 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1705 (   struct env235* env ,    struct Editor_248 *  ed4520 ,    struct StrView_27  s4522 ) {
    ( (  reset_dash_msg1079 ) ( (  ed4520 ) ) );
    struct envunion236  temp1706 = ( (struct envunion236){ .fun = (  struct StrView_27  (*) (  struct env74*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1707 , .env =  env->envinst74 } );
    (*  ed4520 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1706.fun ( &temp1706.env ,  (  s4522 ) ,  ( ( * (  ed4520 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcatIter_1730 {
    struct StrViewIter_458  f_left;
    struct StrViewIter_458  f_right;
};

struct StrConcatIter_1729 {
    struct StrConcatIter_1730  f_left;
    struct AppendIter_1020  f_right;
};

struct StrCaseIter_1728 {
    enum {
        StrCaseIter_1728_StrCaseIter1_t,
        StrCaseIter_1728_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_458  field0;
        } StrCaseIter_1728_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1729  field0;
        } StrCaseIter_1728_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1728 StrCaseIter_1728_StrCaseIter1 (  struct StrViewIter_458  field0 ) {
    return ( struct StrCaseIter_1728 ) { .tag = StrCaseIter_1728_StrCaseIter1_t, .stuff = { .StrCaseIter_1728_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1728 StrCaseIter_1728_StrCaseIter2 (  struct StrConcatIter_1729  field0 ) {
    return ( struct StrCaseIter_1728 ) { .tag = StrCaseIter_1728_StrCaseIter2_t, .stuff = { .StrCaseIter_1728_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1727 {
    struct StrViewIter_458  f_left;
    struct StrCaseIter_1728  f_right;
};

struct env1731 {
    struct StrBuilder_62 *  builder2836;
    struct env60 envinst60;
};

struct envunion1732 {
    enum Unit_8  (*fun) (  struct env1731*  ,    struct Char_65  );
    struct env1731 env;
};

static  struct StrConcatIter_1727   into_dash_iter1734 (    struct StrConcatIter_1727  self1527 ) {
    return (  self1527 );
}

static  struct Maybe_297   next1738 (    struct StrConcatIter_1730 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1737 (    struct StrConcatIter_1729 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next1738 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1736 (    struct StrCaseIter_1728 *  self1552 ) {
    struct StrCaseIter_1728 *  dref1553 = (  self1552 );
    if ( (* dref1553 ).tag == StrCaseIter_1728_StrCaseIter1_t ) {
        return ( (  next463 ) ( ( & ( (* dref1553 ) .stuff .StrCaseIter_1728_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1553 ).tag == StrCaseIter_1728_StrCaseIter2_t ) {
            return ( (  next1737 ) ( ( & ( (* dref1553 ) .stuff .StrCaseIter_1728_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_297   next1735 (    struct StrConcatIter_1727 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1736 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1726 (    struct StrConcatIter_1727  iterable1104 ,   struct envunion1732  fun1106 ) {
    struct StrConcatIter_1727  temp1733 = ( (  into_dash_iter1734 ) ( (  iterable1104 ) ) );
    struct StrConcatIter_1727 *  it1107 = ( &temp1733 );
    while ( ( true ) ) {
        struct Maybe_297  dref1108 = ( (  next1735 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_297_Just_t ) {
                struct envunion1732  temp1739 = (  fun1106 );
                ( temp1739.fun ( &temp1739.env ,  ( dref1108 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrCase_1743 {
    enum {
        StrCase_1743_StrCase1_t,
        StrCase_1743_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_1743_StrCase1_s;
        struct {
            struct StrConcat_669  field0;
        } StrCase_1743_StrCase2_s;
    } stuff;
};

static struct StrCase_1743 StrCase_1743_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_1743 ) { .tag = StrCase_1743_StrCase1_t, .stuff = { .StrCase_1743_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1743 StrCase_1743_StrCase2 (  struct StrConcat_669  field0 ) {
    return ( struct StrCase_1743 ) { .tag = StrCase_1743_StrCase2_t, .stuff = { .StrCase_1743_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1730   into_dash_iter1750 (    struct StrConcat_670  dref1534 ) {
    return ( (struct StrConcatIter_1730) { .f_left = ( (  chars460 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_1730   chars1749 (    struct StrConcat_670  self1545 ) {
    return ( (  into_dash_iter1750 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_1729   into_dash_iter1748 (    struct StrConcat_669  dref1534 ) {
    return ( (struct StrConcatIter_1729) { .f_left = ( (  chars1749 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_1729   chars1747 (    struct StrConcat_669  self1545 ) {
    return ( (  into_dash_iter1748 ) ( (  self1545 ) ) );
}

static  struct StrCaseIter_1728   into_dash_iter1746 (    struct StrCase_1743  self1558 ) {
    struct StrCase_1743  dref1559 = (  self1558 );
    if ( dref1559.tag == StrCase_1743_StrCase1_t ) {
        return ( ( StrCaseIter_1728_StrCaseIter1 ) ( ( (  chars460 ) ( ( dref1559 .stuff .StrCase_1743_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1559.tag == StrCase_1743_StrCase2_t ) {
            return ( ( StrCaseIter_1728_StrCaseIter2 ) ( ( (  chars1747 ) ( ( dref1559 .stuff .StrCase_1743_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1728   chars1745 (    struct StrCase_1743  self1570 ) {
    return ( (  into_dash_iter1746 ) ( (  self1570 ) ) );
}

static  struct StrCaseIter_1728   chars1742 (    struct Maybe_80  self1584 ) {
    struct StrCase_1743  temp1744;
    struct StrCase_1743  c1585 = (  temp1744 );
    struct Maybe_80  dref1586 = (  self1584 );
    if ( dref1586.tag == Maybe_80_None_t ) {
        c1585 = ( ( StrCase_1743_StrCase1 ) ( ( (  from_dash_string199 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1586.tag == Maybe_80_Just_t ) {
            c1585 = ( ( StrCase_1743_StrCase2 ) ( ( ( StrConcat_669_StrConcat ) ( ( ( StrConcat_670_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1586 .stuff .Maybe_80_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1745 ) ( (  c1585 ) ) );
}

static  struct StrConcatIter_1727   into_dash_iter1741 (    struct StrConcat_79  dref1534 ) {
    return ( (struct StrConcatIter_1727) { .f_left = ( (  chars460 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1742 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_1727   chars1740 (    struct StrConcat_79  self1545 ) {
    return ( (  into_dash_iter1741 ) ( (  self1545 ) ) );
}

static  enum Unit_8   lam1751 (   struct env1731* env ,    struct Char_65  c2840 ) {
    struct envunion64  temp1752 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1752.fun ( &temp1752.env ,  ( env->builder2836 ) ,  (  c2840 ) ) );
}

static  enum Unit_8   write1725 (   struct env67* env ,    struct StrBuilder_62 *  builder2836 ,    struct StrConcat_79  s2838 ) {
    struct env1731 envinst1731 = {
        .builder2836 =  builder2836 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1726 ) ( ( (  chars1740 ) ( (  s2838 ) ) ) ,  ( (struct envunion1732){ .fun = (  enum Unit_8  (*) (  struct env1731*  ,    struct Char_65  ) )lam1751 , .env =  envinst1731 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1722 (   struct env77* env ,    struct StrConcat_79  s2894 ,    enum CAllocator_10  al2896 ) {
    struct StrBuilder_62  temp1723 = ( (  mk1428 ) ( (  al2896 ) ) );
    struct StrBuilder_62 *  sb2897 = ( &temp1723 );
    struct envunion78  temp1724 = ( (struct envunion78){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrConcat_79  ) )write1725 , .env =  env->envinst67 } );
    ( temp1724.fun ( &temp1724.env ,  (  sb2897 ) ,  (  s2894 ) ) );
    struct envunion75  temp1753 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    ( temp1753.fun ( &temp1753.env ,  (  sb2897 ) ,  ( (  nullchar544 ) ( ) ) ) );
    struct StrView_27  dynstr2898 = ( (  as_dash_str1470 ) ( (  sb2897 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2898 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub289 ( ( ( (  dynstr2898 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1720 (   struct env237* env ,    struct Editor_248 *  ed4520 ,    struct StrConcat_79  s4522 ) {
    ( (  reset_dash_msg1079 ) ( (  ed4520 ) ) );
    struct envunion238  temp1721 = ( (struct envunion238){ .fun = (  struct StrView_27  (*) (  struct env77*  ,    struct StrConcat_79  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1722 , .env =  env->envinst77 } );
    (*  ed4520 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1721.fun ( &temp1721.env ,  (  s4522 ) ,  ( ( * (  ed4520 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undefined1756 (  ) {
    enum Unit_8  temp1757;
    return (  temp1757 );
}

static  enum Unit_8   todo1755 (  ) {
    ( (  print1346 ) ( ( (  from_dash_string199 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1756 ) ( ) );
}

struct Tuple2_1761 {
    struct Maybe_297  field0;
    struct Maybe_297  field1;
};

static struct Tuple2_1761 Tuple2_1761_Tuple2 (  struct Maybe_297  field0 ,  struct Maybe_297  field1 ) {
    return ( struct Tuple2_1761 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1758 (    struct StrView_27  s2475 ,    struct StrView_27  beg2477 ) {
    struct StrViewIter_458  temp1759 = ( (  chars460 ) ( (  s2475 ) ) );
    struct StrViewIter_458 *  scs2478 = ( &temp1759 );
    struct StrViewIter_458  temp1760 = ( (  chars460 ) ( (  beg2477 ) ) );
    struct StrViewIter_458 *  begcs2479 = ( &temp1760 );
    while ( ( true ) ) {
        struct Tuple2_1761  dref2480 = ( ( Tuple2_1761_Tuple2 ) ( ( (  next463 ) ( (  scs2478 ) ) ) ,  ( (  next463 ) ( (  begcs2479 ) ) ) ) );
        if ( dref2480 .field0.tag == Maybe_297_Just_t && dref2480 .field1.tag == Maybe_297_Just_t ) {
            if ( ( !  eq469 ( ( dref2480 .field0 .stuff .Maybe_297_Just_s .field0 ) , ( dref2480 .field1 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref2480 .field0.tag == Maybe_297_None_t && dref2480 .field1.tag == Maybe_297_Just_t ) {
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

struct SliceAddressIter_1764 {
    struct Slice_15  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_1764   into_dash_iter1765 (    struct SliceAddressIter_1764  self1885 ) {
    return (  self1885 );
}

static  struct SliceAddressIter_1764   addresses1767 (    struct Slice_15  slice1882 ) {
    return ( (struct SliceAddressIter_1764) { .f_slice = (  slice1882 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_15   to_dash_slice1768 (    struct List_14  l2163 ) {
    struct Line_16 *  ptr2164 = ( ( (  l2163 ) .f_elements ) .f_ptr );
    return ( (struct Slice_15) { .f_ptr = (  ptr2164 ) , .f_count = ( (  l2163 ) .f_count ) } );
}

static  struct SliceAddressIter_1764   addresses1766 (    struct List_14  l2167 ) {
    return ( (  addresses1767 ) ( ( (  to_dash_slice1768 ) ( (  l2167 ) ) ) ) );
}

struct Maybe_1770 {
    enum {
        Maybe_1770_None_t,
        Maybe_1770_Just_t,
    } tag;
    union {
        struct {
            struct Line_16 *  field0;
        } Maybe_1770_Just_s;
    } stuff;
};

static struct Maybe_1770 Maybe_1770_Just (  struct Line_16 *  field0 ) {
    return ( struct Maybe_1770 ) { .tag = Maybe_1770_Just_t, .stuff = { .Maybe_1770_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1770   next1771 (    struct SliceAddressIter_1764 *  self1888 ) {
    size_t  off1889 = ( ( * (  self1888 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1889 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1888 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1770) { .tag = Maybe_1770_None_t } );
    }
    struct Line_16 *  elem1890 = ( (  offset_dash_ptr391 ) ( ( ( ( * (  self1888 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1889 ) ) ) ) );
    (*  self1888 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1889 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1770_Just ) ( (  elem1890 ) ) );
}

static  enum Unit_8   set_dash_filetype1762 (    struct TextBuf_105 *  self3987 ,    enum Filetype_108  type3989 ) {
    (*  self3987 ) .f_filetype = (  type3989 );
    struct SliceAddressIter_1764  temp1763 =  into_dash_iter1765 ( ( (  addresses1766 ) ( ( ( * (  self3987 ) ) .f_buf ) ) ) );
    while (true) {
        struct Maybe_1770  __cond1769 =  next1771 (&temp1763);
        if (  __cond1769 .tag == 0 ) {
            break;
        }
        struct Line_16 *  line3991 =  __cond1769 .stuff .Maybe_1770_Just_s .field0;
        (*  line3991 ) .f_invalidated = ( true );
    }
    return ( Unit_8_Unit );
}

struct envunion1773 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env235 env;
};

struct env1776 {
    bool (*  fun1156 )(    struct Char_65  );
};

struct envunion1777 {
    bool  (*fun) (  struct env1776*  ,    struct Char_65  ,    bool  );
    struct env1776 env;
};

static  bool   reduce1775 (    struct StrView_27  iterable1123 ,    bool  base1125 ,   struct envunion1777  fun1127 ) {
    bool  x1128 = (  base1125 );
    struct StrViewIter_458  it1129 = ( (  into_dash_iter461 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1130 = ( (  next463 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_297_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_297_Just_t ) {
                struct envunion1777  temp1778 = (  fun1127 );
                x1128 = ( temp1778.fun ( &temp1778.env ,  ( dref1130 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1779 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1779);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1780;
    return (  temp1780 );
}

static  bool   lam1781 (   struct env1776* env ,    struct Char_65  e1158 ,    bool  x1160 ) {
    return ( ( ( env->fun1156 ) ( (  e1158 ) ) ) && (  x1160 ) );
}

static  bool   all1774 (    struct StrView_27  it1154 ,    bool (*  fun1156 )(    struct Char_65  ) ) {
    struct env1776 envinst1776 = {
        .fun1156 =  fun1156 ,
    };
    return ( (  reduce1775 ) ( (  it1154 ) ,  ( true ) ,  ( (struct envunion1777){ .fun = (  bool  (*) (  struct env1776*  ,    struct Char_65  ,    bool  ) )lam1781 , .env =  envinst1776 } ) ) );
}

struct envunion1783 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env235 env;
};

static  enum Unit_8   run_dash_cmd1629 (   struct env244* env ,    struct Editor_248 *  ed4539 ,    struct StrView_27  s4541 ) {
    struct Scanner_1630  temp1631 = ( (  mk_dash_from_dash_strview1632 ) ( (  s4541 ) ) );
    struct Scanner_1630 *  sc4542 = ( &temp1631 );
    ( (  drop_dash_str_dash_while1633 ) ( (  sc4542 ) ,  (  is_dash_whitespace1340 ) ) );
    struct StrView_27  cmd4543 = ( (  take_dash_str_dash_while1650 ) ( (  sc4542 ) ,  (  is_dash_not_dash_whitespace1666 ) ) );
    ( (  drop_dash_str_dash_while1633 ) ( (  sc4542 ) ,  (  is_dash_whitespace1340 ) ) );
    if ( (  eq485 ( (  cmd4543 ) , ( (  from_dash_charlike1229 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4539 ) .f_running = ( false );
    } else {
        if ( (  eq485 ( (  cmd4543 ) , ( (  from_dash_string199 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq485 ( (  cmd4543 ) , ( (  from_dash_charlike1229 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4544 = ( (  take_dash_str_dash_while1650 ) ( (  sc4542 ) ,  (  is_dash_not_dash_whitespace1666 ) ) );
                struct Maybe_80  filename4545 = ( ( (  null1667 ) ( (  filename4544 ) ) ) ? ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) : ( ( Maybe_80_Just ) ( (  filename4544 ) ) ) );
                struct envunion245  temp1670 = ( (struct envunion245){ .fun = (  struct Maybe_246  (*) (  struct env110*  ,    struct TextBuf_105 *  ,    struct Maybe_80  ) )write_dash_to_dash_file1671 , .env =  env->envinst110 } );
                struct Maybe_246  write_dash_result4546 = ( temp1670.fun ( &temp1670.env ,  ( ( * ( (  pane1134 ) ( (  ed4539 ) ) ) ) .f_buf ) ,  (  filename4545 ) ) );
                struct Maybe_246  dref4547 = (  write_dash_result4546 );
                if ( dref4547.tag == Maybe_246_None_t ) {
                    if ( ( (  is_dash_none1673 ) ( (  filename4545 ) ) ) ) {
                        struct envunion247  temp1704 = ( (struct envunion247){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  ) )set_dash_msg1705 , .env =  env->envinst235 } );
                        ( temp1704.fun ( &temp1704.env ,  (  ed4539 ) ,  ( (  from_dash_string199 ) ( ( "could not save changes (!?)" ) ,  ( 27 ) ) ) ) );
                    } else {
                        struct envunion251  temp1719 = ( (struct envunion251){ .fun = (  enum Unit_8  (*) (  struct env237*  ,    struct Editor_248 *  ,    struct StrConcat_79  ) )set_dash_msg1720 , .env =  env->envinst237 } );
                        ( temp1719.fun ( &temp1719.env ,  (  ed4539 ) ,  ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string199 ) ( ( "could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4545 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4547.tag == Maybe_246_Just_t ) {
                        struct envunion252  temp1754 = ( (struct envunion252){ .fun = (  enum Unit_8  (*) (  struct env239*  ,    struct Editor_248 *  ,    struct StrConcat_83  ) )set_dash_msg1424 , .env =  env->envinst239 } );
                        ( temp1754.fun ( &temp1754.env ,  (  ed4539 ) ,  ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "written " ) ,  ( 8 ) ) ) ,  ( dref4547 .stuff .Maybe_246_Just_s .field0 ) ) ) ,  ( (  from_dash_string199 ) ( ( " bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq485 ( (  cmd4543 ) , ( (  from_dash_charlike1229 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1755 ) ( ) );
                } else {
                    if ( (  eq485 ( (  cmd4543 ) , ( (  from_dash_string199 ) ( ( "ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_27  what4549 = ( (  take_dash_str_dash_while1650 ) ( (  sc4542 ) ,  (  is_dash_not_dash_whitespace1666 ) ) );
                        if ( (  eq485 ( (  what4549 ) , ( (  from_dash_string199 ) ( ( "on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed4539 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq485 ( (  what4549 ) , ( (  from_dash_string199 ) ( ( "off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed4539 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp290 ( ( (  count1104 ) ( ( (  chars460 ) ( (  what4549 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1758 ) ( ( (  from_dash_string199 ) ( ( "absolute" ) ,  ( 8 ) ) ) ,  (  what4549 ) ) ) ) ) {
                                    (* (*  ed4539 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp290 ( ( (  count1104 ) ( ( (  chars460 ) ( (  what4549 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1758 ) ( ( (  from_dash_string199 ) ( ( "relative" ) ,  ( 8 ) ) ) ,  (  what4549 ) ) ) ) ) {
                                        (* (*  ed4539 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq485 ( (  cmd4543 ) , ( (  from_dash_string199 ) ( ( "ft" ) ,  ( 2 ) ) ) ) ) ) {
                            struct StrView_27  type4550 = ( (  take_dash_str_dash_while1650 ) ( (  sc4542 ) ,  (  is_dash_not_dash_whitespace1666 ) ) );
                            struct TextBuf_105 *  tb4551 = ( ( * ( (  pane1134 ) ( (  ed4539 ) ) ) ) .f_buf );
                            if ( (  eq485 ( (  type4550 ) , ( (  from_dash_string199 ) ( ( "text" ) ,  ( 4 ) ) ) ) ) ) {
                                ( (  set_dash_filetype1762 ) ( (  tb4551 ) ,  ( Filetype_108_Text ) ) );
                            } else {
                                if ( (  eq485 ( (  type4550 ) , ( (  from_dash_string199 ) ( ( "kc" ) ,  ( 2 ) ) ) ) ) ) {
                                    ( (  set_dash_filetype1762 ) ( (  tb4551 ) ,  ( Filetype_108_KC ) ) );
                                } else {
                                    if ( (  eq485 ( (  type4550 ) , ( (  from_dash_string199 ) ( ( "md" ) ,  ( 2 ) ) ) ) ) ) {
                                        ( (  set_dash_filetype1762 ) ( (  tb4551 ) ,  ( Filetype_108_Markdown ) ) );
                                    } else {
                                        struct envunion1773  temp1772 = ( (struct envunion1773){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  ) )set_dash_msg1705 , .env =  env->envinst235 } );
                                        ( temp1772.fun ( &temp1772.env ,  (  ed4539 ) ,  ( (  from_dash_string199 ) ( ( "unknown file type" ) ,  ( 17 ) ) ) ) );
                                    }
                                }
                            }
                        } else {
                            if ( (  eq485 ( (  cmd4543 ) , ( (  from_dash_string199 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                            } else {
                                if ( ( (  all1774 ) ( (  cmd4543 ) ,  (  is_dash_digit973 ) ) ) ) {
                                } else {
                                    struct envunion1783  temp1782 = ( (struct envunion1783){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  ) )set_dash_msg1705 , .env =  env->envinst235 } );
                                    ( temp1782.fun ( &temp1782.env ,  (  ed4539 ) ,  ( (  from_dash_string199 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
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

static  struct Char_65   ascii_dash_char1785 (    char  c795 ) {
    return ( (  from_dash_u81039 ) ( ( (  ascii_dash_u8481 ) ( (  c795 ) ) ) ) );
}

static  struct Maybe_967   reduce1789 (    struct StrViewIter_458  iterable1123 ,    struct Maybe_967  base1125 ,    struct Maybe_967 (*  fun1127 )(    struct Char_65  ,    struct Maybe_967  ) ) {
    struct Maybe_967  x1128 = (  base1125 );
    struct StrViewIter_458  it1129 = ( (  into_dash_iter459 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1130 = ( (  next463 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_297_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_297_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1790 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1790);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_967  temp1791;
    return (  temp1791 );
}

static  struct Maybe_967   sequence_dash_maybe1792 (    struct Char_65  e2548 ,    struct Maybe_967  b2550 ) {
    struct Maybe_967  dref2551 = (  b2550 );
    if ( dref2551.tag == Maybe_967_None_t ) {
        return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
    }
    else {
        if ( dref2551.tag == Maybe_967_Just_t ) {
            struct Maybe_155  dref2553 = ( (  parse_dash_digit998 ) ( (  e2548 ) ) );
            if ( dref2553.tag == Maybe_155_None_t ) {
                return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
            }
            else {
                if ( dref2553.tag == Maybe_155_Just_t ) {
                    return ( ( Maybe_967_Just ) ( (  op_dash_add471 ( (  op_dash_mul286 ( ( dref2551 .stuff .Maybe_967_Just_s .field0 ) , (  from_dash_integral288 ( 10 ) ) ) ) , ( (  i32_dash_i641007 ) ( ( dref2553 .stuff .Maybe_155_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_967   parse_dash_int1788 (    struct StrView_27  s2545 ) {
    struct StrViewIter_458  cs2555 = ( (  chars460 ) ( (  s2545 ) ) );
    struct Maybe_297  dref2556 = ( (  head1343 ) ( (  cs2555 ) ) );
    if ( dref2556.tag == Maybe_297_Just_t ) {
        return ( (  reduce1789 ) ( (  cs2555 ) ,  ( ( Maybe_967_Just ) ( (  from_dash_integral288 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1792 ) ) );
    }
    else {
        if ( dref2556.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
        }
    }
}

struct TakeWhile_1798 {
    struct StrViewIter_458  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1797 {
    struct TakeWhile_1798  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1797 Map_1797_Map (  struct TakeWhile_1798  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1797 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1797   into_dash_iter1800 (    struct Map_1797  self809 ) {
    return (  self809 );
}

static  struct Maybe_297   next1802 (    struct TakeWhile_1798 *  self994 ) {
    struct Maybe_297  mx995 = ( (  next463 ) ( ( & ( ( * (  self994 ) ) .f_it ) ) ) );
    struct Maybe_297  dref996 = (  mx995 );
    if ( dref996.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref996.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self994 ) ) .f_pred ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1801 (    struct Map_1797 *  dref811 ) {
    struct Maybe_297  dref814 = ( (  next1802 ) ( ( & ( (* dref811 ) .field0 ) ) ) );
    if ( dref814.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref814.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref811 ) .field1 ) ( ( dref814 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1799 (    struct Map_1797  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    size_t  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct Map_1797  it1129 = ( (  into_dash_iter1800 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1130 = ( (  next1801 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_246_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_246_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1803 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1803);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1804;
    return (  temp1804 );
}

static  size_t   lam1805 (    size_t  v1142 ,    size_t  s1144 ) {
    return (  op_dash_add311 ( (  v1142 ) , (  s1144 ) ) );
}

static  size_t   sum1796 (    struct Map_1797  it1140 ) {
    return ( (  reduce1799 ) ( (  it1140 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1805 ) ) );
}

static  struct TakeWhile_1798   into_dash_iter1807 (    struct TakeWhile_1798  self991 ) {
    return (  self991 );
}

static  struct Map_1797   map1806 (    struct TakeWhile_1798  iterable818 ,    size_t (*  fun820 )(    struct Char_65  ) ) {
    struct TakeWhile_1798  it821 = ( (  into_dash_iter1807 ) ( (  iterable818 ) ) );
    return ( ( Map_1797_Map ) ( (  it821 ) ,  (  fun820 ) ) );
}

static  struct TakeWhile_1798   take_dash_while1808 (    struct StrViewIter_458  it1000 ,    bool (*  pred1002 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1798) { .f_it = ( (  into_dash_iter459 ) ( (  it1000 ) ) ) , .f_pred = (  pred1002 ) } );
}

static  size_t   lam1809 (    struct Char_65  c2252 ) {
    return ( (  c2252 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1795 (    struct StrView_27  self2248 ,    bool (*  fun2250 )(    struct Char_65  ) ) {
    size_t  bi2253 = ( (  sum1796 ) ( ( (  map1806 ) ( ( (  take_dash_while1808 ) ( ( (  chars460 ) ( (  self2248 ) ) ) ,  (  fun2250 ) ) ) ,  (  lam1809 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2248 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2253 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1794 (    struct Scanner_1630 *  sc3333 ,    bool (*  fun3335 )(    struct Char_65  ) ) {
    struct StrView_27  s3336 = ( (  take_dash_while1795 ) ( ( ( * (  sc3333 ) ) .f_s ) ,  (  fun3335 ) ) );
    (*  sc3333 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3333 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3336 ) ) ) ) );
    return (  s3336 );
}

struct TakeWhile_1814 {
    struct StrViewIter_458  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1813 {
    struct TakeWhile_1814  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1813 Map_1813_Map (  struct TakeWhile_1814  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1813 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1813   into_dash_iter1816 (    struct Map_1813  self809 ) {
    return (  self809 );
}

static  struct Maybe_297   next1818 (    struct TakeWhile_1814 *  self994 ) {
    struct Maybe_297  mx995 = ( (  next463 ) ( ( & ( ( * (  self994 ) ) .f_it ) ) ) );
    struct Maybe_297  dref996 = (  mx995 );
    if ( dref996.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref996.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self994 ) ) .f_pred ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref996 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1817 (    struct Map_1813 *  dref811 ) {
    struct Maybe_297  dref814 = ( (  next1818 ) ( ( & ( (* dref811 ) .field0 ) ) ) );
    if ( dref814.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref814.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref811 ) .field1 ) ( ( dref814 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1815 (    struct Map_1813  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    size_t  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct Map_1813  it1129 = ( (  into_dash_iter1816 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1130 = ( (  next1817 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_246_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_246_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1819 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1819);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1820;
    return (  temp1820 );
}

static  size_t   lam1821 (    size_t  v1142 ,    size_t  s1144 ) {
    return (  op_dash_add311 ( (  v1142 ) , (  s1144 ) ) );
}

static  size_t   sum1812 (    struct Map_1813  it1140 ) {
    return ( (  reduce1815 ) ( (  it1140 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1821 ) ) );
}

static  struct TakeWhile_1814   into_dash_iter1823 (    struct TakeWhile_1814  self991 ) {
    return (  self991 );
}

static  struct Map_1813   map1822 (    struct TakeWhile_1814  iterable818 ,    size_t (*  fun820 )(    struct Char_65  ) ) {
    struct TakeWhile_1814  it821 = ( (  into_dash_iter1823 ) ( (  iterable818 ) ) );
    return ( ( Map_1813_Map ) ( (  it821 ) ,  (  fun820 ) ) );
}

static  struct TakeWhile_1814   take_dash_while1824 (    struct StrViewIter_458  it1000 ,    bool (*  pred1002 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1814) { .f_it = ( (  into_dash_iter459 ) ( (  it1000 ) ) ) , .f_pred = (  pred1002 ) } );
}

static  size_t   lam1825 (    struct Char_65  c2252 ) {
    return ( (  c2252 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1811 (    struct StrView_27  self2248 ,    bool (*  fun2250 )(    struct Char_65  ) ) {
    size_t  bi2253 = ( (  sum1812 ) ( ( (  map1822 ) ( ( (  take_dash_while1824 ) ( ( (  chars460 ) ( (  self2248 ) ) ) ,  (  fun2250 ) ) ) ,  (  lam1825 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2248 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2253 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1810 (    struct Scanner_1630 *  sc3333 ,    bool (*  fun3335 )(    struct Char_65  ) ) {
    struct StrView_27  s3336 = ( (  take_dash_while1811 ) ( ( ( * (  sc3333 ) ) .f_s ) ,  (  fun3335 ) ) );
    (*  sc3333 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3333 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3336 ) ) ) ) );
    return (  s3336 );
}

static  bool   lam1826 (    struct Char_65  c4535 ) {
    return ( ! ( (  is_dash_whitespace1340 ) ( (  c4535 ) ) ) );
}

static  struct Theme_172 *   or_dash_else1827 (    struct Maybe_243  self1763 ,    struct Theme_172 *  alt1765 ) {
    struct Maybe_243  dref1766 = (  self1763 );
    if ( dref1766.tag == Maybe_243_None_t ) {
        return (  alt1765 );
    }
    else {
        if ( dref1766.tag == Maybe_243_Just_t ) {
            return ( dref1766 .stuff .Maybe_243_Just_s .field0 );
        }
    }
}

struct SliceIter_1833 {
    struct Slice_192  f_slice;
    size_t  f_current_dash_offset;
};

struct env1834 {
    struct StrView_27  name4098;
    ;
};

struct envunion1835 {
    bool  (*fun) (  struct env1834*  ,    struct Tuple2_193  );
    struct env1834 env;
};

struct Filter_1832 {
    struct SliceIter_1833  f_og;
    struct envunion1835  f_fun;
};

struct Map_1831 {
    struct Filter_1832  field0;
    struct Theme_172 * (*  field1 )(    struct Tuple2_193  );
};

static struct Map_1831 Map_1831_Map (  struct Filter_1832  field0 ,  struct Theme_172 * (*  field1 )(    struct Tuple2_193  ) ) {
    return ( struct Map_1831 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1837 {
    enum {
        Maybe_1837_None_t,
        Maybe_1837_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_193  field0;
        } Maybe_1837_Just_s;
    } stuff;
};

static struct Maybe_1837 Maybe_1837_Just (  struct Tuple2_193  field0 ) {
    return ( struct Maybe_1837 ) { .tag = Maybe_1837_Just_t, .stuff = { .Maybe_1837_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_193 *   offset_dash_ptr1840 (    struct Tuple2_193 *  x338 ,    int64_t  count340 ) {
    struct Tuple2_193  temp1841;
    return ( (struct Tuple2_193 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1841 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1837   next1839 (    struct SliceIter_1833 *  self1870 ) {
    size_t  off1871 = ( ( * (  self1870 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1870 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1837) { .tag = Maybe_1837_None_t } );
    }
    struct Tuple2_193  elem1872 = ( * ( (  offset_dash_ptr1840 ) ( ( ( ( * (  self1870 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1871 ) ) ) ) ) );
    (*  self1870 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1837_Just ) ( (  elem1872 ) ) );
}

static  struct Maybe_1837   next1838 (    struct Filter_1832 *  self846 ) {
    while ( ( true ) ) {
        struct Maybe_1837  dref847 = ( (  next1839 ) ( ( & ( ( * (  self846 ) ) .f_og ) ) ) );
        if ( dref847.tag == Maybe_1837_None_t ) {
            return ( (struct Maybe_1837) { .tag = Maybe_1837_None_t } );
        }
        else {
            if ( dref847.tag == Maybe_1837_Just_t ) {
                struct envunion1835  temp1842 = ( ( * (  self846 ) ) .f_fun );
                if ( ( temp1842.fun ( &temp1842.env ,  ( dref847 .stuff .Maybe_1837_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1837_Just ) ( ( dref847 .stuff .Maybe_1837_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1837  temp1843;
    return (  temp1843 );
}

static  struct Maybe_243   next1836 (    struct Map_1831 *  dref811 ) {
    struct Maybe_1837  dref814 = ( (  next1838 ) ( ( & ( (* dref811 ) .field0 ) ) ) );
    if ( dref814.tag == Maybe_1837_None_t ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    else {
        if ( dref814.tag == Maybe_1837_Just_t ) {
            return ( ( Maybe_243_Just ) ( ( ( (* dref811 ) .field1 ) ( ( dref814 .stuff .Maybe_1837_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1831   into_dash_iter1845 (    struct Map_1831  self809 ) {
    return (  self809 );
}

static  struct Maybe_243   head1830 (    struct Map_1831  it1172 ) {
    struct Map_1831  temp1844 = ( (  into_dash_iter1845 ) ( (  it1172 ) ) );
    return ( (  next1836 ) ( ( &temp1844 ) ) );
}

static  struct Filter_1832   into_dash_iter1847 (    struct Filter_1832  self843 ) {
    return (  self843 );
}

static  struct Map_1831   map1846 (    struct Filter_1832  iterable818 ,    struct Theme_172 * (*  fun820 )(    struct Tuple2_193  ) ) {
    struct Filter_1832  it821 = ( (  into_dash_iter1847 ) ( (  iterable818 ) ) );
    return ( ( Map_1831_Map ) ( (  it821 ) ,  (  fun820 ) ) );
}

static  struct SliceIter_1833   into_dash_iter1849 (    struct Slice_192  self1864 ) {
    return ( (struct SliceIter_1833) { .f_slice = (  self1864 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1832   filter1848 (    struct Slice_192  iterable851 ,   struct envunion1835  fun853 ) {
    struct SliceIter_1833  it854 = ( (  into_dash_iter1849 ) ( (  iterable851 ) ) );
    return ( (struct Filter_1832) { .f_og = (  it854 ) , .f_fun = (  fun853 ) } );
}

static  bool   lam1850 (   struct env1834* env ,    struct Tuple2_193  dref4099 ) {
    return ( (  begins_dash_with1758 ) ( ( dref4099 .field0 ) ,  ( env->name4098 ) ) );
}

static  struct Theme_172 *   snd1851 (    struct Tuple2_193  dref1286 ) {
    return ( dref1286 .field1 );
}

static  struct Maybe_243   match_dash_theme1829 (   struct env200* env ,    struct StrView_27  name4098 ) {
    if ( ( (  null1667 ) ( (  name4098 ) ) ) ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    struct env1834 envinst1834 = {
        .name4098 =  name4098 ,
    };
    return ( (  head1830 ) ( ( (  map1846 ) ( ( (  filter1848 ) ( ( env->all_dash_themes4095 ) ,  ( (struct envunion1835){ .fun = (  bool  (*) (  struct env1834*  ,    struct Tuple2_193  ) )lam1850 , .env =  envinst1834 } ) ) ) ,  (  snd1851 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1787 (   struct env241* env ,    struct Editor_248 *  ed4525 ,    struct StrView_27  cmd4527 ) {
    struct Maybe_967  dref4528 = ( (  parse_dash_int1788 ) ( (  cmd4527 ) ) );
    if ( dref4528.tag == Maybe_967_Just_t ) {
        int32_t  line4530 = ( (  clamp1482 ) ( ( (  i64_dash_i321009 ) ( ( dref4528 .stuff .Maybe_967_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (  num_dash_lines1137 ) ( ( ( * ( (  pane1134 ) ( (  ed4525 ) ) ) ) .f_buf ) ) ) ) );
        int32_t  line4531 = (  op_dash_sub164 ( (  line4530 ) , (  from_dash_integral56 ( 1 ) ) ) );
        ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4525 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4531 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    }
    else {
        if ( dref4528.tag == Maybe_967_None_t ) {
            struct Scanner_1630  temp1793 = ( (  mk_dash_from_dash_strview1632 ) ( (  cmd4527 ) ) );
            struct Scanner_1630 *  sc4532 = ( &temp1793 );
            struct StrView_27  cmd4533 = ( (  take_dash_str_dash_while1794 ) ( (  sc4532 ) ,  (  is_dash_alpha1335 ) ) );
            if ( (  eq485 ( (  cmd4533 ) , ( (  from_dash_string199 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1633 ) ( (  sc4532 ) ,  (  is_dash_whitespace1340 ) ) );
                struct StrView_27  theme_dash_name4536 = ( (  take_dash_str_dash_while1810 ) ( (  sc4532 ) ,  (  lam1826 ) ) );
                struct envunion242  temp1828 = ( (struct envunion242){ .fun = (  struct Maybe_243  (*) (  struct env200*  ,    struct StrView_27  ) )match_dash_theme1829 , .env =  env->envinst200 } );
                (* (*  ed4525 ) .f_cfg ) .f_theme = ( (  or_dash_else1827 ) ( ( temp1828.fun ( &temp1828.env ,  (  theme_dash_name4536 ) ) ) ,  ( ( * (  ed4525 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_458   into_dash_iter1855 (    struct StrBuilder_62  self2891 ) {
    return ( (  chars1698 ) ( (  self2891 ) ) );
}

static  struct Maybe_297   head1853 (    struct StrBuilder_62  it1172 ) {
    struct StrViewIter_458  temp1854 = ( (  into_dash_iter1855 ) ( (  it1172 ) ) );
    return ( (  next463 ) ( ( &temp1854 ) ) );
}

static  bool   null1852 (    struct StrBuilder_62  it1181 ) {
    struct Maybe_297  dref1182 = ( (  head1853 ) ( (  it1181 ) ) );
    if ( dref1182.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1861 (   struct env42* env ,    struct List_9 *  list2113 ,    size_t  i2115 ) {
    struct envunion43  temp1862 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range631 , .env =  env->envinst40 } );
    ( temp1862.fun ( &temp1862.env ,  (  list2113 ) ,  (  i2115 ) ,  (  op_dash_add311 ( (  i2115 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1859 (   struct env44* env ,    struct List_9 *  list2129 ) {
    if ( (  eq399 ( ( ( * (  list2129 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1860 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_9 *  ,    size_t  ) )remove1861 , .env =  env->envinst42 } );
    return ( temp1860.fun ( &temp1860.env ,  (  list2129 ) ,  (  op_dash_sub289 ( ( ( * (  list2129 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1857 (   struct env72* env ,    struct StrBuilder_62 *  sb2854 ) {
    struct envunion73  temp1858 = ( (struct envunion73){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_9 *  ) )pop1859 , .env =  env->envinst44 } );
    return ( temp1858.fun ( &temp1858.env ,  ( & ( ( * (  sb2854 ) ) .f_chars ) ) ) );
}

struct envunion1864 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env241 env;
};

struct env1866 {
    ;
    struct Editor_248 *  ed4607;
};

struct envunion1867 {
    enum Unit_8  (*fun) (  struct env1866*  ,    struct StrView_27  );
    struct env1866 env;
};

static  enum Unit_8   if_dash_just1865 (    struct Maybe_80  x1321 ,   struct envunion1867  fun1323 ) {
    struct Maybe_80  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_80_Just_t ) {
        struct envunion1867  temp1868 = (  fun1323 );
        ( temp1868.fun ( &temp1868.env ,  ( dref1324 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1869 (   struct env1866* env ,    struct StrView_27  st4624 ) {
    ( (  free547 ) ( (  st4624 ) ,  ( ( * ( env->ed4607 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1871 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  enum Unit_8   live_dash_search1872 (    struct Editor_248 *  ed4554 ,    struct Pos_26  begin_dash_pos4556 ,    struct StrView_27  query4558 ) {
    if ( ( ! ( (  null1667 ) ( (  query4558 ) ) ) ) ) {
        struct Maybe_1509  dref4559 = ( (  search_dash_from1510 ) ( ( (  pane1134 ) ( (  ed4554 ) ) ) ,  (  begin_dash_pos4556 ) ,  (  query4558 ) ) );
        if ( dref4559.tag == Maybe_1509_Just_t ) {
            ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4554 ) ) ) ,  ( dref4559 .stuff .Maybe_1509_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4559 .stuff .Maybe_1509_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1092_NoChanges ) ) );
        }
        else {
            if ( dref4559.tag == Maybe_1509_None_t ) {
                ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4554 ) ) ) ,  (  begin_dash_pos4556 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4554 ) ) ) ,  (  begin_dash_pos4556 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1874 {
    enum Unit_8  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

static  enum Unit_8   handle_dash_key1087 (   struct env264* env ,    struct Editor_248 *  ed4607 ,    struct Key_268  key4609 ) {
    struct EditorMode_249 *  dref4610 = ( & ( ( * (  ed4607 ) ) .f_mode ) );
    if ( (* dref4610 ).tag == EditorMode_249_Normal_t ) {
        enum Mode_220  dref4611 = ( ( ( * (  ed4607 ) ) .f_pane ) .f_mode );
        switch (  dref4611 ) {
            case Mode_220_Normal : {
                struct envunion267  temp1088 = ( (struct envunion267){ .fun = (  enum Unit_8  (*) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_268  ) )handle_dash_normal_dash_key1089 , .env =  env->envinst253 } );
                ( temp1088.fun ( &temp1088.env ,  (  ed4607 ) ,  (  key4609 ) ) );
                break;
            }
            case Mode_220_Select : {
                struct envunion1615  temp1614 = ( (struct envunion1615){ .fun = (  enum Unit_8  (*) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_268  ) )handle_dash_normal_dash_key1089 , .env =  env->envinst253 } );
                ( temp1614.fun ( &temp1614.env ,  (  ed4607 ) ,  (  key4609 ) ) );
                break;
            }
            case Mode_220_Insert : {
                struct Key_268  dref4612 = (  key4609 );
                if ( dref4612.tag == Key_268_Escape_t ) {
                    ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4607 ) ) ) ,  ( Mode_220_Normal ) ) );
                }
                else {
                    if ( dref4612.tag == Key_268_Enter_t ) {
                        int32_t  indent4613 = ( (  indent_dash_at_dash_line1146 ) ( ( (  pane1134 ) ( (  ed4607 ) ) ) ,  ( ( ( * ( (  pane1134 ) ( (  ed4607 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion1617  temp1616 = ( (struct envunion1617){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                        ( temp1616.fun ( &temp1616.env ,  ( (  pane1134 ) ( (  ed4607 ) ) ) ,  ( (  from_dash_charlike1229 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1135 ) ( ( (  pane1134 ) ( (  ed4607 ) ) ) ) );
                        struct envunion270  temp1618 = ( (struct envunion270){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at_dash_current1305 , .env =  env->envinst226 } );
                        ( temp1618.fun ( &temp1618.env ,  ( (  pane1134 ) ( (  ed4607 ) ) ) ,  (  indent4613 ) ) );
                    }
                    else {
                        if ( dref4612.tag == Key_268_Backspace_t ) {
                            struct envunion266  temp1619 = ( (struct envunion266){ .fun = (  enum Unit_8  (*) (  struct env207*  ,    struct Pane_219 *  ) )backspace1620 , .env =  env->envinst207 } );
                            ( temp1619.fun ( &temp1619.env ,  ( (  pane1134 ) ( (  ed4607 ) ) ) ) );
                        }
                        else {
                            if ( dref4612.tag == Key_268_Char_t ) {
                                struct Array_1623  temp1625 = ( (  from_dash_listlike1626 ) ( ( (struct Array_1623) { ._arr = { ( dref4612 .stuff .Key_268_Char_s .field0 ) } } ) ) );
                                struct StrView_27  s4615 = ( (  from_dash_ascii_dash_slice964 ) ( ( (  as_dash_slice1622 ) ( ( &temp1625 ) ) ) ) );
                                struct envunion273  temp1627 = ( (struct envunion273){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                                ( temp1627.fun ( &temp1627.env ,  ( (  pane1134 ) ( (  ed4607 ) ) ) ,  (  s4615 ) ) );
                                ( (  move_dash_right1135 ) ( ( (  pane1134 ) ( (  ed4607 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4610 ).tag == EditorMode_249_Cmd_t ) {
            struct Key_268  dref4618 = (  key4609 );
            if ( dref4618.tag == Key_268_Escape_t ) {
                ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4607 ) ) ) ,  ( (* dref4610 ) .stuff .EditorMode_249_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                (*  ed4607 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                (* (*  ed4607 ) .f_cfg ) .f_theme = ( ( * (  ed4607 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4618.tag == Key_268_Enter_t ) {
                    struct envunion271  temp1628 = ( (struct envunion271){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Editor_248 *  ,    struct StrView_27  ) )run_dash_cmd1629 , .env =  env->envinst244 } );
                    ( temp1628.fun ( &temp1628.env ,  (  ed4607 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1702 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4607 ) ) ) ,  ( ( * ( (  pane1134 ) ( (  ed4607 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                    (*  ed4607 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                    (*  ed4607 ) .f_og_dash_theme = ( ( * ( ( * (  ed4607 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref4618.tag == Key_268_Char_t ) {
                        struct envunion269  temp1784 = ( (struct envunion269){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
                        ( temp1784.fun ( &temp1784.env ,  ( & ( (* dref4610 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1785 ) ( ( dref4618 .stuff .Key_268_Char_s .field0 ) ) ) ) );
                        struct envunion265  temp1786 = ( (struct envunion265){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  ) )live_dash_cmd1787 , .env =  env->envinst241 } );
                        ( temp1786.fun ( &temp1786.env ,  (  ed4607 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4618.tag == Key_268_Backspace_t ) {
                            if ( ( ! ( (  null1852 ) ( ( (* dref4610 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion272  temp1856 = ( (struct envunion272){ .fun = (  enum Unit_8  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1857 , .env =  env->envinst72 } );
                                ( temp1856.fun ( &temp1856.env ,  ( & ( (* dref4610 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1864  temp1863 = ( (struct envunion1864){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  ) )live_dash_cmd1787 , .env =  env->envinst241 } );
                            ( temp1863.fun ( &temp1863.env ,  (  ed4607 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4610 ).tag == EditorMode_249_Search_t ) {
                struct Key_268  dref4622 = (  key4609 );
                if ( dref4622.tag == Key_268_Escape_t ) {
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4607 ) ) ) ,  ( (* dref4610 ) .stuff .EditorMode_249_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                    (*  ed4607 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                }
                else {
                    if ( dref4622.tag == Key_268_Enter_t ) {
                        ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4607 ) ) ) ,  ( ( * ( (  pane1134 ) ( (  ed4607 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1134 ) ( (  ed4607 ) ) ) ) .f_sel ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                        struct env1866 envinst1866 = {
                            .ed4607 =  ed4607 ,
                        };
                        ( (  if_dash_just1865 ) ( ( ( * (  ed4607 ) ) .f_search_dash_term ) ,  ( (struct envunion1867){ .fun = (  enum Unit_8  (*) (  struct env1866*  ,    struct StrView_27  ) )lam1869 , .env =  envinst1866 } ) ) );
                        if ( ( ! ( (  null1852 ) ( ( (* dref4610 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4625 = ( ( * ( (  pane1134 ) ( (  ed4607 ) ) ) ) .f_cursor );
                            struct Pos_26  from4626 = ( (  or_dash_else1400 ) ( ( ( * ( (  pane1134 ) ( (  ed4607 ) ) ) ) .f_sel ) ,  (  to4625 ) ) );
                            (*  ed4607 ) .f_search_dash_term = ( ( Maybe_80_Just ) ( ( (  as_dash_str1470 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4607 ) .f_search_dash_term = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
                        }
                        (*  ed4607 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                    }
                    else {
                        if ( dref4622.tag == Key_268_Char_t ) {
                            struct envunion1871  temp1870 = ( (struct envunion1871){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
                            ( temp1870.fun ( &temp1870.env ,  ( & ( (* dref4610 ) .stuff .EditorMode_249_Search_s .field1 ) ) ,  ( (  ascii_dash_char1785 ) ( ( dref4622 .stuff .Key_268_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1872 ) ( (  ed4607 ) ,  ( (* dref4610 ) .stuff .EditorMode_249_Search_s .field0 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4622.tag == Key_268_Backspace_t ) {
                                if ( ( ! ( (  null1852 ) ( ( (* dref4610 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1874  temp1873 = ( (struct envunion1874){ .fun = (  enum Unit_8  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1857 , .env =  env->envinst72 } );
                                    ( temp1873.fun ( &temp1873.env ,  ( & ( (* dref4610 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1872 ) ( (  ed4607 ) ,  ( (* dref4610 ) .stuff .EditorMode_249_Search_s .field0 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4610 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1755 ) ( ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1876 {
    bool  (*fun) (  struct env94*  ,    struct Screen_276 *  );
    struct env94 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1877 (   struct env94* env ,    struct Screen_276 *  screen3579 ) {
    struct Tui_90 *  tui3580 = ( ( * (  screen3579 ) ) .f_tui );
    struct envunion95  temp1878 = ( (struct envunion95){ .fun = (  bool  (*) (  struct env87*  ,    struct Tui_90 *  ) )update_dash_dimensions884 , .env =  env->envinst87 } );
    bool  updated_dash_dimensions3581 = ( temp1878.fun ( &temp1878.env ,  (  tui3580 ) ) );
    if ( ( ! (  updated_dash_dimensions3581 ) ) ) {
        return ( false );
    }
    (*  screen3579 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3582 = ( ( * ( ( * (  screen3579 ) ) .f_tui ) ) .f_width );
    uint32_t  h3583 = ( ( * ( ( * (  screen3579 ) ) .f_tui ) ) .f_height );
    size_t  nusz3584 = ( (  u32_dash_size833 ) ( (  op_dash_mul167 ( (  w3582 ) , (  h3583 ) ) ) ) );
    if ( (  cmp290 ( (  nusz3584 ) , ( ( ( * (  screen3579 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_276  nuscreen3585 = ( (  mk_dash_screen827 ) ( (  tui3580 ) ,  ( ( * (  screen3579 ) ) .f_al ) ) );
    (*  screen3579 ) .f_current = ( (  nuscreen3585 ) .f_current );
    (*  screen3579 ) .f_previous = ( (  nuscreen3585 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1879 (    struct Tui_90 *  tui3506 ) {
    bool  redraw3507 = ( ( * (  tui3506 ) ) .f_should_dash_redraw );
    (*  tui3506 ) .f_should_dash_redraw = ( false );
    return (  redraw3507 );
}

struct env1883 {
    ;
    ;
    struct Cell_278 (*  fun1944 )(    struct Cell_278  );
    ;
    struct Slice_277  s1942;
};

struct envunion1884 {
    enum Unit_8  (*fun) (  struct env1883*  ,    int32_t  );
    struct env1883 env;
};

static  enum Unit_8   for_dash_each1882 (    struct Range_150  iterable1104 ,   struct envunion1884  fun1106 ) {
    struct RangeIter_153  temp1885 = ( (  into_dash_iter154 ) ( (  iterable1104 ) ) );
    struct RangeIter_153 *  it1107 = ( &temp1885 );
    while ( ( true ) ) {
        struct Maybe_155  dref1108 = ( (  next156 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_155_Just_t ) {
                struct envunion1884  temp1886 = (  fun1106 );
                ( temp1886.fun ( &temp1886.env ,  ( dref1108 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1887 (   struct env1883* env ,    int32_t  i1946 ) {
    return ( (  set848 ) ( ( env->s1942 ) ,  ( (  i32_dash_size412 ) ( (  i1946 ) ) ) ,  ( ( env->fun1944 ) ( (  elem_dash_get852 ( ( env->s1942 ) , ( (  i32_dash_size412 ) ( (  i1946 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1881 (    struct Slice_277  s1942 ,    struct Cell_278 (*  fun1944 )(    struct Cell_278  ) ) {
    struct env1883 envinst1883 = {
        .fun1944 =  fun1944 ,
        .s1942 =  s1942 ,
    };
    ( (  for_dash_each1882 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( ( (  s1942 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1884){ .fun = (  enum Unit_8  (*) (  struct env1883*  ,    int32_t  ) )lam1887 , .env =  envinst1883 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_278   lam1888 (    struct Cell_278  dref3543 ) {
    return ( (  default_dash_cell860 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1880 (    struct Screen_276 *  screen3542 ) {
    ( (  map1881 ) ( ( ( * (  screen3542 ) ) .f_current ) ,  (  lam1888 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1889 (    struct Screen_276 *  screen3588 ,    struct Color_138  c3590 ) {
    (*  screen3588 ) .f_default_dash_fg = (  c3590 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1890 (    struct Screen_276 *  screen3593 ,    struct Color_138  c3595 ) {
    (*  screen3593 ) .f_default_dash_bg = (  c3595 );
    return ( Unit_8_Unit );
}

static  int32_t   cast1894 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321893 (    uint32_t  x661 ) {
    return ( (  cast1894 ) ( (  x661 ) ) );
}

struct Maybe_1899 {
    enum {
        Maybe_1899_None_t,
        Maybe_1899_Just_t,
    } tag;
    union {
        struct {
            struct Cell_278 *  field0;
        } Maybe_1899_Just_s;
    } stuff;
};

static struct Maybe_1899 Maybe_1899_Just (  struct Cell_278 *  field0 ) {
    return ( struct Maybe_1899 ) { .tag = Maybe_1899_Just_t, .stuff = { .Maybe_1899_Just_s = { .field0 = field0 } } };
};

static  struct Cell_278 *   undefined1900 (  ) {
    struct Cell_278 *  temp1901;
    return (  temp1901 );
}

static  struct Cell_278 *   or_dash_fail1898 (    struct Maybe_1899  x1756 ,    struct StrView_27  errmsg1758 ) {
    struct Maybe_1899  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_1899_None_t ) {
        ( (  panic1212 ) ( (  errmsg1758 ) ) );
        return ( (  undefined1900 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_1899_Just_t ) {
            return ( dref1759 .stuff .Maybe_1899_Just_s .field0 );
        }
    }
}

static  struct Maybe_1899   get_dash_cell_dash_ptr1902 (    struct Screen_276 *  screen3609 ,    int32_t  x3611 ,    int32_t  y3613 ) {
    int32_t  w3614 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3609 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  x3611 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  x3611 ) , (  w3614 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1899) { .tag = Maybe_1899_None_t } );
    }
    if ( ( (  cmp157 ( (  y3613 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3613 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3609 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1899) { .tag = Maybe_1899_None_t } );
    }
    size_t  i3615 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3613 ) , (  w3614 ) ) ) , (  x3611 ) ) ) ) );
    return ( ( Maybe_1899_Just ) ( ( (  get_dash_ptr849 ) ( ( ( * (  screen3609 ) ) .f_current ) ,  (  i3615 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1891 (    struct Screen_276 *  screen3618 ) {
    struct RangeIter_153  temp1892 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3618 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1895 =  next156 (&temp1892);
        if (  __cond1895 .tag == 0 ) {
            break;
        }
        int32_t  y3620 =  __cond1895 .stuff .Maybe_155_Just_s .field0;
        struct RangeIter_153  temp1896 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3618 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_155  __cond1897 =  next156 (&temp1896);
            if (  __cond1897 .tag == 0 ) {
                break;
            }
            int32_t  x3622 =  __cond1897 .stuff .Maybe_155_Just_s .field0;
            struct Cell_278 *  cell3623 = ( (  or_dash_fail1898 ) ( ( (  get_dash_cell_dash_ptr1902 ) ( (  screen3618 ) ,  (  x3622 ) ,  (  y3620 ) ) ) ,  ( (  from_dash_string199 ) ( ( "no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3623 ) .f_bg = ( ( * (  screen3618 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1904 {
    enum Unit_8  (*fun) (  struct env274*  ,    struct Screen_276 *  ,    struct Editor_248 *  );
    struct env274 env;
};

static  int32_t   screen_dash_width1909 (    struct ScreenDims_279  sd4178 ) {
    return (  op_dash_add159 ( (  op_dash_sub164 ( ( (  sd4178 ) .f_to_dash_sx ) , ( (  sd4178 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1910 (    struct ScreenDims_279  sd4181 ) {
    return (  op_dash_add159 ( (  op_dash_sub164 ( ( (  sd4181 ) .f_to_dash_sy ) , ( (  sd4181 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1908 (    struct Pane_219 *  pane4184 ,    struct ScreenDims_279  sd4186 ) {
    struct Pos_26  cur4187 = ( ( * (  pane4184 ) ) .f_cursor );
    int32_t  cur_dash_sx4188 = ( (  pos_dash_vi1095 ) ( ( ( * (  pane4184 ) ) .f_buf ) ,  (  cur4187 ) ) );
    struct ScreenCursorOffset_221  sc_dash_off4189 = ( ( * (  pane4184 ) ) .f_sc_dash_off );
    int32_t  sw4190 = (  op_dash_sub164 ( ( (  screen_dash_width1909 ) ( (  sd4186 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh4191 = (  op_dash_sub164 ( ( (  screen_dash_height1910 ) ( (  sd4186 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin4192 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4193 = ( (  pos_dash_vi1095 ) ( ( ( * (  pane4184 ) ) .f_buf ) ,  (  cur4187 ) ) );
    int32_t  csx4194 = (  op_dash_sub164 ( (  csi4193 ) , ( (  sc_dash_off4189 ) .f_screen_dash_left ) ) );
    int32_t  csy4195 = (  op_dash_sub164 ( ( (  cur4187 ) .f_line ) , ( (  sc_dash_off4189 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4196 = ( (  sc_dash_off4189 ) .f_screen_dash_left );
    if ( (  cmp157 ( (  csx4194 ) , (  margin4192 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4196 = (  op_dash_sub164 ( (  csi4193 ) , (  margin4192 ) ) );
    } else {
        if ( (  cmp157 ( (  csx4194 ) , (  op_dash_sub164 ( (  sw4190 ) , (  margin4192 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4196 = (  op_dash_add159 ( (  op_dash_sub164 ( (  csi4193 ) , (  sw4190 ) ) ) , (  margin4192 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4197 = ( (  max1110 ) ( (  nu_dash_screen_dash_left4196 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4198 = ( (  sc_dash_off4189 ) .f_screen_dash_top );
    if ( (  cmp157 ( (  csy4195 ) , (  margin4192 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4198 = (  op_dash_sub164 ( ( (  cur4187 ) .f_line ) , (  margin4192 ) ) );
    } else {
        if ( (  cmp157 ( (  csy4195 ) , (  op_dash_sub164 ( (  sh4191 ) , (  margin4192 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4198 = (  op_dash_add159 ( (  op_dash_sub164 ( ( (  cur4187 ) .f_line ) , (  sh4191 ) ) ) , (  margin4192 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4199 = ( (  max1110 ) ( (  nu_dash_screen_dash_top4198 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane4184 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_221) { .f_screen_dash_top = (  nu_dash_screen_dash_top4199 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4197 ) } );
    return ( Unit_8_Unit );
}

struct IntStrIter_1912 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1912   into_dash_iter1914 (    struct IntStrIter_1912  self1455 ) {
    return (  self1455 );
}

struct env1918 {
    int32_t  base1240;
    ;
};

struct envunion1919 {
    int32_t  (*fun) (  struct env1918*  ,    int32_t  ,    int32_t  );
    struct env1918 env;
};

static  int32_t   reduce1917 (    struct Range_150  iterable1123 ,    int32_t  base1125 ,   struct envunion1919  fun1127 ) {
    int32_t  x1128 = (  base1125 );
    struct RangeIter_153  it1129 = ( (  into_dash_iter154 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1130 = ( (  next156 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_155_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_155_Just_t ) {
                struct envunion1919  temp1920 = (  fun1127 );
                x1128 = ( temp1920.fun ( &temp1920.env ,  ( dref1130 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1128 ) ) );
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

static  int32_t   lam1923 (   struct env1918* env ,    int32_t  item1244 ,    int32_t  x1246 ) {
    return (  op_dash_mul1524 ( (  x1246 ) , ( env->base1240 ) ) );
}

static  int32_t   pow1916 (    int32_t  base1240 ,    int32_t  p1242 ) {
    struct env1918 envinst1918 = {
        .base1240 =  base1240 ,
    };
    return ( (  reduce1917 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1242 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion1919){ .fun = (  int32_t  (*) (  struct env1918*  ,    int32_t  ,    int32_t  ) )lam1923 , .env =  envinst1918 } ) ) );
}

static  struct Maybe_297   next1915 (    struct IntStrIter_1912 *  self1458 ) {
    if ( ( ( * (  self1458 ) ) .f_negative ) ) {
        (*  self1458 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    int32_t  trim_dash_down1459 = ( (  pow1916 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1460 = (  op_dash_div1523 ( ( ( * (  self1458 ) ) .f_int ) , (  trim_dash_down1459 ) ) );
    int32_t  upper_dash_mask1461 = (  op_dash_mul1524 ( (  op_dash_div1523 ( (  upper1460 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1462 = ( ( (  cast304 ) ( (  op_dash_sub164 ( (  upper1460 ) , (  upper_dash_mask1461 ) ) ) ) ) );
    (*  self1458 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1463 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1462 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1463 ) ) );
}

static  size_t   reduce1913 (    struct IntStrIter_1912  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct IntStrIter_1912  it1129 = ( (  into_dash_iter1914 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1130 = ( (  next1915 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_297_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_297_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1924 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1924);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1925;
    return (  temp1925 );
}

static  size_t   lam1926 (    struct Char_65  dref1135 ,    size_t  x1137 ) {
    return (  op_dash_add311 ( (  x1137 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1911 (    struct IntStrIter_1912  it1134 ) {
    return ( (  reduce1913 ) ( (  it1134 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1926 ) ) );
}

static  int32_t   count_dash_digits1929 (    int32_t  self1466 ) {
    if ( (  eq558 ( (  self1466 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1467 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp157 ( (  self1466 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1466 = (  op_dash_div1523 ( (  self1466 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1467 = (  op_dash_add159 ( (  digits1467 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1467 );
}

static  struct IntStrIter_1912   int_dash_iter1928 (    int32_t  int1470 ) {
    if ( (  cmp157 ( (  int1470 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1912) { .f_int = (  op_dash_neg801 ( (  int1470 ) ) ) , .f_len = ( (  count_dash_digits1929 ) ( (  op_dash_neg801 ( (  int1470 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1912) { .f_int = (  int1470 ) , .f_len = ( (  count_dash_digits1929 ) ( (  int1470 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1912   chars1927 (    int32_t  self1479 ) {
    return ( (  int_dash_iter1928 ) ( (  self1479 ) ) );
}

static  enum Unit_8   set_dash_screen_dash_colors1933 (    struct Screen_276 *  screen3598 ,    struct Color_138  fg3600 ,    struct Color_138  bg3602 ) {
    (*  screen3598 ) .f_default_dash_fg = (  fg3600 );
    (*  screen3598 ) .f_default_dash_bg = (  bg3602 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors1932 (    struct Screen_276 *  screen4202 ,    struct Colors_173  colors4204 ) {
    ( (  set_dash_screen_dash_colors1933 ) ( (  screen4202 ) ,  ( (  colors4204 ) .f_fg ) ,  ( (  colors4204 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   abs1934 (    int32_t  x1364 ) {
    return ( (  cmp157 ( (  x1364 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ? (  x1364 ) : (  op_dash_neg801 ( (  x1364 ) ) ) );
}

struct Map_1937 {
    struct IntStrIter_1912  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1937 Map_1937_Map (  struct IntStrIter_1912  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1937 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1937   into_dash_iter1939 (    struct Map_1937  self809 ) {
    return (  self809 );
}

static  struct Maybe_155   next1940 (    struct Map_1937 *  dref811 ) {
    struct Maybe_297  dref814 = ( (  next1915 ) ( ( & ( (* dref811 ) .field0 ) ) ) );
    if ( dref814.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
    else {
        if ( dref814.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_155_Just ) ( ( ( (* dref811 ) .field1 ) ( ( dref814 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1938 (    struct Map_1937  iterable1123 ,    int32_t  base1125 ,    int32_t (*  fun1127 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1128 = (  base1125 );
    struct Map_1937  it1129 = ( (  into_dash_iter1939 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1130 = ( (  next1940 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_155_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_155_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp1941 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1941);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1942;
    return (  temp1942 );
}

static  int32_t   lam1943 (    int32_t  v1142 ,    int32_t  s1144 ) {
    return (  op_dash_add159 ( (  v1142 ) , (  s1144 ) ) );
}

static  int32_t   sum1936 (    struct Map_1937  it1140 ) {
    return ( (  reduce1938 ) ( (  it1140 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1943 ) ) );
}

static  struct Map_1937   map1944 (    struct IntStrIter_1912  iterable818 ,    int32_t (*  fun820 )(    struct Char_65  ) ) {
    struct IntStrIter_1912  it821 = ( (  into_dash_iter1914 ) ( (  iterable818 ) ) );
    return ( ( Map_1937_Map ) ( (  it821 ) ,  (  fun820 ) ) );
}

static  enum Unit_8   put_dash_char1948 (    struct Screen_276 *  screen3626 ,    struct Char_65  c3628 ,    int32_t  x3630 ,    int32_t  y3632 ) {
    int32_t  w3633 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3626 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp157 ( (  x3630 ) , (  w3633 ) ) != 0 ) || (  cmp157 ( (  y3632 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3626 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp157 ( (  x3630 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp157 ( (  y3632 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3634 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3632 ) , (  w3633 ) ) ) , (  x3630 ) ) ) ) );
    struct Color_138  fg3635 = ( ( * (  screen3626 ) ) .f_default_dash_fg );
    struct Color_138  bg3636 = ( ( * (  screen3626 ) ) .f_default_dash_bg );
    struct Char_65  c3637 = (  c3628 );
    int32_t  char_dash_width3638 = ( (  wcwidth1111 ) ( (  c3637 ) ) );
    if ( ( (  cmp157 ( (  x3630 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp157 ( ( (  elem_dash_get852 ( ( ( * (  screen3626 ) ) .f_current ) , (  op_dash_sub289 ( (  i3634 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_278  pc3639 = (  elem_dash_get852 ( ( ( * (  screen3626 ) ) .f_current ) , (  op_dash_sub289 ( (  i3634 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set848 ) ( ( ( * (  screen3626 ) ) .f_current ) ,  (  op_dash_sub289 ( (  i3634 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_278) { .f_c = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3639 ) .f_fg ) , .f_bg = ( (  pc3639 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set848 ) ( ( ( * (  screen3626 ) ) .f_current ) ,  (  i3634 ) ,  ( (struct Cell_278) { .f_c = (  c3637 ) , .f_fg = (  fg3635 ) , .f_bg = (  bg3636 ) , .f_char_dash_width = (  char_dash_width3638 ) } ) ) );
    struct RangeIter_153  temp1949 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( (  x3630 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min659 ) ( (  op_dash_sub164 ( (  op_dash_add159 ( (  x3630 ) , (  char_dash_width3638 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3633 ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1950 =  next156 (&temp1949);
        if (  __cond1950 .tag == 0 ) {
            break;
        }
        int32_t  xx3641 =  __cond1950 .stuff .Maybe_155_Just_s .field0;
        size_t  i3642 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3632 ) , (  w3633 ) ) ) , (  xx3641 ) ) ) ) );
        ( (  set848 ) ( ( ( * (  screen3626 ) ) .f_current ) ,  (  i3642 ) ,  ( (struct Cell_278) { .f_c = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3635 ) , .f_bg = (  bg3636 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1945 (    struct Screen_276 *  screen3645 ,    int32_t  s3647 ,    int32_t  x3649 ,    int32_t  y3651 ) {
    int32_t  w3652 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3645 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3651 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3651 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3645 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3653 = (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3651 ) , (  w3652 ) ) ) , (  x3649 ) ) );
    int32_t  x3654 = ( (  min659 ) ( (  x3649 ) ,  (  w3652 ) ) );
    size_t  max_dash_len3655 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3652 ) , (  x3654 ) ) ) ) );
    int32_t  xx3656 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_1912  temp1946 =  into_dash_iter1914 ( ( (  chars1927 ) ( (  s3647 ) ) ) );
    while (true) {
        struct Maybe_297  __cond1947 =  next1915 (&temp1946);
        if (  __cond1947 .tag == 0 ) {
            break;
        }
        struct Char_65  c3658 =  __cond1947 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3645 ) ,  (  c3658 ) ,  (  op_dash_add159 ( (  x3654 ) , (  xx3656 ) ) ) ,  (  y3651 ) ) );
        xx3656 = (  op_dash_add159 ( (  xx3656 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3658 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1935 (    struct Screen_276 *  screen3661 ,    int32_t  s3663 ,    int32_t  x3665 ,    int32_t  y3667 ) {
    int32_t  slen3668 = ( (  sum1936 ) ( ( (  map1944 ) ( ( (  chars1927 ) ( (  s3663 ) ) ) ,  (  rendered_dash_wcwidth1109 ) ) ) ) );
    int32_t  w3669 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3661 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3670 = (  op_dash_sub164 ( (  op_dash_sub164 ( (  w3669 ) , (  x3665 ) ) ) , (  slen3668 ) ) );
    ( (  draw_dash_str1945 ) ( (  screen3661 ) ,  (  s3663 ) ,  (  x3670 ) ,  (  y3667 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1952 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct StrConcat_1952 StrConcat_1952_StrConcat (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1952 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1955 {
    struct StrView_27  field0;
    struct StrConcat_1952  field1;
};

static struct StrConcat_1955 StrConcat_1955_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1952  field1 ) {
    return ( struct StrConcat_1955 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1954 {
    struct StrConcat_1955  field0;
    struct Char_65  field1;
};

static struct StrConcat_1954 StrConcat_1954_StrConcat (  struct StrConcat_1955  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1954 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1957 (    struct StrConcat_1952  self1539 ) {
    struct StrConcat_1952  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str389 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1956 (    struct StrConcat_1955  self1539 ) {
    struct StrConcat_1955  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str1957 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1953 (    struct StrConcat_1954  self1539 ) {
    struct StrConcat_1954  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str1956 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1951 (    bool  cond1749 ,    struct StrConcat_1952  msg1751 ) {
    if ( ( ! (  cond1749 ) ) ) {
        ( (  print_dash_str1953 ) ( ( ( StrConcat_1954_StrConcat ) ( ( ( StrConcat_1955_StrConcat ) ( ( (  from_dash_string199 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1751 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1959 {
    struct StrViewIter_458  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1959   into_dash_iter1960 (    struct AppendIter_1959  self1049 ) {
    return (  self1049 );
}

static  struct AppendIter_1959   append1961 (    struct StrViewIter_458  it1036 ,    struct Char_65  e1038 ) {
    return ( (struct AppendIter_1959) { .f_it = ( (  into_dash_iter459 ) ( (  it1036 ) ) ) , .f_elem = (  e1038 ) , .f_appended = ( false ) } );
}

static  struct Maybe_297   next1963 (    struct AppendIter_1959 *  self1052 ) {
    struct Maybe_297  dref1053 = ( (  next463 ) ( ( & ( ( * (  self1052 ) ) .f_it ) ) ) );
    if ( dref1053.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1053 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1053.tag == Maybe_297_None_t ) {
            if ( ( ! ( ( * (  self1052 ) ) .f_appended ) ) ) {
                (*  self1052 ) .f_appended = ( true );
                return ( ( Maybe_297_Just ) ( ( ( * (  self1052 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  bool   between1965 (    struct Pos_26  c1367 ,    struct Pos_26  l1369 ,    struct Pos_26  r1371 ) {
    struct Pos_26  from1372 = ( (  min554 ) ( (  l1369 ) ,  (  r1371 ) ) );
    struct Pos_26  to1373 = ( (  max556 ) ( (  l1369 ) ,  (  r1371 ) ) );
    return ( (  cmp555 ( (  from1372 ) , (  c1367 ) ) != 2 ) && (  cmp555 ( (  c1367 ) , (  to1373 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1964 (    struct Pane_219 *  pane4170 ,    struct Pos_26  pos4172 ) {
    return ( {  struct Maybe_34  dref4173 = ( ( * (  pane4170 ) ) .f_sel ) ; dref4173.tag == Maybe_34_Just_t ? ( (  between1965 ) ( (  pos4172 ) ,  ( ( * (  pane4170 ) ) .f_cursor ) ,  ( dref4173 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1967 {
    ;
    ;
    struct Theme_172 *  theme4214;
    struct Screen_276 *  screen4207;
};

struct envunion1968 {
    enum Unit_8  (*fun) (  struct env1967*  ,    enum HighlightType_20  );
    struct env1967 env;
};

static  enum Unit_8   if_dash_just1966 (    struct Maybe_203  x1321 ,   struct envunion1968  fun1323 ) {
    struct Maybe_203  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_203_Just_t ) {
        struct envunion1968  temp1969 = (  fun1323 );
        ( temp1969.fun ( &temp1969.env ,  ( dref1324 .stuff .Maybe_203_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_203_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1974 (    struct List_17 *  l2152 ,    size_t  new_dash_count2154 ) {
    (*  l2152 ) .f_count = ( (  min467 ) ( (  new_dash_count2154 ) ,  ( ( * (  l2152 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_297   head1977 (    struct Scanner_955 *  it1172 ) {
    struct Scanner_955  temp1978 = ( (  into_dash_iter971 ) ( (  it1172 ) ) );
    return ( (  next977 ) ( ( &temp1978 ) ) );
}

static  bool   null1976 (    struct Scanner_955 *  it1181 ) {
    struct Maybe_297  dref1182 = ( (  head1977 ) ( (  it1181 ) ) );
    if ( dref1182.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_297   peek1979 (    struct Scanner_955 *  sc3277 ) {
    return ( (  head1343 ) ( ( ( * (  sc3277 ) ) .f_s ) ) );
}

static  bool   eq1981 (    struct Maybe_297  l141 ,    struct Maybe_297  r143 ) {
    struct Tuple2_1761  dref144 = ( ( Tuple2_1761_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_297_None_t && dref144 .field1.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_297_Just_t && dref144 .field1.tag == Maybe_297_Just_t ) {
            return (  eq469 ( ( dref144 .field0 .stuff .Maybe_297_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char1980 (    struct Scanner_955 *  sc3280 ,    struct Char_65  char3282 ) {
    if ( (  eq1981 ( ( (  peek1979 ) ( (  sc3280 ) ) ) , ( ( Maybe_297_Just ) ( (  char3282 ) ) ) ) ) ) {
        ( (  drop_prime_980 ) ( (  sc3280 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   char_dash_satisfies1983 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1982 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1983 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1984 (    struct Char_65  c4007 ) {
    return ( !  eq469 ( (  c4007 ) , ( (  from_dash_charlike346 ) ( ( "]" ) ,  ( 1 ) ) ) ) );
}

struct envunion1986 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct TypeSize_1992 {
    size_t  f_size;
};

static  struct TypeSize_1992   get_dash_typesize1991 (  ) {
    struct Highlight_19  temp1993;
    return ( (struct TypeSize_1992) { .f_size = ( sizeof( ( (  temp1993 ) ) ) ) } );
}

static  struct Highlight_19 *   cast_dash_ptr1994 (    void *  p359 ) {
    return ( (struct Highlight_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1990 (    enum CAllocator_10  dref1990 ,    size_t  count1992 ) {
    if (!(  dref1990 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1993 = ( ( ( (  get_dash_typesize1991 ) ( ) ) ) .f_size );
    struct Highlight_19 *  ptr1994 = ( (  cast_dash_ptr1994 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1993 ) , (  count1992 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1994 ) , .f_count = (  count1992 ) } );
}

struct env1995 {
    ;
    ;
    struct Slice_18  new_dash_slice2079;
};

struct Tuple2_1997 {
    struct Highlight_19  field0;
    int32_t  field1;
};

static struct Tuple2_1997 Tuple2_1997_Tuple2 (  struct Highlight_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1997 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1996 {
    enum Unit_8  (*fun) (  struct env1995*  ,    struct Tuple2_1997  );
    struct env1995 env;
};

static  struct Highlight_19 *   offset_dash_ptr2001 (    struct Highlight_19 *  x338 ,    int64_t  count340 ) {
    struct Highlight_19  temp2002;
    return ( (struct Highlight_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2002 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_19 *   get_dash_ptr2000 (    struct Slice_18  slice1788 ,    size_t  i1790 ) {
    if ( ( (  cmp290 ( (  i1790 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1790 ) , ( (  slice1788 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_19 *  elem_dash_ptr1791 = ( (  offset_dash_ptr2001 ) ( ( (  slice1788 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1790 ) ) ) ) );
    return (  elem_dash_ptr1791 );
}

static  enum Unit_8   set1999 (    struct Slice_18  slice1805 ,    size_t  i1807 ,    struct Highlight_19  x1809 ) {
    struct Highlight_19 *  ep1810 = ( (  get_dash_ptr2000 ) ( (  slice1805 ) ,  (  i1807 ) ) );
    (*  ep1810 ) = (  x1809 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1998 (   struct env1995* env ,    struct Tuple2_1997  dref2080 ) {
    return ( (  set1999 ) ( ( env->new_dash_slice2079 ) ,  ( (  i32_dash_size412 ) ( ( dref2080 .field1 ) ) ) ,  ( dref2080 .field0 ) ) );
}

struct SliceIter_2005 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2004 {
    struct SliceIter_2005  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_2004   into_dash_iter2007 (    struct Zip_2004  self941 ) {
    return (  self941 );
}

struct Maybe_2008 {
    enum {
        Maybe_2008_None_t,
        Maybe_2008_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1997  field0;
        } Maybe_2008_Just_s;
    } stuff;
};

static struct Maybe_2008 Maybe_2008_Just (  struct Tuple2_1997  field0 ) {
    return ( struct Maybe_2008 ) { .tag = Maybe_2008_Just_t, .stuff = { .Maybe_2008_Just_s = { .field0 = field0 } } };
};

struct Maybe_2010 {
    enum {
        Maybe_2010_None_t,
        Maybe_2010_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_19  field0;
        } Maybe_2010_Just_s;
    } stuff;
};

static struct Maybe_2010 Maybe_2010_Just (  struct Highlight_19  field0 ) {
    return ( struct Maybe_2010 ) { .tag = Maybe_2010_Just_t, .stuff = { .Maybe_2010_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2010   next2011 (    struct SliceIter_2005 *  self1870 ) {
    size_t  off1871 = ( ( * (  self1870 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1870 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2010) { .tag = Maybe_2010_None_t } );
    }
    struct Highlight_19  elem1872 = ( * ( (  offset_dash_ptr2001 ) ( ( ( ( * (  self1870 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1871 ) ) ) ) ) );
    (*  self1870 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2010_Just ) ( (  elem1872 ) ) );
}

static  struct Maybe_2008   next2009 (    struct Zip_2004 *  self944 ) {
    struct Zip_2004  copy945 = ( * (  self944 ) );
    while ( ( true ) ) {
        struct Maybe_2010  dref946 = ( (  next2011 ) ( ( & ( (  copy945 ) .f_left_dash_it ) ) ) );
        if ( dref946.tag == Maybe_2010_None_t ) {
            return ( (struct Maybe_2008) { .tag = Maybe_2008_None_t } );
        }
        else {
            if ( dref946.tag == Maybe_2010_Just_t ) {
                struct Maybe_155  dref948 = ( (  next422 ) ( ( & ( (  copy945 ) .f_right_dash_it ) ) ) );
                if ( dref948.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_2008) { .tag = Maybe_2008_None_t } );
                }
                else {
                    if ( dref948.tag == Maybe_155_Just_t ) {
                        ( (  next2011 ) ( ( & ( ( * (  self944 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self944 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2008_Just ) ( ( ( Tuple2_1997_Tuple2 ) ( ( dref946 .stuff .Maybe_2010_Just_s .field0 ) ,  ( dref948 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2003 (    struct Zip_2004  iterable1104 ,   struct envunion1996  fun1106 ) {
    struct Zip_2004  temp2006 = ( (  into_dash_iter2007 ) ( (  iterable1104 ) ) );
    struct Zip_2004 *  it1107 = ( &temp2006 );
    while ( ( true ) ) {
        struct Maybe_2008  dref1108 = ( (  next2009 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_2008_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_2008_Just_t ) {
                struct envunion1996  temp2012 = (  fun1106 );
                ( temp2012.fun ( &temp2012.env ,  ( dref1108 .stuff .Maybe_2008_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2005   into_dash_iter2014 (    struct Slice_18  self1864 ) {
    return ( (struct SliceIter_2005) { .f_slice = (  self1864 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2004   zip2013 (    struct Slice_18  left952 ,    struct FromIter_416  right954 ) {
    struct SliceIter_2005  left_dash_it955 = ( (  into_dash_iter2014 ) ( (  left952 ) ) );
    struct FromIter_416  right_dash_it956 = ( (  into_dash_iter426 ) ( (  right954 ) ) );
    return ( (struct Zip_2004) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

static  void *   cast_dash_ptr2016 (    struct Highlight_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2015 (    enum CAllocator_10  dref1996 ,    struct Slice_18  slice1998 ) {
    if (!(  dref1996 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2016 ) ( ( (  slice1998 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1989 (   struct env5* env ,    struct List_17 *  list2078 ) {
    if ( (  eq399 ( ( ( * (  list2078 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2078 ) .f_elements = ( (  allocate1990 ) ( ( ( * (  list2078 ) ) .f_al ) ,  ( env->starting_dash_size2073 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2078 ) ) .f_count ) , ( ( ( * (  list2078 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2079 = ( (  allocate1990 ) ( ( ( * (  list2078 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2078 ) ) .f_count ) , ( env->growth_dash_factor2074 ) ) ) ) );
            struct env1995 envinst1995 = {
                .new_dash_slice2079 =  new_dash_slice2079 ,
            };
            struct envunion1996  fun2083 = ( (struct envunion1996){ .fun = (  enum Unit_8  (*) (  struct env1995*  ,    struct Tuple2_1997  ) )lam1998 , .env =  envinst1995 } );
            ( (  for_dash_each2003 ) ( ( (  zip2013 ) ( ( ( * (  list2078 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2083 ) ) );
            ( (  free2015 ) ( ( ( * (  list2078 ) ) .f_al ) ,  ( ( * (  list2078 ) ) .f_elements ) ) );
            (*  list2078 ) .f_elements = (  new_dash_slice2079 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1987 (   struct env35* env ,    struct List_17 *  list2086 ,    struct Highlight_19  elem2088 ) {
    struct envunion36  temp1988 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_17 *  ) )grow_dash_if_dash_full1989 , .env =  env->envinst5 } );
    ( temp1988.fun ( &temp1988.env ,  (  list2086 ) ) );
    ( (  set1999 ) ( ( ( * (  list2086 ) ) .f_elements ) ,  ( ( * (  list2086 ) ) .f_count ) ,  (  elem2088 ) ) );
    (*  list2086 ) .f_count = (  op_dash_add311 ( ( ( * (  list2086 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2018 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2020 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2019 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2020 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2021 (    struct Char_65  c4010 ) {
    return ( ( !  eq469 ( (  c4010 ) , ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) && ( !  eq469 ( (  c4010 ) , ( (  from_dash_charlike346 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2023 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2024 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2026 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2025 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2026 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2027 (    struct Char_65  c4013 ) {
    return ( (  eq1330 ( ( (  char_dash_type1333 ) ( (  c4013 ) ) ) , ( CharType_1331_CharWord ) ) ) || (  eq469 ( (  c4013 ) , ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2029 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2031 {
    struct StrView_27 _arr [2];
};

struct env2032 {
    struct Scanner_955 *  sc4003;
    ;
};

struct envunion2033 {
    bool  (*fun) (  struct env2032*  ,    struct StrView_27  );
    struct env2032 env;
};

struct env2035 {
    struct envunion2033  fun1165;
};

struct envunion2036 {
    bool  (*fun) (  struct env2035*  ,    struct StrView_27  ,    bool  );
    struct env2035 env;
};

struct ArrayIter_2037 {
    struct Array_2031  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2037   into_dash_iter2038 (    struct Array_2031  self2380 ) {
    return ( (struct ArrayIter_2037) { .f_backing = (  self2380 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2042 (    struct Array_2031 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   offset_dash_ptr2043 (    struct StrView_27 *  x338 ,    int64_t  count340 ) {
    struct StrView_27  temp2044;
    return ( (struct StrView_27 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2044 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr2041 (    struct Array_2031 *  arr2308 ,    size_t  i2311 ) {
    if ( ( (  cmp290 ( (  i2311 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2311 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2311 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2312 = ( ( (  cast_dash_ptr2042 ) ( (  arr2308 ) ) ) );
    return ( (  offset_dash_ptr2043 ) ( (  p2312 ) ,  ( (int64_t ) (  i2311 ) ) ) );
}

static  struct StrView_27   get2040 (    struct Array_2031 *  arr2315 ,    size_t  i2318 ) {
    return ( * ( (  get_dash_ptr2041 ) ( (  arr2315 ) ,  (  i2318 ) ) ) );
}

static  struct Maybe_80   next2039 (    struct ArrayIter_2037 *  self2387 ) {
    if ( (  cmp290 ( ( ( * (  self2387 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2389 = ( (  get2040 ) ( ( & ( ( * (  self2387 ) ) .f_backing ) ) ,  ( ( * (  self2387 ) ) .f_cur ) ) );
    (*  self2387 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2387 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2389 ) ) );
}

static  bool   reduce2034 (    struct Array_2031  iterable1123 ,    bool  base1125 ,   struct envunion2036  fun1127 ) {
    bool  x1128 = (  base1125 );
    struct ArrayIter_2037  it1129 = ( (  into_dash_iter2038 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1130 = ( (  next2039 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_80_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_80_Just_t ) {
                struct envunion2036  temp2045 = (  fun1127 );
                x1128 = ( temp2045.fun ( &temp2045.env ,  ( dref1130 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp2046 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2046);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2047;
    return (  temp2047 );
}

static  bool   lam2048 (   struct env2035* env ,    struct StrView_27  e1167 ,    bool  x1169 ) {
    struct envunion2033  temp2049 = ( env->fun1165 );
    return ( ( temp2049.fun ( &temp2049.env ,  (  e1167 ) ) ) || (  x1169 ) );
}

static  bool   any2030 (    struct Array_2031  it1163 ,   struct envunion2033  fun1165 ) {
    struct env2035 envinst2035 = {
        .fun1165 =  fun1165 ,
    };
    return ( (  reduce2034 ) ( (  it1163 ) ,  ( false ) ,  ( (struct envunion2036){ .fun = (  bool  (*) (  struct env2035*  ,    struct StrView_27  ,    bool  ) )lam2048 , .env =  envinst2035 } ) ) );
}

static  struct Array_2031   from_dash_listlike2050 (    struct Array_2031  self330 ) {
    return (  self330 );
}

static  struct StrViewIter_458   own2055 (    struct StrViewIter_458  x1281 ) {
    return (  x1281 );
}

static  bool   matches_dash_str2052 (    struct Scanner_955 *  sc3292 ,    struct StrView_27  s3294 ) {
    size_t  skip3295 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_458  temp2053 = ( (  chars460 ) ( (  s3294 ) ) );
    struct StrViewIter_458 *  ss3296 = ( &temp2053 );
    struct StrViewIter_458  temp2054 = ( (  own2055 ) ( ( ( * (  sc3292 ) ) .f_s ) ) );
    struct StrViewIter_458 *  sccp3297 = ( &temp2054 );
    while ( ( true ) ) {
        struct Tuple2_1761  dref3298 = ( ( Tuple2_1761_Tuple2 ) ( ( (  next463 ) ( (  sccp3297 ) ) ) ,  ( (  next463 ) ( (  ss3296 ) ) ) ) );
        if ( dref3298 .field1.tag == Maybe_297_None_t ) {
            ( (  drop_prime_980 ) ( (  sc3292 ) ,  (  skip3295 ) ) );
            return ( true );
        }
        else {
            if ( dref3298 .field0.tag == Maybe_297_Just_t && dref3298 .field1.tag == Maybe_297_Just_t ) {
                if ( ( !  eq469 ( ( dref3298 .field0 .stuff .Maybe_297_Just_s .field0 ) , ( dref3298 .field1 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3295 = (  op_dash_add311 ( (  skip3295 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2051 (   struct env2032* env ,    struct StrView_27  sym4016 ) {
    return ( (  matches_dash_str2052 ) ( ( env->sc4003 ) ,  (  sym4016 ) ) );
}

struct envunion2057 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2059 {
    struct StrView_27 _arr [12];
};

struct env2060 {
    struct Scanner_955 *  sc4003;
    ;
};

struct envunion2061 {
    bool  (*fun) (  struct env2060*  ,    struct StrView_27  );
    struct env2060 env;
};

struct env2063 {
    struct envunion2061  fun1165;
};

struct envunion2064 {
    bool  (*fun) (  struct env2063*  ,    struct StrView_27  ,    bool  );
    struct env2063 env;
};

struct ArrayIter_2065 {
    struct Array_2059  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2065   into_dash_iter2066 (    struct Array_2059  self2380 ) {
    return ( (struct ArrayIter_2065) { .f_backing = (  self2380 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2070 (    struct Array_2059 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2069 (    struct Array_2059 *  arr2308 ,    size_t  i2311 ) {
    if ( ( (  cmp290 ( (  i2311 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2311 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2311 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2312 = ( ( (  cast_dash_ptr2070 ) ( (  arr2308 ) ) ) );
    return ( (  offset_dash_ptr2043 ) ( (  p2312 ) ,  ( (int64_t ) (  i2311 ) ) ) );
}

static  struct StrView_27   get2068 (    struct Array_2059 *  arr2315 ,    size_t  i2318 ) {
    return ( * ( (  get_dash_ptr2069 ) ( (  arr2315 ) ,  (  i2318 ) ) ) );
}

static  struct Maybe_80   next2067 (    struct ArrayIter_2065 *  self2387 ) {
    if ( (  cmp290 ( ( ( * (  self2387 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2389 = ( (  get2068 ) ( ( & ( ( * (  self2387 ) ) .f_backing ) ) ,  ( ( * (  self2387 ) ) .f_cur ) ) );
    (*  self2387 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2387 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2389 ) ) );
}

static  bool   reduce2062 (    struct Array_2059  iterable1123 ,    bool  base1125 ,   struct envunion2064  fun1127 ) {
    bool  x1128 = (  base1125 );
    struct ArrayIter_2065  it1129 = ( (  into_dash_iter2066 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1130 = ( (  next2067 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_80_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_80_Just_t ) {
                struct envunion2064  temp2071 = (  fun1127 );
                x1128 = ( temp2071.fun ( &temp2071.env ,  ( dref1130 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp2072 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2072);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2073;
    return (  temp2073 );
}

static  bool   lam2074 (   struct env2063* env ,    struct StrView_27  e1167 ,    bool  x1169 ) {
    struct envunion2061  temp2075 = ( env->fun1165 );
    return ( ( temp2075.fun ( &temp2075.env ,  (  e1167 ) ) ) || (  x1169 ) );
}

static  bool   any2058 (    struct Array_2059  it1163 ,   struct envunion2061  fun1165 ) {
    struct env2063 envinst2063 = {
        .fun1165 =  fun1165 ,
    };
    return ( (  reduce2062 ) ( (  it1163 ) ,  ( false ) ,  ( (struct envunion2064){ .fun = (  bool  (*) (  struct env2063*  ,    struct StrView_27  ,    bool  ) )lam2074 , .env =  envinst2063 } ) ) );
}

static  struct Array_2059   from_dash_listlike2076 (    struct Array_2059  self330 ) {
    return (  self330 );
}

static  bool   lam2077 (   struct env2060* env ,    struct StrView_27  sym4020 ) {
    return ( (  matches_dash_str2052 ) ( ( env->sc4003 ) ,  (  sym4020 ) ) );
}

struct envunion2079 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2081 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2080 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2081 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2082 (    struct Char_65  c4024 ) {
    return ( (  eq1330 ( ( (  char_dash_type1333 ) ( (  c4024 ) ) ) , ( CharType_1331_CharWord ) ) ) || (  eq469 ( (  c4024 ) , ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2083 (    struct Maybe_297  x1312 ,    bool (*  fun1314 )(    struct Char_65  ) ,    bool  default1316 ) {
    return ( {  struct Maybe_297  dref1317 = (  x1312 ) ; dref1317.tag == Maybe_297_Just_t ? ( (  fun1314 ) ( ( dref1317 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1316 ) ; } );
}

static  bool   is_dash_upper2084 (    struct Char_65  c2465 ) {
    return ( (  eq399 ( ( (  c2465 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1336 ) ( (  c2465 ) ,  ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2085 {
    struct StrView_27 _arr [5];
};

static  struct Array_2085   from_dash_listlike2086 (    struct Array_2085  self330 ) {
    return (  self330 );
}

struct Array_2087 {
    struct StrView_27 _arr [15];
};

static  struct Array_2087   from_dash_listlike2088 (    struct Array_2087  self330 ) {
    return (  self330 );
}

struct env2090 {
    ;
    struct StrView_27  ident4028;
};

struct envunion2091 {
    bool  (*fun) (  struct env2090*  ,    struct StrView_27  );
    struct env2090 env;
};

struct env2093 {
    struct envunion2091  fun1165;
};

struct envunion2094 {
    bool  (*fun) (  struct env2093*  ,    struct StrView_27  ,    bool  );
    struct env2093 env;
};

struct ArrayIter_2095 {
    struct Array_2085  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2095   into_dash_iter2096 (    struct Array_2085  self2380 ) {
    return ( (struct ArrayIter_2095) { .f_backing = (  self2380 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2100 (    struct Array_2085 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2099 (    struct Array_2085 *  arr2308 ,    size_t  i2311 ) {
    if ( ( (  cmp290 ( (  i2311 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2311 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2311 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2312 = ( ( (  cast_dash_ptr2100 ) ( (  arr2308 ) ) ) );
    return ( (  offset_dash_ptr2043 ) ( (  p2312 ) ,  ( (int64_t ) (  i2311 ) ) ) );
}

static  struct StrView_27   get2098 (    struct Array_2085 *  arr2315 ,    size_t  i2318 ) {
    return ( * ( (  get_dash_ptr2099 ) ( (  arr2315 ) ,  (  i2318 ) ) ) );
}

static  struct Maybe_80   next2097 (    struct ArrayIter_2095 *  self2387 ) {
    if ( (  cmp290 ( ( ( * (  self2387 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2389 = ( (  get2098 ) ( ( & ( ( * (  self2387 ) ) .f_backing ) ) ,  ( ( * (  self2387 ) ) .f_cur ) ) );
    (*  self2387 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2387 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2389 ) ) );
}

static  bool   reduce2092 (    struct Array_2085  iterable1123 ,    bool  base1125 ,   struct envunion2094  fun1127 ) {
    bool  x1128 = (  base1125 );
    struct ArrayIter_2095  it1129 = ( (  into_dash_iter2096 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1130 = ( (  next2097 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_80_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_80_Just_t ) {
                struct envunion2094  temp2101 = (  fun1127 );
                x1128 = ( temp2101.fun ( &temp2101.env ,  ( dref1130 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp2102 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2102);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2103;
    return (  temp2103 );
}

static  bool   lam2104 (   struct env2093* env ,    struct StrView_27  e1167 ,    bool  x1169 ) {
    struct envunion2091  temp2105 = ( env->fun1165 );
    return ( ( temp2105.fun ( &temp2105.env ,  (  e1167 ) ) ) || (  x1169 ) );
}

static  bool   any2089 (    struct Array_2085  it1163 ,   struct envunion2091  fun1165 ) {
    struct env2093 envinst2093 = {
        .fun1165 =  fun1165 ,
    };
    return ( (  reduce2092 ) ( (  it1163 ) ,  ( false ) ,  ( (struct envunion2094){ .fun = (  bool  (*) (  struct env2093*  ,    struct StrView_27  ,    bool  ) )lam2104 , .env =  envinst2093 } ) ) );
}

static  bool   lam2106 (   struct env2090* env ,    struct StrView_27  kw4032 ) {
    return (  eq485 ( (  kw4032 ) , ( env->ident4028 ) ) );
}

struct env2108 {
    ;
    struct StrView_27  ident4028;
};

struct envunion2109 {
    bool  (*fun) (  struct env2108*  ,    struct StrView_27  );
    struct env2108 env;
};

struct env2111 {
    struct envunion2109  fun1165;
};

struct envunion2112 {
    bool  (*fun) (  struct env2111*  ,    struct StrView_27  ,    bool  );
    struct env2111 env;
};

struct ArrayIter_2113 {
    struct Array_2087  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2113   into_dash_iter2114 (    struct Array_2087  self2380 ) {
    return ( (struct ArrayIter_2113) { .f_backing = (  self2380 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2118 (    struct Array_2087 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2117 (    struct Array_2087 *  arr2308 ,    size_t  i2311 ) {
    if ( ( (  cmp290 ( (  i2311 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2311 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2311 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2312 = ( ( (  cast_dash_ptr2118 ) ( (  arr2308 ) ) ) );
    return ( (  offset_dash_ptr2043 ) ( (  p2312 ) ,  ( (int64_t ) (  i2311 ) ) ) );
}

static  struct StrView_27   get2116 (    struct Array_2087 *  arr2315 ,    size_t  i2318 ) {
    return ( * ( (  get_dash_ptr2117 ) ( (  arr2315 ) ,  (  i2318 ) ) ) );
}

static  struct Maybe_80   next2115 (    struct ArrayIter_2113 *  self2387 ) {
    if ( (  cmp290 ( ( ( * (  self2387 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2389 = ( (  get2116 ) ( ( & ( ( * (  self2387 ) ) .f_backing ) ) ,  ( ( * (  self2387 ) ) .f_cur ) ) );
    (*  self2387 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2387 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2389 ) ) );
}

static  bool   reduce2110 (    struct Array_2087  iterable1123 ,    bool  base1125 ,   struct envunion2112  fun1127 ) {
    bool  x1128 = (  base1125 );
    struct ArrayIter_2113  it1129 = ( (  into_dash_iter2114 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1130 = ( (  next2115 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_80_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_80_Just_t ) {
                struct envunion2112  temp2119 = (  fun1127 );
                x1128 = ( temp2119.fun ( &temp2119.env ,  ( dref1130 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp2120 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2120);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2121;
    return (  temp2121 );
}

static  bool   lam2122 (   struct env2111* env ,    struct StrView_27  e1167 ,    bool  x1169 ) {
    struct envunion2109  temp2123 = ( env->fun1165 );
    return ( ( temp2123.fun ( &temp2123.env ,  (  e1167 ) ) ) || (  x1169 ) );
}

static  bool   any2107 (    struct Array_2087  it1163 ,   struct envunion2109  fun1165 ) {
    struct env2111 envinst2111 = {
        .fun1165 =  fun1165 ,
    };
    return ( (  reduce2110 ) ( (  it1163 ) ,  ( false ) ,  ( (struct envunion2112){ .fun = (  bool  (*) (  struct env2111*  ,    struct StrView_27  ,    bool  ) )lam2122 , .env =  envinst2111 } ) ) );
}

static  bool   lam2124 (   struct env2108* env ,    struct StrView_27  kw4034 ) {
    return (  eq485 ( (  kw4034 ) , ( env->ident4028 ) ) );
}

static  struct Maybe_967   int2126 (    struct Scanner_955 *  sc3271 ) {
    return ( (  scan_dash_int968 ) ( (  sc3271 ) ) );
}

static  bool   char_dash_satisfies2128 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2127 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2128 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2129 (    struct Char_65  c2453 ) {
    return ( (  eq399 ( ( (  c2453 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1339 ) ( (  c2453 ) ) ) || ( (  between1336 ) ( (  c2453 ) ,  ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1336 ) ( (  c2453 ) ,  ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2131 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2132 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2024 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2134 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2136 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2135 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2136 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2137 (    struct Char_65  c2459 ) {
    return ( (  eq399 ( ( (  c2459 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1336 ) ( (  c2459 ) ,  ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2139 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2141 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2140 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2141 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2143 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2145 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2144 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2145 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2146 (    struct Char_65  c2456 ) {
    return ( (  eq399 ( ( (  c2456 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq469 ( (  c2456 ) , ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) || (  eq469 ( (  c2456 ) , ( (  from_dash_charlike346 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2148 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2150 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2152 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2154 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2157 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2159 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2158 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2159 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2161 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2163 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2165 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2167 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2169 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2168 (    struct Scanner_955 *  sc3303 ,    bool (*  condition3305 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2169 ) ( (  sc3303 ) ,  (  condition3305 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   gcode_dash_keyword_dash_char2170 (    struct Char_65  c3994 ) {
    return ( ( (  is_dash_not_dash_whitespace1666 ) ( (  c3994 ) ) ) && ( !  eq469 ( (  c3994 ) , ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) );
}

static  uint8_t   char_dash_case_dash_diff2172 (  ) {
    return (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Char_65   to_dash_lower2171 (    struct Char_65  c2472 ) {
    if ( ( (  is_dash_upper2084 ) ( (  c2472 ) ) ) ) {
        ( (  assert667 ) ( (  eq399 ( ( (  c2472 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "(to-lower) utf8 not yet supported." ) ,  ( 34 ) ) ) ) );
        return ( (  from_dash_u81039 ) ( (  op_dash_add933 ( ( (  char_dash_u8533 ) ( (  c2472 ) ) ) , ( (  char_dash_case_dash_diff2172 ) ( ) ) ) ) ) );
    }
    return (  c2472 );
}

struct StrConcat_2178 {
    struct StrView_27  field0;
    struct StrConcat_635  field1;
};

static struct StrConcat_2178 StrConcat_2178_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_635  field1 ) {
    return ( struct StrConcat_2178 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2177 {
    struct StrConcat_2178  field0;
    struct Char_65  field1;
};

static struct StrConcat_2177 StrConcat_2177_StrConcat (  struct StrConcat_2178  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2177 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2179 (    struct StrConcat_2178  self1539 ) {
    struct StrConcat_2178  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str642 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2176 (    struct StrConcat_2177  self1539 ) {
    struct StrConcat_2177  dref1540 = (  self1539 );
    if ( true ) {
        ( (  print_dash_str2179 ) ( ( dref1540 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1540 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic2175 (    struct StrConcat_635  errmsg1743 ) {
    ( (  print_dash_str2176 ) ( ( ( StrConcat_2177_StrConcat ) ( ( ( StrConcat_2178_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1743 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Char_65   undefined2180 (  ) {
    struct Char_65  temp2181;
    return (  temp2181 );
}

static  struct Char_65   or_dash_fail2174 (    struct Maybe_297  x1756 ,    struct StrConcat_635  errmsg1758 ) {
    struct Maybe_297  dref1759 = (  x1756 );
    if ( dref1759.tag == Maybe_297_None_t ) {
        ( (  panic2175 ) ( (  errmsg1758 ) ) );
        return ( (  undefined2180 ) ( ) );
    }
    else {
        if ( dref1759.tag == Maybe_297_Just_t ) {
            return ( dref1759 .stuff .Maybe_297_Just_s .field0 );
        }
    }
}

static  struct Char_65   char_dash_at_dash_offset2173 (    struct StrView_27  self2243 ,    size_t  i2245 ) {
    return ( (  or_dash_fail2174 ) ( ( (  head1343 ) ( ( (  chars460 ) ( ( (struct StrView_27) { .f_contents = ( (  from465 ) ( ( (  self2243 ) .f_contents ) ,  (  i2245 ) ) ) } ) ) ) ) ) ,  ( ( StrConcat_635_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(StrView.char-at-offset) off too great for this StrView (" ) ,  ( 57 ) ) ) ,  (  i2245 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2183 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2185 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2186 (    struct Scanner_955 *  sc3285 ,    bool (*  condition3287 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3288 = ( (  head1343 ) ( ( ( * (  sc3285 ) ) .f_s ) ) );
    if ( dref3288.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3287 ) ( ( dref3288 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3285 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3288.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  bool   lam2187 (    struct Char_65  c4059 ) {
    return ( !  eq469 ( (  c4059 ) , ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) );
}

struct envunion2189 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1973 (   struct env134* env ,    struct TextBuf_105 *  self3997 ,    struct Line_16 *  line3999 ) {
    if ( ( ! ( ( * (  line3999 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_17 *  hls4000 = ( & ( ( * (  line3999 ) ) .f_highlights ) );
    ( (  trim1974 ) ( (  hls4000 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv4001 = ( (  from_dash_bytes1098 ) ( ( (  to_dash_slice566 ) ( ( ( * (  line3999 ) ) .f_line ) ) ) ) );
    enum Filetype_108  dref4002 = ( ( * (  self3997 ) ) .f_filetype );
    switch (  dref4002 ) {
        case Filetype_108_Text : {
            break;
        }
        case Filetype_108_KC : {
            struct Scanner_955  temp1975 = ( (  mk_dash_from_dash_str957 ) ( (  line_dash_sv4001 ) ) );
            struct Scanner_955 *  sc4003 = ( &temp1975 );
            while ( ( ! ( (  null1976 ) ( (  sc4003 ) ) ) ) ) {
                int32_t  from_dash_off4004 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                struct Maybe_297  first_dash_char4005 = ( (  peek1979 ) ( (  sc4003 ) ) );
                if ( ( (  try_dash_char1980 ) ( (  sc4003 ) ,  ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  try_dash_char1980 ) ( (  sc4003 ) ,  ( (  from_dash_charlike346 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  skip_dash_while1982 ) ( (  sc4003 ) ,  (  lam1984 ) ) );
                        ( (  drop_prime_980 ) ( (  sc4003 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        int32_t  to_dash_off4008 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                        struct envunion1986  temp1985 = ( (struct envunion1986){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                        ( temp1985.fun ( &temp1985.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line_dash_sv4001 ) ) ) ) ) , .f_type = ( HighlightType_20_Special3 ) } ) ) );
                    } else {
                        struct envunion2018  temp2017 = ( (struct envunion2018){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                        ( temp2017.fun ( &temp2017.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line_dash_sv4001 ) ) ) ) ) , .f_type = ( HighlightType_20_Comment ) } ) ) );
                    }
                    break;
                } else {
                    if ( ( (  try_dash_char1980 ) ( (  sc4003 ) ,  ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) {
                        while ( ( true ) ) {
                            ( (  skip_dash_while2019 ) ( (  sc4003 ) ,  (  lam2021 ) ) );
                            if ( (  eq1981 ( ( (  peek1979 ) ( (  sc4003 ) ) ) , ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                ( (  drop_prime_980 ) ( (  sc4003 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                if ( (  eq1981 ( ( (  peek1979 ) ( (  sc4003 ) ) ) , ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                    ( (  drop_prime_980 ) ( (  sc4003 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                } else {
                                }
                            } else {
                                ( (  drop_prime_980 ) ( (  sc4003 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                break;
                            }
                        }
                        int32_t  cur_dash_off4011 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2023  temp2022 = ( (struct envunion2023){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                        ( temp2022.fun ( &temp2022.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = (  cur_dash_off4011 ) , .f_type = ( HighlightType_20_String ) } ) ) );
                    } else {
                        if ( ( (  try_dash_char1980 ) ( (  sc4003 ) ,  ( (  from_dash_charlike346 ) ( ( "@" ) ,  ( 1 ) ) ) ) ) ) {
                            if ( ( (  char_dash_satisfies2024 ) ( (  sc4003 ) ,  (  is_dash_alpha1335 ) ) ) ) {
                                ( (  skip_dash_while2025 ) ( (  sc4003 ) ,  (  lam2027 ) ) );
                                int32_t  cur_dash_off4014 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                struct envunion2029  temp2028 = ( (struct envunion2029){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                ( temp2028.fun ( &temp2028.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = (  cur_dash_off4014 ) , .f_type = ( HighlightType_20_Ident3 ) } ) ) );
                            } else {
                            }
                        } else {
                            struct env2032 envinst2032 = {
                                .sc4003 =  sc4003 ,
                            };
                            if ( ( (  any2030 ) ( ( (  from_dash_listlike2050 ) ( ( (struct Array_2031) { ._arr = { ( (  from_dash_string199 ) ( ( "==" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "/=" ) ,  ( 2 ) ) ) } } ) ) ) ,  ( (struct envunion2033){ .fun = (  bool  (*) (  struct env2032*  ,    struct StrView_27  ) )lam2051 , .env =  envinst2032 } ) ) ) ) {
                                int32_t  cur_dash_off4017 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                enum HighlightType_20  type4018 = ( HighlightType_20_Special2 );
                                struct envunion2057  temp2056 = ( (struct envunion2057){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                ( temp2056.fun ( &temp2056.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = (  cur_dash_off4017 ) , .f_type = (  type4018 ) } ) ) );
                            } else {
                                struct env2060 envinst2060 = {
                                    .sc4003 =  sc4003 ,
                                };
                                if ( ( (  any2058 ) ( ( (  from_dash_listlike2076 ) ( ( (struct Array_2059) { ._arr = { ( (  from_dash_string199 ) ( ( "<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1229 ) ( ( "=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1229 ) ( ( "&" ) ,  ( 1 ) ) ) , ( (  from_dash_string199 ) ( ( "->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1229 ) ( ( ":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( ")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "," ) ,  ( 1 ) ) ) } } ) ) ) ,  ( (struct envunion2061){ .fun = (  bool  (*) (  struct env2060*  ,    struct StrView_27  ) )lam2077 , .env =  envinst2060 } ) ) ) ) {
                                    int32_t  cur_dash_off4021 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_20  type4022 = ( HighlightType_20_Special1 );
                                    struct envunion2079  temp2078 = ( (struct envunion2079){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                    ( temp2078.fun ( &temp2078.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = (  cur_dash_off4021 ) , .f_type = (  type4022 ) } ) ) );
                                } else {
                                    if ( ( (  char_dash_satisfies2024 ) ( (  sc4003 ) ,  (  is_dash_alpha1335 ) ) ) ) {
                                        ( (  skip_dash_while2080 ) ( (  sc4003 ) ,  (  lam2082 ) ) );
                                        int32_t  cur_dash_off4025 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                        bool  first_dash_char_dash_uppercase4026 = ( (  maybe2083 ) ( (  first_dash_char4005 ) ,  (  is_dash_upper2084 ) ,  ( false ) ) );
                                        enum HighlightType_20  type4027 = ( (  first_dash_char_dash_uppercase4026 ) ? ( HighlightType_20_Ident2 ) : ( HighlightType_20_Ident1 ) );
                                        struct StrView_27  ident4028 = ( ( (  byte_dash_substr484 ) ( (  line_dash_sv4001 ) ,  ( (  i32_dash_size412 ) ( (  from_dash_off4004 ) ) ) ,  ( (  i32_dash_size412 ) ( (  cur_dash_off4025 ) ) ) ) ) );
                                        struct Array_2085  keywords14029 = ( (  from_dash_listlike2086 ) ( ( (struct Array_2085) { ._arr = { ( (  from_dash_string199 ) ( ( "fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "class" ) ,  ( 5 ) ) ) , ( (  from_dash_string199 ) ( ( "inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "external" ) ,  ( 8 ) ) ) , ( (  from_dash_string199 ) ( ( "use" ) ,  ( 3 ) ) ) } } ) ) );
                                        struct Array_2087  keywords24030 = ( (  from_dash_listlike2088 ) ( ( (struct Array_2087) { ._arr = { ( (  from_dash_string199 ) ( ( "if" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "else" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "case" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "for" ) ,  ( 3 ) ) ) , ( (  from_dash_string199 ) ( ( "in" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "while" ) ,  ( 5 ) ) ) , ( (  from_dash_string199 ) ( ( "pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "break" ) ,  ( 5 ) ) ) , ( (  from_dash_string199 ) ( ( "continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string199 ) ( ( "as" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "or" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "and" ) ,  ( 3 ) ) ) , ( (  from_dash_string199 ) ( ( "not" ) ,  ( 3 ) ) ) , ( (  from_dash_string199 ) ( ( "return" ) ,  ( 6 ) ) ) } } ) ) );
                                        struct env2090 envinst2090 = {
                                            .ident4028 =  ident4028 ,
                                        };
                                        if ( ( (  any2089 ) ( (  keywords14029 ) ,  ( (struct envunion2091){ .fun = (  bool  (*) (  struct env2090*  ,    struct StrView_27  ) )lam2106 , .env =  envinst2090 } ) ) ) ) {
                                            type4027 = ( HighlightType_20_Keyword1 );
                                        } else {
                                            struct env2108 envinst2108 = {
                                                .ident4028 =  ident4028 ,
                                            };
                                            if ( ( (  any2107 ) ( (  keywords24030 ) ,  ( (struct envunion2109){ .fun = (  bool  (*) (  struct env2108*  ,    struct StrView_27  ) )lam2124 , .env =  envinst2108 } ) ) ) ) {
                                                type4027 = ( HighlightType_20_Keyword2 );
                                            } else {
                                                if ( ( ( ! (  first_dash_char_dash_uppercase4026 ) ) && (  eq1981 ( ( (  peek1979 ) ( (  sc4003 ) ) ) , ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                                    type4027 = ( HighlightType_20_Ident4 );
                                                }
                                            }
                                        }
                                        struct envunion135  temp2125 = ( (struct envunion135){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                        ( temp2125.fun ( &temp2125.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = (  cur_dash_off4025 ) , .f_type = (  type4027 ) } ) ) );
                                    } else {
                                        struct Maybe_967  dref4035 = ( (  int2126 ) ( (  sc4003 ) ) );
                                        if ( dref4035.tag == Maybe_967_Just_t ) {
                                            int32_t  cur_dash_off4037 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                            enum HighlightType_20  type4038 = ( HighlightType_20_Number );
                                            if ( (  eq1059 ( ( dref4035 .stuff .Maybe_967_Just_s .field0 ) , (  from_dash_integral288 ( 0 ) ) ) ) ) {
                                                if ( ( (  try_dash_char1980 ) ( (  sc4003 ) ,  ( (  from_dash_charlike346 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2127 ) ( (  sc4003 ) ,  (  is_dash_hex2129 ) ) );
                                                    int32_t  cur_dash_off4039 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2131  temp2130 = ( (struct envunion2131){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                                    ( temp2130.fun ( &temp2130.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = (  cur_dash_off4039 ) , .f_type = (  type4038 ) } ) ) );
                                                    ( (  skip_dash_while2132 ) ( (  sc4003 ) ,  (  is_dash_alpha1335 ) ) );
                                                    int32_t  invalid_dash_off4040 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq558 ( (  cur_dash_off4039 ) , (  invalid_dash_off4040 ) ) ) ) {
                                                        struct envunion2134  temp2133 = ( (struct envunion2134){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                                        ( temp2133.fun ( &temp2133.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off4039 ) , .f_to = (  invalid_dash_off4040 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    if ( ( (  try_dash_char1980 ) ( (  sc4003 ) ,  ( (  from_dash_charlike346 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  skip_dash_while2135 ) ( (  sc4003 ) ,  (  is_dash_octal2137 ) ) );
                                                        int32_t  cur_dash_off4041 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                                        struct envunion2139  temp2138 = ( (struct envunion2139){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                                        ( temp2138.fun ( &temp2138.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = (  cur_dash_off4041 ) , .f_type = (  type4038 ) } ) ) );
                                                        ( (  skip_dash_while2140 ) ( (  sc4003 ) ,  (  is_dash_digit973 ) ) );
                                                        int32_t  invalid_dash_off4042 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                                        if ( ( !  eq558 ( (  cur_dash_off4041 ) , (  invalid_dash_off4042 ) ) ) ) {
                                                            struct envunion2143  temp2142 = ( (struct envunion2143){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                                            ( temp2142.fun ( &temp2142.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off4041 ) , .f_to = (  invalid_dash_off4042 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                        }
                                                    } else {
                                                        if ( ( (  try_dash_char1980 ) ( (  sc4003 ) ,  ( (  from_dash_charlike346 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  skip_dash_while2144 ) ( (  sc4003 ) ,  (  is_dash_binary2146 ) ) );
                                                            int32_t  cur_dash_off4043 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                                            struct envunion2148  temp2147 = ( (struct envunion2148){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                                            ( temp2147.fun ( &temp2147.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = (  cur_dash_off4043 ) , .f_type = (  type4038 ) } ) ) );
                                                            ( (  skip_dash_while2140 ) ( (  sc4003 ) ,  (  is_dash_digit973 ) ) );
                                                            int32_t  invalid_dash_off4044 = ( (  size_dash_i32329 ) ( ( ( * (  sc4003 ) ) .f_byte_dash_offset ) ) );
                                                            if ( ( !  eq558 ( (  cur_dash_off4043 ) , (  invalid_dash_off4044 ) ) ) ) {
                                                                struct envunion2150  temp2149 = ( (struct envunion2150){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                                                ( temp2149.fun ( &temp2149.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off4043 ) , .f_to = (  invalid_dash_off4044 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                            }
                                                        } else {
                                                            struct envunion2152  temp2151 = ( (struct envunion2152){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                                            ( temp2151.fun ( &temp2151.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = (  cur_dash_off4037 ) , .f_type = (  type4038 ) } ) ) );
                                                        }
                                                    }
                                                }
                                            } else {
                                                struct envunion2154  temp2153 = ( (struct envunion2154){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                                                ( temp2153.fun ( &temp2153.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4004 ) , .f_to = (  cur_dash_off4037 ) , .f_type = (  type4038 ) } ) ) );
                                            }
                                        }
                                        else {
                                            if ( dref4035.tag == Maybe_967_None_t ) {
                                                ( (  drop_prime_980 ) ( (  sc4003 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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
            struct Scanner_955  temp2155 = ( (  mk_dash_from_dash_str957 ) ( (  line_dash_sv4001 ) ) );
            struct Scanner_955 *  sc4045 = ( &temp2155 );
            if ( ( (  try_dash_char1980 ) ( (  sc4045 ) ,  ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
                struct envunion2157  temp2156 = ( (struct envunion2157){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                ( temp2156.fun ( &temp2156.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_integral56 ( 0 ) ) , .f_to = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line_dash_sv4001 ) ) ) ) ) , .f_type = ( HighlightType_20_Keyword1 ) } ) ) );
            } else {
                ( (  skip_dash_while2158 ) ( (  sc4045 ) ,  (  is_dash_whitespace1340 ) ) );
                int32_t  from_dash_off4046 = ( (  size_dash_i32329 ) ( ( ( * (  sc4045 ) ) .f_byte_dash_offset ) ) );
                if ( ( (  try_dash_char1980 ) ( (  sc4045 ) ,  ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) {
                    int32_t  to_dash_off4047 = ( (  size_dash_i32329 ) ( ( ( * (  sc4045 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2161  temp2160 = ( (struct envunion2161){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                    ( temp2160.fun ( &temp2160.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4046 ) , .f_to = (  to_dash_off4047 ) , .f_type = ( HighlightType_20_Special1 ) } ) ) );
                    ( (  skip_dash_while2158 ) ( (  sc4045 ) ,  (  is_dash_whitespace1340 ) ) );
                    int32_t  from_dash_off4048 = ( (  size_dash_i32329 ) ( ( ( * (  sc4045 ) ) .f_byte_dash_offset ) ) );
                    if ( ( (  matches_dash_str2052 ) ( (  sc4045 ) ,  ( (  from_dash_string199 ) ( ( "[ ]" ) ,  ( 3 ) ) ) ) ) ) {
                        int32_t  to_dash_off4049 = ( (  size_dash_i32329 ) ( ( ( * (  sc4045 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2163  temp2162 = ( (struct envunion2163){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                        ( temp2162.fun ( &temp2162.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4048 ) , .f_to = (  to_dash_off4049 ) , .f_type = ( HighlightType_20_Keyword1 ) } ) ) );
                    } else {
                        if ( ( ( (  matches_dash_str2052 ) ( (  sc4045 ) ,  ( (  from_dash_string199 ) ( ( "[x]" ) ,  ( 3 ) ) ) ) ) || ( (  matches_dash_str2052 ) ( (  sc4045 ) ,  ( (  from_dash_string199 ) ( ( "[X]" ) ,  ( 3 ) ) ) ) ) ) ) {
                            int32_t  to_dash_off4050 = ( (  size_dash_i32329 ) ( ( ( * (  sc4045 ) ) .f_byte_dash_offset ) ) );
                            struct envunion2165  temp2164 = ( (struct envunion2165){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                            ( temp2164.fun ( &temp2164.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4048 ) , .f_to = (  to_dash_off4050 ) , .f_type = ( HighlightType_20_Keyword2 ) } ) ) );
                        }
                    }
                }
            }
            break;
        }
        case Filetype_108_GCode : {
            struct Scanner_955  temp2166 = ( (  mk_dash_from_dash_str957 ) ( (  line_dash_sv4001 ) ) );
            struct Scanner_955 *  sc4051 = ( &temp2166 );
            ( (  skip_dash_while2158 ) ( (  sc4051 ) ,  (  is_dash_whitespace1340 ) ) );
            int32_t  first_dash_from_dash_off4052 = ( (  size_dash_i32329 ) ( ( ( * (  sc4051 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  char_dash_satisfies2167 ) ( (  sc4051 ) ,  (  is_dash_alphanumeric1334 ) ) ) ) {
                ( (  skip_dash_while2168 ) ( (  sc4051 ) ,  (  gcode_dash_keyword_dash_char2170 ) ) );
                int32_t  first_dash_to_dash_off4053 = ( (  size_dash_i32329 ) ( ( ( * (  sc4051 ) ) .f_byte_dash_offset ) ) );
                enum HighlightType_20  type4054 = ( HighlightType_20_Invalid );
                struct Char_65  first_dash_char4055 = ( (  to_dash_lower2171 ) ( ( (  char_dash_at_dash_offset2173 ) ( (  line_dash_sv4001 ) ,  ( (  i32_dash_size412 ) ( (  first_dash_from_dash_off4052 ) ) ) ) ) ) );
                if ( (  eq469 ( (  first_dash_char4055 ) , ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) {
                    type4054 = ( HighlightType_20_Keyword1 );
                } else {
                    if ( (  eq469 ( (  first_dash_char4055 ) , ( (  from_dash_charlike346 ) ( ( "g" ) ,  ( 1 ) ) ) ) ) ) {
                        type4054 = ( HighlightType_20_Ident1 );
                    }
                }
                struct envunion2183  temp2182 = ( (struct envunion2183){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                ( temp2182.fun ( &temp2182.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  first_dash_from_dash_off4052 ) , .f_to = (  first_dash_to_dash_off4053 ) , .f_type = (  type4054 ) } ) ) );
                ( (  skip_dash_while2158 ) ( (  sc4051 ) ,  (  is_dash_whitespace1340 ) ) );
                int32_t  from_dash_off4056 = ( (  size_dash_i32329 ) ( ( ( * (  sc4051 ) ) .f_byte_dash_offset ) ) );
                while ( ( (  char_dash_satisfies2167 ) ( (  sc4051 ) ,  (  is_dash_alphanumeric1334 ) ) ) ) {
                    ( (  skip_dash_while2168 ) ( (  sc4051 ) ,  (  gcode_dash_keyword_dash_char2170 ) ) );
                    int32_t  to_dash_off4057 = ( (  size_dash_i32329 ) ( ( ( * (  sc4051 ) ) .f_byte_dash_offset ) ) );
                    ( (  skip_dash_while2158 ) ( (  sc4051 ) ,  (  is_dash_whitespace1340 ) ) );
                    struct envunion2185  temp2184 = ( (struct envunion2185){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                    ( temp2184.fun ( &temp2184.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4056 ) , .f_to = (  to_dash_off4057 ) , .f_type = ( HighlightType_20_Ident4 ) } ) ) );
                }
            }
            while ( ( (  char_dash_satisfies2186 ) ( (  sc4051 ) ,  (  lam2187 ) ) ) ) {
            }
            int32_t  from_dash_off4060 = ( (  size_dash_i32329 ) ( ( ( * (  sc4051 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  try_dash_char1980 ) ( (  sc4051 ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ) {
                struct envunion2189  temp2188 = ( (struct envunion2189){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1987 , .env =  env->envinst35 } );
                ( temp2188.fun ( &temp2188.env ,  (  hls4000 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4060 ) , .f_to = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line_dash_sv4001 ) ) ) ) ) , .f_type = ( HighlightType_20_Comment ) } ) ) );
            }
            break;
        }
    }
    (*  line3999 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_18   subslice2192 (    struct Slice_18  slice1818 ,    size_t  from1820 ,    size_t  to1822 ) {
    struct Highlight_19 *  begin_dash_ptr1823 = ( (  offset_dash_ptr2001 ) ( ( (  slice1818 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1820 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1820 ) , (  to1822 ) ) != 0 ) || (  cmp290 ( (  from1820 ) , ( (  slice1818 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1824 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1822 ) ,  ( (  slice1818 ) .f_count ) ) ) , (  from1820 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  count1824 ) } );
}

static  struct SliceIter_2005   into_dash_iter2191 (    struct List_17  self2065 ) {
    return ( (  into_dash_iter2014 ) ( ( (  subslice2192 ) ( ( (  self2065 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2065 ) .f_count ) ) ) ) );
}

static  bool   between2194 (    int32_t  c1367 ,    int32_t  l1369 ,    int32_t  r1371 ) {
    int32_t  from1372 = ( (  min659 ) ( (  l1369 ) ,  (  r1371 ) ) );
    int32_t  to1373 = ( (  max1110 ) ( (  l1369 ) ,  (  r1371 ) ) );
    return ( (  cmp157 ( (  from1372 ) , (  c1367 ) ) != 2 ) && (  cmp157 ( (  c1367 ) , (  to1373 ) ) != 2 ) );
}

static  struct Maybe_203   highlight_dash_at1971 (   struct env136* env ,    struct TextBuf_105 *  self4063 ,    struct Pos_26  pos4065 ) {
    struct Line_16 *  line4066 = ( (  get_dash_ptr565 ) ( ( & ( ( * (  self4063 ) ) .f_buf ) ) ,  ( (  i32_dash_size412 ) ( ( (  pos4065 ) .f_line ) ) ) ) );
    struct envunion137  temp1972 = ( (struct envunion137){ .fun = (  enum Unit_8  (*) (  struct env134*  ,    struct TextBuf_105 *  ,    struct Line_16 *  ) )recompute_dash_highlights_dash_at_dash_line1973 , .env =  env->envinst134 } );
    ( temp1972.fun ( &temp1972.env ,  (  self4063 ) ,  (  line4066 ) ) );
    struct SliceIter_2005  temp2190 =  into_dash_iter2191 ( ( ( * (  line4066 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2010  __cond2193 =  next2011 (&temp2190);
        if (  __cond2193 .tag == 0 ) {
            break;
        }
        struct Highlight_19  hl4068 =  __cond2193 .stuff .Maybe_2010_Just_s .field0;
        if ( ( (  between2194 ) ( ( (  pos4065 ) .f_bi ) ,  ( (  hl4068 ) .f_from ) ,  (  op_dash_sub164 ( ( (  hl4068 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_203_Just ) ( ( (  hl4068 ) .f_type ) ) );
        }
        if ( (  cmp157 ( ( (  pos4065 ) .f_bi ) , ( (  hl4068 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_203) { .tag = Maybe_203_None_t } );
        }
    }
    return ( (struct Maybe_203) { .tag = Maybe_203_None_t } );
}

struct Maybe_2198 {
    enum {
        Maybe_2198_None_t,
        Maybe_2198_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_175  field0;
        } Maybe_2198_Just_s;
    } stuff;
};

static struct Maybe_2198 Maybe_2198_Just (  struct HighlightColors_175  field0 ) {
    return ( struct Maybe_2198 ) { .tag = Maybe_2198_Just_t, .stuff = { .Maybe_2198_Just_s = { .field0 = field0 } } };
};

struct env2199 {
    struct Theme_172 *  theme4104;
    ;
};

struct envunion2200 {
    struct Colors_173  (*fun) (  struct env2199*  ,    struct HighlightColors_175  );
    struct env2199 env;
};

static  struct Colors_173   maybe2197 (    struct Maybe_2198  x1312 ,   struct envunion2200  fun1314 ,    struct Colors_173  default1316 ) {
    struct envunion2200  temp2201 = (  fun1314 );
    return ( {  struct Maybe_2198  dref1317 = (  x1312 ) ; dref1317.tag == Maybe_2198_Just_t ? ( temp2201.fun ( &temp2201.env ,  ( dref1317 .stuff .Maybe_2198_Just_s .field0 ) ) ) : (  default1316 ) ; } );
}

struct SliceIter_2204 {
    struct Slice_174  f_slice;
    size_t  f_current_dash_offset;
};

struct env2205 {
    ;
    enum HighlightType_20  hltype4106;
};

struct envunion2206 {
    bool  (*fun) (  struct env2205*  ,    struct HighlightColors_175  );
    struct env2205 env;
};

struct Filter_2203 {
    struct SliceIter_2204  f_og;
    struct envunion2206  f_fun;
};

static  struct HighlightColors_175 *   offset_dash_ptr2209 (    struct HighlightColors_175 *  x338 ,    int64_t  count340 ) {
    struct HighlightColors_175  temp2210;
    return ( (struct HighlightColors_175 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2210 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2198   next2208 (    struct SliceIter_2204 *  self1870 ) {
    size_t  off1871 = ( ( * (  self1870 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1870 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2198) { .tag = Maybe_2198_None_t } );
    }
    struct HighlightColors_175  elem1872 = ( * ( (  offset_dash_ptr2209 ) ( ( ( ( * (  self1870 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1871 ) ) ) ) ) );
    (*  self1870 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2198_Just ) ( (  elem1872 ) ) );
}

static  struct Maybe_2198   next2207 (    struct Filter_2203 *  self846 ) {
    while ( ( true ) ) {
        struct Maybe_2198  dref847 = ( (  next2208 ) ( ( & ( ( * (  self846 ) ) .f_og ) ) ) );
        if ( dref847.tag == Maybe_2198_None_t ) {
            return ( (struct Maybe_2198) { .tag = Maybe_2198_None_t } );
        }
        else {
            if ( dref847.tag == Maybe_2198_Just_t ) {
                struct envunion2206  temp2211 = ( ( * (  self846 ) ) .f_fun );
                if ( ( temp2211.fun ( &temp2211.env ,  ( dref847 .stuff .Maybe_2198_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2198_Just ) ( ( dref847 .stuff .Maybe_2198_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2198  temp2212;
    return (  temp2212 );
}

static  struct Filter_2203   into_dash_iter2214 (    struct Filter_2203  self843 ) {
    return (  self843 );
}

static  struct Maybe_2198   head2202 (    struct Filter_2203  it1172 ) {
    struct Filter_2203  temp2213 = ( (  into_dash_iter2214 ) ( (  it1172 ) ) );
    return ( (  next2207 ) ( ( &temp2213 ) ) );
}

static  struct SliceIter_2204   into_dash_iter2216 (    struct Slice_174  self1864 ) {
    return ( (struct SliceIter_2204) { .f_slice = (  self1864 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2203   filter2215 (    struct Slice_174  iterable851 ,   struct envunion2206  fun853 ) {
    struct SliceIter_2204  it854 = ( (  into_dash_iter2216 ) ( (  iterable851 ) ) );
    return ( (struct Filter_2203) { .f_og = (  it854 ) , .f_fun = (  fun853 ) } );
}

static  enum HighlightType_20 *   cast2221 (    uint32_t *  x356 ) {
    return ( (enum HighlightType_20 * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2219 (    enum HighlightType_20  x574 ) {
    uint32_t  temp2220 = ( (  zeroed807 ) ( ) );
    uint32_t *  y575 = ( &temp2220 );
    enum HighlightType_20 *  yp576 = ( (  cast2221 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2218 (    enum HighlightType_20  l3709 ,    enum HighlightType_20  r3711 ) {
    return (  eq473 ( ( ( (  cast_dash_on_dash_zeroed2219 ) ( (  l3709 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2219 ) ( (  r3711 ) ) ) ) );
}

static  bool   lam2217 (   struct env2205* env ,    struct HighlightColors_175  hlc4108 ) {
    return (  eq2218 ( ( (  hlc4108 ) .f_type ) , ( env->hltype4106 ) ) );
}

static  struct Color_138   or_dash_else2223 (    struct Maybe_176  self1763 ,    struct Color_138  alt1765 ) {
    struct Maybe_176  dref1766 = (  self1763 );
    if ( dref1766.tag == Maybe_176_None_t ) {
        return (  alt1765 );
    }
    else {
        if ( dref1766.tag == Maybe_176_Just_t ) {
            return ( dref1766 .stuff .Maybe_176_Just_s .field0 );
        }
    }
}

static  struct Colors_173   lam2222 (   struct env2199* env ,    struct HighlightColors_175  hlc4110 ) {
    return ( (struct Colors_173) { .f_fg = ( (  hlc4110 ) .f_fg ) , .f_bg = ( (  or_dash_else2223 ) ( ( (  hlc4110 ) .f_bg ) ,  ( ( ( * ( env->theme4104 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_173   find_dash_colors_dash_for_dash_highlight2196 (    struct Theme_172 *  theme4104 ,    enum HighlightType_20  hltype4106 ) {
    struct env2205 envinst2205 = {
        .hltype4106 =  hltype4106 ,
    };
    struct env2199 envinst2199 = {
        .theme4104 =  theme4104 ,
    };
    return ( (  maybe2197 ) ( ( (  head2202 ) ( ( (  filter2215 ) ( ( ( * (  theme4104 ) ) .f_highlights ) ,  ( (struct envunion2206){ .fun = (  bool  (*) (  struct env2205*  ,    struct HighlightColors_175  ) )lam2217 , .env =  envinst2205 } ) ) ) ) ) ,  ( (struct envunion2200){ .fun = (  struct Colors_173  (*) (  struct env2199*  ,    struct HighlightColors_175  ) )lam2222 , .env =  envinst2199 } ) ,  ( ( * (  theme4104 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2195 (   struct env1967* env ,    enum HighlightType_20  type4237 ) {
    ( (  set_dash_colors1932 ) ( ( env->screen4207 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2196 ) ( ( env->theme4214 ) ,  (  type4237 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2227 (  ) {
    ( (  print1346 ) ( ( (  from_dash_string199 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1694 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2226 (    enum Mode_220  mode4125 ) {
    return ( {  enum Mode_220  dref4126 = (  mode4125 ) ;  dref4126 == Mode_220_Normal ? ( (  from_dash_string199 ) ( ( "NOR" ) ,  ( 3 ) ) ) :  dref4126 == Mode_220_Insert ? ( (  from_dash_string199 ) ( ( "INS" ) ,  ( 3 ) ) ) :  dref4126 == Mode_220_Select ? ( (  from_dash_string199 ) ( ( "SEL" ) ,  ( 3 ) ) ) : ( (  todo2227 ) ( ) ) ; } );
}

struct StrConcat_2230 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2230 StrConcat_2230_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2230 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2229 {
    struct StrConcat_2230  field0;
    struct Char_65  field1;
};

static struct StrConcat_2229 StrConcat_2229_StrConcat (  struct StrConcat_2230  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2229 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2233 {
    struct AppendIter_1020  f_left;
    struct StrViewIter_458  f_right;
};

struct StrConcatIter_2232 {
    struct StrConcatIter_2233  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2232   into_dash_iter2234 (    struct StrConcatIter_2232  self1527 ) {
    return (  self1527 );
}

static  struct StrConcatIter_2233   into_dash_iter2238 (    struct StrConcat_2230  dref1534 ) {
    return ( (struct StrConcatIter_2233) { .f_left = ( (  chars1060 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2233   chars2237 (    struct StrConcat_2230  self1545 ) {
    return ( (  into_dash_iter2238 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_2232   into_dash_iter2236 (    struct StrConcat_2229  dref1534 ) {
    return ( (struct StrConcatIter_2232) { .f_left = ( (  chars2237 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2232   chars2235 (    struct StrConcat_2229  self1545 ) {
    return ( (  into_dash_iter2236 ) ( (  self1545 ) ) );
}

static  struct Maybe_297   next2241 (    struct StrConcatIter_2233 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2240 (    struct StrConcatIter_2232 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2241 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2228 (    struct Screen_276 *  screen3645 ,    struct StrConcat_2229  s3647 ,    int32_t  x3649 ,    int32_t  y3651 ) {
    int32_t  w3652 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3645 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3651 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3651 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3645 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3653 = (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3651 ) , (  w3652 ) ) ) , (  x3649 ) ) );
    int32_t  x3654 = ( (  min659 ) ( (  x3649 ) ,  (  w3652 ) ) );
    size_t  max_dash_len3655 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3652 ) , (  x3654 ) ) ) ) );
    int32_t  xx3656 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2232  temp2231 =  into_dash_iter2234 ( ( (  chars2235 ) ( (  s3647 ) ) ) );
    while (true) {
        struct Maybe_297  __cond2239 =  next2240 (&temp2231);
        if (  __cond2239 .tag == 0 ) {
            break;
        }
        struct Char_65  c3658 =  __cond2239 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3645 ) ,  (  c3658 ) ,  (  op_dash_add159 ( (  x3654 ) , (  xx3656 ) ) ) ,  (  y3651 ) ) );
        xx3656 = (  op_dash_add159 ( (  xx3656 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3658 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1907 (   struct env201* env ,    struct Screen_276 *  screen4207 ,    struct Pane_219 *  pane4209 ,    struct ScreenDims_279  sd4211 ,    struct Config_250 *  cfg4213 ) {
    struct Theme_172 *  theme4214 = ( ( * (  cfg4213 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4215 = ( ( * (  cfg4213 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4216 = ( ( * (  cfg4213 ) ) .f_relative_dash_line_dash_numbers );
    ( (  update_dash_screen_dash_offset1908 ) ( (  pane4209 ) ,  (  sd4211 ) ) );
    struct ScreenCursorOffset_221  sc_dash_off4217 = ( ( * (  pane4209 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars4218 = ( (  size_dash_i32329 ) ( ( (  count1911 ) ( ( (  chars1927 ) ( ( (  num_dash_lines1137 ) ( ( ( * (  pane4209 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4219 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4220 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4221 = ( (  display_dash_line_dash_numbers4215 ) ? (  op_dash_add159 ( (  op_dash_add159 ( (  max_dash_line_dash_num_dash_chars4218 ) , (  num_dash_front_dash_margin4219 ) ) ) , (  num_dash_back_dash_margin4220 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct RangeIter_153  temp1930 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( ( (  sc_dash_off4217 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min659 ) ( ( (  num_dash_lines1137 ) ( ( ( * (  pane4209 ) ) .f_buf ) ) ) ,  (  op_dash_add159 ( ( (  sc_dash_off4217 ) .f_screen_dash_top ) , ( (  screen_dash_height1910 ) ( (  sd4211 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1931 =  next156 (&temp1930);
        if (  __cond1931 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4223 =  __cond1931 .stuff .Maybe_155_Just_s .field0;
        int32_t  ybi4224 = (  op_dash_sub164 ( (  line_dash_num4223 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4225 = ( (  vi_dash_bi1139 ) ( ( ( * (  pane4209 ) ) .f_buf ) ,  (  ybi4224 ) ,  ( (  sc_dash_off4217 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4226 = ( (  line1097 ) ( ( ( * (  pane4209 ) ) .f_buf ) ,  (  ybi4224 ) ) );
        int32_t  ys4227 = (  op_dash_sub164 ( (  op_dash_sub164 ( (  op_dash_add159 ( ( (  sd4211 ) .f_from_dash_sy ) , (  line_dash_num4223 ) ) ) , ( (  sc_dash_off4217 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4215 ) ) {
            if ( (  eq558 ( ( ( ( * (  pane4209 ) ) .f_cursor ) .f_line ) , (  ybi4224 ) ) ) ) {
                ( (  set_dash_colors1932 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors1932 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4228 = ( ( ( ! (  relative_dash_line_dash_numbers4216 ) ) || (  eq558 ( ( ( ( * (  pane4209 ) ) .f_cursor ) .f_line ) , (  ybi4224 ) ) ) ) ? (  line_dash_num4223 ) : ( (  abs1934 ) ( (  op_dash_sub164 ( ( ( ( * (  pane4209 ) ) .f_cursor ) .f_line ) , (  ybi4224 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right1935 ) ( (  screen4207 ) ,  (  line_dash_display4228 ) ,  (  op_dash_add159 ( (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4207 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4211 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4221 ) ) ) , (  num_dash_back_dash_margin4220 ) ) ) ,  (  ys4227 ) ) );
            ( (  set_dash_colors1932 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_default ) ) );
        }
        int32_t  vx4229 = (  op_dash_sub164 ( ( (  pos_dash_vi1095 ) ( ( ( * (  pane4209 ) ) .f_buf ) ,  ( (  mk694 ) ( (  ybi4224 ) ,  (  xbi4225 ) ) ) ) ) , ( (  sc_dash_off4217 ) .f_screen_dash_left ) ) );
        ( (  assert1951 ) ( (  cmp157 ( (  vx4229 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1952_StrConcat ) ( ( (  from_dash_string199 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4229 ) ) ) ) );
        int32_t  left_dash_offset4230 = (  op_dash_add159 ( ( (  sd4211 ) .f_from_dash_sx ) , (  total_dash_margin4221 ) ) );
        struct AppendIter_1959  temp1958 =  into_dash_iter1960 ( ( (  append1961 ) ( ( (  chars460 ) ( ( (  byte_dash_substr_dash_from464 ) ( (  line_dash_content4226 ) ,  ( (  i32_dash_size412 ) ( (  xbi4225 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_297  __cond1962 =  next1963 (&temp1958);
            if (  __cond1962 .tag == 0 ) {
                break;
            }
            struct Char_65  c4232 =  __cond1962 .stuff .Maybe_297_Just_s .field0;
            if ( (  cmp157 ( (  vx4229 ) , ( (  sd4211 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4233 = ( (  mk694 ) ( (  ybi4224 ) ,  (  xbi4225 ) ) );
            bool  is_dash_cursor4234 = (  eq557 ( (  curpos4233 ) , ( ( * (  pane4209 ) ) .f_cursor ) ) );
            bool  in_dash_selection4235 = ( (  is_dash_in_dash_selection1964 ) ( (  pane4209 ) ,  ( (  mk694 ) ( (  ybi4224 ) ,  (  xbi4225 ) ) ) ) );
            if ( (  is_dash_cursor4234 ) ) {
                ( (  set_dash_colors1932 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4235 ) ) {
                    ( (  set_dash_colors1932 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_selection ) ) );
                } else {
                    struct envunion202  temp1970 = ( (struct envunion202){ .fun = (  struct Maybe_203  (*) (  struct env136*  ,    struct TextBuf_105 *  ,    struct Pos_26  ) )highlight_dash_at1971 , .env =  env->envinst136 } );
                    struct env1967 envinst1967 = {
                        .theme4214 =  theme4214 ,
                        .screen4207 =  screen4207 ,
                    };
                    ( (  if_dash_just1966 ) ( ( temp1970.fun ( &temp1970.env ,  ( ( * (  pane4209 ) ) .f_buf ) ,  (  curpos4233 ) ) ) ,  ( (struct envunion1968){ .fun = (  enum Unit_8  (*) (  struct env1967*  ,    enum HighlightType_20  ) )lam2195 , .env =  envinst1967 } ) ) );
                }
            }
            struct Maybe_80  dref4238 = ( (  char_dash_replacement1102 ) ( (  c4232 ) ) );
            if ( dref4238.tag == Maybe_80_None_t ) {
                if ( ( ! ( (  cmp157 ( (  vx4229 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  op_dash_sub164 ( (  op_dash_add159 ( (  vx4229 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4232 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4211 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1948 ) ( (  screen4207 ) ,  (  c4232 ) ,  (  op_dash_add159 ( (  left_dash_offset4230 ) , (  vx4229 ) ) ) ,  (  ys4227 ) ) );
                }
                vx4229 = (  op_dash_add159 ( (  vx4229 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4232 ) ) ) ) );
            }
            else {
                if ( dref4238.tag == Maybe_80_Just_t ) {
                    struct StrViewIter_458  temp2224 =  into_dash_iter459 ( ( (  chars460 ) ( ( dref4238 .stuff .Maybe_80_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_297  __cond2225 =  next463 (&temp2224);
                        if (  __cond2225 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4241 =  __cond2225 .stuff .Maybe_297_Just_s .field0;
                        if ( (  cmp157 ( (  vx4229 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1948 ) ( (  screen4207 ) ,  (  c4241 ) ,  (  op_dash_add159 ( (  left_dash_offset4230 ) , (  vx4229 ) ) ) ,  (  ys4227 ) ) );
                        }
                        vx4229 = (  op_dash_add159 ( (  vx4229 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4241 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors1932 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_default ) ) );
            xbi4225 = (  op_dash_add159 ( (  xbi4225 ) , ( (  size_dash_i32329 ) ( ( (  c4232 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors1932 ) ( (  screen4207 ) ,  ( ( * (  theme4214 ) ) .f_overlay ) ) );
    struct StrView_27  modename4242 = ( (  short_dash_mode_dash_name2226 ) ( ( ( * (  pane4209 ) ) .f_mode ) ) );
    ( (  draw_dash_str2228 ) ( (  screen4207 ) ,  ( ( StrConcat_2229_StrConcat ) ( ( ( StrConcat_2230_StrConcat ) ( ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  modename4242 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4211 ) .f_from_dash_sx ) ,  ( (  sd4211 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2243 {
    ;
    ;
    ;
    ;
    ;
    struct Screen_276 *  screen4630;
    ;
    ;
    ;
    ;
};

struct envunion2244 {
    enum Unit_8  (*fun) (  struct env2243*  ,    struct StrView_27  );
    struct env2243 env;
};

static  enum Unit_8   if_dash_just2242 (    struct Maybe_80  x1321 ,   struct envunion2244  fun1323 ) {
    struct Maybe_80  dref1324 = (  x1321 );
    if ( dref1324.tag == Maybe_80_Just_t ) {
        struct envunion2244  temp2245 = (  fun1323 );
        ( temp2245.fun ( &temp2245.env ,  ( dref1324 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1324.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2246 (   struct env2243* env ,    struct StrView_27  msg4635 ) {
    int32_t  num_dash_chars4636 = ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars460 ) ( (  msg4635 ) ) ) ) ) ) );
    ( (  draw_dash_str2228 ) ( ( env->screen4630 ) ,  ( ( StrConcat_2229_StrConcat ) ( ( ( StrConcat_2230_StrConcat ) ( ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  msg4635 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1523 ( (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * ( env->screen4630 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4636 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * ( env->screen4630 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2249 {
    struct StrView_27  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2249 StrConcat_2249_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2249 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2248 {
    struct StrConcat_2249  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2248 StrConcat_2248_StrConcat (  struct StrConcat_2249  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2248 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2247 {
    struct StrConcat_2248  field0;
    struct Char_65  field1;
};

static struct StrConcat_2247 StrConcat_2247_StrConcat (  struct StrConcat_2248  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2247 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2252 {
    struct StrConcatIter_1730  f_left;
    struct StrViewIter_458  f_right;
};

struct StrConcatIter_2251 {
    struct StrConcatIter_2252  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2251   into_dash_iter2254 (    struct StrConcatIter_2251  self1527 ) {
    return (  self1527 );
}

static  struct Maybe_297   next2256 (    struct StrConcatIter_2252 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next1738 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2255 (    struct StrConcatIter_2251 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2256 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2253 (    struct StrConcatIter_2251  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct StrConcatIter_2251  it1129 = ( (  into_dash_iter2254 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1130 = ( (  next2255 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_297_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_297_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp2257 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2257);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2258;
    return (  temp2258 );
}

static  size_t   lam2259 (    struct Char_65  dref1135 ,    size_t  x1137 ) {
    return (  op_dash_add311 ( (  x1137 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2250 (    struct StrConcatIter_2251  it1134 ) {
    return ( (  reduce2253 ) ( (  it1134 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2259 ) ) );
}

static  struct StrConcatIter_1730   into_dash_iter2265 (    struct StrConcat_2249  dref1534 ) {
    return ( (struct StrConcatIter_1730) { .f_left = ( (  chars460 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1698 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_1730   chars2264 (    struct StrConcat_2249  self1545 ) {
    return ( (  into_dash_iter2265 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_2252   into_dash_iter2263 (    struct StrConcat_2248  dref1534 ) {
    return ( (struct StrConcatIter_2252) { .f_left = ( (  chars2264 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2252   chars2262 (    struct StrConcat_2248  self1545 ) {
    return ( (  into_dash_iter2263 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_2251   into_dash_iter2261 (    struct StrConcat_2247  dref1534 ) {
    return ( (struct StrConcatIter_2251) { .f_left = ( (  chars2262 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2251   chars2260 (    struct StrConcat_2247  self1545 ) {
    return ( (  into_dash_iter2261 ) ( (  self1545 ) ) );
}

static  enum Unit_8   draw_dash_str2266 (    struct Screen_276 *  screen3645 ,    struct StrConcat_2247  s3647 ,    int32_t  x3649 ,    int32_t  y3651 ) {
    int32_t  w3652 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3645 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3651 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3651 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3645 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3653 = (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3651 ) , (  w3652 ) ) ) , (  x3649 ) ) );
    int32_t  x3654 = ( (  min659 ) ( (  x3649 ) ,  (  w3652 ) ) );
    size_t  max_dash_len3655 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3652 ) , (  x3654 ) ) ) ) );
    int32_t  xx3656 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2251  temp2267 =  into_dash_iter2254 ( ( (  chars2260 ) ( (  s3647 ) ) ) );
    while (true) {
        struct Maybe_297  __cond2268 =  next2255 (&temp2267);
        if (  __cond2268 .tag == 0 ) {
            break;
        }
        struct Char_65  c3658 =  __cond2268 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3645 ) ,  (  c3658 ) ,  (  op_dash_add159 ( (  x3654 ) , (  xx3656 ) ) ) ,  (  y3651 ) ) );
        xx3656 = (  op_dash_add159 ( (  xx3656 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3658 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2269 {
    struct StrConcat_2248  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2269 StrConcat_2269_StrConcat (  struct StrConcat_2248  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2269 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2271 {
    struct StrConcatIter_2252  f_left;
    struct StrViewIter_458  f_right;
};

static  struct StrConcatIter_2271   into_dash_iter2273 (    struct StrConcatIter_2271  self1527 ) {
    return (  self1527 );
}

static  struct Maybe_297   next2274 (    struct StrConcatIter_2271 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2256 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2272 (    struct StrConcatIter_2271  iterable1123 ,    size_t  base1125 ,    size_t (*  fun1127 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1128 = (  base1125 );
    struct StrConcatIter_2271  it1129 = ( (  into_dash_iter2273 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1130 = ( (  next2274 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_297_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_297_Just_t ) {
                x1128 = ( (  fun1127 ) ( ( dref1130 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp2275 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2275);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2276;
    return (  temp2276 );
}

static  size_t   lam2277 (    struct Char_65  dref1135 ,    size_t  x1137 ) {
    return (  op_dash_add311 ( (  x1137 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2270 (    struct StrConcatIter_2271  it1134 ) {
    return ( (  reduce2272 ) ( (  it1134 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2277 ) ) );
}

static  struct StrConcatIter_2271   into_dash_iter2279 (    struct StrConcat_2269  dref1534 ) {
    return ( (struct StrConcatIter_2271) { .f_left = ( (  chars2262 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2271   chars2278 (    struct StrConcat_2269  self1545 ) {
    return ( (  into_dash_iter2279 ) ( (  self1545 ) ) );
}

static  enum Unit_8   draw_dash_str2280 (    struct Screen_276 *  screen3645 ,    struct StrConcat_2269  s3647 ,    int32_t  x3649 ,    int32_t  y3651 ) {
    int32_t  w3652 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3645 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3651 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3651 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3645 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3653 = (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3651 ) , (  w3652 ) ) ) , (  x3649 ) ) );
    int32_t  x3654 = ( (  min659 ) ( (  x3649 ) ,  (  w3652 ) ) );
    size_t  max_dash_len3655 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3652 ) , (  x3654 ) ) ) ) );
    int32_t  xx3656 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2271  temp2281 =  into_dash_iter2273 ( ( (  chars2278 ) ( (  s3647 ) ) ) );
    while (true) {
        struct Maybe_297  __cond2282 =  next2274 (&temp2281);
        if (  __cond2282 .tag == 0 ) {
            break;
        }
        struct Char_65  c3658 =  __cond2282 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3645 ) ,  (  c3658 ) ,  (  op_dash_add159 ( (  x3654 ) , (  xx3656 ) ) ) ,  (  y3651 ) ) );
        xx3656 = (  op_dash_add159 ( (  xx3656 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3658 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1905 (   struct env274* env ,    struct Screen_276 *  screen4630 ,    struct Editor_248 *  ed4632 ) {
    struct ScreenDims_279  screen_dash_dims4633 = ( (struct ScreenDims_279) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4630 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4630 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion275  temp1906 = ( (struct envunion275){ .fun = (  enum Unit_8  (*) (  struct env201*  ,    struct Screen_276 *  ,    struct Pane_219 *  ,    struct ScreenDims_279  ,    struct Config_250 *  ) )render1907 , .env =  env->envinst201 } );
    ( temp1906.fun ( &temp1906.env ,  (  screen4630 ) ,  ( (  pane1134 ) ( (  ed4632 ) ) ) ,  (  screen_dash_dims4633 ) ,  ( ( * (  ed4632 ) ) .f_cfg ) ) );
    struct env2243 envinst2243 = {
        .screen4630 =  screen4630 ,
    };
    ( (  if_dash_just2242 ) ( ( ( * (  ed4632 ) ) .f_msg ) ,  ( (struct envunion2244){ .fun = (  enum Unit_8  (*) (  struct env2243*  ,    struct StrView_27  ) )lam2246 , .env =  envinst2243 } ) ) );
    struct EditorMode_249  dref4637 = ( ( * (  ed4632 ) ) .f_mode );
    if ( dref4637.tag == EditorMode_249_Normal_t ) {
    }
    else {
        if ( dref4637.tag == EditorMode_249_Cmd_t ) {
            int32_t  num_dash_chars4639 = ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars1698 ) ( ( dref4637 .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4640 = ( (  eq558 ( ( (  mod1522 ) ( (  num_dash_chars4639 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1229 ) ( ( " " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4641 = (  op_dash_add159 ( (  num_dash_chars4639 ) , ( (  mod1522 ) ( (  num_dash_chars4639 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
            struct StrConcat_2247  full_dash_str4642 = ( ( StrConcat_2247_StrConcat ) ( ( ( StrConcat_2248_StrConcat ) ( ( ( StrConcat_2249_StrConcat ) ( ( (  from_dash_string199 ) ( ( " \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4637 .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ,  (  pad4640 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4643 = ( (  size_dash_i32329 ) ( ( (  count2250 ) ( ( (  chars2260 ) ( (  full_dash_str4642 ) ) ) ) ) ) );
            ( (  draw_dash_str2266 ) ( (  screen4630 ) ,  (  full_dash_str4642 ) ,  (  op_dash_div1523 ( (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4630 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4643 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
        }
        else {
            if ( dref4637.tag == EditorMode_249_Search_t ) {
                int32_t  num_dash_chars4645 = ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars1698 ) ( ( dref4637 .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4646 = ( (  eq558 ( ( (  mod1522 ) ( (  num_dash_chars4645 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1229 ) ( ( " " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4647 = (  op_dash_add159 ( (  num_dash_chars4645 ) , ( (  mod1522 ) ( (  num_dash_chars4645 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
                struct StrConcat_2269  full_dash_str4648 = ( ( StrConcat_2269_StrConcat ) ( ( ( StrConcat_2248_StrConcat ) ( ( ( StrConcat_2249_StrConcat ) ( ( (  from_dash_string199 ) ( ( " \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4637 .stuff .EditorMode_249_Search_s .field1 ) ) ) ,  (  pad4646 ) ) ) ,  ( (  from_dash_string199 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4649 = ( (  size_dash_i32329 ) ( ( (  count2270 ) ( ( (  chars2278 ) ( (  full_dash_str4648 ) ) ) ) ) ) );
                ( (  draw_dash_str2280 ) ( (  screen4630 ) ,  (  full_dash_str4648 ) ,  (  op_dash_div1523 ( (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4630 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4649 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            }
        }
    }
    int32_t  temp2283 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4650 = ( &temp2283 );
    return ( Unit_8_Unit );
}

struct RenderState_2285 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_138  f_fg;
    struct Color_138  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2292 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2292 StrConcat_2292_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2292 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2291 {
    struct StrConcat_2292  field0;
    struct Char_65  field1;
};

static struct StrConcat_2291 StrConcat_2291_StrConcat (  struct StrConcat_2292  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2291 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2290 {
    struct StrConcat_2291  field0;
    uint32_t  field1;
};

static struct StrConcat_2290 StrConcat_2290_StrConcat (  struct StrConcat_2291  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2290 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2289 {
    struct StrConcat_2290  field0;
    struct Char_65  field1;
};

static struct StrConcat_2289 StrConcat_2289_StrConcat (  struct StrConcat_2290  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2289 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2298 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2297 {
    struct StrViewIter_458  f_left;
    struct IntStrIter_2298  f_right;
};

struct StrConcatIter_2296 {
    struct StrConcatIter_2297  f_left;
    struct AppendIter_1020  f_right;
};

struct StrConcatIter_2295 {
    struct StrConcatIter_2296  f_left;
    struct IntStrIter_2298  f_right;
};

struct StrConcatIter_2294 {
    struct StrConcatIter_2295  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2294   into_dash_iter2300 (    struct StrConcatIter_2294  self1527 ) {
    return (  self1527 );
}

static  struct Maybe_297   next2305 (    struct IntStrIter_2298 *  self1458 ) {
    if ( ( ( * (  self1458 ) ) .f_negative ) ) {
        (*  self1458 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint32_t  trim_dash_down1459 = ( (  pow148 ) ( (  from_dash_integral165 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1460 = (  op_dash_div147 ( ( ( * (  self1458 ) ) .f_int ) , (  trim_dash_down1459 ) ) );
    uint32_t  upper_dash_mask1461 = (  op_dash_mul167 ( (  op_dash_div147 ( (  upper1460 ) , (  from_dash_integral165 ( 10 ) ) ) ) , (  from_dash_integral165 ( 10 ) ) ) );
    uint8_t  digit1462 = ( ( (  cast145 ) ( (  op_dash_sub169 ( (  upper1460 ) , (  upper_dash_mask1461 ) ) ) ) ) );
    (*  self1458 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1463 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1462 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1463 ) ) );
}

static  struct Maybe_297   next2304 (    struct StrConcatIter_2297 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next2305 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2303 (    struct StrConcatIter_2296 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2304 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2302 (    struct StrConcatIter_2295 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2303 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next2305 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2301 (    struct StrConcatIter_2294 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2302 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2293 (    struct StrConcatIter_2294  iterable1104 ,    enum Unit_8 (*  fun1106 )(    struct Char_65  ) ) {
    struct StrConcatIter_2294  temp2299 = ( (  into_dash_iter2300 ) ( (  iterable1104 ) ) );
    struct StrConcatIter_2294 *  it1107 = ( &temp2299 );
    while ( ( true ) ) {
        struct Maybe_297  dref1108 = ( (  next2301 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_297_Just_t ) {
                ( (  fun1106 ) ( ( dref1108 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2316 (    uint32_t  self1466 ) {
    if ( (  eq473 ( (  self1466 ) , (  from_dash_integral165 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1467 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp170 ( (  self1466 ) , (  from_dash_integral165 ( 0 ) ) ) == 2 ) ) {
        self1466 = (  op_dash_div147 ( (  self1466 ) , (  from_dash_integral165 ( 10 ) ) ) );
        digits1467 = (  op_dash_add159 ( (  digits1467 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1467 );
}

static  struct IntStrIter_2298   uint_dash_iter2315 (    uint32_t  int1473 ) {
    return ( (struct IntStrIter_2298) { .f_int = (  int1473 ) , .f_len = ( (  count_dash_digits2316 ) ( (  int1473 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2298   chars2314 (    uint32_t  self1485 ) {
    return ( (  uint_dash_iter2315 ) ( (  self1485 ) ) );
}

static  struct StrConcatIter_2297   into_dash_iter2313 (    struct StrConcat_2292  dref1534 ) {
    return ( (struct StrConcatIter_2297) { .f_left = ( (  chars460 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars2314 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2297   chars2312 (    struct StrConcat_2292  self1545 ) {
    return ( (  into_dash_iter2313 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_2296   into_dash_iter2311 (    struct StrConcat_2291  dref1534 ) {
    return ( (struct StrConcatIter_2296) { .f_left = ( (  chars2312 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2296   chars2310 (    struct StrConcat_2291  self1545 ) {
    return ( (  into_dash_iter2311 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_2295   into_dash_iter2309 (    struct StrConcat_2290  dref1534 ) {
    return ( (struct StrConcatIter_2295) { .f_left = ( (  chars2310 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars2314 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2295   chars2308 (    struct StrConcat_2290  self1545 ) {
    return ( (  into_dash_iter2309 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_2294   into_dash_iter2307 (    struct StrConcat_2289  dref1534 ) {
    return ( (struct StrConcatIter_2294) { .f_left = ( (  chars2308 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2294   chars2306 (    struct StrConcat_2289  self1545 ) {
    return ( (  into_dash_iter2307 ) ( (  self1545 ) ) );
}

static  enum Unit_8   print2288 (    struct StrConcat_2289  s2651 ) {
    ( (  for_dash_each2293 ) ( ( (  chars2306 ) ( (  s2651 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2287 (    uint32_t  x2665 ,    uint32_t  y2667 ) {
    uint32_t  x2668 = (  op_dash_add171 ( (  x2665 ) , (  from_dash_integral165 ( 1 ) ) ) );
    uint32_t  y2669 = (  op_dash_add171 ( (  y2667 ) , (  from_dash_integral165 ( 1 ) ) ) );
    ( (  print2288 ) ( ( ( StrConcat_2289_StrConcat ) ( ( ( StrConcat_2290_StrConcat ) ( ( ( StrConcat_2291_StrConcat ) ( ( ( StrConcat_2292_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2669 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2668 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_277   subslice2319 (    struct Slice_277  slice1818 ,    size_t  from1820 ,    size_t  to1822 ) {
    struct Cell_278 *  begin_dash_ptr1823 = ( (  offset_dash_ptr850 ) ( ( (  slice1818 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1820 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1820 ) , (  to1822 ) ) != 0 ) || (  cmp290 ( (  from1820 ) , ( (  slice1818 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_277) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1824 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1822 ) ,  ( (  slice1818 ) .f_count ) ) ) , (  from1820 ) ) );
    return ( (struct Slice_277) { .f_ptr = (  begin_dash_ptr1823 ) , .f_count = (  count1824 ) } );
}

struct SliceIter_2322 {
    struct Slice_277  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2321 {
    struct SliceIter_2322  f_left_dash_it;
    struct SliceIter_2322  f_right_dash_it;
};

struct Tuple2_2323 {
    struct Cell_278  field0;
    struct Cell_278  field1;
};

static struct Tuple2_2323 Tuple2_2323_Tuple2 (  struct Cell_278  field0 ,  struct Cell_278  field1 ) {
    return ( struct Tuple2_2323 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2325 {
    bool (*  fun1165 )(    struct Tuple2_2323  );
};

struct envunion2326 {
    bool  (*fun) (  struct env2325*  ,    struct Tuple2_2323  ,    bool  );
    struct env2325 env;
};

static  struct Zip_2321   into_dash_iter2327 (    struct Zip_2321  self941 ) {
    return (  self941 );
}

struct Maybe_2328 {
    enum {
        Maybe_2328_None_t,
        Maybe_2328_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2323  field0;
        } Maybe_2328_Just_s;
    } stuff;
};

static struct Maybe_2328 Maybe_2328_Just (  struct Tuple2_2323  field0 ) {
    return ( struct Maybe_2328 ) { .tag = Maybe_2328_Just_t, .stuff = { .Maybe_2328_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_855   next2330 (    struct SliceIter_2322 *  self1870 ) {
    size_t  off1871 = ( ( * (  self1870 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1870 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_855) { .tag = Maybe_855_None_t } );
    }
    struct Cell_278  elem1872 = ( * ( (  offset_dash_ptr850 ) ( ( ( ( * (  self1870 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1871 ) ) ) ) ) );
    (*  self1870 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1871 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_855_Just ) ( (  elem1872 ) ) );
}

static  struct Maybe_2328   next2329 (    struct Zip_2321 *  self944 ) {
    struct Zip_2321  copy945 = ( * (  self944 ) );
    while ( ( true ) ) {
        struct Maybe_855  dref946 = ( (  next2330 ) ( ( & ( (  copy945 ) .f_left_dash_it ) ) ) );
        if ( dref946.tag == Maybe_855_None_t ) {
            return ( (struct Maybe_2328) { .tag = Maybe_2328_None_t } );
        }
        else {
            if ( dref946.tag == Maybe_855_Just_t ) {
                struct Maybe_855  dref948 = ( (  next2330 ) ( ( & ( (  copy945 ) .f_right_dash_it ) ) ) );
                if ( dref948.tag == Maybe_855_None_t ) {
                    return ( (struct Maybe_2328) { .tag = Maybe_2328_None_t } );
                }
                else {
                    if ( dref948.tag == Maybe_855_Just_t ) {
                        ( (  next2330 ) ( ( & ( ( * (  self944 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2330 ) ( ( & ( ( * (  self944 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2328_Just ) ( ( ( Tuple2_2323_Tuple2 ) ( ( dref946 .stuff .Maybe_855_Just_s .field0 ) ,  ( dref948 .stuff .Maybe_855_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2324 (    struct Zip_2321  iterable1123 ,    bool  base1125 ,   struct envunion2326  fun1127 ) {
    bool  x1128 = (  base1125 );
    struct Zip_2321  it1129 = ( (  into_dash_iter2327 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_2328  dref1130 = ( (  next2329 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_2328_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_2328_Just_t ) {
                struct envunion2326  temp2331 = (  fun1127 );
                x1128 = ( temp2331.fun ( &temp2331.env ,  ( dref1130 .stuff .Maybe_2328_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp2332 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2332);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2333;
    return (  temp2333 );
}

static  bool   lam2334 (   struct env2325* env ,    struct Tuple2_2323  e1167 ,    bool  x1169 ) {
    return ( ( ( env->fun1165 ) ( (  e1167 ) ) ) || (  x1169 ) );
}

static  bool   any2320 (    struct Zip_2321  it1163 ,    bool (*  fun1165 )(    struct Tuple2_2323  ) ) {
    struct env2325 envinst2325 = {
        .fun1165 =  fun1165 ,
    };
    return ( (  reduce2324 ) ( (  it1163 ) ,  ( false ) ,  ( (struct envunion2326){ .fun = (  bool  (*) (  struct env2325*  ,    struct Tuple2_2323  ,    bool  ) )lam2334 , .env =  envinst2325 } ) ) );
}

static  struct SliceIter_2322   into_dash_iter2336 (    struct Slice_277  self1864 ) {
    return ( (struct SliceIter_2322) { .f_slice = (  self1864 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2321   zip2335 (    struct Slice_277  left952 ,    struct Slice_277  right954 ) {
    struct SliceIter_2322  left_dash_it955 = ( (  into_dash_iter2336 ) ( (  left952 ) ) );
    struct SliceIter_2322  right_dash_it956 = ( (  into_dash_iter2336 ) ( (  right954 ) ) );
    return ( (struct Zip_2321) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

struct Tuple2_2340 {
    struct Color_138  field0;
    struct Color_138  field1;
};

static struct Tuple2_2340 Tuple2_2340_Tuple2 (  struct Color_138  field0 ,  struct Color_138  field1 ) {
    return ( struct Tuple2_2340 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_139 *   cast2344 (    int32_t *  x356 ) {
    return ( (enum Color8_139 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2342 (    enum Color8_139  x574 ) {
    int32_t  temp2343 = ( (  zeroed1002 ) ( ) );
    int32_t *  y575 = ( &temp2343 );
    enum Color8_139 *  yp576 = ( (  cast2344 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2341 (    enum Color8_139  l2693 ,    enum Color8_139  r2695 ) {
    return (  eq558 ( ( ( (  cast_dash_on_dash_zeroed2342 ) ( (  l2693 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2342 ) ( (  r2695 ) ) ) ) );
}

static  enum Color16_140 *   cast2348 (    int32_t *  x356 ) {
    return ( (enum Color16_140 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2346 (    enum Color16_140  x574 ) {
    int32_t  temp2347 = ( (  zeroed1002 ) ( ) );
    int32_t *  y575 = ( &temp2347 );
    enum Color16_140 *  yp576 = ( (  cast2348 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2345 (    enum Color16_140  l2699 ,    enum Color16_140  r2701 ) {
    return (  eq558 ( ( ( (  cast_dash_on_dash_zeroed2346 ) ( (  l2699 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2346 ) ( (  r2701 ) ) ) ) );
}

static  bool   eq2349 (    struct RGB_141  l2729 ,    struct RGB_141  r2731 ) {
    return ( ( (  eq303 ( ( (  l2729 ) .f_r ) , ( (  r2731 ) .f_r ) ) ) && (  eq303 ( ( (  l2729 ) .f_g ) , ( (  r2731 ) .f_g ) ) ) ) && (  eq303 ( ( (  l2729 ) .f_b ) , ( (  r2731 ) .f_b ) ) ) );
}

static  bool   eq2339 (    struct Color_138  l2751 ,    struct Color_138  r2753 ) {
    return ( {  struct Tuple2_2340  dref2754 = ( ( Tuple2_2340_Tuple2 ) ( (  l2751 ) ,  (  r2753 ) ) ) ; dref2754 .field0.tag == Color_138_ColorDefault_t && dref2754 .field1.tag == Color_138_ColorDefault_t ? ( true ) : dref2754 .field0.tag == Color_138_Color8_t && dref2754 .field1.tag == Color_138_Color8_t ? (  eq2341 ( ( dref2754 .field0 .stuff .Color_138_Color8_s .field0 ) , ( dref2754 .field1 .stuff .Color_138_Color8_s .field0 ) ) ) : dref2754 .field0.tag == Color_138_Color16_t && dref2754 .field1.tag == Color_138_Color16_t ? (  eq2345 ( ( dref2754 .field0 .stuff .Color_138_Color16_s .field0 ) , ( dref2754 .field1 .stuff .Color_138_Color16_s .field0 ) ) ) : dref2754 .field0.tag == Color_138_Color256_t && dref2754 .field1.tag == Color_138_Color256_t ? (  eq303 ( ( dref2754 .field0 .stuff .Color_138_Color256_s .field0 ) , ( dref2754 .field1 .stuff .Color_138_Color256_s .field0 ) ) ) : dref2754 .field0.tag == Color_138_ColorRGB_t && dref2754 .field1.tag == Color_138_ColorRGB_t ? (  eq2349 ( ( dref2754 .field0 .stuff .Color_138_ColorRGB_s .field0 ) , ( dref2754 .field1 .stuff .Color_138_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2338 (    struct Cell_278  l3518 ,    struct Cell_278  r3520 ) {
    if ( ( !  eq469 ( ( (  l3518 ) .f_c ) , ( (  r3520 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2339 ( ( (  l3518 ) .f_fg ) , ( (  r3520 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2339 ( ( (  l3518 ) .f_bg ) , ( (  r3520 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2337 (    struct Tuple2_2323  dref3574 ) {
    return ( !  eq2338 ( ( dref3574 .field0 ) , ( dref3574 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2352 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82353 (    enum Color8_139  color2704 ) {
    enum Color8_139  dref2705 = (  color2704 );
    switch (  dref2705 ) {
        case Color8_139_Black8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Red8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Green8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Yellow8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Blue8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Magenta8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Cyan8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_White8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162354 (    enum Color16_140  color2708 ) {
    enum Color16_140  dref2709 = (  color2708 );
    switch (  dref2709 ) {
        case Color16_140_Black16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Red16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Green16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Yellow16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Blue16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Magenta16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Cyan16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_White16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightBlack16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightRed16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightGreen16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightYellow16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightBlue16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightMagenta16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightCyan16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightWhite16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2358 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2358 StrConcat_2358_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2358 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2357 {
    struct StrConcat_2358  field0;
    struct Char_65  field1;
};

static struct StrConcat_2357 StrConcat_2357_StrConcat (  struct StrConcat_2358  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2357 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2362 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2361 {
    struct StrViewIter_458  f_left;
    struct IntStrIter_2362  f_right;
};

struct StrConcatIter_2360 {
    struct StrConcatIter_2361  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2360   into_dash_iter2364 (    struct StrConcatIter_2360  self1527 ) {
    return (  self1527 );
}

struct env2370 {
    uint8_t  base1240;
    ;
};

struct envunion2371 {
    uint8_t  (*fun) (  struct env2370*  ,    int32_t  ,    uint8_t  );
    struct env2370 env;
};

static  uint8_t   reduce2369 (    struct Range_150  iterable1123 ,    uint8_t  base1125 ,   struct envunion2371  fun1127 ) {
    uint8_t  x1128 = (  base1125 );
    struct RangeIter_153  it1129 = ( (  into_dash_iter154 ) ( (  iterable1123 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1130 = ( (  next156 ) ( ( & (  it1129 ) ) ) );
        if ( dref1130.tag == Maybe_155_None_t ) {
            return (  x1128 );
        }
        else {
            if ( dref1130.tag == Maybe_155_Just_t ) {
                struct envunion2371  temp2372 = (  fun1127 );
                x1128 = ( temp2372.fun ( &temp2372.env ,  ( dref1130 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1128 ) ) );
            }
        }
    }
    const char*  temp2373 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2373);
    exit ( 1 );
    ( Unit_8_Unit );
    uint8_t  temp2374;
    return (  temp2374 );
}

static  uint8_t   op_dash_mul2376 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2375 (   struct env2370* env ,    int32_t  item1244 ,    uint8_t  x1246 ) {
    return (  op_dash_mul2376 ( (  x1246 ) , ( env->base1240 ) ) );
}

static  uint8_t   pow2368 (    uint8_t  base1240 ,    int32_t  p1242 ) {
    struct env2370 envinst2370 = {
        .base1240 =  base1240 ,
    };
    return ( (  reduce2369 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1242 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral308 ( 1 ) ) ,  ( (struct envunion2371){ .fun = (  uint8_t  (*) (  struct env2370*  ,    int32_t  ,    uint8_t  ) )lam2375 , .env =  envinst2370 } ) ) );
}

static  uint8_t   op_dash_div2377 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2378 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_297   next2367 (    struct IntStrIter_2362 *  self1458 ) {
    if ( ( ( * (  self1458 ) ) .f_negative ) ) {
        (*  self1458 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint8_t  trim_dash_down1459 = ( (  pow2368 ) ( (  from_dash_integral308 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1460 = (  op_dash_div2377 ( ( ( * (  self1458 ) ) .f_int ) , (  trim_dash_down1459 ) ) );
    uint8_t  upper_dash_mask1461 = (  op_dash_mul2376 ( (  op_dash_div2377 ( (  upper1460 ) , (  from_dash_integral308 ( 10 ) ) ) ) , (  from_dash_integral308 ( 10 ) ) ) );
    uint8_t  digit1462 = ( ( (  cast2378 ) ( (  op_dash_sub932 ( (  upper1460 ) , (  upper_dash_mask1461 ) ) ) ) ) );
    (*  self1458 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1458 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1463 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1462 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1463 ) ) );
}

static  struct Maybe_297   next2366 (    struct StrConcatIter_2361 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next463 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next2367 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2365 (    struct StrConcatIter_2360 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2366 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2359 (    struct StrConcatIter_2360  iterable1104 ,    enum Unit_8 (*  fun1106 )(    struct Char_65  ) ) {
    struct StrConcatIter_2360  temp2363 = ( (  into_dash_iter2364 ) ( (  iterable1104 ) ) );
    struct StrConcatIter_2360 *  it1107 = ( &temp2363 );
    while ( ( true ) ) {
        struct Maybe_297  dref1108 = ( (  next2365 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_297_Just_t ) {
                ( (  fun1106 ) ( ( dref1108 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2385 (    uint8_t  self1466 ) {
    if ( (  eq303 ( (  self1466 ) , (  from_dash_integral308 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1467 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp307 ( (  self1466 ) , (  from_dash_integral308 ( 0 ) ) ) == 2 ) ) {
        self1466 = (  op_dash_div2377 ( (  self1466 ) , (  from_dash_integral308 ( 10 ) ) ) );
        digits1467 = (  op_dash_add159 ( (  digits1467 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1467 );
}

static  struct IntStrIter_2362   uint_dash_iter2384 (    uint8_t  int1473 ) {
    return ( (struct IntStrIter_2362) { .f_int = (  int1473 ) , .f_len = ( (  count_dash_digits2385 ) ( (  int1473 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2362   chars2383 (    uint8_t  self1491 ) {
    return ( (  uint_dash_iter2384 ) ( (  self1491 ) ) );
}

static  struct StrConcatIter_2361   into_dash_iter2382 (    struct StrConcat_2358  dref1534 ) {
    return ( (struct StrConcatIter_2361) { .f_left = ( (  chars460 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars2383 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2361   chars2381 (    struct StrConcat_2358  self1545 ) {
    return ( (  into_dash_iter2382 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_2360   into_dash_iter2380 (    struct StrConcat_2357  dref1534 ) {
    return ( (struct StrConcatIter_2360) { .f_left = ( (  chars2381 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2360   chars2379 (    struct StrConcat_2357  self1545 ) {
    return ( (  into_dash_iter2380 ) ( (  self1545 ) ) );
}

static  enum Unit_8   print2356 (    struct StrConcat_2357  s2651 ) {
    ( (  for_dash_each2359 ) ( ( (  chars2379 ) ( (  s2651 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562355 (    uint8_t  color2722 ) {
    ( (  print2356 ) ( ( ( StrConcat_2357_StrConcat ) ( ( ( StrConcat_2358_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2722 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2391 {
    struct StrConcat_2357  field0;
    uint8_t  field1;
};

static struct StrConcat_2391 StrConcat_2391_StrConcat (  struct StrConcat_2357  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2391 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2390 {
    struct StrConcat_2391  field0;
    struct Char_65  field1;
};

static struct StrConcat_2390 StrConcat_2390_StrConcat (  struct StrConcat_2391  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2390 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2389 {
    struct StrConcat_2390  field0;
    uint8_t  field1;
};

static struct StrConcat_2389 StrConcat_2389_StrConcat (  struct StrConcat_2390  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2389 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2388 {
    struct StrConcat_2389  field0;
    struct Char_65  field1;
};

static struct StrConcat_2388 StrConcat_2388_StrConcat (  struct StrConcat_2389  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2388 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2396 {
    struct StrConcatIter_2360  f_left;
    struct IntStrIter_2362  f_right;
};

struct StrConcatIter_2395 {
    struct StrConcatIter_2396  f_left;
    struct AppendIter_1020  f_right;
};

struct StrConcatIter_2394 {
    struct StrConcatIter_2395  f_left;
    struct IntStrIter_2362  f_right;
};

struct StrConcatIter_2393 {
    struct StrConcatIter_2394  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2393   into_dash_iter2398 (    struct StrConcatIter_2393  self1527 ) {
    return (  self1527 );
}

static  struct Maybe_297   next2402 (    struct StrConcatIter_2396 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2365 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next2367 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2401 (    struct StrConcatIter_2395 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2402 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2400 (    struct StrConcatIter_2394 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2401 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next2367 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2399 (    struct StrConcatIter_2393 *  self1530 ) {
    struct Maybe_297  dref1531 = ( (  next2400 ) ( ( & ( ( * (  self1530 ) ) .f_left ) ) ) );
    if ( dref1531.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1531 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1530 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2392 (    struct StrConcatIter_2393  iterable1104 ,    enum Unit_8 (*  fun1106 )(    struct Char_65  ) ) {
    struct StrConcatIter_2393  temp2397 = ( (  into_dash_iter2398 ) ( (  iterable1104 ) ) );
    struct StrConcatIter_2393 *  it1107 = ( &temp2397 );
    while ( ( true ) ) {
        struct Maybe_297  dref1108 = ( (  next2399 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_297_Just_t ) {
                ( (  fun1106 ) ( ( dref1108 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2396   into_dash_iter2410 (    struct StrConcat_2391  dref1534 ) {
    return ( (struct StrConcatIter_2396) { .f_left = ( (  chars2379 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars2383 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2396   chars2409 (    struct StrConcat_2391  self1545 ) {
    return ( (  into_dash_iter2410 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_2395   into_dash_iter2408 (    struct StrConcat_2390  dref1534 ) {
    return ( (struct StrConcatIter_2395) { .f_left = ( (  chars2409 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2395   chars2407 (    struct StrConcat_2390  self1545 ) {
    return ( (  into_dash_iter2408 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_2394   into_dash_iter2406 (    struct StrConcat_2389  dref1534 ) {
    return ( (struct StrConcatIter_2394) { .f_left = ( (  chars2407 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars2383 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2394   chars2405 (    struct StrConcat_2389  self1545 ) {
    return ( (  into_dash_iter2406 ) ( (  self1545 ) ) );
}

static  struct StrConcatIter_2393   into_dash_iter2404 (    struct StrConcat_2388  dref1534 ) {
    return ( (struct StrConcatIter_2393) { .f_left = ( (  chars2405 ) ( ( dref1534 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1534 .field1 ) ) ) } );
}

static  struct StrConcatIter_2393   chars2403 (    struct StrConcat_2388  self1545 ) {
    return ( (  into_dash_iter2404 ) ( (  self1545 ) ) );
}

static  enum Unit_8   print2387 (    struct StrConcat_2388  s2651 ) {
    ( (  for_dash_each2392 ) ( ( (  chars2403 ) ( (  s2651 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2386 (    struct RGB_141  c2744 ) {
    ( (  print2387 ) ( ( ( StrConcat_2388_StrConcat ) ( ( ( StrConcat_2389_StrConcat ) ( ( ( StrConcat_2390_StrConcat ) ( ( ( StrConcat_2391_StrConcat ) ( ( ( StrConcat_2357_StrConcat ) ( ( ( StrConcat_2358_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2744 ) .f_r ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2744 ) .f_g ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2744 ) .f_b ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2351 (    struct Color_138  c2765 ) {
    struct Color_138  dref2766 = (  c2765 );
    if ( dref2766.tag == Color_138_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2352 ) ( ) );
    }
    else {
        if ( dref2766.tag == Color_138_Color8_t ) {
            ( (  set_dash_fg82353 ) ( ( dref2766 .stuff .Color_138_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2766.tag == Color_138_Color16_t ) {
                ( (  set_dash_fg162354 ) ( ( dref2766 .stuff .Color_138_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2766.tag == Color_138_Color256_t ) {
                    ( (  set_dash_fg2562355 ) ( ( dref2766 .stuff .Color_138_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2766.tag == Color_138_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2386 ) ( ( dref2766 .stuff .Color_138_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2412 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82413 (    enum Color8_139  color2712 ) {
    enum Color8_139  dref2713 = (  color2712 );
    switch (  dref2713 ) {
        case Color8_139_Black8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Red8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Green8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Yellow8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Blue8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Magenta8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_Cyan8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_139_White8 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162414 (    enum Color16_140  color2716 ) {
    enum Color16_140  dref2717 = (  color2716 );
    switch (  dref2717 ) {
        case Color16_140_Black16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Red16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Green16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Yellow16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Blue16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Magenta16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_Cyan16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_White16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_140_BrightBlack16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightRed16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightGreen16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightYellow16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightBlue16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightMagenta16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightCyan16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_140_BrightWhite16 : {
            ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562415 (    uint8_t  color2725 ) {
    ( (  print2356 ) ( ( ( StrConcat_2357_StrConcat ) ( ( ( StrConcat_2358_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2725 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2416 (    struct RGB_141  c2747 ) {
    ( (  print2387 ) ( ( ( StrConcat_2388_StrConcat ) ( ( ( StrConcat_2389_StrConcat ) ( ( ( StrConcat_2390_StrConcat ) ( ( ( StrConcat_2391_StrConcat ) ( ( ( StrConcat_2357_StrConcat ) ( ( ( StrConcat_2358_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2747 ) .f_r ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2747 ) .f_g ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2747 ) .f_b ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2411 (    struct Color_138  c2773 ) {
    struct Color_138  dref2774 = (  c2773 );
    if ( dref2774.tag == Color_138_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2412 ) ( ) );
    }
    else {
        if ( dref2774.tag == Color_138_Color8_t ) {
            ( (  set_dash_bg82413 ) ( ( dref2774 .stuff .Color_138_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2774.tag == Color_138_Color16_t ) {
                ( (  set_dash_bg162414 ) ( ( dref2774 .stuff .Color_138_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2774.tag == Color_138_Color256_t ) {
                    ( (  set_dash_bg2562415 ) ( ( dref2774 .stuff .Color_138_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2774.tag == Color_138_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2416 ) ( ( dref2774 .stuff .Color_138_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322417 (    int32_t  x604 ) {
    return ( (uint32_t ) (  x604 ) );
}

static  enum Unit_8   emit_dash_cell2350 (    struct RenderState_2285 *  rs3550 ,    struct Cell_278 *  c3552 ,    uint32_t  x3554 ,    uint32_t  y3556 ) {
    if ( ( ( !  eq473 ( (  x3554 ) , ( ( * (  rs3550 ) ) .f_x ) ) ) || ( !  eq473 ( (  y3556 ) , ( ( * (  rs3550 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2287 ) ( (  x3554 ) ,  (  y3556 ) ) );
        (*  rs3550 ) .f_x = (  x3554 );
        (*  rs3550 ) .f_y = (  y3556 );
    }
    struct Char_65  char3557 = ( ( * (  c3552 ) ) .f_c );
    struct Color_138  bg3558 = ( ( * (  c3552 ) ) .f_bg );
    if ( (  eq558 ( ( ( * (  c3552 ) ) .f_char_dash_width ) , (  op_dash_neg801 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3557 = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) );
        bg3558 = ( ( Color_138_Color8 ) ( ( Color8_139_Red8 ) ) );
    }
    if ( ( !  eq2339 ( ( ( * (  rs3550 ) ) .f_fg ) , ( ( * (  c3552 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2351 ) ( ( ( * (  c3552 ) ) .f_fg ) ) );
        (*  rs3550 ) .f_fg = ( ( * (  c3552 ) ) .f_fg );
    }
    if ( ( !  eq2339 ( ( ( * (  rs3550 ) ) .f_bg ) , (  bg3558 ) ) ) ) {
        ( (  set_dash_bg2411 ) ( (  bg3558 ) ) );
        (*  rs3550 ) .f_bg = (  bg3558 );
    }
    ( (  print_dash_str335 ) ( (  char3557 ) ) );
    uint32_t  char_dash_width3559 = ( (  i32_dash_u322417 ) ( ( (  max1110 ) ( ( ( * (  c3552 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3550 ) .f_x = (  op_dash_add171 ( ( ( * (  rs3550 ) ) .f_x ) , (  char_dash_width3559 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2420 {
    struct SliceIter_2322  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

struct env2421 {
    ;
    ;
    struct Slice_277  dest1895;
};

struct Tuple2_2423 {
    struct Cell_278  field0;
    int32_t  field1;
};

static struct Tuple2_2423 Tuple2_2423_Tuple2 (  struct Cell_278  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2423 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2422 {
    enum Unit_8  (*fun) (  struct env2421*  ,    struct Tuple2_2423  );
    struct env2421 env;
};

static  struct Zip_2420   into_dash_iter2425 (    struct Zip_2420  self941 ) {
    return (  self941 );
}

struct Maybe_2426 {
    enum {
        Maybe_2426_None_t,
        Maybe_2426_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2423  field0;
        } Maybe_2426_Just_s;
    } stuff;
};

static struct Maybe_2426 Maybe_2426_Just (  struct Tuple2_2423  field0 ) {
    return ( struct Maybe_2426 ) { .tag = Maybe_2426_Just_t, .stuff = { .Maybe_2426_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2426   next2427 (    struct Zip_2420 *  self944 ) {
    struct Zip_2420  copy945 = ( * (  self944 ) );
    while ( ( true ) ) {
        struct Maybe_855  dref946 = ( (  next2330 ) ( ( & ( (  copy945 ) .f_left_dash_it ) ) ) );
        if ( dref946.tag == Maybe_855_None_t ) {
            return ( (struct Maybe_2426) { .tag = Maybe_2426_None_t } );
        }
        else {
            if ( dref946.tag == Maybe_855_Just_t ) {
                struct Maybe_155  dref948 = ( (  next422 ) ( ( & ( (  copy945 ) .f_right_dash_it ) ) ) );
                if ( dref948.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_2426) { .tag = Maybe_2426_None_t } );
                }
                else {
                    if ( dref948.tag == Maybe_155_Just_t ) {
                        ( (  next2330 ) ( ( & ( ( * (  self944 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self944 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2426_Just ) ( ( ( Tuple2_2423_Tuple2 ) ( ( dref946 .stuff .Maybe_855_Just_s .field0 ) ,  ( dref948 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2419 (    struct Zip_2420  iterable1104 ,   struct envunion2422  fun1106 ) {
    struct Zip_2420  temp2424 = ( (  into_dash_iter2425 ) ( (  iterable1104 ) ) );
    struct Zip_2420 *  it1107 = ( &temp2424 );
    while ( ( true ) ) {
        struct Maybe_2426  dref1108 = ( (  next2427 ) ( (  it1107 ) ) );
        if ( dref1108.tag == Maybe_2426_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1108.tag == Maybe_2426_Just_t ) {
                struct envunion2422  temp2428 = (  fun1106 );
                ( temp2428.fun ( &temp2428.env ,  ( dref1108 .stuff .Maybe_2426_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2420   zip2429 (    struct Slice_277  left952 ,    struct FromIter_416  right954 ) {
    struct SliceIter_2322  left_dash_it955 = ( (  into_dash_iter2336 ) ( (  left952 ) ) );
    struct FromIter_416  right_dash_it956 = ( (  into_dash_iter426 ) ( (  right954 ) ) );
    return ( (struct Zip_2420) { .f_left_dash_it = (  left_dash_it955 ) , .f_right_dash_it = (  right_dash_it956 ) } );
}

static  enum Unit_8   lam2430 (   struct env2421* env ,    struct Tuple2_2423  dref1896 ) {
    return ( (  set848 ) ( ( env->dest1895 ) ,  ( (  i32_dash_size412 ) ( ( dref1896 .field1 ) ) ) ,  ( dref1896 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2418 (    struct Slice_277  src1893 ,    struct Slice_277  dest1895 ) {
    if ( (  cmp290 ( ( (  src1893 ) .f_count ) , ( (  dest1895 ) .f_count ) ) == 2 ) ) {
        ( (  panic512 ) ( ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1893 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1895 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2421 envinst2421 = {
        .dest1895 =  dest1895 ,
    };
    ( (  for_dash_each2419 ) ( ( (  zip2429 ) ( (  src1893 ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2422){ .fun = (  enum Unit_8  (*) (  struct env2421*  ,    struct Tuple2_2423  ) )lam2430 , .env =  envinst2421 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2284 (    struct Screen_276 *  screen3562 ) {
    int32_t  w3563 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3562 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3564 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3562 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2285  temp2286 = ( (struct RenderState_2285) { .f_x = (  from_dash_integral165 ( 0 ) ) , .f_y = (  from_dash_integral165 ( 0 ) ) , .f_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_changes = (  from_dash_integral165 ( 0 ) ) } );
    struct RenderState_2285 *  rs3565 = ( &temp2286 );
    ( (  move_dash_cursor_dash_to2287 ) ( (  from_dash_integral165 ( 0 ) ) ,  (  from_dash_integral165 ( 0 ) ) ) );
    struct RangeIter_153  temp2317 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  h3564 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond2318 =  next156 (&temp2317);
        if (  __cond2318 .tag == 0 ) {
            break;
        }
        int32_t  y3567 =  __cond2318 .stuff .Maybe_155_Just_s .field0;
        int32_t  x_dash_v3568 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp157 ( (  x_dash_v3568 ) , (  w3563 ) ) == 0 ) ) {
            size_t  i3569 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3567 ) , (  w3563 ) ) ) , (  x_dash_v3568 ) ) ) ) );
            struct Cell_278 *  cur3570 = ( (  get_dash_ptr849 ) ( ( ( * (  screen3562 ) ) .f_current ) ,  (  i3569 ) ) );
            int32_t  char_dash_width3571 = ( (  max1110 ) ( ( ( * (  cur3570 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_277  curs3572 = ( (  subslice2319 ) ( ( ( * (  screen3562 ) ) .f_current ) ,  (  i3569 ) ,  (  op_dash_add311 ( (  i3569 ) , ( (  i32_dash_size412 ) ( (  char_dash_width3571 ) ) ) ) ) ) );
            struct Slice_277  prevs3573 = ( (  subslice2319 ) ( ( ( * (  screen3562 ) ) .f_previous ) ,  (  i3569 ) ,  (  op_dash_add311 ( (  i3569 ) , ( (  i32_dash_size412 ) ( (  char_dash_width3571 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3562 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2320 ) ( ( (  zip2335 ) ( (  curs3572 ) ,  (  prevs3573 ) ) ) ,  (  lam2337 ) ) ) ) ) {
                (*  rs3565 ) .f_changes = (  op_dash_add171 ( ( ( * (  rs3565 ) ) .f_changes ) , (  from_dash_integral165 ( 1 ) ) ) );
                ( (  emit_dash_cell2350 ) ( (  rs3565 ) ,  (  cur3570 ) ,  ( (  i32_dash_u322417 ) ( (  x_dash_v3568 ) ) ) ,  ( (  i32_dash_u322417 ) ( (  y3567 ) ) ) ) );
                ( (  copy_dash_to2418 ) ( (  curs3572 ) ,  (  prevs3573 ) ) );
            }
            x_dash_v3568 = (  op_dash_add159 ( (  x_dash_v3568 ) , (  char_dash_width3571 ) ) );
        }
    }
    (*  screen3562 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors775 ) ( ) );
    ( (  flush_dash_stdout778 ) ( ) );
    return ( ( * (  rs3565 ) ) .f_changes );
}

static  void *   cast_dash_ptr2437 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2438 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2435 (  ) {
    struct timespec *  temp2436;
    struct timespec *  x571 = (  temp2436 );
    ( ( memset ) ( ( (  cast_dash_ptr2437 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2438 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct timespec *   null_dash_ptr2434 (  ) {
    return ( (  zeroed2435 ) ( ) );
}

static  enum Unit_8   sync2431 (    struct Tui_90 *  tui3433 ) {
    if ( (  eq473 ( ( ( * (  tui3433 ) ) .f_target_dash_fps ) , (  from_dash_integral165 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3434 = (  op_dash_div1036 ( (  from_dash_integral288 ( 1000000000 ) ) , ( (  size_dash_i64302 ) ( ( (  u32_dash_size833 ) ( ( ( * (  tui3433 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2432 = ( (  undefined814 ) ( ) );
    struct timespec *  now3435 = ( &temp2432 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic816 ) ( ) ) ,  (  now3435 ) ) );
    int64_t  elapsed_dash_ns3436 = (  op_dash_add471 ( (  op_dash_mul286 ( (  op_dash_sub1038 ( ( ( * (  now3435 ) ) .tv_sec ) , ( ( ( * (  tui3433 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral288 ( 1000000000 ) ) ) ) , (  op_dash_sub1038 ( ( ( * (  now3435 ) ) .tv_nsec ) , ( ( ( * (  tui3433 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3437 = (  op_dash_sub1038 ( (  frame_dash_ns3434 ) , (  elapsed_dash_ns3436 ) ) );
    if ( (  cmp1056 ( (  sleep_dash_ns3437 ) , (  from_dash_integral288 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2433 = ( (struct timespec) { .tv_sec = (  from_dash_integral288 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3437 ) } );
        struct timespec *  ts3438 = ( &temp2433 );
        ( ( nanosleep ) ( (  ts3438 ) ,  ( (  null_dash_ptr2434 ) ( ) ) ) );
    }
    struct timespec  temp2439 = ( (  undefined814 ) ( ) );
    struct timespec *  last_dash_sync3439 = ( &temp2439 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic816 ) ( ) ) ,  (  last_dash_sync3439 ) ) );
    (*  tui3433 ) .f_last_dash_sync = ( * (  last_dash_sync3439 ) );
    (*  tui3433 ) .f_fps_dash_count = (  op_dash_add171 ( ( ( * (  tui3433 ) ) .f_fps_dash_count ) , (  from_dash_integral165 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3440 = (  op_dash_add471 ( (  op_dash_mul286 ( (  op_dash_sub1038 ( ( ( ( * (  tui3433 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3433 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral288 ( 1000 ) ) ) ) , (  op_dash_div1036 ( (  op_dash_sub1038 ( ( ( ( * (  tui3433 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3433 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral288 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1056 ( (  fps_dash_elapsed_dash_ms3440 ) , (  from_dash_integral288 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3433 ) .f_actual_dash_fps = ( ( * (  tui3433 ) ) .f_fps_dash_count );
        (*  tui3433 ) .f_fps_dash_count = (  from_dash_integral165 ( 0 ) );
        (*  tui3433 ) .f_fps_dash_ts = ( ( * (  tui3433 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2442 (    struct Cell_278 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2441 (    enum CAllocator_10  dref1996 ,    struct Slice_277  slice1998 ) {
    if (!(  dref1996 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2442 ) ( ( (  slice1998 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2440 (    struct Screen_276 *  screen3538 ) {
    enum CAllocator_10  al3539 = ( ( * (  screen3538 ) ) .f_al );
    ( (  free2441 ) ( (  al3539 ) ,  ( ( * (  screen3538 ) ) .f_current ) ) );
    ( (  free2441 ) ( (  al3539 ) ,  ( ( * (  screen3538 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2444 (  ) {
    ( (  print_dash_str328 ) ( ( (  from_dash_string199 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2445 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2446 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2447 (    struct Termios_92 *  og_dash_termios3413 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  tcsa_dash_flush770 ) ( ) ) ,  ( (  cast_dash_ptr711 ) ( (  og_dash_termios3413 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2443 (    struct Tui_90 *  tui3443 ) {
    ( (  disable_dash_mouse2444 ) ( ) );
    ( (  show_dash_cursor2445 ) ( ) );
    ( (  reset_dash_colors775 ) ( ) );
    ( (  clear_dash_screen776 ) ( ) );
    ( (  reset_dash_cursor_dash_position2446 ) ( ) );
    ( (  disable_dash_raw_dash_mode2447 ) ( ( & ( ( * (  tui3443 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout778 ) ( ) );
    return ( Unit_8_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2073 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2074 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2075 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2074 =  growth_dash_factor2074 ,
        .starting_dash_size2073 =  starting_dash_size2073 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2074 =  growth_dash_factor2074 ,
        .starting_dash_size2073 =  starting_dash_size2073 ,
    };
    struct env3 envinst3 = {
        .growth_dash_factor2074 =  growth_dash_factor2074 ,
        .starting_dash_size2073 =  starting_dash_size2073 ,
    };
    struct env4 envinst4 = {
        .growth_dash_factor2074 =  growth_dash_factor2074 ,
        .starting_dash_size2073 =  starting_dash_size2073 ,
    };
    struct env5 envinst5 = {
        .growth_dash_factor2074 =  growth_dash_factor2074 ,
        .starting_dash_size2073 =  starting_dash_size2073 ,
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
        .shrink_dash_factor2075 =  shrink_dash_factor2075 ,
    };
    struct env41 envinst41 = {
        .shrink_dash_factor2075 =  shrink_dash_factor2075 ,
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
    ( ( setlocale ) ( ( (  lc_dash_ctype55 ) ( ) ) ,  ( (  from_dash_string57 ) ( ( "" ) ,  ( 0 ) ) ) ) );
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
    bool *  should_dash_resize3423 = ( &temp85 );
    struct env86 envinst86 = {
        .should_dash_resize3423 =  should_dash_resize3423 ,
    };
    struct env87 envinst87 = {
        .should_dash_resize3423 =  should_dash_resize3423 ,
    };
    struct env88 envinst88 = {
        .envinst87 = envinst87 ,
    };
    struct env94 envinst94 = {
        .envinst87 = envinst87 ,
    };
    struct env96 envinst96 = {
        .envinst50 = envinst50 ,
        .envinst37 = envinst37 ,
        .envinst46 = envinst46 ,
    };
    struct env100 envinst100 = {
        .envinst40 = envinst40 ,
        .envinst41 = envinst41 ,
        .envinst12 = envinst12 ,
        .envinst96 = envinst96 ,
        .envinst46 = envinst46 ,
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
    struct Color_138  camel4080 = ( (  rgb142 ) ( (  from_dash_integral165 ( 11766360 ) ) ) );
    struct Color_138  olive4081 = ( (  rgb142 ) ( (  from_dash_integral165 ( 7303983 ) ) ) );
    struct Color_138  tea_dash_green4082 = ( (  rgb142 ) ( (  from_dash_integral165 ( 14875064 ) ) ) );
    struct Color_138  chocolate4083 = ( (  rgb142 ) ( (  from_dash_integral165 ( 13721620 ) ) ) );
    struct Color_138  muted_dash_olive4084 = ( (  rgb142 ) ( (  from_dash_integral165 ( 12308106 ) ) ) );
    struct Color_138  palm_dash_leaf4085 = ( (  rgb142 ) ( (  from_dash_integral165 ( 9674588 ) ) ) );
    struct Color_138  lime_dash_green4086 = ( (  rgb142 ) ( (  from_dash_integral165 ( 3263232 ) ) ) );
    struct Color_138  forest_dash_green4087 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1153058 ) ) ) );
    struct Color_138  green4088 = ( (  rgb142 ) ( (  from_dash_integral165 ( 2781729 ) ) ) );
    struct Color_138  dark_dash_spruce4089 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1983518 ) ) ) );
    struct Color_138  evergreen4090 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1386004 ) ) ) );
    struct Array_179  temp181 = ( (  from_dash_listlike182 ) ( ( (struct Array_179) { ._arr = { ( (  hlt183 ) ( ( HighlightType_20_Number ) ,  (  green4088 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_String ) ,  (  camel4080 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Comment ) ,  (  dark_dash_spruce4089 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident1 ) ,  (  lime_dash_green4086 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident2 ) ,  (  muted_dash_olive4084 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident3 ) ,  (  tea_dash_green4082 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident4 ) ,  (  palm_dash_leaf4085 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Keyword1 ) ,  (  tea_dash_green4082 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Keyword2 ) ,  (  chocolate4083 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Special1 ) ,  (  olive4081 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Special2 ) ,  (  forest_dash_green4087 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Special3 ) ,  (  camel4080 ) ) ) , ( (struct HighlightColors_175) { .f_type = ( HighlightType_20_Invalid ) , .f_fg = (  evergreen4090 ) , .f_bg = ( ( Maybe_176_Just ) ( ( ( Color_138_Color8 ) ( ( Color8_139_Red8 ) ) ) ) ) } ) } } ) ) );
    struct Theme_172  temp177 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = (  evergreen4090 ) , .f_fg = (  lime_dash_green4086 ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = (  lime_dash_green4086 ) , .f_fg = (  evergreen4090 ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = (  forest_dash_green4087 ) , .f_fg = (  evergreen4090 ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = (  evergreen4090 ) , .f_fg = (  forest_dash_green4087 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = (  evergreen4090 ) , .f_fg = (  tea_dash_green4082 ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = (  dark_dash_spruce4089 ) , .f_fg = (  lime_dash_green4086 ) } ) , .f_highlights = ( (  as_dash_slice178 ) ( ( &temp181 ) ) ) } );
    struct Theme_172 *  goblin_dash_ultra4091 = ( &temp177 );
    struct Theme_172  temp184 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_highlights = ( (  empty185 ) ( ) ) } );
    struct Theme_172 *  dark_dash_theme4092 = ( &temp184 );
    struct Theme_172  temp191 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_White16 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_highlights = ( (  empty185 ) ( ) ) } );
    struct Theme_172 *  light_dash_theme4093 = ( &temp191 );
    struct Theme_172 *  default4094 = (  goblin_dash_ultra4091 );
    struct Array_195  temp197 = ( (  from_dash_listlike198 ) ( ( (struct Array_195) { ._arr = { ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "default" ) ,  ( 7 ) ) ) ,  (  default4094 ) ) ) , ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra4091 ) ) ) , ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme4092 ) ) ) , ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "light-mono" ) ,  ( 10 ) ) ) ,  (  light_dash_theme4093 ) ) ) } } ) ) );
    struct Slice_192  all_dash_themes4095 = ( (  as_dash_slice194 ) ( ( &temp197 ) ) );
    struct env200 envinst200 = {
        .all_dash_themes4095 =  all_dash_themes4095 ,
    };
    struct env201 envinst201 = {
        .envinst136 = envinst136 ,
    };
    struct env204 envinst204 = {
        .envinst127 = envinst127 ,
    };
    struct env207 envinst207 = {
        .envinst127 = envinst127 ,
    };
    struct env209 envinst209 = {
        .envinst121 = envinst121 ,
    };
    struct env211 envinst211 = {
        .envinst123 = envinst123 ,
    };
    struct env213 envinst213 = {
        .envinst127 = envinst127 ,
    };
    struct env215 envinst215 = {
        .envinst127 = envinst127 ,
    };
    struct env217 envinst217 = {
        .envinst215 = envinst215 ,
        .envinst132 = envinst132 ,
    };
    struct env223 envinst223 = {
        .envinst127 = envinst127 ,
        .envinst132 = envinst132 ,
    };
    struct env226 envinst226 = {
        .envinst215 = envinst215 ,
    };
    struct env228 envinst228 = {
        .envinst132 = envinst132 ,
        .envinst213 = envinst213 ,
        .envinst204 = envinst204 ,
    };
    struct env233 envinst233 = {
        .envinst125 = envinst125 ,
    };
    struct env235 envinst235 = {
        .envinst74 = envinst74 ,
    };
    struct env237 envinst237 = {
        .envinst77 = envinst77 ,
    };
    struct env239 envinst239 = {
        .envinst81 = envinst81 ,
    };
    struct env241 envinst241 = {
        .envinst200 = envinst200 ,
    };
    struct env244 envinst244 = {
        .envinst110 = envinst110 ,
        .envinst235 = envinst235 ,
        .envinst237 = envinst237 ,
        .envinst239 = envinst239 ,
    };
    struct env253 envinst253 = {
        .envinst223 = envinst223 ,
        .envinst209 = envinst209 ,
        .envinst211 = envinst211 ,
        .envinst217 = envinst217 ,
        .envinst233 = envinst233 ,
        .envinst213 = envinst213 ,
        .envinst226 = envinst226 ,
        .envinst239 = envinst239 ,
        .envinst204 = envinst204 ,
        .envinst228 = envinst228 ,
    };
    struct env264 envinst264 = {
        .envinst241 = envinst241 ,
        .envinst207 = envinst207 ,
        .envinst253 = envinst253 ,
        .envinst60 = envinst60 ,
        .envinst226 = envinst226 ,
        .envinst244 = envinst244 ,
        .envinst72 = envinst72 ,
        .envinst204 = envinst204 ,
    };
    struct env274 envinst274 = {
        .envinst201 = envinst201 ,
    };
    enum CAllocator_10  al4654 = ( (  idc280 ) ( ) );
    struct TextBuf_105  temp282;
    struct TextBuf_105  temp281 = (  temp282 );
    struct TextBuf_105 *  tb4655 = ( &temp281 );
    struct Slice_283  args4658 = ( (  get284 ) ( ) );
    struct Maybe_80  initial_dash_message4659 = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    if ( (  cmp290 ( ( (  args4658 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4660 = ( (  from_dash_const_dash_str291 ) ( (  elem_dash_get317 ( (  args4658 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion353  temp352 = ( (struct envunion353){ .fun = (  struct Maybe_351  (*) (  struct env114*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file354 , .env =  envinst114 } );
        struct Maybe_351  dref4661 = ( temp352.fun ( &temp352.env ,  (  al4654 ) ,  (  fname4660 ) ) );
        if ( dref4661.tag == Maybe_351_None_t ) {
            struct envunion696  temp695 = ( (struct envunion696){ .fun = (  struct TextBuf_105  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk357 , .env =  envinst112 } );
            (*  tb4655 ) = ( temp695.fun ( &temp695.env ,  (  al4654 ) ) );
            (*  tb4655 ) .f_filename = ( ( Maybe_80_Just ) ( ( (  clone_dash_0505 ) ( (  fname4660 ) ,  (  al4654 ) ) ) ) );
        }
        else {
            if ( dref4661.tag == Maybe_351_Just_t ) {
                (*  tb4655 ) = ( dref4661 .stuff .Maybe_351_Just_s .field0 );
            }
        }
    } else {
        struct envunion698  temp697 = ( (struct envunion698){ .fun = (  struct TextBuf_105  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk357 , .env =  envinst112 } );
        (*  tb4655 ) = ( temp697.fun ( &temp697.env ,  (  al4654 ) ) );
    }
    struct Config_250  temp699 = ( (struct Config_250) { .f_theme = (  default4094 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_250 *  cfg4663 = ( &temp699 );
    struct Editor_248  temp700 = ( (struct Editor_248) { .f_running = ( true ) , .f_al = (  al4654 ) , .f_pane = ( (  mk701 ) ( (  al4654 ) ,  (  tb4655 ) ) ) , .f_clipboard = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_search_dash_term = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } ) , .f_msg = (  initial_dash_message4659 ) , .f_cfg = (  cfg4663 ) , .f_og_dash_theme = (  default4094 ) } );
    struct Editor_248 *  ed4664 = ( &temp700 );
    struct envunion704  temp703 = ( (struct envunion704){ .fun = (  struct Tui_90  (*) (  struct env86*  ) )mk705 , .env =  envinst86 } );
    struct Tui_90  temp702 = ( temp703.fun ( &temp703.env ) );
    struct Tui_90 *  tui4665 = ( &temp702 );
    struct Screen_276  temp826 = ( (  mk_dash_screen827 ) ( (  tui4665 ) ,  (  al4654 ) ) );
    struct Screen_276 *  screen4666 = ( &temp826 );
    uint32_t  last_dash_redraw_dash_changes4667 = (  from_dash_integral165 ( 0 ) );
    while ( ( ( * (  ed4664 ) ) .f_running ) ) {
        struct env871 envinst871 = {
            .envinst88 = envinst88 ,
            .tui4665 =  tui4665 ,
        };
        struct FunIter_870  temp869 =  into_dash_iter878 ( ( (  from_dash_function879 ) ( ( (struct envunion877){ .fun = (  struct Maybe_873  (*) (  struct env871*  ) )lam880 , .env =  envinst871 } ) ) ) );
        while (true) {
            struct Maybe_873  __cond1076 =  next1077 (&temp869);
            if (  __cond1076 .tag == 0 ) {
                break;
            }
            struct InputEvent_874  ev4669 =  __cond1076 .stuff .Maybe_873_Just_s .field0;
            struct InputEvent_874  dref4670 = (  ev4669 );
            if ( dref4670.tag == InputEvent_874_Key_t ) {
                ( (  reset_dash_msg1079 ) ( (  ed4664 ) ) );
                struct envunion1086  temp1085 = ( (struct envunion1086){ .fun = (  enum Unit_8  (*) (  struct env264*  ,    struct Editor_248 *  ,    struct Key_268  ) )handle_dash_key1087 , .env =  envinst264 } );
                ( temp1085.fun ( &temp1085.env ,  (  ed4664 ) ,  ( dref4670 .stuff .InputEvent_874_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1876  temp1875 = ( (struct envunion1876){ .fun = (  bool  (*) (  struct env94*  ,    struct Screen_276 *  ) )resize_dash_screen_dash_if_dash_needed1877 , .env =  envinst94 } );
        ( temp1875.fun ( &temp1875.env ,  (  screen4666 ) ) );
        if ( ( (  should_dash_redraw1879 ) ( (  tui4665 ) ) ) ) {
            (*  screen4666 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1880 ) ( (  screen4666 ) ) );
            struct Theme_172 *  theme4672 = ( ( * ( ( * (  ed4664 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg1889 ) ( (  screen4666 ) ,  ( ( ( * (  theme4672 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1890 ) ( (  screen4666 ) ,  ( ( ( * (  theme4672 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1891 ) ( (  screen4666 ) ) );
            struct envunion1904  temp1903 = ( (struct envunion1904){ .fun = (  enum Unit_8  (*) (  struct env274*  ,    struct Screen_276 *  ,    struct Editor_248 *  ) )render_dash_editor1905 , .env =  envinst274 } );
            ( temp1903.fun ( &temp1903.env ,  (  screen4666 ) ,  (  ed4664 ) ) );
            last_dash_redraw_dash_changes4667 = ( (  render_dash_screen2284 ) ( (  screen4666 ) ) );
        }
        ( (  sync2431 ) ( (  tui4665 ) ) );
    }
    ( (  free_dash_screen2440 ) ( (  screen4666 ) ) );
    ( (  deinit2443 ) ( (  tui4665 ) ) );
}
