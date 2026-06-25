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
    size_t  starting_dash_size2038;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2039;
};

struct env2 {
    ;
    ;
    ;
    size_t  starting_dash_size2038;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2039;
};

struct env3 {
    ;
    ;
    ;
    size_t  starting_dash_size2038;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2039;
};

struct env4 {
    ;
    ;
    ;
    size_t  starting_dash_size2038;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2039;
};

struct env5 {
    ;
    ;
    ;
    size_t  starting_dash_size2038;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2039;
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
    ;
    struct env1 envinst1;
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
    ;
    struct env2 envinst2;
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
    enum Unit_8  (*fun) (  struct env5*  ,    struct List_17 *  );
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
    enum Unit_8  (*fun) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  );
    struct env12 env;
};

struct envunion39 {
    enum Unit_8  (*fun) (  struct env2*  ,    struct List_14 *  );
    struct env2 env;
};

struct env37 {
    struct env12 envinst12;
    ;
    ;
    ;
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
    ;
    size_t  shrink_dash_factor2040;
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
    ;
    size_t  shrink_dash_factor2040;
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
    struct env42 envinst42;
    ;
    ;
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
    ;
    ;
    struct env6 envinst6;
    ;
    ;
};

struct envunion49 {
    enum Unit_8  (*fun) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  );
    struct env12 env;
};

struct env48 {
    ;
    ;
    struct env12 envinst12;
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
    ;
    ;
    struct env46 envinst46;
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
    ;
    ;
    struct env48 envinst48;
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
    ;
    ;
    struct env46 envinst46;
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
    enum Unit_8  (*fun) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrView_27  );
    struct env63 env;
};

struct envunion76 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct env74 {
    ;
    struct env63 envinst63;
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
    struct env66 envinst66;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
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
    struct env67 envinst67;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
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
    ;
    ;
    bool *  should_dash_resize3370;
    ;
    ;
};

struct env87 {
    ;
    bool *  should_dash_resize3370;
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
    struct env12 envinst12;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env46 envinst46;
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
    struct env69 envinst69;
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
    struct env52 envinst52;
    ;
    ;
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
    struct env100 envinst100;
    ;
    ;
    ;
    struct env112 envinst112;
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
    struct env100 envinst100;
    ;
    ;
};

struct envunion120 {
    enum Unit_8  (*fun) (  struct env100*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env100 env;
};

struct env119 {
    ;
    ;
    struct env100 envinst100;
    ;
    ;
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
    struct env117 envinst117;
    ;
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
    struct env119 envinst119;
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
    struct env21 envinst21;
    struct env28 envinst28;
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
    struct env119 envinst119;
    ;
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
    struct env134 envinst134;
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
    ;
    uint32_t  base1211;
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

static  uint32_t   reduce149 (    struct Range_150  iterable1094 ,    uint32_t  base1096 ,   struct envunion152  fun1098 ) {
    uint32_t  x1099 = (  base1096 );
    struct RangeIter_153  it1100 = ( (  into_dash_iter154 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1101 = ( (  next156 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_155_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_155_Just_t ) {
                struct envunion152  temp160 = (  fun1098 );
                x1099 = ( temp160.fun ( &temp160.env ,  ( dref1101 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  uint32_t   lam166 (   struct env151* env ,    int32_t  item1215 ,    uint32_t  x1217 ) {
    return (  op_dash_mul167 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  uint32_t   pow148 (    uint32_t  base1211 ,    int32_t  p1213 ) {
    struct env151 envinst151 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce149 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1213 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral165 ( 1 ) ) ,  ( (struct envunion152){ .fun = (  uint32_t  (*) (  struct env151*  ,    int32_t  ,    uint32_t  ) )lam166 , .env =  envinst151 } ) ) );
}

static  uint32_t   rshift146 (    uint32_t  x1225 ,    int32_t  am1227 ) {
    return (  op_dash_div147 ( (  x1225 ) , ( (  pow148 ) ( (  from_dash_integral165 ( 2 ) ) ,  (  am1227 ) ) ) ) );
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

static  uint32_t   mod168 (    uint32_t  l1230 ,    uint32_t  d1232 ) {
    uint32_t  r1233 = (  op_dash_div147 ( (  l1230 ) , (  d1232 ) ) );
    uint32_t  m1234 = (  op_dash_sub169 ( (  l1230 ) , (  op_dash_mul167 ( (  r1233 ) , (  d1232 ) ) ) ) );
    if ( (  cmp170 ( (  m1234 ) , (  from_dash_integral165 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add171 ( (  d1232 ) , (  m1234 ) ) );
    } else {
        return (  m1234 );
    }
}

static  struct RGB_141   rgb_dash_from_dash_hex143 (    uint32_t  n2691 ) {
    return ( (struct RGB_141) { .f_r = ( (  u32_dash_u8144 ) ( ( (  rshift146 ) ( (  n2691 ) ,  (  from_dash_integral56 ( 16 ) ) ) ) ) ) , .f_g = ( (  u32_dash_u8144 ) ( ( (  mod168 ) ( ( (  rshift146 ) ( (  n2691 ) ,  (  from_dash_integral56 ( 8 ) ) ) ) ,  (  from_dash_integral165 ( 256 ) ) ) ) ) ) , .f_b = ( (  u32_dash_u8144 ) ( ( (  mod168 ) ( (  n2691 ) ,  (  from_dash_integral165 ( 256 ) ) ) ) ) ) } );
}

static  struct Color_138   rgb142 (    uint32_t  x4013 ) {
    return ( ( Color_138_ColorRGB ) ( ( (  rgb_dash_from_dash_hex143 ) ( (  x4013 ) ) ) ) );
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

static  struct Slice_174   as_dash_slice178 (    struct Array_179 *  arr2285 ) {
    return ( (struct Slice_174) { .f_ptr = ( (  cast180 ) ( (  arr2285 ) ) ) , .f_count = ( (size_t ) ( 13 ) ) } );
}

static  struct Array_179   from_dash_listlike182 (    struct Array_179  self330 ) {
    return (  self330 );
}

static  struct HighlightColors_175   hlt183 (    enum HighlightType_20  type4007 ,    struct Color_138  fg4009 ) {
    return ( (struct HighlightColors_175) { .f_type = (  type4007 ) , .f_fg = (  fg4009 ) , .f_bg = ( (struct Maybe_176) { .tag = Maybe_176_None_t } ) } );
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

static  struct Slice_192   as_dash_slice194 (    struct Array_195 *  arr2285 ) {
    return ( (struct Slice_192) { .f_ptr = ( (  cast196 ) ( (  arr2285 ) ) ) , .f_count = ( (size_t ) ( 4 ) ) } );
}

static  struct Array_195   from_dash_listlike198 (    struct Array_195  self330 ) {
    return (  self330 );
}

static  struct StrView_27   from_dash_string199 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

struct env200 {
    ;
    struct Slice_192  all_dash_themes4029;
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
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
    struct env127 env;
};

struct env207 {
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

struct envunion210 {
    struct Maybe_206  (*fun) (  struct env121*  ,    struct TextBuf_104 *  );
    struct env121 env;
};

struct env209 {
    struct env121 envinst121;
    ;
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
    ;
    ;
    ;
    ;
    ;
    struct env123 envinst123;
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
    struct env127 envinst127;
    ;
    ;
    ;
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
    struct env132 envinst132;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion224 {
    struct Maybe_206  (*fun) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  );
    struct env127 env;
};

struct envunion225 {
    enum Unit_8  (*fun) (  struct env132*  ,    struct TextBuf_104 *  ,    struct Cursors_33  );
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
    ;
    struct env127 envinst127;
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
};

struct envunion227 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_219 *  ,    int32_t  );
    struct env215 env;
};

struct env226 {
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
    struct env132 envinst132;
    struct env204 envinst204;
    ;
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

struct envunion234 {
    struct StrView_27  (*fun) (  struct env125*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env125 env;
};

struct env233 {
    ;
    ;
    ;
    ;
    struct env125 envinst125;
    ;
    ;
    ;
    ;
};

struct envunion236 {
    struct StrView_27  (*fun) (  struct env74*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env74 env;
};

struct env235 {
    struct env74 envinst74;
    ;
    ;
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
    ;
    ;
    ;
    struct env77 envinst77;
};

struct envunion240 {
    struct StrView_27  (*fun) (  struct env81*  ,    struct StrConcat_83  ,    enum CAllocator_10  );
    struct env81 env;
};

struct env239 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env81 envinst81;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env200 envinst200;
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
    struct env235 envinst235;
    struct env237 envinst237;
    struct env239 envinst239;
    ;
    ;
    ;
    ;
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
    struct env226 envinst226;
    ;
    struct env239 envinst239;
    ;
    struct env204 envinst204;
    ;
    ;
    struct env228 envinst228;
    ;
    ;
    ;
    struct env223 envinst223;
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
};

struct envunion265 {
    enum Unit_8  (*fun) (  struct env207*  ,    struct Pane_219 *  );
    struct env207 env;
};

struct envunion266 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion267 {
    enum Unit_8  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct Key_269 {
    enum {
        Key_269_Escape_t,
        Key_269_Enter_t,
        Key_269_Tab_t,
        Key_269_Backspace_t,
        Key_269_Char_t,
        Key_269_Ctrl_t,
        Key_269_Up_t,
        Key_269_Down_t,
        Key_269_Left_t,
        Key_269_Right_t,
        Key_269_Home_t,
        Key_269_End_t,
        Key_269_PageUp_t,
        Key_269_PageDown_t,
        Key_269_Delete_t,
        Key_269_Insert_t,
        Key_269_F1_t,
        Key_269_F2_t,
        Key_269_F3_t,
        Key_269_F4_t,
        Key_269_F5_t,
        Key_269_F6_t,
        Key_269_F7_t,
        Key_269_F8_t,
        Key_269_F9_t,
        Key_269_F10_t,
        Key_269_F11_t,
        Key_269_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_269_Char_s;
        struct {
            char  field0;
        } Key_269_Ctrl_s;
    } stuff;
};

static struct Key_269 Key_269_Char (  char  field0 ) {
    return ( struct Key_269 ) { .tag = Key_269_Char_t, .stuff = { .Key_269_Char_s = { .field0 = field0 } } };
};

static struct Key_269 Key_269_Ctrl (  char  field0 ) {
    return ( struct Key_269 ) { .tag = Key_269_Ctrl_t, .stuff = { .Key_269_Ctrl_s = { .field0 = field0 } } };
};

struct envunion268 {
    enum Unit_8  (*fun) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_269  );
    struct env253 env;
};

struct envunion270 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env244 env;
};

struct envunion271 {
    enum Unit_8  (*fun) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  );
    struct env226 env;
};

struct envunion272 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  );
    struct env204 env;
};

struct envunion273 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env241 env;
};

struct env264 {
    ;
    ;
    ;
    ;
    struct env207 envinst207;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
    struct env72 envinst72;
    ;
    ;
    struct env253 envinst253;
    ;
    ;
    struct env244 envinst244;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env226 envinst226;
    ;
    ;
    struct env204 envinst204;
    ;
    ;
    ;
    ;
    struct env241 envinst241;
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

static  struct ConstStrIter_294   into_dash_iter296 (    struct ConstStrIter_294  self1396 ) {
    return (  self1396 );
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

static  struct Maybe_297   next298 (    struct ConstStrIter_294 *  self1399 ) {
    uint8_t *  char_dash_ptr1400 = ( ( (  cast299 ) ( ( ( * (  self1399 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1401 = ( (  offset_dash_ptr300 ) ( (  char_dash_ptr1400 ) ,  ( (  size_dash_i64302 ) ( ( ( * (  self1399 ) ) .f_i ) ) ) ) );
    if ( (  eq303 ( ( * (  optr1401 ) ) , ( (  cast304 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    struct Char_65  char1402 = ( (  scan_dash_from_dash_mem305 ) ( (  optr1401 ) ) );
    (*  self1399 ) .f_i = (  op_dash_add311 ( ( ( * (  self1399 ) ) .f_i ) , ( (  char1402 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_297_Just ) ( (  char1402 ) ) );
}

static  size_t   reduce295 (    struct ConstStrIter_294  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct ConstStrIter_294  it1100 = ( (  into_dash_iter296 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1101 = ( (  next298 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_297_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_297_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  size_t   lam314 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add311 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count293 (    struct ConstStrIter_294  it1105 ) {
    return ( (  reduce295 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam314 ) ) );
}

static  struct ConstStrIter_294   into_dash_iter316 (    const char*  self1393 ) {
    return ( (struct ConstStrIter_294) { .f_ogstr = (  self1393 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_294   chars315 (    const char*  self1408 ) {
    return ( (  into_dash_iter316 ) ( (  self1408 ) ) );
}

static  size_t   const_dash_str_dash_len292 (    const char*  s1695 ) {
    return ( (  count293 ) ( ( (  chars315 ) ( (  s1695 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str291 (    const char*  s1993 ) {
    size_t  len1994 = ( (  const_dash_str_dash_len292 ) ( (  s1993 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  cast299 ) ( (  s1993 ) ) ) , .f_count = (  len1994 ) } ) } );
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

static  enum Unit_8   print_dash_str328 (    struct StrView_27  self1380 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32329 ) ( ( ( (  self1380 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1380 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str334 (    size_t  self1471 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1471 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str333 (    struct StrConcat_84  self1510 ) {
    struct StrConcat_84  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str334 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str332 (    struct StrConcat_83  self1510 ) {
    struct StrConcat_83  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str333 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str331 (    struct StrConcat_322  self1510 ) {
    struct StrConcat_322  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str332 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str334 ) ( ( dref1511 .field1 ) ) );
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

static  enum Unit_8   print_dash_str335 (    struct Char_65  self1411 ) {
    ( (  printf_dash_char336 ) ( (  self1411 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str330 (    struct StrConcat_321  self1510 ) {
    struct StrConcat_321  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str327 (    struct StrConcat_326  self1510 ) {
    struct StrConcat_326  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str330 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str324 (    struct StrConcat_325  self1510 ) {
    struct StrConcat_325  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str327 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
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

static  enum Unit_8   panic323 (    struct StrConcat_321  errmsg1714 ) {
    ( (  print_dash_str324 ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_326_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  const char*   undefined348 (  ) {
    const char*  temp349;
    return (  temp349 );
}

static  const char*   or_dash_fail319 (    struct Maybe_320  x1727 ,    struct StrConcat_321  errmsg1729 ) {
    struct Maybe_320  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_320_None_t ) {
        ( (  panic323 ) ( (  errmsg1729 ) ) );
        return ( (  undefined348 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_320_Just_t ) {
            return ( dref1730 .stuff .Maybe_320_Just_s .field0 );
        }
    }
}

static  struct Maybe_320   try_dash_get350 (    struct Slice_283  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp290 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_320) { .tag = Maybe_320_None_t } );
    }
    const char* *  elem_dash_ptr1768 = ( (  offset_dash_ptr285 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_320_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  const char*   get318 (    struct Slice_283  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail319 ) ( ( (  try_dash_get350 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get317 (    struct Slice_283  self1869 ,    size_t  idx1871 ) {
    return ( (  get318 ) ( (  self1869 ) ,  (  idx1871 ) ) );
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

static  struct List_14   mk361 (    enum CAllocator_10  al2033 ) {
    struct Slice_15  elements2034 = ( (  empty362 ) ( ) );
    return ( (struct List_14) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env371 {
    struct env12 envinst12;
    struct List_14 *  list2100;
};

struct envunion372 {
    enum Unit_8  (*fun) (  struct env371*  ,    struct Line_16  );
    struct env371 env;
};

struct ArrayIter_373 {
    struct Array_54  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_373   into_dash_iter375 (    struct Array_54  self2335 ) {
    return ( (struct ArrayIter_373) { .f_backing = (  self2335 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
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

static  enum Unit_8   print_dash_str389 (    int32_t  self1447 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1447 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str388 (    struct StrConcat_382  self1510 ) {
    struct StrConcat_382  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str332 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str389 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str387 (    struct StrConcat_381  self1510 ) {
    struct StrConcat_381  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str388 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str386 (    struct StrConcat_385  self1510 ) {
    struct StrConcat_385  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str387 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str383 (    struct StrConcat_384  self1510 ) {
    struct StrConcat_384  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str386 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic380 (    struct StrConcat_381  errmsg1714 ) {
    ( (  print_dash_str383 ) ( ( ( StrConcat_384_StrConcat ) ( ( ( StrConcat_385_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
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

static  struct Line_16 *   get_dash_ptr379 (    struct Array_54 *  arr2263 ,    size_t  i2266 ) {
    if ( ( (  cmp290 ( (  i2266 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2266 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2266 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  p2267 = ( ( (  cast_dash_ptr390 ) ( (  arr2263 ) ) ) );
    return ( (  offset_dash_ptr391 ) ( (  p2267 ) ,  ( (int64_t ) (  i2266 ) ) ) );
}

static  struct Line_16   get378 (    struct Array_54 *  arr2270 ,    size_t  i2273 ) {
    return ( * ( (  get_dash_ptr379 ) ( (  arr2270 ) ,  (  i2273 ) ) ) );
}

static  struct Maybe_376   next377 (    struct ArrayIter_373 *  self2342 ) {
    if ( (  cmp290 ( ( ( * (  self2342 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_376) { .tag = Maybe_376_None_t } );
    }
    struct Line_16  e2344 = ( (  get378 ) ( ( & ( ( * (  self2342 ) ) .f_backing ) ) ,  ( ( * (  self2342 ) ) .f_cur ) ) );
    (*  self2342 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2342 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_376_Just ) ( (  e2344 ) ) );
}

static  enum Unit_8   for_dash_each370 (    struct Array_54  iterable1075 ,   struct envunion372  fun1077 ) {
    struct ArrayIter_373  temp374 = ( (  into_dash_iter375 ) ( (  iterable1075 ) ) );
    struct ArrayIter_373 *  it1078 = ( &temp374 );
    while ( ( true ) ) {
        struct Maybe_376  dref1079 = ( (  next377 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_376_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_376_Just_t ) {
                struct envunion372  temp393 = (  fun1077 );
                ( temp393.fun ( &temp393.env ,  ( dref1079 .stuff .Maybe_376_Just_s .field0 ) ) );
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

static  struct Slice_15   allocate400 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize401 ) ( ) ) ) .f_size );
    struct Line_16 *  ptr1959 = ( (  cast_dash_ptr404 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_15) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env406 {
    ;
    ;
    struct Slice_15  new_dash_slice2044;
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

static  struct Line_16 *   get_dash_ptr411 (    struct Slice_15  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp290 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  elem_dash_ptr1762 = ( (  offset_dash_ptr391 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set410 (    struct Slice_15  slice1776 ,    size_t  i1778 ,    struct Line_16  x1780 ) {
    struct Line_16 *  ep1781 = ( (  get_dash_ptr411 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size412 (    int32_t  x610 ) {
    return ( (size_t ) ( (int64_t ) (  x610 ) ) );
}

static  enum Unit_8   lam409 (   struct env406* env ,    struct Tuple2_408  dref2045 ) {
    return ( (  set410 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size412 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
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

static  struct Zip_414   into_dash_iter418 (    struct Zip_414  self912 ) {
    return (  self912 );
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

static  struct Maybe_376   next421 (    struct SliceIter_415 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_376) { .tag = Maybe_376_None_t } );
    }
    struct Line_16  elem1832 = ( * ( (  offset_dash_ptr391 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_376_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_155   next422 (    struct FromIter_416 *  dref906 ) {
    int32_t  v908 = ( ( (* dref906 ) ) .f_from );
    (* dref906 ) .f_from = (  op_dash_add159 ( ( ( (* dref906 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_155_Just ) ( (  v908 ) ) );
}

static  struct Maybe_419   next420 (    struct Zip_414 *  self915 ) {
    struct Zip_414  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_376  dref917 = ( (  next421 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_376_None_t ) {
            return ( (struct Maybe_419) { .tag = Maybe_419_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_376_Just_t ) {
                struct Maybe_155  dref919 = ( (  next422 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_419) { .tag = Maybe_419_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_155_Just_t ) {
                        ( (  next421 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_419_Just ) ( ( ( Tuple2_408_Tuple2 ) ( ( dref917 .stuff .Maybe_376_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each413 (    struct Zip_414  iterable1075 ,   struct envunion407  fun1077 ) {
    struct Zip_414  temp417 = ( (  into_dash_iter418 ) ( (  iterable1075 ) ) );
    struct Zip_414 *  it1078 = ( &temp417 );
    while ( ( true ) ) {
        struct Maybe_419  dref1079 = ( (  next420 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_419_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_419_Just_t ) {
                struct envunion407  temp423 = (  fun1077 );
                ( temp423.fun ( &temp423.env ,  ( dref1079 .stuff .Maybe_419_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_415   into_dash_iter425 (    struct Slice_15  self1824 ) {
    return ( (struct SliceIter_415) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_416   into_dash_iter426 (    struct FromIter_416  it904 ) {
    return (  it904 );
}

static  struct Zip_414   zip424 (    struct Slice_15  left923 ,    struct FromIter_416  right925 ) {
    struct SliceIter_415  left_dash_it926 = ( (  into_dash_iter425 ) ( (  left923 ) ) );
    struct FromIter_416  right_dash_it927 = ( (  into_dash_iter426 ) ( (  right925 ) ) );
    return ( (struct Zip_414) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  struct FromIter_416   from427 (    int32_t  f901 ) {
    return ( (struct FromIter_416) { .f_from = (  f901 ) } );
}

static  void *   cast_dash_ptr429 (    struct Line_16 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free428 (    enum CAllocator_10  dref1961 ,    struct Slice_15  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr429 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full398 (   struct env2* env ,    struct List_14 *  list2043 ) {
    if ( (  eq399 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate400 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_15  new_dash_slice2044 = ( (  allocate400 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env406 envinst406 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion407  fun2048 = ( (struct envunion407){ .fun = (  enum Unit_8  (*) (  struct env406*  ,    struct Tuple2_408  ) )lam409 , .env =  envinst406 } );
            ( (  for_dash_each413 ) ( ( (  zip424 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free428 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add396 (   struct env12* env ,    struct List_14 *  list2051 ,    struct Line_16  elem2053 ) {
    struct envunion13  temp397 = ( (struct envunion13){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full398 , .env =  env->envinst2 } );
    ( temp397.fun ( &temp397.env ,  (  list2051 ) ) );
    ( (  set410 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add311 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam394 (   struct env371* env ,    struct Line_16  x2104 ) {
    struct envunion49  temp395 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add396 , .env =  env->envinst12 } );
    return ( temp395.fun ( &temp395.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all369 (   struct env48* env ,    struct List_14 *  list2100 ,    struct Array_54  it2102 ) {
    struct env371 envinst371 = {
        .envinst12 = env->envinst12 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each370 ) ( (  it2102 ) ,  ( (struct envunion372){ .fun = (  enum Unit_8  (*) (  struct env371*  ,    struct Line_16  ) )lam394 , .env =  envinst371 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_14   from_dash_iter359 (   struct env52* env ,    struct Array_54  iter2141 ,    enum CAllocator_10  al2143 ) {
    struct List_14  temp360 = ( (  mk361 ) ( (  al2143 ) ) );
    struct List_14 *  list2144 = ( &temp360 );
    struct envunion53  temp368 = ( (struct envunion53){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_14 *  ,    struct Array_54  ) )add_dash_all369 , .env =  env->envinst48 } );
    ( temp368.fun ( &temp368.env ,  (  list2144 ) ,  (  iter2141 ) ) );
    return ( * (  list2144 ) );
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

static  struct List_17   mk432 (    enum CAllocator_10  al2033 ) {
    struct Slice_18  elements2034 = ( (  empty433 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_16   mk_dash_line431 (    struct List_9  initial3715 ) {
    return ( (struct Line_16) { .f_line = (  initial3715 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk432 ) ( ( (  initial3715 ) .f_al ) ) ) } );
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

static  struct List_9   mk439 (    enum CAllocator_10  al2033 ) {
    struct Slice_11  elements2034 = ( (  empty440 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
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

static  struct List_30   mk447 (    enum CAllocator_10  al2033 ) {
    struct Slice_31  elements2034 = ( (  empty448 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_105   mk_dash_actions446 (    enum CAllocator_10  al3703 ) {
    return ( (struct Actions_105) { .f_list = ( (  mk447 ) ( (  al3703 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_106_NoChangeset ) } );
}

static  struct TextBuf_104   mk357 (   struct env112* env ,    enum CAllocator_10  al3817 ) {
    struct envunion113  temp358 = ( (struct envunion113){ .fun = (  struct List_14  (*) (  struct env52*  ,    struct Array_54  ,    enum CAllocator_10  ) )from_dash_iter359 , .env =  env->envinst52 } );
    return ( (struct TextBuf_104) { .f_al = (  al3817 ) , .f_buf = ( temp358.fun ( &temp358.env ,  ( (  from_dash_listlike430 ) ( ( (struct Array_54) { ._arr = { ( (  mk_dash_line431 ) ( ( (  mk439 ) ( (  al3817 ) ) ) ) ) } } ) ) ) ,  (  al3817 ) ) ) , .f_actions = ( (  mk_dash_actions446 ) ( (  al3817 ) ) ) , .f_filename = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_filetype = ( Filetype_107_Text ) } );
}

struct StrViewIter_458 {
    struct StrView_27  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_458   into_dash_iter459 (    struct StrViewIter_458  self1372 ) {
    return (  self1372 );
}

static  struct StrViewIter_458   into_dash_iter461 (    struct StrView_27  self1369 ) {
    return ( (struct StrViewIter_458) { .f_ds = (  self1369 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_458   chars460 (    struct StrView_27  self1383 ) {
    return ( (  into_dash_iter461 ) ( (  self1383 ) ) );
}

static  struct Maybe_297   next463 (    struct StrViewIter_458 *  self1375 ) {
    if ( (  cmp290 ( ( ( * (  self1375 ) ) .f_i ) , ( ( ( ( * (  self1375 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint8_t *  char_dash_ptr1376 = ( ( (  offset_dash_ptr300 ) ( ( (  cast347 ) ( ( ( ( ( * (  self1375 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64302 ) ( ( ( * (  self1375 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1377 = ( (  scan_dash_from_dash_mem305 ) ( (  char_dash_ptr1376 ) ) );
    (*  self1375 ) .f_i = (  op_dash_add311 ( ( ( * (  self1375 ) ) .f_i ) , ( (  char1377 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_297_Just ) ( (  char1377 ) ) );
}

static  size_t   min467 (    size_t  l1237 ,    size_t  r1239 ) {
    if ( (  cmp290 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Slice_11   subslice466 (    struct Slice_11  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    uint8_t *  begin_dash_ptr1789 = ( (  offset_dash_ptr300 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp290 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct Slice_11   from465 (    struct Slice_11  slice1793 ,    size_t  from1795 ) {
    return ( (  subslice466 ) ( (  slice1793 ) ,  (  from1795 ) ,  ( (  slice1793 ) .f_count ) ) );
}

static  struct StrView_27   byte_dash_substr_dash_from464 (    struct StrView_27  s2195 ,    size_t  from2197 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from465 ) ( ( (  s2195 ) .f_contents ) ,  (  from2197 ) ) ) } );
}

static  struct StrView_27   drop_dash_while456 (    struct StrView_27  sv2214 ,    bool (*  fun2216 )(    struct Char_65  ) ) {
    size_t  from2217 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_458  temp457 =  into_dash_iter459 ( ( (  chars460 ) ( (  sv2214 ) ) ) );
    while (true) {
        struct Maybe_297  __cond462 =  next463 (&temp457);
        if (  __cond462 .tag == 0 ) {
            break;
        }
        struct Char_65  c2219 =  __cond462 .stuff .Maybe_297_Just_s .field0;
        if ( ( ! ( (  fun2216 ) ( (  c2219 ) ) ) ) ) {
            break;
        }
        from2217 = (  op_dash_add311 ( (  from2217 ) , ( (  c2219 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from464 ) ( (  sv2214 ) ,  (  from2217 ) ) );
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

static  bool   lam468 (    struct Char_65  c3727 ) {
    return (  eq469 ( (  c3727 ) , ( (  from_dash_charlike346 ) ( ( "." ) ,  ( 1 ) ) ) ) );
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

static  uint8_t   or_dash_fail476 (    struct Maybe_477  x1727 ,    struct StrConcat_321  errmsg1729 ) {
    struct Maybe_477  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_477_None_t ) {
        ( (  panic323 ) ( (  errmsg1729 ) ) );
        return ( (  undefined478 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_477_Just_t ) {
            return ( dref1730 .stuff .Maybe_477_Just_s .field0 );
        }
    }
}

static  struct Maybe_477   try_dash_get480 (    struct Slice_11  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp290 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_477) { .tag = Maybe_477_None_t } );
    }
    uint8_t *  elem_dash_ptr1768 = ( (  offset_dash_ptr300 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_477_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  uint8_t   get475 (    struct Slice_11  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail476 ) ( ( (  try_dash_get480 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get474 (    struct Slice_11  self1869 ,    size_t  idx1871 ) {
    return ( (  get475 ) ( (  self1869 ) ,  (  idx1871 ) ) );
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

static  struct StrView_27   byte_dash_substr484 (    struct StrView_27  s2188 ,    size_t  from2190 ,    size_t  to2192 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice466 ) ( ( (  s2188 ) .f_contents ) ,  (  from2190 ) ,  (  to2192 ) ) ) } );
}

static  struct Maybe_80   extension455 (    struct StrView_27  path3725 ) {
    struct StrView_27  path3728 = ( (  drop_dash_while456 ) ( (  path3725 ) ,  (  lam468 ) ) );
    size_t  i3729 = ( ( (  path3728 ) .f_contents ) .f_count );
    while ( (  cmp290 ( (  i3729 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i3729 = (  op_dash_sub289 ( (  i3729 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq303 ( (  elem_dash_get474 ( ( (  path3728 ) .f_contents ) , (  i3729 ) ) ) , ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq399 ( (  i3729 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  ext3730 = ( (  byte_dash_substr484 ) ( (  path3728 ) ,  (  op_dash_add311 ( (  i3729 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path3728 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_80_Just ) ( (  ext3730 ) ) );
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
    bool (*  fun1127 )(    struct Tuple2_490  );
};

struct envunion493 {
    bool  (*fun) (  struct env492*  ,    struct Tuple2_490  ,    bool  );
    struct env492 env;
};

static  struct Zip_488   into_dash_iter494 (    struct Zip_488  self912 ) {
    return (  self912 );
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

static  struct Maybe_477   next497 (    struct SliceIter_489 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_477) { .tag = Maybe_477_None_t } );
    }
    uint8_t  elem1832 = ( * ( (  offset_dash_ptr300 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_477_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_495   next496 (    struct Zip_488 *  self915 ) {
    struct Zip_488  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_477  dref917 = ( (  next497 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_477_None_t ) {
            return ( (struct Maybe_495) { .tag = Maybe_495_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_477_Just_t ) {
                struct Maybe_477  dref919 = ( (  next497 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_477_None_t ) {
                    return ( (struct Maybe_495) { .tag = Maybe_495_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_477_Just_t ) {
                        ( (  next497 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next497 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_495_Just ) ( ( ( Tuple2_490_Tuple2 ) ( ( dref917 .stuff .Maybe_477_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_477_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce491 (    struct Zip_488  iterable1094 ,    bool  base1096 ,   struct envunion493  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct Zip_488  it1100 = ( (  into_dash_iter494 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_495  dref1101 = ( (  next496 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_495_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_495_Just_t ) {
                struct envunion493  temp498 = (  fun1098 );
                x1099 = ( temp498.fun ( &temp498.env ,  ( dref1101 .stuff .Maybe_495_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  bool   lam501 (   struct env492* env ,    struct Tuple2_490  e1129 ,    bool  x1131 ) {
    return ( ( ( env->fun1127 ) ( (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all487 (    struct Zip_488  it1125 ,    bool (*  fun1127 )(    struct Tuple2_490  ) ) {
    struct env492 envinst492 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce491 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion493){ .fun = (  bool  (*) (  struct env492*  ,    struct Tuple2_490  ,    bool  ) )lam501 , .env =  envinst492 } ) ) );
}

static  struct SliceIter_489   into_dash_iter503 (    struct Slice_11  self1824 ) {
    return ( (struct SliceIter_489) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_488   zip502 (    struct Slice_11  left923 ,    struct Slice_11  right925 ) {
    struct SliceIter_489  left_dash_it926 = ( (  into_dash_iter503 ) ( (  left923 ) ) );
    struct SliceIter_489  right_dash_it927 = ( (  into_dash_iter503 ) ( (  right925 ) ) );
    return ( (struct Zip_488) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  bool   lam504 (    struct Tuple2_490  dref1864 ) {
    return (  eq303 ( ( dref1864 .field0 ) , ( dref1864 .field1 ) ) );
}

static  bool   eq486 (    struct Slice_11  l1861 ,    struct Slice_11  r1863 ) {
    if ( ( !  eq399 ( ( (  l1861 ) .f_count ) , ( (  r1863 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all487 ) ( ( (  zip502 ) ( (  l1861 ) ,  (  r1863 ) ) ) ,  (  lam504 ) ) );
}

static  bool   eq485 (    struct StrView_27  l2222 ,    struct StrView_27  r2224 ) {
    return (  eq486 ( ( (  l2222 ) .f_contents ) , ( (  r2224 ) .f_contents ) ) );
}

static  enum Filetype_107   detect_dash_filetype_dash_from_dash_filename454 (    struct StrView_27  filename3722 ) {
    struct Maybe_80  mext3731 = ( (  extension455 ) ( (  filename3722 ) ) );
    struct Maybe_80  dref3732 = (  mext3731 );
    if ( dref3732.tag == Maybe_80_None_t ) {
        return ( Filetype_107_Text );
    }
    else {
        if ( dref3732.tag == Maybe_80_Just_t ) {
            if ( ( (  eq485 ( ( dref3732 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string199 ) ( ( "kc" ) ,  ( 2 ) ) ) ) ) || (  eq485 ( ( dref3732 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string199 ) ( ( "kkc" ) ,  ( 3 ) ) ) ) ) ) ) {
                return ( Filetype_107_KC );
            } else {
                if ( (  eq485 ( ( dref3732 .stuff .Maybe_80_Just_s .field0 ) , ( (  from_dash_string199 ) ( ( "md" ) ,  ( 2 ) ) ) ) ) ) {
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

static  struct Slice_11   allocate506 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize507 ) ( ) ) ) .f_size );
    uint8_t *  ptr1959 = ( (  cast_dash_ptr510 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
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

static  enum Unit_8   print_dash_str518 (    struct StrConcat_513  self1510 ) {
    struct StrConcat_513  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str517 (    struct StrConcat_516  self1510 ) {
    struct StrConcat_516  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str518 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str514 (    struct StrConcat_515  self1510 ) {
    struct StrConcat_515  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str517 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic512 (    struct StrConcat_513  errmsg1714 ) {
    ( (  print_dash_str514 ) ( ( ( StrConcat_515_StrConcat ) ( ( ( StrConcat_516_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
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
    struct Slice_11  dest1855;
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

static  struct Zip_520   into_dash_iter525 (    struct Zip_520  self912 ) {
    return (  self912 );
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

static  struct Maybe_526   next527 (    struct Zip_520 *  self915 ) {
    struct Zip_520  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_477  dref917 = ( (  next497 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_477_None_t ) {
            return ( (struct Maybe_526) { .tag = Maybe_526_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_477_Just_t ) {
                struct Maybe_155  dref919 = ( (  next422 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_526) { .tag = Maybe_526_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_155_Just_t ) {
                        ( (  next497 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_526_Just ) ( ( ( Tuple2_523_Tuple2 ) ( ( dref917 .stuff .Maybe_477_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each519 (    struct Zip_520  iterable1075 ,   struct envunion522  fun1077 ) {
    struct Zip_520  temp524 = ( (  into_dash_iter525 ) ( (  iterable1075 ) ) );
    struct Zip_520 *  it1078 = ( &temp524 );
    while ( ( true ) ) {
        struct Maybe_526  dref1079 = ( (  next527 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_526_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_526_Just_t ) {
                struct envunion522  temp528 = (  fun1077 );
                ( temp528.fun ( &temp528.env ,  ( dref1079 .stuff .Maybe_526_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_520   zip529 (    struct Slice_11  left923 ,    struct FromIter_416  right925 ) {
    struct SliceIter_489  left_dash_it926 = ( (  into_dash_iter503 ) ( (  left923 ) ) );
    struct FromIter_416  right_dash_it927 = ( (  into_dash_iter426 ) ( (  right925 ) ) );
    return ( (struct Zip_520) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  uint8_t *   get_dash_ptr532 (    struct Slice_11  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp290 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1762 = ( (  offset_dash_ptr300 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set531 (    struct Slice_11  slice1776 ,    size_t  i1778 ,    uint8_t  x1780 ) {
    uint8_t *  ep1781 = ( (  get_dash_ptr532 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam530 (   struct env521* env ,    struct Tuple2_523  dref1856 ) {
    return ( (  set531 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size412 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to511 (    struct Slice_11  src1853 ,    struct Slice_11  dest1855 ) {
    if ( (  cmp290 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic512 ) ( ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env521 envinst521 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each519 ) ( ( (  zip529 ) ( (  src1853 ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion522){ .fun = (  enum Unit_8  (*) (  struct env521*  ,    struct Tuple2_523  ) )lam530 , .env =  envinst521 } ) ) );
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

static  struct StrView_27   clone_dash_0505 (    struct StrView_27  s2157 ,    enum CAllocator_10  al2159 ) {
    size_t  cnt2160 = ( ( (  s2157 ) .f_contents ) .f_count );
    struct Slice_11  nus2161 = ( (  allocate506 ) ( (  al2159 ) ,  (  op_dash_add311 ( (  cnt2160 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to511 ) ( ( (  s2157 ) .f_contents ) ,  (  nus2161 ) ) );
    ( (  set531 ) ( (  nus2161 ) ,  (  cnt2160 ) ,  ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2161 ) .f_ptr ) , .f_count = (  cnt2160 ) } ) } );
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

static  struct Maybe_80   try_dash_read_dash_contents534 (    const char*  filename2970 ,    enum CAllocator_10  al2972 ) {
    FILE *  file2973 = ( ( fopen ) ( (  filename2970 ) ,  ( (  from_dash_charlike535 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null536 ) ( (  file2973 ) ) ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    ( ( fseek ) ( (  file2973 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end542 ) ( ) ) ) );
    int32_t  file_dash_size2974 = ( ( ftell ) ( (  file2973 ) ) );
    ( ( fseek ) ( (  file2973 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set543 ) ( ) ) ) );
    struct Slice_11  file_dash_buf2975 = ( ( (  allocate506 ) ( (  al2972 ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( (  file_dash_size2974 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2975 ) .f_ptr ) ,  (  file_dash_size2974 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file2973 ) ) );
    ( (  set531 ) ( (  file_dash_buf2975 ) ,  ( (  i32_dash_size412 ) ( (  file_dash_size2974 ) ) ) ,  ( (  char_dash_u8533 ) ( ( (  nullchar544 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2973 ) ) );
    struct StrView_27  str2976 = ( (struct StrView_27) { .f_contents = ( (  subslice466 ) ( (  file_dash_buf2975 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub289 ( ( (  file_dash_buf2975 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_80_Just ) ( (  str2976 ) ) );
}

static  const char*   cast546 (    uint8_t *  x356 ) {
    return ( (const char* ) (  x356 ) );
}

static  const char*   as_dash_const_dash_str545 (    struct StrView_27  s2164 ) {
    return ( (  cast546 ) ( ( ( (  s2164 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr549 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free548 (    enum CAllocator_10  dref1961 ,    struct Slice_11  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr549 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free547 (    struct StrView_27  s2172 ,    enum CAllocator_10  al2174 ) {
    ( (  free548 ) ( (  al2174 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2172 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
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

static  enum Ordering_158   cmp555 (    struct Pos_26  l3637 ,    struct Pos_26  r3639 ) {
    enum Ordering_158  dref3640 = ( (  cmp157 ) ( ( (  l3637 ) .f_line ) ,  ( (  r3639 ) .f_line ) ) );
    switch (  dref3640 ) {
        case Ordering_158_EQ : {
            return ( (  cmp157 ) ( ( (  l3637 ) .f_bi ) ,  ( (  r3639 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_158  els3641 =  dref3640;
            return (  els3641 );
            break;
        }
    }
}

static  struct Pos_26   min554 (    struct Pos_26  l1237 ,    struct Pos_26  r1239 ) {
    if ( (  cmp555 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Pos_26   max556 (    struct Pos_26  l1316 ,    struct Pos_26  r1318 ) {
    if ( (  cmp555 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  bool   eq558 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq557 (    struct Pos_26  l3632 ,    struct Pos_26  r3634 ) {
    return ( (  eq558 ( ( (  l3632 ) .f_line ) , ( (  r3634 ) .f_line ) ) ) && (  eq558 ( ( (  l3632 ) .f_bi ) , ( (  r3634 ) .f_bi ) ) ) );
}

static  size_t   size559 (    struct List_14 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

static  struct Line_16 *   get_dash_ptr564 (    struct List_14 *  list2003 ,    size_t  i2005 ) {
    if ( ( (  cmp290 ( (  i2005 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2005 ) , ( ( * (  list2003 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2005 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2003 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr411 ) ( ( ( * (  list2003 ) ) .f_elements ) ,  (  i2005 ) ) );
}

static  struct Line_16   get563 (    struct List_14 *  list2013 ,    size_t  i2015 ) {
    return ( * ( (  get_dash_ptr564 ) ( (  list2013 ) ,  (  i2015 ) ) ) );
}

static  struct Slice_11   to_dash_slice565 (    struct List_9  l2128 ) {
    uint8_t *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

static  enum Unit_8   set566 (    struct List_14 *  list2023 ,    size_t  i2025 ,    struct Line_16  elem2027 ) {
    if ( ( (  cmp290 ( (  i2025 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2025 ) , ( ( * (  list2023 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2025 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2023 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set410 ) ( ( ( * (  list2023 ) ) .f_elements ) ,  (  i2025 ) ,  (  elem2027 ) ) );
    return ( Unit_8_Unit );
}

struct env573 {
    struct env6 envinst6;
    struct List_9 *  list2100;
};

struct envunion574 {
    enum Unit_8  (*fun) (  struct env573*  ,    uint8_t  );
    struct env573 env;
};

static  enum Unit_8   for_dash_each572 (    struct Slice_11  iterable1075 ,   struct envunion574  fun1077 ) {
    struct SliceIter_489  temp575 = ( (  into_dash_iter503 ) ( (  iterable1075 ) ) );
    struct SliceIter_489 *  it1078 = ( &temp575 );
    while ( ( true ) ) {
        struct Maybe_477  dref1079 = ( (  next497 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_477_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_477_Just_t ) {
                struct envunion574  temp576 = (  fun1077 );
                ( temp576.fun ( &temp576.env ,  ( dref1079 .stuff .Maybe_477_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env582 {
    ;
    ;
    struct Slice_11  new_dash_slice2044;
};

struct envunion583 {
    enum Unit_8  (*fun) (  struct env582*  ,    struct Tuple2_523  );
    struct env582 env;
};

static  enum Unit_8   lam584 (   struct env582* env ,    struct Tuple2_523  dref2045 ) {
    return ( (  set531 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size412 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

static  enum Unit_8   for_dash_each585 (    struct Zip_520  iterable1075 ,   struct envunion583  fun1077 ) {
    struct Zip_520  temp586 = ( (  into_dash_iter525 ) ( (  iterable1075 ) ) );
    struct Zip_520 *  it1078 = ( &temp586 );
    while ( ( true ) ) {
        struct Maybe_526  dref1079 = ( (  next527 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_526_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_526_Just_t ) {
                struct envunion583  temp587 = (  fun1077 );
                ( temp587.fun ( &temp587.env ,  ( dref1079 .stuff .Maybe_526_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full581 (   struct env1* env ,    struct List_9 *  list2043 ) {
    if ( (  eq399 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate506 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2044 = ( (  allocate506 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env582 envinst582 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion583  fun2048 = ( (struct envunion583){ .fun = (  enum Unit_8  (*) (  struct env582*  ,    struct Tuple2_523  ) )lam584 , .env =  envinst582 } );
            ( (  for_dash_each585 ) ( ( (  zip529 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free548 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add579 (   struct env6* env ,    struct List_9 *  list2051 ,    uint8_t  elem2053 ) {
    struct envunion7  temp580 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full581 , .env =  env->envinst1 } );
    ( temp580.fun ( &temp580.env ,  (  list2051 ) ) );
    ( (  set531 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add311 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam577 (   struct env573* env ,    uint8_t  x2104 ) {
    struct envunion47  temp578 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add579 , .env =  env->envinst6 } );
    return ( temp578.fun ( &temp578.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all571 (   struct env46* env ,    struct List_9 *  list2100 ,    struct Slice_11  it2102 ) {
    struct env573 envinst573 = {
        .envinst6 = env->envinst6 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each572 ) ( (  it2102 ) ,  ( (struct envunion574){ .fun = (  enum Unit_8  (*) (  struct env573*  ,    uint8_t  ) )lam577 , .env =  envinst573 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter568 (   struct env50* env ,    struct Slice_11  iter2141 ,    enum CAllocator_10  al2143 ) {
    struct List_9  temp569 = ( (  mk439 ) ( (  al2143 ) ) );
    struct List_9 *  list2144 = ( &temp569 );
    struct envunion51  temp570 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
    ( temp570.fun ( &temp570.env ,  (  list2144 ) ,  (  iter2141 ) ) );
    return ( * (  list2144 ) );
}

static  struct StrView_27   or_dash_else589 (    struct Maybe_80  self1734 ,    struct StrView_27  alt1736 ) {
    struct Maybe_80  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_80_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_80_Just_t ) {
            return ( dref1737 .stuff .Maybe_80_Just_s .field0 );
        }
    }
}

struct LineIter_591 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  struct Maybe_80   next592 (    struct LineIter_591 *  self2442 ) {
    if ( (  cmp290 ( ( ( * (  self2442 ) ) .f_last ) , ( ( ( ( * (  self2442 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    size_t  i2443 = ( ( * (  self2442 ) ) .f_last );
    while ( ( (  cmp290 ( (  i2443 ) , ( ( ( ( * (  self2442 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq303 ( ( (  get475 ) ( ( ( ( * (  self2442 ) ) .f_og ) .f_contents ) ,  (  i2443 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2443 = (  op_dash_add311 ( (  i2443 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2444 = ( (  byte_dash_substr484 ) ( ( ( * (  self2442 ) ) .f_og ) ,  ( ( * (  self2442 ) ) .f_last ) ,  (  i2443 ) ) );
    if ( (  cmp290 ( (  i2443 ) , ( ( ( ( * (  self2442 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2443 = (  op_dash_add311 ( (  i2443 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2442 ) .f_last = (  i2443 );
    return ( ( Maybe_80_Just ) ( (  line2444 ) ) );
}

static  struct LineIter_591   into_dash_iter594 (    struct LineIter_591  self2439 ) {
    return (  self2439 );
}

static  struct Maybe_80   head590 (    struct LineIter_591  it1143 ) {
    struct LineIter_591  temp593 = ( (  into_dash_iter594 ) ( (  it1143 ) ) );
    return ( (  next592 ) ( ( &temp593 ) ) );
}

static  struct LineIter_591   lines595 (    struct StrView_27  s2436 ) {
    return ( (struct LineIter_591) { .f_og = (  s2436 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env600 {
    ;
    struct Char_65  c2235;
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

static  struct Zip_597   into_dash_iter602 (    struct Zip_597  self912 ) {
    return (  self912 );
}

static  struct Drop_598   into_dash_iter604 (    struct Drop_598  self846 ) {
    return (  self846 );
}

static  struct Zip_597   zip603 (    struct Drop_598  left923 ,    struct FromIter_416  right925 ) {
    struct Drop_598  left_dash_it926 = ( (  into_dash_iter604 ) ( (  left923 ) ) );
    struct FromIter_416  right_dash_it927 = ( (  into_dash_iter426 ) ( (  right925 ) ) );
    return ( (struct Zip_597) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  struct SplitIter_599   into_dash_iter606 (    struct SplitIter_599  self2240 ) {
    return (  self2240 );
}

static  struct Drop_598   drop605 (    struct SplitIter_599  iterable853 ,    size_t  i855 ) {
    struct SplitIter_599  it856 = ( (  into_dash_iter606 ) ( (  iterable853 ) ) );
    return ( ( Drop_598_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SplitIter_599   split_dash_by_dash_filter608 (    struct StrView_27  s2228 ,   struct envunion601  fun2230 ) {
    return ( (struct SplitIter_599) { .f_og = (  s2228 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2230 ) } );
}

static  bool   lam609 (   struct env600* env ,    struct Char_65  cc2237 ) {
    return (  eq469 ( (  cc2237 ) , ( env->c2235 ) ) );
}

static  struct SplitIter_599   split_dash_by_dash_each607 (    struct StrView_27  s2233 ,    struct Char_65  c2235 ) {
    struct env600 envinst600 = {
        .c2235 =  c2235 ,
    };
    return ( (  split_dash_by_dash_filter608 ) ( (  s2233 ) ,  ( (struct envunion601){ .fun = (  bool  (*) (  struct env600*  ,    struct Char_65  ) )lam609 , .env =  envinst600 } ) ) );
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

static  struct Maybe_80   next615 (    struct SplitIter_599 *  self2243 ) {
    if ( (  cmp290 ( ( ( * (  self2243 ) ) .f_last ) , ( ( ( ( * (  self2243 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    size_t  i2244 = ( ( * (  self2243 ) ) .f_last );
    while ( (  cmp290 ( (  i2244 ) , ( ( ( ( * (  self2243 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2245 = ( (  get_dash_ptr532 ) ( ( ( ( * (  self2243 ) ) .f_og ) .f_contents ) ,  (  i2244 ) ) );
        struct Char_65  c2246 = ( (  scan_dash_from_dash_mem305 ) ( (  ptr2245 ) ) );
        struct envunion601  temp616 = ( ( * (  self2243 ) ) .f_fun );
        if ( ( temp616.fun ( &temp616.env ,  (  c2246 ) ) ) ) {
            break;
        }
        i2244 = (  op_dash_add311 ( (  i2244 ) , ( (  next_dash_char306 ) ( (  ptr2245 ) ) ) ) );
    }
    struct StrView_27  line2247 = ( (  byte_dash_substr484 ) ( ( ( * (  self2243 ) ) .f_og ) ,  ( ( * (  self2243 ) ) .f_last ) ,  (  i2244 ) ) );
    i2244 = (  op_dash_add311 ( (  i2244 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2243 ) .f_last = (  i2244 );
    return ( ( Maybe_80_Just ) ( (  line2247 ) ) );
}

static  struct Maybe_80   next614 (    struct Drop_598 *  dref848 ) {
    while ( (  cmp290 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next615 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub289 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next615 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  struct Maybe_611   next613 (    struct Zip_597 *  self915 ) {
    struct Zip_597  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_80  dref917 = ( (  next614 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_80_None_t ) {
            return ( (struct Maybe_611) { .tag = Maybe_611_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_80_Just_t ) {
                struct Maybe_155  dref919 = ( (  next422 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_611) { .tag = Maybe_611_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_155_Just_t ) {
                        ( (  next614 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_611_Just ) ( ( ( Tuple2_612_Tuple2 ) ( ( dref917 .stuff .Maybe_80_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
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

static  enum Unit_8   insert621 (   struct env37* env ,    struct List_14 *  list2056 ,    size_t  i2058 ,    struct Line_16  elem2060 ) {
    if ( ( (  cmp290 ( (  i2058 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2058 ) , ( ( * (  list2056 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2058 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq399 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp622 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add396 , .env =  env->envinst12 } );
        ( temp622.fun ( &temp622.env ,  (  list2056 ) ,  (  elem2060 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp623 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full398 , .env =  env->envinst2 } );
    ( temp623.fun ( &temp623.env ,  (  list2056 ) ) );
    size_t  ii2061 = (  op_dash_sub289 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp290 ( (  ii2061 ) , (  i2058 ) ) != 0 ) ) {
        ( (  set410 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  op_dash_add311 ( (  ii2061 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get563 ) ( (  list2056 ) ,  (  ii2061 ) ) ) ) );
        if ( (  eq399 ( (  ii2061 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2061 = (  op_dash_sub289 ( (  ii2061 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set410 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  i2058 ) ,  (  elem2060 ) ) );
    (*  list2056 ) .f_count = (  op_dash_add311 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion625 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  enum Unit_8   free627 (    struct List_9 *  list2037 ) {
    ( (  free548 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line626 (    struct Line_16 *  line3718 ) {
    ( (  free627 ) ( ( & ( ( * (  line3718 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot562 (   struct env96* env ,    struct TextBuf_104 *  self3766 ,    struct Pos_26  p3768 ,    struct StrView_27  bytes3770 ) {
    enum CAllocator_10  al3771 = ( ( ( * (  self3766 ) ) .f_buf ) .f_al );
    struct List_14 *  buf3772 = ( & ( ( * (  self3766 ) ) .f_buf ) );
    struct Line_16  extracted_dash_line_dash_buf3773 = ( (  get563 ) ( (  buf3772 ) ,  ( (  i32_dash_size412 ) ( ( (  p3768 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3774 = ( (  from465 ) ( ( (  to_dash_slice565 ) ( ( (  extracted_dash_line_dash_buf3773 ) .f_line ) ) ) ,  ( (  i32_dash_size412 ) ( ( (  p3768 ) .f_bi ) ) ) ) );
    struct envunion97  temp567 = ( (struct envunion97){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter568 , .env =  env->envinst50 } );
    ( (  set566 ) ( (  buf3772 ) ,  ( (  i32_dash_size412 ) ( ( (  p3768 ) .f_line ) ) ) ,  ( (  mk_dash_line431 ) ( ( temp567.fun ( &temp567.env ,  ( (  subslice466 ) ( ( (  to_dash_slice565 ) ( ( (  extracted_dash_line_dash_buf3773 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( ( (  p3768 ) .f_bi ) ) ) ) ) ,  (  al3771 ) ) ) ) ) ) );
    struct Line_16 *  last_dash_line3775 = ( (  get_dash_ptr564 ) ( (  buf3772 ) ,  ( (  i32_dash_size412 ) ( ( (  p3768 ) .f_line ) ) ) ) );
    struct envunion99  temp588 = ( (struct envunion99){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
    ( temp588.fun ( &temp588.env ,  ( & ( ( * (  last_dash_line3775 ) ) .f_line ) ) ,  ( ( (  or_dash_else589 ) ( ( (  head590 ) ( ( (  lines595 ) ( (  bytes3770 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3776 = (  from_dash_integral56 ( 0 ) );
    struct Zip_597  temp596 =  into_dash_iter602 ( ( (  zip603 ) ( ( (  drop605 ) ( ( (  split_dash_by_dash_each607 ) ( (  bytes3770 ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_611  __cond610 =  next613 (&temp596);
        if (  __cond610 .tag == 0 ) {
            break;
        }
        struct Tuple2_612  dref3777 =  __cond610 .stuff .Maybe_611_Just_s .field0;
        struct envunion619  temp618 = ( (struct envunion619){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter568 , .env =  env->envinst50 } );
        struct Line_16  temp617 = ( (  mk_dash_line431 ) ( ( temp618.fun ( &temp618.env ,  ( ( dref3777 .field0 ) .f_contents ) ,  (  al3771 ) ) ) ) );
        struct Line_16 *  nuline3780 = ( &temp617 );
        size_t  next_dash_line3781 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( ( (  p3768 ) .f_line ) , ( dref3777 .field1 ) ) ) ) );
        struct envunion98  temp620 = ( (struct envunion98){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_14 *  ,    size_t  ,    struct Line_16  ) )insert621 , .env =  env->envinst37 } );
        ( temp620.fun ( &temp620.env ,  (  buf3772 ) ,  (  next_dash_line3781 ) ,  ( * (  nuline3780 ) ) ) );
        last_dash_line3775 = ( (  get_dash_ptr564 ) ( (  buf3772 ) ,  (  next_dash_line3781 ) ) );
        lines_dash_added3776 = (  op_dash_add159 ( (  lines_dash_added3776 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion625  temp624 = ( (struct envunion625){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
    ( temp624.fun ( &temp624.env ,  ( & ( ( * (  last_dash_line3775 ) ) .f_line ) ) ,  (  remaining3774 ) ) );
    ( (  free_dash_line626 ) ( ( & (  extracted_dash_line_dash_buf3773 ) ) ) );
    return (  lines_dash_added3776 );
}

static  size_t   size628 (    struct List_9 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
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

static  enum Unit_8   print_dash_str641 (    struct StrConcat_634  self1510 ) {
    struct StrConcat_634  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str333 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str640 (    struct StrConcat_633  self1510 ) {
    struct StrConcat_633  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str641 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str334 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str639 (    struct StrConcat_632  self1510 ) {
    struct StrConcat_632  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str640 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str638 (    struct StrConcat_637  self1510 ) {
    struct StrConcat_637  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str639 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str635 (    struct StrConcat_636  self1510 ) {
    struct StrConcat_636  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str638 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic631 (    struct StrConcat_632  errmsg1714 ) {
    ( (  print_dash_str635 ) ( ( ( StrConcat_636_StrConcat ) ( ( ( StrConcat_637_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
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
    struct List_9 *  list2064;
    ;
    ;
    size_t  num_dash_elems2069;
    ;
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

static  enum Unit_8   for_dash_each642 (    struct Drop_643  iterable1075 ,   struct envunion645  fun1077 ) {
    struct Drop_643  temp646 = ( (  into_dash_iter647 ) ( (  iterable1075 ) ) );
    struct Drop_643 *  it1078 = ( &temp646 );
    while ( ( true ) ) {
        struct Maybe_526  dref1079 = ( (  next648 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_526_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_526_Just_t ) {
                struct envunion645  temp649 = (  fun1077 );
                ( temp649.fun ( &temp649.env ,  ( dref1079 .stuff .Maybe_526_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_643   drop650 (    struct Zip_520  iterable853 ,    size_t  i855 ) {
    struct Zip_520  it856 = ( (  into_dash_iter525 ) ( (  iterable853 ) ) );
    return ( ( Drop_643_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SliceIter_489   into_dash_iter652 (    struct List_9  self2030 ) {
    return ( (  into_dash_iter503 ) ( ( (  subslice466 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Zip_520   zip651 (    struct List_9  left923 ,    struct FromIter_416  right925 ) {
    struct SliceIter_489  left_dash_it926 = ( (  into_dash_iter652 ) ( (  left923 ) ) );
    struct FromIter_416  right_dash_it927 = ( (  into_dash_iter426 ) ( (  right925 ) ) );
    return ( (struct Zip_520) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   set654 (    struct List_9 *  list2023 ,    size_t  i2025 ,    uint8_t  elem2027 ) {
    if ( ( (  cmp290 ( (  i2025 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2025 ) , ( ( * (  list2023 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2025 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2023 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set531 ) ( ( ( * (  list2023 ) ) .f_elements ) ,  (  i2025 ) ,  (  elem2027 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam653 (   struct env644* env ,    struct Tuple2_523  dref2070 ) {
    return ( (  set654 ) ( ( env->list2064 ) ,  (  op_dash_sub289 ( ( (  i32_dash_size412 ) ( ( dref2070 .field1 ) ) ) , ( env->num_dash_elems2069 ) ) ) ,  ( dref2070 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range630 (   struct env40* env ,    struct List_9 *  list2064 ,    size_t  from2066 ,    size_t  to_dash_excl2068 ) {
    if ( (  cmp290 ( (  to_dash_excl2068 ) , (  from2066 ) ) == 0 ) ) {
        ( (  panic631 ) ( ( ( StrConcat_632_StrConcat ) ( ( ( StrConcat_633_StrConcat ) ( ( ( StrConcat_634_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  from2066 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  to_dash_excl2068 ) , ( ( * (  list2064 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2069 = (  op_dash_sub289 ( (  to_dash_excl2068 ) , (  from2066 ) ) );
    struct env644 envinst644 = {
        .list2064 =  list2064 ,
        .num_dash_elems2069 =  num_dash_elems2069 ,
    };
    ( (  for_dash_each642 ) ( ( (  drop650 ) ( ( (  zip651 ) ( ( * (  list2064 ) ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add311 ( (  from2066 ) , (  num_dash_elems2069 ) ) ) ) ) ,  ( (struct envunion645){ .fun = (  enum Unit_8  (*) (  struct env644*  ,    struct Tuple2_523  ) )lam653 , .env =  envinst644 } ) ) );
    (*  list2064 ) .f_count = (  op_dash_sub289 ( ( ( * (  list2064 ) ) .f_count ) , (  num_dash_elems2069 ) ) );
    size_t  capacity2073 = ( ( ( * (  list2064 ) ) .f_elements ) .f_count );
    if ( (  cmp290 ( (  op_dash_mul405 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  capacity2073 ) ) == 0 ) ) {
        if ( (  eq399 ( ( ( * (  list2064 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free548 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
            (*  list2064 ) .f_elements = ( (  empty440 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2074 = (  op_dash_mul405 ( (  op_dash_add311 ( (  op_dash_div342 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2040 ) ) );
        struct Slice_11  new_dash_slice2075 = ( (  allocate506 ) ( ( ( * (  list2064 ) ) .f_al ) ,  (  new_dash_size2074 ) ) );
        ( (  copy_dash_to511 ) ( ( (  subslice466 ) ( ( ( * (  list2064 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  (  new_dash_slice2075 ) ) );
        ( (  free548 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
        (*  list2064 ) .f_elements = (  new_dash_slice2075 );
    }
    return ( Unit_8_Unit );
}

struct envunion656 {
    int32_t  (*fun) (  struct env96*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env96 env;
};

static  enum Unit_8   trim657 (    struct List_9 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min467 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min658 (    int32_t  l1237 ,    int32_t  r1239 ) {
    if ( (  cmp157 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
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

static  struct Slice_11   or_dash_else661 (    struct Maybe_662  self1734 ,    struct Slice_11  alt1736 ) {
    struct Maybe_662  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_662_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_662_Just_t ) {
            return ( dref1737 .stuff .Maybe_662_Just_s .field0 );
        }
    }
}

static  struct Maybe_662   fmap_dash_maybe663 (    struct Maybe_376  x1276 ,    struct Slice_11 (*  fun1278 )(    struct Line_16  ) ) {
    struct Maybe_376  dref1279 = (  x1276 );
    if ( dref1279.tag == Maybe_376_None_t ) {
        return ( (struct Maybe_662) { .tag = Maybe_662_None_t } );
    }
    else {
        if ( dref1279.tag == Maybe_376_Just_t ) {
            return ( ( Maybe_662_Just ) ( ( (  fun1278 ) ( ( dref1279 .stuff .Maybe_376_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_376   try_dash_get664 (    struct List_14 *  list2018 ,    size_t  i2020 ) {
    if ( (  cmp290 ( (  i2020 ) , ( ( * (  list2018 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_376) { .tag = Maybe_376_None_t } );
    }
    return ( ( Maybe_376_Just ) ( ( (  get563 ) ( (  list2018 ) ,  (  i2020 ) ) ) ) );
}

static  struct Slice_11   lam665 (    struct Line_16  line3799 ) {
    return ( (  to_dash_slice565 ) ( ( (  line3799 ) .f_line ) ) );
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

static  enum Unit_8   print_dash_str671 (    struct StrConcat_670  self1510 ) {
    struct StrConcat_670  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str668 (    struct StrConcat_669  self1510 ) {
    struct StrConcat_669  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str671 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert667 (    bool  cond1720 ,    struct StrView_27  msg1722 ) {
    if ( ( ! (  cond1720 ) ) ) {
        ( (  print_dash_str668 ) ( ( ( StrConcat_669_StrConcat ) ( ( ( StrConcat_670_StrConcat ) ( ( (  from_dash_string199 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1722 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
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
    struct List_14 *  list2064;
    ;
    ;
    size_t  num_dash_elems2069;
    ;
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

static  enum Unit_8   for_dash_each674 (    struct Drop_675  iterable1075 ,   struct envunion677  fun1077 ) {
    struct Drop_675  temp678 = ( (  into_dash_iter679 ) ( (  iterable1075 ) ) );
    struct Drop_675 *  it1078 = ( &temp678 );
    while ( ( true ) ) {
        struct Maybe_419  dref1079 = ( (  next680 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_419_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_419_Just_t ) {
                struct envunion677  temp681 = (  fun1077 );
                ( temp681.fun ( &temp681.env ,  ( dref1079 .stuff .Maybe_419_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_675   drop682 (    struct Zip_414  iterable853 ,    size_t  i855 ) {
    struct Zip_414  it856 = ( (  into_dash_iter418 ) ( (  iterable853 ) ) );
    return ( ( Drop_675_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct Slice_15   subslice685 (    struct Slice_15  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Line_16 *  begin_dash_ptr1789 = ( (  offset_dash_ptr391 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp290 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_415   into_dash_iter684 (    struct List_14  self2030 ) {
    return ( (  into_dash_iter425 ) ( ( (  subslice685 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Zip_414   zip683 (    struct List_14  left923 ,    struct FromIter_416  right925 ) {
    struct SliceIter_415  left_dash_it926 = ( (  into_dash_iter684 ) ( (  left923 ) ) );
    struct FromIter_416  right_dash_it927 = ( (  into_dash_iter426 ) ( (  right925 ) ) );
    return ( (struct Zip_414) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   lam686 (   struct env676* env ,    struct Tuple2_408  dref2070 ) {
    return ( (  set566 ) ( ( env->list2064 ) ,  (  op_dash_sub289 ( ( (  i32_dash_size412 ) ( ( dref2070 .field1 ) ) ) , ( env->num_dash_elems2069 ) ) ) ,  ( dref2070 .field0 ) ) );
}

struct env689 {
    ;
    ;
    struct Slice_15  dest1855;
};

struct envunion690 {
    enum Unit_8  (*fun) (  struct env689*  ,    struct Tuple2_408  );
    struct env689 env;
};

static  enum Unit_8   for_dash_each688 (    struct Zip_414  iterable1075 ,   struct envunion690  fun1077 ) {
    struct Zip_414  temp691 = ( (  into_dash_iter418 ) ( (  iterable1075 ) ) );
    struct Zip_414 *  it1078 = ( &temp691 );
    while ( ( true ) ) {
        struct Maybe_419  dref1079 = ( (  next420 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_419_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_419_Just_t ) {
                struct envunion690  temp692 = (  fun1077 );
                ( temp692.fun ( &temp692.env ,  ( dref1079 .stuff .Maybe_419_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam693 (   struct env689* env ,    struct Tuple2_408  dref1856 ) {
    return ( (  set410 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size412 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to687 (    struct Slice_15  src1853 ,    struct Slice_15  dest1855 ) {
    if ( (  cmp290 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic512 ) ( ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env689 envinst689 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each688 ) ( ( (  zip424 ) ( (  src1853 ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion690){ .fun = (  enum Unit_8  (*) (  struct env689*  ,    struct Tuple2_408  ) )lam693 , .env =  envinst689 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range673 (   struct env41* env ,    struct List_14 *  list2064 ,    size_t  from2066 ,    size_t  to_dash_excl2068 ) {
    if ( (  cmp290 ( (  to_dash_excl2068 ) , (  from2066 ) ) == 0 ) ) {
        ( (  panic631 ) ( ( ( StrConcat_632_StrConcat ) ( ( ( StrConcat_633_StrConcat ) ( ( ( StrConcat_634_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  from2066 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp290 ( (  to_dash_excl2068 ) , ( ( * (  list2064 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_string199 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2069 = (  op_dash_sub289 ( (  to_dash_excl2068 ) , (  from2066 ) ) );
    struct env676 envinst676 = {
        .list2064 =  list2064 ,
        .num_dash_elems2069 =  num_dash_elems2069 ,
    };
    ( (  for_dash_each674 ) ( ( (  drop682 ) ( ( (  zip683 ) ( ( * (  list2064 ) ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add311 ( (  from2066 ) , (  num_dash_elems2069 ) ) ) ) ) ,  ( (struct envunion677){ .fun = (  enum Unit_8  (*) (  struct env676*  ,    struct Tuple2_408  ) )lam686 , .env =  envinst676 } ) ) );
    (*  list2064 ) .f_count = (  op_dash_sub289 ( ( ( * (  list2064 ) ) .f_count ) , (  num_dash_elems2069 ) ) );
    size_t  capacity2073 = ( ( ( * (  list2064 ) ) .f_elements ) .f_count );
    if ( (  cmp290 ( (  op_dash_mul405 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  capacity2073 ) ) == 0 ) ) {
        if ( (  eq399 ( ( ( * (  list2064 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free428 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
            (*  list2064 ) .f_elements = ( (  empty362 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2074 = (  op_dash_mul405 ( (  op_dash_add311 ( (  op_dash_div342 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2040 ) ) );
        struct Slice_15  new_dash_slice2075 = ( (  allocate400 ) ( ( ( * (  list2064 ) ) .f_al ) ,  (  new_dash_size2074 ) ) );
        ( (  copy_dash_to687 ) ( ( (  subslice685 ) ( ( ( * (  list2064 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  (  new_dash_slice2075 ) ) );
        ( (  free428 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
        (*  list2064 ) .f_elements = (  new_dash_slice2075 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action553 (   struct env100* env ,    struct TextBuf_104 *  self3784 ,    struct Pos_26  from_dash_pos3786 ,    struct Pos_26  to_dash_pos3788 ,    struct StrView_27  bytes3790 ) {
    struct Pos_26  from3791 = ( (  min554 ) ( (  from_dash_pos3786 ) ,  (  to_dash_pos3788 ) ) );
    struct Pos_26  to3792 = ( (  max556 ) ( (  from_dash_pos3786 ) ,  (  to_dash_pos3788 ) ) );
    if ( (  eq557 ( (  to3792 ) , (  from3791 ) ) ) ) {
        enum CAllocator_10  al3793 = ( ( ( * (  self3784 ) ) .f_buf ) .f_al );
        if ( ( (  eq399 ( ( (  size559 ) ( ( & ( ( * (  self3784 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size412 ) ( ( (  from3791 ) .f_line ) ) ) ) ) && (  eq558 ( ( (  from3791 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion101  temp560 = ( (struct envunion101){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add396 , .env =  env->envinst12 } );
            ( temp560.fun ( &temp560.env ,  ( & ( ( * (  self3784 ) ) .f_buf ) ) ,  ( (  mk_dash_line431 ) ( ( (  mk439 ) ( (  al3793 ) ) ) ) ) ) );
        }
        struct envunion103  temp561 = ( (struct envunion103){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot562 , .env =  env->envinst96 } );
        ( temp561.fun ( &temp561.env ,  (  self3784 ) ,  (  from3791 ) ,  (  bytes3790 ) ) );
    } else {
        struct List_14 *  lines_dash_buf3794 = ( & ( ( * (  self3784 ) ) .f_buf ) );
        struct Line_16 *  first_dash_line3795 = ( (  get_dash_ptr564 ) ( (  lines_dash_buf3794 ) ,  ( (  i32_dash_size412 ) ( ( (  from3791 ) .f_line ) ) ) ) );
        (*  first_dash_line3795 ) .f_invalidated = ( true );
        if ( ( (  eq558 ( ( (  from3791 ) .f_line ) , ( (  to3792 ) .f_line ) ) ) && (  cmp157 ( ( (  to3792 ) .f_bi ) , (  op_dash_add159 ( ( (  size_dash_i32329 ) ( ( (  size628 ) ( ( & ( ( * (  first_dash_line3795 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion108  temp629 = ( (struct envunion108){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range630 , .env =  env->envinst40 } );
            ( temp629.fun ( &temp629.env ,  ( & ( ( * (  first_dash_line3795 ) ) .f_line ) ) ,  ( (  i32_dash_size412 ) ( ( (  from3791 ) .f_bi ) ) ) ,  ( (  i32_dash_size412 ) ( ( (  to3792 ) .f_bi ) ) ) ) );
            struct envunion656  temp655 = ( (struct envunion656){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot562 , .env =  env->envinst96 } );
            ( temp655.fun ( &temp655.env ,  (  self3784 ) ,  (  from3791 ) ,  (  bytes3790 ) ) );
        } else {
            ( (  trim657 ) ( ( & ( ( * (  first_dash_line3795 ) ) .f_line ) ) ,  ( (  i32_dash_size412 ) ( ( (  from3791 ) .f_bi ) ) ) ) );
            struct Line_16 *  last_dash_line3796 = ( (  get_dash_ptr564 ) ( (  lines_dash_buf3794 ) ,  ( (  i32_dash_size412 ) ( ( (  to3792 ) .f_line ) ) ) ) );
            (*  last_dash_line3796 ) .f_invalidated = ( true );
            to3792 .f_bi = ( (  min658 ) ( ( (  to3792 ) .f_bi ) ,  (  op_dash_add159 ( ( (  size_dash_i32329 ) ( ( (  size628 ) ( ( & ( ( * (  last_dash_line3796 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq558 ( ( (  to3792 ) .f_bi ) , (  op_dash_add159 ( ( (  size_dash_i32329 ) ( ( (  size628 ) ( ( & ( ( * (  last_dash_line3796 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to3792 .f_line = (  op_dash_add159 ( ( (  to3792 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to3792 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion660  temp659 = ( (struct envunion660){ .fun = (  int32_t  (*) (  struct env96*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot562 , .env =  env->envinst96 } );
            int32_t  lines_dash_added3797 = ( temp659.fun ( &temp659.env ,  (  self3784 ) ,  (  from3791 ) ,  (  bytes3790 ) ) );
            to3792 .f_line = (  op_dash_add159 ( ( (  to3792 ) .f_line ) , (  lines_dash_added3797 ) ) );
            from3791 .f_line = (  op_dash_add159 ( ( (  from3791 ) .f_line ) , (  lines_dash_added3797 ) ) );
            struct Slice_11  last_dash_line3800 = ( (  or_dash_else661 ) ( ( (  fmap_dash_maybe663 ) ( ( (  try_dash_get664 ) ( (  lines_dash_buf3794 ) ,  ( (  i32_dash_size412 ) ( ( (  to3792 ) .f_line ) ) ) ) ) ,  (  lam665 ) ) ) ,  ( (  empty440 ) ( ) ) ) );
            struct envunion102  temp666 = ( (struct envunion102){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
            ( temp666.fun ( &temp666.env ,  ( & ( ( * (  first_dash_line3795 ) ) .f_line ) ) ,  ( (  from465 ) ( (  last_dash_line3800 ) ,  ( (  i32_dash_size412 ) ( ( (  to3792 ) .f_bi ) ) ) ) ) ) );
            ( (  assert667 ) ( (  cmp157 ( ( (  to3792 ) .f_line ) , ( (  from3791 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string199 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion109  temp672 = ( (struct envunion109){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  ) )remove_dash_range673 , .env =  env->envinst41 } );
            ( temp672.fun ( &temp672.env ,  ( & ( ( * (  self3784 ) ) .f_buf ) ) ,  ( (  i32_dash_size412 ) ( (  op_dash_add159 ( ( (  from3791 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( ( (  to3792 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk694 (    int32_t  line3644 ,    int32_t  bi3646 ) {
    return ( (struct Pos_26) { .f_line = (  line3644 ) , .f_bi = (  bi3646 ) } );
}

static  struct Maybe_351   mk_dash_from_dash_file354 (   struct env114* env ,    enum CAllocator_10  al3820 ,    struct StrView_27  filename3822 ) {
    struct envunion116  temp356 = ( (struct envunion116){ .fun = (  struct TextBuf_104  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk357 , .env =  env->envinst112 } );
    struct TextBuf_104  temp355 = ( temp356.fun ( &temp356.env ,  (  al3820 ) ) );
    struct TextBuf_104 *  tb3823 = ( &temp355 );
    (*  tb3823 ) .f_filetype = ( (  detect_dash_filetype_dash_from_dash_filename454 ) ( (  filename3822 ) ) );
    struct StrView_27  filename03824 = ( (  clone_dash_0505 ) ( (  filename3822 ) ,  (  al3820 ) ) );
    struct Maybe_80  dref3825 = ( (  try_dash_read_dash_contents534 ) ( ( (  as_dash_const_dash_str545 ) ( (  filename03824 ) ) ) ,  (  al3820 ) ) );
    if ( dref3825.tag == Maybe_80_None_t ) {
        ( (  free547 ) ( (  filename03824 ) ,  (  al3820 ) ) );
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref3825.tag == Maybe_80_Just_t ) {
            if ( (  eq550 ( ( (  try_dash_get480 ) ( ( ( dref3825 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub289 ( ( ( ( dref3825 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_477_Just ) ( ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref3825 .stuff .Maybe_80_Just_s .field0 = ( (  byte_dash_substr484 ) ( ( dref3825 .stuff .Maybe_80_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub289 ( ( ( ( dref3825 .stuff .Maybe_80_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion115  temp552 = ( (struct envunion115){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action553 , .env =  env->envinst100 } );
            ( temp552.fun ( &temp552.env ,  (  tb3823 ) ,  ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( dref3825 .stuff .Maybe_80_Just_s .field0 ) ) );
            (*  tb3823 ) .f_filename = ( ( Maybe_80_Just ) ( (  filename03824 ) ) );
            return ( ( Maybe_351_Just ) ( ( * (  tb3823 ) ) ) );
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

static  struct Pane_219   mk701 (    enum CAllocator_10  al4065 ,    struct TextBuf_104 *  buf4067 ) {
    return ( (struct Pane_219) { .f_buf = (  buf4067 ) , .f_cursor = ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_220_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_221) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
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

static  uint32_t   u32_dash_and712 (    uint32_t  l2869 ,    uint32_t  r2871 ) {
    return ( (  l2869 ) & (  r2871 ) );
}

static  uint32_t   u32_dash_neg713 (    uint32_t  l2874 ) {
    return ( ~ (  l2874 ) );
}

struct Array_715 {
    uint32_t _arr [4];
};

struct ArrayIter_717 {
    struct Array_715  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_717   into_dash_iter718 (    struct Array_715  self2335 ) {
    return ( (struct ArrayIter_717) { .f_backing = (  self2335 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
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

static  uint32_t *   get_dash_ptr722 (    struct Array_715 *  arr2263 ,    size_t  i2266 ) {
    if ( ( (  cmp290 ( (  i2266 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2266 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2266 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2267 = ( ( (  cast_dash_ptr723 ) ( (  arr2263 ) ) ) );
    return ( (  offset_dash_ptr724 ) ( (  p2267 ) ,  ( (int64_t ) (  i2266 ) ) ) );
}

static  uint32_t   get721 (    struct Array_715 *  arr2270 ,    size_t  i2273 ) {
    return ( * ( (  get_dash_ptr722 ) ( (  arr2270 ) ,  (  i2273 ) ) ) );
}

static  struct Maybe_719   next720 (    struct ArrayIter_717 *  self2342 ) {
    if ( (  cmp290 ( ( ( * (  self2342 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    uint32_t  e2344 = ( (  get721 ) ( ( & ( ( * (  self2342 ) ) .f_backing ) ) ,  ( ( * (  self2342 ) ) .f_cur ) ) );
    (*  self2342 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2342 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_719_Just ) ( (  e2344 ) ) );
}

static  uint32_t   reduce716 (    struct Array_715  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_717  it1100 = ( (  into_dash_iter718 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1101 = ( (  next720 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_719_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_719_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  uint32_t   u32_dash_or728 (    uint32_t  l2861 ,    uint32_t  r2863 ) {
    return ( (  l2861 ) | (  r2863 ) );
}

static  uint32_t   u32_dash_ors714 (    struct Array_715  vals2866 ) {
    return ( (  reduce716 ) ( (  vals2866 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or728 ) ) );
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

static  struct ArrayIter_737   into_dash_iter738 (    struct Array_735  self2335 ) {
    return ( (struct ArrayIter_737) { .f_backing = (  self2335 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr742 (    struct Array_735 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr741 (    struct Array_735 *  arr2263 ,    size_t  i2266 ) {
    if ( ( (  cmp290 ( (  i2266 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2266 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2266 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2267 = ( ( (  cast_dash_ptr742 ) ( (  arr2263 ) ) ) );
    return ( (  offset_dash_ptr724 ) ( (  p2267 ) ,  ( (int64_t ) (  i2266 ) ) ) );
}

static  uint32_t   get740 (    struct Array_735 *  arr2270 ,    size_t  i2273 ) {
    return ( * ( (  get_dash_ptr741 ) ( (  arr2270 ) ,  (  i2273 ) ) ) );
}

static  struct Maybe_719   next739 (    struct ArrayIter_737 *  self2342 ) {
    if ( (  cmp290 ( ( ( * (  self2342 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    uint32_t  e2344 = ( (  get740 ) ( ( & ( ( * (  self2342 ) ) .f_backing ) ) ,  ( ( * (  self2342 ) ) .f_cur ) ) );
    (*  self2342 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2342 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_719_Just ) ( (  e2344 ) ) );
}

static  uint32_t   reduce736 (    struct Array_735  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_737  it1100 = ( (  into_dash_iter738 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1101 = ( (  next739 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_719_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_719_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  uint32_t   u32_dash_ors734 (    struct Array_735  vals2866 ) {
    return ( (  reduce736 ) ( (  vals2866 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or728 ) ) );
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

static  struct ArrayIter_754   into_dash_iter755 (    struct Array_752  self2335 ) {
    return ( (struct ArrayIter_754) { .f_backing = (  self2335 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr759 (    struct Array_752 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr758 (    struct Array_752 *  arr2263 ,    size_t  i2266 ) {
    if ( ( (  cmp290 ( (  i2266 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2266 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2266 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2267 = ( ( (  cast_dash_ptr759 ) ( (  arr2263 ) ) ) );
    return ( (  offset_dash_ptr724 ) ( (  p2267 ) ,  ( (int64_t ) (  i2266 ) ) ) );
}

static  uint32_t   get757 (    struct Array_752 *  arr2270 ,    size_t  i2273 ) {
    return ( * ( (  get_dash_ptr758 ) ( (  arr2270 ) ,  (  i2273 ) ) ) );
}

static  struct Maybe_719   next756 (    struct ArrayIter_754 *  self2342 ) {
    if ( (  cmp290 ( ( ( * (  self2342 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_719) { .tag = Maybe_719_None_t } );
    }
    uint32_t  e2344 = ( (  get757 ) ( ( & ( ( * (  self2342 ) ) .f_backing ) ) ,  ( ( * (  self2342 ) ) .f_cur ) ) );
    (*  self2342 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2342 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_719_Just ) ( (  e2344 ) ) );
}

static  uint32_t   reduce753 (    struct Array_752  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_754  it1100 = ( (  into_dash_iter755 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1101 = ( (  next756 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_719_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_719_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  uint32_t   u32_dash_ors751 (    struct Array_752  vals2866 ) {
    return ( (  reduce753 ) ( (  vals2866 ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  u32_dash_or728 ) ) );
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

static  uint8_t *   get_dash_ptr766 (    struct Array_93 *  arr2263 ,    size_t  i2266 ) {
    if ( ( (  cmp290 ( (  i2266 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2266 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2266 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2267 = ( ( (  cast_dash_ptr767 ) ( (  arr2263 ) ) ) );
    return ( (  offset_dash_ptr300 ) ( (  p2267 ) ,  ( (int64_t ) (  i2266 ) ) ) );
}

static  enum Unit_8   set765 (    struct Array_93 *  arr2276 ,    size_t  i2279 ,    uint8_t  e2281 ) {
    uint8_t *  p2282 = ( (  get_dash_ptr766 ) ( (  arr2276 ) ,  (  i2279 ) ) );
    (*  p2282 ) = (  e2281 );
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
    struct Termios_92 *  orig_dash_termios3356 = ( &temp707 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  cast_dash_ptr711 ) ( (  orig_dash_termios3356 ) ) ) ) );
    struct Termios_92  raw3357 = ( * (  orig_dash_termios3356 ) );
    raw3357 .f_c_dash_lflag = ( (  u32_dash_and712 ) ( ( (  raw3357 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg713 ) ( ( (  u32_dash_ors714 ) ( ( (  from_dash_listlike729 ) ( ( (struct Array_715) { ._arr = { ( (  echo730 ) ( ) ) , ( (  icanon731 ) ( ) ) , ( (  isig732 ) ( ) ) , ( ( (  iexten733 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3357 .f_c_dash_iflag = ( (  u32_dash_and712 ) ( ( (  raw3357 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg713 ) ( ( (  u32_dash_ors734 ) ( ( (  from_dash_listlike745 ) ( ( (struct Array_735) { ._arr = { ( (  brkint746 ) ( ) ) , ( (  icrnl747 ) ( ) ) , ( (  inpck748 ) ( ) ) , ( (  istrip749 ) ( ) ) , ( ( (  ixon750 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3357 .f_c_dash_oflag = ( (  u32_dash_and712 ) ( ( (  raw3357 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg713 ) ( ( (  u32_dash_ors751 ) ( ( (  from_dash_listlike762 ) ( ( (struct Array_752) { ._arr = { ( ( (  opost763 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3357 .f_c_dash_cflag = ( (  u32_dash_or728 ) ( ( (  raw3357 ) .f_c_dash_cflag ) ,  ( (  cs8764 ) ( ) ) ) );
    ( (  set765 ) ( ( & ( (  raw3357 ) .f_c_dash_cc ) ) ,  ( (  vmin768 ) ( ) ) ,  (  from_dash_integral308 ( 0 ) ) ) );
    ( (  set765 ) ( ( & ( (  raw3357 ) .f_c_dash_cc ) ) ,  ( (  vtime769 ) ( ) ) ,  (  from_dash_integral308 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  tcsa_dash_flush770 ) ( ) ) ,  ( (  cast_dash_ptr711 ) ( ( & (  raw3357 ) ) ) ) ) );
    return ( * (  orig_dash_termios3356 ) );
}

static  enum Unit_8   for_dash_each773 (    struct StrViewIter_458  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrViewIter_458  temp774 = ( (  into_dash_iter459 ) ( (  iterable1075 ) ) );
    struct StrViewIter_458 *  it1078 = ( &temp774 );
    while ( ( true ) ) {
        struct Maybe_297  dref1079 = ( (  next463 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_297_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print772 (    struct StrView_27  s2601 ) {
    ( (  for_dash_each773 ) ( ( (  chars460 ) ( (  s2601 ) ) ) ,  (  printf_dash_char336 ) ) );
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

static  struct Maybe_320   get780 (    const char*  s2634 ) {
    return ( (  from_dash_nullable_dash_c_dash_str781 ) ( ( ( getenv ) ( (  s2634 ) ) ) ) );
}

static  bool   eq789 (    const char*  l1698 ,    const char*  r1700 ) {
    return (  eq558 ( ( ( strcmp ) ( (  l1698 ) ,  (  r1700 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_91   query_dash_palette779 (  ) {
    struct Maybe_320  colorterm2635 = ( (  get780 ) ( ( (  from_dash_string57 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_320  dref2636 = (  colorterm2635 );
    if ( dref2636.tag == Maybe_320_Just_t ) {
        if ( ( (  eq789 ( ( dref2636 .stuff .Maybe_320_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq789 ( ( dref2636 .stuff .Maybe_320_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_91_PaletteRGB );
        }
    }
    else {
        if ( dref2636.tag == Maybe_320_None_t ) {
        }
    }
    struct Maybe_320  dref2638 = ( (  get780 ) ( ( (  from_dash_string57 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2638.tag == Maybe_320_Just_t ) {
        if ( (  eq789 ( ( dref2638 .stuff .Maybe_320_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_91_Palette8 );
        }
    }
    else {
        if ( dref2638.tag == Maybe_320_None_t ) {
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
    struct Winsize_792 *  ws2623 = ( &temp793 );
    if ( ( (  eq558 ( ( ( ioctl ) ( ( (  stdout_dash_fileno798 ) ( ) ) ,  ( (  tiocgwinsz799 ) ( ) ) ,  (  ws2623 ) ) ) , (  op_dash_neg801 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq802 ( ( ( * (  ws2623 ) ) .f_ws_dash_col ) , (  from_dash_integral803 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_790_Tuple2 ) ( (  from_dash_integral165 ( 80 ) ) ,  (  from_dash_integral165 ( 24 ) ) ) );
    }
    return ( ( Tuple2_790_Tuple2 ) ( ( (  u16_dash_u32804 ) ( ( ( * (  ws2623 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32804 ) ( ( ( * (  ws2623 ) ) .f_ws_dash_row ) ) ) ) );
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
    struct timespec *  t3318 = ( &temp813 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic816 ) ( ) ) ,  (  t3318 ) ) );
    return ( * (  t3318 ) );
}

struct env817 {
    bool *  should_dash_resize3370;
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

static  enum Unit_8   lam823 (   struct env817* env ,    int32_t  dref3377 ) {
    (* env->should_dash_resize3370 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst824 (    struct Tuple2_790  dref1254 ) {
    return ( dref1254 .field0 );
}

static  uint32_t   snd825 (    struct Tuple2_790  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Tui_90   mk705 (   struct env86* env ) {
    struct Termios_92  og_dash_termios3372 = ( (  enable_dash_raw_dash_mode706 ) ( ) );
    ( (  hide_dash_cursor771 ) ( ) );
    ( (  reset_dash_colors775 ) ( ) );
    ( (  clear_dash_screen776 ) ( ) );
    ( (  enable_dash_mouse777 ) ( ) );
    ( (  flush_dash_stdout778 ) ( ) );
    enum ColorPalette_91  palette3373 = ( (  query_dash_palette779 ) ( ) );
    struct Tuple2_790  dims3374 = ( (  get_dash_dimensions791 ) ( ) );
    uint32_t  fps3375 = (  from_dash_integral165 ( 60 ) );
    struct timespec  last_dash_sync3376 = ( (  now812 ) ( ) );
    struct env817 envinst817 = {
        .should_dash_resize3370 = env->should_dash_resize3370 ,
    };
    ( _intr_register_signal ( (  from_dash_integral56 ( 28 ) ) , ( (struct envunion818){ .fun = (  enum Unit_8  (*) (  struct env817*  ,    int32_t  ) )lam823 , .env =  envinst817 } ) ) );
    return ( (struct Tui_90) { .f_width = ( (  fst824 ) ( (  dims3374 ) ) ) , .f_height = ( (  snd825 ) ( (  dims3374 ) ) ) , .f_target_dash_fps = (  fps3375 ) , .f_actual_dash_fps = (  from_dash_integral165 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3376 ) , .f_fps_dash_ts = (  last_dash_sync3376 ) , .f_fps_dash_count = (  from_dash_integral165 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3372 ) , .f_palette = (  palette3373 ) , .f_should_dash_redraw = ( true ) } );
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

static  struct Slice_277   allocate828 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize829 ) ( ) ) ) .f_size );
    struct Cell_278 *  ptr1959 = ( (  cast_dash_ptr832 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_277) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
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
    ;
    struct Slice_277  s1907;
    struct Cell_278 (*  fun1909 )(    struct Cell_278  );
};

struct envunion844 {
    enum Unit_8  (*fun) (  struct env843*  ,    int32_t  );
    struct env843 env;
};

static  enum Unit_8   for_dash_each842 (    struct Range_150  iterable1075 ,   struct envunion844  fun1077 ) {
    struct RangeIter_153  temp845 = ( (  into_dash_iter154 ) ( (  iterable1075 ) ) );
    struct RangeIter_153 *  it1078 = ( &temp845 );
    while ( ( true ) ) {
        struct Maybe_155  dref1079 = ( (  next156 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_155_Just_t ) {
                struct envunion844  temp846 = (  fun1077 );
                ( temp846.fun ( &temp846.env ,  ( dref1079 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_278 *   offset_dash_ptr850 (    struct Cell_278 *  x338 ,    int64_t  count340 ) {
    struct Cell_278  temp851;
    return ( (struct Cell_278 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp851 ) ) ) ) ) ) ) ) );
}

static  struct Cell_278 *   get_dash_ptr849 (    struct Slice_277  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp290 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_278 *  elem_dash_ptr1762 = ( (  offset_dash_ptr850 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set848 (    struct Slice_277  slice1776 ,    size_t  i1778 ,    struct Cell_278  x1780 ) {
    struct Cell_278 *  ep1781 = ( (  get_dash_ptr849 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
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

static  struct Cell_278   or_dash_fail854 (    struct Maybe_855  x1727 ,    struct StrConcat_321  errmsg1729 ) {
    struct Maybe_855  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_855_None_t ) {
        ( (  panic323 ) ( (  errmsg1729 ) ) );
        return ( (  undefined856 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_855_Just_t ) {
            return ( dref1730 .stuff .Maybe_855_Just_s .field0 );
        }
    }
}

static  struct Maybe_855   try_dash_get858 (    struct Slice_277  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp290 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_855) { .tag = Maybe_855_None_t } );
    }
    struct Cell_278 *  elem_dash_ptr1768 = ( (  offset_dash_ptr850 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_855_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  struct Cell_278   get853 (    struct Slice_277  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail854 ) ( ( (  try_dash_get858 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_278   elem_dash_get852 (    struct Slice_277  self1869 ,    size_t  idx1871 ) {
    return ( (  get853 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  enum Unit_8   lam847 (   struct env843* env ,    int32_t  i1911 ) {
    return ( (  set848 ) ( ( env->s1907 ) ,  ( (  i32_dash_size412 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get852 ( ( env->s1907 ) , ( (  i32_dash_size412 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map841 (    struct Slice_277  s1907 ,    struct Cell_278 (*  fun1909 )(    struct Cell_278  ) ) {
    struct env843 envinst843 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each842 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion844){ .fun = (  enum Unit_8  (*) (  struct env843*  ,    int32_t  ) )lam847 , .env =  envinst843 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_278   default_dash_cell860 (  ) {
    return ( (struct Cell_278) { .f_c = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_278   lam859 (    struct Cell_278  dref3480 ) {
    return ( (  default_dash_cell860 ) ( ) );
}

struct env863 {
    ;
    ;
    ;
    struct Slice_277  s1907;
    struct Cell_278 (*  fun1909 )(    struct Cell_278  );
};

struct envunion864 {
    enum Unit_8  (*fun) (  struct env863*  ,    int32_t  );
    struct env863 env;
};

static  enum Unit_8   for_dash_each862 (    struct Range_150  iterable1075 ,   struct envunion864  fun1077 ) {
    struct RangeIter_153  temp865 = ( (  into_dash_iter154 ) ( (  iterable1075 ) ) );
    struct RangeIter_153 *  it1078 = ( &temp865 );
    while ( ( true ) ) {
        struct Maybe_155  dref1079 = ( (  next156 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_155_Just_t ) {
                struct envunion864  temp866 = (  fun1077 );
                ( temp866.fun ( &temp866.env ,  ( dref1079 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam867 (   struct env863* env ,    int32_t  i1911 ) {
    return ( (  set848 ) ( ( env->s1907 ) ,  ( (  i32_dash_size412 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get852 ( ( env->s1907 ) , ( (  i32_dash_size412 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map861 (    struct Slice_277  s1907 ,    struct Cell_278 (*  fun1909 )(    struct Cell_278  ) ) {
    struct env863 envinst863 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each862 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion864){ .fun = (  enum Unit_8  (*) (  struct env863*  ,    int32_t  ) )lam867 , .env =  envinst863 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_278   lam868 (    struct Cell_278  dref3482 ) {
    return ( (  default_dash_cell860 ) ( ) );
}

static  struct Screen_276   mk_dash_screen827 (    struct Tui_90 *  tui3476 ,    enum CAllocator_10  al3478 ) {
    struct Slice_277  cur3479 = ( (  allocate828 ) ( (  al3478 ) ,  ( (  u32_dash_size833 ) ( (  op_dash_mul167 ( ( ( * (  tui3476 ) ) .f_width ) , ( ( * (  tui3476 ) ) .f_height ) ) ) ) ) ) );
    ( (  map841 ) ( (  cur3479 ) ,  (  lam859 ) ) );
    struct Slice_277  prev3481 = ( (  allocate828 ) ( (  al3478 ) ,  ( (  u32_dash_size833 ) ( (  op_dash_mul167 ( ( ( * (  tui3476 ) ) .f_width ) , ( ( * (  tui3476 ) ) .f_height ) ) ) ) ) ) );
    ( (  map861 ) ( (  prev3481 ) ,  (  lam868 ) ) );
    return ( (struct Screen_276) { .f_current = (  cur3479 ) , .f_previous = (  prev3481 ) , .f_al = (  al3478 ) , .f_tui = (  tui3476 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) } );
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
            struct Key_269  field0;
        } InputEvent_874_Key_s;
        struct {
            struct MouseEvent_875  field0;
        } InputEvent_874_Mouse_s;
    } stuff;
};

static struct InputEvent_874 InputEvent_874_Key (  struct Key_269  field0 ) {
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
    struct Tui_90 *  tui4595;
};

struct envunion877 {
    struct Maybe_873  (*fun) (  struct env871*  );
    struct env871 env;
};

struct FunIter_870 {
    struct envunion877  f_fun;
    bool  f_finished;
};

static  struct FunIter_870   into_dash_iter878 (    struct FunIter_870  self1029 ) {
    return (  self1029 );
}

static  struct FunIter_870   from_dash_function879 (   struct envunion877  fun1037 ) {
    return ( (struct FunIter_870) { .f_fun = (  fun1037 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions884 (   struct env87* env ,    struct Tui_90 *  tui3442 ) {
    if ( ( ! ( * ( env->should_dash_resize3370 ) ) ) ) {
        return ( false );
    }
    (*  tui3442 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3370 ) = ( false );
    struct Tuple2_790  dim3443 = ( (  get_dash_dimensions791 ) ( ) );
    uint32_t  w3444 = ( (  fst824 ) ( (  dim3443 ) ) );
    uint32_t  h3445 = ( (  snd825 ) ( (  dim3443 ) ) );
    (*  tui3442 ) .f_width = (  w3444 );
    (*  tui3442 ) .f_height = (  h3445 );
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

static  struct Maybe_889   read_dash_byte890 (    int32_t  timeout_dash_ms3364 ) {
    struct Pollfd_891  pfd3365 = ( (struct Pollfd_891) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral803 ( 1 ) ) , .f_revents = (  from_dash_integral803 ( 0 ) ) } );
    if ( (  cmp157 ( ( ( poll ) ( ( (  cast_dash_ptr892 ) ( ( & (  pfd3365 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3364 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_889) { .tag = Maybe_889_None_t } );
    }
    char  c3366 = ( ( (  zeroed893 ) ( ) ) );
    if ( (  cmp157 ( ( ( read ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  cast_dash_ptr895 ) ( ( & (  c3366 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_889) { .tag = Maybe_889_None_t } );
    }
    return ( ( Maybe_889_Just ) ( (  c3366 ) ) );
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

static  uint32_t   reduce903 (    struct Map_904  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct Map_904  it1100 = ( (  into_dash_iter905 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_719  dref1101 = ( (  next906 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_719_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_719_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_719_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  enum Unit_8   print_dash_str928 (    struct StrConcat_921  self1510 ) {
    struct StrConcat_921  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str927 (    struct StrConcat_920  self1510 ) {
    struct StrConcat_920  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str928 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str328 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str926 (    struct StrConcat_925  self1510 ) {
    struct StrConcat_925  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str927 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str923 (    struct StrConcat_924  self1510 ) {
    struct StrConcat_924  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str926 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic922 (    struct StrConcat_920  errmsg1714 ) {
    ( (  print_dash_str923 ) ( ( ( StrConcat_924_StrConcat ) ( ( ( StrConcat_925_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail919 (    struct Maybe_477  x1727 ,    struct StrConcat_920  errmsg1729 ) {
    struct Maybe_477  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_477_None_t ) {
        ( (  panic922 ) ( (  errmsg1729 ) ) );
        return ( (  undefined478 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_477_Just_t ) {
            return ( dref1730 .stuff .Maybe_477_Just_s .field0 );
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

static  struct Maybe_477   hex_dash_digit929 (    struct Char_65  c2583 ) {
    if ( ( (  cmp930 ( (  c2583 ) , ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp930 ( (  c2583 ) , ( (  from_dash_charlike346 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_477_Just ) ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2583 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp930 ( (  c2583 ) , ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp930 ( (  c2583 ) , ( (  from_dash_charlike346 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_477_Just ) ( (  op_dash_add933 ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2583 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral308 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp930 ( (  c2583 ) , ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp930 ( (  c2583 ) , ( (  from_dash_charlike346 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_477_Just ) ( (  op_dash_add933 ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2583 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral308 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_477) { .tag = Maybe_477_None_t } );
}

static  uint32_t   lam910 (    struct Char_65  c2588 ) {
    return ( (  from_dash_integral165 ) ( ( (  u8_dash_i64911 ) ( ( (  or_dash_fail919 ) ( ( (  hex_dash_digit929 ) ( (  c2588 ) ) ) ,  ( ( StrConcat_920_StrConcat ) ( ( ( StrConcat_921_StrConcat ) ( ( (  from_dash_charlike346 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2588 ) ) ) ,  ( (  from_dash_string199 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam934 (    uint32_t  elem2590 ,    uint32_t  b2592 ) {
    return (  op_dash_add171 ( (  op_dash_mul167 ( (  b2592 ) , (  from_dash_integral165 ( 16 ) ) ) ) , (  elem2590 ) ) );
}

static  uint32_t   from_dash_hex902 (    struct StrView_27  arr2586 ) {
    return ( (  reduce903 ) ( ( (  map909 ) ( (  arr2586 ) ,  (  lam910 ) ) ) ,  (  from_dash_integral165 ( 0 ) ) ,  (  lam934 ) ) );
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

static  char *   get_dash_ptr945 (    struct Array_937 *  arr2263 ,    size_t  i2266 ) {
    if ( ( (  cmp290 ( (  i2266 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2266 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2266 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2267 = ( ( (  cast_dash_ptr946 ) ( (  arr2263 ) ) ) );
    return ( (  offset_dash_ptr947 ) ( (  p2267 ) ,  ( (int64_t ) (  i2266 ) ) ) );
}

static  enum Unit_8   set944 (    struct Array_937 *  arr2276 ,    size_t  i2279 ,    char  e2281 ) {
    char *  p2282 = ( (  get_dash_ptr945 ) ( (  arr2276 ) ,  (  i2279 ) ) );
    (*  p2282 ) = (  e2281 );
    return ( Unit_8_Unit );
}

struct Slice_950 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail953 (    struct Maybe_889  x1727 ,    struct StrConcat_321  errmsg1729 ) {
    struct Maybe_889  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_889_None_t ) {
        ( (  panic323 ) ( (  errmsg1729 ) ) );
        return ( (  undefined887 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_889_Just_t ) {
            return ( dref1730 .stuff .Maybe_889_Just_s .field0 );
        }
    }
}

static  struct Maybe_889   try_dash_get954 (    struct Slice_950  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp290 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_889) { .tag = Maybe_889_None_t } );
    }
    char *  elem_dash_ptr1768 = ( (  offset_dash_ptr947 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_889_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  char   get952 (    struct Slice_950  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail953 ) ( ( (  try_dash_get954 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get951 (    struct Slice_950  self1869 ,    size_t  idx1871 ) {
    return ( (  get952 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

struct Scanner_955 {
    struct StrViewIter_458  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_955   mk_dash_from_dash_str957 (    struct StrView_27  s3211 ) {
    return ( (struct Scanner_955) { .f_s = ( (  chars460 ) ( (  s3211 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_961 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr300 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_27   substr958 (    struct StrView_27  s2177 ,    size_t  from2179 ,    size_t  to2181 ) {
    size_t  from_dash_bs2182 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_153  temp959 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  from2179 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond960 =  next156 (&temp959);
        if (  __cond960 .tag == 0 ) {
            break;
        }
        int32_t  dref2183 =  __cond960 .stuff .Maybe_155_Just_s .field0;
        if ( (  cmp290 ( (  from_dash_bs2182 ) , ( ( (  s2177 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2182 = (  op_dash_add311 ( (  from_dash_bs2182 ) , ( (  next_dash_char306 ) ( ( (  offset_dash_ptr_prime_961 ) ( ( ( (  s2177 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2182 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2184 = (  from_dash_bs2182 );
    struct RangeIter_153  temp962 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  to2181 ) ) ) , ( (  size_dash_i32329 ) ( (  from2179 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond963 =  next156 (&temp962);
        if (  __cond963 .tag == 0 ) {
            break;
        }
        int32_t  dref2185 =  __cond963 .stuff .Maybe_155_Just_s .field0;
        if ( (  cmp290 ( (  to_dash_bs2184 ) , ( ( (  s2177 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2184 = (  op_dash_add311 ( (  to_dash_bs2184 ) , ( (  next_dash_char306 ) ( ( (  offset_dash_ptr_prime_961 ) ( ( ( (  s2177 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2184 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice466 ) ( ( (  s2177 ) .f_contents ) ,  (  from_dash_bs2182 ) ,  (  to_dash_bs2184 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr966 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice965 (    struct Slice_950  s1934 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr966 ) ( ( (  s1934 ) .f_ptr ) ) ) , .f_count = ( (  s1934 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice964 (    struct Slice_950  sl2151 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice965 ) ( (  sl2151 ) ) ) } );
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

static  struct Scanner_955   into_dash_iter972 (    struct Scanner_955  self3202 ) {
    return (  self3202 );
}

static  struct Scanner_955   into_dash_iter971 (    struct Scanner_955 *  self786 ) {
    return ( (  into_dash_iter972 ) ( ( * (  self786 ) ) ) );
}

static  struct TakeWhile_969   take_dash_while970 (    struct Scanner_955 *  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_969) { .f_it = ( (  into_dash_iter971 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  bool   is_dash_digit973 (    struct Char_65  c2489 ) {
    return ( (  cmp307 ( ( (  char_dash_u8533 ) ( (  c2489 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp307 ( ( (  char_dash_u8533 ) ( (  c2489 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_297   next977 (    struct Scanner_955 *  self3197 ) {
    struct Maybe_297  dref3198 = ( (  next463 ) ( ( & ( ( * (  self3197 ) ) .f_s ) ) ) );
    if ( dref3198.tag == Maybe_297_Just_t ) {
        (*  self3197 ) .f_byte_dash_offset = (  op_dash_add311 ( ( ( * (  self3197 ) ) .f_byte_dash_offset ) , ( ( dref3198 .stuff .Maybe_297_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_297_Just ) ( ( dref3198 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref3198.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct Maybe_297   next976 (    struct TakeWhile_969 *  self965 ) {
    struct Maybe_297  mx966 = ( (  next977 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_297  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct TakeWhile_969   into_dash_iter979 (    struct TakeWhile_969  self962 ) {
    return (  self962 );
}

static  struct Maybe_297   head975 (    struct TakeWhile_969  it1143 ) {
    struct TakeWhile_969  temp978 = ( (  into_dash_iter979 ) ( (  it1143 ) ) );
    return ( (  next976 ) ( ( &temp978 ) ) );
}

static  bool   null974 (    struct TakeWhile_969  it1152 ) {
    struct Maybe_297  dref1153 = ( (  head975 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env982 {
    ;
    struct Scanner_955 *  it1187;
};

struct envunion983 {
    struct Maybe_297  (*fun) (  struct env982*  ,    int32_t  );
    struct env982 env;
};

static  enum Unit_8   for_dash_each981 (    struct Range_150  iterable1075 ,   struct envunion983  fun1077 ) {
    struct RangeIter_153  temp984 = ( (  into_dash_iter154 ) ( (  iterable1075 ) ) );
    struct RangeIter_153 *  it1078 = ( &temp984 );
    while ( ( true ) ) {
        struct Maybe_155  dref1079 = ( (  next156 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_155_Just_t ) {
                struct envunion983  temp985 = (  fun1077 );
                ( temp985.fun ( &temp985.env ,  ( dref1079 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_297   lam986 (   struct env982* env ,    int32_t  dref1190 ) {
    return ( (  next977 ) ( ( env->it1187 ) ) );
}

static  enum Unit_8   drop_prime_980 (    struct Scanner_955 *  it1187 ,    size_t  n1189 ) {
    struct env982 envinst982 = {
        .it1187 =  it1187 ,
    };
    ( (  for_dash_each981 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32329 ) ( (  n1189 ) ) ) ) ) ,  ( (struct envunion983){ .fun = (  struct Maybe_297  (*) (  struct env982*  ,    int32_t  ) )lam986 , .env =  envinst982 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce988 (    struct TakeWhile_969  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct TakeWhile_969  it1100 = ( (  into_dash_iter979 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1101 = ( (  next976 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_297_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_297_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  size_t   lam991 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add311 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count987 (    struct TakeWhile_969  it1105 ) {
    return ( (  reduce988 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam991 ) ) );
}

static  struct TakeWhile_969   chars993 (    struct TakeWhile_969  self1658 ) {
    return (  self1658 );
}

static  struct Maybe_967   reduce994 (    struct TakeWhile_969  iterable1094 ,    struct Maybe_967  base1096 ,    struct Maybe_967 (*  fun1098 )(    struct Char_65  ,    struct Maybe_967  ) ) {
    struct Maybe_967  x1099 = (  base1096 );
    struct TakeWhile_969  it1100 = ( (  into_dash_iter979 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1101 = ( (  next976 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_297_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_297_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  struct Maybe_155   parse_dash_digit998 (    struct Char_65  c2492 ) {
    if ( ( (  is_dash_digit973 ) ( (  c2492 ) ) ) ) {
        return ( ( Maybe_155_Just ) ( ( (  u8_dash_i32999 ) ( (  op_dash_sub932 ( ( (  char_dash_u8533 ) ( (  c2492 ) ) ) , ( (  char_dash_u8533 ) ( ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
}

static  int64_t   i32_dash_i641007 (    int32_t  x607 ) {
    return ( (int64_t ) (  x607 ) );
}

static  struct Maybe_967   sequence_dash_maybe997 (    struct Char_65  e2498 ,    struct Maybe_967  b2500 ) {
    struct Maybe_967  dref2501 = (  b2500 );
    if ( dref2501.tag == Maybe_967_None_t ) {
        return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
    }
    else {
        if ( dref2501.tag == Maybe_967_Just_t ) {
            struct Maybe_155  dref2503 = ( (  parse_dash_digit998 ) ( (  e2498 ) ) );
            if ( dref2503.tag == Maybe_155_None_t ) {
                return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
            }
            else {
                if ( dref2503.tag == Maybe_155_Just_t ) {
                    return ( ( Maybe_967_Just ) ( (  op_dash_add471 ( (  op_dash_mul286 ( ( dref2501 .stuff .Maybe_967_Just_s .field0 ) , (  from_dash_integral288 ( 10 ) ) ) ) , ( (  i32_dash_i641007 ) ( ( dref2503 .stuff .Maybe_155_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_967   parse_dash_int992 (    struct TakeWhile_969  s2495 ) {
    struct TakeWhile_969  cs2505 = ( (  chars993 ) ( (  s2495 ) ) );
    struct Maybe_297  dref2506 = ( (  head975 ) ( (  cs2505 ) ) );
    if ( dref2506.tag == Maybe_297_Just_t ) {
        return ( (  reduce994 ) ( (  cs2505 ) ,  ( ( Maybe_967_Just ) ( (  from_dash_integral288 ( 0 ) ) ) ) ,  (  sequence_dash_maybe997 ) ) );
    }
    else {
        if ( dref2506.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
        }
    }
}

static  struct Maybe_967   scan_dash_int968 (    struct Scanner_955 *  sc3214 ) {
    struct TakeWhile_969  digit_dash_chars3215 = ( (  take_dash_while970 ) ( (  sc3214 ) ,  (  is_dash_digit973 ) ) );
    if ( ( (  null974 ) ( (  digit_dash_chars3215 ) ) ) ) {
        return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
    }
    ( (  drop_prime_980 ) ( (  sc3214 ) ,  ( (  count987 ) ( (  digit_dash_chars3215 ) ) ) ) );
    return ( (  parse_dash_int992 ) ( (  digit_dash_chars3215 ) ) );
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

static  struct StrConcatIter_1016   into_dash_iter1023 (    struct StrConcatIter_1016  self1498 ) {
    return (  self1498 );
}

struct env1030 {
    ;
    int64_t  base1211;
};

struct envunion1031 {
    int64_t  (*fun) (  struct env1030*  ,    int32_t  ,    int64_t  );
    struct env1030 env;
};

static  int64_t   reduce1029 (    struct Range_150  iterable1094 ,    int64_t  base1096 ,   struct envunion1031  fun1098 ) {
    int64_t  x1099 = (  base1096 );
    struct RangeIter_153  it1100 = ( (  into_dash_iter154 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1101 = ( (  next156 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_155_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_155_Just_t ) {
                struct envunion1031  temp1032 = (  fun1098 );
                x1099 = ( temp1032.fun ( &temp1032.env ,  ( dref1101 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  int64_t   lam1035 (   struct env1030* env ,    int32_t  item1215 ,    int64_t  x1217 ) {
    return (  op_dash_mul286 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  int64_t   pow1028 (    int64_t  base1211 ,    int32_t  p1213 ) {
    struct env1030 envinst1030 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1029 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1213 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral288 ( 1 ) ) ,  ( (struct envunion1031){ .fun = (  int64_t  (*) (  struct env1030*  ,    int32_t  ,    int64_t  ) )lam1035 , .env =  envinst1030 } ) ) );
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

static  struct Maybe_297   next1027 (    struct IntStrIter_1019 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    int64_t  trim_dash_down1430 = ( (  pow1028 ) ( (  from_dash_integral288 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1431 = (  op_dash_div1036 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    int64_t  upper_dash_mask1432 = (  op_dash_mul286 ( (  op_dash_div1036 ( (  upper1431 ) , (  from_dash_integral288 ( 10 ) ) ) ) , (  from_dash_integral288 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast1037 ) ( (  op_dash_sub1038 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1433 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_297   next1026 (    struct StrConcatIter_1018 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1027 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1025 (    struct StrConcatIter_1017 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1026 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1047 (    enum EmptyIter_1021 *  dref793 ) {
    return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
}

static  struct Maybe_297   next1046 (    struct AppendIter_1020 *  self1023 ) {
    struct Maybe_297  dref1024 = ( (  next1047 ) ( ( & ( ( * (  self1023 ) ) .f_it ) ) ) );
    if ( dref1024.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1024 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1024.tag == Maybe_297_None_t ) {
            if ( ( ! ( ( * (  self1023 ) ) .f_appended ) ) ) {
                (*  self1023 ) .f_appended = ( true );
                return ( ( Maybe_297_Just ) ( ( ( * (  self1023 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct Maybe_297   next1024 (    struct StrConcatIter_1016 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next1025 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1015 (    struct StrConcatIter_1016  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_1016  temp1022 = ( (  into_dash_iter1023 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1016 *  it1078 = ( &temp1022 );
    while ( ( true ) ) {
        struct Maybe_297  dref1079 = ( (  next1024 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_297_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_297_Just_s .field0 ) ) );
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

static  int32_t   count_dash_digits1058 (    int64_t  self1437 ) {
    if ( (  eq1059 ( (  self1437 ) , (  from_dash_integral288 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp1056 ( (  self1437 ) , (  from_dash_integral288 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div1036 ( (  self1437 ) , (  from_dash_integral288 ( 10 ) ) ) );
        digits1438 = (  op_dash_add159 ( (  digits1438 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1019   int_dash_iter1055 (    int64_t  int1441 ) {
    if ( (  cmp1056 ( (  int1441 ) , (  from_dash_integral288 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1019) { .f_int = (  op_dash_neg1057 ( (  int1441 ) ) ) , .f_len = ( (  count_dash_digits1058 ) ( (  op_dash_neg1057 ( (  int1441 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1019) { .f_int = (  int1441 ) , .f_len = ( (  count_dash_digits1058 ) ( (  int1441 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1019   chars1054 (    int64_t  self1468 ) {
    return ( (  int_dash_iter1055 ) ( (  self1468 ) ) );
}

static  struct StrConcatIter_1018   into_dash_iter1053 (    struct StrConcat_1011  dref1505 ) {
    return ( (struct StrConcatIter_1018) { .f_left = ( (  chars460 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1054 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1018   chars1052 (    struct StrConcat_1011  self1516 ) {
    return ( (  into_dash_iter1053 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1017   into_dash_iter1051 (    struct StrConcat_1014  dref1505 ) {
    return ( (struct StrConcatIter_1017) { .f_left = ( (  chars460 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1052 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1017   chars1050 (    struct StrConcat_1014  self1516 ) {
    return ( (  into_dash_iter1051 ) ( (  self1516 ) ) );
}

static  enum EmptyIter_1021   into_dash_iter1064 (    enum EmptyIter_1021  self791 ) {
    return (  self791 );
}

static  struct AppendIter_1020   append1063 (    enum EmptyIter_1021  it1007 ,    struct Char_65  e1009 ) {
    return ( (struct AppendIter_1020) { .f_it = ( (  into_dash_iter1064 ) ( (  it1007 ) ) ) , .f_elem = (  e1009 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_1020   cons1062 (    enum EmptyIter_1021  it1012 ,    struct Char_65  e1014 ) {
    return ( (  append1063 ) ( (  it1012 ) ,  (  e1014 ) ) );
}

static  enum EmptyIter_1021   nil1065 (  ) {
    return ( EmptyIter_1021_EmptyIter );
}

static  struct AppendIter_1020   single1061 (    struct Char_65  e1017 ) {
    return ( (  cons1062 ) ( ( (  nil1065 ) ( ) ) ,  (  e1017 ) ) );
}

static  struct AppendIter_1020   chars1060 (    struct Char_65  self1414 ) {
    return ( (  single1061 ) ( (  self1414 ) ) );
}

static  struct StrConcatIter_1016   into_dash_iter1049 (    struct StrConcat_1013  dref1505 ) {
    return ( (struct StrConcatIter_1016) { .f_left = ( (  chars1050 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1016   chars1048 (    struct StrConcat_1013  self1516 ) {
    return ( (  into_dash_iter1049 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print1012 (    struct StrConcat_1013  s1703 ) {
    ( (  for_dash_each1015 ) ( ( (  chars1048 ) ( (  s1703 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_876   undefined1066 (  ) {
    enum MouseButton_876  temp1067;
    return (  temp1067 );
}

static  enum MouseButton_876   panic_prime_1010 (    struct StrConcat_1011  errmsg1717 ) {
    ( (  print1012 ) ( ( ( StrConcat_1013_StrConcat ) ( ( ( StrConcat_1014_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1717 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1066 ) ( ) );
}

static  enum MouseButton_876   btn_dash_to_dash_mouse_dash_button1008 (    int64_t  btn3402 ) {
    return ( {  int32_t  dref3403 = ( (  i64_dash_i321009 ) ( (  btn3402 ) ) ) ;  dref3403 == 0 ? ( MouseButton_876_MouseLeft ) :  dref3403 == 1 ? ( MouseButton_876_MouseMiddle ) :  dref3403 == 2 ? ( MouseButton_876_MouseRight ) :  dref3403 == 64 ? ( MouseButton_876_ScrollUp ) :  dref3403 == 65 ? ( MouseButton_876_ScrollDown ) : ( (  panic_prime_1010 ) ( ( ( StrConcat_1011_StrConcat ) ( ( (  from_dash_string199 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3402 ) ) ) ) ) ; } );
}

static  struct Scanner_955   mk1069 (    struct StrView_27  s3205 ) {
    return ( (struct Scanner_955) { .f_s = ( (  into_dash_iter461 ) ( (  s3205 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_873   parse_dash_csi949 (    struct Slice_950  seq3409 ) {
    if ( (  eq399 ( ( (  seq3409 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    char  last3410 = (  elem_dash_get951 ( (  seq3409 ) , (  op_dash_sub289 ( ( (  seq3409 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq936 ( (  elem_dash_get951 ( (  seq3409 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike482 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq936 ( (  last3410 ) , ( (  from_dash_charlike482 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq936 ( (  last3410 ) , ( (  from_dash_charlike482 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_955  temp956 = ( (  mk_dash_from_dash_str957 ) ( ( (  substr958 ) ( ( (  from_dash_ascii_dash_slice964 ) ( (  seq3409 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3409 ) .f_count ) ) ) ) );
        struct Scanner_955 *  sc3411 = ( &temp956 );
        struct Maybe_967  dref3412 = ( (  scan_dash_int968 ) ( (  sc3411 ) ) );
        if ( dref3412.tag == Maybe_967_None_t ) {
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
        else {
            if ( dref3412.tag == Maybe_967_Just_t ) {
                ( (  next977 ) ( (  sc3411 ) ) );
                struct Maybe_967  dref3414 = ( (  scan_dash_int968 ) ( (  sc3411 ) ) );
                if ( dref3414.tag == Maybe_967_None_t ) {
                    return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
                }
                else {
                    if ( dref3414.tag == Maybe_967_Just_t ) {
                        ( (  next977 ) ( (  sc3411 ) ) );
                        struct Maybe_967  dref3416 = ( (  scan_dash_int968 ) ( (  sc3411 ) ) );
                        if ( dref3416.tag == Maybe_967_None_t ) {
                            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
                        }
                        else {
                            if ( dref3416.tag == Maybe_967_Just_t ) {
                                return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Mouse ) ( ( (struct MouseEvent_875) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1008 ) ( ( dref3412 .stuff .Maybe_967_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub164 ( ( (  i64_dash_i321009 ) ( ( dref3414 .stuff .Maybe_967_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub164 ( ( (  i64_dash_i321009 ) ( ( dref3416 .stuff .Maybe_967_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq936 ( (  last3410 ) , ( (  from_dash_charlike482 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq399 ( ( (  seq3409 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq936 ( (  last3410 ) , ( (  from_dash_charlike482 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Up_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3410 ) , ( (  from_dash_charlike482 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Down_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3410 ) , ( (  from_dash_charlike482 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Right_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3410 ) , ( (  from_dash_charlike482 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Left_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3410 ) , ( (  from_dash_charlike482 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Home_t } ) ) ) ) );
        }
        if ( (  eq936 ( (  last3410 ) , ( (  from_dash_charlike482 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    if ( (  eq936 ( (  last3410 ) , ( (  from_dash_charlike482 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_955  temp1068 = ( (  mk1069 ) ( ( (  from_dash_ascii_dash_slice964 ) ( (  seq3409 ) ) ) ) );
        struct Scanner_955 *  sc3418 = ( &temp1068 );
        struct Maybe_967  dref3419 = ( (  scan_dash_int968 ) ( (  sc3418 ) ) );
        if ( dref3419.tag == Maybe_967_None_t ) {
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
        else {
            if ( dref3419.tag == Maybe_967_Just_t ) {
                return ( {  int32_t  dref3421 = ( (  i64_dash_i321009 ) ( ( dref3419 .stuff .Maybe_967_Just_s .field0 ) ) ) ;  dref3421 == 1 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Home_t } ) ) ) ) ) :  dref3421 == 2 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Insert_t } ) ) ) ) ) :  dref3421 == 3 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Delete_t } ) ) ) ) ) :  dref3421 == 4 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_End_t } ) ) ) ) ) :  dref3421 == 5 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_PageUp_t } ) ) ) ) ) :  dref3421 == 6 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_PageDown_t } ) ) ) ) ) :  dref3421 == 15 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_F5_t } ) ) ) ) ) :  dref3421 == 17 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_F6_t } ) ) ) ) ) :  dref3421 == 18 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_F7_t } ) ) ) ) ) :  dref3421 == 19 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_F8_t } ) ) ) ) ) :  dref3421 == 20 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_F9_t } ) ) ) ) ) :  dref3421 == 21 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_F10_t } ) ) ) ) ) :  dref3421 == 23 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_F11_t } ) ) ) ) ) :  dref3421 == 24 ? ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_F12_t } ) ) ) ) ) : ( (struct Maybe_873) { .tag = Maybe_873_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
}

static  struct Slice_950   subslice1070 (    struct Slice_950  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    char *  begin_dash_ptr1789 = ( (  offset_dash_ptr947 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp290 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_950) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_950) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  char *   cast1072 (    struct Array_937 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_950   as_dash_slice1071 (    struct Array_937 *  arr2285 ) {
    return ( (struct Slice_950) { .f_ptr = ( (  cast1072 ) ( (  arr2285 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1074 {
    enum {
        Maybe_1074_None_t,
        Maybe_1074_Just_t,
    } tag;
    union {
        struct {
            struct Key_269  field0;
        } Maybe_1074_Just_s;
    } stuff;
};

static struct Maybe_1074 Maybe_1074_Just (  struct Key_269  field0 ) {
    return ( struct Maybe_1074 ) { .tag = Maybe_1074_Just_t, .stuff = { .Maybe_1074_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1074   parse_dash_ss31075 (    char  c3406 ) {
    if ( (  eq936 ( (  c3406 ) , ( (  from_dash_charlike482 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_269) { .tag = Key_269_Up_t } ) ) );
    }
    if ( (  eq936 ( (  c3406 ) , ( (  from_dash_charlike482 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_269) { .tag = Key_269_Down_t } ) ) );
    }
    if ( (  eq936 ( (  c3406 ) , ( (  from_dash_charlike482 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_269) { .tag = Key_269_Right_t } ) ) );
    }
    if ( (  eq936 ( (  c3406 ) , ( (  from_dash_charlike482 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_269) { .tag = Key_269_Left_t } ) ) );
    }
    if ( (  eq936 ( (  c3406 ) , ( (  from_dash_charlike482 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_269) { .tag = Key_269_Home_t } ) ) );
    }
    if ( (  eq936 ( (  c3406 ) , ( (  from_dash_charlike482 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_269) { .tag = Key_269_End_t } ) ) );
    }
    if ( (  eq936 ( (  c3406 ) , ( (  from_dash_charlike482 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_269) { .tag = Key_269_F1_t } ) ) );
    }
    if ( (  eq936 ( (  c3406 ) , ( (  from_dash_charlike482 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_269) { .tag = Key_269_F2_t } ) ) );
    }
    if ( (  eq936 ( (  c3406 ) , ( (  from_dash_charlike482 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_269) { .tag = Key_269_F3_t } ) ) );
    }
    if ( (  eq936 ( (  c3406 ) , ( (  from_dash_charlike482 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1074_Just ) ( ( (struct Key_269) { .tag = Key_269_F4_t } ) ) );
    }
    return ( (struct Maybe_1074) { .tag = Maybe_1074_None_t } );
}

static  struct Maybe_873   read_dash_key885 (  ) {
    char  temp886 = ( (  undefined887 ) ( ) );
    char *  ch3423 = ( &temp886 );
    struct Maybe_889  dref3424 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3424.tag == Maybe_889_None_t ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    else {
        if ( dref3424.tag == Maybe_889_Just_t ) {
            (*  ch3423 ) = ( dref3424 .stuff .Maybe_889_Just_s .field0 );
        }
    }
    if ( (  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3423 ) ) ) ) , (  from_dash_integral308 ( 13 ) ) ) ) ) {
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Enter_t } ) ) ) ) );
    }
    if ( (  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3423 ) ) ) ) , (  from_dash_integral308 ( 127 ) ) ) ) ) {
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3423 ) ) ) ) , (  from_dash_integral308 ( 27 ) ) ) == 0 ) && ( !  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3423 ) ) ) ) , (  from_dash_integral308 ( 9 ) ) ) ) ) ) {
        char  letter3426 = ( (  u8_dash_ascii897 ) ( ( (  u32_dash_u8144 ) ( ( (  u32_dash_or728 ) ( ( (  u8_dash_u32898 ) ( ( (  ascii_dash_u8481 ) ( ( * (  ch3423 ) ) ) ) ) ) ,  ( (  from_dash_hex902 ) ( ( (  from_dash_string199 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( ( Key_269_Ctrl ) ( (  letter3426 ) ) ) ) ) ) );
    }
    if ( ( !  eq303 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3423 ) ) ) ) , (  from_dash_integral308 ( 27 ) ) ) ) ) {
        if ( (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  ch3423 ) ) ) ) , (  from_dash_integral308 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key885 ) ( ) );
        } else {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( ( Key_269_Char ) ( ( * (  ch3423 ) ) ) ) ) ) ) );
        }
    }
    char  temp935 = ( (  undefined887 ) ( ) );
    char *  ch23427 = ( &temp935 );
    struct Maybe_889  dref3428 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3428.tag == Maybe_889_None_t ) {
        return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3428.tag == Maybe_889_Just_t ) {
            (*  ch23427 ) = ( dref3428 .stuff .Maybe_889_Just_s .field0 );
        }
    }
    if ( (  eq936 ( ( * (  ch23427 ) ) , ( (  from_dash_charlike482 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_937  temp938 = ( ( (  zeroed939 ) ( ) ) );
        struct Array_937 *  seq3430 = ( &temp938 );
        int32_t  slen3431 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp157 ( (  slen3431 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp943 = ( (  undefined887 ) ( ) );
            char *  sc3432 = ( &temp943 );
            struct Maybe_889  dref3433 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3433.tag == Maybe_889_None_t ) {
                break;
            }
            else {
                if ( dref3433.tag == Maybe_889_Just_t ) {
                    (*  sc3432 ) = ( dref3433 .stuff .Maybe_889_Just_s .field0 );
                }
            }
            ( (  set944 ) ( (  seq3430 ) ,  ( (  i32_dash_size412 ) ( (  slen3431 ) ) ) ,  ( * (  sc3432 ) ) ) );
            slen3431 = (  op_dash_add159 ( (  slen3431 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  sc3432 ) ) ) ) , (  from_dash_integral308 ( 64 ) ) ) != 0 ) && (  cmp307 ( ( (  ascii_dash_u8481 ) ( ( * (  sc3432 ) ) ) ) , (  from_dash_integral308 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi949 ) ( ( (  subslice1070 ) ( ( (  as_dash_slice1071 ) ( (  seq3430 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( (  slen3431 ) ) ) ) ) ) );
    }
    if ( (  eq936 ( ( * (  ch23427 ) ) , ( (  from_dash_charlike482 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1073 = ( (  undefined887 ) ( ) );
        char *  sc3435 = ( &temp1073 );
        struct Maybe_889  dref3436 = ( (  read_dash_byte890 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3436.tag == Maybe_889_None_t ) {
            return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3436.tag == Maybe_889_Just_t ) {
                (*  sc3435 ) = ( dref3436 .stuff .Maybe_889_Just_s .field0 );
            }
        }
        struct Maybe_1074  dref3438 = ( (  parse_dash_ss31075 ) ( ( * (  sc3435 ) ) ) );
        if ( dref3438.tag == Maybe_1074_None_t ) {
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
        else {
            if ( dref3438.tag == Maybe_1074_Just_t ) {
                return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( dref3438 .stuff .Maybe_1074_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_873_Just ) ( ( ( InputEvent_874_Key ) ( ( (struct Key_269) { .tag = Key_269_Escape_t } ) ) ) ) );
}

static  struct Maybe_873   read_dash_event882 (   struct env88* env ,    struct Tui_90 *  tui3448 ) {
    struct envunion89  temp883 = ( (struct envunion89){ .fun = (  bool  (*) (  struct env87*  ,    struct Tui_90 *  ) )update_dash_dimensions884 , .env =  env->envinst87 } );
    ( temp883.fun ( &temp883.env ,  (  tui3448 ) ) );
    struct Maybe_873  dref3449 = ( (  read_dash_key885 ) ( ) );
    if ( dref3449.tag == Maybe_873_None_t ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    else {
        if ( dref3449.tag == Maybe_873_Just_t ) {
            (*  tui3448 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_873_Just ) ( ( dref3449 .stuff .Maybe_873_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_873   lam880 (   struct env871* env ) {
    struct envunion872  temp881 = ( (struct envunion872){ .fun = (  struct Maybe_873  (*) (  struct env88*  ,    struct Tui_90 *  ) )read_dash_event882 , .env =  env->envinst88 } );
    return ( temp881.fun ( &temp881.env ,  ( env->tui4595 ) ) );
}

static  struct Maybe_873   next1077 (    struct FunIter_870 *  self1032 ) {
    if ( ( ( * (  self1032 ) ) .f_finished ) ) {
        return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
    }
    struct envunion877  temp1078 = ( ( * (  self1032 ) ) .f_fun );
    struct Maybe_873  dref1033 = ( temp1078.fun ( &temp1078.env ) );
    if ( dref1033.tag == Maybe_873_Just_t ) {
        return ( ( Maybe_873_Just ) ( ( dref1033 .stuff .Maybe_873_Just_s .field0 ) ) );
    }
    else {
        if ( dref1033.tag == Maybe_873_None_t ) {
            (*  self1032 ) .f_finished = ( true );
            return ( (struct Maybe_873) { .tag = Maybe_873_None_t } );
        }
    }
}

struct env1081 {
    struct Editor_248 *  ed4449;
    ;
};

struct envunion1082 {
    enum Unit_8  (*fun) (  struct env1081*  ,    struct StrView_27  );
    struct env1081 env;
};

static  enum Unit_8   if_dash_just1080 (    struct Maybe_80  x1292 ,   struct envunion1082  fun1294 ) {
    struct Maybe_80  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_80_Just_t ) {
        struct envunion1082  temp1083 = (  fun1294 );
        ( temp1083.fun ( &temp1083.env ,  ( dref1295 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1084 (   struct env1081* env ,    struct StrView_27  msg4451 ) {
    ( (  free547 ) ( (  msg4451 ) ,  ( ( * ( env->ed4449 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1079 (    struct Editor_248 *  ed4449 ) {
    struct env1081 envinst1081 = {
        .ed4449 =  ed4449 ,
    };
    ( (  if_dash_just1080 ) ( ( ( * (  ed4449 ) ) .f_msg ) ,  ( (struct envunion1082){ .fun = (  enum Unit_8  (*) (  struct env1081*  ,    struct StrView_27  ) )lam1084 , .env =  envinst1081 } ) ) );
    (*  ed4449 ) .f_msg = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1086 {
    enum Unit_8  (*fun) (  struct env264*  ,    struct Editor_248 *  ,    struct Key_269  );
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

static  bool   eq1093 (    enum CursorMovement_1092  l4190 ,    enum CursorMovement_1092  r4192 ) {
    return ( {  struct Tuple2_1094  dref4193 = ( ( Tuple2_1094_Tuple2 ) ( (  l4190 ) ,  (  r4192 ) ) ) ;  dref4193 .field0 == CursorMovement_1092_NoChanges &&  dref4193 .field1 == CursorMovement_1092_NoChanges ? ( true ) :  dref4193 .field0 == CursorMovement_1092_UpdateVI &&  dref4193 .field1 == CursorMovement_1092_UpdateVI ? ( true ) :  dref4193 .field0 == CursorMovement_1092_OverrideSelect &&  dref4193 .field1 == CursorMovement_1092_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_27   from_dash_bytes1098 (    struct Slice_11  sl2154 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2154 ) } );
}

static  struct StrView_27   line1097 (    struct TextBuf_104 *  self3737 ,    int32_t  li3739 ) {
    return ( (  from_dash_bytes1098 ) ( ( (  to_dash_slice565 ) ( ( ( (  get563 ) ( ( & ( ( * (  self3737 ) ) .f_buf ) ) ,  ( (  i32_dash_size412 ) ( (  li3739 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe1101 (    struct Maybe_80  x1283 ,    int32_t (*  fun1285 )(    struct StrView_27  ) ,    int32_t  default1287 ) {
    return ( {  struct Maybe_80  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_80_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_80_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  struct Maybe_80   char_dash_replacement1102 (    struct Char_65  c4070 ) {
    if ( (  eq469 ( (  c4070 ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_80_Just ) ( ( (  from_dash_string199 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
}

static  size_t   reduce1105 (    struct StrViewIter_458  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrViewIter_458  it1100 = ( (  into_dash_iter459 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1101 = ( (  next463 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_297_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_297_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  size_t   lam1108 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add311 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1104 (    struct StrViewIter_458  it1105 ) {
    return ( (  reduce1105 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1108 ) ) );
}

static  int32_t   lam1103 (    struct StrView_27  s4075 ) {
    return ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars460 ) ( (  s4075 ) ) ) ) ) ) );
}

static  int32_t   max1110 (    int32_t  l1316 ,    int32_t  r1318 ) {
    if ( (  cmp157 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
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

static  int32_t   wcwidth1111 (    struct Char_65  c2610 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1112 ) ( (  c2610 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1109 (    struct Char_65  c3493 ) {
    return ( (  max1110 ) ( ( (  wcwidth1111 ) ( (  c3493 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width1100 (    struct Char_65  c4073 ) {
    return ( (  maybe1101 ) ( ( (  char_dash_replacement1102 ) ( (  c4073 ) ) ) ,  (  lam1103 ) ,  ( (  rendered_dash_wcwidth1109 ) ( (  c4073 ) ) ) ) );
}

static  int32_t   pos_dash_vi1095 (    struct TextBuf_104 *  self4089 ,    struct Pos_26  pos4091 ) {
    int32_t  bi4092 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4093 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_458  temp1096 =  into_dash_iter459 ( ( (  chars460 ) ( ( (  line1097 ) ( (  self4089 ) ,  ( (  pos4091 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_297  __cond1099 =  next463 (&temp1096);
        if (  __cond1099 .tag == 0 ) {
            break;
        }
        struct Char_65  c4095 =  __cond1099 .stuff .Maybe_297_Just_s .field0;
        bi4092 = (  op_dash_add159 ( (  bi4092 ) , ( (  size_dash_i32329 ) ( ( (  c4095 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp157 ( ( (  pos4091 ) .f_bi ) , (  bi4092 ) ) == 0 ) ) {
            break;
        }
        vi4093 = (  op_dash_add159 ( (  vi4093 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4095 ) ) ) ) );
    }
    return (  vi4093 );
}

struct Tuple2_1128 {
    enum Mode_220  field0;
    enum Mode_220  field1;
};

static struct Tuple2_1128 Tuple2_1128_Tuple2 (  enum Mode_220  field0 ,  enum Mode_220  field1 ) {
    return ( struct Tuple2_1128 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1127 (    enum Mode_220  l4049 ,    enum Mode_220  r4051 ) {
    return ( {  struct Tuple2_1128  dref4052 = ( ( Tuple2_1128_Tuple2 ) ( (  l4049 ) ,  (  r4051 ) ) ) ;  dref4052 .field0 == Mode_220_Normal &&  dref4052 .field1 == Mode_220_Normal ? ( true ) :  dref4052 .field0 == Mode_220_Insert &&  dref4052 .field1 == Mode_220_Insert ? ( true ) :  dref4052 .field0 == Mode_220_Select &&  dref4052 .field1 == Mode_220_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1126 (    struct Pane_219 *  self4179 ,    struct Maybe_34  sel4181 ) {
    if ( ( !  eq1127 ( ( ( * (  self4179 ) ) .f_mode ) , ( Mode_220_Select ) ) ) ) {
        (*  self4179 ) .f_sel = (  sel4181 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors1091 (    struct Pane_219 *  self4196 ,    struct Pos_26  cur4198 ,    struct Maybe_34  sel4200 ,    enum CursorMovement_1092  cursor_dash_movement_dash_type4202 ) {
    if ( ( !  eq1093 ( (  cursor_dash_movement_dash_type4202 ) , ( CursorMovement_1092_NoChanges ) ) ) ) {
        (*  self4196 ) .f_vi = ( (  pos_dash_vi1095 ) ( ( ( * (  self4196 ) ) .f_buf ) ,  (  cur4198 ) ) );
    }
    (*  self4196 ) .f_cursor = (  cur4198 );
    if ( ( !  eq1093 ( (  cursor_dash_movement_dash_type4202 ) , ( CursorMovement_1092_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1126 ) ( (  self4196 ) ,  (  sel4200 ) ) );
    } else {
        (*  self4196 ) .f_sel = (  sel4200 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1130 (    struct StrView_27  self2200 ) {
    return ( ( (  self2200 ) .f_contents ) .f_count );
}

static  size_t   clamp1131 (    size_t  x1353 ,    size_t  mn1355 ,    size_t  mx1357 ) {
    if ( (  cmp290 ( (  x1353 ) , (  mn1355 ) ) == 0 ) ) {
        return (  mn1355 );
    } else {
        if ( (  cmp290 ( (  x1353 ) , (  mx1357 ) ) == 2 ) ) {
            return (  mx1357 );
        } else {
            return (  x1353 );
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

static  struct Pos_26   left_dash_pos1129 (    struct TextBuf_104 *  self3758 ,    struct Pos_26  pos3760 ) {
    if ( (  eq557 ( (  pos3760 ) , ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk694 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq558 ( ( (  pos3760 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert667 ) ( (  cmp157 ( ( (  pos3760 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string199 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk694 ) ( (  op_dash_sub164 ( ( (  pos3760 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( (  self3758 ) ,  (  op_dash_sub164 ( ( (  pos3760 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line3761 = ( (  line1097 ) ( (  self3758 ) ,  ( (  pos3760 ) .f_line ) ) );
    size_t  pos_dash_bi3762 = ( (  clamp1131 ) ( ( (  i32_dash_size412 ) ( ( (  pos3760 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1130 ) ( (  line3761 ) ) ) ) );
    size_t  off3763 = ( (  previous_dash_char1132 ) ( ( (  offset_dash_ptr300 ) ( ( ( (  line3761 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  pos_dash_bi3762 ) ) ) ) ) ) );
    return ( (  mk694 ) ( ( (  pos3760 ) .f_line ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( (  pos_dash_bi3762 ) , (  off3763 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1090 (    struct Pane_219 *  self4208 ) {
    ( (  set_dash_cursors1091 ) ( (  self4208 ) ,  ( (  left_dash_pos1129 ) ( ( ( * (  self4208 ) ) .f_buf ) ,  ( ( * (  self4208 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_219 *   pane1134 (    struct Editor_248 *  ed4439 ) {
    return ( & ( ( * (  ed4439 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1137 (    struct TextBuf_104 *  self3742 ) {
    return ( (  size_dash_i32329 ) ( ( (  size559 ) ( ( & ( ( * (  self3742 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1136 (    struct TextBuf_104 *  self3750 ,    struct Pos_26  pos3752 ) {
    if ( (  cmp157 ( ( (  pos3752 ) .f_line ) , ( (  num_dash_lines1137 ) ( (  self3750 ) ) ) ) != 0 ) ) {
        return ( (  mk694 ) ( ( (  num_dash_lines1137 ) ( (  self3750 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_27  line3753 = ( (  line1097 ) ( (  self3750 ) ,  ( (  pos3752 ) .f_line ) ) );
    int64_t  bi3754 = ( (  i32_dash_i641007 ) ( ( (  pos3752 ) .f_bi ) ) );
    if ( (  cmp1056 ( (  bi3754 ) , ( (  size_dash_i64302 ) ( ( (  num_dash_bytes1130 ) ( (  line3753 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp157 ( (  op_dash_add159 ( ( (  pos3752 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1137 ) ( (  self3750 ) ) ) ) != 0 ) ) {
            return ( (  mk694 ) ( ( (  pos3752 ) .f_line ) ,  ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line3753 ) ) ) ) ) ) );
        }
        return ( (  mk694 ) ( (  op_dash_add159 ( ( (  pos3752 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off3755 = ( (  size_dash_i32329 ) ( ( (  next_dash_char306 ) ( ( (  offset_dash_ptr300 ) ( ( ( (  line3753 ) .f_contents ) .f_ptr ) ,  (  bi3754 ) ) ) ) ) ) );
    return ( (  mk694 ) ( ( (  pos3752 ) .f_line ) ,  (  op_dash_add159 ( ( (  pos3752 ) .f_bi ) , (  off3755 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1135 (    struct Pane_219 *  self4205 ) {
    ( (  set_dash_cursors1091 ) ( (  self4205 ) ,  ( (  right_dash_pos1136 ) ( ( ( * (  self4205 ) ) .f_buf ) ,  ( ( * (  self4205 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1139 (    struct TextBuf_104 *  self4078 ,    int32_t  ln4080 ,    int32_t  vx4082 ) {
    int32_t  bi4083 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4084 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_458  temp1140 =  into_dash_iter459 ( ( (  chars460 ) ( ( (  line1097 ) ( (  self4078 ) ,  (  ln4080 ) ) ) ) ) );
    while (true) {
        struct Maybe_297  __cond1141 =  next463 (&temp1140);
        if (  __cond1141 .tag == 0 ) {
            break;
        }
        struct Char_65  c4086 =  __cond1141 .stuff .Maybe_297_Just_s .field0;
        vi4084 = (  op_dash_add159 ( (  vi4084 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4086 ) ) ) ) );
        if ( (  cmp157 ( (  vx4082 ) , (  vi4084 ) ) == 0 ) ) {
            break;
        }
        bi4083 = (  op_dash_add159 ( (  bi4083 ) , ( (  size_dash_i32329 ) ( ( (  c4086 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4083 );
}

static  enum Unit_8   move_dash_down1138 (    struct Pane_219 *  self4211 ,    int32_t  amnt4213 ) {
    struct Pos_26  cur4214 = ( ( * (  self4211 ) ) .f_cursor );
    int32_t  nu_dash_line4215 = ( (  min658 ) ( (  op_dash_add159 ( ( (  cur4214 ) .f_line ) , (  amnt4213 ) ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1137 ) ( ( ( * (  self4211 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4216 = ( ( * (  self4211 ) ) .f_vi );
    int32_t  bi4217 = ( (  vi_dash_bi1139 ) ( ( ( * (  self4211 ) ) .f_buf ) ,  (  nu_dash_line4215 ) ,  (  vci4216 ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4211 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4215 ) , .f_bi = (  bi4217 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1142 (    struct Pane_219 *  self4220 ,    int32_t  amnt4222 ) {
    struct Pos_26  cur4223 = ( ( * (  self4220 ) ) .f_cursor );
    int32_t  nu_dash_line4224 = ( (  max1110 ) ( (  op_dash_sub164 ( ( (  cur4223 ) .f_line ) , (  amnt4222 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4225 = ( ( * (  self4220 ) ) .f_vi );
    int32_t  bi4226 = ( (  vi_dash_bi1139 ) ( ( ( * (  self4220 ) ) .f_buf ) ,  (  nu_dash_line4224 ) ,  (  vci4225 ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4220 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4224 ) , .f_bi = (  bi4226 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1144 (    struct TextBuf_104 *  self3851 ) {
    (*  self3851 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_106_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1143 (    struct Pane_219 *  self4184 ,    enum Mode_220  mode4186 ) {
    if ( (  eq1127 ( (  mode4186 ) , ( Mode_220_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1144 ) ( ( ( * (  self4184 ) ) .f_buf ) ) );
    }
    (*  self4184 ) .f_mode = (  mode4186 );
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

static  struct Maybe_297   next1153 (    struct TakeWhile_1149 *  self965 ) {
    struct Maybe_297  mx966 = ( (  next463 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_297  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) );
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

static  size_t   reduce1150 (    struct Map_1148  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1148  it1100 = ( (  into_dash_iter1151 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1101 = ( (  next1152 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_246_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_246_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  size_t   lam1156 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add311 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1147 (    struct Map_1148  it1111 ) {
    return ( (  reduce1150 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1156 ) ) );
}

static  struct TakeWhile_1149   into_dash_iter1158 (    struct TakeWhile_1149  self962 ) {
    return (  self962 );
}

static  struct Map_1148   map1157 (    struct TakeWhile_1149  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1149  it809 = ( (  into_dash_iter1158 ) ( (  iterable806 ) ) );
    return ( ( Map_1148_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1149   take_dash_while1159 (    struct StrView_27  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1149) { .f_it = ( (  into_dash_iter461 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  bool   lam1160 (    struct Char_65  c4274 ) {
    return (  eq469 ( (  c4274 ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1161 (    struct Char_65  c4276 ) {
    return ( (  c4276 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1146 (    struct Pane_219 *  pane4270 ,    int32_t  line4272 ) {
    return ( (  size_dash_i32329 ) ( ( (  sum1147 ) ( ( (  map1157 ) ( ( (  take_dash_while1159 ) ( ( (  line1097 ) ( ( ( * (  pane4270 ) ) .f_buf ) ,  (  line4272 ) ) ) ,  (  lam1160 ) ) ) ,  (  lam1161 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1145 (    struct Pane_219 *  self4289 ) {
    struct Pos_26  cur4290 = ( ( * (  self4289 ) ) .f_cursor );
    int32_t  indent4291 = ( (  indent_dash_at_dash_line1146 ) ( (  self4289 ) ,  ( (  cur4290 ) .f_line ) ) );
    struct Pos_26  temp1162 = (  cur4290 );
    temp1162 .  f_bi = (  indent4291 );
    ( (  set_dash_cursors1091 ) ( (  self4289 ) ,  ( temp1162 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1163 (    struct Pane_219 *  self4294 ) {
    struct Pos_26  cur4295 = ( ( * (  self4294 ) ) .f_cursor );
    struct Pos_26  temp1164 = (  cur4295 );
    temp1164 .  f_bi = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  self4294 ) ) .f_buf ) ,  ( (  cur4295 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4294 ) ,  ( temp1164 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
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

static  struct SliceIter_1172   into_dash_iter1176 (    struct Slice_31  self1824 ) {
    return ( (struct SliceIter_1172) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1178 (    struct Changeset_32 *  x338 ,    int64_t  count340 ) {
    struct Changeset_32  temp1179;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1179 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1177 (    struct Slice_31  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Changeset_32 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1178 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp290 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_1172   into_dash_iter1175 (    struct List_30  self2030 ) {
    return ( (  into_dash_iter1176 ) ( ( (  subslice1177 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
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

static  struct Maybe_1181   next1183 (    struct SliceIter_1172 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1181) { .tag = Maybe_1181_None_t } );
    }
    struct Changeset_32  elem1832 = ( * ( (  offset_dash_ptr1178 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1181_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_1181   next1182 (    struct Drop_1171 *  dref848 ) {
    while ( (  cmp290 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1183 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub289 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1183 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

struct env1186 {
    enum CAllocator_10  al3690;
    ;
};

struct envunion1187 {
    enum Unit_8  (*fun) (  struct env1186*  ,    struct Action_25  );
    struct env1186 env;
};

struct SliceIter_1188 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1188   into_dash_iter1191 (    struct Slice_24  self1824 ) {
    return ( (struct SliceIter_1188) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1193 (    struct Action_25 *  x338 ,    int64_t  count340 ) {
    struct Action_25  temp1194;
    return ( (struct Action_25 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1194 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1192 (    struct Slice_24  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Action_25 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1193 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp290 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_1188   into_dash_iter1190 (    struct List_23  self2030 ) {
    return ( (  into_dash_iter1191 ) ( ( (  subslice1192 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
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

static  struct Maybe_1195   next1196 (    struct SliceIter_1188 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
    }
    struct Action_25  elem1832 = ( * ( (  offset_dash_ptr1193 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1195_Just ) ( (  elem1832 ) ) );
}

static  enum Unit_8   for_dash_each1185 (    struct List_23  iterable1075 ,   struct envunion1187  fun1077 ) {
    struct SliceIter_1188  temp1189 = ( (  into_dash_iter1190 ) ( (  iterable1075 ) ) );
    struct SliceIter_1188 *  it1078 = ( &temp1189 );
    while ( ( true ) ) {
        struct Maybe_1195  dref1079 = ( (  next1196 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1195_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1195_Just_t ) {
                struct envunion1187  temp1197 = (  fun1077 );
                ( temp1197.fun ( &temp1197.env ,  ( dref1079 .stuff .Maybe_1195_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1199 (    struct Action_25  action3683 ,    enum CAllocator_10  al3685 ) {
    ( (  free547 ) ( ( (  action3683 ) .f_fwd ) ,  (  al3685 ) ) );
    ( (  free547 ) ( ( (  action3683 ) .f_bwd ) ,  (  al3685 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1198 (   struct env1186* env ,    struct Action_25  a3692 ) {
    return ( (  free_dash_action1199 ) ( (  a3692 ) ,  ( env->al3690 ) ) );
}

static  void *   cast_dash_ptr1202 (    struct Action_25 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1201 (    enum CAllocator_10  dref1961 ,    struct Slice_24  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1202 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1200 (    struct List_23 *  list2037 ) {
    ( (  free1201 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1184 (    struct Changeset_32  chs3688 ,    enum CAllocator_10  al3690 ) {
    struct env1186 envinst1186 = {
        .al3690 =  al3690 ,
    };
    ( (  for_dash_each1185 ) ( ( (  chs3688 ) .f_parts ) ,  ( (struct envunion1187){ .fun = (  enum Unit_8  (*) (  struct env1186*  ,    struct Action_25  ) )lam1198 , .env =  envinst1186 } ) ) );
    ( (  free1200 ) ( ( & ( (  chs3688 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1203 (    struct List_30 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min467 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1169 (    struct Actions_105 *  actions3706 ) {
    enum CAllocator_10  al3707 = ( ( ( * (  actions3706 ) ) .f_list ) .f_al );
    size_t  cur3708 = ( ( * (  actions3706 ) ) .f_cur );
    struct Drop_1171  temp1170 =  into_dash_iter1173 ( ( (  drop1174 ) ( ( ( * (  actions3706 ) ) .f_list ) ,  (  cur3708 ) ) ) );
    while (true) {
        struct Maybe_1181  __cond1180 =  next1182 (&temp1170);
        if (  __cond1180 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action3710 =  __cond1180 .stuff .Maybe_1181_Just_s .field0;
        ( (  free_dash_changeset1184 ) ( (  action3710 ) ,  (  al3707 ) ) );
    }
    ( (  trim1203 ) ( ( & ( ( * (  actions3706 ) ) .f_list ) ) ,  (  cur3708 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1204 (    struct StrView_27  s2167 ,    enum CAllocator_10  al2169 ) {
    return ( (  clone_dash_0505 ) ( (  s2167 ) ,  (  al2169 ) ) );
}

static  struct Maybe_80   head1206 (    struct SplitIter_599  it1143 ) {
    struct SplitIter_599  temp1207 = ( (  into_dash_iter606 ) ( (  it1143 ) ) );
    return ( (  next615 ) ( ( &temp1207 ) ) );
}

static  struct Maybe_80   head1209 (    struct Drop_598  it1143 ) {
    struct Drop_598  temp1210 = ( (  into_dash_iter604 ) ( (  it1143 ) ) );
    return ( (  next614 ) ( ( &temp1210 ) ) );
}

static  bool   null1208 (    struct Drop_598  it1152 ) {
    struct Maybe_80  dref1153 = ( (  head1209 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_80_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1212 (    struct StrView_27  errmsg1714 ) {
    ( (  print_dash_str668 ) ( ( ( StrConcat_669_StrConcat ) ( ( ( StrConcat_670_StrConcat ) ( ( (  from_dash_string199 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_612   undefined1213 (  ) {
    struct Tuple2_612  temp1214;
    return (  temp1214 );
}

static  struct Tuple2_612   or_dash_fail1211 (    struct Maybe_611  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_611  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_611_None_t ) {
        ( (  panic1212 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1213 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_611_Just_t ) {
            return ( dref1730 .stuff .Maybe_611_Just_s .field0 );
        }
    }
}

static  struct Maybe_611   reduce1216 (    struct Zip_597  iterable1094 ,    struct Maybe_611  base1096 ,    struct Maybe_611 (*  fun1098 )(    struct Tuple2_612  ,    struct Maybe_611  ) ) {
    struct Maybe_611  x1099 = (  base1096 );
    struct Zip_597  it1100 = ( (  into_dash_iter602 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_611  dref1101 = ( (  next613 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_611_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_611_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_611_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  struct Maybe_611   lam1219 (    struct Tuple2_612  e1148 ,    struct Maybe_611  dref1149 ) {
    return ( ( Maybe_611_Just ) ( (  e1148 ) ) );
}

static  struct Maybe_611   last1215 (    struct Zip_597  it1146 ) {
    return ( (  reduce1216 ) ( (  it1146 ) ,  ( (struct Maybe_611) { .tag = Maybe_611_None_t } ) ,  (  lam1219 ) ) );
}

static  int32_t   snd1220 (    struct Tuple2_612  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct StrView_27   fst1221 (    struct Tuple2_612  dref1254 ) {
    return ( dref1254 .field0 );
}

static  struct Pos_26   pos_dash_after_dash_str1205 (    struct TextBuf_104 *  self3839 ,    struct StrView_27  bytes3841 ,    struct Pos_26  from3843 ) {
    struct SplitIter_599  lines3844 = ( (  split_dash_by_dash_each607 ) ( (  bytes3841 ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line3845 = ( (  or_dash_else589 ) ( ( (  head1206 ) ( (  lines3844 ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_598  headless3846 = ( (  drop605 ) ( (  lines3844 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1208 ) ( (  headless3846 ) ) ) ) {
        struct Pos_26  next_dash_pos3847 = ( (  mk694 ) ( ( (  from3843 ) .f_line ) ,  (  op_dash_add159 ( ( (  from3843 ) .f_bi ) , ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  first_dash_line3845 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3847 );
    } else {
        struct Tuple2_612  last_dash_line3848 = ( (  or_dash_fail1211 ) ( ( (  last1215 ) ( ( (  zip603 ) ( (  headless3846 ) ,  ( (  from427 ) ( (  op_dash_add159 ( ( (  from3843 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk694 ) ( ( (  snd1220 ) ( (  last_dash_line3848 ) ) ) ,  ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  fst1221 ) ( (  last_dash_line3848 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1227 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   from_dash_charlike1228 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1232 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1234 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1236 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   str_dash_between1223 (   struct env125* env ,    struct TextBuf_104 *  self3871 ,    struct Pos_26  from3873 ,    struct Pos_26  to3875 ) {
    enum CAllocator_10  al3876 = ( ( ( * (  self3871 ) ) .f_buf ) .f_al );
    if ( (  eq558 ( ( (  from3873 ) .f_line ) , ( (  to3875 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3877 = ( (  i32_dash_size412 ) ( ( (  min658 ) ( ( (  from3873 ) .f_bi ) ,  ( (  to3875 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3878 = ( (  i32_dash_size412 ) ( ( (  max1110 ) ( ( (  from3873 ) .f_bi ) ,  ( (  to3875 ) .f_bi ) ) ) ) );
        return ( (  clone1204 ) ( ( (  byte_dash_substr484 ) ( ( (  line1097 ) ( (  self3871 ) ,  ( (  from3873 ) .f_line ) ) ) ,  (  from_dash_bi3877 ) ,  (  to_dash_bi3878 ) ) ) ,  (  al3876 ) ) );
    } else {
        struct Pos_26  from_dash_pos3879 = ( (  min554 ) ( (  from3873 ) ,  (  to3875 ) ) );
        struct Pos_26  to_dash_pos3880 = ( (  max556 ) ( (  from3873 ) ,  (  to3875 ) ) );
        struct List_9  temp1224 = ( (  mk439 ) ( (  al3876 ) ) );
        struct List_9 *  sb3881 = ( &temp1224 );
        struct StrView_27  first_dash_line3882 = ( (  line1097 ) ( (  self3871 ) ,  ( (  from_dash_pos3879 ) .f_line ) ) );
        struct envunion126  temp1225 = ( (struct envunion126){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
        ( temp1225.fun ( &temp1225.env ,  (  sb3881 ) ,  ( ( (  byte_dash_substr484 ) ( (  first_dash_line3882 ) ,  ( (  i32_dash_size412 ) ( ( (  from_dash_pos3879 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1130 ) ( (  first_dash_line3882 ) ) ) ) ) .f_contents ) ) );
        struct envunion1227  temp1226 = ( (struct envunion1227){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
        ( temp1226.fun ( &temp1226.env ,  (  sb3881 ) ,  ( ( ( (  from_dash_charlike1228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_153  temp1229 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( ( (  from_dash_pos3879 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub164 ( ( (  to_dash_pos3880 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_155  __cond1230 =  next156 (&temp1229);
            if (  __cond1230 .tag == 0 ) {
                break;
            }
            int32_t  i3884 =  __cond1230 .stuff .Maybe_155_Just_s .field0;
            struct envunion1232  temp1231 = ( (struct envunion1232){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
            ( temp1231.fun ( &temp1231.env ,  (  sb3881 ) ,  ( ( (  line1097 ) ( (  self3871 ) ,  (  i3884 ) ) ) .f_contents ) ) );
            struct envunion1234  temp1233 = ( (struct envunion1234){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
            ( temp1233.fun ( &temp1233.env ,  (  sb3881 ) ,  ( ( ( (  from_dash_charlike1228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1236  temp1235 = ( (struct envunion1236){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
        ( temp1235.fun ( &temp1235.env ,  (  sb3881 ) ,  ( ( (  byte_dash_substr484 ) ( ( (  line1097 ) ( (  self3871 ) ,  ( (  to_dash_pos3880 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( ( (  to_dash_pos3880 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes1098 ) ( ( (  to_dash_slice565 ) ( ( * (  sb3881 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1237 (    struct Maybe_206  m1265 ) {
    struct Maybe_206  dref1266 = (  m1265 );
    if ( dref1266.tag == Maybe_206_None_t ) {
        return ( true );
    }
    else {
        if ( dref1266.tag == Maybe_206_Just_t ) {
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

static  bool   eq1238 (    enum ChangesetInputType_106  l3696 ,    enum ChangesetInputType_106  r3698 ) {
    return ( {  struct Tuple2_1239  dref3699 = ( ( Tuple2_1239_Tuple2 ) ( (  l3696 ) ,  (  r3698 ) ) ) ;  dref3699 .field0 == ChangesetInputType_106_NoChangeset &&  dref3699 .field1 == ChangesetInputType_106_NoChangeset ? ( true ) :  dref3699 .field0 == ChangesetInputType_106_InputChangeset &&  dref3699 .field1 == ChangesetInputType_106_InputChangeset ? ( true ) :  dref3699 .field0 == ChangesetInputType_106_CustomChangeset &&  dref3699 .field1 == ChangesetInputType_106_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1241 (    struct Slice_31  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp290 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1178 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  struct Changeset_32 *   last_dash_ptr1240 (    struct Slice_31  s1940 ) {
    if ( (  eq399 ( ( (  s1940 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1241 ) ( (  s1940 ) ,  (  op_dash_sub289 ( ( (  s1940 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1242 (    struct List_30  l2128 ) {
    struct Changeset_32 *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
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

static  struct Slice_24   allocate1247 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1248 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr1959 = ( (  cast_dash_ptr1251 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1252 {
    ;
    ;
    struct Slice_24  new_dash_slice2044;
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

static  struct Action_25 *   get_dash_ptr1257 (    struct Slice_24  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp290 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1193 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set1256 (    struct Slice_24  slice1776 ,    size_t  i1778 ,    struct Action_25  x1780 ) {
    struct Action_25 *  ep1781 = ( (  get_dash_ptr1257 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1255 (   struct env1252* env ,    struct Tuple2_1254  dref2045 ) {
    return ( (  set1256 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size412 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct Zip_1259 {
    struct SliceIter_1188  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_1259   into_dash_iter1261 (    struct Zip_1259  self912 ) {
    return (  self912 );
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

static  struct Maybe_1262   next1263 (    struct Zip_1259 *  self915 ) {
    struct Zip_1259  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_1195  dref917 = ( (  next1196 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_1195_None_t ) {
            return ( (struct Maybe_1262) { .tag = Maybe_1262_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_1195_Just_t ) {
                struct Maybe_155  dref919 = ( (  next422 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_1262) { .tag = Maybe_1262_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_155_Just_t ) {
                        ( (  next1196 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1262_Just ) ( ( ( Tuple2_1254_Tuple2 ) ( ( dref917 .stuff .Maybe_1195_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1258 (    struct Zip_1259  iterable1075 ,   struct envunion1253  fun1077 ) {
    struct Zip_1259  temp1260 = ( (  into_dash_iter1261 ) ( (  iterable1075 ) ) );
    struct Zip_1259 *  it1078 = ( &temp1260 );
    while ( ( true ) ) {
        struct Maybe_1262  dref1079 = ( (  next1263 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1262_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1262_Just_t ) {
                struct envunion1253  temp1264 = (  fun1077 );
                ( temp1264.fun ( &temp1264.env ,  ( dref1079 .stuff .Maybe_1262_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1259   zip1265 (    struct Slice_24  left923 ,    struct FromIter_416  right925 ) {
    struct SliceIter_1188  left_dash_it926 = ( (  into_dash_iter1191 ) ( (  left923 ) ) );
    struct FromIter_416  right_dash_it927 = ( (  into_dash_iter426 ) ( (  right925 ) ) );
    return ( (struct Zip_1259) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1246 (   struct env3* env ,    struct List_23 *  list2043 ) {
    if ( (  eq399 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1247 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2044 = ( (  allocate1247 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1252 envinst1252 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1253  fun2048 = ( (struct envunion1253){ .fun = (  enum Unit_8  (*) (  struct env1252*  ,    struct Tuple2_1254  ) )lam1255 , .env =  envinst1252 } );
            ( (  for_dash_each1258 ) ( ( (  zip1265 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free1201 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1244 (   struct env21* env ,    struct List_23 *  list2051 ,    struct Action_25  elem2053 ) {
    struct envunion22  temp1245 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1246 , .env =  env->envinst3 } );
    ( temp1245.fun ( &temp1245.env ,  (  list2051 ) ) );
    ( (  set1256 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add311 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
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

static  struct List_23   mk1267 (    enum CAllocator_10  al2033 ) {
    struct Slice_24  elements2034 = ( (  empty1268 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1274 (    struct Maybe_206  self1734 ,    struct Cursors_33  alt1736 ) {
    struct Maybe_206  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_206_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_206_Just_t ) {
            return ( dref1737 .stuff .Maybe_206_Just_s .field0 );
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

static  struct Slice_31   allocate1281 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1282 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr1959 = ( (  cast_dash_ptr1285 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1286 {
    ;
    ;
    struct Slice_31  new_dash_slice2044;
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

static  enum Unit_8   set1290 (    struct Slice_31  slice1776 ,    size_t  i1778 ,    struct Changeset_32  x1780 ) {
    struct Changeset_32 *  ep1781 = ( (  get_dash_ptr1241 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1289 (   struct env1286* env ,    struct Tuple2_1288  dref2045 ) {
    return ( (  set1290 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size412 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct Zip_1292 {
    struct SliceIter_1172  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_1292   into_dash_iter1294 (    struct Zip_1292  self912 ) {
    return (  self912 );
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

static  struct Maybe_1295   next1296 (    struct Zip_1292 *  self915 ) {
    struct Zip_1292  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_1181  dref917 = ( (  next1183 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_1181_None_t ) {
            return ( (struct Maybe_1295) { .tag = Maybe_1295_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_1181_Just_t ) {
                struct Maybe_155  dref919 = ( (  next422 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_1295) { .tag = Maybe_1295_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_155_Just_t ) {
                        ( (  next1183 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1295_Just ) ( ( ( Tuple2_1288_Tuple2 ) ( ( dref917 .stuff .Maybe_1181_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1291 (    struct Zip_1292  iterable1075 ,   struct envunion1287  fun1077 ) {
    struct Zip_1292  temp1293 = ( (  into_dash_iter1294 ) ( (  iterable1075 ) ) );
    struct Zip_1292 *  it1078 = ( &temp1293 );
    while ( ( true ) ) {
        struct Maybe_1295  dref1079 = ( (  next1296 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1295_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1295_Just_t ) {
                struct envunion1287  temp1297 = (  fun1077 );
                ( temp1297.fun ( &temp1297.env ,  ( dref1079 .stuff .Maybe_1295_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1292   zip1298 (    struct Slice_31  left923 ,    struct FromIter_416  right925 ) {
    struct SliceIter_1172  left_dash_it926 = ( (  into_dash_iter1176 ) ( (  left923 ) ) );
    struct FromIter_416  right_dash_it927 = ( (  into_dash_iter426 ) ( (  right925 ) ) );
    return ( (struct Zip_1292) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  void *   cast_dash_ptr1300 (    struct Changeset_32 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1299 (    enum CAllocator_10  dref1961 ,    struct Slice_31  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1300 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1280 (   struct env4* env ,    struct List_30 *  list2043 ) {
    if ( (  eq399 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1281 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2044 = ( (  allocate1281 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1286 envinst1286 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1287  fun2048 = ( (struct envunion1287){ .fun = (  enum Unit_8  (*) (  struct env1286*  ,    struct Tuple2_1288  ) )lam1289 , .env =  envinst1286 } );
            ( (  for_dash_each1291 ) ( ( (  zip1298 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free1299 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1278 (   struct env28* env ,    struct List_30 *  list2051 ,    struct Changeset_32  elem2053 ) {
    struct envunion29  temp1279 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1280 , .env =  env->envinst4 } );
    ( temp1279.fun ( &temp1279.env ,  (  list2051 ) ) );
    ( (  set1290 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add311 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1302 (   struct env119* env ,    struct TextBuf_104 *  self3834 ,    struct Action_25  action3836 ) {
    struct envunion120  temp1303 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action553 , .env =  env->envinst100 } );
    ( temp1303.fun ( &temp1303.env ,  (  self3834 ) ,  ( (  action3836 ) .f_from ) ,  ( (  action3836 ) .f_to_dash_bwd ) ,  ( (  action3836 ) .f_fwd ) ) );
    return ( (  action3836 ) .f_to_dash_fwd );
}

static  struct Maybe_206   change1168 (   struct env127* env ,    struct TextBuf_104 *  self3901 ,    struct Pos_26  from3903 ,    struct Pos_26  to3905 ,    struct StrView_27  bytes3907 ,    struct Maybe_206  before_dash_cursors3909 ) {
    struct Pos_26  from_dash_pos3910 = ( (  min554 ) ( (  from3903 ) ,  (  to3905 ) ) );
    struct Pos_26  to_dash_pos3911 = ( (  max556 ) ( (  from3903 ) ,  (  to3905 ) ) );
    struct Actions_105 *  actions3912 = ( & ( ( * (  self3901 ) ) .f_actions ) );
    ( (  trim_dash_actions1169 ) ( (  actions3912 ) ) );
    struct envunion130  temp1222 = ( (struct envunion130){ .fun = (  struct StrView_27  (*) (  struct env125*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1223 , .env =  env->envinst125 } );
    struct Action_25  action3913 = ( (struct Action_25) { .f_from = (  from3903 ) , .f_fwd = ( (  clone1204 ) ( (  bytes3907 ) ,  ( ( * (  self3901 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1205 ) ( (  self3901 ) ,  (  bytes3907 ) ,  (  from_dash_pos3910 ) ) ) , .f_bwd = ( temp1222.fun ( &temp1222.env ,  (  self3901 ) ,  (  from_dash_pos3910 ) ,  (  to_dash_pos3911 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3911 ) } );
    enum CAllocator_10  al3914 = ( ( ( * (  actions3912 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3915 = ( (  is_dash_none1237 ) ( (  before_dash_cursors3909 ) ) );
    if ( ( (  eq1238 ( ( ( ( * (  self3901 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_106_CustomChangeset ) ) ) || ( (  eq1238 ( ( ( ( * (  self3901 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_106_InputChangeset ) ) ) && (  is_dash_typed_dash_in3915 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset3916 = ( (  last_dash_ptr1240 ) ( ( (  to_dash_slice1242 ) ( ( ( * (  actions3912 ) ) .f_list ) ) ) ) );
        struct envunion128  temp1243 = ( (struct envunion128){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1244 , .env =  env->envinst21 } );
        ( temp1243.fun ( &temp1243.env ,  ( & ( ( * (  last_dash_changeset3916 ) ) .f_parts ) ) ,  (  action3913 ) ) );
    } else {
        struct Changeset_32  temp1266 = ( (struct Changeset_32) { .f_parts = ( (  mk1267 ) ( (  al3914 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1274 ) ( (  before_dash_cursors3909 ) ,  ( (struct Cursors_33) { .f_cur = (  from3903 ) , .f_sel = ( (  eq557 ( (  from3903 ) , (  to3905 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to3905 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset3917 = ( &temp1266 );
        struct envunion1276  temp1275 = ( (struct envunion1276){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1244 , .env =  env->envinst21 } );
        ( temp1275.fun ( &temp1275.env ,  ( & ( ( * (  changeset3917 ) ) .f_parts ) ) ,  (  action3913 ) ) );
        struct envunion129  temp1277 = ( (struct envunion129){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1278 , .env =  env->envinst28 } );
        ( temp1277.fun ( &temp1277.env ,  ( & ( ( * (  actions3912 ) ) .f_list ) ) ,  ( * (  changeset3917 ) ) ) );
        (*  actions3912 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3915 ) ? ( ChangesetInputType_106_InputChangeset ) : ( ChangesetInputType_106_NoChangeset ) );
        (*  actions3912 ) .f_cur = (  op_dash_add311 ( ( ( * (  actions3912 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion131  temp1301 = ( (struct envunion131){ .fun = (  struct Pos_26  (*) (  struct env119*  ,    struct TextBuf_104 *  ,    struct Action_25  ) )action_dash_fwd1302 , .env =  env->envinst119 } );
    struct Pos_26  to_dash_fwd3918 = ( temp1301.fun ( &temp1301.env ,  (  self3901 ) ,  (  action3913 ) ) );
    if ( (  cmp290 ( ( (  num_dash_bytes1130 ) ( ( (  action3913 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3919 = ( (  left_dash_pos1129 ) ( (  self3901 ) ,  (  to_dash_fwd3918 ) ) );
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3919 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action3913 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3918 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1166 (   struct env204* env ,    struct Pane_219 *  self4307 ,    struct StrView_27  s4309 ) {
    struct Pos_26  cur4310 = ( ( * (  self4307 ) ) .f_cursor );
    struct envunion205  temp1167 = ( (struct envunion205){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    ( temp1167.fun ( &temp1167.env ,  ( ( * (  self4307 ) ) .f_buf ) ,  (  cur4310 ) ,  (  cur4310 ) ,  (  s4309 ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1309 (   struct env215* env ,    struct Pane_219 *  self4345 ,    int32_t  line4347 ) {
    struct envunion216  temp1310 = ( (struct envunion216){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    ( temp1310.fun ( &temp1310.env ,  ( ( * (  self4345 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4347 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4347 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike1228 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1305 (   struct env226* env ,    struct Pane_219 *  self4366 ,    int32_t  indent4368 ) {
    struct RangeIter_153  temp1306 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4368 ) ) ) );
    while (true) {
        struct Maybe_155  __cond1307 =  next156 (&temp1306);
        if (  __cond1307 .tag == 0 ) {
            break;
        }
        int32_t  dref4369 =  __cond1307 .stuff .Maybe_155_Just_s .field0;
        struct envunion227  temp1308 = ( (struct envunion227){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at1309 , .env =  env->envinst215 } );
        ( temp1308.fun ( &temp1308.env ,  (  self4366 ) ,  ( ( ( * (  self4366 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1135 ) ( (  self4366 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1311 (    struct Pane_219 *  self4286 ) {
    struct Pos_26  temp1312 = ( ( * (  self4286 ) ) .f_cursor );
    temp1312 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors1091 ) ( (  self4286 ) ,  ( temp1312 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
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

static  struct Pos_26   own1321 (    struct Pos_26  x1252 ) {
    return (  x1252 );
}

struct env1322 {
    enum MoveDirection_1318  dir4249;
    ;
    ;
    struct Pos_26 *  prev4252;
    struct Pane_219 *  pane4247;
};

static  bool   is_dash_at_dash_line_dash_end1324 (    struct Pane_219 *  pane4229 ,    struct Pos_26  pos4231 ) {
    return (  eq399 ( ( (  i32_dash_size412 ) ( ( (  pos4231 ) .f_bi ) ) ) , ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  pane4229 ) ) .f_buf ) ,  ( (  pos4231 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1323 (    struct Pane_219 *  pane4234 ) {
    return ( (  is_dash_at_dash_line_dash_end1324 ) ( (  pane4234 ) ,  ( ( * (  pane4234 ) ) .f_cursor ) ) );
}

struct envunion1326 {
    enum Unit_8  (*fun) (  struct env1322*  );
    struct env1322 env;
};

static  enum Unit_8   advance1327 (   struct env1322* env ) {
    (* env->prev4252 ) = ( ( * ( env->pane4247 ) ) .f_cursor );
    enum MoveDirection_1318  dref4254 = ( env->dir4249 );
    switch (  dref4254 ) {
        case MoveDirection_1318_MoveFwd : {
            ( (  move_dash_right1135 ) ( ( env->pane4247 ) ) );
            break;
        }
        case MoveDirection_1318_MoveBwd : {
            ( (  move_dash_left1090 ) ( ( env->pane4247 ) ) );
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

static  bool   eq1330 (    enum CharType_1331  l3662 ,    enum CharType_1331  r3664 ) {
    struct Tuple2_1332  dref3665 = ( ( Tuple2_1332_Tuple2 ) ( (  l3662 ) ,  (  r3664 ) ) );
    if (  dref3665 .field0 == CharType_1331_CharSpace &&  dref3665 .field1 == CharType_1331_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3665 .field0 == CharType_1331_CharWord &&  dref3665 .field1 == CharType_1331_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3665 .field0 == CharType_1331_CharPunctuation &&  dref3665 .field1 == CharType_1331_CharPunctuation ) {
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

static  struct Char_65   min1337 (    struct Char_65  l1237 ,    struct Char_65  r1239 ) {
    if ( (  cmp930 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Char_65   max1338 (    struct Char_65  l1316 ,    struct Char_65  r1318 ) {
    if ( (  cmp930 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  bool   between1336 (    struct Char_65  c1338 ,    struct Char_65  l1340 ,    struct Char_65  r1342 ) {
    struct Char_65  from1343 = ( (  min1337 ) ( (  l1340 ) ,  (  r1342 ) ) );
    struct Char_65  to1344 = ( (  max1338 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp930 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp930 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  bool   is_dash_alpha1335 (    struct Char_65  c2401 ) {
    return ( ( (  cmp290 ( ( (  c2401 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1336 ) ( (  c2401 ) ,  ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1336 ) ( (  c2401 ) ,  ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1339 (    struct Char_65  c2404 ) {
    return ( (  eq399 ( ( (  c2404 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1336 ) ( (  c2404 ) ,  ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1334 (    struct Char_65  c2416 ) {
    return ( ( (  is_dash_alpha1335 ) ( (  c2416 ) ) ) || ( (  is_dash_digit1339 ) ( (  c2416 ) ) ) );
}

static  bool   is_dash_whitespace1340 (    struct Char_65  c2392 ) {
    return ( ( (  eq469 ( (  c2392 ) , ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq469 ( (  c2392 ) , ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq469 ( (  c2392 ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1331   char_dash_type1333 (    struct Char_65  c3668 ) {
    if ( ( ( ( (  is_dash_alphanumeric1334 ) ( (  c3668 ) ) ) || (  eq469 ( (  c3668 ) , ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq469 ( (  c3668 ) , ( (  from_dash_charlike346 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1331_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1340 ) ( (  c3668 ) ) ) ) {
            return ( CharType_1331_CharSpace );
        } else {
            return ( CharType_1331_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1329 (    struct Char_65  l3671 ,    struct Char_65  r3673 ) {
    return ( !  eq1330 ( ( (  char_dash_type1333 ) ( (  l3671 ) ) ) , ( (  char_dash_type1333 ) ( (  r3673 ) ) ) ) );
}

static  struct Char_65   or_dash_else1342 (    struct Maybe_297  self1734 ,    struct Char_65  alt1736 ) {
    struct Maybe_297  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_297_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_297_Just_t ) {
            return ( dref1737 .stuff .Maybe_297_Just_s .field0 );
        }
    }
}

static  struct Maybe_297   head1343 (    struct StrViewIter_458  it1143 ) {
    struct StrViewIter_458  temp1344 = ( (  into_dash_iter459 ) ( (  it1143 ) ) );
    return ( (  next463 ) ( ( &temp1344 ) ) );
}

static  struct Char_65   char_dash_at1341 (    struct Pane_219 *  pane4098 ,    struct Pos_26  pos4100 ) {
    struct StrView_27  line4101 = ( (  line1097 ) ( ( ( * (  pane4098 ) ) .f_buf ) ,  ( (  pos4100 ) .f_line ) ) );
    return ( (  or_dash_else1342 ) ( ( (  head1343 ) ( ( (  chars460 ) ( ( (  byte_dash_substr484 ) ( (  line4101 ) ,  ( (  i32_dash_size412 ) ( ( (  pos4100 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1130 ) ( (  line4101 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_8   print1346 (    struct StrView_27  s1703 ) {
    ( (  for_dash_each773 ) ( ( (  chars460 ) ( (  s1703 ) ) ) ,  (  printf_dash_char336 ) ) );
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

static  bool   reached_dash_target1328 (    struct Pane_219 *  pane4239 ,    enum MoveTarget_1319  target4241 ,    struct Pos_26  prev4243 ) {
    return ( {  enum MoveTarget_1319  dref4244 = (  target4241 ) ;  dref4244 == MoveTarget_1319_NextWordStart ? ( ( (  is_dash_word_dash_boundary1329 ) ( ( (  char_dash_at1341 ) ( (  pane4239 ) ,  (  prev4243 ) ) ) ,  ( (  char_dash_at1341 ) ( (  pane4239 ) ,  ( ( * (  pane4239 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1330 ( ( (  char_dash_type1333 ) ( ( (  char_dash_at1341 ) ( (  pane4239 ) ,  ( ( * (  pane4239 ) ) .f_cursor ) ) ) ) ) , ( CharType_1331_CharSpace ) ) ) ) ) :  dref4244 == MoveTarget_1319_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1329 ) ( ( (  char_dash_at1341 ) ( (  pane4239 ) ,  (  prev4243 ) ) ) ,  ( (  char_dash_at1341 ) ( (  pane4239 ) ,  ( ( * (  pane4239 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1330 ( ( (  char_dash_type1333 ) ( ( (  char_dash_at1341 ) ( (  pane4239 ) ,  (  prev4243 ) ) ) ) ) , ( CharType_1331_CharSpace ) ) ) ) ) : ( (  todo1345 ) ( ) ) ; } );
}

struct envunion1350 {
    enum Unit_8  (*fun) (  struct env1322*  );
    struct env1322 env;
};

struct envunion1352 {
    enum Unit_8  (*fun) (  struct env1322*  );
    struct env1322 env;
};

static  enum Unit_8   advance_dash_word1317 (    struct Pane_219 *  pane4247 ,    enum MoveDirection_1318  dir4249 ,    enum MoveTarget_1319  target4251 ) {
    struct Pos_26  temp1320 = ( (  own1321 ) ( ( ( * (  pane4247 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4252 = ( &temp1320 );
    struct env1322 envinst1322 = {
        .dir4249 =  dir4249 ,
        .prev4252 =  prev4252 ,
        .pane4247 =  pane4247 ,
    };
    struct Pos_26  sel4255 = ( ( * (  pane4247 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4256 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1323 ) ( (  pane4247 ) ) );
    struct envunion1326  temp1325 = ( (struct envunion1326){ .fun = (  enum Unit_8  (*) (  struct env1322*  ) )advance1327 , .env =  envinst1322 } );
    ( temp1325.fun ( &temp1325.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4256 ) || ( (  reached_dash_target1328 ) ( (  pane4247 ) ,  (  target4251 ) ,  ( * (  prev4252 ) ) ) ) ) ) {
        sel4255 = ( ( * (  pane4247 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1323 ) ( (  pane4247 ) ) ) ) {
        if ( (  eq557 ( ( ( * (  pane4247 ) ) .f_cursor ) , ( * (  prev4252 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1350  temp1349 = ( (struct envunion1350){ .fun = (  enum Unit_8  (*) (  struct env1322*  ) )advance1327 , .env =  envinst1322 } );
        ( temp1349.fun ( &temp1349.env ) );
        sel4255 = ( ( * (  pane4247 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1352  temp1351 = ( (struct envunion1352){ .fun = (  enum Unit_8  (*) (  struct env1322*  ) )advance1327 , .env =  envinst1322 } );
        ( temp1351.fun ( &temp1351.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1323 ) ( (  pane4247 ) ) ) || ( (  reached_dash_target1328 ) ( (  pane4247 ) ,  (  target4251 ) ,  ( * (  prev4252 ) ) ) ) ) ) {
            enum MoveDirection_1318  dref4257 = (  dir4249 );
            switch (  dref4257 ) {
                case MoveDirection_1318_MoveFwd : {
                    ( (  move_dash_left1090 ) ( (  pane4247 ) ) );
                    break;
                }
                case MoveDirection_1318_MoveBwd : {
                    ( (  move_dash_right1135 ) ( (  pane4247 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq557 ( ( * (  prev4252 ) ) , ( ( * (  pane4247 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1126 ) ( (  pane4247 ) ,  ( ( Maybe_34_Just ) ( (  sel4255 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1357 (    struct List_30 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1360 (    struct List_30 *  list2003 ,    size_t  i2005 ) {
    if ( ( (  cmp290 ( (  i2005 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2005 ) , ( ( * (  list2003 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2005 ) ) ) ,  ( (  from_dash_string199 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2003 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1241 ) ( ( ( * (  list2003 ) ) .f_elements ) ,  (  i2005 ) ) );
}

static  struct Changeset_32   get1359 (    struct List_30 *  list2013 ,    size_t  i2015 ) {
    return ( * ( (  get_dash_ptr1360 ) ( (  list2013 ) ,  (  i2015 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1358 (    struct List_30  self2083 ,    size_t  k2085 ) {
    return ( (  get1359 ) ( ( & (  self2083 ) ) ,  (  k2085 ) ) );
}

static  struct Action_25   undefined1369 (  ) {
    struct Action_25  temp1370;
    return (  temp1370 );
}

static  struct Action_25   or_dash_fail1368 (    struct Maybe_1195  x1727 ,    struct StrConcat_321  errmsg1729 ) {
    struct Maybe_1195  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1195_None_t ) {
        ( (  panic323 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1369 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1195_Just_t ) {
            return ( dref1730 .stuff .Maybe_1195_Just_s .field0 );
        }
    }
}

static  struct Maybe_1195   try_dash_get1371 (    struct Slice_24  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp290 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
    }
    struct Action_25 *  elem_dash_ptr1768 = ( (  offset_dash_ptr1193 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_1195_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  struct Action_25   get1367 (    struct Slice_24  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail1368 ) ( ( (  try_dash_get1371 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1366 (    struct Slice_24  self1869 ,    size_t  idx1871 ) {
    return ( (  get1367 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  struct Action_25   last1365 (    struct Slice_24  s1937 ) {
    if ( (  eq399 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1366 ( (  s1937 ) , (  op_dash_sub289 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1372 (    struct List_23  l2128 ) {
    struct Action_25 *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

static  struct Maybe_206   redo1356 (   struct env123* env ,    struct TextBuf_104 *  self3861 ) {
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3861 ) ) );
    struct Actions_105 *  actions3862 = ( & ( ( * (  self3861 ) ) .f_actions ) );
    if ( (  cmp290 ( ( ( * (  actions3862 ) ) .f_cur ) , ( (  size1357 ) ( ( & ( ( * (  actions3862 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_206) { .tag = Maybe_206_None_t } );
    }
    struct Changeset_32  changeset3863 = (  elem_dash_get1358 ( ( ( * (  actions3862 ) ) .f_list ) , ( ( * (  actions3862 ) ) .f_cur ) ) );
    struct Pos_26  temp1361;
    struct Pos_26  to_dash_fwd3864 = (  temp1361 );
    struct SliceIter_1188  temp1362 =  into_dash_iter1190 ( ( (  changeset3863 ) .f_parts ) );
    while (true) {
        struct Maybe_1195  __cond1363 =  next1196 (&temp1362);
        if (  __cond1363 .tag == 0 ) {
            break;
        }
        struct Action_25  action3866 =  __cond1363 .stuff .Maybe_1195_Just_s .field0;
        struct envunion124  temp1364 = ( (struct envunion124){ .fun = (  struct Pos_26  (*) (  struct env119*  ,    struct TextBuf_104 *  ,    struct Action_25  ) )action_dash_fwd1302 , .env =  env->envinst119 } );
        to_dash_fwd3864 = ( temp1364.fun ( &temp1364.env ,  (  self3861 ) ,  (  action3866 ) ) );
    }
    (*  actions3862 ) .f_cur = (  op_dash_add311 ( ( ( * (  actions3862 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action3867 = ( (  last1365 ) ( ( (  to_dash_slice1372 ) ( ( (  changeset3863 ) .f_parts ) ) ) ) );
    if ( (  cmp290 ( ( (  num_dash_bytes1130 ) ( ( (  last_dash_action3867 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3868 = ( (  left_dash_pos1129 ) ( (  self3861 ) ,  (  to_dash_fwd3864 ) ) );
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3868 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action3867 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3864 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1374 {
    struct Pane_219 *  self4323;
    ;
};

struct envunion1375 {
    enum Unit_8  (*fun) (  struct env1374*  ,    struct Cursors_33  );
    struct env1374 env;
};

static  enum Unit_8   if_dash_just1373 (    struct Maybe_206  x1292 ,   struct envunion1375  fun1294 ) {
    struct Maybe_206  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_206_Just_t ) {
        struct envunion1375  temp1376 = (  fun1294 );
        ( temp1376.fun ( &temp1376.env ,  ( dref1295 .stuff .Maybe_206_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_206_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1377 (   struct env1374* env ,    struct Cursors_33  cursors4326 ) {
    ( (  set_dash_cursors1091 ) ( ( env->self4323 ) ,  ( (  cursors4326 ) .f_cur ) ,  ( (  cursors4326 ) .f_sel ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1354 (   struct env211* env ,    struct Pane_219 *  self4323 ) {
    struct envunion212  temp1355 = ( (struct envunion212){ .fun = (  struct Maybe_206  (*) (  struct env123*  ,    struct TextBuf_104 *  ) )redo1356 , .env =  env->envinst123 } );
    struct Maybe_206  mcursors4324 = ( temp1355.fun ( &temp1355.env ,  ( ( * (  self4323 ) ) .f_buf ) ) );
    struct env1374 envinst1374 = {
        .self4323 =  self4323 ,
    };
    ( (  if_dash_just1373 ) ( (  mcursors4324 ) ,  ( (struct envunion1375){ .fun = (  enum Unit_8  (*) (  struct env1374*  ,    struct Cursors_33  ) )lam1377 , .env =  envinst1374 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1383 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1383   into_dash_iter1384 (    struct SliceReversedIter_1383  self1900 ) {
    return (  self1900 );
}

static  struct SliceReversedIter_1383   reversed1385 (    struct Slice_24  slice1897 ) {
    return ( (struct SliceReversedIter_1383) { .f_slice = (  slice1897 ) , .f_current_dash_offset = ( (  slice1897 ) .f_count ) } );
}

static  struct Maybe_1195   next1387 (    struct SliceReversedIter_1383 *  self1903 ) {
    size_t  off1904 = ( ( * (  self1903 ) ) .f_current_dash_offset );
    if ( (  eq399 ( (  off1904 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1195) { .tag = Maybe_1195_None_t } );
    }
    (*  self1903 ) .f_current_dash_offset = (  op_dash_sub289 ( (  off1904 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1195_Just ) ( (  elem_dash_get1366 ( ( ( * (  self1903 ) ) .f_slice ) , ( ( * (  self1903 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1389 (   struct env117* env ,    struct TextBuf_104 *  self3829 ,    struct Action_25  action3831 ) {
    struct envunion118  temp1390 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env100*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action553 , .env =  env->envinst100 } );
    ( temp1390.fun ( &temp1390.env ,  (  self3829 ) ,  ( (  action3831 ) .f_from ) ,  ( (  action3831 ) .f_to_dash_fwd ) ,  ( (  action3831 ) .f_bwd ) ) );
    return ( (  action3831 ) .f_to_dash_bwd );
}

static  struct Maybe_206   undo1381 (   struct env121* env ,    struct TextBuf_104 *  self3854 ) {
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3854 ) ) );
    struct Actions_105 *  actions3855 = ( & ( ( * (  self3854 ) ) .f_actions ) );
    if ( (  eq399 ( ( ( * (  actions3855 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_206) { .tag = Maybe_206_None_t } );
    }
    (*  actions3855 ) .f_cur = (  op_dash_sub289 ( ( ( * (  actions3855 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset3856 = (  elem_dash_get1358 ( ( ( * (  actions3855 ) ) .f_list ) , ( ( * (  actions3855 ) ) .f_cur ) ) );
    struct SliceReversedIter_1383  temp1382 =  into_dash_iter1384 ( ( (  reversed1385 ) ( ( (  to_dash_slice1372 ) ( ( (  changeset3856 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1195  __cond1386 =  next1387 (&temp1382);
        if (  __cond1386 .tag == 0 ) {
            break;
        }
        struct Action_25  action3858 =  __cond1386 .stuff .Maybe_1195_Just_s .field0;
        struct envunion122  temp1388 = ( (struct envunion122){ .fun = (  struct Pos_26  (*) (  struct env117*  ,    struct TextBuf_104 *  ,    struct Action_25  ) )action_dash_bwd1389 , .env =  env->envinst117 } );
        ( temp1388.fun ( &temp1388.env ,  (  self3854 ) ,  (  action3858 ) ) );
    }
    return ( ( Maybe_206_Just ) ( ( (  changeset3856 ) .f_before_dash_cursors ) ) );
}

struct env1392 {
    struct Pane_219 *  self4317;
    ;
};

struct envunion1393 {
    enum Unit_8  (*fun) (  struct env1392*  ,    struct Cursors_33  );
    struct env1392 env;
};

static  enum Unit_8   if_dash_just1391 (    struct Maybe_206  x1292 ,   struct envunion1393  fun1294 ) {
    struct Maybe_206  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_206_Just_t ) {
        struct envunion1393  temp1394 = (  fun1294 );
        ( temp1394.fun ( &temp1394.env ,  ( dref1295 .stuff .Maybe_206_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_206_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1395 (   struct env1392* env ,    struct Cursors_33  cursors4320 ) {
    ( (  set_dash_cursors1091 ) ( ( env->self4317 ) ,  ( (  cursors4320 ) .f_cur ) ,  ( (  cursors4320 ) .f_sel ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1379 (   struct env209* env ,    struct Pane_219 *  self4317 ) {
    struct envunion210  temp1380 = ( (struct envunion210){ .fun = (  struct Maybe_206  (*) (  struct env121*  ,    struct TextBuf_104 *  ) )undo1381 , .env =  env->envinst121 } );
    struct Maybe_206  mcursors4318 = ( temp1380.fun ( &temp1380.env ,  ( ( * (  self4317 ) ) .f_buf ) ) );
    struct env1392 envinst1392 = {
        .self4317 =  self4317 ,
    };
    ( (  if_dash_just1391 ) ( (  mcursors4318 ) ,  ( (struct envunion1393){ .fun = (  enum Unit_8  (*) (  struct env1392*  ,    struct Cursors_33  ) )lam1395 , .env =  envinst1392 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_230   minmax1399 (    struct Pos_26  l1330 ,    struct Pos_26  r1332 ) {
    return ( (  cmp555 ( (  l1330 ) , (  r1332 ) ) == 0 ) ? ( ( Tuple2_230_Tuple2 ) ( (  l1330 ) ,  (  r1332 ) ) ) : ( ( Tuple2_230_Tuple2 ) ( (  r1332 ) ,  (  l1330 ) ) ) );
}

static  struct Pos_26   or_dash_else1400 (    struct Maybe_34  self1734 ,    struct Pos_26  alt1736 ) {
    struct Maybe_34  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_34_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_34_Just_t ) {
            return ( dref1737 .stuff .Maybe_34_Just_s .field0 );
        }
    }
}

static  struct Pos_26   fst1401 (    struct Tuple2_230  dref1254 ) {
    return ( dref1254 .field0 );
}

static  struct Pos_26   snd1402 (    struct Tuple2_230  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Tuple2_230   selection1398 (    struct Pane_219 *  self4329 ) {
    struct Tuple2_230  from_dash_to4330 = ( (  minmax1399 ) ( ( (  or_dash_else1400 ) ( ( ( * (  self4329 ) ) .f_sel ) ,  ( ( * (  self4329 ) ) .f_cursor ) ) ) ,  ( ( * (  self4329 ) ) .f_cursor ) ) );
    struct Pos_26  from4331 = ( (  fst1401 ) ( (  from_dash_to4330 ) ) );
    struct Pos_26  to4332 = ( (  right_dash_pos1136 ) ( ( ( * (  self4329 ) ) .f_buf ) ,  ( (  snd1402 ) ( (  from_dash_to4330 ) ) ) ) );
    return ( ( Tuple2_230_Tuple2 ) ( (  from4331 ) ,  (  to4332 ) ) );
}

struct env1405 {
    struct Editor_248 *  ed4442;
    ;
};

struct envunion1406 {
    enum Unit_8  (*fun) (  struct env1405*  ,    struct StrView_27  );
    struct env1405 env;
};

static  enum Unit_8   if_dash_just1404 (    struct Maybe_80  x1292 ,   struct envunion1406  fun1294 ) {
    struct Maybe_80  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_80_Just_t ) {
        struct envunion1406  temp1407 = (  fun1294 );
        ( temp1407.fun ( &temp1407.env ,  ( dref1295 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1408 (   struct env1405* env ,    struct StrView_27  cp4446 ) {
    ( (  free547 ) ( (  cp4446 ) ,  ( ( * ( env->ed4442 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1397 (   struct env233* env ,    struct Editor_248 *  ed4442 ) {
    struct Tuple2_230  from_dash_to4443 = ( (  selection1398 ) ( ( (  pane1134 ) ( (  ed4442 ) ) ) ) );
    struct envunion234  temp1403 = ( (struct envunion234){ .fun = (  struct StrView_27  (*) (  struct env125*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1223 , .env =  env->envinst125 } );
    struct StrView_27  cpd4444 = ( temp1403.fun ( &temp1403.env ,  ( ( ( * (  ed4442 ) ) .f_pane ) .f_buf ) ,  ( (  fst1401 ) ( (  from_dash_to4443 ) ) ) ,  ( (  snd1402 ) ( (  from_dash_to4443 ) ) ) ) );
    struct env1405 envinst1405 = {
        .ed4442 =  ed4442 ,
    };
    ( (  if_dash_just1404 ) ( ( ( * (  ed4442 ) ) .f_clipboard ) ,  ( (struct envunion1406){ .fun = (  enum Unit_8  (*) (  struct env1405*  ,    struct StrView_27  ) )lam1408 , .env =  envinst1405 } ) ) );
    (*  ed4442 ) .f_clipboard = ( ( Maybe_80_Just ) ( (  cpd4444 ) ) );
    return ( Unit_8_Unit );
}

struct env1413 {
    ;
    struct Pane_219 *  self4335;
};

struct envunion1414 {
    enum Unit_8  (*fun) (  struct env1413*  ,    struct Cursors_33  );
    struct env1413 env;
};

static  enum Unit_8   if_dash_just1412 (    struct Maybe_206  x1292 ,   struct envunion1414  fun1294 ) {
    struct Maybe_206  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_206_Just_t ) {
        struct envunion1414  temp1415 = (  fun1294 );
        ( temp1415.fun ( &temp1415.env ,  ( dref1295 .stuff .Maybe_206_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_206_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1416 (   struct env1413* env ,    struct Cursors_33  cursors4342 ) {
    ( (  set_dash_cursors1091 ) ( ( env->self4335 ) ,  ( (  cursors4342 ) .f_cur ) ,  ( (  cursors4342 ) .f_sel ) ,  ( CursorMovement_1092_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1410 (   struct env213* env ,    struct Pane_219 *  self4335 ,    struct Tuple2_230  pos_prime_s4337 ,    struct StrView_27  cp4339 ) {
    struct envunion214  temp1411 = ( (struct envunion214){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    struct Maybe_206  mcursors4340 = ( temp1411.fun ( &temp1411.env ,  ( ( * (  self4335 ) ) .f_buf ) ,  ( (  fst1401 ) ( (  pos_prime_s4337 ) ) ) ,  ( (  snd1402 ) ( (  pos_prime_s4337 ) ) ) ,  (  cp4339 ) ,  ( ( Maybe_206_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4335 ) ) .f_cursor ) , .f_sel = ( ( * (  self4335 ) ) .f_sel ) } ) ) ) ) );
    struct env1413 envinst1413 = {
        .self4335 =  self4335 ,
    };
    ( (  if_dash_just1412 ) ( (  mcursors4340 ) ,  ( (struct envunion1414){ .fun = (  enum Unit_8  (*) (  struct env1413*  ,    struct Cursors_33  ) )lam1416 , .env =  envinst1413 } ) ) );
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

static  struct StrBuilder_62   mk1428 (    enum CAllocator_10  al2818 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk439 ) ( (  al2818 ) ) ) } );
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
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2786;
};

struct envunion1436 {
    enum Unit_8  (*fun) (  struct env1435*  ,    struct Char_65  );
    struct env1435 env;
};

static  struct StrConcatIter_1432   into_dash_iter1438 (    struct StrConcatIter_1432  self1498 ) {
    return (  self1498 );
}

struct env1444 {
    ;
    size_t  base1211;
};

struct envunion1445 {
    size_t  (*fun) (  struct env1444*  ,    int32_t  ,    size_t  );
    struct env1444 env;
};

static  size_t   reduce1443 (    struct Range_150  iterable1094 ,    size_t  base1096 ,   struct envunion1445  fun1098 ) {
    size_t  x1099 = (  base1096 );
    struct RangeIter_153  it1100 = ( (  into_dash_iter154 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1101 = ( (  next156 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_155_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_155_Just_t ) {
                struct envunion1445  temp1446 = (  fun1098 );
                x1099 = ( temp1446.fun ( &temp1446.env ,  ( dref1101 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  size_t   lam1449 (   struct env1444* env ,    int32_t  item1215 ,    size_t  x1217 ) {
    return (  op_dash_mul405 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  size_t   pow1442 (    size_t  base1211 ,    int32_t  p1213 ) {
    struct env1444 envinst1444 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1443 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1213 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1445){ .fun = (  size_t  (*) (  struct env1444*  ,    int32_t  ,    size_t  ) )lam1449 , .env =  envinst1444 } ) ) );
}

static  uint8_t   cast1450 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_297   next1441 (    struct IntStrIter_1434 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    size_t  trim_dash_down1430 = ( (  pow1442 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1431 = (  op_dash_div342 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    size_t  upper_dash_mask1432 = (  op_dash_mul405 ( (  op_dash_div342 ( (  upper1431 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast1450 ) ( (  op_dash_sub289 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1433 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_297   next1440 (    struct StrConcatIter_1433 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1441 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1439 (    struct StrConcatIter_1432 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next1440 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1431 (    struct StrConcatIter_1432  iterable1075 ,   struct envunion1436  fun1077 ) {
    struct StrConcatIter_1432  temp1437 = ( (  into_dash_iter1438 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1432 *  it1078 = ( &temp1437 );
    while ( ( true ) ) {
        struct Maybe_297  dref1079 = ( (  next1439 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_297_Just_t ) {
                struct envunion1436  temp1451 = (  fun1077 );
                ( temp1451.fun ( &temp1451.env ,  ( dref1079 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1458 (    size_t  self1437 ) {
    if ( (  eq399 ( (  self1437 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp290 ( (  self1437 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div342 ( (  self1437 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1438 = (  op_dash_add159 ( (  digits1438 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1434   uint_dash_iter1457 (    size_t  int1444 ) {
    return ( (struct IntStrIter_1434) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits1458 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1434   chars1456 (    size_t  self1474 ) {
    return ( (  uint_dash_iter1457 ) ( (  self1474 ) ) );
}

static  struct StrConcatIter_1433   into_dash_iter1455 (    struct StrConcat_84  dref1505 ) {
    return ( (struct StrConcatIter_1433) { .f_left = ( (  chars460 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1456 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1433   chars1454 (    struct StrConcat_84  self1516 ) {
    return ( (  into_dash_iter1455 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1432   into_dash_iter1453 (    struct StrConcat_83  dref1505 ) {
    return ( (struct StrConcatIter_1432) { .f_left = ( (  chars1454 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1432   chars1452 (    struct StrConcat_83  self1516 ) {
    return ( (  into_dash_iter1453 ) ( (  self1516 ) ) );
}

static  enum Unit_8   write_dash_slice1463 (   struct env58* env ,    struct StrBuilder_62 *  builder2776 ,    struct Slice_11  s2778 ) {
    struct envunion59  temp1464 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all571 , .env =  env->envinst46 } );
    ( temp1464.fun ( &temp1464.env ,  ( & ( ( * (  builder2776 ) ) .f_chars ) ) ,  (  s2778 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_11   from_dash_char1465 (    struct Char_65  c1943 ,    uint8_t *  buf1945 ) {
    struct CharDestructured_337  dref1946 = ( (  destructure339 ) ( (  c1943 ) ) );
    if ( dref1946.tag == CharDestructured_337_Ref_t ) {
        return ( (struct Slice_11) { .f_ptr = ( ( dref1946 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1946 .stuff .CharDestructured_337_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1946.tag == CharDestructured_337_Scalar_t ) {
            if ( (  cmp170 ( ( ( dref1946 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) , (  from_dash_integral165 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1466 = ( (  from_dash_string57 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1466);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            (*  buf1945 ) = ( (  u32_dash_u8144 ) ( ( ( dref1946 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_11) { .f_ptr = (  buf1945 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_8   write_dash_char1461 (   struct env60* env ,    struct StrBuilder_62 *  builder2781 ,    struct Char_65  c2783 ) {
    struct envunion61  temp1462 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_11  ) )write_dash_slice1463 , .env =  env->envinst58 } );
    uint8_t  temp1468;
    uint8_t  temp1467 = (  temp1468 );
    ( temp1462.fun ( &temp1462.env ,  (  builder2781 ) ,  ( (  from_dash_char1465 ) ( (  c2783 ) ,  ( &temp1467 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1459 (   struct env1435* env ,    struct Char_65  c2790 ) {
    struct envunion64  temp1460 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1460.fun ( &temp1460.env ,  ( env->builder2786 ) ,  (  c2790 ) ) );
}

static  enum Unit_8   write1430 (   struct env67* env ,    struct StrBuilder_62 *  builder2786 ,    struct StrConcat_83  s2788 ) {
    struct env1435 envinst1435 = {
        .envinst60 = env->envinst60 ,
        .builder2786 =  builder2786 ,
    };
    ( (  for_dash_each1431 ) ( ( (  chars1452 ) ( (  s2788 ) ) ) ,  ( (struct envunion1436){ .fun = (  enum Unit_8  (*) (  struct env1435*  ,    struct Char_65  ) )lam1459 , .env =  envinst1435 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1472 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice1471 (    struct Slice_11  s1934 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr1472 ) ( ( (  s1934 ) .f_ptr ) ) ) , .f_count = ( (  s1934 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1470 (    struct StrBuilder_62 *  builder2824 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1471 ) ( ( (  subslice466 ) ( ( ( ( * (  builder2824 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2824 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1426 (   struct env81* env ,    struct StrConcat_83  s2844 ,    enum CAllocator_10  al2846 ) {
    struct StrBuilder_62  temp1427 = ( (  mk1428 ) ( (  al2846 ) ) );
    struct StrBuilder_62 *  sb2847 = ( &temp1427 );
    struct envunion82  temp1429 = ( (struct envunion82){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrConcat_83  ) )write1430 , .env =  env->envinst67 } );
    ( temp1429.fun ( &temp1429.env ,  (  sb2847 ) ,  (  s2844 ) ) );
    struct envunion76  temp1469 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    ( temp1469.fun ( &temp1469.env ,  (  sb2847 ) ,  ( (  nullchar544 ) ( ) ) ) );
    struct StrView_27  dynstr2848 = ( (  as_dash_str1470 ) ( (  sb2847 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2848 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub289 ( ( ( (  dynstr2848 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1424 (   struct env239* env ,    struct Editor_248 *  ed4454 ,    struct StrConcat_83  s4456 ) {
    ( (  reset_dash_msg1079 ) ( (  ed4454 ) ) );
    struct envunion240  temp1425 = ( (struct envunion240){ .fun = (  struct StrView_27  (*) (  struct env81*  ,    struct StrConcat_83  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1426 , .env =  env->envinst81 } );
    (*  ed4454 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1425.fun ( &temp1425.env ,  (  s4456 ) ,  ( ( * (  ed4454 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1475 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  );
    struct env213 env;
};

struct env1474 {
    ;
    struct env213 envinst213;
    ;
    ;
    ;
    ;
    struct Editor_248 *  ed4514;
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

static  enum Unit_8   if_dash_just1473 (    struct Maybe_80  x1292 ,   struct envunion1476  fun1294 ) {
    struct Maybe_80  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_80_Just_t ) {
        struct envunion1476  temp1477 = (  fun1294 );
        ( temp1477.fun ( &temp1477.env ,  ( dref1295 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1479 (    struct Pane_219 *  pane4265 ) {
    return ( {  struct Maybe_34  dref4266 = ( ( * (  pane4265 ) ) .f_sel ) ; dref4266.tag == Maybe_34_Just_t ? ( (  max556 ) ( ( ( * (  pane4265 ) ) .f_cursor ) ,  ( dref4266 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4265 ) ) .f_cursor ) ; } );
}

static  uint8_t   last1480 (    struct Slice_11  s1937 ) {
    if ( (  eq399 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get474 ( (  s1937 ) , (  op_dash_sub289 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1481 (    int32_t  x1353 ,    int32_t  mn1355 ,    int32_t  mx1357 ) {
    if ( (  cmp157 ( (  x1353 ) , (  mn1355 ) ) == 0 ) ) {
        return (  mn1355 );
    } else {
        if ( (  cmp157 ( (  x1353 ) , (  mx1357 ) ) == 2 ) ) {
            return (  mx1357 );
        } else {
            return (  x1353 );
        }
    }
}

static  enum Unit_8   lam1478 (   struct env1474* env ,    struct StrView_27  cp4525 ) {
    struct Pos_26  start4526 = ( (  max_dash_pos1479 ) ( ( (  pane1134 ) ( ( env->ed4514 ) ) ) ) );
    if ( (  eq303 ( ( (  last1480 ) ( ( (  cp4525 ) .f_contents ) ) ) , ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4526 = ( (struct Pos_26) { .f_line = ( (  clamp1481 ) ( (  op_dash_add159 ( ( (  start4526 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  num_dash_lines1137 ) ( ( ( * ( (  pane1134 ) ( ( env->ed4514 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
    } else {
        start4526 = ( (  right_dash_pos1136 ) ( ( ( ( * ( env->ed4514 ) ) .f_pane ) .f_buf ) ,  (  start4526 ) ) );
    }
    struct envunion1475  temp1482 = ( (struct envunion1475){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
    ( temp1482.fun ( &temp1482.env ,  ( (  pane1134 ) ( ( env->ed4514 ) ) ) ,  ( ( Tuple2_230_Tuple2 ) ( (  start4526 ) ,  (  start4526 ) ) ) ,  (  cp4525 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1485 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  );
    struct env213 env;
};

struct env1484 {
    ;
    struct Editor_248 *  ed4514;
    ;
    ;
    struct env213 envinst213;
    ;
    ;
    ;
    ;
};

struct envunion1486 {
    enum Unit_8  (*fun) (  struct env1484*  ,    struct StrView_27  );
    struct env1484 env;
};

static  enum Unit_8   if_dash_just1483 (    struct Maybe_80  x1292 ,   struct envunion1486  fun1294 ) {
    struct Maybe_80  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_80_Just_t ) {
        struct envunion1486  temp1487 = (  fun1294 );
        ( temp1487.fun ( &temp1487.env ,  ( dref1295 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1489 (    struct Pane_219 *  pane4260 ) {
    return ( {  struct Maybe_34  dref4261 = ( ( * (  pane4260 ) ) .f_sel ) ; dref4261.tag == Maybe_34_Just_t ? ( (  min554 ) ( ( ( * (  pane4260 ) ) .f_cursor ) ,  ( dref4261 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4260 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1488 (   struct env1484* env ,    struct StrView_27  cp4528 ) {
    struct Pos_26  start4529 = ( (  min_dash_pos1489 ) ( ( (  pane1134 ) ( ( env->ed4514 ) ) ) ) );
    if ( (  eq303 ( ( (  last1480 ) ( ( (  cp4528 ) .f_contents ) ) ) , ( (  ascii_dash_u8481 ) ( ( (  from_dash_charlike482 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1490 = (  start4529 );
        temp1490 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4529 = ( temp1490 );
    }
    struct envunion1485  temp1491 = ( (struct envunion1485){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
    ( temp1491.fun ( &temp1491.env ,  ( (  pane1134 ) ( ( env->ed4514 ) ) ) ,  ( ( Tuple2_230_Tuple2 ) ( (  start4529 ) ,  (  start4529 ) ) ) ,  (  cp4528 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1494 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  );
    struct env213 env;
};

struct env1493 {
    struct Editor_248 *  ed4514;
    ;
    ;
    ;
    struct env213 envinst213;
    ;
    ;
};

struct envunion1495 {
    enum Unit_8  (*fun) (  struct env1493*  ,    struct StrView_27  );
    struct env1493 env;
};

static  enum Unit_8   if_dash_just1492 (    struct Maybe_80  x1292 ,   struct envunion1495  fun1294 ) {
    struct Maybe_80  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_80_Just_t ) {
        struct envunion1495  temp1496 = (  fun1294 );
        ( temp1496.fun ( &temp1496.env ,  ( dref1295 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1497 (   struct env1493* env ,    struct StrView_27  cp4531 ) {
    struct Pos_26  start4532 = ( (  min_dash_pos1489 ) ( ( (  pane1134 ) ( ( env->ed4514 ) ) ) ) );
    struct Pos_26  end4533 = ( (  max_dash_pos1479 ) ( ( (  pane1134 ) ( ( env->ed4514 ) ) ) ) );
    struct envunion1494  temp1498 = ( (struct envunion1494){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
    struct Pos_26  temp1499 = (  end4533 );
    temp1499 .  f_bi = (  op_dash_add159 ( ( (  end4533 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( temp1498.fun ( &temp1498.env ,  ( (  pane1134 ) ( ( env->ed4514 ) ) ) ,  ( ( Tuple2_230_Tuple2 ) ( (  start4532 ) ,  ( temp1499 ) ) ) ,  (  cp4531 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1500 (    struct Pane_219 *  pane4279 ) {
    struct Pos_26  min_dash_pos4280 = ( (  min_dash_pos1489 ) ( (  pane4279 ) ) );
    struct Pos_26  max_dash_pos4281 = ( (  max_dash_pos1479 ) ( (  pane4279 ) ) );
    int32_t  max_dash_pos_dash_max4282 = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  pane4279 ) ) .f_buf ) ,  ( (  max_dash_pos4281 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq558 ( ( (  min_dash_pos4280 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq558 ( ( (  max_dash_pos4281 ) .f_bi ) , (  max_dash_pos_dash_max4282 ) ) ) ) ) ) {
        struct Pos_26  temp1501 = (  min_dash_pos4280 );
        temp1501 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4279 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1501 ) ) );
        struct Pos_26  temp1502 = (  max_dash_pos4281 );
        temp1502 .  f_bi = (  max_dash_pos_dash_max4282 );
        (*  pane4279 ) .f_cursor = ( temp1502 );
    } else {
        if ( (  cmp157 ( (  op_dash_add159 ( ( (  max_dash_pos4281 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1137 ) ( ( ( * (  pane4279 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1503 = (  min_dash_pos4280 );
        temp1503 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4279 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1503 ) ) );
        int32_t  next_dash_line4283 = (  op_dash_add159 ( ( (  max_dash_pos4281 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4279 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4283 ) , .f_bi = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( ( (  line1097 ) ( ( ( * (  pane4279 ) ) .f_buf ) ,  (  next_dash_line4283 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1504 (    struct Maybe_34  m1265 ) {
    struct Maybe_34  dref1266 = (  m1265 );
    if ( dref1266.tag == Maybe_34_None_t ) {
        return ( true );
    }
    else {
        if ( dref1266.tag == Maybe_34_Just_t ) {
            return ( false );
        }
    }
}

struct Maybe_1506 {
    enum {
        Maybe_1506_None_t,
        Maybe_1506_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_230  field0;
        } Maybe_1506_Just_s;
    } stuff;
};

static struct Maybe_1506 Maybe_1506_Just (  struct Tuple2_230  field0 ) {
    return ( struct Maybe_1506 ) { .tag = Maybe_1506_Just_t, .stuff = { .Maybe_1506_Just_s = { .field0 = field0 } } };
};

struct env1508 {
    ;
    ;
    struct Pane_219 *  pane4387;
    ;
    ;
    struct StrView_27  query4391;
};

struct envunion1510 {
    struct Maybe_246  (*fun) (  struct env1508*  ,    struct Pos_26  );
    struct env1508 env;
};

static  struct Maybe_246   find_dash_slice1512 (    struct Slice_11  haystack1914 ,    struct Slice_11  needle1916 ) {
    struct RangeIter_153  temp1513 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( ( (  haystack1914 ) .f_count ) ) ) , ( (  size_dash_i32329 ) ( ( (  needle1916 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1514 =  next156 (&temp1513);
        if (  __cond1514 .tag == 0 ) {
            break;
        }
        int32_t  i1918 =  __cond1514 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq486 ( ( (  subslice466 ) ( (  haystack1914 ) ,  ( (  i32_dash_size412 ) ( (  i1918 ) ) ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( (  i1918 ) ) ) , ( (  needle1916 ) .f_count ) ) ) ) ) , (  needle1916 ) ) ) ) {
            return ( ( Maybe_246_Just ) ( ( (  i32_dash_size412 ) ( (  i1918 ) ) ) ) );
        }
    }
    return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
}

static  struct Maybe_246   search_dash_on_dash_line1511 (   struct env1508* env ,    struct Pos_26  pos4394 ) {
    return ( (  find_dash_slice1512 ) ( ( ( (  byte_dash_substr_dash_from464 ) ( ( (  line1097 ) ( ( ( * ( env->pane4387 ) ) .f_buf ) ,  ( (  pos4394 ) .f_line ) ) ) ,  ( (  i32_dash_size412 ) ( ( (  pos4394 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4391 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1520 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1521 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1519 (    int32_t  l1230 ,    int32_t  d1232 ) {
    int32_t  r1233 = (  op_dash_div1520 ( (  l1230 ) , (  d1232 ) ) );
    int32_t  m1234 = (  op_dash_sub164 ( (  l1230 ) , (  op_dash_mul1521 ( (  r1233 ) , (  d1232 ) ) ) ) );
    if ( (  cmp157 ( (  m1234 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add159 ( (  d1232 ) , (  m1234 ) ) );
    } else {
        return (  m1234 );
    }
}

struct envunion1523 {
    struct Maybe_246  (*fun) (  struct env1508*  ,    struct Pos_26  );
    struct env1508 env;
};

static  struct Maybe_1506   search_dash_from1507 (    struct Pane_219 *  pane4387 ,    struct Pos_26  pos4389 ,    struct StrView_27  query4391 ) {
    struct env1508 envinst1508 = {
        .pane4387 =  pane4387 ,
        .query4391 =  query4391 ,
    };
    struct envunion1510  temp1509 = ( (struct envunion1510){ .fun = (  struct Maybe_246  (*) (  struct env1508*  ,    struct Pos_26  ) )search_dash_on_dash_line1511 , .env =  envinst1508 } );
    struct Maybe_246  dref4395 = ( temp1509.fun ( &temp1509.env ,  (  pos4389 ) ) );
    if ( dref4395.tag == Maybe_246_Just_t ) {
        struct Pos_26  temp1515 = (  pos4389 );
        temp1515 .  f_bi = (  op_dash_add159 ( ( (  pos4389 ) .f_bi ) , ( (  size_dash_i32329 ) ( ( dref4395 .stuff .Maybe_246_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4397 = ( temp1515 );
        struct Pos_26  temp1516 = (  pos4389 );
        temp1516 .  f_bi = (  op_dash_sub164 ( (  op_dash_add159 ( ( (  pos4389 ) .f_bi ) , ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4395 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4391 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4398 = ( temp1516 );
        return ( ( Maybe_1506_Just ) ( ( ( Tuple2_230_Tuple2 ) ( (  sel_dash_pos4397 ) ,  (  cur_dash_pos4398 ) ) ) ) );
    }
    else {
        if ( dref4395.tag == Maybe_246_None_t ) {
            int32_t  num_dash_lines4399 = ( (  num_dash_lines1137 ) ( ( ( * (  pane4387 ) ) .f_buf ) ) );
            struct RangeIter_153  temp1517 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4399 ) ) ) );
            while (true) {
                struct Maybe_155  __cond1518 =  next156 (&temp1517);
                if (  __cond1518 .tag == 0 ) {
                    break;
                }
                int32_t  i4401 =  __cond1518 .stuff .Maybe_155_Just_s .field0;
                int32_t  line4402 = ( (  mod1519 ) ( (  op_dash_add159 ( ( (  pos4389 ) .f_line ) , (  i4401 ) ) ) ,  (  num_dash_lines4399 ) ) );
                struct envunion1523  temp1522 = ( (struct envunion1523){ .fun = (  struct Maybe_246  (*) (  struct env1508*  ,    struct Pos_26  ) )search_dash_on_dash_line1511 , .env =  envinst1508 } );
                struct Maybe_246  dref4403 = ( temp1522.fun ( &temp1522.env ,  ( (struct Pos_26) { .f_line = (  line4402 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4403.tag == Maybe_246_Just_t ) {
                    struct Pos_26  sel_dash_pos4405 = ( (struct Pos_26) { .f_line = (  line4402 ) , .f_bi = ( (  size_dash_i32329 ) ( ( dref4403 .stuff .Maybe_246_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4406 = ( (struct Pos_26) { .f_line = (  line4402 ) , .f_bi = (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4403 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4391 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1506_Just ) ( ( ( Tuple2_230_Tuple2 ) ( (  sel_dash_pos4405 ) ,  (  cur_dash_pos4406 ) ) ) ) );
                }
                else {
                    if ( dref4403.tag == Maybe_246_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1506) { .tag = Maybe_1506_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1505 (    struct Editor_248 *  ed4498 ) {
    struct Maybe_80  dref4499 = ( ( * (  ed4498 ) ) .f_search_dash_term );
    if ( dref4499.tag == Maybe_80_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4499.tag == Maybe_80_Just_t ) {
            struct Maybe_1506  dref4501 = ( (  search_dash_from1507 ) ( ( (  pane1134 ) ( (  ed4498 ) ) ) ,  ( (  max_dash_pos1479 ) ( ( (  pane1134 ) ( (  ed4498 ) ) ) ) ) ,  ( dref4499 .stuff .Maybe_80_Just_s .field0 ) ) );
            if ( dref4501.tag == Maybe_1506_None_t ) {
            }
            else {
                if ( dref4501.tag == Maybe_1506_Just_t ) {
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4498 ) ) ) ,  ( dref4501 .stuff .Maybe_1506_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4501 .stuff .Maybe_1506_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_246   find_dash_last_dash_occurence_dash_of_dash_slice1526 (    struct Slice_11  haystack1921 ,    struct Slice_11  needle1923 ) {
    struct Maybe_246  occ1924 = ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    struct RangeIter_153  temp1527 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( ( (  haystack1921 ) .f_count ) ) ) , ( (  size_dash_i32329 ) ( ( (  needle1923 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1528 =  next156 (&temp1527);
        if (  __cond1528 .tag == 0 ) {
            break;
        }
        int32_t  i1926 =  __cond1528 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq486 ( ( (  subslice466 ) ( (  haystack1921 ) ,  ( (  i32_dash_size412 ) ( (  i1926 ) ) ) ,  (  op_dash_add311 ( ( (  i32_dash_size412 ) ( (  i1926 ) ) ) , ( (  needle1923 ) .f_count ) ) ) ) ) , (  needle1923 ) ) ) ) {
            occ1924 = ( ( Maybe_246_Just ) ( ( (  i32_dash_size412 ) ( (  i1926 ) ) ) ) );
        }
    }
    return (  occ1924 );
}

static  struct Maybe_1506   search_dash_back1525 (    struct Pane_219 *  pane4409 ,    struct Pos_26  pos4411 ,    struct StrView_27  query4413 ) {
    struct Maybe_246  dref4414 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1526 ) ( ( ( (  byte_dash_substr484 ) ( ( (  line1097 ) ( ( ( * (  pane4409 ) ) .f_buf ) ,  ( (  pos4411 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size412 ) ( ( (  pos4411 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4413 ) .f_contents ) ) );
    if ( dref4414.tag == Maybe_246_Just_t ) {
        struct Pos_26  temp1529 = (  pos4411 );
        temp1529 .  f_bi = ( (  size_dash_i32329 ) ( ( dref4414 .stuff .Maybe_246_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4416 = ( temp1529 );
        struct Pos_26  temp1530 = (  pos4411 );
        temp1530 .  f_bi = (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4414 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4413 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4417 = ( temp1530 );
        return ( ( Maybe_1506_Just ) ( ( ( Tuple2_230_Tuple2 ) ( (  sel_dash_pos4416 ) ,  (  cur_dash_pos4417 ) ) ) ) );
    }
    else {
        if ( dref4414.tag == Maybe_246_None_t ) {
            int32_t  num_dash_lines4418 = ( (  num_dash_lines1137 ) ( ( ( * (  pane4409 ) ) .f_buf ) ) );
            struct RangeIter_153  temp1531 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4418 ) ) ) );
            while (true) {
                struct Maybe_155  __cond1532 =  next156 (&temp1531);
                if (  __cond1532 .tag == 0 ) {
                    break;
                }
                int32_t  i4420 =  __cond1532 .stuff .Maybe_155_Just_s .field0;
                int32_t  line4421 = ( (  mod1519 ) ( (  op_dash_sub164 ( ( (  pos4411 ) .f_line ) , (  i4420 ) ) ) ,  (  num_dash_lines4418 ) ) );
                struct Maybe_246  dref4422 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1526 ) ( ( ( (  line1097 ) ( ( ( * (  pane4409 ) ) .f_buf ) ,  (  line4421 ) ) ) .f_contents ) ,  ( (  query4413 ) .f_contents ) ) );
                if ( dref4422.tag == Maybe_246_Just_t ) {
                    struct Pos_26  sel_dash_pos4424 = ( (struct Pos_26) { .f_line = (  line4421 ) , .f_bi = ( (  size_dash_i32329 ) ( ( dref4422 .stuff .Maybe_246_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4425 = ( (struct Pos_26) { .f_line = (  line4421 ) , .f_bi = (  op_dash_sub164 ( ( (  size_dash_i32329 ) ( (  op_dash_add311 ( ( dref4422 .stuff .Maybe_246_Just_s .field0 ) , ( (  num_dash_bytes1130 ) ( (  query4413 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1506_Just ) ( ( ( Tuple2_230_Tuple2 ) ( (  sel_dash_pos4424 ) ,  (  cur_dash_pos4425 ) ) ) ) );
                }
                else {
                    if ( dref4422.tag == Maybe_246_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1506) { .tag = Maybe_1506_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1524 (    struct Editor_248 *  ed4506 ) {
    struct Maybe_80  dref4507 = ( ( * (  ed4506 ) ) .f_search_dash_term );
    if ( dref4507.tag == Maybe_80_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4507.tag == Maybe_80_Just_t ) {
            struct Maybe_1506  dref4509 = ( (  search_dash_back1525 ) ( ( (  pane1134 ) ( (  ed4506 ) ) ) ,  ( (  min_dash_pos1489 ) ( ( (  pane1134 ) ( (  ed4506 ) ) ) ) ) ,  ( dref4507 .stuff .Maybe_80_Just_s .field0 ) ) );
            if ( dref4509.tag == Maybe_1506_None_t ) {
            }
            else {
                if ( dref4509.tag == Maybe_1506_Just_t ) {
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4506 ) ) ) ,  ( dref4509 .stuff .Maybe_1506_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4509 .stuff .Maybe_1506_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1536 (   struct env132* env ,    struct TextBuf_104 *  self3922 ,    struct Cursors_33  before_dash_cursors3924 ) {
    struct Actions_105 *  actions3925 = ( & ( ( * (  self3922 ) ) .f_actions ) );
    ( (  trim_dash_actions1169 ) ( (  actions3925 ) ) );
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3922 ) ) );
    ( (  assert667 ) ( (  eq1238 ( ( ( ( * (  self3922 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_106_NoChangeset ) ) ) ,  ( (  from_dash_string199 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al3926 = ( ( * (  self3922 ) ) .f_al );
    struct Changeset_32  temp1537 = ( (struct Changeset_32) { .f_parts = ( (  mk1267 ) ( (  al3926 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3924 ) } );
    struct Changeset_32 *  changeset3927 = ( &temp1537 );
    struct envunion133  temp1538 = ( (struct envunion133){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1278 , .env =  env->envinst28 } );
    ( temp1538.fun ( &temp1538.env ,  ( & ( ( * (  actions3925 ) ) .f_list ) ) ,  ( * (  changeset3927 ) ) ) );
    (*  actions3925 ) .f_input_dash_changeset = ( ChangesetInputType_106_CustomChangeset );
    (*  actions3925 ) .f_cur = (  op_dash_add311 ( ( ( * (  actions3925 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1195   head1544 (    struct List_23  it1143 ) {
    struct SliceIter_1188  temp1545 = ( (  into_dash_iter1190 ) ( (  it1143 ) ) );
    return ( (  next1196 ) ( ( &temp1545 ) ) );
}

static  bool   null1543 (    struct List_23  it1152 ) {
    struct Maybe_1195  dref1153 = ( (  head1544 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_1195_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1542 (    struct TextBuf_104 *  self3930 ) {
    ( (  flush_dash_insert_dash_action1144 ) ( (  self3930 ) ) );
    struct Actions_105 *  actions3931 = ( & ( ( * (  self3930 ) ) .f_actions ) );
    if ( ( (  null1543 ) ( ( ( * ( (  last_dash_ptr1240 ) ( ( (  to_dash_slice1242 ) ( ( ( * (  actions3931 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3931 ) .f_cur = (  op_dash_sub289 ( ( ( * (  actions3931 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3931 ) .f_input_dash_changeset = ( ChangesetInputType_106_NoChangeset );
        ( (  trim_dash_actions1169 ) ( (  actions3931 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1547 (    struct Maybe_34  x1276 ,    struct Pos_26 (*  fun1278 )(    struct Pos_26  ) ) {
    struct Maybe_34  dref1279 = (  x1276 );
    if ( dref1279.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1279.tag == Maybe_34_Just_t ) {
            return ( ( Maybe_34_Just ) ( ( (  fun1278 ) ( ( dref1279 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1548 (    struct Pos_26  sel4354 ) {
    struct Pos_26  temp1549 = (  sel4354 );
    temp1549 .  f_bi = (  op_dash_add159 ( ( (  sel4354 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1549 );
}

static  enum Unit_8   indent_dash_selection1534 (   struct env217* env ,    struct Pane_219 *  self4350 ) {
    struct envunion222  temp1535 = ( (struct envunion222){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_104 *  ,    struct Cursors_33  ) )begin_dash_changeset1536 , .env =  env->envinst132 } );
    ( temp1535.fun ( &temp1535.env ,  ( ( * (  self4350 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4350 ) ) .f_cursor ) , .f_sel = ( ( * (  self4350 ) ) .f_sel ) } ) ) );
    struct RangeIter_153  temp1539 =  into_dash_iter154 ( ( (  to163 ) ( ( ( (  min_dash_pos1489 ) ( (  self4350 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1479 ) ( (  self4350 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_155  __cond1540 =  next156 (&temp1539);
        if (  __cond1540 .tag == 0 ) {
            break;
        }
        int32_t  line4352 =  __cond1540 .stuff .Maybe_155_Just_s .field0;
        struct envunion218  temp1541 = ( (struct envunion218){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at1309 , .env =  env->envinst215 } );
        ( temp1541.fun ( &temp1541.env ,  (  self4350 ) ,  (  line4352 ) ) );
    }
    ( (  end_dash_changeset1542 ) ( ( ( * (  self4350 ) ) .f_buf ) ) );
    struct Pos_26  temp1546 = ( ( * (  self4350 ) ) .f_cursor );
    temp1546 .  f_bi = (  op_dash_add159 ( ( ( ( * (  self4350 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors1091 ) ( (  self4350 ) ,  ( temp1546 ) ,  ( (  fmap_dash_maybe1547 ) ( ( ( * (  self4350 ) ) .f_sel ) ,  (  lam1548 ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1560 {
    ;
    ;
    bool  last_dash_char_dash_was_dash_tab4359;
};

struct envunion1561 {
    struct Pos_26  (*fun) (  struct env1560*  ,    struct Pos_26  );
    struct env1560 env;
};

static  struct Maybe_34   fmap_dash_maybe1559 (    struct Maybe_34  x1276 ,   struct envunion1561  fun1278 ) {
    struct Maybe_34  dref1279 = (  x1276 );
    if ( dref1279.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1279.tag == Maybe_34_Just_t ) {
            struct envunion1561  temp1562 = (  fun1278 );
            return ( ( Maybe_34_Just ) ( ( temp1562.fun ( &temp1562.env ,  ( dref1279 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1563 (   struct env1560* env ,    struct Pos_26  sel4363 ) {
    struct Pos_26  temp1564 = (  sel4363 );
    temp1564 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4359 ) ? (  op_dash_sub164 ( ( (  sel4363 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4363 ) .f_bi ) );
    return ( temp1564 );
}

static  enum Unit_8   dedent_dash_selection1551 (   struct env223* env ,    struct Pane_219 *  self4357 ) {
    struct envunion225  temp1552 = ( (struct envunion225){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_104 *  ,    struct Cursors_33  ) )begin_dash_changeset1536 , .env =  env->envinst132 } );
    ( temp1552.fun ( &temp1552.env ,  ( ( * (  self4357 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4357 ) ) .f_cursor ) , .f_sel = ( ( * (  self4357 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1553 = ( (  min_dash_pos1489 ) ( (  self4357 ) ) );
    temp1553 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4358 = (  eq469 ( ( (  char_dash_at1341 ) ( (  self4357 ) ,  ( temp1553 ) ) ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1554 = ( (  max_dash_pos1479 ) ( (  self4357 ) ) );
    temp1554 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4359 = (  eq469 ( ( (  char_dash_at1341 ) ( (  self4357 ) ,  ( temp1554 ) ) ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_153  temp1555 =  into_dash_iter154 ( ( (  to163 ) ( ( ( (  min_dash_pos1489 ) ( (  self4357 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1479 ) ( (  self4357 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_155  __cond1556 =  next156 (&temp1555);
        if (  __cond1556 .tag == 0 ) {
            break;
        }
        int32_t  line4361 =  __cond1556 .stuff .Maybe_155_Just_s .field0;
        if ( (  eq469 ( ( (  char_dash_at1341 ) ( (  self4357 ) ,  ( (struct Pos_26) { .f_line = (  line4361 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike346 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion224  temp1557 = ( (struct envunion224){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
            ( temp1557.fun ( &temp1557.env ,  ( ( * (  self4357 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4361 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4361 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1542 ) ( ( ( * (  self4357 ) ) .f_buf ) ) );
    struct Pos_26  temp1558 = ( ( * (  self4357 ) ) .f_cursor );
    temp1558 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4358 ) ? (  op_dash_sub164 ( ( ( ( * (  self4357 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4357 ) ) .f_cursor ) .f_bi ) );
    struct env1560 envinst1560 = {
        .last_dash_char_dash_was_dash_tab4359 =  last_dash_char_dash_was_dash_tab4359 ,
    };
    ( (  set_dash_cursors1091 ) ( (  self4357 ) ,  ( temp1558 ) ,  ( (  fmap_dash_maybe1559 ) ( ( ( * (  self4357 ) ) .f_sel ) ,  ( (struct envunion1561){ .fun = (  struct Pos_26  (*) (  struct env1560*  ,    struct Pos_26  ) )lam1563 , .env =  envinst1560 } ) ) ) ,  ( CursorMovement_1092_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1568 (  ) {
    int32_t  temp1569;
    return (  temp1569 );
}

static  int32_t   or_dash_fail1567 (    struct Maybe_155  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_155  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_155_None_t ) {
        ( (  panic1212 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1568 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_155_Just_t ) {
            return ( dref1730 .stuff .Maybe_155_Just_s .field0 );
        }
    }
}

struct env1572 {
    struct Pane_219 *  self4372;
    ;
};

struct envunion1573 {
    int32_t  (*fun) (  struct env1572*  ,    int32_t  );
    struct env1572 env;
};

struct Map_1571 {
    struct RangeIter_153  field0;
    struct envunion1573  field1;
};

static struct Map_1571 Map_1571_Map (  struct RangeIter_153  field0 , struct envunion1573  field1 ) {
    return ( struct Map_1571 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1571   into_dash_iter1575 (    struct Map_1571  self797 ) {
    return (  self797 );
}

static  struct Maybe_155   next1576 (    struct Map_1571 *  dref799 ) {
    struct Maybe_155  dref802 = ( (  next156 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_155_None_t ) {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_155_Just_t ) {
            struct envunion1573  temp1577 = ( (* dref799 ) .field1 );
            return ( ( Maybe_155_Just ) ( ( temp1577.fun ( &temp1577.env ,  ( dref802 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_155   reduce1574 (    struct Map_1571  iterable1094 ,    struct Maybe_155  base1096 ,    struct Maybe_155 (*  fun1098 )(    int32_t  ,    struct Maybe_155  ) ) {
    struct Maybe_155  x1099 = (  base1096 );
    struct Map_1571  it1100 = ( (  into_dash_iter1575 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1101 = ( (  next1576 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_155_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_155_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1578 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1578);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_155  temp1579;
    return (  temp1579 );
}

struct env1582 {
    ;
    int32_t  x1244;
};

struct envunion1583 {
    struct Maybe_155  (*fun) (  struct env1582*  ,    int32_t  );
    struct env1582 env;
};

static  struct Maybe_155   maybe1581 (    struct Maybe_155  x1283 ,   struct envunion1583  fun1285 ,    struct Maybe_155  default1287 ) {
    struct envunion1583  temp1584 = (  fun1285 );
    return ( {  struct Maybe_155  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_155_Just_t ? ( temp1584.fun ( &temp1584.env ,  ( dref1288 .stuff .Maybe_155_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  struct Maybe_155   lam1585 (   struct env1582* env ,    int32_t  lm1313 ) {
    return ( ( Maybe_155_Just ) ( ( (  min658 ) ( (  lm1313 ) ,  ( env->x1244 ) ) ) ) );
}

static  struct Maybe_155   lam1580 (    int32_t  x1244 ,    struct Maybe_155  last_dash_min1246 ) {
    struct env1582 envinst1582 = {
        .x1244 =  x1244 ,
    };
    return ( (  maybe1581 ) ( (  last_dash_min1246 ) ,  ( (struct envunion1583){ .fun = (  struct Maybe_155  (*) (  struct env1582*  ,    int32_t  ) )lam1585 , .env =  envinst1582 } ) ,  ( ( Maybe_155_Just ) ( (  x1244 ) ) ) ) );
}

static  struct Maybe_155   minimum1570 (    struct Map_1571  it1242 ) {
    return ( (  reduce1574 ) ( (  it1242 ) ,  ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) ,  (  lam1580 ) ) );
}

static  struct Map_1571   map1586 (    struct Range_150  iterable806 ,   struct envunion1573  fun808 ) {
    struct RangeIter_153  it809 = ( (  into_dash_iter154 ) ( (  iterable806 ) ) );
    return ( ( Map_1571_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  int32_t   lam1587 (   struct env1572* env ,    int32_t  ln4376 ) {
    return ( (  indent_dash_at_dash_line1146 ) ( ( env->self4372 ) ,  (  ln4376 ) ) );
}

struct env1589 {
    ;
    ;
    struct Pane_219 *  self4372;
};

struct envunion1590 {
    bool  (*fun) (  struct env1589*  ,    int32_t  );
    struct env1589 env;
};

struct env1592 {
    struct envunion1590  fun1127;
};

struct envunion1593 {
    bool  (*fun) (  struct env1592*  ,    int32_t  ,    bool  );
    struct env1592 env;
};

static  bool   reduce1591 (    struct Range_150  iterable1094 ,    bool  base1096 ,   struct envunion1593  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct RangeIter_153  it1100 = ( (  into_dash_iter154 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1101 = ( (  next156 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_155_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_155_Just_t ) {
                struct envunion1593  temp1594 = (  fun1098 );
                x1099 = ( temp1594.fun ( &temp1594.env ,  ( dref1101 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1595 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1595);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1596;
    return (  temp1596 );
}

static  bool   lam1597 (   struct env1592* env ,    int32_t  e1129 ,    bool  x1131 ) {
    struct envunion1590  temp1598 = ( env->fun1127 );
    return ( ( temp1598.fun ( &temp1598.env ,  (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1588 (    struct Range_150  it1125 ,   struct envunion1590  fun1127 ) {
    struct env1592 envinst1592 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1591 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1593){ .fun = (  bool  (*) (  struct env1592*  ,    int32_t  ,    bool  ) )lam1597 , .env =  envinst1592 } ) ) );
}

static  bool   is_dash_just1600 (    struct Maybe_1506  m1261 ) {
    struct Maybe_1506  dref1262 = (  m1261 );
    if ( dref1262.tag == Maybe_1506_None_t ) {
        return ( false );
    }
    else {
        if ( dref1262.tag == Maybe_1506_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1602 (    struct Char_65  c4304 ) {
    return ( ( !  eq469 ( (  c4304 ) , ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1340 ) ( (  c4304 ) ) ) );
}

static  struct Maybe_1506   line_dash_begins_dash_with_dash_comment1601 (    struct Pane_219 *  self4298 ,    int32_t  line4300 ) {
    int32_t  indent4301 = ( (  indent_dash_at_dash_line1146 ) ( (  self4298 ) ,  (  line4300 ) ) );
    if ( (  eq469 ( ( (  char_dash_at1341 ) ( (  self4298 ) ,  ( (  mk694 ) ( (  line4300 ) ,  (  indent4301 ) ) ) ) ) , ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4302 = (  op_dash_add159 ( (  indent4301 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1602 ) ( ( (  char_dash_at1341 ) ( (  self4298 ) ,  ( (  mk694 ) ( (  line4300 ) ,  (  i4302 ) ) ) ) ) ) ) ) {
            i4302 = (  op_dash_add159 ( (  i4302 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1506_Just ) ( ( ( Tuple2_230_Tuple2 ) ( ( (  mk694 ) ( (  line4300 ) ,  (  indent4301 ) ) ) ,  ( (  mk694 ) ( (  line4300 ) ,  (  i4302 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1506) { .tag = Maybe_1506_None_t } );
    }
}

static  bool   lam1599 (   struct env1589* env ,    int32_t  ln4379 ) {
    return ( (  is_dash_just1600 ) ( ( (  line_dash_begins_dash_with_dash_comment1601 ) ( ( env->self4372 ) ,  (  ln4379 ) ) ) ) );
}

static  struct Tuple2_230   undefined1608 (  ) {
    struct Tuple2_230  temp1609;
    return (  temp1609 );
}

static  struct Tuple2_230   or_dash_fail1607 (    struct Maybe_1506  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_1506  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1506_None_t ) {
        ( (  panic1212 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1608 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1506_Just_t ) {
            return ( dref1730 .stuff .Maybe_1506_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1566 (   struct env228* env ,    struct Pane_219 *  self4372 ) {
    int32_t  from_dash_line4373 = ( ( (  min_dash_pos1489 ) ( (  self4372 ) ) ) .f_line );
    int32_t  to_dash_line4374 = ( ( (  max_dash_pos1479 ) ( (  self4372 ) ) ) .f_line );
    struct env1572 envinst1572 = {
        .self4372 =  self4372 ,
    };
    int32_t  min_dash_indent4377 = ( (  or_dash_fail1567 ) ( ( (  minimum1570 ) ( ( (  map1586 ) ( ( (  to163 ) ( (  from_dash_line4373 ) ,  (  to_dash_line4374 ) ) ) ,  ( (struct envunion1573){ .fun = (  int32_t  (*) (  struct env1572*  ,    int32_t  ) )lam1587 , .env =  envinst1572 } ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1589 envinst1589 = {
        .self4372 =  self4372 ,
    };
    bool  all_dash_have_dash_comment4380 = ( (  all1588 ) ( ( (  to163 ) ( (  from_dash_line4373 ) ,  (  to_dash_line4374 ) ) ) ,  ( (struct envunion1590){ .fun = (  bool  (*) (  struct env1589*  ,    int32_t  ) )lam1599 , .env =  envinst1589 } ) ) );
    struct envunion231  temp1603 = ( (struct envunion231){ .fun = (  enum Unit_8  (*) (  struct env132*  ,    struct TextBuf_104 *  ,    struct Cursors_33  ) )begin_dash_changeset1536 , .env =  env->envinst132 } );
    ( temp1603.fun ( &temp1603.env ,  ( ( * (  self4372 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4372 ) ) .f_cursor ) , .f_sel = ( ( * (  self4372 ) ) .f_sel ) } ) ) );
    struct RangeIter_153  temp1604 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_line4373 ) ,  (  to_dash_line4374 ) ) ) );
    while (true) {
        struct Maybe_155  __cond1605 =  next156 (&temp1604);
        if (  __cond1605 .tag == 0 ) {
            break;
        }
        int32_t  line4382 =  __cond1605 .stuff .Maybe_155_Just_s .field0;
        struct Char_65  comment_dash_str4383 = ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4380 ) ) ) {
            ( (  set_dash_cursors1091 ) ( (  self4372 ) ,  ( (  mk694 ) ( (  line4382 ) ,  (  min_dash_indent4377 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
            struct envunion232  temp1606 = ( (struct envunion232){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
            ( temp1606.fun ( &temp1606.env ,  (  self4372 ) ,  ( (  from_dash_string199 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_230  tup4384 = ( (  or_dash_fail1607 ) ( ( (  line_dash_begins_dash_with_dash_comment1601 ) ( (  self4372 ) ,  (  line4382 ) ) ) ,  ( (  from_dash_string199 ) ( ( "(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion229  temp1610 = ( (struct envunion229){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
            ( temp1610.fun ( &temp1610.env ,  (  self4372 ) ,  ( ( Tuple2_230_Tuple2 ) ( ( (  fst1401 ) ( (  tup4384 ) ) ) ,  ( (  snd1402 ) ( (  tup4384 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1542 ) ( ( ( * (  self4372 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1089 (   struct env253* env ,    struct Editor_248 *  ed4514 ,    struct Key_269  key4516 ) {
    struct Key_269  dref4517 = (  key4516 );
    if ( dref4517.tag == Key_269_Char_t ) {
        if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4514 ) .f_running = ( false );
        } else {
            if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1090 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ) );
            } else {
                if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1135 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ) );
                } else {
                    if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1138 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1142 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( Mode_220_Insert ) ) );
                            } else {
                                if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1145 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ) );
                                    ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( Mode_220_Insert ) ) );
                                } else {
                                    if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1163 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ) );
                                        ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( Mode_220_Insert ) ) );
                                    } else {
                                        if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_219 *  pane4519 = ( (  pane1134 ) ( (  ed4514 ) ) );
                                            int32_t  indent4520 = ( (  indent_dash_at_dash_line1146 ) ( (  pane4519 ) ,  ( ( ( * (  pane4519 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1163 ) ( (  pane4519 ) ) );
                                            struct envunion258  temp1165 = ( (struct envunion258){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                                            ( temp1165.fun ( &temp1165.env ,  (  pane4519 ) ,  ( (  from_dash_charlike1228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1135 ) ( (  pane4519 ) ) );
                                            struct envunion256  temp1304 = ( (struct envunion256){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at_dash_current1305 , .env =  env->envinst226 } );
                                            ( temp1304.fun ( &temp1304.env ,  (  pane4519 ) ,  (  indent4520 ) ) );
                                            ( (  set_dash_mode1143 ) ( (  pane4519 ) ,  ( Mode_220_Insert ) ) );
                                        } else {
                                            if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_219 *  pane4521 = ( (  pane1134 ) ( (  ed4514 ) ) );
                                                int32_t  indent4522 = ( (  indent_dash_at_dash_line1146 ) ( (  pane4521 ) ,  ( ( ( * (  pane4521 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1311 ) ( (  pane4521 ) ) );
                                                struct envunion1314  temp1313 = ( (struct envunion1314){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                                                ( temp1313.fun ( &temp1313.env ,  (  pane4521 ) ,  ( (  from_dash_charlike1228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1316  temp1315 = ( (struct envunion1316){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at_dash_current1305 , .env =  env->envinst226 } );
                                                ( temp1315.fun ( &temp1315.env ,  (  pane4521 ) ,  (  indent4522 ) ) );
                                                ( (  set_dash_mode1143 ) ( (  pane4521 ) ,  ( Mode_220_Insert ) ) );
                                            } else {
                                                if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1317 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( MoveDirection_1318_MoveFwd ) ,  ( MoveTarget_1319_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1317 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( MoveDirection_1318_MoveFwd ) ,  ( MoveTarget_1319_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1317 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( MoveDirection_1318_MoveBwd ) ,  ( MoveTarget_1319_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion262  temp1353 = ( (struct envunion262){ .fun = (  enum Unit_8  (*) (  struct env211*  ,    struct Pane_219 *  ) )redo1354 , .env =  env->envinst211 } );
                                                                ( temp1353.fun ( &temp1353.env ,  ( (  pane1134 ) ( (  ed4514 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion261  temp1378 = ( (struct envunion261){ .fun = (  enum Unit_8  (*) (  struct env209*  ,    struct Pane_219 *  ) )undo1379 , .env =  env->envinst209 } );
                                                                    ( temp1378.fun ( &temp1378.env ,  ( (  pane1134 ) ( (  ed4514 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion255  temp1396 = ( (struct envunion255){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Editor_248 *  ) )copy_dash_selection_dash_to_dash_clipboard1397 , .env =  env->envinst233 } );
                                                                        ( temp1396.fun ( &temp1396.env ,  (  ed4514 ) ) );
                                                                        struct envunion254  temp1409 = ( (struct envunion254){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
                                                                        ( temp1409.fun ( &temp1409.env ,  ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( (  selection1398 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( Mode_220_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1418  temp1417 = ( (struct envunion1418){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Editor_248 *  ) )copy_dash_selection_dash_to_dash_clipboard1397 , .env =  env->envinst233 } );
                                                                            ( temp1417.fun ( &temp1417.env ,  (  ed4514 ) ) );
                                                                            struct envunion1420  temp1419 = ( (struct envunion1420){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_219 *  ,    struct Tuple2_230  ,    struct StrView_27  ) )replace_dash_selection1410 , .env =  env->envinst213 } );
                                                                            ( temp1419.fun ( &temp1419.env ,  ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( (  selection1398 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ) ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( Mode_220_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1422  temp1421 = ( (struct envunion1422){ .fun = (  enum Unit_8  (*) (  struct env233*  ,    struct Editor_248 *  ) )copy_dash_selection_dash_to_dash_clipboard1397 , .env =  env->envinst233 } );
                                                                                ( temp1421.fun ( &temp1421.env ,  (  ed4514 ) ) );
                                                                                size_t  bytes_dash_yanked4523 = ( (  num_dash_bytes1130 ) ( ( (  or_dash_else589 ) ( ( ( * (  ed4514 ) ) .f_clipboard ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion257  temp1423 = ( (struct envunion257){ .fun = (  enum Unit_8  (*) (  struct env239*  ,    struct Editor_248 *  ,    struct StrConcat_83  ) )set_dash_msg1424 , .env =  env->envinst239 } );
                                                                                ( temp1423.fun ( &temp1423.env ,  (  ed4514 ) ,  ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4523 ) ) ) ,  ( (  from_dash_string199 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1474 envinst1474 = {
                                                                                        .envinst213 = env->envinst213 ,
                                                                                        .ed4514 =  ed4514 ,
                                                                                    };
                                                                                    ( (  if_dash_just1473 ) ( ( ( * (  ed4514 ) ) .f_clipboard ) ,  ( (struct envunion1476){ .fun = (  enum Unit_8  (*) (  struct env1474*  ,    struct StrView_27  ) )lam1478 , .env =  envinst1474 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1484 envinst1484 = {
                                                                                            .ed4514 =  ed4514 ,
                                                                                            .envinst213 = env->envinst213 ,
                                                                                        };
                                                                                        ( (  if_dash_just1483 ) ( ( ( * (  ed4514 ) ) .f_clipboard ) ,  ( (struct envunion1486){ .fun = (  enum Unit_8  (*) (  struct env1484*  ,    struct StrView_27  ) )lam1488 , .env =  envinst1484 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1493 envinst1493 = {
                                                                                                .ed4514 =  ed4514 ,
                                                                                                .envinst213 = env->envinst213 ,
                                                                                            };
                                                                                            ( (  if_dash_just1492 ) ( ( ( * (  ed4514 ) ) .f_clipboard ) ,  ( (struct envunion1495){ .fun = (  enum Unit_8  (*) (  struct env1493*  ,    struct StrView_27  ) )lam1497 , .env =  envinst1493 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1500 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( Mode_220_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1504 ) ( ( ( ( * (  ed4514 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4514 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4514 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4514 ) .f_mode = ( ( EditorMode_249_Cmd ) ( ( ( * ( (  pane1134 ) ( (  ed4514 ) ) ) ) .f_cursor ) ,  ( (  mk1428 ) ( ( ( * (  ed4514 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4514 ) .f_mode = ( ( EditorMode_249_Search ) ( ( ( * ( (  pane1134 ) ( (  ed4514 ) ) ) ) .f_cursor ) ,  ( (  mk1428 ) ( ( ( * (  ed4514 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1505 ) ( (  ed4514 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1524 ) ( (  ed4514 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion263  temp1533 = ( (struct envunion263){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Pane_219 *  ) )indent_dash_selection1534 , .env =  env->envinst217 } );
                                                                                                                        ( temp1533.fun ( &temp1533.env ,  ( (  pane1134 ) ( (  ed4514 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq936 ( ( dref4517 .stuff .Key_269_Char_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion260  temp1550 = ( (struct envunion260){ .fun = (  enum Unit_8  (*) (  struct env223*  ,    struct Pane_219 *  ) )dedent_dash_selection1551 , .env =  env->envinst223 } );
                                                                                                                            ( temp1550.fun ( &temp1550.env ,  ( (  pane1134 ) ( (  ed4514 ) ) ) ) );
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
        if ( dref4517.tag == Key_269_Escape_t ) {
            ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  ( Mode_220_Normal ) ) );
        }
        else {
            if ( dref4517.tag == Key_269_Ctrl_t ) {
                if ( (  eq936 ( ( dref4517 .stuff .Key_269_Ctrl_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion259  temp1565 = ( (struct envunion259){ .fun = (  enum Unit_8  (*) (  struct env228*  ,    struct Pane_219 *  ) )toggle_dash_comment1566 , .env =  env->envinst228 } );
                    ( temp1565.fun ( &temp1565.env ,  ( (  pane1134 ) ( (  ed4514 ) ) ) ) );
                } else {
                    if ( (  eq936 ( ( dref4517 .stuff .Key_269_Ctrl_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1142 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq936 ( ( dref4517 .stuff .Key_269_Ctrl_s .field0 ) , ( (  from_dash_charlike482 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1138 ) ( ( (  pane1134 ) ( (  ed4514 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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

struct envunion1612 {
    enum Unit_8  (*fun) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_269  );
    struct env253 env;
};

static  enum Unit_8   backspace1616 (   struct env207* env ,    struct Pane_219 *  self4313 ) {
    struct Pos_26  prev_dash_cur4314 = ( ( * (  self4313 ) ) .f_cursor );
    ( (  move_dash_left1090 ) ( (  self4313 ) ) );
    struct envunion208  temp1617 = ( (struct envunion208){ .fun = (  struct Maybe_206  (*) (  struct env127*  ,    struct TextBuf_104 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_206  ) )change1168 , .env =  env->envinst127 } );
    ( temp1617.fun ( &temp1617.env ,  ( ( * (  self4313 ) ) .f_buf ) ,  ( ( * (  self4313 ) ) .f_cursor ) ,  (  prev_dash_cur4314 ) ,  ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_206) { .tag = Maybe_206_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1619 {
    char _arr [1];
};

static  char *   cast1620 (    struct Array_1619 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_950   as_dash_slice1618 (    struct Array_1619 *  arr2285 ) {
    return ( (struct Slice_950) { .f_ptr = ( (  cast1620 ) ( (  arr2285 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1619   from_dash_listlike1622 (    struct Array_1619  self330 ) {
    return (  self330 );
}

struct envunion1624 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  );
    struct env204 env;
};

struct Scanner_1627 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1627   mk_dash_from_dash_strview1629 (    struct StrView_27  s3208 ) {
    return ( (struct Scanner_1627) { .f_s = (  s3208 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1635 {
    struct StrViewIter_458  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1634 {
    struct TakeWhile_1635  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1634 Map_1634_Map (  struct TakeWhile_1635  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1634 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1634   into_dash_iter1637 (    struct Map_1634  self797 ) {
    return (  self797 );
}

static  struct Maybe_297   next1639 (    struct TakeWhile_1635 *  self965 ) {
    struct Maybe_297  mx966 = ( (  next463 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_297  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1638 (    struct Map_1634 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1639 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1636 (    struct Map_1634  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1634  it1100 = ( (  into_dash_iter1637 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1101 = ( (  next1638 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_246_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_246_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1640 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1640);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1641;
    return (  temp1641 );
}

static  size_t   lam1642 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add311 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1633 (    struct Map_1634  it1111 ) {
    return ( (  reduce1636 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1642 ) ) );
}

static  struct TakeWhile_1635   into_dash_iter1644 (    struct TakeWhile_1635  self962 ) {
    return (  self962 );
}

static  struct Map_1634   map1643 (    struct TakeWhile_1635  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1635  it809 = ( (  into_dash_iter1644 ) ( (  iterable806 ) ) );
    return ( ( Map_1634_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1635   take_dash_while1645 (    struct StrViewIter_458  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1635) { .f_it = ( (  into_dash_iter459 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1646 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1632 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1633 ) ( ( (  map1643 ) ( ( (  take_dash_while1645 ) ( ( (  chars460 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1646 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1631 (    struct Scanner_1627 *  sc3280 ,    bool (*  fun3282 )(    struct Char_65  ) ) {
    struct StrView_27  s3283 = ( (  take_dash_while1632 ) ( ( ( * (  sc3280 ) ) .f_s ) ,  (  fun3282 ) ) );
    (*  sc3280 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3280 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3283 ) ) ) ) );
    return (  s3283 );
}

static  enum Unit_8   drop_dash_str_dash_while1630 (    struct Scanner_1627 *  sc3286 ,    bool (*  fun3288 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1631 ) ( (  sc3286 ) ,  (  fun3288 ) ) );
    return ( Unit_8_Unit );
}

struct TakeWhile_1651 {
    struct StrViewIter_458  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1650 {
    struct TakeWhile_1651  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1650 Map_1650_Map (  struct TakeWhile_1651  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1650 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1650   into_dash_iter1653 (    struct Map_1650  self797 ) {
    return (  self797 );
}

static  struct Maybe_297   next1655 (    struct TakeWhile_1651 *  self965 ) {
    struct Maybe_297  mx966 = ( (  next463 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_297  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1654 (    struct Map_1650 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1655 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1652 (    struct Map_1650  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1650  it1100 = ( (  into_dash_iter1653 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1101 = ( (  next1654 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_246_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_246_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1656 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1656);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1657;
    return (  temp1657 );
}

static  size_t   lam1658 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add311 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1649 (    struct Map_1650  it1111 ) {
    return ( (  reduce1652 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1658 ) ) );
}

static  struct TakeWhile_1651   into_dash_iter1660 (    struct TakeWhile_1651  self962 ) {
    return (  self962 );
}

static  struct Map_1650   map1659 (    struct TakeWhile_1651  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1651  it809 = ( (  into_dash_iter1660 ) ( (  iterable806 ) ) );
    return ( ( Map_1650_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1651   take_dash_while1661 (    struct StrViewIter_458  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1651) { .f_it = ( (  into_dash_iter459 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1662 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1648 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1649 ) ( ( (  map1659 ) ( ( (  take_dash_while1661 ) ( ( (  chars460 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1662 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1647 (    struct Scanner_1627 *  sc3280 ,    bool (*  fun3282 )(    struct Char_65  ) ) {
    struct StrView_27  s3283 = ( (  take_dash_while1648 ) ( ( ( * (  sc3280 ) ) .f_s ) ,  (  fun3282 ) ) );
    (*  sc3280 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3280 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3283 ) ) ) ) );
    return (  s3283 );
}

static  bool   is_dash_not_dash_whitespace1663 (    struct Char_65  c2395 ) {
    return ( ! ( (  is_dash_whitespace1340 ) ( (  c2395 ) ) ) );
}

static  struct Maybe_297   head1665 (    struct StrView_27  it1143 ) {
    struct StrViewIter_458  temp1666 = ( (  into_dash_iter461 ) ( (  it1143 ) ) );
    return ( (  next463 ) ( ( &temp1666 ) ) );
}

static  bool   null1664 (    struct StrView_27  it1152 ) {
    struct Maybe_297  dref1153 = ( (  head1665 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_80   maybe1669 (    struct Maybe_80  x1283 ,    struct Maybe_80 (*  fun1285 )(    struct StrView_27  ) ,    struct Maybe_80  default1287 ) {
    return ( {  struct Maybe_80  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_80_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_80_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  bool   is_dash_none1670 (    struct Maybe_80  m1265 ) {
    struct Maybe_80  dref1266 = (  m1265 );
    if ( dref1266.tag == Maybe_80_None_t ) {
        return ( true );
    }
    else {
        if ( dref1266.tag == Maybe_80_Just_t ) {
            return ( false );
        }
    }
}

struct StrConcatIter_1679 {
    struct StrViewIter_458  f_left;
    struct AppendIter_1020  f_right;
};

struct env1680 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2786;
};

struct envunion1681 {
    enum Unit_8  (*fun) (  struct env1680*  ,    struct Char_65  );
    struct env1680 env;
};

static  struct StrConcatIter_1679   into_dash_iter1683 (    struct StrConcatIter_1679  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_297   next1684 (    struct StrConcatIter_1679 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1678 (    struct StrConcatIter_1679  iterable1075 ,   struct envunion1681  fun1077 ) {
    struct StrConcatIter_1679  temp1682 = ( (  into_dash_iter1683 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1679 *  it1078 = ( &temp1682 );
    while ( ( true ) ) {
        struct Maybe_297  dref1079 = ( (  next1684 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_297_Just_t ) {
                struct envunion1681  temp1685 = (  fun1077 );
                ( temp1685.fun ( &temp1685.env ,  ( dref1079 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1679   into_dash_iter1687 (    struct StrConcat_71  dref1505 ) {
    return ( (struct StrConcatIter_1679) { .f_left = ( (  chars460 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1679   chars1686 (    struct StrConcat_71  self1516 ) {
    return ( (  into_dash_iter1687 ) ( (  self1516 ) ) );
}

static  enum Unit_8   lam1688 (   struct env1680* env ,    struct Char_65  c2790 ) {
    struct envunion64  temp1689 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1689.fun ( &temp1689.env ,  ( env->builder2786 ) ,  (  c2790 ) ) );
}

static  enum Unit_8   write1677 (   struct env68* env ,    struct StrBuilder_62 *  builder2786 ,    struct StrConcat_71  s2788 ) {
    struct env1680 envinst1680 = {
        .envinst60 = env->envinst60 ,
        .builder2786 =  builder2786 ,
    };
    ( (  for_dash_each1678 ) ( ( (  chars1686 ) ( (  s2788 ) ) ) ,  ( (struct envunion1681){ .fun = (  enum Unit_8  (*) (  struct env1680*  ,    struct Char_65  ) )lam1688 , .env =  envinst1680 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1675 (   struct env69* env ,    struct StrBuilder_62 *  builder2793 ,    struct StrView_27  s2795 ) {
    struct envunion70  temp1676 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  ) )write1677 , .env =  env->envinst68 } );
    return ( temp1676.fun ( &temp1676.env ,  (  builder2793 ) ,  ( ( StrConcat_71_StrConcat ) ( (  s2795 ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1691 (  ) {
    struct StrView_27  temp1692;
    return (  temp1692 );
}

static  struct StrView_27   or_dash_fail1690 (    struct Maybe_80  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_80  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_80_None_t ) {
        ( (  panic1212 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1691 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_80_Just_t ) {
            return ( dref1730 .stuff .Maybe_80_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_458   chars1695 (    struct StrBuilder_62  s2838 ) {
    return ( (  into_dash_iter461 ) ( ( (  as_dash_str1470 ) ( ( & (  s2838 ) ) ) ) ) );
}

static  struct StrViewIter_458   chars1694 (    struct StrBuilder_62 *  self1547 ) {
    return ( (  chars1695 ) ( ( * (  self1547 ) ) ) );
}

static  int32_t   fprintf_dash_char1696 (    FILE *  file765 ,    struct Char_65  c767 ) {
    struct CharDestructured_337  dref768 = ( (  destructure339 ) ( (  c767 ) ) );
    if ( dref768.tag == CharDestructured_337_Ref_t ) {
        return ( ( fprintf ) ( (  file765 ) ,  ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32329 ) ( ( ( dref768 .stuff .CharDestructured_337_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref768 .stuff .CharDestructured_337_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref768.tag == CharDestructured_337_Scalar_t ) {
            if ( (  cmp170 ( ( ( dref768 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) , (  from_dash_integral165 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1697 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp1697);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( ( fprintf ) ( (  file765 ) ,  ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8144 ) ( ( ( dref768 .stuff .CharDestructured_337_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
}

static  bool   unreachable1698 (  ) {
    ( (  print1346 ) ( ( (  from_dash_string199 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1347 ) ( ) );
}

static  bool   try_dash_write_dash_contents1693 (    const char*  filename2984 ,    struct StrBuilder_62 *  contents2986 ) {
    FILE *  file2987 = ( ( fopen ) ( (  filename2984 ) ,  ( (  from_dash_charlike535 ) ( ( "w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null536 ) ( (  file2987 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_458  it2988 = ( (  chars1694 ) ( (  contents2986 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref2989 = ( (  next463 ) ( ( & (  it2988 ) ) ) );
        if ( dref2989.tag == Maybe_297_None_t ) {
            ( ( fclose ) ( (  file2987 ) ) );
            return ( true );
        }
        else {
            if ( dref2989.tag == Maybe_297_Just_t ) {
                int32_t  chars_dash_written2991 = ( (  fprintf_dash_char1696 ) ( (  file2987 ) ,  ( dref2989 .stuff .Maybe_297_Just_s .field0 ) ) );
                if ( (  cmp157 ( (  chars_dash_written2991 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1698 ) ( ) );
}

static  enum Unit_8   free1699 (    struct StrBuilder_62 *  builder2830 ) {
    ( (  free627 ) ( ( & ( ( * (  builder2830 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1700 (    struct Maybe_80  m1261 ) {
    struct Maybe_80  dref1262 = (  m1261 );
    if ( dref1262.tag == Maybe_80_None_t ) {
        return ( false );
    }
    else {
        if ( dref1262.tag == Maybe_80_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_246   write_dash_to_dash_file1668 (   struct env110* env ,    struct TextBuf_104 *  self3803 ,    struct Maybe_80  altname3805 ) {
    struct Maybe_80  filename3806 = ( (  maybe1669 ) ( (  altname3805 ) ,  ( Maybe_80_Just ) ,  ( ( * (  self3803 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1670 ) ( (  filename3806 ) ) ) ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    enum CAllocator_10  al3807 = ( ( * (  self3803 ) ) .f_al );
    struct StrBuilder_62  temp1671 = ( (  mk1428 ) ( (  al3807 ) ) );
    struct StrBuilder_62 *  sb3808 = ( &temp1671 );
    struct RangeIter_153  temp1672 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1137 ) ( (  self3803 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1673 =  next156 (&temp1672);
        if (  __cond1673 .tag == 0 ) {
            break;
        }
        int32_t  ln3810 =  __cond1673 .stuff .Maybe_155_Just_s .field0;
        struct envunion111  temp1674 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )writeln1675 , .env =  env->envinst69 } );
        ( temp1674.fun ( &temp1674.env ,  (  sb3808 ) ,  ( (  line1097 ) ( (  self3803 ) ,  (  ln3810 ) ) ) ) );
    }
    struct StrView_27  filename03811 = ( (  clone_dash_0505 ) ( ( (  or_dash_fail1690 ) ( (  filename3806 ) ,  ( (  from_dash_string199 ) ( ( "expect filename" ) ,  ( 15 ) ) ) ) ) ,  (  al3807 ) ) );
    bool  result3812 = ( (  try_dash_write_dash_contents1693 ) ( ( (  as_dash_const_dash_str545 ) ( (  filename03811 ) ) ) ,  (  sb3808 ) ) );
    ( (  free547 ) ( (  filename03811 ) ,  (  al3807 ) ) );
    ( (  free1699 ) ( (  sb3808 ) ) );
    if ( ( ! (  result3812 ) ) ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    if ( ( (  is_dash_just1700 ) ( (  altname3805 ) ) ) ) {
        struct Maybe_80  dref3813 = ( ( * (  self3803 ) ) .f_filename );
        if ( dref3813.tag == Maybe_80_Just_t ) {
            ( (  free547 ) ( ( dref3813 .stuff .Maybe_80_Just_s .field0 ) ,  (  al3807 ) ) );
        }
        else {
            if ( dref3813.tag == Maybe_80_None_t ) {
            }
        }
        (*  self3803 ) .f_filename = (  altname3805 );
    }
    return ( ( Maybe_246_Just ) ( ( (  num_dash_bytes1130 ) ( ( (  as_dash_str1470 ) ( (  sb3808 ) ) ) ) ) ) );
}

struct env1709 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2786;
};

struct envunion1710 {
    enum Unit_8  (*fun) (  struct env1709*  ,    struct Char_65  );
    struct env1709 env;
};

static  enum Unit_8   for_dash_each1708 (    struct StrViewIter_458  iterable1075 ,   struct envunion1710  fun1077 ) {
    struct StrViewIter_458  temp1711 = ( (  into_dash_iter459 ) ( (  iterable1075 ) ) );
    struct StrViewIter_458 *  it1078 = ( &temp1711 );
    while ( ( true ) ) {
        struct Maybe_297  dref1079 = ( (  next463 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_297_Just_t ) {
                struct envunion1710  temp1712 = (  fun1077 );
                ( temp1712.fun ( &temp1712.env ,  ( dref1079 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1713 (   struct env1709* env ,    struct Char_65  c2790 ) {
    struct envunion64  temp1714 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1714.fun ( &temp1714.env ,  ( env->builder2786 ) ,  (  c2790 ) ) );
}

static  enum Unit_8   write1707 (   struct env63* env ,    struct StrBuilder_62 *  builder2786 ,    struct StrView_27  s2788 ) {
    struct env1709 envinst1709 = {
        .envinst60 = env->envinst60 ,
        .builder2786 =  builder2786 ,
    };
    ( (  for_dash_each1708 ) ( ( (  chars460 ) ( (  s2788 ) ) ) ,  ( (struct envunion1710){ .fun = (  enum Unit_8  (*) (  struct env1709*  ,    struct Char_65  ) )lam1713 , .env =  envinst1709 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1704 (   struct env74* env ,    struct StrView_27  s2844 ,    enum CAllocator_10  al2846 ) {
    struct StrBuilder_62  temp1705 = ( (  mk1428 ) ( (  al2846 ) ) );
    struct StrBuilder_62 *  sb2847 = ( &temp1705 );
    struct envunion75  temp1706 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrView_27  ) )write1707 , .env =  env->envinst63 } );
    ( temp1706.fun ( &temp1706.env ,  (  sb2847 ) ,  (  s2844 ) ) );
    struct envunion76  temp1715 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    ( temp1715.fun ( &temp1715.env ,  (  sb2847 ) ,  ( (  nullchar544 ) ( ) ) ) );
    struct StrView_27  dynstr2848 = ( (  as_dash_str1470 ) ( (  sb2847 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2848 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub289 ( ( ( (  dynstr2848 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1702 (   struct env235* env ,    struct Editor_248 *  ed4454 ,    struct StrView_27  s4456 ) {
    ( (  reset_dash_msg1079 ) ( (  ed4454 ) ) );
    struct envunion236  temp1703 = ( (struct envunion236){ .fun = (  struct StrView_27  (*) (  struct env74*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1704 , .env =  env->envinst74 } );
    (*  ed4454 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1703.fun ( &temp1703.env ,  (  s4456 ) ,  ( ( * (  ed4454 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcatIter_1727 {
    struct StrViewIter_458  f_left;
    struct StrViewIter_458  f_right;
};

struct StrConcatIter_1726 {
    struct StrConcatIter_1727  f_left;
    struct AppendIter_1020  f_right;
};

struct StrCaseIter_1725 {
    enum {
        StrCaseIter_1725_StrCaseIter1_t,
        StrCaseIter_1725_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_458  field0;
        } StrCaseIter_1725_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1726  field0;
        } StrCaseIter_1725_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1725 StrCaseIter_1725_StrCaseIter1 (  struct StrViewIter_458  field0 ) {
    return ( struct StrCaseIter_1725 ) { .tag = StrCaseIter_1725_StrCaseIter1_t, .stuff = { .StrCaseIter_1725_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1725 StrCaseIter_1725_StrCaseIter2 (  struct StrConcatIter_1726  field0 ) {
    return ( struct StrCaseIter_1725 ) { .tag = StrCaseIter_1725_StrCaseIter2_t, .stuff = { .StrCaseIter_1725_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1724 {
    struct StrViewIter_458  f_left;
    struct StrCaseIter_1725  f_right;
};

struct env1728 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2786;
};

struct envunion1729 {
    enum Unit_8  (*fun) (  struct env1728*  ,    struct Char_65  );
    struct env1728 env;
};

static  struct StrConcatIter_1724   into_dash_iter1731 (    struct StrConcatIter_1724  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_297   next1735 (    struct StrConcatIter_1727 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1734 (    struct StrConcatIter_1726 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next1735 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next1733 (    struct StrCaseIter_1725 *  self1523 ) {
    struct StrCaseIter_1725 *  dref1524 = (  self1523 );
    if ( (* dref1524 ).tag == StrCaseIter_1725_StrCaseIter1_t ) {
        return ( (  next463 ) ( ( & ( (* dref1524 ) .stuff .StrCaseIter_1725_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1524 ).tag == StrCaseIter_1725_StrCaseIter2_t ) {
            return ( (  next1734 ) ( ( & ( (* dref1524 ) .stuff .StrCaseIter_1725_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_297   next1732 (    struct StrConcatIter_1724 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1733 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1723 (    struct StrConcatIter_1724  iterable1075 ,   struct envunion1729  fun1077 ) {
    struct StrConcatIter_1724  temp1730 = ( (  into_dash_iter1731 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1724 *  it1078 = ( &temp1730 );
    while ( ( true ) ) {
        struct Maybe_297  dref1079 = ( (  next1732 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_297_Just_t ) {
                struct envunion1729  temp1736 = (  fun1077 );
                ( temp1736.fun ( &temp1736.env ,  ( dref1079 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrCase_1740 {
    enum {
        StrCase_1740_StrCase1_t,
        StrCase_1740_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_1740_StrCase1_s;
        struct {
            struct StrConcat_669  field0;
        } StrCase_1740_StrCase2_s;
    } stuff;
};

static struct StrCase_1740 StrCase_1740_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_1740 ) { .tag = StrCase_1740_StrCase1_t, .stuff = { .StrCase_1740_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1740 StrCase_1740_StrCase2 (  struct StrConcat_669  field0 ) {
    return ( struct StrCase_1740 ) { .tag = StrCase_1740_StrCase2_t, .stuff = { .StrCase_1740_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1727   into_dash_iter1747 (    struct StrConcat_670  dref1505 ) {
    return ( (struct StrConcatIter_1727) { .f_left = ( (  chars460 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1727   chars1746 (    struct StrConcat_670  self1516 ) {
    return ( (  into_dash_iter1747 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1726   into_dash_iter1745 (    struct StrConcat_669  dref1505 ) {
    return ( (struct StrConcatIter_1726) { .f_left = ( (  chars1746 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1726   chars1744 (    struct StrConcat_669  self1516 ) {
    return ( (  into_dash_iter1745 ) ( (  self1516 ) ) );
}

static  struct StrCaseIter_1725   into_dash_iter1743 (    struct StrCase_1740  self1529 ) {
    struct StrCase_1740  dref1530 = (  self1529 );
    if ( dref1530.tag == StrCase_1740_StrCase1_t ) {
        return ( ( StrCaseIter_1725_StrCaseIter1 ) ( ( (  chars460 ) ( ( dref1530 .stuff .StrCase_1740_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1530.tag == StrCase_1740_StrCase2_t ) {
            return ( ( StrCaseIter_1725_StrCaseIter2 ) ( ( (  chars1744 ) ( ( dref1530 .stuff .StrCase_1740_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1725   chars1742 (    struct StrCase_1740  self1541 ) {
    return ( (  into_dash_iter1743 ) ( (  self1541 ) ) );
}

static  struct StrCaseIter_1725   chars1739 (    struct Maybe_80  self1555 ) {
    struct StrCase_1740  temp1741;
    struct StrCase_1740  c1556 = (  temp1741 );
    struct Maybe_80  dref1557 = (  self1555 );
    if ( dref1557.tag == Maybe_80_None_t ) {
        c1556 = ( ( StrCase_1740_StrCase1 ) ( ( (  from_dash_string199 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1557.tag == Maybe_80_Just_t ) {
            c1556 = ( ( StrCase_1740_StrCase2 ) ( ( ( StrConcat_669_StrConcat ) ( ( ( StrConcat_670_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1557 .stuff .Maybe_80_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1742 ) ( (  c1556 ) ) );
}

static  struct StrConcatIter_1724   into_dash_iter1738 (    struct StrConcat_79  dref1505 ) {
    return ( (struct StrConcatIter_1724) { .f_left = ( (  chars460 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1739 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1724   chars1737 (    struct StrConcat_79  self1516 ) {
    return ( (  into_dash_iter1738 ) ( (  self1516 ) ) );
}

static  enum Unit_8   lam1748 (   struct env1728* env ,    struct Char_65  c2790 ) {
    struct envunion64  temp1749 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    return ( temp1749.fun ( &temp1749.env ,  ( env->builder2786 ) ,  (  c2790 ) ) );
}

static  enum Unit_8   write1722 (   struct env66* env ,    struct StrBuilder_62 *  builder2786 ,    struct StrConcat_79  s2788 ) {
    struct env1728 envinst1728 = {
        .envinst60 = env->envinst60 ,
        .builder2786 =  builder2786 ,
    };
    ( (  for_dash_each1723 ) ( ( (  chars1737 ) ( (  s2788 ) ) ) ,  ( (struct envunion1729){ .fun = (  enum Unit_8  (*) (  struct env1728*  ,    struct Char_65  ) )lam1748 , .env =  envinst1728 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1719 (   struct env77* env ,    struct StrConcat_79  s2844 ,    enum CAllocator_10  al2846 ) {
    struct StrBuilder_62  temp1720 = ( (  mk1428 ) ( (  al2846 ) ) );
    struct StrBuilder_62 *  sb2847 = ( &temp1720 );
    struct envunion78  temp1721 = ( (struct envunion78){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_79  ) )write1722 , .env =  env->envinst66 } );
    ( temp1721.fun ( &temp1721.env ,  (  sb2847 ) ,  (  s2844 ) ) );
    struct envunion76  temp1750 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
    ( temp1750.fun ( &temp1750.env ,  (  sb2847 ) ,  ( (  nullchar544 ) ( ) ) ) );
    struct StrView_27  dynstr2848 = ( (  as_dash_str1470 ) ( (  sb2847 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2848 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub289 ( ( ( (  dynstr2848 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1717 (   struct env237* env ,    struct Editor_248 *  ed4454 ,    struct StrConcat_79  s4456 ) {
    ( (  reset_dash_msg1079 ) ( (  ed4454 ) ) );
    struct envunion238  temp1718 = ( (struct envunion238){ .fun = (  struct StrView_27  (*) (  struct env77*  ,    struct StrConcat_79  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1719 , .env =  env->envinst77 } );
    (*  ed4454 ) .f_msg = ( ( Maybe_80_Just ) ( ( temp1718.fun ( &temp1718.env ,  (  s4456 ) ,  ( ( * (  ed4454 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undefined1753 (  ) {
    enum Unit_8  temp1754;
    return (  temp1754 );
}

static  enum Unit_8   todo1752 (  ) {
    ( (  print1346 ) ( ( (  from_dash_string199 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1753 ) ( ) );
}

struct Tuple2_1758 {
    struct Maybe_297  field0;
    struct Maybe_297  field1;
};

static struct Tuple2_1758 Tuple2_1758_Tuple2 (  struct Maybe_297  field0 ,  struct Maybe_297  field1 ) {
    return ( struct Tuple2_1758 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1755 (    struct StrView_27  s2425 ,    struct StrView_27  beg2427 ) {
    struct StrViewIter_458  temp1756 = ( (  chars460 ) ( (  s2425 ) ) );
    struct StrViewIter_458 *  scs2428 = ( &temp1756 );
    struct StrViewIter_458  temp1757 = ( (  chars460 ) ( (  beg2427 ) ) );
    struct StrViewIter_458 *  begcs2429 = ( &temp1757 );
    while ( ( true ) ) {
        struct Tuple2_1758  dref2430 = ( ( Tuple2_1758_Tuple2 ) ( ( (  next463 ) ( (  scs2428 ) ) ) ,  ( (  next463 ) ( (  begcs2429 ) ) ) ) );
        if ( dref2430 .field0.tag == Maybe_297_Just_t && dref2430 .field1.tag == Maybe_297_Just_t ) {
            if ( ( !  eq469 ( ( dref2430 .field0 .stuff .Maybe_297_Just_s .field0 ) , ( dref2430 .field1 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref2430 .field0.tag == Maybe_297_None_t && dref2430 .field1.tag == Maybe_297_Just_t ) {
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

struct SliceAddressIter_1761 {
    struct Slice_15  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_1761   into_dash_iter1762 (    struct SliceAddressIter_1761  self1845 ) {
    return (  self1845 );
}

static  struct SliceAddressIter_1761   addresses1764 (    struct Slice_15  slice1842 ) {
    return ( (struct SliceAddressIter_1761) { .f_slice = (  slice1842 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_15   to_dash_slice1765 (    struct List_14  l2128 ) {
    struct Line_16 *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_15) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

static  struct SliceAddressIter_1761   addresses1763 (    struct List_14  l2132 ) {
    return ( (  addresses1764 ) ( ( (  to_dash_slice1765 ) ( (  l2132 ) ) ) ) );
}

struct Maybe_1767 {
    enum {
        Maybe_1767_None_t,
        Maybe_1767_Just_t,
    } tag;
    union {
        struct {
            struct Line_16 *  field0;
        } Maybe_1767_Just_s;
    } stuff;
};

static struct Maybe_1767 Maybe_1767_Just (  struct Line_16 *  field0 ) {
    return ( struct Maybe_1767 ) { .tag = Maybe_1767_Just_t, .stuff = { .Maybe_1767_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1767   next1768 (    struct SliceAddressIter_1761 *  self1848 ) {
    size_t  off1849 = ( ( * (  self1848 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1849 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1848 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1767) { .tag = Maybe_1767_None_t } );
    }
    struct Line_16 *  elem1850 = ( (  offset_dash_ptr391 ) ( ( ( ( * (  self1848 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1849 ) ) ) ) );
    (*  self1848 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1849 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1767_Just ) ( (  elem1850 ) ) );
}

static  enum Unit_8   set_dash_filetype1759 (    struct TextBuf_104 *  self3934 ,    enum Filetype_107  type3936 ) {
    (*  self3934 ) .f_filetype = (  type3936 );
    struct SliceAddressIter_1761  temp1760 =  into_dash_iter1762 ( ( (  addresses1763 ) ( ( ( * (  self3934 ) ) .f_buf ) ) ) );
    while (true) {
        struct Maybe_1767  __cond1766 =  next1768 (&temp1760);
        if (  __cond1766 .tag == 0 ) {
            break;
        }
        struct Line_16 *  line3938 =  __cond1766 .stuff .Maybe_1767_Just_s .field0;
        (*  line3938 ) .f_invalidated = ( true );
    }
    return ( Unit_8_Unit );
}

struct envunion1770 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env235 env;
};

struct env1773 {
    bool (*  fun1127 )(    struct Char_65  );
};

struct envunion1774 {
    bool  (*fun) (  struct env1773*  ,    struct Char_65  ,    bool  );
    struct env1773 env;
};

static  bool   reduce1772 (    struct StrView_27  iterable1094 ,    bool  base1096 ,   struct envunion1774  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct StrViewIter_458  it1100 = ( (  into_dash_iter461 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1101 = ( (  next463 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_297_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_297_Just_t ) {
                struct envunion1774  temp1775 = (  fun1098 );
                x1099 = ( temp1775.fun ( &temp1775.env ,  ( dref1101 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1776 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1776);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1777;
    return (  temp1777 );
}

static  bool   lam1778 (   struct env1773* env ,    struct Char_65  e1129 ,    bool  x1131 ) {
    return ( ( ( env->fun1127 ) ( (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1771 (    struct StrView_27  it1125 ,    bool (*  fun1127 )(    struct Char_65  ) ) {
    struct env1773 envinst1773 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1772 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1774){ .fun = (  bool  (*) (  struct env1773*  ,    struct Char_65  ,    bool  ) )lam1778 , .env =  envinst1773 } ) ) );
}

struct envunion1780 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env235 env;
};

static  enum Unit_8   run_dash_cmd1626 (   struct env244* env ,    struct Editor_248 *  ed4473 ,    struct StrView_27  s4475 ) {
    struct Scanner_1627  temp1628 = ( (  mk_dash_from_dash_strview1629 ) ( (  s4475 ) ) );
    struct Scanner_1627 *  sc4476 = ( &temp1628 );
    ( (  drop_dash_str_dash_while1630 ) ( (  sc4476 ) ,  (  is_dash_whitespace1340 ) ) );
    struct StrView_27  cmd4477 = ( (  take_dash_str_dash_while1647 ) ( (  sc4476 ) ,  (  is_dash_not_dash_whitespace1663 ) ) );
    ( (  drop_dash_str_dash_while1630 ) ( (  sc4476 ) ,  (  is_dash_whitespace1340 ) ) );
    if ( (  eq485 ( (  cmd4477 ) , ( (  from_dash_charlike1228 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4473 ) .f_running = ( false );
    } else {
        if ( (  eq485 ( (  cmd4477 ) , ( (  from_dash_string199 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq485 ( (  cmd4477 ) , ( (  from_dash_charlike1228 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4478 = ( (  take_dash_str_dash_while1647 ) ( (  sc4476 ) ,  (  is_dash_not_dash_whitespace1663 ) ) );
                struct Maybe_80  filename4479 = ( ( (  null1664 ) ( (  filename4478 ) ) ) ? ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) : ( ( Maybe_80_Just ) ( (  filename4478 ) ) ) );
                struct envunion245  temp1667 = ( (struct envunion245){ .fun = (  struct Maybe_246  (*) (  struct env110*  ,    struct TextBuf_104 *  ,    struct Maybe_80  ) )write_dash_to_dash_file1668 , .env =  env->envinst110 } );
                struct Maybe_246  write_dash_result4480 = ( temp1667.fun ( &temp1667.env ,  ( ( * ( (  pane1134 ) ( (  ed4473 ) ) ) ) .f_buf ) ,  (  filename4479 ) ) );
                struct Maybe_246  dref4481 = (  write_dash_result4480 );
                if ( dref4481.tag == Maybe_246_None_t ) {
                    if ( ( (  is_dash_none1670 ) ( (  filename4479 ) ) ) ) {
                        struct envunion247  temp1701 = ( (struct envunion247){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  ) )set_dash_msg1702 , .env =  env->envinst235 } );
                        ( temp1701.fun ( &temp1701.env ,  (  ed4473 ) ,  ( (  from_dash_string199 ) ( ( "could not save changes (!?)" ) ,  ( 27 ) ) ) ) );
                    } else {
                        struct envunion251  temp1716 = ( (struct envunion251){ .fun = (  enum Unit_8  (*) (  struct env237*  ,    struct Editor_248 *  ,    struct StrConcat_79  ) )set_dash_msg1717 , .env =  env->envinst237 } );
                        ( temp1716.fun ( &temp1716.env ,  (  ed4473 ) ,  ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string199 ) ( ( "could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4479 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4481.tag == Maybe_246_Just_t ) {
                        struct envunion252  temp1751 = ( (struct envunion252){ .fun = (  enum Unit_8  (*) (  struct env239*  ,    struct Editor_248 *  ,    struct StrConcat_83  ) )set_dash_msg1424 , .env =  env->envinst239 } );
                        ( temp1751.fun ( &temp1751.env ,  (  ed4473 ) ,  ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "written " ) ,  ( 8 ) ) ) ,  ( dref4481 .stuff .Maybe_246_Just_s .field0 ) ) ) ,  ( (  from_dash_string199 ) ( ( " bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq485 ( (  cmd4477 ) , ( (  from_dash_charlike1228 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1752 ) ( ) );
                } else {
                    if ( (  eq485 ( (  cmd4477 ) , ( (  from_dash_string199 ) ( ( "ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_27  what4483 = ( (  take_dash_str_dash_while1647 ) ( (  sc4476 ) ,  (  is_dash_not_dash_whitespace1663 ) ) );
                        if ( (  eq485 ( (  what4483 ) , ( (  from_dash_string199 ) ( ( "on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed4473 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq485 ( (  what4483 ) , ( (  from_dash_string199 ) ( ( "off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed4473 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp290 ( ( (  count1104 ) ( ( (  chars460 ) ( (  what4483 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1755 ) ( ( (  from_dash_string199 ) ( ( "absolute" ) ,  ( 8 ) ) ) ,  (  what4483 ) ) ) ) ) {
                                    (* (*  ed4473 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp290 ( ( (  count1104 ) ( ( (  chars460 ) ( (  what4483 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1755 ) ( ( (  from_dash_string199 ) ( ( "relative" ) ,  ( 8 ) ) ) ,  (  what4483 ) ) ) ) ) {
                                        (* (*  ed4473 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq485 ( (  cmd4477 ) , ( (  from_dash_string199 ) ( ( "ft" ) ,  ( 2 ) ) ) ) ) ) {
                            struct StrView_27  type4484 = ( (  take_dash_str_dash_while1647 ) ( (  sc4476 ) ,  (  is_dash_not_dash_whitespace1663 ) ) );
                            struct TextBuf_104 *  tb4485 = ( ( * ( (  pane1134 ) ( (  ed4473 ) ) ) ) .f_buf );
                            if ( (  eq485 ( (  type4484 ) , ( (  from_dash_string199 ) ( ( "text" ) ,  ( 4 ) ) ) ) ) ) {
                                ( (  set_dash_filetype1759 ) ( (  tb4485 ) ,  ( Filetype_107_Text ) ) );
                            } else {
                                if ( (  eq485 ( (  type4484 ) , ( (  from_dash_string199 ) ( ( "kc" ) ,  ( 2 ) ) ) ) ) ) {
                                    ( (  set_dash_filetype1759 ) ( (  tb4485 ) ,  ( Filetype_107_KC ) ) );
                                } else {
                                    if ( (  eq485 ( (  type4484 ) , ( (  from_dash_string199 ) ( ( "md" ) ,  ( 2 ) ) ) ) ) ) {
                                        ( (  set_dash_filetype1759 ) ( (  tb4485 ) ,  ( Filetype_107_Markdown ) ) );
                                    } else {
                                        struct envunion1770  temp1769 = ( (struct envunion1770){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  ) )set_dash_msg1702 , .env =  env->envinst235 } );
                                        ( temp1769.fun ( &temp1769.env ,  (  ed4473 ) ,  ( (  from_dash_string199 ) ( ( "unknown file type" ) ,  ( 17 ) ) ) ) );
                                    }
                                }
                            }
                        } else {
                            if ( (  eq485 ( (  cmd4477 ) , ( (  from_dash_string199 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                            } else {
                                if ( ( (  all1771 ) ( (  cmd4477 ) ,  (  is_dash_digit973 ) ) ) ) {
                                } else {
                                    struct envunion1780  temp1779 = ( (struct envunion1780){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Editor_248 *  ,    struct StrView_27  ) )set_dash_msg1702 , .env =  env->envinst235 } );
                                    ( temp1779.fun ( &temp1779.env ,  (  ed4473 ) ,  ( (  from_dash_string199 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
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

static  struct Char_65   ascii_dash_char1782 (    char  c783 ) {
    return ( (  from_dash_u81039 ) ( ( (  ascii_dash_u8481 ) ( (  c783 ) ) ) ) );
}

static  struct Maybe_967   reduce1786 (    struct StrViewIter_458  iterable1094 ,    struct Maybe_967  base1096 ,    struct Maybe_967 (*  fun1098 )(    struct Char_65  ,    struct Maybe_967  ) ) {
    struct Maybe_967  x1099 = (  base1096 );
    struct StrViewIter_458  it1100 = ( (  into_dash_iter459 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1101 = ( (  next463 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_297_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_297_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1787 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1787);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_967  temp1788;
    return (  temp1788 );
}

static  struct Maybe_967   sequence_dash_maybe1789 (    struct Char_65  e2498 ,    struct Maybe_967  b2500 ) {
    struct Maybe_967  dref2501 = (  b2500 );
    if ( dref2501.tag == Maybe_967_None_t ) {
        return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
    }
    else {
        if ( dref2501.tag == Maybe_967_Just_t ) {
            struct Maybe_155  dref2503 = ( (  parse_dash_digit998 ) ( (  e2498 ) ) );
            if ( dref2503.tag == Maybe_155_None_t ) {
                return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
            }
            else {
                if ( dref2503.tag == Maybe_155_Just_t ) {
                    return ( ( Maybe_967_Just ) ( (  op_dash_add471 ( (  op_dash_mul286 ( ( dref2501 .stuff .Maybe_967_Just_s .field0 ) , (  from_dash_integral288 ( 10 ) ) ) ) , ( (  i32_dash_i641007 ) ( ( dref2503 .stuff .Maybe_155_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_967   parse_dash_int1785 (    struct StrView_27  s2495 ) {
    struct StrViewIter_458  cs2505 = ( (  chars460 ) ( (  s2495 ) ) );
    struct Maybe_297  dref2506 = ( (  head1343 ) ( (  cs2505 ) ) );
    if ( dref2506.tag == Maybe_297_Just_t ) {
        return ( (  reduce1786 ) ( (  cs2505 ) ,  ( ( Maybe_967_Just ) ( (  from_dash_integral288 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1789 ) ) );
    }
    else {
        if ( dref2506.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_967) { .tag = Maybe_967_None_t } );
        }
    }
}

struct TakeWhile_1795 {
    struct StrViewIter_458  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1794 {
    struct TakeWhile_1795  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1794 Map_1794_Map (  struct TakeWhile_1795  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1794 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1794   into_dash_iter1797 (    struct Map_1794  self797 ) {
    return (  self797 );
}

static  struct Maybe_297   next1799 (    struct TakeWhile_1795 *  self965 ) {
    struct Maybe_297  mx966 = ( (  next463 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_297  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1798 (    struct Map_1794 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1799 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1796 (    struct Map_1794  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1794  it1100 = ( (  into_dash_iter1797 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1101 = ( (  next1798 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_246_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_246_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1800 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1800);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1801;
    return (  temp1801 );
}

static  size_t   lam1802 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add311 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1793 (    struct Map_1794  it1111 ) {
    return ( (  reduce1796 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1802 ) ) );
}

static  struct TakeWhile_1795   into_dash_iter1804 (    struct TakeWhile_1795  self962 ) {
    return (  self962 );
}

static  struct Map_1794   map1803 (    struct TakeWhile_1795  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1795  it809 = ( (  into_dash_iter1804 ) ( (  iterable806 ) ) );
    return ( ( Map_1794_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1795   take_dash_while1805 (    struct StrViewIter_458  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1795) { .f_it = ( (  into_dash_iter459 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1806 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1792 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1793 ) ( ( (  map1803 ) ( ( (  take_dash_while1805 ) ( ( (  chars460 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1806 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1791 (    struct Scanner_1627 *  sc3280 ,    bool (*  fun3282 )(    struct Char_65  ) ) {
    struct StrView_27  s3283 = ( (  take_dash_while1792 ) ( ( ( * (  sc3280 ) ) .f_s ) ,  (  fun3282 ) ) );
    (*  sc3280 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3280 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3283 ) ) ) ) );
    return (  s3283 );
}

struct TakeWhile_1811 {
    struct StrViewIter_458  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1810 {
    struct TakeWhile_1811  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1810 Map_1810_Map (  struct TakeWhile_1811  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1810 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1810   into_dash_iter1813 (    struct Map_1810  self797 ) {
    return (  self797 );
}

static  struct Maybe_297   next1815 (    struct TakeWhile_1811 *  self965 ) {
    struct Maybe_297  mx966 = ( (  next463 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_297  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_297_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_297_Just ) ( ( dref967 .stuff .Maybe_297_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
            }
        }
    }
}

static  struct Maybe_246   next1814 (    struct Map_1810 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1815 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1812 (    struct Map_1810  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1810  it1100 = ( (  into_dash_iter1813 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_246  dref1101 = ( (  next1814 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_246_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_246_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_246_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1816 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1816);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1817;
    return (  temp1817 );
}

static  size_t   lam1818 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add311 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1809 (    struct Map_1810  it1111 ) {
    return ( (  reduce1812 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1818 ) ) );
}

static  struct TakeWhile_1811   into_dash_iter1820 (    struct TakeWhile_1811  self962 ) {
    return (  self962 );
}

static  struct Map_1810   map1819 (    struct TakeWhile_1811  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1811  it809 = ( (  into_dash_iter1820 ) ( (  iterable806 ) ) );
    return ( ( Map_1810_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1811   take_dash_while1821 (    struct StrViewIter_458  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1811) { .f_it = ( (  into_dash_iter459 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1822 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1808 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1809 ) ( ( (  map1819 ) ( ( (  take_dash_while1821 ) ( ( (  chars460 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1822 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1807 (    struct Scanner_1627 *  sc3280 ,    bool (*  fun3282 )(    struct Char_65  ) ) {
    struct StrView_27  s3283 = ( (  take_dash_while1808 ) ( ( ( * (  sc3280 ) ) .f_s ) ,  (  fun3282 ) ) );
    (*  sc3280 ) .f_s = ( (  byte_dash_substr_dash_from464 ) ( ( ( * (  sc3280 ) ) .f_s ) ,  ( (  num_dash_bytes1130 ) ( (  s3283 ) ) ) ) );
    return (  s3283 );
}

static  bool   lam1823 (    struct Char_65  c4469 ) {
    return ( ! ( (  is_dash_whitespace1340 ) ( (  c4469 ) ) ) );
}

static  struct Theme_172 *   or_dash_else1824 (    struct Maybe_243  self1734 ,    struct Theme_172 *  alt1736 ) {
    struct Maybe_243  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_243_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_243_Just_t ) {
            return ( dref1737 .stuff .Maybe_243_Just_s .field0 );
        }
    }
}

struct SliceIter_1830 {
    struct Slice_192  f_slice;
    size_t  f_current_dash_offset;
};

struct env1831 {
    struct StrView_27  name4032;
    ;
};

struct envunion1832 {
    bool  (*fun) (  struct env1831*  ,    struct Tuple2_193  );
    struct env1831 env;
};

struct Filter_1829 {
    struct SliceIter_1830  f_og;
    struct envunion1832  f_fun;
};

struct Map_1828 {
    struct Filter_1829  field0;
    struct Theme_172 * (*  field1 )(    struct Tuple2_193  );
};

static struct Map_1828 Map_1828_Map (  struct Filter_1829  field0 ,  struct Theme_172 * (*  field1 )(    struct Tuple2_193  ) ) {
    return ( struct Map_1828 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1834 {
    enum {
        Maybe_1834_None_t,
        Maybe_1834_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_193  field0;
        } Maybe_1834_Just_s;
    } stuff;
};

static struct Maybe_1834 Maybe_1834_Just (  struct Tuple2_193  field0 ) {
    return ( struct Maybe_1834 ) { .tag = Maybe_1834_Just_t, .stuff = { .Maybe_1834_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_193 *   offset_dash_ptr1837 (    struct Tuple2_193 *  x338 ,    int64_t  count340 ) {
    struct Tuple2_193  temp1838;
    return ( (struct Tuple2_193 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1838 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1834   next1836 (    struct SliceIter_1830 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1834) { .tag = Maybe_1834_None_t } );
    }
    struct Tuple2_193  elem1832 = ( * ( (  offset_dash_ptr1837 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1834_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_1834   next1835 (    struct Filter_1829 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_1834  dref835 = ( (  next1836 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_1834_None_t ) {
            return ( (struct Maybe_1834) { .tag = Maybe_1834_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_1834_Just_t ) {
                struct envunion1832  temp1839 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp1839.fun ( &temp1839.env ,  ( dref835 .stuff .Maybe_1834_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1834_Just ) ( ( dref835 .stuff .Maybe_1834_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1834  temp1840;
    return (  temp1840 );
}

static  struct Maybe_243   next1833 (    struct Map_1828 *  dref799 ) {
    struct Maybe_1834  dref802 = ( (  next1835 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_1834_None_t ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_1834_Just_t ) {
            return ( ( Maybe_243_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_1834_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1828   into_dash_iter1842 (    struct Map_1828  self797 ) {
    return (  self797 );
}

static  struct Maybe_243   head1827 (    struct Map_1828  it1143 ) {
    struct Map_1828  temp1841 = ( (  into_dash_iter1842 ) ( (  it1143 ) ) );
    return ( (  next1833 ) ( ( &temp1841 ) ) );
}

static  struct Filter_1829   into_dash_iter1844 (    struct Filter_1829  self831 ) {
    return (  self831 );
}

static  struct Map_1828   map1843 (    struct Filter_1829  iterable806 ,    struct Theme_172 * (*  fun808 )(    struct Tuple2_193  ) ) {
    struct Filter_1829  it809 = ( (  into_dash_iter1844 ) ( (  iterable806 ) ) );
    return ( ( Map_1828_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct SliceIter_1830   into_dash_iter1846 (    struct Slice_192  self1824 ) {
    return ( (struct SliceIter_1830) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1829   filter1845 (    struct Slice_192  iterable839 ,   struct envunion1832  fun841 ) {
    struct SliceIter_1830  it842 = ( (  into_dash_iter1846 ) ( (  iterable839 ) ) );
    return ( (struct Filter_1829) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  bool   lam1847 (   struct env1831* env ,    struct Tuple2_193  dref4033 ) {
    return ( (  begins_dash_with1755 ) ( ( dref4033 .field0 ) ,  ( env->name4032 ) ) );
}

static  struct Theme_172 *   snd1848 (    struct Tuple2_193  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Maybe_243   match_dash_theme1826 (   struct env200* env ,    struct StrView_27  name4032 ) {
    if ( ( (  null1664 ) ( (  name4032 ) ) ) ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    struct env1831 envinst1831 = {
        .name4032 =  name4032 ,
    };
    return ( (  head1827 ) ( ( (  map1843 ) ( ( (  filter1845 ) ( ( env->all_dash_themes4029 ) ,  ( (struct envunion1832){ .fun = (  bool  (*) (  struct env1831*  ,    struct Tuple2_193  ) )lam1847 , .env =  envinst1831 } ) ) ) ,  (  snd1848 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1784 (   struct env241* env ,    struct Editor_248 *  ed4459 ,    struct StrView_27  cmd4461 ) {
    struct Maybe_967  dref4462 = ( (  parse_dash_int1785 ) ( (  cmd4461 ) ) );
    if ( dref4462.tag == Maybe_967_Just_t ) {
        int32_t  line4464 = ( (  clamp1481 ) ( ( (  i64_dash_i321009 ) ( ( dref4462 .stuff .Maybe_967_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  num_dash_lines1137 ) ( ( ( * ( (  pane1134 ) ( (  ed4459 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        int32_t  line4465 = (  op_dash_sub164 ( (  line4464 ) , (  from_dash_integral56 ( 1 ) ) ) );
        ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4459 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4465 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    }
    else {
        if ( dref4462.tag == Maybe_967_None_t ) {
            struct Scanner_1627  temp1790 = ( (  mk_dash_from_dash_strview1629 ) ( (  cmd4461 ) ) );
            struct Scanner_1627 *  sc4466 = ( &temp1790 );
            struct StrView_27  cmd4467 = ( (  take_dash_str_dash_while1791 ) ( (  sc4466 ) ,  (  is_dash_alpha1335 ) ) );
            if ( (  eq485 ( (  cmd4467 ) , ( (  from_dash_string199 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1630 ) ( (  sc4466 ) ,  (  is_dash_whitespace1340 ) ) );
                struct StrView_27  theme_dash_name4470 = ( (  take_dash_str_dash_while1807 ) ( (  sc4466 ) ,  (  lam1823 ) ) );
                struct envunion242  temp1825 = ( (struct envunion242){ .fun = (  struct Maybe_243  (*) (  struct env200*  ,    struct StrView_27  ) )match_dash_theme1826 , .env =  env->envinst200 } );
                (* (*  ed4459 ) .f_cfg ) .f_theme = ( (  or_dash_else1824 ) ( ( temp1825.fun ( &temp1825.env ,  (  theme_dash_name4470 ) ) ) ,  ( ( * (  ed4459 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_458   into_dash_iter1852 (    struct StrBuilder_62  self2841 ) {
    return ( (  chars1695 ) ( (  self2841 ) ) );
}

static  struct Maybe_297   head1850 (    struct StrBuilder_62  it1143 ) {
    struct StrViewIter_458  temp1851 = ( (  into_dash_iter1852 ) ( (  it1143 ) ) );
    return ( (  next463 ) ( ( &temp1851 ) ) );
}

static  bool   null1849 (    struct StrBuilder_62  it1152 ) {
    struct Maybe_297  dref1153 = ( (  head1850 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1858 (   struct env42* env ,    struct List_9 *  list2078 ,    size_t  i2080 ) {
    struct envunion43  temp1859 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range630 , .env =  env->envinst40 } );
    ( temp1859.fun ( &temp1859.env ,  (  list2078 ) ,  (  i2080 ) ,  (  op_dash_add311 ( (  i2080 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1856 (   struct env44* env ,    struct List_9 *  list2094 ) {
    if ( (  eq399 ( ( ( * (  list2094 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1212 ) ( ( (  from_dash_string199 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1857 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_9 *  ,    size_t  ) )remove1858 , .env =  env->envinst42 } );
    return ( temp1857.fun ( &temp1857.env ,  (  list2094 ) ,  (  op_dash_sub289 ( ( ( * (  list2094 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1854 (   struct env72* env ,    struct StrBuilder_62 *  sb2804 ) {
    struct envunion73  temp1855 = ( (struct envunion73){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_9 *  ) )pop1856 , .env =  env->envinst44 } );
    return ( temp1855.fun ( &temp1855.env ,  ( & ( ( * (  sb2804 ) ) .f_chars ) ) ) );
}

struct envunion1861 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  );
    struct env241 env;
};

struct env1863 {
    struct Editor_248 *  ed4537;
    ;
};

struct envunion1864 {
    enum Unit_8  (*fun) (  struct env1863*  ,    struct StrView_27  );
    struct env1863 env;
};

static  enum Unit_8   if_dash_just1862 (    struct Maybe_80  x1292 ,   struct envunion1864  fun1294 ) {
    struct Maybe_80  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_80_Just_t ) {
        struct envunion1864  temp1865 = (  fun1294 );
        ( temp1865.fun ( &temp1865.env ,  ( dref1295 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1866 (   struct env1863* env ,    struct StrView_27  st4554 ) {
    ( (  free547 ) ( (  st4554 ) ,  ( ( * ( env->ed4537 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1868 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  enum Unit_8   live_dash_search1869 (    struct Editor_248 *  ed4488 ,    struct Pos_26  begin_dash_pos4490 ,    struct StrView_27  query4492 ) {
    if ( ( ! ( (  null1664 ) ( (  query4492 ) ) ) ) ) {
        struct Maybe_1506  dref4493 = ( (  search_dash_from1507 ) ( ( (  pane1134 ) ( (  ed4488 ) ) ) ,  (  begin_dash_pos4490 ) ,  (  query4492 ) ) );
        if ( dref4493.tag == Maybe_1506_Just_t ) {
            ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4488 ) ) ) ,  ( dref4493 .stuff .Maybe_1506_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4493 .stuff .Maybe_1506_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1092_NoChanges ) ) );
        }
        else {
            if ( dref4493.tag == Maybe_1506_None_t ) {
                ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4488 ) ) ) ,  (  begin_dash_pos4490 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4488 ) ) ) ,  (  begin_dash_pos4490 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1871 {
    enum Unit_8  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

static  enum Unit_8   handle_dash_key1087 (   struct env264* env ,    struct Editor_248 *  ed4537 ,    struct Key_269  key4539 ) {
    struct EditorMode_249 *  dref4540 = ( & ( ( * (  ed4537 ) ) .f_mode ) );
    if ( (* dref4540 ).tag == EditorMode_249_Normal_t ) {
        enum Mode_220  dref4541 = ( ( ( * (  ed4537 ) ) .f_pane ) .f_mode );
        switch (  dref4541 ) {
            case Mode_220_Normal : {
                struct envunion268  temp1088 = ( (struct envunion268){ .fun = (  enum Unit_8  (*) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_269  ) )handle_dash_normal_dash_key1089 , .env =  env->envinst253 } );
                ( temp1088.fun ( &temp1088.env ,  (  ed4537 ) ,  (  key4539 ) ) );
                break;
            }
            case Mode_220_Select : {
                struct envunion1612  temp1611 = ( (struct envunion1612){ .fun = (  enum Unit_8  (*) (  struct env253*  ,    struct Editor_248 *  ,    struct Key_269  ) )handle_dash_normal_dash_key1089 , .env =  env->envinst253 } );
                ( temp1611.fun ( &temp1611.env ,  (  ed4537 ) ,  (  key4539 ) ) );
                break;
            }
            case Mode_220_Insert : {
                struct Key_269  dref4542 = (  key4539 );
                if ( dref4542.tag == Key_269_Escape_t ) {
                    ( (  set_dash_mode1143 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( Mode_220_Normal ) ) );
                }
                else {
                    if ( dref4542.tag == Key_269_Enter_t ) {
                        int32_t  indent4543 = ( (  indent_dash_at_dash_line1146 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( ( ( * ( (  pane1134 ) ( (  ed4537 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion272  temp1613 = ( (struct envunion272){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                        ( temp1613.fun ( &temp1613.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( (  from_dash_charlike1228 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1135 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                        struct envunion271  temp1614 = ( (struct envunion271){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_219 *  ,    int32_t  ) )indent_dash_at_dash_current1305 , .env =  env->envinst226 } );
                        ( temp1614.fun ( &temp1614.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ,  (  indent4543 ) ) );
                    }
                    else {
                        if ( dref4542.tag == Key_269_Backspace_t ) {
                            struct envunion265  temp1615 = ( (struct envunion265){ .fun = (  enum Unit_8  (*) (  struct env207*  ,    struct Pane_219 *  ) )backspace1616 , .env =  env->envinst207 } );
                            ( temp1615.fun ( &temp1615.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                        }
                        else {
                            if ( dref4542.tag == Key_269_Char_t ) {
                                struct Array_1619  temp1621 = ( (  from_dash_listlike1622 ) ( ( (struct Array_1619) { ._arr = { ( dref4542 .stuff .Key_269_Char_s .field0 ) } } ) ) );
                                struct StrView_27  s4545 = ( (  from_dash_ascii_dash_slice964 ) ( ( (  as_dash_slice1618 ) ( ( &temp1621 ) ) ) ) );
                                struct envunion1624  temp1623 = ( (struct envunion1624){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Pane_219 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1166 , .env =  env->envinst204 } );
                                ( temp1623.fun ( &temp1623.env ,  ( (  pane1134 ) ( (  ed4537 ) ) ) ,  (  s4545 ) ) );
                                ( (  move_dash_right1135 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4540 ).tag == EditorMode_249_Cmd_t ) {
            struct Key_269  dref4548 = (  key4539 );
            if ( dref4548.tag == Key_269_Escape_t ) {
                ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( (* dref4540 ) .stuff .EditorMode_249_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                (*  ed4537 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                (* (*  ed4537 ) .f_cfg ) .f_theme = ( ( * (  ed4537 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4548.tag == Key_269_Enter_t ) {
                    struct envunion270  temp1625 = ( (struct envunion270){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Editor_248 *  ,    struct StrView_27  ) )run_dash_cmd1626 , .env =  env->envinst244 } );
                    ( temp1625.fun ( &temp1625.env ,  (  ed4537 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4540 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1699 ) ( ( & ( (* dref4540 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( ( * ( (  pane1134 ) ( (  ed4537 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                    (*  ed4537 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                    (*  ed4537 ) .f_og_dash_theme = ( ( * ( ( * (  ed4537 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref4548.tag == Key_269_Char_t ) {
                        struct envunion266  temp1781 = ( (struct envunion266){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
                        ( temp1781.fun ( &temp1781.env ,  ( & ( (* dref4540 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1782 ) ( ( dref4548 .stuff .Key_269_Char_s .field0 ) ) ) ) );
                        struct envunion273  temp1783 = ( (struct envunion273){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  ) )live_dash_cmd1784 , .env =  env->envinst241 } );
                        ( temp1783.fun ( &temp1783.env ,  (  ed4537 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4540 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4548.tag == Key_269_Backspace_t ) {
                            if ( ( ! ( (  null1849 ) ( ( (* dref4540 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion267  temp1853 = ( (struct envunion267){ .fun = (  enum Unit_8  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1854 , .env =  env->envinst72 } );
                                ( temp1853.fun ( &temp1853.env ,  ( & ( (* dref4540 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1861  temp1860 = ( (struct envunion1861){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_248 *  ,    struct StrView_27  ) )live_dash_cmd1784 , .env =  env->envinst241 } );
                            ( temp1860.fun ( &temp1860.env ,  (  ed4537 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4540 ) .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4540 ).tag == EditorMode_249_Search_t ) {
                struct Key_269  dref4552 = (  key4539 );
                if ( dref4552.tag == Key_269_Escape_t ) {
                    ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( (* dref4540 ) .stuff .EditorMode_249_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                    (*  ed4537 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                }
                else {
                    if ( dref4552.tag == Key_269_Enter_t ) {
                        ( (  set_dash_cursors1091 ) ( ( (  pane1134 ) ( (  ed4537 ) ) ) ,  ( ( * ( (  pane1134 ) ( (  ed4537 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1134 ) ( (  ed4537 ) ) ) ) .f_sel ) ,  ( CursorMovement_1092_UpdateVI ) ) );
                        struct env1863 envinst1863 = {
                            .ed4537 =  ed4537 ,
                        };
                        ( (  if_dash_just1862 ) ( ( ( * (  ed4537 ) ) .f_search_dash_term ) ,  ( (struct envunion1864){ .fun = (  enum Unit_8  (*) (  struct env1863*  ,    struct StrView_27  ) )lam1866 , .env =  envinst1863 } ) ) );
                        if ( ( ! ( (  null1849 ) ( ( (* dref4540 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4555 = ( ( * ( (  pane1134 ) ( (  ed4537 ) ) ) ) .f_cursor );
                            struct Pos_26  from4556 = ( (  or_dash_else1400 ) ( ( ( * ( (  pane1134 ) ( (  ed4537 ) ) ) ) .f_sel ) ,  (  to4555 ) ) );
                            (*  ed4537 ) .f_search_dash_term = ( ( Maybe_80_Just ) ( ( (  as_dash_str1470 ) ( ( & ( (* dref4540 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4537 ) .f_search_dash_term = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
                        }
                        (*  ed4537 ) .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } );
                    }
                    else {
                        if ( dref4552.tag == Key_269_Char_t ) {
                            struct envunion1868  temp1867 = ( (struct envunion1868){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1461 , .env =  env->envinst60 } );
                            ( temp1867.fun ( &temp1867.env ,  ( & ( (* dref4540 ) .stuff .EditorMode_249_Search_s .field1 ) ) ,  ( (  ascii_dash_char1782 ) ( ( dref4552 .stuff .Key_269_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1869 ) ( (  ed4537 ) ,  ( (* dref4540 ) .stuff .EditorMode_249_Search_s .field0 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4540 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4552.tag == Key_269_Backspace_t ) {
                                if ( ( ! ( (  null1849 ) ( ( (* dref4540 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1871  temp1870 = ( (struct envunion1871){ .fun = (  enum Unit_8  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1854 , .env =  env->envinst72 } );
                                    ( temp1870.fun ( &temp1870.env ,  ( & ( (* dref4540 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1869 ) ( (  ed4537 ) ,  ( (* dref4540 ) .stuff .EditorMode_249_Search_s .field0 ) ,  ( (  as_dash_str1470 ) ( ( & ( (* dref4540 ) .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1752 ) ( ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1873 {
    bool  (*fun) (  struct env94*  ,    struct Screen_276 *  );
    struct env94 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1874 (   struct env94* env ,    struct Screen_276 *  screen3526 ) {
    struct Tui_90 *  tui3527 = ( ( * (  screen3526 ) ) .f_tui );
    struct envunion95  temp1875 = ( (struct envunion95){ .fun = (  bool  (*) (  struct env87*  ,    struct Tui_90 *  ) )update_dash_dimensions884 , .env =  env->envinst87 } );
    bool  updated_dash_dimensions3528 = ( temp1875.fun ( &temp1875.env ,  (  tui3527 ) ) );
    if ( ( ! (  updated_dash_dimensions3528 ) ) ) {
        return ( false );
    }
    (*  screen3526 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3529 = ( ( * ( ( * (  screen3526 ) ) .f_tui ) ) .f_width );
    uint32_t  h3530 = ( ( * ( ( * (  screen3526 ) ) .f_tui ) ) .f_height );
    size_t  nusz3531 = ( (  u32_dash_size833 ) ( (  op_dash_mul167 ( (  w3529 ) , (  h3530 ) ) ) ) );
    if ( (  cmp290 ( (  nusz3531 ) , ( ( ( * (  screen3526 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_276  nuscreen3532 = ( (  mk_dash_screen827 ) ( (  tui3527 ) ,  ( ( * (  screen3526 ) ) .f_al ) ) );
    (*  screen3526 ) .f_current = ( (  nuscreen3532 ) .f_current );
    (*  screen3526 ) .f_previous = ( (  nuscreen3532 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1876 (    struct Tui_90 *  tui3453 ) {
    bool  redraw3454 = ( ( * (  tui3453 ) ) .f_should_dash_redraw );
    (*  tui3453 ) .f_should_dash_redraw = ( false );
    return (  redraw3454 );
}

struct env1880 {
    ;
    ;
    ;
    struct Slice_277  s1907;
    struct Cell_278 (*  fun1909 )(    struct Cell_278  );
};

struct envunion1881 {
    enum Unit_8  (*fun) (  struct env1880*  ,    int32_t  );
    struct env1880 env;
};

static  enum Unit_8   for_dash_each1879 (    struct Range_150  iterable1075 ,   struct envunion1881  fun1077 ) {
    struct RangeIter_153  temp1882 = ( (  into_dash_iter154 ) ( (  iterable1075 ) ) );
    struct RangeIter_153 *  it1078 = ( &temp1882 );
    while ( ( true ) ) {
        struct Maybe_155  dref1079 = ( (  next156 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_155_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_155_Just_t ) {
                struct envunion1881  temp1883 = (  fun1077 );
                ( temp1883.fun ( &temp1883.env ,  ( dref1079 .stuff .Maybe_155_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1884 (   struct env1880* env ,    int32_t  i1911 ) {
    return ( (  set848 ) ( ( env->s1907 ) ,  ( (  i32_dash_size412 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get852 ( ( env->s1907 ) , ( (  i32_dash_size412 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1878 (    struct Slice_277  s1907 ,    struct Cell_278 (*  fun1909 )(    struct Cell_278  ) ) {
    struct env1880 envinst1880 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each1879 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32329 ) ( (  op_dash_sub289 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1881){ .fun = (  enum Unit_8  (*) (  struct env1880*  ,    int32_t  ) )lam1884 , .env =  envinst1880 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_278   lam1885 (    struct Cell_278  dref3490 ) {
    return ( (  default_dash_cell860 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1877 (    struct Screen_276 *  screen3489 ) {
    ( (  map1878 ) ( ( ( * (  screen3489 ) ) .f_current ) ,  (  lam1885 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1886 (    struct Screen_276 *  screen3535 ,    struct Color_138  c3537 ) {
    (*  screen3535 ) .f_default_dash_fg = (  c3537 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1887 (    struct Screen_276 *  screen3540 ,    struct Color_138  c3542 ) {
    (*  screen3540 ) .f_default_dash_bg = (  c3542 );
    return ( Unit_8_Unit );
}

static  int32_t   cast1891 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321890 (    uint32_t  x661 ) {
    return ( (  cast1891 ) ( (  x661 ) ) );
}

struct Maybe_1896 {
    enum {
        Maybe_1896_None_t,
        Maybe_1896_Just_t,
    } tag;
    union {
        struct {
            struct Cell_278 *  field0;
        } Maybe_1896_Just_s;
    } stuff;
};

static struct Maybe_1896 Maybe_1896_Just (  struct Cell_278 *  field0 ) {
    return ( struct Maybe_1896 ) { .tag = Maybe_1896_Just_t, .stuff = { .Maybe_1896_Just_s = { .field0 = field0 } } };
};

static  struct Cell_278 *   undefined1897 (  ) {
    struct Cell_278 *  temp1898;
    return (  temp1898 );
}

static  struct Cell_278 *   or_dash_fail1895 (    struct Maybe_1896  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_1896  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1896_None_t ) {
        ( (  panic1212 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1897 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1896_Just_t ) {
            return ( dref1730 .stuff .Maybe_1896_Just_s .field0 );
        }
    }
}

static  struct Maybe_1896   get_dash_cell_dash_ptr1899 (    struct Screen_276 *  screen3556 ,    int32_t  x3558 ,    int32_t  y3560 ) {
    int32_t  w3561 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3556 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  x3558 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  x3558 ) , (  w3561 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1896) { .tag = Maybe_1896_None_t } );
    }
    if ( ( (  cmp157 ( (  y3560 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3560 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3556 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1896) { .tag = Maybe_1896_None_t } );
    }
    size_t  i3562 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1521 ( (  y3560 ) , (  w3561 ) ) ) , (  x3558 ) ) ) ) );
    return ( ( Maybe_1896_Just ) ( ( (  get_dash_ptr849 ) ( ( ( * (  screen3556 ) ) .f_current ) ,  (  i3562 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1888 (    struct Screen_276 *  screen3565 ) {
    struct RangeIter_153  temp1889 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3565 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1892 =  next156 (&temp1889);
        if (  __cond1892 .tag == 0 ) {
            break;
        }
        int32_t  y3567 =  __cond1892 .stuff .Maybe_155_Just_s .field0;
        struct RangeIter_153  temp1893 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3565 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_155  __cond1894 =  next156 (&temp1893);
            if (  __cond1894 .tag == 0 ) {
                break;
            }
            int32_t  x3569 =  __cond1894 .stuff .Maybe_155_Just_s .field0;
            struct Cell_278 *  cell3570 = ( (  or_dash_fail1895 ) ( ( (  get_dash_cell_dash_ptr1899 ) ( (  screen3565 ) ,  (  x3569 ) ,  (  y3567 ) ) ) ,  ( (  from_dash_string199 ) ( ( "no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3570 ) .f_bg = ( ( * (  screen3565 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1901 {
    enum Unit_8  (*fun) (  struct env274*  ,    struct Screen_276 *  ,    struct Editor_248 *  );
    struct env274 env;
};

static  int32_t   screen_dash_width1906 (    struct ScreenDims_279  sd4112 ) {
    return (  op_dash_add159 ( (  op_dash_sub164 ( ( (  sd4112 ) .f_to_dash_sx ) , ( (  sd4112 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1907 (    struct ScreenDims_279  sd4115 ) {
    return (  op_dash_add159 ( (  op_dash_sub164 ( ( (  sd4115 ) .f_to_dash_sy ) , ( (  sd4115 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1905 (    struct Pane_219 *  pane4118 ,    struct ScreenDims_279  sd4120 ) {
    struct Pos_26  cur4121 = ( ( * (  pane4118 ) ) .f_cursor );
    int32_t  cur_dash_sx4122 = ( (  pos_dash_vi1095 ) ( ( ( * (  pane4118 ) ) .f_buf ) ,  (  cur4121 ) ) );
    struct ScreenCursorOffset_221  sc_dash_off4123 = ( ( * (  pane4118 ) ) .f_sc_dash_off );
    int32_t  sw4124 = (  op_dash_sub164 ( ( (  screen_dash_width1906 ) ( (  sd4120 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh4125 = (  op_dash_sub164 ( ( (  screen_dash_height1907 ) ( (  sd4120 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin4126 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4127 = ( (  pos_dash_vi1095 ) ( ( ( * (  pane4118 ) ) .f_buf ) ,  (  cur4121 ) ) );
    int32_t  csx4128 = (  op_dash_sub164 ( (  csi4127 ) , ( (  sc_dash_off4123 ) .f_screen_dash_left ) ) );
    int32_t  csy4129 = (  op_dash_sub164 ( ( (  cur4121 ) .f_line ) , ( (  sc_dash_off4123 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4130 = ( (  sc_dash_off4123 ) .f_screen_dash_left );
    if ( (  cmp157 ( (  csx4128 ) , (  margin4126 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4130 = (  op_dash_sub164 ( (  csi4127 ) , (  margin4126 ) ) );
    } else {
        if ( (  cmp157 ( (  csx4128 ) , (  op_dash_sub164 ( (  sw4124 ) , (  margin4126 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4130 = (  op_dash_add159 ( (  op_dash_sub164 ( (  csi4127 ) , (  sw4124 ) ) ) , (  margin4126 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4131 = ( (  max1110 ) ( (  nu_dash_screen_dash_left4130 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4132 = ( (  sc_dash_off4123 ) .f_screen_dash_top );
    if ( (  cmp157 ( (  csy4129 ) , (  margin4126 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4132 = (  op_dash_sub164 ( ( (  cur4121 ) .f_line ) , (  margin4126 ) ) );
    } else {
        if ( (  cmp157 ( (  csy4129 ) , (  op_dash_sub164 ( (  sh4125 ) , (  margin4126 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4132 = (  op_dash_add159 ( (  op_dash_sub164 ( ( (  cur4121 ) .f_line ) , (  sh4125 ) ) ) , (  margin4126 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4133 = ( (  max1110 ) ( (  nu_dash_screen_dash_top4132 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane4118 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_221) { .f_screen_dash_top = (  nu_dash_screen_dash_top4133 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4131 ) } );
    return ( Unit_8_Unit );
}

struct IntStrIter_1909 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1909   into_dash_iter1911 (    struct IntStrIter_1909  self1426 ) {
    return (  self1426 );
}

struct env1915 {
    int32_t  base1211;
    ;
};

struct envunion1916 {
    int32_t  (*fun) (  struct env1915*  ,    int32_t  ,    int32_t  );
    struct env1915 env;
};

static  int32_t   reduce1914 (    struct Range_150  iterable1094 ,    int32_t  base1096 ,   struct envunion1916  fun1098 ) {
    int32_t  x1099 = (  base1096 );
    struct RangeIter_153  it1100 = ( (  into_dash_iter154 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1101 = ( (  next156 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_155_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_155_Just_t ) {
                struct envunion1916  temp1917 = (  fun1098 );
                x1099 = ( temp1917.fun ( &temp1917.env ,  ( dref1101 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1099 ) ) );
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

static  int32_t   lam1920 (   struct env1915* env ,    int32_t  item1215 ,    int32_t  x1217 ) {
    return (  op_dash_mul1521 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  int32_t   pow1913 (    int32_t  base1211 ,    int32_t  p1213 ) {
    struct env1915 envinst1915 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1914 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1213 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion1916){ .fun = (  int32_t  (*) (  struct env1915*  ,    int32_t  ,    int32_t  ) )lam1920 , .env =  envinst1915 } ) ) );
}

static  struct Maybe_297   next1912 (    struct IntStrIter_1909 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    int32_t  trim_dash_down1430 = ( (  pow1913 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1431 = (  op_dash_div1520 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    int32_t  upper_dash_mask1432 = (  op_dash_mul1521 ( (  op_dash_div1520 ( (  upper1431 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast304 ) ( (  op_dash_sub164 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1433 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1434 ) ) );
}

static  size_t   reduce1910 (    struct IntStrIter_1909  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct IntStrIter_1909  it1100 = ( (  into_dash_iter1911 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1101 = ( (  next1912 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_297_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_297_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1921 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1921);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1922;
    return (  temp1922 );
}

static  size_t   lam1923 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add311 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1908 (    struct IntStrIter_1909  it1105 ) {
    return ( (  reduce1910 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1923 ) ) );
}

static  int32_t   count_dash_digits1926 (    int32_t  self1437 ) {
    if ( (  eq558 ( (  self1437 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp157 ( (  self1437 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div1520 ( (  self1437 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1438 = (  op_dash_add159 ( (  digits1438 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1909   int_dash_iter1925 (    int32_t  int1441 ) {
    if ( (  cmp157 ( (  int1441 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1909) { .f_int = (  op_dash_neg801 ( (  int1441 ) ) ) , .f_len = ( (  count_dash_digits1926 ) ( (  op_dash_neg801 ( (  int1441 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1909) { .f_int = (  int1441 ) , .f_len = ( (  count_dash_digits1926 ) ( (  int1441 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1909   chars1924 (    int32_t  self1450 ) {
    return ( (  int_dash_iter1925 ) ( (  self1450 ) ) );
}

static  enum Unit_8   set_dash_screen_dash_colors1930 (    struct Screen_276 *  screen3545 ,    struct Color_138  fg3547 ,    struct Color_138  bg3549 ) {
    (*  screen3545 ) .f_default_dash_fg = (  fg3547 );
    (*  screen3545 ) .f_default_dash_bg = (  bg3549 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors1929 (    struct Screen_276 *  screen4136 ,    struct Colors_173  colors4138 ) {
    ( (  set_dash_screen_dash_colors1930 ) ( (  screen4136 ) ,  ( (  colors4138 ) .f_fg ) ,  ( (  colors4138 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   abs1931 (    int32_t  x1335 ) {
    return ( (  cmp157 ( (  x1335 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ? (  x1335 ) : (  op_dash_neg801 ( (  x1335 ) ) ) );
}

struct Map_1934 {
    struct IntStrIter_1909  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1934 Map_1934_Map (  struct IntStrIter_1909  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1934 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1934   into_dash_iter1936 (    struct Map_1934  self797 ) {
    return (  self797 );
}

static  struct Maybe_155   next1937 (    struct Map_1934 *  dref799 ) {
    struct Maybe_297  dref802 = ( (  next1912 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_155) { .tag = Maybe_155_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_297_Just_t ) {
            return ( ( Maybe_155_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1935 (    struct Map_1934  iterable1094 ,    int32_t  base1096 ,    int32_t (*  fun1098 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1099 = (  base1096 );
    struct Map_1934  it1100 = ( (  into_dash_iter1936 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1101 = ( (  next1937 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_155_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_155_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1938 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1938);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1939;
    return (  temp1939 );
}

static  int32_t   lam1940 (    int32_t  v1113 ,    int32_t  s1115 ) {
    return (  op_dash_add159 ( (  v1113 ) , (  s1115 ) ) );
}

static  int32_t   sum1933 (    struct Map_1934  it1111 ) {
    return ( (  reduce1935 ) ( (  it1111 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1940 ) ) );
}

static  struct Map_1934   map1941 (    struct IntStrIter_1909  iterable806 ,    int32_t (*  fun808 )(    struct Char_65  ) ) {
    struct IntStrIter_1909  it809 = ( (  into_dash_iter1911 ) ( (  iterable806 ) ) );
    return ( ( Map_1934_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  enum Unit_8   put_dash_char1945 (    struct Screen_276 *  screen3573 ,    struct Char_65  c3575 ,    int32_t  x3577 ,    int32_t  y3579 ) {
    int32_t  w3580 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3573 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp157 ( (  x3577 ) , (  w3580 ) ) != 0 ) || (  cmp157 ( (  y3579 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3573 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp157 ( (  x3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp157 ( (  y3579 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3581 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1521 ( (  y3579 ) , (  w3580 ) ) ) , (  x3577 ) ) ) ) );
    struct Color_138  fg3582 = ( ( * (  screen3573 ) ) .f_default_dash_fg );
    struct Color_138  bg3583 = ( ( * (  screen3573 ) ) .f_default_dash_bg );
    struct Char_65  c3584 = (  c3575 );
    int32_t  char_dash_width3585 = ( (  wcwidth1111 ) ( (  c3584 ) ) );
    if ( ( (  cmp157 ( (  x3577 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp157 ( ( (  elem_dash_get852 ( ( ( * (  screen3573 ) ) .f_current ) , (  op_dash_sub289 ( (  i3581 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_278  pc3586 = (  elem_dash_get852 ( ( ( * (  screen3573 ) ) .f_current ) , (  op_dash_sub289 ( (  i3581 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set848 ) ( ( ( * (  screen3573 ) ) .f_current ) ,  (  op_dash_sub289 ( (  i3581 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_278) { .f_c = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3586 ) .f_fg ) , .f_bg = ( (  pc3586 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set848 ) ( ( ( * (  screen3573 ) ) .f_current ) ,  (  i3581 ) ,  ( (struct Cell_278) { .f_c = (  c3584 ) , .f_fg = (  fg3582 ) , .f_bg = (  bg3583 ) , .f_char_dash_width = (  char_dash_width3585 ) } ) ) );
    struct RangeIter_153  temp1946 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( (  x3577 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min658 ) ( (  op_dash_sub164 ( (  op_dash_add159 ( (  x3577 ) , (  char_dash_width3585 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3580 ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1947 =  next156 (&temp1946);
        if (  __cond1947 .tag == 0 ) {
            break;
        }
        int32_t  xx3588 =  __cond1947 .stuff .Maybe_155_Just_s .field0;
        size_t  i3589 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1521 ( (  y3579 ) , (  w3580 ) ) ) , (  xx3588 ) ) ) ) );
        ( (  set848 ) ( ( ( * (  screen3573 ) ) .f_current ) ,  (  i3589 ) ,  ( (struct Cell_278) { .f_c = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3582 ) , .f_bg = (  bg3583 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1942 (    struct Screen_276 *  screen3592 ,    int32_t  s3594 ,    int32_t  x3596 ,    int32_t  y3598 ) {
    int32_t  w3599 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3592 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3598 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3598 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3592 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3600 = (  op_dash_add159 ( (  op_dash_mul1521 ( (  y3598 ) , (  w3599 ) ) ) , (  x3596 ) ) );
    int32_t  x3601 = ( (  min658 ) ( (  x3596 ) ,  (  w3599 ) ) );
    size_t  max_dash_len3602 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3599 ) , (  x3601 ) ) ) ) );
    int32_t  xx3603 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_1909  temp1943 =  into_dash_iter1911 ( ( (  chars1924 ) ( (  s3594 ) ) ) );
    while (true) {
        struct Maybe_297  __cond1944 =  next1912 (&temp1943);
        if (  __cond1944 .tag == 0 ) {
            break;
        }
        struct Char_65  c3605 =  __cond1944 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1945 ) ( (  screen3592 ) ,  (  c3605 ) ,  (  op_dash_add159 ( (  x3601 ) , (  xx3603 ) ) ) ,  (  y3598 ) ) );
        xx3603 = (  op_dash_add159 ( (  xx3603 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3605 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1932 (    struct Screen_276 *  screen3608 ,    int32_t  s3610 ,    int32_t  x3612 ,    int32_t  y3614 ) {
    int32_t  slen3615 = ( (  sum1933 ) ( ( (  map1941 ) ( ( (  chars1924 ) ( (  s3610 ) ) ) ,  (  rendered_dash_wcwidth1109 ) ) ) ) );
    int32_t  w3616 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3608 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3617 = (  op_dash_sub164 ( (  op_dash_sub164 ( (  w3616 ) , (  x3612 ) ) ) , (  slen3615 ) ) );
    ( (  draw_dash_str1942 ) ( (  screen3608 ) ,  (  s3610 ) ,  (  x3617 ) ,  (  y3614 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1949 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct StrConcat_1949 StrConcat_1949_StrConcat (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1949 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1952 {
    struct StrView_27  field0;
    struct StrConcat_1949  field1;
};

static struct StrConcat_1952 StrConcat_1952_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1949  field1 ) {
    return ( struct StrConcat_1952 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1951 {
    struct StrConcat_1952  field0;
    struct Char_65  field1;
};

static struct StrConcat_1951 StrConcat_1951_StrConcat (  struct StrConcat_1952  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1951 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1954 (    struct StrConcat_1949  self1510 ) {
    struct StrConcat_1949  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str389 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1953 (    struct StrConcat_1952  self1510 ) {
    struct StrConcat_1952  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str328 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str1954 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1950 (    struct StrConcat_1951  self1510 ) {
    struct StrConcat_1951  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str1953 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1948 (    bool  cond1720 ,    struct StrConcat_1949  msg1722 ) {
    if ( ( ! (  cond1720 ) ) ) {
        ( (  print_dash_str1950 ) ( ( ( StrConcat_1951_StrConcat ) ( ( ( StrConcat_1952_StrConcat ) ( ( (  from_dash_string199 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1722 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1956 {
    struct StrViewIter_458  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1956   into_dash_iter1957 (    struct AppendIter_1956  self1020 ) {
    return (  self1020 );
}

static  struct AppendIter_1956   append1958 (    struct StrViewIter_458  it1007 ,    struct Char_65  e1009 ) {
    return ( (struct AppendIter_1956) { .f_it = ( (  into_dash_iter459 ) ( (  it1007 ) ) ) , .f_elem = (  e1009 ) , .f_appended = ( false ) } );
}

static  struct Maybe_297   next1960 (    struct AppendIter_1956 *  self1023 ) {
    struct Maybe_297  dref1024 = ( (  next463 ) ( ( & ( ( * (  self1023 ) ) .f_it ) ) ) );
    if ( dref1024.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1024 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1024.tag == Maybe_297_None_t ) {
            if ( ( ! ( ( * (  self1023 ) ) .f_appended ) ) ) {
                (*  self1023 ) .f_appended = ( true );
                return ( ( Maybe_297_Just ) ( ( ( * (  self1023 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  bool   between1962 (    struct Pos_26  c1338 ,    struct Pos_26  l1340 ,    struct Pos_26  r1342 ) {
    struct Pos_26  from1343 = ( (  min554 ) ( (  l1340 ) ,  (  r1342 ) ) );
    struct Pos_26  to1344 = ( (  max556 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp555 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp555 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1961 (    struct Pane_219 *  pane4104 ,    struct Pos_26  pos4106 ) {
    return ( {  struct Maybe_34  dref4107 = ( ( * (  pane4104 ) ) .f_sel ) ; dref4107.tag == Maybe_34_Just_t ? ( (  between1962 ) ( (  pos4106 ) ,  ( ( * (  pane4104 ) ) .f_cursor ) ,  ( dref4107 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1964 {
    ;
    struct Theme_172 *  theme4148;
    struct Screen_276 *  screen4141;
    ;
};

struct envunion1965 {
    enum Unit_8  (*fun) (  struct env1964*  ,    enum HighlightType_20  );
    struct env1964 env;
};

static  enum Unit_8   if_dash_just1963 (    struct Maybe_203  x1292 ,   struct envunion1965  fun1294 ) {
    struct Maybe_203  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_203_Just_t ) {
        struct envunion1965  temp1966 = (  fun1294 );
        ( temp1966.fun ( &temp1966.env ,  ( dref1295 .stuff .Maybe_203_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_203_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1971 (    struct List_17 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min467 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_297   head1974 (    struct Scanner_955 *  it1143 ) {
    struct Scanner_955  temp1975 = ( (  into_dash_iter971 ) ( (  it1143 ) ) );
    return ( (  next977 ) ( ( &temp1975 ) ) );
}

static  bool   null1973 (    struct Scanner_955 *  it1152 ) {
    struct Maybe_297  dref1153 = ( (  head1974 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_297   peek1976 (    struct Scanner_955 *  sc3224 ) {
    return ( (  head1343 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
}

static  bool   eq1978 (    struct Maybe_297  l141 ,    struct Maybe_297  r143 ) {
    struct Tuple2_1758  dref144 = ( ( Tuple2_1758_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
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

static  bool   try_dash_char1977 (    struct Scanner_955 *  sc3227 ,    struct Char_65  char3229 ) {
    if ( (  eq1978 ( ( (  peek1976 ) ( (  sc3227 ) ) ) , ( ( Maybe_297_Just ) ( (  char3229 ) ) ) ) ) ) {
        ( (  drop_prime_980 ) ( (  sc3227 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   char_dash_satisfies1980 (    struct Scanner_955 *  sc3232 ,    bool (*  condition3234 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3235 = ( (  head1343 ) ( ( ( * (  sc3232 ) ) .f_s ) ) );
    if ( dref3235.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3234 ) ( ( dref3235 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3232 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3235.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1979 (    struct Scanner_955 *  sc3250 ,    bool (*  condition3252 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1980 ) ( (  sc3250 ) ,  (  condition3252 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1981 (    struct Char_65  c3951 ) {
    return ( !  eq469 ( (  c3951 ) , ( (  from_dash_charlike346 ) ( ( "]" ) ,  ( 1 ) ) ) ) );
}

struct TypeSize_1988 {
    size_t  f_size;
};

static  struct TypeSize_1988   get_dash_typesize1987 (  ) {
    struct Highlight_19  temp1989;
    return ( (struct TypeSize_1988) { .f_size = ( sizeof( ( (  temp1989 ) ) ) ) } );
}

static  struct Highlight_19 *   cast_dash_ptr1990 (    void *  p359 ) {
    return ( (struct Highlight_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1986 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1987 ) ( ) ) ) .f_size );
    struct Highlight_19 *  ptr1959 = ( (  cast_dash_ptr1990 ) ( ( ( malloc ) ( (  op_dash_mul405 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1991 {
    ;
    ;
    struct Slice_18  new_dash_slice2044;
};

struct Tuple2_1993 {
    struct Highlight_19  field0;
    int32_t  field1;
};

static struct Tuple2_1993 Tuple2_1993_Tuple2 (  struct Highlight_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1993 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1992 {
    enum Unit_8  (*fun) (  struct env1991*  ,    struct Tuple2_1993  );
    struct env1991 env;
};

static  struct Highlight_19 *   offset_dash_ptr1997 (    struct Highlight_19 *  x338 ,    int64_t  count340 ) {
    struct Highlight_19  temp1998;
    return ( (struct Highlight_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1998 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_19 *   get_dash_ptr1996 (    struct Slice_18  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp290 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic323 ) ( ( ( StrConcat_321_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_19 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1997 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set1995 (    struct Slice_18  slice1776 ,    size_t  i1778 ,    struct Highlight_19  x1780 ) {
    struct Highlight_19 *  ep1781 = ( (  get_dash_ptr1996 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1994 (   struct env1991* env ,    struct Tuple2_1993  dref2045 ) {
    return ( (  set1995 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size412 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct SliceIter_2001 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2000 {
    struct SliceIter_2001  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

static  struct Zip_2000   into_dash_iter2003 (    struct Zip_2000  self912 ) {
    return (  self912 );
}

struct Maybe_2004 {
    enum {
        Maybe_2004_None_t,
        Maybe_2004_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1993  field0;
        } Maybe_2004_Just_s;
    } stuff;
};

static struct Maybe_2004 Maybe_2004_Just (  struct Tuple2_1993  field0 ) {
    return ( struct Maybe_2004 ) { .tag = Maybe_2004_Just_t, .stuff = { .Maybe_2004_Just_s = { .field0 = field0 } } };
};

struct Maybe_2006 {
    enum {
        Maybe_2006_None_t,
        Maybe_2006_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_19  field0;
        } Maybe_2006_Just_s;
    } stuff;
};

static struct Maybe_2006 Maybe_2006_Just (  struct Highlight_19  field0 ) {
    return ( struct Maybe_2006 ) { .tag = Maybe_2006_Just_t, .stuff = { .Maybe_2006_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2006   next2007 (    struct SliceIter_2001 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2006) { .tag = Maybe_2006_None_t } );
    }
    struct Highlight_19  elem1832 = ( * ( (  offset_dash_ptr1997 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2006_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2004   next2005 (    struct Zip_2000 *  self915 ) {
    struct Zip_2000  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_2006  dref917 = ( (  next2007 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_2006_None_t ) {
            return ( (struct Maybe_2004) { .tag = Maybe_2004_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_2006_Just_t ) {
                struct Maybe_155  dref919 = ( (  next422 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_2004) { .tag = Maybe_2004_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_155_Just_t ) {
                        ( (  next2007 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2004_Just ) ( ( ( Tuple2_1993_Tuple2 ) ( ( dref917 .stuff .Maybe_2006_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1999 (    struct Zip_2000  iterable1075 ,   struct envunion1992  fun1077 ) {
    struct Zip_2000  temp2002 = ( (  into_dash_iter2003 ) ( (  iterable1075 ) ) );
    struct Zip_2000 *  it1078 = ( &temp2002 );
    while ( ( true ) ) {
        struct Maybe_2004  dref1079 = ( (  next2005 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_2004_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_2004_Just_t ) {
                struct envunion1992  temp2008 = (  fun1077 );
                ( temp2008.fun ( &temp2008.env ,  ( dref1079 .stuff .Maybe_2004_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2001   into_dash_iter2010 (    struct Slice_18  self1824 ) {
    return ( (struct SliceIter_2001) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2000   zip2009 (    struct Slice_18  left923 ,    struct FromIter_416  right925 ) {
    struct SliceIter_2001  left_dash_it926 = ( (  into_dash_iter2010 ) ( (  left923 ) ) );
    struct FromIter_416  right_dash_it927 = ( (  into_dash_iter426 ) ( (  right925 ) ) );
    return ( (struct Zip_2000) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  void *   cast_dash_ptr2012 (    struct Highlight_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2011 (    enum CAllocator_10  dref1961 ,    struct Slice_18  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2012 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1985 (   struct env5* env ,    struct List_17 *  list2043 ) {
    if ( (  eq399 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1986 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq399 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2044 = ( (  allocate1986 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul405 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1991 envinst1991 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1992  fun2048 = ( (struct envunion1992){ .fun = (  enum Unit_8  (*) (  struct env1991*  ,    struct Tuple2_1993  ) )lam1994 , .env =  envinst1991 } );
            ( (  for_dash_each1999 ) ( ( (  zip2009 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free2011 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1983 (   struct env35* env ,    struct List_17 *  list2051 ,    struct Highlight_19  elem2053 ) {
    struct envunion36  temp1984 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_17 *  ) )grow_dash_if_dash_full1985 , .env =  env->envinst5 } );
    ( temp1984.fun ( &temp1984.env ,  (  list2051 ) ) );
    ( (  set1995 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add311 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2014 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2016 (    struct Scanner_955 *  sc3232 ,    bool (*  condition3234 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3235 = ( (  head1343 ) ( ( ( * (  sc3232 ) ) .f_s ) ) );
    if ( dref3235.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3234 ) ( ( dref3235 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3232 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3235.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2015 (    struct Scanner_955 *  sc3250 ,    bool (*  condition3252 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2016 ) ( (  sc3250 ) ,  (  condition3252 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2017 (    struct Char_65  c3954 ) {
    return ( ( !  eq469 ( (  c3954 ) , ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) && ( !  eq469 ( (  c3954 ) , ( (  from_dash_charlike346 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2019 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2020 (    struct Scanner_955 *  sc3232 ,    bool (*  condition3234 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3235 = ( (  head1343 ) ( ( ( * (  sc3232 ) ) .f_s ) ) );
    if ( dref3235.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3234 ) ( ( dref3235 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3232 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3235.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2022 (    struct Scanner_955 *  sc3232 ,    bool (*  condition3234 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3235 = ( (  head1343 ) ( ( ( * (  sc3232 ) ) .f_s ) ) );
    if ( dref3235.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3234 ) ( ( dref3235 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3232 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3235.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2021 (    struct Scanner_955 *  sc3250 ,    bool (*  condition3252 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2022 ) ( (  sc3250 ) ,  (  condition3252 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2023 (    struct Char_65  c3957 ) {
    return ( (  eq1330 ( ( (  char_dash_type1333 ) ( (  c3957 ) ) ) , ( CharType_1331_CharWord ) ) ) || (  eq469 ( (  c3957 ) , ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2025 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2027 {
    struct StrView_27 _arr [2];
};

struct env2028 {
    struct Scanner_955 *  sc3947;
    ;
};

struct envunion2029 {
    bool  (*fun) (  struct env2028*  ,    struct StrView_27  );
    struct env2028 env;
};

struct env2031 {
    struct envunion2029  fun1136;
};

struct envunion2032 {
    bool  (*fun) (  struct env2031*  ,    struct StrView_27  ,    bool  );
    struct env2031 env;
};

struct ArrayIter_2033 {
    struct Array_2027  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2033   into_dash_iter2034 (    struct Array_2027  self2335 ) {
    return ( (struct ArrayIter_2033) { .f_backing = (  self2335 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2038 (    struct Array_2027 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   offset_dash_ptr2039 (    struct StrView_27 *  x338 ,    int64_t  count340 ) {
    struct StrView_27  temp2040;
    return ( (struct StrView_27 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2040 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr2037 (    struct Array_2027 *  arr2263 ,    size_t  i2266 ) {
    if ( ( (  cmp290 ( (  i2266 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2266 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2266 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2267 = ( ( (  cast_dash_ptr2038 ) ( (  arr2263 ) ) ) );
    return ( (  offset_dash_ptr2039 ) ( (  p2267 ) ,  ( (int64_t ) (  i2266 ) ) ) );
}

static  struct StrView_27   get2036 (    struct Array_2027 *  arr2270 ,    size_t  i2273 ) {
    return ( * ( (  get_dash_ptr2037 ) ( (  arr2270 ) ,  (  i2273 ) ) ) );
}

static  struct Maybe_80   next2035 (    struct ArrayIter_2033 *  self2342 ) {
    if ( (  cmp290 ( ( ( * (  self2342 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2344 = ( (  get2036 ) ( ( & ( ( * (  self2342 ) ) .f_backing ) ) ,  ( ( * (  self2342 ) ) .f_cur ) ) );
    (*  self2342 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2342 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2344 ) ) );
}

static  bool   reduce2030 (    struct Array_2027  iterable1094 ,    bool  base1096 ,   struct envunion2032  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2033  it1100 = ( (  into_dash_iter2034 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1101 = ( (  next2035 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_80_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_80_Just_t ) {
                struct envunion2032  temp2041 = (  fun1098 );
                x1099 = ( temp2041.fun ( &temp2041.env ,  ( dref1101 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2042 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2042);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2043;
    return (  temp2043 );
}

static  bool   lam2044 (   struct env2031* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2029  temp2045 = ( env->fun1136 );
    return ( ( temp2045.fun ( &temp2045.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2026 (    struct Array_2027  it1134 ,   struct envunion2029  fun1136 ) {
    struct env2031 envinst2031 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2030 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2032){ .fun = (  bool  (*) (  struct env2031*  ,    struct StrView_27  ,    bool  ) )lam2044 , .env =  envinst2031 } ) ) );
}

static  struct Array_2027   from_dash_listlike2046 (    struct Array_2027  self330 ) {
    return (  self330 );
}

static  struct StrViewIter_458   own2051 (    struct StrViewIter_458  x1252 ) {
    return (  x1252 );
}

static  bool   matches_dash_str2048 (    struct Scanner_955 *  sc3239 ,    struct StrView_27  s3241 ) {
    size_t  skip3242 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_458  temp2049 = ( (  chars460 ) ( (  s3241 ) ) );
    struct StrViewIter_458 *  ss3243 = ( &temp2049 );
    struct StrViewIter_458  temp2050 = ( (  own2051 ) ( ( ( * (  sc3239 ) ) .f_s ) ) );
    struct StrViewIter_458 *  sccp3244 = ( &temp2050 );
    while ( ( true ) ) {
        struct Tuple2_1758  dref3245 = ( ( Tuple2_1758_Tuple2 ) ( ( (  next463 ) ( (  sccp3244 ) ) ) ,  ( (  next463 ) ( (  ss3243 ) ) ) ) );
        if ( dref3245 .field1.tag == Maybe_297_None_t ) {
            ( (  drop_prime_980 ) ( (  sc3239 ) ,  (  skip3242 ) ) );
            return ( true );
        }
        else {
            if ( dref3245 .field0.tag == Maybe_297_Just_t && dref3245 .field1.tag == Maybe_297_Just_t ) {
                if ( ( !  eq469 ( ( dref3245 .field0 .stuff .Maybe_297_Just_s .field0 ) , ( dref3245 .field1 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3242 = (  op_dash_add311 ( (  skip3242 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2047 (   struct env2028* env ,    struct StrView_27  sym3960 ) {
    return ( (  matches_dash_str2048 ) ( ( env->sc3947 ) ,  (  sym3960 ) ) );
}

struct envunion2053 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2055 {
    struct StrView_27 _arr [12];
};

struct env2056 {
    struct Scanner_955 *  sc3947;
    ;
};

struct envunion2057 {
    bool  (*fun) (  struct env2056*  ,    struct StrView_27  );
    struct env2056 env;
};

struct env2059 {
    struct envunion2057  fun1136;
};

struct envunion2060 {
    bool  (*fun) (  struct env2059*  ,    struct StrView_27  ,    bool  );
    struct env2059 env;
};

struct ArrayIter_2061 {
    struct Array_2055  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2061   into_dash_iter2062 (    struct Array_2055  self2335 ) {
    return ( (struct ArrayIter_2061) { .f_backing = (  self2335 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2066 (    struct Array_2055 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2065 (    struct Array_2055 *  arr2263 ,    size_t  i2266 ) {
    if ( ( (  cmp290 ( (  i2266 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2266 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2266 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2267 = ( ( (  cast_dash_ptr2066 ) ( (  arr2263 ) ) ) );
    return ( (  offset_dash_ptr2039 ) ( (  p2267 ) ,  ( (int64_t ) (  i2266 ) ) ) );
}

static  struct StrView_27   get2064 (    struct Array_2055 *  arr2270 ,    size_t  i2273 ) {
    return ( * ( (  get_dash_ptr2065 ) ( (  arr2270 ) ,  (  i2273 ) ) ) );
}

static  struct Maybe_80   next2063 (    struct ArrayIter_2061 *  self2342 ) {
    if ( (  cmp290 ( ( ( * (  self2342 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2344 = ( (  get2064 ) ( ( & ( ( * (  self2342 ) ) .f_backing ) ) ,  ( ( * (  self2342 ) ) .f_cur ) ) );
    (*  self2342 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2342 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2344 ) ) );
}

static  bool   reduce2058 (    struct Array_2055  iterable1094 ,    bool  base1096 ,   struct envunion2060  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2061  it1100 = ( (  into_dash_iter2062 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1101 = ( (  next2063 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_80_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_80_Just_t ) {
                struct envunion2060  temp2067 = (  fun1098 );
                x1099 = ( temp2067.fun ( &temp2067.env ,  ( dref1101 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2068 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2068);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2069;
    return (  temp2069 );
}

static  bool   lam2070 (   struct env2059* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2057  temp2071 = ( env->fun1136 );
    return ( ( temp2071.fun ( &temp2071.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2054 (    struct Array_2055  it1134 ,   struct envunion2057  fun1136 ) {
    struct env2059 envinst2059 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2058 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2060){ .fun = (  bool  (*) (  struct env2059*  ,    struct StrView_27  ,    bool  ) )lam2070 , .env =  envinst2059 } ) ) );
}

static  struct Array_2055   from_dash_listlike2072 (    struct Array_2055  self330 ) {
    return (  self330 );
}

static  bool   lam2073 (   struct env2056* env ,    struct StrView_27  sym3964 ) {
    return ( (  matches_dash_str2048 ) ( ( env->sc3947 ) ,  (  sym3964 ) ) );
}

struct envunion2075 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2077 (    struct Scanner_955 *  sc3232 ,    bool (*  condition3234 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3235 = ( (  head1343 ) ( ( ( * (  sc3232 ) ) .f_s ) ) );
    if ( dref3235.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3234 ) ( ( dref3235 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3232 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3235.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2076 (    struct Scanner_955 *  sc3250 ,    bool (*  condition3252 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2077 ) ( (  sc3250 ) ,  (  condition3252 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2078 (    struct Char_65  c3968 ) {
    return ( (  eq1330 ( ( (  char_dash_type1333 ) ( (  c3968 ) ) ) , ( CharType_1331_CharWord ) ) ) || (  eq469 ( (  c3968 ) , ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2079 (    struct Maybe_297  x1283 ,    bool (*  fun1285 )(    struct Char_65  ) ,    bool  default1287 ) {
    return ( {  struct Maybe_297  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_297_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  bool   is_dash_upper2080 (    struct Char_65  c2419 ) {
    return ( (  eq399 ( ( (  c2419 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1336 ) ( (  c2419 ) ,  ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2081 {
    struct StrView_27 _arr [5];
};

static  struct Array_2081   from_dash_listlike2082 (    struct Array_2081  self330 ) {
    return (  self330 );
}

struct Array_2083 {
    struct StrView_27 _arr [15];
};

static  struct Array_2083   from_dash_listlike2084 (    struct Array_2083  self330 ) {
    return (  self330 );
}

struct env2086 {
    struct StrView_27  ident3972;
    ;
};

struct envunion2087 {
    bool  (*fun) (  struct env2086*  ,    struct StrView_27  );
    struct env2086 env;
};

struct env2089 {
    struct envunion2087  fun1136;
};

struct envunion2090 {
    bool  (*fun) (  struct env2089*  ,    struct StrView_27  ,    bool  );
    struct env2089 env;
};

struct ArrayIter_2091 {
    struct Array_2081  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2091   into_dash_iter2092 (    struct Array_2081  self2335 ) {
    return ( (struct ArrayIter_2091) { .f_backing = (  self2335 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2096 (    struct Array_2081 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2095 (    struct Array_2081 *  arr2263 ,    size_t  i2266 ) {
    if ( ( (  cmp290 ( (  i2266 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2266 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2266 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2267 = ( ( (  cast_dash_ptr2096 ) ( (  arr2263 ) ) ) );
    return ( (  offset_dash_ptr2039 ) ( (  p2267 ) ,  ( (int64_t ) (  i2266 ) ) ) );
}

static  struct StrView_27   get2094 (    struct Array_2081 *  arr2270 ,    size_t  i2273 ) {
    return ( * ( (  get_dash_ptr2095 ) ( (  arr2270 ) ,  (  i2273 ) ) ) );
}

static  struct Maybe_80   next2093 (    struct ArrayIter_2091 *  self2342 ) {
    if ( (  cmp290 ( ( ( * (  self2342 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2344 = ( (  get2094 ) ( ( & ( ( * (  self2342 ) ) .f_backing ) ) ,  ( ( * (  self2342 ) ) .f_cur ) ) );
    (*  self2342 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2342 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2344 ) ) );
}

static  bool   reduce2088 (    struct Array_2081  iterable1094 ,    bool  base1096 ,   struct envunion2090  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2091  it1100 = ( (  into_dash_iter2092 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1101 = ( (  next2093 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_80_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_80_Just_t ) {
                struct envunion2090  temp2097 = (  fun1098 );
                x1099 = ( temp2097.fun ( &temp2097.env ,  ( dref1101 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2098 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2098);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2099;
    return (  temp2099 );
}

static  bool   lam2100 (   struct env2089* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2087  temp2101 = ( env->fun1136 );
    return ( ( temp2101.fun ( &temp2101.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2085 (    struct Array_2081  it1134 ,   struct envunion2087  fun1136 ) {
    struct env2089 envinst2089 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2088 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2090){ .fun = (  bool  (*) (  struct env2089*  ,    struct StrView_27  ,    bool  ) )lam2100 , .env =  envinst2089 } ) ) );
}

static  bool   lam2102 (   struct env2086* env ,    struct StrView_27  kw3976 ) {
    return (  eq485 ( (  kw3976 ) , ( env->ident3972 ) ) );
}

struct env2104 {
    struct StrView_27  ident3972;
    ;
};

struct envunion2105 {
    bool  (*fun) (  struct env2104*  ,    struct StrView_27  );
    struct env2104 env;
};

struct env2107 {
    struct envunion2105  fun1136;
};

struct envunion2108 {
    bool  (*fun) (  struct env2107*  ,    struct StrView_27  ,    bool  );
    struct env2107 env;
};

struct ArrayIter_2109 {
    struct Array_2083  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2109   into_dash_iter2110 (    struct Array_2083  self2335 ) {
    return ( (struct ArrayIter_2109) { .f_backing = (  self2335 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2114 (    struct Array_2083 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2113 (    struct Array_2083 *  arr2263 ,    size_t  i2266 ) {
    if ( ( (  cmp290 ( (  i2266 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp290 ( (  i2266 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2266 ) ) ) ,  ( (  from_dash_string199 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2267 = ( ( (  cast_dash_ptr2114 ) ( (  arr2263 ) ) ) );
    return ( (  offset_dash_ptr2039 ) ( (  p2267 ) ,  ( (int64_t ) (  i2266 ) ) ) );
}

static  struct StrView_27   get2112 (    struct Array_2083 *  arr2270 ,    size_t  i2273 ) {
    return ( * ( (  get_dash_ptr2113 ) ( (  arr2270 ) ,  (  i2273 ) ) ) );
}

static  struct Maybe_80   next2111 (    struct ArrayIter_2109 *  self2342 ) {
    if ( (  cmp290 ( ( ( * (  self2342 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    }
    struct StrView_27  e2344 = ( (  get2112 ) ( ( & ( ( * (  self2342 ) ) .f_backing ) ) ,  ( ( * (  self2342 ) ) .f_cur ) ) );
    (*  self2342 ) .f_cur = (  op_dash_add311 ( ( ( * (  self2342 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_80_Just ) ( (  e2344 ) ) );
}

static  bool   reduce2106 (    struct Array_2083  iterable1094 ,    bool  base1096 ,   struct envunion2108  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2109  it1100 = ( (  into_dash_iter2110 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_80  dref1101 = ( (  next2111 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_80_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_80_Just_t ) {
                struct envunion2108  temp2115 = (  fun1098 );
                x1099 = ( temp2115.fun ( &temp2115.env ,  ( dref1101 .stuff .Maybe_80_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2116 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2116);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2117;
    return (  temp2117 );
}

static  bool   lam2118 (   struct env2107* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2105  temp2119 = ( env->fun1136 );
    return ( ( temp2119.fun ( &temp2119.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2103 (    struct Array_2083  it1134 ,   struct envunion2105  fun1136 ) {
    struct env2107 envinst2107 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2106 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2108){ .fun = (  bool  (*) (  struct env2107*  ,    struct StrView_27  ,    bool  ) )lam2118 , .env =  envinst2107 } ) ) );
}

static  bool   lam2120 (   struct env2104* env ,    struct StrView_27  kw3978 ) {
    return (  eq485 ( (  kw3978 ) , ( env->ident3972 ) ) );
}

struct envunion2122 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  struct Maybe_967   int2123 (    struct Scanner_955 *  sc3218 ) {
    return ( (  scan_dash_int968 ) ( (  sc3218 ) ) );
}

static  bool   char_dash_satisfies2125 (    struct Scanner_955 *  sc3232 ,    bool (*  condition3234 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3235 = ( (  head1343 ) ( ( ( * (  sc3232 ) ) .f_s ) ) );
    if ( dref3235.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3234 ) ( ( dref3235 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3232 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3235.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2124 (    struct Scanner_955 *  sc3250 ,    bool (*  condition3252 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2125 ) ( (  sc3250 ) ,  (  condition3252 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2126 (    struct Char_65  c2407 ) {
    return ( (  eq399 ( ( (  c2407 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1339 ) ( (  c2407 ) ) ) || ( (  between1336 ) ( (  c2407 ) ,  ( (  from_dash_charlike346 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1336 ) ( (  c2407 ) ,  ( (  from_dash_charlike346 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2128 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2129 (    struct Scanner_955 *  sc3250 ,    bool (*  condition3252 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2020 ) ( (  sc3250 ) ,  (  condition3252 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2131 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2133 (    struct Scanner_955 *  sc3232 ,    bool (*  condition3234 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3235 = ( (  head1343 ) ( ( ( * (  sc3232 ) ) .f_s ) ) );
    if ( dref3235.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3234 ) ( ( dref3235 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3232 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3235.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2132 (    struct Scanner_955 *  sc3250 ,    bool (*  condition3252 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2133 ) ( (  sc3250 ) ,  (  condition3252 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2134 (    struct Char_65  c2413 ) {
    return ( (  eq399 ( ( (  c2413 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1336 ) ( (  c2413 ) ,  ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2136 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2138 (    struct Scanner_955 *  sc3232 ,    bool (*  condition3234 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3235 = ( (  head1343 ) ( ( ( * (  sc3232 ) ) .f_s ) ) );
    if ( dref3235.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3234 ) ( ( dref3235 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3232 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3235.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2137 (    struct Scanner_955 *  sc3250 ,    bool (*  condition3252 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2138 ) ( (  sc3250 ) ,  (  condition3252 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2140 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2142 (    struct Scanner_955 *  sc3232 ,    bool (*  condition3234 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3235 = ( (  head1343 ) ( ( ( * (  sc3232 ) ) .f_s ) ) );
    if ( dref3235.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3234 ) ( ( dref3235 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3232 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3235.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2141 (    struct Scanner_955 *  sc3250 ,    bool (*  condition3252 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2142 ) ( (  sc3250 ) ,  (  condition3252 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2143 (    struct Char_65  c2410 ) {
    return ( (  eq399 ( ( (  c2410 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq469 ( (  c2410 ) , ( (  from_dash_charlike346 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) || (  eq469 ( (  c2410 ) , ( (  from_dash_charlike346 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2145 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2147 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2149 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2151 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2154 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2156 (    struct Scanner_955 *  sc3232 ,    bool (*  condition3234 )(    struct Char_65  ) ) {
    struct Maybe_297  dref3235 = ( (  head1343 ) ( ( ( * (  sc3232 ) ) .f_s ) ) );
    if ( dref3235.tag == Maybe_297_Just_t ) {
        if ( ( (  condition3234 ) ( ( dref3235 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_980 ) ( (  sc3232 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3235.tag == Maybe_297_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2155 (    struct Scanner_955 *  sc3250 ,    bool (*  condition3252 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2156 ) ( (  sc3250 ) ,  (  condition3252 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2158 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2160 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2162 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1970 (   struct env134* env ,    struct TextBuf_104 *  self3941 ,    struct Line_16 *  line3943 ) {
    if ( ( ! ( ( * (  line3943 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_17 *  hls3944 = ( & ( ( * (  line3943 ) ) .f_highlights ) );
    ( (  trim1971 ) ( (  hls3944 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv3945 = ( (  from_dash_bytes1098 ) ( ( (  to_dash_slice565 ) ( ( ( * (  line3943 ) ) .f_line ) ) ) ) );
    enum Filetype_107  dref3946 = ( ( * (  self3941 ) ) .f_filetype );
    switch (  dref3946 ) {
        case Filetype_107_Text : {
            break;
        }
        case Filetype_107_KC : {
            struct Scanner_955  temp1972 = ( (  mk_dash_from_dash_str957 ) ( (  line_dash_sv3945 ) ) );
            struct Scanner_955 *  sc3947 = ( &temp1972 );
            while ( ( ! ( (  null1973 ) ( (  sc3947 ) ) ) ) ) {
                int32_t  from_dash_off3948 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                struct Maybe_297  first_dash_char3949 = ( (  peek1976 ) ( (  sc3947 ) ) );
                if ( ( (  try_dash_char1977 ) ( (  sc3947 ) ,  ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  try_dash_char1977 ) ( (  sc3947 ) ,  ( (  from_dash_charlike346 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  skip_dash_while1979 ) ( (  sc3947 ) ,  (  lam1981 ) ) );
                        ( (  drop_prime_980 ) ( (  sc3947 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        int32_t  to_dash_off3952 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                        struct envunion135  temp1982 = ( (struct envunion135){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                        ( temp1982.fun ( &temp1982.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line_dash_sv3945 ) ) ) ) ) , .f_type = ( HighlightType_20_Special3 ) } ) ) );
                    } else {
                        struct envunion2014  temp2013 = ( (struct envunion2014){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                        ( temp2013.fun ( &temp2013.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line_dash_sv3945 ) ) ) ) ) , .f_type = ( HighlightType_20_Comment ) } ) ) );
                    }
                    break;
                } else {
                    if ( ( (  try_dash_char1977 ) ( (  sc3947 ) ,  ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) {
                        while ( ( true ) ) {
                            ( (  skip_dash_while2015 ) ( (  sc3947 ) ,  (  lam2017 ) ) );
                            if ( (  eq1978 ( ( (  peek1976 ) ( (  sc3947 ) ) ) , ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                ( (  drop_prime_980 ) ( (  sc3947 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                if ( (  eq1978 ( ( (  peek1976 ) ( (  sc3947 ) ) ) , ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                    ( (  drop_prime_980 ) ( (  sc3947 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                } else {
                                }
                            } else {
                                ( (  drop_prime_980 ) ( (  sc3947 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                break;
                            }
                        }
                        int32_t  cur_dash_off3955 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2019  temp2018 = ( (struct envunion2019){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                        ( temp2018.fun ( &temp2018.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = (  cur_dash_off3955 ) , .f_type = ( HighlightType_20_String ) } ) ) );
                    } else {
                        if ( ( (  try_dash_char1977 ) ( (  sc3947 ) ,  ( (  from_dash_charlike346 ) ( ( "@" ) ,  ( 1 ) ) ) ) ) ) {
                            if ( ( (  char_dash_satisfies2020 ) ( (  sc3947 ) ,  (  is_dash_alpha1335 ) ) ) ) {
                                ( (  skip_dash_while2021 ) ( (  sc3947 ) ,  (  lam2023 ) ) );
                                int32_t  cur_dash_off3958 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                struct envunion2025  temp2024 = ( (struct envunion2025){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                ( temp2024.fun ( &temp2024.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = (  cur_dash_off3958 ) , .f_type = ( HighlightType_20_Ident3 ) } ) ) );
                            } else {
                            }
                        } else {
                            struct env2028 envinst2028 = {
                                .sc3947 =  sc3947 ,
                            };
                            if ( ( (  any2026 ) ( ( (  from_dash_listlike2046 ) ( ( (struct Array_2027) { ._arr = { ( (  from_dash_string199 ) ( ( "==" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "/=" ) ,  ( 2 ) ) ) } } ) ) ) ,  ( (struct envunion2029){ .fun = (  bool  (*) (  struct env2028*  ,    struct StrView_27  ) )lam2047 , .env =  envinst2028 } ) ) ) ) {
                                int32_t  cur_dash_off3961 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                enum HighlightType_20  type3962 = ( HighlightType_20_Special2 );
                                struct envunion2053  temp2052 = ( (struct envunion2053){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                ( temp2052.fun ( &temp2052.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = (  cur_dash_off3961 ) , .f_type = (  type3962 ) } ) ) );
                            } else {
                                struct env2056 envinst2056 = {
                                    .sc3947 =  sc3947 ,
                                };
                                if ( ( (  any2054 ) ( ( (  from_dash_listlike2072 ) ( ( (struct Array_2055) { ._arr = { ( (  from_dash_string199 ) ( ( "<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1228 ) ( ( "=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1228 ) ( ( "&" ) ,  ( 1 ) ) ) , ( (  from_dash_string199 ) ( ( "->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1228 ) ( ( ":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1228 ) ( ( "(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1228 ) ( ( ")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1228 ) ( ( "{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1228 ) ( ( "}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1228 ) ( ( "[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1228 ) ( ( "]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1228 ) ( ( "," ) ,  ( 1 ) ) ) } } ) ) ) ,  ( (struct envunion2057){ .fun = (  bool  (*) (  struct env2056*  ,    struct StrView_27  ) )lam2073 , .env =  envinst2056 } ) ) ) ) {
                                    int32_t  cur_dash_off3965 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_20  type3966 = ( HighlightType_20_Special1 );
                                    struct envunion2075  temp2074 = ( (struct envunion2075){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                    ( temp2074.fun ( &temp2074.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = (  cur_dash_off3965 ) , .f_type = (  type3966 ) } ) ) );
                                } else {
                                    if ( ( (  char_dash_satisfies2020 ) ( (  sc3947 ) ,  (  is_dash_alpha1335 ) ) ) ) {
                                        ( (  skip_dash_while2076 ) ( (  sc3947 ) ,  (  lam2078 ) ) );
                                        int32_t  cur_dash_off3969 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                        bool  first_dash_char_dash_uppercase3970 = ( (  maybe2079 ) ( (  first_dash_char3949 ) ,  (  is_dash_upper2080 ) ,  ( false ) ) );
                                        enum HighlightType_20  type3971 = ( (  first_dash_char_dash_uppercase3970 ) ? ( HighlightType_20_Ident2 ) : ( HighlightType_20_Ident1 ) );
                                        struct StrView_27  ident3972 = ( ( (  byte_dash_substr484 ) ( (  line_dash_sv3945 ) ,  ( (  i32_dash_size412 ) ( (  from_dash_off3948 ) ) ) ,  ( (  i32_dash_size412 ) ( (  cur_dash_off3969 ) ) ) ) ) );
                                        struct Array_2081  keywords13973 = ( (  from_dash_listlike2082 ) ( ( (struct Array_2081) { ._arr = { ( (  from_dash_string199 ) ( ( "fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "class" ) ,  ( 5 ) ) ) , ( (  from_dash_string199 ) ( ( "inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "external" ) ,  ( 8 ) ) ) , ( (  from_dash_string199 ) ( ( "use" ) ,  ( 3 ) ) ) } } ) ) );
                                        struct Array_2083  keywords23974 = ( (  from_dash_listlike2084 ) ( ( (struct Array_2083) { ._arr = { ( (  from_dash_string199 ) ( ( "if" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "else" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "case" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "for" ) ,  ( 3 ) ) ) , ( (  from_dash_string199 ) ( ( "in" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "while" ) ,  ( 5 ) ) ) , ( (  from_dash_string199 ) ( ( "pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string199 ) ( ( "break" ) ,  ( 5 ) ) ) , ( (  from_dash_string199 ) ( ( "continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string199 ) ( ( "as" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "or" ) ,  ( 2 ) ) ) , ( (  from_dash_string199 ) ( ( "and" ) ,  ( 3 ) ) ) , ( (  from_dash_string199 ) ( ( "not" ) ,  ( 3 ) ) ) , ( (  from_dash_string199 ) ( ( "return" ) ,  ( 6 ) ) ) } } ) ) );
                                        struct env2086 envinst2086 = {
                                            .ident3972 =  ident3972 ,
                                        };
                                        if ( ( (  any2085 ) ( (  keywords13973 ) ,  ( (struct envunion2087){ .fun = (  bool  (*) (  struct env2086*  ,    struct StrView_27  ) )lam2102 , .env =  envinst2086 } ) ) ) ) {
                                            type3971 = ( HighlightType_20_Keyword1 );
                                        } else {
                                            struct env2104 envinst2104 = {
                                                .ident3972 =  ident3972 ,
                                            };
                                            if ( ( (  any2103 ) ( (  keywords23974 ) ,  ( (struct envunion2105){ .fun = (  bool  (*) (  struct env2104*  ,    struct StrView_27  ) )lam2120 , .env =  envinst2104 } ) ) ) ) {
                                                type3971 = ( HighlightType_20_Keyword2 );
                                            } else {
                                                if ( ( ( ! (  first_dash_char_dash_uppercase3970 ) ) && (  eq1978 ( ( (  peek1976 ) ( (  sc3947 ) ) ) , ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                                    type3971 = ( HighlightType_20_Ident4 );
                                                }
                                            }
                                        }
                                        struct envunion2122  temp2121 = ( (struct envunion2122){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                        ( temp2121.fun ( &temp2121.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = (  cur_dash_off3969 ) , .f_type = (  type3971 ) } ) ) );
                                    } else {
                                        struct Maybe_967  dref3979 = ( (  int2123 ) ( (  sc3947 ) ) );
                                        if ( dref3979.tag == Maybe_967_Just_t ) {
                                            int32_t  cur_dash_off3981 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                            enum HighlightType_20  type3982 = ( HighlightType_20_Number );
                                            if ( (  eq1059 ( ( dref3979 .stuff .Maybe_967_Just_s .field0 ) , (  from_dash_integral288 ( 0 ) ) ) ) ) {
                                                if ( ( (  try_dash_char1977 ) ( (  sc3947 ) ,  ( (  from_dash_charlike346 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2124 ) ( (  sc3947 ) ,  (  is_dash_hex2126 ) ) );
                                                    int32_t  cur_dash_off3983 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2128  temp2127 = ( (struct envunion2128){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                    ( temp2127.fun ( &temp2127.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = (  cur_dash_off3983 ) , .f_type = (  type3982 ) } ) ) );
                                                    ( (  skip_dash_while2129 ) ( (  sc3947 ) ,  (  is_dash_alpha1335 ) ) );
                                                    int32_t  invalid_dash_off3984 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq558 ( (  cur_dash_off3983 ) , (  invalid_dash_off3984 ) ) ) ) {
                                                        struct envunion2131  temp2130 = ( (struct envunion2131){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                        ( temp2130.fun ( &temp2130.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3983 ) , .f_to = (  invalid_dash_off3984 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    if ( ( (  try_dash_char1977 ) ( (  sc3947 ) ,  ( (  from_dash_charlike346 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  skip_dash_while2132 ) ( (  sc3947 ) ,  (  is_dash_octal2134 ) ) );
                                                        int32_t  cur_dash_off3985 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                                        struct envunion2136  temp2135 = ( (struct envunion2136){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                        ( temp2135.fun ( &temp2135.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = (  cur_dash_off3985 ) , .f_type = (  type3982 ) } ) ) );
                                                        ( (  skip_dash_while2137 ) ( (  sc3947 ) ,  (  is_dash_digit973 ) ) );
                                                        int32_t  invalid_dash_off3986 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                                        if ( ( !  eq558 ( (  cur_dash_off3985 ) , (  invalid_dash_off3986 ) ) ) ) {
                                                            struct envunion2140  temp2139 = ( (struct envunion2140){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                            ( temp2139.fun ( &temp2139.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3985 ) , .f_to = (  invalid_dash_off3986 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                        }
                                                    } else {
                                                        if ( ( (  try_dash_char1977 ) ( (  sc3947 ) ,  ( (  from_dash_charlike346 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  skip_dash_while2141 ) ( (  sc3947 ) ,  (  is_dash_binary2143 ) ) );
                                                            int32_t  cur_dash_off3987 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                                            struct envunion2145  temp2144 = ( (struct envunion2145){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                            ( temp2144.fun ( &temp2144.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = (  cur_dash_off3987 ) , .f_type = (  type3982 ) } ) ) );
                                                            ( (  skip_dash_while2137 ) ( (  sc3947 ) ,  (  is_dash_digit973 ) ) );
                                                            int32_t  invalid_dash_off3988 = ( (  size_dash_i32329 ) ( ( ( * (  sc3947 ) ) .f_byte_dash_offset ) ) );
                                                            if ( ( !  eq558 ( (  cur_dash_off3987 ) , (  invalid_dash_off3988 ) ) ) ) {
                                                                struct envunion2147  temp2146 = ( (struct envunion2147){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                                ( temp2146.fun ( &temp2146.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3987 ) , .f_to = (  invalid_dash_off3988 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                            }
                                                        } else {
                                                            struct envunion2149  temp2148 = ( (struct envunion2149){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                            ( temp2148.fun ( &temp2148.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = (  cur_dash_off3981 ) , .f_type = (  type3982 ) } ) ) );
                                                        }
                                                    }
                                                }
                                            } else {
                                                struct envunion2151  temp2150 = ( (struct envunion2151){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                ( temp2150.fun ( &temp2150.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3948 ) , .f_to = (  cur_dash_off3981 ) , .f_type = (  type3982 ) } ) ) );
                                            }
                                        }
                                        else {
                                            if ( dref3979.tag == Maybe_967_None_t ) {
                                                ( (  drop_prime_980 ) ( (  sc3947 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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
            struct Scanner_955  temp2152 = ( (  mk_dash_from_dash_str957 ) ( (  line_dash_sv3945 ) ) );
            struct Scanner_955 *  sc3989 = ( &temp2152 );
            if ( ( (  try_dash_char1977 ) ( (  sc3989 ) ,  ( (  from_dash_charlike346 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
                struct envunion2154  temp2153 = ( (struct envunion2154){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                ( temp2153.fun ( &temp2153.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_integral56 ( 0 ) ) , .f_to = ( (  size_dash_i32329 ) ( ( (  num_dash_bytes1130 ) ( (  line_dash_sv3945 ) ) ) ) ) , .f_type = ( HighlightType_20_Keyword1 ) } ) ) );
            } else {
                ( (  skip_dash_while2155 ) ( (  sc3989 ) ,  (  is_dash_whitespace1340 ) ) );
                int32_t  from_dash_off3990 = ( (  size_dash_i32329 ) ( ( ( * (  sc3989 ) ) .f_byte_dash_offset ) ) );
                if ( ( (  try_dash_char1977 ) ( (  sc3989 ) ,  ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) {
                    int32_t  to_dash_off3991 = ( (  size_dash_i32329 ) ( ( ( * (  sc3989 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2158  temp2157 = ( (struct envunion2158){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                    ( temp2157.fun ( &temp2157.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3990 ) , .f_to = (  to_dash_off3991 ) , .f_type = ( HighlightType_20_Special1 ) } ) ) );
                    ( (  skip_dash_while2155 ) ( (  sc3989 ) ,  (  is_dash_whitespace1340 ) ) );
                    int32_t  from_dash_off3992 = ( (  size_dash_i32329 ) ( ( ( * (  sc3989 ) ) .f_byte_dash_offset ) ) );
                    if ( ( (  matches_dash_str2048 ) ( (  sc3989 ) ,  ( (  from_dash_string199 ) ( ( "[ ]" ) ,  ( 3 ) ) ) ) ) ) {
                        int32_t  to_dash_off3993 = ( (  size_dash_i32329 ) ( ( ( * (  sc3989 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2160  temp2159 = ( (struct envunion2160){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                        ( temp2159.fun ( &temp2159.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3992 ) , .f_to = (  to_dash_off3993 ) , .f_type = ( HighlightType_20_Keyword1 ) } ) ) );
                    } else {
                        if ( ( ( (  matches_dash_str2048 ) ( (  sc3989 ) ,  ( (  from_dash_string199 ) ( ( "[x]" ) ,  ( 3 ) ) ) ) ) || ( (  matches_dash_str2048 ) ( (  sc3989 ) ,  ( (  from_dash_string199 ) ( ( "[X]" ) ,  ( 3 ) ) ) ) ) ) ) {
                            int32_t  to_dash_off3994 = ( (  size_dash_i32329 ) ( ( ( * (  sc3989 ) ) .f_byte_dash_offset ) ) );
                            struct envunion2162  temp2161 = ( (struct envunion2162){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                            ( temp2161.fun ( &temp2161.env ,  (  hls3944 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3992 ) , .f_to = (  to_dash_off3994 ) , .f_type = ( HighlightType_20_Keyword2 ) } ) ) );
                        }
                    }
                }
            }
            break;
        }
    }
    (*  line3943 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_18   subslice2165 (    struct Slice_18  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Highlight_19 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1997 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp290 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_2001   into_dash_iter2164 (    struct List_17  self2030 ) {
    return ( (  into_dash_iter2010 ) ( ( (  subslice2165 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  bool   between2167 (    int32_t  c1338 ,    int32_t  l1340 ,    int32_t  r1342 ) {
    int32_t  from1343 = ( (  min658 ) ( (  l1340 ) ,  (  r1342 ) ) );
    int32_t  to1344 = ( (  max1110 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp157 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp157 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  struct Maybe_203   highlight_dash_at1968 (   struct env136* env ,    struct TextBuf_104 *  self3997 ,    struct Pos_26  pos3999 ) {
    struct Line_16 *  line4000 = ( (  get_dash_ptr564 ) ( ( & ( ( * (  self3997 ) ) .f_buf ) ) ,  ( (  i32_dash_size412 ) ( ( (  pos3999 ) .f_line ) ) ) ) );
    struct envunion137  temp1969 = ( (struct envunion137){ .fun = (  enum Unit_8  (*) (  struct env134*  ,    struct TextBuf_104 *  ,    struct Line_16 *  ) )recompute_dash_highlights_dash_at_dash_line1970 , .env =  env->envinst134 } );
    ( temp1969.fun ( &temp1969.env ,  (  self3997 ) ,  (  line4000 ) ) );
    struct SliceIter_2001  temp2163 =  into_dash_iter2164 ( ( ( * (  line4000 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2006  __cond2166 =  next2007 (&temp2163);
        if (  __cond2166 .tag == 0 ) {
            break;
        }
        struct Highlight_19  hl4002 =  __cond2166 .stuff .Maybe_2006_Just_s .field0;
        if ( ( (  between2167 ) ( ( (  pos3999 ) .f_bi ) ,  ( (  hl4002 ) .f_from ) ,  (  op_dash_sub164 ( ( (  hl4002 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_203_Just ) ( ( (  hl4002 ) .f_type ) ) );
        }
        if ( (  cmp157 ( ( (  pos3999 ) .f_bi ) , ( (  hl4002 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_203) { .tag = Maybe_203_None_t } );
        }
    }
    return ( (struct Maybe_203) { .tag = Maybe_203_None_t } );
}

struct Maybe_2171 {
    enum {
        Maybe_2171_None_t,
        Maybe_2171_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_175  field0;
        } Maybe_2171_Just_s;
    } stuff;
};

static struct Maybe_2171 Maybe_2171_Just (  struct HighlightColors_175  field0 ) {
    return ( struct Maybe_2171 ) { .tag = Maybe_2171_Just_t, .stuff = { .Maybe_2171_Just_s = { .field0 = field0 } } };
};

struct env2172 {
    ;
    struct Theme_172 *  theme4038;
};

struct envunion2173 {
    struct Colors_173  (*fun) (  struct env2172*  ,    struct HighlightColors_175  );
    struct env2172 env;
};

static  struct Colors_173   maybe2170 (    struct Maybe_2171  x1283 ,   struct envunion2173  fun1285 ,    struct Colors_173  default1287 ) {
    struct envunion2173  temp2174 = (  fun1285 );
    return ( {  struct Maybe_2171  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_2171_Just_t ? ( temp2174.fun ( &temp2174.env ,  ( dref1288 .stuff .Maybe_2171_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

struct SliceIter_2177 {
    struct Slice_174  f_slice;
    size_t  f_current_dash_offset;
};

struct env2178 {
    enum HighlightType_20  hltype4040;
    ;
};

struct envunion2179 {
    bool  (*fun) (  struct env2178*  ,    struct HighlightColors_175  );
    struct env2178 env;
};

struct Filter_2176 {
    struct SliceIter_2177  f_og;
    struct envunion2179  f_fun;
};

static  struct HighlightColors_175 *   offset_dash_ptr2182 (    struct HighlightColors_175 *  x338 ,    int64_t  count340 ) {
    struct HighlightColors_175  temp2183;
    return ( (struct HighlightColors_175 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul286 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2183 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2171   next2181 (    struct SliceIter_2177 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2171) { .tag = Maybe_2171_None_t } );
    }
    struct HighlightColors_175  elem1832 = ( * ( (  offset_dash_ptr2182 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2171_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2171   next2180 (    struct Filter_2176 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_2171  dref835 = ( (  next2181 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_2171_None_t ) {
            return ( (struct Maybe_2171) { .tag = Maybe_2171_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_2171_Just_t ) {
                struct envunion2179  temp2184 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp2184.fun ( &temp2184.env ,  ( dref835 .stuff .Maybe_2171_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2171_Just ) ( ( dref835 .stuff .Maybe_2171_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2171  temp2185;
    return (  temp2185 );
}

static  struct Filter_2176   into_dash_iter2187 (    struct Filter_2176  self831 ) {
    return (  self831 );
}

static  struct Maybe_2171   head2175 (    struct Filter_2176  it1143 ) {
    struct Filter_2176  temp2186 = ( (  into_dash_iter2187 ) ( (  it1143 ) ) );
    return ( (  next2180 ) ( ( &temp2186 ) ) );
}

static  struct SliceIter_2177   into_dash_iter2189 (    struct Slice_174  self1824 ) {
    return ( (struct SliceIter_2177) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2176   filter2188 (    struct Slice_174  iterable839 ,   struct envunion2179  fun841 ) {
    struct SliceIter_2177  it842 = ( (  into_dash_iter2189 ) ( (  iterable839 ) ) );
    return ( (struct Filter_2176) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  enum HighlightType_20 *   cast2194 (    uint32_t *  x356 ) {
    return ( (enum HighlightType_20 * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2192 (    enum HighlightType_20  x574 ) {
    uint32_t  temp2193 = ( (  zeroed807 ) ( ) );
    uint32_t *  y575 = ( &temp2193 );
    enum HighlightType_20 *  yp576 = ( (  cast2194 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2191 (    enum HighlightType_20  l3656 ,    enum HighlightType_20  r3658 ) {
    return (  eq473 ( ( ( (  cast_dash_on_dash_zeroed2192 ) ( (  l3656 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2192 ) ( (  r3658 ) ) ) ) );
}

static  bool   lam2190 (   struct env2178* env ,    struct HighlightColors_175  hlc4042 ) {
    return (  eq2191 ( ( (  hlc4042 ) .f_type ) , ( env->hltype4040 ) ) );
}

static  struct Color_138   or_dash_else2196 (    struct Maybe_176  self1734 ,    struct Color_138  alt1736 ) {
    struct Maybe_176  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_176_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_176_Just_t ) {
            return ( dref1737 .stuff .Maybe_176_Just_s .field0 );
        }
    }
}

static  struct Colors_173   lam2195 (   struct env2172* env ,    struct HighlightColors_175  hlc4044 ) {
    return ( (struct Colors_173) { .f_fg = ( (  hlc4044 ) .f_fg ) , .f_bg = ( (  or_dash_else2196 ) ( ( (  hlc4044 ) .f_bg ) ,  ( ( ( * ( env->theme4038 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_173   find_dash_colors_dash_for_dash_highlight2169 (    struct Theme_172 *  theme4038 ,    enum HighlightType_20  hltype4040 ) {
    struct env2178 envinst2178 = {
        .hltype4040 =  hltype4040 ,
    };
    struct env2172 envinst2172 = {
        .theme4038 =  theme4038 ,
    };
    return ( (  maybe2170 ) ( ( (  head2175 ) ( ( (  filter2188 ) ( ( ( * (  theme4038 ) ) .f_highlights ) ,  ( (struct envunion2179){ .fun = (  bool  (*) (  struct env2178*  ,    struct HighlightColors_175  ) )lam2190 , .env =  envinst2178 } ) ) ) ) ) ,  ( (struct envunion2173){ .fun = (  struct Colors_173  (*) (  struct env2172*  ,    struct HighlightColors_175  ) )lam2195 , .env =  envinst2172 } ) ,  ( ( * (  theme4038 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2168 (   struct env1964* env ,    enum HighlightType_20  type4171 ) {
    ( (  set_dash_colors1929 ) ( ( env->screen4141 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2169 ) ( ( env->theme4148 ) ,  (  type4171 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2200 (  ) {
    ( (  print1346 ) ( ( (  from_dash_string199 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1691 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2199 (    enum Mode_220  mode4059 ) {
    return ( {  enum Mode_220  dref4060 = (  mode4059 ) ;  dref4060 == Mode_220_Normal ? ( (  from_dash_string199 ) ( ( "NOR" ) ,  ( 3 ) ) ) :  dref4060 == Mode_220_Insert ? ( (  from_dash_string199 ) ( ( "INS" ) ,  ( 3 ) ) ) :  dref4060 == Mode_220_Select ? ( (  from_dash_string199 ) ( ( "SEL" ) ,  ( 3 ) ) ) : ( (  todo2200 ) ( ) ) ; } );
}

struct StrConcat_2203 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2203 StrConcat_2203_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2203 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2202 {
    struct StrConcat_2203  field0;
    struct Char_65  field1;
};

static struct StrConcat_2202 StrConcat_2202_StrConcat (  struct StrConcat_2203  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2202 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2206 {
    struct AppendIter_1020  f_left;
    struct StrViewIter_458  f_right;
};

struct StrConcatIter_2205 {
    struct StrConcatIter_2206  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2205   into_dash_iter2207 (    struct StrConcatIter_2205  self1498 ) {
    return (  self1498 );
}

static  struct StrConcatIter_2206   into_dash_iter2211 (    struct StrConcat_2203  dref1505 ) {
    return ( (struct StrConcatIter_2206) { .f_left = ( (  chars1060 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2206   chars2210 (    struct StrConcat_2203  self1516 ) {
    return ( (  into_dash_iter2211 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2205   into_dash_iter2209 (    struct StrConcat_2202  dref1505 ) {
    return ( (struct StrConcatIter_2205) { .f_left = ( (  chars2210 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2205   chars2208 (    struct StrConcat_2202  self1516 ) {
    return ( (  into_dash_iter2209 ) ( (  self1516 ) ) );
}

static  struct Maybe_297   next2214 (    struct StrConcatIter_2206 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2213 (    struct StrConcatIter_2205 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2214 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2201 (    struct Screen_276 *  screen3592 ,    struct StrConcat_2202  s3594 ,    int32_t  x3596 ,    int32_t  y3598 ) {
    int32_t  w3599 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3592 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3598 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3598 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3592 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3600 = (  op_dash_add159 ( (  op_dash_mul1521 ( (  y3598 ) , (  w3599 ) ) ) , (  x3596 ) ) );
    int32_t  x3601 = ( (  min658 ) ( (  x3596 ) ,  (  w3599 ) ) );
    size_t  max_dash_len3602 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3599 ) , (  x3601 ) ) ) ) );
    int32_t  xx3603 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2205  temp2204 =  into_dash_iter2207 ( ( (  chars2208 ) ( (  s3594 ) ) ) );
    while (true) {
        struct Maybe_297  __cond2212 =  next2213 (&temp2204);
        if (  __cond2212 .tag == 0 ) {
            break;
        }
        struct Char_65  c3605 =  __cond2212 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1945 ) ( (  screen3592 ) ,  (  c3605 ) ,  (  op_dash_add159 ( (  x3601 ) , (  xx3603 ) ) ) ,  (  y3598 ) ) );
        xx3603 = (  op_dash_add159 ( (  xx3603 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3605 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1904 (   struct env201* env ,    struct Screen_276 *  screen4141 ,    struct Pane_219 *  pane4143 ,    struct ScreenDims_279  sd4145 ,    struct Config_250 *  cfg4147 ) {
    struct Theme_172 *  theme4148 = ( ( * (  cfg4147 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4149 = ( ( * (  cfg4147 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4150 = ( ( * (  cfg4147 ) ) .f_relative_dash_line_dash_numbers );
    ( (  update_dash_screen_dash_offset1905 ) ( (  pane4143 ) ,  (  sd4145 ) ) );
    struct ScreenCursorOffset_221  sc_dash_off4151 = ( ( * (  pane4143 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars4152 = ( (  size_dash_i32329 ) ( ( (  count1908 ) ( ( (  chars1924 ) ( ( (  num_dash_lines1137 ) ( ( ( * (  pane4143 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4153 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4154 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4155 = ( (  display_dash_line_dash_numbers4149 ) ? (  op_dash_add159 ( (  op_dash_add159 ( (  max_dash_line_dash_num_dash_chars4152 ) , (  num_dash_front_dash_margin4153 ) ) ) , (  num_dash_back_dash_margin4154 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct RangeIter_153  temp1927 =  into_dash_iter154 ( ( (  to163 ) ( (  op_dash_add159 ( ( (  sc_dash_off4151 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min658 ) ( ( (  num_dash_lines1137 ) ( ( ( * (  pane4143 ) ) .f_buf ) ) ) ,  (  op_dash_add159 ( ( (  sc_dash_off4151 ) .f_screen_dash_top ) , ( (  screen_dash_height1907 ) ( (  sd4145 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond1928 =  next156 (&temp1927);
        if (  __cond1928 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4157 =  __cond1928 .stuff .Maybe_155_Just_s .field0;
        int32_t  ybi4158 = (  op_dash_sub164 ( (  line_dash_num4157 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4159 = ( (  vi_dash_bi1139 ) ( ( ( * (  pane4143 ) ) .f_buf ) ,  (  ybi4158 ) ,  ( (  sc_dash_off4151 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4160 = ( (  line1097 ) ( ( ( * (  pane4143 ) ) .f_buf ) ,  (  ybi4158 ) ) );
        int32_t  ys4161 = (  op_dash_sub164 ( (  op_dash_sub164 ( (  op_dash_add159 ( ( (  sd4145 ) .f_from_dash_sy ) , (  line_dash_num4157 ) ) ) , ( (  sc_dash_off4151 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4149 ) ) {
            if ( (  eq558 ( ( ( ( * (  pane4143 ) ) .f_cursor ) .f_line ) , (  ybi4158 ) ) ) ) {
                ( (  set_dash_colors1929 ) ( (  screen4141 ) ,  ( ( * (  theme4148 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors1929 ) ( (  screen4141 ) ,  ( ( * (  theme4148 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4162 = ( ( ( ! (  relative_dash_line_dash_numbers4150 ) ) || (  eq558 ( ( ( ( * (  pane4143 ) ) .f_cursor ) .f_line ) , (  ybi4158 ) ) ) ) ? (  line_dash_num4157 ) : ( (  abs1931 ) ( (  op_dash_sub164 ( ( ( ( * (  pane4143 ) ) .f_cursor ) .f_line ) , (  ybi4158 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right1932 ) ( (  screen4141 ) ,  (  line_dash_display4162 ) ,  (  op_dash_add159 ( (  op_dash_sub164 ( (  op_dash_sub164 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen4141 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4145 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4155 ) ) ) , (  num_dash_back_dash_margin4154 ) ) ) ,  (  ys4161 ) ) );
            ( (  set_dash_colors1929 ) ( (  screen4141 ) ,  ( ( * (  theme4148 ) ) .f_default ) ) );
        }
        int32_t  vx4163 = (  op_dash_sub164 ( ( (  pos_dash_vi1095 ) ( ( ( * (  pane4143 ) ) .f_buf ) ,  ( (  mk694 ) ( (  ybi4158 ) ,  (  xbi4159 ) ) ) ) ) , ( (  sc_dash_off4151 ) .f_screen_dash_left ) ) );
        ( (  assert1948 ) ( (  cmp157 ( (  vx4163 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1949_StrConcat ) ( ( (  from_dash_string199 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4163 ) ) ) ) );
        int32_t  left_dash_offset4164 = (  op_dash_add159 ( ( (  sd4145 ) .f_from_dash_sx ) , (  total_dash_margin4155 ) ) );
        struct AppendIter_1956  temp1955 =  into_dash_iter1957 ( ( (  append1958 ) ( ( (  chars460 ) ( ( (  byte_dash_substr_dash_from464 ) ( (  line_dash_content4160 ) ,  ( (  i32_dash_size412 ) ( (  xbi4159 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_297  __cond1959 =  next1960 (&temp1955);
            if (  __cond1959 .tag == 0 ) {
                break;
            }
            struct Char_65  c4166 =  __cond1959 .stuff .Maybe_297_Just_s .field0;
            if ( (  cmp157 ( (  vx4163 ) , ( (  sd4145 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4167 = ( (  mk694 ) ( (  ybi4158 ) ,  (  xbi4159 ) ) );
            bool  is_dash_cursor4168 = (  eq557 ( (  curpos4167 ) , ( ( * (  pane4143 ) ) .f_cursor ) ) );
            bool  in_dash_selection4169 = ( (  is_dash_in_dash_selection1961 ) ( (  pane4143 ) ,  ( (  mk694 ) ( (  ybi4158 ) ,  (  xbi4159 ) ) ) ) );
            if ( (  is_dash_cursor4168 ) ) {
                ( (  set_dash_colors1929 ) ( (  screen4141 ) ,  ( ( * (  theme4148 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4169 ) ) {
                    ( (  set_dash_colors1929 ) ( (  screen4141 ) ,  ( ( * (  theme4148 ) ) .f_selection ) ) );
                } else {
                    struct envunion202  temp1967 = ( (struct envunion202){ .fun = (  struct Maybe_203  (*) (  struct env136*  ,    struct TextBuf_104 *  ,    struct Pos_26  ) )highlight_dash_at1968 , .env =  env->envinst136 } );
                    struct env1964 envinst1964 = {
                        .theme4148 =  theme4148 ,
                        .screen4141 =  screen4141 ,
                    };
                    ( (  if_dash_just1963 ) ( ( temp1967.fun ( &temp1967.env ,  ( ( * (  pane4143 ) ) .f_buf ) ,  (  curpos4167 ) ) ) ,  ( (struct envunion1965){ .fun = (  enum Unit_8  (*) (  struct env1964*  ,    enum HighlightType_20  ) )lam2168 , .env =  envinst1964 } ) ) );
                }
            }
            struct Maybe_80  dref4172 = ( (  char_dash_replacement1102 ) ( (  c4166 ) ) );
            if ( dref4172.tag == Maybe_80_None_t ) {
                if ( ( ! ( (  cmp157 ( (  vx4163 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  op_dash_sub164 ( (  op_dash_add159 ( (  vx4163 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4166 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4145 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1945 ) ( (  screen4141 ) ,  (  c4166 ) ,  (  op_dash_add159 ( (  left_dash_offset4164 ) , (  vx4163 ) ) ) ,  (  ys4161 ) ) );
                }
                vx4163 = (  op_dash_add159 ( (  vx4163 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4166 ) ) ) ) );
            }
            else {
                if ( dref4172.tag == Maybe_80_Just_t ) {
                    struct StrViewIter_458  temp2197 =  into_dash_iter459 ( ( (  chars460 ) ( ( dref4172 .stuff .Maybe_80_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_297  __cond2198 =  next463 (&temp2197);
                        if (  __cond2198 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4175 =  __cond2198 .stuff .Maybe_297_Just_s .field0;
                        if ( (  cmp157 ( (  vx4163 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1945 ) ( (  screen4141 ) ,  (  c4175 ) ,  (  op_dash_add159 ( (  left_dash_offset4164 ) , (  vx4163 ) ) ) ,  (  ys4161 ) ) );
                        }
                        vx4163 = (  op_dash_add159 ( (  vx4163 ) , ( (  char_dash_screen_dash_width1100 ) ( (  c4175 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors1929 ) ( (  screen4141 ) ,  ( ( * (  theme4148 ) ) .f_default ) ) );
            xbi4159 = (  op_dash_add159 ( (  xbi4159 ) , ( (  size_dash_i32329 ) ( ( (  c4166 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors1929 ) ( (  screen4141 ) ,  ( ( * (  theme4148 ) ) .f_overlay ) ) );
    struct StrView_27  modename4176 = ( (  short_dash_mode_dash_name2199 ) ( ( ( * (  pane4143 ) ) .f_mode ) ) );
    ( (  draw_dash_str2201 ) ( (  screen4141 ) ,  ( ( StrConcat_2202_StrConcat ) ( ( ( StrConcat_2203_StrConcat ) ( ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  modename4176 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4145 ) .f_from_dash_sx ) ,  ( (  sd4145 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2216 {
    struct Screen_276 *  screen4560;
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

struct envunion2217 {
    enum Unit_8  (*fun) (  struct env2216*  ,    struct StrView_27  );
    struct env2216 env;
};

static  enum Unit_8   if_dash_just2215 (    struct Maybe_80  x1292 ,   struct envunion2217  fun1294 ) {
    struct Maybe_80  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_80_Just_t ) {
        struct envunion2217  temp2218 = (  fun1294 );
        ( temp2218.fun ( &temp2218.env ,  ( dref1295 .stuff .Maybe_80_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_80_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2219 (   struct env2216* env ,    struct StrView_27  msg4565 ) {
    int32_t  num_dash_chars4566 = ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars460 ) ( (  msg4565 ) ) ) ) ) ) );
    ( (  draw_dash_str2201 ) ( ( env->screen4560 ) ,  ( ( StrConcat_2202_StrConcat ) ( ( ( StrConcat_2203_StrConcat ) ( ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  msg4565 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1520 ( (  op_dash_sub164 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * ( env->screen4560 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4566 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  op_dash_sub164 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * ( env->screen4560 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2222 {
    struct StrView_27  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2222 StrConcat_2222_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2222 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2221 {
    struct StrConcat_2222  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2221 StrConcat_2221_StrConcat (  struct StrConcat_2222  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2221 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2220 {
    struct StrConcat_2221  field0;
    struct Char_65  field1;
};

static struct StrConcat_2220 StrConcat_2220_StrConcat (  struct StrConcat_2221  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2220 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2225 {
    struct StrConcatIter_1727  f_left;
    struct StrViewIter_458  f_right;
};

struct StrConcatIter_2224 {
    struct StrConcatIter_2225  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2224   into_dash_iter2227 (    struct StrConcatIter_2224  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_297   next2229 (    struct StrConcatIter_2225 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next1735 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2228 (    struct StrConcatIter_2224 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2229 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2226 (    struct StrConcatIter_2224  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrConcatIter_2224  it1100 = ( (  into_dash_iter2227 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1101 = ( (  next2228 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_297_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_297_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2230 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2230);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2231;
    return (  temp2231 );
}

static  size_t   lam2232 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add311 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2223 (    struct StrConcatIter_2224  it1105 ) {
    return ( (  reduce2226 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2232 ) ) );
}

static  struct StrConcatIter_1727   into_dash_iter2238 (    struct StrConcat_2222  dref1505 ) {
    return ( (struct StrConcatIter_1727) { .f_left = ( (  chars460 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1695 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1727   chars2237 (    struct StrConcat_2222  self1516 ) {
    return ( (  into_dash_iter2238 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2225   into_dash_iter2236 (    struct StrConcat_2221  dref1505 ) {
    return ( (struct StrConcatIter_2225) { .f_left = ( (  chars2237 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2225   chars2235 (    struct StrConcat_2221  self1516 ) {
    return ( (  into_dash_iter2236 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2224   into_dash_iter2234 (    struct StrConcat_2220  dref1505 ) {
    return ( (struct StrConcatIter_2224) { .f_left = ( (  chars2235 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2224   chars2233 (    struct StrConcat_2220  self1516 ) {
    return ( (  into_dash_iter2234 ) ( (  self1516 ) ) );
}

static  enum Unit_8   draw_dash_str2239 (    struct Screen_276 *  screen3592 ,    struct StrConcat_2220  s3594 ,    int32_t  x3596 ,    int32_t  y3598 ) {
    int32_t  w3599 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3592 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3598 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3598 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3592 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3600 = (  op_dash_add159 ( (  op_dash_mul1521 ( (  y3598 ) , (  w3599 ) ) ) , (  x3596 ) ) );
    int32_t  x3601 = ( (  min658 ) ( (  x3596 ) ,  (  w3599 ) ) );
    size_t  max_dash_len3602 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3599 ) , (  x3601 ) ) ) ) );
    int32_t  xx3603 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2224  temp2240 =  into_dash_iter2227 ( ( (  chars2233 ) ( (  s3594 ) ) ) );
    while (true) {
        struct Maybe_297  __cond2241 =  next2228 (&temp2240);
        if (  __cond2241 .tag == 0 ) {
            break;
        }
        struct Char_65  c3605 =  __cond2241 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1945 ) ( (  screen3592 ) ,  (  c3605 ) ,  (  op_dash_add159 ( (  x3601 ) , (  xx3603 ) ) ) ,  (  y3598 ) ) );
        xx3603 = (  op_dash_add159 ( (  xx3603 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3605 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2242 {
    struct StrConcat_2221  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2242 StrConcat_2242_StrConcat (  struct StrConcat_2221  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2242 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2244 {
    struct StrConcatIter_2225  f_left;
    struct StrViewIter_458  f_right;
};

static  struct StrConcatIter_2244   into_dash_iter2246 (    struct StrConcatIter_2244  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_297   next2247 (    struct StrConcatIter_2244 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2229 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2245 (    struct StrConcatIter_2244  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrConcatIter_2244  it1100 = ( (  into_dash_iter2246 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref1101 = ( (  next2247 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_297_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_297_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_297_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2248 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2248);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2249;
    return (  temp2249 );
}

static  size_t   lam2250 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add311 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2243 (    struct StrConcatIter_2244  it1105 ) {
    return ( (  reduce2245 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2250 ) ) );
}

static  struct StrConcatIter_2244   into_dash_iter2252 (    struct StrConcat_2242  dref1505 ) {
    return ( (struct StrConcatIter_2244) { .f_left = ( (  chars2235 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars460 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2244   chars2251 (    struct StrConcat_2242  self1516 ) {
    return ( (  into_dash_iter2252 ) ( (  self1516 ) ) );
}

static  enum Unit_8   draw_dash_str2253 (    struct Screen_276 *  screen3592 ,    struct StrConcat_2242  s3594 ,    int32_t  x3596 ,    int32_t  y3598 ) {
    int32_t  w3599 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3592 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp157 ( (  y3598 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp157 ( (  y3598 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3592 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3600 = (  op_dash_add159 ( (  op_dash_mul1521 ( (  y3598 ) , (  w3599 ) ) ) , (  x3596 ) ) );
    int32_t  x3601 = ( (  min658 ) ( (  x3596 ) ,  (  w3599 ) ) );
    size_t  max_dash_len3602 = ( (  i32_dash_size412 ) ( (  op_dash_sub164 ( (  w3599 ) , (  x3601 ) ) ) ) );
    int32_t  xx3603 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2244  temp2254 =  into_dash_iter2246 ( ( (  chars2251 ) ( (  s3594 ) ) ) );
    while (true) {
        struct Maybe_297  __cond2255 =  next2247 (&temp2254);
        if (  __cond2255 .tag == 0 ) {
            break;
        }
        struct Char_65  c3605 =  __cond2255 .stuff .Maybe_297_Just_s .field0;
        ( (  put_dash_char1945 ) ( (  screen3592 ) ,  (  c3605 ) ,  (  op_dash_add159 ( (  x3601 ) , (  xx3603 ) ) ) ,  (  y3598 ) ) );
        xx3603 = (  op_dash_add159 ( (  xx3603 ) , ( (  rendered_dash_wcwidth1109 ) ( (  c3605 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1902 (   struct env274* env ,    struct Screen_276 *  screen4560 ,    struct Editor_248 *  ed4562 ) {
    struct ScreenDims_279  screen_dash_dims4563 = ( (struct ScreenDims_279) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub164 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen4560 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub164 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen4560 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion275  temp1903 = ( (struct envunion275){ .fun = (  enum Unit_8  (*) (  struct env201*  ,    struct Screen_276 *  ,    struct Pane_219 *  ,    struct ScreenDims_279  ,    struct Config_250 *  ) )render1904 , .env =  env->envinst201 } );
    ( temp1903.fun ( &temp1903.env ,  (  screen4560 ) ,  ( (  pane1134 ) ( (  ed4562 ) ) ) ,  (  screen_dash_dims4563 ) ,  ( ( * (  ed4562 ) ) .f_cfg ) ) );
    struct env2216 envinst2216 = {
        .screen4560 =  screen4560 ,
    };
    ( (  if_dash_just2215 ) ( ( ( * (  ed4562 ) ) .f_msg ) ,  ( (struct envunion2217){ .fun = (  enum Unit_8  (*) (  struct env2216*  ,    struct StrView_27  ) )lam2219 , .env =  envinst2216 } ) ) );
    struct EditorMode_249  dref4567 = ( ( * (  ed4562 ) ) .f_mode );
    if ( dref4567.tag == EditorMode_249_Normal_t ) {
    }
    else {
        if ( dref4567.tag == EditorMode_249_Cmd_t ) {
            int32_t  num_dash_chars4569 = ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars1695 ) ( ( dref4567 .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4570 = ( (  eq558 ( ( (  mod1519 ) ( (  num_dash_chars4569 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1228 ) ( ( " " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4571 = (  op_dash_add159 ( (  num_dash_chars4569 ) , ( (  mod1519 ) ( (  num_dash_chars4569 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
            struct StrConcat_2220  full_dash_str4572 = ( ( StrConcat_2220_StrConcat ) ( ( ( StrConcat_2221_StrConcat ) ( ( ( StrConcat_2222_StrConcat ) ( ( (  from_dash_string199 ) ( ( " \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4567 .stuff .EditorMode_249_Cmd_s .field1 ) ) ) ,  (  pad4570 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4573 = ( (  size_dash_i32329 ) ( ( (  count2223 ) ( ( (  chars2233 ) ( (  full_dash_str4572 ) ) ) ) ) ) );
            ( (  draw_dash_str2239 ) ( (  screen4560 ) ,  (  full_dash_str4572 ) ,  (  op_dash_div1520 ( (  op_dash_sub164 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen4560 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4573 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
        }
        else {
            if ( dref4567.tag == EditorMode_249_Search_t ) {
                int32_t  num_dash_chars4575 = ( (  size_dash_i32329 ) ( ( (  count1104 ) ( ( (  chars1695 ) ( ( dref4567 .stuff .EditorMode_249_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4576 = ( (  eq558 ( ( (  mod1519 ) ( (  num_dash_chars4575 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string199 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1228 ) ( ( " " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4577 = (  op_dash_add159 ( (  num_dash_chars4575 ) , ( (  mod1519 ) ( (  num_dash_chars4575 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
                struct StrConcat_2242  full_dash_str4578 = ( ( StrConcat_2242_StrConcat ) ( ( ( StrConcat_2221_StrConcat ) ( ( ( StrConcat_2222_StrConcat ) ( ( (  from_dash_string199 ) ( ( " \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4567 .stuff .EditorMode_249_Search_s .field1 ) ) ) ,  (  pad4576 ) ) ) ,  ( (  from_dash_string199 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4579 = ( (  size_dash_i32329 ) ( ( (  count2243 ) ( ( (  chars2251 ) ( (  full_dash_str4578 ) ) ) ) ) ) );
                ( (  draw_dash_str2253 ) ( (  screen4560 ) ,  (  full_dash_str4578 ) ,  (  op_dash_div1520 ( (  op_dash_sub164 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen4560 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4579 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            }
        }
    }
    int32_t  temp2256 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4580 = ( &temp2256 );
    return ( Unit_8_Unit );
}

struct RenderState_2258 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_138  f_fg;
    struct Color_138  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2265 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2265 StrConcat_2265_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2265 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2264 {
    struct StrConcat_2265  field0;
    struct Char_65  field1;
};

static struct StrConcat_2264 StrConcat_2264_StrConcat (  struct StrConcat_2265  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2264 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2263 {
    struct StrConcat_2264  field0;
    uint32_t  field1;
};

static struct StrConcat_2263 StrConcat_2263_StrConcat (  struct StrConcat_2264  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2263 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2262 {
    struct StrConcat_2263  field0;
    struct Char_65  field1;
};

static struct StrConcat_2262 StrConcat_2262_StrConcat (  struct StrConcat_2263  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2262 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2271 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2270 {
    struct StrViewIter_458  f_left;
    struct IntStrIter_2271  f_right;
};

struct StrConcatIter_2269 {
    struct StrConcatIter_2270  f_left;
    struct AppendIter_1020  f_right;
};

struct StrConcatIter_2268 {
    struct StrConcatIter_2269  f_left;
    struct IntStrIter_2271  f_right;
};

struct StrConcatIter_2267 {
    struct StrConcatIter_2268  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2267   into_dash_iter2273 (    struct StrConcatIter_2267  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_297   next2278 (    struct IntStrIter_2271 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint32_t  trim_dash_down1430 = ( (  pow148 ) ( (  from_dash_integral165 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1431 = (  op_dash_div147 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    uint32_t  upper_dash_mask1432 = (  op_dash_mul167 ( (  op_dash_div147 ( (  upper1431 ) , (  from_dash_integral165 ( 10 ) ) ) ) , (  from_dash_integral165 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast145 ) ( (  op_dash_sub169 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1433 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_297   next2277 (    struct StrConcatIter_2270 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next2278 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2276 (    struct StrConcatIter_2269 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2277 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2275 (    struct StrConcatIter_2268 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2276 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next2278 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2274 (    struct StrConcatIter_2267 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2275 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2266 (    struct StrConcatIter_2267  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2267  temp2272 = ( (  into_dash_iter2273 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2267 *  it1078 = ( &temp2272 );
    while ( ( true ) ) {
        struct Maybe_297  dref1079 = ( (  next2274 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_297_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2289 (    uint32_t  self1437 ) {
    if ( (  eq473 ( (  self1437 ) , (  from_dash_integral165 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp170 ( (  self1437 ) , (  from_dash_integral165 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div147 ( (  self1437 ) , (  from_dash_integral165 ( 10 ) ) ) );
        digits1438 = (  op_dash_add159 ( (  digits1438 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_2271   uint_dash_iter2288 (    uint32_t  int1444 ) {
    return ( (struct IntStrIter_2271) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits2289 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2271   chars2287 (    uint32_t  self1456 ) {
    return ( (  uint_dash_iter2288 ) ( (  self1456 ) ) );
}

static  struct StrConcatIter_2270   into_dash_iter2286 (    struct StrConcat_2265  dref1505 ) {
    return ( (struct StrConcatIter_2270) { .f_left = ( (  chars460 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2287 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2270   chars2285 (    struct StrConcat_2265  self1516 ) {
    return ( (  into_dash_iter2286 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2269   into_dash_iter2284 (    struct StrConcat_2264  dref1505 ) {
    return ( (struct StrConcatIter_2269) { .f_left = ( (  chars2285 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2269   chars2283 (    struct StrConcat_2264  self1516 ) {
    return ( (  into_dash_iter2284 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2268   into_dash_iter2282 (    struct StrConcat_2263  dref1505 ) {
    return ( (struct StrConcatIter_2268) { .f_left = ( (  chars2283 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2287 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2268   chars2281 (    struct StrConcat_2263  self1516 ) {
    return ( (  into_dash_iter2282 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2267   into_dash_iter2280 (    struct StrConcat_2262  dref1505 ) {
    return ( (struct StrConcatIter_2267) { .f_left = ( (  chars2281 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2267   chars2279 (    struct StrConcat_2262  self1516 ) {
    return ( (  into_dash_iter2280 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2261 (    struct StrConcat_2262  s2601 ) {
    ( (  for_dash_each2266 ) ( ( (  chars2279 ) ( (  s2601 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2260 (    uint32_t  x2615 ,    uint32_t  y2617 ) {
    uint32_t  x2618 = (  op_dash_add171 ( (  x2615 ) , (  from_dash_integral165 ( 1 ) ) ) );
    uint32_t  y2619 = (  op_dash_add171 ( (  y2617 ) , (  from_dash_integral165 ( 1 ) ) ) );
    ( (  print2261 ) ( ( ( StrConcat_2262_StrConcat ) ( ( ( StrConcat_2263_StrConcat ) ( ( ( StrConcat_2264_StrConcat ) ( ( ( StrConcat_2265_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2619 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2618 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_277   subslice2292 (    struct Slice_277  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Cell_278 *  begin_dash_ptr1789 = ( (  offset_dash_ptr850 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp290 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp290 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_277) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub289 ( ( (  min467 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_277) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

struct SliceIter_2295 {
    struct Slice_277  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2294 {
    struct SliceIter_2295  f_left_dash_it;
    struct SliceIter_2295  f_right_dash_it;
};

struct Tuple2_2296 {
    struct Cell_278  field0;
    struct Cell_278  field1;
};

static struct Tuple2_2296 Tuple2_2296_Tuple2 (  struct Cell_278  field0 ,  struct Cell_278  field1 ) {
    return ( struct Tuple2_2296 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2298 {
    bool (*  fun1136 )(    struct Tuple2_2296  );
};

struct envunion2299 {
    bool  (*fun) (  struct env2298*  ,    struct Tuple2_2296  ,    bool  );
    struct env2298 env;
};

static  struct Zip_2294   into_dash_iter2300 (    struct Zip_2294  self912 ) {
    return (  self912 );
}

struct Maybe_2301 {
    enum {
        Maybe_2301_None_t,
        Maybe_2301_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2296  field0;
        } Maybe_2301_Just_s;
    } stuff;
};

static struct Maybe_2301 Maybe_2301_Just (  struct Tuple2_2296  field0 ) {
    return ( struct Maybe_2301 ) { .tag = Maybe_2301_Just_t, .stuff = { .Maybe_2301_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_855   next2303 (    struct SliceIter_2295 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp290 ( (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_855) { .tag = Maybe_855_None_t } );
    }
    struct Cell_278  elem1832 = ( * ( (  offset_dash_ptr850 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64302 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add311 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_855_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2301   next2302 (    struct Zip_2294 *  self915 ) {
    struct Zip_2294  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_855  dref917 = ( (  next2303 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_855_None_t ) {
            return ( (struct Maybe_2301) { .tag = Maybe_2301_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_855_Just_t ) {
                struct Maybe_855  dref919 = ( (  next2303 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_855_None_t ) {
                    return ( (struct Maybe_2301) { .tag = Maybe_2301_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_855_Just_t ) {
                        ( (  next2303 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2303 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2301_Just ) ( ( ( Tuple2_2296_Tuple2 ) ( ( dref917 .stuff .Maybe_855_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_855_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2297 (    struct Zip_2294  iterable1094 ,    bool  base1096 ,   struct envunion2299  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct Zip_2294  it1100 = ( (  into_dash_iter2300 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_2301  dref1101 = ( (  next2302 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_2301_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_2301_Just_t ) {
                struct envunion2299  temp2304 = (  fun1098 );
                x1099 = ( temp2304.fun ( &temp2304.env ,  ( dref1101 .stuff .Maybe_2301_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2305 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2305);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2306;
    return (  temp2306 );
}

static  bool   lam2307 (   struct env2298* env ,    struct Tuple2_2296  e1138 ,    bool  x1140 ) {
    return ( ( ( env->fun1136 ) ( (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2293 (    struct Zip_2294  it1134 ,    bool (*  fun1136 )(    struct Tuple2_2296  ) ) {
    struct env2298 envinst2298 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2297 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2299){ .fun = (  bool  (*) (  struct env2298*  ,    struct Tuple2_2296  ,    bool  ) )lam2307 , .env =  envinst2298 } ) ) );
}

static  struct SliceIter_2295   into_dash_iter2309 (    struct Slice_277  self1824 ) {
    return ( (struct SliceIter_2295) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2294   zip2308 (    struct Slice_277  left923 ,    struct Slice_277  right925 ) {
    struct SliceIter_2295  left_dash_it926 = ( (  into_dash_iter2309 ) ( (  left923 ) ) );
    struct SliceIter_2295  right_dash_it927 = ( (  into_dash_iter2309 ) ( (  right925 ) ) );
    return ( (struct Zip_2294) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

struct Tuple2_2313 {
    struct Color_138  field0;
    struct Color_138  field1;
};

static struct Tuple2_2313 Tuple2_2313_Tuple2 (  struct Color_138  field0 ,  struct Color_138  field1 ) {
    return ( struct Tuple2_2313 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_139 *   cast2317 (    int32_t *  x356 ) {
    return ( (enum Color8_139 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2315 (    enum Color8_139  x574 ) {
    int32_t  temp2316 = ( (  zeroed1002 ) ( ) );
    int32_t *  y575 = ( &temp2316 );
    enum Color8_139 *  yp576 = ( (  cast2317 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2314 (    enum Color8_139  l2643 ,    enum Color8_139  r2645 ) {
    return (  eq558 ( ( ( (  cast_dash_on_dash_zeroed2315 ) ( (  l2643 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2315 ) ( (  r2645 ) ) ) ) );
}

static  enum Color16_140 *   cast2321 (    int32_t *  x356 ) {
    return ( (enum Color16_140 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2319 (    enum Color16_140  x574 ) {
    int32_t  temp2320 = ( (  zeroed1002 ) ( ) );
    int32_t *  y575 = ( &temp2320 );
    enum Color16_140 *  yp576 = ( (  cast2321 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2318 (    enum Color16_140  l2649 ,    enum Color16_140  r2651 ) {
    return (  eq558 ( ( ( (  cast_dash_on_dash_zeroed2319 ) ( (  l2649 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2319 ) ( (  r2651 ) ) ) ) );
}

static  bool   eq2322 (    struct RGB_141  l2679 ,    struct RGB_141  r2681 ) {
    return ( ( (  eq303 ( ( (  l2679 ) .f_r ) , ( (  r2681 ) .f_r ) ) ) && (  eq303 ( ( (  l2679 ) .f_g ) , ( (  r2681 ) .f_g ) ) ) ) && (  eq303 ( ( (  l2679 ) .f_b ) , ( (  r2681 ) .f_b ) ) ) );
}

static  bool   eq2312 (    struct Color_138  l2701 ,    struct Color_138  r2703 ) {
    return ( {  struct Tuple2_2313  dref2704 = ( ( Tuple2_2313_Tuple2 ) ( (  l2701 ) ,  (  r2703 ) ) ) ; dref2704 .field0.tag == Color_138_ColorDefault_t && dref2704 .field1.tag == Color_138_ColorDefault_t ? ( true ) : dref2704 .field0.tag == Color_138_Color8_t && dref2704 .field1.tag == Color_138_Color8_t ? (  eq2314 ( ( dref2704 .field0 .stuff .Color_138_Color8_s .field0 ) , ( dref2704 .field1 .stuff .Color_138_Color8_s .field0 ) ) ) : dref2704 .field0.tag == Color_138_Color16_t && dref2704 .field1.tag == Color_138_Color16_t ? (  eq2318 ( ( dref2704 .field0 .stuff .Color_138_Color16_s .field0 ) , ( dref2704 .field1 .stuff .Color_138_Color16_s .field0 ) ) ) : dref2704 .field0.tag == Color_138_Color256_t && dref2704 .field1.tag == Color_138_Color256_t ? (  eq303 ( ( dref2704 .field0 .stuff .Color_138_Color256_s .field0 ) , ( dref2704 .field1 .stuff .Color_138_Color256_s .field0 ) ) ) : dref2704 .field0.tag == Color_138_ColorRGB_t && dref2704 .field1.tag == Color_138_ColorRGB_t ? (  eq2322 ( ( dref2704 .field0 .stuff .Color_138_ColorRGB_s .field0 ) , ( dref2704 .field1 .stuff .Color_138_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2311 (    struct Cell_278  l3465 ,    struct Cell_278  r3467 ) {
    if ( ( !  eq469 ( ( (  l3465 ) .f_c ) , ( (  r3467 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2312 ( ( (  l3465 ) .f_fg ) , ( (  r3467 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2312 ( ( (  l3465 ) .f_bg ) , ( (  r3467 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2310 (    struct Tuple2_2296  dref3521 ) {
    return ( !  eq2311 ( ( dref3521 .field0 ) , ( dref3521 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2325 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82326 (    enum Color8_139  color2654 ) {
    enum Color8_139  dref2655 = (  color2654 );
    switch (  dref2655 ) {
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

static  enum Unit_8   set_dash_fg162327 (    enum Color16_140  color2658 ) {
    enum Color16_140  dref2659 = (  color2658 );
    switch (  dref2659 ) {
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

struct StrConcat_2331 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2331 StrConcat_2331_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2331 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2330 {
    struct StrConcat_2331  field0;
    struct Char_65  field1;
};

static struct StrConcat_2330 StrConcat_2330_StrConcat (  struct StrConcat_2331  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2330 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2335 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2334 {
    struct StrViewIter_458  f_left;
    struct IntStrIter_2335  f_right;
};

struct StrConcatIter_2333 {
    struct StrConcatIter_2334  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2333   into_dash_iter2337 (    struct StrConcatIter_2333  self1498 ) {
    return (  self1498 );
}

struct env2343 {
    uint8_t  base1211;
    ;
};

struct envunion2344 {
    uint8_t  (*fun) (  struct env2343*  ,    int32_t  ,    uint8_t  );
    struct env2343 env;
};

static  uint8_t   reduce2342 (    struct Range_150  iterable1094 ,    uint8_t  base1096 ,   struct envunion2344  fun1098 ) {
    uint8_t  x1099 = (  base1096 );
    struct RangeIter_153  it1100 = ( (  into_dash_iter154 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_155  dref1101 = ( (  next156 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_155_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_155_Just_t ) {
                struct envunion2344  temp2345 = (  fun1098 );
                x1099 = ( temp2345.fun ( &temp2345.env ,  ( dref1101 .stuff .Maybe_155_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2346 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2346);
    exit ( 1 );
    ( Unit_8_Unit );
    uint8_t  temp2347;
    return (  temp2347 );
}

static  uint8_t   op_dash_mul2349 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2348 (   struct env2343* env ,    int32_t  item1215 ,    uint8_t  x1217 ) {
    return (  op_dash_mul2349 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  uint8_t   pow2341 (    uint8_t  base1211 ,    int32_t  p1213 ) {
    struct env2343 envinst2343 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce2342 ) ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  p1213 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral308 ( 1 ) ) ,  ( (struct envunion2344){ .fun = (  uint8_t  (*) (  struct env2343*  ,    int32_t  ,    uint8_t  ) )lam2348 , .env =  envinst2343 } ) ) );
}

static  uint8_t   op_dash_div2350 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2351 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_297   next2340 (    struct IntStrIter_2335 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_297_Just ) ( ( (  from_dash_charlike346 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp157 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint8_t  trim_dash_down1430 = ( (  pow2341 ) ( (  from_dash_integral308 ( 10 ) ) ,  (  op_dash_sub164 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1431 = (  op_dash_div2350 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    uint8_t  upper_dash_mask1432 = (  op_dash_mul2349 ( (  op_dash_div2350 ( (  upper1431 ) , (  from_dash_integral308 ( 10 ) ) ) ) , (  from_dash_integral308 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast2351 ) ( (  op_dash_sub932 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub164 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81039 ) ( (  op_dash_add933 ( (  digit1433 ) , (  from_dash_integral308 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_297   next2339 (    struct StrConcatIter_2334 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next463 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next2340 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2338 (    struct StrConcatIter_2333 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2339 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2332 (    struct StrConcatIter_2333  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2333  temp2336 = ( (  into_dash_iter2337 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2333 *  it1078 = ( &temp2336 );
    while ( ( true ) ) {
        struct Maybe_297  dref1079 = ( (  next2338 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_297_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2358 (    uint8_t  self1437 ) {
    if ( (  eq303 ( (  self1437 ) , (  from_dash_integral308 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp307 ( (  self1437 ) , (  from_dash_integral308 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div2350 ( (  self1437 ) , (  from_dash_integral308 ( 10 ) ) ) );
        digits1438 = (  op_dash_add159 ( (  digits1438 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_2335   uint_dash_iter2357 (    uint8_t  int1444 ) {
    return ( (struct IntStrIter_2335) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits2358 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2335   chars2356 (    uint8_t  self1462 ) {
    return ( (  uint_dash_iter2357 ) ( (  self1462 ) ) );
}

static  struct StrConcatIter_2334   into_dash_iter2355 (    struct StrConcat_2331  dref1505 ) {
    return ( (struct StrConcatIter_2334) { .f_left = ( (  chars460 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2356 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2334   chars2354 (    struct StrConcat_2331  self1516 ) {
    return ( (  into_dash_iter2355 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2333   into_dash_iter2353 (    struct StrConcat_2330  dref1505 ) {
    return ( (struct StrConcatIter_2333) { .f_left = ( (  chars2354 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2333   chars2352 (    struct StrConcat_2330  self1516 ) {
    return ( (  into_dash_iter2353 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2329 (    struct StrConcat_2330  s2601 ) {
    ( (  for_dash_each2332 ) ( ( (  chars2352 ) ( (  s2601 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562328 (    uint8_t  color2672 ) {
    ( (  print2329 ) ( ( ( StrConcat_2330_StrConcat ) ( ( ( StrConcat_2331_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2672 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2364 {
    struct StrConcat_2330  field0;
    uint8_t  field1;
};

static struct StrConcat_2364 StrConcat_2364_StrConcat (  struct StrConcat_2330  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2364 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2363 {
    struct StrConcat_2364  field0;
    struct Char_65  field1;
};

static struct StrConcat_2363 StrConcat_2363_StrConcat (  struct StrConcat_2364  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2363 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2362 {
    struct StrConcat_2363  field0;
    uint8_t  field1;
};

static struct StrConcat_2362 StrConcat_2362_StrConcat (  struct StrConcat_2363  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2362 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2361 {
    struct StrConcat_2362  field0;
    struct Char_65  field1;
};

static struct StrConcat_2361 StrConcat_2361_StrConcat (  struct StrConcat_2362  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2361 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2369 {
    struct StrConcatIter_2333  f_left;
    struct IntStrIter_2335  f_right;
};

struct StrConcatIter_2368 {
    struct StrConcatIter_2369  f_left;
    struct AppendIter_1020  f_right;
};

struct StrConcatIter_2367 {
    struct StrConcatIter_2368  f_left;
    struct IntStrIter_2335  f_right;
};

struct StrConcatIter_2366 {
    struct StrConcatIter_2367  f_left;
    struct AppendIter_1020  f_right;
};

static  struct StrConcatIter_2366   into_dash_iter2371 (    struct StrConcatIter_2366  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_297   next2375 (    struct StrConcatIter_2369 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2338 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next2340 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2374 (    struct StrConcatIter_2368 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2375 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2373 (    struct StrConcatIter_2367 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2374 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next2340 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_297   next2372 (    struct StrConcatIter_2366 *  self1501 ) {
    struct Maybe_297  dref1502 = ( (  next2373 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1502 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_297_None_t ) {
            return ( (  next1046 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2365 (    struct StrConcatIter_2366  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2366  temp2370 = ( (  into_dash_iter2371 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2366 *  it1078 = ( &temp2370 );
    while ( ( true ) ) {
        struct Maybe_297  dref1079 = ( (  next2372 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_297_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2369   into_dash_iter2383 (    struct StrConcat_2364  dref1505 ) {
    return ( (struct StrConcatIter_2369) { .f_left = ( (  chars2352 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2356 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2369   chars2382 (    struct StrConcat_2364  self1516 ) {
    return ( (  into_dash_iter2383 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2368   into_dash_iter2381 (    struct StrConcat_2363  dref1505 ) {
    return ( (struct StrConcatIter_2368) { .f_left = ( (  chars2382 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2368   chars2380 (    struct StrConcat_2363  self1516 ) {
    return ( (  into_dash_iter2381 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2367   into_dash_iter2379 (    struct StrConcat_2362  dref1505 ) {
    return ( (struct StrConcatIter_2367) { .f_left = ( (  chars2380 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2356 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2367   chars2378 (    struct StrConcat_2362  self1516 ) {
    return ( (  into_dash_iter2379 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2366   into_dash_iter2377 (    struct StrConcat_2361  dref1505 ) {
    return ( (struct StrConcatIter_2366) { .f_left = ( (  chars2378 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2366   chars2376 (    struct StrConcat_2361  self1516 ) {
    return ( (  into_dash_iter2377 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2360 (    struct StrConcat_2361  s2601 ) {
    ( (  for_dash_each2365 ) ( ( (  chars2376 ) ( (  s2601 ) ) ) ,  (  printf_dash_char336 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2359 (    struct RGB_141  c2694 ) {
    ( (  print2360 ) ( ( ( StrConcat_2361_StrConcat ) ( ( ( StrConcat_2362_StrConcat ) ( ( ( StrConcat_2363_StrConcat ) ( ( ( StrConcat_2364_StrConcat ) ( ( ( StrConcat_2330_StrConcat ) ( ( ( StrConcat_2331_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2694 ) .f_r ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2694 ) .f_g ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2694 ) .f_b ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2324 (    struct Color_138  c2715 ) {
    struct Color_138  dref2716 = (  c2715 );
    if ( dref2716.tag == Color_138_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2325 ) ( ) );
    }
    else {
        if ( dref2716.tag == Color_138_Color8_t ) {
            ( (  set_dash_fg82326 ) ( ( dref2716 .stuff .Color_138_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2716.tag == Color_138_Color16_t ) {
                ( (  set_dash_fg162327 ) ( ( dref2716 .stuff .Color_138_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2716.tag == Color_138_Color256_t ) {
                    ( (  set_dash_fg2562328 ) ( ( dref2716 .stuff .Color_138_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2716.tag == Color_138_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2359 ) ( ( dref2716 .stuff .Color_138_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2385 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82386 (    enum Color8_139  color2662 ) {
    enum Color8_139  dref2663 = (  color2662 );
    switch (  dref2663 ) {
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

static  enum Unit_8   set_dash_bg162387 (    enum Color16_140  color2666 ) {
    enum Color16_140  dref2667 = (  color2666 );
    switch (  dref2667 ) {
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

static  enum Unit_8   set_dash_bg2562388 (    uint8_t  color2675 ) {
    ( (  print2329 ) ( ( ( StrConcat_2330_StrConcat ) ( ( ( StrConcat_2331_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2675 ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2389 (    struct RGB_141  c2697 ) {
    ( (  print2360 ) ( ( ( StrConcat_2361_StrConcat ) ( ( ( StrConcat_2362_StrConcat ) ( ( ( StrConcat_2363_StrConcat ) ( ( ( StrConcat_2364_StrConcat ) ( ( ( StrConcat_2330_StrConcat ) ( ( ( StrConcat_2331_StrConcat ) ( ( (  from_dash_string199 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2697 ) .f_r ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2697 ) .f_g ) ) ) ,  ( (  from_dash_charlike346 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2697 ) .f_b ) ) ) ,  ( (  from_dash_charlike346 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2384 (    struct Color_138  c2723 ) {
    struct Color_138  dref2724 = (  c2723 );
    if ( dref2724.tag == Color_138_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2385 ) ( ) );
    }
    else {
        if ( dref2724.tag == Color_138_Color8_t ) {
            ( (  set_dash_bg82386 ) ( ( dref2724 .stuff .Color_138_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2724.tag == Color_138_Color16_t ) {
                ( (  set_dash_bg162387 ) ( ( dref2724 .stuff .Color_138_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2724.tag == Color_138_Color256_t ) {
                    ( (  set_dash_bg2562388 ) ( ( dref2724 .stuff .Color_138_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2724.tag == Color_138_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2389 ) ( ( dref2724 .stuff .Color_138_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322390 (    int32_t  x604 ) {
    return ( (uint32_t ) (  x604 ) );
}

static  enum Unit_8   emit_dash_cell2323 (    struct RenderState_2258 *  rs3497 ,    struct Cell_278 *  c3499 ,    uint32_t  x3501 ,    uint32_t  y3503 ) {
    if ( ( ( !  eq473 ( (  x3501 ) , ( ( * (  rs3497 ) ) .f_x ) ) ) || ( !  eq473 ( (  y3503 ) , ( ( * (  rs3497 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2260 ) ( (  x3501 ) ,  (  y3503 ) ) );
        (*  rs3497 ) .f_x = (  x3501 );
        (*  rs3497 ) .f_y = (  y3503 );
    }
    struct Char_65  char3504 = ( ( * (  c3499 ) ) .f_c );
    struct Color_138  bg3505 = ( ( * (  c3499 ) ) .f_bg );
    if ( (  eq558 ( ( ( * (  c3499 ) ) .f_char_dash_width ) , (  op_dash_neg801 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3504 = ( (  from_dash_charlike346 ) ( ( " " ) ,  ( 1 ) ) );
        bg3505 = ( ( Color_138_Color8 ) ( ( Color8_139_Red8 ) ) );
    }
    if ( ( !  eq2312 ( ( ( * (  rs3497 ) ) .f_fg ) , ( ( * (  c3499 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2324 ) ( ( ( * (  c3499 ) ) .f_fg ) ) );
        (*  rs3497 ) .f_fg = ( ( * (  c3499 ) ) .f_fg );
    }
    if ( ( !  eq2312 ( ( ( * (  rs3497 ) ) .f_bg ) , (  bg3505 ) ) ) ) {
        ( (  set_dash_bg2384 ) ( (  bg3505 ) ) );
        (*  rs3497 ) .f_bg = (  bg3505 );
    }
    ( (  print_dash_str335 ) ( (  char3504 ) ) );
    uint32_t  char_dash_width3506 = ( (  i32_dash_u322390 ) ( ( (  max1110 ) ( ( ( * (  c3499 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3497 ) .f_x = (  op_dash_add171 ( ( ( * (  rs3497 ) ) .f_x ) , (  char_dash_width3506 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2393 {
    struct SliceIter_2295  f_left_dash_it;
    struct FromIter_416  f_right_dash_it;
};

struct env2394 {
    ;
    ;
    struct Slice_277  dest1855;
};

struct Tuple2_2396 {
    struct Cell_278  field0;
    int32_t  field1;
};

static struct Tuple2_2396 Tuple2_2396_Tuple2 (  struct Cell_278  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2396 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2395 {
    enum Unit_8  (*fun) (  struct env2394*  ,    struct Tuple2_2396  );
    struct env2394 env;
};

static  struct Zip_2393   into_dash_iter2398 (    struct Zip_2393  self912 ) {
    return (  self912 );
}

struct Maybe_2399 {
    enum {
        Maybe_2399_None_t,
        Maybe_2399_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2396  field0;
        } Maybe_2399_Just_s;
    } stuff;
};

static struct Maybe_2399 Maybe_2399_Just (  struct Tuple2_2396  field0 ) {
    return ( struct Maybe_2399 ) { .tag = Maybe_2399_Just_t, .stuff = { .Maybe_2399_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2399   next2400 (    struct Zip_2393 *  self915 ) {
    struct Zip_2393  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_855  dref917 = ( (  next2303 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_855_None_t ) {
            return ( (struct Maybe_2399) { .tag = Maybe_2399_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_855_Just_t ) {
                struct Maybe_155  dref919 = ( (  next422 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_155_None_t ) {
                    return ( (struct Maybe_2399) { .tag = Maybe_2399_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_155_Just_t ) {
                        ( (  next2303 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next422 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2399_Just ) ( ( ( Tuple2_2396_Tuple2 ) ( ( dref917 .stuff .Maybe_855_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_155_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2392 (    struct Zip_2393  iterable1075 ,   struct envunion2395  fun1077 ) {
    struct Zip_2393  temp2397 = ( (  into_dash_iter2398 ) ( (  iterable1075 ) ) );
    struct Zip_2393 *  it1078 = ( &temp2397 );
    while ( ( true ) ) {
        struct Maybe_2399  dref1079 = ( (  next2400 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_2399_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_2399_Just_t ) {
                struct envunion2395  temp2401 = (  fun1077 );
                ( temp2401.fun ( &temp2401.env ,  ( dref1079 .stuff .Maybe_2399_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2393   zip2402 (    struct Slice_277  left923 ,    struct FromIter_416  right925 ) {
    struct SliceIter_2295  left_dash_it926 = ( (  into_dash_iter2309 ) ( (  left923 ) ) );
    struct FromIter_416  right_dash_it927 = ( (  into_dash_iter426 ) ( (  right925 ) ) );
    return ( (struct Zip_2393) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   lam2403 (   struct env2394* env ,    struct Tuple2_2396  dref1856 ) {
    return ( (  set848 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size412 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2391 (    struct Slice_277  src1853 ,    struct Slice_277  dest1855 ) {
    if ( (  cmp290 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic512 ) ( ( ( StrConcat_513_StrConcat ) ( ( ( StrConcat_322_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string199 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string199 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2394 envinst2394 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each2392 ) ( ( (  zip2402 ) ( (  src1853 ) ,  ( (  from427 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2395){ .fun = (  enum Unit_8  (*) (  struct env2394*  ,    struct Tuple2_2396  ) )lam2403 , .env =  envinst2394 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2257 (    struct Screen_276 *  screen3509 ) {
    int32_t  w3510 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3509 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3511 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3509 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2258  temp2259 = ( (struct RenderState_2258) { .f_x = (  from_dash_integral165 ( 0 ) ) , .f_y = (  from_dash_integral165 ( 0 ) ) , .f_fg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_bg = ( (struct Color_138) { .tag = Color_138_ColorDefault_t } ) , .f_changes = (  from_dash_integral165 ( 0 ) ) } );
    struct RenderState_2258 *  rs3512 = ( &temp2259 );
    ( (  move_dash_cursor_dash_to2260 ) ( (  from_dash_integral165 ( 0 ) ) ,  (  from_dash_integral165 ( 0 ) ) ) );
    struct RangeIter_153  temp2290 =  into_dash_iter154 ( ( (  to163 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub164 ( (  h3511 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_155  __cond2291 =  next156 (&temp2290);
        if (  __cond2291 .tag == 0 ) {
            break;
        }
        int32_t  y3514 =  __cond2291 .stuff .Maybe_155_Just_s .field0;
        int32_t  x_dash_v3515 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp157 ( (  x_dash_v3515 ) , (  w3510 ) ) == 0 ) ) {
            size_t  i3516 = ( (  i32_dash_size412 ) ( (  op_dash_add159 ( (  op_dash_mul1521 ( (  y3514 ) , (  w3510 ) ) ) , (  x_dash_v3515 ) ) ) ) );
            struct Cell_278 *  cur3517 = ( (  get_dash_ptr849 ) ( ( ( * (  screen3509 ) ) .f_current ) ,  (  i3516 ) ) );
            int32_t  char_dash_width3518 = ( (  max1110 ) ( ( ( * (  cur3517 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_277  curs3519 = ( (  subslice2292 ) ( ( ( * (  screen3509 ) ) .f_current ) ,  (  i3516 ) ,  (  op_dash_add311 ( (  i3516 ) , ( (  i32_dash_size412 ) ( (  char_dash_width3518 ) ) ) ) ) ) );
            struct Slice_277  prevs3520 = ( (  subslice2292 ) ( ( ( * (  screen3509 ) ) .f_previous ) ,  (  i3516 ) ,  (  op_dash_add311 ( (  i3516 ) , ( (  i32_dash_size412 ) ( (  char_dash_width3518 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3509 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2293 ) ( ( (  zip2308 ) ( (  curs3519 ) ,  (  prevs3520 ) ) ) ,  (  lam2310 ) ) ) ) ) {
                (*  rs3512 ) .f_changes = (  op_dash_add171 ( ( ( * (  rs3512 ) ) .f_changes ) , (  from_dash_integral165 ( 1 ) ) ) );
                ( (  emit_dash_cell2323 ) ( (  rs3512 ) ,  (  cur3517 ) ,  ( (  i32_dash_u322390 ) ( (  x_dash_v3515 ) ) ) ,  ( (  i32_dash_u322390 ) ( (  y3514 ) ) ) ) );
                ( (  copy_dash_to2391 ) ( (  curs3519 ) ,  (  prevs3520 ) ) );
            }
            x_dash_v3515 = (  op_dash_add159 ( (  x_dash_v3515 ) , (  char_dash_width3518 ) ) );
        }
    }
    (*  screen3509 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors775 ) ( ) );
    ( (  flush_dash_stdout778 ) ( ) );
    return ( ( * (  rs3512 ) ) .f_changes );
}

static  void *   cast_dash_ptr2410 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2411 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2408 (  ) {
    struct timespec *  temp2409;
    struct timespec *  x571 = (  temp2409 );
    ( ( memset ) ( ( (  cast_dash_ptr2410 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2411 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct timespec *   null_dash_ptr2407 (  ) {
    return ( (  zeroed2408 ) ( ) );
}

static  enum Unit_8   sync2404 (    struct Tui_90 *  tui3380 ) {
    if ( (  eq473 ( ( ( * (  tui3380 ) ) .f_target_dash_fps ) , (  from_dash_integral165 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3381 = (  op_dash_div1036 ( (  from_dash_integral288 ( 1000000000 ) ) , ( (  size_dash_i64302 ) ( ( (  u32_dash_size833 ) ( ( ( * (  tui3380 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2405 = ( (  undefined814 ) ( ) );
    struct timespec *  now3382 = ( &temp2405 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic816 ) ( ) ) ,  (  now3382 ) ) );
    int64_t  elapsed_dash_ns3383 = (  op_dash_add471 ( (  op_dash_mul286 ( (  op_dash_sub1038 ( ( ( * (  now3382 ) ) .tv_sec ) , ( ( ( * (  tui3380 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral288 ( 1000000000 ) ) ) ) , (  op_dash_sub1038 ( ( ( * (  now3382 ) ) .tv_nsec ) , ( ( ( * (  tui3380 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3384 = (  op_dash_sub1038 ( (  frame_dash_ns3381 ) , (  elapsed_dash_ns3383 ) ) );
    if ( (  cmp1056 ( (  sleep_dash_ns3384 ) , (  from_dash_integral288 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2406 = ( (struct timespec) { .tv_sec = (  from_dash_integral288 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3384 ) } );
        struct timespec *  ts3385 = ( &temp2406 );
        ( ( nanosleep ) ( (  ts3385 ) ,  ( (  null_dash_ptr2407 ) ( ) ) ) );
    }
    struct timespec  temp2412 = ( (  undefined814 ) ( ) );
    struct timespec *  last_dash_sync3386 = ( &temp2412 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic816 ) ( ) ) ,  (  last_dash_sync3386 ) ) );
    (*  tui3380 ) .f_last_dash_sync = ( * (  last_dash_sync3386 ) );
    (*  tui3380 ) .f_fps_dash_count = (  op_dash_add171 ( ( ( * (  tui3380 ) ) .f_fps_dash_count ) , (  from_dash_integral165 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3387 = (  op_dash_add471 ( (  op_dash_mul286 ( (  op_dash_sub1038 ( ( ( ( * (  tui3380 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3380 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral288 ( 1000 ) ) ) ) , (  op_dash_div1036 ( (  op_dash_sub1038 ( ( ( ( * (  tui3380 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3380 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral288 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1056 ( (  fps_dash_elapsed_dash_ms3387 ) , (  from_dash_integral288 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3380 ) .f_actual_dash_fps = ( ( * (  tui3380 ) ) .f_fps_dash_count );
        (*  tui3380 ) .f_fps_dash_count = (  from_dash_integral165 ( 0 ) );
        (*  tui3380 ) .f_fps_dash_ts = ( ( * (  tui3380 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2415 (    struct Cell_278 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2414 (    enum CAllocator_10  dref1961 ,    struct Slice_277  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2415 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2413 (    struct Screen_276 *  screen3485 ) {
    enum CAllocator_10  al3486 = ( ( * (  screen3485 ) ) .f_al );
    ( (  free2414 ) ( (  al3486 ) ,  ( ( * (  screen3485 ) ) .f_current ) ) );
    ( (  free2414 ) ( (  al3486 ) ,  ( ( * (  screen3485 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2417 (  ) {
    ( (  print_dash_str328 ) ( ( (  from_dash_string199 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2418 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2419 (  ) {
    ( (  print772 ) ( ( (  from_dash_string199 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2420 (    struct Termios_92 *  og_dash_termios3360 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno710 ) ( ) ) ,  ( (  tcsa_dash_flush770 ) ( ) ) ,  ( (  cast_dash_ptr711 ) ( (  og_dash_termios3360 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2416 (    struct Tui_90 *  tui3390 ) {
    ( (  disable_dash_mouse2417 ) ( ) );
    ( (  show_dash_cursor2418 ) ( ) );
    ( (  reset_dash_colors775 ) ( ) );
    ( (  clear_dash_screen776 ) ( ) );
    ( (  reset_dash_cursor_dash_position2419 ) ( ) );
    ( (  disable_dash_raw_dash_mode2420 ) ( ( & ( ( * (  tui3390 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout778 ) ( ) );
    return ( Unit_8_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2038 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2039 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2040 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .starting_dash_size2038 =  starting_dash_size2038 ,
        .growth_dash_factor2039 =  growth_dash_factor2039 ,
    };
    struct env2 envinst2 = {
        .starting_dash_size2038 =  starting_dash_size2038 ,
        .growth_dash_factor2039 =  growth_dash_factor2039 ,
    };
    struct env3 envinst3 = {
        .starting_dash_size2038 =  starting_dash_size2038 ,
        .growth_dash_factor2039 =  growth_dash_factor2039 ,
    };
    struct env4 envinst4 = {
        .starting_dash_size2038 =  starting_dash_size2038 ,
        .growth_dash_factor2039 =  growth_dash_factor2039 ,
    };
    struct env5 envinst5 = {
        .starting_dash_size2038 =  starting_dash_size2038 ,
        .growth_dash_factor2039 =  growth_dash_factor2039 ,
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
        .shrink_dash_factor2040 =  shrink_dash_factor2040 ,
    };
    struct env41 envinst41 = {
        .shrink_dash_factor2040 =  shrink_dash_factor2040 ,
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
    bool *  should_dash_resize3370 = ( &temp85 );
    struct env86 envinst86 = {
        .should_dash_resize3370 =  should_dash_resize3370 ,
    };
    struct env87 envinst87 = {
        .should_dash_resize3370 =  should_dash_resize3370 ,
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
    struct Color_138  camel4014 = ( (  rgb142 ) ( (  from_dash_integral165 ( 11766360 ) ) ) );
    struct Color_138  olive4015 = ( (  rgb142 ) ( (  from_dash_integral165 ( 7303983 ) ) ) );
    struct Color_138  tea_dash_green4016 = ( (  rgb142 ) ( (  from_dash_integral165 ( 14875064 ) ) ) );
    struct Color_138  chocolate4017 = ( (  rgb142 ) ( (  from_dash_integral165 ( 13721620 ) ) ) );
    struct Color_138  muted_dash_olive4018 = ( (  rgb142 ) ( (  from_dash_integral165 ( 12308106 ) ) ) );
    struct Color_138  palm_dash_leaf4019 = ( (  rgb142 ) ( (  from_dash_integral165 ( 9674588 ) ) ) );
    struct Color_138  lime_dash_green4020 = ( (  rgb142 ) ( (  from_dash_integral165 ( 3263232 ) ) ) );
    struct Color_138  forest_dash_green4021 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1153058 ) ) ) );
    struct Color_138  green4022 = ( (  rgb142 ) ( (  from_dash_integral165 ( 2781729 ) ) ) );
    struct Color_138  dark_dash_spruce4023 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1983518 ) ) ) );
    struct Color_138  evergreen4024 = ( (  rgb142 ) ( (  from_dash_integral165 ( 1386004 ) ) ) );
    struct Array_179  temp181 = ( (  from_dash_listlike182 ) ( ( (struct Array_179) { ._arr = { ( (  hlt183 ) ( ( HighlightType_20_Number ) ,  (  green4022 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_String ) ,  (  camel4014 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Comment ) ,  (  dark_dash_spruce4023 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident1 ) ,  (  lime_dash_green4020 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident2 ) ,  (  muted_dash_olive4018 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident3 ) ,  (  tea_dash_green4016 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Ident4 ) ,  (  palm_dash_leaf4019 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Keyword1 ) ,  (  tea_dash_green4016 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Keyword2 ) ,  (  chocolate4017 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Special1 ) ,  (  olive4015 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Special2 ) ,  (  forest_dash_green4021 ) ) ) , ( (  hlt183 ) ( ( HighlightType_20_Special3 ) ,  (  camel4014 ) ) ) , ( (struct HighlightColors_175) { .f_type = ( HighlightType_20_Invalid ) , .f_fg = (  evergreen4024 ) , .f_bg = ( ( Maybe_176_Just ) ( ( ( Color_138_Color8 ) ( ( Color8_139_Red8 ) ) ) ) ) } ) } } ) ) );
    struct Theme_172  temp177 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = (  evergreen4024 ) , .f_fg = (  lime_dash_green4020 ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = (  lime_dash_green4020 ) , .f_fg = (  evergreen4024 ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = (  forest_dash_green4021 ) , .f_fg = (  evergreen4024 ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = (  evergreen4024 ) , .f_fg = (  forest_dash_green4021 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = (  evergreen4024 ) , .f_fg = (  tea_dash_green4016 ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = (  dark_dash_spruce4023 ) , .f_fg = (  lime_dash_green4020 ) } ) , .f_highlights = ( (  as_dash_slice178 ) ( ( &temp181 ) ) ) } );
    struct Theme_172 *  goblin_dash_ultra4025 = ( &temp177 );
    struct Theme_172  temp184 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_White8 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_highlights = ( (  empty185 ) ( ) ) } );
    struct Theme_172 *  dark_dash_theme4026 = ( &temp184 );
    struct Theme_172  temp191 = ( (struct Theme_172) { .f_default = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_cursor = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_selection = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_White16 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) , .f_fg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_overlay = ( (struct Colors_173) { .f_bg = ( ( Color_138_Color8 ) ( ( Color8_139_Black8 ) ) ) , .f_fg = ( ( Color_138_Color16 ) ( ( Color16_140_BrightWhite16 ) ) ) } ) , .f_highlights = ( (  empty185 ) ( ) ) } );
    struct Theme_172 *  light_dash_theme4027 = ( &temp191 );
    struct Theme_172 *  default4028 = (  goblin_dash_ultra4025 );
    struct Array_195  temp197 = ( (  from_dash_listlike198 ) ( ( (struct Array_195) { ._arr = { ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "default" ) ,  ( 7 ) ) ) ,  (  default4028 ) ) ) , ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra4025 ) ) ) , ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme4026 ) ) ) , ( ( Tuple2_193_Tuple2 ) ( ( (  from_dash_string199 ) ( ( "light-mono" ) ,  ( 10 ) ) ) ,  (  light_dash_theme4027 ) ) ) } } ) ) );
    struct Slice_192  all_dash_themes4029 = ( (  as_dash_slice194 ) ( ( &temp197 ) ) );
    struct env200 envinst200 = {
        .all_dash_themes4029 =  all_dash_themes4029 ,
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
        .envinst207 = envinst207 ,
        .envinst60 = envinst60 ,
        .envinst72 = envinst72 ,
        .envinst253 = envinst253 ,
        .envinst244 = envinst244 ,
        .envinst226 = envinst226 ,
        .envinst204 = envinst204 ,
        .envinst241 = envinst241 ,
    };
    struct env274 envinst274 = {
        .envinst201 = envinst201 ,
    };
    enum CAllocator_10  al4584 = ( (  idc280 ) ( ) );
    struct TextBuf_104  temp282;
    struct TextBuf_104  temp281 = (  temp282 );
    struct TextBuf_104 *  tb4585 = ( &temp281 );
    struct Slice_283  args4588 = ( (  get284 ) ( ) );
    struct Maybe_80  initial_dash_message4589 = ( (struct Maybe_80) { .tag = Maybe_80_None_t } );
    if ( (  cmp290 ( ( (  args4588 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4590 = ( (  from_dash_const_dash_str291 ) ( (  elem_dash_get317 ( (  args4588 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion353  temp352 = ( (struct envunion353){ .fun = (  struct Maybe_351  (*) (  struct env114*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file354 , .env =  envinst114 } );
        struct Maybe_351  dref4591 = ( temp352.fun ( &temp352.env ,  (  al4584 ) ,  (  fname4590 ) ) );
        if ( dref4591.tag == Maybe_351_None_t ) {
            struct envunion696  temp695 = ( (struct envunion696){ .fun = (  struct TextBuf_104  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk357 , .env =  envinst112 } );
            (*  tb4585 ) = ( temp695.fun ( &temp695.env ,  (  al4584 ) ) );
            (*  tb4585 ) .f_filename = ( ( Maybe_80_Just ) ( ( (  clone_dash_0505 ) ( (  fname4590 ) ,  (  al4584 ) ) ) ) );
        }
        else {
            if ( dref4591.tag == Maybe_351_Just_t ) {
                (*  tb4585 ) = ( dref4591 .stuff .Maybe_351_Just_s .field0 );
            }
        }
    } else {
        struct envunion698  temp697 = ( (struct envunion698){ .fun = (  struct TextBuf_104  (*) (  struct env112*  ,    enum CAllocator_10  ) )mk357 , .env =  envinst112 } );
        (*  tb4585 ) = ( temp697.fun ( &temp697.env ,  (  al4584 ) ) );
    }
    struct Config_250  temp699 = ( (struct Config_250) { .f_theme = (  default4028 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_250 *  cfg4593 = ( &temp699 );
    struct Editor_248  temp700 = ( (struct Editor_248) { .f_running = ( true ) , .f_al = (  al4584 ) , .f_pane = ( (  mk701 ) ( (  al4584 ) ,  (  tb4585 ) ) ) , .f_clipboard = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_search_dash_term = ( (struct Maybe_80) { .tag = Maybe_80_None_t } ) , .f_mode = ( (struct EditorMode_249) { .tag = EditorMode_249_Normal_t } ) , .f_msg = (  initial_dash_message4589 ) , .f_cfg = (  cfg4593 ) , .f_og_dash_theme = (  default4028 ) } );
    struct Editor_248 *  ed4594 = ( &temp700 );
    struct envunion704  temp703 = ( (struct envunion704){ .fun = (  struct Tui_90  (*) (  struct env86*  ) )mk705 , .env =  envinst86 } );
    struct Tui_90  temp702 = ( temp703.fun ( &temp703.env ) );
    struct Tui_90 *  tui4595 = ( &temp702 );
    struct Screen_276  temp826 = ( (  mk_dash_screen827 ) ( (  tui4595 ) ,  (  al4584 ) ) );
    struct Screen_276 *  screen4596 = ( &temp826 );
    uint32_t  last_dash_redraw_dash_changes4597 = (  from_dash_integral165 ( 0 ) );
    while ( ( ( * (  ed4594 ) ) .f_running ) ) {
        struct env871 envinst871 = {
            .envinst88 = envinst88 ,
            .tui4595 =  tui4595 ,
        };
        struct FunIter_870  temp869 =  into_dash_iter878 ( ( (  from_dash_function879 ) ( ( (struct envunion877){ .fun = (  struct Maybe_873  (*) (  struct env871*  ) )lam880 , .env =  envinst871 } ) ) ) );
        while (true) {
            struct Maybe_873  __cond1076 =  next1077 (&temp869);
            if (  __cond1076 .tag == 0 ) {
                break;
            }
            struct InputEvent_874  ev4599 =  __cond1076 .stuff .Maybe_873_Just_s .field0;
            struct InputEvent_874  dref4600 = (  ev4599 );
            if ( dref4600.tag == InputEvent_874_Key_t ) {
                ( (  reset_dash_msg1079 ) ( (  ed4594 ) ) );
                struct envunion1086  temp1085 = ( (struct envunion1086){ .fun = (  enum Unit_8  (*) (  struct env264*  ,    struct Editor_248 *  ,    struct Key_269  ) )handle_dash_key1087 , .env =  envinst264 } );
                ( temp1085.fun ( &temp1085.env ,  (  ed4594 ) ,  ( dref4600 .stuff .InputEvent_874_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1873  temp1872 = ( (struct envunion1873){ .fun = (  bool  (*) (  struct env94*  ,    struct Screen_276 *  ) )resize_dash_screen_dash_if_dash_needed1874 , .env =  envinst94 } );
        ( temp1872.fun ( &temp1872.env ,  (  screen4596 ) ) );
        if ( ( (  should_dash_redraw1876 ) ( (  tui4595 ) ) ) ) {
            (*  screen4596 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1877 ) ( (  screen4596 ) ) );
            struct Theme_172 *  theme4602 = ( ( * ( ( * (  ed4594 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg1886 ) ( (  screen4596 ) ,  ( ( ( * (  theme4602 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1887 ) ( (  screen4596 ) ,  ( ( ( * (  theme4602 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1888 ) ( (  screen4596 ) ) );
            struct envunion1901  temp1900 = ( (struct envunion1901){ .fun = (  enum Unit_8  (*) (  struct env274*  ,    struct Screen_276 *  ,    struct Editor_248 *  ) )render_dash_editor1902 , .env =  envinst274 } );
            ( temp1900.fun ( &temp1900.env ,  (  screen4596 ) ,  (  ed4594 ) ) );
            last_dash_redraw_dash_changes4597 = ( (  render_dash_screen2257 ) ( (  screen4596 ) ) );
        }
        ( (  sync2404 ) ( (  tui4595 ) ) );
    }
    ( (  free_dash_screen2413 ) ( (  screen4596 ) ) );
    ( (  deinit2416 ) ( (  tui4595 ) ) );
}
