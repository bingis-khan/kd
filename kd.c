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
    size_t  growth_dash_factor2062;
    ;
    ;
    size_t  starting_dash_size2061;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env2 {
    ;
    size_t  growth_dash_factor2062;
    ;
    ;
    size_t  starting_dash_size2061;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env3 {
    ;
    size_t  growth_dash_factor2062;
    ;
    ;
    size_t  starting_dash_size2061;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env4 {
    ;
    size_t  growth_dash_factor2062;
    ;
    ;
    size_t  starting_dash_size2061;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env5 {
    ;
    size_t  growth_dash_factor2062;
    ;
    ;
    size_t  starting_dash_size2061;
    ;
    ;
    ;
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
    struct env1 envinst1;
    ;
    ;
    ;
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
    struct env2 envinst2;
    ;
    ;
    ;
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
    struct env3 envinst3;
    ;
    ;
    ;
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
    struct env4 envinst4;
    ;
    ;
    ;
    ;
    ;
};

struct envunion36 {
    enum Unit_8  (*fun) (  struct env5*  ,    struct List_17 *  );
    struct env5 env;
};

struct env35 {
    struct env5 envinst5;
    ;
    ;
    ;
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
    struct env12 envinst12;
    ;
    struct env2 envinst2;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2063;
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
    size_t  shrink_dash_factor2063;
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
    ;
    ;
    ;
    struct env40 envinst40;
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
    struct env42 envinst42;
    ;
    ;
    ;
};

struct envunion47 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    uint8_t  );
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
    enum Unit_8  (*fun) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  );
    struct env12 env;
};

struct env48 {
    struct env12 envinst12;
    ;
    ;
    ;
    ;
    ;
};

struct envunion51 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct env50 {
    ;
    ;
    ;
    struct env46 envinst46;
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
    ;
    struct env48 envinst48;
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
    ;
    ;
    ;
    struct env58 envinst58;
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
    enum Unit_8  (*fun) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  );
    struct env68 env;
};

struct env69 {
    ;
    ;
    ;
    struct env68 envinst68;
    ;
    ;
};

struct envunion73 {
    enum Unit_8  (*fun) (  struct env44*  ,    struct List_9 *  );
    struct env44 env;
};

struct env72 {
    struct env44 envinst44;
    ;
    ;
};

struct envunion75 {
    enum Unit_8  (*fun) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrView_27  );
    struct env63 env;
};

struct envunion76 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct env74 {
    ;
    ;
    ;
    ;
    ;
    struct env63 envinst63;
    ;
    struct env60 envinst60;
    ;
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
    enum Unit_8  (*fun) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_79  );
    struct env66 env;
};

struct env77 {
    ;
    ;
    ;
    ;
    struct env66 envinst66;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
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
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrConcat_83  );
    struct env67 env;
};

struct env81 {
    ;
    ;
    ;
    ;
    struct env67 envinst67;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    ;
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
    ;
    bool *  should_dash_resize3393;
    ;
    ;
    ;
    ;
};

struct env87 {
    bool *  should_dash_resize3393;
    ;
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
    ;
    ;
    struct env87 envinst87;
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
    struct env50 envinst50;
    struct env37 envinst37;
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

enum ChangesetInputType_106 {
    ChangesetInputType_106_NoChangeset,
    ChangesetInputType_106_InputChangeset,
    ChangesetInputType_106_CustomChangeset,
};

struct Actions_105 {
    struct List_30  f_list;
    size_t  f_cur;
    enum ChangesetInputType_106  f_input_dash_changeset;
};

enum Filetype_107 {
    Filetype_107_Text,
    Filetype_107_KC,
    Filetype_107_Markdown,
};

struct TextBuf_104 {
    enum CAllocator_10  f_al;
    struct List_14  f_buf;
    struct Actions_105  f_actions;
    struct Maybe_80  f_filename;
    enum Filetype_107  f_filetype;
};

struct envunion103 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

struct envunion108 {
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  );
    struct env40 env;
};

struct envunion109 {
    enum Unit_8  (*fun) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  );
    struct env41 env;
};

struct env100 {
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
    struct env40 envinst40;
    struct env41 envinst41;
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
    ;
    ;
    ;
    ;
    ;
    struct env69 envinst69;
    ;
};

struct envunion113 {
    struct List_14  (*fun) (  struct env52*  ,    struct Array_54  ,    enum CAllocator_10  );
    struct env52 env;
};

struct env112 {
    ;
    ;
    struct env52 envinst52;
    ;
    ;
    ;
    ;
};

struct envunion115 {
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env100 env;
};

struct envunion116 {
    struct TextBuf_104  (*fun) (  struct env112*  ,    enum CAllocator_10  );
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
    ;
    ;
    struct env100 envinst100;
    struct env112 envinst112;
    ;
    ;
    ;
    ;
    ;
};

struct envunion118 {
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
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
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
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
    struct Pos_26  (*fun) (  struct env117*  ,    struct TextBuf_104 *  ,    struct Action_25  );
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
    ;
    struct env117 envinst117;
    ;
};

struct envunion124 {
    struct Pos_26  (*fun) (  struct env119*  ,    struct TextBuf_104 *  ,    struct Action_25  );
    struct env119 env;
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
    struct env119 envinst119;
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
    enum Unit_8  (*fun) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  );
    struct env28 env;
};

struct envunion130 {
    struct StrView_27  (*fun) (  struct env125*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env125 env;
};

struct envunion131 {
    struct Pos_26  (*fun) (  struct env119*  ,    struct TextBuf_104 *  ,    struct Action_25  );
    struct env119 env;
};

struct env127 {
    ;
    ;
    ;
    ;
    ;
    struct env21 envinst21;
    ;
    struct env28 envinst28;
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
    struct env119 envinst119;
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
};

struct envunion137 {
    enum Unit_8  (*fun) (  struct env134*  ,    struct TextBuf_104 *  ,    struct Line_16 *  );
    struct env134 env;
};

struct env136 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env134 envinst134;
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
    ;
    uint32_t  base1228;
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

static  struct RangeIter_153   into_dash_iter154 (    struct Range_150  dref884 ) {
    return ( ( RangeIter_153_RangeIter ) ( ( ( Range_150_Range ) ( ( dref884 .field0 ) ,  ( dref884 .field1 ) ) ) ,  ( dref884 .field0 ) ) );
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

static  struct Maybe_155   next156 (    struct RangeIter_153 *  self892 ) {
    struct RangeIter_153  dref893 = ( * (  self892 ) );
    if ( true ) {
        if ( (  cmp157 ( ( dref893 .field1 ) , ( dref893 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
        }
        struct Maybe_155  x897 = ( ( Maybe_155_Just ) ( ( dref893 .field1 ) ) );
        (*  self892 ) = ( ( RangeIter_153_RangeIter ) ( ( ( Range_150_Range ) ( ( dref893 .field0 .field0 ) ,  ( dref893 .field0 .field1 ) ) ) ,  (  op_dash_add159 ( ( dref893 .field1 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        return (  x897 );
    }
}

static  uint32_t   reduce149 (    struct Range_150  iterable1111 ,    uint32_t  base1113 ,   struct envunion152  fun1115 ) {
    uint32_t  x1116 = (  base1113 );
    struct RangeIter_153  it1117 = ( (  into_dash_iter154 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1118 = ( (  next156 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_155_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_155_Just_t ) {
                struct envunion152  temp160 = (  fun1115 );
                x1116 = ( temp160.fun ( &temp160.env ,  ( dref1118 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  struct Range_150   to163 (    int32_t  from875 ,    int32_t  to877 ) {
    return ( ( Range_150_Range ) ( (  from875 ) ,  (  to877 ) ) );
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

static  uint32_t   lam166 (   struct env151* env ,    int32_t  item1232 ,    uint32_t  x1234 ) {
    return (  op_dash_mul167 ( (  x1234 ) , ( env->base1228 ) ) );
}

static  uint32_t   pow148 (    uint32_t  base1228 ,    int32_t  p1230 ) {
    struct env151 envinst151 = {
        .base1228 =  base1228 ,
    };
    return ( (  reduce149 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1230 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral165 ( 1 ) ) ,  ( (struct envunion152){ .fun = (  uint32_t  (*) (  struct env151*  ,    int32_t  ,    uint32_t  ) )lam166 , .env =  envinst151 } ) ) );
}

static  uint32_t   rshift146 (    uint32_t  x1242 ,    int32_t  am1244 ) {
    return (  op_dash_div147 ( (  x1242 ) , ( (  pow148 ) ( (  from_dash_integral165 ( 2 ) ) ,  (  am1244 ) ) ) ) );
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

static  uint32_t   mod168 (    uint32_t  l1247 ,    uint32_t  d1249 ) {
    uint32_t  r1250 = (  op_dash_div147 ( (  l1247 ) , (  d1249 ) ) );
    uint32_t  m1251 = (  op_dash_sub169 ( (  l1247 ) , (  op_dash_mul167 ( (  r1250 ) , (  d1249 ) ) ) ) );
    if ( (  cmp170 ( (  m1251 ) , (  from_dash_integral165 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add171 ( (  d1249 ) , (  m1251 ) ) );
    } else {
        return (  m1251 );
    }
}

static  struct RGB_141   rgb_dash_from_dash_hex143 (    uint32_t  n2714 ) {
    return ( (struct RGB_141) { .f_r = ( (  u32_dash_u8144 ) ( ( (  rshift146 ) ( (  n2714 ) ,  (  from_dash_integral56 ( 16 ) ) ) ) ) ) , .f_g = ( (  u32_dash_u8144 ) ( ( (  mod168 ) ( ( (  rshift146 ) ( (  n2714 ) ,  (  from_dash_integral56 ( 8 ) ) ) ) ,  (  from_dash_integral165 ( 256 ) ) ) ) ) ) , .f_b = ( (  u32_dash_u8144 ) ( ( (  mod168 ) ( (  n2714 ) ,  (  from_dash_integral165 ( 256 ) ) ) ) ) ) } );
}

static  struct Color_138   rgb142 (    uint32_t  x4036 ) {
    return ( ( Color_138_ColorRGB ) ( ( (  rgb_dash_from_dash_hex143 ) ( (  x4036 ) ) ) ) );
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

static  struct Slice_174   as_dash_slice178 (    struct Array_179 *  arr2308 ) {
    return ( (struct Slice_174) { .f_ptr = ( (  cast180 ) ( (  arr2308 ) ) ) , .f_count = ( (size_t ) ( 13 ) ) } );
}

static  struct Array_179   from_dash_listlike182 (    struct Array_179  self330 ) {
    return (  self330 );
}

static  struct HighlightColors_175   hlt183 (    enum HighlightType_20  type4030 ,    struct Color_138  fg4032 ) {
    return ( (struct HighlightColors_175) { .f_type = (  type4030 ) , .f_fg = (  fg4032 ) , .f_bg = ( (struct Maybe_176) { .tag = Maybe_176_None_t } ) } );
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

static  struct Slice_192   as_dash_slice194 (    struct Array_195 *  arr2308 ) {
    return ( (struct Slice_192) { .f_ptr = ( (  cast196 ) ( (  arr2308 ) ) ) , .f_count = ( (size_t ) ( 4 ) ) } );
}

static  struct Array_195   from_dash_listlike198 (    struct Array_195  self330 ) {
    return (  self330 );
}

static  struct StrView_27   from_dash_string199 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

struct env200 {
    ;
    struct Slice_192  all_dash_themes4052;
    ;
    ;
    ;
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
    struct Maybe_203  (*fun) (  struct env136*  ,    struct TextBuf_104 *  ,    struct Pos_26  );
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
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
    struct env127 env;
};

struct env204 {
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

struct envunion208 {
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
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
    struct Maybe_206  (*fun) (  struct env121*  ,    struct TextBuf_104 *  );
    struct env121 env;
};

struct env209 {
    ;
    struct env121 envinst121;
    ;
    ;
    ;
    ;
    ;
};

struct envunion212 {
    struct Maybe_206  (*fun) (  struct env123*  ,    struct TextBuf_104 *  );
    struct env123 env;
};

struct env211 {
    struct env123 envinst123;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion214 {
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
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
    ;
    ;
    struct env127 envinst127;
    ;
    ;
    ;
};

struct envunion216 {
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
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
    struct TextBuf_104 *  f_buf;
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
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_104 *  ,    struct Cursors_33  );
    struct env132 env;
};

struct env217 {
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
    struct env132 envinst132;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion224 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_104 *  ,    struct Cursors_33  );
    struct env132 env;
};

struct envunion225 {
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
    struct env127 env;
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
    ;
    ;
    ;
    struct env132 envinst132;
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

struct envunion227 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_219 *  ,    int32_t  );
    struct env215 env;
};

struct env226 {
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
};

struct Tuple2_230 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_230 Tuple2_230_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_230 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion229 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion231 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_104 *  ,    struct Cursors_33  );
    struct env132 env;
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
    ;
    ;
    struct env132 envinst132;
    ;
    ;
    struct env204 envinst204;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion234 {
    struct StrView_27  (*fun) (  struct env125*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env125 env;
};

struct env233 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env125 envinst125;
};

struct envunion236 {
    struct StrView_27  (*fun) (  struct env74*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env74 env;
};

struct env235 {
    ;
    ;
    ;
    struct env74 envinst74;
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
    struct env77 envinst77;
    ;
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
    struct env81 envinst81;
    ;
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
    struct Maybe_246  (*fun) (  struct env110*  ,    struct TextBuf_104 *  ,    struct Maybe_80  );
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
    struct env110 envinst110;
    ;
    ;
    ;
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
    struct env237 envinst237;
    struct env239 envinst239;
    ;
    ;
    ;
};

struct envunion254 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion255 {
    enum Unit_8  (*fun) (  struct env233*  ,    struct Editor_248 *  );
    struct env233 env;
};

struct envunion256 {
    enum Unit_8  (*fun) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  );
    struct env226 env;
};

struct envunion257 {
    enum Unit_8  (*fun) (  struct env239*  ,    struct Editor_248 *  ,    struct StrConcat_83  );
    struct env239 env;
};

struct envunion258 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  );
    struct env204 env;
};

struct envunion259 {
    enum Unit_8  (*fun) (  struct env228*  ,    struct Pane_219 *  );
    struct env228 env;
};

struct envunion260 {
    enum Unit_8  (*fun) (  struct env223*  ,    struct Pane_219 *  );
    struct env223 env;
};

struct envunion261 {
    enum Unit_8  (*fun) (  struct env209*  ,    struct Pane_219 *  );
    struct env209 env;
};

struct envunion262 {
    enum Unit_8  (*fun) (  struct env211*  ,    struct Pane_219 *  );
    struct env211 env;
};

struct envunion263 {
    enum Unit_8  (*fun) (  struct env217*  ,    struct Pane_219 *  );
    struct env217 env;
};

struct env253 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env213 envinst213;
    struct env233 envinst233;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env226 envinst226;
    struct env239 envinst239;
    ;
    struct env204 envinst204;
    ;
    ;
    struct env228 envinst228;
    ;
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
    struct env209 envinst209;
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
    ;
    struct env217 envinst217;
    ;
    ;
    ;
    ;
    ;
};

struct envunion265 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env241 env;
};

struct envunion266 {
    enum Unit_8  (*fun) (  struct env207*  ,    struct Pane_219 *  );
    struct env207 env;
};

struct envunion267 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion268 {
    enum Unit_8  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct Key_270 {
    enum {
        Key_270_Escape_t,
        Key_270_Enter_t,
        Key_270_Tab_t,
        Key_270_Backspace_t,
        Key_270_Char_t,
        Key_270_Ctrl_t,
        Key_270_Up_t,
        Key_270_Down_t,
        Key_270_Left_t,
        Key_270_Right_t,
        Key_270_Home_t,
        Key_270_End_t,
        Key_270_PageUp_t,
        Key_270_PageDown_t,
        Key_270_Delete_t,
        Key_270_Insert_t,
        Key_270_F1_t,
        Key_270_F2_t,
        Key_270_F3_t,
        Key_270_F4_t,
        Key_270_F5_t,
        Key_270_F6_t,
        Key_270_F7_t,
        Key_270_F8_t,
        Key_270_F9_t,
        Key_270_F10_t,
        Key_270_F11_t,
        Key_270_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_270_Char_s;
        struct {
            char  field0;
        } Key_270_Ctrl_s;
    } stuff;
};

static struct Key_270 Key_270_Char (  char  field0 ) {
    return ( struct Key_270 ) { .tag = Key_270_Char_t, .stuff = { .Key_270_Char_s = { .field0 = field0 } } };
};

static struct Key_270 Key_270_Ctrl (  char  field0 ) {
    return ( struct Key_270 ) { .tag = Key_270_Ctrl_t, .stuff = { .Key_270_Ctrl_s = { .field0 = field0 } } };
};

struct envunion269 {
    enum Unit_8  (*fun) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_270  );
    struct env253 env;
};

struct envunion271 {
    enum Unit_8  (*fun) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  );
    struct env226 env;
};

struct envunion272 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env244 env;
};

struct envunion273 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  );
    struct env204 env;
};

struct env264 {
    ;
    ;
    struct env241 envinst241;
    ;
    ;
    ;
    ;
    ;
    struct env207 envinst207;
    ;
    struct env60 envinst60;
    ;
    ;
    ;
    struct env72 envinst72;
    ;
    struct env253 envinst253;
    ;
    struct env226 envinst226;
    struct env244 envinst244;
    ;
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

static  struct ConstStrIter_294   into_dash_iter296 (    struct ConstStrIter_294  self1413 ) {
    return (  self1413 );
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

static  struct Maybe_297   next298 (    struct ConstStrIter_294 *  self1416 ) {
    uint8_t *  char_dash_ptr1417 = ( ( (  cast299 ) ( ( ( * (  self1416 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1418 = ( (  offset_dash_ptr300 ) ( (  char_dash_ptr1417 ) ,  ( (  size_dash_i64302 ) ( ( ( * (  self1416 ) ) .f_i ) ) ) ) );
    if ( (  eq303 ( ( * (  optr1418 ) ) , ( (  cast304 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    struct Char_65  char1419 = ( (  scan_dash_from_dash_mem305 ) ( (  optr1418 ) ) );
    (*  self1416 ) .f_i = (  op_dash_add311 ( ( ( * (  self1416 ) ) .f_i ) , ( (  char1419 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_297_Just ) ( (  char1419 ) ) );
}

static  size_t   reduce295 (    struct ConstStrIter_294  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct ConstStrIter_294  it1117 = ( (  into_dash_iter296 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1118 = ( (  next298 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_297_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_297_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  size_t   lam314 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add311 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count293 (    struct ConstStrIter_294  it1122 ) {
    return ( (  reduce295 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam314 ) ) );
}

static  struct ConstStrIter_294   into_dash_iter316 (    const char*  self1410 ) {
    return ( (struct ConstStrIter_294) { .f_ogstr = (  self1410 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_294   chars315 (    const char*  self1425 ) {
    return ( (  into_dash_iter316 ) ( (  self1425 ) ) );
}

static  size_t   const_dash_str_dash_len292 (    const char*  s1712 ) {
    return ( (  count293 ) ( ( (  chars315 ) ( (  s1712 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str291 (    const char*  s2016 ) {
    size_t  len2017 = ( (  const_dash_str_dash_len292 ) ( (  s2016 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  cast299 ) ( (  s2016 ) ) ) , .f_count = (  len2017 ) } ) } );
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

static  enum Unit_8   print_dash_str328 (    struct StrView_27  self1397 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32329 ) ( ( ( (  self1397 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1397 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str334 (    size_t  self1488 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1488 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str333 (    struct StrConcat_84  self1527 ) {
    struct StrConcat_84  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str334 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str332 (    struct StrConcat_83  self1527 ) {
    struct StrConcat_83  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str333 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str331 (    struct StrConcat_322  self1527 ) {
    struct StrConcat_322  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str332 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str334 ) ( ( dref1528 .field1 ) ) );
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

static  enum Unit_8   printf_dash_char336 (    struct Char_65  c759 ) {
    struct CharDestructured_337  dref760 = ( (  destructure339 ) ( (  c759 ) ) );
    if ( dref760.tag == CharDestructured_337_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32329 ) ( ( ( dref760 .stuff .CharDestructured_337_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref760 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref760.tag == CharDestructured_337_Scalar_t ) {
            if ( (  cmp170 ( ( ( dref760 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) , (  from_dash_integral165 ( 127 ) ) ) == 2 ) ) {
                const char*  temp345 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp345);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8144 ) ( ( ( dref760 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str335 (    struct Char_65  self1428 ) {
    ( (  printf_dash_char336 ) ( (  self1428 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str330 (    struct StrConcat_321  self1527 ) {
    struct StrConcat_321  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str327 (    struct StrConcat_326  self1527 ) {
    struct StrConcat_326  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str324 (    struct StrConcat_325  self1527 ) {
    struct StrConcat_325  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str327 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
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

static  enum Unit_8   panic323 (    struct StrConcat_321  errmsg1731 ) {
    ( (  print_dash_str324 ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_326_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1731 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  const char*   undefined348 (  ) {
    const char*  temp349;
    return (  temp349 );
}

static  const char*   or_dash_fail319 (    struct Maybe_320  x1744 ,    struct StrConcat_321  errmsg1746 ) {
    struct Maybe_320  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_320_None_t ) {
        ( (  panic323 ) ( (  errmsg1746 ) ) );
        return ( (  undefined348 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_320_Just_t ) {
            return ( dref1747 .stuff .Maybe_320_Just_s .field0 );
        }
    }
}

static  struct Maybe_320   try_dash_get350 (    struct Slice_283  slice1782 ,    size_t  i1784 ) {
    if ( ( (  cmp290 ( (  i1784 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_320) { .tag = Maybe_320_None_t } );
    }
    const char* *  elem_dash_ptr1785 = ( (  offset_dash_ptr285 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1784 ) ) ) ) );
    return ( ( Maybe_320_Just ) ( ( * (  elem_dash_ptr1785 ) ) ) );
}

static  const char*   get318 (    struct Slice_283  slice1788 ,    size_t  i1790 ) {
    return ( (  or_dash_fail319 ) ( ( (  try_dash_get350 ) ( (  slice1788 ) ,  (  i1790 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get317 (    struct Slice_283  self1801 ,    size_t  idx1803 ) {
    return ( (  get318 ) ( (  self1801 ) ,  (  idx1803 ) ) );
}

struct Maybe_351 {
    enum {
        Maybe_351_None_t,
        Maybe_351_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_104  field0;
        } Maybe_351_Just_s;
    } stuff;
};

static struct Maybe_351 Maybe_351_Just (  struct TextBuf_104  field0 ) {
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

static  struct List_14   mk361 (    enum CAllocator_10  al2056 ) {
    struct Slice_15  elements2057 = ( (  empty362 ) ( ) );
    return ( (struct List_14) { .f_al = (  al2056 ) , .f_elements = (  elements2057 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env371 {
    struct env12 envinst12;
    struct List_14 *  list2123;
};

struct envunion372 {
    enum Unit_8  (*fun) (  struct env371*  ,    struct Line_16  );
    struct env371 env;
};

struct ArrayIter_373 {
    struct Array_54  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_373   into_dash_iter375 (    struct Array_54  self2358 ) {
    return ( (struct ArrayIter_373) { .f_backing = (  self2358 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
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

static  enum Unit_8   print_dash_str389 (    int32_t  self1464 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1464 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str388 (    struct StrConcat_382  self1527 ) {
    struct StrConcat_382  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str332 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str389 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str387 (    struct StrConcat_381  self1527 ) {
    struct StrConcat_381  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str388 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str386 (    struct StrConcat_385  self1527 ) {
    struct StrConcat_385  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str387 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str383 (    struct StrConcat_384  self1527 ) {
    struct StrConcat_384  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str386 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic380 (    struct StrConcat_381  errmsg1731 ) {
    ( (  print_dash_str383 ) ( ( ( StrConcat_384_StrConcat ) ( ( ( StrConcat_385_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1731 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
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

static  struct Line_16 *   get_dash_ptr379 (    struct Array_54 *  arr2286 ,    size_t  i2289 ) {
    if ( ( (  cmp290 ( (  i2289 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2289 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2289 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  p2290 = ( ( (  cast_dash_ptr390 ) ( (  arr2286 ) ) ) );
    return ( (  offset_dash_ptr391 ) ( (  p2290 ) ,  ( (int64_t ) (  i2289 ) ) ) );
}

static  struct Line_16   get378 (    struct Array_54 *  arr2293 ,    size_t  i2296 ) {
    return ( * ( (  get_dash_ptr379 ) ( (  arr2293 ) ,  (  i2296 ) ) ) );
}

static  struct Maybe_376   next377 (    struct ArrayIter_373 *  self2365 ) {
    if ( (  cmp290 ( ( ( * (  self2365 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_376) { .tag = Maybe_376_None_t } );
    }
    struct Line_16  e2367 = ( (  get378 ) ( ( & ( ( * (  self2365 ) ) .f_backing ) ) ,  ( ( * (  self2365 ) ) .f_cur ) ) );
    (*  self2365 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2365 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_376_Just ) ( (  e2367 ) ) );
}

static  enum Unit_8   for_dash_each370 (    struct Array_54  iterable1092 ,   struct envunion372  fun1094 ) {
    struct ArrayIter_373  temp374 = ( (  into_dash_iter375 ) ( (  iterable1092 ) ) );
    struct ArrayIter_373 *  it1095 = ( &temp374 );
    while ( ( true ) ) {
        struct Maybe_376  dref1096 = ( (  next377 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_376_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_376_Just_t ) {
                struct envunion372  temp393 = (  fun1094 );
                ( temp393.fun ( &temp393.env ,  ( dref1096 .stuff .Maybe_376_Just_s .field0 ) ) );
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

static  struct Slice_15   allocate400 (    enum CAllocator_10  dref1978 ,    size_t  count1980 ) {
    if (!(  dref1978 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1981 = ( ( ( (  get_dash_typesize401 ) ( ) ) ) .f_size );
    struct Line_16 *  ptr1982 = ( (  cast_dash_ptr404 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1981 ) , (  count1980 ) ) ) ) ) ) );
    return ( (struct Slice_15) { .f_ptr = (  ptr1982 ) , .f_count = (  count1980 ) } );
}

struct env406 {
    ;
    struct Slice_15  new_dash_slice2067;
    ;
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

static  struct Line_16 *   get_dash_ptr411 (    struct Slice_15  slice1776 ,    size_t  i1778 ) {
    if ( ( (  cmp290 ( (  i1778 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1778 ) , ( (  slice1776 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1778 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1776 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  elem_dash_ptr1779 = ( (  offset_dash_ptr391 ) ( ( (  slice1776 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1778 ) ) ) ) );
    return (  elem_dash_ptr1779 );
}

static  enum Unit_8   set410 (    struct Slice_15  slice1793 ,    size_t  i1795 ,    struct Line_16  x1797 ) {
    struct Line_16 *  ep1798 = ( (  get_dash_ptr411 ) ( (  slice1793 ) ,  (  i1795 ) ) );
    (*  ep1798 ) = (  x1797 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size412 (    int32_t  x610 ) {
    return ( (size_t ) ( (int64_t ) (  x610 ) ) );
}

static  enum Unit_8   lam409 (   struct env406* env ,    struct Tuple2_408  dref2068 ) {
    return ( (  set410 ) ( ( env->new_dash_slice2067 ) ,  ( (  i32_dash_size412 ) ( ( dref2068 .field1 ) ) ) ,  ( dref2068 .field0 ) ) );
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

static  struct Zip_414   into_dash_iter418 (    struct Zip_414  self929 ) {
    return (  self929 );
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

static  struct Maybe_376   next421 (    struct SliceIter_415 *  self1858 ) {
    size_t  off1859 = ( ( * (  self1858 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1858 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_376) { .tag = Maybe_376_None_t } );
    }
    struct Line_16  elem1860 = ( * ( (  offset_dash_ptr391 ) ( ( ( ( * (  self1858 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1859 ) ) ) ) ) );
    (*  self1858 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_376_Just ) ( (  elem1860 ) ) );
}

static  struct Maybe_155   next422 (    struct FromIter_416 *  dref906 ) {
    int32_t  v908 = ( ( (* dref906 ) ) .f_from );
    (* dref906 ) .f_from = (  op_dash_add159 ( ( ( (* dref906 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_155_Just ) ( (  v908 ) ) );
}

static  struct Maybe_419   next420 (    struct Zip_414 *  self932 ) {
    struct Zip_414  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_376  dref934 = ( (  next421 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_376_None_t ) {
            return ( (struct Maybe_419) { .tag = Maybe_419_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_376_Just_t ) {
                struct Maybe_155  dref936 = ( (  next422 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_419) { .tag = Maybe_419_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_155_Just_t ) {
                        ( (  next421 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_419_Just ) ( ( ( Tuple2_408_Tuple2 ) ( ( dref934 .stuff .Maybe_376_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each413 (    struct Zip_414  iterable1092 ,   struct envunion407  fun1094 ) {
    struct Zip_414  temp417 = ( (  into_dash_iter418 ) ( (  iterable1092 ) ) );
    struct Zip_414 *  it1095 = ( &temp417 );
    while ( ( true ) ) {
        struct Maybe_419  dref1096 = ( (  next420 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_419_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_419_Just_t ) {
                struct envunion407  temp423 = (  fun1094 );
                ( temp423.fun ( &temp423.env ,  ( dref1096 .stuff .Maybe_419_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_415   into_dash_iter425 (    struct Slice_15  self1852 ) {
    return ( (struct SliceIter_415) { .f_slice = (  self1852 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_416   into_dash_iter426 (    struct FromIter_416  it904 ) {
    return (  it904 );
}

static  struct Zip_414   zip424 (    struct Slice_15  left940 ,    struct FromIter_416  right942 ) {
    struct SliceIter_415  left_dash_it943 = ( (  into_dash_iter425 ) ( (  left940 ) ) );
    struct FromIter_416  right_dash_it944 = ( (  into_dash_iter426 ) ( (  right942 ) ) );
    return ( (struct Zip_414) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  struct FromIter_416   from427 (    int32_t  f901 ) {
    return ( (struct FromIter_416) { .f_from = (  f901 ) } );
}

static  void *   cast_dash_ptr429 (    struct Line_16 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free428 (    enum CAllocator_10  dref1984 ,    struct Slice_15  slice1986 ) {
    if (!(  dref1984 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr429 ) ( ( (  slice1986 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full398 (   struct env2* env ,    struct List_14 *  list2066 ) {
    if ( (  eq399 ( ( ( * (  list2066 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2066 ) .f_elements = ( (  allocate400 ) ( ( ( * (  list2066 ) ) .f_al ) ,  ( env->starting_dash_size2061 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2066 ) ) .f_count ) , ( ( ( * (  list2066 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_15  new_dash_slice2067 = ( (  allocate400 ) ( ( ( * (  list2066 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2066 ) ) .f_count ) , ( env->growth_dash_factor2062 ) ) ) ) );
            struct env406 envinst406 = {
                .new_dash_slice2067 =  new_dash_slice2067 ,
            };
            struct envunion407  fun2071 = ( (struct envunion407){ .fun = (  enum Unit_8  (*) (  struct env406*  ,    struct Tuple2_408  ) )lam409 , .env =  envinst406 } );
            ( (  for_dash_each413 ) ( ( (  zip424 ) ( ( ( * (  list2066 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2071 ) ) );
            ( (  free428 ) ( ( ( * (  list2066 ) ) .f_al ) ,  ( ( * (  list2066 ) ) .f_elements ) ) );
            (*  list2066 ) .f_elements = (  new_dash_slice2067 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add396 (   struct env12* env ,    struct List_14 *  list2074 ,    struct Line_16  elem2076 ) {
    struct envunion13  temp397 = ( (struct envunion13){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full398 , .env =  env->envinst2 } );
    ( temp397.fun ( &temp397.env ,  (  list2074 ) ) );
    ( (  set410 ) ( ( ( * (  list2074 ) ) .f_elements ) ,  ( ( * (  list2074 ) ) .f_count ) ,  (  elem2076 ) ) );
    (*  list2074 ) .f_count = (  op_dash_add311 ( ( ( * (  list2074 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam394 (   struct env371* env ,    struct Line_16  x2127 ) {
    struct envunion49  temp395 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add396 , .env =  env->envinst12 } );
    return ( temp395.fun ( &temp395.env ,  ( env->list2123 ) ,  (  x2127 ) ) );
}

static  enum Unit_8   add_dash_all369 (   struct env48* env ,    struct List_14 *  list2123 ,    struct Array_54  it2125 ) {
    struct env371 envinst371 = {
        .envinst12 = env->envinst12 ,
        .list2123 =  list2123 ,
    };
    ( (  for_dash_each370 ) ( (  it2125 ) ,  ( (struct envunion372){ .fun = (  enum Unit_8  (*) (  struct env371*  ,    struct Line_16  ) )lam394 , .env =  envinst371 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_14   from_dash_iter359 (   struct env52* env ,    struct Array_54  iter2164 ,    enum CAllocator_10  al2166 ) {
    struct List_14  temp360 = ( (  mk361 ) ( (  al2166 ) ) );
    struct List_14 *  list2167 = ( &temp360 );
    struct envunion53  temp368 = ( (struct envunion53){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_14 *  ,    struct Array_54  ) )add_dash_all369 , .env =  env->envinst48 } );
    ( temp368.fun ( &temp368.env ,  (  list2167 ) ,  (  iter2164 ) ) );
    return ( * (  list2167 ) );
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

static  struct List_17   mk432 (    enum CAllocator_10  al2056 ) {
    struct Slice_18  elements2057 = ( (  empty433 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2056 ) , .f_elements = (  elements2057 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_16   mk_dash_line431 (    struct List_9  initial3738 ) {
    return ( (struct Line_16) { .f_line = (  initial3738 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk432 ) ( ( (  initial3738 ) .f_al ) ) ) } );
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

static  struct List_9   mk439 (    enum CAllocator_10  al2056 ) {
    struct Slice_11  elements2057 = ( (  empty440 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2056 ) , .f_elements = (  elements2057 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
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

static  struct List_30   mk447 (    enum CAllocator_10  al2056 ) {
    struct Slice_31  elements2057 = ( (  empty448 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2056 ) , .f_elements = (  elements2057 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_105   mk_dash_actions446 (    enum CAllocator_10  al3726 ) {
    return ( (struct Actions_105) { .f_list = ( (  mk447 ) ( (  al3726 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_106_NoChangeset ) } );
}

static  struct TextBuf_104   mk357 (   struct env112* env ,    enum CAllocator_10  al3840 ) {
    struct envunion113  temp358 = ( (struct envunion113){ .fun = (  struct List_14  (*) (  struct env52*  ,    struct Array_54  ,    enum CAllocator_10  ) )from_dash_iter359 , .env =  env->envinst52 } );
    return ( (struct TextBuf_104) { .f_al = (  al3840 ) , .f_buf = ( temp358.fun ( &temp358.env ,  ( (  from_dash_listlike430 ) ( ( (struct Array_54) { ._arr = { ( (  mk_dash_line431 ) ( ( (  mk439 ) ( (  al3840 ) ) ) ) ) } } ) ) ) ,  (  al3840 ) ) ) , .f_actions = ( (  mk_dash_actions446 ) ( (  al3840 ) ) ) , .f_filename = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_filetype = ( Filetype_107_Text ) } );
}

struct StrViewIter_458 {
    struct StrView_27  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_458   into_dash_iter459 (    struct StrViewIter_458  self1389 ) {
    return (  self1389 );
}

static  struct StrViewIter_458   into_dash_iter461 (    struct StrView_27  self1386 ) {
    return ( (struct StrViewIter_458) { .f_ds = (  self1386 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_458   chars460 (    struct StrView_27  self1400 ) {
    return ( (  into_dash_iter461 ) ( (  self1400 ) ) );
}

static  struct Maybe_297   next463 (    struct StrViewIter_458 *  self1392 ) {
    if ( (  cmp290 ( ( ( * (  self1392 ) ) .f_i ) , ( ( ( ( * (  self1392 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint8_t *  char_dash_ptr1393 = ( ( (  offset_dash_ptr300 ) ( ( (  cast347 ) ( ( ( ( ( * (  self1392 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64302 ) ( ( ( * (  self1392 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1394 = ( (  scan_dash_from_dash_mem305 ) ( (  char_dash_ptr1393 ) ) );
    (*  self1392 ) .f_i = (  op_dash_add311 ( ( ( * (  self1392 ) ) .f_i ) , ( (  char1394 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_297_Just ) ( (  char1394 ) ) );
}

static  size_t   min467 (    size_t  l1254 ,    size_t  r1256 ) {
    if ( (  cmp290 ( (  l1254 ) , (  r1256 ) ) == 0 ) ) {
        return (  l1254 );
    } else {
        return (  r1256 );
    }
}

static  struct Slice_11   subslice466 (    struct Slice_11  slice1806 ,    size_t  from1808 ,    size_t  to1810 ) {
    uint8_t *  begin_dash_ptr1811 = ( (  offset_dash_ptr300 ) ( ( (  slice1806 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1808 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1808 ) , (  to1810 ) ) != 0 ) || (  cmp290 ( (  from1808 ) , ( (  slice1806 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1812 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1810 ) ,  ( (  slice1806 ) .f_count ) ) ) , (  from1808 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  count1812 ) } );
}

static  struct Slice_11   from465 (    struct Slice_11  slice1815 ,    size_t  from1817 ) {
    return ( (  subslice466 ) ( (  slice1815 ) ,  (  from1817 ) ,  ( (  slice1815 ) .f_count ) ) );
}

static  struct StrView_27   byte_dash_substr_dash_from464 (    struct StrView_27  s2218 ,    size_t  from2220 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from465 ) ( ( (  s2218 ) .f_contents ) ,  (  from2220 ) ) ) } );
}

static  struct StrView_27   drop_dash_while456 (    struct StrView_27  sv2237 ,    bool (*  fun2239 )(    struct Char_65  ) ) {
    size_t  from2240 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_458  temp457 =  into_dash_iter459 ( ( (  chars460 ) ( (  sv2237 ) ) ) );
    while (true) {
        struct Maybe_297  __cond462 =  next463 (&temp457);
        if (  __cond462 .tag == 0 ) {
            break;
        }
        struct Char_65  c2242 =  __cond462 .stuff .Maybe_297_Just_s .field0;
        if ( ( ! ( (  fun2239 ) ( (  c2242 ) ) ) ) ) {
            break;
        }
        from2240 = (  op_dash_add311 ( (  from2240 ) , ( (  c2242 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from464 ) ( (  sv2237 ) ,  (  from2240 ) ) );
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

static  bool   eq472 (    struct Scalar_338  l725 ,    struct Scalar_338  r727 ) {
    return (  eq473 ( ( (  l725 ) .f_value ) , ( (  r727 ) .f_value ) ) );
}

static  bool   eq469 (    struct Char_65  l730 ,    struct Char_65  r732 ) {
    if ( ( !  eq399 ( ( (  l730 ) .f_num_dash_bytes ) , ( (  r732 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_470  dref733 = ( ( Tuple2_470_Tuple2 ) ( ( (  destructure339 ) ( (  l730 ) ) ) ,  ( (  destructure339 ) ( (  r732 ) ) ) ) );
    if ( dref733 .field0.tag == CharDestructured_337_Ref_t && dref733 .field1.tag == CharDestructured_337_Ref_t ) {
        int64_t  i736 = (  from_dash_integral288 ( 0 ) );
        while ( (  cmp290 ( ( (size_t ) (  i736 ) ) , ( ( dref733 .field0 .stuff .CharDestructured_337_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq303 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref733 .field0 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) + (  i736 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref733 .field1 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) + (  i736 ) ) ) ) ) ) ) {
                return ( false );
            }
            i736 = (  op_dash_add471 ( (  i736 ) , (  from_dash_integral288 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref733 .field0.tag == CharDestructured_337_Scalar_t && dref733 .field1.tag == CharDestructured_337_Scalar_t ) {
            return (  eq472 ( ( dref733 .field0 .stuff .CharDestructured_337_Scalar_s .field0 ) , ( dref733 .field1 .stuff .CharDestructured_337_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref733 .field0.tag == CharDestructured_337_Scalar_t && dref733 .field1.tag == CharDestructured_337_Ref_t ) {
                return (  eq303 ( ( (  u32_dash_u8144 ) ( ( ( dref733 .field0 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref733 .field1 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref733 .field0.tag == CharDestructured_337_Ref_t && dref733 .field1.tag == CharDestructured_337_Scalar_t ) {
                    return (  eq303 ( ( (  u32_dash_u8144 ) ( ( ( dref733 .field1 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref733 .field0 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam468 (    struct Char_65  c3750 ) {
    return (  eq469 ( (  c3750 ) , ( (  from_dash_charlike346 ) ( ( "." ) ,  ( 1 ) ) ) ) );
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

static  uint8_t   or_dash_fail476 (    struct Maybe_477  x1744 ,    struct StrConcat_321  errmsg1746 ) {
    struct Maybe_477  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_477_None_t ) {
        ( (  panic323 ) ( (  errmsg1746 ) ) );
        return ( (  undefined478 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_477_Just_t ) {
            return ( dref1747 .stuff .Maybe_477_Just_s .field0 );
        }
    }
}

static  struct Maybe_477   try_dash_get480 (    struct Slice_11  slice1782 ,    size_t  i1784 ) {
    if ( ( (  cmp290 ( (  i1784 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_477) { .tag = Maybe_477_None_t } );
    }
    uint8_t *  elem_dash_ptr1785 = ( (  offset_dash_ptr300 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1784 ) ) ) ) );
    return ( ( Maybe_477_Just ) ( ( * (  elem_dash_ptr1785 ) ) ) );
}

static  uint8_t   get475 (    struct Slice_11  slice1788 ,    size_t  i1790 ) {
    return ( (  or_dash_fail476 ) ( ( (  try_dash_get480 ) ( (  slice1788 ) ,  (  i1790 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get474 (    struct Slice_11  self1801 ,    size_t  idx1803 ) {
    return ( (  get475 ) ( (  self1801 ) ,  (  idx1803 ) ) );
}

static  uint8_t   ascii_dash_u8481 (    char  c777 ) {
    return ( ( (uint8_t ) (  c777 ) ) );
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

static  struct StrView_27   byte_dash_substr484 (    struct StrView_27  s2211 ,    size_t  from2213 ,    size_t  to2215 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice466 ) ( ( (  s2211 ) .f_contents ) ,  (  from2213 ) ,  (  to2215 ) ) ) } );
}

static  struct Maybe_80   extension455 (    struct StrView_27  path3748 ) {
    struct StrView_27  path3751 = ( (  drop_dash_while456 ) ( (  path3748 ) ,  (  lam468 ) ) );
    size_t  i3752 = ( ( (  path3751 ) .f_contents ) .f_count );
    while ( (  cmp290 ( (  i3752 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i3752 = (  op_dash_sub289 ( (  i3752 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq303 ( (  elem_dash_get474 ( ( (  path3751 ) .f_contents ) , (  i3752 ) ) ) , ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq399 ( (  i3752 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  ext3753 = ( (  byte_dash_substr484 ) ( (  path3751 ) ,  (  op_dash_add311 ( (  i3752 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path3751 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_80_Just ) ( (  ext3753 ) ) );
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
    bool (*  fun1144 )(    struct Tuple2_490  );
};

struct envunion493 {
    bool  (*fun) (  struct env492*  ,    struct Tuple2_490  ,    bool  );
    struct env492 env;
};

static  struct Zip_488   into_dash_iter494 (    struct Zip_488  self929 ) {
    return (  self929 );
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

static  struct Maybe_477   next497 (    struct SliceIter_489 *  self1858 ) {
    size_t  off1859 = ( ( * (  self1858 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1858 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_477) { .tag = Maybe_477_None_t } );
    }
    uint8_t  elem1860 = ( * ( (  offset_dash_ptr300 ) ( ( ( ( * (  self1858 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1859 ) ) ) ) ) );
    (*  self1858 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_477_Just ) ( (  elem1860 ) ) );
}

static  struct Maybe_495   next496 (    struct Zip_488 *  self932 ) {
    struct Zip_488  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_477  dref934 = ( (  next497 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_477_None_t ) {
            return ( (struct Maybe_495) { .tag = Maybe_495_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_477_Just_t ) {
                struct Maybe_477  dref936 = ( (  next497 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_477_None_t ) {
                    return ( (struct Maybe_495) { .tag = Maybe_495_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_477_Just_t ) {
                        ( (  next497 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next497 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_495_Just ) ( ( ( Tuple2_490_Tuple2 ) ( ( dref934 .stuff .Maybe_477_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_477_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce491 (    struct Zip_488  iterable1111 ,    bool  base1113 ,   struct envunion493  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct Zip_488  it1117 = ( (  into_dash_iter494 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_495  dref1118 = ( (  next496 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_495_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_495_Just_t ) {
                struct envunion493  temp498 = (  fun1115 );
                x1116 = ( temp498.fun ( &temp498.env ,  ( dref1118 .stuff .Maybe_495_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  bool   lam501 (   struct env492* env ,    struct Tuple2_490  e1146 ,    bool  x1148 ) {
    return ( ( ( env->fun1144 ) ( (  e1146 ) ) ) && (  x1148 ) );
}

static  bool   all487 (    struct Zip_488  it1142 ,    bool (*  fun1144 )(    struct Tuple2_490  ) ) {
    struct env492 envinst492 = {
        .fun1144 =  fun1144 ,
    };
    return ( (  reduce491 ) ( (  it1142 ) ,  ( true ) ,  ( (struct envunion493){ .fun = (  bool  (*) (  struct env492*  ,    struct Tuple2_490  ,    bool  ) )lam501 , .env =  envinst492 } ) ) );
}

static  struct SliceIter_489   into_dash_iter503 (    struct Slice_11  self1852 ) {
    return ( (struct SliceIter_489) { .f_slice = (  self1852 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_488   zip502 (    struct Slice_11  left940 ,    struct Slice_11  right942 ) {
    struct SliceIter_489  left_dash_it943 = ( (  into_dash_iter503 ) ( (  left940 ) ) );
    struct SliceIter_489  right_dash_it944 = ( (  into_dash_iter503 ) ( (  right942 ) ) );
    return ( (struct Zip_488) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  bool   lam504 (    struct Tuple2_490  dref1892 ) {
    return (  eq303 ( ( dref1892 .field0 ) , ( dref1892 .field1 ) ) );
}

static  bool   eq486 (    struct Slice_11  l1889 ,    struct Slice_11  r1891 ) {
    if ( ( !  eq399 ( ( (  l1889 ) .f_count ) , ( (  r1891 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all487 ) ( ( (  zip502 ) ( (  l1889 ) ,  (  r1891 ) ) ) ,  (  lam504 ) ) );
}

static  bool   eq485 (    struct StrView_27  l2245 ,    struct StrView_27  r2247 ) {
    return (  eq486 ( ( (  l2245 ) .f_contents ) , ( (  r2247 ) .f_contents ) ) );
}

static  enum Filetype_107   detect_dash_filetype_dash_from_dash_filename454 (    struct StrView_27  filename3745 ) {
    struct Maybe_80  mext3754 = ( (  extension455 ) ( (  filename3745 ) ) );
    struct Maybe_80  dref3755 = (  mext3754 );
    if ( dref3755.tag == Maybe_80_None_t ) {
        return ( Filetype_107_Text );
    }
    else {
        if ( dref3755.tag == Maybe_80_Just_t ) {
            if ( ( (  eq485 ( ( dref3755 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string199 ) ( ( "kc" ) ,  ( 2 ) ) ) ) ) || (  eq485 ( ( dref3755 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string199 ) ( ( "kkc" ) ,  ( 3 ) ) ) ) ) ) ) {
                return ( Filetype_107_KC );
            } else {
                if ( (  eq485 ( ( dref3755 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string199 ) ( ( "md" ) ,  ( 2 ) ) ) ) ) ) {
                    return ( Filetype_107_Markdown );
                } else {
                    return ( Filetype_107_Text );
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

static  struct Slice_11   allocate506 (    enum CAllocator_10  dref1978 ,    size_t  count1980 ) {
    if (!(  dref1978 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1981 = ( ( ( (  get_dash_typesize507 ) ( ) ) ) .f_size );
    uint8_t *  ptr1982 = ( (  cast_dash_ptr510 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1981 ) , (  count1980 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1982 ) , .f_count = (  count1980 ) } );
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

static  enum Unit_8   print_dash_str518 (    struct StrConcat_513  self1527 ) {
    struct StrConcat_513  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str517 (    struct StrConcat_516  self1527 ) {
    struct StrConcat_516  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str518 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str514 (    struct StrConcat_515  self1527 ) {
    struct StrConcat_515  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str517 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic512 (    struct StrConcat_513  errmsg1731 ) {
    ( (  print_dash_str514 ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_516_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1731 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Zip_520 {
    struct SliceIter_489  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

struct env521 {
    ;
    struct Slice_11  dest1883;
    ;
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

static  struct Zip_520   into_dash_iter525 (    struct Zip_520  self929 ) {
    return (  self929 );
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

static  struct Maybe_526   next527 (    struct Zip_520 *  self932 ) {
    struct Zip_520  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_477  dref934 = ( (  next497 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_477_None_t ) {
            return ( (struct Maybe_526) { .tag = Maybe_526_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_477_Just_t ) {
                struct Maybe_155  dref936 = ( (  next422 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_526) { .tag = Maybe_526_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_155_Just_t ) {
                        ( (  next497 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_526_Just ) ( ( ( Tuple2_523_Tuple2 ) ( ( dref934 .stuff .Maybe_477_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each519 (    struct Zip_520  iterable1092 ,   struct envunion522  fun1094 ) {
    struct Zip_520  temp524 = ( (  into_dash_iter525 ) ( (  iterable1092 ) ) );
    struct Zip_520 *  it1095 = ( &temp524 );
    while ( ( true ) ) {
        struct Maybe_526  dref1096 = ( (  next527 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_526_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_526_Just_t ) {
                struct envunion522  temp528 = (  fun1094 );
                ( temp528.fun ( &temp528.env ,  ( dref1096 .stuff .Maybe_526_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_520   zip529 (    struct Slice_11  left940 ,    struct FromIter_416  right942 ) {
    struct SliceIter_489  left_dash_it943 = ( (  into_dash_iter503 ) ( (  left940 ) ) );
    struct FromIter_416  right_dash_it944 = ( (  into_dash_iter426 ) ( (  right942 ) ) );
    return ( (struct Zip_520) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  uint8_t *   get_dash_ptr532 (    struct Slice_11  slice1776 ,    size_t  i1778 ) {
    if ( ( (  cmp290 ( (  i1778 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1778 ) , ( (  slice1776 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1778 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1776 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1779 = ( (  offset_dash_ptr300 ) ( ( (  slice1776 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1778 ) ) ) ) );
    return (  elem_dash_ptr1779 );
}

static  enum Unit_8   set531 (    struct Slice_11  slice1793 ,    size_t  i1795 ,    uint8_t  x1797 ) {
    uint8_t *  ep1798 = ( (  get_dash_ptr532 ) ( (  slice1793 ) ,  (  i1795 ) ) );
    (*  ep1798 ) = (  x1797 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam530 (   struct env521* env ,    struct Tuple2_523  dref1884 ) {
    return ( (  set531 ) ( ( env->dest1883 ) ,  ( (  i32_dash_size412 ) ( ( dref1884 .field1 ) ) ) ,  ( dref1884 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to511 (    struct Slice_11  src1881 ,    struct Slice_11  dest1883 ) {
    if ( (  cmp290 ( ( (  src1881 ) .f_count ) , ( (  dest1883 ) .f_count ) ) == 2 ) ) {
        ( (  panic512 ) ( ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1881 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1883 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env521 envinst521 = {
        .dest1883 =  dest1883 ,
    };
    ( (  for_dash_each519 ) ( ( (  zip529 ) ( (  src1881 ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion522){ .fun = (  enum Unit_8  (*) (  struct env521*  ,    struct Tuple2_523  ) )lam530 , .env =  envinst521 } ) ) );
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

static  struct StrView_27   clone_dash_0505 (    struct StrView_27  s2180 ,    enum CAllocator_10  al2182 ) {
    size_t  cnt2183 = ( ( (  s2180 ) .f_contents ) .f_count );
    struct Slice_11  nus2184 = ( (  allocate506 ) ( (  al2182 ) ,  (  op_dash_add311 ( (  cnt2183 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to511 ) ( ( (  s2180 ) .f_contents ) ,  (  nus2184 ) ) );
    ( (  set531 ) ( (  nus2184 ) ,  (  cnt2183 ) ,  ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2184 ) .f_ptr ) , .f_count = (  cnt2183 ) } ) } );
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

static  struct Maybe_80   try_dash_read_dash_contents534 (    const char*  filename2993 ,    enum CAllocator_10  al2995 ) {
    FILE *  file2996 = ( ( fopen ) ( (  filename2993 ) ,  ( (  from_dash_charlike535 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null536 ) ( (  file2996 ) ) ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    ( ( fseek ) ( (  file2996 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end542 ) ( ) ) ) );
    int32_t  file_dash_size2997 = ( ( ftell ) ( (  file2996 ) ) );
    ( ( fseek ) ( (  file2996 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set543 ) ( ) ) ) );
    struct Slice_11  file_dash_buf2998 = ( ( (  allocate506 ) ( (  al2995 ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( (  file_dash_size2997 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2998 ) .f_ptr ) ,  (  file_dash_size2997 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file2996 ) ) );
    ( (  set531 ) ( (  file_dash_buf2998 ) ,  ( (  i32_dash_size412 ) ( (  file_dash_size2997 ) ) ) ,  ( (  char_dash_u8533 ) ( ( (  nullchar544 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2996 ) ) );
    struct StrView_27  str2999 = ( (struct StrView_27) { .f_contents = ( (  subslice466 ) ( (  file_dash_buf2998 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub289 ( ( (  file_dash_buf2998 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_80_Just ) ( (  str2999 ) ) );
}

static  const char*   cast546 (    uint8_t *  x356 ) {
    return ( (const char* ) (  x356 ) );
}

static  const char*   as_dash_const_dash_str545 (    struct StrView_27  s2187 ) {
    return ( (  cast546 ) ( ( ( (  s2187 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr549 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free548 (    enum CAllocator_10  dref1984 ,    struct Slice_11  slice1986 ) {
    if (!(  dref1984 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr549 ) ( ( (  slice1986 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free547 (    struct StrView_27  s2195 ,    enum CAllocator_10  al2197 ) {
    ( (  free548 ) ( (  al2197 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2195 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
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

static  enum Ordering_158   cmp555 (    struct Pos_26  l3660 ,    struct Pos_26  r3662 ) {
    enum Ordering_158  dref3663 = ( (  cmp157 ) ( ( (  l3660 ) .f_line ) ,  ( (  r3662 ) .f_line ) ) );
    switch (  dref3663 ) {
        case Ordering_158_EQ : {
            return ( (  cmp157 ) ( ( (  l3660 ) .f_bi ) ,  ( (  r3662 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_158  els3664 =  dref3663;
            return (  els3664 );
            break;
        }
    }
}

static  struct Pos_26   min554 (    struct Pos_26  l1254 ,    struct Pos_26  r1256 ) {
    if ( (  cmp555 ( (  l1254 ) , (  r1256 ) ) == 0 ) ) {
        return (  l1254 );
    } else {
        return (  r1256 );
    }
}

static  struct Pos_26   max556 (    struct Pos_26  l1333 ,    struct Pos_26  r1335 ) {
    if ( (  cmp555 ( (  l1333 ) , (  r1335 ) ) == 2 ) ) {
        return (  l1333 );
    } else {
        return (  r1335 );
    }
}

static  bool   eq558 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq557 (    struct Pos_26  l3655 ,    struct Pos_26  r3657 ) {
    return ( (  eq558 ( ( (  l3655 ) .f_line ) , ( (  r3657 ) .f_line ) ) ) && (  eq558 ( ( (  l3655 ) .f_bi ) , ( (  r3657 ) .f_bi ) ) ) );
}

static  size_t   size559 (    struct List_14 *  l2158 ) {
    return ( ( * (  l2158 ) ) .f_count );
}

static  struct Line_16 *   get_dash_ptr564 (    struct List_14 *  list2026 ,    size_t  i2028 ) {
    if ( ( (  cmp290 ( (  i2028 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2028 ) , ( ( * (  list2026 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2028 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2026 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr411 ) ( ( ( * (  list2026 ) ) .f_elements ) ,  (  i2028 ) ) );
}

static  struct Line_16   get563 (    struct List_14 *  list2036 ,    size_t  i2038 ) {
    return ( * ( (  get_dash_ptr564 ) ( (  list2036 ) ,  (  i2038 ) ) ) );
}

static  struct Slice_11   to_dash_slice565 (    struct List_9  l2151 ) {
    uint8_t *  ptr2152 = ( ( (  l2151 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2152 ) , .f_count = ( (  l2151 ) .f_count ) } );
}

static  enum Unit_8   set566 (    struct List_14 *  list2046 ,    size_t  i2048 ,    struct Line_16  elem2050 ) {
    if ( ( (  cmp290 ( (  i2048 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2048 ) , ( ( * (  list2046 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2048 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2046 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set410 ) ( ( ( * (  list2046 ) ) .f_elements ) ,  (  i2048 ) ,  (  elem2050 ) ) );
    return ( Unit_8_Unit );
}

struct env573 {
    struct env6 envinst6;
    struct List_9 *  list2123;
};

struct envunion574 {
    enum Unit_8  (*fun) (  struct env573*  ,    uint8_t  );
    struct env573 env;
};

static  enum Unit_8   for_dash_each572 (    struct Slice_11  iterable1092 ,   struct envunion574  fun1094 ) {
    struct SliceIter_489  temp575 = ( (  into_dash_iter503 ) ( (  iterable1092 ) ) );
    struct SliceIter_489 *  it1095 = ( &temp575 );
    while ( ( true ) ) {
        struct Maybe_477  dref1096 = ( (  next497 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_477_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_477_Just_t ) {
                struct envunion574  temp576 = (  fun1094 );
                ( temp576.fun ( &temp576.env ,  ( dref1096 .stuff .Maybe_477_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env582 {
    ;
    struct Slice_11  new_dash_slice2067;
    ;
};

struct envunion583 {
    enum Unit_8  (*fun) (  struct env582*  ,    struct Tuple2_523  );
    struct env582 env;
};

static  enum Unit_8   lam584 (   struct env582* env ,    struct Tuple2_523  dref2068 ) {
    return ( (  set531 ) ( ( env->new_dash_slice2067 ) ,  ( (  i32_dash_size412 ) ( ( dref2068 .field1 ) ) ) ,  ( dref2068 .field0 ) ) );
}

static  enum Unit_8   for_dash_each585 (    struct Zip_520  iterable1092 ,   struct envunion583  fun1094 ) {
    struct Zip_520  temp586 = ( (  into_dash_iter525 ) ( (  iterable1092 ) ) );
    struct Zip_520 *  it1095 = ( &temp586 );
    while ( ( true ) ) {
        struct Maybe_526  dref1096 = ( (  next527 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_526_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_526_Just_t ) {
                struct envunion583  temp587 = (  fun1094 );
                ( temp587.fun ( &temp587.env ,  ( dref1096 .stuff .Maybe_526_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full581 (   struct env1* env ,    struct List_9 *  list2066 ) {
    if ( (  eq399 ( ( ( * (  list2066 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2066 ) .f_elements = ( (  allocate506 ) ( ( ( * (  list2066 ) ) .f_al ) ,  ( env->starting_dash_size2061 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2066 ) ) .f_count ) , ( ( ( * (  list2066 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2067 = ( (  allocate506 ) ( ( ( * (  list2066 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2066 ) ) .f_count ) , ( env->growth_dash_factor2062 ) ) ) ) );
            struct env582 envinst582 = {
                .new_dash_slice2067 =  new_dash_slice2067 ,
            };
            struct envunion583  fun2071 = ( (struct envunion583){ .fun = (  enum Unit_8  (*) (  struct env582*  ,    struct Tuple2_523  ) )lam584 , .env =  envinst582 } );
            ( (  for_dash_each585 ) ( ( (  zip529 ) ( ( ( * (  list2066 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2071 ) ) );
            ( (  free548 ) ( ( ( * (  list2066 ) ) .f_al ) ,  ( ( * (  list2066 ) ) .f_elements ) ) );
            (*  list2066 ) .f_elements = (  new_dash_slice2067 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add579 (   struct env6* env ,    struct List_9 *  list2074 ,    uint8_t  elem2076 ) {
    struct envunion7  temp580 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full581 , .env =  env->envinst1 } );
    ( temp580.fun ( &temp580.env ,  (  list2074 ) ) );
    ( (  set531 ) ( ( ( * (  list2074 ) ) .f_elements ) ,  ( ( * (  list2074 ) ) .f_count ) ,  (  elem2076 ) ) );
    (*  list2074 ) .f_count = (  op_dash_add311 ( ( ( * (  list2074 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam577 (   struct env573* env ,    uint8_t  x2127 ) {
    struct envunion47  temp578 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add579 , .env =  env->envinst6 } );
    return ( temp578.fun ( &temp578.env ,  ( env->list2123 ) ,  (  x2127 ) ) );
}

static  enum Unit_8   add_dash_all571 (   struct env46* env ,    struct List_9 *  list2123 ,    struct Slice_11  it2125 ) {
    struct env573 envinst573 = {
        .envinst6 = env->envinst6 ,
        .list2123 =  list2123 ,
    };
    ( (  for_dash_each572 ) ( (  it2125 ) ,  ( (struct envunion574){ .fun = (  enum Unit_8  (*) (  struct env573*  ,    uint8_t  ) )lam577 , .env =  envinst573 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter568 (   struct env50* env ,    struct Slice_11  iter2164 ,    enum CAllocator_10  al2166 ) {
    struct List_9  temp569 = ( (  mk439 ) ( (  al2166 ) ) );
    struct List_9 *  list2167 = ( &temp569 );
    struct envunion51  temp570 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
    ( temp570.fun ( &temp570.env ,  (  list2167 ) ,  (  iter2164 ) ) );
    return ( * (  list2167 ) );
}

static  struct StrView_27   or_dash_else589 (    struct Maybe_80  self1751 ,    struct StrView_27  alt1753 ) {
    struct Maybe_80  dref1754 = (  self1751 );
    if ( dref1754.tag == Maybe_80_None_t ) {
        return (  alt1753 );
    }
    else {
        if ( dref1754.tag == Maybe_80_Just_t ) {
            return ( dref1754 .stuff .Maybe_80_Just_s .field0 );
        }
    }
}

struct LineIter_591 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  struct Maybe_80   next592 (    struct LineIter_591 *  self2465 ) {
    if ( (  cmp290 ( ( ( * (  self2465 ) ) .f_last ) , ( ( ( ( * (  self2465 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    size_t  i2466 = ( ( * (  self2465 ) ) .f_last );
    while ( ( (  cmp290 ( (  i2466 ) , ( ( ( ( * (  self2465 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq303 ( ( (  get475 ) ( ( ( ( * (  self2465 ) ) .f_og ) .f_contents ) ,  (  i2466 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2466 = (  op_dash_add311 ( (  i2466 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2467 = ( (  byte_dash_substr484 ) ( ( ( * (  self2465 ) ) .f_og ) ,  ( ( * (  self2465 ) ) .f_last ) ,  (  i2466 ) ) );
    if ( (  cmp290 ( (  i2466 ) , ( ( ( ( * (  self2465 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2466 = (  op_dash_add311 ( (  i2466 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2465 ) .f_last = (  i2466 );
    return ( ( Maybe_80_Just ) ( (  line2467 ) ) );
}

static  struct LineIter_591   into_dash_iter594 (    struct LineIter_591  self2462 ) {
    return (  self2462 );
}

static  struct Maybe_80   head590 (    struct LineIter_591  it1160 ) {
    struct LineIter_591  temp593 = ( (  into_dash_iter594 ) ( (  it1160 ) ) );
    return ( (  next592 ) ( ( &temp593 ) ) );
}

static  struct LineIter_591   lines595 (    struct StrView_27  s2459 ) {
    return ( (struct LineIter_591) { .f_og = (  s2459 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env600 {
    ;
    struct Char_65  c2258;
};

struct envunion601 {
    bool  (*fun) (  struct env600*  ,    struct Char_65  );
    struct env600 env;
};

struct SplitIter_599 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion601  f_fun;
};

struct Drop_598 {
    struct SplitIter_599  field0;
    size_t  field1;
};

static struct Drop_598 Drop_598_Drop (  struct SplitIter_599  field0 ,  size_t  field1 ) {
    return ( struct Drop_598 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_597 {
    struct Drop_598  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_597   into_dash_iter602 (    struct Zip_597  self929 ) {
    return (  self929 );
}

static  struct Drop_598   into_dash_iter604 (    struct Drop_598  self846 ) {
    return (  self846 );
}

static  struct Zip_597   zip603 (    struct Drop_598  left940 ,    struct FromIter_416  right942 ) {
    struct Drop_598  left_dash_it943 = ( (  into_dash_iter604 ) ( (  left940 ) ) );
    struct FromIter_416  right_dash_it944 = ( (  into_dash_iter426 ) ( (  right942 ) ) );
    return ( (struct Zip_597) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  struct SplitIter_599   into_dash_iter606 (    struct SplitIter_599  self2263 ) {
    return (  self2263 );
}

static  struct Drop_598   drop605 (    struct SplitIter_599  iterable853 ,    size_t  i855 ) {
    struct SplitIter_599  it856 = ( (  into_dash_iter606 ) ( (  iterable853 ) ) );
    return ( ( Drop_598_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SplitIter_599   split_dash_by_dash_filter608 (    struct StrView_27  s2251 ,   struct envunion601  fun2253 ) {
    return ( (struct SplitIter_599) { .f_og = (  s2251 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2253 ) } );
}

static  bool   lam609 (   struct env600* env ,    struct Char_65  cc2260 ) {
    return (  eq469 ( (  cc2260 ) , ( env->c2258 ) ) );
}

static  struct SplitIter_599   split_dash_by_dash_each607 (    struct StrView_27  s2256 ,    struct Char_65  c2258 ) {
    struct env600 envinst600 = {
        .c2258 =  c2258 ,
    };
    return ( (  split_dash_by_dash_filter608 ) ( (  s2256 ) ,  ( (struct envunion601){ .fun = (  bool  (*) (  struct env600*  ,    struct Char_65  ) )lam609 , .env =  envinst600 } ) ) );
}

struct Tuple2_612 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_612 Tuple2_612_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_612 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_611 {
    enum {
        Maybe_611_None_t,
        Maybe_611_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_612  field0;
        } Maybe_611_Just_s;
    } stuff;
};

static struct Maybe_611 Maybe_611_Just (  struct Tuple2_612  field0 ) {
    return ( struct Maybe_611 ) { .tag = Maybe_611_Just_t, .stuff = { .Maybe_611_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_80   next615 (    struct SplitIter_599 *  self2266 ) {
    if ( (  cmp290 ( ( ( * (  self2266 ) ) .f_last ) , ( ( ( ( * (  self2266 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    size_t  i2267 = ( ( * (  self2266 ) ) .f_last );
    while ( (  cmp290 ( (  i2267 ) , ( ( ( ( * (  self2266 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2268 = ( (  get_dash_ptr532 ) ( ( ( ( * (  self2266 ) ) .f_og ) .f_contents ) ,  (  i2267 ) ) );
        struct Char_65  c2269 = ( (  scan_dash_from_dash_mem305 ) ( (  ptr2268 ) ) );
        struct envunion601  temp616 = ( ( * (  self2266 ) ) .f_fun );
        if ( ( temp616.fun ( &temp616.env ,  (  c2269 ) ) ) ) {
            break;
        }
        i2267 = (  op_dash_add311 ( (  i2267 ) , ( (  next_dash_char306 ) ( (  ptr2268 ) ) ) ) );
    }
    struct StrView_27  line2270 = ( (  byte_dash_substr484 ) ( ( ( * (  self2266 ) ) .f_og ) ,  ( ( * (  self2266 ) ) .f_last ) ,  (  i2267 ) ) );
    i2267 = (  op_dash_add311 ( (  i2267 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2266 ) .f_last = (  i2267 );
    return ( ( Maybe_80_Just ) ( (  line2270 ) ) );
}

static  struct Maybe_80   next614 (    struct Drop_598 *  dref848 ) {
    while ( (  cmp290 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next615 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub289 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next615 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  struct Maybe_611   next613 (    struct Zip_597 *  self932 ) {
    struct Zip_597  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_80  dref934 = ( (  next614 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_80_None_t ) {
            return ( (struct Maybe_611) { .tag = Maybe_611_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_80_Just_t ) {
                struct Maybe_155  dref936 = ( (  next422 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_611) { .tag = Maybe_611_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_155_Just_t ) {
                        ( (  next614 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_611_Just ) ( ( ( Tuple2_612_Tuple2 ) ( ( dref934 .stuff .Maybe_80_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion619 {
    struct List_9  (*fun) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  );
    struct env50 env;
};

static  enum Unit_8   insert621 (   struct env37* env ,    struct List_14 *  list2079 ,    size_t  i2081 ,    struct Line_16  elem2083 ) {
    if ( ( (  cmp290 ( (  i2081 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2081 ) , ( ( * (  list2079 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2081 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2079 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq399 ( ( ( * (  list2079 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp622 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add396 , .env =  env->envinst12 } );
        ( temp622.fun ( &temp622.env ,  (  list2079 ) ,  (  elem2083 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp623 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full398 , .env =  env->envinst2 } );
    ( temp623.fun ( &temp623.env ,  (  list2079 ) ) );
    size_t  ii2084 = (  op_dash_sub289 ( ( ( * (  list2079 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp290 ( (  ii2084 ) , (  i2081 ) ) != 0 ) ) {
        ( (  set410 ) ( ( ( * (  list2079 ) ) .f_elements ) ,  (  op_dash_add311 ( (  ii2084 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get563 ) ( (  list2079 ) ,  (  ii2084 ) ) ) ) );
        if ( (  eq399 ( (  ii2084 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2084 = (  op_dash_sub289 ( (  ii2084 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set410 ) ( ( ( * (  list2079 ) ) .f_elements ) ,  (  i2081 ) ,  (  elem2083 ) ) );
    (*  list2079 ) .f_count = (  op_dash_add311 ( ( ( * (  list2079 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion625 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  enum Unit_8   free627 (    struct List_9 *  list2060 ) {
    ( (  free548 ) ( ( ( * (  list2060 ) ) .f_al ) ,  ( ( * (  list2060 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line626 (    struct Line_16 *  line3741 ) {
    ( (  free627 ) ( ( & ( ( * (  line3741 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot562 (   struct env96* env ,    struct TextBuf_104 *  self3789 ,    struct Pos_26  p3791 ,    struct StrView_27  bytes3793 ) {
    enum CAllocator_10  al3794 = ( ( ( * (  self3789 ) ) .f_buf ) .f_al );
    struct List_14 *  buf3795 = ( & ( ( * (  self3789 ) ) .f_buf ) );
    struct Line_16  extracted_dash_line_dash_buf3796 = ( (  get563 ) ( (  buf3795 ) ,  ( (  i32_dash_size412 ) ( ( (  p3791 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3797 = ( (  from465 ) ( ( (  to_dash_slice565 ) ( ( (  extracted_dash_line_dash_buf3796 ) .f_line ) ) ) ,  ( (  i32_dash_size412 ) ( ( (  p3791 ) .f_bi ) ) ) ) );
    struct envunion97  temp567 = ( (struct envunion97){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter568 , .env =  env->envinst50 } );
    ( (  set566 ) ( (  buf3795 ) ,  ( (  i32_dash_size412 ) ( ( (  p3791 ) .f_line ) ) ) ,  ( (  mk_dash_line431 ) ( ( temp567.fun ( &temp567.env ,  ( (  subslice466 ) ( ( (  to_dash_slice565 ) ( ( (  extracted_dash_line_dash_buf3796 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( ( (  p3791 ) .f_bi ) ) ) ) ) ,  (  al3794 ) ) ) ) ) ) );
    struct Line_16 *  last_dash_line3798 = ( (  get_dash_ptr564 ) ( (  buf3795 ) ,  ( (  i32_dash_size412 ) ( ( (  p3791 ) .f_line ) ) ) ) );
    struct envunion99  temp588 = ( (struct envunion99){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
    ( temp588.fun ( &temp588.env ,  ( & ( ( * (  last_dash_line3798 ) ) .f_line ) ) ,  ( ( (  or_dash_else589 ) ( ( (  head590 ) ( ( (  lines595 ) ( (  bytes3793 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3799 = (  from_dash_integral56 ( 0 ) );
    struct Zip_597  temp596 =  into_dash_iter602 ( ( (  zip603 ) ( ( (  drop605 ) ( ( (  split_dash_by_dash_each607 ) ( (  bytes3793 ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_611  __cond610 =  next613 (&temp596);
        if (  __cond610 .tag == 0 ) {
            break;
        }
        struct Tuple2_612  dref3800 =  __cond610 .stuff .Maybe_611_Just_s .field0;
        struct envunion619  temp618 = ( (struct envunion619){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter568 , .env =  env->envinst50 } );
        struct Line_16  temp617 = ( (  mk_dash_line431 ) ( ( temp618.fun ( &temp618.env ,  ( ( dref3800 .field0 ) .f_contents ) ,  (  al3794 ) ) ) ) );
        struct Line_16 *  nuline3803 = ( &temp617 );
        size_t  next_dash_line3804 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( ( (  p3791 ) .f_line ) , ( dref3800 .field1 ) ) ) ) );
        struct envunion98  temp620 = ( (struct envunion98){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_14 *  ,    size_t  ,    struct Line_16  ) )insert621 , .env =  env->envinst37 } );
        ( temp620.fun ( &temp620.env ,  (  buf3795 ) ,  (  next_dash_line3804 ) ,  ( * (  nuline3803 ) ) ) );
        last_dash_line3798 = ( (  get_dash_ptr564 ) ( (  buf3795 ) ,  (  next_dash_line3804 ) ) );
        lines_dash_added3799 = (  op_dash_add159 ( (  lines_dash_added3799 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion625  temp624 = ( (struct envunion625){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
    ( temp624.fun ( &temp624.env ,  ( & ( ( * (  last_dash_line3798 ) ) .f_line ) ) ,  (  remaining3797 ) ) );
    ( (  free_dash_line626 ) ( ( & (  extracted_dash_line_dash_buf3796 ) ) ) );
    return (  lines_dash_added3799 );
}

static  size_t   size628 (    struct List_9 *  l2158 ) {
    return ( ( * (  l2158 ) ) .f_count );
}

struct StrConcat_634 {
    struct StrConcat_84  field0;
    struct Char_65  field1;
};

static struct StrConcat_634 StrConcat_634_StrConcat (  struct StrConcat_84  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_634 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_633 {
    struct StrConcat_634  field0;
    size_t  field1;
};

static struct StrConcat_633 StrConcat_633_StrConcat (  struct StrConcat_634  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_633 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_632 {
    struct StrConcat_633  field0;
    struct Char_65  field1;
};

static struct StrConcat_632 StrConcat_632_StrConcat (  struct StrConcat_633  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_632 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_637 {
    struct StrView_27  field0;
    struct StrConcat_632  field1;
};

static struct StrConcat_637 StrConcat_637_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_632  field1 ) {
    return ( struct StrConcat_637 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_636 {
    struct StrConcat_637  field0;
    struct Char_65  field1;
};

static struct StrConcat_636 StrConcat_636_StrConcat (  struct StrConcat_637  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_636 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str641 (    struct StrConcat_634  self1527 ) {
    struct StrConcat_634  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str333 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str640 (    struct StrConcat_633  self1527 ) {
    struct StrConcat_633  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str641 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str334 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str639 (    struct StrConcat_632  self1527 ) {
    struct StrConcat_632  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str640 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str638 (    struct StrConcat_637  self1527 ) {
    struct StrConcat_637  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str639 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str635 (    struct StrConcat_636  self1527 ) {
    struct StrConcat_636  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str638 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic631 (    struct StrConcat_632  errmsg1731 ) {
    ( (  print_dash_str635 ) ( ( ( StrConcat_636_StrConcat ) ( ( ( StrConcat_637_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1731 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Drop_643 {
    struct Zip_520  field0;
    size_t  field1;
};

static struct Drop_643 Drop_643_Drop (  struct Zip_520  field0 ,  size_t  field1 ) {
    return ( struct Drop_643 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env644 {
    ;
    ;
    ;
    size_t  num_dash_elems2092;
    struct List_9 *  list2087;
};

struct envunion645 {
    enum Unit_8  (*fun) (  struct env644*  ,    struct Tuple2_523  );
    struct env644 env;
};

static  struct Drop_643   into_dash_iter647 (    struct Drop_643  self846 ) {
    return (  self846 );
}

static  struct Maybe_526   next648 (    struct Drop_643 *  dref848 ) {
    while ( (  cmp290 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next527 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub289 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next527 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each642 (    struct Drop_643  iterable1092 ,   struct envunion645  fun1094 ) {
    struct Drop_643  temp646 = ( (  into_dash_iter647 ) ( (  iterable1092 ) ) );
    struct Drop_643 *  it1095 = ( &temp646 );
    while ( ( true ) ) {
        struct Maybe_526  dref1096 = ( (  next648 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_526_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_526_Just_t ) {
                struct envunion645  temp649 = (  fun1094 );
                ( temp649.fun ( &temp649.env ,  ( dref1096 .stuff .Maybe_526_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_643   drop650 (    struct Zip_520  iterable853 ,    size_t  i855 ) {
    struct Zip_520  it856 = ( (  into_dash_iter525 ) ( (  iterable853 ) ) );
    return ( ( Drop_643_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SliceIter_489   into_dash_iter652 (    struct List_9  self2053 ) {
    return ( (  into_dash_iter503 ) ( ( (  subslice466 ) ( ( (  self2053 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2053 ) .f_count ) ) ) ) );
}

static  struct Zip_520   zip651 (    struct List_9  left940 ,    struct FromIter_416  right942 ) {
    struct SliceIter_489  left_dash_it943 = ( (  into_dash_iter652 ) ( (  left940 ) ) );
    struct FromIter_416  right_dash_it944 = ( (  into_dash_iter426 ) ( (  right942 ) ) );
    return ( (struct Zip_520) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  enum Unit_8   set654 (    struct List_9 *  list2046 ,    size_t  i2048 ,    uint8_t  elem2050 ) {
    if ( ( (  cmp290 ( (  i2048 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2048 ) , ( ( * (  list2046 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2048 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2046 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set531 ) ( ( ( * (  list2046 ) ) .f_elements ) ,  (  i2048 ) ,  (  elem2050 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam653 (   struct env644* env ,    struct Tuple2_523  dref2093 ) {
    return ( (  set654 ) ( ( env->list2087 ) ,  (  op_dash_sub289 ( ( (  i32_dash_size412 ) ( ( dref2093 .field1 ) ) ) , ( env->num_dash_elems2092 ) ) ) ,  ( dref2093 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range630 (   struct env40* env ,    struct List_9 *  list2087 ,    size_t  from2089 ,    size_t  to_dash_excl2091 ) {
    if ( (  cmp290 ( (  to_dash_excl2091 ) , (  from2089 ) ) == 0 ) ) {
        ( (  panic631 ) ( ( ( StrConcat_632_StrConcat ) ( ( ( StrConcat_633_StrConcat ) ( ( ( StrConcat_634_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2089 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2091 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  from2089 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2089 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2087 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  to_dash_excl2091 ) , ( ( * (  list2087 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2091 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2087 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2092 = (  op_dash_sub289 ( (  to_dash_excl2091 ) , (  from2089 ) ) );
    struct env644 envinst644 = {
        .num_dash_elems2092 =  num_dash_elems2092 ,
        .list2087 =  list2087 ,
    };
    ( (  for_dash_each642 ) ( ( (  drop650 ) ( ( (  zip651 ) ( ( * (  list2087 ) ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add311 ( (  from2089 ) , (  num_dash_elems2092 ) ) ) ) ) ,  ( (struct envunion645){ .fun = (  enum Unit_8  (*) (  struct env644*  ,    struct Tuple2_523  ) )lam653 , .env =  envinst644 } ) ) );
    (*  list2087 ) .f_count = (  op_dash_sub289 ( ( ( * (  list2087 ) ) .f_count ) , (  num_dash_elems2092 ) ) );
    size_t  capacity2096 = ( ( ( * (  list2087 ) ) .f_elements ) .f_count );
    if ( (  cmp290 ( (  op_dash_mul405 ( ( ( * (  list2087 ) ) .f_count ) , ( env->shrink_dash_factor2063 ) ) ) , (  capacity2096 ) ) == 0 ) ) {
        if ( (  eq399 ( ( ( * (  list2087 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free548 ) ( ( ( * (  list2087 ) ) .f_al ) ,  ( ( * (  list2087 ) ) .f_elements ) ) );
            (*  list2087 ) .f_elements = ( (  empty440 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2097 = (  op_dash_mul405 ( (  op_dash_add311 ( (  op_dash_div342 ( ( ( * (  list2087 ) ) .f_count ) , ( env->shrink_dash_factor2063 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2063 ) ) );
        struct Slice_11  new_dash_slice2098 = ( (  allocate506 ) ( ( ( * (  list2087 ) ) .f_al ) ,  (  new_dash_size2097 ) ) );
        ( (  copy_dash_to511 ) ( ( (  subslice466 ) ( ( ( * (  list2087 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2087 ) ) .f_count ) ) ) ,  (  new_dash_slice2098 ) ) );
        ( (  free548 ) ( ( ( * (  list2087 ) ) .f_al ) ,  ( ( * (  list2087 ) ) .f_elements ) ) );
        (*  list2087 ) .f_elements = (  new_dash_slice2098 );
    }
    return ( Unit_8_Unit );
}

struct envunion656 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

static  enum Unit_8   trim657 (    struct List_9 *  l2140 ,    size_t  new_dash_count2142 ) {
    (*  l2140 ) .f_count = ( (  min467 ) ( (  new_dash_count2142 ) ,  ( ( * (  l2140 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min658 (    int32_t  l1254 ,    int32_t  r1256 ) {
    if ( (  cmp157 ( (  l1254 ) , (  r1256 ) ) == 0 ) ) {
        return (  l1254 );
    } else {
        return (  r1256 );
    }
}

struct envunion660 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

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

static  struct Slice_11   or_dash_else661 (    struct Maybe_662  self1751 ,    struct Slice_11  alt1753 ) {
    struct Maybe_662  dref1754 = (  self1751 );
    if ( dref1754.tag == Maybe_662_None_t ) {
        return (  alt1753 );
    }
    else {
        if ( dref1754.tag == Maybe_662_Just_t ) {
            return ( dref1754 .stuff .Maybe_662_Just_s .field0 );
        }
    }
}

static  struct Maybe_662   fmap_dash_maybe663 (    struct Maybe_376  x1293 ,    struct Slice_11 (*  fun1295 )(    struct Line_16  ) ) {
    struct Maybe_376  dref1296 = (  x1293 );
    if ( dref1296.tag == Maybe_376_None_t ) {
        return ( (struct Maybe_662) { .tag = Maybe_662_None_t } );
    }
    else {
        if ( dref1296.tag == Maybe_376_Just_t ) {
            return ( ( Maybe_662_Just ) ( ( (  fun1295 ) ( ( dref1296 .stuff .Maybe_376_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_376   try_dash_get664 (    struct List_14 *  list2041 ,    size_t  i2043 ) {
    if ( (  cmp290 ( (  i2043 ) , ( ( * (  list2041 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_376) { .tag = Maybe_376_None_t } );
    }
    return ( ( Maybe_376_Just ) ( ( (  get563 ) ( (  list2041 ) ,  (  i2043 ) ) ) ) );
}

static  struct Slice_11   lam665 (    struct Line_16  line3822 ) {
    return ( (  to_dash_slice565 ) ( ( (  line3822 ) .f_line ) ) );
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

static  enum Unit_8   print_dash_str671 (    struct StrConcat_670  self1527 ) {
    struct StrConcat_670  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str668 (    struct StrConcat_669  self1527 ) {
    struct StrConcat_669  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str671 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert667 (    bool  cond1737 ,    struct StrView_27  msg1739 ) {
    if ( ( ! (  cond1737 ) ) ) {
        ( (  print_dash_str668 ) ( ( ( StrConcat_669_StrConcat ) ( ( ( StrConcat_670_StrConcat ) ( ( (  from_dash_string199 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1739 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
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
    ;
    size_t  num_dash_elems2092;
    struct List_14 *  list2087;
};

struct envunion677 {
    enum Unit_8  (*fun) (  struct env676*  ,    struct Tuple2_408  );
    struct env676 env;
};

static  struct Drop_675   into_dash_iter679 (    struct Drop_675  self846 ) {
    return (  self846 );
}

static  struct Maybe_419   next680 (    struct Drop_675 *  dref848 ) {
    while ( (  cmp290 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next420 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub289 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next420 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each674 (    struct Drop_675  iterable1092 ,   struct envunion677  fun1094 ) {
    struct Drop_675  temp678 = ( (  into_dash_iter679 ) ( (  iterable1092 ) ) );
    struct Drop_675 *  it1095 = ( &temp678 );
    while ( ( true ) ) {
        struct Maybe_419  dref1096 = ( (  next680 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_419_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_419_Just_t ) {
                struct envunion677  temp681 = (  fun1094 );
                ( temp681.fun ( &temp681.env ,  ( dref1096 .stuff .Maybe_419_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_675   drop682 (    struct Zip_414  iterable853 ,    size_t  i855 ) {
    struct Zip_414  it856 = ( (  into_dash_iter418 ) ( (  iterable853 ) ) );
    return ( ( Drop_675_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct Slice_15   subslice685 (    struct Slice_15  slice1806 ,    size_t  from1808 ,    size_t  to1810 ) {
    struct Line_16 *  begin_dash_ptr1811 = ( (  offset_dash_ptr391 ) ( ( (  slice1806 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1808 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1808 ) , (  to1810 ) ) != 0 ) || (  cmp290 ( (  from1808 ) , ( (  slice1806 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1812 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1810 ) ,  ( (  slice1806 ) .f_count ) ) ) , (  from1808 ) ) );
    return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  count1812 ) } );
}

static  struct SliceIter_415   into_dash_iter684 (    struct List_14  self2053 ) {
    return ( (  into_dash_iter425 ) ( ( (  subslice685 ) ( ( (  self2053 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2053 ) .f_count ) ) ) ) );
}

static  struct Zip_414   zip683 (    struct List_14  left940 ,    struct FromIter_416  right942 ) {
    struct SliceIter_415  left_dash_it943 = ( (  into_dash_iter684 ) ( (  left940 ) ) );
    struct FromIter_416  right_dash_it944 = ( (  into_dash_iter426 ) ( (  right942 ) ) );
    return ( (struct Zip_414) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  enum Unit_8   lam686 (   struct env676* env ,    struct Tuple2_408  dref2093 ) {
    return ( (  set566 ) ( ( env->list2087 ) ,  (  op_dash_sub289 ( ( (  i32_dash_size412 ) ( ( dref2093 .field1 ) ) ) , ( env->num_dash_elems2092 ) ) ) ,  ( dref2093 .field0 ) ) );
}

struct env689 {
    ;
    struct Slice_15  dest1883;
    ;
};

struct envunion690 {
    enum Unit_8  (*fun) (  struct env689*  ,    struct Tuple2_408  );
    struct env689 env;
};

static  enum Unit_8   for_dash_each688 (    struct Zip_414  iterable1092 ,   struct envunion690  fun1094 ) {
    struct Zip_414  temp691 = ( (  into_dash_iter418 ) ( (  iterable1092 ) ) );
    struct Zip_414 *  it1095 = ( &temp691 );
    while ( ( true ) ) {
        struct Maybe_419  dref1096 = ( (  next420 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_419_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_419_Just_t ) {
                struct envunion690  temp692 = (  fun1094 );
                ( temp692.fun ( &temp692.env ,  ( dref1096 .stuff .Maybe_419_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam693 (   struct env689* env ,    struct Tuple2_408  dref1884 ) {
    return ( (  set410 ) ( ( env->dest1883 ) ,  ( (  i32_dash_size412 ) ( ( dref1884 .field1 ) ) ) ,  ( dref1884 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to687 (    struct Slice_15  src1881 ,    struct Slice_15  dest1883 ) {
    if ( (  cmp290 ( ( (  src1881 ) .f_count ) , ( (  dest1883 ) .f_count ) ) == 2 ) ) {
        ( (  panic512 ) ( ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1881 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1883 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env689 envinst689 = {
        .dest1883 =  dest1883 ,
    };
    ( (  for_dash_each688 ) ( ( (  zip424 ) ( (  src1881 ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion690){ .fun = (  enum Unit_8  (*) (  struct env689*  ,    struct Tuple2_408  ) )lam693 , .env =  envinst689 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range673 (   struct env41* env ,    struct List_14 *  list2087 ,    size_t  from2089 ,    size_t  to_dash_excl2091 ) {
    if ( (  cmp290 ( (  to_dash_excl2091 ) , (  from2089 ) ) == 0 ) ) {
        ( (  panic631 ) ( ( ( StrConcat_632_StrConcat ) ( ( ( StrConcat_633_StrConcat ) ( ( ( StrConcat_634_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2089 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2091 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  from2089 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2089 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2087 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  to_dash_excl2091 ) , ( ( * (  list2087 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2091 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2087 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2092 = (  op_dash_sub289 ( (  to_dash_excl2091 ) , (  from2089 ) ) );
    struct env676 envinst676 = {
        .num_dash_elems2092 =  num_dash_elems2092 ,
        .list2087 =  list2087 ,
    };
    ( (  for_dash_each674 ) ( ( (  drop682 ) ( ( (  zip683 ) ( ( * (  list2087 ) ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add311 ( (  from2089 ) , (  num_dash_elems2092 ) ) ) ) ) ,  ( (struct envunion677){ .fun = (  enum Unit_8  (*) (  struct env676*  ,    struct Tuple2_408  ) )lam686 , .env =  envinst676 } ) ) );
    (*  list2087 ) .f_count = (  op_dash_sub289 ( ( ( * (  list2087 ) ) .f_count ) , (  num_dash_elems2092 ) ) );
    size_t  capacity2096 = ( ( ( * (  list2087 ) ) .f_elements ) .f_count );
    if ( (  cmp290 ( (  op_dash_mul405 ( ( ( * (  list2087 ) ) .f_count ) , ( env->shrink_dash_factor2063 ) ) ) , (  capacity2096 ) ) == 0 ) ) {
        if ( (  eq399 ( ( ( * (  list2087 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free428 ) ( ( ( * (  list2087 ) ) .f_al ) ,  ( ( * (  list2087 ) ) .f_elements ) ) );
            (*  list2087 ) .f_elements = ( (  empty362 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2097 = (  op_dash_mul405 ( (  op_dash_add311 ( (  op_dash_div342 ( ( ( * (  list2087 ) ) .f_count ) , ( env->shrink_dash_factor2063 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2063 ) ) );
        struct Slice_15  new_dash_slice2098 = ( (  allocate400 ) ( ( ( * (  list2087 ) ) .f_al ) ,  (  new_dash_size2097 ) ) );
        ( (  copy_dash_to687 ) ( ( (  subslice685 ) ( ( ( * (  list2087 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2087 ) ) .f_count ) ) ) ,  (  new_dash_slice2098 ) ) );
        ( (  free428 ) ( ( ( * (  list2087 ) ) .f_al ) ,  ( ( * (  list2087 ) ) .f_elements ) ) );
        (*  list2087 ) .f_elements = (  new_dash_slice2098 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action553 (   struct env100* env ,    struct TextBuf_104 *  self3807 ,    struct Pos_26  from_dash_pos3809 ,    struct Pos_26  to_dash_pos3811 ,    struct StrView_27  bytes3813 ) {
    struct Pos_26  from3814 = ( (  min554 ) ( (  from_dash_pos3809 ) ,  (  to_dash_pos3811 ) ) );
    struct Pos_26  to3815 = ( (  max556 ) ( (  from_dash_pos3809 ) ,  (  to_dash_pos3811 ) ) );
    if ( (  eq557 ( (  to3815 ) , (  from3814 ) ) ) ) {
        enum CAllocator_10  al3816 = ( ( ( * (  self3807 ) ) .f_buf ) .f_al );
        if ( ( (  eq399 ( ( (  size559 ) ( ( & ( ( * (  self3807 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size412 ) ( ( (  from3814 ) .f_line ) ) ) ) ) && (  eq558 ( ( (  from3814 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion101  temp560 = ( (struct envunion101){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add396 , .env =  env->envinst12 } );
            ( temp560.fun ( &temp560.env ,  ( & ( ( * (  self3807 ) ) .f_buf ) ) ,  ( (  mk_dash_line431 ) ( ( (  mk439 ) ( (  al3816 ) ) ) ) ) ) );
        }
        struct envunion103  temp561 = ( (struct envunion103){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot562 , .env =  env->envinst96 } );
        ( temp561.fun ( &temp561.env ,  (  self3807 ) ,  (  from3814 ) ,  (  bytes3813 ) ) );
    } else {
        struct List_14 *  lines_dash_buf3817 = ( & ( ( * (  self3807 ) ) .f_buf ) );
        struct Line_16 *  first_dash_line3818 = ( (  get_dash_ptr564 ) ( (  lines_dash_buf3817 ) ,  ( (  i32_dash_size412 ) ( ( (  from3814 ) .f_line ) ) ) ) );
        (*  first_dash_line3818 ) .f_invalidated = ( true );
        if ( ( (  eq558 ( ( (  from3814 ) .f_line ) , ( (  to3815 ) .f_line ) ) ) && (  cmp157 ( ( (  to3815 ) .f_bi ) , (  op_dash_add159 ( ( (  size_dash_i32329 ) ( ( (  size628 ) ( ( & ( ( * (  first_dash_line3818 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion108  temp629 = ( (struct envunion108){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range630 , .env =  env->envinst40 } );
            ( temp629.fun ( &temp629.env ,  ( & ( ( * (  first_dash_line3818 ) ) .f_line ) ) ,  ( (  i32_dash_size412 ) ( ( (  from3814 ) .f_bi ) ) ) ,  ( (  i32_dash_size412 ) ( ( (  to3815 ) .f_bi ) ) ) ) );
            struct envunion656  temp655 = ( (struct envunion656){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot562 , .env =  env->envinst96 } );
            ( temp655.fun ( &temp655.env ,  (  self3807 ) ,  (  from3814 ) ,  (  bytes3813 ) ) );
        } else {
            ( (  trim657 ) ( ( & ( ( * (  first_dash_line3818 ) ) .f_line ) ) ,  ( (  i32_dash_size412 ) ( ( (  from3814 ) .f_bi ) ) ) ) );
            struct Line_16 *  last_dash_line3819 = ( (  get_dash_ptr564 ) ( (  lines_dash_buf3817 ) ,  ( (  i32_dash_size412 ) ( ( (  to3815 ) .f_line ) ) ) ) );
            (*  last_dash_line3819 ) .f_invalidated = ( true );
            to3815 .f_bi = ( (  min658 ) ( ( (  to3815 ) .f_bi ) ,  (  op_dash_add159 ( ( (  size_dash_i32329 ) ( ( (  size628 ) ( ( & ( ( * (  last_dash_line3819 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq558 ( ( (  to3815 ) .f_bi ) , (  op_dash_add159 ( ( (  size_dash_i32329 ) ( ( (  size628 ) ( ( & ( ( * (  last_dash_line3819 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to3815 .f_line = (  op_dash_add159 ( ( (  to3815 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to3815 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion660  temp659 = ( (struct envunion660){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot562 , .env =  env->envinst96 } );
            int32_t  lines_dash_added3820 = ( temp659.fun ( &temp659.env ,  (  self3807 ) ,  (  from3814 ) ,  (  bytes3813 ) ) );
            to3815 .f_line = (  op_dash_add159 ( ( (  to3815 ) .f_line ) , (  lines_dash_added3820 ) ) );
            from3814 .f_line = (  op_dash_add159 ( ( (  from3814 ) .f_line ) , (  lines_dash_added3820 ) ) );
            struct Slice_11  last_dash_line3823 = ( (  or_dash_else661 ) ( ( (  fmap_dash_maybe663 ) ( ( (  try_dash_get664 ) ( (  lines_dash_buf3817 ) ,  ( (  i32_dash_size412 ) ( ( (  to3815 ) .f_line ) ) ) ) ) ,  (  lam665 ) ) ) ,  ( (  empty440 ) ( ) ) ) );
            struct envunion102  temp666 = ( (struct envunion102){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
            ( temp666.fun ( &temp666.env ,  ( & ( ( * (  first_dash_line3818 ) ) .f_line ) ) ,  ( (  from465 ) ( (  last_dash_line3823 ) ,  ( (  i32_dash_size412 ) ( ( (  to3815 ) .f_bi ) ) ) ) ) ) );
            ( (  assert667 ) ( (  cmp157 ( ( (  to3815 ) .f_line ) , ( (  from3814 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string199 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion109  temp672 = ( (struct envunion109){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  ) )remove_dash_range673 , .env =  env->envinst41 } );
            ( temp672.fun ( &temp672.env ,  ( & ( ( * (  self3807 ) ) .f_buf ) ) ,  ( (  i32_dash_size412 ) ( (  op_dash_add159 ( ( (  from3814 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( ( (  to3815 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk694 (    int32_t  line3667 ,    int32_t  bi3669 ) {
    return ( (struct Pos_26) { .f_line = (  line3667 ) , .f_bi = (  bi3669 ) } );
}

static  struct Maybe_351   mk_dash_from_dash_file354 (   struct env114* env ,    enum CAllocator_10  al3843 ,    struct StrView_27  filename3845 ) {
    struct envunion116  temp356 = ( (struct envunion116){ .fun = (  struct TextBuf_104  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk357 , .env =  env->envinst112 } );
    struct TextBuf_104  temp355 = ( temp356.fun ( &temp356.env ,  (  al3843 ) ) );
    struct TextBuf_104 *  tb3846 = ( &temp355 );
    (*  tb3846 ) .f_filetype = ( (  detect_dash_filetype_dash_from_dash_filename454 ) ( (  filename3845 ) ) );
    struct StrView_27  filename03847 = ( (  clone_dash_0505 ) ( (  filename3845 ) ,  (  al3843 ) ) );
    struct Maybe_80  dref3848 = ( (  try_dash_read_dash_contents534 ) ( ( (  as_dash_const_dash_str545 ) ( (  filename03847 ) ) ) ,  (  al3843 ) ) );
    if ( dref3848.tag == Maybe_80_None_t ) {
        ( (  free547 ) ( (  filename03847 ) ,  (  al3843 ) ) );
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref3848.tag == Maybe_80_Just_t ) {
            if ( (  eq550 ( ( (  try_dash_get480 ) ( ( ( dref3848 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub289 ( ( ( ( dref3848 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_477_Just ) ( ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref3848 .stuff .Maybe_80_Just_s .field0 = ( (  byte_dash_substr484 ) ( ( dref3848 .stuff .Maybe_80_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub289 ( ( ( ( dref3848 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion115  temp552 = ( (struct envunion115){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action553 , .env =  env->envinst100 } );
            ( temp552.fun ( &temp552.env ,  (  tb3846 ) ,  ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( dref3848 .stuff .Maybe_80_Just_s .field0 ) ) );
            (*  tb3846 ) .f_filename = ( ( Maybe_80_Just ) ( (  filename03847 ) ) );
            return ( ( Maybe_351_Just ) ( ( * (  tb3846 ) ) ) );
        }
    }
}

struct envunion696 {
    struct TextBuf_104  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
};

struct envunion698 {
    struct TextBuf_104  (*fun) (  struct env112*  ,    enum CAllocator_10  );
    struct env112 env;
};

static  struct Pane_219   mk701 (    enum CAllocator_10  al4088 ,    struct TextBuf_104 *  buf4090 ) {
    return ( (struct Pane_219) { .f_buf = (  buf4090 ) , .f_cursor = ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_220_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_221) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
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

static  uint32_t   u32_dash_and712 (    uint32_t  l2892 ,    uint32_t  r2894 ) {
    return ( (  l2892 ) & (  r2894 ) );
}

static  uint32_t   u32_dash_neg713 (    uint32_t  l2897 ) {
    return ( ~ (  l2897 ) );
}

struct Array_715 {
    uint32_t _arr [4];
};

struct ArrayIter_717 {
    struct Array_715  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_717   into_dash_iter718 (    struct Array_715  self2358 ) {
    return ( (struct ArrayIter_717) { .f_backing = (  self2358 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
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

static  uint32_t *   get_dash_ptr722 (    struct Array_715 *  arr2286 ,    size_t  i2289 ) {
    if ( ( (  cmp290 ( (  i2289 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2289 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2289 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2290 = ( ( (  cast_dash_ptr723 ) ( (  arr2286 ) ) ) );
    return ( (  offset_dash_ptr724 ) ( (  p2290 ) ,  ( (int64_t ) (  i2289 ) ) ) );
}

static  uint32_t   get721 (    struct Array_715 *  arr2293 ,    size_t  i2296 ) {
    return ( * ( (  get_dash_ptr722 ) ( (  arr2293 ) ,  (  i2296 ) ) ) );
}

static  struct Maybe_719   next720 (    struct ArrayIter_717 *  self2365 ) {
    if ( (  cmp290 ( ( ( * (  self2365 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    uint32_t  e2367 = ( (  get721 ) ( ( & ( ( * (  self2365 ) ) .f_backing ) ) ,  ( ( * (  self2365 ) ) .f_cur ) ) );
    (*  self2365 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2365 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_719_Just ) ( (  e2367 ) ) );
}

static  uint32_t   reduce716 (    struct Array_715  iterable1111 ,    uint32_t  base1113 ,    uint32_t (*  fun1115 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1116 = (  base1113 );
    struct ArrayIter_717  it1117 = ( (  into_dash_iter718 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1118 = ( (  next720 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_719_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_719_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  uint32_t   u32_dash_or728 (    uint32_t  l2884 ,    uint32_t  r2886 ) {
    return ( (  l2884 ) | (  r2886 ) );
}

static  uint32_t   u32_dash_ors714 (    struct Array_715  vals2889 ) {
    return ( (  reduce716 ) ( (  vals2889 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or728 ) ) );
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

static  struct ArrayIter_737   into_dash_iter738 (    struct Array_735  self2358 ) {
    return ( (struct ArrayIter_737) { .f_backing = (  self2358 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr742 (    struct Array_735 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr741 (    struct Array_735 *  arr2286 ,    size_t  i2289 ) {
    if ( ( (  cmp290 ( (  i2289 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2289 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2289 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2290 = ( ( (  cast_dash_ptr742 ) ( (  arr2286 ) ) ) );
    return ( (  offset_dash_ptr724 ) ( (  p2290 ) ,  ( (int64_t ) (  i2289 ) ) ) );
}

static  uint32_t   get740 (    struct Array_735 *  arr2293 ,    size_t  i2296 ) {
    return ( * ( (  get_dash_ptr741 ) ( (  arr2293 ) ,  (  i2296 ) ) ) );
}

static  struct Maybe_719   next739 (    struct ArrayIter_737 *  self2365 ) {
    if ( (  cmp290 ( ( ( * (  self2365 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    uint32_t  e2367 = ( (  get740 ) ( ( & ( ( * (  self2365 ) ) .f_backing ) ) ,  ( ( * (  self2365 ) ) .f_cur ) ) );
    (*  self2365 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2365 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_719_Just ) ( (  e2367 ) ) );
}

static  uint32_t   reduce736 (    struct Array_735  iterable1111 ,    uint32_t  base1113 ,    uint32_t (*  fun1115 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1116 = (  base1113 );
    struct ArrayIter_737  it1117 = ( (  into_dash_iter738 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1118 = ( (  next739 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_719_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_719_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  uint32_t   u32_dash_ors734 (    struct Array_735  vals2889 ) {
    return ( (  reduce736 ) ( (  vals2889 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or728 ) ) );
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

static  struct ArrayIter_754   into_dash_iter755 (    struct Array_752  self2358 ) {
    return ( (struct ArrayIter_754) { .f_backing = (  self2358 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr759 (    struct Array_752 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr758 (    struct Array_752 *  arr2286 ,    size_t  i2289 ) {
    if ( ( (  cmp290 ( (  i2289 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2289 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2289 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2290 = ( ( (  cast_dash_ptr759 ) ( (  arr2286 ) ) ) );
    return ( (  offset_dash_ptr724 ) ( (  p2290 ) ,  ( (int64_t ) (  i2289 ) ) ) );
}

static  uint32_t   get757 (    struct Array_752 *  arr2293 ,    size_t  i2296 ) {
    return ( * ( (  get_dash_ptr758 ) ( (  arr2293 ) ,  (  i2296 ) ) ) );
}

static  struct Maybe_719   next756 (    struct ArrayIter_754 *  self2365 ) {
    if ( (  cmp290 ( ( ( * (  self2365 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    uint32_t  e2367 = ( (  get757 ) ( ( & ( ( * (  self2365 ) ) .f_backing ) ) ,  ( ( * (  self2365 ) ) .f_cur ) ) );
    (*  self2365 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2365 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_719_Just ) ( (  e2367 ) ) );
}

static  uint32_t   reduce753 (    struct Array_752  iterable1111 ,    uint32_t  base1113 ,    uint32_t (*  fun1115 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1116 = (  base1113 );
    struct ArrayIter_754  it1117 = ( (  into_dash_iter755 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1118 = ( (  next756 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_719_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_719_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  uint32_t   u32_dash_ors751 (    struct Array_752  vals2889 ) {
    return ( (  reduce753 ) ( (  vals2889 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or728 ) ) );
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

static  uint8_t *   get_dash_ptr766 (    struct Array_93 *  arr2286 ,    size_t  i2289 ) {
    if ( ( (  cmp290 ( (  i2289 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2289 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2289 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2290 = ( ( (  cast_dash_ptr767 ) ( (  arr2286 ) ) ) );
    return ( (  offset_dash_ptr300 ) ( (  p2290 ) ,  ( (int64_t ) (  i2289 ) ) ) );
}

static  enum Unit_8   set765 (    struct Array_93 *  arr2299 ,    size_t  i2302 ,    uint8_t  e2304 ) {
    uint8_t *  p2305 = ( (  get_dash_ptr766 ) ( (  arr2299 ) ,  (  i2302 ) ) );
    (*  p2305 ) = (  e2304 );
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
    struct Termios_92 *  orig_dash_termios3379 = ( &temp707 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  cast_dash_ptr711 ) ( (  orig_dash_termios3379 ) ) ) ) );
    struct Termios_92  raw3380 = ( * (  orig_dash_termios3379 ) );
    raw3380 .f_c_dash_lflag = ( (  u32_dash_and712 ) ( ( (  raw3380 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg713 ) ( ( (  u32_dash_ors714 ) ( ( (  from_dash_listlike729 ) ( ( (struct Array_715) { ._arr = { ( (  echo730 ) ( ) ) , ( (  icanon731 ) ( ) ) , ( (  isig732 ) ( ) ) , ( ( (  iexten733 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3380 .f_c_dash_iflag = ( (  u32_dash_and712 ) ( ( (  raw3380 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg713 ) ( ( (  u32_dash_ors734 ) ( ( (  from_dash_listlike745 ) ( ( (struct Array_735) { ._arr = { ( (  brkint746 ) ( ) ) , ( (  icrnl747 ) ( ) ) , ( (  inpck748 ) ( ) ) , ( (  istrip749 ) ( ) ) , ( ( (  ixon750 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3380 .f_c_dash_oflag = ( (  u32_dash_and712 ) ( ( (  raw3380 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg713 ) ( ( (  u32_dash_ors751 ) ( ( (  from_dash_listlike762 ) ( ( (struct Array_752) { ._arr = { ( ( (  opost763 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3380 .f_c_dash_cflag = ( (  u32_dash_or728 ) ( ( (  raw3380 ) .f_c_dash_cflag ) ,  ( (  cs8764 ) ( ) ) ) );
    ( (  set765 ) ( ( & ( (  raw3380 ) .f_c_dash_cc ) ) ,  ( (  vmin768 ) ( ) ) ,  (  from_dash_integral308 ( 0 ) ) ) );
    ( (  set765 ) ( ( & ( (  raw3380 ) .f_c_dash_cc ) ) ,  ( (  vtime769 ) ( ) ) ,  (  from_dash_integral308 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  tcsa_dash_flush770 ) ( ) ) ,  ( (  cast_dash_ptr711 ) ( ( & (  raw3380 ) ) ) ) ) );
    return ( * (  orig_dash_termios3379 ) );
}

static  enum Unit_8   for_dash_each773 (    struct StrViewIter_458  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrViewIter_458  temp774 = ( (  into_dash_iter459 ) ( (  iterable1092 ) ) );
    struct StrViewIter_458 *  it1095 = ( &temp774 );
    while ( ( true ) ) {
        struct Maybe_297  dref1096 = ( (  next463 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_297_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print772 (    struct StrView_27  s2624 ) {
    ( (  for_dash_each773 ) ( ( (  chars460 ) ( (  s2624 ) ) ) ,  (  printf_dash_char336 ) ) );
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

static  struct Maybe_320   get780 (    const char*  s2657 ) {
    return ( (  from_dash_nullable_dash_c_dash_str781 ) ( ( ( getenv ) ( (  s2657 ) ) ) ) );
}

static  bool   eq789 (    const char*  l1715 ,    const char*  r1717 ) {
    return (  eq558 ( ( ( strcmp ) ( (  l1715 ) ,  (  r1717 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_91   query_dash_palette779 (  ) {
    struct Maybe_320  colorterm2658 = ( (  get780 ) ( ( (  from_dash_string57 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_320  dref2659 = (  colorterm2658 );
    if ( dref2659.tag == Maybe_320_Just_t ) {
        if ( ( (  eq789 ( ( dref2659 .stuff .Maybe_320_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq789 ( ( dref2659 .stuff .Maybe_320_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_91_PaletteRGB );
        }
    }
    else {
        if ( dref2659.tag == Maybe_320_None_t ) {
        }
    }
    struct Maybe_320  dref2661 = ( (  get780 ) ( ( (  from_dash_string57 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2661.tag == Maybe_320_Just_t ) {
        if ( (  eq789 ( ( dref2661 .stuff .Maybe_320_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_91_Palette8 );
        }
    }
    else {
        if ( dref2661.tag == Maybe_320_None_t ) {
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
    struct Winsize_792 *  ws2646 = ( &temp793 );
    if ( ( (  eq558 ( ( ( ioctl ) ( ( (  stdout_dash_fileno798 ) ( ) ) ,  ( (  tiocgwinsz799 ) ( ) ) ,  (  ws2646 ) ) ) , (  op_dash_neg801 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq802 ( ( ( * (  ws2646 ) ) .f_ws_dash_col ) , (  from_dash_integral803 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_790_Tuple2 ) ( (  from_dash_integral165 ( 80 ) ) ,  (  from_dash_integral165 ( 24 ) ) ) );
    }
    return ( ( Tuple2_790_Tuple2 ) ( ( (  u16_dash_u32804 ) ( ( ( * (  ws2646 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32804 ) ( ( ( * (  ws2646 ) ) .f_ws_dash_row ) ) ) ) );
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
    struct timespec *  t3341 = ( &temp813 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic816 ) ( ) ) ,  (  t3341 ) ) );
    return ( * (  t3341 ) );
}

struct env817 {
    bool *  should_dash_resize3393;
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

static  enum Unit_8   lam823 (   struct env817* env ,    int32_t  dref3400 ) {
    (* env->should_dash_resize3393 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst824 (    struct Tuple2_790  dref1271 ) {
    return ( dref1271 .field0 );
}

static  uint32_t   snd825 (    struct Tuple2_790  dref1274 ) {
    return ( dref1274 .field1 );
}

static  struct Tui_90   mk705 (   struct env86* env ) {
    struct Termios_92  og_dash_termios3395 = ( (  enable_dash_raw_dash_mode706 ) ( ) );
    ( (  hide_dash_cursor771 ) ( ) );
    ( (  reset_dash_colors775 ) ( ) );
    ( (  clear_dash_screen776 ) ( ) );
    ( (  enable_dash_mouse777 ) ( ) );
    ( (  flush_dash_stdout778 ) ( ) );
    enum ColorPalette_91  palette3396 = ( (  query_dash_palette779 ) ( ) );
    struct Tuple2_790  dims3397 = ( (  get_dash_dimensions791 ) ( ) );
    uint32_t  fps3398 = (  from_dash_integral165 ( 60 ) );
    struct timespec  last_dash_sync3399 = ( (  now812 ) ( ) );
    struct env817 envinst817 = {
        .should_dash_resize3393 = env->should_dash_resize3393 ,
    };
    ( _intr_register_signal ( (  from_dash_integral56 ( 28 ) ) , ( (struct envunion818){ .fun = (  enum Unit_8  (*) (  struct env817*  ,    int32_t  ) )lam823 , .env =  envinst817 } ) ) );
    return ( (struct Tui_90) { .f_width = ( (  fst824 ) ( (  dims3397 ) ) ) , .f_height = ( (  snd825 ) ( (  dims3397 ) ) ) , .f_target_dash_fps = (  fps3398 ) , .f_actual_dash_fps = (  from_dash_integral165 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3399 ) , .f_fps_dash_ts = (  last_dash_sync3399 ) , .f_fps_dash_count = (  from_dash_integral165 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3395 ) , .f_palette = (  palette3396 ) , .f_should_dash_redraw = ( true ) } );
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

static  struct Slice_277   allocate828 (    enum CAllocator_10  dref1978 ,    size_t  count1980 ) {
    if (!(  dref1978 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1981 = ( ( ( (  get_dash_typesize829 ) ( ) ) ) .f_size );
    struct Cell_278 *  ptr1982 = ( (  cast_dash_ptr832 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1981 ) , (  count1980 ) ) ) ) ) ) );
    return ( (struct Slice_277) { .f_ptr = (  ptr1982 ) , .f_count = (  count1980 ) } );
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
    struct Slice_277  s1930;
    struct Cell_278 (*  fun1932 )(    struct Cell_278  );
    ;
    ;
};

struct envunion844 {
    enum Unit_8  (*fun) (  struct env843*  ,    int32_t  );
    struct env843 env;
};

static  enum Unit_8   for_dash_each842 (    struct Range_150  iterable1092 ,   struct envunion844  fun1094 ) {
    struct RangeIter_153  temp845 = ( (  into_dash_iter154 ) ( (  iterable1092 ) ) );
    struct RangeIter_153 *  it1095 = ( &temp845 );
    while ( ( true ) ) {
        struct Maybe_155  dref1096 = ( (  next156 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_155_Just_t ) {
                struct envunion844  temp846 = (  fun1094 );
                ( temp846.fun ( &temp846.env ,  ( dref1096 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_278 *   offset_dash_ptr850 (    struct Cell_278 *  x338 ,    int64_t  count340 ) {
    struct Cell_278  temp851;
    return ( (struct Cell_278 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp851 ) ) ) ) ) ) ) ) );
}

static  struct Cell_278 *   get_dash_ptr849 (    struct Slice_277  slice1776 ,    size_t  i1778 ) {
    if ( ( (  cmp290 ( (  i1778 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1778 ) , ( (  slice1776 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1778 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1776 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_278 *  elem_dash_ptr1779 = ( (  offset_dash_ptr850 ) ( ( (  slice1776 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1778 ) ) ) ) );
    return (  elem_dash_ptr1779 );
}

static  enum Unit_8   set848 (    struct Slice_277  slice1793 ,    size_t  i1795 ,    struct Cell_278  x1797 ) {
    struct Cell_278 *  ep1798 = ( (  get_dash_ptr849 ) ( (  slice1793 ) ,  (  i1795 ) ) );
    (*  ep1798 ) = (  x1797 );
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

static  struct Cell_278   or_dash_fail854 (    struct Maybe_855  x1744 ,    struct StrConcat_321  errmsg1746 ) {
    struct Maybe_855  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_855_None_t ) {
        ( (  panic323 ) ( (  errmsg1746 ) ) );
        return ( (  undefined856 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_855_Just_t ) {
            return ( dref1747 .stuff .Maybe_855_Just_s .field0 );
        }
    }
}

static  struct Maybe_855   try_dash_get858 (    struct Slice_277  slice1782 ,    size_t  i1784 ) {
    if ( ( (  cmp290 ( (  i1784 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_855) { .tag = Maybe_855_None_t } );
    }
    struct Cell_278 *  elem_dash_ptr1785 = ( (  offset_dash_ptr850 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1784 ) ) ) ) );
    return ( ( Maybe_855_Just ) ( ( * (  elem_dash_ptr1785 ) ) ) );
}

static  struct Cell_278   get853 (    struct Slice_277  slice1788 ,    size_t  i1790 ) {
    return ( (  or_dash_fail854 ) ( ( (  try_dash_get858 ) ( (  slice1788 ) ,  (  i1790 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_278   elem_dash_get852 (    struct Slice_277  self1801 ,    size_t  idx1803 ) {
    return ( (  get853 ) ( (  self1801 ) ,  (  idx1803 ) ) );
}

static  enum Unit_8   lam847 (   struct env843* env ,    int32_t  i1934 ) {
    return ( (  set848 ) ( ( env->s1930 ) ,  ( (  i32_dash_size412 ) ( (  i1934 ) ) ) ,  ( ( env->fun1932 ) ( (  elem_dash_get852 ( ( env->s1930 ) , ( (  i32_dash_size412 ) ( (  i1934 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map841 (    struct Slice_277  s1930 ,    struct Cell_278 (*  fun1932 )(    struct Cell_278  ) ) {
    struct env843 envinst843 = {
        .s1930 =  s1930 ,
        .fun1932 =  fun1932 ,
    };
    ( (  for_dash_each842 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( ( (  s1930 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion844){ .fun = (  enum Unit_8  (*) (  struct env843*  ,    int32_t  ) )lam847 , .env =  envinst843 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_278   default_dash_cell860 (  ) {
    return ( (struct Cell_278) { .f_c = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_278   lam859 (    struct Cell_278  dref3503 ) {
    return ( (  default_dash_cell860 ) ( ) );
}

struct env863 {
    ;
    struct Slice_277  s1930;
    struct Cell_278 (*  fun1932 )(    struct Cell_278  );
    ;
    ;
};

struct envunion864 {
    enum Unit_8  (*fun) (  struct env863*  ,    int32_t  );
    struct env863 env;
};

static  enum Unit_8   for_dash_each862 (    struct Range_150  iterable1092 ,   struct envunion864  fun1094 ) {
    struct RangeIter_153  temp865 = ( (  into_dash_iter154 ) ( (  iterable1092 ) ) );
    struct RangeIter_153 *  it1095 = ( &temp865 );
    while ( ( true ) ) {
        struct Maybe_155  dref1096 = ( (  next156 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_155_Just_t ) {
                struct envunion864  temp866 = (  fun1094 );
                ( temp866.fun ( &temp866.env ,  ( dref1096 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam867 (   struct env863* env ,    int32_t  i1934 ) {
    return ( (  set848 ) ( ( env->s1930 ) ,  ( (  i32_dash_size412 ) ( (  i1934 ) ) ) ,  ( ( env->fun1932 ) ( (  elem_dash_get852 ( ( env->s1930 ) , ( (  i32_dash_size412 ) ( (  i1934 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map861 (    struct Slice_277  s1930 ,    struct Cell_278 (*  fun1932 )(    struct Cell_278  ) ) {
    struct env863 envinst863 = {
        .s1930 =  s1930 ,
        .fun1932 =  fun1932 ,
    };
    ( (  for_dash_each862 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( ( (  s1930 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion864){ .fun = (  enum Unit_8  (*) (  struct env863*  ,    int32_t  ) )lam867 , .env =  envinst863 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_278   lam868 (    struct Cell_278  dref3505 ) {
    return ( (  default_dash_cell860 ) ( ) );
}

static  struct Screen_276   mk_dash_screen827 (    struct Tui_90 *  tui3499 ,    enum CAllocator_10  al3501 ) {
    struct Slice_277  cur3502 = ( (  allocate828 ) ( (  al3501 ) ,  ( (  u32_dash_size833 ) ( (  op_dash_mul167 ( ( ( * (  tui3499 ) ) .f_width ) , ( ( * (  tui3499 ) ) .f_height ) ) ) ) ) ) );
    ( (  map841 ) ( (  cur3502 ) ,  (  lam859 ) ) );
    struct Slice_277  prev3504 = ( (  allocate828 ) ( (  al3501 ) ,  ( (  u32_dash_size833 ) ( (  op_dash_mul167 ( ( ( * (  tui3499 ) ) .f_width ) , ( ( * (  tui3499 ) ) .f_height ) ) ) ) ) ) );
    ( (  map861 ) ( (  prev3504 ) ,  (  lam868 ) ) );
    return ( (struct Screen_276) { .f_current = (  cur3502 ) , .f_previous = (  prev3504 ) , .f_al = (  al3501 ) , .f_tui = (  tui3499 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) } );
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
            struct Key_270  field0;
        } InputEvent_874_Key_s;
        struct {
            struct MouseEvent_875  field0;
        } InputEvent_874_Mouse_s;
    } stuff;
};

static struct InputEvent_874 InputEvent_874_Key (  struct Key_270  field0 ) {
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
    struct Tui_90 *  tui4622;
    struct env88 envinst88;
};

struct envunion877 {
    struct Maybe_873  (*fun) (  struct env871*  );
    struct env871 env;
};

struct FunIter_870 {
    struct envunion877  f_fun;
    bool  f_finished;
};

static  struct FunIter_870   into_dash_iter878 (    struct FunIter_870  self1046 ) {
    return (  self1046 );
}

static  struct FunIter_870   from_dash_function879 (   struct envunion877  fun1054 ) {
    return ( (struct FunIter_870) { .f_fun = (  fun1054 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions884 (   struct env87* env ,    struct Tui_90 *  tui3465 ) {
    if ( ( ! ( * ( env->should_dash_resize3393 ) ) ) ) {
        return ( false );
    }
    (*  tui3465 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3393 ) = ( false );
    struct Tuple2_790  dim3466 = ( (  get_dash_dimensions791 ) ( ) );
    uint32_t  w3467 = ( (  fst824 ) ( (  dim3466 ) ) );
    uint32_t  h3468 = ( (  snd825 ) ( (  dim3466 ) ) );
    (*  tui3465 ) .f_width = (  w3467 );
    (*  tui3465 ) .f_height = (  h3468 );
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

static  struct Maybe_889   read_dash_byte890 (    int32_t  timeout_dash_ms3387 ) {
    struct Pollfd_891  pfd3388 = ( (struct Pollfd_891) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral803 ( 1 ) ) , .f_revents = (  from_dash_integral803 ( 0 ) ) } );
    if ( (  cmp157 ( ( ( poll ) ( ( (  cast_dash_ptr892 ) ( ( & (  pfd3388 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3387 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_889) { .tag = Maybe_889_None_t } );
    }
    char  c3389 = ( ( (  zeroed893 ) ( ) ) );
    if ( (  cmp157 ( ( ( read ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  cast_dash_ptr895 ) ( ( & (  c3389 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_889) { .tag = Maybe_889_None_t } );
    }
    return ( ( Maybe_889_Just ) ( (  c3389 ) ) );
}

static  char   u8_dash_ascii897 (    uint8_t  b780 ) {
    return ( ( (char ) (  b780 ) ) );
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

static  struct Map_904   into_dash_iter905 (    struct Map_904  self797 ) {
    return (  self797 );
}

static  struct Maybe_719   next906 (    struct Map_904 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next463 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_719_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce903 (    struct Map_904  iterable1111 ,    uint32_t  base1113 ,    uint32_t (*  fun1115 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1116 = (  base1113 );
    struct Map_904  it1117 = ( (  into_dash_iter905 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1118 = ( (  next906 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_719_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_719_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  struct Map_904   map909 (    struct StrView_27  iterable806 ,    uint32_t (*  fun808 )(    struct Char_65  ) ) {
    struct StrViewIter_458  it809 = ( (  into_dash_iter461 ) ( (  iterable806 ) ) );
    return ( ( Map_904_Map ) ( (  it809 ) ,  (  fun808 ) ) );
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

static  enum Unit_8   print_dash_str928 (    struct StrConcat_921  self1527 ) {
    struct StrConcat_921  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str927 (    struct StrConcat_920  self1527 ) {
    struct StrConcat_920  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str928 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str926 (    struct StrConcat_925  self1527 ) {
    struct StrConcat_925  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str927 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str923 (    struct StrConcat_924  self1527 ) {
    struct StrConcat_924  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str926 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic922 (    struct StrConcat_920  errmsg1731 ) {
    ( (  print_dash_str923 ) ( ( ( StrConcat_924_StrConcat ) ( ( ( StrConcat_925_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1731 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail919 (    struct Maybe_477  x1744 ,    struct StrConcat_920  errmsg1746 ) {
    struct Maybe_477  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_477_None_t ) {
        ( (  panic922 ) ( (  errmsg1746 ) ) );
        return ( (  undefined478 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_477_Just_t ) {
            return ( dref1747 .stuff .Maybe_477_Just_s .field0 );
        }
    }
}

static  enum Ordering_158   cmp930 (    struct Char_65  l745 ,    struct Char_65  r747 ) {
    if ( ( ( !  eq399 ( ( (  l745 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq399 ( ( (  r747 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp931 = ( (  from_dash_string57 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp931);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (  cmp307 ) ( ( (  char_dash_u8533 ) ( (  l745 ) ) ) ,  ( (  char_dash_u8533 ) ( (  r747 ) ) ) ) );
}

static  uint8_t   op_dash_sub932 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add933 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_477   hex_dash_digit929 (    struct Char_65  c2606 ) {
    if ( ( (  cmp930 ( (  c2606 ) , ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp930 ( (  c2606 ) , ( (  from_dash_charlike346 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_477_Just ) ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2606 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp930 ( (  c2606 ) , ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp930 ( (  c2606 ) , ( (  from_dash_charlike346 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_477_Just ) ( (  op_dash_add933 ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2606 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral308 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp930 ( (  c2606 ) , ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp930 ( (  c2606 ) , ( (  from_dash_charlike346 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_477_Just ) ( (  op_dash_add933 ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2606 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral308 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_477) { .tag = Maybe_477_None_t } );
}

static  uint32_t   lam910 (    struct Char_65  c2611 ) {
    return ( (  from_dash_integral165 ) ( ( (  u8_dash_i64911 ) ( ( (  or_dash_fail919 ) ( ( (  hex_dash_digit929 ) ( (  c2611 ) ) ) ,  ( ( StrConcat_920_StrConcat ) ( ( ( StrConcat_921_StrConcat ) ( ( (  from_dash_charlike346 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2611 ) ) ) ,  ( (  from_dash_string199 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam934 (    uint32_t  elem2613 ,    uint32_t  b2615 ) {
    return (  op_dash_add171 ( (  op_dash_mul167 ( (  b2615 ) , (  from_dash_integral165 ( 16 ) ) ) ) , (  elem2613 ) ) );
}

static  uint32_t   from_dash_hex902 (    struct StrView_27  arr2609 ) {
    return ( (  reduce903 ) ( ( (  map909 ) ( (  arr2609 ) ,  (  lam910 ) ) ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  lam934 ) ) );
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

static  char *   get_dash_ptr945 (    struct Array_937 *  arr2286 ,    size_t  i2289 ) {
    if ( ( (  cmp290 ( (  i2289 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2289 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2289 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2290 = ( ( (  cast_dash_ptr946 ) ( (  arr2286 ) ) ) );
    return ( (  offset_dash_ptr947 ) ( (  p2290 ) ,  ( (int64_t ) (  i2289 ) ) ) );
}

static  enum Unit_8   set944 (    struct Array_937 *  arr2299 ,    size_t  i2302 ,    char  e2304 ) {
    char *  p2305 = ( (  get_dash_ptr945 ) ( (  arr2299 ) ,  (  i2302 ) ) );
    (*  p2305 ) = (  e2304 );
    return ( Unit_8_Unit );
}

struct Slice_950 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail953 (    struct Maybe_889  x1744 ,    struct StrConcat_321  errmsg1746 ) {
    struct Maybe_889  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_889_None_t ) {
        ( (  panic323 ) ( (  errmsg1746 ) ) );
        return ( (  undefined887 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_889_Just_t ) {
            return ( dref1747 .stuff .Maybe_889_Just_s .field0 );
        }
    }
}

static  struct Maybe_889   try_dash_get954 (    struct Slice_950  slice1782 ,    size_t  i1784 ) {
    if ( ( (  cmp290 ( (  i1784 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_889) { .tag = Maybe_889_None_t } );
    }
    char *  elem_dash_ptr1785 = ( (  offset_dash_ptr947 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1784 ) ) ) ) );
    return ( ( Maybe_889_Just ) ( ( * (  elem_dash_ptr1785 ) ) ) );
}

static  char   get952 (    struct Slice_950  slice1788 ,    size_t  i1790 ) {
    return ( (  or_dash_fail953 ) ( ( (  try_dash_get954 ) ( (  slice1788 ) ,  (  i1790 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get951 (    struct Slice_950  self1801 ,    size_t  idx1803 ) {
    return ( (  get952 ) ( (  self1801 ) ,  (  idx1803 ) ) );
}

struct Scanner_955 {
    struct StrViewIter_458  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_955   mk_dash_from_dash_str957 (    struct StrView_27  s3234 ) {
    return ( (struct Scanner_955) { .f_s = ( (  chars460 ) ( (  s3234 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_961 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr300 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_27   substr958 (    struct StrView_27  s2200 ,    size_t  from2202 ,    size_t  to2204 ) {
    size_t  from_dash_bs2205 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_153  temp959 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  from2202 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond960 =  next156 (&temp959);
        if (  __cond960 .tag == 0 ) {
            break;
        }
        int32_t  dref2206 =  __cond960 .stuff .Maybe_155_Just_s .field0;
        if ( (  cmp290 ( (  from_dash_bs2205 ) , ( ( (  s2200 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2205 = (  op_dash_add311 ( (  from_dash_bs2205 ) , ( (  next_dash_char306 ) ( ( (  offset_dash_ptr_prime_961 ) ( ( ( (  s2200 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2205 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2207 = (  from_dash_bs2205 );
    struct RangeIter_153  temp962 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  to2204 ) ) ) , ( (  size_dash_i32329 ) ( (  from2202 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond963 =  next156 (&temp962);
        if (  __cond963 .tag == 0 ) {
            break;
        }
        int32_t  dref2208 =  __cond963 .stuff .Maybe_155_Just_s .field0;
        if ( (  cmp290 ( (  to_dash_bs2207 ) , ( ( (  s2200 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2207 = (  op_dash_add311 ( (  to_dash_bs2207 ) , ( (  next_dash_char306 ) ( ( (  offset_dash_ptr_prime_961 ) ( ( ( (  s2200 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2207 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice466 ) ( ( (  s2200 ) .f_contents ) ,  (  from_dash_bs2205 ) ,  (  to_dash_bs2207 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr966 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice965 (    struct Slice_950  s1957 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr966 ) ( ( (  s1957 ) .f_ptr ) ) ) , .f_count = ( (  s1957 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice964 (    struct Slice_950  sl2174 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice965 ) ( (  sl2174 ) ) ) } );
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

static  struct Scanner_955   into_dash_iter972 (    struct Scanner_955  self3225 ) {
    return (  self3225 );
}

static  struct Scanner_955   into_dash_iter971 (    struct Scanner_955 *  self786 ) {
    return ( (  into_dash_iter972 ) ( ( * (  self786 ) ) ) );
}

static  struct TakeWhile_969   take_dash_while970 (    struct Scanner_955 *  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_969) { .f_it = ( (  into_dash_iter971 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  bool   is_dash_digit973 (    struct Char_65  c2512 ) {
    return ( (  cmp307 ( ( (  char_dash_u8533 ) ( (  c2512 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp307 ( ( (  char_dash_u8533 ) ( (  c2512 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_297   next977 (    struct Scanner_955 *  self3220 ) {
    struct Maybe_297  dref3221 = ( (  next463 ) ( ( & ( ( * (  self3220 ) ) .f_s ) ) ) );
    if ( dref3221.tag == Maybe_297_Just_t ) {
        (*  self3220 ) .f_byte_dash_offset = (  op_dash_add311 ( ( ( * (  self3220 ) ) .f_byte_dash_offset ) , ( ( dref3221 .stuff .Maybe_297_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_297_Just ) ( ( dref3221 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref3221.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct Maybe_297   next976 (    struct TakeWhile_969 *  self982 ) {
    struct Maybe_297  mx983 = ( (  next977 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_297  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct TakeWhile_969   into_dash_iter979 (    struct TakeWhile_969  self979 ) {
    return (  self979 );
}

static  struct Maybe_297   head975 (    struct TakeWhile_969  it1160 ) {
    struct TakeWhile_969  temp978 = ( (  into_dash_iter979 ) ( (  it1160 ) ) );
    return ( (  next976 ) ( ( &temp978 ) ) );
}

static  bool   null974 (    struct TakeWhile_969  it1169 ) {
    struct Maybe_297  dref1170 = ( (  head975 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env982 {
    struct Scanner_955 *  it1204;
    ;
};

struct envunion983 {
    struct Maybe_297  (*fun) (  struct env982*  ,    int32_t  );
    struct env982 env;
};

static  enum Unit_8   for_dash_each981 (    struct Range_150  iterable1092 ,   struct envunion983  fun1094 ) {
    struct RangeIter_153  temp984 = ( (  into_dash_iter154 ) ( (  iterable1092 ) ) );
    struct RangeIter_153 *  it1095 = ( &temp984 );
    while ( ( true ) ) {
        struct Maybe_155  dref1096 = ( (  next156 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_155_Just_t ) {
                struct envunion983  temp985 = (  fun1094 );
                ( temp985.fun ( &temp985.env ,  ( dref1096 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_297   lam986 (   struct env982* env ,    int32_t  dref1207 ) {
    return ( (  next977 ) ( ( env->it1204 ) ) );
}

static  enum Unit_8   drop_prime_980 (    struct Scanner_955 *  it1204 ,    size_t  n1206 ) {
    struct env982 envinst982 = {
        .it1204 =  it1204 ,
    };
    ( (  for_dash_each981 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32329 ) ( (  n1206 ) ) ) ) ) ,  ( (struct envunion983){ .fun = (  struct Maybe_297  (*) (  struct env982*  ,    int32_t  ) )lam986 , .env =  envinst982 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce988 (    struct TakeWhile_969  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct TakeWhile_969  it1117 = ( (  into_dash_iter979 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1118 = ( (  next976 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_297_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_297_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  size_t   lam991 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add311 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count987 (    struct TakeWhile_969  it1122 ) {
    return ( (  reduce988 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam991 ) ) );
}

static  struct TakeWhile_969   chars993 (    struct TakeWhile_969  self1675 ) {
    return (  self1675 );
}

static  struct Maybe_967   reduce994 (    struct TakeWhile_969  iterable1111 ,    struct Maybe_967  base1113 ,    struct Maybe_967 (*  fun1115 )(    struct Char_65  ,    struct Maybe_967  ) ) {
    struct Maybe_967  x1116 = (  base1113 );
    struct TakeWhile_969  it1117 = ( (  into_dash_iter979 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1118 = ( (  next976 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_297_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_297_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  struct Maybe_155   parse_dash_digit998 (    struct Char_65  c2515 ) {
    if ( ( (  is_dash_digit973 ) ( (  c2515 ) ) ) ) {
        return ( ( Maybe_155_Just ) ( ( (  u8_dash_i32999 ) ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2515 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
}

static  int64_t   i32_dash_i641007 (    int32_t  x607 ) {
    return ( (int64_t ) (  x607 ) );
}

static  struct Maybe_967   sequence_dash_maybe997 (    struct Char_65  e2521 ,    struct Maybe_967  b2523 ) {
    struct Maybe_967  dref2524 = (  b2523 );
    if ( dref2524.tag == Maybe_967_None_t ) {
        return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
    }
    else {
        if ( dref2524.tag == Maybe_967_Just_t ) {
            struct Maybe_155  dref2526 = ( (  parse_dash_digit998 ) ( (  e2521 ) ) );
            if ( dref2526.tag == Maybe_155_None_t ) {
                return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
            }
            else {
                if ( dref2526.tag == Maybe_155_Just_t ) {
                    return ( ( Maybe_967_Just ) ( (  op_dash_add471 ( (  op_dash_mul286 ( ( dref2524 .stuff .Maybe_967_Just_s .field0 ) , (  from_dash_integral288 ( 10 ) ) ) ) , ( (  i32_dash_i641007 ) ( ( dref2526 .stuff .Maybe_155_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_967   parse_dash_int992 (    struct TakeWhile_969  s2518 ) {
    struct TakeWhile_969  cs2528 = ( (  chars993 ) ( (  s2518 ) ) );
    struct Maybe_297  dref2529 = ( (  head975 ) ( (  cs2528 ) ) );
    if ( dref2529.tag == Maybe_297_Just_t ) {
        return ( (  reduce994 ) ( (  cs2528 ) ,  ( ( Maybe_967_Just ) ( (  from_dash_integral288 ( 0 ) ) ) ) ,  (  sequence_dash_maybe997 ) ) );
    }
    else {
        if ( dref2529.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
        }
    }
}

static  struct Maybe_967   scan_dash_int968 (    struct Scanner_955 *  sc3237 ) {
    struct TakeWhile_969  digit_dash_chars3238 = ( (  take_dash_while970 ) ( (  sc3237 ) ,  (  is_dash_digit973 ) ) );
    if ( ( (  null974 ) ( (  digit_dash_chars3238 ) ) ) ) {
        return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
    }
    ( (  drop_prime_980 ) ( (  sc3237 ) ,  ( (  count987 ) ( (  digit_dash_chars3238 ) ) ) ) );
    return ( (  parse_dash_int992 ) ( (  digit_dash_chars3238 ) ) );
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

static  struct StrConcatIter_1016   into_dash_iter1023 (    struct StrConcatIter_1016  self1515 ) {
    return (  self1515 );
}

struct env1030 {
    ;
    int64_t  base1228;
};

struct envunion1031 {
    int64_t  (*fun) (  struct env1030*  ,    int32_t  ,    int64_t  );
    struct env1030 env;
};

static  int64_t   reduce1029 (    struct Range_150  iterable1111 ,    int64_t  base1113 ,   struct envunion1031  fun1115 ) {
    int64_t  x1116 = (  base1113 );
    struct RangeIter_153  it1117 = ( (  into_dash_iter154 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1118 = ( (  next156 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_155_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_155_Just_t ) {
                struct envunion1031  temp1032 = (  fun1115 );
                x1116 = ( temp1032.fun ( &temp1032.env ,  ( dref1118 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  int64_t   lam1035 (   struct env1030* env ,    int32_t  item1232 ,    int64_t  x1234 ) {
    return (  op_dash_mul286 ( (  x1234 ) , ( env->base1228 ) ) );
}

static  int64_t   pow1028 (    int64_t  base1228 ,    int32_t  p1230 ) {
    struct env1030 envinst1030 = {
        .base1228 =  base1228 ,
    };
    return ( (  reduce1029 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1230 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral288 ( 1 ) ) ,  ( (struct envunion1031){ .fun = (  int64_t  (*) (  struct env1030*  ,    int32_t  ,    int64_t  ) )lam1035 , .env =  envinst1030 } ) ) );
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

static  struct Char_65   from_dash_u81039 (    uint8_t  b773 ) {
    uint8_t *  ptr774 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1040 ) ( ( ( (  cast1045 ) ( ( (  u8_dash_size1041 ) ( (  b773 ) ) ) ) ) ) ,  (  from_dash_integral308 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr774 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_297   next1027 (    struct IntStrIter_1019 *  self1446 ) {
    if ( ( ( * (  self1446 ) ) .f_negative ) ) {
        (*  self1446 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    int64_t  trim_dash_down1447 = ( (  pow1028 ) ( (  from_dash_integral288 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1448 = (  op_dash_div1036 ( ( ( * (  self1446 ) ) .f_int ) , (  trim_dash_down1447 ) ) );
    int64_t  upper_dash_mask1449 = (  op_dash_mul286 ( (  op_dash_div1036 ( (  upper1448 ) , (  from_dash_integral288 ( 10 ) ) ) ) , (  from_dash_integral288 ( 10 ) ) ) );
    uint8_t  digit1450 = ( ( (  cast1037 ) ( (  op_dash_sub1038 ( (  upper1448 ) , (  upper_dash_mask1449 ) ) ) ) ) );
    (*  self1446 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1451 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1450 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1451 ) ) );
}

static  struct Maybe_297   next1026 (    struct StrConcatIter_1018 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1027 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1025 (    struct StrConcatIter_1017 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1026 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1047 (    enum EmptyIter_1021 *  dref793 ) {
    return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
}

static  struct Maybe_297   next1046 (    struct AppendIter_1020 *  self1040 ) {
    struct Maybe_297  dref1041 = ( (  next1047 ) ( ( & ( ( * (  self1040 ) ) .f_it ) ) ) );
    if ( dref1041.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1041 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1041.tag == Maybe_297_None_t ) {
            if ( ( ! ( ( * (  self1040 ) ) .f_appended ) ) ) {
                (*  self1040 ) .f_appended = ( true );
                return ( ( Maybe_297_Just ) ( ( ( * (  self1040 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct Maybe_297   next1024 (    struct StrConcatIter_1016 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next1025 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1015 (    struct StrConcatIter_1016  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrConcatIter_1016  temp1022 = ( (  into_dash_iter1023 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_1016 *  it1095 = ( &temp1022 );
    while ( ( true ) ) {
        struct Maybe_297  dref1096 = ( (  next1024 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_297_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_297_Just_s .field0 ) ) );
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

static  int32_t   count_dash_digits1058 (    int64_t  self1454 ) {
    if ( (  eq1059 ( (  self1454 ) , (  from_dash_integral288 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1455 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp1056 ( (  self1454 ) , (  from_dash_integral288 ( 0 ) ) ) == 2 ) ) {
        self1454 = (  op_dash_div1036 ( (  self1454 ) , (  from_dash_integral288 ( 10 ) ) ) );
        digits1455 = (  op_dash_add159 ( (  digits1455 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1455 );
}

static  struct IntStrIter_1019   int_dash_iter1055 (    int64_t  int1458 ) {
    if ( (  cmp1056 ( (  int1458 ) , (  from_dash_integral288 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1019) { .f_int = (  op_dash_neg1057 ( (  int1458 ) ) ) , .f_len = ( (  count_dash_digits1058 ) ( (  op_dash_neg1057 ( (  int1458 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1019) { .f_int = (  int1458 ) , .f_len = ( (  count_dash_digits1058 ) ( (  int1458 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1019   chars1054 (    int64_t  self1485 ) {
    return ( (  int_dash_iter1055 ) ( (  self1485 ) ) );
}

static  struct StrConcatIter_1018   into_dash_iter1053 (    struct StrConcat_1011  dref1522 ) {
    return ( (struct StrConcatIter_1018) { .f_left = ( (  chars460 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1054 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_1018   chars1052 (    struct StrConcat_1011  self1533 ) {
    return ( (  into_dash_iter1053 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_1017   into_dash_iter1051 (    struct StrConcat_1014  dref1522 ) {
    return ( (struct StrConcatIter_1017) { .f_left = ( (  chars460 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1052 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_1017   chars1050 (    struct StrConcat_1014  self1533 ) {
    return ( (  into_dash_iter1051 ) ( (  self1533 ) ) );
}

static  enum EmptyIter_1021   into_dash_iter1064 (    enum EmptyIter_1021  self791 ) {
    return (  self791 );
}

static  struct AppendIter_1020   append1063 (    enum EmptyIter_1021  it1024 ,    struct Char_65  e1026 ) {
    return ( (struct AppendIter_1020) { .f_it = ( (  into_dash_iter1064 ) ( (  it1024 ) ) ) , .f_elem = (  e1026 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_1020   cons1062 (    enum EmptyIter_1021  it1029 ,    struct Char_65  e1031 ) {
    return ( (  append1063 ) ( (  it1029 ) ,  (  e1031 ) ) );
}

static  enum EmptyIter_1021   nil1065 (  ) {
    return ( EmptyIter_1021_EmptyIter );
}

static  struct AppendIter_1020   single1061 (    struct Char_65  e1034 ) {
    return ( (  cons1062 ) ( ( (  nil1065 ) ( ) ) ,  (  e1034 ) ) );
}

static  struct AppendIter_1020   chars1060 (    struct Char_65  self1431 ) {
    return ( (  single1061 ) ( (  self1431 ) ) );
}

static  struct StrConcatIter_1016   into_dash_iter1049 (    struct StrConcat_1013  dref1522 ) {
    return ( (struct StrConcatIter_1016) { .f_left = ( (  chars1050 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_1016   chars1048 (    struct StrConcat_1013  self1533 ) {
    return ( (  into_dash_iter1049 ) ( (  self1533 ) ) );
}

static  enum Unit_8   print1012 (    struct StrConcat_1013  s1720 ) {
    ( (  for_dash_each1015 ) ( ( (  chars1048 ) ( (  s1720 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_876   undefined1066 (  ) {
    enum MouseButton_876  temp1067;
    return (  temp1067 );
}

static  enum MouseButton_876   panic_prime_1010 (    struct StrConcat_1011  errmsg1734 ) {
    ( (  print1012 ) ( ( ( StrConcat_1013_StrConcat ) ( ( ( StrConcat_1014_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1734 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1066 ) ( ) );
}

static  enum MouseButton_876   btn_dash_to_dash_mouse_dash_button1008 (    int64_t  btn3425 ) {
    return ( {  int32_t  dref3426 = ( (  i64_dash_i321009 ) ( (  btn3425 ) ) ) ;  dref3426 == 0 ? ( MouseButton_876_MouseLeft ) :  dref3426 == 1 ? ( MouseButton_876_MouseMiddle ) :  dref3426 == 2 ? ( MouseButton_876_MouseRight ) :  dref3426 == 64 ? ( MouseButton_876_ScrollUp ) :  dref3426 == 65 ? ( MouseButton_876_ScrollDown ) : ( (  panic_prime_1010 ) ( ( ( StrConcat_1011_StrConcat ) ( ( (  from_dash_string199 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3425 ) ) ) ) ) ; } );
}

static  struct Scanner_955   mk1069 (    struct StrView_27  s3228 ) {
    return ( (struct Scanner_955) { .f_s = ( (  into_dash_iter461 ) ( (  s3228 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_873   parse_dash_csi949 (    struct Slice_950  seq3432 ) {
    if ( (  eq399 ( ( (  seq3432 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    char  last3433 = (  elem_dash_get951 ( (  seq3432 ) , (  op_dash_sub289 ( ( (  seq3432 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq936 ( (  elem_dash_get951 ( (  seq3432 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike482 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq936 ( (  last3433 ) , ( (  from_dash_charlike482 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq936 ( (  last3433 ) , ( (  from_dash_charlike482 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_955  temp956 = ( (  mk_dash_from_dash_str957 ) ( ( (  substr958 ) ( ( (  from_dash_ascii_dash_slice964 ) ( (  seq3432 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3432 ) .f_count ) ) ) ) );
        struct Scanner_955 *  sc3434 = ( &temp956 );
        struct Maybe_967  dref3435 = ( (  scan_dash_int968 ) ( (  sc3434 ) ) );
        if ( dref3435.tag == Maybe_967_None_t ) {
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
        else {
            if ( dref3435.tag == Maybe_967_Just_t ) {
                ( (  next977 ) ( (  sc3434 ) ) );
                struct Maybe_967  dref3437 = ( (  scan_dash_int968 ) ( (  sc3434 ) ) );
                if ( dref3437.tag == Maybe_967_None_t ) {
                    return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
                }
                else {
                    if ( dref3437.tag == Maybe_967_Just_t ) {
                        ( (  next977 ) ( (  sc3434 ) ) );
                        struct Maybe_967  dref3439 = ( (  scan_dash_int968 ) ( (  sc3434 ) ) );
                        if ( dref3439.tag == Maybe_967_None_t ) {
                            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
                        }
                        else {
                            if ( dref3439.tag == Maybe_967_Just_t ) {
                                return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Mouse ) ( ( (struct MouseEvent_875) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1008 ) ( ( dref3435 .stuff .Maybe_967_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub164 ( ( (  i64_dash_i321009 ) ( ( dref3437 .stuff .Maybe_967_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub164 ( ( (  i64_dash_i321009 ) ( ( dref3439 .stuff .Maybe_967_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq936 ( (  last3433 ) , ( (  from_dash_charlike482 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq399 ( ( (  seq3432 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq936 ( (  last3433 ) , ( (  from_dash_charlike482 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Up_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3433 ) , ( (  from_dash_charlike482 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Down_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3433 ) , ( (  from_dash_charlike482 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Right_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3433 ) , ( (  from_dash_charlike482 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Left_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3433 ) , ( (  from_dash_charlike482 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Home_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3433 ) , ( (  from_dash_charlike482 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    if ( (  eq936 ( (  last3433 ) , ( (  from_dash_charlike482 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_955  temp1068 = ( (  mk1069 ) ( ( (  from_dash_ascii_dash_slice964 ) ( (  seq3432 ) ) ) ) );
        struct Scanner_955 *  sc3441 = ( &temp1068 );
        struct Maybe_967  dref3442 = ( (  scan_dash_int968 ) ( (  sc3441 ) ) );
        if ( dref3442.tag == Maybe_967_None_t ) {
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
        else {
            if ( dref3442.tag == Maybe_967_Just_t ) {
                return ( {  int32_t  dref3444 = ( (  i64_dash_i321009 ) ( ( dref3442 .stuff .Maybe_967_Just_s .field0 ) ) ) ;  dref3444 == 1 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Home_t } ) ) ) ) ) :  dref3444 == 2 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Insert_t } ) ) ) ) ) :  dref3444 == 3 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Delete_t } ) ) ) ) ) :  dref3444 == 4 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_End_t } ) ) ) ) ) :  dref3444 == 5 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_PageUp_t } ) ) ) ) ) :  dref3444 == 6 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_PageDown_t } ) ) ) ) ) :  dref3444 == 15 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_F5_t } ) ) ) ) ) :  dref3444 == 17 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_F6_t } ) ) ) ) ) :  dref3444 == 18 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_F7_t } ) ) ) ) ) :  dref3444 == 19 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_F8_t } ) ) ) ) ) :  dref3444 == 20 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_F9_t } ) ) ) ) ) :  dref3444 == 21 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_F10_t } ) ) ) ) ) :  dref3444 == 23 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_F11_t } ) ) ) ) ) :  dref3444 == 24 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_F12_t } ) ) ) ) ) : ( (struct Maybe_873) { .tag = Maybe_873_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
}

static  struct Slice_950   subslice1070 (    struct Slice_950  slice1806 ,    size_t  from1808 ,    size_t  to1810 ) {
    char *  begin_dash_ptr1811 = ( (  offset_dash_ptr947 ) ( ( (  slice1806 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1808 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1808 ) , (  to1810 ) ) != 0 ) || (  cmp290 ( (  from1808 ) , ( (  slice1806 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_950) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1812 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1810 ) ,  ( (  slice1806 ) .f_count ) ) ) , (  from1808 ) ) );
    return ( (struct Slice_950) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  count1812 ) } );
}

static  char *   cast1072 (    struct Array_937 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_950   as_dash_slice1071 (    struct Array_937 *  arr2308 ) {
    return ( (struct Slice_950) { .f_ptr = ( (  cast1072 ) ( (  arr2308 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1074 {
    enum {
        Maybe_1074_None_t,
        Maybe_1074_Just_t,
    } tag;
    union {
        struct {
            struct Key_270  field0;
        } Maybe_1074_Just_s;
    } stuff;
};

static struct Maybe_1074 Maybe_1074_Just (  struct Key_270  field0 ) {
    return ( struct Maybe_1074 ) { .tag = Maybe_1074_Just_t, .stuff = { .Maybe_1074_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1074   parse_dash_ss31075 (    char  c3429 ) {
    if ( (  eq936 ( (  c3429 ) , ( (  from_dash_charlike482 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_270) { .tag = Key_270_Up_t } ) ) );
    }
    if ( (  eq936 ( (  c3429 ) , ( (  from_dash_charlike482 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_270) { .tag = Key_270_Down_t } ) ) );
    }
    if ( (  eq936 ( (  c3429 ) , ( (  from_dash_charlike482 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_270) { .tag = Key_270_Right_t } ) ) );
    }
    if ( (  eq936 ( (  c3429 ) , ( (  from_dash_charlike482 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_270) { .tag = Key_270_Left_t } ) ) );
    }
    if ( (  eq936 ( (  c3429 ) , ( (  from_dash_charlike482 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_270) { .tag = Key_270_Home_t } ) ) );
    }
    if ( (  eq936 ( (  c3429 ) , ( (  from_dash_charlike482 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_270) { .tag = Key_270_End_t } ) ) );
    }
    if ( (  eq936 ( (  c3429 ) , ( (  from_dash_charlike482 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_270) { .tag = Key_270_F1_t } ) ) );
    }
    if ( (  eq936 ( (  c3429 ) , ( (  from_dash_charlike482 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_270) { .tag = Key_270_F2_t } ) ) );
    }
    if ( (  eq936 ( (  c3429 ) , ( (  from_dash_charlike482 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_270) { .tag = Key_270_F3_t } ) ) );
    }
    if ( (  eq936 ( (  c3429 ) , ( (  from_dash_charlike482 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_270) { .tag = Key_270_F4_t } ) ) );
    }
    return ( (struct Maybe_1074) { .tag = Maybe_1074_None_t } );
}

static  struct Maybe_873   read_dash_key885 (  ) {
    char  temp886 = ( (  undefined887 ) ( ) );
    char *  ch3446 = ( &temp886 );
    struct Maybe_889  dref3447 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3447.tag == Maybe_889_None_t ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    else {
        if ( dref3447.tag == Maybe_889_Just_t ) {
            (*  ch3446 ) = ( dref3447 .stuff .Maybe_889_Just_s .field0 );
        }
    }
    if ( (  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3446 ) ) ) ) , (  from_dash_integral308 ( 13 ) ) ) ) ) {
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Enter_t } ) ) ) ) );
    }
    if ( (  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3446 ) ) ) ) , (  from_dash_integral308 ( 127 ) ) ) ) ) {
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3446 ) ) ) ) , (  from_dash_integral308 ( 27 ) ) ) == 0 ) && ( !  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3446 ) ) ) ) , (  from_dash_integral308 ( 9 ) ) ) ) ) ) {
        char  letter3449 = ( (  u8_dash_ascii897 ) ( ( (  u32_dash_u8144 ) ( ( (  u32_dash_or728 ) ( ( (  u8_dash_u32898 ) ( ( (  ascii_dash_u8481 ) ( ( * (  ch3446 ) ) ) ) ) ) ,  ( (  from_dash_hex902 ) ( ( (  from_dash_string199 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( ( Key_270_Ctrl ) ( (  letter3449 ) ) ) ) ) ) );
    }
    if ( ( !  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3446 ) ) ) ) , (  from_dash_integral308 ( 27 ) ) ) ) ) {
        if ( (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3446 ) ) ) ) , (  from_dash_integral308 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key885 ) ( ) );
        } else {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( ( Key_270_Char ) ( ( * (  ch3446 ) ) ) ) ) ) ) );
        }
    }
    char  temp935 = ( (  undefined887 ) ( ) );
    char *  ch23450 = ( &temp935 );
    struct Maybe_889  dref3451 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3451.tag == Maybe_889_None_t ) {
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3451.tag == Maybe_889_Just_t ) {
            (*  ch23450 ) = ( dref3451 .stuff .Maybe_889_Just_s .field0 );
        }
    }
    if ( (  eq936 ( ( * (  ch23450 ) ) , ( (  from_dash_charlike482 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_937  temp938 = ( ( (  zeroed939 ) ( ) ) );
        struct Array_937 *  seq3453 = ( &temp938 );
        int32_t  slen3454 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp157 ( (  slen3454 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp943 = ( (  undefined887 ) ( ) );
            char *  sc3455 = ( &temp943 );
            struct Maybe_889  dref3456 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3456.tag == Maybe_889_None_t ) {
                break;
            }
            else {
                if ( dref3456.tag == Maybe_889_Just_t ) {
                    (*  sc3455 ) = ( dref3456 .stuff .Maybe_889_Just_s .field0 );
                }
            }
            ( (  set944 ) ( (  seq3453 ) ,  ( (  i32_dash_size412 ) ( (  slen3454 ) ) ) ,  ( * (  sc3455 ) ) ) );
            slen3454 = (  op_dash_add159 ( (  slen3454 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  sc3455 ) ) ) ) , (  from_dash_integral308 ( 64 ) ) ) != 0 ) && (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  sc3455 ) ) ) ) , (  from_dash_integral308 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi949 ) ( ( (  subslice1070 ) ( ( (  as_dash_slice1071 ) ( (  seq3453 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( (  slen3454 ) ) ) ) ) ) );
    }
    if ( (  eq936 ( ( * (  ch23450 ) ) , ( (  from_dash_charlike482 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1073 = ( (  undefined887 ) ( ) );
        char *  sc3458 = ( &temp1073 );
        struct Maybe_889  dref3459 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3459.tag == Maybe_889_None_t ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3459.tag == Maybe_889_Just_t ) {
                (*  sc3458 ) = ( dref3459 .stuff .Maybe_889_Just_s .field0 );
            }
        }
        struct Maybe_1074  dref3461 = ( (  parse_dash_ss31075 ) ( ( * (  sc3458 ) ) ) );
        if ( dref3461.tag == Maybe_1074_None_t ) {
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
        else {
            if ( dref3461.tag == Maybe_1074_Just_t ) {
                return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( dref3461 .stuff .Maybe_1074_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_270) { .tag = Key_270_Escape_t } ) ) ) ) );
}

static  struct Maybe_873   read_dash_event882 (   struct env88* env ,    struct Tui_90 *  tui3471 ) {
    struct envunion89  temp883 = ( (struct envunion89){ .fun = (  bool  (*) (  struct env87*  ,    struct Tui_90 *  ) )update_dash_dimensions884 , .env =  env->envinst87 } );
    ( temp883.fun ( &temp883.env ,  (  tui3471 ) ) );
    struct Maybe_873  dref3472 = ( (  read_dash_key885 ) ( ) );
    if ( dref3472.tag == Maybe_873_None_t ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    else {
        if ( dref3472.tag == Maybe_873_Just_t ) {
            (*  tui3471 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_873_Just ) ( ( dref3472 .stuff .Maybe_873_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_873   lam880 (   struct env871* env ) {
    struct envunion872  temp881 = ( (struct envunion872){ .fun = (  struct Maybe_873  (*) (  struct env88*  ,    struct Tui_90 *  ) )read_dash_event882 , .env =  env->envinst88 } );
    return ( temp881.fun ( &temp881.env ,  ( env->tui4622 ) ) );
}

static  struct Maybe_873   next1077 (    struct FunIter_870 *  self1049 ) {
    if ( ( ( * (  self1049 ) ) .f_finished ) ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    struct envunion877  temp1078 = ( ( * (  self1049 ) ) .f_fun );
    struct Maybe_873  dref1050 = ( temp1078.fun ( &temp1078.env ) );
    if ( dref1050.tag == Maybe_873_Just_t ) {
        return ( ( Maybe_873_Just ) ( ( dref1050 .stuff .Maybe_873_Just_s .field0 ) ) );
    }
    else {
        if ( dref1050.tag == Maybe_873_None_t ) {
            (*  self1049 ) .f_finished = ( true );
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
    }
}

struct env1081 {
    struct Editor_248 *  ed4472;
    ;
};

struct envunion1082 {
    enum Unit_8  (*fun) (  struct env1081*  ,    struct StrView_27  );
    struct env1081 env;
};

static  enum Unit_8   if_dash_just1080 (    struct Maybe_80  x1309 ,   struct envunion1082  fun1311 ) {
    struct Maybe_80  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_80_Just_t ) {
        struct envunion1082  temp1083 = (  fun1311 );
        ( temp1083.fun ( &temp1083.env ,  ( dref1312 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1084 (   struct env1081* env ,    struct StrView_27  msg4474 ) {
    ( (  free547 ) ( (  msg4474 ) ,  ( ( * ( env->ed4472 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1079 (    struct Editor_248 *  ed4472 ) {
    struct env1081 envinst1081 = {
        .ed4472 =  ed4472 ,
    };
    ( (  if_dash_just1080 ) ( ( ( * (  ed4472 ) ) .f_msg ) ,  ( (struct envunion1082){ .fun = (  enum Unit_8  (*) (  struct env1081*  ,    struct StrView_27  ) )lam1084 , .env =  envinst1081 } ) ) );
    (*  ed4472 ) .f_msg = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1086 {
    enum Unit_8  (*fun) (  struct env264*  ,    struct Editor_248 *  ,    struct Key_270  );
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

static  bool   eq1093 (    enum CursorMovement_1092  l4213 ,    enum CursorMovement_1092  r4215 ) {
    return ( {  struct Tuple2_1094  dref4216 = ( ( Tuple2_1094_Tuple2 ) ( (  l4213 ) ,  (  r4215 ) ) ) ;  dref4216 .field0 == CursorMovement_1092_NoChanges &&  dref4216 .field1 == CursorMovement_1092_NoChanges ? ( true ) :  dref4216 .field0 == CursorMovement_1092_UpdateVI &&  dref4216 .field1 == CursorMovement_1092_UpdateVI ? ( true ) :  dref4216 .field0 == CursorMovement_1092_OverrideSelect &&  dref4216 .field1 == CursorMovement_1092_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_27   from_dash_bytes1098 (    struct Slice_11  sl2177 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2177 ) } );
}

static  struct StrView_27   line1097 (    struct TextBuf_104 *  self3760 ,    int32_t  li3762 ) {
    return ( (  from_dash_bytes1098 ) ( ( (  to_dash_slice565 ) ( ( ( (  get563 ) ( ( & ( ( * (  self3760 ) ) .f_buf ) ) ,  ( (  i32_dash_size412 ) ( (  li3762 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe1101 (    struct Maybe_80  x1300 ,    int32_t (*  fun1302 )(    struct StrView_27  ) ,    int32_t  default1304 ) {
    return ( {  struct Maybe_80  dref1305 = (  x1300 ) ; dref1305.tag == Maybe_80_Just_t ? ( (  fun1302 ) ( ( dref1305 .stuff .Maybe_80_Just_s .field0 ) ) ) : (  default1304 ) ; } );
}

static  struct Maybe_80   char_dash_replacement1102 (    struct Char_65  c4093 ) {
    if ( (  eq469 ( (  c4093 ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_80_Just ) ( ( (  from_dash_string199 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
}

static  size_t   reduce1105 (    struct StrViewIter_458  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct StrViewIter_458  it1117 = ( (  into_dash_iter459 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1118 = ( (  next463 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_297_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_297_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  size_t   lam1108 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add311 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1104 (    struct StrViewIter_458  it1122 ) {
    return ( (  reduce1105 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1108 ) ) );
}

static  int32_t   lam1103 (    struct StrView_27  s4098 ) {
    return ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars460 ) ( (  s4098 ) ) ) ) ) ) );
}

static  int32_t   max1110 (    int32_t  l1333 ,    int32_t  r1335 ) {
    if ( (  cmp157 ( (  l1333 ) , (  r1335 ) ) == 2 ) ) {
        return (  l1333 );
    } else {
        return (  r1335 );
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

static  wchar_t   to_dash_c_dash_wchar1112 (    struct Char_65  c751 ) {
    struct CharDestructured_337  dref752 = ( (  destructure339 ) ( (  c751 ) ) );
    if ( dref752.tag == CharDestructured_337_Ref_t ) {
        wchar_t  temp1113 = ( (  zeroed1114 ) ( ) );
        wchar_t *  wcp754 = ( &temp1113 );
        size_t  num_dash_chars755 = ( ( mbstowcs ) ( (  wcp754 ) ,  ( (  cast_dash_ptr1118 ) ( ( ( dref752 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq399 ( (  num_dash_chars755 ) , ( ( (  cast1119 ) ( ( (  op_dash_neg1057 ( (  from_dash_integral288 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1120 = ( (  from_dash_string57 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1120);
            exit ( 1 );
            ( Unit_8_Unit );
        }
        return ( * (  wcp754 ) );
    }
    else {
        if ( dref752.tag == CharDestructured_337_Scalar_t ) {
            if ( ( ! (  eq399 ( ( (  size_dash_of810 ) ( ( ( dref752 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1121 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1124 = ( (  from_dash_string57 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1124);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( (  cast1125 ) ( ( ( dref752 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1111 (    struct Char_65  c2633 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1112 ) ( (  c2633 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1109 (    struct Char_65  c3516 ) {
    return ( (  max1110 ) ( ( (  wcwidth1111 ) ( (  c3516 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width1100 (    struct Char_65  c4096 ) {
    return ( (  maybe1101 ) ( ( (  char_dash_replacement1102 ) ( (  c4096 ) ) ) ,  (  lam1103 ) ,  ( (  rendered_dash_wcwidth1109 ) ( (  c4096 ) ) ) ) );
}

static  int32_t   pos_dash_vi1095 (    struct TextBuf_104 *  self4112 ,    struct Pos_26  pos4114 ) {
    int32_t  bi4115 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4116 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_458  temp1096 =  into_dash_iter459 ( ( (  chars460 ) ( ( (  line1097 ) ( (  self4112 ) ,  ( (  pos4114 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_297  __cond1099 =  next463 (&temp1096);
        if (  __cond1099 .tag == 0 ) {
            break;
        }
        struct Char_65  c4118 =  __cond1099 .stuff .Maybe_297_Just_s .field0;
        bi4115 = (  op_dash_add159 ( (  bi4115 ) , ( (  size_dash_i32329 ) ( ( (  c4118 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp157 ( ( (  pos4114 ) .f_bi ) , (  bi4115 ) ) == 0 ) ) {
            break;
        }
        vi4116 = (  op_dash_add159 ( (  vi4116 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4118 ) ) ) ) );
    }
    return (  vi4116 );
}

struct Tuple2_1128 {
    enum Mode_220  field0;
    enum Mode_220  field1;
};

static struct Tuple2_1128 Tuple2_1128_Tuple2 (  enum Mode_220  field0 ,  enum Mode_220  field1 ) {
    return ( struct Tuple2_1128 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1127 (    enum Mode_220  l4072 ,    enum Mode_220  r4074 ) {
    return ( {  struct Tuple2_1128  dref4075 = ( ( Tuple2_1128_Tuple2 ) ( (  l4072 ) ,  (  r4074 ) ) ) ;  dref4075 .field0 == Mode_220_Normal &&  dref4075 .field1 == Mode_220_Normal ? ( true ) :  dref4075 .field0 == Mode_220_Insert &&  dref4075 .field1 == Mode_220_Insert ? ( true ) :  dref4075 .field0 == Mode_220_Select &&  dref4075 .field1 == Mode_220_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1126 (    struct Pane_219 *  self4202 ,    struct Maybe_34  sel4204 ) {
    if ( ( !  eq1127 ( ( ( * (  self4202 ) ) .f_mode ) , ( Mode_220_Select ) ) ) ) {
        (*  self4202 ) .f_sel = (  sel4204 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors1091 (    struct Pane_219 *  self4219 ,    struct Pos_26  cur4221 ,    struct Maybe_34  sel4223 ,    enum CursorMovement_1092  cursor_dash_movement_dash_type4225 ) {
    if ( ( !  eq1093 ( (  cursor_dash_movement_dash_type4225 ) , ( CursorMovement_1092_NoChanges ) ) ) ) {
        (*  self4219 ) .f_vi = ( (  pos_dash_vi1095 ) ( ( ( * (  self4219 ) ) .f_buf ) ,  (  cur4221 ) ) );
    }
    (*  self4219 ) .f_cursor = (  cur4221 );
    if ( ( !  eq1093 ( (  cursor_dash_movement_dash_type4225 ) , ( CursorMovement_1092_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1126 ) ( (  self4219 ) ,  (  sel4223 ) ) );
    } else {
        (*  self4219 ) .f_sel = (  sel4223 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1130 (    struct StrView_27  self2223 ) {
    return ( ( (  self2223 ) .f_contents ) .f_count );
}

static  size_t   clamp1131 (    size_t  x1370 ,    size_t  mn1372 ,    size_t  mx1374 ) {
    if ( (  cmp290 ( (  x1370 ) , (  mn1372 ) ) == 0 ) ) {
        return (  mn1372 );
    } else {
        if ( (  cmp290 ( (  x1370 ) , (  mx1374 ) ) == 2 ) ) {
            return (  mx1374 );
        } else {
            return (  x1370 );
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

static  struct Pos_26   left_dash_pos1129 (    struct TextBuf_104 *  self3781 ,    struct Pos_26  pos3783 ) {
    if ( (  eq557 ( (  pos3783 ) , ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq558 ( ( (  pos3783 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert667 ) ( (  cmp157 ( ( (  pos3783 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string199 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk694 ) ( (  op_dash_sub164 ( ( (  pos3783 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( (  self3781 ) ,  (  op_dash_sub164 ( ( (  pos3783 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line3784 = ( (  line1097 ) ( (  self3781 ) ,  ( (  pos3783 ) .f_line ) ) );
    size_t  pos_dash_bi3785 = ( (  clamp1131 ) ( ( (  i32_dash_size412 ) ( ( (  pos3783 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1130 ) ( (  line3784 ) ) ) ) );
    size_t  off3786 = ( (  previous_dash_char1132 ) ( ( (  offset_dash_ptr300 ) ( ( ( (  line3784 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  pos_dash_bi3785 ) ) ) ) ) ) );
    return ( (  mk694 ) ( ( (  pos3783 ) .f_line ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( (  pos_dash_bi3785 ) , (  off3786 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1090 (    struct Pane_219 *  self4231 ) {
    ( (  set_dash_cursors1091 ) ( (  self4231 ) ,  ( (  left_dash_pos1129 ) ( ( ( * (  self4231 ) ) .f_buf ) ,  ( ( * (  self4231 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_219 *   pane1134 (    struct Editor_248 *  ed4462 ) {
    return ( & ( ( * (  ed4462 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1137 (    struct TextBuf_104 *  self3765 ) {
    return ( (  size_dash_i32329 ) ( ( (  size559 ) ( ( & ( ( * (  self3765 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1136 (    struct TextBuf_104 *  self3773 ,    struct Pos_26  pos3775 ) {
    if ( (  cmp157 ( ( (  pos3775 ) .f_line ) , ( (  num_dash_lines1137 ) ( (  self3773 ) ) ) ) != 0 ) ) {
        return ( (  mk694 ) ( ( (  num_dash_lines1137 ) ( (  self3773 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_27  line3776 = ( (  line1097 ) ( (  self3773 ) ,  ( (  pos3775 ) .f_line ) ) );
    int64_t  bi3777 = ( (  i32_dash_i641007 ) ( ( (  pos3775 ) .f_bi ) ) );
    if ( (  cmp1056 ( (  bi3777 ) , ( (  size_dash_i64302 ) ( ( (  num_dash_bytes1130 ) ( (  line3776 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp157 ( (  op_dash_add159 ( ( (  pos3775 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1137 ) ( (  self3773 ) ) ) ) != 0 ) ) {
            return ( (  mk694 ) ( ( (  pos3775 ) .f_line ) ,  ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line3776 ) ) ) ) ) ) );
        }
        return ( (  mk694 ) ( (  op_dash_add159 ( ( (  pos3775 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off3778 = ( (  size_dash_i32329 ) ( ( (  next_dash_char306 ) ( ( (  offset_dash_ptr300 ) ( ( ( (  line3776 ) .f_contents ) .f_ptr ) ,  (  bi3777 ) ) ) ) ) ) );
    return ( (  mk694 ) ( ( (  pos3775 ) .f_line ) ,  (  op_dash_add159 ( ( (  pos3775 ) .f_bi ) , (  off3778 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1135 (    struct Pane_219 *  self4228 ) {
    ( (  set_dash_cursors1091 ) ( (  self4228 ) ,  ( (  right_dash_pos1136 ) ( ( ( * (  self4228 ) ) .f_buf ) ,  ( ( * (  self4228 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1139 (    struct TextBuf_104 *  self4101 ,    int32_t  ln4103 ,    int32_t  vx4105 ) {
    int32_t  bi4106 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4107 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_458  temp1140 =  into_dash_iter459 ( ( (  chars460 ) ( ( (  line1097 ) ( (  self4101 ) ,  (  ln4103 ) ) ) ) ) );
    while (true) {
        struct Maybe_297  __cond1141 =  next463 (&temp1140);
        if (  __cond1141 .tag == 0 ) {
            break;
        }
        struct Char_65  c4109 =  __cond1141 .stuff .Maybe_297_Just_s .field0;
        vi4107 = (  op_dash_add159 ( (  vi4107 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4109 ) ) ) ) );
        if ( (  cmp157 ( (  vx4105 ) , (  vi4107 ) ) == 0 ) ) {
            break;
        }
        bi4106 = (  op_dash_add159 ( (  bi4106 ) , ( (  size_dash_i32329 ) ( ( (  c4109 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4106 );
}

static  enum Unit_8   move_dash_down1138 (    struct Pane_219 *  self4234 ,    int32_t  amnt4236 ) {
    struct Pos_26  cur4237 = ( ( * (  self4234 ) ) .f_cursor );
    int32_t  nu_dash_line4238 = ( (  min658 ) ( (  op_dash_add159 ( ( (  cur4237 ) .f_line ) , (  amnt4236 ) ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1137 ) ( ( ( * (  self4234 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4239 = ( ( * (  self4234 ) ) .f_vi );
    int32_t  bi4240 = ( (  vi_dash_bi1139 ) ( ( ( * (  self4234 ) ) .f_buf ) ,  (  nu_dash_line4238 ) ,  (  vci4239 ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4234 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4238 ) , .f_bi = (  bi4240 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1142 (    struct Pane_219 *  self4243 ,    int32_t  amnt4245 ) {
    struct Pos_26  cur4246 = ( ( * (  self4243 ) ) .f_cursor );
    int32_t  nu_dash_line4247 = ( (  max1110 ) ( (  op_dash_sub164 ( ( (  cur4246 ) .f_line ) , (  amnt4245 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4248 = ( ( * (  self4243 ) ) .f_vi );
    int32_t  bi4249 = ( (  vi_dash_bi1139 ) ( ( ( * (  self4243 ) ) .f_buf ) ,  (  nu_dash_line4247 ) ,  (  vci4248 ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4243 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4247 ) , .f_bi = (  bi4249 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1144 (    struct TextBuf_104 *  self3874 ) {
    (*  self3874 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_106_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1143 (    struct Pane_219 *  self4207 ,    enum Mode_220  mode4209 ) {
    if ( (  eq1127 ( (  mode4209 ) , ( Mode_220_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1144 ) ( ( ( * (  self4207 ) ) .f_buf ) ) );
    }
    (*  self4207 ) .f_mode = (  mode4209 );
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

static  struct Map_1148   into_dash_iter1151 (    struct Map_1148  self797 ) {
    return (  self797 );
}

static  struct Maybe_297   next1153 (    struct TakeWhile_1149 *  self982 ) {
    struct Maybe_297  mx983 = ( (  next463 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_297  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1152 (    struct Map_1148 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1153 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1150 (    struct Map_1148  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    size_t  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct Map_1148  it1117 = ( (  into_dash_iter1151 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1118 = ( (  next1152 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_246_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_246_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  size_t   lam1156 (    size_t  v1130 ,    size_t  s1132 ) {
    return (  op_dash_add311 ( (  v1130 ) , (  s1132 ) ) );
}

static  size_t   sum1147 (    struct Map_1148  it1128 ) {
    return ( (  reduce1150 ) ( (  it1128 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1156 ) ) );
}

static  struct TakeWhile_1149   into_dash_iter1158 (    struct TakeWhile_1149  self979 ) {
    return (  self979 );
}

static  struct Map_1148   map1157 (    struct TakeWhile_1149  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1149  it809 = ( (  into_dash_iter1158 ) ( (  iterable806 ) ) );
    return ( ( Map_1148_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1149   take_dash_while1159 (    struct StrView_27  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1149) { .f_it = ( (  into_dash_iter461 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  bool   lam1160 (    struct Char_65  c4297 ) {
    return (  eq469 ( (  c4297 ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1161 (    struct Char_65  c4299 ) {
    return ( (  c4299 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1146 (    struct Pane_219 *  pane4293 ,    int32_t  line4295 ) {
    return ( (  size_dash_i32329 ) ( ( (  sum1147 ) ( ( (  map1157 ) ( ( (  take_dash_while1159 ) ( ( (  line1097 ) ( ( ( * (  pane4293 ) ) .f_buf ) ,  (  line4295 ) ) ) ,  (  lam1160 ) ) ) ,  (  lam1161 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1145 (    struct Pane_219 *  self4312 ) {
    struct Pos_26  cur4313 = ( ( * (  self4312 ) ) .f_cursor );
    int32_t  indent4314 = ( (  indent_dash_at_dash_line1146 ) ( (  self4312 ) ,  ( (  cur4313 ) .f_line ) ) );
    struct Pos_26  temp1162 = (  cur4313 );
    temp1162 .  f_bi = (  indent4314 );
    ( (  set_dash_cursors1091 ) ( (  self4312 ) ,  ( temp1162 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1163 (    struct Pane_219 *  self4317 ) {
    struct Pos_26  cur4318 = ( ( * (  self4317 ) ) .f_cursor );
    struct Pos_26  temp1164 = (  cur4318 );
    temp1164 .  f_bi = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  self4317 ) ) .f_buf ) ,  ( (  cur4318 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4317 ) ,  ( temp1164 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
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

static  struct Drop_1171   into_dash_iter1173 (    struct Drop_1171  self846 ) {
    return (  self846 );
}

static  struct SliceIter_1172   into_dash_iter1176 (    struct Slice_31  self1852 ) {
    return ( (struct SliceIter_1172) { .f_slice = (  self1852 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1178 (    struct Changeset_32 *  x338 ,    int64_t  count340 ) {
    struct Changeset_32  temp1179;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1179 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1177 (    struct Slice_31  slice1806 ,    size_t  from1808 ,    size_t  to1810 ) {
    struct Changeset_32 *  begin_dash_ptr1811 = ( (  offset_dash_ptr1178 ) ( ( (  slice1806 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1808 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1808 ) , (  to1810 ) ) != 0 ) || (  cmp290 ( (  from1808 ) , ( (  slice1806 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1812 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1810 ) ,  ( (  slice1806 ) .f_count ) ) ) , (  from1808 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  count1812 ) } );
}

static  struct SliceIter_1172   into_dash_iter1175 (    struct List_30  self2053 ) {
    return ( (  into_dash_iter1176 ) ( ( (  subslice1177 ) ( ( (  self2053 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2053 ) .f_count ) ) ) ) );
}

static  struct Drop_1171   drop1174 (    struct List_30  iterable853 ,    size_t  i855 ) {
    struct SliceIter_1172  it856 = ( (  into_dash_iter1175 ) ( (  iterable853 ) ) );
    return ( ( Drop_1171_Drop ) ( (  it856 ) ,  (  i855 ) ) );
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

static  struct Maybe_1181   next1183 (    struct SliceIter_1172 *  self1858 ) {
    size_t  off1859 = ( ( * (  self1858 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1858 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1181) { .tag = Maybe_1181_None_t } );
    }
    struct Changeset_32  elem1860 = ( * ( (  offset_dash_ptr1178 ) ( ( ( ( * (  self1858 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1859 ) ) ) ) ) );
    (*  self1858 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1181_Just ) ( (  elem1860 ) ) );
}

static  struct Maybe_1181   next1182 (    struct Drop_1171 *  dref848 ) {
    while ( (  cmp290 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1183 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub289 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1183 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

struct env1186 {
    ;
    enum CAllocator_10  al3713;
};

struct envunion1187 {
    enum Unit_8  (*fun) (  struct env1186*  ,    struct Action_25  );
    struct env1186 env;
};

struct SliceIter_1188 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1188   into_dash_iter1191 (    struct Slice_24  self1852 ) {
    return ( (struct SliceIter_1188) { .f_slice = (  self1852 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1193 (    struct Action_25 *  x338 ,    int64_t  count340 ) {
    struct Action_25  temp1194;
    return ( (struct Action_25 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1194 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1192 (    struct Slice_24  slice1806 ,    size_t  from1808 ,    size_t  to1810 ) {
    struct Action_25 *  begin_dash_ptr1811 = ( (  offset_dash_ptr1193 ) ( ( (  slice1806 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1808 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1808 ) , (  to1810 ) ) != 0 ) || (  cmp290 ( (  from1808 ) , ( (  slice1806 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1812 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1810 ) ,  ( (  slice1806 ) .f_count ) ) ) , (  from1808 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  count1812 ) } );
}

static  struct SliceIter_1188   into_dash_iter1190 (    struct List_23  self2053 ) {
    return ( (  into_dash_iter1191 ) ( ( (  subslice1192 ) ( ( (  self2053 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2053 ) .f_count ) ) ) ) );
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

static  struct Maybe_1195   next1196 (    struct SliceIter_1188 *  self1858 ) {
    size_t  off1859 = ( ( * (  self1858 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1858 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
    }
    struct Action_25  elem1860 = ( * ( (  offset_dash_ptr1193 ) ( ( ( ( * (  self1858 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1859 ) ) ) ) ) );
    (*  self1858 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1195_Just ) ( (  elem1860 ) ) );
}

static  enum Unit_8   for_dash_each1185 (    struct List_23  iterable1092 ,   struct envunion1187  fun1094 ) {
    struct SliceIter_1188  temp1189 = ( (  into_dash_iter1190 ) ( (  iterable1092 ) ) );
    struct SliceIter_1188 *  it1095 = ( &temp1189 );
    while ( ( true ) ) {
        struct Maybe_1195  dref1096 = ( (  next1196 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_1195_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_1195_Just_t ) {
                struct envunion1187  temp1197 = (  fun1094 );
                ( temp1197.fun ( &temp1197.env ,  ( dref1096 .stuff .Maybe_1195_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1199 (    struct Action_25  action3706 ,    enum CAllocator_10  al3708 ) {
    ( (  free547 ) ( ( (  action3706 ) .f_fwd ) ,  (  al3708 ) ) );
    ( (  free547 ) ( ( (  action3706 ) .f_bwd ) ,  (  al3708 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1198 (   struct env1186* env ,    struct Action_25  a3715 ) {
    return ( (  free_dash_action1199 ) ( (  a3715 ) ,  ( env->al3713 ) ) );
}

static  void *   cast_dash_ptr1202 (    struct Action_25 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1201 (    enum CAllocator_10  dref1984 ,    struct Slice_24  slice1986 ) {
    if (!(  dref1984 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1202 ) ( ( (  slice1986 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1200 (    struct List_23 *  list2060 ) {
    ( (  free1201 ) ( ( ( * (  list2060 ) ) .f_al ) ,  ( ( * (  list2060 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1184 (    struct Changeset_32  chs3711 ,    enum CAllocator_10  al3713 ) {
    struct env1186 envinst1186 = {
        .al3713 =  al3713 ,
    };
    ( (  for_dash_each1185 ) ( ( (  chs3711 ) .f_parts ) ,  ( (struct envunion1187){ .fun = (  enum Unit_8  (*) (  struct env1186*  ,    struct Action_25  ) )lam1198 , .env =  envinst1186 } ) ) );
    ( (  free1200 ) ( ( & ( (  chs3711 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1203 (    struct List_30 *  l2140 ,    size_t  new_dash_count2142 ) {
    (*  l2140 ) .f_count = ( (  min467 ) ( (  new_dash_count2142 ) ,  ( ( * (  l2140 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1169 (    struct Actions_105 *  actions3729 ) {
    enum CAllocator_10  al3730 = ( ( ( * (  actions3729 ) ) .f_list ) .f_al );
    size_t  cur3731 = ( ( * (  actions3729 ) ) .f_cur );
    struct Drop_1171  temp1170 =  into_dash_iter1173 ( ( (  drop1174 ) ( ( ( * (  actions3729 ) ) .f_list ) ,  (  cur3731 ) ) ) );
    while (true) {
        struct Maybe_1181  __cond1180 =  next1182 (&temp1170);
        if (  __cond1180 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action3733 =  __cond1180 .stuff .Maybe_1181_Just_s .field0;
        ( (  free_dash_changeset1184 ) ( (  action3733 ) ,  (  al3730 ) ) );
    }
    ( (  trim1203 ) ( ( & ( ( * (  actions3729 ) ) .f_list ) ) ,  (  cur3731 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1204 (    struct StrView_27  s2190 ,    enum CAllocator_10  al2192 ) {
    return ( (  clone_dash_0505 ) ( (  s2190 ) ,  (  al2192 ) ) );
}

static  struct Maybe_80   head1206 (    struct SplitIter_599  it1160 ) {
    struct SplitIter_599  temp1207 = ( (  into_dash_iter606 ) ( (  it1160 ) ) );
    return ( (  next615 ) ( ( &temp1207 ) ) );
}

static  struct Maybe_80   head1209 (    struct Drop_598  it1160 ) {
    struct Drop_598  temp1210 = ( (  into_dash_iter604 ) ( (  it1160 ) ) );
    return ( (  next614 ) ( ( &temp1210 ) ) );
}

static  bool   null1208 (    struct Drop_598  it1169 ) {
    struct Maybe_80  dref1170 = ( (  head1209 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_80_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1212 (    struct StrView_27  errmsg1731 ) {
    ( (  print_dash_str668 ) ( ( ( StrConcat_669_StrConcat ) ( ( ( StrConcat_670_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1731 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_612   undefined1213 (  ) {
    struct Tuple2_612  temp1214;
    return (  temp1214 );
}

static  struct Tuple2_612   or_dash_fail1211 (    struct Maybe_611  x1744 ,    struct StrView_27  errmsg1746 ) {
    struct Maybe_611  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_611_None_t ) {
        ( (  panic1212 ) ( (  errmsg1746 ) ) );
        return ( (  undefined1213 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_611_Just_t ) {
            return ( dref1747 .stuff .Maybe_611_Just_s .field0 );
        }
    }
}

static  struct Maybe_611   reduce1216 (    struct Zip_597  iterable1111 ,    struct Maybe_611  base1113 ,    struct Maybe_611 (*  fun1115 )(    struct Tuple2_612  ,    struct Maybe_611  ) ) {
    struct Maybe_611  x1116 = (  base1113 );
    struct Zip_597  it1117 = ( (  into_dash_iter602 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_611  dref1118 = ( (  next613 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_611_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_611_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_611_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1217 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1217);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_611  temp1218;
    return (  temp1218 );
}

static  struct Maybe_611   lam1219 (    struct Tuple2_612  e1165 ,    struct Maybe_611  dref1166 ) {
    return ( ( Maybe_611_Just ) ( (  e1165 ) ) );
}

static  struct Maybe_611   last1215 (    struct Zip_597  it1163 ) {
    return ( (  reduce1216 ) ( (  it1163 ) ,  ( (struct Maybe_611) { .tag = Maybe_611_None_t } ) ,  (  lam1219 ) ) );
}

static  int32_t   snd1220 (    struct Tuple2_612  dref1274 ) {
    return ( dref1274 .field1 );
}

static  struct StrView_27   fst1221 (    struct Tuple2_612  dref1271 ) {
    return ( dref1271 .field0 );
}

static  struct Pos_26   pos_dash_after_dash_str1205 (    struct TextBuf_104 *  self3862 ,    struct StrView_27  bytes3864 ,    struct Pos_26  from3866 ) {
    struct SplitIter_599  lines3867 = ( (  split_dash_by_dash_each607 ) ( (  bytes3864 ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line3868 = ( (  or_dash_else589 ) ( ( (  head1206 ) ( (  lines3867 ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_598  headless3869 = ( (  drop605 ) ( (  lines3867 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1208 ) ( (  headless3869 ) ) ) ) {
        struct Pos_26  next_dash_pos3870 = ( (  mk694 ) ( ( (  from3866 ) .f_line ) ,  (  op_dash_add159 ( ( (  from3866 ) .f_bi ) , ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  first_dash_line3868 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3870 );
    } else {
        struct Tuple2_612  last_dash_line3871 = ( (  or_dash_fail1211 ) ( ( (  last1215 ) ( ( (  zip603 ) ( (  headless3869 ) ,  ( (  from427 ) ( (  op_dash_add159 ( ( (  from3866 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk694 ) ( ( (  snd1220 ) ( (  last_dash_line3871 ) ) ) ,  ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  fst1221 ) ( (  last_dash_line3871 ) ) ) ) ) ) ) ) );
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

struct envunion1233 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1236 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   str_dash_between1223 (   struct env125* env ,    struct TextBuf_104 *  self3894 ,    struct Pos_26  from3896 ,    struct Pos_26  to3898 ) {
    enum CAllocator_10  al3899 = ( ( ( * (  self3894 ) ) .f_buf ) .f_al );
    if ( (  eq558 ( ( (  from3896 ) .f_line ) , ( (  to3898 ) .f_line ) ) ) ) {
        if ( (  eq558 ( ( (  from3896 ) .f_line ) , ( (  num_dash_lines1137 ) ( (  self3894 ) ) ) ) ) ) {
            return ( (  clone1204 ) ( ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ,  (  al3899 ) ) );
        }
        size_t  from_dash_bi3900 = ( (  i32_dash_size412 ) ( ( (  min658 ) ( ( (  from3896 ) .f_bi ) ,  ( (  to3898 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3901 = ( (  i32_dash_size412 ) ( ( (  max1110 ) ( ( (  from3896 ) .f_bi ) ,  ( (  to3898 ) .f_bi ) ) ) ) );
        return ( (  clone1204 ) ( ( (  byte_dash_substr484 ) ( ( (  line1097 ) ( (  self3894 ) ,  ( (  from3896 ) .f_line ) ) ) ,  (  from_dash_bi3900 ) ,  (  to_dash_bi3901 ) ) ) ,  (  al3899 ) ) );
    } else {
        struct Pos_26  from_dash_pos3902 = ( (  min554 ) ( (  from3896 ) ,  (  to3898 ) ) );
        struct Pos_26  to_dash_pos3903 = ( (  max556 ) ( (  from3896 ) ,  (  to3898 ) ) );
        struct List_9  temp1224 = ( (  mk439 ) ( (  al3899 ) ) );
        struct List_9 *  sb3904 = ( &temp1224 );
        struct StrView_27  first_dash_line3905 = ( (  line1097 ) ( (  self3894 ) ,  ( (  from_dash_pos3902 ) .f_line ) ) );
        struct envunion1226  temp1225 = ( (struct envunion1226){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
        ( temp1225.fun ( &temp1225.env ,  (  sb3904 ) ,  ( ( (  byte_dash_substr484 ) ( (  first_dash_line3905 ) ,  ( (  i32_dash_size412 ) ( ( (  from_dash_pos3902 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1130 ) ( (  first_dash_line3905 ) ) ) ) ) .f_contents ) ) );
        struct envunion1228  temp1227 = ( (struct envunion1228){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
        ( temp1227.fun ( &temp1227.env ,  (  sb3904 ) ,  ( ( ( (  from_dash_charlike1229 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_153  temp1230 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( ( (  from_dash_pos3902 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub164 ( ( (  to_dash_pos3903 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_155  __cond1231 =  next156 (&temp1230);
            if (  __cond1231 .tag == 0 ) {
                break;
            }
            int32_t  i3907 =  __cond1231 .stuff .Maybe_155_Just_s .field0;
            struct envunion1233  temp1232 = ( (struct envunion1233){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
            ( temp1232.fun ( &temp1232.env ,  (  sb3904 ) ,  ( ( (  line1097 ) ( (  self3894 ) ,  (  i3907 ) ) ) .f_contents ) ) );
            struct envunion126  temp1234 = ( (struct envunion126){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
            ( temp1234.fun ( &temp1234.env ,  (  sb3904 ) ,  ( ( ( (  from_dash_charlike1229 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1236  temp1235 = ( (struct envunion1236){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
        ( temp1235.fun ( &temp1235.env ,  (  sb3904 ) ,  ( ( (  byte_dash_substr484 ) ( ( (  line1097 ) ( (  self3894 ) ,  ( (  to_dash_pos3903 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( ( (  to_dash_pos3903 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes1098 ) ( ( (  to_dash_slice565 ) ( ( * (  sb3904 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1237 (    struct Maybe_206  m1282 ) {
    struct Maybe_206  dref1283 = (  m1282 );
    if ( dref1283.tag == Maybe_206_None_t ) {
        return ( true );
    }
    else {
        if ( dref1283.tag == Maybe_206_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1239 {
    enum ChangesetInputType_106  field0;
    enum ChangesetInputType_106  field1;
};

static struct Tuple2_1239 Tuple2_1239_Tuple2 (  enum ChangesetInputType_106  field0 ,  enum ChangesetInputType_106  field1 ) {
    return ( struct Tuple2_1239 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1238 (    enum ChangesetInputType_106  l3719 ,    enum ChangesetInputType_106  r3721 ) {
    return ( {  struct Tuple2_1239  dref3722 = ( ( Tuple2_1239_Tuple2 ) ( (  l3719 ) ,  (  r3721 ) ) ) ;  dref3722 .field0 == ChangesetInputType_106_NoChangeset &&  dref3722 .field1 == ChangesetInputType_106_NoChangeset ? ( true ) :  dref3722 .field0 == ChangesetInputType_106_InputChangeset &&  dref3722 .field1 == ChangesetInputType_106_InputChangeset ? ( true ) :  dref3722 .field0 == ChangesetInputType_106_CustomChangeset &&  dref3722 .field1 == ChangesetInputType_106_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1241 (    struct Slice_31  slice1776 ,    size_t  i1778 ) {
    if ( ( (  cmp290 ( (  i1778 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1778 ) , ( (  slice1776 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1778 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1776 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr1779 = ( (  offset_dash_ptr1178 ) ( ( (  slice1776 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1778 ) ) ) ) );
    return (  elem_dash_ptr1779 );
}

static  struct Changeset_32 *   last_dash_ptr1240 (    struct Slice_31  s1963 ) {
    if ( (  eq399 ( ( (  s1963 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1241 ) ( (  s1963 ) ,  (  op_dash_sub289 ( ( (  s1963 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1242 (    struct List_30  l2151 ) {
    struct Changeset_32 *  ptr2152 = ( ( (  l2151 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2152 ) , .f_count = ( (  l2151 ) .f_count ) } );
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

static  struct Slice_24   allocate1247 (    enum CAllocator_10  dref1978 ,    size_t  count1980 ) {
    if (!(  dref1978 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1981 = ( ( ( (  get_dash_typesize1248 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr1982 = ( (  cast_dash_ptr1251 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1981 ) , (  count1980 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr1982 ) , .f_count = (  count1980 ) } );
}

struct env1252 {
    ;
    struct Slice_24  new_dash_slice2067;
    ;
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

static  struct Action_25 *   get_dash_ptr1257 (    struct Slice_24  slice1776 ,    size_t  i1778 ) {
    if ( ( (  cmp290 ( (  i1778 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1778 ) , ( (  slice1776 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1778 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1776 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr1779 = ( (  offset_dash_ptr1193 ) ( ( (  slice1776 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1778 ) ) ) ) );
    return (  elem_dash_ptr1779 );
}

static  enum Unit_8   set1256 (    struct Slice_24  slice1793 ,    size_t  i1795 ,    struct Action_25  x1797 ) {
    struct Action_25 *  ep1798 = ( (  get_dash_ptr1257 ) ( (  slice1793 ) ,  (  i1795 ) ) );
    (*  ep1798 ) = (  x1797 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1255 (   struct env1252* env ,    struct Tuple2_1254  dref2068 ) {
    return ( (  set1256 ) ( ( env->new_dash_slice2067 ) ,  ( (  i32_dash_size412 ) ( ( dref2068 .field1 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct Zip_1259 {
    struct SliceIter_1188  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_1259   into_dash_iter1261 (    struct Zip_1259  self929 ) {
    return (  self929 );
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

static  struct Maybe_1262   next1263 (    struct Zip_1259 *  self932 ) {
    struct Zip_1259  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_1195  dref934 = ( (  next1196 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_1195_None_t ) {
            return ( (struct Maybe_1262) { .tag = Maybe_1262_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_1195_Just_t ) {
                struct Maybe_155  dref936 = ( (  next422 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_1262) { .tag = Maybe_1262_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_155_Just_t ) {
                        ( (  next1196 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1262_Just ) ( ( ( Tuple2_1254_Tuple2 ) ( ( dref934 .stuff .Maybe_1195_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1258 (    struct Zip_1259  iterable1092 ,   struct envunion1253  fun1094 ) {
    struct Zip_1259  temp1260 = ( (  into_dash_iter1261 ) ( (  iterable1092 ) ) );
    struct Zip_1259 *  it1095 = ( &temp1260 );
    while ( ( true ) ) {
        struct Maybe_1262  dref1096 = ( (  next1263 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_1262_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_1262_Just_t ) {
                struct envunion1253  temp1264 = (  fun1094 );
                ( temp1264.fun ( &temp1264.env ,  ( dref1096 .stuff .Maybe_1262_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1259   zip1265 (    struct Slice_24  left940 ,    struct FromIter_416  right942 ) {
    struct SliceIter_1188  left_dash_it943 = ( (  into_dash_iter1191 ) ( (  left940 ) ) );
    struct FromIter_416  right_dash_it944 = ( (  into_dash_iter426 ) ( (  right942 ) ) );
    return ( (struct Zip_1259) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1246 (   struct env3* env ,    struct List_23 *  list2066 ) {
    if ( (  eq399 ( ( ( * (  list2066 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2066 ) .f_elements = ( (  allocate1247 ) ( ( ( * (  list2066 ) ) .f_al ) ,  ( env->starting_dash_size2061 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2066 ) ) .f_count ) , ( ( ( * (  list2066 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2067 = ( (  allocate1247 ) ( ( ( * (  list2066 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2066 ) ) .f_count ) , ( env->growth_dash_factor2062 ) ) ) ) );
            struct env1252 envinst1252 = {
                .new_dash_slice2067 =  new_dash_slice2067 ,
            };
            struct envunion1253  fun2071 = ( (struct envunion1253){ .fun = (  enum Unit_8  (*) (  struct env1252*  ,    struct Tuple2_1254  ) )lam1255 , .env =  envinst1252 } );
            ( (  for_dash_each1258 ) ( ( (  zip1265 ) ( ( ( * (  list2066 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2071 ) ) );
            ( (  free1201 ) ( ( ( * (  list2066 ) ) .f_al ) ,  ( ( * (  list2066 ) ) .f_elements ) ) );
            (*  list2066 ) .f_elements = (  new_dash_slice2067 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1244 (   struct env21* env ,    struct List_23 *  list2074 ,    struct Action_25  elem2076 ) {
    struct envunion22  temp1245 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1246 , .env =  env->envinst3 } );
    ( temp1245.fun ( &temp1245.env ,  (  list2074 ) ) );
    ( (  set1256 ) ( ( ( * (  list2074 ) ) .f_elements ) ,  ( ( * (  list2074 ) ) .f_count ) ,  (  elem2076 ) ) );
    (*  list2074 ) .f_count = (  op_dash_add311 ( ( ( * (  list2074 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
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

static  struct List_23   mk1267 (    enum CAllocator_10  al2056 ) {
    struct Slice_24  elements2057 = ( (  empty1268 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2056 ) , .f_elements = (  elements2057 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1274 (    struct Maybe_206  self1751 ,    struct Cursors_33  alt1753 ) {
    struct Maybe_206  dref1754 = (  self1751 );
    if ( dref1754.tag == Maybe_206_None_t ) {
        return (  alt1753 );
    }
    else {
        if ( dref1754.tag == Maybe_206_Just_t ) {
            return ( dref1754 .stuff .Maybe_206_Just_s .field0 );
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

static  struct Slice_31   allocate1281 (    enum CAllocator_10  dref1978 ,    size_t  count1980 ) {
    if (!(  dref1978 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1981 = ( ( ( (  get_dash_typesize1282 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr1982 = ( (  cast_dash_ptr1285 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1981 ) , (  count1980 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr1982 ) , .f_count = (  count1980 ) } );
}

struct env1286 {
    ;
    struct Slice_31  new_dash_slice2067;
    ;
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

static  enum Unit_8   set1290 (    struct Slice_31  slice1793 ,    size_t  i1795 ,    struct Changeset_32  x1797 ) {
    struct Changeset_32 *  ep1798 = ( (  get_dash_ptr1241 ) ( (  slice1793 ) ,  (  i1795 ) ) );
    (*  ep1798 ) = (  x1797 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1289 (   struct env1286* env ,    struct Tuple2_1288  dref2068 ) {
    return ( (  set1290 ) ( ( env->new_dash_slice2067 ) ,  ( (  i32_dash_size412 ) ( ( dref2068 .field1 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct Zip_1292 {
    struct SliceIter_1172  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_1292   into_dash_iter1294 (    struct Zip_1292  self929 ) {
    return (  self929 );
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

static  struct Maybe_1295   next1296 (    struct Zip_1292 *  self932 ) {
    struct Zip_1292  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_1181  dref934 = ( (  next1183 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_1181_None_t ) {
            return ( (struct Maybe_1295) { .tag = Maybe_1295_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_1181_Just_t ) {
                struct Maybe_155  dref936 = ( (  next422 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_1295) { .tag = Maybe_1295_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_155_Just_t ) {
                        ( (  next1183 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1295_Just ) ( ( ( Tuple2_1288_Tuple2 ) ( ( dref934 .stuff .Maybe_1181_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1291 (    struct Zip_1292  iterable1092 ,   struct envunion1287  fun1094 ) {
    struct Zip_1292  temp1293 = ( (  into_dash_iter1294 ) ( (  iterable1092 ) ) );
    struct Zip_1292 *  it1095 = ( &temp1293 );
    while ( ( true ) ) {
        struct Maybe_1295  dref1096 = ( (  next1296 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_1295_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_1295_Just_t ) {
                struct envunion1287  temp1297 = (  fun1094 );
                ( temp1297.fun ( &temp1297.env ,  ( dref1096 .stuff .Maybe_1295_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1292   zip1298 (    struct Slice_31  left940 ,    struct FromIter_416  right942 ) {
    struct SliceIter_1172  left_dash_it943 = ( (  into_dash_iter1176 ) ( (  left940 ) ) );
    struct FromIter_416  right_dash_it944 = ( (  into_dash_iter426 ) ( (  right942 ) ) );
    return ( (struct Zip_1292) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  void *   cast_dash_ptr1300 (    struct Changeset_32 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1299 (    enum CAllocator_10  dref1984 ,    struct Slice_31  slice1986 ) {
    if (!(  dref1984 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1300 ) ( ( (  slice1986 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1280 (   struct env4* env ,    struct List_30 *  list2066 ) {
    if ( (  eq399 ( ( ( * (  list2066 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2066 ) .f_elements = ( (  allocate1281 ) ( ( ( * (  list2066 ) ) .f_al ) ,  ( env->starting_dash_size2061 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2066 ) ) .f_count ) , ( ( ( * (  list2066 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2067 = ( (  allocate1281 ) ( ( ( * (  list2066 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2066 ) ) .f_count ) , ( env->growth_dash_factor2062 ) ) ) ) );
            struct env1286 envinst1286 = {
                .new_dash_slice2067 =  new_dash_slice2067 ,
            };
            struct envunion1287  fun2071 = ( (struct envunion1287){ .fun = (  enum Unit_8  (*) (  struct env1286*  ,    struct Tuple2_1288  ) )lam1289 , .env =  envinst1286 } );
            ( (  for_dash_each1291 ) ( ( (  zip1298 ) ( ( ( * (  list2066 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2071 ) ) );
            ( (  free1299 ) ( ( ( * (  list2066 ) ) .f_al ) ,  ( ( * (  list2066 ) ) .f_elements ) ) );
            (*  list2066 ) .f_elements = (  new_dash_slice2067 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1278 (   struct env28* env ,    struct List_30 *  list2074 ,    struct Changeset_32  elem2076 ) {
    struct envunion29  temp1279 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1280 , .env =  env->envinst4 } );
    ( temp1279.fun ( &temp1279.env ,  (  list2074 ) ) );
    ( (  set1290 ) ( ( ( * (  list2074 ) ) .f_elements ) ,  ( ( * (  list2074 ) ) .f_count ) ,  (  elem2076 ) ) );
    (*  list2074 ) .f_count = (  op_dash_add311 ( ( ( * (  list2074 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1302 (   struct env119* env ,    struct TextBuf_104 *  self3857 ,    struct Action_25  action3859 ) {
    struct envunion120  temp1303 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action553 , .env =  env->envinst100 } );
    ( temp1303.fun ( &temp1303.env ,  (  self3857 ) ,  ( (  action3859 ) .f_from ) ,  ( (  action3859 ) .f_to_dash_bwd ) ,  ( (  action3859 ) .f_fwd ) ) );
    return ( (  action3859 ) .f_to_dash_fwd );
}

static  struct Maybe_206   change1168 (   struct env127* env ,    struct TextBuf_104 *  self3924 ,    struct Pos_26  from3926 ,    struct Pos_26  to3928 ,    struct StrView_27  bytes3930 ,    struct Maybe_206  before_dash_cursors3932 ) {
    struct Pos_26  from_dash_pos3933 = ( (  min554 ) ( (  from3926 ) ,  (  to3928 ) ) );
    struct Pos_26  to_dash_pos3934 = ( (  max556 ) ( (  from3926 ) ,  (  to3928 ) ) );
    struct Actions_105 *  actions3935 = ( & ( ( * (  self3924 ) ) .f_actions ) );
    ( (  trim_dash_actions1169 ) ( (  actions3935 ) ) );
    struct envunion130  temp1222 = ( (struct envunion130){ .fun = (  struct StrView_27  (*) (  struct env125*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1223 , .env =  env->envinst125 } );
    struct Action_25  action3936 = ( (struct Action_25) { .f_from = (  from3926 ) , .f_fwd = ( (  clone1204 ) ( (  bytes3930 ) ,  ( ( * (  self3924 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1205 ) ( (  self3924 ) ,  (  bytes3930 ) ,  (  from_dash_pos3933 ) ) ) , .f_bwd = ( temp1222.fun ( &temp1222.env ,  (  self3924 ) ,  (  from_dash_pos3933 ) ,  (  to_dash_pos3934 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3934 ) } );
    enum CAllocator_10  al3937 = ( ( ( * (  actions3935 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3938 = ( (  is_dash_none1237 ) ( (  before_dash_cursors3932 ) ) );
    if ( ( (  eq1238 ( ( ( ( * (  self3924 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_106_CustomChangeset ) ) ) || ( (  eq1238 ( ( ( ( * (  self3924 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_106_InputChangeset ) ) ) && (  is_dash_typed_dash_in3938 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset3939 = ( (  last_dash_ptr1240 ) ( ( (  to_dash_slice1242 ) ( ( ( * (  actions3935 ) ) .f_list ) ) ) ) );
        struct envunion128  temp1243 = ( (struct envunion128){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1244 , .env =  env->envinst21 } );
        ( temp1243.fun ( &temp1243.env ,  ( & ( ( * (  last_dash_changeset3939 ) ) .f_parts ) ) ,  (  action3936 ) ) );
    } else {
        struct Changeset_32  temp1266 = ( (struct Changeset_32) { .f_parts = ( (  mk1267 ) ( (  al3937 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1274 ) ( (  before_dash_cursors3932 ) ,  ( (struct Cursors_33) { .f_cur = (  from3926 ) , .f_sel = ( (  eq557 ( (  from3926 ) , (  to3928 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to3928 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset3940 = ( &temp1266 );
        struct envunion1276  temp1275 = ( (struct envunion1276){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1244 , .env =  env->envinst21 } );
        ( temp1275.fun ( &temp1275.env ,  ( & ( ( * (  changeset3940 ) ) .f_parts ) ) ,  (  action3936 ) ) );
        struct envunion129  temp1277 = ( (struct envunion129){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1278 , .env =  env->envinst28 } );
        ( temp1277.fun ( &temp1277.env ,  ( & ( ( * (  actions3935 ) ) .f_list ) ) ,  ( * (  changeset3940 ) ) ) );
        (*  actions3935 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3938 ) ? ( ChangesetInputType_106_InputChangeset ) : ( ChangesetInputType_106_NoChangeset ) );
        (*  actions3935 ) .f_cur = (  op_dash_add311 ( ( ( * (  actions3935 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion131  temp1301 = ( (struct envunion131){ .fun = (  struct Pos_26  (*) (  struct env119*  ,    struct TextBuf_104 *  ,    struct Action_25  ) )action_dash_fwd1302 , .env =  env->envinst119 } );
    struct Pos_26  to_dash_fwd3941 = ( temp1301.fun ( &temp1301.env ,  (  self3924 ) ,  (  action3936 ) ) );
    if ( (  cmp290 ( ( (  num_dash_bytes1130 ) ( ( (  action3936 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3942 = ( (  left_dash_pos1129 ) ( (  self3924 ) ,  (  to_dash_fwd3941 ) ) );
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3942 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action3936 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3941 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1166 (   struct env204* env ,    struct Pane_219 *  self4330 ,    struct StrView_27  s4332 ) {
    struct Pos_26  cur4333 = ( ( * (  self4330 ) ) .f_cursor );
    struct envunion205  temp1167 = ( (struct envunion205){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    ( temp1167.fun ( &temp1167.env ,  ( ( * (  self4330 ) ) .f_buf ) ,  (  cur4333 ) ,  (  cur4333 ) ,  (  s4332 ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1309 (   struct env215* env ,    struct Pane_219 *  self4368 ,    int32_t  line4370 ) {
    struct envunion216  temp1310 = ( (struct envunion216){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    ( temp1310.fun ( &temp1310.env ,  ( ( * (  self4368 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4370 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4370 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike1229 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1305 (   struct env226* env ,    struct Pane_219 *  self4389 ,    int32_t  indent4391 ) {
    struct RangeIter_153  temp1306 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4391 ) ) ) );
    while (true) {
        struct Maybe_155  __cond1307 =  next156 (&temp1306);
        if (  __cond1307 .tag == 0 ) {
            break;
        }
        int32_t  dref4392 =  __cond1307 .stuff .Maybe_155_Just_s .field0;
        struct envunion227  temp1308 = ( (struct envunion227){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at1309 , .env =  env->envinst215 } );
        ( temp1308.fun ( &temp1308.env ,  (  self4389 ) ,  ( ( ( * (  self4389 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1135 ) ( (  self4389 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1311 (    struct Pane_219 *  self4309 ) {
    struct Pos_26  temp1312 = ( ( * (  self4309 ) ) .f_cursor );
    temp1312 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors1091 ) ( (  self4309 ) ,  ( temp1312 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
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

static  struct Pos_26   own1321 (    struct Pos_26  x1269 ) {
    return (  x1269 );
}

struct env1322 {
    enum MoveDirection_1318  dir4272;
    ;
    struct Pos_26 *  prev4275;
    struct Pane_219 *  pane4270;
    ;
};

static  bool   is_dash_at_dash_line_dash_end1324 (    struct Pane_219 *  pane4252 ,    struct Pos_26  pos4254 ) {
    return (  eq399 ( ( (  i32_dash_size412 ) ( ( (  pos4254 ) .f_bi ) ) ) , ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  pane4252 ) ) .f_buf ) ,  ( (  pos4254 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1323 (    struct Pane_219 *  pane4257 ) {
    return ( (  is_dash_at_dash_line_dash_end1324 ) ( (  pane4257 ) ,  ( ( * (  pane4257 ) ) .f_cursor ) ) );
}

struct envunion1326 {
    enum Unit_8  (*fun) (  struct env1322*  );
    struct env1322 env;
};

static  enum Unit_8   advance1327 (   struct env1322* env ) {
    (* env->prev4275 ) = ( ( * ( env->pane4270 ) ) .f_cursor );
    enum MoveDirection_1318  dref4277 = ( env->dir4272 );
    switch (  dref4277 ) {
        case MoveDirection_1318_MoveFwd : {
            ( (  move_dash_right1135 ) ( ( env->pane4270 ) ) );
            break;
        }
        case MoveDirection_1318_MoveBwd : {
            ( (  move_dash_left1090 ) ( ( env->pane4270 ) ) );
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

static  bool   eq1330 (    enum CharType_1331  l3685 ,    enum CharType_1331  r3687 ) {
    struct Tuple2_1332  dref3688 = ( ( Tuple2_1332_Tuple2 ) ( (  l3685 ) ,  (  r3687 ) ) );
    if (  dref3688 .field0 == CharType_1331_CharSpace &&  dref3688 .field1 == CharType_1331_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3688 .field0 == CharType_1331_CharWord &&  dref3688 .field1 == CharType_1331_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3688 .field0 == CharType_1331_CharPunctuation &&  dref3688 .field1 == CharType_1331_CharPunctuation ) {
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

static  struct Char_65   min1337 (    struct Char_65  l1254 ,    struct Char_65  r1256 ) {
    if ( (  cmp930 ( (  l1254 ) , (  r1256 ) ) == 0 ) ) {
        return (  l1254 );
    } else {
        return (  r1256 );
    }
}

static  struct Char_65   max1338 (    struct Char_65  l1333 ,    struct Char_65  r1335 ) {
    if ( (  cmp930 ( (  l1333 ) , (  r1335 ) ) == 2 ) ) {
        return (  l1333 );
    } else {
        return (  r1335 );
    }
}

static  bool   between1336 (    struct Char_65  c1355 ,    struct Char_65  l1357 ,    struct Char_65  r1359 ) {
    struct Char_65  from1360 = ( (  min1337 ) ( (  l1357 ) ,  (  r1359 ) ) );
    struct Char_65  to1361 = ( (  max1338 ) ( (  l1357 ) ,  (  r1359 ) ) );
    return ( (  cmp930 ( (  from1360 ) , (  c1355 ) ) != 2 ) && (  cmp930 ( (  c1355 ) , (  to1361 ) ) != 2 ) );
}

static  bool   is_dash_alpha1335 (    struct Char_65  c2424 ) {
    return ( ( (  cmp290 ( ( (  c2424 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1336 ) ( (  c2424 ) ,  ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1336 ) ( (  c2424 ) ,  ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1339 (    struct Char_65  c2427 ) {
    return ( (  eq399 ( ( (  c2427 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1336 ) ( (  c2427 ) ,  ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1334 (    struct Char_65  c2439 ) {
    return ( ( (  is_dash_alpha1335 ) ( (  c2439 ) ) ) || ( (  is_dash_digit1339 ) ( (  c2439 ) ) ) );
}

static  bool   is_dash_whitespace1340 (    struct Char_65  c2415 ) {
    return ( ( (  eq469 ( (  c2415 ) , ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq469 ( (  c2415 ) , ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq469 ( (  c2415 ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1331   char_dash_type1333 (    struct Char_65  c3691 ) {
    if ( ( ( ( (  is_dash_alphanumeric1334 ) ( (  c3691 ) ) ) || (  eq469 ( (  c3691 ) , ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq469 ( (  c3691 ) , ( (  from_dash_charlike346 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1331_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1340 ) ( (  c3691 ) ) ) ) {
            return ( CharType_1331_CharSpace );
        } else {
            return ( CharType_1331_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1329 (    struct Char_65  l3694 ,    struct Char_65  r3696 ) {
    return ( !  eq1330 ( ( (  char_dash_type1333 ) ( (  l3694 ) ) ) , ( (  char_dash_type1333 ) ( (  r3696 ) ) ) ) );
}

static  struct Char_65   or_dash_else1342 (    struct Maybe_297  self1751 ,    struct Char_65  alt1753 ) {
    struct Maybe_297  dref1754 = (  self1751 );
    if ( dref1754.tag == Maybe_297_None_t ) {
        return (  alt1753 );
    }
    else {
        if ( dref1754.tag == Maybe_297_Just_t ) {
            return ( dref1754 .stuff .Maybe_297_Just_s .field0 );
        }
    }
}

static  struct Maybe_297   head1343 (    struct StrViewIter_458  it1160 ) {
    struct StrViewIter_458  temp1344 = ( (  into_dash_iter459 ) ( (  it1160 ) ) );
    return ( (  next463 ) ( ( &temp1344 ) ) );
}

static  struct Char_65   char_dash_at1341 (    struct Pane_219 *  pane4121 ,    struct Pos_26  pos4123 ) {
    struct StrView_27  line4124 = ( (  line1097 ) ( ( ( * (  pane4121 ) ) .f_buf ) ,  ( (  pos4123 ) .f_line ) ) );
    return ( (  or_dash_else1342 ) ( ( (  head1343 ) ( ( (  chars460 ) ( ( (  byte_dash_substr484 ) ( (  line4124 ) ,  ( (  i32_dash_size412 ) ( ( (  pos4123 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1130 ) ( (  line4124 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_8   print1346 (    struct StrView_27  s1720 ) {
    ( (  for_dash_each773 ) ( ( (  chars460 ) ( (  s1720 ) ) ) ,  (  printf_dash_char336 ) ) );
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

static  bool   reached_dash_target1328 (    struct Pane_219 *  pane4262 ,    enum MoveTarget_1319  target4264 ,    struct Pos_26  prev4266 ) {
    return ( {  enum MoveTarget_1319  dref4267 = (  target4264 ) ;  dref4267 == MoveTarget_1319_NextWordStart ? ( ( (  is_dash_word_dash_boundary1329 ) ( ( (  char_dash_at1341 ) ( (  pane4262 ) ,  (  prev4266 ) ) ) ,  ( (  char_dash_at1341 ) ( (  pane4262 ) ,  ( ( * (  pane4262 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1330 ( ( (  char_dash_type1333 ) ( ( (  char_dash_at1341 ) ( (  pane4262 ) ,  ( ( * (  pane4262 ) ) .f_cursor ) ) ) ) ) , ( CharType_1331_CharSpace ) ) ) ) ) :  dref4267 == MoveTarget_1319_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1329 ) ( ( (  char_dash_at1341 ) ( (  pane4262 ) ,  (  prev4266 ) ) ) ,  ( (  char_dash_at1341 ) ( (  pane4262 ) ,  ( ( * (  pane4262 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1330 ( ( (  char_dash_type1333 ) ( ( (  char_dash_at1341 ) ( (  pane4262 ) ,  (  prev4266 ) ) ) ) ) , ( CharType_1331_CharSpace ) ) ) ) ) : ( (  todo1345 ) ( ) ) ; } );
}

struct envunion1350 {
    enum Unit_8  (*fun) (  struct env1322*  );
    struct env1322 env;
};

struct envunion1352 {
    enum Unit_8  (*fun) (  struct env1322*  );
    struct env1322 env;
};

static  enum Unit_8   advance_dash_word1317 (    struct Pane_219 *  pane4270 ,    enum MoveDirection_1318  dir4272 ,    enum MoveTarget_1319  target4274 ) {
    struct Pos_26  temp1320 = ( (  own1321 ) ( ( ( * (  pane4270 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4275 = ( &temp1320 );
    struct env1322 envinst1322 = {
        .dir4272 =  dir4272 ,
        .prev4275 =  prev4275 ,
        .pane4270 =  pane4270 ,
    };
    struct Pos_26  sel4278 = ( ( * (  pane4270 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4279 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1323 ) ( (  pane4270 ) ) );
    struct envunion1326  temp1325 = ( (struct envunion1326){ .fun = (  enum Unit_8  (*) (  struct env1322*  ) )advance1327 , .env =  envinst1322 } );
    ( temp1325.fun ( &temp1325.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4279 ) || ( (  reached_dash_target1328 ) ( (  pane4270 ) ,  (  target4274 ) ,  ( * (  prev4275 ) ) ) ) ) ) {
        sel4278 = ( ( * (  pane4270 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1323 ) ( (  pane4270 ) ) ) ) {
        if ( (  eq557 ( ( ( * (  pane4270 ) ) .f_cursor ) , ( * (  prev4275 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1350  temp1349 = ( (struct envunion1350){ .fun = (  enum Unit_8  (*) (  struct env1322*  ) )advance1327 , .env =  envinst1322 } );
        ( temp1349.fun ( &temp1349.env ) );
        sel4278 = ( ( * (  pane4270 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1352  temp1351 = ( (struct envunion1352){ .fun = (  enum Unit_8  (*) (  struct env1322*  ) )advance1327 , .env =  envinst1322 } );
        ( temp1351.fun ( &temp1351.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1323 ) ( (  pane4270 ) ) ) || ( (  reached_dash_target1328 ) ( (  pane4270 ) ,  (  target4274 ) ,  ( * (  prev4275 ) ) ) ) ) ) {
            enum MoveDirection_1318  dref4280 = (  dir4272 );
            switch (  dref4280 ) {
                case MoveDirection_1318_MoveFwd : {
                    ( (  move_dash_left1090 ) ( (  pane4270 ) ) );
                    break;
                }
                case MoveDirection_1318_MoveBwd : {
                    ( (  move_dash_right1135 ) ( (  pane4270 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq557 ( ( * (  prev4275 ) ) , ( ( * (  pane4270 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1126 ) ( (  pane4270 ) ,  ( ( Maybe_34_Just ) ( (  sel4278 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1357 (    struct List_30 *  l2158 ) {
    return ( ( * (  l2158 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1360 (    struct List_30 *  list2026 ,    size_t  i2028 ) {
    if ( ( (  cmp290 ( (  i2028 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2028 ) , ( ( * (  list2026 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2028 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2026 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1241 ) ( ( ( * (  list2026 ) ) .f_elements ) ,  (  i2028 ) ) );
}

static  struct Changeset_32   get1359 (    struct List_30 *  list2036 ,    size_t  i2038 ) {
    return ( * ( (  get_dash_ptr1360 ) ( (  list2036 ) ,  (  i2038 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1358 (    struct List_30  self2106 ,    size_t  k2108 ) {
    return ( (  get1359 ) ( ( & (  self2106 ) ) ,  (  k2108 ) ) );
}

static  struct Action_25   undefined1369 (  ) {
    struct Action_25  temp1370;
    return (  temp1370 );
}

static  struct Action_25   or_dash_fail1368 (    struct Maybe_1195  x1744 ,    struct StrConcat_321  errmsg1746 ) {
    struct Maybe_1195  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_1195_None_t ) {
        ( (  panic323 ) ( (  errmsg1746 ) ) );
        return ( (  undefined1369 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_1195_Just_t ) {
            return ( dref1747 .stuff .Maybe_1195_Just_s .field0 );
        }
    }
}

static  struct Maybe_1195   try_dash_get1371 (    struct Slice_24  slice1782 ,    size_t  i1784 ) {
    if ( ( (  cmp290 ( (  i1784 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
    }
    struct Action_25 *  elem_dash_ptr1785 = ( (  offset_dash_ptr1193 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1784 ) ) ) ) );
    return ( ( Maybe_1195_Just ) ( ( * (  elem_dash_ptr1785 ) ) ) );
}

static  struct Action_25   get1367 (    struct Slice_24  slice1788 ,    size_t  i1790 ) {
    return ( (  or_dash_fail1368 ) ( ( (  try_dash_get1371 ) ( (  slice1788 ) ,  (  i1790 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1790 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1788 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1366 (    struct Slice_24  self1801 ,    size_t  idx1803 ) {
    return ( (  get1367 ) ( (  self1801 ) ,  (  idx1803 ) ) );
}

static  struct Action_25   last1365 (    struct Slice_24  s1960 ) {
    if ( (  eq399 ( ( (  s1960 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1366 ( (  s1960 ) , (  op_dash_sub289 ( ( (  s1960 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1372 (    struct List_23  l2151 ) {
    struct Action_25 *  ptr2152 = ( ( (  l2151 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2152 ) , .f_count = ( (  l2151 ) .f_count ) } );
}

static  struct Maybe_206   redo1356 (   struct env123* env ,    struct TextBuf_104 *  self3884 ) {
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3884 ) ) );
    struct Actions_105 *  actions3885 = ( & ( ( * (  self3884 ) ) .f_actions ) );
    if ( (  cmp290 ( ( ( * (  actions3885 ) ) .f_cur ) , ( (  size1357 ) ( ( & ( ( * (  actions3885 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_206) { .tag = Maybe_206_None_t } );
    }
    struct Changeset_32  changeset3886 = (  elem_dash_get1358 ( ( ( * (  actions3885 ) ) .f_list ) , ( ( * (  actions3885 ) ) .f_cur ) ) );
    struct Pos_26  temp1361;
    struct Pos_26  to_dash_fwd3887 = (  temp1361 );
    struct SliceIter_1188  temp1362 =  into_dash_iter1190 ( ( (  changeset3886 ) .f_parts ) );
    while (true) {
        struct Maybe_1195  __cond1363 =  next1196 (&temp1362);
        if (  __cond1363 .tag == 0 ) {
            break;
        }
        struct Action_25  action3889 =  __cond1363 .stuff .Maybe_1195_Just_s .field0;
        struct envunion124  temp1364 = ( (struct envunion124){ .fun = (  struct Pos_26  (*) (  struct env119*  ,    struct TextBuf_104 *  ,    struct Action_25  ) )action_dash_fwd1302 , .env =  env->envinst119 } );
        to_dash_fwd3887 = ( temp1364.fun ( &temp1364.env ,  (  self3884 ) ,  (  action3889 ) ) );
    }
    (*  actions3885 ) .f_cur = (  op_dash_add311 ( ( ( * (  actions3885 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action3890 = ( (  last1365 ) ( ( (  to_dash_slice1372 ) ( ( (  changeset3886 ) .f_parts ) ) ) ) );
    if ( (  cmp290 ( ( (  num_dash_bytes1130 ) ( ( (  last_dash_action3890 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3891 = ( (  left_dash_pos1129 ) ( (  self3884 ) ,  (  to_dash_fwd3887 ) ) );
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3891 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action3890 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3887 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1374 {
    struct Pane_219 *  self4346;
    ;
};

struct envunion1375 {
    enum Unit_8  (*fun) (  struct env1374*  ,    struct Cursors_33  );
    struct env1374 env;
};

static  enum Unit_8   if_dash_just1373 (    struct Maybe_206  x1309 ,   struct envunion1375  fun1311 ) {
    struct Maybe_206  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_206_Just_t ) {
        struct envunion1375  temp1376 = (  fun1311 );
        ( temp1376.fun ( &temp1376.env ,  ( dref1312 .stuff .Maybe_206_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_206_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1377 (   struct env1374* env ,    struct Cursors_33  cursors4349 ) {
    ( (  set_dash_cursors1091 ) ( ( env->self4346 ) ,  ( (  cursors4349 ) .f_cur ) ,  ( (  cursors4349 ) .f_sel ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1354 (   struct env211* env ,    struct Pane_219 *  self4346 ) {
    struct envunion212  temp1355 = ( (struct envunion212){ .fun = (  struct Maybe_206  (*) (  struct env123*  ,    struct TextBuf_104 *  ) )redo1356 , .env =  env->envinst123 } );
    struct Maybe_206  mcursors4347 = ( temp1355.fun ( &temp1355.env ,  ( ( * (  self4346 ) ) .f_buf ) ) );
    struct env1374 envinst1374 = {
        .self4346 =  self4346 ,
    };
    ( (  if_dash_just1373 ) ( (  mcursors4347 ) ,  ( (struct envunion1375){ .fun = (  enum Unit_8  (*) (  struct env1374*  ,    struct Cursors_33  ) )lam1377 , .env =  envinst1374 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1383 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1383   into_dash_iter1384 (    struct SliceReversedIter_1383  self1923 ) {
    return (  self1923 );
}

static  struct SliceReversedIter_1383   reversed1385 (    struct Slice_24  slice1920 ) {
    return ( (struct SliceReversedIter_1383) { .f_slice = (  slice1920 ) , .f_current_dash_offset = ( (  slice1920 ) .f_count ) } );
}

static  struct Maybe_1195   next1387 (    struct SliceReversedIter_1383 *  self1926 ) {
    size_t  off1927 = ( ( * (  self1926 ) ) .f_current_dash_offset );
    if ( (  eq399 ( (  off1927 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
    }
    (*  self1926 ) .f_current_dash_offset = (  op_dash_sub289 ( (  off1927 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1195_Just ) ( (  elem_dash_get1366 ( ( ( * (  self1926 ) ) .f_slice ) , ( ( * (  self1926 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1389 (   struct env117* env ,    struct TextBuf_104 *  self3852 ,    struct Action_25  action3854 ) {
    struct envunion118  temp1390 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action553 , .env =  env->envinst100 } );
    ( temp1390.fun ( &temp1390.env ,  (  self3852 ) ,  ( (  action3854 ) .f_from ) ,  ( (  action3854 ) .f_to_dash_fwd ) ,  ( (  action3854 ) .f_bwd ) ) );
    return ( (  action3854 ) .f_to_dash_bwd );
}

static  struct Maybe_206   undo1381 (   struct env121* env ,    struct TextBuf_104 *  self3877 ) {
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3877 ) ) );
    struct Actions_105 *  actions3878 = ( & ( ( * (  self3877 ) ) .f_actions ) );
    if ( (  eq399 ( ( ( * (  actions3878 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_206) { .tag = Maybe_206_None_t } );
    }
    (*  actions3878 ) .f_cur = (  op_dash_sub289 ( ( ( * (  actions3878 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset3879 = (  elem_dash_get1358 ( ( ( * (  actions3878 ) ) .f_list ) , ( ( * (  actions3878 ) ) .f_cur ) ) );
    struct SliceReversedIter_1383  temp1382 =  into_dash_iter1384 ( ( (  reversed1385 ) ( ( (  to_dash_slice1372 ) ( ( (  changeset3879 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1195  __cond1386 =  next1387 (&temp1382);
        if (  __cond1386 .tag == 0 ) {
            break;
        }
        struct Action_25  action3881 =  __cond1386 .stuff .Maybe_1195_Just_s .field0;
        struct envunion122  temp1388 = ( (struct envunion122){ .fun = (  struct Pos_26  (*) (  struct env117*  ,    struct TextBuf_104 *  ,    struct Action_25  ) )action_dash_bwd1389 , .env =  env->envinst117 } );
        ( temp1388.fun ( &temp1388.env ,  (  self3877 ) ,  (  action3881 ) ) );
    }
    return ( ( Maybe_206_Just ) ( ( (  changeset3879 ) .f_before_dash_cursors ) ) );
}

struct env1392 {
    ;
    struct Pane_219 *  self4340;
};

struct envunion1393 {
    enum Unit_8  (*fun) (  struct env1392*  ,    struct Cursors_33  );
    struct env1392 env;
};

static  enum Unit_8   if_dash_just1391 (    struct Maybe_206  x1309 ,   struct envunion1393  fun1311 ) {
    struct Maybe_206  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_206_Just_t ) {
        struct envunion1393  temp1394 = (  fun1311 );
        ( temp1394.fun ( &temp1394.env ,  ( dref1312 .stuff .Maybe_206_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_206_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1395 (   struct env1392* env ,    struct Cursors_33  cursors4343 ) {
    ( (  set_dash_cursors1091 ) ( ( env->self4340 ) ,  ( (  cursors4343 ) .f_cur ) ,  ( (  cursors4343 ) .f_sel ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1379 (   struct env209* env ,    struct Pane_219 *  self4340 ) {
    struct envunion210  temp1380 = ( (struct envunion210){ .fun = (  struct Maybe_206  (*) (  struct env121*  ,    struct TextBuf_104 *  ) )undo1381 , .env =  env->envinst121 } );
    struct Maybe_206  mcursors4341 = ( temp1380.fun ( &temp1380.env ,  ( ( * (  self4340 ) ) .f_buf ) ) );
    struct env1392 envinst1392 = {
        .self4340 =  self4340 ,
    };
    ( (  if_dash_just1391 ) ( (  mcursors4341 ) ,  ( (struct envunion1393){ .fun = (  enum Unit_8  (*) (  struct env1392*  ,    struct Cursors_33  ) )lam1395 , .env =  envinst1392 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_230   minmax1399 (    struct Pos_26  l1347 ,    struct Pos_26  r1349 ) {
    return ( (  cmp555 ( (  l1347 ) , (  r1349 ) ) == 0 ) ? ( ( Tuple2_230_Tuple2 ) ( (  l1347 ) ,  (  r1349 ) ) ) : ( ( Tuple2_230_Tuple2 ) ( (  r1349 ) ,  (  l1347 ) ) ) );
}

static  struct Pos_26   or_dash_else1400 (    struct Maybe_34  self1751 ,    struct Pos_26  alt1753 ) {
    struct Maybe_34  dref1754 = (  self1751 );
    if ( dref1754.tag == Maybe_34_None_t ) {
        return (  alt1753 );
    }
    else {
        if ( dref1754.tag == Maybe_34_Just_t ) {
            return ( dref1754 .stuff .Maybe_34_Just_s .field0 );
        }
    }
}

static  struct Pos_26   fst1401 (    struct Tuple2_230  dref1271 ) {
    return ( dref1271 .field0 );
}

static  struct Pos_26   snd1402 (    struct Tuple2_230  dref1274 ) {
    return ( dref1274 .field1 );
}

static  struct Tuple2_230   selection1398 (    struct Pane_219 *  self4352 ) {
    struct Tuple2_230  from_dash_to4353 = ( (  minmax1399 ) ( ( (  or_dash_else1400 ) ( ( ( * (  self4352 ) ) .f_sel ) ,  ( ( * (  self4352 ) ) .f_cursor ) ) ) ,  ( ( * (  self4352 ) ) .f_cursor ) ) );
    struct Pos_26  from4354 = ( (  fst1401 ) ( (  from_dash_to4353 ) ) );
    struct Pos_26  to4355 = ( (  right_dash_pos1136 ) ( ( ( * (  self4352 ) ) .f_buf ) ,  ( (  snd1402 ) ( (  from_dash_to4353 ) ) ) ) );
    return ( ( Tuple2_230_Tuple2 ) ( (  from4354 ) ,  (  to4355 ) ) );
}

struct env1405 {
    struct Editor_248 *  ed4465;
    ;
};

struct envunion1406 {
    enum Unit_8  (*fun) (  struct env1405*  ,    struct StrView_27  );
    struct env1405 env;
};

static  enum Unit_8   if_dash_just1404 (    struct Maybe_80  x1309 ,   struct envunion1406  fun1311 ) {
    struct Maybe_80  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_80_Just_t ) {
        struct envunion1406  temp1407 = (  fun1311 );
        ( temp1407.fun ( &temp1407.env ,  ( dref1312 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1408 (   struct env1405* env ,    struct StrView_27  cp4469 ) {
    ( (  free547 ) ( (  cp4469 ) ,  ( ( * ( env->ed4465 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1397 (   struct env233* env ,    struct Editor_248 *  ed4465 ) {
    struct Tuple2_230  from_dash_to4466 = ( (  selection1398 ) ( ( (  pane1134 ) ( (  ed4465 ) ) ) ) );
    struct envunion234  temp1403 = ( (struct envunion234){ .fun = (  struct StrView_27  (*) (  struct env125*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1223 , .env =  env->envinst125 } );
    struct StrView_27  cpd4467 = ( temp1403.fun ( &temp1403.env ,  ( ( ( * (  ed4465 ) ) .f_pane ) .f_buf ) ,  ( (  fst1401 ) ( (  from_dash_to4466 ) ) ) ,  ( (  snd1402 ) ( (  from_dash_to4466 ) ) ) ) );
    struct env1405 envinst1405 = {
        .ed4465 =  ed4465 ,
    };
    ( (  if_dash_just1404 ) ( ( ( * (  ed4465 ) ) .f_clipboard ) ,  ( (struct envunion1406){ .fun = (  enum Unit_8  (*) (  struct env1405*  ,    struct StrView_27  ) )lam1408 , .env =  envinst1405 } ) ) );
    (*  ed4465 ) .f_clipboard = ( ( Maybe_80_Just ) ( (  cpd4467 ) ) );
    return ( Unit_8_Unit );
}

struct env1413 {
    ;
    struct Pane_219 *  self4358;
};

struct envunion1414 {
    enum Unit_8  (*fun) (  struct env1413*  ,    struct Cursors_33  );
    struct env1413 env;
};

static  enum Unit_8   if_dash_just1412 (    struct Maybe_206  x1309 ,   struct envunion1414  fun1311 ) {
    struct Maybe_206  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_206_Just_t ) {
        struct envunion1414  temp1415 = (  fun1311 );
        ( temp1415.fun ( &temp1415.env ,  ( dref1312 .stuff .Maybe_206_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_206_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1416 (   struct env1413* env ,    struct Cursors_33  cursors4365 ) {
    ( (  set_dash_cursors1091 ) ( ( env->self4358 ) ,  ( (  cursors4365 ) .f_cur ) ,  ( (  cursors4365 ) .f_sel ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1410 (   struct env213* env ,    struct Pane_219 *  self4358 ,    struct Tuple2_230  pos_prime_s4360 ,    struct StrView_27  cp4362 ) {
    struct envunion214  temp1411 = ( (struct envunion214){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    struct Maybe_206  mcursors4363 = ( temp1411.fun ( &temp1411.env ,  ( ( * (  self4358 ) ) .f_buf ) ,  ( (  fst1401 ) ( (  pos_prime_s4360 ) ) ) ,  ( (  snd1402 ) ( (  pos_prime_s4360 ) ) ) ,  (  cp4362 ) ,  ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4358 ) ) .f_cursor ) , .f_sel = ( ( * (  self4358 ) ) .f_sel ) } ) ) ) ) );
    struct env1413 envinst1413 = {
        .self4358 =  self4358 ,
    };
    ( (  if_dash_just1412 ) ( (  mcursors4363 ) ,  ( (struct envunion1414){ .fun = (  enum Unit_8  (*) (  struct env1413*  ,    struct Cursors_33  ) )lam1416 , .env =  envinst1413 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1418 {
    enum Unit_8  (*fun) (  struct env233*  ,    struct Editor_248 *  );
    struct env233 env;
};

struct envunion1420 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion1422 {
    enum Unit_8  (*fun) (  struct env233*  ,    struct Editor_248 *  );
    struct env233 env;
};

static  struct StrBuilder_62   mk1428 (    enum CAllocator_10  al2841 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk439 ) ( (  al2841 ) ) ) } );
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
    struct StrBuilder_62 *  builder2809;
    struct env60 envinst60;
};

struct envunion1436 {
    enum Unit_8  (*fun) (  struct env1435*  ,    struct Char_65  );
    struct env1435 env;
};

static  struct StrConcatIter_1432   into_dash_iter1438 (    struct StrConcatIter_1432  self1515 ) {
    return (  self1515 );
}

struct env1444 {
    ;
    size_t  base1228;
};

struct envunion1445 {
    size_t  (*fun) (  struct env1444*  ,    int32_t  ,    size_t  );
    struct env1444 env;
};

static  size_t   reduce1443 (    struct Range_150  iterable1111 ,    size_t  base1113 ,   struct envunion1445  fun1115 ) {
    size_t  x1116 = (  base1113 );
    struct RangeIter_153  it1117 = ( (  into_dash_iter154 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1118 = ( (  next156 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_155_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_155_Just_t ) {
                struct envunion1445  temp1446 = (  fun1115 );
                x1116 = ( temp1446.fun ( &temp1446.env ,  ( dref1118 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  size_t   lam1449 (   struct env1444* env ,    int32_t  item1232 ,    size_t  x1234 ) {
    return (  op_dash_mul405 ( (  x1234 ) , ( env->base1228 ) ) );
}

static  size_t   pow1442 (    size_t  base1228 ,    int32_t  p1230 ) {
    struct env1444 envinst1444 = {
        .base1228 =  base1228 ,
    };
    return ( (  reduce1443 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1230 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1445){ .fun = (  size_t  (*) (  struct env1444*  ,    int32_t  ,    size_t  ) )lam1449 , .env =  envinst1444 } ) ) );
}

static  uint8_t   cast1450 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_297   next1441 (    struct IntStrIter_1434 *  self1446 ) {
    if ( ( ( * (  self1446 ) ) .f_negative ) ) {
        (*  self1446 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    size_t  trim_dash_down1447 = ( (  pow1442 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1448 = (  op_dash_div342 ( ( ( * (  self1446 ) ) .f_int ) , (  trim_dash_down1447 ) ) );
    size_t  upper_dash_mask1449 = (  op_dash_mul405 ( (  op_dash_div342 ( (  upper1448 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1450 = ( ( (  cast1450 ) ( (  op_dash_sub289 ( (  upper1448 ) , (  upper_dash_mask1449 ) ) ) ) ) );
    (*  self1446 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1451 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1450 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1451 ) ) );
}

static  struct Maybe_297   next1440 (    struct StrConcatIter_1433 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1441 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1439 (    struct StrConcatIter_1432 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next1440 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1431 (    struct StrConcatIter_1432  iterable1092 ,   struct envunion1436  fun1094 ) {
    struct StrConcatIter_1432  temp1437 = ( (  into_dash_iter1438 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_1432 *  it1095 = ( &temp1437 );
    while ( ( true ) ) {
        struct Maybe_297  dref1096 = ( (  next1439 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_297_Just_t ) {
                struct envunion1436  temp1451 = (  fun1094 );
                ( temp1451.fun ( &temp1451.env ,  ( dref1096 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1458 (    size_t  self1454 ) {
    if ( (  eq399 ( (  self1454 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1455 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp290 ( (  self1454 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1454 = (  op_dash_div342 ( (  self1454 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1455 = (  op_dash_add159 ( (  digits1455 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1455 );
}

static  struct IntStrIter_1434   uint_dash_iter1457 (    size_t  int1461 ) {
    return ( (struct IntStrIter_1434) { .f_int = (  int1461 ) , .f_len = ( (  count_dash_digits1458 ) ( (  int1461 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1434   chars1456 (    size_t  self1491 ) {
    return ( (  uint_dash_iter1457 ) ( (  self1491 ) ) );
}

static  struct StrConcatIter_1433   into_dash_iter1455 (    struct StrConcat_84  dref1522 ) {
    return ( (struct StrConcatIter_1433) { .f_left = ( (  chars460 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1456 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_1433   chars1454 (    struct StrConcat_84  self1533 ) {
    return ( (  into_dash_iter1455 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_1432   into_dash_iter1453 (    struct StrConcat_83  dref1522 ) {
    return ( (struct StrConcatIter_1432) { .f_left = ( (  chars1454 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_1432   chars1452 (    struct StrConcat_83  self1533 ) {
    return ( (  into_dash_iter1453 ) ( (  self1533 ) ) );
}

static  enum Unit_8   write_dash_slice1463 (   struct env58* env ,    struct StrBuilder_62 *  builder2799 ,    struct Slice_11  s2801 ) {
    struct envunion59  temp1464 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
    ( temp1464.fun ( &temp1464.env ,  ( & ( ( * (  builder2799 ) ) .f_chars ) ) ,  (  s2801 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_11   from_dash_char1465 (    struct Char_65  c1966 ,    uint8_t *  buf1968 ) {
    struct CharDestructured_337  dref1969 = ( (  destructure339 ) ( (  c1966 ) ) );
    if ( dref1969.tag == CharDestructured_337_Ref_t ) {
        return ( (struct Slice_11) { .f_ptr = ( ( dref1969 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1969 .stuff .CharDestructured_337_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1969.tag == CharDestructured_337_Scalar_t ) {
            if ( (  cmp170 ( ( ( dref1969 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) , (  from_dash_integral165 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1466 = ( (  from_dash_string57 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1466);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            (*  buf1968 ) = ( (  u32_dash_u8144 ) ( ( ( dref1969 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_11) { .f_ptr = (  buf1968 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_8   write_dash_char1461 (   struct env60* env ,    struct StrBuilder_62 *  builder2804 ,    struct Char_65  c2806 ) {
    struct envunion61  temp1462 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_11  ) )write_dash_slice1463 , .env =  env->envinst58 } );
    uint8_t  temp1468;
    uint8_t  temp1467 = (  temp1468 );
    ( temp1462.fun ( &temp1462.env ,  (  builder2804 ) ,  ( (  from_dash_char1465 ) ( (  c2806 ) ,  ( &temp1467 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1459 (   struct env1435* env ,    struct Char_65  c2813 ) {
    struct envunion64  temp1460 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1460.fun ( &temp1460.env ,  ( env->builder2809 ) ,  (  c2813 ) ) );
}

static  enum Unit_8   write1430 (   struct env67* env ,    struct StrBuilder_62 *  builder2809 ,    struct StrConcat_83  s2811 ) {
    struct env1435 envinst1435 = {
        .builder2809 =  builder2809 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1431 ) ( ( (  chars1452 ) ( (  s2811 ) ) ) ,  ( (struct envunion1436){ .fun = (  enum Unit_8  (*) (  struct env1435*  ,    struct Char_65  ) )lam1459 , .env =  envinst1435 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1472 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice1471 (    struct Slice_11  s1957 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr1472 ) ( ( (  s1957 ) .f_ptr ) ) ) , .f_count = ( (  s1957 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1470 (    struct StrBuilder_62 *  builder2847 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1471 ) ( ( (  subslice466 ) ( ( ( ( * (  builder2847 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2847 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1426 (   struct env81* env ,    struct StrConcat_83  s2867 ,    enum CAllocator_10  al2869 ) {
    struct StrBuilder_62  temp1427 = ( (  mk1428 ) ( (  al2869 ) ) );
    struct StrBuilder_62 *  sb2870 = ( &temp1427 );
    struct envunion82  temp1429 = ( (struct envunion82){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrConcat_83  ) )write1430 , .env =  env->envinst67 } );
    ( temp1429.fun ( &temp1429.env ,  (  sb2870 ) ,  (  s2867 ) ) );
    struct envunion76  temp1469 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    ( temp1469.fun ( &temp1469.env ,  (  sb2870 ) ,  ( (  nullchar544 ) ( ) ) ) );
    struct StrView_27  dynstr2871 = ( (  as_dash_str1470 ) ( (  sb2870 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2871 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub289 ( ( ( (  dynstr2871 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1424 (   struct env239* env ,    struct Editor_248 *  ed4477 ,    struct StrConcat_83  s4479 ) {
    ( (  reset_dash_msg1079 ) ( (  ed4477 ) ) );
    struct envunion240  temp1425 = ( (struct envunion240){ .fun = (  struct StrView_27  (*) (  struct env81*  ,    struct StrConcat_83  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1426 , .env =  env->envinst81 } );
    (*  ed4477 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1425.fun ( &temp1425.env ,  (  s4479 ) ,  ( ( * (  ed4477 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1475 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  );
    struct env213 env;
};

struct env1474 {
    ;
    ;
    ;
    ;
    ;
    struct env213 envinst213;
    ;
    ;
    struct Editor_248 *  ed4537;
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

static  enum Unit_8   if_dash_just1473 (    struct Maybe_80  x1309 ,   struct envunion1476  fun1311 ) {
    struct Maybe_80  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_80_Just_t ) {
        struct envunion1476  temp1477 = (  fun1311 );
        ( temp1477.fun ( &temp1477.env ,  ( dref1312 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1479 (    struct Pane_219 *  pane4288 ) {
    return ( {  struct Maybe_34  dref4289 = ( ( * (  pane4288 ) ) .f_sel ) ; dref4289.tag == Maybe_34_Just_t ? ( (  max556 ) ( ( ( * (  pane4288 ) ) .f_cursor ) ,  ( dref4289 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4288 ) ) .f_cursor ) ; } );
}

static  struct StrView_27   own1480 (    struct StrView_27  x1269 ) {
    return (  x1269 );
}

static  uint8_t   last1481 (    struct Slice_11  s1960 ) {
    if ( (  eq399 ( ( (  s1960 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get474 ( (  s1960 ) , (  op_dash_sub289 ( ( (  s1960 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1482 (    int32_t  x1370 ,    int32_t  mn1372 ,    int32_t  mx1374 ) {
    if ( (  cmp157 ( (  x1370 ) , (  mn1372 ) ) == 0 ) ) {
        return (  mn1372 );
    } else {
        if ( (  cmp157 ( (  x1370 ) , (  mx1374 ) ) == 2 ) ) {
            return (  mx1374 );
        } else {
            return (  x1370 );
        }
    }
}

struct envunion1485 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  );
    struct env213 env;
};

static  enum Unit_8   lam1478 (   struct env1474* env ,    struct StrView_27  cp4548 ) {
    struct Pos_26  start4549 = ( (  max_dash_pos1479 ) ( ( (  pane1134 ) ( ( env->ed4537 ) ) ) ) );
    struct StrView_27  cp4550 = ( (  own1480 ) ( (  cp4548 ) ) );
    if ( (  eq303 ( ( (  last1481 ) ( ( (  cp4550 ) .f_contents ) ) ) , ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        int32_t  max_dash_lines4551 = ( (  num_dash_lines1137 ) ( ( ( * ( (  pane1134 ) ( ( env->ed4537 ) ) ) ) .f_buf ) ) );
        struct Pos_26  start4552 = ( (struct Pos_26) { .f_line = ( (  clamp1482 ) ( (  op_dash_add159 ( ( (  start4549 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  max_dash_lines4551 ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
        if ( (  eq558 ( ( (  start4552 ) .f_line ) , (  max_dash_lines4551 ) ) ) ) {
            cp4550 = ( (  byte_dash_substr484 ) ( (  cp4550 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub289 ( ( ( (  cp4550 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
        struct envunion1475  temp1483 = ( (struct envunion1475){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
        ( temp1483.fun ( &temp1483.env ,  ( (  pane1134 ) ( ( env->ed4537 ) ) ) ,  ( ( Tuple2_230_Tuple2 ) ( (  start4552 ) ,  (  start4552 ) ) ) ,  (  cp4550 ) ) );
    } else {
        struct Pos_26  start4553 = ( (  right_dash_pos1136 ) ( ( ( ( * ( env->ed4537 ) ) .f_pane ) .f_buf ) ,  (  start4549 ) ) );
        struct envunion1485  temp1484 = ( (struct envunion1485){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
        ( temp1484.fun ( &temp1484.env ,  ( (  pane1134 ) ( ( env->ed4537 ) ) ) ,  ( ( Tuple2_230_Tuple2 ) ( (  start4553 ) ,  (  start4553 ) ) ) ,  (  cp4550 ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1488 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  );
    struct env213 env;
};

struct env1487 {
    struct Editor_248 *  ed4537;
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

static  enum Unit_8   if_dash_just1486 (    struct Maybe_80  x1309 ,   struct envunion1489  fun1311 ) {
    struct Maybe_80  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_80_Just_t ) {
        struct envunion1489  temp1490 = (  fun1311 );
        ( temp1490.fun ( &temp1490.env ,  ( dref1312 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1492 (    struct Pane_219 *  pane4283 ) {
    return ( {  struct Maybe_34  dref4284 = ( ( * (  pane4283 ) ) .f_sel ) ; dref4284.tag == Maybe_34_Just_t ? ( (  min554 ) ( ( ( * (  pane4283 ) ) .f_cursor ) ,  ( dref4284 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4283 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1491 (   struct env1487* env ,    struct StrView_27  cp4555 ) {
    struct Pos_26  start4556 = ( (  min_dash_pos1492 ) ( ( (  pane1134 ) ( ( env->ed4537 ) ) ) ) );
    if ( (  eq303 ( ( (  last1481 ) ( ( (  cp4555 ) .f_contents ) ) ) , ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1493 = (  start4556 );
        temp1493 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4556 = ( temp1493 );
    }
    struct envunion1488  temp1494 = ( (struct envunion1488){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
    ( temp1494.fun ( &temp1494.env ,  ( (  pane1134 ) ( ( env->ed4537 ) ) ) ,  ( ( Tuple2_230_Tuple2 ) ( (  start4556 ) ,  (  start4556 ) ) ) ,  (  cp4555 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1497 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  );
    struct env213 env;
};

struct env1496 {
    struct Editor_248 *  ed4537;
    ;
    ;
    ;
    ;
    struct env213 envinst213;
    ;
};

struct envunion1498 {
    enum Unit_8  (*fun) (  struct env1496*  ,    struct StrView_27  );
    struct env1496 env;
};

static  enum Unit_8   if_dash_just1495 (    struct Maybe_80  x1309 ,   struct envunion1498  fun1311 ) {
    struct Maybe_80  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_80_Just_t ) {
        struct envunion1498  temp1499 = (  fun1311 );
        ( temp1499.fun ( &temp1499.env ,  ( dref1312 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1500 (   struct env1496* env ,    struct StrView_27  cp4558 ) {
    struct Pos_26  start4559 = ( (  min_dash_pos1492 ) ( ( (  pane1134 ) ( ( env->ed4537 ) ) ) ) );
    struct Pos_26  end4560 = ( (  max_dash_pos1479 ) ( ( (  pane1134 ) ( ( env->ed4537 ) ) ) ) );
    struct envunion1497  temp1501 = ( (struct envunion1497){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
    struct Pos_26  temp1502 = (  end4560 );
    temp1502 .  f_bi = (  op_dash_add159 ( ( (  end4560 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( temp1501.fun ( &temp1501.env ,  ( (  pane1134 ) ( ( env->ed4537 ) ) ) ,  ( ( Tuple2_230_Tuple2 ) ( (  start4559 ) ,  ( temp1502 ) ) ) ,  (  cp4558 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1503 (    struct Pane_219 *  pane4302 ) {
    struct Pos_26  min_dash_pos4303 = ( (  min_dash_pos1492 ) ( (  pane4302 ) ) );
    struct Pos_26  max_dash_pos4304 = ( (  max_dash_pos1479 ) ( (  pane4302 ) ) );
    int32_t  max_dash_pos_dash_max4305 = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  pane4302 ) ) .f_buf ) ,  ( (  max_dash_pos4304 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq558 ( ( (  min_dash_pos4303 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq558 ( ( (  max_dash_pos4304 ) .f_bi ) , (  max_dash_pos_dash_max4305 ) ) ) ) ) ) {
        struct Pos_26  temp1504 = (  min_dash_pos4303 );
        temp1504 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4302 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1504 ) ) );
        struct Pos_26  temp1505 = (  max_dash_pos4304 );
        temp1505 .  f_bi = (  max_dash_pos_dash_max4305 );
        (*  pane4302 ) .f_cursor = ( temp1505 );
    } else {
        if ( (  cmp157 ( (  op_dash_add159 ( ( (  max_dash_pos4304 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1137 ) ( ( ( * (  pane4302 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1506 = (  min_dash_pos4303 );
        temp1506 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4302 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1506 ) ) );
        int32_t  next_dash_line4306 = (  op_dash_add159 ( ( (  max_dash_pos4304 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4302 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4306 ) , .f_bi = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  pane4302 ) ) .f_buf ) ,  (  next_dash_line4306 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1507 (    struct Maybe_34  m1282 ) {
    struct Maybe_34  dref1283 = (  m1282 );
    if ( dref1283.tag == Maybe_34_None_t ) {
        return ( true );
    }
    else {
        if ( dref1283.tag == Maybe_34_Just_t ) {
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
            struct Tuple2_230  field0;
        } Maybe_1509_Just_s;
    } stuff;
};

static struct Maybe_1509 Maybe_1509_Just (  struct Tuple2_230  field0 ) {
    return ( struct Maybe_1509 ) { .tag = Maybe_1509_Just_t, .stuff = { .Maybe_1509_Just_s = { .field0 = field0 } } };
};

struct env1511 {
    ;
    ;
    struct Pane_219 *  pane4410;
    ;
    ;
    struct StrView_27  query4414;
};

struct envunion1513 {
    struct Maybe_246  (*fun) (  struct env1511*  ,    struct Pos_26  );
    struct env1511 env;
};

static  struct Maybe_246   find_dash_slice1515 (    struct Slice_11  haystack1937 ,    struct Slice_11  needle1939 ) {
    struct RangeIter_153  temp1516 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( ( (  haystack1937 ) .f_count ) ) ) , ( (  size_dash_i32329 ) ( ( (  needle1939 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1517 =  next156 (&temp1516);
        if (  __cond1517 .tag == 0 ) {
            break;
        }
        int32_t  i1941 =  __cond1517 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq486 ( ( (  subslice466 ) ( (  haystack1937 ) ,  ( (  i32_dash_size412 ) ( (  i1941 ) ) ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( (  i1941 ) ) ) , ( (  needle1939 ) .f_count ) ) ) ) ) , (  needle1939 ) ) ) ) {
            return ( ( Maybe_246_Just ) ( ( (  i32_dash_size412 ) ( (  i1941 ) ) ) ) );
        }
    }
    return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
}

static  struct Maybe_246   search_dash_on_dash_line1514 (   struct env1511* env ,    struct Pos_26  pos4417 ) {
    return ( (  find_dash_slice1515 ) ( ( ( (  byte_dash_substr_dash_from464 ) ( ( (  line1097 ) ( ( ( * ( env->pane4410 ) ) .f_buf ) ,  ( (  pos4417 ) .f_line ) ) ) ,  ( (  i32_dash_size412 ) ( ( (  pos4417 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4414 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1523 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1524 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1522 (    int32_t  l1247 ,    int32_t  d1249 ) {
    int32_t  r1250 = (  op_dash_div1523 ( (  l1247 ) , (  d1249 ) ) );
    int32_t  m1251 = (  op_dash_sub164 ( (  l1247 ) , (  op_dash_mul1524 ( (  r1250 ) , (  d1249 ) ) ) ) );
    if ( (  cmp157 ( (  m1251 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add159 ( (  d1249 ) , (  m1251 ) ) );
    } else {
        return (  m1251 );
    }
}

struct envunion1526 {
    struct Maybe_246  (*fun) (  struct env1511*  ,    struct Pos_26  );
    struct env1511 env;
};

static  struct Maybe_1509   search_dash_from1510 (    struct Pane_219 *  pane4410 ,    struct Pos_26  pos4412 ,    struct StrView_27  query4414 ) {
    struct env1511 envinst1511 = {
        .pane4410 =  pane4410 ,
        .query4414 =  query4414 ,
    };
    struct envunion1513  temp1512 = ( (struct envunion1513){ .fun = (  struct Maybe_246  (*) (  struct env1511*  ,    struct Pos_26  ) )search_dash_on_dash_line1514 , .env =  envinst1511 } );
    struct Maybe_246  dref4418 = ( temp1512.fun ( &temp1512.env ,  (  pos4412 ) ) );
    if ( dref4418.tag == Maybe_246_Just_t ) {
        struct Pos_26  temp1518 = (  pos4412 );
        temp1518 .  f_bi = (  op_dash_add159 ( ( (  pos4412 ) .f_bi ) , ( (  size_dash_i32329 ) ( ( dref4418 .stuff .Maybe_246_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4420 = ( temp1518 );
        struct Pos_26  temp1519 = (  pos4412 );
        temp1519 .  f_bi = (  op_dash_sub164 ( (  op_dash_add159 ( ( (  pos4412 ) .f_bi ) , ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4418 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4414 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4421 = ( temp1519 );
        return ( ( Maybe_1509_Just ) ( ( ( Tuple2_230_Tuple2 ) ( (  sel_dash_pos4420 ) ,  (  cur_dash_pos4421 ) ) ) ) );
    }
    else {
        if ( dref4418.tag == Maybe_246_None_t ) {
            int32_t  num_dash_lines4422 = ( (  num_dash_lines1137 ) ( ( ( * (  pane4410 ) ) .f_buf ) ) );
            struct RangeIter_153  temp1520 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4422 ) ) ) );
            while (true) {
                struct Maybe_155  __cond1521 =  next156 (&temp1520);
                if (  __cond1521 .tag == 0 ) {
                    break;
                }
                int32_t  i4424 =  __cond1521 .stuff .Maybe_155_Just_s .field0;
                int32_t  line4425 = ( (  mod1522 ) ( (  op_dash_add159 ( ( (  pos4412 ) .f_line ) , (  i4424 ) ) ) ,  (  num_dash_lines4422 ) ) );
                struct envunion1526  temp1525 = ( (struct envunion1526){ .fun = (  struct Maybe_246  (*) (  struct env1511*  ,    struct Pos_26  ) )search_dash_on_dash_line1514 , .env =  envinst1511 } );
                struct Maybe_246  dref4426 = ( temp1525.fun ( &temp1525.env ,  ( (struct Pos_26) { .f_line = (  line4425 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4426.tag == Maybe_246_Just_t ) {
                    struct Pos_26  sel_dash_pos4428 = ( (struct Pos_26) { .f_line = (  line4425 ) , .f_bi = ( (  size_dash_i32329 ) ( ( dref4426 .stuff .Maybe_246_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4429 = ( (struct Pos_26) { .f_line = (  line4425 ) , .f_bi = (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4426 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4414 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1509_Just ) ( ( ( Tuple2_230_Tuple2 ) ( (  sel_dash_pos4428 ) ,  (  cur_dash_pos4429 ) ) ) ) );
                }
                else {
                    if ( dref4426.tag == Maybe_246_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1509) { .tag = Maybe_1509_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1508 (    struct Editor_248 *  ed4521 ) {
    struct Maybe_80  dref4522 = ( ( * (  ed4521 ) ) .f_search_dash_term );
    if ( dref4522.tag == Maybe_80_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4522.tag == Maybe_80_Just_t ) {
            struct Maybe_1509  dref4524 = ( (  search_dash_from1510 ) ( ( (  pane1134 ) ( (  ed4521 ) ) ) ,  ( (  max_dash_pos1479 ) ( ( (  pane1134 ) ( (  ed4521 ) ) ) ) ) ,  ( dref4522 .stuff .Maybe_80_Just_s .field0 ) ) );
            if ( dref4524.tag == Maybe_1509_None_t ) {
            }
            else {
                if ( dref4524.tag == Maybe_1509_Just_t ) {
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4521 ) ) ) ,  ( dref4524 .stuff .Maybe_1509_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4524 .stuff .Maybe_1509_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_246   find_dash_last_dash_occurence_dash_of_dash_slice1529 (    struct Slice_11  haystack1944 ,    struct Slice_11  needle1946 ) {
    struct Maybe_246  occ1947 = ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    struct RangeIter_153  temp1530 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( ( (  haystack1944 ) .f_count ) ) ) , ( (  size_dash_i32329 ) ( ( (  needle1946 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1531 =  next156 (&temp1530);
        if (  __cond1531 .tag == 0 ) {
            break;
        }
        int32_t  i1949 =  __cond1531 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq486 ( ( (  subslice466 ) ( (  haystack1944 ) ,  ( (  i32_dash_size412 ) ( (  i1949 ) ) ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( (  i1949 ) ) ) , ( (  needle1946 ) .f_count ) ) ) ) ) , (  needle1946 ) ) ) ) {
            occ1947 = ( ( Maybe_246_Just ) ( ( (  i32_dash_size412 ) ( (  i1949 ) ) ) ) );
        }
    }
    return (  occ1947 );
}

static  struct Maybe_1509   search_dash_back1528 (    struct Pane_219 *  pane4432 ,    struct Pos_26  pos4434 ,    struct StrView_27  query4436 ) {
    struct Maybe_246  dref4437 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1529 ) ( ( ( (  byte_dash_substr484 ) ( ( (  line1097 ) ( ( ( * (  pane4432 ) ) .f_buf ) ,  ( (  pos4434 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( ( (  pos4434 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4436 ) .f_contents ) ) );
    if ( dref4437.tag == Maybe_246_Just_t ) {
        struct Pos_26  temp1532 = (  pos4434 );
        temp1532 .  f_bi = ( (  size_dash_i32329 ) ( ( dref4437 .stuff .Maybe_246_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4439 = ( temp1532 );
        struct Pos_26  temp1533 = (  pos4434 );
        temp1533 .  f_bi = (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4437 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4436 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4440 = ( temp1533 );
        return ( ( Maybe_1509_Just ) ( ( ( Tuple2_230_Tuple2 ) ( (  sel_dash_pos4439 ) ,  (  cur_dash_pos4440 ) ) ) ) );
    }
    else {
        if ( dref4437.tag == Maybe_246_None_t ) {
            int32_t  num_dash_lines4441 = ( (  num_dash_lines1137 ) ( ( ( * (  pane4432 ) ) .f_buf ) ) );
            struct RangeIter_153  temp1534 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4441 ) ) ) );
            while (true) {
                struct Maybe_155  __cond1535 =  next156 (&temp1534);
                if (  __cond1535 .tag == 0 ) {
                    break;
                }
                int32_t  i4443 =  __cond1535 .stuff .Maybe_155_Just_s .field0;
                int32_t  line4444 = ( (  mod1522 ) ( (  op_dash_sub164 ( ( (  pos4434 ) .f_line ) , (  i4443 ) ) ) ,  (  num_dash_lines4441 ) ) );
                struct Maybe_246  dref4445 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1529 ) ( ( ( (  line1097 ) ( ( ( * (  pane4432 ) ) .f_buf ) ,  (  line4444 ) ) ) .f_contents ) ,  ( (  query4436 ) .f_contents ) ) );
                if ( dref4445.tag == Maybe_246_Just_t ) {
                    struct Pos_26  sel_dash_pos4447 = ( (struct Pos_26) { .f_line = (  line4444 ) , .f_bi = ( (  size_dash_i32329 ) ( ( dref4445 .stuff .Maybe_246_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4448 = ( (struct Pos_26) { .f_line = (  line4444 ) , .f_bi = (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4445 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4436 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1509_Just ) ( ( ( Tuple2_230_Tuple2 ) ( (  sel_dash_pos4447 ) ,  (  cur_dash_pos4448 ) ) ) ) );
                }
                else {
                    if ( dref4445.tag == Maybe_246_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1509) { .tag = Maybe_1509_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1527 (    struct Editor_248 *  ed4529 ) {
    struct Maybe_80  dref4530 = ( ( * (  ed4529 ) ) .f_search_dash_term );
    if ( dref4530.tag == Maybe_80_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4530.tag == Maybe_80_Just_t ) {
            struct Maybe_1509  dref4532 = ( (  search_dash_back1528 ) ( ( (  pane1134 ) ( (  ed4529 ) ) ) ,  ( (  min_dash_pos1492 ) ( ( (  pane1134 ) ( (  ed4529 ) ) ) ) ) ,  ( dref4530 .stuff .Maybe_80_Just_s .field0 ) ) );
            if ( dref4532.tag == Maybe_1509_None_t ) {
            }
            else {
                if ( dref4532.tag == Maybe_1509_Just_t ) {
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4529 ) ) ) ,  ( dref4532 .stuff .Maybe_1509_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4532 .stuff .Maybe_1509_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1539 (   struct env132* env ,    struct TextBuf_104 *  self3945 ,    struct Cursors_33  before_dash_cursors3947 ) {
    struct Actions_105 *  actions3948 = ( & ( ( * (  self3945 ) ) .f_actions ) );
    ( (  trim_dash_actions1169 ) ( (  actions3948 ) ) );
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3945 ) ) );
    ( (  assert667 ) ( (  eq1238 ( ( ( ( * (  self3945 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_106_NoChangeset ) ) ) ,  ( (  from_dash_string199 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al3949 = ( ( * (  self3945 ) ) .f_al );
    struct Changeset_32  temp1540 = ( (struct Changeset_32) { .f_parts = ( (  mk1267 ) ( (  al3949 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3947 ) } );
    struct Changeset_32 *  changeset3950 = ( &temp1540 );
    struct envunion133  temp1541 = ( (struct envunion133){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1278 , .env =  env->envinst28 } );
    ( temp1541.fun ( &temp1541.env ,  ( & ( ( * (  actions3948 ) ) .f_list ) ) ,  ( * (  changeset3950 ) ) ) );
    (*  actions3948 ) .f_input_dash_changeset = ( ChangesetInputType_106_CustomChangeset );
    (*  actions3948 ) .f_cur = (  op_dash_add311 ( ( ( * (  actions3948 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1195   head1547 (    struct List_23  it1160 ) {
    struct SliceIter_1188  temp1548 = ( (  into_dash_iter1190 ) ( (  it1160 ) ) );
    return ( (  next1196 ) ( ( &temp1548 ) ) );
}

static  bool   null1546 (    struct List_23  it1169 ) {
    struct Maybe_1195  dref1170 = ( (  head1547 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_1195_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1545 (    struct TextBuf_104 *  self3953 ) {
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3953 ) ) );
    struct Actions_105 *  actions3954 = ( & ( ( * (  self3953 ) ) .f_actions ) );
    if ( ( (  null1546 ) ( ( ( * ( (  last_dash_ptr1240 ) ( ( (  to_dash_slice1242 ) ( ( ( * (  actions3954 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3954 ) .f_cur = (  op_dash_sub289 ( ( ( * (  actions3954 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3954 ) .f_input_dash_changeset = ( ChangesetInputType_106_NoChangeset );
        ( (  trim_dash_actions1169 ) ( (  actions3954 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1550 (    struct Maybe_34  x1293 ,    struct Pos_26 (*  fun1295 )(    struct Pos_26  ) ) {
    struct Maybe_34  dref1296 = (  x1293 );
    if ( dref1296.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1296.tag == Maybe_34_Just_t ) {
            return ( ( Maybe_34_Just ) ( ( (  fun1295 ) ( ( dref1296 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1551 (    struct Pos_26  sel4377 ) {
    struct Pos_26  temp1552 = (  sel4377 );
    temp1552 .  f_bi = (  op_dash_add159 ( ( (  sel4377 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1552 );
}

static  enum Unit_8   indent_dash_selection1537 (   struct env217* env ,    struct Pane_219 *  self4373 ) {
    struct envunion222  temp1538 = ( (struct envunion222){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_104 *  ,    struct Cursors_33  ) )begin_dash_changeset1539 , .env =  env->envinst132 } );
    ( temp1538.fun ( &temp1538.env ,  ( ( * (  self4373 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4373 ) ) .f_cursor ) , .f_sel = ( ( * (  self4373 ) ) .f_sel ) } ) ) );
    struct RangeIter_153  temp1542 =  into_dash_iter154 ( ( (  to163 ) ( ( ( (  min_dash_pos1492 ) ( (  self4373 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1479 ) ( (  self4373 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_155  __cond1543 =  next156 (&temp1542);
        if (  __cond1543 .tag == 0 ) {
            break;
        }
        int32_t  line4375 =  __cond1543 .stuff .Maybe_155_Just_s .field0;
        struct envunion218  temp1544 = ( (struct envunion218){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at1309 , .env =  env->envinst215 } );
        ( temp1544.fun ( &temp1544.env ,  (  self4373 ) ,  (  line4375 ) ) );
    }
    ( (  end_dash_changeset1545 ) ( ( ( * (  self4373 ) ) .f_buf ) ) );
    struct Pos_26  temp1549 = ( ( * (  self4373 ) ) .f_cursor );
    temp1549 .  f_bi = (  op_dash_add159 ( ( ( ( * (  self4373 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4373 ) ,  ( temp1549 ) ,  ( (  fmap_dash_maybe1550 ) ( ( ( * (  self4373 ) ) .f_sel ) ,  (  lam1551 ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1563 {
    ;
    bool  last_dash_char_dash_was_dash_tab4382;
    ;
};

struct envunion1564 {
    struct Pos_26  (*fun) (  struct env1563*  ,    struct Pos_26  );
    struct env1563 env;
};

static  struct Maybe_34   fmap_dash_maybe1562 (    struct Maybe_34  x1293 ,   struct envunion1564  fun1295 ) {
    struct Maybe_34  dref1296 = (  x1293 );
    if ( dref1296.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1296.tag == Maybe_34_Just_t ) {
            struct envunion1564  temp1565 = (  fun1295 );
            return ( ( Maybe_34_Just ) ( ( temp1565.fun ( &temp1565.env ,  ( dref1296 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1566 (   struct env1563* env ,    struct Pos_26  sel4386 ) {
    struct Pos_26  temp1567 = (  sel4386 );
    temp1567 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4382 ) ? (  op_dash_sub164 ( ( (  sel4386 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4386 ) .f_bi ) );
    return ( temp1567 );
}

static  enum Unit_8   dedent_dash_selection1554 (   struct env223* env ,    struct Pane_219 *  self4380 ) {
    struct envunion224  temp1555 = ( (struct envunion224){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_104 *  ,    struct Cursors_33  ) )begin_dash_changeset1539 , .env =  env->envinst132 } );
    ( temp1555.fun ( &temp1555.env ,  ( ( * (  self4380 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4380 ) ) .f_cursor ) , .f_sel = ( ( * (  self4380 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1556 = ( (  min_dash_pos1492 ) ( (  self4380 ) ) );
    temp1556 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4381 = (  eq469 ( ( (  char_dash_at1341 ) ( (  self4380 ) ,  ( temp1556 ) ) ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1557 = ( (  max_dash_pos1479 ) ( (  self4380 ) ) );
    temp1557 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4382 = (  eq469 ( ( (  char_dash_at1341 ) ( (  self4380 ) ,  ( temp1557 ) ) ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_153  temp1558 =  into_dash_iter154 ( ( (  to163 ) ( ( ( (  min_dash_pos1492 ) ( (  self4380 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1479 ) ( (  self4380 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_155  __cond1559 =  next156 (&temp1558);
        if (  __cond1559 .tag == 0 ) {
            break;
        }
        int32_t  line4384 =  __cond1559 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq469 ( ( (  char_dash_at1341 ) ( (  self4380 ) ,  ( (struct Pos_26) { .f_line = (  line4384 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion225  temp1560 = ( (struct envunion225){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
            ( temp1560.fun ( &temp1560.env ,  ( ( * (  self4380 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4384 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4384 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1545 ) ( ( ( * (  self4380 ) ) .f_buf ) ) );
    struct Pos_26  temp1561 = ( ( * (  self4380 ) ) .f_cursor );
    temp1561 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4381 ) ? (  op_dash_sub164 ( ( ( ( * (  self4380 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4380 ) ) .f_cursor ) .f_bi ) );
    struct env1563 envinst1563 = {
        .last_dash_char_dash_was_dash_tab4382 =  last_dash_char_dash_was_dash_tab4382 ,
    };
    ( (  set_dash_cursors1091 ) ( (  self4380 ) ,  ( temp1561 ) ,  ( (  fmap_dash_maybe1562 ) ( ( ( * (  self4380 ) ) .f_sel ) ,  ( (struct envunion1564){ .fun = (  struct Pos_26  (*) (  struct env1563*  ,    struct Pos_26  ) )lam1566 , .env =  envinst1563 } ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1571 (  ) {
    int32_t  temp1572;
    return (  temp1572 );
}

static  int32_t   or_dash_fail1570 (    struct Maybe_155  x1744 ,    struct StrView_27  errmsg1746 ) {
    struct Maybe_155  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_155_None_t ) {
        ( (  panic1212 ) ( (  errmsg1746 ) ) );
        return ( (  undefined1571 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_155_Just_t ) {
            return ( dref1747 .stuff .Maybe_155_Just_s .field0 );
        }
    }
}

struct env1575 {
    ;
    struct Pane_219 *  self4395;
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

static  struct Map_1574   into_dash_iter1578 (    struct Map_1574  self797 ) {
    return (  self797 );
}

static  struct Maybe_155   next1579 (    struct Map_1574 *  dref799 ) {
    struct Maybe_155  dref802 = ( (  next156 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_155_None_t ) {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_155_Just_t ) {
            struct envunion1576  temp1580 = ( (* dref799 ) .field1 );
            return ( ( Maybe_155_Just ) ( ( temp1580.fun ( &temp1580.env ,  ( dref802 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_155   reduce1577 (    struct Map_1574  iterable1111 ,    struct Maybe_155  base1113 ,    struct Maybe_155 (*  fun1115 )(    int32_t  ,    struct Maybe_155  ) ) {
    struct Maybe_155  x1116 = (  base1113 );
    struct Map_1574  it1117 = ( (  into_dash_iter1578 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1118 = ( (  next1579 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_155_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_155_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1116 ) ) );
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
    int32_t  x1261;
};

struct envunion1586 {
    struct Maybe_155  (*fun) (  struct env1585*  ,    int32_t  );
    struct env1585 env;
};

static  struct Maybe_155   maybe1584 (    struct Maybe_155  x1300 ,   struct envunion1586  fun1302 ,    struct Maybe_155  default1304 ) {
    struct envunion1586  temp1587 = (  fun1302 );
    return ( {  struct Maybe_155  dref1305 = (  x1300 ) ; dref1305.tag == Maybe_155_Just_t ? ( temp1587.fun ( &temp1587.env ,  ( dref1305 .stuff .Maybe_155_Just_s .field0 ) ) ) : (  default1304 ) ; } );
}

static  struct Maybe_155   lam1588 (   struct env1585* env ,    int32_t  lm1330 ) {
    return ( ( Maybe_155_Just ) ( ( (  min658 ) ( (  lm1330 ) ,  ( env->x1261 ) ) ) ) );
}

static  struct Maybe_155   lam1583 (    int32_t  x1261 ,    struct Maybe_155  last_dash_min1263 ) {
    struct env1585 envinst1585 = {
        .x1261 =  x1261 ,
    };
    return ( (  maybe1584 ) ( (  last_dash_min1263 ) ,  ( (struct envunion1586){ .fun = (  struct Maybe_155  (*) (  struct env1585*  ,    int32_t  ) )lam1588 , .env =  envinst1585 } ) ,  ( ( Maybe_155_Just ) ( (  x1261 ) ) ) ) );
}

static  struct Maybe_155   minimum1573 (    struct Map_1574  it1259 ) {
    return ( (  reduce1577 ) ( (  it1259 ) ,  ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) ,  (  lam1583 ) ) );
}

static  struct Map_1574   map1589 (    struct Range_150  iterable806 ,   struct envunion1576  fun808 ) {
    struct RangeIter_153  it809 = ( (  into_dash_iter154 ) ( (  iterable806 ) ) );
    return ( ( Map_1574_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  int32_t   lam1590 (   struct env1575* env ,    int32_t  ln4399 ) {
    return ( (  indent_dash_at_dash_line1146 ) ( ( env->self4395 ) ,  (  ln4399 ) ) );
}

struct env1592 {
    struct Pane_219 *  self4395;
    ;
    ;
};

struct envunion1593 {
    bool  (*fun) (  struct env1592*  ,    int32_t  );
    struct env1592 env;
};

struct env1595 {
    struct envunion1593  fun1144;
};

struct envunion1596 {
    bool  (*fun) (  struct env1595*  ,    int32_t  ,    bool  );
    struct env1595 env;
};

static  bool   reduce1594 (    struct Range_150  iterable1111 ,    bool  base1113 ,   struct envunion1596  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct RangeIter_153  it1117 = ( (  into_dash_iter154 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1118 = ( (  next156 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_155_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_155_Just_t ) {
                struct envunion1596  temp1597 = (  fun1115 );
                x1116 = ( temp1597.fun ( &temp1597.env ,  ( dref1118 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  bool   lam1600 (   struct env1595* env ,    int32_t  e1146 ,    bool  x1148 ) {
    struct envunion1593  temp1601 = ( env->fun1144 );
    return ( ( temp1601.fun ( &temp1601.env ,  (  e1146 ) ) ) && (  x1148 ) );
}

static  bool   all1591 (    struct Range_150  it1142 ,   struct envunion1593  fun1144 ) {
    struct env1595 envinst1595 = {
        .fun1144 =  fun1144 ,
    };
    return ( (  reduce1594 ) ( (  it1142 ) ,  ( true ) ,  ( (struct envunion1596){ .fun = (  bool  (*) (  struct env1595*  ,    int32_t  ,    bool  ) )lam1600 , .env =  envinst1595 } ) ) );
}

static  bool   is_dash_just1603 (    struct Maybe_1509  m1278 ) {
    struct Maybe_1509  dref1279 = (  m1278 );
    if ( dref1279.tag == Maybe_1509_None_t ) {
        return ( false );
    }
    else {
        if ( dref1279.tag == Maybe_1509_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1605 (    struct Char_65  c4327 ) {
    return ( ( !  eq469 ( (  c4327 ) , ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1340 ) ( (  c4327 ) ) ) );
}

static  struct Maybe_1509   line_dash_begins_dash_with_dash_comment1604 (    struct Pane_219 *  self4321 ,    int32_t  line4323 ) {
    int32_t  indent4324 = ( (  indent_dash_at_dash_line1146 ) ( (  self4321 ) ,  (  line4323 ) ) );
    if ( (  eq469 ( ( (  char_dash_at1341 ) ( (  self4321 ) ,  ( (  mk694 ) ( (  line4323 ) ,  (  indent4324 ) ) ) ) ) , ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4325 = (  op_dash_add159 ( (  indent4324 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1605 ) ( ( (  char_dash_at1341 ) ( (  self4321 ) ,  ( (  mk694 ) ( (  line4323 ) ,  (  i4325 ) ) ) ) ) ) ) ) {
            i4325 = (  op_dash_add159 ( (  i4325 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1509_Just ) ( ( ( Tuple2_230_Tuple2 ) ( ( (  mk694 ) ( (  line4323 ) ,  (  indent4324 ) ) ) ,  ( (  mk694 ) ( (  line4323 ) ,  (  i4325 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1509) { .tag = Maybe_1509_None_t } );
    }
}

static  bool   lam1602 (   struct env1592* env ,    int32_t  ln4402 ) {
    return ( (  is_dash_just1603 ) ( ( (  line_dash_begins_dash_with_dash_comment1604 ) ( ( env->self4395 ) ,  (  ln4402 ) ) ) ) );
}

static  struct Tuple2_230   undefined1611 (  ) {
    struct Tuple2_230  temp1612;
    return (  temp1612 );
}

static  struct Tuple2_230   or_dash_fail1610 (    struct Maybe_1509  x1744 ,    struct StrView_27  errmsg1746 ) {
    struct Maybe_1509  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_1509_None_t ) {
        ( (  panic1212 ) ( (  errmsg1746 ) ) );
        return ( (  undefined1611 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_1509_Just_t ) {
            return ( dref1747 .stuff .Maybe_1509_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1569 (   struct env228* env ,    struct Pane_219 *  self4395 ) {
    int32_t  from_dash_line4396 = ( ( (  min_dash_pos1492 ) ( (  self4395 ) ) ) .f_line );
    int32_t  to_dash_line4397 = ( ( (  max_dash_pos1479 ) ( (  self4395 ) ) ) .f_line );
    struct env1575 envinst1575 = {
        .self4395 =  self4395 ,
    };
    int32_t  min_dash_indent4400 = ( (  or_dash_fail1570 ) ( ( (  minimum1573 ) ( ( (  map1589 ) ( ( (  to163 ) ( (  from_dash_line4396 ) ,  (  to_dash_line4397 ) ) ) ,  ( (struct envunion1576){ .fun = (  int32_t  (*) (  struct env1575*  ,    int32_t  ) )lam1590 , .env =  envinst1575 } ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1592 envinst1592 = {
        .self4395 =  self4395 ,
    };
    bool  all_dash_have_dash_comment4403 = ( (  all1591 ) ( ( (  to163 ) ( (  from_dash_line4396 ) ,  (  to_dash_line4397 ) ) ) ,  ( (struct envunion1593){ .fun = (  bool  (*) (  struct env1592*  ,    int32_t  ) )lam1602 , .env =  envinst1592 } ) ) );
    struct envunion231  temp1606 = ( (struct envunion231){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_104 *  ,    struct Cursors_33  ) )begin_dash_changeset1539 , .env =  env->envinst132 } );
    ( temp1606.fun ( &temp1606.env ,  ( ( * (  self4395 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4395 ) ) .f_cursor ) , .f_sel = ( ( * (  self4395 ) ) .f_sel ) } ) ) );
    struct RangeIter_153  temp1607 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_line4396 ) ,  (  to_dash_line4397 ) ) ) );
    while (true) {
        struct Maybe_155  __cond1608 =  next156 (&temp1607);
        if (  __cond1608 .tag == 0 ) {
            break;
        }
        int32_t  line4405 =  __cond1608 .stuff .Maybe_155_Just_s .field0;
        struct Char_65  comment_dash_str4406 = ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4403 ) ) ) {
            ( (  set_dash_cursors1091 ) ( (  self4395 ) ,  ( (  mk694 ) ( (  line4405 ) ,  (  min_dash_indent4400 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
            struct envunion232  temp1609 = ( (struct envunion232){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
            ( temp1609.fun ( &temp1609.env ,  (  self4395 ) ,  ( (  from_dash_string199 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_230  tup4407 = ( (  or_dash_fail1610 ) ( ( (  line_dash_begins_dash_with_dash_comment1604 ) ( (  self4395 ) ,  (  line4405 ) ) ) ,  ( (  from_dash_string199 ) ( ( "(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion229  temp1613 = ( (struct envunion229){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
            ( temp1613.fun ( &temp1613.env ,  (  self4395 ) ,  ( ( Tuple2_230_Tuple2 ) ( ( (  fst1401 ) ( (  tup4407 ) ) ) ,  ( (  snd1402 ) ( (  tup4407 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1545 ) ( ( ( * (  self4395 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1089 (   struct env253* env ,    struct Editor_248 *  ed4537 ,    struct Key_270  key4539 ) {
    struct Key_270  dref4540 = (  key4539 );
    if ( dref4540.tag == Key_270_Char_t ) {
        if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4537 ) .f_running = ( false );
        } else {
            if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1090 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
            } else {
                if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1135 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                } else {
                    if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1138 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1142 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( Mode_220_Insert ) ) );
                            } else {
                                if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1145 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                                    ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( Mode_220_Insert ) ) );
                                } else {
                                    if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1163 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                                        ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( Mode_220_Insert ) ) );
                                    } else {
                                        if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_219 *  pane4542 = ( (  pane1134 ) ( (  ed4537 ) ) );
                                            int32_t  indent4543 = ( (  indent_dash_at_dash_line1146 ) ( (  pane4542 ) ,  ( ( ( * (  pane4542 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1163 ) ( (  pane4542 ) ) );
                                            struct envunion258  temp1165 = ( (struct envunion258){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                                            ( temp1165.fun ( &temp1165.env ,  (  pane4542 ) ,  ( (  from_dash_charlike1229 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1135 ) ( (  pane4542 ) ) );
                                            struct envunion256  temp1304 = ( (struct envunion256){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at_dash_current1305 , .env =  env->envinst226 } );
                                            ( temp1304.fun ( &temp1304.env ,  (  pane4542 ) ,  (  indent4543 ) ) );
                                            ( (  set_dash_mode1143 ) ( (  pane4542 ) ,  ( Mode_220_Insert ) ) );
                                        } else {
                                            if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_219 *  pane4544 = ( (  pane1134 ) ( (  ed4537 ) ) );
                                                int32_t  indent4545 = ( (  indent_dash_at_dash_line1146 ) ( (  pane4544 ) ,  ( ( ( * (  pane4544 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1311 ) ( (  pane4544 ) ) );
                                                struct envunion1314  temp1313 = ( (struct envunion1314){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                                                ( temp1313.fun ( &temp1313.env ,  (  pane4544 ) ,  ( (  from_dash_charlike1229 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1316  temp1315 = ( (struct envunion1316){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at_dash_current1305 , .env =  env->envinst226 } );
                                                ( temp1315.fun ( &temp1315.env ,  (  pane4544 ) ,  (  indent4545 ) ) );
                                                ( (  set_dash_mode1143 ) ( (  pane4544 ) ,  ( Mode_220_Insert ) ) );
                                            } else {
                                                if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1317 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( MoveDirection_1318_MoveFwd ) ,  ( MoveTarget_1319_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1317 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( MoveDirection_1318_MoveFwd ) ,  ( MoveTarget_1319_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1317 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( MoveDirection_1318_MoveBwd ) ,  ( MoveTarget_1319_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion262  temp1353 = ( (struct envunion262){ .fun = (  enum Unit_8  (*) (  struct env211*  ,    struct Pane_219 *  ) )redo1354 , .env =  env->envinst211 } );
                                                                ( temp1353.fun ( &temp1353.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion261  temp1378 = ( (struct envunion261){ .fun = (  enum Unit_8  (*) (  struct env209*  ,    struct Pane_219 *  ) )undo1379 , .env =  env->envinst209 } );
                                                                    ( temp1378.fun ( &temp1378.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion255  temp1396 = ( (struct envunion255){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Editor_248 *  ) )copy_dash_selection_dash_to_dash_clipboard1397 , .env =  env->envinst233 } );
                                                                        ( temp1396.fun ( &temp1396.env ,  (  ed4537 ) ) );
                                                                        struct envunion254  temp1409 = ( (struct envunion254){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
                                                                        ( temp1409.fun ( &temp1409.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( (  selection1398 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( Mode_220_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1418  temp1417 = ( (struct envunion1418){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Editor_248 *  ) )copy_dash_selection_dash_to_dash_clipboard1397 , .env =  env->envinst233 } );
                                                                            ( temp1417.fun ( &temp1417.env ,  (  ed4537 ) ) );
                                                                            struct envunion1420  temp1419 = ( (struct envunion1420){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
                                                                            ( temp1419.fun ( &temp1419.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( (  selection1398 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( Mode_220_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1422  temp1421 = ( (struct envunion1422){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Editor_248 *  ) )copy_dash_selection_dash_to_dash_clipboard1397 , .env =  env->envinst233 } );
                                                                                ( temp1421.fun ( &temp1421.env ,  (  ed4537 ) ) );
                                                                                size_t  bytes_dash_yanked4546 = ( (  num_dash_bytes1130 ) ( ( (  or_dash_else589 ) ( ( ( * (  ed4537 ) ) .f_clipboard ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion257  temp1423 = ( (struct envunion257){ .fun = (  enum Unit_8  (*) (  struct env239*  ,    struct Editor_248 *  ,    struct StrConcat_83  ) )set_dash_msg1424 , .env =  env->envinst239 } );
                                                                                ( temp1423.fun ( &temp1423.env ,  (  ed4537 ) ,  ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4546 ) ) ) ,  ( (  from_dash_string199 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1474 envinst1474 = {
                                                                                        .envinst213 = env->envinst213 ,
                                                                                        .ed4537 =  ed4537 ,
                                                                                    };
                                                                                    ( (  if_dash_just1473 ) ( ( ( * (  ed4537 ) ) .f_clipboard ) ,  ( (struct envunion1476){ .fun = (  enum Unit_8  (*) (  struct env1474*  ,    struct StrView_27  ) )lam1478 , .env =  envinst1474 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1487 envinst1487 = {
                                                                                            .ed4537 =  ed4537 ,
                                                                                            .envinst213 = env->envinst213 ,
                                                                                        };
                                                                                        ( (  if_dash_just1486 ) ( ( ( * (  ed4537 ) ) .f_clipboard ) ,  ( (struct envunion1489){ .fun = (  enum Unit_8  (*) (  struct env1487*  ,    struct StrView_27  ) )lam1491 , .env =  envinst1487 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1496 envinst1496 = {
                                                                                                .ed4537 =  ed4537 ,
                                                                                                .envinst213 = env->envinst213 ,
                                                                                            };
                                                                                            ( (  if_dash_just1495 ) ( ( ( * (  ed4537 ) ) .f_clipboard ) ,  ( (struct envunion1498){ .fun = (  enum Unit_8  (*) (  struct env1496*  ,    struct StrView_27  ) )lam1500 , .env =  envinst1496 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1503 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( Mode_220_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1507 ) ( ( ( ( * (  ed4537 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4537 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4537 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4537 ) .f_mode = ( ( EditorMode_249_Cmd ) ( ( ( * ( (  pane1134 ) ( (  ed4537 ) ) ) ) .f_cursor ) ,  ( (  mk1428 ) ( ( ( * (  ed4537 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4537 ) .f_mode = ( ( EditorMode_249_Search ) ( ( ( * ( (  pane1134 ) ( (  ed4537 ) ) ) ) .f_cursor ) ,  ( (  mk1428 ) ( ( ( * (  ed4537 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1508 ) ( (  ed4537 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1527 ) ( (  ed4537 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion263  temp1536 = ( (struct envunion263){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Pane_219 *  ) )indent_dash_selection1537 , .env =  env->envinst217 } );
                                                                                                                        ( temp1536.fun ( &temp1536.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq936 ( ( dref4540 .stuff .Key_270_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion260  temp1553 = ( (struct envunion260){ .fun = (  enum Unit_8  (*) (  struct env223*  ,    struct Pane_219 *  ) )dedent_dash_selection1554 , .env =  env->envinst223 } );
                                                                                                                            ( temp1553.fun ( &temp1553.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
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
        if ( dref4540.tag == Key_270_Escape_t ) {
            ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( Mode_220_Normal ) ) );
        }
        else {
            if ( dref4540.tag == Key_270_Ctrl_t ) {
                if ( (  eq936 ( ( dref4540 .stuff .Key_270_Ctrl_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion259  temp1568 = ( (struct envunion259){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_219 *  ) )toggle_dash_comment1569 , .env =  env->envinst228 } );
                    ( temp1568.fun ( &temp1568.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                } else {
                    if ( (  eq936 ( ( dref4540 .stuff .Key_270_Ctrl_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1142 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq936 ( ( dref4540 .stuff .Key_270_Ctrl_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1138 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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
    enum Unit_8  (*fun) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_270  );
    struct env253 env;
};

static  enum Unit_8   backspace1619 (   struct env207* env ,    struct Pane_219 *  self4336 ) {
    struct Pos_26  prev_dash_cur4337 = ( ( * (  self4336 ) ) .f_cursor );
    ( (  move_dash_left1090 ) ( (  self4336 ) ) );
    struct envunion208  temp1620 = ( (struct envunion208){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    ( temp1620.fun ( &temp1620.env ,  ( ( * (  self4336 ) ) .f_buf ) ,  ( ( * (  self4336 ) ) .f_cursor ) ,  (  prev_dash_cur4337 ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1622 {
    char _arr [1];
};

static  char *   cast1623 (    struct Array_1622 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_950   as_dash_slice1621 (    struct Array_1622 *  arr2308 ) {
    return ( (struct Slice_950) { .f_ptr = ( (  cast1623 ) ( (  arr2308 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1622   from_dash_listlike1625 (    struct Array_1622  self330 ) {
    return (  self330 );
}

struct envunion1627 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  );
    struct env204 env;
};

struct Scanner_1630 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1630   mk_dash_from_dash_strview1632 (    struct StrView_27  s3231 ) {
    return ( (struct Scanner_1630) { .f_s = (  s3231 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
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

static  struct Map_1637   into_dash_iter1640 (    struct Map_1637  self797 ) {
    return (  self797 );
}

static  struct Maybe_297   next1642 (    struct TakeWhile_1638 *  self982 ) {
    struct Maybe_297  mx983 = ( (  next463 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_297  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1641 (    struct Map_1637 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1642 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1639 (    struct Map_1637  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    size_t  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct Map_1637  it1117 = ( (  into_dash_iter1640 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1118 = ( (  next1641 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_246_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_246_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  size_t   lam1645 (    size_t  v1130 ,    size_t  s1132 ) {
    return (  op_dash_add311 ( (  v1130 ) , (  s1132 ) ) );
}

static  size_t   sum1636 (    struct Map_1637  it1128 ) {
    return ( (  reduce1639 ) ( (  it1128 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1645 ) ) );
}

static  struct TakeWhile_1638   into_dash_iter1647 (    struct TakeWhile_1638  self979 ) {
    return (  self979 );
}

static  struct Map_1637   map1646 (    struct TakeWhile_1638  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1638  it809 = ( (  into_dash_iter1647 ) ( (  iterable806 ) ) );
    return ( ( Map_1637_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1638   take_dash_while1648 (    struct StrViewIter_458  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1638) { .f_it = ( (  into_dash_iter459 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  size_t   lam1649 (    struct Char_65  c2230 ) {
    return ( (  c2230 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1635 (    struct StrView_27  self2226 ,    bool (*  fun2228 )(    struct Char_65  ) ) {
    size_t  bi2231 = ( (  sum1636 ) ( ( (  map1646 ) ( ( (  take_dash_while1648 ) ( ( (  chars460 ) ( (  self2226 ) ) ) ,  (  fun2228 ) ) ) ,  (  lam1649 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2226 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2231 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1634 (    struct Scanner_1630 *  sc3303 ,    bool (*  fun3305 )(    struct Char_65  ) ) {
    struct StrView_27  s3306 = ( (  take_dash_while1635 ) ( ( ( * (  sc3303 ) ) .f_s ) ,  (  fun3305 ) ) );
    (*  sc3303 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3303 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3306 ) ) ) ) );
    return (  s3306 );
}

static  enum Unit_8   drop_dash_str_dash_while1633 (    struct Scanner_1630 *  sc3309 ,    bool (*  fun3311 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1634 ) ( (  sc3309 ) ,  (  fun3311 ) ) );
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

static  struct Map_1653   into_dash_iter1656 (    struct Map_1653  self797 ) {
    return (  self797 );
}

static  struct Maybe_297   next1658 (    struct TakeWhile_1654 *  self982 ) {
    struct Maybe_297  mx983 = ( (  next463 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_297  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1657 (    struct Map_1653 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1658 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1655 (    struct Map_1653  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    size_t  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct Map_1653  it1117 = ( (  into_dash_iter1656 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1118 = ( (  next1657 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_246_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_246_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  size_t   lam1661 (    size_t  v1130 ,    size_t  s1132 ) {
    return (  op_dash_add311 ( (  v1130 ) , (  s1132 ) ) );
}

static  size_t   sum1652 (    struct Map_1653  it1128 ) {
    return ( (  reduce1655 ) ( (  it1128 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1661 ) ) );
}

static  struct TakeWhile_1654   into_dash_iter1663 (    struct TakeWhile_1654  self979 ) {
    return (  self979 );
}

static  struct Map_1653   map1662 (    struct TakeWhile_1654  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1654  it809 = ( (  into_dash_iter1663 ) ( (  iterable806 ) ) );
    return ( ( Map_1653_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1654   take_dash_while1664 (    struct StrViewIter_458  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1654) { .f_it = ( (  into_dash_iter459 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  size_t   lam1665 (    struct Char_65  c2230 ) {
    return ( (  c2230 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1651 (    struct StrView_27  self2226 ,    bool (*  fun2228 )(    struct Char_65  ) ) {
    size_t  bi2231 = ( (  sum1652 ) ( ( (  map1662 ) ( ( (  take_dash_while1664 ) ( ( (  chars460 ) ( (  self2226 ) ) ) ,  (  fun2228 ) ) ) ,  (  lam1665 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2226 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2231 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1650 (    struct Scanner_1630 *  sc3303 ,    bool (*  fun3305 )(    struct Char_65  ) ) {
    struct StrView_27  s3306 = ( (  take_dash_while1651 ) ( ( ( * (  sc3303 ) ) .f_s ) ,  (  fun3305 ) ) );
    (*  sc3303 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3303 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3306 ) ) ) ) );
    return (  s3306 );
}

static  bool   is_dash_not_dash_whitespace1666 (    struct Char_65  c2418 ) {
    return ( ! ( (  is_dash_whitespace1340 ) ( (  c2418 ) ) ) );
}

static  struct Maybe_297   head1668 (    struct StrView_27  it1160 ) {
    struct StrViewIter_458  temp1669 = ( (  into_dash_iter461 ) ( (  it1160 ) ) );
    return ( (  next463 ) ( ( &temp1669 ) ) );
}

static  bool   null1667 (    struct StrView_27  it1169 ) {
    struct Maybe_297  dref1170 = ( (  head1668 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_80   maybe1672 (    struct Maybe_80  x1300 ,    struct Maybe_80 (*  fun1302 )(    struct StrView_27  ) ,    struct Maybe_80  default1304 ) {
    return ( {  struct Maybe_80  dref1305 = (  x1300 ) ; dref1305.tag == Maybe_80_Just_t ? ( (  fun1302 ) ( ( dref1305 .stuff .Maybe_80_Just_s .field0 ) ) ) : (  default1304 ) ; } );
}

static  bool   is_dash_none1673 (    struct Maybe_80  m1282 ) {
    struct Maybe_80  dref1283 = (  m1282 );
    if ( dref1283.tag == Maybe_80_None_t ) {
        return ( true );
    }
    else {
        if ( dref1283.tag == Maybe_80_Just_t ) {
            return ( false );
        }
    }
}

struct StrConcatIter_1682 {
    struct StrViewIter_458  f_left;
    struct AppendIter_1020  f_right;
};

struct env1683 {
    struct StrBuilder_62 *  builder2809;
    struct env60 envinst60;
};

struct envunion1684 {
    enum Unit_8  (*fun) (  struct env1683*  ,    struct Char_65  );
    struct env1683 env;
};

static  struct StrConcatIter_1682   into_dash_iter1686 (    struct StrConcatIter_1682  self1515 ) {
    return (  self1515 );
}

static  struct Maybe_297   next1687 (    struct StrConcatIter_1682 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1681 (    struct StrConcatIter_1682  iterable1092 ,   struct envunion1684  fun1094 ) {
    struct StrConcatIter_1682  temp1685 = ( (  into_dash_iter1686 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_1682 *  it1095 = ( &temp1685 );
    while ( ( true ) ) {
        struct Maybe_297  dref1096 = ( (  next1687 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_297_Just_t ) {
                struct envunion1684  temp1688 = (  fun1094 );
                ( temp1688.fun ( &temp1688.env ,  ( dref1096 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1682   into_dash_iter1690 (    struct StrConcat_71  dref1522 ) {
    return ( (struct StrConcatIter_1682) { .f_left = ( (  chars460 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_1682   chars1689 (    struct StrConcat_71  self1533 ) {
    return ( (  into_dash_iter1690 ) ( (  self1533 ) ) );
}

static  enum Unit_8   lam1691 (   struct env1683* env ,    struct Char_65  c2813 ) {
    struct envunion64  temp1692 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1692.fun ( &temp1692.env ,  ( env->builder2809 ) ,  (  c2813 ) ) );
}

static  enum Unit_8   write1680 (   struct env68* env ,    struct StrBuilder_62 *  builder2809 ,    struct StrConcat_71  s2811 ) {
    struct env1683 envinst1683 = {
        .builder2809 =  builder2809 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1681 ) ( ( (  chars1689 ) ( (  s2811 ) ) ) ,  ( (struct envunion1684){ .fun = (  enum Unit_8  (*) (  struct env1683*  ,    struct Char_65  ) )lam1691 , .env =  envinst1683 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1678 (   struct env69* env ,    struct StrBuilder_62 *  builder2816 ,    struct StrView_27  s2818 ) {
    struct envunion70  temp1679 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  ) )write1680 , .env =  env->envinst68 } );
    return ( temp1679.fun ( &temp1679.env ,  (  builder2816 ) ,  ( ( StrConcat_71_StrConcat ) ( (  s2818 ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1694 (  ) {
    struct StrView_27  temp1695;
    return (  temp1695 );
}

static  struct StrView_27   or_dash_fail1693 (    struct Maybe_80  x1744 ,    struct StrView_27  errmsg1746 ) {
    struct Maybe_80  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_80_None_t ) {
        ( (  panic1212 ) ( (  errmsg1746 ) ) );
        return ( (  undefined1694 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_80_Just_t ) {
            return ( dref1747 .stuff .Maybe_80_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_458   chars1698 (    struct StrBuilder_62  s2861 ) {
    return ( (  into_dash_iter461 ) ( ( (  as_dash_str1470 ) ( ( & (  s2861 ) ) ) ) ) );
}

static  struct StrViewIter_458   chars1697 (    struct StrBuilder_62 *  self1564 ) {
    return ( (  chars1698 ) ( ( * (  self1564 ) ) ) );
}

static  int32_t   fprintf_dash_char1699 (    FILE *  file765 ,    struct Char_65  c767 ) {
    struct CharDestructured_337  dref768 = ( (  destructure339 ) ( (  c767 ) ) );
    if ( dref768.tag == CharDestructured_337_Ref_t ) {
        return ( ( fprintf ) ( (  file765 ) ,  ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32329 ) ( ( ( dref768 .stuff .CharDestructured_337_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref768 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref768.tag == CharDestructured_337_Scalar_t ) {
            if ( (  cmp170 ( ( ( dref768 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) , (  from_dash_integral165 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1700 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp1700);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( ( fprintf ) ( (  file765 ) ,  ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8144 ) ( ( ( dref768 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
}

static  bool   unreachable1701 (  ) {
    ( (  print1346 ) ( ( (  from_dash_string199 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1347 ) ( ) );
}

static  bool   try_dash_write_dash_contents1696 (    const char*  filename3007 ,    struct StrBuilder_62 *  contents3009 ) {
    FILE *  file3010 = ( ( fopen ) ( (  filename3007 ) ,  ( (  from_dash_charlike535 ) ( ( "w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null536 ) ( (  file3010 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_458  it3011 = ( (  chars1697 ) ( (  contents3009 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref3012 = ( (  next463 ) ( ( & (  it3011 ) ) ) );
        if ( dref3012.tag == Maybe_297_None_t ) {
            ( ( fclose ) ( (  file3010 ) ) );
            return ( true );
        }
        else {
            if ( dref3012.tag == Maybe_297_Just_t ) {
                int32_t  chars_dash_written3014 = ( (  fprintf_dash_char1699 ) ( (  file3010 ) ,  ( dref3012 .stuff .Maybe_297_Just_s .field0 ) ) );
                if ( (  cmp157 ( (  chars_dash_written3014 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1701 ) ( ) );
}

static  enum Unit_8   free1702 (    struct StrBuilder_62 *  builder2853 ) {
    ( (  free627 ) ( ( & ( ( * (  builder2853 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1703 (    struct Maybe_80  m1278 ) {
    struct Maybe_80  dref1279 = (  m1278 );
    if ( dref1279.tag == Maybe_80_None_t ) {
        return ( false );
    }
    else {
        if ( dref1279.tag == Maybe_80_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_246   write_dash_to_dash_file1671 (   struct env110* env ,    struct TextBuf_104 *  self3826 ,    struct Maybe_80  altname3828 ) {
    struct Maybe_80  filename3829 = ( (  maybe1672 ) ( (  altname3828 ) ,  ( Maybe_80_Just ) ,  ( ( * (  self3826 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1673 ) ( (  filename3829 ) ) ) ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    enum CAllocator_10  al3830 = ( ( * (  self3826 ) ) .f_al );
    struct StrBuilder_62  temp1674 = ( (  mk1428 ) ( (  al3830 ) ) );
    struct StrBuilder_62 *  sb3831 = ( &temp1674 );
    struct RangeIter_153  temp1675 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1137 ) ( (  self3826 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1676 =  next156 (&temp1675);
        if (  __cond1676 .tag == 0 ) {
            break;
        }
        int32_t  ln3833 =  __cond1676 .stuff .Maybe_155_Just_s .field0;
        struct envunion111  temp1677 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )writeln1678 , .env =  env->envinst69 } );
        ( temp1677.fun ( &temp1677.env ,  (  sb3831 ) ,  ( (  line1097 ) ( (  self3826 ) ,  (  ln3833 ) ) ) ) );
    }
    struct StrView_27  filename03834 = ( (  clone_dash_0505 ) ( ( (  or_dash_fail1693 ) ( (  filename3829 ) ,  ( (  from_dash_string199 ) ( ( "expect filename" ) ,  ( 15 ) ) ) ) ) ,  (  al3830 ) ) );
    bool  result3835 = ( (  try_dash_write_dash_contents1696 ) ( ( (  as_dash_const_dash_str545 ) ( (  filename03834 ) ) ) ,  (  sb3831 ) ) );
    ( (  free547 ) ( (  filename03834 ) ,  (  al3830 ) ) );
    ( (  free1702 ) ( (  sb3831 ) ) );
    if ( ( ! (  result3835 ) ) ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    if ( ( (  is_dash_just1703 ) ( (  altname3828 ) ) ) ) {
        struct Maybe_80  dref3836 = ( ( * (  self3826 ) ) .f_filename );
        if ( dref3836.tag == Maybe_80_Just_t ) {
            ( (  free547 ) ( ( dref3836 .stuff .Maybe_80_Just_s .field0 ) ,  (  al3830 ) ) );
        }
        else {
            if ( dref3836.tag == Maybe_80_None_t ) {
            }
        }
        (*  self3826 ) .f_filename = (  altname3828 );
    }
    return ( ( Maybe_246_Just ) ( ( (  num_dash_bytes1130 ) ( ( (  as_dash_str1470 ) ( (  sb3831 ) ) ) ) ) ) );
}

struct env1712 {
    struct StrBuilder_62 *  builder2809;
    struct env60 envinst60;
};

struct envunion1713 {
    enum Unit_8  (*fun) (  struct env1712*  ,    struct Char_65  );
    struct env1712 env;
};

static  enum Unit_8   for_dash_each1711 (    struct StrViewIter_458  iterable1092 ,   struct envunion1713  fun1094 ) {
    struct StrViewIter_458  temp1714 = ( (  into_dash_iter459 ) ( (  iterable1092 ) ) );
    struct StrViewIter_458 *  it1095 = ( &temp1714 );
    while ( ( true ) ) {
        struct Maybe_297  dref1096 = ( (  next463 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_297_Just_t ) {
                struct envunion1713  temp1715 = (  fun1094 );
                ( temp1715.fun ( &temp1715.env ,  ( dref1096 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1716 (   struct env1712* env ,    struct Char_65  c2813 ) {
    struct envunion64  temp1717 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1717.fun ( &temp1717.env ,  ( env->builder2809 ) ,  (  c2813 ) ) );
}

static  enum Unit_8   write1710 (   struct env63* env ,    struct StrBuilder_62 *  builder2809 ,    struct StrView_27  s2811 ) {
    struct env1712 envinst1712 = {
        .builder2809 =  builder2809 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1711 ) ( ( (  chars460 ) ( (  s2811 ) ) ) ,  ( (struct envunion1713){ .fun = (  enum Unit_8  (*) (  struct env1712*  ,    struct Char_65  ) )lam1716 , .env =  envinst1712 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1707 (   struct env74* env ,    struct StrView_27  s2867 ,    enum CAllocator_10  al2869 ) {
    struct StrBuilder_62  temp1708 = ( (  mk1428 ) ( (  al2869 ) ) );
    struct StrBuilder_62 *  sb2870 = ( &temp1708 );
    struct envunion75  temp1709 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1710 , .env =  env->envinst63 } );
    ( temp1709.fun ( &temp1709.env ,  (  sb2870 ) ,  (  s2867 ) ) );
    struct envunion76  temp1718 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    ( temp1718.fun ( &temp1718.env ,  (  sb2870 ) ,  ( (  nullchar544 ) ( ) ) ) );
    struct StrView_27  dynstr2871 = ( (  as_dash_str1470 ) ( (  sb2870 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2871 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub289 ( ( ( (  dynstr2871 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1705 (   struct env235* env ,    struct Editor_248 *  ed4477 ,    struct StrView_27  s4479 ) {
    ( (  reset_dash_msg1079 ) ( (  ed4477 ) ) );
    struct envunion236  temp1706 = ( (struct envunion236){ .fun = (  struct StrView_27  (*) (  struct env74*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1707 , .env =  env->envinst74 } );
    (*  ed4477 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1706.fun ( &temp1706.env ,  (  s4479 ) ,  ( ( * (  ed4477 ) ) .f_al ) ) ) ) );
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
    struct StrBuilder_62 *  builder2809;
    struct env60 envinst60;
};

struct envunion1732 {
    enum Unit_8  (*fun) (  struct env1731*  ,    struct Char_65  );
    struct env1731 env;
};

static  struct StrConcatIter_1727   into_dash_iter1734 (    struct StrConcatIter_1727  self1515 ) {
    return (  self1515 );
}

static  struct Maybe_297   next1738 (    struct StrConcatIter_1730 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1737 (    struct StrConcatIter_1729 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next1738 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1736 (    struct StrCaseIter_1728 *  self1540 ) {
    struct StrCaseIter_1728 *  dref1541 = (  self1540 );
    if ( (* dref1541 ).tag == StrCaseIter_1728_StrCaseIter1_t ) {
        return ( (  next463 ) ( ( & ( (* dref1541 ) .stuff .StrCaseIter_1728_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1541 ).tag == StrCaseIter_1728_StrCaseIter2_t ) {
            return ( (  next1737 ) ( ( & ( (* dref1541 ) .stuff .StrCaseIter_1728_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_297   next1735 (    struct StrConcatIter_1727 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1736 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1726 (    struct StrConcatIter_1727  iterable1092 ,   struct envunion1732  fun1094 ) {
    struct StrConcatIter_1727  temp1733 = ( (  into_dash_iter1734 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_1727 *  it1095 = ( &temp1733 );
    while ( ( true ) ) {
        struct Maybe_297  dref1096 = ( (  next1735 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_297_Just_t ) {
                struct envunion1732  temp1739 = (  fun1094 );
                ( temp1739.fun ( &temp1739.env ,  ( dref1096 .stuff .Maybe_297_Just_s .field0 ) ) );
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

static  struct StrConcatIter_1730   into_dash_iter1750 (    struct StrConcat_670  dref1522 ) {
    return ( (struct StrConcatIter_1730) { .f_left = ( (  chars460 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_1730   chars1749 (    struct StrConcat_670  self1533 ) {
    return ( (  into_dash_iter1750 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_1729   into_dash_iter1748 (    struct StrConcat_669  dref1522 ) {
    return ( (struct StrConcatIter_1729) { .f_left = ( (  chars1749 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_1729   chars1747 (    struct StrConcat_669  self1533 ) {
    return ( (  into_dash_iter1748 ) ( (  self1533 ) ) );
}

static  struct StrCaseIter_1728   into_dash_iter1746 (    struct StrCase_1743  self1546 ) {
    struct StrCase_1743  dref1547 = (  self1546 );
    if ( dref1547.tag == StrCase_1743_StrCase1_t ) {
        return ( ( StrCaseIter_1728_StrCaseIter1 ) ( ( (  chars460 ) ( ( dref1547 .stuff .StrCase_1743_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1547.tag == StrCase_1743_StrCase2_t ) {
            return ( ( StrCaseIter_1728_StrCaseIter2 ) ( ( (  chars1747 ) ( ( dref1547 .stuff .StrCase_1743_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1728   chars1745 (    struct StrCase_1743  self1558 ) {
    return ( (  into_dash_iter1746 ) ( (  self1558 ) ) );
}

static  struct StrCaseIter_1728   chars1742 (    struct Maybe_80  self1572 ) {
    struct StrCase_1743  temp1744;
    struct StrCase_1743  c1573 = (  temp1744 );
    struct Maybe_80  dref1574 = (  self1572 );
    if ( dref1574.tag == Maybe_80_None_t ) {
        c1573 = ( ( StrCase_1743_StrCase1 ) ( ( (  from_dash_string199 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1574.tag == Maybe_80_Just_t ) {
            c1573 = ( ( StrCase_1743_StrCase2 ) ( ( ( StrConcat_669_StrConcat ) ( ( ( StrConcat_670_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1574 .stuff .Maybe_80_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1745 ) ( (  c1573 ) ) );
}

static  struct StrConcatIter_1727   into_dash_iter1741 (    struct StrConcat_79  dref1522 ) {
    return ( (struct StrConcatIter_1727) { .f_left = ( (  chars460 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1742 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_1727   chars1740 (    struct StrConcat_79  self1533 ) {
    return ( (  into_dash_iter1741 ) ( (  self1533 ) ) );
}

static  enum Unit_8   lam1751 (   struct env1731* env ,    struct Char_65  c2813 ) {
    struct envunion64  temp1752 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1752.fun ( &temp1752.env ,  ( env->builder2809 ) ,  (  c2813 ) ) );
}

static  enum Unit_8   write1725 (   struct env66* env ,    struct StrBuilder_62 *  builder2809 ,    struct StrConcat_79  s2811 ) {
    struct env1731 envinst1731 = {
        .builder2809 =  builder2809 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1726 ) ( ( (  chars1740 ) ( (  s2811 ) ) ) ,  ( (struct envunion1732){ .fun = (  enum Unit_8  (*) (  struct env1731*  ,    struct Char_65  ) )lam1751 , .env =  envinst1731 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1722 (   struct env77* env ,    struct StrConcat_79  s2867 ,    enum CAllocator_10  al2869 ) {
    struct StrBuilder_62  temp1723 = ( (  mk1428 ) ( (  al2869 ) ) );
    struct StrBuilder_62 *  sb2870 = ( &temp1723 );
    struct envunion78  temp1724 = ( (struct envunion78){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_79  ) )write1725 , .env =  env->envinst66 } );
    ( temp1724.fun ( &temp1724.env ,  (  sb2870 ) ,  (  s2867 ) ) );
    struct envunion76  temp1753 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    ( temp1753.fun ( &temp1753.env ,  (  sb2870 ) ,  ( (  nullchar544 ) ( ) ) ) );
    struct StrView_27  dynstr2871 = ( (  as_dash_str1470 ) ( (  sb2870 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2871 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub289 ( ( ( (  dynstr2871 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1720 (   struct env237* env ,    struct Editor_248 *  ed4477 ,    struct StrConcat_79  s4479 ) {
    ( (  reset_dash_msg1079 ) ( (  ed4477 ) ) );
    struct envunion238  temp1721 = ( (struct envunion238){ .fun = (  struct StrView_27  (*) (  struct env77*  ,    struct StrConcat_79  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1722 , .env =  env->envinst77 } );
    (*  ed4477 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1721.fun ( &temp1721.env ,  (  s4479 ) ,  ( ( * (  ed4477 ) ) .f_al ) ) ) ) );
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

static  bool   begins_dash_with1758 (    struct StrView_27  s2448 ,    struct StrView_27  beg2450 ) {
    struct StrViewIter_458  temp1759 = ( (  chars460 ) ( (  s2448 ) ) );
    struct StrViewIter_458 *  scs2451 = ( &temp1759 );
    struct StrViewIter_458  temp1760 = ( (  chars460 ) ( (  beg2450 ) ) );
    struct StrViewIter_458 *  begcs2452 = ( &temp1760 );
    while ( ( true ) ) {
        struct Tuple2_1761  dref2453 = ( ( Tuple2_1761_Tuple2 ) ( ( (  next463 ) ( (  scs2451 ) ) ) ,  ( (  next463 ) ( (  begcs2452 ) ) ) ) );
        if ( dref2453 .field0.tag == Maybe_297_Just_t && dref2453 .field1.tag == Maybe_297_Just_t ) {
            if ( ( !  eq469 ( ( dref2453 .field0 .stuff .Maybe_297_Just_s .field0 ) , ( dref2453 .field1 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref2453 .field0.tag == Maybe_297_None_t && dref2453 .field1.tag == Maybe_297_Just_t ) {
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

static  struct SliceAddressIter_1764   into_dash_iter1765 (    struct SliceAddressIter_1764  self1873 ) {
    return (  self1873 );
}

static  struct SliceAddressIter_1764   addresses1767 (    struct Slice_15  slice1870 ) {
    return ( (struct SliceAddressIter_1764) { .f_slice = (  slice1870 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_15   to_dash_slice1768 (    struct List_14  l2151 ) {
    struct Line_16 *  ptr2152 = ( ( (  l2151 ) .f_elements ) .f_ptr );
    return ( (struct Slice_15) { .f_ptr = (  ptr2152 ) , .f_count = ( (  l2151 ) .f_count ) } );
}

static  struct SliceAddressIter_1764   addresses1766 (    struct List_14  l2155 ) {
    return ( (  addresses1767 ) ( ( (  to_dash_slice1768 ) ( (  l2155 ) ) ) ) );
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

static  struct Maybe_1770   next1771 (    struct SliceAddressIter_1764 *  self1876 ) {
    size_t  off1877 = ( ( * (  self1876 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1877 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1876 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1770) { .tag = Maybe_1770_None_t } );
    }
    struct Line_16 *  elem1878 = ( (  offset_dash_ptr391 ) ( ( ( ( * (  self1876 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1877 ) ) ) ) );
    (*  self1876 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1877 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1770_Just ) ( (  elem1878 ) ) );
}

static  enum Unit_8   set_dash_filetype1762 (    struct TextBuf_104 *  self3957 ,    enum Filetype_107  type3959 ) {
    (*  self3957 ) .f_filetype = (  type3959 );
    struct SliceAddressIter_1764  temp1763 =  into_dash_iter1765 ( ( (  addresses1766 ) ( ( ( * (  self3957 ) ) .f_buf ) ) ) );
    while (true) {
        struct Maybe_1770  __cond1769 =  next1771 (&temp1763);
        if (  __cond1769 .tag == 0 ) {
            break;
        }
        struct Line_16 *  line3961 =  __cond1769 .stuff .Maybe_1770_Just_s .field0;
        (*  line3961 ) .f_invalidated = ( true );
    }
    return ( Unit_8_Unit );
}

struct envunion1773 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env235 env;
};

struct env1776 {
    bool (*  fun1144 )(    struct Char_65  );
};

struct envunion1777 {
    bool  (*fun) (  struct env1776*  ,    struct Char_65  ,    bool  );
    struct env1776 env;
};

static  bool   reduce1775 (    struct StrView_27  iterable1111 ,    bool  base1113 ,   struct envunion1777  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct StrViewIter_458  it1117 = ( (  into_dash_iter461 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1118 = ( (  next463 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_297_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_297_Just_t ) {
                struct envunion1777  temp1778 = (  fun1115 );
                x1116 = ( temp1778.fun ( &temp1778.env ,  ( dref1118 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  bool   lam1781 (   struct env1776* env ,    struct Char_65  e1146 ,    bool  x1148 ) {
    return ( ( ( env->fun1144 ) ( (  e1146 ) ) ) && (  x1148 ) );
}

static  bool   all1774 (    struct StrView_27  it1142 ,    bool (*  fun1144 )(    struct Char_65  ) ) {
    struct env1776 envinst1776 = {
        .fun1144 =  fun1144 ,
    };
    return ( (  reduce1775 ) ( (  it1142 ) ,  ( true ) ,  ( (struct envunion1777){ .fun = (  bool  (*) (  struct env1776*  ,    struct Char_65  ,    bool  ) )lam1781 , .env =  envinst1776 } ) ) );
}

struct envunion1783 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env235 env;
};

static  enum Unit_8   run_dash_cmd1629 (   struct env244* env ,    struct Editor_248 *  ed4496 ,    struct StrView_27  s4498 ) {
    struct Scanner_1630  temp1631 = ( (  mk_dash_from_dash_strview1632 ) ( (  s4498 ) ) );
    struct Scanner_1630 *  sc4499 = ( &temp1631 );
    ( (  drop_dash_str_dash_while1633 ) ( (  sc4499 ) ,  (  is_dash_whitespace1340 ) ) );
    struct StrView_27  cmd4500 = ( (  take_dash_str_dash_while1650 ) ( (  sc4499 ) ,  (  is_dash_not_dash_whitespace1666 ) ) );
    ( (  drop_dash_str_dash_while1633 ) ( (  sc4499 ) ,  (  is_dash_whitespace1340 ) ) );
    if ( (  eq485 ( (  cmd4500 ) , ( (  from_dash_charlike1229 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4496 ) .f_running = ( false );
    } else {
        if ( (  eq485 ( (  cmd4500 ) , ( (  from_dash_string199 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq485 ( (  cmd4500 ) , ( (  from_dash_charlike1229 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4501 = ( (  take_dash_str_dash_while1650 ) ( (  sc4499 ) ,  (  is_dash_not_dash_whitespace1666 ) ) );
                struct Maybe_80  filename4502 = ( ( (  null1667 ) ( (  filename4501 ) ) ) ? ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) : ( ( Maybe_80_Just ) ( (  filename4501 ) ) ) );
                struct envunion245  temp1670 = ( (struct envunion245){ .fun = (  struct Maybe_246  (*) (  struct env110*  ,    struct TextBuf_104 *  ,    struct Maybe_80  ) )write_dash_to_dash_file1671 , .env =  env->envinst110 } );
                struct Maybe_246  write_dash_result4503 = ( temp1670.fun ( &temp1670.env ,  ( ( * ( (  pane1134 ) ( (  ed4496 ) ) ) ) .f_buf ) ,  (  filename4502 ) ) );
                struct Maybe_246  dref4504 = (  write_dash_result4503 );
                if ( dref4504.tag == Maybe_246_None_t ) {
                    if ( ( (  is_dash_none1673 ) ( (  filename4502 ) ) ) ) {
                        struct envunion247  temp1704 = ( (struct envunion247){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  ) )set_dash_msg1705 , .env =  env->envinst235 } );
                        ( temp1704.fun ( &temp1704.env ,  (  ed4496 ) ,  ( (  from_dash_string199 ) ( ( "could not save changes (!?)" ) ,  ( 27 ) ) ) ) );
                    } else {
                        struct envunion251  temp1719 = ( (struct envunion251){ .fun = (  enum Unit_8  (*) (  struct env237*  ,    struct Editor_248 *  ,    struct StrConcat_79  ) )set_dash_msg1720 , .env =  env->envinst237 } );
                        ( temp1719.fun ( &temp1719.env ,  (  ed4496 ) ,  ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string199 ) ( ( "could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4502 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4504.tag == Maybe_246_Just_t ) {
                        struct envunion252  temp1754 = ( (struct envunion252){ .fun = (  enum Unit_8  (*) (  struct env239*  ,    struct Editor_248 *  ,    struct StrConcat_83  ) )set_dash_msg1424 , .env =  env->envinst239 } );
                        ( temp1754.fun ( &temp1754.env ,  (  ed4496 ) ,  ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "written " ) ,  ( 8 ) ) ) ,  ( dref4504 .stuff .Maybe_246_Just_s .field0 ) ) ) ,  ( (  from_dash_string199 ) ( ( " bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq485 ( (  cmd4500 ) , ( (  from_dash_charlike1229 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1755 ) ( ) );
                } else {
                    if ( (  eq485 ( (  cmd4500 ) , ( (  from_dash_string199 ) ( ( "ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_27  what4506 = ( (  take_dash_str_dash_while1650 ) ( (  sc4499 ) ,  (  is_dash_not_dash_whitespace1666 ) ) );
                        if ( (  eq485 ( (  what4506 ) , ( (  from_dash_string199 ) ( ( "on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed4496 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq485 ( (  what4506 ) , ( (  from_dash_string199 ) ( ( "off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed4496 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp290 ( ( (  count1104 ) ( ( (  chars460 ) ( (  what4506 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1758 ) ( ( (  from_dash_string199 ) ( ( "absolute" ) ,  ( 8 ) ) ) ,  (  what4506 ) ) ) ) ) {
                                    (* (*  ed4496 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp290 ( ( (  count1104 ) ( ( (  chars460 ) ( (  what4506 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1758 ) ( ( (  from_dash_string199 ) ( ( "relative" ) ,  ( 8 ) ) ) ,  (  what4506 ) ) ) ) ) {
                                        (* (*  ed4496 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq485 ( (  cmd4500 ) , ( (  from_dash_string199 ) ( ( "ft" ) ,  ( 2 ) ) ) ) ) ) {
                            struct StrView_27  type4507 = ( (  take_dash_str_dash_while1650 ) ( (  sc4499 ) ,  (  is_dash_not_dash_whitespace1666 ) ) );
                            struct TextBuf_104 *  tb4508 = ( ( * ( (  pane1134 ) ( (  ed4496 ) ) ) ) .f_buf );
                            if ( (  eq485 ( (  type4507 ) , ( (  from_dash_string199 ) ( ( "text" ) ,  ( 4 ) ) ) ) ) ) {
                                ( (  set_dash_filetype1762 ) ( (  tb4508 ) ,  ( Filetype_107_Text ) ) );
                            } else {
                                if ( (  eq485 ( (  type4507 ) , ( (  from_dash_string199 ) ( ( "kc" ) ,  ( 2 ) ) ) ) ) ) {
                                    ( (  set_dash_filetype1762 ) ( (  tb4508 ) ,  ( Filetype_107_KC ) ) );
                                } else {
                                    if ( (  eq485 ( (  type4507 ) , ( (  from_dash_string199 ) ( ( "md" ) ,  ( 2 ) ) ) ) ) ) {
                                        ( (  set_dash_filetype1762 ) ( (  tb4508 ) ,  ( Filetype_107_Markdown ) ) );
                                    } else {
                                        struct envunion1773  temp1772 = ( (struct envunion1773){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  ) )set_dash_msg1705 , .env =  env->envinst235 } );
                                        ( temp1772.fun ( &temp1772.env ,  (  ed4496 ) ,  ( (  from_dash_string199 ) ( ( "unknown file type" ) ,  ( 17 ) ) ) ) );
                                    }
                                }
                            }
                        } else {
                            if ( (  eq485 ( (  cmd4500 ) , ( (  from_dash_string199 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                            } else {
                                if ( ( (  all1774 ) ( (  cmd4500 ) ,  (  is_dash_digit973 ) ) ) ) {
                                } else {
                                    struct envunion1783  temp1782 = ( (struct envunion1783){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  ) )set_dash_msg1705 , .env =  env->envinst235 } );
                                    ( temp1782.fun ( &temp1782.env ,  (  ed4496 ) ,  ( (  from_dash_string199 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
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

static  struct Char_65   ascii_dash_char1785 (    char  c783 ) {
    return ( (  from_dash_u81039 ) ( ( (  ascii_dash_u8481 ) ( (  c783 ) ) ) ) );
}

static  struct Maybe_967   reduce1789 (    struct StrViewIter_458  iterable1111 ,    struct Maybe_967  base1113 ,    struct Maybe_967 (*  fun1115 )(    struct Char_65  ,    struct Maybe_967  ) ) {
    struct Maybe_967  x1116 = (  base1113 );
    struct StrViewIter_458  it1117 = ( (  into_dash_iter459 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1118 = ( (  next463 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_297_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_297_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  struct Maybe_967   sequence_dash_maybe1792 (    struct Char_65  e2521 ,    struct Maybe_967  b2523 ) {
    struct Maybe_967  dref2524 = (  b2523 );
    if ( dref2524.tag == Maybe_967_None_t ) {
        return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
    }
    else {
        if ( dref2524.tag == Maybe_967_Just_t ) {
            struct Maybe_155  dref2526 = ( (  parse_dash_digit998 ) ( (  e2521 ) ) );
            if ( dref2526.tag == Maybe_155_None_t ) {
                return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
            }
            else {
                if ( dref2526.tag == Maybe_155_Just_t ) {
                    return ( ( Maybe_967_Just ) ( (  op_dash_add471 ( (  op_dash_mul286 ( ( dref2524 .stuff .Maybe_967_Just_s .field0 ) , (  from_dash_integral288 ( 10 ) ) ) ) , ( (  i32_dash_i641007 ) ( ( dref2526 .stuff .Maybe_155_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_967   parse_dash_int1788 (    struct StrView_27  s2518 ) {
    struct StrViewIter_458  cs2528 = ( (  chars460 ) ( (  s2518 ) ) );
    struct Maybe_297  dref2529 = ( (  head1343 ) ( (  cs2528 ) ) );
    if ( dref2529.tag == Maybe_297_Just_t ) {
        return ( (  reduce1789 ) ( (  cs2528 ) ,  ( ( Maybe_967_Just ) ( (  from_dash_integral288 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1792 ) ) );
    }
    else {
        if ( dref2529.tag == Maybe_297_None_t ) {
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

static  struct Map_1797   into_dash_iter1800 (    struct Map_1797  self797 ) {
    return (  self797 );
}

static  struct Maybe_297   next1802 (    struct TakeWhile_1798 *  self982 ) {
    struct Maybe_297  mx983 = ( (  next463 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_297  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1801 (    struct Map_1797 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1802 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1799 (    struct Map_1797  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    size_t  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct Map_1797  it1117 = ( (  into_dash_iter1800 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1118 = ( (  next1801 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_246_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_246_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  size_t   lam1805 (    size_t  v1130 ,    size_t  s1132 ) {
    return (  op_dash_add311 ( (  v1130 ) , (  s1132 ) ) );
}

static  size_t   sum1796 (    struct Map_1797  it1128 ) {
    return ( (  reduce1799 ) ( (  it1128 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1805 ) ) );
}

static  struct TakeWhile_1798   into_dash_iter1807 (    struct TakeWhile_1798  self979 ) {
    return (  self979 );
}

static  struct Map_1797   map1806 (    struct TakeWhile_1798  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1798  it809 = ( (  into_dash_iter1807 ) ( (  iterable806 ) ) );
    return ( ( Map_1797_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1798   take_dash_while1808 (    struct StrViewIter_458  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1798) { .f_it = ( (  into_dash_iter459 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  size_t   lam1809 (    struct Char_65  c2230 ) {
    return ( (  c2230 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1795 (    struct StrView_27  self2226 ,    bool (*  fun2228 )(    struct Char_65  ) ) {
    size_t  bi2231 = ( (  sum1796 ) ( ( (  map1806 ) ( ( (  take_dash_while1808 ) ( ( (  chars460 ) ( (  self2226 ) ) ) ,  (  fun2228 ) ) ) ,  (  lam1809 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2226 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2231 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1794 (    struct Scanner_1630 *  sc3303 ,    bool (*  fun3305 )(    struct Char_65  ) ) {
    struct StrView_27  s3306 = ( (  take_dash_while1795 ) ( ( ( * (  sc3303 ) ) .f_s ) ,  (  fun3305 ) ) );
    (*  sc3303 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3303 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3306 ) ) ) ) );
    return (  s3306 );
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

static  struct Map_1813   into_dash_iter1816 (    struct Map_1813  self797 ) {
    return (  self797 );
}

static  struct Maybe_297   next1818 (    struct TakeWhile_1814 *  self982 ) {
    struct Maybe_297  mx983 = ( (  next463 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_297  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref984 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1817 (    struct Map_1813 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1818 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1815 (    struct Map_1813  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    size_t  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct Map_1813  it1117 = ( (  into_dash_iter1816 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1118 = ( (  next1817 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_246_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_246_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  size_t   lam1821 (    size_t  v1130 ,    size_t  s1132 ) {
    return (  op_dash_add311 ( (  v1130 ) , (  s1132 ) ) );
}

static  size_t   sum1812 (    struct Map_1813  it1128 ) {
    return ( (  reduce1815 ) ( (  it1128 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1821 ) ) );
}

static  struct TakeWhile_1814   into_dash_iter1823 (    struct TakeWhile_1814  self979 ) {
    return (  self979 );
}

static  struct Map_1813   map1822 (    struct TakeWhile_1814  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1814  it809 = ( (  into_dash_iter1823 ) ( (  iterable806 ) ) );
    return ( ( Map_1813_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1814   take_dash_while1824 (    struct StrViewIter_458  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1814) { .f_it = ( (  into_dash_iter459 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  size_t   lam1825 (    struct Char_65  c2230 ) {
    return ( (  c2230 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1811 (    struct StrView_27  self2226 ,    bool (*  fun2228 )(    struct Char_65  ) ) {
    size_t  bi2231 = ( (  sum1812 ) ( ( (  map1822 ) ( ( (  take_dash_while1824 ) ( ( (  chars460 ) ( (  self2226 ) ) ) ,  (  fun2228 ) ) ) ,  (  lam1825 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2226 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2231 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1810 (    struct Scanner_1630 *  sc3303 ,    bool (*  fun3305 )(    struct Char_65  ) ) {
    struct StrView_27  s3306 = ( (  take_dash_while1811 ) ( ( ( * (  sc3303 ) ) .f_s ) ,  (  fun3305 ) ) );
    (*  sc3303 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3303 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3306 ) ) ) ) );
    return (  s3306 );
}

static  bool   lam1826 (    struct Char_65  c4492 ) {
    return ( ! ( (  is_dash_whitespace1340 ) ( (  c4492 ) ) ) );
}

static  struct Theme_172 *   or_dash_else1827 (    struct Maybe_243  self1751 ,    struct Theme_172 *  alt1753 ) {
    struct Maybe_243  dref1754 = (  self1751 );
    if ( dref1754.tag == Maybe_243_None_t ) {
        return (  alt1753 );
    }
    else {
        if ( dref1754.tag == Maybe_243_Just_t ) {
            return ( dref1754 .stuff .Maybe_243_Just_s .field0 );
        }
    }
}

struct SliceIter_1833 {
    struct Slice_192  f_slice;
    size_t  f_current_dash_offset;
};

struct env1834 {
    ;
    struct StrView_27  name4055;
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

static  struct Maybe_1837   next1839 (    struct SliceIter_1833 *  self1858 ) {
    size_t  off1859 = ( ( * (  self1858 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1858 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1837) { .tag = Maybe_1837_None_t } );
    }
    struct Tuple2_193  elem1860 = ( * ( (  offset_dash_ptr1840 ) ( ( ( ( * (  self1858 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1859 ) ) ) ) ) );
    (*  self1858 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1837_Just ) ( (  elem1860 ) ) );
}

static  struct Maybe_1837   next1838 (    struct Filter_1832 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_1837  dref835 = ( (  next1839 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_1837_None_t ) {
            return ( (struct Maybe_1837) { .tag = Maybe_1837_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_1837_Just_t ) {
                struct envunion1835  temp1842 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp1842.fun ( &temp1842.env ,  ( dref835 .stuff .Maybe_1837_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1837_Just ) ( ( dref835 .stuff .Maybe_1837_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1837  temp1843;
    return (  temp1843 );
}

static  struct Maybe_243   next1836 (    struct Map_1831 *  dref799 ) {
    struct Maybe_1837  dref802 = ( (  next1838 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_1837_None_t ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_1837_Just_t ) {
            return ( ( Maybe_243_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_1837_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1831   into_dash_iter1845 (    struct Map_1831  self797 ) {
    return (  self797 );
}

static  struct Maybe_243   head1830 (    struct Map_1831  it1160 ) {
    struct Map_1831  temp1844 = ( (  into_dash_iter1845 ) ( (  it1160 ) ) );
    return ( (  next1836 ) ( ( &temp1844 ) ) );
}

static  struct Filter_1832   into_dash_iter1847 (    struct Filter_1832  self831 ) {
    return (  self831 );
}

static  struct Map_1831   map1846 (    struct Filter_1832  iterable806 ,    struct Theme_172 * (*  fun808 )(    struct Tuple2_193  ) ) {
    struct Filter_1832  it809 = ( (  into_dash_iter1847 ) ( (  iterable806 ) ) );
    return ( ( Map_1831_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct SliceIter_1833   into_dash_iter1849 (    struct Slice_192  self1852 ) {
    return ( (struct SliceIter_1833) { .f_slice = (  self1852 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1832   filter1848 (    struct Slice_192  iterable839 ,   struct envunion1835  fun841 ) {
    struct SliceIter_1833  it842 = ( (  into_dash_iter1849 ) ( (  iterable839 ) ) );
    return ( (struct Filter_1832) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  bool   lam1850 (   struct env1834* env ,    struct Tuple2_193  dref4056 ) {
    return ( (  begins_dash_with1758 ) ( ( dref4056 .field0 ) ,  ( env->name4055 ) ) );
}

static  struct Theme_172 *   snd1851 (    struct Tuple2_193  dref1274 ) {
    return ( dref1274 .field1 );
}

static  struct Maybe_243   match_dash_theme1829 (   struct env200* env ,    struct StrView_27  name4055 ) {
    if ( ( (  null1667 ) ( (  name4055 ) ) ) ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    struct env1834 envinst1834 = {
        .name4055 =  name4055 ,
    };
    return ( (  head1830 ) ( ( (  map1846 ) ( ( (  filter1848 ) ( ( env->all_dash_themes4052 ) ,  ( (struct envunion1835){ .fun = (  bool  (*) (  struct env1834*  ,    struct Tuple2_193  ) )lam1850 , .env =  envinst1834 } ) ) ) ,  (  snd1851 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1787 (   struct env241* env ,    struct Editor_248 *  ed4482 ,    struct StrView_27  cmd4484 ) {
    struct Maybe_967  dref4485 = ( (  parse_dash_int1788 ) ( (  cmd4484 ) ) );
    if ( dref4485.tag == Maybe_967_Just_t ) {
        int32_t  line4487 = ( (  clamp1482 ) ( ( (  i64_dash_i321009 ) ( ( dref4485 .stuff .Maybe_967_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (  num_dash_lines1137 ) ( ( ( * ( (  pane1134 ) ( (  ed4482 ) ) ) ) .f_buf ) ) ) ) );
        int32_t  line4488 = (  op_dash_sub164 ( (  line4487 ) , (  from_dash_integral56 ( 1 ) ) ) );
        ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4482 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4488 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    }
    else {
        if ( dref4485.tag == Maybe_967_None_t ) {
            struct Scanner_1630  temp1793 = ( (  mk_dash_from_dash_strview1632 ) ( (  cmd4484 ) ) );
            struct Scanner_1630 *  sc4489 = ( &temp1793 );
            struct StrView_27  cmd4490 = ( (  take_dash_str_dash_while1794 ) ( (  sc4489 ) ,  (  is_dash_alpha1335 ) ) );
            if ( (  eq485 ( (  cmd4490 ) , ( (  from_dash_string199 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1633 ) ( (  sc4489 ) ,  (  is_dash_whitespace1340 ) ) );
                struct StrView_27  theme_dash_name4493 = ( (  take_dash_str_dash_while1810 ) ( (  sc4489 ) ,  (  lam1826 ) ) );
                struct envunion242  temp1828 = ( (struct envunion242){ .fun = (  struct Maybe_243  (*) (  struct env200*  ,    struct StrView_27  ) )match_dash_theme1829 , .env =  env->envinst200 } );
                (* (*  ed4482 ) .f_cfg ) .f_theme = ( (  or_dash_else1827 ) ( ( temp1828.fun ( &temp1828.env ,  (  theme_dash_name4493 ) ) ) ,  ( ( * (  ed4482 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_458   into_dash_iter1855 (    struct StrBuilder_62  self2864 ) {
    return ( (  chars1698 ) ( (  self2864 ) ) );
}

static  struct Maybe_297   head1853 (    struct StrBuilder_62  it1160 ) {
    struct StrViewIter_458  temp1854 = ( (  into_dash_iter1855 ) ( (  it1160 ) ) );
    return ( (  next463 ) ( ( &temp1854 ) ) );
}

static  bool   null1852 (    struct StrBuilder_62  it1169 ) {
    struct Maybe_297  dref1170 = ( (  head1853 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1861 (   struct env42* env ,    struct List_9 *  list2101 ,    size_t  i2103 ) {
    struct envunion43  temp1862 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range630 , .env =  env->envinst40 } );
    ( temp1862.fun ( &temp1862.env ,  (  list2101 ) ,  (  i2103 ) ,  (  op_dash_add311 ( (  i2103 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1859 (   struct env44* env ,    struct List_9 *  list2117 ) {
    if ( (  eq399 ( ( ( * (  list2117 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1860 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_9 *  ,    size_t  ) )remove1861 , .env =  env->envinst42 } );
    return ( temp1860.fun ( &temp1860.env ,  (  list2117 ) ,  (  op_dash_sub289 ( ( ( * (  list2117 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1857 (   struct env72* env ,    struct StrBuilder_62 *  sb2827 ) {
    struct envunion73  temp1858 = ( (struct envunion73){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_9 *  ) )pop1859 , .env =  env->envinst44 } );
    return ( temp1858.fun ( &temp1858.env ,  ( & ( ( * (  sb2827 ) ) .f_chars ) ) ) );
}

struct envunion1864 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env241 env;
};

struct env1866 {
    ;
    struct Editor_248 *  ed4564;
};

struct envunion1867 {
    enum Unit_8  (*fun) (  struct env1866*  ,    struct StrView_27  );
    struct env1866 env;
};

static  enum Unit_8   if_dash_just1865 (    struct Maybe_80  x1309 ,   struct envunion1867  fun1311 ) {
    struct Maybe_80  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_80_Just_t ) {
        struct envunion1867  temp1868 = (  fun1311 );
        ( temp1868.fun ( &temp1868.env ,  ( dref1312 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1869 (   struct env1866* env ,    struct StrView_27  st4581 ) {
    ( (  free547 ) ( (  st4581 ) ,  ( ( * ( env->ed4564 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1871 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  enum Unit_8   live_dash_search1872 (    struct Editor_248 *  ed4511 ,    struct Pos_26  begin_dash_pos4513 ,    struct StrView_27  query4515 ) {
    if ( ( ! ( (  null1667 ) ( (  query4515 ) ) ) ) ) {
        struct Maybe_1509  dref4516 = ( (  search_dash_from1510 ) ( ( (  pane1134 ) ( (  ed4511 ) ) ) ,  (  begin_dash_pos4513 ) ,  (  query4515 ) ) );
        if ( dref4516.tag == Maybe_1509_Just_t ) {
            ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4511 ) ) ) ,  ( dref4516 .stuff .Maybe_1509_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4516 .stuff .Maybe_1509_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1092_NoChanges ) ) );
        }
        else {
            if ( dref4516.tag == Maybe_1509_None_t ) {
                ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4511 ) ) ) ,  (  begin_dash_pos4513 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4511 ) ) ) ,  (  begin_dash_pos4513 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1874 {
    enum Unit_8  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

static  enum Unit_8   handle_dash_key1087 (   struct env264* env ,    struct Editor_248 *  ed4564 ,    struct Key_270  key4566 ) {
    struct EditorMode_249 *  dref4567 = ( & ( ( * (  ed4564 ) ) .f_mode ) );
    if ( (* dref4567 ).tag == EditorMode_249_Normal_t ) {
        enum Mode_220  dref4568 = ( ( ( * (  ed4564 ) ) .f_pane ) .f_mode );
        switch (  dref4568 ) {
            case Mode_220_Normal : {
                struct envunion269  temp1088 = ( (struct envunion269){ .fun = (  enum Unit_8  (*) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_270  ) )handle_dash_normal_dash_key1089 , .env =  env->envinst253 } );
                ( temp1088.fun ( &temp1088.env ,  (  ed4564 ) ,  (  key4566 ) ) );
                break;
            }
            case Mode_220_Select : {
                struct envunion1615  temp1614 = ( (struct envunion1615){ .fun = (  enum Unit_8  (*) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_270  ) )handle_dash_normal_dash_key1089 , .env =  env->envinst253 } );
                ( temp1614.fun ( &temp1614.env ,  (  ed4564 ) ,  (  key4566 ) ) );
                break;
            }
            case Mode_220_Insert : {
                struct Key_270  dref4569 = (  key4566 );
                if ( dref4569.tag == Key_270_Escape_t ) {
                    ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ,  ( Mode_220_Normal ) ) );
                }
                else {
                    if ( dref4569.tag == Key_270_Enter_t ) {
                        int32_t  indent4570 = ( (  indent_dash_at_dash_line1146 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ,  ( ( ( * ( (  pane1134 ) ( (  ed4564 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion273  temp1616 = ( (struct envunion273){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                        ( temp1616.fun ( &temp1616.env ,  ( (  pane1134 ) ( (  ed4564 ) ) ) ,  ( (  from_dash_charlike1229 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1135 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ) );
                        struct envunion271  temp1617 = ( (struct envunion271){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at_dash_current1305 , .env =  env->envinst226 } );
                        ( temp1617.fun ( &temp1617.env ,  ( (  pane1134 ) ( (  ed4564 ) ) ) ,  (  indent4570 ) ) );
                    }
                    else {
                        if ( dref4569.tag == Key_270_Backspace_t ) {
                            struct envunion266  temp1618 = ( (struct envunion266){ .fun = (  enum Unit_8  (*) (  struct env207*  ,    struct Pane_219 *  ) )backspace1619 , .env =  env->envinst207 } );
                            ( temp1618.fun ( &temp1618.env ,  ( (  pane1134 ) ( (  ed4564 ) ) ) ) );
                        }
                        else {
                            if ( dref4569.tag == Key_270_Char_t ) {
                                struct Array_1622  temp1624 = ( (  from_dash_listlike1625 ) ( ( (struct Array_1622) { ._arr = { ( dref4569 .stuff .Key_270_Char_s .field0 ) } } ) ) );
                                struct StrView_27  s4572 = ( (  from_dash_ascii_dash_slice964 ) ( ( (  as_dash_slice1621 ) ( ( &temp1624 ) ) ) ) );
                                struct envunion1627  temp1626 = ( (struct envunion1627){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                                ( temp1626.fun ( &temp1626.env ,  ( (  pane1134 ) ( (  ed4564 ) ) ) ,  (  s4572 ) ) );
                                ( (  move_dash_right1135 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4567 ).tag == EditorMode_249_Cmd_t ) {
            struct Key_270  dref4575 = (  key4566 );
            if ( dref4575.tag == Key_270_Escape_t ) {
                ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ,  ( (* dref4567 ) .stuff .EditorMode_249_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                (*  ed4564 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                (* (*  ed4564 ) .f_cfg ) .f_theme = ( ( * (  ed4564 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4575.tag == Key_270_Enter_t ) {
                    struct envunion272  temp1628 = ( (struct envunion272){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Editor_248 *  ,    struct StrView_27  ) )run_dash_cmd1629 , .env =  env->envinst244 } );
                    ( temp1628.fun ( &temp1628.env ,  (  ed4564 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4567 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1702 ) ( ( & ( (* dref4567 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ,  ( ( * ( (  pane1134 ) ( (  ed4564 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                    (*  ed4564 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                    (*  ed4564 ) .f_og_dash_theme = ( ( * ( ( * (  ed4564 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref4575.tag == Key_270_Char_t ) {
                        struct envunion267  temp1784 = ( (struct envunion267){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
                        ( temp1784.fun ( &temp1784.env ,  ( & ( (* dref4567 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1785 ) ( ( dref4575 .stuff .Key_270_Char_s .field0 ) ) ) ) );
                        struct envunion265  temp1786 = ( (struct envunion265){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  ) )live_dash_cmd1787 , .env =  env->envinst241 } );
                        ( temp1786.fun ( &temp1786.env ,  (  ed4564 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4567 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4575.tag == Key_270_Backspace_t ) {
                            if ( ( ! ( (  null1852 ) ( ( (* dref4567 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion268  temp1856 = ( (struct envunion268){ .fun = (  enum Unit_8  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1857 , .env =  env->envinst72 } );
                                ( temp1856.fun ( &temp1856.env ,  ( & ( (* dref4567 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1864  temp1863 = ( (struct envunion1864){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  ) )live_dash_cmd1787 , .env =  env->envinst241 } );
                            ( temp1863.fun ( &temp1863.env ,  (  ed4564 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4567 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4567 ).tag == EditorMode_249_Search_t ) {
                struct Key_270  dref4579 = (  key4566 );
                if ( dref4579.tag == Key_270_Escape_t ) {
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ,  ( (* dref4567 ) .stuff .EditorMode_249_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                    (*  ed4564 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                }
                else {
                    if ( dref4579.tag == Key_270_Enter_t ) {
                        ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4564 ) ) ) ,  ( ( * ( (  pane1134 ) ( (  ed4564 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1134 ) ( (  ed4564 ) ) ) ) .f_sel ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                        struct env1866 envinst1866 = {
                            .ed4564 =  ed4564 ,
                        };
                        ( (  if_dash_just1865 ) ( ( ( * (  ed4564 ) ) .f_search_dash_term ) ,  ( (struct envunion1867){ .fun = (  enum Unit_8  (*) (  struct env1866*  ,    struct StrView_27  ) )lam1869 , .env =  envinst1866 } ) ) );
                        if ( ( ! ( (  null1852 ) ( ( (* dref4567 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4582 = ( ( * ( (  pane1134 ) ( (  ed4564 ) ) ) ) .f_cursor );
                            struct Pos_26  from4583 = ( (  or_dash_else1400 ) ( ( ( * ( (  pane1134 ) ( (  ed4564 ) ) ) ) .f_sel ) ,  (  to4582 ) ) );
                            (*  ed4564 ) .f_search_dash_term = ( ( Maybe_80_Just ) ( ( (  as_dash_str1470 ) ( ( & ( (* dref4567 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4564 ) .f_search_dash_term = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
                        }
                        (*  ed4564 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                    }
                    else {
                        if ( dref4579.tag == Key_270_Char_t ) {
                            struct envunion1871  temp1870 = ( (struct envunion1871){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
                            ( temp1870.fun ( &temp1870.env ,  ( & ( (* dref4567 ) .stuff .EditorMode_249_Search_s .field1 ) ) ,  ( (  ascii_dash_char1785 ) ( ( dref4579 .stuff .Key_270_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1872 ) ( (  ed4564 ) ,  ( (* dref4567 ) .stuff .EditorMode_249_Search_s .field0 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4567 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4579.tag == Key_270_Backspace_t ) {
                                if ( ( ! ( (  null1852 ) ( ( (* dref4567 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1874  temp1873 = ( (struct envunion1874){ .fun = (  enum Unit_8  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1857 , .env =  env->envinst72 } );
                                    ( temp1873.fun ( &temp1873.env ,  ( & ( (* dref4567 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1872 ) ( (  ed4564 ) ,  ( (* dref4567 ) .stuff .EditorMode_249_Search_s .field0 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4567 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) );
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

static  bool   resize_dash_screen_dash_if_dash_needed1877 (   struct env94* env ,    struct Screen_276 *  screen3549 ) {
    struct Tui_90 *  tui3550 = ( ( * (  screen3549 ) ) .f_tui );
    struct envunion95  temp1878 = ( (struct envunion95){ .fun = (  bool  (*) (  struct env87*  ,    struct Tui_90 *  ) )update_dash_dimensions884 , .env =  env->envinst87 } );
    bool  updated_dash_dimensions3551 = ( temp1878.fun ( &temp1878.env ,  (  tui3550 ) ) );
    if ( ( ! (  updated_dash_dimensions3551 ) ) ) {
        return ( false );
    }
    (*  screen3549 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3552 = ( ( * ( ( * (  screen3549 ) ) .f_tui ) ) .f_width );
    uint32_t  h3553 = ( ( * ( ( * (  screen3549 ) ) .f_tui ) ) .f_height );
    size_t  nusz3554 = ( (  u32_dash_size833 ) ( (  op_dash_mul167 ( (  w3552 ) , (  h3553 ) ) ) ) );
    if ( (  cmp290 ( (  nusz3554 ) , ( ( ( * (  screen3549 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_276  nuscreen3555 = ( (  mk_dash_screen827 ) ( (  tui3550 ) ,  ( ( * (  screen3549 ) ) .f_al ) ) );
    (*  screen3549 ) .f_current = ( (  nuscreen3555 ) .f_current );
    (*  screen3549 ) .f_previous = ( (  nuscreen3555 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1879 (    struct Tui_90 *  tui3476 ) {
    bool  redraw3477 = ( ( * (  tui3476 ) ) .f_should_dash_redraw );
    (*  tui3476 ) .f_should_dash_redraw = ( false );
    return (  redraw3477 );
}

struct env1883 {
    ;
    struct Slice_277  s1930;
    struct Cell_278 (*  fun1932 )(    struct Cell_278  );
    ;
    ;
};

struct envunion1884 {
    enum Unit_8  (*fun) (  struct env1883*  ,    int32_t  );
    struct env1883 env;
};

static  enum Unit_8   for_dash_each1882 (    struct Range_150  iterable1092 ,   struct envunion1884  fun1094 ) {
    struct RangeIter_153  temp1885 = ( (  into_dash_iter154 ) ( (  iterable1092 ) ) );
    struct RangeIter_153 *  it1095 = ( &temp1885 );
    while ( ( true ) ) {
        struct Maybe_155  dref1096 = ( (  next156 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_155_Just_t ) {
                struct envunion1884  temp1886 = (  fun1094 );
                ( temp1886.fun ( &temp1886.env ,  ( dref1096 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1887 (   struct env1883* env ,    int32_t  i1934 ) {
    return ( (  set848 ) ( ( env->s1930 ) ,  ( (  i32_dash_size412 ) ( (  i1934 ) ) ) ,  ( ( env->fun1932 ) ( (  elem_dash_get852 ( ( env->s1930 ) , ( (  i32_dash_size412 ) ( (  i1934 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1881 (    struct Slice_277  s1930 ,    struct Cell_278 (*  fun1932 )(    struct Cell_278  ) ) {
    struct env1883 envinst1883 = {
        .s1930 =  s1930 ,
        .fun1932 =  fun1932 ,
    };
    ( (  for_dash_each1882 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( ( (  s1930 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1884){ .fun = (  enum Unit_8  (*) (  struct env1883*  ,    int32_t  ) )lam1887 , .env =  envinst1883 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_278   lam1888 (    struct Cell_278  dref3513 ) {
    return ( (  default_dash_cell860 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1880 (    struct Screen_276 *  screen3512 ) {
    ( (  map1881 ) ( ( ( * (  screen3512 ) ) .f_current ) ,  (  lam1888 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1889 (    struct Screen_276 *  screen3558 ,    struct Color_138  c3560 ) {
    (*  screen3558 ) .f_default_dash_fg = (  c3560 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1890 (    struct Screen_276 *  screen3563 ,    struct Color_138  c3565 ) {
    (*  screen3563 ) .f_default_dash_bg = (  c3565 );
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

static  struct Cell_278 *   or_dash_fail1898 (    struct Maybe_1899  x1744 ,    struct StrView_27  errmsg1746 ) {
    struct Maybe_1899  dref1747 = (  x1744 );
    if ( dref1747.tag == Maybe_1899_None_t ) {
        ( (  panic1212 ) ( (  errmsg1746 ) ) );
        return ( (  undefined1900 ) ( ) );
    }
    else {
        if ( dref1747.tag == Maybe_1899_Just_t ) {
            return ( dref1747 .stuff .Maybe_1899_Just_s .field0 );
        }
    }
}

static  struct Maybe_1899   get_dash_cell_dash_ptr1902 (    struct Screen_276 *  screen3579 ,    int32_t  x3581 ,    int32_t  y3583 ) {
    int32_t  w3584 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3579 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  x3581 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  x3581 ) , (  w3584 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1899) { .tag = Maybe_1899_None_t } );
    }
    if ( ( (  cmp157 ( (  y3583 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3583 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3579 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1899) { .tag = Maybe_1899_None_t } );
    }
    size_t  i3585 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3583 ) , (  w3584 ) ) ) , (  x3581 ) ) ) ) );
    return ( ( Maybe_1899_Just ) ( ( (  get_dash_ptr849 ) ( ( ( * (  screen3579 ) ) .f_current ) ,  (  i3585 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1891 (    struct Screen_276 *  screen3588 ) {
    struct RangeIter_153  temp1892 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3588 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1895 =  next156 (&temp1892);
        if (  __cond1895 .tag == 0 ) {
            break;
        }
        int32_t  y3590 =  __cond1895 .stuff .Maybe_155_Just_s .field0;
        struct RangeIter_153  temp1896 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3588 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_155  __cond1897 =  next156 (&temp1896);
            if (  __cond1897 .tag == 0 ) {
                break;
            }
            int32_t  x3592 =  __cond1897 .stuff .Maybe_155_Just_s .field0;
            struct Cell_278 *  cell3593 = ( (  or_dash_fail1898 ) ( ( (  get_dash_cell_dash_ptr1902 ) ( (  screen3588 ) ,  (  x3592 ) ,  (  y3590 ) ) ) ,  ( (  from_dash_string199 ) ( ( "no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3593 ) .f_bg = ( ( * (  screen3588 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1904 {
    enum Unit_8  (*fun) (  struct env274*  ,    struct Screen_276 *  ,    struct Editor_248 *  );
    struct env274 env;
};

static  int32_t   screen_dash_width1909 (    struct ScreenDims_279  sd4135 ) {
    return (  op_dash_add159 ( (  op_dash_sub164 ( ( (  sd4135 ) .f_to_dash_sx ) , ( (  sd4135 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1910 (    struct ScreenDims_279  sd4138 ) {
    return (  op_dash_add159 ( (  op_dash_sub164 ( ( (  sd4138 ) .f_to_dash_sy ) , ( (  sd4138 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1908 (    struct Pane_219 *  pane4141 ,    struct ScreenDims_279  sd4143 ) {
    struct Pos_26  cur4144 = ( ( * (  pane4141 ) ) .f_cursor );
    int32_t  cur_dash_sx4145 = ( (  pos_dash_vi1095 ) ( ( ( * (  pane4141 ) ) .f_buf ) ,  (  cur4144 ) ) );
    struct ScreenCursorOffset_221  sc_dash_off4146 = ( ( * (  pane4141 ) ) .f_sc_dash_off );
    int32_t  sw4147 = (  op_dash_sub164 ( ( (  screen_dash_width1909 ) ( (  sd4143 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh4148 = (  op_dash_sub164 ( ( (  screen_dash_height1910 ) ( (  sd4143 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin4149 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4150 = ( (  pos_dash_vi1095 ) ( ( ( * (  pane4141 ) ) .f_buf ) ,  (  cur4144 ) ) );
    int32_t  csx4151 = (  op_dash_sub164 ( (  csi4150 ) , ( (  sc_dash_off4146 ) .f_screen_dash_left ) ) );
    int32_t  csy4152 = (  op_dash_sub164 ( ( (  cur4144 ) .f_line ) , ( (  sc_dash_off4146 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4153 = ( (  sc_dash_off4146 ) .f_screen_dash_left );
    if ( (  cmp157 ( (  csx4151 ) , (  margin4149 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4153 = (  op_dash_sub164 ( (  csi4150 ) , (  margin4149 ) ) );
    } else {
        if ( (  cmp157 ( (  csx4151 ) , (  op_dash_sub164 ( (  sw4147 ) , (  margin4149 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4153 = (  op_dash_add159 ( (  op_dash_sub164 ( (  csi4150 ) , (  sw4147 ) ) ) , (  margin4149 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4154 = ( (  max1110 ) ( (  nu_dash_screen_dash_left4153 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4155 = ( (  sc_dash_off4146 ) .f_screen_dash_top );
    if ( (  cmp157 ( (  csy4152 ) , (  margin4149 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4155 = (  op_dash_sub164 ( ( (  cur4144 ) .f_line ) , (  margin4149 ) ) );
    } else {
        if ( (  cmp157 ( (  csy4152 ) , (  op_dash_sub164 ( (  sh4148 ) , (  margin4149 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4155 = (  op_dash_add159 ( (  op_dash_sub164 ( ( (  cur4144 ) .f_line ) , (  sh4148 ) ) ) , (  margin4149 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4156 = ( (  max1110 ) ( (  nu_dash_screen_dash_top4155 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane4141 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_221) { .f_screen_dash_top = (  nu_dash_screen_dash_top4156 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4154 ) } );
    return ( Unit_8_Unit );
}

struct IntStrIter_1912 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1912   into_dash_iter1914 (    struct IntStrIter_1912  self1443 ) {
    return (  self1443 );
}

struct env1918 {
    int32_t  base1228;
    ;
};

struct envunion1919 {
    int32_t  (*fun) (  struct env1918*  ,    int32_t  ,    int32_t  );
    struct env1918 env;
};

static  int32_t   reduce1917 (    struct Range_150  iterable1111 ,    int32_t  base1113 ,   struct envunion1919  fun1115 ) {
    int32_t  x1116 = (  base1113 );
    struct RangeIter_153  it1117 = ( (  into_dash_iter154 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1118 = ( (  next156 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_155_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_155_Just_t ) {
                struct envunion1919  temp1920 = (  fun1115 );
                x1116 = ( temp1920.fun ( &temp1920.env ,  ( dref1118 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  int32_t   lam1923 (   struct env1918* env ,    int32_t  item1232 ,    int32_t  x1234 ) {
    return (  op_dash_mul1524 ( (  x1234 ) , ( env->base1228 ) ) );
}

static  int32_t   pow1916 (    int32_t  base1228 ,    int32_t  p1230 ) {
    struct env1918 envinst1918 = {
        .base1228 =  base1228 ,
    };
    return ( (  reduce1917 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1230 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion1919){ .fun = (  int32_t  (*) (  struct env1918*  ,    int32_t  ,    int32_t  ) )lam1923 , .env =  envinst1918 } ) ) );
}

static  struct Maybe_297   next1915 (    struct IntStrIter_1912 *  self1446 ) {
    if ( ( ( * (  self1446 ) ) .f_negative ) ) {
        (*  self1446 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    int32_t  trim_dash_down1447 = ( (  pow1916 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1448 = (  op_dash_div1523 ( ( ( * (  self1446 ) ) .f_int ) , (  trim_dash_down1447 ) ) );
    int32_t  upper_dash_mask1449 = (  op_dash_mul1524 ( (  op_dash_div1523 ( (  upper1448 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1450 = ( ( (  cast304 ) ( (  op_dash_sub164 ( (  upper1448 ) , (  upper_dash_mask1449 ) ) ) ) ) );
    (*  self1446 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1451 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1450 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1451 ) ) );
}

static  size_t   reduce1913 (    struct IntStrIter_1912  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct IntStrIter_1912  it1117 = ( (  into_dash_iter1914 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1118 = ( (  next1915 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_297_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_297_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  size_t   lam1926 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add311 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1911 (    struct IntStrIter_1912  it1122 ) {
    return ( (  reduce1913 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1926 ) ) );
}

static  int32_t   count_dash_digits1929 (    int32_t  self1454 ) {
    if ( (  eq558 ( (  self1454 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1455 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp157 ( (  self1454 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1454 = (  op_dash_div1523 ( (  self1454 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1455 = (  op_dash_add159 ( (  digits1455 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1455 );
}

static  struct IntStrIter_1912   int_dash_iter1928 (    int32_t  int1458 ) {
    if ( (  cmp157 ( (  int1458 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1912) { .f_int = (  op_dash_neg801 ( (  int1458 ) ) ) , .f_len = ( (  count_dash_digits1929 ) ( (  op_dash_neg801 ( (  int1458 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1912) { .f_int = (  int1458 ) , .f_len = ( (  count_dash_digits1929 ) ( (  int1458 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1912   chars1927 (    int32_t  self1467 ) {
    return ( (  int_dash_iter1928 ) ( (  self1467 ) ) );
}

static  enum Unit_8   set_dash_screen_dash_colors1933 (    struct Screen_276 *  screen3568 ,    struct Color_138  fg3570 ,    struct Color_138  bg3572 ) {
    (*  screen3568 ) .f_default_dash_fg = (  fg3570 );
    (*  screen3568 ) .f_default_dash_bg = (  bg3572 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors1932 (    struct Screen_276 *  screen4159 ,    struct Colors_173  colors4161 ) {
    ( (  set_dash_screen_dash_colors1933 ) ( (  screen4159 ) ,  ( (  colors4161 ) .f_fg ) ,  ( (  colors4161 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   abs1934 (    int32_t  x1352 ) {
    return ( (  cmp157 ( (  x1352 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ? (  x1352 ) : (  op_dash_neg801 ( (  x1352 ) ) ) );
}

struct Map_1937 {
    struct IntStrIter_1912  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1937 Map_1937_Map (  struct IntStrIter_1912  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1937 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1937   into_dash_iter1939 (    struct Map_1937  self797 ) {
    return (  self797 );
}

static  struct Maybe_155   next1940 (    struct Map_1937 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1915 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_155_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1938 (    struct Map_1937  iterable1111 ,    int32_t  base1113 ,    int32_t (*  fun1115 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1116 = (  base1113 );
    struct Map_1937  it1117 = ( (  into_dash_iter1939 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1118 = ( (  next1940 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_155_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_155_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1116 ) ) );
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

static  int32_t   lam1943 (    int32_t  v1130 ,    int32_t  s1132 ) {
    return (  op_dash_add159 ( (  v1130 ) , (  s1132 ) ) );
}

static  int32_t   sum1936 (    struct Map_1937  it1128 ) {
    return ( (  reduce1938 ) ( (  it1128 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1943 ) ) );
}

static  struct Map_1937   map1944 (    struct IntStrIter_1912  iterable806 ,    int32_t (*  fun808 )(    struct Char_65  ) ) {
    struct IntStrIter_1912  it809 = ( (  into_dash_iter1914 ) ( (  iterable806 ) ) );
    return ( ( Map_1937_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  enum Unit_8   put_dash_char1948 (    struct Screen_276 *  screen3596 ,    struct Char_65  c3598 ,    int32_t  x3600 ,    int32_t  y3602 ) {
    int32_t  w3603 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3596 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp157 ( (  x3600 ) , (  w3603 ) ) != 0 ) || (  cmp157 ( (  y3602 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3596 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp157 ( (  x3600 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp157 ( (  y3602 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3604 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3602 ) , (  w3603 ) ) ) , (  x3600 ) ) ) ) );
    struct Color_138  fg3605 = ( ( * (  screen3596 ) ) .f_default_dash_fg );
    struct Color_138  bg3606 = ( ( * (  screen3596 ) ) .f_default_dash_bg );
    struct Char_65  c3607 = (  c3598 );
    int32_t  char_dash_width3608 = ( (  wcwidth1111 ) ( (  c3607 ) ) );
    if ( ( (  cmp157 ( (  x3600 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp157 ( ( (  elem_dash_get852 ( ( ( * (  screen3596 ) ) .f_current ) , (  op_dash_sub289 ( (  i3604 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_278  pc3609 = (  elem_dash_get852 ( ( ( * (  screen3596 ) ) .f_current ) , (  op_dash_sub289 ( (  i3604 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set848 ) ( ( ( * (  screen3596 ) ) .f_current ) ,  (  op_dash_sub289 ( (  i3604 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_278) { .f_c = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3609 ) .f_fg ) , .f_bg = ( (  pc3609 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set848 ) ( ( ( * (  screen3596 ) ) .f_current ) ,  (  i3604 ) ,  ( (struct Cell_278) { .f_c = (  c3607 ) , .f_fg = (  fg3605 ) , .f_bg = (  bg3606 ) , .f_char_dash_width = (  char_dash_width3608 ) } ) ) );
    struct RangeIter_153  temp1949 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( (  x3600 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min658 ) ( (  op_dash_sub164 ( (  op_dash_add159 ( (  x3600 ) , (  char_dash_width3608 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3603 ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1950 =  next156 (&temp1949);
        if (  __cond1950 .tag == 0 ) {
            break;
        }
        int32_t  xx3611 =  __cond1950 .stuff .Maybe_155_Just_s .field0;
        size_t  i3612 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3602 ) , (  w3603 ) ) ) , (  xx3611 ) ) ) ) );
        ( (  set848 ) ( ( ( * (  screen3596 ) ) .f_current ) ,  (  i3612 ) ,  ( (struct Cell_278) { .f_c = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3605 ) , .f_bg = (  bg3606 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1945 (    struct Screen_276 *  screen3615 ,    int32_t  s3617 ,    int32_t  x3619 ,    int32_t  y3621 ) {
    int32_t  w3622 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3615 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3621 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3621 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3615 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3623 = (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3621 ) , (  w3622 ) ) ) , (  x3619 ) ) );
    int32_t  x3624 = ( (  min658 ) ( (  x3619 ) ,  (  w3622 ) ) );
    size_t  max_dash_len3625 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3622 ) , (  x3624 ) ) ) ) );
    int32_t  xx3626 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_1912  temp1946 =  into_dash_iter1914 ( ( (  chars1927 ) ( (  s3617 ) ) ) );
    while (true) {
        struct Maybe_297  __cond1947 =  next1915 (&temp1946);
        if (  __cond1947 .tag == 0 ) {
            break;
        }
        struct Char_65  c3628 =  __cond1947 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3615 ) ,  (  c3628 ) ,  (  op_dash_add159 ( (  x3624 ) , (  xx3626 ) ) ) ,  (  y3621 ) ) );
        xx3626 = (  op_dash_add159 ( (  xx3626 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3628 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1935 (    struct Screen_276 *  screen3631 ,    int32_t  s3633 ,    int32_t  x3635 ,    int32_t  y3637 ) {
    int32_t  slen3638 = ( (  sum1936 ) ( ( (  map1944 ) ( ( (  chars1927 ) ( (  s3633 ) ) ) ,  (  rendered_dash_wcwidth1109 ) ) ) ) );
    int32_t  w3639 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3631 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3640 = (  op_dash_sub164 ( (  op_dash_sub164 ( (  w3639 ) , (  x3635 ) ) ) , (  slen3638 ) ) );
    ( (  draw_dash_str1945 ) ( (  screen3631 ) ,  (  s3633 ) ,  (  x3640 ) ,  (  y3637 ) ) );
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

static  enum Unit_8   print_dash_str1957 (    struct StrConcat_1952  self1527 ) {
    struct StrConcat_1952  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str389 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1956 (    struct StrConcat_1955  self1527 ) {
    struct StrConcat_1955  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str1957 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1953 (    struct StrConcat_1954  self1527 ) {
    struct StrConcat_1954  dref1528 = (  self1527 );
    if ( true ) {
        ( (  print_dash_str1956 ) ( ( dref1528 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1528 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1951 (    bool  cond1737 ,    struct StrConcat_1952  msg1739 ) {
    if ( ( ! (  cond1737 ) ) ) {
        ( (  print_dash_str1953 ) ( ( ( StrConcat_1954_StrConcat ) ( ( ( StrConcat_1955_StrConcat ) ( ( (  from_dash_string199 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1739 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1959 {
    struct StrViewIter_458  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1959   into_dash_iter1960 (    struct AppendIter_1959  self1037 ) {
    return (  self1037 );
}

static  struct AppendIter_1959   append1961 (    struct StrViewIter_458  it1024 ,    struct Char_65  e1026 ) {
    return ( (struct AppendIter_1959) { .f_it = ( (  into_dash_iter459 ) ( (  it1024 ) ) ) , .f_elem = (  e1026 ) , .f_appended = ( false ) } );
}

static  struct Maybe_297   next1963 (    struct AppendIter_1959 *  self1040 ) {
    struct Maybe_297  dref1041 = ( (  next463 ) ( ( & ( ( * (  self1040 ) ) .f_it ) ) ) );
    if ( dref1041.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1041 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1041.tag == Maybe_297_None_t ) {
            if ( ( ! ( ( * (  self1040 ) ) .f_appended ) ) ) {
                (*  self1040 ) .f_appended = ( true );
                return ( ( Maybe_297_Just ) ( ( ( * (  self1040 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  bool   between1965 (    struct Pos_26  c1355 ,    struct Pos_26  l1357 ,    struct Pos_26  r1359 ) {
    struct Pos_26  from1360 = ( (  min554 ) ( (  l1357 ) ,  (  r1359 ) ) );
    struct Pos_26  to1361 = ( (  max556 ) ( (  l1357 ) ,  (  r1359 ) ) );
    return ( (  cmp555 ( (  from1360 ) , (  c1355 ) ) != 2 ) && (  cmp555 ( (  c1355 ) , (  to1361 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1964 (    struct Pane_219 *  pane4127 ,    struct Pos_26  pos4129 ) {
    return ( {  struct Maybe_34  dref4130 = ( ( * (  pane4127 ) ) .f_sel ) ; dref4130.tag == Maybe_34_Just_t ? ( (  between1965 ) ( (  pos4129 ) ,  ( ( * (  pane4127 ) ) .f_cursor ) ,  ( dref4130 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1967 {
    ;
    struct Theme_172 *  theme4171;
    struct Screen_276 *  screen4164;
    ;
};

struct envunion1968 {
    enum Unit_8  (*fun) (  struct env1967*  ,    enum HighlightType_20  );
    struct env1967 env;
};

static  enum Unit_8   if_dash_just1966 (    struct Maybe_203  x1309 ,   struct envunion1968  fun1311 ) {
    struct Maybe_203  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_203_Just_t ) {
        struct envunion1968  temp1969 = (  fun1311 );
        ( temp1969.fun ( &temp1969.env ,  ( dref1312 .stuff .Maybe_203_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_203_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1974 (    struct List_17 *  l2140 ,    size_t  new_dash_count2142 ) {
    (*  l2140 ) .f_count = ( (  min467 ) ( (  new_dash_count2142 ) ,  ( ( * (  l2140 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_297   head1977 (    struct Scanner_955 *  it1160 ) {
    struct Scanner_955  temp1978 = ( (  into_dash_iter971 ) ( (  it1160 ) ) );
    return ( (  next977 ) ( ( &temp1978 ) ) );
}

static  bool   null1976 (    struct Scanner_955 *  it1169 ) {
    struct Maybe_297  dref1170 = ( (  head1977 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_297   peek1979 (    struct Scanner_955 *  sc3247 ) {
    return ( (  head1343 ) ( ( ( * (  sc3247 ) ) .f_s ) ) );
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

static  bool   try_dash_char1980 (    struct Scanner_955 *  sc3250 ,    struct Char_65  char3252 ) {
    if ( (  eq1981 ( ( (  peek1979 ) ( (  sc3250 ) ) ) , ( ( Maybe_297_Just ) ( (  char3252 ) ) ) ) ) ) {
        ( (  drop_prime_980 ) ( (  sc3250 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   char_dash_satisfies1983 (    struct Scanner_955 *  sc3255 ,    bool (*  condition3257 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3258 = ( (  head1343 ) ( ( ( * (  sc3255 ) ) .f_s ) ) );
    if ( dref3258.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3257 ) ( ( dref3258 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3255 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3258.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1982 (    struct Scanner_955 *  sc3273 ,    bool (*  condition3275 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1983 ) ( (  sc3273 ) ,  (  condition3275 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1984 (    struct Char_65  c3974 ) {
    return ( !  eq469 ( (  c3974 ) , ( (  from_dash_charlike346 ) ( ( "]" ) ,  ( 1 ) ) ) ) );
}

struct TypeSize_1991 {
    size_t  f_size;
};

static  struct TypeSize_1991   get_dash_typesize1990 (  ) {
    struct Highlight_19  temp1992;
    return ( (struct TypeSize_1991) { .f_size = ( sizeof( ( (  temp1992 ) ) ) ) } );
}

static  struct Highlight_19 *   cast_dash_ptr1993 (    void *  p359 ) {
    return ( (struct Highlight_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1989 (    enum CAllocator_10  dref1978 ,    size_t  count1980 ) {
    if (!(  dref1978 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1981 = ( ( ( (  get_dash_typesize1990 ) ( ) ) ) .f_size );
    struct Highlight_19 *  ptr1982 = ( (  cast_dash_ptr1993 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1981 ) , (  count1980 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1982 ) , .f_count = (  count1980 ) } );
}

struct env1994 {
    ;
    struct Slice_18  new_dash_slice2067;
    ;
};

struct Tuple2_1996 {
    struct Highlight_19  field0;
    int32_t  field1;
};

static struct Tuple2_1996 Tuple2_1996_Tuple2 (  struct Highlight_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1996 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1995 {
    enum Unit_8  (*fun) (  struct env1994*  ,    struct Tuple2_1996  );
    struct env1994 env;
};

static  struct Highlight_19 *   offset_dash_ptr2000 (    struct Highlight_19 *  x338 ,    int64_t  count340 ) {
    struct Highlight_19  temp2001;
    return ( (struct Highlight_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2001 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_19 *   get_dash_ptr1999 (    struct Slice_18  slice1776 ,    size_t  i1778 ) {
    if ( ( (  cmp290 ( (  i1778 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1778 ) , ( (  slice1776 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1778 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1776 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_19 *  elem_dash_ptr1779 = ( (  offset_dash_ptr2000 ) ( ( (  slice1776 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1778 ) ) ) ) );
    return (  elem_dash_ptr1779 );
}

static  enum Unit_8   set1998 (    struct Slice_18  slice1793 ,    size_t  i1795 ,    struct Highlight_19  x1797 ) {
    struct Highlight_19 *  ep1798 = ( (  get_dash_ptr1999 ) ( (  slice1793 ) ,  (  i1795 ) ) );
    (*  ep1798 ) = (  x1797 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1997 (   struct env1994* env ,    struct Tuple2_1996  dref2068 ) {
    return ( (  set1998 ) ( ( env->new_dash_slice2067 ) ,  ( (  i32_dash_size412 ) ( ( dref2068 .field1 ) ) ) ,  ( dref2068 .field0 ) ) );
}

struct SliceIter_2004 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2003 {
    struct SliceIter_2004  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_2003   into_dash_iter2006 (    struct Zip_2003  self929 ) {
    return (  self929 );
}

struct Maybe_2007 {
    enum {
        Maybe_2007_None_t,
        Maybe_2007_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1996  field0;
        } Maybe_2007_Just_s;
    } stuff;
};

static struct Maybe_2007 Maybe_2007_Just (  struct Tuple2_1996  field0 ) {
    return ( struct Maybe_2007 ) { .tag = Maybe_2007_Just_t, .stuff = { .Maybe_2007_Just_s = { .field0 = field0 } } };
};

struct Maybe_2009 {
    enum {
        Maybe_2009_None_t,
        Maybe_2009_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_19  field0;
        } Maybe_2009_Just_s;
    } stuff;
};

static struct Maybe_2009 Maybe_2009_Just (  struct Highlight_19  field0 ) {
    return ( struct Maybe_2009 ) { .tag = Maybe_2009_Just_t, .stuff = { .Maybe_2009_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2009   next2010 (    struct SliceIter_2004 *  self1858 ) {
    size_t  off1859 = ( ( * (  self1858 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1858 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2009) { .tag = Maybe_2009_None_t } );
    }
    struct Highlight_19  elem1860 = ( * ( (  offset_dash_ptr2000 ) ( ( ( ( * (  self1858 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1859 ) ) ) ) ) );
    (*  self1858 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2009_Just ) ( (  elem1860 ) ) );
}

static  struct Maybe_2007   next2008 (    struct Zip_2003 *  self932 ) {
    struct Zip_2003  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_2009  dref934 = ( (  next2010 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_2009_None_t ) {
            return ( (struct Maybe_2007) { .tag = Maybe_2007_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_2009_Just_t ) {
                struct Maybe_155  dref936 = ( (  next422 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_2007) { .tag = Maybe_2007_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_155_Just_t ) {
                        ( (  next2010 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2007_Just ) ( ( ( Tuple2_1996_Tuple2 ) ( ( dref934 .stuff .Maybe_2009_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2002 (    struct Zip_2003  iterable1092 ,   struct envunion1995  fun1094 ) {
    struct Zip_2003  temp2005 = ( (  into_dash_iter2006 ) ( (  iterable1092 ) ) );
    struct Zip_2003 *  it1095 = ( &temp2005 );
    while ( ( true ) ) {
        struct Maybe_2007  dref1096 = ( (  next2008 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_2007_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_2007_Just_t ) {
                struct envunion1995  temp2011 = (  fun1094 );
                ( temp2011.fun ( &temp2011.env ,  ( dref1096 .stuff .Maybe_2007_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2004   into_dash_iter2013 (    struct Slice_18  self1852 ) {
    return ( (struct SliceIter_2004) { .f_slice = (  self1852 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2003   zip2012 (    struct Slice_18  left940 ,    struct FromIter_416  right942 ) {
    struct SliceIter_2004  left_dash_it943 = ( (  into_dash_iter2013 ) ( (  left940 ) ) );
    struct FromIter_416  right_dash_it944 = ( (  into_dash_iter426 ) ( (  right942 ) ) );
    return ( (struct Zip_2003) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  void *   cast_dash_ptr2015 (    struct Highlight_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2014 (    enum CAllocator_10  dref1984 ,    struct Slice_18  slice1986 ) {
    if (!(  dref1984 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2015 ) ( ( (  slice1986 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1988 (   struct env5* env ,    struct List_17 *  list2066 ) {
    if ( (  eq399 ( ( ( * (  list2066 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2066 ) .f_elements = ( (  allocate1989 ) ( ( ( * (  list2066 ) ) .f_al ) ,  ( env->starting_dash_size2061 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2066 ) ) .f_count ) , ( ( ( * (  list2066 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2067 = ( (  allocate1989 ) ( ( ( * (  list2066 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2066 ) ) .f_count ) , ( env->growth_dash_factor2062 ) ) ) ) );
            struct env1994 envinst1994 = {
                .new_dash_slice2067 =  new_dash_slice2067 ,
            };
            struct envunion1995  fun2071 = ( (struct envunion1995){ .fun = (  enum Unit_8  (*) (  struct env1994*  ,    struct Tuple2_1996  ) )lam1997 , .env =  envinst1994 } );
            ( (  for_dash_each2002 ) ( ( (  zip2012 ) ( ( ( * (  list2066 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2071 ) ) );
            ( (  free2014 ) ( ( ( * (  list2066 ) ) .f_al ) ,  ( ( * (  list2066 ) ) .f_elements ) ) );
            (*  list2066 ) .f_elements = (  new_dash_slice2067 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1986 (   struct env35* env ,    struct List_17 *  list2074 ,    struct Highlight_19  elem2076 ) {
    struct envunion36  temp1987 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_17 *  ) )grow_dash_if_dash_full1988 , .env =  env->envinst5 } );
    ( temp1987.fun ( &temp1987.env ,  (  list2074 ) ) );
    ( (  set1998 ) ( ( ( * (  list2074 ) ) .f_elements ) ,  ( ( * (  list2074 ) ) .f_count ) ,  (  elem2076 ) ) );
    (*  list2074 ) .f_count = (  op_dash_add311 ( ( ( * (  list2074 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2017 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2019 (    struct Scanner_955 *  sc3255 ,    bool (*  condition3257 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3258 = ( (  head1343 ) ( ( ( * (  sc3255 ) ) .f_s ) ) );
    if ( dref3258.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3257 ) ( ( dref3258 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3255 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3258.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2018 (    struct Scanner_955 *  sc3273 ,    bool (*  condition3275 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2019 ) ( (  sc3273 ) ,  (  condition3275 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2020 (    struct Char_65  c3977 ) {
    return ( ( !  eq469 ( (  c3977 ) , ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) && ( !  eq469 ( (  c3977 ) , ( (  from_dash_charlike346 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2022 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2023 (    struct Scanner_955 *  sc3255 ,    bool (*  condition3257 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3258 = ( (  head1343 ) ( ( ( * (  sc3255 ) ) .f_s ) ) );
    if ( dref3258.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3257 ) ( ( dref3258 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3255 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3258.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2025 (    struct Scanner_955 *  sc3255 ,    bool (*  condition3257 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3258 = ( (  head1343 ) ( ( ( * (  sc3255 ) ) .f_s ) ) );
    if ( dref3258.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3257 ) ( ( dref3258 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3255 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3258.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2024 (    struct Scanner_955 *  sc3273 ,    bool (*  condition3275 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2025 ) ( (  sc3273 ) ,  (  condition3275 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2026 (    struct Char_65  c3980 ) {
    return ( (  eq1330 ( ( (  char_dash_type1333 ) ( (  c3980 ) ) ) , ( CharType_1331_CharWord ) ) ) || (  eq469 ( (  c3980 ) , ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2028 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2030 {
    struct StrView_27 _arr [2];
};

struct env2031 {
    struct Scanner_955 *  sc3970;
    ;
};

struct envunion2032 {
    bool  (*fun) (  struct env2031*  ,    struct StrView_27  );
    struct env2031 env;
};

struct env2034 {
    struct envunion2032  fun1153;
};

struct envunion2035 {
    bool  (*fun) (  struct env2034*  ,    struct StrView_27  ,    bool  );
    struct env2034 env;
};

struct ArrayIter_2036 {
    struct Array_2030  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2036   into_dash_iter2037 (    struct Array_2030  self2358 ) {
    return ( (struct ArrayIter_2036) { .f_backing = (  self2358 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2041 (    struct Array_2030 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   offset_dash_ptr2042 (    struct StrView_27 *  x338 ,    int64_t  count340 ) {
    struct StrView_27  temp2043;
    return ( (struct StrView_27 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2043 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr2040 (    struct Array_2030 *  arr2286 ,    size_t  i2289 ) {
    if ( ( (  cmp290 ( (  i2289 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2289 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2289 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2290 = ( ( (  cast_dash_ptr2041 ) ( (  arr2286 ) ) ) );
    return ( (  offset_dash_ptr2042 ) ( (  p2290 ) ,  ( (int64_t ) (  i2289 ) ) ) );
}

static  struct StrView_27   get2039 (    struct Array_2030 *  arr2293 ,    size_t  i2296 ) {
    return ( * ( (  get_dash_ptr2040 ) ( (  arr2293 ) ,  (  i2296 ) ) ) );
}

static  struct Maybe_80   next2038 (    struct ArrayIter_2036 *  self2365 ) {
    if ( (  cmp290 ( ( ( * (  self2365 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2367 = ( (  get2039 ) ( ( & ( ( * (  self2365 ) ) .f_backing ) ) ,  ( ( * (  self2365 ) ) .f_cur ) ) );
    (*  self2365 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2365 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2367 ) ) );
}

static  bool   reduce2033 (    struct Array_2030  iterable1111 ,    bool  base1113 ,   struct envunion2035  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct ArrayIter_2036  it1117 = ( (  into_dash_iter2037 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1118 = ( (  next2038 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_80_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_80_Just_t ) {
                struct envunion2035  temp2044 = (  fun1115 );
                x1116 = ( temp2044.fun ( &temp2044.env ,  ( dref1118 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2045 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2045);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2046;
    return (  temp2046 );
}

static  bool   lam2047 (   struct env2034* env ,    struct StrView_27  e1155 ,    bool  x1157 ) {
    struct envunion2032  temp2048 = ( env->fun1153 );
    return ( ( temp2048.fun ( &temp2048.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2029 (    struct Array_2030  it1151 ,   struct envunion2032  fun1153 ) {
    struct env2034 envinst2034 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2033 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2035){ .fun = (  bool  (*) (  struct env2034*  ,    struct StrView_27  ,    bool  ) )lam2047 , .env =  envinst2034 } ) ) );
}

static  struct Array_2030   from_dash_listlike2049 (    struct Array_2030  self330 ) {
    return (  self330 );
}

static  struct StrViewIter_458   own2054 (    struct StrViewIter_458  x1269 ) {
    return (  x1269 );
}

static  bool   matches_dash_str2051 (    struct Scanner_955 *  sc3262 ,    struct StrView_27  s3264 ) {
    size_t  skip3265 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_458  temp2052 = ( (  chars460 ) ( (  s3264 ) ) );
    struct StrViewIter_458 *  ss3266 = ( &temp2052 );
    struct StrViewIter_458  temp2053 = ( (  own2054 ) ( ( ( * (  sc3262 ) ) .f_s ) ) );
    struct StrViewIter_458 *  sccp3267 = ( &temp2053 );
    while ( ( true ) ) {
        struct Tuple2_1761  dref3268 = ( ( Tuple2_1761_Tuple2 ) ( ( (  next463 ) ( (  sccp3267 ) ) ) ,  ( (  next463 ) ( (  ss3266 ) ) ) ) );
        if ( dref3268 .field1.tag == Maybe_297_None_t ) {
            ( (  drop_prime_980 ) ( (  sc3262 ) ,  (  skip3265 ) ) );
            return ( true );
        }
        else {
            if ( dref3268 .field0.tag == Maybe_297_Just_t && dref3268 .field1.tag == Maybe_297_Just_t ) {
                if ( ( !  eq469 ( ( dref3268 .field0 .stuff .Maybe_297_Just_s .field0 ) , ( dref3268 .field1 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3265 = (  op_dash_add311 ( (  skip3265 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2050 (   struct env2031* env ,    struct StrView_27  sym3983 ) {
    return ( (  matches_dash_str2051 ) ( ( env->sc3970 ) ,  (  sym3983 ) ) );
}

struct envunion2056 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2058 {
    struct StrView_27 _arr [12];
};

struct env2059 {
    struct Scanner_955 *  sc3970;
    ;
};

struct envunion2060 {
    bool  (*fun) (  struct env2059*  ,    struct StrView_27  );
    struct env2059 env;
};

struct env2062 {
    struct envunion2060  fun1153;
};

struct envunion2063 {
    bool  (*fun) (  struct env2062*  ,    struct StrView_27  ,    bool  );
    struct env2062 env;
};

struct ArrayIter_2064 {
    struct Array_2058  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2064   into_dash_iter2065 (    struct Array_2058  self2358 ) {
    return ( (struct ArrayIter_2064) { .f_backing = (  self2358 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2069 (    struct Array_2058 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2068 (    struct Array_2058 *  arr2286 ,    size_t  i2289 ) {
    if ( ( (  cmp290 ( (  i2289 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2289 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2289 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2290 = ( ( (  cast_dash_ptr2069 ) ( (  arr2286 ) ) ) );
    return ( (  offset_dash_ptr2042 ) ( (  p2290 ) ,  ( (int64_t ) (  i2289 ) ) ) );
}

static  struct StrView_27   get2067 (    struct Array_2058 *  arr2293 ,    size_t  i2296 ) {
    return ( * ( (  get_dash_ptr2068 ) ( (  arr2293 ) ,  (  i2296 ) ) ) );
}

static  struct Maybe_80   next2066 (    struct ArrayIter_2064 *  self2365 ) {
    if ( (  cmp290 ( ( ( * (  self2365 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2367 = ( (  get2067 ) ( ( & ( ( * (  self2365 ) ) .f_backing ) ) ,  ( ( * (  self2365 ) ) .f_cur ) ) );
    (*  self2365 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2365 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2367 ) ) );
}

static  bool   reduce2061 (    struct Array_2058  iterable1111 ,    bool  base1113 ,   struct envunion2063  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct ArrayIter_2064  it1117 = ( (  into_dash_iter2065 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1118 = ( (  next2066 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_80_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_80_Just_t ) {
                struct envunion2063  temp2070 = (  fun1115 );
                x1116 = ( temp2070.fun ( &temp2070.env ,  ( dref1118 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2071 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2071);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2072;
    return (  temp2072 );
}

static  bool   lam2073 (   struct env2062* env ,    struct StrView_27  e1155 ,    bool  x1157 ) {
    struct envunion2060  temp2074 = ( env->fun1153 );
    return ( ( temp2074.fun ( &temp2074.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2057 (    struct Array_2058  it1151 ,   struct envunion2060  fun1153 ) {
    struct env2062 envinst2062 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2061 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2063){ .fun = (  bool  (*) (  struct env2062*  ,    struct StrView_27  ,    bool  ) )lam2073 , .env =  envinst2062 } ) ) );
}

static  struct Array_2058   from_dash_listlike2075 (    struct Array_2058  self330 ) {
    return (  self330 );
}

static  bool   lam2076 (   struct env2059* env ,    struct StrView_27  sym3987 ) {
    return ( (  matches_dash_str2051 ) ( ( env->sc3970 ) ,  (  sym3987 ) ) );
}

struct envunion2078 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2080 (    struct Scanner_955 *  sc3255 ,    bool (*  condition3257 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3258 = ( (  head1343 ) ( ( ( * (  sc3255 ) ) .f_s ) ) );
    if ( dref3258.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3257 ) ( ( dref3258 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3255 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3258.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2079 (    struct Scanner_955 *  sc3273 ,    bool (*  condition3275 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2080 ) ( (  sc3273 ) ,  (  condition3275 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2081 (    struct Char_65  c3991 ) {
    return ( (  eq1330 ( ( (  char_dash_type1333 ) ( (  c3991 ) ) ) , ( CharType_1331_CharWord ) ) ) || (  eq469 ( (  c3991 ) , ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2082 (    struct Maybe_297  x1300 ,    bool (*  fun1302 )(    struct Char_65  ) ,    bool  default1304 ) {
    return ( {  struct Maybe_297  dref1305 = (  x1300 ) ; dref1305.tag == Maybe_297_Just_t ? ( (  fun1302 ) ( ( dref1305 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1304 ) ; } );
}

static  bool   is_dash_upper2083 (    struct Char_65  c2442 ) {
    return ( (  eq399 ( ( (  c2442 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1336 ) ( (  c2442 ) ,  ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2084 {
    struct StrView_27 _arr [5];
};

static  struct Array_2084   from_dash_listlike2085 (    struct Array_2084  self330 ) {
    return (  self330 );
}

struct Array_2086 {
    struct StrView_27 _arr [15];
};

static  struct Array_2086   from_dash_listlike2087 (    struct Array_2086  self330 ) {
    return (  self330 );
}

struct env2089 {
    ;
    struct StrView_27  ident3995;
};

struct envunion2090 {
    bool  (*fun) (  struct env2089*  ,    struct StrView_27  );
    struct env2089 env;
};

struct env2092 {
    struct envunion2090  fun1153;
};

struct envunion2093 {
    bool  (*fun) (  struct env2092*  ,    struct StrView_27  ,    bool  );
    struct env2092 env;
};

struct ArrayIter_2094 {
    struct Array_2084  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2094   into_dash_iter2095 (    struct Array_2084  self2358 ) {
    return ( (struct ArrayIter_2094) { .f_backing = (  self2358 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2099 (    struct Array_2084 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2098 (    struct Array_2084 *  arr2286 ,    size_t  i2289 ) {
    if ( ( (  cmp290 ( (  i2289 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2289 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2289 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2290 = ( ( (  cast_dash_ptr2099 ) ( (  arr2286 ) ) ) );
    return ( (  offset_dash_ptr2042 ) ( (  p2290 ) ,  ( (int64_t ) (  i2289 ) ) ) );
}

static  struct StrView_27   get2097 (    struct Array_2084 *  arr2293 ,    size_t  i2296 ) {
    return ( * ( (  get_dash_ptr2098 ) ( (  arr2293 ) ,  (  i2296 ) ) ) );
}

static  struct Maybe_80   next2096 (    struct ArrayIter_2094 *  self2365 ) {
    if ( (  cmp290 ( ( ( * (  self2365 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2367 = ( (  get2097 ) ( ( & ( ( * (  self2365 ) ) .f_backing ) ) ,  ( ( * (  self2365 ) ) .f_cur ) ) );
    (*  self2365 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2365 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2367 ) ) );
}

static  bool   reduce2091 (    struct Array_2084  iterable1111 ,    bool  base1113 ,   struct envunion2093  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct ArrayIter_2094  it1117 = ( (  into_dash_iter2095 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1118 = ( (  next2096 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_80_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_80_Just_t ) {
                struct envunion2093  temp2100 = (  fun1115 );
                x1116 = ( temp2100.fun ( &temp2100.env ,  ( dref1118 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2101 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2101);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2102;
    return (  temp2102 );
}

static  bool   lam2103 (   struct env2092* env ,    struct StrView_27  e1155 ,    bool  x1157 ) {
    struct envunion2090  temp2104 = ( env->fun1153 );
    return ( ( temp2104.fun ( &temp2104.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2088 (    struct Array_2084  it1151 ,   struct envunion2090  fun1153 ) {
    struct env2092 envinst2092 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2091 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2093){ .fun = (  bool  (*) (  struct env2092*  ,    struct StrView_27  ,    bool  ) )lam2103 , .env =  envinst2092 } ) ) );
}

static  bool   lam2105 (   struct env2089* env ,    struct StrView_27  kw3999 ) {
    return (  eq485 ( (  kw3999 ) , ( env->ident3995 ) ) );
}

struct env2107 {
    ;
    struct StrView_27  ident3995;
};

struct envunion2108 {
    bool  (*fun) (  struct env2107*  ,    struct StrView_27  );
    struct env2107 env;
};

struct env2110 {
    struct envunion2108  fun1153;
};

struct envunion2111 {
    bool  (*fun) (  struct env2110*  ,    struct StrView_27  ,    bool  );
    struct env2110 env;
};

struct ArrayIter_2112 {
    struct Array_2086  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2112   into_dash_iter2113 (    struct Array_2086  self2358 ) {
    return ( (struct ArrayIter_2112) { .f_backing = (  self2358 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2117 (    struct Array_2086 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2116 (    struct Array_2086 *  arr2286 ,    size_t  i2289 ) {
    if ( ( (  cmp290 ( (  i2289 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2289 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2289 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2290 = ( ( (  cast_dash_ptr2117 ) ( (  arr2286 ) ) ) );
    return ( (  offset_dash_ptr2042 ) ( (  p2290 ) ,  ( (int64_t ) (  i2289 ) ) ) );
}

static  struct StrView_27   get2115 (    struct Array_2086 *  arr2293 ,    size_t  i2296 ) {
    return ( * ( (  get_dash_ptr2116 ) ( (  arr2293 ) ,  (  i2296 ) ) ) );
}

static  struct Maybe_80   next2114 (    struct ArrayIter_2112 *  self2365 ) {
    if ( (  cmp290 ( ( ( * (  self2365 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2367 = ( (  get2115 ) ( ( & ( ( * (  self2365 ) ) .f_backing ) ) ,  ( ( * (  self2365 ) ) .f_cur ) ) );
    (*  self2365 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2365 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2367 ) ) );
}

static  bool   reduce2109 (    struct Array_2086  iterable1111 ,    bool  base1113 ,   struct envunion2111  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct ArrayIter_2112  it1117 = ( (  into_dash_iter2113 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1118 = ( (  next2114 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_80_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_80_Just_t ) {
                struct envunion2111  temp2118 = (  fun1115 );
                x1116 = ( temp2118.fun ( &temp2118.env ,  ( dref1118 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2119 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2119);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2120;
    return (  temp2120 );
}

static  bool   lam2121 (   struct env2110* env ,    struct StrView_27  e1155 ,    bool  x1157 ) {
    struct envunion2108  temp2122 = ( env->fun1153 );
    return ( ( temp2122.fun ( &temp2122.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2106 (    struct Array_2086  it1151 ,   struct envunion2108  fun1153 ) {
    struct env2110 envinst2110 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2109 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2111){ .fun = (  bool  (*) (  struct env2110*  ,    struct StrView_27  ,    bool  ) )lam2121 , .env =  envinst2110 } ) ) );
}

static  bool   lam2123 (   struct env2107* env ,    struct StrView_27  kw4001 ) {
    return (  eq485 ( (  kw4001 ) , ( env->ident3995 ) ) );
}

struct envunion2125 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  struct Maybe_967   int2126 (    struct Scanner_955 *  sc3241 ) {
    return ( (  scan_dash_int968 ) ( (  sc3241 ) ) );
}

static  bool   char_dash_satisfies2128 (    struct Scanner_955 *  sc3255 ,    bool (*  condition3257 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3258 = ( (  head1343 ) ( ( ( * (  sc3255 ) ) .f_s ) ) );
    if ( dref3258.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3257 ) ( ( dref3258 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3255 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3258.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2127 (    struct Scanner_955 *  sc3273 ,    bool (*  condition3275 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2128 ) ( (  sc3273 ) ,  (  condition3275 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2129 (    struct Char_65  c2430 ) {
    return ( (  eq399 ( ( (  c2430 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1339 ) ( (  c2430 ) ) ) || ( (  between1336 ) ( (  c2430 ) ,  ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1336 ) ( (  c2430 ) ,  ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2131 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2132 (    struct Scanner_955 *  sc3273 ,    bool (*  condition3275 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2023 ) ( (  sc3273 ) ,  (  condition3275 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2134 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2136 (    struct Scanner_955 *  sc3255 ,    bool (*  condition3257 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3258 = ( (  head1343 ) ( ( ( * (  sc3255 ) ) .f_s ) ) );
    if ( dref3258.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3257 ) ( ( dref3258 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3255 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3258.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2135 (    struct Scanner_955 *  sc3273 ,    bool (*  condition3275 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2136 ) ( (  sc3273 ) ,  (  condition3275 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2137 (    struct Char_65  c2436 ) {
    return ( (  eq399 ( ( (  c2436 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1336 ) ( (  c2436 ) ,  ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2139 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2141 (    struct Scanner_955 *  sc3255 ,    bool (*  condition3257 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3258 = ( (  head1343 ) ( ( ( * (  sc3255 ) ) .f_s ) ) );
    if ( dref3258.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3257 ) ( ( dref3258 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3255 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3258.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2140 (    struct Scanner_955 *  sc3273 ,    bool (*  condition3275 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2141 ) ( (  sc3273 ) ,  (  condition3275 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2143 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2145 (    struct Scanner_955 *  sc3255 ,    bool (*  condition3257 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3258 = ( (  head1343 ) ( ( ( * (  sc3255 ) ) .f_s ) ) );
    if ( dref3258.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3257 ) ( ( dref3258 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3255 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3258.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2144 (    struct Scanner_955 *  sc3273 ,    bool (*  condition3275 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2145 ) ( (  sc3273 ) ,  (  condition3275 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2146 (    struct Char_65  c2433 ) {
    return ( (  eq399 ( ( (  c2433 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq469 ( (  c2433 ) , ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) || (  eq469 ( (  c2433 ) , ( (  from_dash_charlike346 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) );
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

static  bool   char_dash_satisfies2159 (    struct Scanner_955 *  sc3255 ,    bool (*  condition3257 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3258 = ( (  head1343 ) ( ( ( * (  sc3255 ) ) .f_s ) ) );
    if ( dref3258.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3257 ) ( ( dref3258 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3255 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3258.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2158 (    struct Scanner_955 *  sc3273 ,    bool (*  condition3275 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2159 ) ( (  sc3273 ) ,  (  condition3275 ) ) ) ) {
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

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1973 (   struct env134* env ,    struct TextBuf_104 *  self3964 ,    struct Line_16 *  line3966 ) {
    if ( ( ! ( ( * (  line3966 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_17 *  hls3967 = ( & ( ( * (  line3966 ) ) .f_highlights ) );
    ( (  trim1974 ) ( (  hls3967 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv3968 = ( (  from_dash_bytes1098 ) ( ( (  to_dash_slice565 ) ( ( ( * (  line3966 ) ) .f_line ) ) ) ) );
    enum Filetype_107  dref3969 = ( ( * (  self3964 ) ) .f_filetype );
    switch (  dref3969 ) {
        case Filetype_107_Text : {
            break;
        }
        case Filetype_107_KC : {
            struct Scanner_955  temp1975 = ( (  mk_dash_from_dash_str957 ) ( (  line_dash_sv3968 ) ) );
            struct Scanner_955 *  sc3970 = ( &temp1975 );
            while ( ( ! ( (  null1976 ) ( (  sc3970 ) ) ) ) ) {
                int32_t  from_dash_off3971 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                struct Maybe_297  first_dash_char3972 = ( (  peek1979 ) ( (  sc3970 ) ) );
                if ( ( (  try_dash_char1980 ) ( (  sc3970 ) ,  ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  try_dash_char1980 ) ( (  sc3970 ) ,  ( (  from_dash_charlike346 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  skip_dash_while1982 ) ( (  sc3970 ) ,  (  lam1984 ) ) );
                        ( (  drop_prime_980 ) ( (  sc3970 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        int32_t  to_dash_off3975 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                        struct envunion135  temp1985 = ( (struct envunion135){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                        ( temp1985.fun ( &temp1985.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line_dash_sv3968 ) ) ) ) ) , .f_type = ( HighlightType_20_Special3 ) } ) ) );
                    } else {
                        struct envunion2017  temp2016 = ( (struct envunion2017){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                        ( temp2016.fun ( &temp2016.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line_dash_sv3968 ) ) ) ) ) , .f_type = ( HighlightType_20_Comment ) } ) ) );
                    }
                    break;
                } else {
                    if ( ( (  try_dash_char1980 ) ( (  sc3970 ) ,  ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) {
                        while ( ( true ) ) {
                            ( (  skip_dash_while2018 ) ( (  sc3970 ) ,  (  lam2020 ) ) );
                            if ( (  eq1981 ( ( (  peek1979 ) ( (  sc3970 ) ) ) , ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                ( (  drop_prime_980 ) ( (  sc3970 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                if ( (  eq1981 ( ( (  peek1979 ) ( (  sc3970 ) ) ) , ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                    ( (  drop_prime_980 ) ( (  sc3970 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                } else {
                                }
                            } else {
                                ( (  drop_prime_980 ) ( (  sc3970 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                break;
                            }
                        }
                        int32_t  cur_dash_off3978 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2022  temp2021 = ( (struct envunion2022){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                        ( temp2021.fun ( &temp2021.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = (  cur_dash_off3978 ) , .f_type = ( HighlightType_20_String ) } ) ) );
                    } else {
                        if ( ( (  try_dash_char1980 ) ( (  sc3970 ) ,  ( (  from_dash_charlike346 ) ( ( "@" ) ,  ( 1 ) ) ) ) ) ) {
                            if ( ( (  char_dash_satisfies2023 ) ( (  sc3970 ) ,  (  is_dash_alpha1335 ) ) ) ) {
                                ( (  skip_dash_while2024 ) ( (  sc3970 ) ,  (  lam2026 ) ) );
                                int32_t  cur_dash_off3981 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                struct envunion2028  temp2027 = ( (struct envunion2028){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                ( temp2027.fun ( &temp2027.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = (  cur_dash_off3981 ) , .f_type = ( HighlightType_20_Ident3 ) } ) ) );
                            } else {
                            }
                        } else {
                            struct env2031 envinst2031 = {
                                .sc3970 =  sc3970 ,
                            };
                            if ( ( (  any2029 ) ( ( (  from_dash_listlike2049 ) ( ( (struct Array_2030) { ._arr = { ( (  from_dash_string199 ) ( ( "==" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "/=" ) ,  ( 2 ) ) ) } } ) ) ) ,  ( (struct envunion2032){ .fun = (  bool  (*) (  struct env2031*  ,    struct StrView_27  ) )lam2050 , .env =  envinst2031 } ) ) ) ) {
                                int32_t  cur_dash_off3984 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                enum HighlightType_20  type3985 = ( HighlightType_20_Special2 );
                                struct envunion2056  temp2055 = ( (struct envunion2056){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                ( temp2055.fun ( &temp2055.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = (  cur_dash_off3984 ) , .f_type = (  type3985 ) } ) ) );
                            } else {
                                struct env2059 envinst2059 = {
                                    .sc3970 =  sc3970 ,
                                };
                                if ( ( (  any2057 ) ( ( (  from_dash_listlike2075 ) ( ( (struct Array_2058) { ._arr = { ( (  from_dash_string199 ) ( ( "<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1229 ) ( ( "=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1229 ) ( ( "&" ) ,  ( 1 ) ) ) , ( (  from_dash_string199 ) ( ( "->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1229 ) ( ( ":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( ")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1229 ) ( ( "," ) ,  ( 1 ) ) ) } } ) ) ) ,  ( (struct envunion2060){ .fun = (  bool  (*) (  struct env2059*  ,    struct StrView_27  ) )lam2076 , .env =  envinst2059 } ) ) ) ) {
                                    int32_t  cur_dash_off3988 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_20  type3989 = ( HighlightType_20_Special1 );
                                    struct envunion2078  temp2077 = ( (struct envunion2078){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                    ( temp2077.fun ( &temp2077.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = (  cur_dash_off3988 ) , .f_type = (  type3989 ) } ) ) );
                                } else {
                                    if ( ( (  char_dash_satisfies2023 ) ( (  sc3970 ) ,  (  is_dash_alpha1335 ) ) ) ) {
                                        ( (  skip_dash_while2079 ) ( (  sc3970 ) ,  (  lam2081 ) ) );
                                        int32_t  cur_dash_off3992 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                        bool  first_dash_char_dash_uppercase3993 = ( (  maybe2082 ) ( (  first_dash_char3972 ) ,  (  is_dash_upper2083 ) ,  ( false ) ) );
                                        enum HighlightType_20  type3994 = ( (  first_dash_char_dash_uppercase3993 ) ? ( HighlightType_20_Ident2 ) : ( HighlightType_20_Ident1 ) );
                                        struct StrView_27  ident3995 = ( ( (  byte_dash_substr484 ) ( (  line_dash_sv3968 ) ,  ( (  i32_dash_size412 ) ( (  from_dash_off3971 ) ) ) ,  ( (  i32_dash_size412 ) ( (  cur_dash_off3992 ) ) ) ) ) );
                                        struct Array_2084  keywords13996 = ( (  from_dash_listlike2085 ) ( ( (struct Array_2084) { ._arr = { ( (  from_dash_string199 ) ( ( "fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "class" ) ,  ( 5 ) ) ) , ( (  from_dash_string199 ) ( ( "inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "external" ) ,  ( 8 ) ) ) , ( (  from_dash_string199 ) ( ( "use" ) ,  ( 3 ) ) ) } } ) ) );
                                        struct Array_2086  keywords23997 = ( (  from_dash_listlike2087 ) ( ( (struct Array_2086) { ._arr = { ( (  from_dash_string199 ) ( ( "if" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "else" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "case" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "for" ) ,  ( 3 ) ) ) , ( (  from_dash_string199 ) ( ( "in" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "while" ) ,  ( 5 ) ) ) , ( (  from_dash_string199 ) ( ( "pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "break" ) ,  ( 5 ) ) ) , ( (  from_dash_string199 ) ( ( "continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string199 ) ( ( "as" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "or" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "and" ) ,  ( 3 ) ) ) , ( (  from_dash_string199 ) ( ( "not" ) ,  ( 3 ) ) ) , ( (  from_dash_string199 ) ( ( "return" ) ,  ( 6 ) ) ) } } ) ) );
                                        struct env2089 envinst2089 = {
                                            .ident3995 =  ident3995 ,
                                        };
                                        if ( ( (  any2088 ) ( (  keywords13996 ) ,  ( (struct envunion2090){ .fun = (  bool  (*) (  struct env2089*  ,    struct StrView_27  ) )lam2105 , .env =  envinst2089 } ) ) ) ) {
                                            type3994 = ( HighlightType_20_Keyword1 );
                                        } else {
                                            struct env2107 envinst2107 = {
                                                .ident3995 =  ident3995 ,
                                            };
                                            if ( ( (  any2106 ) ( (  keywords23997 ) ,  ( (struct envunion2108){ .fun = (  bool  (*) (  struct env2107*  ,    struct StrView_27  ) )lam2123 , .env =  envinst2107 } ) ) ) ) {
                                                type3994 = ( HighlightType_20_Keyword2 );
                                            } else {
                                                if ( ( ( ! (  first_dash_char_dash_uppercase3993 ) ) && (  eq1981 ( ( (  peek1979 ) ( (  sc3970 ) ) ) , ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                                    type3994 = ( HighlightType_20_Ident4 );
                                                }
                                            }
                                        }
                                        struct envunion2125  temp2124 = ( (struct envunion2125){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                        ( temp2124.fun ( &temp2124.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = (  cur_dash_off3992 ) , .f_type = (  type3994 ) } ) ) );
                                    } else {
                                        struct Maybe_967  dref4002 = ( (  int2126 ) ( (  sc3970 ) ) );
                                        if ( dref4002.tag == Maybe_967_Just_t ) {
                                            int32_t  cur_dash_off4004 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                            enum HighlightType_20  type4005 = ( HighlightType_20_Number );
                                            if ( (  eq1059 ( ( dref4002 .stuff .Maybe_967_Just_s .field0 ) , (  from_dash_integral288 ( 0 ) ) ) ) ) {
                                                if ( ( (  try_dash_char1980 ) ( (  sc3970 ) ,  ( (  from_dash_charlike346 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2127 ) ( (  sc3970 ) ,  (  is_dash_hex2129 ) ) );
                                                    int32_t  cur_dash_off4006 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2131  temp2130 = ( (struct envunion2131){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                    ( temp2130.fun ( &temp2130.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = (  cur_dash_off4006 ) , .f_type = (  type4005 ) } ) ) );
                                                    ( (  skip_dash_while2132 ) ( (  sc3970 ) ,  (  is_dash_alpha1335 ) ) );
                                                    int32_t  invalid_dash_off4007 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq558 ( (  cur_dash_off4006 ) , (  invalid_dash_off4007 ) ) ) ) {
                                                        struct envunion2134  temp2133 = ( (struct envunion2134){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                        ( temp2133.fun ( &temp2133.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off4006 ) , .f_to = (  invalid_dash_off4007 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    if ( ( (  try_dash_char1980 ) ( (  sc3970 ) ,  ( (  from_dash_charlike346 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  skip_dash_while2135 ) ( (  sc3970 ) ,  (  is_dash_octal2137 ) ) );
                                                        int32_t  cur_dash_off4008 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                                        struct envunion2139  temp2138 = ( (struct envunion2139){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                        ( temp2138.fun ( &temp2138.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = (  cur_dash_off4008 ) , .f_type = (  type4005 ) } ) ) );
                                                        ( (  skip_dash_while2140 ) ( (  sc3970 ) ,  (  is_dash_digit973 ) ) );
                                                        int32_t  invalid_dash_off4009 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                                        if ( ( !  eq558 ( (  cur_dash_off4008 ) , (  invalid_dash_off4009 ) ) ) ) {
                                                            struct envunion2143  temp2142 = ( (struct envunion2143){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                            ( temp2142.fun ( &temp2142.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off4008 ) , .f_to = (  invalid_dash_off4009 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                        }
                                                    } else {
                                                        if ( ( (  try_dash_char1980 ) ( (  sc3970 ) ,  ( (  from_dash_charlike346 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  skip_dash_while2144 ) ( (  sc3970 ) ,  (  is_dash_binary2146 ) ) );
                                                            int32_t  cur_dash_off4010 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                                            struct envunion2148  temp2147 = ( (struct envunion2148){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                            ( temp2147.fun ( &temp2147.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = (  cur_dash_off4010 ) , .f_type = (  type4005 ) } ) ) );
                                                            ( (  skip_dash_while2140 ) ( (  sc3970 ) ,  (  is_dash_digit973 ) ) );
                                                            int32_t  invalid_dash_off4011 = ( (  size_dash_i32329 ) ( ( ( * (  sc3970 ) ) .f_byte_dash_offset ) ) );
                                                            if ( ( !  eq558 ( (  cur_dash_off4010 ) , (  invalid_dash_off4011 ) ) ) ) {
                                                                struct envunion2150  temp2149 = ( (struct envunion2150){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                                ( temp2149.fun ( &temp2149.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off4010 ) , .f_to = (  invalid_dash_off4011 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                            }
                                                        } else {
                                                            struct envunion2152  temp2151 = ( (struct envunion2152){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                            ( temp2151.fun ( &temp2151.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = (  cur_dash_off4004 ) , .f_type = (  type4005 ) } ) ) );
                                                        }
                                                    }
                                                }
                                            } else {
                                                struct envunion2154  temp2153 = ( (struct envunion2154){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                ( temp2153.fun ( &temp2153.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3971 ) , .f_to = (  cur_dash_off4004 ) , .f_type = (  type4005 ) } ) ) );
                                            }
                                        }
                                        else {
                                            if ( dref4002.tag == Maybe_967_None_t ) {
                                                ( (  drop_prime_980 ) ( (  sc3970 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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
        case Filetype_107_Markdown : {
            struct Scanner_955  temp2155 = ( (  mk_dash_from_dash_str957 ) ( (  line_dash_sv3968 ) ) );
            struct Scanner_955 *  sc4012 = ( &temp2155 );
            if ( ( (  try_dash_char1980 ) ( (  sc4012 ) ,  ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
                struct envunion2157  temp2156 = ( (struct envunion2157){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                ( temp2156.fun ( &temp2156.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_integral56 ( 0 ) ) , .f_to = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line_dash_sv3968 ) ) ) ) ) , .f_type = ( HighlightType_20_Keyword1 ) } ) ) );
            } else {
                ( (  skip_dash_while2158 ) ( (  sc4012 ) ,  (  is_dash_whitespace1340 ) ) );
                int32_t  from_dash_off4013 = ( (  size_dash_i32329 ) ( ( ( * (  sc4012 ) ) .f_byte_dash_offset ) ) );
                if ( ( (  try_dash_char1980 ) ( (  sc4012 ) ,  ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) {
                    int32_t  to_dash_off4014 = ( (  size_dash_i32329 ) ( ( ( * (  sc4012 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2161  temp2160 = ( (struct envunion2161){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                    ( temp2160.fun ( &temp2160.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4013 ) , .f_to = (  to_dash_off4014 ) , .f_type = ( HighlightType_20_Special1 ) } ) ) );
                    ( (  skip_dash_while2158 ) ( (  sc4012 ) ,  (  is_dash_whitespace1340 ) ) );
                    int32_t  from_dash_off4015 = ( (  size_dash_i32329 ) ( ( ( * (  sc4012 ) ) .f_byte_dash_offset ) ) );
                    if ( ( (  matches_dash_str2051 ) ( (  sc4012 ) ,  ( (  from_dash_string199 ) ( ( "[ ]" ) ,  ( 3 ) ) ) ) ) ) {
                        int32_t  to_dash_off4016 = ( (  size_dash_i32329 ) ( ( ( * (  sc4012 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2163  temp2162 = ( (struct envunion2163){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                        ( temp2162.fun ( &temp2162.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4015 ) , .f_to = (  to_dash_off4016 ) , .f_type = ( HighlightType_20_Keyword1 ) } ) ) );
                    } else {
                        if ( ( ( (  matches_dash_str2051 ) ( (  sc4012 ) ,  ( (  from_dash_string199 ) ( ( "[x]" ) ,  ( 3 ) ) ) ) ) || ( (  matches_dash_str2051 ) ( (  sc4012 ) ,  ( (  from_dash_string199 ) ( ( "[X]" ) ,  ( 3 ) ) ) ) ) ) ) {
                            int32_t  to_dash_off4017 = ( (  size_dash_i32329 ) ( ( ( * (  sc4012 ) ) .f_byte_dash_offset ) ) );
                            struct envunion2165  temp2164 = ( (struct envunion2165){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                            ( temp2164.fun ( &temp2164.env ,  (  hls3967 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off4015 ) , .f_to = (  to_dash_off4017 ) , .f_type = ( HighlightType_20_Keyword2 ) } ) ) );
                        }
                    }
                }
            }
            break;
        }
    }
    (*  line3966 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_18   subslice2168 (    struct Slice_18  slice1806 ,    size_t  from1808 ,    size_t  to1810 ) {
    struct Highlight_19 *  begin_dash_ptr1811 = ( (  offset_dash_ptr2000 ) ( ( (  slice1806 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1808 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1808 ) , (  to1810 ) ) != 0 ) || (  cmp290 ( (  from1808 ) , ( (  slice1806 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1812 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1810 ) ,  ( (  slice1806 ) .f_count ) ) ) , (  from1808 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  count1812 ) } );
}

static  struct SliceIter_2004   into_dash_iter2167 (    struct List_17  self2053 ) {
    return ( (  into_dash_iter2013 ) ( ( (  subslice2168 ) ( ( (  self2053 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2053 ) .f_count ) ) ) ) );
}

static  bool   between2170 (    int32_t  c1355 ,    int32_t  l1357 ,    int32_t  r1359 ) {
    int32_t  from1360 = ( (  min658 ) ( (  l1357 ) ,  (  r1359 ) ) );
    int32_t  to1361 = ( (  max1110 ) ( (  l1357 ) ,  (  r1359 ) ) );
    return ( (  cmp157 ( (  from1360 ) , (  c1355 ) ) != 2 ) && (  cmp157 ( (  c1355 ) , (  to1361 ) ) != 2 ) );
}

static  struct Maybe_203   highlight_dash_at1971 (   struct env136* env ,    struct TextBuf_104 *  self4020 ,    struct Pos_26  pos4022 ) {
    struct Line_16 *  line4023 = ( (  get_dash_ptr564 ) ( ( & ( ( * (  self4020 ) ) .f_buf ) ) ,  ( (  i32_dash_size412 ) ( ( (  pos4022 ) .f_line ) ) ) ) );
    struct envunion137  temp1972 = ( (struct envunion137){ .fun = (  enum Unit_8  (*) (  struct env134*  ,    struct TextBuf_104 *  ,    struct Line_16 *  ) )recompute_dash_highlights_dash_at_dash_line1973 , .env =  env->envinst134 } );
    ( temp1972.fun ( &temp1972.env ,  (  self4020 ) ,  (  line4023 ) ) );
    struct SliceIter_2004  temp2166 =  into_dash_iter2167 ( ( ( * (  line4023 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2009  __cond2169 =  next2010 (&temp2166);
        if (  __cond2169 .tag == 0 ) {
            break;
        }
        struct Highlight_19  hl4025 =  __cond2169 .stuff .Maybe_2009_Just_s .field0;
        if ( ( (  between2170 ) ( ( (  pos4022 ) .f_bi ) ,  ( (  hl4025 ) .f_from ) ,  (  op_dash_sub164 ( ( (  hl4025 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_203_Just ) ( ( (  hl4025 ) .f_type ) ) );
        }
        if ( (  cmp157 ( ( (  pos4022 ) .f_bi ) , ( (  hl4025 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_203) { .tag = Maybe_203_None_t } );
        }
    }
    return ( (struct Maybe_203) { .tag = Maybe_203_None_t } );
}

struct Maybe_2174 {
    enum {
        Maybe_2174_None_t,
        Maybe_2174_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_175  field0;
        } Maybe_2174_Just_s;
    } stuff;
};

static struct Maybe_2174 Maybe_2174_Just (  struct HighlightColors_175  field0 ) {
    return ( struct Maybe_2174 ) { .tag = Maybe_2174_Just_t, .stuff = { .Maybe_2174_Just_s = { .field0 = field0 } } };
};

struct env2175 {
    struct Theme_172 *  theme4061;
    ;
};

struct envunion2176 {
    struct Colors_173  (*fun) (  struct env2175*  ,    struct HighlightColors_175  );
    struct env2175 env;
};

static  struct Colors_173   maybe2173 (    struct Maybe_2174  x1300 ,   struct envunion2176  fun1302 ,    struct Colors_173  default1304 ) {
    struct envunion2176  temp2177 = (  fun1302 );
    return ( {  struct Maybe_2174  dref1305 = (  x1300 ) ; dref1305.tag == Maybe_2174_Just_t ? ( temp2177.fun ( &temp2177.env ,  ( dref1305 .stuff .Maybe_2174_Just_s .field0 ) ) ) : (  default1304 ) ; } );
}

struct SliceIter_2180 {
    struct Slice_174  f_slice;
    size_t  f_current_dash_offset;
};

struct env2181 {
    enum HighlightType_20  hltype4063;
    ;
};

struct envunion2182 {
    bool  (*fun) (  struct env2181*  ,    struct HighlightColors_175  );
    struct env2181 env;
};

struct Filter_2179 {
    struct SliceIter_2180  f_og;
    struct envunion2182  f_fun;
};

static  struct HighlightColors_175 *   offset_dash_ptr2185 (    struct HighlightColors_175 *  x338 ,    int64_t  count340 ) {
    struct HighlightColors_175  temp2186;
    return ( (struct HighlightColors_175 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2186 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2174   next2184 (    struct SliceIter_2180 *  self1858 ) {
    size_t  off1859 = ( ( * (  self1858 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1858 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2174) { .tag = Maybe_2174_None_t } );
    }
    struct HighlightColors_175  elem1860 = ( * ( (  offset_dash_ptr2185 ) ( ( ( ( * (  self1858 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1859 ) ) ) ) ) );
    (*  self1858 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2174_Just ) ( (  elem1860 ) ) );
}

static  struct Maybe_2174   next2183 (    struct Filter_2179 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_2174  dref835 = ( (  next2184 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_2174_None_t ) {
            return ( (struct Maybe_2174) { .tag = Maybe_2174_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_2174_Just_t ) {
                struct envunion2182  temp2187 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp2187.fun ( &temp2187.env ,  ( dref835 .stuff .Maybe_2174_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2174_Just ) ( ( dref835 .stuff .Maybe_2174_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2174  temp2188;
    return (  temp2188 );
}

static  struct Filter_2179   into_dash_iter2190 (    struct Filter_2179  self831 ) {
    return (  self831 );
}

static  struct Maybe_2174   head2178 (    struct Filter_2179  it1160 ) {
    struct Filter_2179  temp2189 = ( (  into_dash_iter2190 ) ( (  it1160 ) ) );
    return ( (  next2183 ) ( ( &temp2189 ) ) );
}

static  struct SliceIter_2180   into_dash_iter2192 (    struct Slice_174  self1852 ) {
    return ( (struct SliceIter_2180) { .f_slice = (  self1852 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2179   filter2191 (    struct Slice_174  iterable839 ,   struct envunion2182  fun841 ) {
    struct SliceIter_2180  it842 = ( (  into_dash_iter2192 ) ( (  iterable839 ) ) );
    return ( (struct Filter_2179) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  enum HighlightType_20 *   cast2197 (    uint32_t *  x356 ) {
    return ( (enum HighlightType_20 * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2195 (    enum HighlightType_20  x574 ) {
    uint32_t  temp2196 = ( (  zeroed807 ) ( ) );
    uint32_t *  y575 = ( &temp2196 );
    enum HighlightType_20 *  yp576 = ( (  cast2197 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2194 (    enum HighlightType_20  l3679 ,    enum HighlightType_20  r3681 ) {
    return (  eq473 ( ( ( (  cast_dash_on_dash_zeroed2195 ) ( (  l3679 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2195 ) ( (  r3681 ) ) ) ) );
}

static  bool   lam2193 (   struct env2181* env ,    struct HighlightColors_175  hlc4065 ) {
    return (  eq2194 ( ( (  hlc4065 ) .f_type ) , ( env->hltype4063 ) ) );
}

static  struct Color_138   or_dash_else2199 (    struct Maybe_176  self1751 ,    struct Color_138  alt1753 ) {
    struct Maybe_176  dref1754 = (  self1751 );
    if ( dref1754.tag == Maybe_176_None_t ) {
        return (  alt1753 );
    }
    else {
        if ( dref1754.tag == Maybe_176_Just_t ) {
            return ( dref1754 .stuff .Maybe_176_Just_s .field0 );
        }
    }
}

static  struct Colors_173   lam2198 (   struct env2175* env ,    struct HighlightColors_175  hlc4067 ) {
    return ( (struct Colors_173) { .f_fg = ( (  hlc4067 ) .f_fg ) , .f_bg = ( (  or_dash_else2199 ) ( ( (  hlc4067 ) .f_bg ) ,  ( ( ( * ( env->theme4061 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_173   find_dash_colors_dash_for_dash_highlight2172 (    struct Theme_172 *  theme4061 ,    enum HighlightType_20  hltype4063 ) {
    struct env2181 envinst2181 = {
        .hltype4063 =  hltype4063 ,
    };
    struct env2175 envinst2175 = {
        .theme4061 =  theme4061 ,
    };
    return ( (  maybe2173 ) ( ( (  head2178 ) ( ( (  filter2191 ) ( ( ( * (  theme4061 ) ) .f_highlights ) ,  ( (struct envunion2182){ .fun = (  bool  (*) (  struct env2181*  ,    struct HighlightColors_175  ) )lam2193 , .env =  envinst2181 } ) ) ) ) ) ,  ( (struct envunion2176){ .fun = (  struct Colors_173  (*) (  struct env2175*  ,    struct HighlightColors_175  ) )lam2198 , .env =  envinst2175 } ) ,  ( ( * (  theme4061 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2171 (   struct env1967* env ,    enum HighlightType_20  type4194 ) {
    ( (  set_dash_colors1932 ) ( ( env->screen4164 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2172 ) ( ( env->theme4171 ) ,  (  type4194 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2203 (  ) {
    ( (  print1346 ) ( ( (  from_dash_string199 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1694 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2202 (    enum Mode_220  mode4082 ) {
    return ( {  enum Mode_220  dref4083 = (  mode4082 ) ;  dref4083 == Mode_220_Normal ? ( (  from_dash_string199 ) ( ( "NOR" ) ,  ( 3 ) ) ) :  dref4083 == Mode_220_Insert ? ( (  from_dash_string199 ) ( ( "INS" ) ,  ( 3 ) ) ) :  dref4083 == Mode_220_Select ? ( (  from_dash_string199 ) ( ( "SEL" ) ,  ( 3 ) ) ) : ( (  todo2203 ) ( ) ) ; } );
}

struct StrConcat_2206 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2206 StrConcat_2206_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2206 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2205 {
    struct StrConcat_2206  field0;
    struct Char_65  field1;
};

static struct StrConcat_2205 StrConcat_2205_StrConcat (  struct StrConcat_2206  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2205 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2209 {
    struct AppendIter_1020  f_left;
    struct StrViewIter_458  f_right;
};

struct StrConcatIter_2208 {
    struct StrConcatIter_2209  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2208   into_dash_iter2210 (    struct StrConcatIter_2208  self1515 ) {
    return (  self1515 );
}

static  struct StrConcatIter_2209   into_dash_iter2214 (    struct StrConcat_2206  dref1522 ) {
    return ( (struct StrConcatIter_2209) { .f_left = ( (  chars1060 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2209   chars2213 (    struct StrConcat_2206  self1533 ) {
    return ( (  into_dash_iter2214 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_2208   into_dash_iter2212 (    struct StrConcat_2205  dref1522 ) {
    return ( (struct StrConcatIter_2208) { .f_left = ( (  chars2213 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2208   chars2211 (    struct StrConcat_2205  self1533 ) {
    return ( (  into_dash_iter2212 ) ( (  self1533 ) ) );
}

static  struct Maybe_297   next2217 (    struct StrConcatIter_2209 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2216 (    struct StrConcatIter_2208 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2217 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2204 (    struct Screen_276 *  screen3615 ,    struct StrConcat_2205  s3617 ,    int32_t  x3619 ,    int32_t  y3621 ) {
    int32_t  w3622 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3615 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3621 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3621 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3615 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3623 = (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3621 ) , (  w3622 ) ) ) , (  x3619 ) ) );
    int32_t  x3624 = ( (  min658 ) ( (  x3619 ) ,  (  w3622 ) ) );
    size_t  max_dash_len3625 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3622 ) , (  x3624 ) ) ) ) );
    int32_t  xx3626 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2208  temp2207 =  into_dash_iter2210 ( ( (  chars2211 ) ( (  s3617 ) ) ) );
    while (true) {
        struct Maybe_297  __cond2215 =  next2216 (&temp2207);
        if (  __cond2215 .tag == 0 ) {
            break;
        }
        struct Char_65  c3628 =  __cond2215 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3615 ) ,  (  c3628 ) ,  (  op_dash_add159 ( (  x3624 ) , (  xx3626 ) ) ) ,  (  y3621 ) ) );
        xx3626 = (  op_dash_add159 ( (  xx3626 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3628 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1907 (   struct env201* env ,    struct Screen_276 *  screen4164 ,    struct Pane_219 *  pane4166 ,    struct ScreenDims_279  sd4168 ,    struct Config_250 *  cfg4170 ) {
    struct Theme_172 *  theme4171 = ( ( * (  cfg4170 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4172 = ( ( * (  cfg4170 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4173 = ( ( * (  cfg4170 ) ) .f_relative_dash_line_dash_numbers );
    ( (  update_dash_screen_dash_offset1908 ) ( (  pane4166 ) ,  (  sd4168 ) ) );
    struct ScreenCursorOffset_221  sc_dash_off4174 = ( ( * (  pane4166 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars4175 = ( (  size_dash_i32329 ) ( ( (  count1911 ) ( ( (  chars1927 ) ( ( (  num_dash_lines1137 ) ( ( ( * (  pane4166 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4176 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4177 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4178 = ( (  display_dash_line_dash_numbers4172 ) ? (  op_dash_add159 ( (  op_dash_add159 ( (  max_dash_line_dash_num_dash_chars4175 ) , (  num_dash_front_dash_margin4176 ) ) ) , (  num_dash_back_dash_margin4177 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct RangeIter_153  temp1930 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( ( (  sc_dash_off4174 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min658 ) ( ( (  num_dash_lines1137 ) ( ( ( * (  pane4166 ) ) .f_buf ) ) ) ,  (  op_dash_add159 ( ( (  sc_dash_off4174 ) .f_screen_dash_top ) , ( (  screen_dash_height1910 ) ( (  sd4168 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1931 =  next156 (&temp1930);
        if (  __cond1931 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4180 =  __cond1931 .stuff .Maybe_155_Just_s .field0;
        int32_t  ybi4181 = (  op_dash_sub164 ( (  line_dash_num4180 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4182 = ( (  vi_dash_bi1139 ) ( ( ( * (  pane4166 ) ) .f_buf ) ,  (  ybi4181 ) ,  ( (  sc_dash_off4174 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4183 = ( (  line1097 ) ( ( ( * (  pane4166 ) ) .f_buf ) ,  (  ybi4181 ) ) );
        int32_t  ys4184 = (  op_dash_sub164 ( (  op_dash_sub164 ( (  op_dash_add159 ( ( (  sd4168 ) .f_from_dash_sy ) , (  line_dash_num4180 ) ) ) , ( (  sc_dash_off4174 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4172 ) ) {
            if ( (  eq558 ( ( ( ( * (  pane4166 ) ) .f_cursor ) .f_line ) , (  ybi4181 ) ) ) ) {
                ( (  set_dash_colors1932 ) ( (  screen4164 ) ,  ( ( * (  theme4171 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors1932 ) ( (  screen4164 ) ,  ( ( * (  theme4171 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4185 = ( ( ( ! (  relative_dash_line_dash_numbers4173 ) ) || (  eq558 ( ( ( ( * (  pane4166 ) ) .f_cursor ) .f_line ) , (  ybi4181 ) ) ) ) ? (  line_dash_num4180 ) : ( (  abs1934 ) ( (  op_dash_sub164 ( ( ( ( * (  pane4166 ) ) .f_cursor ) .f_line ) , (  ybi4181 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right1935 ) ( (  screen4164 ) ,  (  line_dash_display4185 ) ,  (  op_dash_add159 ( (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4164 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4168 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4178 ) ) ) , (  num_dash_back_dash_margin4177 ) ) ) ,  (  ys4184 ) ) );
            ( (  set_dash_colors1932 ) ( (  screen4164 ) ,  ( ( * (  theme4171 ) ) .f_default ) ) );
        }
        int32_t  vx4186 = (  op_dash_sub164 ( ( (  pos_dash_vi1095 ) ( ( ( * (  pane4166 ) ) .f_buf ) ,  ( (  mk694 ) ( (  ybi4181 ) ,  (  xbi4182 ) ) ) ) ) , ( (  sc_dash_off4174 ) .f_screen_dash_left ) ) );
        ( (  assert1951 ) ( (  cmp157 ( (  vx4186 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1952_StrConcat ) ( ( (  from_dash_string199 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4186 ) ) ) ) );
        int32_t  left_dash_offset4187 = (  op_dash_add159 ( ( (  sd4168 ) .f_from_dash_sx ) , (  total_dash_margin4178 ) ) );
        struct AppendIter_1959  temp1958 =  into_dash_iter1960 ( ( (  append1961 ) ( ( (  chars460 ) ( ( (  byte_dash_substr_dash_from464 ) ( (  line_dash_content4183 ) ,  ( (  i32_dash_size412 ) ( (  xbi4182 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_297  __cond1962 =  next1963 (&temp1958);
            if (  __cond1962 .tag == 0 ) {
                break;
            }
            struct Char_65  c4189 =  __cond1962 .stuff .Maybe_297_Just_s .field0;
            if ( (  cmp157 ( (  vx4186 ) , ( (  sd4168 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4190 = ( (  mk694 ) ( (  ybi4181 ) ,  (  xbi4182 ) ) );
            bool  is_dash_cursor4191 = (  eq557 ( (  curpos4190 ) , ( ( * (  pane4166 ) ) .f_cursor ) ) );
            bool  in_dash_selection4192 = ( (  is_dash_in_dash_selection1964 ) ( (  pane4166 ) ,  ( (  mk694 ) ( (  ybi4181 ) ,  (  xbi4182 ) ) ) ) );
            if ( (  is_dash_cursor4191 ) ) {
                ( (  set_dash_colors1932 ) ( (  screen4164 ) ,  ( ( * (  theme4171 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4192 ) ) {
                    ( (  set_dash_colors1932 ) ( (  screen4164 ) ,  ( ( * (  theme4171 ) ) .f_selection ) ) );
                } else {
                    struct envunion202  temp1970 = ( (struct envunion202){ .fun = (  struct Maybe_203  (*) (  struct env136*  ,    struct TextBuf_104 *  ,    struct Pos_26  ) )highlight_dash_at1971 , .env =  env->envinst136 } );
                    struct env1967 envinst1967 = {
                        .theme4171 =  theme4171 ,
                        .screen4164 =  screen4164 ,
                    };
                    ( (  if_dash_just1966 ) ( ( temp1970.fun ( &temp1970.env ,  ( ( * (  pane4166 ) ) .f_buf ) ,  (  curpos4190 ) ) ) ,  ( (struct envunion1968){ .fun = (  enum Unit_8  (*) (  struct env1967*  ,    enum HighlightType_20  ) )lam2171 , .env =  envinst1967 } ) ) );
                }
            }
            struct Maybe_80  dref4195 = ( (  char_dash_replacement1102 ) ( (  c4189 ) ) );
            if ( dref4195.tag == Maybe_80_None_t ) {
                if ( ( ! ( (  cmp157 ( (  vx4186 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  op_dash_sub164 ( (  op_dash_add159 ( (  vx4186 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4189 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4168 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1948 ) ( (  screen4164 ) ,  (  c4189 ) ,  (  op_dash_add159 ( (  left_dash_offset4187 ) , (  vx4186 ) ) ) ,  (  ys4184 ) ) );
                }
                vx4186 = (  op_dash_add159 ( (  vx4186 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4189 ) ) ) ) );
            }
            else {
                if ( dref4195.tag == Maybe_80_Just_t ) {
                    struct StrViewIter_458  temp2200 =  into_dash_iter459 ( ( (  chars460 ) ( ( dref4195 .stuff .Maybe_80_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_297  __cond2201 =  next463 (&temp2200);
                        if (  __cond2201 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4198 =  __cond2201 .stuff .Maybe_297_Just_s .field0;
                        if ( (  cmp157 ( (  vx4186 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1948 ) ( (  screen4164 ) ,  (  c4198 ) ,  (  op_dash_add159 ( (  left_dash_offset4187 ) , (  vx4186 ) ) ) ,  (  ys4184 ) ) );
                        }
                        vx4186 = (  op_dash_add159 ( (  vx4186 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4198 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors1932 ) ( (  screen4164 ) ,  ( ( * (  theme4171 ) ) .f_default ) ) );
            xbi4182 = (  op_dash_add159 ( (  xbi4182 ) , ( (  size_dash_i32329 ) ( ( (  c4189 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors1932 ) ( (  screen4164 ) ,  ( ( * (  theme4171 ) ) .f_overlay ) ) );
    struct StrView_27  modename4199 = ( (  short_dash_mode_dash_name2202 ) ( ( ( * (  pane4166 ) ) .f_mode ) ) );
    ( (  draw_dash_str2204 ) ( (  screen4164 ) ,  ( ( StrConcat_2205_StrConcat ) ( ( ( StrConcat_2206_StrConcat ) ( ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  modename4199 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4168 ) .f_from_dash_sx ) ,  ( (  sd4168 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2219 {
    ;
    ;
    struct Screen_276 *  screen4587;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion2220 {
    enum Unit_8  (*fun) (  struct env2219*  ,    struct StrView_27  );
    struct env2219 env;
};

static  enum Unit_8   if_dash_just2218 (    struct Maybe_80  x1309 ,   struct envunion2220  fun1311 ) {
    struct Maybe_80  dref1312 = (  x1309 );
    if ( dref1312.tag == Maybe_80_Just_t ) {
        struct envunion2220  temp2221 = (  fun1311 );
        ( temp2221.fun ( &temp2221.env ,  ( dref1312 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1312.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2222 (   struct env2219* env ,    struct StrView_27  msg4592 ) {
    int32_t  num_dash_chars4593 = ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars460 ) ( (  msg4592 ) ) ) ) ) ) );
    ( (  draw_dash_str2204 ) ( ( env->screen4587 ) ,  ( ( StrConcat_2205_StrConcat ) ( ( ( StrConcat_2206_StrConcat ) ( ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  msg4592 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1523 ( (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * ( env->screen4587 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4593 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * ( env->screen4587 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2225 {
    struct StrView_27  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2225 StrConcat_2225_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2225 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2224 {
    struct StrConcat_2225  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2224 StrConcat_2224_StrConcat (  struct StrConcat_2225  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2224 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2223 {
    struct StrConcat_2224  field0;
    struct Char_65  field1;
};

static struct StrConcat_2223 StrConcat_2223_StrConcat (  struct StrConcat_2224  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2223 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2228 {
    struct StrConcatIter_1730  f_left;
    struct StrViewIter_458  f_right;
};

struct StrConcatIter_2227 {
    struct StrConcatIter_2228  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2227   into_dash_iter2230 (    struct StrConcatIter_2227  self1515 ) {
    return (  self1515 );
}

static  struct Maybe_297   next2232 (    struct StrConcatIter_2228 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next1738 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2231 (    struct StrConcatIter_2227 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2232 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2229 (    struct StrConcatIter_2227  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct StrConcatIter_2227  it1117 = ( (  into_dash_iter2230 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1118 = ( (  next2231 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_297_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_297_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2233 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2233);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2234;
    return (  temp2234 );
}

static  size_t   lam2235 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add311 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2226 (    struct StrConcatIter_2227  it1122 ) {
    return ( (  reduce2229 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2235 ) ) );
}

static  struct StrConcatIter_1730   into_dash_iter2241 (    struct StrConcat_2225  dref1522 ) {
    return ( (struct StrConcatIter_1730) { .f_left = ( (  chars460 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1698 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_1730   chars2240 (    struct StrConcat_2225  self1533 ) {
    return ( (  into_dash_iter2241 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_2228   into_dash_iter2239 (    struct StrConcat_2224  dref1522 ) {
    return ( (struct StrConcatIter_2228) { .f_left = ( (  chars2240 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2228   chars2238 (    struct StrConcat_2224  self1533 ) {
    return ( (  into_dash_iter2239 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_2227   into_dash_iter2237 (    struct StrConcat_2223  dref1522 ) {
    return ( (struct StrConcatIter_2227) { .f_left = ( (  chars2238 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2227   chars2236 (    struct StrConcat_2223  self1533 ) {
    return ( (  into_dash_iter2237 ) ( (  self1533 ) ) );
}

static  enum Unit_8   draw_dash_str2242 (    struct Screen_276 *  screen3615 ,    struct StrConcat_2223  s3617 ,    int32_t  x3619 ,    int32_t  y3621 ) {
    int32_t  w3622 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3615 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3621 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3621 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3615 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3623 = (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3621 ) , (  w3622 ) ) ) , (  x3619 ) ) );
    int32_t  x3624 = ( (  min658 ) ( (  x3619 ) ,  (  w3622 ) ) );
    size_t  max_dash_len3625 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3622 ) , (  x3624 ) ) ) ) );
    int32_t  xx3626 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2227  temp2243 =  into_dash_iter2230 ( ( (  chars2236 ) ( (  s3617 ) ) ) );
    while (true) {
        struct Maybe_297  __cond2244 =  next2231 (&temp2243);
        if (  __cond2244 .tag == 0 ) {
            break;
        }
        struct Char_65  c3628 =  __cond2244 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3615 ) ,  (  c3628 ) ,  (  op_dash_add159 ( (  x3624 ) , (  xx3626 ) ) ) ,  (  y3621 ) ) );
        xx3626 = (  op_dash_add159 ( (  xx3626 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3628 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2245 {
    struct StrConcat_2224  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2245 StrConcat_2245_StrConcat (  struct StrConcat_2224  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2245 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2247 {
    struct StrConcatIter_2228  f_left;
    struct StrViewIter_458  f_right;
};

static  struct StrConcatIter_2247   into_dash_iter2249 (    struct StrConcatIter_2247  self1515 ) {
    return (  self1515 );
}

static  struct Maybe_297   next2250 (    struct StrConcatIter_2247 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2232 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2248 (    struct StrConcatIter_2247  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct StrConcatIter_2247  it1117 = ( (  into_dash_iter2249 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1118 = ( (  next2250 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_297_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_297_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2251 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2251);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2252;
    return (  temp2252 );
}

static  size_t   lam2253 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add311 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2246 (    struct StrConcatIter_2247  it1122 ) {
    return ( (  reduce2248 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2253 ) ) );
}

static  struct StrConcatIter_2247   into_dash_iter2255 (    struct StrConcat_2245  dref1522 ) {
    return ( (struct StrConcatIter_2247) { .f_left = ( (  chars2238 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2247   chars2254 (    struct StrConcat_2245  self1533 ) {
    return ( (  into_dash_iter2255 ) ( (  self1533 ) ) );
}

static  enum Unit_8   draw_dash_str2256 (    struct Screen_276 *  screen3615 ,    struct StrConcat_2245  s3617 ,    int32_t  x3619 ,    int32_t  y3621 ) {
    int32_t  w3622 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3615 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3621 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3621 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3615 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3623 = (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3621 ) , (  w3622 ) ) ) , (  x3619 ) ) );
    int32_t  x3624 = ( (  min658 ) ( (  x3619 ) ,  (  w3622 ) ) );
    size_t  max_dash_len3625 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3622 ) , (  x3624 ) ) ) ) );
    int32_t  xx3626 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2247  temp2257 =  into_dash_iter2249 ( ( (  chars2254 ) ( (  s3617 ) ) ) );
    while (true) {
        struct Maybe_297  __cond2258 =  next2250 (&temp2257);
        if (  __cond2258 .tag == 0 ) {
            break;
        }
        struct Char_65  c3628 =  __cond2258 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3615 ) ,  (  c3628 ) ,  (  op_dash_add159 ( (  x3624 ) , (  xx3626 ) ) ) ,  (  y3621 ) ) );
        xx3626 = (  op_dash_add159 ( (  xx3626 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3628 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1905 (   struct env274* env ,    struct Screen_276 *  screen4587 ,    struct Editor_248 *  ed4589 ) {
    struct ScreenDims_279  screen_dash_dims4590 = ( (struct ScreenDims_279) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4587 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4587 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion275  temp1906 = ( (struct envunion275){ .fun = (  enum Unit_8  (*) (  struct env201*  ,    struct Screen_276 *  ,    struct Pane_219 *  ,    struct ScreenDims_279  ,    struct Config_250 *  ) )render1907 , .env =  env->envinst201 } );
    ( temp1906.fun ( &temp1906.env ,  (  screen4587 ) ,  ( (  pane1134 ) ( (  ed4589 ) ) ) ,  (  screen_dash_dims4590 ) ,  ( ( * (  ed4589 ) ) .f_cfg ) ) );
    struct env2219 envinst2219 = {
        .screen4587 =  screen4587 ,
    };
    ( (  if_dash_just2218 ) ( ( ( * (  ed4589 ) ) .f_msg ) ,  ( (struct envunion2220){ .fun = (  enum Unit_8  (*) (  struct env2219*  ,    struct StrView_27  ) )lam2222 , .env =  envinst2219 } ) ) );
    struct EditorMode_249  dref4594 = ( ( * (  ed4589 ) ) .f_mode );
    if ( dref4594.tag == EditorMode_249_Normal_t ) {
    }
    else {
        if ( dref4594.tag == EditorMode_249_Cmd_t ) {
            int32_t  num_dash_chars4596 = ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars1698 ) ( ( dref4594 .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4597 = ( (  eq558 ( ( (  mod1522 ) ( (  num_dash_chars4596 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1229 ) ( ( " " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4598 = (  op_dash_add159 ( (  num_dash_chars4596 ) , ( (  mod1522 ) ( (  num_dash_chars4596 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
            struct StrConcat_2223  full_dash_str4599 = ( ( StrConcat_2223_StrConcat ) ( ( ( StrConcat_2224_StrConcat ) ( ( ( StrConcat_2225_StrConcat ) ( ( (  from_dash_string199 ) ( ( " \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4594 .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ,  (  pad4597 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4600 = ( (  size_dash_i32329 ) ( ( (  count2226 ) ( ( (  chars2236 ) ( (  full_dash_str4599 ) ) ) ) ) ) );
            ( (  draw_dash_str2242 ) ( (  screen4587 ) ,  (  full_dash_str4599 ) ,  (  op_dash_div1523 ( (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4587 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4600 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
        }
        else {
            if ( dref4594.tag == EditorMode_249_Search_t ) {
                int32_t  num_dash_chars4602 = ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars1698 ) ( ( dref4594 .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4603 = ( (  eq558 ( ( (  mod1522 ) ( (  num_dash_chars4602 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1229 ) ( ( " " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4604 = (  op_dash_add159 ( (  num_dash_chars4602 ) , ( (  mod1522 ) ( (  num_dash_chars4602 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
                struct StrConcat_2245  full_dash_str4605 = ( ( StrConcat_2245_StrConcat ) ( ( ( StrConcat_2224_StrConcat ) ( ( ( StrConcat_2225_StrConcat ) ( ( (  from_dash_string199 ) ( ( " \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4594 .stuff .EditorMode_249_Search_s .field1 ) ) ) ,  (  pad4603 ) ) ) ,  ( (  from_dash_string199 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4606 = ( (  size_dash_i32329 ) ( ( (  count2246 ) ( ( (  chars2254 ) ( (  full_dash_str4605 ) ) ) ) ) ) );
                ( (  draw_dash_str2256 ) ( (  screen4587 ) ,  (  full_dash_str4605 ) ,  (  op_dash_div1523 ( (  op_dash_sub164 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4587 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4606 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            }
        }
    }
    int32_t  temp2259 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4607 = ( &temp2259 );
    return ( Unit_8_Unit );
}

struct RenderState_2261 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_138  f_fg;
    struct Color_138  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2268 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2268 StrConcat_2268_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2268 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2267 {
    struct StrConcat_2268  field0;
    struct Char_65  field1;
};

static struct StrConcat_2267 StrConcat_2267_StrConcat (  struct StrConcat_2268  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2267 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2266 {
    struct StrConcat_2267  field0;
    uint32_t  field1;
};

static struct StrConcat_2266 StrConcat_2266_StrConcat (  struct StrConcat_2267  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2266 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2265 {
    struct StrConcat_2266  field0;
    struct Char_65  field1;
};

static struct StrConcat_2265 StrConcat_2265_StrConcat (  struct StrConcat_2266  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2265 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2274 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2273 {
    struct StrViewIter_458  f_left;
    struct IntStrIter_2274  f_right;
};

struct StrConcatIter_2272 {
    struct StrConcatIter_2273  f_left;
    struct AppendIter_1020  f_right;
};

struct StrConcatIter_2271 {
    struct StrConcatIter_2272  f_left;
    struct IntStrIter_2274  f_right;
};

struct StrConcatIter_2270 {
    struct StrConcatIter_2271  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2270   into_dash_iter2276 (    struct StrConcatIter_2270  self1515 ) {
    return (  self1515 );
}

static  struct Maybe_297   next2281 (    struct IntStrIter_2274 *  self1446 ) {
    if ( ( ( * (  self1446 ) ) .f_negative ) ) {
        (*  self1446 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint32_t  trim_dash_down1447 = ( (  pow148 ) ( (  from_dash_integral165 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1448 = (  op_dash_div147 ( ( ( * (  self1446 ) ) .f_int ) , (  trim_dash_down1447 ) ) );
    uint32_t  upper_dash_mask1449 = (  op_dash_mul167 ( (  op_dash_div147 ( (  upper1448 ) , (  from_dash_integral165 ( 10 ) ) ) ) , (  from_dash_integral165 ( 10 ) ) ) );
    uint8_t  digit1450 = ( ( (  cast145 ) ( (  op_dash_sub169 ( (  upper1448 ) , (  upper_dash_mask1449 ) ) ) ) ) );
    (*  self1446 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1451 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1450 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1451 ) ) );
}

static  struct Maybe_297   next2280 (    struct StrConcatIter_2273 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next2281 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2279 (    struct StrConcatIter_2272 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2280 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2278 (    struct StrConcatIter_2271 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2279 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next2281 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2277 (    struct StrConcatIter_2270 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2278 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2269 (    struct StrConcatIter_2270  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrConcatIter_2270  temp2275 = ( (  into_dash_iter2276 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_2270 *  it1095 = ( &temp2275 );
    while ( ( true ) ) {
        struct Maybe_297  dref1096 = ( (  next2277 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_297_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2292 (    uint32_t  self1454 ) {
    if ( (  eq473 ( (  self1454 ) , (  from_dash_integral165 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1455 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp170 ( (  self1454 ) , (  from_dash_integral165 ( 0 ) ) ) == 2 ) ) {
        self1454 = (  op_dash_div147 ( (  self1454 ) , (  from_dash_integral165 ( 10 ) ) ) );
        digits1455 = (  op_dash_add159 ( (  digits1455 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1455 );
}

static  struct IntStrIter_2274   uint_dash_iter2291 (    uint32_t  int1461 ) {
    return ( (struct IntStrIter_2274) { .f_int = (  int1461 ) , .f_len = ( (  count_dash_digits2292 ) ( (  int1461 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2274   chars2290 (    uint32_t  self1473 ) {
    return ( (  uint_dash_iter2291 ) ( (  self1473 ) ) );
}

static  struct StrConcatIter_2273   into_dash_iter2289 (    struct StrConcat_2268  dref1522 ) {
    return ( (struct StrConcatIter_2273) { .f_left = ( (  chars460 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars2290 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2273   chars2288 (    struct StrConcat_2268  self1533 ) {
    return ( (  into_dash_iter2289 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_2272   into_dash_iter2287 (    struct StrConcat_2267  dref1522 ) {
    return ( (struct StrConcatIter_2272) { .f_left = ( (  chars2288 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2272   chars2286 (    struct StrConcat_2267  self1533 ) {
    return ( (  into_dash_iter2287 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_2271   into_dash_iter2285 (    struct StrConcat_2266  dref1522 ) {
    return ( (struct StrConcatIter_2271) { .f_left = ( (  chars2286 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars2290 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2271   chars2284 (    struct StrConcat_2266  self1533 ) {
    return ( (  into_dash_iter2285 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_2270   into_dash_iter2283 (    struct StrConcat_2265  dref1522 ) {
    return ( (struct StrConcatIter_2270) { .f_left = ( (  chars2284 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2270   chars2282 (    struct StrConcat_2265  self1533 ) {
    return ( (  into_dash_iter2283 ) ( (  self1533 ) ) );
}

static  enum Unit_8   print2264 (    struct StrConcat_2265  s2624 ) {
    ( (  for_dash_each2269 ) ( ( (  chars2282 ) ( (  s2624 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2263 (    uint32_t  x2638 ,    uint32_t  y2640 ) {
    uint32_t  x2641 = (  op_dash_add171 ( (  x2638 ) , (  from_dash_integral165 ( 1 ) ) ) );
    uint32_t  y2642 = (  op_dash_add171 ( (  y2640 ) , (  from_dash_integral165 ( 1 ) ) ) );
    ( (  print2264 ) ( ( ( StrConcat_2265_StrConcat ) ( ( ( StrConcat_2266_StrConcat ) ( ( ( StrConcat_2267_StrConcat ) ( ( ( StrConcat_2268_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2642 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2641 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_277   subslice2295 (    struct Slice_277  slice1806 ,    size_t  from1808 ,    size_t  to1810 ) {
    struct Cell_278 *  begin_dash_ptr1811 = ( (  offset_dash_ptr850 ) ( ( (  slice1806 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1808 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1808 ) , (  to1810 ) ) != 0 ) || (  cmp290 ( (  from1808 ) , ( (  slice1806 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_277) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1812 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1810 ) ,  ( (  slice1806 ) .f_count ) ) ) , (  from1808 ) ) );
    return ( (struct Slice_277) { .f_ptr = (  begin_dash_ptr1811 ) , .f_count = (  count1812 ) } );
}

struct SliceIter_2298 {
    struct Slice_277  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2297 {
    struct SliceIter_2298  f_left_dash_it;
    struct SliceIter_2298  f_right_dash_it;
};

struct Tuple2_2299 {
    struct Cell_278  field0;
    struct Cell_278  field1;
};

static struct Tuple2_2299 Tuple2_2299_Tuple2 (  struct Cell_278  field0 ,  struct Cell_278  field1 ) {
    return ( struct Tuple2_2299 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2301 {
    bool (*  fun1153 )(    struct Tuple2_2299  );
};

struct envunion2302 {
    bool  (*fun) (  struct env2301*  ,    struct Tuple2_2299  ,    bool  );
    struct env2301 env;
};

static  struct Zip_2297   into_dash_iter2303 (    struct Zip_2297  self929 ) {
    return (  self929 );
}

struct Maybe_2304 {
    enum {
        Maybe_2304_None_t,
        Maybe_2304_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2299  field0;
        } Maybe_2304_Just_s;
    } stuff;
};

static struct Maybe_2304 Maybe_2304_Just (  struct Tuple2_2299  field0 ) {
    return ( struct Maybe_2304 ) { .tag = Maybe_2304_Just_t, .stuff = { .Maybe_2304_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_855   next2306 (    struct SliceIter_2298 *  self1858 ) {
    size_t  off1859 = ( ( * (  self1858 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1858 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_855) { .tag = Maybe_855_None_t } );
    }
    struct Cell_278  elem1860 = ( * ( (  offset_dash_ptr850 ) ( ( ( ( * (  self1858 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1859 ) ) ) ) ) );
    (*  self1858 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1859 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_855_Just ) ( (  elem1860 ) ) );
}

static  struct Maybe_2304   next2305 (    struct Zip_2297 *  self932 ) {
    struct Zip_2297  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_855  dref934 = ( (  next2306 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_855_None_t ) {
            return ( (struct Maybe_2304) { .tag = Maybe_2304_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_855_Just_t ) {
                struct Maybe_855  dref936 = ( (  next2306 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_855_None_t ) {
                    return ( (struct Maybe_2304) { .tag = Maybe_2304_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_855_Just_t ) {
                        ( (  next2306 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2306 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2304_Just ) ( ( ( Tuple2_2299_Tuple2 ) ( ( dref934 .stuff .Maybe_855_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_855_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2300 (    struct Zip_2297  iterable1111 ,    bool  base1113 ,   struct envunion2302  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct Zip_2297  it1117 = ( (  into_dash_iter2303 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_2304  dref1118 = ( (  next2305 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_2304_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_2304_Just_t ) {
                struct envunion2302  temp2307 = (  fun1115 );
                x1116 = ( temp2307.fun ( &temp2307.env ,  ( dref1118 .stuff .Maybe_2304_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2308 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2308);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2309;
    return (  temp2309 );
}

static  bool   lam2310 (   struct env2301* env ,    struct Tuple2_2299  e1155 ,    bool  x1157 ) {
    return ( ( ( env->fun1153 ) ( (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2296 (    struct Zip_2297  it1151 ,    bool (*  fun1153 )(    struct Tuple2_2299  ) ) {
    struct env2301 envinst2301 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2300 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2302){ .fun = (  bool  (*) (  struct env2301*  ,    struct Tuple2_2299  ,    bool  ) )lam2310 , .env =  envinst2301 } ) ) );
}

static  struct SliceIter_2298   into_dash_iter2312 (    struct Slice_277  self1852 ) {
    return ( (struct SliceIter_2298) { .f_slice = (  self1852 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2297   zip2311 (    struct Slice_277  left940 ,    struct Slice_277  right942 ) {
    struct SliceIter_2298  left_dash_it943 = ( (  into_dash_iter2312 ) ( (  left940 ) ) );
    struct SliceIter_2298  right_dash_it944 = ( (  into_dash_iter2312 ) ( (  right942 ) ) );
    return ( (struct Zip_2297) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

struct Tuple2_2316 {
    struct Color_138  field0;
    struct Color_138  field1;
};

static struct Tuple2_2316 Tuple2_2316_Tuple2 (  struct Color_138  field0 ,  struct Color_138  field1 ) {
    return ( struct Tuple2_2316 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_139 *   cast2320 (    int32_t *  x356 ) {
    return ( (enum Color8_139 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2318 (    enum Color8_139  x574 ) {
    int32_t  temp2319 = ( (  zeroed1002 ) ( ) );
    int32_t *  y575 = ( &temp2319 );
    enum Color8_139 *  yp576 = ( (  cast2320 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2317 (    enum Color8_139  l2666 ,    enum Color8_139  r2668 ) {
    return (  eq558 ( ( ( (  cast_dash_on_dash_zeroed2318 ) ( (  l2666 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2318 ) ( (  r2668 ) ) ) ) );
}

static  enum Color16_140 *   cast2324 (    int32_t *  x356 ) {
    return ( (enum Color16_140 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2322 (    enum Color16_140  x574 ) {
    int32_t  temp2323 = ( (  zeroed1002 ) ( ) );
    int32_t *  y575 = ( &temp2323 );
    enum Color16_140 *  yp576 = ( (  cast2324 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2321 (    enum Color16_140  l2672 ,    enum Color16_140  r2674 ) {
    return (  eq558 ( ( ( (  cast_dash_on_dash_zeroed2322 ) ( (  l2672 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2322 ) ( (  r2674 ) ) ) ) );
}

static  bool   eq2325 (    struct RGB_141  l2702 ,    struct RGB_141  r2704 ) {
    return ( ( (  eq303 ( ( (  l2702 ) .f_r ) , ( (  r2704 ) .f_r ) ) ) && (  eq303 ( ( (  l2702 ) .f_g ) , ( (  r2704 ) .f_g ) ) ) ) && (  eq303 ( ( (  l2702 ) .f_b ) , ( (  r2704 ) .f_b ) ) ) );
}

static  bool   eq2315 (    struct Color_138  l2724 ,    struct Color_138  r2726 ) {
    return ( {  struct Tuple2_2316  dref2727 = ( ( Tuple2_2316_Tuple2 ) ( (  l2724 ) ,  (  r2726 ) ) ) ; dref2727 .field0.tag == Color_138_ColorDefault_t && dref2727 .field1.tag == Color_138_ColorDefault_t ? ( true ) : dref2727 .field0.tag == Color_138_Color8_t && dref2727 .field1.tag == Color_138_Color8_t ? (  eq2317 ( ( dref2727 .field0 .stuff .Color_138_Color8_s .field0 ) , ( dref2727 .field1 .stuff .Color_138_Color8_s .field0 ) ) ) : dref2727 .field0.tag == Color_138_Color16_t && dref2727 .field1.tag == Color_138_Color16_t ? (  eq2321 ( ( dref2727 .field0 .stuff .Color_138_Color16_s .field0 ) , ( dref2727 .field1 .stuff .Color_138_Color16_s .field0 ) ) ) : dref2727 .field0.tag == Color_138_Color256_t && dref2727 .field1.tag == Color_138_Color256_t ? (  eq303 ( ( dref2727 .field0 .stuff .Color_138_Color256_s .field0 ) , ( dref2727 .field1 .stuff .Color_138_Color256_s .field0 ) ) ) : dref2727 .field0.tag == Color_138_ColorRGB_t && dref2727 .field1.tag == Color_138_ColorRGB_t ? (  eq2325 ( ( dref2727 .field0 .stuff .Color_138_ColorRGB_s .field0 ) , ( dref2727 .field1 .stuff .Color_138_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2314 (    struct Cell_278  l3488 ,    struct Cell_278  r3490 ) {
    if ( ( !  eq469 ( ( (  l3488 ) .f_c ) , ( (  r3490 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2315 ( ( (  l3488 ) .f_fg ) , ( (  r3490 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2315 ( ( (  l3488 ) .f_bg ) , ( (  r3490 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2313 (    struct Tuple2_2299  dref3544 ) {
    return ( !  eq2314 ( ( dref3544 .field0 ) , ( dref3544 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2328 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82329 (    enum Color8_139  color2677 ) {
    enum Color8_139  dref2678 = (  color2677 );
    switch (  dref2678 ) {
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

static  enum Unit_8   set_dash_fg162330 (    enum Color16_140  color2681 ) {
    enum Color16_140  dref2682 = (  color2681 );
    switch (  dref2682 ) {
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

struct StrConcat_2334 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2334 StrConcat_2334_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2334 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2333 {
    struct StrConcat_2334  field0;
    struct Char_65  field1;
};

static struct StrConcat_2333 StrConcat_2333_StrConcat (  struct StrConcat_2334  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2333 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2338 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2337 {
    struct StrViewIter_458  f_left;
    struct IntStrIter_2338  f_right;
};

struct StrConcatIter_2336 {
    struct StrConcatIter_2337  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2336   into_dash_iter2340 (    struct StrConcatIter_2336  self1515 ) {
    return (  self1515 );
}

struct env2346 {
    uint8_t  base1228;
    ;
};

struct envunion2347 {
    uint8_t  (*fun) (  struct env2346*  ,    int32_t  ,    uint8_t  );
    struct env2346 env;
};

static  uint8_t   reduce2345 (    struct Range_150  iterable1111 ,    uint8_t  base1113 ,   struct envunion2347  fun1115 ) {
    uint8_t  x1116 = (  base1113 );
    struct RangeIter_153  it1117 = ( (  into_dash_iter154 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1118 = ( (  next156 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_155_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_155_Just_t ) {
                struct envunion2347  temp2348 = (  fun1115 );
                x1116 = ( temp2348.fun ( &temp2348.env ,  ( dref1118 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2349 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2349);
    exit ( 1 );
    ( Unit_8_Unit );
    uint8_t  temp2350;
    return (  temp2350 );
}

static  uint8_t   op_dash_mul2352 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2351 (   struct env2346* env ,    int32_t  item1232 ,    uint8_t  x1234 ) {
    return (  op_dash_mul2352 ( (  x1234 ) , ( env->base1228 ) ) );
}

static  uint8_t   pow2344 (    uint8_t  base1228 ,    int32_t  p1230 ) {
    struct env2346 envinst2346 = {
        .base1228 =  base1228 ,
    };
    return ( (  reduce2345 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1230 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral308 ( 1 ) ) ,  ( (struct envunion2347){ .fun = (  uint8_t  (*) (  struct env2346*  ,    int32_t  ,    uint8_t  ) )lam2351 , .env =  envinst2346 } ) ) );
}

static  uint8_t   op_dash_div2353 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2354 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_297   next2343 (    struct IntStrIter_2338 *  self1446 ) {
    if ( ( ( * (  self1446 ) ) .f_negative ) ) {
        (*  self1446 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint8_t  trim_dash_down1447 = ( (  pow2344 ) ( (  from_dash_integral308 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1448 = (  op_dash_div2353 ( ( ( * (  self1446 ) ) .f_int ) , (  trim_dash_down1447 ) ) );
    uint8_t  upper_dash_mask1449 = (  op_dash_mul2352 ( (  op_dash_div2353 ( (  upper1448 ) , (  from_dash_integral308 ( 10 ) ) ) ) , (  from_dash_integral308 ( 10 ) ) ) );
    uint8_t  digit1450 = ( ( (  cast2354 ) ( (  op_dash_sub932 ( (  upper1448 ) , (  upper_dash_mask1449 ) ) ) ) ) );
    (*  self1446 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1446 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1451 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1450 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1451 ) ) );
}

static  struct Maybe_297   next2342 (    struct StrConcatIter_2337 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next463 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next2343 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2341 (    struct StrConcatIter_2336 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2342 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2335 (    struct StrConcatIter_2336  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrConcatIter_2336  temp2339 = ( (  into_dash_iter2340 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_2336 *  it1095 = ( &temp2339 );
    while ( ( true ) ) {
        struct Maybe_297  dref1096 = ( (  next2341 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_297_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2361 (    uint8_t  self1454 ) {
    if ( (  eq303 ( (  self1454 ) , (  from_dash_integral308 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1455 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp307 ( (  self1454 ) , (  from_dash_integral308 ( 0 ) ) ) == 2 ) ) {
        self1454 = (  op_dash_div2353 ( (  self1454 ) , (  from_dash_integral308 ( 10 ) ) ) );
        digits1455 = (  op_dash_add159 ( (  digits1455 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1455 );
}

static  struct IntStrIter_2338   uint_dash_iter2360 (    uint8_t  int1461 ) {
    return ( (struct IntStrIter_2338) { .f_int = (  int1461 ) , .f_len = ( (  count_dash_digits2361 ) ( (  int1461 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2338   chars2359 (    uint8_t  self1479 ) {
    return ( (  uint_dash_iter2360 ) ( (  self1479 ) ) );
}

static  struct StrConcatIter_2337   into_dash_iter2358 (    struct StrConcat_2334  dref1522 ) {
    return ( (struct StrConcatIter_2337) { .f_left = ( (  chars460 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars2359 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2337   chars2357 (    struct StrConcat_2334  self1533 ) {
    return ( (  into_dash_iter2358 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_2336   into_dash_iter2356 (    struct StrConcat_2333  dref1522 ) {
    return ( (struct StrConcatIter_2336) { .f_left = ( (  chars2357 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2336   chars2355 (    struct StrConcat_2333  self1533 ) {
    return ( (  into_dash_iter2356 ) ( (  self1533 ) ) );
}

static  enum Unit_8   print2332 (    struct StrConcat_2333  s2624 ) {
    ( (  for_dash_each2335 ) ( ( (  chars2355 ) ( (  s2624 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562331 (    uint8_t  color2695 ) {
    ( (  print2332 ) ( ( ( StrConcat_2333_StrConcat ) ( ( ( StrConcat_2334_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2695 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2367 {
    struct StrConcat_2333  field0;
    uint8_t  field1;
};

static struct StrConcat_2367 StrConcat_2367_StrConcat (  struct StrConcat_2333  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2367 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2366 {
    struct StrConcat_2367  field0;
    struct Char_65  field1;
};

static struct StrConcat_2366 StrConcat_2366_StrConcat (  struct StrConcat_2367  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2366 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2365 {
    struct StrConcat_2366  field0;
    uint8_t  field1;
};

static struct StrConcat_2365 StrConcat_2365_StrConcat (  struct StrConcat_2366  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2365 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2364 {
    struct StrConcat_2365  field0;
    struct Char_65  field1;
};

static struct StrConcat_2364 StrConcat_2364_StrConcat (  struct StrConcat_2365  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2364 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2372 {
    struct StrConcatIter_2336  f_left;
    struct IntStrIter_2338  f_right;
};

struct StrConcatIter_2371 {
    struct StrConcatIter_2372  f_left;
    struct AppendIter_1020  f_right;
};

struct StrConcatIter_2370 {
    struct StrConcatIter_2371  f_left;
    struct IntStrIter_2338  f_right;
};

struct StrConcatIter_2369 {
    struct StrConcatIter_2370  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2369   into_dash_iter2374 (    struct StrConcatIter_2369  self1515 ) {
    return (  self1515 );
}

static  struct Maybe_297   next2378 (    struct StrConcatIter_2372 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2341 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next2343 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2377 (    struct StrConcatIter_2371 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2378 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2376 (    struct StrConcatIter_2370 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2377 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next2343 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2375 (    struct StrConcatIter_2369 *  self1518 ) {
    struct Maybe_297  dref1519 = ( (  next2376 ) ( ( & ( ( * (  self1518 ) ) .f_left ) ) ) );
    if ( dref1519.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1519 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1519.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1518 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2368 (    struct StrConcatIter_2369  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrConcatIter_2369  temp2373 = ( (  into_dash_iter2374 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_2369 *  it1095 = ( &temp2373 );
    while ( ( true ) ) {
        struct Maybe_297  dref1096 = ( (  next2375 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_297_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2372   into_dash_iter2386 (    struct StrConcat_2367  dref1522 ) {
    return ( (struct StrConcatIter_2372) { .f_left = ( (  chars2355 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars2359 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2372   chars2385 (    struct StrConcat_2367  self1533 ) {
    return ( (  into_dash_iter2386 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_2371   into_dash_iter2384 (    struct StrConcat_2366  dref1522 ) {
    return ( (struct StrConcatIter_2371) { .f_left = ( (  chars2385 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2371   chars2383 (    struct StrConcat_2366  self1533 ) {
    return ( (  into_dash_iter2384 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_2370   into_dash_iter2382 (    struct StrConcat_2365  dref1522 ) {
    return ( (struct StrConcatIter_2370) { .f_left = ( (  chars2383 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars2359 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2370   chars2381 (    struct StrConcat_2365  self1533 ) {
    return ( (  into_dash_iter2382 ) ( (  self1533 ) ) );
}

static  struct StrConcatIter_2369   into_dash_iter2380 (    struct StrConcat_2364  dref1522 ) {
    return ( (struct StrConcatIter_2369) { .f_left = ( (  chars2381 ) ( ( dref1522 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1522 .field1 ) ) ) } );
}

static  struct StrConcatIter_2369   chars2379 (    struct StrConcat_2364  self1533 ) {
    return ( (  into_dash_iter2380 ) ( (  self1533 ) ) );
}

static  enum Unit_8   print2363 (    struct StrConcat_2364  s2624 ) {
    ( (  for_dash_each2368 ) ( ( (  chars2379 ) ( (  s2624 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2362 (    struct RGB_141  c2717 ) {
    ( (  print2363 ) ( ( ( StrConcat_2364_StrConcat ) ( ( ( StrConcat_2365_StrConcat ) ( ( ( StrConcat_2366_StrConcat ) ( ( ( StrConcat_2367_StrConcat ) ( ( ( StrConcat_2333_StrConcat ) ( ( ( StrConcat_2334_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2717 ) .f_r ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2717 ) .f_g ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2717 ) .f_b ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2327 (    struct Color_138  c2738 ) {
    struct Color_138  dref2739 = (  c2738 );
    if ( dref2739.tag == Color_138_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2328 ) ( ) );
    }
    else {
        if ( dref2739.tag == Color_138_Color8_t ) {
            ( (  set_dash_fg82329 ) ( ( dref2739 .stuff .Color_138_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2739.tag == Color_138_Color16_t ) {
                ( (  set_dash_fg162330 ) ( ( dref2739 .stuff .Color_138_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2739.tag == Color_138_Color256_t ) {
                    ( (  set_dash_fg2562331 ) ( ( dref2739 .stuff .Color_138_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2739.tag == Color_138_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2362 ) ( ( dref2739 .stuff .Color_138_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2388 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82389 (    enum Color8_139  color2685 ) {
    enum Color8_139  dref2686 = (  color2685 );
    switch (  dref2686 ) {
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

static  enum Unit_8   set_dash_bg162390 (    enum Color16_140  color2689 ) {
    enum Color16_140  dref2690 = (  color2689 );
    switch (  dref2690 ) {
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

static  enum Unit_8   set_dash_bg2562391 (    uint8_t  color2698 ) {
    ( (  print2332 ) ( ( ( StrConcat_2333_StrConcat ) ( ( ( StrConcat_2334_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2698 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2392 (    struct RGB_141  c2720 ) {
    ( (  print2363 ) ( ( ( StrConcat_2364_StrConcat ) ( ( ( StrConcat_2365_StrConcat ) ( ( ( StrConcat_2366_StrConcat ) ( ( ( StrConcat_2367_StrConcat ) ( ( ( StrConcat_2333_StrConcat ) ( ( ( StrConcat_2334_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2720 ) .f_r ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2720 ) .f_g ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2720 ) .f_b ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2387 (    struct Color_138  c2746 ) {
    struct Color_138  dref2747 = (  c2746 );
    if ( dref2747.tag == Color_138_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2388 ) ( ) );
    }
    else {
        if ( dref2747.tag == Color_138_Color8_t ) {
            ( (  set_dash_bg82389 ) ( ( dref2747 .stuff .Color_138_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2747.tag == Color_138_Color16_t ) {
                ( (  set_dash_bg162390 ) ( ( dref2747 .stuff .Color_138_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2747.tag == Color_138_Color256_t ) {
                    ( (  set_dash_bg2562391 ) ( ( dref2747 .stuff .Color_138_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2747.tag == Color_138_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2392 ) ( ( dref2747 .stuff .Color_138_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322393 (    int32_t  x604 ) {
    return ( (uint32_t ) (  x604 ) );
}

static  enum Unit_8   emit_dash_cell2326 (    struct RenderState_2261 *  rs3520 ,    struct Cell_278 *  c3522 ,    uint32_t  x3524 ,    uint32_t  y3526 ) {
    if ( ( ( !  eq473 ( (  x3524 ) , ( ( * (  rs3520 ) ) .f_x ) ) ) || ( !  eq473 ( (  y3526 ) , ( ( * (  rs3520 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2263 ) ( (  x3524 ) ,  (  y3526 ) ) );
        (*  rs3520 ) .f_x = (  x3524 );
        (*  rs3520 ) .f_y = (  y3526 );
    }
    struct Char_65  char3527 = ( ( * (  c3522 ) ) .f_c );
    struct Color_138  bg3528 = ( ( * (  c3522 ) ) .f_bg );
    if ( (  eq558 ( ( ( * (  c3522 ) ) .f_char_dash_width ) , (  op_dash_neg801 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3527 = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) );
        bg3528 = ( ( Color_138_Color8 ) ( ( Color8_139_Red8 ) ) );
    }
    if ( ( !  eq2315 ( ( ( * (  rs3520 ) ) .f_fg ) , ( ( * (  c3522 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2327 ) ( ( ( * (  c3522 ) ) .f_fg ) ) );
        (*  rs3520 ) .f_fg = ( ( * (  c3522 ) ) .f_fg );
    }
    if ( ( !  eq2315 ( ( ( * (  rs3520 ) ) .f_bg ) , (  bg3528 ) ) ) ) {
        ( (  set_dash_bg2387 ) ( (  bg3528 ) ) );
        (*  rs3520 ) .f_bg = (  bg3528 );
    }
    ( (  print_dash_str335 ) ( (  char3527 ) ) );
    uint32_t  char_dash_width3529 = ( (  i32_dash_u322393 ) ( ( (  max1110 ) ( ( ( * (  c3522 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3520 ) .f_x = (  op_dash_add171 ( ( ( * (  rs3520 ) ) .f_x ) , (  char_dash_width3529 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2396 {
    struct SliceIter_2298  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

struct env2397 {
    ;
    struct Slice_277  dest1883;
    ;
};

struct Tuple2_2399 {
    struct Cell_278  field0;
    int32_t  field1;
};

static struct Tuple2_2399 Tuple2_2399_Tuple2 (  struct Cell_278  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2399 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2398 {
    enum Unit_8  (*fun) (  struct env2397*  ,    struct Tuple2_2399  );
    struct env2397 env;
};

static  struct Zip_2396   into_dash_iter2401 (    struct Zip_2396  self929 ) {
    return (  self929 );
}

struct Maybe_2402 {
    enum {
        Maybe_2402_None_t,
        Maybe_2402_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2399  field0;
        } Maybe_2402_Just_s;
    } stuff;
};

static struct Maybe_2402 Maybe_2402_Just (  struct Tuple2_2399  field0 ) {
    return ( struct Maybe_2402 ) { .tag = Maybe_2402_Just_t, .stuff = { .Maybe_2402_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2402   next2403 (    struct Zip_2396 *  self932 ) {
    struct Zip_2396  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_855  dref934 = ( (  next2306 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_855_None_t ) {
            return ( (struct Maybe_2402) { .tag = Maybe_2402_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_855_Just_t ) {
                struct Maybe_155  dref936 = ( (  next422 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_2402) { .tag = Maybe_2402_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_155_Just_t ) {
                        ( (  next2306 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2402_Just ) ( ( ( Tuple2_2399_Tuple2 ) ( ( dref934 .stuff .Maybe_855_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2395 (    struct Zip_2396  iterable1092 ,   struct envunion2398  fun1094 ) {
    struct Zip_2396  temp2400 = ( (  into_dash_iter2401 ) ( (  iterable1092 ) ) );
    struct Zip_2396 *  it1095 = ( &temp2400 );
    while ( ( true ) ) {
        struct Maybe_2402  dref1096 = ( (  next2403 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_2402_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_2402_Just_t ) {
                struct envunion2398  temp2404 = (  fun1094 );
                ( temp2404.fun ( &temp2404.env ,  ( dref1096 .stuff .Maybe_2402_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2396   zip2405 (    struct Slice_277  left940 ,    struct FromIter_416  right942 ) {
    struct SliceIter_2298  left_dash_it943 = ( (  into_dash_iter2312 ) ( (  left940 ) ) );
    struct FromIter_416  right_dash_it944 = ( (  into_dash_iter426 ) ( (  right942 ) ) );
    return ( (struct Zip_2396) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  enum Unit_8   lam2406 (   struct env2397* env ,    struct Tuple2_2399  dref1884 ) {
    return ( (  set848 ) ( ( env->dest1883 ) ,  ( (  i32_dash_size412 ) ( ( dref1884 .field1 ) ) ) ,  ( dref1884 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2394 (    struct Slice_277  src1881 ,    struct Slice_277  dest1883 ) {
    if ( (  cmp290 ( ( (  src1881 ) .f_count ) , ( (  dest1883 ) .f_count ) ) == 2 ) ) {
        ( (  panic512 ) ( ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1881 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1883 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2397 envinst2397 = {
        .dest1883 =  dest1883 ,
    };
    ( (  for_dash_each2395 ) ( ( (  zip2405 ) ( (  src1881 ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2398){ .fun = (  enum Unit_8  (*) (  struct env2397*  ,    struct Tuple2_2399  ) )lam2406 , .env =  envinst2397 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2260 (    struct Screen_276 *  screen3532 ) {
    int32_t  w3533 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3532 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3534 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3532 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2261  temp2262 = ( (struct RenderState_2261) { .f_x = (  from_dash_integral165 ( 0 ) ) , .f_y = (  from_dash_integral165 ( 0 ) ) , .f_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_changes = (  from_dash_integral165 ( 0 ) ) } );
    struct RenderState_2261 *  rs3535 = ( &temp2262 );
    ( (  move_dash_cursor_dash_to2263 ) ( (  from_dash_integral165 ( 0 ) ) ,  (  from_dash_integral165 ( 0 ) ) ) );
    struct RangeIter_153  temp2293 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  h3534 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond2294 =  next156 (&temp2293);
        if (  __cond2294 .tag == 0 ) {
            break;
        }
        int32_t  y3537 =  __cond2294 .stuff .Maybe_155_Just_s .field0;
        int32_t  x_dash_v3538 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp157 ( (  x_dash_v3538 ) , (  w3533 ) ) == 0 ) ) {
            size_t  i3539 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1524 ( (  y3537 ) , (  w3533 ) ) ) , (  x_dash_v3538 ) ) ) ) );
            struct Cell_278 *  cur3540 = ( (  get_dash_ptr849 ) ( ( ( * (  screen3532 ) ) .f_current ) ,  (  i3539 ) ) );
            int32_t  char_dash_width3541 = ( (  max1110 ) ( ( ( * (  cur3540 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_277  curs3542 = ( (  subslice2295 ) ( ( ( * (  screen3532 ) ) .f_current ) ,  (  i3539 ) ,  (  op_dash_add311 ( (  i3539 ) , ( (  i32_dash_size412 ) ( (  char_dash_width3541 ) ) ) ) ) ) );
            struct Slice_277  prevs3543 = ( (  subslice2295 ) ( ( ( * (  screen3532 ) ) .f_previous ) ,  (  i3539 ) ,  (  op_dash_add311 ( (  i3539 ) , ( (  i32_dash_size412 ) ( (  char_dash_width3541 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3532 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2296 ) ( ( (  zip2311 ) ( (  curs3542 ) ,  (  prevs3543 ) ) ) ,  (  lam2313 ) ) ) ) ) {
                (*  rs3535 ) .f_changes = (  op_dash_add171 ( ( ( * (  rs3535 ) ) .f_changes ) , (  from_dash_integral165 ( 1 ) ) ) );
                ( (  emit_dash_cell2326 ) ( (  rs3535 ) ,  (  cur3540 ) ,  ( (  i32_dash_u322393 ) ( (  x_dash_v3538 ) ) ) ,  ( (  i32_dash_u322393 ) ( (  y3537 ) ) ) ) );
                ( (  copy_dash_to2394 ) ( (  curs3542 ) ,  (  prevs3543 ) ) );
            }
            x_dash_v3538 = (  op_dash_add159 ( (  x_dash_v3538 ) , (  char_dash_width3541 ) ) );
        }
    }
    (*  screen3532 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors775 ) ( ) );
    ( (  flush_dash_stdout778 ) ( ) );
    return ( ( * (  rs3535 ) ) .f_changes );
}

static  void *   cast_dash_ptr2413 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2414 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2411 (  ) {
    struct timespec *  temp2412;
    struct timespec *  x571 = (  temp2412 );
    ( ( memset ) ( ( (  cast_dash_ptr2413 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2414 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct timespec *   null_dash_ptr2410 (  ) {
    return ( (  zeroed2411 ) ( ) );
}

static  enum Unit_8   sync2407 (    struct Tui_90 *  tui3403 ) {
    if ( (  eq473 ( ( ( * (  tui3403 ) ) .f_target_dash_fps ) , (  from_dash_integral165 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3404 = (  op_dash_div1036 ( (  from_dash_integral288 ( 1000000000 ) ) , ( (  size_dash_i64302 ) ( ( (  u32_dash_size833 ) ( ( ( * (  tui3403 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2408 = ( (  undefined814 ) ( ) );
    struct timespec *  now3405 = ( &temp2408 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic816 ) ( ) ) ,  (  now3405 ) ) );
    int64_t  elapsed_dash_ns3406 = (  op_dash_add471 ( (  op_dash_mul286 ( (  op_dash_sub1038 ( ( ( * (  now3405 ) ) .tv_sec ) , ( ( ( * (  tui3403 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral288 ( 1000000000 ) ) ) ) , (  op_dash_sub1038 ( ( ( * (  now3405 ) ) .tv_nsec ) , ( ( ( * (  tui3403 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3407 = (  op_dash_sub1038 ( (  frame_dash_ns3404 ) , (  elapsed_dash_ns3406 ) ) );
    if ( (  cmp1056 ( (  sleep_dash_ns3407 ) , (  from_dash_integral288 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2409 = ( (struct timespec) { .tv_sec = (  from_dash_integral288 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3407 ) } );
        struct timespec *  ts3408 = ( &temp2409 );
        ( ( nanosleep ) ( (  ts3408 ) ,  ( (  null_dash_ptr2410 ) ( ) ) ) );
    }
    struct timespec  temp2415 = ( (  undefined814 ) ( ) );
    struct timespec *  last_dash_sync3409 = ( &temp2415 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic816 ) ( ) ) ,  (  last_dash_sync3409 ) ) );
    (*  tui3403 ) .f_last_dash_sync = ( * (  last_dash_sync3409 ) );
    (*  tui3403 ) .f_fps_dash_count = (  op_dash_add171 ( ( ( * (  tui3403 ) ) .f_fps_dash_count ) , (  from_dash_integral165 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3410 = (  op_dash_add471 ( (  op_dash_mul286 ( (  op_dash_sub1038 ( ( ( ( * (  tui3403 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3403 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral288 ( 1000 ) ) ) ) , (  op_dash_div1036 ( (  op_dash_sub1038 ( ( ( ( * (  tui3403 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3403 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral288 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1056 ( (  fps_dash_elapsed_dash_ms3410 ) , (  from_dash_integral288 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3403 ) .f_actual_dash_fps = ( ( * (  tui3403 ) ) .f_fps_dash_count );
        (*  tui3403 ) .f_fps_dash_count = (  from_dash_integral165 ( 0 ) );
        (*  tui3403 ) .f_fps_dash_ts = ( ( * (  tui3403 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2418 (    struct Cell_278 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2417 (    enum CAllocator_10  dref1984 ,    struct Slice_277  slice1986 ) {
    if (!(  dref1984 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2418 ) ( ( (  slice1986 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2416 (    struct Screen_276 *  screen3508 ) {
    enum CAllocator_10  al3509 = ( ( * (  screen3508 ) ) .f_al );
    ( (  free2417 ) ( (  al3509 ) ,  ( ( * (  screen3508 ) ) .f_current ) ) );
    ( (  free2417 ) ( (  al3509 ) ,  ( ( * (  screen3508 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2420 (  ) {
    ( (  print_dash_str328 ) ( ( (  from_dash_string199 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2421 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2422 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2423 (    struct Termios_92 *  og_dash_termios3383 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  tcsa_dash_flush770 ) ( ) ) ,  ( (  cast_dash_ptr711 ) ( (  og_dash_termios3383 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2419 (    struct Tui_90 *  tui3413 ) {
    ( (  disable_dash_mouse2420 ) ( ) );
    ( (  show_dash_cursor2421 ) ( ) );
    ( (  reset_dash_colors775 ) ( ) );
    ( (  clear_dash_screen776 ) ( ) );
    ( (  reset_dash_cursor_dash_position2422 ) ( ) );
    ( (  disable_dash_raw_dash_mode2423 ) ( ( & ( ( * (  tui3413 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout778 ) ( ) );
    return ( Unit_8_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2061 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2062 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2063 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2062 =  growth_dash_factor2062 ,
        .starting_dash_size2061 =  starting_dash_size2061 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2062 =  growth_dash_factor2062 ,
        .starting_dash_size2061 =  starting_dash_size2061 ,
    };
    struct env3 envinst3 = {
        .growth_dash_factor2062 =  growth_dash_factor2062 ,
        .starting_dash_size2061 =  starting_dash_size2061 ,
    };
    struct env4 envinst4 = {
        .growth_dash_factor2062 =  growth_dash_factor2062 ,
        .starting_dash_size2061 =  starting_dash_size2061 ,
    };
    struct env5 envinst5 = {
        .growth_dash_factor2062 =  growth_dash_factor2062 ,
        .starting_dash_size2061 =  starting_dash_size2061 ,
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
        .shrink_dash_factor2063 =  shrink_dash_factor2063 ,
    };
    struct env41 envinst41 = {
        .shrink_dash_factor2063 =  shrink_dash_factor2063 ,
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
        .envinst68 = envinst68 ,
    };
    struct env72 envinst72 = {
        .envinst44 = envinst44 ,
    };
    struct env74 envinst74 = {
        .envinst63 = envinst63 ,
        .envinst60 = envinst60 ,
    };
    struct env77 envinst77 = {
        .envinst66 = envinst66 ,
        .envinst60 = envinst60 ,
    };
    struct env81 envinst81 = {
        .envinst67 = envinst67 ,
        .envinst60 = envinst60 ,
    };
    bool  temp85 = ( false );
    bool *  should_dash_resize3393 = ( &temp85 );
    struct env86 envinst86 = {
        .should_dash_resize3393 =  should_dash_resize3393 ,
    };
    struct env87 envinst87 = {
        .should_dash_resize3393 =  should_dash_resize3393 ,
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
        .envinst12 = envinst12 ,
        .envinst46 = envinst46 ,
        .envinst96 = envinst96 ,
        .envinst40 = envinst40 ,
        .envinst41 = envinst41 ,
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
        .envinst21 = envinst21 ,
        .envinst28 = envinst28 ,
        .envinst125 = envinst125 ,
        .envinst119 = envinst119 ,
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
    struct Color_138  camel4037 = ( (  rgb142 ) ( (  from_dash_integral165 ( 11766360 ) ) ) );
    struct Color_138  olive4038 = ( (  rgb142 ) ( (  from_dash_integral165 ( 7303983 ) ) ) );
    struct Color_138  tea_dash_green4039 = ( (  rgb142 ) ( (  from_dash_integral165 ( 14875064 ) ) ) );
    struct Color_138  chocolate4040 = ( (  rgb142 ) ( (  from_dash_integral165 ( 13721620 ) ) ) );
    struct Color_138  muted_dash_olive4041 = ( (  rgb142 ) ( (  from_dash_integral165 ( 12308106 ) ) ) );
    struct Color_138  palm_dash_leaf4042 = ( (  rgb142 ) ( (  from_dash_integral165 ( 9674588 ) ) ) );
    struct Color_138  lime_dash_green4043 = ( (  rgb142 ) ( (  from_dash_integral165 ( 3263232 ) ) ) );
    struct Color_138  forest_dash_green4044 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1153058 ) ) ) );
    struct Color_138  green4045 = ( (  rgb142 ) ( (  from_dash_integral165 ( 2781729 ) ) ) );
    struct Color_138  dark_dash_spruce4046 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1983518 ) ) ) );
    struct Color_138  evergreen4047 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1386004 ) ) ) );
    struct Array_179  temp181 = ( (  from_dash_listlike182 ) ( ( (struct Array_179) { ._arr = { ( (  hlt183 ) ( ( HighlightType_20_Number ) ,  (  green4045 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_String ) ,  (  camel4037 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Comment ) ,  (  dark_dash_spruce4046 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident1 ) ,  (  lime_dash_green4043 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident2 ) ,  (  muted_dash_olive4041 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident3 ) ,  (  tea_dash_green4039 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident4 ) ,  (  palm_dash_leaf4042 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Keyword1 ) ,  (  tea_dash_green4039 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Keyword2 ) ,  (  chocolate4040 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Special1 ) ,  (  olive4038 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Special2 ) ,  (  forest_dash_green4044 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Special3 ) ,  (  camel4037 ) ) ) , ( (struct HighlightColors_175) { .f_type = ( HighlightType_20_Invalid ) , .f_fg = (  evergreen4047 ) , .f_bg = ( ( Maybe_176_Just ) ( ( ( Color_138_Color8 ) ( ( Color8_139_Red8 ) ) ) ) ) } ) } } ) ) );
    struct Theme_172  temp177 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = (  evergreen4047 ) , .f_fg = (  lime_dash_green4043 ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = (  lime_dash_green4043 ) , .f_fg = (  evergreen4047 ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = (  forest_dash_green4044 ) , .f_fg = (  evergreen4047 ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = (  evergreen4047 ) , .f_fg = (  forest_dash_green4044 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = (  evergreen4047 ) , .f_fg = (  tea_dash_green4039 ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = (  dark_dash_spruce4046 ) , .f_fg = (  lime_dash_green4043 ) } ) , .f_highlights = ( (  as_dash_slice178 ) ( ( &temp181 ) ) ) } );
    struct Theme_172 *  goblin_dash_ultra4048 = ( &temp177 );
    struct Theme_172  temp184 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_highlights = ( (  empty185 ) ( ) ) } );
    struct Theme_172 *  dark_dash_theme4049 = ( &temp184 );
    struct Theme_172  temp191 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_White16 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_highlights = ( (  empty185 ) ( ) ) } );
    struct Theme_172 *  light_dash_theme4050 = ( &temp191 );
    struct Theme_172 *  default4051 = (  goblin_dash_ultra4048 );
    struct Array_195  temp197 = ( (  from_dash_listlike198 ) ( ( (struct Array_195) { ._arr = { ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "default" ) ,  ( 7 ) ) ) ,  (  default4051 ) ) ) , ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra4048 ) ) ) , ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme4049 ) ) ) , ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "light-mono" ) ,  ( 10 ) ) ) ,  (  light_dash_theme4050 ) ) ) } } ) ) );
    struct Slice_192  all_dash_themes4052 = ( (  as_dash_slice194 ) ( ( &temp197 ) ) );
    struct env200 envinst200 = {
        .all_dash_themes4052 =  all_dash_themes4052 ,
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
        .envinst132 = envinst132 ,
        .envinst127 = envinst127 ,
    };
    struct env226 envinst226 = {
        .envinst215 = envinst215 ,
    };
    struct env228 envinst228 = {
        .envinst213 = envinst213 ,
        .envinst132 = envinst132 ,
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
        .envinst213 = envinst213 ,
        .envinst233 = envinst233 ,
        .envinst226 = envinst226 ,
        .envinst239 = envinst239 ,
        .envinst204 = envinst204 ,
        .envinst228 = envinst228 ,
        .envinst223 = envinst223 ,
        .envinst209 = envinst209 ,
        .envinst211 = envinst211 ,
        .envinst217 = envinst217 ,
    };
    struct env264 envinst264 = {
        .envinst241 = envinst241 ,
        .envinst207 = envinst207 ,
        .envinst60 = envinst60 ,
        .envinst72 = envinst72 ,
        .envinst253 = envinst253 ,
        .envinst226 = envinst226 ,
        .envinst244 = envinst244 ,
        .envinst204 = envinst204 ,
    };
    struct env274 envinst274 = {
        .envinst201 = envinst201 ,
    };
    enum CAllocator_10  al4611 = ( (  idc280 ) ( ) );
    struct TextBuf_104  temp282;
    struct TextBuf_104  temp281 = (  temp282 );
    struct TextBuf_104 *  tb4612 = ( &temp281 );
    struct Slice_283  args4615 = ( (  get284 ) ( ) );
    struct Maybe_80  initial_dash_message4616 = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    if ( (  cmp290 ( ( (  args4615 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4617 = ( (  from_dash_const_dash_str291 ) ( (  elem_dash_get317 ( (  args4615 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion353  temp352 = ( (struct envunion353){ .fun = (  struct Maybe_351  (*) (  struct env114*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file354 , .env =  envinst114 } );
        struct Maybe_351  dref4618 = ( temp352.fun ( &temp352.env ,  (  al4611 ) ,  (  fname4617 ) ) );
        if ( dref4618.tag == Maybe_351_None_t ) {
            struct envunion696  temp695 = ( (struct envunion696){ .fun = (  struct TextBuf_104  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk357 , .env =  envinst112 } );
            (*  tb4612 ) = ( temp695.fun ( &temp695.env ,  (  al4611 ) ) );
            (*  tb4612 ) .f_filename = ( ( Maybe_80_Just ) ( ( (  clone_dash_0505 ) ( (  fname4617 ) ,  (  al4611 ) ) ) ) );
        }
        else {
            if ( dref4618.tag == Maybe_351_Just_t ) {
                (*  tb4612 ) = ( dref4618 .stuff .Maybe_351_Just_s .field0 );
            }
        }
    } else {
        struct envunion698  temp697 = ( (struct envunion698){ .fun = (  struct TextBuf_104  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk357 , .env =  envinst112 } );
        (*  tb4612 ) = ( temp697.fun ( &temp697.env ,  (  al4611 ) ) );
    }
    struct Config_250  temp699 = ( (struct Config_250) { .f_theme = (  default4051 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_250 *  cfg4620 = ( &temp699 );
    struct Editor_248  temp700 = ( (struct Editor_248) { .f_running = ( true ) , .f_al = (  al4611 ) , .f_pane = ( (  mk701 ) ( (  al4611 ) ,  (  tb4612 ) ) ) , .f_clipboard = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_search_dash_term = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } ) , .f_msg = (  initial_dash_message4616 ) , .f_cfg = (  cfg4620 ) , .f_og_dash_theme = (  default4051 ) } );
    struct Editor_248 *  ed4621 = ( &temp700 );
    struct envunion704  temp703 = ( (struct envunion704){ .fun = (  struct Tui_90  (*) (  struct env86*  ) )mk705 , .env =  envinst86 } );
    struct Tui_90  temp702 = ( temp703.fun ( &temp703.env ) );
    struct Tui_90 *  tui4622 = ( &temp702 );
    struct Screen_276  temp826 = ( (  mk_dash_screen827 ) ( (  tui4622 ) ,  (  al4611 ) ) );
    struct Screen_276 *  screen4623 = ( &temp826 );
    uint32_t  last_dash_redraw_dash_changes4624 = (  from_dash_integral165 ( 0 ) );
    while ( ( ( * (  ed4621 ) ) .f_running ) ) {
        struct env871 envinst871 = {
            .tui4622 =  tui4622 ,
            .envinst88 = envinst88 ,
        };
        struct FunIter_870  temp869 =  into_dash_iter878 ( ( (  from_dash_function879 ) ( ( (struct envunion877){ .fun = (  struct Maybe_873  (*) (  struct env871*  ) )lam880 , .env =  envinst871 } ) ) ) );
        while (true) {
            struct Maybe_873  __cond1076 =  next1077 (&temp869);
            if (  __cond1076 .tag == 0 ) {
                break;
            }
            struct InputEvent_874  ev4626 =  __cond1076 .stuff .Maybe_873_Just_s .field0;
            struct InputEvent_874  dref4627 = (  ev4626 );
            if ( dref4627.tag == InputEvent_874_Key_t ) {
                ( (  reset_dash_msg1079 ) ( (  ed4621 ) ) );
                struct envunion1086  temp1085 = ( (struct envunion1086){ .fun = (  enum Unit_8  (*) (  struct env264*  ,    struct Editor_248 *  ,    struct Key_270  ) )handle_dash_key1087 , .env =  envinst264 } );
                ( temp1085.fun ( &temp1085.env ,  (  ed4621 ) ,  ( dref4627 .stuff .InputEvent_874_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1876  temp1875 = ( (struct envunion1876){ .fun = (  bool  (*) (  struct env94*  ,    struct Screen_276 *  ) )resize_dash_screen_dash_if_dash_needed1877 , .env =  envinst94 } );
        ( temp1875.fun ( &temp1875.env ,  (  screen4623 ) ) );
        if ( ( (  should_dash_redraw1879 ) ( (  tui4622 ) ) ) ) {
            (*  screen4623 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1880 ) ( (  screen4623 ) ) );
            struct Theme_172 *  theme4629 = ( ( * ( ( * (  ed4621 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg1889 ) ( (  screen4623 ) ,  ( ( ( * (  theme4629 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1890 ) ( (  screen4623 ) ,  ( ( ( * (  theme4629 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1891 ) ( (  screen4623 ) ) );
            struct envunion1904  temp1903 = ( (struct envunion1904){ .fun = (  enum Unit_8  (*) (  struct env274*  ,    struct Screen_276 *  ,    struct Editor_248 *  ) )render_dash_editor1905 , .env =  envinst274 } );
            ( temp1903.fun ( &temp1903.env ,  (  screen4623 ) ,  (  ed4621 ) ) );
            last_dash_redraw_dash_changes4624 = ( (  render_dash_screen2260 ) ( (  screen4623 ) ) );
        }
        ( (  sync2407 ) ( (  tui4622 ) ) );
    }
    ( (  free_dash_screen2416 ) ( (  screen4623 ) ) );
    ( (  deinit2419 ) ( (  tui4622 ) ) );
}
