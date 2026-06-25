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

struct env50 {
    ;
    ;
    ;
    ;
    struct env6 envinst6;
    ;
};

struct envunion52 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct env51 {
    ;
    ;
    ;
    ;
    ;
    struct env46 envinst46;
};

struct Array_55 {
    struct Line_16 _arr [1];
};

struct envunion54 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_14 *  ,    struct Array_55  );
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

struct envunion57 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    uint8_t  );
    struct env6 env;
};

struct StrViewIter_62 {
    struct StrView_27  f_ds;
    size_t  f_i;
};

struct StrConcatIter_61 {
    struct StrViewIter_62  f_left;
    struct StrViewIter_62  f_right;
};

enum EmptyIter_64 {
    EmptyIter_64_EmptyIter,
};

struct Char_65 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct AppendIter_63 {
    enum EmptyIter_64  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

struct StrConcatIter_60 {
    struct StrConcatIter_61  f_left;
    struct AppendIter_63  f_right;
};

struct Map_59 {
    struct StrConcatIter_60  field0;
    uint8_t (*  field1 )(    struct Char_65  );
};

static struct Map_59 Map_59_Map (  struct StrConcatIter_60  field0 ,  uint8_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_59 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion58 {
    enum Unit_8  (*fun) (  struct env50*  ,    struct List_9 *  ,    struct Map_59  );
    struct env50 env;
};

struct env56 {
    ;
    struct env6 envinst6;
    ;
    ;
    ;
    struct env50 envinst50;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   from_dash_integral67 (    int64_t  x49 ) {
    return ( (int32_t ) (  x49 ) );
}

static  int32_t   lc_dash_ctype66 (  ) {
    return (  from_dash_integral67 ( 0 ) );
}

static  const char*   from_dash_string68 (    uint8_t *  ptr82 ,    size_t  dref83 ) {
    return ( ( (const char* ) (  ptr82 ) ) );
}

struct envunion70 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct env69 {
    ;
    ;
    struct env46 envinst46;
};

struct StrBuilder_73 {
    struct List_9  f_chars;
};

struct envunion72 {
    enum Unit_8  (*fun) (  struct env69*  ,    struct StrBuilder_73 *  ,    struct Slice_11  );
    struct env69 env;
};

struct env71 {
    ;
    struct env69 envinst69;
    ;
    ;
};

struct envunion75 {
    enum Unit_8  (*fun) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  );
    struct env71 env;
};

struct env74 {
    ;
    ;
    ;
    ;
    struct env71 envinst71;
    ;
    ;
};

struct env76 {
    ;
    ;
    ;
    ;
    struct env71 envinst71;
    ;
    ;
};

struct env77 {
    ;
    ;
    ;
    ;
    struct env71 envinst71;
    ;
    ;
};

struct env78 {
    ;
    ;
    ;
    ;
    struct env71 envinst71;
    ;
    ;
};

struct StrConcat_81 {
    struct StrView_27  field0;
    struct Char_65  field1;
};

static struct StrConcat_81 StrConcat_81_StrConcat (  struct StrView_27  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_81 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion80 {
    enum Unit_8  (*fun) (  struct env76*  ,    struct StrBuilder_73 *  ,    struct StrConcat_81  );
    struct env76 env;
};

struct env79 {
    ;
    struct env76 envinst76;
    ;
    ;
    ;
    ;
};

struct envunion83 {
    enum Unit_8  (*fun) (  struct env44*  ,    struct List_9 *  );
    struct env44 env;
};

struct env82 {
    ;
    struct env44 envinst44;
    ;
};

struct StrConcat_87 {
    struct StrView_27  field0;
    size_t  field1;
};

static struct StrConcat_87 StrConcat_87_StrConcat (  struct StrView_27  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_87 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_86 {
    struct StrConcat_87  field0;
    struct StrView_27  field1;
};

static struct StrConcat_86 StrConcat_86_StrConcat (  struct StrConcat_87  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_86 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion85 {
    enum Unit_8  (*fun) (  struct env74*  ,    struct StrBuilder_73 *  ,    struct StrConcat_86  );
    struct env74 env;
};

struct envunion88 {
    enum Unit_8  (*fun) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  );
    struct env71 env;
};

struct env84 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env74 envinst74;
    ;
    struct env71 envinst71;
    ;
    ;
    ;
};

struct envunion90 {
    enum Unit_8  (*fun) (  struct env77*  ,    struct StrBuilder_73 *  ,    struct StrView_27  );
    struct env77 env;
};

struct env89 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env77 envinst77;
    ;
    struct env71 envinst71;
    ;
    ;
    ;
};

struct Maybe_94 {
    enum {
        Maybe_94_None_t,
        Maybe_94_Just_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } Maybe_94_Just_s;
    } stuff;
};

static struct Maybe_94 Maybe_94_Just (  struct StrView_27  field0 ) {
    return ( struct Maybe_94 ) { .tag = Maybe_94_Just_t, .stuff = { .Maybe_94_Just_s = { .field0 = field0 } } };
};

struct StrConcat_93 {
    struct StrView_27  field0;
    struct Maybe_94  field1;
};

static struct StrConcat_93 StrConcat_93_StrConcat (  struct StrView_27  field0 ,  struct Maybe_94  field1 ) {
    return ( struct StrConcat_93 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion92 {
    enum Unit_8  (*fun) (  struct env78*  ,    struct StrBuilder_73 *  ,    struct StrConcat_93  );
    struct env78 env;
};

struct env91 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env78 envinst78;
    ;
    struct env71 envinst71;
    ;
    ;
    ;
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
    bool *  should_dash_resize3362;
    ;
    ;
    ;
    ;
    ;
};

struct env97 {
    ;
    bool *  should_dash_resize3362;
    ;
    ;
};

enum ColorPalette_101 {
    ColorPalette_101_Palette8,
    ColorPalette_101_Palette16,
    ColorPalette_101_Palette256,
    ColorPalette_101_PaletteRGB,
};

struct Array_103 {
    uint8_t _arr [32];
};

struct Termios_102 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_103  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_100 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_101  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_102  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion99 {
    bool  (*fun) (  struct env97*  ,    struct Tui_100 *  );
    struct env97 env;
};

struct env98 {
    struct env97 envinst97;
    ;
};

struct envunion105 {
    bool  (*fun) (  struct env97*  ,    struct Tui_100 *  );
    struct env97 env;
};

struct env104 {
    struct env97 envinst97;
    ;
    ;
    ;
    ;
    ;
};

struct envunion107 {
    struct List_9  (*fun) (  struct env51*  ,    struct Slice_11  ,    enum CAllocator_10  );
    struct env51 env;
};

struct envunion108 {
    enum Unit_8  (*fun) (  struct env37*  ,    struct List_14 *  ,    size_t  ,    struct Line_16  );
    struct env37 env;
};

struct envunion109 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct env106 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env51 envinst51;
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
    ;
    ;
};

struct envunion111 {
    enum Unit_8  (*fun) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  );
    struct env12 env;
};

struct envunion112 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

enum ChangesetInputType_116 {
    ChangesetInputType_116_NoChangeset,
    ChangesetInputType_116_InputChangeset,
    ChangesetInputType_116_CustomChangeset,
};

struct Actions_115 {
    struct List_30  f_list;
    size_t  f_cur;
    enum ChangesetInputType_116  f_input_dash_changeset;
};

struct TextBuf_114 {
    enum CAllocator_10  f_al;
    struct List_14  f_buf;
    struct Actions_115  f_actions;
    struct Maybe_94  f_filename;
};

struct envunion113 {
    int32_t  (*fun) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env106 env;
};

struct envunion117 {
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  );
    struct env40 env;
};

struct envunion118 {
    enum Unit_8  (*fun) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  );
    struct env41 env;
};

struct env110 {
    ;
    ;
    struct env12 envinst12;
    ;
    ;
    ;
    ;
    ;
    struct env46 envinst46;
    ;
    struct env106 envinst106;
    ;
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
    ;
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
};

struct envunion120 {
    enum Unit_8  (*fun) (  struct env79*  ,    struct StrBuilder_73 *  ,    struct StrView_27  );
    struct env79 env;
};

struct env119 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env79 envinst79;
    ;
    ;
};

struct envunion122 {
    struct List_14  (*fun) (  struct env53*  ,    struct Array_55  ,    enum CAllocator_10  );
    struct env53 env;
};

struct env121 {
    struct env53 envinst53;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion124 {
    enum Unit_8  (*fun) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env110 env;
};

struct envunion125 {
    struct TextBuf_114  (*fun) (  struct env121*  ,    enum CAllocator_10  );
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
    struct env110 envinst110;
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
};

struct envunion127 {
    enum Unit_8  (*fun) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env110 env;
};

struct env126 {
    ;
    ;
    struct env110 envinst110;
    ;
    ;
};

struct envunion129 {
    enum Unit_8  (*fun) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  );
    struct env110 env;
};

struct env128 {
    ;
    ;
    struct env110 envinst110;
    ;
    ;
};

struct envunion131 {
    struct Pos_26  (*fun) (  struct env126*  ,    struct TextBuf_114 *  ,    struct Action_25  );
    struct env126 env;
};

struct env130 {
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
};

struct envunion133 {
    struct Pos_26  (*fun) (  struct env128*  ,    struct TextBuf_114 *  ,    struct Action_25  );
    struct env128 env;
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

struct envunion135 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
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

struct envunion137 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct envunion138 {
    enum Unit_8  (*fun) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  );
    struct env28 env;
};

struct envunion139 {
    struct StrView_27  (*fun) (  struct env134*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env134 env;
};

struct envunion140 {
    struct Pos_26  (*fun) (  struct env128*  ,    struct TextBuf_114 *  ,    struct Action_25  );
    struct env128 env;
};

struct env136 {
    ;
    ;
    struct env21 envinst21;
    struct env28 envinst28;
    ;
    ;
    ;
    ;
    struct env134 envinst134;
    ;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion142 {
    enum Unit_8  (*fun) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  );
    struct env28 env;
};

struct env141 {
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

struct envunion144 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct env143 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion146 {
    enum Unit_8  (*fun) (  struct env143*  ,    struct TextBuf_114 *  ,    struct Line_16 *  );
    struct env143 env;
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
    struct env143 envinst143;
};

enum Color8_148 {
    Color8_148_Black8,
    Color8_148_Red8,
    Color8_148_Green8,
    Color8_148_Yellow8,
    Color8_148_Blue8,
    Color8_148_Magenta8,
    Color8_148_Cyan8,
    Color8_148_White8,
};

enum Color16_149 {
    Color16_149_Black16,
    Color16_149_Red16,
    Color16_149_Green16,
    Color16_149_Yellow16,
    Color16_149_Blue16,
    Color16_149_Magenta16,
    Color16_149_Cyan16,
    Color16_149_White16,
    Color16_149_BrightBlack16,
    Color16_149_BrightRed16,
    Color16_149_BrightGreen16,
    Color16_149_BrightYellow16,
    Color16_149_BrightBlue16,
    Color16_149_BrightMagenta16,
    Color16_149_BrightCyan16,
    Color16_149_BrightWhite16,
};

struct RGB_150 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_147 {
    enum {
        Color_147_ColorDefault_t,
        Color_147_Color8_t,
        Color_147_Color16_t,
        Color_147_Color256_t,
        Color_147_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_148  field0;
        } Color_147_Color8_s;
        struct {
            enum Color16_149  field0;
        } Color_147_Color16_s;
        struct {
            uint8_t  field0;
        } Color_147_Color256_s;
        struct {
            struct RGB_150  field0;
        } Color_147_ColorRGB_s;
    } stuff;
};

static struct Color_147 Color_147_Color8 (  enum Color8_148  field0 ) {
    return ( struct Color_147 ) { .tag = Color_147_Color8_t, .stuff = { .Color_147_Color8_s = { .field0 = field0 } } };
};

static struct Color_147 Color_147_Color16 (  enum Color16_149  field0 ) {
    return ( struct Color_147 ) { .tag = Color_147_Color16_t, .stuff = { .Color_147_Color16_s = { .field0 = field0 } } };
};

static struct Color_147 Color_147_Color256 (  uint8_t  field0 ) {
    return ( struct Color_147 ) { .tag = Color_147_Color256_t, .stuff = { .Color_147_Color256_s = { .field0 = field0 } } };
};

static struct Color_147 Color_147_ColorRGB (  struct RGB_150  field0 ) {
    return ( struct Color_147 ) { .tag = Color_147_ColorRGB_t, .stuff = { .Color_147_ColorRGB_s = { .field0 = field0 } } };
};

static  uint8_t   cast154 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8153 (    uint32_t  x658 ) {
    return ( (  cast154 ) ( (  x658 ) ) );
}

static  uint32_t   op_dash_div156 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

struct Range_159 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_159 Range_159_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_159 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env160 {
    ;
    uint32_t  base1211;
};

struct envunion161 {
    uint32_t  (*fun) (  struct env160*  ,    int32_t  ,    uint32_t  );
    struct env160 env;
};

struct RangeIter_162 {
    struct Range_159  field0;
    int32_t  field1;
};

static struct RangeIter_162 RangeIter_162_RangeIter (  struct Range_159  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_162 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_162   into_dash_iter163 (    struct Range_159  dref884 ) {
    return ( ( RangeIter_162_RangeIter ) ( ( ( Range_159_Range ) ( ( dref884 .field0 ) ,  ( dref884 .field1 ) ) ) ,  ( dref884 .field0 ) ) );
}

struct Maybe_164 {
    enum {
        Maybe_164_None_t,
        Maybe_164_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_164_Just_s;
    } stuff;
};

static struct Maybe_164 Maybe_164_Just (  int32_t  field0 ) {
    return ( struct Maybe_164 ) { .tag = Maybe_164_Just_t, .stuff = { .Maybe_164_Just_s = { .field0 = field0 } } };
};

enum Ordering_167 {
    Ordering_167_LT,
    Ordering_167_EQ,
    Ordering_167_GT,
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp166 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  int32_t   op_dash_add168 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_164   next165 (    struct RangeIter_162 *  self892 ) {
    struct RangeIter_162  dref893 = ( * (  self892 ) );
    if ( true ) {
        if ( (  cmp166 ( ( dref893 .field1 ) , ( dref893 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
        }
        struct Maybe_164  x897 = ( ( Maybe_164_Just ) ( ( dref893 .field1 ) ) );
        (*  self892 ) = ( ( RangeIter_162_RangeIter ) ( ( ( Range_159_Range ) ( ( dref893 .field0 .field0 ) ,  ( dref893 .field0 .field1 ) ) ) ,  (  op_dash_add168 ( ( dref893 .field1 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
        return (  x897 );
    }
}

static  uint32_t   reduce158 (    struct Range_159  iterable1094 ,    uint32_t  base1096 ,   struct envunion161  fun1098 ) {
    uint32_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion161  temp169 = (  fun1098 );
                x1099 = ( temp169.fun ( &temp169.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp170 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp170);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp171;
    return (  temp171 );
}

static  struct Range_159   to172 (    int32_t  from875 ,    int32_t  to877 ) {
    return ( ( Range_159_Range ) ( (  from875 ) ,  (  to877 ) ) );
}

static  int32_t   op_dash_sub173 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint32_t   from_dash_integral174 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint32_t   op_dash_mul176 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

static  uint32_t   lam175 (   struct env160* env ,    int32_t  item1215 ,    uint32_t  x1217 ) {
    return (  op_dash_mul176 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  uint32_t   pow157 (    uint32_t  base1211 ,    int32_t  p1213 ) {
    struct env160 envinst160 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce158 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral174 ( 1 ) ) ,  ( (struct envunion161){ .fun = (  uint32_t  (*) (  struct env160*  ,    int32_t  ,    uint32_t  ) )lam175 , .env =  envinst160 } ) ) );
}

static  uint32_t   rshift155 (    uint32_t  x1225 ,    int32_t  am1227 ) {
    return (  op_dash_div156 ( (  x1225 ) , ( (  pow157 ) ( (  from_dash_integral174 ( 2 ) ) ,  (  am1227 ) ) ) ) );
}

static  uint32_t   op_dash_sub178 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp179 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   op_dash_add180 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   mod177 (    uint32_t  l1230 ,    uint32_t  d1232 ) {
    uint32_t  r1233 = (  op_dash_div156 ( (  l1230 ) , (  d1232 ) ) );
    uint32_t  m1234 = (  op_dash_sub178 ( (  l1230 ) , (  op_dash_mul176 ( (  r1233 ) , (  d1232 ) ) ) ) );
    if ( (  cmp179 ( (  m1234 ) , (  from_dash_integral174 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add180 ( (  d1232 ) , (  m1234 ) ) );
    } else {
        return (  m1234 );
    }
}

static  struct RGB_150   rgb_dash_from_dash_hex152 (    uint32_t  n2683 ) {
    return ( (struct RGB_150) { .f_r = ( (  u32_dash_u8153 ) ( ( (  rshift155 ) ( (  n2683 ) ,  (  from_dash_integral67 ( 16 ) ) ) ) ) ) , .f_g = ( (  u32_dash_u8153 ) ( ( (  mod177 ) ( ( (  rshift155 ) ( (  n2683 ) ,  (  from_dash_integral67 ( 8 ) ) ) ) ,  (  from_dash_integral174 ( 256 ) ) ) ) ) ) , .f_b = ( (  u32_dash_u8153 ) ( ( (  mod177 ) ( (  n2683 ) ,  (  from_dash_integral174 ( 256 ) ) ) ) ) ) } );
}

static  struct Color_147   rgb151 (    uint32_t  x3976 ) {
    return ( ( Color_147_ColorRGB ) ( ( (  rgb_dash_from_dash_hex152 ) ( (  x3976 ) ) ) ) );
}

struct Colors_182 {
    struct Color_147  f_fg;
    struct Color_147  f_bg;
};

struct Maybe_185 {
    enum {
        Maybe_185_None_t,
        Maybe_185_Just_t,
    } tag;
    union {
        struct {
            struct Color_147  field0;
        } Maybe_185_Just_s;
    } stuff;
};

static struct Maybe_185 Maybe_185_Just (  struct Color_147  field0 ) {
    return ( struct Maybe_185 ) { .tag = Maybe_185_Just_t, .stuff = { .Maybe_185_Just_s = { .field0 = field0 } } };
};

struct HighlightColors_184 {
    enum HighlightType_20  f_type;
    struct Color_147  f_fg;
    struct Maybe_185  f_bg;
};

struct Slice_183 {
    struct HighlightColors_184 *  f_ptr;
    size_t  f_count;
};

struct Theme_181 {
    struct Colors_182  f_default;
    struct Colors_182  f_cursor;
    struct Colors_182  f_selection;
    struct Colors_182  f_line_dash_num;
    struct Colors_182  f_line_dash_num_dash_hl;
    struct Colors_182  f_overlay;
    struct Slice_183  f_highlights;
};

struct Array_188 {
    struct HighlightColors_184 _arr [13];
};

static  struct HighlightColors_184 *   cast189 (    struct Array_188 *  x356 ) {
    return ( (struct HighlightColors_184 * ) (  x356 ) );
}

static  struct Slice_183   as_dash_slice187 (    struct Array_188 *  arr2277 ) {
    return ( (struct Slice_183) { .f_ptr = ( (  cast189 ) ( (  arr2277 ) ) ) , .f_count = ( (size_t ) ( 13 ) ) } );
}

static  struct Array_188   from_dash_listlike191 (    struct Array_188  self330 ) {
    return (  self330 );
}

static  struct HighlightColors_184   hlt192 (    enum HighlightType_20  type3970 ,    struct Color_147  fg3972 ) {
    return ( (struct HighlightColors_184) { .f_type = (  type3970 ) , .f_fg = (  fg3972 ) , .f_bg = ( (struct Maybe_185) { .tag = Maybe_185_None_t } ) } );
}

static  void *   cast_dash_ptr198 (    struct HighlightColors_184 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of199 (    struct HighlightColors_184 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct HighlightColors_184 *   zeroed196 (  ) {
    struct HighlightColors_184 *  temp197;
    struct HighlightColors_184 *  x571 = (  temp197 );
    ( ( memset ) ( ( (  cast_dash_ptr198 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of199 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct HighlightColors_184 *   null_dash_ptr195 (  ) {
    return ( (  zeroed196 ) ( ) );
}

static  struct Slice_183   empty194 (  ) {
    return ( (struct Slice_183) { .f_ptr = ( (  null_dash_ptr195 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct Tuple2_202 {
    struct StrView_27  field0;
    struct Theme_181 *  field1;
};

static struct Tuple2_202 Tuple2_202_Tuple2 (  struct StrView_27  field0 ,  struct Theme_181 *  field1 ) {
    return ( struct Tuple2_202 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_201 {
    struct Tuple2_202 *  f_ptr;
    size_t  f_count;
};

struct Array_204 {
    struct Tuple2_202 _arr [4];
};

static  struct Tuple2_202 *   cast205 (    struct Array_204 *  x356 ) {
    return ( (struct Tuple2_202 * ) (  x356 ) );
}

static  struct Slice_201   as_dash_slice203 (    struct Array_204 *  arr2277 ) {
    return ( (struct Slice_201) { .f_ptr = ( (  cast205 ) ( (  arr2277 ) ) ) , .f_count = ( (size_t ) ( 4 ) ) } );
}

static  struct Array_204   from_dash_listlike207 (    struct Array_204  self330 ) {
    return (  self330 );
}

static  struct StrView_27   from_dash_string208 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

struct env209 {
    ;
    struct Slice_201  all_dash_themes3992;
    ;
    ;
    ;
    ;
    ;
};

struct Maybe_212 {
    enum {
        Maybe_212_None_t,
        Maybe_212_Just_t,
    } tag;
    union {
        struct {
            enum HighlightType_20  field0;
        } Maybe_212_Just_s;
    } stuff;
};

static struct Maybe_212 Maybe_212_Just (  enum HighlightType_20  field0 ) {
    return ( struct Maybe_212 ) { .tag = Maybe_212_Just_t, .stuff = { .Maybe_212_Just_s = { .field0 = field0 } } };
};

struct envunion211 {
    struct Maybe_212  (*fun) (  struct env145*  ,    struct TextBuf_114 *  ,    struct Pos_26  );
    struct env145 env;
};

struct env210 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct Maybe_215 {
    enum {
        Maybe_215_None_t,
        Maybe_215_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_33  field0;
        } Maybe_215_Just_s;
    } stuff;
};

static struct Maybe_215 Maybe_215_Just (  struct Cursors_33  field0 ) {
    return ( struct Maybe_215 ) { .tag = Maybe_215_Just_t, .stuff = { .Maybe_215_Just_s = { .field0 = field0 } } };
};

struct envunion214 {
    struct Maybe_215  (*fun) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  );
    struct env136 env;
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
    struct env136 envinst136;
};

struct envunion217 {
    struct Maybe_215  (*fun) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  );
    struct env136 env;
};

struct env216 {
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
};

struct envunion219 {
    struct Maybe_215  (*fun) (  struct env130*  ,    struct TextBuf_114 *  );
    struct env130 env;
};

struct env218 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env130 envinst130;
};

struct envunion221 {
    struct Maybe_215  (*fun) (  struct env132*  ,    struct TextBuf_114 *  );
    struct env132 env;
};

struct env220 {
    struct env132 envinst132;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion223 {
    struct Maybe_215  (*fun) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  );
    struct env136 env;
};

struct env222 {
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
};

struct envunion225 {
    struct Maybe_215  (*fun) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  );
    struct env136 env;
};

struct env224 {
    ;
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
};

enum Mode_229 {
    Mode_229_Normal,
    Mode_229_Insert,
    Mode_229_Select,
};

struct ScreenCursorOffset_230 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_228 {
    struct TextBuf_114 *  f_buf;
    struct Pos_26  f_cursor;
    int32_t  f_vi;
    struct Maybe_34  f_sel;
    enum Mode_229  f_mode;
    struct ScreenCursorOffset_230  f_sc_dash_off;
};

struct envunion227 {
    enum Unit_8  (*fun) (  struct env224*  ,    struct Pane_228 *  ,    int32_t  );
    struct env224 env;
};

struct envunion231 {
    enum Unit_8  (*fun) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  );
    struct env141 env;
};

struct env226 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env224 envinst224;
    ;
    ;
    struct env141 envinst141;
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

struct envunion233 {
    struct Maybe_215  (*fun) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  );
    struct env136 env;
};

struct envunion234 {
    enum Unit_8  (*fun) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  );
    struct env141 env;
};

struct env232 {
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
    struct env141 envinst141;
    ;
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

struct envunion236 {
    enum Unit_8  (*fun) (  struct env224*  ,    struct Pane_228 *  ,    int32_t  );
    struct env224 env;
};

struct env235 {
    ;
    ;
    ;
    ;
    ;
    struct env224 envinst224;
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
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_228 *  ,    struct StrView_27  );
    struct env213 env;
};

struct Tuple2_240 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_240 Tuple2_240_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_240 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion239 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct envunion241 {
    enum Unit_8  (*fun) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  );
    struct env141 env;
};

struct env237 {
    ;
    ;
    struct env213 envinst213;
    ;
    ;
    ;
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
    struct env141 envinst141;
    ;
    ;
    ;
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

struct envunion243 {
    struct StrView_27  (*fun) (  struct env134*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env134 env;
};

struct env242 {
    ;
    struct env134 envinst134;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion245 {
    struct StrView_27  (*fun) (  struct env84*  ,    struct StrConcat_86  ,    enum CAllocator_10  );
    struct env84 env;
};

struct env244 {
    ;
    ;
    ;
    struct env84 envinst84;
    ;
    ;
    ;
};

struct envunion247 {
    struct StrView_27  (*fun) (  struct env89*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env89 env;
};

struct env246 {
    ;
    struct env89 envinst89;
    ;
    ;
    ;
    ;
    ;
};

struct envunion249 {
    struct StrView_27  (*fun) (  struct env91*  ,    struct StrConcat_93  ,    enum CAllocator_10  );
    struct env91 env;
};

struct env248 {
    ;
    ;
    ;
    struct env91 envinst91;
    ;
    ;
    ;
};

struct Maybe_252 {
    enum {
        Maybe_252_None_t,
        Maybe_252_Just_t,
    } tag;
    union {
        struct {
            struct Theme_181 *  field0;
        } Maybe_252_Just_s;
    } stuff;
};

static struct Maybe_252 Maybe_252_Just (  struct Theme_181 *  field0 ) {
    return ( struct Maybe_252 ) { .tag = Maybe_252_Just_t, .stuff = { .Maybe_252_Just_s = { .field0 = field0 } } };
};

struct envunion251 {
    struct Maybe_252  (*fun) (  struct env209*  ,    struct StrView_27  );
    struct env209 env;
};

struct env250 {
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
    ;
    ;
};

struct Maybe_255 {
    enum {
        Maybe_255_None_t,
        Maybe_255_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_255_Just_s;
    } stuff;
};

static struct Maybe_255 Maybe_255_Just (  size_t  field0 ) {
    return ( struct Maybe_255 ) { .tag = Maybe_255_Just_t, .stuff = { .Maybe_255_Just_s = { .field0 = field0 } } };
};

struct envunion254 {
    struct Maybe_255  (*fun) (  struct env119*  ,    struct TextBuf_114 *  ,    struct Maybe_94  );
    struct env119 env;
};

struct EditorMode_258 {
    enum {
        EditorMode_258_Normal_t,
        EditorMode_258_Cmd_t,
        EditorMode_258_Search_t,
    } tag;
    union {
        struct {
            struct Pos_26  field0;
            struct StrBuilder_73  field1;
        } EditorMode_258_Cmd_s;
        struct {
            struct Pos_26  field0;
            struct StrBuilder_73  field1;
        } EditorMode_258_Search_s;
    } stuff;
};

static struct EditorMode_258 EditorMode_258_Cmd (  struct Pos_26  field0 ,  struct StrBuilder_73  field1 ) {
    return ( struct EditorMode_258 ) { .tag = EditorMode_258_Cmd_t, .stuff = { .EditorMode_258_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_258 EditorMode_258_Search (  struct Pos_26  field0 ,  struct StrBuilder_73  field1 ) {
    return ( struct EditorMode_258 ) { .tag = EditorMode_258_Search_t, .stuff = { .EditorMode_258_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Editor_257 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_228  f_pane;
    struct Maybe_94  f_clipboard;
    struct Maybe_94  f_search_dash_term;
    struct EditorMode_258  f_mode;
    struct Maybe_94  f_msg;
    struct Theme_181 *  f_theme;
    struct Theme_181 *  f_og_dash_theme;
};

struct envunion256 {
    enum Unit_8  (*fun) (  struct env246*  ,    struct Editor_257 *  ,    struct StrView_27  );
    struct env246 env;
};

struct envunion259 {
    enum Unit_8  (*fun) (  struct env248*  ,    struct Editor_257 *  ,    struct StrConcat_93  );
    struct env248 env;
};

struct envunion260 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Editor_257 *  ,    struct StrConcat_86  );
    struct env244 env;
};

struct env253 {
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
    struct env246 envinst246;
    ;
    ;
    struct env248 envinst248;
    struct env244 envinst244;
    ;
    ;
    ;
    ;
};

struct envunion262 {
    enum Unit_8  (*fun) (  struct env232*  ,    struct Pane_228 *  );
    struct env232 env;
};

struct envunion263 {
    enum Unit_8  (*fun) (  struct env218*  ,    struct Pane_228 *  );
    struct env218 env;
};

struct envunion264 {
    enum Unit_8  (*fun) (  struct env220*  ,    struct Pane_228 *  );
    struct env220 env;
};

struct envunion265 {
    enum Unit_8  (*fun) (  struct env226*  ,    struct Pane_228 *  );
    struct env226 env;
};

struct envunion266 {
    enum Unit_8  (*fun) (  struct env242*  ,    struct Editor_257 *  );
    struct env242 env;
};

struct envunion267 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct envunion268 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Pane_228 *  ,    int32_t  );
    struct env235 env;
};

struct envunion269 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Editor_257 *  ,    struct StrConcat_86  );
    struct env244 env;
};

struct envunion270 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_228 *  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion271 {
    enum Unit_8  (*fun) (  struct env237*  ,    struct Pane_228 *  );
    struct env237 env;
};

struct env261 {
    ;
    ;
    ;
    ;
    ;
    struct env232 envinst232;
    ;
    ;
    struct env218 envinst218;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env220 envinst220;
    ;
    ;
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
    struct env242 envinst242;
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
    struct env235 envinst235;
    ;
    ;
    ;
    struct env244 envinst244;
    struct env213 envinst213;
    ;
    ;
    struct env237 envinst237;
    ;
    ;
    ;
    ;
};

struct envunion273 {
    enum Unit_8  (*fun) (  struct env250*  ,    struct Editor_257 *  ,    struct StrView_27  );
    struct env250 env;
};

struct envunion274 {
    enum Unit_8  (*fun) (  struct env216*  ,    struct Pane_228 *  );
    struct env216 env;
};

struct Key_276 {
    enum {
        Key_276_Escape_t,
        Key_276_Enter_t,
        Key_276_Tab_t,
        Key_276_Backspace_t,
        Key_276_Char_t,
        Key_276_Ctrl_t,
        Key_276_Up_t,
        Key_276_Down_t,
        Key_276_Left_t,
        Key_276_Right_t,
        Key_276_Home_t,
        Key_276_End_t,
        Key_276_PageUp_t,
        Key_276_PageDown_t,
        Key_276_Delete_t,
        Key_276_Insert_t,
        Key_276_F1_t,
        Key_276_F2_t,
        Key_276_F3_t,
        Key_276_F4_t,
        Key_276_F5_t,
        Key_276_F6_t,
        Key_276_F7_t,
        Key_276_F8_t,
        Key_276_F9_t,
        Key_276_F10_t,
        Key_276_F11_t,
        Key_276_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_276_Char_s;
        struct {
            char  field0;
        } Key_276_Ctrl_s;
    } stuff;
};

static struct Key_276 Key_276_Char (  char  field0 ) {
    return ( struct Key_276 ) { .tag = Key_276_Char_t, .stuff = { .Key_276_Char_s = { .field0 = field0 } } };
};

static struct Key_276 Key_276_Ctrl (  char  field0 ) {
    return ( struct Key_276 ) { .tag = Key_276_Ctrl_t, .stuff = { .Key_276_Ctrl_s = { .field0 = field0 } } };
};

struct envunion275 {
    enum Unit_8  (*fun) (  struct env261*  ,    struct Editor_257 *  ,    struct Key_276  );
    struct env261 env;
};

struct envunion277 {
    enum Unit_8  (*fun) (  struct env253*  ,    struct Editor_257 *  ,    struct StrView_27  );
    struct env253 env;
};

struct envunion278 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Pane_228 *  ,    int32_t  );
    struct env235 env;
};

struct envunion279 {
    enum Unit_8  (*fun) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  );
    struct env71 env;
};

struct envunion280 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_228 *  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion281 {
    enum Unit_8  (*fun) (  struct env82*  ,    struct StrBuilder_73 *  );
    struct env82 env;
};

struct env272 {
    struct env250 envinst250;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env216 envinst216;
    ;
    ;
    ;
    ;
    struct env261 envinst261;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env253 envinst253;
    ;
    ;
    struct env235 envinst235;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env71 envinst71;
    struct env213 envinst213;
    struct env82 envinst82;
};

struct Cell_286 {
    struct Char_65  f_c;
    struct Color_147  f_fg;
    struct Color_147  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_285 {
    struct Cell_286 *  f_ptr;
    size_t  f_count;
};

struct Screen_284 {
    enum CAllocator_10  f_al;
    struct Tui_100 *  f_tui;
    struct Slice_285  f_current;
    struct Slice_285  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_147  f_default_dash_fg;
    struct Color_147  f_default_dash_bg;
};

struct ScreenDims_287 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion283 {
    enum Unit_8  (*fun) (  struct env210*  ,    struct Screen_284 *  ,    struct Pane_228 *  ,    struct ScreenDims_287  ,    struct Theme_181 *  );
    struct env210 env;
};

struct env282 {
    ;
    ;
    ;
    ;
    struct env210 envinst210;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum CAllocator_10   idc288 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct Slice_291 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul294 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  const char* *   offset_dash_ptr293 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp295;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp295 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral296 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub297 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_291   get292 (  ) {
    return ( (struct Slice_291) { .f_ptr = ( (  offset_dash_ptr293 ) ( ( _global_argv ) ,  (  from_dash_integral296 ( 1 ) ) ) ) , .f_count = (  op_dash_sub297 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp298 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct ConstStrIter_302 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_302   into_dash_iter304 (    struct ConstStrIter_302  self1396 ) {
    return (  self1396 );
}

struct Maybe_305 {
    enum {
        Maybe_305_None_t,
        Maybe_305_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_305_Just_s;
    } stuff;
};

static struct Maybe_305 Maybe_305_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_305 ) { .tag = Maybe_305_Just_t, .stuff = { .Maybe_305_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   cast307 (    const char*  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint8_t *   offset_dash_ptr308 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp309;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp309 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64310 (    size_t  x595 ) {
    return ( (int64_t ) (  x595 ) );
}

static  bool   eq311 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   cast312 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp315 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  uint8_t   from_dash_integral316 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  size_t   next_dash_char314 (    uint8_t *  p689 ) {
    uint8_t  pb690 = ( * (  p689 ) );
    if ( (  cmp315 ( (  pb690 ) , (  from_dash_integral316 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp315 ( (  pb690 ) , (  from_dash_integral316 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp315 ( (  pb690 ) , (  from_dash_integral316 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp315 ( (  pb690 ) , (  from_dash_integral316 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp317 = ( (  from_dash_string68 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp317);
                    exit ( 1 );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem313 (    uint8_t *  p701 ) {
    size_t  clen702 = ( (  next_dash_char314 ) ( (  p701 ) ) );
    if ( (  cmp298 ( (  clen702 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp318 = ( (  from_dash_string68 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp318);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p701 ) , .f_num_dash_bytes = (  clen702 ) } );
}

static  size_t   op_dash_add319 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_305   next306 (    struct ConstStrIter_302 *  self1399 ) {
    uint8_t *  char_dash_ptr1400 = ( ( (  cast307 ) ( ( ( * (  self1399 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1401 = ( (  offset_dash_ptr308 ) ( (  char_dash_ptr1400 ) ,  ( (  size_dash_i64310 ) ( ( ( * (  self1399 ) ) .f_i ) ) ) ) );
    if ( (  eq311 ( ( * (  optr1401 ) ) , ( (  cast312 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    struct Char_65  char1402 = ( (  scan_dash_from_dash_mem313 ) ( (  optr1401 ) ) );
    (*  self1399 ) .f_i = (  op_dash_add319 ( ( ( * (  self1399 ) ) .f_i ) , ( (  char1402 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_305_Just ) ( (  char1402 ) ) );
}

static  size_t   reduce303 (    struct ConstStrIter_302  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct ConstStrIter_302  it1100 = ( (  into_dash_iter304 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_305  dref1101 = ( (  next306 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_305_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_305_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_305_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp320 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp320);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp321;
    return (  temp321 );
}

static  size_t   lam322 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add319 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count301 (    struct ConstStrIter_302  it1105 ) {
    return ( (  reduce303 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam322 ) ) );
}

static  struct ConstStrIter_302   into_dash_iter324 (    const char*  self1393 ) {
    return ( (struct ConstStrIter_302) { .f_ogstr = (  self1393 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_302   chars323 (    const char*  self1408 ) {
    return ( (  into_dash_iter324 ) ( (  self1408 ) ) );
}

static  size_t   const_dash_str_dash_len300 (    const char*  s1695 ) {
    return ( (  count301 ) ( ( (  chars323 ) ( (  s1695 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str299 (    const char*  s1993 ) {
    size_t  len1994 = ( (  const_dash_str_dash_len300 ) ( (  s1993 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  cast307 ) ( (  s1993 ) ) ) , .f_count = (  len1994 ) } ) } );
}

struct Maybe_328 {
    enum {
        Maybe_328_None_t,
        Maybe_328_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_328_Just_s;
    } stuff;
};

static struct Maybe_328 Maybe_328_Just (  const char*  field0 ) {
    return ( struct Maybe_328 ) { .tag = Maybe_328_Just_t, .stuff = { .Maybe_328_Just_s = { .field0 = field0 } } };
};

struct StrConcat_330 {
    struct StrConcat_86  field0;
    size_t  field1;
};

static struct StrConcat_330 StrConcat_330_StrConcat (  struct StrConcat_86  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_330 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_329 {
    struct StrConcat_330  field0;
    struct Char_65  field1;
};

static struct StrConcat_329 StrConcat_329_StrConcat (  struct StrConcat_330  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_329 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_334 {
    struct StrView_27  field0;
    struct StrConcat_329  field1;
};

static struct StrConcat_334 StrConcat_334_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_329  field1 ) {
    return ( struct StrConcat_334 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_333 {
    struct StrConcat_334  field0;
    struct Char_65  field1;
};

static struct StrConcat_333 StrConcat_333_StrConcat (  struct StrConcat_334  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_333 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32337 (    size_t  x631 ) {
    return ( (int32_t ) (  x631 ) );
}

static  enum Unit_8   print_dash_str336 (    struct StrView_27  self1380 ) {
    ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32337 ) ( ( ( (  self1380 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1380 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str342 (    size_t  self1471 ) {
    ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1471 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str341 (    struct StrConcat_87  self1510 ) {
    struct StrConcat_87  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str340 (    struct StrConcat_86  self1510 ) {
    struct StrConcat_86  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str341 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str339 (    struct StrConcat_330  self1510 ) {
    struct StrConcat_330  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str340 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Scalar_346 {
    uint32_t  f_value;
};

struct CharDestructured_345 {
    enum {
        CharDestructured_345_Ref_t,
        CharDestructured_345_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_345_Ref_s;
        struct {
            struct Scalar_346  field0;
        } CharDestructured_345_Scalar_s;
    } stuff;
};

static struct CharDestructured_345 CharDestructured_345_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_345 ) { .tag = CharDestructured_345_Ref_t, .stuff = { .CharDestructured_345_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_345 CharDestructured_345_Scalar (  struct Scalar_346  field0 ) {
    return ( struct CharDestructured_345 ) { .tag = CharDestructured_345_Scalar_t, .stuff = { .CharDestructured_345_Scalar_s = { .field0 = field0 } } };
};

static  uint8_t   size_dash_u8349 (    size_t  x640 ) {
    return ( (uint8_t ) (  x640 ) );
}

static  size_t   op_dash_div350 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer348 (    uint8_t *  ptr679 ) {
    return ( (  size_dash_u8349 ) ( (  op_dash_div350 ( ( ( (size_t ) (  ptr679 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint32_t   size_dash_u32351 (    size_t  x634 ) {
    return ( (uint32_t ) (  x634 ) );
}

static  size_t   cast352 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_345   destructure347 (    struct Char_65  c713 ) {
    if ( (  eq311 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer348 ) ( ( (  c713 ) .f_ptr ) ) ) , (  from_dash_integral316 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_345_Scalar ) ( ( (struct Scalar_346) { .f_value = ( (  size_dash_u32351 ) ( ( ( (  cast352 ) ( ( (  c713 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_345_Ref ) ( (  c713 ) ) );
    }
}

static  enum Unit_8   printf_dash_char344 (    struct Char_65  c759 ) {
    struct CharDestructured_345  dref760 = ( (  destructure347 ) ( (  c759 ) ) );
    if ( dref760.tag == CharDestructured_345_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32337 ) ( ( ( dref760 .stuff .CharDestructured_345_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref760 .stuff .CharDestructured_345_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref760.tag == CharDestructured_345_Scalar_t ) {
            if ( (  cmp179 ( ( ( dref760 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) , (  from_dash_integral174 ( 127 ) ) ) == 2 ) ) {
                const char*  temp353 = ( (  from_dash_string68 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp353);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8153 ) ( ( ( dref760 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str343 (    struct Char_65  self1411 ) {
    ( (  printf_dash_char344 ) ( (  self1411 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str338 (    struct StrConcat_329  self1510 ) {
    struct StrConcat_329  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str339 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str335 (    struct StrConcat_334  self1510 ) {
    struct StrConcat_334  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str338 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str332 (    struct StrConcat_333  self1510 ) {
    struct StrConcat_333  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  uint8_t *   cast355 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_charlike354 (    uint8_t *  ptr705 ,    size_t  num_dash_bytes707 ) {
    uint8_t *  ptr708 = ( ( (  cast355 ) ( (  ptr705 ) ) ) );
    return ( (  scan_dash_from_dash_mem313 ) ( (  ptr708 ) ) );
}

static  enum Unit_8   panic331 (    struct StrConcat_329  errmsg1714 ) {
    ( (  print_dash_str332 ) ( ( ( StrConcat_333_StrConcat ) ( ( ( StrConcat_334_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  const char*   undefined356 (  ) {
    const char*  temp357;
    return (  temp357 );
}

static  const char*   or_dash_fail327 (    struct Maybe_328  x1727 ,    struct StrConcat_329  errmsg1729 ) {
    struct Maybe_328  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_328_None_t ) {
        ( (  panic331 ) ( (  errmsg1729 ) ) );
        return ( (  undefined356 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_328_Just_t ) {
            return ( dref1730 .stuff .Maybe_328_Just_s .field0 );
        }
    }
}

static  struct Maybe_328   try_dash_get358 (    struct Slice_291  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp298 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
    }
    const char* *  elem_dash_ptr1768 = ( (  offset_dash_ptr293 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_328_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  const char*   get326 (    struct Slice_291  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail327 ) ( ( (  try_dash_get358 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get325 (    struct Slice_291  self1869 ,    size_t  idx1871 ) {
    return ( (  get326 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

struct Maybe_359 {
    enum {
        Maybe_359_None_t,
        Maybe_359_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_114  field0;
        } Maybe_359_Just_s;
    } stuff;
};

static struct Maybe_359 Maybe_359_Just (  struct TextBuf_114  field0 ) {
    return ( struct Maybe_359 ) { .tag = Maybe_359_Just_t, .stuff = { .Maybe_359_Just_s = { .field0 = field0 } } };
};

struct envunion361 {
    struct Maybe_359  (*fun) (  struct env123*  ,    enum CAllocator_10  ,    struct StrView_27  );
    struct env123 env;
};

static  void *   cast_dash_ptr374 (    struct Line_16 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of375 (    struct Line_16 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Line_16 *   zeroed372 (  ) {
    struct Line_16 *  temp373;
    struct Line_16 *  x571 = (  temp373 );
    ( ( memset ) ( ( (  cast_dash_ptr374 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of375 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Line_16 *   null_dash_ptr371 (  ) {
    return ( (  zeroed372 ) ( ) );
}

static  struct Slice_15   empty370 (  ) {
    return ( (struct Slice_15) { .f_ptr = ( (  null_dash_ptr371 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_14   mk369 (    enum CAllocator_10  al2033 ) {
    struct Slice_15  elements2034 = ( (  empty370 ) ( ) );
    return ( (struct List_14) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env379 {
    struct env12 envinst12;
    struct List_14 *  list2100;
};

struct envunion380 {
    enum Unit_8  (*fun) (  struct env379*  ,    struct Line_16  );
    struct env379 env;
};

struct ArrayIter_381 {
    struct Array_55  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_381   into_dash_iter383 (    struct Array_55  self2327 ) {
    return ( (struct ArrayIter_381) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_384 {
    enum {
        Maybe_384_None_t,
        Maybe_384_Just_t,
    } tag;
    union {
        struct {
            struct Line_16  field0;
        } Maybe_384_Just_s;
    } stuff;
};

static struct Maybe_384 Maybe_384_Just (  struct Line_16  field0 ) {
    return ( struct Maybe_384 ) { .tag = Maybe_384_Just_t, .stuff = { .Maybe_384_Just_s = { .field0 = field0 } } };
};

struct StrConcat_390 {
    struct StrConcat_86  field0;
    int32_t  field1;
};

static struct StrConcat_390 StrConcat_390_StrConcat (  struct StrConcat_86  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_390 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_389 {
    struct StrConcat_390  field0;
    struct Char_65  field1;
};

static struct StrConcat_389 StrConcat_389_StrConcat (  struct StrConcat_390  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_389 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_393 {
    struct StrView_27  field0;
    struct StrConcat_389  field1;
};

static struct StrConcat_393 StrConcat_393_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_389  field1 ) {
    return ( struct StrConcat_393 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_392 {
    struct StrConcat_393  field0;
    struct Char_65  field1;
};

static struct StrConcat_392 StrConcat_392_StrConcat (  struct StrConcat_393  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_392 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str397 (    int32_t  self1447 ) {
    ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1447 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str396 (    struct StrConcat_390  self1510 ) {
    struct StrConcat_390  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str340 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str397 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str395 (    struct StrConcat_389  self1510 ) {
    struct StrConcat_389  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str396 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str394 (    struct StrConcat_393  self1510 ) {
    struct StrConcat_393  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str395 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str391 (    struct StrConcat_392  self1510 ) {
    struct StrConcat_392  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str394 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic388 (    struct StrConcat_389  errmsg1714 ) {
    ( (  print_dash_str391 ) ( ( ( StrConcat_392_StrConcat ) ( ( ( StrConcat_393_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Line_16 *   cast_dash_ptr398 (    struct Array_55 *  p359 ) {
    return ( (struct Line_16 * ) (  p359 ) );
}

static  struct Line_16 *   offset_dash_ptr399 (    struct Line_16 *  x338 ,    int64_t  count340 ) {
    struct Line_16  temp400;
    return ( (struct Line_16 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp400 ) ) ) ) ) ) ) ) );
}

static  struct Line_16 *   get_dash_ptr387 (    struct Array_55 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp298 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2258 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic388 ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  p2259 = ( ( (  cast_dash_ptr398 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr399 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct Line_16   get386 (    struct Array_55 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr387 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_384   next385 (    struct ArrayIter_381 *  self2334 ) {
    if ( (  cmp298 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_384) { .tag = Maybe_384_None_t } );
    }
    struct Line_16  e2336 = ( (  get386 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add319 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_384_Just ) ( (  e2336 ) ) );
}

static  enum Unit_8   for_dash_each378 (    struct Array_55  iterable1075 ,   struct envunion380  fun1077 ) {
    struct ArrayIter_381  temp382 = ( (  into_dash_iter383 ) ( (  iterable1075 ) ) );
    struct ArrayIter_381 *  it1078 = ( &temp382 );
    while ( ( true ) ) {
        struct Maybe_384  dref1079 = ( (  next385 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_384_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_384_Just_t ) {
                struct envunion380  temp401 = (  fun1077 );
                ( temp401.fun ( &temp401.env ,  ( dref1079 .stuff .Maybe_384_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  bool   eq407 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_410 {
    size_t  f_size;
};

static  struct TypeSize_410   get_dash_typesize409 (  ) {
    struct Line_16  temp411;
    return ( (struct TypeSize_410) { .f_size = ( sizeof( ( (  temp411 ) ) ) ) } );
}

static  struct Line_16 *   cast_dash_ptr412 (    void *  p359 ) {
    return ( (struct Line_16 * ) (  p359 ) );
}

static  size_t   op_dash_mul413 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_15   allocate408 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize409 ) ( ) ) ) .f_size );
    struct Line_16 *  ptr1959 = ( (  cast_dash_ptr412 ) ( ( ( malloc ) ( (  op_dash_mul413 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_15) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env414 {
    ;
    ;
    struct Slice_15  new_dash_slice2044;
};

struct Tuple2_416 {
    struct Line_16  field0;
    int32_t  field1;
};

static struct Tuple2_416 Tuple2_416_Tuple2 (  struct Line_16  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_416 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion415 {
    enum Unit_8  (*fun) (  struct env414*  ,    struct Tuple2_416  );
    struct env414 env;
};

static  struct Line_16 *   get_dash_ptr419 (    struct Slice_15  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp298 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  elem_dash_ptr1762 = ( (  offset_dash_ptr399 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set418 (    struct Slice_15  slice1776 ,    size_t  i1778 ,    struct Line_16  x1780 ) {
    struct Line_16 *  ep1781 = ( (  get_dash_ptr419 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size420 (    int32_t  x610 ) {
    return ( (size_t ) ( (int64_t ) (  x610 ) ) );
}

static  enum Unit_8   lam417 (   struct env414* env ,    struct Tuple2_416  dref2045 ) {
    return ( (  set418 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size420 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct SliceIter_423 {
    struct Slice_15  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_424 {
    int32_t  f_from;
};

struct Zip_422 {
    struct SliceIter_423  f_left_dash_it;
    struct FromIter_424  f_right_dash_it;
};

static  struct Zip_422   into_dash_iter426 (    struct Zip_422  self912 ) {
    return (  self912 );
}

struct Maybe_427 {
    enum {
        Maybe_427_None_t,
        Maybe_427_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_416  field0;
        } Maybe_427_Just_s;
    } stuff;
};

static struct Maybe_427 Maybe_427_Just (  struct Tuple2_416  field0 ) {
    return ( struct Maybe_427 ) { .tag = Maybe_427_Just_t, .stuff = { .Maybe_427_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_384   next429 (    struct SliceIter_423 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp298 ( (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_384) { .tag = Maybe_384_None_t } );
    }
    struct Line_16  elem1832 = ( * ( (  offset_dash_ptr399 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_384_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_164   next430 (    struct FromIter_424 *  dref906 ) {
    int32_t  v908 = ( ( (* dref906 ) ) .f_from );
    (* dref906 ) .f_from = (  op_dash_add168 ( ( ( (* dref906 ) ) .f_from ) , (  from_dash_integral67 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  v908 ) ) );
}

static  struct Maybe_427   next428 (    struct Zip_422 *  self915 ) {
    struct Zip_422  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_384  dref917 = ( (  next429 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_384_None_t ) {
            return ( (struct Maybe_427) { .tag = Maybe_427_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_384_Just_t ) {
                struct Maybe_164  dref919 = ( (  next430 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_427) { .tag = Maybe_427_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next429 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next430 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_427_Just ) ( ( ( Tuple2_416_Tuple2 ) ( ( dref917 .stuff .Maybe_384_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each421 (    struct Zip_422  iterable1075 ,   struct envunion415  fun1077 ) {
    struct Zip_422  temp425 = ( (  into_dash_iter426 ) ( (  iterable1075 ) ) );
    struct Zip_422 *  it1078 = ( &temp425 );
    while ( ( true ) ) {
        struct Maybe_427  dref1079 = ( (  next428 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_427_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_427_Just_t ) {
                struct envunion415  temp431 = (  fun1077 );
                ( temp431.fun ( &temp431.env ,  ( dref1079 .stuff .Maybe_427_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_423   into_dash_iter433 (    struct Slice_15  self1824 ) {
    return ( (struct SliceIter_423) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_424   into_dash_iter434 (    struct FromIter_424  it904 ) {
    return (  it904 );
}

static  struct Zip_422   zip432 (    struct Slice_15  left923 ,    struct FromIter_424  right925 ) {
    struct SliceIter_423  left_dash_it926 = ( (  into_dash_iter433 ) ( (  left923 ) ) );
    struct FromIter_424  right_dash_it927 = ( (  into_dash_iter434 ) ( (  right925 ) ) );
    return ( (struct Zip_422) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  struct FromIter_424   from435 (    int32_t  f901 ) {
    return ( (struct FromIter_424) { .f_from = (  f901 ) } );
}

static  void *   cast_dash_ptr437 (    struct Line_16 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free436 (    enum CAllocator_10  dref1961 ,    struct Slice_15  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr437 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full406 (   struct env2* env ,    struct List_14 *  list2043 ) {
    if ( (  eq407 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate408 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq407 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_15  new_dash_slice2044 = ( (  allocate408 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul413 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env414 envinst414 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion415  fun2048 = ( (struct envunion415){ .fun = (  enum Unit_8  (*) (  struct env414*  ,    struct Tuple2_416  ) )lam417 , .env =  envinst414 } );
            ( (  for_dash_each421 ) ( ( (  zip432 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free436 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add404 (   struct env12* env ,    struct List_14 *  list2051 ,    struct Line_16  elem2053 ) {
    struct envunion13  temp405 = ( (struct envunion13){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full406 , .env =  env->envinst2 } );
    ( temp405.fun ( &temp405.env ,  (  list2051 ) ) );
    ( (  set418 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add319 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam402 (   struct env379* env ,    struct Line_16  x2104 ) {
    struct envunion49  temp403 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add404 , .env =  env->envinst12 } );
    return ( temp403.fun ( &temp403.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all377 (   struct env48* env ,    struct List_14 *  list2100 ,    struct Array_55  it2102 ) {
    struct env379 envinst379 = {
        .envinst12 = env->envinst12 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each378 ) ( (  it2102 ) ,  ( (struct envunion380){ .fun = (  enum Unit_8  (*) (  struct env379*  ,    struct Line_16  ) )lam402 , .env =  envinst379 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_14   from_dash_iter367 (   struct env53* env ,    struct Array_55  iter2141 ,    enum CAllocator_10  al2143 ) {
    struct List_14  temp368 = ( (  mk369 ) ( (  al2143 ) ) );
    struct List_14 *  list2144 = ( &temp368 );
    struct envunion54  temp376 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_14 *  ,    struct Array_55  ) )add_dash_all377 , .env =  env->envinst48 } );
    ( temp376.fun ( &temp376.env ,  (  list2144 ) ,  (  iter2141 ) ) );
    return ( * (  list2144 ) );
}

static  struct Array_55   from_dash_listlike438 (    struct Array_55  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr445 (    struct Highlight_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of446 (    struct Highlight_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Highlight_19 *   zeroed443 (  ) {
    struct Highlight_19 *  temp444;
    struct Highlight_19 *  x571 = (  temp444 );
    ( ( memset ) ( ( (  cast_dash_ptr445 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of446 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Highlight_19 *   null_dash_ptr442 (  ) {
    return ( (  zeroed443 ) ( ) );
}

static  struct Slice_18   empty441 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr442 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk440 (    enum CAllocator_10  al2033 ) {
    struct Slice_18  elements2034 = ( (  empty441 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_16   mk_dash_line439 (    struct List_9  initial3707 ) {
    return ( (struct Line_16) { .f_line = (  initial3707 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk440 ) ( ( (  initial3707 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr452 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of453 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed450 (  ) {
    uint8_t *  temp451;
    uint8_t *  x571 = (  temp451 );
    ( ( memset ) ( ( (  cast_dash_ptr452 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of453 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   null_dash_ptr449 (  ) {
    return ( (  zeroed450 ) ( ) );
}

static  struct Slice_11   empty448 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr449 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk447 (    enum CAllocator_10  al2033 ) {
    struct Slice_11  elements2034 = ( (  empty448 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr460 (    struct Changeset_32 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of461 (    struct Changeset_32 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_32 *   zeroed458 (  ) {
    struct Changeset_32 *  temp459;
    struct Changeset_32 *  x571 = (  temp459 );
    ( ( memset ) ( ( (  cast_dash_ptr460 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of461 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Changeset_32 *   null_dash_ptr457 (  ) {
    return ( (  zeroed458 ) ( ) );
}

static  struct Slice_31   empty456 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr457 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk455 (    enum CAllocator_10  al2033 ) {
    struct Slice_31  elements2034 = ( (  empty456 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_115   mk_dash_actions454 (    enum CAllocator_10  al3695 ) {
    return ( (struct Actions_115) { .f_list = ( (  mk455 ) ( (  al3695 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_116_NoChangeset ) } );
}

static  struct TextBuf_114   mk365 (   struct env121* env ,    enum CAllocator_10  al3794 ) {
    struct envunion122  temp366 = ( (struct envunion122){ .fun = (  struct List_14  (*) (  struct env53*  ,    struct Array_55  ,    enum CAllocator_10  ) )from_dash_iter367 , .env =  env->envinst53 } );
    return ( (struct TextBuf_114) { .f_al = (  al3794 ) , .f_buf = ( temp366.fun ( &temp366.env ,  ( (  from_dash_listlike438 ) ( ( (struct Array_55) { ._arr = { ( (  mk_dash_line439 ) ( ( (  mk447 ) ( (  al3794 ) ) ) ) ) } } ) ) ) ,  (  al3794 ) ) ) , .f_actions = ( (  mk_dash_actions454 ) ( (  al3794 ) ) ) , .f_filename = ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) } );
}

struct TypeSize_465 {
    size_t  f_size;
};

static  struct TypeSize_465   get_dash_typesize464 (  ) {
    uint8_t  temp466;
    return ( (struct TypeSize_465) { .f_size = ( sizeof( ( (  temp466 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr467 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   allocate463 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize464 ) ( ) ) ) .f_size );
    uint8_t *  ptr1959 = ( (  cast_dash_ptr467 ) ( ( ( malloc ) ( (  op_dash_mul413 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct StrConcat_470 {
    struct StrConcat_330  field0;
    struct StrView_27  field1;
};

static struct StrConcat_470 StrConcat_470_StrConcat (  struct StrConcat_330  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_470 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_473 {
    struct StrView_27  field0;
    struct StrConcat_470  field1;
};

static struct StrConcat_473 StrConcat_473_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_470  field1 ) {
    return ( struct StrConcat_473 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_472 {
    struct StrConcat_473  field0;
    struct Char_65  field1;
};

static struct StrConcat_472 StrConcat_472_StrConcat (  struct StrConcat_473  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_472 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str475 (    struct StrConcat_470  self1510 ) {
    struct StrConcat_470  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str339 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str474 (    struct StrConcat_473  self1510 ) {
    struct StrConcat_473  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str475 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str471 (    struct StrConcat_472  self1510 ) {
    struct StrConcat_472  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str474 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic469 (    struct StrConcat_470  errmsg1714 ) {
    ( (  print_dash_str471 ) ( ( ( StrConcat_472_StrConcat ) ( ( ( StrConcat_473_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct SliceIter_478 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_477 {
    struct SliceIter_478  f_left_dash_it;
    struct FromIter_424  f_right_dash_it;
};

struct env479 {
    ;
    ;
    struct Slice_11  dest1855;
};

struct Tuple2_481 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_481 Tuple2_481_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_481 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion480 {
    enum Unit_8  (*fun) (  struct env479*  ,    struct Tuple2_481  );
    struct env479 env;
};

static  struct Zip_477   into_dash_iter483 (    struct Zip_477  self912 ) {
    return (  self912 );
}

struct Maybe_484 {
    enum {
        Maybe_484_None_t,
        Maybe_484_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_481  field0;
        } Maybe_484_Just_s;
    } stuff;
};

static struct Maybe_484 Maybe_484_Just (  struct Tuple2_481  field0 ) {
    return ( struct Maybe_484 ) { .tag = Maybe_484_Just_t, .stuff = { .Maybe_484_Just_s = { .field0 = field0 } } };
};

struct Maybe_486 {
    enum {
        Maybe_486_None_t,
        Maybe_486_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_486_Just_s;
    } stuff;
};

static struct Maybe_486 Maybe_486_Just (  uint8_t  field0 ) {
    return ( struct Maybe_486 ) { .tag = Maybe_486_Just_t, .stuff = { .Maybe_486_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_486   next487 (    struct SliceIter_478 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp298 ( (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_486) { .tag = Maybe_486_None_t } );
    }
    uint8_t  elem1832 = ( * ( (  offset_dash_ptr308 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_486_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_484   next485 (    struct Zip_477 *  self915 ) {
    struct Zip_477  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_486  dref917 = ( (  next487 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_486_None_t ) {
            return ( (struct Maybe_484) { .tag = Maybe_484_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_486_Just_t ) {
                struct Maybe_164  dref919 = ( (  next430 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_484) { .tag = Maybe_484_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next487 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next430 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_484_Just ) ( ( ( Tuple2_481_Tuple2 ) ( ( dref917 .stuff .Maybe_486_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each476 (    struct Zip_477  iterable1075 ,   struct envunion480  fun1077 ) {
    struct Zip_477  temp482 = ( (  into_dash_iter483 ) ( (  iterable1075 ) ) );
    struct Zip_477 *  it1078 = ( &temp482 );
    while ( ( true ) ) {
        struct Maybe_484  dref1079 = ( (  next485 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_484_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_484_Just_t ) {
                struct envunion480  temp488 = (  fun1077 );
                ( temp488.fun ( &temp488.env ,  ( dref1079 .stuff .Maybe_484_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_478   into_dash_iter490 (    struct Slice_11  self1824 ) {
    return ( (struct SliceIter_478) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_477   zip489 (    struct Slice_11  left923 ,    struct FromIter_424  right925 ) {
    struct SliceIter_478  left_dash_it926 = ( (  into_dash_iter490 ) ( (  left923 ) ) );
    struct FromIter_424  right_dash_it927 = ( (  into_dash_iter434 ) ( (  right925 ) ) );
    return ( (struct Zip_477) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  uint8_t *   get_dash_ptr493 (    struct Slice_11  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp298 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1762 = ( (  offset_dash_ptr308 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set492 (    struct Slice_11  slice1776 ,    size_t  i1778 ,    uint8_t  x1780 ) {
    uint8_t *  ep1781 = ( (  get_dash_ptr493 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam491 (   struct env479* env ,    struct Tuple2_481  dref1856 ) {
    return ( (  set492 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size420 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to468 (    struct Slice_11  src1853 ,    struct Slice_11  dest1855 ) {
    if ( (  cmp298 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic469 ) ( ( ( StrConcat_470_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env479 envinst479 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each476 ) ( ( (  zip489 ) ( (  src1853 ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  ( (struct envunion480){ .fun = (  enum Unit_8  (*) (  struct env479*  ,    struct Tuple2_481  ) )lam491 , .env =  envinst479 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   char_dash_u8494 (    struct Char_65  c719 ) {
    struct CharDestructured_345  dref720 = ( (  destructure347 ) ( (  c719 ) ) );
    if ( dref720.tag == CharDestructured_345_Ref_t ) {
        return ( * ( ( dref720 .stuff .CharDestructured_345_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref720.tag == CharDestructured_345_Scalar_t ) {
            return ( (  u32_dash_u8153 ) ( ( ( dref720 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_27   clone_dash_0462 (    struct StrView_27  s2157 ,    enum CAllocator_10  al2159 ) {
    size_t  cnt2160 = ( ( (  s2157 ) .f_contents ) .f_count );
    struct Slice_11  nus2161 = ( (  allocate463 ) ( (  al2159 ) ,  (  op_dash_add319 ( (  cnt2160 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to468 ) ( ( (  s2157 ) .f_contents ) ,  (  nus2161 ) ) );
    ( (  set492 ) ( (  nus2161 ) ,  (  cnt2160 ) ,  ( (  char_dash_u8494 ) ( ( (  from_dash_charlike354 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2161 ) .f_ptr ) , .f_count = (  cnt2160 ) } ) } );
}

static  const char*   from_dash_charlike496 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr501 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of502 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed499 (  ) {
    FILE *  temp500;
    FILE *  x571 = (  temp500 );
    ( ( memset ) ( ( (  cast_dash_ptr501 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of502 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  FILE *   null_dash_ptr498 (  ) {
    return ( (  zeroed499 ) ( ) );
}

static  bool   is_dash_ptr_dash_null497 (    FILE *  p581 ) {
    return ( (  p581 ) == ( (  null_dash_ptr498 ) ( ) ) );
}

static  int32_t   seek_dash_end503 (  ) {
    return (  from_dash_integral67 ( 2 ) );
}

static  int32_t   seek_dash_set504 (  ) {
    return (  from_dash_integral67 ( 0 ) );
}

static  struct Char_65   nullchar505 (  ) {
    return ( (  from_dash_charlike354 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  size_t   min507 (    size_t  l1237 ,    size_t  r1239 ) {
    if ( (  cmp298 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Slice_11   subslice506 (    struct Slice_11  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    uint8_t *  begin_dash_ptr1789 = ( (  offset_dash_ptr308 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp298 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp298 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub297 ( ( (  min507 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct Maybe_94   try_dash_read_dash_contents495 (    const char*  filename2962 ,    enum CAllocator_10  al2964 ) {
    FILE *  file2965 = ( ( fopen ) ( (  filename2962 ) ,  ( (  from_dash_charlike496 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null497 ) ( (  file2965 ) ) ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    ( ( fseek ) ( (  file2965 ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  seek_dash_end503 ) ( ) ) ) );
    int32_t  file_dash_size2966 = ( ( ftell ) ( (  file2965 ) ) );
    ( ( fseek ) ( (  file2965 ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  seek_dash_set504 ) ( ) ) ) );
    struct Slice_11  file_dash_buf2967 = ( ( (  allocate463 ) ( (  al2964 ) ,  (  op_dash_add319 ( ( (  i32_dash_size420 ) ( (  file_dash_size2966 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2967 ) .f_ptr ) ,  (  file_dash_size2966 ) ,  (  from_dash_integral67 ( 1 ) ) ,  (  file2965 ) ) );
    ( (  set492 ) ( (  file_dash_buf2967 ) ,  ( (  i32_dash_size420 ) ( (  file_dash_size2966 ) ) ) ,  ( (  char_dash_u8494 ) ( ( (  nullchar505 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2965 ) ) );
    struct StrView_27  str2968 = ( (struct StrView_27) { .f_contents = ( (  subslice506 ) ( (  file_dash_buf2967 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub297 ( ( (  file_dash_buf2967 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_94_Just ) ( (  str2968 ) ) );
}

static  const char*   cast509 (    uint8_t *  x356 ) {
    return ( (const char* ) (  x356 ) );
}

static  const char*   as_dash_const_dash_str508 (    struct StrView_27  s2164 ) {
    return ( (  cast509 ) ( ( ( (  s2164 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr512 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free511 (    enum CAllocator_10  dref1961 ,    struct Slice_11  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr512 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free510 (    struct StrView_27  s2172 ,    enum CAllocator_10  al2174 ) {
    ( (  free511 ) ( (  al2174 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2172 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

struct Tuple2_514 {
    struct Maybe_486  field0;
    struct Maybe_486  field1;
};

static struct Tuple2_514 Tuple2_514_Tuple2 (  struct Maybe_486  field0 ,  struct Maybe_486  field1 ) {
    return ( struct Tuple2_514 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq513 (    struct Maybe_486  l141 ,    struct Maybe_486  r143 ) {
    struct Tuple2_514  dref144 = ( ( Tuple2_514_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_486_None_t && dref144 .field1.tag == Maybe_486_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_486_Just_t && dref144 .field1.tag == Maybe_486_Just_t ) {
            return (  eq311 ( ( dref144 .field0 .stuff .Maybe_486_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_486_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  struct Maybe_486   try_dash_get515 (    struct Slice_11  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp298 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_486) { .tag = Maybe_486_None_t } );
    }
    uint8_t *  elem_dash_ptr1768 = ( (  offset_dash_ptr308 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_486_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  uint8_t   ascii_dash_u8516 (    char  c777 ) {
    return ( ( (uint8_t ) (  c777 ) ) );
}

static  char   from_dash_charlike517 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq407 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp518 = ( (  from_dash_string68 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp518);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

static  struct StrView_27   byte_dash_substr519 (    struct StrView_27  s2188 ,    size_t  from2190 ,    size_t  to2192 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice506 ) ( ( (  s2188 ) .f_contents ) ,  (  from2190 ) ,  (  to2192 ) ) ) } );
}

static  enum Ordering_167   cmp523 (    struct Pos_26  l3629 ,    struct Pos_26  r3631 ) {
    enum Ordering_167  dref3632 = ( (  cmp166 ) ( ( (  l3629 ) .f_line ) ,  ( (  r3631 ) .f_line ) ) );
    switch (  dref3632 ) {
        case Ordering_167_EQ : {
            return ( (  cmp166 ) ( ( (  l3629 ) .f_bi ) ,  ( (  r3631 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_167  els3633 =  dref3632;
            return (  els3633 );
            break;
        }
    }
}

static  struct Pos_26   min522 (    struct Pos_26  l1237 ,    struct Pos_26  r1239 ) {
    if ( (  cmp523 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Pos_26   max524 (    struct Pos_26  l1316 ,    struct Pos_26  r1318 ) {
    if ( (  cmp523 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  bool   eq526 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq525 (    struct Pos_26  l3624 ,    struct Pos_26  r3626 ) {
    return ( (  eq526 ( ( (  l3624 ) .f_line ) , ( (  r3626 ) .f_line ) ) ) && (  eq526 ( ( (  l3624 ) .f_bi ) , ( (  r3626 ) .f_bi ) ) ) );
}

static  size_t   size527 (    struct List_14 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

static  struct Line_16 *   get_dash_ptr532 (    struct List_14 *  list2003 ,    size_t  i2005 ) {
    if ( ( (  cmp298 ( (  i2005 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2005 ) , ( ( * (  list2003 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2005 ) ) ) ,  ( (  from_dash_string208 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2003 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr419 ) ( ( ( * (  list2003 ) ) .f_elements ) ,  (  i2005 ) ) );
}

static  struct Line_16   get531 (    struct List_14 *  list2013 ,    size_t  i2015 ) {
    return ( * ( (  get_dash_ptr532 ) ( (  list2013 ) ,  (  i2015 ) ) ) );
}

static  struct Slice_11   from533 (    struct Slice_11  slice1793 ,    size_t  from1795 ) {
    return ( (  subslice506 ) ( (  slice1793 ) ,  (  from1795 ) ,  ( (  slice1793 ) .f_count ) ) );
}

static  struct Slice_11   to_dash_slice534 (    struct List_9  l2128 ) {
    uint8_t *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

static  enum Unit_8   set535 (    struct List_14 *  list2023 ,    size_t  i2025 ,    struct Line_16  elem2027 ) {
    if ( ( (  cmp298 ( (  i2025 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2025 ) , ( ( * (  list2023 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2025 ) ) ) ,  ( (  from_dash_string208 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2023 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set418 ) ( ( ( * (  list2023 ) ) .f_elements ) ,  (  i2025 ) ,  (  elem2027 ) ) );
    return ( Unit_8_Unit );
}

struct env542 {
    struct env6 envinst6;
    struct List_9 *  list2100;
};

struct envunion543 {
    enum Unit_8  (*fun) (  struct env542*  ,    uint8_t  );
    struct env542 env;
};

static  enum Unit_8   for_dash_each541 (    struct Slice_11  iterable1075 ,   struct envunion543  fun1077 ) {
    struct SliceIter_478  temp544 = ( (  into_dash_iter490 ) ( (  iterable1075 ) ) );
    struct SliceIter_478 *  it1078 = ( &temp544 );
    while ( ( true ) ) {
        struct Maybe_486  dref1079 = ( (  next487 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_486_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_486_Just_t ) {
                struct envunion543  temp545 = (  fun1077 );
                ( temp545.fun ( &temp545.env ,  ( dref1079 .stuff .Maybe_486_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env551 {
    ;
    ;
    struct Slice_11  new_dash_slice2044;
};

struct envunion552 {
    enum Unit_8  (*fun) (  struct env551*  ,    struct Tuple2_481  );
    struct env551 env;
};

static  enum Unit_8   lam553 (   struct env551* env ,    struct Tuple2_481  dref2045 ) {
    return ( (  set492 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size420 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

static  enum Unit_8   for_dash_each554 (    struct Zip_477  iterable1075 ,   struct envunion552  fun1077 ) {
    struct Zip_477  temp555 = ( (  into_dash_iter483 ) ( (  iterable1075 ) ) );
    struct Zip_477 *  it1078 = ( &temp555 );
    while ( ( true ) ) {
        struct Maybe_484  dref1079 = ( (  next485 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_484_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_484_Just_t ) {
                struct envunion552  temp556 = (  fun1077 );
                ( temp556.fun ( &temp556.env ,  ( dref1079 .stuff .Maybe_484_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full550 (   struct env1* env ,    struct List_9 *  list2043 ) {
    if ( (  eq407 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate463 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq407 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2044 = ( (  allocate463 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul413 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env551 envinst551 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion552  fun2048 = ( (struct envunion552){ .fun = (  enum Unit_8  (*) (  struct env551*  ,    struct Tuple2_481  ) )lam553 , .env =  envinst551 } );
            ( (  for_dash_each554 ) ( ( (  zip489 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free511 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add548 (   struct env6* env ,    struct List_9 *  list2051 ,    uint8_t  elem2053 ) {
    struct envunion7  temp549 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full550 , .env =  env->envinst1 } );
    ( temp549.fun ( &temp549.env ,  (  list2051 ) ) );
    ( (  set492 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add319 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam546 (   struct env542* env ,    uint8_t  x2104 ) {
    struct envunion47  temp547 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add548 , .env =  env->envinst6 } );
    return ( temp547.fun ( &temp547.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all540 (   struct env46* env ,    struct List_9 *  list2100 ,    struct Slice_11  it2102 ) {
    struct env542 envinst542 = {
        .envinst6 = env->envinst6 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each541 ) ( (  it2102 ) ,  ( (struct envunion543){ .fun = (  enum Unit_8  (*) (  struct env542*  ,    uint8_t  ) )lam546 , .env =  envinst542 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter537 (   struct env51* env ,    struct Slice_11  iter2141 ,    enum CAllocator_10  al2143 ) {
    struct List_9  temp538 = ( (  mk447 ) ( (  al2143 ) ) );
    struct List_9 *  list2144 = ( &temp538 );
    struct envunion52  temp539 = ( (struct envunion52){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all540 , .env =  env->envinst46 } );
    ( temp539.fun ( &temp539.env ,  (  list2144 ) ,  (  iter2141 ) ) );
    return ( * (  list2144 ) );
}

static  struct StrView_27   or_dash_else558 (    struct Maybe_94  self1734 ,    struct StrView_27  alt1736 ) {
    struct Maybe_94  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_94_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_94_Just_t ) {
            return ( dref1737 .stuff .Maybe_94_Just_s .field0 );
        }
    }
}

struct LineIter_560 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  uint8_t   undefined564 (  ) {
    uint8_t  temp565;
    return (  temp565 );
}

static  uint8_t   or_dash_fail563 (    struct Maybe_486  x1727 ,    struct StrConcat_329  errmsg1729 ) {
    struct Maybe_486  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_486_None_t ) {
        ( (  panic331 ) ( (  errmsg1729 ) ) );
        return ( (  undefined564 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_486_Just_t ) {
            return ( dref1730 .stuff .Maybe_486_Just_s .field0 );
        }
    }
}

static  uint8_t   get562 (    struct Slice_11  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail563 ) ( ( (  try_dash_get515 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Maybe_94   next561 (    struct LineIter_560 *  self2434 ) {
    if ( (  cmp298 ( ( ( * (  self2434 ) ) .f_last ) , ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    size_t  i2435 = ( ( * (  self2434 ) ) .f_last );
    while ( ( (  cmp298 ( (  i2435 ) , ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq311 ( ( (  get562 ) ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) ,  (  i2435 ) ) ) , ( (  char_dash_u8494 ) ( ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2435 = (  op_dash_add319 ( (  i2435 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2436 = ( (  byte_dash_substr519 ) ( ( ( * (  self2434 ) ) .f_og ) ,  ( ( * (  self2434 ) ) .f_last ) ,  (  i2435 ) ) );
    if ( (  cmp298 ( (  i2435 ) , ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2435 = (  op_dash_add319 ( (  i2435 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2434 ) .f_last = (  i2435 );
    return ( ( Maybe_94_Just ) ( (  line2436 ) ) );
}

static  struct LineIter_560   into_dash_iter567 (    struct LineIter_560  self2431 ) {
    return (  self2431 );
}

static  struct Maybe_94   head559 (    struct LineIter_560  it1143 ) {
    struct LineIter_560  temp566 = ( (  into_dash_iter567 ) ( (  it1143 ) ) );
    return ( (  next561 ) ( ( &temp566 ) ) );
}

static  struct LineIter_560   lines568 (    struct StrView_27  s2428 ) {
    return ( (struct LineIter_560) { .f_og = (  s2428 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env573 {
    ;
    struct Char_65  c2227;
};

struct envunion574 {
    bool  (*fun) (  struct env573*  ,    struct Char_65  );
    struct env573 env;
};

struct SplitIter_572 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion574  f_fun;
};

struct Drop_571 {
    struct SplitIter_572  field0;
    size_t  field1;
};

static struct Drop_571 Drop_571_Drop (  struct SplitIter_572  field0 ,  size_t  field1 ) {
    return ( struct Drop_571 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_570 {
    struct Drop_571  f_left_dash_it;
    struct FromIter_424  f_right_dash_it;
};

static  struct Zip_570   into_dash_iter575 (    struct Zip_570  self912 ) {
    return (  self912 );
}

static  struct Drop_571   into_dash_iter577 (    struct Drop_571  self846 ) {
    return (  self846 );
}

static  struct Zip_570   zip576 (    struct Drop_571  left923 ,    struct FromIter_424  right925 ) {
    struct Drop_571  left_dash_it926 = ( (  into_dash_iter577 ) ( (  left923 ) ) );
    struct FromIter_424  right_dash_it927 = ( (  into_dash_iter434 ) ( (  right925 ) ) );
    return ( (struct Zip_570) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  struct SplitIter_572   into_dash_iter579 (    struct SplitIter_572  self2232 ) {
    return (  self2232 );
}

static  struct Drop_571   drop578 (    struct SplitIter_572  iterable853 ,    size_t  i855 ) {
    struct SplitIter_572  it856 = ( (  into_dash_iter579 ) ( (  iterable853 ) ) );
    return ( ( Drop_571_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SplitIter_572   split_dash_by_dash_filter581 (    struct StrView_27  s2220 ,   struct envunion574  fun2222 ) {
    return ( (struct SplitIter_572) { .f_og = (  s2220 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2222 ) } );
}

struct Tuple2_584 {
    struct CharDestructured_345  field0;
    struct CharDestructured_345  field1;
};

static struct Tuple2_584 Tuple2_584_Tuple2 (  struct CharDestructured_345  field0 ,  struct CharDestructured_345  field1 ) {
    return ( struct Tuple2_584 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add585 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq587 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq586 (    struct Scalar_346  l725 ,    struct Scalar_346  r727 ) {
    return (  eq587 ( ( (  l725 ) .f_value ) , ( (  r727 ) .f_value ) ) );
}

static  bool   eq583 (    struct Char_65  l730 ,    struct Char_65  r732 ) {
    if ( ( !  eq407 ( ( (  l730 ) .f_num_dash_bytes ) , ( (  r732 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_584  dref733 = ( ( Tuple2_584_Tuple2 ) ( ( (  destructure347 ) ( (  l730 ) ) ) ,  ( (  destructure347 ) ( (  r732 ) ) ) ) );
    if ( dref733 .field0.tag == CharDestructured_345_Ref_t && dref733 .field1.tag == CharDestructured_345_Ref_t ) {
        int64_t  i736 = (  from_dash_integral296 ( 0 ) );
        while ( (  cmp298 ( ( (size_t ) (  i736 ) ) , ( ( dref733 .field0 .stuff .CharDestructured_345_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq311 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref733 .field0 .stuff .CharDestructured_345_Ref_s .field0 ) .f_ptr ) ) + (  i736 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref733 .field1 .stuff .CharDestructured_345_Ref_s .field0 ) .f_ptr ) ) + (  i736 ) ) ) ) ) ) ) {
                return ( false );
            }
            i736 = (  op_dash_add585 ( (  i736 ) , (  from_dash_integral296 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref733 .field0.tag == CharDestructured_345_Scalar_t && dref733 .field1.tag == CharDestructured_345_Scalar_t ) {
            return (  eq586 ( ( dref733 .field0 .stuff .CharDestructured_345_Scalar_s .field0 ) , ( dref733 .field1 .stuff .CharDestructured_345_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref733 .field0.tag == CharDestructured_345_Scalar_t && dref733 .field1.tag == CharDestructured_345_Ref_t ) {
                return (  eq311 ( ( (  u32_dash_u8153 ) ( ( ( dref733 .field0 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref733 .field1 .stuff .CharDestructured_345_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref733 .field0.tag == CharDestructured_345_Ref_t && dref733 .field1.tag == CharDestructured_345_Scalar_t ) {
                    return (  eq311 ( ( (  u32_dash_u8153 ) ( ( ( dref733 .field1 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref733 .field0 .stuff .CharDestructured_345_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam582 (   struct env573* env ,    struct Char_65  cc2229 ) {
    return (  eq583 ( (  cc2229 ) , ( env->c2227 ) ) );
}

static  struct SplitIter_572   split_dash_by_dash_each580 (    struct StrView_27  s2225 ,    struct Char_65  c2227 ) {
    struct env573 envinst573 = {
        .c2227 =  c2227 ,
    };
    return ( (  split_dash_by_dash_filter581 ) ( (  s2225 ) ,  ( (struct envunion574){ .fun = (  bool  (*) (  struct env573*  ,    struct Char_65  ) )lam582 , .env =  envinst573 } ) ) );
}

struct Tuple2_590 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_590 Tuple2_590_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_590 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_589 {
    enum {
        Maybe_589_None_t,
        Maybe_589_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_590  field0;
        } Maybe_589_Just_s;
    } stuff;
};

static struct Maybe_589 Maybe_589_Just (  struct Tuple2_590  field0 ) {
    return ( struct Maybe_589 ) { .tag = Maybe_589_Just_t, .stuff = { .Maybe_589_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_94   next593 (    struct SplitIter_572 *  self2235 ) {
    if ( (  cmp298 ( ( ( * (  self2235 ) ) .f_last ) , ( ( ( ( * (  self2235 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    size_t  i2236 = ( ( * (  self2235 ) ) .f_last );
    while ( (  cmp298 ( (  i2236 ) , ( ( ( ( * (  self2235 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2237 = ( (  get_dash_ptr493 ) ( ( ( ( * (  self2235 ) ) .f_og ) .f_contents ) ,  (  i2236 ) ) );
        struct Char_65  c2238 = ( (  scan_dash_from_dash_mem313 ) ( (  ptr2237 ) ) );
        struct envunion574  temp594 = ( ( * (  self2235 ) ) .f_fun );
        if ( ( temp594.fun ( &temp594.env ,  (  c2238 ) ) ) ) {
            break;
        }
        i2236 = (  op_dash_add319 ( (  i2236 ) , ( (  next_dash_char314 ) ( (  ptr2237 ) ) ) ) );
    }
    struct StrView_27  line2239 = ( (  byte_dash_substr519 ) ( ( ( * (  self2235 ) ) .f_og ) ,  ( ( * (  self2235 ) ) .f_last ) ,  (  i2236 ) ) );
    i2236 = (  op_dash_add319 ( (  i2236 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2235 ) .f_last = (  i2236 );
    return ( ( Maybe_94_Just ) ( (  line2239 ) ) );
}

static  struct Maybe_94   next592 (    struct Drop_571 *  dref848 ) {
    while ( (  cmp298 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next593 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub297 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next593 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  struct Maybe_589   next591 (    struct Zip_570 *  self915 ) {
    struct Zip_570  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_94  dref917 = ( (  next592 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_94_None_t ) {
            return ( (struct Maybe_589) { .tag = Maybe_589_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_94_Just_t ) {
                struct Maybe_164  dref919 = ( (  next430 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_589) { .tag = Maybe_589_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next592 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next430 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_589_Just ) ( ( ( Tuple2_590_Tuple2 ) ( ( dref917 .stuff .Maybe_94_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion597 {
    struct List_9  (*fun) (  struct env51*  ,    struct Slice_11  ,    enum CAllocator_10  );
    struct env51 env;
};

static  enum Unit_8   insert599 (   struct env37* env ,    struct List_14 *  list2056 ,    size_t  i2058 ,    struct Line_16  elem2060 ) {
    if ( ( (  cmp298 ( (  i2058 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2058 ) , ( ( * (  list2056 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2058 ) ) ) ,  ( (  from_dash_string208 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq407 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp600 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add404 , .env =  env->envinst12 } );
        ( temp600.fun ( &temp600.env ,  (  list2056 ) ,  (  elem2060 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp601 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full406 , .env =  env->envinst2 } );
    ( temp601.fun ( &temp601.env ,  (  list2056 ) ) );
    size_t  ii2061 = (  op_dash_sub297 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp298 ( (  ii2061 ) , (  i2058 ) ) != 0 ) ) {
        ( (  set418 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  op_dash_add319 ( (  ii2061 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get531 ) ( (  list2056 ) ,  (  ii2061 ) ) ) ) );
        if ( (  eq407 ( (  ii2061 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2061 = (  op_dash_sub297 ( (  ii2061 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set418 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  i2058 ) ,  (  elem2060 ) ) );
    (*  list2056 ) .f_count = (  op_dash_add319 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion603 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  enum Unit_8   free605 (    struct List_9 *  list2037 ) {
    ( (  free511 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line604 (    struct Line_16 *  line3710 ) {
    ( (  free605 ) ( ( & ( ( * (  line3710 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot530 (   struct env106* env ,    struct TextBuf_114 *  self3743 ,    struct Pos_26  p3745 ,    struct StrView_27  bytes3747 ) {
    enum CAllocator_10  al3748 = ( ( ( * (  self3743 ) ) .f_buf ) .f_al );
    struct List_14 *  buf3749 = ( & ( ( * (  self3743 ) ) .f_buf ) );
    struct Line_16  extracted_dash_line_dash_buf3750 = ( (  get531 ) ( (  buf3749 ) ,  ( (  i32_dash_size420 ) ( ( (  p3745 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3751 = ( (  from533 ) ( ( (  to_dash_slice534 ) ( ( (  extracted_dash_line_dash_buf3750 ) .f_line ) ) ) ,  ( (  i32_dash_size420 ) ( ( (  p3745 ) .f_bi ) ) ) ) );
    struct envunion107  temp536 = ( (struct envunion107){ .fun = (  struct List_9  (*) (  struct env51*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter537 , .env =  env->envinst51 } );
    ( (  set535 ) ( (  buf3749 ) ,  ( (  i32_dash_size420 ) ( ( (  p3745 ) .f_line ) ) ) ,  ( (  mk_dash_line439 ) ( ( temp536.fun ( &temp536.env ,  ( (  subslice506 ) ( ( (  to_dash_slice534 ) ( ( (  extracted_dash_line_dash_buf3750 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size420 ) ( ( (  p3745 ) .f_bi ) ) ) ) ) ,  (  al3748 ) ) ) ) ) ) );
    struct Line_16 *  last_dash_line3752 = ( (  get_dash_ptr532 ) ( (  buf3749 ) ,  ( (  i32_dash_size420 ) ( ( (  p3745 ) .f_line ) ) ) ) );
    struct envunion109  temp557 = ( (struct envunion109){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all540 , .env =  env->envinst46 } );
    ( temp557.fun ( &temp557.env ,  ( & ( ( * (  last_dash_line3752 ) ) .f_line ) ) ,  ( ( (  or_dash_else558 ) ( ( (  head559 ) ( ( (  lines568 ) ( (  bytes3747 ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3753 = (  from_dash_integral67 ( 0 ) );
    struct Zip_570  temp569 =  into_dash_iter575 ( ( (  zip576 ) ( ( (  drop578 ) ( ( (  split_dash_by_dash_each580 ) ( (  bytes3747 ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_589  __cond588 =  next591 (&temp569);
        if (  __cond588 .tag == 0 ) {
            break;
        }
        struct Tuple2_590  dref3754 =  __cond588 .stuff .Maybe_589_Just_s .field0;
        struct envunion597  temp596 = ( (struct envunion597){ .fun = (  struct List_9  (*) (  struct env51*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter537 , .env =  env->envinst51 } );
        struct Line_16  temp595 = ( (  mk_dash_line439 ) ( ( temp596.fun ( &temp596.env ,  ( ( dref3754 .field0 ) .f_contents ) ,  (  al3748 ) ) ) ) );
        struct Line_16 *  nuline3757 = ( &temp595 );
        size_t  next_dash_line3758 = ( (  i32_dash_size420 ) ( (  op_dash_add168 ( ( (  p3745 ) .f_line ) , ( dref3754 .field1 ) ) ) ) );
        struct envunion108  temp598 = ( (struct envunion108){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_14 *  ,    size_t  ,    struct Line_16  ) )insert599 , .env =  env->envinst37 } );
        ( temp598.fun ( &temp598.env ,  (  buf3749 ) ,  (  next_dash_line3758 ) ,  ( * (  nuline3757 ) ) ) );
        last_dash_line3752 = ( (  get_dash_ptr532 ) ( (  buf3749 ) ,  (  next_dash_line3758 ) ) );
        lines_dash_added3753 = (  op_dash_add168 ( (  lines_dash_added3753 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    struct envunion603  temp602 = ( (struct envunion603){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all540 , .env =  env->envinst46 } );
    ( temp602.fun ( &temp602.env ,  ( & ( ( * (  last_dash_line3752 ) ) .f_line ) ) ,  (  remaining3751 ) ) );
    ( (  free_dash_line604 ) ( ( & (  extracted_dash_line_dash_buf3750 ) ) ) );
    return (  lines_dash_added3753 );
}

static  size_t   size606 (    struct List_9 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

struct StrConcat_612 {
    struct StrConcat_87  field0;
    struct Char_65  field1;
};

static struct StrConcat_612 StrConcat_612_StrConcat (  struct StrConcat_87  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_612 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_611 {
    struct StrConcat_612  field0;
    size_t  field1;
};

static struct StrConcat_611 StrConcat_611_StrConcat (  struct StrConcat_612  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_611 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_610 {
    struct StrConcat_611  field0;
    struct Char_65  field1;
};

static struct StrConcat_610 StrConcat_610_StrConcat (  struct StrConcat_611  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_610 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_615 {
    struct StrView_27  field0;
    struct StrConcat_610  field1;
};

static struct StrConcat_615 StrConcat_615_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_610  field1 ) {
    return ( struct StrConcat_615 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_614 {
    struct StrConcat_615  field0;
    struct Char_65  field1;
};

static struct StrConcat_614 StrConcat_614_StrConcat (  struct StrConcat_615  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_614 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str619 (    struct StrConcat_612  self1510 ) {
    struct StrConcat_612  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str341 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str618 (    struct StrConcat_611  self1510 ) {
    struct StrConcat_611  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str619 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str617 (    struct StrConcat_610  self1510 ) {
    struct StrConcat_610  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str618 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str616 (    struct StrConcat_615  self1510 ) {
    struct StrConcat_615  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str617 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str613 (    struct StrConcat_614  self1510 ) {
    struct StrConcat_614  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str616 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic609 (    struct StrConcat_610  errmsg1714 ) {
    ( (  print_dash_str613 ) ( ( ( StrConcat_614_StrConcat ) ( ( ( StrConcat_615_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Drop_621 {
    struct Zip_477  field0;
    size_t  field1;
};

static struct Drop_621 Drop_621_Drop (  struct Zip_477  field0 ,  size_t  field1 ) {
    return ( struct Drop_621 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env622 {
    struct List_9 *  list2064;
    ;
    ;
    size_t  num_dash_elems2069;
    ;
};

struct envunion623 {
    enum Unit_8  (*fun) (  struct env622*  ,    struct Tuple2_481  );
    struct env622 env;
};

static  struct Drop_621   into_dash_iter625 (    struct Drop_621  self846 ) {
    return (  self846 );
}

static  struct Maybe_484   next626 (    struct Drop_621 *  dref848 ) {
    while ( (  cmp298 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next485 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub297 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next485 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each620 (    struct Drop_621  iterable1075 ,   struct envunion623  fun1077 ) {
    struct Drop_621  temp624 = ( (  into_dash_iter625 ) ( (  iterable1075 ) ) );
    struct Drop_621 *  it1078 = ( &temp624 );
    while ( ( true ) ) {
        struct Maybe_484  dref1079 = ( (  next626 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_484_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_484_Just_t ) {
                struct envunion623  temp627 = (  fun1077 );
                ( temp627.fun ( &temp627.env ,  ( dref1079 .stuff .Maybe_484_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_621   drop628 (    struct Zip_477  iterable853 ,    size_t  i855 ) {
    struct Zip_477  it856 = ( (  into_dash_iter483 ) ( (  iterable853 ) ) );
    return ( ( Drop_621_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SliceIter_478   into_dash_iter630 (    struct List_9  self2030 ) {
    return ( (  into_dash_iter490 ) ( ( (  subslice506 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Zip_477   zip629 (    struct List_9  left923 ,    struct FromIter_424  right925 ) {
    struct SliceIter_478  left_dash_it926 = ( (  into_dash_iter630 ) ( (  left923 ) ) );
    struct FromIter_424  right_dash_it927 = ( (  into_dash_iter434 ) ( (  right925 ) ) );
    return ( (struct Zip_477) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   set632 (    struct List_9 *  list2023 ,    size_t  i2025 ,    uint8_t  elem2027 ) {
    if ( ( (  cmp298 ( (  i2025 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2025 ) , ( ( * (  list2023 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2025 ) ) ) ,  ( (  from_dash_string208 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2023 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set492 ) ( ( ( * (  list2023 ) ) .f_elements ) ,  (  i2025 ) ,  (  elem2027 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam631 (   struct env622* env ,    struct Tuple2_481  dref2070 ) {
    return ( (  set632 ) ( ( env->list2064 ) ,  (  op_dash_sub297 ( ( (  i32_dash_size420 ) ( ( dref2070 .field1 ) ) ) , ( env->num_dash_elems2069 ) ) ) ,  ( dref2070 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range608 (   struct env40* env ,    struct List_9 *  list2064 ,    size_t  from2066 ,    size_t  to_dash_excl2068 ) {
    if ( (  cmp298 ( (  to_dash_excl2068 ) , (  from2066 ) ) == 0 ) ) {
        ( (  panic609 ) ( ( ( StrConcat_610_StrConcat ) ( ( ( StrConcat_611_StrConcat ) ( ( ( StrConcat_612_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp298 ( (  from2066 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_string208 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp298 ( (  to_dash_excl2068 ) , ( ( * (  list2064 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_string208 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2069 = (  op_dash_sub297 ( (  to_dash_excl2068 ) , (  from2066 ) ) );
    struct env622 envinst622 = {
        .list2064 =  list2064 ,
        .num_dash_elems2069 =  num_dash_elems2069 ,
    };
    ( (  for_dash_each620 ) ( ( (  drop628 ) ( ( (  zip629 ) ( ( * (  list2064 ) ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  op_dash_add319 ( (  from2066 ) , (  num_dash_elems2069 ) ) ) ) ) ,  ( (struct envunion623){ .fun = (  enum Unit_8  (*) (  struct env622*  ,    struct Tuple2_481  ) )lam631 , .env =  envinst622 } ) ) );
    (*  list2064 ) .f_count = (  op_dash_sub297 ( ( ( * (  list2064 ) ) .f_count ) , (  num_dash_elems2069 ) ) );
    size_t  capacity2073 = ( ( ( * (  list2064 ) ) .f_elements ) .f_count );
    if ( (  cmp298 ( (  op_dash_mul413 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  capacity2073 ) ) == 0 ) ) {
        if ( (  eq407 ( ( ( * (  list2064 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free511 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
            (*  list2064 ) .f_elements = ( (  empty448 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2074 = (  op_dash_mul413 ( (  op_dash_add319 ( (  op_dash_div350 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2040 ) ) );
        struct Slice_11  new_dash_slice2075 = ( (  allocate463 ) ( ( ( * (  list2064 ) ) .f_al ) ,  (  new_dash_size2074 ) ) );
        ( (  copy_dash_to468 ) ( ( (  subslice506 ) ( ( ( * (  list2064 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  (  new_dash_slice2075 ) ) );
        ( (  free511 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
        (*  list2064 ) .f_elements = (  new_dash_slice2075 );
    }
    return ( Unit_8_Unit );
}

struct envunion634 {
    int32_t  (*fun) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env106 env;
};

static  enum Unit_8   trim635 (    struct List_9 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min507 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min636 (    int32_t  l1237 ,    int32_t  r1239 ) {
    if ( (  cmp166 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

struct envunion638 {
    int32_t  (*fun) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env106 env;
};

struct Maybe_640 {
    enum {
        Maybe_640_None_t,
        Maybe_640_Just_t,
    } tag;
    union {
        struct {
            struct Slice_11  field0;
        } Maybe_640_Just_s;
    } stuff;
};

static struct Maybe_640 Maybe_640_Just (  struct Slice_11  field0 ) {
    return ( struct Maybe_640 ) { .tag = Maybe_640_Just_t, .stuff = { .Maybe_640_Just_s = { .field0 = field0 } } };
};

static  struct Slice_11   or_dash_else639 (    struct Maybe_640  self1734 ,    struct Slice_11  alt1736 ) {
    struct Maybe_640  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_640_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_640_Just_t ) {
            return ( dref1737 .stuff .Maybe_640_Just_s .field0 );
        }
    }
}

static  struct Maybe_640   fmap_dash_maybe641 (    struct Maybe_384  x1276 ,    struct Slice_11 (*  fun1278 )(    struct Line_16  ) ) {
    struct Maybe_384  dref1279 = (  x1276 );
    if ( dref1279.tag == Maybe_384_None_t ) {
        return ( (struct Maybe_640) { .tag = Maybe_640_None_t } );
    }
    else {
        if ( dref1279.tag == Maybe_384_Just_t ) {
            return ( ( Maybe_640_Just ) ( ( (  fun1278 ) ( ( dref1279 .stuff .Maybe_384_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_384   try_dash_get642 (    struct List_14 *  list2018 ,    size_t  i2020 ) {
    if ( (  cmp298 ( (  i2020 ) , ( ( * (  list2018 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_384) { .tag = Maybe_384_None_t } );
    }
    return ( ( Maybe_384_Just ) ( ( (  get531 ) ( (  list2018 ) ,  (  i2020 ) ) ) ) );
}

static  struct Slice_11   lam643 (    struct Line_16  line3776 ) {
    return ( (  to_dash_slice534 ) ( ( (  line3776 ) .f_line ) ) );
}

struct StrConcat_648 {
    struct StrView_27  field0;
    struct StrView_27  field1;
};

static struct StrConcat_648 StrConcat_648_StrConcat (  struct StrView_27  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_648 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_647 {
    struct StrConcat_648  field0;
    struct Char_65  field1;
};

static struct StrConcat_647 StrConcat_647_StrConcat (  struct StrConcat_648  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_647 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str649 (    struct StrConcat_648  self1510 ) {
    struct StrConcat_648  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str646 (    struct StrConcat_647  self1510 ) {
    struct StrConcat_647  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str649 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert645 (    bool  cond1720 ,    struct StrView_27  msg1722 ) {
    if ( ( ! (  cond1720 ) ) ) {
        ( (  print_dash_str646 ) ( ( ( StrConcat_647_StrConcat ) ( ( ( StrConcat_648_StrConcat ) ( ( (  from_dash_string208 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1722 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_653 {
    struct Zip_422  field0;
    size_t  field1;
};

static struct Drop_653 Drop_653_Drop (  struct Zip_422  field0 ,  size_t  field1 ) {
    return ( struct Drop_653 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env654 {
    struct List_14 *  list2064;
    ;
    ;
    size_t  num_dash_elems2069;
    ;
};

struct envunion655 {
    enum Unit_8  (*fun) (  struct env654*  ,    struct Tuple2_416  );
    struct env654 env;
};

static  struct Drop_653   into_dash_iter657 (    struct Drop_653  self846 ) {
    return (  self846 );
}

static  struct Maybe_427   next658 (    struct Drop_653 *  dref848 ) {
    while ( (  cmp298 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next428 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub297 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next428 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each652 (    struct Drop_653  iterable1075 ,   struct envunion655  fun1077 ) {
    struct Drop_653  temp656 = ( (  into_dash_iter657 ) ( (  iterable1075 ) ) );
    struct Drop_653 *  it1078 = ( &temp656 );
    while ( ( true ) ) {
        struct Maybe_427  dref1079 = ( (  next658 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_427_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_427_Just_t ) {
                struct envunion655  temp659 = (  fun1077 );
                ( temp659.fun ( &temp659.env ,  ( dref1079 .stuff .Maybe_427_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_653   drop660 (    struct Zip_422  iterable853 ,    size_t  i855 ) {
    struct Zip_422  it856 = ( (  into_dash_iter426 ) ( (  iterable853 ) ) );
    return ( ( Drop_653_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct Slice_15   subslice663 (    struct Slice_15  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Line_16 *  begin_dash_ptr1789 = ( (  offset_dash_ptr399 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp298 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp298 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub297 ( ( (  min507 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_423   into_dash_iter662 (    struct List_14  self2030 ) {
    return ( (  into_dash_iter433 ) ( ( (  subslice663 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Zip_422   zip661 (    struct List_14  left923 ,    struct FromIter_424  right925 ) {
    struct SliceIter_423  left_dash_it926 = ( (  into_dash_iter662 ) ( (  left923 ) ) );
    struct FromIter_424  right_dash_it927 = ( (  into_dash_iter434 ) ( (  right925 ) ) );
    return ( (struct Zip_422) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   lam664 (   struct env654* env ,    struct Tuple2_416  dref2070 ) {
    return ( (  set535 ) ( ( env->list2064 ) ,  (  op_dash_sub297 ( ( (  i32_dash_size420 ) ( ( dref2070 .field1 ) ) ) , ( env->num_dash_elems2069 ) ) ) ,  ( dref2070 .field0 ) ) );
}

struct env667 {
    ;
    ;
    struct Slice_15  dest1855;
};

struct envunion668 {
    enum Unit_8  (*fun) (  struct env667*  ,    struct Tuple2_416  );
    struct env667 env;
};

static  enum Unit_8   for_dash_each666 (    struct Zip_422  iterable1075 ,   struct envunion668  fun1077 ) {
    struct Zip_422  temp669 = ( (  into_dash_iter426 ) ( (  iterable1075 ) ) );
    struct Zip_422 *  it1078 = ( &temp669 );
    while ( ( true ) ) {
        struct Maybe_427  dref1079 = ( (  next428 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_427_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_427_Just_t ) {
                struct envunion668  temp670 = (  fun1077 );
                ( temp670.fun ( &temp670.env ,  ( dref1079 .stuff .Maybe_427_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam671 (   struct env667* env ,    struct Tuple2_416  dref1856 ) {
    return ( (  set418 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size420 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to665 (    struct Slice_15  src1853 ,    struct Slice_15  dest1855 ) {
    if ( (  cmp298 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic469 ) ( ( ( StrConcat_470_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env667 envinst667 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each666 ) ( ( (  zip432 ) ( (  src1853 ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  ( (struct envunion668){ .fun = (  enum Unit_8  (*) (  struct env667*  ,    struct Tuple2_416  ) )lam671 , .env =  envinst667 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range651 (   struct env41* env ,    struct List_14 *  list2064 ,    size_t  from2066 ,    size_t  to_dash_excl2068 ) {
    if ( (  cmp298 ( (  to_dash_excl2068 ) , (  from2066 ) ) == 0 ) ) {
        ( (  panic609 ) ( ( ( StrConcat_610_StrConcat ) ( ( ( StrConcat_611_StrConcat ) ( ( ( StrConcat_612_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp298 ( (  from2066 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_string208 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp298 ( (  to_dash_excl2068 ) , ( ( * (  list2064 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_string208 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2069 = (  op_dash_sub297 ( (  to_dash_excl2068 ) , (  from2066 ) ) );
    struct env654 envinst654 = {
        .list2064 =  list2064 ,
        .num_dash_elems2069 =  num_dash_elems2069 ,
    };
    ( (  for_dash_each652 ) ( ( (  drop660 ) ( ( (  zip661 ) ( ( * (  list2064 ) ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  op_dash_add319 ( (  from2066 ) , (  num_dash_elems2069 ) ) ) ) ) ,  ( (struct envunion655){ .fun = (  enum Unit_8  (*) (  struct env654*  ,    struct Tuple2_416  ) )lam664 , .env =  envinst654 } ) ) );
    (*  list2064 ) .f_count = (  op_dash_sub297 ( ( ( * (  list2064 ) ) .f_count ) , (  num_dash_elems2069 ) ) );
    size_t  capacity2073 = ( ( ( * (  list2064 ) ) .f_elements ) .f_count );
    if ( (  cmp298 ( (  op_dash_mul413 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  capacity2073 ) ) == 0 ) ) {
        if ( (  eq407 ( ( ( * (  list2064 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free436 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
            (*  list2064 ) .f_elements = ( (  empty370 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2074 = (  op_dash_mul413 ( (  op_dash_add319 ( (  op_dash_div350 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2040 ) ) );
        struct Slice_15  new_dash_slice2075 = ( (  allocate408 ) ( ( ( * (  list2064 ) ) .f_al ) ,  (  new_dash_size2074 ) ) );
        ( (  copy_dash_to665 ) ( ( (  subslice663 ) ( ( ( * (  list2064 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  (  new_dash_slice2075 ) ) );
        ( (  free436 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
        (*  list2064 ) .f_elements = (  new_dash_slice2075 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action521 (   struct env110* env ,    struct TextBuf_114 *  self3761 ,    struct Pos_26  from_dash_pos3763 ,    struct Pos_26  to_dash_pos3765 ,    struct StrView_27  bytes3767 ) {
    struct Pos_26  from3768 = ( (  min522 ) ( (  from_dash_pos3763 ) ,  (  to_dash_pos3765 ) ) );
    struct Pos_26  to3769 = ( (  max524 ) ( (  from_dash_pos3763 ) ,  (  to_dash_pos3765 ) ) );
    if ( (  eq525 ( (  to3769 ) , (  from3768 ) ) ) ) {
        enum CAllocator_10  al3770 = ( ( ( * (  self3761 ) ) .f_buf ) .f_al );
        if ( ( (  eq407 ( ( (  size527 ) ( ( & ( ( * (  self3761 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size420 ) ( ( (  from3768 ) .f_line ) ) ) ) ) && (  eq526 ( ( (  from3768 ) .f_bi ) , (  from_dash_integral67 ( 0 ) ) ) ) ) ) {
            struct envunion111  temp528 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add404 , .env =  env->envinst12 } );
            ( temp528.fun ( &temp528.env ,  ( & ( ( * (  self3761 ) ) .f_buf ) ) ,  ( (  mk_dash_line439 ) ( ( (  mk447 ) ( (  al3770 ) ) ) ) ) ) );
        }
        struct envunion113  temp529 = ( (struct envunion113){ .fun = (  int32_t  (*) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot530 , .env =  env->envinst106 } );
        ( temp529.fun ( &temp529.env ,  (  self3761 ) ,  (  from3768 ) ,  (  bytes3767 ) ) );
    } else {
        struct List_14 *  lines_dash_buf3771 = ( & ( ( * (  self3761 ) ) .f_buf ) );
        struct Line_16 *  first_dash_line3772 = ( (  get_dash_ptr532 ) ( (  lines_dash_buf3771 ) ,  ( (  i32_dash_size420 ) ( ( (  from3768 ) .f_line ) ) ) ) );
        (*  first_dash_line3772 ) .f_invalidated = ( true );
        if ( ( (  eq526 ( ( (  from3768 ) .f_line ) , ( (  to3769 ) .f_line ) ) ) && (  cmp166 ( ( (  to3769 ) .f_bi ) , (  op_dash_add168 ( ( (  size_dash_i32337 ) ( ( (  size606 ) ( ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion117  temp607 = ( (struct envunion117){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range608 , .env =  env->envinst40 } );
            ( temp607.fun ( &temp607.env ,  ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ,  ( (  i32_dash_size420 ) ( ( (  from3768 ) .f_bi ) ) ) ,  ( (  i32_dash_size420 ) ( ( (  to3769 ) .f_bi ) ) ) ) );
            struct envunion634  temp633 = ( (struct envunion634){ .fun = (  int32_t  (*) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot530 , .env =  env->envinst106 } );
            ( temp633.fun ( &temp633.env ,  (  self3761 ) ,  (  from3768 ) ,  (  bytes3767 ) ) );
        } else {
            ( (  trim635 ) ( ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ,  ( (  i32_dash_size420 ) ( ( (  from3768 ) .f_bi ) ) ) ) );
            struct Line_16 *  last_dash_line3773 = ( (  get_dash_ptr532 ) ( (  lines_dash_buf3771 ) ,  ( (  i32_dash_size420 ) ( ( (  to3769 ) .f_line ) ) ) ) );
            (*  last_dash_line3773 ) .f_invalidated = ( true );
            to3769 .f_bi = ( (  min636 ) ( ( (  to3769 ) .f_bi ) ,  (  op_dash_add168 ( ( (  size_dash_i32337 ) ( ( (  size606 ) ( ( & ( ( * (  last_dash_line3773 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
            if ( (  eq526 ( ( (  to3769 ) .f_bi ) , (  op_dash_add168 ( ( (  size_dash_i32337 ) ( ( (  size606 ) ( ( & ( ( * (  last_dash_line3773 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) {
                to3769 .f_line = (  op_dash_add168 ( ( (  to3769 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) );
                to3769 .f_bi = (  from_dash_integral67 ( 0 ) );
            }
            struct envunion638  temp637 = ( (struct envunion638){ .fun = (  int32_t  (*) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot530 , .env =  env->envinst106 } );
            int32_t  lines_dash_added3774 = ( temp637.fun ( &temp637.env ,  (  self3761 ) ,  (  from3768 ) ,  (  bytes3767 ) ) );
            to3769 .f_line = (  op_dash_add168 ( ( (  to3769 ) .f_line ) , (  lines_dash_added3774 ) ) );
            from3768 .f_line = (  op_dash_add168 ( ( (  from3768 ) .f_line ) , (  lines_dash_added3774 ) ) );
            struct Slice_11  last_dash_line3777 = ( (  or_dash_else639 ) ( ( (  fmap_dash_maybe641 ) ( ( (  try_dash_get642 ) ( (  lines_dash_buf3771 ) ,  ( (  i32_dash_size420 ) ( ( (  to3769 ) .f_line ) ) ) ) ) ,  (  lam643 ) ) ) ,  ( (  empty448 ) ( ) ) ) );
            struct envunion112  temp644 = ( (struct envunion112){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all540 , .env =  env->envinst46 } );
            ( temp644.fun ( &temp644.env ,  ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ,  ( (  from533 ) ( (  last_dash_line3777 ) ,  ( (  i32_dash_size420 ) ( ( (  to3769 ) .f_bi ) ) ) ) ) ) );
            ( (  assert645 ) ( (  cmp166 ( ( (  to3769 ) .f_line ) , ( (  from3768 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string208 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion118  temp650 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  ) )remove_dash_range651 , .env =  env->envinst41 } );
            ( temp650.fun ( &temp650.env ,  ( & ( ( * (  self3761 ) ) .f_buf ) ) ,  ( (  i32_dash_size420 ) ( (  op_dash_add168 ( ( (  from3768 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  op_dash_add319 ( ( (  i32_dash_size420 ) ( ( (  to3769 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk672 (    int32_t  line3636 ,    int32_t  bi3638 ) {
    return ( (struct Pos_26) { .f_line = (  line3636 ) , .f_bi = (  bi3638 ) } );
}

static  struct Maybe_359   mk_dash_from_dash_file362 (   struct env123* env ,    enum CAllocator_10  al3797 ,    struct StrView_27  filename3799 ) {
    struct envunion125  temp364 = ( (struct envunion125){ .fun = (  struct TextBuf_114  (*) (  struct env121*  ,    enum CAllocator_10  ) )mk365 , .env =  env->envinst121 } );
    struct TextBuf_114  temp363 = ( temp364.fun ( &temp364.env ,  (  al3797 ) ) );
    struct TextBuf_114 *  tb3800 = ( &temp363 );
    struct StrView_27  filename03801 = ( (  clone_dash_0462 ) ( (  filename3799 ) ,  (  al3797 ) ) );
    struct Maybe_94  dref3802 = ( (  try_dash_read_dash_contents495 ) ( ( (  as_dash_const_dash_str508 ) ( (  filename03801 ) ) ) ,  (  al3797 ) ) );
    if ( dref3802.tag == Maybe_94_None_t ) {
        ( (  free510 ) ( (  filename03801 ) ,  (  al3797 ) ) );
        return ( (struct Maybe_359) { .tag = Maybe_359_None_t } );
    }
    else {
        if ( dref3802.tag == Maybe_94_Just_t ) {
            if ( (  eq513 ( ( (  try_dash_get515 ) ( ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub297 ( ( ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_486_Just ) ( ( (  ascii_dash_u8516 ) ( ( (  from_dash_charlike517 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref3802 .stuff .Maybe_94_Just_s .field0 = ( (  byte_dash_substr519 ) ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub297 ( ( ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion124  temp520 = ( (struct envunion124){ .fun = (  enum Unit_8  (*) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action521 , .env =  env->envinst110 } );
            ( temp520.fun ( &temp520.env ,  (  tb3800 ) ,  ( (  mk672 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) ,  ( (  mk672 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) ,  ( dref3802 .stuff .Maybe_94_Just_s .field0 ) ) );
            (*  tb3800 ) .f_filename = ( ( Maybe_94_Just ) ( (  filename03801 ) ) );
            return ( ( Maybe_359_Just ) ( ( * (  tb3800 ) ) ) );
        }
    }
}

struct envunion674 {
    struct TextBuf_114  (*fun) (  struct env121*  ,    enum CAllocator_10  );
    struct env121 env;
};

struct envunion676 {
    struct StrView_27  (*fun) (  struct env56*  ,    struct StrConcat_647  ,    enum CAllocator_10  );
    struct env56 env;
};

struct env682 {
    struct env6 envinst6;
    struct List_9 *  list2100;
};

struct envunion683 {
    enum Unit_8  (*fun) (  struct env682*  ,    uint8_t  );
    struct env682 env;
};

static  struct Map_59   into_dash_iter685 (    struct Map_59  self797 ) {
    return (  self797 );
}

static  struct Maybe_305   next689 (    struct StrViewIter_62 *  self1375 ) {
    if ( (  cmp298 ( ( ( * (  self1375 ) ) .f_i ) , ( ( ( ( * (  self1375 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    uint8_t *  char_dash_ptr1376 = ( ( (  offset_dash_ptr308 ) ( ( (  cast355 ) ( ( ( ( ( * (  self1375 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64310 ) ( ( ( * (  self1375 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1377 = ( (  scan_dash_from_dash_mem313 ) ( (  char_dash_ptr1376 ) ) );
    (*  self1375 ) .f_i = (  op_dash_add319 ( ( ( * (  self1375 ) ) .f_i ) , ( (  char1377 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_305_Just ) ( (  char1377 ) ) );
}

static  struct Maybe_305   next688 (    struct StrConcatIter_61 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next691 (    enum EmptyIter_64 *  dref793 ) {
    return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
}

static  struct Maybe_305   next690 (    struct AppendIter_63 *  self1023 ) {
    struct Maybe_305  dref1024 = ( (  next691 ) ( ( & ( ( * (  self1023 ) ) .f_it ) ) ) );
    if ( dref1024.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1024 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1024.tag == Maybe_305_None_t ) {
            if ( ( ! ( ( * (  self1023 ) ) .f_appended ) ) ) {
                (*  self1023 ) .f_appended = ( true );
                return ( ( Maybe_305_Just ) ( ( ( * (  self1023 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
        }
    }
}

static  struct Maybe_305   next687 (    struct StrConcatIter_60 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_486   next686 (    struct Map_59 *  dref799 ) {
    struct Maybe_305  dref802 = ( (  next687 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_486) { .tag = Maybe_486_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_305_Just_t ) {
            return ( ( Maybe_486_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_305_Just_s .field0 ) ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each681 (    struct Map_59  iterable1075 ,   struct envunion683  fun1077 ) {
    struct Map_59  temp684 = ( (  into_dash_iter685 ) ( (  iterable1075 ) ) );
    struct Map_59 *  it1078 = ( &temp684 );
    while ( ( true ) ) {
        struct Maybe_486  dref1079 = ( (  next686 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_486_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_486_Just_t ) {
                struct envunion683  temp692 = (  fun1077 );
                ( temp692.fun ( &temp692.env ,  ( dref1079 .stuff .Maybe_486_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam693 (   struct env682* env ,    uint8_t  x2104 ) {
    struct envunion47  temp694 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add548 , .env =  env->envinst6 } );
    return ( temp694.fun ( &temp694.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all680 (   struct env50* env ,    struct List_9 *  list2100 ,    struct Map_59  it2102 ) {
    struct env682 envinst682 = {
        .envinst6 = env->envinst6 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each681 ) ( (  it2102 ) ,  ( (struct envunion683){ .fun = (  enum Unit_8  (*) (  struct env682*  ,    uint8_t  ) )lam693 , .env =  envinst682 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_60   into_dash_iter696 (    struct StrConcatIter_60  self1498 ) {
    return (  self1498 );
}

static  struct Map_59   map695 (    struct StrConcatIter_60  iterable806 ,    uint8_t (*  fun808 )(    struct Char_65  ) ) {
    struct StrConcatIter_60  it809 = ( (  into_dash_iter696 ) ( (  iterable806 ) ) );
    return ( ( Map_59_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct StrViewIter_62   into_dash_iter702 (    struct StrView_27  self1369 ) {
    return ( (struct StrViewIter_62) { .f_ds = (  self1369 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_62   chars701 (    struct StrView_27  self1383 ) {
    return ( (  into_dash_iter702 ) ( (  self1383 ) ) );
}

static  struct StrConcatIter_61   into_dash_iter700 (    struct StrConcat_648  dref1505 ) {
    return ( (struct StrConcatIter_61) { .f_left = ( (  chars701 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars701 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_61   chars699 (    struct StrConcat_648  self1516 ) {
    return ( (  into_dash_iter700 ) ( (  self1516 ) ) );
}

static  enum EmptyIter_64   into_dash_iter707 (    enum EmptyIter_64  self791 ) {
    return (  self791 );
}

static  struct AppendIter_63   append706 (    enum EmptyIter_64  it1007 ,    struct Char_65  e1009 ) {
    return ( (struct AppendIter_63) { .f_it = ( (  into_dash_iter707 ) ( (  it1007 ) ) ) , .f_elem = (  e1009 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_63   cons705 (    enum EmptyIter_64  it1012 ,    struct Char_65  e1014 ) {
    return ( (  append706 ) ( (  it1012 ) ,  (  e1014 ) ) );
}

static  enum EmptyIter_64   nil708 (  ) {
    return ( EmptyIter_64_EmptyIter );
}

static  struct AppendIter_63   single704 (    struct Char_65  e1017 ) {
    return ( (  cons705 ) ( ( (  nil708 ) ( ) ) ,  (  e1017 ) ) );
}

static  struct AppendIter_63   chars703 (    struct Char_65  self1414 ) {
    return ( (  single704 ) ( (  self1414 ) ) );
}

static  struct StrConcatIter_60   into_dash_iter698 (    struct StrConcat_647  dref1505 ) {
    return ( (struct StrConcatIter_60) { .f_left = ( (  chars699 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars703 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_60   chars697 (    struct StrConcat_647  self1516 ) {
    return ( (  into_dash_iter698 ) ( (  self1516 ) ) );
}

static  struct StrView_27   from_dash_str677 (   struct env56* env ,    struct StrConcat_647  s1997 ,    enum CAllocator_10  al1999 ) {
    struct List_9  temp678 = ( (  mk447 ) ( (  al1999 ) ) );
    struct List_9 *  l2148 = ( &temp678 );
    struct envunion58  temp679 = ( (struct envunion58){ .fun = (  enum Unit_8  (*) (  struct env50*  ,    struct List_9 *  ,    struct Map_59  ) )add_dash_all680 , .env =  env->envinst50 } );
    ( temp679.fun ( &temp679.env ,  (  l2148 ) ,  ( (  map695 ) ( ( (  chars697 ) ( (  s1997 ) ) ) ,  (  char_dash_u8494 ) ) ) ) );
    struct envunion57  temp709 = ( (struct envunion57){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add548 , .env =  env->envinst6 } );
    ( temp709.fun ( &temp709.env ,  (  l2148 ) ,  ( (  char_dash_u8494 ) ( ( (  nullchar505 ) ( ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (  to_dash_slice534 ) ( ( * (  l2148 ) ) ) ) } );
}

struct envunion711 {
    struct TextBuf_114  (*fun) (  struct env121*  ,    enum CAllocator_10  );
    struct env121 env;
};

static  struct Pane_228   mk713 (    enum CAllocator_10  al4027 ,    struct TextBuf_114 *  buf4029 ) {
    return ( (struct Pane_228) { .f_buf = (  buf4029 ) , .f_cursor = ( (  mk672 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral67 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_229_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_230) { .f_screen_dash_top = (  from_dash_integral67 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral67 ( 0 ) ) } ) } );
}

struct envunion716 {
    struct Tui_100  (*fun) (  struct env96*  );
    struct env96 env;
};

static  struct Termios_102   undefined720 (  ) {
    struct Termios_102  temp721;
    return (  temp721 );
}

static  int32_t   stdin_dash_fileno722 (  ) {
    return (  from_dash_integral67 ( 0 ) );
}

static  struct termios *   cast_dash_ptr723 (    struct Termios_102 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and724 (    uint32_t  l2861 ,    uint32_t  r2863 ) {
    return ( (  l2861 ) & (  r2863 ) );
}

static  uint32_t   u32_dash_neg725 (    uint32_t  l2866 ) {
    return ( ~ (  l2866 ) );
}

struct Array_727 {
    uint32_t _arr [4];
};

struct ArrayIter_729 {
    struct Array_727  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_729   into_dash_iter730 (    struct Array_727  self2327 ) {
    return ( (struct ArrayIter_729) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
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

static  uint32_t *   cast_dash_ptr735 (    struct Array_727 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr736 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp737;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp737 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr734 (    struct Array_727 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp298 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2258 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic388 ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2259 = ( ( (  cast_dash_ptr735 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr736 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  uint32_t   get733 (    struct Array_727 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr734 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_731   next732 (    struct ArrayIter_729 *  self2334 ) {
    if ( (  cmp298 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    uint32_t  e2336 = ( (  get733 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add319 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_731_Just ) ( (  e2336 ) ) );
}

static  uint32_t   reduce728 (    struct Array_727  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_729  it1100 = ( (  into_dash_iter730 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1101 = ( (  next732 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_731_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_731_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp738 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp738);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp739;
    return (  temp739 );
}

static  uint32_t   u32_dash_or740 (    uint32_t  l2853 ,    uint32_t  r2855 ) {
    return ( (  l2853 ) | (  r2855 ) );
}

static  uint32_t   u32_dash_ors726 (    struct Array_727  vals2858 ) {
    return ( (  reduce728 ) ( (  vals2858 ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  u32_dash_or740 ) ) );
}

static  struct Array_727   from_dash_listlike741 (    struct Array_727  self330 ) {
    return (  self330 );
}

static  uint32_t   echo742 (  ) {
    return (  from_dash_integral174 ( 8 ) );
}

static  uint32_t   icanon743 (  ) {
    return (  from_dash_integral174 ( 2 ) );
}

static  uint32_t   isig744 (  ) {
    return (  from_dash_integral174 ( 1 ) );
}

static  uint32_t   iexten745 (  ) {
    return (  from_dash_integral174 ( 32768 ) );
}

struct Array_747 {
    uint32_t _arr [5];
};

struct ArrayIter_749 {
    struct Array_747  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_749   into_dash_iter750 (    struct Array_747  self2327 ) {
    return ( (struct ArrayIter_749) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr754 (    struct Array_747 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr753 (    struct Array_747 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp298 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2258 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic388 ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2259 = ( ( (  cast_dash_ptr754 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr736 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  uint32_t   get752 (    struct Array_747 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr753 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_731   next751 (    struct ArrayIter_749 *  self2334 ) {
    if ( (  cmp298 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    uint32_t  e2336 = ( (  get752 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add319 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_731_Just ) ( (  e2336 ) ) );
}

static  uint32_t   reduce748 (    struct Array_747  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_749  it1100 = ( (  into_dash_iter750 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1101 = ( (  next751 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_731_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_731_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp755 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp755);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp756;
    return (  temp756 );
}

static  uint32_t   u32_dash_ors746 (    struct Array_747  vals2858 ) {
    return ( (  reduce748 ) ( (  vals2858 ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  u32_dash_or740 ) ) );
}

static  struct Array_747   from_dash_listlike757 (    struct Array_747  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint758 (  ) {
    return (  from_dash_integral174 ( 2 ) );
}

static  uint32_t   icrnl759 (  ) {
    return (  from_dash_integral174 ( 256 ) );
}

static  uint32_t   inpck760 (  ) {
    return (  from_dash_integral174 ( 16 ) );
}

static  uint32_t   istrip761 (  ) {
    return (  from_dash_integral174 ( 32 ) );
}

static  uint32_t   ixon762 (  ) {
    return (  from_dash_integral174 ( 1024 ) );
}

struct Array_764 {
    uint32_t _arr [1];
};

struct ArrayIter_766 {
    struct Array_764  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_766   into_dash_iter767 (    struct Array_764  self2327 ) {
    return ( (struct ArrayIter_766) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr771 (    struct Array_764 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr770 (    struct Array_764 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp298 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2258 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic388 ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2259 = ( ( (  cast_dash_ptr771 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr736 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  uint32_t   get769 (    struct Array_764 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr770 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_731   next768 (    struct ArrayIter_766 *  self2334 ) {
    if ( (  cmp298 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    uint32_t  e2336 = ( (  get769 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add319 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_731_Just ) ( (  e2336 ) ) );
}

static  uint32_t   reduce765 (    struct Array_764  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_766  it1100 = ( (  into_dash_iter767 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1101 = ( (  next768 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_731_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_731_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp772 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp772);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp773;
    return (  temp773 );
}

static  uint32_t   u32_dash_ors763 (    struct Array_764  vals2858 ) {
    return ( (  reduce765 ) ( (  vals2858 ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  u32_dash_or740 ) ) );
}

static  struct Array_764   from_dash_listlike774 (    struct Array_764  self330 ) {
    return (  self330 );
}

static  uint32_t   opost775 (  ) {
    return (  from_dash_integral174 ( 1 ) );
}

static  uint32_t   cs8776 (  ) {
    return (  from_dash_integral174 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr779 (    struct Array_103 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr778 (    struct Array_103 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp298 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2258 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic388 ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2259 = ( ( (  cast_dash_ptr779 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr308 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  enum Unit_8   set777 (    struct Array_103 *  arr2268 ,    size_t  i2271 ,    uint8_t  e2273 ) {
    uint8_t *  p2274 = ( (  get_dash_ptr778 ) ( (  arr2268 ) ,  (  i2271 ) ) );
    (*  p2274 ) = (  e2273 );
    return ( Unit_8_Unit );
}

static  size_t   vmin780 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime781 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush782 (  ) {
    return (  from_dash_integral67 ( 2 ) );
}

static  struct Termios_102   enable_dash_raw_dash_mode718 (  ) {
    struct Termios_102  temp719 = ( (  undefined720 ) ( ) );
    struct Termios_102 *  orig_dash_termios3348 = ( &temp719 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  cast_dash_ptr723 ) ( (  orig_dash_termios3348 ) ) ) ) );
    struct Termios_102  raw3349 = ( * (  orig_dash_termios3348 ) );
    raw3349 .f_c_dash_lflag = ( (  u32_dash_and724 ) ( ( (  raw3349 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg725 ) ( ( (  u32_dash_ors726 ) ( ( (  from_dash_listlike741 ) ( ( (struct Array_727) { ._arr = { ( (  echo742 ) ( ) ) , ( (  icanon743 ) ( ) ) , ( (  isig744 ) ( ) ) , ( ( (  iexten745 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3349 .f_c_dash_iflag = ( (  u32_dash_and724 ) ( ( (  raw3349 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg725 ) ( ( (  u32_dash_ors746 ) ( ( (  from_dash_listlike757 ) ( ( (struct Array_747) { ._arr = { ( (  brkint758 ) ( ) ) , ( (  icrnl759 ) ( ) ) , ( (  inpck760 ) ( ) ) , ( (  istrip761 ) ( ) ) , ( ( (  ixon762 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3349 .f_c_dash_oflag = ( (  u32_dash_and724 ) ( ( (  raw3349 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg725 ) ( ( (  u32_dash_ors763 ) ( ( (  from_dash_listlike774 ) ( ( (struct Array_764) { ._arr = { ( ( (  opost775 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3349 .f_c_dash_cflag = ( (  u32_dash_or740 ) ( ( (  raw3349 ) .f_c_dash_cflag ) ,  ( (  cs8776 ) ( ) ) ) );
    ( (  set777 ) ( ( & ( (  raw3349 ) .f_c_dash_cc ) ) ,  ( (  vmin780 ) ( ) ) ,  (  from_dash_integral316 ( 0 ) ) ) );
    ( (  set777 ) ( ( & ( (  raw3349 ) .f_c_dash_cc ) ) ,  ( (  vtime781 ) ( ) ) ,  (  from_dash_integral316 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  tcsa_dash_flush782 ) ( ) ) ,  ( (  cast_dash_ptr723 ) ( ( & (  raw3349 ) ) ) ) ) );
    return ( * (  orig_dash_termios3348 ) );
}

static  struct StrViewIter_62   into_dash_iter787 (    struct StrViewIter_62  self1372 ) {
    return (  self1372 );
}

static  enum Unit_8   for_dash_each785 (    struct StrViewIter_62  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrViewIter_62  temp786 = ( (  into_dash_iter787 ) ( (  iterable1075 ) ) );
    struct StrViewIter_62 *  it1078 = ( &temp786 );
    while ( ( true ) ) {
        struct Maybe_305  dref1079 = ( (  next689 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_305_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print784 (    struct StrView_27  s2593 ) {
    ( (  for_dash_each785 ) ( ( (  chars701 ) ( (  s2593 ) ) ) ,  (  printf_dash_char344 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   hide_dash_cursor783 (  ) {
    ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors788 (  ) {
    ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen789 (  ) {
    ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse790 (  ) {
    ( (  print_dash_str336 ) ( ( (  from_dash_string208 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout791 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr498 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq795 (    enum Unit_8 *  l587 ,    enum Unit_8 *  r589 ) {
    return ( (  l587 ) == (  r589 ) );
}

static  enum Unit_8 *   cast796 (    const char*  x356 ) {
    return ( (enum Unit_8 * ) (  x356 ) );
}

static  void *   cast_dash_ptr800 (    enum Unit_8 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of801 (    enum Unit_8 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_8 *   zeroed798 (  ) {
    enum Unit_8 *  temp799;
    enum Unit_8 *  x571 = (  temp799 );
    ( ( memset ) ( ( (  cast_dash_ptr800 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of801 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  enum Unit_8 *   null_dash_ptr797 (  ) {
    return ( (  zeroed798 ) ( ) );
}

static  struct Maybe_328   from_dash_nullable_dash_c_dash_str794 (    const char*  s592 ) {
    if ( ( (  ptr_dash_eq795 ) ( ( (  cast796 ) ( (  s592 ) ) ) ,  ( ( (  null_dash_ptr797 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
    } else {
        return ( ( Maybe_328_Just ) ( (  s592 ) ) );
    }
}

static  struct Maybe_328   get793 (    const char*  s2626 ) {
    return ( (  from_dash_nullable_dash_c_dash_str794 ) ( ( ( getenv ) ( (  s2626 ) ) ) ) );
}

static  bool   eq802 (    const char*  l1698 ,    const char*  r1700 ) {
    return (  eq526 ( ( ( strcmp ) ( (  l1698 ) ,  (  r1700 ) ) ) , (  from_dash_integral67 ( 0 ) ) ) );
}

static  enum ColorPalette_101   query_dash_palette792 (  ) {
    struct Maybe_328  colorterm2627 = ( (  get793 ) ( ( (  from_dash_string68 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_328  dref2628 = (  colorterm2627 );
    if ( dref2628.tag == Maybe_328_Just_t ) {
        if ( ( (  eq802 ( ( dref2628 .stuff .Maybe_328_Just_s .field0 ) , ( (  from_dash_string68 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq802 ( ( dref2628 .stuff .Maybe_328_Just_s .field0 ) , ( (  from_dash_string68 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_101_PaletteRGB );
        }
    }
    else {
        if ( dref2628.tag == Maybe_328_None_t ) {
        }
    }
    struct Maybe_328  dref2630 = ( (  get793 ) ( ( (  from_dash_string68 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2630.tag == Maybe_328_Just_t ) {
        if ( (  eq802 ( ( dref2630 .stuff .Maybe_328_Just_s .field0 ) , ( (  from_dash_string68 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_101_Palette8 );
        }
    }
    else {
        if ( dref2630.tag == Maybe_328_None_t ) {
        }
    }
    return ( ColorPalette_101_Palette16 );
}

struct Tuple2_803 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_803 Tuple2_803_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_803 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_805 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr809 (    struct Winsize_805 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of810 (    struct Winsize_805  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_805   zeroed807 (  ) {
    struct Winsize_805  temp808;
    struct Winsize_805  x571 = (  temp808 );
    ( ( memset ) ( ( (  cast_dash_ptr809 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of810 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  int32_t   stdout_dash_fileno811 (  ) {
    return (  from_dash_integral67 ( 1 ) );
}

static  uint64_t   from_dash_integral813 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz812 (  ) {
    return (  from_dash_integral813 ( 21523 ) );
}

static  int32_t   op_dash_neg814 (    int32_t  x227 ) {
    return ( (  from_dash_integral67 ( 0 ) ) - (  x227 ) );
}

static  bool   eq815 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral816 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr822 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of823 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed820 (  ) {
    uint32_t  temp821;
    uint32_t  x571 = (  temp821 );
    ( ( memset ) ( ( (  cast_dash_ptr822 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of823 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint16_t *   cast824 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed818 (    uint16_t  x574 ) {
    uint32_t  temp819 = ( (  zeroed820 ) ( ) );
    uint32_t *  y575 = ( &temp819 );
    uint16_t *  yp576 = ( (  cast824 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  uint32_t   u16_dash_u32817 (    uint16_t  x646 ) {
    return ( (  cast_dash_on_dash_zeroed818 ) ( (  x646 ) ) );
}

static  struct Tuple2_803   get_dash_dimensions804 (  ) {
    struct Winsize_805  temp806 = ( ( (  zeroed807 ) ( ) ) );
    struct Winsize_805 *  ws2615 = ( &temp806 );
    if ( ( (  eq526 ( ( ( ioctl ) ( ( (  stdout_dash_fileno811 ) ( ) ) ,  ( (  tiocgwinsz812 ) ( ) ) ,  (  ws2615 ) ) ) , (  op_dash_neg814 ( (  from_dash_integral67 ( 1 ) ) ) ) ) ) || (  eq815 ( ( ( * (  ws2615 ) ) .f_ws_dash_col ) , (  from_dash_integral816 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_803_Tuple2 ) ( (  from_dash_integral174 ( 80 ) ) ,  (  from_dash_integral174 ( 24 ) ) ) );
    }
    return ( ( Tuple2_803_Tuple2 ) ( ( (  u16_dash_u32817 ) ( ( ( * (  ws2615 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32817 ) ( ( ( * (  ws2615 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined827 (  ) {
    struct timespec  temp828;
    return (  temp828 );
}

static  int32_t   clock_dash_monotonic829 (  ) {
    return (  from_dash_integral67 ( 1 ) );
}

static  struct timespec   now825 (  ) {
    struct timespec  temp826 = ( (  undefined827 ) ( ) );
    struct timespec *  t3310 = ( &temp826 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic829 ) ( ) ) ,  (  t3310 ) ) );
    return ( * (  t3310 ) );
}

struct env830 {
    bool *  should_dash_resize3362;
};

struct envunion831 {
    enum Unit_8  (*fun) (  struct env830*  ,    int32_t  );
    struct env830 env;
};

struct envunion831  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig832 ) {
    struct envunion831  temp833 = _intr_sigarr [  __intr__sig832 ];
    temp833.fun ( &temp833.env ,  __intr__sig832 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig834 ,   struct envunion831  __intr__fun835 ) {
    _intr_sigarr [  __intr__sig834 ] =  __intr__fun835;
    signal(  __intr__sig834 , _intr_sighandle );
    return Unit_8_Unit;
}

static  enum Unit_8   lam836 (   struct env830* env ,    int32_t  dref3369 ) {
    (* env->should_dash_resize3362 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst837 (    struct Tuple2_803  dref1254 ) {
    return ( dref1254 .field0 );
}

static  uint32_t   snd838 (    struct Tuple2_803  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Tui_100   mk717 (   struct env96* env ) {
    struct Termios_102  og_dash_termios3364 = ( (  enable_dash_raw_dash_mode718 ) ( ) );
    ( (  hide_dash_cursor783 ) ( ) );
    ( (  reset_dash_colors788 ) ( ) );
    ( (  clear_dash_screen789 ) ( ) );
    ( (  enable_dash_mouse790 ) ( ) );
    ( (  flush_dash_stdout791 ) ( ) );
    enum ColorPalette_101  palette3365 = ( (  query_dash_palette792 ) ( ) );
    struct Tuple2_803  dims3366 = ( (  get_dash_dimensions804 ) ( ) );
    uint32_t  fps3367 = (  from_dash_integral174 ( 60 ) );
    struct timespec  last_dash_sync3368 = ( (  now825 ) ( ) );
    struct env830 envinst830 = {
        .should_dash_resize3362 = env->should_dash_resize3362 ,
    };
    ( _intr_register_signal ( (  from_dash_integral67 ( 28 ) ) , ( (struct envunion831){ .fun = (  enum Unit_8  (*) (  struct env830*  ,    int32_t  ) )lam836 , .env =  envinst830 } ) ) );
    return ( (struct Tui_100) { .f_width = ( (  fst837 ) ( (  dims3366 ) ) ) , .f_height = ( (  snd838 ) ( (  dims3366 ) ) ) , .f_target_dash_fps = (  fps3367 ) , .f_actual_dash_fps = (  from_dash_integral174 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3368 ) , .f_fps_dash_ts = (  last_dash_sync3368 ) , .f_fps_dash_count = (  from_dash_integral174 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3364 ) , .f_palette = (  palette3365 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_843 {
    size_t  f_size;
};

static  struct TypeSize_843   get_dash_typesize842 (  ) {
    struct Cell_286  temp844;
    return ( (struct TypeSize_843) { .f_size = ( sizeof( ( (  temp844 ) ) ) ) } );
}

static  struct Cell_286 *   cast_dash_ptr845 (    void *  p359 ) {
    return ( (struct Cell_286 * ) (  p359 ) );
}

static  struct Slice_285   allocate841 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize842 ) ( ) ) ) .f_size );
    struct Cell_286 *  ptr1959 = ( (  cast_dash_ptr845 ) ( ( ( malloc ) ( (  op_dash_mul413 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_285) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

static  void *   cast_dash_ptr851 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of852 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed849 (  ) {
    size_t  temp850;
    size_t  x571 = (  temp850 );
    ( ( memset ) ( ( (  cast_dash_ptr851 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of852 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint32_t *   cast853 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed847 (    uint32_t  x574 ) {
    size_t  temp848 = ( (  zeroed849 ) ( ) );
    size_t *  y575 = ( &temp848 );
    uint32_t *  yp576 = ( (  cast853 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  size_t   u32_dash_size846 (    uint32_t  x652 ) {
    return ( (  cast_dash_on_dash_zeroed847 ) ( (  x652 ) ) );
}

struct env856 {
    ;
    ;
    ;
    struct Slice_285  s1907;
    struct Cell_286 (*  fun1909 )(    struct Cell_286  );
};

struct envunion857 {
    enum Unit_8  (*fun) (  struct env856*  ,    int32_t  );
    struct env856 env;
};

static  enum Unit_8   for_dash_each855 (    struct Range_159  iterable1075 ,   struct envunion857  fun1077 ) {
    struct RangeIter_162  temp858 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp858 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion857  temp859 = (  fun1077 );
                ( temp859.fun ( &temp859.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_286 *   offset_dash_ptr863 (    struct Cell_286 *  x338 ,    int64_t  count340 ) {
    struct Cell_286  temp864;
    return ( (struct Cell_286 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp864 ) ) ) ) ) ) ) ) );
}

static  struct Cell_286 *   get_dash_ptr862 (    struct Slice_285  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp298 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_286 *  elem_dash_ptr1762 = ( (  offset_dash_ptr863 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set861 (    struct Slice_285  slice1776 ,    size_t  i1778 ,    struct Cell_286  x1780 ) {
    struct Cell_286 *  ep1781 = ( (  get_dash_ptr862 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

struct Maybe_868 {
    enum {
        Maybe_868_None_t,
        Maybe_868_Just_t,
    } tag;
    union {
        struct {
            struct Cell_286  field0;
        } Maybe_868_Just_s;
    } stuff;
};

static struct Maybe_868 Maybe_868_Just (  struct Cell_286  field0 ) {
    return ( struct Maybe_868 ) { .tag = Maybe_868_Just_t, .stuff = { .Maybe_868_Just_s = { .field0 = field0 } } };
};

static  struct Cell_286   undefined869 (  ) {
    struct Cell_286  temp870;
    return (  temp870 );
}

static  struct Cell_286   or_dash_fail867 (    struct Maybe_868  x1727 ,    struct StrConcat_329  errmsg1729 ) {
    struct Maybe_868  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_868_None_t ) {
        ( (  panic331 ) ( (  errmsg1729 ) ) );
        return ( (  undefined869 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_868_Just_t ) {
            return ( dref1730 .stuff .Maybe_868_Just_s .field0 );
        }
    }
}

static  struct Maybe_868   try_dash_get871 (    struct Slice_285  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp298 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_868) { .tag = Maybe_868_None_t } );
    }
    struct Cell_286 *  elem_dash_ptr1768 = ( (  offset_dash_ptr863 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_868_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  struct Cell_286   get866 (    struct Slice_285  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail867 ) ( ( (  try_dash_get871 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_286   elem_dash_get865 (    struct Slice_285  self1869 ,    size_t  idx1871 ) {
    return ( (  get866 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  enum Unit_8   lam860 (   struct env856* env ,    int32_t  i1911 ) {
    return ( (  set861 ) ( ( env->s1907 ) ,  ( (  i32_dash_size420 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get865 ( ( env->s1907 ) , ( (  i32_dash_size420 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map854 (    struct Slice_285  s1907 ,    struct Cell_286 (*  fun1909 )(    struct Cell_286  ) ) {
    struct env856 envinst856 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each855 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_i32337 ) ( (  op_dash_sub297 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion857){ .fun = (  enum Unit_8  (*) (  struct env856*  ,    int32_t  ) )lam860 , .env =  envinst856 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_286   default_dash_cell873 (  ) {
    return ( (struct Cell_286) { .f_c = ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_bg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral67 ( 1 ) ) } );
}

static  struct Cell_286   lam872 (    struct Cell_286  dref3472 ) {
    return ( (  default_dash_cell873 ) ( ) );
}

struct env876 {
    ;
    ;
    ;
    struct Slice_285  s1907;
    struct Cell_286 (*  fun1909 )(    struct Cell_286  );
};

struct envunion877 {
    enum Unit_8  (*fun) (  struct env876*  ,    int32_t  );
    struct env876 env;
};

static  enum Unit_8   for_dash_each875 (    struct Range_159  iterable1075 ,   struct envunion877  fun1077 ) {
    struct RangeIter_162  temp878 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp878 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion877  temp879 = (  fun1077 );
                ( temp879.fun ( &temp879.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam880 (   struct env876* env ,    int32_t  i1911 ) {
    return ( (  set861 ) ( ( env->s1907 ) ,  ( (  i32_dash_size420 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get865 ( ( env->s1907 ) , ( (  i32_dash_size420 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map874 (    struct Slice_285  s1907 ,    struct Cell_286 (*  fun1909 )(    struct Cell_286  ) ) {
    struct env876 envinst876 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each875 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_i32337 ) ( (  op_dash_sub297 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion877){ .fun = (  enum Unit_8  (*) (  struct env876*  ,    int32_t  ) )lam880 , .env =  envinst876 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_286   lam881 (    struct Cell_286  dref3474 ) {
    return ( (  default_dash_cell873 ) ( ) );
}

static  struct Screen_284   mk_dash_screen840 (    struct Tui_100 *  tui3468 ,    enum CAllocator_10  al3470 ) {
    struct Slice_285  cur3471 = ( (  allocate841 ) ( (  al3470 ) ,  ( (  u32_dash_size846 ) ( (  op_dash_mul176 ( ( ( * (  tui3468 ) ) .f_width ) , ( ( * (  tui3468 ) ) .f_height ) ) ) ) ) ) );
    ( (  map854 ) ( (  cur3471 ) ,  (  lam872 ) ) );
    struct Slice_285  prev3473 = ( (  allocate841 ) ( (  al3470 ) ,  ( (  u32_dash_size846 ) ( (  op_dash_mul176 ( ( ( * (  tui3468 ) ) .f_width ) , ( ( * (  tui3468 ) ) .f_height ) ) ) ) ) ) );
    ( (  map874 ) ( (  prev3473 ) ,  (  lam881 ) ) );
    return ( (struct Screen_284) { .f_current = (  cur3471 ) , .f_previous = (  prev3473 ) , .f_al = (  al3470 ) , .f_tui = (  tui3468 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) } );
}

enum MouseButton_889 {
    MouseButton_889_MouseLeft,
    MouseButton_889_MouseMiddle,
    MouseButton_889_MouseRight,
    MouseButton_889_ScrollUp,
    MouseButton_889_ScrollDown,
};

struct MouseEvent_888 {
    enum MouseButton_889  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_887 {
    enum {
        InputEvent_887_Key_t,
        InputEvent_887_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_276  field0;
        } InputEvent_887_Key_s;
        struct {
            struct MouseEvent_888  field0;
        } InputEvent_887_Mouse_s;
    } stuff;
};

static struct InputEvent_887 InputEvent_887_Key (  struct Key_276  field0 ) {
    return ( struct InputEvent_887 ) { .tag = InputEvent_887_Key_t, .stuff = { .InputEvent_887_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_887 InputEvent_887_Mouse (  struct MouseEvent_888  field0 ) {
    return ( struct InputEvent_887 ) { .tag = InputEvent_887_Mouse_t, .stuff = { .InputEvent_887_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_886 {
    enum {
        Maybe_886_None_t,
        Maybe_886_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_887  field0;
        } Maybe_886_Just_s;
    } stuff;
};

static struct Maybe_886 Maybe_886_Just (  struct InputEvent_887  field0 ) {
    return ( struct Maybe_886 ) { .tag = Maybe_886_Just_t, .stuff = { .Maybe_886_Just_s = { .field0 = field0 } } };
};

struct envunion885 {
    struct Maybe_886  (*fun) (  struct env98*  ,    struct Tui_100 *  );
    struct env98 env;
};

struct env884 {
    struct env98 envinst98;
    struct Tui_100 *  tui4549;
};

struct envunion890 {
    struct Maybe_886  (*fun) (  struct env884*  );
    struct env884 env;
};

struct FunIter_883 {
    struct envunion890  f_fun;
    bool  f_finished;
};

static  struct FunIter_883   into_dash_iter891 (    struct FunIter_883  self1029 ) {
    return (  self1029 );
}

static  struct FunIter_883   from_dash_function892 (   struct envunion890  fun1037 ) {
    return ( (struct FunIter_883) { .f_fun = (  fun1037 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions897 (   struct env97* env ,    struct Tui_100 *  tui3434 ) {
    if ( ( ! ( * ( env->should_dash_resize3362 ) ) ) ) {
        return ( false );
    }
    (*  tui3434 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3362 ) = ( false );
    struct Tuple2_803  dim3435 = ( (  get_dash_dimensions804 ) ( ) );
    uint32_t  w3436 = ( (  fst837 ) ( (  dim3435 ) ) );
    uint32_t  h3437 = ( (  snd838 ) ( (  dim3435 ) ) );
    (*  tui3434 ) .f_width = (  w3436 );
    (*  tui3434 ) .f_height = (  h3437 );
    return ( true );
}

static  char   undefined900 (  ) {
    char  temp901;
    return (  temp901 );
}

struct Maybe_902 {
    enum {
        Maybe_902_None_t,
        Maybe_902_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_902_Just_s;
    } stuff;
};

static struct Maybe_902 Maybe_902_Just (  char  field0 ) {
    return ( struct Maybe_902 ) { .tag = Maybe_902_Just_t, .stuff = { .Maybe_902_Just_s = { .field0 = field0 } } };
};

struct Pollfd_904 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr905 (    struct Pollfd_904 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr908 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of909 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed906 (  ) {
    char  temp907;
    char  x571 = (  temp907 );
    ( ( memset ) ( ( (  cast_dash_ptr908 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of909 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Maybe_902   read_dash_byte903 (    int32_t  timeout_dash_ms3356 ) {
    struct Pollfd_904  pfd3357 = ( (struct Pollfd_904) { .f_fd = (  from_dash_integral67 ( 0 ) ) , .f_events = (  from_dash_integral816 ( 1 ) ) , .f_revents = (  from_dash_integral816 ( 0 ) ) } );
    if ( (  cmp166 ( ( ( poll ) ( ( (  cast_dash_ptr905 ) ( ( & (  pfd3357 ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ,  (  timeout_dash_ms3356 ) ) ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_902) { .tag = Maybe_902_None_t } );
    }
    char  c3358 = ( ( (  zeroed906 ) ( ) ) );
    if ( (  cmp166 ( ( ( read ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  cast_dash_ptr908 ) ( ( & (  c3358 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_902) { .tag = Maybe_902_None_t } );
    }
    return ( ( Maybe_902_Just ) ( (  c3358 ) ) );
}

static  char   u8_dash_ascii910 (    uint8_t  b780 ) {
    return ( ( (char ) (  b780 ) ) );
}

static  uint8_t *   cast914 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed912 (    uint8_t  x574 ) {
    uint32_t  temp913 = ( (  zeroed820 ) ( ) );
    uint32_t *  y575 = ( &temp913 );
    uint8_t *  yp576 = ( (  cast914 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  uint32_t   u8_dash_u32911 (    uint8_t  x673 ) {
    return ( (  cast_dash_on_dash_zeroed912 ) ( (  x673 ) ) );
}

struct Map_917 {
    struct StrViewIter_62  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_917 Map_917_Map (  struct StrViewIter_62  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_917 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_917   into_dash_iter918 (    struct Map_917  self797 ) {
    return (  self797 );
}

static  struct Maybe_731   next919 (    struct Map_917 *  dref799 ) {
    struct Maybe_305  dref802 = ( (  next689 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_731) { .tag = Maybe_731_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_305_Just_t ) {
            return ( ( Maybe_731_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_305_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce916 (    struct Map_917  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct Map_917  it1100 = ( (  into_dash_iter918 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_731  dref1101 = ( (  next919 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_731_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_731_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_731_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp920 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp920);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp921;
    return (  temp921 );
}

static  struct Map_917   map922 (    struct StrView_27  iterable806 ,    uint32_t (*  fun808 )(    struct Char_65  ) ) {
    struct StrViewIter_62  it809 = ( (  into_dash_iter702 ) ( (  iterable806 ) ) );
    return ( ( Map_917_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  void *   cast_dash_ptr929 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of930 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed927 (  ) {
    int64_t  temp928;
    int64_t  x571 = (  temp928 );
    ( ( memset ) ( ( (  cast_dash_ptr929 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of930 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   cast931 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed925 (    uint8_t  x574 ) {
    int64_t  temp926 = ( (  zeroed927 ) ( ) );
    int64_t *  y575 = ( &temp926 );
    uint8_t *  yp576 = ( (  cast931 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  int64_t   u8_dash_i64924 (    uint8_t  x667 ) {
    return ( (  cast_dash_on_dash_zeroed925 ) ( (  x667 ) ) );
}

struct StrConcat_934 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_934 StrConcat_934_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_934 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_933 {
    struct StrConcat_934  field0;
    struct StrView_27  field1;
};

static struct StrConcat_933 StrConcat_933_StrConcat (  struct StrConcat_934  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_933 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_938 {
    struct StrView_27  field0;
    struct StrConcat_933  field1;
};

static struct StrConcat_938 StrConcat_938_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_933  field1 ) {
    return ( struct StrConcat_938 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_937 {
    struct StrConcat_938  field0;
    struct Char_65  field1;
};

static struct StrConcat_937 StrConcat_937_StrConcat (  struct StrConcat_938  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_937 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str941 (    struct StrConcat_934  self1510 ) {
    struct StrConcat_934  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str343 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str940 (    struct StrConcat_933  self1510 ) {
    struct StrConcat_933  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str941 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str939 (    struct StrConcat_938  self1510 ) {
    struct StrConcat_938  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str940 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str936 (    struct StrConcat_937  self1510 ) {
    struct StrConcat_937  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str939 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic935 (    struct StrConcat_933  errmsg1714 ) {
    ( (  print_dash_str936 ) ( ( ( StrConcat_937_StrConcat ) ( ( ( StrConcat_938_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail932 (    struct Maybe_486  x1727 ,    struct StrConcat_933  errmsg1729 ) {
    struct Maybe_486  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_486_None_t ) {
        ( (  panic935 ) ( (  errmsg1729 ) ) );
        return ( (  undefined564 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_486_Just_t ) {
            return ( dref1730 .stuff .Maybe_486_Just_s .field0 );
        }
    }
}

static  enum Ordering_167   cmp943 (    struct Char_65  l745 ,    struct Char_65  r747 ) {
    if ( ( ( !  eq407 ( ( (  l745 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq407 ( ( (  r747 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp944 = ( (  from_dash_string68 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp944);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (  cmp315 ) ( ( (  char_dash_u8494 ) ( (  l745 ) ) ) ,  ( (  char_dash_u8494 ) ( (  r747 ) ) ) ) );
}

static  uint8_t   op_dash_sub945 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add946 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_486   hex_dash_digit942 (    struct Char_65  c2575 ) {
    if ( ( (  cmp943 ( (  c2575 ) , ( (  from_dash_charlike354 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp943 ( (  c2575 ) , ( (  from_dash_charlike354 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_486_Just ) ( (  op_dash_sub945 ( ( (  char_dash_u8494 ) ( (  c2575 ) ) ) , ( (  char_dash_u8494 ) ( ( (  from_dash_charlike354 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp943 ( (  c2575 ) , ( (  from_dash_charlike354 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp943 ( (  c2575 ) , ( (  from_dash_charlike354 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_486_Just ) ( (  op_dash_add946 ( (  op_dash_sub945 ( ( (  char_dash_u8494 ) ( (  c2575 ) ) ) , ( (  char_dash_u8494 ) ( ( (  from_dash_charlike354 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral316 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp943 ( (  c2575 ) , ( (  from_dash_charlike354 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp943 ( (  c2575 ) , ( (  from_dash_charlike354 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_486_Just ) ( (  op_dash_add946 ( (  op_dash_sub945 ( ( (  char_dash_u8494 ) ( (  c2575 ) ) ) , ( (  char_dash_u8494 ) ( ( (  from_dash_charlike354 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral316 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_486) { .tag = Maybe_486_None_t } );
}

static  uint32_t   lam923 (    struct Char_65  c2580 ) {
    return ( (  from_dash_integral174 ) ( ( (  u8_dash_i64924 ) ( ( (  or_dash_fail932 ) ( ( (  hex_dash_digit942 ) ( (  c2580 ) ) ) ,  ( ( StrConcat_933_StrConcat ) ( ( ( StrConcat_934_StrConcat ) ( ( (  from_dash_charlike354 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2580 ) ) ) ,  ( (  from_dash_string208 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam947 (    uint32_t  elem2582 ,    uint32_t  b2584 ) {
    return (  op_dash_add180 ( (  op_dash_mul176 ( (  b2584 ) , (  from_dash_integral174 ( 16 ) ) ) ) , (  elem2582 ) ) );
}

static  uint32_t   from_dash_hex915 (    struct StrView_27  arr2578 ) {
    return ( (  reduce916 ) ( ( (  map922 ) ( (  arr2578 ) ,  (  lam923 ) ) ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  lam947 ) ) );
}

static  bool   eq949 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

struct Array_950 {
    char _arr [32];
};

static  void *   cast_dash_ptr954 (    struct Array_950 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of955 (    struct Array_950  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_950   zeroed952 (  ) {
    struct Array_950  temp953;
    struct Array_950  x571 = (  temp953 );
    ( ( memset ) ( ( (  cast_dash_ptr954 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of955 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  char *   cast_dash_ptr959 (    struct Array_950 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr960 (    char *  x338 ,    int64_t  count340 ) {
    char  temp961;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp961 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr958 (    struct Array_950 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp298 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2258 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic388 ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2259 = ( ( (  cast_dash_ptr959 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr960 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  enum Unit_8   set957 (    struct Array_950 *  arr2268 ,    size_t  i2271 ,    char  e2273 ) {
    char *  p2274 = ( (  get_dash_ptr958 ) ( (  arr2268 ) ,  (  i2271 ) ) );
    (*  p2274 ) = (  e2273 );
    return ( Unit_8_Unit );
}

struct Slice_963 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail966 (    struct Maybe_902  x1727 ,    struct StrConcat_329  errmsg1729 ) {
    struct Maybe_902  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_902_None_t ) {
        ( (  panic331 ) ( (  errmsg1729 ) ) );
        return ( (  undefined900 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_902_Just_t ) {
            return ( dref1730 .stuff .Maybe_902_Just_s .field0 );
        }
    }
}

static  struct Maybe_902   try_dash_get967 (    struct Slice_963  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp298 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_902) { .tag = Maybe_902_None_t } );
    }
    char *  elem_dash_ptr1768 = ( (  offset_dash_ptr960 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_902_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  char   get965 (    struct Slice_963  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail966 ) ( ( (  try_dash_get967 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get964 (    struct Slice_963  self1869 ,    size_t  idx1871 ) {
    return ( (  get965 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

struct Scanner_968 {
    struct StrViewIter_62  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_968   mk_dash_from_dash_str970 (    struct StrView_27  s3203 ) {
    return ( (struct Scanner_968) { .f_s = ( (  chars701 ) ( (  s3203 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_974 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr308 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_27   substr971 (    struct StrView_27  s2177 ,    size_t  from2179 ,    size_t  to2181 ) {
    size_t  from_dash_bs2182 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_162  temp972 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  size_dash_i32337 ) ( (  from2179 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond973 =  next165 (&temp972);
        if (  __cond973 .tag == 0 ) {
            break;
        }
        int32_t  dref2183 =  __cond973 .stuff .Maybe_164_Just_s .field0;
        if ( (  cmp298 ( (  from_dash_bs2182 ) , ( ( (  s2177 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2182 = (  op_dash_add319 ( (  from_dash_bs2182 ) , ( (  next_dash_char314 ) ( ( (  offset_dash_ptr_prime_974 ) ( ( ( (  s2177 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2182 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2184 = (  from_dash_bs2182 );
    struct RangeIter_162  temp975 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  op_dash_sub173 ( ( (  size_dash_i32337 ) ( (  to2181 ) ) ) , ( (  size_dash_i32337 ) ( (  from2179 ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond976 =  next165 (&temp975);
        if (  __cond976 .tag == 0 ) {
            break;
        }
        int32_t  dref2185 =  __cond976 .stuff .Maybe_164_Just_s .field0;
        if ( (  cmp298 ( (  to_dash_bs2184 ) , ( ( (  s2177 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2184 = (  op_dash_add319 ( (  to_dash_bs2184 ) , ( (  next_dash_char314 ) ( ( (  offset_dash_ptr_prime_974 ) ( ( ( (  s2177 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2184 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice506 ) ( ( (  s2177 ) .f_contents ) ,  (  from_dash_bs2182 ) ,  (  to_dash_bs2184 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr979 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice978 (    struct Slice_963  s1934 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr979 ) ( ( (  s1934 ) .f_ptr ) ) ) , .f_count = ( (  s1934 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice977 (    struct Slice_963  sl2151 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice978 ) ( (  sl2151 ) ) ) } );
}

struct Maybe_980 {
    enum {
        Maybe_980_None_t,
        Maybe_980_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_980_Just_s;
    } stuff;
};

static struct Maybe_980 Maybe_980_Just (  int64_t  field0 ) {
    return ( struct Maybe_980 ) { .tag = Maybe_980_Just_t, .stuff = { .Maybe_980_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_982 {
    struct Scanner_968  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_968   into_dash_iter985 (    struct Scanner_968  self3194 ) {
    return (  self3194 );
}

static  struct Scanner_968   into_dash_iter984 (    struct Scanner_968 *  self786 ) {
    return ( (  into_dash_iter985 ) ( ( * (  self786 ) ) ) );
}

static  struct TakeWhile_982   take_dash_while983 (    struct Scanner_968 *  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_982) { .f_it = ( (  into_dash_iter984 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  bool   is_dash_digit986 (    struct Char_65  c2481 ) {
    return ( (  cmp315 ( ( (  char_dash_u8494 ) ( (  c2481 ) ) ) , ( (  char_dash_u8494 ) ( ( (  from_dash_charlike354 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp315 ( ( (  char_dash_u8494 ) ( (  c2481 ) ) ) , ( (  char_dash_u8494 ) ( ( (  from_dash_charlike354 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_305   next990 (    struct Scanner_968 *  self3189 ) {
    struct Maybe_305  dref3190 = ( (  next689 ) ( ( & ( ( * (  self3189 ) ) .f_s ) ) ) );
    if ( dref3190.tag == Maybe_305_Just_t ) {
        (*  self3189 ) .f_byte_dash_offset = (  op_dash_add319 ( ( ( * (  self3189 ) ) .f_byte_dash_offset ) , ( ( dref3190 .stuff .Maybe_305_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_305_Just ) ( ( dref3190 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref3190.tag == Maybe_305_None_t ) {
            return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
        }
    }
}

static  struct Maybe_305   next989 (    struct TakeWhile_982 *  self965 ) {
    struct Maybe_305  mx966 = ( (  next990 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_305  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_305_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_305_Just ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
            }
        }
    }
}

static  struct TakeWhile_982   into_dash_iter992 (    struct TakeWhile_982  self962 ) {
    return (  self962 );
}

static  struct Maybe_305   head988 (    struct TakeWhile_982  it1143 ) {
    struct TakeWhile_982  temp991 = ( (  into_dash_iter992 ) ( (  it1143 ) ) );
    return ( (  next989 ) ( ( &temp991 ) ) );
}

static  bool   null987 (    struct TakeWhile_982  it1152 ) {
    struct Maybe_305  dref1153 = ( (  head988 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_305_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env995 {
    ;
    struct Scanner_968 *  it1187;
};

struct envunion996 {
    struct Maybe_305  (*fun) (  struct env995*  ,    int32_t  );
    struct env995 env;
};

static  enum Unit_8   for_dash_each994 (    struct Range_159  iterable1075 ,   struct envunion996  fun1077 ) {
    struct RangeIter_162  temp997 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp997 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion996  temp998 = (  fun1077 );
                ( temp998.fun ( &temp998.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_305   lam999 (   struct env995* env ,    int32_t  dref1190 ) {
    return ( (  next990 ) ( ( env->it1187 ) ) );
}

static  enum Unit_8   drop_prime_993 (    struct Scanner_968 *  it1187 ,    size_t  n1189 ) {
    struct env995 envinst995 = {
        .it1187 =  it1187 ,
    };
    ( (  for_dash_each994 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  ( (  size_dash_i32337 ) ( (  n1189 ) ) ) ) ) ,  ( (struct envunion996){ .fun = (  struct Maybe_305  (*) (  struct env995*  ,    int32_t  ) )lam999 , .env =  envinst995 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce1001 (    struct TakeWhile_982  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct TakeWhile_982  it1100 = ( (  into_dash_iter992 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_305  dref1101 = ( (  next989 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_305_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_305_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_305_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1002 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1002);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1003;
    return (  temp1003 );
}

static  size_t   lam1004 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add319 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1000 (    struct TakeWhile_982  it1105 ) {
    return ( (  reduce1001 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1004 ) ) );
}

static  struct TakeWhile_982   chars1006 (    struct TakeWhile_982  self1658 ) {
    return (  self1658 );
}

static  struct Maybe_980   reduce1007 (    struct TakeWhile_982  iterable1094 ,    struct Maybe_980  base1096 ,    struct Maybe_980 (*  fun1098 )(    struct Char_65  ,    struct Maybe_980  ) ) {
    struct Maybe_980  x1099 = (  base1096 );
    struct TakeWhile_982  it1100 = ( (  into_dash_iter992 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_305  dref1101 = ( (  next989 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_305_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_305_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_305_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1008 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1008);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_980  temp1009;
    return (  temp1009 );
}

static  void *   cast_dash_ptr1017 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1018 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed1015 (  ) {
    int32_t  temp1016;
    int32_t  x571 = (  temp1016 );
    ( ( memset ) ( ( (  cast_dash_ptr1017 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of1018 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   cast1019 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1013 (    uint8_t  x574 ) {
    int32_t  temp1014 = ( (  zeroed1015 ) ( ) );
    int32_t *  y575 = ( &temp1014 );
    uint8_t *  yp576 = ( (  cast1019 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  int32_t   u8_dash_i321012 (    uint8_t  x670 ) {
    return ( (  cast_dash_on_dash_zeroed1013 ) ( (  x670 ) ) );
}

static  struct Maybe_164   parse_dash_digit1011 (    struct Char_65  c2484 ) {
    if ( ( (  is_dash_digit986 ) ( (  c2484 ) ) ) ) {
        return ( ( Maybe_164_Just ) ( ( (  u8_dash_i321012 ) ( (  op_dash_sub945 ( ( (  char_dash_u8494 ) ( (  c2484 ) ) ) , ( (  char_dash_u8494 ) ( ( (  from_dash_charlike354 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
}

static  int64_t   i32_dash_i641020 (    int32_t  x607 ) {
    return ( (int64_t ) (  x607 ) );
}

static  struct Maybe_980   sequence_dash_maybe1010 (    struct Char_65  e2490 ,    struct Maybe_980  b2492 ) {
    struct Maybe_980  dref2493 = (  b2492 );
    if ( dref2493.tag == Maybe_980_None_t ) {
        return ( (struct Maybe_980) { .tag = Maybe_980_None_t } );
    }
    else {
        if ( dref2493.tag == Maybe_980_Just_t ) {
            struct Maybe_164  dref2495 = ( (  parse_dash_digit1011 ) ( (  e2490 ) ) );
            if ( dref2495.tag == Maybe_164_None_t ) {
                return ( (struct Maybe_980) { .tag = Maybe_980_None_t } );
            }
            else {
                if ( dref2495.tag == Maybe_164_Just_t ) {
                    return ( ( Maybe_980_Just ) ( (  op_dash_add585 ( (  op_dash_mul294 ( ( dref2493 .stuff .Maybe_980_Just_s .field0 ) , (  from_dash_integral296 ( 10 ) ) ) ) , ( (  i32_dash_i641020 ) ( ( dref2495 .stuff .Maybe_164_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_980   parse_dash_int1005 (    struct TakeWhile_982  s2487 ) {
    struct TakeWhile_982  cs2497 = ( (  chars1006 ) ( (  s2487 ) ) );
    struct Maybe_305  dref2498 = ( (  head988 ) ( (  cs2497 ) ) );
    if ( dref2498.tag == Maybe_305_Just_t ) {
        return ( (  reduce1007 ) ( (  cs2497 ) ,  ( ( Maybe_980_Just ) ( (  from_dash_integral296 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1010 ) ) );
    }
    else {
        if ( dref2498.tag == Maybe_305_None_t ) {
            return ( (struct Maybe_980) { .tag = Maybe_980_None_t } );
        }
    }
}

static  struct Maybe_980   scan_dash_int981 (    struct Scanner_968 *  sc3206 ) {
    struct TakeWhile_982  digit_dash_chars3207 = ( (  take_dash_while983 ) ( (  sc3206 ) ,  (  is_dash_digit986 ) ) );
    if ( ( (  null987 ) ( (  digit_dash_chars3207 ) ) ) ) {
        return ( (struct Maybe_980) { .tag = Maybe_980_None_t } );
    }
    ( (  drop_prime_993 ) ( (  sc3206 ) ,  ( (  count1000 ) ( (  digit_dash_chars3207 ) ) ) ) );
    return ( (  parse_dash_int1005 ) ( (  digit_dash_chars3207 ) ) );
}

static  int32_t   i64_dash_i321022 (    int64_t  x619 ) {
    return ( (int32_t ) (  x619 ) );
}

struct StrConcat_1024 {
    struct StrView_27  field0;
    int64_t  field1;
};

static struct StrConcat_1024 StrConcat_1024_StrConcat (  struct StrView_27  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_1024 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1027 {
    struct StrView_27  field0;
    struct StrConcat_1024  field1;
};

static struct StrConcat_1027 StrConcat_1027_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1024  field1 ) {
    return ( struct StrConcat_1027 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1026 {
    struct StrConcat_1027  field0;
    struct Char_65  field1;
};

static struct StrConcat_1026 StrConcat_1026_StrConcat (  struct StrConcat_1027  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1026 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1032 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1031 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_1032  f_right;
};

struct StrConcatIter_1030 {
    struct StrViewIter_62  f_left;
    struct StrConcatIter_1031  f_right;
};

struct StrConcatIter_1029 {
    struct StrConcatIter_1030  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_1029   into_dash_iter1034 (    struct StrConcatIter_1029  self1498 ) {
    return (  self1498 );
}

struct env1041 {
    ;
    int64_t  base1211;
};

struct envunion1042 {
    int64_t  (*fun) (  struct env1041*  ,    int32_t  ,    int64_t  );
    struct env1041 env;
};

static  int64_t   reduce1040 (    struct Range_159  iterable1094 ,    int64_t  base1096 ,   struct envunion1042  fun1098 ) {
    int64_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1042  temp1043 = (  fun1098 );
                x1099 = ( temp1043.fun ( &temp1043.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1044 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1044);
    exit ( 1 );
    ( Unit_8_Unit );
    int64_t  temp1045;
    return (  temp1045 );
}

static  int64_t   lam1046 (   struct env1041* env ,    int32_t  item1215 ,    int64_t  x1217 ) {
    return (  op_dash_mul294 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  int64_t   pow1039 (    int64_t  base1211 ,    int32_t  p1213 ) {
    struct env1041 envinst1041 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1040 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral296 ( 1 ) ) ,  ( (struct envunion1042){ .fun = (  int64_t  (*) (  struct env1041*  ,    int32_t  ,    int64_t  ) )lam1046 , .env =  envinst1041 } ) ) );
}

static  int64_t   op_dash_div1047 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast1048 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub1049 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast1055 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed1053 (    uint8_t  x574 ) {
    size_t  temp1054 = ( (  zeroed849 ) ( ) );
    size_t *  y575 = ( &temp1054 );
    uint8_t *  yp576 = ( (  cast1055 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  size_t   u8_dash_size1052 (    uint8_t  x664 ) {
    return ( (  cast_dash_on_dash_zeroed1053 ) ( (  x664 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1051 (    uint8_t *  ptr682 ,    uint8_t  b684 ) {
    size_t  s685 = ( ( (size_t ) (  ptr682 ) ) );
    size_t  exp686 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add319 ( (  op_dash_sub297 ( (  s685 ) , ( (  u8_dash_size1052 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer348 ) ( (  ptr682 ) ) ) ) ) ) ) , (  op_dash_mul413 ( (  exp686 ) , ( (  u8_dash_size1052 ) ( (  b684 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1056 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_u81050 (    uint8_t  b773 ) {
    uint8_t *  ptr774 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1051 ) ( ( ( (  cast1056 ) ( ( (  u8_dash_size1052 ) ( (  b773 ) ) ) ) ) ) ,  (  from_dash_integral316 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr774 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_305   next1038 (    struct IntStrIter_1032 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_305_Just ) ( ( (  from_dash_charlike354 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    int64_t  trim_dash_down1430 = ( (  pow1039 ) ( (  from_dash_integral296 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    int64_t  upper1431 = (  op_dash_div1047 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    int64_t  upper_dash_mask1432 = (  op_dash_mul294 ( (  op_dash_div1047 ( (  upper1431 ) , (  from_dash_integral296 ( 10 ) ) ) ) , (  from_dash_integral296 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast1048 ) ( (  op_dash_sub1049 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81050 ) ( (  op_dash_add946 ( (  digit1433 ) , (  from_dash_integral316 ( 48 ) ) ) ) ) );
    return ( ( Maybe_305_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_305   next1037 (    struct StrConcatIter_1031 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next1038 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next1036 (    struct StrConcatIter_1030 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next1037 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next1035 (    struct StrConcatIter_1029 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next1036 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1028 (    struct StrConcatIter_1029  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_1029  temp1033 = ( (  into_dash_iter1034 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1029 *  it1078 = ( &temp1033 );
    while ( ( true ) ) {
        struct Maybe_305  dref1079 = ( (  next1035 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_305_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp1065 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg1066 (    int64_t  l204 ) {
    return ( (  from_dash_integral296 ( 0 ) ) - (  l204 ) );
}

static  bool   eq1068 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits1067 (    int64_t  self1437 ) {
    if ( (  eq1068 ( (  self1437 ) , (  from_dash_integral296 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp1065 ( (  self1437 ) , (  from_dash_integral296 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div1047 ( (  self1437 ) , (  from_dash_integral296 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1032   int_dash_iter1064 (    int64_t  int1441 ) {
    if ( (  cmp1065 ( (  int1441 ) , (  from_dash_integral296 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1032) { .f_int = (  op_dash_neg1066 ( (  int1441 ) ) ) , .f_len = ( (  count_dash_digits1067 ) ( (  op_dash_neg1066 ( (  int1441 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1032) { .f_int = (  int1441 ) , .f_len = ( (  count_dash_digits1067 ) ( (  int1441 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1032   chars1063 (    int64_t  self1468 ) {
    return ( (  int_dash_iter1064 ) ( (  self1468 ) ) );
}

static  struct StrConcatIter_1031   into_dash_iter1062 (    struct StrConcat_1024  dref1505 ) {
    return ( (struct StrConcatIter_1031) { .f_left = ( (  chars701 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1063 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1031   chars1061 (    struct StrConcat_1024  self1516 ) {
    return ( (  into_dash_iter1062 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1030   into_dash_iter1060 (    struct StrConcat_1027  dref1505 ) {
    return ( (struct StrConcatIter_1030) { .f_left = ( (  chars701 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1061 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1030   chars1059 (    struct StrConcat_1027  self1516 ) {
    return ( (  into_dash_iter1060 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1029   into_dash_iter1058 (    struct StrConcat_1026  dref1505 ) {
    return ( (struct StrConcatIter_1029) { .f_left = ( (  chars1059 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars703 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1029   chars1057 (    struct StrConcat_1026  self1516 ) {
    return ( (  into_dash_iter1058 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print1025 (    struct StrConcat_1026  s1703 ) {
    ( (  for_dash_each1028 ) ( ( (  chars1057 ) ( (  s1703 ) ) ) ,  (  printf_dash_char344 ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_889   undefined1069 (  ) {
    enum MouseButton_889  temp1070;
    return (  temp1070 );
}

static  enum MouseButton_889   panic_prime_1023 (    struct StrConcat_1024  errmsg1717 ) {
    ( (  print1025 ) ( ( ( StrConcat_1026_StrConcat ) ( ( ( StrConcat_1027_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1717 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1069 ) ( ) );
}

static  enum MouseButton_889   btn_dash_to_dash_mouse_dash_button1021 (    int64_t  btn3394 ) {
    return ( {  int32_t  dref3395 = ( (  i64_dash_i321022 ) ( (  btn3394 ) ) ) ;  dref3395 == 0 ? ( MouseButton_889_MouseLeft ) :  dref3395 == 1 ? ( MouseButton_889_MouseMiddle ) :  dref3395 == 2 ? ( MouseButton_889_MouseRight ) :  dref3395 == 64 ? ( MouseButton_889_ScrollUp ) :  dref3395 == 65 ? ( MouseButton_889_ScrollDown ) : ( (  panic_prime_1023 ) ( ( ( StrConcat_1024_StrConcat ) ( ( (  from_dash_string208 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3394 ) ) ) ) ) ; } );
}

static  struct Scanner_968   mk1072 (    struct StrView_27  s3197 ) {
    return ( (struct Scanner_968) { .f_s = ( (  into_dash_iter702 ) ( (  s3197 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_886   parse_dash_csi962 (    struct Slice_963  seq3401 ) {
    if ( (  eq407 ( ( (  seq3401 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
    }
    char  last3402 = (  elem_dash_get964 ( (  seq3401 ) , (  op_dash_sub297 ( ( (  seq3401 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq949 ( (  elem_dash_get964 ( (  seq3401 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike517 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq949 ( (  last3402 ) , ( (  from_dash_charlike517 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq949 ( (  last3402 ) , ( (  from_dash_charlike517 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_968  temp969 = ( (  mk_dash_from_dash_str970 ) ( ( (  substr971 ) ( ( (  from_dash_ascii_dash_slice977 ) ( (  seq3401 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3401 ) .f_count ) ) ) ) );
        struct Scanner_968 *  sc3403 = ( &temp969 );
        struct Maybe_980  dref3404 = ( (  scan_dash_int981 ) ( (  sc3403 ) ) );
        if ( dref3404.tag == Maybe_980_None_t ) {
            return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
        }
        else {
            if ( dref3404.tag == Maybe_980_Just_t ) {
                ( (  next990 ) ( (  sc3403 ) ) );
                struct Maybe_980  dref3406 = ( (  scan_dash_int981 ) ( (  sc3403 ) ) );
                if ( dref3406.tag == Maybe_980_None_t ) {
                    return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
                }
                else {
                    if ( dref3406.tag == Maybe_980_Just_t ) {
                        ( (  next990 ) ( (  sc3403 ) ) );
                        struct Maybe_980  dref3408 = ( (  scan_dash_int981 ) ( (  sc3403 ) ) );
                        if ( dref3408.tag == Maybe_980_None_t ) {
                            return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
                        }
                        else {
                            if ( dref3408.tag == Maybe_980_Just_t ) {
                                return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Mouse ) ( ( (struct MouseEvent_888) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1021 ) ( ( dref3404 .stuff .Maybe_980_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub173 ( ( (  i64_dash_i321022 ) ( ( dref3406 .stuff .Maybe_980_Just_s .field0 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , .f_y = (  op_dash_sub173 ( ( (  i64_dash_i321022 ) ( ( dref3408 .stuff .Maybe_980_Just_s .field0 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , .f_pressed = (  eq949 ( (  last3402 ) , ( (  from_dash_charlike517 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq407 ( ( (  seq3401 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq949 ( (  last3402 ) , ( (  from_dash_charlike517 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Up_t } ) ) ) ) );
        }
        if ( (  eq949 ( (  last3402 ) , ( (  from_dash_charlike517 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Down_t } ) ) ) ) );
        }
        if ( (  eq949 ( (  last3402 ) , ( (  from_dash_charlike517 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Right_t } ) ) ) ) );
        }
        if ( (  eq949 ( (  last3402 ) , ( (  from_dash_charlike517 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Left_t } ) ) ) ) );
        }
        if ( (  eq949 ( (  last3402 ) , ( (  from_dash_charlike517 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Home_t } ) ) ) ) );
        }
        if ( (  eq949 ( (  last3402 ) , ( (  from_dash_charlike517 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
    }
    if ( (  eq949 ( (  last3402 ) , ( (  from_dash_charlike517 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_968  temp1071 = ( (  mk1072 ) ( ( (  from_dash_ascii_dash_slice977 ) ( (  seq3401 ) ) ) ) );
        struct Scanner_968 *  sc3410 = ( &temp1071 );
        struct Maybe_980  dref3411 = ( (  scan_dash_int981 ) ( (  sc3410 ) ) );
        if ( dref3411.tag == Maybe_980_None_t ) {
            return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
        }
        else {
            if ( dref3411.tag == Maybe_980_Just_t ) {
                return ( {  int32_t  dref3413 = ( (  i64_dash_i321022 ) ( ( dref3411 .stuff .Maybe_980_Just_s .field0 ) ) ) ;  dref3413 == 1 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Home_t } ) ) ) ) ) :  dref3413 == 2 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Insert_t } ) ) ) ) ) :  dref3413 == 3 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Delete_t } ) ) ) ) ) :  dref3413 == 4 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_End_t } ) ) ) ) ) :  dref3413 == 5 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_PageUp_t } ) ) ) ) ) :  dref3413 == 6 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_PageDown_t } ) ) ) ) ) :  dref3413 == 15 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_F5_t } ) ) ) ) ) :  dref3413 == 17 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_F6_t } ) ) ) ) ) :  dref3413 == 18 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_F7_t } ) ) ) ) ) :  dref3413 == 19 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_F8_t } ) ) ) ) ) :  dref3413 == 20 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_F9_t } ) ) ) ) ) :  dref3413 == 21 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_F10_t } ) ) ) ) ) :  dref3413 == 23 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_F11_t } ) ) ) ) ) :  dref3413 == 24 ? ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_F12_t } ) ) ) ) ) : ( (struct Maybe_886) { .tag = Maybe_886_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
}

static  struct Slice_963   subslice1073 (    struct Slice_963  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    char *  begin_dash_ptr1789 = ( (  offset_dash_ptr960 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp298 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp298 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_963) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub297 ( ( (  min507 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_963) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  char *   cast1075 (    struct Array_950 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_963   as_dash_slice1074 (    struct Array_950 *  arr2277 ) {
    return ( (struct Slice_963) { .f_ptr = ( (  cast1075 ) ( (  arr2277 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1077 {
    enum {
        Maybe_1077_None_t,
        Maybe_1077_Just_t,
    } tag;
    union {
        struct {
            struct Key_276  field0;
        } Maybe_1077_Just_s;
    } stuff;
};

static struct Maybe_1077 Maybe_1077_Just (  struct Key_276  field0 ) {
    return ( struct Maybe_1077 ) { .tag = Maybe_1077_Just_t, .stuff = { .Maybe_1077_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1077   parse_dash_ss31078 (    char  c3398 ) {
    if ( (  eq949 ( (  c3398 ) , ( (  from_dash_charlike517 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1077_Just ) ( ( (struct Key_276) { .tag = Key_276_Up_t } ) ) );
    }
    if ( (  eq949 ( (  c3398 ) , ( (  from_dash_charlike517 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1077_Just ) ( ( (struct Key_276) { .tag = Key_276_Down_t } ) ) );
    }
    if ( (  eq949 ( (  c3398 ) , ( (  from_dash_charlike517 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1077_Just ) ( ( (struct Key_276) { .tag = Key_276_Right_t } ) ) );
    }
    if ( (  eq949 ( (  c3398 ) , ( (  from_dash_charlike517 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1077_Just ) ( ( (struct Key_276) { .tag = Key_276_Left_t } ) ) );
    }
    if ( (  eq949 ( (  c3398 ) , ( (  from_dash_charlike517 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1077_Just ) ( ( (struct Key_276) { .tag = Key_276_Home_t } ) ) );
    }
    if ( (  eq949 ( (  c3398 ) , ( (  from_dash_charlike517 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1077_Just ) ( ( (struct Key_276) { .tag = Key_276_End_t } ) ) );
    }
    if ( (  eq949 ( (  c3398 ) , ( (  from_dash_charlike517 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1077_Just ) ( ( (struct Key_276) { .tag = Key_276_F1_t } ) ) );
    }
    if ( (  eq949 ( (  c3398 ) , ( (  from_dash_charlike517 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1077_Just ) ( ( (struct Key_276) { .tag = Key_276_F2_t } ) ) );
    }
    if ( (  eq949 ( (  c3398 ) , ( (  from_dash_charlike517 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1077_Just ) ( ( (struct Key_276) { .tag = Key_276_F3_t } ) ) );
    }
    if ( (  eq949 ( (  c3398 ) , ( (  from_dash_charlike517 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1077_Just ) ( ( (struct Key_276) { .tag = Key_276_F4_t } ) ) );
    }
    return ( (struct Maybe_1077) { .tag = Maybe_1077_None_t } );
}

static  struct Maybe_886   read_dash_key898 (  ) {
    char  temp899 = ( (  undefined900 ) ( ) );
    char *  ch3415 = ( &temp899 );
    struct Maybe_902  dref3416 = ( (  read_dash_byte903 ) ( (  from_dash_integral67 ( 0 ) ) ) );
    if ( dref3416.tag == Maybe_902_None_t ) {
        return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
    }
    else {
        if ( dref3416.tag == Maybe_902_Just_t ) {
            (*  ch3415 ) = ( dref3416 .stuff .Maybe_902_Just_s .field0 );
        }
    }
    if ( (  eq311 ( ( (  ascii_dash_u8516 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral316 ( 13 ) ) ) ) ) {
        return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Enter_t } ) ) ) ) );
    }
    if ( (  eq311 ( ( (  ascii_dash_u8516 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral316 ( 127 ) ) ) ) ) {
        return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp315 ( ( (  ascii_dash_u8516 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral316 ( 27 ) ) ) == 0 ) && ( !  eq311 ( ( (  ascii_dash_u8516 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral316 ( 9 ) ) ) ) ) ) {
        char  letter3418 = ( (  u8_dash_ascii910 ) ( ( (  u32_dash_u8153 ) ( ( (  u32_dash_or740 ) ( ( (  u8_dash_u32911 ) ( ( (  ascii_dash_u8516 ) ( ( * (  ch3415 ) ) ) ) ) ) ,  ( (  from_dash_hex915 ) ( ( (  from_dash_string208 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( ( Key_276_Ctrl ) ( (  letter3418 ) ) ) ) ) ) );
    }
    if ( ( !  eq311 ( ( (  ascii_dash_u8516 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral316 ( 27 ) ) ) ) ) {
        if ( (  cmp315 ( ( (  ascii_dash_u8516 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral316 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key898 ) ( ) );
        } else {
            return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( ( Key_276_Char ) ( ( * (  ch3415 ) ) ) ) ) ) ) );
        }
    }
    char  temp948 = ( (  undefined900 ) ( ) );
    char *  ch23419 = ( &temp948 );
    struct Maybe_902  dref3420 = ( (  read_dash_byte903 ) ( (  from_dash_integral67 ( 50 ) ) ) );
    if ( dref3420.tag == Maybe_902_None_t ) {
        return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3420.tag == Maybe_902_Just_t ) {
            (*  ch23419 ) = ( dref3420 .stuff .Maybe_902_Just_s .field0 );
        }
    }
    if ( (  eq949 ( ( * (  ch23419 ) ) , ( (  from_dash_charlike517 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_950  temp951 = ( ( (  zeroed952 ) ( ) ) );
        struct Array_950 *  seq3422 = ( &temp951 );
        int32_t  slen3423 = (  from_dash_integral67 ( 0 ) );
        while ( (  cmp166 ( (  slen3423 ) , (  from_dash_integral67 ( 31 ) ) ) == 0 ) ) {
            char  temp956 = ( (  undefined900 ) ( ) );
            char *  sc3424 = ( &temp956 );
            struct Maybe_902  dref3425 = ( (  read_dash_byte903 ) ( (  from_dash_integral67 ( 50 ) ) ) );
            if ( dref3425.tag == Maybe_902_None_t ) {
                break;
            }
            else {
                if ( dref3425.tag == Maybe_902_Just_t ) {
                    (*  sc3424 ) = ( dref3425 .stuff .Maybe_902_Just_s .field0 );
                }
            }
            ( (  set957 ) ( (  seq3422 ) ,  ( (  i32_dash_size420 ) ( (  slen3423 ) ) ) ,  ( * (  sc3424 ) ) ) );
            slen3423 = (  op_dash_add168 ( (  slen3423 ) , (  from_dash_integral67 ( 1 ) ) ) );
            if ( ( (  cmp315 ( ( (  ascii_dash_u8516 ) ( ( * (  sc3424 ) ) ) ) , (  from_dash_integral316 ( 64 ) ) ) != 0 ) && (  cmp315 ( ( (  ascii_dash_u8516 ) ( ( * (  sc3424 ) ) ) ) , (  from_dash_integral316 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi962 ) ( ( (  subslice1073 ) ( ( (  as_dash_slice1074 ) ( (  seq3422 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size420 ) ( (  slen3423 ) ) ) ) ) ) );
    }
    if ( (  eq949 ( ( * (  ch23419 ) ) , ( (  from_dash_charlike517 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1076 = ( (  undefined900 ) ( ) );
        char *  sc3427 = ( &temp1076 );
        struct Maybe_902  dref3428 = ( (  read_dash_byte903 ) ( (  from_dash_integral67 ( 50 ) ) ) );
        if ( dref3428.tag == Maybe_902_None_t ) {
            return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3428.tag == Maybe_902_Just_t ) {
                (*  sc3427 ) = ( dref3428 .stuff .Maybe_902_Just_s .field0 );
            }
        }
        struct Maybe_1077  dref3430 = ( (  parse_dash_ss31078 ) ( ( * (  sc3427 ) ) ) );
        if ( dref3430.tag == Maybe_1077_None_t ) {
            return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
        }
        else {
            if ( dref3430.tag == Maybe_1077_Just_t ) {
                return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( dref3430 .stuff .Maybe_1077_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_886_Just ) ( ( ( InputEvent_887_Key ) ( ( (struct Key_276) { .tag = Key_276_Escape_t } ) ) ) ) );
}

static  struct Maybe_886   read_dash_event895 (   struct env98* env ,    struct Tui_100 *  tui3440 ) {
    struct envunion99  temp896 = ( (struct envunion99){ .fun = (  bool  (*) (  struct env97*  ,    struct Tui_100 *  ) )update_dash_dimensions897 , .env =  env->envinst97 } );
    ( temp896.fun ( &temp896.env ,  (  tui3440 ) ) );
    struct Maybe_886  dref3441 = ( (  read_dash_key898 ) ( ) );
    if ( dref3441.tag == Maybe_886_None_t ) {
        return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
    }
    else {
        if ( dref3441.tag == Maybe_886_Just_t ) {
            (*  tui3440 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_886_Just ) ( ( dref3441 .stuff .Maybe_886_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_886   lam893 (   struct env884* env ) {
    struct envunion885  temp894 = ( (struct envunion885){ .fun = (  struct Maybe_886  (*) (  struct env98*  ,    struct Tui_100 *  ) )read_dash_event895 , .env =  env->envinst98 } );
    return ( temp894.fun ( &temp894.env ,  ( env->tui4549 ) ) );
}

static  struct Maybe_886   next1080 (    struct FunIter_883 *  self1032 ) {
    if ( ( ( * (  self1032 ) ) .f_finished ) ) {
        return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
    }
    struct envunion890  temp1081 = ( ( * (  self1032 ) ) .f_fun );
    struct Maybe_886  dref1033 = ( temp1081.fun ( &temp1081.env ) );
    if ( dref1033.tag == Maybe_886_Just_t ) {
        return ( ( Maybe_886_Just ) ( ( dref1033 .stuff .Maybe_886_Just_s .field0 ) ) );
    }
    else {
        if ( dref1033.tag == Maybe_886_None_t ) {
            (*  self1032 ) .f_finished = ( true );
            return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
        }
    }
}

struct env1084 {
    struct Editor_257 *  ed4408;
    ;
};

struct envunion1085 {
    enum Unit_8  (*fun) (  struct env1084*  ,    struct StrView_27  );
    struct env1084 env;
};

static  enum Unit_8   if_dash_just1083 (    struct Maybe_94  x1292 ,   struct envunion1085  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1085  temp1086 = (  fun1294 );
        ( temp1086.fun ( &temp1086.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1087 (   struct env1084* env ,    struct StrView_27  msg4410 ) {
    ( (  free510 ) ( (  msg4410 ) ,  ( ( * ( env->ed4408 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1082 (    struct Editor_257 *  ed4408 ) {
    struct env1084 envinst1084 = {
        .ed4408 =  ed4408 ,
    };
    ( (  if_dash_just1083 ) ( ( ( * (  ed4408 ) ) .f_msg ) ,  ( (struct envunion1085){ .fun = (  enum Unit_8  (*) (  struct env1084*  ,    struct StrView_27  ) )lam1087 , .env =  envinst1084 } ) ) );
    (*  ed4408 ) .f_msg = ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1089 {
    enum Unit_8  (*fun) (  struct env272*  ,    struct Editor_257 *  ,    struct Key_276  );
    struct env272 env;
};

enum CursorMovement_1095 {
    CursorMovement_1095_NoChanges,
    CursorMovement_1095_UpdateVI,
    CursorMovement_1095_OverrideSelect,
};

struct Tuple2_1097 {
    enum CursorMovement_1095  field0;
    enum CursorMovement_1095  field1;
};

static struct Tuple2_1097 Tuple2_1097_Tuple2 (  enum CursorMovement_1095  field0 ,  enum CursorMovement_1095  field1 ) {
    return ( struct Tuple2_1097 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1096 (    enum CursorMovement_1095  l4149 ,    enum CursorMovement_1095  r4151 ) {
    return ( {  struct Tuple2_1097  dref4152 = ( ( Tuple2_1097_Tuple2 ) ( (  l4149 ) ,  (  r4151 ) ) ) ;  dref4152 .field0 == CursorMovement_1095_NoChanges &&  dref4152 .field1 == CursorMovement_1095_NoChanges ? ( true ) :  dref4152 .field0 == CursorMovement_1095_UpdateVI &&  dref4152 .field1 == CursorMovement_1095_UpdateVI ? ( true ) :  dref4152 .field0 == CursorMovement_1095_OverrideSelect &&  dref4152 .field1 == CursorMovement_1095_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_27   from_dash_bytes1101 (    struct Slice_11  sl2154 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2154 ) } );
}

static  struct StrView_27   line1100 (    struct TextBuf_114 *  self3714 ,    int32_t  li3716 ) {
    return ( (  from_dash_bytes1101 ) ( ( (  to_dash_slice534 ) ( ( ( (  get531 ) ( ( & ( ( * (  self3714 ) ) .f_buf ) ) ,  ( (  i32_dash_size420 ) ( (  li3716 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe1104 (    struct Maybe_94  x1283 ,    int32_t (*  fun1285 )(    struct StrView_27  ) ,    int32_t  default1287 ) {
    return ( {  struct Maybe_94  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_94_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_94_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  struct Maybe_94   char_dash_replacement1105 (    struct Char_65  c4032 ) {
    if ( (  eq583 ( (  c4032 ) , ( (  from_dash_charlike354 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_94_Just ) ( ( (  from_dash_string208 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
}

static  size_t   reduce1108 (    struct StrViewIter_62  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrViewIter_62  it1100 = ( (  into_dash_iter787 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_305  dref1101 = ( (  next689 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_305_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_305_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_305_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1109 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1109);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1110;
    return (  temp1110 );
}

static  size_t   lam1111 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add319 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1107 (    struct StrViewIter_62  it1105 ) {
    return ( (  reduce1108 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1111 ) ) );
}

static  int32_t   lam1106 (    struct StrView_27  s4037 ) {
    return ( (  size_dash_i32337 ) ( ( (  count1107 ) ( ( (  chars701 ) ( (  s4037 ) ) ) ) ) ) );
}

static  int32_t   max1113 (    int32_t  l1316 ,    int32_t  r1318 ) {
    if ( (  cmp166 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  void *   cast_dash_ptr1119 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1120 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed1117 (  ) {
    wchar_t  temp1118;
    wchar_t  x571 = (  temp1118 );
    ( ( memset ) ( ( (  cast_dash_ptr1119 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of1120 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  char *   cast_dash_ptr1121 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast1122 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_1125 {
    size_t  f_size;
};

static  struct TypeSize_1125   get_dash_typesize1124 (  ) {
    wchar_t  temp1126;
    return ( (struct TypeSize_1125) { .f_size = ( sizeof( ( (  temp1126 ) ) ) ) } );
}

static  wchar_t   cast1128 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar1115 (    struct Char_65  c751 ) {
    struct CharDestructured_345  dref752 = ( (  destructure347 ) ( (  c751 ) ) );
    if ( dref752.tag == CharDestructured_345_Ref_t ) {
        wchar_t  temp1116 = ( (  zeroed1117 ) ( ) );
        wchar_t *  wcp754 = ( &temp1116 );
        size_t  num_dash_chars755 = ( ( mbstowcs ) ( (  wcp754 ) ,  ( (  cast_dash_ptr1121 ) ( ( ( dref752 .stuff .CharDestructured_345_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq407 ( (  num_dash_chars755 ) , ( ( (  cast1122 ) ( ( (  op_dash_neg1066 ( (  from_dash_integral296 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1123 = ( (  from_dash_string68 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1123);
            exit ( 1 );
            ( Unit_8_Unit );
        }
        return ( * (  wcp754 ) );
    }
    else {
        if ( dref752.tag == CharDestructured_345_Scalar_t ) {
            if ( ( ! (  eq407 ( ( (  size_dash_of823 ) ( ( ( dref752 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1124 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1127 = ( (  from_dash_string68 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1127);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( (  cast1128 ) ( ( ( dref752 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1114 (    struct Char_65  c2602 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1115 ) ( (  c2602 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1112 (    struct Char_65  c3485 ) {
    return ( (  max1113 ) ( ( (  wcwidth1114 ) ( (  c3485 ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width1103 (    struct Char_65  c4035 ) {
    return ( (  maybe1104 ) ( ( (  char_dash_replacement1105 ) ( (  c4035 ) ) ) ,  (  lam1106 ) ,  ( (  rendered_dash_wcwidth1112 ) ( (  c4035 ) ) ) ) );
}

static  int32_t   pos_dash_vi1098 (    struct TextBuf_114 *  self4051 ,    struct Pos_26  pos4053 ) {
    int32_t  bi4054 = ( (  from_dash_integral67 ( 0 ) ) );
    int32_t  vi4055 = (  from_dash_integral67 ( 0 ) );
    struct StrViewIter_62  temp1099 =  into_dash_iter787 ( ( (  chars701 ) ( ( (  line1100 ) ( (  self4051 ) ,  ( (  pos4053 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_305  __cond1102 =  next689 (&temp1099);
        if (  __cond1102 .tag == 0 ) {
            break;
        }
        struct Char_65  c4057 =  __cond1102 .stuff .Maybe_305_Just_s .field0;
        bi4054 = (  op_dash_add168 ( (  bi4054 ) , ( (  size_dash_i32337 ) ( ( (  c4057 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp166 ( ( (  pos4053 ) .f_bi ) , (  bi4054 ) ) == 0 ) ) {
            break;
        }
        vi4055 = (  op_dash_add168 ( (  vi4055 ) , ( (  char_dash_screen_dash_width1103 ) ( (  c4057 ) ) ) ) );
    }
    return (  vi4055 );
}

struct Tuple2_1131 {
    enum Mode_229  field0;
    enum Mode_229  field1;
};

static struct Tuple2_1131 Tuple2_1131_Tuple2 (  enum Mode_229  field0 ,  enum Mode_229  field1 ) {
    return ( struct Tuple2_1131 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1130 (    enum Mode_229  l4011 ,    enum Mode_229  r4013 ) {
    return ( {  struct Tuple2_1131  dref4014 = ( ( Tuple2_1131_Tuple2 ) ( (  l4011 ) ,  (  r4013 ) ) ) ;  dref4014 .field0 == Mode_229_Normal &&  dref4014 .field1 == Mode_229_Normal ? ( true ) :  dref4014 .field0 == Mode_229_Insert &&  dref4014 .field1 == Mode_229_Insert ? ( true ) :  dref4014 .field0 == Mode_229_Select &&  dref4014 .field1 == Mode_229_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1129 (    struct Pane_228 *  self4138 ,    struct Maybe_34  sel4140 ) {
    if ( ( !  eq1130 ( ( ( * (  self4138 ) ) .f_mode ) , ( Mode_229_Select ) ) ) ) {
        (*  self4138 ) .f_sel = (  sel4140 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors1094 (    struct Pane_228 *  self4155 ,    struct Pos_26  cur4157 ,    struct Maybe_34  sel4159 ,    enum CursorMovement_1095  cursor_dash_movement_dash_type4161 ) {
    if ( ( !  eq1096 ( (  cursor_dash_movement_dash_type4161 ) , ( CursorMovement_1095_NoChanges ) ) ) ) {
        (*  self4155 ) .f_vi = ( (  pos_dash_vi1098 ) ( ( ( * (  self4155 ) ) .f_buf ) ,  (  cur4157 ) ) );
    }
    (*  self4155 ) .f_cursor = (  cur4157 );
    if ( ( !  eq1096 ( (  cursor_dash_movement_dash_type4161 ) , ( CursorMovement_1095_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1129 ) ( (  self4155 ) ,  (  sel4159 ) ) );
    } else {
        (*  self4155 ) .f_sel = (  sel4159 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1133 (    struct StrView_27  self2200 ) {
    return ( ( (  self2200 ) .f_contents ) .f_count );
}

static  size_t   clamp1134 (    size_t  x1353 ,    size_t  mn1355 ,    size_t  mx1357 ) {
    if ( (  cmp298 ( (  x1353 ) , (  mn1355 ) ) == 0 ) ) {
        return (  mn1355 );
    } else {
        if ( (  cmp298 ( (  x1353 ) , (  mx1357 ) ) == 2 ) ) {
            return (  mx1357 );
        } else {
            return (  x1353 );
        }
    }
}

static  size_t   sync_dash_char1136 (    uint8_t *  p693 ) {
    size_t  i694 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb695 = ( * ( (uint8_t * ) ( ( (void*) (  p693 ) ) + (  op_dash_neg1066 ( ( (  size_dash_i64310 ) ( (  i694 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp315 ( (  pb695 ) , (  from_dash_integral316 ( 128 ) ) ) != 0 ) && (  cmp315 ( (  pb695 ) , (  op_dash_add946 ( (  from_dash_integral316 ( 128 ) ) , (  from_dash_integral316 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i694 );
        }
        i694 = (  op_dash_add319 ( (  i694 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1135 (    uint8_t *  p698 ) {
    return (  op_dash_add319 ( ( (  sync_dash_char1136 ) ( ( (  offset_dash_ptr308 ) ( (  p698 ) ,  (  op_dash_neg1066 ( (  from_dash_integral296 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1132 (    struct TextBuf_114 *  self3735 ,    struct Pos_26  pos3737 ) {
    if ( (  eq525 ( (  pos3737 ) , ( (  mk672 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk672 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    }
    if ( (  eq526 ( ( (  pos3737 ) .f_bi ) , (  from_dash_integral67 ( 0 ) ) ) ) ) {
        ( (  assert645 ) ( (  cmp166 ( ( (  pos3737 ) .f_line ) , (  from_dash_integral67 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string208 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk672 ) ( (  op_dash_sub173 ( ( (  pos3737 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  ( (  size_dash_i32337 ) ( ( (  num_dash_bytes1133 ) ( ( (  line1100 ) ( (  self3735 ) ,  (  op_dash_sub173 ( ( (  pos3737 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line3738 = ( (  line1100 ) ( (  self3735 ) ,  ( (  pos3737 ) .f_line ) ) );
    size_t  pos_dash_bi3739 = ( (  clamp1134 ) ( ( (  i32_dash_size420 ) ( ( (  pos3737 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1133 ) ( (  line3738 ) ) ) ) );
    size_t  off3740 = ( (  previous_dash_char1135 ) ( ( (  offset_dash_ptr308 ) ( ( ( (  line3738 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  pos_dash_bi3739 ) ) ) ) ) ) );
    return ( (  mk672 ) ( ( (  pos3737 ) .f_line ) ,  ( (  size_dash_i32337 ) ( (  op_dash_sub297 ( (  pos_dash_bi3739 ) , (  off3740 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1093 (    struct Pane_228 *  self4167 ) {
    ( (  set_dash_cursors1094 ) ( (  self4167 ) ,  ( (  left_dash_pos1132 ) ( ( ( * (  self4167 ) ) .f_buf ) ,  ( ( * (  self4167 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_228 *   pane1137 (    struct Editor_257 *  ed4398 ) {
    return ( & ( ( * (  ed4398 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1140 (    struct TextBuf_114 *  self3719 ) {
    return ( (  size_dash_i32337 ) ( ( (  size527 ) ( ( & ( ( * (  self3719 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1139 (    struct TextBuf_114 *  self3727 ,    struct Pos_26  pos3729 ) {
    if ( (  cmp166 ( ( (  pos3729 ) .f_line ) , ( (  num_dash_lines1140 ) ( (  self3727 ) ) ) ) != 0 ) ) {
        return ( (  mk672 ) ( ( (  num_dash_lines1140 ) ( (  self3727 ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    }
    struct StrView_27  line3730 = ( (  line1100 ) ( (  self3727 ) ,  ( (  pos3729 ) .f_line ) ) );
    int64_t  bi3731 = ( (  i32_dash_i641020 ) ( ( (  pos3729 ) .f_bi ) ) );
    if ( (  cmp1065 ( (  bi3731 ) , ( (  size_dash_i64310 ) ( ( (  num_dash_bytes1133 ) ( (  line3730 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp166 ( (  op_dash_add168 ( ( (  pos3729 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) , ( (  num_dash_lines1140 ) ( (  self3727 ) ) ) ) != 0 ) ) {
            return ( (  mk672 ) ( ( (  pos3729 ) .f_line ) ,  ( (  size_dash_i32337 ) ( ( (  num_dash_bytes1133 ) ( (  line3730 ) ) ) ) ) ) );
        }
        return ( (  mk672 ) ( (  op_dash_add168 ( ( (  pos3729 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    }
    int32_t  off3732 = ( (  size_dash_i32337 ) ( ( (  next_dash_char314 ) ( ( (  offset_dash_ptr308 ) ( ( ( (  line3730 ) .f_contents ) .f_ptr ) ,  (  bi3731 ) ) ) ) ) ) );
    return ( (  mk672 ) ( ( (  pos3729 ) .f_line ) ,  (  op_dash_add168 ( ( (  pos3729 ) .f_bi ) , (  off3732 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1138 (    struct Pane_228 *  self4164 ) {
    ( (  set_dash_cursors1094 ) ( (  self4164 ) ,  ( (  right_dash_pos1139 ) ( ( ( * (  self4164 ) ) .f_buf ) ,  ( ( * (  self4164 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1142 (    struct TextBuf_114 *  self4040 ,    int32_t  ln4042 ,    int32_t  vx4044 ) {
    int32_t  bi4045 = ( (  from_dash_integral67 ( 0 ) ) );
    int32_t  vi4046 = (  from_dash_integral67 ( 0 ) );
    struct StrViewIter_62  temp1143 =  into_dash_iter787 ( ( (  chars701 ) ( ( (  line1100 ) ( (  self4040 ) ,  (  ln4042 ) ) ) ) ) );
    while (true) {
        struct Maybe_305  __cond1144 =  next689 (&temp1143);
        if (  __cond1144 .tag == 0 ) {
            break;
        }
        struct Char_65  c4048 =  __cond1144 .stuff .Maybe_305_Just_s .field0;
        vi4046 = (  op_dash_add168 ( (  vi4046 ) , ( (  char_dash_screen_dash_width1103 ) ( (  c4048 ) ) ) ) );
        if ( (  cmp166 ( (  vx4044 ) , (  vi4046 ) ) == 0 ) ) {
            break;
        }
        bi4045 = (  op_dash_add168 ( (  bi4045 ) , ( (  size_dash_i32337 ) ( ( (  c4048 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4045 );
}

static  enum Unit_8   move_dash_down1141 (    struct Pane_228 *  self4170 ,    int32_t  amnt4172 ) {
    struct Pos_26  cur4173 = ( ( * (  self4170 ) ) .f_cursor );
    int32_t  nu_dash_line4174 = ( (  min636 ) ( (  op_dash_add168 ( ( (  cur4173 ) .f_line ) , (  amnt4172 ) ) ) ,  (  op_dash_sub173 ( ( (  num_dash_lines1140 ) ( ( ( * (  self4170 ) ) .f_buf ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    int32_t  vci4175 = ( ( * (  self4170 ) ) .f_vi );
    int32_t  bi4176 = ( (  vi_dash_bi1142 ) ( ( ( * (  self4170 ) ) .f_buf ) ,  (  nu_dash_line4174 ) ,  (  vci4175 ) ) );
    ( (  set_dash_cursors1094 ) ( (  self4170 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4174 ) , .f_bi = (  bi4176 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1145 (    struct Pane_228 *  self4179 ,    int32_t  amnt4181 ) {
    struct Pos_26  cur4182 = ( ( * (  self4179 ) ) .f_cursor );
    int32_t  nu_dash_line4183 = ( (  max1113 ) ( (  op_dash_sub173 ( ( (  cur4182 ) .f_line ) , (  amnt4181 ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    int32_t  vci4184 = ( ( * (  self4179 ) ) .f_vi );
    int32_t  bi4185 = ( (  vi_dash_bi1142 ) ( ( ( * (  self4179 ) ) .f_buf ) ,  (  nu_dash_line4183 ) ,  (  vci4184 ) ) );
    ( (  set_dash_cursors1094 ) ( (  self4179 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4183 ) , .f_bi = (  bi4185 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1147 (    struct TextBuf_114 *  self3828 ) {
    (*  self3828 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_116_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1146 (    struct Pane_228 *  self4143 ,    enum Mode_229  mode4145 ) {
    if ( (  eq1130 ( (  mode4145 ) , ( Mode_229_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1147 ) ( ( ( * (  self4143 ) ) .f_buf ) ) );
    }
    (*  self4143 ) .f_mode = (  mode4145 );
    return ( Unit_8_Unit );
}

struct TakeWhile_1152 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1151 {
    struct TakeWhile_1152  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1151 Map_1151_Map (  struct TakeWhile_1152  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1151 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1151   into_dash_iter1154 (    struct Map_1151  self797 ) {
    return (  self797 );
}

static  struct Maybe_305   next1156 (    struct TakeWhile_1152 *  self965 ) {
    struct Maybe_305  mx966 = ( (  next689 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_305  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_305_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_305_Just ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
            }
        }
    }
}

static  struct Maybe_255   next1155 (    struct Map_1151 *  dref799 ) {
    struct Maybe_305  dref802 = ( (  next1156 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_305_Just_t ) {
            return ( ( Maybe_255_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_305_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1153 (    struct Map_1151  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1151  it1100 = ( (  into_dash_iter1154 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next1155 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1157 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1157);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1158;
    return (  temp1158 );
}

static  size_t   lam1159 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add319 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1150 (    struct Map_1151  it1111 ) {
    return ( (  reduce1153 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1159 ) ) );
}

static  struct TakeWhile_1152   into_dash_iter1161 (    struct TakeWhile_1152  self962 ) {
    return (  self962 );
}

static  struct Map_1151   map1160 (    struct TakeWhile_1152  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1152  it809 = ( (  into_dash_iter1161 ) ( (  iterable806 ) ) );
    return ( ( Map_1151_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1152   take_dash_while1162 (    struct StrView_27  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1152) { .f_it = ( (  into_dash_iter702 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  bool   lam1163 (    struct Char_65  c4233 ) {
    return (  eq583 ( (  c4233 ) , ( (  from_dash_charlike354 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1164 (    struct Char_65  c4235 ) {
    return ( (  c4235 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1149 (    struct Pane_228 *  pane4229 ,    int32_t  line4231 ) {
    return ( (  size_dash_i32337 ) ( ( (  sum1150 ) ( ( (  map1160 ) ( ( (  take_dash_while1162 ) ( ( (  line1100 ) ( ( ( * (  pane4229 ) ) .f_buf ) ,  (  line4231 ) ) ) ,  (  lam1163 ) ) ) ,  (  lam1164 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1148 (    struct Pane_228 *  self4248 ) {
    struct Pos_26  cur4249 = ( ( * (  self4248 ) ) .f_cursor );
    int32_t  indent4250 = ( (  indent_dash_at_dash_line1149 ) ( (  self4248 ) ,  ( (  cur4249 ) .f_line ) ) );
    struct Pos_26  temp1165 = (  cur4249 );
    temp1165 .  f_bi = (  indent4250 );
    ( (  set_dash_cursors1094 ) ( (  self4248 ) ,  ( temp1165 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1166 (    struct Pane_228 *  self4253 ) {
    struct Pos_26  cur4254 = ( ( * (  self4253 ) ) .f_cursor );
    struct Pos_26  temp1167 = (  cur4254 );
    temp1167 .  f_bi = ( (  size_dash_i32337 ) ( ( (  num_dash_bytes1133 ) ( ( (  line1100 ) ( ( ( * (  self4253 ) ) .f_buf ) ,  ( (  cur4254 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors1094 ) ( (  self4253 ) ,  ( temp1167 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct SliceIter_1175 {
    struct Slice_31  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1174 {
    struct SliceIter_1175  field0;
    size_t  field1;
};

static struct Drop_1174 Drop_1174_Drop (  struct SliceIter_1175  field0 ,  size_t  field1 ) {
    return ( struct Drop_1174 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1174   into_dash_iter1176 (    struct Drop_1174  self846 ) {
    return (  self846 );
}

static  struct SliceIter_1175   into_dash_iter1179 (    struct Slice_31  self1824 ) {
    return ( (struct SliceIter_1175) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1181 (    struct Changeset_32 *  x338 ,    int64_t  count340 ) {
    struct Changeset_32  temp1182;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1182 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1180 (    struct Slice_31  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Changeset_32 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1181 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp298 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp298 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub297 ( ( (  min507 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_1175   into_dash_iter1178 (    struct List_30  self2030 ) {
    return ( (  into_dash_iter1179 ) ( ( (  subslice1180 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Drop_1174   drop1177 (    struct List_30  iterable853 ,    size_t  i855 ) {
    struct SliceIter_1175  it856 = ( (  into_dash_iter1178 ) ( (  iterable853 ) ) );
    return ( ( Drop_1174_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

struct Maybe_1184 {
    enum {
        Maybe_1184_None_t,
        Maybe_1184_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_32  field0;
        } Maybe_1184_Just_s;
    } stuff;
};

static struct Maybe_1184 Maybe_1184_Just (  struct Changeset_32  field0 ) {
    return ( struct Maybe_1184 ) { .tag = Maybe_1184_Just_t, .stuff = { .Maybe_1184_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1184   next1186 (    struct SliceIter_1175 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp298 ( (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1184) { .tag = Maybe_1184_None_t } );
    }
    struct Changeset_32  elem1832 = ( * ( (  offset_dash_ptr1181 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1184_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_1184   next1185 (    struct Drop_1174 *  dref848 ) {
    while ( (  cmp298 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1186 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub297 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1186 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

struct env1189 {
    enum CAllocator_10  al3682;
    ;
};

struct envunion1190 {
    enum Unit_8  (*fun) (  struct env1189*  ,    struct Action_25  );
    struct env1189 env;
};

struct SliceIter_1191 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1191   into_dash_iter1194 (    struct Slice_24  self1824 ) {
    return ( (struct SliceIter_1191) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1196 (    struct Action_25 *  x338 ,    int64_t  count340 ) {
    struct Action_25  temp1197;
    return ( (struct Action_25 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1197 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1195 (    struct Slice_24  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Action_25 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1196 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp298 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp298 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub297 ( ( (  min507 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_1191   into_dash_iter1193 (    struct List_23  self2030 ) {
    return ( (  into_dash_iter1194 ) ( ( (  subslice1195 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

struct Maybe_1198 {
    enum {
        Maybe_1198_None_t,
        Maybe_1198_Just_t,
    } tag;
    union {
        struct {
            struct Action_25  field0;
        } Maybe_1198_Just_s;
    } stuff;
};

static struct Maybe_1198 Maybe_1198_Just (  struct Action_25  field0 ) {
    return ( struct Maybe_1198 ) { .tag = Maybe_1198_Just_t, .stuff = { .Maybe_1198_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1198   next1199 (    struct SliceIter_1191 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp298 ( (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1198) { .tag = Maybe_1198_None_t } );
    }
    struct Action_25  elem1832 = ( * ( (  offset_dash_ptr1196 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1198_Just ) ( (  elem1832 ) ) );
}

static  enum Unit_8   for_dash_each1188 (    struct List_23  iterable1075 ,   struct envunion1190  fun1077 ) {
    struct SliceIter_1191  temp1192 = ( (  into_dash_iter1193 ) ( (  iterable1075 ) ) );
    struct SliceIter_1191 *  it1078 = ( &temp1192 );
    while ( ( true ) ) {
        struct Maybe_1198  dref1079 = ( (  next1199 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1198_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1198_Just_t ) {
                struct envunion1190  temp1200 = (  fun1077 );
                ( temp1200.fun ( &temp1200.env ,  ( dref1079 .stuff .Maybe_1198_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1202 (    struct Action_25  action3675 ,    enum CAllocator_10  al3677 ) {
    ( (  free510 ) ( ( (  action3675 ) .f_fwd ) ,  (  al3677 ) ) );
    ( (  free510 ) ( ( (  action3675 ) .f_bwd ) ,  (  al3677 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1201 (   struct env1189* env ,    struct Action_25  a3684 ) {
    return ( (  free_dash_action1202 ) ( (  a3684 ) ,  ( env->al3682 ) ) );
}

static  void *   cast_dash_ptr1205 (    struct Action_25 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1204 (    enum CAllocator_10  dref1961 ,    struct Slice_24  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1205 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1203 (    struct List_23 *  list2037 ) {
    ( (  free1204 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1187 (    struct Changeset_32  chs3680 ,    enum CAllocator_10  al3682 ) {
    struct env1189 envinst1189 = {
        .al3682 =  al3682 ,
    };
    ( (  for_dash_each1188 ) ( ( (  chs3680 ) .f_parts ) ,  ( (struct envunion1190){ .fun = (  enum Unit_8  (*) (  struct env1189*  ,    struct Action_25  ) )lam1201 , .env =  envinst1189 } ) ) );
    ( (  free1203 ) ( ( & ( (  chs3680 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1206 (    struct List_30 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min507 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1172 (    struct Actions_115 *  actions3698 ) {
    enum CAllocator_10  al3699 = ( ( ( * (  actions3698 ) ) .f_list ) .f_al );
    size_t  cur3700 = ( ( * (  actions3698 ) ) .f_cur );
    struct Drop_1174  temp1173 =  into_dash_iter1176 ( ( (  drop1177 ) ( ( ( * (  actions3698 ) ) .f_list ) ,  (  cur3700 ) ) ) );
    while (true) {
        struct Maybe_1184  __cond1183 =  next1185 (&temp1173);
        if (  __cond1183 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action3702 =  __cond1183 .stuff .Maybe_1184_Just_s .field0;
        ( (  free_dash_changeset1187 ) ( (  action3702 ) ,  (  al3699 ) ) );
    }
    ( (  trim1206 ) ( ( & ( ( * (  actions3698 ) ) .f_list ) ) ,  (  cur3700 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1207 (    struct StrView_27  s2167 ,    enum CAllocator_10  al2169 ) {
    return ( (  clone_dash_0462 ) ( (  s2167 ) ,  (  al2169 ) ) );
}

static  struct Maybe_94   head1209 (    struct SplitIter_572  it1143 ) {
    struct SplitIter_572  temp1210 = ( (  into_dash_iter579 ) ( (  it1143 ) ) );
    return ( (  next593 ) ( ( &temp1210 ) ) );
}

static  struct Maybe_94   head1212 (    struct Drop_571  it1143 ) {
    struct Drop_571  temp1213 = ( (  into_dash_iter577 ) ( (  it1143 ) ) );
    return ( (  next592 ) ( ( &temp1213 ) ) );
}

static  bool   null1211 (    struct Drop_571  it1152 ) {
    struct Maybe_94  dref1153 = ( (  head1212 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_94_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1215 (    struct StrView_27  errmsg1714 ) {
    ( (  print_dash_str646 ) ( ( ( StrConcat_647_StrConcat ) ( ( ( StrConcat_648_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_590   undefined1216 (  ) {
    struct Tuple2_590  temp1217;
    return (  temp1217 );
}

static  struct Tuple2_590   or_dash_fail1214 (    struct Maybe_589  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_589  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_589_None_t ) {
        ( (  panic1215 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1216 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_589_Just_t ) {
            return ( dref1730 .stuff .Maybe_589_Just_s .field0 );
        }
    }
}

static  struct Maybe_589   reduce1219 (    struct Zip_570  iterable1094 ,    struct Maybe_589  base1096 ,    struct Maybe_589 (*  fun1098 )(    struct Tuple2_590  ,    struct Maybe_589  ) ) {
    struct Maybe_589  x1099 = (  base1096 );
    struct Zip_570  it1100 = ( (  into_dash_iter575 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_589  dref1101 = ( (  next591 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_589_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_589_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_589_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1220 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1220);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_589  temp1221;
    return (  temp1221 );
}

static  struct Maybe_589   lam1222 (    struct Tuple2_590  e1148 ,    struct Maybe_589  dref1149 ) {
    return ( ( Maybe_589_Just ) ( (  e1148 ) ) );
}

static  struct Maybe_589   last1218 (    struct Zip_570  it1146 ) {
    return ( (  reduce1219 ) ( (  it1146 ) ,  ( (struct Maybe_589) { .tag = Maybe_589_None_t } ) ,  (  lam1222 ) ) );
}

static  int32_t   snd1223 (    struct Tuple2_590  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct StrView_27   fst1224 (    struct Tuple2_590  dref1254 ) {
    return ( dref1254 .field0 );
}

static  struct Pos_26   pos_dash_after_dash_str1208 (    struct TextBuf_114 *  self3816 ,    struct StrView_27  bytes3818 ,    struct Pos_26  from3820 ) {
    struct SplitIter_572  lines3821 = ( (  split_dash_by_dash_each580 ) ( (  bytes3818 ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line3822 = ( (  or_dash_else558 ) ( ( (  head1209 ) ( (  lines3821 ) ) ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_571  headless3823 = ( (  drop578 ) ( (  lines3821 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1211 ) ( (  headless3823 ) ) ) ) {
        struct Pos_26  next_dash_pos3824 = ( (  mk672 ) ( ( (  from3820 ) .f_line ) ,  (  op_dash_add168 ( ( (  from3820 ) .f_bi ) , ( (  size_dash_i32337 ) ( ( (  num_dash_bytes1133 ) ( (  first_dash_line3822 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3824 );
    } else {
        struct Tuple2_590  last_dash_line3825 = ( (  or_dash_fail1214 ) ( ( (  last1218 ) ( ( (  zip576 ) ( (  headless3823 ) ,  ( (  from435 ) ( (  op_dash_add168 ( ( (  from3820 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk672 ) ( ( (  snd1223 ) ( (  last_dash_line3825 ) ) ) ,  ( (  size_dash_i32337 ) ( ( (  num_dash_bytes1133 ) ( ( (  fst1224 ) ( (  last_dash_line3825 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1230 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   from_dash_charlike1231 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1235 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1237 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1239 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   str_dash_between1226 (   struct env134* env ,    struct TextBuf_114 *  self3848 ,    struct Pos_26  from3850 ,    struct Pos_26  to3852 ) {
    enum CAllocator_10  al3853 = ( ( ( * (  self3848 ) ) .f_buf ) .f_al );
    if ( (  eq526 ( ( (  from3850 ) .f_line ) , ( (  to3852 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3854 = ( (  i32_dash_size420 ) ( ( (  min636 ) ( ( (  from3850 ) .f_bi ) ,  ( (  to3852 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3855 = ( (  i32_dash_size420 ) ( ( (  max1113 ) ( ( (  from3850 ) .f_bi ) ,  ( (  to3852 ) .f_bi ) ) ) ) );
        return ( (  clone1207 ) ( ( (  byte_dash_substr519 ) ( ( (  line1100 ) ( (  self3848 ) ,  ( (  from3850 ) .f_line ) ) ) ,  (  from_dash_bi3854 ) ,  (  to_dash_bi3855 ) ) ) ,  (  al3853 ) ) );
    } else {
        struct Pos_26  from_dash_pos3856 = ( (  min522 ) ( (  from3850 ) ,  (  to3852 ) ) );
        struct Pos_26  to_dash_pos3857 = ( (  max524 ) ( (  from3850 ) ,  (  to3852 ) ) );
        struct List_9  temp1227 = ( (  mk447 ) ( (  al3853 ) ) );
        struct List_9 *  sb3858 = ( &temp1227 );
        struct StrView_27  first_dash_line3859 = ( (  line1100 ) ( (  self3848 ) ,  ( (  from_dash_pos3856 ) .f_line ) ) );
        struct envunion135  temp1228 = ( (struct envunion135){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all540 , .env =  env->envinst46 } );
        ( temp1228.fun ( &temp1228.env ,  (  sb3858 ) ,  ( ( (  byte_dash_substr519 ) ( (  first_dash_line3859 ) ,  ( (  i32_dash_size420 ) ( ( (  from_dash_pos3856 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1133 ) ( (  first_dash_line3859 ) ) ) ) ) .f_contents ) ) );
        struct envunion1230  temp1229 = ( (struct envunion1230){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all540 , .env =  env->envinst46 } );
        ( temp1229.fun ( &temp1229.env ,  (  sb3858 ) ,  ( ( ( (  from_dash_charlike1231 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_162  temp1232 =  into_dash_iter163 ( ( (  to172 ) ( (  op_dash_add168 ( ( (  from_dash_pos3856 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  op_dash_sub173 ( ( (  to_dash_pos3857 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_164  __cond1233 =  next165 (&temp1232);
            if (  __cond1233 .tag == 0 ) {
                break;
            }
            int32_t  i3861 =  __cond1233 .stuff .Maybe_164_Just_s .field0;
            struct envunion1235  temp1234 = ( (struct envunion1235){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all540 , .env =  env->envinst46 } );
            ( temp1234.fun ( &temp1234.env ,  (  sb3858 ) ,  ( ( (  line1100 ) ( (  self3848 ) ,  (  i3861 ) ) ) .f_contents ) ) );
            struct envunion1237  temp1236 = ( (struct envunion1237){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all540 , .env =  env->envinst46 } );
            ( temp1236.fun ( &temp1236.env ,  (  sb3858 ) ,  ( ( ( (  from_dash_charlike1231 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1239  temp1238 = ( (struct envunion1239){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all540 , .env =  env->envinst46 } );
        ( temp1238.fun ( &temp1238.env ,  (  sb3858 ) ,  ( ( (  byte_dash_substr519 ) ( ( (  line1100 ) ( (  self3848 ) ,  ( (  to_dash_pos3857 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size420 ) ( ( (  to_dash_pos3857 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes1101 ) ( ( (  to_dash_slice534 ) ( ( * (  sb3858 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1240 (    struct Maybe_215  m1265 ) {
    struct Maybe_215  dref1266 = (  m1265 );
    if ( dref1266.tag == Maybe_215_None_t ) {
        return ( true );
    }
    else {
        if ( dref1266.tag == Maybe_215_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1242 {
    enum ChangesetInputType_116  field0;
    enum ChangesetInputType_116  field1;
};

static struct Tuple2_1242 Tuple2_1242_Tuple2 (  enum ChangesetInputType_116  field0 ,  enum ChangesetInputType_116  field1 ) {
    return ( struct Tuple2_1242 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1241 (    enum ChangesetInputType_116  l3688 ,    enum ChangesetInputType_116  r3690 ) {
    return ( {  struct Tuple2_1242  dref3691 = ( ( Tuple2_1242_Tuple2 ) ( (  l3688 ) ,  (  r3690 ) ) ) ;  dref3691 .field0 == ChangesetInputType_116_NoChangeset &&  dref3691 .field1 == ChangesetInputType_116_NoChangeset ? ( true ) :  dref3691 .field0 == ChangesetInputType_116_InputChangeset &&  dref3691 .field1 == ChangesetInputType_116_InputChangeset ? ( true ) :  dref3691 .field0 == ChangesetInputType_116_CustomChangeset &&  dref3691 .field1 == ChangesetInputType_116_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1244 (    struct Slice_31  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp298 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1181 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  struct Changeset_32 *   last_dash_ptr1243 (    struct Slice_31  s1940 ) {
    if ( (  eq407 ( ( (  s1940 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1215 ) ( ( (  from_dash_string208 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1244 ) ( (  s1940 ) ,  (  op_dash_sub297 ( ( (  s1940 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1245 (    struct List_30  l2128 ) {
    struct Changeset_32 *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

struct TypeSize_1252 {
    size_t  f_size;
};

static  struct TypeSize_1252   get_dash_typesize1251 (  ) {
    struct Action_25  temp1253;
    return ( (struct TypeSize_1252) { .f_size = ( sizeof( ( (  temp1253 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1254 (    void *  p359 ) {
    return ( (struct Action_25 * ) (  p359 ) );
}

static  struct Slice_24   allocate1250 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1251 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr1959 = ( (  cast_dash_ptr1254 ) ( ( ( malloc ) ( (  op_dash_mul413 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1255 {
    ;
    ;
    struct Slice_24  new_dash_slice2044;
};

struct Tuple2_1257 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1257 Tuple2_1257_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1257 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1256 {
    enum Unit_8  (*fun) (  struct env1255*  ,    struct Tuple2_1257  );
    struct env1255 env;
};

static  struct Action_25 *   get_dash_ptr1260 (    struct Slice_24  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp298 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1196 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set1259 (    struct Slice_24  slice1776 ,    size_t  i1778 ,    struct Action_25  x1780 ) {
    struct Action_25 *  ep1781 = ( (  get_dash_ptr1260 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1258 (   struct env1255* env ,    struct Tuple2_1257  dref2045 ) {
    return ( (  set1259 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size420 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct Zip_1262 {
    struct SliceIter_1191  f_left_dash_it;
    struct FromIter_424  f_right_dash_it;
};

static  struct Zip_1262   into_dash_iter1264 (    struct Zip_1262  self912 ) {
    return (  self912 );
}

struct Maybe_1265 {
    enum {
        Maybe_1265_None_t,
        Maybe_1265_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1257  field0;
        } Maybe_1265_Just_s;
    } stuff;
};

static struct Maybe_1265 Maybe_1265_Just (  struct Tuple2_1257  field0 ) {
    return ( struct Maybe_1265 ) { .tag = Maybe_1265_Just_t, .stuff = { .Maybe_1265_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1265   next1266 (    struct Zip_1262 *  self915 ) {
    struct Zip_1262  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_1198  dref917 = ( (  next1199 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_1198_None_t ) {
            return ( (struct Maybe_1265) { .tag = Maybe_1265_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_1198_Just_t ) {
                struct Maybe_164  dref919 = ( (  next430 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_1265) { .tag = Maybe_1265_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next1199 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next430 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1265_Just ) ( ( ( Tuple2_1257_Tuple2 ) ( ( dref917 .stuff .Maybe_1198_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1261 (    struct Zip_1262  iterable1075 ,   struct envunion1256  fun1077 ) {
    struct Zip_1262  temp1263 = ( (  into_dash_iter1264 ) ( (  iterable1075 ) ) );
    struct Zip_1262 *  it1078 = ( &temp1263 );
    while ( ( true ) ) {
        struct Maybe_1265  dref1079 = ( (  next1266 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1265_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1265_Just_t ) {
                struct envunion1256  temp1267 = (  fun1077 );
                ( temp1267.fun ( &temp1267.env ,  ( dref1079 .stuff .Maybe_1265_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1262   zip1268 (    struct Slice_24  left923 ,    struct FromIter_424  right925 ) {
    struct SliceIter_1191  left_dash_it926 = ( (  into_dash_iter1194 ) ( (  left923 ) ) );
    struct FromIter_424  right_dash_it927 = ( (  into_dash_iter434 ) ( (  right925 ) ) );
    return ( (struct Zip_1262) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1249 (   struct env3* env ,    struct List_23 *  list2043 ) {
    if ( (  eq407 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1250 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq407 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2044 = ( (  allocate1250 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul413 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1255 envinst1255 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1256  fun2048 = ( (struct envunion1256){ .fun = (  enum Unit_8  (*) (  struct env1255*  ,    struct Tuple2_1257  ) )lam1258 , .env =  envinst1255 } );
            ( (  for_dash_each1261 ) ( ( (  zip1268 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free1204 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1247 (   struct env21* env ,    struct List_23 *  list2051 ,    struct Action_25  elem2053 ) {
    struct envunion22  temp1248 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1249 , .env =  env->envinst3 } );
    ( temp1248.fun ( &temp1248.env ,  (  list2051 ) ) );
    ( (  set1259 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add319 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1275 (    struct Action_25 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1276 (    struct Action_25 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_25 *   zeroed1273 (  ) {
    struct Action_25 *  temp1274;
    struct Action_25 *  x571 = (  temp1274 );
    ( ( memset ) ( ( (  cast_dash_ptr1275 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of1276 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Action_25 *   null_dash_ptr1272 (  ) {
    return ( (  zeroed1273 ) ( ) );
}

static  struct Slice_24   empty1271 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1272 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1270 (    enum CAllocator_10  al2033 ) {
    struct Slice_24  elements2034 = ( (  empty1271 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1277 (    struct Maybe_215  self1734 ,    struct Cursors_33  alt1736 ) {
    struct Maybe_215  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_215_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_215_Just_t ) {
            return ( dref1737 .stuff .Maybe_215_Just_s .field0 );
        }
    }
}

struct envunion1279 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1286 {
    size_t  f_size;
};

static  struct TypeSize_1286   get_dash_typesize1285 (  ) {
    struct Changeset_32  temp1287;
    return ( (struct TypeSize_1286) { .f_size = ( sizeof( ( (  temp1287 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1288 (    void *  p359 ) {
    return ( (struct Changeset_32 * ) (  p359 ) );
}

static  struct Slice_31   allocate1284 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1285 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr1959 = ( (  cast_dash_ptr1288 ) ( ( ( malloc ) ( (  op_dash_mul413 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1289 {
    ;
    ;
    struct Slice_31  new_dash_slice2044;
};

struct Tuple2_1291 {
    struct Changeset_32  field0;
    int32_t  field1;
};

static struct Tuple2_1291 Tuple2_1291_Tuple2 (  struct Changeset_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1291 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1290 {
    enum Unit_8  (*fun) (  struct env1289*  ,    struct Tuple2_1291  );
    struct env1289 env;
};

static  enum Unit_8   set1293 (    struct Slice_31  slice1776 ,    size_t  i1778 ,    struct Changeset_32  x1780 ) {
    struct Changeset_32 *  ep1781 = ( (  get_dash_ptr1244 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1292 (   struct env1289* env ,    struct Tuple2_1291  dref2045 ) {
    return ( (  set1293 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size420 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct Zip_1295 {
    struct SliceIter_1175  f_left_dash_it;
    struct FromIter_424  f_right_dash_it;
};

static  struct Zip_1295   into_dash_iter1297 (    struct Zip_1295  self912 ) {
    return (  self912 );
}

struct Maybe_1298 {
    enum {
        Maybe_1298_None_t,
        Maybe_1298_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1291  field0;
        } Maybe_1298_Just_s;
    } stuff;
};

static struct Maybe_1298 Maybe_1298_Just (  struct Tuple2_1291  field0 ) {
    return ( struct Maybe_1298 ) { .tag = Maybe_1298_Just_t, .stuff = { .Maybe_1298_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1298   next1299 (    struct Zip_1295 *  self915 ) {
    struct Zip_1295  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_1184  dref917 = ( (  next1186 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_1184_None_t ) {
            return ( (struct Maybe_1298) { .tag = Maybe_1298_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_1184_Just_t ) {
                struct Maybe_164  dref919 = ( (  next430 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_1298) { .tag = Maybe_1298_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next1186 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next430 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1298_Just ) ( ( ( Tuple2_1291_Tuple2 ) ( ( dref917 .stuff .Maybe_1184_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1294 (    struct Zip_1295  iterable1075 ,   struct envunion1290  fun1077 ) {
    struct Zip_1295  temp1296 = ( (  into_dash_iter1297 ) ( (  iterable1075 ) ) );
    struct Zip_1295 *  it1078 = ( &temp1296 );
    while ( ( true ) ) {
        struct Maybe_1298  dref1079 = ( (  next1299 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1298_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1298_Just_t ) {
                struct envunion1290  temp1300 = (  fun1077 );
                ( temp1300.fun ( &temp1300.env ,  ( dref1079 .stuff .Maybe_1298_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1295   zip1301 (    struct Slice_31  left923 ,    struct FromIter_424  right925 ) {
    struct SliceIter_1175  left_dash_it926 = ( (  into_dash_iter1179 ) ( (  left923 ) ) );
    struct FromIter_424  right_dash_it927 = ( (  into_dash_iter434 ) ( (  right925 ) ) );
    return ( (struct Zip_1295) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  void *   cast_dash_ptr1303 (    struct Changeset_32 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1302 (    enum CAllocator_10  dref1961 ,    struct Slice_31  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1303 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1283 (   struct env4* env ,    struct List_30 *  list2043 ) {
    if ( (  eq407 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1284 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq407 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2044 = ( (  allocate1284 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul413 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1289 envinst1289 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1290  fun2048 = ( (struct envunion1290){ .fun = (  enum Unit_8  (*) (  struct env1289*  ,    struct Tuple2_1291  ) )lam1292 , .env =  envinst1289 } );
            ( (  for_dash_each1294 ) ( ( (  zip1301 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free1302 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1281 (   struct env28* env ,    struct List_30 *  list2051 ,    struct Changeset_32  elem2053 ) {
    struct envunion29  temp1282 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1283 , .env =  env->envinst4 } );
    ( temp1282.fun ( &temp1282.env ,  (  list2051 ) ) );
    ( (  set1293 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add319 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1305 (   struct env128* env ,    struct TextBuf_114 *  self3811 ,    struct Action_25  action3813 ) {
    struct envunion129  temp1306 = ( (struct envunion129){ .fun = (  enum Unit_8  (*) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action521 , .env =  env->envinst110 } );
    ( temp1306.fun ( &temp1306.env ,  (  self3811 ) ,  ( (  action3813 ) .f_from ) ,  ( (  action3813 ) .f_to_dash_bwd ) ,  ( (  action3813 ) .f_fwd ) ) );
    return ( (  action3813 ) .f_to_dash_fwd );
}

static  struct Maybe_215   change1171 (   struct env136* env ,    struct TextBuf_114 *  self3878 ,    struct Pos_26  from3880 ,    struct Pos_26  to3882 ,    struct StrView_27  bytes3884 ,    struct Maybe_215  before_dash_cursors3886 ) {
    struct Pos_26  from_dash_pos3887 = ( (  min522 ) ( (  from3880 ) ,  (  to3882 ) ) );
    struct Pos_26  to_dash_pos3888 = ( (  max524 ) ( (  from3880 ) ,  (  to3882 ) ) );
    struct Actions_115 *  actions3889 = ( & ( ( * (  self3878 ) ) .f_actions ) );
    ( (  trim_dash_actions1172 ) ( (  actions3889 ) ) );
    struct envunion139  temp1225 = ( (struct envunion139){ .fun = (  struct StrView_27  (*) (  struct env134*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1226 , .env =  env->envinst134 } );
    struct Action_25  action3890 = ( (struct Action_25) { .f_from = (  from3880 ) , .f_fwd = ( (  clone1207 ) ( (  bytes3884 ) ,  ( ( * (  self3878 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1208 ) ( (  self3878 ) ,  (  bytes3884 ) ,  (  from_dash_pos3887 ) ) ) , .f_bwd = ( temp1225.fun ( &temp1225.env ,  (  self3878 ) ,  (  from_dash_pos3887 ) ,  (  to_dash_pos3888 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3888 ) } );
    enum CAllocator_10  al3891 = ( ( ( * (  actions3889 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3892 = ( (  is_dash_none1240 ) ( (  before_dash_cursors3886 ) ) );
    if ( ( (  eq1241 ( ( ( ( * (  self3878 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_116_CustomChangeset ) ) ) || ( (  eq1241 ( ( ( ( * (  self3878 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_116_InputChangeset ) ) ) && (  is_dash_typed_dash_in3892 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset3893 = ( (  last_dash_ptr1243 ) ( ( (  to_dash_slice1245 ) ( ( ( * (  actions3889 ) ) .f_list ) ) ) ) );
        struct envunion137  temp1246 = ( (struct envunion137){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1247 , .env =  env->envinst21 } );
        ( temp1246.fun ( &temp1246.env ,  ( & ( ( * (  last_dash_changeset3893 ) ) .f_parts ) ) ,  (  action3890 ) ) );
    } else {
        struct Changeset_32  temp1269 = ( (struct Changeset_32) { .f_parts = ( (  mk1270 ) ( (  al3891 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1277 ) ( (  before_dash_cursors3886 ) ,  ( (struct Cursors_33) { .f_cur = (  from3880 ) , .f_sel = ( (  eq525 ( (  from3880 ) , (  to3882 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to3882 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset3894 = ( &temp1269 );
        struct envunion1279  temp1278 = ( (struct envunion1279){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1247 , .env =  env->envinst21 } );
        ( temp1278.fun ( &temp1278.env ,  ( & ( ( * (  changeset3894 ) ) .f_parts ) ) ,  (  action3890 ) ) );
        struct envunion138  temp1280 = ( (struct envunion138){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1281 , .env =  env->envinst28 } );
        ( temp1280.fun ( &temp1280.env ,  ( & ( ( * (  actions3889 ) ) .f_list ) ) ,  ( * (  changeset3894 ) ) ) );
        (*  actions3889 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3892 ) ? ( ChangesetInputType_116_InputChangeset ) : ( ChangesetInputType_116_NoChangeset ) );
        (*  actions3889 ) .f_cur = (  op_dash_add319 ( ( ( * (  actions3889 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion140  temp1304 = ( (struct envunion140){ .fun = (  struct Pos_26  (*) (  struct env128*  ,    struct TextBuf_114 *  ,    struct Action_25  ) )action_dash_fwd1305 , .env =  env->envinst128 } );
    struct Pos_26  to_dash_fwd3895 = ( temp1304.fun ( &temp1304.env ,  (  self3878 ) ,  (  action3890 ) ) );
    if ( (  cmp298 ( ( (  num_dash_bytes1133 ) ( ( (  action3890 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3896 = ( (  left_dash_pos1132 ) ( (  self3878 ) ,  (  to_dash_fwd3895 ) ) );
        return ( ( Maybe_215_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3896 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action3890 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_215_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3895 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1169 (   struct env213* env ,    struct Pane_228 *  self4266 ,    struct StrView_27  s4268 ) {
    struct Pos_26  cur4269 = ( ( * (  self4266 ) ) .f_cursor );
    struct envunion214  temp1170 = ( (struct envunion214){ .fun = (  struct Maybe_215  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  ) )change1171 , .env =  env->envinst136 } );
    ( temp1170.fun ( &temp1170.env ,  ( ( * (  self4266 ) ) .f_buf ) ,  (  cur4269 ) ,  (  cur4269 ) ,  (  s4268 ) ,  ( (struct Maybe_215) { .tag = Maybe_215_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1312 (   struct env224* env ,    struct Pane_228 *  self4304 ,    int32_t  line4306 ) {
    struct envunion225  temp1313 = ( (struct envunion225){ .fun = (  struct Maybe_215  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  ) )change1171 , .env =  env->envinst136 } );
    ( temp1313.fun ( &temp1313.env ,  ( ( * (  self4304 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4306 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4306 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (  from_dash_charlike1231 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_215) { .tag = Maybe_215_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1308 (   struct env235* env ,    struct Pane_228 *  self4325 ,    int32_t  indent4327 ) {
    struct RangeIter_162  temp1309 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  (  indent4327 ) ) ) );
    while (true) {
        struct Maybe_164  __cond1310 =  next165 (&temp1309);
        if (  __cond1310 .tag == 0 ) {
            break;
        }
        int32_t  dref4328 =  __cond1310 .stuff .Maybe_164_Just_s .field0;
        struct envunion236  temp1311 = ( (struct envunion236){ .fun = (  enum Unit_8  (*) (  struct env224*  ,    struct Pane_228 *  ,    int32_t  ) )indent_dash_at1312 , .env =  env->envinst224 } );
        ( temp1311.fun ( &temp1311.env ,  (  self4325 ) ,  ( ( ( * (  self4325 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1138 ) ( (  self4325 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1314 (    struct Pane_228 *  self4245 ) {
    struct Pos_26  temp1315 = ( ( * (  self4245 ) ) .f_cursor );
    temp1315 .  f_bi = (  from_dash_integral67 ( 0 ) );
    ( (  set_dash_cursors1094 ) ( (  self4245 ) ,  ( temp1315 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1317 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_228 *  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion1319 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Pane_228 *  ,    int32_t  );
    struct env235 env;
};

enum MoveDirection_1321 {
    MoveDirection_1321_MoveFwd,
    MoveDirection_1321_MoveBwd,
};

enum MoveTarget_1322 {
    MoveTarget_1322_NextWordStart,
    MoveTarget_1322_NextWordEnd,
};

static  struct Pos_26   own1324 (    struct Pos_26  x1252 ) {
    return (  x1252 );
}

struct env1325 {
    enum MoveDirection_1321  dir4208;
    ;
    struct Pos_26 *  prev4211;
    struct Pane_228 *  pane4206;
    ;
};

static  bool   is_dash_at_dash_line_dash_end1327 (    struct Pane_228 *  pane4188 ,    struct Pos_26  pos4190 ) {
    return (  eq407 ( ( (  i32_dash_size420 ) ( ( (  pos4190 ) .f_bi ) ) ) , ( (  num_dash_bytes1133 ) ( ( (  line1100 ) ( ( ( * (  pane4188 ) ) .f_buf ) ,  ( (  pos4190 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1326 (    struct Pane_228 *  pane4193 ) {
    return ( (  is_dash_at_dash_line_dash_end1327 ) ( (  pane4193 ) ,  ( ( * (  pane4193 ) ) .f_cursor ) ) );
}

struct envunion1329 {
    enum Unit_8  (*fun) (  struct env1325*  );
    struct env1325 env;
};

static  enum Unit_8   advance1330 (   struct env1325* env ) {
    (* env->prev4211 ) = ( ( * ( env->pane4206 ) ) .f_cursor );
    enum MoveDirection_1321  dref4213 = ( env->dir4208 );
    switch (  dref4213 ) {
        case MoveDirection_1321_MoveFwd : {
            ( (  move_dash_right1138 ) ( ( env->pane4206 ) ) );
            break;
        }
        case MoveDirection_1321_MoveBwd : {
            ( (  move_dash_left1093 ) ( ( env->pane4206 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1334 {
    CharType_1334_CharSpace,
    CharType_1334_CharWord,
    CharType_1334_CharPunctuation,
};

struct Tuple2_1335 {
    enum CharType_1334  field0;
    enum CharType_1334  field1;
};

static struct Tuple2_1335 Tuple2_1335_Tuple2 (  enum CharType_1334  field0 ,  enum CharType_1334  field1 ) {
    return ( struct Tuple2_1335 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1333 (    enum CharType_1334  l3654 ,    enum CharType_1334  r3656 ) {
    struct Tuple2_1335  dref3657 = ( ( Tuple2_1335_Tuple2 ) ( (  l3654 ) ,  (  r3656 ) ) );
    if (  dref3657 .field0 == CharType_1334_CharSpace &&  dref3657 .field1 == CharType_1334_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3657 .field0 == CharType_1334_CharWord &&  dref3657 .field1 == CharType_1334_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3657 .field0 == CharType_1334_CharPunctuation &&  dref3657 .field1 == CharType_1334_CharPunctuation ) {
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

static  struct Char_65   min1340 (    struct Char_65  l1237 ,    struct Char_65  r1239 ) {
    if ( (  cmp943 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Char_65   max1341 (    struct Char_65  l1316 ,    struct Char_65  r1318 ) {
    if ( (  cmp943 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  bool   between1339 (    struct Char_65  c1338 ,    struct Char_65  l1340 ,    struct Char_65  r1342 ) {
    struct Char_65  from1343 = ( (  min1340 ) ( (  l1340 ) ,  (  r1342 ) ) );
    struct Char_65  to1344 = ( (  max1341 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp943 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp943 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  bool   is_dash_alpha1338 (    struct Char_65  c2393 ) {
    return ( ( (  cmp298 ( ( (  c2393 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1339 ) ( (  c2393 ) ,  ( (  from_dash_charlike354 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1339 ) ( (  c2393 ) ,  ( (  from_dash_charlike354 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1342 (    struct Char_65  c2396 ) {
    return ( (  eq407 ( ( (  c2396 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1339 ) ( (  c2396 ) ,  ( (  from_dash_charlike354 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1337 (    struct Char_65  c2408 ) {
    return ( ( (  is_dash_alpha1338 ) ( (  c2408 ) ) ) || ( (  is_dash_digit1342 ) ( (  c2408 ) ) ) );
}

static  bool   is_dash_whitespace1343 (    struct Char_65  c2384 ) {
    return ( ( (  eq583 ( (  c2384 ) , ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq583 ( (  c2384 ) , ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq583 ( (  c2384 ) , ( (  from_dash_charlike354 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1334   char_dash_type1336 (    struct Char_65  c3660 ) {
    if ( ( ( ( (  is_dash_alphanumeric1337 ) ( (  c3660 ) ) ) || (  eq583 ( (  c3660 ) , ( (  from_dash_charlike354 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq583 ( (  c3660 ) , ( (  from_dash_charlike354 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1334_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1343 ) ( (  c3660 ) ) ) ) {
            return ( CharType_1334_CharSpace );
        } else {
            return ( CharType_1334_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1332 (    struct Char_65  l3663 ,    struct Char_65  r3665 ) {
    return ( !  eq1333 ( ( (  char_dash_type1336 ) ( (  l3663 ) ) ) , ( (  char_dash_type1336 ) ( (  r3665 ) ) ) ) );
}

static  struct Char_65   or_dash_else1345 (    struct Maybe_305  self1734 ,    struct Char_65  alt1736 ) {
    struct Maybe_305  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_305_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_305_Just_t ) {
            return ( dref1737 .stuff .Maybe_305_Just_s .field0 );
        }
    }
}

static  struct Maybe_305   head1346 (    struct StrViewIter_62  it1143 ) {
    struct StrViewIter_62  temp1347 = ( (  into_dash_iter787 ) ( (  it1143 ) ) );
    return ( (  next689 ) ( ( &temp1347 ) ) );
}

static  struct Char_65   char_dash_at1344 (    struct Pane_228 *  pane4060 ,    struct Pos_26  pos4062 ) {
    struct StrView_27  line4063 = ( (  line1100 ) ( ( ( * (  pane4060 ) ) .f_buf ) ,  ( (  pos4062 ) .f_line ) ) );
    return ( (  or_dash_else1345 ) ( ( (  head1346 ) ( ( (  chars701 ) ( ( (  byte_dash_substr519 ) ( (  line4063 ) ,  ( (  i32_dash_size420 ) ( ( (  pos4062 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1133 ) ( (  line4063 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_8   print1349 (    struct StrView_27  s1703 ) {
    ( (  for_dash_each785 ) ( ( (  chars701 ) ( (  s1703 ) ) ) ,  (  printf_dash_char344 ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1350 (  ) {
    bool  temp1351;
    return (  temp1351 );
}

static  bool   todo1348 (  ) {
    ( (  print1349 ) ( ( (  from_dash_string208 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1350 ) ( ) );
}

static  bool   reached_dash_target1331 (    struct Pane_228 *  pane4198 ,    enum MoveTarget_1322  target4200 ,    struct Pos_26  prev4202 ) {
    return ( {  enum MoveTarget_1322  dref4203 = (  target4200 ) ;  dref4203 == MoveTarget_1322_NextWordStart ? ( ( (  is_dash_word_dash_boundary1332 ) ( ( (  char_dash_at1344 ) ( (  pane4198 ) ,  (  prev4202 ) ) ) ,  ( (  char_dash_at1344 ) ( (  pane4198 ) ,  ( ( * (  pane4198 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1333 ( ( (  char_dash_type1336 ) ( ( (  char_dash_at1344 ) ( (  pane4198 ) ,  ( ( * (  pane4198 ) ) .f_cursor ) ) ) ) ) , ( CharType_1334_CharSpace ) ) ) ) ) :  dref4203 == MoveTarget_1322_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1332 ) ( ( (  char_dash_at1344 ) ( (  pane4198 ) ,  (  prev4202 ) ) ) ,  ( (  char_dash_at1344 ) ( (  pane4198 ) ,  ( ( * (  pane4198 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1333 ( ( (  char_dash_type1336 ) ( ( (  char_dash_at1344 ) ( (  pane4198 ) ,  (  prev4202 ) ) ) ) ) , ( CharType_1334_CharSpace ) ) ) ) ) : ( (  todo1348 ) ( ) ) ; } );
}

struct envunion1353 {
    enum Unit_8  (*fun) (  struct env1325*  );
    struct env1325 env;
};

struct envunion1355 {
    enum Unit_8  (*fun) (  struct env1325*  );
    struct env1325 env;
};

static  enum Unit_8   advance_dash_word1320 (    struct Pane_228 *  pane4206 ,    enum MoveDirection_1321  dir4208 ,    enum MoveTarget_1322  target4210 ) {
    struct Pos_26  temp1323 = ( (  own1324 ) ( ( ( * (  pane4206 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4211 = ( &temp1323 );
    struct env1325 envinst1325 = {
        .dir4208 =  dir4208 ,
        .prev4211 =  prev4211 ,
        .pane4206 =  pane4206 ,
    };
    struct Pos_26  sel4214 = ( ( * (  pane4206 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4215 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1326 ) ( (  pane4206 ) ) );
    struct envunion1329  temp1328 = ( (struct envunion1329){ .fun = (  enum Unit_8  (*) (  struct env1325*  ) )advance1330 , .env =  envinst1325 } );
    ( temp1328.fun ( &temp1328.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4215 ) || ( (  reached_dash_target1331 ) ( (  pane4206 ) ,  (  target4210 ) ,  ( * (  prev4211 ) ) ) ) ) ) {
        sel4214 = ( ( * (  pane4206 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1326 ) ( (  pane4206 ) ) ) ) {
        if ( (  eq525 ( ( ( * (  pane4206 ) ) .f_cursor ) , ( * (  prev4211 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1353  temp1352 = ( (struct envunion1353){ .fun = (  enum Unit_8  (*) (  struct env1325*  ) )advance1330 , .env =  envinst1325 } );
        ( temp1352.fun ( &temp1352.env ) );
        sel4214 = ( ( * (  pane4206 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1355  temp1354 = ( (struct envunion1355){ .fun = (  enum Unit_8  (*) (  struct env1325*  ) )advance1330 , .env =  envinst1325 } );
        ( temp1354.fun ( &temp1354.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1326 ) ( (  pane4206 ) ) ) || ( (  reached_dash_target1331 ) ( (  pane4206 ) ,  (  target4210 ) ,  ( * (  prev4211 ) ) ) ) ) ) {
            enum MoveDirection_1321  dref4216 = (  dir4208 );
            switch (  dref4216 ) {
                case MoveDirection_1321_MoveFwd : {
                    ( (  move_dash_left1093 ) ( (  pane4206 ) ) );
                    break;
                }
                case MoveDirection_1321_MoveBwd : {
                    ( (  move_dash_right1138 ) ( (  pane4206 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq525 ( ( * (  prev4211 ) ) , ( ( * (  pane4206 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1129 ) ( (  pane4206 ) ,  ( ( Maybe_34_Just ) ( (  sel4214 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1360 (    struct List_30 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1363 (    struct List_30 *  list2003 ,    size_t  i2005 ) {
    if ( ( (  cmp298 ( (  i2005 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2005 ) , ( ( * (  list2003 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2005 ) ) ) ,  ( (  from_dash_string208 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2003 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1244 ) ( ( ( * (  list2003 ) ) .f_elements ) ,  (  i2005 ) ) );
}

static  struct Changeset_32   get1362 (    struct List_30 *  list2013 ,    size_t  i2015 ) {
    return ( * ( (  get_dash_ptr1363 ) ( (  list2013 ) ,  (  i2015 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1361 (    struct List_30  self2083 ,    size_t  k2085 ) {
    return ( (  get1362 ) ( ( & (  self2083 ) ) ,  (  k2085 ) ) );
}

static  struct Action_25   undefined1372 (  ) {
    struct Action_25  temp1373;
    return (  temp1373 );
}

static  struct Action_25   or_dash_fail1371 (    struct Maybe_1198  x1727 ,    struct StrConcat_329  errmsg1729 ) {
    struct Maybe_1198  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1198_None_t ) {
        ( (  panic331 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1372 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1198_Just_t ) {
            return ( dref1730 .stuff .Maybe_1198_Just_s .field0 );
        }
    }
}

static  struct Maybe_1198   try_dash_get1374 (    struct Slice_24  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp298 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1198) { .tag = Maybe_1198_None_t } );
    }
    struct Action_25 *  elem_dash_ptr1768 = ( (  offset_dash_ptr1196 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_1198_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  struct Action_25   get1370 (    struct Slice_24  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail1371 ) ( ( (  try_dash_get1374 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1369 (    struct Slice_24  self1869 ,    size_t  idx1871 ) {
    return ( (  get1370 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  struct Action_25   last1368 (    struct Slice_24  s1937 ) {
    if ( (  eq407 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1215 ) ( ( (  from_dash_string208 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1369 ( (  s1937 ) , (  op_dash_sub297 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1375 (    struct List_23  l2128 ) {
    struct Action_25 *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

static  struct Maybe_215   redo1359 (   struct env132* env ,    struct TextBuf_114 *  self3838 ) {
    ( (  flush_dash_insert_dash_action1147 ) ( (  self3838 ) ) );
    struct Actions_115 *  actions3839 = ( & ( ( * (  self3838 ) ) .f_actions ) );
    if ( (  cmp298 ( ( ( * (  actions3839 ) ) .f_cur ) , ( (  size1360 ) ( ( & ( ( * (  actions3839 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_215) { .tag = Maybe_215_None_t } );
    }
    struct Changeset_32  changeset3840 = (  elem_dash_get1361 ( ( ( * (  actions3839 ) ) .f_list ) , ( ( * (  actions3839 ) ) .f_cur ) ) );
    struct Pos_26  temp1364;
    struct Pos_26  to_dash_fwd3841 = (  temp1364 );
    struct SliceIter_1191  temp1365 =  into_dash_iter1193 ( ( (  changeset3840 ) .f_parts ) );
    while (true) {
        struct Maybe_1198  __cond1366 =  next1199 (&temp1365);
        if (  __cond1366 .tag == 0 ) {
            break;
        }
        struct Action_25  action3843 =  __cond1366 .stuff .Maybe_1198_Just_s .field0;
        struct envunion133  temp1367 = ( (struct envunion133){ .fun = (  struct Pos_26  (*) (  struct env128*  ,    struct TextBuf_114 *  ,    struct Action_25  ) )action_dash_fwd1305 , .env =  env->envinst128 } );
        to_dash_fwd3841 = ( temp1367.fun ( &temp1367.env ,  (  self3838 ) ,  (  action3843 ) ) );
    }
    (*  actions3839 ) .f_cur = (  op_dash_add319 ( ( ( * (  actions3839 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action3844 = ( (  last1368 ) ( ( (  to_dash_slice1375 ) ( ( (  changeset3840 ) .f_parts ) ) ) ) );
    if ( (  cmp298 ( ( (  num_dash_bytes1133 ) ( ( (  last_dash_action3844 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3845 = ( (  left_dash_pos1132 ) ( (  self3838 ) ,  (  to_dash_fwd3841 ) ) );
        return ( ( Maybe_215_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3845 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action3844 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_215_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3841 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1377 {
    struct Pane_228 *  self4282;
    ;
};

struct envunion1378 {
    enum Unit_8  (*fun) (  struct env1377*  ,    struct Cursors_33  );
    struct env1377 env;
};

static  enum Unit_8   if_dash_just1376 (    struct Maybe_215  x1292 ,   struct envunion1378  fun1294 ) {
    struct Maybe_215  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_215_Just_t ) {
        struct envunion1378  temp1379 = (  fun1294 );
        ( temp1379.fun ( &temp1379.env ,  ( dref1295 .stuff .Maybe_215_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_215_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1380 (   struct env1377* env ,    struct Cursors_33  cursors4285 ) {
    ( (  set_dash_cursors1094 ) ( ( env->self4282 ) ,  ( (  cursors4285 ) .f_cur ) ,  ( (  cursors4285 ) .f_sel ) ,  ( CursorMovement_1095_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1357 (   struct env220* env ,    struct Pane_228 *  self4282 ) {
    struct envunion221  temp1358 = ( (struct envunion221){ .fun = (  struct Maybe_215  (*) (  struct env132*  ,    struct TextBuf_114 *  ) )redo1359 , .env =  env->envinst132 } );
    struct Maybe_215  mcursors4283 = ( temp1358.fun ( &temp1358.env ,  ( ( * (  self4282 ) ) .f_buf ) ) );
    struct env1377 envinst1377 = {
        .self4282 =  self4282 ,
    };
    ( (  if_dash_just1376 ) ( (  mcursors4283 ) ,  ( (struct envunion1378){ .fun = (  enum Unit_8  (*) (  struct env1377*  ,    struct Cursors_33  ) )lam1380 , .env =  envinst1377 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1386 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1386   into_dash_iter1387 (    struct SliceReversedIter_1386  self1900 ) {
    return (  self1900 );
}

static  struct SliceReversedIter_1386   reversed1388 (    struct Slice_24  slice1897 ) {
    return ( (struct SliceReversedIter_1386) { .f_slice = (  slice1897 ) , .f_current_dash_offset = ( (  slice1897 ) .f_count ) } );
}

static  struct Maybe_1198   next1390 (    struct SliceReversedIter_1386 *  self1903 ) {
    size_t  off1904 = ( ( * (  self1903 ) ) .f_current_dash_offset );
    if ( (  eq407 ( (  off1904 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1198) { .tag = Maybe_1198_None_t } );
    }
    (*  self1903 ) .f_current_dash_offset = (  op_dash_sub297 ( (  off1904 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1198_Just ) ( (  elem_dash_get1369 ( ( ( * (  self1903 ) ) .f_slice ) , ( ( * (  self1903 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1392 (   struct env126* env ,    struct TextBuf_114 *  self3806 ,    struct Action_25  action3808 ) {
    struct envunion127  temp1393 = ( (struct envunion127){ .fun = (  enum Unit_8  (*) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action521 , .env =  env->envinst110 } );
    ( temp1393.fun ( &temp1393.env ,  (  self3806 ) ,  ( (  action3808 ) .f_from ) ,  ( (  action3808 ) .f_to_dash_fwd ) ,  ( (  action3808 ) .f_bwd ) ) );
    return ( (  action3808 ) .f_to_dash_bwd );
}

static  struct Maybe_215   undo1384 (   struct env130* env ,    struct TextBuf_114 *  self3831 ) {
    ( (  flush_dash_insert_dash_action1147 ) ( (  self3831 ) ) );
    struct Actions_115 *  actions3832 = ( & ( ( * (  self3831 ) ) .f_actions ) );
    if ( (  eq407 ( ( ( * (  actions3832 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_215) { .tag = Maybe_215_None_t } );
    }
    (*  actions3832 ) .f_cur = (  op_dash_sub297 ( ( ( * (  actions3832 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset3833 = (  elem_dash_get1361 ( ( ( * (  actions3832 ) ) .f_list ) , ( ( * (  actions3832 ) ) .f_cur ) ) );
    struct SliceReversedIter_1386  temp1385 =  into_dash_iter1387 ( ( (  reversed1388 ) ( ( (  to_dash_slice1375 ) ( ( (  changeset3833 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1198  __cond1389 =  next1390 (&temp1385);
        if (  __cond1389 .tag == 0 ) {
            break;
        }
        struct Action_25  action3835 =  __cond1389 .stuff .Maybe_1198_Just_s .field0;
        struct envunion131  temp1391 = ( (struct envunion131){ .fun = (  struct Pos_26  (*) (  struct env126*  ,    struct TextBuf_114 *  ,    struct Action_25  ) )action_dash_bwd1392 , .env =  env->envinst126 } );
        ( temp1391.fun ( &temp1391.env ,  (  self3831 ) ,  (  action3835 ) ) );
    }
    return ( ( Maybe_215_Just ) ( ( (  changeset3833 ) .f_before_dash_cursors ) ) );
}

struct env1395 {
    ;
    struct Pane_228 *  self4276;
};

struct envunion1396 {
    enum Unit_8  (*fun) (  struct env1395*  ,    struct Cursors_33  );
    struct env1395 env;
};

static  enum Unit_8   if_dash_just1394 (    struct Maybe_215  x1292 ,   struct envunion1396  fun1294 ) {
    struct Maybe_215  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_215_Just_t ) {
        struct envunion1396  temp1397 = (  fun1294 );
        ( temp1397.fun ( &temp1397.env ,  ( dref1295 .stuff .Maybe_215_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_215_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1398 (   struct env1395* env ,    struct Cursors_33  cursors4279 ) {
    ( (  set_dash_cursors1094 ) ( ( env->self4276 ) ,  ( (  cursors4279 ) .f_cur ) ,  ( (  cursors4279 ) .f_sel ) ,  ( CursorMovement_1095_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1382 (   struct env218* env ,    struct Pane_228 *  self4276 ) {
    struct envunion219  temp1383 = ( (struct envunion219){ .fun = (  struct Maybe_215  (*) (  struct env130*  ,    struct TextBuf_114 *  ) )undo1384 , .env =  env->envinst130 } );
    struct Maybe_215  mcursors4277 = ( temp1383.fun ( &temp1383.env ,  ( ( * (  self4276 ) ) .f_buf ) ) );
    struct env1395 envinst1395 = {
        .self4276 =  self4276 ,
    };
    ( (  if_dash_just1394 ) ( (  mcursors4277 ) ,  ( (struct envunion1396){ .fun = (  enum Unit_8  (*) (  struct env1395*  ,    struct Cursors_33  ) )lam1398 , .env =  envinst1395 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_240   minmax1402 (    struct Pos_26  l1330 ,    struct Pos_26  r1332 ) {
    return ( (  cmp523 ( (  l1330 ) , (  r1332 ) ) == 0 ) ? ( ( Tuple2_240_Tuple2 ) ( (  l1330 ) ,  (  r1332 ) ) ) : ( ( Tuple2_240_Tuple2 ) ( (  r1332 ) ,  (  l1330 ) ) ) );
}

static  struct Pos_26   or_dash_else1403 (    struct Maybe_34  self1734 ,    struct Pos_26  alt1736 ) {
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

static  struct Pos_26   fst1404 (    struct Tuple2_240  dref1254 ) {
    return ( dref1254 .field0 );
}

static  struct Pos_26   snd1405 (    struct Tuple2_240  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Tuple2_240   selection1401 (    struct Pane_228 *  self4288 ) {
    struct Tuple2_240  from_dash_to4289 = ( (  minmax1402 ) ( ( (  or_dash_else1403 ) ( ( ( * (  self4288 ) ) .f_sel ) ,  ( ( * (  self4288 ) ) .f_cursor ) ) ) ,  ( ( * (  self4288 ) ) .f_cursor ) ) );
    struct Pos_26  from4290 = ( (  fst1404 ) ( (  from_dash_to4289 ) ) );
    struct Pos_26  to4291 = ( (  right_dash_pos1139 ) ( ( ( * (  self4288 ) ) .f_buf ) ,  ( (  snd1405 ) ( (  from_dash_to4289 ) ) ) ) );
    return ( ( Tuple2_240_Tuple2 ) ( (  from4290 ) ,  (  to4291 ) ) );
}

struct env1408 {
    struct Editor_257 *  ed4401;
    ;
};

struct envunion1409 {
    enum Unit_8  (*fun) (  struct env1408*  ,    struct StrView_27  );
    struct env1408 env;
};

static  enum Unit_8   if_dash_just1407 (    struct Maybe_94  x1292 ,   struct envunion1409  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1409  temp1410 = (  fun1294 );
        ( temp1410.fun ( &temp1410.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1411 (   struct env1408* env ,    struct StrView_27  cp4405 ) {
    ( (  free510 ) ( (  cp4405 ) ,  ( ( * ( env->ed4401 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1400 (   struct env242* env ,    struct Editor_257 *  ed4401 ) {
    struct Tuple2_240  from_dash_to4402 = ( (  selection1401 ) ( ( (  pane1137 ) ( (  ed4401 ) ) ) ) );
    struct envunion243  temp1406 = ( (struct envunion243){ .fun = (  struct StrView_27  (*) (  struct env134*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1226 , .env =  env->envinst134 } );
    struct StrView_27  cpd4403 = ( temp1406.fun ( &temp1406.env ,  ( ( ( * (  ed4401 ) ) .f_pane ) .f_buf ) ,  ( (  fst1404 ) ( (  from_dash_to4402 ) ) ) ,  ( (  snd1405 ) ( (  from_dash_to4402 ) ) ) ) );
    struct env1408 envinst1408 = {
        .ed4401 =  ed4401 ,
    };
    ( (  if_dash_just1407 ) ( ( ( * (  ed4401 ) ) .f_clipboard ) ,  ( (struct envunion1409){ .fun = (  enum Unit_8  (*) (  struct env1408*  ,    struct StrView_27  ) )lam1411 , .env =  envinst1408 } ) ) );
    (*  ed4401 ) .f_clipboard = ( ( Maybe_94_Just ) ( (  cpd4403 ) ) );
    return ( Unit_8_Unit );
}

struct env1416 {
    ;
    struct Pane_228 *  self4294;
};

struct envunion1417 {
    enum Unit_8  (*fun) (  struct env1416*  ,    struct Cursors_33  );
    struct env1416 env;
};

static  enum Unit_8   if_dash_just1415 (    struct Maybe_215  x1292 ,   struct envunion1417  fun1294 ) {
    struct Maybe_215  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_215_Just_t ) {
        struct envunion1417  temp1418 = (  fun1294 );
        ( temp1418.fun ( &temp1418.env ,  ( dref1295 .stuff .Maybe_215_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_215_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1419 (   struct env1416* env ,    struct Cursors_33  cursors4301 ) {
    ( (  set_dash_cursors1094 ) ( ( env->self4294 ) ,  ( (  cursors4301 ) .f_cur ) ,  ( (  cursors4301 ) .f_sel ) ,  ( CursorMovement_1095_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1413 (   struct env222* env ,    struct Pane_228 *  self4294 ,    struct Tuple2_240  pos_prime_s4296 ,    struct StrView_27  cp4298 ) {
    struct envunion223  temp1414 = ( (struct envunion223){ .fun = (  struct Maybe_215  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  ) )change1171 , .env =  env->envinst136 } );
    struct Maybe_215  mcursors4299 = ( temp1414.fun ( &temp1414.env ,  ( ( * (  self4294 ) ) .f_buf ) ,  ( (  fst1404 ) ( (  pos_prime_s4296 ) ) ) ,  ( (  snd1405 ) ( (  pos_prime_s4296 ) ) ) ,  (  cp4298 ) ,  ( ( Maybe_215_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4294 ) ) .f_cursor ) , .f_sel = ( ( * (  self4294 ) ) .f_sel ) } ) ) ) ) );
    struct env1416 envinst1416 = {
        .self4294 =  self4294 ,
    };
    ( (  if_dash_just1415 ) ( (  mcursors4299 ) ,  ( (struct envunion1417){ .fun = (  enum Unit_8  (*) (  struct env1416*  ,    struct Cursors_33  ) )lam1419 , .env =  envinst1416 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1421 {
    enum Unit_8  (*fun) (  struct env242*  ,    struct Editor_257 *  );
    struct env242 env;
};

struct envunion1423 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct envunion1425 {
    enum Unit_8  (*fun) (  struct env242*  ,    struct Editor_257 *  );
    struct env242 env;
};

static  struct StrBuilder_73   mk1431 (    enum CAllocator_10  al2810 ) {
    return ( (struct StrBuilder_73) { .f_chars = ( (  mk447 ) ( (  al2810 ) ) ) } );
}

struct IntStrIter_1437 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1436 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_1437  f_right;
};

struct StrConcatIter_1435 {
    struct StrConcatIter_1436  f_left;
    struct StrViewIter_62  f_right;
};

struct env1438 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1439 {
    enum Unit_8  (*fun) (  struct env1438*  ,    struct Char_65  );
    struct env1438 env;
};

static  struct StrConcatIter_1435   into_dash_iter1441 (    struct StrConcatIter_1435  self1498 ) {
    return (  self1498 );
}

struct env1447 {
    ;
    size_t  base1211;
};

struct envunion1448 {
    size_t  (*fun) (  struct env1447*  ,    int32_t  ,    size_t  );
    struct env1447 env;
};

static  size_t   reduce1446 (    struct Range_159  iterable1094 ,    size_t  base1096 ,   struct envunion1448  fun1098 ) {
    size_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1448  temp1449 = (  fun1098 );
                x1099 = ( temp1449.fun ( &temp1449.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1450 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1450);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1451;
    return (  temp1451 );
}

static  size_t   lam1452 (   struct env1447* env ,    int32_t  item1215 ,    size_t  x1217 ) {
    return (  op_dash_mul413 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  size_t   pow1445 (    size_t  base1211 ,    int32_t  p1213 ) {
    struct env1447 envinst1447 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1446 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1448){ .fun = (  size_t  (*) (  struct env1447*  ,    int32_t  ,    size_t  ) )lam1452 , .env =  envinst1447 } ) ) );
}

static  uint8_t   cast1453 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_305   next1444 (    struct IntStrIter_1437 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_305_Just ) ( ( (  from_dash_charlike354 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    size_t  trim_dash_down1430 = ( (  pow1445 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    size_t  upper1431 = (  op_dash_div350 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    size_t  upper_dash_mask1432 = (  op_dash_mul413 ( (  op_dash_div350 ( (  upper1431 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast1453 ) ( (  op_dash_sub297 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81050 ) ( (  op_dash_add946 ( (  digit1433 ) , (  from_dash_integral316 ( 48 ) ) ) ) ) );
    return ( ( Maybe_305_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_305   next1443 (    struct StrConcatIter_1436 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next1444 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next1442 (    struct StrConcatIter_1435 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next1443 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1434 (    struct StrConcatIter_1435  iterable1075 ,   struct envunion1439  fun1077 ) {
    struct StrConcatIter_1435  temp1440 = ( (  into_dash_iter1441 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1435 *  it1078 = ( &temp1440 );
    while ( ( true ) ) {
        struct Maybe_305  dref1079 = ( (  next1442 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_305_Just_t ) {
                struct envunion1439  temp1454 = (  fun1077 );
                ( temp1454.fun ( &temp1454.env ,  ( dref1079 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1461 (    size_t  self1437 ) {
    if ( (  eq407 ( (  self1437 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp298 ( (  self1437 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div350 ( (  self1437 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1437   uint_dash_iter1460 (    size_t  int1444 ) {
    return ( (struct IntStrIter_1437) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits1461 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1437   chars1459 (    size_t  self1474 ) {
    return ( (  uint_dash_iter1460 ) ( (  self1474 ) ) );
}

static  struct StrConcatIter_1436   into_dash_iter1458 (    struct StrConcat_87  dref1505 ) {
    return ( (struct StrConcatIter_1436) { .f_left = ( (  chars701 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1459 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1436   chars1457 (    struct StrConcat_87  self1516 ) {
    return ( (  into_dash_iter1458 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1435   into_dash_iter1456 (    struct StrConcat_86  dref1505 ) {
    return ( (struct StrConcatIter_1435) { .f_left = ( (  chars1457 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars701 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1435   chars1455 (    struct StrConcat_86  self1516 ) {
    return ( (  into_dash_iter1456 ) ( (  self1516 ) ) );
}

static  enum Unit_8   write_dash_slice1466 (   struct env69* env ,    struct StrBuilder_73 *  builder2768 ,    struct Slice_11  s2770 ) {
    struct envunion70  temp1467 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all540 , .env =  env->envinst46 } );
    ( temp1467.fun ( &temp1467.env ,  ( & ( ( * (  builder2768 ) ) .f_chars ) ) ,  (  s2770 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_11   from_dash_char1468 (    struct Char_65  c1943 ,    uint8_t *  buf1945 ) {
    struct CharDestructured_345  dref1946 = ( (  destructure347 ) ( (  c1943 ) ) );
    if ( dref1946.tag == CharDestructured_345_Ref_t ) {
        return ( (struct Slice_11) { .f_ptr = ( ( dref1946 .stuff .CharDestructured_345_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1946 .stuff .CharDestructured_345_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1946.tag == CharDestructured_345_Scalar_t ) {
            if ( (  cmp179 ( ( ( dref1946 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) , (  from_dash_integral174 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1469 = ( (  from_dash_string68 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1469);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            (*  buf1945 ) = ( (  u32_dash_u8153 ) ( ( ( dref1946 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_11) { .f_ptr = (  buf1945 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_8   write_dash_char1464 (   struct env71* env ,    struct StrBuilder_73 *  builder2773 ,    struct Char_65  c2775 ) {
    struct envunion72  temp1465 = ( (struct envunion72){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_73 *  ,    struct Slice_11  ) )write_dash_slice1466 , .env =  env->envinst69 } );
    uint8_t  temp1471;
    uint8_t  temp1470 = (  temp1471 );
    ( temp1465.fun ( &temp1465.env ,  (  builder2773 ) ,  ( (  from_dash_char1468 ) ( (  c2775 ) ,  ( &temp1470 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1462 (   struct env1438* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1463 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1464 , .env =  env->envinst71 } );
    return ( temp1463.fun ( &temp1463.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1433 (   struct env74* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrConcat_86  s2780 ) {
    struct env1438 envinst1438 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1434 ) ( ( (  chars1455 ) ( (  s2780 ) ) ) ,  ( (struct envunion1439){ .fun = (  enum Unit_8  (*) (  struct env1438*  ,    struct Char_65  ) )lam1462 , .env =  envinst1438 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1475 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice1474 (    struct Slice_11  s1934 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr1475 ) ( ( (  s1934 ) .f_ptr ) ) ) , .f_count = ( (  s1934 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1473 (    struct StrBuilder_73 *  builder2816 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1474 ) ( ( (  subslice506 ) ( ( ( ( * (  builder2816 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2816 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1429 (   struct env84* env ,    struct StrConcat_86  s2836 ,    enum CAllocator_10  al2838 ) {
    struct StrBuilder_73  temp1430 = ( (  mk1431 ) ( (  al2838 ) ) );
    struct StrBuilder_73 *  sb2839 = ( &temp1430 );
    struct envunion85  temp1432 = ( (struct envunion85){ .fun = (  enum Unit_8  (*) (  struct env74*  ,    struct StrBuilder_73 *  ,    struct StrConcat_86  ) )write1433 , .env =  env->envinst74 } );
    ( temp1432.fun ( &temp1432.env ,  (  sb2839 ) ,  (  s2836 ) ) );
    struct envunion88  temp1472 = ( (struct envunion88){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1464 , .env =  env->envinst71 } );
    ( temp1472.fun ( &temp1472.env ,  (  sb2839 ) ,  ( (  nullchar505 ) ( ) ) ) );
    struct StrView_27  dynstr2840 = ( (  as_dash_str1473 ) ( (  sb2839 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2840 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub297 ( ( ( (  dynstr2840 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1427 (   struct env244* env ,    struct Editor_257 *  ed4413 ,    struct StrConcat_86  s4415 ) {
    ( (  reset_dash_msg1082 ) ( (  ed4413 ) ) );
    struct envunion245  temp1428 = ( (struct envunion245){ .fun = (  struct StrView_27  (*) (  struct env84*  ,    struct StrConcat_86  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1429 , .env =  env->envinst84 } );
    (*  ed4413 ) .f_msg = ( ( Maybe_94_Just ) ( ( temp1428.fun ( &temp1428.env ,  (  s4415 ) ,  ( ( * (  ed4413 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1478 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct env1477 {
    ;
    struct Editor_257 *  ed4470;
    ;
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
};

struct envunion1479 {
    enum Unit_8  (*fun) (  struct env1477*  ,    struct StrView_27  );
    struct env1477 env;
};

static  enum Unit_8   if_dash_just1476 (    struct Maybe_94  x1292 ,   struct envunion1479  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1479  temp1480 = (  fun1294 );
        ( temp1480.fun ( &temp1480.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1482 (    struct Pane_228 *  pane4224 ) {
    return ( {  struct Maybe_34  dref4225 = ( ( * (  pane4224 ) ) .f_sel ) ; dref4225.tag == Maybe_34_Just_t ? ( (  max524 ) ( ( ( * (  pane4224 ) ) .f_cursor ) ,  ( dref4225 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4224 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1484 (    struct Slice_11  self1869 ,    size_t  idx1871 ) {
    return ( (  get562 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  uint8_t   last1483 (    struct Slice_11  s1937 ) {
    if ( (  eq407 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1215 ) ( ( (  from_dash_string208 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1484 ( (  s1937 ) , (  op_dash_sub297 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1485 (    int32_t  x1353 ,    int32_t  mn1355 ,    int32_t  mx1357 ) {
    if ( (  cmp166 ( (  x1353 ) , (  mn1355 ) ) == 0 ) ) {
        return (  mn1355 );
    } else {
        if ( (  cmp166 ( (  x1353 ) , (  mx1357 ) ) == 2 ) ) {
            return (  mx1357 );
        } else {
            return (  x1353 );
        }
    }
}

static  enum Unit_8   lam1481 (   struct env1477* env ,    struct StrView_27  cp4481 ) {
    struct Pos_26  start4482 = ( (  max_dash_pos1482 ) ( ( (  pane1137 ) ( ( env->ed4470 ) ) ) ) );
    if ( (  eq311 ( ( (  last1483 ) ( ( (  cp4481 ) .f_contents ) ) ) , ( (  ascii_dash_u8516 ) ( ( (  from_dash_charlike517 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4482 = ( (struct Pos_26) { .f_line = ( (  clamp1485 ) ( (  op_dash_add168 ( ( (  start4482 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  num_dash_lines1140 ) ( ( ( * ( (  pane1137 ) ( ( env->ed4470 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } );
    } else {
        start4482 = ( (  right_dash_pos1139 ) ( ( ( ( * ( env->ed4470 ) ) .f_pane ) .f_buf ) ,  (  start4482 ) ) );
    }
    struct envunion1478  temp1486 = ( (struct envunion1478){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1413 , .env =  env->envinst222 } );
    ( temp1486.fun ( &temp1486.env ,  ( (  pane1137 ) ( ( env->ed4470 ) ) ) ,  ( ( Tuple2_240_Tuple2 ) ( (  start4482 ) ,  (  start4482 ) ) ) ,  (  cp4481 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1489 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct env1488 {
    ;
    ;
    struct Editor_257 *  ed4470;
    ;
    ;
    struct env222 envinst222;
    ;
    ;
    ;
};

struct envunion1490 {
    enum Unit_8  (*fun) (  struct env1488*  ,    struct StrView_27  );
    struct env1488 env;
};

static  enum Unit_8   if_dash_just1487 (    struct Maybe_94  x1292 ,   struct envunion1490  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1490  temp1491 = (  fun1294 );
        ( temp1491.fun ( &temp1491.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1493 (    struct Pane_228 *  pane4219 ) {
    return ( {  struct Maybe_34  dref4220 = ( ( * (  pane4219 ) ) .f_sel ) ; dref4220.tag == Maybe_34_Just_t ? ( (  min522 ) ( ( ( * (  pane4219 ) ) .f_cursor ) ,  ( dref4220 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4219 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1492 (   struct env1488* env ,    struct StrView_27  cp4484 ) {
    struct Pos_26  start4485 = ( (  min_dash_pos1493 ) ( ( (  pane1137 ) ( ( env->ed4470 ) ) ) ) );
    if ( (  eq311 ( ( (  last1483 ) ( ( (  cp4484 ) .f_contents ) ) ) , ( (  ascii_dash_u8516 ) ( ( (  from_dash_charlike517 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1494 = (  start4485 );
        temp1494 .  f_bi = (  from_dash_integral67 ( 0 ) );
        start4485 = ( temp1494 );
    }
    struct envunion1489  temp1495 = ( (struct envunion1489){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1413 , .env =  env->envinst222 } );
    ( temp1495.fun ( &temp1495.env ,  ( (  pane1137 ) ( ( env->ed4470 ) ) ) ,  ( ( Tuple2_240_Tuple2 ) ( (  start4485 ) ,  (  start4485 ) ) ) ,  (  cp4484 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1498 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct env1497 {
    ;
    ;
    struct env222 envinst222;
    struct Editor_257 *  ed4470;
};

struct envunion1499 {
    enum Unit_8  (*fun) (  struct env1497*  ,    struct StrView_27  );
    struct env1497 env;
};

static  enum Unit_8   if_dash_just1496 (    struct Maybe_94  x1292 ,   struct envunion1499  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1499  temp1500 = (  fun1294 );
        ( temp1500.fun ( &temp1500.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1501 (   struct env1497* env ,    struct StrView_27  cp4487 ) {
    struct Pos_26  start4488 = ( (  min_dash_pos1493 ) ( ( (  pane1137 ) ( ( env->ed4470 ) ) ) ) );
    struct envunion1498  temp1502 = ( (struct envunion1498){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1413 , .env =  env->envinst222 } );
    ( temp1502.fun ( &temp1502.env ,  ( (  pane1137 ) ( ( env->ed4470 ) ) ) ,  ( ( Tuple2_240_Tuple2 ) ( (  start4488 ) ,  (  start4488 ) ) ) ,  (  cp4487 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1503 (    struct Pane_228 *  pane4238 ) {
    struct Pos_26  min_dash_pos4239 = ( (  min_dash_pos1493 ) ( (  pane4238 ) ) );
    struct Pos_26  max_dash_pos4240 = ( (  max_dash_pos1482 ) ( (  pane4238 ) ) );
    int32_t  max_dash_pos_dash_max4241 = ( (  size_dash_i32337 ) ( ( (  num_dash_bytes1133 ) ( ( (  line1100 ) ( ( ( * (  pane4238 ) ) .f_buf ) ,  ( (  max_dash_pos4240 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq526 ( ( (  min_dash_pos4239 ) .f_bi ) , (  from_dash_integral67 ( 0 ) ) ) ) && (  eq526 ( ( (  max_dash_pos4240 ) .f_bi ) , (  max_dash_pos_dash_max4241 ) ) ) ) ) ) {
        struct Pos_26  temp1504 = (  min_dash_pos4239 );
        temp1504 .  f_bi = (  from_dash_integral67 ( 0 ) );
        (*  pane4238 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1504 ) ) );
        struct Pos_26  temp1505 = (  max_dash_pos4240 );
        temp1505 .  f_bi = (  max_dash_pos_dash_max4241 );
        (*  pane4238 ) .f_cursor = ( temp1505 );
    } else {
        if ( (  cmp166 ( (  op_dash_add168 ( ( (  max_dash_pos4240 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) , ( (  num_dash_lines1140 ) ( ( ( * (  pane4238 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1506 = (  min_dash_pos4239 );
        temp1506 .  f_bi = (  from_dash_integral67 ( 0 ) );
        (*  pane4238 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1506 ) ) );
        int32_t  next_dash_line4242 = (  op_dash_add168 ( ( (  max_dash_pos4240 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) );
        (*  pane4238 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4242 ) , .f_bi = ( (  size_dash_i32337 ) ( ( (  num_dash_bytes1133 ) ( ( (  line1100 ) ( ( ( * (  pane4238 ) ) .f_buf ) ,  (  next_dash_line4242 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1507 (    struct Maybe_34  m1265 ) {
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

struct Maybe_1509 {
    enum {
        Maybe_1509_None_t,
        Maybe_1509_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_240  field0;
        } Maybe_1509_Just_s;
    } stuff;
};

static struct Maybe_1509 Maybe_1509_Just (  struct Tuple2_240  field0 ) {
    return ( struct Maybe_1509 ) { .tag = Maybe_1509_Just_t, .stuff = { .Maybe_1509_Just_s = { .field0 = field0 } } };
};

struct env1511 {
    ;
    ;
    struct Pane_228 *  pane4346;
    ;
    ;
    struct StrView_27  query4350;
};

struct envunion1513 {
    struct Maybe_255  (*fun) (  struct env1511*  ,    struct Pos_26  );
    struct env1511 env;
};

struct Zip_1520 {
    struct SliceIter_478  f_left_dash_it;
    struct SliceIter_478  f_right_dash_it;
};

struct Tuple2_1521 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1521 Tuple2_1521_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1521 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1523 {
    bool (*  fun1127 )(    struct Tuple2_1521  );
};

struct envunion1524 {
    bool  (*fun) (  struct env1523*  ,    struct Tuple2_1521  ,    bool  );
    struct env1523 env;
};

static  struct Zip_1520   into_dash_iter1525 (    struct Zip_1520  self912 ) {
    return (  self912 );
}

struct Maybe_1526 {
    enum {
        Maybe_1526_None_t,
        Maybe_1526_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1521  field0;
        } Maybe_1526_Just_s;
    } stuff;
};

static struct Maybe_1526 Maybe_1526_Just (  struct Tuple2_1521  field0 ) {
    return ( struct Maybe_1526 ) { .tag = Maybe_1526_Just_t, .stuff = { .Maybe_1526_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1526   next1527 (    struct Zip_1520 *  self915 ) {
    struct Zip_1520  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_486  dref917 = ( (  next487 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_486_None_t ) {
            return ( (struct Maybe_1526) { .tag = Maybe_1526_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_486_Just_t ) {
                struct Maybe_486  dref919 = ( (  next487 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_486_None_t ) {
                    return ( (struct Maybe_1526) { .tag = Maybe_1526_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_486_Just_t ) {
                        ( (  next487 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next487 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1526_Just ) ( ( ( Tuple2_1521_Tuple2 ) ( ( dref917 .stuff .Maybe_486_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_486_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1522 (    struct Zip_1520  iterable1094 ,    bool  base1096 ,   struct envunion1524  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct Zip_1520  it1100 = ( (  into_dash_iter1525 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_1526  dref1101 = ( (  next1527 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_1526_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_1526_Just_t ) {
                struct envunion1524  temp1528 = (  fun1098 );
                x1099 = ( temp1528.fun ( &temp1528.env ,  ( dref1101 .stuff .Maybe_1526_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1529 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1529);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1530;
    return (  temp1530 );
}

static  bool   lam1531 (   struct env1523* env ,    struct Tuple2_1521  e1129 ,    bool  x1131 ) {
    return ( ( ( env->fun1127 ) ( (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1519 (    struct Zip_1520  it1125 ,    bool (*  fun1127 )(    struct Tuple2_1521  ) ) {
    struct env1523 envinst1523 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1522 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1524){ .fun = (  bool  (*) (  struct env1523*  ,    struct Tuple2_1521  ,    bool  ) )lam1531 , .env =  envinst1523 } ) ) );
}

static  struct Zip_1520   zip1532 (    struct Slice_11  left923 ,    struct Slice_11  right925 ) {
    struct SliceIter_478  left_dash_it926 = ( (  into_dash_iter490 ) ( (  left923 ) ) );
    struct SliceIter_478  right_dash_it927 = ( (  into_dash_iter490 ) ( (  right925 ) ) );
    return ( (struct Zip_1520) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  bool   lam1533 (    struct Tuple2_1521  dref1864 ) {
    return (  eq311 ( ( dref1864 .field0 ) , ( dref1864 .field1 ) ) );
}

static  bool   eq1518 (    struct Slice_11  l1861 ,    struct Slice_11  r1863 ) {
    if ( ( !  eq407 ( ( (  l1861 ) .f_count ) , ( (  r1863 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1519 ) ( ( (  zip1532 ) ( (  l1861 ) ,  (  r1863 ) ) ) ,  (  lam1533 ) ) );
}

static  struct Maybe_255   find_dash_slice1515 (    struct Slice_11  haystack1914 ,    struct Slice_11  needle1916 ) {
    struct RangeIter_162  temp1516 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  size_dash_i32337 ) ( ( (  haystack1914 ) .f_count ) ) ) , ( (  size_dash_i32337 ) ( ( (  needle1916 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1517 =  next165 (&temp1516);
        if (  __cond1517 .tag == 0 ) {
            break;
        }
        int32_t  i1918 =  __cond1517 .stuff .Maybe_164_Just_s .field0;
        if ( (  eq1518 ( ( (  subslice506 ) ( (  haystack1914 ) ,  ( (  i32_dash_size420 ) ( (  i1918 ) ) ) ,  (  op_dash_add319 ( ( (  i32_dash_size420 ) ( (  i1918 ) ) ) , ( (  needle1916 ) .f_count ) ) ) ) ) , (  needle1916 ) ) ) ) {
            return ( ( Maybe_255_Just ) ( ( (  i32_dash_size420 ) ( (  i1918 ) ) ) ) );
        }
    }
    return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
}

static  struct StrView_27   byte_dash_substr_dash_from1534 (    struct StrView_27  s2195 ,    size_t  from2197 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from533 ) ( ( (  s2195 ) .f_contents ) ,  (  from2197 ) ) ) } );
}

static  struct Maybe_255   search_dash_on_dash_line1514 (   struct env1511* env ,    struct Pos_26  pos4353 ) {
    return ( (  find_dash_slice1515 ) ( ( ( (  byte_dash_substr_dash_from1534 ) ( ( (  line1100 ) ( ( ( * ( env->pane4346 ) ) .f_buf ) ,  ( (  pos4353 ) .f_line ) ) ) ,  ( (  i32_dash_size420 ) ( ( (  pos4353 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4350 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1540 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1541 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1539 (    int32_t  l1230 ,    int32_t  d1232 ) {
    int32_t  r1233 = (  op_dash_div1540 ( (  l1230 ) , (  d1232 ) ) );
    int32_t  m1234 = (  op_dash_sub173 ( (  l1230 ) , (  op_dash_mul1541 ( (  r1233 ) , (  d1232 ) ) ) ) );
    if ( (  cmp166 ( (  m1234 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add168 ( (  d1232 ) , (  m1234 ) ) );
    } else {
        return (  m1234 );
    }
}

struct envunion1543 {
    struct Maybe_255  (*fun) (  struct env1511*  ,    struct Pos_26  );
    struct env1511 env;
};

static  struct Maybe_1509   search_dash_from1510 (    struct Pane_228 *  pane4346 ,    struct Pos_26  pos4348 ,    struct StrView_27  query4350 ) {
    struct env1511 envinst1511 = {
        .pane4346 =  pane4346 ,
        .query4350 =  query4350 ,
    };
    struct envunion1513  temp1512 = ( (struct envunion1513){ .fun = (  struct Maybe_255  (*) (  struct env1511*  ,    struct Pos_26  ) )search_dash_on_dash_line1514 , .env =  envinst1511 } );
    struct Maybe_255  dref4354 = ( temp1512.fun ( &temp1512.env ,  (  pos4348 ) ) );
    if ( dref4354.tag == Maybe_255_Just_t ) {
        struct Pos_26  temp1535 = (  pos4348 );
        temp1535 .  f_bi = (  op_dash_add168 ( ( (  pos4348 ) .f_bi ) , ( (  size_dash_i32337 ) ( ( dref4354 .stuff .Maybe_255_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4356 = ( temp1535 );
        struct Pos_26  temp1536 = (  pos4348 );
        temp1536 .  f_bi = (  op_dash_sub173 ( (  op_dash_add168 ( ( (  pos4348 ) .f_bi ) , ( (  size_dash_i32337 ) ( (  op_dash_add319 ( ( dref4354 .stuff .Maybe_255_Just_s .field0 ) , ( (  num_dash_bytes1133 ) ( (  query4350 ) ) ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4357 = ( temp1536 );
        return ( ( Maybe_1509_Just ) ( ( ( Tuple2_240_Tuple2 ) ( (  sel_dash_pos4356 ) ,  (  cur_dash_pos4357 ) ) ) ) );
    }
    else {
        if ( dref4354.tag == Maybe_255_None_t ) {
            int32_t  num_dash_lines4358 = ( (  num_dash_lines1140 ) ( ( ( * (  pane4346 ) ) .f_buf ) ) );
            struct RangeIter_162  temp1537 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  (  num_dash_lines4358 ) ) ) );
            while (true) {
                struct Maybe_164  __cond1538 =  next165 (&temp1537);
                if (  __cond1538 .tag == 0 ) {
                    break;
                }
                int32_t  i4360 =  __cond1538 .stuff .Maybe_164_Just_s .field0;
                int32_t  line4361 = ( (  mod1539 ) ( (  op_dash_add168 ( ( (  pos4348 ) .f_line ) , (  i4360 ) ) ) ,  (  num_dash_lines4358 ) ) );
                struct envunion1543  temp1542 = ( (struct envunion1543){ .fun = (  struct Maybe_255  (*) (  struct env1511*  ,    struct Pos_26  ) )search_dash_on_dash_line1514 , .env =  envinst1511 } );
                struct Maybe_255  dref4362 = ( temp1542.fun ( &temp1542.env ,  ( (struct Pos_26) { .f_line = (  line4361 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ) );
                if ( dref4362.tag == Maybe_255_Just_t ) {
                    struct Pos_26  sel_dash_pos4364 = ( (struct Pos_26) { .f_line = (  line4361 ) , .f_bi = ( (  size_dash_i32337 ) ( ( dref4362 .stuff .Maybe_255_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4365 = ( (struct Pos_26) { .f_line = (  line4361 ) , .f_bi = (  op_dash_sub173 ( ( (  size_dash_i32337 ) ( (  op_dash_add319 ( ( dref4362 .stuff .Maybe_255_Just_s .field0 ) , ( (  num_dash_bytes1133 ) ( (  query4350 ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1509_Just ) ( ( ( Tuple2_240_Tuple2 ) ( (  sel_dash_pos4364 ) ,  (  cur_dash_pos4365 ) ) ) ) );
                }
                else {
                    if ( dref4362.tag == Maybe_255_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1509) { .tag = Maybe_1509_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1508 (    struct Editor_257 *  ed4454 ) {
    struct Maybe_94  dref4455 = ( ( * (  ed4454 ) ) .f_search_dash_term );
    if ( dref4455.tag == Maybe_94_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4455.tag == Maybe_94_Just_t ) {
            struct Maybe_1509  dref4457 = ( (  search_dash_from1510 ) ( ( (  pane1137 ) ( (  ed4454 ) ) ) ,  ( (  max_dash_pos1482 ) ( ( (  pane1137 ) ( (  ed4454 ) ) ) ) ) ,  ( dref4455 .stuff .Maybe_94_Just_s .field0 ) ) );
            if ( dref4457.tag == Maybe_1509_None_t ) {
            }
            else {
                if ( dref4457.tag == Maybe_1509_Just_t ) {
                    ( (  set_dash_cursors1094 ) ( ( (  pane1137 ) ( (  ed4454 ) ) ) ,  ( dref4457 .stuff .Maybe_1509_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4457 .stuff .Maybe_1509_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1095_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_255   find_dash_last_dash_occurence_dash_of_dash_slice1546 (    struct Slice_11  haystack1921 ,    struct Slice_11  needle1923 ) {
    struct Maybe_255  occ1924 = ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    struct RangeIter_162  temp1547 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  size_dash_i32337 ) ( ( (  haystack1921 ) .f_count ) ) ) , ( (  size_dash_i32337 ) ( ( (  needle1923 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1548 =  next165 (&temp1547);
        if (  __cond1548 .tag == 0 ) {
            break;
        }
        int32_t  i1926 =  __cond1548 .stuff .Maybe_164_Just_s .field0;
        if ( (  eq1518 ( ( (  subslice506 ) ( (  haystack1921 ) ,  ( (  i32_dash_size420 ) ( (  i1926 ) ) ) ,  (  op_dash_add319 ( ( (  i32_dash_size420 ) ( (  i1926 ) ) ) , ( (  needle1923 ) .f_count ) ) ) ) ) , (  needle1923 ) ) ) ) {
            occ1924 = ( ( Maybe_255_Just ) ( ( (  i32_dash_size420 ) ( (  i1926 ) ) ) ) );
        }
    }
    return (  occ1924 );
}

static  struct Maybe_1509   search_dash_back1545 (    struct Pane_228 *  pane4368 ,    struct Pos_26  pos4370 ,    struct StrView_27  query4372 ) {
    struct Maybe_255  dref4373 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1546 ) ( ( ( (  byte_dash_substr519 ) ( ( (  line1100 ) ( ( ( * (  pane4368 ) ) .f_buf ) ,  ( (  pos4370 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size420 ) ( ( (  pos4370 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4372 ) .f_contents ) ) );
    if ( dref4373.tag == Maybe_255_Just_t ) {
        struct Pos_26  temp1549 = (  pos4370 );
        temp1549 .  f_bi = ( (  size_dash_i32337 ) ( ( dref4373 .stuff .Maybe_255_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4375 = ( temp1549 );
        struct Pos_26  temp1550 = (  pos4370 );
        temp1550 .  f_bi = (  op_dash_sub173 ( ( (  size_dash_i32337 ) ( (  op_dash_add319 ( ( dref4373 .stuff .Maybe_255_Just_s .field0 ) , ( (  num_dash_bytes1133 ) ( (  query4372 ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4376 = ( temp1550 );
        return ( ( Maybe_1509_Just ) ( ( ( Tuple2_240_Tuple2 ) ( (  sel_dash_pos4375 ) ,  (  cur_dash_pos4376 ) ) ) ) );
    }
    else {
        if ( dref4373.tag == Maybe_255_None_t ) {
            int32_t  num_dash_lines4377 = ( (  num_dash_lines1140 ) ( ( ( * (  pane4368 ) ) .f_buf ) ) );
            struct RangeIter_162  temp1551 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  (  num_dash_lines4377 ) ) ) );
            while (true) {
                struct Maybe_164  __cond1552 =  next165 (&temp1551);
                if (  __cond1552 .tag == 0 ) {
                    break;
                }
                int32_t  i4379 =  __cond1552 .stuff .Maybe_164_Just_s .field0;
                int32_t  line4380 = ( (  mod1539 ) ( (  op_dash_sub173 ( ( (  pos4370 ) .f_line ) , (  i4379 ) ) ) ,  (  num_dash_lines4377 ) ) );
                struct Maybe_255  dref4381 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1546 ) ( ( ( (  line1100 ) ( ( ( * (  pane4368 ) ) .f_buf ) ,  (  line4380 ) ) ) .f_contents ) ,  ( (  query4372 ) .f_contents ) ) );
                if ( dref4381.tag == Maybe_255_Just_t ) {
                    struct Pos_26  sel_dash_pos4383 = ( (struct Pos_26) { .f_line = (  line4380 ) , .f_bi = ( (  size_dash_i32337 ) ( ( dref4381 .stuff .Maybe_255_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4384 = ( (struct Pos_26) { .f_line = (  line4380 ) , .f_bi = (  op_dash_sub173 ( ( (  size_dash_i32337 ) ( (  op_dash_add319 ( ( dref4381 .stuff .Maybe_255_Just_s .field0 ) , ( (  num_dash_bytes1133 ) ( (  query4372 ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1509_Just ) ( ( ( Tuple2_240_Tuple2 ) ( (  sel_dash_pos4383 ) ,  (  cur_dash_pos4384 ) ) ) ) );
                }
                else {
                    if ( dref4381.tag == Maybe_255_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1509) { .tag = Maybe_1509_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1544 (    struct Editor_257 *  ed4462 ) {
    struct Maybe_94  dref4463 = ( ( * (  ed4462 ) ) .f_search_dash_term );
    if ( dref4463.tag == Maybe_94_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4463.tag == Maybe_94_Just_t ) {
            struct Maybe_1509  dref4465 = ( (  search_dash_back1545 ) ( ( (  pane1137 ) ( (  ed4462 ) ) ) ,  ( (  min_dash_pos1493 ) ( ( (  pane1137 ) ( (  ed4462 ) ) ) ) ) ,  ( dref4463 .stuff .Maybe_94_Just_s .field0 ) ) );
            if ( dref4465.tag == Maybe_1509_None_t ) {
            }
            else {
                if ( dref4465.tag == Maybe_1509_Just_t ) {
                    ( (  set_dash_cursors1094 ) ( ( (  pane1137 ) ( (  ed4462 ) ) ) ,  ( dref4465 .stuff .Maybe_1509_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4465 .stuff .Maybe_1509_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1095_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1556 (   struct env141* env ,    struct TextBuf_114 *  self3899 ,    struct Cursors_33  before_dash_cursors3901 ) {
    struct Actions_115 *  actions3902 = ( & ( ( * (  self3899 ) ) .f_actions ) );
    ( (  trim_dash_actions1172 ) ( (  actions3902 ) ) );
    ( (  flush_dash_insert_dash_action1147 ) ( (  self3899 ) ) );
    ( (  assert645 ) ( (  eq1241 ( ( ( ( * (  self3899 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_116_NoChangeset ) ) ) ,  ( (  from_dash_string208 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al3903 = ( ( * (  self3899 ) ) .f_al );
    struct Changeset_32  temp1557 = ( (struct Changeset_32) { .f_parts = ( (  mk1270 ) ( (  al3903 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3901 ) } );
    struct Changeset_32 *  changeset3904 = ( &temp1557 );
    struct envunion142  temp1558 = ( (struct envunion142){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1281 , .env =  env->envinst28 } );
    ( temp1558.fun ( &temp1558.env ,  ( & ( ( * (  actions3902 ) ) .f_list ) ) ,  ( * (  changeset3904 ) ) ) );
    (*  actions3902 ) .f_input_dash_changeset = ( ChangesetInputType_116_CustomChangeset );
    (*  actions3902 ) .f_cur = (  op_dash_add319 ( ( ( * (  actions3902 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1198   head1564 (    struct List_23  it1143 ) {
    struct SliceIter_1191  temp1565 = ( (  into_dash_iter1193 ) ( (  it1143 ) ) );
    return ( (  next1199 ) ( ( &temp1565 ) ) );
}

static  bool   null1563 (    struct List_23  it1152 ) {
    struct Maybe_1198  dref1153 = ( (  head1564 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_1198_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1562 (    struct TextBuf_114 *  self3907 ) {
    ( (  flush_dash_insert_dash_action1147 ) ( (  self3907 ) ) );
    struct Actions_115 *  actions3908 = ( & ( ( * (  self3907 ) ) .f_actions ) );
    if ( ( (  null1563 ) ( ( ( * ( (  last_dash_ptr1243 ) ( ( (  to_dash_slice1245 ) ( ( ( * (  actions3908 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3908 ) .f_cur = (  op_dash_sub297 ( ( ( * (  actions3908 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3908 ) .f_input_dash_changeset = ( ChangesetInputType_116_NoChangeset );
        ( (  trim_dash_actions1172 ) ( (  actions3908 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1567 (    struct Maybe_34  x1276 ,    struct Pos_26 (*  fun1278 )(    struct Pos_26  ) ) {
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

static  struct Pos_26   lam1568 (    struct Pos_26  sel4313 ) {
    struct Pos_26  temp1569 = (  sel4313 );
    temp1569 .  f_bi = (  op_dash_add168 ( ( (  sel4313 ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) );
    return ( temp1569 );
}

static  enum Unit_8   indent_dash_selection1554 (   struct env226* env ,    struct Pane_228 *  self4309 ) {
    struct envunion231  temp1555 = ( (struct envunion231){ .fun = (  enum Unit_8  (*) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  ) )begin_dash_changeset1556 , .env =  env->envinst141 } );
    ( temp1555.fun ( &temp1555.env ,  ( ( * (  self4309 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4309 ) ) .f_cursor ) , .f_sel = ( ( * (  self4309 ) ) .f_sel ) } ) ) );
    struct RangeIter_162  temp1559 =  into_dash_iter163 ( ( (  to172 ) ( ( ( (  min_dash_pos1493 ) ( (  self4309 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1482 ) ( (  self4309 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_164  __cond1560 =  next165 (&temp1559);
        if (  __cond1560 .tag == 0 ) {
            break;
        }
        int32_t  line4311 =  __cond1560 .stuff .Maybe_164_Just_s .field0;
        struct envunion227  temp1561 = ( (struct envunion227){ .fun = (  enum Unit_8  (*) (  struct env224*  ,    struct Pane_228 *  ,    int32_t  ) )indent_dash_at1312 , .env =  env->envinst224 } );
        ( temp1561.fun ( &temp1561.env ,  (  self4309 ) ,  (  line4311 ) ) );
    }
    ( (  end_dash_changeset1562 ) ( ( ( * (  self4309 ) ) .f_buf ) ) );
    struct Pos_26  temp1566 = ( ( * (  self4309 ) ) .f_cursor );
    temp1566 .  f_bi = (  op_dash_add168 ( ( ( ( * (  self4309 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) );
    ( (  set_dash_cursors1094 ) ( (  self4309 ) ,  ( temp1566 ) ,  ( (  fmap_dash_maybe1567 ) ( ( ( * (  self4309 ) ) .f_sel ) ,  (  lam1568 ) ) ) ,  ( CursorMovement_1095_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1580 {
    ;
    bool  last_dash_char_dash_was_dash_tab4318;
    ;
};

struct envunion1581 {
    struct Pos_26  (*fun) (  struct env1580*  ,    struct Pos_26  );
    struct env1580 env;
};

static  struct Maybe_34   fmap_dash_maybe1579 (    struct Maybe_34  x1276 ,   struct envunion1581  fun1278 ) {
    struct Maybe_34  dref1279 = (  x1276 );
    if ( dref1279.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1279.tag == Maybe_34_Just_t ) {
            struct envunion1581  temp1582 = (  fun1278 );
            return ( ( Maybe_34_Just ) ( ( temp1582.fun ( &temp1582.env ,  ( dref1279 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1583 (   struct env1580* env ,    struct Pos_26  sel4322 ) {
    struct Pos_26  temp1584 = (  sel4322 );
    temp1584 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4318 ) ? (  op_dash_sub173 ( ( (  sel4322 ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) ) : ( (  sel4322 ) .f_bi ) );
    return ( temp1584 );
}

static  enum Unit_8   dedent_dash_selection1571 (   struct env232* env ,    struct Pane_228 *  self4316 ) {
    struct envunion234  temp1572 = ( (struct envunion234){ .fun = (  enum Unit_8  (*) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  ) )begin_dash_changeset1556 , .env =  env->envinst141 } );
    ( temp1572.fun ( &temp1572.env ,  ( ( * (  self4316 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4316 ) ) .f_cursor ) , .f_sel = ( ( * (  self4316 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1573 = ( (  min_dash_pos1493 ) ( (  self4316 ) ) );
    temp1573 .  f_bi = (  from_dash_integral67 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4317 = (  eq583 ( ( (  char_dash_at1344 ) ( (  self4316 ) ,  ( temp1573 ) ) ) , ( (  from_dash_charlike354 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1574 = ( (  max_dash_pos1482 ) ( (  self4316 ) ) );
    temp1574 .  f_bi = (  from_dash_integral67 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4318 = (  eq583 ( ( (  char_dash_at1344 ) ( (  self4316 ) ,  ( temp1574 ) ) ) , ( (  from_dash_charlike354 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_162  temp1575 =  into_dash_iter163 ( ( (  to172 ) ( ( ( (  min_dash_pos1493 ) ( (  self4316 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1482 ) ( (  self4316 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_164  __cond1576 =  next165 (&temp1575);
        if (  __cond1576 .tag == 0 ) {
            break;
        }
        int32_t  line4320 =  __cond1576 .stuff .Maybe_164_Just_s .field0;
        if ( (  eq583 ( ( (  char_dash_at1344 ) ( (  self4316 ) ,  ( (struct Pos_26) { .f_line = (  line4320 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike354 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion233  temp1577 = ( (struct envunion233){ .fun = (  struct Maybe_215  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  ) )change1171 , .env =  env->envinst136 } );
            ( temp1577.fun ( &temp1577.env ,  ( ( * (  self4316 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4320 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4320 ) , .f_bi = (  from_dash_integral67 ( 1 ) ) } ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_215) { .tag = Maybe_215_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1562 ) ( ( ( * (  self4316 ) ) .f_buf ) ) );
    struct Pos_26  temp1578 = ( ( * (  self4316 ) ) .f_cursor );
    temp1578 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4317 ) ? (  op_dash_sub173 ( ( ( ( * (  self4316 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) ) : ( ( ( * (  self4316 ) ) .f_cursor ) .f_bi ) );
    struct env1580 envinst1580 = {
        .last_dash_char_dash_was_dash_tab4318 =  last_dash_char_dash_was_dash_tab4318 ,
    };
    ( (  set_dash_cursors1094 ) ( (  self4316 ) ,  ( temp1578 ) ,  ( (  fmap_dash_maybe1579 ) ( ( ( * (  self4316 ) ) .f_sel ) ,  ( (struct envunion1581){ .fun = (  struct Pos_26  (*) (  struct env1580*  ,    struct Pos_26  ) )lam1583 , .env =  envinst1580 } ) ) ) ,  ( CursorMovement_1095_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1588 (  ) {
    int32_t  temp1589;
    return (  temp1589 );
}

static  int32_t   or_dash_fail1587 (    struct Maybe_164  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_164  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_164_None_t ) {
        ( (  panic1215 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1588 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_164_Just_t ) {
            return ( dref1730 .stuff .Maybe_164_Just_s .field0 );
        }
    }
}

struct env1592 {
    ;
    struct Pane_228 *  self4331;
};

struct envunion1593 {
    int32_t  (*fun) (  struct env1592*  ,    int32_t  );
    struct env1592 env;
};

struct Map_1591 {
    struct RangeIter_162  field0;
    struct envunion1593  field1;
};

static struct Map_1591 Map_1591_Map (  struct RangeIter_162  field0 , struct envunion1593  field1 ) {
    return ( struct Map_1591 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1591   into_dash_iter1595 (    struct Map_1591  self797 ) {
    return (  self797 );
}

static  struct Maybe_164   next1596 (    struct Map_1591 *  dref799 ) {
    struct Maybe_164  dref802 = ( (  next165 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_164_None_t ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_164_Just_t ) {
            struct envunion1593  temp1597 = ( (* dref799 ) .field1 );
            return ( ( Maybe_164_Just ) ( ( temp1597.fun ( &temp1597.env ,  ( dref802 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_164   reduce1594 (    struct Map_1591  iterable1094 ,    struct Maybe_164  base1096 ,    struct Maybe_164 (*  fun1098 )(    int32_t  ,    struct Maybe_164  ) ) {
    struct Maybe_164  x1099 = (  base1096 );
    struct Map_1591  it1100 = ( (  into_dash_iter1595 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next1596 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1598 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1598);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_164  temp1599;
    return (  temp1599 );
}

struct env1602 {
    ;
    int32_t  x1244;
};

struct envunion1603 {
    struct Maybe_164  (*fun) (  struct env1602*  ,    int32_t  );
    struct env1602 env;
};

static  struct Maybe_164   maybe1601 (    struct Maybe_164  x1283 ,   struct envunion1603  fun1285 ,    struct Maybe_164  default1287 ) {
    struct envunion1603  temp1604 = (  fun1285 );
    return ( {  struct Maybe_164  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_164_Just_t ? ( temp1604.fun ( &temp1604.env ,  ( dref1288 .stuff .Maybe_164_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  struct Maybe_164   lam1605 (   struct env1602* env ,    int32_t  lm1313 ) {
    return ( ( Maybe_164_Just ) ( ( (  min636 ) ( (  lm1313 ) ,  ( env->x1244 ) ) ) ) );
}

static  struct Maybe_164   lam1600 (    int32_t  x1244 ,    struct Maybe_164  last_dash_min1246 ) {
    struct env1602 envinst1602 = {
        .x1244 =  x1244 ,
    };
    return ( (  maybe1601 ) ( (  last_dash_min1246 ) ,  ( (struct envunion1603){ .fun = (  struct Maybe_164  (*) (  struct env1602*  ,    int32_t  ) )lam1605 , .env =  envinst1602 } ) ,  ( ( Maybe_164_Just ) ( (  x1244 ) ) ) ) );
}

static  struct Maybe_164   minimum1590 (    struct Map_1591  it1242 ) {
    return ( (  reduce1594 ) ( (  it1242 ) ,  ( (struct Maybe_164) { .tag = Maybe_164_None_t } ) ,  (  lam1600 ) ) );
}

static  struct Map_1591   map1606 (    struct Range_159  iterable806 ,   struct envunion1593  fun808 ) {
    struct RangeIter_162  it809 = ( (  into_dash_iter163 ) ( (  iterable806 ) ) );
    return ( ( Map_1591_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  int32_t   lam1607 (   struct env1592* env ,    int32_t  ln4335 ) {
    return ( (  indent_dash_at_dash_line1149 ) ( ( env->self4331 ) ,  (  ln4335 ) ) );
}

struct env1609 {
    ;
    struct Pane_228 *  self4331;
    ;
};

struct envunion1610 {
    bool  (*fun) (  struct env1609*  ,    int32_t  );
    struct env1609 env;
};

struct env1612 {
    struct envunion1610  fun1127;
};

struct envunion1613 {
    bool  (*fun) (  struct env1612*  ,    int32_t  ,    bool  );
    struct env1612 env;
};

static  bool   reduce1611 (    struct Range_159  iterable1094 ,    bool  base1096 ,   struct envunion1613  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1613  temp1614 = (  fun1098 );
                x1099 = ( temp1614.fun ( &temp1614.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1615 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1615);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1616;
    return (  temp1616 );
}

static  bool   lam1617 (   struct env1612* env ,    int32_t  e1129 ,    bool  x1131 ) {
    struct envunion1610  temp1618 = ( env->fun1127 );
    return ( ( temp1618.fun ( &temp1618.env ,  (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1608 (    struct Range_159  it1125 ,   struct envunion1610  fun1127 ) {
    struct env1612 envinst1612 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1611 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1613){ .fun = (  bool  (*) (  struct env1612*  ,    int32_t  ,    bool  ) )lam1617 , .env =  envinst1612 } ) ) );
}

static  bool   is_dash_just1620 (    struct Maybe_1509  m1261 ) {
    struct Maybe_1509  dref1262 = (  m1261 );
    if ( dref1262.tag == Maybe_1509_None_t ) {
        return ( false );
    }
    else {
        if ( dref1262.tag == Maybe_1509_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1622 (    struct Char_65  c4263 ) {
    return ( ( !  eq583 ( (  c4263 ) , ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1343 ) ( (  c4263 ) ) ) );
}

static  struct Maybe_1509   line_dash_begins_dash_with_dash_comment1621 (    struct Pane_228 *  self4257 ,    int32_t  line4259 ) {
    int32_t  indent4260 = ( (  indent_dash_at_dash_line1149 ) ( (  self4257 ) ,  (  line4259 ) ) );
    if ( (  eq583 ( ( (  char_dash_at1344 ) ( (  self4257 ) ,  ( (  mk672 ) ( (  line4259 ) ,  (  indent4260 ) ) ) ) ) , ( (  from_dash_charlike354 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4261 = (  op_dash_add168 ( (  indent4260 ) , (  from_dash_integral67 ( 1 ) ) ) );
        while ( ( (  lam1622 ) ( ( (  char_dash_at1344 ) ( (  self4257 ) ,  ( (  mk672 ) ( (  line4259 ) ,  (  i4261 ) ) ) ) ) ) ) ) {
            i4261 = (  op_dash_add168 ( (  i4261 ) , (  from_dash_integral67 ( 1 ) ) ) );
        }
        return ( ( Maybe_1509_Just ) ( ( ( Tuple2_240_Tuple2 ) ( ( (  mk672 ) ( (  line4259 ) ,  (  indent4260 ) ) ) ,  ( (  mk672 ) ( (  line4259 ) ,  (  i4261 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1509) { .tag = Maybe_1509_None_t } );
    }
}

static  bool   lam1619 (   struct env1609* env ,    int32_t  ln4338 ) {
    return ( (  is_dash_just1620 ) ( ( (  line_dash_begins_dash_with_dash_comment1621 ) ( ( env->self4331 ) ,  (  ln4338 ) ) ) ) );
}

static  struct Tuple2_240   undefined1628 (  ) {
    struct Tuple2_240  temp1629;
    return (  temp1629 );
}

static  struct Tuple2_240   or_dash_fail1627 (    struct Maybe_1509  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_1509  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1509_None_t ) {
        ( (  panic1215 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1628 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1509_Just_t ) {
            return ( dref1730 .stuff .Maybe_1509_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1586 (   struct env237* env ,    struct Pane_228 *  self4331 ) {
    int32_t  from_dash_line4332 = ( ( (  min_dash_pos1493 ) ( (  self4331 ) ) ) .f_line );
    int32_t  to_dash_line4333 = ( ( (  max_dash_pos1482 ) ( (  self4331 ) ) ) .f_line );
    struct env1592 envinst1592 = {
        .self4331 =  self4331 ,
    };
    int32_t  min_dash_indent4336 = ( (  or_dash_fail1587 ) ( ( (  minimum1590 ) ( ( (  map1606 ) ( ( (  to172 ) ( (  from_dash_line4332 ) ,  (  to_dash_line4333 ) ) ) ,  ( (struct envunion1593){ .fun = (  int32_t  (*) (  struct env1592*  ,    int32_t  ) )lam1607 , .env =  envinst1592 } ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1609 envinst1609 = {
        .self4331 =  self4331 ,
    };
    bool  all_dash_have_dash_comment4339 = ( (  all1608 ) ( ( (  to172 ) ( (  from_dash_line4332 ) ,  (  to_dash_line4333 ) ) ) ,  ( (struct envunion1610){ .fun = (  bool  (*) (  struct env1609*  ,    int32_t  ) )lam1619 , .env =  envinst1609 } ) ) );
    struct envunion241  temp1623 = ( (struct envunion241){ .fun = (  enum Unit_8  (*) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  ) )begin_dash_changeset1556 , .env =  env->envinst141 } );
    ( temp1623.fun ( &temp1623.env ,  ( ( * (  self4331 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4331 ) ) .f_cursor ) , .f_sel = ( ( * (  self4331 ) ) .f_sel ) } ) ) );
    struct RangeIter_162  temp1624 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_line4332 ) ,  (  to_dash_line4333 ) ) ) );
    while (true) {
        struct Maybe_164  __cond1625 =  next165 (&temp1624);
        if (  __cond1625 .tag == 0 ) {
            break;
        }
        int32_t  line4341 =  __cond1625 .stuff .Maybe_164_Just_s .field0;
        struct Char_65  comment_dash_str4342 = ( (  from_dash_charlike354 ) ( ( "#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4339 ) ) ) {
            ( (  set_dash_cursors1094 ) ( (  self4331 ) ,  ( (  mk672 ) ( (  line4341 ) ,  (  min_dash_indent4336 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_NoChanges ) ) );
            struct envunion238  temp1626 = ( (struct envunion238){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_228 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1169 , .env =  env->envinst213 } );
            ( temp1626.fun ( &temp1626.env ,  (  self4331 ) ,  ( (  from_dash_string208 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_240  tup4343 = ( (  or_dash_fail1627 ) ( ( (  line_dash_begins_dash_with_dash_comment1621 ) ( (  self4331 ) ,  (  line4341 ) ) ) ,  ( (  from_dash_string208 ) ( ( "(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion239  temp1630 = ( (struct envunion239){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1413 , .env =  env->envinst222 } );
            ( temp1630.fun ( &temp1630.env ,  (  self4331 ) ,  ( ( Tuple2_240_Tuple2 ) ( ( (  fst1404 ) ( (  tup4343 ) ) ) ,  ( (  snd1405 ) ( (  tup4343 ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1562 ) ( ( ( * (  self4331 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1092 (   struct env261* env ,    struct Editor_257 *  ed4470 ,    struct Key_276  key4472 ) {
    struct Key_276  dref4473 = (  key4472 );
    if ( dref4473.tag == Key_276_Char_t ) {
        if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4470 ) .f_running = ( false );
        } else {
            if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1093 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ) );
            } else {
                if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1138 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ) );
                } else {
                    if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1141 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
                    } else {
                        if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1145 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
                        } else {
                            if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1146 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( Mode_229_Insert ) ) );
                            } else {
                                if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1148 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ) );
                                    ( (  set_dash_mode1146 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( Mode_229_Insert ) ) );
                                } else {
                                    if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1166 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ) );
                                        ( (  set_dash_mode1146 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( Mode_229_Insert ) ) );
                                    } else {
                                        if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_228 *  pane4475 = ( (  pane1137 ) ( (  ed4470 ) ) );
                                            int32_t  indent4476 = ( (  indent_dash_at_dash_line1149 ) ( (  pane4475 ) ,  ( ( ( * (  pane4475 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1166 ) ( (  pane4475 ) ) );
                                            struct envunion270  temp1168 = ( (struct envunion270){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_228 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1169 , .env =  env->envinst213 } );
                                            ( temp1168.fun ( &temp1168.env ,  (  pane4475 ) ,  ( (  from_dash_charlike1231 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1138 ) ( (  pane4475 ) ) );
                                            struct envunion268  temp1307 = ( (struct envunion268){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Pane_228 *  ,    int32_t  ) )indent_dash_at_dash_current1308 , .env =  env->envinst235 } );
                                            ( temp1307.fun ( &temp1307.env ,  (  pane4475 ) ,  (  indent4476 ) ) );
                                            ( (  set_dash_mode1146 ) ( (  pane4475 ) ,  ( Mode_229_Insert ) ) );
                                        } else {
                                            if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_228 *  pane4477 = ( (  pane1137 ) ( (  ed4470 ) ) );
                                                int32_t  indent4478 = ( (  indent_dash_at_dash_line1149 ) ( (  pane4477 ) ,  ( ( ( * (  pane4477 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1314 ) ( (  pane4477 ) ) );
                                                struct envunion1317  temp1316 = ( (struct envunion1317){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_228 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1169 , .env =  env->envinst213 } );
                                                ( temp1316.fun ( &temp1316.env ,  (  pane4477 ) ,  ( (  from_dash_charlike1231 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1319  temp1318 = ( (struct envunion1319){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Pane_228 *  ,    int32_t  ) )indent_dash_at_dash_current1308 , .env =  env->envinst235 } );
                                                ( temp1318.fun ( &temp1318.env ,  (  pane4477 ) ,  (  indent4478 ) ) );
                                                ( (  set_dash_mode1146 ) ( (  pane4477 ) ,  ( Mode_229_Insert ) ) );
                                            } else {
                                                if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1320 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( MoveDirection_1321_MoveFwd ) ,  ( MoveTarget_1322_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1320 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( MoveDirection_1321_MoveFwd ) ,  ( MoveTarget_1322_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1320 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( MoveDirection_1321_MoveBwd ) ,  ( MoveTarget_1322_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion264  temp1356 = ( (struct envunion264){ .fun = (  enum Unit_8  (*) (  struct env220*  ,    struct Pane_228 *  ) )redo1357 , .env =  env->envinst220 } );
                                                                ( temp1356.fun ( &temp1356.env ,  ( (  pane1137 ) ( (  ed4470 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion263  temp1381 = ( (struct envunion263){ .fun = (  enum Unit_8  (*) (  struct env218*  ,    struct Pane_228 *  ) )undo1382 , .env =  env->envinst218 } );
                                                                    ( temp1381.fun ( &temp1381.env ,  ( (  pane1137 ) ( (  ed4470 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion266  temp1399 = ( (struct envunion266){ .fun = (  enum Unit_8  (*) (  struct env242*  ,    struct Editor_257 *  ) )copy_dash_selection_dash_to_dash_clipboard1400 , .env =  env->envinst242 } );
                                                                        ( temp1399.fun ( &temp1399.env ,  (  ed4470 ) ) );
                                                                        struct envunion267  temp1412 = ( (struct envunion267){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1413 , .env =  env->envinst222 } );
                                                                        ( temp1412.fun ( &temp1412.env ,  ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( (  selection1401 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1146 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( Mode_229_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1421  temp1420 = ( (struct envunion1421){ .fun = (  enum Unit_8  (*) (  struct env242*  ,    struct Editor_257 *  ) )copy_dash_selection_dash_to_dash_clipboard1400 , .env =  env->envinst242 } );
                                                                            ( temp1420.fun ( &temp1420.env ,  (  ed4470 ) ) );
                                                                            struct envunion1423  temp1422 = ( (struct envunion1423){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_228 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1413 , .env =  env->envinst222 } );
                                                                            ( temp1422.fun ( &temp1422.env ,  ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( (  selection1401 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1146 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( Mode_229_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1425  temp1424 = ( (struct envunion1425){ .fun = (  enum Unit_8  (*) (  struct env242*  ,    struct Editor_257 *  ) )copy_dash_selection_dash_to_dash_clipboard1400 , .env =  env->envinst242 } );
                                                                                ( temp1424.fun ( &temp1424.env ,  (  ed4470 ) ) );
                                                                                size_t  bytes_dash_yanked4479 = ( (  num_dash_bytes1133 ) ( ( (  or_dash_else558 ) ( ( ( * (  ed4470 ) ) .f_clipboard ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion269  temp1426 = ( (struct envunion269){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Editor_257 *  ,    struct StrConcat_86  ) )set_dash_msg1427 , .env =  env->envinst244 } );
                                                                                ( temp1426.fun ( &temp1426.env ,  (  ed4470 ) ,  ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4479 ) ) ) ,  ( (  from_dash_string208 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1477 envinst1477 = {
                                                                                        .ed4470 =  ed4470 ,
                                                                                        .envinst222 = env->envinst222 ,
                                                                                    };
                                                                                    ( (  if_dash_just1476 ) ( ( ( * (  ed4470 ) ) .f_clipboard ) ,  ( (struct envunion1479){ .fun = (  enum Unit_8  (*) (  struct env1477*  ,    struct StrView_27  ) )lam1481 , .env =  envinst1477 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1488 envinst1488 = {
                                                                                            .ed4470 =  ed4470 ,
                                                                                            .envinst222 = env->envinst222 ,
                                                                                        };
                                                                                        ( (  if_dash_just1487 ) ( ( ( * (  ed4470 ) ) .f_clipboard ) ,  ( (struct envunion1490){ .fun = (  enum Unit_8  (*) (  struct env1488*  ,    struct StrView_27  ) )lam1492 , .env =  envinst1488 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1497 envinst1497 = {
                                                                                                .envinst222 = env->envinst222 ,
                                                                                                .ed4470 =  ed4470 ,
                                                                                            };
                                                                                            ( (  if_dash_just1496 ) ( ( ( * (  ed4470 ) ) .f_clipboard ) ,  ( (struct envunion1499){ .fun = (  enum Unit_8  (*) (  struct env1497*  ,    struct StrView_27  ) )lam1501 , .env =  envinst1497 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1503 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1146 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( Mode_229_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1507 ) ( ( ( ( * (  ed4470 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4470 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4470 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4470 ) .f_mode = ( ( EditorMode_258_Cmd ) ( ( ( * ( (  pane1137 ) ( (  ed4470 ) ) ) ) .f_cursor ) ,  ( (  mk1431 ) ( ( ( * (  ed4470 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4470 ) .f_mode = ( ( EditorMode_258_Search ) ( ( ( * ( (  pane1137 ) ( (  ed4470 ) ) ) ) .f_cursor ) ,  ( (  mk1431 ) ( ( ( * (  ed4470 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1508 ) ( (  ed4470 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1544 ) ( (  ed4470 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion265  temp1553 = ( (struct envunion265){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_228 *  ) )indent_dash_selection1554 , .env =  env->envinst226 } );
                                                                                                                        ( temp1553.fun ( &temp1553.env ,  ( (  pane1137 ) ( (  ed4470 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq949 ( ( dref4473 .stuff .Key_276_Char_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion262  temp1570 = ( (struct envunion262){ .fun = (  enum Unit_8  (*) (  struct env232*  ,    struct Pane_228 *  ) )dedent_dash_selection1571 , .env =  env->envinst232 } );
                                                                                                                            ( temp1570.fun ( &temp1570.env ,  ( (  pane1137 ) ( (  ed4470 ) ) ) ) );
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
        if ( dref4473.tag == Key_276_Escape_t ) {
            ( (  set_dash_mode1146 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  ( Mode_229_Normal ) ) );
        }
        else {
            if ( dref4473.tag == Key_276_Ctrl_t ) {
                if ( (  eq949 ( ( dref4473 .stuff .Key_276_Ctrl_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion271  temp1585 = ( (struct envunion271){ .fun = (  enum Unit_8  (*) (  struct env237*  ,    struct Pane_228 *  ) )toggle_dash_comment1586 , .env =  env->envinst237 } );
                    ( temp1585.fun ( &temp1585.env ,  ( (  pane1137 ) ( (  ed4470 ) ) ) ) );
                } else {
                    if ( (  eq949 ( ( dref4473 .stuff .Key_276_Ctrl_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1145 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  (  from_dash_integral67 ( 15 ) ) ) );
                    } else {
                        if ( (  eq949 ( ( dref4473 .stuff .Key_276_Ctrl_s .field0 ) , ( (  from_dash_charlike517 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1141 ) ( ( (  pane1137 ) ( (  ed4470 ) ) ) ,  (  from_dash_integral67 ( 15 ) ) ) );
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

struct envunion1632 {
    enum Unit_8  (*fun) (  struct env261*  ,    struct Editor_257 *  ,    struct Key_276  );
    struct env261 env;
};

struct envunion1634 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_228 *  ,    struct StrView_27  );
    struct env213 env;
};

static  enum Unit_8   backspace1637 (   struct env216* env ,    struct Pane_228 *  self4272 ) {
    struct Pos_26  prev_dash_cur4273 = ( ( * (  self4272 ) ) .f_cursor );
    ( (  move_dash_left1093 ) ( (  self4272 ) ) );
    struct envunion217  temp1638 = ( (struct envunion217){ .fun = (  struct Maybe_215  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  ) )change1171 , .env =  env->envinst136 } );
    ( temp1638.fun ( &temp1638.env ,  ( ( * (  self4272 ) ) .f_buf ) ,  ( ( * (  self4272 ) ) .f_cursor ) ,  (  prev_dash_cur4273 ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_215) { .tag = Maybe_215_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1640 {
    char _arr [1];
};

static  char *   cast1641 (    struct Array_1640 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_963   as_dash_slice1639 (    struct Array_1640 *  arr2277 ) {
    return ( (struct Slice_963) { .f_ptr = ( (  cast1641 ) ( (  arr2277 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1640   from_dash_listlike1643 (    struct Array_1640  self330 ) {
    return (  self330 );
}

struct Scanner_1647 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1647   mk_dash_from_dash_strview1649 (    struct StrView_27  s3200 ) {
    return ( (struct Scanner_1647) { .f_s = (  s3200 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1655 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1654 {
    struct TakeWhile_1655  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1654 Map_1654_Map (  struct TakeWhile_1655  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1654 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1654   into_dash_iter1657 (    struct Map_1654  self797 ) {
    return (  self797 );
}

static  struct Maybe_305   next1659 (    struct TakeWhile_1655 *  self965 ) {
    struct Maybe_305  mx966 = ( (  next689 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_305  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_305_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_305_Just ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
            }
        }
    }
}

static  struct Maybe_255   next1658 (    struct Map_1654 *  dref799 ) {
    struct Maybe_305  dref802 = ( (  next1659 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_305_Just_t ) {
            return ( ( Maybe_255_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_305_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1656 (    struct Map_1654  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1654  it1100 = ( (  into_dash_iter1657 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next1658 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1660 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1660);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1661;
    return (  temp1661 );
}

static  size_t   lam1662 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add319 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1653 (    struct Map_1654  it1111 ) {
    return ( (  reduce1656 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1662 ) ) );
}

static  struct TakeWhile_1655   into_dash_iter1664 (    struct TakeWhile_1655  self962 ) {
    return (  self962 );
}

static  struct Map_1654   map1663 (    struct TakeWhile_1655  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1655  it809 = ( (  into_dash_iter1664 ) ( (  iterable806 ) ) );
    return ( ( Map_1654_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1655   take_dash_while1665 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1655) { .f_it = ( (  into_dash_iter787 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1666 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1652 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1653 ) ( ( (  map1663 ) ( ( (  take_dash_while1665 ) ( ( (  chars701 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1666 ) ) ) ) );
    return ( (  byte_dash_substr519 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1651 (    struct Scanner_1647 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1652 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1534 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1133 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

static  enum Unit_8   drop_dash_str_dash_while1650 (    struct Scanner_1647 *  sc3278 ,    bool (*  fun3280 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1651 ) ( (  sc3278 ) ,  (  fun3280 ) ) );
    return ( Unit_8_Unit );
}

struct TakeWhile_1671 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1670 {
    struct TakeWhile_1671  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1670 Map_1670_Map (  struct TakeWhile_1671  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1670 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1670   into_dash_iter1673 (    struct Map_1670  self797 ) {
    return (  self797 );
}

static  struct Maybe_305   next1675 (    struct TakeWhile_1671 *  self965 ) {
    struct Maybe_305  mx966 = ( (  next689 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_305  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_305_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_305_Just ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
            }
        }
    }
}

static  struct Maybe_255   next1674 (    struct Map_1670 *  dref799 ) {
    struct Maybe_305  dref802 = ( (  next1675 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_305_Just_t ) {
            return ( ( Maybe_255_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_305_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1672 (    struct Map_1670  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1670  it1100 = ( (  into_dash_iter1673 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next1674 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1676 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1676);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1677;
    return (  temp1677 );
}

static  size_t   lam1678 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add319 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1669 (    struct Map_1670  it1111 ) {
    return ( (  reduce1672 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1678 ) ) );
}

static  struct TakeWhile_1671   into_dash_iter1680 (    struct TakeWhile_1671  self962 ) {
    return (  self962 );
}

static  struct Map_1670   map1679 (    struct TakeWhile_1671  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1671  it809 = ( (  into_dash_iter1680 ) ( (  iterable806 ) ) );
    return ( ( Map_1670_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1671   take_dash_while1681 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1671) { .f_it = ( (  into_dash_iter787 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1682 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1668 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1669 ) ( ( (  map1679 ) ( ( (  take_dash_while1681 ) ( ( (  chars701 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1682 ) ) ) ) );
    return ( (  byte_dash_substr519 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1667 (    struct Scanner_1647 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1668 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1534 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1133 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

static  bool   is_dash_not_dash_whitespace1683 (    struct Char_65  c2387 ) {
    return ( ! ( (  is_dash_whitespace1343 ) ( (  c2387 ) ) ) );
}

static  bool   eq1684 (    struct StrView_27  l2214 ,    struct StrView_27  r2216 ) {
    return (  eq1518 ( ( (  l2214 ) .f_contents ) , ( (  r2216 ) .f_contents ) ) );
}

static  struct Maybe_305   head1686 (    struct StrView_27  it1143 ) {
    struct StrViewIter_62  temp1687 = ( (  into_dash_iter702 ) ( (  it1143 ) ) );
    return ( (  next689 ) ( ( &temp1687 ) ) );
}

static  bool   null1685 (    struct StrView_27  it1152 ) {
    struct Maybe_305  dref1153 = ( (  head1686 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_305_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_94   maybe1690 (    struct Maybe_94  x1283 ,    struct Maybe_94 (*  fun1285 )(    struct StrView_27  ) ,    struct Maybe_94  default1287 ) {
    return ( {  struct Maybe_94  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_94_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_94_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  bool   is_dash_none1691 (    struct Maybe_94  m1265 ) {
    struct Maybe_94  dref1266 = (  m1265 );
    if ( dref1266.tag == Maybe_94_None_t ) {
        return ( true );
    }
    else {
        if ( dref1266.tag == Maybe_94_Just_t ) {
            return ( false );
        }
    }
}

struct StrConcatIter_1700 {
    struct StrViewIter_62  f_left;
    struct AppendIter_63  f_right;
};

struct env1701 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1702 {
    enum Unit_8  (*fun) (  struct env1701*  ,    struct Char_65  );
    struct env1701 env;
};

static  struct StrConcatIter_1700   into_dash_iter1704 (    struct StrConcatIter_1700  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_305   next1705 (    struct StrConcatIter_1700 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1699 (    struct StrConcatIter_1700  iterable1075 ,   struct envunion1702  fun1077 ) {
    struct StrConcatIter_1700  temp1703 = ( (  into_dash_iter1704 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1700 *  it1078 = ( &temp1703 );
    while ( ( true ) ) {
        struct Maybe_305  dref1079 = ( (  next1705 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_305_Just_t ) {
                struct envunion1702  temp1706 = (  fun1077 );
                ( temp1706.fun ( &temp1706.env ,  ( dref1079 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1700   into_dash_iter1708 (    struct StrConcat_81  dref1505 ) {
    return ( (struct StrConcatIter_1700) { .f_left = ( (  chars701 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars703 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1700   chars1707 (    struct StrConcat_81  self1516 ) {
    return ( (  into_dash_iter1708 ) ( (  self1516 ) ) );
}

static  enum Unit_8   lam1709 (   struct env1701* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1710 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1464 , .env =  env->envinst71 } );
    return ( temp1710.fun ( &temp1710.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1698 (   struct env76* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrConcat_81  s2780 ) {
    struct env1701 envinst1701 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1699 ) ( ( (  chars1707 ) ( (  s2780 ) ) ) ,  ( (struct envunion1702){ .fun = (  enum Unit_8  (*) (  struct env1701*  ,    struct Char_65  ) )lam1709 , .env =  envinst1701 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1696 (   struct env79* env ,    struct StrBuilder_73 *  builder2785 ,    struct StrView_27  s2787 ) {
    struct envunion80  temp1697 = ( (struct envunion80){ .fun = (  enum Unit_8  (*) (  struct env76*  ,    struct StrBuilder_73 *  ,    struct StrConcat_81  ) )write1698 , .env =  env->envinst76 } );
    return ( temp1697.fun ( &temp1697.env ,  (  builder2785 ) ,  ( ( StrConcat_81_StrConcat ) ( (  s2787 ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1712 (  ) {
    struct StrView_27  temp1713;
    return (  temp1713 );
}

static  struct StrView_27   or_dash_fail1711 (    struct Maybe_94  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_94  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_94_None_t ) {
        ( (  panic1215 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1712 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_94_Just_t ) {
            return ( dref1730 .stuff .Maybe_94_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_62   chars1716 (    struct StrBuilder_73  s2830 ) {
    return ( (  into_dash_iter702 ) ( ( (  as_dash_str1473 ) ( ( & (  s2830 ) ) ) ) ) );
}

static  struct StrViewIter_62   chars1715 (    struct StrBuilder_73 *  self1547 ) {
    return ( (  chars1716 ) ( ( * (  self1547 ) ) ) );
}

static  int32_t   fprintf_dash_char1717 (    FILE *  file765 ,    struct Char_65  c767 ) {
    struct CharDestructured_345  dref768 = ( (  destructure347 ) ( (  c767 ) ) );
    if ( dref768.tag == CharDestructured_345_Ref_t ) {
        return ( ( fprintf ) ( (  file765 ) ,  ( (  from_dash_string68 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32337 ) ( ( ( dref768 .stuff .CharDestructured_345_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref768 .stuff .CharDestructured_345_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref768.tag == CharDestructured_345_Scalar_t ) {
            if ( (  cmp179 ( ( ( dref768 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) , (  from_dash_integral174 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1718 = ( (  from_dash_string68 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp1718);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( ( fprintf ) ( (  file765 ) ,  ( (  from_dash_string68 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8153 ) ( ( ( dref768 .stuff .CharDestructured_345_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
}

static  bool   unreachable1719 (  ) {
    ( (  print1349 ) ( ( (  from_dash_string208 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1350 ) ( ) );
}

static  bool   try_dash_write_dash_contents1714 (    const char*  filename2976 ,    struct StrBuilder_73 *  contents2978 ) {
    FILE *  file2979 = ( ( fopen ) ( (  filename2976 ) ,  ( (  from_dash_charlike496 ) ( ( "w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null497 ) ( (  file2979 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_62  it2980 = ( (  chars1715 ) ( (  contents2978 ) ) );
    while ( ( true ) ) {
        struct Maybe_305  dref2981 = ( (  next689 ) ( ( & (  it2980 ) ) ) );
        if ( dref2981.tag == Maybe_305_None_t ) {
            ( ( fclose ) ( (  file2979 ) ) );
            return ( true );
        }
        else {
            if ( dref2981.tag == Maybe_305_Just_t ) {
                int32_t  chars_dash_written2983 = ( (  fprintf_dash_char1717 ) ( (  file2979 ) ,  ( dref2981 .stuff .Maybe_305_Just_s .field0 ) ) );
                if ( (  cmp166 ( (  chars_dash_written2983 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1719 ) ( ) );
}

static  enum Unit_8   free1720 (    struct StrBuilder_73 *  builder2822 ) {
    ( (  free605 ) ( ( & ( ( * (  builder2822 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1721 (    struct Maybe_94  m1261 ) {
    struct Maybe_94  dref1262 = (  m1261 );
    if ( dref1262.tag == Maybe_94_None_t ) {
        return ( false );
    }
    else {
        if ( dref1262.tag == Maybe_94_Just_t ) {
            return ( true );
        }
    }
}

static  struct Maybe_255   write_dash_to_dash_file1689 (   struct env119* env ,    struct TextBuf_114 *  self3780 ,    struct Maybe_94  altname3782 ) {
    struct Maybe_94  filename3783 = ( (  maybe1690 ) ( (  altname3782 ) ,  ( Maybe_94_Just ) ,  ( ( * (  self3780 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1691 ) ( (  filename3783 ) ) ) ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    enum CAllocator_10  al3784 = ( ( * (  self3780 ) ) .f_al );
    struct StrBuilder_73  temp1692 = ( (  mk1431 ) ( (  al3784 ) ) );
    struct StrBuilder_73 *  sb3785 = ( &temp1692 );
    struct RangeIter_162  temp1693 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  num_dash_lines1140 ) ( (  self3780 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1694 =  next165 (&temp1693);
        if (  __cond1694 .tag == 0 ) {
            break;
        }
        int32_t  ln3787 =  __cond1694 .stuff .Maybe_164_Just_s .field0;
        struct envunion120  temp1695 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env79*  ,    struct StrBuilder_73 *  ,    struct StrView_27  ) )writeln1696 , .env =  env->envinst79 } );
        ( temp1695.fun ( &temp1695.env ,  (  sb3785 ) ,  ( (  line1100 ) ( (  self3780 ) ,  (  ln3787 ) ) ) ) );
    }
    struct StrView_27  filename03788 = ( (  clone_dash_0462 ) ( ( (  or_dash_fail1711 ) ( (  filename3783 ) ,  ( (  from_dash_string208 ) ( ( "expect filename" ) ,  ( 15 ) ) ) ) ) ,  (  al3784 ) ) );
    bool  result3789 = ( (  try_dash_write_dash_contents1714 ) ( ( (  as_dash_const_dash_str508 ) ( (  filename03788 ) ) ) ,  (  sb3785 ) ) );
    ( (  free510 ) ( (  filename03788 ) ,  (  al3784 ) ) );
    ( (  free1720 ) ( (  sb3785 ) ) );
    if ( ( ! (  result3789 ) ) ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    if ( ( (  is_dash_just1721 ) ( (  altname3782 ) ) ) ) {
        struct Maybe_94  dref3790 = ( ( * (  self3780 ) ) .f_filename );
        if ( dref3790.tag == Maybe_94_Just_t ) {
            ( (  free510 ) ( ( dref3790 .stuff .Maybe_94_Just_s .field0 ) ,  (  al3784 ) ) );
        }
        else {
            if ( dref3790.tag == Maybe_94_None_t ) {
            }
        }
        (*  self3780 ) .f_filename = (  altname3782 );
    }
    return ( ( Maybe_255_Just ) ( ( (  num_dash_bytes1133 ) ( ( (  as_dash_str1473 ) ( (  sb3785 ) ) ) ) ) ) );
}

struct env1730 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1731 {
    enum Unit_8  (*fun) (  struct env1730*  ,    struct Char_65  );
    struct env1730 env;
};

static  enum Unit_8   for_dash_each1729 (    struct StrViewIter_62  iterable1075 ,   struct envunion1731  fun1077 ) {
    struct StrViewIter_62  temp1732 = ( (  into_dash_iter787 ) ( (  iterable1075 ) ) );
    struct StrViewIter_62 *  it1078 = ( &temp1732 );
    while ( ( true ) ) {
        struct Maybe_305  dref1079 = ( (  next689 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_305_Just_t ) {
                struct envunion1731  temp1733 = (  fun1077 );
                ( temp1733.fun ( &temp1733.env ,  ( dref1079 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1734 (   struct env1730* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1735 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1464 , .env =  env->envinst71 } );
    return ( temp1735.fun ( &temp1735.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1728 (   struct env77* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrView_27  s2780 ) {
    struct env1730 envinst1730 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1729 ) ( ( (  chars701 ) ( (  s2780 ) ) ) ,  ( (struct envunion1731){ .fun = (  enum Unit_8  (*) (  struct env1730*  ,    struct Char_65  ) )lam1734 , .env =  envinst1730 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1725 (   struct env89* env ,    struct StrView_27  s2836 ,    enum CAllocator_10  al2838 ) {
    struct StrBuilder_73  temp1726 = ( (  mk1431 ) ( (  al2838 ) ) );
    struct StrBuilder_73 *  sb2839 = ( &temp1726 );
    struct envunion90  temp1727 = ( (struct envunion90){ .fun = (  enum Unit_8  (*) (  struct env77*  ,    struct StrBuilder_73 *  ,    struct StrView_27  ) )write1728 , .env =  env->envinst77 } );
    ( temp1727.fun ( &temp1727.env ,  (  sb2839 ) ,  (  s2836 ) ) );
    struct envunion88  temp1736 = ( (struct envunion88){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1464 , .env =  env->envinst71 } );
    ( temp1736.fun ( &temp1736.env ,  (  sb2839 ) ,  ( (  nullchar505 ) ( ) ) ) );
    struct StrView_27  dynstr2840 = ( (  as_dash_str1473 ) ( (  sb2839 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2840 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub297 ( ( ( (  dynstr2840 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1723 (   struct env246* env ,    struct Editor_257 *  ed4413 ,    struct StrView_27  s4415 ) {
    ( (  reset_dash_msg1082 ) ( (  ed4413 ) ) );
    struct envunion247  temp1724 = ( (struct envunion247){ .fun = (  struct StrView_27  (*) (  struct env89*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1725 , .env =  env->envinst89 } );
    (*  ed4413 ) .f_msg = ( ( Maybe_94_Just ) ( ( temp1724.fun ( &temp1724.env ,  (  s4415 ) ,  ( ( * (  ed4413 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrCaseIter_1746 {
    enum {
        StrCaseIter_1746_StrCaseIter1_t,
        StrCaseIter_1746_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_62  field0;
        } StrCaseIter_1746_StrCaseIter1_s;
        struct {
            struct StrConcatIter_60  field0;
        } StrCaseIter_1746_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1746 StrCaseIter_1746_StrCaseIter1 (  struct StrViewIter_62  field0 ) {
    return ( struct StrCaseIter_1746 ) { .tag = StrCaseIter_1746_StrCaseIter1_t, .stuff = { .StrCaseIter_1746_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1746 StrCaseIter_1746_StrCaseIter2 (  struct StrConcatIter_60  field0 ) {
    return ( struct StrCaseIter_1746 ) { .tag = StrCaseIter_1746_StrCaseIter2_t, .stuff = { .StrCaseIter_1746_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1745 {
    struct StrViewIter_62  f_left;
    struct StrCaseIter_1746  f_right;
};

struct env1747 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1748 {
    enum Unit_8  (*fun) (  struct env1747*  ,    struct Char_65  );
    struct env1747 env;
};

static  struct StrConcatIter_1745   into_dash_iter1750 (    struct StrConcatIter_1745  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_305   next1752 (    struct StrCaseIter_1746 *  self1523 ) {
    struct StrCaseIter_1746 *  dref1524 = (  self1523 );
    if ( (* dref1524 ).tag == StrCaseIter_1746_StrCaseIter1_t ) {
        return ( (  next689 ) ( ( & ( (* dref1524 ) .stuff .StrCaseIter_1746_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1524 ).tag == StrCaseIter_1746_StrCaseIter2_t ) {
            return ( (  next687 ) ( ( & ( (* dref1524 ) .stuff .StrCaseIter_1746_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_305   next1751 (    struct StrConcatIter_1745 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next1752 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1744 (    struct StrConcatIter_1745  iterable1075 ,   struct envunion1748  fun1077 ) {
    struct StrConcatIter_1745  temp1749 = ( (  into_dash_iter1750 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1745 *  it1078 = ( &temp1749 );
    while ( ( true ) ) {
        struct Maybe_305  dref1079 = ( (  next1751 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_305_Just_t ) {
                struct envunion1748  temp1753 = (  fun1077 );
                ( temp1753.fun ( &temp1753.env ,  ( dref1079 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrCase_1757 {
    enum {
        StrCase_1757_StrCase1_t,
        StrCase_1757_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_1757_StrCase1_s;
        struct {
            struct StrConcat_647  field0;
        } StrCase_1757_StrCase2_s;
    } stuff;
};

static struct StrCase_1757 StrCase_1757_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_1757 ) { .tag = StrCase_1757_StrCase1_t, .stuff = { .StrCase_1757_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1757 StrCase_1757_StrCase2 (  struct StrConcat_647  field0 ) {
    return ( struct StrCase_1757 ) { .tag = StrCase_1757_StrCase2_t, .stuff = { .StrCase_1757_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1746   into_dash_iter1760 (    struct StrCase_1757  self1529 ) {
    struct StrCase_1757  dref1530 = (  self1529 );
    if ( dref1530.tag == StrCase_1757_StrCase1_t ) {
        return ( ( StrCaseIter_1746_StrCaseIter1 ) ( ( (  chars701 ) ( ( dref1530 .stuff .StrCase_1757_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1530.tag == StrCase_1757_StrCase2_t ) {
            return ( ( StrCaseIter_1746_StrCaseIter2 ) ( ( (  chars697 ) ( ( dref1530 .stuff .StrCase_1757_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1746   chars1759 (    struct StrCase_1757  self1541 ) {
    return ( (  into_dash_iter1760 ) ( (  self1541 ) ) );
}

static  struct StrCaseIter_1746   chars1756 (    struct Maybe_94  self1555 ) {
    struct StrCase_1757  temp1758;
    struct StrCase_1757  c1556 = (  temp1758 );
    struct Maybe_94  dref1557 = (  self1555 );
    if ( dref1557.tag == Maybe_94_None_t ) {
        c1556 = ( ( StrCase_1757_StrCase1 ) ( ( (  from_dash_string208 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1557.tag == Maybe_94_Just_t ) {
            c1556 = ( ( StrCase_1757_StrCase2 ) ( ( ( StrConcat_647_StrConcat ) ( ( ( StrConcat_648_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1557 .stuff .Maybe_94_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1759 ) ( (  c1556 ) ) );
}

static  struct StrConcatIter_1745   into_dash_iter1755 (    struct StrConcat_93  dref1505 ) {
    return ( (struct StrConcatIter_1745) { .f_left = ( (  chars701 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1756 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1745   chars1754 (    struct StrConcat_93  self1516 ) {
    return ( (  into_dash_iter1755 ) ( (  self1516 ) ) );
}

static  enum Unit_8   lam1761 (   struct env1747* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1762 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1464 , .env =  env->envinst71 } );
    return ( temp1762.fun ( &temp1762.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1743 (   struct env78* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrConcat_93  s2780 ) {
    struct env1747 envinst1747 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1744 ) ( ( (  chars1754 ) ( (  s2780 ) ) ) ,  ( (struct envunion1748){ .fun = (  enum Unit_8  (*) (  struct env1747*  ,    struct Char_65  ) )lam1761 , .env =  envinst1747 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1740 (   struct env91* env ,    struct StrConcat_93  s2836 ,    enum CAllocator_10  al2838 ) {
    struct StrBuilder_73  temp1741 = ( (  mk1431 ) ( (  al2838 ) ) );
    struct StrBuilder_73 *  sb2839 = ( &temp1741 );
    struct envunion92  temp1742 = ( (struct envunion92){ .fun = (  enum Unit_8  (*) (  struct env78*  ,    struct StrBuilder_73 *  ,    struct StrConcat_93  ) )write1743 , .env =  env->envinst78 } );
    ( temp1742.fun ( &temp1742.env ,  (  sb2839 ) ,  (  s2836 ) ) );
    struct envunion88  temp1763 = ( (struct envunion88){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1464 , .env =  env->envinst71 } );
    ( temp1763.fun ( &temp1763.env ,  (  sb2839 ) ,  ( (  nullchar505 ) ( ) ) ) );
    struct StrView_27  dynstr2840 = ( (  as_dash_str1473 ) ( (  sb2839 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2840 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub297 ( ( ( (  dynstr2840 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1738 (   struct env248* env ,    struct Editor_257 *  ed4413 ,    struct StrConcat_93  s4415 ) {
    ( (  reset_dash_msg1082 ) ( (  ed4413 ) ) );
    struct envunion249  temp1739 = ( (struct envunion249){ .fun = (  struct StrView_27  (*) (  struct env91*  ,    struct StrConcat_93  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1740 , .env =  env->envinst91 } );
    (*  ed4413 ) .f_msg = ( ( Maybe_94_Just ) ( ( temp1739.fun ( &temp1739.env ,  (  s4415 ) ,  ( ( * (  ed4413 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undefined1766 (  ) {
    enum Unit_8  temp1767;
    return (  temp1767 );
}

static  enum Unit_8   todo1765 (  ) {
    ( (  print1349 ) ( ( (  from_dash_string208 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1766 ) ( ) );
}

struct env1770 {
    bool (*  fun1127 )(    struct Char_65  );
};

struct envunion1771 {
    bool  (*fun) (  struct env1770*  ,    struct Char_65  ,    bool  );
    struct env1770 env;
};

static  bool   reduce1769 (    struct StrView_27  iterable1094 ,    bool  base1096 ,   struct envunion1771  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct StrViewIter_62  it1100 = ( (  into_dash_iter702 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_305  dref1101 = ( (  next689 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_305_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_305_Just_t ) {
                struct envunion1771  temp1772 = (  fun1098 );
                x1099 = ( temp1772.fun ( &temp1772.env ,  ( dref1101 .stuff .Maybe_305_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1773 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1773);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1774;
    return (  temp1774 );
}

static  bool   lam1775 (   struct env1770* env ,    struct Char_65  e1129 ,    bool  x1131 ) {
    return ( ( ( env->fun1127 ) ( (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1768 (    struct StrView_27  it1125 ,    bool (*  fun1127 )(    struct Char_65  ) ) {
    struct env1770 envinst1770 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1769 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1771){ .fun = (  bool  (*) (  struct env1770*  ,    struct Char_65  ,    bool  ) )lam1775 , .env =  envinst1770 } ) ) );
}

struct envunion1777 {
    enum Unit_8  (*fun) (  struct env246*  ,    struct Editor_257 *  ,    struct StrView_27  );
    struct env246 env;
};

static  enum Unit_8   run_dash_cmd1646 (   struct env253* env ,    struct Editor_257 *  ed4432 ,    struct StrView_27  s4434 ) {
    struct Scanner_1647  temp1648 = ( (  mk_dash_from_dash_strview1649 ) ( (  s4434 ) ) );
    struct Scanner_1647 *  sc4435 = ( &temp1648 );
    ( (  drop_dash_str_dash_while1650 ) ( (  sc4435 ) ,  (  is_dash_whitespace1343 ) ) );
    struct StrView_27  cmd4436 = ( (  take_dash_str_dash_while1667 ) ( (  sc4435 ) ,  (  is_dash_not_dash_whitespace1683 ) ) );
    ( (  drop_dash_str_dash_while1650 ) ( (  sc4435 ) ,  (  is_dash_whitespace1343 ) ) );
    if ( (  eq1684 ( (  cmd4436 ) , ( (  from_dash_charlike1231 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4432 ) .f_running = ( false );
    } else {
        if ( (  eq1684 ( (  cmd4436 ) , ( (  from_dash_string208 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1684 ( (  cmd4436 ) , ( (  from_dash_charlike1231 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4437 = ( (  take_dash_str_dash_while1667 ) ( (  sc4435 ) ,  (  is_dash_not_dash_whitespace1683 ) ) );
                struct Maybe_94  filename4438 = ( ( (  null1685 ) ( (  filename4437 ) ) ) ? ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) : ( ( Maybe_94_Just ) ( (  filename4437 ) ) ) );
                struct envunion254  temp1688 = ( (struct envunion254){ .fun = (  struct Maybe_255  (*) (  struct env119*  ,    struct TextBuf_114 *  ,    struct Maybe_94  ) )write_dash_to_dash_file1689 , .env =  env->envinst119 } );
                struct Maybe_255  write_dash_result4439 = ( temp1688.fun ( &temp1688.env ,  ( ( * ( (  pane1137 ) ( (  ed4432 ) ) ) ) .f_buf ) ,  (  filename4438 ) ) );
                struct Maybe_255  dref4440 = (  write_dash_result4439 );
                if ( dref4440.tag == Maybe_255_None_t ) {
                    if ( ( (  is_dash_none1691 ) ( (  filename4438 ) ) ) ) {
                        struct envunion256  temp1722 = ( (struct envunion256){ .fun = (  enum Unit_8  (*) (  struct env246*  ,    struct Editor_257 *  ,    struct StrView_27  ) )set_dash_msg1723 , .env =  env->envinst246 } );
                        ( temp1722.fun ( &temp1722.env ,  (  ed4432 ) ,  ( (  from_dash_string208 ) ( ( "could not save changes (!?)" ) ,  ( 27 ) ) ) ) );
                    } else {
                        struct envunion259  temp1737 = ( (struct envunion259){ .fun = (  enum Unit_8  (*) (  struct env248*  ,    struct Editor_257 *  ,    struct StrConcat_93  ) )set_dash_msg1738 , .env =  env->envinst248 } );
                        ( temp1737.fun ( &temp1737.env ,  (  ed4432 ) ,  ( ( StrConcat_93_StrConcat ) ( ( (  from_dash_string208 ) ( ( "could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4438 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4440.tag == Maybe_255_Just_t ) {
                        struct envunion260  temp1764 = ( (struct envunion260){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Editor_257 *  ,    struct StrConcat_86  ) )set_dash_msg1427 , .env =  env->envinst244 } );
                        ( temp1764.fun ( &temp1764.env ,  (  ed4432 ) ,  ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "written " ) ,  ( 8 ) ) ) ,  ( dref4440 .stuff .Maybe_255_Just_s .field0 ) ) ) ,  ( (  from_dash_string208 ) ( ( " bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq1684 ( (  cmd4436 ) , ( (  from_dash_charlike1231 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1765 ) ( ) );
                } else {
                    if ( (  eq1684 ( (  cmd4436 ) , ( (  from_dash_string208 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                    } else {
                        if ( ( (  all1768 ) ( (  cmd4436 ) ,  (  is_dash_digit986 ) ) ) ) {
                        } else {
                            struct envunion1777  temp1776 = ( (struct envunion1777){ .fun = (  enum Unit_8  (*) (  struct env246*  ,    struct Editor_257 *  ,    struct StrView_27  ) )set_dash_msg1723 , .env =  env->envinst246 } );
                            ( temp1776.fun ( &temp1776.env ,  (  ed4432 ) ,  ( (  from_dash_string208 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                        }
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1779 {
    enum Unit_8  (*fun) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  );
    struct env71 env;
};

static  struct Char_65   ascii_dash_char1780 (    char  c783 ) {
    return ( (  from_dash_u81050 ) ( ( (  ascii_dash_u8516 ) ( (  c783 ) ) ) ) );
}

static  struct Maybe_980   reduce1784 (    struct StrViewIter_62  iterable1094 ,    struct Maybe_980  base1096 ,    struct Maybe_980 (*  fun1098 )(    struct Char_65  ,    struct Maybe_980  ) ) {
    struct Maybe_980  x1099 = (  base1096 );
    struct StrViewIter_62  it1100 = ( (  into_dash_iter787 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_305  dref1101 = ( (  next689 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_305_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_305_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_305_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1785 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1785);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_980  temp1786;
    return (  temp1786 );
}

static  struct Maybe_980   sequence_dash_maybe1787 (    struct Char_65  e2490 ,    struct Maybe_980  b2492 ) {
    struct Maybe_980  dref2493 = (  b2492 );
    if ( dref2493.tag == Maybe_980_None_t ) {
        return ( (struct Maybe_980) { .tag = Maybe_980_None_t } );
    }
    else {
        if ( dref2493.tag == Maybe_980_Just_t ) {
            struct Maybe_164  dref2495 = ( (  parse_dash_digit1011 ) ( (  e2490 ) ) );
            if ( dref2495.tag == Maybe_164_None_t ) {
                return ( (struct Maybe_980) { .tag = Maybe_980_None_t } );
            }
            else {
                if ( dref2495.tag == Maybe_164_Just_t ) {
                    return ( ( Maybe_980_Just ) ( (  op_dash_add585 ( (  op_dash_mul294 ( ( dref2493 .stuff .Maybe_980_Just_s .field0 ) , (  from_dash_integral296 ( 10 ) ) ) ) , ( (  i32_dash_i641020 ) ( ( dref2495 .stuff .Maybe_164_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_980   parse_dash_int1783 (    struct StrView_27  s2487 ) {
    struct StrViewIter_62  cs2497 = ( (  chars701 ) ( (  s2487 ) ) );
    struct Maybe_305  dref2498 = ( (  head1346 ) ( (  cs2497 ) ) );
    if ( dref2498.tag == Maybe_305_Just_t ) {
        return ( (  reduce1784 ) ( (  cs2497 ) ,  ( ( Maybe_980_Just ) ( (  from_dash_integral296 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1787 ) ) );
    }
    else {
        if ( dref2498.tag == Maybe_305_None_t ) {
            return ( (struct Maybe_980) { .tag = Maybe_980_None_t } );
        }
    }
}

struct TakeWhile_1793 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1792 {
    struct TakeWhile_1793  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1792 Map_1792_Map (  struct TakeWhile_1793  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1792 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1792   into_dash_iter1795 (    struct Map_1792  self797 ) {
    return (  self797 );
}

static  struct Maybe_305   next1797 (    struct TakeWhile_1793 *  self965 ) {
    struct Maybe_305  mx966 = ( (  next689 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_305  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_305_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_305_Just ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
            }
        }
    }
}

static  struct Maybe_255   next1796 (    struct Map_1792 *  dref799 ) {
    struct Maybe_305  dref802 = ( (  next1797 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_305_Just_t ) {
            return ( ( Maybe_255_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_305_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1794 (    struct Map_1792  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1792  it1100 = ( (  into_dash_iter1795 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next1796 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1798 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1798);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1799;
    return (  temp1799 );
}

static  size_t   lam1800 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add319 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1791 (    struct Map_1792  it1111 ) {
    return ( (  reduce1794 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1800 ) ) );
}

static  struct TakeWhile_1793   into_dash_iter1802 (    struct TakeWhile_1793  self962 ) {
    return (  self962 );
}

static  struct Map_1792   map1801 (    struct TakeWhile_1793  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1793  it809 = ( (  into_dash_iter1802 ) ( (  iterable806 ) ) );
    return ( ( Map_1792_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1793   take_dash_while1803 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1793) { .f_it = ( (  into_dash_iter787 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1804 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1790 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1791 ) ( ( (  map1801 ) ( ( (  take_dash_while1803 ) ( ( (  chars701 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1804 ) ) ) ) );
    return ( (  byte_dash_substr519 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1789 (    struct Scanner_1647 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1790 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1534 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1133 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

struct TakeWhile_1809 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1808 {
    struct TakeWhile_1809  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1808 Map_1808_Map (  struct TakeWhile_1809  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1808 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1808   into_dash_iter1811 (    struct Map_1808  self797 ) {
    return (  self797 );
}

static  struct Maybe_305   next1813 (    struct TakeWhile_1809 *  self965 ) {
    struct Maybe_305  mx966 = ( (  next689 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_305  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_305_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_305_Just ) ( ( dref967 .stuff .Maybe_305_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
            }
        }
    }
}

static  struct Maybe_255   next1812 (    struct Map_1808 *  dref799 ) {
    struct Maybe_305  dref802 = ( (  next1813 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_305_Just_t ) {
            return ( ( Maybe_255_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_305_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1810 (    struct Map_1808  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1808  it1100 = ( (  into_dash_iter1811 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next1812 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1814 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1814);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1815;
    return (  temp1815 );
}

static  size_t   lam1816 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add319 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1807 (    struct Map_1808  it1111 ) {
    return ( (  reduce1810 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1816 ) ) );
}

static  struct TakeWhile_1809   into_dash_iter1818 (    struct TakeWhile_1809  self962 ) {
    return (  self962 );
}

static  struct Map_1808   map1817 (    struct TakeWhile_1809  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1809  it809 = ( (  into_dash_iter1818 ) ( (  iterable806 ) ) );
    return ( ( Map_1808_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1809   take_dash_while1819 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1809) { .f_it = ( (  into_dash_iter787 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1820 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1806 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1807 ) ( ( (  map1817 ) ( ( (  take_dash_while1819 ) ( ( (  chars701 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1820 ) ) ) ) );
    return ( (  byte_dash_substr519 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1805 (    struct Scanner_1647 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1806 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1534 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1133 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

static  bool   lam1821 (    struct Char_65  c4428 ) {
    return ( ! ( (  is_dash_whitespace1343 ) ( (  c4428 ) ) ) );
}

static  struct Theme_181 *   or_dash_else1822 (    struct Maybe_252  self1734 ,    struct Theme_181 *  alt1736 ) {
    struct Maybe_252  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_252_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_252_Just_t ) {
            return ( dref1737 .stuff .Maybe_252_Just_s .field0 );
        }
    }
}

struct SliceIter_1828 {
    struct Slice_201  f_slice;
    size_t  f_current_dash_offset;
};

struct env1829 {
    struct StrView_27  name3995;
    ;
};

struct envunion1830 {
    bool  (*fun) (  struct env1829*  ,    struct Tuple2_202  );
    struct env1829 env;
};

struct Filter_1827 {
    struct SliceIter_1828  f_og;
    struct envunion1830  f_fun;
};

struct Map_1826 {
    struct Filter_1827  field0;
    struct Theme_181 * (*  field1 )(    struct Tuple2_202  );
};

static struct Map_1826 Map_1826_Map (  struct Filter_1827  field0 ,  struct Theme_181 * (*  field1 )(    struct Tuple2_202  ) ) {
    return ( struct Map_1826 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1832 {
    enum {
        Maybe_1832_None_t,
        Maybe_1832_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_202  field0;
        } Maybe_1832_Just_s;
    } stuff;
};

static struct Maybe_1832 Maybe_1832_Just (  struct Tuple2_202  field0 ) {
    return ( struct Maybe_1832 ) { .tag = Maybe_1832_Just_t, .stuff = { .Maybe_1832_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_202 *   offset_dash_ptr1835 (    struct Tuple2_202 *  x338 ,    int64_t  count340 ) {
    struct Tuple2_202  temp1836;
    return ( (struct Tuple2_202 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1836 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1832   next1834 (    struct SliceIter_1828 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp298 ( (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1832) { .tag = Maybe_1832_None_t } );
    }
    struct Tuple2_202  elem1832 = ( * ( (  offset_dash_ptr1835 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1832_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_1832   next1833 (    struct Filter_1827 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_1832  dref835 = ( (  next1834 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_1832_None_t ) {
            return ( (struct Maybe_1832) { .tag = Maybe_1832_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_1832_Just_t ) {
                struct envunion1830  temp1837 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp1837.fun ( &temp1837.env ,  ( dref835 .stuff .Maybe_1832_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1832_Just ) ( ( dref835 .stuff .Maybe_1832_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1832  temp1838;
    return (  temp1838 );
}

static  struct Maybe_252   next1831 (    struct Map_1826 *  dref799 ) {
    struct Maybe_1832  dref802 = ( (  next1833 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_1832_None_t ) {
        return ( (struct Maybe_252) { .tag = Maybe_252_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_1832_Just_t ) {
            return ( ( Maybe_252_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_1832_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1826   into_dash_iter1840 (    struct Map_1826  self797 ) {
    return (  self797 );
}

static  struct Maybe_252   head1825 (    struct Map_1826  it1143 ) {
    struct Map_1826  temp1839 = ( (  into_dash_iter1840 ) ( (  it1143 ) ) );
    return ( (  next1831 ) ( ( &temp1839 ) ) );
}

static  struct Filter_1827   into_dash_iter1842 (    struct Filter_1827  self831 ) {
    return (  self831 );
}

static  struct Map_1826   map1841 (    struct Filter_1827  iterable806 ,    struct Theme_181 * (*  fun808 )(    struct Tuple2_202  ) ) {
    struct Filter_1827  it809 = ( (  into_dash_iter1842 ) ( (  iterable806 ) ) );
    return ( ( Map_1826_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct SliceIter_1828   into_dash_iter1844 (    struct Slice_201  self1824 ) {
    return ( (struct SliceIter_1828) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1827   filter1843 (    struct Slice_201  iterable839 ,   struct envunion1830  fun841 ) {
    struct SliceIter_1828  it842 = ( (  into_dash_iter1844 ) ( (  iterable839 ) ) );
    return ( (struct Filter_1827) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

struct Tuple2_1849 {
    struct Maybe_305  field0;
    struct Maybe_305  field1;
};

static struct Tuple2_1849 Tuple2_1849_Tuple2 (  struct Maybe_305  field0 ,  struct Maybe_305  field1 ) {
    return ( struct Tuple2_1849 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1846 (    struct StrView_27  s2417 ,    struct StrView_27  beg2419 ) {
    struct StrViewIter_62  temp1847 = ( (  chars701 ) ( (  s2417 ) ) );
    struct StrViewIter_62 *  scs2420 = ( &temp1847 );
    struct StrViewIter_62  temp1848 = ( (  chars701 ) ( (  beg2419 ) ) );
    struct StrViewIter_62 *  begcs2421 = ( &temp1848 );
    while ( ( true ) ) {
        struct Tuple2_1849  dref2422 = ( ( Tuple2_1849_Tuple2 ) ( ( (  next689 ) ( (  scs2420 ) ) ) ,  ( (  next689 ) ( (  begcs2421 ) ) ) ) );
        if ( dref2422 .field0.tag == Maybe_305_Just_t && dref2422 .field1.tag == Maybe_305_Just_t ) {
            if ( ( !  eq583 ( ( dref2422 .field0 .stuff .Maybe_305_Just_s .field0 ) , ( dref2422 .field1 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref2422 .field0.tag == Maybe_305_None_t && dref2422 .field1.tag == Maybe_305_Just_t ) {
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

static  bool   lam1845 (   struct env1829* env ,    struct Tuple2_202  dref3996 ) {
    return ( (  begins_dash_with1846 ) ( ( dref3996 .field0 ) ,  ( env->name3995 ) ) );
}

static  struct Theme_181 *   snd1850 (    struct Tuple2_202  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Maybe_252   match_dash_theme1824 (   struct env209* env ,    struct StrView_27  name3995 ) {
    if ( ( (  null1685 ) ( (  name3995 ) ) ) ) {
        return ( (struct Maybe_252) { .tag = Maybe_252_None_t } );
    }
    struct env1829 envinst1829 = {
        .name3995 =  name3995 ,
    };
    return ( (  head1825 ) ( ( (  map1841 ) ( ( (  filter1843 ) ( ( env->all_dash_themes3992 ) ,  ( (struct envunion1830){ .fun = (  bool  (*) (  struct env1829*  ,    struct Tuple2_202  ) )lam1845 , .env =  envinst1829 } ) ) ) ,  (  snd1850 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1782 (   struct env250* env ,    struct Editor_257 *  ed4418 ,    struct StrView_27  cmd4420 ) {
    struct Maybe_980  dref4421 = ( (  parse_dash_int1783 ) ( (  cmd4420 ) ) );
    if ( dref4421.tag == Maybe_980_Just_t ) {
        int32_t  line4423 = ( (  clamp1485 ) ( ( (  i64_dash_i321022 ) ( ( dref4421 .stuff .Maybe_980_Just_s .field0 ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  num_dash_lines1140 ) ( ( ( * ( (  pane1137 ) ( (  ed4418 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
        int32_t  line4424 = (  op_dash_sub173 ( (  line4423 ) , (  from_dash_integral67 ( 1 ) ) ) );
        ( (  set_dash_cursors1094 ) ( ( (  pane1137 ) ( (  ed4418 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4424 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_NoChanges ) ) );
    }
    else {
        if ( dref4421.tag == Maybe_980_None_t ) {
            struct Scanner_1647  temp1788 = ( (  mk_dash_from_dash_strview1649 ) ( (  cmd4420 ) ) );
            struct Scanner_1647 *  sc4425 = ( &temp1788 );
            struct StrView_27  cmd4426 = ( (  take_dash_str_dash_while1789 ) ( (  sc4425 ) ,  (  is_dash_alpha1338 ) ) );
            if ( (  eq1684 ( (  cmd4426 ) , ( (  from_dash_string208 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1650 ) ( (  sc4425 ) ,  (  is_dash_whitespace1343 ) ) );
                struct StrView_27  theme_dash_name4429 = ( (  take_dash_str_dash_while1805 ) ( (  sc4425 ) ,  (  lam1821 ) ) );
                struct envunion251  temp1823 = ( (struct envunion251){ .fun = (  struct Maybe_252  (*) (  struct env209*  ,    struct StrView_27  ) )match_dash_theme1824 , .env =  env->envinst209 } );
                (*  ed4418 ) .f_theme = ( (  or_dash_else1822 ) ( ( temp1823.fun ( &temp1823.env ,  (  theme_dash_name4429 ) ) ) ,  ( ( * (  ed4418 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_62   into_dash_iter1854 (    struct StrBuilder_73  self2833 ) {
    return ( (  chars1716 ) ( (  self2833 ) ) );
}

static  struct Maybe_305   head1852 (    struct StrBuilder_73  it1143 ) {
    struct StrViewIter_62  temp1853 = ( (  into_dash_iter1854 ) ( (  it1143 ) ) );
    return ( (  next689 ) ( ( &temp1853 ) ) );
}

static  bool   null1851 (    struct StrBuilder_73  it1152 ) {
    struct Maybe_305  dref1153 = ( (  head1852 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_305_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1860 (   struct env42* env ,    struct List_9 *  list2078 ,    size_t  i2080 ) {
    struct envunion43  temp1861 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range608 , .env =  env->envinst40 } );
    ( temp1861.fun ( &temp1861.env ,  (  list2078 ) ,  (  i2080 ) ,  (  op_dash_add319 ( (  i2080 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1858 (   struct env44* env ,    struct List_9 *  list2094 ) {
    if ( (  eq407 ( ( ( * (  list2094 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1215 ) ( ( (  from_dash_string208 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1859 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_9 *  ,    size_t  ) )remove1860 , .env =  env->envinst42 } );
    return ( temp1859.fun ( &temp1859.env ,  (  list2094 ) ,  (  op_dash_sub297 ( ( ( * (  list2094 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1856 (   struct env82* env ,    struct StrBuilder_73 *  sb2796 ) {
    struct envunion83  temp1857 = ( (struct envunion83){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_9 *  ) )pop1858 , .env =  env->envinst44 } );
    return ( temp1857.fun ( &temp1857.env ,  ( & ( ( * (  sb2796 ) ) .f_chars ) ) ) );
}

struct envunion1863 {
    enum Unit_8  (*fun) (  struct env250*  ,    struct Editor_257 *  ,    struct StrView_27  );
    struct env250 env;
};

struct env1865 {
    struct Editor_257 *  ed4492;
    ;
};

struct envunion1866 {
    enum Unit_8  (*fun) (  struct env1865*  ,    struct StrView_27  );
    struct env1865 env;
};

static  enum Unit_8   if_dash_just1864 (    struct Maybe_94  x1292 ,   struct envunion1866  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1866  temp1867 = (  fun1294 );
        ( temp1867.fun ( &temp1867.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1868 (   struct env1865* env ,    struct StrView_27  st4509 ) {
    ( (  free510 ) ( (  st4509 ) ,  ( ( * ( env->ed4492 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   live_dash_search1870 (    struct Editor_257 *  ed4444 ,    struct Pos_26  begin_dash_pos4446 ,    struct StrView_27  query4448 ) {
    if ( ( ! ( (  null1685 ) ( (  query4448 ) ) ) ) ) {
        struct Maybe_1509  dref4449 = ( (  search_dash_from1510 ) ( ( (  pane1137 ) ( (  ed4444 ) ) ) ,  (  begin_dash_pos4446 ) ,  (  query4448 ) ) );
        if ( dref4449.tag == Maybe_1509_Just_t ) {
            ( (  set_dash_cursors1094 ) ( ( (  pane1137 ) ( (  ed4444 ) ) ) ,  ( dref4449 .stuff .Maybe_1509_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4449 .stuff .Maybe_1509_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1095_NoChanges ) ) );
        }
        else {
            if ( dref4449.tag == Maybe_1509_None_t ) {
                ( (  set_dash_cursors1094 ) ( ( (  pane1137 ) ( (  ed4444 ) ) ) ,  (  begin_dash_pos4446 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors1094 ) ( ( (  pane1137 ) ( (  ed4444 ) ) ) ,  (  begin_dash_pos4446 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1872 {
    enum Unit_8  (*fun) (  struct env82*  ,    struct StrBuilder_73 *  );
    struct env82 env;
};

static  enum Unit_8   handle_dash_key1090 (   struct env272* env ,    struct Editor_257 *  ed4492 ,    struct Key_276  key4494 ) {
    struct EditorMode_258 *  dref4495 = ( & ( ( * (  ed4492 ) ) .f_mode ) );
    if ( (* dref4495 ).tag == EditorMode_258_Normal_t ) {
        enum Mode_229  dref4496 = ( ( ( * (  ed4492 ) ) .f_pane ) .f_mode );
        switch (  dref4496 ) {
            case Mode_229_Normal : {
                struct envunion275  temp1091 = ( (struct envunion275){ .fun = (  enum Unit_8  (*) (  struct env261*  ,    struct Editor_257 *  ,    struct Key_276  ) )handle_dash_normal_dash_key1092 , .env =  env->envinst261 } );
                ( temp1091.fun ( &temp1091.env ,  (  ed4492 ) ,  (  key4494 ) ) );
                break;
            }
            case Mode_229_Select : {
                struct envunion1632  temp1631 = ( (struct envunion1632){ .fun = (  enum Unit_8  (*) (  struct env261*  ,    struct Editor_257 *  ,    struct Key_276  ) )handle_dash_normal_dash_key1092 , .env =  env->envinst261 } );
                ( temp1631.fun ( &temp1631.env ,  (  ed4492 ) ,  (  key4494 ) ) );
                break;
            }
            case Mode_229_Insert : {
                struct Key_276  dref4497 = (  key4494 );
                if ( dref4497.tag == Key_276_Escape_t ) {
                    ( (  set_dash_mode1146 ) ( ( (  pane1137 ) ( (  ed4492 ) ) ) ,  ( Mode_229_Normal ) ) );
                }
                else {
                    if ( dref4497.tag == Key_276_Enter_t ) {
                        int32_t  indent4498 = ( (  indent_dash_at_dash_line1149 ) ( ( (  pane1137 ) ( (  ed4492 ) ) ) ,  ( ( ( * ( (  pane1137 ) ( (  ed4492 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion1634  temp1633 = ( (struct envunion1634){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_228 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1169 , .env =  env->envinst213 } );
                        ( temp1633.fun ( &temp1633.env ,  ( (  pane1137 ) ( (  ed4492 ) ) ) ,  ( (  from_dash_charlike1231 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1138 ) ( ( (  pane1137 ) ( (  ed4492 ) ) ) ) );
                        struct envunion278  temp1635 = ( (struct envunion278){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Pane_228 *  ,    int32_t  ) )indent_dash_at_dash_current1308 , .env =  env->envinst235 } );
                        ( temp1635.fun ( &temp1635.env ,  ( (  pane1137 ) ( (  ed4492 ) ) ) ,  (  indent4498 ) ) );
                    }
                    else {
                        if ( dref4497.tag == Key_276_Backspace_t ) {
                            struct envunion274  temp1636 = ( (struct envunion274){ .fun = (  enum Unit_8  (*) (  struct env216*  ,    struct Pane_228 *  ) )backspace1637 , .env =  env->envinst216 } );
                            ( temp1636.fun ( &temp1636.env ,  ( (  pane1137 ) ( (  ed4492 ) ) ) ) );
                        }
                        else {
                            if ( dref4497.tag == Key_276_Char_t ) {
                                struct Array_1640  temp1642 = ( (  from_dash_listlike1643 ) ( ( (struct Array_1640) { ._arr = { ( dref4497 .stuff .Key_276_Char_s .field0 ) } } ) ) );
                                struct StrView_27  s4500 = ( (  from_dash_ascii_dash_slice977 ) ( ( (  as_dash_slice1639 ) ( ( &temp1642 ) ) ) ) );
                                struct envunion280  temp1644 = ( (struct envunion280){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_228 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1169 , .env =  env->envinst213 } );
                                ( temp1644.fun ( &temp1644.env ,  ( (  pane1137 ) ( (  ed4492 ) ) ) ,  (  s4500 ) ) );
                                ( (  move_dash_right1138 ) ( ( (  pane1137 ) ( (  ed4492 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4495 ).tag == EditorMode_258_Cmd_t ) {
            struct Key_276  dref4503 = (  key4494 );
            if ( dref4503.tag == Key_276_Escape_t ) {
                ( (  set_dash_cursors1094 ) ( ( (  pane1137 ) ( (  ed4492 ) ) ) ,  ( (* dref4495 ) .stuff .EditorMode_258_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_UpdateVI ) ) );
                (*  ed4492 ) .f_mode = ( (struct EditorMode_258) { .tag = EditorMode_258_Normal_t } );
                (*  ed4492 ) .f_theme = ( ( * (  ed4492 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4503.tag == Key_276_Enter_t ) {
                    struct envunion277  temp1645 = ( (struct envunion277){ .fun = (  enum Unit_8  (*) (  struct env253*  ,    struct Editor_257 *  ,    struct StrView_27  ) )run_dash_cmd1646 , .env =  env->envinst253 } );
                    ( temp1645.fun ( &temp1645.env ,  (  ed4492 ) ,  ( (  as_dash_str1473 ) ( ( & ( (* dref4495 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1720 ) ( ( & ( (* dref4495 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors1094 ) ( ( (  pane1137 ) ( (  ed4492 ) ) ) ,  ( ( * ( (  pane1137 ) ( (  ed4492 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_UpdateVI ) ) );
                    (*  ed4492 ) .f_mode = ( (struct EditorMode_258) { .tag = EditorMode_258_Normal_t } );
                    (*  ed4492 ) .f_og_dash_theme = ( ( * (  ed4492 ) ) .f_theme );
                }
                else {
                    if ( dref4503.tag == Key_276_Char_t ) {
                        struct envunion1779  temp1778 = ( (struct envunion1779){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1464 , .env =  env->envinst71 } );
                        ( temp1778.fun ( &temp1778.env ,  ( & ( (* dref4495 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1780 ) ( ( dref4503 .stuff .Key_276_Char_s .field0 ) ) ) ) );
                        struct envunion273  temp1781 = ( (struct envunion273){ .fun = (  enum Unit_8  (*) (  struct env250*  ,    struct Editor_257 *  ,    struct StrView_27  ) )live_dash_cmd1782 , .env =  env->envinst250 } );
                        ( temp1781.fun ( &temp1781.env ,  (  ed4492 ) ,  ( (  as_dash_str1473 ) ( ( & ( (* dref4495 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4503.tag == Key_276_Backspace_t ) {
                            if ( ( ! ( (  null1851 ) ( ( (* dref4495 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion281  temp1855 = ( (struct envunion281){ .fun = (  enum Unit_8  (*) (  struct env82*  ,    struct StrBuilder_73 *  ) )pop1856 , .env =  env->envinst82 } );
                                ( temp1855.fun ( &temp1855.env ,  ( & ( (* dref4495 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1863  temp1862 = ( (struct envunion1863){ .fun = (  enum Unit_8  (*) (  struct env250*  ,    struct Editor_257 *  ,    struct StrView_27  ) )live_dash_cmd1782 , .env =  env->envinst250 } );
                            ( temp1862.fun ( &temp1862.env ,  (  ed4492 ) ,  ( (  as_dash_str1473 ) ( ( & ( (* dref4495 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4495 ).tag == EditorMode_258_Search_t ) {
                struct Key_276  dref4507 = (  key4494 );
                if ( dref4507.tag == Key_276_Escape_t ) {
                    ( (  set_dash_cursors1094 ) ( ( (  pane1137 ) ( (  ed4492 ) ) ) ,  ( (* dref4495 ) .stuff .EditorMode_258_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1095_UpdateVI ) ) );
                    (*  ed4492 ) .f_mode = ( (struct EditorMode_258) { .tag = EditorMode_258_Normal_t } );
                }
                else {
                    if ( dref4507.tag == Key_276_Enter_t ) {
                        ( (  set_dash_cursors1094 ) ( ( (  pane1137 ) ( (  ed4492 ) ) ) ,  ( ( * ( (  pane1137 ) ( (  ed4492 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1137 ) ( (  ed4492 ) ) ) ) .f_sel ) ,  ( CursorMovement_1095_UpdateVI ) ) );
                        struct env1865 envinst1865 = {
                            .ed4492 =  ed4492 ,
                        };
                        ( (  if_dash_just1864 ) ( ( ( * (  ed4492 ) ) .f_search_dash_term ) ,  ( (struct envunion1866){ .fun = (  enum Unit_8  (*) (  struct env1865*  ,    struct StrView_27  ) )lam1868 , .env =  envinst1865 } ) ) );
                        if ( ( ! ( (  null1851 ) ( ( (* dref4495 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4510 = ( ( * ( (  pane1137 ) ( (  ed4492 ) ) ) ) .f_cursor );
                            struct Pos_26  from4511 = ( (  or_dash_else1403 ) ( ( ( * ( (  pane1137 ) ( (  ed4492 ) ) ) ) .f_sel ) ,  (  to4510 ) ) );
                            (*  ed4492 ) .f_search_dash_term = ( ( Maybe_94_Just ) ( ( (  as_dash_str1473 ) ( ( & ( (* dref4495 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4492 ) .f_search_dash_term = ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
                        }
                        (*  ed4492 ) .f_mode = ( (struct EditorMode_258) { .tag = EditorMode_258_Normal_t } );
                    }
                    else {
                        if ( dref4507.tag == Key_276_Char_t ) {
                            struct envunion279  temp1869 = ( (struct envunion279){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1464 , .env =  env->envinst71 } );
                            ( temp1869.fun ( &temp1869.env ,  ( & ( (* dref4495 ) .stuff .EditorMode_258_Search_s .field1 ) ) ,  ( (  ascii_dash_char1780 ) ( ( dref4507 .stuff .Key_276_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1870 ) ( (  ed4492 ) ,  ( (* dref4495 ) .stuff .EditorMode_258_Search_s .field0 ) ,  ( (  as_dash_str1473 ) ( ( & ( (* dref4495 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4507.tag == Key_276_Backspace_t ) {
                                if ( ( ! ( (  null1851 ) ( ( (* dref4495 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1872  temp1871 = ( (struct envunion1872){ .fun = (  enum Unit_8  (*) (  struct env82*  ,    struct StrBuilder_73 *  ) )pop1856 , .env =  env->envinst82 } );
                                    ( temp1871.fun ( &temp1871.env ,  ( & ( (* dref4495 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1870 ) ( (  ed4492 ) ,  ( (* dref4495 ) .stuff .EditorMode_258_Search_s .field0 ) ,  ( (  as_dash_str1473 ) ( ( & ( (* dref4495 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1765 ) ( ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1874 {
    bool  (*fun) (  struct env104*  ,    struct Screen_284 *  );
    struct env104 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1875 (   struct env104* env ,    struct Screen_284 *  screen3518 ) {
    struct Tui_100 *  tui3519 = ( ( * (  screen3518 ) ) .f_tui );
    struct envunion105  temp1876 = ( (struct envunion105){ .fun = (  bool  (*) (  struct env97*  ,    struct Tui_100 *  ) )update_dash_dimensions897 , .env =  env->envinst97 } );
    bool  updated_dash_dimensions3520 = ( temp1876.fun ( &temp1876.env ,  (  tui3519 ) ) );
    if ( ( ! (  updated_dash_dimensions3520 ) ) ) {
        return ( false );
    }
    (*  screen3518 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3521 = ( ( * ( ( * (  screen3518 ) ) .f_tui ) ) .f_width );
    uint32_t  h3522 = ( ( * ( ( * (  screen3518 ) ) .f_tui ) ) .f_height );
    size_t  nusz3523 = ( (  u32_dash_size846 ) ( (  op_dash_mul176 ( (  w3521 ) , (  h3522 ) ) ) ) );
    if ( (  cmp298 ( (  nusz3523 ) , ( ( ( * (  screen3518 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_284  nuscreen3524 = ( (  mk_dash_screen840 ) ( (  tui3519 ) ,  ( ( * (  screen3518 ) ) .f_al ) ) );
    (*  screen3518 ) .f_current = ( (  nuscreen3524 ) .f_current );
    (*  screen3518 ) .f_previous = ( (  nuscreen3524 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1877 (    struct Tui_100 *  tui3445 ) {
    bool  redraw3446 = ( ( * (  tui3445 ) ) .f_should_dash_redraw );
    (*  tui3445 ) .f_should_dash_redraw = ( false );
    return (  redraw3446 );
}

struct env1881 {
    ;
    ;
    ;
    struct Slice_285  s1907;
    struct Cell_286 (*  fun1909 )(    struct Cell_286  );
};

struct envunion1882 {
    enum Unit_8  (*fun) (  struct env1881*  ,    int32_t  );
    struct env1881 env;
};

static  enum Unit_8   for_dash_each1880 (    struct Range_159  iterable1075 ,   struct envunion1882  fun1077 ) {
    struct RangeIter_162  temp1883 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp1883 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion1882  temp1884 = (  fun1077 );
                ( temp1884.fun ( &temp1884.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1885 (   struct env1881* env ,    int32_t  i1911 ) {
    return ( (  set861 ) ( ( env->s1907 ) ,  ( (  i32_dash_size420 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get865 ( ( env->s1907 ) , ( (  i32_dash_size420 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1879 (    struct Slice_285  s1907 ,    struct Cell_286 (*  fun1909 )(    struct Cell_286  ) ) {
    struct env1881 envinst1881 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each1880 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_i32337 ) ( (  op_dash_sub297 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1882){ .fun = (  enum Unit_8  (*) (  struct env1881*  ,    int32_t  ) )lam1885 , .env =  envinst1881 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_286   lam1886 (    struct Cell_286  dref3482 ) {
    return ( (  default_dash_cell873 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1878 (    struct Screen_284 *  screen3481 ) {
    ( (  map1879 ) ( ( ( * (  screen3481 ) ) .f_current ) ,  (  lam1886 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1887 (    struct Screen_284 *  screen3527 ,    struct Color_147  c3529 ) {
    (*  screen3527 ) .f_default_dash_fg = (  c3529 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1888 (    struct Screen_284 *  screen3532 ,    struct Color_147  c3534 ) {
    (*  screen3532 ) .f_default_dash_bg = (  c3534 );
    return ( Unit_8_Unit );
}

static  int32_t   cast1892 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321891 (    uint32_t  x661 ) {
    return ( (  cast1892 ) ( (  x661 ) ) );
}

struct Maybe_1897 {
    enum {
        Maybe_1897_None_t,
        Maybe_1897_Just_t,
    } tag;
    union {
        struct {
            struct Cell_286 *  field0;
        } Maybe_1897_Just_s;
    } stuff;
};

static struct Maybe_1897 Maybe_1897_Just (  struct Cell_286 *  field0 ) {
    return ( struct Maybe_1897 ) { .tag = Maybe_1897_Just_t, .stuff = { .Maybe_1897_Just_s = { .field0 = field0 } } };
};

static  struct Cell_286 *   undefined1898 (  ) {
    struct Cell_286 *  temp1899;
    return (  temp1899 );
}

static  struct Cell_286 *   or_dash_fail1896 (    struct Maybe_1897  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_1897  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1897_None_t ) {
        ( (  panic1215 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1898 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1897_Just_t ) {
            return ( dref1730 .stuff .Maybe_1897_Just_s .field0 );
        }
    }
}

static  struct Maybe_1897   get_dash_cell_dash_ptr1900 (    struct Screen_284 *  screen3548 ,    int32_t  x3550 ,    int32_t  y3552 ) {
    int32_t  w3553 = ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3548 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  x3550 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  x3550 ) , (  w3553 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1897) { .tag = Maybe_1897_None_t } );
    }
    if ( ( (  cmp166 ( (  y3552 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3552 ) , ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3548 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1897) { .tag = Maybe_1897_None_t } );
    }
    size_t  i3554 = ( (  i32_dash_size420 ) ( (  op_dash_add168 ( (  op_dash_mul1541 ( (  y3552 ) , (  w3553 ) ) ) , (  x3550 ) ) ) ) );
    return ( ( Maybe_1897_Just ) ( ( (  get_dash_ptr862 ) ( ( ( * (  screen3548 ) ) .f_current ) ,  (  i3554 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1889 (    struct Screen_284 *  screen3557 ) {
    struct RangeIter_162  temp1890 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3557 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1893 =  next165 (&temp1890);
        if (  __cond1893 .tag == 0 ) {
            break;
        }
        int32_t  y3559 =  __cond1893 .stuff .Maybe_164_Just_s .field0;
        struct RangeIter_162  temp1894 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3557 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_164  __cond1895 =  next165 (&temp1894);
            if (  __cond1895 .tag == 0 ) {
                break;
            }
            int32_t  x3561 =  __cond1895 .stuff .Maybe_164_Just_s .field0;
            struct Cell_286 *  cell3562 = ( (  or_dash_fail1896 ) ( ( (  get_dash_cell_dash_ptr1900 ) ( (  screen3557 ) ,  (  x3561 ) ,  (  y3559 ) ) ) ,  ( (  from_dash_string208 ) ( ( "no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3562 ) .f_bg = ( ( * (  screen3557 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1902 {
    enum Unit_8  (*fun) (  struct env282*  ,    struct Screen_284 *  ,    struct Editor_257 *  );
    struct env282 env;
};

static  int32_t   screen_dash_width1907 (    struct ScreenDims_287  sd4074 ) {
    return (  op_dash_add168 ( (  op_dash_sub173 ( ( (  sd4074 ) .f_to_dash_sx ) , ( (  sd4074 ) .f_from_dash_sx ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1908 (    struct ScreenDims_287  sd4077 ) {
    return (  op_dash_add168 ( (  op_dash_sub173 ( ( (  sd4077 ) .f_to_dash_sy ) , ( (  sd4077 ) .f_from_dash_sy ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1906 (    struct Pane_228 *  pane4080 ,    struct ScreenDims_287  sd4082 ) {
    struct Pos_26  cur4083 = ( ( * (  pane4080 ) ) .f_cursor );
    int32_t  cur_dash_sx4084 = ( (  pos_dash_vi1098 ) ( ( ( * (  pane4080 ) ) .f_buf ) ,  (  cur4083 ) ) );
    struct ScreenCursorOffset_230  sc_dash_off4085 = ( ( * (  pane4080 ) ) .f_sc_dash_off );
    int32_t  sw4086 = (  op_dash_sub173 ( ( (  screen_dash_width1907 ) ( (  sd4082 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
    int32_t  sh4087 = (  op_dash_sub173 ( ( (  screen_dash_height1908 ) ( (  sd4082 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
    int32_t  margin4088 = (  from_dash_integral67 ( 5 ) );
    int32_t  csi4089 = ( (  pos_dash_vi1098 ) ( ( ( * (  pane4080 ) ) .f_buf ) ,  (  cur4083 ) ) );
    int32_t  csx4090 = (  op_dash_sub173 ( (  csi4089 ) , ( (  sc_dash_off4085 ) .f_screen_dash_left ) ) );
    int32_t  csy4091 = (  op_dash_sub173 ( ( (  cur4083 ) .f_line ) , ( (  sc_dash_off4085 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4092 = ( (  sc_dash_off4085 ) .f_screen_dash_left );
    if ( (  cmp166 ( (  csx4090 ) , (  margin4088 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4092 = (  op_dash_sub173 ( (  csi4089 ) , (  margin4088 ) ) );
    } else {
        if ( (  cmp166 ( (  csx4090 ) , (  op_dash_sub173 ( (  sw4086 ) , (  margin4088 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4092 = (  op_dash_add168 ( (  op_dash_sub173 ( (  csi4089 ) , (  sw4086 ) ) ) , (  margin4088 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4093 = ( (  max1113 ) ( (  nu_dash_screen_dash_left4092 ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4094 = ( (  sc_dash_off4085 ) .f_screen_dash_top );
    if ( (  cmp166 ( (  csy4091 ) , (  margin4088 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4094 = (  op_dash_sub173 ( ( (  cur4083 ) .f_line ) , (  margin4088 ) ) );
    } else {
        if ( (  cmp166 ( (  csy4091 ) , (  op_dash_sub173 ( (  sh4087 ) , (  margin4088 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4094 = (  op_dash_add168 ( (  op_dash_sub173 ( ( (  cur4083 ) .f_line ) , (  sh4087 ) ) ) , (  margin4088 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4095 = ( (  max1113 ) ( (  nu_dash_screen_dash_top4094 ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    (*  pane4080 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_230) { .f_screen_dash_top = (  nu_dash_screen_dash_top4095 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4093 ) } );
    return ( Unit_8_Unit );
}

struct IntStrIter_1910 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1910   into_dash_iter1912 (    struct IntStrIter_1910  self1426 ) {
    return (  self1426 );
}

struct env1916 {
    int32_t  base1211;
    ;
};

struct envunion1917 {
    int32_t  (*fun) (  struct env1916*  ,    int32_t  ,    int32_t  );
    struct env1916 env;
};

static  int32_t   reduce1915 (    struct Range_159  iterable1094 ,    int32_t  base1096 ,   struct envunion1917  fun1098 ) {
    int32_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1917  temp1918 = (  fun1098 );
                x1099 = ( temp1918.fun ( &temp1918.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1919 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1919);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1920;
    return (  temp1920 );
}

static  int32_t   lam1921 (   struct env1916* env ,    int32_t  item1215 ,    int32_t  x1217 ) {
    return (  op_dash_mul1541 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  int32_t   pow1914 (    int32_t  base1211 ,    int32_t  p1213 ) {
    struct env1916 envinst1916 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1915 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ,  ( (struct envunion1917){ .fun = (  int32_t  (*) (  struct env1916*  ,    int32_t  ,    int32_t  ) )lam1921 , .env =  envinst1916 } ) ) );
}

static  struct Maybe_305   next1913 (    struct IntStrIter_1910 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_305_Just ) ( ( (  from_dash_charlike354 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    int32_t  trim_dash_down1430 = ( (  pow1914 ) ( (  from_dash_integral67 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    int32_t  upper1431 = (  op_dash_div1540 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    int32_t  upper_dash_mask1432 = (  op_dash_mul1541 ( (  op_dash_div1540 ( (  upper1431 ) , (  from_dash_integral67 ( 10 ) ) ) ) , (  from_dash_integral67 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast312 ) ( (  op_dash_sub173 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81050 ) ( (  op_dash_add946 ( (  digit1433 ) , (  from_dash_integral316 ( 48 ) ) ) ) ) );
    return ( ( Maybe_305_Just ) ( (  digit_dash_char1434 ) ) );
}

static  size_t   reduce1911 (    struct IntStrIter_1910  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct IntStrIter_1910  it1100 = ( (  into_dash_iter1912 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_305  dref1101 = ( (  next1913 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_305_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_305_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_305_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1922 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1922);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1923;
    return (  temp1923 );
}

static  size_t   lam1924 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add319 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1909 (    struct IntStrIter_1910  it1105 ) {
    return ( (  reduce1911 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1924 ) ) );
}

static  int32_t   count_dash_digits1927 (    int32_t  self1437 ) {
    if ( (  eq526 ( (  self1437 ) , (  from_dash_integral67 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp166 ( (  self1437 ) , (  from_dash_integral67 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div1540 ( (  self1437 ) , (  from_dash_integral67 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1910   int_dash_iter1926 (    int32_t  int1441 ) {
    if ( (  cmp166 ( (  int1441 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1910) { .f_int = (  op_dash_neg814 ( (  int1441 ) ) ) , .f_len = ( (  count_dash_digits1927 ) ( (  op_dash_neg814 ( (  int1441 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1910) { .f_int = (  int1441 ) , .f_len = ( (  count_dash_digits1927 ) ( (  int1441 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1910   chars1925 (    int32_t  self1450 ) {
    return ( (  int_dash_iter1926 ) ( (  self1450 ) ) );
}

static  enum Unit_8   set_dash_screen_dash_colors1931 (    struct Screen_284 *  screen3537 ,    struct Color_147  fg3539 ,    struct Color_147  bg3541 ) {
    (*  screen3537 ) .f_default_dash_fg = (  fg3539 );
    (*  screen3537 ) .f_default_dash_bg = (  bg3541 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors1930 (    struct Screen_284 *  screen4098 ,    struct Colors_182  colors4100 ) {
    ( (  set_dash_screen_dash_colors1931 ) ( (  screen4098 ) ,  ( (  colors4100 ) .f_fg ) ,  ( (  colors4100 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

struct Map_1934 {
    struct IntStrIter_1910  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1934 Map_1934_Map (  struct IntStrIter_1910  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1934 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1934   into_dash_iter1936 (    struct Map_1934  self797 ) {
    return (  self797 );
}

static  struct Maybe_164   next1937 (    struct Map_1934 *  dref799 ) {
    struct Maybe_305  dref802 = ( (  next1913 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_305_None_t ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_305_Just_t ) {
            return ( ( Maybe_164_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_305_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1935 (    struct Map_1934  iterable1094 ,    int32_t  base1096 ,    int32_t (*  fun1098 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1099 = (  base1096 );
    struct Map_1934  it1100 = ( (  into_dash_iter1936 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next1937 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1938 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1938);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1939;
    return (  temp1939 );
}

static  int32_t   lam1940 (    int32_t  v1113 ,    int32_t  s1115 ) {
    return (  op_dash_add168 ( (  v1113 ) , (  s1115 ) ) );
}

static  int32_t   sum1933 (    struct Map_1934  it1111 ) {
    return ( (  reduce1935 ) ( (  it1111 ) ,  (  from_dash_integral67 ( 0 ) ) ,  (  lam1940 ) ) );
}

static  struct Map_1934   map1941 (    struct IntStrIter_1910  iterable806 ,    int32_t (*  fun808 )(    struct Char_65  ) ) {
    struct IntStrIter_1910  it809 = ( (  into_dash_iter1912 ) ( (  iterable806 ) ) );
    return ( ( Map_1934_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  enum Unit_8   put_dash_char1945 (    struct Screen_284 *  screen3565 ,    struct Char_65  c3567 ,    int32_t  x3569 ,    int32_t  y3571 ) {
    int32_t  w3572 = ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3565 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp166 ( (  x3569 ) , (  w3572 ) ) != 0 ) || (  cmp166 ( (  y3571 ) , ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3565 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp166 ( (  x3569 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) || (  cmp166 ( (  y3571 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3573 = ( (  i32_dash_size420 ) ( (  op_dash_add168 ( (  op_dash_mul1541 ( (  y3571 ) , (  w3572 ) ) ) , (  x3569 ) ) ) ) );
    struct Color_147  fg3574 = ( ( * (  screen3565 ) ) .f_default_dash_fg );
    struct Color_147  bg3575 = ( ( * (  screen3565 ) ) .f_default_dash_bg );
    struct Char_65  c3576 = (  c3567 );
    int32_t  char_dash_width3577 = ( (  wcwidth1114 ) ( (  c3576 ) ) );
    if ( ( (  cmp166 ( (  x3569 ) , (  from_dash_integral67 ( 0 ) ) ) == 2 ) && (  cmp166 ( ( (  elem_dash_get865 ( ( ( * (  screen3565 ) ) .f_current ) , (  op_dash_sub297 ( (  i3573 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral67 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_286  pc3578 = (  elem_dash_get865 ( ( ( * (  screen3565 ) ) .f_current ) , (  op_dash_sub297 ( (  i3573 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set861 ) ( ( ( * (  screen3565 ) ) .f_current ) ,  (  op_dash_sub297 ( (  i3573 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_286) { .f_c = ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3578 ) .f_fg ) , .f_bg = ( (  pc3578 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral67 ( 1 ) ) } ) ) );
    }
    ( (  set861 ) ( ( ( * (  screen3565 ) ) .f_current ) ,  (  i3573 ) ,  ( (struct Cell_286) { .f_c = (  c3576 ) , .f_fg = (  fg3574 ) , .f_bg = (  bg3575 ) , .f_char_dash_width = (  char_dash_width3577 ) } ) ) );
    struct RangeIter_162  temp1946 =  into_dash_iter163 ( ( (  to172 ) ( (  op_dash_add168 ( (  x3569 ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  ( (  min636 ) ( (  op_dash_sub173 ( (  op_dash_add168 ( (  x3569 ) , (  char_dash_width3577 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  w3572 ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1947 =  next165 (&temp1946);
        if (  __cond1947 .tag == 0 ) {
            break;
        }
        int32_t  xx3580 =  __cond1947 .stuff .Maybe_164_Just_s .field0;
        size_t  i3581 = ( (  i32_dash_size420 ) ( (  op_dash_add168 ( (  op_dash_mul1541 ( (  y3571 ) , (  w3572 ) ) ) , (  xx3580 ) ) ) ) );
        ( (  set861 ) ( ( ( * (  screen3565 ) ) .f_current ) ,  (  i3581 ) ,  ( (struct Cell_286) { .f_c = ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3574 ) , .f_bg = (  bg3575 ) , .f_char_dash_width = (  from_dash_integral67 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1942 (    struct Screen_284 *  screen3584 ,    int32_t  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1541 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min636 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size420 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct IntStrIter_1910  temp1943 =  into_dash_iter1912 ( ( (  chars1925 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_305  __cond1944 =  next1913 (&temp1943);
        if (  __cond1944 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond1944 .stuff .Maybe_305_Just_s .field0;
        ( (  put_dash_char1945 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1112 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1932 (    struct Screen_284 *  screen3600 ,    int32_t  s3602 ,    int32_t  x3604 ,    int32_t  y3606 ) {
    int32_t  slen3607 = ( (  sum1933 ) ( ( (  map1941 ) ( ( (  chars1925 ) ( (  s3602 ) ) ) ,  (  rendered_dash_wcwidth1112 ) ) ) ) );
    int32_t  w3608 = ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3600 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3609 = (  op_dash_sub173 ( (  op_dash_sub173 ( (  w3608 ) , (  x3604 ) ) ) , (  slen3607 ) ) );
    ( (  draw_dash_str1942 ) ( (  screen3600 ) ,  (  s3602 ) ,  (  x3609 ) ,  (  y3606 ) ) );
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
        ( (  print_dash_str336 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str397 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1953 (    struct StrConcat_1952  self1510 ) {
    struct StrConcat_1952  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str1954 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1950 (    struct StrConcat_1951  self1510 ) {
    struct StrConcat_1951  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str1953 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1948 (    bool  cond1720 ,    struct StrConcat_1949  msg1722 ) {
    if ( ( ! (  cond1720 ) ) ) {
        ( (  print_dash_str1950 ) ( ( ( StrConcat_1951_StrConcat ) ( ( ( StrConcat_1952_StrConcat ) ( ( (  from_dash_string208 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1722 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1956 {
    struct StrViewIter_62  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1956   into_dash_iter1957 (    struct AppendIter_1956  self1020 ) {
    return (  self1020 );
}

static  struct AppendIter_1956   append1958 (    struct StrViewIter_62  it1007 ,    struct Char_65  e1009 ) {
    return ( (struct AppendIter_1956) { .f_it = ( (  into_dash_iter787 ) ( (  it1007 ) ) ) , .f_elem = (  e1009 ) , .f_appended = ( false ) } );
}

static  struct Maybe_305   next1960 (    struct AppendIter_1956 *  self1023 ) {
    struct Maybe_305  dref1024 = ( (  next689 ) ( ( & ( ( * (  self1023 ) ) .f_it ) ) ) );
    if ( dref1024.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1024 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1024.tag == Maybe_305_None_t ) {
            if ( ( ! ( ( * (  self1023 ) ) .f_appended ) ) ) {
                (*  self1023 ) .f_appended = ( true );
                return ( ( Maybe_305_Just ) ( ( ( * (  self1023 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
        }
    }
}

static  bool   between1962 (    struct Pos_26  c1338 ,    struct Pos_26  l1340 ,    struct Pos_26  r1342 ) {
    struct Pos_26  from1343 = ( (  min522 ) ( (  l1340 ) ,  (  r1342 ) ) );
    struct Pos_26  to1344 = ( (  max524 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp523 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp523 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1961 (    struct Pane_228 *  pane4066 ,    struct Pos_26  pos4068 ) {
    return ( {  struct Maybe_34  dref4069 = ( ( * (  pane4066 ) ) .f_sel ) ; dref4069.tag == Maybe_34_Just_t ? ( (  between1962 ) ( (  pos4068 ) ,  ( ( * (  pane4066 ) ) .f_cursor ) ,  ( dref4069 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1964 {
    ;
    struct Theme_181 *  theme4109;
    ;
    struct Screen_284 *  screen4103;
};

struct envunion1965 {
    enum Unit_8  (*fun) (  struct env1964*  ,    enum HighlightType_20  );
    struct env1964 env;
};

static  enum Unit_8   if_dash_just1963 (    struct Maybe_212  x1292 ,   struct envunion1965  fun1294 ) {
    struct Maybe_212  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_212_Just_t ) {
        struct envunion1965  temp1966 = (  fun1294 );
        ( temp1966.fun ( &temp1966.env ,  ( dref1295 .stuff .Maybe_212_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_212_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1971 (    struct List_17 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min507 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_305   head1974 (    struct Scanner_968 *  it1143 ) {
    struct Scanner_968  temp1975 = ( (  into_dash_iter984 ) ( (  it1143 ) ) );
    return ( (  next990 ) ( ( &temp1975 ) ) );
}

static  bool   null1973 (    struct Scanner_968 *  it1152 ) {
    struct Maybe_305  dref1153 = ( (  head1974 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_305_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_305   peek1976 (    struct Scanner_968 *  sc3216 ) {
    return ( (  head1346 ) ( ( ( * (  sc3216 ) ) .f_s ) ) );
}

static  bool   eq1978 (    struct Maybe_305  l141 ,    struct Maybe_305  r143 ) {
    struct Tuple2_1849  dref144 = ( ( Tuple2_1849_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_305_None_t && dref144 .field1.tag == Maybe_305_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_305_Just_t && dref144 .field1.tag == Maybe_305_Just_t ) {
            return (  eq583 ( ( dref144 .field0 .stuff .Maybe_305_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_305_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char1977 (    struct Scanner_968 *  sc3219 ,    struct Char_65  char3221 ) {
    if ( (  eq1978 ( ( (  peek1976 ) ( (  sc3219 ) ) ) , ( ( Maybe_305_Just ) ( (  char3221 ) ) ) ) ) ) {
        ( (  drop_prime_993 ) ( (  sc3219 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   char_dash_satisfies1980 (    struct Scanner_968 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_305  dref3227 = ( (  head1346 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_305_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_993 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_305_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1979 (    struct Scanner_968 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1980 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1981 (    struct Char_65  c3920 ) {
    return ( !  eq583 ( (  c3920 ) , ( (  from_dash_charlike354 ) ( ( "]" ) ,  ( 1 ) ) ) ) );
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
    struct Highlight_19 *  ptr1959 = ( (  cast_dash_ptr1990 ) ( ( ( malloc ) ( (  op_dash_mul413 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
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
    return ( (struct Highlight_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1998 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_19 *   get_dash_ptr1996 (    struct Slice_18  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp298 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic331 ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_19 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1997 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set1995 (    struct Slice_18  slice1776 ,    size_t  i1778 ,    struct Highlight_19  x1780 ) {
    struct Highlight_19 *  ep1781 = ( (  get_dash_ptr1996 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1994 (   struct env1991* env ,    struct Tuple2_1993  dref2045 ) {
    return ( (  set1995 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size420 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct SliceIter_2001 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2000 {
    struct SliceIter_2001  f_left_dash_it;
    struct FromIter_424  f_right_dash_it;
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
    if ( (  cmp298 ( (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2006) { .tag = Maybe_2006_None_t } );
    }
    struct Highlight_19  elem1832 = ( * ( (  offset_dash_ptr1997 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
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
                struct Maybe_164  dref919 = ( (  next430 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_2004) { .tag = Maybe_2004_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next2007 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next430 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2004_Just ) ( ( ( Tuple2_1993_Tuple2 ) ( ( dref917 .stuff .Maybe_2006_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
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

static  struct Zip_2000   zip2009 (    struct Slice_18  left923 ,    struct FromIter_424  right925 ) {
    struct SliceIter_2001  left_dash_it926 = ( (  into_dash_iter2010 ) ( (  left923 ) ) );
    struct FromIter_424  right_dash_it927 = ( (  into_dash_iter434 ) ( (  right925 ) ) );
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
    if ( (  eq407 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1986 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq407 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2044 = ( (  allocate1986 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul413 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1991 envinst1991 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1992  fun2048 = ( (struct envunion1992){ .fun = (  enum Unit_8  (*) (  struct env1991*  ,    struct Tuple2_1993  ) )lam1994 , .env =  envinst1991 } );
            ( (  for_dash_each1999 ) ( ( (  zip2009 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
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
    (*  list2051 ) .f_count = (  op_dash_add319 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2014 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2016 (    struct Scanner_968 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_305  dref3227 = ( (  head1346 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_305_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_993 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_305_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2015 (    struct Scanner_968 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2016 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2017 (    struct Char_65  c3923 ) {
    return ( ( !  eq583 ( (  c3923 ) , ( (  from_dash_charlike354 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) && ( !  eq583 ( (  c3923 ) , ( (  from_dash_charlike354 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2019 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2020 (    struct Scanner_968 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_305  dref3227 = ( (  head1346 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_305_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_993 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_305_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2022 (    struct Scanner_968 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_305  dref3227 = ( (  head1346 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_305_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_993 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_305_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2021 (    struct Scanner_968 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2022 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2023 (    struct Char_65  c3926 ) {
    return ( (  eq1333 ( ( (  char_dash_type1336 ) ( (  c3926 ) ) ) , ( CharType_1334_CharWord ) ) ) || (  eq583 ( (  c3926 ) , ( (  from_dash_charlike354 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2025 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2027 {
    struct StrView_27 _arr [2];
};

struct env2028 {
    struct Scanner_968 *  sc3916;
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

static  struct ArrayIter_2033   into_dash_iter2034 (    struct Array_2027  self2327 ) {
    return ( (struct ArrayIter_2033) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2038 (    struct Array_2027 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   offset_dash_ptr2039 (    struct StrView_27 *  x338 ,    int64_t  count340 ) {
    struct StrView_27  temp2040;
    return ( (struct StrView_27 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2040 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr2037 (    struct Array_2027 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp298 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2258 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic388 ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2038 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2039 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2036 (    struct Array_2027 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2037 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2035 (    struct ArrayIter_2033 *  self2334 ) {
    if ( (  cmp298 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2036 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add319 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2030 (    struct Array_2027  iterable1094 ,    bool  base1096 ,   struct envunion2032  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2033  it1100 = ( (  into_dash_iter2034 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2035 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2032  temp2041 = (  fun1098 );
                x1099 = ( temp2041.fun ( &temp2041.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2042 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
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

static  struct StrViewIter_62   own2051 (    struct StrViewIter_62  x1252 ) {
    return (  x1252 );
}

static  bool   matches_dash_str2048 (    struct Scanner_968 *  sc3231 ,    struct StrView_27  s3233 ) {
    size_t  skip3234 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_62  temp2049 = ( (  chars701 ) ( (  s3233 ) ) );
    struct StrViewIter_62 *  ss3235 = ( &temp2049 );
    struct StrViewIter_62  temp2050 = ( (  own2051 ) ( ( ( * (  sc3231 ) ) .f_s ) ) );
    struct StrViewIter_62 *  sccp3236 = ( &temp2050 );
    while ( ( true ) ) {
        struct Tuple2_1849  dref3237 = ( ( Tuple2_1849_Tuple2 ) ( ( (  next689 ) ( (  sccp3236 ) ) ) ,  ( (  next689 ) ( (  ss3235 ) ) ) ) );
        if ( dref3237 .field1.tag == Maybe_305_None_t ) {
            ( (  drop_prime_993 ) ( (  sc3231 ) ,  (  skip3234 ) ) );
            return ( true );
        }
        else {
            if ( dref3237 .field0.tag == Maybe_305_Just_t && dref3237 .field1.tag == Maybe_305_Just_t ) {
                if ( ( !  eq583 ( ( dref3237 .field0 .stuff .Maybe_305_Just_s .field0 ) , ( dref3237 .field1 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3234 = (  op_dash_add319 ( (  skip3234 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2047 (   struct env2028* env ,    struct StrView_27  sym3929 ) {
    return ( (  matches_dash_str2048 ) ( ( env->sc3916 ) ,  (  sym3929 ) ) );
}

struct envunion2053 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2055 {
    struct StrView_27 _arr [12];
};

struct env2056 {
    struct Scanner_968 *  sc3916;
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

static  struct ArrayIter_2061   into_dash_iter2062 (    struct Array_2055  self2327 ) {
    return ( (struct ArrayIter_2061) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2066 (    struct Array_2055 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2065 (    struct Array_2055 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp298 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2258 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic388 ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2066 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2039 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2064 (    struct Array_2055 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2065 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2063 (    struct ArrayIter_2061 *  self2334 ) {
    if ( (  cmp298 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2064 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add319 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2058 (    struct Array_2055  iterable1094 ,    bool  base1096 ,   struct envunion2060  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2061  it1100 = ( (  into_dash_iter2062 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2063 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2060  temp2067 = (  fun1098 );
                x1099 = ( temp2067.fun ( &temp2067.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2068 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
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

static  bool   lam2073 (   struct env2056* env ,    struct StrView_27  sym3933 ) {
    return ( (  matches_dash_str2048 ) ( ( env->sc3916 ) ,  (  sym3933 ) ) );
}

struct envunion2075 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2077 (    struct Scanner_968 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_305  dref3227 = ( (  head1346 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_305_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_993 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_305_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2076 (    struct Scanner_968 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2077 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2078 (    struct Char_65  c3937 ) {
    return ( (  eq1333 ( ( (  char_dash_type1336 ) ( (  c3937 ) ) ) , ( CharType_1334_CharWord ) ) ) || (  eq583 ( (  c3937 ) , ( (  from_dash_charlike354 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2079 (    struct Maybe_305  x1283 ,    bool (*  fun1285 )(    struct Char_65  ) ,    bool  default1287 ) {
    return ( {  struct Maybe_305  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_305_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_305_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  bool   is_dash_upper2080 (    struct Char_65  c2411 ) {
    return ( (  eq407 ( ( (  c2411 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1339 ) ( (  c2411 ) ,  ( (  from_dash_charlike354 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
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
    ;
    struct StrView_27  ident3941;
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

static  struct ArrayIter_2091   into_dash_iter2092 (    struct Array_2081  self2327 ) {
    return ( (struct ArrayIter_2091) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2096 (    struct Array_2081 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2095 (    struct Array_2081 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp298 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2258 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic388 ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2096 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2039 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2094 (    struct Array_2081 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2095 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2093 (    struct ArrayIter_2091 *  self2334 ) {
    if ( (  cmp298 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2094 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add319 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2088 (    struct Array_2081  iterable1094 ,    bool  base1096 ,   struct envunion2090  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2091  it1100 = ( (  into_dash_iter2092 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2093 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2090  temp2097 = (  fun1098 );
                x1099 = ( temp2097.fun ( &temp2097.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2098 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
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

static  bool   lam2102 (   struct env2086* env ,    struct StrView_27  kw3945 ) {
    return (  eq1684 ( (  kw3945 ) , ( env->ident3941 ) ) );
}

struct env2104 {
    ;
    struct StrView_27  ident3941;
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

static  struct ArrayIter_2109   into_dash_iter2110 (    struct Array_2083  self2327 ) {
    return ( (struct ArrayIter_2109) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2114 (    struct Array_2083 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2113 (    struct Array_2083 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp298 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp298 ( (  i2258 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic388 ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2114 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2039 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2112 (    struct Array_2083 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2113 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2111 (    struct ArrayIter_2109 *  self2334 ) {
    if ( (  cmp298 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2112 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add319 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2106 (    struct Array_2083  iterable1094 ,    bool  base1096 ,   struct envunion2108  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2109  it1100 = ( (  into_dash_iter2110 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2111 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2108  temp2115 = (  fun1098 );
                x1099 = ( temp2115.fun ( &temp2115.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2116 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
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

static  bool   lam2120 (   struct env2104* env ,    struct StrView_27  kw3947 ) {
    return (  eq1684 ( (  kw3947 ) , ( env->ident3941 ) ) );
}

struct envunion2122 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  struct Maybe_980   int2123 (    struct Scanner_968 *  sc3210 ) {
    return ( (  scan_dash_int981 ) ( (  sc3210 ) ) );
}

static  bool   char_dash_satisfies2125 (    struct Scanner_968 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_305  dref3227 = ( (  head1346 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_305_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_993 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_305_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2124 (    struct Scanner_968 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2125 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2126 (    struct Char_65  c2399 ) {
    return ( (  eq407 ( ( (  c2399 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1342 ) ( (  c2399 ) ) ) || ( (  between1339 ) ( (  c2399 ) ,  ( (  from_dash_charlike354 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1339 ) ( (  c2399 ) ,  ( (  from_dash_charlike354 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2128 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2129 (    struct Scanner_968 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2020 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2131 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2133 (    struct Scanner_968 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_305  dref3227 = ( (  head1346 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_305_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_993 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_305_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2132 (    struct Scanner_968 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2133 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2134 (    struct Char_65  c2405 ) {
    return ( (  eq407 ( ( (  c2405 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1339 ) ( (  c2405 ) ,  ( (  from_dash_charlike354 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2136 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2138 (    struct Scanner_968 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_305  dref3227 = ( (  head1346 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_305_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_993 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_305_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2137 (    struct Scanner_968 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2138 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2140 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2142 (    struct Scanner_968 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_305  dref3227 = ( (  head1346 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_305_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_305_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_993 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_305_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2141 (    struct Scanner_968 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2142 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2143 (    struct Char_65  c2402 ) {
    return ( (  eq407 ( ( (  c2402 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq583 ( (  c2402 ) , ( (  from_dash_charlike354 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) || (  eq583 ( (  c2402 ) , ( (  from_dash_charlike354 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) );
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

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1970 (   struct env143* env ,    struct TextBuf_114 *  self3911 ,    struct Line_16 *  line3913 ) {
    if ( ( ! ( ( * (  line3913 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_17 *  hls3914 = ( & ( ( * (  line3913 ) ) .f_highlights ) );
    ( (  trim1971 ) ( (  hls3914 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv3915 = ( (  from_dash_bytes1101 ) ( ( (  to_dash_slice534 ) ( ( ( * (  line3913 ) ) .f_line ) ) ) ) );
    struct Scanner_968  temp1972 = ( (  mk_dash_from_dash_str970 ) ( (  line_dash_sv3915 ) ) );
    struct Scanner_968 *  sc3916 = ( &temp1972 );
    while ( ( ! ( (  null1973 ) ( (  sc3916 ) ) ) ) ) {
        int32_t  from_dash_off3917 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
        struct Maybe_305  first_dash_char3918 = ( (  peek1976 ) ( (  sc3916 ) ) );
        if ( ( (  try_dash_char1977 ) ( (  sc3916 ) ,  ( (  from_dash_charlike354 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
            if ( ( (  try_dash_char1977 ) ( (  sc3916 ) ,  ( (  from_dash_charlike354 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  skip_dash_while1979 ) ( (  sc3916 ) ,  (  lam1981 ) ) );
                ( (  drop_prime_993 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                int32_t  to_dash_off3921 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                struct envunion144  temp1982 = ( (struct envunion144){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                ( temp1982.fun ( &temp1982.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = ( (  size_dash_i32337 ) ( ( (  num_dash_bytes1133 ) ( (  line_dash_sv3915 ) ) ) ) ) , .f_type = ( HighlightType_20_Special3 ) } ) ) );
            } else {
                struct envunion2014  temp2013 = ( (struct envunion2014){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                ( temp2013.fun ( &temp2013.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = ( (  size_dash_i32337 ) ( ( (  num_dash_bytes1133 ) ( (  line_dash_sv3915 ) ) ) ) ) , .f_type = ( HighlightType_20_Comment ) } ) ) );
            }
            break;
        } else {
            if ( ( (  try_dash_char1977 ) ( (  sc3916 ) ,  ( (  from_dash_charlike354 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while2015 ) ( (  sc3916 ) ,  (  lam2017 ) ) );
                    if ( (  eq1978 ( ( (  peek1976 ) ( (  sc3916 ) ) ) , ( ( Maybe_305_Just ) ( ( (  from_dash_charlike354 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                        ( (  drop_prime_993 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        if ( (  eq1978 ( ( (  peek1976 ) ( (  sc3916 ) ) ) , ( ( Maybe_305_Just ) ( ( (  from_dash_charlike354 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                            ( (  drop_prime_993 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                        }
                    } else {
                        ( (  drop_prime_993 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        break;
                    }
                }
                int32_t  cur_dash_off3924 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                struct envunion2019  temp2018 = ( (struct envunion2019){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                ( temp2018.fun ( &temp2018.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3924 ) , .f_type = ( HighlightType_20_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char1977 ) ( (  sc3916 ) ,  ( (  from_dash_charlike354 ) ( ( "@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies2020 ) ( (  sc3916 ) ,  (  is_dash_alpha1338 ) ) ) ) {
                        ( (  skip_dash_while2021 ) ( (  sc3916 ) ,  (  lam2023 ) ) );
                        int32_t  cur_dash_off3927 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2025  temp2024 = ( (struct envunion2025){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                        ( temp2024.fun ( &temp2024.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3927 ) , .f_type = ( HighlightType_20_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct env2028 envinst2028 = {
                        .sc3916 =  sc3916 ,
                    };
                    if ( ( (  any2026 ) ( ( (  from_dash_listlike2046 ) ( ( (struct Array_2027) { ._arr = { ( (  from_dash_string208 ) ( ( "==" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "/=" ) ,  ( 2 ) ) ) } } ) ) ) ,  ( (struct envunion2029){ .fun = (  bool  (*) (  struct env2028*  ,    struct StrView_27  ) )lam2047 , .env =  envinst2028 } ) ) ) ) {
                        int32_t  cur_dash_off3930 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_20  type3931 = ( HighlightType_20_Special2 );
                        struct envunion2053  temp2052 = ( (struct envunion2053){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                        ( temp2052.fun ( &temp2052.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3930 ) , .f_type = (  type3931 ) } ) ) );
                    } else {
                        struct env2056 envinst2056 = {
                            .sc3916 =  sc3916 ,
                        };
                        if ( ( (  any2054 ) ( ( (  from_dash_listlike2072 ) ( ( (struct Array_2055) { ._arr = { ( (  from_dash_string208 ) ( ( "<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1231 ) ( ( "=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1231 ) ( ( "&" ) ,  ( 1 ) ) ) , ( (  from_dash_string208 ) ( ( "->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1231 ) ( ( ":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1231 ) ( ( "(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1231 ) ( ( ")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1231 ) ( ( "{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1231 ) ( ( "}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1231 ) ( ( "[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1231 ) ( ( "]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1231 ) ( ( "," ) ,  ( 1 ) ) ) } } ) ) ) ,  ( (struct envunion2057){ .fun = (  bool  (*) (  struct env2056*  ,    struct StrView_27  ) )lam2073 , .env =  envinst2056 } ) ) ) ) {
                            int32_t  cur_dash_off3934 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_20  type3935 = ( HighlightType_20_Special1 );
                            struct envunion2075  temp2074 = ( (struct envunion2075){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                            ( temp2074.fun ( &temp2074.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3934 ) , .f_type = (  type3935 ) } ) ) );
                        } else {
                            if ( ( (  char_dash_satisfies2020 ) ( (  sc3916 ) ,  (  is_dash_alpha1338 ) ) ) ) {
                                ( (  skip_dash_while2076 ) ( (  sc3916 ) ,  (  lam2078 ) ) );
                                int32_t  cur_dash_off3938 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                bool  first_dash_char_dash_uppercase3939 = ( (  maybe2079 ) ( (  first_dash_char3918 ) ,  (  is_dash_upper2080 ) ,  ( false ) ) );
                                enum HighlightType_20  type3940 = ( (  first_dash_char_dash_uppercase3939 ) ? ( HighlightType_20_Ident2 ) : ( HighlightType_20_Ident1 ) );
                                struct StrView_27  ident3941 = ( ( (  byte_dash_substr519 ) ( (  line_dash_sv3915 ) ,  ( (  i32_dash_size420 ) ( (  from_dash_off3917 ) ) ) ,  ( (  i32_dash_size420 ) ( (  cur_dash_off3938 ) ) ) ) ) );
                                struct Array_2081  keywords13942 = ( (  from_dash_listlike2082 ) ( ( (struct Array_2081) { ._arr = { ( (  from_dash_string208 ) ( ( "fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "class" ) ,  ( 5 ) ) ) , ( (  from_dash_string208 ) ( ( "inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string208 ) ( ( "external" ) ,  ( 8 ) ) ) , ( (  from_dash_string208 ) ( ( "use" ) ,  ( 3 ) ) ) } } ) ) );
                                struct Array_2083  keywords23943 = ( (  from_dash_listlike2084 ) ( ( (struct Array_2083) { ._arr = { ( (  from_dash_string208 ) ( ( "if" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string208 ) ( ( "else" ) ,  ( 4 ) ) ) , ( (  from_dash_string208 ) ( ( "case" ) ,  ( 4 ) ) ) , ( (  from_dash_string208 ) ( ( "for" ) ,  ( 3 ) ) ) , ( (  from_dash_string208 ) ( ( "in" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "while" ) ,  ( 5 ) ) ) , ( (  from_dash_string208 ) ( ( "pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string208 ) ( ( "break" ) ,  ( 5 ) ) ) , ( (  from_dash_string208 ) ( ( "continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string208 ) ( ( "as" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "or" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "and" ) ,  ( 3 ) ) ) , ( (  from_dash_string208 ) ( ( "not" ) ,  ( 3 ) ) ) , ( (  from_dash_string208 ) ( ( "return" ) ,  ( 6 ) ) ) } } ) ) );
                                struct env2086 envinst2086 = {
                                    .ident3941 =  ident3941 ,
                                };
                                if ( ( (  any2085 ) ( (  keywords13942 ) ,  ( (struct envunion2087){ .fun = (  bool  (*) (  struct env2086*  ,    struct StrView_27  ) )lam2102 , .env =  envinst2086 } ) ) ) ) {
                                    type3940 = ( HighlightType_20_Keyword1 );
                                } else {
                                    struct env2104 envinst2104 = {
                                        .ident3941 =  ident3941 ,
                                    };
                                    if ( ( (  any2103 ) ( (  keywords23943 ) ,  ( (struct envunion2105){ .fun = (  bool  (*) (  struct env2104*  ,    struct StrView_27  ) )lam2120 , .env =  envinst2104 } ) ) ) ) {
                                        type3940 = ( HighlightType_20_Keyword2 );
                                    } else {
                                        if ( ( ( ! (  first_dash_char_dash_uppercase3939 ) ) && (  eq1978 ( ( (  peek1976 ) ( (  sc3916 ) ) ) , ( ( Maybe_305_Just ) ( ( (  from_dash_charlike354 ) ( ( "(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                            type3940 = ( HighlightType_20_Ident4 );
                                        }
                                    }
                                }
                                struct envunion2122  temp2121 = ( (struct envunion2122){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                ( temp2121.fun ( &temp2121.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3938 ) , .f_type = (  type3940 ) } ) ) );
                            } else {
                                struct Maybe_980  dref3948 = ( (  int2123 ) ( (  sc3916 ) ) );
                                if ( dref3948.tag == Maybe_980_Just_t ) {
                                    int32_t  cur_dash_off3950 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_20  type3951 = ( HighlightType_20_Number );
                                    if ( (  eq1068 ( ( dref3948 .stuff .Maybe_980_Just_s .field0 ) , (  from_dash_integral296 ( 0 ) ) ) ) ) {
                                        if ( ( (  try_dash_char1977 ) ( (  sc3916 ) ,  ( (  from_dash_charlike354 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  skip_dash_while2124 ) ( (  sc3916 ) ,  (  is_dash_hex2126 ) ) );
                                            int32_t  cur_dash_off3952 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                            struct envunion2128  temp2127 = ( (struct envunion2128){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                            ( temp2127.fun ( &temp2127.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3952 ) , .f_type = (  type3951 ) } ) ) );
                                            ( (  skip_dash_while2129 ) ( (  sc3916 ) ,  (  is_dash_alpha1338 ) ) );
                                            int32_t  invalid_dash_off3953 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                            if ( ( !  eq526 ( (  cur_dash_off3952 ) , (  invalid_dash_off3953 ) ) ) ) {
                                                struct envunion2131  temp2130 = ( (struct envunion2131){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                ( temp2130.fun ( &temp2130.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3952 ) , .f_to = (  invalid_dash_off3953 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                            }
                                        } else {
                                            if ( ( (  try_dash_char1977 ) ( (  sc3916 ) ,  ( (  from_dash_charlike354 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while2132 ) ( (  sc3916 ) ,  (  is_dash_octal2134 ) ) );
                                                int32_t  cur_dash_off3954 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion2136  temp2135 = ( (struct envunion2136){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                ( temp2135.fun ( &temp2135.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3954 ) , .f_type = (  type3951 ) } ) ) );
                                                ( (  skip_dash_while2137 ) ( (  sc3916 ) ,  (  is_dash_digit986 ) ) );
                                                int32_t  invalid_dash_off3955 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq526 ( (  cur_dash_off3954 ) , (  invalid_dash_off3955 ) ) ) ) {
                                                    struct envunion2140  temp2139 = ( (struct envunion2140){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                    ( temp2139.fun ( &temp2139.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3954 ) , .f_to = (  invalid_dash_off3955 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char1977 ) ( (  sc3916 ) ,  ( (  from_dash_charlike354 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2141 ) ( (  sc3916 ) ,  (  is_dash_binary2143 ) ) );
                                                    int32_t  cur_dash_off3956 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2145  temp2144 = ( (struct envunion2145){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                    ( temp2144.fun ( &temp2144.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3956 ) , .f_type = (  type3951 ) } ) ) );
                                                    ( (  skip_dash_while2137 ) ( (  sc3916 ) ,  (  is_dash_digit986 ) ) );
                                                    int32_t  invalid_dash_off3957 = ( (  size_dash_i32337 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq526 ( (  cur_dash_off3956 ) , (  invalid_dash_off3957 ) ) ) ) {
                                                        struct envunion2147  temp2146 = ( (struct envunion2147){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                        ( temp2146.fun ( &temp2146.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3956 ) , .f_to = (  invalid_dash_off3957 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    struct envunion2149  temp2148 = ( (struct envunion2149){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                                    ( temp2148.fun ( &temp2148.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3950 ) , .f_type = (  type3951 ) } ) ) );
                                                }
                                            }
                                        }
                                    } else {
                                        struct envunion2151  temp2150 = ( (struct envunion2151){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1983 , .env =  env->envinst35 } );
                                        ( temp2150.fun ( &temp2150.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3950 ) , .f_type = (  type3951 ) } ) ) );
                                    }
                                }
                                else {
                                    if ( dref3948.tag == Maybe_980_None_t ) {
                                        ( (  drop_prime_993 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    (*  line3913 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_18   subslice2154 (    struct Slice_18  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Highlight_19 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1997 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp298 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp298 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub297 ( ( (  min507 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_2001   into_dash_iter2153 (    struct List_17  self2030 ) {
    return ( (  into_dash_iter2010 ) ( ( (  subslice2154 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  bool   between2156 (    int32_t  c1338 ,    int32_t  l1340 ,    int32_t  r1342 ) {
    int32_t  from1343 = ( (  min636 ) ( (  l1340 ) ,  (  r1342 ) ) );
    int32_t  to1344 = ( (  max1113 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp166 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp166 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  struct Maybe_212   highlight_dash_at1968 (   struct env145* env ,    struct TextBuf_114 *  self3960 ,    struct Pos_26  pos3962 ) {
    struct Line_16 *  line3963 = ( (  get_dash_ptr532 ) ( ( & ( ( * (  self3960 ) ) .f_buf ) ) ,  ( (  i32_dash_size420 ) ( ( (  pos3962 ) .f_line ) ) ) ) );
    struct envunion146  temp1969 = ( (struct envunion146){ .fun = (  enum Unit_8  (*) (  struct env143*  ,    struct TextBuf_114 *  ,    struct Line_16 *  ) )recompute_dash_highlights_dash_at_dash_line1970 , .env =  env->envinst143 } );
    ( temp1969.fun ( &temp1969.env ,  (  self3960 ) ,  (  line3963 ) ) );
    struct SliceIter_2001  temp2152 =  into_dash_iter2153 ( ( ( * (  line3963 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2006  __cond2155 =  next2007 (&temp2152);
        if (  __cond2155 .tag == 0 ) {
            break;
        }
        struct Highlight_19  hl3965 =  __cond2155 .stuff .Maybe_2006_Just_s .field0;
        if ( ( (  between2156 ) ( ( (  pos3962 ) .f_bi ) ,  ( (  hl3965 ) .f_from ) ,  (  op_dash_sub173 ( ( (  hl3965 ) .f_to ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_212_Just ) ( ( (  hl3965 ) .f_type ) ) );
        }
        if ( (  cmp166 ( ( (  pos3962 ) .f_bi ) , ( (  hl3965 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_212) { .tag = Maybe_212_None_t } );
        }
    }
    return ( (struct Maybe_212) { .tag = Maybe_212_None_t } );
}

struct Maybe_2160 {
    enum {
        Maybe_2160_None_t,
        Maybe_2160_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_184  field0;
        } Maybe_2160_Just_s;
    } stuff;
};

static struct Maybe_2160 Maybe_2160_Just (  struct HighlightColors_184  field0 ) {
    return ( struct Maybe_2160 ) { .tag = Maybe_2160_Just_t, .stuff = { .Maybe_2160_Just_s = { .field0 = field0 } } };
};

struct env2161 {
    struct Theme_181 *  theme4001;
    ;
};

struct envunion2162 {
    struct Colors_182  (*fun) (  struct env2161*  ,    struct HighlightColors_184  );
    struct env2161 env;
};

static  struct Colors_182   maybe2159 (    struct Maybe_2160  x1283 ,   struct envunion2162  fun1285 ,    struct Colors_182  default1287 ) {
    struct envunion2162  temp2163 = (  fun1285 );
    return ( {  struct Maybe_2160  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_2160_Just_t ? ( temp2163.fun ( &temp2163.env ,  ( dref1288 .stuff .Maybe_2160_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

struct SliceIter_2166 {
    struct Slice_183  f_slice;
    size_t  f_current_dash_offset;
};

struct env2167 {
    ;
    enum HighlightType_20  hltype4003;
};

struct envunion2168 {
    bool  (*fun) (  struct env2167*  ,    struct HighlightColors_184  );
    struct env2167 env;
};

struct Filter_2165 {
    struct SliceIter_2166  f_og;
    struct envunion2168  f_fun;
};

static  struct HighlightColors_184 *   offset_dash_ptr2171 (    struct HighlightColors_184 *  x338 ,    int64_t  count340 ) {
    struct HighlightColors_184  temp2172;
    return ( (struct HighlightColors_184 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul294 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2172 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2160   next2170 (    struct SliceIter_2166 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp298 ( (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2160) { .tag = Maybe_2160_None_t } );
    }
    struct HighlightColors_184  elem1832 = ( * ( (  offset_dash_ptr2171 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2160_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2160   next2169 (    struct Filter_2165 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_2160  dref835 = ( (  next2170 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_2160_None_t ) {
            return ( (struct Maybe_2160) { .tag = Maybe_2160_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_2160_Just_t ) {
                struct envunion2168  temp2173 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp2173.fun ( &temp2173.env ,  ( dref835 .stuff .Maybe_2160_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2160_Just ) ( ( dref835 .stuff .Maybe_2160_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2160  temp2174;
    return (  temp2174 );
}

static  struct Filter_2165   into_dash_iter2176 (    struct Filter_2165  self831 ) {
    return (  self831 );
}

static  struct Maybe_2160   head2164 (    struct Filter_2165  it1143 ) {
    struct Filter_2165  temp2175 = ( (  into_dash_iter2176 ) ( (  it1143 ) ) );
    return ( (  next2169 ) ( ( &temp2175 ) ) );
}

static  struct SliceIter_2166   into_dash_iter2178 (    struct Slice_183  self1824 ) {
    return ( (struct SliceIter_2166) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2165   filter2177 (    struct Slice_183  iterable839 ,   struct envunion2168  fun841 ) {
    struct SliceIter_2166  it842 = ( (  into_dash_iter2178 ) ( (  iterable839 ) ) );
    return ( (struct Filter_2165) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  enum HighlightType_20 *   cast2183 (    uint32_t *  x356 ) {
    return ( (enum HighlightType_20 * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2181 (    enum HighlightType_20  x574 ) {
    uint32_t  temp2182 = ( (  zeroed820 ) ( ) );
    uint32_t *  y575 = ( &temp2182 );
    enum HighlightType_20 *  yp576 = ( (  cast2183 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2180 (    enum HighlightType_20  l3648 ,    enum HighlightType_20  r3650 ) {
    return (  eq587 ( ( ( (  cast_dash_on_dash_zeroed2181 ) ( (  l3648 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2181 ) ( (  r3650 ) ) ) ) );
}

static  bool   lam2179 (   struct env2167* env ,    struct HighlightColors_184  hlc4005 ) {
    return (  eq2180 ( ( (  hlc4005 ) .f_type ) , ( env->hltype4003 ) ) );
}

static  struct Color_147   or_dash_else2185 (    struct Maybe_185  self1734 ,    struct Color_147  alt1736 ) {
    struct Maybe_185  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_185_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_185_Just_t ) {
            return ( dref1737 .stuff .Maybe_185_Just_s .field0 );
        }
    }
}

static  struct Colors_182   lam2184 (   struct env2161* env ,    struct HighlightColors_184  hlc4007 ) {
    return ( (struct Colors_182) { .f_fg = ( (  hlc4007 ) .f_fg ) , .f_bg = ( (  or_dash_else2185 ) ( ( (  hlc4007 ) .f_bg ) ,  ( ( ( * ( env->theme4001 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_182   find_dash_colors_dash_for_dash_highlight2158 (    struct Theme_181 *  theme4001 ,    enum HighlightType_20  hltype4003 ) {
    struct env2167 envinst2167 = {
        .hltype4003 =  hltype4003 ,
    };
    struct env2161 envinst2161 = {
        .theme4001 =  theme4001 ,
    };
    return ( (  maybe2159 ) ( ( (  head2164 ) ( ( (  filter2177 ) ( ( ( * (  theme4001 ) ) .f_highlights ) ,  ( (struct envunion2168){ .fun = (  bool  (*) (  struct env2167*  ,    struct HighlightColors_184  ) )lam2179 , .env =  envinst2167 } ) ) ) ) ) ,  ( (struct envunion2162){ .fun = (  struct Colors_182  (*) (  struct env2161*  ,    struct HighlightColors_184  ) )lam2184 , .env =  envinst2161 } ) ,  ( ( * (  theme4001 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2157 (   struct env1964* env ,    enum HighlightType_20  type4130 ) {
    ( (  set_dash_colors1930 ) ( ( env->screen4103 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2158 ) ( ( env->theme4109 ) ,  (  type4130 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2189 (  ) {
    ( (  print1349 ) ( ( (  from_dash_string208 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1712 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2188 (    enum Mode_229  mode4021 ) {
    return ( {  enum Mode_229  dref4022 = (  mode4021 ) ;  dref4022 == Mode_229_Normal ? ( (  from_dash_string208 ) ( ( "NOR" ) ,  ( 3 ) ) ) :  dref4022 == Mode_229_Insert ? ( (  from_dash_string208 ) ( ( "INS" ) ,  ( 3 ) ) ) :  dref4022 == Mode_229_Select ? ( (  from_dash_string208 ) ( ( "SEL" ) ,  ( 3 ) ) ) : ( (  todo2189 ) ( ) ) ; } );
}

struct StrConcat_2192 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2192 StrConcat_2192_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2192 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2191 {
    struct StrConcat_2192  field0;
    struct Char_65  field1;
};

static struct StrConcat_2191 StrConcat_2191_StrConcat (  struct StrConcat_2192  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2191 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2195 {
    struct AppendIter_63  f_left;
    struct StrViewIter_62  f_right;
};

struct StrConcatIter_2194 {
    struct StrConcatIter_2195  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2194   into_dash_iter2196 (    struct StrConcatIter_2194  self1498 ) {
    return (  self1498 );
}

static  struct StrConcatIter_2195   into_dash_iter2200 (    struct StrConcat_2192  dref1505 ) {
    return ( (struct StrConcatIter_2195) { .f_left = ( (  chars703 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars701 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2195   chars2199 (    struct StrConcat_2192  self1516 ) {
    return ( (  into_dash_iter2200 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2194   into_dash_iter2198 (    struct StrConcat_2191  dref1505 ) {
    return ( (struct StrConcatIter_2194) { .f_left = ( (  chars2199 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars703 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2194   chars2197 (    struct StrConcat_2191  self1516 ) {
    return ( (  into_dash_iter2198 ) ( (  self1516 ) ) );
}

static  struct Maybe_305   next2203 (    struct StrConcatIter_2195 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next2202 (    struct StrConcatIter_2194 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2203 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2190 (    struct Screen_284 *  screen3584 ,    struct StrConcat_2191  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1541 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min636 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size420 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct StrConcatIter_2194  temp2193 =  into_dash_iter2196 ( ( (  chars2197 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_305  __cond2201 =  next2202 (&temp2193);
        if (  __cond2201 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond2201 .stuff .Maybe_305_Just_s .field0;
        ( (  put_dash_char1945 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1112 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1905 (   struct env210* env ,    struct Screen_284 *  screen4103 ,    struct Pane_228 *  pane4105 ,    struct ScreenDims_287  sd4107 ,    struct Theme_181 *  theme4109 ) {
    bool  display_dash_line_dash_numbers4110 = ( true );
    ( (  update_dash_screen_dash_offset1906 ) ( (  pane4105 ) ,  (  sd4107 ) ) );
    struct ScreenCursorOffset_230  sc_dash_off4111 = ( ( * (  pane4105 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars4112 = ( (  size_dash_i32337 ) ( ( (  count1909 ) ( ( (  chars1925 ) ( ( (  num_dash_lines1140 ) ( ( ( * (  pane4105 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4113 = (  from_dash_integral67 ( 2 ) );
    int32_t  num_dash_back_dash_margin4114 = (  from_dash_integral67 ( 2 ) );
    int32_t  total_dash_margin4115 = ( (  display_dash_line_dash_numbers4110 ) ? (  op_dash_add168 ( (  op_dash_add168 ( (  max_dash_line_dash_num_dash_chars4112 ) , (  num_dash_front_dash_margin4113 ) ) ) , (  num_dash_back_dash_margin4114 ) ) ) : (  from_dash_integral67 ( 0 ) ) );
    struct RangeIter_162  temp1928 =  into_dash_iter163 ( ( (  to172 ) ( (  op_dash_add168 ( ( (  sc_dash_off4111 ) .f_screen_dash_top ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  ( (  min636 ) ( ( (  num_dash_lines1140 ) ( ( ( * (  pane4105 ) ) .f_buf ) ) ) ,  (  op_dash_add168 ( ( (  sc_dash_off4111 ) .f_screen_dash_top ) , ( (  screen_dash_height1908 ) ( (  sd4107 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1929 =  next165 (&temp1928);
        if (  __cond1929 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4117 =  __cond1929 .stuff .Maybe_164_Just_s .field0;
        int32_t  ybi4118 = (  op_dash_sub173 ( (  line_dash_num4117 ) , (  from_dash_integral67 ( 1 ) ) ) );
        int32_t  xbi4119 = ( (  vi_dash_bi1142 ) ( ( ( * (  pane4105 ) ) .f_buf ) ,  (  ybi4118 ) ,  ( (  sc_dash_off4111 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4120 = ( (  line1100 ) ( ( ( * (  pane4105 ) ) .f_buf ) ,  (  ybi4118 ) ) );
        int32_t  ys4121 = (  op_dash_sub173 ( (  op_dash_sub173 ( (  op_dash_add168 ( ( (  sd4107 ) .f_from_dash_sy ) , (  line_dash_num4117 ) ) ) , ( (  sc_dash_off4111 ) .f_screen_dash_top ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4110 ) ) {
            if ( (  eq526 ( ( ( ( * (  pane4105 ) ) .f_cursor ) .f_line ) , (  ybi4118 ) ) ) ) {
                ( (  set_dash_colors1930 ) ( (  screen4103 ) ,  ( ( * (  theme4109 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors1930 ) ( (  screen4103 ) ,  ( ( * (  theme4109 ) ) .f_line_dash_num ) ) );
            }
            ( (  draw_dash_str_dash_right1932 ) ( (  screen4103 ) ,  (  line_dash_num4117 ) ,  (  op_dash_add168 ( (  op_dash_sub173 ( (  op_dash_sub173 ( ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen4103 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4107 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4115 ) ) ) , (  num_dash_back_dash_margin4114 ) ) ) ,  (  ys4121 ) ) );
            ( (  set_dash_colors1930 ) ( (  screen4103 ) ,  ( ( * (  theme4109 ) ) .f_default ) ) );
        }
        int32_t  vx4122 = (  op_dash_sub173 ( ( (  pos_dash_vi1098 ) ( ( ( * (  pane4105 ) ) .f_buf ) ,  ( (  mk672 ) ( (  ybi4118 ) ,  (  xbi4119 ) ) ) ) ) , ( (  sc_dash_off4111 ) .f_screen_dash_left ) ) );
        ( (  assert1948 ) ( (  cmp166 ( (  vx4122 ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1949_StrConcat ) ( ( (  from_dash_string208 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4122 ) ) ) ) );
        int32_t  left_dash_offset4123 = (  op_dash_add168 ( ( (  sd4107 ) .f_from_dash_sx ) , (  total_dash_margin4115 ) ) );
        struct AppendIter_1956  temp1955 =  into_dash_iter1957 ( ( (  append1958 ) ( ( (  chars701 ) ( ( (  byte_dash_substr_dash_from1534 ) ( (  line_dash_content4120 ) ,  ( (  i32_dash_size420 ) ( (  xbi4119 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_305  __cond1959 =  next1960 (&temp1955);
            if (  __cond1959 .tag == 0 ) {
                break;
            }
            struct Char_65  c4125 =  __cond1959 .stuff .Maybe_305_Just_s .field0;
            if ( (  cmp166 ( (  vx4122 ) , ( (  sd4107 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4126 = ( (  mk672 ) ( (  ybi4118 ) ,  (  xbi4119 ) ) );
            bool  is_dash_cursor4127 = (  eq525 ( (  curpos4126 ) , ( ( * (  pane4105 ) ) .f_cursor ) ) );
            bool  in_dash_selection4128 = ( (  is_dash_in_dash_selection1961 ) ( (  pane4105 ) ,  ( (  mk672 ) ( (  ybi4118 ) ,  (  xbi4119 ) ) ) ) );
            if ( (  is_dash_cursor4127 ) ) {
                ( (  set_dash_colors1930 ) ( (  screen4103 ) ,  ( ( * (  theme4109 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4128 ) ) {
                    ( (  set_dash_colors1930 ) ( (  screen4103 ) ,  ( ( * (  theme4109 ) ) .f_selection ) ) );
                } else {
                    struct envunion211  temp1967 = ( (struct envunion211){ .fun = (  struct Maybe_212  (*) (  struct env145*  ,    struct TextBuf_114 *  ,    struct Pos_26  ) )highlight_dash_at1968 , .env =  env->envinst145 } );
                    struct env1964 envinst1964 = {
                        .theme4109 =  theme4109 ,
                        .screen4103 =  screen4103 ,
                    };
                    ( (  if_dash_just1963 ) ( ( temp1967.fun ( &temp1967.env ,  ( ( * (  pane4105 ) ) .f_buf ) ,  (  curpos4126 ) ) ) ,  ( (struct envunion1965){ .fun = (  enum Unit_8  (*) (  struct env1964*  ,    enum HighlightType_20  ) )lam2157 , .env =  envinst1964 } ) ) );
                }
            }
            struct Maybe_94  dref4131 = ( (  char_dash_replacement1105 ) ( (  c4125 ) ) );
            if ( dref4131.tag == Maybe_94_None_t ) {
                if ( ( ! ( (  cmp166 ( (  vx4122 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  op_dash_sub173 ( (  op_dash_add168 ( (  vx4122 ) , ( (  char_dash_screen_dash_width1103 ) ( (  c4125 ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , ( (  sd4107 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1945 ) ( (  screen4103 ) ,  (  c4125 ) ,  (  op_dash_add168 ( (  left_dash_offset4123 ) , (  vx4122 ) ) ) ,  (  ys4121 ) ) );
                }
                vx4122 = (  op_dash_add168 ( (  vx4122 ) , ( (  char_dash_screen_dash_width1103 ) ( (  c4125 ) ) ) ) );
            }
            else {
                if ( dref4131.tag == Maybe_94_Just_t ) {
                    struct StrViewIter_62  temp2186 =  into_dash_iter787 ( ( (  chars701 ) ( ( dref4131 .stuff .Maybe_94_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_305  __cond2187 =  next689 (&temp2186);
                        if (  __cond2187 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4134 =  __cond2187 .stuff .Maybe_305_Just_s .field0;
                        if ( (  cmp166 ( (  vx4122 ) , (  from_dash_integral67 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1945 ) ( (  screen4103 ) ,  (  c4134 ) ,  (  op_dash_add168 ( (  left_dash_offset4123 ) , (  vx4122 ) ) ) ,  (  ys4121 ) ) );
                        }
                        vx4122 = (  op_dash_add168 ( (  vx4122 ) , ( (  char_dash_screen_dash_width1103 ) ( (  c4134 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors1930 ) ( (  screen4103 ) ,  ( ( * (  theme4109 ) ) .f_default ) ) );
            xbi4119 = (  op_dash_add168 ( (  xbi4119 ) , ( (  size_dash_i32337 ) ( ( (  c4125 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors1930 ) ( (  screen4103 ) ,  ( ( * (  theme4109 ) ) .f_overlay ) ) );
    struct StrView_27  modename4135 = ( (  short_dash_mode_dash_name2188 ) ( ( ( * (  pane4105 ) ) .f_mode ) ) );
    ( (  draw_dash_str2190 ) ( (  screen4103 ) ,  ( ( StrConcat_2191_StrConcat ) ( ( ( StrConcat_2192_StrConcat ) ( ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  modename4135 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4107 ) .f_from_dash_sx ) ,  ( (  sd4107 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2205 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct Screen_284 *  screen4515;
    ;
    ;
    ;
};

struct envunion2206 {
    enum Unit_8  (*fun) (  struct env2205*  ,    struct StrView_27  );
    struct env2205 env;
};

static  enum Unit_8   if_dash_just2204 (    struct Maybe_94  x1292 ,   struct envunion2206  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion2206  temp2207 = (  fun1294 );
        ( temp2207.fun ( &temp2207.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2208 (   struct env2205* env ,    struct StrView_27  msg4520 ) {
    int32_t  num_dash_chars4521 = ( (  size_dash_i32337 ) ( ( (  count1107 ) ( ( (  chars701 ) ( (  msg4520 ) ) ) ) ) ) );
    ( (  draw_dash_str2190 ) ( ( env->screen4515 ) ,  ( ( StrConcat_2191_StrConcat ) ( ( ( StrConcat_2192_StrConcat ) ( ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  msg4520 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1540 ( (  op_dash_sub173 ( ( (  u32_dash_i321891 ) ( ( ( * ( ( * ( env->screen4515 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4521 ) ) ) , (  from_dash_integral67 ( 2 ) ) ) ) ,  (  op_dash_sub173 ( ( (  u32_dash_i321891 ) ( ( ( * ( ( * ( env->screen4515 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2211 {
    struct StrView_27  field0;
    struct StrBuilder_73  field1;
};

static struct StrConcat_2211 StrConcat_2211_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_73  field1 ) {
    return ( struct StrConcat_2211 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2210 {
    struct StrConcat_2211  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2210 StrConcat_2210_StrConcat (  struct StrConcat_2211  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2210 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2209 {
    struct StrConcat_2210  field0;
    struct Char_65  field1;
};

static struct StrConcat_2209 StrConcat_2209_StrConcat (  struct StrConcat_2210  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2209 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2214 {
    struct StrConcatIter_61  f_left;
    struct StrViewIter_62  f_right;
};

struct StrConcatIter_2213 {
    struct StrConcatIter_2214  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2213   into_dash_iter2216 (    struct StrConcatIter_2213  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_305   next2218 (    struct StrConcatIter_2214 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next2217 (    struct StrConcatIter_2213 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2218 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2215 (    struct StrConcatIter_2213  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrConcatIter_2213  it1100 = ( (  into_dash_iter2216 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_305  dref1101 = ( (  next2217 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_305_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_305_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_305_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2219 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2219);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2220;
    return (  temp2220 );
}

static  size_t   lam2221 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add319 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2212 (    struct StrConcatIter_2213  it1105 ) {
    return ( (  reduce2215 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2221 ) ) );
}

static  struct StrConcatIter_61   into_dash_iter2227 (    struct StrConcat_2211  dref1505 ) {
    return ( (struct StrConcatIter_61) { .f_left = ( (  chars701 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1716 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_61   chars2226 (    struct StrConcat_2211  self1516 ) {
    return ( (  into_dash_iter2227 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2214   into_dash_iter2225 (    struct StrConcat_2210  dref1505 ) {
    return ( (struct StrConcatIter_2214) { .f_left = ( (  chars2226 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars701 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2214   chars2224 (    struct StrConcat_2210  self1516 ) {
    return ( (  into_dash_iter2225 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2213   into_dash_iter2223 (    struct StrConcat_2209  dref1505 ) {
    return ( (struct StrConcatIter_2213) { .f_left = ( (  chars2224 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars703 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2213   chars2222 (    struct StrConcat_2209  self1516 ) {
    return ( (  into_dash_iter2223 ) ( (  self1516 ) ) );
}

static  enum Unit_8   draw_dash_str2228 (    struct Screen_284 *  screen3584 ,    struct StrConcat_2209  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1541 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min636 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size420 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct StrConcatIter_2213  temp2229 =  into_dash_iter2216 ( ( (  chars2222 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_305  __cond2230 =  next2217 (&temp2229);
        if (  __cond2230 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond2230 .stuff .Maybe_305_Just_s .field0;
        ( (  put_dash_char1945 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1112 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2231 {
    struct StrConcat_2210  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2231 StrConcat_2231_StrConcat (  struct StrConcat_2210  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2231 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2233 {
    struct StrConcatIter_2214  f_left;
    struct StrViewIter_62  f_right;
};

static  struct StrConcatIter_2233   into_dash_iter2235 (    struct StrConcatIter_2233  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_305   next2236 (    struct StrConcatIter_2233 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2218 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2234 (    struct StrConcatIter_2233  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrConcatIter_2233  it1100 = ( (  into_dash_iter2235 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_305  dref1101 = ( (  next2236 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_305_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_305_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_305_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2237 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2237);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2238;
    return (  temp2238 );
}

static  size_t   lam2239 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add319 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2232 (    struct StrConcatIter_2233  it1105 ) {
    return ( (  reduce2234 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2239 ) ) );
}

static  struct StrConcatIter_2233   into_dash_iter2241 (    struct StrConcat_2231  dref1505 ) {
    return ( (struct StrConcatIter_2233) { .f_left = ( (  chars2224 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars701 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2233   chars2240 (    struct StrConcat_2231  self1516 ) {
    return ( (  into_dash_iter2241 ) ( (  self1516 ) ) );
}

static  enum Unit_8   draw_dash_str2242 (    struct Screen_284 *  screen3584 ,    struct StrConcat_2231  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1541 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min636 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size420 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct StrConcatIter_2233  temp2243 =  into_dash_iter2235 ( ( (  chars2240 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_305  __cond2244 =  next2236 (&temp2243);
        if (  __cond2244 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond2244 .stuff .Maybe_305_Just_s .field0;
        ( (  put_dash_char1945 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1112 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1903 (   struct env282* env ,    struct Screen_284 *  screen4515 ,    struct Editor_257 *  ed4517 ) {
    struct ScreenDims_287  screen_dash_dims4518 = ( (struct ScreenDims_287) { .f_from_dash_sx = (  from_dash_integral67 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub173 ( ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen4515 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral67 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub173 ( ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen4515 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) } );
    struct envunion283  temp1904 = ( (struct envunion283){ .fun = (  enum Unit_8  (*) (  struct env210*  ,    struct Screen_284 *  ,    struct Pane_228 *  ,    struct ScreenDims_287  ,    struct Theme_181 *  ) )render1905 , .env =  env->envinst210 } );
    ( temp1904.fun ( &temp1904.env ,  (  screen4515 ) ,  ( (  pane1137 ) ( (  ed4517 ) ) ) ,  (  screen_dash_dims4518 ) ,  ( ( * (  ed4517 ) ) .f_theme ) ) );
    struct env2205 envinst2205 = {
        .screen4515 =  screen4515 ,
    };
    ( (  if_dash_just2204 ) ( ( ( * (  ed4517 ) ) .f_msg ) ,  ( (struct envunion2206){ .fun = (  enum Unit_8  (*) (  struct env2205*  ,    struct StrView_27  ) )lam2208 , .env =  envinst2205 } ) ) );
    struct EditorMode_258  dref4522 = ( ( * (  ed4517 ) ) .f_mode );
    if ( dref4522.tag == EditorMode_258_Normal_t ) {
    }
    else {
        if ( dref4522.tag == EditorMode_258_Cmd_t ) {
            int32_t  num_dash_chars4524 = ( (  size_dash_i32337 ) ( ( (  count1107 ) ( ( (  chars1716 ) ( ( dref4522 .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4525 = ( (  eq526 ( ( (  mod1539 ) ( (  num_dash_chars4524 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) , (  from_dash_integral67 ( 0 ) ) ) ) ? ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1231 ) ( ( " " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4526 = (  op_dash_add168 ( (  num_dash_chars4524 ) , ( (  mod1539 ) ( (  num_dash_chars4524 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) ) );
            struct StrConcat_2209  full_dash_str4527 = ( ( StrConcat_2209_StrConcat ) ( ( ( StrConcat_2210_StrConcat ) ( ( ( StrConcat_2211_StrConcat ) ( ( (  from_dash_string208 ) ( ( " \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4522 .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ,  (  pad4525 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4528 = ( (  size_dash_i32337 ) ( ( (  count2212 ) ( ( (  chars2222 ) ( (  full_dash_str4527 ) ) ) ) ) ) );
            ( (  draw_dash_str2228 ) ( (  screen4515 ) ,  (  full_dash_str4527 ) ,  (  op_dash_div1540 ( (  op_dash_sub173 ( ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen4515 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4528 ) ) ) , (  from_dash_integral67 ( 2 ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
        }
        else {
            if ( dref4522.tag == EditorMode_258_Search_t ) {
                int32_t  num_dash_chars4530 = ( (  size_dash_i32337 ) ( ( (  count1107 ) ( ( (  chars1716 ) ( ( dref4522 .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4531 = ( (  eq526 ( ( (  mod1539 ) ( (  num_dash_chars4530 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) , (  from_dash_integral67 ( 0 ) ) ) ) ? ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1231 ) ( ( " " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4532 = (  op_dash_add168 ( (  num_dash_chars4530 ) , ( (  mod1539 ) ( (  num_dash_chars4530 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) ) );
                struct StrConcat_2231  full_dash_str4533 = ( ( StrConcat_2231_StrConcat ) ( ( ( StrConcat_2210_StrConcat ) ( ( ( StrConcat_2211_StrConcat ) ( ( (  from_dash_string208 ) ( ( " \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4522 .stuff .EditorMode_258_Search_s .field1 ) ) ) ,  (  pad4531 ) ) ) ,  ( (  from_dash_string208 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4534 = ( (  size_dash_i32337 ) ( ( (  count2232 ) ( ( (  chars2240 ) ( (  full_dash_str4533 ) ) ) ) ) ) );
                ( (  draw_dash_str2242 ) ( (  screen4515 ) ,  (  full_dash_str4533 ) ,  (  op_dash_div1540 ( (  op_dash_sub173 ( ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen4515 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4534 ) ) ) , (  from_dash_integral67 ( 2 ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
            }
        }
    }
    int32_t  temp2245 = (  from_dash_integral67 ( 0 ) );
    int32_t *  curline4535 = ( &temp2245 );
    return ( Unit_8_Unit );
}

struct RenderState_2247 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_147  f_fg;
    struct Color_147  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2254 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2254 StrConcat_2254_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2254 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2253 {
    struct StrConcat_2254  field0;
    struct Char_65  field1;
};

static struct StrConcat_2253 StrConcat_2253_StrConcat (  struct StrConcat_2254  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2253 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2252 {
    struct StrConcat_2253  field0;
    uint32_t  field1;
};

static struct StrConcat_2252 StrConcat_2252_StrConcat (  struct StrConcat_2253  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2252 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2251 {
    struct StrConcat_2252  field0;
    struct Char_65  field1;
};

static struct StrConcat_2251 StrConcat_2251_StrConcat (  struct StrConcat_2252  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2251 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2260 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2259 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_2260  f_right;
};

struct StrConcatIter_2258 {
    struct StrConcatIter_2259  f_left;
    struct AppendIter_63  f_right;
};

struct StrConcatIter_2257 {
    struct StrConcatIter_2258  f_left;
    struct IntStrIter_2260  f_right;
};

struct StrConcatIter_2256 {
    struct StrConcatIter_2257  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2256   into_dash_iter2262 (    struct StrConcatIter_2256  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_305   next2267 (    struct IntStrIter_2260 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_305_Just ) ( ( (  from_dash_charlike354 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    uint32_t  trim_dash_down1430 = ( (  pow157 ) ( (  from_dash_integral174 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    uint32_t  upper1431 = (  op_dash_div156 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    uint32_t  upper_dash_mask1432 = (  op_dash_mul176 ( (  op_dash_div156 ( (  upper1431 ) , (  from_dash_integral174 ( 10 ) ) ) ) , (  from_dash_integral174 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast154 ) ( (  op_dash_sub178 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81050 ) ( (  op_dash_add946 ( (  digit1433 ) , (  from_dash_integral316 ( 48 ) ) ) ) ) );
    return ( ( Maybe_305_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_305   next2266 (    struct StrConcatIter_2259 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next2267 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next2265 (    struct StrConcatIter_2258 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2266 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next2264 (    struct StrConcatIter_2257 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2265 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next2267 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next2263 (    struct StrConcatIter_2256 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2264 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2255 (    struct StrConcatIter_2256  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2256  temp2261 = ( (  into_dash_iter2262 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2256 *  it1078 = ( &temp2261 );
    while ( ( true ) ) {
        struct Maybe_305  dref1079 = ( (  next2263 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_305_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2278 (    uint32_t  self1437 ) {
    if ( (  eq587 ( (  self1437 ) , (  from_dash_integral174 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp179 ( (  self1437 ) , (  from_dash_integral174 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div156 ( (  self1437 ) , (  from_dash_integral174 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_2260   uint_dash_iter2277 (    uint32_t  int1444 ) {
    return ( (struct IntStrIter_2260) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits2278 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2260   chars2276 (    uint32_t  self1456 ) {
    return ( (  uint_dash_iter2277 ) ( (  self1456 ) ) );
}

static  struct StrConcatIter_2259   into_dash_iter2275 (    struct StrConcat_2254  dref1505 ) {
    return ( (struct StrConcatIter_2259) { .f_left = ( (  chars701 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2276 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2259   chars2274 (    struct StrConcat_2254  self1516 ) {
    return ( (  into_dash_iter2275 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2258   into_dash_iter2273 (    struct StrConcat_2253  dref1505 ) {
    return ( (struct StrConcatIter_2258) { .f_left = ( (  chars2274 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars703 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2258   chars2272 (    struct StrConcat_2253  self1516 ) {
    return ( (  into_dash_iter2273 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2257   into_dash_iter2271 (    struct StrConcat_2252  dref1505 ) {
    return ( (struct StrConcatIter_2257) { .f_left = ( (  chars2272 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2276 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2257   chars2270 (    struct StrConcat_2252  self1516 ) {
    return ( (  into_dash_iter2271 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2256   into_dash_iter2269 (    struct StrConcat_2251  dref1505 ) {
    return ( (struct StrConcatIter_2256) { .f_left = ( (  chars2270 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars703 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2256   chars2268 (    struct StrConcat_2251  self1516 ) {
    return ( (  into_dash_iter2269 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2250 (    struct StrConcat_2251  s2593 ) {
    ( (  for_dash_each2255 ) ( ( (  chars2268 ) ( (  s2593 ) ) ) ,  (  printf_dash_char344 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2249 (    uint32_t  x2607 ,    uint32_t  y2609 ) {
    uint32_t  x2610 = (  op_dash_add180 ( (  x2607 ) , (  from_dash_integral174 ( 1 ) ) ) );
    uint32_t  y2611 = (  op_dash_add180 ( (  y2609 ) , (  from_dash_integral174 ( 1 ) ) ) );
    ( (  print2250 ) ( ( ( StrConcat_2251_StrConcat ) ( ( ( StrConcat_2252_StrConcat ) ( ( ( StrConcat_2253_StrConcat ) ( ( ( StrConcat_2254_StrConcat ) ( ( (  from_dash_string208 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2611 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2610 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_285   subslice2281 (    struct Slice_285  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Cell_286 *  begin_dash_ptr1789 = ( (  offset_dash_ptr863 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp298 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp298 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_285) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub297 ( ( (  min507 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_285) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

struct SliceIter_2284 {
    struct Slice_285  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2283 {
    struct SliceIter_2284  f_left_dash_it;
    struct SliceIter_2284  f_right_dash_it;
};

struct Tuple2_2285 {
    struct Cell_286  field0;
    struct Cell_286  field1;
};

static struct Tuple2_2285 Tuple2_2285_Tuple2 (  struct Cell_286  field0 ,  struct Cell_286  field1 ) {
    return ( struct Tuple2_2285 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2287 {
    bool (*  fun1136 )(    struct Tuple2_2285  );
};

struct envunion2288 {
    bool  (*fun) (  struct env2287*  ,    struct Tuple2_2285  ,    bool  );
    struct env2287 env;
};

static  struct Zip_2283   into_dash_iter2289 (    struct Zip_2283  self912 ) {
    return (  self912 );
}

struct Maybe_2290 {
    enum {
        Maybe_2290_None_t,
        Maybe_2290_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2285  field0;
        } Maybe_2290_Just_s;
    } stuff;
};

static struct Maybe_2290 Maybe_2290_Just (  struct Tuple2_2285  field0 ) {
    return ( struct Maybe_2290 ) { .tag = Maybe_2290_Just_t, .stuff = { .Maybe_2290_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_868   next2292 (    struct SliceIter_2284 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp298 ( (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_868) { .tag = Maybe_868_None_t } );
    }
    struct Cell_286  elem1832 = ( * ( (  offset_dash_ptr863 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64310 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add319 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_868_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2290   next2291 (    struct Zip_2283 *  self915 ) {
    struct Zip_2283  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_868  dref917 = ( (  next2292 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_868_None_t ) {
            return ( (struct Maybe_2290) { .tag = Maybe_2290_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_868_Just_t ) {
                struct Maybe_868  dref919 = ( (  next2292 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_868_None_t ) {
                    return ( (struct Maybe_2290) { .tag = Maybe_2290_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_868_Just_t ) {
                        ( (  next2292 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2292 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2290_Just ) ( ( ( Tuple2_2285_Tuple2 ) ( ( dref917 .stuff .Maybe_868_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_868_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2286 (    struct Zip_2283  iterable1094 ,    bool  base1096 ,   struct envunion2288  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct Zip_2283  it1100 = ( (  into_dash_iter2289 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_2290  dref1101 = ( (  next2291 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_2290_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_2290_Just_t ) {
                struct envunion2288  temp2293 = (  fun1098 );
                x1099 = ( temp2293.fun ( &temp2293.env ,  ( dref1101 .stuff .Maybe_2290_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2294 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2294);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2295;
    return (  temp2295 );
}

static  bool   lam2296 (   struct env2287* env ,    struct Tuple2_2285  e1138 ,    bool  x1140 ) {
    return ( ( ( env->fun1136 ) ( (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2282 (    struct Zip_2283  it1134 ,    bool (*  fun1136 )(    struct Tuple2_2285  ) ) {
    struct env2287 envinst2287 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2286 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2288){ .fun = (  bool  (*) (  struct env2287*  ,    struct Tuple2_2285  ,    bool  ) )lam2296 , .env =  envinst2287 } ) ) );
}

static  struct SliceIter_2284   into_dash_iter2298 (    struct Slice_285  self1824 ) {
    return ( (struct SliceIter_2284) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2283   zip2297 (    struct Slice_285  left923 ,    struct Slice_285  right925 ) {
    struct SliceIter_2284  left_dash_it926 = ( (  into_dash_iter2298 ) ( (  left923 ) ) );
    struct SliceIter_2284  right_dash_it927 = ( (  into_dash_iter2298 ) ( (  right925 ) ) );
    return ( (struct Zip_2283) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

struct Tuple2_2302 {
    struct Color_147  field0;
    struct Color_147  field1;
};

static struct Tuple2_2302 Tuple2_2302_Tuple2 (  struct Color_147  field0 ,  struct Color_147  field1 ) {
    return ( struct Tuple2_2302 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_148 *   cast2306 (    int32_t *  x356 ) {
    return ( (enum Color8_148 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2304 (    enum Color8_148  x574 ) {
    int32_t  temp2305 = ( (  zeroed1015 ) ( ) );
    int32_t *  y575 = ( &temp2305 );
    enum Color8_148 *  yp576 = ( (  cast2306 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2303 (    enum Color8_148  l2635 ,    enum Color8_148  r2637 ) {
    return (  eq526 ( ( ( (  cast_dash_on_dash_zeroed2304 ) ( (  l2635 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2304 ) ( (  r2637 ) ) ) ) );
}

static  enum Color16_149 *   cast2310 (    int32_t *  x356 ) {
    return ( (enum Color16_149 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2308 (    enum Color16_149  x574 ) {
    int32_t  temp2309 = ( (  zeroed1015 ) ( ) );
    int32_t *  y575 = ( &temp2309 );
    enum Color16_149 *  yp576 = ( (  cast2310 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2307 (    enum Color16_149  l2641 ,    enum Color16_149  r2643 ) {
    return (  eq526 ( ( ( (  cast_dash_on_dash_zeroed2308 ) ( (  l2641 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2308 ) ( (  r2643 ) ) ) ) );
}

static  bool   eq2311 (    struct RGB_150  l2671 ,    struct RGB_150  r2673 ) {
    return ( ( (  eq311 ( ( (  l2671 ) .f_r ) , ( (  r2673 ) .f_r ) ) ) && (  eq311 ( ( (  l2671 ) .f_g ) , ( (  r2673 ) .f_g ) ) ) ) && (  eq311 ( ( (  l2671 ) .f_b ) , ( (  r2673 ) .f_b ) ) ) );
}

static  bool   eq2301 (    struct Color_147  l2693 ,    struct Color_147  r2695 ) {
    return ( {  struct Tuple2_2302  dref2696 = ( ( Tuple2_2302_Tuple2 ) ( (  l2693 ) ,  (  r2695 ) ) ) ; dref2696 .field0.tag == Color_147_ColorDefault_t && dref2696 .field1.tag == Color_147_ColorDefault_t ? ( true ) : dref2696 .field0.tag == Color_147_Color8_t && dref2696 .field1.tag == Color_147_Color8_t ? (  eq2303 ( ( dref2696 .field0 .stuff .Color_147_Color8_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_Color8_s .field0 ) ) ) : dref2696 .field0.tag == Color_147_Color16_t && dref2696 .field1.tag == Color_147_Color16_t ? (  eq2307 ( ( dref2696 .field0 .stuff .Color_147_Color16_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_Color16_s .field0 ) ) ) : dref2696 .field0.tag == Color_147_Color256_t && dref2696 .field1.tag == Color_147_Color256_t ? (  eq311 ( ( dref2696 .field0 .stuff .Color_147_Color256_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_Color256_s .field0 ) ) ) : dref2696 .field0.tag == Color_147_ColorRGB_t && dref2696 .field1.tag == Color_147_ColorRGB_t ? (  eq2311 ( ( dref2696 .field0 .stuff .Color_147_ColorRGB_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2300 (    struct Cell_286  l3457 ,    struct Cell_286  r3459 ) {
    if ( ( !  eq583 ( ( (  l3457 ) .f_c ) , ( (  r3459 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2301 ( ( (  l3457 ) .f_fg ) , ( (  r3459 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2301 ( ( (  l3457 ) .f_bg ) , ( (  r3459 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2299 (    struct Tuple2_2285  dref3513 ) {
    return ( !  eq2300 ( ( dref3513 .field0 ) , ( dref3513 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2314 (  ) {
    ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82315 (    enum Color8_148  color2646 ) {
    enum Color8_148  dref2647 = (  color2646 );
    switch (  dref2647 ) {
        case Color8_148_Black8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Red8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Green8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Yellow8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Blue8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Magenta8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Cyan8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_White8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162316 (    enum Color16_149  color2650 ) {
    enum Color16_149  dref2651 = (  color2650 );
    switch (  dref2651 ) {
        case Color16_149_Black16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Red16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Green16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Yellow16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Blue16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Magenta16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Cyan16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_White16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlack16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightRed16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightGreen16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightYellow16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlue16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightMagenta16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightCyan16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightWhite16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2320 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2320 StrConcat_2320_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2320 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2319 {
    struct StrConcat_2320  field0;
    struct Char_65  field1;
};

static struct StrConcat_2319 StrConcat_2319_StrConcat (  struct StrConcat_2320  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2319 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2324 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2323 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_2324  f_right;
};

struct StrConcatIter_2322 {
    struct StrConcatIter_2323  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2322   into_dash_iter2326 (    struct StrConcatIter_2322  self1498 ) {
    return (  self1498 );
}

struct env2332 {
    uint8_t  base1211;
    ;
};

struct envunion2333 {
    uint8_t  (*fun) (  struct env2332*  ,    int32_t  ,    uint8_t  );
    struct env2332 env;
};

static  uint8_t   reduce2331 (    struct Range_159  iterable1094 ,    uint8_t  base1096 ,   struct envunion2333  fun1098 ) {
    uint8_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion2333  temp2334 = (  fun1098 );
                x1099 = ( temp2334.fun ( &temp2334.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2335 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2335);
    exit ( 1 );
    ( Unit_8_Unit );
    uint8_t  temp2336;
    return (  temp2336 );
}

static  uint8_t   op_dash_mul2338 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2337 (   struct env2332* env ,    int32_t  item1215 ,    uint8_t  x1217 ) {
    return (  op_dash_mul2338 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  uint8_t   pow2330 (    uint8_t  base1211 ,    int32_t  p1213 ) {
    struct env2332 envinst2332 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce2331 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral316 ( 1 ) ) ,  ( (struct envunion2333){ .fun = (  uint8_t  (*) (  struct env2332*  ,    int32_t  ,    uint8_t  ) )lam2337 , .env =  envinst2332 } ) ) );
}

static  uint8_t   op_dash_div2339 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2340 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_305   next2329 (    struct IntStrIter_2324 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_305_Just ) ( ( (  from_dash_charlike354 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_305) { .tag = Maybe_305_None_t } );
    }
    uint8_t  trim_dash_down1430 = ( (  pow2330 ) ( (  from_dash_integral316 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    uint8_t  upper1431 = (  op_dash_div2339 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    uint8_t  upper_dash_mask1432 = (  op_dash_mul2338 ( (  op_dash_div2339 ( (  upper1431 ) , (  from_dash_integral316 ( 10 ) ) ) ) , (  from_dash_integral316 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast2340 ) ( (  op_dash_sub945 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81050 ) ( (  op_dash_add946 ( (  digit1433 ) , (  from_dash_integral316 ( 48 ) ) ) ) ) );
    return ( ( Maybe_305_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_305   next2328 (    struct StrConcatIter_2323 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next2329 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next2327 (    struct StrConcatIter_2322 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2328 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2321 (    struct StrConcatIter_2322  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2322  temp2325 = ( (  into_dash_iter2326 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2322 *  it1078 = ( &temp2325 );
    while ( ( true ) ) {
        struct Maybe_305  dref1079 = ( (  next2327 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_305_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2347 (    uint8_t  self1437 ) {
    if ( (  eq311 ( (  self1437 ) , (  from_dash_integral316 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp315 ( (  self1437 ) , (  from_dash_integral316 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div2339 ( (  self1437 ) , (  from_dash_integral316 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_2324   uint_dash_iter2346 (    uint8_t  int1444 ) {
    return ( (struct IntStrIter_2324) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits2347 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2324   chars2345 (    uint8_t  self1462 ) {
    return ( (  uint_dash_iter2346 ) ( (  self1462 ) ) );
}

static  struct StrConcatIter_2323   into_dash_iter2344 (    struct StrConcat_2320  dref1505 ) {
    return ( (struct StrConcatIter_2323) { .f_left = ( (  chars701 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2345 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2323   chars2343 (    struct StrConcat_2320  self1516 ) {
    return ( (  into_dash_iter2344 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2322   into_dash_iter2342 (    struct StrConcat_2319  dref1505 ) {
    return ( (struct StrConcatIter_2322) { .f_left = ( (  chars2343 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars703 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2322   chars2341 (    struct StrConcat_2319  self1516 ) {
    return ( (  into_dash_iter2342 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2318 (    struct StrConcat_2319  s2593 ) {
    ( (  for_dash_each2321 ) ( ( (  chars2341 ) ( (  s2593 ) ) ) ,  (  printf_dash_char344 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562317 (    uint8_t  color2664 ) {
    ( (  print2318 ) ( ( ( StrConcat_2319_StrConcat ) ( ( ( StrConcat_2320_StrConcat ) ( ( (  from_dash_string208 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2664 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2353 {
    struct StrConcat_2319  field0;
    uint8_t  field1;
};

static struct StrConcat_2353 StrConcat_2353_StrConcat (  struct StrConcat_2319  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2353 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2352 {
    struct StrConcat_2353  field0;
    struct Char_65  field1;
};

static struct StrConcat_2352 StrConcat_2352_StrConcat (  struct StrConcat_2353  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2352 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2351 {
    struct StrConcat_2352  field0;
    uint8_t  field1;
};

static struct StrConcat_2351 StrConcat_2351_StrConcat (  struct StrConcat_2352  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2351 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2350 {
    struct StrConcat_2351  field0;
    struct Char_65  field1;
};

static struct StrConcat_2350 StrConcat_2350_StrConcat (  struct StrConcat_2351  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2350 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2358 {
    struct StrConcatIter_2322  f_left;
    struct IntStrIter_2324  f_right;
};

struct StrConcatIter_2357 {
    struct StrConcatIter_2358  f_left;
    struct AppendIter_63  f_right;
};

struct StrConcatIter_2356 {
    struct StrConcatIter_2357  f_left;
    struct IntStrIter_2324  f_right;
};

struct StrConcatIter_2355 {
    struct StrConcatIter_2356  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2355   into_dash_iter2360 (    struct StrConcatIter_2355  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_305   next2364 (    struct StrConcatIter_2358 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2327 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next2329 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next2363 (    struct StrConcatIter_2357 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2364 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next2362 (    struct StrConcatIter_2356 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2363 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next2329 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_305   next2361 (    struct StrConcatIter_2355 *  self1501 ) {
    struct Maybe_305  dref1502 = ( (  next2362 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_305_Just_t ) {
        return ( ( Maybe_305_Just ) ( ( dref1502 .stuff .Maybe_305_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_305_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2354 (    struct StrConcatIter_2355  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2355  temp2359 = ( (  into_dash_iter2360 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2355 *  it1078 = ( &temp2359 );
    while ( ( true ) ) {
        struct Maybe_305  dref1079 = ( (  next2361 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_305_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_305_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_305_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2358   into_dash_iter2372 (    struct StrConcat_2353  dref1505 ) {
    return ( (struct StrConcatIter_2358) { .f_left = ( (  chars2341 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2345 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2358   chars2371 (    struct StrConcat_2353  self1516 ) {
    return ( (  into_dash_iter2372 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2357   into_dash_iter2370 (    struct StrConcat_2352  dref1505 ) {
    return ( (struct StrConcatIter_2357) { .f_left = ( (  chars2371 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars703 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2357   chars2369 (    struct StrConcat_2352  self1516 ) {
    return ( (  into_dash_iter2370 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2356   into_dash_iter2368 (    struct StrConcat_2351  dref1505 ) {
    return ( (struct StrConcatIter_2356) { .f_left = ( (  chars2369 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2345 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2356   chars2367 (    struct StrConcat_2351  self1516 ) {
    return ( (  into_dash_iter2368 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2355   into_dash_iter2366 (    struct StrConcat_2350  dref1505 ) {
    return ( (struct StrConcatIter_2355) { .f_left = ( (  chars2367 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars703 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2355   chars2365 (    struct StrConcat_2350  self1516 ) {
    return ( (  into_dash_iter2366 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2349 (    struct StrConcat_2350  s2593 ) {
    ( (  for_dash_each2354 ) ( ( (  chars2365 ) ( (  s2593 ) ) ) ,  (  printf_dash_char344 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2348 (    struct RGB_150  c2686 ) {
    ( (  print2349 ) ( ( ( StrConcat_2350_StrConcat ) ( ( ( StrConcat_2351_StrConcat ) ( ( ( StrConcat_2352_StrConcat ) ( ( ( StrConcat_2353_StrConcat ) ( ( ( StrConcat_2319_StrConcat ) ( ( ( StrConcat_2320_StrConcat ) ( ( (  from_dash_string208 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2686 ) .f_r ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2686 ) .f_g ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2686 ) .f_b ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2313 (    struct Color_147  c2707 ) {
    struct Color_147  dref2708 = (  c2707 );
    if ( dref2708.tag == Color_147_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2314 ) ( ) );
    }
    else {
        if ( dref2708.tag == Color_147_Color8_t ) {
            ( (  set_dash_fg82315 ) ( ( dref2708 .stuff .Color_147_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2708.tag == Color_147_Color16_t ) {
                ( (  set_dash_fg162316 ) ( ( dref2708 .stuff .Color_147_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2708.tag == Color_147_Color256_t ) {
                    ( (  set_dash_fg2562317 ) ( ( dref2708 .stuff .Color_147_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2708.tag == Color_147_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2348 ) ( ( dref2708 .stuff .Color_147_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2374 (  ) {
    ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82375 (    enum Color8_148  color2654 ) {
    enum Color8_148  dref2655 = (  color2654 );
    switch (  dref2655 ) {
        case Color8_148_Black8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Red8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Green8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Yellow8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Blue8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Magenta8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Cyan8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_White8 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162376 (    enum Color16_149  color2658 ) {
    enum Color16_149  dref2659 = (  color2658 );
    switch (  dref2659 ) {
        case Color16_149_Black16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Red16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Green16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Yellow16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Blue16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Magenta16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Cyan16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_White16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlack16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightRed16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightGreen16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightYellow16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlue16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightMagenta16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightCyan16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightWhite16 : {
            ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562377 (    uint8_t  color2667 ) {
    ( (  print2318 ) ( ( ( StrConcat_2319_StrConcat ) ( ( ( StrConcat_2320_StrConcat ) ( ( (  from_dash_string208 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2667 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2378 (    struct RGB_150  c2689 ) {
    ( (  print2349 ) ( ( ( StrConcat_2350_StrConcat ) ( ( ( StrConcat_2351_StrConcat ) ( ( ( StrConcat_2352_StrConcat ) ( ( ( StrConcat_2353_StrConcat ) ( ( ( StrConcat_2319_StrConcat ) ( ( ( StrConcat_2320_StrConcat ) ( ( (  from_dash_string208 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2689 ) .f_r ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2689 ) .f_g ) ) ) ,  ( (  from_dash_charlike354 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2689 ) .f_b ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2373 (    struct Color_147  c2715 ) {
    struct Color_147  dref2716 = (  c2715 );
    if ( dref2716.tag == Color_147_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2374 ) ( ) );
    }
    else {
        if ( dref2716.tag == Color_147_Color8_t ) {
            ( (  set_dash_bg82375 ) ( ( dref2716 .stuff .Color_147_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2716.tag == Color_147_Color16_t ) {
                ( (  set_dash_bg162376 ) ( ( dref2716 .stuff .Color_147_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2716.tag == Color_147_Color256_t ) {
                    ( (  set_dash_bg2562377 ) ( ( dref2716 .stuff .Color_147_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2716.tag == Color_147_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2378 ) ( ( dref2716 .stuff .Color_147_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322379 (    int32_t  x604 ) {
    return ( (uint32_t ) (  x604 ) );
}

static  enum Unit_8   emit_dash_cell2312 (    struct RenderState_2247 *  rs3489 ,    struct Cell_286 *  c3491 ,    uint32_t  x3493 ,    uint32_t  y3495 ) {
    if ( ( ( !  eq587 ( (  x3493 ) , ( ( * (  rs3489 ) ) .f_x ) ) ) || ( !  eq587 ( (  y3495 ) , ( ( * (  rs3489 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2249 ) ( (  x3493 ) ,  (  y3495 ) ) );
        (*  rs3489 ) .f_x = (  x3493 );
        (*  rs3489 ) .f_y = (  y3495 );
    }
    struct Char_65  char3496 = ( ( * (  c3491 ) ) .f_c );
    struct Color_147  bg3497 = ( ( * (  c3491 ) ) .f_bg );
    if ( (  eq526 ( ( ( * (  c3491 ) ) .f_char_dash_width ) , (  op_dash_neg814 ( (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) {
        char3496 = ( (  from_dash_charlike354 ) ( ( " " ) ,  ( 1 ) ) );
        bg3497 = ( ( Color_147_Color8 ) ( ( Color8_148_Red8 ) ) );
    }
    if ( ( !  eq2301 ( ( ( * (  rs3489 ) ) .f_fg ) , ( ( * (  c3491 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2313 ) ( ( ( * (  c3491 ) ) .f_fg ) ) );
        (*  rs3489 ) .f_fg = ( ( * (  c3491 ) ) .f_fg );
    }
    if ( ( !  eq2301 ( ( ( * (  rs3489 ) ) .f_bg ) , (  bg3497 ) ) ) ) {
        ( (  set_dash_bg2373 ) ( (  bg3497 ) ) );
        (*  rs3489 ) .f_bg = (  bg3497 );
    }
    ( (  print_dash_str343 ) ( (  char3496 ) ) );
    uint32_t  char_dash_width3498 = ( (  i32_dash_u322379 ) ( ( (  max1113 ) ( ( ( * (  c3491 ) ) .f_char_dash_width ) ,  (  from_dash_integral67 ( 1 ) ) ) ) ) );
    (*  rs3489 ) .f_x = (  op_dash_add180 ( ( ( * (  rs3489 ) ) .f_x ) , (  char_dash_width3498 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2382 {
    struct SliceIter_2284  f_left_dash_it;
    struct FromIter_424  f_right_dash_it;
};

struct env2383 {
    ;
    ;
    struct Slice_285  dest1855;
};

struct Tuple2_2385 {
    struct Cell_286  field0;
    int32_t  field1;
};

static struct Tuple2_2385 Tuple2_2385_Tuple2 (  struct Cell_286  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2385 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2384 {
    enum Unit_8  (*fun) (  struct env2383*  ,    struct Tuple2_2385  );
    struct env2383 env;
};

static  struct Zip_2382   into_dash_iter2387 (    struct Zip_2382  self912 ) {
    return (  self912 );
}

struct Maybe_2388 {
    enum {
        Maybe_2388_None_t,
        Maybe_2388_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2385  field0;
        } Maybe_2388_Just_s;
    } stuff;
};

static struct Maybe_2388 Maybe_2388_Just (  struct Tuple2_2385  field0 ) {
    return ( struct Maybe_2388 ) { .tag = Maybe_2388_Just_t, .stuff = { .Maybe_2388_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2388   next2389 (    struct Zip_2382 *  self915 ) {
    struct Zip_2382  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_868  dref917 = ( (  next2292 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_868_None_t ) {
            return ( (struct Maybe_2388) { .tag = Maybe_2388_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_868_Just_t ) {
                struct Maybe_164  dref919 = ( (  next430 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_2388) { .tag = Maybe_2388_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next2292 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next430 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2388_Just ) ( ( ( Tuple2_2385_Tuple2 ) ( ( dref917 .stuff .Maybe_868_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2381 (    struct Zip_2382  iterable1075 ,   struct envunion2384  fun1077 ) {
    struct Zip_2382  temp2386 = ( (  into_dash_iter2387 ) ( (  iterable1075 ) ) );
    struct Zip_2382 *  it1078 = ( &temp2386 );
    while ( ( true ) ) {
        struct Maybe_2388  dref1079 = ( (  next2389 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_2388_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_2388_Just_t ) {
                struct envunion2384  temp2390 = (  fun1077 );
                ( temp2390.fun ( &temp2390.env ,  ( dref1079 .stuff .Maybe_2388_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2382   zip2391 (    struct Slice_285  left923 ,    struct FromIter_424  right925 ) {
    struct SliceIter_2284  left_dash_it926 = ( (  into_dash_iter2298 ) ( (  left923 ) ) );
    struct FromIter_424  right_dash_it927 = ( (  into_dash_iter434 ) ( (  right925 ) ) );
    return ( (struct Zip_2382) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   lam2392 (   struct env2383* env ,    struct Tuple2_2385  dref1856 ) {
    return ( (  set861 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size420 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2380 (    struct Slice_285  src1853 ,    struct Slice_285  dest1855 ) {
    if ( (  cmp298 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic469 ) ( ( ( StrConcat_470_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2383 envinst2383 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each2381 ) ( ( (  zip2391 ) ( (  src1853 ) ,  ( (  from435 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2384){ .fun = (  enum Unit_8  (*) (  struct env2383*  ,    struct Tuple2_2385  ) )lam2392 , .env =  envinst2383 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2246 (    struct Screen_284 *  screen3501 ) {
    int32_t  w3502 = ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3503 = ( (  u32_dash_i321891 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2247  temp2248 = ( (struct RenderState_2247) { .f_x = (  from_dash_integral174 ( 0 ) ) , .f_y = (  from_dash_integral174 ( 0 ) ) , .f_fg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_bg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_changes = (  from_dash_integral174 ( 0 ) ) } );
    struct RenderState_2247 *  rs3504 = ( &temp2248 );
    ( (  move_dash_cursor_dash_to2249 ) ( (  from_dash_integral174 ( 0 ) ) ,  (  from_dash_integral174 ( 0 ) ) ) );
    struct RangeIter_162  temp2279 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  h3503 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond2280 =  next165 (&temp2279);
        if (  __cond2280 .tag == 0 ) {
            break;
        }
        int32_t  y3506 =  __cond2280 .stuff .Maybe_164_Just_s .field0;
        int32_t  x_dash_v3507 = (  from_dash_integral67 ( 0 ) );
        while ( (  cmp166 ( (  x_dash_v3507 ) , (  w3502 ) ) == 0 ) ) {
            size_t  i3508 = ( (  i32_dash_size420 ) ( (  op_dash_add168 ( (  op_dash_mul1541 ( (  y3506 ) , (  w3502 ) ) ) , (  x_dash_v3507 ) ) ) ) );
            struct Cell_286 *  cur3509 = ( (  get_dash_ptr862 ) ( ( ( * (  screen3501 ) ) .f_current ) ,  (  i3508 ) ) );
            int32_t  char_dash_width3510 = ( (  max1113 ) ( ( ( * (  cur3509 ) ) .f_char_dash_width ) ,  (  from_dash_integral67 ( 1 ) ) ) );
            struct Slice_285  curs3511 = ( (  subslice2281 ) ( ( ( * (  screen3501 ) ) .f_current ) ,  (  i3508 ) ,  (  op_dash_add319 ( (  i3508 ) , ( (  i32_dash_size420 ) ( (  char_dash_width3510 ) ) ) ) ) ) );
            struct Slice_285  prevs3512 = ( (  subslice2281 ) ( ( ( * (  screen3501 ) ) .f_previous ) ,  (  i3508 ) ,  (  op_dash_add319 ( (  i3508 ) , ( (  i32_dash_size420 ) ( (  char_dash_width3510 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3501 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2282 ) ( ( (  zip2297 ) ( (  curs3511 ) ,  (  prevs3512 ) ) ) ,  (  lam2299 ) ) ) ) ) {
                (*  rs3504 ) .f_changes = (  op_dash_add180 ( ( ( * (  rs3504 ) ) .f_changes ) , (  from_dash_integral174 ( 1 ) ) ) );
                ( (  emit_dash_cell2312 ) ( (  rs3504 ) ,  (  cur3509 ) ,  ( (  i32_dash_u322379 ) ( (  x_dash_v3507 ) ) ) ,  ( (  i32_dash_u322379 ) ( (  y3506 ) ) ) ) );
                ( (  copy_dash_to2380 ) ( (  curs3511 ) ,  (  prevs3512 ) ) );
            }
            x_dash_v3507 = (  op_dash_add168 ( (  x_dash_v3507 ) , (  char_dash_width3510 ) ) );
        }
    }
    (*  screen3501 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors788 ) ( ) );
    ( (  flush_dash_stdout791 ) ( ) );
    return ( ( * (  rs3504 ) ) .f_changes );
}

static  void *   cast_dash_ptr2399 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2400 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2397 (  ) {
    struct timespec *  temp2398;
    struct timespec *  x571 = (  temp2398 );
    ( ( memset ) ( ( (  cast_dash_ptr2399 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of2400 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct timespec *   null_dash_ptr2396 (  ) {
    return ( (  zeroed2397 ) ( ) );
}

static  enum Unit_8   sync2393 (    struct Tui_100 *  tui3372 ) {
    if ( (  eq587 ( ( ( * (  tui3372 ) ) .f_target_dash_fps ) , (  from_dash_integral174 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3373 = (  op_dash_div1047 ( (  from_dash_integral296 ( 1000000000 ) ) , ( (  size_dash_i64310 ) ( ( (  u32_dash_size846 ) ( ( ( * (  tui3372 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2394 = ( (  undefined827 ) ( ) );
    struct timespec *  now3374 = ( &temp2394 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic829 ) ( ) ) ,  (  now3374 ) ) );
    int64_t  elapsed_dash_ns3375 = (  op_dash_add585 ( (  op_dash_mul294 ( (  op_dash_sub1049 ( ( ( * (  now3374 ) ) .tv_sec ) , ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral296 ( 1000000000 ) ) ) ) , (  op_dash_sub1049 ( ( ( * (  now3374 ) ) .tv_nsec ) , ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3376 = (  op_dash_sub1049 ( (  frame_dash_ns3373 ) , (  elapsed_dash_ns3375 ) ) );
    if ( (  cmp1065 ( (  sleep_dash_ns3376 ) , (  from_dash_integral296 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2395 = ( (struct timespec) { .tv_sec = (  from_dash_integral296 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3376 ) } );
        struct timespec *  ts3377 = ( &temp2395 );
        ( ( nanosleep ) ( (  ts3377 ) ,  ( (  null_dash_ptr2396 ) ( ) ) ) );
    }
    struct timespec  temp2401 = ( (  undefined827 ) ( ) );
    struct timespec *  last_dash_sync3378 = ( &temp2401 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic829 ) ( ) ) ,  (  last_dash_sync3378 ) ) );
    (*  tui3372 ) .f_last_dash_sync = ( * (  last_dash_sync3378 ) );
    (*  tui3372 ) .f_fps_dash_count = (  op_dash_add180 ( ( ( * (  tui3372 ) ) .f_fps_dash_count ) , (  from_dash_integral174 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3379 = (  op_dash_add585 ( (  op_dash_mul294 ( (  op_dash_sub1049 ( ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3372 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral296 ( 1000 ) ) ) ) , (  op_dash_div1047 ( (  op_dash_sub1049 ( ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3372 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral296 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1065 ( (  fps_dash_elapsed_dash_ms3379 ) , (  from_dash_integral296 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3372 ) .f_actual_dash_fps = ( ( * (  tui3372 ) ) .f_fps_dash_count );
        (*  tui3372 ) .f_fps_dash_count = (  from_dash_integral174 ( 0 ) );
        (*  tui3372 ) .f_fps_dash_ts = ( ( * (  tui3372 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2404 (    struct Cell_286 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2403 (    enum CAllocator_10  dref1961 ,    struct Slice_285  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2404 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2402 (    struct Screen_284 *  screen3477 ) {
    enum CAllocator_10  al3478 = ( ( * (  screen3477 ) ) .f_al );
    ( (  free2403 ) ( (  al3478 ) ,  ( ( * (  screen3477 ) ) .f_current ) ) );
    ( (  free2403 ) ( (  al3478 ) ,  ( ( * (  screen3477 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2406 (  ) {
    ( (  print_dash_str336 ) ( ( (  from_dash_string208 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2407 (  ) {
    ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2408 (  ) {
    ( (  print784 ) ( ( (  from_dash_string208 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2409 (    struct Termios_102 *  og_dash_termios3352 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno722 ) ( ) ) ,  ( (  tcsa_dash_flush782 ) ( ) ) ,  ( (  cast_dash_ptr723 ) ( (  og_dash_termios3352 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2405 (    struct Tui_100 *  tui3382 ) {
    ( (  disable_dash_mouse2406 ) ( ) );
    ( (  show_dash_cursor2407 ) ( ) );
    ( (  reset_dash_colors788 ) ( ) );
    ( (  clear_dash_screen789 ) ( ) );
    ( (  reset_dash_cursor_dash_position2408 ) ( ) );
    ( (  disable_dash_raw_dash_mode2409 ) ( ( & ( ( * (  tui3382 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout791 ) ( ) );
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
        .envinst6 = envinst6 ,
    };
    struct env51 envinst51 = {
        .envinst46 = envinst46 ,
    };
    struct env53 envinst53 = {
        .envinst48 = envinst48 ,
    };
    struct env56 envinst56 = {
        .envinst6 = envinst6 ,
        .envinst50 = envinst50 ,
    };
    ( ( setlocale ) ( ( (  lc_dash_ctype66 ) ( ) ) ,  ( (  from_dash_string68 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct env69 envinst69 = {
        .envinst46 = envinst46 ,
    };
    struct env71 envinst71 = {
        .envinst69 = envinst69 ,
    };
    struct env74 envinst74 = {
        .envinst71 = envinst71 ,
    };
    struct env76 envinst76 = {
        .envinst71 = envinst71 ,
    };
    struct env77 envinst77 = {
        .envinst71 = envinst71 ,
    };
    struct env78 envinst78 = {
        .envinst71 = envinst71 ,
    };
    struct env79 envinst79 = {
        .envinst76 = envinst76 ,
    };
    struct env82 envinst82 = {
        .envinst44 = envinst44 ,
    };
    struct env84 envinst84 = {
        .envinst74 = envinst74 ,
        .envinst71 = envinst71 ,
    };
    struct env89 envinst89 = {
        .envinst77 = envinst77 ,
        .envinst71 = envinst71 ,
    };
    struct env91 envinst91 = {
        .envinst78 = envinst78 ,
        .envinst71 = envinst71 ,
    };
    bool  temp95 = ( false );
    bool *  should_dash_resize3362 = ( &temp95 );
    struct env96 envinst96 = {
        .should_dash_resize3362 =  should_dash_resize3362 ,
    };
    struct env97 envinst97 = {
        .should_dash_resize3362 =  should_dash_resize3362 ,
    };
    struct env98 envinst98 = {
        .envinst97 = envinst97 ,
    };
    struct env104 envinst104 = {
        .envinst97 = envinst97 ,
    };
    struct env106 envinst106 = {
        .envinst51 = envinst51 ,
        .envinst37 = envinst37 ,
        .envinst46 = envinst46 ,
    };
    struct env110 envinst110 = {
        .envinst12 = envinst12 ,
        .envinst46 = envinst46 ,
        .envinst106 = envinst106 ,
        .envinst40 = envinst40 ,
        .envinst41 = envinst41 ,
    };
    struct env119 envinst119 = {
        .envinst79 = envinst79 ,
    };
    struct env121 envinst121 = {
        .envinst53 = envinst53 ,
    };
    struct env123 envinst123 = {
        .envinst110 = envinst110 ,
        .envinst121 = envinst121 ,
    };
    struct env126 envinst126 = {
        .envinst110 = envinst110 ,
    };
    struct env128 envinst128 = {
        .envinst110 = envinst110 ,
    };
    struct env130 envinst130 = {
        .envinst126 = envinst126 ,
    };
    struct env132 envinst132 = {
        .envinst128 = envinst128 ,
    };
    struct env134 envinst134 = {
        .envinst46 = envinst46 ,
    };
    struct env136 envinst136 = {
        .envinst21 = envinst21 ,
        .envinst28 = envinst28 ,
        .envinst134 = envinst134 ,
        .envinst128 = envinst128 ,
    };
    struct env141 envinst141 = {
        .envinst28 = envinst28 ,
    };
    struct env143 envinst143 = {
        .envinst35 = envinst35 ,
    };
    struct env145 envinst145 = {
        .envinst143 = envinst143 ,
    };
    struct Color_147  camel3977 = ( (  rgb151 ) ( (  from_dash_integral174 ( 11766360 ) ) ) );
    struct Color_147  olive3978 = ( (  rgb151 ) ( (  from_dash_integral174 ( 7303983 ) ) ) );
    struct Color_147  tea_dash_green3979 = ( (  rgb151 ) ( (  from_dash_integral174 ( 14875064 ) ) ) );
    struct Color_147  chocolate3980 = ( (  rgb151 ) ( (  from_dash_integral174 ( 13721620 ) ) ) );
    struct Color_147  muted_dash_olive3981 = ( (  rgb151 ) ( (  from_dash_integral174 ( 12308106 ) ) ) );
    struct Color_147  palm_dash_leaf3982 = ( (  rgb151 ) ( (  from_dash_integral174 ( 9674588 ) ) ) );
    struct Color_147  lime_dash_green3983 = ( (  rgb151 ) ( (  from_dash_integral174 ( 3263232 ) ) ) );
    struct Color_147  forest_dash_green3984 = ( (  rgb151 ) ( (  from_dash_integral174 ( 1153058 ) ) ) );
    struct Color_147  green3985 = ( (  rgb151 ) ( (  from_dash_integral174 ( 2781729 ) ) ) );
    struct Color_147  dark_dash_spruce3986 = ( (  rgb151 ) ( (  from_dash_integral174 ( 1983518 ) ) ) );
    struct Color_147  evergreen3987 = ( (  rgb151 ) ( (  from_dash_integral174 ( 1386004 ) ) ) );
    struct Array_188  temp190 = ( (  from_dash_listlike191 ) ( ( (struct Array_188) { ._arr = { ( (  hlt192 ) ( ( HighlightType_20_Number ) ,  (  green3985 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_String ) ,  (  camel3977 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_Comment ) ,  (  dark_dash_spruce3986 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_Ident1 ) ,  (  lime_dash_green3983 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_Ident2 ) ,  (  muted_dash_olive3981 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_Ident3 ) ,  (  tea_dash_green3979 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_Ident4 ) ,  (  palm_dash_leaf3982 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_Keyword1 ) ,  (  tea_dash_green3979 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_Keyword2 ) ,  (  chocolate3980 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_Special1 ) ,  (  olive3978 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_Special2 ) ,  (  forest_dash_green3984 ) ) ) , ( (  hlt192 ) ( ( HighlightType_20_Special3 ) ,  (  camel3977 ) ) ) , ( (struct HighlightColors_184) { .f_type = ( HighlightType_20_Invalid ) , .f_fg = (  evergreen3987 ) , .f_bg = ( ( Maybe_185_Just ) ( ( ( Color_147_Color8 ) ( ( Color8_148_Red8 ) ) ) ) ) } ) } } ) ) );
    struct Theme_181  temp186 = ( (struct Theme_181) { .f_default = ( (struct Colors_182) { .f_bg = (  evergreen3987 ) , .f_fg = (  lime_dash_green3983 ) } ) , .f_cursor = ( (struct Colors_182) { .f_bg = (  lime_dash_green3983 ) , .f_fg = (  evergreen3987 ) } ) , .f_selection = ( (struct Colors_182) { .f_bg = (  forest_dash_green3984 ) , .f_fg = (  evergreen3987 ) } ) , .f_line_dash_num = ( (struct Colors_182) { .f_bg = (  evergreen3987 ) , .f_fg = (  forest_dash_green3984 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_182) { .f_bg = (  evergreen3987 ) , .f_fg = (  tea_dash_green3979 ) } ) , .f_overlay = ( (struct Colors_182) { .f_bg = (  dark_dash_spruce3986 ) , .f_fg = (  lime_dash_green3983 ) } ) , .f_highlights = ( (  as_dash_slice187 ) ( ( &temp190 ) ) ) } );
    struct Theme_181 *  goblin_dash_ultra3988 = ( &temp186 );
    struct Theme_181  temp193 = ( (struct Theme_181) { .f_default = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color8 ) ( ( Color8_148_Black8 ) ) ) , .f_fg = ( ( Color_147_Color8 ) ( ( Color8_148_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color8 ) ( ( Color8_148_White8 ) ) ) , .f_fg = ( ( Color_147_Color8 ) ( ( Color8_148_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color16 ) ( ( Color16_149_BrightWhite16 ) ) ) , .f_fg = ( ( Color_147_Color16 ) ( ( Color16_149_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color8 ) ( ( Color8_148_Black8 ) ) ) , .f_fg = ( ( Color_147_Color8 ) ( ( Color8_148_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color8 ) ( ( Color8_148_White8 ) ) ) , .f_fg = ( ( Color_147_Color8 ) ( ( Color8_148_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color8 ) ( ( Color8_148_White8 ) ) ) , .f_fg = ( ( Color_147_Color8 ) ( ( Color8_148_Black8 ) ) ) } ) , .f_highlights = ( (  empty194 ) ( ) ) } );
    struct Theme_181 *  dark_dash_theme3989 = ( &temp193 );
    struct Theme_181  temp200 = ( (struct Theme_181) { .f_default = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color16 ) ( ( Color16_149_BrightWhite16 ) ) ) , .f_fg = ( ( Color_147_Color8 ) ( ( Color8_148_Black8 ) ) ) } ) , .f_cursor = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color8 ) ( ( Color8_148_Black8 ) ) ) , .f_fg = ( ( Color_147_Color16 ) ( ( Color16_149_BrightWhite16 ) ) ) } ) , .f_selection = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color16 ) ( ( Color16_149_White16 ) ) ) , .f_fg = ( ( Color_147_Color16 ) ( ( Color16_149_BrightWhite16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color16 ) ( ( Color16_149_BrightWhite16 ) ) ) , .f_fg = ( ( Color_147_Color8 ) ( ( Color8_148_Black8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color8 ) ( ( Color8_148_Black8 ) ) ) , .f_fg = ( ( Color_147_Color16 ) ( ( Color16_149_BrightWhite16 ) ) ) } ) , .f_overlay = ( (struct Colors_182) { .f_bg = ( ( Color_147_Color8 ) ( ( Color8_148_Black8 ) ) ) , .f_fg = ( ( Color_147_Color16 ) ( ( Color16_149_BrightWhite16 ) ) ) } ) , .f_highlights = ( (  empty194 ) ( ) ) } );
    struct Theme_181 *  light_dash_theme3990 = ( &temp200 );
    struct Theme_181 *  default3991 = (  goblin_dash_ultra3988 );
    struct Array_204  temp206 = ( (  from_dash_listlike207 ) ( ( (struct Array_204) { ._arr = { ( ( Tuple2_202_Tuple2 ) ( ( (  from_dash_string208 ) ( ( "default" ) ,  ( 7 ) ) ) ,  (  default3991 ) ) ) , ( ( Tuple2_202_Tuple2 ) ( ( (  from_dash_string208 ) ( ( "goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra3988 ) ) ) , ( ( Tuple2_202_Tuple2 ) ( ( (  from_dash_string208 ) ( ( "dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme3989 ) ) ) , ( ( Tuple2_202_Tuple2 ) ( ( (  from_dash_string208 ) ( ( "light-mono" ) ,  ( 10 ) ) ) ,  (  light_dash_theme3990 ) ) ) } } ) ) );
    struct Slice_201  all_dash_themes3992 = ( (  as_dash_slice203 ) ( ( &temp206 ) ) );
    struct env209 envinst209 = {
        .all_dash_themes3992 =  all_dash_themes3992 ,
    };
    struct env210 envinst210 = {
        .envinst145 = envinst145 ,
    };
    struct env213 envinst213 = {
        .envinst136 = envinst136 ,
    };
    struct env216 envinst216 = {
        .envinst136 = envinst136 ,
    };
    struct env218 envinst218 = {
        .envinst130 = envinst130 ,
    };
    struct env220 envinst220 = {
        .envinst132 = envinst132 ,
    };
    struct env222 envinst222 = {
        .envinst136 = envinst136 ,
    };
    struct env224 envinst224 = {
        .envinst136 = envinst136 ,
    };
    struct env226 envinst226 = {
        .envinst224 = envinst224 ,
        .envinst141 = envinst141 ,
    };
    struct env232 envinst232 = {
        .envinst136 = envinst136 ,
        .envinst141 = envinst141 ,
    };
    struct env235 envinst235 = {
        .envinst224 = envinst224 ,
    };
    struct env237 envinst237 = {
        .envinst213 = envinst213 ,
        .envinst222 = envinst222 ,
        .envinst141 = envinst141 ,
    };
    struct env242 envinst242 = {
        .envinst134 = envinst134 ,
    };
    struct env244 envinst244 = {
        .envinst84 = envinst84 ,
    };
    struct env246 envinst246 = {
        .envinst89 = envinst89 ,
    };
    struct env248 envinst248 = {
        .envinst91 = envinst91 ,
    };
    struct env250 envinst250 = {
        .envinst209 = envinst209 ,
    };
    struct env253 envinst253 = {
        .envinst119 = envinst119 ,
        .envinst246 = envinst246 ,
        .envinst248 = envinst248 ,
        .envinst244 = envinst244 ,
    };
    struct env261 envinst261 = {
        .envinst232 = envinst232 ,
        .envinst218 = envinst218 ,
        .envinst220 = envinst220 ,
        .envinst226 = envinst226 ,
        .envinst242 = envinst242 ,
        .envinst222 = envinst222 ,
        .envinst235 = envinst235 ,
        .envinst244 = envinst244 ,
        .envinst213 = envinst213 ,
        .envinst237 = envinst237 ,
    };
    struct env272 envinst272 = {
        .envinst250 = envinst250 ,
        .envinst216 = envinst216 ,
        .envinst261 = envinst261 ,
        .envinst253 = envinst253 ,
        .envinst235 = envinst235 ,
        .envinst71 = envinst71 ,
        .envinst213 = envinst213 ,
        .envinst82 = envinst82 ,
    };
    struct env282 envinst282 = {
        .envinst210 = envinst210 ,
    };
    enum CAllocator_10  al4539 = ( (  idc288 ) ( ) );
    struct TextBuf_114  temp290;
    struct TextBuf_114  temp289 = (  temp290 );
    struct TextBuf_114 *  tb4540 = ( &temp289 );
    struct Slice_291  args4543 = ( (  get292 ) ( ) );
    struct Maybe_94  initial_dash_message4544 = ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    if ( (  cmp298 ( ( (  args4543 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4545 = ( (  from_dash_const_dash_str299 ) ( (  elem_dash_get325 ( (  args4543 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion361  temp360 = ( (struct envunion361){ .fun = (  struct Maybe_359  (*) (  struct env123*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file362 , .env =  envinst123 } );
        struct Maybe_359  dref4546 = ( temp360.fun ( &temp360.env ,  (  al4539 ) ,  (  fname4545 ) ) );
        if ( dref4546.tag == Maybe_359_None_t ) {
            struct envunion674  temp673 = ( (struct envunion674){ .fun = (  struct TextBuf_114  (*) (  struct env121*  ,    enum CAllocator_10  ) )mk365 , .env =  envinst121 } );
            (*  tb4540 ) = ( temp673.fun ( &temp673.env ,  (  al4539 ) ) );
            struct envunion676  temp675 = ( (struct envunion676){ .fun = (  struct StrView_27  (*) (  struct env56*  ,    struct StrConcat_647  ,    enum CAllocator_10  ) )from_dash_str677 , .env =  envinst56 } );
            initial_dash_message4544 = ( ( Maybe_94_Just ) ( ( temp675.fun ( &temp675.env ,  ( ( StrConcat_647_StrConcat ) ( ( ( StrConcat_648_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Could not load file " ) ,  ( 20 ) ) ) ,  (  fname4545 ) ) ) ,  ( (  from_dash_charlike354 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ,  (  al4539 ) ) ) ) );
        }
        else {
            if ( dref4546.tag == Maybe_359_Just_t ) {
                (*  tb4540 ) = ( dref4546 .stuff .Maybe_359_Just_s .field0 );
            }
        }
    } else {
        struct envunion711  temp710 = ( (struct envunion711){ .fun = (  struct TextBuf_114  (*) (  struct env121*  ,    enum CAllocator_10  ) )mk365 , .env =  envinst121 } );
        (*  tb4540 ) = ( temp710.fun ( &temp710.env ,  (  al4539 ) ) );
    }
    struct Editor_257  temp712 = ( (struct Editor_257) { .f_running = ( true ) , .f_al = (  al4539 ) , .f_pane = ( (  mk713 ) ( (  al4539 ) ,  (  tb4540 ) ) ) , .f_clipboard = ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) , .f_search_dash_term = ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) , .f_mode = ( (struct EditorMode_258) { .tag = EditorMode_258_Normal_t } ) , .f_msg = (  initial_dash_message4544 ) , .f_theme = (  default3991 ) , .f_og_dash_theme = (  default3991 ) } );
    struct Editor_257 *  ed4548 = ( &temp712 );
    struct envunion716  temp715 = ( (struct envunion716){ .fun = (  struct Tui_100  (*) (  struct env96*  ) )mk717 , .env =  envinst96 } );
    struct Tui_100  temp714 = ( temp715.fun ( &temp715.env ) );
    struct Tui_100 *  tui4549 = ( &temp714 );
    struct Screen_284  temp839 = ( (  mk_dash_screen840 ) ( (  tui4549 ) ,  (  al4539 ) ) );
    struct Screen_284 *  screen4550 = ( &temp839 );
    uint32_t  last_dash_redraw_dash_changes4551 = (  from_dash_integral174 ( 0 ) );
    while ( ( ( * (  ed4548 ) ) .f_running ) ) {
        struct env884 envinst884 = {
            .envinst98 = envinst98 ,
            .tui4549 =  tui4549 ,
        };
        struct FunIter_883  temp882 =  into_dash_iter891 ( ( (  from_dash_function892 ) ( ( (struct envunion890){ .fun = (  struct Maybe_886  (*) (  struct env884*  ) )lam893 , .env =  envinst884 } ) ) ) );
        while (true) {
            struct Maybe_886  __cond1079 =  next1080 (&temp882);
            if (  __cond1079 .tag == 0 ) {
                break;
            }
            struct InputEvent_887  ev4553 =  __cond1079 .stuff .Maybe_886_Just_s .field0;
            struct InputEvent_887  dref4554 = (  ev4553 );
            if ( dref4554.tag == InputEvent_887_Key_t ) {
                ( (  reset_dash_msg1082 ) ( (  ed4548 ) ) );
                struct envunion1089  temp1088 = ( (struct envunion1089){ .fun = (  enum Unit_8  (*) (  struct env272*  ,    struct Editor_257 *  ,    struct Key_276  ) )handle_dash_key1090 , .env =  envinst272 } );
                ( temp1088.fun ( &temp1088.env ,  (  ed4548 ) ,  ( dref4554 .stuff .InputEvent_887_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1874  temp1873 = ( (struct envunion1874){ .fun = (  bool  (*) (  struct env104*  ,    struct Screen_284 *  ) )resize_dash_screen_dash_if_dash_needed1875 , .env =  envinst104 } );
        ( temp1873.fun ( &temp1873.env ,  (  screen4550 ) ) );
        if ( ( (  should_dash_redraw1877 ) ( (  tui4549 ) ) ) ) {
            (*  screen4550 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1878 ) ( (  screen4550 ) ) );
            ( (  set_dash_screen_dash_fg1887 ) ( (  screen4550 ) ,  ( ( ( * ( ( * (  ed4548 ) ) .f_theme ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1888 ) ( (  screen4550 ) ,  ( ( ( * ( ( * (  ed4548 ) ) .f_theme ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1889 ) ( (  screen4550 ) ) );
            struct envunion1902  temp1901 = ( (struct envunion1902){ .fun = (  enum Unit_8  (*) (  struct env282*  ,    struct Screen_284 *  ,    struct Editor_257 *  ) )render_dash_editor1903 , .env =  envinst282 } );
            ( temp1901.fun ( &temp1901.env ,  (  screen4550 ) ,  (  ed4548 ) ) );
            last_dash_redraw_dash_changes4551 = ( (  render_dash_screen2246 ) ( (  screen4550 ) ) );
        }
        ( (  sync2393 ) ( (  tui4549 ) ) );
    }
    ( (  free_dash_screen2402 ) ( (  screen4550 ) ) );
    ( (  deinit2405 ) ( (  tui4549 ) ) );
}
