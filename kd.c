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
    enum Unit_8  (*fun) (  struct env77*  ,    struct StrBuilder_73 *  ,    struct StrConcat_81  );
    struct env77 env;
};

struct env79 {
    ;
    struct env77 envinst77;
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
    enum Unit_8  (*fun) (  struct env76*  ,    struct StrBuilder_73 *  ,    struct StrView_27  );
    struct env76 env;
};

struct env89 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env76 envinst76;
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
    ;
    struct env136 envinst136;
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
    struct env136 envinst136;
    ;
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

struct envunion227 {
    enum Unit_8  (*fun) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  );
    struct env141 env;
};

enum Mode_230 {
    Mode_230_Normal,
    Mode_230_Insert,
    Mode_230_Select,
};

struct ScreenCursorOffset_231 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_229 {
    struct TextBuf_114 *  f_buf;
    struct Pos_26  f_cursor;
    int32_t  f_vi;
    struct Maybe_34  f_sel;
    enum Mode_230  f_mode;
    struct ScreenCursorOffset_231  f_sc_dash_off;
};

struct envunion228 {
    enum Unit_8  (*fun) (  struct env224*  ,    struct Pane_229 *  ,    int32_t  );
    struct env224 env;
};

struct env226 {
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

struct envunion236 {
    enum Unit_8  (*fun) (  struct env224*  ,    struct Pane_229 *  ,    int32_t  );
    struct env224 env;
};

struct env235 {
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
    ;
    ;
    ;
    ;
};

struct envunion238 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_229 *  ,    struct StrView_27  );
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
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct envunion241 {
    enum Unit_8  (*fun) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  );
    struct env141 env;
};

struct env237 {
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
    struct env222 envinst222;
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
    ;
};

struct envunion243 {
    struct StrView_27  (*fun) (  struct env134*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env134 env;
};

struct env242 {
    ;
    ;
    struct env134 envinst134;
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
    struct env84 envinst84;
    ;
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
    struct env91 envinst91;
    ;
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

struct Config_259 {
    struct Theme_181 *  f_theme;
    bool  f_display_dash_line_dash_numbers;
    bool  f_relative_dash_line_dash_numbers;
};

struct Editor_257 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_229  f_pane;
    struct Maybe_94  f_clipboard;
    struct Maybe_94  f_search_dash_term;
    struct EditorMode_258  f_mode;
    struct Maybe_94  f_msg;
    struct Config_259 *  f_cfg;
    struct Theme_181 *  f_og_dash_theme;
};

struct envunion256 {
    enum Unit_8  (*fun) (  struct env246*  ,    struct Editor_257 *  ,    struct StrView_27  );
    struct env246 env;
};

struct envunion260 {
    enum Unit_8  (*fun) (  struct env248*  ,    struct Editor_257 *  ,    struct StrConcat_93  );
    struct env248 env;
};

struct envunion261 {
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env246 envinst246;
    struct env248 envinst248;
    struct env244 envinst244;
};

struct envunion263 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_229 *  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion264 {
    enum Unit_8  (*fun) (  struct env237*  ,    struct Pane_229 *  );
    struct env237 env;
};

struct envunion265 {
    enum Unit_8  (*fun) (  struct env232*  ,    struct Pane_229 *  );
    struct env232 env;
};

struct envunion266 {
    enum Unit_8  (*fun) (  struct env218*  ,    struct Pane_229 *  );
    struct env218 env;
};

struct envunion267 {
    enum Unit_8  (*fun) (  struct env220*  ,    struct Pane_229 *  );
    struct env220 env;
};

struct envunion268 {
    enum Unit_8  (*fun) (  struct env226*  ,    struct Pane_229 *  );
    struct env226 env;
};

struct envunion269 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct envunion270 {
    enum Unit_8  (*fun) (  struct env242*  ,    struct Editor_257 *  );
    struct env242 env;
};

struct envunion271 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Pane_229 *  ,    int32_t  );
    struct env235 env;
};

struct envunion272 {
    enum Unit_8  (*fun) (  struct env244*  ,    struct Editor_257 *  ,    struct StrConcat_86  );
    struct env244 env;
};

struct env262 {
    struct env213 envinst213;
    ;
    ;
    struct env237 envinst237;
    ;
    ;
    ;
    ;
    ;
    struct env232 envinst232;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env218 envinst218;
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
    ;
    struct env222 envinst222;
    struct env242 envinst242;
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
    ;
    ;
    ;
    struct env244 envinst244;
    ;
};

struct envunion274 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_229 *  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion275 {
    enum Unit_8  (*fun) (  struct env250*  ,    struct Editor_257 *  ,    struct StrView_27  );
    struct env250 env;
};

struct envunion276 {
    enum Unit_8  (*fun) (  struct env216*  ,    struct Pane_229 *  );
    struct env216 env;
};

struct Key_278 {
    enum {
        Key_278_Escape_t,
        Key_278_Enter_t,
        Key_278_Tab_t,
        Key_278_Backspace_t,
        Key_278_Char_t,
        Key_278_Ctrl_t,
        Key_278_Up_t,
        Key_278_Down_t,
        Key_278_Left_t,
        Key_278_Right_t,
        Key_278_Home_t,
        Key_278_End_t,
        Key_278_PageUp_t,
        Key_278_PageDown_t,
        Key_278_Delete_t,
        Key_278_Insert_t,
        Key_278_F1_t,
        Key_278_F2_t,
        Key_278_F3_t,
        Key_278_F4_t,
        Key_278_F5_t,
        Key_278_F6_t,
        Key_278_F7_t,
        Key_278_F8_t,
        Key_278_F9_t,
        Key_278_F10_t,
        Key_278_F11_t,
        Key_278_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_278_Char_s;
        struct {
            char  field0;
        } Key_278_Ctrl_s;
    } stuff;
};

static struct Key_278 Key_278_Char (  char  field0 ) {
    return ( struct Key_278 ) { .tag = Key_278_Char_t, .stuff = { .Key_278_Char_s = { .field0 = field0 } } };
};

static struct Key_278 Key_278_Ctrl (  char  field0 ) {
    return ( struct Key_278 ) { .tag = Key_278_Ctrl_t, .stuff = { .Key_278_Ctrl_s = { .field0 = field0 } } };
};

struct envunion277 {
    enum Unit_8  (*fun) (  struct env262*  ,    struct Editor_257 *  ,    struct Key_278  );
    struct env262 env;
};

struct envunion279 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Pane_229 *  ,    int32_t  );
    struct env235 env;
};

struct envunion280 {
    enum Unit_8  (*fun) (  struct env253*  ,    struct Editor_257 *  ,    struct StrView_27  );
    struct env253 env;
};

struct envunion281 {
    enum Unit_8  (*fun) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  );
    struct env71 env;
};

struct envunion282 {
    enum Unit_8  (*fun) (  struct env82*  ,    struct StrBuilder_73 *  );
    struct env82 env;
};

struct env273 {
    ;
    struct env213 envinst213;
    ;
    struct env250 envinst250;
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
    ;
    ;
    ;
    ;
    ;
    ;
    struct env262 envinst262;
    ;
    ;
    struct env235 envinst235;
    struct env253 envinst253;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env71 envinst71;
    struct env82 envinst82;
    ;
};

struct Cell_287 {
    struct Char_65  f_c;
    struct Color_147  f_fg;
    struct Color_147  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_286 {
    struct Cell_287 *  f_ptr;
    size_t  f_count;
};

struct Screen_285 {
    enum CAllocator_10  f_al;
    struct Tui_100 *  f_tui;
    struct Slice_286  f_current;
    struct Slice_286  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_147  f_default_dash_fg;
    struct Color_147  f_default_dash_bg;
};

struct ScreenDims_288 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion284 {
    enum Unit_8  (*fun) (  struct env210*  ,    struct Screen_285 *  ,    struct Pane_229 *  ,    struct ScreenDims_288  ,    struct Config_259 *  );
    struct env210 env;
};

struct env283 {
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

static  enum CAllocator_10   idc289 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct Slice_292 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul295 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  const char* *   offset_dash_ptr294 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp296;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp296 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral297 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub298 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_292   get293 (  ) {
    return ( (struct Slice_292) { .f_ptr = ( (  offset_dash_ptr294 ) ( ( _global_argv ) ,  (  from_dash_integral297 ( 1 ) ) ) ) , .f_count = (  op_dash_sub298 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp299 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct ConstStrIter_303 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_303   into_dash_iter305 (    struct ConstStrIter_303  self1396 ) {
    return (  self1396 );
}

struct Maybe_306 {
    enum {
        Maybe_306_None_t,
        Maybe_306_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_306_Just_s;
    } stuff;
};

static struct Maybe_306 Maybe_306_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_306 ) { .tag = Maybe_306_Just_t, .stuff = { .Maybe_306_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   cast308 (    const char*  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint8_t *   offset_dash_ptr309 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp310;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp310 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64311 (    size_t  x595 ) {
    return ( (int64_t ) (  x595 ) );
}

static  bool   eq312 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   cast313 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp316 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  uint8_t   from_dash_integral317 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  size_t   next_dash_char315 (    uint8_t *  p689 ) {
    uint8_t  pb690 = ( * (  p689 ) );
    if ( (  cmp316 ( (  pb690 ) , (  from_dash_integral317 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp316 ( (  pb690 ) , (  from_dash_integral317 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp316 ( (  pb690 ) , (  from_dash_integral317 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp316 ( (  pb690 ) , (  from_dash_integral317 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp318 = ( (  from_dash_string68 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp318);
                    exit ( 1 );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem314 (    uint8_t *  p701 ) {
    size_t  clen702 = ( (  next_dash_char315 ) ( (  p701 ) ) );
    if ( (  cmp299 ( (  clen702 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp319 = ( (  from_dash_string68 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp319);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p701 ) , .f_num_dash_bytes = (  clen702 ) } );
}

static  size_t   op_dash_add320 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_306   next307 (    struct ConstStrIter_303 *  self1399 ) {
    uint8_t *  char_dash_ptr1400 = ( ( (  cast308 ) ( ( ( * (  self1399 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1401 = ( (  offset_dash_ptr309 ) ( (  char_dash_ptr1400 ) ,  ( (  size_dash_i64311 ) ( ( ( * (  self1399 ) ) .f_i ) ) ) ) );
    if ( (  eq312 ( ( * (  optr1401 ) ) , ( (  cast313 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    struct Char_65  char1402 = ( (  scan_dash_from_dash_mem314 ) ( (  optr1401 ) ) );
    (*  self1399 ) .f_i = (  op_dash_add320 ( ( ( * (  self1399 ) ) .f_i ) , ( (  char1402 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_306_Just ) ( (  char1402 ) ) );
}

static  size_t   reduce304 (    struct ConstStrIter_303  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct ConstStrIter_303  it1100 = ( (  into_dash_iter305 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_306  dref1101 = ( (  next307 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_306_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_306_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_306_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp321 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp321);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp322;
    return (  temp322 );
}

static  size_t   lam323 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add320 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count302 (    struct ConstStrIter_303  it1105 ) {
    return ( (  reduce304 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam323 ) ) );
}

static  struct ConstStrIter_303   into_dash_iter325 (    const char*  self1393 ) {
    return ( (struct ConstStrIter_303) { .f_ogstr = (  self1393 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_303   chars324 (    const char*  self1408 ) {
    return ( (  into_dash_iter325 ) ( (  self1408 ) ) );
}

static  size_t   const_dash_str_dash_len301 (    const char*  s1695 ) {
    return ( (  count302 ) ( ( (  chars324 ) ( (  s1695 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str300 (    const char*  s1993 ) {
    size_t  len1994 = ( (  const_dash_str_dash_len301 ) ( (  s1993 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  cast308 ) ( (  s1993 ) ) ) , .f_count = (  len1994 ) } ) } );
}

struct Maybe_329 {
    enum {
        Maybe_329_None_t,
        Maybe_329_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_329_Just_s;
    } stuff;
};

static struct Maybe_329 Maybe_329_Just (  const char*  field0 ) {
    return ( struct Maybe_329 ) { .tag = Maybe_329_Just_t, .stuff = { .Maybe_329_Just_s = { .field0 = field0 } } };
};

struct StrConcat_331 {
    struct StrConcat_86  field0;
    size_t  field1;
};

static struct StrConcat_331 StrConcat_331_StrConcat (  struct StrConcat_86  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_331 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_330 {
    struct StrConcat_331  field0;
    struct Char_65  field1;
};

static struct StrConcat_330 StrConcat_330_StrConcat (  struct StrConcat_331  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_330 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_335 {
    struct StrView_27  field0;
    struct StrConcat_330  field1;
};

static struct StrConcat_335 StrConcat_335_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_330  field1 ) {
    return ( struct StrConcat_335 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_334 {
    struct StrConcat_335  field0;
    struct Char_65  field1;
};

static struct StrConcat_334 StrConcat_334_StrConcat (  struct StrConcat_335  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_334 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32338 (    size_t  x631 ) {
    return ( (int32_t ) (  x631 ) );
}

static  enum Unit_8   print_dash_str337 (    struct StrView_27  self1380 ) {
    ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32338 ) ( ( ( (  self1380 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1380 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str343 (    size_t  self1471 ) {
    ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1471 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str342 (    struct StrConcat_87  self1510 ) {
    struct StrConcat_87  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str341 (    struct StrConcat_86  self1510 ) {
    struct StrConcat_86  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str342 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str340 (    struct StrConcat_331  self1510 ) {
    struct StrConcat_331  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str341 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Scalar_347 {
    uint32_t  f_value;
};

struct CharDestructured_346 {
    enum {
        CharDestructured_346_Ref_t,
        CharDestructured_346_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_346_Ref_s;
        struct {
            struct Scalar_347  field0;
        } CharDestructured_346_Scalar_s;
    } stuff;
};

static struct CharDestructured_346 CharDestructured_346_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_346 ) { .tag = CharDestructured_346_Ref_t, .stuff = { .CharDestructured_346_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_346 CharDestructured_346_Scalar (  struct Scalar_347  field0 ) {
    return ( struct CharDestructured_346 ) { .tag = CharDestructured_346_Scalar_t, .stuff = { .CharDestructured_346_Scalar_s = { .field0 = field0 } } };
};

static  uint8_t   size_dash_u8350 (    size_t  x640 ) {
    return ( (uint8_t ) (  x640 ) );
}

static  size_t   op_dash_div351 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer349 (    uint8_t *  ptr679 ) {
    return ( (  size_dash_u8350 ) ( (  op_dash_div351 ( ( ( (size_t ) (  ptr679 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint32_t   size_dash_u32352 (    size_t  x634 ) {
    return ( (uint32_t ) (  x634 ) );
}

static  size_t   cast353 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_346   destructure348 (    struct Char_65  c713 ) {
    if ( (  eq312 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer349 ) ( ( (  c713 ) .f_ptr ) ) ) , (  from_dash_integral317 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_346_Scalar ) ( ( (struct Scalar_347) { .f_value = ( (  size_dash_u32352 ) ( ( ( (  cast353 ) ( ( (  c713 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_346_Ref ) ( (  c713 ) ) );
    }
}

static  enum Unit_8   printf_dash_char345 (    struct Char_65  c759 ) {
    struct CharDestructured_346  dref760 = ( (  destructure348 ) ( (  c759 ) ) );
    if ( dref760.tag == CharDestructured_346_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32338 ) ( ( ( dref760 .stuff .CharDestructured_346_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref760 .stuff .CharDestructured_346_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref760.tag == CharDestructured_346_Scalar_t ) {
            if ( (  cmp179 ( ( ( dref760 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) , (  from_dash_integral174 ( 127 ) ) ) == 2 ) ) {
                const char*  temp354 = ( (  from_dash_string68 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp354);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8153 ) ( ( ( dref760 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str344 (    struct Char_65  self1411 ) {
    ( (  printf_dash_char345 ) ( (  self1411 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str339 (    struct StrConcat_330  self1510 ) {
    struct StrConcat_330  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str340 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str336 (    struct StrConcat_335  self1510 ) {
    struct StrConcat_335  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str339 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str333 (    struct StrConcat_334  self1510 ) {
    struct StrConcat_334  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str336 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  uint8_t *   cast356 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_charlike355 (    uint8_t *  ptr705 ,    size_t  num_dash_bytes707 ) {
    uint8_t *  ptr708 = ( ( (  cast356 ) ( (  ptr705 ) ) ) );
    return ( (  scan_dash_from_dash_mem314 ) ( (  ptr708 ) ) );
}

static  enum Unit_8   panic332 (    struct StrConcat_330  errmsg1714 ) {
    ( (  print_dash_str333 ) ( ( ( StrConcat_334_StrConcat ) ( ( ( StrConcat_335_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  const char*   undefined357 (  ) {
    const char*  temp358;
    return (  temp358 );
}

static  const char*   or_dash_fail328 (    struct Maybe_329  x1727 ,    struct StrConcat_330  errmsg1729 ) {
    struct Maybe_329  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_329_None_t ) {
        ( (  panic332 ) ( (  errmsg1729 ) ) );
        return ( (  undefined357 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_329_Just_t ) {
            return ( dref1730 .stuff .Maybe_329_Just_s .field0 );
        }
    }
}

static  struct Maybe_329   try_dash_get359 (    struct Slice_292  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp299 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_329) { .tag = Maybe_329_None_t } );
    }
    const char* *  elem_dash_ptr1768 = ( (  offset_dash_ptr294 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_329_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  const char*   get327 (    struct Slice_292  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail328 ) ( ( (  try_dash_get359 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get326 (    struct Slice_292  self1869 ,    size_t  idx1871 ) {
    return ( (  get327 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

struct Maybe_360 {
    enum {
        Maybe_360_None_t,
        Maybe_360_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_114  field0;
        } Maybe_360_Just_s;
    } stuff;
};

static struct Maybe_360 Maybe_360_Just (  struct TextBuf_114  field0 ) {
    return ( struct Maybe_360 ) { .tag = Maybe_360_Just_t, .stuff = { .Maybe_360_Just_s = { .field0 = field0 } } };
};

struct envunion362 {
    struct Maybe_360  (*fun) (  struct env123*  ,    enum CAllocator_10  ,    struct StrView_27  );
    struct env123 env;
};

static  void *   cast_dash_ptr375 (    struct Line_16 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of376 (    struct Line_16 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Line_16 *   zeroed373 (  ) {
    struct Line_16 *  temp374;
    struct Line_16 *  x571 = (  temp374 );
    ( ( memset ) ( ( (  cast_dash_ptr375 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of376 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Line_16 *   null_dash_ptr372 (  ) {
    return ( (  zeroed373 ) ( ) );
}

static  struct Slice_15   empty371 (  ) {
    return ( (struct Slice_15) { .f_ptr = ( (  null_dash_ptr372 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_14   mk370 (    enum CAllocator_10  al2033 ) {
    struct Slice_15  elements2034 = ( (  empty371 ) ( ) );
    return ( (struct List_14) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env380 {
    struct env12 envinst12;
    struct List_14 *  list2100;
};

struct envunion381 {
    enum Unit_8  (*fun) (  struct env380*  ,    struct Line_16  );
    struct env380 env;
};

struct ArrayIter_382 {
    struct Array_55  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_382   into_dash_iter384 (    struct Array_55  self2327 ) {
    return ( (struct ArrayIter_382) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_385 {
    enum {
        Maybe_385_None_t,
        Maybe_385_Just_t,
    } tag;
    union {
        struct {
            struct Line_16  field0;
        } Maybe_385_Just_s;
    } stuff;
};

static struct Maybe_385 Maybe_385_Just (  struct Line_16  field0 ) {
    return ( struct Maybe_385 ) { .tag = Maybe_385_Just_t, .stuff = { .Maybe_385_Just_s = { .field0 = field0 } } };
};

struct StrConcat_391 {
    struct StrConcat_86  field0;
    int32_t  field1;
};

static struct StrConcat_391 StrConcat_391_StrConcat (  struct StrConcat_86  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_391 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_390 {
    struct StrConcat_391  field0;
    struct Char_65  field1;
};

static struct StrConcat_390 StrConcat_390_StrConcat (  struct StrConcat_391  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_390 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_394 {
    struct StrView_27  field0;
    struct StrConcat_390  field1;
};

static struct StrConcat_394 StrConcat_394_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_390  field1 ) {
    return ( struct StrConcat_394 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_393 {
    struct StrConcat_394  field0;
    struct Char_65  field1;
};

static struct StrConcat_393 StrConcat_393_StrConcat (  struct StrConcat_394  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_393 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str398 (    int32_t  self1447 ) {
    ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1447 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str397 (    struct StrConcat_391  self1510 ) {
    struct StrConcat_391  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str341 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str398 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str396 (    struct StrConcat_390  self1510 ) {
    struct StrConcat_390  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str397 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str395 (    struct StrConcat_394  self1510 ) {
    struct StrConcat_394  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str396 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str392 (    struct StrConcat_393  self1510 ) {
    struct StrConcat_393  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str395 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic389 (    struct StrConcat_390  errmsg1714 ) {
    ( (  print_dash_str392 ) ( ( ( StrConcat_393_StrConcat ) ( ( ( StrConcat_394_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Line_16 *   cast_dash_ptr399 (    struct Array_55 *  p359 ) {
    return ( (struct Line_16 * ) (  p359 ) );
}

static  struct Line_16 *   offset_dash_ptr400 (    struct Line_16 *  x338 ,    int64_t  count340 ) {
    struct Line_16  temp401;
    return ( (struct Line_16 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp401 ) ) ) ) ) ) ) ) );
}

static  struct Line_16 *   get_dash_ptr388 (    struct Array_55 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp299 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2258 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic389 ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  p2259 = ( ( (  cast_dash_ptr399 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr400 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct Line_16   get387 (    struct Array_55 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr388 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_385   next386 (    struct ArrayIter_382 *  self2334 ) {
    if ( (  cmp299 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_385) { .tag = Maybe_385_None_t } );
    }
    struct Line_16  e2336 = ( (  get387 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add320 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_385_Just ) ( (  e2336 ) ) );
}

static  enum Unit_8   for_dash_each379 (    struct Array_55  iterable1075 ,   struct envunion381  fun1077 ) {
    struct ArrayIter_382  temp383 = ( (  into_dash_iter384 ) ( (  iterable1075 ) ) );
    struct ArrayIter_382 *  it1078 = ( &temp383 );
    while ( ( true ) ) {
        struct Maybe_385  dref1079 = ( (  next386 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_385_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_385_Just_t ) {
                struct envunion381  temp402 = (  fun1077 );
                ( temp402.fun ( &temp402.env ,  ( dref1079 .stuff .Maybe_385_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  bool   eq408 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_411 {
    size_t  f_size;
};

static  struct TypeSize_411   get_dash_typesize410 (  ) {
    struct Line_16  temp412;
    return ( (struct TypeSize_411) { .f_size = ( sizeof( ( (  temp412 ) ) ) ) } );
}

static  struct Line_16 *   cast_dash_ptr413 (    void *  p359 ) {
    return ( (struct Line_16 * ) (  p359 ) );
}

static  size_t   op_dash_mul414 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_15   allocate409 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize410 ) ( ) ) ) .f_size );
    struct Line_16 *  ptr1959 = ( (  cast_dash_ptr413 ) ( ( ( malloc ) ( (  op_dash_mul414 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_15) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env415 {
    ;
    ;
    struct Slice_15  new_dash_slice2044;
};

struct Tuple2_417 {
    struct Line_16  field0;
    int32_t  field1;
};

static struct Tuple2_417 Tuple2_417_Tuple2 (  struct Line_16  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_417 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion416 {
    enum Unit_8  (*fun) (  struct env415*  ,    struct Tuple2_417  );
    struct env415 env;
};

static  struct Line_16 *   get_dash_ptr420 (    struct Slice_15  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp299 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  elem_dash_ptr1762 = ( (  offset_dash_ptr400 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set419 (    struct Slice_15  slice1776 ,    size_t  i1778 ,    struct Line_16  x1780 ) {
    struct Line_16 *  ep1781 = ( (  get_dash_ptr420 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size421 (    int32_t  x610 ) {
    return ( (size_t ) ( (int64_t ) (  x610 ) ) );
}

static  enum Unit_8   lam418 (   struct env415* env ,    struct Tuple2_417  dref2045 ) {
    return ( (  set419 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size421 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct SliceIter_424 {
    struct Slice_15  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_425 {
    int32_t  f_from;
};

struct Zip_423 {
    struct SliceIter_424  f_left_dash_it;
    struct FromIter_425  f_right_dash_it;
};

static  struct Zip_423   into_dash_iter427 (    struct Zip_423  self912 ) {
    return (  self912 );
}

struct Maybe_428 {
    enum {
        Maybe_428_None_t,
        Maybe_428_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_417  field0;
        } Maybe_428_Just_s;
    } stuff;
};

static struct Maybe_428 Maybe_428_Just (  struct Tuple2_417  field0 ) {
    return ( struct Maybe_428 ) { .tag = Maybe_428_Just_t, .stuff = { .Maybe_428_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_385   next430 (    struct SliceIter_424 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_385) { .tag = Maybe_385_None_t } );
    }
    struct Line_16  elem1832 = ( * ( (  offset_dash_ptr400 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_385_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_164   next431 (    struct FromIter_425 *  dref906 ) {
    int32_t  v908 = ( ( (* dref906 ) ) .f_from );
    (* dref906 ) .f_from = (  op_dash_add168 ( ( ( (* dref906 ) ) .f_from ) , (  from_dash_integral67 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  v908 ) ) );
}

static  struct Maybe_428   next429 (    struct Zip_423 *  self915 ) {
    struct Zip_423  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_385  dref917 = ( (  next430 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_385_None_t ) {
            return ( (struct Maybe_428) { .tag = Maybe_428_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_385_Just_t ) {
                struct Maybe_164  dref919 = ( (  next431 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_428) { .tag = Maybe_428_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next430 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next431 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_428_Just ) ( ( ( Tuple2_417_Tuple2 ) ( ( dref917 .stuff .Maybe_385_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each422 (    struct Zip_423  iterable1075 ,   struct envunion416  fun1077 ) {
    struct Zip_423  temp426 = ( (  into_dash_iter427 ) ( (  iterable1075 ) ) );
    struct Zip_423 *  it1078 = ( &temp426 );
    while ( ( true ) ) {
        struct Maybe_428  dref1079 = ( (  next429 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_428_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_428_Just_t ) {
                struct envunion416  temp432 = (  fun1077 );
                ( temp432.fun ( &temp432.env ,  ( dref1079 .stuff .Maybe_428_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_424   into_dash_iter434 (    struct Slice_15  self1824 ) {
    return ( (struct SliceIter_424) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_425   into_dash_iter435 (    struct FromIter_425  it904 ) {
    return (  it904 );
}

static  struct Zip_423   zip433 (    struct Slice_15  left923 ,    struct FromIter_425  right925 ) {
    struct SliceIter_424  left_dash_it926 = ( (  into_dash_iter434 ) ( (  left923 ) ) );
    struct FromIter_425  right_dash_it927 = ( (  into_dash_iter435 ) ( (  right925 ) ) );
    return ( (struct Zip_423) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  struct FromIter_425   from436 (    int32_t  f901 ) {
    return ( (struct FromIter_425) { .f_from = (  f901 ) } );
}

static  void *   cast_dash_ptr438 (    struct Line_16 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free437 (    enum CAllocator_10  dref1961 ,    struct Slice_15  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr438 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full407 (   struct env2* env ,    struct List_14 *  list2043 ) {
    if ( (  eq408 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate409 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq408 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_15  new_dash_slice2044 = ( (  allocate409 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul414 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env415 envinst415 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion416  fun2048 = ( (struct envunion416){ .fun = (  enum Unit_8  (*) (  struct env415*  ,    struct Tuple2_417  ) )lam418 , .env =  envinst415 } );
            ( (  for_dash_each422 ) ( ( (  zip433 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free437 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add405 (   struct env12* env ,    struct List_14 *  list2051 ,    struct Line_16  elem2053 ) {
    struct envunion13  temp406 = ( (struct envunion13){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full407 , .env =  env->envinst2 } );
    ( temp406.fun ( &temp406.env ,  (  list2051 ) ) );
    ( (  set419 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add320 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam403 (   struct env380* env ,    struct Line_16  x2104 ) {
    struct envunion49  temp404 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add405 , .env =  env->envinst12 } );
    return ( temp404.fun ( &temp404.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all378 (   struct env48* env ,    struct List_14 *  list2100 ,    struct Array_55  it2102 ) {
    struct env380 envinst380 = {
        .envinst12 = env->envinst12 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each379 ) ( (  it2102 ) ,  ( (struct envunion381){ .fun = (  enum Unit_8  (*) (  struct env380*  ,    struct Line_16  ) )lam403 , .env =  envinst380 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_14   from_dash_iter368 (   struct env53* env ,    struct Array_55  iter2141 ,    enum CAllocator_10  al2143 ) {
    struct List_14  temp369 = ( (  mk370 ) ( (  al2143 ) ) );
    struct List_14 *  list2144 = ( &temp369 );
    struct envunion54  temp377 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_14 *  ,    struct Array_55  ) )add_dash_all378 , .env =  env->envinst48 } );
    ( temp377.fun ( &temp377.env ,  (  list2144 ) ,  (  iter2141 ) ) );
    return ( * (  list2144 ) );
}

static  struct Array_55   from_dash_listlike439 (    struct Array_55  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr446 (    struct Highlight_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of447 (    struct Highlight_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Highlight_19 *   zeroed444 (  ) {
    struct Highlight_19 *  temp445;
    struct Highlight_19 *  x571 = (  temp445 );
    ( ( memset ) ( ( (  cast_dash_ptr446 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of447 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Highlight_19 *   null_dash_ptr443 (  ) {
    return ( (  zeroed444 ) ( ) );
}

static  struct Slice_18   empty442 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr443 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk441 (    enum CAllocator_10  al2033 ) {
    struct Slice_18  elements2034 = ( (  empty442 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_16   mk_dash_line440 (    struct List_9  initial3707 ) {
    return ( (struct Line_16) { .f_line = (  initial3707 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk441 ) ( ( (  initial3707 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr453 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of454 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed451 (  ) {
    uint8_t *  temp452;
    uint8_t *  x571 = (  temp452 );
    ( ( memset ) ( ( (  cast_dash_ptr453 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of454 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   null_dash_ptr450 (  ) {
    return ( (  zeroed451 ) ( ) );
}

static  struct Slice_11   empty449 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr450 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk448 (    enum CAllocator_10  al2033 ) {
    struct Slice_11  elements2034 = ( (  empty449 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr461 (    struct Changeset_32 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of462 (    struct Changeset_32 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_32 *   zeroed459 (  ) {
    struct Changeset_32 *  temp460;
    struct Changeset_32 *  x571 = (  temp460 );
    ( ( memset ) ( ( (  cast_dash_ptr461 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of462 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Changeset_32 *   null_dash_ptr458 (  ) {
    return ( (  zeroed459 ) ( ) );
}

static  struct Slice_31   empty457 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr458 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk456 (    enum CAllocator_10  al2033 ) {
    struct Slice_31  elements2034 = ( (  empty457 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_115   mk_dash_actions455 (    enum CAllocator_10  al3695 ) {
    return ( (struct Actions_115) { .f_list = ( (  mk456 ) ( (  al3695 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_116_NoChangeset ) } );
}

static  struct TextBuf_114   mk366 (   struct env121* env ,    enum CAllocator_10  al3794 ) {
    struct envunion122  temp367 = ( (struct envunion122){ .fun = (  struct List_14  (*) (  struct env53*  ,    struct Array_55  ,    enum CAllocator_10  ) )from_dash_iter368 , .env =  env->envinst53 } );
    return ( (struct TextBuf_114) { .f_al = (  al3794 ) , .f_buf = ( temp367.fun ( &temp367.env ,  ( (  from_dash_listlike439 ) ( ( (struct Array_55) { ._arr = { ( (  mk_dash_line440 ) ( ( (  mk448 ) ( (  al3794 ) ) ) ) ) } } ) ) ) ,  (  al3794 ) ) ) , .f_actions = ( (  mk_dash_actions455 ) ( (  al3794 ) ) ) , .f_filename = ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) } );
}

struct TypeSize_466 {
    size_t  f_size;
};

static  struct TypeSize_466   get_dash_typesize465 (  ) {
    uint8_t  temp467;
    return ( (struct TypeSize_466) { .f_size = ( sizeof( ( (  temp467 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr468 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   allocate464 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize465 ) ( ) ) ) .f_size );
    uint8_t *  ptr1959 = ( (  cast_dash_ptr468 ) ( ( ( malloc ) ( (  op_dash_mul414 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct StrConcat_471 {
    struct StrConcat_331  field0;
    struct StrView_27  field1;
};

static struct StrConcat_471 StrConcat_471_StrConcat (  struct StrConcat_331  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_471 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_474 {
    struct StrView_27  field0;
    struct StrConcat_471  field1;
};

static struct StrConcat_474 StrConcat_474_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_471  field1 ) {
    return ( struct StrConcat_474 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_473 {
    struct StrConcat_474  field0;
    struct Char_65  field1;
};

static struct StrConcat_473 StrConcat_473_StrConcat (  struct StrConcat_474  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_473 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str476 (    struct StrConcat_471  self1510 ) {
    struct StrConcat_471  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str340 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str475 (    struct StrConcat_474  self1510 ) {
    struct StrConcat_474  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str476 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str472 (    struct StrConcat_473  self1510 ) {
    struct StrConcat_473  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str475 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic470 (    struct StrConcat_471  errmsg1714 ) {
    ( (  print_dash_str472 ) ( ( ( StrConcat_473_StrConcat ) ( ( ( StrConcat_474_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct SliceIter_479 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_478 {
    struct SliceIter_479  f_left_dash_it;
    struct FromIter_425  f_right_dash_it;
};

struct env480 {
    ;
    ;
    struct Slice_11  dest1855;
};

struct Tuple2_482 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_482 Tuple2_482_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_482 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion481 {
    enum Unit_8  (*fun) (  struct env480*  ,    struct Tuple2_482  );
    struct env480 env;
};

static  struct Zip_478   into_dash_iter484 (    struct Zip_478  self912 ) {
    return (  self912 );
}

struct Maybe_485 {
    enum {
        Maybe_485_None_t,
        Maybe_485_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_482  field0;
        } Maybe_485_Just_s;
    } stuff;
};

static struct Maybe_485 Maybe_485_Just (  struct Tuple2_482  field0 ) {
    return ( struct Maybe_485 ) { .tag = Maybe_485_Just_t, .stuff = { .Maybe_485_Just_s = { .field0 = field0 } } };
};

struct Maybe_487 {
    enum {
        Maybe_487_None_t,
        Maybe_487_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_487_Just_s;
    } stuff;
};

static struct Maybe_487 Maybe_487_Just (  uint8_t  field0 ) {
    return ( struct Maybe_487 ) { .tag = Maybe_487_Just_t, .stuff = { .Maybe_487_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_487   next488 (    struct SliceIter_479 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_487) { .tag = Maybe_487_None_t } );
    }
    uint8_t  elem1832 = ( * ( (  offset_dash_ptr309 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_487_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_485   next486 (    struct Zip_478 *  self915 ) {
    struct Zip_478  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_487  dref917 = ( (  next488 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_487_None_t ) {
            return ( (struct Maybe_485) { .tag = Maybe_485_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_487_Just_t ) {
                struct Maybe_164  dref919 = ( (  next431 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_485) { .tag = Maybe_485_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next488 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next431 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_485_Just ) ( ( ( Tuple2_482_Tuple2 ) ( ( dref917 .stuff .Maybe_487_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each477 (    struct Zip_478  iterable1075 ,   struct envunion481  fun1077 ) {
    struct Zip_478  temp483 = ( (  into_dash_iter484 ) ( (  iterable1075 ) ) );
    struct Zip_478 *  it1078 = ( &temp483 );
    while ( ( true ) ) {
        struct Maybe_485  dref1079 = ( (  next486 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_485_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_485_Just_t ) {
                struct envunion481  temp489 = (  fun1077 );
                ( temp489.fun ( &temp489.env ,  ( dref1079 .stuff .Maybe_485_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_479   into_dash_iter491 (    struct Slice_11  self1824 ) {
    return ( (struct SliceIter_479) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_478   zip490 (    struct Slice_11  left923 ,    struct FromIter_425  right925 ) {
    struct SliceIter_479  left_dash_it926 = ( (  into_dash_iter491 ) ( (  left923 ) ) );
    struct FromIter_425  right_dash_it927 = ( (  into_dash_iter435 ) ( (  right925 ) ) );
    return ( (struct Zip_478) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  uint8_t *   get_dash_ptr494 (    struct Slice_11  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp299 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1762 = ( (  offset_dash_ptr309 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set493 (    struct Slice_11  slice1776 ,    size_t  i1778 ,    uint8_t  x1780 ) {
    uint8_t *  ep1781 = ( (  get_dash_ptr494 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam492 (   struct env480* env ,    struct Tuple2_482  dref1856 ) {
    return ( (  set493 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size421 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to469 (    struct Slice_11  src1853 ,    struct Slice_11  dest1855 ) {
    if ( (  cmp299 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic470 ) ( ( ( StrConcat_471_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env480 envinst480 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each477 ) ( ( (  zip490 ) ( (  src1853 ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  ( (struct envunion481){ .fun = (  enum Unit_8  (*) (  struct env480*  ,    struct Tuple2_482  ) )lam492 , .env =  envinst480 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   char_dash_u8495 (    struct Char_65  c719 ) {
    struct CharDestructured_346  dref720 = ( (  destructure348 ) ( (  c719 ) ) );
    if ( dref720.tag == CharDestructured_346_Ref_t ) {
        return ( * ( ( dref720 .stuff .CharDestructured_346_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref720.tag == CharDestructured_346_Scalar_t ) {
            return ( (  u32_dash_u8153 ) ( ( ( dref720 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_27   clone_dash_0463 (    struct StrView_27  s2157 ,    enum CAllocator_10  al2159 ) {
    size_t  cnt2160 = ( ( (  s2157 ) .f_contents ) .f_count );
    struct Slice_11  nus2161 = ( (  allocate464 ) ( (  al2159 ) ,  (  op_dash_add320 ( (  cnt2160 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to469 ) ( ( (  s2157 ) .f_contents ) ,  (  nus2161 ) ) );
    ( (  set493 ) ( (  nus2161 ) ,  (  cnt2160 ) ,  ( (  char_dash_u8495 ) ( ( (  from_dash_charlike355 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2161 ) .f_ptr ) , .f_count = (  cnt2160 ) } ) } );
}

static  const char*   from_dash_charlike497 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr502 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of503 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed500 (  ) {
    FILE *  temp501;
    FILE *  x571 = (  temp501 );
    ( ( memset ) ( ( (  cast_dash_ptr502 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of503 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  FILE *   null_dash_ptr499 (  ) {
    return ( (  zeroed500 ) ( ) );
}

static  bool   is_dash_ptr_dash_null498 (    FILE *  p581 ) {
    return ( (  p581 ) == ( (  null_dash_ptr499 ) ( ) ) );
}

static  int32_t   seek_dash_end504 (  ) {
    return (  from_dash_integral67 ( 2 ) );
}

static  int32_t   seek_dash_set505 (  ) {
    return (  from_dash_integral67 ( 0 ) );
}

static  struct Char_65   nullchar506 (  ) {
    return ( (  from_dash_charlike355 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  size_t   min508 (    size_t  l1237 ,    size_t  r1239 ) {
    if ( (  cmp299 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Slice_11   subslice507 (    struct Slice_11  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    uint8_t *  begin_dash_ptr1789 = ( (  offset_dash_ptr309 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp299 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp299 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub298 ( ( (  min508 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct Maybe_94   try_dash_read_dash_contents496 (    const char*  filename2962 ,    enum CAllocator_10  al2964 ) {
    FILE *  file2965 = ( ( fopen ) ( (  filename2962 ) ,  ( (  from_dash_charlike497 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null498 ) ( (  file2965 ) ) ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    ( ( fseek ) ( (  file2965 ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  seek_dash_end504 ) ( ) ) ) );
    int32_t  file_dash_size2966 = ( ( ftell ) ( (  file2965 ) ) );
    ( ( fseek ) ( (  file2965 ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  seek_dash_set505 ) ( ) ) ) );
    struct Slice_11  file_dash_buf2967 = ( ( (  allocate464 ) ( (  al2964 ) ,  (  op_dash_add320 ( ( (  i32_dash_size421 ) ( (  file_dash_size2966 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2967 ) .f_ptr ) ,  (  file_dash_size2966 ) ,  (  from_dash_integral67 ( 1 ) ) ,  (  file2965 ) ) );
    ( (  set493 ) ( (  file_dash_buf2967 ) ,  ( (  i32_dash_size421 ) ( (  file_dash_size2966 ) ) ) ,  ( (  char_dash_u8495 ) ( ( (  nullchar506 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2965 ) ) );
    struct StrView_27  str2968 = ( (struct StrView_27) { .f_contents = ( (  subslice507 ) ( (  file_dash_buf2967 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub298 ( ( (  file_dash_buf2967 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_94_Just ) ( (  str2968 ) ) );
}

static  const char*   cast510 (    uint8_t *  x356 ) {
    return ( (const char* ) (  x356 ) );
}

static  const char*   as_dash_const_dash_str509 (    struct StrView_27  s2164 ) {
    return ( (  cast510 ) ( ( ( (  s2164 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr513 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free512 (    enum CAllocator_10  dref1961 ,    struct Slice_11  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr513 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free511 (    struct StrView_27  s2172 ,    enum CAllocator_10  al2174 ) {
    ( (  free512 ) ( (  al2174 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2172 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

struct Tuple2_515 {
    struct Maybe_487  field0;
    struct Maybe_487  field1;
};

static struct Tuple2_515 Tuple2_515_Tuple2 (  struct Maybe_487  field0 ,  struct Maybe_487  field1 ) {
    return ( struct Tuple2_515 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq514 (    struct Maybe_487  l141 ,    struct Maybe_487  r143 ) {
    struct Tuple2_515  dref144 = ( ( Tuple2_515_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_487_None_t && dref144 .field1.tag == Maybe_487_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_487_Just_t && dref144 .field1.tag == Maybe_487_Just_t ) {
            return (  eq312 ( ( dref144 .field0 .stuff .Maybe_487_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_487_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  struct Maybe_487   try_dash_get516 (    struct Slice_11  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp299 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_487) { .tag = Maybe_487_None_t } );
    }
    uint8_t *  elem_dash_ptr1768 = ( (  offset_dash_ptr309 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_487_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  uint8_t   ascii_dash_u8517 (    char  c777 ) {
    return ( ( (uint8_t ) (  c777 ) ) );
}

static  char   from_dash_charlike518 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq408 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp519 = ( (  from_dash_string68 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp519);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

static  struct StrView_27   byte_dash_substr520 (    struct StrView_27  s2188 ,    size_t  from2190 ,    size_t  to2192 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice507 ) ( ( (  s2188 ) .f_contents ) ,  (  from2190 ) ,  (  to2192 ) ) ) } );
}

static  enum Ordering_167   cmp524 (    struct Pos_26  l3629 ,    struct Pos_26  r3631 ) {
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

static  struct Pos_26   min523 (    struct Pos_26  l1237 ,    struct Pos_26  r1239 ) {
    if ( (  cmp524 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Pos_26   max525 (    struct Pos_26  l1316 ,    struct Pos_26  r1318 ) {
    if ( (  cmp524 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  bool   eq527 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq526 (    struct Pos_26  l3624 ,    struct Pos_26  r3626 ) {
    return ( (  eq527 ( ( (  l3624 ) .f_line ) , ( (  r3626 ) .f_line ) ) ) && (  eq527 ( ( (  l3624 ) .f_bi ) , ( (  r3626 ) .f_bi ) ) ) );
}

static  size_t   size528 (    struct List_14 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

static  struct Line_16 *   get_dash_ptr533 (    struct List_14 *  list2003 ,    size_t  i2005 ) {
    if ( ( (  cmp299 ( (  i2005 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2005 ) , ( ( * (  list2003 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2005 ) ) ) ,  ( (  from_dash_string208 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2003 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr420 ) ( ( ( * (  list2003 ) ) .f_elements ) ,  (  i2005 ) ) );
}

static  struct Line_16   get532 (    struct List_14 *  list2013 ,    size_t  i2015 ) {
    return ( * ( (  get_dash_ptr533 ) ( (  list2013 ) ,  (  i2015 ) ) ) );
}

static  struct Slice_11   from534 (    struct Slice_11  slice1793 ,    size_t  from1795 ) {
    return ( (  subslice507 ) ( (  slice1793 ) ,  (  from1795 ) ,  ( (  slice1793 ) .f_count ) ) );
}

static  struct Slice_11   to_dash_slice535 (    struct List_9  l2128 ) {
    uint8_t *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

static  enum Unit_8   set536 (    struct List_14 *  list2023 ,    size_t  i2025 ,    struct Line_16  elem2027 ) {
    if ( ( (  cmp299 ( (  i2025 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2025 ) , ( ( * (  list2023 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2025 ) ) ) ,  ( (  from_dash_string208 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2023 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set419 ) ( ( ( * (  list2023 ) ) .f_elements ) ,  (  i2025 ) ,  (  elem2027 ) ) );
    return ( Unit_8_Unit );
}

struct env543 {
    struct env6 envinst6;
    struct List_9 *  list2100;
};

struct envunion544 {
    enum Unit_8  (*fun) (  struct env543*  ,    uint8_t  );
    struct env543 env;
};

static  enum Unit_8   for_dash_each542 (    struct Slice_11  iterable1075 ,   struct envunion544  fun1077 ) {
    struct SliceIter_479  temp545 = ( (  into_dash_iter491 ) ( (  iterable1075 ) ) );
    struct SliceIter_479 *  it1078 = ( &temp545 );
    while ( ( true ) ) {
        struct Maybe_487  dref1079 = ( (  next488 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_487_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_487_Just_t ) {
                struct envunion544  temp546 = (  fun1077 );
                ( temp546.fun ( &temp546.env ,  ( dref1079 .stuff .Maybe_487_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env552 {
    ;
    ;
    struct Slice_11  new_dash_slice2044;
};

struct envunion553 {
    enum Unit_8  (*fun) (  struct env552*  ,    struct Tuple2_482  );
    struct env552 env;
};

static  enum Unit_8   lam554 (   struct env552* env ,    struct Tuple2_482  dref2045 ) {
    return ( (  set493 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size421 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

static  enum Unit_8   for_dash_each555 (    struct Zip_478  iterable1075 ,   struct envunion553  fun1077 ) {
    struct Zip_478  temp556 = ( (  into_dash_iter484 ) ( (  iterable1075 ) ) );
    struct Zip_478 *  it1078 = ( &temp556 );
    while ( ( true ) ) {
        struct Maybe_485  dref1079 = ( (  next486 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_485_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_485_Just_t ) {
                struct envunion553  temp557 = (  fun1077 );
                ( temp557.fun ( &temp557.env ,  ( dref1079 .stuff .Maybe_485_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full551 (   struct env1* env ,    struct List_9 *  list2043 ) {
    if ( (  eq408 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate464 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq408 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2044 = ( (  allocate464 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul414 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env552 envinst552 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion553  fun2048 = ( (struct envunion553){ .fun = (  enum Unit_8  (*) (  struct env552*  ,    struct Tuple2_482  ) )lam554 , .env =  envinst552 } );
            ( (  for_dash_each555 ) ( ( (  zip490 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free512 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add549 (   struct env6* env ,    struct List_9 *  list2051 ,    uint8_t  elem2053 ) {
    struct envunion7  temp550 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full551 , .env =  env->envinst1 } );
    ( temp550.fun ( &temp550.env ,  (  list2051 ) ) );
    ( (  set493 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add320 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam547 (   struct env543* env ,    uint8_t  x2104 ) {
    struct envunion47  temp548 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add549 , .env =  env->envinst6 } );
    return ( temp548.fun ( &temp548.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all541 (   struct env46* env ,    struct List_9 *  list2100 ,    struct Slice_11  it2102 ) {
    struct env543 envinst543 = {
        .envinst6 = env->envinst6 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each542 ) ( (  it2102 ) ,  ( (struct envunion544){ .fun = (  enum Unit_8  (*) (  struct env543*  ,    uint8_t  ) )lam547 , .env =  envinst543 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter538 (   struct env51* env ,    struct Slice_11  iter2141 ,    enum CAllocator_10  al2143 ) {
    struct List_9  temp539 = ( (  mk448 ) ( (  al2143 ) ) );
    struct List_9 *  list2144 = ( &temp539 );
    struct envunion52  temp540 = ( (struct envunion52){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all541 , .env =  env->envinst46 } );
    ( temp540.fun ( &temp540.env ,  (  list2144 ) ,  (  iter2141 ) ) );
    return ( * (  list2144 ) );
}

static  struct StrView_27   or_dash_else559 (    struct Maybe_94  self1734 ,    struct StrView_27  alt1736 ) {
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

struct LineIter_561 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  uint8_t   undefined565 (  ) {
    uint8_t  temp566;
    return (  temp566 );
}

static  uint8_t   or_dash_fail564 (    struct Maybe_487  x1727 ,    struct StrConcat_330  errmsg1729 ) {
    struct Maybe_487  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_487_None_t ) {
        ( (  panic332 ) ( (  errmsg1729 ) ) );
        return ( (  undefined565 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_487_Just_t ) {
            return ( dref1730 .stuff .Maybe_487_Just_s .field0 );
        }
    }
}

static  uint8_t   get563 (    struct Slice_11  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail564 ) ( ( (  try_dash_get516 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Maybe_94   next562 (    struct LineIter_561 *  self2434 ) {
    if ( (  cmp299 ( ( ( * (  self2434 ) ) .f_last ) , ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    size_t  i2435 = ( ( * (  self2434 ) ) .f_last );
    while ( ( (  cmp299 ( (  i2435 ) , ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq312 ( ( (  get563 ) ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) ,  (  i2435 ) ) ) , ( (  char_dash_u8495 ) ( ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2435 = (  op_dash_add320 ( (  i2435 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2436 = ( (  byte_dash_substr520 ) ( ( ( * (  self2434 ) ) .f_og ) ,  ( ( * (  self2434 ) ) .f_last ) ,  (  i2435 ) ) );
    if ( (  cmp299 ( (  i2435 ) , ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2435 = (  op_dash_add320 ( (  i2435 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2434 ) .f_last = (  i2435 );
    return ( ( Maybe_94_Just ) ( (  line2436 ) ) );
}

static  struct LineIter_561   into_dash_iter568 (    struct LineIter_561  self2431 ) {
    return (  self2431 );
}

static  struct Maybe_94   head560 (    struct LineIter_561  it1143 ) {
    struct LineIter_561  temp567 = ( (  into_dash_iter568 ) ( (  it1143 ) ) );
    return ( (  next562 ) ( ( &temp567 ) ) );
}

static  struct LineIter_561   lines569 (    struct StrView_27  s2428 ) {
    return ( (struct LineIter_561) { .f_og = (  s2428 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env574 {
    ;
    struct Char_65  c2227;
};

struct envunion575 {
    bool  (*fun) (  struct env574*  ,    struct Char_65  );
    struct env574 env;
};

struct SplitIter_573 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion575  f_fun;
};

struct Drop_572 {
    struct SplitIter_573  field0;
    size_t  field1;
};

static struct Drop_572 Drop_572_Drop (  struct SplitIter_573  field0 ,  size_t  field1 ) {
    return ( struct Drop_572 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_571 {
    struct Drop_572  f_left_dash_it;
    struct FromIter_425  f_right_dash_it;
};

static  struct Zip_571   into_dash_iter576 (    struct Zip_571  self912 ) {
    return (  self912 );
}

static  struct Drop_572   into_dash_iter578 (    struct Drop_572  self846 ) {
    return (  self846 );
}

static  struct Zip_571   zip577 (    struct Drop_572  left923 ,    struct FromIter_425  right925 ) {
    struct Drop_572  left_dash_it926 = ( (  into_dash_iter578 ) ( (  left923 ) ) );
    struct FromIter_425  right_dash_it927 = ( (  into_dash_iter435 ) ( (  right925 ) ) );
    return ( (struct Zip_571) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  struct SplitIter_573   into_dash_iter580 (    struct SplitIter_573  self2232 ) {
    return (  self2232 );
}

static  struct Drop_572   drop579 (    struct SplitIter_573  iterable853 ,    size_t  i855 ) {
    struct SplitIter_573  it856 = ( (  into_dash_iter580 ) ( (  iterable853 ) ) );
    return ( ( Drop_572_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SplitIter_573   split_dash_by_dash_filter582 (    struct StrView_27  s2220 ,   struct envunion575  fun2222 ) {
    return ( (struct SplitIter_573) { .f_og = (  s2220 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2222 ) } );
}

struct Tuple2_585 {
    struct CharDestructured_346  field0;
    struct CharDestructured_346  field1;
};

static struct Tuple2_585 Tuple2_585_Tuple2 (  struct CharDestructured_346  field0 ,  struct CharDestructured_346  field1 ) {
    return ( struct Tuple2_585 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add586 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq588 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq587 (    struct Scalar_347  l725 ,    struct Scalar_347  r727 ) {
    return (  eq588 ( ( (  l725 ) .f_value ) , ( (  r727 ) .f_value ) ) );
}

static  bool   eq584 (    struct Char_65  l730 ,    struct Char_65  r732 ) {
    if ( ( !  eq408 ( ( (  l730 ) .f_num_dash_bytes ) , ( (  r732 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_585  dref733 = ( ( Tuple2_585_Tuple2 ) ( ( (  destructure348 ) ( (  l730 ) ) ) ,  ( (  destructure348 ) ( (  r732 ) ) ) ) );
    if ( dref733 .field0.tag == CharDestructured_346_Ref_t && dref733 .field1.tag == CharDestructured_346_Ref_t ) {
        int64_t  i736 = (  from_dash_integral297 ( 0 ) );
        while ( (  cmp299 ( ( (size_t ) (  i736 ) ) , ( ( dref733 .field0 .stuff .CharDestructured_346_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq312 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref733 .field0 .stuff .CharDestructured_346_Ref_s .field0 ) .f_ptr ) ) + (  i736 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref733 .field1 .stuff .CharDestructured_346_Ref_s .field0 ) .f_ptr ) ) + (  i736 ) ) ) ) ) ) ) {
                return ( false );
            }
            i736 = (  op_dash_add586 ( (  i736 ) , (  from_dash_integral297 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref733 .field0.tag == CharDestructured_346_Scalar_t && dref733 .field1.tag == CharDestructured_346_Scalar_t ) {
            return (  eq587 ( ( dref733 .field0 .stuff .CharDestructured_346_Scalar_s .field0 ) , ( dref733 .field1 .stuff .CharDestructured_346_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref733 .field0.tag == CharDestructured_346_Scalar_t && dref733 .field1.tag == CharDestructured_346_Ref_t ) {
                return (  eq312 ( ( (  u32_dash_u8153 ) ( ( ( dref733 .field0 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref733 .field1 .stuff .CharDestructured_346_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref733 .field0.tag == CharDestructured_346_Ref_t && dref733 .field1.tag == CharDestructured_346_Scalar_t ) {
                    return (  eq312 ( ( (  u32_dash_u8153 ) ( ( ( dref733 .field1 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref733 .field0 .stuff .CharDestructured_346_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam583 (   struct env574* env ,    struct Char_65  cc2229 ) {
    return (  eq584 ( (  cc2229 ) , ( env->c2227 ) ) );
}

static  struct SplitIter_573   split_dash_by_dash_each581 (    struct StrView_27  s2225 ,    struct Char_65  c2227 ) {
    struct env574 envinst574 = {
        .c2227 =  c2227 ,
    };
    return ( (  split_dash_by_dash_filter582 ) ( (  s2225 ) ,  ( (struct envunion575){ .fun = (  bool  (*) (  struct env574*  ,    struct Char_65  ) )lam583 , .env =  envinst574 } ) ) );
}

struct Tuple2_591 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_591 Tuple2_591_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_591 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_590 {
    enum {
        Maybe_590_None_t,
        Maybe_590_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_591  field0;
        } Maybe_590_Just_s;
    } stuff;
};

static struct Maybe_590 Maybe_590_Just (  struct Tuple2_591  field0 ) {
    return ( struct Maybe_590 ) { .tag = Maybe_590_Just_t, .stuff = { .Maybe_590_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_94   next594 (    struct SplitIter_573 *  self2235 ) {
    if ( (  cmp299 ( ( ( * (  self2235 ) ) .f_last ) , ( ( ( ( * (  self2235 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    size_t  i2236 = ( ( * (  self2235 ) ) .f_last );
    while ( (  cmp299 ( (  i2236 ) , ( ( ( ( * (  self2235 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2237 = ( (  get_dash_ptr494 ) ( ( ( ( * (  self2235 ) ) .f_og ) .f_contents ) ,  (  i2236 ) ) );
        struct Char_65  c2238 = ( (  scan_dash_from_dash_mem314 ) ( (  ptr2237 ) ) );
        struct envunion575  temp595 = ( ( * (  self2235 ) ) .f_fun );
        if ( ( temp595.fun ( &temp595.env ,  (  c2238 ) ) ) ) {
            break;
        }
        i2236 = (  op_dash_add320 ( (  i2236 ) , ( (  next_dash_char315 ) ( (  ptr2237 ) ) ) ) );
    }
    struct StrView_27  line2239 = ( (  byte_dash_substr520 ) ( ( ( * (  self2235 ) ) .f_og ) ,  ( ( * (  self2235 ) ) .f_last ) ,  (  i2236 ) ) );
    i2236 = (  op_dash_add320 ( (  i2236 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2235 ) .f_last = (  i2236 );
    return ( ( Maybe_94_Just ) ( (  line2239 ) ) );
}

static  struct Maybe_94   next593 (    struct Drop_572 *  dref848 ) {
    while ( (  cmp299 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next594 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub298 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next594 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  struct Maybe_590   next592 (    struct Zip_571 *  self915 ) {
    struct Zip_571  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_94  dref917 = ( (  next593 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_94_None_t ) {
            return ( (struct Maybe_590) { .tag = Maybe_590_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_94_Just_t ) {
                struct Maybe_164  dref919 = ( (  next431 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_590) { .tag = Maybe_590_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next593 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next431 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_590_Just ) ( ( ( Tuple2_591_Tuple2 ) ( ( dref917 .stuff .Maybe_94_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion598 {
    struct List_9  (*fun) (  struct env51*  ,    struct Slice_11  ,    enum CAllocator_10  );
    struct env51 env;
};

static  enum Unit_8   insert600 (   struct env37* env ,    struct List_14 *  list2056 ,    size_t  i2058 ,    struct Line_16  elem2060 ) {
    if ( ( (  cmp299 ( (  i2058 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2058 ) , ( ( * (  list2056 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2058 ) ) ) ,  ( (  from_dash_string208 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq408 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp601 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add405 , .env =  env->envinst12 } );
        ( temp601.fun ( &temp601.env ,  (  list2056 ) ,  (  elem2060 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp602 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full407 , .env =  env->envinst2 } );
    ( temp602.fun ( &temp602.env ,  (  list2056 ) ) );
    size_t  ii2061 = (  op_dash_sub298 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp299 ( (  ii2061 ) , (  i2058 ) ) != 0 ) ) {
        ( (  set419 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  op_dash_add320 ( (  ii2061 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get532 ) ( (  list2056 ) ,  (  ii2061 ) ) ) ) );
        if ( (  eq408 ( (  ii2061 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2061 = (  op_dash_sub298 ( (  ii2061 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set419 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  i2058 ) ,  (  elem2060 ) ) );
    (*  list2056 ) .f_count = (  op_dash_add320 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion604 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  enum Unit_8   free606 (    struct List_9 *  list2037 ) {
    ( (  free512 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line605 (    struct Line_16 *  line3710 ) {
    ( (  free606 ) ( ( & ( ( * (  line3710 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot531 (   struct env106* env ,    struct TextBuf_114 *  self3743 ,    struct Pos_26  p3745 ,    struct StrView_27  bytes3747 ) {
    enum CAllocator_10  al3748 = ( ( ( * (  self3743 ) ) .f_buf ) .f_al );
    struct List_14 *  buf3749 = ( & ( ( * (  self3743 ) ) .f_buf ) );
    struct Line_16  extracted_dash_line_dash_buf3750 = ( (  get532 ) ( (  buf3749 ) ,  ( (  i32_dash_size421 ) ( ( (  p3745 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3751 = ( (  from534 ) ( ( (  to_dash_slice535 ) ( ( (  extracted_dash_line_dash_buf3750 ) .f_line ) ) ) ,  ( (  i32_dash_size421 ) ( ( (  p3745 ) .f_bi ) ) ) ) );
    struct envunion107  temp537 = ( (struct envunion107){ .fun = (  struct List_9  (*) (  struct env51*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter538 , .env =  env->envinst51 } );
    ( (  set536 ) ( (  buf3749 ) ,  ( (  i32_dash_size421 ) ( ( (  p3745 ) .f_line ) ) ) ,  ( (  mk_dash_line440 ) ( ( temp537.fun ( &temp537.env ,  ( (  subslice507 ) ( ( (  to_dash_slice535 ) ( ( (  extracted_dash_line_dash_buf3750 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size421 ) ( ( (  p3745 ) .f_bi ) ) ) ) ) ,  (  al3748 ) ) ) ) ) ) );
    struct Line_16 *  last_dash_line3752 = ( (  get_dash_ptr533 ) ( (  buf3749 ) ,  ( (  i32_dash_size421 ) ( ( (  p3745 ) .f_line ) ) ) ) );
    struct envunion109  temp558 = ( (struct envunion109){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all541 , .env =  env->envinst46 } );
    ( temp558.fun ( &temp558.env ,  ( & ( ( * (  last_dash_line3752 ) ) .f_line ) ) ,  ( ( (  or_dash_else559 ) ( ( (  head560 ) ( ( (  lines569 ) ( (  bytes3747 ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3753 = (  from_dash_integral67 ( 0 ) );
    struct Zip_571  temp570 =  into_dash_iter576 ( ( (  zip577 ) ( ( (  drop579 ) ( ( (  split_dash_by_dash_each581 ) ( (  bytes3747 ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_590  __cond589 =  next592 (&temp570);
        if (  __cond589 .tag == 0 ) {
            break;
        }
        struct Tuple2_591  dref3754 =  __cond589 .stuff .Maybe_590_Just_s .field0;
        struct envunion598  temp597 = ( (struct envunion598){ .fun = (  struct List_9  (*) (  struct env51*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter538 , .env =  env->envinst51 } );
        struct Line_16  temp596 = ( (  mk_dash_line440 ) ( ( temp597.fun ( &temp597.env ,  ( ( dref3754 .field0 ) .f_contents ) ,  (  al3748 ) ) ) ) );
        struct Line_16 *  nuline3757 = ( &temp596 );
        size_t  next_dash_line3758 = ( (  i32_dash_size421 ) ( (  op_dash_add168 ( ( (  p3745 ) .f_line ) , ( dref3754 .field1 ) ) ) ) );
        struct envunion108  temp599 = ( (struct envunion108){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_14 *  ,    size_t  ,    struct Line_16  ) )insert600 , .env =  env->envinst37 } );
        ( temp599.fun ( &temp599.env ,  (  buf3749 ) ,  (  next_dash_line3758 ) ,  ( * (  nuline3757 ) ) ) );
        last_dash_line3752 = ( (  get_dash_ptr533 ) ( (  buf3749 ) ,  (  next_dash_line3758 ) ) );
        lines_dash_added3753 = (  op_dash_add168 ( (  lines_dash_added3753 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    struct envunion604  temp603 = ( (struct envunion604){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all541 , .env =  env->envinst46 } );
    ( temp603.fun ( &temp603.env ,  ( & ( ( * (  last_dash_line3752 ) ) .f_line ) ) ,  (  remaining3751 ) ) );
    ( (  free_dash_line605 ) ( ( & (  extracted_dash_line_dash_buf3750 ) ) ) );
    return (  lines_dash_added3753 );
}

static  size_t   size607 (    struct List_9 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

struct StrConcat_613 {
    struct StrConcat_87  field0;
    struct Char_65  field1;
};

static struct StrConcat_613 StrConcat_613_StrConcat (  struct StrConcat_87  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_613 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_612 {
    struct StrConcat_613  field0;
    size_t  field1;
};

static struct StrConcat_612 StrConcat_612_StrConcat (  struct StrConcat_613  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_612 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_611 {
    struct StrConcat_612  field0;
    struct Char_65  field1;
};

static struct StrConcat_611 StrConcat_611_StrConcat (  struct StrConcat_612  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_611 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_616 {
    struct StrView_27  field0;
    struct StrConcat_611  field1;
};

static struct StrConcat_616 StrConcat_616_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_611  field1 ) {
    return ( struct StrConcat_616 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_615 {
    struct StrConcat_616  field0;
    struct Char_65  field1;
};

static struct StrConcat_615 StrConcat_615_StrConcat (  struct StrConcat_616  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_615 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str620 (    struct StrConcat_613  self1510 ) {
    struct StrConcat_613  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str342 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str619 (    struct StrConcat_612  self1510 ) {
    struct StrConcat_612  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str620 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str343 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str618 (    struct StrConcat_611  self1510 ) {
    struct StrConcat_611  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str619 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str617 (    struct StrConcat_616  self1510 ) {
    struct StrConcat_616  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str618 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str614 (    struct StrConcat_615  self1510 ) {
    struct StrConcat_615  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str617 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic610 (    struct StrConcat_611  errmsg1714 ) {
    ( (  print_dash_str614 ) ( ( ( StrConcat_615_StrConcat ) ( ( ( StrConcat_616_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Drop_622 {
    struct Zip_478  field0;
    size_t  field1;
};

static struct Drop_622 Drop_622_Drop (  struct Zip_478  field0 ,  size_t  field1 ) {
    return ( struct Drop_622 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env623 {
    struct List_9 *  list2064;
    ;
    ;
    size_t  num_dash_elems2069;
    ;
};

struct envunion624 {
    enum Unit_8  (*fun) (  struct env623*  ,    struct Tuple2_482  );
    struct env623 env;
};

static  struct Drop_622   into_dash_iter626 (    struct Drop_622  self846 ) {
    return (  self846 );
}

static  struct Maybe_485   next627 (    struct Drop_622 *  dref848 ) {
    while ( (  cmp299 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next486 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub298 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next486 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each621 (    struct Drop_622  iterable1075 ,   struct envunion624  fun1077 ) {
    struct Drop_622  temp625 = ( (  into_dash_iter626 ) ( (  iterable1075 ) ) );
    struct Drop_622 *  it1078 = ( &temp625 );
    while ( ( true ) ) {
        struct Maybe_485  dref1079 = ( (  next627 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_485_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_485_Just_t ) {
                struct envunion624  temp628 = (  fun1077 );
                ( temp628.fun ( &temp628.env ,  ( dref1079 .stuff .Maybe_485_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_622   drop629 (    struct Zip_478  iterable853 ,    size_t  i855 ) {
    struct Zip_478  it856 = ( (  into_dash_iter484 ) ( (  iterable853 ) ) );
    return ( ( Drop_622_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SliceIter_479   into_dash_iter631 (    struct List_9  self2030 ) {
    return ( (  into_dash_iter491 ) ( ( (  subslice507 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Zip_478   zip630 (    struct List_9  left923 ,    struct FromIter_425  right925 ) {
    struct SliceIter_479  left_dash_it926 = ( (  into_dash_iter631 ) ( (  left923 ) ) );
    struct FromIter_425  right_dash_it927 = ( (  into_dash_iter435 ) ( (  right925 ) ) );
    return ( (struct Zip_478) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   set633 (    struct List_9 *  list2023 ,    size_t  i2025 ,    uint8_t  elem2027 ) {
    if ( ( (  cmp299 ( (  i2025 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2025 ) , ( ( * (  list2023 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2025 ) ) ) ,  ( (  from_dash_string208 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2023 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set493 ) ( ( ( * (  list2023 ) ) .f_elements ) ,  (  i2025 ) ,  (  elem2027 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam632 (   struct env623* env ,    struct Tuple2_482  dref2070 ) {
    return ( (  set633 ) ( ( env->list2064 ) ,  (  op_dash_sub298 ( ( (  i32_dash_size421 ) ( ( dref2070 .field1 ) ) ) , ( env->num_dash_elems2069 ) ) ) ,  ( dref2070 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range609 (   struct env40* env ,    struct List_9 *  list2064 ,    size_t  from2066 ,    size_t  to_dash_excl2068 ) {
    if ( (  cmp299 ( (  to_dash_excl2068 ) , (  from2066 ) ) == 0 ) ) {
        ( (  panic610 ) ( ( ( StrConcat_611_StrConcat ) ( ( ( StrConcat_612_StrConcat ) ( ( ( StrConcat_613_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp299 ( (  from2066 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_string208 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp299 ( (  to_dash_excl2068 ) , ( ( * (  list2064 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_string208 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2069 = (  op_dash_sub298 ( (  to_dash_excl2068 ) , (  from2066 ) ) );
    struct env623 envinst623 = {
        .list2064 =  list2064 ,
        .num_dash_elems2069 =  num_dash_elems2069 ,
    };
    ( (  for_dash_each621 ) ( ( (  drop629 ) ( ( (  zip630 ) ( ( * (  list2064 ) ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  op_dash_add320 ( (  from2066 ) , (  num_dash_elems2069 ) ) ) ) ) ,  ( (struct envunion624){ .fun = (  enum Unit_8  (*) (  struct env623*  ,    struct Tuple2_482  ) )lam632 , .env =  envinst623 } ) ) );
    (*  list2064 ) .f_count = (  op_dash_sub298 ( ( ( * (  list2064 ) ) .f_count ) , (  num_dash_elems2069 ) ) );
    size_t  capacity2073 = ( ( ( * (  list2064 ) ) .f_elements ) .f_count );
    if ( (  cmp299 ( (  op_dash_mul414 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  capacity2073 ) ) == 0 ) ) {
        if ( (  eq408 ( ( ( * (  list2064 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free512 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
            (*  list2064 ) .f_elements = ( (  empty449 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2074 = (  op_dash_mul414 ( (  op_dash_add320 ( (  op_dash_div351 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2040 ) ) );
        struct Slice_11  new_dash_slice2075 = ( (  allocate464 ) ( ( ( * (  list2064 ) ) .f_al ) ,  (  new_dash_size2074 ) ) );
        ( (  copy_dash_to469 ) ( ( (  subslice507 ) ( ( ( * (  list2064 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  (  new_dash_slice2075 ) ) );
        ( (  free512 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
        (*  list2064 ) .f_elements = (  new_dash_slice2075 );
    }
    return ( Unit_8_Unit );
}

struct envunion635 {
    int32_t  (*fun) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env106 env;
};

static  enum Unit_8   trim636 (    struct List_9 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min508 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min637 (    int32_t  l1237 ,    int32_t  r1239 ) {
    if ( (  cmp166 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

struct envunion639 {
    int32_t  (*fun) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env106 env;
};

struct Maybe_641 {
    enum {
        Maybe_641_None_t,
        Maybe_641_Just_t,
    } tag;
    union {
        struct {
            struct Slice_11  field0;
        } Maybe_641_Just_s;
    } stuff;
};

static struct Maybe_641 Maybe_641_Just (  struct Slice_11  field0 ) {
    return ( struct Maybe_641 ) { .tag = Maybe_641_Just_t, .stuff = { .Maybe_641_Just_s = { .field0 = field0 } } };
};

static  struct Slice_11   or_dash_else640 (    struct Maybe_641  self1734 ,    struct Slice_11  alt1736 ) {
    struct Maybe_641  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_641_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_641_Just_t ) {
            return ( dref1737 .stuff .Maybe_641_Just_s .field0 );
        }
    }
}

static  struct Maybe_641   fmap_dash_maybe642 (    struct Maybe_385  x1276 ,    struct Slice_11 (*  fun1278 )(    struct Line_16  ) ) {
    struct Maybe_385  dref1279 = (  x1276 );
    if ( dref1279.tag == Maybe_385_None_t ) {
        return ( (struct Maybe_641) { .tag = Maybe_641_None_t } );
    }
    else {
        if ( dref1279.tag == Maybe_385_Just_t ) {
            return ( ( Maybe_641_Just ) ( ( (  fun1278 ) ( ( dref1279 .stuff .Maybe_385_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_385   try_dash_get643 (    struct List_14 *  list2018 ,    size_t  i2020 ) {
    if ( (  cmp299 ( (  i2020 ) , ( ( * (  list2018 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_385) { .tag = Maybe_385_None_t } );
    }
    return ( ( Maybe_385_Just ) ( ( (  get532 ) ( (  list2018 ) ,  (  i2020 ) ) ) ) );
}

static  struct Slice_11   lam644 (    struct Line_16  line3776 ) {
    return ( (  to_dash_slice535 ) ( ( (  line3776 ) .f_line ) ) );
}

struct StrConcat_649 {
    struct StrView_27  field0;
    struct StrView_27  field1;
};

static struct StrConcat_649 StrConcat_649_StrConcat (  struct StrView_27  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_649 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_648 {
    struct StrConcat_649  field0;
    struct Char_65  field1;
};

static struct StrConcat_648 StrConcat_648_StrConcat (  struct StrConcat_649  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_648 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str650 (    struct StrConcat_649  self1510 ) {
    struct StrConcat_649  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str647 (    struct StrConcat_648  self1510 ) {
    struct StrConcat_648  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str650 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert646 (    bool  cond1720 ,    struct StrView_27  msg1722 ) {
    if ( ( ! (  cond1720 ) ) ) {
        ( (  print_dash_str647 ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_649_StrConcat ) ( ( (  from_dash_string208 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1722 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_654 {
    struct Zip_423  field0;
    size_t  field1;
};

static struct Drop_654 Drop_654_Drop (  struct Zip_423  field0 ,  size_t  field1 ) {
    return ( struct Drop_654 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env655 {
    struct List_14 *  list2064;
    ;
    ;
    size_t  num_dash_elems2069;
    ;
};

struct envunion656 {
    enum Unit_8  (*fun) (  struct env655*  ,    struct Tuple2_417  );
    struct env655 env;
};

static  struct Drop_654   into_dash_iter658 (    struct Drop_654  self846 ) {
    return (  self846 );
}

static  struct Maybe_428   next659 (    struct Drop_654 *  dref848 ) {
    while ( (  cmp299 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next429 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub298 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next429 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each653 (    struct Drop_654  iterable1075 ,   struct envunion656  fun1077 ) {
    struct Drop_654  temp657 = ( (  into_dash_iter658 ) ( (  iterable1075 ) ) );
    struct Drop_654 *  it1078 = ( &temp657 );
    while ( ( true ) ) {
        struct Maybe_428  dref1079 = ( (  next659 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_428_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_428_Just_t ) {
                struct envunion656  temp660 = (  fun1077 );
                ( temp660.fun ( &temp660.env ,  ( dref1079 .stuff .Maybe_428_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_654   drop661 (    struct Zip_423  iterable853 ,    size_t  i855 ) {
    struct Zip_423  it856 = ( (  into_dash_iter427 ) ( (  iterable853 ) ) );
    return ( ( Drop_654_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct Slice_15   subslice664 (    struct Slice_15  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Line_16 *  begin_dash_ptr1789 = ( (  offset_dash_ptr400 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp299 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp299 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub298 ( ( (  min508 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_424   into_dash_iter663 (    struct List_14  self2030 ) {
    return ( (  into_dash_iter434 ) ( ( (  subslice664 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Zip_423   zip662 (    struct List_14  left923 ,    struct FromIter_425  right925 ) {
    struct SliceIter_424  left_dash_it926 = ( (  into_dash_iter663 ) ( (  left923 ) ) );
    struct FromIter_425  right_dash_it927 = ( (  into_dash_iter435 ) ( (  right925 ) ) );
    return ( (struct Zip_423) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   lam665 (   struct env655* env ,    struct Tuple2_417  dref2070 ) {
    return ( (  set536 ) ( ( env->list2064 ) ,  (  op_dash_sub298 ( ( (  i32_dash_size421 ) ( ( dref2070 .field1 ) ) ) , ( env->num_dash_elems2069 ) ) ) ,  ( dref2070 .field0 ) ) );
}

struct env668 {
    ;
    ;
    struct Slice_15  dest1855;
};

struct envunion669 {
    enum Unit_8  (*fun) (  struct env668*  ,    struct Tuple2_417  );
    struct env668 env;
};

static  enum Unit_8   for_dash_each667 (    struct Zip_423  iterable1075 ,   struct envunion669  fun1077 ) {
    struct Zip_423  temp670 = ( (  into_dash_iter427 ) ( (  iterable1075 ) ) );
    struct Zip_423 *  it1078 = ( &temp670 );
    while ( ( true ) ) {
        struct Maybe_428  dref1079 = ( (  next429 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_428_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_428_Just_t ) {
                struct envunion669  temp671 = (  fun1077 );
                ( temp671.fun ( &temp671.env ,  ( dref1079 .stuff .Maybe_428_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam672 (   struct env668* env ,    struct Tuple2_417  dref1856 ) {
    return ( (  set419 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size421 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to666 (    struct Slice_15  src1853 ,    struct Slice_15  dest1855 ) {
    if ( (  cmp299 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic470 ) ( ( ( StrConcat_471_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env668 envinst668 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each667 ) ( ( (  zip433 ) ( (  src1853 ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  ( (struct envunion669){ .fun = (  enum Unit_8  (*) (  struct env668*  ,    struct Tuple2_417  ) )lam672 , .env =  envinst668 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range652 (   struct env41* env ,    struct List_14 *  list2064 ,    size_t  from2066 ,    size_t  to_dash_excl2068 ) {
    if ( (  cmp299 ( (  to_dash_excl2068 ) , (  from2066 ) ) == 0 ) ) {
        ( (  panic610 ) ( ( ( StrConcat_611_StrConcat ) ( ( ( StrConcat_612_StrConcat ) ( ( ( StrConcat_613_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp299 ( (  from2066 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_string208 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp299 ( (  to_dash_excl2068 ) , ( ( * (  list2064 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_string208 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2069 = (  op_dash_sub298 ( (  to_dash_excl2068 ) , (  from2066 ) ) );
    struct env655 envinst655 = {
        .list2064 =  list2064 ,
        .num_dash_elems2069 =  num_dash_elems2069 ,
    };
    ( (  for_dash_each653 ) ( ( (  drop661 ) ( ( (  zip662 ) ( ( * (  list2064 ) ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  op_dash_add320 ( (  from2066 ) , (  num_dash_elems2069 ) ) ) ) ) ,  ( (struct envunion656){ .fun = (  enum Unit_8  (*) (  struct env655*  ,    struct Tuple2_417  ) )lam665 , .env =  envinst655 } ) ) );
    (*  list2064 ) .f_count = (  op_dash_sub298 ( ( ( * (  list2064 ) ) .f_count ) , (  num_dash_elems2069 ) ) );
    size_t  capacity2073 = ( ( ( * (  list2064 ) ) .f_elements ) .f_count );
    if ( (  cmp299 ( (  op_dash_mul414 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  capacity2073 ) ) == 0 ) ) {
        if ( (  eq408 ( ( ( * (  list2064 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free437 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
            (*  list2064 ) .f_elements = ( (  empty371 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2074 = (  op_dash_mul414 ( (  op_dash_add320 ( (  op_dash_div351 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2040 ) ) );
        struct Slice_15  new_dash_slice2075 = ( (  allocate409 ) ( ( ( * (  list2064 ) ) .f_al ) ,  (  new_dash_size2074 ) ) );
        ( (  copy_dash_to666 ) ( ( (  subslice664 ) ( ( ( * (  list2064 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  (  new_dash_slice2075 ) ) );
        ( (  free437 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
        (*  list2064 ) .f_elements = (  new_dash_slice2075 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action522 (   struct env110* env ,    struct TextBuf_114 *  self3761 ,    struct Pos_26  from_dash_pos3763 ,    struct Pos_26  to_dash_pos3765 ,    struct StrView_27  bytes3767 ) {
    struct Pos_26  from3768 = ( (  min523 ) ( (  from_dash_pos3763 ) ,  (  to_dash_pos3765 ) ) );
    struct Pos_26  to3769 = ( (  max525 ) ( (  from_dash_pos3763 ) ,  (  to_dash_pos3765 ) ) );
    if ( (  eq526 ( (  to3769 ) , (  from3768 ) ) ) ) {
        enum CAllocator_10  al3770 = ( ( ( * (  self3761 ) ) .f_buf ) .f_al );
        if ( ( (  eq408 ( ( (  size528 ) ( ( & ( ( * (  self3761 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size421 ) ( ( (  from3768 ) .f_line ) ) ) ) ) && (  eq527 ( ( (  from3768 ) .f_bi ) , (  from_dash_integral67 ( 0 ) ) ) ) ) ) {
            struct envunion111  temp529 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add405 , .env =  env->envinst12 } );
            ( temp529.fun ( &temp529.env ,  ( & ( ( * (  self3761 ) ) .f_buf ) ) ,  ( (  mk_dash_line440 ) ( ( (  mk448 ) ( (  al3770 ) ) ) ) ) ) );
        }
        struct envunion113  temp530 = ( (struct envunion113){ .fun = (  int32_t  (*) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot531 , .env =  env->envinst106 } );
        ( temp530.fun ( &temp530.env ,  (  self3761 ) ,  (  from3768 ) ,  (  bytes3767 ) ) );
    } else {
        struct List_14 *  lines_dash_buf3771 = ( & ( ( * (  self3761 ) ) .f_buf ) );
        struct Line_16 *  first_dash_line3772 = ( (  get_dash_ptr533 ) ( (  lines_dash_buf3771 ) ,  ( (  i32_dash_size421 ) ( ( (  from3768 ) .f_line ) ) ) ) );
        (*  first_dash_line3772 ) .f_invalidated = ( true );
        if ( ( (  eq527 ( ( (  from3768 ) .f_line ) , ( (  to3769 ) .f_line ) ) ) && (  cmp166 ( ( (  to3769 ) .f_bi ) , (  op_dash_add168 ( ( (  size_dash_i32338 ) ( ( (  size607 ) ( ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion117  temp608 = ( (struct envunion117){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range609 , .env =  env->envinst40 } );
            ( temp608.fun ( &temp608.env ,  ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ,  ( (  i32_dash_size421 ) ( ( (  from3768 ) .f_bi ) ) ) ,  ( (  i32_dash_size421 ) ( ( (  to3769 ) .f_bi ) ) ) ) );
            struct envunion635  temp634 = ( (struct envunion635){ .fun = (  int32_t  (*) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot531 , .env =  env->envinst106 } );
            ( temp634.fun ( &temp634.env ,  (  self3761 ) ,  (  from3768 ) ,  (  bytes3767 ) ) );
        } else {
            ( (  trim636 ) ( ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ,  ( (  i32_dash_size421 ) ( ( (  from3768 ) .f_bi ) ) ) ) );
            struct Line_16 *  last_dash_line3773 = ( (  get_dash_ptr533 ) ( (  lines_dash_buf3771 ) ,  ( (  i32_dash_size421 ) ( ( (  to3769 ) .f_line ) ) ) ) );
            (*  last_dash_line3773 ) .f_invalidated = ( true );
            to3769 .f_bi = ( (  min637 ) ( ( (  to3769 ) .f_bi ) ,  (  op_dash_add168 ( ( (  size_dash_i32338 ) ( ( (  size607 ) ( ( & ( ( * (  last_dash_line3773 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
            if ( (  eq527 ( ( (  to3769 ) .f_bi ) , (  op_dash_add168 ( ( (  size_dash_i32338 ) ( ( (  size607 ) ( ( & ( ( * (  last_dash_line3773 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) {
                to3769 .f_line = (  op_dash_add168 ( ( (  to3769 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) );
                to3769 .f_bi = (  from_dash_integral67 ( 0 ) );
            }
            struct envunion639  temp638 = ( (struct envunion639){ .fun = (  int32_t  (*) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot531 , .env =  env->envinst106 } );
            int32_t  lines_dash_added3774 = ( temp638.fun ( &temp638.env ,  (  self3761 ) ,  (  from3768 ) ,  (  bytes3767 ) ) );
            to3769 .f_line = (  op_dash_add168 ( ( (  to3769 ) .f_line ) , (  lines_dash_added3774 ) ) );
            from3768 .f_line = (  op_dash_add168 ( ( (  from3768 ) .f_line ) , (  lines_dash_added3774 ) ) );
            struct Slice_11  last_dash_line3777 = ( (  or_dash_else640 ) ( ( (  fmap_dash_maybe642 ) ( ( (  try_dash_get643 ) ( (  lines_dash_buf3771 ) ,  ( (  i32_dash_size421 ) ( ( (  to3769 ) .f_line ) ) ) ) ) ,  (  lam644 ) ) ) ,  ( (  empty449 ) ( ) ) ) );
            struct envunion112  temp645 = ( (struct envunion112){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all541 , .env =  env->envinst46 } );
            ( temp645.fun ( &temp645.env ,  ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ,  ( (  from534 ) ( (  last_dash_line3777 ) ,  ( (  i32_dash_size421 ) ( ( (  to3769 ) .f_bi ) ) ) ) ) ) );
            ( (  assert646 ) ( (  cmp166 ( ( (  to3769 ) .f_line ) , ( (  from3768 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string208 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion118  temp651 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  ) )remove_dash_range652 , .env =  env->envinst41 } );
            ( temp651.fun ( &temp651.env ,  ( & ( ( * (  self3761 ) ) .f_buf ) ) ,  ( (  i32_dash_size421 ) ( (  op_dash_add168 ( ( (  from3768 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  op_dash_add320 ( ( (  i32_dash_size421 ) ( ( (  to3769 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk673 (    int32_t  line3636 ,    int32_t  bi3638 ) {
    return ( (struct Pos_26) { .f_line = (  line3636 ) , .f_bi = (  bi3638 ) } );
}

static  struct Maybe_360   mk_dash_from_dash_file363 (   struct env123* env ,    enum CAllocator_10  al3797 ,    struct StrView_27  filename3799 ) {
    struct envunion125  temp365 = ( (struct envunion125){ .fun = (  struct TextBuf_114  (*) (  struct env121*  ,    enum CAllocator_10  ) )mk366 , .env =  env->envinst121 } );
    struct TextBuf_114  temp364 = ( temp365.fun ( &temp365.env ,  (  al3797 ) ) );
    struct TextBuf_114 *  tb3800 = ( &temp364 );
    struct StrView_27  filename03801 = ( (  clone_dash_0463 ) ( (  filename3799 ) ,  (  al3797 ) ) );
    struct Maybe_94  dref3802 = ( (  try_dash_read_dash_contents496 ) ( ( (  as_dash_const_dash_str509 ) ( (  filename03801 ) ) ) ,  (  al3797 ) ) );
    if ( dref3802.tag == Maybe_94_None_t ) {
        ( (  free511 ) ( (  filename03801 ) ,  (  al3797 ) ) );
        return ( (struct Maybe_360) { .tag = Maybe_360_None_t } );
    }
    else {
        if ( dref3802.tag == Maybe_94_Just_t ) {
            if ( (  eq514 ( ( (  try_dash_get516 ) ( ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub298 ( ( ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_487_Just ) ( ( (  ascii_dash_u8517 ) ( ( (  from_dash_charlike518 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref3802 .stuff .Maybe_94_Just_s .field0 = ( (  byte_dash_substr520 ) ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub298 ( ( ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion124  temp521 = ( (struct envunion124){ .fun = (  enum Unit_8  (*) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action522 , .env =  env->envinst110 } );
            ( temp521.fun ( &temp521.env ,  (  tb3800 ) ,  ( (  mk673 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) ,  ( (  mk673 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) ,  ( dref3802 .stuff .Maybe_94_Just_s .field0 ) ) );
            (*  tb3800 ) .f_filename = ( ( Maybe_94_Just ) ( (  filename03801 ) ) );
            return ( ( Maybe_360_Just ) ( ( * (  tb3800 ) ) ) );
        }
    }
}

struct envunion675 {
    struct TextBuf_114  (*fun) (  struct env121*  ,    enum CAllocator_10  );
    struct env121 env;
};

struct envunion677 {
    struct StrView_27  (*fun) (  struct env56*  ,    struct StrConcat_648  ,    enum CAllocator_10  );
    struct env56 env;
};

struct env683 {
    struct env6 envinst6;
    struct List_9 *  list2100;
};

struct envunion684 {
    enum Unit_8  (*fun) (  struct env683*  ,    uint8_t  );
    struct env683 env;
};

static  struct Map_59   into_dash_iter686 (    struct Map_59  self797 ) {
    return (  self797 );
}

static  struct Maybe_306   next690 (    struct StrViewIter_62 *  self1375 ) {
    if ( (  cmp299 ( ( ( * (  self1375 ) ) .f_i ) , ( ( ( ( * (  self1375 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    uint8_t *  char_dash_ptr1376 = ( ( (  offset_dash_ptr309 ) ( ( (  cast356 ) ( ( ( ( ( * (  self1375 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64311 ) ( ( ( * (  self1375 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1377 = ( (  scan_dash_from_dash_mem314 ) ( (  char_dash_ptr1376 ) ) );
    (*  self1375 ) .f_i = (  op_dash_add320 ( ( ( * (  self1375 ) ) .f_i ) , ( (  char1377 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_306_Just ) ( (  char1377 ) ) );
}

static  struct Maybe_306   next689 (    struct StrConcatIter_61 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next692 (    enum EmptyIter_64 *  dref793 ) {
    return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
}

static  struct Maybe_306   next691 (    struct AppendIter_63 *  self1023 ) {
    struct Maybe_306  dref1024 = ( (  next692 ) ( ( & ( ( * (  self1023 ) ) .f_it ) ) ) );
    if ( dref1024.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1024 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1024.tag == Maybe_306_None_t ) {
            if ( ( ! ( ( * (  self1023 ) ) .f_appended ) ) ) {
                (*  self1023 ) .f_appended = ( true );
                return ( ( Maybe_306_Just ) ( ( ( * (  self1023 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
        }
    }
}

static  struct Maybe_306   next688 (    struct StrConcatIter_60 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_487   next687 (    struct Map_59 *  dref799 ) {
    struct Maybe_306  dref802 = ( (  next688 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_487) { .tag = Maybe_487_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_306_Just_t ) {
            return ( ( Maybe_487_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_306_Just_s .field0 ) ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each682 (    struct Map_59  iterable1075 ,   struct envunion684  fun1077 ) {
    struct Map_59  temp685 = ( (  into_dash_iter686 ) ( (  iterable1075 ) ) );
    struct Map_59 *  it1078 = ( &temp685 );
    while ( ( true ) ) {
        struct Maybe_487  dref1079 = ( (  next687 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_487_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_487_Just_t ) {
                struct envunion684  temp693 = (  fun1077 );
                ( temp693.fun ( &temp693.env ,  ( dref1079 .stuff .Maybe_487_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam694 (   struct env683* env ,    uint8_t  x2104 ) {
    struct envunion47  temp695 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add549 , .env =  env->envinst6 } );
    return ( temp695.fun ( &temp695.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all681 (   struct env50* env ,    struct List_9 *  list2100 ,    struct Map_59  it2102 ) {
    struct env683 envinst683 = {
        .envinst6 = env->envinst6 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each682 ) ( (  it2102 ) ,  ( (struct envunion684){ .fun = (  enum Unit_8  (*) (  struct env683*  ,    uint8_t  ) )lam694 , .env =  envinst683 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_60   into_dash_iter697 (    struct StrConcatIter_60  self1498 ) {
    return (  self1498 );
}

static  struct Map_59   map696 (    struct StrConcatIter_60  iterable806 ,    uint8_t (*  fun808 )(    struct Char_65  ) ) {
    struct StrConcatIter_60  it809 = ( (  into_dash_iter697 ) ( (  iterable806 ) ) );
    return ( ( Map_59_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct StrViewIter_62   into_dash_iter703 (    struct StrView_27  self1369 ) {
    return ( (struct StrViewIter_62) { .f_ds = (  self1369 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_62   chars702 (    struct StrView_27  self1383 ) {
    return ( (  into_dash_iter703 ) ( (  self1383 ) ) );
}

static  struct StrConcatIter_61   into_dash_iter701 (    struct StrConcat_649  dref1505 ) {
    return ( (struct StrConcatIter_61) { .f_left = ( (  chars702 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_61   chars700 (    struct StrConcat_649  self1516 ) {
    return ( (  into_dash_iter701 ) ( (  self1516 ) ) );
}

static  enum EmptyIter_64   into_dash_iter708 (    enum EmptyIter_64  self791 ) {
    return (  self791 );
}

static  struct AppendIter_63   append707 (    enum EmptyIter_64  it1007 ,    struct Char_65  e1009 ) {
    return ( (struct AppendIter_63) { .f_it = ( (  into_dash_iter708 ) ( (  it1007 ) ) ) , .f_elem = (  e1009 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_63   cons706 (    enum EmptyIter_64  it1012 ,    struct Char_65  e1014 ) {
    return ( (  append707 ) ( (  it1012 ) ,  (  e1014 ) ) );
}

static  enum EmptyIter_64   nil709 (  ) {
    return ( EmptyIter_64_EmptyIter );
}

static  struct AppendIter_63   single705 (    struct Char_65  e1017 ) {
    return ( (  cons706 ) ( ( (  nil709 ) ( ) ) ,  (  e1017 ) ) );
}

static  struct AppendIter_63   chars704 (    struct Char_65  self1414 ) {
    return ( (  single705 ) ( (  self1414 ) ) );
}

static  struct StrConcatIter_60   into_dash_iter699 (    struct StrConcat_648  dref1505 ) {
    return ( (struct StrConcatIter_60) { .f_left = ( (  chars700 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars704 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_60   chars698 (    struct StrConcat_648  self1516 ) {
    return ( (  into_dash_iter699 ) ( (  self1516 ) ) );
}

static  struct StrView_27   from_dash_str678 (   struct env56* env ,    struct StrConcat_648  s1997 ,    enum CAllocator_10  al1999 ) {
    struct List_9  temp679 = ( (  mk448 ) ( (  al1999 ) ) );
    struct List_9 *  l2148 = ( &temp679 );
    struct envunion58  temp680 = ( (struct envunion58){ .fun = (  enum Unit_8  (*) (  struct env50*  ,    struct List_9 *  ,    struct Map_59  ) )add_dash_all681 , .env =  env->envinst50 } );
    ( temp680.fun ( &temp680.env ,  (  l2148 ) ,  ( (  map696 ) ( ( (  chars698 ) ( (  s1997 ) ) ) ,  (  char_dash_u8495 ) ) ) ) );
    struct envunion57  temp710 = ( (struct envunion57){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add549 , .env =  env->envinst6 } );
    ( temp710.fun ( &temp710.env ,  (  l2148 ) ,  ( (  char_dash_u8495 ) ( ( (  nullchar506 ) ( ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (  to_dash_slice535 ) ( ( * (  l2148 ) ) ) ) } );
}

struct envunion712 {
    struct TextBuf_114  (*fun) (  struct env121*  ,    enum CAllocator_10  );
    struct env121 env;
};

static  struct Pane_229   mk715 (    enum CAllocator_10  al4028 ,    struct TextBuf_114 *  buf4030 ) {
    return ( (struct Pane_229) { .f_buf = (  buf4030 ) , .f_cursor = ( (  mk673 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral67 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_230_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_231) { .f_screen_dash_top = (  from_dash_integral67 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral67 ( 0 ) ) } ) } );
}

struct envunion718 {
    struct Tui_100  (*fun) (  struct env96*  );
    struct env96 env;
};

static  struct Termios_102   undefined722 (  ) {
    struct Termios_102  temp723;
    return (  temp723 );
}

static  int32_t   stdin_dash_fileno724 (  ) {
    return (  from_dash_integral67 ( 0 ) );
}

static  struct termios *   cast_dash_ptr725 (    struct Termios_102 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and726 (    uint32_t  l2861 ,    uint32_t  r2863 ) {
    return ( (  l2861 ) & (  r2863 ) );
}

static  uint32_t   u32_dash_neg727 (    uint32_t  l2866 ) {
    return ( ~ (  l2866 ) );
}

struct Array_729 {
    uint32_t _arr [4];
};

struct ArrayIter_731 {
    struct Array_729  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_731   into_dash_iter732 (    struct Array_729  self2327 ) {
    return ( (struct ArrayIter_731) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_733 {
    enum {
        Maybe_733_None_t,
        Maybe_733_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_733_Just_s;
    } stuff;
};

static struct Maybe_733 Maybe_733_Just (  uint32_t  field0 ) {
    return ( struct Maybe_733 ) { .tag = Maybe_733_Just_t, .stuff = { .Maybe_733_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr737 (    struct Array_729 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr738 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp739;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp739 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr736 (    struct Array_729 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp299 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2258 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic389 ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2259 = ( ( (  cast_dash_ptr737 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr738 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  uint32_t   get735 (    struct Array_729 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr736 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_733   next734 (    struct ArrayIter_731 *  self2334 ) {
    if ( (  cmp299 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_733) { .tag = Maybe_733_None_t } );
    }
    uint32_t  e2336 = ( (  get735 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add320 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_733_Just ) ( (  e2336 ) ) );
}

static  uint32_t   reduce730 (    struct Array_729  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_731  it1100 = ( (  into_dash_iter732 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_733  dref1101 = ( (  next734 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_733_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_733_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_733_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp740 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp740);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp741;
    return (  temp741 );
}

static  uint32_t   u32_dash_or742 (    uint32_t  l2853 ,    uint32_t  r2855 ) {
    return ( (  l2853 ) | (  r2855 ) );
}

static  uint32_t   u32_dash_ors728 (    struct Array_729  vals2858 ) {
    return ( (  reduce730 ) ( (  vals2858 ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  u32_dash_or742 ) ) );
}

static  struct Array_729   from_dash_listlike743 (    struct Array_729  self330 ) {
    return (  self330 );
}

static  uint32_t   echo744 (  ) {
    return (  from_dash_integral174 ( 8 ) );
}

static  uint32_t   icanon745 (  ) {
    return (  from_dash_integral174 ( 2 ) );
}

static  uint32_t   isig746 (  ) {
    return (  from_dash_integral174 ( 1 ) );
}

static  uint32_t   iexten747 (  ) {
    return (  from_dash_integral174 ( 32768 ) );
}

struct Array_749 {
    uint32_t _arr [5];
};

struct ArrayIter_751 {
    struct Array_749  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_751   into_dash_iter752 (    struct Array_749  self2327 ) {
    return ( (struct ArrayIter_751) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr756 (    struct Array_749 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr755 (    struct Array_749 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp299 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2258 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic389 ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2259 = ( ( (  cast_dash_ptr756 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr738 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  uint32_t   get754 (    struct Array_749 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr755 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_733   next753 (    struct ArrayIter_751 *  self2334 ) {
    if ( (  cmp299 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_733) { .tag = Maybe_733_None_t } );
    }
    uint32_t  e2336 = ( (  get754 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add320 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_733_Just ) ( (  e2336 ) ) );
}

static  uint32_t   reduce750 (    struct Array_749  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_751  it1100 = ( (  into_dash_iter752 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_733  dref1101 = ( (  next753 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_733_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_733_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_733_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp757 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp757);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp758;
    return (  temp758 );
}

static  uint32_t   u32_dash_ors748 (    struct Array_749  vals2858 ) {
    return ( (  reduce750 ) ( (  vals2858 ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  u32_dash_or742 ) ) );
}

static  struct Array_749   from_dash_listlike759 (    struct Array_749  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint760 (  ) {
    return (  from_dash_integral174 ( 2 ) );
}

static  uint32_t   icrnl761 (  ) {
    return (  from_dash_integral174 ( 256 ) );
}

static  uint32_t   inpck762 (  ) {
    return (  from_dash_integral174 ( 16 ) );
}

static  uint32_t   istrip763 (  ) {
    return (  from_dash_integral174 ( 32 ) );
}

static  uint32_t   ixon764 (  ) {
    return (  from_dash_integral174 ( 1024 ) );
}

struct Array_766 {
    uint32_t _arr [1];
};

struct ArrayIter_768 {
    struct Array_766  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_768   into_dash_iter769 (    struct Array_766  self2327 ) {
    return ( (struct ArrayIter_768) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr773 (    struct Array_766 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr772 (    struct Array_766 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp299 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2258 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic389 ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2259 = ( ( (  cast_dash_ptr773 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr738 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  uint32_t   get771 (    struct Array_766 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr772 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_733   next770 (    struct ArrayIter_768 *  self2334 ) {
    if ( (  cmp299 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_733) { .tag = Maybe_733_None_t } );
    }
    uint32_t  e2336 = ( (  get771 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add320 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_733_Just ) ( (  e2336 ) ) );
}

static  uint32_t   reduce767 (    struct Array_766  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_768  it1100 = ( (  into_dash_iter769 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_733  dref1101 = ( (  next770 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_733_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_733_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_733_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp774 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp774);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp775;
    return (  temp775 );
}

static  uint32_t   u32_dash_ors765 (    struct Array_766  vals2858 ) {
    return ( (  reduce767 ) ( (  vals2858 ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  u32_dash_or742 ) ) );
}

static  struct Array_766   from_dash_listlike776 (    struct Array_766  self330 ) {
    return (  self330 );
}

static  uint32_t   opost777 (  ) {
    return (  from_dash_integral174 ( 1 ) );
}

static  uint32_t   cs8778 (  ) {
    return (  from_dash_integral174 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr781 (    struct Array_103 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr780 (    struct Array_103 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp299 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2258 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic389 ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2259 = ( ( (  cast_dash_ptr781 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr309 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  enum Unit_8   set779 (    struct Array_103 *  arr2268 ,    size_t  i2271 ,    uint8_t  e2273 ) {
    uint8_t *  p2274 = ( (  get_dash_ptr780 ) ( (  arr2268 ) ,  (  i2271 ) ) );
    (*  p2274 ) = (  e2273 );
    return ( Unit_8_Unit );
}

static  size_t   vmin782 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime783 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush784 (  ) {
    return (  from_dash_integral67 ( 2 ) );
}

static  struct Termios_102   enable_dash_raw_dash_mode720 (  ) {
    struct Termios_102  temp721 = ( (  undefined722 ) ( ) );
    struct Termios_102 *  orig_dash_termios3348 = ( &temp721 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno724 ) ( ) ) ,  ( (  cast_dash_ptr725 ) ( (  orig_dash_termios3348 ) ) ) ) );
    struct Termios_102  raw3349 = ( * (  orig_dash_termios3348 ) );
    raw3349 .f_c_dash_lflag = ( (  u32_dash_and726 ) ( ( (  raw3349 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg727 ) ( ( (  u32_dash_ors728 ) ( ( (  from_dash_listlike743 ) ( ( (struct Array_729) { ._arr = { ( (  echo744 ) ( ) ) , ( (  icanon745 ) ( ) ) , ( (  isig746 ) ( ) ) , ( ( (  iexten747 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3349 .f_c_dash_iflag = ( (  u32_dash_and726 ) ( ( (  raw3349 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg727 ) ( ( (  u32_dash_ors748 ) ( ( (  from_dash_listlike759 ) ( ( (struct Array_749) { ._arr = { ( (  brkint760 ) ( ) ) , ( (  icrnl761 ) ( ) ) , ( (  inpck762 ) ( ) ) , ( (  istrip763 ) ( ) ) , ( ( (  ixon764 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3349 .f_c_dash_oflag = ( (  u32_dash_and726 ) ( ( (  raw3349 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg727 ) ( ( (  u32_dash_ors765 ) ( ( (  from_dash_listlike776 ) ( ( (struct Array_766) { ._arr = { ( ( (  opost777 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3349 .f_c_dash_cflag = ( (  u32_dash_or742 ) ( ( (  raw3349 ) .f_c_dash_cflag ) ,  ( (  cs8778 ) ( ) ) ) );
    ( (  set779 ) ( ( & ( (  raw3349 ) .f_c_dash_cc ) ) ,  ( (  vmin782 ) ( ) ) ,  (  from_dash_integral317 ( 0 ) ) ) );
    ( (  set779 ) ( ( & ( (  raw3349 ) .f_c_dash_cc ) ) ,  ( (  vtime783 ) ( ) ) ,  (  from_dash_integral317 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno724 ) ( ) ) ,  ( (  tcsa_dash_flush784 ) ( ) ) ,  ( (  cast_dash_ptr725 ) ( ( & (  raw3349 ) ) ) ) ) );
    return ( * (  orig_dash_termios3348 ) );
}

static  struct StrViewIter_62   into_dash_iter789 (    struct StrViewIter_62  self1372 ) {
    return (  self1372 );
}

static  enum Unit_8   for_dash_each787 (    struct StrViewIter_62  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrViewIter_62  temp788 = ( (  into_dash_iter789 ) ( (  iterable1075 ) ) );
    struct StrViewIter_62 *  it1078 = ( &temp788 );
    while ( ( true ) ) {
        struct Maybe_306  dref1079 = ( (  next690 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_306_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print786 (    struct StrView_27  s2593 ) {
    ( (  for_dash_each787 ) ( ( (  chars702 ) ( (  s2593 ) ) ) ,  (  printf_dash_char345 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   hide_dash_cursor785 (  ) {
    ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors790 (  ) {
    ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen791 (  ) {
    ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse792 (  ) {
    ( (  print_dash_str337 ) ( ( (  from_dash_string208 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout793 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr499 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq797 (    enum Unit_8 *  l587 ,    enum Unit_8 *  r589 ) {
    return ( (  l587 ) == (  r589 ) );
}

static  enum Unit_8 *   cast798 (    const char*  x356 ) {
    return ( (enum Unit_8 * ) (  x356 ) );
}

static  void *   cast_dash_ptr802 (    enum Unit_8 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of803 (    enum Unit_8 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_8 *   zeroed800 (  ) {
    enum Unit_8 *  temp801;
    enum Unit_8 *  x571 = (  temp801 );
    ( ( memset ) ( ( (  cast_dash_ptr802 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of803 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  enum Unit_8 *   null_dash_ptr799 (  ) {
    return ( (  zeroed800 ) ( ) );
}

static  struct Maybe_329   from_dash_nullable_dash_c_dash_str796 (    const char*  s592 ) {
    if ( ( (  ptr_dash_eq797 ) ( ( (  cast798 ) ( (  s592 ) ) ) ,  ( ( (  null_dash_ptr799 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_329) { .tag = Maybe_329_None_t } );
    } else {
        return ( ( Maybe_329_Just ) ( (  s592 ) ) );
    }
}

static  struct Maybe_329   get795 (    const char*  s2626 ) {
    return ( (  from_dash_nullable_dash_c_dash_str796 ) ( ( ( getenv ) ( (  s2626 ) ) ) ) );
}

static  bool   eq804 (    const char*  l1698 ,    const char*  r1700 ) {
    return (  eq527 ( ( ( strcmp ) ( (  l1698 ) ,  (  r1700 ) ) ) , (  from_dash_integral67 ( 0 ) ) ) );
}

static  enum ColorPalette_101   query_dash_palette794 (  ) {
    struct Maybe_329  colorterm2627 = ( (  get795 ) ( ( (  from_dash_string68 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_329  dref2628 = (  colorterm2627 );
    if ( dref2628.tag == Maybe_329_Just_t ) {
        if ( ( (  eq804 ( ( dref2628 .stuff .Maybe_329_Just_s .field0 ) , ( (  from_dash_string68 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq804 ( ( dref2628 .stuff .Maybe_329_Just_s .field0 ) , ( (  from_dash_string68 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_101_PaletteRGB );
        }
    }
    else {
        if ( dref2628.tag == Maybe_329_None_t ) {
        }
    }
    struct Maybe_329  dref2630 = ( (  get795 ) ( ( (  from_dash_string68 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2630.tag == Maybe_329_Just_t ) {
        if ( (  eq804 ( ( dref2630 .stuff .Maybe_329_Just_s .field0 ) , ( (  from_dash_string68 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_101_Palette8 );
        }
    }
    else {
        if ( dref2630.tag == Maybe_329_None_t ) {
        }
    }
    return ( ColorPalette_101_Palette16 );
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

static  void *   cast_dash_ptr811 (    struct Winsize_807 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of812 (    struct Winsize_807  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_807   zeroed809 (  ) {
    struct Winsize_807  temp810;
    struct Winsize_807  x571 = (  temp810 );
    ( ( memset ) ( ( (  cast_dash_ptr811 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of812 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  int32_t   stdout_dash_fileno813 (  ) {
    return (  from_dash_integral67 ( 1 ) );
}

static  uint64_t   from_dash_integral815 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz814 (  ) {
    return (  from_dash_integral815 ( 21523 ) );
}

static  int32_t   op_dash_neg816 (    int32_t  x227 ) {
    return ( (  from_dash_integral67 ( 0 ) ) - (  x227 ) );
}

static  bool   eq817 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral818 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr824 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of825 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed822 (  ) {
    uint32_t  temp823;
    uint32_t  x571 = (  temp823 );
    ( ( memset ) ( ( (  cast_dash_ptr824 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of825 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint16_t *   cast826 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed820 (    uint16_t  x574 ) {
    uint32_t  temp821 = ( (  zeroed822 ) ( ) );
    uint32_t *  y575 = ( &temp821 );
    uint16_t *  yp576 = ( (  cast826 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  uint32_t   u16_dash_u32819 (    uint16_t  x646 ) {
    return ( (  cast_dash_on_dash_zeroed820 ) ( (  x646 ) ) );
}

static  struct Tuple2_805   get_dash_dimensions806 (  ) {
    struct Winsize_807  temp808 = ( ( (  zeroed809 ) ( ) ) );
    struct Winsize_807 *  ws2615 = ( &temp808 );
    if ( ( (  eq527 ( ( ( ioctl ) ( ( (  stdout_dash_fileno813 ) ( ) ) ,  ( (  tiocgwinsz814 ) ( ) ) ,  (  ws2615 ) ) ) , (  op_dash_neg816 ( (  from_dash_integral67 ( 1 ) ) ) ) ) ) || (  eq817 ( ( ( * (  ws2615 ) ) .f_ws_dash_col ) , (  from_dash_integral818 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_805_Tuple2 ) ( (  from_dash_integral174 ( 80 ) ) ,  (  from_dash_integral174 ( 24 ) ) ) );
    }
    return ( ( Tuple2_805_Tuple2 ) ( ( (  u16_dash_u32819 ) ( ( ( * (  ws2615 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32819 ) ( ( ( * (  ws2615 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined829 (  ) {
    struct timespec  temp830;
    return (  temp830 );
}

static  int32_t   clock_dash_monotonic831 (  ) {
    return (  from_dash_integral67 ( 1 ) );
}

static  struct timespec   now827 (  ) {
    struct timespec  temp828 = ( (  undefined829 ) ( ) );
    struct timespec *  t3310 = ( &temp828 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic831 ) ( ) ) ,  (  t3310 ) ) );
    return ( * (  t3310 ) );
}

struct env832 {
    bool *  should_dash_resize3362;
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

static  enum Unit_8   lam838 (   struct env832* env ,    int32_t  dref3369 ) {
    (* env->should_dash_resize3362 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst839 (    struct Tuple2_805  dref1254 ) {
    return ( dref1254 .field0 );
}

static  uint32_t   snd840 (    struct Tuple2_805  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Tui_100   mk719 (   struct env96* env ) {
    struct Termios_102  og_dash_termios3364 = ( (  enable_dash_raw_dash_mode720 ) ( ) );
    ( (  hide_dash_cursor785 ) ( ) );
    ( (  reset_dash_colors790 ) ( ) );
    ( (  clear_dash_screen791 ) ( ) );
    ( (  enable_dash_mouse792 ) ( ) );
    ( (  flush_dash_stdout793 ) ( ) );
    enum ColorPalette_101  palette3365 = ( (  query_dash_palette794 ) ( ) );
    struct Tuple2_805  dims3366 = ( (  get_dash_dimensions806 ) ( ) );
    uint32_t  fps3367 = (  from_dash_integral174 ( 60 ) );
    struct timespec  last_dash_sync3368 = ( (  now827 ) ( ) );
    struct env832 envinst832 = {
        .should_dash_resize3362 = env->should_dash_resize3362 ,
    };
    ( _intr_register_signal ( (  from_dash_integral67 ( 28 ) ) , ( (struct envunion833){ .fun = (  enum Unit_8  (*) (  struct env832*  ,    int32_t  ) )lam838 , .env =  envinst832 } ) ) );
    return ( (struct Tui_100) { .f_width = ( (  fst839 ) ( (  dims3366 ) ) ) , .f_height = ( (  snd840 ) ( (  dims3366 ) ) ) , .f_target_dash_fps = (  fps3367 ) , .f_actual_dash_fps = (  from_dash_integral174 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3368 ) , .f_fps_dash_ts = (  last_dash_sync3368 ) , .f_fps_dash_count = (  from_dash_integral174 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3364 ) , .f_palette = (  palette3365 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_845 {
    size_t  f_size;
};

static  struct TypeSize_845   get_dash_typesize844 (  ) {
    struct Cell_287  temp846;
    return ( (struct TypeSize_845) { .f_size = ( sizeof( ( (  temp846 ) ) ) ) } );
}

static  struct Cell_287 *   cast_dash_ptr847 (    void *  p359 ) {
    return ( (struct Cell_287 * ) (  p359 ) );
}

static  struct Slice_286   allocate843 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize844 ) ( ) ) ) .f_size );
    struct Cell_287 *  ptr1959 = ( (  cast_dash_ptr847 ) ( ( ( malloc ) ( (  op_dash_mul414 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_286) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

static  void *   cast_dash_ptr853 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of854 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed851 (  ) {
    size_t  temp852;
    size_t  x571 = (  temp852 );
    ( ( memset ) ( ( (  cast_dash_ptr853 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of854 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint32_t *   cast855 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed849 (    uint32_t  x574 ) {
    size_t  temp850 = ( (  zeroed851 ) ( ) );
    size_t *  y575 = ( &temp850 );
    uint32_t *  yp576 = ( (  cast855 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  size_t   u32_dash_size848 (    uint32_t  x652 ) {
    return ( (  cast_dash_on_dash_zeroed849 ) ( (  x652 ) ) );
}

struct env858 {
    ;
    ;
    ;
    struct Slice_286  s1907;
    struct Cell_287 (*  fun1909 )(    struct Cell_287  );
};

struct envunion859 {
    enum Unit_8  (*fun) (  struct env858*  ,    int32_t  );
    struct env858 env;
};

static  enum Unit_8   for_dash_each857 (    struct Range_159  iterable1075 ,   struct envunion859  fun1077 ) {
    struct RangeIter_162  temp860 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp860 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion859  temp861 = (  fun1077 );
                ( temp861.fun ( &temp861.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_287 *   offset_dash_ptr865 (    struct Cell_287 *  x338 ,    int64_t  count340 ) {
    struct Cell_287  temp866;
    return ( (struct Cell_287 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp866 ) ) ) ) ) ) ) ) );
}

static  struct Cell_287 *   get_dash_ptr864 (    struct Slice_286  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp299 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_287 *  elem_dash_ptr1762 = ( (  offset_dash_ptr865 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set863 (    struct Slice_286  slice1776 ,    size_t  i1778 ,    struct Cell_287  x1780 ) {
    struct Cell_287 *  ep1781 = ( (  get_dash_ptr864 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

struct Maybe_870 {
    enum {
        Maybe_870_None_t,
        Maybe_870_Just_t,
    } tag;
    union {
        struct {
            struct Cell_287  field0;
        } Maybe_870_Just_s;
    } stuff;
};

static struct Maybe_870 Maybe_870_Just (  struct Cell_287  field0 ) {
    return ( struct Maybe_870 ) { .tag = Maybe_870_Just_t, .stuff = { .Maybe_870_Just_s = { .field0 = field0 } } };
};

static  struct Cell_287   undefined871 (  ) {
    struct Cell_287  temp872;
    return (  temp872 );
}

static  struct Cell_287   or_dash_fail869 (    struct Maybe_870  x1727 ,    struct StrConcat_330  errmsg1729 ) {
    struct Maybe_870  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_870_None_t ) {
        ( (  panic332 ) ( (  errmsg1729 ) ) );
        return ( (  undefined871 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_870_Just_t ) {
            return ( dref1730 .stuff .Maybe_870_Just_s .field0 );
        }
    }
}

static  struct Maybe_870   try_dash_get873 (    struct Slice_286  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp299 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_870) { .tag = Maybe_870_None_t } );
    }
    struct Cell_287 *  elem_dash_ptr1768 = ( (  offset_dash_ptr865 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_870_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  struct Cell_287   get868 (    struct Slice_286  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail869 ) ( ( (  try_dash_get873 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_287   elem_dash_get867 (    struct Slice_286  self1869 ,    size_t  idx1871 ) {
    return ( (  get868 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  enum Unit_8   lam862 (   struct env858* env ,    int32_t  i1911 ) {
    return ( (  set863 ) ( ( env->s1907 ) ,  ( (  i32_dash_size421 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get867 ( ( env->s1907 ) , ( (  i32_dash_size421 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map856 (    struct Slice_286  s1907 ,    struct Cell_287 (*  fun1909 )(    struct Cell_287  ) ) {
    struct env858 envinst858 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each857 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_i32338 ) ( (  op_dash_sub298 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion859){ .fun = (  enum Unit_8  (*) (  struct env858*  ,    int32_t  ) )lam862 , .env =  envinst858 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_287   default_dash_cell875 (  ) {
    return ( (struct Cell_287) { .f_c = ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_bg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral67 ( 1 ) ) } );
}

static  struct Cell_287   lam874 (    struct Cell_287  dref3472 ) {
    return ( (  default_dash_cell875 ) ( ) );
}

struct env878 {
    ;
    ;
    ;
    struct Slice_286  s1907;
    struct Cell_287 (*  fun1909 )(    struct Cell_287  );
};

struct envunion879 {
    enum Unit_8  (*fun) (  struct env878*  ,    int32_t  );
    struct env878 env;
};

static  enum Unit_8   for_dash_each877 (    struct Range_159  iterable1075 ,   struct envunion879  fun1077 ) {
    struct RangeIter_162  temp880 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp880 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion879  temp881 = (  fun1077 );
                ( temp881.fun ( &temp881.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam882 (   struct env878* env ,    int32_t  i1911 ) {
    return ( (  set863 ) ( ( env->s1907 ) ,  ( (  i32_dash_size421 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get867 ( ( env->s1907 ) , ( (  i32_dash_size421 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map876 (    struct Slice_286  s1907 ,    struct Cell_287 (*  fun1909 )(    struct Cell_287  ) ) {
    struct env878 envinst878 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each877 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_i32338 ) ( (  op_dash_sub298 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion879){ .fun = (  enum Unit_8  (*) (  struct env878*  ,    int32_t  ) )lam882 , .env =  envinst878 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_287   lam883 (    struct Cell_287  dref3474 ) {
    return ( (  default_dash_cell875 ) ( ) );
}

static  struct Screen_285   mk_dash_screen842 (    struct Tui_100 *  tui3468 ,    enum CAllocator_10  al3470 ) {
    struct Slice_286  cur3471 = ( (  allocate843 ) ( (  al3470 ) ,  ( (  u32_dash_size848 ) ( (  op_dash_mul176 ( ( ( * (  tui3468 ) ) .f_width ) , ( ( * (  tui3468 ) ) .f_height ) ) ) ) ) ) );
    ( (  map856 ) ( (  cur3471 ) ,  (  lam874 ) ) );
    struct Slice_286  prev3473 = ( (  allocate843 ) ( (  al3470 ) ,  ( (  u32_dash_size848 ) ( (  op_dash_mul176 ( ( ( * (  tui3468 ) ) .f_width ) , ( ( * (  tui3468 ) ) .f_height ) ) ) ) ) ) );
    ( (  map876 ) ( (  prev3473 ) ,  (  lam883 ) ) );
    return ( (struct Screen_285) { .f_current = (  cur3471 ) , .f_previous = (  prev3473 ) , .f_al = (  al3470 ) , .f_tui = (  tui3468 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) } );
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
            struct Key_278  field0;
        } InputEvent_889_Key_s;
        struct {
            struct MouseEvent_890  field0;
        } InputEvent_889_Mouse_s;
    } stuff;
};

static struct InputEvent_889 InputEvent_889_Key (  struct Key_278  field0 ) {
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
    struct Maybe_888  (*fun) (  struct env98*  ,    struct Tui_100 *  );
    struct env98 env;
};

struct env886 {
    struct env98 envinst98;
    struct Tui_100 *  tui4555;
};

struct envunion892 {
    struct Maybe_888  (*fun) (  struct env886*  );
    struct env886 env;
};

struct FunIter_885 {
    struct envunion892  f_fun;
    bool  f_finished;
};

static  struct FunIter_885   into_dash_iter893 (    struct FunIter_885  self1029 ) {
    return (  self1029 );
}

static  struct FunIter_885   from_dash_function894 (   struct envunion892  fun1037 ) {
    return ( (struct FunIter_885) { .f_fun = (  fun1037 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions899 (   struct env97* env ,    struct Tui_100 *  tui3434 ) {
    if ( ( ! ( * ( env->should_dash_resize3362 ) ) ) ) {
        return ( false );
    }
    (*  tui3434 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3362 ) = ( false );
    struct Tuple2_805  dim3435 = ( (  get_dash_dimensions806 ) ( ) );
    uint32_t  w3436 = ( (  fst839 ) ( (  dim3435 ) ) );
    uint32_t  h3437 = ( (  snd840 ) ( (  dim3435 ) ) );
    (*  tui3434 ) .f_width = (  w3436 );
    (*  tui3434 ) .f_height = (  h3437 );
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

static  struct pollfd *   cast_dash_ptr907 (    struct Pollfd_906 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr910 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of911 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed908 (  ) {
    char  temp909;
    char  x571 = (  temp909 );
    ( ( memset ) ( ( (  cast_dash_ptr910 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of911 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Maybe_904   read_dash_byte905 (    int32_t  timeout_dash_ms3356 ) {
    struct Pollfd_906  pfd3357 = ( (struct Pollfd_906) { .f_fd = (  from_dash_integral67 ( 0 ) ) , .f_events = (  from_dash_integral818 ( 1 ) ) , .f_revents = (  from_dash_integral818 ( 0 ) ) } );
    if ( (  cmp166 ( ( ( poll ) ( ( (  cast_dash_ptr907 ) ( ( & (  pfd3357 ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ,  (  timeout_dash_ms3356 ) ) ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_904) { .tag = Maybe_904_None_t } );
    }
    char  c3358 = ( ( (  zeroed908 ) ( ) ) );
    if ( (  cmp166 ( ( ( read ) ( ( (  stdin_dash_fileno724 ) ( ) ) ,  ( (  cast_dash_ptr910 ) ( ( & (  c3358 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_904) { .tag = Maybe_904_None_t } );
    }
    return ( ( Maybe_904_Just ) ( (  c3358 ) ) );
}

static  char   u8_dash_ascii912 (    uint8_t  b780 ) {
    return ( ( (char ) (  b780 ) ) );
}

static  uint8_t *   cast916 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed914 (    uint8_t  x574 ) {
    uint32_t  temp915 = ( (  zeroed822 ) ( ) );
    uint32_t *  y575 = ( &temp915 );
    uint8_t *  yp576 = ( (  cast916 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  uint32_t   u8_dash_u32913 (    uint8_t  x673 ) {
    return ( (  cast_dash_on_dash_zeroed914 ) ( (  x673 ) ) );
}

struct Map_919 {
    struct StrViewIter_62  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_919 Map_919_Map (  struct StrViewIter_62  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_919 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_919   into_dash_iter920 (    struct Map_919  self797 ) {
    return (  self797 );
}

static  struct Maybe_733   next921 (    struct Map_919 *  dref799 ) {
    struct Maybe_306  dref802 = ( (  next690 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_733) { .tag = Maybe_733_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_306_Just_t ) {
            return ( ( Maybe_733_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_306_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce918 (    struct Map_919  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct Map_919  it1100 = ( (  into_dash_iter920 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_733  dref1101 = ( (  next921 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_733_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_733_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_733_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp922 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp922);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp923;
    return (  temp923 );
}

static  struct Map_919   map924 (    struct StrView_27  iterable806 ,    uint32_t (*  fun808 )(    struct Char_65  ) ) {
    struct StrViewIter_62  it809 = ( (  into_dash_iter703 ) ( (  iterable806 ) ) );
    return ( ( Map_919_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  void *   cast_dash_ptr931 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of932 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed929 (  ) {
    int64_t  temp930;
    int64_t  x571 = (  temp930 );
    ( ( memset ) ( ( (  cast_dash_ptr931 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of932 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   cast933 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed927 (    uint8_t  x574 ) {
    int64_t  temp928 = ( (  zeroed929 ) ( ) );
    int64_t *  y575 = ( &temp928 );
    uint8_t *  yp576 = ( (  cast933 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  int64_t   u8_dash_i64926 (    uint8_t  x667 ) {
    return ( (  cast_dash_on_dash_zeroed927 ) ( (  x667 ) ) );
}

struct StrConcat_936 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_936 StrConcat_936_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_936 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_935 {
    struct StrConcat_936  field0;
    struct StrView_27  field1;
};

static struct StrConcat_935 StrConcat_935_StrConcat (  struct StrConcat_936  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_935 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_940 {
    struct StrView_27  field0;
    struct StrConcat_935  field1;
};

static struct StrConcat_940 StrConcat_940_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_935  field1 ) {
    return ( struct StrConcat_940 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_939 {
    struct StrConcat_940  field0;
    struct Char_65  field1;
};

static struct StrConcat_939 StrConcat_939_StrConcat (  struct StrConcat_940  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_939 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str943 (    struct StrConcat_936  self1510 ) {
    struct StrConcat_936  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str344 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str942 (    struct StrConcat_935  self1510 ) {
    struct StrConcat_935  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str943 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str941 (    struct StrConcat_940  self1510 ) {
    struct StrConcat_940  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str942 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str938 (    struct StrConcat_939  self1510 ) {
    struct StrConcat_939  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str941 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic937 (    struct StrConcat_935  errmsg1714 ) {
    ( (  print_dash_str938 ) ( ( ( StrConcat_939_StrConcat ) ( ( ( StrConcat_940_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail934 (    struct Maybe_487  x1727 ,    struct StrConcat_935  errmsg1729 ) {
    struct Maybe_487  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_487_None_t ) {
        ( (  panic937 ) ( (  errmsg1729 ) ) );
        return ( (  undefined565 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_487_Just_t ) {
            return ( dref1730 .stuff .Maybe_487_Just_s .field0 );
        }
    }
}

static  enum Ordering_167   cmp945 (    struct Char_65  l745 ,    struct Char_65  r747 ) {
    if ( ( ( !  eq408 ( ( (  l745 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq408 ( ( (  r747 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp946 = ( (  from_dash_string68 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp946);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (  cmp316 ) ( ( (  char_dash_u8495 ) ( (  l745 ) ) ) ,  ( (  char_dash_u8495 ) ( (  r747 ) ) ) ) );
}

static  uint8_t   op_dash_sub947 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add948 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_487   hex_dash_digit944 (    struct Char_65  c2575 ) {
    if ( ( (  cmp945 ( (  c2575 ) , ( (  from_dash_charlike355 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp945 ( (  c2575 ) , ( (  from_dash_charlike355 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_487_Just ) ( (  op_dash_sub947 ( ( (  char_dash_u8495 ) ( (  c2575 ) ) ) , ( (  char_dash_u8495 ) ( ( (  from_dash_charlike355 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp945 ( (  c2575 ) , ( (  from_dash_charlike355 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp945 ( (  c2575 ) , ( (  from_dash_charlike355 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_487_Just ) ( (  op_dash_add948 ( (  op_dash_sub947 ( ( (  char_dash_u8495 ) ( (  c2575 ) ) ) , ( (  char_dash_u8495 ) ( ( (  from_dash_charlike355 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral317 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp945 ( (  c2575 ) , ( (  from_dash_charlike355 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp945 ( (  c2575 ) , ( (  from_dash_charlike355 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_487_Just ) ( (  op_dash_add948 ( (  op_dash_sub947 ( ( (  char_dash_u8495 ) ( (  c2575 ) ) ) , ( (  char_dash_u8495 ) ( ( (  from_dash_charlike355 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral317 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_487) { .tag = Maybe_487_None_t } );
}

static  uint32_t   lam925 (    struct Char_65  c2580 ) {
    return ( (  from_dash_integral174 ) ( ( (  u8_dash_i64926 ) ( ( (  or_dash_fail934 ) ( ( (  hex_dash_digit944 ) ( (  c2580 ) ) ) ,  ( ( StrConcat_935_StrConcat ) ( ( ( StrConcat_936_StrConcat ) ( ( (  from_dash_charlike355 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2580 ) ) ) ,  ( (  from_dash_string208 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam949 (    uint32_t  elem2582 ,    uint32_t  b2584 ) {
    return (  op_dash_add180 ( (  op_dash_mul176 ( (  b2584 ) , (  from_dash_integral174 ( 16 ) ) ) ) , (  elem2582 ) ) );
}

static  uint32_t   from_dash_hex917 (    struct StrView_27  arr2578 ) {
    return ( (  reduce918 ) ( ( (  map924 ) ( (  arr2578 ) ,  (  lam925 ) ) ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  lam949 ) ) );
}

static  bool   eq951 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

struct Array_952 {
    char _arr [32];
};

static  void *   cast_dash_ptr956 (    struct Array_952 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of957 (    struct Array_952  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_952   zeroed954 (  ) {
    struct Array_952  temp955;
    struct Array_952  x571 = (  temp955 );
    ( ( memset ) ( ( (  cast_dash_ptr956 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of957 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  char *   cast_dash_ptr961 (    struct Array_952 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr962 (    char *  x338 ,    int64_t  count340 ) {
    char  temp963;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp963 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr960 (    struct Array_952 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp299 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2258 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic389 ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2259 = ( ( (  cast_dash_ptr961 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr962 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  enum Unit_8   set959 (    struct Array_952 *  arr2268 ,    size_t  i2271 ,    char  e2273 ) {
    char *  p2274 = ( (  get_dash_ptr960 ) ( (  arr2268 ) ,  (  i2271 ) ) );
    (*  p2274 ) = (  e2273 );
    return ( Unit_8_Unit );
}

struct Slice_965 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail968 (    struct Maybe_904  x1727 ,    struct StrConcat_330  errmsg1729 ) {
    struct Maybe_904  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_904_None_t ) {
        ( (  panic332 ) ( (  errmsg1729 ) ) );
        return ( (  undefined902 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_904_Just_t ) {
            return ( dref1730 .stuff .Maybe_904_Just_s .field0 );
        }
    }
}

static  struct Maybe_904   try_dash_get969 (    struct Slice_965  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp299 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_904) { .tag = Maybe_904_None_t } );
    }
    char *  elem_dash_ptr1768 = ( (  offset_dash_ptr962 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_904_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  char   get967 (    struct Slice_965  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail968 ) ( ( (  try_dash_get969 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get966 (    struct Slice_965  self1869 ,    size_t  idx1871 ) {
    return ( (  get967 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

struct Scanner_970 {
    struct StrViewIter_62  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_970   mk_dash_from_dash_str972 (    struct StrView_27  s3203 ) {
    return ( (struct Scanner_970) { .f_s = ( (  chars702 ) ( (  s3203 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_976 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr309 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_27   substr973 (    struct StrView_27  s2177 ,    size_t  from2179 ,    size_t  to2181 ) {
    size_t  from_dash_bs2182 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_162  temp974 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  size_dash_i32338 ) ( (  from2179 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond975 =  next165 (&temp974);
        if (  __cond975 .tag == 0 ) {
            break;
        }
        int32_t  dref2183 =  __cond975 .stuff .Maybe_164_Just_s .field0;
        if ( (  cmp299 ( (  from_dash_bs2182 ) , ( ( (  s2177 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2182 = (  op_dash_add320 ( (  from_dash_bs2182 ) , ( (  next_dash_char315 ) ( ( (  offset_dash_ptr_prime_976 ) ( ( ( (  s2177 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2182 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2184 = (  from_dash_bs2182 );
    struct RangeIter_162  temp977 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  op_dash_sub173 ( ( (  size_dash_i32338 ) ( (  to2181 ) ) ) , ( (  size_dash_i32338 ) ( (  from2179 ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond978 =  next165 (&temp977);
        if (  __cond978 .tag == 0 ) {
            break;
        }
        int32_t  dref2185 =  __cond978 .stuff .Maybe_164_Just_s .field0;
        if ( (  cmp299 ( (  to_dash_bs2184 ) , ( ( (  s2177 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2184 = (  op_dash_add320 ( (  to_dash_bs2184 ) , ( (  next_dash_char315 ) ( ( (  offset_dash_ptr_prime_976 ) ( ( ( (  s2177 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2184 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice507 ) ( ( (  s2177 ) .f_contents ) ,  (  from_dash_bs2182 ) ,  (  to_dash_bs2184 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr981 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice980 (    struct Slice_965  s1934 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr981 ) ( ( (  s1934 ) .f_ptr ) ) ) , .f_count = ( (  s1934 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice979 (    struct Slice_965  sl2151 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice980 ) ( (  sl2151 ) ) ) } );
}

struct Maybe_982 {
    enum {
        Maybe_982_None_t,
        Maybe_982_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_982_Just_s;
    } stuff;
};

static struct Maybe_982 Maybe_982_Just (  int64_t  field0 ) {
    return ( struct Maybe_982 ) { .tag = Maybe_982_Just_t, .stuff = { .Maybe_982_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_984 {
    struct Scanner_970  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_970   into_dash_iter987 (    struct Scanner_970  self3194 ) {
    return (  self3194 );
}

static  struct Scanner_970   into_dash_iter986 (    struct Scanner_970 *  self786 ) {
    return ( (  into_dash_iter987 ) ( ( * (  self786 ) ) ) );
}

static  struct TakeWhile_984   take_dash_while985 (    struct Scanner_970 *  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_984) { .f_it = ( (  into_dash_iter986 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  bool   is_dash_digit988 (    struct Char_65  c2481 ) {
    return ( (  cmp316 ( ( (  char_dash_u8495 ) ( (  c2481 ) ) ) , ( (  char_dash_u8495 ) ( ( (  from_dash_charlike355 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp316 ( ( (  char_dash_u8495 ) ( (  c2481 ) ) ) , ( (  char_dash_u8495 ) ( ( (  from_dash_charlike355 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_306   next992 (    struct Scanner_970 *  self3189 ) {
    struct Maybe_306  dref3190 = ( (  next690 ) ( ( & ( ( * (  self3189 ) ) .f_s ) ) ) );
    if ( dref3190.tag == Maybe_306_Just_t ) {
        (*  self3189 ) .f_byte_dash_offset = (  op_dash_add320 ( ( ( * (  self3189 ) ) .f_byte_dash_offset ) , ( ( dref3190 .stuff .Maybe_306_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_306_Just ) ( ( dref3190 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref3190.tag == Maybe_306_None_t ) {
            return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
        }
    }
}

static  struct Maybe_306   next991 (    struct TakeWhile_984 *  self965 ) {
    struct Maybe_306  mx966 = ( (  next992 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_306  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_306_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_306_Just ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
            }
        }
    }
}

static  struct TakeWhile_984   into_dash_iter994 (    struct TakeWhile_984  self962 ) {
    return (  self962 );
}

static  struct Maybe_306   head990 (    struct TakeWhile_984  it1143 ) {
    struct TakeWhile_984  temp993 = ( (  into_dash_iter994 ) ( (  it1143 ) ) );
    return ( (  next991 ) ( ( &temp993 ) ) );
}

static  bool   null989 (    struct TakeWhile_984  it1152 ) {
    struct Maybe_306  dref1153 = ( (  head990 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_306_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env997 {
    ;
    struct Scanner_970 *  it1187;
};

struct envunion998 {
    struct Maybe_306  (*fun) (  struct env997*  ,    int32_t  );
    struct env997 env;
};

static  enum Unit_8   for_dash_each996 (    struct Range_159  iterable1075 ,   struct envunion998  fun1077 ) {
    struct RangeIter_162  temp999 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp999 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion998  temp1000 = (  fun1077 );
                ( temp1000.fun ( &temp1000.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_306   lam1001 (   struct env997* env ,    int32_t  dref1190 ) {
    return ( (  next992 ) ( ( env->it1187 ) ) );
}

static  enum Unit_8   drop_prime_995 (    struct Scanner_970 *  it1187 ,    size_t  n1189 ) {
    struct env997 envinst997 = {
        .it1187 =  it1187 ,
    };
    ( (  for_dash_each996 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  ( (  size_dash_i32338 ) ( (  n1189 ) ) ) ) ) ,  ( (struct envunion998){ .fun = (  struct Maybe_306  (*) (  struct env997*  ,    int32_t  ) )lam1001 , .env =  envinst997 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce1003 (    struct TakeWhile_984  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct TakeWhile_984  it1100 = ( (  into_dash_iter994 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_306  dref1101 = ( (  next991 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_306_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_306_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_306_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1004 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1004);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1005;
    return (  temp1005 );
}

static  size_t   lam1006 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add320 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1002 (    struct TakeWhile_984  it1105 ) {
    return ( (  reduce1003 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1006 ) ) );
}

static  struct TakeWhile_984   chars1008 (    struct TakeWhile_984  self1658 ) {
    return (  self1658 );
}

static  struct Maybe_982   reduce1009 (    struct TakeWhile_984  iterable1094 ,    struct Maybe_982  base1096 ,    struct Maybe_982 (*  fun1098 )(    struct Char_65  ,    struct Maybe_982  ) ) {
    struct Maybe_982  x1099 = (  base1096 );
    struct TakeWhile_984  it1100 = ( (  into_dash_iter994 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_306  dref1101 = ( (  next991 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_306_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_306_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_306_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1010 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1010);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_982  temp1011;
    return (  temp1011 );
}

static  void *   cast_dash_ptr1019 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1020 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed1017 (  ) {
    int32_t  temp1018;
    int32_t  x571 = (  temp1018 );
    ( ( memset ) ( ( (  cast_dash_ptr1019 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of1020 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   cast1021 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1015 (    uint8_t  x574 ) {
    int32_t  temp1016 = ( (  zeroed1017 ) ( ) );
    int32_t *  y575 = ( &temp1016 );
    uint8_t *  yp576 = ( (  cast1021 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  int32_t   u8_dash_i321014 (    uint8_t  x670 ) {
    return ( (  cast_dash_on_dash_zeroed1015 ) ( (  x670 ) ) );
}

static  struct Maybe_164   parse_dash_digit1013 (    struct Char_65  c2484 ) {
    if ( ( (  is_dash_digit988 ) ( (  c2484 ) ) ) ) {
        return ( ( Maybe_164_Just ) ( ( (  u8_dash_i321014 ) ( (  op_dash_sub947 ( ( (  char_dash_u8495 ) ( (  c2484 ) ) ) , ( (  char_dash_u8495 ) ( ( (  from_dash_charlike355 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
}

static  int64_t   i32_dash_i641022 (    int32_t  x607 ) {
    return ( (int64_t ) (  x607 ) );
}

static  struct Maybe_982   sequence_dash_maybe1012 (    struct Char_65  e2490 ,    struct Maybe_982  b2492 ) {
    struct Maybe_982  dref2493 = (  b2492 );
    if ( dref2493.tag == Maybe_982_None_t ) {
        return ( (struct Maybe_982) { .tag = Maybe_982_None_t } );
    }
    else {
        if ( dref2493.tag == Maybe_982_Just_t ) {
            struct Maybe_164  dref2495 = ( (  parse_dash_digit1013 ) ( (  e2490 ) ) );
            if ( dref2495.tag == Maybe_164_None_t ) {
                return ( (struct Maybe_982) { .tag = Maybe_982_None_t } );
            }
            else {
                if ( dref2495.tag == Maybe_164_Just_t ) {
                    return ( ( Maybe_982_Just ) ( (  op_dash_add586 ( (  op_dash_mul295 ( ( dref2493 .stuff .Maybe_982_Just_s .field0 ) , (  from_dash_integral297 ( 10 ) ) ) ) , ( (  i32_dash_i641022 ) ( ( dref2495 .stuff .Maybe_164_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_982   parse_dash_int1007 (    struct TakeWhile_984  s2487 ) {
    struct TakeWhile_984  cs2497 = ( (  chars1008 ) ( (  s2487 ) ) );
    struct Maybe_306  dref2498 = ( (  head990 ) ( (  cs2497 ) ) );
    if ( dref2498.tag == Maybe_306_Just_t ) {
        return ( (  reduce1009 ) ( (  cs2497 ) ,  ( ( Maybe_982_Just ) ( (  from_dash_integral297 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1012 ) ) );
    }
    else {
        if ( dref2498.tag == Maybe_306_None_t ) {
            return ( (struct Maybe_982) { .tag = Maybe_982_None_t } );
        }
    }
}

static  struct Maybe_982   scan_dash_int983 (    struct Scanner_970 *  sc3206 ) {
    struct TakeWhile_984  digit_dash_chars3207 = ( (  take_dash_while985 ) ( (  sc3206 ) ,  (  is_dash_digit988 ) ) );
    if ( ( (  null989 ) ( (  digit_dash_chars3207 ) ) ) ) {
        return ( (struct Maybe_982) { .tag = Maybe_982_None_t } );
    }
    ( (  drop_prime_995 ) ( (  sc3206 ) ,  ( (  count1002 ) ( (  digit_dash_chars3207 ) ) ) ) );
    return ( (  parse_dash_int1007 ) ( (  digit_dash_chars3207 ) ) );
}

static  int32_t   i64_dash_i321024 (    int64_t  x619 ) {
    return ( (int32_t ) (  x619 ) );
}

struct StrConcat_1026 {
    struct StrView_27  field0;
    int64_t  field1;
};

static struct StrConcat_1026 StrConcat_1026_StrConcat (  struct StrView_27  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_1026 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1029 {
    struct StrView_27  field0;
    struct StrConcat_1026  field1;
};

static struct StrConcat_1029 StrConcat_1029_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1026  field1 ) {
    return ( struct StrConcat_1029 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1028 {
    struct StrConcat_1029  field0;
    struct Char_65  field1;
};

static struct StrConcat_1028 StrConcat_1028_StrConcat (  struct StrConcat_1029  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1028 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1034 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1033 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_1034  f_right;
};

struct StrConcatIter_1032 {
    struct StrViewIter_62  f_left;
    struct StrConcatIter_1033  f_right;
};

struct StrConcatIter_1031 {
    struct StrConcatIter_1032  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_1031   into_dash_iter1036 (    struct StrConcatIter_1031  self1498 ) {
    return (  self1498 );
}

struct env1043 {
    ;
    int64_t  base1211;
};

struct envunion1044 {
    int64_t  (*fun) (  struct env1043*  ,    int32_t  ,    int64_t  );
    struct env1043 env;
};

static  int64_t   reduce1042 (    struct Range_159  iterable1094 ,    int64_t  base1096 ,   struct envunion1044  fun1098 ) {
    int64_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1044  temp1045 = (  fun1098 );
                x1099 = ( temp1045.fun ( &temp1045.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1046 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1046);
    exit ( 1 );
    ( Unit_8_Unit );
    int64_t  temp1047;
    return (  temp1047 );
}

static  int64_t   lam1048 (   struct env1043* env ,    int32_t  item1215 ,    int64_t  x1217 ) {
    return (  op_dash_mul295 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  int64_t   pow1041 (    int64_t  base1211 ,    int32_t  p1213 ) {
    struct env1043 envinst1043 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1042 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral297 ( 1 ) ) ,  ( (struct envunion1044){ .fun = (  int64_t  (*) (  struct env1043*  ,    int32_t  ,    int64_t  ) )lam1048 , .env =  envinst1043 } ) ) );
}

static  int64_t   op_dash_div1049 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast1050 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub1051 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast1057 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed1055 (    uint8_t  x574 ) {
    size_t  temp1056 = ( (  zeroed851 ) ( ) );
    size_t *  y575 = ( &temp1056 );
    uint8_t *  yp576 = ( (  cast1057 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  size_t   u8_dash_size1054 (    uint8_t  x664 ) {
    return ( (  cast_dash_on_dash_zeroed1055 ) ( (  x664 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1053 (    uint8_t *  ptr682 ,    uint8_t  b684 ) {
    size_t  s685 = ( ( (size_t ) (  ptr682 ) ) );
    size_t  exp686 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add320 ( (  op_dash_sub298 ( (  s685 ) , ( (  u8_dash_size1054 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer349 ) ( (  ptr682 ) ) ) ) ) ) ) , (  op_dash_mul414 ( (  exp686 ) , ( (  u8_dash_size1054 ) ( (  b684 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1058 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_u81052 (    uint8_t  b773 ) {
    uint8_t *  ptr774 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1053 ) ( ( ( (  cast1058 ) ( ( (  u8_dash_size1054 ) ( (  b773 ) ) ) ) ) ) ,  (  from_dash_integral317 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr774 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_306   next1040 (    struct IntStrIter_1034 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_306_Just ) ( ( (  from_dash_charlike355 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    int64_t  trim_dash_down1430 = ( (  pow1041 ) ( (  from_dash_integral297 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    int64_t  upper1431 = (  op_dash_div1049 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    int64_t  upper_dash_mask1432 = (  op_dash_mul295 ( (  op_dash_div1049 ( (  upper1431 ) , (  from_dash_integral297 ( 10 ) ) ) ) , (  from_dash_integral297 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast1050 ) ( (  op_dash_sub1051 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81052 ) ( (  op_dash_add948 ( (  digit1433 ) , (  from_dash_integral317 ( 48 ) ) ) ) ) );
    return ( ( Maybe_306_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_306   next1039 (    struct StrConcatIter_1033 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next1040 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next1038 (    struct StrConcatIter_1032 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next1039 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next1037 (    struct StrConcatIter_1031 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next1038 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1030 (    struct StrConcatIter_1031  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_1031  temp1035 = ( (  into_dash_iter1036 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1031 *  it1078 = ( &temp1035 );
    while ( ( true ) ) {
        struct Maybe_306  dref1079 = ( (  next1037 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_306_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp1067 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg1068 (    int64_t  l204 ) {
    return ( (  from_dash_integral297 ( 0 ) ) - (  l204 ) );
}

static  bool   eq1070 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits1069 (    int64_t  self1437 ) {
    if ( (  eq1070 ( (  self1437 ) , (  from_dash_integral297 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp1067 ( (  self1437 ) , (  from_dash_integral297 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div1049 ( (  self1437 ) , (  from_dash_integral297 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1034   int_dash_iter1066 (    int64_t  int1441 ) {
    if ( (  cmp1067 ( (  int1441 ) , (  from_dash_integral297 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1034) { .f_int = (  op_dash_neg1068 ( (  int1441 ) ) ) , .f_len = ( (  count_dash_digits1069 ) ( (  op_dash_neg1068 ( (  int1441 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1034) { .f_int = (  int1441 ) , .f_len = ( (  count_dash_digits1069 ) ( (  int1441 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1034   chars1065 (    int64_t  self1468 ) {
    return ( (  int_dash_iter1066 ) ( (  self1468 ) ) );
}

static  struct StrConcatIter_1033   into_dash_iter1064 (    struct StrConcat_1026  dref1505 ) {
    return ( (struct StrConcatIter_1033) { .f_left = ( (  chars702 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1065 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1033   chars1063 (    struct StrConcat_1026  self1516 ) {
    return ( (  into_dash_iter1064 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1032   into_dash_iter1062 (    struct StrConcat_1029  dref1505 ) {
    return ( (struct StrConcatIter_1032) { .f_left = ( (  chars702 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1063 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1032   chars1061 (    struct StrConcat_1029  self1516 ) {
    return ( (  into_dash_iter1062 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1031   into_dash_iter1060 (    struct StrConcat_1028  dref1505 ) {
    return ( (struct StrConcatIter_1031) { .f_left = ( (  chars1061 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars704 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1031   chars1059 (    struct StrConcat_1028  self1516 ) {
    return ( (  into_dash_iter1060 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print1027 (    struct StrConcat_1028  s1703 ) {
    ( (  for_dash_each1030 ) ( ( (  chars1059 ) ( (  s1703 ) ) ) ,  (  printf_dash_char345 ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_891   undefined1071 (  ) {
    enum MouseButton_891  temp1072;
    return (  temp1072 );
}

static  enum MouseButton_891   panic_prime_1025 (    struct StrConcat_1026  errmsg1717 ) {
    ( (  print1027 ) ( ( ( StrConcat_1028_StrConcat ) ( ( ( StrConcat_1029_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1717 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1071 ) ( ) );
}

static  enum MouseButton_891   btn_dash_to_dash_mouse_dash_button1023 (    int64_t  btn3394 ) {
    return ( {  int32_t  dref3395 = ( (  i64_dash_i321024 ) ( (  btn3394 ) ) ) ;  dref3395 == 0 ? ( MouseButton_891_MouseLeft ) :  dref3395 == 1 ? ( MouseButton_891_MouseMiddle ) :  dref3395 == 2 ? ( MouseButton_891_MouseRight ) :  dref3395 == 64 ? ( MouseButton_891_ScrollUp ) :  dref3395 == 65 ? ( MouseButton_891_ScrollDown ) : ( (  panic_prime_1025 ) ( ( ( StrConcat_1026_StrConcat ) ( ( (  from_dash_string208 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3394 ) ) ) ) ) ; } );
}

static  struct Scanner_970   mk1074 (    struct StrView_27  s3197 ) {
    return ( (struct Scanner_970) { .f_s = ( (  into_dash_iter703 ) ( (  s3197 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_888   parse_dash_csi964 (    struct Slice_965  seq3401 ) {
    if ( (  eq408 ( ( (  seq3401 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    char  last3402 = (  elem_dash_get966 ( (  seq3401 ) , (  op_dash_sub298 ( ( (  seq3401 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq951 ( (  elem_dash_get966 ( (  seq3401 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike518 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq951 ( (  last3402 ) , ( (  from_dash_charlike518 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq951 ( (  last3402 ) , ( (  from_dash_charlike518 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_970  temp971 = ( (  mk_dash_from_dash_str972 ) ( ( (  substr973 ) ( ( (  from_dash_ascii_dash_slice979 ) ( (  seq3401 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3401 ) .f_count ) ) ) ) );
        struct Scanner_970 *  sc3403 = ( &temp971 );
        struct Maybe_982  dref3404 = ( (  scan_dash_int983 ) ( (  sc3403 ) ) );
        if ( dref3404.tag == Maybe_982_None_t ) {
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
        else {
            if ( dref3404.tag == Maybe_982_Just_t ) {
                ( (  next992 ) ( (  sc3403 ) ) );
                struct Maybe_982  dref3406 = ( (  scan_dash_int983 ) ( (  sc3403 ) ) );
                if ( dref3406.tag == Maybe_982_None_t ) {
                    return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
                }
                else {
                    if ( dref3406.tag == Maybe_982_Just_t ) {
                        ( (  next992 ) ( (  sc3403 ) ) );
                        struct Maybe_982  dref3408 = ( (  scan_dash_int983 ) ( (  sc3403 ) ) );
                        if ( dref3408.tag == Maybe_982_None_t ) {
                            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
                        }
                        else {
                            if ( dref3408.tag == Maybe_982_Just_t ) {
                                return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Mouse ) ( ( (struct MouseEvent_890) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1023 ) ( ( dref3404 .stuff .Maybe_982_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub173 ( ( (  i64_dash_i321024 ) ( ( dref3406 .stuff .Maybe_982_Just_s .field0 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , .f_y = (  op_dash_sub173 ( ( (  i64_dash_i321024 ) ( ( dref3408 .stuff .Maybe_982_Just_s .field0 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , .f_pressed = (  eq951 ( (  last3402 ) , ( (  from_dash_charlike518 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq408 ( ( (  seq3401 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq951 ( (  last3402 ) , ( (  from_dash_charlike518 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Up_t } ) ) ) ) );
        }
        if ( (  eq951 ( (  last3402 ) , ( (  from_dash_charlike518 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Down_t } ) ) ) ) );
        }
        if ( (  eq951 ( (  last3402 ) , ( (  from_dash_charlike518 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Right_t } ) ) ) ) );
        }
        if ( (  eq951 ( (  last3402 ) , ( (  from_dash_charlike518 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Left_t } ) ) ) ) );
        }
        if ( (  eq951 ( (  last3402 ) , ( (  from_dash_charlike518 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Home_t } ) ) ) ) );
        }
        if ( (  eq951 ( (  last3402 ) , ( (  from_dash_charlike518 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    if ( (  eq951 ( (  last3402 ) , ( (  from_dash_charlike518 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_970  temp1073 = ( (  mk1074 ) ( ( (  from_dash_ascii_dash_slice979 ) ( (  seq3401 ) ) ) ) );
        struct Scanner_970 *  sc3410 = ( &temp1073 );
        struct Maybe_982  dref3411 = ( (  scan_dash_int983 ) ( (  sc3410 ) ) );
        if ( dref3411.tag == Maybe_982_None_t ) {
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
        else {
            if ( dref3411.tag == Maybe_982_Just_t ) {
                return ( {  int32_t  dref3413 = ( (  i64_dash_i321024 ) ( ( dref3411 .stuff .Maybe_982_Just_s .field0 ) ) ) ;  dref3413 == 1 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Home_t } ) ) ) ) ) :  dref3413 == 2 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Insert_t } ) ) ) ) ) :  dref3413 == 3 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Delete_t } ) ) ) ) ) :  dref3413 == 4 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_End_t } ) ) ) ) ) :  dref3413 == 5 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_PageUp_t } ) ) ) ) ) :  dref3413 == 6 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_PageDown_t } ) ) ) ) ) :  dref3413 == 15 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_F5_t } ) ) ) ) ) :  dref3413 == 17 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_F6_t } ) ) ) ) ) :  dref3413 == 18 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_F7_t } ) ) ) ) ) :  dref3413 == 19 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_F8_t } ) ) ) ) ) :  dref3413 == 20 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_F9_t } ) ) ) ) ) :  dref3413 == 21 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_F10_t } ) ) ) ) ) :  dref3413 == 23 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_F11_t } ) ) ) ) ) :  dref3413 == 24 ? ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_F12_t } ) ) ) ) ) : ( (struct Maybe_888) { .tag = Maybe_888_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
}

static  struct Slice_965   subslice1075 (    struct Slice_965  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    char *  begin_dash_ptr1789 = ( (  offset_dash_ptr962 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp299 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp299 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_965) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub298 ( ( (  min508 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_965) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  char *   cast1077 (    struct Array_952 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_965   as_dash_slice1076 (    struct Array_952 *  arr2277 ) {
    return ( (struct Slice_965) { .f_ptr = ( (  cast1077 ) ( (  arr2277 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1079 {
    enum {
        Maybe_1079_None_t,
        Maybe_1079_Just_t,
    } tag;
    union {
        struct {
            struct Key_278  field0;
        } Maybe_1079_Just_s;
    } stuff;
};

static struct Maybe_1079 Maybe_1079_Just (  struct Key_278  field0 ) {
    return ( struct Maybe_1079 ) { .tag = Maybe_1079_Just_t, .stuff = { .Maybe_1079_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1079   parse_dash_ss31080 (    char  c3398 ) {
    if ( (  eq951 ( (  c3398 ) , ( (  from_dash_charlike518 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1079_Just ) ( ( (struct Key_278) { .tag = Key_278_Up_t } ) ) );
    }
    if ( (  eq951 ( (  c3398 ) , ( (  from_dash_charlike518 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1079_Just ) ( ( (struct Key_278) { .tag = Key_278_Down_t } ) ) );
    }
    if ( (  eq951 ( (  c3398 ) , ( (  from_dash_charlike518 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1079_Just ) ( ( (struct Key_278) { .tag = Key_278_Right_t } ) ) );
    }
    if ( (  eq951 ( (  c3398 ) , ( (  from_dash_charlike518 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1079_Just ) ( ( (struct Key_278) { .tag = Key_278_Left_t } ) ) );
    }
    if ( (  eq951 ( (  c3398 ) , ( (  from_dash_charlike518 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1079_Just ) ( ( (struct Key_278) { .tag = Key_278_Home_t } ) ) );
    }
    if ( (  eq951 ( (  c3398 ) , ( (  from_dash_charlike518 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1079_Just ) ( ( (struct Key_278) { .tag = Key_278_End_t } ) ) );
    }
    if ( (  eq951 ( (  c3398 ) , ( (  from_dash_charlike518 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1079_Just ) ( ( (struct Key_278) { .tag = Key_278_F1_t } ) ) );
    }
    if ( (  eq951 ( (  c3398 ) , ( (  from_dash_charlike518 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1079_Just ) ( ( (struct Key_278) { .tag = Key_278_F2_t } ) ) );
    }
    if ( (  eq951 ( (  c3398 ) , ( (  from_dash_charlike518 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1079_Just ) ( ( (struct Key_278) { .tag = Key_278_F3_t } ) ) );
    }
    if ( (  eq951 ( (  c3398 ) , ( (  from_dash_charlike518 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1079_Just ) ( ( (struct Key_278) { .tag = Key_278_F4_t } ) ) );
    }
    return ( (struct Maybe_1079) { .tag = Maybe_1079_None_t } );
}

static  struct Maybe_888   read_dash_key900 (  ) {
    char  temp901 = ( (  undefined902 ) ( ) );
    char *  ch3415 = ( &temp901 );
    struct Maybe_904  dref3416 = ( (  read_dash_byte905 ) ( (  from_dash_integral67 ( 0 ) ) ) );
    if ( dref3416.tag == Maybe_904_None_t ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    else {
        if ( dref3416.tag == Maybe_904_Just_t ) {
            (*  ch3415 ) = ( dref3416 .stuff .Maybe_904_Just_s .field0 );
        }
    }
    if ( (  eq312 ( ( (  ascii_dash_u8517 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral317 ( 13 ) ) ) ) ) {
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Enter_t } ) ) ) ) );
    }
    if ( (  eq312 ( ( (  ascii_dash_u8517 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral317 ( 127 ) ) ) ) ) {
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp316 ( ( (  ascii_dash_u8517 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral317 ( 27 ) ) ) == 0 ) && ( !  eq312 ( ( (  ascii_dash_u8517 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral317 ( 9 ) ) ) ) ) ) {
        char  letter3418 = ( (  u8_dash_ascii912 ) ( ( (  u32_dash_u8153 ) ( ( (  u32_dash_or742 ) ( ( (  u8_dash_u32913 ) ( ( (  ascii_dash_u8517 ) ( ( * (  ch3415 ) ) ) ) ) ) ,  ( (  from_dash_hex917 ) ( ( (  from_dash_string208 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( ( Key_278_Ctrl ) ( (  letter3418 ) ) ) ) ) ) );
    }
    if ( ( !  eq312 ( ( (  ascii_dash_u8517 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral317 ( 27 ) ) ) ) ) {
        if ( (  cmp316 ( ( (  ascii_dash_u8517 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral317 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key900 ) ( ) );
        } else {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( ( Key_278_Char ) ( ( * (  ch3415 ) ) ) ) ) ) ) );
        }
    }
    char  temp950 = ( (  undefined902 ) ( ) );
    char *  ch23419 = ( &temp950 );
    struct Maybe_904  dref3420 = ( (  read_dash_byte905 ) ( (  from_dash_integral67 ( 50 ) ) ) );
    if ( dref3420.tag == Maybe_904_None_t ) {
        return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3420.tag == Maybe_904_Just_t ) {
            (*  ch23419 ) = ( dref3420 .stuff .Maybe_904_Just_s .field0 );
        }
    }
    if ( (  eq951 ( ( * (  ch23419 ) ) , ( (  from_dash_charlike518 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_952  temp953 = ( ( (  zeroed954 ) ( ) ) );
        struct Array_952 *  seq3422 = ( &temp953 );
        int32_t  slen3423 = (  from_dash_integral67 ( 0 ) );
        while ( (  cmp166 ( (  slen3423 ) , (  from_dash_integral67 ( 31 ) ) ) == 0 ) ) {
            char  temp958 = ( (  undefined902 ) ( ) );
            char *  sc3424 = ( &temp958 );
            struct Maybe_904  dref3425 = ( (  read_dash_byte905 ) ( (  from_dash_integral67 ( 50 ) ) ) );
            if ( dref3425.tag == Maybe_904_None_t ) {
                break;
            }
            else {
                if ( dref3425.tag == Maybe_904_Just_t ) {
                    (*  sc3424 ) = ( dref3425 .stuff .Maybe_904_Just_s .field0 );
                }
            }
            ( (  set959 ) ( (  seq3422 ) ,  ( (  i32_dash_size421 ) ( (  slen3423 ) ) ) ,  ( * (  sc3424 ) ) ) );
            slen3423 = (  op_dash_add168 ( (  slen3423 ) , (  from_dash_integral67 ( 1 ) ) ) );
            if ( ( (  cmp316 ( ( (  ascii_dash_u8517 ) ( ( * (  sc3424 ) ) ) ) , (  from_dash_integral317 ( 64 ) ) ) != 0 ) && (  cmp316 ( ( (  ascii_dash_u8517 ) ( ( * (  sc3424 ) ) ) ) , (  from_dash_integral317 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi964 ) ( ( (  subslice1075 ) ( ( (  as_dash_slice1076 ) ( (  seq3422 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size421 ) ( (  slen3423 ) ) ) ) ) ) );
    }
    if ( (  eq951 ( ( * (  ch23419 ) ) , ( (  from_dash_charlike518 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1078 = ( (  undefined902 ) ( ) );
        char *  sc3427 = ( &temp1078 );
        struct Maybe_904  dref3428 = ( (  read_dash_byte905 ) ( (  from_dash_integral67 ( 50 ) ) ) );
        if ( dref3428.tag == Maybe_904_None_t ) {
            return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3428.tag == Maybe_904_Just_t ) {
                (*  sc3427 ) = ( dref3428 .stuff .Maybe_904_Just_s .field0 );
            }
        }
        struct Maybe_1079  dref3430 = ( (  parse_dash_ss31080 ) ( ( * (  sc3427 ) ) ) );
        if ( dref3430.tag == Maybe_1079_None_t ) {
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
        else {
            if ( dref3430.tag == Maybe_1079_Just_t ) {
                return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( dref3430 .stuff .Maybe_1079_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_888_Just ) ( ( ( InputEvent_889_Key ) ( ( (struct Key_278) { .tag = Key_278_Escape_t } ) ) ) ) );
}

static  struct Maybe_888   read_dash_event897 (   struct env98* env ,    struct Tui_100 *  tui3440 ) {
    struct envunion99  temp898 = ( (struct envunion99){ .fun = (  bool  (*) (  struct env97*  ,    struct Tui_100 *  ) )update_dash_dimensions899 , .env =  env->envinst97 } );
    ( temp898.fun ( &temp898.env ,  (  tui3440 ) ) );
    struct Maybe_888  dref3441 = ( (  read_dash_key900 ) ( ) );
    if ( dref3441.tag == Maybe_888_None_t ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    else {
        if ( dref3441.tag == Maybe_888_Just_t ) {
            (*  tui3440 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_888_Just ) ( ( dref3441 .stuff .Maybe_888_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_888   lam895 (   struct env886* env ) {
    struct envunion887  temp896 = ( (struct envunion887){ .fun = (  struct Maybe_888  (*) (  struct env98*  ,    struct Tui_100 *  ) )read_dash_event897 , .env =  env->envinst98 } );
    return ( temp896.fun ( &temp896.env ,  ( env->tui4555 ) ) );
}

static  struct Maybe_888   next1082 (    struct FunIter_885 *  self1032 ) {
    if ( ( ( * (  self1032 ) ) .f_finished ) ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    struct envunion892  temp1083 = ( ( * (  self1032 ) ) .f_fun );
    struct Maybe_888  dref1033 = ( temp1083.fun ( &temp1083.env ) );
    if ( dref1033.tag == Maybe_888_Just_t ) {
        return ( ( Maybe_888_Just ) ( ( dref1033 .stuff .Maybe_888_Just_s .field0 ) ) );
    }
    else {
        if ( dref1033.tag == Maybe_888_None_t ) {
            (*  self1032 ) .f_finished = ( true );
            return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
        }
    }
}

struct env1086 {
    struct Editor_257 *  ed4412;
    ;
};

struct envunion1087 {
    enum Unit_8  (*fun) (  struct env1086*  ,    struct StrView_27  );
    struct env1086 env;
};

static  enum Unit_8   if_dash_just1085 (    struct Maybe_94  x1292 ,   struct envunion1087  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1087  temp1088 = (  fun1294 );
        ( temp1088.fun ( &temp1088.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1089 (   struct env1086* env ,    struct StrView_27  msg4414 ) {
    ( (  free511 ) ( (  msg4414 ) ,  ( ( * ( env->ed4412 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1084 (    struct Editor_257 *  ed4412 ) {
    struct env1086 envinst1086 = {
        .ed4412 =  ed4412 ,
    };
    ( (  if_dash_just1085 ) ( ( ( * (  ed4412 ) ) .f_msg ) ,  ( (struct envunion1087){ .fun = (  enum Unit_8  (*) (  struct env1086*  ,    struct StrView_27  ) )lam1089 , .env =  envinst1086 } ) ) );
    (*  ed4412 ) .f_msg = ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1091 {
    enum Unit_8  (*fun) (  struct env273*  ,    struct Editor_257 *  ,    struct Key_278  );
    struct env273 env;
};

enum CursorMovement_1097 {
    CursorMovement_1097_NoChanges,
    CursorMovement_1097_UpdateVI,
    CursorMovement_1097_OverrideSelect,
};

struct Tuple2_1099 {
    enum CursorMovement_1097  field0;
    enum CursorMovement_1097  field1;
};

static struct Tuple2_1099 Tuple2_1099_Tuple2 (  enum CursorMovement_1097  field0 ,  enum CursorMovement_1097  field1 ) {
    return ( struct Tuple2_1099 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1098 (    enum CursorMovement_1097  l4153 ,    enum CursorMovement_1097  r4155 ) {
    return ( {  struct Tuple2_1099  dref4156 = ( ( Tuple2_1099_Tuple2 ) ( (  l4153 ) ,  (  r4155 ) ) ) ;  dref4156 .field0 == CursorMovement_1097_NoChanges &&  dref4156 .field1 == CursorMovement_1097_NoChanges ? ( true ) :  dref4156 .field0 == CursorMovement_1097_UpdateVI &&  dref4156 .field1 == CursorMovement_1097_UpdateVI ? ( true ) :  dref4156 .field0 == CursorMovement_1097_OverrideSelect &&  dref4156 .field1 == CursorMovement_1097_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_27   from_dash_bytes1103 (    struct Slice_11  sl2154 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2154 ) } );
}

static  struct StrView_27   line1102 (    struct TextBuf_114 *  self3714 ,    int32_t  li3716 ) {
    return ( (  from_dash_bytes1103 ) ( ( (  to_dash_slice535 ) ( ( ( (  get532 ) ( ( & ( ( * (  self3714 ) ) .f_buf ) ) ,  ( (  i32_dash_size421 ) ( (  li3716 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe1106 (    struct Maybe_94  x1283 ,    int32_t (*  fun1285 )(    struct StrView_27  ) ,    int32_t  default1287 ) {
    return ( {  struct Maybe_94  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_94_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_94_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  struct Maybe_94   char_dash_replacement1107 (    struct Char_65  c4033 ) {
    if ( (  eq584 ( (  c4033 ) , ( (  from_dash_charlike355 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_94_Just ) ( ( (  from_dash_string208 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
}

static  size_t   reduce1110 (    struct StrViewIter_62  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrViewIter_62  it1100 = ( (  into_dash_iter789 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_306  dref1101 = ( (  next690 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_306_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_306_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_306_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1111 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1111);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1112;
    return (  temp1112 );
}

static  size_t   lam1113 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add320 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1109 (    struct StrViewIter_62  it1105 ) {
    return ( (  reduce1110 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1113 ) ) );
}

static  int32_t   lam1108 (    struct StrView_27  s4038 ) {
    return ( (  size_dash_i32338 ) ( ( (  count1109 ) ( ( (  chars702 ) ( (  s4038 ) ) ) ) ) ) );
}

static  int32_t   max1115 (    int32_t  l1316 ,    int32_t  r1318 ) {
    if ( (  cmp166 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  void *   cast_dash_ptr1121 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1122 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed1119 (  ) {
    wchar_t  temp1120;
    wchar_t  x571 = (  temp1120 );
    ( ( memset ) ( ( (  cast_dash_ptr1121 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of1122 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  char *   cast_dash_ptr1123 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast1124 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_1127 {
    size_t  f_size;
};

static  struct TypeSize_1127   get_dash_typesize1126 (  ) {
    wchar_t  temp1128;
    return ( (struct TypeSize_1127) { .f_size = ( sizeof( ( (  temp1128 ) ) ) ) } );
}

static  wchar_t   cast1130 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar1117 (    struct Char_65  c751 ) {
    struct CharDestructured_346  dref752 = ( (  destructure348 ) ( (  c751 ) ) );
    if ( dref752.tag == CharDestructured_346_Ref_t ) {
        wchar_t  temp1118 = ( (  zeroed1119 ) ( ) );
        wchar_t *  wcp754 = ( &temp1118 );
        size_t  num_dash_chars755 = ( ( mbstowcs ) ( (  wcp754 ) ,  ( (  cast_dash_ptr1123 ) ( ( ( dref752 .stuff .CharDestructured_346_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq408 ( (  num_dash_chars755 ) , ( ( (  cast1124 ) ( ( (  op_dash_neg1068 ( (  from_dash_integral297 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1125 = ( (  from_dash_string68 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1125);
            exit ( 1 );
            ( Unit_8_Unit );
        }
        return ( * (  wcp754 ) );
    }
    else {
        if ( dref752.tag == CharDestructured_346_Scalar_t ) {
            if ( ( ! (  eq408 ( ( (  size_dash_of825 ) ( ( ( dref752 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1126 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1129 = ( (  from_dash_string68 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1129);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( (  cast1130 ) ( ( ( dref752 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1116 (    struct Char_65  c2602 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1117 ) ( (  c2602 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1114 (    struct Char_65  c3485 ) {
    return ( (  max1115 ) ( ( (  wcwidth1116 ) ( (  c3485 ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width1105 (    struct Char_65  c4036 ) {
    return ( (  maybe1106 ) ( ( (  char_dash_replacement1107 ) ( (  c4036 ) ) ) ,  (  lam1108 ) ,  ( (  rendered_dash_wcwidth1114 ) ( (  c4036 ) ) ) ) );
}

static  int32_t   pos_dash_vi1100 (    struct TextBuf_114 *  self4052 ,    struct Pos_26  pos4054 ) {
    int32_t  bi4055 = ( (  from_dash_integral67 ( 0 ) ) );
    int32_t  vi4056 = (  from_dash_integral67 ( 0 ) );
    struct StrViewIter_62  temp1101 =  into_dash_iter789 ( ( (  chars702 ) ( ( (  line1102 ) ( (  self4052 ) ,  ( (  pos4054 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_306  __cond1104 =  next690 (&temp1101);
        if (  __cond1104 .tag == 0 ) {
            break;
        }
        struct Char_65  c4058 =  __cond1104 .stuff .Maybe_306_Just_s .field0;
        bi4055 = (  op_dash_add168 ( (  bi4055 ) , ( (  size_dash_i32338 ) ( ( (  c4058 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp166 ( ( (  pos4054 ) .f_bi ) , (  bi4055 ) ) == 0 ) ) {
            break;
        }
        vi4056 = (  op_dash_add168 ( (  vi4056 ) , ( (  char_dash_screen_dash_width1105 ) ( (  c4058 ) ) ) ) );
    }
    return (  vi4056 );
}

struct Tuple2_1133 {
    enum Mode_230  field0;
    enum Mode_230  field1;
};

static struct Tuple2_1133 Tuple2_1133_Tuple2 (  enum Mode_230  field0 ,  enum Mode_230  field1 ) {
    return ( struct Tuple2_1133 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1132 (    enum Mode_230  l4012 ,    enum Mode_230  r4014 ) {
    return ( {  struct Tuple2_1133  dref4015 = ( ( Tuple2_1133_Tuple2 ) ( (  l4012 ) ,  (  r4014 ) ) ) ;  dref4015 .field0 == Mode_230_Normal &&  dref4015 .field1 == Mode_230_Normal ? ( true ) :  dref4015 .field0 == Mode_230_Insert &&  dref4015 .field1 == Mode_230_Insert ? ( true ) :  dref4015 .field0 == Mode_230_Select &&  dref4015 .field1 == Mode_230_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1131 (    struct Pane_229 *  self4142 ,    struct Maybe_34  sel4144 ) {
    if ( ( !  eq1132 ( ( ( * (  self4142 ) ) .f_mode ) , ( Mode_230_Select ) ) ) ) {
        (*  self4142 ) .f_sel = (  sel4144 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors1096 (    struct Pane_229 *  self4159 ,    struct Pos_26  cur4161 ,    struct Maybe_34  sel4163 ,    enum CursorMovement_1097  cursor_dash_movement_dash_type4165 ) {
    if ( ( !  eq1098 ( (  cursor_dash_movement_dash_type4165 ) , ( CursorMovement_1097_NoChanges ) ) ) ) {
        (*  self4159 ) .f_vi = ( (  pos_dash_vi1100 ) ( ( ( * (  self4159 ) ) .f_buf ) ,  (  cur4161 ) ) );
    }
    (*  self4159 ) .f_cursor = (  cur4161 );
    if ( ( !  eq1098 ( (  cursor_dash_movement_dash_type4165 ) , ( CursorMovement_1097_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1131 ) ( (  self4159 ) ,  (  sel4163 ) ) );
    } else {
        (*  self4159 ) .f_sel = (  sel4163 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1135 (    struct StrView_27  self2200 ) {
    return ( ( (  self2200 ) .f_contents ) .f_count );
}

static  size_t   clamp1136 (    size_t  x1353 ,    size_t  mn1355 ,    size_t  mx1357 ) {
    if ( (  cmp299 ( (  x1353 ) , (  mn1355 ) ) == 0 ) ) {
        return (  mn1355 );
    } else {
        if ( (  cmp299 ( (  x1353 ) , (  mx1357 ) ) == 2 ) ) {
            return (  mx1357 );
        } else {
            return (  x1353 );
        }
    }
}

static  size_t   sync_dash_char1138 (    uint8_t *  p693 ) {
    size_t  i694 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb695 = ( * ( (uint8_t * ) ( ( (void*) (  p693 ) ) + (  op_dash_neg1068 ( ( (  size_dash_i64311 ) ( (  i694 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp316 ( (  pb695 ) , (  from_dash_integral317 ( 128 ) ) ) != 0 ) && (  cmp316 ( (  pb695 ) , (  op_dash_add948 ( (  from_dash_integral317 ( 128 ) ) , (  from_dash_integral317 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i694 );
        }
        i694 = (  op_dash_add320 ( (  i694 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1137 (    uint8_t *  p698 ) {
    return (  op_dash_add320 ( ( (  sync_dash_char1138 ) ( ( (  offset_dash_ptr309 ) ( (  p698 ) ,  (  op_dash_neg1068 ( (  from_dash_integral297 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1134 (    struct TextBuf_114 *  self3735 ,    struct Pos_26  pos3737 ) {
    if ( (  eq526 ( (  pos3737 ) , ( (  mk673 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk673 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    }
    if ( (  eq527 ( ( (  pos3737 ) .f_bi ) , (  from_dash_integral67 ( 0 ) ) ) ) ) {
        ( (  assert646 ) ( (  cmp166 ( ( (  pos3737 ) .f_line ) , (  from_dash_integral67 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string208 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk673 ) ( (  op_dash_sub173 ( ( (  pos3737 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  ( (  size_dash_i32338 ) ( ( (  num_dash_bytes1135 ) ( ( (  line1102 ) ( (  self3735 ) ,  (  op_dash_sub173 ( ( (  pos3737 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line3738 = ( (  line1102 ) ( (  self3735 ) ,  ( (  pos3737 ) .f_line ) ) );
    size_t  pos_dash_bi3739 = ( (  clamp1136 ) ( ( (  i32_dash_size421 ) ( ( (  pos3737 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1135 ) ( (  line3738 ) ) ) ) );
    size_t  off3740 = ( (  previous_dash_char1137 ) ( ( (  offset_dash_ptr309 ) ( ( ( (  line3738 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  pos_dash_bi3739 ) ) ) ) ) ) );
    return ( (  mk673 ) ( ( (  pos3737 ) .f_line ) ,  ( (  size_dash_i32338 ) ( (  op_dash_sub298 ( (  pos_dash_bi3739 ) , (  off3740 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1095 (    struct Pane_229 *  self4171 ) {
    ( (  set_dash_cursors1096 ) ( (  self4171 ) ,  ( (  left_dash_pos1134 ) ( ( ( * (  self4171 ) ) .f_buf ) ,  ( ( * (  self4171 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_229 *   pane1139 (    struct Editor_257 *  ed4402 ) {
    return ( & ( ( * (  ed4402 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1142 (    struct TextBuf_114 *  self3719 ) {
    return ( (  size_dash_i32338 ) ( ( (  size528 ) ( ( & ( ( * (  self3719 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1141 (    struct TextBuf_114 *  self3727 ,    struct Pos_26  pos3729 ) {
    if ( (  cmp166 ( ( (  pos3729 ) .f_line ) , ( (  num_dash_lines1142 ) ( (  self3727 ) ) ) ) != 0 ) ) {
        return ( (  mk673 ) ( ( (  num_dash_lines1142 ) ( (  self3727 ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    }
    struct StrView_27  line3730 = ( (  line1102 ) ( (  self3727 ) ,  ( (  pos3729 ) .f_line ) ) );
    int64_t  bi3731 = ( (  i32_dash_i641022 ) ( ( (  pos3729 ) .f_bi ) ) );
    if ( (  cmp1067 ( (  bi3731 ) , ( (  size_dash_i64311 ) ( ( (  num_dash_bytes1135 ) ( (  line3730 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp166 ( (  op_dash_add168 ( ( (  pos3729 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) , ( (  num_dash_lines1142 ) ( (  self3727 ) ) ) ) != 0 ) ) {
            return ( (  mk673 ) ( ( (  pos3729 ) .f_line ) ,  ( (  size_dash_i32338 ) ( ( (  num_dash_bytes1135 ) ( (  line3730 ) ) ) ) ) ) );
        }
        return ( (  mk673 ) ( (  op_dash_add168 ( ( (  pos3729 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    }
    int32_t  off3732 = ( (  size_dash_i32338 ) ( ( (  next_dash_char315 ) ( ( (  offset_dash_ptr309 ) ( ( ( (  line3730 ) .f_contents ) .f_ptr ) ,  (  bi3731 ) ) ) ) ) ) );
    return ( (  mk673 ) ( ( (  pos3729 ) .f_line ) ,  (  op_dash_add168 ( ( (  pos3729 ) .f_bi ) , (  off3732 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1140 (    struct Pane_229 *  self4168 ) {
    ( (  set_dash_cursors1096 ) ( (  self4168 ) ,  ( (  right_dash_pos1141 ) ( ( ( * (  self4168 ) ) .f_buf ) ,  ( ( * (  self4168 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1144 (    struct TextBuf_114 *  self4041 ,    int32_t  ln4043 ,    int32_t  vx4045 ) {
    int32_t  bi4046 = ( (  from_dash_integral67 ( 0 ) ) );
    int32_t  vi4047 = (  from_dash_integral67 ( 0 ) );
    struct StrViewIter_62  temp1145 =  into_dash_iter789 ( ( (  chars702 ) ( ( (  line1102 ) ( (  self4041 ) ,  (  ln4043 ) ) ) ) ) );
    while (true) {
        struct Maybe_306  __cond1146 =  next690 (&temp1145);
        if (  __cond1146 .tag == 0 ) {
            break;
        }
        struct Char_65  c4049 =  __cond1146 .stuff .Maybe_306_Just_s .field0;
        vi4047 = (  op_dash_add168 ( (  vi4047 ) , ( (  char_dash_screen_dash_width1105 ) ( (  c4049 ) ) ) ) );
        if ( (  cmp166 ( (  vx4045 ) , (  vi4047 ) ) == 0 ) ) {
            break;
        }
        bi4046 = (  op_dash_add168 ( (  bi4046 ) , ( (  size_dash_i32338 ) ( ( (  c4049 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4046 );
}

static  enum Unit_8   move_dash_down1143 (    struct Pane_229 *  self4174 ,    int32_t  amnt4176 ) {
    struct Pos_26  cur4177 = ( ( * (  self4174 ) ) .f_cursor );
    int32_t  nu_dash_line4178 = ( (  min637 ) ( (  op_dash_add168 ( ( (  cur4177 ) .f_line ) , (  amnt4176 ) ) ) ,  (  op_dash_sub173 ( ( (  num_dash_lines1142 ) ( ( ( * (  self4174 ) ) .f_buf ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    int32_t  vci4179 = ( ( * (  self4174 ) ) .f_vi );
    int32_t  bi4180 = ( (  vi_dash_bi1144 ) ( ( ( * (  self4174 ) ) .f_buf ) ,  (  nu_dash_line4178 ) ,  (  vci4179 ) ) );
    ( (  set_dash_cursors1096 ) ( (  self4174 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4178 ) , .f_bi = (  bi4180 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1147 (    struct Pane_229 *  self4183 ,    int32_t  amnt4185 ) {
    struct Pos_26  cur4186 = ( ( * (  self4183 ) ) .f_cursor );
    int32_t  nu_dash_line4187 = ( (  max1115 ) ( (  op_dash_sub173 ( ( (  cur4186 ) .f_line ) , (  amnt4185 ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    int32_t  vci4188 = ( ( * (  self4183 ) ) .f_vi );
    int32_t  bi4189 = ( (  vi_dash_bi1144 ) ( ( ( * (  self4183 ) ) .f_buf ) ,  (  nu_dash_line4187 ) ,  (  vci4188 ) ) );
    ( (  set_dash_cursors1096 ) ( (  self4183 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4187 ) , .f_bi = (  bi4189 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1149 (    struct TextBuf_114 *  self3828 ) {
    (*  self3828 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_116_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1148 (    struct Pane_229 *  self4147 ,    enum Mode_230  mode4149 ) {
    if ( (  eq1132 ( (  mode4149 ) , ( Mode_230_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1149 ) ( ( ( * (  self4147 ) ) .f_buf ) ) );
    }
    (*  self4147 ) .f_mode = (  mode4149 );
    return ( Unit_8_Unit );
}

struct TakeWhile_1154 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1153 {
    struct TakeWhile_1154  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1153 Map_1153_Map (  struct TakeWhile_1154  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1153 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1153   into_dash_iter1156 (    struct Map_1153  self797 ) {
    return (  self797 );
}

static  struct Maybe_306   next1158 (    struct TakeWhile_1154 *  self965 ) {
    struct Maybe_306  mx966 = ( (  next690 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_306  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_306_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_306_Just ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
            }
        }
    }
}

static  struct Maybe_255   next1157 (    struct Map_1153 *  dref799 ) {
    struct Maybe_306  dref802 = ( (  next1158 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_306_Just_t ) {
            return ( ( Maybe_255_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_306_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1155 (    struct Map_1153  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1153  it1100 = ( (  into_dash_iter1156 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next1157 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1159 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1159);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1160;
    return (  temp1160 );
}

static  size_t   lam1161 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add320 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1152 (    struct Map_1153  it1111 ) {
    return ( (  reduce1155 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1161 ) ) );
}

static  struct TakeWhile_1154   into_dash_iter1163 (    struct TakeWhile_1154  self962 ) {
    return (  self962 );
}

static  struct Map_1153   map1162 (    struct TakeWhile_1154  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1154  it809 = ( (  into_dash_iter1163 ) ( (  iterable806 ) ) );
    return ( ( Map_1153_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1154   take_dash_while1164 (    struct StrView_27  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1154) { .f_it = ( (  into_dash_iter703 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  bool   lam1165 (    struct Char_65  c4237 ) {
    return (  eq584 ( (  c4237 ) , ( (  from_dash_charlike355 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1166 (    struct Char_65  c4239 ) {
    return ( (  c4239 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1151 (    struct Pane_229 *  pane4233 ,    int32_t  line4235 ) {
    return ( (  size_dash_i32338 ) ( ( (  sum1152 ) ( ( (  map1162 ) ( ( (  take_dash_while1164 ) ( ( (  line1102 ) ( ( ( * (  pane4233 ) ) .f_buf ) ,  (  line4235 ) ) ) ,  (  lam1165 ) ) ) ,  (  lam1166 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1150 (    struct Pane_229 *  self4252 ) {
    struct Pos_26  cur4253 = ( ( * (  self4252 ) ) .f_cursor );
    int32_t  indent4254 = ( (  indent_dash_at_dash_line1151 ) ( (  self4252 ) ,  ( (  cur4253 ) .f_line ) ) );
    struct Pos_26  temp1167 = (  cur4253 );
    temp1167 .  f_bi = (  indent4254 );
    ( (  set_dash_cursors1096 ) ( (  self4252 ) ,  ( temp1167 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1168 (    struct Pane_229 *  self4257 ) {
    struct Pos_26  cur4258 = ( ( * (  self4257 ) ) .f_cursor );
    struct Pos_26  temp1169 = (  cur4258 );
    temp1169 .  f_bi = ( (  size_dash_i32338 ) ( ( (  num_dash_bytes1135 ) ( ( (  line1102 ) ( ( ( * (  self4257 ) ) .f_buf ) ,  ( (  cur4258 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors1096 ) ( (  self4257 ) ,  ( temp1169 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct SliceIter_1177 {
    struct Slice_31  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1176 {
    struct SliceIter_1177  field0;
    size_t  field1;
};

static struct Drop_1176 Drop_1176_Drop (  struct SliceIter_1177  field0 ,  size_t  field1 ) {
    return ( struct Drop_1176 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1176   into_dash_iter1178 (    struct Drop_1176  self846 ) {
    return (  self846 );
}

static  struct SliceIter_1177   into_dash_iter1181 (    struct Slice_31  self1824 ) {
    return ( (struct SliceIter_1177) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1183 (    struct Changeset_32 *  x338 ,    int64_t  count340 ) {
    struct Changeset_32  temp1184;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1184 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1182 (    struct Slice_31  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Changeset_32 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1183 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp299 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp299 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub298 ( ( (  min508 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_1177   into_dash_iter1180 (    struct List_30  self2030 ) {
    return ( (  into_dash_iter1181 ) ( ( (  subslice1182 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Drop_1176   drop1179 (    struct List_30  iterable853 ,    size_t  i855 ) {
    struct SliceIter_1177  it856 = ( (  into_dash_iter1180 ) ( (  iterable853 ) ) );
    return ( ( Drop_1176_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

struct Maybe_1186 {
    enum {
        Maybe_1186_None_t,
        Maybe_1186_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_32  field0;
        } Maybe_1186_Just_s;
    } stuff;
};

static struct Maybe_1186 Maybe_1186_Just (  struct Changeset_32  field0 ) {
    return ( struct Maybe_1186 ) { .tag = Maybe_1186_Just_t, .stuff = { .Maybe_1186_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1186   next1188 (    struct SliceIter_1177 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1186) { .tag = Maybe_1186_None_t } );
    }
    struct Changeset_32  elem1832 = ( * ( (  offset_dash_ptr1183 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1186_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_1186   next1187 (    struct Drop_1176 *  dref848 ) {
    while ( (  cmp299 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1188 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub298 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1188 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

struct env1191 {
    enum CAllocator_10  al3682;
    ;
};

struct envunion1192 {
    enum Unit_8  (*fun) (  struct env1191*  ,    struct Action_25  );
    struct env1191 env;
};

struct SliceIter_1193 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1193   into_dash_iter1196 (    struct Slice_24  self1824 ) {
    return ( (struct SliceIter_1193) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1198 (    struct Action_25 *  x338 ,    int64_t  count340 ) {
    struct Action_25  temp1199;
    return ( (struct Action_25 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1199 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1197 (    struct Slice_24  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Action_25 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1198 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp299 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp299 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub298 ( ( (  min508 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_1193   into_dash_iter1195 (    struct List_23  self2030 ) {
    return ( (  into_dash_iter1196 ) ( ( (  subslice1197 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

struct Maybe_1200 {
    enum {
        Maybe_1200_None_t,
        Maybe_1200_Just_t,
    } tag;
    union {
        struct {
            struct Action_25  field0;
        } Maybe_1200_Just_s;
    } stuff;
};

static struct Maybe_1200 Maybe_1200_Just (  struct Action_25  field0 ) {
    return ( struct Maybe_1200 ) { .tag = Maybe_1200_Just_t, .stuff = { .Maybe_1200_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1200   next1201 (    struct SliceIter_1193 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1200) { .tag = Maybe_1200_None_t } );
    }
    struct Action_25  elem1832 = ( * ( (  offset_dash_ptr1198 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1200_Just ) ( (  elem1832 ) ) );
}

static  enum Unit_8   for_dash_each1190 (    struct List_23  iterable1075 ,   struct envunion1192  fun1077 ) {
    struct SliceIter_1193  temp1194 = ( (  into_dash_iter1195 ) ( (  iterable1075 ) ) );
    struct SliceIter_1193 *  it1078 = ( &temp1194 );
    while ( ( true ) ) {
        struct Maybe_1200  dref1079 = ( (  next1201 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1200_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1200_Just_t ) {
                struct envunion1192  temp1202 = (  fun1077 );
                ( temp1202.fun ( &temp1202.env ,  ( dref1079 .stuff .Maybe_1200_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1204 (    struct Action_25  action3675 ,    enum CAllocator_10  al3677 ) {
    ( (  free511 ) ( ( (  action3675 ) .f_fwd ) ,  (  al3677 ) ) );
    ( (  free511 ) ( ( (  action3675 ) .f_bwd ) ,  (  al3677 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1203 (   struct env1191* env ,    struct Action_25  a3684 ) {
    return ( (  free_dash_action1204 ) ( (  a3684 ) ,  ( env->al3682 ) ) );
}

static  void *   cast_dash_ptr1207 (    struct Action_25 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1206 (    enum CAllocator_10  dref1961 ,    struct Slice_24  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1207 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1205 (    struct List_23 *  list2037 ) {
    ( (  free1206 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1189 (    struct Changeset_32  chs3680 ,    enum CAllocator_10  al3682 ) {
    struct env1191 envinst1191 = {
        .al3682 =  al3682 ,
    };
    ( (  for_dash_each1190 ) ( ( (  chs3680 ) .f_parts ) ,  ( (struct envunion1192){ .fun = (  enum Unit_8  (*) (  struct env1191*  ,    struct Action_25  ) )lam1203 , .env =  envinst1191 } ) ) );
    ( (  free1205 ) ( ( & ( (  chs3680 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1208 (    struct List_30 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min508 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1174 (    struct Actions_115 *  actions3698 ) {
    enum CAllocator_10  al3699 = ( ( ( * (  actions3698 ) ) .f_list ) .f_al );
    size_t  cur3700 = ( ( * (  actions3698 ) ) .f_cur );
    struct Drop_1176  temp1175 =  into_dash_iter1178 ( ( (  drop1179 ) ( ( ( * (  actions3698 ) ) .f_list ) ,  (  cur3700 ) ) ) );
    while (true) {
        struct Maybe_1186  __cond1185 =  next1187 (&temp1175);
        if (  __cond1185 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action3702 =  __cond1185 .stuff .Maybe_1186_Just_s .field0;
        ( (  free_dash_changeset1189 ) ( (  action3702 ) ,  (  al3699 ) ) );
    }
    ( (  trim1208 ) ( ( & ( ( * (  actions3698 ) ) .f_list ) ) ,  (  cur3700 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1209 (    struct StrView_27  s2167 ,    enum CAllocator_10  al2169 ) {
    return ( (  clone_dash_0463 ) ( (  s2167 ) ,  (  al2169 ) ) );
}

static  struct Maybe_94   head1211 (    struct SplitIter_573  it1143 ) {
    struct SplitIter_573  temp1212 = ( (  into_dash_iter580 ) ( (  it1143 ) ) );
    return ( (  next594 ) ( ( &temp1212 ) ) );
}

static  struct Maybe_94   head1214 (    struct Drop_572  it1143 ) {
    struct Drop_572  temp1215 = ( (  into_dash_iter578 ) ( (  it1143 ) ) );
    return ( (  next593 ) ( ( &temp1215 ) ) );
}

static  bool   null1213 (    struct Drop_572  it1152 ) {
    struct Maybe_94  dref1153 = ( (  head1214 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_94_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1217 (    struct StrView_27  errmsg1714 ) {
    ( (  print_dash_str647 ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_649_StrConcat ) ( ( (  from_dash_string208 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_591   undefined1218 (  ) {
    struct Tuple2_591  temp1219;
    return (  temp1219 );
}

static  struct Tuple2_591   or_dash_fail1216 (    struct Maybe_590  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_590  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_590_None_t ) {
        ( (  panic1217 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1218 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_590_Just_t ) {
            return ( dref1730 .stuff .Maybe_590_Just_s .field0 );
        }
    }
}

static  struct Maybe_590   reduce1221 (    struct Zip_571  iterable1094 ,    struct Maybe_590  base1096 ,    struct Maybe_590 (*  fun1098 )(    struct Tuple2_591  ,    struct Maybe_590  ) ) {
    struct Maybe_590  x1099 = (  base1096 );
    struct Zip_571  it1100 = ( (  into_dash_iter576 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_590  dref1101 = ( (  next592 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_590_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_590_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_590_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1222 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1222);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_590  temp1223;
    return (  temp1223 );
}

static  struct Maybe_590   lam1224 (    struct Tuple2_591  e1148 ,    struct Maybe_590  dref1149 ) {
    return ( ( Maybe_590_Just ) ( (  e1148 ) ) );
}

static  struct Maybe_590   last1220 (    struct Zip_571  it1146 ) {
    return ( (  reduce1221 ) ( (  it1146 ) ,  ( (struct Maybe_590) { .tag = Maybe_590_None_t } ) ,  (  lam1224 ) ) );
}

static  int32_t   snd1225 (    struct Tuple2_591  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct StrView_27   fst1226 (    struct Tuple2_591  dref1254 ) {
    return ( dref1254 .field0 );
}

static  struct Pos_26   pos_dash_after_dash_str1210 (    struct TextBuf_114 *  self3816 ,    struct StrView_27  bytes3818 ,    struct Pos_26  from3820 ) {
    struct SplitIter_573  lines3821 = ( (  split_dash_by_dash_each581 ) ( (  bytes3818 ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line3822 = ( (  or_dash_else559 ) ( ( (  head1211 ) ( (  lines3821 ) ) ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_572  headless3823 = ( (  drop579 ) ( (  lines3821 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1213 ) ( (  headless3823 ) ) ) ) {
        struct Pos_26  next_dash_pos3824 = ( (  mk673 ) ( ( (  from3820 ) .f_line ) ,  (  op_dash_add168 ( ( (  from3820 ) .f_bi ) , ( (  size_dash_i32338 ) ( ( (  num_dash_bytes1135 ) ( (  first_dash_line3822 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3824 );
    } else {
        struct Tuple2_591  last_dash_line3825 = ( (  or_dash_fail1216 ) ( ( (  last1220 ) ( ( (  zip577 ) ( (  headless3823 ) ,  ( (  from436 ) ( (  op_dash_add168 ( ( (  from3820 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk673 ) ( ( (  snd1225 ) ( (  last_dash_line3825 ) ) ) ,  ( (  size_dash_i32338 ) ( ( (  num_dash_bytes1135 ) ( ( (  fst1226 ) ( (  last_dash_line3825 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1232 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   from_dash_charlike1233 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1237 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1239 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

struct envunion1241 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   str_dash_between1228 (   struct env134* env ,    struct TextBuf_114 *  self3848 ,    struct Pos_26  from3850 ,    struct Pos_26  to3852 ) {
    enum CAllocator_10  al3853 = ( ( ( * (  self3848 ) ) .f_buf ) .f_al );
    if ( (  eq527 ( ( (  from3850 ) .f_line ) , ( (  to3852 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3854 = ( (  i32_dash_size421 ) ( ( (  min637 ) ( ( (  from3850 ) .f_bi ) ,  ( (  to3852 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3855 = ( (  i32_dash_size421 ) ( ( (  max1115 ) ( ( (  from3850 ) .f_bi ) ,  ( (  to3852 ) .f_bi ) ) ) ) );
        return ( (  clone1209 ) ( ( (  byte_dash_substr520 ) ( ( (  line1102 ) ( (  self3848 ) ,  ( (  from3850 ) .f_line ) ) ) ,  (  from_dash_bi3854 ) ,  (  to_dash_bi3855 ) ) ) ,  (  al3853 ) ) );
    } else {
        struct Pos_26  from_dash_pos3856 = ( (  min523 ) ( (  from3850 ) ,  (  to3852 ) ) );
        struct Pos_26  to_dash_pos3857 = ( (  max525 ) ( (  from3850 ) ,  (  to3852 ) ) );
        struct List_9  temp1229 = ( (  mk448 ) ( (  al3853 ) ) );
        struct List_9 *  sb3858 = ( &temp1229 );
        struct StrView_27  first_dash_line3859 = ( (  line1102 ) ( (  self3848 ) ,  ( (  from_dash_pos3856 ) .f_line ) ) );
        struct envunion135  temp1230 = ( (struct envunion135){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all541 , .env =  env->envinst46 } );
        ( temp1230.fun ( &temp1230.env ,  (  sb3858 ) ,  ( ( (  byte_dash_substr520 ) ( (  first_dash_line3859 ) ,  ( (  i32_dash_size421 ) ( ( (  from_dash_pos3856 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1135 ) ( (  first_dash_line3859 ) ) ) ) ) .f_contents ) ) );
        struct envunion1232  temp1231 = ( (struct envunion1232){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all541 , .env =  env->envinst46 } );
        ( temp1231.fun ( &temp1231.env ,  (  sb3858 ) ,  ( ( ( (  from_dash_charlike1233 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_162  temp1234 =  into_dash_iter163 ( ( (  to172 ) ( (  op_dash_add168 ( ( (  from_dash_pos3856 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  op_dash_sub173 ( ( (  to_dash_pos3857 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_164  __cond1235 =  next165 (&temp1234);
            if (  __cond1235 .tag == 0 ) {
                break;
            }
            int32_t  i3861 =  __cond1235 .stuff .Maybe_164_Just_s .field0;
            struct envunion1237  temp1236 = ( (struct envunion1237){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all541 , .env =  env->envinst46 } );
            ( temp1236.fun ( &temp1236.env ,  (  sb3858 ) ,  ( ( (  line1102 ) ( (  self3848 ) ,  (  i3861 ) ) ) .f_contents ) ) );
            struct envunion1239  temp1238 = ( (struct envunion1239){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all541 , .env =  env->envinst46 } );
            ( temp1238.fun ( &temp1238.env ,  (  sb3858 ) ,  ( ( ( (  from_dash_charlike1233 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1241  temp1240 = ( (struct envunion1241){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all541 , .env =  env->envinst46 } );
        ( temp1240.fun ( &temp1240.env ,  (  sb3858 ) ,  ( ( (  byte_dash_substr520 ) ( ( (  line1102 ) ( (  self3848 ) ,  ( (  to_dash_pos3857 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size421 ) ( ( (  to_dash_pos3857 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes1103 ) ( ( (  to_dash_slice535 ) ( ( * (  sb3858 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1242 (    struct Maybe_215  m1265 ) {
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

struct Tuple2_1244 {
    enum ChangesetInputType_116  field0;
    enum ChangesetInputType_116  field1;
};

static struct Tuple2_1244 Tuple2_1244_Tuple2 (  enum ChangesetInputType_116  field0 ,  enum ChangesetInputType_116  field1 ) {
    return ( struct Tuple2_1244 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1243 (    enum ChangesetInputType_116  l3688 ,    enum ChangesetInputType_116  r3690 ) {
    return ( {  struct Tuple2_1244  dref3691 = ( ( Tuple2_1244_Tuple2 ) ( (  l3688 ) ,  (  r3690 ) ) ) ;  dref3691 .field0 == ChangesetInputType_116_NoChangeset &&  dref3691 .field1 == ChangesetInputType_116_NoChangeset ? ( true ) :  dref3691 .field0 == ChangesetInputType_116_InputChangeset &&  dref3691 .field1 == ChangesetInputType_116_InputChangeset ? ( true ) :  dref3691 .field0 == ChangesetInputType_116_CustomChangeset &&  dref3691 .field1 == ChangesetInputType_116_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1246 (    struct Slice_31  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp299 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1183 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  struct Changeset_32 *   last_dash_ptr1245 (    struct Slice_31  s1940 ) {
    if ( (  eq408 ( ( (  s1940 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1217 ) ( ( (  from_dash_string208 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1246 ) ( (  s1940 ) ,  (  op_dash_sub298 ( ( (  s1940 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1247 (    struct List_30  l2128 ) {
    struct Changeset_32 *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

struct TypeSize_1254 {
    size_t  f_size;
};

static  struct TypeSize_1254   get_dash_typesize1253 (  ) {
    struct Action_25  temp1255;
    return ( (struct TypeSize_1254) { .f_size = ( sizeof( ( (  temp1255 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1256 (    void *  p359 ) {
    return ( (struct Action_25 * ) (  p359 ) );
}

static  struct Slice_24   allocate1252 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1253 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr1959 = ( (  cast_dash_ptr1256 ) ( ( ( malloc ) ( (  op_dash_mul414 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1257 {
    ;
    ;
    struct Slice_24  new_dash_slice2044;
};

struct Tuple2_1259 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1259 Tuple2_1259_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1259 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1258 {
    enum Unit_8  (*fun) (  struct env1257*  ,    struct Tuple2_1259  );
    struct env1257 env;
};

static  struct Action_25 *   get_dash_ptr1262 (    struct Slice_24  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp299 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1198 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set1261 (    struct Slice_24  slice1776 ,    size_t  i1778 ,    struct Action_25  x1780 ) {
    struct Action_25 *  ep1781 = ( (  get_dash_ptr1262 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1260 (   struct env1257* env ,    struct Tuple2_1259  dref2045 ) {
    return ( (  set1261 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size421 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct Zip_1264 {
    struct SliceIter_1193  f_left_dash_it;
    struct FromIter_425  f_right_dash_it;
};

static  struct Zip_1264   into_dash_iter1266 (    struct Zip_1264  self912 ) {
    return (  self912 );
}

struct Maybe_1267 {
    enum {
        Maybe_1267_None_t,
        Maybe_1267_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1259  field0;
        } Maybe_1267_Just_s;
    } stuff;
};

static struct Maybe_1267 Maybe_1267_Just (  struct Tuple2_1259  field0 ) {
    return ( struct Maybe_1267 ) { .tag = Maybe_1267_Just_t, .stuff = { .Maybe_1267_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1267   next1268 (    struct Zip_1264 *  self915 ) {
    struct Zip_1264  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_1200  dref917 = ( (  next1201 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_1200_None_t ) {
            return ( (struct Maybe_1267) { .tag = Maybe_1267_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_1200_Just_t ) {
                struct Maybe_164  dref919 = ( (  next431 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_1267) { .tag = Maybe_1267_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next1201 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next431 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1267_Just ) ( ( ( Tuple2_1259_Tuple2 ) ( ( dref917 .stuff .Maybe_1200_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1263 (    struct Zip_1264  iterable1075 ,   struct envunion1258  fun1077 ) {
    struct Zip_1264  temp1265 = ( (  into_dash_iter1266 ) ( (  iterable1075 ) ) );
    struct Zip_1264 *  it1078 = ( &temp1265 );
    while ( ( true ) ) {
        struct Maybe_1267  dref1079 = ( (  next1268 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1267_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1267_Just_t ) {
                struct envunion1258  temp1269 = (  fun1077 );
                ( temp1269.fun ( &temp1269.env ,  ( dref1079 .stuff .Maybe_1267_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1264   zip1270 (    struct Slice_24  left923 ,    struct FromIter_425  right925 ) {
    struct SliceIter_1193  left_dash_it926 = ( (  into_dash_iter1196 ) ( (  left923 ) ) );
    struct FromIter_425  right_dash_it927 = ( (  into_dash_iter435 ) ( (  right925 ) ) );
    return ( (struct Zip_1264) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1251 (   struct env3* env ,    struct List_23 *  list2043 ) {
    if ( (  eq408 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1252 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq408 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2044 = ( (  allocate1252 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul414 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1257 envinst1257 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1258  fun2048 = ( (struct envunion1258){ .fun = (  enum Unit_8  (*) (  struct env1257*  ,    struct Tuple2_1259  ) )lam1260 , .env =  envinst1257 } );
            ( (  for_dash_each1263 ) ( ( (  zip1270 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free1206 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1249 (   struct env21* env ,    struct List_23 *  list2051 ,    struct Action_25  elem2053 ) {
    struct envunion22  temp1250 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1251 , .env =  env->envinst3 } );
    ( temp1250.fun ( &temp1250.env ,  (  list2051 ) ) );
    ( (  set1261 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add320 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1277 (    struct Action_25 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1278 (    struct Action_25 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_25 *   zeroed1275 (  ) {
    struct Action_25 *  temp1276;
    struct Action_25 *  x571 = (  temp1276 );
    ( ( memset ) ( ( (  cast_dash_ptr1277 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of1278 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Action_25 *   null_dash_ptr1274 (  ) {
    return ( (  zeroed1275 ) ( ) );
}

static  struct Slice_24   empty1273 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1274 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1272 (    enum CAllocator_10  al2033 ) {
    struct Slice_24  elements2034 = ( (  empty1273 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1279 (    struct Maybe_215  self1734 ,    struct Cursors_33  alt1736 ) {
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

struct envunion1281 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1288 {
    size_t  f_size;
};

static  struct TypeSize_1288   get_dash_typesize1287 (  ) {
    struct Changeset_32  temp1289;
    return ( (struct TypeSize_1288) { .f_size = ( sizeof( ( (  temp1289 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1290 (    void *  p359 ) {
    return ( (struct Changeset_32 * ) (  p359 ) );
}

static  struct Slice_31   allocate1286 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1287 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr1959 = ( (  cast_dash_ptr1290 ) ( ( ( malloc ) ( (  op_dash_mul414 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1291 {
    ;
    ;
    struct Slice_31  new_dash_slice2044;
};

struct Tuple2_1293 {
    struct Changeset_32  field0;
    int32_t  field1;
};

static struct Tuple2_1293 Tuple2_1293_Tuple2 (  struct Changeset_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1293 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1292 {
    enum Unit_8  (*fun) (  struct env1291*  ,    struct Tuple2_1293  );
    struct env1291 env;
};

static  enum Unit_8   set1295 (    struct Slice_31  slice1776 ,    size_t  i1778 ,    struct Changeset_32  x1780 ) {
    struct Changeset_32 *  ep1781 = ( (  get_dash_ptr1246 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1294 (   struct env1291* env ,    struct Tuple2_1293  dref2045 ) {
    return ( (  set1295 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size421 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct Zip_1297 {
    struct SliceIter_1177  f_left_dash_it;
    struct FromIter_425  f_right_dash_it;
};

static  struct Zip_1297   into_dash_iter1299 (    struct Zip_1297  self912 ) {
    return (  self912 );
}

struct Maybe_1300 {
    enum {
        Maybe_1300_None_t,
        Maybe_1300_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1293  field0;
        } Maybe_1300_Just_s;
    } stuff;
};

static struct Maybe_1300 Maybe_1300_Just (  struct Tuple2_1293  field0 ) {
    return ( struct Maybe_1300 ) { .tag = Maybe_1300_Just_t, .stuff = { .Maybe_1300_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1300   next1301 (    struct Zip_1297 *  self915 ) {
    struct Zip_1297  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_1186  dref917 = ( (  next1188 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_1186_None_t ) {
            return ( (struct Maybe_1300) { .tag = Maybe_1300_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_1186_Just_t ) {
                struct Maybe_164  dref919 = ( (  next431 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_1300) { .tag = Maybe_1300_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next1188 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next431 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1300_Just ) ( ( ( Tuple2_1293_Tuple2 ) ( ( dref917 .stuff .Maybe_1186_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1296 (    struct Zip_1297  iterable1075 ,   struct envunion1292  fun1077 ) {
    struct Zip_1297  temp1298 = ( (  into_dash_iter1299 ) ( (  iterable1075 ) ) );
    struct Zip_1297 *  it1078 = ( &temp1298 );
    while ( ( true ) ) {
        struct Maybe_1300  dref1079 = ( (  next1301 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1300_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1300_Just_t ) {
                struct envunion1292  temp1302 = (  fun1077 );
                ( temp1302.fun ( &temp1302.env ,  ( dref1079 .stuff .Maybe_1300_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1297   zip1303 (    struct Slice_31  left923 ,    struct FromIter_425  right925 ) {
    struct SliceIter_1177  left_dash_it926 = ( (  into_dash_iter1181 ) ( (  left923 ) ) );
    struct FromIter_425  right_dash_it927 = ( (  into_dash_iter435 ) ( (  right925 ) ) );
    return ( (struct Zip_1297) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  void *   cast_dash_ptr1305 (    struct Changeset_32 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1304 (    enum CAllocator_10  dref1961 ,    struct Slice_31  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1305 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1285 (   struct env4* env ,    struct List_30 *  list2043 ) {
    if ( (  eq408 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1286 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq408 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2044 = ( (  allocate1286 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul414 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1291 envinst1291 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1292  fun2048 = ( (struct envunion1292){ .fun = (  enum Unit_8  (*) (  struct env1291*  ,    struct Tuple2_1293  ) )lam1294 , .env =  envinst1291 } );
            ( (  for_dash_each1296 ) ( ( (  zip1303 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free1304 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1283 (   struct env28* env ,    struct List_30 *  list2051 ,    struct Changeset_32  elem2053 ) {
    struct envunion29  temp1284 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1285 , .env =  env->envinst4 } );
    ( temp1284.fun ( &temp1284.env ,  (  list2051 ) ) );
    ( (  set1295 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add320 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1307 (   struct env128* env ,    struct TextBuf_114 *  self3811 ,    struct Action_25  action3813 ) {
    struct envunion129  temp1308 = ( (struct envunion129){ .fun = (  enum Unit_8  (*) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action522 , .env =  env->envinst110 } );
    ( temp1308.fun ( &temp1308.env ,  (  self3811 ) ,  ( (  action3813 ) .f_from ) ,  ( (  action3813 ) .f_to_dash_bwd ) ,  ( (  action3813 ) .f_fwd ) ) );
    return ( (  action3813 ) .f_to_dash_fwd );
}

static  struct Maybe_215   change1173 (   struct env136* env ,    struct TextBuf_114 *  self3878 ,    struct Pos_26  from3880 ,    struct Pos_26  to3882 ,    struct StrView_27  bytes3884 ,    struct Maybe_215  before_dash_cursors3886 ) {
    struct Pos_26  from_dash_pos3887 = ( (  min523 ) ( (  from3880 ) ,  (  to3882 ) ) );
    struct Pos_26  to_dash_pos3888 = ( (  max525 ) ( (  from3880 ) ,  (  to3882 ) ) );
    struct Actions_115 *  actions3889 = ( & ( ( * (  self3878 ) ) .f_actions ) );
    ( (  trim_dash_actions1174 ) ( (  actions3889 ) ) );
    struct envunion139  temp1227 = ( (struct envunion139){ .fun = (  struct StrView_27  (*) (  struct env134*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1228 , .env =  env->envinst134 } );
    struct Action_25  action3890 = ( (struct Action_25) { .f_from = (  from3880 ) , .f_fwd = ( (  clone1209 ) ( (  bytes3884 ) ,  ( ( * (  self3878 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1210 ) ( (  self3878 ) ,  (  bytes3884 ) ,  (  from_dash_pos3887 ) ) ) , .f_bwd = ( temp1227.fun ( &temp1227.env ,  (  self3878 ) ,  (  from_dash_pos3887 ) ,  (  to_dash_pos3888 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3888 ) } );
    enum CAllocator_10  al3891 = ( ( ( * (  actions3889 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3892 = ( (  is_dash_none1242 ) ( (  before_dash_cursors3886 ) ) );
    if ( ( (  eq1243 ( ( ( ( * (  self3878 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_116_CustomChangeset ) ) ) || ( (  eq1243 ( ( ( ( * (  self3878 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_116_InputChangeset ) ) ) && (  is_dash_typed_dash_in3892 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset3893 = ( (  last_dash_ptr1245 ) ( ( (  to_dash_slice1247 ) ( ( ( * (  actions3889 ) ) .f_list ) ) ) ) );
        struct envunion137  temp1248 = ( (struct envunion137){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1249 , .env =  env->envinst21 } );
        ( temp1248.fun ( &temp1248.env ,  ( & ( ( * (  last_dash_changeset3893 ) ) .f_parts ) ) ,  (  action3890 ) ) );
    } else {
        struct Changeset_32  temp1271 = ( (struct Changeset_32) { .f_parts = ( (  mk1272 ) ( (  al3891 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1279 ) ( (  before_dash_cursors3886 ) ,  ( (struct Cursors_33) { .f_cur = (  from3880 ) , .f_sel = ( (  eq526 ( (  from3880 ) , (  to3882 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to3882 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset3894 = ( &temp1271 );
        struct envunion1281  temp1280 = ( (struct envunion1281){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1249 , .env =  env->envinst21 } );
        ( temp1280.fun ( &temp1280.env ,  ( & ( ( * (  changeset3894 ) ) .f_parts ) ) ,  (  action3890 ) ) );
        struct envunion138  temp1282 = ( (struct envunion138){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1283 , .env =  env->envinst28 } );
        ( temp1282.fun ( &temp1282.env ,  ( & ( ( * (  actions3889 ) ) .f_list ) ) ,  ( * (  changeset3894 ) ) ) );
        (*  actions3889 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3892 ) ? ( ChangesetInputType_116_InputChangeset ) : ( ChangesetInputType_116_NoChangeset ) );
        (*  actions3889 ) .f_cur = (  op_dash_add320 ( ( ( * (  actions3889 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion140  temp1306 = ( (struct envunion140){ .fun = (  struct Pos_26  (*) (  struct env128*  ,    struct TextBuf_114 *  ,    struct Action_25  ) )action_dash_fwd1307 , .env =  env->envinst128 } );
    struct Pos_26  to_dash_fwd3895 = ( temp1306.fun ( &temp1306.env ,  (  self3878 ) ,  (  action3890 ) ) );
    if ( (  cmp299 ( ( (  num_dash_bytes1135 ) ( ( (  action3890 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3896 = ( (  left_dash_pos1134 ) ( (  self3878 ) ,  (  to_dash_fwd3895 ) ) );
        return ( ( Maybe_215_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3896 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action3890 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_215_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3895 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1171 (   struct env213* env ,    struct Pane_229 *  self4270 ,    struct StrView_27  s4272 ) {
    struct Pos_26  cur4273 = ( ( * (  self4270 ) ) .f_cursor );
    struct envunion214  temp1172 = ( (struct envunion214){ .fun = (  struct Maybe_215  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  ) )change1173 , .env =  env->envinst136 } );
    ( temp1172.fun ( &temp1172.env ,  ( ( * (  self4270 ) ) .f_buf ) ,  (  cur4273 ) ,  (  cur4273 ) ,  (  s4272 ) ,  ( (struct Maybe_215) { .tag = Maybe_215_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1314 (   struct env224* env ,    struct Pane_229 *  self4308 ,    int32_t  line4310 ) {
    struct envunion225  temp1315 = ( (struct envunion225){ .fun = (  struct Maybe_215  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  ) )change1173 , .env =  env->envinst136 } );
    ( temp1315.fun ( &temp1315.env ,  ( ( * (  self4308 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4310 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4310 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (  from_dash_charlike1233 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_215) { .tag = Maybe_215_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1310 (   struct env235* env ,    struct Pane_229 *  self4329 ,    int32_t  indent4331 ) {
    struct RangeIter_162  temp1311 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  (  indent4331 ) ) ) );
    while (true) {
        struct Maybe_164  __cond1312 =  next165 (&temp1311);
        if (  __cond1312 .tag == 0 ) {
            break;
        }
        int32_t  dref4332 =  __cond1312 .stuff .Maybe_164_Just_s .field0;
        struct envunion236  temp1313 = ( (struct envunion236){ .fun = (  enum Unit_8  (*) (  struct env224*  ,    struct Pane_229 *  ,    int32_t  ) )indent_dash_at1314 , .env =  env->envinst224 } );
        ( temp1313.fun ( &temp1313.env ,  (  self4329 ) ,  ( ( ( * (  self4329 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1140 ) ( (  self4329 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1316 (    struct Pane_229 *  self4249 ) {
    struct Pos_26  temp1317 = ( ( * (  self4249 ) ) .f_cursor );
    temp1317 .  f_bi = (  from_dash_integral67 ( 0 ) );
    ( (  set_dash_cursors1096 ) ( (  self4249 ) ,  ( temp1317 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1319 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_229 *  ,    struct StrView_27  );
    struct env213 env;
};

struct envunion1321 {
    enum Unit_8  (*fun) (  struct env235*  ,    struct Pane_229 *  ,    int32_t  );
    struct env235 env;
};

enum MoveDirection_1323 {
    MoveDirection_1323_MoveFwd,
    MoveDirection_1323_MoveBwd,
};

enum MoveTarget_1324 {
    MoveTarget_1324_NextWordStart,
    MoveTarget_1324_NextWordEnd,
};

static  struct Pos_26   own1326 (    struct Pos_26  x1252 ) {
    return (  x1252 );
}

struct env1327 {
    struct Pane_229 *  pane4210;
    ;
    enum MoveDirection_1323  dir4212;
    ;
    struct Pos_26 *  prev4215;
};

static  bool   is_dash_at_dash_line_dash_end1329 (    struct Pane_229 *  pane4192 ,    struct Pos_26  pos4194 ) {
    return (  eq408 ( ( (  i32_dash_size421 ) ( ( (  pos4194 ) .f_bi ) ) ) , ( (  num_dash_bytes1135 ) ( ( (  line1102 ) ( ( ( * (  pane4192 ) ) .f_buf ) ,  ( (  pos4194 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1328 (    struct Pane_229 *  pane4197 ) {
    return ( (  is_dash_at_dash_line_dash_end1329 ) ( (  pane4197 ) ,  ( ( * (  pane4197 ) ) .f_cursor ) ) );
}

struct envunion1331 {
    enum Unit_8  (*fun) (  struct env1327*  );
    struct env1327 env;
};

static  enum Unit_8   advance1332 (   struct env1327* env ) {
    (* env->prev4215 ) = ( ( * ( env->pane4210 ) ) .f_cursor );
    enum MoveDirection_1323  dref4217 = ( env->dir4212 );
    switch (  dref4217 ) {
        case MoveDirection_1323_MoveFwd : {
            ( (  move_dash_right1140 ) ( ( env->pane4210 ) ) );
            break;
        }
        case MoveDirection_1323_MoveBwd : {
            ( (  move_dash_left1095 ) ( ( env->pane4210 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1336 {
    CharType_1336_CharSpace,
    CharType_1336_CharWord,
    CharType_1336_CharPunctuation,
};

struct Tuple2_1337 {
    enum CharType_1336  field0;
    enum CharType_1336  field1;
};

static struct Tuple2_1337 Tuple2_1337_Tuple2 (  enum CharType_1336  field0 ,  enum CharType_1336  field1 ) {
    return ( struct Tuple2_1337 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1335 (    enum CharType_1336  l3654 ,    enum CharType_1336  r3656 ) {
    struct Tuple2_1337  dref3657 = ( ( Tuple2_1337_Tuple2 ) ( (  l3654 ) ,  (  r3656 ) ) );
    if (  dref3657 .field0 == CharType_1336_CharSpace &&  dref3657 .field1 == CharType_1336_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3657 .field0 == CharType_1336_CharWord &&  dref3657 .field1 == CharType_1336_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3657 .field0 == CharType_1336_CharPunctuation &&  dref3657 .field1 == CharType_1336_CharPunctuation ) {
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

static  struct Char_65   min1342 (    struct Char_65  l1237 ,    struct Char_65  r1239 ) {
    if ( (  cmp945 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Char_65   max1343 (    struct Char_65  l1316 ,    struct Char_65  r1318 ) {
    if ( (  cmp945 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  bool   between1341 (    struct Char_65  c1338 ,    struct Char_65  l1340 ,    struct Char_65  r1342 ) {
    struct Char_65  from1343 = ( (  min1342 ) ( (  l1340 ) ,  (  r1342 ) ) );
    struct Char_65  to1344 = ( (  max1343 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp945 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp945 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  bool   is_dash_alpha1340 (    struct Char_65  c2393 ) {
    return ( ( (  cmp299 ( ( (  c2393 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1341 ) ( (  c2393 ) ,  ( (  from_dash_charlike355 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1341 ) ( (  c2393 ) ,  ( (  from_dash_charlike355 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1344 (    struct Char_65  c2396 ) {
    return ( (  eq408 ( ( (  c2396 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1341 ) ( (  c2396 ) ,  ( (  from_dash_charlike355 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1339 (    struct Char_65  c2408 ) {
    return ( ( (  is_dash_alpha1340 ) ( (  c2408 ) ) ) || ( (  is_dash_digit1344 ) ( (  c2408 ) ) ) );
}

static  bool   is_dash_whitespace1345 (    struct Char_65  c2384 ) {
    return ( ( (  eq584 ( (  c2384 ) , ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq584 ( (  c2384 ) , ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq584 ( (  c2384 ) , ( (  from_dash_charlike355 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1336   char_dash_type1338 (    struct Char_65  c3660 ) {
    if ( ( ( ( (  is_dash_alphanumeric1339 ) ( (  c3660 ) ) ) || (  eq584 ( (  c3660 ) , ( (  from_dash_charlike355 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq584 ( (  c3660 ) , ( (  from_dash_charlike355 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1336_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1345 ) ( (  c3660 ) ) ) ) {
            return ( CharType_1336_CharSpace );
        } else {
            return ( CharType_1336_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1334 (    struct Char_65  l3663 ,    struct Char_65  r3665 ) {
    return ( !  eq1335 ( ( (  char_dash_type1338 ) ( (  l3663 ) ) ) , ( (  char_dash_type1338 ) ( (  r3665 ) ) ) ) );
}

static  struct Char_65   or_dash_else1347 (    struct Maybe_306  self1734 ,    struct Char_65  alt1736 ) {
    struct Maybe_306  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_306_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_306_Just_t ) {
            return ( dref1737 .stuff .Maybe_306_Just_s .field0 );
        }
    }
}

static  struct Maybe_306   head1348 (    struct StrViewIter_62  it1143 ) {
    struct StrViewIter_62  temp1349 = ( (  into_dash_iter789 ) ( (  it1143 ) ) );
    return ( (  next690 ) ( ( &temp1349 ) ) );
}

static  struct Char_65   char_dash_at1346 (    struct Pane_229 *  pane4061 ,    struct Pos_26  pos4063 ) {
    struct StrView_27  line4064 = ( (  line1102 ) ( ( ( * (  pane4061 ) ) .f_buf ) ,  ( (  pos4063 ) .f_line ) ) );
    return ( (  or_dash_else1347 ) ( ( (  head1348 ) ( ( (  chars702 ) ( ( (  byte_dash_substr520 ) ( (  line4064 ) ,  ( (  i32_dash_size421 ) ( ( (  pos4063 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1135 ) ( (  line4064 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_8   print1351 (    struct StrView_27  s1703 ) {
    ( (  for_dash_each787 ) ( ( (  chars702 ) ( (  s1703 ) ) ) ,  (  printf_dash_char345 ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1352 (  ) {
    bool  temp1353;
    return (  temp1353 );
}

static  bool   todo1350 (  ) {
    ( (  print1351 ) ( ( (  from_dash_string208 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1352 ) ( ) );
}

static  bool   reached_dash_target1333 (    struct Pane_229 *  pane4202 ,    enum MoveTarget_1324  target4204 ,    struct Pos_26  prev4206 ) {
    return ( {  enum MoveTarget_1324  dref4207 = (  target4204 ) ;  dref4207 == MoveTarget_1324_NextWordStart ? ( ( (  is_dash_word_dash_boundary1334 ) ( ( (  char_dash_at1346 ) ( (  pane4202 ) ,  (  prev4206 ) ) ) ,  ( (  char_dash_at1346 ) ( (  pane4202 ) ,  ( ( * (  pane4202 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1335 ( ( (  char_dash_type1338 ) ( ( (  char_dash_at1346 ) ( (  pane4202 ) ,  ( ( * (  pane4202 ) ) .f_cursor ) ) ) ) ) , ( CharType_1336_CharSpace ) ) ) ) ) :  dref4207 == MoveTarget_1324_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1334 ) ( ( (  char_dash_at1346 ) ( (  pane4202 ) ,  (  prev4206 ) ) ) ,  ( (  char_dash_at1346 ) ( (  pane4202 ) ,  ( ( * (  pane4202 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1335 ( ( (  char_dash_type1338 ) ( ( (  char_dash_at1346 ) ( (  pane4202 ) ,  (  prev4206 ) ) ) ) ) , ( CharType_1336_CharSpace ) ) ) ) ) : ( (  todo1350 ) ( ) ) ; } );
}

struct envunion1355 {
    enum Unit_8  (*fun) (  struct env1327*  );
    struct env1327 env;
};

struct envunion1357 {
    enum Unit_8  (*fun) (  struct env1327*  );
    struct env1327 env;
};

static  enum Unit_8   advance_dash_word1322 (    struct Pane_229 *  pane4210 ,    enum MoveDirection_1323  dir4212 ,    enum MoveTarget_1324  target4214 ) {
    struct Pos_26  temp1325 = ( (  own1326 ) ( ( ( * (  pane4210 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4215 = ( &temp1325 );
    struct env1327 envinst1327 = {
        .pane4210 =  pane4210 ,
        .dir4212 =  dir4212 ,
        .prev4215 =  prev4215 ,
    };
    struct Pos_26  sel4218 = ( ( * (  pane4210 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4219 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1328 ) ( (  pane4210 ) ) );
    struct envunion1331  temp1330 = ( (struct envunion1331){ .fun = (  enum Unit_8  (*) (  struct env1327*  ) )advance1332 , .env =  envinst1327 } );
    ( temp1330.fun ( &temp1330.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4219 ) || ( (  reached_dash_target1333 ) ( (  pane4210 ) ,  (  target4214 ) ,  ( * (  prev4215 ) ) ) ) ) ) {
        sel4218 = ( ( * (  pane4210 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1328 ) ( (  pane4210 ) ) ) ) {
        if ( (  eq526 ( ( ( * (  pane4210 ) ) .f_cursor ) , ( * (  prev4215 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1355  temp1354 = ( (struct envunion1355){ .fun = (  enum Unit_8  (*) (  struct env1327*  ) )advance1332 , .env =  envinst1327 } );
        ( temp1354.fun ( &temp1354.env ) );
        sel4218 = ( ( * (  pane4210 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1357  temp1356 = ( (struct envunion1357){ .fun = (  enum Unit_8  (*) (  struct env1327*  ) )advance1332 , .env =  envinst1327 } );
        ( temp1356.fun ( &temp1356.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1328 ) ( (  pane4210 ) ) ) || ( (  reached_dash_target1333 ) ( (  pane4210 ) ,  (  target4214 ) ,  ( * (  prev4215 ) ) ) ) ) ) {
            enum MoveDirection_1323  dref4220 = (  dir4212 );
            switch (  dref4220 ) {
                case MoveDirection_1323_MoveFwd : {
                    ( (  move_dash_left1095 ) ( (  pane4210 ) ) );
                    break;
                }
                case MoveDirection_1323_MoveBwd : {
                    ( (  move_dash_right1140 ) ( (  pane4210 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq526 ( ( * (  prev4215 ) ) , ( ( * (  pane4210 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1131 ) ( (  pane4210 ) ,  ( ( Maybe_34_Just ) ( (  sel4218 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1362 (    struct List_30 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1365 (    struct List_30 *  list2003 ,    size_t  i2005 ) {
    if ( ( (  cmp299 ( (  i2005 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2005 ) , ( ( * (  list2003 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2005 ) ) ) ,  ( (  from_dash_string208 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2003 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1246 ) ( ( ( * (  list2003 ) ) .f_elements ) ,  (  i2005 ) ) );
}

static  struct Changeset_32   get1364 (    struct List_30 *  list2013 ,    size_t  i2015 ) {
    return ( * ( (  get_dash_ptr1365 ) ( (  list2013 ) ,  (  i2015 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1363 (    struct List_30  self2083 ,    size_t  k2085 ) {
    return ( (  get1364 ) ( ( & (  self2083 ) ) ,  (  k2085 ) ) );
}

static  struct Action_25   undefined1374 (  ) {
    struct Action_25  temp1375;
    return (  temp1375 );
}

static  struct Action_25   or_dash_fail1373 (    struct Maybe_1200  x1727 ,    struct StrConcat_330  errmsg1729 ) {
    struct Maybe_1200  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1200_None_t ) {
        ( (  panic332 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1374 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1200_Just_t ) {
            return ( dref1730 .stuff .Maybe_1200_Just_s .field0 );
        }
    }
}

static  struct Maybe_1200   try_dash_get1376 (    struct Slice_24  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp299 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1200) { .tag = Maybe_1200_None_t } );
    }
    struct Action_25 *  elem_dash_ptr1768 = ( (  offset_dash_ptr1198 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_1200_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  struct Action_25   get1372 (    struct Slice_24  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail1373 ) ( ( (  try_dash_get1376 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1371 (    struct Slice_24  self1869 ,    size_t  idx1871 ) {
    return ( (  get1372 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  struct Action_25   last1370 (    struct Slice_24  s1937 ) {
    if ( (  eq408 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1217 ) ( ( (  from_dash_string208 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1371 ( (  s1937 ) , (  op_dash_sub298 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1377 (    struct List_23  l2128 ) {
    struct Action_25 *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

static  struct Maybe_215   redo1361 (   struct env132* env ,    struct TextBuf_114 *  self3838 ) {
    ( (  flush_dash_insert_dash_action1149 ) ( (  self3838 ) ) );
    struct Actions_115 *  actions3839 = ( & ( ( * (  self3838 ) ) .f_actions ) );
    if ( (  cmp299 ( ( ( * (  actions3839 ) ) .f_cur ) , ( (  size1362 ) ( ( & ( ( * (  actions3839 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_215) { .tag = Maybe_215_None_t } );
    }
    struct Changeset_32  changeset3840 = (  elem_dash_get1363 ( ( ( * (  actions3839 ) ) .f_list ) , ( ( * (  actions3839 ) ) .f_cur ) ) );
    struct Pos_26  temp1366;
    struct Pos_26  to_dash_fwd3841 = (  temp1366 );
    struct SliceIter_1193  temp1367 =  into_dash_iter1195 ( ( (  changeset3840 ) .f_parts ) );
    while (true) {
        struct Maybe_1200  __cond1368 =  next1201 (&temp1367);
        if (  __cond1368 .tag == 0 ) {
            break;
        }
        struct Action_25  action3843 =  __cond1368 .stuff .Maybe_1200_Just_s .field0;
        struct envunion133  temp1369 = ( (struct envunion133){ .fun = (  struct Pos_26  (*) (  struct env128*  ,    struct TextBuf_114 *  ,    struct Action_25  ) )action_dash_fwd1307 , .env =  env->envinst128 } );
        to_dash_fwd3841 = ( temp1369.fun ( &temp1369.env ,  (  self3838 ) ,  (  action3843 ) ) );
    }
    (*  actions3839 ) .f_cur = (  op_dash_add320 ( ( ( * (  actions3839 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action3844 = ( (  last1370 ) ( ( (  to_dash_slice1377 ) ( ( (  changeset3840 ) .f_parts ) ) ) ) );
    if ( (  cmp299 ( ( (  num_dash_bytes1135 ) ( ( (  last_dash_action3844 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3845 = ( (  left_dash_pos1134 ) ( (  self3838 ) ,  (  to_dash_fwd3841 ) ) );
        return ( ( Maybe_215_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3845 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action3844 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_215_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3841 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1379 {
    struct Pane_229 *  self4286;
    ;
};

struct envunion1380 {
    enum Unit_8  (*fun) (  struct env1379*  ,    struct Cursors_33  );
    struct env1379 env;
};

static  enum Unit_8   if_dash_just1378 (    struct Maybe_215  x1292 ,   struct envunion1380  fun1294 ) {
    struct Maybe_215  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_215_Just_t ) {
        struct envunion1380  temp1381 = (  fun1294 );
        ( temp1381.fun ( &temp1381.env ,  ( dref1295 .stuff .Maybe_215_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_215_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1382 (   struct env1379* env ,    struct Cursors_33  cursors4289 ) {
    ( (  set_dash_cursors1096 ) ( ( env->self4286 ) ,  ( (  cursors4289 ) .f_cur ) ,  ( (  cursors4289 ) .f_sel ) ,  ( CursorMovement_1097_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1359 (   struct env220* env ,    struct Pane_229 *  self4286 ) {
    struct envunion221  temp1360 = ( (struct envunion221){ .fun = (  struct Maybe_215  (*) (  struct env132*  ,    struct TextBuf_114 *  ) )redo1361 , .env =  env->envinst132 } );
    struct Maybe_215  mcursors4287 = ( temp1360.fun ( &temp1360.env ,  ( ( * (  self4286 ) ) .f_buf ) ) );
    struct env1379 envinst1379 = {
        .self4286 =  self4286 ,
    };
    ( (  if_dash_just1378 ) ( (  mcursors4287 ) ,  ( (struct envunion1380){ .fun = (  enum Unit_8  (*) (  struct env1379*  ,    struct Cursors_33  ) )lam1382 , .env =  envinst1379 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1388 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1388   into_dash_iter1389 (    struct SliceReversedIter_1388  self1900 ) {
    return (  self1900 );
}

static  struct SliceReversedIter_1388   reversed1390 (    struct Slice_24  slice1897 ) {
    return ( (struct SliceReversedIter_1388) { .f_slice = (  slice1897 ) , .f_current_dash_offset = ( (  slice1897 ) .f_count ) } );
}

static  struct Maybe_1200   next1392 (    struct SliceReversedIter_1388 *  self1903 ) {
    size_t  off1904 = ( ( * (  self1903 ) ) .f_current_dash_offset );
    if ( (  eq408 ( (  off1904 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1200) { .tag = Maybe_1200_None_t } );
    }
    (*  self1903 ) .f_current_dash_offset = (  op_dash_sub298 ( (  off1904 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1200_Just ) ( (  elem_dash_get1371 ( ( ( * (  self1903 ) ) .f_slice ) , ( ( * (  self1903 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1394 (   struct env126* env ,    struct TextBuf_114 *  self3806 ,    struct Action_25  action3808 ) {
    struct envunion127  temp1395 = ( (struct envunion127){ .fun = (  enum Unit_8  (*) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action522 , .env =  env->envinst110 } );
    ( temp1395.fun ( &temp1395.env ,  (  self3806 ) ,  ( (  action3808 ) .f_from ) ,  ( (  action3808 ) .f_to_dash_fwd ) ,  ( (  action3808 ) .f_bwd ) ) );
    return ( (  action3808 ) .f_to_dash_bwd );
}

static  struct Maybe_215   undo1386 (   struct env130* env ,    struct TextBuf_114 *  self3831 ) {
    ( (  flush_dash_insert_dash_action1149 ) ( (  self3831 ) ) );
    struct Actions_115 *  actions3832 = ( & ( ( * (  self3831 ) ) .f_actions ) );
    if ( (  eq408 ( ( ( * (  actions3832 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_215) { .tag = Maybe_215_None_t } );
    }
    (*  actions3832 ) .f_cur = (  op_dash_sub298 ( ( ( * (  actions3832 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset3833 = (  elem_dash_get1363 ( ( ( * (  actions3832 ) ) .f_list ) , ( ( * (  actions3832 ) ) .f_cur ) ) );
    struct SliceReversedIter_1388  temp1387 =  into_dash_iter1389 ( ( (  reversed1390 ) ( ( (  to_dash_slice1377 ) ( ( (  changeset3833 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1200  __cond1391 =  next1392 (&temp1387);
        if (  __cond1391 .tag == 0 ) {
            break;
        }
        struct Action_25  action3835 =  __cond1391 .stuff .Maybe_1200_Just_s .field0;
        struct envunion131  temp1393 = ( (struct envunion131){ .fun = (  struct Pos_26  (*) (  struct env126*  ,    struct TextBuf_114 *  ,    struct Action_25  ) )action_dash_bwd1394 , .env =  env->envinst126 } );
        ( temp1393.fun ( &temp1393.env ,  (  self3831 ) ,  (  action3835 ) ) );
    }
    return ( ( Maybe_215_Just ) ( ( (  changeset3833 ) .f_before_dash_cursors ) ) );
}

struct env1397 {
    struct Pane_229 *  self4280;
    ;
};

struct envunion1398 {
    enum Unit_8  (*fun) (  struct env1397*  ,    struct Cursors_33  );
    struct env1397 env;
};

static  enum Unit_8   if_dash_just1396 (    struct Maybe_215  x1292 ,   struct envunion1398  fun1294 ) {
    struct Maybe_215  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_215_Just_t ) {
        struct envunion1398  temp1399 = (  fun1294 );
        ( temp1399.fun ( &temp1399.env ,  ( dref1295 .stuff .Maybe_215_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_215_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1400 (   struct env1397* env ,    struct Cursors_33  cursors4283 ) {
    ( (  set_dash_cursors1096 ) ( ( env->self4280 ) ,  ( (  cursors4283 ) .f_cur ) ,  ( (  cursors4283 ) .f_sel ) ,  ( CursorMovement_1097_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1384 (   struct env218* env ,    struct Pane_229 *  self4280 ) {
    struct envunion219  temp1385 = ( (struct envunion219){ .fun = (  struct Maybe_215  (*) (  struct env130*  ,    struct TextBuf_114 *  ) )undo1386 , .env =  env->envinst130 } );
    struct Maybe_215  mcursors4281 = ( temp1385.fun ( &temp1385.env ,  ( ( * (  self4280 ) ) .f_buf ) ) );
    struct env1397 envinst1397 = {
        .self4280 =  self4280 ,
    };
    ( (  if_dash_just1396 ) ( (  mcursors4281 ) ,  ( (struct envunion1398){ .fun = (  enum Unit_8  (*) (  struct env1397*  ,    struct Cursors_33  ) )lam1400 , .env =  envinst1397 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_240   minmax1404 (    struct Pos_26  l1330 ,    struct Pos_26  r1332 ) {
    return ( (  cmp524 ( (  l1330 ) , (  r1332 ) ) == 0 ) ? ( ( Tuple2_240_Tuple2 ) ( (  l1330 ) ,  (  r1332 ) ) ) : ( ( Tuple2_240_Tuple2 ) ( (  r1332 ) ,  (  l1330 ) ) ) );
}

static  struct Pos_26   or_dash_else1405 (    struct Maybe_34  self1734 ,    struct Pos_26  alt1736 ) {
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

static  struct Pos_26   fst1406 (    struct Tuple2_240  dref1254 ) {
    return ( dref1254 .field0 );
}

static  struct Pos_26   snd1407 (    struct Tuple2_240  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Tuple2_240   selection1403 (    struct Pane_229 *  self4292 ) {
    struct Tuple2_240  from_dash_to4293 = ( (  minmax1404 ) ( ( (  or_dash_else1405 ) ( ( ( * (  self4292 ) ) .f_sel ) ,  ( ( * (  self4292 ) ) .f_cursor ) ) ) ,  ( ( * (  self4292 ) ) .f_cursor ) ) );
    struct Pos_26  from4294 = ( (  fst1406 ) ( (  from_dash_to4293 ) ) );
    struct Pos_26  to4295 = ( (  right_dash_pos1141 ) ( ( ( * (  self4292 ) ) .f_buf ) ,  ( (  snd1407 ) ( (  from_dash_to4293 ) ) ) ) );
    return ( ( Tuple2_240_Tuple2 ) ( (  from4294 ) ,  (  to4295 ) ) );
}

struct env1410 {
    struct Editor_257 *  ed4405;
    ;
};

struct envunion1411 {
    enum Unit_8  (*fun) (  struct env1410*  ,    struct StrView_27  );
    struct env1410 env;
};

static  enum Unit_8   if_dash_just1409 (    struct Maybe_94  x1292 ,   struct envunion1411  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1411  temp1412 = (  fun1294 );
        ( temp1412.fun ( &temp1412.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1413 (   struct env1410* env ,    struct StrView_27  cp4409 ) {
    ( (  free511 ) ( (  cp4409 ) ,  ( ( * ( env->ed4405 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1402 (   struct env242* env ,    struct Editor_257 *  ed4405 ) {
    struct Tuple2_240  from_dash_to4406 = ( (  selection1403 ) ( ( (  pane1139 ) ( (  ed4405 ) ) ) ) );
    struct envunion243  temp1408 = ( (struct envunion243){ .fun = (  struct StrView_27  (*) (  struct env134*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1228 , .env =  env->envinst134 } );
    struct StrView_27  cpd4407 = ( temp1408.fun ( &temp1408.env ,  ( ( ( * (  ed4405 ) ) .f_pane ) .f_buf ) ,  ( (  fst1406 ) ( (  from_dash_to4406 ) ) ) ,  ( (  snd1407 ) ( (  from_dash_to4406 ) ) ) ) );
    struct env1410 envinst1410 = {
        .ed4405 =  ed4405 ,
    };
    ( (  if_dash_just1409 ) ( ( ( * (  ed4405 ) ) .f_clipboard ) ,  ( (struct envunion1411){ .fun = (  enum Unit_8  (*) (  struct env1410*  ,    struct StrView_27  ) )lam1413 , .env =  envinst1410 } ) ) );
    (*  ed4405 ) .f_clipboard = ( ( Maybe_94_Just ) ( (  cpd4407 ) ) );
    return ( Unit_8_Unit );
}

struct env1418 {
    struct Pane_229 *  self4298;
    ;
};

struct envunion1419 {
    enum Unit_8  (*fun) (  struct env1418*  ,    struct Cursors_33  );
    struct env1418 env;
};

static  enum Unit_8   if_dash_just1417 (    struct Maybe_215  x1292 ,   struct envunion1419  fun1294 ) {
    struct Maybe_215  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_215_Just_t ) {
        struct envunion1419  temp1420 = (  fun1294 );
        ( temp1420.fun ( &temp1420.env ,  ( dref1295 .stuff .Maybe_215_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_215_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1421 (   struct env1418* env ,    struct Cursors_33  cursors4305 ) {
    ( (  set_dash_cursors1096 ) ( ( env->self4298 ) ,  ( (  cursors4305 ) .f_cur ) ,  ( (  cursors4305 ) .f_sel ) ,  ( CursorMovement_1097_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1415 (   struct env222* env ,    struct Pane_229 *  self4298 ,    struct Tuple2_240  pos_prime_s4300 ,    struct StrView_27  cp4302 ) {
    struct envunion223  temp1416 = ( (struct envunion223){ .fun = (  struct Maybe_215  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  ) )change1173 , .env =  env->envinst136 } );
    struct Maybe_215  mcursors4303 = ( temp1416.fun ( &temp1416.env ,  ( ( * (  self4298 ) ) .f_buf ) ,  ( (  fst1406 ) ( (  pos_prime_s4300 ) ) ) ,  ( (  snd1407 ) ( (  pos_prime_s4300 ) ) ) ,  (  cp4302 ) ,  ( ( Maybe_215_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4298 ) ) .f_cursor ) , .f_sel = ( ( * (  self4298 ) ) .f_sel ) } ) ) ) ) );
    struct env1418 envinst1418 = {
        .self4298 =  self4298 ,
    };
    ( (  if_dash_just1417 ) ( (  mcursors4303 ) ,  ( (struct envunion1419){ .fun = (  enum Unit_8  (*) (  struct env1418*  ,    struct Cursors_33  ) )lam1421 , .env =  envinst1418 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1423 {
    enum Unit_8  (*fun) (  struct env242*  ,    struct Editor_257 *  );
    struct env242 env;
};

struct envunion1425 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct envunion1427 {
    enum Unit_8  (*fun) (  struct env242*  ,    struct Editor_257 *  );
    struct env242 env;
};

static  struct StrBuilder_73   mk1433 (    enum CAllocator_10  al2810 ) {
    return ( (struct StrBuilder_73) { .f_chars = ( (  mk448 ) ( (  al2810 ) ) ) } );
}

struct IntStrIter_1439 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1438 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_1439  f_right;
};

struct StrConcatIter_1437 {
    struct StrConcatIter_1438  f_left;
    struct StrViewIter_62  f_right;
};

struct env1440 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1441 {
    enum Unit_8  (*fun) (  struct env1440*  ,    struct Char_65  );
    struct env1440 env;
};

static  struct StrConcatIter_1437   into_dash_iter1443 (    struct StrConcatIter_1437  self1498 ) {
    return (  self1498 );
}

struct env1449 {
    ;
    size_t  base1211;
};

struct envunion1450 {
    size_t  (*fun) (  struct env1449*  ,    int32_t  ,    size_t  );
    struct env1449 env;
};

static  size_t   reduce1448 (    struct Range_159  iterable1094 ,    size_t  base1096 ,   struct envunion1450  fun1098 ) {
    size_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1450  temp1451 = (  fun1098 );
                x1099 = ( temp1451.fun ( &temp1451.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1452 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1452);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1453;
    return (  temp1453 );
}

static  size_t   lam1454 (   struct env1449* env ,    int32_t  item1215 ,    size_t  x1217 ) {
    return (  op_dash_mul414 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  size_t   pow1447 (    size_t  base1211 ,    int32_t  p1213 ) {
    struct env1449 envinst1449 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1448 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1450){ .fun = (  size_t  (*) (  struct env1449*  ,    int32_t  ,    size_t  ) )lam1454 , .env =  envinst1449 } ) ) );
}

static  uint8_t   cast1455 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_306   next1446 (    struct IntStrIter_1439 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_306_Just ) ( ( (  from_dash_charlike355 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    size_t  trim_dash_down1430 = ( (  pow1447 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    size_t  upper1431 = (  op_dash_div351 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    size_t  upper_dash_mask1432 = (  op_dash_mul414 ( (  op_dash_div351 ( (  upper1431 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast1455 ) ( (  op_dash_sub298 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81052 ) ( (  op_dash_add948 ( (  digit1433 ) , (  from_dash_integral317 ( 48 ) ) ) ) ) );
    return ( ( Maybe_306_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_306   next1445 (    struct StrConcatIter_1438 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next1446 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next1444 (    struct StrConcatIter_1437 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next1445 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1436 (    struct StrConcatIter_1437  iterable1075 ,   struct envunion1441  fun1077 ) {
    struct StrConcatIter_1437  temp1442 = ( (  into_dash_iter1443 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1437 *  it1078 = ( &temp1442 );
    while ( ( true ) ) {
        struct Maybe_306  dref1079 = ( (  next1444 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_306_Just_t ) {
                struct envunion1441  temp1456 = (  fun1077 );
                ( temp1456.fun ( &temp1456.env ,  ( dref1079 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1463 (    size_t  self1437 ) {
    if ( (  eq408 ( (  self1437 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp299 ( (  self1437 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div351 ( (  self1437 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1439   uint_dash_iter1462 (    size_t  int1444 ) {
    return ( (struct IntStrIter_1439) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits1463 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1439   chars1461 (    size_t  self1474 ) {
    return ( (  uint_dash_iter1462 ) ( (  self1474 ) ) );
}

static  struct StrConcatIter_1438   into_dash_iter1460 (    struct StrConcat_87  dref1505 ) {
    return ( (struct StrConcatIter_1438) { .f_left = ( (  chars702 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1461 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1438   chars1459 (    struct StrConcat_87  self1516 ) {
    return ( (  into_dash_iter1460 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1437   into_dash_iter1458 (    struct StrConcat_86  dref1505 ) {
    return ( (struct StrConcatIter_1437) { .f_left = ( (  chars1459 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1437   chars1457 (    struct StrConcat_86  self1516 ) {
    return ( (  into_dash_iter1458 ) ( (  self1516 ) ) );
}

static  enum Unit_8   write_dash_slice1468 (   struct env69* env ,    struct StrBuilder_73 *  builder2768 ,    struct Slice_11  s2770 ) {
    struct envunion70  temp1469 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all541 , .env =  env->envinst46 } );
    ( temp1469.fun ( &temp1469.env ,  ( & ( ( * (  builder2768 ) ) .f_chars ) ) ,  (  s2770 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_11   from_dash_char1470 (    struct Char_65  c1943 ,    uint8_t *  buf1945 ) {
    struct CharDestructured_346  dref1946 = ( (  destructure348 ) ( (  c1943 ) ) );
    if ( dref1946.tag == CharDestructured_346_Ref_t ) {
        return ( (struct Slice_11) { .f_ptr = ( ( dref1946 .stuff .CharDestructured_346_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1946 .stuff .CharDestructured_346_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1946.tag == CharDestructured_346_Scalar_t ) {
            if ( (  cmp179 ( ( ( dref1946 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) , (  from_dash_integral174 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1471 = ( (  from_dash_string68 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1471);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            (*  buf1945 ) = ( (  u32_dash_u8153 ) ( ( ( dref1946 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_11) { .f_ptr = (  buf1945 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_8   write_dash_char1466 (   struct env71* env ,    struct StrBuilder_73 *  builder2773 ,    struct Char_65  c2775 ) {
    struct envunion72  temp1467 = ( (struct envunion72){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_73 *  ,    struct Slice_11  ) )write_dash_slice1468 , .env =  env->envinst69 } );
    uint8_t  temp1473;
    uint8_t  temp1472 = (  temp1473 );
    ( temp1467.fun ( &temp1467.env ,  (  builder2773 ) ,  ( (  from_dash_char1470 ) ( (  c2775 ) ,  ( &temp1472 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1464 (   struct env1440* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1465 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1466 , .env =  env->envinst71 } );
    return ( temp1465.fun ( &temp1465.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1435 (   struct env74* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrConcat_86  s2780 ) {
    struct env1440 envinst1440 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1436 ) ( ( (  chars1457 ) ( (  s2780 ) ) ) ,  ( (struct envunion1441){ .fun = (  enum Unit_8  (*) (  struct env1440*  ,    struct Char_65  ) )lam1464 , .env =  envinst1440 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1477 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice1476 (    struct Slice_11  s1934 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr1477 ) ( ( (  s1934 ) .f_ptr ) ) ) , .f_count = ( (  s1934 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1475 (    struct StrBuilder_73 *  builder2816 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1476 ) ( ( (  subslice507 ) ( ( ( ( * (  builder2816 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2816 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1431 (   struct env84* env ,    struct StrConcat_86  s2836 ,    enum CAllocator_10  al2838 ) {
    struct StrBuilder_73  temp1432 = ( (  mk1433 ) ( (  al2838 ) ) );
    struct StrBuilder_73 *  sb2839 = ( &temp1432 );
    struct envunion85  temp1434 = ( (struct envunion85){ .fun = (  enum Unit_8  (*) (  struct env74*  ,    struct StrBuilder_73 *  ,    struct StrConcat_86  ) )write1435 , .env =  env->envinst74 } );
    ( temp1434.fun ( &temp1434.env ,  (  sb2839 ) ,  (  s2836 ) ) );
    struct envunion88  temp1474 = ( (struct envunion88){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1466 , .env =  env->envinst71 } );
    ( temp1474.fun ( &temp1474.env ,  (  sb2839 ) ,  ( (  nullchar506 ) ( ) ) ) );
    struct StrView_27  dynstr2840 = ( (  as_dash_str1475 ) ( (  sb2839 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2840 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub298 ( ( ( (  dynstr2840 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1429 (   struct env244* env ,    struct Editor_257 *  ed4417 ,    struct StrConcat_86  s4419 ) {
    ( (  reset_dash_msg1084 ) ( (  ed4417 ) ) );
    struct envunion245  temp1430 = ( (struct envunion245){ .fun = (  struct StrView_27  (*) (  struct env84*  ,    struct StrConcat_86  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1431 , .env =  env->envinst84 } );
    (*  ed4417 ) .f_msg = ( ( Maybe_94_Just ) ( ( temp1430.fun ( &temp1430.env ,  (  s4419 ) ,  ( ( * (  ed4417 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1480 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct env1479 {
    struct Editor_257 *  ed4475;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env222 envinst222;
};

struct envunion1481 {
    enum Unit_8  (*fun) (  struct env1479*  ,    struct StrView_27  );
    struct env1479 env;
};

static  enum Unit_8   if_dash_just1478 (    struct Maybe_94  x1292 ,   struct envunion1481  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1481  temp1482 = (  fun1294 );
        ( temp1482.fun ( &temp1482.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1484 (    struct Pane_229 *  pane4228 ) {
    return ( {  struct Maybe_34  dref4229 = ( ( * (  pane4228 ) ) .f_sel ) ; dref4229.tag == Maybe_34_Just_t ? ( (  max525 ) ( ( ( * (  pane4228 ) ) .f_cursor ) ,  ( dref4229 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4228 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1486 (    struct Slice_11  self1869 ,    size_t  idx1871 ) {
    return ( (  get563 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  uint8_t   last1485 (    struct Slice_11  s1937 ) {
    if ( (  eq408 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1217 ) ( ( (  from_dash_string208 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1486 ( (  s1937 ) , (  op_dash_sub298 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1487 (    int32_t  x1353 ,    int32_t  mn1355 ,    int32_t  mx1357 ) {
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

static  enum Unit_8   lam1483 (   struct env1479* env ,    struct StrView_27  cp4486 ) {
    struct Pos_26  start4487 = ( (  max_dash_pos1484 ) ( ( (  pane1139 ) ( ( env->ed4475 ) ) ) ) );
    if ( (  eq312 ( ( (  last1485 ) ( ( (  cp4486 ) .f_contents ) ) ) , ( (  ascii_dash_u8517 ) ( ( (  from_dash_charlike518 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4487 = ( (struct Pos_26) { .f_line = ( (  clamp1487 ) ( (  op_dash_add168 ( ( (  start4487 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  num_dash_lines1142 ) ( ( ( * ( (  pane1139 ) ( ( env->ed4475 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } );
    } else {
        start4487 = ( (  right_dash_pos1141 ) ( ( ( ( * ( env->ed4475 ) ) .f_pane ) .f_buf ) ,  (  start4487 ) ) );
    }
    struct envunion1480  temp1488 = ( (struct envunion1480){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1415 , .env =  env->envinst222 } );
    ( temp1488.fun ( &temp1488.env ,  ( (  pane1139 ) ( ( env->ed4475 ) ) ) ,  ( ( Tuple2_240_Tuple2 ) ( (  start4487 ) ,  (  start4487 ) ) ) ,  (  cp4486 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1491 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct env1490 {
    ;
    struct Editor_257 *  ed4475;
    ;
    ;
    ;
    struct env222 envinst222;
    ;
    ;
    ;
};

struct envunion1492 {
    enum Unit_8  (*fun) (  struct env1490*  ,    struct StrView_27  );
    struct env1490 env;
};

static  enum Unit_8   if_dash_just1489 (    struct Maybe_94  x1292 ,   struct envunion1492  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1492  temp1493 = (  fun1294 );
        ( temp1493.fun ( &temp1493.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1495 (    struct Pane_229 *  pane4223 ) {
    return ( {  struct Maybe_34  dref4224 = ( ( * (  pane4223 ) ) .f_sel ) ; dref4224.tag == Maybe_34_Just_t ? ( (  min523 ) ( ( ( * (  pane4223 ) ) .f_cursor ) ,  ( dref4224 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4223 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1494 (   struct env1490* env ,    struct StrView_27  cp4489 ) {
    struct Pos_26  start4490 = ( (  min_dash_pos1495 ) ( ( (  pane1139 ) ( ( env->ed4475 ) ) ) ) );
    if ( (  eq312 ( ( (  last1485 ) ( ( (  cp4489 ) .f_contents ) ) ) , ( (  ascii_dash_u8517 ) ( ( (  from_dash_charlike518 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1496 = (  start4490 );
        temp1496 .  f_bi = (  from_dash_integral67 ( 0 ) );
        start4490 = ( temp1496 );
    }
    struct envunion1491  temp1497 = ( (struct envunion1491){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1415 , .env =  env->envinst222 } );
    ( temp1497.fun ( &temp1497.env ,  ( (  pane1139 ) ( ( env->ed4475 ) ) ) ,  ( ( Tuple2_240_Tuple2 ) ( (  start4490 ) ,  (  start4490 ) ) ) ,  (  cp4489 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1500 {
    enum Unit_8  (*fun) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  );
    struct env222 env;
};

struct env1499 {
    ;
    struct env222 envinst222;
    struct Editor_257 *  ed4475;
    ;
};

struct envunion1501 {
    enum Unit_8  (*fun) (  struct env1499*  ,    struct StrView_27  );
    struct env1499 env;
};

static  enum Unit_8   if_dash_just1498 (    struct Maybe_94  x1292 ,   struct envunion1501  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1501  temp1502 = (  fun1294 );
        ( temp1502.fun ( &temp1502.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1503 (   struct env1499* env ,    struct StrView_27  cp4492 ) {
    struct Pos_26  start4493 = ( (  min_dash_pos1495 ) ( ( (  pane1139 ) ( ( env->ed4475 ) ) ) ) );
    struct envunion1500  temp1504 = ( (struct envunion1500){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1415 , .env =  env->envinst222 } );
    ( temp1504.fun ( &temp1504.env ,  ( (  pane1139 ) ( ( env->ed4475 ) ) ) ,  ( ( Tuple2_240_Tuple2 ) ( (  start4493 ) ,  (  start4493 ) ) ) ,  (  cp4492 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1505 (    struct Pane_229 *  pane4242 ) {
    struct Pos_26  min_dash_pos4243 = ( (  min_dash_pos1495 ) ( (  pane4242 ) ) );
    struct Pos_26  max_dash_pos4244 = ( (  max_dash_pos1484 ) ( (  pane4242 ) ) );
    int32_t  max_dash_pos_dash_max4245 = ( (  size_dash_i32338 ) ( ( (  num_dash_bytes1135 ) ( ( (  line1102 ) ( ( ( * (  pane4242 ) ) .f_buf ) ,  ( (  max_dash_pos4244 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq527 ( ( (  min_dash_pos4243 ) .f_bi ) , (  from_dash_integral67 ( 0 ) ) ) ) && (  eq527 ( ( (  max_dash_pos4244 ) .f_bi ) , (  max_dash_pos_dash_max4245 ) ) ) ) ) ) {
        struct Pos_26  temp1506 = (  min_dash_pos4243 );
        temp1506 .  f_bi = (  from_dash_integral67 ( 0 ) );
        (*  pane4242 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1506 ) ) );
        struct Pos_26  temp1507 = (  max_dash_pos4244 );
        temp1507 .  f_bi = (  max_dash_pos_dash_max4245 );
        (*  pane4242 ) .f_cursor = ( temp1507 );
    } else {
        if ( (  cmp166 ( (  op_dash_add168 ( ( (  max_dash_pos4244 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) , ( (  num_dash_lines1142 ) ( ( ( * (  pane4242 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1508 = (  min_dash_pos4243 );
        temp1508 .  f_bi = (  from_dash_integral67 ( 0 ) );
        (*  pane4242 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1508 ) ) );
        int32_t  next_dash_line4246 = (  op_dash_add168 ( ( (  max_dash_pos4244 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) );
        (*  pane4242 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4246 ) , .f_bi = ( (  size_dash_i32338 ) ( ( (  num_dash_bytes1135 ) ( ( (  line1102 ) ( ( ( * (  pane4242 ) ) .f_buf ) ,  (  next_dash_line4246 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1509 (    struct Maybe_34  m1265 ) {
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

struct Maybe_1511 {
    enum {
        Maybe_1511_None_t,
        Maybe_1511_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_240  field0;
        } Maybe_1511_Just_s;
    } stuff;
};

static struct Maybe_1511 Maybe_1511_Just (  struct Tuple2_240  field0 ) {
    return ( struct Maybe_1511 ) { .tag = Maybe_1511_Just_t, .stuff = { .Maybe_1511_Just_s = { .field0 = field0 } } };
};

struct env1513 {
    ;
    ;
    ;
    ;
    struct StrView_27  query4354;
    struct Pane_229 *  pane4350;
};

struct envunion1515 {
    struct Maybe_255  (*fun) (  struct env1513*  ,    struct Pos_26  );
    struct env1513 env;
};

struct Zip_1522 {
    struct SliceIter_479  f_left_dash_it;
    struct SliceIter_479  f_right_dash_it;
};

struct Tuple2_1523 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1523 Tuple2_1523_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1523 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1525 {
    bool (*  fun1127 )(    struct Tuple2_1523  );
};

struct envunion1526 {
    bool  (*fun) (  struct env1525*  ,    struct Tuple2_1523  ,    bool  );
    struct env1525 env;
};

static  struct Zip_1522   into_dash_iter1527 (    struct Zip_1522  self912 ) {
    return (  self912 );
}

struct Maybe_1528 {
    enum {
        Maybe_1528_None_t,
        Maybe_1528_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1523  field0;
        } Maybe_1528_Just_s;
    } stuff;
};

static struct Maybe_1528 Maybe_1528_Just (  struct Tuple2_1523  field0 ) {
    return ( struct Maybe_1528 ) { .tag = Maybe_1528_Just_t, .stuff = { .Maybe_1528_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1528   next1529 (    struct Zip_1522 *  self915 ) {
    struct Zip_1522  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_487  dref917 = ( (  next488 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_487_None_t ) {
            return ( (struct Maybe_1528) { .tag = Maybe_1528_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_487_Just_t ) {
                struct Maybe_487  dref919 = ( (  next488 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_487_None_t ) {
                    return ( (struct Maybe_1528) { .tag = Maybe_1528_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_487_Just_t ) {
                        ( (  next488 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next488 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1528_Just ) ( ( ( Tuple2_1523_Tuple2 ) ( ( dref917 .stuff .Maybe_487_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_487_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1524 (    struct Zip_1522  iterable1094 ,    bool  base1096 ,   struct envunion1526  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct Zip_1522  it1100 = ( (  into_dash_iter1527 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_1528  dref1101 = ( (  next1529 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_1528_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_1528_Just_t ) {
                struct envunion1526  temp1530 = (  fun1098 );
                x1099 = ( temp1530.fun ( &temp1530.env ,  ( dref1101 .stuff .Maybe_1528_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1531 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1531);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1532;
    return (  temp1532 );
}

static  bool   lam1533 (   struct env1525* env ,    struct Tuple2_1523  e1129 ,    bool  x1131 ) {
    return ( ( ( env->fun1127 ) ( (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1521 (    struct Zip_1522  it1125 ,    bool (*  fun1127 )(    struct Tuple2_1523  ) ) {
    struct env1525 envinst1525 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1524 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1526){ .fun = (  bool  (*) (  struct env1525*  ,    struct Tuple2_1523  ,    bool  ) )lam1533 , .env =  envinst1525 } ) ) );
}

static  struct Zip_1522   zip1534 (    struct Slice_11  left923 ,    struct Slice_11  right925 ) {
    struct SliceIter_479  left_dash_it926 = ( (  into_dash_iter491 ) ( (  left923 ) ) );
    struct SliceIter_479  right_dash_it927 = ( (  into_dash_iter491 ) ( (  right925 ) ) );
    return ( (struct Zip_1522) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  bool   lam1535 (    struct Tuple2_1523  dref1864 ) {
    return (  eq312 ( ( dref1864 .field0 ) , ( dref1864 .field1 ) ) );
}

static  bool   eq1520 (    struct Slice_11  l1861 ,    struct Slice_11  r1863 ) {
    if ( ( !  eq408 ( ( (  l1861 ) .f_count ) , ( (  r1863 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1521 ) ( ( (  zip1534 ) ( (  l1861 ) ,  (  r1863 ) ) ) ,  (  lam1535 ) ) );
}

static  struct Maybe_255   find_dash_slice1517 (    struct Slice_11  haystack1914 ,    struct Slice_11  needle1916 ) {
    struct RangeIter_162  temp1518 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  size_dash_i32338 ) ( ( (  haystack1914 ) .f_count ) ) ) , ( (  size_dash_i32338 ) ( ( (  needle1916 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1519 =  next165 (&temp1518);
        if (  __cond1519 .tag == 0 ) {
            break;
        }
        int32_t  i1918 =  __cond1519 .stuff .Maybe_164_Just_s .field0;
        if ( (  eq1520 ( ( (  subslice507 ) ( (  haystack1914 ) ,  ( (  i32_dash_size421 ) ( (  i1918 ) ) ) ,  (  op_dash_add320 ( ( (  i32_dash_size421 ) ( (  i1918 ) ) ) , ( (  needle1916 ) .f_count ) ) ) ) ) , (  needle1916 ) ) ) ) {
            return ( ( Maybe_255_Just ) ( ( (  i32_dash_size421 ) ( (  i1918 ) ) ) ) );
        }
    }
    return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
}

static  struct StrView_27   byte_dash_substr_dash_from1536 (    struct StrView_27  s2195 ,    size_t  from2197 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from534 ) ( ( (  s2195 ) .f_contents ) ,  (  from2197 ) ) ) } );
}

static  struct Maybe_255   search_dash_on_dash_line1516 (   struct env1513* env ,    struct Pos_26  pos4357 ) {
    return ( (  find_dash_slice1517 ) ( ( ( (  byte_dash_substr_dash_from1536 ) ( ( (  line1102 ) ( ( ( * ( env->pane4350 ) ) .f_buf ) ,  ( (  pos4357 ) .f_line ) ) ) ,  ( (  i32_dash_size421 ) ( ( (  pos4357 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4354 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1542 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1543 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1541 (    int32_t  l1230 ,    int32_t  d1232 ) {
    int32_t  r1233 = (  op_dash_div1542 ( (  l1230 ) , (  d1232 ) ) );
    int32_t  m1234 = (  op_dash_sub173 ( (  l1230 ) , (  op_dash_mul1543 ( (  r1233 ) , (  d1232 ) ) ) ) );
    if ( (  cmp166 ( (  m1234 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add168 ( (  d1232 ) , (  m1234 ) ) );
    } else {
        return (  m1234 );
    }
}

struct envunion1545 {
    struct Maybe_255  (*fun) (  struct env1513*  ,    struct Pos_26  );
    struct env1513 env;
};

static  struct Maybe_1511   search_dash_from1512 (    struct Pane_229 *  pane4350 ,    struct Pos_26  pos4352 ,    struct StrView_27  query4354 ) {
    struct env1513 envinst1513 = {
        .query4354 =  query4354 ,
        .pane4350 =  pane4350 ,
    };
    struct envunion1515  temp1514 = ( (struct envunion1515){ .fun = (  struct Maybe_255  (*) (  struct env1513*  ,    struct Pos_26  ) )search_dash_on_dash_line1516 , .env =  envinst1513 } );
    struct Maybe_255  dref4358 = ( temp1514.fun ( &temp1514.env ,  (  pos4352 ) ) );
    if ( dref4358.tag == Maybe_255_Just_t ) {
        struct Pos_26  temp1537 = (  pos4352 );
        temp1537 .  f_bi = (  op_dash_add168 ( ( (  pos4352 ) .f_bi ) , ( (  size_dash_i32338 ) ( ( dref4358 .stuff .Maybe_255_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4360 = ( temp1537 );
        struct Pos_26  temp1538 = (  pos4352 );
        temp1538 .  f_bi = (  op_dash_sub173 ( (  op_dash_add168 ( ( (  pos4352 ) .f_bi ) , ( (  size_dash_i32338 ) ( (  op_dash_add320 ( ( dref4358 .stuff .Maybe_255_Just_s .field0 ) , ( (  num_dash_bytes1135 ) ( (  query4354 ) ) ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4361 = ( temp1538 );
        return ( ( Maybe_1511_Just ) ( ( ( Tuple2_240_Tuple2 ) ( (  sel_dash_pos4360 ) ,  (  cur_dash_pos4361 ) ) ) ) );
    }
    else {
        if ( dref4358.tag == Maybe_255_None_t ) {
            int32_t  num_dash_lines4362 = ( (  num_dash_lines1142 ) ( ( ( * (  pane4350 ) ) .f_buf ) ) );
            struct RangeIter_162  temp1539 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  (  num_dash_lines4362 ) ) ) );
            while (true) {
                struct Maybe_164  __cond1540 =  next165 (&temp1539);
                if (  __cond1540 .tag == 0 ) {
                    break;
                }
                int32_t  i4364 =  __cond1540 .stuff .Maybe_164_Just_s .field0;
                int32_t  line4365 = ( (  mod1541 ) ( (  op_dash_add168 ( ( (  pos4352 ) .f_line ) , (  i4364 ) ) ) ,  (  num_dash_lines4362 ) ) );
                struct envunion1545  temp1544 = ( (struct envunion1545){ .fun = (  struct Maybe_255  (*) (  struct env1513*  ,    struct Pos_26  ) )search_dash_on_dash_line1516 , .env =  envinst1513 } );
                struct Maybe_255  dref4366 = ( temp1544.fun ( &temp1544.env ,  ( (struct Pos_26) { .f_line = (  line4365 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ) );
                if ( dref4366.tag == Maybe_255_Just_t ) {
                    struct Pos_26  sel_dash_pos4368 = ( (struct Pos_26) { .f_line = (  line4365 ) , .f_bi = ( (  size_dash_i32338 ) ( ( dref4366 .stuff .Maybe_255_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4369 = ( (struct Pos_26) { .f_line = (  line4365 ) , .f_bi = (  op_dash_sub173 ( ( (  size_dash_i32338 ) ( (  op_dash_add320 ( ( dref4366 .stuff .Maybe_255_Just_s .field0 ) , ( (  num_dash_bytes1135 ) ( (  query4354 ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1511_Just ) ( ( ( Tuple2_240_Tuple2 ) ( (  sel_dash_pos4368 ) ,  (  cur_dash_pos4369 ) ) ) ) );
                }
                else {
                    if ( dref4366.tag == Maybe_255_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1511) { .tag = Maybe_1511_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1510 (    struct Editor_257 *  ed4459 ) {
    struct Maybe_94  dref4460 = ( ( * (  ed4459 ) ) .f_search_dash_term );
    if ( dref4460.tag == Maybe_94_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4460.tag == Maybe_94_Just_t ) {
            struct Maybe_1511  dref4462 = ( (  search_dash_from1512 ) ( ( (  pane1139 ) ( (  ed4459 ) ) ) ,  ( (  max_dash_pos1484 ) ( ( (  pane1139 ) ( (  ed4459 ) ) ) ) ) ,  ( dref4460 .stuff .Maybe_94_Just_s .field0 ) ) );
            if ( dref4462.tag == Maybe_1511_None_t ) {
            }
            else {
                if ( dref4462.tag == Maybe_1511_Just_t ) {
                    ( (  set_dash_cursors1096 ) ( ( (  pane1139 ) ( (  ed4459 ) ) ) ,  ( dref4462 .stuff .Maybe_1511_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4462 .stuff .Maybe_1511_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1097_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_255   find_dash_last_dash_occurence_dash_of_dash_slice1548 (    struct Slice_11  haystack1921 ,    struct Slice_11  needle1923 ) {
    struct Maybe_255  occ1924 = ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    struct RangeIter_162  temp1549 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  size_dash_i32338 ) ( ( (  haystack1921 ) .f_count ) ) ) , ( (  size_dash_i32338 ) ( ( (  needle1923 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1550 =  next165 (&temp1549);
        if (  __cond1550 .tag == 0 ) {
            break;
        }
        int32_t  i1926 =  __cond1550 .stuff .Maybe_164_Just_s .field0;
        if ( (  eq1520 ( ( (  subslice507 ) ( (  haystack1921 ) ,  ( (  i32_dash_size421 ) ( (  i1926 ) ) ) ,  (  op_dash_add320 ( ( (  i32_dash_size421 ) ( (  i1926 ) ) ) , ( (  needle1923 ) .f_count ) ) ) ) ) , (  needle1923 ) ) ) ) {
            occ1924 = ( ( Maybe_255_Just ) ( ( (  i32_dash_size421 ) ( (  i1926 ) ) ) ) );
        }
    }
    return (  occ1924 );
}

static  struct Maybe_1511   search_dash_back1547 (    struct Pane_229 *  pane4372 ,    struct Pos_26  pos4374 ,    struct StrView_27  query4376 ) {
    struct Maybe_255  dref4377 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1548 ) ( ( ( (  byte_dash_substr520 ) ( ( (  line1102 ) ( ( ( * (  pane4372 ) ) .f_buf ) ,  ( (  pos4374 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size421 ) ( ( (  pos4374 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4376 ) .f_contents ) ) );
    if ( dref4377.tag == Maybe_255_Just_t ) {
        struct Pos_26  temp1551 = (  pos4374 );
        temp1551 .  f_bi = ( (  size_dash_i32338 ) ( ( dref4377 .stuff .Maybe_255_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4379 = ( temp1551 );
        struct Pos_26  temp1552 = (  pos4374 );
        temp1552 .  f_bi = (  op_dash_sub173 ( ( (  size_dash_i32338 ) ( (  op_dash_add320 ( ( dref4377 .stuff .Maybe_255_Just_s .field0 ) , ( (  num_dash_bytes1135 ) ( (  query4376 ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4380 = ( temp1552 );
        return ( ( Maybe_1511_Just ) ( ( ( Tuple2_240_Tuple2 ) ( (  sel_dash_pos4379 ) ,  (  cur_dash_pos4380 ) ) ) ) );
    }
    else {
        if ( dref4377.tag == Maybe_255_None_t ) {
            int32_t  num_dash_lines4381 = ( (  num_dash_lines1142 ) ( ( ( * (  pane4372 ) ) .f_buf ) ) );
            struct RangeIter_162  temp1553 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  (  num_dash_lines4381 ) ) ) );
            while (true) {
                struct Maybe_164  __cond1554 =  next165 (&temp1553);
                if (  __cond1554 .tag == 0 ) {
                    break;
                }
                int32_t  i4383 =  __cond1554 .stuff .Maybe_164_Just_s .field0;
                int32_t  line4384 = ( (  mod1541 ) ( (  op_dash_sub173 ( ( (  pos4374 ) .f_line ) , (  i4383 ) ) ) ,  (  num_dash_lines4381 ) ) );
                struct Maybe_255  dref4385 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1548 ) ( ( ( (  line1102 ) ( ( ( * (  pane4372 ) ) .f_buf ) ,  (  line4384 ) ) ) .f_contents ) ,  ( (  query4376 ) .f_contents ) ) );
                if ( dref4385.tag == Maybe_255_Just_t ) {
                    struct Pos_26  sel_dash_pos4387 = ( (struct Pos_26) { .f_line = (  line4384 ) , .f_bi = ( (  size_dash_i32338 ) ( ( dref4385 .stuff .Maybe_255_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4388 = ( (struct Pos_26) { .f_line = (  line4384 ) , .f_bi = (  op_dash_sub173 ( ( (  size_dash_i32338 ) ( (  op_dash_add320 ( ( dref4385 .stuff .Maybe_255_Just_s .field0 ) , ( (  num_dash_bytes1135 ) ( (  query4376 ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1511_Just ) ( ( ( Tuple2_240_Tuple2 ) ( (  sel_dash_pos4387 ) ,  (  cur_dash_pos4388 ) ) ) ) );
                }
                else {
                    if ( dref4385.tag == Maybe_255_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1511) { .tag = Maybe_1511_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1546 (    struct Editor_257 *  ed4467 ) {
    struct Maybe_94  dref4468 = ( ( * (  ed4467 ) ) .f_search_dash_term );
    if ( dref4468.tag == Maybe_94_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4468.tag == Maybe_94_Just_t ) {
            struct Maybe_1511  dref4470 = ( (  search_dash_back1547 ) ( ( (  pane1139 ) ( (  ed4467 ) ) ) ,  ( (  min_dash_pos1495 ) ( ( (  pane1139 ) ( (  ed4467 ) ) ) ) ) ,  ( dref4468 .stuff .Maybe_94_Just_s .field0 ) ) );
            if ( dref4470.tag == Maybe_1511_None_t ) {
            }
            else {
                if ( dref4470.tag == Maybe_1511_Just_t ) {
                    ( (  set_dash_cursors1096 ) ( ( (  pane1139 ) ( (  ed4467 ) ) ) ,  ( dref4470 .stuff .Maybe_1511_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4470 .stuff .Maybe_1511_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1097_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1558 (   struct env141* env ,    struct TextBuf_114 *  self3899 ,    struct Cursors_33  before_dash_cursors3901 ) {
    struct Actions_115 *  actions3902 = ( & ( ( * (  self3899 ) ) .f_actions ) );
    ( (  trim_dash_actions1174 ) ( (  actions3902 ) ) );
    ( (  flush_dash_insert_dash_action1149 ) ( (  self3899 ) ) );
    ( (  assert646 ) ( (  eq1243 ( ( ( ( * (  self3899 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_116_NoChangeset ) ) ) ,  ( (  from_dash_string208 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al3903 = ( ( * (  self3899 ) ) .f_al );
    struct Changeset_32  temp1559 = ( (struct Changeset_32) { .f_parts = ( (  mk1272 ) ( (  al3903 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3901 ) } );
    struct Changeset_32 *  changeset3904 = ( &temp1559 );
    struct envunion142  temp1560 = ( (struct envunion142){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1283 , .env =  env->envinst28 } );
    ( temp1560.fun ( &temp1560.env ,  ( & ( ( * (  actions3902 ) ) .f_list ) ) ,  ( * (  changeset3904 ) ) ) );
    (*  actions3902 ) .f_input_dash_changeset = ( ChangesetInputType_116_CustomChangeset );
    (*  actions3902 ) .f_cur = (  op_dash_add320 ( ( ( * (  actions3902 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1200   head1566 (    struct List_23  it1143 ) {
    struct SliceIter_1193  temp1567 = ( (  into_dash_iter1195 ) ( (  it1143 ) ) );
    return ( (  next1201 ) ( ( &temp1567 ) ) );
}

static  bool   null1565 (    struct List_23  it1152 ) {
    struct Maybe_1200  dref1153 = ( (  head1566 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_1200_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1564 (    struct TextBuf_114 *  self3907 ) {
    ( (  flush_dash_insert_dash_action1149 ) ( (  self3907 ) ) );
    struct Actions_115 *  actions3908 = ( & ( ( * (  self3907 ) ) .f_actions ) );
    if ( ( (  null1565 ) ( ( ( * ( (  last_dash_ptr1245 ) ( ( (  to_dash_slice1247 ) ( ( ( * (  actions3908 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3908 ) .f_cur = (  op_dash_sub298 ( ( ( * (  actions3908 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3908 ) .f_input_dash_changeset = ( ChangesetInputType_116_NoChangeset );
        ( (  trim_dash_actions1174 ) ( (  actions3908 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1569 (    struct Maybe_34  x1276 ,    struct Pos_26 (*  fun1278 )(    struct Pos_26  ) ) {
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

static  struct Pos_26   lam1570 (    struct Pos_26  sel4317 ) {
    struct Pos_26  temp1571 = (  sel4317 );
    temp1571 .  f_bi = (  op_dash_add168 ( ( (  sel4317 ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) );
    return ( temp1571 );
}

static  enum Unit_8   indent_dash_selection1556 (   struct env226* env ,    struct Pane_229 *  self4313 ) {
    struct envunion227  temp1557 = ( (struct envunion227){ .fun = (  enum Unit_8  (*) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  ) )begin_dash_changeset1558 , .env =  env->envinst141 } );
    ( temp1557.fun ( &temp1557.env ,  ( ( * (  self4313 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4313 ) ) .f_cursor ) , .f_sel = ( ( * (  self4313 ) ) .f_sel ) } ) ) );
    struct RangeIter_162  temp1561 =  into_dash_iter163 ( ( (  to172 ) ( ( ( (  min_dash_pos1495 ) ( (  self4313 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1484 ) ( (  self4313 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_164  __cond1562 =  next165 (&temp1561);
        if (  __cond1562 .tag == 0 ) {
            break;
        }
        int32_t  line4315 =  __cond1562 .stuff .Maybe_164_Just_s .field0;
        struct envunion228  temp1563 = ( (struct envunion228){ .fun = (  enum Unit_8  (*) (  struct env224*  ,    struct Pane_229 *  ,    int32_t  ) )indent_dash_at1314 , .env =  env->envinst224 } );
        ( temp1563.fun ( &temp1563.env ,  (  self4313 ) ,  (  line4315 ) ) );
    }
    ( (  end_dash_changeset1564 ) ( ( ( * (  self4313 ) ) .f_buf ) ) );
    struct Pos_26  temp1568 = ( ( * (  self4313 ) ) .f_cursor );
    temp1568 .  f_bi = (  op_dash_add168 ( ( ( ( * (  self4313 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) );
    ( (  set_dash_cursors1096 ) ( (  self4313 ) ,  ( temp1568 ) ,  ( (  fmap_dash_maybe1569 ) ( ( ( * (  self4313 ) ) .f_sel ) ,  (  lam1570 ) ) ) ,  ( CursorMovement_1097_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1582 {
    bool  last_dash_char_dash_was_dash_tab4322;
    ;
    ;
};

struct envunion1583 {
    struct Pos_26  (*fun) (  struct env1582*  ,    struct Pos_26  );
    struct env1582 env;
};

static  struct Maybe_34   fmap_dash_maybe1581 (    struct Maybe_34  x1276 ,   struct envunion1583  fun1278 ) {
    struct Maybe_34  dref1279 = (  x1276 );
    if ( dref1279.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1279.tag == Maybe_34_Just_t ) {
            struct envunion1583  temp1584 = (  fun1278 );
            return ( ( Maybe_34_Just ) ( ( temp1584.fun ( &temp1584.env ,  ( dref1279 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1585 (   struct env1582* env ,    struct Pos_26  sel4326 ) {
    struct Pos_26  temp1586 = (  sel4326 );
    temp1586 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4322 ) ? (  op_dash_sub173 ( ( (  sel4326 ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) ) : ( (  sel4326 ) .f_bi ) );
    return ( temp1586 );
}

static  enum Unit_8   dedent_dash_selection1573 (   struct env232* env ,    struct Pane_229 *  self4320 ) {
    struct envunion234  temp1574 = ( (struct envunion234){ .fun = (  enum Unit_8  (*) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  ) )begin_dash_changeset1558 , .env =  env->envinst141 } );
    ( temp1574.fun ( &temp1574.env ,  ( ( * (  self4320 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4320 ) ) .f_cursor ) , .f_sel = ( ( * (  self4320 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1575 = ( (  min_dash_pos1495 ) ( (  self4320 ) ) );
    temp1575 .  f_bi = (  from_dash_integral67 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4321 = (  eq584 ( ( (  char_dash_at1346 ) ( (  self4320 ) ,  ( temp1575 ) ) ) , ( (  from_dash_charlike355 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1576 = ( (  max_dash_pos1484 ) ( (  self4320 ) ) );
    temp1576 .  f_bi = (  from_dash_integral67 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4322 = (  eq584 ( ( (  char_dash_at1346 ) ( (  self4320 ) ,  ( temp1576 ) ) ) , ( (  from_dash_charlike355 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_162  temp1577 =  into_dash_iter163 ( ( (  to172 ) ( ( ( (  min_dash_pos1495 ) ( (  self4320 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1484 ) ( (  self4320 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_164  __cond1578 =  next165 (&temp1577);
        if (  __cond1578 .tag == 0 ) {
            break;
        }
        int32_t  line4324 =  __cond1578 .stuff .Maybe_164_Just_s .field0;
        if ( (  eq584 ( ( (  char_dash_at1346 ) ( (  self4320 ) ,  ( (struct Pos_26) { .f_line = (  line4324 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike355 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion233  temp1579 = ( (struct envunion233){ .fun = (  struct Maybe_215  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  ) )change1173 , .env =  env->envinst136 } );
            ( temp1579.fun ( &temp1579.env ,  ( ( * (  self4320 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4324 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4324 ) , .f_bi = (  from_dash_integral67 ( 1 ) ) } ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_215) { .tag = Maybe_215_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1564 ) ( ( ( * (  self4320 ) ) .f_buf ) ) );
    struct Pos_26  temp1580 = ( ( * (  self4320 ) ) .f_cursor );
    temp1580 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4321 ) ? (  op_dash_sub173 ( ( ( ( * (  self4320 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) ) : ( ( ( * (  self4320 ) ) .f_cursor ) .f_bi ) );
    struct env1582 envinst1582 = {
        .last_dash_char_dash_was_dash_tab4322 =  last_dash_char_dash_was_dash_tab4322 ,
    };
    ( (  set_dash_cursors1096 ) ( (  self4320 ) ,  ( temp1580 ) ,  ( (  fmap_dash_maybe1581 ) ( ( ( * (  self4320 ) ) .f_sel ) ,  ( (struct envunion1583){ .fun = (  struct Pos_26  (*) (  struct env1582*  ,    struct Pos_26  ) )lam1585 , .env =  envinst1582 } ) ) ) ,  ( CursorMovement_1097_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1590 (  ) {
    int32_t  temp1591;
    return (  temp1591 );
}

static  int32_t   or_dash_fail1589 (    struct Maybe_164  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_164  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_164_None_t ) {
        ( (  panic1217 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1590 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_164_Just_t ) {
            return ( dref1730 .stuff .Maybe_164_Just_s .field0 );
        }
    }
}

struct env1594 {
    ;
    struct Pane_229 *  self4335;
};

struct envunion1595 {
    int32_t  (*fun) (  struct env1594*  ,    int32_t  );
    struct env1594 env;
};

struct Map_1593 {
    struct RangeIter_162  field0;
    struct envunion1595  field1;
};

static struct Map_1593 Map_1593_Map (  struct RangeIter_162  field0 , struct envunion1595  field1 ) {
    return ( struct Map_1593 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1593   into_dash_iter1597 (    struct Map_1593  self797 ) {
    return (  self797 );
}

static  struct Maybe_164   next1598 (    struct Map_1593 *  dref799 ) {
    struct Maybe_164  dref802 = ( (  next165 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_164_None_t ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_164_Just_t ) {
            struct envunion1595  temp1599 = ( (* dref799 ) .field1 );
            return ( ( Maybe_164_Just ) ( ( temp1599.fun ( &temp1599.env ,  ( dref802 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_164   reduce1596 (    struct Map_1593  iterable1094 ,    struct Maybe_164  base1096 ,    struct Maybe_164 (*  fun1098 )(    int32_t  ,    struct Maybe_164  ) ) {
    struct Maybe_164  x1099 = (  base1096 );
    struct Map_1593  it1100 = ( (  into_dash_iter1597 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next1598 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1600 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1600);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_164  temp1601;
    return (  temp1601 );
}

struct env1604 {
    ;
    int32_t  x1244;
};

struct envunion1605 {
    struct Maybe_164  (*fun) (  struct env1604*  ,    int32_t  );
    struct env1604 env;
};

static  struct Maybe_164   maybe1603 (    struct Maybe_164  x1283 ,   struct envunion1605  fun1285 ,    struct Maybe_164  default1287 ) {
    struct envunion1605  temp1606 = (  fun1285 );
    return ( {  struct Maybe_164  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_164_Just_t ? ( temp1606.fun ( &temp1606.env ,  ( dref1288 .stuff .Maybe_164_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  struct Maybe_164   lam1607 (   struct env1604* env ,    int32_t  lm1313 ) {
    return ( ( Maybe_164_Just ) ( ( (  min637 ) ( (  lm1313 ) ,  ( env->x1244 ) ) ) ) );
}

static  struct Maybe_164   lam1602 (    int32_t  x1244 ,    struct Maybe_164  last_dash_min1246 ) {
    struct env1604 envinst1604 = {
        .x1244 =  x1244 ,
    };
    return ( (  maybe1603 ) ( (  last_dash_min1246 ) ,  ( (struct envunion1605){ .fun = (  struct Maybe_164  (*) (  struct env1604*  ,    int32_t  ) )lam1607 , .env =  envinst1604 } ) ,  ( ( Maybe_164_Just ) ( (  x1244 ) ) ) ) );
}

static  struct Maybe_164   minimum1592 (    struct Map_1593  it1242 ) {
    return ( (  reduce1596 ) ( (  it1242 ) ,  ( (struct Maybe_164) { .tag = Maybe_164_None_t } ) ,  (  lam1602 ) ) );
}

static  struct Map_1593   map1608 (    struct Range_159  iterable806 ,   struct envunion1595  fun808 ) {
    struct RangeIter_162  it809 = ( (  into_dash_iter163 ) ( (  iterable806 ) ) );
    return ( ( Map_1593_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  int32_t   lam1609 (   struct env1594* env ,    int32_t  ln4339 ) {
    return ( (  indent_dash_at_dash_line1151 ) ( ( env->self4335 ) ,  (  ln4339 ) ) );
}

struct env1611 {
    ;
    ;
    struct Pane_229 *  self4335;
};

struct envunion1612 {
    bool  (*fun) (  struct env1611*  ,    int32_t  );
    struct env1611 env;
};

struct env1614 {
    struct envunion1612  fun1127;
};

struct envunion1615 {
    bool  (*fun) (  struct env1614*  ,    int32_t  ,    bool  );
    struct env1614 env;
};

static  bool   reduce1613 (    struct Range_159  iterable1094 ,    bool  base1096 ,   struct envunion1615  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1615  temp1616 = (  fun1098 );
                x1099 = ( temp1616.fun ( &temp1616.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1617 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1617);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1618;
    return (  temp1618 );
}

static  bool   lam1619 (   struct env1614* env ,    int32_t  e1129 ,    bool  x1131 ) {
    struct envunion1612  temp1620 = ( env->fun1127 );
    return ( ( temp1620.fun ( &temp1620.env ,  (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1610 (    struct Range_159  it1125 ,   struct envunion1612  fun1127 ) {
    struct env1614 envinst1614 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1613 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1615){ .fun = (  bool  (*) (  struct env1614*  ,    int32_t  ,    bool  ) )lam1619 , .env =  envinst1614 } ) ) );
}

static  bool   is_dash_just1622 (    struct Maybe_1511  m1261 ) {
    struct Maybe_1511  dref1262 = (  m1261 );
    if ( dref1262.tag == Maybe_1511_None_t ) {
        return ( false );
    }
    else {
        if ( dref1262.tag == Maybe_1511_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1624 (    struct Char_65  c4267 ) {
    return ( ( !  eq584 ( (  c4267 ) , ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1345 ) ( (  c4267 ) ) ) );
}

static  struct Maybe_1511   line_dash_begins_dash_with_dash_comment1623 (    struct Pane_229 *  self4261 ,    int32_t  line4263 ) {
    int32_t  indent4264 = ( (  indent_dash_at_dash_line1151 ) ( (  self4261 ) ,  (  line4263 ) ) );
    if ( (  eq584 ( ( (  char_dash_at1346 ) ( (  self4261 ) ,  ( (  mk673 ) ( (  line4263 ) ,  (  indent4264 ) ) ) ) ) , ( (  from_dash_charlike355 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4265 = (  op_dash_add168 ( (  indent4264 ) , (  from_dash_integral67 ( 1 ) ) ) );
        while ( ( (  lam1624 ) ( ( (  char_dash_at1346 ) ( (  self4261 ) ,  ( (  mk673 ) ( (  line4263 ) ,  (  i4265 ) ) ) ) ) ) ) ) {
            i4265 = (  op_dash_add168 ( (  i4265 ) , (  from_dash_integral67 ( 1 ) ) ) );
        }
        return ( ( Maybe_1511_Just ) ( ( ( Tuple2_240_Tuple2 ) ( ( (  mk673 ) ( (  line4263 ) ,  (  indent4264 ) ) ) ,  ( (  mk673 ) ( (  line4263 ) ,  (  i4265 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1511) { .tag = Maybe_1511_None_t } );
    }
}

static  bool   lam1621 (   struct env1611* env ,    int32_t  ln4342 ) {
    return ( (  is_dash_just1622 ) ( ( (  line_dash_begins_dash_with_dash_comment1623 ) ( ( env->self4335 ) ,  (  ln4342 ) ) ) ) );
}

static  struct Tuple2_240   undefined1630 (  ) {
    struct Tuple2_240  temp1631;
    return (  temp1631 );
}

static  struct Tuple2_240   or_dash_fail1629 (    struct Maybe_1511  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_1511  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1511_None_t ) {
        ( (  panic1217 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1630 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1511_Just_t ) {
            return ( dref1730 .stuff .Maybe_1511_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1588 (   struct env237* env ,    struct Pane_229 *  self4335 ) {
    int32_t  from_dash_line4336 = ( ( (  min_dash_pos1495 ) ( (  self4335 ) ) ) .f_line );
    int32_t  to_dash_line4337 = ( ( (  max_dash_pos1484 ) ( (  self4335 ) ) ) .f_line );
    struct env1594 envinst1594 = {
        .self4335 =  self4335 ,
    };
    int32_t  min_dash_indent4340 = ( (  or_dash_fail1589 ) ( ( (  minimum1592 ) ( ( (  map1608 ) ( ( (  to172 ) ( (  from_dash_line4336 ) ,  (  to_dash_line4337 ) ) ) ,  ( (struct envunion1595){ .fun = (  int32_t  (*) (  struct env1594*  ,    int32_t  ) )lam1609 , .env =  envinst1594 } ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1611 envinst1611 = {
        .self4335 =  self4335 ,
    };
    bool  all_dash_have_dash_comment4343 = ( (  all1610 ) ( ( (  to172 ) ( (  from_dash_line4336 ) ,  (  to_dash_line4337 ) ) ) ,  ( (struct envunion1612){ .fun = (  bool  (*) (  struct env1611*  ,    int32_t  ) )lam1621 , .env =  envinst1611 } ) ) );
    struct envunion241  temp1625 = ( (struct envunion241){ .fun = (  enum Unit_8  (*) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  ) )begin_dash_changeset1558 , .env =  env->envinst141 } );
    ( temp1625.fun ( &temp1625.env ,  ( ( * (  self4335 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4335 ) ) .f_cursor ) , .f_sel = ( ( * (  self4335 ) ) .f_sel ) } ) ) );
    struct RangeIter_162  temp1626 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_line4336 ) ,  (  to_dash_line4337 ) ) ) );
    while (true) {
        struct Maybe_164  __cond1627 =  next165 (&temp1626);
        if (  __cond1627 .tag == 0 ) {
            break;
        }
        int32_t  line4345 =  __cond1627 .stuff .Maybe_164_Just_s .field0;
        struct Char_65  comment_dash_str4346 = ( (  from_dash_charlike355 ) ( ( "#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4343 ) ) ) {
            ( (  set_dash_cursors1096 ) ( (  self4335 ) ,  ( (  mk673 ) ( (  line4345 ) ,  (  min_dash_indent4340 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_NoChanges ) ) );
            struct envunion238  temp1628 = ( (struct envunion238){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_229 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1171 , .env =  env->envinst213 } );
            ( temp1628.fun ( &temp1628.env ,  (  self4335 ) ,  ( (  from_dash_string208 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_240  tup4347 = ( (  or_dash_fail1629 ) ( ( (  line_dash_begins_dash_with_dash_comment1623 ) ( (  self4335 ) ,  (  line4345 ) ) ) ,  ( (  from_dash_string208 ) ( ( "(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion239  temp1632 = ( (struct envunion239){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1415 , .env =  env->envinst222 } );
            ( temp1632.fun ( &temp1632.env ,  (  self4335 ) ,  ( ( Tuple2_240_Tuple2 ) ( ( (  fst1406 ) ( (  tup4347 ) ) ) ,  ( (  snd1407 ) ( (  tup4347 ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1564 ) ( ( ( * (  self4335 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1094 (   struct env262* env ,    struct Editor_257 *  ed4475 ,    struct Key_278  key4477 ) {
    struct Key_278  dref4478 = (  key4477 );
    if ( dref4478.tag == Key_278_Char_t ) {
        if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4475 ) .f_running = ( false );
        } else {
            if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1095 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ) );
            } else {
                if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1140 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ) );
                } else {
                    if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1143 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
                    } else {
                        if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1147 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
                        } else {
                            if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1148 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( Mode_230_Insert ) ) );
                            } else {
                                if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1150 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ) );
                                    ( (  set_dash_mode1148 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( Mode_230_Insert ) ) );
                                } else {
                                    if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1168 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ) );
                                        ( (  set_dash_mode1148 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( Mode_230_Insert ) ) );
                                    } else {
                                        if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_229 *  pane4480 = ( (  pane1139 ) ( (  ed4475 ) ) );
                                            int32_t  indent4481 = ( (  indent_dash_at_dash_line1151 ) ( (  pane4480 ) ,  ( ( ( * (  pane4480 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1168 ) ( (  pane4480 ) ) );
                                            struct envunion263  temp1170 = ( (struct envunion263){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_229 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1171 , .env =  env->envinst213 } );
                                            ( temp1170.fun ( &temp1170.env ,  (  pane4480 ) ,  ( (  from_dash_charlike1233 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1140 ) ( (  pane4480 ) ) );
                                            struct envunion271  temp1309 = ( (struct envunion271){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Pane_229 *  ,    int32_t  ) )indent_dash_at_dash_current1310 , .env =  env->envinst235 } );
                                            ( temp1309.fun ( &temp1309.env ,  (  pane4480 ) ,  (  indent4481 ) ) );
                                            ( (  set_dash_mode1148 ) ( (  pane4480 ) ,  ( Mode_230_Insert ) ) );
                                        } else {
                                            if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_229 *  pane4482 = ( (  pane1139 ) ( (  ed4475 ) ) );
                                                int32_t  indent4483 = ( (  indent_dash_at_dash_line1151 ) ( (  pane4482 ) ,  ( ( ( * (  pane4482 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1316 ) ( (  pane4482 ) ) );
                                                struct envunion1319  temp1318 = ( (struct envunion1319){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_229 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1171 , .env =  env->envinst213 } );
                                                ( temp1318.fun ( &temp1318.env ,  (  pane4482 ) ,  ( (  from_dash_charlike1233 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1321  temp1320 = ( (struct envunion1321){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Pane_229 *  ,    int32_t  ) )indent_dash_at_dash_current1310 , .env =  env->envinst235 } );
                                                ( temp1320.fun ( &temp1320.env ,  (  pane4482 ) ,  (  indent4483 ) ) );
                                                ( (  set_dash_mode1148 ) ( (  pane4482 ) ,  ( Mode_230_Insert ) ) );
                                            } else {
                                                if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1322 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( MoveDirection_1323_MoveFwd ) ,  ( MoveTarget_1324_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1322 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( MoveDirection_1323_MoveFwd ) ,  ( MoveTarget_1324_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1322 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( MoveDirection_1323_MoveBwd ) ,  ( MoveTarget_1324_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion267  temp1358 = ( (struct envunion267){ .fun = (  enum Unit_8  (*) (  struct env220*  ,    struct Pane_229 *  ) )redo1359 , .env =  env->envinst220 } );
                                                                ( temp1358.fun ( &temp1358.env ,  ( (  pane1139 ) ( (  ed4475 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion266  temp1383 = ( (struct envunion266){ .fun = (  enum Unit_8  (*) (  struct env218*  ,    struct Pane_229 *  ) )undo1384 , .env =  env->envinst218 } );
                                                                    ( temp1383.fun ( &temp1383.env ,  ( (  pane1139 ) ( (  ed4475 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion270  temp1401 = ( (struct envunion270){ .fun = (  enum Unit_8  (*) (  struct env242*  ,    struct Editor_257 *  ) )copy_dash_selection_dash_to_dash_clipboard1402 , .env =  env->envinst242 } );
                                                                        ( temp1401.fun ( &temp1401.env ,  (  ed4475 ) ) );
                                                                        struct envunion269  temp1414 = ( (struct envunion269){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1415 , .env =  env->envinst222 } );
                                                                        ( temp1414.fun ( &temp1414.env ,  ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( (  selection1403 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1148 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( Mode_230_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1423  temp1422 = ( (struct envunion1423){ .fun = (  enum Unit_8  (*) (  struct env242*  ,    struct Editor_257 *  ) )copy_dash_selection_dash_to_dash_clipboard1402 , .env =  env->envinst242 } );
                                                                            ( temp1422.fun ( &temp1422.env ,  (  ed4475 ) ) );
                                                                            struct envunion1425  temp1424 = ( (struct envunion1425){ .fun = (  enum Unit_8  (*) (  struct env222*  ,    struct Pane_229 *  ,    struct Tuple2_240  ,    struct StrView_27  ) )replace_dash_selection1415 , .env =  env->envinst222 } );
                                                                            ( temp1424.fun ( &temp1424.env ,  ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( (  selection1403 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ) ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1148 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( Mode_230_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1427  temp1426 = ( (struct envunion1427){ .fun = (  enum Unit_8  (*) (  struct env242*  ,    struct Editor_257 *  ) )copy_dash_selection_dash_to_dash_clipboard1402 , .env =  env->envinst242 } );
                                                                                ( temp1426.fun ( &temp1426.env ,  (  ed4475 ) ) );
                                                                                size_t  bytes_dash_yanked4484 = ( (  num_dash_bytes1135 ) ( ( (  or_dash_else559 ) ( ( ( * (  ed4475 ) ) .f_clipboard ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion272  temp1428 = ( (struct envunion272){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Editor_257 *  ,    struct StrConcat_86  ) )set_dash_msg1429 , .env =  env->envinst244 } );
                                                                                ( temp1428.fun ( &temp1428.env ,  (  ed4475 ) ,  ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4484 ) ) ) ,  ( (  from_dash_string208 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1479 envinst1479 = {
                                                                                        .ed4475 =  ed4475 ,
                                                                                        .envinst222 = env->envinst222 ,
                                                                                    };
                                                                                    ( (  if_dash_just1478 ) ( ( ( * (  ed4475 ) ) .f_clipboard ) ,  ( (struct envunion1481){ .fun = (  enum Unit_8  (*) (  struct env1479*  ,    struct StrView_27  ) )lam1483 , .env =  envinst1479 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1490 envinst1490 = {
                                                                                            .ed4475 =  ed4475 ,
                                                                                            .envinst222 = env->envinst222 ,
                                                                                        };
                                                                                        ( (  if_dash_just1489 ) ( ( ( * (  ed4475 ) ) .f_clipboard ) ,  ( (struct envunion1492){ .fun = (  enum Unit_8  (*) (  struct env1490*  ,    struct StrView_27  ) )lam1494 , .env =  envinst1490 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1499 envinst1499 = {
                                                                                                .envinst222 = env->envinst222 ,
                                                                                                .ed4475 =  ed4475 ,
                                                                                            };
                                                                                            ( (  if_dash_just1498 ) ( ( ( * (  ed4475 ) ) .f_clipboard ) ,  ( (struct envunion1501){ .fun = (  enum Unit_8  (*) (  struct env1499*  ,    struct StrView_27  ) )lam1503 , .env =  envinst1499 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1505 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1148 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( Mode_230_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1509 ) ( ( ( ( * (  ed4475 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4475 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4475 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4475 ) .f_mode = ( ( EditorMode_258_Cmd ) ( ( ( * ( (  pane1139 ) ( (  ed4475 ) ) ) ) .f_cursor ) ,  ( (  mk1433 ) ( ( ( * (  ed4475 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4475 ) .f_mode = ( ( EditorMode_258_Search ) ( ( ( * ( (  pane1139 ) ( (  ed4475 ) ) ) ) .f_cursor ) ,  ( (  mk1433 ) ( ( ( * (  ed4475 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1510 ) ( (  ed4475 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1546 ) ( (  ed4475 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion268  temp1555 = ( (struct envunion268){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Pane_229 *  ) )indent_dash_selection1556 , .env =  env->envinst226 } );
                                                                                                                        ( temp1555.fun ( &temp1555.env ,  ( (  pane1139 ) ( (  ed4475 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq951 ( ( dref4478 .stuff .Key_278_Char_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion265  temp1572 = ( (struct envunion265){ .fun = (  enum Unit_8  (*) (  struct env232*  ,    struct Pane_229 *  ) )dedent_dash_selection1573 , .env =  env->envinst232 } );
                                                                                                                            ( temp1572.fun ( &temp1572.env ,  ( (  pane1139 ) ( (  ed4475 ) ) ) ) );
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
        if ( dref4478.tag == Key_278_Escape_t ) {
            ( (  set_dash_mode1148 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  ( Mode_230_Normal ) ) );
        }
        else {
            if ( dref4478.tag == Key_278_Ctrl_t ) {
                if ( (  eq951 ( ( dref4478 .stuff .Key_278_Ctrl_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion264  temp1587 = ( (struct envunion264){ .fun = (  enum Unit_8  (*) (  struct env237*  ,    struct Pane_229 *  ) )toggle_dash_comment1588 , .env =  env->envinst237 } );
                    ( temp1587.fun ( &temp1587.env ,  ( (  pane1139 ) ( (  ed4475 ) ) ) ) );
                } else {
                    if ( (  eq951 ( ( dref4478 .stuff .Key_278_Ctrl_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1147 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  (  from_dash_integral67 ( 15 ) ) ) );
                    } else {
                        if ( (  eq951 ( ( dref4478 .stuff .Key_278_Ctrl_s .field0 ) , ( (  from_dash_charlike518 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1143 ) ( ( (  pane1139 ) ( (  ed4475 ) ) ) ,  (  from_dash_integral67 ( 15 ) ) ) );
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

struct envunion1634 {
    enum Unit_8  (*fun) (  struct env262*  ,    struct Editor_257 *  ,    struct Key_278  );
    struct env262 env;
};

static  enum Unit_8   backspace1638 (   struct env216* env ,    struct Pane_229 *  self4276 ) {
    struct Pos_26  prev_dash_cur4277 = ( ( * (  self4276 ) ) .f_cursor );
    ( (  move_dash_left1095 ) ( (  self4276 ) ) );
    struct envunion217  temp1639 = ( (struct envunion217){ .fun = (  struct Maybe_215  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_215  ) )change1173 , .env =  env->envinst136 } );
    ( temp1639.fun ( &temp1639.env ,  ( ( * (  self4276 ) ) .f_buf ) ,  ( ( * (  self4276 ) ) .f_cursor ) ,  (  prev_dash_cur4277 ) ,  ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_215) { .tag = Maybe_215_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1641 {
    char _arr [1];
};

static  char *   cast1642 (    struct Array_1641 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_965   as_dash_slice1640 (    struct Array_1641 *  arr2277 ) {
    return ( (struct Slice_965) { .f_ptr = ( (  cast1642 ) ( (  arr2277 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1641   from_dash_listlike1644 (    struct Array_1641  self330 ) {
    return (  self330 );
}

struct envunion1646 {
    enum Unit_8  (*fun) (  struct env213*  ,    struct Pane_229 *  ,    struct StrView_27  );
    struct env213 env;
};

struct Scanner_1649 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1649   mk_dash_from_dash_strview1651 (    struct StrView_27  s3200 ) {
    return ( (struct Scanner_1649) { .f_s = (  s3200 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1657 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1656 {
    struct TakeWhile_1657  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1656 Map_1656_Map (  struct TakeWhile_1657  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1656 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1656   into_dash_iter1659 (    struct Map_1656  self797 ) {
    return (  self797 );
}

static  struct Maybe_306   next1661 (    struct TakeWhile_1657 *  self965 ) {
    struct Maybe_306  mx966 = ( (  next690 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_306  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_306_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_306_Just ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
            }
        }
    }
}

static  struct Maybe_255   next1660 (    struct Map_1656 *  dref799 ) {
    struct Maybe_306  dref802 = ( (  next1661 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_306_Just_t ) {
            return ( ( Maybe_255_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_306_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1658 (    struct Map_1656  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1656  it1100 = ( (  into_dash_iter1659 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next1660 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1662 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1662);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1663;
    return (  temp1663 );
}

static  size_t   lam1664 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add320 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1655 (    struct Map_1656  it1111 ) {
    return ( (  reduce1658 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1664 ) ) );
}

static  struct TakeWhile_1657   into_dash_iter1666 (    struct TakeWhile_1657  self962 ) {
    return (  self962 );
}

static  struct Map_1656   map1665 (    struct TakeWhile_1657  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1657  it809 = ( (  into_dash_iter1666 ) ( (  iterable806 ) ) );
    return ( ( Map_1656_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1657   take_dash_while1667 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1657) { .f_it = ( (  into_dash_iter789 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1668 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1654 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1655 ) ( ( (  map1665 ) ( ( (  take_dash_while1667 ) ( ( (  chars702 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1668 ) ) ) ) );
    return ( (  byte_dash_substr520 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1653 (    struct Scanner_1649 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1654 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1536 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1135 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

static  enum Unit_8   drop_dash_str_dash_while1652 (    struct Scanner_1649 *  sc3278 ,    bool (*  fun3280 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1653 ) ( (  sc3278 ) ,  (  fun3280 ) ) );
    return ( Unit_8_Unit );
}

struct TakeWhile_1673 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1672 {
    struct TakeWhile_1673  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1672 Map_1672_Map (  struct TakeWhile_1673  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1672 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1672   into_dash_iter1675 (    struct Map_1672  self797 ) {
    return (  self797 );
}

static  struct Maybe_306   next1677 (    struct TakeWhile_1673 *  self965 ) {
    struct Maybe_306  mx966 = ( (  next690 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_306  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_306_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_306_Just ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
            }
        }
    }
}

static  struct Maybe_255   next1676 (    struct Map_1672 *  dref799 ) {
    struct Maybe_306  dref802 = ( (  next1677 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_306_Just_t ) {
            return ( ( Maybe_255_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_306_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1674 (    struct Map_1672  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1672  it1100 = ( (  into_dash_iter1675 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next1676 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1678 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1678);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1679;
    return (  temp1679 );
}

static  size_t   lam1680 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add320 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1671 (    struct Map_1672  it1111 ) {
    return ( (  reduce1674 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1680 ) ) );
}

static  struct TakeWhile_1673   into_dash_iter1682 (    struct TakeWhile_1673  self962 ) {
    return (  self962 );
}

static  struct Map_1672   map1681 (    struct TakeWhile_1673  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1673  it809 = ( (  into_dash_iter1682 ) ( (  iterable806 ) ) );
    return ( ( Map_1672_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1673   take_dash_while1683 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1673) { .f_it = ( (  into_dash_iter789 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1684 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1670 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1671 ) ( ( (  map1681 ) ( ( (  take_dash_while1683 ) ( ( (  chars702 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1684 ) ) ) ) );
    return ( (  byte_dash_substr520 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1669 (    struct Scanner_1649 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1670 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1536 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1135 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

static  bool   is_dash_not_dash_whitespace1685 (    struct Char_65  c2387 ) {
    return ( ! ( (  is_dash_whitespace1345 ) ( (  c2387 ) ) ) );
}

static  bool   eq1686 (    struct StrView_27  l2214 ,    struct StrView_27  r2216 ) {
    return (  eq1520 ( ( (  l2214 ) .f_contents ) , ( (  r2216 ) .f_contents ) ) );
}

static  struct Maybe_306   head1688 (    struct StrView_27  it1143 ) {
    struct StrViewIter_62  temp1689 = ( (  into_dash_iter703 ) ( (  it1143 ) ) );
    return ( (  next690 ) ( ( &temp1689 ) ) );
}

static  bool   null1687 (    struct StrView_27  it1152 ) {
    struct Maybe_306  dref1153 = ( (  head1688 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_306_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_94   maybe1692 (    struct Maybe_94  x1283 ,    struct Maybe_94 (*  fun1285 )(    struct StrView_27  ) ,    struct Maybe_94  default1287 ) {
    return ( {  struct Maybe_94  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_94_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_94_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  bool   is_dash_none1693 (    struct Maybe_94  m1265 ) {
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

struct StrConcatIter_1702 {
    struct StrViewIter_62  f_left;
    struct AppendIter_63  f_right;
};

struct env1703 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1704 {
    enum Unit_8  (*fun) (  struct env1703*  ,    struct Char_65  );
    struct env1703 env;
};

static  struct StrConcatIter_1702   into_dash_iter1706 (    struct StrConcatIter_1702  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_306   next1707 (    struct StrConcatIter_1702 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1701 (    struct StrConcatIter_1702  iterable1075 ,   struct envunion1704  fun1077 ) {
    struct StrConcatIter_1702  temp1705 = ( (  into_dash_iter1706 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1702 *  it1078 = ( &temp1705 );
    while ( ( true ) ) {
        struct Maybe_306  dref1079 = ( (  next1707 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_306_Just_t ) {
                struct envunion1704  temp1708 = (  fun1077 );
                ( temp1708.fun ( &temp1708.env ,  ( dref1079 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1702   into_dash_iter1710 (    struct StrConcat_81  dref1505 ) {
    return ( (struct StrConcatIter_1702) { .f_left = ( (  chars702 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars704 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1702   chars1709 (    struct StrConcat_81  self1516 ) {
    return ( (  into_dash_iter1710 ) ( (  self1516 ) ) );
}

static  enum Unit_8   lam1711 (   struct env1703* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1712 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1466 , .env =  env->envinst71 } );
    return ( temp1712.fun ( &temp1712.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1700 (   struct env77* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrConcat_81  s2780 ) {
    struct env1703 envinst1703 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1701 ) ( ( (  chars1709 ) ( (  s2780 ) ) ) ,  ( (struct envunion1704){ .fun = (  enum Unit_8  (*) (  struct env1703*  ,    struct Char_65  ) )lam1711 , .env =  envinst1703 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1698 (   struct env79* env ,    struct StrBuilder_73 *  builder2785 ,    struct StrView_27  s2787 ) {
    struct envunion80  temp1699 = ( (struct envunion80){ .fun = (  enum Unit_8  (*) (  struct env77*  ,    struct StrBuilder_73 *  ,    struct StrConcat_81  ) )write1700 , .env =  env->envinst77 } );
    return ( temp1699.fun ( &temp1699.env ,  (  builder2785 ) ,  ( ( StrConcat_81_StrConcat ) ( (  s2787 ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1714 (  ) {
    struct StrView_27  temp1715;
    return (  temp1715 );
}

static  struct StrView_27   or_dash_fail1713 (    struct Maybe_94  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_94  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_94_None_t ) {
        ( (  panic1217 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1714 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_94_Just_t ) {
            return ( dref1730 .stuff .Maybe_94_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_62   chars1718 (    struct StrBuilder_73  s2830 ) {
    return ( (  into_dash_iter703 ) ( ( (  as_dash_str1475 ) ( ( & (  s2830 ) ) ) ) ) );
}

static  struct StrViewIter_62   chars1717 (    struct StrBuilder_73 *  self1547 ) {
    return ( (  chars1718 ) ( ( * (  self1547 ) ) ) );
}

static  int32_t   fprintf_dash_char1719 (    FILE *  file765 ,    struct Char_65  c767 ) {
    struct CharDestructured_346  dref768 = ( (  destructure348 ) ( (  c767 ) ) );
    if ( dref768.tag == CharDestructured_346_Ref_t ) {
        return ( ( fprintf ) ( (  file765 ) ,  ( (  from_dash_string68 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32338 ) ( ( ( dref768 .stuff .CharDestructured_346_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref768 .stuff .CharDestructured_346_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref768.tag == CharDestructured_346_Scalar_t ) {
            if ( (  cmp179 ( ( ( dref768 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) , (  from_dash_integral174 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1720 = ( (  from_dash_string68 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp1720);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( ( fprintf ) ( (  file765 ) ,  ( (  from_dash_string68 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8153 ) ( ( ( dref768 .stuff .CharDestructured_346_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
}

static  bool   unreachable1721 (  ) {
    ( (  print1351 ) ( ( (  from_dash_string208 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1352 ) ( ) );
}

static  bool   try_dash_write_dash_contents1716 (    const char*  filename2976 ,    struct StrBuilder_73 *  contents2978 ) {
    FILE *  file2979 = ( ( fopen ) ( (  filename2976 ) ,  ( (  from_dash_charlike497 ) ( ( "w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null498 ) ( (  file2979 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_62  it2980 = ( (  chars1717 ) ( (  contents2978 ) ) );
    while ( ( true ) ) {
        struct Maybe_306  dref2981 = ( (  next690 ) ( ( & (  it2980 ) ) ) );
        if ( dref2981.tag == Maybe_306_None_t ) {
            ( ( fclose ) ( (  file2979 ) ) );
            return ( true );
        }
        else {
            if ( dref2981.tag == Maybe_306_Just_t ) {
                int32_t  chars_dash_written2983 = ( (  fprintf_dash_char1719 ) ( (  file2979 ) ,  ( dref2981 .stuff .Maybe_306_Just_s .field0 ) ) );
                if ( (  cmp166 ( (  chars_dash_written2983 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1721 ) ( ) );
}

static  enum Unit_8   free1722 (    struct StrBuilder_73 *  builder2822 ) {
    ( (  free606 ) ( ( & ( ( * (  builder2822 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1723 (    struct Maybe_94  m1261 ) {
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

static  struct Maybe_255   write_dash_to_dash_file1691 (   struct env119* env ,    struct TextBuf_114 *  self3780 ,    struct Maybe_94  altname3782 ) {
    struct Maybe_94  filename3783 = ( (  maybe1692 ) ( (  altname3782 ) ,  ( Maybe_94_Just ) ,  ( ( * (  self3780 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1693 ) ( (  filename3783 ) ) ) ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    enum CAllocator_10  al3784 = ( ( * (  self3780 ) ) .f_al );
    struct StrBuilder_73  temp1694 = ( (  mk1433 ) ( (  al3784 ) ) );
    struct StrBuilder_73 *  sb3785 = ( &temp1694 );
    struct RangeIter_162  temp1695 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  num_dash_lines1142 ) ( (  self3780 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1696 =  next165 (&temp1695);
        if (  __cond1696 .tag == 0 ) {
            break;
        }
        int32_t  ln3787 =  __cond1696 .stuff .Maybe_164_Just_s .field0;
        struct envunion120  temp1697 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env79*  ,    struct StrBuilder_73 *  ,    struct StrView_27  ) )writeln1698 , .env =  env->envinst79 } );
        ( temp1697.fun ( &temp1697.env ,  (  sb3785 ) ,  ( (  line1102 ) ( (  self3780 ) ,  (  ln3787 ) ) ) ) );
    }
    struct StrView_27  filename03788 = ( (  clone_dash_0463 ) ( ( (  or_dash_fail1713 ) ( (  filename3783 ) ,  ( (  from_dash_string208 ) ( ( "expect filename" ) ,  ( 15 ) ) ) ) ) ,  (  al3784 ) ) );
    bool  result3789 = ( (  try_dash_write_dash_contents1716 ) ( ( (  as_dash_const_dash_str509 ) ( (  filename03788 ) ) ) ,  (  sb3785 ) ) );
    ( (  free511 ) ( (  filename03788 ) ,  (  al3784 ) ) );
    ( (  free1722 ) ( (  sb3785 ) ) );
    if ( ( ! (  result3789 ) ) ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    if ( ( (  is_dash_just1723 ) ( (  altname3782 ) ) ) ) {
        struct Maybe_94  dref3790 = ( ( * (  self3780 ) ) .f_filename );
        if ( dref3790.tag == Maybe_94_Just_t ) {
            ( (  free511 ) ( ( dref3790 .stuff .Maybe_94_Just_s .field0 ) ,  (  al3784 ) ) );
        }
        else {
            if ( dref3790.tag == Maybe_94_None_t ) {
            }
        }
        (*  self3780 ) .f_filename = (  altname3782 );
    }
    return ( ( Maybe_255_Just ) ( ( (  num_dash_bytes1135 ) ( ( (  as_dash_str1475 ) ( (  sb3785 ) ) ) ) ) ) );
}

struct env1732 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1733 {
    enum Unit_8  (*fun) (  struct env1732*  ,    struct Char_65  );
    struct env1732 env;
};

static  enum Unit_8   for_dash_each1731 (    struct StrViewIter_62  iterable1075 ,   struct envunion1733  fun1077 ) {
    struct StrViewIter_62  temp1734 = ( (  into_dash_iter789 ) ( (  iterable1075 ) ) );
    struct StrViewIter_62 *  it1078 = ( &temp1734 );
    while ( ( true ) ) {
        struct Maybe_306  dref1079 = ( (  next690 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_306_Just_t ) {
                struct envunion1733  temp1735 = (  fun1077 );
                ( temp1735.fun ( &temp1735.env ,  ( dref1079 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1736 (   struct env1732* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1737 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1466 , .env =  env->envinst71 } );
    return ( temp1737.fun ( &temp1737.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1730 (   struct env76* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrView_27  s2780 ) {
    struct env1732 envinst1732 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1731 ) ( ( (  chars702 ) ( (  s2780 ) ) ) ,  ( (struct envunion1733){ .fun = (  enum Unit_8  (*) (  struct env1732*  ,    struct Char_65  ) )lam1736 , .env =  envinst1732 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1727 (   struct env89* env ,    struct StrView_27  s2836 ,    enum CAllocator_10  al2838 ) {
    struct StrBuilder_73  temp1728 = ( (  mk1433 ) ( (  al2838 ) ) );
    struct StrBuilder_73 *  sb2839 = ( &temp1728 );
    struct envunion90  temp1729 = ( (struct envunion90){ .fun = (  enum Unit_8  (*) (  struct env76*  ,    struct StrBuilder_73 *  ,    struct StrView_27  ) )write1730 , .env =  env->envinst76 } );
    ( temp1729.fun ( &temp1729.env ,  (  sb2839 ) ,  (  s2836 ) ) );
    struct envunion88  temp1738 = ( (struct envunion88){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1466 , .env =  env->envinst71 } );
    ( temp1738.fun ( &temp1738.env ,  (  sb2839 ) ,  ( (  nullchar506 ) ( ) ) ) );
    struct StrView_27  dynstr2840 = ( (  as_dash_str1475 ) ( (  sb2839 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2840 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub298 ( ( ( (  dynstr2840 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1725 (   struct env246* env ,    struct Editor_257 *  ed4417 ,    struct StrView_27  s4419 ) {
    ( (  reset_dash_msg1084 ) ( (  ed4417 ) ) );
    struct envunion247  temp1726 = ( (struct envunion247){ .fun = (  struct StrView_27  (*) (  struct env89*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1727 , .env =  env->envinst89 } );
    (*  ed4417 ) .f_msg = ( ( Maybe_94_Just ) ( ( temp1726.fun ( &temp1726.env ,  (  s4419 ) ,  ( ( * (  ed4417 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrCaseIter_1748 {
    enum {
        StrCaseIter_1748_StrCaseIter1_t,
        StrCaseIter_1748_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_62  field0;
        } StrCaseIter_1748_StrCaseIter1_s;
        struct {
            struct StrConcatIter_60  field0;
        } StrCaseIter_1748_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1748 StrCaseIter_1748_StrCaseIter1 (  struct StrViewIter_62  field0 ) {
    return ( struct StrCaseIter_1748 ) { .tag = StrCaseIter_1748_StrCaseIter1_t, .stuff = { .StrCaseIter_1748_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1748 StrCaseIter_1748_StrCaseIter2 (  struct StrConcatIter_60  field0 ) {
    return ( struct StrCaseIter_1748 ) { .tag = StrCaseIter_1748_StrCaseIter2_t, .stuff = { .StrCaseIter_1748_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1747 {
    struct StrViewIter_62  f_left;
    struct StrCaseIter_1748  f_right;
};

struct env1749 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1750 {
    enum Unit_8  (*fun) (  struct env1749*  ,    struct Char_65  );
    struct env1749 env;
};

static  struct StrConcatIter_1747   into_dash_iter1752 (    struct StrConcatIter_1747  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_306   next1754 (    struct StrCaseIter_1748 *  self1523 ) {
    struct StrCaseIter_1748 *  dref1524 = (  self1523 );
    if ( (* dref1524 ).tag == StrCaseIter_1748_StrCaseIter1_t ) {
        return ( (  next690 ) ( ( & ( (* dref1524 ) .stuff .StrCaseIter_1748_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1524 ).tag == StrCaseIter_1748_StrCaseIter2_t ) {
            return ( (  next688 ) ( ( & ( (* dref1524 ) .stuff .StrCaseIter_1748_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_306   next1753 (    struct StrConcatIter_1747 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next1754 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1746 (    struct StrConcatIter_1747  iterable1075 ,   struct envunion1750  fun1077 ) {
    struct StrConcatIter_1747  temp1751 = ( (  into_dash_iter1752 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1747 *  it1078 = ( &temp1751 );
    while ( ( true ) ) {
        struct Maybe_306  dref1079 = ( (  next1753 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_306_Just_t ) {
                struct envunion1750  temp1755 = (  fun1077 );
                ( temp1755.fun ( &temp1755.env ,  ( dref1079 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrCase_1759 {
    enum {
        StrCase_1759_StrCase1_t,
        StrCase_1759_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_1759_StrCase1_s;
        struct {
            struct StrConcat_648  field0;
        } StrCase_1759_StrCase2_s;
    } stuff;
};

static struct StrCase_1759 StrCase_1759_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_1759 ) { .tag = StrCase_1759_StrCase1_t, .stuff = { .StrCase_1759_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1759 StrCase_1759_StrCase2 (  struct StrConcat_648  field0 ) {
    return ( struct StrCase_1759 ) { .tag = StrCase_1759_StrCase2_t, .stuff = { .StrCase_1759_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1748   into_dash_iter1762 (    struct StrCase_1759  self1529 ) {
    struct StrCase_1759  dref1530 = (  self1529 );
    if ( dref1530.tag == StrCase_1759_StrCase1_t ) {
        return ( ( StrCaseIter_1748_StrCaseIter1 ) ( ( (  chars702 ) ( ( dref1530 .stuff .StrCase_1759_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1530.tag == StrCase_1759_StrCase2_t ) {
            return ( ( StrCaseIter_1748_StrCaseIter2 ) ( ( (  chars698 ) ( ( dref1530 .stuff .StrCase_1759_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1748   chars1761 (    struct StrCase_1759  self1541 ) {
    return ( (  into_dash_iter1762 ) ( (  self1541 ) ) );
}

static  struct StrCaseIter_1748   chars1758 (    struct Maybe_94  self1555 ) {
    struct StrCase_1759  temp1760;
    struct StrCase_1759  c1556 = (  temp1760 );
    struct Maybe_94  dref1557 = (  self1555 );
    if ( dref1557.tag == Maybe_94_None_t ) {
        c1556 = ( ( StrCase_1759_StrCase1 ) ( ( (  from_dash_string208 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1557.tag == Maybe_94_Just_t ) {
            c1556 = ( ( StrCase_1759_StrCase2 ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_649_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1557 .stuff .Maybe_94_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1761 ) ( (  c1556 ) ) );
}

static  struct StrConcatIter_1747   into_dash_iter1757 (    struct StrConcat_93  dref1505 ) {
    return ( (struct StrConcatIter_1747) { .f_left = ( (  chars702 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1758 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1747   chars1756 (    struct StrConcat_93  self1516 ) {
    return ( (  into_dash_iter1757 ) ( (  self1516 ) ) );
}

static  enum Unit_8   lam1763 (   struct env1749* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1764 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1466 , .env =  env->envinst71 } );
    return ( temp1764.fun ( &temp1764.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1745 (   struct env78* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrConcat_93  s2780 ) {
    struct env1749 envinst1749 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1746 ) ( ( (  chars1756 ) ( (  s2780 ) ) ) ,  ( (struct envunion1750){ .fun = (  enum Unit_8  (*) (  struct env1749*  ,    struct Char_65  ) )lam1763 , .env =  envinst1749 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1742 (   struct env91* env ,    struct StrConcat_93  s2836 ,    enum CAllocator_10  al2838 ) {
    struct StrBuilder_73  temp1743 = ( (  mk1433 ) ( (  al2838 ) ) );
    struct StrBuilder_73 *  sb2839 = ( &temp1743 );
    struct envunion92  temp1744 = ( (struct envunion92){ .fun = (  enum Unit_8  (*) (  struct env78*  ,    struct StrBuilder_73 *  ,    struct StrConcat_93  ) )write1745 , .env =  env->envinst78 } );
    ( temp1744.fun ( &temp1744.env ,  (  sb2839 ) ,  (  s2836 ) ) );
    struct envunion88  temp1765 = ( (struct envunion88){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1466 , .env =  env->envinst71 } );
    ( temp1765.fun ( &temp1765.env ,  (  sb2839 ) ,  ( (  nullchar506 ) ( ) ) ) );
    struct StrView_27  dynstr2840 = ( (  as_dash_str1475 ) ( (  sb2839 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2840 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub298 ( ( ( (  dynstr2840 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1740 (   struct env248* env ,    struct Editor_257 *  ed4417 ,    struct StrConcat_93  s4419 ) {
    ( (  reset_dash_msg1084 ) ( (  ed4417 ) ) );
    struct envunion249  temp1741 = ( (struct envunion249){ .fun = (  struct StrView_27  (*) (  struct env91*  ,    struct StrConcat_93  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1742 , .env =  env->envinst91 } );
    (*  ed4417 ) .f_msg = ( ( Maybe_94_Just ) ( ( temp1741.fun ( &temp1741.env ,  (  s4419 ) ,  ( ( * (  ed4417 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undefined1768 (  ) {
    enum Unit_8  temp1769;
    return (  temp1769 );
}

static  enum Unit_8   todo1767 (  ) {
    ( (  print1351 ) ( ( (  from_dash_string208 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1768 ) ( ) );
}

struct Tuple2_1773 {
    struct Maybe_306  field0;
    struct Maybe_306  field1;
};

static struct Tuple2_1773 Tuple2_1773_Tuple2 (  struct Maybe_306  field0 ,  struct Maybe_306  field1 ) {
    return ( struct Tuple2_1773 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1770 (    struct StrView_27  s2417 ,    struct StrView_27  beg2419 ) {
    struct StrViewIter_62  temp1771 = ( (  chars702 ) ( (  s2417 ) ) );
    struct StrViewIter_62 *  scs2420 = ( &temp1771 );
    struct StrViewIter_62  temp1772 = ( (  chars702 ) ( (  beg2419 ) ) );
    struct StrViewIter_62 *  begcs2421 = ( &temp1772 );
    while ( ( true ) ) {
        struct Tuple2_1773  dref2422 = ( ( Tuple2_1773_Tuple2 ) ( ( (  next690 ) ( (  scs2420 ) ) ) ,  ( (  next690 ) ( (  begcs2421 ) ) ) ) );
        if ( dref2422 .field0.tag == Maybe_306_Just_t && dref2422 .field1.tag == Maybe_306_Just_t ) {
            if ( ( !  eq584 ( ( dref2422 .field0 .stuff .Maybe_306_Just_s .field0 ) , ( dref2422 .field1 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref2422 .field0.tag == Maybe_306_None_t && dref2422 .field1.tag == Maybe_306_Just_t ) {
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

struct env1776 {
    bool (*  fun1127 )(    struct Char_65  );
};

struct envunion1777 {
    bool  (*fun) (  struct env1776*  ,    struct Char_65  ,    bool  );
    struct env1776 env;
};

static  bool   reduce1775 (    struct StrView_27  iterable1094 ,    bool  base1096 ,   struct envunion1777  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct StrViewIter_62  it1100 = ( (  into_dash_iter703 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_306  dref1101 = ( (  next690 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_306_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_306_Just_t ) {
                struct envunion1777  temp1778 = (  fun1098 );
                x1099 = ( temp1778.fun ( &temp1778.env ,  ( dref1101 .stuff .Maybe_306_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1779 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1779);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1780;
    return (  temp1780 );
}

static  bool   lam1781 (   struct env1776* env ,    struct Char_65  e1129 ,    bool  x1131 ) {
    return ( ( ( env->fun1127 ) ( (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1774 (    struct StrView_27  it1125 ,    bool (*  fun1127 )(    struct Char_65  ) ) {
    struct env1776 envinst1776 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1775 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1777){ .fun = (  bool  (*) (  struct env1776*  ,    struct Char_65  ,    bool  ) )lam1781 , .env =  envinst1776 } ) ) );
}

struct envunion1783 {
    enum Unit_8  (*fun) (  struct env246*  ,    struct Editor_257 *  ,    struct StrView_27  );
    struct env246 env;
};

static  enum Unit_8   run_dash_cmd1648 (   struct env253* env ,    struct Editor_257 *  ed4436 ,    struct StrView_27  s4438 ) {
    struct Scanner_1649  temp1650 = ( (  mk_dash_from_dash_strview1651 ) ( (  s4438 ) ) );
    struct Scanner_1649 *  sc4439 = ( &temp1650 );
    ( (  drop_dash_str_dash_while1652 ) ( (  sc4439 ) ,  (  is_dash_whitespace1345 ) ) );
    struct StrView_27  cmd4440 = ( (  take_dash_str_dash_while1669 ) ( (  sc4439 ) ,  (  is_dash_not_dash_whitespace1685 ) ) );
    ( (  drop_dash_str_dash_while1652 ) ( (  sc4439 ) ,  (  is_dash_whitespace1345 ) ) );
    if ( (  eq1686 ( (  cmd4440 ) , ( (  from_dash_charlike1233 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4436 ) .f_running = ( false );
    } else {
        if ( (  eq1686 ( (  cmd4440 ) , ( (  from_dash_string208 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1686 ( (  cmd4440 ) , ( (  from_dash_charlike1233 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4441 = ( (  take_dash_str_dash_while1669 ) ( (  sc4439 ) ,  (  is_dash_not_dash_whitespace1685 ) ) );
                struct Maybe_94  filename4442 = ( ( (  null1687 ) ( (  filename4441 ) ) ) ? ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) : ( ( Maybe_94_Just ) ( (  filename4441 ) ) ) );
                struct envunion254  temp1690 = ( (struct envunion254){ .fun = (  struct Maybe_255  (*) (  struct env119*  ,    struct TextBuf_114 *  ,    struct Maybe_94  ) )write_dash_to_dash_file1691 , .env =  env->envinst119 } );
                struct Maybe_255  write_dash_result4443 = ( temp1690.fun ( &temp1690.env ,  ( ( * ( (  pane1139 ) ( (  ed4436 ) ) ) ) .f_buf ) ,  (  filename4442 ) ) );
                struct Maybe_255  dref4444 = (  write_dash_result4443 );
                if ( dref4444.tag == Maybe_255_None_t ) {
                    if ( ( (  is_dash_none1693 ) ( (  filename4442 ) ) ) ) {
                        struct envunion256  temp1724 = ( (struct envunion256){ .fun = (  enum Unit_8  (*) (  struct env246*  ,    struct Editor_257 *  ,    struct StrView_27  ) )set_dash_msg1725 , .env =  env->envinst246 } );
                        ( temp1724.fun ( &temp1724.env ,  (  ed4436 ) ,  ( (  from_dash_string208 ) ( ( "could not save changes (!?)" ) ,  ( 27 ) ) ) ) );
                    } else {
                        struct envunion260  temp1739 = ( (struct envunion260){ .fun = (  enum Unit_8  (*) (  struct env248*  ,    struct Editor_257 *  ,    struct StrConcat_93  ) )set_dash_msg1740 , .env =  env->envinst248 } );
                        ( temp1739.fun ( &temp1739.env ,  (  ed4436 ) ,  ( ( StrConcat_93_StrConcat ) ( ( (  from_dash_string208 ) ( ( "could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4442 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4444.tag == Maybe_255_Just_t ) {
                        struct envunion261  temp1766 = ( (struct envunion261){ .fun = (  enum Unit_8  (*) (  struct env244*  ,    struct Editor_257 *  ,    struct StrConcat_86  ) )set_dash_msg1429 , .env =  env->envinst244 } );
                        ( temp1766.fun ( &temp1766.env ,  (  ed4436 ) ,  ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "written " ) ,  ( 8 ) ) ) ,  ( dref4444 .stuff .Maybe_255_Just_s .field0 ) ) ) ,  ( (  from_dash_string208 ) ( ( " bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq1686 ( (  cmd4440 ) , ( (  from_dash_charlike1233 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1767 ) ( ) );
                } else {
                    if ( (  eq1686 ( (  cmd4440 ) , ( (  from_dash_string208 ) ( ( "ln" ) ,  ( 2 ) ) ) ) ) ) {
                        struct StrView_27  what4446 = ( (  take_dash_str_dash_while1669 ) ( (  sc4439 ) ,  (  is_dash_not_dash_whitespace1685 ) ) );
                        if ( (  eq1686 ( (  what4446 ) , ( (  from_dash_string208 ) ( ( "on" ) ,  ( 2 ) ) ) ) ) ) {
                            (* (*  ed4436 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( true );
                        } else {
                            if ( (  eq1686 ( (  what4446 ) , ( (  from_dash_string208 ) ( ( "off" ) ,  ( 3 ) ) ) ) ) ) {
                                (* (*  ed4436 ) .f_cfg ) .f_display_dash_line_dash_numbers = ( false );
                            } else {
                                if ( ( (  cmp299 ( ( (  count1109 ) ( ( (  chars702 ) ( (  what4446 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1770 ) ( ( (  from_dash_string208 ) ( ( "absolute" ) ,  ( 8 ) ) ) ,  (  what4446 ) ) ) ) ) {
                                    (* (*  ed4436 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( false );
                                } else {
                                    if ( ( (  cmp299 ( ( (  count1109 ) ( ( (  chars702 ) ( (  what4446 ) ) ) ) ) , (  from_dash_integral0 ( 3 ) ) ) != 0 ) && ( (  begins_dash_with1770 ) ( ( (  from_dash_string208 ) ( ( "relative" ) ,  ( 8 ) ) ) ,  (  what4446 ) ) ) ) ) {
                                        (* (*  ed4436 ) .f_cfg ) .f_relative_dash_line_dash_numbers = ( true );
                                    }
                                }
                            }
                        }
                    } else {
                        if ( (  eq1686 ( (  cmd4440 ) , ( (  from_dash_string208 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                        } else {
                            if ( ( (  all1774 ) ( (  cmd4440 ) ,  (  is_dash_digit988 ) ) ) ) {
                            } else {
                                struct envunion1783  temp1782 = ( (struct envunion1783){ .fun = (  enum Unit_8  (*) (  struct env246*  ,    struct Editor_257 *  ,    struct StrView_27  ) )set_dash_msg1725 , .env =  env->envinst246 } );
                                ( temp1782.fun ( &temp1782.env ,  (  ed4436 ) ,  ( (  from_dash_string208 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
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
    return ( (  from_dash_u81052 ) ( ( (  ascii_dash_u8517 ) ( (  c783 ) ) ) ) );
}

static  struct Maybe_982   reduce1789 (    struct StrViewIter_62  iterable1094 ,    struct Maybe_982  base1096 ,    struct Maybe_982 (*  fun1098 )(    struct Char_65  ,    struct Maybe_982  ) ) {
    struct Maybe_982  x1099 = (  base1096 );
    struct StrViewIter_62  it1100 = ( (  into_dash_iter789 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_306  dref1101 = ( (  next690 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_306_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_306_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_306_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1790 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1790);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_982  temp1791;
    return (  temp1791 );
}

static  struct Maybe_982   sequence_dash_maybe1792 (    struct Char_65  e2490 ,    struct Maybe_982  b2492 ) {
    struct Maybe_982  dref2493 = (  b2492 );
    if ( dref2493.tag == Maybe_982_None_t ) {
        return ( (struct Maybe_982) { .tag = Maybe_982_None_t } );
    }
    else {
        if ( dref2493.tag == Maybe_982_Just_t ) {
            struct Maybe_164  dref2495 = ( (  parse_dash_digit1013 ) ( (  e2490 ) ) );
            if ( dref2495.tag == Maybe_164_None_t ) {
                return ( (struct Maybe_982) { .tag = Maybe_982_None_t } );
            }
            else {
                if ( dref2495.tag == Maybe_164_Just_t ) {
                    return ( ( Maybe_982_Just ) ( (  op_dash_add586 ( (  op_dash_mul295 ( ( dref2493 .stuff .Maybe_982_Just_s .field0 ) , (  from_dash_integral297 ( 10 ) ) ) ) , ( (  i32_dash_i641022 ) ( ( dref2495 .stuff .Maybe_164_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_982   parse_dash_int1788 (    struct StrView_27  s2487 ) {
    struct StrViewIter_62  cs2497 = ( (  chars702 ) ( (  s2487 ) ) );
    struct Maybe_306  dref2498 = ( (  head1348 ) ( (  cs2497 ) ) );
    if ( dref2498.tag == Maybe_306_Just_t ) {
        return ( (  reduce1789 ) ( (  cs2497 ) ,  ( ( Maybe_982_Just ) ( (  from_dash_integral297 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1792 ) ) );
    }
    else {
        if ( dref2498.tag == Maybe_306_None_t ) {
            return ( (struct Maybe_982) { .tag = Maybe_982_None_t } );
        }
    }
}

struct TakeWhile_1798 {
    struct StrViewIter_62  f_it;
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

static  struct Maybe_306   next1802 (    struct TakeWhile_1798 *  self965 ) {
    struct Maybe_306  mx966 = ( (  next690 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_306  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_306_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_306_Just ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
            }
        }
    }
}

static  struct Maybe_255   next1801 (    struct Map_1797 *  dref799 ) {
    struct Maybe_306  dref802 = ( (  next1802 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_306_Just_t ) {
            return ( ( Maybe_255_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_306_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1799 (    struct Map_1797  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1797  it1100 = ( (  into_dash_iter1800 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next1801 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1803 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1803);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1804;
    return (  temp1804 );
}

static  size_t   lam1805 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add320 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1796 (    struct Map_1797  it1111 ) {
    return ( (  reduce1799 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1805 ) ) );
}

static  struct TakeWhile_1798   into_dash_iter1807 (    struct TakeWhile_1798  self962 ) {
    return (  self962 );
}

static  struct Map_1797   map1806 (    struct TakeWhile_1798  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1798  it809 = ( (  into_dash_iter1807 ) ( (  iterable806 ) ) );
    return ( ( Map_1797_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1798   take_dash_while1808 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1798) { .f_it = ( (  into_dash_iter789 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1809 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1795 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1796 ) ( ( (  map1806 ) ( ( (  take_dash_while1808 ) ( ( (  chars702 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1809 ) ) ) ) );
    return ( (  byte_dash_substr520 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1794 (    struct Scanner_1649 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1795 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1536 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1135 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

struct TakeWhile_1814 {
    struct StrViewIter_62  f_it;
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

static  struct Maybe_306   next1818 (    struct TakeWhile_1814 *  self965 ) {
    struct Maybe_306  mx966 = ( (  next690 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_306  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_306_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_306_Just ) ( ( dref967 .stuff .Maybe_306_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
            }
        }
    }
}

static  struct Maybe_255   next1817 (    struct Map_1813 *  dref799 ) {
    struct Maybe_306  dref802 = ( (  next1818 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_306_Just_t ) {
            return ( ( Maybe_255_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_306_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1815 (    struct Map_1813  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1813  it1100 = ( (  into_dash_iter1816 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next1817 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1819 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1819);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1820;
    return (  temp1820 );
}

static  size_t   lam1821 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add320 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1812 (    struct Map_1813  it1111 ) {
    return ( (  reduce1815 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1821 ) ) );
}

static  struct TakeWhile_1814   into_dash_iter1823 (    struct TakeWhile_1814  self962 ) {
    return (  self962 );
}

static  struct Map_1813   map1822 (    struct TakeWhile_1814  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1814  it809 = ( (  into_dash_iter1823 ) ( (  iterable806 ) ) );
    return ( ( Map_1813_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1814   take_dash_while1824 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1814) { .f_it = ( (  into_dash_iter789 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1825 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1811 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1812 ) ( ( (  map1822 ) ( ( (  take_dash_while1824 ) ( ( (  chars702 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1825 ) ) ) ) );
    return ( (  byte_dash_substr520 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1810 (    struct Scanner_1649 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1811 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1536 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1135 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

static  bool   lam1826 (    struct Char_65  c4432 ) {
    return ( ! ( (  is_dash_whitespace1345 ) ( (  c4432 ) ) ) );
}

static  struct Theme_181 *   or_dash_else1827 (    struct Maybe_252  self1734 ,    struct Theme_181 *  alt1736 ) {
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

struct SliceIter_1833 {
    struct Slice_201  f_slice;
    size_t  f_current_dash_offset;
};

struct env1834 {
    struct StrView_27  name3995;
    ;
};

struct envunion1835 {
    bool  (*fun) (  struct env1834*  ,    struct Tuple2_202  );
    struct env1834 env;
};

struct Filter_1832 {
    struct SliceIter_1833  f_og;
    struct envunion1835  f_fun;
};

struct Map_1831 {
    struct Filter_1832  field0;
    struct Theme_181 * (*  field1 )(    struct Tuple2_202  );
};

static struct Map_1831 Map_1831_Map (  struct Filter_1832  field0 ,  struct Theme_181 * (*  field1 )(    struct Tuple2_202  ) ) {
    return ( struct Map_1831 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1837 {
    enum {
        Maybe_1837_None_t,
        Maybe_1837_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_202  field0;
        } Maybe_1837_Just_s;
    } stuff;
};

static struct Maybe_1837 Maybe_1837_Just (  struct Tuple2_202  field0 ) {
    return ( struct Maybe_1837 ) { .tag = Maybe_1837_Just_t, .stuff = { .Maybe_1837_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_202 *   offset_dash_ptr1840 (    struct Tuple2_202 *  x338 ,    int64_t  count340 ) {
    struct Tuple2_202  temp1841;
    return ( (struct Tuple2_202 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1841 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1837   next1839 (    struct SliceIter_1833 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1837) { .tag = Maybe_1837_None_t } );
    }
    struct Tuple2_202  elem1832 = ( * ( (  offset_dash_ptr1840 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1837_Just ) ( (  elem1832 ) ) );
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

static  struct Maybe_252   next1836 (    struct Map_1831 *  dref799 ) {
    struct Maybe_1837  dref802 = ( (  next1838 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_1837_None_t ) {
        return ( (struct Maybe_252) { .tag = Maybe_252_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_1837_Just_t ) {
            return ( ( Maybe_252_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_1837_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1831   into_dash_iter1845 (    struct Map_1831  self797 ) {
    return (  self797 );
}

static  struct Maybe_252   head1830 (    struct Map_1831  it1143 ) {
    struct Map_1831  temp1844 = ( (  into_dash_iter1845 ) ( (  it1143 ) ) );
    return ( (  next1836 ) ( ( &temp1844 ) ) );
}

static  struct Filter_1832   into_dash_iter1847 (    struct Filter_1832  self831 ) {
    return (  self831 );
}

static  struct Map_1831   map1846 (    struct Filter_1832  iterable806 ,    struct Theme_181 * (*  fun808 )(    struct Tuple2_202  ) ) {
    struct Filter_1832  it809 = ( (  into_dash_iter1847 ) ( (  iterable806 ) ) );
    return ( ( Map_1831_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct SliceIter_1833   into_dash_iter1849 (    struct Slice_201  self1824 ) {
    return ( (struct SliceIter_1833) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1832   filter1848 (    struct Slice_201  iterable839 ,   struct envunion1835  fun841 ) {
    struct SliceIter_1833  it842 = ( (  into_dash_iter1849 ) ( (  iterable839 ) ) );
    return ( (struct Filter_1832) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  bool   lam1850 (   struct env1834* env ,    struct Tuple2_202  dref3996 ) {
    return ( (  begins_dash_with1770 ) ( ( dref3996 .field0 ) ,  ( env->name3995 ) ) );
}

static  struct Theme_181 *   snd1851 (    struct Tuple2_202  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Maybe_252   match_dash_theme1829 (   struct env209* env ,    struct StrView_27  name3995 ) {
    if ( ( (  null1687 ) ( (  name3995 ) ) ) ) {
        return ( (struct Maybe_252) { .tag = Maybe_252_None_t } );
    }
    struct env1834 envinst1834 = {
        .name3995 =  name3995 ,
    };
    return ( (  head1830 ) ( ( (  map1846 ) ( ( (  filter1848 ) ( ( env->all_dash_themes3992 ) ,  ( (struct envunion1835){ .fun = (  bool  (*) (  struct env1834*  ,    struct Tuple2_202  ) )lam1850 , .env =  envinst1834 } ) ) ) ,  (  snd1851 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1787 (   struct env250* env ,    struct Editor_257 *  ed4422 ,    struct StrView_27  cmd4424 ) {
    struct Maybe_982  dref4425 = ( (  parse_dash_int1788 ) ( (  cmd4424 ) ) );
    if ( dref4425.tag == Maybe_982_Just_t ) {
        int32_t  line4427 = ( (  clamp1487 ) ( ( (  i64_dash_i321024 ) ( ( dref4425 .stuff .Maybe_982_Just_s .field0 ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  num_dash_lines1142 ) ( ( ( * ( (  pane1139 ) ( (  ed4422 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
        int32_t  line4428 = (  op_dash_sub173 ( (  line4427 ) , (  from_dash_integral67 ( 1 ) ) ) );
        ( (  set_dash_cursors1096 ) ( ( (  pane1139 ) ( (  ed4422 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4428 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_NoChanges ) ) );
    }
    else {
        if ( dref4425.tag == Maybe_982_None_t ) {
            struct Scanner_1649  temp1793 = ( (  mk_dash_from_dash_strview1651 ) ( (  cmd4424 ) ) );
            struct Scanner_1649 *  sc4429 = ( &temp1793 );
            struct StrView_27  cmd4430 = ( (  take_dash_str_dash_while1794 ) ( (  sc4429 ) ,  (  is_dash_alpha1340 ) ) );
            if ( (  eq1686 ( (  cmd4430 ) , ( (  from_dash_string208 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1652 ) ( (  sc4429 ) ,  (  is_dash_whitespace1345 ) ) );
                struct StrView_27  theme_dash_name4433 = ( (  take_dash_str_dash_while1810 ) ( (  sc4429 ) ,  (  lam1826 ) ) );
                struct envunion251  temp1828 = ( (struct envunion251){ .fun = (  struct Maybe_252  (*) (  struct env209*  ,    struct StrView_27  ) )match_dash_theme1829 , .env =  env->envinst209 } );
                (* (*  ed4422 ) .f_cfg ) .f_theme = ( (  or_dash_else1827 ) ( ( temp1828.fun ( &temp1828.env ,  (  theme_dash_name4433 ) ) ) ,  ( ( * (  ed4422 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_62   into_dash_iter1855 (    struct StrBuilder_73  self2833 ) {
    return ( (  chars1718 ) ( (  self2833 ) ) );
}

static  struct Maybe_306   head1853 (    struct StrBuilder_73  it1143 ) {
    struct StrViewIter_62  temp1854 = ( (  into_dash_iter1855 ) ( (  it1143 ) ) );
    return ( (  next690 ) ( ( &temp1854 ) ) );
}

static  bool   null1852 (    struct StrBuilder_73  it1152 ) {
    struct Maybe_306  dref1153 = ( (  head1853 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_306_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1861 (   struct env42* env ,    struct List_9 *  list2078 ,    size_t  i2080 ) {
    struct envunion43  temp1862 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range609 , .env =  env->envinst40 } );
    ( temp1862.fun ( &temp1862.env ,  (  list2078 ) ,  (  i2080 ) ,  (  op_dash_add320 ( (  i2080 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1859 (   struct env44* env ,    struct List_9 *  list2094 ) {
    if ( (  eq408 ( ( ( * (  list2094 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1217 ) ( ( (  from_dash_string208 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1860 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_9 *  ,    size_t  ) )remove1861 , .env =  env->envinst42 } );
    return ( temp1860.fun ( &temp1860.env ,  (  list2094 ) ,  (  op_dash_sub298 ( ( ( * (  list2094 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1857 (   struct env82* env ,    struct StrBuilder_73 *  sb2796 ) {
    struct envunion83  temp1858 = ( (struct envunion83){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_9 *  ) )pop1859 , .env =  env->envinst44 } );
    return ( temp1858.fun ( &temp1858.env ,  ( & ( ( * (  sb2796 ) ) .f_chars ) ) ) );
}

struct envunion1864 {
    enum Unit_8  (*fun) (  struct env250*  ,    struct Editor_257 *  ,    struct StrView_27  );
    struct env250 env;
};

struct env1866 {
    struct Editor_257 *  ed4497;
    ;
};

struct envunion1867 {
    enum Unit_8  (*fun) (  struct env1866*  ,    struct StrView_27  );
    struct env1866 env;
};

static  enum Unit_8   if_dash_just1865 (    struct Maybe_94  x1292 ,   struct envunion1867  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1867  temp1868 = (  fun1294 );
        ( temp1868.fun ( &temp1868.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1869 (   struct env1866* env ,    struct StrView_27  st4514 ) {
    ( (  free511 ) ( (  st4514 ) ,  ( ( * ( env->ed4497 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1871 {
    enum Unit_8  (*fun) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  );
    struct env71 env;
};

static  enum Unit_8   live_dash_search1872 (    struct Editor_257 *  ed4449 ,    struct Pos_26  begin_dash_pos4451 ,    struct StrView_27  query4453 ) {
    if ( ( ! ( (  null1687 ) ( (  query4453 ) ) ) ) ) {
        struct Maybe_1511  dref4454 = ( (  search_dash_from1512 ) ( ( (  pane1139 ) ( (  ed4449 ) ) ) ,  (  begin_dash_pos4451 ) ,  (  query4453 ) ) );
        if ( dref4454.tag == Maybe_1511_Just_t ) {
            ( (  set_dash_cursors1096 ) ( ( (  pane1139 ) ( (  ed4449 ) ) ) ,  ( dref4454 .stuff .Maybe_1511_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4454 .stuff .Maybe_1511_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1097_NoChanges ) ) );
        }
        else {
            if ( dref4454.tag == Maybe_1511_None_t ) {
                ( (  set_dash_cursors1096 ) ( ( (  pane1139 ) ( (  ed4449 ) ) ) ,  (  begin_dash_pos4451 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors1096 ) ( ( (  pane1139 ) ( (  ed4449 ) ) ) ,  (  begin_dash_pos4451 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1874 {
    enum Unit_8  (*fun) (  struct env82*  ,    struct StrBuilder_73 *  );
    struct env82 env;
};

static  enum Unit_8   handle_dash_key1092 (   struct env273* env ,    struct Editor_257 *  ed4497 ,    struct Key_278  key4499 ) {
    struct EditorMode_258 *  dref4500 = ( & ( ( * (  ed4497 ) ) .f_mode ) );
    if ( (* dref4500 ).tag == EditorMode_258_Normal_t ) {
        enum Mode_230  dref4501 = ( ( ( * (  ed4497 ) ) .f_pane ) .f_mode );
        switch (  dref4501 ) {
            case Mode_230_Normal : {
                struct envunion277  temp1093 = ( (struct envunion277){ .fun = (  enum Unit_8  (*) (  struct env262*  ,    struct Editor_257 *  ,    struct Key_278  ) )handle_dash_normal_dash_key1094 , .env =  env->envinst262 } );
                ( temp1093.fun ( &temp1093.env ,  (  ed4497 ) ,  (  key4499 ) ) );
                break;
            }
            case Mode_230_Select : {
                struct envunion1634  temp1633 = ( (struct envunion1634){ .fun = (  enum Unit_8  (*) (  struct env262*  ,    struct Editor_257 *  ,    struct Key_278  ) )handle_dash_normal_dash_key1094 , .env =  env->envinst262 } );
                ( temp1633.fun ( &temp1633.env ,  (  ed4497 ) ,  (  key4499 ) ) );
                break;
            }
            case Mode_230_Insert : {
                struct Key_278  dref4502 = (  key4499 );
                if ( dref4502.tag == Key_278_Escape_t ) {
                    ( (  set_dash_mode1148 ) ( ( (  pane1139 ) ( (  ed4497 ) ) ) ,  ( Mode_230_Normal ) ) );
                }
                else {
                    if ( dref4502.tag == Key_278_Enter_t ) {
                        int32_t  indent4503 = ( (  indent_dash_at_dash_line1151 ) ( ( (  pane1139 ) ( (  ed4497 ) ) ) ,  ( ( ( * ( (  pane1139 ) ( (  ed4497 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion274  temp1635 = ( (struct envunion274){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_229 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1171 , .env =  env->envinst213 } );
                        ( temp1635.fun ( &temp1635.env ,  ( (  pane1139 ) ( (  ed4497 ) ) ) ,  ( (  from_dash_charlike1233 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1140 ) ( ( (  pane1139 ) ( (  ed4497 ) ) ) ) );
                        struct envunion279  temp1636 = ( (struct envunion279){ .fun = (  enum Unit_8  (*) (  struct env235*  ,    struct Pane_229 *  ,    int32_t  ) )indent_dash_at_dash_current1310 , .env =  env->envinst235 } );
                        ( temp1636.fun ( &temp1636.env ,  ( (  pane1139 ) ( (  ed4497 ) ) ) ,  (  indent4503 ) ) );
                    }
                    else {
                        if ( dref4502.tag == Key_278_Backspace_t ) {
                            struct envunion276  temp1637 = ( (struct envunion276){ .fun = (  enum Unit_8  (*) (  struct env216*  ,    struct Pane_229 *  ) )backspace1638 , .env =  env->envinst216 } );
                            ( temp1637.fun ( &temp1637.env ,  ( (  pane1139 ) ( (  ed4497 ) ) ) ) );
                        }
                        else {
                            if ( dref4502.tag == Key_278_Char_t ) {
                                struct Array_1641  temp1643 = ( (  from_dash_listlike1644 ) ( ( (struct Array_1641) { ._arr = { ( dref4502 .stuff .Key_278_Char_s .field0 ) } } ) ) );
                                struct StrView_27  s4505 = ( (  from_dash_ascii_dash_slice979 ) ( ( (  as_dash_slice1640 ) ( ( &temp1643 ) ) ) ) );
                                struct envunion1646  temp1645 = ( (struct envunion1646){ .fun = (  enum Unit_8  (*) (  struct env213*  ,    struct Pane_229 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1171 , .env =  env->envinst213 } );
                                ( temp1645.fun ( &temp1645.env ,  ( (  pane1139 ) ( (  ed4497 ) ) ) ,  (  s4505 ) ) );
                                ( (  move_dash_right1140 ) ( ( (  pane1139 ) ( (  ed4497 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4500 ).tag == EditorMode_258_Cmd_t ) {
            struct Key_278  dref4508 = (  key4499 );
            if ( dref4508.tag == Key_278_Escape_t ) {
                ( (  set_dash_cursors1096 ) ( ( (  pane1139 ) ( (  ed4497 ) ) ) ,  ( (* dref4500 ) .stuff .EditorMode_258_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_UpdateVI ) ) );
                (*  ed4497 ) .f_mode = ( (struct EditorMode_258) { .tag = EditorMode_258_Normal_t } );
                (* (*  ed4497 ) .f_cfg ) .f_theme = ( ( * (  ed4497 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4508.tag == Key_278_Enter_t ) {
                    struct envunion280  temp1647 = ( (struct envunion280){ .fun = (  enum Unit_8  (*) (  struct env253*  ,    struct Editor_257 *  ,    struct StrView_27  ) )run_dash_cmd1648 , .env =  env->envinst253 } );
                    ( temp1647.fun ( &temp1647.env ,  (  ed4497 ) ,  ( (  as_dash_str1475 ) ( ( & ( (* dref4500 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1722 ) ( ( & ( (* dref4500 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors1096 ) ( ( (  pane1139 ) ( (  ed4497 ) ) ) ,  ( ( * ( (  pane1139 ) ( (  ed4497 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_UpdateVI ) ) );
                    (*  ed4497 ) .f_mode = ( (struct EditorMode_258) { .tag = EditorMode_258_Normal_t } );
                    (*  ed4497 ) .f_og_dash_theme = ( ( * ( ( * (  ed4497 ) ) .f_cfg ) ) .f_theme );
                }
                else {
                    if ( dref4508.tag == Key_278_Char_t ) {
                        struct envunion281  temp1784 = ( (struct envunion281){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1466 , .env =  env->envinst71 } );
                        ( temp1784.fun ( &temp1784.env ,  ( & ( (* dref4500 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1785 ) ( ( dref4508 .stuff .Key_278_Char_s .field0 ) ) ) ) );
                        struct envunion275  temp1786 = ( (struct envunion275){ .fun = (  enum Unit_8  (*) (  struct env250*  ,    struct Editor_257 *  ,    struct StrView_27  ) )live_dash_cmd1787 , .env =  env->envinst250 } );
                        ( temp1786.fun ( &temp1786.env ,  (  ed4497 ) ,  ( (  as_dash_str1475 ) ( ( & ( (* dref4500 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4508.tag == Key_278_Backspace_t ) {
                            if ( ( ! ( (  null1852 ) ( ( (* dref4500 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion282  temp1856 = ( (struct envunion282){ .fun = (  enum Unit_8  (*) (  struct env82*  ,    struct StrBuilder_73 *  ) )pop1857 , .env =  env->envinst82 } );
                                ( temp1856.fun ( &temp1856.env ,  ( & ( (* dref4500 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1864  temp1863 = ( (struct envunion1864){ .fun = (  enum Unit_8  (*) (  struct env250*  ,    struct Editor_257 *  ,    struct StrView_27  ) )live_dash_cmd1787 , .env =  env->envinst250 } );
                            ( temp1863.fun ( &temp1863.env ,  (  ed4497 ) ,  ( (  as_dash_str1475 ) ( ( & ( (* dref4500 ) .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4500 ).tag == EditorMode_258_Search_t ) {
                struct Key_278  dref4512 = (  key4499 );
                if ( dref4512.tag == Key_278_Escape_t ) {
                    ( (  set_dash_cursors1096 ) ( ( (  pane1139 ) ( (  ed4497 ) ) ) ,  ( (* dref4500 ) .stuff .EditorMode_258_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1097_UpdateVI ) ) );
                    (*  ed4497 ) .f_mode = ( (struct EditorMode_258) { .tag = EditorMode_258_Normal_t } );
                }
                else {
                    if ( dref4512.tag == Key_278_Enter_t ) {
                        ( (  set_dash_cursors1096 ) ( ( (  pane1139 ) ( (  ed4497 ) ) ) ,  ( ( * ( (  pane1139 ) ( (  ed4497 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1139 ) ( (  ed4497 ) ) ) ) .f_sel ) ,  ( CursorMovement_1097_UpdateVI ) ) );
                        struct env1866 envinst1866 = {
                            .ed4497 =  ed4497 ,
                        };
                        ( (  if_dash_just1865 ) ( ( ( * (  ed4497 ) ) .f_search_dash_term ) ,  ( (struct envunion1867){ .fun = (  enum Unit_8  (*) (  struct env1866*  ,    struct StrView_27  ) )lam1869 , .env =  envinst1866 } ) ) );
                        if ( ( ! ( (  null1852 ) ( ( (* dref4500 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4515 = ( ( * ( (  pane1139 ) ( (  ed4497 ) ) ) ) .f_cursor );
                            struct Pos_26  from4516 = ( (  or_dash_else1405 ) ( ( ( * ( (  pane1139 ) ( (  ed4497 ) ) ) ) .f_sel ) ,  (  to4515 ) ) );
                            (*  ed4497 ) .f_search_dash_term = ( ( Maybe_94_Just ) ( ( (  as_dash_str1475 ) ( ( & ( (* dref4500 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4497 ) .f_search_dash_term = ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
                        }
                        (*  ed4497 ) .f_mode = ( (struct EditorMode_258) { .tag = EditorMode_258_Normal_t } );
                    }
                    else {
                        if ( dref4512.tag == Key_278_Char_t ) {
                            struct envunion1871  temp1870 = ( (struct envunion1871){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1466 , .env =  env->envinst71 } );
                            ( temp1870.fun ( &temp1870.env ,  ( & ( (* dref4500 ) .stuff .EditorMode_258_Search_s .field1 ) ) ,  ( (  ascii_dash_char1785 ) ( ( dref4512 .stuff .Key_278_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1872 ) ( (  ed4497 ) ,  ( (* dref4500 ) .stuff .EditorMode_258_Search_s .field0 ) ,  ( (  as_dash_str1475 ) ( ( & ( (* dref4500 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4512.tag == Key_278_Backspace_t ) {
                                if ( ( ! ( (  null1852 ) ( ( (* dref4500 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1874  temp1873 = ( (struct envunion1874){ .fun = (  enum Unit_8  (*) (  struct env82*  ,    struct StrBuilder_73 *  ) )pop1857 , .env =  env->envinst82 } );
                                    ( temp1873.fun ( &temp1873.env ,  ( & ( (* dref4500 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1872 ) ( (  ed4497 ) ,  ( (* dref4500 ) .stuff .EditorMode_258_Search_s .field0 ) ,  ( (  as_dash_str1475 ) ( ( & ( (* dref4500 ) .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1767 ) ( ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1876 {
    bool  (*fun) (  struct env104*  ,    struct Screen_285 *  );
    struct env104 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1877 (   struct env104* env ,    struct Screen_285 *  screen3518 ) {
    struct Tui_100 *  tui3519 = ( ( * (  screen3518 ) ) .f_tui );
    struct envunion105  temp1878 = ( (struct envunion105){ .fun = (  bool  (*) (  struct env97*  ,    struct Tui_100 *  ) )update_dash_dimensions899 , .env =  env->envinst97 } );
    bool  updated_dash_dimensions3520 = ( temp1878.fun ( &temp1878.env ,  (  tui3519 ) ) );
    if ( ( ! (  updated_dash_dimensions3520 ) ) ) {
        return ( false );
    }
    (*  screen3518 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3521 = ( ( * ( ( * (  screen3518 ) ) .f_tui ) ) .f_width );
    uint32_t  h3522 = ( ( * ( ( * (  screen3518 ) ) .f_tui ) ) .f_height );
    size_t  nusz3523 = ( (  u32_dash_size848 ) ( (  op_dash_mul176 ( (  w3521 ) , (  h3522 ) ) ) ) );
    if ( (  cmp299 ( (  nusz3523 ) , ( ( ( * (  screen3518 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_285  nuscreen3524 = ( (  mk_dash_screen842 ) ( (  tui3519 ) ,  ( ( * (  screen3518 ) ) .f_al ) ) );
    (*  screen3518 ) .f_current = ( (  nuscreen3524 ) .f_current );
    (*  screen3518 ) .f_previous = ( (  nuscreen3524 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1879 (    struct Tui_100 *  tui3445 ) {
    bool  redraw3446 = ( ( * (  tui3445 ) ) .f_should_dash_redraw );
    (*  tui3445 ) .f_should_dash_redraw = ( false );
    return (  redraw3446 );
}

struct env1883 {
    ;
    ;
    ;
    struct Slice_286  s1907;
    struct Cell_287 (*  fun1909 )(    struct Cell_287  );
};

struct envunion1884 {
    enum Unit_8  (*fun) (  struct env1883*  ,    int32_t  );
    struct env1883 env;
};

static  enum Unit_8   for_dash_each1882 (    struct Range_159  iterable1075 ,   struct envunion1884  fun1077 ) {
    struct RangeIter_162  temp1885 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp1885 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion1884  temp1886 = (  fun1077 );
                ( temp1886.fun ( &temp1886.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1887 (   struct env1883* env ,    int32_t  i1911 ) {
    return ( (  set863 ) ( ( env->s1907 ) ,  ( (  i32_dash_size421 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get867 ( ( env->s1907 ) , ( (  i32_dash_size421 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1881 (    struct Slice_286  s1907 ,    struct Cell_287 (*  fun1909 )(    struct Cell_287  ) ) {
    struct env1883 envinst1883 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each1882 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_i32338 ) ( (  op_dash_sub298 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1884){ .fun = (  enum Unit_8  (*) (  struct env1883*  ,    int32_t  ) )lam1887 , .env =  envinst1883 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_287   lam1888 (    struct Cell_287  dref3482 ) {
    return ( (  default_dash_cell875 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1880 (    struct Screen_285 *  screen3481 ) {
    ( (  map1881 ) ( ( ( * (  screen3481 ) ) .f_current ) ,  (  lam1888 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1889 (    struct Screen_285 *  screen3527 ,    struct Color_147  c3529 ) {
    (*  screen3527 ) .f_default_dash_fg = (  c3529 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1890 (    struct Screen_285 *  screen3532 ,    struct Color_147  c3534 ) {
    (*  screen3532 ) .f_default_dash_bg = (  c3534 );
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
            struct Cell_287 *  field0;
        } Maybe_1899_Just_s;
    } stuff;
};

static struct Maybe_1899 Maybe_1899_Just (  struct Cell_287 *  field0 ) {
    return ( struct Maybe_1899 ) { .tag = Maybe_1899_Just_t, .stuff = { .Maybe_1899_Just_s = { .field0 = field0 } } };
};

static  struct Cell_287 *   undefined1900 (  ) {
    struct Cell_287 *  temp1901;
    return (  temp1901 );
}

static  struct Cell_287 *   or_dash_fail1898 (    struct Maybe_1899  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_1899  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1899_None_t ) {
        ( (  panic1217 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1900 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1899_Just_t ) {
            return ( dref1730 .stuff .Maybe_1899_Just_s .field0 );
        }
    }
}

static  struct Maybe_1899   get_dash_cell_dash_ptr1902 (    struct Screen_285 *  screen3548 ,    int32_t  x3550 ,    int32_t  y3552 ) {
    int32_t  w3553 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3548 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  x3550 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  x3550 ) , (  w3553 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1899) { .tag = Maybe_1899_None_t } );
    }
    if ( ( (  cmp166 ( (  y3552 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3552 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3548 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1899) { .tag = Maybe_1899_None_t } );
    }
    size_t  i3554 = ( (  i32_dash_size421 ) ( (  op_dash_add168 ( (  op_dash_mul1543 ( (  y3552 ) , (  w3553 ) ) ) , (  x3550 ) ) ) ) );
    return ( ( Maybe_1899_Just ) ( ( (  get_dash_ptr864 ) ( ( ( * (  screen3548 ) ) .f_current ) ,  (  i3554 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1891 (    struct Screen_285 *  screen3557 ) {
    struct RangeIter_162  temp1892 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3557 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1895 =  next165 (&temp1892);
        if (  __cond1895 .tag == 0 ) {
            break;
        }
        int32_t  y3559 =  __cond1895 .stuff .Maybe_164_Just_s .field0;
        struct RangeIter_162  temp1896 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3557 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_164  __cond1897 =  next165 (&temp1896);
            if (  __cond1897 .tag == 0 ) {
                break;
            }
            int32_t  x3561 =  __cond1897 .stuff .Maybe_164_Just_s .field0;
            struct Cell_287 *  cell3562 = ( (  or_dash_fail1898 ) ( ( (  get_dash_cell_dash_ptr1902 ) ( (  screen3557 ) ,  (  x3561 ) ,  (  y3559 ) ) ) ,  ( (  from_dash_string208 ) ( ( "no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3562 ) .f_bg = ( ( * (  screen3557 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1904 {
    enum Unit_8  (*fun) (  struct env283*  ,    struct Screen_285 *  ,    struct Editor_257 *  );
    struct env283 env;
};

static  int32_t   screen_dash_width1909 (    struct ScreenDims_288  sd4075 ) {
    return (  op_dash_add168 ( (  op_dash_sub173 ( ( (  sd4075 ) .f_to_dash_sx ) , ( (  sd4075 ) .f_from_dash_sx ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1910 (    struct ScreenDims_288  sd4078 ) {
    return (  op_dash_add168 ( (  op_dash_sub173 ( ( (  sd4078 ) .f_to_dash_sy ) , ( (  sd4078 ) .f_from_dash_sy ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1908 (    struct Pane_229 *  pane4081 ,    struct ScreenDims_288  sd4083 ) {
    struct Pos_26  cur4084 = ( ( * (  pane4081 ) ) .f_cursor );
    int32_t  cur_dash_sx4085 = ( (  pos_dash_vi1100 ) ( ( ( * (  pane4081 ) ) .f_buf ) ,  (  cur4084 ) ) );
    struct ScreenCursorOffset_231  sc_dash_off4086 = ( ( * (  pane4081 ) ) .f_sc_dash_off );
    int32_t  sw4087 = (  op_dash_sub173 ( ( (  screen_dash_width1909 ) ( (  sd4083 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
    int32_t  sh4088 = (  op_dash_sub173 ( ( (  screen_dash_height1910 ) ( (  sd4083 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
    int32_t  margin4089 = (  from_dash_integral67 ( 5 ) );
    int32_t  csi4090 = ( (  pos_dash_vi1100 ) ( ( ( * (  pane4081 ) ) .f_buf ) ,  (  cur4084 ) ) );
    int32_t  csx4091 = (  op_dash_sub173 ( (  csi4090 ) , ( (  sc_dash_off4086 ) .f_screen_dash_left ) ) );
    int32_t  csy4092 = (  op_dash_sub173 ( ( (  cur4084 ) .f_line ) , ( (  sc_dash_off4086 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4093 = ( (  sc_dash_off4086 ) .f_screen_dash_left );
    if ( (  cmp166 ( (  csx4091 ) , (  margin4089 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4093 = (  op_dash_sub173 ( (  csi4090 ) , (  margin4089 ) ) );
    } else {
        if ( (  cmp166 ( (  csx4091 ) , (  op_dash_sub173 ( (  sw4087 ) , (  margin4089 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4093 = (  op_dash_add168 ( (  op_dash_sub173 ( (  csi4090 ) , (  sw4087 ) ) ) , (  margin4089 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4094 = ( (  max1115 ) ( (  nu_dash_screen_dash_left4093 ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4095 = ( (  sc_dash_off4086 ) .f_screen_dash_top );
    if ( (  cmp166 ( (  csy4092 ) , (  margin4089 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4095 = (  op_dash_sub173 ( ( (  cur4084 ) .f_line ) , (  margin4089 ) ) );
    } else {
        if ( (  cmp166 ( (  csy4092 ) , (  op_dash_sub173 ( (  sh4088 ) , (  margin4089 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4095 = (  op_dash_add168 ( (  op_dash_sub173 ( ( (  cur4084 ) .f_line ) , (  sh4088 ) ) ) , (  margin4089 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4096 = ( (  max1115 ) ( (  nu_dash_screen_dash_top4095 ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    (*  pane4081 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_231) { .f_screen_dash_top = (  nu_dash_screen_dash_top4096 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4094 ) } );
    return ( Unit_8_Unit );
}

struct IntStrIter_1912 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1912   into_dash_iter1914 (    struct IntStrIter_1912  self1426 ) {
    return (  self1426 );
}

struct env1918 {
    int32_t  base1211;
    ;
};

struct envunion1919 {
    int32_t  (*fun) (  struct env1918*  ,    int32_t  ,    int32_t  );
    struct env1918 env;
};

static  int32_t   reduce1917 (    struct Range_159  iterable1094 ,    int32_t  base1096 ,   struct envunion1919  fun1098 ) {
    int32_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1919  temp1920 = (  fun1098 );
                x1099 = ( temp1920.fun ( &temp1920.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1921 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1921);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1922;
    return (  temp1922 );
}

static  int32_t   lam1923 (   struct env1918* env ,    int32_t  item1215 ,    int32_t  x1217 ) {
    return (  op_dash_mul1543 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  int32_t   pow1916 (    int32_t  base1211 ,    int32_t  p1213 ) {
    struct env1918 envinst1918 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1917 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ,  ( (struct envunion1919){ .fun = (  int32_t  (*) (  struct env1918*  ,    int32_t  ,    int32_t  ) )lam1923 , .env =  envinst1918 } ) ) );
}

static  struct Maybe_306   next1915 (    struct IntStrIter_1912 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_306_Just ) ( ( (  from_dash_charlike355 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    int32_t  trim_dash_down1430 = ( (  pow1916 ) ( (  from_dash_integral67 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    int32_t  upper1431 = (  op_dash_div1542 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    int32_t  upper_dash_mask1432 = (  op_dash_mul1543 ( (  op_dash_div1542 ( (  upper1431 ) , (  from_dash_integral67 ( 10 ) ) ) ) , (  from_dash_integral67 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast313 ) ( (  op_dash_sub173 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81052 ) ( (  op_dash_add948 ( (  digit1433 ) , (  from_dash_integral317 ( 48 ) ) ) ) ) );
    return ( ( Maybe_306_Just ) ( (  digit_dash_char1434 ) ) );
}

static  size_t   reduce1913 (    struct IntStrIter_1912  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct IntStrIter_1912  it1100 = ( (  into_dash_iter1914 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_306  dref1101 = ( (  next1915 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_306_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_306_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_306_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1924 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1924);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1925;
    return (  temp1925 );
}

static  size_t   lam1926 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add320 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1911 (    struct IntStrIter_1912  it1105 ) {
    return ( (  reduce1913 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1926 ) ) );
}

static  int32_t   count_dash_digits1929 (    int32_t  self1437 ) {
    if ( (  eq527 ( (  self1437 ) , (  from_dash_integral67 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp166 ( (  self1437 ) , (  from_dash_integral67 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div1542 ( (  self1437 ) , (  from_dash_integral67 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1912   int_dash_iter1928 (    int32_t  int1441 ) {
    if ( (  cmp166 ( (  int1441 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1912) { .f_int = (  op_dash_neg816 ( (  int1441 ) ) ) , .f_len = ( (  count_dash_digits1929 ) ( (  op_dash_neg816 ( (  int1441 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1912) { .f_int = (  int1441 ) , .f_len = ( (  count_dash_digits1929 ) ( (  int1441 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1912   chars1927 (    int32_t  self1450 ) {
    return ( (  int_dash_iter1928 ) ( (  self1450 ) ) );
}

static  enum Unit_8   set_dash_screen_dash_colors1933 (    struct Screen_285 *  screen3537 ,    struct Color_147  fg3539 ,    struct Color_147  bg3541 ) {
    (*  screen3537 ) .f_default_dash_fg = (  fg3539 );
    (*  screen3537 ) .f_default_dash_bg = (  bg3541 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors1932 (    struct Screen_285 *  screen4099 ,    struct Colors_182  colors4101 ) {
    ( (  set_dash_screen_dash_colors1933 ) ( (  screen4099 ) ,  ( (  colors4101 ) .f_fg ) ,  ( (  colors4101 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   abs1934 (    int32_t  x1335 ) {
    return ( (  cmp166 ( (  x1335 ) , (  from_dash_integral67 ( 0 ) ) ) != 0 ) ? (  x1335 ) : (  op_dash_neg816 ( (  x1335 ) ) ) );
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

static  struct Maybe_164   next1940 (    struct Map_1937 *  dref799 ) {
    struct Maybe_306  dref802 = ( (  next1915 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_306_None_t ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_306_Just_t ) {
            return ( ( Maybe_164_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_306_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1938 (    struct Map_1937  iterable1094 ,    int32_t  base1096 ,    int32_t (*  fun1098 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1099 = (  base1096 );
    struct Map_1937  it1100 = ( (  into_dash_iter1939 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next1940 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1941 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1941);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1942;
    return (  temp1942 );
}

static  int32_t   lam1943 (    int32_t  v1113 ,    int32_t  s1115 ) {
    return (  op_dash_add168 ( (  v1113 ) , (  s1115 ) ) );
}

static  int32_t   sum1936 (    struct Map_1937  it1111 ) {
    return ( (  reduce1938 ) ( (  it1111 ) ,  (  from_dash_integral67 ( 0 ) ) ,  (  lam1943 ) ) );
}

static  struct Map_1937   map1944 (    struct IntStrIter_1912  iterable806 ,    int32_t (*  fun808 )(    struct Char_65  ) ) {
    struct IntStrIter_1912  it809 = ( (  into_dash_iter1914 ) ( (  iterable806 ) ) );
    return ( ( Map_1937_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  enum Unit_8   put_dash_char1948 (    struct Screen_285 *  screen3565 ,    struct Char_65  c3567 ,    int32_t  x3569 ,    int32_t  y3571 ) {
    int32_t  w3572 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3565 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp166 ( (  x3569 ) , (  w3572 ) ) != 0 ) || (  cmp166 ( (  y3571 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3565 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp166 ( (  x3569 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) || (  cmp166 ( (  y3571 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3573 = ( (  i32_dash_size421 ) ( (  op_dash_add168 ( (  op_dash_mul1543 ( (  y3571 ) , (  w3572 ) ) ) , (  x3569 ) ) ) ) );
    struct Color_147  fg3574 = ( ( * (  screen3565 ) ) .f_default_dash_fg );
    struct Color_147  bg3575 = ( ( * (  screen3565 ) ) .f_default_dash_bg );
    struct Char_65  c3576 = (  c3567 );
    int32_t  char_dash_width3577 = ( (  wcwidth1116 ) ( (  c3576 ) ) );
    if ( ( (  cmp166 ( (  x3569 ) , (  from_dash_integral67 ( 0 ) ) ) == 2 ) && (  cmp166 ( ( (  elem_dash_get867 ( ( ( * (  screen3565 ) ) .f_current ) , (  op_dash_sub298 ( (  i3573 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral67 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_287  pc3578 = (  elem_dash_get867 ( ( ( * (  screen3565 ) ) .f_current ) , (  op_dash_sub298 ( (  i3573 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set863 ) ( ( ( * (  screen3565 ) ) .f_current ) ,  (  op_dash_sub298 ( (  i3573 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_287) { .f_c = ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3578 ) .f_fg ) , .f_bg = ( (  pc3578 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral67 ( 1 ) ) } ) ) );
    }
    ( (  set863 ) ( ( ( * (  screen3565 ) ) .f_current ) ,  (  i3573 ) ,  ( (struct Cell_287) { .f_c = (  c3576 ) , .f_fg = (  fg3574 ) , .f_bg = (  bg3575 ) , .f_char_dash_width = (  char_dash_width3577 ) } ) ) );
    struct RangeIter_162  temp1949 =  into_dash_iter163 ( ( (  to172 ) ( (  op_dash_add168 ( (  x3569 ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  ( (  min637 ) ( (  op_dash_sub173 ( (  op_dash_add168 ( (  x3569 ) , (  char_dash_width3577 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  w3572 ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1950 =  next165 (&temp1949);
        if (  __cond1950 .tag == 0 ) {
            break;
        }
        int32_t  xx3580 =  __cond1950 .stuff .Maybe_164_Just_s .field0;
        size_t  i3581 = ( (  i32_dash_size421 ) ( (  op_dash_add168 ( (  op_dash_mul1543 ( (  y3571 ) , (  w3572 ) ) ) , (  xx3580 ) ) ) ) );
        ( (  set863 ) ( ( ( * (  screen3565 ) ) .f_current ) ,  (  i3581 ) ,  ( (struct Cell_287) { .f_c = ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3574 ) , .f_bg = (  bg3575 ) , .f_char_dash_width = (  from_dash_integral67 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1945 (    struct Screen_285 *  screen3584 ,    int32_t  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1543 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min637 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size421 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct IntStrIter_1912  temp1946 =  into_dash_iter1914 ( ( (  chars1927 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_306  __cond1947 =  next1915 (&temp1946);
        if (  __cond1947 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond1947 .stuff .Maybe_306_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1114 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1935 (    struct Screen_285 *  screen3600 ,    int32_t  s3602 ,    int32_t  x3604 ,    int32_t  y3606 ) {
    int32_t  slen3607 = ( (  sum1936 ) ( ( (  map1944 ) ( ( (  chars1927 ) ( (  s3602 ) ) ) ,  (  rendered_dash_wcwidth1114 ) ) ) ) );
    int32_t  w3608 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3600 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3609 = (  op_dash_sub173 ( (  op_dash_sub173 ( (  w3608 ) , (  x3604 ) ) ) , (  slen3607 ) ) );
    ( (  draw_dash_str1945 ) ( (  screen3600 ) ,  (  s3602 ) ,  (  x3609 ) ,  (  y3606 ) ) );
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

static  enum Unit_8   print_dash_str1957 (    struct StrConcat_1952  self1510 ) {
    struct StrConcat_1952  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str398 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1956 (    struct StrConcat_1955  self1510 ) {
    struct StrConcat_1955  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str1957 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1953 (    struct StrConcat_1954  self1510 ) {
    struct StrConcat_1954  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str1956 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str344 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1951 (    bool  cond1720 ,    struct StrConcat_1952  msg1722 ) {
    if ( ( ! (  cond1720 ) ) ) {
        ( (  print_dash_str1953 ) ( ( ( StrConcat_1954_StrConcat ) ( ( ( StrConcat_1955_StrConcat ) ( ( (  from_dash_string208 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1722 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1959 {
    struct StrViewIter_62  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1959   into_dash_iter1960 (    struct AppendIter_1959  self1020 ) {
    return (  self1020 );
}

static  struct AppendIter_1959   append1961 (    struct StrViewIter_62  it1007 ,    struct Char_65  e1009 ) {
    return ( (struct AppendIter_1959) { .f_it = ( (  into_dash_iter789 ) ( (  it1007 ) ) ) , .f_elem = (  e1009 ) , .f_appended = ( false ) } );
}

static  struct Maybe_306   next1963 (    struct AppendIter_1959 *  self1023 ) {
    struct Maybe_306  dref1024 = ( (  next690 ) ( ( & ( ( * (  self1023 ) ) .f_it ) ) ) );
    if ( dref1024.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1024 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1024.tag == Maybe_306_None_t ) {
            if ( ( ! ( ( * (  self1023 ) ) .f_appended ) ) ) {
                (*  self1023 ) .f_appended = ( true );
                return ( ( Maybe_306_Just ) ( ( ( * (  self1023 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
        }
    }
}

static  bool   between1965 (    struct Pos_26  c1338 ,    struct Pos_26  l1340 ,    struct Pos_26  r1342 ) {
    struct Pos_26  from1343 = ( (  min523 ) ( (  l1340 ) ,  (  r1342 ) ) );
    struct Pos_26  to1344 = ( (  max525 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp524 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp524 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1964 (    struct Pane_229 *  pane4067 ,    struct Pos_26  pos4069 ) {
    return ( {  struct Maybe_34  dref4070 = ( ( * (  pane4067 ) ) .f_sel ) ; dref4070.tag == Maybe_34_Just_t ? ( (  between1965 ) ( (  pos4069 ) ,  ( ( * (  pane4067 ) ) .f_cursor ) ,  ( dref4070 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1967 {
    struct Screen_285 *  screen4104;
    ;
    ;
    struct Theme_181 *  theme4111;
};

struct envunion1968 {
    enum Unit_8  (*fun) (  struct env1967*  ,    enum HighlightType_20  );
    struct env1967 env;
};

static  enum Unit_8   if_dash_just1966 (    struct Maybe_212  x1292 ,   struct envunion1968  fun1294 ) {
    struct Maybe_212  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_212_Just_t ) {
        struct envunion1968  temp1969 = (  fun1294 );
        ( temp1969.fun ( &temp1969.env ,  ( dref1295 .stuff .Maybe_212_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_212_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1974 (    struct List_17 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min508 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_306   head1977 (    struct Scanner_970 *  it1143 ) {
    struct Scanner_970  temp1978 = ( (  into_dash_iter986 ) ( (  it1143 ) ) );
    return ( (  next992 ) ( ( &temp1978 ) ) );
}

static  bool   null1976 (    struct Scanner_970 *  it1152 ) {
    struct Maybe_306  dref1153 = ( (  head1977 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_306_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_306   peek1979 (    struct Scanner_970 *  sc3216 ) {
    return ( (  head1348 ) ( ( ( * (  sc3216 ) ) .f_s ) ) );
}

static  bool   eq1981 (    struct Maybe_306  l141 ,    struct Maybe_306  r143 ) {
    struct Tuple2_1773  dref144 = ( ( Tuple2_1773_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_306_None_t && dref144 .field1.tag == Maybe_306_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_306_Just_t && dref144 .field1.tag == Maybe_306_Just_t ) {
            return (  eq584 ( ( dref144 .field0 .stuff .Maybe_306_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_306_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char1980 (    struct Scanner_970 *  sc3219 ,    struct Char_65  char3221 ) {
    if ( (  eq1981 ( ( (  peek1979 ) ( (  sc3219 ) ) ) , ( ( Maybe_306_Just ) ( (  char3221 ) ) ) ) ) ) {
        ( (  drop_prime_995 ) ( (  sc3219 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   char_dash_satisfies1983 (    struct Scanner_970 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_306  dref3227 = ( (  head1348 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_306_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_995 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_306_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1982 (    struct Scanner_970 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1983 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1984 (    struct Char_65  c3920 ) {
    return ( !  eq584 ( (  c3920 ) , ( (  from_dash_charlike355 ) ( ( "]" ) ,  ( 1 ) ) ) ) );
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

static  struct Slice_18   allocate1989 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1990 ) ( ) ) ) .f_size );
    struct Highlight_19 *  ptr1959 = ( (  cast_dash_ptr1993 ) ( ( ( malloc ) ( (  op_dash_mul414 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1994 {
    ;
    ;
    struct Slice_18  new_dash_slice2044;
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
    return ( (struct Highlight_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2001 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_19 *   get_dash_ptr1999 (    struct Slice_18  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp299 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic332 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_19 *  elem_dash_ptr1762 = ( (  offset_dash_ptr2000 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set1998 (    struct Slice_18  slice1776 ,    size_t  i1778 ,    struct Highlight_19  x1780 ) {
    struct Highlight_19 *  ep1781 = ( (  get_dash_ptr1999 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1997 (   struct env1994* env ,    struct Tuple2_1996  dref2045 ) {
    return ( (  set1998 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size421 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct SliceIter_2004 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2003 {
    struct SliceIter_2004  f_left_dash_it;
    struct FromIter_425  f_right_dash_it;
};

static  struct Zip_2003   into_dash_iter2006 (    struct Zip_2003  self912 ) {
    return (  self912 );
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

static  struct Maybe_2009   next2010 (    struct SliceIter_2004 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2009) { .tag = Maybe_2009_None_t } );
    }
    struct Highlight_19  elem1832 = ( * ( (  offset_dash_ptr2000 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2009_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2007   next2008 (    struct Zip_2003 *  self915 ) {
    struct Zip_2003  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_2009  dref917 = ( (  next2010 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_2009_None_t ) {
            return ( (struct Maybe_2007) { .tag = Maybe_2007_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_2009_Just_t ) {
                struct Maybe_164  dref919 = ( (  next431 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_2007) { .tag = Maybe_2007_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next2010 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next431 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2007_Just ) ( ( ( Tuple2_1996_Tuple2 ) ( ( dref917 .stuff .Maybe_2009_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2002 (    struct Zip_2003  iterable1075 ,   struct envunion1995  fun1077 ) {
    struct Zip_2003  temp2005 = ( (  into_dash_iter2006 ) ( (  iterable1075 ) ) );
    struct Zip_2003 *  it1078 = ( &temp2005 );
    while ( ( true ) ) {
        struct Maybe_2007  dref1079 = ( (  next2008 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_2007_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_2007_Just_t ) {
                struct envunion1995  temp2011 = (  fun1077 );
                ( temp2011.fun ( &temp2011.env ,  ( dref1079 .stuff .Maybe_2007_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2004   into_dash_iter2013 (    struct Slice_18  self1824 ) {
    return ( (struct SliceIter_2004) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2003   zip2012 (    struct Slice_18  left923 ,    struct FromIter_425  right925 ) {
    struct SliceIter_2004  left_dash_it926 = ( (  into_dash_iter2013 ) ( (  left923 ) ) );
    struct FromIter_425  right_dash_it927 = ( (  into_dash_iter435 ) ( (  right925 ) ) );
    return ( (struct Zip_2003) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  void *   cast_dash_ptr2015 (    struct Highlight_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2014 (    enum CAllocator_10  dref1961 ,    struct Slice_18  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2015 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1988 (   struct env5* env ,    struct List_17 *  list2043 ) {
    if ( (  eq408 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1989 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq408 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2044 = ( (  allocate1989 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul414 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1994 envinst1994 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1995  fun2048 = ( (struct envunion1995){ .fun = (  enum Unit_8  (*) (  struct env1994*  ,    struct Tuple2_1996  ) )lam1997 , .env =  envinst1994 } );
            ( (  for_dash_each2002 ) ( ( (  zip2012 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free2014 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1986 (   struct env35* env ,    struct List_17 *  list2051 ,    struct Highlight_19  elem2053 ) {
    struct envunion36  temp1987 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_17 *  ) )grow_dash_if_dash_full1988 , .env =  env->envinst5 } );
    ( temp1987.fun ( &temp1987.env ,  (  list2051 ) ) );
    ( (  set1998 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add320 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2017 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2019 (    struct Scanner_970 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_306  dref3227 = ( (  head1348 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_306_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_995 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_306_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2018 (    struct Scanner_970 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2019 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2020 (    struct Char_65  c3923 ) {
    return ( ( !  eq584 ( (  c3923 ) , ( (  from_dash_charlike355 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) && ( !  eq584 ( (  c3923 ) , ( (  from_dash_charlike355 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2022 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2023 (    struct Scanner_970 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_306  dref3227 = ( (  head1348 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_306_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_995 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_306_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2025 (    struct Scanner_970 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_306  dref3227 = ( (  head1348 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_306_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_995 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_306_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2024 (    struct Scanner_970 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2025 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2026 (    struct Char_65  c3926 ) {
    return ( (  eq1335 ( ( (  char_dash_type1338 ) ( (  c3926 ) ) ) , ( CharType_1336_CharWord ) ) ) || (  eq584 ( (  c3926 ) , ( (  from_dash_charlike355 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2028 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2030 {
    struct StrView_27 _arr [2];
};

struct env2031 {
    struct Scanner_970 *  sc3916;
    ;
};

struct envunion2032 {
    bool  (*fun) (  struct env2031*  ,    struct StrView_27  );
    struct env2031 env;
};

struct env2034 {
    struct envunion2032  fun1136;
};

struct envunion2035 {
    bool  (*fun) (  struct env2034*  ,    struct StrView_27  ,    bool  );
    struct env2034 env;
};

struct ArrayIter_2036 {
    struct Array_2030  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2036   into_dash_iter2037 (    struct Array_2030  self2327 ) {
    return ( (struct ArrayIter_2036) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2041 (    struct Array_2030 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   offset_dash_ptr2042 (    struct StrView_27 *  x338 ,    int64_t  count340 ) {
    struct StrView_27  temp2043;
    return ( (struct StrView_27 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2043 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr2040 (    struct Array_2030 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp299 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2258 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic389 ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2041 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2042 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2039 (    struct Array_2030 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2040 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2038 (    struct ArrayIter_2036 *  self2334 ) {
    if ( (  cmp299 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2039 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add320 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2033 (    struct Array_2030  iterable1094 ,    bool  base1096 ,   struct envunion2035  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2036  it1100 = ( (  into_dash_iter2037 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2038 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2035  temp2044 = (  fun1098 );
                x1099 = ( temp2044.fun ( &temp2044.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2045 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2045);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2046;
    return (  temp2046 );
}

static  bool   lam2047 (   struct env2034* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2032  temp2048 = ( env->fun1136 );
    return ( ( temp2048.fun ( &temp2048.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2029 (    struct Array_2030  it1134 ,   struct envunion2032  fun1136 ) {
    struct env2034 envinst2034 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2033 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2035){ .fun = (  bool  (*) (  struct env2034*  ,    struct StrView_27  ,    bool  ) )lam2047 , .env =  envinst2034 } ) ) );
}

static  struct Array_2030   from_dash_listlike2049 (    struct Array_2030  self330 ) {
    return (  self330 );
}

static  struct StrViewIter_62   own2054 (    struct StrViewIter_62  x1252 ) {
    return (  x1252 );
}

static  bool   matches_dash_str2051 (    struct Scanner_970 *  sc3231 ,    struct StrView_27  s3233 ) {
    size_t  skip3234 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_62  temp2052 = ( (  chars702 ) ( (  s3233 ) ) );
    struct StrViewIter_62 *  ss3235 = ( &temp2052 );
    struct StrViewIter_62  temp2053 = ( (  own2054 ) ( ( ( * (  sc3231 ) ) .f_s ) ) );
    struct StrViewIter_62 *  sccp3236 = ( &temp2053 );
    while ( ( true ) ) {
        struct Tuple2_1773  dref3237 = ( ( Tuple2_1773_Tuple2 ) ( ( (  next690 ) ( (  sccp3236 ) ) ) ,  ( (  next690 ) ( (  ss3235 ) ) ) ) );
        if ( dref3237 .field1.tag == Maybe_306_None_t ) {
            ( (  drop_prime_995 ) ( (  sc3231 ) ,  (  skip3234 ) ) );
            return ( true );
        }
        else {
            if ( dref3237 .field0.tag == Maybe_306_Just_t && dref3237 .field1.tag == Maybe_306_Just_t ) {
                if ( ( !  eq584 ( ( dref3237 .field0 .stuff .Maybe_306_Just_s .field0 ) , ( dref3237 .field1 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3234 = (  op_dash_add320 ( (  skip3234 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2050 (   struct env2031* env ,    struct StrView_27  sym3929 ) {
    return ( (  matches_dash_str2051 ) ( ( env->sc3916 ) ,  (  sym3929 ) ) );
}

struct envunion2056 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2058 {
    struct StrView_27 _arr [12];
};

struct env2059 {
    struct Scanner_970 *  sc3916;
    ;
};

struct envunion2060 {
    bool  (*fun) (  struct env2059*  ,    struct StrView_27  );
    struct env2059 env;
};

struct env2062 {
    struct envunion2060  fun1136;
};

struct envunion2063 {
    bool  (*fun) (  struct env2062*  ,    struct StrView_27  ,    bool  );
    struct env2062 env;
};

struct ArrayIter_2064 {
    struct Array_2058  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2064   into_dash_iter2065 (    struct Array_2058  self2327 ) {
    return ( (struct ArrayIter_2064) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2069 (    struct Array_2058 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2068 (    struct Array_2058 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp299 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2258 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic389 ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2069 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2042 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2067 (    struct Array_2058 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2068 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2066 (    struct ArrayIter_2064 *  self2334 ) {
    if ( (  cmp299 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2067 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add320 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2061 (    struct Array_2058  iterable1094 ,    bool  base1096 ,   struct envunion2063  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2064  it1100 = ( (  into_dash_iter2065 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2066 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2063  temp2070 = (  fun1098 );
                x1099 = ( temp2070.fun ( &temp2070.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2071 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2071);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2072;
    return (  temp2072 );
}

static  bool   lam2073 (   struct env2062* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2060  temp2074 = ( env->fun1136 );
    return ( ( temp2074.fun ( &temp2074.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2057 (    struct Array_2058  it1134 ,   struct envunion2060  fun1136 ) {
    struct env2062 envinst2062 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2061 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2063){ .fun = (  bool  (*) (  struct env2062*  ,    struct StrView_27  ,    bool  ) )lam2073 , .env =  envinst2062 } ) ) );
}

static  struct Array_2058   from_dash_listlike2075 (    struct Array_2058  self330 ) {
    return (  self330 );
}

static  bool   lam2076 (   struct env2059* env ,    struct StrView_27  sym3933 ) {
    return ( (  matches_dash_str2051 ) ( ( env->sc3916 ) ,  (  sym3933 ) ) );
}

struct envunion2078 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2080 (    struct Scanner_970 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_306  dref3227 = ( (  head1348 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_306_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_995 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_306_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2079 (    struct Scanner_970 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2080 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2081 (    struct Char_65  c3937 ) {
    return ( (  eq1335 ( ( (  char_dash_type1338 ) ( (  c3937 ) ) ) , ( CharType_1336_CharWord ) ) ) || (  eq584 ( (  c3937 ) , ( (  from_dash_charlike355 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2082 (    struct Maybe_306  x1283 ,    bool (*  fun1285 )(    struct Char_65  ) ,    bool  default1287 ) {
    return ( {  struct Maybe_306  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_306_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_306_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  bool   is_dash_upper2083 (    struct Char_65  c2411 ) {
    return ( (  eq408 ( ( (  c2411 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1341 ) ( (  c2411 ) ,  ( (  from_dash_charlike355 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
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
    struct StrView_27  ident3941;
};

struct envunion2090 {
    bool  (*fun) (  struct env2089*  ,    struct StrView_27  );
    struct env2089 env;
};

struct env2092 {
    struct envunion2090  fun1136;
};

struct envunion2093 {
    bool  (*fun) (  struct env2092*  ,    struct StrView_27  ,    bool  );
    struct env2092 env;
};

struct ArrayIter_2094 {
    struct Array_2084  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2094   into_dash_iter2095 (    struct Array_2084  self2327 ) {
    return ( (struct ArrayIter_2094) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2099 (    struct Array_2084 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2098 (    struct Array_2084 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp299 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2258 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic389 ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2099 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2042 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2097 (    struct Array_2084 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2098 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2096 (    struct ArrayIter_2094 *  self2334 ) {
    if ( (  cmp299 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2097 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add320 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2091 (    struct Array_2084  iterable1094 ,    bool  base1096 ,   struct envunion2093  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2094  it1100 = ( (  into_dash_iter2095 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2096 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2093  temp2100 = (  fun1098 );
                x1099 = ( temp2100.fun ( &temp2100.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2101 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2101);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2102;
    return (  temp2102 );
}

static  bool   lam2103 (   struct env2092* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2090  temp2104 = ( env->fun1136 );
    return ( ( temp2104.fun ( &temp2104.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2088 (    struct Array_2084  it1134 ,   struct envunion2090  fun1136 ) {
    struct env2092 envinst2092 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2091 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2093){ .fun = (  bool  (*) (  struct env2092*  ,    struct StrView_27  ,    bool  ) )lam2103 , .env =  envinst2092 } ) ) );
}

static  bool   lam2105 (   struct env2089* env ,    struct StrView_27  kw3945 ) {
    return (  eq1686 ( (  kw3945 ) , ( env->ident3941 ) ) );
}

struct env2107 {
    ;
    struct StrView_27  ident3941;
};

struct envunion2108 {
    bool  (*fun) (  struct env2107*  ,    struct StrView_27  );
    struct env2107 env;
};

struct env2110 {
    struct envunion2108  fun1136;
};

struct envunion2111 {
    bool  (*fun) (  struct env2110*  ,    struct StrView_27  ,    bool  );
    struct env2110 env;
};

struct ArrayIter_2112 {
    struct Array_2086  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2112   into_dash_iter2113 (    struct Array_2086  self2327 ) {
    return ( (struct ArrayIter_2112) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2117 (    struct Array_2086 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2116 (    struct Array_2086 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp299 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp299 ( (  i2258 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic389 ) ( ( ( StrConcat_390_StrConcat ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string208 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2117 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2042 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2115 (    struct Array_2086 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2116 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2114 (    struct ArrayIter_2112 *  self2334 ) {
    if ( (  cmp299 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2115 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add320 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2109 (    struct Array_2086  iterable1094 ,    bool  base1096 ,   struct envunion2111  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2112  it1100 = ( (  into_dash_iter2113 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2114 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2111  temp2118 = (  fun1098 );
                x1099 = ( temp2118.fun ( &temp2118.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2119 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2119);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2120;
    return (  temp2120 );
}

static  bool   lam2121 (   struct env2110* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2108  temp2122 = ( env->fun1136 );
    return ( ( temp2122.fun ( &temp2122.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2106 (    struct Array_2086  it1134 ,   struct envunion2108  fun1136 ) {
    struct env2110 envinst2110 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2109 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2111){ .fun = (  bool  (*) (  struct env2110*  ,    struct StrView_27  ,    bool  ) )lam2121 , .env =  envinst2110 } ) ) );
}

static  bool   lam2123 (   struct env2107* env ,    struct StrView_27  kw3947 ) {
    return (  eq1686 ( (  kw3947 ) , ( env->ident3941 ) ) );
}

struct envunion2125 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  struct Maybe_982   int2126 (    struct Scanner_970 *  sc3210 ) {
    return ( (  scan_dash_int983 ) ( (  sc3210 ) ) );
}

static  bool   char_dash_satisfies2128 (    struct Scanner_970 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_306  dref3227 = ( (  head1348 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_306_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_995 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_306_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2127 (    struct Scanner_970 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2128 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2129 (    struct Char_65  c2399 ) {
    return ( (  eq408 ( ( (  c2399 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1344 ) ( (  c2399 ) ) ) || ( (  between1341 ) ( (  c2399 ) ,  ( (  from_dash_charlike355 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1341 ) ( (  c2399 ) ,  ( (  from_dash_charlike355 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2131 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2132 (    struct Scanner_970 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2023 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2134 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2136 (    struct Scanner_970 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_306  dref3227 = ( (  head1348 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_306_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_995 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_306_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2135 (    struct Scanner_970 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2136 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2137 (    struct Char_65  c2405 ) {
    return ( (  eq408 ( ( (  c2405 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1341 ) ( (  c2405 ) ,  ( (  from_dash_charlike355 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2139 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2141 (    struct Scanner_970 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_306  dref3227 = ( (  head1348 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_306_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_995 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_306_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2140 (    struct Scanner_970 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2141 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2143 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2145 (    struct Scanner_970 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_306  dref3227 = ( (  head1348 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_306_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_306_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_995 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_306_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2144 (    struct Scanner_970 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2145 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2146 (    struct Char_65  c2402 ) {
    return ( (  eq408 ( ( (  c2402 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq584 ( (  c2402 ) , ( (  from_dash_charlike355 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) || (  eq584 ( (  c2402 ) , ( (  from_dash_charlike355 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) );
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

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1973 (   struct env143* env ,    struct TextBuf_114 *  self3911 ,    struct Line_16 *  line3913 ) {
    if ( ( ! ( ( * (  line3913 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_17 *  hls3914 = ( & ( ( * (  line3913 ) ) .f_highlights ) );
    ( (  trim1974 ) ( (  hls3914 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv3915 = ( (  from_dash_bytes1103 ) ( ( (  to_dash_slice535 ) ( ( ( * (  line3913 ) ) .f_line ) ) ) ) );
    struct Scanner_970  temp1975 = ( (  mk_dash_from_dash_str972 ) ( (  line_dash_sv3915 ) ) );
    struct Scanner_970 *  sc3916 = ( &temp1975 );
    while ( ( ! ( (  null1976 ) ( (  sc3916 ) ) ) ) ) {
        int32_t  from_dash_off3917 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
        struct Maybe_306  first_dash_char3918 = ( (  peek1979 ) ( (  sc3916 ) ) );
        if ( ( (  try_dash_char1980 ) ( (  sc3916 ) ,  ( (  from_dash_charlike355 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
            if ( ( (  try_dash_char1980 ) ( (  sc3916 ) ,  ( (  from_dash_charlike355 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  skip_dash_while1982 ) ( (  sc3916 ) ,  (  lam1984 ) ) );
                ( (  drop_prime_995 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                int32_t  to_dash_off3921 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                struct envunion144  temp1985 = ( (struct envunion144){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                ( temp1985.fun ( &temp1985.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = ( (  size_dash_i32338 ) ( ( (  num_dash_bytes1135 ) ( (  line_dash_sv3915 ) ) ) ) ) , .f_type = ( HighlightType_20_Special3 ) } ) ) );
            } else {
                struct envunion2017  temp2016 = ( (struct envunion2017){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                ( temp2016.fun ( &temp2016.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = ( (  size_dash_i32338 ) ( ( (  num_dash_bytes1135 ) ( (  line_dash_sv3915 ) ) ) ) ) , .f_type = ( HighlightType_20_Comment ) } ) ) );
            }
            break;
        } else {
            if ( ( (  try_dash_char1980 ) ( (  sc3916 ) ,  ( (  from_dash_charlike355 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while2018 ) ( (  sc3916 ) ,  (  lam2020 ) ) );
                    if ( (  eq1981 ( ( (  peek1979 ) ( (  sc3916 ) ) ) , ( ( Maybe_306_Just ) ( ( (  from_dash_charlike355 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                        ( (  drop_prime_995 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        if ( (  eq1981 ( ( (  peek1979 ) ( (  sc3916 ) ) ) , ( ( Maybe_306_Just ) ( ( (  from_dash_charlike355 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                            ( (  drop_prime_995 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                        }
                    } else {
                        ( (  drop_prime_995 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        break;
                    }
                }
                int32_t  cur_dash_off3924 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                struct envunion2022  temp2021 = ( (struct envunion2022){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                ( temp2021.fun ( &temp2021.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3924 ) , .f_type = ( HighlightType_20_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char1980 ) ( (  sc3916 ) ,  ( (  from_dash_charlike355 ) ( ( "@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies2023 ) ( (  sc3916 ) ,  (  is_dash_alpha1340 ) ) ) ) {
                        ( (  skip_dash_while2024 ) ( (  sc3916 ) ,  (  lam2026 ) ) );
                        int32_t  cur_dash_off3927 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2028  temp2027 = ( (struct envunion2028){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                        ( temp2027.fun ( &temp2027.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3927 ) , .f_type = ( HighlightType_20_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct env2031 envinst2031 = {
                        .sc3916 =  sc3916 ,
                    };
                    if ( ( (  any2029 ) ( ( (  from_dash_listlike2049 ) ( ( (struct Array_2030) { ._arr = { ( (  from_dash_string208 ) ( ( "==" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "/=" ) ,  ( 2 ) ) ) } } ) ) ) ,  ( (struct envunion2032){ .fun = (  bool  (*) (  struct env2031*  ,    struct StrView_27  ) )lam2050 , .env =  envinst2031 } ) ) ) ) {
                        int32_t  cur_dash_off3930 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_20  type3931 = ( HighlightType_20_Special2 );
                        struct envunion2056  temp2055 = ( (struct envunion2056){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                        ( temp2055.fun ( &temp2055.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3930 ) , .f_type = (  type3931 ) } ) ) );
                    } else {
                        struct env2059 envinst2059 = {
                            .sc3916 =  sc3916 ,
                        };
                        if ( ( (  any2057 ) ( ( (  from_dash_listlike2075 ) ( ( (struct Array_2058) { ._arr = { ( (  from_dash_string208 ) ( ( "<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1233 ) ( ( "=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1233 ) ( ( "&" ) ,  ( 1 ) ) ) , ( (  from_dash_string208 ) ( ( "->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1233 ) ( ( ":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1233 ) ( ( "(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1233 ) ( ( ")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1233 ) ( ( "{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1233 ) ( ( "}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1233 ) ( ( "[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1233 ) ( ( "]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1233 ) ( ( "," ) ,  ( 1 ) ) ) } } ) ) ) ,  ( (struct envunion2060){ .fun = (  bool  (*) (  struct env2059*  ,    struct StrView_27  ) )lam2076 , .env =  envinst2059 } ) ) ) ) {
                            int32_t  cur_dash_off3934 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_20  type3935 = ( HighlightType_20_Special1 );
                            struct envunion2078  temp2077 = ( (struct envunion2078){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                            ( temp2077.fun ( &temp2077.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3934 ) , .f_type = (  type3935 ) } ) ) );
                        } else {
                            if ( ( (  char_dash_satisfies2023 ) ( (  sc3916 ) ,  (  is_dash_alpha1340 ) ) ) ) {
                                ( (  skip_dash_while2079 ) ( (  sc3916 ) ,  (  lam2081 ) ) );
                                int32_t  cur_dash_off3938 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                bool  first_dash_char_dash_uppercase3939 = ( (  maybe2082 ) ( (  first_dash_char3918 ) ,  (  is_dash_upper2083 ) ,  ( false ) ) );
                                enum HighlightType_20  type3940 = ( (  first_dash_char_dash_uppercase3939 ) ? ( HighlightType_20_Ident2 ) : ( HighlightType_20_Ident1 ) );
                                struct StrView_27  ident3941 = ( ( (  byte_dash_substr520 ) ( (  line_dash_sv3915 ) ,  ( (  i32_dash_size421 ) ( (  from_dash_off3917 ) ) ) ,  ( (  i32_dash_size421 ) ( (  cur_dash_off3938 ) ) ) ) ) );
                                struct Array_2084  keywords13942 = ( (  from_dash_listlike2085 ) ( ( (struct Array_2084) { ._arr = { ( (  from_dash_string208 ) ( ( "fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "class" ) ,  ( 5 ) ) ) , ( (  from_dash_string208 ) ( ( "inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string208 ) ( ( "external" ) ,  ( 8 ) ) ) , ( (  from_dash_string208 ) ( ( "use" ) ,  ( 3 ) ) ) } } ) ) );
                                struct Array_2086  keywords23943 = ( (  from_dash_listlike2087 ) ( ( (struct Array_2086) { ._arr = { ( (  from_dash_string208 ) ( ( "if" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string208 ) ( ( "else" ) ,  ( 4 ) ) ) , ( (  from_dash_string208 ) ( ( "case" ) ,  ( 4 ) ) ) , ( (  from_dash_string208 ) ( ( "for" ) ,  ( 3 ) ) ) , ( (  from_dash_string208 ) ( ( "in" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "while" ) ,  ( 5 ) ) ) , ( (  from_dash_string208 ) ( ( "pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string208 ) ( ( "break" ) ,  ( 5 ) ) ) , ( (  from_dash_string208 ) ( ( "continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string208 ) ( ( "as" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "or" ) ,  ( 2 ) ) ) , ( (  from_dash_string208 ) ( ( "and" ) ,  ( 3 ) ) ) , ( (  from_dash_string208 ) ( ( "not" ) ,  ( 3 ) ) ) , ( (  from_dash_string208 ) ( ( "return" ) ,  ( 6 ) ) ) } } ) ) );
                                struct env2089 envinst2089 = {
                                    .ident3941 =  ident3941 ,
                                };
                                if ( ( (  any2088 ) ( (  keywords13942 ) ,  ( (struct envunion2090){ .fun = (  bool  (*) (  struct env2089*  ,    struct StrView_27  ) )lam2105 , .env =  envinst2089 } ) ) ) ) {
                                    type3940 = ( HighlightType_20_Keyword1 );
                                } else {
                                    struct env2107 envinst2107 = {
                                        .ident3941 =  ident3941 ,
                                    };
                                    if ( ( (  any2106 ) ( (  keywords23943 ) ,  ( (struct envunion2108){ .fun = (  bool  (*) (  struct env2107*  ,    struct StrView_27  ) )lam2123 , .env =  envinst2107 } ) ) ) ) {
                                        type3940 = ( HighlightType_20_Keyword2 );
                                    } else {
                                        if ( ( ( ! (  first_dash_char_dash_uppercase3939 ) ) && (  eq1981 ( ( (  peek1979 ) ( (  sc3916 ) ) ) , ( ( Maybe_306_Just ) ( ( (  from_dash_charlike355 ) ( ( "(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                            type3940 = ( HighlightType_20_Ident4 );
                                        }
                                    }
                                }
                                struct envunion2125  temp2124 = ( (struct envunion2125){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                ( temp2124.fun ( &temp2124.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3938 ) , .f_type = (  type3940 ) } ) ) );
                            } else {
                                struct Maybe_982  dref3948 = ( (  int2126 ) ( (  sc3916 ) ) );
                                if ( dref3948.tag == Maybe_982_Just_t ) {
                                    int32_t  cur_dash_off3950 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_20  type3951 = ( HighlightType_20_Number );
                                    if ( (  eq1070 ( ( dref3948 .stuff .Maybe_982_Just_s .field0 ) , (  from_dash_integral297 ( 0 ) ) ) ) ) {
                                        if ( ( (  try_dash_char1980 ) ( (  sc3916 ) ,  ( (  from_dash_charlike355 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  skip_dash_while2127 ) ( (  sc3916 ) ,  (  is_dash_hex2129 ) ) );
                                            int32_t  cur_dash_off3952 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                            struct envunion2131  temp2130 = ( (struct envunion2131){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                            ( temp2130.fun ( &temp2130.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3952 ) , .f_type = (  type3951 ) } ) ) );
                                            ( (  skip_dash_while2132 ) ( (  sc3916 ) ,  (  is_dash_alpha1340 ) ) );
                                            int32_t  invalid_dash_off3953 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                            if ( ( !  eq527 ( (  cur_dash_off3952 ) , (  invalid_dash_off3953 ) ) ) ) {
                                                struct envunion2134  temp2133 = ( (struct envunion2134){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                ( temp2133.fun ( &temp2133.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3952 ) , .f_to = (  invalid_dash_off3953 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                            }
                                        } else {
                                            if ( ( (  try_dash_char1980 ) ( (  sc3916 ) ,  ( (  from_dash_charlike355 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while2135 ) ( (  sc3916 ) ,  (  is_dash_octal2137 ) ) );
                                                int32_t  cur_dash_off3954 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion2139  temp2138 = ( (struct envunion2139){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                ( temp2138.fun ( &temp2138.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3954 ) , .f_type = (  type3951 ) } ) ) );
                                                ( (  skip_dash_while2140 ) ( (  sc3916 ) ,  (  is_dash_digit988 ) ) );
                                                int32_t  invalid_dash_off3955 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq527 ( (  cur_dash_off3954 ) , (  invalid_dash_off3955 ) ) ) ) {
                                                    struct envunion2143  temp2142 = ( (struct envunion2143){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                    ( temp2142.fun ( &temp2142.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3954 ) , .f_to = (  invalid_dash_off3955 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char1980 ) ( (  sc3916 ) ,  ( (  from_dash_charlike355 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2144 ) ( (  sc3916 ) ,  (  is_dash_binary2146 ) ) );
                                                    int32_t  cur_dash_off3956 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2148  temp2147 = ( (struct envunion2148){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                    ( temp2147.fun ( &temp2147.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3956 ) , .f_type = (  type3951 ) } ) ) );
                                                    ( (  skip_dash_while2140 ) ( (  sc3916 ) ,  (  is_dash_digit988 ) ) );
                                                    int32_t  invalid_dash_off3957 = ( (  size_dash_i32338 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq527 ( (  cur_dash_off3956 ) , (  invalid_dash_off3957 ) ) ) ) {
                                                        struct envunion2150  temp2149 = ( (struct envunion2150){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                        ( temp2149.fun ( &temp2149.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3956 ) , .f_to = (  invalid_dash_off3957 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    struct envunion2152  temp2151 = ( (struct envunion2152){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                                    ( temp2151.fun ( &temp2151.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3950 ) , .f_type = (  type3951 ) } ) ) );
                                                }
                                            }
                                        }
                                    } else {
                                        struct envunion2154  temp2153 = ( (struct envunion2154){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1986 , .env =  env->envinst35 } );
                                        ( temp2153.fun ( &temp2153.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3950 ) , .f_type = (  type3951 ) } ) ) );
                                    }
                                }
                                else {
                                    if ( dref3948.tag == Maybe_982_None_t ) {
                                        ( (  drop_prime_995 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  struct Slice_18   subslice2157 (    struct Slice_18  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Highlight_19 *  begin_dash_ptr1789 = ( (  offset_dash_ptr2000 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp299 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp299 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub298 ( ( (  min508 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_2004   into_dash_iter2156 (    struct List_17  self2030 ) {
    return ( (  into_dash_iter2013 ) ( ( (  subslice2157 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  bool   between2159 (    int32_t  c1338 ,    int32_t  l1340 ,    int32_t  r1342 ) {
    int32_t  from1343 = ( (  min637 ) ( (  l1340 ) ,  (  r1342 ) ) );
    int32_t  to1344 = ( (  max1115 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp166 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp166 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  struct Maybe_212   highlight_dash_at1971 (   struct env145* env ,    struct TextBuf_114 *  self3960 ,    struct Pos_26  pos3962 ) {
    struct Line_16 *  line3963 = ( (  get_dash_ptr533 ) ( ( & ( ( * (  self3960 ) ) .f_buf ) ) ,  ( (  i32_dash_size421 ) ( ( (  pos3962 ) .f_line ) ) ) ) );
    struct envunion146  temp1972 = ( (struct envunion146){ .fun = (  enum Unit_8  (*) (  struct env143*  ,    struct TextBuf_114 *  ,    struct Line_16 *  ) )recompute_dash_highlights_dash_at_dash_line1973 , .env =  env->envinst143 } );
    ( temp1972.fun ( &temp1972.env ,  (  self3960 ) ,  (  line3963 ) ) );
    struct SliceIter_2004  temp2155 =  into_dash_iter2156 ( ( ( * (  line3963 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2009  __cond2158 =  next2010 (&temp2155);
        if (  __cond2158 .tag == 0 ) {
            break;
        }
        struct Highlight_19  hl3965 =  __cond2158 .stuff .Maybe_2009_Just_s .field0;
        if ( ( (  between2159 ) ( ( (  pos3962 ) .f_bi ) ,  ( (  hl3965 ) .f_from ) ,  (  op_dash_sub173 ( ( (  hl3965 ) .f_to ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_212_Just ) ( ( (  hl3965 ) .f_type ) ) );
        }
        if ( (  cmp166 ( ( (  pos3962 ) .f_bi ) , ( (  hl3965 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_212) { .tag = Maybe_212_None_t } );
        }
    }
    return ( (struct Maybe_212) { .tag = Maybe_212_None_t } );
}

struct Maybe_2163 {
    enum {
        Maybe_2163_None_t,
        Maybe_2163_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_184  field0;
        } Maybe_2163_Just_s;
    } stuff;
};

static struct Maybe_2163 Maybe_2163_Just (  struct HighlightColors_184  field0 ) {
    return ( struct Maybe_2163 ) { .tag = Maybe_2163_Just_t, .stuff = { .Maybe_2163_Just_s = { .field0 = field0 } } };
};

struct env2164 {
    struct Theme_181 *  theme4001;
    ;
};

struct envunion2165 {
    struct Colors_182  (*fun) (  struct env2164*  ,    struct HighlightColors_184  );
    struct env2164 env;
};

static  struct Colors_182   maybe2162 (    struct Maybe_2163  x1283 ,   struct envunion2165  fun1285 ,    struct Colors_182  default1287 ) {
    struct envunion2165  temp2166 = (  fun1285 );
    return ( {  struct Maybe_2163  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_2163_Just_t ? ( temp2166.fun ( &temp2166.env ,  ( dref1288 .stuff .Maybe_2163_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

struct SliceIter_2169 {
    struct Slice_183  f_slice;
    size_t  f_current_dash_offset;
};

struct env2170 {
    ;
    enum HighlightType_20  hltype4003;
};

struct envunion2171 {
    bool  (*fun) (  struct env2170*  ,    struct HighlightColors_184  );
    struct env2170 env;
};

struct Filter_2168 {
    struct SliceIter_2169  f_og;
    struct envunion2171  f_fun;
};

static  struct HighlightColors_184 *   offset_dash_ptr2174 (    struct HighlightColors_184 *  x338 ,    int64_t  count340 ) {
    struct HighlightColors_184  temp2175;
    return ( (struct HighlightColors_184 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul295 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2175 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2163   next2173 (    struct SliceIter_2169 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2163) { .tag = Maybe_2163_None_t } );
    }
    struct HighlightColors_184  elem1832 = ( * ( (  offset_dash_ptr2174 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2163_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2163   next2172 (    struct Filter_2168 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_2163  dref835 = ( (  next2173 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_2163_None_t ) {
            return ( (struct Maybe_2163) { .tag = Maybe_2163_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_2163_Just_t ) {
                struct envunion2171  temp2176 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp2176.fun ( &temp2176.env ,  ( dref835 .stuff .Maybe_2163_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2163_Just ) ( ( dref835 .stuff .Maybe_2163_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2163  temp2177;
    return (  temp2177 );
}

static  struct Filter_2168   into_dash_iter2179 (    struct Filter_2168  self831 ) {
    return (  self831 );
}

static  struct Maybe_2163   head2167 (    struct Filter_2168  it1143 ) {
    struct Filter_2168  temp2178 = ( (  into_dash_iter2179 ) ( (  it1143 ) ) );
    return ( (  next2172 ) ( ( &temp2178 ) ) );
}

static  struct SliceIter_2169   into_dash_iter2181 (    struct Slice_183  self1824 ) {
    return ( (struct SliceIter_2169) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2168   filter2180 (    struct Slice_183  iterable839 ,   struct envunion2171  fun841 ) {
    struct SliceIter_2169  it842 = ( (  into_dash_iter2181 ) ( (  iterable839 ) ) );
    return ( (struct Filter_2168) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  enum HighlightType_20 *   cast2186 (    uint32_t *  x356 ) {
    return ( (enum HighlightType_20 * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2184 (    enum HighlightType_20  x574 ) {
    uint32_t  temp2185 = ( (  zeroed822 ) ( ) );
    uint32_t *  y575 = ( &temp2185 );
    enum HighlightType_20 *  yp576 = ( (  cast2186 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2183 (    enum HighlightType_20  l3648 ,    enum HighlightType_20  r3650 ) {
    return (  eq588 ( ( ( (  cast_dash_on_dash_zeroed2184 ) ( (  l3648 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2184 ) ( (  r3650 ) ) ) ) );
}

static  bool   lam2182 (   struct env2170* env ,    struct HighlightColors_184  hlc4005 ) {
    return (  eq2183 ( ( (  hlc4005 ) .f_type ) , ( env->hltype4003 ) ) );
}

static  struct Color_147   or_dash_else2188 (    struct Maybe_185  self1734 ,    struct Color_147  alt1736 ) {
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

static  struct Colors_182   lam2187 (   struct env2164* env ,    struct HighlightColors_184  hlc4007 ) {
    return ( (struct Colors_182) { .f_fg = ( (  hlc4007 ) .f_fg ) , .f_bg = ( (  or_dash_else2188 ) ( ( (  hlc4007 ) .f_bg ) ,  ( ( ( * ( env->theme4001 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_182   find_dash_colors_dash_for_dash_highlight2161 (    struct Theme_181 *  theme4001 ,    enum HighlightType_20  hltype4003 ) {
    struct env2170 envinst2170 = {
        .hltype4003 =  hltype4003 ,
    };
    struct env2164 envinst2164 = {
        .theme4001 =  theme4001 ,
    };
    return ( (  maybe2162 ) ( ( (  head2167 ) ( ( (  filter2180 ) ( ( ( * (  theme4001 ) ) .f_highlights ) ,  ( (struct envunion2171){ .fun = (  bool  (*) (  struct env2170*  ,    struct HighlightColors_184  ) )lam2182 , .env =  envinst2170 } ) ) ) ) ) ,  ( (struct envunion2165){ .fun = (  struct Colors_182  (*) (  struct env2164*  ,    struct HighlightColors_184  ) )lam2187 , .env =  envinst2164 } ) ,  ( ( * (  theme4001 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2160 (   struct env1967* env ,    enum HighlightType_20  type4134 ) {
    ( (  set_dash_colors1932 ) ( ( env->screen4104 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2161 ) ( ( env->theme4111 ) ,  (  type4134 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2192 (  ) {
    ( (  print1351 ) ( ( (  from_dash_string208 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1714 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2191 (    enum Mode_230  mode4022 ) {
    return ( {  enum Mode_230  dref4023 = (  mode4022 ) ;  dref4023 == Mode_230_Normal ? ( (  from_dash_string208 ) ( ( "NOR" ) ,  ( 3 ) ) ) :  dref4023 == Mode_230_Insert ? ( (  from_dash_string208 ) ( ( "INS" ) ,  ( 3 ) ) ) :  dref4023 == Mode_230_Select ? ( (  from_dash_string208 ) ( ( "SEL" ) ,  ( 3 ) ) ) : ( (  todo2192 ) ( ) ) ; } );
}

struct StrConcat_2195 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2195 StrConcat_2195_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2195 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2194 {
    struct StrConcat_2195  field0;
    struct Char_65  field1;
};

static struct StrConcat_2194 StrConcat_2194_StrConcat (  struct StrConcat_2195  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2194 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2198 {
    struct AppendIter_63  f_left;
    struct StrViewIter_62  f_right;
};

struct StrConcatIter_2197 {
    struct StrConcatIter_2198  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2197   into_dash_iter2199 (    struct StrConcatIter_2197  self1498 ) {
    return (  self1498 );
}

static  struct StrConcatIter_2198   into_dash_iter2203 (    struct StrConcat_2195  dref1505 ) {
    return ( (struct StrConcatIter_2198) { .f_left = ( (  chars704 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2198   chars2202 (    struct StrConcat_2195  self1516 ) {
    return ( (  into_dash_iter2203 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2197   into_dash_iter2201 (    struct StrConcat_2194  dref1505 ) {
    return ( (struct StrConcatIter_2197) { .f_left = ( (  chars2202 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars704 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2197   chars2200 (    struct StrConcat_2194  self1516 ) {
    return ( (  into_dash_iter2201 ) ( (  self1516 ) ) );
}

static  struct Maybe_306   next2206 (    struct StrConcatIter_2198 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next2205 (    struct StrConcatIter_2197 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2206 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2193 (    struct Screen_285 *  screen3584 ,    struct StrConcat_2194  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1543 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min637 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size421 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct StrConcatIter_2197  temp2196 =  into_dash_iter2199 ( ( (  chars2200 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_306  __cond2204 =  next2205 (&temp2196);
        if (  __cond2204 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond2204 .stuff .Maybe_306_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1114 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1907 (   struct env210* env ,    struct Screen_285 *  screen4104 ,    struct Pane_229 *  pane4106 ,    struct ScreenDims_288  sd4108 ,    struct Config_259 *  cfg4110 ) {
    struct Theme_181 *  theme4111 = ( ( * (  cfg4110 ) ) .f_theme );
    bool  display_dash_line_dash_numbers4112 = ( ( * (  cfg4110 ) ) .f_display_dash_line_dash_numbers );
    bool  relative_dash_line_dash_numbers4113 = ( ( * (  cfg4110 ) ) .f_relative_dash_line_dash_numbers );
    ( (  update_dash_screen_dash_offset1908 ) ( (  pane4106 ) ,  (  sd4108 ) ) );
    struct ScreenCursorOffset_231  sc_dash_off4114 = ( ( * (  pane4106 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars4115 = ( (  size_dash_i32338 ) ( ( (  count1911 ) ( ( (  chars1927 ) ( ( (  num_dash_lines1142 ) ( ( ( * (  pane4106 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4116 = (  from_dash_integral67 ( 2 ) );
    int32_t  num_dash_back_dash_margin4117 = (  from_dash_integral67 ( 2 ) );
    int32_t  total_dash_margin4118 = ( (  display_dash_line_dash_numbers4112 ) ? (  op_dash_add168 ( (  op_dash_add168 ( (  max_dash_line_dash_num_dash_chars4115 ) , (  num_dash_front_dash_margin4116 ) ) ) , (  num_dash_back_dash_margin4117 ) ) ) : (  from_dash_integral67 ( 0 ) ) );
    struct RangeIter_162  temp1930 =  into_dash_iter163 ( ( (  to172 ) ( (  op_dash_add168 ( ( (  sc_dash_off4114 ) .f_screen_dash_top ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  ( (  min637 ) ( ( (  num_dash_lines1142 ) ( ( ( * (  pane4106 ) ) .f_buf ) ) ) ,  (  op_dash_add168 ( ( (  sc_dash_off4114 ) .f_screen_dash_top ) , ( (  screen_dash_height1910 ) ( (  sd4108 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1931 =  next165 (&temp1930);
        if (  __cond1931 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4120 =  __cond1931 .stuff .Maybe_164_Just_s .field0;
        int32_t  ybi4121 = (  op_dash_sub173 ( (  line_dash_num4120 ) , (  from_dash_integral67 ( 1 ) ) ) );
        int32_t  xbi4122 = ( (  vi_dash_bi1144 ) ( ( ( * (  pane4106 ) ) .f_buf ) ,  (  ybi4121 ) ,  ( (  sc_dash_off4114 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4123 = ( (  line1102 ) ( ( ( * (  pane4106 ) ) .f_buf ) ,  (  ybi4121 ) ) );
        int32_t  ys4124 = (  op_dash_sub173 ( (  op_dash_sub173 ( (  op_dash_add168 ( ( (  sd4108 ) .f_from_dash_sy ) , (  line_dash_num4120 ) ) ) , ( (  sc_dash_off4114 ) .f_screen_dash_top ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4112 ) ) {
            if ( (  eq527 ( ( ( ( * (  pane4106 ) ) .f_cursor ) .f_line ) , (  ybi4121 ) ) ) ) {
                ( (  set_dash_colors1932 ) ( (  screen4104 ) ,  ( ( * (  theme4111 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors1932 ) ( (  screen4104 ) ,  ( ( * (  theme4111 ) ) .f_line_dash_num ) ) );
            }
            int32_t  line_dash_display4125 = ( ( ( ! (  relative_dash_line_dash_numbers4113 ) ) || (  eq527 ( ( ( ( * (  pane4106 ) ) .f_cursor ) .f_line ) , (  ybi4121 ) ) ) ) ? (  line_dash_num4120 ) : ( (  abs1934 ) ( (  op_dash_sub173 ( ( ( ( * (  pane4106 ) ) .f_cursor ) .f_line ) , (  ybi4121 ) ) ) ) ) );
            ( (  draw_dash_str_dash_right1935 ) ( (  screen4104 ) ,  (  line_dash_display4125 ) ,  (  op_dash_add168 ( (  op_dash_sub173 ( (  op_dash_sub173 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4104 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4108 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4118 ) ) ) , (  num_dash_back_dash_margin4117 ) ) ) ,  (  ys4124 ) ) );
            ( (  set_dash_colors1932 ) ( (  screen4104 ) ,  ( ( * (  theme4111 ) ) .f_default ) ) );
        }
        int32_t  vx4126 = (  op_dash_sub173 ( ( (  pos_dash_vi1100 ) ( ( ( * (  pane4106 ) ) .f_buf ) ,  ( (  mk673 ) ( (  ybi4121 ) ,  (  xbi4122 ) ) ) ) ) , ( (  sc_dash_off4114 ) .f_screen_dash_left ) ) );
        ( (  assert1951 ) ( (  cmp166 ( (  vx4126 ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1952_StrConcat ) ( ( (  from_dash_string208 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4126 ) ) ) ) );
        int32_t  left_dash_offset4127 = (  op_dash_add168 ( ( (  sd4108 ) .f_from_dash_sx ) , (  total_dash_margin4118 ) ) );
        struct AppendIter_1959  temp1958 =  into_dash_iter1960 ( ( (  append1961 ) ( ( (  chars702 ) ( ( (  byte_dash_substr_dash_from1536 ) ( (  line_dash_content4123 ) ,  ( (  i32_dash_size421 ) ( (  xbi4122 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_306  __cond1962 =  next1963 (&temp1958);
            if (  __cond1962 .tag == 0 ) {
                break;
            }
            struct Char_65  c4129 =  __cond1962 .stuff .Maybe_306_Just_s .field0;
            if ( (  cmp166 ( (  vx4126 ) , ( (  sd4108 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4130 = ( (  mk673 ) ( (  ybi4121 ) ,  (  xbi4122 ) ) );
            bool  is_dash_cursor4131 = (  eq526 ( (  curpos4130 ) , ( ( * (  pane4106 ) ) .f_cursor ) ) );
            bool  in_dash_selection4132 = ( (  is_dash_in_dash_selection1964 ) ( (  pane4106 ) ,  ( (  mk673 ) ( (  ybi4121 ) ,  (  xbi4122 ) ) ) ) );
            if ( (  is_dash_cursor4131 ) ) {
                ( (  set_dash_colors1932 ) ( (  screen4104 ) ,  ( ( * (  theme4111 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4132 ) ) {
                    ( (  set_dash_colors1932 ) ( (  screen4104 ) ,  ( ( * (  theme4111 ) ) .f_selection ) ) );
                } else {
                    struct envunion211  temp1970 = ( (struct envunion211){ .fun = (  struct Maybe_212  (*) (  struct env145*  ,    struct TextBuf_114 *  ,    struct Pos_26  ) )highlight_dash_at1971 , .env =  env->envinst145 } );
                    struct env1967 envinst1967 = {
                        .screen4104 =  screen4104 ,
                        .theme4111 =  theme4111 ,
                    };
                    ( (  if_dash_just1966 ) ( ( temp1970.fun ( &temp1970.env ,  ( ( * (  pane4106 ) ) .f_buf ) ,  (  curpos4130 ) ) ) ,  ( (struct envunion1968){ .fun = (  enum Unit_8  (*) (  struct env1967*  ,    enum HighlightType_20  ) )lam2160 , .env =  envinst1967 } ) ) );
                }
            }
            struct Maybe_94  dref4135 = ( (  char_dash_replacement1107 ) ( (  c4129 ) ) );
            if ( dref4135.tag == Maybe_94_None_t ) {
                if ( ( ! ( (  cmp166 ( (  vx4126 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  op_dash_sub173 ( (  op_dash_add168 ( (  vx4126 ) , ( (  char_dash_screen_dash_width1105 ) ( (  c4129 ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , ( (  sd4108 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1948 ) ( (  screen4104 ) ,  (  c4129 ) ,  (  op_dash_add168 ( (  left_dash_offset4127 ) , (  vx4126 ) ) ) ,  (  ys4124 ) ) );
                }
                vx4126 = (  op_dash_add168 ( (  vx4126 ) , ( (  char_dash_screen_dash_width1105 ) ( (  c4129 ) ) ) ) );
            }
            else {
                if ( dref4135.tag == Maybe_94_Just_t ) {
                    struct StrViewIter_62  temp2189 =  into_dash_iter789 ( ( (  chars702 ) ( ( dref4135 .stuff .Maybe_94_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_306  __cond2190 =  next690 (&temp2189);
                        if (  __cond2190 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4138 =  __cond2190 .stuff .Maybe_306_Just_s .field0;
                        if ( (  cmp166 ( (  vx4126 ) , (  from_dash_integral67 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1948 ) ( (  screen4104 ) ,  (  c4138 ) ,  (  op_dash_add168 ( (  left_dash_offset4127 ) , (  vx4126 ) ) ) ,  (  ys4124 ) ) );
                        }
                        vx4126 = (  op_dash_add168 ( (  vx4126 ) , ( (  char_dash_screen_dash_width1105 ) ( (  c4138 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors1932 ) ( (  screen4104 ) ,  ( ( * (  theme4111 ) ) .f_default ) ) );
            xbi4122 = (  op_dash_add168 ( (  xbi4122 ) , ( (  size_dash_i32338 ) ( ( (  c4129 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors1932 ) ( (  screen4104 ) ,  ( ( * (  theme4111 ) ) .f_overlay ) ) );
    struct StrView_27  modename4139 = ( (  short_dash_mode_dash_name2191 ) ( ( ( * (  pane4106 ) ) .f_mode ) ) );
    ( (  draw_dash_str2193 ) ( (  screen4104 ) ,  ( ( StrConcat_2194_StrConcat ) ( ( ( StrConcat_2195_StrConcat ) ( ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  modename4139 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4108 ) .f_from_dash_sx ) ,  ( (  sd4108 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2208 {
    ;
    ;
    ;
    ;
    struct Screen_285 *  screen4520;
    ;
    ;
    ;
    ;
    ;
};

struct envunion2209 {
    enum Unit_8  (*fun) (  struct env2208*  ,    struct StrView_27  );
    struct env2208 env;
};

static  enum Unit_8   if_dash_just2207 (    struct Maybe_94  x1292 ,   struct envunion2209  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion2209  temp2210 = (  fun1294 );
        ( temp2210.fun ( &temp2210.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2211 (   struct env2208* env ,    struct StrView_27  msg4525 ) {
    int32_t  num_dash_chars4526 = ( (  size_dash_i32338 ) ( ( (  count1109 ) ( ( (  chars702 ) ( (  msg4525 ) ) ) ) ) ) );
    ( (  draw_dash_str2193 ) ( ( env->screen4520 ) ,  ( ( StrConcat_2194_StrConcat ) ( ( ( StrConcat_2195_StrConcat ) ( ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  msg4525 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1542 ( (  op_dash_sub173 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * ( env->screen4520 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4526 ) ) ) , (  from_dash_integral67 ( 2 ) ) ) ) ,  (  op_dash_sub173 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * ( env->screen4520 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2214 {
    struct StrView_27  field0;
    struct StrBuilder_73  field1;
};

static struct StrConcat_2214 StrConcat_2214_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_73  field1 ) {
    return ( struct StrConcat_2214 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2213 {
    struct StrConcat_2214  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2213 StrConcat_2213_StrConcat (  struct StrConcat_2214  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2213 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2212 {
    struct StrConcat_2213  field0;
    struct Char_65  field1;
};

static struct StrConcat_2212 StrConcat_2212_StrConcat (  struct StrConcat_2213  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2212 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2217 {
    struct StrConcatIter_61  f_left;
    struct StrViewIter_62  f_right;
};

struct StrConcatIter_2216 {
    struct StrConcatIter_2217  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2216   into_dash_iter2219 (    struct StrConcatIter_2216  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_306   next2221 (    struct StrConcatIter_2217 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next2220 (    struct StrConcatIter_2216 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2221 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2218 (    struct StrConcatIter_2216  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrConcatIter_2216  it1100 = ( (  into_dash_iter2219 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_306  dref1101 = ( (  next2220 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_306_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_306_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_306_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2222 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2222);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2223;
    return (  temp2223 );
}

static  size_t   lam2224 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add320 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2215 (    struct StrConcatIter_2216  it1105 ) {
    return ( (  reduce2218 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2224 ) ) );
}

static  struct StrConcatIter_61   into_dash_iter2230 (    struct StrConcat_2214  dref1505 ) {
    return ( (struct StrConcatIter_61) { .f_left = ( (  chars702 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1718 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_61   chars2229 (    struct StrConcat_2214  self1516 ) {
    return ( (  into_dash_iter2230 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2217   into_dash_iter2228 (    struct StrConcat_2213  dref1505 ) {
    return ( (struct StrConcatIter_2217) { .f_left = ( (  chars2229 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2217   chars2227 (    struct StrConcat_2213  self1516 ) {
    return ( (  into_dash_iter2228 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2216   into_dash_iter2226 (    struct StrConcat_2212  dref1505 ) {
    return ( (struct StrConcatIter_2216) { .f_left = ( (  chars2227 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars704 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2216   chars2225 (    struct StrConcat_2212  self1516 ) {
    return ( (  into_dash_iter2226 ) ( (  self1516 ) ) );
}

static  enum Unit_8   draw_dash_str2231 (    struct Screen_285 *  screen3584 ,    struct StrConcat_2212  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1543 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min637 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size421 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct StrConcatIter_2216  temp2232 =  into_dash_iter2219 ( ( (  chars2225 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_306  __cond2233 =  next2220 (&temp2232);
        if (  __cond2233 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond2233 .stuff .Maybe_306_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1114 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2234 {
    struct StrConcat_2213  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2234 StrConcat_2234_StrConcat (  struct StrConcat_2213  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2234 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2236 {
    struct StrConcatIter_2217  f_left;
    struct StrViewIter_62  f_right;
};

static  struct StrConcatIter_2236   into_dash_iter2238 (    struct StrConcatIter_2236  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_306   next2239 (    struct StrConcatIter_2236 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2221 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2237 (    struct StrConcatIter_2236  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrConcatIter_2236  it1100 = ( (  into_dash_iter2238 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_306  dref1101 = ( (  next2239 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_306_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_306_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_306_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2240 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2240);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2241;
    return (  temp2241 );
}

static  size_t   lam2242 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add320 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2235 (    struct StrConcatIter_2236  it1105 ) {
    return ( (  reduce2237 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2242 ) ) );
}

static  struct StrConcatIter_2236   into_dash_iter2244 (    struct StrConcat_2234  dref1505 ) {
    return ( (struct StrConcatIter_2236) { .f_left = ( (  chars2227 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2236   chars2243 (    struct StrConcat_2234  self1516 ) {
    return ( (  into_dash_iter2244 ) ( (  self1516 ) ) );
}

static  enum Unit_8   draw_dash_str2245 (    struct Screen_285 *  screen3584 ,    struct StrConcat_2234  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1543 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min637 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size421 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct StrConcatIter_2236  temp2246 =  into_dash_iter2238 ( ( (  chars2243 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_306  __cond2247 =  next2239 (&temp2246);
        if (  __cond2247 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond2247 .stuff .Maybe_306_Just_s .field0;
        ( (  put_dash_char1948 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1114 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1905 (   struct env283* env ,    struct Screen_285 *  screen4520 ,    struct Editor_257 *  ed4522 ) {
    struct ScreenDims_288  screen_dash_dims4523 = ( (struct ScreenDims_288) { .f_from_dash_sx = (  from_dash_integral67 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub173 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4520 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral67 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub173 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4520 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) } );
    struct envunion284  temp1906 = ( (struct envunion284){ .fun = (  enum Unit_8  (*) (  struct env210*  ,    struct Screen_285 *  ,    struct Pane_229 *  ,    struct ScreenDims_288  ,    struct Config_259 *  ) )render1907 , .env =  env->envinst210 } );
    ( temp1906.fun ( &temp1906.env ,  (  screen4520 ) ,  ( (  pane1139 ) ( (  ed4522 ) ) ) ,  (  screen_dash_dims4523 ) ,  ( ( * (  ed4522 ) ) .f_cfg ) ) );
    struct env2208 envinst2208 = {
        .screen4520 =  screen4520 ,
    };
    ( (  if_dash_just2207 ) ( ( ( * (  ed4522 ) ) .f_msg ) ,  ( (struct envunion2209){ .fun = (  enum Unit_8  (*) (  struct env2208*  ,    struct StrView_27  ) )lam2211 , .env =  envinst2208 } ) ) );
    struct EditorMode_258  dref4527 = ( ( * (  ed4522 ) ) .f_mode );
    if ( dref4527.tag == EditorMode_258_Normal_t ) {
    }
    else {
        if ( dref4527.tag == EditorMode_258_Cmd_t ) {
            int32_t  num_dash_chars4529 = ( (  size_dash_i32338 ) ( ( (  count1109 ) ( ( (  chars1718 ) ( ( dref4527 .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4530 = ( (  eq527 ( ( (  mod1541 ) ( (  num_dash_chars4529 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) , (  from_dash_integral67 ( 0 ) ) ) ) ? ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1233 ) ( ( " " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4531 = (  op_dash_add168 ( (  num_dash_chars4529 ) , ( (  mod1541 ) ( (  num_dash_chars4529 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) ) );
            struct StrConcat_2212  full_dash_str4532 = ( ( StrConcat_2212_StrConcat ) ( ( ( StrConcat_2213_StrConcat ) ( ( ( StrConcat_2214_StrConcat ) ( ( (  from_dash_string208 ) ( ( " \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4527 .stuff .EditorMode_258_Cmd_s .field1 ) ) ) ,  (  pad4530 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4533 = ( (  size_dash_i32338 ) ( ( (  count2215 ) ( ( (  chars2225 ) ( (  full_dash_str4532 ) ) ) ) ) ) );
            ( (  draw_dash_str2231 ) ( (  screen4520 ) ,  (  full_dash_str4532 ) ,  (  op_dash_div1542 ( (  op_dash_sub173 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4520 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4533 ) ) ) , (  from_dash_integral67 ( 2 ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
        }
        else {
            if ( dref4527.tag == EditorMode_258_Search_t ) {
                int32_t  num_dash_chars4535 = ( (  size_dash_i32338 ) ( ( (  count1109 ) ( ( (  chars1718 ) ( ( dref4527 .stuff .EditorMode_258_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4536 = ( (  eq527 ( ( (  mod1541 ) ( (  num_dash_chars4535 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) , (  from_dash_integral67 ( 0 ) ) ) ) ? ( (  from_dash_string208 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1233 ) ( ( " " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4537 = (  op_dash_add168 ( (  num_dash_chars4535 ) , ( (  mod1541 ) ( (  num_dash_chars4535 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) ) );
                struct StrConcat_2234  full_dash_str4538 = ( ( StrConcat_2234_StrConcat ) ( ( ( StrConcat_2213_StrConcat ) ( ( ( StrConcat_2214_StrConcat ) ( ( (  from_dash_string208 ) ( ( " \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4527 .stuff .EditorMode_258_Search_s .field1 ) ) ) ,  (  pad4536 ) ) ) ,  ( (  from_dash_string208 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4539 = ( (  size_dash_i32338 ) ( ( (  count2235 ) ( ( (  chars2243 ) ( (  full_dash_str4538 ) ) ) ) ) ) );
                ( (  draw_dash_str2245 ) ( (  screen4520 ) ,  (  full_dash_str4538 ) ,  (  op_dash_div1542 ( (  op_dash_sub173 ( ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen4520 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4539 ) ) ) , (  from_dash_integral67 ( 2 ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
            }
        }
    }
    int32_t  temp2248 = (  from_dash_integral67 ( 0 ) );
    int32_t *  curline4540 = ( &temp2248 );
    return ( Unit_8_Unit );
}

struct RenderState_2250 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_147  f_fg;
    struct Color_147  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2257 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2257 StrConcat_2257_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2257 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2256 {
    struct StrConcat_2257  field0;
    struct Char_65  field1;
};

static struct StrConcat_2256 StrConcat_2256_StrConcat (  struct StrConcat_2257  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2256 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2255 {
    struct StrConcat_2256  field0;
    uint32_t  field1;
};

static struct StrConcat_2255 StrConcat_2255_StrConcat (  struct StrConcat_2256  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2255 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2254 {
    struct StrConcat_2255  field0;
    struct Char_65  field1;
};

static struct StrConcat_2254 StrConcat_2254_StrConcat (  struct StrConcat_2255  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2254 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2263 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2262 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_2263  f_right;
};

struct StrConcatIter_2261 {
    struct StrConcatIter_2262  f_left;
    struct AppendIter_63  f_right;
};

struct StrConcatIter_2260 {
    struct StrConcatIter_2261  f_left;
    struct IntStrIter_2263  f_right;
};

struct StrConcatIter_2259 {
    struct StrConcatIter_2260  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2259   into_dash_iter2265 (    struct StrConcatIter_2259  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_306   next2270 (    struct IntStrIter_2263 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_306_Just ) ( ( (  from_dash_charlike355 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    uint32_t  trim_dash_down1430 = ( (  pow157 ) ( (  from_dash_integral174 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    uint32_t  upper1431 = (  op_dash_div156 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    uint32_t  upper_dash_mask1432 = (  op_dash_mul176 ( (  op_dash_div156 ( (  upper1431 ) , (  from_dash_integral174 ( 10 ) ) ) ) , (  from_dash_integral174 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast154 ) ( (  op_dash_sub178 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81052 ) ( (  op_dash_add948 ( (  digit1433 ) , (  from_dash_integral317 ( 48 ) ) ) ) ) );
    return ( ( Maybe_306_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_306   next2269 (    struct StrConcatIter_2262 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next2270 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next2268 (    struct StrConcatIter_2261 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2269 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next2267 (    struct StrConcatIter_2260 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2268 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next2270 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next2266 (    struct StrConcatIter_2259 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2267 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2258 (    struct StrConcatIter_2259  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2259  temp2264 = ( (  into_dash_iter2265 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2259 *  it1078 = ( &temp2264 );
    while ( ( true ) ) {
        struct Maybe_306  dref1079 = ( (  next2266 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_306_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2281 (    uint32_t  self1437 ) {
    if ( (  eq588 ( (  self1437 ) , (  from_dash_integral174 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp179 ( (  self1437 ) , (  from_dash_integral174 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div156 ( (  self1437 ) , (  from_dash_integral174 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_2263   uint_dash_iter2280 (    uint32_t  int1444 ) {
    return ( (struct IntStrIter_2263) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits2281 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2263   chars2279 (    uint32_t  self1456 ) {
    return ( (  uint_dash_iter2280 ) ( (  self1456 ) ) );
}

static  struct StrConcatIter_2262   into_dash_iter2278 (    struct StrConcat_2257  dref1505 ) {
    return ( (struct StrConcatIter_2262) { .f_left = ( (  chars702 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2279 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2262   chars2277 (    struct StrConcat_2257  self1516 ) {
    return ( (  into_dash_iter2278 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2261   into_dash_iter2276 (    struct StrConcat_2256  dref1505 ) {
    return ( (struct StrConcatIter_2261) { .f_left = ( (  chars2277 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars704 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2261   chars2275 (    struct StrConcat_2256  self1516 ) {
    return ( (  into_dash_iter2276 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2260   into_dash_iter2274 (    struct StrConcat_2255  dref1505 ) {
    return ( (struct StrConcatIter_2260) { .f_left = ( (  chars2275 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2279 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2260   chars2273 (    struct StrConcat_2255  self1516 ) {
    return ( (  into_dash_iter2274 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2259   into_dash_iter2272 (    struct StrConcat_2254  dref1505 ) {
    return ( (struct StrConcatIter_2259) { .f_left = ( (  chars2273 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars704 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2259   chars2271 (    struct StrConcat_2254  self1516 ) {
    return ( (  into_dash_iter2272 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2253 (    struct StrConcat_2254  s2593 ) {
    ( (  for_dash_each2258 ) ( ( (  chars2271 ) ( (  s2593 ) ) ) ,  (  printf_dash_char345 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2252 (    uint32_t  x2607 ,    uint32_t  y2609 ) {
    uint32_t  x2610 = (  op_dash_add180 ( (  x2607 ) , (  from_dash_integral174 ( 1 ) ) ) );
    uint32_t  y2611 = (  op_dash_add180 ( (  y2609 ) , (  from_dash_integral174 ( 1 ) ) ) );
    ( (  print2253 ) ( ( ( StrConcat_2254_StrConcat ) ( ( ( StrConcat_2255_StrConcat ) ( ( ( StrConcat_2256_StrConcat ) ( ( ( StrConcat_2257_StrConcat ) ( ( (  from_dash_string208 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2611 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2610 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_286   subslice2284 (    struct Slice_286  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Cell_287 *  begin_dash_ptr1789 = ( (  offset_dash_ptr865 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp299 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp299 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_286) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub298 ( ( (  min508 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_286) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

struct SliceIter_2287 {
    struct Slice_286  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2286 {
    struct SliceIter_2287  f_left_dash_it;
    struct SliceIter_2287  f_right_dash_it;
};

struct Tuple2_2288 {
    struct Cell_287  field0;
    struct Cell_287  field1;
};

static struct Tuple2_2288 Tuple2_2288_Tuple2 (  struct Cell_287  field0 ,  struct Cell_287  field1 ) {
    return ( struct Tuple2_2288 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2290 {
    bool (*  fun1136 )(    struct Tuple2_2288  );
};

struct envunion2291 {
    bool  (*fun) (  struct env2290*  ,    struct Tuple2_2288  ,    bool  );
    struct env2290 env;
};

static  struct Zip_2286   into_dash_iter2292 (    struct Zip_2286  self912 ) {
    return (  self912 );
}

struct Maybe_2293 {
    enum {
        Maybe_2293_None_t,
        Maybe_2293_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2288  field0;
        } Maybe_2293_Just_s;
    } stuff;
};

static struct Maybe_2293 Maybe_2293_Just (  struct Tuple2_2288  field0 ) {
    return ( struct Maybe_2293 ) { .tag = Maybe_2293_Just_t, .stuff = { .Maybe_2293_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_870   next2295 (    struct SliceIter_2287 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp299 ( (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_870) { .tag = Maybe_870_None_t } );
    }
    struct Cell_287  elem1832 = ( * ( (  offset_dash_ptr865 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64311 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add320 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_870_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2293   next2294 (    struct Zip_2286 *  self915 ) {
    struct Zip_2286  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_870  dref917 = ( (  next2295 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_870_None_t ) {
            return ( (struct Maybe_2293) { .tag = Maybe_2293_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_870_Just_t ) {
                struct Maybe_870  dref919 = ( (  next2295 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_870_None_t ) {
                    return ( (struct Maybe_2293) { .tag = Maybe_2293_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_870_Just_t ) {
                        ( (  next2295 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2295 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2293_Just ) ( ( ( Tuple2_2288_Tuple2 ) ( ( dref917 .stuff .Maybe_870_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_870_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2289 (    struct Zip_2286  iterable1094 ,    bool  base1096 ,   struct envunion2291  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct Zip_2286  it1100 = ( (  into_dash_iter2292 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_2293  dref1101 = ( (  next2294 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_2293_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_2293_Just_t ) {
                struct envunion2291  temp2296 = (  fun1098 );
                x1099 = ( temp2296.fun ( &temp2296.env ,  ( dref1101 .stuff .Maybe_2293_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2297 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2297);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2298;
    return (  temp2298 );
}

static  bool   lam2299 (   struct env2290* env ,    struct Tuple2_2288  e1138 ,    bool  x1140 ) {
    return ( ( ( env->fun1136 ) ( (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2285 (    struct Zip_2286  it1134 ,    bool (*  fun1136 )(    struct Tuple2_2288  ) ) {
    struct env2290 envinst2290 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2289 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2291){ .fun = (  bool  (*) (  struct env2290*  ,    struct Tuple2_2288  ,    bool  ) )lam2299 , .env =  envinst2290 } ) ) );
}

static  struct SliceIter_2287   into_dash_iter2301 (    struct Slice_286  self1824 ) {
    return ( (struct SliceIter_2287) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2286   zip2300 (    struct Slice_286  left923 ,    struct Slice_286  right925 ) {
    struct SliceIter_2287  left_dash_it926 = ( (  into_dash_iter2301 ) ( (  left923 ) ) );
    struct SliceIter_2287  right_dash_it927 = ( (  into_dash_iter2301 ) ( (  right925 ) ) );
    return ( (struct Zip_2286) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

struct Tuple2_2305 {
    struct Color_147  field0;
    struct Color_147  field1;
};

static struct Tuple2_2305 Tuple2_2305_Tuple2 (  struct Color_147  field0 ,  struct Color_147  field1 ) {
    return ( struct Tuple2_2305 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_148 *   cast2309 (    int32_t *  x356 ) {
    return ( (enum Color8_148 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2307 (    enum Color8_148  x574 ) {
    int32_t  temp2308 = ( (  zeroed1017 ) ( ) );
    int32_t *  y575 = ( &temp2308 );
    enum Color8_148 *  yp576 = ( (  cast2309 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2306 (    enum Color8_148  l2635 ,    enum Color8_148  r2637 ) {
    return (  eq527 ( ( ( (  cast_dash_on_dash_zeroed2307 ) ( (  l2635 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2307 ) ( (  r2637 ) ) ) ) );
}

static  enum Color16_149 *   cast2313 (    int32_t *  x356 ) {
    return ( (enum Color16_149 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2311 (    enum Color16_149  x574 ) {
    int32_t  temp2312 = ( (  zeroed1017 ) ( ) );
    int32_t *  y575 = ( &temp2312 );
    enum Color16_149 *  yp576 = ( (  cast2313 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2310 (    enum Color16_149  l2641 ,    enum Color16_149  r2643 ) {
    return (  eq527 ( ( ( (  cast_dash_on_dash_zeroed2311 ) ( (  l2641 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2311 ) ( (  r2643 ) ) ) ) );
}

static  bool   eq2314 (    struct RGB_150  l2671 ,    struct RGB_150  r2673 ) {
    return ( ( (  eq312 ( ( (  l2671 ) .f_r ) , ( (  r2673 ) .f_r ) ) ) && (  eq312 ( ( (  l2671 ) .f_g ) , ( (  r2673 ) .f_g ) ) ) ) && (  eq312 ( ( (  l2671 ) .f_b ) , ( (  r2673 ) .f_b ) ) ) );
}

static  bool   eq2304 (    struct Color_147  l2693 ,    struct Color_147  r2695 ) {
    return ( {  struct Tuple2_2305  dref2696 = ( ( Tuple2_2305_Tuple2 ) ( (  l2693 ) ,  (  r2695 ) ) ) ; dref2696 .field0.tag == Color_147_ColorDefault_t && dref2696 .field1.tag == Color_147_ColorDefault_t ? ( true ) : dref2696 .field0.tag == Color_147_Color8_t && dref2696 .field1.tag == Color_147_Color8_t ? (  eq2306 ( ( dref2696 .field0 .stuff .Color_147_Color8_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_Color8_s .field0 ) ) ) : dref2696 .field0.tag == Color_147_Color16_t && dref2696 .field1.tag == Color_147_Color16_t ? (  eq2310 ( ( dref2696 .field0 .stuff .Color_147_Color16_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_Color16_s .field0 ) ) ) : dref2696 .field0.tag == Color_147_Color256_t && dref2696 .field1.tag == Color_147_Color256_t ? (  eq312 ( ( dref2696 .field0 .stuff .Color_147_Color256_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_Color256_s .field0 ) ) ) : dref2696 .field0.tag == Color_147_ColorRGB_t && dref2696 .field1.tag == Color_147_ColorRGB_t ? (  eq2314 ( ( dref2696 .field0 .stuff .Color_147_ColorRGB_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2303 (    struct Cell_287  l3457 ,    struct Cell_287  r3459 ) {
    if ( ( !  eq584 ( ( (  l3457 ) .f_c ) , ( (  r3459 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2304 ( ( (  l3457 ) .f_fg ) , ( (  r3459 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2304 ( ( (  l3457 ) .f_bg ) , ( (  r3459 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2302 (    struct Tuple2_2288  dref3513 ) {
    return ( !  eq2303 ( ( dref3513 .field0 ) , ( dref3513 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2317 (  ) {
    ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82318 (    enum Color8_148  color2646 ) {
    enum Color8_148  dref2647 = (  color2646 );
    switch (  dref2647 ) {
        case Color8_148_Black8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Red8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Green8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Yellow8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Blue8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Magenta8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Cyan8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_White8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162319 (    enum Color16_149  color2650 ) {
    enum Color16_149  dref2651 = (  color2650 );
    switch (  dref2651 ) {
        case Color16_149_Black16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Red16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Green16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Yellow16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Blue16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Magenta16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Cyan16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_White16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlack16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightRed16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightGreen16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightYellow16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlue16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightMagenta16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightCyan16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightWhite16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2323 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2323 StrConcat_2323_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2323 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2322 {
    struct StrConcat_2323  field0;
    struct Char_65  field1;
};

static struct StrConcat_2322 StrConcat_2322_StrConcat (  struct StrConcat_2323  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2322 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2327 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2326 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_2327  f_right;
};

struct StrConcatIter_2325 {
    struct StrConcatIter_2326  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2325   into_dash_iter2329 (    struct StrConcatIter_2325  self1498 ) {
    return (  self1498 );
}

struct env2335 {
    uint8_t  base1211;
    ;
};

struct envunion2336 {
    uint8_t  (*fun) (  struct env2335*  ,    int32_t  ,    uint8_t  );
    struct env2335 env;
};

static  uint8_t   reduce2334 (    struct Range_159  iterable1094 ,    uint8_t  base1096 ,   struct envunion2336  fun1098 ) {
    uint8_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion2336  temp2337 = (  fun1098 );
                x1099 = ( temp2337.fun ( &temp2337.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2338 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2338);
    exit ( 1 );
    ( Unit_8_Unit );
    uint8_t  temp2339;
    return (  temp2339 );
}

static  uint8_t   op_dash_mul2341 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2340 (   struct env2335* env ,    int32_t  item1215 ,    uint8_t  x1217 ) {
    return (  op_dash_mul2341 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  uint8_t   pow2333 (    uint8_t  base1211 ,    int32_t  p1213 ) {
    struct env2335 envinst2335 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce2334 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral317 ( 1 ) ) ,  ( (struct envunion2336){ .fun = (  uint8_t  (*) (  struct env2335*  ,    int32_t  ,    uint8_t  ) )lam2340 , .env =  envinst2335 } ) ) );
}

static  uint8_t   op_dash_div2342 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2343 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_306   next2332 (    struct IntStrIter_2327 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_306_Just ) ( ( (  from_dash_charlike355 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_306) { .tag = Maybe_306_None_t } );
    }
    uint8_t  trim_dash_down1430 = ( (  pow2333 ) ( (  from_dash_integral317 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    uint8_t  upper1431 = (  op_dash_div2342 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    uint8_t  upper_dash_mask1432 = (  op_dash_mul2341 ( (  op_dash_div2342 ( (  upper1431 ) , (  from_dash_integral317 ( 10 ) ) ) ) , (  from_dash_integral317 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast2343 ) ( (  op_dash_sub947 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81052 ) ( (  op_dash_add948 ( (  digit1433 ) , (  from_dash_integral317 ( 48 ) ) ) ) ) );
    return ( ( Maybe_306_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_306   next2331 (    struct StrConcatIter_2326 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next690 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next2332 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next2330 (    struct StrConcatIter_2325 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2331 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2324 (    struct StrConcatIter_2325  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2325  temp2328 = ( (  into_dash_iter2329 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2325 *  it1078 = ( &temp2328 );
    while ( ( true ) ) {
        struct Maybe_306  dref1079 = ( (  next2330 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_306_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2350 (    uint8_t  self1437 ) {
    if ( (  eq312 ( (  self1437 ) , (  from_dash_integral317 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp316 ( (  self1437 ) , (  from_dash_integral317 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div2342 ( (  self1437 ) , (  from_dash_integral317 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_2327   uint_dash_iter2349 (    uint8_t  int1444 ) {
    return ( (struct IntStrIter_2327) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits2350 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2327   chars2348 (    uint8_t  self1462 ) {
    return ( (  uint_dash_iter2349 ) ( (  self1462 ) ) );
}

static  struct StrConcatIter_2326   into_dash_iter2347 (    struct StrConcat_2323  dref1505 ) {
    return ( (struct StrConcatIter_2326) { .f_left = ( (  chars702 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2348 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2326   chars2346 (    struct StrConcat_2323  self1516 ) {
    return ( (  into_dash_iter2347 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2325   into_dash_iter2345 (    struct StrConcat_2322  dref1505 ) {
    return ( (struct StrConcatIter_2325) { .f_left = ( (  chars2346 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars704 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2325   chars2344 (    struct StrConcat_2322  self1516 ) {
    return ( (  into_dash_iter2345 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2321 (    struct StrConcat_2322  s2593 ) {
    ( (  for_dash_each2324 ) ( ( (  chars2344 ) ( (  s2593 ) ) ) ,  (  printf_dash_char345 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562320 (    uint8_t  color2664 ) {
    ( (  print2321 ) ( ( ( StrConcat_2322_StrConcat ) ( ( ( StrConcat_2323_StrConcat ) ( ( (  from_dash_string208 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2664 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2356 {
    struct StrConcat_2322  field0;
    uint8_t  field1;
};

static struct StrConcat_2356 StrConcat_2356_StrConcat (  struct StrConcat_2322  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2356 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2355 {
    struct StrConcat_2356  field0;
    struct Char_65  field1;
};

static struct StrConcat_2355 StrConcat_2355_StrConcat (  struct StrConcat_2356  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2355 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2354 {
    struct StrConcat_2355  field0;
    uint8_t  field1;
};

static struct StrConcat_2354 StrConcat_2354_StrConcat (  struct StrConcat_2355  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2354 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2353 {
    struct StrConcat_2354  field0;
    struct Char_65  field1;
};

static struct StrConcat_2353 StrConcat_2353_StrConcat (  struct StrConcat_2354  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2353 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2361 {
    struct StrConcatIter_2325  f_left;
    struct IntStrIter_2327  f_right;
};

struct StrConcatIter_2360 {
    struct StrConcatIter_2361  f_left;
    struct AppendIter_63  f_right;
};

struct StrConcatIter_2359 {
    struct StrConcatIter_2360  f_left;
    struct IntStrIter_2327  f_right;
};

struct StrConcatIter_2358 {
    struct StrConcatIter_2359  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2358   into_dash_iter2363 (    struct StrConcatIter_2358  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_306   next2367 (    struct StrConcatIter_2361 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2330 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next2332 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next2366 (    struct StrConcatIter_2360 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2367 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next2365 (    struct StrConcatIter_2359 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2366 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next2332 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_306   next2364 (    struct StrConcatIter_2358 *  self1501 ) {
    struct Maybe_306  dref1502 = ( (  next2365 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_306_Just_t ) {
        return ( ( Maybe_306_Just ) ( ( dref1502 .stuff .Maybe_306_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_306_None_t ) {
            return ( (  next691 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2357 (    struct StrConcatIter_2358  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2358  temp2362 = ( (  into_dash_iter2363 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2358 *  it1078 = ( &temp2362 );
    while ( ( true ) ) {
        struct Maybe_306  dref1079 = ( (  next2364 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_306_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_306_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_306_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2361   into_dash_iter2375 (    struct StrConcat_2356  dref1505 ) {
    return ( (struct StrConcatIter_2361) { .f_left = ( (  chars2344 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2348 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2361   chars2374 (    struct StrConcat_2356  self1516 ) {
    return ( (  into_dash_iter2375 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2360   into_dash_iter2373 (    struct StrConcat_2355  dref1505 ) {
    return ( (struct StrConcatIter_2360) { .f_left = ( (  chars2374 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars704 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2360   chars2372 (    struct StrConcat_2355  self1516 ) {
    return ( (  into_dash_iter2373 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2359   into_dash_iter2371 (    struct StrConcat_2354  dref1505 ) {
    return ( (struct StrConcatIter_2359) { .f_left = ( (  chars2372 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2348 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2359   chars2370 (    struct StrConcat_2354  self1516 ) {
    return ( (  into_dash_iter2371 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2358   into_dash_iter2369 (    struct StrConcat_2353  dref1505 ) {
    return ( (struct StrConcatIter_2358) { .f_left = ( (  chars2370 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars704 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2358   chars2368 (    struct StrConcat_2353  self1516 ) {
    return ( (  into_dash_iter2369 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2352 (    struct StrConcat_2353  s2593 ) {
    ( (  for_dash_each2357 ) ( ( (  chars2368 ) ( (  s2593 ) ) ) ,  (  printf_dash_char345 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2351 (    struct RGB_150  c2686 ) {
    ( (  print2352 ) ( ( ( StrConcat_2353_StrConcat ) ( ( ( StrConcat_2354_StrConcat ) ( ( ( StrConcat_2355_StrConcat ) ( ( ( StrConcat_2356_StrConcat ) ( ( ( StrConcat_2322_StrConcat ) ( ( ( StrConcat_2323_StrConcat ) ( ( (  from_dash_string208 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2686 ) .f_r ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2686 ) .f_g ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2686 ) .f_b ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2316 (    struct Color_147  c2707 ) {
    struct Color_147  dref2708 = (  c2707 );
    if ( dref2708.tag == Color_147_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2317 ) ( ) );
    }
    else {
        if ( dref2708.tag == Color_147_Color8_t ) {
            ( (  set_dash_fg82318 ) ( ( dref2708 .stuff .Color_147_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2708.tag == Color_147_Color16_t ) {
                ( (  set_dash_fg162319 ) ( ( dref2708 .stuff .Color_147_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2708.tag == Color_147_Color256_t ) {
                    ( (  set_dash_fg2562320 ) ( ( dref2708 .stuff .Color_147_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2708.tag == Color_147_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2351 ) ( ( dref2708 .stuff .Color_147_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2377 (  ) {
    ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82378 (    enum Color8_148  color2654 ) {
    enum Color8_148  dref2655 = (  color2654 );
    switch (  dref2655 ) {
        case Color8_148_Black8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Red8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Green8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Yellow8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Blue8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Magenta8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Cyan8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_White8 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162379 (    enum Color16_149  color2658 ) {
    enum Color16_149  dref2659 = (  color2658 );
    switch (  dref2659 ) {
        case Color16_149_Black16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Red16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Green16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Yellow16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Blue16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Magenta16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Cyan16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_White16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlack16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightRed16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightGreen16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightYellow16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlue16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightMagenta16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightCyan16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightWhite16 : {
            ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562380 (    uint8_t  color2667 ) {
    ( (  print2321 ) ( ( ( StrConcat_2322_StrConcat ) ( ( ( StrConcat_2323_StrConcat ) ( ( (  from_dash_string208 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2667 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2381 (    struct RGB_150  c2689 ) {
    ( (  print2352 ) ( ( ( StrConcat_2353_StrConcat ) ( ( ( StrConcat_2354_StrConcat ) ( ( ( StrConcat_2355_StrConcat ) ( ( ( StrConcat_2356_StrConcat ) ( ( ( StrConcat_2322_StrConcat ) ( ( ( StrConcat_2323_StrConcat ) ( ( (  from_dash_string208 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2689 ) .f_r ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2689 ) .f_g ) ) ) ,  ( (  from_dash_charlike355 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2689 ) .f_b ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2376 (    struct Color_147  c2715 ) {
    struct Color_147  dref2716 = (  c2715 );
    if ( dref2716.tag == Color_147_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2377 ) ( ) );
    }
    else {
        if ( dref2716.tag == Color_147_Color8_t ) {
            ( (  set_dash_bg82378 ) ( ( dref2716 .stuff .Color_147_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2716.tag == Color_147_Color16_t ) {
                ( (  set_dash_bg162379 ) ( ( dref2716 .stuff .Color_147_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2716.tag == Color_147_Color256_t ) {
                    ( (  set_dash_bg2562380 ) ( ( dref2716 .stuff .Color_147_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2716.tag == Color_147_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2381 ) ( ( dref2716 .stuff .Color_147_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322382 (    int32_t  x604 ) {
    return ( (uint32_t ) (  x604 ) );
}

static  enum Unit_8   emit_dash_cell2315 (    struct RenderState_2250 *  rs3489 ,    struct Cell_287 *  c3491 ,    uint32_t  x3493 ,    uint32_t  y3495 ) {
    if ( ( ( !  eq588 ( (  x3493 ) , ( ( * (  rs3489 ) ) .f_x ) ) ) || ( !  eq588 ( (  y3495 ) , ( ( * (  rs3489 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2252 ) ( (  x3493 ) ,  (  y3495 ) ) );
        (*  rs3489 ) .f_x = (  x3493 );
        (*  rs3489 ) .f_y = (  y3495 );
    }
    struct Char_65  char3496 = ( ( * (  c3491 ) ) .f_c );
    struct Color_147  bg3497 = ( ( * (  c3491 ) ) .f_bg );
    if ( (  eq527 ( ( ( * (  c3491 ) ) .f_char_dash_width ) , (  op_dash_neg816 ( (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) {
        char3496 = ( (  from_dash_charlike355 ) ( ( " " ) ,  ( 1 ) ) );
        bg3497 = ( ( Color_147_Color8 ) ( ( Color8_148_Red8 ) ) );
    }
    if ( ( !  eq2304 ( ( ( * (  rs3489 ) ) .f_fg ) , ( ( * (  c3491 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2316 ) ( ( ( * (  c3491 ) ) .f_fg ) ) );
        (*  rs3489 ) .f_fg = ( ( * (  c3491 ) ) .f_fg );
    }
    if ( ( !  eq2304 ( ( ( * (  rs3489 ) ) .f_bg ) , (  bg3497 ) ) ) ) {
        ( (  set_dash_bg2376 ) ( (  bg3497 ) ) );
        (*  rs3489 ) .f_bg = (  bg3497 );
    }
    ( (  print_dash_str344 ) ( (  char3496 ) ) );
    uint32_t  char_dash_width3498 = ( (  i32_dash_u322382 ) ( ( (  max1115 ) ( ( ( * (  c3491 ) ) .f_char_dash_width ) ,  (  from_dash_integral67 ( 1 ) ) ) ) ) );
    (*  rs3489 ) .f_x = (  op_dash_add180 ( ( ( * (  rs3489 ) ) .f_x ) , (  char_dash_width3498 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2385 {
    struct SliceIter_2287  f_left_dash_it;
    struct FromIter_425  f_right_dash_it;
};

struct env2386 {
    ;
    ;
    struct Slice_286  dest1855;
};

struct Tuple2_2388 {
    struct Cell_287  field0;
    int32_t  field1;
};

static struct Tuple2_2388 Tuple2_2388_Tuple2 (  struct Cell_287  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2388 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2387 {
    enum Unit_8  (*fun) (  struct env2386*  ,    struct Tuple2_2388  );
    struct env2386 env;
};

static  struct Zip_2385   into_dash_iter2390 (    struct Zip_2385  self912 ) {
    return (  self912 );
}

struct Maybe_2391 {
    enum {
        Maybe_2391_None_t,
        Maybe_2391_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2388  field0;
        } Maybe_2391_Just_s;
    } stuff;
};

static struct Maybe_2391 Maybe_2391_Just (  struct Tuple2_2388  field0 ) {
    return ( struct Maybe_2391 ) { .tag = Maybe_2391_Just_t, .stuff = { .Maybe_2391_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2391   next2392 (    struct Zip_2385 *  self915 ) {
    struct Zip_2385  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_870  dref917 = ( (  next2295 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_870_None_t ) {
            return ( (struct Maybe_2391) { .tag = Maybe_2391_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_870_Just_t ) {
                struct Maybe_164  dref919 = ( (  next431 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_2391) { .tag = Maybe_2391_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next2295 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next431 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2391_Just ) ( ( ( Tuple2_2388_Tuple2 ) ( ( dref917 .stuff .Maybe_870_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2384 (    struct Zip_2385  iterable1075 ,   struct envunion2387  fun1077 ) {
    struct Zip_2385  temp2389 = ( (  into_dash_iter2390 ) ( (  iterable1075 ) ) );
    struct Zip_2385 *  it1078 = ( &temp2389 );
    while ( ( true ) ) {
        struct Maybe_2391  dref1079 = ( (  next2392 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_2391_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_2391_Just_t ) {
                struct envunion2387  temp2393 = (  fun1077 );
                ( temp2393.fun ( &temp2393.env ,  ( dref1079 .stuff .Maybe_2391_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2385   zip2394 (    struct Slice_286  left923 ,    struct FromIter_425  right925 ) {
    struct SliceIter_2287  left_dash_it926 = ( (  into_dash_iter2301 ) ( (  left923 ) ) );
    struct FromIter_425  right_dash_it927 = ( (  into_dash_iter435 ) ( (  right925 ) ) );
    return ( (struct Zip_2385) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   lam2395 (   struct env2386* env ,    struct Tuple2_2388  dref1856 ) {
    return ( (  set863 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size421 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2383 (    struct Slice_286  src1853 ,    struct Slice_286  dest1855 ) {
    if ( (  cmp299 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic470 ) ( ( ( StrConcat_471_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string208 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string208 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2386 envinst2386 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each2384 ) ( ( (  zip2394 ) ( (  src1853 ) ,  ( (  from436 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2387){ .fun = (  enum Unit_8  (*) (  struct env2386*  ,    struct Tuple2_2388  ) )lam2395 , .env =  envinst2386 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2249 (    struct Screen_285 *  screen3501 ) {
    int32_t  w3502 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3503 = ( (  u32_dash_i321893 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2250  temp2251 = ( (struct RenderState_2250) { .f_x = (  from_dash_integral174 ( 0 ) ) , .f_y = (  from_dash_integral174 ( 0 ) ) , .f_fg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_bg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_changes = (  from_dash_integral174 ( 0 ) ) } );
    struct RenderState_2250 *  rs3504 = ( &temp2251 );
    ( (  move_dash_cursor_dash_to2252 ) ( (  from_dash_integral174 ( 0 ) ) ,  (  from_dash_integral174 ( 0 ) ) ) );
    struct RangeIter_162  temp2282 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  h3503 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond2283 =  next165 (&temp2282);
        if (  __cond2283 .tag == 0 ) {
            break;
        }
        int32_t  y3506 =  __cond2283 .stuff .Maybe_164_Just_s .field0;
        int32_t  x_dash_v3507 = (  from_dash_integral67 ( 0 ) );
        while ( (  cmp166 ( (  x_dash_v3507 ) , (  w3502 ) ) == 0 ) ) {
            size_t  i3508 = ( (  i32_dash_size421 ) ( (  op_dash_add168 ( (  op_dash_mul1543 ( (  y3506 ) , (  w3502 ) ) ) , (  x_dash_v3507 ) ) ) ) );
            struct Cell_287 *  cur3509 = ( (  get_dash_ptr864 ) ( ( ( * (  screen3501 ) ) .f_current ) ,  (  i3508 ) ) );
            int32_t  char_dash_width3510 = ( (  max1115 ) ( ( ( * (  cur3509 ) ) .f_char_dash_width ) ,  (  from_dash_integral67 ( 1 ) ) ) );
            struct Slice_286  curs3511 = ( (  subslice2284 ) ( ( ( * (  screen3501 ) ) .f_current ) ,  (  i3508 ) ,  (  op_dash_add320 ( (  i3508 ) , ( (  i32_dash_size421 ) ( (  char_dash_width3510 ) ) ) ) ) ) );
            struct Slice_286  prevs3512 = ( (  subslice2284 ) ( ( ( * (  screen3501 ) ) .f_previous ) ,  (  i3508 ) ,  (  op_dash_add320 ( (  i3508 ) , ( (  i32_dash_size421 ) ( (  char_dash_width3510 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3501 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2285 ) ( ( (  zip2300 ) ( (  curs3511 ) ,  (  prevs3512 ) ) ) ,  (  lam2302 ) ) ) ) ) {
                (*  rs3504 ) .f_changes = (  op_dash_add180 ( ( ( * (  rs3504 ) ) .f_changes ) , (  from_dash_integral174 ( 1 ) ) ) );
                ( (  emit_dash_cell2315 ) ( (  rs3504 ) ,  (  cur3509 ) ,  ( (  i32_dash_u322382 ) ( (  x_dash_v3507 ) ) ) ,  ( (  i32_dash_u322382 ) ( (  y3506 ) ) ) ) );
                ( (  copy_dash_to2383 ) ( (  curs3511 ) ,  (  prevs3512 ) ) );
            }
            x_dash_v3507 = (  op_dash_add168 ( (  x_dash_v3507 ) , (  char_dash_width3510 ) ) );
        }
    }
    (*  screen3501 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors790 ) ( ) );
    ( (  flush_dash_stdout793 ) ( ) );
    return ( ( * (  rs3504 ) ) .f_changes );
}

static  void *   cast_dash_ptr2402 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2403 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2400 (  ) {
    struct timespec *  temp2401;
    struct timespec *  x571 = (  temp2401 );
    ( ( memset ) ( ( (  cast_dash_ptr2402 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of2403 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct timespec *   null_dash_ptr2399 (  ) {
    return ( (  zeroed2400 ) ( ) );
}

static  enum Unit_8   sync2396 (    struct Tui_100 *  tui3372 ) {
    if ( (  eq588 ( ( ( * (  tui3372 ) ) .f_target_dash_fps ) , (  from_dash_integral174 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3373 = (  op_dash_div1049 ( (  from_dash_integral297 ( 1000000000 ) ) , ( (  size_dash_i64311 ) ( ( (  u32_dash_size848 ) ( ( ( * (  tui3372 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2397 = ( (  undefined829 ) ( ) );
    struct timespec *  now3374 = ( &temp2397 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic831 ) ( ) ) ,  (  now3374 ) ) );
    int64_t  elapsed_dash_ns3375 = (  op_dash_add586 ( (  op_dash_mul295 ( (  op_dash_sub1051 ( ( ( * (  now3374 ) ) .tv_sec ) , ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral297 ( 1000000000 ) ) ) ) , (  op_dash_sub1051 ( ( ( * (  now3374 ) ) .tv_nsec ) , ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3376 = (  op_dash_sub1051 ( (  frame_dash_ns3373 ) , (  elapsed_dash_ns3375 ) ) );
    if ( (  cmp1067 ( (  sleep_dash_ns3376 ) , (  from_dash_integral297 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2398 = ( (struct timespec) { .tv_sec = (  from_dash_integral297 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3376 ) } );
        struct timespec *  ts3377 = ( &temp2398 );
        ( ( nanosleep ) ( (  ts3377 ) ,  ( (  null_dash_ptr2399 ) ( ) ) ) );
    }
    struct timespec  temp2404 = ( (  undefined829 ) ( ) );
    struct timespec *  last_dash_sync3378 = ( &temp2404 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic831 ) ( ) ) ,  (  last_dash_sync3378 ) ) );
    (*  tui3372 ) .f_last_dash_sync = ( * (  last_dash_sync3378 ) );
    (*  tui3372 ) .f_fps_dash_count = (  op_dash_add180 ( ( ( * (  tui3372 ) ) .f_fps_dash_count ) , (  from_dash_integral174 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3379 = (  op_dash_add586 ( (  op_dash_mul295 ( (  op_dash_sub1051 ( ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3372 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral297 ( 1000 ) ) ) ) , (  op_dash_div1049 ( (  op_dash_sub1051 ( ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3372 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral297 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1067 ( (  fps_dash_elapsed_dash_ms3379 ) , (  from_dash_integral297 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3372 ) .f_actual_dash_fps = ( ( * (  tui3372 ) ) .f_fps_dash_count );
        (*  tui3372 ) .f_fps_dash_count = (  from_dash_integral174 ( 0 ) );
        (*  tui3372 ) .f_fps_dash_ts = ( ( * (  tui3372 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2407 (    struct Cell_287 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2406 (    enum CAllocator_10  dref1961 ,    struct Slice_286  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2407 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2405 (    struct Screen_285 *  screen3477 ) {
    enum CAllocator_10  al3478 = ( ( * (  screen3477 ) ) .f_al );
    ( (  free2406 ) ( (  al3478 ) ,  ( ( * (  screen3477 ) ) .f_current ) ) );
    ( (  free2406 ) ( (  al3478 ) ,  ( ( * (  screen3477 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2409 (  ) {
    ( (  print_dash_str337 ) ( ( (  from_dash_string208 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2410 (  ) {
    ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2411 (  ) {
    ( (  print786 ) ( ( (  from_dash_string208 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2412 (    struct Termios_102 *  og_dash_termios3352 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno724 ) ( ) ) ,  ( (  tcsa_dash_flush784 ) ( ) ) ,  ( (  cast_dash_ptr725 ) ( (  og_dash_termios3352 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2408 (    struct Tui_100 *  tui3382 ) {
    ( (  disable_dash_mouse2409 ) ( ) );
    ( (  show_dash_cursor2410 ) ( ) );
    ( (  reset_dash_colors790 ) ( ) );
    ( (  clear_dash_screen791 ) ( ) );
    ( (  reset_dash_cursor_dash_position2411 ) ( ) );
    ( (  disable_dash_raw_dash_mode2412 ) ( ( & ( ( * (  tui3382 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout793 ) ( ) );
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
        .envinst77 = envinst77 ,
    };
    struct env82 envinst82 = {
        .envinst44 = envinst44 ,
    };
    struct env84 envinst84 = {
        .envinst74 = envinst74 ,
        .envinst71 = envinst71 ,
    };
    struct env89 envinst89 = {
        .envinst76 = envinst76 ,
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
        .envinst141 = envinst141 ,
        .envinst224 = envinst224 ,
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
    struct env262 envinst262 = {
        .envinst213 = envinst213 ,
        .envinst237 = envinst237 ,
        .envinst232 = envinst232 ,
        .envinst218 = envinst218 ,
        .envinst220 = envinst220 ,
        .envinst226 = envinst226 ,
        .envinst222 = envinst222 ,
        .envinst242 = envinst242 ,
        .envinst235 = envinst235 ,
        .envinst244 = envinst244 ,
    };
    struct env273 envinst273 = {
        .envinst213 = envinst213 ,
        .envinst250 = envinst250 ,
        .envinst216 = envinst216 ,
        .envinst262 = envinst262 ,
        .envinst235 = envinst235 ,
        .envinst253 = envinst253 ,
        .envinst71 = envinst71 ,
        .envinst82 = envinst82 ,
    };
    struct env283 envinst283 = {
        .envinst210 = envinst210 ,
    };
    enum CAllocator_10  al4544 = ( (  idc289 ) ( ) );
    struct TextBuf_114  temp291;
    struct TextBuf_114  temp290 = (  temp291 );
    struct TextBuf_114 *  tb4545 = ( &temp290 );
    struct Slice_292  args4548 = ( (  get293 ) ( ) );
    struct Maybe_94  initial_dash_message4549 = ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    if ( (  cmp299 ( ( (  args4548 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4550 = ( (  from_dash_const_dash_str300 ) ( (  elem_dash_get326 ( (  args4548 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion362  temp361 = ( (struct envunion362){ .fun = (  struct Maybe_360  (*) (  struct env123*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file363 , .env =  envinst123 } );
        struct Maybe_360  dref4551 = ( temp361.fun ( &temp361.env ,  (  al4544 ) ,  (  fname4550 ) ) );
        if ( dref4551.tag == Maybe_360_None_t ) {
            struct envunion675  temp674 = ( (struct envunion675){ .fun = (  struct TextBuf_114  (*) (  struct env121*  ,    enum CAllocator_10  ) )mk366 , .env =  envinst121 } );
            (*  tb4545 ) = ( temp674.fun ( &temp674.env ,  (  al4544 ) ) );
            struct envunion677  temp676 = ( (struct envunion677){ .fun = (  struct StrView_27  (*) (  struct env56*  ,    struct StrConcat_648  ,    enum CAllocator_10  ) )from_dash_str678 , .env =  envinst56 } );
            initial_dash_message4549 = ( ( Maybe_94_Just ) ( ( temp676.fun ( &temp676.env ,  ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_649_StrConcat ) ( ( (  from_dash_string208 ) ( ( "Could not load file " ) ,  ( 20 ) ) ) ,  (  fname4550 ) ) ) ,  ( (  from_dash_charlike355 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ,  (  al4544 ) ) ) ) );
        }
        else {
            if ( dref4551.tag == Maybe_360_Just_t ) {
                (*  tb4545 ) = ( dref4551 .stuff .Maybe_360_Just_s .field0 );
            }
        }
    } else {
        struct envunion712  temp711 = ( (struct envunion712){ .fun = (  struct TextBuf_114  (*) (  struct env121*  ,    enum CAllocator_10  ) )mk366 , .env =  envinst121 } );
        (*  tb4545 ) = ( temp711.fun ( &temp711.env ,  (  al4544 ) ) );
    }
    struct Config_259  temp713 = ( (struct Config_259) { .f_theme = (  default3991 ) , .f_display_dash_line_dash_numbers = ( true ) , .f_relative_dash_line_dash_numbers = ( false ) } );
    struct Config_259 *  cfg4553 = ( &temp713 );
    struct Editor_257  temp714 = ( (struct Editor_257) { .f_running = ( true ) , .f_al = (  al4544 ) , .f_pane = ( (  mk715 ) ( (  al4544 ) ,  (  tb4545 ) ) ) , .f_clipboard = ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) , .f_search_dash_term = ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) , .f_mode = ( (struct EditorMode_258) { .tag = EditorMode_258_Normal_t } ) , .f_msg = (  initial_dash_message4549 ) , .f_cfg = (  cfg4553 ) , .f_og_dash_theme = (  default3991 ) } );
    struct Editor_257 *  ed4554 = ( &temp714 );
    struct envunion718  temp717 = ( (struct envunion718){ .fun = (  struct Tui_100  (*) (  struct env96*  ) )mk719 , .env =  envinst96 } );
    struct Tui_100  temp716 = ( temp717.fun ( &temp717.env ) );
    struct Tui_100 *  tui4555 = ( &temp716 );
    struct Screen_285  temp841 = ( (  mk_dash_screen842 ) ( (  tui4555 ) ,  (  al4544 ) ) );
    struct Screen_285 *  screen4556 = ( &temp841 );
    uint32_t  last_dash_redraw_dash_changes4557 = (  from_dash_integral174 ( 0 ) );
    while ( ( ( * (  ed4554 ) ) .f_running ) ) {
        struct env886 envinst886 = {
            .envinst98 = envinst98 ,
            .tui4555 =  tui4555 ,
        };
        struct FunIter_885  temp884 =  into_dash_iter893 ( ( (  from_dash_function894 ) ( ( (struct envunion892){ .fun = (  struct Maybe_888  (*) (  struct env886*  ) )lam895 , .env =  envinst886 } ) ) ) );
        while (true) {
            struct Maybe_888  __cond1081 =  next1082 (&temp884);
            if (  __cond1081 .tag == 0 ) {
                break;
            }
            struct InputEvent_889  ev4559 =  __cond1081 .stuff .Maybe_888_Just_s .field0;
            struct InputEvent_889  dref4560 = (  ev4559 );
            if ( dref4560.tag == InputEvent_889_Key_t ) {
                ( (  reset_dash_msg1084 ) ( (  ed4554 ) ) );
                struct envunion1091  temp1090 = ( (struct envunion1091){ .fun = (  enum Unit_8  (*) (  struct env273*  ,    struct Editor_257 *  ,    struct Key_278  ) )handle_dash_key1092 , .env =  envinst273 } );
                ( temp1090.fun ( &temp1090.env ,  (  ed4554 ) ,  ( dref4560 .stuff .InputEvent_889_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1876  temp1875 = ( (struct envunion1876){ .fun = (  bool  (*) (  struct env104*  ,    struct Screen_285 *  ) )resize_dash_screen_dash_if_dash_needed1877 , .env =  envinst104 } );
        ( temp1875.fun ( &temp1875.env ,  (  screen4556 ) ) );
        if ( ( (  should_dash_redraw1879 ) ( (  tui4555 ) ) ) ) {
            (*  screen4556 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1880 ) ( (  screen4556 ) ) );
            struct Theme_181 *  theme4562 = ( ( * ( ( * (  ed4554 ) ) .f_cfg ) ) .f_theme );
            ( (  set_dash_screen_dash_fg1889 ) ( (  screen4556 ) ,  ( ( ( * (  theme4562 ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1890 ) ( (  screen4556 ) ,  ( ( ( * (  theme4562 ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1891 ) ( (  screen4556 ) ) );
            struct envunion1904  temp1903 = ( (struct envunion1904){ .fun = (  enum Unit_8  (*) (  struct env283*  ,    struct Screen_285 *  ,    struct Editor_257 *  ) )render_dash_editor1905 , .env =  envinst283 } );
            ( temp1903.fun ( &temp1903.env ,  (  screen4556 ) ,  (  ed4554 ) ) );
            last_dash_redraw_dash_changes4557 = ( (  render_dash_screen2249 ) ( (  screen4556 ) ) );
        }
        ( (  sync2396 ) ( (  tui4555 ) ) );
    }
    ( (  free_dash_screen2405 ) ( (  screen4556 ) ) );
    ( (  deinit2408 ) ( (  tui4555 ) ) );
}
