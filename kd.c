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
    size_t  growth_dash_factor2441;
    ;
    ;
    ;
    size_t  starting_dash_size2440;
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
    size_t  growth_dash_factor2441;
    ;
    ;
    ;
    size_t  starting_dash_size2440;
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
    size_t  growth_dash_factor2441;
    ;
    ;
    ;
    size_t  starting_dash_size2440;
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
    size_t  growth_dash_factor2441;
    ;
    ;
    ;
    size_t  starting_dash_size2440;
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
    size_t  growth_dash_factor2441;
    ;
    ;
    ;
    size_t  starting_dash_size2440;
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
    struct env1 envinst1;
    ;
    ;
    ;
    ;
};

struct envunion20 {
    enum Unit_8  (*fun) (  struct env2*  ,    struct List_13 *  );
    struct env2 env;
};

struct env19 {
    ;
    struct env2 envinst2;
    ;
    ;
    ;
    ;
};

struct Pos_29 {
    int32_t  f_line;
    int32_t  f_bi;
};

struct StrView_30 {
    struct Slice_14  f_contents;
};

struct Action_28 {
    struct Pos_29  f_from;
    struct StrView_30  f_fwd;
    struct Pos_29  f_to_dash_fwd;
    struct StrView_30  f_bwd;
    struct Pos_29  f_to_dash_bwd;
};

struct Slice_27 {
    struct Action_28 *  f_ptr;
    size_t  f_count;
};

struct List_26 {
    enum CAllocator_10  f_al;
    struct Slice_27  f_elements;
    size_t  f_count;
};

struct Maybe_32 {
    enum {
        Maybe_32_None_t,
        Maybe_32_Just_t,
    } tag;
    union {
        struct {
            struct Pos_29  field0;
        } Maybe_32_Just_s;
    } stuff;
};

static struct Maybe_32 Maybe_32_Just (  struct Pos_29  field0 ) {
    return ( struct Maybe_32 ) { .tag = Maybe_32_Just_t, .stuff = { .Maybe_32_Just_s = { .field0 = field0 } } };
};

struct Cursors_31 {
    struct Pos_29  f_cur;
    struct Maybe_32  f_sel;
};

struct Changeset_25 {
    struct List_26  f_parts;
    struct Cursors_31  f_before_dash_cursors;
};

struct Slice_24 {
    struct Changeset_25 *  f_ptr;
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
    struct env3 envinst3;
    ;
    ;
    ;
    ;
};

struct envunion34 {
    enum Unit_8  (*fun) (  struct env4*  ,    struct List_26 *  );
    struct env4 env;
};

struct env33 {
    ;
    struct env4 envinst4;
    ;
    ;
    ;
    ;
};

struct envunion36 {
    enum Unit_8  (*fun) (  struct env5*  ,    struct List_15 *  );
    struct env5 env;
};

struct env35 {
    ;
    struct env5 envinst5;
    ;
    ;
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
    size_t  shrink_dash_factor2442;
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
    size_t  shrink_dash_factor2442;
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
    struct env40 envinst40;
    ;
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
    struct env60 envinst60;
    ;
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
    struct StrView_30  field0;
    struct Char_65  field1;
};

static struct StrConcat_71 StrConcat_71_StrConcat (  struct StrView_30  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_71 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion70 {
    enum Unit_8  (*fun) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  );
    struct env66 env;
};

struct env69 {
    ;
    ;
    ;
    ;
    struct env66 envinst66;
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
    struct StrView_30  field0;
    size_t  field1;
};

static struct StrConcat_79 StrConcat_79_StrConcat (  struct StrView_30  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_79 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_78 {
    struct StrConcat_79  field0;
    struct StrView_30  field1;
};

static struct StrConcat_78 StrConcat_78_StrConcat (  struct StrConcat_79  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_78 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion77 {
    enum Unit_8  (*fun) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_78  );
    struct env63 env;
};

struct env75 {
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
    struct env63 envinst63;
    ;
};

struct envunion81 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrView_30  );
    struct env67 env;
};

struct env80 {
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
    struct env67 envinst67;
};

struct Maybe_85 {
    enum {
        Maybe_85_None_t,
        Maybe_85_Just_t,
    } tag;
    union {
        struct {
            struct StrView_30  field0;
        } Maybe_85_Just_s;
    } stuff;
};

static struct Maybe_85 Maybe_85_Just (  struct StrView_30  field0 ) {
    return ( struct Maybe_85 ) { .tag = Maybe_85_Just_t, .stuff = { .Maybe_85_Just_s = { .field0 = field0 } } };
};

struct StrConcat_84 {
    struct StrView_30  field0;
    struct Maybe_85  field1;
};

static struct StrConcat_84 StrConcat_84_StrConcat (  struct StrView_30  field0 ,  struct Maybe_85  field1 ) {
    return ( struct StrConcat_84 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion83 {
    enum Unit_8  (*fun) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_84  );
    struct env68 env;
};

struct env82 {
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
    struct env68 envinst68;
    ;
};

struct env87 {
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize3563;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env88 {
    ;
    ;
    ;
    bool *  should_dash_resize3563;
};

enum ColorPalette_92 {
    ColorPalette_92_Palette8,
    ColorPalette_92_Palette16,
    ColorPalette_92_Palette256,
    ColorPalette_92_PaletteRGB,
};

struct Array_94 {
    uint8_t _arr [32];
};

struct Termios_93 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_94  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_91 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_92  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_93  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion90 {
    bool  (*fun) (  struct env88*  ,    struct Tui_91 *  );
    struct env88 env;
};

struct env89 {
    struct env88 envinst88;
    ;
};

struct envunion96 {
    bool  (*fun) (  struct env88*  ,    struct Tui_91 *  );
    struct env88 env;
};

struct env95 {
    ;
    ;
    struct env88 envinst88;
    ;
    ;
    ;
};

struct envunion98 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

struct envunion99 {
    enum Unit_8  (*fun) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  );
    struct env37 env;
};

struct envunion100 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env97 {
    struct env53 envinst53;
    ;
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
};

struct envunion102 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

enum ChangesetInputType_106 {
    ChangesetInputType_106_NoChangeset,
    ChangesetInputType_106_InputChangeset,
    ChangesetInputType_106_CustomChangeset,
};

struct Actions_105 {
    struct List_23  f_list;
    size_t  f_cur;
    enum ChangesetInputType_106  f_input_dash_changeset;
};

enum Filetype_107 {
    Filetype_107_Text,
    Filetype_107_KC,
    Filetype_107_Markdown,
    Filetype_107_GCode,
    Filetype_107_Brainfuck,
};

struct TextBuf_104 {
    enum CAllocator_10  f_al;
    struct List_9  f_buf;
    struct Actions_105  f_actions;
    struct Maybe_85  f_filename;
    enum Filetype_107  f_filetype;
};

struct envunion103 {
    int32_t  (*fun) (  struct env97*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct StrView_30  );
    struct env97 env;
};

struct envunion108 {
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  );
    struct env40 env;
};

struct envunion109 {
    enum Unit_8  (*fun) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  );
    struct env41 env;
};

struct envunion110 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  );
    struct env6 env;
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
    struct env48 envinst48;
    ;
    struct env97 envinst97;
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
    struct env6 envinst6;
    ;
    ;
    ;
    ;
};

struct envunion112 {
    enum Unit_8  (*fun) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_30  );
    struct env69 env;
};

struct env111 {
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion114 {
    struct List_9  (*fun) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  );
    struct env50 env;
};

struct env113 {
    struct env50 envinst50;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion116 {
    struct TextBuf_104  (*fun) (  struct env113*  ,    enum CAllocator_10  );
    struct env113 env;
};

struct envunion117 {
    enum Unit_8  (*fun) (  struct env101*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  );
    struct env101 env;
};

struct env115 {
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env101 envinst101;
    ;
    ;
};

struct envunion119 {
    enum Unit_8  (*fun) (  struct env101*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  );
    struct env101 env;
};

struct env118 {
    ;
    struct env101 envinst101;
    ;
    ;
    ;
};

struct envunion121 {
    enum Unit_8  (*fun) (  struct env101*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  );
    struct env101 env;
};

struct env120 {
    ;
    struct env101 envinst101;
    ;
    ;
    ;
};

struct envunion123 {
    struct Pos_29  (*fun) (  struct env118*  ,    struct TextBuf_104 *  ,    struct Action_28  );
    struct env118 env;
};

struct env122 {
    ;
    ;
    ;
    ;
    struct env118 envinst118;
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

struct envunion125 {
    struct Pos_29  (*fun) (  struct env120*  ,    struct TextBuf_104 *  ,    struct Action_28  );
    struct env120 env;
};

struct env124 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env120 envinst120;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion127 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
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

struct envunion129 {
    struct StrView_30  (*fun) (  struct env126*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  );
    struct env126 env;
};

struct envunion130 {
    struct Pos_29  (*fun) (  struct env120*  ,    struct TextBuf_104 *  ,    struct Action_28  );
    struct env120 env;
};

struct envunion131 {
    enum Unit_8  (*fun) (  struct env33*  ,    struct List_26 *  ,    struct Action_28  );
    struct env33 env;
};

struct envunion132 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Changeset_25  );
    struct env21 env;
};

struct env128 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env120 envinst120;
    ;
    ;
    struct env33 envinst33;
    struct env21 envinst21;
    ;
    ;
    ;
    ;
};

struct envunion134 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Changeset_25  );
    struct env21 env;
};

struct env133 {
    ;
    ;
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
    ;
};

struct envunion136 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct envunion138 {
    enum Unit_8  (*fun) (  struct env135*  ,    struct TextBuf_104 *  ,    struct Line_12 *  );
    struct env135 env;
};

struct env137 {
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
    ;
};

enum Color8_140 {
    Color8_140_Black8,
    Color8_140_Red8,
    Color8_140_Green8,
    Color8_140_Yellow8,
    Color8_140_Blue8,
    Color8_140_Magenta8,
    Color8_140_Cyan8,
    Color8_140_White8,
};

enum Color16_141 {
    Color16_141_Black16,
    Color16_141_Red16,
    Color16_141_Green16,
    Color16_141_Yellow16,
    Color16_141_Blue16,
    Color16_141_Magenta16,
    Color16_141_Cyan16,
    Color16_141_White16,
    Color16_141_BrightBlack16,
    Color16_141_BrightRed16,
    Color16_141_BrightGreen16,
    Color16_141_BrightYellow16,
    Color16_141_BrightBlue16,
    Color16_141_BrightMagenta16,
    Color16_141_BrightCyan16,
    Color16_141_BrightWhite16,
};

struct RGB_142 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_139 {
    enum {
        Color_139_ColorDefault_t,
        Color_139_Color8_t,
        Color_139_Color16_t,
        Color_139_Color256_t,
        Color_139_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_140  field0;
        } Color_139_Color8_s;
        struct {
            enum Color16_141  field0;
        } Color_139_Color16_s;
        struct {
            uint8_t  field0;
        } Color_139_Color256_s;
        struct {
            struct RGB_142  field0;
        } Color_139_ColorRGB_s;
    } stuff;
};

static struct Color_139 Color_139_Color8 (  enum Color8_140  field0 ) {
    return ( struct Color_139 ) { .tag = Color_139_Color8_t, .stuff = { .Color_139_Color8_s = { .field0 = field0 } } };
};

static struct Color_139 Color_139_Color16 (  enum Color16_141  field0 ) {
    return ( struct Color_139 ) { .tag = Color_139_Color16_t, .stuff = { .Color_139_Color16_s = { .field0 = field0 } } };
};

static struct Color_139 Color_139_Color256 (  uint8_t  field0 ) {
    return ( struct Color_139 ) { .tag = Color_139_Color256_t, .stuff = { .Color_139_Color256_s = { .field0 = field0 } } };
};

static struct Color_139 Color_139_ColorRGB (  struct RGB_142  field0 ) {
    return ( struct Color_139 ) { .tag = Color_139_ColorRGB_t, .stuff = { .Color_139_ColorRGB_s = { .field0 = field0 } } };
};

static  uint8_t   cast146 (    uint32_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  uint8_t   u32_dash_u8145 (    uint32_t  x734 ) {
    return ( (  cast146 ) ( (  x734 ) ) );
}

static  uint32_t   op_dash_div148 (    uint32_t  l264 ,    uint32_t  r266 ) {
    return ( (  l264 ) / (  r266 ) );
}

struct Range_151 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_151 Range_151_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_151 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env152 {
    uint32_t  base1379;
    ;
};

struct envunion153 {
    uint32_t  (*fun) (  struct env152*  ,    int32_t  ,    uint32_t  );
    struct env152 env;
};

struct RangeIter_154 {
    struct Range_151  field0;
    int32_t  field1;
};

static struct RangeIter_154 RangeIter_154_RangeIter (  struct Range_151  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_154 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_154   into_dash_iter155 (    struct Range_151  dref884 ) {
    return ( ( RangeIter_154_RangeIter ) ( ( ( Range_151_Range ) ( ( dref884 .field0 ) ,  ( dref884 .field1 ) ) ) ,  ( dref884 .field0 ) ) );
}

struct Maybe_156 {
    enum {
        Maybe_156_None_t,
        Maybe_156_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_156_Just_s;
    } stuff;
};

static struct Maybe_156 Maybe_156_Just (  int32_t  field0 ) {
    return ( struct Maybe_156 ) { .tag = Maybe_156_Just_t, .stuff = { .Maybe_156_Just_s = { .field0 = field0 } } };
};

enum Ordering_159 {
    Ordering_159_LT,
    Ordering_159_EQ,
    Ordering_159_GT,
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_159   cmp158 (    int32_t  l168 ,    int32_t  r170 ) {
    return ( builtin_int32_tcmp( (  l168 ) , (  r170 ) ) );
}

static  int32_t   op_dash_add160 (    int32_t  l226 ,    int32_t  r228 ) {
    return ( (  l226 ) + (  r228 ) );
}

static  struct Maybe_156   next157 (    struct RangeIter_154 *  self892 ) {
    struct RangeIter_154  dref893 = ( * (  self892 ) );
    if ( true ) {
        if ( (  cmp158 ( ( dref893 .field1 ) , ( dref893 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_156) { .tag = Maybe_156_None_t } );
        }
        struct Maybe_156  x897 = ( ( Maybe_156_Just ) ( ( dref893 .field1 ) ) );
        (*  self892 ) = ( ( RangeIter_154_RangeIter ) ( ( ( Range_151_Range ) ( ( dref893 .field0 .field0 ) ,  ( dref893 .field0 .field1 ) ) ) ,  (  op_dash_add160 ( ( dref893 .field1 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        return (  x897 );
    }
}

static  uint32_t   reduce150 (    struct Range_151  iterable1111 ,    uint32_t  base1113 ,   struct envunion153  fun1115 ) {
    uint32_t  x1116 = (  base1113 );
    struct RangeIter_154  it1117 = ( (  into_dash_iter155 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_156  dref1118 = ( (  next157 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_156_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_156_Just_t ) {
                struct envunion153  temp161 = (  fun1115 );
                x1116 = ( temp161.fun ( &temp161.env ,  ( dref1118 .stuff .Maybe_156_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp162 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp162);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp163;
    return (  temp163 );
}

static  struct Range_151   to164 (    int32_t  from875 ,    int32_t  to877 ) {
    return ( ( Range_151_Range ) ( (  from875 ) ,  (  to877 ) ) );
}

static  int32_t   op_dash_sub165 (    int32_t  l231 ,    int32_t  r233 ) {
    return ( (  l231 ) - (  r233 ) );
}

static  uint32_t   from_dash_integral166 (    size_t  x53 ) {
    return ( (uint32_t ) (  x53 ) );
}

static  uint32_t   op_dash_mul168 (    uint32_t  l259 ,    uint32_t  r261 ) {
    return ( (  l259 ) * (  r261 ) );
}

static  uint32_t   lam167 (   struct env152* env ,    int32_t  item1383 ,    uint32_t  x1385 ) {
    return (  op_dash_mul168 ( (  x1385 ) , ( env->base1379 ) ) );
}

static  uint32_t   pow149 (    uint32_t  base1379 ,    int32_t  p1381 ) {
    struct env152 envinst152 = {
        .base1379 =  base1379 ,
    };
    return ( (  reduce150 ) ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( (  p1381 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral166 ( 1 ) ) ,  ( (struct envunion153){ .fun = (  uint32_t  (*) (  struct env152*  ,    int32_t  ,    uint32_t  ) )lam167 , .env =  envinst152 } ) ) );
}

static  uint32_t   rshift147 (    uint32_t  x1532 ,    int32_t  am1534 ) {
    return (  op_dash_div148 ( (  x1532 ) , ( (  pow149 ) ( (  from_dash_integral166 ( 2 ) ) ,  (  am1534 ) ) ) ) );
}

static  uint32_t   op_dash_sub170 (    uint32_t  l254 ,    uint32_t  r256 ) {
    return ( (  l254 ) - (  r256 ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_159   cmp171 (    uint32_t  l173 ,    uint32_t  r175 ) {
    return ( builtin_uint32_tcmp( (  l173 ) , (  r175 ) ) );
}

static  uint32_t   op_dash_add172 (    uint32_t  l249 ,    uint32_t  r251 ) {
    return ( (  l249 ) + (  r251 ) );
}

static  uint32_t   mod169 (    uint32_t  l1537 ,    uint32_t  d1539 ) {
    uint32_t  r1540 = (  op_dash_div148 ( (  l1537 ) , (  d1539 ) ) );
    uint32_t  m1541 = (  op_dash_sub170 ( (  l1537 ) , (  op_dash_mul168 ( (  r1540 ) , (  d1539 ) ) ) ) );
    if ( (  cmp171 ( (  m1541 ) , (  from_dash_integral166 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add172 ( (  d1539 ) , (  m1541 ) ) );
    } else {
        return (  m1541 );
    }
}

static  struct RGB_142   rgb_dash_from_dash_hex144 (    uint32_t  n2773 ) {
    return ( (struct RGB_142) { .f_r = ( (  u32_dash_u8145 ) ( ( (  rshift147 ) ( (  n2773 ) ,  (  from_dash_integral56 ( 16 ) ) ) ) ) ) , .f_g = ( (  u32_dash_u8145 ) ( ( (  mod169 ) ( ( (  rshift147 ) ( (  n2773 ) ,  (  from_dash_integral56 ( 8 ) ) ) ) ,  (  from_dash_integral166 ( 256 ) ) ) ) ) ) , .f_b = ( (  u32_dash_u8145 ) ( ( (  mod169 ) ( (  n2773 ) ,  (  from_dash_integral166 ( 256 ) ) ) ) ) ) } );
}

static  struct Color_139   rgb143 (    uint32_t  x4246 ) {
    return ( ( Color_139_ColorRGB ) ( ( (  rgb_dash_from_dash_hex144 ) ( (  x4246 ) ) ) ) );
}

struct Colors_174 {
    struct Color_139  f_fg;
    struct Color_139  f_bg;
};

struct Maybe_177 {
    enum {
        Maybe_177_None_t,
        Maybe_177_Just_t,
    } tag;
    union {
        struct {
            struct Color_139  field0;
        } Maybe_177_Just_s;
    } stuff;
};

static struct Maybe_177 Maybe_177_Just (  struct Color_139  field0 ) {
    return ( struct Maybe_177 ) { .tag = Maybe_177_Just_t, .stuff = { .Maybe_177_Just_s = { .field0 = field0 } } };
};

struct HighlightColors_176 {
    enum HighlightType_18  f_type;
    struct Color_139  f_fg;
    struct Maybe_177  f_bg;
};

struct Slice_175 {
    struct HighlightColors_176 *  f_ptr;
    size_t  f_count;
};

struct Theme_173 {
    struct Colors_174  f_default;
    struct Colors_174  f_cursor;
    struct Colors_174  f_selection;
    struct Colors_174  f_line_dash_num;
    struct Colors_174  f_line_dash_num_dash_hl;
    struct Colors_174  f_overlay;
    struct Slice_175  f_highlights;
};

struct Array_180 {
    struct HighlightColors_176 _arr [13];
};

static  struct HighlightColors_176 *   cast181 (    struct Array_180 *  x395 ) {
    return ( (struct HighlightColors_176 * ) (  x395 ) );
}

static  struct Slice_175   as_dash_slice179 (    struct Array_180 *  arr2045 ) {
    return ( (struct Slice_175) { .f_ptr = ( (  cast181 ) ( (  arr2045 ) ) ) , .f_count = ( (size_t ) ( 13 ) ) } );
}

static  struct Array_180   from_dash_listlike183 (    struct Array_180 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct HighlightColors_176   hlt185 (    enum HighlightType_18  type4240 ,    struct Color_139  fg4242 ) {
    return ( (struct HighlightColors_176) { .f_type = (  type4240 ) , .f_fg = (  fg4242 ) , .f_bg = ( (struct Maybe_177) { .tag = Maybe_177_None_t } ) } );
}

static  void *   cast_dash_ptr191 (    struct HighlightColors_176 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of192 (    struct HighlightColors_176 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct HighlightColors_176 *   zeroed189 (  ) {
    struct HighlightColors_176 *  temp190;
    struct HighlightColors_176 *  x641 = (  temp190 );
    ( ( memset ) ( ( (  cast_dash_ptr191 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of192 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  struct HighlightColors_176 *   null_dash_ptr188 (  ) {
    return ( (  zeroed189 ) ( ) );
}

static  struct Slice_175   empty187 (  ) {
    return ( (struct Slice_175) { .f_ptr = ( (  null_dash_ptr188 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct Tuple2_195 {
    struct StrView_30  field0;
    struct Theme_173 *  field1;
};

static struct Tuple2_195 Tuple2_195_Tuple2 (  struct StrView_30  field0 ,  struct Theme_173 *  field1 ) {
    return ( struct Tuple2_195 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_194 {
    struct Tuple2_195 *  f_ptr;
    size_t  f_count;
};

struct Array_197 {
    struct Tuple2_195 _arr [4];
};

static  struct Tuple2_195 *   cast198 (    struct Array_197 *  x395 ) {
    return ( (struct Tuple2_195 * ) (  x395 ) );
}

static  struct Slice_194   as_dash_slice196 (    struct Array_197 *  arr2045 ) {
    return ( (struct Slice_194) { .f_ptr = ( (  cast198 ) ( (  arr2045 ) ) ) , .f_count = ( (size_t ) ( 4 ) ) } );
}

static  struct Array_197   from_dash_listlike200 (    struct Array_197 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct StrView_30   from_dash_string202 (    uint8_t *  ptr90 ,    size_t  count92 ) {
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr90 ) , .f_count = (  count92 ) } ) } );
}

struct env203 {
    ;
    ;
    ;
    struct Slice_194  all_dash_themes4262;
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
            enum HighlightType_18  field0;
        } Maybe_206_Just_s;
    } stuff;
};

static struct Maybe_206 Maybe_206_Just (  enum HighlightType_18  field0 ) {
    return ( struct Maybe_206 ) { .tag = Maybe_206_Just_t, .stuff = { .Maybe_206_Just_s = { .field0 = field0 } } };
};

struct envunion205 {
    struct Maybe_206  (*fun) (  struct env137*  ,    struct TextBuf_104 *  ,    struct Pos_29  );
    struct env137 env;
};

struct env204 {
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct Maybe_209 {
    enum {
        Maybe_209_None_t,
        Maybe_209_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_31  field0;
        } Maybe_209_Just_s;
    } stuff;
};

static struct Maybe_209 Maybe_209_Just (  struct Cursors_31  field0 ) {
    return ( struct Maybe_209 ) { .tag = Maybe_209_Just_t, .stuff = { .Maybe_209_Just_s = { .field0 = field0 } } };
};

struct envunion208 {
    struct Maybe_209  (*fun) (  struct env128*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_209  );
    struct env128 env;
};

struct env207 {
    struct env128 envinst128;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion211 {
    struct Maybe_209  (*fun) (  struct env128*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_209  );
    struct env128 env;
};

struct env210 {
    struct env128 envinst128;
    ;
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

struct envunion213 {
    struct Maybe_209  (*fun) (  struct env122*  ,    struct TextBuf_104 *  );
    struct env122 env;
};

struct env212 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env122 envinst122;
};

struct envunion215 {
    struct Maybe_209  (*fun) (  struct env124*  ,    struct TextBuf_104 *  );
    struct env124 env;
};

struct env214 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env124 envinst124;
};

struct envunion217 {
    struct Maybe_209  (*fun) (  struct env128*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_209  );
    struct env128 env;
};

struct env216 {
    ;
    struct env128 envinst128;
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

struct envunion219 {
    struct Maybe_209  (*fun) (  struct env128*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_209  );
    struct env128 env;
};

struct env218 {
    ;
    struct env128 envinst128;
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

struct envunion221 {
    enum Unit_8  (*fun) (  struct env133*  ,    struct TextBuf_104 *  ,    struct Cursors_31  );
    struct env133 env;
};

enum Mode_224 {
    Mode_224_Normal,
    Mode_224_Insert,
    Mode_224_Select,
};

struct ScreenCursorOffset_225 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_223 {
    struct TextBuf_104 *  f_buf;
    struct Pos_29  f_cursor;
    int32_t  f_vi;
    struct Maybe_32  f_sel;
    enum Mode_224  f_mode;
    struct ScreenCursorOffset_225  f_sc_dash_off;
};

struct envunion222 {
    enum Unit_8  (*fun) (  struct env218*  ,    struct Pane_223 *  ,    int32_t  );
    struct env218 env;
};

struct env220 {
    ;
    ;
    ;
    struct env133 envinst133;
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
    ;
    ;
    ;
    ;
    ;
};

struct envunion227 {
    struct Maybe_209  (*fun) (  struct env128*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_209  );
    struct env128 env;
};

struct envunion228 {
    enum Unit_8  (*fun) (  struct env133*  ,    struct TextBuf_104 *  ,    struct Cursors_31  );
    struct env133 env;
};

struct env226 {
    ;
    ;
    struct env128 envinst128;
    struct env133 envinst133;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion230 {
    enum Unit_8  (*fun) (  struct env218*  ,    struct Pane_223 *  ,    int32_t  );
    struct env218 env;
};

struct env229 {
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
    ;
    ;
    ;
};

struct Tuple2_233 {
    struct Pos_29  field0;
    struct Pos_29  field1;
};

static struct Tuple2_233 Tuple2_233_Tuple2 (  struct Pos_29  field0 ,  struct Pos_29  field1 ) {
    return ( struct Tuple2_233 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion232 {
    enum Unit_8  (*fun) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  );
    struct env216 env;
};

struct envunion234 {
    enum Unit_8  (*fun) (  struct env133*  ,    struct TextBuf_104 *  ,    struct Cursors_31  );
    struct env133 env;
};

struct envunion235 {
    enum Unit_8  (*fun) (  struct env207*  ,    struct Pane_223 *  ,    struct StrView_30  );
    struct env207 env;
};

struct env231 {
    ;
    ;
    struct env216 envinst216;
    struct env133 envinst133;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct envunion237 {
    struct StrView_30  (*fun) (  struct env126*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  );
    struct env126 env;
};

struct env236 {
    ;
    ;
    ;
    ;
    ;
    struct env126 envinst126;
    ;
};

struct envunion239 {
    struct StrView_30  (*fun) (  struct env75*  ,    struct StrConcat_78  ,    enum CAllocator_10  );
    struct env75 env;
};

struct env238 {
    ;
    ;
    struct env75 envinst75;
    ;
    ;
    ;
    ;
};

struct envunion241 {
    struct StrView_30  (*fun) (  struct env80*  ,    struct StrView_30  ,    enum CAllocator_10  );
    struct env80 env;
};

struct env240 {
    ;
    struct env80 envinst80;
    ;
    ;
    ;
    ;
    ;
};

struct envunion243 {
    struct StrView_30  (*fun) (  struct env82*  ,    struct StrConcat_84  ,    enum CAllocator_10  );
    struct env82 env;
};

struct env242 {
    ;
    ;
    struct env82 envinst82;
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
            struct Theme_173 *  field0;
        } Maybe_246_Just_s;
    } stuff;
};

static struct Maybe_246 Maybe_246_Just (  struct Theme_173 *  field0 ) {
    return ( struct Maybe_246 ) { .tag = Maybe_246_Just_t, .stuff = { .Maybe_246_Just_s = { .field0 = field0 } } };
};

struct envunion245 {
    struct Maybe_246  (*fun) (  struct env203*  ,    struct StrView_30  );
    struct env203 env;
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
    struct env203 envinst203;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct Maybe_249 {
    enum {
        Maybe_249_None_t,
        Maybe_249_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_249_Just_s;
    } stuff;
};

static struct Maybe_249 Maybe_249_Just (  size_t  field0 ) {
    return ( struct Maybe_249 ) { .tag = Maybe_249_Just_t, .stuff = { .Maybe_249_Just_s = { .field0 = field0 } } };
};

struct envunion248 {
    struct Maybe_249  (*fun) (  struct env111*  ,    struct TextBuf_104 *  ,    struct Maybe_85  );
    struct env111 env;
};

struct EditorMode_252 {
    enum {
        EditorMode_252_Normal_t,
        EditorMode_252_Cmd_t,
        EditorMode_252_Search_t,
    } tag;
    union {
        struct {
            struct Pos_29  field0;
            struct StrBuilder_62  field1;
        } EditorMode_252_Cmd_s;
        struct {
            struct Pos_29  field0;
            struct StrBuilder_62  field1;
        } EditorMode_252_Search_s;
    } stuff;
};

static struct EditorMode_252 EditorMode_252_Cmd (  struct Pos_29  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_252 ) { .tag = EditorMode_252_Cmd_t, .stuff = { .EditorMode_252_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_252 EditorMode_252_Search (  struct Pos_29  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_252 ) { .tag = EditorMode_252_Search_t, .stuff = { .EditorMode_252_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Config_253 {
    struct Theme_173 *  f_theme;
    bool  f_display_dash_line_dash_numbers;
    bool  f_relative_dash_line_dash_numbers;
};

struct Editor_251 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_223  f_pane;
    struct Maybe_85  f_clipboard;
    struct Maybe_85  f_search_dash_term;
    struct EditorMode_252  f_mode;
    struct Maybe_85  f_msg;
    struct Config_253 *  f_cfg;
    struct Theme_173 *  f_og_dash_theme;
};

struct envunion250 {
    enum Unit_8  (*fun) (  struct env240*  ,    struct Editor_251 *  ,    struct StrView_30  );
    struct env240 env;
};

struct envunion254 {
    enum Unit_8  (*fun) (  struct env242*  ,    struct Editor_251 *  ,    struct StrConcat_84  );
    struct env242 env;
};

struct envunion255 {
    enum Unit_8  (*fun) (  struct env238*  ,    struct Editor_251 *  ,    struct StrConcat_78  );
    struct env238 env;
};

struct env247 {
    ;
    ;
    ;
    ;
    ;
    struct env111 envinst111;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env240 envinst240;
    struct env242 envinst242;
    struct env238 envinst238;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion257 {
    enum Unit_8  (*fun) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  );
    struct env216 env;
};

struct envunion258 {
    enum Unit_8  (*fun) (  struct env226*  ,    struct Pane_223 *  );
    struct env226 env;
};

struct envunion259 {
    enum Unit_8  (*fun) (  struct env207*  ,    struct Pane_223 *  ,    struct StrView_30  );
    struct env207 env;
};

struct envunion260 {
    enum Unit_8  (*fun) (  struct env220*  ,    struct Pane_223 *  );
    struct env220 env;
};

struct envunion261 {
    enum Unit_8  (*fun) (  struct env236*  ,    struct Editor_251 *  );
    struct env236 env;
};

struct envunion262 {
    enum Unit_8  (*fun) (  struct env212*  ,    struct Pane_223 *  );
    struct env212 env;
};

struct envunion263 {
    enum Unit_8  (*fun) (  struct env214*  ,    struct Pane_223 *  );
    struct env214 env;
};

struct envunion264 {
    enum Unit_8  (*fun) (  struct env229*  ,    struct Pane_223 *  ,    int32_t  );
    struct env229 env;
};

struct envunion265 {
    enum Unit_8  (*fun) (  struct env238*  ,    struct Editor_251 *  ,    struct StrConcat_78  );
    struct env238 env;
};

struct envunion266 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Pane_223 *  );
    struct env231 env;
};

struct env256 {
    ;
    ;
    struct env216 envinst216;
    ;
    struct env226 envinst226;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env207 envinst207;
    ;
    ;
    ;
    struct env220 envinst220;
    ;
    ;
    ;
    ;
    ;
    struct env236 envinst236;
    struct env212 envinst212;
    ;
    ;
    struct env214 envinst214;
    ;
    struct env229 envinst229;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env238 envinst238;
    ;
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
};

struct envunion268 {
    enum Unit_8  (*fun) (  struct env210*  ,    struct Pane_223 *  );
    struct env210 env;
};

struct envunion269 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion270 {
    struct Maybe_74  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

struct envunion271 {
    enum Unit_8  (*fun) (  struct env229*  ,    struct Pane_223 *  ,    int32_t  );
    struct env229 env;
};

struct Key_273 {
    enum {
        Key_273_Escape_t,
        Key_273_Enter_t,
        Key_273_Tab_t,
        Key_273_Backspace_t,
        Key_273_Char_t,
        Key_273_Ctrl_t,
        Key_273_Up_t,
        Key_273_Down_t,
        Key_273_Left_t,
        Key_273_Right_t,
        Key_273_Home_t,
        Key_273_End_t,
        Key_273_PageUp_t,
        Key_273_PageDown_t,
        Key_273_Delete_t,
        Key_273_Insert_t,
        Key_273_F1_t,
        Key_273_F2_t,
        Key_273_F3_t,
        Key_273_F4_t,
        Key_273_F5_t,
        Key_273_F6_t,
        Key_273_F7_t,
        Key_273_F8_t,
        Key_273_F9_t,
        Key_273_F10_t,
        Key_273_F11_t,
        Key_273_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_273_Char_s;
        struct {
            char  field0;
        } Key_273_Ctrl_s;
    } stuff;
};

static struct Key_273 Key_273_Char (  char  field0 ) {
    return ( struct Key_273 ) { .tag = Key_273_Char_t, .stuff = { .Key_273_Char_s = { .field0 = field0 } } };
};

static struct Key_273 Key_273_Ctrl (  char  field0 ) {
    return ( struct Key_273 ) { .tag = Key_273_Ctrl_t, .stuff = { .Key_273_Ctrl_s = { .field0 = field0 } } };
};

struct envunion272 {
    enum Unit_8  (*fun) (  struct env256*  ,    struct Editor_251 *  ,    struct Key_273  );
    struct env256 env;
};

struct envunion274 {
    enum Unit_8  (*fun) (  struct env247*  ,    struct Editor_251 *  ,    struct StrView_30  );
    struct env247 env;
};

struct envunion275 {
    enum Unit_8  (*fun) (  struct env207*  ,    struct Pane_223 *  ,    struct StrView_30  );
    struct env207 env;
};

struct envunion276 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Editor_251 *  ,    struct StrView_30  );
    struct env244 env;
};

struct env267 {
    struct env210 envinst210;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    struct env72 envinst72;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env229 envinst229;
    struct env256 envinst256;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env247 envinst247;
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
    struct env244 envinst244;
};

struct Cell_281 {
    struct Char_65  f_c;
    struct Color_139  f_fg;
    struct Color_139  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_280 {
    struct Cell_281 *  f_ptr;
    size_t  f_count;
};

struct Screen_279 {
    enum CAllocator_10  f_al;
    struct Tui_91 *  f_tui;
    struct Slice_280  f_current;
    struct Slice_280  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_139  f_default_dash_fg;
    struct Color_139  f_default_dash_bg;
};

struct ScreenDims_282 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion278 {
    enum Unit_8  (*fun) (  struct env204*  ,    struct Screen_279 *  ,    struct Pane_223 *  ,    struct ScreenDims_282  ,    struct Config_253 *  );
    struct env204 env;
};

struct env277 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

static  enum CAllocator_10   idc283 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct Slice_286 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul289 (    int64_t  l213 ,    int64_t  r215 ) {
    return ( (  l213 ) * (  r215 ) );
}

static  const char* *   offset_dash_ptr288 (    const char* *  x377 ,    int64_t  count379 ) {
    const char*  temp290;
    return ( (const char* * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp290 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral291 (    size_t  x47 ) {
    return ( (int64_t ) (  x47 ) );
}

static  size_t   op_dash_sub292 (    size_t  l294 ,    size_t  r296 ) {
    return ( (  l294 ) - (  r296 ) );
}

static  struct Slice_286   get287 (  ) {
    return ( (struct Slice_286) { .f_ptr = ( (  offset_dash_ptr288 ) ( ( _global_argv ) ,  (  from_dash_integral291 ( 1 ) ) ) ) , .f_count = (  op_dash_sub292 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_159   cmp293 (    size_t  l193 ,    size_t  r195 ) {
    return ( builtin_size_tcmp( (  l193 ) , (  r195 ) ) );
}

struct ConstStrIter_297 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_297   into_dash_iter299 (    struct ConstStrIter_297  self1658 ) {
    return (  self1658 );
}

struct Maybe_300 {
    enum {
        Maybe_300_None_t,
        Maybe_300_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_300_Just_s;
    } stuff;
};

static struct Maybe_300 Maybe_300_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_300 ) { .tag = Maybe_300_Just_t, .stuff = { .Maybe_300_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   cast302 (    const char*  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  uint8_t *   offset_dash_ptr303 (    uint8_t *  x377 ,    int64_t  count379 ) {
    uint8_t  temp304;
    return ( (uint8_t * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp304 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64305 (    size_t  x665 ) {
    return ( (int64_t ) (  x665 ) );
}

static  bool   eq306 (    uint8_t  l125 ,    uint8_t  r127 ) {
    return ( (  l125 ) == (  r127 ) );
}

static  uint8_t   cast307 (    int32_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_159   cmp310 (    uint8_t  l178 ,    uint8_t  r180 ) {
    return ( builtin_uint8_tcmp( (  l178 ) , (  r180 ) ) );
}

static  uint8_t   from_dash_integral311 (    size_t  x62 ) {
    return ( (uint8_t ) (  x62 ) );
}

static  size_t   next_dash_char309 (    uint8_t *  p1256 ) {
    uint8_t  pb1257 = ( * (  p1256 ) );
    if ( (  cmp310 ( (  pb1257 ) , (  from_dash_integral311 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp310 ( (  pb1257 ) , (  from_dash_integral311 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp310 ( (  pb1257 ) , (  from_dash_integral311 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp310 ( (  pb1257 ) , (  from_dash_integral311 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp312 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp312);
                    abort ( );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem308 (    uint8_t *  p1260 ) {
    size_t  clen1261 = ( (  next_dash_char309 ) ( (  p1260 ) ) );
    if ( (  cmp293 ( (  clen1261 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp313 = ( (  from_dash_string57 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp313);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p1260 ) , .f_num_dash_bytes = (  clen1261 ) } );
}

static  size_t   op_dash_add314 (    size_t  l289 ,    size_t  r291 ) {
    return ( (  l289 ) + (  r291 ) );
}

static  struct Maybe_300   next301 (    struct ConstStrIter_297 *  self1661 ) {
    uint8_t *  char_dash_ptr1662 = ( ( (  cast302 ) ( ( ( * (  self1661 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1663 = ( (  offset_dash_ptr303 ) ( (  char_dash_ptr1662 ) ,  ( (  size_dash_i64305 ) ( ( ( * (  self1661 ) ) .f_i ) ) ) ) );
    if ( (  eq306 ( ( * (  optr1663 ) ) , ( (  cast307 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    struct Char_65  char1664 = ( (  scan_dash_from_dash_mem308 ) ( (  optr1663 ) ) );
    (*  self1661 ) .f_i = (  op_dash_add314 ( ( ( * (  self1661 ) ) .f_i ) , ( (  char1664 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_300_Just ) ( (  char1664 ) ) );
}

static  size_t   reduce298 (    struct ConstStrIter_297  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct ConstStrIter_297  it1117 = ( (  into_dash_iter299 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next301 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp315 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp315);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp316;
    return (  temp316 );
}

static  size_t   lam317 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add314 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count296 (    struct ConstStrIter_297  it1122 ) {
    return ( (  reduce298 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam317 ) ) );
}

static  struct ConstStrIter_297   into_dash_iter319 (    const char*  self1655 ) {
    return ( (struct ConstStrIter_297) { .f_ogstr = (  self1655 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_297   chars318 (    const char*  self1670 ) {
    return ( (  into_dash_iter319 ) ( (  self1670 ) ) );
}

static  size_t   const_dash_str_dash_len295 (    const char*  s1919 ) {
    return ( (  count296 ) ( ( (  chars318 ) ( (  s1919 ) ) ) ) );
}

static  struct StrView_30   from_dash_const_dash_str294 (    const char*  s2550 ) {
    size_t  len2551 = ( (  const_dash_str_dash_len295 ) ( (  s2550 ) ) );
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  cast302 ) ( (  s2550 ) ) ) , .f_count = (  len2551 ) } ) } );
}

struct Maybe_323 {
    enum {
        Maybe_323_None_t,
        Maybe_323_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_323_Just_s;
    } stuff;
};

static struct Maybe_323 Maybe_323_Just (  const char*  field0 ) {
    return ( struct Maybe_323 ) { .tag = Maybe_323_Just_t, .stuff = { .Maybe_323_Just_s = { .field0 = field0 } } };
};

struct StrConcat_325 {
    struct StrConcat_78  field0;
    size_t  field1;
};

static struct StrConcat_325 StrConcat_325_StrConcat (  struct StrConcat_78  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_325 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_324 {
    struct StrConcat_325  field0;
    struct Char_65  field1;
};

static struct StrConcat_324 StrConcat_324_StrConcat (  struct StrConcat_325  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_324 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_329 {
    struct StrView_30  field0;
    struct StrConcat_324  field1;
};

static struct StrConcat_329 StrConcat_329_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_324  field1 ) {
    return ( struct StrConcat_329 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_328 {
    struct StrConcat_329  field0;
    struct Char_65  field1;
};

static struct StrConcat_328 StrConcat_328_StrConcat (  struct StrConcat_329  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_328 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32332 (    size_t  x704 ) {
    return ( (int32_t ) (  x704 ) );
}

static  enum Unit_8   print_dash_str331 (    struct StrView_30  self1316 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32332 ) ( ( ( (  self1316 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1316 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str337 (    size_t  self1416 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1416 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str336 (    struct StrConcat_79  self1295 ) {
    struct StrConcat_79  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str335 (    struct StrConcat_78  self1295 ) {
    struct StrConcat_78  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str331 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str334 (    struct StrConcat_325  self1295 ) {
    struct StrConcat_325  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Array_341 {
    uint8_t _arr [4];
};

struct Scalar_343 {
    uint32_t  f_value;
};

struct CharDestructured_342 {
    enum {
        CharDestructured_342_Ref_t,
        CharDestructured_342_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_342_Ref_s;
        struct {
            struct Scalar_343  field0;
        } CharDestructured_342_Scalar_s;
    } stuff;
};

static struct CharDestructured_342 CharDestructured_342_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_342 ) { .tag = CharDestructured_342_Ref_t, .stuff = { .CharDestructured_342_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_342 CharDestructured_342_Scalar (  struct Scalar_343  field0 ) {
    return ( struct CharDestructured_342 ) { .tag = CharDestructured_342_Scalar_t, .stuff = { .CharDestructured_342_Scalar_s = { .field0 = field0 } } };
};

static  uint8_t   size_dash_u8346 (    size_t  x713 ) {
    return ( (uint8_t ) (  x713 ) );
}

static  size_t   op_dash_div347 (    size_t  l304 ,    size_t  r306 ) {
    return ( (  l304 ) / (  r306 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer345 (    uint8_t *  ptr776 ) {
    return ( (  size_dash_u8346 ) ( (  op_dash_div347 ( ( ( (size_t ) (  ptr776 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint32_t   size_dash_u32348 (    size_t  x707 ) {
    return ( (uint32_t ) (  x707 ) );
}

static  size_t   cast349 (    uint8_t *  x395 ) {
    return ( (size_t ) (  x395 ) );
}

static  struct CharDestructured_342   destructure344 (    struct Char_65  c1237 ) {
    if ( (  eq306 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer345 ) ( ( (  c1237 ) .f_ptr ) ) ) , (  from_dash_integral311 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_342_Scalar ) ( ( (struct Scalar_343) { .f_value = ( (  size_dash_u32348 ) ( ( ( (  cast349 ) ( ( (  c1237 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_342_Ref ) ( (  c1237 ) ) );
    }
}

static  struct Array_341   from_dash_listlike352 (    struct Array_341 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct Array_341   unscalarize350 (    struct Scalar_343  scalar1240 ) {
    if ( (  cmp171 ( ( (  scalar1240 ) .f_value ) , (  from_dash_integral166 ( 128 ) ) ) == 2 ) ) {
        const char*  temp351 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp351);
        abort ( );
        ( Unit_8_Unit );
    }
    uint8_t  b1241 = ( (  u32_dash_u8145 ) ( ( (  scalar1240 ) .f_value ) ) );
    struct Array_341  temp353 = ( (struct Array_341) { ._arr = { (  b1241 ) , (  from_dash_integral311 ( 0 ) ) , (  from_dash_integral311 ( 0 ) ) , (  from_dash_integral311 ( 0 ) ) } } );
    return ( (  from_dash_listlike352 ) ( ( &temp353 ) ) );
}

static  uint8_t *   cast_dash_ptr354 (    struct Array_341 *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Char_65   regularize340 (    struct Char_65  c1244 ,    struct Array_341 *  possible_dash_scalar_dash_mem1246 ) {
    struct CharDestructured_342  dref1247 = ( (  destructure344 ) ( (  c1244 ) ) );
    if ( dref1247.tag == CharDestructured_342_Ref_t ) {
        return ( dref1247 .stuff .CharDestructured_342_Ref_s .field0 );
    }
    else {
        if ( dref1247.tag == CharDestructured_342_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1246 ) = ( (  unscalarize350 ) ( ( dref1247 .stuff .CharDestructured_342_Scalar_s .field0 ) ) );
            return ( (struct Char_65) { .f_ptr = ( (  cast_dash_ptr354 ) ( (  possible_dash_scalar_dash_mem1246 ) ) ) , .f_num_dash_bytes = ( (  c1244 ) .f_num_dash_bytes ) } );
        }
    }
}

static  enum Unit_8   printf_dash_char339 (    struct Char_65  c1252 ) {
    struct Array_341  temp356;
    struct Array_341  temp355 = (  temp356 );
    struct Char_65  c1253 = ( (  regularize340 ) ( (  c1252 ) ,  ( &temp355 ) ) );
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32332 ) ( ( (  c1253 ) .f_num_dash_bytes ) ) ) ,  ( (  c1253 ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str338 (    struct Char_65  self1276 ) {
    ( (  printf_dash_char339 ) ( (  self1276 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str333 (    struct StrConcat_324  self1295 ) {
    struct StrConcat_324  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str334 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str330 (    struct StrConcat_329  self1295 ) {
    struct StrConcat_329  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str333 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str327 (    struct StrConcat_328  self1295 ) {
    struct StrConcat_328  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str330 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  bool   eq358 (    size_t  l135 ,    size_t  r137 ) {
    return ( (  l135 ) == (  r137 ) );
}

static  struct Char_65   from_dash_charlike357 (    uint8_t *  ptr1264 ,    size_t  num_dash_bytes1266 ) {
    struct Char_65  le_dash_char1267 = ( (  scan_dash_from_dash_mem308 ) ( (  ptr1264 ) ) );
    if ( ( !  eq358 ( ( (  le_dash_char1267 ) .f_num_dash_bytes ) , (  num_dash_bytes1266 ) ) ) ) {
        const char*  temp359 = ( (  from_dash_string57 ) ( ( (uint8_t*)"invalid char given. number of scanned bytes should match the given num-bytes." ) ,  ( 77 ) ) );
        printf("%s\n", temp359);
        abort ( );
        ( Unit_8_Unit );
    }
    return (  le_dash_char1267 );
}

static  enum Unit_8   panic326 (    struct StrConcat_324  errmsg1336 ) {
    ( (  print_dash_str327 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1336 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  const char*   undefined360 (  ) {
    const char*  temp361;
    return (  temp361 );
}

static  const char*   or_dash_fail322 (    struct Maybe_323  x1346 ,    struct StrConcat_324  errmsg1348 ) {
    struct Maybe_323  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_323_None_t ) {
        ( (  panic326 ) ( (  errmsg1348 ) ) );
        return ( (  undefined360 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_323_Just_t ) {
            return ( dref1349 .stuff .Maybe_323_Just_s .field0 );
        }
    }
}

static  struct Maybe_323   try_dash_get362 (    struct Slice_286  slice2169 ,    size_t  i2171 ) {
    if ( ( (  cmp293 ( (  i2171 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2171 ) , ( (  slice2169 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_323) { .tag = Maybe_323_None_t } );
    }
    const char* *  elem_dash_ptr2172 = ( (  offset_dash_ptr288 ) ( ( (  slice2169 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2171 ) ) ) ) );
    return ( ( Maybe_323_Just ) ( ( * (  elem_dash_ptr2172 ) ) ) );
}

static  const char*   get321 (    struct Slice_286  slice2175 ,    size_t  i2177 ) {
    return ( (  or_dash_fail322 ) ( ( (  try_dash_get362 ) ( (  slice2175 ) ,  (  i2177 ) ) ) ,  ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2177 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2175 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get320 (    struct Slice_286  self2188 ,    size_t  idx2190 ) {
    return ( (  get321 ) ( (  self2188 ) ,  (  idx2190 ) ) );
}

struct Maybe_363 {
    enum {
        Maybe_363_None_t,
        Maybe_363_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_104  field0;
        } Maybe_363_Just_s;
    } stuff;
};

static struct Maybe_363 Maybe_363_Just (  struct TextBuf_104  field0 ) {
    return ( struct Maybe_363 ) { .tag = Maybe_363_Just_t, .stuff = { .Maybe_363_Just_s = { .field0 = field0 } } };
};

struct envunion365 {
    struct Maybe_363  (*fun) (  struct env115*  ,    enum CAllocator_10  ,    struct StrView_30  );
    struct env115 env;
};

static  void *   cast_dash_ptr378 (    struct Line_12 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of379 (    struct Line_12 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Line_12 *   zeroed376 (  ) {
    struct Line_12 *  temp377;
    struct Line_12 *  x641 = (  temp377 );
    ( ( memset ) ( ( (  cast_dash_ptr378 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of379 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  struct Line_12 *   null_dash_ptr375 (  ) {
    return ( (  zeroed376 ) ( ) );
}

static  struct Slice_11   empty374 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr375 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk373 (    enum CAllocator_10  al2429 ) {
    struct Slice_11  elements2430 = ( (  empty374 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2429 ) , .f_elements = (  elements2430 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env383 {
    struct env6 envinst6;
    struct List_9 *  list2506;
};

struct envunion384 {
    enum Unit_8  (*fun) (  struct env383*  ,    struct Line_12  );
    struct env383 env;
};

struct ArrayIter_385 {
    struct Array_52  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_385   into_dash_iter387 (    struct Array_52  self2095 ) {
    return ( (struct ArrayIter_385) { .f_backing = (  self2095 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_388 {
    enum {
        Maybe_388_None_t,
        Maybe_388_Just_t,
    } tag;
    union {
        struct {
            struct Line_12  field0;
        } Maybe_388_Just_s;
    } stuff;
};

static struct Maybe_388 Maybe_388_Just (  struct Line_12  field0 ) {
    return ( struct Maybe_388 ) { .tag = Maybe_388_Just_t, .stuff = { .Maybe_388_Just_s = { .field0 = field0 } } };
};

struct StrConcat_394 {
    struct StrConcat_78  field0;
    int32_t  field1;
};

static struct StrConcat_394 StrConcat_394_StrConcat (  struct StrConcat_78  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_394 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_393 {
    struct StrConcat_394  field0;
    struct Char_65  field1;
};

static struct StrConcat_393 StrConcat_393_StrConcat (  struct StrConcat_394  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_393 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_397 {
    struct StrView_30  field0;
    struct StrConcat_393  field1;
};

static struct StrConcat_397 StrConcat_397_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_393  field1 ) {
    return ( struct StrConcat_397 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_396 {
    struct StrConcat_397  field0;
    struct Char_65  field1;
};

static struct StrConcat_396 StrConcat_396_StrConcat (  struct StrConcat_397  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_396 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str401 (    int32_t  self1410 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1410 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str400 (    struct StrConcat_394  self1295 ) {
    struct StrConcat_394  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str401 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str399 (    struct StrConcat_393  self1295 ) {
    struct StrConcat_393  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str400 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str398 (    struct StrConcat_397  self1295 ) {
    struct StrConcat_397  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str399 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str395 (    struct StrConcat_396  self1295 ) {
    struct StrConcat_396  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str398 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic392 (    struct StrConcat_393  errmsg1336 ) {
    ( (  print_dash_str395 ) ( ( ( StrConcat_396_StrConcat ) ( ( ( StrConcat_397_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1336 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Line_12 *   cast_dash_ptr402 (    struct Array_52 *  p398 ) {
    return ( (struct Line_12 * ) (  p398 ) );
}

static  struct Line_12 *   offset_dash_ptr403 (    struct Line_12 *  x377 ,    int64_t  count379 ) {
    struct Line_12  temp404;
    return ( (struct Line_12 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp404 ) ) ) ) ) ) ) ) );
}

static  struct Line_12 *   get_dash_ptr391 (    struct Array_52 *  arr2019 ,    size_t  i2022 ) {
    if ( ( (  cmp293 ( (  i2022 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2022 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2022 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  p2023 = ( ( (  cast_dash_ptr402 ) ( (  arr2019 ) ) ) );
    return ( (  offset_dash_ptr403 ) ( (  p2023 ) ,  ( (int64_t ) (  i2022 ) ) ) );
}

static  struct Line_12   get390 (    struct Array_52 *  arr2026 ,    size_t  i2029 ) {
    return ( * ( (  get_dash_ptr391 ) ( (  arr2026 ) ,  (  i2029 ) ) ) );
}

static  struct Maybe_388   next389 (    struct ArrayIter_385 *  self2102 ) {
    if ( (  cmp293 ( ( ( * (  self2102 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_388) { .tag = Maybe_388_None_t } );
    }
    struct Line_12  e2104 = ( (  get390 ) ( ( & ( ( * (  self2102 ) ) .f_backing ) ) ,  ( ( * (  self2102 ) ) .f_cur ) ) );
    (*  self2102 ) .f_cur = (  op_dash_add314 ( ( ( * (  self2102 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_388_Just ) ( (  e2104 ) ) );
}

static  enum Unit_8   for_dash_each382 (    struct Array_52  iterable1092 ,   struct envunion384  fun1094 ) {
    struct ArrayIter_385  temp386 = ( (  into_dash_iter387 ) ( (  iterable1092 ) ) );
    struct ArrayIter_385 *  it1095 = ( &temp386 );
    while ( ( true ) ) {
        struct Maybe_388  dref1096 = ( (  next389 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_388_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_388_Just_t ) {
                struct envunion384  temp405 = (  fun1094 );
                ( temp405.fun ( &temp405.env ,  ( dref1096 .stuff .Maybe_388_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct TypeSize_413 {
    size_t  f_size;
};

static  struct TypeSize_413   get_dash_typesize412 (  ) {
    struct Line_12  temp414;
    return ( (struct TypeSize_413) { .f_size = ( sizeof( ( (  temp414 ) ) ) ) } );
}

static  struct Line_12 *   cast_dash_ptr415 (    void *  p398 ) {
    return ( (struct Line_12 * ) (  p398 ) );
}

static  size_t   op_dash_mul416 (    size_t  l299 ,    size_t  r301 ) {
    return ( (  l299 ) * (  r301 ) );
}

static  struct Slice_11   allocate411 (    enum CAllocator_10  dref2360 ,    size_t  count2362 ) {
    if (!(  dref2360 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2363 = ( ( ( (  get_dash_typesize412 ) ( ) ) ) .f_size );
    struct Line_12 *  ptr2364 = ( (  cast_dash_ptr415 ) ( ( ( malloc ) ( (  op_dash_mul416 ( (  size2363 ) , (  count2362 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr2364 ) , .f_count = (  count2362 ) } );
}

struct env417 {
    ;
    ;
    struct Slice_11  new_dash_slice2446;
};

struct Tuple2_419 {
    struct Line_12  field0;
    int32_t  field1;
};

static struct Tuple2_419 Tuple2_419_Tuple2 (  struct Line_12  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_419 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion418 {
    enum Unit_8  (*fun) (  struct env417*  ,    struct Tuple2_419  );
    struct env417 env;
};

static  struct Line_12 *   get_dash_ptr422 (    struct Slice_11  slice2163 ,    size_t  i2165 ) {
    if ( ( (  cmp293 ( (  i2165 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2165 ) , ( (  slice2163 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2165 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2163 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  elem_dash_ptr2166 = ( (  offset_dash_ptr403 ) ( ( (  slice2163 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2165 ) ) ) ) );
    return (  elem_dash_ptr2166 );
}

static  enum Unit_8   set421 (    struct Slice_11  slice2180 ,    size_t  i2182 ,    struct Line_12  x2184 ) {
    struct Line_12 *  ep2185 = ( (  get_dash_ptr422 ) ( (  slice2180 ) ,  (  i2182 ) ) );
    (*  ep2185 ) = (  x2184 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size423 (    int32_t  x683 ) {
    return ( (size_t ) ( (int64_t ) (  x683 ) ) );
}

static  enum Unit_8   lam420 (   struct env417* env ,    struct Tuple2_419  dref2447 ) {
    return ( (  set421 ) ( ( env->new_dash_slice2446 ) ,  ( (  i32_dash_size423 ) ( ( dref2447 .field1 ) ) ) ,  ( dref2447 .field0 ) ) );
}

struct SliceIter_426 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_427 {
    int32_t  f_from;
};

struct Zip_425 {
    struct SliceIter_426  f_left_dash_it;
    struct FromIter_427  f_right_dash_it;
};

static  struct Zip_425   into_dash_iter429 (    struct Zip_425  self929 ) {
    return (  self929 );
}

struct Maybe_430 {
    enum {
        Maybe_430_None_t,
        Maybe_430_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_419  field0;
        } Maybe_430_Just_s;
    } stuff;
};

static struct Maybe_430 Maybe_430_Just (  struct Tuple2_419  field0 ) {
    return ( struct Maybe_430 ) { .tag = Maybe_430_Just_t, .stuff = { .Maybe_430_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_388   next432 (    struct SliceIter_426 *  self2249 ) {
    size_t  off2250 = ( ( * (  self2249 ) ) .f_current_dash_offset );
    if ( (  cmp293 ( (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2249 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_388) { .tag = Maybe_388_None_t } );
    }
    struct Line_12  elem2251 = ( * ( (  offset_dash_ptr403 ) ( ( ( ( * (  self2249 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  off2250 ) ) ) ) ) );
    (*  self2249 ) .f_current_dash_offset = (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_388_Just ) ( (  elem2251 ) ) );
}

static  struct Maybe_156   next433 (    struct FromIter_427 *  dref906 ) {
    int32_t  v908 = ( ( (* dref906 ) ) .f_from );
    (* dref906 ) .f_from = (  op_dash_add160 ( ( ( (* dref906 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_156_Just ) ( (  v908 ) ) );
}

static  struct Maybe_430   next431 (    struct Zip_425 *  self932 ) {
    struct Zip_425  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_388  dref934 = ( (  next432 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_388_None_t ) {
            return ( (struct Maybe_430) { .tag = Maybe_430_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_388_Just_t ) {
                struct Maybe_156  dref936 = ( (  next433 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_156_None_t ) {
                    return ( (struct Maybe_430) { .tag = Maybe_430_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_156_Just_t ) {
                        ( (  next432 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next433 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_430_Just ) ( ( ( Tuple2_419_Tuple2 ) ( ( dref934 .stuff .Maybe_388_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_156_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each424 (    struct Zip_425  iterable1092 ,   struct envunion418  fun1094 ) {
    struct Zip_425  temp428 = ( (  into_dash_iter429 ) ( (  iterable1092 ) ) );
    struct Zip_425 *  it1095 = ( &temp428 );
    while ( ( true ) ) {
        struct Maybe_430  dref1096 = ( (  next431 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_430_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_430_Just_t ) {
                struct envunion418  temp434 = (  fun1094 );
                ( temp434.fun ( &temp434.env ,  ( dref1096 .stuff .Maybe_430_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_426   into_dash_iter436 (    struct Slice_11  self2243 ) {
    return ( (struct SliceIter_426) { .f_slice = (  self2243 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_427   into_dash_iter437 (    struct FromIter_427  it904 ) {
    return (  it904 );
}

static  struct Zip_425   zip435 (    struct Slice_11  left940 ,    struct FromIter_427  right942 ) {
    struct SliceIter_426  left_dash_it943 = ( (  into_dash_iter436 ) ( (  left940 ) ) );
    struct FromIter_427  right_dash_it944 = ( (  into_dash_iter437 ) ( (  right942 ) ) );
    return ( (struct Zip_425) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  struct FromIter_427   from438 (    int32_t  f901 ) {
    return ( (struct FromIter_427) { .f_from = (  f901 ) } );
}

static  void *   cast_dash_ptr440 (    struct Line_12 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free439 (    enum CAllocator_10  dref2366 ,    struct Slice_11  slice2368 ) {
    if (!(  dref2366 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr440 ) ( ( (  slice2368 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full410 (   struct env1* env ,    struct List_9 *  list2445 ) {
    if ( (  eq358 ( ( ( * (  list2445 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2445 ) .f_elements = ( (  allocate411 ) ( ( ( * (  list2445 ) ) .f_al ) ,  ( env->starting_dash_size2440 ) ) );
    } else {
        if ( (  eq358 ( ( ( * (  list2445 ) ) .f_count ) , ( ( ( * (  list2445 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2446 = ( (  allocate411 ) ( ( ( * (  list2445 ) ) .f_al ) ,  (  op_dash_mul416 ( ( ( * (  list2445 ) ) .f_count ) , ( env->growth_dash_factor2441 ) ) ) ) );
            struct env417 envinst417 = {
                .new_dash_slice2446 =  new_dash_slice2446 ,
            };
            struct envunion418  fun2450 = ( (struct envunion418){ .fun = (  enum Unit_8  (*) (  struct env417*  ,    struct Tuple2_419  ) )lam420 , .env =  envinst417 } );
            ( (  for_dash_each424 ) ( ( (  zip435 ) ( ( ( * (  list2445 ) ) .f_elements ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2450 ) ) );
            ( (  free439 ) ( ( ( * (  list2445 ) ) .f_al ) ,  ( ( * (  list2445 ) ) .f_elements ) ) );
            (*  list2445 ) .f_elements = (  new_dash_slice2446 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add408 (   struct env6* env ,    struct List_9 *  list2453 ,    struct Line_12  elem2455 ) {
    struct envunion7  temp409 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full410 , .env =  env->envinst1 } );
    ( temp409.fun ( &temp409.env ,  (  list2453 ) ) );
    ( (  set421 ) ( ( ( * (  list2453 ) ) .f_elements ) ,  ( ( * (  list2453 ) ) .f_count ) ,  (  elem2455 ) ) );
    (*  list2453 ) .f_count = (  op_dash_add314 ( ( ( * (  list2453 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam406 (   struct env383* env ,    struct Line_12  x2510 ) {
    struct envunion47  temp407 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add408 , .env =  env->envinst6 } );
    return ( temp407.fun ( &temp407.env ,  ( env->list2506 ) ,  (  x2510 ) ) );
}

static  enum Unit_8   add_dash_all381 (   struct env46* env ,    struct List_9 *  list2506 ,    struct Array_52  it2508 ) {
    struct env383 envinst383 = {
        .envinst6 = env->envinst6 ,
        .list2506 =  list2506 ,
    };
    ( (  for_dash_each382 ) ( (  it2508 ) ,  ( (struct envunion384){ .fun = (  enum Unit_8  (*) (  struct env383*  ,    struct Line_12  ) )lam406 , .env =  envinst383 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter371 (   struct env50* env ,    struct Array_52  iter2541 ,    enum CAllocator_10  al2543 ) {
    struct List_9  temp372 = ( (  mk373 ) ( (  al2543 ) ) );
    struct List_9 *  list2544 = ( &temp372 );
    struct envunion51  temp380 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Array_52  ) )add_dash_all381 , .env =  env->envinst46 } );
    ( temp380.fun ( &temp380.env ,  (  list2544 ) ,  (  iter2541 ) ) );
    return ( * (  list2544 ) );
}

static  struct Array_52   from_dash_listlike441 (    struct Array_52 *  self369 ) {
    return ( * (  self369 ) );
}

static  void *   cast_dash_ptr449 (    struct Highlight_17 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of450 (    struct Highlight_17 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Highlight_17 *   zeroed447 (  ) {
    struct Highlight_17 *  temp448;
    struct Highlight_17 *  x641 = (  temp448 );
    ( ( memset ) ( ( (  cast_dash_ptr449 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of450 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  struct Highlight_17 *   null_dash_ptr446 (  ) {
    return ( (  zeroed447 ) ( ) );
}

static  struct Slice_16   empty445 (  ) {
    return ( (struct Slice_16) { .f_ptr = ( (  null_dash_ptr446 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_15   mk444 (    enum CAllocator_10  al2429 ) {
    struct Slice_16  elements2430 = ( (  empty445 ) ( ) );
    return ( (struct List_15) { .f_al = (  al2429 ) , .f_elements = (  elements2430 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_12   mk_dash_line443 (    struct List_13  initial3908 ) {
    return ( (struct Line_12) { .f_line = (  initial3908 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk444 ) ( ( (  initial3908 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr456 (    uint8_t * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of457 (    uint8_t *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  uint8_t *   zeroed454 (  ) {
    uint8_t *  temp455;
    uint8_t *  x641 = (  temp455 );
    ( ( memset ) ( ( (  cast_dash_ptr456 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of457 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  uint8_t *   null_dash_ptr453 (  ) {
    return ( (  zeroed454 ) ( ) );
}

static  struct Slice_14   empty452 (  ) {
    return ( (struct Slice_14) { .f_ptr = ( (  null_dash_ptr453 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_13   mk451 (    enum CAllocator_10  al2429 ) {
    struct Slice_14  elements2430 = ( (  empty452 ) ( ) );
    return ( (struct List_13) { .f_al = (  al2429 ) , .f_elements = (  elements2430 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr464 (    struct Changeset_25 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of465 (    struct Changeset_25 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Changeset_25 *   zeroed462 (  ) {
    struct Changeset_25 *  temp463;
    struct Changeset_25 *  x641 = (  temp463 );
    ( ( memset ) ( ( (  cast_dash_ptr464 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of465 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  struct Changeset_25 *   null_dash_ptr461 (  ) {
    return ( (  zeroed462 ) ( ) );
}

static  struct Slice_24   empty460 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr461 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk459 (    enum CAllocator_10  al2429 ) {
    struct Slice_24  elements2430 = ( (  empty460 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2429 ) , .f_elements = (  elements2430 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_105   mk_dash_actions458 (    enum CAllocator_10  al3896 ) {
    return ( (struct Actions_105) { .f_list = ( (  mk459 ) ( (  al3896 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_106_NoChangeset ) } );
}

static  struct TextBuf_104   mk369 (   struct env113* env ,    enum CAllocator_10  al4013 ) {
    struct envunion114  temp370 = ( (struct envunion114){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  ) )from_dash_iter371 , .env =  env->envinst50 } );
    struct Array_52  temp442 = ( (struct Array_52) { ._arr = { ( (  mk_dash_line443 ) ( ( (  mk451 ) ( (  al4013 ) ) ) ) ) } } );
    return ( (struct TextBuf_104) { .f_al = (  al4013 ) , .f_buf = ( temp370.fun ( &temp370.env ,  ( (  from_dash_listlike441 ) ( ( &temp442 ) ) ) ,  (  al4013 ) ) ) , .f_actions = ( (  mk_dash_actions458 ) ( (  al4013 ) ) ) , .f_filename = ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) , .f_filetype = ( Filetype_107_Text ) } );
}

struct StrViewIter_470 {
    struct StrView_30  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_470   into_dash_iter471 (    struct StrViewIter_470  self1308 ) {
    return (  self1308 );
}

static  struct StrViewIter_470   into_dash_iter473 (    struct StrView_30  self1305 ) {
    return ( (struct StrViewIter_470) { .f_ds = (  self1305 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_470   chars472 (    struct StrView_30  self1319 ) {
    return ( (  into_dash_iter473 ) ( (  self1319 ) ) );
}

static  uint8_t *   cast476 (    uint8_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  struct Maybe_300   next475 (    struct StrViewIter_470 *  self1311 ) {
    if ( (  cmp293 ( ( ( * (  self1311 ) ) .f_i ) , ( ( ( ( * (  self1311 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    uint8_t *  char_dash_ptr1312 = ( ( (  offset_dash_ptr303 ) ( ( (  cast476 ) ( ( ( ( ( * (  self1311 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64305 ) ( ( ( * (  self1311 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1313 = ( (  scan_dash_from_dash_mem308 ) ( (  char_dash_ptr1312 ) ) );
    (*  self1311 ) .f_i = (  op_dash_add314 ( ( ( * (  self1311 ) ) .f_i ) , ( (  char1313 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_300_Just ) ( (  char1313 ) ) );
}

static  size_t   min480 (    size_t  l1360 ,    size_t  r1362 ) {
    if ( (  cmp293 ( (  l1360 ) , (  r1362 ) ) == 0 ) ) {
        return (  l1360 );
    } else {
        return (  r1362 );
    }
}

static  struct Slice_14   subslice479 (    struct Slice_14  slice2197 ,    size_t  from2199 ,    size_t  to2201 ) {
    uint8_t *  begin_dash_ptr2202 = ( (  offset_dash_ptr303 ) ( ( (  slice2197 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  from2199 ) ) ) ) );
    if ( ( (  cmp293 ( (  from2199 ) , (  to2201 ) ) != 0 ) || (  cmp293 ( (  from2199 ) , ( (  slice2197 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2203 = (  op_dash_sub292 ( ( (  min480 ) ( (  to2201 ) ,  ( (  slice2197 ) .f_count ) ) ) , (  from2199 ) ) );
    return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  count2203 ) } );
}

static  struct Slice_14   from478 (    struct Slice_14  slice2206 ,    size_t  from2208 ) {
    return ( (  subslice479 ) ( (  slice2206 ) ,  (  from2208 ) ,  ( (  slice2206 ) .f_count ) ) );
}

static  struct StrView_30   byte_dash_substr_dash_from477 (    struct StrView_30  s2607 ,    size_t  from2609 ) {
    return ( (struct StrView_30) { .f_contents = ( (  from478 ) ( ( (  s2607 ) .f_contents ) ,  (  from2609 ) ) ) } );
}

static  struct StrView_30   drop_dash_while468 (    struct StrView_30  sv2636 ,    bool (*  fun2638 )(    struct Char_65  ) ) {
    size_t  from2639 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_470  temp469 =  into_dash_iter471 ( ( (  chars472 ) ( (  sv2636 ) ) ) );
    while (true) {
        struct Maybe_300  __cond474 =  next475 (&temp469);
        if (  __cond474 .tag == 0 ) {
            break;
        }
        struct Char_65  c2641 =  __cond474 .stuff .Maybe_300_Just_s .field0;
        if ( ( ! ( (  fun2638 ) ( (  c2641 ) ) ) ) ) {
            break;
        }
        from2639 = (  op_dash_add314 ( (  from2639 ) , ( (  c2641 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from477 ) ( (  sv2636 ) ,  (  from2639 ) ) );
}

static  struct Array_341   uninit_dash_buf484 (  ) {
    struct Array_341  temp485;
    return (  temp485 );
}

static  int64_t   op_dash_add487 (    int64_t  l203 ,    int64_t  r205 ) {
    return ( (  l203 ) + (  r205 ) );
}

static  bool   eq482 (    struct Char_65  l1444 ,    struct Char_65  r1446 ) {
    if ( ( !  eq358 ( ( (  l1444 ) .f_num_dash_bytes ) , ( (  r1446 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Array_341  temp483 = ( (  uninit_dash_buf484 ) ( ) );
    struct Char_65  lc1447 = ( (  regularize340 ) ( (  l1444 ) ,  ( &temp483 ) ) );
    struct Array_341  temp486 = ( (  uninit_dash_buf484 ) ( ) );
    struct Char_65  rc1448 = ( (  regularize340 ) ( (  r1446 ) ,  ( &temp486 ) ) );
    int64_t  i1449 = (  from_dash_integral291 ( 0 ) );
    while ( (  cmp293 ( ( (size_t ) (  i1449 ) ) , ( (  lc1447 ) .f_num_dash_bytes ) ) == 0 ) ) {
        if ( ( !  eq306 ( ( * ( (uint8_t * ) ( ( (void*) ( (  lc1447 ) .f_ptr ) ) + (  i1449 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( (  rc1448 ) .f_ptr ) ) + (  i1449 ) ) ) ) ) ) ) {
            return ( false );
        }
        i1449 = (  op_dash_add487 ( (  i1449 ) , (  from_dash_integral291 ( 1 ) ) ) );
    }
    return ( true );
}

static  bool   lam481 (    struct Char_65  c3920 ) {
    return (  eq482 ( (  c3920 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) );
}

static  uint8_t   undefined491 (  ) {
    uint8_t  temp492;
    return (  temp492 );
}

static  uint8_t   or_dash_fail490 (    struct Maybe_74  x1346 ,    struct StrConcat_324  errmsg1348 ) {
    struct Maybe_74  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_74_None_t ) {
        ( (  panic326 ) ( (  errmsg1348 ) ) );
        return ( (  undefined491 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_74_Just_t ) {
            return ( dref1349 .stuff .Maybe_74_Just_s .field0 );
        }
    }
}

static  struct Maybe_74   try_dash_get493 (    struct Slice_14  slice2169 ,    size_t  i2171 ) {
    if ( ( (  cmp293 ( (  i2171 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2171 ) , ( (  slice2169 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    }
    uint8_t *  elem_dash_ptr2172 = ( (  offset_dash_ptr303 ) ( ( (  slice2169 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2171 ) ) ) ) );
    return ( ( Maybe_74_Just ) ( ( * (  elem_dash_ptr2172 ) ) ) );
}

static  uint8_t   get489 (    struct Slice_14  slice2175 ,    size_t  i2177 ) {
    return ( (  or_dash_fail490 ) ( ( (  try_dash_get493 ) ( (  slice2175 ) ,  (  i2177 ) ) ) ,  ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2177 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2175 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get488 (    struct Slice_14  self2188 ,    size_t  idx2190 ) {
    return ( (  get489 ) ( (  self2188 ) ,  (  idx2190 ) ) );
}

static  uint8_t   ascii_dash_u8494 (    char  c1481 ) {
    return ( ( (uint8_t ) (  c1481 ) ) );
}

static  char   from_dash_charlike495 (    uint8_t *  ptr410 ,    size_t  num_dash_bytes412 ) {
    if ( ( !  eq358 ( (  num_dash_bytes412 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp496 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp496);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr410 ) ) ) );
}

static  struct StrView_30   byte_dash_substr497 (    struct StrView_30  s2600 ,    size_t  from2602 ,    size_t  to2604 ) {
    return ( (struct StrView_30) { .f_contents = ( (  subslice479 ) ( ( (  s2600 ) .f_contents ) ,  (  from2602 ) ,  (  to2604 ) ) ) } );
}

static  struct Maybe_85   extension467 (    struct StrView_30  path3918 ) {
    struct StrView_30  path3921 = ( (  drop_dash_while468 ) ( (  path3918 ) ,  (  lam481 ) ) );
    size_t  i3922 = ( ( (  path3921 ) .f_contents ) .f_count );
    while ( (  cmp293 ( (  i3922 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i3922 = (  op_dash_sub292 ( (  i3922 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq306 ( (  elem_dash_get488 ( ( (  path3921 ) .f_contents ) , (  i3922 ) ) ) , ( (  ascii_dash_u8494 ) ( ( (  from_dash_charlike495 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq358 ( (  i3922 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_30  ext3923 = ( (  byte_dash_substr497 ) ( (  path3921 ) ,  (  op_dash_add314 ( (  i3922 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path3921 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_85_Just ) ( (  ext3923 ) ) );
}

struct Array_499 {
    struct StrView_30 _arr [2];
};

struct env501 {
    struct StrView_30  x1173;
    ;
};

struct envunion502 {
    bool  (*fun) (  struct env501*  ,    struct StrView_30  );
    struct env501 env;
};

struct env504 {
    struct envunion502  fun1153;
};

struct envunion505 {
    bool  (*fun) (  struct env504*  ,    struct StrView_30  ,    bool  );
    struct env504 env;
};

struct ArrayIter_506 {
    struct Array_499  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_506   into_dash_iter507 (    struct Array_499  self2095 ) {
    return ( (struct ArrayIter_506) { .f_backing = (  self2095 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_30 *   cast_dash_ptr511 (    struct Array_499 *  p398 ) {
    return ( (struct StrView_30 * ) (  p398 ) );
}

static  struct StrView_30 *   offset_dash_ptr512 (    struct StrView_30 *  x377 ,    int64_t  count379 ) {
    struct StrView_30  temp513;
    return ( (struct StrView_30 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp513 ) ) ) ) ) ) ) ) );
}

static  struct StrView_30 *   get_dash_ptr510 (    struct Array_499 *  arr2019 ,    size_t  i2022 ) {
    if ( ( (  cmp293 ( (  i2022 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2022 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2022 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_30 *  p2023 = ( ( (  cast_dash_ptr511 ) ( (  arr2019 ) ) ) );
    return ( (  offset_dash_ptr512 ) ( (  p2023 ) ,  ( (int64_t ) (  i2022 ) ) ) );
}

static  struct StrView_30   get509 (    struct Array_499 *  arr2026 ,    size_t  i2029 ) {
    return ( * ( (  get_dash_ptr510 ) ( (  arr2026 ) ,  (  i2029 ) ) ) );
}

static  struct Maybe_85   next508 (    struct ArrayIter_506 *  self2102 ) {
    if ( (  cmp293 ( ( ( * (  self2102 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_30  e2104 = ( (  get509 ) ( ( & ( ( * (  self2102 ) ) .f_backing ) ) ,  ( ( * (  self2102 ) ) .f_cur ) ) );
    (*  self2102 ) .f_cur = (  op_dash_add314 ( ( ( * (  self2102 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2104 ) ) );
}

static  bool   reduce503 (    struct Array_499  iterable1111 ,    bool  base1113 ,   struct envunion505  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct ArrayIter_506  it1117 = ( (  into_dash_iter507 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1118 = ( (  next508 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_85_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_85_Just_t ) {
                struct envunion505  temp514 = (  fun1115 );
                x1116 = ( temp514.fun ( &temp514.env ,  ( dref1118 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp515 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp515);
    abort ( );
    ( Unit_8_Unit );
    bool  temp516;
    return (  temp516 );
}

static  bool   lam517 (   struct env504* env ,    struct StrView_30  e1155 ,    bool  x1157 ) {
    struct envunion502  temp518 = ( env->fun1153 );
    return ( ( temp518.fun ( &temp518.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any500 (    struct Array_499  it1151 ,   struct envunion502  fun1153 ) {
    struct env504 envinst504 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce503 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion505){ .fun = (  bool  (*) (  struct env504*  ,    struct StrView_30  ,    bool  ) )lam517 , .env =  envinst504 } ) ) );
}

struct SliceIter_524 {
    struct Slice_14  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_523 {
    struct SliceIter_524  f_left_dash_it;
    struct SliceIter_524  f_right_dash_it;
};

struct Tuple2_525 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_525 Tuple2_525_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_525 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env527 {
    bool (*  fun1144 )(    struct Tuple2_525  );
};

struct envunion528 {
    bool  (*fun) (  struct env527*  ,    struct Tuple2_525  ,    bool  );
    struct env527 env;
};

static  struct Zip_523   into_dash_iter529 (    struct Zip_523  self929 ) {
    return (  self929 );
}

struct Maybe_530 {
    enum {
        Maybe_530_None_t,
        Maybe_530_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_525  field0;
        } Maybe_530_Just_s;
    } stuff;
};

static struct Maybe_530 Maybe_530_Just (  struct Tuple2_525  field0 ) {
    return ( struct Maybe_530 ) { .tag = Maybe_530_Just_t, .stuff = { .Maybe_530_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_74   next532 (    struct SliceIter_524 *  self2249 ) {
    size_t  off2250 = ( ( * (  self2249 ) ) .f_current_dash_offset );
    if ( (  cmp293 ( (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2249 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    }
    uint8_t  elem2251 = ( * ( (  offset_dash_ptr303 ) ( ( ( ( * (  self2249 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  off2250 ) ) ) ) ) );
    (*  self2249 ) .f_current_dash_offset = (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_74_Just ) ( (  elem2251 ) ) );
}

static  struct Maybe_530   next531 (    struct Zip_523 *  self932 ) {
    struct Zip_523  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_74  dref934 = ( (  next532 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_74_None_t ) {
            return ( (struct Maybe_530) { .tag = Maybe_530_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_74_Just_t ) {
                struct Maybe_74  dref936 = ( (  next532 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_74_None_t ) {
                    return ( (struct Maybe_530) { .tag = Maybe_530_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_74_Just_t ) {
                        ( (  next532 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next532 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_530_Just ) ( ( ( Tuple2_525_Tuple2 ) ( ( dref934 .stuff .Maybe_74_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_74_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce526 (    struct Zip_523  iterable1111 ,    bool  base1113 ,   struct envunion528  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct Zip_523  it1117 = ( (  into_dash_iter529 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_530  dref1118 = ( (  next531 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_530_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_530_Just_t ) {
                struct envunion528  temp533 = (  fun1115 );
                x1116 = ( temp533.fun ( &temp533.env ,  ( dref1118 .stuff .Maybe_530_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp534 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp534);
    abort ( );
    ( Unit_8_Unit );
    bool  temp535;
    return (  temp535 );
}

static  bool   lam536 (   struct env527* env ,    struct Tuple2_525  e1146 ,    bool  x1148 ) {
    return ( ( ( env->fun1144 ) ( (  e1146 ) ) ) && (  x1148 ) );
}

static  bool   all522 (    struct Zip_523  it1142 ,    bool (*  fun1144 )(    struct Tuple2_525  ) ) {
    struct env527 envinst527 = {
        .fun1144 =  fun1144 ,
    };
    return ( (  reduce526 ) ( (  it1142 ) ,  ( true ) ,  ( (struct envunion528){ .fun = (  bool  (*) (  struct env527*  ,    struct Tuple2_525  ,    bool  ) )lam536 , .env =  envinst527 } ) ) );
}

static  struct SliceIter_524   into_dash_iter538 (    struct Slice_14  self2243 ) {
    return ( (struct SliceIter_524) { .f_slice = (  self2243 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_523   zip537 (    struct Slice_14  left940 ,    struct Slice_14  right942 ) {
    struct SliceIter_524  left_dash_it943 = ( (  into_dash_iter538 ) ( (  left940 ) ) );
    struct SliceIter_524  right_dash_it944 = ( (  into_dash_iter538 ) ( (  right942 ) ) );
    return ( (struct Zip_523) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  bool   lam539 (    struct Tuple2_525  dref2283 ) {
    return (  eq306 ( ( dref2283 .field0 ) , ( dref2283 .field1 ) ) );
}

static  bool   eq521 (    struct Slice_14  l2280 ,    struct Slice_14  r2282 ) {
    if ( ( !  eq358 ( ( (  l2280 ) .f_count ) , ( (  r2282 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all522 ) ( ( (  zip537 ) ( (  l2280 ) ,  (  r2282 ) ) ) ,  (  lam539 ) ) );
}

static  bool   eq520 (    struct StrView_30  l2644 ,    struct StrView_30  r2646 ) {
    return (  eq521 ( ( (  l2644 ) .f_contents ) , ( (  r2646 ) .f_contents ) ) );
}

static  bool   lam519 (   struct env501* env ,    struct StrView_30  e1177 ) {
    return (  eq520 ( (  e1177 ) , ( env->x1173 ) ) );
}

static  bool   one_dash_of498 (    struct StrView_30  x1173 ,    struct Array_499  it1175 ) {
    struct env501 envinst501 = {
        .x1173 =  x1173 ,
    };
    return ( (  any500 ) ( (  it1175 ) ,  ( (struct envunion502){ .fun = (  bool  (*) (  struct env501*  ,    struct StrView_30  ) )lam519 , .env =  envinst501 } ) ) );
}

static  struct Array_499   from_dash_listlike540 (    struct Array_499 *  self369 ) {
    return ( * (  self369 ) );
}

static  struct StrView_30   from_dash_charlike543 (    uint8_t *  ptr81 ,    size_t  count83 ) {
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr81 ) , .f_count = (  count83 ) } ) } );
}

static  enum Filetype_107   detect_dash_filetype_dash_from_dash_filename466 (    struct StrView_30  filename3915 ) {
    struct Maybe_85  mext3924 = ( (  extension467 ) ( (  filename3915 ) ) );
    struct Maybe_85  dref3925 = (  mext3924 );
    if ( dref3925.tag == Maybe_85_None_t ) {
        return ( Filetype_107_Text );
    }
    else {
        if ( dref3925.tag == Maybe_85_Just_t ) {
            struct Array_499  temp541 = ( (struct Array_499) { ._arr = { ( (  from_dash_string202 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"kkc" ) ,  ( 3 ) ) ) } } );
            if ( ( (  one_dash_of498 ) ( ( dref3925 .stuff .Maybe_85_Just_s .field0 ) ,  ( (  from_dash_listlike540 ) ( ( &temp541 ) ) ) ) ) ) {
                return ( Filetype_107_KC );
            } else {
                if ( (  eq520 ( ( dref3925 .stuff .Maybe_85_Just_s .field0 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                    return ( Filetype_107_Markdown );
                } else {
                    if ( (  eq520 ( ( dref3925 .stuff .Maybe_85_Just_s .field0 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"gcode" ) ,  ( 5 ) ) ) ) ) ) {
                        return ( Filetype_107_GCode );
                    } else {
                        struct Array_499  temp542 = ( (struct Array_499) { ._arr = { ( (  from_dash_string202 ) ( ( (uint8_t*)"bf" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) } } );
                        if ( ( (  one_dash_of498 ) ( ( dref3925 .stuff .Maybe_85_Just_s .field0 ) ,  ( (  from_dash_listlike540 ) ( ( &temp542 ) ) ) ) ) ) {
                            return ( Filetype_107_Brainfuck );
                        } else {
                            return ( Filetype_107_Text );
                        }
                    }
                }
            }
        }
    }
}

struct TypeSize_547 {
    size_t  f_size;
};

static  struct TypeSize_547   get_dash_typesize546 (  ) {
    uint8_t  temp548;
    return ( (struct TypeSize_547) { .f_size = ( sizeof( ( (  temp548 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr549 (    void *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   allocate545 (    enum CAllocator_10  dref2360 ,    size_t  count2362 ) {
    if (!(  dref2360 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2363 = ( ( ( (  get_dash_typesize546 ) ( ) ) ) .f_size );
    uint8_t *  ptr2364 = ( (  cast_dash_ptr549 ) ( ( ( malloc ) ( (  op_dash_mul416 ( (  size2363 ) , (  count2362 ) ) ) ) ) ) );
    return ( (struct Slice_14) { .f_ptr = (  ptr2364 ) , .f_count = (  count2362 ) } );
}

struct StrConcat_552 {
    struct StrConcat_325  field0;
    struct StrView_30  field1;
};

static struct StrConcat_552 StrConcat_552_StrConcat (  struct StrConcat_325  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_552 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_555 {
    struct StrView_30  field0;
    struct StrConcat_552  field1;
};

static struct StrConcat_555 StrConcat_555_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_552  field1 ) {
    return ( struct StrConcat_555 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_554 {
    struct StrConcat_555  field0;
    struct Char_65  field1;
};

static struct StrConcat_554 StrConcat_554_StrConcat (  struct StrConcat_555  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_554 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str557 (    struct StrConcat_552  self1295 ) {
    struct StrConcat_552  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str334 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str331 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str556 (    struct StrConcat_555  self1295 ) {
    struct StrConcat_555  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str557 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str553 (    struct StrConcat_554  self1295 ) {
    struct StrConcat_554  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str556 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic551 (    struct StrConcat_552  errmsg1336 ) {
    ( (  print_dash_str553 ) ( ( ( StrConcat_554_StrConcat ) ( ( ( StrConcat_555_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1336 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Zip_559 {
    struct SliceIter_524  f_left_dash_it;
    struct FromIter_427  f_right_dash_it;
};

struct env560 {
    struct Slice_14  dest2274;
    ;
    ;
};

struct Tuple2_562 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_562 Tuple2_562_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_562 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion561 {
    enum Unit_8  (*fun) (  struct env560*  ,    struct Tuple2_562  );
    struct env560 env;
};

static  struct Zip_559   into_dash_iter564 (    struct Zip_559  self929 ) {
    return (  self929 );
}

struct Maybe_565 {
    enum {
        Maybe_565_None_t,
        Maybe_565_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_562  field0;
        } Maybe_565_Just_s;
    } stuff;
};

static struct Maybe_565 Maybe_565_Just (  struct Tuple2_562  field0 ) {
    return ( struct Maybe_565 ) { .tag = Maybe_565_Just_t, .stuff = { .Maybe_565_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_565   next566 (    struct Zip_559 *  self932 ) {
    struct Zip_559  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_74  dref934 = ( (  next532 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_74_None_t ) {
            return ( (struct Maybe_565) { .tag = Maybe_565_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_74_Just_t ) {
                struct Maybe_156  dref936 = ( (  next433 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_156_None_t ) {
                    return ( (struct Maybe_565) { .tag = Maybe_565_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_156_Just_t ) {
                        ( (  next532 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next433 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_565_Just ) ( ( ( Tuple2_562_Tuple2 ) ( ( dref934 .stuff .Maybe_74_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_156_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each558 (    struct Zip_559  iterable1092 ,   struct envunion561  fun1094 ) {
    struct Zip_559  temp563 = ( (  into_dash_iter564 ) ( (  iterable1092 ) ) );
    struct Zip_559 *  it1095 = ( &temp563 );
    while ( ( true ) ) {
        struct Maybe_565  dref1096 = ( (  next566 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_565_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_565_Just_t ) {
                struct envunion561  temp567 = (  fun1094 );
                ( temp567.fun ( &temp567.env ,  ( dref1096 .stuff .Maybe_565_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_559   zip568 (    struct Slice_14  left940 ,    struct FromIter_427  right942 ) {
    struct SliceIter_524  left_dash_it943 = ( (  into_dash_iter538 ) ( (  left940 ) ) );
    struct FromIter_427  right_dash_it944 = ( (  into_dash_iter437 ) ( (  right942 ) ) );
    return ( (struct Zip_559) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  uint8_t *   get_dash_ptr571 (    struct Slice_14  slice2163 ,    size_t  i2165 ) {
    if ( ( (  cmp293 ( (  i2165 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2165 ) , ( (  slice2163 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2165 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2163 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr2166 = ( (  offset_dash_ptr303 ) ( ( (  slice2163 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2165 ) ) ) ) );
    return (  elem_dash_ptr2166 );
}

static  enum Unit_8   set570 (    struct Slice_14  slice2180 ,    size_t  i2182 ,    uint8_t  x2184 ) {
    uint8_t *  ep2185 = ( (  get_dash_ptr571 ) ( (  slice2180 ) ,  (  i2182 ) ) );
    (*  ep2185 ) = (  x2184 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam569 (   struct env560* env ,    struct Tuple2_562  dref2275 ) {
    return ( (  set570 ) ( ( env->dest2274 ) ,  ( (  i32_dash_size423 ) ( ( dref2275 .field1 ) ) ) ,  ( dref2275 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to550 (    struct Slice_14  src2272 ,    struct Slice_14  dest2274 ) {
    if ( (  cmp293 ( ( (  src2272 ) .f_count ) , ( (  dest2274 ) .f_count ) ) == 2 ) ) {
        ( (  panic551 ) ( ( ( StrConcat_552_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2272 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2274 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env560 envinst560 = {
        .dest2274 =  dest2274 ,
    };
    ( (  for_dash_each558 ) ( ( (  zip568 ) ( (  src2272 ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion561){ .fun = (  enum Unit_8  (*) (  struct env560*  ,    struct Tuple2_562  ) )lam569 , .env =  envinst560 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   char_dash_u8572 (    struct Char_65  c1433 ) {
    struct CharDestructured_342  dref1434 = ( (  destructure344 ) ( (  c1433 ) ) );
    if ( dref1434.tag == CharDestructured_342_Ref_t ) {
        return ( * ( ( dref1434 .stuff .CharDestructured_342_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1434.tag == CharDestructured_342_Scalar_t ) {
            return ( (  u32_dash_u8145 ) ( ( ( dref1434 .stuff .CharDestructured_342_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_30   clone_dash_0544 (    struct StrView_30  s2569 ,    enum CAllocator_10  al2571 ) {
    size_t  cnt2572 = ( ( (  s2569 ) .f_contents ) .f_count );
    struct Slice_14  nus2573 = ( (  allocate545 ) ( (  al2571 ) ,  (  op_dash_add314 ( (  cnt2572 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to550 ) ( ( (  s2569 ) .f_contents ) ,  (  nus2573 ) ) );
    ( (  set570 ) ( (  nus2573 ) ,  (  cnt2572 ) ,  ( (  char_dash_u8572 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  nus2573 ) .f_ptr ) , .f_count = (  cnt2572 ) } ) } );
}

static  const char*   from_dash_charlike574 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
}

static  void *   cast_dash_ptr579 (    FILE * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of580 (    FILE *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  FILE *   zeroed577 (  ) {
    FILE *  temp578;
    FILE *  x641 = (  temp578 );
    ( ( memset ) ( ( (  cast_dash_ptr579 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of580 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  FILE *   null_dash_ptr576 (  ) {
    return ( (  zeroed577 ) ( ) );
}

static  bool   is_dash_ptr_dash_null575 (    FILE *  p651 ) {
    return ( (  p651 ) == ( (  null_dash_ptr576 ) ( ) ) );
}

static  int32_t   seek_dash_end581 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  int32_t   seek_dash_set582 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct Char_65   nullchar583 (  ) {
    return ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_85   try_dash_read_dash_contents573 (    const char*  filename3155 ,    enum CAllocator_10  al3157 ) {
    FILE *  file3158 = ( ( fopen ) ( (  filename3155 ) ,  ( (  from_dash_charlike574 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null575 ) ( (  file3158 ) ) ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    ( ( fseek ) ( (  file3158 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end581 ) ( ) ) ) );
    int32_t  file_dash_size3159 = ( ( ftell ) ( (  file3158 ) ) );
    ( ( fseek ) ( (  file3158 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set582 ) ( ) ) ) );
    struct Slice_14  file_dash_buf3160 = ( ( (  allocate545 ) ( (  al3157 ) ,  (  op_dash_add314 ( ( (  i32_dash_size423 ) ( (  file_dash_size3159 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3160 ) .f_ptr ) ,  (  file_dash_size3159 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file3158 ) ) );
    ( (  set570 ) ( (  file_dash_buf3160 ) ,  ( (  i32_dash_size423 ) ( (  file_dash_size3159 ) ) ) ,  ( (  char_dash_u8572 ) ( ( (  nullchar583 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3158 ) ) );
    struct StrView_30  str3161 = ( (struct StrView_30) { .f_contents = ( (  subslice479 ) ( (  file_dash_buf3160 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub292 ( ( (  file_dash_buf3160 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_85_Just ) ( (  str3161 ) ) );
}

static  const char*   cast585 (    uint8_t *  x395 ) {
    return ( (const char* ) (  x395 ) );
}

static  const char*   as_dash_const_dash_str584 (    struct StrView_30  s2576 ) {
    return ( (  cast585 ) ( ( ( (  s2576 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr588 (    uint8_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free587 (    enum CAllocator_10  dref2366 ,    struct Slice_14  slice2368 ) {
    if (!(  dref2366 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr588 ) ( ( (  slice2368 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free586 (    struct StrView_30  s2584 ,    enum CAllocator_10  al2586 ) {
    ( (  free587 ) ( (  al2586 ) ,  ( (struct Slice_14) { .f_ptr = ( ( (  s2584 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

struct Tuple2_590 {
    struct Maybe_74  field0;
    struct Maybe_74  field1;
};

static struct Tuple2_590 Tuple2_590_Tuple2 (  struct Maybe_74  field0 ,  struct Maybe_74  field1 ) {
    return ( struct Tuple2_590 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq589 (    struct Maybe_74  l150 ,    struct Maybe_74  r152 ) {
    struct Tuple2_590  dref153 = ( ( Tuple2_590_Tuple2 ) ( (  l150 ) ,  (  r152 ) ) );
    if ( dref153 .field0.tag == Maybe_74_None_t && dref153 .field1.tag == Maybe_74_None_t ) {
        return ( true );
    }
    else {
        if ( dref153 .field0.tag == Maybe_74_Just_t && dref153 .field1.tag == Maybe_74_Just_t ) {
            return (  eq306 ( ( dref153 .field0 .stuff .Maybe_74_Just_s .field0 ) , ( dref153 .field1 .stuff .Maybe_74_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  enum Ordering_159   cmp594 (    struct Pos_29  l3830 ,    struct Pos_29  r3832 ) {
    enum Ordering_159  dref3833 = ( (  cmp158 ) ( ( (  l3830 ) .f_line ) ,  ( (  r3832 ) .f_line ) ) );
    switch (  dref3833 ) {
        case Ordering_159_EQ : {
            return ( (  cmp158 ) ( ( (  l3830 ) .f_bi ) ,  ( (  r3832 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_159  els3834 =  dref3833;
            return (  els3834 );
            break;
        }
    }
}

static  struct Pos_29   min593 (    struct Pos_29  l1360 ,    struct Pos_29  r1362 ) {
    if ( (  cmp594 ( (  l1360 ) , (  r1362 ) ) == 0 ) ) {
        return (  l1360 );
    } else {
        return (  r1362 );
    }
}

static  struct Pos_29   max595 (    struct Pos_29  l1365 ,    struct Pos_29  r1367 ) {
    if ( (  cmp594 ( (  l1365 ) , (  r1367 ) ) == 2 ) ) {
        return (  l1365 );
    } else {
        return (  r1367 );
    }
}

static  bool   eq597 (    int32_t  l115 ,    int32_t  r117 ) {
    return ( (  l115 ) == (  r117 ) );
}

static  bool   eq596 (    struct Pos_29  l3825 ,    struct Pos_29  r3827 ) {
    return ( (  eq597 ( ( (  l3825 ) .f_line ) , ( (  r3827 ) .f_line ) ) ) && (  eq597 ( ( (  l3825 ) .f_bi ) , ( (  r3827 ) .f_bi ) ) ) );
}

static  size_t   size598 (    struct List_9 *  l2436 ) {
    return ( ( * (  l2436 ) ) .f_count );
}

struct envunion601 {
    int32_t  (*fun) (  struct env97*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct StrView_30  );
    struct env97 env;
};

static  struct Line_12 *   get_dash_ptr604 (    struct List_9 *  list2399 ,    size_t  i2401 ) {
    if ( ( (  cmp293 ( (  i2401 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2401 ) , ( ( * (  list2399 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2401 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2399 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr422 ) ( ( ( * (  list2399 ) ) .f_elements ) ,  (  i2401 ) ) );
}

static  struct Line_12   get603 (    struct List_9 *  list2409 ,    size_t  i2411 ) {
    return ( * ( (  get_dash_ptr604 ) ( (  list2409 ) ,  (  i2411 ) ) ) );
}

static  struct Slice_14   to_dash_slice605 (    struct List_13  l2534 ) {
    uint8_t *  ptr2535 = ( ( (  l2534 ) .f_elements ) .f_ptr );
    return ( (struct Slice_14) { .f_ptr = (  ptr2535 ) , .f_count = ( (  l2534 ) .f_count ) } );
}

static  enum Unit_8   set606 (    struct List_9 *  list2419 ,    size_t  i2421 ,    struct Line_12  elem2423 ) {
    if ( ( (  cmp293 ( (  i2421 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2421 ) , ( ( * (  list2419 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2421 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2419 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set421 ) ( ( ( * (  list2419 ) ) .f_elements ) ,  (  i2421 ) ,  (  elem2423 ) ) );
    return ( Unit_8_Unit );
}

struct env613 {
    struct env19 envinst19;
    struct List_13 *  list2506;
};

struct envunion614 {
    enum Unit_8  (*fun) (  struct env613*  ,    uint8_t  );
    struct env613 env;
};

static  enum Unit_8   for_dash_each612 (    struct Slice_14  iterable1092 ,   struct envunion614  fun1094 ) {
    struct SliceIter_524  temp615 = ( (  into_dash_iter538 ) ( (  iterable1092 ) ) );
    struct SliceIter_524 *  it1095 = ( &temp615 );
    while ( ( true ) ) {
        struct Maybe_74  dref1096 = ( (  next532 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_74_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_74_Just_t ) {
                struct envunion614  temp616 = (  fun1094 );
                ( temp616.fun ( &temp616.env ,  ( dref1096 .stuff .Maybe_74_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env622 {
    ;
    ;
    struct Slice_14  new_dash_slice2446;
};

struct envunion623 {
    enum Unit_8  (*fun) (  struct env622*  ,    struct Tuple2_562  );
    struct env622 env;
};

static  enum Unit_8   lam624 (   struct env622* env ,    struct Tuple2_562  dref2447 ) {
    return ( (  set570 ) ( ( env->new_dash_slice2446 ) ,  ( (  i32_dash_size423 ) ( ( dref2447 .field1 ) ) ) ,  ( dref2447 .field0 ) ) );
}

static  enum Unit_8   for_dash_each625 (    struct Zip_559  iterable1092 ,   struct envunion623  fun1094 ) {
    struct Zip_559  temp626 = ( (  into_dash_iter564 ) ( (  iterable1092 ) ) );
    struct Zip_559 *  it1095 = ( &temp626 );
    while ( ( true ) ) {
        struct Maybe_565  dref1096 = ( (  next566 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_565_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_565_Just_t ) {
                struct envunion623  temp627 = (  fun1094 );
                ( temp627.fun ( &temp627.env ,  ( dref1096 .stuff .Maybe_565_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full621 (   struct env2* env ,    struct List_13 *  list2445 ) {
    if ( (  eq358 ( ( ( * (  list2445 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2445 ) .f_elements = ( (  allocate545 ) ( ( ( * (  list2445 ) ) .f_al ) ,  ( env->starting_dash_size2440 ) ) );
    } else {
        if ( (  eq358 ( ( ( * (  list2445 ) ) .f_count ) , ( ( ( * (  list2445 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_14  new_dash_slice2446 = ( (  allocate545 ) ( ( ( * (  list2445 ) ) .f_al ) ,  (  op_dash_mul416 ( ( ( * (  list2445 ) ) .f_count ) , ( env->growth_dash_factor2441 ) ) ) ) );
            struct env622 envinst622 = {
                .new_dash_slice2446 =  new_dash_slice2446 ,
            };
            struct envunion623  fun2450 = ( (struct envunion623){ .fun = (  enum Unit_8  (*) (  struct env622*  ,    struct Tuple2_562  ) )lam624 , .env =  envinst622 } );
            ( (  for_dash_each625 ) ( ( (  zip568 ) ( ( ( * (  list2445 ) ) .f_elements ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2450 ) ) );
            ( (  free587 ) ( ( ( * (  list2445 ) ) .f_al ) ,  ( ( * (  list2445 ) ) .f_elements ) ) );
            (*  list2445 ) .f_elements = (  new_dash_slice2446 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add619 (   struct env19* env ,    struct List_13 *  list2453 ,    uint8_t  elem2455 ) {
    struct envunion20  temp620 = ( (struct envunion20){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_13 *  ) )grow_dash_if_dash_full621 , .env =  env->envinst2 } );
    ( temp620.fun ( &temp620.env ,  (  list2453 ) ) );
    ( (  set570 ) ( ( ( * (  list2453 ) ) .f_elements ) ,  ( ( * (  list2453 ) ) .f_count ) ,  (  elem2455 ) ) );
    (*  list2453 ) .f_count = (  op_dash_add314 ( ( ( * (  list2453 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam617 (   struct env613* env ,    uint8_t  x2510 ) {
    struct envunion49  temp618 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env19*  ,    struct List_13 *  ,    uint8_t  ) )add619 , .env =  env->envinst19 } );
    return ( temp618.fun ( &temp618.env ,  ( env->list2506 ) ,  (  x2510 ) ) );
}

static  enum Unit_8   add_dash_all611 (   struct env48* env ,    struct List_13 *  list2506 ,    struct Slice_14  it2508 ) {
    struct env613 envinst613 = {
        .envinst19 = env->envinst19 ,
        .list2506 =  list2506 ,
    };
    ( (  for_dash_each612 ) ( (  it2508 ) ,  ( (struct envunion614){ .fun = (  enum Unit_8  (*) (  struct env613*  ,    uint8_t  ) )lam617 , .env =  envinst613 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_13   from_dash_iter608 (   struct env53* env ,    struct Slice_14  iter2541 ,    enum CAllocator_10  al2543 ) {
    struct List_13  temp609 = ( (  mk451 ) ( (  al2543 ) ) );
    struct List_13 *  list2544 = ( &temp609 );
    struct envunion54  temp610 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all611 , .env =  env->envinst48 } );
    ( temp610.fun ( &temp610.env ,  (  list2544 ) ,  (  iter2541 ) ) );
    return ( * (  list2544 ) );
}

static  struct StrView_30   or_dash_else629 (    struct Maybe_85  self1353 ,    struct StrView_30  alt1355 ) {
    struct Maybe_85  dref1356 = (  self1353 );
    if ( dref1356.tag == Maybe_85_None_t ) {
        return (  alt1355 );
    }
    else {
        if ( dref1356.tag == Maybe_85_Just_t ) {
            return ( dref1356 .stuff .Maybe_85_Just_s .field0 );
        }
    }
}

struct LineIter_631 {
    struct StrView_30  f_og;
    size_t  f_last;
};

static  struct Maybe_85   next632 (    struct LineIter_631 *  self2679 ) {
    if ( (  cmp293 ( ( ( * (  self2679 ) ) .f_last ) , ( ( ( ( * (  self2679 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    size_t  i2680 = ( ( * (  self2679 ) ) .f_last );
    while ( ( (  cmp293 ( (  i2680 ) , ( ( ( ( * (  self2679 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq306 ( ( (  get489 ) ( ( ( ( * (  self2679 ) ) .f_og ) .f_contents ) ,  (  i2680 ) ) ) , ( (  char_dash_u8572 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2680 = (  op_dash_add314 ( (  i2680 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_30  line2681 = ( (  byte_dash_substr497 ) ( ( ( * (  self2679 ) ) .f_og ) ,  ( ( * (  self2679 ) ) .f_last ) ,  (  i2680 ) ) );
    if ( (  cmp293 ( (  i2680 ) , ( ( ( ( * (  self2679 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2680 = (  op_dash_add314 ( (  i2680 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2679 ) .f_last = (  i2680 );
    return ( ( Maybe_85_Just ) ( (  line2681 ) ) );
}

static  struct LineIter_631   into_dash_iter634 (    struct LineIter_631  self2676 ) {
    return (  self2676 );
}

static  struct Maybe_85   head630 (    struct LineIter_631  it1160 ) {
    struct LineIter_631  temp633 = ( (  into_dash_iter634 ) ( (  it1160 ) ) );
    return ( (  next632 ) ( ( &temp633 ) ) );
}

static  struct LineIter_631   lines635 (    struct StrView_30  s2673 ) {
    return ( (struct LineIter_631) { .f_og = (  s2673 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env640 {
    struct Char_65  c2657;
    ;
};

struct envunion641 {
    bool  (*fun) (  struct env640*  ,    struct Char_65  );
    struct env640 env;
};

struct SplitIter_639 {
    struct StrView_30  f_og;
    size_t  f_last;
    struct envunion641  f_fun;
};

struct Drop_638 {
    struct SplitIter_639  field0;
    size_t  field1;
};

static struct Drop_638 Drop_638_Drop (  struct SplitIter_639  field0 ,  size_t  field1 ) {
    return ( struct Drop_638 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_637 {
    struct Drop_638  f_left_dash_it;
    struct FromIter_427  f_right_dash_it;
};

static  struct Zip_637   into_dash_iter642 (    struct Zip_637  self929 ) {
    return (  self929 );
}

static  struct Drop_638   into_dash_iter644 (    struct Drop_638  self846 ) {
    return (  self846 );
}

static  struct Zip_637   zip643 (    struct Drop_638  left940 ,    struct FromIter_427  right942 ) {
    struct Drop_638  left_dash_it943 = ( (  into_dash_iter644 ) ( (  left940 ) ) );
    struct FromIter_427  right_dash_it944 = ( (  into_dash_iter437 ) ( (  right942 ) ) );
    return ( (struct Zip_637) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  struct SplitIter_639   into_dash_iter646 (    struct SplitIter_639  self2662 ) {
    return (  self2662 );
}

static  struct Drop_638   drop645 (    struct SplitIter_639  iterable853 ,    size_t  i855 ) {
    struct SplitIter_639  it856 = ( (  into_dash_iter646 ) ( (  iterable853 ) ) );
    return ( ( Drop_638_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SplitIter_639   split_dash_by_dash_filter648 (    struct StrView_30  s2650 ,   struct envunion641  fun2652 ) {
    return ( (struct SplitIter_639) { .f_og = (  s2650 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2652 ) } );
}

static  bool   lam649 (   struct env640* env ,    struct Char_65  cc2659 ) {
    return (  eq482 ( (  cc2659 ) , ( env->c2657 ) ) );
}

static  struct SplitIter_639   split_dash_by_dash_each647 (    struct StrView_30  s2655 ,    struct Char_65  c2657 ) {
    struct env640 envinst640 = {
        .c2657 =  c2657 ,
    };
    return ( (  split_dash_by_dash_filter648 ) ( (  s2655 ) ,  ( (struct envunion641){ .fun = (  bool  (*) (  struct env640*  ,    struct Char_65  ) )lam649 , .env =  envinst640 } ) ) );
}

struct Tuple2_652 {
    struct StrView_30  field0;
    int32_t  field1;
};

static struct Tuple2_652 Tuple2_652_Tuple2 (  struct StrView_30  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_652 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_651 {
    enum {
        Maybe_651_None_t,
        Maybe_651_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_652  field0;
        } Maybe_651_Just_s;
    } stuff;
};

static struct Maybe_651 Maybe_651_Just (  struct Tuple2_652  field0 ) {
    return ( struct Maybe_651 ) { .tag = Maybe_651_Just_t, .stuff = { .Maybe_651_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_85   next655 (    struct SplitIter_639 *  self2665 ) {
    if ( (  cmp293 ( ( ( * (  self2665 ) ) .f_last ) , ( ( ( ( * (  self2665 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    size_t  i2666 = ( ( * (  self2665 ) ) .f_last );
    while ( (  cmp293 ( (  i2666 ) , ( ( ( ( * (  self2665 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2667 = ( (  get_dash_ptr571 ) ( ( ( ( * (  self2665 ) ) .f_og ) .f_contents ) ,  (  i2666 ) ) );
        struct Char_65  c2668 = ( (  scan_dash_from_dash_mem308 ) ( (  ptr2667 ) ) );
        struct envunion641  temp656 = ( ( * (  self2665 ) ) .f_fun );
        if ( ( temp656.fun ( &temp656.env ,  (  c2668 ) ) ) ) {
            break;
        }
        i2666 = (  op_dash_add314 ( (  i2666 ) , ( (  next_dash_char309 ) ( (  ptr2667 ) ) ) ) );
    }
    struct StrView_30  line2669 = ( (  byte_dash_substr497 ) ( ( ( * (  self2665 ) ) .f_og ) ,  ( ( * (  self2665 ) ) .f_last ) ,  (  i2666 ) ) );
    i2666 = (  op_dash_add314 ( (  i2666 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2665 ) .f_last = (  i2666 );
    return ( ( Maybe_85_Just ) ( (  line2669 ) ) );
}

static  struct Maybe_85   next654 (    struct Drop_638 *  dref848 ) {
    while ( (  cmp293 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next655 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub292 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next655 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  struct Maybe_651   next653 (    struct Zip_637 *  self932 ) {
    struct Zip_637  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_85  dref934 = ( (  next654 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_85_None_t ) {
            return ( (struct Maybe_651) { .tag = Maybe_651_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_85_Just_t ) {
                struct Maybe_156  dref936 = ( (  next433 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_156_None_t ) {
                    return ( (struct Maybe_651) { .tag = Maybe_651_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_156_Just_t ) {
                        ( (  next654 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next433 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_651_Just ) ( ( ( Tuple2_652_Tuple2 ) ( ( dref934 .stuff .Maybe_85_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_156_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion659 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

static  enum Unit_8   insert661 (   struct env37* env ,    struct List_9 *  list2458 ,    size_t  i2460 ,    struct Line_12  elem2462 ) {
    if ( ( (  cmp293 ( (  i2460 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2460 ) , ( ( * (  list2458 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2460 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2458 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq358 ( ( ( * (  list2458 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion39  temp662 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add408 , .env =  env->envinst6 } );
        ( temp662.fun ( &temp662.env ,  (  list2458 ) ,  (  elem2462 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion38  temp663 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full410 , .env =  env->envinst1 } );
    ( temp663.fun ( &temp663.env ,  (  list2458 ) ) );
    size_t  ii2463 = (  op_dash_sub292 ( ( ( * (  list2458 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp293 ( (  ii2463 ) , (  i2460 ) ) != 0 ) ) {
        ( (  set421 ) ( ( ( * (  list2458 ) ) .f_elements ) ,  (  op_dash_add314 ( (  ii2463 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get603 ) ( (  list2458 ) ,  (  ii2463 ) ) ) ) );
        if ( (  eq358 ( (  ii2463 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2463 = (  op_dash_sub292 ( (  ii2463 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set421 ) ( ( ( * (  list2458 ) ) .f_elements ) ,  (  i2460 ) ,  (  elem2462 ) ) );
    (*  list2458 ) .f_count = (  op_dash_add314 ( ( ( * (  list2458 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion665 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  enum Unit_8   free667 (    struct List_13 *  list2433 ) {
    ( (  free587 ) ( ( ( * (  list2433 ) ) .f_al ) ,  ( ( * (  list2433 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line666 (    struct Line_12 *  line3911 ) {
    ( (  free667 ) ( ( & ( ( * (  line3911 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot602 (   struct env97* env ,    struct TextBuf_104 *  self3959 ,    struct Pos_29  p3961 ,    struct StrView_30  bytes3963 ) {
    enum CAllocator_10  al3964 = ( ( ( * (  self3959 ) ) .f_buf ) .f_al );
    struct List_9 *  buf3965 = ( & ( ( * (  self3959 ) ) .f_buf ) );
    struct Line_12  extracted_dash_line_dash_buf3966 = ( (  get603 ) ( (  buf3965 ) ,  ( (  i32_dash_size423 ) ( ( (  p3961 ) .f_line ) ) ) ) );
    struct Slice_14  remaining3967 = ( (  from478 ) ( ( (  to_dash_slice605 ) ( ( (  extracted_dash_line_dash_buf3966 ) .f_line ) ) ) ,  ( (  i32_dash_size423 ) ( ( (  p3961 ) .f_bi ) ) ) ) );
    struct envunion98  temp607 = ( (struct envunion98){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter608 , .env =  env->envinst53 } );
    ( (  set606 ) ( (  buf3965 ) ,  ( (  i32_dash_size423 ) ( ( (  p3961 ) .f_line ) ) ) ,  ( (  mk_dash_line443 ) ( ( temp607.fun ( &temp607.env ,  ( (  subslice479 ) ( ( (  to_dash_slice605 ) ( ( (  extracted_dash_line_dash_buf3966 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size423 ) ( ( (  p3961 ) .f_bi ) ) ) ) ) ,  (  al3964 ) ) ) ) ) ) );
    struct Line_12 *  last_dash_line3968 = ( (  get_dash_ptr604 ) ( (  buf3965 ) ,  ( (  i32_dash_size423 ) ( ( (  p3961 ) .f_line ) ) ) ) );
    struct envunion100  temp628 = ( (struct envunion100){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all611 , .env =  env->envinst48 } );
    ( temp628.fun ( &temp628.env ,  ( & ( ( * (  last_dash_line3968 ) ) .f_line ) ) ,  ( ( (  or_dash_else629 ) ( ( (  head630 ) ( ( (  lines635 ) ( (  bytes3963 ) ) ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3969 = (  from_dash_integral56 ( 0 ) );
    struct Zip_637  temp636 =  into_dash_iter642 ( ( (  zip643 ) ( ( (  drop645 ) ( ( (  split_dash_by_dash_each647 ) ( (  bytes3963 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_651  __cond650 =  next653 (&temp636);
        if (  __cond650 .tag == 0 ) {
            break;
        }
        struct Tuple2_652  dref3970 =  __cond650 .stuff .Maybe_651_Just_s .field0;
        struct envunion659  temp658 = ( (struct envunion659){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter608 , .env =  env->envinst53 } );
        struct Line_12  temp657 = ( (  mk_dash_line443 ) ( ( temp658.fun ( &temp658.env ,  ( ( dref3970 .field0 ) .f_contents ) ,  (  al3964 ) ) ) ) );
        struct Line_12 *  nuline3973 = ( &temp657 );
        size_t  next_dash_line3974 = ( (  i32_dash_size423 ) ( (  op_dash_add160 ( ( (  p3961 ) .f_line ) , ( dref3970 .field1 ) ) ) ) );
        struct envunion99  temp660 = ( (struct envunion99){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  ) )insert661 , .env =  env->envinst37 } );
        ( temp660.fun ( &temp660.env ,  (  buf3965 ) ,  (  next_dash_line3974 ) ,  ( * (  nuline3973 ) ) ) );
        last_dash_line3968 = ( (  get_dash_ptr604 ) ( (  buf3965 ) ,  (  next_dash_line3974 ) ) );
        lines_dash_added3969 = (  op_dash_add160 ( (  lines_dash_added3969 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion665  temp664 = ( (struct envunion665){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all611 , .env =  env->envinst48 } );
    ( temp664.fun ( &temp664.env ,  ( & ( ( * (  last_dash_line3968 ) ) .f_line ) ) ,  (  remaining3967 ) ) );
    ( (  free_dash_line666 ) ( ( & (  extracted_dash_line_dash_buf3966 ) ) ) );
    return (  lines_dash_added3969 );
}

static  size_t   size668 (    struct List_13 *  l2436 ) {
    return ( ( * (  l2436 ) ) .f_count );
}

struct StrConcat_674 {
    struct StrConcat_79  field0;
    struct Char_65  field1;
};

static struct StrConcat_674 StrConcat_674_StrConcat (  struct StrConcat_79  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_674 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_673 {
    struct StrConcat_674  field0;
    size_t  field1;
};

static struct StrConcat_673 StrConcat_673_StrConcat (  struct StrConcat_674  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_673 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_672 {
    struct StrConcat_673  field0;
    struct Char_65  field1;
};

static struct StrConcat_672 StrConcat_672_StrConcat (  struct StrConcat_673  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_672 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_677 {
    struct StrView_30  field0;
    struct StrConcat_672  field1;
};

static struct StrConcat_677 StrConcat_677_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_672  field1 ) {
    return ( struct StrConcat_677 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_676 {
    struct StrConcat_677  field0;
    struct Char_65  field1;
};

static struct StrConcat_676 StrConcat_676_StrConcat (  struct StrConcat_677  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_676 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str681 (    struct StrConcat_674  self1295 ) {
    struct StrConcat_674  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str680 (    struct StrConcat_673  self1295 ) {
    struct StrConcat_673  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str681 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str679 (    struct StrConcat_672  self1295 ) {
    struct StrConcat_672  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str680 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str678 (    struct StrConcat_677  self1295 ) {
    struct StrConcat_677  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str679 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str675 (    struct StrConcat_676  self1295 ) {
    struct StrConcat_676  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str678 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic671 (    struct StrConcat_672  errmsg1336 ) {
    ( (  print_dash_str675 ) ( ( ( StrConcat_676_StrConcat ) ( ( ( StrConcat_677_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1336 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Drop_683 {
    struct Zip_559  field0;
    size_t  field1;
};

static struct Drop_683 Drop_683_Drop (  struct Zip_559  field0 ,  size_t  field1 ) {
    return ( struct Drop_683 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env684 {
    struct List_13 *  list2466;
    ;
    ;
    ;
    size_t  num_dash_elems2471;
};

struct envunion685 {
    enum Unit_8  (*fun) (  struct env684*  ,    struct Tuple2_562  );
    struct env684 env;
};

static  struct Drop_683   into_dash_iter687 (    struct Drop_683  self846 ) {
    return (  self846 );
}

static  struct Maybe_565   next688 (    struct Drop_683 *  dref848 ) {
    while ( (  cmp293 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next566 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub292 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next566 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each682 (    struct Drop_683  iterable1092 ,   struct envunion685  fun1094 ) {
    struct Drop_683  temp686 = ( (  into_dash_iter687 ) ( (  iterable1092 ) ) );
    struct Drop_683 *  it1095 = ( &temp686 );
    while ( ( true ) ) {
        struct Maybe_565  dref1096 = ( (  next688 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_565_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_565_Just_t ) {
                struct envunion685  temp689 = (  fun1094 );
                ( temp689.fun ( &temp689.env ,  ( dref1096 .stuff .Maybe_565_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_683   drop690 (    struct Zip_559  iterable853 ,    size_t  i855 ) {
    struct Zip_559  it856 = ( (  into_dash_iter564 ) ( (  iterable853 ) ) );
    return ( ( Drop_683_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SliceIter_524   into_dash_iter692 (    struct List_13  self2426 ) {
    return ( (  into_dash_iter538 ) ( ( (  subslice479 ) ( ( (  self2426 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2426 ) .f_count ) ) ) ) );
}

static  struct Zip_559   zip691 (    struct List_13  left940 ,    struct FromIter_427  right942 ) {
    struct SliceIter_524  left_dash_it943 = ( (  into_dash_iter692 ) ( (  left940 ) ) );
    struct FromIter_427  right_dash_it944 = ( (  into_dash_iter437 ) ( (  right942 ) ) );
    return ( (struct Zip_559) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  enum Unit_8   set694 (    struct List_13 *  list2419 ,    size_t  i2421 ,    uint8_t  elem2423 ) {
    if ( ( (  cmp293 ( (  i2421 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2421 ) , ( ( * (  list2419 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2421 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2419 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set570 ) ( ( ( * (  list2419 ) ) .f_elements ) ,  (  i2421 ) ,  (  elem2423 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam693 (   struct env684* env ,    struct Tuple2_562  dref2472 ) {
    return ( (  set694 ) ( ( env->list2466 ) ,  (  op_dash_sub292 ( ( (  i32_dash_size423 ) ( ( dref2472 .field1 ) ) ) , ( env->num_dash_elems2471 ) ) ) ,  ( dref2472 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range670 (   struct env40* env ,    struct List_13 *  list2466 ,    size_t  from2468 ,    size_t  to_dash_excl2470 ) {
    if ( (  cmp293 ( (  to_dash_excl2470 ) , (  from2468 ) ) == 0 ) ) {
        ( (  panic671 ) ( ( ( StrConcat_672_StrConcat ) ( ( ( StrConcat_673_StrConcat ) ( ( ( StrConcat_674_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2468 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2470 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp293 ( (  from2468 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2468 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2466 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp293 ( (  to_dash_excl2470 ) , ( ( * (  list2466 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2470 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2466 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2471 = (  op_dash_sub292 ( (  to_dash_excl2470 ) , (  from2468 ) ) );
    struct env684 envinst684 = {
        .list2466 =  list2466 ,
        .num_dash_elems2471 =  num_dash_elems2471 ,
    };
    ( (  for_dash_each682 ) ( ( (  drop690 ) ( ( (  zip691 ) ( ( * (  list2466 ) ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add314 ( (  from2468 ) , (  num_dash_elems2471 ) ) ) ) ) ,  ( (struct envunion685){ .fun = (  enum Unit_8  (*) (  struct env684*  ,    struct Tuple2_562  ) )lam693 , .env =  envinst684 } ) ) );
    (*  list2466 ) .f_count = (  op_dash_sub292 ( ( ( * (  list2466 ) ) .f_count ) , (  num_dash_elems2471 ) ) );
    size_t  capacity2475 = ( ( ( * (  list2466 ) ) .f_elements ) .f_count );
    if ( (  cmp293 ( (  op_dash_mul416 ( ( ( * (  list2466 ) ) .f_count ) , ( env->shrink_dash_factor2442 ) ) ) , (  capacity2475 ) ) == 0 ) ) {
        if ( (  eq358 ( ( ( * (  list2466 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free587 ) ( ( ( * (  list2466 ) ) .f_al ) ,  ( ( * (  list2466 ) ) .f_elements ) ) );
            (*  list2466 ) .f_elements = ( (  empty452 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2476 = (  op_dash_mul416 ( (  op_dash_add314 ( (  op_dash_div347 ( ( ( * (  list2466 ) ) .f_count ) , ( env->shrink_dash_factor2442 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2442 ) ) );
        struct Slice_14  new_dash_slice2477 = ( (  allocate545 ) ( ( ( * (  list2466 ) ) .f_al ) ,  (  new_dash_size2476 ) ) );
        ( (  copy_dash_to550 ) ( ( (  subslice479 ) ( ( ( * (  list2466 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2466 ) ) .f_count ) ) ) ,  (  new_dash_slice2477 ) ) );
        ( (  free587 ) ( ( ( * (  list2466 ) ) .f_al ) ,  ( ( * (  list2466 ) ) .f_elements ) ) );
        (*  list2466 ) .f_elements = (  new_dash_slice2477 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim696 (    struct List_13 *  l2523 ,    size_t  new_dash_count2525 ) {
    (*  l2523 ) .f_count = ( (  min480 ) ( (  new_dash_count2525 ) ,  ( ( * (  l2523 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min697 (    int32_t  l1360 ,    int32_t  r1362 ) {
    if ( (  cmp158 ( (  l1360 ) , (  r1362 ) ) == 0 ) ) {
        return (  l1360 );
    } else {
        return (  r1362 );
    }
}

struct envunion699 {
    int32_t  (*fun) (  struct env97*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct StrView_30  );
    struct env97 env;
};

struct Maybe_701 {
    enum {
        Maybe_701_None_t,
        Maybe_701_Just_t,
    } tag;
    union {
        struct {
            struct Slice_14  field0;
        } Maybe_701_Just_s;
    } stuff;
};

static struct Maybe_701 Maybe_701_Just (  struct Slice_14  field0 ) {
    return ( struct Maybe_701 ) { .tag = Maybe_701_Just_t, .stuff = { .Maybe_701_Just_s = { .field0 = field0 } } };
};

static  struct Slice_14   or_dash_else700 (    struct Maybe_701  self1353 ,    struct Slice_14  alt1355 ) {
    struct Maybe_701  dref1356 = (  self1353 );
    if ( dref1356.tag == Maybe_701_None_t ) {
        return (  alt1355 );
    }
    else {
        if ( dref1356.tag == Maybe_701_Just_t ) {
            return ( dref1356 .stuff .Maybe_701_Just_s .field0 );
        }
    }
}

static  struct Maybe_701   fmap_dash_maybe702 (    struct Maybe_388  x1578 ,    struct Slice_14 (*  fun1580 )(    struct Line_12  ) ) {
    struct Maybe_388  dref1581 = (  x1578 );
    if ( dref1581.tag == Maybe_388_None_t ) {
        return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
    }
    else {
        if ( dref1581.tag == Maybe_388_Just_t ) {
            return ( ( Maybe_701_Just ) ( ( (  fun1580 ) ( ( dref1581 .stuff .Maybe_388_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_388   try_dash_get703 (    struct List_9 *  list2414 ,    size_t  i2416 ) {
    if ( (  cmp293 ( (  i2416 ) , ( ( * (  list2414 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_388) { .tag = Maybe_388_None_t } );
    }
    return ( ( Maybe_388_Just ) ( ( (  get603 ) ( (  list2414 ) ,  (  i2416 ) ) ) ) );
}

static  struct Slice_14   lam704 (    struct Line_12  line3992 ) {
    return ( (  to_dash_slice605 ) ( ( (  line3992 ) .f_line ) ) );
}

struct StrConcat_709 {
    struct StrView_30  field0;
    struct StrView_30  field1;
};

static struct StrConcat_709 StrConcat_709_StrConcat (  struct StrView_30  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_709 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_708 {
    struct StrConcat_709  field0;
    struct Char_65  field1;
};

static struct StrConcat_708 StrConcat_708_StrConcat (  struct StrConcat_709  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_708 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str710 (    struct StrConcat_709  self1295 ) {
    struct StrConcat_709  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str331 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str707 (    struct StrConcat_708  self1295 ) {
    struct StrConcat_708  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str710 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert706 (    bool  cond1339 ,    struct StrView_30  msg1341 ) {
    if ( ( ! (  cond1339 ) ) ) {
        ( (  print_dash_str707 ) ( ( ( StrConcat_708_StrConcat ) ( ( ( StrConcat_709_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1341 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_714 {
    struct Zip_425  field0;
    size_t  field1;
};

static struct Drop_714 Drop_714_Drop (  struct Zip_425  field0 ,  size_t  field1 ) {
    return ( struct Drop_714 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env715 {
    struct List_9 *  list2466;
    ;
    ;
    ;
    size_t  num_dash_elems2471;
};

struct envunion716 {
    enum Unit_8  (*fun) (  struct env715*  ,    struct Tuple2_419  );
    struct env715 env;
};

static  struct Drop_714   into_dash_iter718 (    struct Drop_714  self846 ) {
    return (  self846 );
}

static  struct Maybe_430   next719 (    struct Drop_714 *  dref848 ) {
    while ( (  cmp293 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next431 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub292 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next431 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each713 (    struct Drop_714  iterable1092 ,   struct envunion716  fun1094 ) {
    struct Drop_714  temp717 = ( (  into_dash_iter718 ) ( (  iterable1092 ) ) );
    struct Drop_714 *  it1095 = ( &temp717 );
    while ( ( true ) ) {
        struct Maybe_430  dref1096 = ( (  next719 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_430_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_430_Just_t ) {
                struct envunion716  temp720 = (  fun1094 );
                ( temp720.fun ( &temp720.env ,  ( dref1096 .stuff .Maybe_430_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_714   drop721 (    struct Zip_425  iterable853 ,    size_t  i855 ) {
    struct Zip_425  it856 = ( (  into_dash_iter429 ) ( (  iterable853 ) ) );
    return ( ( Drop_714_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct Slice_11   subslice724 (    struct Slice_11  slice2197 ,    size_t  from2199 ,    size_t  to2201 ) {
    struct Line_12 *  begin_dash_ptr2202 = ( (  offset_dash_ptr403 ) ( ( (  slice2197 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  from2199 ) ) ) ) );
    if ( ( (  cmp293 ( (  from2199 ) , (  to2201 ) ) != 0 ) || (  cmp293 ( (  from2199 ) , ( (  slice2197 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2203 = (  op_dash_sub292 ( ( (  min480 ) ( (  to2201 ) ,  ( (  slice2197 ) .f_count ) ) ) , (  from2199 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  count2203 ) } );
}

static  struct SliceIter_426   into_dash_iter723 (    struct List_9  self2426 ) {
    return ( (  into_dash_iter436 ) ( ( (  subslice724 ) ( ( (  self2426 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2426 ) .f_count ) ) ) ) );
}

static  struct Zip_425   zip722 (    struct List_9  left940 ,    struct FromIter_427  right942 ) {
    struct SliceIter_426  left_dash_it943 = ( (  into_dash_iter723 ) ( (  left940 ) ) );
    struct FromIter_427  right_dash_it944 = ( (  into_dash_iter437 ) ( (  right942 ) ) );
    return ( (struct Zip_425) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  enum Unit_8   lam725 (   struct env715* env ,    struct Tuple2_419  dref2472 ) {
    return ( (  set606 ) ( ( env->list2466 ) ,  (  op_dash_sub292 ( ( (  i32_dash_size423 ) ( ( dref2472 .field1 ) ) ) , ( env->num_dash_elems2471 ) ) ) ,  ( dref2472 .field0 ) ) );
}

struct env728 {
    struct Slice_11  dest2274;
    ;
    ;
};

struct envunion729 {
    enum Unit_8  (*fun) (  struct env728*  ,    struct Tuple2_419  );
    struct env728 env;
};

static  enum Unit_8   for_dash_each727 (    struct Zip_425  iterable1092 ,   struct envunion729  fun1094 ) {
    struct Zip_425  temp730 = ( (  into_dash_iter429 ) ( (  iterable1092 ) ) );
    struct Zip_425 *  it1095 = ( &temp730 );
    while ( ( true ) ) {
        struct Maybe_430  dref1096 = ( (  next431 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_430_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_430_Just_t ) {
                struct envunion729  temp731 = (  fun1094 );
                ( temp731.fun ( &temp731.env ,  ( dref1096 .stuff .Maybe_430_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam732 (   struct env728* env ,    struct Tuple2_419  dref2275 ) {
    return ( (  set421 ) ( ( env->dest2274 ) ,  ( (  i32_dash_size423 ) ( ( dref2275 .field1 ) ) ) ,  ( dref2275 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to726 (    struct Slice_11  src2272 ,    struct Slice_11  dest2274 ) {
    if ( (  cmp293 ( ( (  src2272 ) .f_count ) , ( (  dest2274 ) .f_count ) ) == 2 ) ) {
        ( (  panic551 ) ( ( ( StrConcat_552_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2272 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2274 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env728 envinst728 = {
        .dest2274 =  dest2274 ,
    };
    ( (  for_dash_each727 ) ( ( (  zip435 ) ( (  src2272 ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion729){ .fun = (  enum Unit_8  (*) (  struct env728*  ,    struct Tuple2_419  ) )lam732 , .env =  envinst728 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range712 (   struct env41* env ,    struct List_9 *  list2466 ,    size_t  from2468 ,    size_t  to_dash_excl2470 ) {
    if ( (  cmp293 ( (  to_dash_excl2470 ) , (  from2468 ) ) == 0 ) ) {
        ( (  panic671 ) ( ( ( StrConcat_672_StrConcat ) ( ( ( StrConcat_673_StrConcat ) ( ( ( StrConcat_674_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2468 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2470 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp293 ( (  from2468 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2468 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2466 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp293 ( (  to_dash_excl2470 ) , ( ( * (  list2466 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2470 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2466 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2471 = (  op_dash_sub292 ( (  to_dash_excl2470 ) , (  from2468 ) ) );
    struct env715 envinst715 = {
        .list2466 =  list2466 ,
        .num_dash_elems2471 =  num_dash_elems2471 ,
    };
    ( (  for_dash_each713 ) ( ( (  drop721 ) ( ( (  zip722 ) ( ( * (  list2466 ) ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add314 ( (  from2468 ) , (  num_dash_elems2471 ) ) ) ) ) ,  ( (struct envunion716){ .fun = (  enum Unit_8  (*) (  struct env715*  ,    struct Tuple2_419  ) )lam725 , .env =  envinst715 } ) ) );
    (*  list2466 ) .f_count = (  op_dash_sub292 ( ( ( * (  list2466 ) ) .f_count ) , (  num_dash_elems2471 ) ) );
    size_t  capacity2475 = ( ( ( * (  list2466 ) ) .f_elements ) .f_count );
    if ( (  cmp293 ( (  op_dash_mul416 ( ( ( * (  list2466 ) ) .f_count ) , ( env->shrink_dash_factor2442 ) ) ) , (  capacity2475 ) ) == 0 ) ) {
        if ( (  eq358 ( ( ( * (  list2466 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free439 ) ( ( ( * (  list2466 ) ) .f_al ) ,  ( ( * (  list2466 ) ) .f_elements ) ) );
            (*  list2466 ) .f_elements = ( (  empty374 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2476 = (  op_dash_mul416 ( (  op_dash_add314 ( (  op_dash_div347 ( ( ( * (  list2466 ) ) .f_count ) , ( env->shrink_dash_factor2442 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2442 ) ) );
        struct Slice_11  new_dash_slice2477 = ( (  allocate411 ) ( ( ( * (  list2466 ) ) .f_al ) ,  (  new_dash_size2476 ) ) );
        ( (  copy_dash_to726 ) ( ( (  subslice724 ) ( ( ( * (  list2466 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2466 ) ) .f_count ) ) ) ,  (  new_dash_slice2477 ) ) );
        ( (  free439 ) ( ( ( * (  list2466 ) ) .f_al ) ,  ( ( * (  list2466 ) ) .f_elements ) ) );
        (*  list2466 ) .f_elements = (  new_dash_slice2477 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action592 (   struct env101* env ,    struct TextBuf_104 *  self3977 ,    struct Pos_29  from_dash_pos3979 ,    struct Pos_29  to_dash_pos3981 ,    struct StrView_30  bytes3983 ) {
    struct Pos_29  from3984 = ( (  min593 ) ( (  from_dash_pos3979 ) ,  (  to_dash_pos3981 ) ) );
    struct Pos_29  to3985 = ( (  max595 ) ( (  from_dash_pos3979 ) ,  (  to_dash_pos3981 ) ) );
    if ( (  eq596 ( (  to3985 ) , (  from3984 ) ) ) ) {
        enum CAllocator_10  al3986 = ( ( ( * (  self3977 ) ) .f_buf ) .f_al );
        if ( ( (  eq358 ( ( (  size598 ) ( ( & ( ( * (  self3977 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size423 ) ( ( (  from3984 ) .f_line ) ) ) ) ) && (  eq597 ( ( (  from3984 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion110  temp599 = ( (struct envunion110){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add408 , .env =  env->envinst6 } );
            ( temp599.fun ( &temp599.env ,  ( & ( ( * (  self3977 ) ) .f_buf ) ) ,  ( (  mk_dash_line443 ) ( ( (  mk451 ) ( (  al3986 ) ) ) ) ) ) );
        }
        struct envunion601  temp600 = ( (struct envunion601){ .fun = (  int32_t  (*) (  struct env97*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct StrView_30  ) )add_dash_to_dash_spot602 , .env =  env->envinst97 } );
        ( temp600.fun ( &temp600.env ,  (  self3977 ) ,  (  from3984 ) ,  (  bytes3983 ) ) );
    } else {
        struct List_9 *  lines_dash_buf3987 = ( & ( ( * (  self3977 ) ) .f_buf ) );
        struct Line_12 *  first_dash_line3988 = ( (  get_dash_ptr604 ) ( (  lines_dash_buf3987 ) ,  ( (  i32_dash_size423 ) ( ( (  from3984 ) .f_line ) ) ) ) );
        (*  first_dash_line3988 ) .f_invalidated = ( true );
        if ( ( (  eq597 ( ( (  from3984 ) .f_line ) , ( (  to3985 ) .f_line ) ) ) && (  cmp158 ( ( (  to3985 ) .f_bi ) , (  op_dash_add160 ( ( (  size_dash_i32332 ) ( ( (  size668 ) ( ( & ( ( * (  first_dash_line3988 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion108  temp669 = ( (struct envunion108){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range670 , .env =  env->envinst40 } );
            ( temp669.fun ( &temp669.env ,  ( & ( ( * (  first_dash_line3988 ) ) .f_line ) ) ,  ( (  i32_dash_size423 ) ( ( (  from3984 ) .f_bi ) ) ) ,  ( (  i32_dash_size423 ) ( ( (  to3985 ) .f_bi ) ) ) ) );
            struct envunion103  temp695 = ( (struct envunion103){ .fun = (  int32_t  (*) (  struct env97*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct StrView_30  ) )add_dash_to_dash_spot602 , .env =  env->envinst97 } );
            ( temp695.fun ( &temp695.env ,  (  self3977 ) ,  (  from3984 ) ,  (  bytes3983 ) ) );
        } else {
            ( (  trim696 ) ( ( & ( ( * (  first_dash_line3988 ) ) .f_line ) ) ,  ( (  i32_dash_size423 ) ( ( (  from3984 ) .f_bi ) ) ) ) );
            struct Line_12 *  last_dash_line3989 = ( (  get_dash_ptr604 ) ( (  lines_dash_buf3987 ) ,  ( (  i32_dash_size423 ) ( ( (  to3985 ) .f_line ) ) ) ) );
            (*  last_dash_line3989 ) .f_invalidated = ( true );
            to3985 .f_bi = ( (  min697 ) ( ( (  to3985 ) .f_bi ) ,  (  op_dash_add160 ( ( (  size_dash_i32332 ) ( ( (  size668 ) ( ( & ( ( * (  last_dash_line3989 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq597 ( ( (  to3985 ) .f_bi ) , (  op_dash_add160 ( ( (  size_dash_i32332 ) ( ( (  size668 ) ( ( & ( ( * (  last_dash_line3989 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to3985 .f_line = (  op_dash_add160 ( ( (  to3985 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to3985 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion699  temp698 = ( (struct envunion699){ .fun = (  int32_t  (*) (  struct env97*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct StrView_30  ) )add_dash_to_dash_spot602 , .env =  env->envinst97 } );
            int32_t  lines_dash_added3990 = ( temp698.fun ( &temp698.env ,  (  self3977 ) ,  (  from3984 ) ,  (  bytes3983 ) ) );
            to3985 .f_line = (  op_dash_add160 ( ( (  to3985 ) .f_line ) , (  lines_dash_added3990 ) ) );
            from3984 .f_line = (  op_dash_add160 ( ( (  from3984 ) .f_line ) , (  lines_dash_added3990 ) ) );
            struct Slice_14  last_dash_line3993 = ( (  or_dash_else700 ) ( ( (  fmap_dash_maybe702 ) ( ( (  try_dash_get703 ) ( (  lines_dash_buf3987 ) ,  ( (  i32_dash_size423 ) ( ( (  to3985 ) .f_line ) ) ) ) ) ,  (  lam704 ) ) ) ,  ( (  empty452 ) ( ) ) ) );
            struct envunion102  temp705 = ( (struct envunion102){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all611 , .env =  env->envinst48 } );
            ( temp705.fun ( &temp705.env ,  ( & ( ( * (  first_dash_line3988 ) ) .f_line ) ) ,  ( (  from478 ) ( (  last_dash_line3993 ) ,  ( (  i32_dash_size423 ) ( ( (  to3985 ) .f_bi ) ) ) ) ) ) );
            ( (  assert706 ) ( (  cmp158 ( ( (  to3985 ) .f_line ) , ( (  from3984 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion109  temp711 = ( (struct envunion109){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range712 , .env =  env->envinst41 } );
            ( temp711.fun ( &temp711.env ,  ( & ( ( * (  self3977 ) ) .f_buf ) ) ,  ( (  i32_dash_size423 ) ( (  op_dash_add160 ( ( (  from3984 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add314 ( ( (  i32_dash_size423 ) ( ( (  to3985 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_29   mk733 (    int32_t  line3837 ,    int32_t  bi3839 ) {
    return ( (struct Pos_29) { .f_line = (  line3837 ) , .f_bi = (  bi3839 ) } );
}

static  struct Maybe_363   mk_dash_from_dash_file366 (   struct env115* env ,    enum CAllocator_10  al4016 ,    struct StrView_30  filename4018 ) {
    struct envunion116  temp368 = ( (struct envunion116){ .fun = (  struct TextBuf_104  (*) (  struct env113*  ,    enum CAllocator_10  ) )mk369 , .env =  env->envinst113 } );
    struct TextBuf_104  temp367 = ( temp368.fun ( &temp368.env ,  (  al4016 ) ) );
    struct TextBuf_104 *  tb4019 = ( &temp367 );
    (*  tb4019 ) .f_filetype = ( (  detect_dash_filetype_dash_from_dash_filename466 ) ( (  filename4018 ) ) );
    struct StrView_30  filename04020 = ( (  clone_dash_0544 ) ( (  filename4018 ) ,  (  al4016 ) ) );
    struct Maybe_85  dref4021 = ( (  try_dash_read_dash_contents573 ) ( ( (  as_dash_const_dash_str584 ) ( (  filename04020 ) ) ) ,  (  al4016 ) ) );
    if ( dref4021.tag == Maybe_85_None_t ) {
        ( (  free586 ) ( (  filename04020 ) ,  (  al4016 ) ) );
        return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
    }
    else {
        if ( dref4021.tag == Maybe_85_Just_t ) {
            if ( (  eq589 ( ( (  try_dash_get493 ) ( ( ( dref4021 .stuff .Maybe_85_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub292 ( ( ( ( dref4021 .stuff .Maybe_85_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_74_Just ) ( ( (  ascii_dash_u8494 ) ( ( (  from_dash_charlike495 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref4021 .stuff .Maybe_85_Just_s .field0 = ( (  byte_dash_substr497 ) ( ( dref4021 .stuff .Maybe_85_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub292 ( ( ( ( dref4021 .stuff .Maybe_85_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion117  temp591 = ( (struct envunion117){ .fun = (  enum Unit_8  (*) (  struct env101*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ) )change_dash_no_dash_action592 , .env =  env->envinst101 } );
            ( temp591.fun ( &temp591.env ,  (  tb4019 ) ,  ( (  mk733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( dref4021 .stuff .Maybe_85_Just_s .field0 ) ) );
            (*  tb4019 ) .f_filename = ( ( Maybe_85_Just ) ( (  filename04020 ) ) );
            return ( ( Maybe_363_Just ) ( ( * (  tb4019 ) ) ) );
        }
    }
}

struct envunion735 {
    struct TextBuf_104  (*fun) (  struct env113*  ,    enum CAllocator_10  );
    struct env113 env;
};

struct envunion737 {
    struct TextBuf_104  (*fun) (  struct env113*  ,    enum CAllocator_10  );
    struct env113 env;
};

static  struct Pane_223   mk740 (    enum CAllocator_10  al4298 ,    struct TextBuf_104 *  buf4300 ) {
    return ( (struct Pane_223) { .f_buf = (  buf4300 ) , .f_cursor = ( (  mk733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) , .f_mode = ( Mode_224_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_225) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
}

struct envunion743 {
    struct Tui_91  (*fun) (  struct env87*  );
    struct env87 env;
};

static  struct Termios_93   undefined747 (  ) {
    struct Termios_93  temp748;
    return (  temp748 );
}

static  int32_t   stdin_dash_fileno749 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct termios *   cast_dash_ptr750 (    struct Termios_93 *  p398 ) {
    return ( (struct termios * ) (  p398 ) );
}

static  uint32_t   u32_dash_and751 (    uint32_t  l2951 ,    uint32_t  r2953 ) {
    return ( (  l2951 ) & (  r2953 ) );
}

static  uint32_t   u32_dash_neg752 (    uint32_t  l2956 ) {
    return ( ~ (  l2956 ) );
}

struct Array_754 {
    uint32_t _arr [4];
};

struct ArrayIter_756 {
    struct Array_754  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_756   into_dash_iter757 (    struct Array_754  self2095 ) {
    return ( (struct ArrayIter_756) { .f_backing = (  self2095 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_758 {
    enum {
        Maybe_758_None_t,
        Maybe_758_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_758_Just_s;
    } stuff;
};

static struct Maybe_758 Maybe_758_Just (  uint32_t  field0 ) {
    return ( struct Maybe_758 ) { .tag = Maybe_758_Just_t, .stuff = { .Maybe_758_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr762 (    struct Array_754 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   offset_dash_ptr763 (    uint32_t *  x377 ,    int64_t  count379 ) {
    uint32_t  temp764;
    return ( (uint32_t * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp764 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr761 (    struct Array_754 *  arr2019 ,    size_t  i2022 ) {
    if ( ( (  cmp293 ( (  i2022 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2022 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2022 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2023 = ( ( (  cast_dash_ptr762 ) ( (  arr2019 ) ) ) );
    return ( (  offset_dash_ptr763 ) ( (  p2023 ) ,  ( (int64_t ) (  i2022 ) ) ) );
}

static  uint32_t   get760 (    struct Array_754 *  arr2026 ,    size_t  i2029 ) {
    return ( * ( (  get_dash_ptr761 ) ( (  arr2026 ) ,  (  i2029 ) ) ) );
}

static  struct Maybe_758   next759 (    struct ArrayIter_756 *  self2102 ) {
    if ( (  cmp293 ( ( ( * (  self2102 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_758) { .tag = Maybe_758_None_t } );
    }
    uint32_t  e2104 = ( (  get760 ) ( ( & ( ( * (  self2102 ) ) .f_backing ) ) ,  ( ( * (  self2102 ) ) .f_cur ) ) );
    (*  self2102 ) .f_cur = (  op_dash_add314 ( ( ( * (  self2102 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_758_Just ) ( (  e2104 ) ) );
}

static  uint32_t   reduce755 (    struct Array_754  iterable1111 ,    uint32_t  base1113 ,    uint32_t (*  fun1115 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1116 = (  base1113 );
    struct ArrayIter_756  it1117 = ( (  into_dash_iter757 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_758  dref1118 = ( (  next759 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_758_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_758_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_758_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp765 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp765);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp766;
    return (  temp766 );
}

static  uint32_t   u32_dash_or767 (    uint32_t  l2943 ,    uint32_t  r2945 ) {
    return ( (  l2943 ) | (  r2945 ) );
}

static  uint32_t   u32_dash_ors753 (    struct Array_754  vals2948 ) {
    return ( (  reduce755 ) ( (  vals2948 ) ,  (  from_dash_integral166 ( 0 ) ) ,  (  u32_dash_or767 ) ) );
}

static  struct Array_754   from_dash_listlike768 (    struct Array_754 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   echo770 (  ) {
    return (  from_dash_integral166 ( 8 ) );
}

static  uint32_t   icanon771 (  ) {
    return (  from_dash_integral166 ( 2 ) );
}

static  uint32_t   isig772 (  ) {
    return (  from_dash_integral166 ( 1 ) );
}

static  uint32_t   iexten773 (  ) {
    return (  from_dash_integral166 ( 32768 ) );
}

struct Array_775 {
    uint32_t _arr [5];
};

struct ArrayIter_777 {
    struct Array_775  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_777   into_dash_iter778 (    struct Array_775  self2095 ) {
    return ( (struct ArrayIter_777) { .f_backing = (  self2095 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr782 (    struct Array_775 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   get_dash_ptr781 (    struct Array_775 *  arr2019 ,    size_t  i2022 ) {
    if ( ( (  cmp293 ( (  i2022 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2022 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2022 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2023 = ( ( (  cast_dash_ptr782 ) ( (  arr2019 ) ) ) );
    return ( (  offset_dash_ptr763 ) ( (  p2023 ) ,  ( (int64_t ) (  i2022 ) ) ) );
}

static  uint32_t   get780 (    struct Array_775 *  arr2026 ,    size_t  i2029 ) {
    return ( * ( (  get_dash_ptr781 ) ( (  arr2026 ) ,  (  i2029 ) ) ) );
}

static  struct Maybe_758   next779 (    struct ArrayIter_777 *  self2102 ) {
    if ( (  cmp293 ( ( ( * (  self2102 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_758) { .tag = Maybe_758_None_t } );
    }
    uint32_t  e2104 = ( (  get780 ) ( ( & ( ( * (  self2102 ) ) .f_backing ) ) ,  ( ( * (  self2102 ) ) .f_cur ) ) );
    (*  self2102 ) .f_cur = (  op_dash_add314 ( ( ( * (  self2102 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_758_Just ) ( (  e2104 ) ) );
}

static  uint32_t   reduce776 (    struct Array_775  iterable1111 ,    uint32_t  base1113 ,    uint32_t (*  fun1115 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1116 = (  base1113 );
    struct ArrayIter_777  it1117 = ( (  into_dash_iter778 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_758  dref1118 = ( (  next779 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_758_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_758_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_758_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp783 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp783);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp784;
    return (  temp784 );
}

static  uint32_t   u32_dash_ors774 (    struct Array_775  vals2948 ) {
    return ( (  reduce776 ) ( (  vals2948 ) ,  (  from_dash_integral166 ( 0 ) ) ,  (  u32_dash_or767 ) ) );
}

static  struct Array_775   from_dash_listlike785 (    struct Array_775 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   brkint787 (  ) {
    return (  from_dash_integral166 ( 2 ) );
}

static  uint32_t   icrnl788 (  ) {
    return (  from_dash_integral166 ( 256 ) );
}

static  uint32_t   inpck789 (  ) {
    return (  from_dash_integral166 ( 16 ) );
}

static  uint32_t   istrip790 (  ) {
    return (  from_dash_integral166 ( 32 ) );
}

static  uint32_t   ixon791 (  ) {
    return (  from_dash_integral166 ( 1024 ) );
}

struct Array_793 {
    uint32_t _arr [1];
};

struct ArrayIter_795 {
    struct Array_793  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_795   into_dash_iter796 (    struct Array_793  self2095 ) {
    return ( (struct ArrayIter_795) { .f_backing = (  self2095 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr800 (    struct Array_793 *  p398 ) {
    return ( (uint32_t * ) (  p398 ) );
}

static  uint32_t *   get_dash_ptr799 (    struct Array_793 *  arr2019 ,    size_t  i2022 ) {
    if ( ( (  cmp293 ( (  i2022 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2022 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2022 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2023 = ( ( (  cast_dash_ptr800 ) ( (  arr2019 ) ) ) );
    return ( (  offset_dash_ptr763 ) ( (  p2023 ) ,  ( (int64_t ) (  i2022 ) ) ) );
}

static  uint32_t   get798 (    struct Array_793 *  arr2026 ,    size_t  i2029 ) {
    return ( * ( (  get_dash_ptr799 ) ( (  arr2026 ) ,  (  i2029 ) ) ) );
}

static  struct Maybe_758   next797 (    struct ArrayIter_795 *  self2102 ) {
    if ( (  cmp293 ( ( ( * (  self2102 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_758) { .tag = Maybe_758_None_t } );
    }
    uint32_t  e2104 = ( (  get798 ) ( ( & ( ( * (  self2102 ) ) .f_backing ) ) ,  ( ( * (  self2102 ) ) .f_cur ) ) );
    (*  self2102 ) .f_cur = (  op_dash_add314 ( ( ( * (  self2102 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_758_Just ) ( (  e2104 ) ) );
}

static  uint32_t   reduce794 (    struct Array_793  iterable1111 ,    uint32_t  base1113 ,    uint32_t (*  fun1115 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1116 = (  base1113 );
    struct ArrayIter_795  it1117 = ( (  into_dash_iter796 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_758  dref1118 = ( (  next797 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_758_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_758_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_758_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp801 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp801);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp802;
    return (  temp802 );
}

static  uint32_t   u32_dash_ors792 (    struct Array_793  vals2948 ) {
    return ( (  reduce794 ) ( (  vals2948 ) ,  (  from_dash_integral166 ( 0 ) ) ,  (  u32_dash_or767 ) ) );
}

static  struct Array_793   from_dash_listlike803 (    struct Array_793 *  self369 ) {
    return ( * (  self369 ) );
}

static  uint32_t   opost805 (  ) {
    return (  from_dash_integral166 ( 1 ) );
}

static  uint32_t   cs8806 (  ) {
    return (  from_dash_integral166 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr809 (    struct Array_94 *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  uint8_t *   get_dash_ptr808 (    struct Array_94 *  arr2019 ,    size_t  i2022 ) {
    if ( ( (  cmp293 ( (  i2022 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2022 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2022 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2023 = ( ( (  cast_dash_ptr809 ) ( (  arr2019 ) ) ) );
    return ( (  offset_dash_ptr303 ) ( (  p2023 ) ,  ( (int64_t ) (  i2022 ) ) ) );
}

static  enum Unit_8   set807 (    struct Array_94 *  arr2032 ,    size_t  i2035 ,    uint8_t  e2037 ) {
    uint8_t *  p2038 = ( (  get_dash_ptr808 ) ( (  arr2032 ) ,  (  i2035 ) ) );
    (*  p2038 ) = (  e2037 );
    return ( Unit_8_Unit );
}

static  size_t   vmin810 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime811 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush812 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  struct Termios_93   enable_dash_raw_dash_mode745 (  ) {
    struct Termios_93  temp746 = ( (  undefined747 ) ( ) );
    struct Termios_93 *  orig_dash_termios3549 = ( &temp746 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno749 ) ( ) ) ,  ( (  cast_dash_ptr750 ) ( (  orig_dash_termios3549 ) ) ) ) );
    struct Termios_93  raw3550 = ( * (  orig_dash_termios3549 ) );
    struct Array_754  temp769 = ( (struct Array_754) { ._arr = { ( (  echo770 ) ( ) ) , ( (  icanon771 ) ( ) ) , ( (  isig772 ) ( ) ) , ( ( (  iexten773 ) ( ) ) ) } } );
    raw3550 .f_c_dash_lflag = ( (  u32_dash_and751 ) ( ( (  raw3550 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg752 ) ( ( (  u32_dash_ors753 ) ( ( (  from_dash_listlike768 ) ( ( &temp769 ) ) ) ) ) ) ) ) );
    struct Array_775  temp786 = ( (struct Array_775) { ._arr = { ( (  brkint787 ) ( ) ) , ( (  icrnl788 ) ( ) ) , ( (  inpck789 ) ( ) ) , ( (  istrip790 ) ( ) ) , ( ( (  ixon791 ) ( ) ) ) } } );
    raw3550 .f_c_dash_iflag = ( (  u32_dash_and751 ) ( ( (  raw3550 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg752 ) ( ( (  u32_dash_ors774 ) ( ( (  from_dash_listlike785 ) ( ( &temp786 ) ) ) ) ) ) ) ) );
    struct Array_793  temp804 = ( (struct Array_793) { ._arr = { ( ( (  opost805 ) ( ) ) ) } } );
    raw3550 .f_c_dash_oflag = ( (  u32_dash_and751 ) ( ( (  raw3550 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg752 ) ( ( (  u32_dash_ors792 ) ( ( (  from_dash_listlike803 ) ( ( &temp804 ) ) ) ) ) ) ) ) );
    raw3550 .f_c_dash_cflag = ( (  u32_dash_or767 ) ( ( (  raw3550 ) .f_c_dash_cflag ) ,  ( (  cs8806 ) ( ) ) ) );
    ( (  set807 ) ( ( & ( (  raw3550 ) .f_c_dash_cc ) ) ,  ( (  vmin810 ) ( ) ) ,  (  from_dash_integral311 ( 0 ) ) ) );
    ( (  set807 ) ( ( & ( (  raw3550 ) .f_c_dash_cc ) ) ,  ( (  vtime811 ) ( ) ) ,  (  from_dash_integral311 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno749 ) ( ) ) ,  ( (  tcsa_dash_flush812 ) ( ) ) ,  ( (  cast_dash_ptr750 ) ( ( & (  raw3550 ) ) ) ) ) );
    return ( * (  orig_dash_termios3549 ) );
}

static  enum Unit_8   for_dash_each815 (    struct StrViewIter_470  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrViewIter_470  temp816 = ( (  into_dash_iter471 ) ( (  iterable1092 ) ) );
    struct StrViewIter_470 *  it1095 = ( &temp816 );
    while ( ( true ) ) {
        struct Maybe_300  dref1096 = ( (  next475 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_300_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print814 (    struct StrView_30  s1328 ) {
    ( (  for_dash_each815 ) ( ( (  chars472 ) ( (  s1328 ) ) ) ,  (  printf_dash_char339 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   hide_dash_cursor813 (  ) {
    ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors817 (  ) {
    ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen818 (  ) {
    ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse819 (  ) {
    ( (  print_dash_str331 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout820 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr576 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq824 (    enum Unit_8 *  l657 ,    enum Unit_8 *  r659 ) {
    return ( (  l657 ) == (  r659 ) );
}

static  enum Unit_8 *   cast825 (    const char*  x395 ) {
    return ( (enum Unit_8 * ) (  x395 ) );
}

static  void *   cast_dash_ptr829 (    enum Unit_8 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of830 (    enum Unit_8 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  enum Unit_8 *   zeroed827 (  ) {
    enum Unit_8 *  temp828;
    enum Unit_8 *  x641 = (  temp828 );
    ( ( memset ) ( ( (  cast_dash_ptr829 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of830 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  enum Unit_8 *   null_dash_ptr826 (  ) {
    return ( (  zeroed827 ) ( ) );
}

static  struct Maybe_323   from_dash_nullable_dash_c_dash_str823 (    const char*  s662 ) {
    if ( ( (  ptr_dash_eq824 ) ( ( (  cast825 ) ( (  s662 ) ) ) ,  ( ( (  null_dash_ptr826 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_323) { .tag = Maybe_323_None_t } );
    } else {
        return ( ( Maybe_323_Just ) ( (  s662 ) ) );
    }
}

static  struct Maybe_323   get822 (    const char*  s2716 ) {
    return ( (  from_dash_nullable_dash_c_dash_str823 ) ( ( ( getenv ) ( (  s2716 ) ) ) ) );
}

static  bool   eq831 (    const char*  l2134 ,    const char*  r2136 ) {
    return (  eq597 ( ( ( strcmp ) ( (  l2134 ) ,  (  r2136 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_92   query_dash_palette821 (  ) {
    struct Maybe_323  colorterm2717 = ( (  get822 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_323  dref2718 = (  colorterm2717 );
    if ( dref2718.tag == Maybe_323_Just_t ) {
        if ( ( (  eq831 ( ( dref2718 .stuff .Maybe_323_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq831 ( ( dref2718 .stuff .Maybe_323_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_92_PaletteRGB );
        }
    }
    else {
        if ( dref2718.tag == Maybe_323_None_t ) {
        }
    }
    struct Maybe_323  dref2720 = ( (  get822 ) ( ( (  from_dash_string57 ) ( ( (uint8_t*)"TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2720.tag == Maybe_323_Just_t ) {
        if ( (  eq831 ( ( dref2720 .stuff .Maybe_323_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( (uint8_t*)"linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_92_Palette8 );
        }
    }
    else {
        if ( dref2720.tag == Maybe_323_None_t ) {
        }
    }
    return ( ColorPalette_92_Palette16 );
}

struct Tuple2_832 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_832 Tuple2_832_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_832 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_834 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr838 (    struct Winsize_834 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of839 (    struct Winsize_834  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Winsize_834   zeroed836 (  ) {
    struct Winsize_834  temp837;
    struct Winsize_834  x641 = (  temp837 );
    ( ( memset ) ( ( (  cast_dash_ptr838 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of839 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  int32_t   stdout_dash_fileno840 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  uint64_t   from_dash_integral842 (    size_t  x65 ) {
    return ( (uint64_t ) (  x65 ) );
}

static  uint64_t   tiocgwinsz841 (  ) {
    return (  from_dash_integral842 ( 21523 ) );
}

static  int32_t   op_dash_neg843 (    int32_t  x246 ) {
    return ( (  from_dash_integral56 ( 0 ) ) - (  x246 ) );
}

static  bool   eq844 (    uint16_t  l130 ,    uint16_t  r132 ) {
    return ( (  l130 ) == (  r132 ) );
}

static  uint16_t   from_dash_integral845 (    size_t  x56 ) {
    return ( (uint16_t ) (  x56 ) );
}

static  void *   cast_dash_ptr851 (    uint32_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of852 (    uint32_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  uint32_t   zeroed849 (  ) {
    uint32_t  temp850;
    uint32_t  x641 = (  temp850 );
    ( ( memset ) ( ( (  cast_dash_ptr851 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of852 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  uint16_t *   cast853 (    uint32_t *  x395 ) {
    return ( (uint16_t * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed847 (    uint16_t  x644 ) {
    uint32_t  temp848 = ( (  zeroed849 ) ( ) );
    uint32_t *  y645 = ( &temp848 );
    uint16_t *  yp646 = ( (  cast853 ) ( (  y645 ) ) );
    (*  yp646 ) = (  x644 );
    return ( * (  y645 ) );
}

static  uint32_t   u16_dash_u32846 (    uint16_t  x719 ) {
    return ( (  cast_dash_on_dash_zeroed847 ) ( (  x719 ) ) );
}

static  struct Tuple2_832   get_dash_dimensions833 (  ) {
    struct Winsize_834  temp835 = ( ( (  zeroed836 ) ( ) ) );
    struct Winsize_834 *  ws2705 = ( &temp835 );
    if ( ( (  eq597 ( ( ( ioctl ) ( ( (  stdout_dash_fileno840 ) ( ) ) ,  ( (  tiocgwinsz841 ) ( ) ) ,  (  ws2705 ) ) ) , (  op_dash_neg843 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq844 ( ( ( * (  ws2705 ) ) .f_ws_dash_col ) , (  from_dash_integral845 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_832_Tuple2 ) ( (  from_dash_integral166 ( 80 ) ) ,  (  from_dash_integral166 ( 24 ) ) ) );
    }
    return ( ( Tuple2_832_Tuple2 ) ( ( (  u16_dash_u32846 ) ( ( ( * (  ws2705 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32846 ) ( ( ( * (  ws2705 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined856 (  ) {
    struct timespec  temp857;
    return (  temp857 );
}

static  int32_t   clock_dash_monotonic858 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  struct timespec   now854 (  ) {
    struct timespec  temp855 = ( (  undefined856 ) ( ) );
    struct timespec *  t3511 = ( &temp855 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic858 ) ( ) ) ,  (  t3511 ) ) );
    return ( * (  t3511 ) );
}

struct env859 {
    bool *  should_dash_resize3563;
};

struct envunion860 {
    enum Unit_8  (*fun) (  struct env859*  ,    int32_t  );
    struct env859 env;
};

struct envunion860  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig861 ) {
    struct envunion860  temp862 = _intr_sigarr [  __intr__sig861 ];
    temp862.fun ( &temp862.env ,  __intr__sig861 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig863 ,   struct envunion860  __intr__fun864 ) {
    _intr_sigarr [  __intr__sig863 ] =  __intr__fun864;
    signal(  __intr__sig863 , _intr_sighandle );
    return Unit_8_Unit;
}

static  enum Unit_8   lam865 (   struct env859* env ,    int32_t  dref3570 ) {
    (* env->should_dash_resize3563 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst866 (    struct Tuple2_832  dref1556 ) {
    return ( dref1556 .field0 );
}

static  uint32_t   snd867 (    struct Tuple2_832  dref1559 ) {
    return ( dref1559 .field1 );
}

static  struct Tui_91   mk744 (   struct env87* env ) {
    struct Termios_93  og_dash_termios3565 = ( (  enable_dash_raw_dash_mode745 ) ( ) );
    ( (  hide_dash_cursor813 ) ( ) );
    ( (  reset_dash_colors817 ) ( ) );
    ( (  clear_dash_screen818 ) ( ) );
    ( (  enable_dash_mouse819 ) ( ) );
    ( (  flush_dash_stdout820 ) ( ) );
    enum ColorPalette_92  palette3566 = ( (  query_dash_palette821 ) ( ) );
    struct Tuple2_832  dims3567 = ( (  get_dash_dimensions833 ) ( ) );
    uint32_t  fps3568 = (  from_dash_integral166 ( 60 ) );
    struct timespec  last_dash_sync3569 = ( (  now854 ) ( ) );
    struct env859 envinst859 = {
        .should_dash_resize3563 = env->should_dash_resize3563 ,
    };
    ( _intr_register_signal ( (  from_dash_integral56 ( 28 ) ) , ( (struct envunion860){ .fun = (  enum Unit_8  (*) (  struct env859*  ,    int32_t  ) )lam865 , .env =  envinst859 } ) ) );
    return ( (struct Tui_91) { .f_width = ( (  fst866 ) ( (  dims3567 ) ) ) , .f_height = ( (  snd867 ) ( (  dims3567 ) ) ) , .f_target_dash_fps = (  fps3568 ) , .f_actual_dash_fps = (  from_dash_integral166 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3569 ) , .f_fps_dash_ts = (  last_dash_sync3569 ) , .f_fps_dash_count = (  from_dash_integral166 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3565 ) , .f_palette = (  palette3566 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_872 {
    size_t  f_size;
};

static  struct TypeSize_872   get_dash_typesize871 (  ) {
    struct Cell_281  temp873;
    return ( (struct TypeSize_872) { .f_size = ( sizeof( ( (  temp873 ) ) ) ) } );
}

static  struct Cell_281 *   cast_dash_ptr874 (    void *  p398 ) {
    return ( (struct Cell_281 * ) (  p398 ) );
}

static  struct Slice_280   allocate870 (    enum CAllocator_10  dref2360 ,    size_t  count2362 ) {
    if (!(  dref2360 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2363 = ( ( ( (  get_dash_typesize871 ) ( ) ) ) .f_size );
    struct Cell_281 *  ptr2364 = ( (  cast_dash_ptr874 ) ( ( ( malloc ) ( (  op_dash_mul416 ( (  size2363 ) , (  count2362 ) ) ) ) ) ) );
    return ( (struct Slice_280) { .f_ptr = (  ptr2364 ) , .f_count = (  count2362 ) } );
}

static  void *   cast_dash_ptr880 (    size_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of881 (    size_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  size_t   zeroed878 (  ) {
    size_t  temp879;
    size_t  x641 = (  temp879 );
    ( ( memset ) ( ( (  cast_dash_ptr880 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of881 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  uint32_t *   cast882 (    size_t *  x395 ) {
    return ( (uint32_t * ) (  x395 ) );
}

static  size_t   cast_dash_on_dash_zeroed876 (    uint32_t  x644 ) {
    size_t  temp877 = ( (  zeroed878 ) ( ) );
    size_t *  y645 = ( &temp877 );
    uint32_t *  yp646 = ( (  cast882 ) ( (  y645 ) ) );
    (*  yp646 ) = (  x644 );
    return ( * (  y645 ) );
}

static  size_t   u32_dash_size875 (    uint32_t  x725 ) {
    return ( (  cast_dash_on_dash_zeroed876 ) ( (  x725 ) ) );
}

struct env885 {
    struct Slice_280  s2321;
    ;
    struct Cell_281 (*  fun2323 )(    struct Cell_281  );
    ;
    ;
};

struct envunion886 {
    enum Unit_8  (*fun) (  struct env885*  ,    int32_t  );
    struct env885 env;
};

static  enum Unit_8   for_dash_each884 (    struct Range_151  iterable1092 ,   struct envunion886  fun1094 ) {
    struct RangeIter_154  temp887 = ( (  into_dash_iter155 ) ( (  iterable1092 ) ) );
    struct RangeIter_154 *  it1095 = ( &temp887 );
    while ( ( true ) ) {
        struct Maybe_156  dref1096 = ( (  next157 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_156_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_156_Just_t ) {
                struct envunion886  temp888 = (  fun1094 );
                ( temp888.fun ( &temp888.env ,  ( dref1096 .stuff .Maybe_156_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_281 *   offset_dash_ptr892 (    struct Cell_281 *  x377 ,    int64_t  count379 ) {
    struct Cell_281  temp893;
    return ( (struct Cell_281 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp893 ) ) ) ) ) ) ) ) );
}

static  struct Cell_281 *   get_dash_ptr891 (    struct Slice_280  slice2163 ,    size_t  i2165 ) {
    if ( ( (  cmp293 ( (  i2165 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2165 ) , ( (  slice2163 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2165 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2163 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_281 *  elem_dash_ptr2166 = ( (  offset_dash_ptr892 ) ( ( (  slice2163 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2165 ) ) ) ) );
    return (  elem_dash_ptr2166 );
}

static  enum Unit_8   set890 (    struct Slice_280  slice2180 ,    size_t  i2182 ,    struct Cell_281  x2184 ) {
    struct Cell_281 *  ep2185 = ( (  get_dash_ptr891 ) ( (  slice2180 ) ,  (  i2182 ) ) );
    (*  ep2185 ) = (  x2184 );
    return ( Unit_8_Unit );
}

struct Maybe_897 {
    enum {
        Maybe_897_None_t,
        Maybe_897_Just_t,
    } tag;
    union {
        struct {
            struct Cell_281  field0;
        } Maybe_897_Just_s;
    } stuff;
};

static struct Maybe_897 Maybe_897_Just (  struct Cell_281  field0 ) {
    return ( struct Maybe_897 ) { .tag = Maybe_897_Just_t, .stuff = { .Maybe_897_Just_s = { .field0 = field0 } } };
};

static  struct Cell_281   undefined898 (  ) {
    struct Cell_281  temp899;
    return (  temp899 );
}

static  struct Cell_281   or_dash_fail896 (    struct Maybe_897  x1346 ,    struct StrConcat_324  errmsg1348 ) {
    struct Maybe_897  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_897_None_t ) {
        ( (  panic326 ) ( (  errmsg1348 ) ) );
        return ( (  undefined898 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_897_Just_t ) {
            return ( dref1349 .stuff .Maybe_897_Just_s .field0 );
        }
    }
}

static  struct Maybe_897   try_dash_get900 (    struct Slice_280  slice2169 ,    size_t  i2171 ) {
    if ( ( (  cmp293 ( (  i2171 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2171 ) , ( (  slice2169 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_897) { .tag = Maybe_897_None_t } );
    }
    struct Cell_281 *  elem_dash_ptr2172 = ( (  offset_dash_ptr892 ) ( ( (  slice2169 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2171 ) ) ) ) );
    return ( ( Maybe_897_Just ) ( ( * (  elem_dash_ptr2172 ) ) ) );
}

static  struct Cell_281   get895 (    struct Slice_280  slice2175 ,    size_t  i2177 ) {
    return ( (  or_dash_fail896 ) ( ( (  try_dash_get900 ) ( (  slice2175 ) ,  (  i2177 ) ) ) ,  ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2177 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2175 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_281   elem_dash_get894 (    struct Slice_280  self2188 ,    size_t  idx2190 ) {
    return ( (  get895 ) ( (  self2188 ) ,  (  idx2190 ) ) );
}

static  enum Unit_8   lam889 (   struct env885* env ,    int32_t  i2325 ) {
    return ( (  set890 ) ( ( env->s2321 ) ,  ( (  i32_dash_size423 ) ( (  i2325 ) ) ) ,  ( ( env->fun2323 ) ( (  elem_dash_get894 ( ( env->s2321 ) , ( (  i32_dash_size423 ) ( (  i2325 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map883 (    struct Slice_280  s2321 ,    struct Cell_281 (*  fun2323 )(    struct Cell_281  ) ) {
    struct env885 envinst885 = {
        .s2321 =  s2321 ,
        .fun2323 =  fun2323 ,
    };
    ( (  for_dash_each884 ) ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32332 ) ( (  op_dash_sub292 ( ( (  s2321 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion886){ .fun = (  enum Unit_8  (*) (  struct env885*  ,    int32_t  ) )lam889 , .env =  envinst885 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_281   default_dash_cell902 (  ) {
    return ( (struct Cell_281) { .f_c = ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_139) { .tag = Color_139_ColorDefault_t } ) , .f_bg = ( (struct Color_139) { .tag = Color_139_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_281   lam901 (    struct Cell_281  dref3673 ) {
    return ( (  default_dash_cell902 ) ( ) );
}

struct env905 {
    struct Slice_280  s2321;
    ;
    struct Cell_281 (*  fun2323 )(    struct Cell_281  );
    ;
    ;
};

struct envunion906 {
    enum Unit_8  (*fun) (  struct env905*  ,    int32_t  );
    struct env905 env;
};

static  enum Unit_8   for_dash_each904 (    struct Range_151  iterable1092 ,   struct envunion906  fun1094 ) {
    struct RangeIter_154  temp907 = ( (  into_dash_iter155 ) ( (  iterable1092 ) ) );
    struct RangeIter_154 *  it1095 = ( &temp907 );
    while ( ( true ) ) {
        struct Maybe_156  dref1096 = ( (  next157 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_156_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_156_Just_t ) {
                struct envunion906  temp908 = (  fun1094 );
                ( temp908.fun ( &temp908.env ,  ( dref1096 .stuff .Maybe_156_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam909 (   struct env905* env ,    int32_t  i2325 ) {
    return ( (  set890 ) ( ( env->s2321 ) ,  ( (  i32_dash_size423 ) ( (  i2325 ) ) ) ,  ( ( env->fun2323 ) ( (  elem_dash_get894 ( ( env->s2321 ) , ( (  i32_dash_size423 ) ( (  i2325 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map903 (    struct Slice_280  s2321 ,    struct Cell_281 (*  fun2323 )(    struct Cell_281  ) ) {
    struct env905 envinst905 = {
        .s2321 =  s2321 ,
        .fun2323 =  fun2323 ,
    };
    ( (  for_dash_each904 ) ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32332 ) ( (  op_dash_sub292 ( ( (  s2321 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion906){ .fun = (  enum Unit_8  (*) (  struct env905*  ,    int32_t  ) )lam909 , .env =  envinst905 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_281   lam910 (    struct Cell_281  dref3675 ) {
    return ( (  default_dash_cell902 ) ( ) );
}

static  struct Screen_279   mk_dash_screen869 (    struct Tui_91 *  tui3669 ,    enum CAllocator_10  al3671 ) {
    struct Slice_280  cur3672 = ( (  allocate870 ) ( (  al3671 ) ,  ( (  u32_dash_size875 ) ( (  op_dash_mul168 ( ( ( * (  tui3669 ) ) .f_width ) , ( ( * (  tui3669 ) ) .f_height ) ) ) ) ) ) );
    ( (  map883 ) ( (  cur3672 ) ,  (  lam901 ) ) );
    struct Slice_280  prev3674 = ( (  allocate870 ) ( (  al3671 ) ,  ( (  u32_dash_size875 ) ( (  op_dash_mul168 ( ( ( * (  tui3669 ) ) .f_width ) , ( ( * (  tui3669 ) ) .f_height ) ) ) ) ) ) );
    ( (  map903 ) ( (  prev3674 ) ,  (  lam910 ) ) );
    return ( (struct Screen_279) { .f_current = (  cur3672 ) , .f_previous = (  prev3674 ) , .f_al = (  al3671 ) , .f_tui = (  tui3669 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_139) { .tag = Color_139_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_139) { .tag = Color_139_ColorDefault_t } ) } );
}

enum MouseButton_918 {
    MouseButton_918_MouseLeft,
    MouseButton_918_MouseMiddle,
    MouseButton_918_MouseRight,
    MouseButton_918_ScrollUp,
    MouseButton_918_ScrollDown,
};

struct MouseEvent_917 {
    enum MouseButton_918  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_916 {
    enum {
        InputEvent_916_Key_t,
        InputEvent_916_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_273  field0;
        } InputEvent_916_Key_s;
        struct {
            struct MouseEvent_917  field0;
        } InputEvent_916_Mouse_s;
    } stuff;
};

static struct InputEvent_916 InputEvent_916_Key (  struct Key_273  field0 ) {
    return ( struct InputEvent_916 ) { .tag = InputEvent_916_Key_t, .stuff = { .InputEvent_916_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_916 InputEvent_916_Mouse (  struct MouseEvent_917  field0 ) {
    return ( struct InputEvent_916 ) { .tag = InputEvent_916_Mouse_t, .stuff = { .InputEvent_916_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_915 {
    enum {
        Maybe_915_None_t,
        Maybe_915_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_916  field0;
        } Maybe_915_Just_s;
    } stuff;
};

static struct Maybe_915 Maybe_915_Just (  struct InputEvent_916  field0 ) {
    return ( struct Maybe_915 ) { .tag = Maybe_915_Just_t, .stuff = { .Maybe_915_Just_s = { .field0 = field0 } } };
};

struct envunion914 {
    struct Maybe_915  (*fun) (  struct env89*  ,    struct Tui_91 *  );
    struct env89 env;
};

struct env913 {
    struct Tui_91 *  tui4835;
    struct env89 envinst89;
};

struct envunion919 {
    struct Maybe_915  (*fun) (  struct env913*  );
    struct env913 env;
};

struct FunIter_912 {
    struct envunion919  f_fun;
    bool  f_finished;
};

static  struct FunIter_912   into_dash_iter920 (    struct FunIter_912  self1046 ) {
    return (  self1046 );
}

static  struct FunIter_912   from_dash_function921 (   struct envunion919  fun1054 ) {
    return ( (struct FunIter_912) { .f_fun = (  fun1054 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions926 (   struct env88* env ,    struct Tui_91 *  tui3635 ) {
    if ( ( ! ( * ( env->should_dash_resize3563 ) ) ) ) {
        return ( false );
    }
    (*  tui3635 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3563 ) = ( false );
    struct Tuple2_832  dim3636 = ( (  get_dash_dimensions833 ) ( ) );
    uint32_t  w3637 = ( (  fst866 ) ( (  dim3636 ) ) );
    uint32_t  h3638 = ( (  snd867 ) ( (  dim3636 ) ) );
    (*  tui3635 ) .f_width = (  w3637 );
    (*  tui3635 ) .f_height = (  h3638 );
    return ( true );
}

static  char   undefined929 (  ) {
    char  temp930;
    return (  temp930 );
}

struct Maybe_931 {
    enum {
        Maybe_931_None_t,
        Maybe_931_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_931_Just_s;
    } stuff;
};

static struct Maybe_931 Maybe_931_Just (  char  field0 ) {
    return ( struct Maybe_931 ) { .tag = Maybe_931_Just_t, .stuff = { .Maybe_931_Just_s = { .field0 = field0 } } };
};

struct Pollfd_933 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr934 (    struct Pollfd_933 *  p398 ) {
    return ( (struct pollfd * ) (  p398 ) );
}

static  void *   cast_dash_ptr937 (    char *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of938 (    char  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  char   zeroed935 (  ) {
    char  temp936;
    char  x641 = (  temp936 );
    ( ( memset ) ( ( (  cast_dash_ptr937 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of938 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  struct Maybe_931   read_dash_byte932 (    int32_t  timeout_dash_ms3557 ) {
    struct Pollfd_933  pfd3558 = ( (struct Pollfd_933) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral845 ( 1 ) ) , .f_revents = (  from_dash_integral845 ( 0 ) ) } );
    if ( (  cmp158 ( ( ( poll ) ( ( (  cast_dash_ptr934 ) ( ( & (  pfd3558 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3557 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_931) { .tag = Maybe_931_None_t } );
    }
    char  c3559 = ( ( (  zeroed935 ) ( ) ) );
    if ( (  cmp158 ( ( ( read ) ( ( (  stdin_dash_fileno749 ) ( ) ) ,  ( (  cast_dash_ptr937 ) ( ( & (  c3559 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_931) { .tag = Maybe_931_None_t } );
    }
    return ( ( Maybe_931_Just ) ( (  c3559 ) ) );
}

static  char   u8_dash_ascii939 (    uint8_t  b1484 ) {
    return ( ( (char ) (  b1484 ) ) );
}

static  uint8_t *   cast943 (    uint32_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed941 (    uint8_t  x644 ) {
    uint32_t  temp942 = ( (  zeroed849 ) ( ) );
    uint32_t *  y645 = ( &temp942 );
    uint8_t *  yp646 = ( (  cast943 ) ( (  y645 ) ) );
    (*  yp646 ) = (  x644 );
    return ( * (  y645 ) );
}

static  uint32_t   u8_dash_u32940 (    uint8_t  x749 ) {
    return ( (  cast_dash_on_dash_zeroed941 ) ( (  x749 ) ) );
}

struct Map_946 {
    struct StrViewIter_470  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_946 Map_946_Map (  struct StrViewIter_470  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_946 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_946   into_dash_iter947 (    struct Map_946  self797 ) {
    return (  self797 );
}

static  struct Maybe_758   next948 (    struct Map_946 *  dref799 ) {
    struct Maybe_300  dref802 = ( (  next475 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_758) { .tag = Maybe_758_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_300_Just_t ) {
            return ( ( Maybe_758_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_300_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce945 (    struct Map_946  iterable1111 ,    uint32_t  base1113 ,    uint32_t (*  fun1115 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1116 = (  base1113 );
    struct Map_946  it1117 = ( (  into_dash_iter947 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_758  dref1118 = ( (  next948 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_758_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_758_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_758_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp949 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp949);
    abort ( );
    ( Unit_8_Unit );
    uint32_t  temp950;
    return (  temp950 );
}

static  struct Map_946   map951 (    struct StrView_30  iterable806 ,    uint32_t (*  fun808 )(    struct Char_65  ) ) {
    struct StrViewIter_470  it809 = ( (  into_dash_iter473 ) ( (  iterable806 ) ) );
    return ( ( Map_946_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  uint8_t *   cast956 (    size_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  size_t   cast_dash_on_dash_zeroed954 (    uint8_t  x644 ) {
    size_t  temp955 = ( (  zeroed878 ) ( ) );
    size_t *  y645 = ( &temp955 );
    uint8_t *  yp646 = ( (  cast956 ) ( (  y645 ) ) );
    (*  yp646 ) = (  x644 );
    return ( * (  y645 ) );
}

static  size_t   u8_dash_size953 (    uint8_t  x740 ) {
    return ( (  cast_dash_on_dash_zeroed954 ) ( (  x740 ) ) );
}

struct StrConcat_959 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_959 StrConcat_959_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_959 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_958 {
    struct StrConcat_959  field0;
    struct StrView_30  field1;
};

static struct StrConcat_958 StrConcat_958_StrConcat (  struct StrConcat_959  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_958 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_963 {
    struct StrView_30  field0;
    struct StrConcat_958  field1;
};

static struct StrConcat_963 StrConcat_963_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_958  field1 ) {
    return ( struct StrConcat_963 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_962 {
    struct StrConcat_963  field0;
    struct Char_65  field1;
};

static struct StrConcat_962 StrConcat_962_StrConcat (  struct StrConcat_963  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_962 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str966 (    struct StrConcat_959  self1295 ) {
    struct StrConcat_959  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str338 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str965 (    struct StrConcat_958  self1295 ) {
    struct StrConcat_958  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str966 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str331 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str964 (    struct StrConcat_963  self1295 ) {
    struct StrConcat_963  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str965 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str961 (    struct StrConcat_962  self1295 ) {
    struct StrConcat_962  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str964 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic960 (    struct StrConcat_958  errmsg1336 ) {
    ( (  print_dash_str961 ) ( ( ( StrConcat_962_StrConcat ) ( ( ( StrConcat_963_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1336 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail957 (    struct Maybe_74  x1346 ,    struct StrConcat_958  errmsg1348 ) {
    struct Maybe_74  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_74_None_t ) {
        ( (  panic960 ) ( (  errmsg1348 ) ) );
        return ( (  undefined491 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_74_Just_t ) {
            return ( dref1349 .stuff .Maybe_74_Just_s .field0 );
        }
    }
}

static  enum Ordering_159   cmp968 (    struct Char_65  l1452 ,    struct Char_65  r1454 ) {
    if ( ( ( !  eq358 ( ( (  l1452 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq358 ( ( (  r1454 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp969 = ( (  from_dash_string57 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp969);
        abort ( );
        ( Unit_8_Unit );
    }
    return ( (  cmp310 ) ( ( (  char_dash_u8572 ) ( (  l1452 ) ) ) ,  ( (  char_dash_u8572 ) ( (  r1454 ) ) ) ) );
}

static  uint8_t   op_dash_sub970 (    uint8_t  l274 ,    uint8_t  r276 ) {
    return ( (  l274 ) - (  r276 ) );
}

static  uint8_t   op_dash_add971 (    uint8_t  l269 ,    uint8_t  r271 ) {
    return ( (  l269 ) + (  r271 ) );
}

static  struct Maybe_74   hex_dash_digit967 (    struct Char_65  c3119 ) {
    if ( ( (  cmp968 ( (  c3119 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp968 ( (  c3119 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_sub970 ( ( (  char_dash_u8572 ) ( (  c3119 ) ) ) , ( (  char_dash_u8572 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp968 ( (  c3119 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp968 ( (  c3119 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_add971 ( (  op_dash_sub970 ( ( (  char_dash_u8572 ) ( (  c3119 ) ) ) , ( (  char_dash_u8572 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral311 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp968 ( (  c3119 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp968 ( (  c3119 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_74_Just ) ( (  op_dash_add971 ( (  op_dash_sub970 ( ( (  char_dash_u8572 ) ( (  c3119 ) ) ) , ( (  char_dash_u8572 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral311 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
}

static  uint32_t   lam952 (    struct Char_65  c3124 ) {
    return ( (  from_dash_integral166 ) ( ( (  u8_dash_size953 ) ( ( (  or_dash_fail957 ) ( ( (  hex_dash_digit967 ) ( (  c3124 ) ) ) ,  ( ( StrConcat_958_StrConcat ) ( ( ( StrConcat_959_StrConcat ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ,  (  c3124 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam972 (    uint32_t  elem3126 ,    uint32_t  b3128 ) {
    return (  op_dash_add172 ( (  op_dash_mul168 ( (  b3128 ) , (  from_dash_integral166 ( 16 ) ) ) ) , (  elem3126 ) ) );
}

static  uint32_t   from_dash_hex944 (    struct StrView_30  arr3122 ) {
    return ( (  reduce945 ) ( ( (  map951 ) ( (  arr3122 ) ,  (  lam952 ) ) ) ,  (  from_dash_integral166 ( 0 ) ) ,  (  lam972 ) ) );
}

static  bool   eq974 (    char  l415 ,    char  r417 ) {
    return ( (  l415 ) == (  r417 ) );
}

struct Array_975 {
    char _arr [32];
};

static  void *   cast_dash_ptr979 (    struct Array_975 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of980 (    struct Array_975  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Array_975   zeroed977 (  ) {
    struct Array_975  temp978;
    struct Array_975  x641 = (  temp978 );
    ( ( memset ) ( ( (  cast_dash_ptr979 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of980 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  char *   cast_dash_ptr984 (    struct Array_975 *  p398 ) {
    return ( (char * ) (  p398 ) );
}

static  char *   offset_dash_ptr985 (    char *  x377 ,    int64_t  count379 ) {
    char  temp986;
    return ( (char * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp986 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr983 (    struct Array_975 *  arr2019 ,    size_t  i2022 ) {
    if ( ( (  cmp293 ( (  i2022 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2022 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2022 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2023 = ( ( (  cast_dash_ptr984 ) ( (  arr2019 ) ) ) );
    return ( (  offset_dash_ptr985 ) ( (  p2023 ) ,  ( (int64_t ) (  i2022 ) ) ) );
}

static  enum Unit_8   set982 (    struct Array_975 *  arr2032 ,    size_t  i2035 ,    char  e2037 ) {
    char *  p2038 = ( (  get_dash_ptr983 ) ( (  arr2032 ) ,  (  i2035 ) ) );
    (*  p2038 ) = (  e2037 );
    return ( Unit_8_Unit );
}

struct Slice_988 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail991 (    struct Maybe_931  x1346 ,    struct StrConcat_324  errmsg1348 ) {
    struct Maybe_931  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_931_None_t ) {
        ( (  panic326 ) ( (  errmsg1348 ) ) );
        return ( (  undefined929 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_931_Just_t ) {
            return ( dref1349 .stuff .Maybe_931_Just_s .field0 );
        }
    }
}

static  struct Maybe_931   try_dash_get992 (    struct Slice_988  slice2169 ,    size_t  i2171 ) {
    if ( ( (  cmp293 ( (  i2171 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2171 ) , ( (  slice2169 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_931) { .tag = Maybe_931_None_t } );
    }
    char *  elem_dash_ptr2172 = ( (  offset_dash_ptr985 ) ( ( (  slice2169 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2171 ) ) ) ) );
    return ( ( Maybe_931_Just ) ( ( * (  elem_dash_ptr2172 ) ) ) );
}

static  char   get990 (    struct Slice_988  slice2175 ,    size_t  i2177 ) {
    return ( (  or_dash_fail991 ) ( ( (  try_dash_get992 ) ( (  slice2175 ) ,  (  i2177 ) ) ) ,  ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2177 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2175 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get989 (    struct Slice_988  self2188 ,    size_t  idx2190 ) {
    return ( (  get990 ) ( (  self2188 ) ,  (  idx2190 ) ) );
}

struct Scanner_993 {
    struct StrViewIter_470  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_993   mk_dash_from_dash_str995 (    struct StrView_30  s3396 ) {
    return ( (struct Scanner_993) { .f_s = ( (  chars472 ) ( (  s3396 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_999 (    uint8_t *  x382 ,    size_t  count384 ) {
    return ( (  offset_dash_ptr303 ) ( (  x382 ) ,  ( (int64_t ) (  count384 ) ) ) );
}

static  struct StrView_30   substr996 (    struct StrView_30  s2589 ,    size_t  from2591 ,    size_t  to2593 ) {
    size_t  from_dash_bs2594 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_154  temp997 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( ( (  size_dash_i32332 ) ( (  from2591 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_156  __cond998 =  next157 (&temp997);
        if (  __cond998 .tag == 0 ) {
            break;
        }
        int32_t  dref2595 =  __cond998 .stuff .Maybe_156_Just_s .field0;
        if ( (  cmp293 ( (  from_dash_bs2594 ) , ( ( (  s2589 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2594 = (  op_dash_add314 ( (  from_dash_bs2594 ) , ( (  next_dash_char309 ) ( ( (  offset_dash_ptr_prime_999 ) ( ( ( (  s2589 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2594 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2596 = (  from_dash_bs2594 );
    struct RangeIter_154  temp1000 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( (  op_dash_sub165 ( ( (  size_dash_i32332 ) ( (  to2593 ) ) ) , ( (  size_dash_i32332 ) ( (  from2591 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_156  __cond1001 =  next157 (&temp1000);
        if (  __cond1001 .tag == 0 ) {
            break;
        }
        int32_t  dref2597 =  __cond1001 .stuff .Maybe_156_Just_s .field0;
        if ( (  cmp293 ( (  to_dash_bs2596 ) , ( ( (  s2589 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2596 = (  op_dash_add314 ( (  to_dash_bs2596 ) , ( (  next_dash_char309 ) ( ( (  offset_dash_ptr_prime_999 ) ( ( ( (  s2589 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2596 ) ) ) ) ) ) );
    }
    return ( (struct StrView_30) { .f_contents = ( (  subslice479 ) ( ( (  s2589 ) .f_contents ) ,  (  from_dash_bs2594 ) ,  (  to_dash_bs2596 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr1004 (    char *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   cast_dash_slice1003 (    struct Slice_988  s2347 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1004 ) ( ( (  s2347 ) .f_ptr ) ) ) , .f_count = ( (  s2347 ) .f_count ) } );
}

static  struct StrView_30   from_dash_ascii_dash_slice1002 (    struct Slice_988  sl2563 ) {
    return ( (struct StrView_30) { .f_contents = ( (  cast_dash_slice1003 ) ( (  sl2563 ) ) ) } );
}

struct Maybe_1005 {
    enum {
        Maybe_1005_None_t,
        Maybe_1005_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_1005_Just_s;
    } stuff;
};

static struct Maybe_1005 Maybe_1005_Just (  int64_t  field0 ) {
    return ( struct Maybe_1005 ) { .tag = Maybe_1005_Just_t, .stuff = { .Maybe_1005_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_1007 {
    struct Scanner_993  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_993   into_dash_iter1010 (    struct Scanner_993  self3387 ) {
    return (  self3387 );
}

static  struct Scanner_993   into_dash_iter1009 (    struct Scanner_993 *  self786 ) {
    return ( (  into_dash_iter1010 ) ( ( * (  self786 ) ) ) );
}

static  struct TakeWhile_1007   take_dash_while1008 (    struct Scanner_993 *  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1007) { .f_it = ( (  into_dash_iter1009 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  struct Char_65   min1013 (    struct Char_65  l1360 ,    struct Char_65  r1362 ) {
    if ( (  cmp968 ( (  l1360 ) , (  r1362 ) ) == 0 ) ) {
        return (  l1360 );
    } else {
        return (  r1362 );
    }
}

static  struct Char_65   max1014 (    struct Char_65  l1365 ,    struct Char_65  r1367 ) {
    if ( (  cmp968 ( (  l1365 ) , (  r1367 ) ) == 2 ) ) {
        return (  l1365 );
    } else {
        return (  r1367 );
    }
}

static  bool   between1012 (    struct Char_65  c1370 ,    struct Char_65  l1372 ,    struct Char_65  r1374 ) {
    struct Char_65  from1375 = ( (  min1013 ) ( (  l1372 ) ,  (  r1374 ) ) );
    struct Char_65  to1376 = ( (  max1014 ) ( (  l1372 ) ,  (  r1374 ) ) );
    return ( (  cmp968 ( (  from1375 ) , (  c1370 ) ) != 2 ) && (  cmp968 ( (  c1370 ) , (  to1376 ) ) != 2 ) );
}

static  bool   is_dash_digit1011 (    struct Char_65  c1499 ) {
    return ( (  eq358 ( ( (  c1499 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1012 ) ( (  c1499 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) ) );
}

static  struct Maybe_300   next1018 (    struct Scanner_993 *  self3382 ) {
    struct Maybe_300  dref3383 = ( (  next475 ) ( ( & ( ( * (  self3382 ) ) .f_s ) ) ) );
    if ( dref3383.tag == Maybe_300_Just_t ) {
        (*  self3382 ) .f_byte_dash_offset = (  op_dash_add314 ( ( ( * (  self3382 ) ) .f_byte_dash_offset ) , ( ( dref3383 .stuff .Maybe_300_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_300_Just ) ( ( dref3383 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref3383.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  struct Maybe_300   next1017 (    struct TakeWhile_1007 *  self982 ) {
    struct Maybe_300  mx983 = ( (  next1018 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_300  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_300_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_300_Just ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
            }
        }
    }
}

static  struct TakeWhile_1007   into_dash_iter1020 (    struct TakeWhile_1007  self979 ) {
    return (  self979 );
}

static  struct Maybe_300   head1016 (    struct TakeWhile_1007  it1160 ) {
    struct TakeWhile_1007  temp1019 = ( (  into_dash_iter1020 ) ( (  it1160 ) ) );
    return ( (  next1017 ) ( ( &temp1019 ) ) );
}

static  bool   null1015 (    struct TakeWhile_1007  it1169 ) {
    struct Maybe_300  dref1170 = ( (  head1016 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_300_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env1023 {
    struct Scanner_993 *  it1211;
    ;
};

struct envunion1024 {
    struct Maybe_300  (*fun) (  struct env1023*  ,    int32_t  );
    struct env1023 env;
};

static  enum Unit_8   for_dash_each1022 (    struct Range_151  iterable1092 ,   struct envunion1024  fun1094 ) {
    struct RangeIter_154  temp1025 = ( (  into_dash_iter155 ) ( (  iterable1092 ) ) );
    struct RangeIter_154 *  it1095 = ( &temp1025 );
    while ( ( true ) ) {
        struct Maybe_156  dref1096 = ( (  next157 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_156_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_156_Just_t ) {
                struct envunion1024  temp1026 = (  fun1094 );
                ( temp1026.fun ( &temp1026.env ,  ( dref1096 .stuff .Maybe_156_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_300   lam1027 (   struct env1023* env ,    int32_t  dref1214 ) {
    return ( (  next1018 ) ( ( env->it1211 ) ) );
}

static  enum Unit_8   drop_prime_1021 (    struct Scanner_993 *  it1211 ,    size_t  n1213 ) {
    struct env1023 envinst1023 = {
        .it1211 =  it1211 ,
    };
    ( (  for_dash_each1022 ) ( ( (  to164 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32332 ) ( (  n1213 ) ) ) ) ) ,  ( (struct envunion1024){ .fun = (  struct Maybe_300  (*) (  struct env1023*  ,    int32_t  ) )lam1027 , .env =  envinst1023 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce1029 (    struct TakeWhile_1007  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct TakeWhile_1007  it1117 = ( (  into_dash_iter1020 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next1017 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1030 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1030);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1031;
    return (  temp1031 );
}

static  size_t   lam1032 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add314 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1028 (    struct TakeWhile_1007  it1122 ) {
    return ( (  reduce1029 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1032 ) ) );
}

static  struct TakeWhile_1007   chars1034 (    struct TakeWhile_1007  self1882 ) {
    return (  self1882 );
}

static  struct Maybe_1005   reduce1035 (    struct TakeWhile_1007  iterable1111 ,    struct Maybe_1005  base1113 ,    struct Maybe_1005 (*  fun1115 )(    struct Char_65  ,    struct Maybe_1005  ) ) {
    struct Maybe_1005  x1116 = (  base1113 );
    struct TakeWhile_1007  it1117 = ( (  into_dash_iter1020 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next1017 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1036 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1036);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_1005  temp1037;
    return (  temp1037 );
}

static  void *   cast_dash_ptr1045 (    int32_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1046 (    int32_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  int32_t   zeroed1043 (  ) {
    int32_t  temp1044;
    int32_t  x641 = (  temp1044 );
    ( ( memset ) ( ( (  cast_dash_ptr1045 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1046 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  uint8_t *   cast1047 (    int32_t *  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1041 (    uint8_t  x644 ) {
    int32_t  temp1042 = ( (  zeroed1043 ) ( ) );
    int32_t *  y645 = ( &temp1042 );
    uint8_t *  yp646 = ( (  cast1047 ) ( (  y645 ) ) );
    (*  yp646 ) = (  x644 );
    return ( * (  y645 ) );
}

static  int32_t   u8_dash_i321040 (    uint8_t  x746 ) {
    return ( (  cast_dash_on_dash_zeroed1041 ) ( (  x746 ) ) );
}

static  struct Maybe_156   parse_dash_digit1039 (    struct Char_65  c1524 ) {
    if ( ( (  is_dash_digit1011 ) ( (  c1524 ) ) ) ) {
        return ( ( Maybe_156_Just ) ( ( (  u8_dash_i321040 ) ( (  op_dash_sub970 ( ( (  char_dash_u8572 ) ( (  c1524 ) ) ) , ( (  char_dash_u8572 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_156) { .tag = Maybe_156_None_t } );
    }
}

static  int64_t   i32_dash_i641048 (    int32_t  x677 ) {
    return ( (int64_t ) (  x677 ) );
}

static  struct Maybe_1005   sequence_dash_maybe1038 (    struct Char_65  e1928 ,    struct Maybe_1005  b1930 ) {
    struct Maybe_1005  dref1931 = (  b1930 );
    if ( dref1931.tag == Maybe_1005_None_t ) {
        return ( (struct Maybe_1005) { .tag = Maybe_1005_None_t } );
    }
    else {
        if ( dref1931.tag == Maybe_1005_Just_t ) {
            struct Maybe_156  dref1933 = ( (  parse_dash_digit1039 ) ( (  e1928 ) ) );
            if ( dref1933.tag == Maybe_156_None_t ) {
                return ( (struct Maybe_1005) { .tag = Maybe_1005_None_t } );
            }
            else {
                if ( dref1933.tag == Maybe_156_Just_t ) {
                    return ( ( Maybe_1005_Just ) ( (  op_dash_add487 ( (  op_dash_mul289 ( ( dref1931 .stuff .Maybe_1005_Just_s .field0 ) , (  from_dash_integral291 ( 10 ) ) ) ) , ( (  i32_dash_i641048 ) ( ( dref1933 .stuff .Maybe_156_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_1005   parse_dash_int1033 (    struct TakeWhile_1007  s1925 ) {
    struct TakeWhile_1007  cs1935 = ( (  chars1034 ) ( (  s1925 ) ) );
    struct Maybe_300  dref1936 = ( (  head1016 ) ( (  cs1935 ) ) );
    if ( dref1936.tag == Maybe_300_Just_t ) {
        return ( (  reduce1035 ) ( (  cs1935 ) ,  ( ( Maybe_1005_Just ) ( (  from_dash_integral291 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1038 ) ) );
    }
    else {
        if ( dref1936.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_1005) { .tag = Maybe_1005_None_t } );
        }
    }
}

static  struct Maybe_1005   scan_dash_int1006 (    struct Scanner_993 *  sc3402 ) {
    struct TakeWhile_1007  digit_dash_chars3403 = ( (  take_dash_while1008 ) ( (  sc3402 ) ,  (  is_dash_digit1011 ) ) );
    if ( ( (  null1015 ) ( (  digit_dash_chars3403 ) ) ) ) {
        return ( (struct Maybe_1005) { .tag = Maybe_1005_None_t } );
    }
    ( (  drop_prime_1021 ) ( (  sc3402 ) ,  ( (  count1028 ) ( (  digit_dash_chars3403 ) ) ) ) );
    return ( (  parse_dash_int1033 ) ( (  digit_dash_chars3403 ) ) );
}

static  int32_t   i64_dash_i321050 (    int64_t  x692 ) {
    return ( (int32_t ) (  x692 ) );
}

struct StrConcat_1052 {
    struct StrView_30  field0;
    int64_t  field1;
};

static struct StrConcat_1052 StrConcat_1052_StrConcat (  struct StrView_30  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_1052 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1054 {
    struct StrView_30  field0;
    struct StrConcat_1052  field1;
};

static struct StrConcat_1054 StrConcat_1054_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_1052  field1 ) {
    return ( struct StrConcat_1054 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1056 {
    struct StrConcat_1054  field0;
    struct Char_65  field1;
};

static struct StrConcat_1056 StrConcat_1056_StrConcat (  struct StrConcat_1054  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1056 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1061 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1060 {
    struct StrViewIter_470  f_left;
    struct IntStrIter_1061  f_right;
};

struct StrConcatIter_1059 {
    struct StrViewIter_470  f_left;
    struct StrConcatIter_1060  f_right;
};

enum EmptyIter_1063 {
    EmptyIter_1063_EmptyIter,
};

struct AppendIter_1062 {
    enum EmptyIter_1063  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

struct StrConcatIter_1058 {
    struct StrConcatIter_1059  f_left;
    struct AppendIter_1062  f_right;
};

static  struct StrConcatIter_1058   into_dash_iter1065 (    struct StrConcatIter_1058  self1283 ) {
    return (  self1283 );
}

struct env1072 {
    ;
    int64_t  base1379;
};

struct envunion1073 {
    int64_t  (*fun) (  struct env1072*  ,    int32_t  ,    int64_t  );
    struct env1072 env;
};

static  int64_t   reduce1071 (    struct Range_151  iterable1111 ,    int64_t  base1113 ,   struct envunion1073  fun1115 ) {
    int64_t  x1116 = (  base1113 );
    struct RangeIter_154  it1117 = ( (  into_dash_iter155 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_156  dref1118 = ( (  next157 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_156_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_156_Just_t ) {
                struct envunion1073  temp1074 = (  fun1115 );
                x1116 = ( temp1074.fun ( &temp1074.env ,  ( dref1118 .stuff .Maybe_156_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1075 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1075);
    abort ( );
    ( Unit_8_Unit );
    int64_t  temp1076;
    return (  temp1076 );
}

static  int64_t   lam1077 (   struct env1072* env ,    int32_t  item1383 ,    int64_t  x1385 ) {
    return (  op_dash_mul289 ( (  x1385 ) , ( env->base1379 ) ) );
}

static  int64_t   pow1070 (    int64_t  base1379 ,    int32_t  p1381 ) {
    struct env1072 envinst1072 = {
        .base1379 =  base1379 ,
    };
    return ( (  reduce1071 ) ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( (  p1381 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral291 ( 1 ) ) ,  ( (struct envunion1073){ .fun = (  int64_t  (*) (  struct env1072*  ,    int32_t  ,    int64_t  ) )lam1077 , .env =  envinst1072 } ) ) );
}

static  int64_t   op_dash_div1078 (    int64_t  l218 ,    int64_t  r220 ) {
    return ( (  l218 ) / (  r220 ) );
}

static  uint8_t   cast1079 (    int64_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  int64_t   op_dash_sub1080 (    int64_t  l208 ,    int64_t  r210 ) {
    return ( (  l208 ) - (  r210 ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1082 (    uint8_t *  ptr779 ,    uint8_t  b781 ) {
    size_t  s782 = ( ( (size_t ) (  ptr779 ) ) );
    size_t  exp783 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add314 ( (  op_dash_sub292 ( (  s782 ) , ( (  u8_dash_size953 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer345 ) ( (  ptr779 ) ) ) ) ) ) ) , (  op_dash_mul416 ( (  exp783 ) , ( (  u8_dash_size953 ) ( (  b781 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1083 (    size_t  x395 ) {
    return ( (uint8_t * ) (  x395 ) );
}

static  struct Char_65   char_dash_from_dash_u81081 (    uint8_t  b1270 ) {
    uint8_t *  ptr1271 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1082 ) ( ( ( (  cast1083 ) ( ( (  u8_dash_size953 ) ( (  b1270 ) ) ) ) ) ) ,  (  from_dash_integral311 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr1271 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_300   next1069 (    struct IntStrIter_1061 *  self1392 ) {
    if ( ( ( * (  self1392 ) ) .f_negative ) ) {
        (*  self1392 ) .f_negative = ( false );
        return ( ( Maybe_300_Just ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp158 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    int64_t  trim_dash_down1393 = ( (  pow1070 ) ( (  from_dash_integral291 ( 10 ) ) ,  (  op_dash_sub165 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1394 = (  op_dash_div1078 ( ( ( * (  self1392 ) ) .f_int ) , (  trim_dash_down1393 ) ) );
    int64_t  upper_dash_mask1395 = (  op_dash_mul289 ( (  op_dash_div1078 ( (  upper1394 ) , (  from_dash_integral291 ( 10 ) ) ) ) , (  from_dash_integral291 ( 10 ) ) ) );
    uint8_t  digit1396 = ( ( (  cast1079 ) ( (  op_dash_sub1080 ( (  upper1394 ) , (  upper_dash_mask1395 ) ) ) ) ) );
    (*  self1392 ) .f_len = (  op_dash_sub165 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1397 = ( (  char_dash_from_dash_u81081 ) ( (  op_dash_add971 ( (  digit1396 ) , (  from_dash_integral311 ( 48 ) ) ) ) ) );
    return ( ( Maybe_300_Just ) ( (  digit_dash_char1397 ) ) );
}

static  struct Maybe_300   next1068 (    struct StrConcatIter_1060 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1069 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next1067 (    struct StrConcatIter_1059 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1068 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next1085 (    enum EmptyIter_1063 *  dref793 ) {
    return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
}

static  struct Maybe_300   next1084 (    struct AppendIter_1062 *  self1040 ) {
    struct Maybe_300  dref1041 = ( (  next1085 ) ( ( & ( ( * (  self1040 ) ) .f_it ) ) ) );
    if ( dref1041.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1041 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1041.tag == Maybe_300_None_t ) {
            if ( ( ! ( ( * (  self1040 ) ) .f_appended ) ) ) {
                (*  self1040 ) .f_appended = ( true );
                return ( ( Maybe_300_Just ) ( ( ( * (  self1040 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  struct Maybe_300   next1066 (    struct StrConcatIter_1058 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next1067 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1057 (    struct StrConcatIter_1058  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrConcatIter_1058  temp1064 = ( (  into_dash_iter1065 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_1058 *  it1095 = ( &temp1064 );
    while ( ( true ) ) {
        struct Maybe_300  dref1096 = ( (  next1066 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_300_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_159   cmp1094 (    int64_t  l163 ,    int64_t  r165 ) {
    return ( builtin_int64_tcmp( (  l163 ) , (  r165 ) ) );
}

static  int64_t   op_dash_neg1095 (    int64_t  l223 ) {
    return ( (  from_dash_integral291 ( 0 ) ) - (  l223 ) );
}

static  bool   eq1097 (    int64_t  l110 ,    int64_t  r112 ) {
    return ( (  l110 ) == (  r112 ) );
}

static  int32_t   count_dash_digits1096 (    int64_t  self1400 ) {
    if ( (  eq1097 ( (  self1400 ) , (  from_dash_integral291 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1401 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp1094 ( (  self1400 ) , (  from_dash_integral291 ( 0 ) ) ) == 2 ) ) {
        self1400 = (  op_dash_div1078 ( (  self1400 ) , (  from_dash_integral291 ( 10 ) ) ) );
        digits1401 = (  op_dash_add160 ( (  digits1401 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1401 );
}

static  struct IntStrIter_1061   int_dash_iter1093 (    int64_t  int1404 ) {
    if ( (  cmp1094 ( (  int1404 ) , (  from_dash_integral291 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1061) { .f_int = (  op_dash_neg1095 ( (  int1404 ) ) ) , .f_len = ( (  count_dash_digits1096 ) ( (  op_dash_neg1095 ( (  int1404 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1061) { .f_int = (  int1404 ) , .f_len = ( (  count_dash_digits1096 ) ( (  int1404 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1061   chars1092 (    int64_t  self1801 ) {
    return ( (  int_dash_iter1093 ) ( (  self1801 ) ) );
}

static  struct StrConcatIter_1060   into_dash_iter1091 (    struct StrConcat_1052  dref1290 ) {
    return ( (struct StrConcatIter_1060) { .f_left = ( (  chars472 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1092 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_1060   chars1090 (    struct StrConcat_1052  self1301 ) {
    return ( (  into_dash_iter1091 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_1059   into_dash_iter1089 (    struct StrConcat_1054  dref1290 ) {
    return ( (struct StrConcatIter_1059) { .f_left = ( (  chars472 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1090 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_1059   chars1088 (    struct StrConcat_1054  self1301 ) {
    return ( (  into_dash_iter1089 ) ( (  self1301 ) ) );
}

static  enum EmptyIter_1063   into_dash_iter1102 (    enum EmptyIter_1063  self791 ) {
    return (  self791 );
}

static  struct AppendIter_1062   append1101 (    enum EmptyIter_1063  it1024 ,    struct Char_65  e1026 ) {
    return ( (struct AppendIter_1062) { .f_it = ( (  into_dash_iter1102 ) ( (  it1024 ) ) ) , .f_elem = (  e1026 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_1062   cons1100 (    enum EmptyIter_1063  it1029 ,    struct Char_65  e1031 ) {
    return ( (  append1101 ) ( (  it1029 ) ,  (  e1031 ) ) );
}

static  enum EmptyIter_1063   nil1103 (  ) {
    return ( EmptyIter_1063_EmptyIter );
}

static  struct AppendIter_1062   single1099 (    struct Char_65  e1034 ) {
    return ( (  cons1100 ) ( ( (  nil1103 ) ( ) ) ,  (  e1034 ) ) );
}

static  struct AppendIter_1062   chars1098 (    struct Char_65  self1279 ) {
    return ( (  single1099 ) ( (  self1279 ) ) );
}

static  struct StrConcatIter_1058   into_dash_iter1087 (    struct StrConcat_1056  dref1290 ) {
    return ( (struct StrConcatIter_1058) { .f_left = ( (  chars1088 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1098 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_1058   chars1086 (    struct StrConcat_1056  self1301 ) {
    return ( (  into_dash_iter1087 ) ( (  self1301 ) ) );
}

static  enum Unit_8   print1055 (    struct StrConcat_1056  s1328 ) {
    ( (  for_dash_each1057 ) ( ( (  chars1086 ) ( (  s1328 ) ) ) ,  (  printf_dash_char339 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1053 (    struct StrConcat_1054  s1331 ) {
    ( (  print1055 ) ( ( ( StrConcat_1056_StrConcat ) ( (  s1331 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_918   undefined1104 (  ) {
    enum MouseButton_918  temp1105;
    return (  temp1105 );
}

static  enum MouseButton_918   panic_prime_1051 (    struct StrConcat_1052  errmsg2142 ) {
    ( (  println1053 ) ( ( ( StrConcat_1054_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg2142 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1104 ) ( ) );
}

static  enum MouseButton_918   btn_dash_to_dash_mouse_dash_button1049 (    int64_t  btn3595 ) {
    return ( {  int32_t  dref3596 = ( (  i64_dash_i321050 ) ( (  btn3595 ) ) ) ;  eq597 (  dref3596 ,  from_dash_integral56 ( 0 ) ) ? ( MouseButton_918_MouseLeft ) :  eq597 (  dref3596 ,  from_dash_integral56 ( 1 ) ) ? ( MouseButton_918_MouseMiddle ) :  eq597 (  dref3596 ,  from_dash_integral56 ( 2 ) ) ? ( MouseButton_918_MouseRight ) :  eq597 (  dref3596 ,  from_dash_integral56 ( 64 ) ) ? ( MouseButton_918_ScrollUp ) :  eq597 (  dref3596 ,  from_dash_integral56 ( 65 ) ) ? ( MouseButton_918_ScrollDown ) : ( (  panic_prime_1051 ) ( ( ( StrConcat_1052_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3595 ) ) ) ) ) ; } );
}

static  struct Scanner_993   mk1107 (    struct StrView_30  s3390 ) {
    return ( (struct Scanner_993) { .f_s = ( (  into_dash_iter473 ) ( (  s3390 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_915   parse_dash_csi987 (    struct Slice_988  seq3602 ) {
    if ( (  eq358 ( ( (  seq3602 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
    }
    char  last3603 = (  elem_dash_get989 ( (  seq3602 ) , (  op_dash_sub292 ( ( (  seq3602 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq974 ( (  elem_dash_get989 ( (  seq3602 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) && ( (  eq974 ( (  last3603 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) || (  eq974 ( (  last3603 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_993  temp994 = ( (  mk_dash_from_dash_str995 ) ( ( (  substr996 ) ( ( (  from_dash_ascii_dash_slice1002 ) ( (  seq3602 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3602 ) .f_count ) ) ) ) );
        struct Scanner_993 *  sc3604 = ( &temp994 );
        struct Maybe_1005  dref3605 = ( (  scan_dash_int1006 ) ( (  sc3604 ) ) );
        if ( dref3605.tag == Maybe_1005_None_t ) {
            return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
        }
        else {
            if ( dref3605.tag == Maybe_1005_Just_t ) {
                ( (  next1018 ) ( (  sc3604 ) ) );
                struct Maybe_1005  dref3607 = ( (  scan_dash_int1006 ) ( (  sc3604 ) ) );
                if ( dref3607.tag == Maybe_1005_None_t ) {
                    return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
                }
                else {
                    if ( dref3607.tag == Maybe_1005_Just_t ) {
                        ( (  next1018 ) ( (  sc3604 ) ) );
                        struct Maybe_1005  dref3609 = ( (  scan_dash_int1006 ) ( (  sc3604 ) ) );
                        if ( dref3609.tag == Maybe_1005_None_t ) {
                            return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
                        }
                        else {
                            if ( dref3609.tag == Maybe_1005_Just_t ) {
                                return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Mouse ) ( ( (struct MouseEvent_917) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1049 ) ( ( dref3605 .stuff .Maybe_1005_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub165 ( ( (  i64_dash_i321050 ) ( ( dref3607 .stuff .Maybe_1005_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub165 ( ( (  i64_dash_i321050 ) ( ( dref3609 .stuff .Maybe_1005_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq974 ( (  last3603 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq358 ( ( (  seq3602 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq974 ( (  last3603 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Up_t } ) ) ) ) );
        }
        if ( (  eq974 ( (  last3603 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Down_t } ) ) ) ) );
        }
        if ( (  eq974 ( (  last3603 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Right_t } ) ) ) ) );
        }
        if ( (  eq974 ( (  last3603 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Left_t } ) ) ) ) );
        }
        if ( (  eq974 ( (  last3603 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Home_t } ) ) ) ) );
        }
        if ( (  eq974 ( (  last3603 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
    }
    if ( (  eq974 ( (  last3603 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_993  temp1106 = ( (  mk1107 ) ( ( (  from_dash_ascii_dash_slice1002 ) ( (  seq3602 ) ) ) ) );
        struct Scanner_993 *  sc3611 = ( &temp1106 );
        struct Maybe_1005  dref3612 = ( (  scan_dash_int1006 ) ( (  sc3611 ) ) );
        if ( dref3612.tag == Maybe_1005_None_t ) {
            return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
        }
        else {
            if ( dref3612.tag == Maybe_1005_Just_t ) {
                return ( {  int32_t  dref3614 = ( (  i64_dash_i321050 ) ( ( dref3612 .stuff .Maybe_1005_Just_s .field0 ) ) ) ;  eq597 (  dref3614 ,  from_dash_integral56 ( 1 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Home_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 2 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Insert_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 3 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Delete_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 4 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_End_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 5 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_PageUp_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 6 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_PageDown_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 15 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_F5_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 17 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_F6_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 18 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_F7_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 19 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_F8_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 20 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_F9_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 21 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_F10_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 23 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_F11_t } ) ) ) ) ) :  eq597 (  dref3614 ,  from_dash_integral56 ( 24 ) ) ? ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_F12_t } ) ) ) ) ) : ( (struct Maybe_915) { .tag = Maybe_915_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
}

static  struct Slice_988   subslice1108 (    struct Slice_988  slice2197 ,    size_t  from2199 ,    size_t  to2201 ) {
    char *  begin_dash_ptr2202 = ( (  offset_dash_ptr985 ) ( ( (  slice2197 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  from2199 ) ) ) ) );
    if ( ( (  cmp293 ( (  from2199 ) , (  to2201 ) ) != 0 ) || (  cmp293 ( (  from2199 ) , ( (  slice2197 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_988) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2203 = (  op_dash_sub292 ( ( (  min480 ) ( (  to2201 ) ,  ( (  slice2197 ) .f_count ) ) ) , (  from2199 ) ) );
    return ( (struct Slice_988) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  count2203 ) } );
}

static  char *   cast1110 (    struct Array_975 *  x395 ) {
    return ( (char * ) (  x395 ) );
}

static  struct Slice_988   as_dash_slice1109 (    struct Array_975 *  arr2045 ) {
    return ( (struct Slice_988) { .f_ptr = ( (  cast1110 ) ( (  arr2045 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1112 {
    enum {
        Maybe_1112_None_t,
        Maybe_1112_Just_t,
    } tag;
    union {
        struct {
            struct Key_273  field0;
        } Maybe_1112_Just_s;
    } stuff;
};

static struct Maybe_1112 Maybe_1112_Just (  struct Key_273  field0 ) {
    return ( struct Maybe_1112 ) { .tag = Maybe_1112_Just_t, .stuff = { .Maybe_1112_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1112   parse_dash_ss31113 (    char  c3599 ) {
    if ( (  eq974 ( (  c3599 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1112_Just ) ( ( (struct Key_273) { .tag = Key_273_Up_t } ) ) );
    }
    if ( (  eq974 ( (  c3599 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1112_Just ) ( ( (struct Key_273) { .tag = Key_273_Down_t } ) ) );
    }
    if ( (  eq974 ( (  c3599 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1112_Just ) ( ( (struct Key_273) { .tag = Key_273_Right_t } ) ) );
    }
    if ( (  eq974 ( (  c3599 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1112_Just ) ( ( (struct Key_273) { .tag = Key_273_Left_t } ) ) );
    }
    if ( (  eq974 ( (  c3599 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1112_Just ) ( ( (struct Key_273) { .tag = Key_273_Home_t } ) ) );
    }
    if ( (  eq974 ( (  c3599 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1112_Just ) ( ( (struct Key_273) { .tag = Key_273_End_t } ) ) );
    }
    if ( (  eq974 ( (  c3599 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1112_Just ) ( ( (struct Key_273) { .tag = Key_273_F1_t } ) ) );
    }
    if ( (  eq974 ( (  c3599 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1112_Just ) ( ( (struct Key_273) { .tag = Key_273_F2_t } ) ) );
    }
    if ( (  eq974 ( (  c3599 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1112_Just ) ( ( (struct Key_273) { .tag = Key_273_F3_t } ) ) );
    }
    if ( (  eq974 ( (  c3599 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1112_Just ) ( ( (struct Key_273) { .tag = Key_273_F4_t } ) ) );
    }
    return ( (struct Maybe_1112) { .tag = Maybe_1112_None_t } );
}

static  struct Maybe_915   read_dash_key927 (  ) {
    char  temp928 = ( (  undefined929 ) ( ) );
    char *  ch3616 = ( &temp928 );
    struct Maybe_931  dref3617 = ( (  read_dash_byte932 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3617.tag == Maybe_931_None_t ) {
        return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
    }
    else {
        if ( dref3617.tag == Maybe_931_Just_t ) {
            (*  ch3616 ) = ( dref3617 .stuff .Maybe_931_Just_s .field0 );
        }
    }
    if ( (  eq306 ( ( (  ascii_dash_u8494 ) ( ( * (  ch3616 ) ) ) ) , (  from_dash_integral311 ( 13 ) ) ) ) ) {
        return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Enter_t } ) ) ) ) );
    }
    if ( (  eq306 ( ( (  ascii_dash_u8494 ) ( ( * (  ch3616 ) ) ) ) , (  from_dash_integral311 ( 127 ) ) ) ) ) {
        return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp310 ( ( (  ascii_dash_u8494 ) ( ( * (  ch3616 ) ) ) ) , (  from_dash_integral311 ( 27 ) ) ) == 0 ) && ( !  eq306 ( ( (  ascii_dash_u8494 ) ( ( * (  ch3616 ) ) ) ) , (  from_dash_integral311 ( 9 ) ) ) ) ) ) {
        char  letter3619 = ( (  u8_dash_ascii939 ) ( ( (  u32_dash_u8145 ) ( ( (  u32_dash_or767 ) ( ( (  u8_dash_u32940 ) ( ( (  ascii_dash_u8494 ) ( ( * (  ch3616 ) ) ) ) ) ) ,  ( (  from_dash_hex944 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( ( Key_273_Ctrl ) ( (  letter3619 ) ) ) ) ) ) );
    }
    if ( ( !  eq306 ( ( (  ascii_dash_u8494 ) ( ( * (  ch3616 ) ) ) ) , (  from_dash_integral311 ( 27 ) ) ) ) ) {
        if ( (  cmp310 ( ( (  ascii_dash_u8494 ) ( ( * (  ch3616 ) ) ) ) , (  from_dash_integral311 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key927 ) ( ) );
        } else {
            return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( ( Key_273_Char ) ( ( * (  ch3616 ) ) ) ) ) ) ) );
        }
    }
    char  temp973 = ( (  undefined929 ) ( ) );
    char *  ch23620 = ( &temp973 );
    struct Maybe_931  dref3621 = ( (  read_dash_byte932 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3621.tag == Maybe_931_None_t ) {
        return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3621.tag == Maybe_931_Just_t ) {
            (*  ch23620 ) = ( dref3621 .stuff .Maybe_931_Just_s .field0 );
        }
    }
    if ( (  eq974 ( ( * (  ch23620 ) ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_975  temp976 = ( ( (  zeroed977 ) ( ) ) );
        struct Array_975 *  seq3623 = ( &temp976 );
        int32_t  slen3624 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp158 ( (  slen3624 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp981 = ( (  undefined929 ) ( ) );
            char *  sc3625 = ( &temp981 );
            struct Maybe_931  dref3626 = ( (  read_dash_byte932 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3626.tag == Maybe_931_None_t ) {
                break;
            }
            else {
                if ( dref3626.tag == Maybe_931_Just_t ) {
                    (*  sc3625 ) = ( dref3626 .stuff .Maybe_931_Just_s .field0 );
                }
            }
            ( (  set982 ) ( (  seq3623 ) ,  ( (  i32_dash_size423 ) ( (  slen3624 ) ) ) ,  ( * (  sc3625 ) ) ) );
            slen3624 = (  op_dash_add160 ( (  slen3624 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp310 ( ( (  ascii_dash_u8494 ) ( ( * (  sc3625 ) ) ) ) , (  from_dash_integral311 ( 64 ) ) ) != 0 ) && (  cmp310 ( ( (  ascii_dash_u8494 ) ( ( * (  sc3625 ) ) ) ) , (  from_dash_integral311 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi987 ) ( ( (  subslice1108 ) ( ( (  as_dash_slice1109 ) ( (  seq3623 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size423 ) ( (  slen3624 ) ) ) ) ) ) );
    }
    if ( (  eq974 ( ( * (  ch23620 ) ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1111 = ( (  undefined929 ) ( ) );
        char *  sc3628 = ( &temp1111 );
        struct Maybe_931  dref3629 = ( (  read_dash_byte932 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3629.tag == Maybe_931_None_t ) {
            return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3629.tag == Maybe_931_Just_t ) {
                (*  sc3628 ) = ( dref3629 .stuff .Maybe_931_Just_s .field0 );
            }
        }
        struct Maybe_1112  dref3631 = ( (  parse_dash_ss31113 ) ( ( * (  sc3628 ) ) ) );
        if ( dref3631.tag == Maybe_1112_None_t ) {
            return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
        }
        else {
            if ( dref3631.tag == Maybe_1112_Just_t ) {
                return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( dref3631 .stuff .Maybe_1112_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_915_Just ) ( ( ( InputEvent_916_Key ) ( ( (struct Key_273) { .tag = Key_273_Escape_t } ) ) ) ) );
}

static  struct Maybe_915   read_dash_event924 (   struct env89* env ,    struct Tui_91 *  tui3641 ) {
    struct envunion90  temp925 = ( (struct envunion90){ .fun = (  bool  (*) (  struct env88*  ,    struct Tui_91 *  ) )update_dash_dimensions926 , .env =  env->envinst88 } );
    ( temp925.fun ( &temp925.env ,  (  tui3641 ) ) );
    struct Maybe_915  dref3642 = ( (  read_dash_key927 ) ( ) );
    if ( dref3642.tag == Maybe_915_None_t ) {
        return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
    }
    else {
        if ( dref3642.tag == Maybe_915_Just_t ) {
            (*  tui3641 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_915_Just ) ( ( dref3642 .stuff .Maybe_915_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_915   lam922 (   struct env913* env ) {
    struct envunion914  temp923 = ( (struct envunion914){ .fun = (  struct Maybe_915  (*) (  struct env89*  ,    struct Tui_91 *  ) )read_dash_event924 , .env =  env->envinst89 } );
    return ( temp923.fun ( &temp923.env ,  ( env->tui4835 ) ) );
}

static  struct Maybe_915   next1115 (    struct FunIter_912 *  self1049 ) {
    if ( ( ( * (  self1049 ) ) .f_finished ) ) {
        return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
    }
    struct envunion919  temp1116 = ( ( * (  self1049 ) ) .f_fun );
    struct Maybe_915  dref1050 = ( temp1116.fun ( &temp1116.env ) );
    if ( dref1050.tag == Maybe_915_Just_t ) {
        return ( ( Maybe_915_Just ) ( ( dref1050 .stuff .Maybe_915_Just_s .field0 ) ) );
    }
    else {
        if ( dref1050.tag == Maybe_915_None_t ) {
            (*  self1049 ) .f_finished = ( true );
            return ( (struct Maybe_915) { .tag = Maybe_915_None_t } );
        }
    }
}

struct env1119 {
    ;
    struct Editor_251 *  ed4685;
};

struct envunion1120 {
    enum Unit_8  (*fun) (  struct env1119*  ,    struct StrView_30  );
    struct env1119 env;
};

static  enum Unit_8   if_dash_just1118 (    struct Maybe_85  x1594 ,   struct envunion1120  fun1596 ) {
    struct Maybe_85  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_85_Just_t ) {
        struct envunion1120  temp1121 = (  fun1596 );
        ( temp1121.fun ( &temp1121.env ,  ( dref1597 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1122 (   struct env1119* env ,    struct StrView_30  msg4687 ) {
    ( (  free586 ) ( (  msg4687 ) ,  ( ( * ( env->ed4685 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1117 (    struct Editor_251 *  ed4685 ) {
    struct env1119 envinst1119 = {
        .ed4685 =  ed4685 ,
    };
    ( (  if_dash_just1118 ) ( ( ( * (  ed4685 ) ) .f_msg ) ,  ( (struct envunion1120){ .fun = (  enum Unit_8  (*) (  struct env1119*  ,    struct StrView_30  ) )lam1122 , .env =  envinst1119 } ) ) );
    (*  ed4685 ) .f_msg = ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1124 {
    enum Unit_8  (*fun) (  struct env267*  ,    struct Editor_251 *  ,    struct Key_273  );
    struct env267 env;
};

enum CursorMovement_1130 {
    CursorMovement_1130_NoChanges,
    CursorMovement_1130_UpdateVI,
    CursorMovement_1130_OverrideSelect,
};

struct Tuple2_1132 {
    enum CursorMovement_1130  field0;
    enum CursorMovement_1130  field1;
};

static struct Tuple2_1132 Tuple2_1132_Tuple2 (  enum CursorMovement_1130  field0 ,  enum CursorMovement_1130  field1 ) {
    return ( struct Tuple2_1132 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1131 (    enum CursorMovement_1130  l4423 ,    enum CursorMovement_1130  r4425 ) {
    return ( {  struct Tuple2_1132  dref4426 = ( ( Tuple2_1132_Tuple2 ) ( (  l4423 ) ,  (  r4425 ) ) ) ;  dref4426 .field0 == CursorMovement_1130_NoChanges &&  dref4426 .field1 == CursorMovement_1130_NoChanges ? ( true ) :  dref4426 .field0 == CursorMovement_1130_UpdateVI &&  dref4426 .field1 == CursorMovement_1130_UpdateVI ? ( true ) :  dref4426 .field0 == CursorMovement_1130_OverrideSelect &&  dref4426 .field1 == CursorMovement_1130_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_30   from_dash_bytes1136 (    struct Slice_14  sl2566 ) {
    return ( (struct StrView_30) { .f_contents = (  sl2566 ) } );
}

static  struct StrView_30   line1135 (    struct TextBuf_104 *  self3930 ,    int32_t  li3932 ) {
    return ( (  from_dash_bytes1136 ) ( ( (  to_dash_slice605 ) ( ( ( (  get603 ) ( ( & ( ( * (  self3930 ) ) .f_buf ) ) ,  ( (  i32_dash_size423 ) ( (  li3932 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe1139 (    struct Maybe_85  x1585 ,    int32_t (*  fun1587 )(    struct StrView_30  ) ,    int32_t  default1589 ) {
    return ( {  struct Maybe_85  dref1590 = (  x1585 ) ; dref1590.tag == Maybe_85_Just_t ? ( (  fun1587 ) ( ( dref1590 .stuff .Maybe_85_Just_s .field0 ) ) ) : (  default1589 ) ; } );
}

static  struct Maybe_85   char_dash_replacement1140 (    struct Char_65  c4303 ) {
    if ( (  eq482 ( (  c4303 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_85_Just ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
}

static  size_t   reduce1143 (    struct StrViewIter_470  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct StrViewIter_470  it1117 = ( (  into_dash_iter471 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next475 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1144 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1144);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1145;
    return (  temp1145 );
}

static  size_t   lam1146 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add314 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1142 (    struct StrViewIter_470  it1122 ) {
    return ( (  reduce1143 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1146 ) ) );
}

static  int32_t   lam1141 (    struct StrView_30  s4308 ) {
    return ( (  size_dash_i32332 ) ( ( (  count1142 ) ( ( (  chars472 ) ( (  s4308 ) ) ) ) ) ) );
}

static  int32_t   max1148 (    int32_t  l1365 ,    int32_t  r1367 ) {
    if ( (  cmp158 ( (  l1365 ) , (  r1367 ) ) == 2 ) ) {
        return (  l1365 );
    } else {
        return (  r1367 );
    }
}

static  void *   cast_dash_ptr1154 (    wchar_t *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1155 (    wchar_t  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  wchar_t   zeroed1152 (  ) {
    wchar_t  temp1153;
    wchar_t  x641 = (  temp1153 );
    ( ( memset ) ( ( (  cast_dash_ptr1154 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1155 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  char *   cast_dash_ptr1156 (    uint8_t *  p398 ) {
    return ( (char * ) (  p398 ) );
}

static  size_t   cast1157 (    int64_t  x395 ) {
    return ( (size_t ) (  x395 ) );
}

struct TypeSize_1160 {
    size_t  f_size;
};

static  struct TypeSize_1160   get_dash_typesize1159 (  ) {
    wchar_t  temp1161;
    return ( (struct TypeSize_1160) { .f_size = ( sizeof( ( (  temp1161 ) ) ) ) } );
}

static  wchar_t   cast1163 (    uint32_t  x395 ) {
    return ( (wchar_t ) (  x395 ) );
}

static  wchar_t   to_dash_c_dash_wchar1150 (    struct Char_65  c1464 ) {
    struct CharDestructured_342  dref1465 = ( (  destructure344 ) ( (  c1464 ) ) );
    if ( dref1465.tag == CharDestructured_342_Ref_t ) {
        wchar_t  temp1151 = ( (  zeroed1152 ) ( ) );
        wchar_t *  wcp1467 = ( &temp1151 );
        size_t  num_dash_chars1468 = ( ( mbstowcs ) ( (  wcp1467 ) ,  ( (  cast_dash_ptr1156 ) ( ( ( dref1465 .stuff .CharDestructured_342_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq358 ( (  num_dash_chars1468 ) , ( ( (  cast1157 ) ( ( (  op_dash_neg1095 ( (  from_dash_integral291 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1158 = ( (  from_dash_string57 ) ( ( (uint8_t*)"could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1158);
            abort ( );
            ( Unit_8_Unit );
        }
        return ( * (  wcp1467 ) );
    }
    else {
        if ( dref1465.tag == CharDestructured_342_Scalar_t ) {
            if ( ( ! (  eq358 ( ( (  size_dash_of852 ) ( ( ( dref1465 .stuff .CharDestructured_342_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1159 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1162 = ( (  from_dash_string57 ) ( ( (uint8_t*)"Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1162);
                abort ( );
                ( Unit_8_Unit );
            }
            return ( (  cast1163 ) ( ( ( dref1465 .stuff .CharDestructured_342_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1149 (    struct Char_65  c2692 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1150 ) ( (  c2692 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1147 (    struct Char_65  c3686 ) {
    return ( (  max1148 ) ( ( (  wcwidth1149 ) ( (  c3686 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width1138 (    struct Char_65  c4306 ) {
    return ( (  maybe1139 ) ( ( (  char_dash_replacement1140 ) ( (  c4306 ) ) ) ,  (  lam1141 ) ,  ( (  rendered_dash_wcwidth1147 ) ( (  c4306 ) ) ) ) );
}

static  int32_t   pos_dash_vi1133 (    struct TextBuf_104 *  self4322 ,    struct Pos_29  pos4324 ) {
    int32_t  bi4325 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4326 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_470  temp1134 =  into_dash_iter471 ( ( (  chars472 ) ( ( (  line1135 ) ( (  self4322 ) ,  ( (  pos4324 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_300  __cond1137 =  next475 (&temp1134);
        if (  __cond1137 .tag == 0 ) {
            break;
        }
        struct Char_65  c4328 =  __cond1137 .stuff .Maybe_300_Just_s .field0;
        bi4325 = (  op_dash_add160 ( (  bi4325 ) , ( (  size_dash_i32332 ) ( ( (  c4328 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp158 ( ( (  pos4324 ) .f_bi ) , (  bi4325 ) ) == 0 ) ) {
            break;
        }
        vi4326 = (  op_dash_add160 ( (  vi4326 ) , ( (  char_dash_screen_dash_width1138 ) ( (  c4328 ) ) ) ) );
    }
    return (  vi4326 );
}

struct Tuple2_1166 {
    enum Mode_224  field0;
    enum Mode_224  field1;
};

static struct Tuple2_1166 Tuple2_1166_Tuple2 (  enum Mode_224  field0 ,  enum Mode_224  field1 ) {
    return ( struct Tuple2_1166 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1165 (    enum Mode_224  l4282 ,    enum Mode_224  r4284 ) {
    return ( {  struct Tuple2_1166  dref4285 = ( ( Tuple2_1166_Tuple2 ) ( (  l4282 ) ,  (  r4284 ) ) ) ;  dref4285 .field0 == Mode_224_Normal &&  dref4285 .field1 == Mode_224_Normal ? ( true ) :  dref4285 .field0 == Mode_224_Insert &&  dref4285 .field1 == Mode_224_Insert ? ( true ) :  dref4285 .field0 == Mode_224_Select &&  dref4285 .field1 == Mode_224_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1164 (    struct Pane_223 *  self4412 ,    struct Maybe_32  sel4414 ) {
    if ( ( !  eq1165 ( ( ( * (  self4412 ) ) .f_mode ) , ( Mode_224_Select ) ) ) ) {
        (*  self4412 ) .f_sel = (  sel4414 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors1129 (    struct Pane_223 *  self4429 ,    struct Pos_29  cur4431 ,    struct Maybe_32  sel4433 ,    enum CursorMovement_1130  cursor_dash_movement_dash_type4435 ) {
    if ( ( !  eq1131 ( (  cursor_dash_movement_dash_type4435 ) , ( CursorMovement_1130_NoChanges ) ) ) ) {
        (*  self4429 ) .f_vi = ( (  pos_dash_vi1133 ) ( ( ( * (  self4429 ) ) .f_buf ) ,  (  cur4431 ) ) );
    }
    (*  self4429 ) .f_cursor = (  cur4431 );
    if ( ( !  eq1131 ( (  cursor_dash_movement_dash_type4435 ) , ( CursorMovement_1130_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1164 ) ( (  self4429 ) ,  (  sel4433 ) ) );
    } else {
        (*  self4429 ) .f_sel = (  sel4433 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1168 (    struct StrView_30  self2612 ) {
    return ( ( (  self2612 ) .f_contents ) .f_count );
}

static  size_t   clamp1169 (    size_t  x1641 ,    size_t  mn1643 ,    size_t  mx1645 ) {
    if ( (  cmp293 ( (  x1641 ) , (  mn1643 ) ) == 0 ) ) {
        return (  mn1643 );
    } else {
        if ( (  cmp293 ( (  x1641 ) , (  mx1645 ) ) == 2 ) ) {
            return (  mx1645 );
        } else {
            return (  x1641 );
        }
    }
}

static  size_t   sync_dash_char1171 (    uint8_t *  p1422 ) {
    size_t  i1423 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb1424 = ( * ( (uint8_t * ) ( ( (void*) (  p1422 ) ) + (  op_dash_neg1095 ( ( (  size_dash_i64305 ) ( (  i1423 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp310 ( (  pb1424 ) , (  from_dash_integral311 ( 128 ) ) ) != 0 ) && (  cmp310 ( (  pb1424 ) , (  op_dash_add971 ( (  from_dash_integral311 ( 128 ) ) , (  from_dash_integral311 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i1423 );
        }
        i1423 = (  op_dash_add314 ( (  i1423 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1170 (    uint8_t *  p1427 ) {
    return (  op_dash_add314 ( ( (  sync_dash_char1171 ) ( ( (  offset_dash_ptr303 ) ( (  p1427 ) ,  (  op_dash_neg1095 ( (  from_dash_integral291 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_29   left_dash_pos1167 (    struct TextBuf_104 *  self3951 ,    struct Pos_29  pos3953 ) {
    if ( (  eq596 ( (  pos3953 ) , ( (  mk733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk733 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq597 ( ( (  pos3953 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert706 ) ( (  cmp158 ( ( (  pos3953 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk733 ) ( (  op_dash_sub165 ( ( (  pos3953 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( ( (  line1135 ) ( (  self3951 ) ,  (  op_dash_sub165 ( ( (  pos3953 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_30  line3954 = ( (  line1135 ) ( (  self3951 ) ,  ( (  pos3953 ) .f_line ) ) );
    size_t  pos_dash_bi3955 = ( (  clamp1169 ) ( ( (  i32_dash_size423 ) ( ( (  pos3953 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1168 ) ( (  line3954 ) ) ) ) );
    size_t  off3956 = ( (  previous_dash_char1170 ) ( ( (  offset_dash_ptr303 ) ( ( ( (  line3954 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  pos_dash_bi3955 ) ) ) ) ) ) );
    return ( (  mk733 ) ( ( (  pos3953 ) .f_line ) ,  ( (  size_dash_i32332 ) ( (  op_dash_sub292 ( (  pos_dash_bi3955 ) , (  off3956 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1128 (    struct Pane_223 *  self4441 ) {
    ( (  set_dash_cursors1129 ) ( (  self4441 ) ,  ( (  left_dash_pos1167 ) ( ( ( * (  self4441 ) ) .f_buf ) ,  ( ( * (  self4441 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_223 *   pane1172 (    struct Editor_251 *  ed4673 ) {
    return ( & ( ( * (  ed4673 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1175 (    struct TextBuf_104 *  self3935 ) {
    return ( (  size_dash_i32332 ) ( ( (  size598 ) ( ( & ( ( * (  self3935 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_29   right_dash_pos1174 (    struct TextBuf_104 *  self3943 ,    struct Pos_29  pos3945 ) {
    if ( (  cmp158 ( ( (  pos3945 ) .f_line ) , ( (  num_dash_lines1175 ) ( (  self3943 ) ) ) ) != 0 ) ) {
        return ( (  mk733 ) ( ( (  num_dash_lines1175 ) ( (  self3943 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_30  line3946 = ( (  line1135 ) ( (  self3943 ) ,  ( (  pos3945 ) .f_line ) ) );
    int64_t  bi3947 = ( (  i32_dash_i641048 ) ( ( (  pos3945 ) .f_bi ) ) );
    if ( (  cmp1094 ( (  bi3947 ) , ( (  size_dash_i64305 ) ( ( (  num_dash_bytes1168 ) ( (  line3946 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp158 ( (  op_dash_add160 ( ( (  pos3945 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1175 ) ( (  self3943 ) ) ) ) != 0 ) ) {
            return ( (  mk733 ) ( ( (  pos3945 ) .f_line ) ,  ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( (  line3946 ) ) ) ) ) ) );
        }
        return ( (  mk733 ) ( (  op_dash_add160 ( ( (  pos3945 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off3948 = ( (  size_dash_i32332 ) ( ( (  next_dash_char309 ) ( ( (  offset_dash_ptr303 ) ( ( ( (  line3946 ) .f_contents ) .f_ptr ) ,  (  bi3947 ) ) ) ) ) ) );
    return ( (  mk733 ) ( ( (  pos3945 ) .f_line ) ,  (  op_dash_add160 ( ( (  pos3945 ) .f_bi ) , (  off3948 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1173 (    struct Pane_223 *  self4438 ) {
    ( (  set_dash_cursors1129 ) ( (  self4438 ) ,  ( (  right_dash_pos1174 ) ( ( ( * (  self4438 ) ) .f_buf ) ,  ( ( * (  self4438 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1177 (    struct TextBuf_104 *  self4311 ,    int32_t  ln4313 ,    int32_t  vx4315 ) {
    int32_t  bi4316 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4317 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_470  temp1178 =  into_dash_iter471 ( ( (  chars472 ) ( ( (  line1135 ) ( (  self4311 ) ,  (  ln4313 ) ) ) ) ) );
    while (true) {
        struct Maybe_300  __cond1179 =  next475 (&temp1178);
        if (  __cond1179 .tag == 0 ) {
            break;
        }
        struct Char_65  c4319 =  __cond1179 .stuff .Maybe_300_Just_s .field0;
        vi4317 = (  op_dash_add160 ( (  vi4317 ) , ( (  char_dash_screen_dash_width1138 ) ( (  c4319 ) ) ) ) );
        if ( (  cmp158 ( (  vx4315 ) , (  vi4317 ) ) == 0 ) ) {
            break;
        }
        bi4316 = (  op_dash_add160 ( (  bi4316 ) , ( (  size_dash_i32332 ) ( ( (  c4319 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4316 );
}

static  enum Unit_8   move_dash_down1176 (    struct Pane_223 *  self4444 ,    int32_t  amnt4446 ) {
    struct Pos_29  cur4447 = ( ( * (  self4444 ) ) .f_cursor );
    int32_t  nu_dash_line4448 = ( (  min697 ) ( (  op_dash_add160 ( ( (  cur4447 ) .f_line ) , (  amnt4446 ) ) ) ,  (  op_dash_sub165 ( ( (  num_dash_lines1175 ) ( ( ( * (  self4444 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4449 = ( ( * (  self4444 ) ) .f_vi );
    int32_t  bi4450 = ( (  vi_dash_bi1177 ) ( ( ( * (  self4444 ) ) .f_buf ) ,  (  nu_dash_line4448 ) ,  (  vci4449 ) ) );
    ( (  set_dash_cursors1129 ) ( (  self4444 ) ,  ( (struct Pos_29) { .f_line = (  nu_dash_line4448 ) , .f_bi = (  bi4450 ) } ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1180 (    struct Pane_223 *  self4453 ,    int32_t  amnt4455 ) {
    struct Pos_29  cur4456 = ( ( * (  self4453 ) ) .f_cursor );
    int32_t  nu_dash_line4457 = ( (  max1148 ) ( (  op_dash_sub165 ( ( (  cur4456 ) .f_line ) , (  amnt4455 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4458 = ( ( * (  self4453 ) ) .f_vi );
    int32_t  bi4459 = ( (  vi_dash_bi1177 ) ( ( ( * (  self4453 ) ) .f_buf ) ,  (  nu_dash_line4457 ) ,  (  vci4458 ) ) );
    ( (  set_dash_cursors1129 ) ( (  self4453 ) ,  ( (struct Pos_29) { .f_line = (  nu_dash_line4457 ) , .f_bi = (  bi4459 ) } ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1182 (    struct TextBuf_104 *  self4049 ) {
    (*  self4049 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_106_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1181 (    struct Pane_223 *  self4417 ,    enum Mode_224  mode4419 ) {
    if ( (  eq1165 ( (  mode4419 ) , ( Mode_224_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1182 ) ( ( ( * (  self4417 ) ) .f_buf ) ) );
    }
    (*  self4417 ) .f_mode = (  mode4419 );
    return ( Unit_8_Unit );
}

struct TakeWhile_1187 {
    struct StrViewIter_470  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1186 {
    struct TakeWhile_1187  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1186 Map_1186_Map (  struct TakeWhile_1187  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1186 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1186   into_dash_iter1189 (    struct Map_1186  self797 ) {
    return (  self797 );
}

static  struct Maybe_300   next1191 (    struct TakeWhile_1187 *  self982 ) {
    struct Maybe_300  mx983 = ( (  next475 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_300  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_300_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_300_Just ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
            }
        }
    }
}

static  struct Maybe_249   next1190 (    struct Map_1186 *  dref799 ) {
    struct Maybe_300  dref802 = ( (  next1191 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_249) { .tag = Maybe_249_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_300_Just_t ) {
            return ( ( Maybe_249_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_300_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1188 (    struct Map_1186  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    size_t  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct Map_1186  it1117 = ( (  into_dash_iter1189 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_249  dref1118 = ( (  next1190 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_249_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_249_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_249_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1192 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1192);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1193;
    return (  temp1193 );
}

static  size_t   lam1194 (    size_t  v1130 ,    size_t  s1132 ) {
    return (  op_dash_add314 ( (  v1130 ) , (  s1132 ) ) );
}

static  size_t   sum1185 (    struct Map_1186  it1128 ) {
    return ( (  reduce1188 ) ( (  it1128 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1194 ) ) );
}

static  struct TakeWhile_1187   into_dash_iter1196 (    struct TakeWhile_1187  self979 ) {
    return (  self979 );
}

static  struct Map_1186   map1195 (    struct TakeWhile_1187  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1187  it809 = ( (  into_dash_iter1196 ) ( (  iterable806 ) ) );
    return ( ( Map_1186_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1187   take_dash_while1197 (    struct StrView_30  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1187) { .f_it = ( (  into_dash_iter473 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  bool   lam1198 (    struct Char_65  c4507 ) {
    return (  eq482 ( (  c4507 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1199 (    struct Char_65  c4509 ) {
    return ( (  c4509 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1184 (    struct Pane_223 *  pane4503 ,    int32_t  line4505 ) {
    return ( (  size_dash_i32332 ) ( ( (  sum1185 ) ( ( (  map1195 ) ( ( (  take_dash_while1197 ) ( ( (  line1135 ) ( ( ( * (  pane4503 ) ) .f_buf ) ,  (  line4505 ) ) ) ,  (  lam1198 ) ) ) ,  (  lam1199 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1183 (    struct Pane_223 *  self4522 ) {
    struct Pos_29  cur4523 = ( ( * (  self4522 ) ) .f_cursor );
    int32_t  indent4524 = ( (  indent_dash_at_dash_line1184 ) ( (  self4522 ) ,  ( (  cur4523 ) .f_line ) ) );
    struct Pos_29  temp1200 = (  cur4523 );
    temp1200 .  f_bi = (  indent4524 );
    ( (  set_dash_cursors1129 ) ( (  self4522 ) ,  ( temp1200 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1201 (    struct Pane_223 *  self4527 ) {
    struct Pos_29  cur4528 = ( ( * (  self4527 ) ) .f_cursor );
    struct Pos_29  temp1202 = (  cur4528 );
    temp1202 .  f_bi = ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( ( (  line1135 ) ( ( ( * (  self4527 ) ) .f_buf ) ,  ( (  cur4528 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors1129 ) ( (  self4527 ) ,  ( temp1202 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct SliceIter_1210 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1209 {
    struct SliceIter_1210  field0;
    size_t  field1;
};

static struct Drop_1209 Drop_1209_Drop (  struct SliceIter_1210  field0 ,  size_t  field1 ) {
    return ( struct Drop_1209 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1209   into_dash_iter1211 (    struct Drop_1209  self846 ) {
    return (  self846 );
}

static  struct SliceIter_1210   into_dash_iter1214 (    struct Slice_24  self2243 ) {
    return ( (struct SliceIter_1210) { .f_slice = (  self2243 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_25 *   offset_dash_ptr1216 (    struct Changeset_25 *  x377 ,    int64_t  count379 ) {
    struct Changeset_25  temp1217;
    return ( (struct Changeset_25 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1217 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1215 (    struct Slice_24  slice2197 ,    size_t  from2199 ,    size_t  to2201 ) {
    struct Changeset_25 *  begin_dash_ptr2202 = ( (  offset_dash_ptr1216 ) ( ( (  slice2197 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  from2199 ) ) ) ) );
    if ( ( (  cmp293 ( (  from2199 ) , (  to2201 ) ) != 0 ) || (  cmp293 ( (  from2199 ) , ( (  slice2197 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2203 = (  op_dash_sub292 ( ( (  min480 ) ( (  to2201 ) ,  ( (  slice2197 ) .f_count ) ) ) , (  from2199 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  count2203 ) } );
}

static  struct SliceIter_1210   into_dash_iter1213 (    struct List_23  self2426 ) {
    return ( (  into_dash_iter1214 ) ( ( (  subslice1215 ) ( ( (  self2426 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2426 ) .f_count ) ) ) ) );
}

static  struct Drop_1209   drop1212 (    struct List_23  iterable853 ,    size_t  i855 ) {
    struct SliceIter_1210  it856 = ( (  into_dash_iter1213 ) ( (  iterable853 ) ) );
    return ( ( Drop_1209_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

struct Maybe_1219 {
    enum {
        Maybe_1219_None_t,
        Maybe_1219_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_25  field0;
        } Maybe_1219_Just_s;
    } stuff;
};

static struct Maybe_1219 Maybe_1219_Just (  struct Changeset_25  field0 ) {
    return ( struct Maybe_1219 ) { .tag = Maybe_1219_Just_t, .stuff = { .Maybe_1219_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1219   next1221 (    struct SliceIter_1210 *  self2249 ) {
    size_t  off2250 = ( ( * (  self2249 ) ) .f_current_dash_offset );
    if ( (  cmp293 ( (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2249 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1219) { .tag = Maybe_1219_None_t } );
    }
    struct Changeset_25  elem2251 = ( * ( (  offset_dash_ptr1216 ) ( ( ( ( * (  self2249 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  off2250 ) ) ) ) ) );
    (*  self2249 ) .f_current_dash_offset = (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1219_Just ) ( (  elem2251 ) ) );
}

static  struct Maybe_1219   next1220 (    struct Drop_1209 *  dref848 ) {
    while ( (  cmp293 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1221 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub292 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1221 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

struct env1224 {
    enum CAllocator_10  al3883;
    ;
};

struct envunion1225 {
    enum Unit_8  (*fun) (  struct env1224*  ,    struct Action_28  );
    struct env1224 env;
};

struct SliceIter_1226 {
    struct Slice_27  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1226   into_dash_iter1229 (    struct Slice_27  self2243 ) {
    return ( (struct SliceIter_1226) { .f_slice = (  self2243 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_28 *   offset_dash_ptr1231 (    struct Action_28 *  x377 ,    int64_t  count379 ) {
    struct Action_28  temp1232;
    return ( (struct Action_28 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1232 ) ) ) ) ) ) ) ) );
}

static  struct Slice_27   subslice1230 (    struct Slice_27  slice2197 ,    size_t  from2199 ,    size_t  to2201 ) {
    struct Action_28 *  begin_dash_ptr2202 = ( (  offset_dash_ptr1231 ) ( ( (  slice2197 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  from2199 ) ) ) ) );
    if ( ( (  cmp293 ( (  from2199 ) , (  to2201 ) ) != 0 ) || (  cmp293 ( (  from2199 ) , ( (  slice2197 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_27) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2203 = (  op_dash_sub292 ( ( (  min480 ) ( (  to2201 ) ,  ( (  slice2197 ) .f_count ) ) ) , (  from2199 ) ) );
    return ( (struct Slice_27) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  count2203 ) } );
}

static  struct SliceIter_1226   into_dash_iter1228 (    struct List_26  self2426 ) {
    return ( (  into_dash_iter1229 ) ( ( (  subslice1230 ) ( ( (  self2426 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2426 ) .f_count ) ) ) ) );
}

struct Maybe_1233 {
    enum {
        Maybe_1233_None_t,
        Maybe_1233_Just_t,
    } tag;
    union {
        struct {
            struct Action_28  field0;
        } Maybe_1233_Just_s;
    } stuff;
};

static struct Maybe_1233 Maybe_1233_Just (  struct Action_28  field0 ) {
    return ( struct Maybe_1233 ) { .tag = Maybe_1233_Just_t, .stuff = { .Maybe_1233_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1233   next1234 (    struct SliceIter_1226 *  self2249 ) {
    size_t  off2250 = ( ( * (  self2249 ) ) .f_current_dash_offset );
    if ( (  cmp293 ( (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2249 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1233) { .tag = Maybe_1233_None_t } );
    }
    struct Action_28  elem2251 = ( * ( (  offset_dash_ptr1231 ) ( ( ( ( * (  self2249 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  off2250 ) ) ) ) ) );
    (*  self2249 ) .f_current_dash_offset = (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1233_Just ) ( (  elem2251 ) ) );
}

static  enum Unit_8   for_dash_each1223 (    struct List_26  iterable1092 ,   struct envunion1225  fun1094 ) {
    struct SliceIter_1226  temp1227 = ( (  into_dash_iter1228 ) ( (  iterable1092 ) ) );
    struct SliceIter_1226 *  it1095 = ( &temp1227 );
    while ( ( true ) ) {
        struct Maybe_1233  dref1096 = ( (  next1234 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_1233_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_1233_Just_t ) {
                struct envunion1225  temp1235 = (  fun1094 );
                ( temp1235.fun ( &temp1235.env ,  ( dref1096 .stuff .Maybe_1233_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1237 (    struct Action_28  action3876 ,    enum CAllocator_10  al3878 ) {
    ( (  free586 ) ( ( (  action3876 ) .f_fwd ) ,  (  al3878 ) ) );
    ( (  free586 ) ( ( (  action3876 ) .f_bwd ) ,  (  al3878 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1236 (   struct env1224* env ,    struct Action_28  a3885 ) {
    return ( (  free_dash_action1237 ) ( (  a3885 ) ,  ( env->al3883 ) ) );
}

static  void *   cast_dash_ptr1240 (    struct Action_28 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free1239 (    enum CAllocator_10  dref2366 ,    struct Slice_27  slice2368 ) {
    if (!(  dref2366 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1240 ) ( ( (  slice2368 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1238 (    struct List_26 *  list2433 ) {
    ( (  free1239 ) ( ( ( * (  list2433 ) ) .f_al ) ,  ( ( * (  list2433 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1222 (    struct Changeset_25  chs3881 ,    enum CAllocator_10  al3883 ) {
    struct env1224 envinst1224 = {
        .al3883 =  al3883 ,
    };
    ( (  for_dash_each1223 ) ( ( (  chs3881 ) .f_parts ) ,  ( (struct envunion1225){ .fun = (  enum Unit_8  (*) (  struct env1224*  ,    struct Action_28  ) )lam1236 , .env =  envinst1224 } ) ) );
    ( (  free1238 ) ( ( & ( (  chs3881 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1241 (    struct List_23 *  l2523 ,    size_t  new_dash_count2525 ) {
    (*  l2523 ) .f_count = ( (  min480 ) ( (  new_dash_count2525 ) ,  ( ( * (  l2523 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1207 (    struct Actions_105 *  actions3899 ) {
    enum CAllocator_10  al3900 = ( ( ( * (  actions3899 ) ) .f_list ) .f_al );
    size_t  cur3901 = ( ( * (  actions3899 ) ) .f_cur );
    struct Drop_1209  temp1208 =  into_dash_iter1211 ( ( (  drop1212 ) ( ( ( * (  actions3899 ) ) .f_list ) ,  (  cur3901 ) ) ) );
    while (true) {
        struct Maybe_1219  __cond1218 =  next1220 (&temp1208);
        if (  __cond1218 .tag == 0 ) {
            break;
        }
        struct Changeset_25  action3903 =  __cond1218 .stuff .Maybe_1219_Just_s .field0;
        ( (  free_dash_changeset1222 ) ( (  action3903 ) ,  (  al3900 ) ) );
    }
    ( (  trim1241 ) ( ( & ( ( * (  actions3899 ) ) .f_list ) ) ,  (  cur3901 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_30   clone1242 (    struct StrView_30  s2579 ,    enum CAllocator_10  al2581 ) {
    return ( (  clone_dash_0544 ) ( (  s2579 ) ,  (  al2581 ) ) );
}

static  struct Maybe_85   head1244 (    struct SplitIter_639  it1160 ) {
    struct SplitIter_639  temp1245 = ( (  into_dash_iter646 ) ( (  it1160 ) ) );
    return ( (  next655 ) ( ( &temp1245 ) ) );
}

static  struct Maybe_85   head1247 (    struct Drop_638  it1160 ) {
    struct Drop_638  temp1248 = ( (  into_dash_iter644 ) ( (  it1160 ) ) );
    return ( (  next654 ) ( ( &temp1248 ) ) );
}

static  bool   null1246 (    struct Drop_638  it1169 ) {
    struct Maybe_85  dref1170 = ( (  head1247 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_85_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1250 (    struct StrView_30  errmsg1336 ) {
    ( (  print_dash_str707 ) ( ( ( StrConcat_708_StrConcat ) ( ( ( StrConcat_709_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1336 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_652   undefined1251 (  ) {
    struct Tuple2_652  temp1252;
    return (  temp1252 );
}

static  struct Tuple2_652   or_dash_fail1249 (    struct Maybe_651  x1346 ,    struct StrView_30  errmsg1348 ) {
    struct Maybe_651  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_651_None_t ) {
        ( (  panic1250 ) ( (  errmsg1348 ) ) );
        return ( (  undefined1251 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_651_Just_t ) {
            return ( dref1349 .stuff .Maybe_651_Just_s .field0 );
        }
    }
}

static  struct Maybe_651   reduce1254 (    struct Zip_637  iterable1111 ,    struct Maybe_651  base1113 ,    struct Maybe_651 (*  fun1115 )(    struct Tuple2_652  ,    struct Maybe_651  ) ) {
    struct Maybe_651  x1116 = (  base1113 );
    struct Zip_637  it1117 = ( (  into_dash_iter642 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_651  dref1118 = ( (  next653 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_651_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_651_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_651_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1255 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1255);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_651  temp1256;
    return (  temp1256 );
}

static  struct Maybe_651   lam1257 (    struct Tuple2_652  e1165 ,    struct Maybe_651  dref1166 ) {
    return ( ( Maybe_651_Just ) ( (  e1165 ) ) );
}

static  struct Maybe_651   last1253 (    struct Zip_637  it1163 ) {
    return ( (  reduce1254 ) ( (  it1163 ) ,  ( (struct Maybe_651) { .tag = Maybe_651_None_t } ) ,  (  lam1257 ) ) );
}

static  struct Pos_29   pos_dash_after_dash_str1243 (    struct TextBuf_104 *  self4035 ,    struct StrView_30  bytes4037 ,    struct Pos_29  from4039 ) {
    struct SplitIter_639  lines4040 = ( (  split_dash_by_dash_each647 ) ( (  bytes4037 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_30  first_dash_line4041 = ( (  or_dash_else629 ) ( ( (  head1244 ) ( (  lines4040 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    struct Drop_638  headless4042 = ( (  drop645 ) ( (  lines4040 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1246 ) ( (  headless4042 ) ) ) ) {
        struct Pos_29  next_dash_pos4043 = ( (  mk733 ) ( ( (  from4039 ) .f_line ) ,  (  op_dash_add160 ( ( (  from4039 ) .f_bi ) , ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( (  first_dash_line4041 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos4043 );
    } else {
        struct Tuple2_652  dref4044 = ( (  or_dash_fail1249 ) ( ( (  last1253 ) ( ( (  zip643 ) ( (  headless4042 ) ,  ( (  from438 ) ( (  op_dash_add160 ( ( (  from4039 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"should not happen" ) ,  ( 17 ) ) ) ) );
        
        return ( (  mk733 ) ( ( dref4044 .field1 ) ,  ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( ( dref4044 .field0 ) ) ) ) ) ) );
    }
}

struct envunion1262 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1264 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1268 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1270 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_30   str_dash_between1259 (   struct env126* env ,    struct TextBuf_104 *  self4069 ,    struct Pos_29  from4071 ,    struct Pos_29  to4073 ) {
    enum CAllocator_10  al4074 = ( ( ( * (  self4069 ) ) .f_buf ) .f_al );
    if ( (  eq597 ( ( (  from4071 ) .f_line ) , ( (  to4073 ) .f_line ) ) ) ) {
        if ( (  eq597 ( ( (  from4071 ) .f_line ) , ( (  num_dash_lines1175 ) ( (  self4069 ) ) ) ) ) ) {
            return ( (  clone1242 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  (  al4074 ) ) );
        }
        size_t  from_dash_bi4075 = ( (  i32_dash_size423 ) ( ( (  min697 ) ( ( (  from4071 ) .f_bi ) ,  ( (  to4073 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi4076 = ( (  i32_dash_size423 ) ( ( (  max1148 ) ( ( (  from4071 ) .f_bi ) ,  ( (  to4073 ) .f_bi ) ) ) ) );
        return ( (  clone1242 ) ( ( (  byte_dash_substr497 ) ( ( (  line1135 ) ( (  self4069 ) ,  ( (  from4071 ) .f_line ) ) ) ,  (  from_dash_bi4075 ) ,  (  to_dash_bi4076 ) ) ) ,  (  al4074 ) ) );
    } else {
        struct Pos_29  from_dash_pos4077 = ( (  min593 ) ( (  from4071 ) ,  (  to4073 ) ) );
        struct Pos_29  to_dash_pos4078 = ( (  max595 ) ( (  from4071 ) ,  (  to4073 ) ) );
        struct List_13  temp1260 = ( (  mk451 ) ( (  al4074 ) ) );
        struct List_13 *  sb4079 = ( &temp1260 );
        struct StrView_30  first_dash_line4080 = ( (  line1135 ) ( (  self4069 ) ,  ( (  from_dash_pos4077 ) .f_line ) ) );
        struct envunion1262  temp1261 = ( (struct envunion1262){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all611 , .env =  env->envinst48 } );
        ( temp1261.fun ( &temp1261.env ,  (  sb4079 ) ,  ( ( (  byte_dash_substr497 ) ( (  first_dash_line4080 ) ,  ( (  i32_dash_size423 ) ( ( (  from_dash_pos4077 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1168 ) ( (  first_dash_line4080 ) ) ) ) ) .f_contents ) ) );
        struct envunion1264  temp1263 = ( (struct envunion1264){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all611 , .env =  env->envinst48 } );
        ( temp1263.fun ( &temp1263.env ,  (  sb4079 ) ,  ( ( ( (  from_dash_charlike543 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_154  temp1265 =  into_dash_iter155 ( ( (  to164 ) ( (  op_dash_add160 ( ( (  from_dash_pos4077 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub165 ( ( (  to_dash_pos4078 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_156  __cond1266 =  next157 (&temp1265);
            if (  __cond1266 .tag == 0 ) {
                break;
            }
            int32_t  i4082 =  __cond1266 .stuff .Maybe_156_Just_s .field0;
            struct envunion1268  temp1267 = ( (struct envunion1268){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all611 , .env =  env->envinst48 } );
            ( temp1267.fun ( &temp1267.env ,  (  sb4079 ) ,  ( ( (  line1135 ) ( (  self4069 ) ,  (  i4082 ) ) ) .f_contents ) ) );
            struct envunion1270  temp1269 = ( (struct envunion1270){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all611 , .env =  env->envinst48 } );
            ( temp1269.fun ( &temp1269.env ,  (  sb4079 ) ,  ( ( ( (  from_dash_charlike543 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion127  temp1271 = ( (struct envunion127){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all611 , .env =  env->envinst48 } );
        ( temp1271.fun ( &temp1271.env ,  (  sb4079 ) ,  ( ( (  byte_dash_substr497 ) ( ( (  line1135 ) ( (  self4069 ) ,  ( (  to_dash_pos4078 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size423 ) ( ( (  to_dash_pos4078 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes1136 ) ( ( (  to_dash_slice605 ) ( ( * (  sb4079 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1272 (    struct Maybe_209  m1567 ) {
    struct Maybe_209  dref1568 = (  m1567 );
    if ( dref1568.tag == Maybe_209_None_t ) {
        return ( true );
    }
    else {
        if ( dref1568.tag == Maybe_209_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1274 {
    enum ChangesetInputType_106  field0;
    enum ChangesetInputType_106  field1;
};

static struct Tuple2_1274 Tuple2_1274_Tuple2 (  enum ChangesetInputType_106  field0 ,  enum ChangesetInputType_106  field1 ) {
    return ( struct Tuple2_1274 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1273 (    enum ChangesetInputType_106  l3889 ,    enum ChangesetInputType_106  r3891 ) {
    return ( {  struct Tuple2_1274  dref3892 = ( ( Tuple2_1274_Tuple2 ) ( (  l3889 ) ,  (  r3891 ) ) ) ;  dref3892 .field0 == ChangesetInputType_106_NoChangeset &&  dref3892 .field1 == ChangesetInputType_106_NoChangeset ? ( true ) :  dref3892 .field0 == ChangesetInputType_106_InputChangeset &&  dref3892 .field1 == ChangesetInputType_106_InputChangeset ? ( true ) :  dref3892 .field0 == ChangesetInputType_106_CustomChangeset &&  dref3892 .field1 == ChangesetInputType_106_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_25 *   get_dash_ptr1276 (    struct Slice_24  slice2163 ,    size_t  i2165 ) {
    if ( ( (  cmp293 ( (  i2165 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2165 ) , ( (  slice2163 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2165 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2163 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_25 *  elem_dash_ptr2166 = ( (  offset_dash_ptr1216 ) ( ( (  slice2163 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2165 ) ) ) ) );
    return (  elem_dash_ptr2166 );
}

static  struct Changeset_25 *   last_dash_ptr1275 (    struct Slice_24  s2353 ) {
    if ( (  eq358 ( ( (  s2353 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1250 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1276 ) ( (  s2353 ) ,  (  op_dash_sub292 ( ( (  s2353 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1277 (    struct List_23  l2534 ) {
    struct Changeset_25 *  ptr2535 = ( ( (  l2534 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2535 ) , .f_count = ( (  l2534 ) .f_count ) } );
}

struct TypeSize_1284 {
    size_t  f_size;
};

static  struct TypeSize_1284   get_dash_typesize1283 (  ) {
    struct Action_28  temp1285;
    return ( (struct TypeSize_1284) { .f_size = ( sizeof( ( (  temp1285 ) ) ) ) } );
}

static  struct Action_28 *   cast_dash_ptr1286 (    void *  p398 ) {
    return ( (struct Action_28 * ) (  p398 ) );
}

static  struct Slice_27   allocate1282 (    enum CAllocator_10  dref2360 ,    size_t  count2362 ) {
    if (!(  dref2360 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2363 = ( ( ( (  get_dash_typesize1283 ) ( ) ) ) .f_size );
    struct Action_28 *  ptr2364 = ( (  cast_dash_ptr1286 ) ( ( ( malloc ) ( (  op_dash_mul416 ( (  size2363 ) , (  count2362 ) ) ) ) ) ) );
    return ( (struct Slice_27) { .f_ptr = (  ptr2364 ) , .f_count = (  count2362 ) } );
}

struct env1287 {
    ;
    ;
    struct Slice_27  new_dash_slice2446;
};

struct Tuple2_1289 {
    struct Action_28  field0;
    int32_t  field1;
};

static struct Tuple2_1289 Tuple2_1289_Tuple2 (  struct Action_28  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1289 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1288 {
    enum Unit_8  (*fun) (  struct env1287*  ,    struct Tuple2_1289  );
    struct env1287 env;
};

static  struct Action_28 *   get_dash_ptr1292 (    struct Slice_27  slice2163 ,    size_t  i2165 ) {
    if ( ( (  cmp293 ( (  i2165 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2165 ) , ( (  slice2163 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2165 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2163 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_28 *  elem_dash_ptr2166 = ( (  offset_dash_ptr1231 ) ( ( (  slice2163 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2165 ) ) ) ) );
    return (  elem_dash_ptr2166 );
}

static  enum Unit_8   set1291 (    struct Slice_27  slice2180 ,    size_t  i2182 ,    struct Action_28  x2184 ) {
    struct Action_28 *  ep2185 = ( (  get_dash_ptr1292 ) ( (  slice2180 ) ,  (  i2182 ) ) );
    (*  ep2185 ) = (  x2184 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1290 (   struct env1287* env ,    struct Tuple2_1289  dref2447 ) {
    return ( (  set1291 ) ( ( env->new_dash_slice2446 ) ,  ( (  i32_dash_size423 ) ( ( dref2447 .field1 ) ) ) ,  ( dref2447 .field0 ) ) );
}

struct Zip_1294 {
    struct SliceIter_1226  f_left_dash_it;
    struct FromIter_427  f_right_dash_it;
};

static  struct Zip_1294   into_dash_iter1296 (    struct Zip_1294  self929 ) {
    return (  self929 );
}

struct Maybe_1297 {
    enum {
        Maybe_1297_None_t,
        Maybe_1297_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1289  field0;
        } Maybe_1297_Just_s;
    } stuff;
};

static struct Maybe_1297 Maybe_1297_Just (  struct Tuple2_1289  field0 ) {
    return ( struct Maybe_1297 ) { .tag = Maybe_1297_Just_t, .stuff = { .Maybe_1297_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1297   next1298 (    struct Zip_1294 *  self932 ) {
    struct Zip_1294  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_1233  dref934 = ( (  next1234 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_1233_None_t ) {
            return ( (struct Maybe_1297) { .tag = Maybe_1297_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_1233_Just_t ) {
                struct Maybe_156  dref936 = ( (  next433 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_156_None_t ) {
                    return ( (struct Maybe_1297) { .tag = Maybe_1297_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_156_Just_t ) {
                        ( (  next1234 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next433 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1297_Just ) ( ( ( Tuple2_1289_Tuple2 ) ( ( dref934 .stuff .Maybe_1233_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_156_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1293 (    struct Zip_1294  iterable1092 ,   struct envunion1288  fun1094 ) {
    struct Zip_1294  temp1295 = ( (  into_dash_iter1296 ) ( (  iterable1092 ) ) );
    struct Zip_1294 *  it1095 = ( &temp1295 );
    while ( ( true ) ) {
        struct Maybe_1297  dref1096 = ( (  next1298 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_1297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_1297_Just_t ) {
                struct envunion1288  temp1299 = (  fun1094 );
                ( temp1299.fun ( &temp1299.env ,  ( dref1096 .stuff .Maybe_1297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1294   zip1300 (    struct Slice_27  left940 ,    struct FromIter_427  right942 ) {
    struct SliceIter_1226  left_dash_it943 = ( (  into_dash_iter1229 ) ( (  left940 ) ) );
    struct FromIter_427  right_dash_it944 = ( (  into_dash_iter437 ) ( (  right942 ) ) );
    return ( (struct Zip_1294) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1281 (   struct env4* env ,    struct List_26 *  list2445 ) {
    if ( (  eq358 ( ( ( * (  list2445 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2445 ) .f_elements = ( (  allocate1282 ) ( ( ( * (  list2445 ) ) .f_al ) ,  ( env->starting_dash_size2440 ) ) );
    } else {
        if ( (  eq358 ( ( ( * (  list2445 ) ) .f_count ) , ( ( ( * (  list2445 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_27  new_dash_slice2446 = ( (  allocate1282 ) ( ( ( * (  list2445 ) ) .f_al ) ,  (  op_dash_mul416 ( ( ( * (  list2445 ) ) .f_count ) , ( env->growth_dash_factor2441 ) ) ) ) );
            struct env1287 envinst1287 = {
                .new_dash_slice2446 =  new_dash_slice2446 ,
            };
            struct envunion1288  fun2450 = ( (struct envunion1288){ .fun = (  enum Unit_8  (*) (  struct env1287*  ,    struct Tuple2_1289  ) )lam1290 , .env =  envinst1287 } );
            ( (  for_dash_each1293 ) ( ( (  zip1300 ) ( ( ( * (  list2445 ) ) .f_elements ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2450 ) ) );
            ( (  free1239 ) ( ( ( * (  list2445 ) ) .f_al ) ,  ( ( * (  list2445 ) ) .f_elements ) ) );
            (*  list2445 ) .f_elements = (  new_dash_slice2446 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1279 (   struct env33* env ,    struct List_26 *  list2453 ,    struct Action_28  elem2455 ) {
    struct envunion34  temp1280 = ( (struct envunion34){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_26 *  ) )grow_dash_if_dash_full1281 , .env =  env->envinst4 } );
    ( temp1280.fun ( &temp1280.env ,  (  list2453 ) ) );
    ( (  set1291 ) ( ( ( * (  list2453 ) ) .f_elements ) ,  ( ( * (  list2453 ) ) .f_count ) ,  (  elem2455 ) ) );
    (*  list2453 ) .f_count = (  op_dash_add314 ( ( ( * (  list2453 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1307 (    struct Action_28 * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of1308 (    struct Action_28 *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct Action_28 *   zeroed1305 (  ) {
    struct Action_28 *  temp1306;
    struct Action_28 *  x641 = (  temp1306 );
    ( ( memset ) ( ( (  cast_dash_ptr1307 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1308 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  struct Action_28 *   null_dash_ptr1304 (  ) {
    return ( (  zeroed1305 ) ( ) );
}

static  struct Slice_27   empty1303 (  ) {
    return ( (struct Slice_27) { .f_ptr = ( (  null_dash_ptr1304 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_26   mk1302 (    enum CAllocator_10  al2429 ) {
    struct Slice_27  elements2430 = ( (  empty1303 ) ( ) );
    return ( (struct List_26) { .f_al = (  al2429 ) , .f_elements = (  elements2430 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_31   or_dash_else1309 (    struct Maybe_209  self1353 ,    struct Cursors_31  alt1355 ) {
    struct Maybe_209  dref1356 = (  self1353 );
    if ( dref1356.tag == Maybe_209_None_t ) {
        return (  alt1355 );
    }
    else {
        if ( dref1356.tag == Maybe_209_Just_t ) {
            return ( dref1356 .stuff .Maybe_209_Just_s .field0 );
        }
    }
}

struct envunion1311 {
    enum Unit_8  (*fun) (  struct env33*  ,    struct List_26 *  ,    struct Action_28  );
    struct env33 env;
};

struct TypeSize_1318 {
    size_t  f_size;
};

static  struct TypeSize_1318   get_dash_typesize1317 (  ) {
    struct Changeset_25  temp1319;
    return ( (struct TypeSize_1318) { .f_size = ( sizeof( ( (  temp1319 ) ) ) ) } );
}

static  struct Changeset_25 *   cast_dash_ptr1320 (    void *  p398 ) {
    return ( (struct Changeset_25 * ) (  p398 ) );
}

static  struct Slice_24   allocate1316 (    enum CAllocator_10  dref2360 ,    size_t  count2362 ) {
    if (!(  dref2360 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2363 = ( ( ( (  get_dash_typesize1317 ) ( ) ) ) .f_size );
    struct Changeset_25 *  ptr2364 = ( (  cast_dash_ptr1320 ) ( ( ( malloc ) ( (  op_dash_mul416 ( (  size2363 ) , (  count2362 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr2364 ) , .f_count = (  count2362 ) } );
}

struct env1321 {
    ;
    ;
    struct Slice_24  new_dash_slice2446;
};

struct Tuple2_1323 {
    struct Changeset_25  field0;
    int32_t  field1;
};

static struct Tuple2_1323 Tuple2_1323_Tuple2 (  struct Changeset_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1323 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1322 {
    enum Unit_8  (*fun) (  struct env1321*  ,    struct Tuple2_1323  );
    struct env1321 env;
};

static  enum Unit_8   set1325 (    struct Slice_24  slice2180 ,    size_t  i2182 ,    struct Changeset_25  x2184 ) {
    struct Changeset_25 *  ep2185 = ( (  get_dash_ptr1276 ) ( (  slice2180 ) ,  (  i2182 ) ) );
    (*  ep2185 ) = (  x2184 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1324 (   struct env1321* env ,    struct Tuple2_1323  dref2447 ) {
    return ( (  set1325 ) ( ( env->new_dash_slice2446 ) ,  ( (  i32_dash_size423 ) ( ( dref2447 .field1 ) ) ) ,  ( dref2447 .field0 ) ) );
}

struct Zip_1327 {
    struct SliceIter_1210  f_left_dash_it;
    struct FromIter_427  f_right_dash_it;
};

static  struct Zip_1327   into_dash_iter1329 (    struct Zip_1327  self929 ) {
    return (  self929 );
}

struct Maybe_1330 {
    enum {
        Maybe_1330_None_t,
        Maybe_1330_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1323  field0;
        } Maybe_1330_Just_s;
    } stuff;
};

static struct Maybe_1330 Maybe_1330_Just (  struct Tuple2_1323  field0 ) {
    return ( struct Maybe_1330 ) { .tag = Maybe_1330_Just_t, .stuff = { .Maybe_1330_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1330   next1331 (    struct Zip_1327 *  self932 ) {
    struct Zip_1327  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_1219  dref934 = ( (  next1221 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_1219_None_t ) {
            return ( (struct Maybe_1330) { .tag = Maybe_1330_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_1219_Just_t ) {
                struct Maybe_156  dref936 = ( (  next433 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_156_None_t ) {
                    return ( (struct Maybe_1330) { .tag = Maybe_1330_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_156_Just_t ) {
                        ( (  next1221 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next433 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1330_Just ) ( ( ( Tuple2_1323_Tuple2 ) ( ( dref934 .stuff .Maybe_1219_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_156_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1326 (    struct Zip_1327  iterable1092 ,   struct envunion1322  fun1094 ) {
    struct Zip_1327  temp1328 = ( (  into_dash_iter1329 ) ( (  iterable1092 ) ) );
    struct Zip_1327 *  it1095 = ( &temp1328 );
    while ( ( true ) ) {
        struct Maybe_1330  dref1096 = ( (  next1331 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_1330_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_1330_Just_t ) {
                struct envunion1322  temp1332 = (  fun1094 );
                ( temp1332.fun ( &temp1332.env ,  ( dref1096 .stuff .Maybe_1330_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1327   zip1333 (    struct Slice_24  left940 ,    struct FromIter_427  right942 ) {
    struct SliceIter_1210  left_dash_it943 = ( (  into_dash_iter1214 ) ( (  left940 ) ) );
    struct FromIter_427  right_dash_it944 = ( (  into_dash_iter437 ) ( (  right942 ) ) );
    return ( (struct Zip_1327) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  void *   cast_dash_ptr1335 (    struct Changeset_25 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free1334 (    enum CAllocator_10  dref2366 ,    struct Slice_24  slice2368 ) {
    if (!(  dref2366 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr1335 ) ( ( (  slice2368 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1315 (   struct env3* env ,    struct List_23 *  list2445 ) {
    if ( (  eq358 ( ( ( * (  list2445 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2445 ) .f_elements = ( (  allocate1316 ) ( ( ( * (  list2445 ) ) .f_al ) ,  ( env->starting_dash_size2440 ) ) );
    } else {
        if ( (  eq358 ( ( ( * (  list2445 ) ) .f_count ) , ( ( ( * (  list2445 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2446 = ( (  allocate1316 ) ( ( ( * (  list2445 ) ) .f_al ) ,  (  op_dash_mul416 ( ( ( * (  list2445 ) ) .f_count ) , ( env->growth_dash_factor2441 ) ) ) ) );
            struct env1321 envinst1321 = {
                .new_dash_slice2446 =  new_dash_slice2446 ,
            };
            struct envunion1322  fun2450 = ( (struct envunion1322){ .fun = (  enum Unit_8  (*) (  struct env1321*  ,    struct Tuple2_1323  ) )lam1324 , .env =  envinst1321 } );
            ( (  for_dash_each1326 ) ( ( (  zip1333 ) ( ( ( * (  list2445 ) ) .f_elements ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2450 ) ) );
            ( (  free1334 ) ( ( ( * (  list2445 ) ) .f_al ) ,  ( ( * (  list2445 ) ) .f_elements ) ) );
            (*  list2445 ) .f_elements = (  new_dash_slice2446 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1313 (   struct env21* env ,    struct List_23 *  list2453 ,    struct Changeset_25  elem2455 ) {
    struct envunion22  temp1314 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1315 , .env =  env->envinst3 } );
    ( temp1314.fun ( &temp1314.env ,  (  list2453 ) ) );
    ( (  set1325 ) ( ( ( * (  list2453 ) ) .f_elements ) ,  ( ( * (  list2453 ) ) .f_count ) ,  (  elem2455 ) ) );
    (*  list2453 ) .f_count = (  op_dash_add314 ( ( ( * (  list2453 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_29   action_dash_fwd1337 (   struct env120* env ,    struct TextBuf_104 *  self4030 ,    struct Action_28  action4032 ) {
    struct envunion121  temp1338 = ( (struct envunion121){ .fun = (  enum Unit_8  (*) (  struct env101*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ) )change_dash_no_dash_action592 , .env =  env->envinst101 } );
    ( temp1338.fun ( &temp1338.env ,  (  self4030 ) ,  ( (  action4032 ) .f_from ) ,  ( (  action4032 ) .f_to_dash_bwd ) ,  ( (  action4032 ) .f_fwd ) ) );
    return ( (  action4032 ) .f_to_dash_fwd );
}

static  struct Maybe_209   change1206 (   struct env128* env ,    struct TextBuf_104 *  self4099 ,    struct Pos_29  from4101 ,    struct Pos_29  to4103 ,    struct StrView_30  bytes4105 ,    struct Maybe_209  before_dash_cursors4107 ) {
    struct Pos_29  from_dash_pos4108 = ( (  min593 ) ( (  from4101 ) ,  (  to4103 ) ) );
    struct Pos_29  to_dash_pos4109 = ( (  max595 ) ( (  from4101 ) ,  (  to4103 ) ) );
    struct Actions_105 *  actions4110 = ( & ( ( * (  self4099 ) ) .f_actions ) );
    ( (  trim_dash_actions1207 ) ( (  actions4110 ) ) );
    struct envunion129  temp1258 = ( (struct envunion129){ .fun = (  struct StrView_30  (*) (  struct env126*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ) )str_dash_between1259 , .env =  env->envinst126 } );
    struct Action_28  action4111 = ( (struct Action_28) { .f_from = (  from4101 ) , .f_fwd = ( (  clone1242 ) ( (  bytes4105 ) ,  ( ( * (  self4099 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1243 ) ( (  self4099 ) ,  (  bytes4105 ) ,  (  from_dash_pos4108 ) ) ) , .f_bwd = ( temp1258.fun ( &temp1258.env ,  (  self4099 ) ,  (  from_dash_pos4108 ) ,  (  to_dash_pos4109 ) ) ) , .f_to_dash_bwd = (  to_dash_pos4109 ) } );
    enum CAllocator_10  al4112 = ( ( ( * (  actions4110 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in4113 = ( (  is_dash_none1272 ) ( (  before_dash_cursors4107 ) ) );
    if ( ( (  eq1273 ( ( ( ( * (  self4099 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_106_CustomChangeset ) ) ) || ( (  eq1273 ( ( ( ( * (  self4099 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_106_InputChangeset ) ) ) && (  is_dash_typed_dash_in4113 ) ) ) ) {
        struct Changeset_25 *  last_dash_changeset4114 = ( (  last_dash_ptr1275 ) ( ( (  to_dash_slice1277 ) ( ( ( * (  actions4110 ) ) .f_list ) ) ) ) );
        struct envunion131  temp1278 = ( (struct envunion131){ .fun = (  enum Unit_8  (*) (  struct env33*  ,    struct List_26 *  ,    struct Action_28  ) )add1279 , .env =  env->envinst33 } );
        ( temp1278.fun ( &temp1278.env ,  ( & ( ( * (  last_dash_changeset4114 ) ) .f_parts ) ) ,  (  action4111 ) ) );
    } else {
        struct Changeset_25  temp1301 = ( (struct Changeset_25) { .f_parts = ( (  mk1302 ) ( (  al4112 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1309 ) ( (  before_dash_cursors4107 ) ,  ( (struct Cursors_31) { .f_cur = (  from4101 ) , .f_sel = ( (  eq596 ( (  from4101 ) , (  to4103 ) ) ) ? ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) : ( ( Maybe_32_Just ) ( (  to4103 ) ) ) ) } ) ) ) } );
        struct Changeset_25 *  changeset4115 = ( &temp1301 );
        struct envunion1311  temp1310 = ( (struct envunion1311){ .fun = (  enum Unit_8  (*) (  struct env33*  ,    struct List_26 *  ,    struct Action_28  ) )add1279 , .env =  env->envinst33 } );
        ( temp1310.fun ( &temp1310.env ,  ( & ( ( * (  changeset4115 ) ) .f_parts ) ) ,  (  action4111 ) ) );
        struct envunion132  temp1312 = ( (struct envunion132){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Changeset_25  ) )add1313 , .env =  env->envinst21 } );
        ( temp1312.fun ( &temp1312.env ,  ( & ( ( * (  actions4110 ) ) .f_list ) ) ,  ( * (  changeset4115 ) ) ) );
        (*  actions4110 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in4113 ) ? ( ChangesetInputType_106_InputChangeset ) : ( ChangesetInputType_106_NoChangeset ) );
        (*  actions4110 ) .f_cur = (  op_dash_add314 ( ( ( * (  actions4110 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion130  temp1336 = ( (struct envunion130){ .fun = (  struct Pos_29  (*) (  struct env120*  ,    struct TextBuf_104 *  ,    struct Action_28  ) )action_dash_fwd1337 , .env =  env->envinst120 } );
    struct Pos_29  to_dash_fwd4116 = ( temp1336.fun ( &temp1336.env ,  (  self4099 ) ,  (  action4111 ) ) );
    if ( (  cmp293 ( ( (  num_dash_bytes1168 ) ( ( (  action4111 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_29  to_dash_fwd4117 = ( (  left_dash_pos1167 ) ( (  self4099 ) ,  (  to_dash_fwd4116 ) ) );
        return ( ( Maybe_209_Just ) ( ( (struct Cursors_31) { .f_cur = (  to_dash_fwd4117 ) , .f_sel = ( ( Maybe_32_Just ) ( ( (  action4111 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_209_Just ) ( ( (struct Cursors_31) { .f_cur = (  to_dash_fwd4116 ) , .f_sel = ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1204 (   struct env207* env ,    struct Pane_223 *  self4540 ,    struct StrView_30  s4542 ) {
    struct Pos_29  cur4543 = ( ( * (  self4540 ) ) .f_cursor );
    struct envunion208  temp1205 = ( (struct envunion208){ .fun = (  struct Maybe_209  (*) (  struct env128*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_209  ) )change1206 , .env =  env->envinst128 } );
    ( temp1205.fun ( &temp1205.env ,  ( ( * (  self4540 ) ) .f_buf ) ,  (  cur4543 ) ,  (  cur4543 ) ,  (  s4542 ) ,  ( (struct Maybe_209) { .tag = Maybe_209_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1344 (   struct env218* env ,    struct Pane_223 *  self4579 ,    int32_t  line4581 ) {
    struct envunion219  temp1345 = ( (struct envunion219){ .fun = (  struct Maybe_209  (*) (  struct env128*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_209  ) )change1206 , .env =  env->envinst128 } );
    ( temp1345.fun ( &temp1345.env ,  ( ( * (  self4579 ) ) .f_buf ) ,  ( (struct Pos_29) { .f_line = (  line4581 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_29) { .f_line = (  line4581 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike543 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_209) { .tag = Maybe_209_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1340 (   struct env229* env ,    struct Pane_223 *  self4600 ,    int32_t  indent4602 ) {
    struct RangeIter_154  temp1341 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4602 ) ) ) );
    while (true) {
        struct Maybe_156  __cond1342 =  next157 (&temp1341);
        if (  __cond1342 .tag == 0 ) {
            break;
        }
        int32_t  dref4603 =  __cond1342 .stuff .Maybe_156_Just_s .field0;
        struct envunion230  temp1343 = ( (struct envunion230){ .fun = (  enum Unit_8  (*) (  struct env218*  ,    struct Pane_223 *  ,    int32_t  ) )indent_dash_at1344 , .env =  env->envinst218 } );
        ( temp1343.fun ( &temp1343.env ,  (  self4600 ) ,  ( ( ( * (  self4600 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1173 ) ( (  self4600 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1346 (    struct Pane_223 *  self4519 ) {
    struct Pos_29  temp1347 = ( ( * (  self4519 ) ) .f_cursor );
    temp1347 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors1129 ) ( (  self4519 ) ,  ( temp1347 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1349 {
    enum Unit_8  (*fun) (  struct env207*  ,    struct Pane_223 *  ,    struct StrView_30  );
    struct env207 env;
};

struct envunion1351 {
    enum Unit_8  (*fun) (  struct env229*  ,    struct Pane_223 *  ,    int32_t  );
    struct env229 env;
};

enum MoveDirection_1353 {
    MoveDirection_1353_MoveFwd,
    MoveDirection_1353_MoveBwd,
};

enum MoveTarget_1354 {
    MoveTarget_1354_NextWordStart,
    MoveTarget_1354_NextWordEnd,
};

static  struct Pos_29   own1356 (    struct Pos_29  x1554 ) {
    return (  x1554 );
}

struct env1357 {
    struct Pane_223 *  pane4480;
    enum MoveDirection_1353  dir4482;
    ;
    struct Pos_29 *  prev4485;
    ;
};

static  bool   is_dash_at_dash_line_dash_end1359 (    struct Pane_223 *  pane4462 ,    struct Pos_29  pos4464 ) {
    return (  eq358 ( ( (  i32_dash_size423 ) ( ( (  pos4464 ) .f_bi ) ) ) , ( (  num_dash_bytes1168 ) ( ( (  line1135 ) ( ( ( * (  pane4462 ) ) .f_buf ) ,  ( (  pos4464 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1358 (    struct Pane_223 *  pane4467 ) {
    return ( (  is_dash_at_dash_line_dash_end1359 ) ( (  pane4467 ) ,  ( ( * (  pane4467 ) ) .f_cursor ) ) );
}

struct envunion1361 {
    enum Unit_8  (*fun) (  struct env1357*  );
    struct env1357 env;
};

static  enum Unit_8   advance1362 (   struct env1357* env ) {
    (* env->prev4485 ) = ( ( * ( env->pane4480 ) ) .f_cursor );
    enum MoveDirection_1353  dref4487 = ( env->dir4482 );
    switch (  dref4487 ) {
        case MoveDirection_1353_MoveFwd : {
            ( (  move_dash_right1173 ) ( ( env->pane4480 ) ) );
            break;
        }
        case MoveDirection_1353_MoveBwd : {
            ( (  move_dash_left1128 ) ( ( env->pane4480 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1366 {
    CharType_1366_CharSpace,
    CharType_1366_CharWord,
    CharType_1366_CharPunctuation,
};

struct Tuple2_1367 {
    enum CharType_1366  field0;
    enum CharType_1366  field1;
};

static struct Tuple2_1367 Tuple2_1367_Tuple2 (  enum CharType_1366  field0 ,  enum CharType_1366  field1 ) {
    return ( struct Tuple2_1367 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1365 (    enum CharType_1366  l3855 ,    enum CharType_1366  r3857 ) {
    struct Tuple2_1367  dref3858 = ( ( Tuple2_1367_Tuple2 ) ( (  l3855 ) ,  (  r3857 ) ) );
    if (  dref3858 .field0 == CharType_1366_CharSpace &&  dref3858 .field1 == CharType_1366_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3858 .field0 == CharType_1366_CharWord &&  dref3858 .field1 == CharType_1366_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3858 .field0 == CharType_1366_CharPunctuation &&  dref3858 .field1 == CharType_1366_CharPunctuation ) {
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

static  bool   is_dash_alpha1370 (    struct Char_65  c1490 ) {
    return ( ( (  cmp293 ( ( (  c1490 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1012 ) ( (  c1490 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1012 ) ( (  c1490 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1369 (    struct Char_65  c1511 ) {
    return ( ( (  is_dash_alpha1370 ) ( (  c1511 ) ) ) || ( (  is_dash_digit1011 ) ( (  c1511 ) ) ) );
}

static  bool   is_dash_whitespace1371 (    struct Char_65  c1493 ) {
    return ( ( (  eq482 ( (  c1493 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) || (  eq482 ( (  c1493 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq482 ( (  c1493 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1366   char_dash_type1368 (    struct Char_65  c3861 ) {
    if ( ( ( ( (  is_dash_alphanumeric1369 ) ( (  c3861 ) ) ) || (  eq482 ( (  c3861 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) || (  eq482 ( (  c3861 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1366_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1371 ) ( (  c3861 ) ) ) ) {
            return ( CharType_1366_CharSpace );
        } else {
            return ( CharType_1366_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1364 (    struct Char_65  l3864 ,    struct Char_65  r3866 ) {
    return ( !  eq1365 ( ( (  char_dash_type1368 ) ( (  l3864 ) ) ) , ( (  char_dash_type1368 ) ( (  r3866 ) ) ) ) );
}

static  struct Char_65   or_dash_else1373 (    struct Maybe_300  self1353 ,    struct Char_65  alt1355 ) {
    struct Maybe_300  dref1356 = (  self1353 );
    if ( dref1356.tag == Maybe_300_None_t ) {
        return (  alt1355 );
    }
    else {
        if ( dref1356.tag == Maybe_300_Just_t ) {
            return ( dref1356 .stuff .Maybe_300_Just_s .field0 );
        }
    }
}

static  struct Maybe_300   head1374 (    struct StrViewIter_470  it1160 ) {
    struct StrViewIter_470  temp1375 = ( (  into_dash_iter471 ) ( (  it1160 ) ) );
    return ( (  next475 ) ( ( &temp1375 ) ) );
}

static  struct Char_65   char_dash_at1372 (    struct Pane_223 *  pane4331 ,    struct Pos_29  pos4333 ) {
    struct StrView_30  line4334 = ( (  line1135 ) ( ( ( * (  pane4331 ) ) .f_buf ) ,  ( (  pos4333 ) .f_line ) ) );
    return ( (  or_dash_else1373 ) ( ( (  head1374 ) ( ( (  chars472 ) ( ( (  byte_dash_substr497 ) ( (  line4334 ) ,  ( (  i32_dash_size423 ) ( ( (  pos4333 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1168 ) ( (  line4334 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
}

struct StrConcatIter_1380 {
    struct StrViewIter_470  f_left;
    struct AppendIter_1062  f_right;
};

static  struct StrConcatIter_1380   into_dash_iter1382 (    struct StrConcatIter_1380  self1283 ) {
    return (  self1283 );
}

static  struct Maybe_300   next1383 (    struct StrConcatIter_1380 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1379 (    struct StrConcatIter_1380  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrConcatIter_1380  temp1381 = ( (  into_dash_iter1382 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_1380 *  it1095 = ( &temp1381 );
    while ( ( true ) ) {
        struct Maybe_300  dref1096 = ( (  next1383 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_300_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1380   into_dash_iter1385 (    struct StrConcat_71  dref1290 ) {
    return ( (struct StrConcatIter_1380) { .f_left = ( (  chars472 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1098 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_1380   chars1384 (    struct StrConcat_71  self1301 ) {
    return ( (  into_dash_iter1385 ) ( (  self1301 ) ) );
}

static  enum Unit_8   print1378 (    struct StrConcat_71  s1328 ) {
    ( (  for_dash_each1379 ) ( ( (  chars1384 ) ( (  s1328 ) ) ) ,  (  printf_dash_char339 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   println1377 (    struct StrView_30  s1331 ) {
    ( (  print1378 ) ( ( ( StrConcat_71_StrConcat ) ( (  s1331 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1386 (  ) {
    bool  temp1387;
    return (  temp1387 );
}

static  bool   todo1376 (  ) {
    ( (  println1377 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1386 ) ( ) );
}

static  bool   reached_dash_target1363 (    struct Pane_223 *  pane4472 ,    enum MoveTarget_1354  target4474 ,    struct Pos_29  prev4476 ) {
    return ( {  enum MoveTarget_1354  dref4477 = (  target4474 ) ;  dref4477 == MoveTarget_1354_NextWordStart ? ( ( (  is_dash_word_dash_boundary1364 ) ( ( (  char_dash_at1372 ) ( (  pane4472 ) ,  (  prev4476 ) ) ) ,  ( (  char_dash_at1372 ) ( (  pane4472 ) ,  ( ( * (  pane4472 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1365 ( ( (  char_dash_type1368 ) ( ( (  char_dash_at1372 ) ( (  pane4472 ) ,  ( ( * (  pane4472 ) ) .f_cursor ) ) ) ) ) , ( CharType_1366_CharSpace ) ) ) ) ) :  dref4477 == MoveTarget_1354_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1364 ) ( ( (  char_dash_at1372 ) ( (  pane4472 ) ,  (  prev4476 ) ) ) ,  ( (  char_dash_at1372 ) ( (  pane4472 ) ,  ( ( * (  pane4472 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1365 ( ( (  char_dash_type1368 ) ( ( (  char_dash_at1372 ) ( (  pane4472 ) ,  (  prev4476 ) ) ) ) ) , ( CharType_1366_CharSpace ) ) ) ) ) : ( (  todo1376 ) ( ) ) ; } );
}

struct envunion1389 {
    enum Unit_8  (*fun) (  struct env1357*  );
    struct env1357 env;
};

struct envunion1391 {
    enum Unit_8  (*fun) (  struct env1357*  );
    struct env1357 env;
};

static  enum Unit_8   advance_dash_word1352 (    struct Pane_223 *  pane4480 ,    enum MoveDirection_1353  dir4482 ,    enum MoveTarget_1354  target4484 ) {
    struct Pos_29  temp1355 = ( (  own1356 ) ( ( ( * (  pane4480 ) ) .f_cursor ) ) );
    struct Pos_29 *  prev4485 = ( &temp1355 );
    struct env1357 envinst1357 = {
        .pane4480 =  pane4480 ,
        .dir4482 =  dir4482 ,
        .prev4485 =  prev4485 ,
    };
    struct Pos_29  sel4488 = ( ( * (  pane4480 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4489 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1358 ) ( (  pane4480 ) ) );
    struct envunion1361  temp1360 = ( (struct envunion1361){ .fun = (  enum Unit_8  (*) (  struct env1357*  ) )advance1362 , .env =  envinst1357 } );
    ( temp1360.fun ( &temp1360.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4489 ) || ( (  reached_dash_target1363 ) ( (  pane4480 ) ,  (  target4484 ) ,  ( * (  prev4485 ) ) ) ) ) ) {
        sel4488 = ( ( * (  pane4480 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1358 ) ( (  pane4480 ) ) ) ) {
        if ( (  eq596 ( ( ( * (  pane4480 ) ) .f_cursor ) , ( * (  prev4485 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1389  temp1388 = ( (struct envunion1389){ .fun = (  enum Unit_8  (*) (  struct env1357*  ) )advance1362 , .env =  envinst1357 } );
        ( temp1388.fun ( &temp1388.env ) );
        sel4488 = ( ( * (  pane4480 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1391  temp1390 = ( (struct envunion1391){ .fun = (  enum Unit_8  (*) (  struct env1357*  ) )advance1362 , .env =  envinst1357 } );
        ( temp1390.fun ( &temp1390.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1358 ) ( (  pane4480 ) ) ) || ( (  reached_dash_target1363 ) ( (  pane4480 ) ,  (  target4484 ) ,  ( * (  prev4485 ) ) ) ) ) ) {
            enum MoveDirection_1353  dref4490 = (  dir4482 );
            switch (  dref4490 ) {
                case MoveDirection_1353_MoveFwd : {
                    ( (  move_dash_left1128 ) ( (  pane4480 ) ) );
                    break;
                }
                case MoveDirection_1353_MoveBwd : {
                    ( (  move_dash_right1173 ) ( (  pane4480 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq596 ( ( * (  prev4485 ) ) , ( ( * (  pane4480 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1164 ) ( (  pane4480 ) ,  ( ( Maybe_32_Just ) ( (  sel4488 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1396 (    struct List_23 *  l2436 ) {
    return ( ( * (  l2436 ) ) .f_count );
}

static  struct Changeset_25 *   get_dash_ptr1399 (    struct List_23 *  list2399 ,    size_t  i2401 ) {
    if ( ( (  cmp293 ( (  i2401 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2401 ) , ( ( * (  list2399 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2401 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2399 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1276 ) ( ( ( * (  list2399 ) ) .f_elements ) ,  (  i2401 ) ) );
}

static  struct Changeset_25   get1398 (    struct List_23 *  list2409 ,    size_t  i2411 ) {
    return ( * ( (  get_dash_ptr1399 ) ( (  list2409 ) ,  (  i2411 ) ) ) );
}

static  struct Changeset_25   elem_dash_get1397 (    struct List_23  self2485 ,    size_t  k2487 ) {
    return ( (  get1398 ) ( ( & (  self2485 ) ) ,  (  k2487 ) ) );
}

static  struct Action_28   undefined1408 (  ) {
    struct Action_28  temp1409;
    return (  temp1409 );
}

static  struct Action_28   or_dash_fail1407 (    struct Maybe_1233  x1346 ,    struct StrConcat_324  errmsg1348 ) {
    struct Maybe_1233  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_1233_None_t ) {
        ( (  panic326 ) ( (  errmsg1348 ) ) );
        return ( (  undefined1408 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_1233_Just_t ) {
            return ( dref1349 .stuff .Maybe_1233_Just_s .field0 );
        }
    }
}

static  struct Maybe_1233   try_dash_get1410 (    struct Slice_27  slice2169 ,    size_t  i2171 ) {
    if ( ( (  cmp293 ( (  i2171 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2171 ) , ( (  slice2169 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1233) { .tag = Maybe_1233_None_t } );
    }
    struct Action_28 *  elem_dash_ptr2172 = ( (  offset_dash_ptr1231 ) ( ( (  slice2169 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2171 ) ) ) ) );
    return ( ( Maybe_1233_Just ) ( ( * (  elem_dash_ptr2172 ) ) ) );
}

static  struct Action_28   get1406 (    struct Slice_27  slice2175 ,    size_t  i2177 ) {
    return ( (  or_dash_fail1407 ) ( ( (  try_dash_get1410 ) ( (  slice2175 ) ,  (  i2177 ) ) ) ,  ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2177 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2175 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_28   elem_dash_get1405 (    struct Slice_27  self2188 ,    size_t  idx2190 ) {
    return ( (  get1406 ) ( (  self2188 ) ,  (  idx2190 ) ) );
}

static  struct Action_28   last1404 (    struct Slice_27  s2350 ) {
    if ( (  eq358 ( ( (  s2350 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1250 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1405 ( (  s2350 ) , (  op_dash_sub292 ( ( (  s2350 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_27   to_dash_slice1411 (    struct List_26  l2534 ) {
    struct Action_28 *  ptr2535 = ( ( (  l2534 ) .f_elements ) .f_ptr );
    return ( (struct Slice_27) { .f_ptr = (  ptr2535 ) , .f_count = ( (  l2534 ) .f_count ) } );
}

static  struct Maybe_209   redo1395 (   struct env124* env ,    struct TextBuf_104 *  self4059 ) {
    ( (  flush_dash_insert_dash_action1182 ) ( (  self4059 ) ) );
    struct Actions_105 *  actions4060 = ( & ( ( * (  self4059 ) ) .f_actions ) );
    if ( (  cmp293 ( ( ( * (  actions4060 ) ) .f_cur ) , ( (  size1396 ) ( ( & ( ( * (  actions4060 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_209) { .tag = Maybe_209_None_t } );
    }
    struct Changeset_25  changeset4061 = (  elem_dash_get1397 ( ( ( * (  actions4060 ) ) .f_list ) , ( ( * (  actions4060 ) ) .f_cur ) ) );
    struct Pos_29  temp1400;
    struct Pos_29  to_dash_fwd4062 = (  temp1400 );
    struct SliceIter_1226  temp1401 =  into_dash_iter1228 ( ( (  changeset4061 ) .f_parts ) );
    while (true) {
        struct Maybe_1233  __cond1402 =  next1234 (&temp1401);
        if (  __cond1402 .tag == 0 ) {
            break;
        }
        struct Action_28  action4064 =  __cond1402 .stuff .Maybe_1233_Just_s .field0;
        struct envunion125  temp1403 = ( (struct envunion125){ .fun = (  struct Pos_29  (*) (  struct env120*  ,    struct TextBuf_104 *  ,    struct Action_28  ) )action_dash_fwd1337 , .env =  env->envinst120 } );
        to_dash_fwd4062 = ( temp1403.fun ( &temp1403.env ,  (  self4059 ) ,  (  action4064 ) ) );
    }
    (*  actions4060 ) .f_cur = (  op_dash_add314 ( ( ( * (  actions4060 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_28  last_dash_action4065 = ( (  last1404 ) ( ( (  to_dash_slice1411 ) ( ( (  changeset4061 ) .f_parts ) ) ) ) );
    if ( (  cmp293 ( ( (  num_dash_bytes1168 ) ( ( (  last_dash_action4065 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_29  to_dash_fwd4066 = ( (  left_dash_pos1167 ) ( (  self4059 ) ,  (  to_dash_fwd4062 ) ) );
        return ( ( Maybe_209_Just ) ( ( (struct Cursors_31) { .f_cur = (  to_dash_fwd4066 ) , .f_sel = ( ( Maybe_32_Just ) ( ( (  last_dash_action4065 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_209_Just ) ( ( (struct Cursors_31) { .f_cur = (  to_dash_fwd4062 ) , .f_sel = ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) } ) ) );
    }
}

struct env1413 {
    ;
    struct Pane_223 *  self4556;
};

struct envunion1414 {
    enum Unit_8  (*fun) (  struct env1413*  ,    struct Cursors_31  );
    struct env1413 env;
};

static  enum Unit_8   if_dash_just1412 (    struct Maybe_209  x1594 ,   struct envunion1414  fun1596 ) {
    struct Maybe_209  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_209_Just_t ) {
        struct envunion1414  temp1415 = (  fun1596 );
        ( temp1415.fun ( &temp1415.env ,  ( dref1597 .stuff .Maybe_209_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_209_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1416 (   struct env1413* env ,    struct Cursors_31  cursors4559 ) {
    ( (  set_dash_cursors1129 ) ( ( env->self4556 ) ,  ( (  cursors4559 ) .f_cur ) ,  ( (  cursors4559 ) .f_sel ) ,  ( CursorMovement_1130_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1393 (   struct env214* env ,    struct Pane_223 *  self4556 ) {
    struct envunion215  temp1394 = ( (struct envunion215){ .fun = (  struct Maybe_209  (*) (  struct env124*  ,    struct TextBuf_104 *  ) )redo1395 , .env =  env->envinst124 } );
    struct Maybe_209  mcursors4557 = ( temp1394.fun ( &temp1394.env ,  ( ( * (  self4556 ) ) .f_buf ) ) );
    struct env1413 envinst1413 = {
        .self4556 =  self4556 ,
    };
    ( (  if_dash_just1412 ) ( (  mcursors4557 ) ,  ( (struct envunion1414){ .fun = (  enum Unit_8  (*) (  struct env1413*  ,    struct Cursors_31  ) )lam1416 , .env =  envinst1413 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1422 {
    struct Slice_27  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1422   into_dash_iter1423 (    struct SliceReversedIter_1422  self2314 ) {
    return (  self2314 );
}

static  struct SliceReversedIter_1422   reversed1424 (    struct Slice_27  slice2311 ) {
    return ( (struct SliceReversedIter_1422) { .f_slice = (  slice2311 ) , .f_current_dash_offset = ( (  slice2311 ) .f_count ) } );
}

static  struct Maybe_1233   next1426 (    struct SliceReversedIter_1422 *  self2317 ) {
    size_t  off2318 = ( ( * (  self2317 ) ) .f_current_dash_offset );
    if ( (  eq358 ( (  off2318 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1233) { .tag = Maybe_1233_None_t } );
    }
    (*  self2317 ) .f_current_dash_offset = (  op_dash_sub292 ( (  off2318 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1233_Just ) ( (  elem_dash_get1405 ( ( ( * (  self2317 ) ) .f_slice ) , ( ( * (  self2317 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_29   action_dash_bwd1428 (   struct env118* env ,    struct TextBuf_104 *  self4025 ,    struct Action_28  action4027 ) {
    struct envunion119  temp1429 = ( (struct envunion119){ .fun = (  enum Unit_8  (*) (  struct env101*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ) )change_dash_no_dash_action592 , .env =  env->envinst101 } );
    ( temp1429.fun ( &temp1429.env ,  (  self4025 ) ,  ( (  action4027 ) .f_from ) ,  ( (  action4027 ) .f_to_dash_fwd ) ,  ( (  action4027 ) .f_bwd ) ) );
    return ( (  action4027 ) .f_to_dash_bwd );
}

static  struct Maybe_209   undo1420 (   struct env122* env ,    struct TextBuf_104 *  self4052 ) {
    ( (  flush_dash_insert_dash_action1182 ) ( (  self4052 ) ) );
    struct Actions_105 *  actions4053 = ( & ( ( * (  self4052 ) ) .f_actions ) );
    if ( (  eq358 ( ( ( * (  actions4053 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_209) { .tag = Maybe_209_None_t } );
    }
    (*  actions4053 ) .f_cur = (  op_dash_sub292 ( ( ( * (  actions4053 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_25  changeset4054 = (  elem_dash_get1397 ( ( ( * (  actions4053 ) ) .f_list ) , ( ( * (  actions4053 ) ) .f_cur ) ) );
    struct SliceReversedIter_1422  temp1421 =  into_dash_iter1423 ( ( (  reversed1424 ) ( ( (  to_dash_slice1411 ) ( ( (  changeset4054 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1233  __cond1425 =  next1426 (&temp1421);
        if (  __cond1425 .tag == 0 ) {
            break;
        }
        struct Action_28  action4056 =  __cond1425 .stuff .Maybe_1233_Just_s .field0;
        struct envunion123  temp1427 = ( (struct envunion123){ .fun = (  struct Pos_29  (*) (  struct env118*  ,    struct TextBuf_104 *  ,    struct Action_28  ) )action_dash_bwd1428 , .env =  env->envinst118 } );
        ( temp1427.fun ( &temp1427.env ,  (  self4052 ) ,  (  action4056 ) ) );
    }
    return ( ( Maybe_209_Just ) ( ( (  changeset4054 ) .f_before_dash_cursors ) ) );
}

struct env1431 {
    ;
    struct Pane_223 *  self4550;
};

struct envunion1432 {
    enum Unit_8  (*fun) (  struct env1431*  ,    struct Cursors_31  );
    struct env1431 env;
};

static  enum Unit_8   if_dash_just1430 (    struct Maybe_209  x1594 ,   struct envunion1432  fun1596 ) {
    struct Maybe_209  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_209_Just_t ) {
        struct envunion1432  temp1433 = (  fun1596 );
        ( temp1433.fun ( &temp1433.env ,  ( dref1597 .stuff .Maybe_209_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_209_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1434 (   struct env1431* env ,    struct Cursors_31  cursors4553 ) {
    ( (  set_dash_cursors1129 ) ( ( env->self4550 ) ,  ( (  cursors4553 ) .f_cur ) ,  ( (  cursors4553 ) .f_sel ) ,  ( CursorMovement_1130_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1418 (   struct env212* env ,    struct Pane_223 *  self4550 ) {
    struct envunion213  temp1419 = ( (struct envunion213){ .fun = (  struct Maybe_209  (*) (  struct env122*  ,    struct TextBuf_104 *  ) )undo1420 , .env =  env->envinst122 } );
    struct Maybe_209  mcursors4551 = ( temp1419.fun ( &temp1419.env ,  ( ( * (  self4550 ) ) .f_buf ) ) );
    struct env1431 envinst1431 = {
        .self4550 =  self4550 ,
    };
    ( (  if_dash_just1430 ) ( (  mcursors4551 ) ,  ( (struct envunion1432){ .fun = (  enum Unit_8  (*) (  struct env1431*  ,    struct Cursors_31  ) )lam1434 , .env =  envinst1431 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_233   minmax1438 (    struct Pos_29  l1627 ,    struct Pos_29  r1629 ) {
    return ( (  cmp594 ( (  l1627 ) , (  r1629 ) ) == 0 ) ? ( ( Tuple2_233_Tuple2 ) ( (  l1627 ) ,  (  r1629 ) ) ) : ( ( Tuple2_233_Tuple2 ) ( (  r1629 ) ,  (  l1627 ) ) ) );
}

static  struct Pos_29   or_dash_else1439 (    struct Maybe_32  self1353 ,    struct Pos_29  alt1355 ) {
    struct Maybe_32  dref1356 = (  self1353 );
    if ( dref1356.tag == Maybe_32_None_t ) {
        return (  alt1355 );
    }
    else {
        if ( dref1356.tag == Maybe_32_Just_t ) {
            return ( dref1356 .stuff .Maybe_32_Just_s .field0 );
        }
    }
}

static  struct Pos_29   fst1440 (    struct Tuple2_233  dref1556 ) {
    return ( dref1556 .field0 );
}

static  struct Pos_29   snd1441 (    struct Tuple2_233  dref1559 ) {
    return ( dref1559 .field1 );
}

static  struct Tuple2_233   selection1437 (    struct Pane_223 *  self4562 ) {
    struct Tuple2_233  from_dash_to4563 = ( (  minmax1438 ) ( ( (  or_dash_else1439 ) ( ( ( * (  self4562 ) ) .f_sel ) ,  ( ( * (  self4562 ) ) .f_cursor ) ) ) ,  ( ( * (  self4562 ) ) .f_cursor ) ) );
    struct Pos_29  from4564 = ( (  fst1440 ) ( (  from_dash_to4563 ) ) );
    struct Pos_29  to4565 = ( (  right_dash_pos1174 ) ( ( ( * (  self4562 ) ) .f_buf ) ,  ( (  snd1441 ) ( (  from_dash_to4563 ) ) ) ) );
    return ( ( Tuple2_233_Tuple2 ) ( (  from4564 ) ,  (  to4565 ) ) );
}

struct env1444 {
    ;
    struct Editor_251 *  ed4676;
};

struct envunion1445 {
    enum Unit_8  (*fun) (  struct env1444*  ,    struct StrView_30  );
    struct env1444 env;
};

static  enum Unit_8   if_dash_just1443 (    struct Maybe_85  x1594 ,   struct envunion1445  fun1596 ) {
    struct Maybe_85  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_85_Just_t ) {
        struct envunion1445  temp1446 = (  fun1596 );
        ( temp1446.fun ( &temp1446.env ,  ( dref1597 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1447 (   struct env1444* env ,    struct StrView_30  cp4682 ) {
    ( (  free586 ) ( (  cp4682 ) ,  ( ( * ( env->ed4676 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1436 (   struct env236* env ,    struct Editor_251 *  ed4676 ) {
    struct Tuple2_233  dref4677 = ( (  selection1437 ) ( ( (  pane1172 ) ( (  ed4676 ) ) ) ) );
    
    struct envunion237  temp1442 = ( (struct envunion237){ .fun = (  struct StrView_30  (*) (  struct env126*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ) )str_dash_between1259 , .env =  env->envinst126 } );
    struct StrView_30  cpd4680 = ( temp1442.fun ( &temp1442.env ,  ( ( ( * (  ed4676 ) ) .f_pane ) .f_buf ) ,  ( dref4677 .field0 ) ,  ( dref4677 .field1 ) ) );
    struct env1444 envinst1444 = {
        .ed4676 =  ed4676 ,
    };
    ( (  if_dash_just1443 ) ( ( ( * (  ed4676 ) ) .f_clipboard ) ,  ( (struct envunion1445){ .fun = (  enum Unit_8  (*) (  struct env1444*  ,    struct StrView_30  ) )lam1447 , .env =  envinst1444 } ) ) );
    (*  ed4676 ) .f_clipboard = ( ( Maybe_85_Just ) ( (  cpd4680 ) ) );
    return ( Unit_8_Unit );
}

struct env1452 {
    struct Pane_223 *  self4568;
    ;
};

struct envunion1453 {
    enum Unit_8  (*fun) (  struct env1452*  ,    struct Cursors_31  );
    struct env1452 env;
};

static  enum Unit_8   if_dash_just1451 (    struct Maybe_209  x1594 ,   struct envunion1453  fun1596 ) {
    struct Maybe_209  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_209_Just_t ) {
        struct envunion1453  temp1454 = (  fun1596 );
        ( temp1454.fun ( &temp1454.env ,  ( dref1597 .stuff .Maybe_209_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_209_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1455 (   struct env1452* env ,    struct Cursors_31  cursors4576 ) {
    ( (  set_dash_cursors1129 ) ( ( env->self4568 ) ,  ( (  cursors4576 ) .f_cur ) ,  ( (  cursors4576 ) .f_sel ) ,  ( CursorMovement_1130_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1449 (   struct env216* env ,    struct Pane_223 *  self4568 ,    struct Tuple2_233  dref4569 ,    struct StrView_30  cp4573 ) {
    struct envunion217  temp1450 = ( (struct envunion217){ .fun = (  struct Maybe_209  (*) (  struct env128*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_209  ) )change1206 , .env =  env->envinst128 } );
    struct Maybe_209  mcursors4574 = ( temp1450.fun ( &temp1450.env ,  ( ( * (  self4568 ) ) .f_buf ) ,  ( dref4569 .field0 ) ,  ( dref4569 .field1 ) ,  (  cp4573 ) ,  ( ( Maybe_209_Just ) ( ( (struct Cursors_31) { .f_cur = ( ( * (  self4568 ) ) .f_cursor ) , .f_sel = ( ( * (  self4568 ) ) .f_sel ) } ) ) ) ) );
    struct env1452 envinst1452 = {
        .self4568 =  self4568 ,
    };
    ( (  if_dash_just1451 ) ( (  mcursors4574 ) ,  ( (struct envunion1453){ .fun = (  enum Unit_8  (*) (  struct env1452*  ,    struct Cursors_31  ) )lam1455 , .env =  envinst1452 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1457 {
    enum Unit_8  (*fun) (  struct env236*  ,    struct Editor_251 *  );
    struct env236 env;
};

struct envunion1459 {
    enum Unit_8  (*fun) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  );
    struct env216 env;
};

struct envunion1461 {
    enum Unit_8  (*fun) (  struct env236*  ,    struct Editor_251 *  );
    struct env236 env;
};

static  struct StrBuilder_62   mk1467 (    enum CAllocator_10  al2900 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk451 ) ( (  al2900 ) ) ) } );
}

struct IntStrIter_1473 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1472 {
    struct StrViewIter_470  f_left;
    struct IntStrIter_1473  f_right;
};

struct StrConcatIter_1471 {
    struct StrConcatIter_1472  f_left;
    struct StrViewIter_470  f_right;
};

struct env1474 {
    struct StrBuilder_62 *  builder2868;
    struct env60 envinst60;
};

struct envunion1475 {
    enum Unit_8  (*fun) (  struct env1474*  ,    struct Char_65  );
    struct env1474 env;
};

static  struct StrConcatIter_1471   into_dash_iter1477 (    struct StrConcatIter_1471  self1283 ) {
    return (  self1283 );
}

struct env1483 {
    size_t  base1379;
    ;
};

struct envunion1484 {
    size_t  (*fun) (  struct env1483*  ,    int32_t  ,    size_t  );
    struct env1483 env;
};

static  size_t   reduce1482 (    struct Range_151  iterable1111 ,    size_t  base1113 ,   struct envunion1484  fun1115 ) {
    size_t  x1116 = (  base1113 );
    struct RangeIter_154  it1117 = ( (  into_dash_iter155 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_156  dref1118 = ( (  next157 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_156_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_156_Just_t ) {
                struct envunion1484  temp1485 = (  fun1115 );
                x1116 = ( temp1485.fun ( &temp1485.env ,  ( dref1118 .stuff .Maybe_156_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1486 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1486);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1487;
    return (  temp1487 );
}

static  size_t   lam1488 (   struct env1483* env ,    int32_t  item1383 ,    size_t  x1385 ) {
    return (  op_dash_mul416 ( (  x1385 ) , ( env->base1379 ) ) );
}

static  size_t   pow1481 (    size_t  base1379 ,    int32_t  p1381 ) {
    struct env1483 envinst1483 = {
        .base1379 =  base1379 ,
    };
    return ( (  reduce1482 ) ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( (  p1381 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1484){ .fun = (  size_t  (*) (  struct env1483*  ,    int32_t  ,    size_t  ) )lam1488 , .env =  envinst1483 } ) ) );
}

static  uint8_t   cast1489 (    size_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_300   next1480 (    struct IntStrIter_1473 *  self1392 ) {
    if ( ( ( * (  self1392 ) ) .f_negative ) ) {
        (*  self1392 ) .f_negative = ( false );
        return ( ( Maybe_300_Just ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp158 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    size_t  trim_dash_down1393 = ( (  pow1481 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub165 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1394 = (  op_dash_div347 ( ( ( * (  self1392 ) ) .f_int ) , (  trim_dash_down1393 ) ) );
    size_t  upper_dash_mask1395 = (  op_dash_mul416 ( (  op_dash_div347 ( (  upper1394 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1396 = ( ( (  cast1489 ) ( (  op_dash_sub292 ( (  upper1394 ) , (  upper_dash_mask1395 ) ) ) ) ) );
    (*  self1392 ) .f_len = (  op_dash_sub165 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1397 = ( (  char_dash_from_dash_u81081 ) ( (  op_dash_add971 ( (  digit1396 ) , (  from_dash_integral311 ( 48 ) ) ) ) ) );
    return ( ( Maybe_300_Just ) ( (  digit_dash_char1397 ) ) );
}

static  struct Maybe_300   next1479 (    struct StrConcatIter_1472 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1480 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next1478 (    struct StrConcatIter_1471 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next1479 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1470 (    struct StrConcatIter_1471  iterable1092 ,   struct envunion1475  fun1094 ) {
    struct StrConcatIter_1471  temp1476 = ( (  into_dash_iter1477 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_1471 *  it1095 = ( &temp1476 );
    while ( ( true ) ) {
        struct Maybe_300  dref1096 = ( (  next1478 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_300_Just_t ) {
                struct envunion1475  temp1490 = (  fun1094 );
                ( temp1490.fun ( &temp1490.env ,  ( dref1096 .stuff .Maybe_300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1497 (    size_t  self1400 ) {
    if ( (  eq358 ( (  self1400 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1401 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp293 ( (  self1400 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1400 = (  op_dash_div347 ( (  self1400 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1401 = (  op_dash_add160 ( (  digits1401 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1401 );
}

static  struct IntStrIter_1473   uint_dash_iter1496 (    size_t  int1407 ) {
    return ( (struct IntStrIter_1473) { .f_int = (  int1407 ) , .f_len = ( (  count_dash_digits1497 ) ( (  int1407 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1473   chars1495 (    size_t  self1419 ) {
    return ( (  uint_dash_iter1496 ) ( (  self1419 ) ) );
}

static  struct StrConcatIter_1472   into_dash_iter1494 (    struct StrConcat_79  dref1290 ) {
    return ( (struct StrConcatIter_1472) { .f_left = ( (  chars472 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1495 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_1472   chars1493 (    struct StrConcat_79  self1301 ) {
    return ( (  into_dash_iter1494 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_1471   into_dash_iter1492 (    struct StrConcat_78  dref1290 ) {
    return ( (struct StrConcatIter_1471) { .f_left = ( (  chars1493 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars472 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_1471   chars1491 (    struct StrConcat_78  self1301 ) {
    return ( (  into_dash_iter1492 ) ( (  self1301 ) ) );
}

static  enum Unit_8   write_dash_slice1502 (   struct env58* env ,    struct StrBuilder_62 *  builder2858 ,    struct Slice_14  s2860 ) {
    struct envunion59  temp1503 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all611 , .env =  env->envinst48 } );
    ( temp1503.fun ( &temp1503.env ,  ( & ( ( * (  builder2858 ) ) .f_chars ) ) ,  (  s2860 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_14   as_dash_u8_dash_slice1504 (    struct Char_65  c1458 ,    struct Array_341 *  buf1460 ) {
    struct Char_65  cc1461 = ( (  regularize340 ) ( (  c1458 ) ,  (  buf1460 ) ) );
    return ( (struct Slice_14) { .f_ptr = ( (  cc1461 ) .f_ptr ) , .f_count = ( (  cc1461 ) .f_num_dash_bytes ) } );
}

static  enum Unit_8   write_dash_char1500 (   struct env60* env ,    struct StrBuilder_62 *  builder2863 ,    struct Char_65  c2865 ) {
    struct envunion61  temp1501 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  ) )write_dash_slice1502 , .env =  env->envinst58 } );
    struct Array_341  temp1506;
    struct Array_341  temp1505 = (  temp1506 );
    ( temp1501.fun ( &temp1501.env ,  (  builder2863 ) ,  ( (  as_dash_u8_dash_slice1504 ) ( (  c2865 ) ,  ( &temp1505 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1498 (   struct env1474* env ,    struct Char_65  c2872 ) {
    struct envunion64  temp1499 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1500 , .env =  env->envinst60 } );
    return ( temp1499.fun ( &temp1499.env ,  ( env->builder2868 ) ,  (  c2872 ) ) );
}

static  enum Unit_8   write1469 (   struct env63* env ,    struct StrBuilder_62 *  builder2868 ,    struct StrConcat_78  s2870 ) {
    struct env1474 envinst1474 = {
        .builder2868 =  builder2868 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1470 ) ( ( (  chars1491 ) ( (  s2870 ) ) ) ,  ( (struct envunion1475){ .fun = (  enum Unit_8  (*) (  struct env1474*  ,    struct Char_65  ) )lam1498 , .env =  envinst1474 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1510 (    uint8_t *  p398 ) {
    return ( (uint8_t * ) (  p398 ) );
}

static  struct Slice_14   cast_dash_slice1509 (    struct Slice_14  s2347 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1510 ) ( ( (  s2347 ) .f_ptr ) ) ) , .f_count = ( (  s2347 ) .f_count ) } );
}

static  struct StrView_30   as_dash_str1508 (    struct StrBuilder_62 *  builder2906 ) {
    return ( (struct StrView_30) { .f_contents = ( (  cast_dash_slice1509 ) ( ( (  subslice479 ) ( ( ( ( * (  builder2906 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2906 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_30   mk_dash_dyn_dash_str1465 (   struct env75* env ,    struct StrConcat_78  s2926 ,    enum CAllocator_10  al2928 ) {
    struct StrBuilder_62  temp1466 = ( (  mk1467 ) ( (  al2928 ) ) );
    struct StrBuilder_62 *  sb2929 = ( &temp1466 );
    struct envunion77  temp1468 = ( (struct envunion77){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_78  ) )write1469 , .env =  env->envinst63 } );
    ( temp1468.fun ( &temp1468.env ,  (  sb2929 ) ,  (  s2926 ) ) );
    struct envunion76  temp1507 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1500 , .env =  env->envinst60 } );
    ( temp1507.fun ( &temp1507.env ,  (  sb2929 ) ,  ( (  nullchar583 ) ( ) ) ) );
    struct StrView_30  dynstr2930 = ( (  as_dash_str1508 ) ( (  sb2929 ) ) );
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2930 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub292 ( ( ( (  dynstr2930 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1463 (   struct env238* env ,    struct Editor_251 *  ed4690 ,    struct StrConcat_78  s4692 ) {
    ( (  reset_dash_msg1117 ) ( (  ed4690 ) ) );
    struct envunion239  temp1464 = ( (struct envunion239){ .fun = (  struct StrView_30  (*) (  struct env75*  ,    struct StrConcat_78  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1465 , .env =  env->envinst75 } );
    (*  ed4690 ) .f_msg = ( ( Maybe_85_Just ) ( ( temp1464.fun ( &temp1464.env ,  (  s4692 ) ,  ( ( * (  ed4690 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1513 {
    enum Unit_8  (*fun) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  );
    struct env216 env;
};

struct env1512 {
    ;
    struct env216 envinst216;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct Editor_251 *  ed4750;
};

struct envunion1514 {
    enum Unit_8  (*fun) (  struct env1512*  ,    struct StrView_30  );
    struct env1512 env;
};

static  enum Unit_8   if_dash_just1511 (    struct Maybe_85  x1594 ,   struct envunion1514  fun1596 ) {
    struct Maybe_85  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_85_Just_t ) {
        struct envunion1514  temp1515 = (  fun1596 );
        ( temp1515.fun ( &temp1515.env ,  ( dref1597 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_29   max_dash_pos1517 (    struct Pane_223 *  pane4498 ) {
    return ( {  struct Maybe_32  dref4499 = ( ( * (  pane4498 ) ) .f_sel ) ; dref4499.tag == Maybe_32_Just_t ? ( (  max595 ) ( ( ( * (  pane4498 ) ) .f_cursor ) ,  ( dref4499 .stuff .Maybe_32_Just_s .field0 ) ) ) : ( ( * (  pane4498 ) ) .f_cursor ) ; } );
}

static  struct StrView_30   own1518 (    struct StrView_30  x1554 ) {
    return (  x1554 );
}

static  uint8_t   last1519 (    struct Slice_14  s2350 ) {
    if ( (  eq358 ( ( (  s2350 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1250 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get488 ( (  s2350 ) , (  op_dash_sub292 ( ( (  s2350 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1520 (    int32_t  x1641 ,    int32_t  mn1643 ,    int32_t  mx1645 ) {
    if ( (  cmp158 ( (  x1641 ) , (  mn1643 ) ) == 0 ) ) {
        return (  mn1643 );
    } else {
        if ( (  cmp158 ( (  x1641 ) , (  mx1645 ) ) == 2 ) ) {
            return (  mx1645 );
        } else {
            return (  x1641 );
        }
    }
}

struct envunion1523 {
    enum Unit_8  (*fun) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  );
    struct env216 env;
};

static  enum Unit_8   lam1516 (   struct env1512* env ,    struct StrView_30  cp4761 ) {
    struct Pos_29  start4762 = ( (  max_dash_pos1517 ) ( ( (  pane1172 ) ( ( env->ed4750 ) ) ) ) );
    struct StrView_30  cp4763 = ( (  own1518 ) ( (  cp4761 ) ) );
    if ( (  eq306 ( ( (  last1519 ) ( ( (  cp4763 ) .f_contents ) ) ) , ( (  ascii_dash_u8494 ) ( ( (  from_dash_charlike495 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        int32_t  max_dash_lines4764 = ( (  num_dash_lines1175 ) ( ( ( * ( (  pane1172 ) ( ( env->ed4750 ) ) ) ) .f_buf ) ) );
        struct Pos_29  start4765 = ( (struct Pos_29) { .f_line = ( (  clamp1520 ) ( (  op_dash_add160 ( ( (  start4762 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  max_dash_lines4764 ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
        if ( (  eq597 ( ( (  start4765 ) .f_line ) , (  max_dash_lines4764 ) ) ) ) {
            cp4763 = ( (  byte_dash_substr497 ) ( (  cp4763 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub292 ( ( ( (  cp4763 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
        struct envunion1513  temp1521 = ( (struct envunion1513){ .fun = (  enum Unit_8  (*) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  ) )replace_dash_selection1449 , .env =  env->envinst216 } );
        ( temp1521.fun ( &temp1521.env ,  ( (  pane1172 ) ( ( env->ed4750 ) ) ) ,  ( ( Tuple2_233_Tuple2 ) ( (  start4765 ) ,  (  start4765 ) ) ) ,  (  cp4763 ) ) );
    } else {
        struct Pos_29  start4766 = ( (  right_dash_pos1174 ) ( ( ( ( * ( env->ed4750 ) ) .f_pane ) .f_buf ) ,  (  start4762 ) ) );
        struct envunion1523  temp1522 = ( (struct envunion1523){ .fun = (  enum Unit_8  (*) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  ) )replace_dash_selection1449 , .env =  env->envinst216 } );
        ( temp1522.fun ( &temp1522.env ,  ( (  pane1172 ) ( ( env->ed4750 ) ) ) ,  ( ( Tuple2_233_Tuple2 ) ( (  start4766 ) ,  (  start4766 ) ) ) ,  (  cp4763 ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1526 {
    enum Unit_8  (*fun) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  );
    struct env216 env;
};

struct env1525 {
    ;
    ;
    struct env216 envinst216;
    ;
    ;
    ;
    ;
    ;
    struct Editor_251 *  ed4750;
};

struct envunion1527 {
    enum Unit_8  (*fun) (  struct env1525*  ,    struct StrView_30  );
    struct env1525 env;
};

static  enum Unit_8   if_dash_just1524 (    struct Maybe_85  x1594 ,   struct envunion1527  fun1596 ) {
    struct Maybe_85  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_85_Just_t ) {
        struct envunion1527  temp1528 = (  fun1596 );
        ( temp1528.fun ( &temp1528.env ,  ( dref1597 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_29   min_dash_pos1530 (    struct Pane_223 *  pane4493 ) {
    return ( {  struct Maybe_32  dref4494 = ( ( * (  pane4493 ) ) .f_sel ) ; dref4494.tag == Maybe_32_Just_t ? ( (  min593 ) ( ( ( * (  pane4493 ) ) .f_cursor ) ,  ( dref4494 .stuff .Maybe_32_Just_s .field0 ) ) ) : ( ( * (  pane4493 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1529 (   struct env1525* env ,    struct StrView_30  cp4768 ) {
    struct Pos_29  start4769 = ( (  min_dash_pos1530 ) ( ( (  pane1172 ) ( ( env->ed4750 ) ) ) ) );
    if ( (  eq306 ( ( (  last1519 ) ( ( (  cp4768 ) .f_contents ) ) ) , ( (  ascii_dash_u8494 ) ( ( (  from_dash_charlike495 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_29  temp1531 = (  start4769 );
        temp1531 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4769 = ( temp1531 );
    }
    struct envunion1526  temp1532 = ( (struct envunion1526){ .fun = (  enum Unit_8  (*) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  ) )replace_dash_selection1449 , .env =  env->envinst216 } );
    ( temp1532.fun ( &temp1532.env ,  ( (  pane1172 ) ( ( env->ed4750 ) ) ) ,  ( ( Tuple2_233_Tuple2 ) ( (  start4769 ) ,  (  start4769 ) ) ) ,  (  cp4768 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1535 {
    enum Unit_8  (*fun) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  );
    struct env216 env;
};

struct env1534 {
    ;
    ;
    struct env216 envinst216;
    ;
    ;
    ;
    struct Editor_251 *  ed4750;
};

struct envunion1536 {
    enum Unit_8  (*fun) (  struct env1534*  ,    struct StrView_30  );
    struct env1534 env;
};

static  enum Unit_8   if_dash_just1533 (    struct Maybe_85  x1594 ,   struct envunion1536  fun1596 ) {
    struct Maybe_85  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_85_Just_t ) {
        struct envunion1536  temp1537 = (  fun1596 );
        ( temp1537.fun ( &temp1537.env ,  ( dref1597 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1538 (   struct env1534* env ,    struct StrView_30  cp4771 ) {
    struct Pos_29  start4772 = ( (  min_dash_pos1530 ) ( ( (  pane1172 ) ( ( env->ed4750 ) ) ) ) );
    struct Pos_29  end4773 = ( (  max_dash_pos1517 ) ( ( (  pane1172 ) ( ( env->ed4750 ) ) ) ) );
    struct envunion1535  temp1539 = ( (struct envunion1535){ .fun = (  enum Unit_8  (*) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  ) )replace_dash_selection1449 , .env =  env->envinst216 } );
    struct Pos_29  temp1540 = (  end4773 );
    temp1540 .  f_bi = (  op_dash_add160 ( ( (  end4773 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( temp1539.fun ( &temp1539.env ,  ( (  pane1172 ) ( ( env->ed4750 ) ) ) ,  ( ( Tuple2_233_Tuple2 ) ( (  start4772 ) ,  ( temp1540 ) ) ) ,  (  cp4771 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1541 (    struct Pane_223 *  pane4512 ) {
    struct Pos_29  min_dash_pos4513 = ( (  min_dash_pos1530 ) ( (  pane4512 ) ) );
    struct Pos_29  max_dash_pos4514 = ( (  max_dash_pos1517 ) ( (  pane4512 ) ) );
    int32_t  max_dash_pos_dash_max4515 = ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( ( (  line1135 ) ( ( ( * (  pane4512 ) ) .f_buf ) ,  ( (  max_dash_pos4514 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq597 ( ( (  min_dash_pos4513 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq597 ( ( (  max_dash_pos4514 ) .f_bi ) , (  max_dash_pos_dash_max4515 ) ) ) ) ) ) {
        struct Pos_29  temp1542 = (  min_dash_pos4513 );
        temp1542 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4512 ) .f_sel = ( ( Maybe_32_Just ) ( ( temp1542 ) ) );
        struct Pos_29  temp1543 = (  max_dash_pos4514 );
        temp1543 .  f_bi = (  max_dash_pos_dash_max4515 );
        (*  pane4512 ) .f_cursor = ( temp1543 );
    } else {
        if ( (  cmp158 ( (  op_dash_add160 ( ( (  max_dash_pos4514 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1175 ) ( ( ( * (  pane4512 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_29  temp1544 = (  min_dash_pos4513 );
        temp1544 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4512 ) .f_sel = ( ( Maybe_32_Just ) ( ( temp1544 ) ) );
        int32_t  next_dash_line4516 = (  op_dash_add160 ( ( (  max_dash_pos4514 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4512 ) .f_cursor = ( (struct Pos_29) { .f_line = (  next_dash_line4516 ) , .f_bi = ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( ( (  line1135 ) ( ( ( * (  pane4512 ) ) .f_buf ) ,  (  next_dash_line4516 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1545 (    struct Maybe_32  m1567 ) {
    struct Maybe_32  dref1568 = (  m1567 );
    if ( dref1568.tag == Maybe_32_None_t ) {
        return ( true );
    }
    else {
        if ( dref1568.tag == Maybe_32_Just_t ) {
            return ( false );
        }
    }
}

struct Maybe_1547 {
    enum {
        Maybe_1547_None_t,
        Maybe_1547_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_233  field0;
        } Maybe_1547_Just_s;
    } stuff;
};

static struct Maybe_1547 Maybe_1547_Just (  struct Tuple2_233  field0 ) {
    return ( struct Maybe_1547 ) { .tag = Maybe_1547_Just_t, .stuff = { .Maybe_1547_Just_s = { .field0 = field0 } } };
};

struct env1549 {
    ;
    struct StrView_30  query4625;
    ;
    ;
    struct Pane_223 *  pane4621;
    ;
};

struct envunion1551 {
    struct Maybe_249  (*fun) (  struct env1549*  ,    struct Pos_29  );
    struct env1549 env;
};

static  struct Maybe_249   find_dash_slice1553 (    struct Slice_14  haystack2328 ,    struct Slice_14  needle2330 ) {
    struct RangeIter_154  temp1554 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( ( (  size_dash_i32332 ) ( ( (  haystack2328 ) .f_count ) ) ) , ( (  size_dash_i32332 ) ( ( (  needle2330 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_156  __cond1555 =  next157 (&temp1554);
        if (  __cond1555 .tag == 0 ) {
            break;
        }
        int32_t  i2332 =  __cond1555 .stuff .Maybe_156_Just_s .field0;
        if ( (  eq521 ( ( (  subslice479 ) ( (  haystack2328 ) ,  ( (  i32_dash_size423 ) ( (  i2332 ) ) ) ,  (  op_dash_add314 ( ( (  i32_dash_size423 ) ( (  i2332 ) ) ) , ( (  needle2330 ) .f_count ) ) ) ) ) , (  needle2330 ) ) ) ) {
            return ( ( Maybe_249_Just ) ( ( (  i32_dash_size423 ) ( (  i2332 ) ) ) ) );
        }
    }
    return ( (struct Maybe_249) { .tag = Maybe_249_None_t } );
}

static  struct Maybe_249   search_dash_on_dash_line1552 (   struct env1549* env ,    struct Pos_29  pos4628 ) {
    return ( (  find_dash_slice1553 ) ( ( ( (  byte_dash_substr_dash_from477 ) ( ( (  line1135 ) ( ( ( * ( env->pane4621 ) ) .f_buf ) ,  ( (  pos4628 ) .f_line ) ) ) ,  ( (  i32_dash_size423 ) ( ( (  pos4628 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4625 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1561 (    int32_t  l241 ,    int32_t  r243 ) {
    return ( (  l241 ) / (  r243 ) );
}

static  int32_t   op_dash_mul1562 (    int32_t  l236 ,    int32_t  r238 ) {
    return ( (  l236 ) * (  r238 ) );
}

static  int32_t   mod1560 (    int32_t  l1537 ,    int32_t  d1539 ) {
    int32_t  r1540 = (  op_dash_div1561 ( (  l1537 ) , (  d1539 ) ) );
    int32_t  m1541 = (  op_dash_sub165 ( (  l1537 ) , (  op_dash_mul1562 ( (  r1540 ) , (  d1539 ) ) ) ) );
    if ( (  cmp158 ( (  m1541 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add160 ( (  d1539 ) , (  m1541 ) ) );
    } else {
        return (  m1541 );
    }
}

struct envunion1564 {
    struct Maybe_249  (*fun) (  struct env1549*  ,    struct Pos_29  );
    struct env1549 env;
};

static  struct Maybe_1547   search_dash_from1548 (    struct Pane_223 *  pane4621 ,    struct Pos_29  pos4623 ,    struct StrView_30  query4625 ) {
    struct env1549 envinst1549 = {
        .query4625 =  query4625 ,
        .pane4621 =  pane4621 ,
    };
    struct envunion1551  temp1550 = ( (struct envunion1551){ .fun = (  struct Maybe_249  (*) (  struct env1549*  ,    struct Pos_29  ) )search_dash_on_dash_line1552 , .env =  envinst1549 } );
    struct Maybe_249  dref4629 = ( temp1550.fun ( &temp1550.env ,  (  pos4623 ) ) );
    if ( dref4629.tag == Maybe_249_Just_t ) {
        struct Pos_29  temp1556 = (  pos4623 );
        temp1556 .  f_bi = (  op_dash_add160 ( ( (  pos4623 ) .f_bi ) , ( (  size_dash_i32332 ) ( ( dref4629 .stuff .Maybe_249_Just_s .field0 ) ) ) ) );
        struct Pos_29  sel_dash_pos4631 = ( temp1556 );
        struct Pos_29  temp1557 = (  pos4623 );
        temp1557 .  f_bi = (  op_dash_sub165 ( (  op_dash_add160 ( ( (  pos4623 ) .f_bi ) , ( (  size_dash_i32332 ) ( (  op_dash_add314 ( ( dref4629 .stuff .Maybe_249_Just_s .field0 ) , ( (  num_dash_bytes1168 ) ( (  query4625 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_29  cur_dash_pos4632 = ( temp1557 );
        return ( ( Maybe_1547_Just ) ( ( ( Tuple2_233_Tuple2 ) ( (  sel_dash_pos4631 ) ,  (  cur_dash_pos4632 ) ) ) ) );
    }
    else {
        if ( dref4629.tag == Maybe_249_None_t ) {
            int32_t  num_dash_lines4633 = ( (  num_dash_lines1175 ) ( ( ( * (  pane4621 ) ) .f_buf ) ) );
            struct RangeIter_154  temp1558 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4633 ) ) ) );
            while (true) {
                struct Maybe_156  __cond1559 =  next157 (&temp1558);
                if (  __cond1559 .tag == 0 ) {
                    break;
                }
                int32_t  i4635 =  __cond1559 .stuff .Maybe_156_Just_s .field0;
                int32_t  line4636 = ( (  mod1560 ) ( (  op_dash_add160 ( ( (  pos4623 ) .f_line ) , (  i4635 ) ) ) ,  (  num_dash_lines4633 ) ) );
                struct envunion1564  temp1563 = ( (struct envunion1564){ .fun = (  struct Maybe_249  (*) (  struct env1549*  ,    struct Pos_29  ) )search_dash_on_dash_line1552 , .env =  envinst1549 } );
                struct Maybe_249  dref4637 = ( temp1563.fun ( &temp1563.env ,  ( (struct Pos_29) { .f_line = (  line4636 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4637.tag == Maybe_249_Just_t ) {
                    struct Pos_29  sel_dash_pos4639 = ( (struct Pos_29) { .f_line = (  line4636 ) , .f_bi = ( (  size_dash_i32332 ) ( ( dref4637 .stuff .Maybe_249_Just_s .field0 ) ) ) } );
                    struct Pos_29  cur_dash_pos4640 = ( (struct Pos_29) { .f_line = (  line4636 ) , .f_bi = (  op_dash_sub165 ( ( (  size_dash_i32332 ) ( (  op_dash_add314 ( ( dref4637 .stuff .Maybe_249_Just_s .field0 ) , ( (  num_dash_bytes1168 ) ( (  query4625 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1547_Just ) ( ( ( Tuple2_233_Tuple2 ) ( (  sel_dash_pos4639 ) ,  (  cur_dash_pos4640 ) ) ) ) );
                }
                else {
                    if ( dref4637.tag == Maybe_249_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1547) { .tag = Maybe_1547_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1546 (    struct Editor_251 *  ed4734 ) {
    struct Maybe_85  dref4735 = ( ( * (  ed4734 ) ) .f_search_dash_term );
    if ( dref4735.tag == Maybe_85_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4735.tag == Maybe_85_Just_t ) {
            struct Maybe_1547  dref4737 = ( (  search_dash_from1548 ) ( ( (  pane1172 ) ( (  ed4734 ) ) ) ,  ( (  max_dash_pos1517 ) ( ( (  pane1172 ) ( (  ed4734 ) ) ) ) ) ,  ( dref4735 .stuff .Maybe_85_Just_s .field0 ) ) );
            if ( dref4737.tag == Maybe_1547_None_t ) {
            }
            else {
                if ( dref4737.tag == Maybe_1547_Just_t ) {
                    ( (  set_dash_cursors1129 ) ( ( (  pane1172 ) ( (  ed4734 ) ) ) ,  ( dref4737 .stuff .Maybe_1547_Just_s .field0 .field1 ) ,  ( ( Maybe_32_Just ) ( ( dref4737 .stuff .Maybe_1547_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1130_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct DownToRange_1570 {
    int32_t  f_from;
    int32_t  f_to;
};

struct DownToIter_1569 {
    struct DownToRange_1570  f_dtrange;
    int32_t  f_i;
};

static  struct DownToIter_1569   into_dash_iter1571 (    struct DownToRange_1570  self918 ) {
    return ( (struct DownToIter_1569) { .f_dtrange = (  self918 ) , .f_i = ( (  self918 ) .f_from ) } );
}

static  struct DownToRange_1570   down_dash_to1572 (    int32_t  from913 ,    int32_t  to915 ) {
    return ( (struct DownToRange_1570) { .f_from = (  from913 ) , .f_to = (  to915 ) } );
}

static  struct Maybe_156   next1574 (    struct DownToIter_1569 *  self924 ) {
    if ( (  cmp158 ( ( ( * (  self924 ) ) .f_i ) , ( ( ( * (  self924 ) ) .f_dtrange ) .f_to ) ) == 0 ) ) {
        return ( (struct Maybe_156) { .tag = Maybe_156_None_t } );
    }
    struct Maybe_156  x925 = ( ( Maybe_156_Just ) ( ( ( * (  self924 ) ) .f_i ) ) );
    (*  self924 ) .f_i = (  op_dash_sub165 ( ( ( * (  self924 ) ) .f_i ) , (  from_dash_integral56 ( 1 ) ) ) );
    return (  x925 );
}

static  struct Maybe_249   find_dash_last_dash_occurence_dash_of_dash_slice1567 (    struct Slice_14  haystack2335 ,    struct Slice_14  needle2337 ) {
    struct DownToIter_1569  temp1568 =  into_dash_iter1571 ( ( (  down_dash_to1572 ) ( (  op_dash_sub165 ( ( (  size_dash_i32332 ) ( ( (  haystack2335 ) .f_count ) ) ) , ( (  size_dash_i32332 ) ( ( (  needle2337 ) .f_count ) ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) );
    while (true) {
        struct Maybe_156  __cond1573 =  next1574 (&temp1568);
        if (  __cond1573 .tag == 0 ) {
            break;
        }
        int32_t  i2339 =  __cond1573 .stuff .Maybe_156_Just_s .field0;
        if ( (  eq521 ( ( (  subslice479 ) ( (  haystack2335 ) ,  ( (  i32_dash_size423 ) ( (  i2339 ) ) ) ,  (  op_dash_add314 ( ( (  i32_dash_size423 ) ( (  i2339 ) ) ) , ( (  needle2337 ) .f_count ) ) ) ) ) , (  needle2337 ) ) ) ) {
            return ( ( Maybe_249_Just ) ( ( (  i32_dash_size423 ) ( (  i2339 ) ) ) ) );
        }
    }
    return ( (struct Maybe_249) { .tag = Maybe_249_None_t } );
}

static  struct Maybe_1547   search_dash_back1566 (    struct Pane_223 *  pane4643 ,    struct Pos_29  pos4645 ,    struct StrView_30  query4647 ) {
    struct Maybe_249  dref4648 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1567 ) ( ( ( (  byte_dash_substr497 ) ( ( (  line1135 ) ( ( ( * (  pane4643 ) ) .f_buf ) ,  ( (  pos4645 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size423 ) ( ( (  pos4645 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4647 ) .f_contents ) ) );
    if ( dref4648.tag == Maybe_249_Just_t ) {
        struct Pos_29  temp1575 = (  pos4645 );
        temp1575 .  f_bi = ( (  size_dash_i32332 ) ( ( dref4648 .stuff .Maybe_249_Just_s .field0 ) ) );
        struct Pos_29  sel_dash_pos4650 = ( temp1575 );
        struct Pos_29  temp1576 = (  pos4645 );
        temp1576 .  f_bi = (  op_dash_sub165 ( ( (  size_dash_i32332 ) ( (  op_dash_add314 ( ( dref4648 .stuff .Maybe_249_Just_s .field0 ) , ( (  num_dash_bytes1168 ) ( (  query4647 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_29  cur_dash_pos4651 = ( temp1576 );
        return ( ( Maybe_1547_Just ) ( ( ( Tuple2_233_Tuple2 ) ( (  sel_dash_pos4650 ) ,  (  cur_dash_pos4651 ) ) ) ) );
    }
    else {
        if ( dref4648.tag == Maybe_249_None_t ) {
            int32_t  num_dash_lines4652 = ( (  num_dash_lines1175 ) ( ( ( * (  pane4643 ) ) .f_buf ) ) );
            struct RangeIter_154  temp1577 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4652 ) ) ) );
            while (true) {
                struct Maybe_156  __cond1578 =  next157 (&temp1577);
                if (  __cond1578 .tag == 0 ) {
                    break;
                }
                int32_t  i4654 =  __cond1578 .stuff .Maybe_156_Just_s .field0;
                int32_t  line4655 = ( (  mod1560 ) ( (  op_dash_sub165 ( ( (  pos4645 ) .f_line ) , (  i4654 ) ) ) ,  (  num_dash_lines4652 ) ) );
                struct Maybe_249  dref4656 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1567 ) ( ( ( (  line1135 ) ( ( ( * (  pane4643 ) ) .f_buf ) ,  (  line4655 ) ) ) .f_contents ) ,  ( (  query4647 ) .f_contents ) ) );
                if ( dref4656.tag == Maybe_249_Just_t ) {
                    struct Pos_29  sel_dash_pos4658 = ( (struct Pos_29) { .f_line = (  line4655 ) , .f_bi = ( (  size_dash_i32332 ) ( ( dref4656 .stuff .Maybe_249_Just_s .field0 ) ) ) } );
                    struct Pos_29  cur_dash_pos4659 = ( (struct Pos_29) { .f_line = (  line4655 ) , .f_bi = (  op_dash_sub165 ( ( (  size_dash_i32332 ) ( (  op_dash_add314 ( ( dref4656 .stuff .Maybe_249_Just_s .field0 ) , ( (  num_dash_bytes1168 ) ( (  query4647 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1547_Just ) ( ( ( Tuple2_233_Tuple2 ) ( (  sel_dash_pos4658 ) ,  (  cur_dash_pos4659 ) ) ) ) );
                }
                else {
                    if ( dref4656.tag == Maybe_249_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1547) { .tag = Maybe_1547_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1565 (    struct Editor_251 *  ed4742 ) {
    struct Maybe_85  dref4743 = ( ( * (  ed4742 ) ) .f_search_dash_term );
    if ( dref4743.tag == Maybe_85_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4743.tag == Maybe_85_Just_t ) {
            struct Maybe_1547  dref4745 = ( (  search_dash_back1566 ) ( ( (  pane1172 ) ( (  ed4742 ) ) ) ,  ( (  min_dash_pos1530 ) ( ( (  pane1172 ) ( (  ed4742 ) ) ) ) ) ,  ( dref4743 .stuff .Maybe_85_Just_s .field0 ) ) );
            if ( dref4745.tag == Maybe_1547_None_t ) {
            }
            else {
                if ( dref4745.tag == Maybe_1547_Just_t ) {
                    ( (  set_dash_cursors1129 ) ( ( (  pane1172 ) ( (  ed4742 ) ) ) ,  ( dref4745 .stuff .Maybe_1547_Just_s .field0 .field1 ) ,  ( ( Maybe_32_Just ) ( ( dref4745 .stuff .Maybe_1547_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1130_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1582 (   struct env133* env ,    struct TextBuf_104 *  self4120 ,    struct Cursors_31  before_dash_cursors4122 ) {
    struct Actions_105 *  actions4123 = ( & ( ( * (  self4120 ) ) .f_actions ) );
    ( (  trim_dash_actions1207 ) ( (  actions4123 ) ) );
    ( (  flush_dash_insert_dash_action1182 ) ( (  self4120 ) ) );
    ( (  assert706 ) ( (  eq1273 ( ( ( ( * (  self4120 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_106_NoChangeset ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al4124 = ( ( * (  self4120 ) ) .f_al );
    struct Changeset_25  temp1583 = ( (struct Changeset_25) { .f_parts = ( (  mk1302 ) ( (  al4124 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors4122 ) } );
    struct Changeset_25 *  changeset4125 = ( &temp1583 );
    struct envunion134  temp1584 = ( (struct envunion134){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Changeset_25  ) )add1313 , .env =  env->envinst21 } );
    ( temp1584.fun ( &temp1584.env ,  ( & ( ( * (  actions4123 ) ) .f_list ) ) ,  ( * (  changeset4125 ) ) ) );
    (*  actions4123 ) .f_input_dash_changeset = ( ChangesetInputType_106_CustomChangeset );
    (*  actions4123 ) .f_cur = (  op_dash_add314 ( ( ( * (  actions4123 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1233   head1590 (    struct List_26  it1160 ) {
    struct SliceIter_1226  temp1591 = ( (  into_dash_iter1228 ) ( (  it1160 ) ) );
    return ( (  next1234 ) ( ( &temp1591 ) ) );
}

static  bool   null1589 (    struct List_26  it1169 ) {
    struct Maybe_1233  dref1170 = ( (  head1590 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_1233_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1588 (    struct TextBuf_104 *  self4128 ) {
    ( (  flush_dash_insert_dash_action1182 ) ( (  self4128 ) ) );
    struct Actions_105 *  actions4129 = ( & ( ( * (  self4128 ) ) .f_actions ) );
    if ( ( (  null1589 ) ( ( ( * ( (  last_dash_ptr1275 ) ( ( (  to_dash_slice1277 ) ( ( ( * (  actions4129 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions4129 ) .f_cur = (  op_dash_sub292 ( ( ( * (  actions4129 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions4129 ) .f_input_dash_changeset = ( ChangesetInputType_106_NoChangeset );
        ( (  trim_dash_actions1207 ) ( (  actions4129 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_32   fmap_dash_maybe1593 (    struct Maybe_32  x1578 ,    struct Pos_29 (*  fun1580 )(    struct Pos_29  ) ) {
    struct Maybe_32  dref1581 = (  x1578 );
    if ( dref1581.tag == Maybe_32_None_t ) {
        return ( (struct Maybe_32) { .tag = Maybe_32_None_t } );
    }
    else {
        if ( dref1581.tag == Maybe_32_Just_t ) {
            return ( ( Maybe_32_Just ) ( ( (  fun1580 ) ( ( dref1581 .stuff .Maybe_32_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_29   lam1594 (    struct Pos_29  sel4588 ) {
    struct Pos_29  temp1595 = (  sel4588 );
    temp1595 .  f_bi = (  op_dash_add160 ( ( (  sel4588 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1595 );
}

static  enum Unit_8   indent_dash_selection1580 (   struct env220* env ,    struct Pane_223 *  self4584 ) {
    struct envunion221  temp1581 = ( (struct envunion221){ .fun = (  enum Unit_8  (*) (  struct env133*  ,    struct TextBuf_104 *  ,    struct Cursors_31  ) )begin_dash_changeset1582 , .env =  env->envinst133 } );
    ( temp1581.fun ( &temp1581.env ,  ( ( * (  self4584 ) ) .f_buf ) ,  ( (struct Cursors_31) { .f_cur = ( ( * (  self4584 ) ) .f_cursor ) , .f_sel = ( ( * (  self4584 ) ) .f_sel ) } ) ) );
    struct RangeIter_154  temp1585 =  into_dash_iter155 ( ( (  to164 ) ( ( ( (  min_dash_pos1530 ) ( (  self4584 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1517 ) ( (  self4584 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_156  __cond1586 =  next157 (&temp1585);
        if (  __cond1586 .tag == 0 ) {
            break;
        }
        int32_t  line4586 =  __cond1586 .stuff .Maybe_156_Just_s .field0;
        struct envunion222  temp1587 = ( (struct envunion222){ .fun = (  enum Unit_8  (*) (  struct env218*  ,    struct Pane_223 *  ,    int32_t  ) )indent_dash_at1344 , .env =  env->envinst218 } );
        ( temp1587.fun ( &temp1587.env ,  (  self4584 ) ,  (  line4586 ) ) );
    }
    ( (  end_dash_changeset1588 ) ( ( ( * (  self4584 ) ) .f_buf ) ) );
    struct Pos_29  temp1592 = ( ( * (  self4584 ) ) .f_cursor );
    temp1592 .  f_bi = (  op_dash_add160 ( ( ( ( * (  self4584 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors1129 ) ( (  self4584 ) ,  ( temp1592 ) ,  ( (  fmap_dash_maybe1593 ) ( ( ( * (  self4584 ) ) .f_sel ) ,  (  lam1594 ) ) ) ,  ( CursorMovement_1130_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1606 {
    ;
    bool  last_dash_char_dash_was_dash_tab4593;
    ;
};

struct envunion1607 {
    struct Pos_29  (*fun) (  struct env1606*  ,    struct Pos_29  );
    struct env1606 env;
};

static  struct Maybe_32   fmap_dash_maybe1605 (    struct Maybe_32  x1578 ,   struct envunion1607  fun1580 ) {
    struct Maybe_32  dref1581 = (  x1578 );
    if ( dref1581.tag == Maybe_32_None_t ) {
        return ( (struct Maybe_32) { .tag = Maybe_32_None_t } );
    }
    else {
        if ( dref1581.tag == Maybe_32_Just_t ) {
            struct envunion1607  temp1608 = (  fun1580 );
            return ( ( Maybe_32_Just ) ( ( temp1608.fun ( &temp1608.env ,  ( dref1581 .stuff .Maybe_32_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_29   lam1609 (   struct env1606* env ,    struct Pos_29  sel4597 ) {
    struct Pos_29  temp1610 = (  sel4597 );
    temp1610 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4593 ) ? (  op_dash_sub165 ( ( (  sel4597 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4597 ) .f_bi ) );
    return ( temp1610 );
}

static  enum Unit_8   dedent_dash_selection1597 (   struct env226* env ,    struct Pane_223 *  self4591 ) {
    struct envunion228  temp1598 = ( (struct envunion228){ .fun = (  enum Unit_8  (*) (  struct env133*  ,    struct TextBuf_104 *  ,    struct Cursors_31  ) )begin_dash_changeset1582 , .env =  env->envinst133 } );
    ( temp1598.fun ( &temp1598.env ,  ( ( * (  self4591 ) ) .f_buf ) ,  ( (struct Cursors_31) { .f_cur = ( ( * (  self4591 ) ) .f_cursor ) , .f_sel = ( ( * (  self4591 ) ) .f_sel ) } ) ) );
    struct Pos_29  temp1599 = ( (  min_dash_pos1530 ) ( (  self4591 ) ) );
    temp1599 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4592 = (  eq482 ( ( (  char_dash_at1372 ) ( (  self4591 ) ,  ( temp1599 ) ) ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_29  temp1600 = ( (  max_dash_pos1517 ) ( (  self4591 ) ) );
    temp1600 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4593 = (  eq482 ( ( (  char_dash_at1372 ) ( (  self4591 ) ,  ( temp1600 ) ) ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_154  temp1601 =  into_dash_iter155 ( ( (  to164 ) ( ( ( (  min_dash_pos1530 ) ( (  self4591 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1517 ) ( (  self4591 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_156  __cond1602 =  next157 (&temp1601);
        if (  __cond1602 .tag == 0 ) {
            break;
        }
        int32_t  line4595 =  __cond1602 .stuff .Maybe_156_Just_s .field0;
        if ( (  eq482 ( ( (  char_dash_at1372 ) ( (  self4591 ) ,  ( (struct Pos_29) { .f_line = (  line4595 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion227  temp1603 = ( (struct envunion227){ .fun = (  struct Maybe_209  (*) (  struct env128*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_209  ) )change1206 , .env =  env->envinst128 } );
            ( temp1603.fun ( &temp1603.env ,  ( ( * (  self4591 ) ) .f_buf ) ,  ( (struct Pos_29) { .f_line = (  line4595 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_29) { .f_line = (  line4595 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_209) { .tag = Maybe_209_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1588 ) ( ( ( * (  self4591 ) ) .f_buf ) ) );
    struct Pos_29  temp1604 = ( ( * (  self4591 ) ) .f_cursor );
    temp1604 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4592 ) ? (  op_dash_sub165 ( ( ( ( * (  self4591 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4591 ) ) .f_cursor ) .f_bi ) );
    struct env1606 envinst1606 = {
        .last_dash_char_dash_was_dash_tab4593 =  last_dash_char_dash_was_dash_tab4593 ,
    };
    ( (  set_dash_cursors1129 ) ( (  self4591 ) ,  ( temp1604 ) ,  ( (  fmap_dash_maybe1605 ) ( ( ( * (  self4591 ) ) .f_sel ) ,  ( (struct envunion1607){ .fun = (  struct Pos_29  (*) (  struct env1606*  ,    struct Pos_29  ) )lam1609 , .env =  envinst1606 } ) ) ) ,  ( CursorMovement_1130_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1614 (  ) {
    int32_t  temp1615;
    return (  temp1615 );
}

static  int32_t   or_dash_fail1613 (    struct Maybe_156  x1346 ,    struct StrView_30  errmsg1348 ) {
    struct Maybe_156  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_156_None_t ) {
        ( (  panic1250 ) ( (  errmsg1348 ) ) );
        return ( (  undefined1614 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_156_Just_t ) {
            return ( dref1349 .stuff .Maybe_156_Just_s .field0 );
        }
    }
}

struct env1618 {
    struct Pane_223 *  self4606;
    ;
};

struct envunion1619 {
    int32_t  (*fun) (  struct env1618*  ,    int32_t  );
    struct env1618 env;
};

struct Map_1617 {
    struct RangeIter_154  field0;
    struct envunion1619  field1;
};

static struct Map_1617 Map_1617_Map (  struct RangeIter_154  field0 , struct envunion1619  field1 ) {
    return ( struct Map_1617 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1617   into_dash_iter1621 (    struct Map_1617  self797 ) {
    return (  self797 );
}

static  struct Maybe_156   next1622 (    struct Map_1617 *  dref799 ) {
    struct Maybe_156  dref802 = ( (  next157 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_156_None_t ) {
        return ( (struct Maybe_156) { .tag = Maybe_156_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_156_Just_t ) {
            struct envunion1619  temp1623 = ( (* dref799 ) .field1 );
            return ( ( Maybe_156_Just ) ( ( temp1623.fun ( &temp1623.env ,  ( dref802 .stuff .Maybe_156_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_156   reduce1620 (    struct Map_1617  iterable1111 ,    struct Maybe_156  base1113 ,    struct Maybe_156 (*  fun1115 )(    int32_t  ,    struct Maybe_156  ) ) {
    struct Maybe_156  x1116 = (  base1113 );
    struct Map_1617  it1117 = ( (  into_dash_iter1621 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_156  dref1118 = ( (  next1622 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_156_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_156_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_156_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1624 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1624);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_156  temp1625;
    return (  temp1625 );
}

struct env1628 {
    ;
    int32_t  x1546;
};

struct envunion1629 {
    struct Maybe_156  (*fun) (  struct env1628*  ,    int32_t  );
    struct env1628 env;
};

static  struct Maybe_156   maybe1627 (    struct Maybe_156  x1585 ,   struct envunion1629  fun1587 ,    struct Maybe_156  default1589 ) {
    struct envunion1629  temp1630 = (  fun1587 );
    return ( {  struct Maybe_156  dref1590 = (  x1585 ) ; dref1590.tag == Maybe_156_Just_t ? ( temp1630.fun ( &temp1630.env ,  ( dref1590 .stuff .Maybe_156_Just_s .field0 ) ) ) : (  default1589 ) ; } );
}

static  struct Maybe_156   lam1631 (   struct env1628* env ,    int32_t  lm1615 ) {
    return ( ( Maybe_156_Just ) ( ( (  min697 ) ( (  lm1615 ) ,  ( env->x1546 ) ) ) ) );
}

static  struct Maybe_156   lam1626 (    int32_t  x1546 ,    struct Maybe_156  last_dash_min1548 ) {
    struct env1628 envinst1628 = {
        .x1546 =  x1546 ,
    };
    return ( (  maybe1627 ) ( (  last_dash_min1548 ) ,  ( (struct envunion1629){ .fun = (  struct Maybe_156  (*) (  struct env1628*  ,    int32_t  ) )lam1631 , .env =  envinst1628 } ) ,  ( ( Maybe_156_Just ) ( (  x1546 ) ) ) ) );
}

static  struct Maybe_156   minimum1616 (    struct Map_1617  it1544 ) {
    return ( (  reduce1620 ) ( (  it1544 ) ,  ( (struct Maybe_156) { .tag = Maybe_156_None_t } ) ,  (  lam1626 ) ) );
}

static  struct Map_1617   map1632 (    struct Range_151  iterable806 ,   struct envunion1619  fun808 ) {
    struct RangeIter_154  it809 = ( (  into_dash_iter155 ) ( (  iterable806 ) ) );
    return ( ( Map_1617_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  int32_t   lam1633 (   struct env1618* env ,    int32_t  ln4610 ) {
    return ( (  indent_dash_at_dash_line1184 ) ( ( env->self4606 ) ,  (  ln4610 ) ) );
}

struct env1635 {
    ;
    ;
    struct Pane_223 *  self4606;
};

struct envunion1636 {
    bool  (*fun) (  struct env1635*  ,    int32_t  );
    struct env1635 env;
};

struct env1638 {
    struct envunion1636  fun1144;
};

struct envunion1639 {
    bool  (*fun) (  struct env1638*  ,    int32_t  ,    bool  );
    struct env1638 env;
};

static  bool   reduce1637 (    struct Range_151  iterable1111 ,    bool  base1113 ,   struct envunion1639  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct RangeIter_154  it1117 = ( (  into_dash_iter155 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_156  dref1118 = ( (  next157 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_156_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_156_Just_t ) {
                struct envunion1639  temp1640 = (  fun1115 );
                x1116 = ( temp1640.fun ( &temp1640.env ,  ( dref1118 .stuff .Maybe_156_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1641 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1641);
    abort ( );
    ( Unit_8_Unit );
    bool  temp1642;
    return (  temp1642 );
}

static  bool   lam1643 (   struct env1638* env ,    int32_t  e1146 ,    bool  x1148 ) {
    struct envunion1636  temp1644 = ( env->fun1144 );
    return ( ( temp1644.fun ( &temp1644.env ,  (  e1146 ) ) ) && (  x1148 ) );
}

static  bool   all1634 (    struct Range_151  it1142 ,   struct envunion1636  fun1144 ) {
    struct env1638 envinst1638 = {
        .fun1144 =  fun1144 ,
    };
    return ( (  reduce1637 ) ( (  it1142 ) ,  ( true ) ,  ( (struct envunion1639){ .fun = (  bool  (*) (  struct env1638*  ,    int32_t  ,    bool  ) )lam1643 , .env =  envinst1638 } ) ) );
}

static  bool   is_dash_just1646 (    struct Maybe_1547  m1563 ) {
    struct Maybe_1547  dref1564 = (  m1563 );
    if ( dref1564.tag == Maybe_1547_None_t ) {
        return ( false );
    }
    else {
        if ( dref1564.tag == Maybe_1547_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1648 (    struct Char_65  c4537 ) {
    return ( ( !  eq482 ( (  c4537 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1371 ) ( (  c4537 ) ) ) );
}

static  struct Maybe_1547   line_dash_begins_dash_with_dash_comment1647 (    struct Pane_223 *  self4531 ,    int32_t  line4533 ) {
    int32_t  indent4534 = ( (  indent_dash_at_dash_line1184 ) ( (  self4531 ) ,  (  line4533 ) ) );
    if ( (  eq482 ( ( (  char_dash_at1372 ) ( (  self4531 ) ,  ( (  mk733 ) ( (  line4533 ) ,  (  indent4534 ) ) ) ) ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4535 = (  op_dash_add160 ( (  indent4534 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1648 ) ( ( (  char_dash_at1372 ) ( (  self4531 ) ,  ( (  mk733 ) ( (  line4533 ) ,  (  i4535 ) ) ) ) ) ) ) ) {
            i4535 = (  op_dash_add160 ( (  i4535 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1547_Just ) ( ( ( Tuple2_233_Tuple2 ) ( ( (  mk733 ) ( (  line4533 ) ,  (  indent4534 ) ) ) ,  ( (  mk733 ) ( (  line4533 ) ,  (  i4535 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1547) { .tag = Maybe_1547_None_t } );
    }
}

static  bool   lam1645 (   struct env1635* env ,    int32_t  ln4613 ) {
    return ( (  is_dash_just1646 ) ( ( (  line_dash_begins_dash_with_dash_comment1647 ) ( ( env->self4606 ) ,  (  ln4613 ) ) ) ) );
}

static  struct Tuple2_233   undefined1654 (  ) {
    struct Tuple2_233  temp1655;
    return (  temp1655 );
}

static  struct Tuple2_233   or_dash_fail1653 (    struct Maybe_1547  x1346 ,    struct StrView_30  errmsg1348 ) {
    struct Maybe_1547  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_1547_None_t ) {
        ( (  panic1250 ) ( (  errmsg1348 ) ) );
        return ( (  undefined1654 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_1547_Just_t ) {
            return ( dref1349 .stuff .Maybe_1547_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1612 (   struct env231* env ,    struct Pane_223 *  self4606 ) {
    int32_t  from_dash_line4607 = ( ( (  min_dash_pos1530 ) ( (  self4606 ) ) ) .f_line );
    int32_t  to_dash_line4608 = ( ( (  max_dash_pos1517 ) ( (  self4606 ) ) ) .f_line );
    struct env1618 envinst1618 = {
        .self4606 =  self4606 ,
    };
    int32_t  min_dash_indent4611 = ( (  or_dash_fail1613 ) ( ( (  minimum1616 ) ( ( (  map1632 ) ( ( (  to164 ) ( (  from_dash_line4607 ) ,  (  to_dash_line4608 ) ) ) ,  ( (struct envunion1619){ .fun = (  int32_t  (*) (  struct env1618*  ,    int32_t  ) )lam1633 , .env =  envinst1618 } ) ) ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1635 envinst1635 = {
        .self4606 =  self4606 ,
    };
    bool  all_dash_have_dash_comment4614 = ( (  all1634 ) ( ( (  to164 ) ( (  from_dash_line4607 ) ,  (  to_dash_line4608 ) ) ) ,  ( (struct envunion1636){ .fun = (  bool  (*) (  struct env1635*  ,    int32_t  ) )lam1645 , .env =  envinst1635 } ) ) );
    struct envunion234  temp1649 = ( (struct envunion234){ .fun = (  enum Unit_8  (*) (  struct env133*  ,    struct TextBuf_104 *  ,    struct Cursors_31  ) )begin_dash_changeset1582 , .env =  env->envinst133 } );
    ( temp1649.fun ( &temp1649.env ,  ( ( * (  self4606 ) ) .f_buf ) ,  ( (struct Cursors_31) { .f_cur = ( ( * (  self4606 ) ) .f_cursor ) , .f_sel = ( ( * (  self4606 ) ) .f_sel ) } ) ) );
    struct RangeIter_154  temp1650 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_line4607 ) ,  (  to_dash_line4608 ) ) ) );
    while (true) {
        struct Maybe_156  __cond1651 =  next157 (&temp1650);
        if (  __cond1651 .tag == 0 ) {
            break;
        }
        int32_t  line4616 =  __cond1651 .stuff .Maybe_156_Just_s .field0;
        struct Char_65  comment_dash_str4617 = ( (  from_dash_charlike357 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4614 ) ) ) {
            ( (  set_dash_cursors1129 ) ( (  self4606 ) ,  ( (  mk733 ) ( (  line4616 ) ,  (  min_dash_indent4611 ) ) ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_NoChanges ) ) );
            struct envunion235  temp1652 = ( (struct envunion235){ .fun = (  enum Unit_8  (*) (  struct env207*  ,    struct Pane_223 *  ,    struct StrView_30  ) )add_dash_str_dash_at_dash_char1204 , .env =  env->envinst207 } );
            ( temp1652.fun ( &temp1652.env ,  (  self4606 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_233  comment_dash_pos4618 = ( (  or_dash_fail1653 ) ( ( (  line_dash_begins_dash_with_dash_comment1647 ) ( (  self4606 ) ,  (  line4616 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion232  temp1656 = ( (struct envunion232){ .fun = (  enum Unit_8  (*) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  ) )replace_dash_selection1449 , .env =  env->envinst216 } );
            ( temp1656.fun ( &temp1656.env ,  (  self4606 ) ,  (  comment_dash_pos4618 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1588 ) ( ( ( * (  self4606 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1127 (   struct env256* env ,    struct Editor_251 *  ed4750 ,    struct Key_273  key4752 ) {
    struct Key_273  dref4753 = (  key4752 );
    if ( dref4753.tag == Key_273_Char_t ) {
        if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4750 ) .f_running = ( false );
        } else {
            if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1128 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ) );
            } else {
                if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1173 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ) );
                } else {
                    if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1176 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1180 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1181 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( Mode_224_Insert ) ) );
                            } else {
                                if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1183 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ) );
                                    ( (  set_dash_mode1181 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( Mode_224_Insert ) ) );
                                } else {
                                    if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1201 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ) );
                                        ( (  set_dash_mode1181 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( Mode_224_Insert ) ) );
                                    } else {
                                        if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_223 *  pane4755 = ( (  pane1172 ) ( (  ed4750 ) ) );
                                            int32_t  indent4756 = ( (  indent_dash_at_dash_line1184 ) ( (  pane4755 ) ,  ( ( ( * (  pane4755 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1201 ) ( (  pane4755 ) ) );
                                            struct envunion259  temp1203 = ( (struct envunion259){ .fun = (  enum Unit_8  (*) (  struct env207*  ,    struct Pane_223 *  ,    struct StrView_30  ) )add_dash_str_dash_at_dash_char1204 , .env =  env->envinst207 } );
                                            ( temp1203.fun ( &temp1203.env ,  (  pane4755 ) ,  ( (  from_dash_charlike543 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1173 ) ( (  pane4755 ) ) );
                                            struct envunion264  temp1339 = ( (struct envunion264){ .fun = (  enum Unit_8  (*) (  struct env229*  ,    struct Pane_223 *  ,    int32_t  ) )indent_dash_at_dash_current1340 , .env =  env->envinst229 } );
                                            ( temp1339.fun ( &temp1339.env ,  (  pane4755 ) ,  (  indent4756 ) ) );
                                            ( (  set_dash_mode1181 ) ( (  pane4755 ) ,  ( Mode_224_Insert ) ) );
                                        } else {
                                            if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_223 *  pane4757 = ( (  pane1172 ) ( (  ed4750 ) ) );
                                                int32_t  indent4758 = ( (  indent_dash_at_dash_line1184 ) ( (  pane4757 ) ,  ( ( ( * (  pane4757 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1346 ) ( (  pane4757 ) ) );
                                                struct envunion1349  temp1348 = ( (struct envunion1349){ .fun = (  enum Unit_8  (*) (  struct env207*  ,    struct Pane_223 *  ,    struct StrView_30  ) )add_dash_str_dash_at_dash_char1204 , .env =  env->envinst207 } );
                                                ( temp1348.fun ( &temp1348.env ,  (  pane4757 ) ,  ( (  from_dash_charlike543 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1351  temp1350 = ( (struct envunion1351){ .fun = (  enum Unit_8  (*) (  struct env229*  ,    struct Pane_223 *  ,    int32_t  ) )indent_dash_at_dash_current1340 , .env =  env->envinst229 } );
                                                ( temp1350.fun ( &temp1350.env ,  (  pane4757 ) ,  (  indent4758 ) ) );
                                                ( (  set_dash_mode1181 ) ( (  pane4757 ) ,  ( Mode_224_Insert ) ) );
                                            } else {
                                                if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1352 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( MoveDirection_1353_MoveFwd ) ,  ( MoveTarget_1354_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1352 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( MoveDirection_1353_MoveFwd ) ,  ( MoveTarget_1354_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1352 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( MoveDirection_1353_MoveBwd ) ,  ( MoveTarget_1354_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion263  temp1392 = ( (struct envunion263){ .fun = (  enum Unit_8  (*) (  struct env214*  ,    struct Pane_223 *  ) )redo1393 , .env =  env->envinst214 } );
                                                                ( temp1392.fun ( &temp1392.env ,  ( (  pane1172 ) ( (  ed4750 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion262  temp1417 = ( (struct envunion262){ .fun = (  enum Unit_8  (*) (  struct env212*  ,    struct Pane_223 *  ) )undo1418 , .env =  env->envinst212 } );
                                                                    ( temp1417.fun ( &temp1417.env ,  ( (  pane1172 ) ( (  ed4750 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion261  temp1435 = ( (struct envunion261){ .fun = (  enum Unit_8  (*) (  struct env236*  ,    struct Editor_251 *  ) )copy_dash_selection_dash_to_dash_clipboard1436 , .env =  env->envinst236 } );
                                                                        ( temp1435.fun ( &temp1435.env ,  (  ed4750 ) ) );
                                                                        struct envunion257  temp1448 = ( (struct envunion257){ .fun = (  enum Unit_8  (*) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  ) )replace_dash_selection1449 , .env =  env->envinst216 } );
                                                                        ( temp1448.fun ( &temp1448.env ,  ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( (  selection1437 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1181 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( Mode_224_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1457  temp1456 = ( (struct envunion1457){ .fun = (  enum Unit_8  (*) (  struct env236*  ,    struct Editor_251 *  ) )copy_dash_selection_dash_to_dash_clipboard1436 , .env =  env->envinst236 } );
                                                                            ( temp1456.fun ( &temp1456.env ,  (  ed4750 ) ) );
                                                                            struct envunion1459  temp1458 = ( (struct envunion1459){ .fun = (  enum Unit_8  (*) (  struct env216*  ,    struct Pane_223 *  ,    struct Tuple2_233  ,    struct StrView_30  ) )replace_dash_selection1449 , .env =  env->envinst216 } );
                                                                            ( temp1458.fun ( &temp1458.env ,  ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( (  selection1437 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1181 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( Mode_224_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1461  temp1460 = ( (struct envunion1461){ .fun = (  enum Unit_8  (*) (  struct env236*  ,    struct Editor_251 *  ) )copy_dash_selection_dash_to_dash_clipboard1436 , .env =  env->envinst236 } );
                                                                                ( temp1460.fun ( &temp1460.env ,  (  ed4750 ) ) );
                                                                                size_t  bytes_dash_yanked4759 = ( (  num_dash_bytes1168 ) ( ( (  or_dash_else629 ) ( ( ( * (  ed4750 ) ) .f_clipboard ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion265  temp1462 = ( (struct envunion265){ .fun = (  enum Unit_8  (*) (  struct env238*  ,    struct Editor_251 *  ,    struct StrConcat_78  ) )set_dash_msg1463 , .env =  env->envinst238 } );
                                                                                ( temp1462.fun ( &temp1462.env ,  (  ed4750 ) ,  ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4759 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)" bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1512 envinst1512 = {
                                                                                        .envinst216 = env->envinst216 ,
                                                                                        .ed4750 =  ed4750 ,
                                                                                    };
                                                                                    ( (  if_dash_just1511 ) ( ( ( * (  ed4750 ) ) .f_clipboard ) ,  ( (struct envunion1514){ .fun = (  enum Unit_8  (*) (  struct env1512*  ,    struct StrView_30  ) )lam1516 , .env =  envinst1512 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1525 envinst1525 = {
                                                                                            .envinst216 = env->envinst216 ,
                                                                                            .ed4750 =  ed4750 ,
                                                                                        };
                                                                                        ( (  if_dash_just1524 ) ( ( ( * (  ed4750 ) ) .f_clipboard ) ,  ( (struct envunion1527){ .fun = (  enum Unit_8  (*) (  struct env1525*  ,    struct StrView_30  ) )lam1529 , .env =  envinst1525 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1534 envinst1534 = {
                                                                                                .envinst216 = env->envinst216 ,
                                                                                                .ed4750 =  ed4750 ,
                                                                                            };
                                                                                            ( (  if_dash_just1533 ) ( ( ( * (  ed4750 ) ) .f_clipboard ) ,  ( (struct envunion1536){ .fun = (  enum Unit_8  (*) (  struct env1534*  ,    struct StrView_30  ) )lam1538 , .env =  envinst1534 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1541 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1181 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( Mode_224_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1545 ) ( ( ( ( * (  ed4750 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4750 ) .f_pane .f_sel = ( ( Maybe_32_Just ) ( ( ( ( * (  ed4750 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4750 ) .f_mode = ( ( EditorMode_252_Cmd ) ( ( ( * ( (  pane1172 ) ( (  ed4750 ) ) ) ) .f_cursor ) ,  ( (  mk1467 ) ( ( ( * (  ed4750 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4750 ) .f_mode = ( ( EditorMode_252_Search ) ( ( ( * ( (  pane1172 ) ( (  ed4750 ) ) ) ) .f_cursor ) ,  ( (  mk1467 ) ( ( ( * (  ed4750 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1546 ) ( (  ed4750 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1565 ) ( (  ed4750 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion260  temp1579 = ( (struct envunion260){ .fun = (  enum Unit_8  (*) (  struct env220*  ,    struct Pane_223 *  ) )indent_dash_selection1580 , .env =  env->envinst220 } );
                                                                                                                        ( temp1579.fun ( &temp1579.env ,  ( (  pane1172 ) ( (  ed4750 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion258  temp1596 = ( (struct envunion258){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_223 *  ) )dedent_dash_selection1597 , .env =  env->envinst226 } );
                                                                                                                            ( temp1596.fun ( &temp1596.env ,  ( (  pane1172 ) ( (  ed4750 ) ) ) ) );
                                                                                                                        } else {
                                                                                                                            if ( (  eq974 ( ( dref4753 .stuff .Key_273_Char_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
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
        if ( dref4753.tag == Key_273_Escape_t ) {
            ( (  set_dash_mode1181 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  ( Mode_224_Normal ) ) );
        }
        else {
            if ( dref4753.tag == Key_273_Ctrl_t ) {
                if ( (  eq974 ( ( dref4753 .stuff .Key_273_Ctrl_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion266  temp1611 = ( (struct envunion266){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Pane_223 *  ) )toggle_dash_comment1612 , .env =  env->envinst231 } );
                    ( temp1611.fun ( &temp1611.env ,  ( (  pane1172 ) ( (  ed4750 ) ) ) ) );
                } else {
                    if ( (  eq974 ( ( dref4753 .stuff .Key_273_Ctrl_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1180 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq974 ( ( dref4753 .stuff .Key_273_Ctrl_s .field0 ) , ( (  from_dash_charlike495 ) ( ( (uint8_t*)"d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1176 ) ( ( (  pane1172 ) ( (  ed4750 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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

struct envunion1658 {
    enum Unit_8  (*fun) (  struct env256*  ,    struct Editor_251 *  ,    struct Key_273  );
    struct env256 env;
};

struct envunion1660 {
    enum Unit_8  (*fun) (  struct env207*  ,    struct Pane_223 *  ,    struct StrView_30  );
    struct env207 env;
};

static  enum Unit_8   backspace1663 (   struct env210* env ,    struct Pane_223 *  self4546 ) {
    struct Pos_29  prev_dash_cur4547 = ( ( * (  self4546 ) ) .f_cursor );
    ( (  move_dash_left1128 ) ( (  self4546 ) ) );
    struct envunion211  temp1664 = ( (struct envunion211){ .fun = (  struct Maybe_209  (*) (  struct env128*  ,    struct TextBuf_104 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_209  ) )change1206 , .env =  env->envinst128 } );
    ( temp1664.fun ( &temp1664.env ,  ( ( * (  self4546 ) ) .f_buf ) ,  ( ( * (  self4546 ) ) .f_cursor ) ,  (  prev_dash_cur4547 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_209) { .tag = Maybe_209_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1666 {
    char _arr [1];
};

static  char *   cast1667 (    struct Array_1666 *  x395 ) {
    return ( (char * ) (  x395 ) );
}

static  struct Slice_988   as_dash_slice1665 (    struct Array_1666 *  arr2045 ) {
    return ( (struct Slice_988) { .f_ptr = ( (  cast1667 ) ( (  arr2045 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1666   from_dash_listlike1669 (    struct Array_1666 *  self369 ) {
    return ( * (  self369 ) );
}

struct Scanner_1674 {
    struct StrView_30  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1674   mk_dash_from_dash_strview1676 (    struct StrView_30  s3393 ) {
    return ( (struct Scanner_1674) { .f_s = (  s3393 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1682 {
    struct StrViewIter_470  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1681 {
    struct TakeWhile_1682  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1681 Map_1681_Map (  struct TakeWhile_1682  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1681 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1681   into_dash_iter1684 (    struct Map_1681  self797 ) {
    return (  self797 );
}

static  struct Maybe_300   next1686 (    struct TakeWhile_1682 *  self982 ) {
    struct Maybe_300  mx983 = ( (  next475 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_300  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_300_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_300_Just ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
            }
        }
    }
}

static  struct Maybe_249   next1685 (    struct Map_1681 *  dref799 ) {
    struct Maybe_300  dref802 = ( (  next1686 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_249) { .tag = Maybe_249_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_300_Just_t ) {
            return ( ( Maybe_249_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_300_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1683 (    struct Map_1681  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    size_t  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct Map_1681  it1117 = ( (  into_dash_iter1684 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_249  dref1118 = ( (  next1685 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_249_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_249_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_249_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1687 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1687);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1688;
    return (  temp1688 );
}

static  size_t   lam1689 (    size_t  v1130 ,    size_t  s1132 ) {
    return (  op_dash_add314 ( (  v1130 ) , (  s1132 ) ) );
}

static  size_t   sum1680 (    struct Map_1681  it1128 ) {
    return ( (  reduce1683 ) ( (  it1128 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1689 ) ) );
}

static  struct TakeWhile_1682   into_dash_iter1691 (    struct TakeWhile_1682  self979 ) {
    return (  self979 );
}

static  struct Map_1681   map1690 (    struct TakeWhile_1682  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1682  it809 = ( (  into_dash_iter1691 ) ( (  iterable806 ) ) );
    return ( ( Map_1681_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1682   take_dash_while1692 (    struct StrViewIter_470  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1682) { .f_it = ( (  into_dash_iter471 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  size_t   lam1693 (    struct Char_65  c2629 ) {
    return ( (  c2629 ) .f_num_dash_bytes );
}

static  struct StrView_30   take_dash_while1679 (    struct StrView_30  self2625 ,    bool (*  fun2627 )(    struct Char_65  ) ) {
    size_t  bi2630 = ( (  sum1680 ) ( ( (  map1690 ) ( ( (  take_dash_while1692 ) ( ( (  chars472 ) ( (  self2625 ) ) ) ,  (  fun2627 ) ) ) ,  (  lam1693 ) ) ) ) );
    return ( (  byte_dash_substr497 ) ( (  self2625 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2630 ) ) );
}

static  struct StrView_30   take_dash_str_dash_while1678 (    struct Scanner_1674 *  sc3473 ,    bool (*  fun3475 )(    struct Char_65  ) ) {
    struct StrView_30  s3476 = ( (  take_dash_while1679 ) ( ( ( * (  sc3473 ) ) .f_s ) ,  (  fun3475 ) ) );
    (*  sc3473 ) .f_s = ( (  byte_dash_substr_dash_from477 ) ( ( ( * (  sc3473 ) ) .f_s ) ,  ( (  num_dash_bytes1168 ) ( (  s3476 ) ) ) ) );
    return (  s3476 );
}

static  enum Unit_8   drop_dash_str_dash_while1677 (    struct Scanner_1674 *  sc3479 ,    bool (*  fun3481 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1678 ) ( (  sc3479 ) ,  (  fun3481 ) ) );
    return ( Unit_8_Unit );
}

struct TakeWhile_1698 {
    struct StrViewIter_470  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1697 {
    struct TakeWhile_1698  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1697 Map_1697_Map (  struct TakeWhile_1698  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1697 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1697   into_dash_iter1700 (    struct Map_1697  self797 ) {
    return (  self797 );
}

static  struct Maybe_300   next1702 (    struct TakeWhile_1698 *  self982 ) {
    struct Maybe_300  mx983 = ( (  next475 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_300  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_300_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_300_Just ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
            }
        }
    }
}

static  struct Maybe_249   next1701 (    struct Map_1697 *  dref799 ) {
    struct Maybe_300  dref802 = ( (  next1702 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_249) { .tag = Maybe_249_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_300_Just_t ) {
            return ( ( Maybe_249_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_300_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1699 (    struct Map_1697  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    size_t  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct Map_1697  it1117 = ( (  into_dash_iter1700 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_249  dref1118 = ( (  next1701 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_249_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_249_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_249_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1703 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1703);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1704;
    return (  temp1704 );
}

static  size_t   lam1705 (    size_t  v1130 ,    size_t  s1132 ) {
    return (  op_dash_add314 ( (  v1130 ) , (  s1132 ) ) );
}

static  size_t   sum1696 (    struct Map_1697  it1128 ) {
    return ( (  reduce1699 ) ( (  it1128 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1705 ) ) );
}

static  struct TakeWhile_1698   into_dash_iter1707 (    struct TakeWhile_1698  self979 ) {
    return (  self979 );
}

static  struct Map_1697   map1706 (    struct TakeWhile_1698  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1698  it809 = ( (  into_dash_iter1707 ) ( (  iterable806 ) ) );
    return ( ( Map_1697_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1698   take_dash_while1708 (    struct StrViewIter_470  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1698) { .f_it = ( (  into_dash_iter471 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  size_t   lam1709 (    struct Char_65  c2629 ) {
    return ( (  c2629 ) .f_num_dash_bytes );
}

static  struct StrView_30   take_dash_while1695 (    struct StrView_30  self2625 ,    bool (*  fun2627 )(    struct Char_65  ) ) {
    size_t  bi2630 = ( (  sum1696 ) ( ( (  map1706 ) ( ( (  take_dash_while1708 ) ( ( (  chars472 ) ( (  self2625 ) ) ) ,  (  fun2627 ) ) ) ,  (  lam1709 ) ) ) ) );
    return ( (  byte_dash_substr497 ) ( (  self2625 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2630 ) ) );
}

static  struct StrView_30   take_dash_str_dash_while1694 (    struct Scanner_1674 *  sc3473 ,    bool (*  fun3475 )(    struct Char_65  ) ) {
    struct StrView_30  s3476 = ( (  take_dash_while1695 ) ( ( ( * (  sc3473 ) ) .f_s ) ,  (  fun3475 ) ) );
    (*  sc3473 ) .f_s = ( (  byte_dash_substr_dash_from477 ) ( ( ( * (  sc3473 ) ) .f_s ) ,  ( (  num_dash_bytes1168 ) ( (  s3476 ) ) ) ) );
    return (  s3476 );
}

static  bool   is_dash_not_dash_whitespace1710 (    struct Char_65  c1496 ) {
    return ( ! ( (  is_dash_whitespace1371 ) ( (  c1496 ) ) ) );
}

static  struct Maybe_300   head1712 (    struct StrView_30  it1160 ) {
    struct StrViewIter_470  temp1713 = ( (  into_dash_iter473 ) ( (  it1160 ) ) );
    return ( (  next475 ) ( ( &temp1713 ) ) );
}

static  bool   null1711 (    struct StrView_30  it1169 ) {
    struct Maybe_300  dref1170 = ( (  head1712 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_300_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env1717 {
    ;
    enum CAllocator_10  al3999;
};

struct envunion1718 {
    struct StrView_30  (*fun) (  struct env1717*  ,    struct StrView_30  );
    struct env1717 env;
};

static  struct Maybe_85   fmap_dash_maybe1716 (    struct Maybe_85  x1578 ,   struct envunion1718  fun1580 ) {
    struct Maybe_85  dref1581 = (  x1578 );
    if ( dref1581.tag == Maybe_85_None_t ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    else {
        if ( dref1581.tag == Maybe_85_Just_t ) {
            struct envunion1718  temp1719 = (  fun1580 );
            return ( ( Maybe_85_Just ) ( ( temp1719.fun ( &temp1719.env ,  ( dref1581 .stuff .Maybe_85_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrView_30   lam1720 (   struct env1717* env ,    struct StrView_30  s4001 ) {
    return ( (  clone_dash_0544 ) ( (  s4001 ) ,  ( env->al3999 ) ) );
}

static  struct Maybe_85   maybe1721 (    struct Maybe_85  x1585 ,    struct Maybe_85 (*  fun1587 )(    struct StrView_30  ) ,    struct Maybe_85  default1589 ) {
    return ( {  struct Maybe_85  dref1590 = (  x1585 ) ; dref1590.tag == Maybe_85_Just_t ? ( (  fun1587 ) ( ( dref1590 .stuff .Maybe_85_Just_s .field0 ) ) ) : (  default1589 ) ; } );
}

static  bool   is_dash_none1722 (    struct Maybe_85  m1567 ) {
    struct Maybe_85  dref1568 = (  m1567 );
    if ( dref1568.tag == Maybe_85_None_t ) {
        return ( true );
    }
    else {
        if ( dref1568.tag == Maybe_85_Just_t ) {
            return ( false );
        }
    }
}

struct env1731 {
    struct StrBuilder_62 *  builder2868;
    struct env60 envinst60;
};

struct envunion1732 {
    enum Unit_8  (*fun) (  struct env1731*  ,    struct Char_65  );
    struct env1731 env;
};

static  enum Unit_8   for_dash_each1730 (    struct StrConcatIter_1380  iterable1092 ,   struct envunion1732  fun1094 ) {
    struct StrConcatIter_1380  temp1733 = ( (  into_dash_iter1382 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_1380 *  it1095 = ( &temp1733 );
    while ( ( true ) ) {
        struct Maybe_300  dref1096 = ( (  next1383 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_300_Just_t ) {
                struct envunion1732  temp1734 = (  fun1094 );
                ( temp1734.fun ( &temp1734.env ,  ( dref1096 .stuff .Maybe_300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1735 (   struct env1731* env ,    struct Char_65  c2872 ) {
    struct envunion64  temp1736 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1500 , .env =  env->envinst60 } );
    return ( temp1736.fun ( &temp1736.env ,  ( env->builder2868 ) ,  (  c2872 ) ) );
}

static  enum Unit_8   write1729 (   struct env66* env ,    struct StrBuilder_62 *  builder2868 ,    struct StrConcat_71  s2870 ) {
    struct env1731 envinst1731 = {
        .builder2868 =  builder2868 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1730 ) ( ( (  chars1384 ) ( (  s2870 ) ) ) ,  ( (struct envunion1732){ .fun = (  enum Unit_8  (*) (  struct env1731*  ,    struct Char_65  ) )lam1735 , .env =  envinst1731 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1727 (   struct env69* env ,    struct StrBuilder_62 *  builder2875 ,    struct StrView_30  s2877 ) {
    struct envunion70  temp1728 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  ) )write1729 , .env =  env->envinst66 } );
    return ( temp1728.fun ( &temp1728.env ,  (  builder2875 ) ,  ( ( StrConcat_71_StrConcat ) ( (  s2877 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_30   undefined1738 (  ) {
    struct StrView_30  temp1739;
    return (  temp1739 );
}

static  struct StrView_30   or_dash_fail1737 (    struct Maybe_85  x1346 ,    struct StrView_30  errmsg1348 ) {
    struct Maybe_85  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_85_None_t ) {
        ( (  panic1250 ) ( (  errmsg1348 ) ) );
        return ( (  undefined1738 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_85_Just_t ) {
            return ( dref1349 .stuff .Maybe_85_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_470   chars1742 (    struct StrBuilder_62  s2920 ) {
    return ( (  into_dash_iter473 ) ( ( (  as_dash_str1508 ) ( ( & (  s2920 ) ) ) ) ) );
}

static  struct StrViewIter_470   chars1741 (    struct StrBuilder_62 *  self1747 ) {
    return ( (  chars1742 ) ( ( * (  self1747 ) ) ) );
}

static  int32_t   fprintf_dash_char1743 (    FILE *  file1472 ,    struct Char_65  c1474 ) {
    struct Array_341  temp1745;
    struct Array_341  temp1744 = (  temp1745 );
    struct Char_65  c1475 = ( (  regularize340 ) ( (  c1474 ) ,  ( &temp1744 ) ) );
    return ( ( fprintf ) ( (  file1472 ) ,  ( (  from_dash_string57 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32332 ) ( ( (  c1475 ) .f_num_dash_bytes ) ) ) ,  ( (  c1475 ) .f_ptr ) ) );
}

static  bool   unreachable1746 (  ) {
    ( (  println1377 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1386 ) ( ) );
}

static  bool   try_dash_write_dash_contents1740 (    const char*  filename3169 ,    struct StrBuilder_62 *  contents3171 ) {
    FILE *  file3172 = ( ( fopen ) ( (  filename3169 ) ,  ( (  from_dash_charlike574 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null575 ) ( (  file3172 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_470  it3173 = ( (  chars1741 ) ( (  contents3171 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref3174 = ( (  next475 ) ( ( & (  it3173 ) ) ) );
        if ( dref3174.tag == Maybe_300_None_t ) {
            ( ( fclose ) ( (  file3172 ) ) );
            return ( true );
        }
        else {
            if ( dref3174.tag == Maybe_300_Just_t ) {
                int32_t  chars_dash_written3176 = ( (  fprintf_dash_char1743 ) ( (  file3172 ) ,  ( dref3174 .stuff .Maybe_300_Just_s .field0 ) ) );
                if ( (  cmp158 ( (  chars_dash_written3176 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1746 ) ( ) );
}

static  enum Unit_8   free1747 (    struct StrBuilder_62 *  builder2912 ) {
    ( (  free667 ) ( ( & ( ( * (  builder2912 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1748 (    struct Maybe_85  m1563 ) {
    struct Maybe_85  dref1564 = (  m1563 );
    if ( dref1564.tag == Maybe_85_None_t ) {
        return ( false );
    }
    else {
        if ( dref1564.tag == Maybe_85_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_249   write_dash_to_dash_file1715 (   struct env111* env ,    struct TextBuf_104 *  self3996 ,    struct Maybe_85  altname3998 ) {
    enum CAllocator_10  al3999 = ( ( * (  self3996 ) ) .f_al );
    struct env1717 envinst1717 = {
        .al3999 =  al3999 ,
    };
    struct Maybe_85  nu_dash_filename4002 = ( (  fmap_dash_maybe1716 ) ( (  altname3998 ) ,  ( (struct envunion1718){ .fun = (  struct StrView_30  (*) (  struct env1717*  ,    struct StrView_30  ) )lam1720 , .env =  envinst1717 } ) ) );
    struct Maybe_85  filename4003 = ( (  maybe1721 ) ( (  altname3998 ) ,  ( Maybe_85_Just ) ,  ( ( * (  self3996 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1722 ) ( (  filename4003 ) ) ) ) {
        return ( (struct Maybe_249) { .tag = Maybe_249_None_t } );
    }
    struct StrBuilder_62  temp1723 = ( (  mk1467 ) ( (  al3999 ) ) );
    struct StrBuilder_62 *  sb4004 = ( &temp1723 );
    struct RangeIter_154  temp1724 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( ( (  num_dash_lines1175 ) ( (  self3996 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_156  __cond1725 =  next157 (&temp1724);
        if (  __cond1725 .tag == 0 ) {
            break;
        }
        int32_t  ln4006 =  __cond1725 .stuff .Maybe_156_Just_s .field0;
        struct envunion112  temp1726 = ( (struct envunion112){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_62 *  ,    struct StrView_30  ) )writeln1727 , .env =  env->envinst69 } );
        ( temp1726.fun ( &temp1726.env ,  (  sb4004 ) ,  ( (  line1135 ) ( (  self3996 ) ,  (  ln4006 ) ) ) ) );
    }
    const char*  filename04007 = ( (  as_dash_const_dash_str584 ) ( ( (  or_dash_fail1737 ) ( (  filename4003 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"expect filename (we should've quit earlier.)" ) ,  ( 44 ) ) ) ) ) ) );
    bool  result4008 = ( (  try_dash_write_dash_contents1740 ) ( (  filename04007 ) ,  (  sb4004 ) ) );
    ( (  free1747 ) ( (  sb4004 ) ) );
    if ( ( ! (  result4008 ) ) ) {
        return ( (struct Maybe_249) { .tag = Maybe_249_None_t } );
    }
    if ( ( (  is_dash_just1748 ) ( (  altname3998 ) ) ) ) {
        struct Maybe_85  dref4009 = ( ( * (  self3996 ) ) .f_filename );
        if ( dref4009.tag == Maybe_85_Just_t ) {
            ( (  free586 ) ( ( dref4009 .stuff .Maybe_85_Just_s .field0 ) ,  (  al3999 ) ) );
        }
        else {
            if ( dref4009.tag == Maybe_85_None_t ) {
            }
        }
        (*  self3996 ) .f_filename = (  altname3998 );
    }
    return ( ( Maybe_249_Just ) ( ( (  num_dash_bytes1168 ) ( ( (  as_dash_str1508 ) ( (  sb4004 ) ) ) ) ) ) );
}

struct env1757 {
    struct StrBuilder_62 *  builder2868;
    struct env60 envinst60;
};

struct envunion1758 {
    enum Unit_8  (*fun) (  struct env1757*  ,    struct Char_65  );
    struct env1757 env;
};

static  enum Unit_8   for_dash_each1756 (    struct StrViewIter_470  iterable1092 ,   struct envunion1758  fun1094 ) {
    struct StrViewIter_470  temp1759 = ( (  into_dash_iter471 ) ( (  iterable1092 ) ) );
    struct StrViewIter_470 *  it1095 = ( &temp1759 );
    while ( ( true ) ) {
        struct Maybe_300  dref1096 = ( (  next475 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_300_Just_t ) {
                struct envunion1758  temp1760 = (  fun1094 );
                ( temp1760.fun ( &temp1760.env ,  ( dref1096 .stuff .Maybe_300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1761 (   struct env1757* env ,    struct Char_65  c2872 ) {
    struct envunion64  temp1762 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1500 , .env =  env->envinst60 } );
    return ( temp1762.fun ( &temp1762.env ,  ( env->builder2868 ) ,  (  c2872 ) ) );
}

static  enum Unit_8   write1755 (   struct env67* env ,    struct StrBuilder_62 *  builder2868 ,    struct StrView_30  s2870 ) {
    struct env1757 envinst1757 = {
        .builder2868 =  builder2868 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1756 ) ( ( (  chars472 ) ( (  s2870 ) ) ) ,  ( (struct envunion1758){ .fun = (  enum Unit_8  (*) (  struct env1757*  ,    struct Char_65  ) )lam1761 , .env =  envinst1757 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_30   mk_dash_dyn_dash_str1752 (   struct env80* env ,    struct StrView_30  s2926 ,    enum CAllocator_10  al2928 ) {
    struct StrBuilder_62  temp1753 = ( (  mk1467 ) ( (  al2928 ) ) );
    struct StrBuilder_62 *  sb2929 = ( &temp1753 );
    struct envunion81  temp1754 = ( (struct envunion81){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ,    struct StrView_30  ) )write1755 , .env =  env->envinst67 } );
    ( temp1754.fun ( &temp1754.env ,  (  sb2929 ) ,  (  s2926 ) ) );
    struct envunion76  temp1763 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1500 , .env =  env->envinst60 } );
    ( temp1763.fun ( &temp1763.env ,  (  sb2929 ) ,  ( (  nullchar583 ) ( ) ) ) );
    struct StrView_30  dynstr2930 = ( (  as_dash_str1508 ) ( (  sb2929 ) ) );
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2930 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub292 ( ( ( (  dynstr2930 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1750 (   struct env240* env ,    struct Editor_251 *  ed4690 ,    struct StrView_30  s4692 ) {
    ( (  reset_dash_msg1117 ) ( (  ed4690 ) ) );
    struct envunion241  temp1751 = ( (struct envunion241){ .fun = (  struct StrView_30  (*) (  struct env80*  ,    struct StrView_30  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1752 , .env =  env->envinst80 } );
    (*  ed4690 ) .f_msg = ( ( Maybe_85_Just ) ( ( temp1751.fun ( &temp1751.env ,  (  s4692 ) ,  ( ( * (  ed4690 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcatIter_1775 {
    struct StrViewIter_470  f_left;
    struct StrViewIter_470  f_right;
};

struct StrConcatIter_1774 {
    struct StrConcatIter_1775  f_left;
    struct AppendIter_1062  f_right;
};

struct StrCaseIter_1773 {
    enum {
        StrCaseIter_1773_StrCaseIter1_t,
        StrCaseIter_1773_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_470  field0;
        } StrCaseIter_1773_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1774  field0;
        } StrCaseIter_1773_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1773 StrCaseIter_1773_StrCaseIter1 (  struct StrViewIter_470  field0 ) {
    return ( struct StrCaseIter_1773 ) { .tag = StrCaseIter_1773_StrCaseIter1_t, .stuff = { .StrCaseIter_1773_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1773 StrCaseIter_1773_StrCaseIter2 (  struct StrConcatIter_1774  field0 ) {
    return ( struct StrCaseIter_1773 ) { .tag = StrCaseIter_1773_StrCaseIter2_t, .stuff = { .StrCaseIter_1773_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1772 {
    struct StrViewIter_470  f_left;
    struct StrCaseIter_1773  f_right;
};

struct env1776 {
    struct StrBuilder_62 *  builder2868;
    struct env60 envinst60;
};

struct envunion1777 {
    enum Unit_8  (*fun) (  struct env1776*  ,    struct Char_65  );
    struct env1776 env;
};

static  struct StrConcatIter_1772   into_dash_iter1779 (    struct StrConcatIter_1772  self1283 ) {
    return (  self1283 );
}

static  struct Maybe_300   next1783 (    struct StrConcatIter_1775 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next1782 (    struct StrConcatIter_1774 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next1783 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next1781 (    struct StrCaseIter_1773 *  self1723 ) {
    struct StrCaseIter_1773 *  dref1724 = (  self1723 );
    if ( (* dref1724 ).tag == StrCaseIter_1773_StrCaseIter1_t ) {
        return ( (  next475 ) ( ( & ( (* dref1724 ) .stuff .StrCaseIter_1773_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1724 ).tag == StrCaseIter_1773_StrCaseIter2_t ) {
            return ( (  next1782 ) ( ( & ( (* dref1724 ) .stuff .StrCaseIter_1773_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_300   next1780 (    struct StrConcatIter_1772 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1781 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1771 (    struct StrConcatIter_1772  iterable1092 ,   struct envunion1777  fun1094 ) {
    struct StrConcatIter_1772  temp1778 = ( (  into_dash_iter1779 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_1772 *  it1095 = ( &temp1778 );
    while ( ( true ) ) {
        struct Maybe_300  dref1096 = ( (  next1780 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_300_Just_t ) {
                struct envunion1777  temp1784 = (  fun1094 );
                ( temp1784.fun ( &temp1784.env ,  ( dref1096 .stuff .Maybe_300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrCase_1788 {
    enum {
        StrCase_1788_StrCase1_t,
        StrCase_1788_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_30  field0;
        } StrCase_1788_StrCase1_s;
        struct {
            struct StrConcat_708  field0;
        } StrCase_1788_StrCase2_s;
    } stuff;
};

static struct StrCase_1788 StrCase_1788_StrCase1 (  struct StrView_30  field0 ) {
    return ( struct StrCase_1788 ) { .tag = StrCase_1788_StrCase1_t, .stuff = { .StrCase_1788_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1788 StrCase_1788_StrCase2 (  struct StrConcat_708  field0 ) {
    return ( struct StrCase_1788 ) { .tag = StrCase_1788_StrCase2_t, .stuff = { .StrCase_1788_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1775   into_dash_iter1795 (    struct StrConcat_709  dref1290 ) {
    return ( (struct StrConcatIter_1775) { .f_left = ( (  chars472 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars472 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_1775   chars1794 (    struct StrConcat_709  self1301 ) {
    return ( (  into_dash_iter1795 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_1774   into_dash_iter1793 (    struct StrConcat_708  dref1290 ) {
    return ( (struct StrConcatIter_1774) { .f_left = ( (  chars1794 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1098 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_1774   chars1792 (    struct StrConcat_708  self1301 ) {
    return ( (  into_dash_iter1793 ) ( (  self1301 ) ) );
}

static  struct StrCaseIter_1773   into_dash_iter1791 (    struct StrCase_1788  self1729 ) {
    struct StrCase_1788  dref1730 = (  self1729 );
    if ( dref1730.tag == StrCase_1788_StrCase1_t ) {
        return ( ( StrCaseIter_1773_StrCaseIter1 ) ( ( (  chars472 ) ( ( dref1730 .stuff .StrCase_1788_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1730.tag == StrCase_1788_StrCase2_t ) {
            return ( ( StrCaseIter_1773_StrCaseIter2 ) ( ( (  chars1792 ) ( ( dref1730 .stuff .StrCase_1788_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1773   chars1790 (    struct StrCase_1788  self1741 ) {
    return ( (  into_dash_iter1791 ) ( (  self1741 ) ) );
}

static  struct StrCaseIter_1773   chars1787 (    struct Maybe_85  self1755 ) {
    struct StrCase_1788  temp1789;
    struct StrCase_1788  c1756 = (  temp1789 );
    struct Maybe_85  dref1757 = (  self1755 );
    if ( dref1757.tag == Maybe_85_None_t ) {
        c1756 = ( ( StrCase_1788_StrCase1 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1757.tag == Maybe_85_Just_t ) {
            c1756 = ( ( StrCase_1788_StrCase2 ) ( ( ( StrConcat_708_StrConcat ) ( ( ( StrConcat_709_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Just(" ) ,  ( 5 ) ) ) ,  ( dref1757 .stuff .Maybe_85_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1790 ) ( (  c1756 ) ) );
}

static  struct StrConcatIter_1772   into_dash_iter1786 (    struct StrConcat_84  dref1290 ) {
    return ( (struct StrConcatIter_1772) { .f_left = ( (  chars472 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1787 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_1772   chars1785 (    struct StrConcat_84  self1301 ) {
    return ( (  into_dash_iter1786 ) ( (  self1301 ) ) );
}

static  enum Unit_8   lam1796 (   struct env1776* env ,    struct Char_65  c2872 ) {
    struct envunion64  temp1797 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1500 , .env =  env->envinst60 } );
    return ( temp1797.fun ( &temp1797.env ,  ( env->builder2868 ) ,  (  c2872 ) ) );
}

static  enum Unit_8   write1770 (   struct env68* env ,    struct StrBuilder_62 *  builder2868 ,    struct StrConcat_84  s2870 ) {
    struct env1776 envinst1776 = {
        .builder2868 =  builder2868 ,
        .envinst60 = env->envinst60 ,
    };
    ( (  for_dash_each1771 ) ( ( (  chars1785 ) ( (  s2870 ) ) ) ,  ( (struct envunion1777){ .fun = (  enum Unit_8  (*) (  struct env1776*  ,    struct Char_65  ) )lam1796 , .env =  envinst1776 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_30   mk_dash_dyn_dash_str1767 (   struct env82* env ,    struct StrConcat_84  s2926 ,    enum CAllocator_10  al2928 ) {
    struct StrBuilder_62  temp1768 = ( (  mk1467 ) ( (  al2928 ) ) );
    struct StrBuilder_62 *  sb2929 = ( &temp1768 );
    struct envunion83  temp1769 = ( (struct envunion83){ .fun = (  enum Unit_8  (*) (  struct env68*  ,    struct StrBuilder_62 *  ,    struct StrConcat_84  ) )write1770 , .env =  env->envinst68 } );
    ( temp1769.fun ( &temp1769.env ,  (  sb2929 ) ,  (  s2926 ) ) );
    struct envunion76  temp1798 = ( (struct envunion76){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1500 , .env =  env->envinst60 } );
    ( temp1798.fun ( &temp1798.env ,  (  sb2929 ) ,  ( (  nullchar583 ) ( ) ) ) );
    struct StrView_30  dynstr2930 = ( (  as_dash_str1508 ) ( (  sb2929 ) ) );
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2930 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub292 ( ( ( (  dynstr2930 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1765 (   struct env242* env ,    struct Editor_251 *  ed4690 ,    struct StrConcat_84  s4692 ) {
    ( (  reset_dash_msg1117 ) ( (  ed4690 ) ) );
    struct envunion243  temp1766 = ( (struct envunion243){ .fun = (  struct StrView_30  (*) (  struct env82*  ,    struct StrConcat_84  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1767 , .env =  env->envinst82 } );
    (*  ed4690 ) .f_msg = ( ( Maybe_85_Just ) ( ( temp1766.fun ( &temp1766.env ,  (  s4692 ) ,  ( ( * (  ed4690 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undefined1801 (  ) {
    enum Unit_8  temp1802;
    return (  temp1802 );
}

static  enum Unit_8   todo1800 (  ) {
    ( (  println1377 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1801 ) ( ) );
}

struct Tuple2_1806 {
    struct Maybe_300  field0;
    struct Maybe_300  field1;
};

static struct Tuple2_1806 Tuple2_1806_Tuple2 (  struct Maybe_300  field0 ,  struct Maybe_300  field1 ) {
    return ( struct Tuple2_1806 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1803 (    struct StrView_30  s1940 ,    struct StrView_30  beg1942 ) {
    struct StrViewIter_470  temp1804 = ( (  chars472 ) ( (  s1940 ) ) );
    struct StrViewIter_470 *  scs1943 = ( &temp1804 );
    struct StrViewIter_470  temp1805 = ( (  chars472 ) ( (  beg1942 ) ) );
    struct StrViewIter_470 *  begcs1944 = ( &temp1805 );
    while ( ( true ) ) {
        struct Tuple2_1806  dref1945 = ( ( Tuple2_1806_Tuple2 ) ( ( (  next475 ) ( (  scs1943 ) ) ) ,  ( (  next475 ) ( (  begcs1944 ) ) ) ) );
        if ( dref1945 .field0.tag == Maybe_300_Just_t && dref1945 .field1.tag == Maybe_300_Just_t ) {
            if ( ( !  eq482 ( ( dref1945 .field0 .stuff .Maybe_300_Just_s .field0 ) , ( dref1945 .field1 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref1945 .field0.tag == Maybe_300_None_t && dref1945 .field1.tag == Maybe_300_Just_t ) {
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

struct SliceAddressIter_1809 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_1809   into_dash_iter1810 (    struct SliceAddressIter_1809  self2264 ) {
    return (  self2264 );
}

static  struct SliceAddressIter_1809   addresses1812 (    struct Slice_11  slice2261 ) {
    return ( (struct SliceAddressIter_1809) { .f_slice = (  slice2261 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_11   to_dash_slice1813 (    struct List_9  l2534 ) {
    struct Line_12 *  ptr2535 = ( ( (  l2534 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2535 ) , .f_count = ( (  l2534 ) .f_count ) } );
}

static  struct SliceAddressIter_1809   addresses1811 (    struct List_9  l2538 ) {
    return ( (  addresses1812 ) ( ( (  to_dash_slice1813 ) ( (  l2538 ) ) ) ) );
}

struct Maybe_1815 {
    enum {
        Maybe_1815_None_t,
        Maybe_1815_Just_t,
    } tag;
    union {
        struct {
            struct Line_12 *  field0;
        } Maybe_1815_Just_s;
    } stuff;
};

static struct Maybe_1815 Maybe_1815_Just (  struct Line_12 *  field0 ) {
    return ( struct Maybe_1815 ) { .tag = Maybe_1815_Just_t, .stuff = { .Maybe_1815_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1815   next1816 (    struct SliceAddressIter_1809 *  self2267 ) {
    size_t  off2268 = ( ( * (  self2267 ) ) .f_current_dash_offset );
    if ( (  cmp293 ( (  op_dash_add314 ( (  off2268 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2267 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1815) { .tag = Maybe_1815_None_t } );
    }
    struct Line_12 *  elem2269 = ( (  offset_dash_ptr403 ) ( ( ( ( * (  self2267 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  off2268 ) ) ) ) );
    (*  self2267 ) .f_current_dash_offset = (  op_dash_add314 ( (  off2268 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1815_Just ) ( (  elem2269 ) ) );
}

static  enum Unit_8   set_dash_filetype1807 (    struct TextBuf_104 *  self4132 ,    enum Filetype_107  type4134 ) {
    (*  self4132 ) .f_filetype = (  type4134 );
    struct SliceAddressIter_1809  temp1808 =  into_dash_iter1810 ( ( (  addresses1811 ) ( ( ( * (  self4132 ) ) .f_buf ) ) ) );
    while (true) {
        struct Maybe_1815  __cond1814 =  next1816 (&temp1808);
        if (  __cond1814 .tag == 0 ) {
            break;
        }
        struct Line_12 *  line4136 =  __cond1814 .stuff .Maybe_1815_Just_s .field0;
        (*  line4136 ) .f_invalidated = ( true );
    }
    return ( Unit_8_Unit );
}

struct envunion1818 {
    enum Unit_8  (*fun) (  struct env240*  ,    struct Editor_251 *  ,    struct StrView_30  );
    struct env240 env;
};

struct env1821 {
    bool (*  fun1144 )(    struct Char_65  );
};

struct envunion1822 {
    bool  (*fun) (  struct env1821*  ,    struct Char_65  ,    bool  );
    struct env1821 env;
};

static  bool   reduce1820 (    struct StrView_30  iterable1111 ,    bool  base1113 ,   struct envunion1822  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct StrViewIter_470  it1117 = ( (  into_dash_iter473 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next475 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                struct envunion1822  temp1823 = (  fun1115 );
                x1116 = ( temp1823.fun ( &temp1823.env ,  ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1824 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1824);
    abort ( );
    ( Unit_8_Unit );
    bool  temp1825;
    return (  temp1825 );
}

static  bool   lam1826 (   struct env1821* env ,    struct Char_65  e1146 ,    bool  x1148 ) {
    return ( ( ( env->fun1144 ) ( (  e1146 ) ) ) && (  x1148 ) );
}

static  bool   all1819 (    struct StrView_30  it1142 ,    bool (*  fun1144 )(    struct Char_65  ) ) {
    struct env1821 envinst1821 = {
        .fun1144 =  fun1144 ,
    };
    return ( (  reduce1820 ) ( (  it1142 ) ,  ( true ) ,  ( (struct envunion1822){ .fun = (  bool  (*) (  struct env1821*  ,    struct Char_65  ,    bool  ) )lam1826 , .env =  envinst1821 } ) ) );
}

struct envunion1828 {
    enum Unit_8  (*fun) (  struct env240*  ,    struct Editor_251 *  ,    struct StrView_30  );
    struct env240 env;
};

static  enum Unit_8   run_dash_cmd1673 (   struct env247* env ,    struct Editor_251 *  ed4709 ,    struct StrView_30  s4711 ) {
    struct Scanner_1674  temp1675 = ( (  mk_dash_from_dash_strview1676 ) ( (  s4711 ) ) );
    struct Scanner_1674 *  sc4712 = ( &temp1675 );
    ( (  drop_dash_str_dash_while1677 ) ( (  sc4712 ) ,  (  is_dash_whitespace1371 ) ) );
    struct StrView_30  cmd4713 = ( (  take_dash_str_dash_while1694 ) ( (  sc4712 ) ,  (  is_dash_not_dash_whitespace1710 ) ) );
    ( (  drop_dash_str_dash_while1677 ) ( (  sc4712 ) ,  (  is_dash_whitespace1371 ) ) );
    if ( (  eq520 ( (  cmd4713 ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4709 ) .f_running = ( false );
    } else {
        if ( (  eq520 ( (  cmd4713 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq520 ( (  cmd4713 ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_30  filename4714 = ( (  take_dash_str_dash_while1694 ) ( (  sc4712 ) ,  (  is_dash_not_dash_whitespace1710 ) ) );
                struct Maybe_85  filename4715 = ( ( (  null1711 ) ( (  filename4714 ) ) ) ? ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) : ( ( Maybe_85_Just ) ( (  filename4714 ) ) ) );
                struct envunion248  temp1714 = ( (struct envunion248){ .fun = (  struct Maybe_249  (*) (  struct env111*  ,    struct TextBuf_104 *  ,    struct Maybe_85  ) )write_dash_to_dash_file1715 , .env =  env->envinst111 } );
                struct Maybe_249  write_dash_result4716 = ( temp1714.fun ( &temp1714.env ,  ( ( * ( (  pane1172 ) ( (  ed4709 ) ) ) ) .f_buf ) ,  (  filename4715 ) ) );
                struct Maybe_249  dref4717 = (  write_dash_result4716 );
                if ( dref4717.tag == Maybe_249_None_t ) {
                    if ( ( (  is_dash_none1722 ) ( (  filename4715 ) ) ) ) {
                        struct envunion250  temp1749 = ( (struct envunion250){ .fun = (  enum Unit_8  (*) (  struct env240*  ,    struct Editor_251 *  ,    struct StrView_30  ) )set_dash_msg1750 , .env =  env->envinst240 } );
                        ( temp1749.fun ( &temp1749.env ,  (  ed4709 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"could not save changes (filename not set!!)" ) ,  ( 43 ) ) ) ) );
                    } else {
                        struct envunion254  temp1764 = ( (struct envunion254){ .fun = (  enum Unit_8  (*) (  struct env242*  ,    struct Editor_251 *  ,    struct StrConcat_84  ) )set_dash_msg1765 , .env =  env->envinst242 } );
                        ( temp1764.fun ( &temp1764.env ,  (  ed4709 ) ,  ( ( StrConcat_84_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4715 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4717.tag == Maybe_249_Just_t ) {
                        struct envunion255  temp1799 = ( (struct envunion255){ .fun = (  enum Unit_8  (*) (  struct env238*  ,    struct Editor_251 *  ,    struct StrConcat_78  ) )set_dash_msg1463 , .env =  env->envinst238 } );
                        ( temp1799.fun ( &temp1799.env ,  (  ed4709 ) ,  ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"written " ) ,  ( 8 ) ) ) ,  ( dref4717 .stuff .Maybe_249_Just_s .field0 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)" bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq520 ( (  cmd4713 ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1800 ) ( ) );
                } else {
                    if ( (  eq520 ( (  cmd4713 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_30  what4719 = ( (  take_dash_str_dash_while1694 ) ( (  sc4712 ) ,  (  is_dash_not_dash_whitespace1710 ) ) );
                        if ( (  eq520 ( (  what4719 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed4709 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq520 ( (  what4719 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed4709 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp293 ( ( (  count1142 ) ( ( (  chars472 ) ( (  what4719 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1803 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"absolute" ) ,  ( 8 ) ) ) ,  (  what4719 ) ) ) ) ) {
                                    (* (*  ed4709 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp293 ( ( (  count1142 ) ( ( (  chars472 ) ( (  what4719 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1803 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"relative" ) ,  ( 8 ) ) ) ,  (  what4719 ) ) ) ) ) {
                                        (* (*  ed4709 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq520 ( (  cmd4713 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"ft" ) ,  ( 2 ) ) ) ) ) ) {
                            struct StrView_30  type4720 = ( (  take_dash_str_dash_while1694 ) ( (  sc4712 ) ,  (  is_dash_not_dash_whitespace1710 ) ) );
                            struct TextBuf_104 *  tb4721 = ( ( * ( (  pane1172 ) ( (  ed4709 ) ) ) ) .f_buf );
                            if ( (  eq520 ( (  type4720 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"text" ) ,  ( 4 ) ) ) ) ) ) {
                                ( (  set_dash_filetype1807 ) ( (  tb4721 ) ,  ( Filetype_107_Text ) ) );
                            } else {
                                if ( (  eq520 ( (  type4720 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"kc" ) ,  ( 2 ) ) ) ) ) ) {
                                    ( (  set_dash_filetype1807 ) ( (  tb4721 ) ,  ( Filetype_107_KC ) ) );
                                } else {
                                    if ( (  eq520 ( (  type4720 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"md" ) ,  ( 2 ) ) ) ) ) ) {
                                        ( (  set_dash_filetype1807 ) ( (  tb4721 ) ,  ( Filetype_107_Markdown ) ) );
                                    } else {
                                        struct envunion1818  temp1817 = ( (struct envunion1818){ .fun = (  enum Unit_8  (*) (  struct env240*  ,    struct Editor_251 *  ,    struct StrView_30  ) )set_dash_msg1750 , .env =  env->envinst240 } );
                                        ( temp1817.fun ( &temp1817.env ,  (  ed4709 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"unknown file type" ) ,  ( 17 ) ) ) ) );
                                    }
                                }
                            }
                        } else {
                            if ( (  eq520 ( (  cmd4713 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                            } else {
                                if ( ( (  all1819 ) ( (  cmd4713 ) ,  (  is_dash_digit1011 ) ) ) ) {
                                } else {
                                    struct envunion1828  temp1827 = ( (struct envunion1828){ .fun = (  enum Unit_8  (*) (  struct env240*  ,    struct Editor_251 *  ,    struct StrView_30  ) )set_dash_msg1750 , .env =  env->envinst240 } );
                                    ( temp1827.fun ( &temp1827.env ,  (  ed4709 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"unknown command" ) ,  ( 15 ) ) ) ) );
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

static  struct Char_65   from_dash_u81831 (    uint8_t  b1478 ) {
    return ( (  char_dash_from_dash_u81081 ) ( (  b1478 ) ) );
}

static  struct Char_65   ascii_dash_char1830 (    char  c1487 ) {
    return ( (  from_dash_u81831 ) ( ( (  ascii_dash_u8494 ) ( (  c1487 ) ) ) ) );
}

static  struct Maybe_1005   reduce1835 (    struct StrViewIter_470  iterable1111 ,    struct Maybe_1005  base1113 ,    struct Maybe_1005 (*  fun1115 )(    struct Char_65  ,    struct Maybe_1005  ) ) {
    struct Maybe_1005  x1116 = (  base1113 );
    struct StrViewIter_470  it1117 = ( (  into_dash_iter471 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next475 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1836 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1836);
    abort ( );
    ( Unit_8_Unit );
    struct Maybe_1005  temp1837;
    return (  temp1837 );
}

static  struct Maybe_1005   sequence_dash_maybe1838 (    struct Char_65  e1928 ,    struct Maybe_1005  b1930 ) {
    struct Maybe_1005  dref1931 = (  b1930 );
    if ( dref1931.tag == Maybe_1005_None_t ) {
        return ( (struct Maybe_1005) { .tag = Maybe_1005_None_t } );
    }
    else {
        if ( dref1931.tag == Maybe_1005_Just_t ) {
            struct Maybe_156  dref1933 = ( (  parse_dash_digit1039 ) ( (  e1928 ) ) );
            if ( dref1933.tag == Maybe_156_None_t ) {
                return ( (struct Maybe_1005) { .tag = Maybe_1005_None_t } );
            }
            else {
                if ( dref1933.tag == Maybe_156_Just_t ) {
                    return ( ( Maybe_1005_Just ) ( (  op_dash_add487 ( (  op_dash_mul289 ( ( dref1931 .stuff .Maybe_1005_Just_s .field0 ) , (  from_dash_integral291 ( 10 ) ) ) ) , ( (  i32_dash_i641048 ) ( ( dref1933 .stuff .Maybe_156_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_1005   parse_dash_int1834 (    struct StrView_30  s1925 ) {
    struct StrViewIter_470  cs1935 = ( (  chars472 ) ( (  s1925 ) ) );
    struct Maybe_300  dref1936 = ( (  head1374 ) ( (  cs1935 ) ) );
    if ( dref1936.tag == Maybe_300_Just_t ) {
        return ( (  reduce1835 ) ( (  cs1935 ) ,  ( ( Maybe_1005_Just ) ( (  from_dash_integral291 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1838 ) ) );
    }
    else {
        if ( dref1936.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_1005) { .tag = Maybe_1005_None_t } );
        }
    }
}

struct TakeWhile_1844 {
    struct StrViewIter_470  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1843 {
    struct TakeWhile_1844  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1843 Map_1843_Map (  struct TakeWhile_1844  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1843 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1843   into_dash_iter1846 (    struct Map_1843  self797 ) {
    return (  self797 );
}

static  struct Maybe_300   next1848 (    struct TakeWhile_1844 *  self982 ) {
    struct Maybe_300  mx983 = ( (  next475 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_300  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_300_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_300_Just ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
            }
        }
    }
}

static  struct Maybe_249   next1847 (    struct Map_1843 *  dref799 ) {
    struct Maybe_300  dref802 = ( (  next1848 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_249) { .tag = Maybe_249_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_300_Just_t ) {
            return ( ( Maybe_249_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_300_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1845 (    struct Map_1843  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    size_t  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct Map_1843  it1117 = ( (  into_dash_iter1846 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_249  dref1118 = ( (  next1847 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_249_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_249_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_249_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1849 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1849);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1850;
    return (  temp1850 );
}

static  size_t   lam1851 (    size_t  v1130 ,    size_t  s1132 ) {
    return (  op_dash_add314 ( (  v1130 ) , (  s1132 ) ) );
}

static  size_t   sum1842 (    struct Map_1843  it1128 ) {
    return ( (  reduce1845 ) ( (  it1128 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1851 ) ) );
}

static  struct TakeWhile_1844   into_dash_iter1853 (    struct TakeWhile_1844  self979 ) {
    return (  self979 );
}

static  struct Map_1843   map1852 (    struct TakeWhile_1844  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1844  it809 = ( (  into_dash_iter1853 ) ( (  iterable806 ) ) );
    return ( ( Map_1843_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1844   take_dash_while1854 (    struct StrViewIter_470  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1844) { .f_it = ( (  into_dash_iter471 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  size_t   lam1855 (    struct Char_65  c2629 ) {
    return ( (  c2629 ) .f_num_dash_bytes );
}

static  struct StrView_30   take_dash_while1841 (    struct StrView_30  self2625 ,    bool (*  fun2627 )(    struct Char_65  ) ) {
    size_t  bi2630 = ( (  sum1842 ) ( ( (  map1852 ) ( ( (  take_dash_while1854 ) ( ( (  chars472 ) ( (  self2625 ) ) ) ,  (  fun2627 ) ) ) ,  (  lam1855 ) ) ) ) );
    return ( (  byte_dash_substr497 ) ( (  self2625 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2630 ) ) );
}

static  struct StrView_30   take_dash_str_dash_while1840 (    struct Scanner_1674 *  sc3473 ,    bool (*  fun3475 )(    struct Char_65  ) ) {
    struct StrView_30  s3476 = ( (  take_dash_while1841 ) ( ( ( * (  sc3473 ) ) .f_s ) ,  (  fun3475 ) ) );
    (*  sc3473 ) .f_s = ( (  byte_dash_substr_dash_from477 ) ( ( ( * (  sc3473 ) ) .f_s ) ,  ( (  num_dash_bytes1168 ) ( (  s3476 ) ) ) ) );
    return (  s3476 );
}

struct TakeWhile_1860 {
    struct StrViewIter_470  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1859 {
    struct TakeWhile_1860  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1859 Map_1859_Map (  struct TakeWhile_1860  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1859 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1859   into_dash_iter1862 (    struct Map_1859  self797 ) {
    return (  self797 );
}

static  struct Maybe_300   next1864 (    struct TakeWhile_1860 *  self982 ) {
    struct Maybe_300  mx983 = ( (  next475 ) ( ( & ( ( * (  self982 ) ) .f_it ) ) ) );
    struct Maybe_300  dref984 = (  mx983 );
    if ( dref984.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    else {
        if ( dref984.tag == Maybe_300_Just_t ) {
            if ( ( ( ( * (  self982 ) ) .f_pred ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_300_Just ) ( ( dref984 .stuff .Maybe_300_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
            }
        }
    }
}

static  struct Maybe_249   next1863 (    struct Map_1859 *  dref799 ) {
    struct Maybe_300  dref802 = ( (  next1864 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_249) { .tag = Maybe_249_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_300_Just_t ) {
            return ( ( Maybe_249_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_300_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1861 (    struct Map_1859  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    size_t  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct Map_1859  it1117 = ( (  into_dash_iter1862 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_249  dref1118 = ( (  next1863 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_249_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_249_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_249_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1865 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1865);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1866;
    return (  temp1866 );
}

static  size_t   lam1867 (    size_t  v1130 ,    size_t  s1132 ) {
    return (  op_dash_add314 ( (  v1130 ) , (  s1132 ) ) );
}

static  size_t   sum1858 (    struct Map_1859  it1128 ) {
    return ( (  reduce1861 ) ( (  it1128 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1867 ) ) );
}

static  struct TakeWhile_1860   into_dash_iter1869 (    struct TakeWhile_1860  self979 ) {
    return (  self979 );
}

static  struct Map_1859   map1868 (    struct TakeWhile_1860  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1860  it809 = ( (  into_dash_iter1869 ) ( (  iterable806 ) ) );
    return ( ( Map_1859_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1860   take_dash_while1870 (    struct StrViewIter_470  it988 ,    bool (*  pred990 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1860) { .f_it = ( (  into_dash_iter471 ) ( (  it988 ) ) ) , .f_pred = (  pred990 ) } );
}

static  size_t   lam1871 (    struct Char_65  c2629 ) {
    return ( (  c2629 ) .f_num_dash_bytes );
}

static  struct StrView_30   take_dash_while1857 (    struct StrView_30  self2625 ,    bool (*  fun2627 )(    struct Char_65  ) ) {
    size_t  bi2630 = ( (  sum1858 ) ( ( (  map1868 ) ( ( (  take_dash_while1870 ) ( ( (  chars472 ) ( (  self2625 ) ) ) ,  (  fun2627 ) ) ) ,  (  lam1871 ) ) ) ) );
    return ( (  byte_dash_substr497 ) ( (  self2625 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2630 ) ) );
}

static  struct StrView_30   take_dash_str_dash_while1856 (    struct Scanner_1674 *  sc3473 ,    bool (*  fun3475 )(    struct Char_65  ) ) {
    struct StrView_30  s3476 = ( (  take_dash_while1857 ) ( ( ( * (  sc3473 ) ) .f_s ) ,  (  fun3475 ) ) );
    (*  sc3473 ) .f_s = ( (  byte_dash_substr_dash_from477 ) ( ( ( * (  sc3473 ) ) .f_s ) ,  ( (  num_dash_bytes1168 ) ( (  s3476 ) ) ) ) );
    return (  s3476 );
}

static  bool   lam1872 (    struct Char_65  c4705 ) {
    return ( ! ( (  is_dash_whitespace1371 ) ( (  c4705 ) ) ) );
}

static  struct Theme_173 *   or_dash_else1873 (    struct Maybe_246  self1353 ,    struct Theme_173 *  alt1355 ) {
    struct Maybe_246  dref1356 = (  self1353 );
    if ( dref1356.tag == Maybe_246_None_t ) {
        return (  alt1355 );
    }
    else {
        if ( dref1356.tag == Maybe_246_Just_t ) {
            return ( dref1356 .stuff .Maybe_246_Just_s .field0 );
        }
    }
}

struct SliceIter_1879 {
    struct Slice_194  f_slice;
    size_t  f_current_dash_offset;
};

struct env1880 {
    struct StrView_30  name4265;
    ;
};

struct envunion1881 {
    bool  (*fun) (  struct env1880*  ,    struct Tuple2_195  );
    struct env1880 env;
};

struct Filter_1878 {
    struct SliceIter_1879  f_og;
    struct envunion1881  f_fun;
};

struct Map_1877 {
    struct Filter_1878  field0;
    struct Theme_173 * (*  field1 )(    struct Tuple2_195  );
};

static struct Map_1877 Map_1877_Map (  struct Filter_1878  field0 ,  struct Theme_173 * (*  field1 )(    struct Tuple2_195  ) ) {
    return ( struct Map_1877 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1883 {
    enum {
        Maybe_1883_None_t,
        Maybe_1883_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_195  field0;
        } Maybe_1883_Just_s;
    } stuff;
};

static struct Maybe_1883 Maybe_1883_Just (  struct Tuple2_195  field0 ) {
    return ( struct Maybe_1883 ) { .tag = Maybe_1883_Just_t, .stuff = { .Maybe_1883_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_195 *   offset_dash_ptr1886 (    struct Tuple2_195 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_195  temp1887;
    return ( (struct Tuple2_195 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp1887 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1883   next1885 (    struct SliceIter_1879 *  self2249 ) {
    size_t  off2250 = ( ( * (  self2249 ) ) .f_current_dash_offset );
    if ( (  cmp293 ( (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2249 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1883) { .tag = Maybe_1883_None_t } );
    }
    struct Tuple2_195  elem2251 = ( * ( (  offset_dash_ptr1886 ) ( ( ( ( * (  self2249 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  off2250 ) ) ) ) ) );
    (*  self2249 ) .f_current_dash_offset = (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1883_Just ) ( (  elem2251 ) ) );
}

static  struct Maybe_1883   next1884 (    struct Filter_1878 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_1883  dref835 = ( (  next1885 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_1883_None_t ) {
            return ( (struct Maybe_1883) { .tag = Maybe_1883_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_1883_Just_t ) {
                struct envunion1881  temp1888 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp1888.fun ( &temp1888.env ,  ( dref835 .stuff .Maybe_1883_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1883_Just ) ( ( dref835 .stuff .Maybe_1883_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1883  temp1889;
    return (  temp1889 );
}

static  struct Maybe_246   next1882 (    struct Map_1877 *  dref799 ) {
    struct Maybe_1883  dref802 = ( (  next1884 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_1883_None_t ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_1883_Just_t ) {
            return ( ( Maybe_246_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_1883_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1877   into_dash_iter1891 (    struct Map_1877  self797 ) {
    return (  self797 );
}

static  struct Maybe_246   head1876 (    struct Map_1877  it1160 ) {
    struct Map_1877  temp1890 = ( (  into_dash_iter1891 ) ( (  it1160 ) ) );
    return ( (  next1882 ) ( ( &temp1890 ) ) );
}

static  struct Filter_1878   into_dash_iter1893 (    struct Filter_1878  self831 ) {
    return (  self831 );
}

static  struct Map_1877   map1892 (    struct Filter_1878  iterable806 ,    struct Theme_173 * (*  fun808 )(    struct Tuple2_195  ) ) {
    struct Filter_1878  it809 = ( (  into_dash_iter1893 ) ( (  iterable806 ) ) );
    return ( ( Map_1877_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct SliceIter_1879   into_dash_iter1895 (    struct Slice_194  self2243 ) {
    return ( (struct SliceIter_1879) { .f_slice = (  self2243 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1878   filter1894 (    struct Slice_194  iterable839 ,   struct envunion1881  fun841 ) {
    struct SliceIter_1879  it842 = ( (  into_dash_iter1895 ) ( (  iterable839 ) ) );
    return ( (struct Filter_1878) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  bool   lam1896 (   struct env1880* env ,    struct Tuple2_195  dref4266 ) {
    return ( (  begins_dash_with1803 ) ( ( dref4266 .field0 ) ,  ( env->name4265 ) ) );
}

static  struct Theme_173 *   snd1897 (    struct Tuple2_195  dref1559 ) {
    return ( dref1559 .field1 );
}

static  struct Maybe_246   match_dash_theme1875 (   struct env203* env ,    struct StrView_30  name4265 ) {
    if ( ( (  null1711 ) ( (  name4265 ) ) ) ) {
        return ( (struct Maybe_246) { .tag = Maybe_246_None_t } );
    }
    struct env1880 envinst1880 = {
        .name4265 =  name4265 ,
    };
    return ( (  head1876 ) ( ( (  map1892 ) ( ( (  filter1894 ) ( ( env->all_dash_themes4262 ) ,  ( (struct envunion1881){ .fun = (  bool  (*) (  struct env1880*  ,    struct Tuple2_195  ) )lam1896 , .env =  envinst1880 } ) ) ) ,  (  snd1897 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1833 (   struct env244* env ,    struct Editor_251 *  ed4695 ,    struct StrView_30  cmd4697 ) {
    struct Maybe_1005  dref4698 = ( (  parse_dash_int1834 ) ( (  cmd4697 ) ) );
    if ( dref4698.tag == Maybe_1005_Just_t ) {
        int32_t  line4700 = ( (  clamp1520 ) ( ( (  i64_dash_i321050 ) ( ( dref4698 .stuff .Maybe_1005_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (  num_dash_lines1175 ) ( ( ( * ( (  pane1172 ) ( (  ed4695 ) ) ) ) .f_buf ) ) ) ) );
        int32_t  line4701 = (  op_dash_sub165 ( (  line4700 ) , (  from_dash_integral56 ( 1 ) ) ) );
        ( (  set_dash_cursors1129 ) ( ( (  pane1172 ) ( (  ed4695 ) ) ) ,  ( (struct Pos_29) { .f_line = (  line4701 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_NoChanges ) ) );
    }
    else {
        if ( dref4698.tag == Maybe_1005_None_t ) {
            struct Scanner_1674  temp1839 = ( (  mk_dash_from_dash_strview1676 ) ( (  cmd4697 ) ) );
            struct Scanner_1674 *  sc4702 = ( &temp1839 );
            struct StrView_30  cmd4703 = ( (  take_dash_str_dash_while1840 ) ( (  sc4702 ) ,  (  is_dash_alpha1370 ) ) );
            if ( (  eq520 ( (  cmd4703 ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1677 ) ( (  sc4702 ) ,  (  is_dash_whitespace1371 ) ) );
                struct StrView_30  theme_dash_name4706 = ( (  take_dash_str_dash_while1856 ) ( (  sc4702 ) ,  (  lam1872 ) ) );
                struct envunion245  temp1874 = ( (struct envunion245){ .fun = (  struct Maybe_246  (*) (  struct env203*  ,    struct StrView_30  ) )match_dash_theme1875 , .env =  env->envinst203 } );
                (* (*  ed4695 ) .f_cfg ) .f_theme = ( (  or_dash_else1873 ) ( ( temp1874.fun ( &temp1874.env ,  (  theme_dash_name4706 ) ) ) ,  ( ( * (  ed4695 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_470   into_dash_iter1901 (    struct StrBuilder_62  self2923 ) {
    return ( (  chars1742 ) ( (  self2923 ) ) );
}

static  struct Maybe_300   head1899 (    struct StrBuilder_62  it1160 ) {
    struct StrViewIter_470  temp1900 = ( (  into_dash_iter1901 ) ( (  it1160 ) ) );
    return ( (  next475 ) ( ( &temp1900 ) ) );
}

static  bool   null1898 (    struct StrBuilder_62  it1169 ) {
    struct Maybe_300  dref1170 = ( (  head1899 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_300_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  uint8_t *   get_dash_ptr1908 (    struct List_13 *  list2399 ,    size_t  i2401 ) {
    if ( ( (  cmp293 ( (  i2401 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2401 ) , ( ( * (  list2399 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2401 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2399 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr571 ) ( ( ( * (  list2399 ) ) .f_elements ) ,  (  i2401 ) ) );
}

static  uint8_t   get1907 (    struct List_13 *  list2409 ,    size_t  i2411 ) {
    return ( * ( (  get_dash_ptr1908 ) ( (  list2409 ) ,  (  i2411 ) ) ) );
}

static  struct Maybe_74   last1906 (    struct List_13 *  list2496 ) {
    if ( (  eq358 ( ( ( * (  list2496 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_74) { .tag = Maybe_74_None_t } );
    } else {
        return ( ( Maybe_74_Just ) ( ( (  get1907 ) ( (  list2496 ) ,  (  op_dash_sub292 ( ( (  size668 ) ( (  list2496 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) );
    }
}

static  enum Unit_8   remove1910 (   struct env42* env ,    struct List_13 *  list2480 ,    size_t  i2482 ) {
    struct envunion43  temp1911 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range670 , .env =  env->envinst40 } );
    ( temp1911.fun ( &temp1911.env ,  (  list2480 ) ,  (  i2482 ) ,  (  op_dash_add314 ( (  i2482 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_74   pop1905 (   struct env44* env ,    struct List_13 *  list2499 ) {
    if ( (  eq358 ( ( ( * (  list2499 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1250 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct Maybe_74  last_dash_elem2500 = ( (  last1906 ) ( (  list2499 ) ) );
    struct envunion45  temp1909 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_13 *  ,    size_t  ) )remove1910 , .env =  env->envinst42 } );
    ( temp1909.fun ( &temp1909.env ,  (  list2499 ) ,  (  op_dash_sub292 ( ( ( * (  list2499 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return (  last_dash_elem2500 );
}

static  struct Maybe_74   pop1903 (   struct env72* env ,    struct StrBuilder_62 *  sb2886 ) {
    struct envunion73  temp1904 = ( (struct envunion73){ .fun = (  struct Maybe_74  (*) (  struct env44*  ,    struct List_13 *  ) )pop1905 , .env =  env->envinst44 } );
    return ( temp1904.fun ( &temp1904.env ,  ( & ( ( * (  sb2886 ) ) .f_chars ) ) ) );
}

struct envunion1913 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Editor_251 *  ,    struct StrView_30  );
    struct env244 env;
};

struct env1915 {
    struct Editor_251 *  ed4777;
    ;
};

struct envunion1916 {
    enum Unit_8  (*fun) (  struct env1915*  ,    struct StrView_30  );
    struct env1915 env;
};

static  enum Unit_8   if_dash_just1914 (    struct Maybe_85  x1594 ,   struct envunion1916  fun1596 ) {
    struct Maybe_85  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_85_Just_t ) {
        struct envunion1916  temp1917 = (  fun1596 );
        ( temp1917.fun ( &temp1917.env ,  ( dref1597 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1918 (   struct env1915* env ,    struct StrView_30  st4794 ) {
    ( (  free586 ) ( (  st4794 ) ,  ( ( * ( env->ed4777 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1920 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  enum Unit_8   live_dash_search1921 (    struct Editor_251 *  ed4724 ,    struct Pos_29  begin_dash_pos4726 ,    struct StrView_30  query4728 ) {
    if ( ( ! ( (  null1711 ) ( (  query4728 ) ) ) ) ) {
        struct Maybe_1547  dref4729 = ( (  search_dash_from1548 ) ( ( (  pane1172 ) ( (  ed4724 ) ) ) ,  (  begin_dash_pos4726 ) ,  (  query4728 ) ) );
        if ( dref4729.tag == Maybe_1547_Just_t ) {
            ( (  set_dash_cursors1129 ) ( ( (  pane1172 ) ( (  ed4724 ) ) ) ,  ( dref4729 .stuff .Maybe_1547_Just_s .field0 .field1 ) ,  ( ( Maybe_32_Just ) ( ( dref4729 .stuff .Maybe_1547_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1130_NoChanges ) ) );
        }
        else {
            if ( dref4729.tag == Maybe_1547_None_t ) {
                ( (  set_dash_cursors1129 ) ( ( (  pane1172 ) ( (  ed4724 ) ) ) ,  (  begin_dash_pos4726 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors1129 ) ( ( (  pane1172 ) ( (  ed4724 ) ) ) ,  (  begin_dash_pos4726 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1923 {
    struct Maybe_74  (*fun) (  struct env72*  ,    struct StrBuilder_62 *  );
    struct env72 env;
};

static  enum Unit_8   handle_dash_key1125 (   struct env267* env ,    struct Editor_251 *  ed4777 ,    struct Key_273  key4779 ) {
    struct EditorMode_252 *  dref4780 = ( & ( ( * (  ed4777 ) ) .f_mode ) );
    if ( (* dref4780 ).tag == EditorMode_252_Normal_t ) {
        enum Mode_224  dref4781 = ( ( ( * (  ed4777 ) ) .f_pane ) .f_mode );
        switch (  dref4781 ) {
            case Mode_224_Normal : {
                struct envunion272  temp1126 = ( (struct envunion272){ .fun = (  enum Unit_8  (*) (  struct env256*  ,    struct Editor_251 *  ,    struct Key_273  ) )handle_dash_normal_dash_key1127 , .env =  env->envinst256 } );
                ( temp1126.fun ( &temp1126.env ,  (  ed4777 ) ,  (  key4779 ) ) );
                break;
            }
            case Mode_224_Select : {
                struct envunion1658  temp1657 = ( (struct envunion1658){ .fun = (  enum Unit_8  (*) (  struct env256*  ,    struct Editor_251 *  ,    struct Key_273  ) )handle_dash_normal_dash_key1127 , .env =  env->envinst256 } );
                ( temp1657.fun ( &temp1657.env ,  (  ed4777 ) ,  (  key4779 ) ) );
                break;
            }
            case Mode_224_Insert : {
                struct Key_273  dref4782 = (  key4779 );
                if ( dref4782.tag == Key_273_Escape_t ) {
                    ( (  set_dash_mode1181 ) ( ( (  pane1172 ) ( (  ed4777 ) ) ) ,  ( Mode_224_Normal ) ) );
                }
                else {
                    if ( dref4782.tag == Key_273_Enter_t ) {
                        int32_t  indent4783 = ( (  indent_dash_at_dash_line1184 ) ( ( (  pane1172 ) ( (  ed4777 ) ) ) ,  ( ( ( * ( (  pane1172 ) ( (  ed4777 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion1660  temp1659 = ( (struct envunion1660){ .fun = (  enum Unit_8  (*) (  struct env207*  ,    struct Pane_223 *  ,    struct StrView_30  ) )add_dash_str_dash_at_dash_char1204 , .env =  env->envinst207 } );
                        ( temp1659.fun ( &temp1659.env ,  ( (  pane1172 ) ( (  ed4777 ) ) ) ,  ( (  from_dash_charlike543 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1173 ) ( ( (  pane1172 ) ( (  ed4777 ) ) ) ) );
                        struct envunion271  temp1661 = ( (struct envunion271){ .fun = (  enum Unit_8  (*) (  struct env229*  ,    struct Pane_223 *  ,    int32_t  ) )indent_dash_at_dash_current1340 , .env =  env->envinst229 } );
                        ( temp1661.fun ( &temp1661.env ,  ( (  pane1172 ) ( (  ed4777 ) ) ) ,  (  indent4783 ) ) );
                    }
                    else {
                        if ( dref4782.tag == Key_273_Backspace_t ) {
                            struct envunion268  temp1662 = ( (struct envunion268){ .fun = (  enum Unit_8  (*) (  struct env210*  ,    struct Pane_223 *  ) )backspace1663 , .env =  env->envinst210 } );
                            ( temp1662.fun ( &temp1662.env ,  ( (  pane1172 ) ( (  ed4777 ) ) ) ) );
                        }
                        else {
                            if ( dref4782.tag == Key_273_Char_t ) {
                                struct Array_1666  temp1670 = ( (struct Array_1666) { ._arr = { ( dref4782 .stuff .Key_273_Char_s .field0 ) } } );
                                struct Array_1666  temp1668 = ( (  from_dash_listlike1669 ) ( ( &temp1670 ) ) );
                                struct StrView_30  s4785 = ( (  from_dash_ascii_dash_slice1002 ) ( ( (  as_dash_slice1665 ) ( ( &temp1668 ) ) ) ) );
                                struct envunion275  temp1671 = ( (struct envunion275){ .fun = (  enum Unit_8  (*) (  struct env207*  ,    struct Pane_223 *  ,    struct StrView_30  ) )add_dash_str_dash_at_dash_char1204 , .env =  env->envinst207 } );
                                ( temp1671.fun ( &temp1671.env ,  ( (  pane1172 ) ( (  ed4777 ) ) ) ,  (  s4785 ) ) );
                                ( (  move_dash_right1173 ) ( ( (  pane1172 ) ( (  ed4777 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4780 ).tag == EditorMode_252_Cmd_t ) {
            struct Key_273  dref4788 = (  key4779 );
            if ( dref4788.tag == Key_273_Escape_t ) {
                ( (  set_dash_cursors1129 ) ( ( (  pane1172 ) ( (  ed4777 ) ) ) ,  ( (* dref4780 ) .stuff .EditorMode_252_Cmd_s .field0 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_UpdateVI ) ) );
                (*  ed4777 ) .f_mode = ( (struct EditorMode_252) { .tag = EditorMode_252_Normal_t } );
                (* (*  ed4777 ) .f_cfg ) .f_theme = ( ( * (  ed4777 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4788.tag == Key_273_Enter_t ) {
                    struct envunion274  temp1672 = ( (struct envunion274){ .fun = (  enum Unit_8  (*) (  struct env247*  ,    struct Editor_251 *  ,    struct StrView_30  ) )run_dash_cmd1673 , .env =  env->envinst247 } );
                    ( temp1672.fun ( &temp1672.env ,  (  ed4777 ) ,  ( (  as_dash_str1508 ) ( ( & ( (* dref4780 ) .stuff .EditorMode_252_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1747 ) ( ( & ( (* dref4780 ) .stuff .EditorMode_252_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors1129 ) ( ( (  pane1172 ) ( (  ed4777 ) ) ) ,  ( ( * ( (  pane1172 ) ( (  ed4777 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_UpdateVI ) ) );
                    (*  ed4777 ) .f_mode = ( (struct EditorMode_252) { .tag = EditorMode_252_Normal_t } );
                    (*  ed4777 ) .f_og_dash_theme = ( ( * ( ( * (  ed4777 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref4788.tag == Key_273_Char_t ) {
                        struct envunion269  temp1829 = ( (struct envunion269){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1500 , .env =  env->envinst60 } );
                        ( temp1829.fun ( &temp1829.env ,  ( & ( (* dref4780 ) .stuff .EditorMode_252_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1830 ) ( ( dref4788 .stuff .Key_273_Char_s .field0 ) ) ) ) );
                        struct envunion276  temp1832 = ( (struct envunion276){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Editor_251 *  ,    struct StrView_30  ) )live_dash_cmd1833 , .env =  env->envinst244 } );
                        ( temp1832.fun ( &temp1832.env ,  (  ed4777 ) ,  ( (  as_dash_str1508 ) ( ( & ( (* dref4780 ) .stuff .EditorMode_252_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4788.tag == Key_273_Backspace_t ) {
                            if ( ( ! ( (  null1898 ) ( ( (* dref4780 ) .stuff .EditorMode_252_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion270  temp1902 = ( (struct envunion270){ .fun = (  struct Maybe_74  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1903 , .env =  env->envinst72 } );
                                ( temp1902.fun ( &temp1902.env ,  ( & ( (* dref4780 ) .stuff .EditorMode_252_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1913  temp1912 = ( (struct envunion1913){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Editor_251 *  ,    struct StrView_30  ) )live_dash_cmd1833 , .env =  env->envinst244 } );
                            ( temp1912.fun ( &temp1912.env ,  (  ed4777 ) ,  ( (  as_dash_str1508 ) ( ( & ( (* dref4780 ) .stuff .EditorMode_252_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4780 ).tag == EditorMode_252_Search_t ) {
                struct Key_273  dref4792 = (  key4779 );
                if ( dref4792.tag == Key_273_Escape_t ) {
                    ( (  set_dash_cursors1129 ) ( ( (  pane1172 ) ( (  ed4777 ) ) ) ,  ( (* dref4780 ) .stuff .EditorMode_252_Search_s .field0 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1130_UpdateVI ) ) );
                    (*  ed4777 ) .f_mode = ( (struct EditorMode_252) { .tag = EditorMode_252_Normal_t } );
                }
                else {
                    if ( dref4792.tag == Key_273_Enter_t ) {
                        ( (  set_dash_cursors1129 ) ( ( (  pane1172 ) ( (  ed4777 ) ) ) ,  ( ( * ( (  pane1172 ) ( (  ed4777 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1172 ) ( (  ed4777 ) ) ) ) .f_sel ) ,  ( CursorMovement_1130_UpdateVI ) ) );
                        struct env1915 envinst1915 = {
                            .ed4777 =  ed4777 ,
                        };
                        ( (  if_dash_just1914 ) ( ( ( * (  ed4777 ) ) .f_search_dash_term ) ,  ( (struct envunion1916){ .fun = (  enum Unit_8  (*) (  struct env1915*  ,    struct StrView_30  ) )lam1918 , .env =  envinst1915 } ) ) );
                        if ( ( ! ( (  null1898 ) ( ( (* dref4780 ) .stuff .EditorMode_252_Search_s .field1 ) ) ) ) ) {
                            struct Pos_29  to4795 = ( ( * ( (  pane1172 ) ( (  ed4777 ) ) ) ) .f_cursor );
                            struct Pos_29  from4796 = ( (  or_dash_else1439 ) ( ( ( * ( (  pane1172 ) ( (  ed4777 ) ) ) ) .f_sel ) ,  (  to4795 ) ) );
                            (*  ed4777 ) .f_search_dash_term = ( ( Maybe_85_Just ) ( ( (  as_dash_str1508 ) ( ( & ( (* dref4780 ) .stuff .EditorMode_252_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4777 ) .f_search_dash_term = ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
                        }
                        (*  ed4777 ) .f_mode = ( (struct EditorMode_252) { .tag = EditorMode_252_Normal_t } );
                    }
                    else {
                        if ( dref4792.tag == Key_273_Char_t ) {
                            struct envunion1920  temp1919 = ( (struct envunion1920){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1500 , .env =  env->envinst60 } );
                            ( temp1919.fun ( &temp1919.env ,  ( & ( (* dref4780 ) .stuff .EditorMode_252_Search_s .field1 ) ) ,  ( (  ascii_dash_char1830 ) ( ( dref4792 .stuff .Key_273_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1921 ) ( (  ed4777 ) ,  ( (* dref4780 ) .stuff .EditorMode_252_Search_s .field0 ) ,  ( (  as_dash_str1508 ) ( ( & ( (* dref4780 ) .stuff .EditorMode_252_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4792.tag == Key_273_Backspace_t ) {
                                if ( ( ! ( (  null1898 ) ( ( (* dref4780 ) .stuff .EditorMode_252_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1923  temp1922 = ( (struct envunion1923){ .fun = (  struct Maybe_74  (*) (  struct env72*  ,    struct StrBuilder_62 *  ) )pop1903 , .env =  env->envinst72 } );
                                    ( temp1922.fun ( &temp1922.env ,  ( & ( (* dref4780 ) .stuff .EditorMode_252_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1921 ) ( (  ed4777 ) ,  ( (* dref4780 ) .stuff .EditorMode_252_Search_s .field0 ) ,  ( (  as_dash_str1508 ) ( ( & ( (* dref4780 ) .stuff .EditorMode_252_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1800 ) ( ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1925 {
    bool  (*fun) (  struct env95*  ,    struct Screen_279 *  );
    struct env95 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1926 (   struct env95* env ,    struct Screen_279 *  screen3719 ) {
    struct Tui_91 *  tui3720 = ( ( * (  screen3719 ) ) .f_tui );
    struct envunion96  temp1927 = ( (struct envunion96){ .fun = (  bool  (*) (  struct env88*  ,    struct Tui_91 *  ) )update_dash_dimensions926 , .env =  env->envinst88 } );
    bool  updated_dash_dimensions3721 = ( temp1927.fun ( &temp1927.env ,  (  tui3720 ) ) );
    if ( ( ! (  updated_dash_dimensions3721 ) ) ) {
        return ( false );
    }
    (*  screen3719 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3722 = ( ( * ( ( * (  screen3719 ) ) .f_tui ) ) .f_width );
    uint32_t  h3723 = ( ( * ( ( * (  screen3719 ) ) .f_tui ) ) .f_height );
    size_t  nusz3724 = ( (  u32_dash_size875 ) ( (  op_dash_mul168 ( (  w3722 ) , (  h3723 ) ) ) ) );
    if ( (  cmp293 ( (  nusz3724 ) , ( ( ( * (  screen3719 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_279  nuscreen3725 = ( (  mk_dash_screen869 ) ( (  tui3720 ) ,  ( ( * (  screen3719 ) ) .f_al ) ) );
    (*  screen3719 ) .f_current = ( (  nuscreen3725 ) .f_current );
    (*  screen3719 ) .f_previous = ( (  nuscreen3725 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1928 (    struct Tui_91 *  tui3646 ) {
    bool  redraw3647 = ( ( * (  tui3646 ) ) .f_should_dash_redraw );
    (*  tui3646 ) .f_should_dash_redraw = ( false );
    return (  redraw3647 );
}

struct env1932 {
    struct Slice_280  s2321;
    ;
    struct Cell_281 (*  fun2323 )(    struct Cell_281  );
    ;
    ;
};

struct envunion1933 {
    enum Unit_8  (*fun) (  struct env1932*  ,    int32_t  );
    struct env1932 env;
};

static  enum Unit_8   for_dash_each1931 (    struct Range_151  iterable1092 ,   struct envunion1933  fun1094 ) {
    struct RangeIter_154  temp1934 = ( (  into_dash_iter155 ) ( (  iterable1092 ) ) );
    struct RangeIter_154 *  it1095 = ( &temp1934 );
    while ( ( true ) ) {
        struct Maybe_156  dref1096 = ( (  next157 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_156_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_156_Just_t ) {
                struct envunion1933  temp1935 = (  fun1094 );
                ( temp1935.fun ( &temp1935.env ,  ( dref1096 .stuff .Maybe_156_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1936 (   struct env1932* env ,    int32_t  i2325 ) {
    return ( (  set890 ) ( ( env->s2321 ) ,  ( (  i32_dash_size423 ) ( (  i2325 ) ) ) ,  ( ( env->fun2323 ) ( (  elem_dash_get894 ( ( env->s2321 ) , ( (  i32_dash_size423 ) ( (  i2325 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1930 (    struct Slice_280  s2321 ,    struct Cell_281 (*  fun2323 )(    struct Cell_281  ) ) {
    struct env1932 envinst1932 = {
        .s2321 =  s2321 ,
        .fun2323 =  fun2323 ,
    };
    ( (  for_dash_each1931 ) ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32332 ) ( (  op_dash_sub292 ( ( (  s2321 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1933){ .fun = (  enum Unit_8  (*) (  struct env1932*  ,    int32_t  ) )lam1936 , .env =  envinst1932 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_281   lam1937 (    struct Cell_281  dref3683 ) {
    return ( (  default_dash_cell902 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1929 (    struct Screen_279 *  screen3682 ) {
    ( (  map1930 ) ( ( ( * (  screen3682 ) ) .f_current ) ,  (  lam1937 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1938 (    struct Screen_279 *  screen3728 ,    struct Color_139  c3730 ) {
    (*  screen3728 ) .f_default_dash_fg = (  c3730 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1939 (    struct Screen_279 *  screen3733 ,    struct Color_139  c3735 ) {
    (*  screen3733 ) .f_default_dash_bg = (  c3735 );
    return ( Unit_8_Unit );
}

static  int32_t   cast1943 (    uint32_t  x395 ) {
    return ( (int32_t ) (  x395 ) );
}

static  int32_t   u32_dash_i321942 (    uint32_t  x737 ) {
    return ( (  cast1943 ) ( (  x737 ) ) );
}

struct Maybe_1948 {
    enum {
        Maybe_1948_None_t,
        Maybe_1948_Just_t,
    } tag;
    union {
        struct {
            struct Cell_281 *  field0;
        } Maybe_1948_Just_s;
    } stuff;
};

static struct Maybe_1948 Maybe_1948_Just (  struct Cell_281 *  field0 ) {
    return ( struct Maybe_1948 ) { .tag = Maybe_1948_Just_t, .stuff = { .Maybe_1948_Just_s = { .field0 = field0 } } };
};

static  struct Cell_281 *   undefined1949 (  ) {
    struct Cell_281 *  temp1950;
    return (  temp1950 );
}

static  struct Cell_281 *   or_dash_fail1947 (    struct Maybe_1948  x1346 ,    struct StrView_30  errmsg1348 ) {
    struct Maybe_1948  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_1948_None_t ) {
        ( (  panic1250 ) ( (  errmsg1348 ) ) );
        return ( (  undefined1949 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_1948_Just_t ) {
            return ( dref1349 .stuff .Maybe_1948_Just_s .field0 );
        }
    }
}

static  struct Maybe_1948   get_dash_cell_dash_ptr1951 (    struct Screen_279 *  screen3749 ,    int32_t  x3751 ,    int32_t  y3753 ) {
    int32_t  w3754 = ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3749 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp158 ( (  x3751 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  x3751 ) , (  w3754 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1948) { .tag = Maybe_1948_None_t } );
    }
    if ( ( (  cmp158 ( (  y3753 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  y3753 ) , ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3749 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1948) { .tag = Maybe_1948_None_t } );
    }
    size_t  i3755 = ( (  i32_dash_size423 ) ( (  op_dash_add160 ( (  op_dash_mul1562 ( (  y3753 ) , (  w3754 ) ) ) , (  x3751 ) ) ) ) );
    return ( ( Maybe_1948_Just ) ( ( (  get_dash_ptr891 ) ( ( ( * (  screen3749 ) ) .f_current ) ,  (  i3755 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1940 (    struct Screen_279 *  screen3758 ) {
    struct RangeIter_154  temp1941 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3758 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_156  __cond1944 =  next157 (&temp1941);
        if (  __cond1944 .tag == 0 ) {
            break;
        }
        int32_t  y3760 =  __cond1944 .stuff .Maybe_156_Just_s .field0;
        struct RangeIter_154  temp1945 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3758 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_156  __cond1946 =  next157 (&temp1945);
            if (  __cond1946 .tag == 0 ) {
                break;
            }
            int32_t  x3762 =  __cond1946 .stuff .Maybe_156_Just_s .field0;
            struct Cell_281 *  cell3763 = ( (  or_dash_fail1947 ) ( ( (  get_dash_cell_dash_ptr1951 ) ( (  screen3758 ) ,  (  x3762 ) ,  (  y3760 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3763 ) .f_bg = ( ( * (  screen3758 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1953 {
    enum Unit_8  (*fun) (  struct env277*  ,    struct Screen_279 *  ,    struct Editor_251 *  );
    struct env277 env;
};

struct IntStrIter_1958 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1958   into_dash_iter1960 (    struct IntStrIter_1958  self1389 ) {
    return (  self1389 );
}

struct env1964 {
    int32_t  base1379;
    ;
};

struct envunion1965 {
    int32_t  (*fun) (  struct env1964*  ,    int32_t  ,    int32_t  );
    struct env1964 env;
};

static  int32_t   reduce1963 (    struct Range_151  iterable1111 ,    int32_t  base1113 ,   struct envunion1965  fun1115 ) {
    int32_t  x1116 = (  base1113 );
    struct RangeIter_154  it1117 = ( (  into_dash_iter155 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_156  dref1118 = ( (  next157 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_156_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_156_Just_t ) {
                struct envunion1965  temp1966 = (  fun1115 );
                x1116 = ( temp1966.fun ( &temp1966.env ,  ( dref1118 .stuff .Maybe_156_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1967 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1967);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp1968;
    return (  temp1968 );
}

static  int32_t   lam1969 (   struct env1964* env ,    int32_t  item1383 ,    int32_t  x1385 ) {
    return (  op_dash_mul1562 ( (  x1385 ) , ( env->base1379 ) ) );
}

static  int32_t   pow1962 (    int32_t  base1379 ,    int32_t  p1381 ) {
    struct env1964 envinst1964 = {
        .base1379 =  base1379 ,
    };
    return ( (  reduce1963 ) ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( (  p1381 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion1965){ .fun = (  int32_t  (*) (  struct env1964*  ,    int32_t  ,    int32_t  ) )lam1969 , .env =  envinst1964 } ) ) );
}

static  struct Maybe_300   next1961 (    struct IntStrIter_1958 *  self1392 ) {
    if ( ( ( * (  self1392 ) ) .f_negative ) ) {
        (*  self1392 ) .f_negative = ( false );
        return ( ( Maybe_300_Just ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp158 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    int32_t  trim_dash_down1393 = ( (  pow1962 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub165 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1394 = (  op_dash_div1561 ( ( ( * (  self1392 ) ) .f_int ) , (  trim_dash_down1393 ) ) );
    int32_t  upper_dash_mask1395 = (  op_dash_mul1562 ( (  op_dash_div1561 ( (  upper1394 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1396 = ( ( (  cast307 ) ( (  op_dash_sub165 ( (  upper1394 ) , (  upper_dash_mask1395 ) ) ) ) ) );
    (*  self1392 ) .f_len = (  op_dash_sub165 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1397 = ( (  char_dash_from_dash_u81081 ) ( (  op_dash_add971 ( (  digit1396 ) , (  from_dash_integral311 ( 48 ) ) ) ) ) );
    return ( ( Maybe_300_Just ) ( (  digit_dash_char1397 ) ) );
}

static  size_t   reduce1959 (    struct IntStrIter_1958  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct IntStrIter_1958  it1117 = ( (  into_dash_iter1960 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next1961 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1970 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1970);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp1971;
    return (  temp1971 );
}

static  size_t   lam1972 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add314 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1957 (    struct IntStrIter_1958  it1122 ) {
    return ( (  reduce1959 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1972 ) ) );
}

static  int32_t   count_dash_digits1975 (    int32_t  self1400 ) {
    if ( (  eq597 ( (  self1400 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1401 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp158 ( (  self1400 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1400 = (  op_dash_div1561 ( (  self1400 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1401 = (  op_dash_add160 ( (  digits1401 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1401 );
}

static  struct IntStrIter_1958   int_dash_iter1974 (    int32_t  int1404 ) {
    if ( (  cmp158 ( (  int1404 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1958) { .f_int = (  op_dash_neg843 ( (  int1404 ) ) ) , .f_len = ( (  count_dash_digits1975 ) ( (  op_dash_neg843 ( (  int1404 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1958) { .f_int = (  int1404 ) , .f_len = ( (  count_dash_digits1975 ) ( (  int1404 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1958   chars1973 (    int32_t  self1413 ) {
    return ( (  int_dash_iter1974 ) ( (  self1413 ) ) );
}

static  int32_t   screen_dash_width1977 (    struct ScreenDims_282  sd4345 ) {
    return (  op_dash_add160 ( (  op_dash_sub165 ( ( (  sd4345 ) .f_to_dash_sx ) , ( (  sd4345 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1978 (    struct ScreenDims_282  sd4348 ) {
    return (  op_dash_add160 ( (  op_dash_sub165 ( ( (  sd4348 ) .f_to_dash_sy ) , ( (  sd4348 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1976 (    struct Pane_223 *  pane4351 ,    struct ScreenDims_282  sd4353 ) {
    struct Pos_29  cur4354 = ( ( * (  pane4351 ) ) .f_cursor );
    int32_t  cur_dash_sx4355 = ( (  pos_dash_vi1133 ) ( ( ( * (  pane4351 ) ) .f_buf ) ,  (  cur4354 ) ) );
    struct ScreenCursorOffset_225  sc_dash_off4356 = ( ( * (  pane4351 ) ) .f_sc_dash_off );
    int32_t  sw4357 = (  op_dash_sub165 ( ( (  screen_dash_width1977 ) ( (  sd4353 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh4358 = (  op_dash_sub165 ( ( (  screen_dash_height1978 ) ( (  sd4353 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin4359 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4360 = ( (  pos_dash_vi1133 ) ( ( ( * (  pane4351 ) ) .f_buf ) ,  (  cur4354 ) ) );
    int32_t  csx4361 = (  op_dash_sub165 ( (  csi4360 ) , ( (  sc_dash_off4356 ) .f_screen_dash_left ) ) );
    int32_t  csy4362 = (  op_dash_sub165 ( ( (  cur4354 ) .f_line ) , ( (  sc_dash_off4356 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4363 = ( (  sc_dash_off4356 ) .f_screen_dash_left );
    if ( (  cmp158 ( (  csx4361 ) , (  margin4359 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4363 = (  op_dash_sub165 ( (  csi4360 ) , (  margin4359 ) ) );
    } else {
        if ( (  cmp158 ( (  csx4361 ) , (  op_dash_sub165 ( (  sw4357 ) , (  margin4359 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4363 = (  op_dash_sub165 ( (  csi4360 ) , (  op_dash_sub165 ( (  sw4357 ) , (  margin4359 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4364 = ( (  max1148 ) ( (  nu_dash_screen_dash_left4363 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4365 = ( (  sc_dash_off4356 ) .f_screen_dash_top );
    if ( (  cmp158 ( (  csy4362 ) , (  margin4359 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4365 = (  op_dash_sub165 ( ( (  cur4354 ) .f_line ) , (  margin4359 ) ) );
    } else {
        if ( (  cmp158 ( (  csy4362 ) , (  op_dash_sub165 ( (  sh4358 ) , (  margin4359 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4365 = (  op_dash_sub165 ( ( (  cur4354 ) .f_line ) , (  op_dash_sub165 ( (  sh4358 ) , (  margin4359 ) ) ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4366 = ( (  max1148 ) ( (  nu_dash_screen_dash_top4365 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane4351 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_225) { .f_screen_dash_top = (  nu_dash_screen_dash_top4366 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4364 ) } );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_colors1983 (    struct Screen_279 *  screen3738 ,    struct Color_139  fg3740 ,    struct Color_139  bg3742 ) {
    (*  screen3738 ) .f_default_dash_fg = (  fg3740 );
    (*  screen3738 ) .f_default_dash_bg = (  bg3742 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors1982 (    struct Screen_279 *  screen4369 ,    struct Colors_174  colors4371 ) {
    ( (  set_dash_screen_dash_colors1983 ) ( (  screen4369 ) ,  ( (  colors4371 ) .f_fg ) ,  ( (  colors4371 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   abs1984 (    int32_t  x1632 ) {
    return ( (  cmp158 ( (  x1632 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ? (  x1632 ) : (  op_dash_neg843 ( (  x1632 ) ) ) );
}

struct Map_1987 {
    struct IntStrIter_1958  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1987 Map_1987_Map (  struct IntStrIter_1958  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1987 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1987   into_dash_iter1989 (    struct Map_1987  self797 ) {
    return (  self797 );
}

static  struct Maybe_156   next1990 (    struct Map_1987 *  dref799 ) {
    struct Maybe_300  dref802 = ( (  next1961 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_300_None_t ) {
        return ( (struct Maybe_156) { .tag = Maybe_156_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_300_Just_t ) {
            return ( ( Maybe_156_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_300_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1988 (    struct Map_1987  iterable1111 ,    int32_t  base1113 ,    int32_t (*  fun1115 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1116 = (  base1113 );
    struct Map_1987  it1117 = ( (  into_dash_iter1989 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_156  dref1118 = ( (  next1990 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_156_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_156_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_156_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp1991 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1991);
    abort ( );
    ( Unit_8_Unit );
    int32_t  temp1992;
    return (  temp1992 );
}

static  int32_t   lam1993 (    int32_t  v1130 ,    int32_t  s1132 ) {
    return (  op_dash_add160 ( (  v1130 ) , (  s1132 ) ) );
}

static  int32_t   sum1986 (    struct Map_1987  it1128 ) {
    return ( (  reduce1988 ) ( (  it1128 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1993 ) ) );
}

static  struct Map_1987   map1994 (    struct IntStrIter_1958  iterable806 ,    int32_t (*  fun808 )(    struct Char_65  ) ) {
    struct IntStrIter_1958  it809 = ( (  into_dash_iter1960 ) ( (  iterable806 ) ) );
    return ( ( Map_1987_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  enum Unit_8   put_dash_char1998 (    struct Screen_279 *  screen3766 ,    struct Char_65  c3768 ,    int32_t  x3770 ,    int32_t  y3772 ) {
    int32_t  w3773 = ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3766 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp158 ( (  x3770 ) , (  w3773 ) ) != 0 ) || (  cmp158 ( (  y3772 ) , ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3766 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp158 ( (  x3770 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp158 ( (  y3772 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3774 = ( (  i32_dash_size423 ) ( (  op_dash_add160 ( (  op_dash_mul1562 ( (  y3772 ) , (  w3773 ) ) ) , (  x3770 ) ) ) ) );
    struct Color_139  fg3775 = ( ( * (  screen3766 ) ) .f_default_dash_fg );
    struct Color_139  bg3776 = ( ( * (  screen3766 ) ) .f_default_dash_bg );
    struct Char_65  c3777 = (  c3768 );
    int32_t  char_dash_width3778 = ( (  wcwidth1149 ) ( (  c3777 ) ) );
    if ( ( (  cmp158 ( (  x3770 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp158 ( ( (  elem_dash_get894 ( ( ( * (  screen3766 ) ) .f_current ) , (  op_dash_sub292 ( (  i3774 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_281  pc3779 = (  elem_dash_get894 ( ( ( * (  screen3766 ) ) .f_current ) , (  op_dash_sub292 ( (  i3774 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set890 ) ( ( ( * (  screen3766 ) ) .f_current ) ,  (  op_dash_sub292 ( (  i3774 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_281) { .f_c = ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3779 ) .f_fg ) , .f_bg = ( (  pc3779 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set890 ) ( ( ( * (  screen3766 ) ) .f_current ) ,  (  i3774 ) ,  ( (struct Cell_281) { .f_c = (  c3777 ) , .f_fg = (  fg3775 ) , .f_bg = (  bg3776 ) , .f_char_dash_width = (  char_dash_width3778 ) } ) ) );
    struct RangeIter_154  temp1999 =  into_dash_iter155 ( ( (  to164 ) ( (  op_dash_add160 ( (  x3770 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min697 ) ( (  op_dash_sub165 ( (  op_dash_add160 ( (  x3770 ) , (  char_dash_width3778 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3773 ) ) ) ) ) );
    while (true) {
        struct Maybe_156  __cond2000 =  next157 (&temp1999);
        if (  __cond2000 .tag == 0 ) {
            break;
        }
        int32_t  xx3781 =  __cond2000 .stuff .Maybe_156_Just_s .field0;
        size_t  i3782 = ( (  i32_dash_size423 ) ( (  op_dash_add160 ( (  op_dash_mul1562 ( (  y3772 ) , (  w3773 ) ) ) , (  xx3781 ) ) ) ) );
        ( (  set890 ) ( ( ( * (  screen3766 ) ) .f_current ) ,  (  i3782 ) ,  ( (struct Cell_281) { .f_c = ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) , .f_fg = (  fg3775 ) , .f_bg = (  bg3776 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1995 (    struct Screen_279 *  screen3785 ,    int32_t  s3787 ,    int32_t  x3789 ,    int32_t  y3791 ) {
    int32_t  w3792 = ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3785 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp158 ( (  y3791 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  y3791 ) , ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3785 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3793 = (  op_dash_add160 ( (  op_dash_mul1562 ( (  y3791 ) , (  w3792 ) ) ) , (  x3789 ) ) );
    int32_t  x3794 = ( (  min697 ) ( (  x3789 ) ,  (  w3792 ) ) );
    size_t  max_dash_len3795 = ( (  i32_dash_size423 ) ( (  op_dash_sub165 ( (  w3792 ) , (  x3794 ) ) ) ) );
    int32_t  xx3796 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_1958  temp1996 =  into_dash_iter1960 ( ( (  chars1973 ) ( (  s3787 ) ) ) );
    while (true) {
        struct Maybe_300  __cond1997 =  next1961 (&temp1996);
        if (  __cond1997 .tag == 0 ) {
            break;
        }
        struct Char_65  c3798 =  __cond1997 .stuff .Maybe_300_Just_s .field0;
        ( (  put_dash_char1998 ) ( (  screen3785 ) ,  (  c3798 ) ,  (  op_dash_add160 ( (  x3794 ) , (  xx3796 ) ) ) ,  (  y3791 ) ) );
        xx3796 = (  op_dash_add160 ( (  xx3796 ) , ( (  rendered_dash_wcwidth1147 ) ( (  c3798 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1985 (    struct Screen_279 *  screen3801 ,    int32_t  s3803 ,    int32_t  x3805 ,    int32_t  y3807 ) {
    int32_t  slen3808 = ( (  sum1986 ) ( ( (  map1994 ) ( ( (  chars1973 ) ( (  s3803 ) ) ) ,  (  rendered_dash_wcwidth1147 ) ) ) ) );
    int32_t  w3809 = ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3801 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3810 = (  op_dash_sub165 ( (  op_dash_sub165 ( (  w3809 ) , (  x3805 ) ) ) , (  slen3808 ) ) );
    ( (  draw_dash_str1995 ) ( (  screen3801 ) ,  (  s3803 ) ,  (  x3810 ) ,  (  y3807 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2002 {
    struct StrView_30  field0;
    int32_t  field1;
};

static struct StrConcat_2002 StrConcat_2002_StrConcat (  struct StrView_30  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_2002 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2005 {
    struct StrView_30  field0;
    struct StrConcat_2002  field1;
};

static struct StrConcat_2005 StrConcat_2005_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_2002  field1 ) {
    return ( struct StrConcat_2005 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2004 {
    struct StrConcat_2005  field0;
    struct Char_65  field1;
};

static struct StrConcat_2004 StrConcat_2004_StrConcat (  struct StrConcat_2005  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2004 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2007 (    struct StrConcat_2002  self1295 ) {
    struct StrConcat_2002  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str401 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2006 (    struct StrConcat_2005  self1295 ) {
    struct StrConcat_2005  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str2007 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2003 (    struct StrConcat_2004  self1295 ) {
    struct StrConcat_2004  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str2006 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert2001 (    bool  cond1339 ,    struct StrConcat_2002  msg1341 ) {
    if ( ( ! (  cond1339 ) ) ) {
        ( (  print_dash_str2003 ) ( ( ( StrConcat_2004_StrConcat ) ( ( ( StrConcat_2005_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1341 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_2009 {
    struct StrViewIter_470  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_2009   into_dash_iter2010 (    struct AppendIter_2009  self1037 ) {
    return (  self1037 );
}

static  struct AppendIter_2009   append2011 (    struct StrViewIter_470  it1024 ,    struct Char_65  e1026 ) {
    return ( (struct AppendIter_2009) { .f_it = ( (  into_dash_iter471 ) ( (  it1024 ) ) ) , .f_elem = (  e1026 ) , .f_appended = ( false ) } );
}

static  struct Maybe_300   next2013 (    struct AppendIter_2009 *  self1040 ) {
    struct Maybe_300  dref1041 = ( (  next475 ) ( ( & ( ( * (  self1040 ) ) .f_it ) ) ) );
    if ( dref1041.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1041 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1041.tag == Maybe_300_None_t ) {
            if ( ( ! ( ( * (  self1040 ) ) .f_appended ) ) ) {
                (*  self1040 ) .f_appended = ( true );
                return ( ( Maybe_300_Just ) ( ( ( * (  self1040 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   between2015 (    struct Pos_29  c1370 ,    struct Pos_29  l1372 ,    struct Pos_29  r1374 ) {
    struct Pos_29  from1375 = ( (  min593 ) ( (  l1372 ) ,  (  r1374 ) ) );
    struct Pos_29  to1376 = ( (  max595 ) ( (  l1372 ) ,  (  r1374 ) ) );
    return ( (  cmp594 ( (  from1375 ) , (  c1370 ) ) != 2 ) && (  cmp594 ( (  c1370 ) , (  to1376 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection2014 (    struct Pane_223 *  pane4337 ,    struct Pos_29  pos4339 ) {
    return ( {  struct Maybe_32  dref4340 = ( ( * (  pane4337 ) ) .f_sel ) ; dref4340.tag == Maybe_32_Just_t ? ( (  between2015 ) ( (  pos4339 ) ,  ( ( * (  pane4337 ) ) .f_cursor ) ,  ( dref4340 .stuff .Maybe_32_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env2017 {
    struct Theme_173 *  theme4381;
    ;
    struct Screen_279 *  screen4374;
    ;
};

struct envunion2018 {
    enum Unit_8  (*fun) (  struct env2017*  ,    enum HighlightType_18  );
    struct env2017 env;
};

static  enum Unit_8   if_dash_just2016 (    struct Maybe_206  x1594 ,   struct envunion2018  fun1596 ) {
    struct Maybe_206  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_206_Just_t ) {
        struct envunion2018  temp2019 = (  fun1596 );
        ( temp2019.fun ( &temp2019.env ,  ( dref1597 .stuff .Maybe_206_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_206_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim2024 (    struct List_15 *  l2523 ,    size_t  new_dash_count2525 ) {
    (*  l2523 ) .f_count = ( (  min480 ) ( (  new_dash_count2525 ) ,  ( ( * (  l2523 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_300   head2027 (    struct Scanner_993 *  it1160 ) {
    struct Scanner_993  temp2028 = ( (  into_dash_iter1009 ) ( (  it1160 ) ) );
    return ( (  next1018 ) ( ( &temp2028 ) ) );
}

static  bool   null2026 (    struct Scanner_993 *  it1169 ) {
    struct Maybe_300  dref1170 = ( (  head2027 ) ( (  it1169 ) ) );
    if ( dref1170.tag == Maybe_300_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_300   peek2029 (    struct Scanner_993 *  sc3412 ) {
    return ( (  head1374 ) ( ( ( * (  sc3412 ) ) .f_s ) ) );
}

static  bool   eq2031 (    struct Maybe_300  l150 ,    struct Maybe_300  r152 ) {
    struct Tuple2_1806  dref153 = ( ( Tuple2_1806_Tuple2 ) ( (  l150 ) ,  (  r152 ) ) );
    if ( dref153 .field0.tag == Maybe_300_None_t && dref153 .field1.tag == Maybe_300_None_t ) {
        return ( true );
    }
    else {
        if ( dref153 .field0.tag == Maybe_300_Just_t && dref153 .field1.tag == Maybe_300_Just_t ) {
            return (  eq482 ( ( dref153 .field0 .stuff .Maybe_300_Just_s .field0 ) , ( dref153 .field1 .stuff .Maybe_300_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char2030 (    struct Scanner_993 *  sc3415 ,    struct Char_65  char3417 ) {
    if ( (  eq2031 ( ( (  peek2029 ) ( (  sc3415 ) ) ) , ( ( Maybe_300_Just ) ( (  char3417 ) ) ) ) ) ) {
        ( (  drop_prime_1021 ) ( (  sc3415 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   is_dash_just2034 (    struct Maybe_300  m1563 ) {
    struct Maybe_300  dref1564 = (  m1563 );
    if ( dref1564.tag == Maybe_300_None_t ) {
        return ( false );
    }
    else {
        if ( dref1564.tag == Maybe_300_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_300   char_dash_satisfies_prime_2035 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2033 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2035 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2032 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2033 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2036 (    struct Char_65  c4152 ) {
    return ( !  eq482 ( (  c4152 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ) );
}

struct envunion2038 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct TypeSize_2044 {
    size_t  f_size;
};

static  struct TypeSize_2044   get_dash_typesize2043 (  ) {
    struct Highlight_17  temp2045;
    return ( (struct TypeSize_2044) { .f_size = ( sizeof( ( (  temp2045 ) ) ) ) } );
}

static  struct Highlight_17 *   cast_dash_ptr2046 (    void *  p398 ) {
    return ( (struct Highlight_17 * ) (  p398 ) );
}

static  struct Slice_16   allocate2042 (    enum CAllocator_10  dref2360 ,    size_t  count2362 ) {
    if (!(  dref2360 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2363 = ( ( ( (  get_dash_typesize2043 ) ( ) ) ) .f_size );
    struct Highlight_17 *  ptr2364 = ( (  cast_dash_ptr2046 ) ( ( ( malloc ) ( (  op_dash_mul416 ( (  size2363 ) , (  count2362 ) ) ) ) ) ) );
    return ( (struct Slice_16) { .f_ptr = (  ptr2364 ) , .f_count = (  count2362 ) } );
}

struct env2047 {
    ;
    ;
    struct Slice_16  new_dash_slice2446;
};

struct Tuple2_2049 {
    struct Highlight_17  field0;
    int32_t  field1;
};

static struct Tuple2_2049 Tuple2_2049_Tuple2 (  struct Highlight_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2049 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2048 {
    enum Unit_8  (*fun) (  struct env2047*  ,    struct Tuple2_2049  );
    struct env2047 env;
};

static  struct Highlight_17 *   offset_dash_ptr2053 (    struct Highlight_17 *  x377 ,    int64_t  count379 ) {
    struct Highlight_17  temp2054;
    return ( (struct Highlight_17 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2054 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_17 *   get_dash_ptr2052 (    struct Slice_16  slice2163 ,    size_t  i2165 ) {
    if ( ( (  cmp293 ( (  i2165 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2165 ) , ( (  slice2163 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic326 ) ( ( ( StrConcat_324_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2165 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2163 ) .f_count ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_17 *  elem_dash_ptr2166 = ( (  offset_dash_ptr2053 ) ( ( (  slice2163 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  i2165 ) ) ) ) );
    return (  elem_dash_ptr2166 );
}

static  enum Unit_8   set2051 (    struct Slice_16  slice2180 ,    size_t  i2182 ,    struct Highlight_17  x2184 ) {
    struct Highlight_17 *  ep2185 = ( (  get_dash_ptr2052 ) ( (  slice2180 ) ,  (  i2182 ) ) );
    (*  ep2185 ) = (  x2184 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2050 (   struct env2047* env ,    struct Tuple2_2049  dref2447 ) {
    return ( (  set2051 ) ( ( env->new_dash_slice2446 ) ,  ( (  i32_dash_size423 ) ( ( dref2447 .field1 ) ) ) ,  ( dref2447 .field0 ) ) );
}

struct SliceIter_2057 {
    struct Slice_16  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2056 {
    struct SliceIter_2057  f_left_dash_it;
    struct FromIter_427  f_right_dash_it;
};

static  struct Zip_2056   into_dash_iter2059 (    struct Zip_2056  self929 ) {
    return (  self929 );
}

struct Maybe_2060 {
    enum {
        Maybe_2060_None_t,
        Maybe_2060_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2049  field0;
        } Maybe_2060_Just_s;
    } stuff;
};

static struct Maybe_2060 Maybe_2060_Just (  struct Tuple2_2049  field0 ) {
    return ( struct Maybe_2060 ) { .tag = Maybe_2060_Just_t, .stuff = { .Maybe_2060_Just_s = { .field0 = field0 } } };
};

struct Maybe_2062 {
    enum {
        Maybe_2062_None_t,
        Maybe_2062_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_17  field0;
        } Maybe_2062_Just_s;
    } stuff;
};

static struct Maybe_2062 Maybe_2062_Just (  struct Highlight_17  field0 ) {
    return ( struct Maybe_2062 ) { .tag = Maybe_2062_Just_t, .stuff = { .Maybe_2062_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2062   next2063 (    struct SliceIter_2057 *  self2249 ) {
    size_t  off2250 = ( ( * (  self2249 ) ) .f_current_dash_offset );
    if ( (  cmp293 ( (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2249 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2062) { .tag = Maybe_2062_None_t } );
    }
    struct Highlight_17  elem2251 = ( * ( (  offset_dash_ptr2053 ) ( ( ( ( * (  self2249 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  off2250 ) ) ) ) ) );
    (*  self2249 ) .f_current_dash_offset = (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2062_Just ) ( (  elem2251 ) ) );
}

static  struct Maybe_2060   next2061 (    struct Zip_2056 *  self932 ) {
    struct Zip_2056  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_2062  dref934 = ( (  next2063 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_2062_None_t ) {
            return ( (struct Maybe_2060) { .tag = Maybe_2060_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_2062_Just_t ) {
                struct Maybe_156  dref936 = ( (  next433 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_156_None_t ) {
                    return ( (struct Maybe_2060) { .tag = Maybe_2060_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_156_Just_t ) {
                        ( (  next2063 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next433 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2060_Just ) ( ( ( Tuple2_2049_Tuple2 ) ( ( dref934 .stuff .Maybe_2062_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_156_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2055 (    struct Zip_2056  iterable1092 ,   struct envunion2048  fun1094 ) {
    struct Zip_2056  temp2058 = ( (  into_dash_iter2059 ) ( (  iterable1092 ) ) );
    struct Zip_2056 *  it1095 = ( &temp2058 );
    while ( ( true ) ) {
        struct Maybe_2060  dref1096 = ( (  next2061 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_2060_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_2060_Just_t ) {
                struct envunion2048  temp2064 = (  fun1094 );
                ( temp2064.fun ( &temp2064.env ,  ( dref1096 .stuff .Maybe_2060_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2057   into_dash_iter2066 (    struct Slice_16  self2243 ) {
    return ( (struct SliceIter_2057) { .f_slice = (  self2243 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2056   zip2065 (    struct Slice_16  left940 ,    struct FromIter_427  right942 ) {
    struct SliceIter_2057  left_dash_it943 = ( (  into_dash_iter2066 ) ( (  left940 ) ) );
    struct FromIter_427  right_dash_it944 = ( (  into_dash_iter437 ) ( (  right942 ) ) );
    return ( (struct Zip_2056) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  void *   cast_dash_ptr2068 (    struct Highlight_17 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free2067 (    enum CAllocator_10  dref2366 ,    struct Slice_16  slice2368 ) {
    if (!(  dref2366 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2068 ) ( ( (  slice2368 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full2041 (   struct env5* env ,    struct List_15 *  list2445 ) {
    if ( (  eq358 ( ( ( * (  list2445 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2445 ) .f_elements = ( (  allocate2042 ) ( ( ( * (  list2445 ) ) .f_al ) ,  ( env->starting_dash_size2440 ) ) );
    } else {
        if ( (  eq358 ( ( ( * (  list2445 ) ) .f_count ) , ( ( ( * (  list2445 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_16  new_dash_slice2446 = ( (  allocate2042 ) ( ( ( * (  list2445 ) ) .f_al ) ,  (  op_dash_mul416 ( ( ( * (  list2445 ) ) .f_count ) , ( env->growth_dash_factor2441 ) ) ) ) );
            struct env2047 envinst2047 = {
                .new_dash_slice2446 =  new_dash_slice2446 ,
            };
            struct envunion2048  fun2450 = ( (struct envunion2048){ .fun = (  enum Unit_8  (*) (  struct env2047*  ,    struct Tuple2_2049  ) )lam2050 , .env =  envinst2047 } );
            ( (  for_dash_each2055 ) ( ( (  zip2065 ) ( ( ( * (  list2445 ) ) .f_elements ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2450 ) ) );
            ( (  free2067 ) ( ( ( * (  list2445 ) ) .f_al ) ,  ( ( * (  list2445 ) ) .f_elements ) ) );
            (*  list2445 ) .f_elements = (  new_dash_slice2446 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add2039 (   struct env35* env ,    struct List_15 *  list2453 ,    struct Highlight_17  elem2455 ) {
    struct envunion36  temp2040 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_15 *  ) )grow_dash_if_dash_full2041 , .env =  env->envinst5 } );
    ( temp2040.fun ( &temp2040.env ,  (  list2453 ) ) );
    ( (  set2051 ) ( ( ( * (  list2453 ) ) .f_elements ) ,  ( ( * (  list2453 ) ) .f_count ) ,  (  elem2455 ) ) );
    (*  list2453 ) .f_count = (  op_dash_add314 ( ( ( * (  list2453 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2070 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2073 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2072 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2073 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2071 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2072 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2074 (    struct Char_65  c4155 ) {
    return ( ( !  eq482 ( (  c4155 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) && ( !  eq482 ( (  c4155 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2076 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2078 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2077 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2078 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  struct Maybe_300   char_dash_satisfies_prime_2081 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2080 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2081 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2079 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2080 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2082 (    struct Char_65  c4158 ) {
    return ( (  eq1365 ( ( (  char_dash_type1368 ) ( (  c4158 ) ) ) , ( CharType_1366_CharWord ) ) ) || (  eq482 ( (  c4158 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2084 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct env2086 {
    ;
    struct Scanner_993 *  sc4148;
};

struct envunion2087 {
    bool  (*fun) (  struct env2086*  ,    struct StrView_30  );
    struct env2086 env;
};

struct env2089 {
    struct envunion2087  fun1153;
};

struct envunion2090 {
    bool  (*fun) (  struct env2089*  ,    struct StrView_30  ,    bool  );
    struct env2089 env;
};

static  bool   reduce2088 (    struct Array_499  iterable1111 ,    bool  base1113 ,   struct envunion2090  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct ArrayIter_506  it1117 = ( (  into_dash_iter507 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1118 = ( (  next508 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_85_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_85_Just_t ) {
                struct envunion2090  temp2091 = (  fun1115 );
                x1116 = ( temp2091.fun ( &temp2091.env ,  ( dref1118 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2092 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2092);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2093;
    return (  temp2093 );
}

static  bool   lam2094 (   struct env2089* env ,    struct StrView_30  e1155 ,    bool  x1157 ) {
    struct envunion2087  temp2095 = ( env->fun1153 );
    return ( ( temp2095.fun ( &temp2095.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2085 (    struct Array_499  it1151 ,   struct envunion2087  fun1153 ) {
    struct env2089 envinst2089 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2088 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2090){ .fun = (  bool  (*) (  struct env2089*  ,    struct StrView_30  ,    bool  ) )lam2094 , .env =  envinst2089 } ) ) );
}

static  struct StrViewIter_470   own2101 (    struct StrViewIter_470  x1554 ) {
    return (  x1554 );
}

static  bool   matches_dash_str2098 (    struct Scanner_993 *  sc3432 ,    struct StrView_30  s3434 ) {
    size_t  skip3435 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_470  temp2099 = ( (  chars472 ) ( (  s3434 ) ) );
    struct StrViewIter_470 *  ss3436 = ( &temp2099 );
    struct StrViewIter_470  temp2100 = ( (  own2101 ) ( ( ( * (  sc3432 ) ) .f_s ) ) );
    struct StrViewIter_470 *  sccp3437 = ( &temp2100 );
    while ( ( true ) ) {
        struct Tuple2_1806  dref3438 = ( ( Tuple2_1806_Tuple2 ) ( ( (  next475 ) ( (  sccp3437 ) ) ) ,  ( (  next475 ) ( (  ss3436 ) ) ) ) );
        if ( dref3438 .field1.tag == Maybe_300_None_t ) {
            ( (  drop_prime_1021 ) ( (  sc3432 ) ,  (  skip3435 ) ) );
            return ( true );
        }
        else {
            if ( dref3438 .field0.tag == Maybe_300_Just_t && dref3438 .field1.tag == Maybe_300_Just_t ) {
                if ( ( !  eq482 ( ( dref3438 .field0 .stuff .Maybe_300_Just_s .field0 ) , ( dref3438 .field1 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3435 = (  op_dash_add314 ( (  skip3435 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2097 (   struct env2086* env ,    struct StrView_30  sym4161 ) {
    return ( (  matches_dash_str2098 ) ( ( env->sc4148 ) ,  (  sym4161 ) ) );
}

struct envunion2103 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_2105 {
    struct StrView_30 _arr [12];
};

struct env2106 {
    ;
    struct Scanner_993 *  sc4148;
};

struct envunion2107 {
    bool  (*fun) (  struct env2106*  ,    struct StrView_30  );
    struct env2106 env;
};

struct env2109 {
    struct envunion2107  fun1153;
};

struct envunion2110 {
    bool  (*fun) (  struct env2109*  ,    struct StrView_30  ,    bool  );
    struct env2109 env;
};

struct ArrayIter_2111 {
    struct Array_2105  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2111   into_dash_iter2112 (    struct Array_2105  self2095 ) {
    return ( (struct ArrayIter_2111) { .f_backing = (  self2095 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_30 *   cast_dash_ptr2116 (    struct Array_2105 *  p398 ) {
    return ( (struct StrView_30 * ) (  p398 ) );
}

static  struct StrView_30 *   get_dash_ptr2115 (    struct Array_2105 *  arr2019 ,    size_t  i2022 ) {
    if ( ( (  cmp293 ( (  i2022 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2022 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2022 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_30 *  p2023 = ( ( (  cast_dash_ptr2116 ) ( (  arr2019 ) ) ) );
    return ( (  offset_dash_ptr512 ) ( (  p2023 ) ,  ( (int64_t ) (  i2022 ) ) ) );
}

static  struct StrView_30   get2114 (    struct Array_2105 *  arr2026 ,    size_t  i2029 ) {
    return ( * ( (  get_dash_ptr2115 ) ( (  arr2026 ) ,  (  i2029 ) ) ) );
}

static  struct Maybe_85   next2113 (    struct ArrayIter_2111 *  self2102 ) {
    if ( (  cmp293 ( ( ( * (  self2102 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_30  e2104 = ( (  get2114 ) ( ( & ( ( * (  self2102 ) ) .f_backing ) ) ,  ( ( * (  self2102 ) ) .f_cur ) ) );
    (*  self2102 ) .f_cur = (  op_dash_add314 ( ( ( * (  self2102 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2104 ) ) );
}

static  bool   reduce2108 (    struct Array_2105  iterable1111 ,    bool  base1113 ,   struct envunion2110  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct ArrayIter_2111  it1117 = ( (  into_dash_iter2112 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1118 = ( (  next2113 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_85_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_85_Just_t ) {
                struct envunion2110  temp2117 = (  fun1115 );
                x1116 = ( temp2117.fun ( &temp2117.env ,  ( dref1118 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2118 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2118);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2119;
    return (  temp2119 );
}

static  bool   lam2120 (   struct env2109* env ,    struct StrView_30  e1155 ,    bool  x1157 ) {
    struct envunion2107  temp2121 = ( env->fun1153 );
    return ( ( temp2121.fun ( &temp2121.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2104 (    struct Array_2105  it1151 ,   struct envunion2107  fun1153 ) {
    struct env2109 envinst2109 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2108 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2110){ .fun = (  bool  (*) (  struct env2109*  ,    struct StrView_30  ,    bool  ) )lam2120 , .env =  envinst2109 } ) ) );
}

static  struct Array_2105   from_dash_listlike2122 (    struct Array_2105 *  self369 ) {
    return ( * (  self369 ) );
}

static  bool   lam2124 (   struct env2106* env ,    struct StrView_30  sym4165 ) {
    return ( (  matches_dash_str2098 ) ( ( env->sc4148 ) ,  (  sym4165 ) ) );
}

struct envunion2126 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2129 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2128 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2129 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2127 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2128 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2130 (    struct Char_65  c4169 ) {
    return ( (  eq1365 ( ( (  char_dash_type1368 ) ( (  c4169 ) ) ) , ( CharType_1366_CharWord ) ) ) || (  eq482 ( (  c4169 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2131 (    struct Maybe_300  x1585 ,    bool (*  fun1587 )(    struct Char_65  ) ,    bool  default1589 ) {
    return ( {  struct Maybe_300  dref1590 = (  x1585 ) ; dref1590.tag == Maybe_300_Just_t ? ( (  fun1587 ) ( ( dref1590 .stuff .Maybe_300_Just_s .field0 ) ) ) : (  default1589 ) ; } );
}

static  bool   is_dash_upper2132 (    struct Char_65  c1514 ) {
    return ( (  eq358 ( ( (  c1514 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1012 ) ( (  c1514 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2133 {
    struct StrView_30 _arr [7];
};

static  struct Array_2133   from_dash_listlike2134 (    struct Array_2133 *  self369 ) {
    return ( * (  self369 ) );
}

struct Array_2136 {
    struct StrView_30 _arr [15];
};

static  struct Array_2136   from_dash_listlike2137 (    struct Array_2136 *  self369 ) {
    return ( * (  self369 ) );
}

struct env2140 {
    struct StrView_30  ident4173;
    ;
};

struct envunion2141 {
    bool  (*fun) (  struct env2140*  ,    struct StrView_30  );
    struct env2140 env;
};

struct env2143 {
    struct envunion2141  fun1153;
};

struct envunion2144 {
    bool  (*fun) (  struct env2143*  ,    struct StrView_30  ,    bool  );
    struct env2143 env;
};

struct ArrayIter_2145 {
    struct Array_2133  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2145   into_dash_iter2146 (    struct Array_2133  self2095 ) {
    return ( (struct ArrayIter_2145) { .f_backing = (  self2095 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_30 *   cast_dash_ptr2150 (    struct Array_2133 *  p398 ) {
    return ( (struct StrView_30 * ) (  p398 ) );
}

static  struct StrView_30 *   get_dash_ptr2149 (    struct Array_2133 *  arr2019 ,    size_t  i2022 ) {
    if ( ( (  cmp293 ( (  i2022 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2022 ) , ( (size_t ) ( 7 ) ) ) != 0 ) ) ) {
        ( (  panic392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2022 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 7 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_30 *  p2023 = ( ( (  cast_dash_ptr2150 ) ( (  arr2019 ) ) ) );
    return ( (  offset_dash_ptr512 ) ( (  p2023 ) ,  ( (int64_t ) (  i2022 ) ) ) );
}

static  struct StrView_30   get2148 (    struct Array_2133 *  arr2026 ,    size_t  i2029 ) {
    return ( * ( (  get_dash_ptr2149 ) ( (  arr2026 ) ,  (  i2029 ) ) ) );
}

static  struct Maybe_85   next2147 (    struct ArrayIter_2145 *  self2102 ) {
    if ( (  cmp293 ( ( ( * (  self2102 ) ) .f_cur ) , ( (size_t ) ( 7 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_30  e2104 = ( (  get2148 ) ( ( & ( ( * (  self2102 ) ) .f_backing ) ) ,  ( ( * (  self2102 ) ) .f_cur ) ) );
    (*  self2102 ) .f_cur = (  op_dash_add314 ( ( ( * (  self2102 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2104 ) ) );
}

static  bool   reduce2142 (    struct Array_2133  iterable1111 ,    bool  base1113 ,   struct envunion2144  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct ArrayIter_2145  it1117 = ( (  into_dash_iter2146 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1118 = ( (  next2147 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_85_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_85_Just_t ) {
                struct envunion2144  temp2151 = (  fun1115 );
                x1116 = ( temp2151.fun ( &temp2151.env ,  ( dref1118 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2152 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2152);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2153;
    return (  temp2153 );
}

static  bool   lam2154 (   struct env2143* env ,    struct StrView_30  e1155 ,    bool  x1157 ) {
    struct envunion2141  temp2155 = ( env->fun1153 );
    return ( ( temp2155.fun ( &temp2155.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2139 (    struct Array_2133  it1151 ,   struct envunion2141  fun1153 ) {
    struct env2143 envinst2143 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2142 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2144){ .fun = (  bool  (*) (  struct env2143*  ,    struct StrView_30  ,    bool  ) )lam2154 , .env =  envinst2143 } ) ) );
}

static  bool   lam2156 (   struct env2140* env ,    struct StrView_30  kw4177 ) {
    return (  eq520 ( (  kw4177 ) , ( env->ident4173 ) ) );
}

struct env2158 {
    struct StrView_30  ident4173;
    ;
};

struct envunion2159 {
    bool  (*fun) (  struct env2158*  ,    struct StrView_30  );
    struct env2158 env;
};

struct env2161 {
    struct envunion2159  fun1153;
};

struct envunion2162 {
    bool  (*fun) (  struct env2161*  ,    struct StrView_30  ,    bool  );
    struct env2161 env;
};

struct ArrayIter_2163 {
    struct Array_2136  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2163   into_dash_iter2164 (    struct Array_2136  self2095 ) {
    return ( (struct ArrayIter_2163) { .f_backing = (  self2095 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_30 *   cast_dash_ptr2168 (    struct Array_2136 *  p398 ) {
    return ( (struct StrView_30 * ) (  p398 ) );
}

static  struct StrView_30 *   get_dash_ptr2167 (    struct Array_2136 *  arr2019 ,    size_t  i2022 ) {
    if ( ( (  cmp293 ( (  i2022 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp293 ( (  i2022 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2022 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_30 *  p2023 = ( ( (  cast_dash_ptr2168 ) ( (  arr2019 ) ) ) );
    return ( (  offset_dash_ptr512 ) ( (  p2023 ) ,  ( (int64_t ) (  i2022 ) ) ) );
}

static  struct StrView_30   get2166 (    struct Array_2136 *  arr2026 ,    size_t  i2029 ) {
    return ( * ( (  get_dash_ptr2167 ) ( (  arr2026 ) ,  (  i2029 ) ) ) );
}

static  struct Maybe_85   next2165 (    struct ArrayIter_2163 *  self2102 ) {
    if ( (  cmp293 ( ( ( * (  self2102 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    }
    struct StrView_30  e2104 = ( (  get2166 ) ( ( & ( ( * (  self2102 ) ) .f_backing ) ) ,  ( ( * (  self2102 ) ) .f_cur ) ) );
    (*  self2102 ) .f_cur = (  op_dash_add314 ( ( ( * (  self2102 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_85_Just ) ( (  e2104 ) ) );
}

static  bool   reduce2160 (    struct Array_2136  iterable1111 ,    bool  base1113 ,   struct envunion2162  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct ArrayIter_2163  it1117 = ( (  into_dash_iter2164 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_85  dref1118 = ( (  next2165 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_85_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_85_Just_t ) {
                struct envunion2162  temp2169 = (  fun1115 );
                x1116 = ( temp2169.fun ( &temp2169.env ,  ( dref1118 .stuff .Maybe_85_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2170 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2170);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2171;
    return (  temp2171 );
}

static  bool   lam2172 (   struct env2161* env ,    struct StrView_30  e1155 ,    bool  x1157 ) {
    struct envunion2159  temp2173 = ( env->fun1153 );
    return ( ( temp2173.fun ( &temp2173.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2157 (    struct Array_2136  it1151 ,   struct envunion2159  fun1153 ) {
    struct env2161 envinst2161 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2160 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2162){ .fun = (  bool  (*) (  struct env2161*  ,    struct StrView_30  ,    bool  ) )lam2172 , .env =  envinst2161 } ) ) );
}

static  bool   lam2174 (   struct env2158* env ,    struct StrView_30  kw4179 ) {
    return (  eq520 ( (  kw4179 ) , ( env->ident4173 ) ) );
}

struct envunion2176 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_1005   int2177 (    struct Scanner_993 *  sc3406 ) {
    return ( (  scan_dash_int1006 ) ( (  sc3406 ) ) );
}

static  struct Maybe_300   char_dash_satisfies_prime_2180 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2179 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2180 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2178 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2179 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2181 (    struct Char_65  c1502 ) {
    return ( (  eq358 ( ( (  c1502 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1011 ) ( (  c1502 ) ) ) || ( (  between1012 ) ( (  c1502 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1012 ) ( (  c1502 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2183 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2184 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2077 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2186 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2189 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2188 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2189 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2187 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2188 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2190 (    struct Char_65  c1508 ) {
    return ( (  eq358 ( ( (  c1508 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1012 ) ( (  c1508 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2192 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2195 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2194 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2195 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2193 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2194 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2197 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2200 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2199 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2200 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2198 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2199 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2201 (    struct Char_65  c1505 ) {
    return ( (  eq358 ( ( (  c1505 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq482 ( (  c1505 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) || (  eq482 ( (  c1505 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2203 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2206 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2208 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2211 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2214 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2213 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2214 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2212 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2213 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2216 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2218 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2220 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2223 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2222 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2223 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  struct Maybe_300   char_dash_satisfies_prime_2226 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2225 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2226 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2224 (    struct Scanner_993 *  sc3443 ,    bool (*  condition3445 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2225 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   gcode_dash_keyword_dash_char2227 (    struct Char_65  c4139 ) {
    return ( ( (  is_dash_not_dash_whitespace1710 ) ( (  c4139 ) ) ) && ( !  eq482 ( (  c4139 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) );
}

static  uint8_t   char_dash_case_dash_diff2229 (  ) {
    return (  op_dash_sub970 ( ( (  char_dash_u8572 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) , ( (  char_dash_u8572 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Char_65   to_dash_lower2228 (    struct Char_65  c1521 ) {
    if ( ( (  is_dash_upper2132 ) ( (  c1521 ) ) ) ) {
        ( (  assert706 ) ( (  eq358 ( ( (  c1521 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"(to-lower) utf8 not yet supported." ) ,  ( 34 ) ) ) ) );
        return ( (  from_dash_u81831 ) ( (  op_dash_add971 ( ( (  char_dash_u8572 ) ( (  c1521 ) ) ) , ( (  char_dash_case_dash_diff2229 ) ( ) ) ) ) ) );
    }
    return (  c1521 );
}

struct StrConcat_2235 {
    struct StrView_30  field0;
    struct StrConcat_674  field1;
};

static struct StrConcat_2235 StrConcat_2235_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_674  field1 ) {
    return ( struct StrConcat_2235 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2234 {
    struct StrConcat_2235  field0;
    struct Char_65  field1;
};

static struct StrConcat_2234 StrConcat_2234_StrConcat (  struct StrConcat_2235  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2234 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str2236 (    struct StrConcat_2235  self1295 ) {
    struct StrConcat_2235  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str331 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str681 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str2233 (    struct StrConcat_2234  self1295 ) {
    struct StrConcat_2234  dref1296 = (  self1295 );
    if ( true ) {
        ( (  print_dash_str2236 ) ( ( dref1296 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1296 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic2232 (    struct StrConcat_674  errmsg1336 ) {
    ( (  print_dash_str2233 ) ( ( ( StrConcat_2234_StrConcat ) ( ( ( StrConcat_2235_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1336 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Char_65   undefined2237 (  ) {
    struct Char_65  temp2238;
    return (  temp2238 );
}

static  struct Char_65   or_dash_fail2231 (    struct Maybe_300  x1346 ,    struct StrConcat_674  errmsg1348 ) {
    struct Maybe_300  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_300_None_t ) {
        ( (  panic2232 ) ( (  errmsg1348 ) ) );
        return ( (  undefined2237 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_300_Just_t ) {
            return ( dref1349 .stuff .Maybe_300_Just_s .field0 );
        }
    }
}

static  struct Char_65   char_dash_at_dash_offset2230 (    struct StrView_30  self2620 ,    size_t  i2622 ) {
    return ( (  or_dash_fail2231 ) ( ( (  head1374 ) ( ( (  chars472 ) ( ( (struct StrView_30) { .f_contents = ( (  from478 ) ( ( (  self2620 ) .f_contents ) ,  (  i2622 ) ) ) } ) ) ) ) ) ,  ( ( StrConcat_674_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"(StrView.char-at-offset) off too great for this StrView (" ) ,  ( 57 ) ) ) ,  (  i2622 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2240 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2242 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2244 (    struct Scanner_993 *  sc3420 ,    bool (*  condition3422 )(    struct Char_65  ) ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        if ( ( (  condition3422 ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2243 (    struct Scanner_993 *  sc3427 ,    bool (*  condition3429 )(    struct Char_65  ) ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2244 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  bool   lam2245 (    struct Char_65  c4204 ) {
    return ( !  eq482 ( (  c4204 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) );
}

struct envunion2247 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Tuple2_2250 {
    struct Char_65  field0;
    enum HighlightType_18  field1;
};

static struct Tuple2_2250 Tuple2_2250_Tuple2 (  struct Char_65  field0 ,  enum HighlightType_18  field1 ) {
    return ( struct Tuple2_2250 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_2249 {
    struct Tuple2_2250 *  f_ptr;
    size_t  f_count;
};

struct Array_2252 {
    struct Tuple2_2250 _arr [8];
};

static  struct Tuple2_2250 *   cast_dash_ptr2253 (    struct Array_2252 *  p398 ) {
    return ( (struct Tuple2_2250 * ) (  p398 ) );
}

static  struct Slice_2249   from_dash_listlike2251 (    struct Array_2252 *  arr2193 ) {
    return ( (struct Slice_2249) { .f_ptr = ( (  cast_dash_ptr2253 ) ( (  arr2193 ) ) ) , .f_count = ( (  i32_dash_size423 ) ( ( 8 ) ) ) } );
}

struct env2255 {
    struct Slice_2249  bf_dash_chars4207;
    ;
    ;
    ;
    ;
};

struct envunion2256 {
    bool  (*fun) (  struct env2255*  ,    struct Char_65  );
    struct env2255 env;
};

struct SliceIter_2260 {
    struct Slice_2249  f_slice;
    size_t  f_current_dash_offset;
};

struct Map_2259 {
    struct SliceIter_2260  field0;
    struct Char_65 (*  field1 )(    struct Tuple2_2250  );
};

static struct Map_2259 Map_2259_Map (  struct SliceIter_2260  field0 ,  struct Char_65 (*  field1 )(    struct Tuple2_2250  ) ) {
    return ( struct Map_2259 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2261 {
    struct Char_65  c4209;
    ;
};

struct envunion2262 {
    bool  (*fun) (  struct env2261*  ,    struct Char_65  );
    struct env2261 env;
};

struct env2264 {
    struct envunion2262  fun1153;
};

struct envunion2265 {
    bool  (*fun) (  struct env2264*  ,    struct Char_65  ,    bool  );
    struct env2264 env;
};

static  struct Map_2259   into_dash_iter2266 (    struct Map_2259  self797 ) {
    return (  self797 );
}

struct Maybe_2268 {
    enum {
        Maybe_2268_None_t,
        Maybe_2268_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2250  field0;
        } Maybe_2268_Just_s;
    } stuff;
};

static struct Maybe_2268 Maybe_2268_Just (  struct Tuple2_2250  field0 ) {
    return ( struct Maybe_2268 ) { .tag = Maybe_2268_Just_t, .stuff = { .Maybe_2268_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_2250 *   offset_dash_ptr2270 (    struct Tuple2_2250 *  x377 ,    int64_t  count379 ) {
    struct Tuple2_2250  temp2271;
    return ( (struct Tuple2_2250 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2271 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2268   next2269 (    struct SliceIter_2260 *  self2249 ) {
    size_t  off2250 = ( ( * (  self2249 ) ) .f_current_dash_offset );
    if ( (  cmp293 ( (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2249 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2268) { .tag = Maybe_2268_None_t } );
    }
    struct Tuple2_2250  elem2251 = ( * ( (  offset_dash_ptr2270 ) ( ( ( ( * (  self2249 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  off2250 ) ) ) ) ) );
    (*  self2249 ) .f_current_dash_offset = (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2268_Just ) ( (  elem2251 ) ) );
}

static  struct Maybe_300   next2267 (    struct Map_2259 *  dref799 ) {
    struct Maybe_2268  dref802 = ( (  next2269 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_2268_None_t ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_2268_Just_t ) {
            return ( ( Maybe_300_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_2268_Just_s .field0 ) ) ) ) );
        }
    }
}

static  bool   reduce2263 (    struct Map_2259  iterable1111 ,    bool  base1113 ,   struct envunion2265  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct Map_2259  it1117 = ( (  into_dash_iter2266 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next2267 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                struct envunion2265  temp2272 = (  fun1115 );
                x1116 = ( temp2272.fun ( &temp2272.env ,  ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2273 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2273);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2274;
    return (  temp2274 );
}

static  bool   lam2275 (   struct env2264* env ,    struct Char_65  e1155 ,    bool  x1157 ) {
    struct envunion2262  temp2276 = ( env->fun1153 );
    return ( ( temp2276.fun ( &temp2276.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2258 (    struct Map_2259  it1151 ,   struct envunion2262  fun1153 ) {
    struct env2264 envinst2264 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2263 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2265){ .fun = (  bool  (*) (  struct env2264*  ,    struct Char_65  ,    bool  ) )lam2275 , .env =  envinst2264 } ) ) );
}

static  struct SliceIter_2260   into_dash_iter2278 (    struct Slice_2249  self2243 ) {
    return ( (struct SliceIter_2260) { .f_slice = (  self2243 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Map_2259   map2277 (    struct Slice_2249  iterable806 ,    struct Char_65 (*  fun808 )(    struct Tuple2_2250  ) ) {
    struct SliceIter_2260  it809 = ( (  into_dash_iter2278 ) ( (  iterable806 ) ) );
    return ( ( Map_2259_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct Char_65   fst2279 (    struct Tuple2_2250  dref1556 ) {
    return ( dref1556 .field0 );
}

static  bool   lam2280 (   struct env2261* env ,    struct Char_65  eq4211 ) {
    return (  eq482 ( (  eq4211 ) , ( env->c4209 ) ) );
}

static  bool   lam2257 (   struct env2255* env ,    struct Char_65  c4209 ) {
    struct env2261 envinst2261 = {
        .c4209 =  c4209 ,
    };
    return ( (  any2258 ) ( ( (  map2277 ) ( ( env->bf_dash_chars4207 ) ,  (  fst2279 ) ) ) ,  ( (struct envunion2262){ .fun = (  bool  (*) (  struct env2261*  ,    struct Char_65  ) )lam2280 , .env =  envinst2261 } ) ) );
}

struct env2282 {
    struct Slice_2249  bf_dash_chars4207;
    ;
    ;
    ;
    ;
};

struct envunion2283 {
    bool  (*fun) (  struct env2282*  ,    struct Char_65  );
    struct env2282 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2281 (    struct Scanner_993 *  sc3420 ,   struct envunion2283  condition3422 ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        struct envunion2283  temp2284 = (  condition3422 );
        if ( ( temp2284.fun ( &temp2284.env ,  ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

struct env2287 {
    ;
    struct Char_65  c4215;
};

struct envunion2288 {
    bool  (*fun) (  struct env2287*  ,    struct Char_65  );
    struct env2287 env;
};

struct env2290 {
    struct envunion2288  fun1153;
};

struct envunion2291 {
    bool  (*fun) (  struct env2290*  ,    struct Char_65  ,    bool  );
    struct env2290 env;
};

static  bool   reduce2289 (    struct Map_2259  iterable1111 ,    bool  base1113 ,   struct envunion2291  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct Map_2259  it1117 = ( (  into_dash_iter2266 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next2267 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                struct envunion2291  temp2292 = (  fun1115 );
                x1116 = ( temp2292.fun ( &temp2292.env ,  ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2293 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2293);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2294;
    return (  temp2294 );
}

static  bool   lam2295 (   struct env2290* env ,    struct Char_65  e1155 ,    bool  x1157 ) {
    struct envunion2288  temp2296 = ( env->fun1153 );
    return ( ( temp2296.fun ( &temp2296.env ,  (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2286 (    struct Map_2259  it1151 ,   struct envunion2288  fun1153 ) {
    struct env2290 envinst2290 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2289 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2291){ .fun = (  bool  (*) (  struct env2290*  ,    struct Char_65  ,    bool  ) )lam2295 , .env =  envinst2290 } ) ) );
}

static  bool   lam2297 (   struct env2287* env ,    struct Char_65  ec4217 ) {
    return (  eq482 ( (  ec4217 ) , ( env->c4215 ) ) );
}

static  bool   lam2285 (   struct env2282* env ,    struct Char_65  c4215 ) {
    struct env2287 envinst2287 = {
        .c4215 =  c4215 ,
    };
    return ( (  any2286 ) ( ( (  map2277 ) ( ( env->bf_dash_chars4207 ) ,  (  fst2279 ) ) ) ,  ( (struct envunion2288){ .fun = (  bool  (*) (  struct env2287*  ,    struct Char_65  ) )lam2297 , .env =  envinst2287 } ) ) );
}

static  enum HighlightType_18   snd2298 (    struct Tuple2_2250  dref1559 ) {
    return ( dref1559 .field1 );
}

static  struct Tuple2_2250   undefined2300 (  ) {
    struct Tuple2_2250  temp2301;
    return (  temp2301 );
}

static  struct Tuple2_2250   or_dash_fail2299 (    struct Maybe_2268  x1346 ,    struct StrView_30  errmsg1348 ) {
    struct Maybe_2268  dref1349 = (  x1346 );
    if ( dref1349.tag == Maybe_2268_None_t ) {
        ( (  panic1250 ) ( (  errmsg1348 ) ) );
        return ( (  undefined2300 ) ( ) );
    }
    else {
        if ( dref1349.tag == Maybe_2268_Just_t ) {
            return ( dref1349 .stuff .Maybe_2268_Just_s .field0 );
        }
    }
}

struct env2304 {
    struct Char_65  cc4219;
    ;
};

struct envunion2305 {
    bool  (*fun) (  struct env2304*  ,    struct Tuple2_2250  );
    struct env2304 env;
};

struct Filter_2303 {
    struct SliceIter_2260  f_og;
    struct envunion2305  f_fun;
};

static  struct Maybe_2268   next2306 (    struct Filter_2303 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_2268  dref835 = ( (  next2269 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_2268_None_t ) {
            return ( (struct Maybe_2268) { .tag = Maybe_2268_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_2268_Just_t ) {
                struct envunion2305  temp2307 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp2307.fun ( &temp2307.env ,  ( dref835 .stuff .Maybe_2268_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2268_Just ) ( ( dref835 .stuff .Maybe_2268_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2268  temp2308;
    return (  temp2308 );
}

static  struct Filter_2303   into_dash_iter2310 (    struct Filter_2303  self831 ) {
    return (  self831 );
}

static  struct Maybe_2268   head2302 (    struct Filter_2303  it1160 ) {
    struct Filter_2303  temp2309 = ( (  into_dash_iter2310 ) ( (  it1160 ) ) );
    return ( (  next2306 ) ( ( &temp2309 ) ) );
}

static  struct Filter_2303   filter2311 (    struct Slice_2249  iterable839 ,   struct envunion2305  fun841 ) {
    struct SliceIter_2260  it842 = ( (  into_dash_iter2278 ) ( (  iterable839 ) ) );
    return ( (struct Filter_2303) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  bool   lam2312 (   struct env2304* env ,    struct Tuple2_2250  dref4220 ) {
    return (  eq482 ( ( dref4220 .field0 ) , ( env->cc4219 ) ) );
}

struct envunion2314 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct env2316 {
    struct envunion2256  is_dash_bf_dash_char4212;
};

struct envunion2317 {
    bool  (*fun) (  struct env2316*  ,    struct Char_65  );
    struct env2316 env;
};

static  struct Maybe_300   char_dash_satisfies_prime_2319 (    struct Scanner_993 *  sc3420 ,   struct envunion2317  condition3422 ) {
    struct Maybe_300  dref3423 = ( (  head1374 ) ( ( ( * (  sc3420 ) ) .f_s ) ) );
    if ( dref3423.tag == Maybe_300_Just_t ) {
        struct envunion2317  temp2320 = (  condition3422 );
        if ( ( temp2320.fun ( &temp2320.env ,  ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_1021 ) ( (  sc3420 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( ( Maybe_300_Just ) ( ( dref3423 .stuff .Maybe_300_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
    else {
        if ( dref3423.tag == Maybe_300_None_t ) {
            return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
        }
    }
}

static  bool   char_dash_satisfies2318 (    struct Scanner_993 *  sc3427 ,   struct envunion2317  condition3429 ) {
    return ( (  is_dash_just2034 ) ( ( (  char_dash_satisfies_prime_2319 ) ( (  sc3427 ) ,  (  condition3429 ) ) ) ) );
}

static  enum Unit_8   skip_dash_while2315 (    struct Scanner_993 *  sc3443 ,   struct envunion2317  condition3445 ) {
    while ( ( (  char_dash_satisfies2318 ) ( (  sc3443 ) ,  (  condition3445 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2321 (   struct env2316* env ,    struct Char_65  c4226 ) {
    struct envunion2256  temp2322 = ( env->is_dash_bf_dash_char4212 );
    return ( ! ( temp2322.fun ( &temp2322.env ,  (  c4226 ) ) ) );
}

struct envunion2324 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line2023 (   struct env135* env ,    struct TextBuf_104 *  self4142 ,    struct Line_12 *  line4144 ) {
    if ( ( ! ( ( * (  line4144 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_15 *  hls4145 = ( & ( ( * (  line4144 ) ) .f_highlights ) );
    ( (  trim2024 ) ( (  hls4145 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_30  line_dash_sv4146 = ( (  from_dash_bytes1136 ) ( ( (  to_dash_slice605 ) ( ( ( * (  line4144 ) ) .f_line ) ) ) ) );
    enum Filetype_107  dref4147 = ( ( * (  self4142 ) ) .f_filetype );
    switch (  dref4147 ) {
        case Filetype_107_Text : {
            break;
        }
        case Filetype_107_KC : {
            struct Scanner_993  temp2025 = ( (  mk_dash_from_dash_str995 ) ( (  line_dash_sv4146 ) ) );
            struct Scanner_993 *  sc4148 = ( &temp2025 );
            while ( ( ! ( (  null2026 ) ( (  sc4148 ) ) ) ) ) {
                int32_t  from_dash_off4149 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                struct Maybe_300  first_dash_char4150 = ( (  peek2029 ) ( (  sc4148 ) ) );
                if ( ( (  try_dash_char2030 ) ( (  sc4148 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  try_dash_char2030 ) ( (  sc4148 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  skip_dash_while2032 ) ( (  sc4148 ) ,  (  lam2036 ) ) );
                        ( (  drop_prime_1021 ) ( (  sc4148 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        int32_t  to_dash_off4153 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2038  temp2037 = ( (struct envunion2038){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                        ( temp2037.fun ( &temp2037.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( (  line_dash_sv4146 ) ) ) ) ) , .f_type = ( HighlightType_18_Special3 ) } ) ) );
                    } else {
                        struct envunion2070  temp2069 = ( (struct envunion2070){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                        ( temp2069.fun ( &temp2069.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( (  line_dash_sv4146 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
                    }
                    break;
                } else {
                    if ( ( (  try_dash_char2030 ) ( (  sc4148 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) {
                        while ( ( true ) ) {
                            ( (  skip_dash_while2071 ) ( (  sc4148 ) ,  (  lam2074 ) ) );
                            if ( (  eq2031 ( ( (  peek2029 ) ( (  sc4148 ) ) ) , ( ( Maybe_300_Just ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                ( (  drop_prime_1021 ) ( (  sc4148 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                if ( (  eq2031 ( ( (  peek2029 ) ( (  sc4148 ) ) ) , ( ( Maybe_300_Just ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                                    ( (  drop_prime_1021 ) ( (  sc4148 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                } else {
                                }
                            } else {
                                ( (  drop_prime_1021 ) ( (  sc4148 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                break;
                            }
                        }
                        int32_t  cur_dash_off4156 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2076  temp2075 = ( (struct envunion2076){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                        ( temp2075.fun ( &temp2075.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = (  cur_dash_off4156 ) , .f_type = ( HighlightType_18_String ) } ) ) );
                    } else {
                        if ( ( (  try_dash_char2030 ) ( (  sc4148 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"@" ) ,  ( 1 ) ) ) ) ) ) {
                            if ( ( (  char_dash_satisfies2077 ) ( (  sc4148 ) ,  (  is_dash_alpha1370 ) ) ) ) {
                                ( (  skip_dash_while2079 ) ( (  sc4148 ) ,  (  lam2082 ) ) );
                                int32_t  cur_dash_off4159 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                struct envunion2084  temp2083 = ( (struct envunion2084){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                ( temp2083.fun ( &temp2083.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = (  cur_dash_off4159 ) , .f_type = ( HighlightType_18_Ident3 ) } ) ) );
                            } else {
                            }
                        } else {
                            struct Array_499  temp2096 = ( (struct Array_499) { ._arr = { ( (  from_dash_string202 ) ( ( (uint8_t*)"==" ) ,  ( 2 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"/=" ) ,  ( 2 ) ) ) } } );
                            struct env2086 envinst2086 = {
                                .sc4148 =  sc4148 ,
                            };
                            if ( ( (  any2085 ) ( ( (  from_dash_listlike540 ) ( ( &temp2096 ) ) ) ,  ( (struct envunion2087){ .fun = (  bool  (*) (  struct env2086*  ,    struct StrView_30  ) )lam2097 , .env =  envinst2086 } ) ) ) ) {
                                int32_t  cur_dash_off4162 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                enum HighlightType_18  type4163 = ( HighlightType_18_Special2 );
                                struct envunion2103  temp2102 = ( (struct envunion2103){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                ( temp2102.fun ( &temp2102.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = (  cur_dash_off4162 ) , .f_type = (  type4163 ) } ) ) );
                            } else {
                                struct Array_2105  temp2123 = ( (struct Array_2105) { ._arr = { ( (  from_dash_string202 ) ( ( (uint8_t*)"<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike543 ) ( ( (uint8_t*)"=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"&" ) ,  ( 1 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike543 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) } } );
                                struct env2106 envinst2106 = {
                                    .sc4148 =  sc4148 ,
                                };
                                if ( ( (  any2104 ) ( ( (  from_dash_listlike2122 ) ( ( &temp2123 ) ) ) ,  ( (struct envunion2107){ .fun = (  bool  (*) (  struct env2106*  ,    struct StrView_30  ) )lam2124 , .env =  envinst2106 } ) ) ) ) {
                                    int32_t  cur_dash_off4166 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_18  type4167 = ( HighlightType_18_Special1 );
                                    struct envunion2126  temp2125 = ( (struct envunion2126){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                    ( temp2125.fun ( &temp2125.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = (  cur_dash_off4166 ) , .f_type = (  type4167 ) } ) ) );
                                } else {
                                    if ( ( (  char_dash_satisfies2077 ) ( (  sc4148 ) ,  (  is_dash_alpha1370 ) ) ) ) {
                                        ( (  skip_dash_while2127 ) ( (  sc4148 ) ,  (  lam2130 ) ) );
                                        int32_t  cur_dash_off4170 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                        bool  first_dash_char_dash_uppercase4171 = ( (  maybe2131 ) ( (  first_dash_char4150 ) ,  (  is_dash_upper2132 ) ,  ( false ) ) );
                                        enum HighlightType_18  type4172 = ( (  first_dash_char_dash_uppercase4171 ) ? ( HighlightType_18_Ident2 ) : ( HighlightType_18_Ident1 ) );
                                        struct StrView_30  ident4173 = ( ( (  byte_dash_substr497 ) ( (  line_dash_sv4146 ) ,  ( (  i32_dash_size423 ) ( (  from_dash_off4149 ) ) ) ,  ( (  i32_dash_size423 ) ( (  cur_dash_off4170 ) ) ) ) ) );
                                        struct Array_2133  temp2135 = ( (struct Array_2133) { ._arr = { ( (  from_dash_string202 ) ( ( (uint8_t*)"fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"class" ) ,  ( 5 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"external" ) ,  ( 8 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"use" ) ,  ( 3 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"export" ) ,  ( 6 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"let" ) ,  ( 3 ) ) ) } } );
                                        struct Array_2133  keywords14174 = ( (  from_dash_listlike2134 ) ( ( &temp2135 ) ) );
                                        struct Array_2136  temp2138 = ( (struct Array_2136) { ._arr = { ( (  from_dash_string202 ) ( ( (uint8_t*)"if" ) ,  ( 2 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"else" ) ,  ( 4 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"case" ) ,  ( 4 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"for" ) ,  ( 3 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"in" ) ,  ( 2 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"while" ) ,  ( 5 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"break" ) ,  ( 5 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"as" ) ,  ( 2 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"or" ) ,  ( 2 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"and" ) ,  ( 3 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"not" ) ,  ( 3 ) ) ) , ( (  from_dash_string202 ) ( ( (uint8_t*)"return" ) ,  ( 6 ) ) ) } } );
                                        struct Array_2136  keywords24175 = ( (  from_dash_listlike2137 ) ( ( &temp2138 ) ) );
                                        struct env2140 envinst2140 = {
                                            .ident4173 =  ident4173 ,
                                        };
                                        if ( ( (  any2139 ) ( (  keywords14174 ) ,  ( (struct envunion2141){ .fun = (  bool  (*) (  struct env2140*  ,    struct StrView_30  ) )lam2156 , .env =  envinst2140 } ) ) ) ) {
                                            type4172 = ( HighlightType_18_Keyword1 );
                                        } else {
                                            struct env2158 envinst2158 = {
                                                .ident4173 =  ident4173 ,
                                            };
                                            if ( ( (  any2157 ) ( (  keywords24175 ) ,  ( (struct envunion2159){ .fun = (  bool  (*) (  struct env2158*  ,    struct StrView_30  ) )lam2174 , .env =  envinst2158 } ) ) ) ) {
                                                type4172 = ( HighlightType_18_Keyword2 );
                                            } else {
                                                if ( ( ( ! (  first_dash_char_dash_uppercase4171 ) ) && (  eq2031 ( ( (  peek2029 ) ( (  sc4148 ) ) ) , ( ( Maybe_300_Just ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                                    type4172 = ( HighlightType_18_Ident4 );
                                                }
                                            }
                                        }
                                        struct envunion2176  temp2175 = ( (struct envunion2176){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                        ( temp2175.fun ( &temp2175.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = (  cur_dash_off4170 ) , .f_type = (  type4172 ) } ) ) );
                                    } else {
                                        struct Maybe_1005  dref4180 = ( (  int2177 ) ( (  sc4148 ) ) );
                                        if ( dref4180.tag == Maybe_1005_Just_t ) {
                                            int32_t  cur_dash_off4182 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                            enum HighlightType_18  type4183 = ( HighlightType_18_Number );
                                            if ( (  eq1097 ( ( dref4180 .stuff .Maybe_1005_Just_s .field0 ) , (  from_dash_integral291 ( 0 ) ) ) ) ) {
                                                if ( ( (  try_dash_char2030 ) ( (  sc4148 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"x" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2178 ) ( (  sc4148 ) ,  (  is_dash_hex2181 ) ) );
                                                    int32_t  cur_dash_off4184 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2183  temp2182 = ( (struct envunion2183){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                                    ( temp2182.fun ( &temp2182.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = (  cur_dash_off4184 ) , .f_type = (  type4183 ) } ) ) );
                                                    ( (  skip_dash_while2184 ) ( (  sc4148 ) ,  (  is_dash_alpha1370 ) ) );
                                                    int32_t  invalid_dash_off4185 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq597 ( (  cur_dash_off4184 ) , (  invalid_dash_off4185 ) ) ) ) {
                                                        struct envunion2186  temp2185 = ( (struct envunion2186){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                                        ( temp2185.fun ( &temp2185.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off4184 ) , .f_to = (  invalid_dash_off4185 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    if ( ( (  try_dash_char2030 ) ( (  sc4148 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"o" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  skip_dash_while2187 ) ( (  sc4148 ) ,  (  is_dash_octal2190 ) ) );
                                                        int32_t  cur_dash_off4186 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                                        struct envunion2192  temp2191 = ( (struct envunion2192){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                                        ( temp2191.fun ( &temp2191.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = (  cur_dash_off4186 ) , .f_type = (  type4183 ) } ) ) );
                                                        ( (  skip_dash_while2193 ) ( (  sc4148 ) ,  (  is_dash_digit1011 ) ) );
                                                        int32_t  invalid_dash_off4187 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                                        if ( ( !  eq597 ( (  cur_dash_off4186 ) , (  invalid_dash_off4187 ) ) ) ) {
                                                            struct envunion2197  temp2196 = ( (struct envunion2197){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                                            ( temp2196.fun ( &temp2196.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off4186 ) , .f_to = (  invalid_dash_off4187 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                        }
                                                    } else {
                                                        if ( ( (  try_dash_char2030 ) ( (  sc4148 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  skip_dash_while2198 ) ( (  sc4148 ) ,  (  is_dash_binary2201 ) ) );
                                                            int32_t  cur_dash_off4188 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                                            struct envunion2203  temp2202 = ( (struct envunion2203){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                                            ( temp2202.fun ( &temp2202.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = (  cur_dash_off4188 ) , .f_type = (  type4183 ) } ) ) );
                                                            ( (  skip_dash_while2193 ) ( (  sc4148 ) ,  (  is_dash_digit1011 ) ) );
                                                            int32_t  invalid_dash_off4189 = ( (  size_dash_i32332 ) ( ( ( * (  sc4148 ) ) .f_byte_dash_offset ) ) );
                                                            if ( ( !  eq597 ( (  cur_dash_off4188 ) , (  invalid_dash_off4189 ) ) ) ) {
                                                                struct envunion136  temp2204 = ( (struct envunion136){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                                                ( temp2204.fun ( &temp2204.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off4188 ) , .f_to = (  invalid_dash_off4189 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                            }
                                                        } else {
                                                            struct envunion2206  temp2205 = ( (struct envunion2206){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                                            ( temp2205.fun ( &temp2205.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = (  cur_dash_off4182 ) , .f_type = (  type4183 ) } ) ) );
                                                        }
                                                    }
                                                }
                                            } else {
                                                struct envunion2208  temp2207 = ( (struct envunion2208){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                                                ( temp2207.fun ( &temp2207.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4149 ) , .f_to = (  cur_dash_off4182 ) , .f_type = (  type4183 ) } ) ) );
                                            }
                                        }
                                        else {
                                            if ( dref4180.tag == Maybe_1005_None_t ) {
                                                ( (  drop_prime_1021 ) ( (  sc4148 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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
            struct Scanner_993  temp2209 = ( (  mk_dash_from_dash_str995 ) ( (  line_dash_sv4146 ) ) );
            struct Scanner_993 *  sc4190 = ( &temp2209 );
            if ( ( (  try_dash_char2030 ) ( (  sc4190 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"#" ) ,  ( 1 ) ) ) ) ) ) {
                struct envunion2211  temp2210 = ( (struct envunion2211){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                ( temp2210.fun ( &temp2210.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_integral56 ( 0 ) ) , .f_to = ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( (  line_dash_sv4146 ) ) ) ) ) , .f_type = ( HighlightType_18_Keyword1 ) } ) ) );
            } else {
                ( (  skip_dash_while2212 ) ( (  sc4190 ) ,  (  is_dash_whitespace1371 ) ) );
                int32_t  from_dash_off4191 = ( (  size_dash_i32332 ) ( ( ( * (  sc4190 ) ) .f_byte_dash_offset ) ) );
                if ( ( (  try_dash_char2030 ) ( (  sc4190 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) ) ) {
                    int32_t  to_dash_off4192 = ( (  size_dash_i32332 ) ( ( ( * (  sc4190 ) ) .f_byte_dash_offset ) ) );
                    struct envunion2216  temp2215 = ( (struct envunion2216){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                    ( temp2215.fun ( &temp2215.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4191 ) , .f_to = (  to_dash_off4192 ) , .f_type = ( HighlightType_18_Special1 ) } ) ) );
                    ( (  skip_dash_while2212 ) ( (  sc4190 ) ,  (  is_dash_whitespace1371 ) ) );
                    int32_t  from_dash_off4193 = ( (  size_dash_i32332 ) ( ( ( * (  sc4190 ) ) .f_byte_dash_offset ) ) );
                    if ( ( (  matches_dash_str2098 ) ( (  sc4190 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"[ ]" ) ,  ( 3 ) ) ) ) ) ) {
                        int32_t  to_dash_off4194 = ( (  size_dash_i32332 ) ( ( ( * (  sc4190 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2218  temp2217 = ( (struct envunion2218){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                        ( temp2217.fun ( &temp2217.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4193 ) , .f_to = (  to_dash_off4194 ) , .f_type = ( HighlightType_18_Keyword1 ) } ) ) );
                    } else {
                        if ( ( ( (  matches_dash_str2098 ) ( (  sc4190 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"[x]" ) ,  ( 3 ) ) ) ) ) || ( (  matches_dash_str2098 ) ( (  sc4190 ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"[X]" ) ,  ( 3 ) ) ) ) ) ) ) {
                            int32_t  to_dash_off4195 = ( (  size_dash_i32332 ) ( ( ( * (  sc4190 ) ) .f_byte_dash_offset ) ) );
                            struct envunion2220  temp2219 = ( (struct envunion2220){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                            ( temp2219.fun ( &temp2219.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4193 ) , .f_to = (  to_dash_off4195 ) , .f_type = ( HighlightType_18_Keyword2 ) } ) ) );
                        }
                    }
                }
            }
            break;
        }
        case Filetype_107_GCode : {
            struct Scanner_993  temp2221 = ( (  mk_dash_from_dash_str995 ) ( (  line_dash_sv4146 ) ) );
            struct Scanner_993 *  sc4196 = ( &temp2221 );
            ( (  skip_dash_while2212 ) ( (  sc4196 ) ,  (  is_dash_whitespace1371 ) ) );
            int32_t  first_dash_from_dash_off4197 = ( (  size_dash_i32332 ) ( ( ( * (  sc4196 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  char_dash_satisfies2222 ) ( (  sc4196 ) ,  (  is_dash_alphanumeric1369 ) ) ) ) {
                ( (  skip_dash_while2224 ) ( (  sc4196 ) ,  (  gcode_dash_keyword_dash_char2227 ) ) );
                int32_t  first_dash_to_dash_off4198 = ( (  size_dash_i32332 ) ( ( ( * (  sc4196 ) ) .f_byte_dash_offset ) ) );
                enum HighlightType_18  type4199 = ( HighlightType_18_Invalid );
                struct Char_65  first_dash_char4200 = ( (  to_dash_lower2228 ) ( ( (  char_dash_at_dash_offset2230 ) ( (  line_dash_sv4146 ) ,  ( (  i32_dash_size423 ) ( (  first_dash_from_dash_off4197 ) ) ) ) ) ) );
                if ( (  eq482 ( (  first_dash_char4200 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) {
                    type4199 = ( HighlightType_18_Keyword1 );
                } else {
                    if ( (  eq482 ( (  first_dash_char4200 ) , ( (  from_dash_charlike357 ) ( ( (uint8_t*)"g" ) ,  ( 1 ) ) ) ) ) ) {
                        type4199 = ( HighlightType_18_Ident1 );
                    }
                }
                struct envunion2240  temp2239 = ( (struct envunion2240){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                ( temp2239.fun ( &temp2239.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  first_dash_from_dash_off4197 ) , .f_to = (  first_dash_to_dash_off4198 ) , .f_type = (  type4199 ) } ) ) );
                ( (  skip_dash_while2212 ) ( (  sc4196 ) ,  (  is_dash_whitespace1371 ) ) );
                int32_t  from_dash_off4201 = ( (  size_dash_i32332 ) ( ( ( * (  sc4196 ) ) .f_byte_dash_offset ) ) );
                while ( ( (  char_dash_satisfies2222 ) ( (  sc4196 ) ,  (  is_dash_alphanumeric1369 ) ) ) ) {
                    ( (  skip_dash_while2224 ) ( (  sc4196 ) ,  (  gcode_dash_keyword_dash_char2227 ) ) );
                    int32_t  to_dash_off4202 = ( (  size_dash_i32332 ) ( ( ( * (  sc4196 ) ) .f_byte_dash_offset ) ) );
                    ( (  skip_dash_while2212 ) ( (  sc4196 ) ,  (  is_dash_whitespace1371 ) ) );
                    struct envunion2242  temp2241 = ( (struct envunion2242){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                    ( temp2241.fun ( &temp2241.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4201 ) , .f_to = (  to_dash_off4202 ) , .f_type = ( HighlightType_18_Ident4 ) } ) ) );
                }
            }
            while ( ( (  char_dash_satisfies2243 ) ( (  sc4196 ) ,  (  lam2245 ) ) ) ) {
            }
            int32_t  from_dash_off4205 = ( (  size_dash_i32332 ) ( ( ( * (  sc4196 ) ) .f_byte_dash_offset ) ) );
            if ( ( (  try_dash_char2030 ) ( (  sc4196 ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ) {
                struct envunion2247  temp2246 = ( (struct envunion2247){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                ( temp2246.fun ( &temp2246.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4205 ) , .f_to = ( (  size_dash_i32332 ) ( ( (  num_dash_bytes1168 ) ( (  line_dash_sv4146 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
            }
            break;
        }
        case Filetype_107_Brainfuck : {
            struct Scanner_993  temp2248 = ( (  mk_dash_from_dash_str995 ) ( (  line_dash_sv4146 ) ) );
            struct Scanner_993 *  sc4206 = ( &temp2248 );
            ( (  skip_dash_while2212 ) ( (  sc4206 ) ,  (  is_dash_whitespace1371 ) ) );
            struct Array_2252  temp2254 = ( (struct Array_2252) { ._arr = { ( ( Tuple2_2250_Tuple2 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"[" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special1 ) ) ) , ( ( Tuple2_2250_Tuple2 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"]" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special1 ) ) ) , ( ( Tuple2_2250_Tuple2 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"+" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special2 ) ) ) , ( ( Tuple2_2250_Tuple2 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special2 ) ) ) , ( ( Tuple2_2250_Tuple2 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"<" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special3 ) ) ) , ( ( Tuple2_2250_Tuple2 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)">" ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Special3 ) ) ) , ( ( Tuple2_2250_Tuple2 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Keyword1 ) ) ) , ( ( Tuple2_2250_Tuple2 ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ,  ( HighlightType_18_Keyword2 ) ) ) } } );
            struct Slice_2249  bf_dash_chars4207 = ( ( (  from_dash_listlike2251 ) ( ( &temp2254 ) ) ) );
            struct env2255 envinst2255 = {
                .bf_dash_chars4207 =  bf_dash_chars4207 ,
            };
            struct envunion2256  is_dash_bf_dash_char4212 = ( (struct envunion2256){ .fun = (  bool  (*) (  struct env2255*  ,    struct Char_65  ) )lam2257 , .env =  envinst2255 } );
            while ( ( ! ( (  null2026 ) ( (  sc4206 ) ) ) ) ) {
                while ( ( true ) ) {
                    int32_t  from_dash_off4213 = ( (  size_dash_i32332 ) ( ( ( * (  sc4206 ) ) .f_byte_dash_offset ) ) );
                    struct env2282 envinst2282 = {
                        .bf_dash_chars4207 =  bf_dash_chars4207 ,
                    };
                    struct Maybe_300  dref4218 = ( (  char_dash_satisfies_prime_2281 ) ( (  sc4206 ) ,  ( (struct envunion2283){ .fun = (  bool  (*) (  struct env2282*  ,    struct Char_65  ) )lam2285 , .env =  envinst2282 } ) ) );
                    if ( dref4218.tag == Maybe_300_Just_t ) {
                        struct env2304 envinst2304 = {
                            .cc4219 = dref4218 .stuff .Maybe_300_Just_s .field0 ,
                        };
                        enum HighlightType_18  hl4222 = ( (  snd2298 ) ( ( (  or_dash_fail2299 ) ( ( (  head2302 ) ( ( (  filter2311 ) ( (  bf_dash_chars4207 ) ,  ( (struct envunion2305){ .fun = (  bool  (*) (  struct env2304*  ,    struct Tuple2_2250  ) )lam2312 , .env =  envinst2304 } ) ) ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"could not find matched char (it should not happen)" ) ,  ( 50 ) ) ) ) ) ) );
                        int32_t  to_dash_off4223 = ( (  size_dash_i32332 ) ( ( ( * (  sc4206 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2314  temp2313 = ( (struct envunion2314){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                        ( temp2313.fun ( &temp2313.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4213 ) , .f_to = (  to_dash_off4223 ) , .f_type = (  hl4222 ) } ) ) );
                    }
                    else {
                        if ( dref4218.tag == Maybe_300_None_t ) {
                            break;
                        }
                    }
                }
                int32_t  from_dash_off4224 = ( (  size_dash_i32332 ) ( ( ( * (  sc4206 ) ) .f_byte_dash_offset ) ) );
                struct env2316 envinst2316 = {
                    .is_dash_bf_dash_char4212 =  is_dash_bf_dash_char4212 ,
                };
                ( (  skip_dash_while2315 ) ( (  sc4206 ) ,  ( (struct envunion2317){ .fun = (  bool  (*) (  struct env2316*  ,    struct Char_65  ) )lam2321 , .env =  envinst2316 } ) ) );
                int32_t  to_dash_off4227 = ( (  size_dash_i32332 ) ( ( ( * (  sc4206 ) ) .f_byte_dash_offset ) ) );
                if ( (  cmp158 ( (  to_dash_off4227 ) , (  from_dash_off4224 ) ) == 2 ) ) {
                    struct envunion2324  temp2323 = ( (struct envunion2324){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add2039 , .env =  env->envinst35 } );
                    ( temp2323.fun ( &temp2323.env ,  (  hls4145 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off4224 ) , .f_to = (  to_dash_off4227 ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
                }
            }
            break;
        }
    }
    (*  line4144 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_16   subslice2327 (    struct Slice_16  slice2197 ,    size_t  from2199 ,    size_t  to2201 ) {
    struct Highlight_17 *  begin_dash_ptr2202 = ( (  offset_dash_ptr2053 ) ( ( (  slice2197 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  from2199 ) ) ) ) );
    if ( ( (  cmp293 ( (  from2199 ) , (  to2201 ) ) != 0 ) || (  cmp293 ( (  from2199 ) , ( (  slice2197 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2203 = (  op_dash_sub292 ( ( (  min480 ) ( (  to2201 ) ,  ( (  slice2197 ) .f_count ) ) ) , (  from2199 ) ) );
    return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  count2203 ) } );
}

static  struct SliceIter_2057   into_dash_iter2326 (    struct List_15  self2426 ) {
    return ( (  into_dash_iter2066 ) ( ( (  subslice2327 ) ( ( (  self2426 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2426 ) .f_count ) ) ) ) );
}

static  bool   between2329 (    int32_t  c1370 ,    int32_t  l1372 ,    int32_t  r1374 ) {
    int32_t  from1375 = ( (  min697 ) ( (  l1372 ) ,  (  r1374 ) ) );
    int32_t  to1376 = ( (  max1148 ) ( (  l1372 ) ,  (  r1374 ) ) );
    return ( (  cmp158 ( (  from1375 ) , (  c1370 ) ) != 2 ) && (  cmp158 ( (  c1370 ) , (  to1376 ) ) != 2 ) );
}

static  struct Maybe_206   highlight_dash_at2021 (   struct env137* env ,    struct TextBuf_104 *  self4230 ,    struct Pos_29  pos4232 ) {
    struct Line_12 *  line4233 = ( (  get_dash_ptr604 ) ( ( & ( ( * (  self4230 ) ) .f_buf ) ) ,  ( (  i32_dash_size423 ) ( ( (  pos4232 ) .f_line ) ) ) ) );
    struct envunion138  temp2022 = ( (struct envunion138){ .fun = (  enum Unit_8  (*) (  struct env135*  ,    struct TextBuf_104 *  ,    struct Line_12 *  ) )recompute_dash_highlights_dash_at_dash_line2023 , .env =  env->envinst135 } );
    ( temp2022.fun ( &temp2022.env ,  (  self4230 ) ,  (  line4233 ) ) );
    struct SliceIter_2057  temp2325 =  into_dash_iter2326 ( ( ( * (  line4233 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2062  __cond2328 =  next2063 (&temp2325);
        if (  __cond2328 .tag == 0 ) {
            break;
        }
        struct Highlight_17  hl4235 =  __cond2328 .stuff .Maybe_2062_Just_s .field0;
        if ( ( (  between2329 ) ( ( (  pos4232 ) .f_bi ) ,  ( (  hl4235 ) .f_from ) ,  (  op_dash_sub165 ( ( (  hl4235 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_206_Just ) ( ( (  hl4235 ) .f_type ) ) );
        }
        if ( (  cmp158 ( ( (  pos4232 ) .f_bi ) , ( (  hl4235 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_206) { .tag = Maybe_206_None_t } );
        }
    }
    return ( (struct Maybe_206) { .tag = Maybe_206_None_t } );
}

struct Maybe_2333 {
    enum {
        Maybe_2333_None_t,
        Maybe_2333_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_176  field0;
        } Maybe_2333_Just_s;
    } stuff;
};

static struct Maybe_2333 Maybe_2333_Just (  struct HighlightColors_176  field0 ) {
    return ( struct Maybe_2333 ) { .tag = Maybe_2333_Just_t, .stuff = { .Maybe_2333_Just_s = { .field0 = field0 } } };
};

struct env2334 {
    ;
    struct Theme_173 *  theme4271;
};

struct envunion2335 {
    struct Colors_174  (*fun) (  struct env2334*  ,    struct HighlightColors_176  );
    struct env2334 env;
};

static  struct Colors_174   maybe2332 (    struct Maybe_2333  x1585 ,   struct envunion2335  fun1587 ,    struct Colors_174  default1589 ) {
    struct envunion2335  temp2336 = (  fun1587 );
    return ( {  struct Maybe_2333  dref1590 = (  x1585 ) ; dref1590.tag == Maybe_2333_Just_t ? ( temp2336.fun ( &temp2336.env ,  ( dref1590 .stuff .Maybe_2333_Just_s .field0 ) ) ) : (  default1589 ) ; } );
}

struct SliceIter_2339 {
    struct Slice_175  f_slice;
    size_t  f_current_dash_offset;
};

struct env2340 {
    enum HighlightType_18  hltype4273;
    ;
};

struct envunion2341 {
    bool  (*fun) (  struct env2340*  ,    struct HighlightColors_176  );
    struct env2340 env;
};

struct Filter_2338 {
    struct SliceIter_2339  f_og;
    struct envunion2341  f_fun;
};

static  struct HighlightColors_176 *   offset_dash_ptr2344 (    struct HighlightColors_176 *  x377 ,    int64_t  count379 ) {
    struct HighlightColors_176  temp2345;
    return ( (struct HighlightColors_176 * ) ( ( (void*) (  x377 ) ) + (  op_dash_mul289 ( (  count379 ) , ( (int64_t ) ( sizeof( ( (  temp2345 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2333   next2343 (    struct SliceIter_2339 *  self2249 ) {
    size_t  off2250 = ( ( * (  self2249 ) ) .f_current_dash_offset );
    if ( (  cmp293 ( (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2249 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2333) { .tag = Maybe_2333_None_t } );
    }
    struct HighlightColors_176  elem2251 = ( * ( (  offset_dash_ptr2344 ) ( ( ( ( * (  self2249 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  off2250 ) ) ) ) ) );
    (*  self2249 ) .f_current_dash_offset = (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2333_Just ) ( (  elem2251 ) ) );
}

static  struct Maybe_2333   next2342 (    struct Filter_2338 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_2333  dref835 = ( (  next2343 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_2333_None_t ) {
            return ( (struct Maybe_2333) { .tag = Maybe_2333_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_2333_Just_t ) {
                struct envunion2341  temp2346 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp2346.fun ( &temp2346.env ,  ( dref835 .stuff .Maybe_2333_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2333_Just ) ( ( dref835 .stuff .Maybe_2333_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2333  temp2347;
    return (  temp2347 );
}

static  struct Filter_2338   into_dash_iter2349 (    struct Filter_2338  self831 ) {
    return (  self831 );
}

static  struct Maybe_2333   head2337 (    struct Filter_2338  it1160 ) {
    struct Filter_2338  temp2348 = ( (  into_dash_iter2349 ) ( (  it1160 ) ) );
    return ( (  next2342 ) ( ( &temp2348 ) ) );
}

static  struct SliceIter_2339   into_dash_iter2351 (    struct Slice_175  self2243 ) {
    return ( (struct SliceIter_2339) { .f_slice = (  self2243 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2338   filter2350 (    struct Slice_175  iterable839 ,   struct envunion2341  fun841 ) {
    struct SliceIter_2339  it842 = ( (  into_dash_iter2351 ) ( (  iterable839 ) ) );
    return ( (struct Filter_2338) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  bool   eq2354 (    uint32_t  l120 ,    uint32_t  r122 ) {
    return ( (  l120 ) == (  r122 ) );
}

static  enum HighlightType_18 *   cast2357 (    uint32_t *  x395 ) {
    return ( (enum HighlightType_18 * ) (  x395 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2355 (    enum HighlightType_18  x644 ) {
    uint32_t  temp2356 = ( (  zeroed849 ) ( ) );
    uint32_t *  y645 = ( &temp2356 );
    enum HighlightType_18 *  yp646 = ( (  cast2357 ) ( (  y645 ) ) );
    (*  yp646 ) = (  x644 );
    return ( * (  y645 ) );
}

static  bool   eq2353 (    enum HighlightType_18  l3849 ,    enum HighlightType_18  r3851 ) {
    return (  eq2354 ( ( ( (  cast_dash_on_dash_zeroed2355 ) ( (  l3849 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2355 ) ( (  r3851 ) ) ) ) );
}

static  bool   lam2352 (   struct env2340* env ,    struct HighlightColors_176  hlc4275 ) {
    return (  eq2353 ( ( (  hlc4275 ) .f_type ) , ( env->hltype4273 ) ) );
}

static  struct Color_139   or_dash_else2359 (    struct Maybe_177  self1353 ,    struct Color_139  alt1355 ) {
    struct Maybe_177  dref1356 = (  self1353 );
    if ( dref1356.tag == Maybe_177_None_t ) {
        return (  alt1355 );
    }
    else {
        if ( dref1356.tag == Maybe_177_Just_t ) {
            return ( dref1356 .stuff .Maybe_177_Just_s .field0 );
        }
    }
}

static  struct Colors_174   lam2358 (   struct env2334* env ,    struct HighlightColors_176  hlc4277 ) {
    return ( (struct Colors_174) { .f_fg = ( (  hlc4277 ) .f_fg ) , .f_bg = ( (  or_dash_else2359 ) ( ( (  hlc4277 ) .f_bg ) ,  ( ( ( * ( env->theme4271 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_174   find_dash_colors_dash_for_dash_highlight2331 (    struct Theme_173 *  theme4271 ,    enum HighlightType_18  hltype4273 ) {
    struct env2340 envinst2340 = {
        .hltype4273 =  hltype4273 ,
    };
    struct env2334 envinst2334 = {
        .theme4271 =  theme4271 ,
    };
    return ( (  maybe2332 ) ( ( (  head2337 ) ( ( (  filter2350 ) ( ( ( * (  theme4271 ) ) .f_highlights ) ,  ( (struct envunion2341){ .fun = (  bool  (*) (  struct env2340*  ,    struct HighlightColors_176  ) )lam2352 , .env =  envinst2340 } ) ) ) ) ) ,  ( (struct envunion2335){ .fun = (  struct Colors_174  (*) (  struct env2334*  ,    struct HighlightColors_176  ) )lam2358 , .env =  envinst2334 } ) ,  ( ( * (  theme4271 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2330 (   struct env2017* env ,    enum HighlightType_18  type4404 ) {
    ( (  set_dash_colors1982 ) ( ( env->screen4374 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2331 ) ( ( env->theme4381 ) ,  (  type4404 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_30   todo2363 (  ) {
    ( (  println1377 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"todo" ) ,  ( 4 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1738 ) ( ) );
}

static  struct StrView_30   short_dash_mode_dash_name2362 (    enum Mode_224  mode4292 ) {
    return ( {  enum Mode_224  dref4293 = (  mode4292 ) ;  dref4293 == Mode_224_Normal ? ( (  from_dash_string202 ) ( ( (uint8_t*)"NOR" ) ,  ( 3 ) ) ) :  dref4293 == Mode_224_Insert ? ( (  from_dash_string202 ) ( ( (uint8_t*)"INS" ) ,  ( 3 ) ) ) :  dref4293 == Mode_224_Select ? ( (  from_dash_string202 ) ( ( (uint8_t*)"SEL" ) ,  ( 3 ) ) ) : ( (  todo2363 ) ( ) ) ; } );
}

struct StrConcat_2366 {
    struct Char_65  field0;
    struct StrView_30  field1;
};

static struct StrConcat_2366 StrConcat_2366_StrConcat (  struct Char_65  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_2366 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2365 {
    struct StrConcat_2366  field0;
    struct Char_65  field1;
};

static struct StrConcat_2365 StrConcat_2365_StrConcat (  struct StrConcat_2366  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2365 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2369 {
    struct AppendIter_1062  f_left;
    struct StrViewIter_470  f_right;
};

struct StrConcatIter_2368 {
    struct StrConcatIter_2369  f_left;
    struct AppendIter_1062  f_right;
};

static  struct StrConcatIter_2368   into_dash_iter2370 (    struct StrConcatIter_2368  self1283 ) {
    return (  self1283 );
}

static  struct StrConcatIter_2369   into_dash_iter2374 (    struct StrConcat_2366  dref1290 ) {
    return ( (struct StrConcatIter_2369) { .f_left = ( (  chars1098 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars472 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2369   chars2373 (    struct StrConcat_2366  self1301 ) {
    return ( (  into_dash_iter2374 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_2368   into_dash_iter2372 (    struct StrConcat_2365  dref1290 ) {
    return ( (struct StrConcatIter_2368) { .f_left = ( (  chars2373 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1098 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2368   chars2371 (    struct StrConcat_2365  self1301 ) {
    return ( (  into_dash_iter2372 ) ( (  self1301 ) ) );
}

static  struct Maybe_300   next2377 (    struct StrConcatIter_2369 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next2376 (    struct StrConcatIter_2368 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2377 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2364 (    struct Screen_279 *  screen3785 ,    struct StrConcat_2365  s3787 ,    int32_t  x3789 ,    int32_t  y3791 ) {
    int32_t  w3792 = ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3785 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp158 ( (  y3791 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  y3791 ) , ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3785 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3793 = (  op_dash_add160 ( (  op_dash_mul1562 ( (  y3791 ) , (  w3792 ) ) ) , (  x3789 ) ) );
    int32_t  x3794 = ( (  min697 ) ( (  x3789 ) ,  (  w3792 ) ) );
    size_t  max_dash_len3795 = ( (  i32_dash_size423 ) ( (  op_dash_sub165 ( (  w3792 ) , (  x3794 ) ) ) ) );
    int32_t  xx3796 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2368  temp2367 =  into_dash_iter2370 ( ( (  chars2371 ) ( (  s3787 ) ) ) );
    while (true) {
        struct Maybe_300  __cond2375 =  next2376 (&temp2367);
        if (  __cond2375 .tag == 0 ) {
            break;
        }
        struct Char_65  c3798 =  __cond2375 .stuff .Maybe_300_Just_s .field0;
        ( (  put_dash_char1998 ) ( (  screen3785 ) ,  (  c3798 ) ,  (  op_dash_add160 ( (  x3794 ) , (  xx3796 ) ) ) ,  (  y3791 ) ) );
        xx3796 = (  op_dash_add160 ( (  xx3796 ) , ( (  rendered_dash_wcwidth1147 ) ( (  c3798 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1956 (   struct env204* env ,    struct Screen_279 *  screen4374 ,    struct Pane_223 *  pane4376 ,    struct ScreenDims_282  sd4378 ,    struct Config_253 *  cfg4380 ) {
    struct Theme_173 *  theme4381 = ( ( * (  cfg4380 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4382 = ( ( * (  cfg4380 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4383 = ( ( * (  cfg4380 ) ) .f_relative_dash_line_dash_numbers );
    int32_t  max_dash_line_dash_num_dash_chars4384 = ( (  size_dash_i32332 ) ( ( (  count1957 ) ( ( (  chars1973 ) ( ( (  num_dash_lines1175 ) ( ( ( * (  pane4376 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4385 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4386 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4387 = ( (  display_dash_line_dash_numbers4382 ) ? (  op_dash_add160 ( (  op_dash_add160 ( (  max_dash_line_dash_num_dash_chars4384 ) , (  num_dash_front_dash_margin4385 ) ) ) , (  num_dash_back_dash_margin4386 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct ScreenDims_282  temp1979 = (  sd4378 );
    temp1979 .  f_from_dash_sx = (  op_dash_add160 ( ( (  sd4378 ) .f_from_dash_sx ) , (  total_dash_margin4387 ) ) );
    ( (  update_dash_screen_dash_offset1976 ) ( (  pane4376 ) ,  ( temp1979 ) ) );
    struct ScreenCursorOffset_225  sc_dash_off4388 = ( ( * (  pane4376 ) ) .f_sc_dash_off );
    struct RangeIter_154  temp1980 =  into_dash_iter155 ( ( (  to164 ) ( (  op_dash_add160 ( ( (  sc_dash_off4388 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min697 ) ( ( (  num_dash_lines1175 ) ( ( ( * (  pane4376 ) ) .f_buf ) ) ) ,  (  op_dash_add160 ( ( (  sc_dash_off4388 ) .f_screen_dash_top ) , ( (  screen_dash_height1978 ) ( (  sd4378 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_156  __cond1981 =  next157 (&temp1980);
        if (  __cond1981 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4390 =  __cond1981 .stuff .Maybe_156_Just_s .field0;
        int32_t  ybi4391 = (  op_dash_sub165 ( (  line_dash_num4390 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4392 = ( (  vi_dash_bi1177 ) ( ( ( * (  pane4376 ) ) .f_buf ) ,  (  ybi4391 ) ,  ( (  sc_dash_off4388 ) .f_screen_dash_left ) ) );
        struct StrView_30  line_dash_content4393 = ( (  line1135 ) ( ( ( * (  pane4376 ) ) .f_buf ) ,  (  ybi4391 ) ) );
        int32_t  ys4394 = (  op_dash_sub165 ( (  op_dash_sub165 ( (  op_dash_add160 ( ( (  sd4378 ) .f_from_dash_sy ) , (  line_dash_num4390 ) ) ) , ( (  sc_dash_off4388 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4382 ) ) {
            if ( (  eq597 ( ( ( ( * (  pane4376 ) ) .f_cursor ) .f_line ) , (  ybi4391 ) ) ) ) {
                ( (  set_dash_colors1982 ) ( (  screen4374 ) ,  ( ( * (  theme4381 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors1982 ) ( (  screen4374 ) ,  ( ( * (  theme4381 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4395 = ( ( ( ! (  relative_dash_line_dash_numbers4383 ) ) || (  eq597 ( ( ( ( * (  pane4376 ) ) .f_cursor ) .f_line ) , (  ybi4391 ) ) ) ) ? (  line_dash_num4390 ) : ( (  abs1984 ) ( (  op_dash_sub165 ( ( ( ( * (  pane4376 ) ) .f_cursor ) .f_line ) , (  ybi4391 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right1985 ) ( (  screen4374 ) ,  (  line_dash_display4395 ) ,  (  op_dash_add160 ( (  op_dash_sub165 ( (  op_dash_sub165 ( ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen4374 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4378 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4387 ) ) ) , (  num_dash_back_dash_margin4386 ) ) ) ,  (  ys4394 ) ) );
            ( (  set_dash_colors1982 ) ( (  screen4374 ) ,  ( ( * (  theme4381 ) ) .f_default ) ) );
        }
        int32_t  vx4396 = (  op_dash_sub165 ( ( (  pos_dash_vi1133 ) ( ( ( * (  pane4376 ) ) .f_buf ) ,  ( (  mk733 ) ( (  ybi4391 ) ,  (  xbi4392 ) ) ) ) ) , ( (  sc_dash_off4388 ) .f_screen_dash_left ) ) );
        ( (  assert2001 ) ( (  cmp158 ( (  vx4396 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_2002_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4396 ) ) ) ) );
        int32_t  left_dash_offset4397 = (  op_dash_add160 ( ( (  sd4378 ) .f_from_dash_sx ) , (  total_dash_margin4387 ) ) );
        struct AppendIter_2009  temp2008 =  into_dash_iter2010 ( ( (  append2011 ) ( ( (  chars472 ) ( ( (  byte_dash_substr_dash_from477 ) ( (  line_dash_content4393 ) ,  ( (  i32_dash_size423 ) ( (  xbi4392 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_300  __cond2012 =  next2013 (&temp2008);
            if (  __cond2012 .tag == 0 ) {
                break;
            }
            struct Char_65  c4399 =  __cond2012 .stuff .Maybe_300_Just_s .field0;
            if ( (  cmp158 ( (  vx4396 ) , ( (  sd4378 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_29  curpos4400 = ( (  mk733 ) ( (  ybi4391 ) ,  (  xbi4392 ) ) );
            bool  is_dash_cursor4401 = (  eq596 ( (  curpos4400 ) , ( ( * (  pane4376 ) ) .f_cursor ) ) );
            bool  in_dash_selection4402 = ( (  is_dash_in_dash_selection2014 ) ( (  pane4376 ) ,  ( (  mk733 ) ( (  ybi4391 ) ,  (  xbi4392 ) ) ) ) );
            if ( (  is_dash_cursor4401 ) ) {
                ( (  set_dash_colors1982 ) ( (  screen4374 ) ,  ( ( * (  theme4381 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4402 ) ) {
                    ( (  set_dash_colors1982 ) ( (  screen4374 ) ,  ( ( * (  theme4381 ) ) .f_selection ) ) );
                } else {
                    struct envunion205  temp2020 = ( (struct envunion205){ .fun = (  struct Maybe_206  (*) (  struct env137*  ,    struct TextBuf_104 *  ,    struct Pos_29  ) )highlight_dash_at2021 , .env =  env->envinst137 } );
                    struct env2017 envinst2017 = {
                        .theme4381 =  theme4381 ,
                        .screen4374 =  screen4374 ,
                    };
                    ( (  if_dash_just2016 ) ( ( temp2020.fun ( &temp2020.env ,  ( ( * (  pane4376 ) ) .f_buf ) ,  (  curpos4400 ) ) ) ,  ( (struct envunion2018){ .fun = (  enum Unit_8  (*) (  struct env2017*  ,    enum HighlightType_18  ) )lam2330 , .env =  envinst2017 } ) ) );
                }
            }
            struct Maybe_85  dref4405 = ( (  char_dash_replacement1140 ) ( (  c4399 ) ) );
            if ( dref4405.tag == Maybe_85_None_t ) {
                if ( ( ! ( (  cmp158 ( (  vx4396 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  op_dash_sub165 ( (  op_dash_add160 ( (  vx4396 ) , ( (  char_dash_screen_dash_width1138 ) ( (  c4399 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4378 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1998 ) ( (  screen4374 ) ,  (  c4399 ) ,  (  op_dash_add160 ( (  left_dash_offset4397 ) , (  vx4396 ) ) ) ,  (  ys4394 ) ) );
                }
                vx4396 = (  op_dash_add160 ( (  vx4396 ) , ( (  char_dash_screen_dash_width1138 ) ( (  c4399 ) ) ) ) );
            }
            else {
                if ( dref4405.tag == Maybe_85_Just_t ) {
                    struct StrViewIter_470  temp2360 =  into_dash_iter471 ( ( (  chars472 ) ( ( dref4405 .stuff .Maybe_85_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_300  __cond2361 =  next475 (&temp2360);
                        if (  __cond2361 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4408 =  __cond2361 .stuff .Maybe_300_Just_s .field0;
                        if ( (  cmp158 ( (  vx4396 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1998 ) ( (  screen4374 ) ,  (  c4408 ) ,  (  op_dash_add160 ( (  left_dash_offset4397 ) , (  vx4396 ) ) ) ,  (  ys4394 ) ) );
                        }
                        vx4396 = (  op_dash_add160 ( (  vx4396 ) , ( (  char_dash_screen_dash_width1138 ) ( (  c4408 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors1982 ) ( (  screen4374 ) ,  ( ( * (  theme4381 ) ) .f_default ) ) );
            xbi4392 = (  op_dash_add160 ( (  xbi4392 ) , ( (  size_dash_i32332 ) ( ( (  c4399 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors1982 ) ( (  screen4374 ) ,  ( ( * (  theme4381 ) ) .f_overlay ) ) );
    struct StrView_30  modename4409 = ( (  short_dash_mode_dash_name2362 ) ( ( ( * (  pane4376 ) ) .f_mode ) ) );
    ( (  draw_dash_str2364 ) ( (  screen4374 ) ,  ( ( StrConcat_2365_StrConcat ) ( ( ( StrConcat_2366_StrConcat ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  modename4409 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4378 ) .f_from_dash_sx ) ,  ( (  sd4378 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2379 {
    ;
    struct Screen_279 *  screen4800;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion2380 {
    enum Unit_8  (*fun) (  struct env2379*  ,    struct StrView_30  );
    struct env2379 env;
};

static  enum Unit_8   if_dash_just2378 (    struct Maybe_85  x1594 ,   struct envunion2380  fun1596 ) {
    struct Maybe_85  dref1597 = (  x1594 );
    if ( dref1597.tag == Maybe_85_Just_t ) {
        struct envunion2380  temp2381 = (  fun1596 );
        ( temp2381.fun ( &temp2381.env ,  ( dref1597 .stuff .Maybe_85_Just_s .field0 ) ) );
    }
    else {
        if ( dref1597.tag == Maybe_85_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2382 (   struct env2379* env ,    struct StrView_30  msg4805 ) {
    int32_t  num_dash_chars4806 = ( (  size_dash_i32332 ) ( ( (  count1142 ) ( ( (  chars472 ) ( (  msg4805 ) ) ) ) ) ) );
    ( (  draw_dash_str2364 ) ( ( env->screen4800 ) ,  ( ( StrConcat_2365_StrConcat ) ( ( ( StrConcat_2366_StrConcat ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ,  (  msg4805 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1561 ( (  op_dash_sub165 ( ( (  u32_dash_i321942 ) ( ( ( * ( ( * ( env->screen4800 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4806 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  op_dash_sub165 ( ( (  u32_dash_i321942 ) ( ( ( * ( ( * ( env->screen4800 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2385 {
    struct StrView_30  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2385 StrConcat_2385_StrConcat (  struct StrView_30  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2385 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2384 {
    struct StrConcat_2385  field0;
    struct StrView_30  field1;
};

static struct StrConcat_2384 StrConcat_2384_StrConcat (  struct StrConcat_2385  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_2384 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2383 {
    struct StrConcat_2384  field0;
    struct Char_65  field1;
};

static struct StrConcat_2383 StrConcat_2383_StrConcat (  struct StrConcat_2384  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2383 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2388 {
    struct StrConcatIter_1775  f_left;
    struct StrViewIter_470  f_right;
};

struct StrConcatIter_2387 {
    struct StrConcatIter_2388  f_left;
    struct AppendIter_1062  f_right;
};

static  struct StrConcatIter_2387   into_dash_iter2390 (    struct StrConcatIter_2387  self1283 ) {
    return (  self1283 );
}

static  struct Maybe_300   next2392 (    struct StrConcatIter_2388 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next1783 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next2391 (    struct StrConcatIter_2387 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2392 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2389 (    struct StrConcatIter_2387  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct StrConcatIter_2387  it1117 = ( (  into_dash_iter2390 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next2391 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2393 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2393);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2394;
    return (  temp2394 );
}

static  size_t   lam2395 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add314 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2386 (    struct StrConcatIter_2387  it1122 ) {
    return ( (  reduce2389 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2395 ) ) );
}

static  struct StrConcatIter_1775   into_dash_iter2401 (    struct StrConcat_2385  dref1290 ) {
    return ( (struct StrConcatIter_1775) { .f_left = ( (  chars472 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1742 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_1775   chars2400 (    struct StrConcat_2385  self1301 ) {
    return ( (  into_dash_iter2401 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_2388   into_dash_iter2399 (    struct StrConcat_2384  dref1290 ) {
    return ( (struct StrConcatIter_2388) { .f_left = ( (  chars2400 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars472 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2388   chars2398 (    struct StrConcat_2384  self1301 ) {
    return ( (  into_dash_iter2399 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_2387   into_dash_iter2397 (    struct StrConcat_2383  dref1290 ) {
    return ( (struct StrConcatIter_2387) { .f_left = ( (  chars2398 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1098 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2387   chars2396 (    struct StrConcat_2383  self1301 ) {
    return ( (  into_dash_iter2397 ) ( (  self1301 ) ) );
}

static  enum Unit_8   draw_dash_str2402 (    struct Screen_279 *  screen3785 ,    struct StrConcat_2383  s3787 ,    int32_t  x3789 ,    int32_t  y3791 ) {
    int32_t  w3792 = ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3785 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp158 ( (  y3791 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  y3791 ) , ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3785 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3793 = (  op_dash_add160 ( (  op_dash_mul1562 ( (  y3791 ) , (  w3792 ) ) ) , (  x3789 ) ) );
    int32_t  x3794 = ( (  min697 ) ( (  x3789 ) ,  (  w3792 ) ) );
    size_t  max_dash_len3795 = ( (  i32_dash_size423 ) ( (  op_dash_sub165 ( (  w3792 ) , (  x3794 ) ) ) ) );
    int32_t  xx3796 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2387  temp2403 =  into_dash_iter2390 ( ( (  chars2396 ) ( (  s3787 ) ) ) );
    while (true) {
        struct Maybe_300  __cond2404 =  next2391 (&temp2403);
        if (  __cond2404 .tag == 0 ) {
            break;
        }
        struct Char_65  c3798 =  __cond2404 .stuff .Maybe_300_Just_s .field0;
        ( (  put_dash_char1998 ) ( (  screen3785 ) ,  (  c3798 ) ,  (  op_dash_add160 ( (  x3794 ) , (  xx3796 ) ) ) ,  (  y3791 ) ) );
        xx3796 = (  op_dash_add160 ( (  xx3796 ) , ( (  rendered_dash_wcwidth1147 ) ( (  c3798 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2405 {
    struct StrConcat_2384  field0;
    struct StrView_30  field1;
};

static struct StrConcat_2405 StrConcat_2405_StrConcat (  struct StrConcat_2384  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_2405 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2407 {
    struct StrConcatIter_2388  f_left;
    struct StrViewIter_470  f_right;
};

static  struct StrConcatIter_2407   into_dash_iter2409 (    struct StrConcatIter_2407  self1283 ) {
    return (  self1283 );
}

static  struct Maybe_300   next2410 (    struct StrConcatIter_2407 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2392 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2408 (    struct StrConcatIter_2407  iterable1111 ,    size_t  base1113 ,    size_t (*  fun1115 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1116 = (  base1113 );
    struct StrConcatIter_2407  it1117 = ( (  into_dash_iter2409 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_300  dref1118 = ( (  next2410 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_300_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_300_Just_t ) {
                x1116 = ( (  fun1115 ) ( ( dref1118 .stuff .Maybe_300_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2411 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2411);
    abort ( );
    ( Unit_8_Unit );
    size_t  temp2412;
    return (  temp2412 );
}

static  size_t   lam2413 (    struct Char_65  dref1123 ,    size_t  x1125 ) {
    return (  op_dash_add314 ( (  x1125 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2406 (    struct StrConcatIter_2407  it1122 ) {
    return ( (  reduce2408 ) ( (  it1122 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2413 ) ) );
}

static  struct StrConcatIter_2407   into_dash_iter2415 (    struct StrConcat_2405  dref1290 ) {
    return ( (struct StrConcatIter_2407) { .f_left = ( (  chars2398 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars472 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2407   chars2414 (    struct StrConcat_2405  self1301 ) {
    return ( (  into_dash_iter2415 ) ( (  self1301 ) ) );
}

static  enum Unit_8   draw_dash_str2416 (    struct Screen_279 *  screen3785 ,    struct StrConcat_2405  s3787 ,    int32_t  x3789 ,    int32_t  y3791 ) {
    int32_t  w3792 = ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3785 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp158 ( (  y3791 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp158 ( (  y3791 ) , ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3785 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3793 = (  op_dash_add160 ( (  op_dash_mul1562 ( (  y3791 ) , (  w3792 ) ) ) , (  x3789 ) ) );
    int32_t  x3794 = ( (  min697 ) ( (  x3789 ) ,  (  w3792 ) ) );
    size_t  max_dash_len3795 = ( (  i32_dash_size423 ) ( (  op_dash_sub165 ( (  w3792 ) , (  x3794 ) ) ) ) );
    int32_t  xx3796 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2407  temp2417 =  into_dash_iter2409 ( ( (  chars2414 ) ( (  s3787 ) ) ) );
    while (true) {
        struct Maybe_300  __cond2418 =  next2410 (&temp2417);
        if (  __cond2418 .tag == 0 ) {
            break;
        }
        struct Char_65  c3798 =  __cond2418 .stuff .Maybe_300_Just_s .field0;
        ( (  put_dash_char1998 ) ( (  screen3785 ) ,  (  c3798 ) ,  (  op_dash_add160 ( (  x3794 ) , (  xx3796 ) ) ) ,  (  y3791 ) ) );
        xx3796 = (  op_dash_add160 ( (  xx3796 ) , ( (  rendered_dash_wcwidth1147 ) ( (  c3798 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1954 (   struct env277* env ,    struct Screen_279 *  screen4800 ,    struct Editor_251 *  ed4802 ) {
    struct ScreenDims_282  screen_dash_dims4803 = ( (struct ScreenDims_282) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub165 ( ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen4800 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub165 ( ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen4800 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion278  temp1955 = ( (struct envunion278){ .fun = (  enum Unit_8  (*) (  struct env204*  ,    struct Screen_279 *  ,    struct Pane_223 *  ,    struct ScreenDims_282  ,    struct Config_253 *  ) )render1956 , .env =  env->envinst204 } );
    ( temp1955.fun ( &temp1955.env ,  (  screen4800 ) ,  ( (  pane1172 ) ( (  ed4802 ) ) ) ,  (  screen_dash_dims4803 ) ,  ( ( * (  ed4802 ) ) .f_cfg ) ) );
    struct env2379 envinst2379 = {
        .screen4800 =  screen4800 ,
    };
    ( (  if_dash_just2378 ) ( ( ( * (  ed4802 ) ) .f_msg ) ,  ( (struct envunion2380){ .fun = (  enum Unit_8  (*) (  struct env2379*  ,    struct StrView_30  ) )lam2382 , .env =  envinst2379 } ) ) );
    struct EditorMode_252  dref4807 = ( ( * (  ed4802 ) ) .f_mode );
    if ( dref4807.tag == EditorMode_252_Normal_t ) {
    }
    else {
        if ( dref4807.tag == EditorMode_252_Cmd_t ) {
            int32_t  num_dash_chars4809 = ( (  size_dash_i32332 ) ( ( (  count1142 ) ( ( (  chars1742 ) ( ( dref4807 .stuff .EditorMode_252_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_30  pad4810 = ( (  eq597 ( ( (  mod1560 ) ( (  num_dash_chars4809 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike543 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4811 = (  op_dash_add160 ( (  num_dash_chars4809 ) , ( (  mod1560 ) ( (  num_dash_chars4809 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
            struct StrConcat_2383  full_dash_str4812 = ( ( StrConcat_2383_StrConcat ) ( ( ( StrConcat_2384_StrConcat ) ( ( ( StrConcat_2385_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)" \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4807 .stuff .EditorMode_252_Cmd_s .field1 ) ) ) ,  (  pad4810 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4813 = ( (  size_dash_i32332 ) ( ( (  count2386 ) ( ( (  chars2396 ) ( (  full_dash_str4812 ) ) ) ) ) ) );
            ( (  draw_dash_str2402 ) ( (  screen4800 ) ,  (  full_dash_str4812 ) ,  (  op_dash_div1561 ( (  op_dash_sub165 ( ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen4800 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4813 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
        }
        else {
            if ( dref4807.tag == EditorMode_252_Search_t ) {
                int32_t  num_dash_chars4815 = ( (  size_dash_i32332 ) ( ( (  count1142 ) ( ( (  chars1742 ) ( ( dref4807 .stuff .EditorMode_252_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_30  pad4816 = ( (  eq597 ( ( (  mod1560 ) ( (  num_dash_chars4815 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string202 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike543 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4817 = (  op_dash_add160 ( (  num_dash_chars4815 ) , ( (  mod1560 ) ( (  num_dash_chars4815 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
                struct StrConcat_2405  full_dash_str4818 = ( ( StrConcat_2405_StrConcat ) ( ( ( StrConcat_2384_StrConcat ) ( ( ( StrConcat_2385_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)" \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4807 .stuff .EditorMode_252_Search_s .field1 ) ) ) ,  (  pad4816 ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4819 = ( (  size_dash_i32332 ) ( ( (  count2406 ) ( ( (  chars2414 ) ( (  full_dash_str4818 ) ) ) ) ) ) );
                ( (  draw_dash_str2416 ) ( (  screen4800 ) ,  (  full_dash_str4818 ) ,  (  op_dash_div1561 ( (  op_dash_sub165 ( ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen4800 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4819 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            }
        }
    }
    int32_t  temp2419 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4820 = ( &temp2419 );
    return ( Unit_8_Unit );
}

struct RenderState_2421 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_139  f_fg;
    struct Color_139  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2428 {
    struct StrView_30  field0;
    uint32_t  field1;
};

static struct StrConcat_2428 StrConcat_2428_StrConcat (  struct StrView_30  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2428 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2427 {
    struct StrConcat_2428  field0;
    struct Char_65  field1;
};

static struct StrConcat_2427 StrConcat_2427_StrConcat (  struct StrConcat_2428  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2427 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2426 {
    struct StrConcat_2427  field0;
    uint32_t  field1;
};

static struct StrConcat_2426 StrConcat_2426_StrConcat (  struct StrConcat_2427  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2426 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2425 {
    struct StrConcat_2426  field0;
    struct Char_65  field1;
};

static struct StrConcat_2425 StrConcat_2425_StrConcat (  struct StrConcat_2426  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2425 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2434 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2433 {
    struct StrViewIter_470  f_left;
    struct IntStrIter_2434  f_right;
};

struct StrConcatIter_2432 {
    struct StrConcatIter_2433  f_left;
    struct AppendIter_1062  f_right;
};

struct StrConcatIter_2431 {
    struct StrConcatIter_2432  f_left;
    struct IntStrIter_2434  f_right;
};

struct StrConcatIter_2430 {
    struct StrConcatIter_2431  f_left;
    struct AppendIter_1062  f_right;
};

static  struct StrConcatIter_2430   into_dash_iter2436 (    struct StrConcatIter_2430  self1283 ) {
    return (  self1283 );
}

static  struct Maybe_300   next2441 (    struct IntStrIter_2434 *  self1392 ) {
    if ( ( ( * (  self1392 ) ) .f_negative ) ) {
        (*  self1392 ) .f_negative = ( false );
        return ( ( Maybe_300_Just ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp158 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    uint32_t  trim_dash_down1393 = ( (  pow149 ) ( (  from_dash_integral166 ( 10 ) ) ,  (  op_dash_sub165 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1394 = (  op_dash_div148 ( ( ( * (  self1392 ) ) .f_int ) , (  trim_dash_down1393 ) ) );
    uint32_t  upper_dash_mask1395 = (  op_dash_mul168 ( (  op_dash_div148 ( (  upper1394 ) , (  from_dash_integral166 ( 10 ) ) ) ) , (  from_dash_integral166 ( 10 ) ) ) );
    uint8_t  digit1396 = ( ( (  cast146 ) ( (  op_dash_sub170 ( (  upper1394 ) , (  upper_dash_mask1395 ) ) ) ) ) );
    (*  self1392 ) .f_len = (  op_dash_sub165 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1397 = ( (  char_dash_from_dash_u81081 ) ( (  op_dash_add971 ( (  digit1396 ) , (  from_dash_integral311 ( 48 ) ) ) ) ) );
    return ( ( Maybe_300_Just ) ( (  digit_dash_char1397 ) ) );
}

static  struct Maybe_300   next2440 (    struct StrConcatIter_2433 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next2441 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next2439 (    struct StrConcatIter_2432 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2440 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next2438 (    struct StrConcatIter_2431 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2439 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next2441 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next2437 (    struct StrConcatIter_2430 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2438 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2429 (    struct StrConcatIter_2430  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrConcatIter_2430  temp2435 = ( (  into_dash_iter2436 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_2430 *  it1095 = ( &temp2435 );
    while ( ( true ) ) {
        struct Maybe_300  dref1096 = ( (  next2437 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_300_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2452 (    uint32_t  self1400 ) {
    if ( (  eq2354 ( (  self1400 ) , (  from_dash_integral166 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1401 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp171 ( (  self1400 ) , (  from_dash_integral166 ( 0 ) ) ) == 2 ) ) {
        self1400 = (  op_dash_div148 ( (  self1400 ) , (  from_dash_integral166 ( 10 ) ) ) );
        digits1401 = (  op_dash_add160 ( (  digits1401 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1401 );
}

static  struct IntStrIter_2434   uint_dash_iter2451 (    uint32_t  int1407 ) {
    return ( (struct IntStrIter_2434) { .f_int = (  int1407 ) , .f_len = ( (  count_dash_digits2452 ) ( (  int1407 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2434   chars2450 (    uint32_t  self1789 ) {
    return ( (  uint_dash_iter2451 ) ( (  self1789 ) ) );
}

static  struct StrConcatIter_2433   into_dash_iter2449 (    struct StrConcat_2428  dref1290 ) {
    return ( (struct StrConcatIter_2433) { .f_left = ( (  chars472 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars2450 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2433   chars2448 (    struct StrConcat_2428  self1301 ) {
    return ( (  into_dash_iter2449 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_2432   into_dash_iter2447 (    struct StrConcat_2427  dref1290 ) {
    return ( (struct StrConcatIter_2432) { .f_left = ( (  chars2448 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1098 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2432   chars2446 (    struct StrConcat_2427  self1301 ) {
    return ( (  into_dash_iter2447 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_2431   into_dash_iter2445 (    struct StrConcat_2426  dref1290 ) {
    return ( (struct StrConcatIter_2431) { .f_left = ( (  chars2446 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars2450 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2431   chars2444 (    struct StrConcat_2426  self1301 ) {
    return ( (  into_dash_iter2445 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_2430   into_dash_iter2443 (    struct StrConcat_2425  dref1290 ) {
    return ( (struct StrConcatIter_2430) { .f_left = ( (  chars2444 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1098 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2430   chars2442 (    struct StrConcat_2425  self1301 ) {
    return ( (  into_dash_iter2443 ) ( (  self1301 ) ) );
}

static  enum Unit_8   print2424 (    struct StrConcat_2425  s1328 ) {
    ( (  for_dash_each2429 ) ( ( (  chars2442 ) ( (  s1328 ) ) ) ,  (  printf_dash_char339 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2423 (    uint32_t  x2697 ,    uint32_t  y2699 ) {
    uint32_t  x2700 = (  op_dash_add172 ( (  x2697 ) , (  from_dash_integral166 ( 1 ) ) ) );
    uint32_t  y2701 = (  op_dash_add172 ( (  y2699 ) , (  from_dash_integral166 ( 1 ) ) ) );
    ( (  print2424 ) ( ( ( StrConcat_2425_StrConcat ) ( ( ( StrConcat_2426_StrConcat ) ( ( ( StrConcat_2427_StrConcat ) ( ( ( StrConcat_2428_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[" ) ,  ( 2 ) ) ) ,  (  y2701 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  (  x2700 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_280   subslice2455 (    struct Slice_280  slice2197 ,    size_t  from2199 ,    size_t  to2201 ) {
    struct Cell_281 *  begin_dash_ptr2202 = ( (  offset_dash_ptr892 ) ( ( (  slice2197 ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  from2199 ) ) ) ) );
    if ( ( (  cmp293 ( (  from2199 ) , (  to2201 ) ) != 0 ) || (  cmp293 ( (  from2199 ) , ( (  slice2197 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_280) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2203 = (  op_dash_sub292 ( ( (  min480 ) ( (  to2201 ) ,  ( (  slice2197 ) .f_count ) ) ) , (  from2199 ) ) );
    return ( (struct Slice_280) { .f_ptr = (  begin_dash_ptr2202 ) , .f_count = (  count2203 ) } );
}

struct SliceIter_2458 {
    struct Slice_280  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2457 {
    struct SliceIter_2458  f_left_dash_it;
    struct SliceIter_2458  f_right_dash_it;
};

struct Tuple2_2459 {
    struct Cell_281  field0;
    struct Cell_281  field1;
};

static struct Tuple2_2459 Tuple2_2459_Tuple2 (  struct Cell_281  field0 ,  struct Cell_281  field1 ) {
    return ( struct Tuple2_2459 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2461 {
    bool (*  fun1153 )(    struct Tuple2_2459  );
};

struct envunion2462 {
    bool  (*fun) (  struct env2461*  ,    struct Tuple2_2459  ,    bool  );
    struct env2461 env;
};

static  struct Zip_2457   into_dash_iter2463 (    struct Zip_2457  self929 ) {
    return (  self929 );
}

struct Maybe_2464 {
    enum {
        Maybe_2464_None_t,
        Maybe_2464_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2459  field0;
        } Maybe_2464_Just_s;
    } stuff;
};

static struct Maybe_2464 Maybe_2464_Just (  struct Tuple2_2459  field0 ) {
    return ( struct Maybe_2464 ) { .tag = Maybe_2464_Just_t, .stuff = { .Maybe_2464_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_897   next2466 (    struct SliceIter_2458 *  self2249 ) {
    size_t  off2250 = ( ( * (  self2249 ) ) .f_current_dash_offset );
    if ( (  cmp293 ( (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2249 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_897) { .tag = Maybe_897_None_t } );
    }
    struct Cell_281  elem2251 = ( * ( (  offset_dash_ptr892 ) ( ( ( ( * (  self2249 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64305 ) ( (  off2250 ) ) ) ) ) );
    (*  self2249 ) .f_current_dash_offset = (  op_dash_add314 ( (  off2250 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_897_Just ) ( (  elem2251 ) ) );
}

static  struct Maybe_2464   next2465 (    struct Zip_2457 *  self932 ) {
    struct Zip_2457  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_897  dref934 = ( (  next2466 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_897_None_t ) {
            return ( (struct Maybe_2464) { .tag = Maybe_2464_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_897_Just_t ) {
                struct Maybe_897  dref936 = ( (  next2466 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_897_None_t ) {
                    return ( (struct Maybe_2464) { .tag = Maybe_2464_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_897_Just_t ) {
                        ( (  next2466 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2466 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2464_Just ) ( ( ( Tuple2_2459_Tuple2 ) ( ( dref934 .stuff .Maybe_897_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_897_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2460 (    struct Zip_2457  iterable1111 ,    bool  base1113 ,   struct envunion2462  fun1115 ) {
    bool  x1116 = (  base1113 );
    struct Zip_2457  it1117 = ( (  into_dash_iter2463 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_2464  dref1118 = ( (  next2465 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_2464_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_2464_Just_t ) {
                struct envunion2462  temp2467 = (  fun1115 );
                x1116 = ( temp2467.fun ( &temp2467.env ,  ( dref1118 .stuff .Maybe_2464_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2468 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2468);
    abort ( );
    ( Unit_8_Unit );
    bool  temp2469;
    return (  temp2469 );
}

static  bool   lam2470 (   struct env2461* env ,    struct Tuple2_2459  e1155 ,    bool  x1157 ) {
    return ( ( ( env->fun1153 ) ( (  e1155 ) ) ) || (  x1157 ) );
}

static  bool   any2456 (    struct Zip_2457  it1151 ,    bool (*  fun1153 )(    struct Tuple2_2459  ) ) {
    struct env2461 envinst2461 = {
        .fun1153 =  fun1153 ,
    };
    return ( (  reduce2460 ) ( (  it1151 ) ,  ( false ) ,  ( (struct envunion2462){ .fun = (  bool  (*) (  struct env2461*  ,    struct Tuple2_2459  ,    bool  ) )lam2470 , .env =  envinst2461 } ) ) );
}

static  struct SliceIter_2458   into_dash_iter2472 (    struct Slice_280  self2243 ) {
    return ( (struct SliceIter_2458) { .f_slice = (  self2243 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2457   zip2471 (    struct Slice_280  left940 ,    struct Slice_280  right942 ) {
    struct SliceIter_2458  left_dash_it943 = ( (  into_dash_iter2472 ) ( (  left940 ) ) );
    struct SliceIter_2458  right_dash_it944 = ( (  into_dash_iter2472 ) ( (  right942 ) ) );
    return ( (struct Zip_2457) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

struct Tuple2_2476 {
    struct Color_139  field0;
    struct Color_139  field1;
};

static struct Tuple2_2476 Tuple2_2476_Tuple2 (  struct Color_139  field0 ,  struct Color_139  field1 ) {
    return ( struct Tuple2_2476 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_140 *   cast2480 (    int32_t *  x395 ) {
    return ( (enum Color8_140 * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2478 (    enum Color8_140  x644 ) {
    int32_t  temp2479 = ( (  zeroed1043 ) ( ) );
    int32_t *  y645 = ( &temp2479 );
    enum Color8_140 *  yp646 = ( (  cast2480 ) ( (  y645 ) ) );
    (*  yp646 ) = (  x644 );
    return ( * (  y645 ) );
}

static  bool   eq2477 (    enum Color8_140  l2725 ,    enum Color8_140  r2727 ) {
    return (  eq597 ( ( ( (  cast_dash_on_dash_zeroed2478 ) ( (  l2725 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2478 ) ( (  r2727 ) ) ) ) );
}

static  enum Color16_141 *   cast2484 (    int32_t *  x395 ) {
    return ( (enum Color16_141 * ) (  x395 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2482 (    enum Color16_141  x644 ) {
    int32_t  temp2483 = ( (  zeroed1043 ) ( ) );
    int32_t *  y645 = ( &temp2483 );
    enum Color16_141 *  yp646 = ( (  cast2484 ) ( (  y645 ) ) );
    (*  yp646 ) = (  x644 );
    return ( * (  y645 ) );
}

static  bool   eq2481 (    enum Color16_141  l2731 ,    enum Color16_141  r2733 ) {
    return (  eq597 ( ( ( (  cast_dash_on_dash_zeroed2482 ) ( (  l2731 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2482 ) ( (  r2733 ) ) ) ) );
}

static  bool   eq2485 (    struct RGB_142  l2761 ,    struct RGB_142  r2763 ) {
    return ( ( (  eq306 ( ( (  l2761 ) .f_r ) , ( (  r2763 ) .f_r ) ) ) && (  eq306 ( ( (  l2761 ) .f_g ) , ( (  r2763 ) .f_g ) ) ) ) && (  eq306 ( ( (  l2761 ) .f_b ) , ( (  r2763 ) .f_b ) ) ) );
}

static  bool   eq2475 (    struct Color_139  l2783 ,    struct Color_139  r2785 ) {
    return ( {  struct Tuple2_2476  dref2786 = ( ( Tuple2_2476_Tuple2 ) ( (  l2783 ) ,  (  r2785 ) ) ) ; dref2786 .field0.tag == Color_139_ColorDefault_t && dref2786 .field1.tag == Color_139_ColorDefault_t ? ( true ) : dref2786 .field0.tag == Color_139_Color8_t && dref2786 .field1.tag == Color_139_Color8_t ? (  eq2477 ( ( dref2786 .field0 .stuff .Color_139_Color8_s .field0 ) , ( dref2786 .field1 .stuff .Color_139_Color8_s .field0 ) ) ) : dref2786 .field0.tag == Color_139_Color16_t && dref2786 .field1.tag == Color_139_Color16_t ? (  eq2481 ( ( dref2786 .field0 .stuff .Color_139_Color16_s .field0 ) , ( dref2786 .field1 .stuff .Color_139_Color16_s .field0 ) ) ) : dref2786 .field0.tag == Color_139_Color256_t && dref2786 .field1.tag == Color_139_Color256_t ? (  eq306 ( ( dref2786 .field0 .stuff .Color_139_Color256_s .field0 ) , ( dref2786 .field1 .stuff .Color_139_Color256_s .field0 ) ) ) : dref2786 .field0.tag == Color_139_ColorRGB_t && dref2786 .field1.tag == Color_139_ColorRGB_t ? (  eq2485 ( ( dref2786 .field0 .stuff .Color_139_ColorRGB_s .field0 ) , ( dref2786 .field1 .stuff .Color_139_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2474 (    struct Cell_281  l3658 ,    struct Cell_281  r3660 ) {
    if ( ( !  eq482 ( ( (  l3658 ) .f_c ) , ( (  r3660 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2475 ( ( (  l3658 ) .f_fg ) , ( (  r3660 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2475 ( ( (  l3658 ) .f_bg ) , ( (  r3660 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2473 (    struct Tuple2_2459  dref3714 ) {
    return ( !  eq2474 ( ( dref3714 .field0 ) , ( dref3714 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2488 (  ) {
    ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82489 (    enum Color8_140  color2736 ) {
    enum Color8_140  dref2737 = (  color2736 );
    switch (  dref2737 ) {
        case Color8_140_Black8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Red8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Green8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Yellow8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Blue8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Magenta8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Cyan8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_White8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162490 (    enum Color16_141  color2740 ) {
    enum Color16_141  dref2741 = (  color2740 );
    switch (  dref2741 ) {
        case Color16_141_Black16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Red16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Green16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Yellow16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Blue16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Magenta16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Cyan16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_White16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_BrightBlack16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_BrightRed16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_BrightGreen16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_BrightYellow16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_BrightBlue16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_BrightMagenta16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_BrightCyan16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_BrightWhite16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2494 {
    struct StrView_30  field0;
    uint8_t  field1;
};

static struct StrConcat_2494 StrConcat_2494_StrConcat (  struct StrView_30  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2494 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2493 {
    struct StrConcat_2494  field0;
    struct Char_65  field1;
};

static struct StrConcat_2493 StrConcat_2493_StrConcat (  struct StrConcat_2494  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2493 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2498 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2497 {
    struct StrViewIter_470  f_left;
    struct IntStrIter_2498  f_right;
};

struct StrConcatIter_2496 {
    struct StrConcatIter_2497  f_left;
    struct AppendIter_1062  f_right;
};

static  struct StrConcatIter_2496   into_dash_iter2500 (    struct StrConcatIter_2496  self1283 ) {
    return (  self1283 );
}

struct env2506 {
    uint8_t  base1379;
    ;
};

struct envunion2507 {
    uint8_t  (*fun) (  struct env2506*  ,    int32_t  ,    uint8_t  );
    struct env2506 env;
};

static  uint8_t   reduce2505 (    struct Range_151  iterable1111 ,    uint8_t  base1113 ,   struct envunion2507  fun1115 ) {
    uint8_t  x1116 = (  base1113 );
    struct RangeIter_154  it1117 = ( (  into_dash_iter155 ) ( (  iterable1111 ) ) );
    while ( ( true ) ) {
        struct Maybe_156  dref1118 = ( (  next157 ) ( ( & (  it1117 ) ) ) );
        if ( dref1118.tag == Maybe_156_None_t ) {
            return (  x1116 );
        }
        else {
            if ( dref1118.tag == Maybe_156_Just_t ) {
                struct envunion2507  temp2508 = (  fun1115 );
                x1116 = ( temp2508.fun ( &temp2508.env ,  ( dref1118 .stuff .Maybe_156_Just_s .field0 ) ,  (  x1116 ) ) );
            }
        }
    }
    const char*  temp2509 = ( (  from_dash_string57 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2509);
    abort ( );
    ( Unit_8_Unit );
    uint8_t  temp2510;
    return (  temp2510 );
}

static  uint8_t   op_dash_mul2512 (    uint8_t  l279 ,    uint8_t  r281 ) {
    return ( (  l279 ) * (  r281 ) );
}

static  uint8_t   lam2511 (   struct env2506* env ,    int32_t  item1383 ,    uint8_t  x1385 ) {
    return (  op_dash_mul2512 ( (  x1385 ) , ( env->base1379 ) ) );
}

static  uint8_t   pow2504 (    uint8_t  base1379 ,    int32_t  p1381 ) {
    struct env2506 envinst2506 = {
        .base1379 =  base1379 ,
    };
    return ( (  reduce2505 ) ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( (  p1381 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral311 ( 1 ) ) ,  ( (struct envunion2507){ .fun = (  uint8_t  (*) (  struct env2506*  ,    int32_t  ,    uint8_t  ) )lam2511 , .env =  envinst2506 } ) ) );
}

static  uint8_t   op_dash_div2513 (    uint8_t  l284 ,    uint8_t  r286 ) {
    return ( (  l284 ) / (  r286 ) );
}

static  uint8_t   cast2514 (    uint8_t  x395 ) {
    return ( (uint8_t ) (  x395 ) );
}

static  struct Maybe_300   next2503 (    struct IntStrIter_2498 *  self1392 ) {
    if ( ( ( * (  self1392 ) ) .f_negative ) ) {
        (*  self1392 ) .f_negative = ( false );
        return ( ( Maybe_300_Just ) ( ( (  from_dash_charlike357 ) ( ( (uint8_t*)"-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp158 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_300) { .tag = Maybe_300_None_t } );
    }
    uint8_t  trim_dash_down1393 = ( (  pow2504 ) ( (  from_dash_integral311 ( 10 ) ) ,  (  op_dash_sub165 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1394 = (  op_dash_div2513 ( ( ( * (  self1392 ) ) .f_int ) , (  trim_dash_down1393 ) ) );
    uint8_t  upper_dash_mask1395 = (  op_dash_mul2512 ( (  op_dash_div2513 ( (  upper1394 ) , (  from_dash_integral311 ( 10 ) ) ) ) , (  from_dash_integral311 ( 10 ) ) ) );
    uint8_t  digit1396 = ( ( (  cast2514 ) ( (  op_dash_sub970 ( (  upper1394 ) , (  upper_dash_mask1395 ) ) ) ) ) );
    (*  self1392 ) .f_len = (  op_dash_sub165 ( ( ( * (  self1392 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1397 = ( (  char_dash_from_dash_u81081 ) ( (  op_dash_add971 ( (  digit1396 ) , (  from_dash_integral311 ( 48 ) ) ) ) ) );
    return ( ( Maybe_300_Just ) ( (  digit_dash_char1397 ) ) );
}

static  struct Maybe_300   next2502 (    struct StrConcatIter_2497 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next475 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next2503 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next2501 (    struct StrConcatIter_2496 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2502 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2495 (    struct StrConcatIter_2496  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrConcatIter_2496  temp2499 = ( (  into_dash_iter2500 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_2496 *  it1095 = ( &temp2499 );
    while ( ( true ) ) {
        struct Maybe_300  dref1096 = ( (  next2501 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_300_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2521 (    uint8_t  self1400 ) {
    if ( (  eq306 ( (  self1400 ) , (  from_dash_integral311 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1401 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp310 ( (  self1400 ) , (  from_dash_integral311 ( 0 ) ) ) == 2 ) ) {
        self1400 = (  op_dash_div2513 ( (  self1400 ) , (  from_dash_integral311 ( 10 ) ) ) );
        digits1401 = (  op_dash_add160 ( (  digits1401 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1401 );
}

static  struct IntStrIter_2498   uint_dash_iter2520 (    uint8_t  int1407 ) {
    return ( (struct IntStrIter_2498) { .f_int = (  int1407 ) , .f_len = ( (  count_dash_digits2521 ) ( (  int1407 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2498   chars2519 (    uint8_t  self1795 ) {
    return ( (  uint_dash_iter2520 ) ( (  self1795 ) ) );
}

static  struct StrConcatIter_2497   into_dash_iter2518 (    struct StrConcat_2494  dref1290 ) {
    return ( (struct StrConcatIter_2497) { .f_left = ( (  chars472 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars2519 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2497   chars2517 (    struct StrConcat_2494  self1301 ) {
    return ( (  into_dash_iter2518 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_2496   into_dash_iter2516 (    struct StrConcat_2493  dref1290 ) {
    return ( (struct StrConcatIter_2496) { .f_left = ( (  chars2517 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1098 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2496   chars2515 (    struct StrConcat_2493  self1301 ) {
    return ( (  into_dash_iter2516 ) ( (  self1301 ) ) );
}

static  enum Unit_8   print2492 (    struct StrConcat_2493  s1328 ) {
    ( (  for_dash_each2495 ) ( ( (  chars2515 ) ( (  s1328 ) ) ) ,  (  printf_dash_char339 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562491 (    uint8_t  color2754 ) {
    ( (  print2492 ) ( ( ( StrConcat_2493_StrConcat ) ( ( ( StrConcat_2494_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2754 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2527 {
    struct StrConcat_2493  field0;
    uint8_t  field1;
};

static struct StrConcat_2527 StrConcat_2527_StrConcat (  struct StrConcat_2493  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2527 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2526 {
    struct StrConcat_2527  field0;
    struct Char_65  field1;
};

static struct StrConcat_2526 StrConcat_2526_StrConcat (  struct StrConcat_2527  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2526 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2525 {
    struct StrConcat_2526  field0;
    uint8_t  field1;
};

static struct StrConcat_2525 StrConcat_2525_StrConcat (  struct StrConcat_2526  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2525 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2524 {
    struct StrConcat_2525  field0;
    struct Char_65  field1;
};

static struct StrConcat_2524 StrConcat_2524_StrConcat (  struct StrConcat_2525  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2524 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2532 {
    struct StrConcatIter_2496  f_left;
    struct IntStrIter_2498  f_right;
};

struct StrConcatIter_2531 {
    struct StrConcatIter_2532  f_left;
    struct AppendIter_1062  f_right;
};

struct StrConcatIter_2530 {
    struct StrConcatIter_2531  f_left;
    struct IntStrIter_2498  f_right;
};

struct StrConcatIter_2529 {
    struct StrConcatIter_2530  f_left;
    struct AppendIter_1062  f_right;
};

static  struct StrConcatIter_2529   into_dash_iter2534 (    struct StrConcatIter_2529  self1283 ) {
    return (  self1283 );
}

static  struct Maybe_300   next2538 (    struct StrConcatIter_2532 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2501 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next2503 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next2537 (    struct StrConcatIter_2531 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2538 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next2536 (    struct StrConcatIter_2530 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2537 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next2503 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_300   next2535 (    struct StrConcatIter_2529 *  self1286 ) {
    struct Maybe_300  dref1287 = ( (  next2536 ) ( ( & ( ( * (  self1286 ) ) .f_left ) ) ) );
    if ( dref1287.tag == Maybe_300_Just_t ) {
        return ( ( Maybe_300_Just ) ( ( dref1287 .stuff .Maybe_300_Just_s .field0 ) ) );
    }
    else {
        if ( dref1287.tag == Maybe_300_None_t ) {
            return ( (  next1084 ) ( ( & ( ( * (  self1286 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2528 (    struct StrConcatIter_2529  iterable1092 ,    enum Unit_8 (*  fun1094 )(    struct Char_65  ) ) {
    struct StrConcatIter_2529  temp2533 = ( (  into_dash_iter2534 ) ( (  iterable1092 ) ) );
    struct StrConcatIter_2529 *  it1095 = ( &temp2533 );
    while ( ( true ) ) {
        struct Maybe_300  dref1096 = ( (  next2535 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_300_Just_t ) {
                ( (  fun1094 ) ( ( dref1096 .stuff .Maybe_300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2532   into_dash_iter2546 (    struct StrConcat_2527  dref1290 ) {
    return ( (struct StrConcatIter_2532) { .f_left = ( (  chars2515 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars2519 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2532   chars2545 (    struct StrConcat_2527  self1301 ) {
    return ( (  into_dash_iter2546 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_2531   into_dash_iter2544 (    struct StrConcat_2526  dref1290 ) {
    return ( (struct StrConcatIter_2531) { .f_left = ( (  chars2545 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1098 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2531   chars2543 (    struct StrConcat_2526  self1301 ) {
    return ( (  into_dash_iter2544 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_2530   into_dash_iter2542 (    struct StrConcat_2525  dref1290 ) {
    return ( (struct StrConcatIter_2530) { .f_left = ( (  chars2543 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars2519 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2530   chars2541 (    struct StrConcat_2525  self1301 ) {
    return ( (  into_dash_iter2542 ) ( (  self1301 ) ) );
}

static  struct StrConcatIter_2529   into_dash_iter2540 (    struct StrConcat_2524  dref1290 ) {
    return ( (struct StrConcatIter_2529) { .f_left = ( (  chars2541 ) ( ( dref1290 .field0 ) ) ) , .f_right = ( (  chars1098 ) ( ( dref1290 .field1 ) ) ) } );
}

static  struct StrConcatIter_2529   chars2539 (    struct StrConcat_2524  self1301 ) {
    return ( (  into_dash_iter2540 ) ( (  self1301 ) ) );
}

static  enum Unit_8   print2523 (    struct StrConcat_2524  s1328 ) {
    ( (  for_dash_each2528 ) ( ( (  chars2539 ) ( (  s1328 ) ) ) ,  (  printf_dash_char339 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2522 (    struct RGB_142  c2776 ) {
    ( (  print2523 ) ( ( ( StrConcat_2524_StrConcat ) ( ( ( StrConcat_2525_StrConcat ) ( ( ( StrConcat_2526_StrConcat ) ( ( ( StrConcat_2527_StrConcat ) ( ( ( StrConcat_2493_StrConcat ) ( ( ( StrConcat_2494_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2776 ) .f_r ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2776 ) .f_g ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2776 ) .f_b ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2487 (    struct Color_139  c2797 ) {
    struct Color_139  dref2798 = (  c2797 );
    if ( dref2798.tag == Color_139_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2488 ) ( ) );
    }
    else {
        if ( dref2798.tag == Color_139_Color8_t ) {
            ( (  set_dash_fg82489 ) ( ( dref2798 .stuff .Color_139_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2798.tag == Color_139_Color16_t ) {
                ( (  set_dash_fg162490 ) ( ( dref2798 .stuff .Color_139_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2798.tag == Color_139_Color256_t ) {
                    ( (  set_dash_fg2562491 ) ( ( dref2798 .stuff .Color_139_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2798.tag == Color_139_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2522 ) ( ( dref2798 .stuff .Color_139_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2548 (  ) {
    ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82549 (    enum Color8_140  color2744 ) {
    enum Color8_140  dref2745 = (  color2744 );
    switch (  dref2745 ) {
        case Color8_140_Black8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Red8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Green8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Yellow8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Blue8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Magenta8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_Cyan8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_140_White8 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162550 (    enum Color16_141  color2748 ) {
    enum Color16_141  dref2749 = (  color2748 );
    switch (  dref2749 ) {
        case Color16_141_Black16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Red16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Green16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Yellow16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Blue16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Magenta16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_Cyan16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_White16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_141_BrightBlack16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_141_BrightRed16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_141_BrightGreen16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_141_BrightYellow16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_141_BrightBlue16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_141_BrightMagenta16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_141_BrightCyan16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_141_BrightWhite16 : {
            ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562551 (    uint8_t  color2757 ) {
    ( (  print2492 ) ( ( ( StrConcat_2493_StrConcat ) ( ( ( StrConcat_2494_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2757 ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2552 (    struct RGB_142  c2779 ) {
    ( (  print2523 ) ( ( ( StrConcat_2524_StrConcat ) ( ( ( StrConcat_2525_StrConcat ) ( ( ( StrConcat_2526_StrConcat ) ( ( ( StrConcat_2527_StrConcat ) ( ( ( StrConcat_2493_StrConcat ) ( ( ( StrConcat_2494_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2779 ) .f_r ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2779 ) .f_g ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2779 ) .f_b ) ) ) ,  ( (  from_dash_charlike357 ) ( ( (uint8_t*)"m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2547 (    struct Color_139  c2805 ) {
    struct Color_139  dref2806 = (  c2805 );
    if ( dref2806.tag == Color_139_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2548 ) ( ) );
    }
    else {
        if ( dref2806.tag == Color_139_Color8_t ) {
            ( (  set_dash_bg82549 ) ( ( dref2806 .stuff .Color_139_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2806.tag == Color_139_Color16_t ) {
                ( (  set_dash_bg162550 ) ( ( dref2806 .stuff .Color_139_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2806.tag == Color_139_Color256_t ) {
                    ( (  set_dash_bg2562551 ) ( ( dref2806 .stuff .Color_139_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2806.tag == Color_139_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2552 ) ( ( dref2806 .stuff .Color_139_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322553 (    int32_t  x674 ) {
    return ( (uint32_t ) (  x674 ) );
}

static  enum Unit_8   emit_dash_cell2486 (    struct RenderState_2421 *  rs3690 ,    struct Cell_281 *  c3692 ,    uint32_t  x3694 ,    uint32_t  y3696 ) {
    if ( ( ( !  eq2354 ( (  x3694 ) , ( ( * (  rs3690 ) ) .f_x ) ) ) || ( !  eq2354 ( (  y3696 ) , ( ( * (  rs3690 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2423 ) ( (  x3694 ) ,  (  y3696 ) ) );
        (*  rs3690 ) .f_x = (  x3694 );
        (*  rs3690 ) .f_y = (  y3696 );
    }
    struct Char_65  char3697 = ( ( * (  c3692 ) ) .f_c );
    struct Color_139  bg3698 = ( ( * (  c3692 ) ) .f_bg );
    if ( (  eq597 ( ( ( * (  c3692 ) ) .f_char_dash_width ) , (  op_dash_neg843 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3697 = ( (  from_dash_charlike357 ) ( ( (uint8_t*)" " ) ,  ( 1 ) ) );
        bg3698 = ( ( Color_139_Color8 ) ( ( Color8_140_Red8 ) ) );
    }
    if ( ( !  eq2475 ( ( ( * (  rs3690 ) ) .f_fg ) , ( ( * (  c3692 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2487 ) ( ( ( * (  c3692 ) ) .f_fg ) ) );
        (*  rs3690 ) .f_fg = ( ( * (  c3692 ) ) .f_fg );
    }
    if ( ( !  eq2475 ( ( ( * (  rs3690 ) ) .f_bg ) , (  bg3698 ) ) ) ) {
        ( (  set_dash_bg2547 ) ( (  bg3698 ) ) );
        (*  rs3690 ) .f_bg = (  bg3698 );
    }
    ( (  print_dash_str338 ) ( (  char3697 ) ) );
    uint32_t  char_dash_width3699 = ( (  i32_dash_u322553 ) ( ( (  max1148 ) ( ( ( * (  c3692 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3690 ) .f_x = (  op_dash_add172 ( ( ( * (  rs3690 ) ) .f_x ) , (  char_dash_width3699 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2556 {
    struct SliceIter_2458  f_left_dash_it;
    struct FromIter_427  f_right_dash_it;
};

struct env2557 {
    struct Slice_280  dest2274;
    ;
    ;
};

struct Tuple2_2559 {
    struct Cell_281  field0;
    int32_t  field1;
};

static struct Tuple2_2559 Tuple2_2559_Tuple2 (  struct Cell_281  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2559 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2558 {
    enum Unit_8  (*fun) (  struct env2557*  ,    struct Tuple2_2559  );
    struct env2557 env;
};

static  struct Zip_2556   into_dash_iter2561 (    struct Zip_2556  self929 ) {
    return (  self929 );
}

struct Maybe_2562 {
    enum {
        Maybe_2562_None_t,
        Maybe_2562_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2559  field0;
        } Maybe_2562_Just_s;
    } stuff;
};

static struct Maybe_2562 Maybe_2562_Just (  struct Tuple2_2559  field0 ) {
    return ( struct Maybe_2562 ) { .tag = Maybe_2562_Just_t, .stuff = { .Maybe_2562_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2562   next2563 (    struct Zip_2556 *  self932 ) {
    struct Zip_2556  copy933 = ( * (  self932 ) );
    while ( ( true ) ) {
        struct Maybe_897  dref934 = ( (  next2466 ) ( ( & ( (  copy933 ) .f_left_dash_it ) ) ) );
        if ( dref934.tag == Maybe_897_None_t ) {
            return ( (struct Maybe_2562) { .tag = Maybe_2562_None_t } );
        }
        else {
            if ( dref934.tag == Maybe_897_Just_t ) {
                struct Maybe_156  dref936 = ( (  next433 ) ( ( & ( (  copy933 ) .f_right_dash_it ) ) ) );
                if ( dref936.tag == Maybe_156_None_t ) {
                    return ( (struct Maybe_2562) { .tag = Maybe_2562_None_t } );
                }
                else {
                    if ( dref936.tag == Maybe_156_Just_t ) {
                        ( (  next2466 ) ( ( & ( ( * (  self932 ) ) .f_left_dash_it ) ) ) );
                        ( (  next433 ) ( ( & ( ( * (  self932 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2562_Just ) ( ( ( Tuple2_2559_Tuple2 ) ( ( dref934 .stuff .Maybe_897_Just_s .field0 ) ,  ( dref936 .stuff .Maybe_156_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2555 (    struct Zip_2556  iterable1092 ,   struct envunion2558  fun1094 ) {
    struct Zip_2556  temp2560 = ( (  into_dash_iter2561 ) ( (  iterable1092 ) ) );
    struct Zip_2556 *  it1095 = ( &temp2560 );
    while ( ( true ) ) {
        struct Maybe_2562  dref1096 = ( (  next2563 ) ( (  it1095 ) ) );
        if ( dref1096.tag == Maybe_2562_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1096.tag == Maybe_2562_Just_t ) {
                struct envunion2558  temp2564 = (  fun1094 );
                ( temp2564.fun ( &temp2564.env ,  ( dref1096 .stuff .Maybe_2562_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2556   zip2565 (    struct Slice_280  left940 ,    struct FromIter_427  right942 ) {
    struct SliceIter_2458  left_dash_it943 = ( (  into_dash_iter2472 ) ( (  left940 ) ) );
    struct FromIter_427  right_dash_it944 = ( (  into_dash_iter437 ) ( (  right942 ) ) );
    return ( (struct Zip_2556) { .f_left_dash_it = (  left_dash_it943 ) , .f_right_dash_it = (  right_dash_it944 ) } );
}

static  enum Unit_8   lam2566 (   struct env2557* env ,    struct Tuple2_2559  dref2275 ) {
    return ( (  set890 ) ( ( env->dest2274 ) ,  ( (  i32_dash_size423 ) ( ( dref2275 .field1 ) ) ) ,  ( dref2275 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2554 (    struct Slice_280  src2272 ,    struct Slice_280  dest2274 ) {
    if ( (  cmp293 ( ( (  src2272 ) .f_count ) , ( (  dest2274 ) .f_count ) ) == 2 ) ) {
        ( (  panic551 ) ( ( ( StrConcat_552_StrConcat ) ( ( ( StrConcat_325_StrConcat ) ( ( ( StrConcat_78_StrConcat ) ( ( ( StrConcat_79_StrConcat ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2272 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2274 ) .f_count ) ) ) ,  ( (  from_dash_string202 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2557 envinst2557 = {
        .dest2274 =  dest2274 ,
    };
    ( (  for_dash_each2555 ) ( ( (  zip2565 ) ( (  src2272 ) ,  ( (  from438 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2558){ .fun = (  enum Unit_8  (*) (  struct env2557*  ,    struct Tuple2_2559  ) )lam2566 , .env =  envinst2557 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2420 (    struct Screen_279 *  screen3702 ) {
    int32_t  w3703 = ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3702 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3704 = ( (  u32_dash_i321942 ) ( ( ( * ( ( * (  screen3702 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2421  temp2422 = ( (struct RenderState_2421) { .f_x = (  from_dash_integral166 ( 0 ) ) , .f_y = (  from_dash_integral166 ( 0 ) ) , .f_fg = ( (struct Color_139) { .tag = Color_139_ColorDefault_t } ) , .f_bg = ( (struct Color_139) { .tag = Color_139_ColorDefault_t } ) , .f_changes = (  from_dash_integral166 ( 0 ) ) } );
    struct RenderState_2421 *  rs3705 = ( &temp2422 );
    ( (  move_dash_cursor_dash_to2423 ) ( (  from_dash_integral166 ( 0 ) ) ,  (  from_dash_integral166 ( 0 ) ) ) );
    struct RangeIter_154  temp2453 =  into_dash_iter155 ( ( (  to164 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub165 ( (  h3704 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_156  __cond2454 =  next157 (&temp2453);
        if (  __cond2454 .tag == 0 ) {
            break;
        }
        int32_t  y3707 =  __cond2454 .stuff .Maybe_156_Just_s .field0;
        int32_t  x_dash_v3708 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp158 ( (  x_dash_v3708 ) , (  w3703 ) ) == 0 ) ) {
            size_t  i3709 = ( (  i32_dash_size423 ) ( (  op_dash_add160 ( (  op_dash_mul1562 ( (  y3707 ) , (  w3703 ) ) ) , (  x_dash_v3708 ) ) ) ) );
            struct Cell_281 *  cur3710 = ( (  get_dash_ptr891 ) ( ( ( * (  screen3702 ) ) .f_current ) ,  (  i3709 ) ) );
            int32_t  char_dash_width3711 = ( (  max1148 ) ( ( ( * (  cur3710 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_280  curs3712 = ( (  subslice2455 ) ( ( ( * (  screen3702 ) ) .f_current ) ,  (  i3709 ) ,  (  op_dash_add314 ( (  i3709 ) , ( (  i32_dash_size423 ) ( (  char_dash_width3711 ) ) ) ) ) ) );
            struct Slice_280  prevs3713 = ( (  subslice2455 ) ( ( ( * (  screen3702 ) ) .f_previous ) ,  (  i3709 ) ,  (  op_dash_add314 ( (  i3709 ) , ( (  i32_dash_size423 ) ( (  char_dash_width3711 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3702 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2456 ) ( ( (  zip2471 ) ( (  curs3712 ) ,  (  prevs3713 ) ) ) ,  (  lam2473 ) ) ) ) ) {
                (*  rs3705 ) .f_changes = (  op_dash_add172 ( ( ( * (  rs3705 ) ) .f_changes ) , (  from_dash_integral166 ( 1 ) ) ) );
                ( (  emit_dash_cell2486 ) ( (  rs3705 ) ,  (  cur3710 ) ,  ( (  i32_dash_u322553 ) ( (  x_dash_v3708 ) ) ) ,  ( (  i32_dash_u322553 ) ( (  y3707 ) ) ) ) );
                ( (  copy_dash_to2554 ) ( (  curs3712 ) ,  (  prevs3713 ) ) );
            }
            x_dash_v3708 = (  op_dash_add160 ( (  x_dash_v3708 ) , (  char_dash_width3711 ) ) );
        }
    }
    (*  screen3702 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors817 ) ( ) );
    ( (  flush_dash_stdout820 ) ( ) );
    return ( ( * (  rs3705 ) ) .f_changes );
}

static  void *   cast_dash_ptr2573 (    struct timespec * *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  size_t   size_dash_of2574 (    struct timespec *  x389 ) {
    return ( sizeof( (  x389 ) ) );
}

static  struct timespec *   zeroed2571 (  ) {
    struct timespec *  temp2572;
    struct timespec *  x641 = (  temp2572 );
    ( ( memset ) ( ( (  cast_dash_ptr2573 ) ( ( & (  x641 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2574 ) ( (  x641 ) ) ) ) );
    return (  x641 );
}

static  struct timespec *   null_dash_ptr2570 (  ) {
    return ( (  zeroed2571 ) ( ) );
}

static  enum Unit_8   sync2567 (    struct Tui_91 *  tui3573 ) {
    if ( (  eq2354 ( ( ( * (  tui3573 ) ) .f_target_dash_fps ) , (  from_dash_integral166 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3574 = (  op_dash_div1078 ( (  from_dash_integral291 ( 1000000000 ) ) , ( (  size_dash_i64305 ) ( ( (  u32_dash_size875 ) ( ( ( * (  tui3573 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2568 = ( (  undefined856 ) ( ) );
    struct timespec *  now3575 = ( &temp2568 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic858 ) ( ) ) ,  (  now3575 ) ) );
    int64_t  elapsed_dash_ns3576 = (  op_dash_add487 ( (  op_dash_mul289 ( (  op_dash_sub1080 ( ( ( * (  now3575 ) ) .tv_sec ) , ( ( ( * (  tui3573 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral291 ( 1000000000 ) ) ) ) , (  op_dash_sub1080 ( ( ( * (  now3575 ) ) .tv_nsec ) , ( ( ( * (  tui3573 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3577 = (  op_dash_sub1080 ( (  frame_dash_ns3574 ) , (  elapsed_dash_ns3576 ) ) );
    if ( (  cmp1094 ( (  sleep_dash_ns3577 ) , (  from_dash_integral291 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2569 = ( (struct timespec) { .tv_sec = (  from_dash_integral291 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3577 ) } );
        struct timespec *  ts3578 = ( &temp2569 );
        ( ( nanosleep ) ( (  ts3578 ) ,  ( (  null_dash_ptr2570 ) ( ) ) ) );
    }
    struct timespec  temp2575 = ( (  undefined856 ) ( ) );
    struct timespec *  last_dash_sync3579 = ( &temp2575 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic858 ) ( ) ) ,  (  last_dash_sync3579 ) ) );
    (*  tui3573 ) .f_last_dash_sync = ( * (  last_dash_sync3579 ) );
    (*  tui3573 ) .f_fps_dash_count = (  op_dash_add172 ( ( ( * (  tui3573 ) ) .f_fps_dash_count ) , (  from_dash_integral166 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3580 = (  op_dash_add487 ( (  op_dash_mul289 ( (  op_dash_sub1080 ( ( ( ( * (  tui3573 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3573 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral291 ( 1000 ) ) ) ) , (  op_dash_div1078 ( (  op_dash_sub1080 ( ( ( ( * (  tui3573 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3573 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral291 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1094 ( (  fps_dash_elapsed_dash_ms3580 ) , (  from_dash_integral291 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3573 ) .f_actual_dash_fps = ( ( * (  tui3573 ) ) .f_fps_dash_count );
        (*  tui3573 ) .f_fps_dash_count = (  from_dash_integral166 ( 0 ) );
        (*  tui3573 ) .f_fps_dash_ts = ( ( * (  tui3573 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2578 (    struct Cell_281 *  p398 ) {
    return ( (void * ) (  p398 ) );
}

static  enum Unit_8   free2577 (    enum CAllocator_10  dref2366 ,    struct Slice_280  slice2368 ) {
    if (!(  dref2366 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr2578 ) ( ( (  slice2368 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2576 (    struct Screen_279 *  screen3678 ) {
    enum CAllocator_10  al3679 = ( ( * (  screen3678 ) ) .f_al );
    ( (  free2577 ) ( (  al3679 ) ,  ( ( * (  screen3678 ) ) .f_current ) ) );
    ( (  free2577 ) ( (  al3679 ) ,  ( ( * (  screen3678 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2580 (  ) {
    ( (  print_dash_str331 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2581 (  ) {
    ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2582 (  ) {
    ( (  print814 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2583 (    struct Termios_93 *  og_dash_termios3553 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno749 ) ( ) ) ,  ( (  tcsa_dash_flush812 ) ( ) ) ,  ( (  cast_dash_ptr750 ) ( (  og_dash_termios3553 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2579 (    struct Tui_91 *  tui3583 ) {
    ( (  disable_dash_mouse2580 ) ( ) );
    ( (  show_dash_cursor2581 ) ( ) );
    ( (  reset_dash_colors817 ) ( ) );
    ( (  clear_dash_screen818 ) ( ) );
    ( (  reset_dash_cursor_dash_position2582 ) ( ) );
    ( (  disable_dash_raw_dash_mode2583 ) ( ( & ( ( * (  tui3583 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout820 ) ( ) );
    return ( Unit_8_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2440 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2441 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2442 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2441 =  growth_dash_factor2441 ,
        .starting_dash_size2440 =  starting_dash_size2440 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2441 =  growth_dash_factor2441 ,
        .starting_dash_size2440 =  starting_dash_size2440 ,
    };
    struct env3 envinst3 = {
        .growth_dash_factor2441 =  growth_dash_factor2441 ,
        .starting_dash_size2440 =  starting_dash_size2440 ,
    };
    struct env4 envinst4 = {
        .growth_dash_factor2441 =  growth_dash_factor2441 ,
        .starting_dash_size2440 =  starting_dash_size2440 ,
    };
    struct env5 envinst5 = {
        .growth_dash_factor2441 =  growth_dash_factor2441 ,
        .starting_dash_size2440 =  starting_dash_size2440 ,
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
    struct env33 envinst33 = {
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
        .shrink_dash_factor2442 =  shrink_dash_factor2442 ,
    };
    struct env41 envinst41 = {
        .shrink_dash_factor2442 =  shrink_dash_factor2442 ,
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
        .envinst66 = envinst66 ,
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
        .envinst67 = envinst67 ,
    };
    struct env82 envinst82 = {
        .envinst60 = envinst60 ,
        .envinst68 = envinst68 ,
    };
    bool  temp86 = ( false );
    bool *  should_dash_resize3563 = ( &temp86 );
    struct env87 envinst87 = {
        .should_dash_resize3563 =  should_dash_resize3563 ,
    };
    struct env88 envinst88 = {
        .should_dash_resize3563 =  should_dash_resize3563 ,
    };
    struct env89 envinst89 = {
        .envinst88 = envinst88 ,
    };
    struct env95 envinst95 = {
        .envinst88 = envinst88 ,
    };
    struct env97 envinst97 = {
        .envinst53 = envinst53 ,
        .envinst37 = envinst37 ,
        .envinst48 = envinst48 ,
    };
    struct env101 envinst101 = {
        .envinst48 = envinst48 ,
        .envinst97 = envinst97 ,
        .envinst40 = envinst40 ,
        .envinst41 = envinst41 ,
        .envinst6 = envinst6 ,
    };
    struct env111 envinst111 = {
        .envinst69 = envinst69 ,
    };
    struct env113 envinst113 = {
        .envinst50 = envinst50 ,
    };
    struct env115 envinst115 = {
        .envinst113 = envinst113 ,
        .envinst101 = envinst101 ,
    };
    struct env118 envinst118 = {
        .envinst101 = envinst101 ,
    };
    struct env120 envinst120 = {
        .envinst101 = envinst101 ,
    };
    struct env122 envinst122 = {
        .envinst118 = envinst118 ,
    };
    struct env124 envinst124 = {
        .envinst120 = envinst120 ,
    };
    struct env126 envinst126 = {
        .envinst48 = envinst48 ,
    };
    struct env128 envinst128 = {
        .envinst126 = envinst126 ,
        .envinst120 = envinst120 ,
        .envinst33 = envinst33 ,
        .envinst21 = envinst21 ,
    };
    struct env133 envinst133 = {
        .envinst21 = envinst21 ,
    };
    struct env135 envinst135 = {
        .envinst35 = envinst35 ,
    };
    struct env137 envinst137 = {
        .envinst135 = envinst135 ,
    };
    struct Color_139  camel4247 = ( (  rgb143 ) ( (  from_dash_integral166 ( 11766360 ) ) ) );
    struct Color_139  olive4248 = ( (  rgb143 ) ( (  from_dash_integral166 ( 7303983 ) ) ) );
    struct Color_139  tea_dash_green4249 = ( (  rgb143 ) ( (  from_dash_integral166 ( 14875064 ) ) ) );
    struct Color_139  chocolate4250 = ( (  rgb143 ) ( (  from_dash_integral166 ( 13721620 ) ) ) );
    struct Color_139  muted_dash_olive4251 = ( (  rgb143 ) ( (  from_dash_integral166 ( 12308106 ) ) ) );
    struct Color_139  palm_dash_leaf4252 = ( (  rgb143 ) ( (  from_dash_integral166 ( 9674588 ) ) ) );
    struct Color_139  lime_dash_green4253 = ( (  rgb143 ) ( (  from_dash_integral166 ( 3263232 ) ) ) );
    struct Color_139  forest_dash_green4254 = ( (  rgb143 ) ( (  from_dash_integral166 ( 1153058 ) ) ) );
    struct Color_139  green4255 = ( (  rgb143 ) ( (  from_dash_integral166 ( 2781729 ) ) ) );
    struct Color_139  dark_dash_spruce4256 = ( (  rgb143 ) ( (  from_dash_integral166 ( 1983518 ) ) ) );
    struct Color_139  evergreen4257 = ( (  rgb143 ) ( (  from_dash_integral166 ( 1386004 ) ) ) );
    struct Array_180  temp184 = ( (struct Array_180) { ._arr = { ( (  hlt185 ) ( ( HighlightType_18_Number ) ,  (  green4255 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_String ) ,  (  camel4247 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_Comment ) ,  (  dark_dash_spruce4256 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_Ident1 ) ,  (  lime_dash_green4253 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_Ident2 ) ,  (  muted_dash_olive4251 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_Ident3 ) ,  (  tea_dash_green4249 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_Ident4 ) ,  (  palm_dash_leaf4252 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_Keyword1 ) ,  (  tea_dash_green4249 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_Keyword2 ) ,  (  chocolate4250 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_Special1 ) ,  (  olive4248 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_Special2 ) ,  (  forest_dash_green4254 ) ) ) , ( (  hlt185 ) ( ( HighlightType_18_Special3 ) ,  (  camel4247 ) ) ) , ( (struct HighlightColors_176) { .f_type = ( HighlightType_18_Invalid ) , .f_fg = (  evergreen4257 ) , .f_bg = ( ( Maybe_177_Just ) ( ( ( Color_139_Color8 ) ( ( Color8_140_Red8 ) ) ) ) ) } ) } } );
    struct Array_180  temp182 = ( (  from_dash_listlike183 ) ( ( &temp184 ) ) );
    struct Theme_173  temp178 = ( (struct Theme_173) { .f_default = ( (struct Colors_174) { .f_bg = (  evergreen4257 ) , .f_fg = (  lime_dash_green4253 ) } ) , .f_cursor = ( (struct Colors_174) { .f_bg = (  lime_dash_green4253 ) , .f_fg = (  evergreen4257 ) } ) , .f_selection = ( (struct Colors_174) { .f_bg = (  forest_dash_green4254 ) , .f_fg = (  evergreen4257 ) } ) , .f_line_dash_num = ( (struct Colors_174) { .f_bg = (  evergreen4257 ) , .f_fg = (  forest_dash_green4254 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_174) { .f_bg = (  evergreen4257 ) , .f_fg = (  tea_dash_green4249 ) } ) , .f_overlay = ( (struct Colors_174) { .f_bg = (  dark_dash_spruce4256 ) , .f_fg = (  lime_dash_green4253 ) } ) , .f_highlights = ( (  as_dash_slice179 ) ( ( &temp182 ) ) ) } );
    struct Theme_173 *  goblin_dash_ultra4258 = ( &temp178 );
    struct Theme_173  temp186 = ( (struct Theme_173) { .f_default = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color8 ) ( ( Color8_140_Black8 ) ) ) , .f_fg = ( ( Color_139_Color8 ) ( ( Color8_140_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color8 ) ( ( Color8_140_White8 ) ) ) , .f_fg = ( ( Color_139_Color8 ) ( ( Color8_140_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color16 ) ( ( Color16_141_BrightWhite16 ) ) ) , .f_fg = ( ( Color_139_Color16 ) ( ( Color16_141_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color8 ) ( ( Color8_140_Black8 ) ) ) , .f_fg = ( ( Color_139_Color8 ) ( ( Color8_140_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color8 ) ( ( Color8_140_White8 ) ) ) , .f_fg = ( ( Color_139_Color8 ) ( ( Color8_140_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color8 ) ( ( Color8_140_White8 ) ) ) , .f_fg = ( ( Color_139_Color8 ) ( ( Color8_140_Black8 ) ) ) } ) , .f_highlights = ( (  empty187 ) ( ) ) } );
    struct Theme_173 *  dark_dash_theme4259 = ( &temp186 );
    struct Theme_173  temp193 = ( (struct Theme_173) { .f_default = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color16 ) ( ( Color16_141_BrightWhite16 ) ) ) , .f_fg = ( ( Color_139_Color8 ) ( ( Color8_140_Black8 ) ) ) } ) , .f_cursor = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color8 ) ( ( Color8_140_Black8 ) ) ) , .f_fg = ( ( Color_139_Color16 ) ( ( Color16_141_BrightWhite16 ) ) ) } ) , .f_selection = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color16 ) ( ( Color16_141_White16 ) ) ) , .f_fg = ( ( Color_139_Color16 ) ( ( Color16_141_BrightWhite16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color16 ) ( ( Color16_141_BrightWhite16 ) ) ) , .f_fg = ( ( Color_139_Color8 ) ( ( Color8_140_Black8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color8 ) ( ( Color8_140_Black8 ) ) ) , .f_fg = ( ( Color_139_Color16 ) ( ( Color16_141_BrightWhite16 ) ) ) } ) , .f_overlay = ( (struct Colors_174) { .f_bg = ( ( Color_139_Color8 ) ( ( Color8_140_Black8 ) ) ) , .f_fg = ( ( Color_139_Color16 ) ( ( Color16_141_BrightWhite16 ) ) ) } ) , .f_highlights = ( (  empty187 ) ( ) ) } );
    struct Theme_173 *  light_dash_theme4260 = ( &temp193 );
    struct Theme_173 *  default4261 = (  goblin_dash_ultra4258 );
    struct Array_197  temp201 = ( (struct Array_197) { ._arr = { ( ( Tuple2_195_Tuple2 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"default" ) ,  ( 7 ) ) ) ,  (  default4261 ) ) ) , ( ( Tuple2_195_Tuple2 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra4258 ) ) ) , ( ( Tuple2_195_Tuple2 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme4259 ) ) ) , ( ( Tuple2_195_Tuple2 ) ( ( (  from_dash_string202 ) ( ( (uint8_t*)"light-mono" ) ,  ( 10 ) ) ) ,  (  light_dash_theme4260 ) ) ) } } );
    struct Array_197  temp199 = ( (  from_dash_listlike200 ) ( ( &temp201 ) ) );
    struct Slice_194  all_dash_themes4262 = ( (  as_dash_slice196 ) ( ( &temp199 ) ) );
    struct env203 envinst203 = {
        .all_dash_themes4262 =  all_dash_themes4262 ,
    };
    struct env204 envinst204 = {
        .envinst137 = envinst137 ,
    };
    struct env207 envinst207 = {
        .envinst128 = envinst128 ,
    };
    struct env210 envinst210 = {
        .envinst128 = envinst128 ,
    };
    struct env212 envinst212 = {
        .envinst122 = envinst122 ,
    };
    struct env214 envinst214 = {
        .envinst124 = envinst124 ,
    };
    struct env216 envinst216 = {
        .envinst128 = envinst128 ,
    };
    struct env218 envinst218 = {
        .envinst128 = envinst128 ,
    };
    struct env220 envinst220 = {
        .envinst133 = envinst133 ,
        .envinst218 = envinst218 ,
    };
    struct env226 envinst226 = {
        .envinst128 = envinst128 ,
        .envinst133 = envinst133 ,
    };
    struct env229 envinst229 = {
        .envinst218 = envinst218 ,
    };
    struct env231 envinst231 = {
        .envinst216 = envinst216 ,
        .envinst133 = envinst133 ,
        .envinst207 = envinst207 ,
    };
    struct env236 envinst236 = {
        .envinst126 = envinst126 ,
    };
    struct env238 envinst238 = {
        .envinst75 = envinst75 ,
    };
    struct env240 envinst240 = {
        .envinst80 = envinst80 ,
    };
    struct env242 envinst242 = {
        .envinst82 = envinst82 ,
    };
    struct env244 envinst244 = {
        .envinst203 = envinst203 ,
    };
    struct env247 envinst247 = {
        .envinst111 = envinst111 ,
        .envinst240 = envinst240 ,
        .envinst242 = envinst242 ,
        .envinst238 = envinst238 ,
    };
    struct env256 envinst256 = {
        .envinst216 = envinst216 ,
        .envinst226 = envinst226 ,
        .envinst207 = envinst207 ,
        .envinst220 = envinst220 ,
        .envinst236 = envinst236 ,
        .envinst212 = envinst212 ,
        .envinst214 = envinst214 ,
        .envinst229 = envinst229 ,
        .envinst238 = envinst238 ,
        .envinst231 = envinst231 ,
    };
    struct env267 envinst267 = {
        .envinst210 = envinst210 ,
        .envinst60 = envinst60 ,
        .envinst72 = envinst72 ,
        .envinst229 = envinst229 ,
        .envinst256 = envinst256 ,
        .envinst247 = envinst247 ,
        .envinst207 = envinst207 ,
        .envinst244 = envinst244 ,
    };
    struct env277 envinst277 = {
        .envinst204 = envinst204 ,
    };
    enum CAllocator_10  al4824 = ( (  idc283 ) ( ) );
    struct TextBuf_104  temp285;
    struct TextBuf_104  temp284 = (  temp285 );
    struct TextBuf_104 *  tb4825 = ( &temp284 );
    struct Slice_286  args4828 = ( (  get287 ) ( ) );
    struct Maybe_85  initial_dash_message4829 = ( (struct Maybe_85) { .tag = Maybe_85_None_t } );
    if ( (  cmp293 ( ( (  args4828 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_30  fname4830 = ( (  from_dash_const_dash_str294 ) ( (  elem_dash_get320 ( (  args4828 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion365  temp364 = ( (struct envunion365){ .fun = (  struct Maybe_363  (*) (  struct env115*  ,    enum CAllocator_10  ,    struct StrView_30  ) )mk_dash_from_dash_file366 , .env =  envinst115 } );
        struct Maybe_363  dref4831 = ( temp364.fun ( &temp364.env ,  (  al4824 ) ,  (  fname4830 ) ) );
        if ( dref4831.tag == Maybe_363_None_t ) {
            struct envunion735  temp734 = ( (struct envunion735){ .fun = (  struct TextBuf_104  (*) (  struct env113*  ,    enum CAllocator_10  ) )mk369 , .env =  envinst113 } );
            (*  tb4825 ) = ( temp734.fun ( &temp734.env ,  (  al4824 ) ) );
            (*  tb4825 ) .f_filename = ( ( Maybe_85_Just ) ( ( (  clone_dash_0544 ) ( (  fname4830 ) ,  (  al4824 ) ) ) ) );
        }
        else {
            if ( dref4831.tag == Maybe_363_Just_t ) {
                (*  tb4825 ) = ( dref4831 .stuff .Maybe_363_Just_s .field0 );
            }
        }
    } else {
        struct envunion737  temp736 = ( (struct envunion737){ .fun = (  struct TextBuf_104  (*) (  struct env113*  ,    enum CAllocator_10  ) )mk369 , .env =  envinst113 } );
        (*  tb4825 ) = ( temp736.fun ( &temp736.env ,  (  al4824 ) ) );
    }
    struct Config_253  temp738 = ( (struct Config_253) { .f_theme = (  default4261 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_253 *  cfg4833 = ( &temp738 );
    struct Editor_251  temp739 = ( (struct Editor_251) { .f_running = ( true ) , .f_al = (  al4824 ) , .f_pane = ( (  mk740 ) ( (  al4824 ) ,  (  tb4825 ) ) ) , .f_clipboard = ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) , .f_search_dash_term = ( (struct Maybe_85) { .tag = Maybe_85_None_t } ) , .f_mode = ( (struct EditorMode_252) { .tag = EditorMode_252_Normal_t } ) , .f_msg = (  initial_dash_message4829 ) , .f_cfg = (  cfg4833 ) , .f_og_dash_theme = (  default4261 ) } );
    struct Editor_251 *  ed4834 = ( &temp739 );
    struct envunion743  temp742 = ( (struct envunion743){ .fun = (  struct Tui_91  (*) (  struct env87*  ) )mk744 , .env =  envinst87 } );
    struct Tui_91  temp741 = ( temp742.fun ( &temp742.env ) );
    struct Tui_91 *  tui4835 = ( &temp741 );
    struct Screen_279  temp868 = ( (  mk_dash_screen869 ) ( (  tui4835 ) ,  (  al4824 ) ) );
    struct Screen_279 *  screen4836 = ( &temp868 );
    uint32_t  last_dash_redraw_dash_changes4837 = (  from_dash_integral166 ( 0 ) );
    while ( ( ( * (  ed4834 ) ) .f_running ) ) {
        struct env913 envinst913 = {
            .tui4835 =  tui4835 ,
            .envinst89 = envinst89 ,
        };
        struct FunIter_912  temp911 =  into_dash_iter920 ( ( (  from_dash_function921 ) ( ( (struct envunion919){ .fun = (  struct Maybe_915  (*) (  struct env913*  ) )lam922 , .env =  envinst913 } ) ) ) );
        while (true) {
            struct Maybe_915  __cond1114 =  next1115 (&temp911);
            if (  __cond1114 .tag == 0 ) {
                break;
            }
            struct InputEvent_916  ev4839 =  __cond1114 .stuff .Maybe_915_Just_s .field0;
            struct InputEvent_916  dref4840 = (  ev4839 );
            if ( dref4840.tag == InputEvent_916_Key_t ) {
                ( (  reset_dash_msg1117 ) ( (  ed4834 ) ) );
                struct envunion1124  temp1123 = ( (struct envunion1124){ .fun = (  enum Unit_8  (*) (  struct env267*  ,    struct Editor_251 *  ,    struct Key_273  ) )handle_dash_key1125 , .env =  envinst267 } );
                ( temp1123.fun ( &temp1123.env ,  (  ed4834 ) ,  ( dref4840 .stuff .InputEvent_916_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1925  temp1924 = ( (struct envunion1925){ .fun = (  bool  (*) (  struct env95*  ,    struct Screen_279 *  ) )resize_dash_screen_dash_if_dash_needed1926 , .env =  envinst95 } );
        ( temp1924.fun ( &temp1924.env ,  (  screen4836 ) ) );
        if ( ( (  should_dash_redraw1928 ) ( (  tui4835 ) ) ) ) {
            (*  screen4836 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1929 ) ( (  screen4836 ) ) );
            struct Theme_173 *  theme4842 = ( ( * ( ( * (  ed4834 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg1938 ) ( (  screen4836 ) ,  ( ( ( * (  theme4842 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1939 ) ( (  screen4836 ) ,  ( ( ( * (  theme4842 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1940 ) ( (  screen4836 ) ) );
            struct envunion1953  temp1952 = ( (struct envunion1953){ .fun = (  enum Unit_8  (*) (  struct env277*  ,    struct Screen_279 *  ,    struct Editor_251 *  ) )render_dash_editor1954 , .env =  envinst277 } );
            ( temp1952.fun ( &temp1952.env ,  (  screen4836 ) ,  (  ed4834 ) ) );
            last_dash_redraw_dash_changes4837 = ( (  render_dash_screen2420 ) ( (  screen4836 ) ) );
        }
        ( (  sync2567 ) ( (  tui4835 ) ) );
    }
    ( (  free_dash_screen2576 ) ( (  screen4836 ) ) );
    ( (  deinit2579 ) ( (  tui4835 ) ) );
}
