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
    enum Unit_8  (*fun) (  struct env78*  ,    struct StrBuilder_73 *  ,    struct StrConcat_81  );
    struct env78 env;
};

struct env79 {
    ;
    struct env78 envinst78;
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
    enum Unit_8  (*fun) (  struct env77*  ,    struct StrBuilder_73 *  ,    struct StrConcat_93  );
    struct env77 env;
};

struct env91 {
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

struct Tuple2_201 {
    struct StrView_27  field0;
    struct Theme_181 *  field1;
};

static struct Tuple2_201 Tuple2_201_Tuple2 (  struct StrView_27  field0 ,  struct Theme_181 *  field1 ) {
    return ( struct Tuple2_201 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_200 {
    struct Tuple2_201 *  f_ptr;
    size_t  f_count;
};

struct Array_203 {
    struct Tuple2_201 _arr [3];
};

static  struct Tuple2_201 *   cast204 (    struct Array_203 *  x356 ) {
    return ( (struct Tuple2_201 * ) (  x356 ) );
}

static  struct Slice_200   as_dash_slice202 (    struct Array_203 *  arr2277 ) {
    return ( (struct Slice_200) { .f_ptr = ( (  cast204 ) ( (  arr2277 ) ) ) , .f_count = ( (size_t ) ( 3 ) ) } );
}

static  struct Array_203   from_dash_listlike206 (    struct Array_203  self330 ) {
    return (  self330 );
}

static  struct StrView_27   from_dash_string207 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

struct env208 {
    struct Slice_200  all_dash_themes3991;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct Maybe_211 {
    enum {
        Maybe_211_None_t,
        Maybe_211_Just_t,
    } tag;
    union {
        struct {
            enum HighlightType_20  field0;
        } Maybe_211_Just_s;
    } stuff;
};

static struct Maybe_211 Maybe_211_Just (  enum HighlightType_20  field0 ) {
    return ( struct Maybe_211 ) { .tag = Maybe_211_Just_t, .stuff = { .Maybe_211_Just_s = { .field0 = field0 } } };
};

struct envunion210 {
    struct Maybe_211  (*fun) (  struct env145*  ,    struct TextBuf_114 *  ,    struct Pos_26  );
    struct env145 env;
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
    ;
    ;
    ;
    ;
    ;
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

struct Maybe_214 {
    enum {
        Maybe_214_None_t,
        Maybe_214_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_33  field0;
        } Maybe_214_Just_s;
    } stuff;
};

static struct Maybe_214 Maybe_214_Just (  struct Cursors_33  field0 ) {
    return ( struct Maybe_214 ) { .tag = Maybe_214_Just_t, .stuff = { .Maybe_214_Just_s = { .field0 = field0 } } };
};

struct envunion213 {
    struct Maybe_214  (*fun) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_214  );
    struct env136 env;
};

struct env212 {
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

struct envunion216 {
    struct Maybe_214  (*fun) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_214  );
    struct env136 env;
};

struct env215 {
    ;
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

struct envunion218 {
    struct Maybe_214  (*fun) (  struct env130*  ,    struct TextBuf_114 *  );
    struct env130 env;
};

struct env217 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env130 envinst130;
};

struct envunion220 {
    struct Maybe_214  (*fun) (  struct env132*  ,    struct TextBuf_114 *  );
    struct env132 env;
};

struct env219 {
    struct env132 envinst132;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion222 {
    struct Maybe_214  (*fun) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_214  );
    struct env136 env;
};

struct env221 {
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

struct envunion224 {
    struct Maybe_214  (*fun) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_214  );
    struct env136 env;
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
    struct env136 envinst136;
};

enum Mode_228 {
    Mode_228_Normal,
    Mode_228_Insert,
    Mode_228_Select,
};

struct ScreenCursorOffset_229 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_227 {
    struct TextBuf_114 *  f_buf;
    struct Pos_26  f_cursor;
    int32_t  f_vi;
    struct Maybe_34  f_sel;
    enum Mode_228  f_mode;
    struct ScreenCursorOffset_229  f_sc_dash_off;
};

struct envunion226 {
    enum Unit_8  (*fun) (  struct env223*  ,    struct Pane_227 *  ,    int32_t  );
    struct env223 env;
};

struct envunion230 {
    enum Unit_8  (*fun) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  );
    struct env141 env;
};

struct env225 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env223 envinst223;
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
};

struct envunion232 {
    struct Maybe_214  (*fun) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_214  );
    struct env136 env;
};

struct envunion233 {
    enum Unit_8  (*fun) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  );
    struct env141 env;
};

struct env231 {
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
    ;
};

struct envunion235 {
    enum Unit_8  (*fun) (  struct env223*  ,    struct Pane_227 *  ,    int32_t  );
    struct env223 env;
};

struct env234 {
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
    ;
    ;
    ;
};

struct Tuple2_238 {
    struct Pos_26  field0;
    struct Pos_26  field1;
};

static struct Tuple2_238 Tuple2_238_Tuple2 (  struct Pos_26  field0 ,  struct Pos_26  field1 ) {
    return ( struct Tuple2_238 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion237 {
    enum Unit_8  (*fun) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  );
    struct env221 env;
};

struct envunion239 {
    enum Unit_8  (*fun) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  );
    struct env141 env;
};

struct envunion240 {
    enum Unit_8  (*fun) (  struct env212*  ,    struct Pane_227 *  ,    struct StrView_27  );
    struct env212 env;
};

struct env236 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env221 envinst221;
    ;
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
    struct env212 envinst212;
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

struct envunion242 {
    struct StrView_27  (*fun) (  struct env134*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  );
    struct env134 env;
};

struct env241 {
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

struct envunion244 {
    struct StrView_27  (*fun) (  struct env84*  ,    struct StrConcat_86  ,    enum CAllocator_10  );
    struct env84 env;
};

struct env243 {
    ;
    ;
    struct env84 envinst84;
    ;
    ;
    ;
    ;
};

struct envunion246 {
    struct StrView_27  (*fun) (  struct env89*  ,    struct StrView_27  ,    enum CAllocator_10  );
    struct env89 env;
};

struct env245 {
    ;
    struct env89 envinst89;
    ;
    ;
    ;
    ;
    ;
};

struct envunion248 {
    struct StrView_27  (*fun) (  struct env91*  ,    struct StrConcat_93  ,    enum CAllocator_10  );
    struct env91 env;
};

struct env247 {
    ;
    ;
    struct env91 envinst91;
    ;
    ;
    ;
    ;
};

struct Maybe_251 {
    enum {
        Maybe_251_None_t,
        Maybe_251_Just_t,
    } tag;
    union {
        struct {
            struct Theme_181 *  field0;
        } Maybe_251_Just_s;
    } stuff;
};

static struct Maybe_251 Maybe_251_Just (  struct Theme_181 *  field0 ) {
    return ( struct Maybe_251 ) { .tag = Maybe_251_Just_t, .stuff = { .Maybe_251_Just_s = { .field0 = field0 } } };
};

struct envunion250 {
    struct Maybe_251  (*fun) (  struct env208*  ,    struct StrView_27  );
    struct env208 env;
};

struct env249 {
    ;
    ;
    ;
    ;
    struct env208 envinst208;
    ;
    ;
    ;
    ;
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

struct Maybe_254 {
    enum {
        Maybe_254_None_t,
        Maybe_254_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_254_Just_s;
    } stuff;
};

static struct Maybe_254 Maybe_254_Just (  size_t  field0 ) {
    return ( struct Maybe_254 ) { .tag = Maybe_254_Just_t, .stuff = { .Maybe_254_Just_s = { .field0 = field0 } } };
};

struct envunion253 {
    struct Maybe_254  (*fun) (  struct env119*  ,    struct TextBuf_114 *  ,    struct Maybe_94  );
    struct env119 env;
};

struct EditorMode_257 {
    enum {
        EditorMode_257_Normal_t,
        EditorMode_257_Cmd_t,
        EditorMode_257_Search_t,
    } tag;
    union {
        struct {
            struct Pos_26  field0;
            struct StrBuilder_73  field1;
        } EditorMode_257_Cmd_s;
        struct {
            struct Pos_26  field0;
            struct StrBuilder_73  field1;
        } EditorMode_257_Search_s;
    } stuff;
};

static struct EditorMode_257 EditorMode_257_Cmd (  struct Pos_26  field0 ,  struct StrBuilder_73  field1 ) {
    return ( struct EditorMode_257 ) { .tag = EditorMode_257_Cmd_t, .stuff = { .EditorMode_257_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_257 EditorMode_257_Search (  struct Pos_26  field0 ,  struct StrBuilder_73  field1 ) {
    return ( struct EditorMode_257 ) { .tag = EditorMode_257_Search_t, .stuff = { .EditorMode_257_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Editor_256 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_227  f_pane;
    struct Maybe_94  f_clipboard;
    struct Maybe_94  f_search_dash_term;
    struct EditorMode_257  f_mode;
    struct Maybe_94  f_msg;
    struct Theme_181 *  f_theme;
    struct Theme_181 *  f_og_dash_theme;
};

struct envunion255 {
    enum Unit_8  (*fun) (  struct env247*  ,    struct Editor_256 *  ,    struct StrConcat_93  );
    struct env247 env;
};

struct envunion258 {
    enum Unit_8  (*fun) (  struct env245*  ,    struct Editor_256 *  ,    struct StrView_27  );
    struct env245 env;
};

struct envunion259 {
    enum Unit_8  (*fun) (  struct env243*  ,    struct Editor_256 *  ,    struct StrConcat_86  );
    struct env243 env;
};

struct env252 {
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
    struct env247 envinst247;
    ;
    struct env245 envinst245;
    struct env243 envinst243;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion261 {
    enum Unit_8  (*fun) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  );
    struct env221 env;
};

struct envunion262 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_256 *  );
    struct env241 env;
};

struct envunion263 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_227 *  ,    int32_t  );
    struct env234 env;
};

struct envunion264 {
    enum Unit_8  (*fun) (  struct env243*  ,    struct Editor_256 *  ,    struct StrConcat_86  );
    struct env243 env;
};

struct envunion265 {
    enum Unit_8  (*fun) (  struct env212*  ,    struct Pane_227 *  ,    struct StrView_27  );
    struct env212 env;
};

struct envunion266 {
    enum Unit_8  (*fun) (  struct env236*  ,    struct Pane_227 *  );
    struct env236 env;
};

struct envunion267 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Pane_227 *  );
    struct env231 env;
};

struct envunion268 {
    enum Unit_8  (*fun) (  struct env217*  ,    struct Pane_227 *  );
    struct env217 env;
};

struct envunion269 {
    enum Unit_8  (*fun) (  struct env219*  ,    struct Pane_227 *  );
    struct env219 env;
};

struct envunion270 {
    enum Unit_8  (*fun) (  struct env225*  ,    struct Pane_227 *  );
    struct env225 env;
};

struct env260 {
    ;
    ;
    ;
    ;
    ;
    struct env221 envinst221;
    struct env241 envinst241;
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
    struct env243 envinst243;
    struct env212 envinst212;
    ;
    ;
    struct env236 envinst236;
    ;
    ;
    struct env231 envinst231;
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
    struct env225 envinst225;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion272 {
    enum Unit_8  (*fun) (  struct env215*  ,    struct Pane_227 *  );
    struct env215 env;
};

struct Key_274 {
    enum {
        Key_274_Escape_t,
        Key_274_Enter_t,
        Key_274_Tab_t,
        Key_274_Backspace_t,
        Key_274_Char_t,
        Key_274_Ctrl_t,
        Key_274_Up_t,
        Key_274_Down_t,
        Key_274_Left_t,
        Key_274_Right_t,
        Key_274_Home_t,
        Key_274_End_t,
        Key_274_PageUp_t,
        Key_274_PageDown_t,
        Key_274_Delete_t,
        Key_274_Insert_t,
        Key_274_F1_t,
        Key_274_F2_t,
        Key_274_F3_t,
        Key_274_F4_t,
        Key_274_F5_t,
        Key_274_F6_t,
        Key_274_F7_t,
        Key_274_F8_t,
        Key_274_F9_t,
        Key_274_F10_t,
        Key_274_F11_t,
        Key_274_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_274_Char_s;
        struct {
            char  field0;
        } Key_274_Ctrl_s;
    } stuff;
};

static struct Key_274 Key_274_Char (  char  field0 ) {
    return ( struct Key_274 ) { .tag = Key_274_Char_t, .stuff = { .Key_274_Char_s = { .field0 = field0 } } };
};

static struct Key_274 Key_274_Ctrl (  char  field0 ) {
    return ( struct Key_274 ) { .tag = Key_274_Ctrl_t, .stuff = { .Key_274_Ctrl_s = { .field0 = field0 } } };
};

struct envunion273 {
    enum Unit_8  (*fun) (  struct env260*  ,    struct Editor_256 *  ,    struct Key_274  );
    struct env260 env;
};

struct envunion275 {
    enum Unit_8  (*fun) (  struct env252*  ,    struct Editor_256 *  ,    struct StrView_27  );
    struct env252 env;
};

struct envunion276 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_227 *  ,    int32_t  );
    struct env234 env;
};

struct envunion277 {
    enum Unit_8  (*fun) (  struct env212*  ,    struct Pane_227 *  ,    struct StrView_27  );
    struct env212 env;
};

struct envunion278 {
    enum Unit_8  (*fun) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  );
    struct env71 env;
};

struct envunion279 {
    enum Unit_8  (*fun) (  struct env249*  ,    struct Editor_256 *  ,    struct StrView_27  );
    struct env249 env;
};

struct envunion280 {
    enum Unit_8  (*fun) (  struct env82*  ,    struct StrBuilder_73 *  );
    struct env82 env;
};

struct env271 {
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
    struct env260 envinst260;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env252 envinst252;
    struct env234 envinst234;
    ;
    ;
    ;
    ;
    struct env212 envinst212;
    ;
    struct env71 envinst71;
    ;
    ;
    ;
    ;
    struct env249 envinst249;
    struct env82 envinst82;
};

struct Cell_285 {
    struct Char_65  f_c;
    struct Color_147  f_fg;
    struct Color_147  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_284 {
    struct Cell_285 *  f_ptr;
    size_t  f_count;
};

struct Screen_283 {
    enum CAllocator_10  f_al;
    struct Tui_100 *  f_tui;
    struct Slice_284  f_current;
    struct Slice_284  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_147  f_default_dash_fg;
    struct Color_147  f_default_dash_bg;
};

struct ScreenDims_286 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion282 {
    enum Unit_8  (*fun) (  struct env209*  ,    struct Screen_283 *  ,    struct Pane_227 *  ,    struct ScreenDims_286  ,    struct Theme_181 *  );
    struct env209 env;
};

struct env281 {
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum CAllocator_10   idc287 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct Slice_290 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul293 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  const char* *   offset_dash_ptr292 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp294;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp294 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral295 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub296 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_290   get291 (  ) {
    return ( (struct Slice_290) { .f_ptr = ( (  offset_dash_ptr292 ) ( ( _global_argv ) ,  (  from_dash_integral295 ( 1 ) ) ) ) , .f_count = (  op_dash_sub296 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp297 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct ConstStrIter_301 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_301   into_dash_iter303 (    struct ConstStrIter_301  self1396 ) {
    return (  self1396 );
}

struct Maybe_304 {
    enum {
        Maybe_304_None_t,
        Maybe_304_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_304_Just_s;
    } stuff;
};

static struct Maybe_304 Maybe_304_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_304 ) { .tag = Maybe_304_Just_t, .stuff = { .Maybe_304_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   cast306 (    const char*  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint8_t *   offset_dash_ptr307 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp308;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp308 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64309 (    size_t  x595 ) {
    return ( (int64_t ) (  x595 ) );
}

static  bool   eq310 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   cast311 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp314 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  uint8_t   from_dash_integral315 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  size_t   next_dash_char313 (    uint8_t *  p689 ) {
    uint8_t  pb690 = ( * (  p689 ) );
    if ( (  cmp314 ( (  pb690 ) , (  from_dash_integral315 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp314 ( (  pb690 ) , (  from_dash_integral315 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp314 ( (  pb690 ) , (  from_dash_integral315 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp314 ( (  pb690 ) , (  from_dash_integral315 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp316 = ( (  from_dash_string68 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp316);
                    exit ( 1 );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem312 (    uint8_t *  p701 ) {
    size_t  clen702 = ( (  next_dash_char313 ) ( (  p701 ) ) );
    if ( (  cmp297 ( (  clen702 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp317 = ( (  from_dash_string68 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp317);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p701 ) , .f_num_dash_bytes = (  clen702 ) } );
}

static  size_t   op_dash_add318 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_304   next305 (    struct ConstStrIter_301 *  self1399 ) {
    uint8_t *  char_dash_ptr1400 = ( ( (  cast306 ) ( ( ( * (  self1399 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1401 = ( (  offset_dash_ptr307 ) ( (  char_dash_ptr1400 ) ,  ( (  size_dash_i64309 ) ( ( ( * (  self1399 ) ) .f_i ) ) ) ) );
    if ( (  eq310 ( ( * (  optr1401 ) ) , ( (  cast311 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    struct Char_65  char1402 = ( (  scan_dash_from_dash_mem312 ) ( (  optr1401 ) ) );
    (*  self1399 ) .f_i = (  op_dash_add318 ( ( ( * (  self1399 ) ) .f_i ) , ( (  char1402 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_304_Just ) ( (  char1402 ) ) );
}

static  size_t   reduce302 (    struct ConstStrIter_301  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct ConstStrIter_301  it1100 = ( (  into_dash_iter303 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_304  dref1101 = ( (  next305 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_304_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_304_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_304_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp319 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp319);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp320;
    return (  temp320 );
}

static  size_t   lam321 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add318 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count300 (    struct ConstStrIter_301  it1105 ) {
    return ( (  reduce302 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam321 ) ) );
}

static  struct ConstStrIter_301   into_dash_iter323 (    const char*  self1393 ) {
    return ( (struct ConstStrIter_301) { .f_ogstr = (  self1393 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_301   chars322 (    const char*  self1408 ) {
    return ( (  into_dash_iter323 ) ( (  self1408 ) ) );
}

static  size_t   const_dash_str_dash_len299 (    const char*  s1695 ) {
    return ( (  count300 ) ( ( (  chars322 ) ( (  s1695 ) ) ) ) );
}

static  struct StrView_27   from_dash_const_dash_str298 (    const char*  s1993 ) {
    size_t  len1994 = ( (  const_dash_str_dash_len299 ) ( (  s1993 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  cast306 ) ( (  s1993 ) ) ) , .f_count = (  len1994 ) } ) } );
}

struct Maybe_327 {
    enum {
        Maybe_327_None_t,
        Maybe_327_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_327_Just_s;
    } stuff;
};

static struct Maybe_327 Maybe_327_Just (  const char*  field0 ) {
    return ( struct Maybe_327 ) { .tag = Maybe_327_Just_t, .stuff = { .Maybe_327_Just_s = { .field0 = field0 } } };
};

struct StrConcat_329 {
    struct StrConcat_86  field0;
    size_t  field1;
};

static struct StrConcat_329 StrConcat_329_StrConcat (  struct StrConcat_86  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_329 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_328 {
    struct StrConcat_329  field0;
    struct Char_65  field1;
};

static struct StrConcat_328 StrConcat_328_StrConcat (  struct StrConcat_329  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_328 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_333 {
    struct StrView_27  field0;
    struct StrConcat_328  field1;
};

static struct StrConcat_333 StrConcat_333_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_328  field1 ) {
    return ( struct StrConcat_333 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_332 {
    struct StrConcat_333  field0;
    struct Char_65  field1;
};

static struct StrConcat_332 StrConcat_332_StrConcat (  struct StrConcat_333  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_332 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32336 (    size_t  x631 ) {
    return ( (int32_t ) (  x631 ) );
}

static  enum Unit_8   print_dash_str335 (    struct StrView_27  self1380 ) {
    ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32336 ) ( ( ( (  self1380 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1380 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str341 (    size_t  self1471 ) {
    ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1471 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str340 (    struct StrConcat_87  self1510 ) {
    struct StrConcat_87  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str341 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str339 (    struct StrConcat_86  self1510 ) {
    struct StrConcat_86  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str340 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str338 (    struct StrConcat_329  self1510 ) {
    struct StrConcat_329  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str339 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str341 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Scalar_345 {
    uint32_t  f_value;
};

struct CharDestructured_344 {
    enum {
        CharDestructured_344_Ref_t,
        CharDestructured_344_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_344_Ref_s;
        struct {
            struct Scalar_345  field0;
        } CharDestructured_344_Scalar_s;
    } stuff;
};

static struct CharDestructured_344 CharDestructured_344_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_344 ) { .tag = CharDestructured_344_Ref_t, .stuff = { .CharDestructured_344_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_344 CharDestructured_344_Scalar (  struct Scalar_345  field0 ) {
    return ( struct CharDestructured_344 ) { .tag = CharDestructured_344_Scalar_t, .stuff = { .CharDestructured_344_Scalar_s = { .field0 = field0 } } };
};

static  uint8_t   size_dash_u8348 (    size_t  x640 ) {
    return ( (uint8_t ) (  x640 ) );
}

static  size_t   op_dash_div349 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer347 (    uint8_t *  ptr679 ) {
    return ( (  size_dash_u8348 ) ( (  op_dash_div349 ( ( ( (size_t ) (  ptr679 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint32_t   size_dash_u32350 (    size_t  x634 ) {
    return ( (uint32_t ) (  x634 ) );
}

static  size_t   cast351 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_344   destructure346 (    struct Char_65  c713 ) {
    if ( (  eq310 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer347 ) ( ( (  c713 ) .f_ptr ) ) ) , (  from_dash_integral315 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_344_Scalar ) ( ( (struct Scalar_345) { .f_value = ( (  size_dash_u32350 ) ( ( ( (  cast351 ) ( ( (  c713 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_344_Ref ) ( (  c713 ) ) );
    }
}

static  enum Unit_8   printf_dash_char343 (    struct Char_65  c759 ) {
    struct CharDestructured_344  dref760 = ( (  destructure346 ) ( (  c759 ) ) );
    if ( dref760.tag == CharDestructured_344_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32336 ) ( ( ( dref760 .stuff .CharDestructured_344_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref760 .stuff .CharDestructured_344_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref760.tag == CharDestructured_344_Scalar_t ) {
            if ( (  cmp179 ( ( ( dref760 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) , (  from_dash_integral174 ( 127 ) ) ) == 2 ) ) {
                const char*  temp352 = ( (  from_dash_string68 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp352);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8153 ) ( ( ( dref760 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str342 (    struct Char_65  self1411 ) {
    ( (  printf_dash_char343 ) ( (  self1411 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str337 (    struct StrConcat_328  self1510 ) {
    struct StrConcat_328  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str338 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str334 (    struct StrConcat_333  self1510 ) {
    struct StrConcat_333  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str337 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str331 (    struct StrConcat_332  self1510 ) {
    struct StrConcat_332  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str334 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  uint8_t *   cast354 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_charlike353 (    uint8_t *  ptr705 ,    size_t  num_dash_bytes707 ) {
    uint8_t *  ptr708 = ( ( (  cast354 ) ( (  ptr705 ) ) ) );
    return ( (  scan_dash_from_dash_mem312 ) ( (  ptr708 ) ) );
}

static  enum Unit_8   panic330 (    struct StrConcat_328  errmsg1714 ) {
    ( (  print_dash_str331 ) ( ( ( StrConcat_332_StrConcat ) ( ( ( StrConcat_333_StrConcat ) ( ( (  from_dash_string207 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  const char*   undefined355 (  ) {
    const char*  temp356;
    return (  temp356 );
}

static  const char*   or_dash_fail326 (    struct Maybe_327  x1727 ,    struct StrConcat_328  errmsg1729 ) {
    struct Maybe_327  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_327_None_t ) {
        ( (  panic330 ) ( (  errmsg1729 ) ) );
        return ( (  undefined355 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_327_Just_t ) {
            return ( dref1730 .stuff .Maybe_327_Just_s .field0 );
        }
    }
}

static  struct Maybe_327   try_dash_get357 (    struct Slice_290  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp297 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_327) { .tag = Maybe_327_None_t } );
    }
    const char* *  elem_dash_ptr1768 = ( (  offset_dash_ptr292 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_327_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  const char*   get325 (    struct Slice_290  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail326 ) ( ( (  try_dash_get357 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get324 (    struct Slice_290  self1869 ,    size_t  idx1871 ) {
    return ( (  get325 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

struct Maybe_358 {
    enum {
        Maybe_358_None_t,
        Maybe_358_Just_t,
    } tag;
    union {
        struct {
            struct TextBuf_114  field0;
        } Maybe_358_Just_s;
    } stuff;
};

static struct Maybe_358 Maybe_358_Just (  struct TextBuf_114  field0 ) {
    return ( struct Maybe_358 ) { .tag = Maybe_358_Just_t, .stuff = { .Maybe_358_Just_s = { .field0 = field0 } } };
};

struct envunion360 {
    struct Maybe_358  (*fun) (  struct env123*  ,    enum CAllocator_10  ,    struct StrView_27  );
    struct env123 env;
};

static  void *   cast_dash_ptr373 (    struct Line_16 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of374 (    struct Line_16 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Line_16 *   zeroed371 (  ) {
    struct Line_16 *  temp372;
    struct Line_16 *  x571 = (  temp372 );
    ( ( memset ) ( ( (  cast_dash_ptr373 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of374 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Line_16 *   null_dash_ptr370 (  ) {
    return ( (  zeroed371 ) ( ) );
}

static  struct Slice_15   empty369 (  ) {
    return ( (struct Slice_15) { .f_ptr = ( (  null_dash_ptr370 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_14   mk368 (    enum CAllocator_10  al2033 ) {
    struct Slice_15  elements2034 = ( (  empty369 ) ( ) );
    return ( (struct List_14) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env378 {
    struct env12 envinst12;
    struct List_14 *  list2100;
};

struct envunion379 {
    enum Unit_8  (*fun) (  struct env378*  ,    struct Line_16  );
    struct env378 env;
};

struct ArrayIter_380 {
    struct Array_55  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_380   into_dash_iter382 (    struct Array_55  self2327 ) {
    return ( (struct ArrayIter_380) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_383 {
    enum {
        Maybe_383_None_t,
        Maybe_383_Just_t,
    } tag;
    union {
        struct {
            struct Line_16  field0;
        } Maybe_383_Just_s;
    } stuff;
};

static struct Maybe_383 Maybe_383_Just (  struct Line_16  field0 ) {
    return ( struct Maybe_383 ) { .tag = Maybe_383_Just_t, .stuff = { .Maybe_383_Just_s = { .field0 = field0 } } };
};

struct StrConcat_389 {
    struct StrConcat_86  field0;
    int32_t  field1;
};

static struct StrConcat_389 StrConcat_389_StrConcat (  struct StrConcat_86  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_389 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_388 {
    struct StrConcat_389  field0;
    struct Char_65  field1;
};

static struct StrConcat_388 StrConcat_388_StrConcat (  struct StrConcat_389  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_388 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_392 {
    struct StrView_27  field0;
    struct StrConcat_388  field1;
};

static struct StrConcat_392 StrConcat_392_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_388  field1 ) {
    return ( struct StrConcat_392 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_391 {
    struct StrConcat_392  field0;
    struct Char_65  field1;
};

static struct StrConcat_391 StrConcat_391_StrConcat (  struct StrConcat_392  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_391 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str396 (    int32_t  self1447 ) {
    ( ( printf ) ( ( (  from_dash_string68 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1447 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str395 (    struct StrConcat_389  self1510 ) {
    struct StrConcat_389  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str339 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str396 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str394 (    struct StrConcat_388  self1510 ) {
    struct StrConcat_388  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str395 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str393 (    struct StrConcat_392  self1510 ) {
    struct StrConcat_392  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str394 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str390 (    struct StrConcat_391  self1510 ) {
    struct StrConcat_391  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str393 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic387 (    struct StrConcat_388  errmsg1714 ) {
    ( (  print_dash_str390 ) ( ( ( StrConcat_391_StrConcat ) ( ( ( StrConcat_392_StrConcat ) ( ( (  from_dash_string207 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Line_16 *   cast_dash_ptr397 (    struct Array_55 *  p359 ) {
    return ( (struct Line_16 * ) (  p359 ) );
}

static  struct Line_16 *   offset_dash_ptr398 (    struct Line_16 *  x338 ,    int64_t  count340 ) {
    struct Line_16  temp399;
    return ( (struct Line_16 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp399 ) ) ) ) ) ) ) ) );
}

static  struct Line_16 *   get_dash_ptr386 (    struct Array_55 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp297 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2258 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic387 ) ( ( ( StrConcat_388_StrConcat ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  p2259 = ( ( (  cast_dash_ptr397 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr398 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct Line_16   get385 (    struct Array_55 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr386 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_383   next384 (    struct ArrayIter_380 *  self2334 ) {
    if ( (  cmp297 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_383) { .tag = Maybe_383_None_t } );
    }
    struct Line_16  e2336 = ( (  get385 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add318 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_383_Just ) ( (  e2336 ) ) );
}

static  enum Unit_8   for_dash_each377 (    struct Array_55  iterable1075 ,   struct envunion379  fun1077 ) {
    struct ArrayIter_380  temp381 = ( (  into_dash_iter382 ) ( (  iterable1075 ) ) );
    struct ArrayIter_380 *  it1078 = ( &temp381 );
    while ( ( true ) ) {
        struct Maybe_383  dref1079 = ( (  next384 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_383_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_383_Just_t ) {
                struct envunion379  temp400 = (  fun1077 );
                ( temp400.fun ( &temp400.env ,  ( dref1079 .stuff .Maybe_383_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  bool   eq406 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_409 {
    size_t  f_size;
};

static  struct TypeSize_409   get_dash_typesize408 (  ) {
    struct Line_16  temp410;
    return ( (struct TypeSize_409) { .f_size = ( sizeof( ( (  temp410 ) ) ) ) } );
}

static  struct Line_16 *   cast_dash_ptr411 (    void *  p359 ) {
    return ( (struct Line_16 * ) (  p359 ) );
}

static  size_t   op_dash_mul412 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_15   allocate407 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize408 ) ( ) ) ) .f_size );
    struct Line_16 *  ptr1959 = ( (  cast_dash_ptr411 ) ( ( ( malloc ) ( (  op_dash_mul412 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_15) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env413 {
    ;
    ;
    struct Slice_15  new_dash_slice2044;
};

struct Tuple2_415 {
    struct Line_16  field0;
    int32_t  field1;
};

static struct Tuple2_415 Tuple2_415_Tuple2 (  struct Line_16  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_415 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion414 {
    enum Unit_8  (*fun) (  struct env413*  ,    struct Tuple2_415  );
    struct env413 env;
};

static  struct Line_16 *   get_dash_ptr418 (    struct Slice_15  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp297 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_16 *  elem_dash_ptr1762 = ( (  offset_dash_ptr398 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set417 (    struct Slice_15  slice1776 ,    size_t  i1778 ,    struct Line_16  x1780 ) {
    struct Line_16 *  ep1781 = ( (  get_dash_ptr418 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size419 (    int32_t  x610 ) {
    return ( (size_t ) ( (int64_t ) (  x610 ) ) );
}

static  enum Unit_8   lam416 (   struct env413* env ,    struct Tuple2_415  dref2045 ) {
    return ( (  set417 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size419 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct SliceIter_422 {
    struct Slice_15  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_423 {
    int32_t  f_from;
};

struct Zip_421 {
    struct SliceIter_422  f_left_dash_it;
    struct FromIter_423  f_right_dash_it;
};

static  struct Zip_421   into_dash_iter425 (    struct Zip_421  self912 ) {
    return (  self912 );
}

struct Maybe_426 {
    enum {
        Maybe_426_None_t,
        Maybe_426_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_415  field0;
        } Maybe_426_Just_s;
    } stuff;
};

static struct Maybe_426 Maybe_426_Just (  struct Tuple2_415  field0 ) {
    return ( struct Maybe_426 ) { .tag = Maybe_426_Just_t, .stuff = { .Maybe_426_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_383   next428 (    struct SliceIter_422 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp297 ( (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_383) { .tag = Maybe_383_None_t } );
    }
    struct Line_16  elem1832 = ( * ( (  offset_dash_ptr398 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_383_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_164   next429 (    struct FromIter_423 *  dref906 ) {
    int32_t  v908 = ( ( (* dref906 ) ) .f_from );
    (* dref906 ) .f_from = (  op_dash_add168 ( ( ( (* dref906 ) ) .f_from ) , (  from_dash_integral67 ( 1 ) ) ) );
    return ( ( Maybe_164_Just ) ( (  v908 ) ) );
}

static  struct Maybe_426   next427 (    struct Zip_421 *  self915 ) {
    struct Zip_421  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_383  dref917 = ( (  next428 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_383_None_t ) {
            return ( (struct Maybe_426) { .tag = Maybe_426_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_383_Just_t ) {
                struct Maybe_164  dref919 = ( (  next429 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_426) { .tag = Maybe_426_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next428 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next429 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_426_Just ) ( ( ( Tuple2_415_Tuple2 ) ( ( dref917 .stuff .Maybe_383_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each420 (    struct Zip_421  iterable1075 ,   struct envunion414  fun1077 ) {
    struct Zip_421  temp424 = ( (  into_dash_iter425 ) ( (  iterable1075 ) ) );
    struct Zip_421 *  it1078 = ( &temp424 );
    while ( ( true ) ) {
        struct Maybe_426  dref1079 = ( (  next427 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_426_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_426_Just_t ) {
                struct envunion414  temp430 = (  fun1077 );
                ( temp430.fun ( &temp430.env ,  ( dref1079 .stuff .Maybe_426_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_422   into_dash_iter432 (    struct Slice_15  self1824 ) {
    return ( (struct SliceIter_422) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_423   into_dash_iter433 (    struct FromIter_423  it904 ) {
    return (  it904 );
}

static  struct Zip_421   zip431 (    struct Slice_15  left923 ,    struct FromIter_423  right925 ) {
    struct SliceIter_422  left_dash_it926 = ( (  into_dash_iter432 ) ( (  left923 ) ) );
    struct FromIter_423  right_dash_it927 = ( (  into_dash_iter433 ) ( (  right925 ) ) );
    return ( (struct Zip_421) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  struct FromIter_423   from434 (    int32_t  f901 ) {
    return ( (struct FromIter_423) { .f_from = (  f901 ) } );
}

static  void *   cast_dash_ptr436 (    struct Line_16 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free435 (    enum CAllocator_10  dref1961 ,    struct Slice_15  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr436 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full405 (   struct env2* env ,    struct List_14 *  list2043 ) {
    if ( (  eq406 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate407 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq406 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_15  new_dash_slice2044 = ( (  allocate407 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul412 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env413 envinst413 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion414  fun2048 = ( (struct envunion414){ .fun = (  enum Unit_8  (*) (  struct env413*  ,    struct Tuple2_415  ) )lam416 , .env =  envinst413 } );
            ( (  for_dash_each420 ) ( ( (  zip431 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free435 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add403 (   struct env12* env ,    struct List_14 *  list2051 ,    struct Line_16  elem2053 ) {
    struct envunion13  temp404 = ( (struct envunion13){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full405 , .env =  env->envinst2 } );
    ( temp404.fun ( &temp404.env ,  (  list2051 ) ) );
    ( (  set417 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add318 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam401 (   struct env378* env ,    struct Line_16  x2104 ) {
    struct envunion49  temp402 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add403 , .env =  env->envinst12 } );
    return ( temp402.fun ( &temp402.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all376 (   struct env48* env ,    struct List_14 *  list2100 ,    struct Array_55  it2102 ) {
    struct env378 envinst378 = {
        .envinst12 = env->envinst12 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each377 ) ( (  it2102 ) ,  ( (struct envunion379){ .fun = (  enum Unit_8  (*) (  struct env378*  ,    struct Line_16  ) )lam401 , .env =  envinst378 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_14   from_dash_iter366 (   struct env53* env ,    struct Array_55  iter2141 ,    enum CAllocator_10  al2143 ) {
    struct List_14  temp367 = ( (  mk368 ) ( (  al2143 ) ) );
    struct List_14 *  list2144 = ( &temp367 );
    struct envunion54  temp375 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_14 *  ,    struct Array_55  ) )add_dash_all376 , .env =  env->envinst48 } );
    ( temp375.fun ( &temp375.env ,  (  list2144 ) ,  (  iter2141 ) ) );
    return ( * (  list2144 ) );
}

static  struct Array_55   from_dash_listlike437 (    struct Array_55  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr444 (    struct Highlight_19 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of445 (    struct Highlight_19 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Highlight_19 *   zeroed442 (  ) {
    struct Highlight_19 *  temp443;
    struct Highlight_19 *  x571 = (  temp443 );
    ( ( memset ) ( ( (  cast_dash_ptr444 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of445 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Highlight_19 *   null_dash_ptr441 (  ) {
    return ( (  zeroed442 ) ( ) );
}

static  struct Slice_18   empty440 (  ) {
    return ( (struct Slice_18) { .f_ptr = ( (  null_dash_ptr441 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_17   mk439 (    enum CAllocator_10  al2033 ) {
    struct Slice_18  elements2034 = ( (  empty440 ) ( ) );
    return ( (struct List_17) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_16   mk_dash_line438 (    struct List_9  initial3707 ) {
    return ( (struct Line_16) { .f_line = (  initial3707 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk439 ) ( ( (  initial3707 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr451 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of452 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed449 (  ) {
    uint8_t *  temp450;
    uint8_t *  x571 = (  temp450 );
    ( ( memset ) ( ( (  cast_dash_ptr451 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of452 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   null_dash_ptr448 (  ) {
    return ( (  zeroed449 ) ( ) );
}

static  struct Slice_11   empty447 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr448 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk446 (    enum CAllocator_10  al2033 ) {
    struct Slice_11  elements2034 = ( (  empty447 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr459 (    struct Changeset_32 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of460 (    struct Changeset_32 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_32 *   zeroed457 (  ) {
    struct Changeset_32 *  temp458;
    struct Changeset_32 *  x571 = (  temp458 );
    ( ( memset ) ( ( (  cast_dash_ptr459 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of460 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Changeset_32 *   null_dash_ptr456 (  ) {
    return ( (  zeroed457 ) ( ) );
}

static  struct Slice_31   empty455 (  ) {
    return ( (struct Slice_31) { .f_ptr = ( (  null_dash_ptr456 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_30   mk454 (    enum CAllocator_10  al2033 ) {
    struct Slice_31  elements2034 = ( (  empty455 ) ( ) );
    return ( (struct List_30) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_115   mk_dash_actions453 (    enum CAllocator_10  al3695 ) {
    return ( (struct Actions_115) { .f_list = ( (  mk454 ) ( (  al3695 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_116_NoChangeset ) } );
}

static  struct TextBuf_114   mk364 (   struct env121* env ,    enum CAllocator_10  al3794 ) {
    struct envunion122  temp365 = ( (struct envunion122){ .fun = (  struct List_14  (*) (  struct env53*  ,    struct Array_55  ,    enum CAllocator_10  ) )from_dash_iter366 , .env =  env->envinst53 } );
    return ( (struct TextBuf_114) { .f_al = (  al3794 ) , .f_buf = ( temp365.fun ( &temp365.env ,  ( (  from_dash_listlike437 ) ( ( (struct Array_55) { ._arr = { ( (  mk_dash_line438 ) ( ( (  mk446 ) ( (  al3794 ) ) ) ) ) } } ) ) ) ,  (  al3794 ) ) ) , .f_actions = ( (  mk_dash_actions453 ) ( (  al3794 ) ) ) , .f_filename = ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) } );
}

struct TypeSize_464 {
    size_t  f_size;
};

static  struct TypeSize_464   get_dash_typesize463 (  ) {
    uint8_t  temp465;
    return ( (struct TypeSize_464) { .f_size = ( sizeof( ( (  temp465 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr466 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   allocate462 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize463 ) ( ) ) ) .f_size );
    uint8_t *  ptr1959 = ( (  cast_dash_ptr466 ) ( ( ( malloc ) ( (  op_dash_mul412 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct StrConcat_469 {
    struct StrConcat_329  field0;
    struct StrView_27  field1;
};

static struct StrConcat_469 StrConcat_469_StrConcat (  struct StrConcat_329  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_469 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_472 {
    struct StrView_27  field0;
    struct StrConcat_469  field1;
};

static struct StrConcat_472 StrConcat_472_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_469  field1 ) {
    return ( struct StrConcat_472 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_471 {
    struct StrConcat_472  field0;
    struct Char_65  field1;
};

static struct StrConcat_471 StrConcat_471_StrConcat (  struct StrConcat_472  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_471 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str474 (    struct StrConcat_469  self1510 ) {
    struct StrConcat_469  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str338 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str473 (    struct StrConcat_472  self1510 ) {
    struct StrConcat_472  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str474 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str470 (    struct StrConcat_471  self1510 ) {
    struct StrConcat_471  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str473 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic468 (    struct StrConcat_469  errmsg1714 ) {
    ( (  print_dash_str470 ) ( ( ( StrConcat_471_StrConcat ) ( ( ( StrConcat_472_StrConcat ) ( ( (  from_dash_string207 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct SliceIter_477 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_476 {
    struct SliceIter_477  f_left_dash_it;
    struct FromIter_423  f_right_dash_it;
};

struct env478 {
    ;
    ;
    struct Slice_11  dest1855;
};

struct Tuple2_480 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_480 Tuple2_480_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_480 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion479 {
    enum Unit_8  (*fun) (  struct env478*  ,    struct Tuple2_480  );
    struct env478 env;
};

static  struct Zip_476   into_dash_iter482 (    struct Zip_476  self912 ) {
    return (  self912 );
}

struct Maybe_483 {
    enum {
        Maybe_483_None_t,
        Maybe_483_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_480  field0;
        } Maybe_483_Just_s;
    } stuff;
};

static struct Maybe_483 Maybe_483_Just (  struct Tuple2_480  field0 ) {
    return ( struct Maybe_483 ) { .tag = Maybe_483_Just_t, .stuff = { .Maybe_483_Just_s = { .field0 = field0 } } };
};

struct Maybe_485 {
    enum {
        Maybe_485_None_t,
        Maybe_485_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_485_Just_s;
    } stuff;
};

static struct Maybe_485 Maybe_485_Just (  uint8_t  field0 ) {
    return ( struct Maybe_485 ) { .tag = Maybe_485_Just_t, .stuff = { .Maybe_485_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_485   next486 (    struct SliceIter_477 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp297 ( (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_485) { .tag = Maybe_485_None_t } );
    }
    uint8_t  elem1832 = ( * ( (  offset_dash_ptr307 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_485_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_483   next484 (    struct Zip_476 *  self915 ) {
    struct Zip_476  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_485  dref917 = ( (  next486 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_485_None_t ) {
            return ( (struct Maybe_483) { .tag = Maybe_483_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_485_Just_t ) {
                struct Maybe_164  dref919 = ( (  next429 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_483) { .tag = Maybe_483_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next486 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next429 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_483_Just ) ( ( ( Tuple2_480_Tuple2 ) ( ( dref917 .stuff .Maybe_485_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each475 (    struct Zip_476  iterable1075 ,   struct envunion479  fun1077 ) {
    struct Zip_476  temp481 = ( (  into_dash_iter482 ) ( (  iterable1075 ) ) );
    struct Zip_476 *  it1078 = ( &temp481 );
    while ( ( true ) ) {
        struct Maybe_483  dref1079 = ( (  next484 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_483_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_483_Just_t ) {
                struct envunion479  temp487 = (  fun1077 );
                ( temp487.fun ( &temp487.env ,  ( dref1079 .stuff .Maybe_483_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_477   into_dash_iter489 (    struct Slice_11  self1824 ) {
    return ( (struct SliceIter_477) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_476   zip488 (    struct Slice_11  left923 ,    struct FromIter_423  right925 ) {
    struct SliceIter_477  left_dash_it926 = ( (  into_dash_iter489 ) ( (  left923 ) ) );
    struct FromIter_423  right_dash_it927 = ( (  into_dash_iter433 ) ( (  right925 ) ) );
    return ( (struct Zip_476) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  uint8_t *   get_dash_ptr492 (    struct Slice_11  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp297 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1762 = ( (  offset_dash_ptr307 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set491 (    struct Slice_11  slice1776 ,    size_t  i1778 ,    uint8_t  x1780 ) {
    uint8_t *  ep1781 = ( (  get_dash_ptr492 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam490 (   struct env478* env ,    struct Tuple2_480  dref1856 ) {
    return ( (  set491 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size419 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to467 (    struct Slice_11  src1853 ,    struct Slice_11  dest1855 ) {
    if ( (  cmp297 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic468 ) ( ( ( StrConcat_469_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string207 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string207 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env478 envinst478 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each475 ) ( ( (  zip488 ) ( (  src1853 ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  ( (struct envunion479){ .fun = (  enum Unit_8  (*) (  struct env478*  ,    struct Tuple2_480  ) )lam490 , .env =  envinst478 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   char_dash_u8493 (    struct Char_65  c719 ) {
    struct CharDestructured_344  dref720 = ( (  destructure346 ) ( (  c719 ) ) );
    if ( dref720.tag == CharDestructured_344_Ref_t ) {
        return ( * ( ( dref720 .stuff .CharDestructured_344_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref720.tag == CharDestructured_344_Scalar_t ) {
            return ( (  u32_dash_u8153 ) ( ( ( dref720 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_27   clone_dash_0461 (    struct StrView_27  s2157 ,    enum CAllocator_10  al2159 ) {
    size_t  cnt2160 = ( ( (  s2157 ) .f_contents ) .f_count );
    struct Slice_11  nus2161 = ( (  allocate462 ) ( (  al2159 ) ,  (  op_dash_add318 ( (  cnt2160 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to467 ) ( ( (  s2157 ) .f_contents ) ,  (  nus2161 ) ) );
    ( (  set491 ) ( (  nus2161 ) ,  (  cnt2160 ) ,  ( (  char_dash_u8493 ) ( ( (  from_dash_charlike353 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2161 ) .f_ptr ) , .f_count = (  cnt2160 ) } ) } );
}

static  const char*   from_dash_charlike495 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr500 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of501 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed498 (  ) {
    FILE *  temp499;
    FILE *  x571 = (  temp499 );
    ( ( memset ) ( ( (  cast_dash_ptr500 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of501 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  FILE *   null_dash_ptr497 (  ) {
    return ( (  zeroed498 ) ( ) );
}

static  bool   is_dash_ptr_dash_null496 (    FILE *  p581 ) {
    return ( (  p581 ) == ( (  null_dash_ptr497 ) ( ) ) );
}

static  int32_t   seek_dash_end502 (  ) {
    return (  from_dash_integral67 ( 2 ) );
}

static  int32_t   seek_dash_set503 (  ) {
    return (  from_dash_integral67 ( 0 ) );
}

static  struct Char_65   nullchar504 (  ) {
    return ( (  from_dash_charlike353 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  size_t   min506 (    size_t  l1237 ,    size_t  r1239 ) {
    if ( (  cmp297 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Slice_11   subslice505 (    struct Slice_11  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    uint8_t *  begin_dash_ptr1789 = ( (  offset_dash_ptr307 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp297 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp297 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub296 ( ( (  min506 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct Maybe_94   try_dash_read_dash_contents494 (    const char*  filename2962 ,    enum CAllocator_10  al2964 ) {
    FILE *  file2965 = ( ( fopen ) ( (  filename2962 ) ,  ( (  from_dash_charlike495 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null496 ) ( (  file2965 ) ) ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    ( ( fseek ) ( (  file2965 ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  seek_dash_end502 ) ( ) ) ) );
    int32_t  file_dash_size2966 = ( ( ftell ) ( (  file2965 ) ) );
    ( ( fseek ) ( (  file2965 ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  seek_dash_set503 ) ( ) ) ) );
    struct Slice_11  file_dash_buf2967 = ( ( (  allocate462 ) ( (  al2964 ) ,  (  op_dash_add318 ( ( (  i32_dash_size419 ) ( (  file_dash_size2966 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2967 ) .f_ptr ) ,  (  file_dash_size2966 ) ,  (  from_dash_integral67 ( 1 ) ) ,  (  file2965 ) ) );
    ( (  set491 ) ( (  file_dash_buf2967 ) ,  ( (  i32_dash_size419 ) ( (  file_dash_size2966 ) ) ) ,  ( (  char_dash_u8493 ) ( ( (  nullchar504 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2965 ) ) );
    struct StrView_27  str2968 = ( (struct StrView_27) { .f_contents = ( (  subslice505 ) ( (  file_dash_buf2967 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub296 ( ( (  file_dash_buf2967 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_94_Just ) ( (  str2968 ) ) );
}

static  const char*   cast508 (    uint8_t *  x356 ) {
    return ( (const char* ) (  x356 ) );
}

static  const char*   as_dash_const_dash_str507 (    struct StrView_27  s2164 ) {
    return ( (  cast508 ) ( ( ( (  s2164 ) .f_contents ) .f_ptr ) ) );
}

static  void *   cast_dash_ptr511 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free510 (    enum CAllocator_10  dref1961 ,    struct Slice_11  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr511 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free509 (    struct StrView_27  s2172 ,    enum CAllocator_10  al2174 ) {
    ( (  free510 ) ( (  al2174 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2172 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

struct Tuple2_513 {
    struct Maybe_485  field0;
    struct Maybe_485  field1;
};

static struct Tuple2_513 Tuple2_513_Tuple2 (  struct Maybe_485  field0 ,  struct Maybe_485  field1 ) {
    return ( struct Tuple2_513 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq512 (    struct Maybe_485  l141 ,    struct Maybe_485  r143 ) {
    struct Tuple2_513  dref144 = ( ( Tuple2_513_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_485_None_t && dref144 .field1.tag == Maybe_485_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_485_Just_t && dref144 .field1.tag == Maybe_485_Just_t ) {
            return (  eq310 ( ( dref144 .field0 .stuff .Maybe_485_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_485_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  struct Maybe_485   try_dash_get514 (    struct Slice_11  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp297 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_485) { .tag = Maybe_485_None_t } );
    }
    uint8_t *  elem_dash_ptr1768 = ( (  offset_dash_ptr307 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_485_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  uint8_t   ascii_dash_u8515 (    char  c777 ) {
    return ( ( (uint8_t ) (  c777 ) ) );
}

static  char   from_dash_charlike516 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq406 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp517 = ( (  from_dash_string68 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp517);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

static  struct StrView_27   byte_dash_substr518 (    struct StrView_27  s2188 ,    size_t  from2190 ,    size_t  to2192 ) {
    return ( (struct StrView_27) { .f_contents = ( (  subslice505 ) ( ( (  s2188 ) .f_contents ) ,  (  from2190 ) ,  (  to2192 ) ) ) } );
}

static  enum Ordering_167   cmp522 (    struct Pos_26  l3629 ,    struct Pos_26  r3631 ) {
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

static  struct Pos_26   min521 (    struct Pos_26  l1237 ,    struct Pos_26  r1239 ) {
    if ( (  cmp522 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Pos_26   max523 (    struct Pos_26  l1316 ,    struct Pos_26  r1318 ) {
    if ( (  cmp522 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  bool   eq525 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq524 (    struct Pos_26  l3624 ,    struct Pos_26  r3626 ) {
    return ( (  eq525 ( ( (  l3624 ) .f_line ) , ( (  r3626 ) .f_line ) ) ) && (  eq525 ( ( (  l3624 ) .f_bi ) , ( (  r3626 ) .f_bi ) ) ) );
}

static  size_t   size526 (    struct List_14 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

static  struct Line_16 *   get_dash_ptr531 (    struct List_14 *  list2003 ,    size_t  i2005 ) {
    if ( ( (  cmp297 ( (  i2005 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2005 ) , ( ( * (  list2003 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2005 ) ) ) ,  ( (  from_dash_string207 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2003 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr418 ) ( ( ( * (  list2003 ) ) .f_elements ) ,  (  i2005 ) ) );
}

static  struct Line_16   get530 (    struct List_14 *  list2013 ,    size_t  i2015 ) {
    return ( * ( (  get_dash_ptr531 ) ( (  list2013 ) ,  (  i2015 ) ) ) );
}

static  struct Slice_11   from532 (    struct Slice_11  slice1793 ,    size_t  from1795 ) {
    return ( (  subslice505 ) ( (  slice1793 ) ,  (  from1795 ) ,  ( (  slice1793 ) .f_count ) ) );
}

static  struct Slice_11   to_dash_slice533 (    struct List_9  l2128 ) {
    uint8_t *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

static  enum Unit_8   set534 (    struct List_14 *  list2023 ,    size_t  i2025 ,    struct Line_16  elem2027 ) {
    if ( ( (  cmp297 ( (  i2025 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2025 ) , ( ( * (  list2023 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2025 ) ) ) ,  ( (  from_dash_string207 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2023 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set417 ) ( ( ( * (  list2023 ) ) .f_elements ) ,  (  i2025 ) ,  (  elem2027 ) ) );
    return ( Unit_8_Unit );
}

struct env541 {
    struct env6 envinst6;
    struct List_9 *  list2100;
};

struct envunion542 {
    enum Unit_8  (*fun) (  struct env541*  ,    uint8_t  );
    struct env541 env;
};

static  enum Unit_8   for_dash_each540 (    struct Slice_11  iterable1075 ,   struct envunion542  fun1077 ) {
    struct SliceIter_477  temp543 = ( (  into_dash_iter489 ) ( (  iterable1075 ) ) );
    struct SliceIter_477 *  it1078 = ( &temp543 );
    while ( ( true ) ) {
        struct Maybe_485  dref1079 = ( (  next486 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_485_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_485_Just_t ) {
                struct envunion542  temp544 = (  fun1077 );
                ( temp544.fun ( &temp544.env ,  ( dref1079 .stuff .Maybe_485_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct env550 {
    ;
    ;
    struct Slice_11  new_dash_slice2044;
};

struct envunion551 {
    enum Unit_8  (*fun) (  struct env550*  ,    struct Tuple2_480  );
    struct env550 env;
};

static  enum Unit_8   lam552 (   struct env550* env ,    struct Tuple2_480  dref2045 ) {
    return ( (  set491 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size419 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

static  enum Unit_8   for_dash_each553 (    struct Zip_476  iterable1075 ,   struct envunion551  fun1077 ) {
    struct Zip_476  temp554 = ( (  into_dash_iter482 ) ( (  iterable1075 ) ) );
    struct Zip_476 *  it1078 = ( &temp554 );
    while ( ( true ) ) {
        struct Maybe_483  dref1079 = ( (  next484 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_483_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_483_Just_t ) {
                struct envunion551  temp555 = (  fun1077 );
                ( temp555.fun ( &temp555.env ,  ( dref1079 .stuff .Maybe_483_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full549 (   struct env1* env ,    struct List_9 *  list2043 ) {
    if ( (  eq406 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate462 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq406 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2044 = ( (  allocate462 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul412 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env550 envinst550 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion551  fun2048 = ( (struct envunion551){ .fun = (  enum Unit_8  (*) (  struct env550*  ,    struct Tuple2_480  ) )lam552 , .env =  envinst550 } );
            ( (  for_dash_each553 ) ( ( (  zip488 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free510 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add547 (   struct env6* env ,    struct List_9 *  list2051 ,    uint8_t  elem2053 ) {
    struct envunion7  temp548 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full549 , .env =  env->envinst1 } );
    ( temp548.fun ( &temp548.env ,  (  list2051 ) ) );
    ( (  set491 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add318 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam545 (   struct env541* env ,    uint8_t  x2104 ) {
    struct envunion47  temp546 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add547 , .env =  env->envinst6 } );
    return ( temp546.fun ( &temp546.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all539 (   struct env46* env ,    struct List_9 *  list2100 ,    struct Slice_11  it2102 ) {
    struct env541 envinst541 = {
        .envinst6 = env->envinst6 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each540 ) ( (  it2102 ) ,  ( (struct envunion542){ .fun = (  enum Unit_8  (*) (  struct env541*  ,    uint8_t  ) )lam545 , .env =  envinst541 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter536 (   struct env51* env ,    struct Slice_11  iter2141 ,    enum CAllocator_10  al2143 ) {
    struct List_9  temp537 = ( (  mk446 ) ( (  al2143 ) ) );
    struct List_9 *  list2144 = ( &temp537 );
    struct envunion52  temp538 = ( (struct envunion52){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all539 , .env =  env->envinst46 } );
    ( temp538.fun ( &temp538.env ,  (  list2144 ) ,  (  iter2141 ) ) );
    return ( * (  list2144 ) );
}

static  struct StrView_27   or_dash_else557 (    struct Maybe_94  self1734 ,    struct StrView_27  alt1736 ) {
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

struct LineIter_559 {
    struct StrView_27  f_og;
    size_t  f_last;
};

static  uint8_t   undefined563 (  ) {
    uint8_t  temp564;
    return (  temp564 );
}

static  uint8_t   or_dash_fail562 (    struct Maybe_485  x1727 ,    struct StrConcat_328  errmsg1729 ) {
    struct Maybe_485  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_485_None_t ) {
        ( (  panic330 ) ( (  errmsg1729 ) ) );
        return ( (  undefined563 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_485_Just_t ) {
            return ( dref1730 .stuff .Maybe_485_Just_s .field0 );
        }
    }
}

static  uint8_t   get561 (    struct Slice_11  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail562 ) ( ( (  try_dash_get514 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Maybe_94   next560 (    struct LineIter_559 *  self2434 ) {
    if ( (  cmp297 ( ( ( * (  self2434 ) ) .f_last ) , ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    size_t  i2435 = ( ( * (  self2434 ) ) .f_last );
    while ( ( (  cmp297 ( (  i2435 ) , ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq310 ( ( (  get561 ) ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) ,  (  i2435 ) ) ) , ( (  char_dash_u8493 ) ( ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2435 = (  op_dash_add318 ( (  i2435 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_27  line2436 = ( (  byte_dash_substr518 ) ( ( ( * (  self2434 ) ) .f_og ) ,  ( ( * (  self2434 ) ) .f_last ) ,  (  i2435 ) ) );
    if ( (  cmp297 ( (  i2435 ) , ( ( ( ( * (  self2434 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2435 = (  op_dash_add318 ( (  i2435 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2434 ) .f_last = (  i2435 );
    return ( ( Maybe_94_Just ) ( (  line2436 ) ) );
}

static  struct LineIter_559   into_dash_iter566 (    struct LineIter_559  self2431 ) {
    return (  self2431 );
}

static  struct Maybe_94   head558 (    struct LineIter_559  it1143 ) {
    struct LineIter_559  temp565 = ( (  into_dash_iter566 ) ( (  it1143 ) ) );
    return ( (  next560 ) ( ( &temp565 ) ) );
}

static  struct LineIter_559   lines567 (    struct StrView_27  s2428 ) {
    return ( (struct LineIter_559) { .f_og = (  s2428 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env572 {
    ;
    struct Char_65  c2227;
};

struct envunion573 {
    bool  (*fun) (  struct env572*  ,    struct Char_65  );
    struct env572 env;
};

struct SplitIter_571 {
    struct StrView_27  f_og;
    size_t  f_last;
    struct envunion573  f_fun;
};

struct Drop_570 {
    struct SplitIter_571  field0;
    size_t  field1;
};

static struct Drop_570 Drop_570_Drop (  struct SplitIter_571  field0 ,  size_t  field1 ) {
    return ( struct Drop_570 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_569 {
    struct Drop_570  f_left_dash_it;
    struct FromIter_423  f_right_dash_it;
};

static  struct Zip_569   into_dash_iter574 (    struct Zip_569  self912 ) {
    return (  self912 );
}

static  struct Drop_570   into_dash_iter576 (    struct Drop_570  self846 ) {
    return (  self846 );
}

static  struct Zip_569   zip575 (    struct Drop_570  left923 ,    struct FromIter_423  right925 ) {
    struct Drop_570  left_dash_it926 = ( (  into_dash_iter576 ) ( (  left923 ) ) );
    struct FromIter_423  right_dash_it927 = ( (  into_dash_iter433 ) ( (  right925 ) ) );
    return ( (struct Zip_569) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  struct SplitIter_571   into_dash_iter578 (    struct SplitIter_571  self2232 ) {
    return (  self2232 );
}

static  struct Drop_570   drop577 (    struct SplitIter_571  iterable853 ,    size_t  i855 ) {
    struct SplitIter_571  it856 = ( (  into_dash_iter578 ) ( (  iterable853 ) ) );
    return ( ( Drop_570_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SplitIter_571   split_dash_by_dash_filter580 (    struct StrView_27  s2220 ,   struct envunion573  fun2222 ) {
    return ( (struct SplitIter_571) { .f_og = (  s2220 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2222 ) } );
}

struct Tuple2_583 {
    struct CharDestructured_344  field0;
    struct CharDestructured_344  field1;
};

static struct Tuple2_583 Tuple2_583_Tuple2 (  struct CharDestructured_344  field0 ,  struct CharDestructured_344  field1 ) {
    return ( struct Tuple2_583 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add584 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq586 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq585 (    struct Scalar_345  l725 ,    struct Scalar_345  r727 ) {
    return (  eq586 ( ( (  l725 ) .f_value ) , ( (  r727 ) .f_value ) ) );
}

static  bool   eq582 (    struct Char_65  l730 ,    struct Char_65  r732 ) {
    if ( ( !  eq406 ( ( (  l730 ) .f_num_dash_bytes ) , ( (  r732 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_583  dref733 = ( ( Tuple2_583_Tuple2 ) ( ( (  destructure346 ) ( (  l730 ) ) ) ,  ( (  destructure346 ) ( (  r732 ) ) ) ) );
    if ( dref733 .field0.tag == CharDestructured_344_Ref_t && dref733 .field1.tag == CharDestructured_344_Ref_t ) {
        int64_t  i736 = (  from_dash_integral295 ( 0 ) );
        while ( (  cmp297 ( ( (size_t ) (  i736 ) ) , ( ( dref733 .field0 .stuff .CharDestructured_344_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq310 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref733 .field0 .stuff .CharDestructured_344_Ref_s .field0 ) .f_ptr ) ) + (  i736 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref733 .field1 .stuff .CharDestructured_344_Ref_s .field0 ) .f_ptr ) ) + (  i736 ) ) ) ) ) ) ) {
                return ( false );
            }
            i736 = (  op_dash_add584 ( (  i736 ) , (  from_dash_integral295 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref733 .field0.tag == CharDestructured_344_Scalar_t && dref733 .field1.tag == CharDestructured_344_Scalar_t ) {
            return (  eq585 ( ( dref733 .field0 .stuff .CharDestructured_344_Scalar_s .field0 ) , ( dref733 .field1 .stuff .CharDestructured_344_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref733 .field0.tag == CharDestructured_344_Scalar_t && dref733 .field1.tag == CharDestructured_344_Ref_t ) {
                return (  eq310 ( ( (  u32_dash_u8153 ) ( ( ( dref733 .field0 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref733 .field1 .stuff .CharDestructured_344_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref733 .field0.tag == CharDestructured_344_Ref_t && dref733 .field1.tag == CharDestructured_344_Scalar_t ) {
                    return (  eq310 ( ( (  u32_dash_u8153 ) ( ( ( dref733 .field1 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref733 .field0 .stuff .CharDestructured_344_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam581 (   struct env572* env ,    struct Char_65  cc2229 ) {
    return (  eq582 ( (  cc2229 ) , ( env->c2227 ) ) );
}

static  struct SplitIter_571   split_dash_by_dash_each579 (    struct StrView_27  s2225 ,    struct Char_65  c2227 ) {
    struct env572 envinst572 = {
        .c2227 =  c2227 ,
    };
    return ( (  split_dash_by_dash_filter580 ) ( (  s2225 ) ,  ( (struct envunion573){ .fun = (  bool  (*) (  struct env572*  ,    struct Char_65  ) )lam581 , .env =  envinst572 } ) ) );
}

struct Tuple2_589 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct Tuple2_589 Tuple2_589_Tuple2 (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_589 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_588 {
    enum {
        Maybe_588_None_t,
        Maybe_588_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_589  field0;
        } Maybe_588_Just_s;
    } stuff;
};

static struct Maybe_588 Maybe_588_Just (  struct Tuple2_589  field0 ) {
    return ( struct Maybe_588 ) { .tag = Maybe_588_Just_t, .stuff = { .Maybe_588_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_94   next592 (    struct SplitIter_571 *  self2235 ) {
    if ( (  cmp297 ( ( ( * (  self2235 ) ) .f_last ) , ( ( ( ( * (  self2235 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    size_t  i2236 = ( ( * (  self2235 ) ) .f_last );
    while ( (  cmp297 ( (  i2236 ) , ( ( ( ( * (  self2235 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2237 = ( (  get_dash_ptr492 ) ( ( ( ( * (  self2235 ) ) .f_og ) .f_contents ) ,  (  i2236 ) ) );
        struct Char_65  c2238 = ( (  scan_dash_from_dash_mem312 ) ( (  ptr2237 ) ) );
        struct envunion573  temp593 = ( ( * (  self2235 ) ) .f_fun );
        if ( ( temp593.fun ( &temp593.env ,  (  c2238 ) ) ) ) {
            break;
        }
        i2236 = (  op_dash_add318 ( (  i2236 ) , ( (  next_dash_char313 ) ( (  ptr2237 ) ) ) ) );
    }
    struct StrView_27  line2239 = ( (  byte_dash_substr518 ) ( ( ( * (  self2235 ) ) .f_og ) ,  ( ( * (  self2235 ) ) .f_last ) ,  (  i2236 ) ) );
    i2236 = (  op_dash_add318 ( (  i2236 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2235 ) .f_last = (  i2236 );
    return ( ( Maybe_94_Just ) ( (  line2239 ) ) );
}

static  struct Maybe_94   next591 (    struct Drop_570 *  dref848 ) {
    while ( (  cmp297 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next592 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub296 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next592 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  struct Maybe_588   next590 (    struct Zip_569 *  self915 ) {
    struct Zip_569  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_94  dref917 = ( (  next591 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_94_None_t ) {
            return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_94_Just_t ) {
                struct Maybe_164  dref919 = ( (  next429 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_588) { .tag = Maybe_588_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next591 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next429 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_588_Just ) ( ( ( Tuple2_589_Tuple2 ) ( ( dref917 .stuff .Maybe_94_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion596 {
    struct List_9  (*fun) (  struct env51*  ,    struct Slice_11  ,    enum CAllocator_10  );
    struct env51 env;
};

static  enum Unit_8   insert598 (   struct env37* env ,    struct List_14 *  list2056 ,    size_t  i2058 ,    struct Line_16  elem2060 ) {
    if ( ( (  cmp297 ( (  i2058 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2058 ) , ( ( * (  list2056 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2058 ) ) ) ,  ( (  from_dash_string207 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq406 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp599 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add403 , .env =  env->envinst12 } );
        ( temp599.fun ( &temp599.env ,  (  list2056 ) ,  (  elem2060 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp600 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_14 *  ) )grow_dash_if_dash_full405 , .env =  env->envinst2 } );
    ( temp600.fun ( &temp600.env ,  (  list2056 ) ) );
    size_t  ii2061 = (  op_dash_sub296 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp297 ( (  ii2061 ) , (  i2058 ) ) != 0 ) ) {
        ( (  set417 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  op_dash_add318 ( (  ii2061 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get530 ) ( (  list2056 ) ,  (  ii2061 ) ) ) ) );
        if ( (  eq406 ( (  ii2061 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2061 = (  op_dash_sub296 ( (  ii2061 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set417 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  i2058 ) ,  (  elem2060 ) ) );
    (*  list2056 ) .f_count = (  op_dash_add318 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion602 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  enum Unit_8   free604 (    struct List_9 *  list2037 ) {
    ( (  free510 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line603 (    struct Line_16 *  line3710 ) {
    ( (  free604 ) ( ( & ( ( * (  line3710 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot529 (   struct env106* env ,    struct TextBuf_114 *  self3743 ,    struct Pos_26  p3745 ,    struct StrView_27  bytes3747 ) {
    enum CAllocator_10  al3748 = ( ( ( * (  self3743 ) ) .f_buf ) .f_al );
    struct List_14 *  buf3749 = ( & ( ( * (  self3743 ) ) .f_buf ) );
    struct Line_16  extracted_dash_line_dash_buf3750 = ( (  get530 ) ( (  buf3749 ) ,  ( (  i32_dash_size419 ) ( ( (  p3745 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3751 = ( (  from532 ) ( ( (  to_dash_slice533 ) ( ( (  extracted_dash_line_dash_buf3750 ) .f_line ) ) ) ,  ( (  i32_dash_size419 ) ( ( (  p3745 ) .f_bi ) ) ) ) );
    struct envunion107  temp535 = ( (struct envunion107){ .fun = (  struct List_9  (*) (  struct env51*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter536 , .env =  env->envinst51 } );
    ( (  set534 ) ( (  buf3749 ) ,  ( (  i32_dash_size419 ) ( ( (  p3745 ) .f_line ) ) ) ,  ( (  mk_dash_line438 ) ( ( temp535.fun ( &temp535.env ,  ( (  subslice505 ) ( ( (  to_dash_slice533 ) ( ( (  extracted_dash_line_dash_buf3750 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size419 ) ( ( (  p3745 ) .f_bi ) ) ) ) ) ,  (  al3748 ) ) ) ) ) ) );
    struct Line_16 *  last_dash_line3752 = ( (  get_dash_ptr531 ) ( (  buf3749 ) ,  ( (  i32_dash_size419 ) ( ( (  p3745 ) .f_line ) ) ) ) );
    struct envunion109  temp556 = ( (struct envunion109){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all539 , .env =  env->envinst46 } );
    ( temp556.fun ( &temp556.env ,  ( & ( ( * (  last_dash_line3752 ) ) .f_line ) ) ,  ( ( (  or_dash_else557 ) ( ( (  head558 ) ( ( (  lines567 ) ( (  bytes3747 ) ) ) ) ) ,  ( (  from_dash_string207 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3753 = (  from_dash_integral67 ( 0 ) );
    struct Zip_569  temp568 =  into_dash_iter574 ( ( (  zip575 ) ( ( (  drop577 ) ( ( (  split_dash_by_dash_each579 ) ( (  bytes3747 ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_588  __cond587 =  next590 (&temp568);
        if (  __cond587 .tag == 0 ) {
            break;
        }
        struct Tuple2_589  dref3754 =  __cond587 .stuff .Maybe_588_Just_s .field0;
        struct envunion596  temp595 = ( (struct envunion596){ .fun = (  struct List_9  (*) (  struct env51*  ,    struct Slice_11  ,    enum CAllocator_10  ) )from_dash_iter536 , .env =  env->envinst51 } );
        struct Line_16  temp594 = ( (  mk_dash_line438 ) ( ( temp595.fun ( &temp595.env ,  ( ( dref3754 .field0 ) .f_contents ) ,  (  al3748 ) ) ) ) );
        struct Line_16 *  nuline3757 = ( &temp594 );
        size_t  next_dash_line3758 = ( (  i32_dash_size419 ) ( (  op_dash_add168 ( ( (  p3745 ) .f_line ) , ( dref3754 .field1 ) ) ) ) );
        struct envunion108  temp597 = ( (struct envunion108){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_14 *  ,    size_t  ,    struct Line_16  ) )insert598 , .env =  env->envinst37 } );
        ( temp597.fun ( &temp597.env ,  (  buf3749 ) ,  (  next_dash_line3758 ) ,  ( * (  nuline3757 ) ) ) );
        last_dash_line3752 = ( (  get_dash_ptr531 ) ( (  buf3749 ) ,  (  next_dash_line3758 ) ) );
        lines_dash_added3753 = (  op_dash_add168 ( (  lines_dash_added3753 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    struct envunion602  temp601 = ( (struct envunion602){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all539 , .env =  env->envinst46 } );
    ( temp601.fun ( &temp601.env ,  ( & ( ( * (  last_dash_line3752 ) ) .f_line ) ) ,  (  remaining3751 ) ) );
    ( (  free_dash_line603 ) ( ( & (  extracted_dash_line_dash_buf3750 ) ) ) );
    return (  lines_dash_added3753 );
}

static  size_t   size605 (    struct List_9 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

struct StrConcat_611 {
    struct StrConcat_87  field0;
    struct Char_65  field1;
};

static struct StrConcat_611 StrConcat_611_StrConcat (  struct StrConcat_87  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_611 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_610 {
    struct StrConcat_611  field0;
    size_t  field1;
};

static struct StrConcat_610 StrConcat_610_StrConcat (  struct StrConcat_611  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_610 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_609 {
    struct StrConcat_610  field0;
    struct Char_65  field1;
};

static struct StrConcat_609 StrConcat_609_StrConcat (  struct StrConcat_610  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_609 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_614 {
    struct StrView_27  field0;
    struct StrConcat_609  field1;
};

static struct StrConcat_614 StrConcat_614_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_609  field1 ) {
    return ( struct StrConcat_614 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_613 {
    struct StrConcat_614  field0;
    struct Char_65  field1;
};

static struct StrConcat_613 StrConcat_613_StrConcat (  struct StrConcat_614  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_613 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str618 (    struct StrConcat_611  self1510 ) {
    struct StrConcat_611  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str340 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str617 (    struct StrConcat_610  self1510 ) {
    struct StrConcat_610  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str618 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str341 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str616 (    struct StrConcat_609  self1510 ) {
    struct StrConcat_609  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str617 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str615 (    struct StrConcat_614  self1510 ) {
    struct StrConcat_614  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str616 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str612 (    struct StrConcat_613  self1510 ) {
    struct StrConcat_613  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str615 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic608 (    struct StrConcat_609  errmsg1714 ) {
    ( (  print_dash_str612 ) ( ( ( StrConcat_613_StrConcat ) ( ( ( StrConcat_614_StrConcat ) ( ( (  from_dash_string207 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

struct Drop_620 {
    struct Zip_476  field0;
    size_t  field1;
};

static struct Drop_620 Drop_620_Drop (  struct Zip_476  field0 ,  size_t  field1 ) {
    return ( struct Drop_620 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env621 {
    struct List_9 *  list2064;
    ;
    ;
    size_t  num_dash_elems2069;
    ;
};

struct envunion622 {
    enum Unit_8  (*fun) (  struct env621*  ,    struct Tuple2_480  );
    struct env621 env;
};

static  struct Drop_620   into_dash_iter624 (    struct Drop_620  self846 ) {
    return (  self846 );
}

static  struct Maybe_483   next625 (    struct Drop_620 *  dref848 ) {
    while ( (  cmp297 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next484 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub296 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next484 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each619 (    struct Drop_620  iterable1075 ,   struct envunion622  fun1077 ) {
    struct Drop_620  temp623 = ( (  into_dash_iter624 ) ( (  iterable1075 ) ) );
    struct Drop_620 *  it1078 = ( &temp623 );
    while ( ( true ) ) {
        struct Maybe_483  dref1079 = ( (  next625 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_483_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_483_Just_t ) {
                struct envunion622  temp626 = (  fun1077 );
                ( temp626.fun ( &temp626.env ,  ( dref1079 .stuff .Maybe_483_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_620   drop627 (    struct Zip_476  iterable853 ,    size_t  i855 ) {
    struct Zip_476  it856 = ( (  into_dash_iter482 ) ( (  iterable853 ) ) );
    return ( ( Drop_620_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct SliceIter_477   into_dash_iter629 (    struct List_9  self2030 ) {
    return ( (  into_dash_iter489 ) ( ( (  subslice505 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Zip_476   zip628 (    struct List_9  left923 ,    struct FromIter_423  right925 ) {
    struct SliceIter_477  left_dash_it926 = ( (  into_dash_iter629 ) ( (  left923 ) ) );
    struct FromIter_423  right_dash_it927 = ( (  into_dash_iter433 ) ( (  right925 ) ) );
    return ( (struct Zip_476) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   set631 (    struct List_9 *  list2023 ,    size_t  i2025 ,    uint8_t  elem2027 ) {
    if ( ( (  cmp297 ( (  i2025 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2025 ) , ( ( * (  list2023 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2025 ) ) ) ,  ( (  from_dash_string207 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2023 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set491 ) ( ( ( * (  list2023 ) ) .f_elements ) ,  (  i2025 ) ,  (  elem2027 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam630 (   struct env621* env ,    struct Tuple2_480  dref2070 ) {
    return ( (  set631 ) ( ( env->list2064 ) ,  (  op_dash_sub296 ( ( (  i32_dash_size419 ) ( ( dref2070 .field1 ) ) ) , ( env->num_dash_elems2069 ) ) ) ,  ( dref2070 .field0 ) ) );
}

static  enum Unit_8   remove_dash_range607 (   struct env40* env ,    struct List_9 *  list2064 ,    size_t  from2066 ,    size_t  to_dash_excl2068 ) {
    if ( (  cmp297 ( (  to_dash_excl2068 ) , (  from2066 ) ) == 0 ) ) {
        ( (  panic608 ) ( ( ( StrConcat_609_StrConcat ) ( ( ( StrConcat_610_StrConcat ) ( ( ( StrConcat_611_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp297 ( (  from2066 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_string207 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp297 ( (  to_dash_excl2068 ) , ( ( * (  list2064 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_string207 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2069 = (  op_dash_sub296 ( (  to_dash_excl2068 ) , (  from2066 ) ) );
    struct env621 envinst621 = {
        .list2064 =  list2064 ,
        .num_dash_elems2069 =  num_dash_elems2069 ,
    };
    ( (  for_dash_each619 ) ( ( (  drop627 ) ( ( (  zip628 ) ( ( * (  list2064 ) ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  op_dash_add318 ( (  from2066 ) , (  num_dash_elems2069 ) ) ) ) ) ,  ( (struct envunion622){ .fun = (  enum Unit_8  (*) (  struct env621*  ,    struct Tuple2_480  ) )lam630 , .env =  envinst621 } ) ) );
    (*  list2064 ) .f_count = (  op_dash_sub296 ( ( ( * (  list2064 ) ) .f_count ) , (  num_dash_elems2069 ) ) );
    size_t  capacity2073 = ( ( ( * (  list2064 ) ) .f_elements ) .f_count );
    if ( (  cmp297 ( (  op_dash_mul412 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  capacity2073 ) ) == 0 ) ) {
        if ( (  eq406 ( ( ( * (  list2064 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free510 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
            (*  list2064 ) .f_elements = ( (  empty447 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2074 = (  op_dash_mul412 ( (  op_dash_add318 ( (  op_dash_div349 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2040 ) ) );
        struct Slice_11  new_dash_slice2075 = ( (  allocate462 ) ( ( ( * (  list2064 ) ) .f_al ) ,  (  new_dash_size2074 ) ) );
        ( (  copy_dash_to467 ) ( ( (  subslice505 ) ( ( ( * (  list2064 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  (  new_dash_slice2075 ) ) );
        ( (  free510 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
        (*  list2064 ) .f_elements = (  new_dash_slice2075 );
    }
    return ( Unit_8_Unit );
}

struct envunion633 {
    int32_t  (*fun) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env106 env;
};

static  enum Unit_8   trim634 (    struct List_9 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min506 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min635 (    int32_t  l1237 ,    int32_t  r1239 ) {
    if ( (  cmp166 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

struct envunion637 {
    int32_t  (*fun) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  );
    struct env106 env;
};

struct Maybe_639 {
    enum {
        Maybe_639_None_t,
        Maybe_639_Just_t,
    } tag;
    union {
        struct {
            struct Slice_11  field0;
        } Maybe_639_Just_s;
    } stuff;
};

static struct Maybe_639 Maybe_639_Just (  struct Slice_11  field0 ) {
    return ( struct Maybe_639 ) { .tag = Maybe_639_Just_t, .stuff = { .Maybe_639_Just_s = { .field0 = field0 } } };
};

static  struct Slice_11   or_dash_else638 (    struct Maybe_639  self1734 ,    struct Slice_11  alt1736 ) {
    struct Maybe_639  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_639_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_639_Just_t ) {
            return ( dref1737 .stuff .Maybe_639_Just_s .field0 );
        }
    }
}

static  struct Maybe_639   fmap_dash_maybe640 (    struct Maybe_383  x1276 ,    struct Slice_11 (*  fun1278 )(    struct Line_16  ) ) {
    struct Maybe_383  dref1279 = (  x1276 );
    if ( dref1279.tag == Maybe_383_None_t ) {
        return ( (struct Maybe_639) { .tag = Maybe_639_None_t } );
    }
    else {
        if ( dref1279.tag == Maybe_383_Just_t ) {
            return ( ( Maybe_639_Just ) ( ( (  fun1278 ) ( ( dref1279 .stuff .Maybe_383_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_383   try_dash_get641 (    struct List_14 *  list2018 ,    size_t  i2020 ) {
    if ( (  cmp297 ( (  i2020 ) , ( ( * (  list2018 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_383) { .tag = Maybe_383_None_t } );
    }
    return ( ( Maybe_383_Just ) ( ( (  get530 ) ( (  list2018 ) ,  (  i2020 ) ) ) ) );
}

static  struct Slice_11   lam642 (    struct Line_16  line3776 ) {
    return ( (  to_dash_slice533 ) ( ( (  line3776 ) .f_line ) ) );
}

struct StrConcat_647 {
    struct StrView_27  field0;
    struct StrView_27  field1;
};

static struct StrConcat_647 StrConcat_647_StrConcat (  struct StrView_27  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_647 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_646 {
    struct StrConcat_647  field0;
    struct Char_65  field1;
};

static struct StrConcat_646 StrConcat_646_StrConcat (  struct StrConcat_647  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_646 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str648 (    struct StrConcat_647  self1510 ) {
    struct StrConcat_647  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str645 (    struct StrConcat_646  self1510 ) {
    struct StrConcat_646  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str648 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert644 (    bool  cond1720 ,    struct StrView_27  msg1722 ) {
    if ( ( ! (  cond1720 ) ) ) {
        ( (  print_dash_str645 ) ( ( ( StrConcat_646_StrConcat ) ( ( ( StrConcat_647_StrConcat ) ( ( (  from_dash_string207 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1722 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_652 {
    struct Zip_421  field0;
    size_t  field1;
};

static struct Drop_652 Drop_652_Drop (  struct Zip_421  field0 ,  size_t  field1 ) {
    return ( struct Drop_652 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env653 {
    struct List_14 *  list2064;
    ;
    ;
    size_t  num_dash_elems2069;
    ;
};

struct envunion654 {
    enum Unit_8  (*fun) (  struct env653*  ,    struct Tuple2_415  );
    struct env653 env;
};

static  struct Drop_652   into_dash_iter656 (    struct Drop_652  self846 ) {
    return (  self846 );
}

static  struct Maybe_426   next657 (    struct Drop_652 *  dref848 ) {
    while ( (  cmp297 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next427 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub296 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next427 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each651 (    struct Drop_652  iterable1075 ,   struct envunion654  fun1077 ) {
    struct Drop_652  temp655 = ( (  into_dash_iter656 ) ( (  iterable1075 ) ) );
    struct Drop_652 *  it1078 = ( &temp655 );
    while ( ( true ) ) {
        struct Maybe_426  dref1079 = ( (  next657 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_426_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_426_Just_t ) {
                struct envunion654  temp658 = (  fun1077 );
                ( temp658.fun ( &temp658.env ,  ( dref1079 .stuff .Maybe_426_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_652   drop659 (    struct Zip_421  iterable853 ,    size_t  i855 ) {
    struct Zip_421  it856 = ( (  into_dash_iter425 ) ( (  iterable853 ) ) );
    return ( ( Drop_652_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

static  struct Slice_15   subslice662 (    struct Slice_15  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Line_16 *  begin_dash_ptr1789 = ( (  offset_dash_ptr398 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp297 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp297 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub296 ( ( (  min506 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_15) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_422   into_dash_iter661 (    struct List_14  self2030 ) {
    return ( (  into_dash_iter432 ) ( ( (  subslice662 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Zip_421   zip660 (    struct List_14  left923 ,    struct FromIter_423  right925 ) {
    struct SliceIter_422  left_dash_it926 = ( (  into_dash_iter661 ) ( (  left923 ) ) );
    struct FromIter_423  right_dash_it927 = ( (  into_dash_iter433 ) ( (  right925 ) ) );
    return ( (struct Zip_421) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   lam663 (   struct env653* env ,    struct Tuple2_415  dref2070 ) {
    return ( (  set534 ) ( ( env->list2064 ) ,  (  op_dash_sub296 ( ( (  i32_dash_size419 ) ( ( dref2070 .field1 ) ) ) , ( env->num_dash_elems2069 ) ) ) ,  ( dref2070 .field0 ) ) );
}

struct env666 {
    ;
    ;
    struct Slice_15  dest1855;
};

struct envunion667 {
    enum Unit_8  (*fun) (  struct env666*  ,    struct Tuple2_415  );
    struct env666 env;
};

static  enum Unit_8   for_dash_each665 (    struct Zip_421  iterable1075 ,   struct envunion667  fun1077 ) {
    struct Zip_421  temp668 = ( (  into_dash_iter425 ) ( (  iterable1075 ) ) );
    struct Zip_421 *  it1078 = ( &temp668 );
    while ( ( true ) ) {
        struct Maybe_426  dref1079 = ( (  next427 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_426_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_426_Just_t ) {
                struct envunion667  temp669 = (  fun1077 );
                ( temp669.fun ( &temp669.env ,  ( dref1079 .stuff .Maybe_426_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam670 (   struct env666* env ,    struct Tuple2_415  dref1856 ) {
    return ( (  set417 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size419 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to664 (    struct Slice_15  src1853 ,    struct Slice_15  dest1855 ) {
    if ( (  cmp297 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic468 ) ( ( ( StrConcat_469_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string207 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string207 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env666 envinst666 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each665 ) ( ( (  zip431 ) ( (  src1853 ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  ( (struct envunion667){ .fun = (  enum Unit_8  (*) (  struct env666*  ,    struct Tuple2_415  ) )lam670 , .env =  envinst666 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range650 (   struct env41* env ,    struct List_14 *  list2064 ,    size_t  from2066 ,    size_t  to_dash_excl2068 ) {
    if ( (  cmp297 ( (  to_dash_excl2068 ) , (  from2066 ) ) == 0 ) ) {
        ( (  panic608 ) ( ( ( StrConcat_609_StrConcat ) ( ( ( StrConcat_610_StrConcat ) ( ( ( StrConcat_611_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp297 ( (  from2066 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2066 ) ) ) ,  ( (  from_dash_string207 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp297 ( (  to_dash_excl2068 ) , ( ( * (  list2064 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2068 ) ) ) ,  ( (  from_dash_string207 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2069 = (  op_dash_sub296 ( (  to_dash_excl2068 ) , (  from2066 ) ) );
    struct env653 envinst653 = {
        .list2064 =  list2064 ,
        .num_dash_elems2069 =  num_dash_elems2069 ,
    };
    ( (  for_dash_each651 ) ( ( (  drop659 ) ( ( (  zip660 ) ( ( * (  list2064 ) ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  op_dash_add318 ( (  from2066 ) , (  num_dash_elems2069 ) ) ) ) ) ,  ( (struct envunion654){ .fun = (  enum Unit_8  (*) (  struct env653*  ,    struct Tuple2_415  ) )lam663 , .env =  envinst653 } ) ) );
    (*  list2064 ) .f_count = (  op_dash_sub296 ( ( ( * (  list2064 ) ) .f_count ) , (  num_dash_elems2069 ) ) );
    size_t  capacity2073 = ( ( ( * (  list2064 ) ) .f_elements ) .f_count );
    if ( (  cmp297 ( (  op_dash_mul412 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  capacity2073 ) ) == 0 ) ) {
        if ( (  eq406 ( ( ( * (  list2064 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free435 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
            (*  list2064 ) .f_elements = ( (  empty369 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2074 = (  op_dash_mul412 ( (  op_dash_add318 ( (  op_dash_div349 ( ( ( * (  list2064 ) ) .f_count ) , ( env->shrink_dash_factor2040 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2040 ) ) );
        struct Slice_15  new_dash_slice2075 = ( (  allocate407 ) ( ( ( * (  list2064 ) ) .f_al ) ,  (  new_dash_size2074 ) ) );
        ( (  copy_dash_to664 ) ( ( (  subslice662 ) ( ( ( * (  list2064 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2064 ) ) .f_count ) ) ) ,  (  new_dash_slice2075 ) ) );
        ( (  free435 ) ( ( ( * (  list2064 ) ) .f_al ) ,  ( ( * (  list2064 ) ) .f_elements ) ) );
        (*  list2064 ) .f_elements = (  new_dash_slice2075 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action520 (   struct env110* env ,    struct TextBuf_114 *  self3761 ,    struct Pos_26  from_dash_pos3763 ,    struct Pos_26  to_dash_pos3765 ,    struct StrView_27  bytes3767 ) {
    struct Pos_26  from3768 = ( (  min521 ) ( (  from_dash_pos3763 ) ,  (  to_dash_pos3765 ) ) );
    struct Pos_26  to3769 = ( (  max523 ) ( (  from_dash_pos3763 ) ,  (  to_dash_pos3765 ) ) );
    if ( (  eq524 ( (  to3769 ) , (  from3768 ) ) ) ) {
        enum CAllocator_10  al3770 = ( ( ( * (  self3761 ) ) .f_buf ) .f_al );
        if ( ( (  eq406 ( ( (  size526 ) ( ( & ( ( * (  self3761 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size419 ) ( ( (  from3768 ) .f_line ) ) ) ) ) && (  eq525 ( ( (  from3768 ) .f_bi ) , (  from_dash_integral67 ( 0 ) ) ) ) ) ) {
            struct envunion111  temp527 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env12*  ,    struct List_14 *  ,    struct Line_16  ) )add403 , .env =  env->envinst12 } );
            ( temp527.fun ( &temp527.env ,  ( & ( ( * (  self3761 ) ) .f_buf ) ) ,  ( (  mk_dash_line438 ) ( ( (  mk446 ) ( (  al3770 ) ) ) ) ) ) );
        }
        struct envunion113  temp528 = ( (struct envunion113){ .fun = (  int32_t  (*) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot529 , .env =  env->envinst106 } );
        ( temp528.fun ( &temp528.env ,  (  self3761 ) ,  (  from3768 ) ,  (  bytes3767 ) ) );
    } else {
        struct List_14 *  lines_dash_buf3771 = ( & ( ( * (  self3761 ) ) .f_buf ) );
        struct Line_16 *  first_dash_line3772 = ( (  get_dash_ptr531 ) ( (  lines_dash_buf3771 ) ,  ( (  i32_dash_size419 ) ( ( (  from3768 ) .f_line ) ) ) ) );
        (*  first_dash_line3772 ) .f_invalidated = ( true );
        if ( ( (  eq525 ( ( (  from3768 ) .f_line ) , ( (  to3769 ) .f_line ) ) ) && (  cmp166 ( ( (  to3769 ) .f_bi ) , (  op_dash_add168 ( ( (  size_dash_i32336 ) ( ( (  size605 ) ( ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion117  temp606 = ( (struct envunion117){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range607 , .env =  env->envinst40 } );
            ( temp606.fun ( &temp606.env ,  ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ,  ( (  i32_dash_size419 ) ( ( (  from3768 ) .f_bi ) ) ) ,  ( (  i32_dash_size419 ) ( ( (  to3769 ) .f_bi ) ) ) ) );
            struct envunion633  temp632 = ( (struct envunion633){ .fun = (  int32_t  (*) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot529 , .env =  env->envinst106 } );
            ( temp632.fun ( &temp632.env ,  (  self3761 ) ,  (  from3768 ) ,  (  bytes3767 ) ) );
        } else {
            ( (  trim634 ) ( ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ,  ( (  i32_dash_size419 ) ( ( (  from3768 ) .f_bi ) ) ) ) );
            struct Line_16 *  last_dash_line3773 = ( (  get_dash_ptr531 ) ( (  lines_dash_buf3771 ) ,  ( (  i32_dash_size419 ) ( ( (  to3769 ) .f_line ) ) ) ) );
            (*  last_dash_line3773 ) .f_invalidated = ( true );
            to3769 .f_bi = ( (  min635 ) ( ( (  to3769 ) .f_bi ) ,  (  op_dash_add168 ( ( (  size_dash_i32336 ) ( ( (  size605 ) ( ( & ( ( * (  last_dash_line3773 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
            if ( (  eq525 ( ( (  to3769 ) .f_bi ) , (  op_dash_add168 ( ( (  size_dash_i32336 ) ( ( (  size605 ) ( ( & ( ( * (  last_dash_line3773 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) {
                to3769 .f_line = (  op_dash_add168 ( ( (  to3769 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) );
                to3769 .f_bi = (  from_dash_integral67 ( 0 ) );
            }
            struct envunion637  temp636 = ( (struct envunion637){ .fun = (  int32_t  (*) (  struct env106*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct StrView_27  ) )add_dash_to_dash_spot529 , .env =  env->envinst106 } );
            int32_t  lines_dash_added3774 = ( temp636.fun ( &temp636.env ,  (  self3761 ) ,  (  from3768 ) ,  (  bytes3767 ) ) );
            to3769 .f_line = (  op_dash_add168 ( ( (  to3769 ) .f_line ) , (  lines_dash_added3774 ) ) );
            from3768 .f_line = (  op_dash_add168 ( ( (  from3768 ) .f_line ) , (  lines_dash_added3774 ) ) );
            struct Slice_11  last_dash_line3777 = ( (  or_dash_else638 ) ( ( (  fmap_dash_maybe640 ) ( ( (  try_dash_get641 ) ( (  lines_dash_buf3771 ) ,  ( (  i32_dash_size419 ) ( ( (  to3769 ) .f_line ) ) ) ) ) ,  (  lam642 ) ) ) ,  ( (  empty447 ) ( ) ) ) );
            struct envunion112  temp643 = ( (struct envunion112){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all539 , .env =  env->envinst46 } );
            ( temp643.fun ( &temp643.env ,  ( & ( ( * (  first_dash_line3772 ) ) .f_line ) ) ,  ( (  from532 ) ( (  last_dash_line3777 ) ,  ( (  i32_dash_size419 ) ( ( (  to3769 ) .f_bi ) ) ) ) ) ) );
            ( (  assert644 ) ( (  cmp166 ( ( (  to3769 ) .f_line ) , ( (  from3768 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string207 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion118  temp649 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_14 *  ,    size_t  ,    size_t  ) )remove_dash_range650 , .env =  env->envinst41 } );
            ( temp649.fun ( &temp649.env ,  ( & ( ( * (  self3761 ) ) .f_buf ) ) ,  ( (  i32_dash_size419 ) ( (  op_dash_add168 ( ( (  from3768 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  op_dash_add318 ( ( (  i32_dash_size419 ) ( ( (  to3769 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   mk671 (    int32_t  line3636 ,    int32_t  bi3638 ) {
    return ( (struct Pos_26) { .f_line = (  line3636 ) , .f_bi = (  bi3638 ) } );
}

static  struct Maybe_358   mk_dash_from_dash_file361 (   struct env123* env ,    enum CAllocator_10  al3797 ,    struct StrView_27  filename3799 ) {
    struct envunion125  temp363 = ( (struct envunion125){ .fun = (  struct TextBuf_114  (*) (  struct env121*  ,    enum CAllocator_10  ) )mk364 , .env =  env->envinst121 } );
    struct TextBuf_114  temp362 = ( temp363.fun ( &temp363.env ,  (  al3797 ) ) );
    struct TextBuf_114 *  tb3800 = ( &temp362 );
    struct StrView_27  filename03801 = ( (  clone_dash_0461 ) ( (  filename3799 ) ,  (  al3797 ) ) );
    struct Maybe_94  dref3802 = ( (  try_dash_read_dash_contents494 ) ( ( (  as_dash_const_dash_str507 ) ( (  filename03801 ) ) ) ,  (  al3797 ) ) );
    if ( dref3802.tag == Maybe_94_None_t ) {
        ( (  free509 ) ( (  filename03801 ) ,  (  al3797 ) ) );
        return ( (struct Maybe_358) { .tag = Maybe_358_None_t } );
    }
    else {
        if ( dref3802.tag == Maybe_94_Just_t ) {
            if ( (  eq512 ( ( (  try_dash_get514 ) ( ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) .f_contents ) ,  (  op_dash_sub296 ( ( ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , ( ( Maybe_485_Just ) ( ( (  ascii_dash_u8515 ) ( ( (  from_dash_charlike516 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) {
                dref3802 .stuff .Maybe_94_Just_s .field0 = ( (  byte_dash_substr518 ) ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub296 ( ( ( ( dref3802 .stuff .Maybe_94_Just_s .field0 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
            }
            struct envunion124  temp519 = ( (struct envunion124){ .fun = (  enum Unit_8  (*) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action520 , .env =  env->envinst110 } );
            ( temp519.fun ( &temp519.env ,  (  tb3800 ) ,  ( (  mk671 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) ,  ( (  mk671 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) ,  ( dref3802 .stuff .Maybe_94_Just_s .field0 ) ) );
            (*  tb3800 ) .f_filename = ( ( Maybe_94_Just ) ( (  filename03801 ) ) );
            return ( ( Maybe_358_Just ) ( ( * (  tb3800 ) ) ) );
        }
    }
}

struct envunion673 {
    struct TextBuf_114  (*fun) (  struct env121*  ,    enum CAllocator_10  );
    struct env121 env;
};

struct envunion675 {
    struct StrView_27  (*fun) (  struct env56*  ,    struct StrConcat_646  ,    enum CAllocator_10  );
    struct env56 env;
};

struct env681 {
    struct env6 envinst6;
    struct List_9 *  list2100;
};

struct envunion682 {
    enum Unit_8  (*fun) (  struct env681*  ,    uint8_t  );
    struct env681 env;
};

static  struct Map_59   into_dash_iter684 (    struct Map_59  self797 ) {
    return (  self797 );
}

static  struct Maybe_304   next688 (    struct StrViewIter_62 *  self1375 ) {
    if ( (  cmp297 ( ( ( * (  self1375 ) ) .f_i ) , ( ( ( ( * (  self1375 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    uint8_t *  char_dash_ptr1376 = ( ( (  offset_dash_ptr307 ) ( ( (  cast354 ) ( ( ( ( ( * (  self1375 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64309 ) ( ( ( * (  self1375 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1377 = ( (  scan_dash_from_dash_mem312 ) ( (  char_dash_ptr1376 ) ) );
    (*  self1375 ) .f_i = (  op_dash_add318 ( ( ( * (  self1375 ) ) .f_i ) , ( (  char1377 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_304_Just ) ( (  char1377 ) ) );
}

static  struct Maybe_304   next687 (    struct StrConcatIter_61 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next690 (    enum EmptyIter_64 *  dref793 ) {
    return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
}

static  struct Maybe_304   next689 (    struct AppendIter_63 *  self1023 ) {
    struct Maybe_304  dref1024 = ( (  next690 ) ( ( & ( ( * (  self1023 ) ) .f_it ) ) ) );
    if ( dref1024.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1024 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1024.tag == Maybe_304_None_t ) {
            if ( ( ! ( ( * (  self1023 ) ) .f_appended ) ) ) {
                (*  self1023 ) .f_appended = ( true );
                return ( ( Maybe_304_Just ) ( ( ( * (  self1023 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
        }
    }
}

static  struct Maybe_304   next686 (    struct StrConcatIter_60 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next687 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_485   next685 (    struct Map_59 *  dref799 ) {
    struct Maybe_304  dref802 = ( (  next686 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_485) { .tag = Maybe_485_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_304_Just_t ) {
            return ( ( Maybe_485_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_304_Just_s .field0 ) ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each680 (    struct Map_59  iterable1075 ,   struct envunion682  fun1077 ) {
    struct Map_59  temp683 = ( (  into_dash_iter684 ) ( (  iterable1075 ) ) );
    struct Map_59 *  it1078 = ( &temp683 );
    while ( ( true ) ) {
        struct Maybe_485  dref1079 = ( (  next685 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_485_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_485_Just_t ) {
                struct envunion682  temp691 = (  fun1077 );
                ( temp691.fun ( &temp691.env ,  ( dref1079 .stuff .Maybe_485_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam692 (   struct env681* env ,    uint8_t  x2104 ) {
    struct envunion47  temp693 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add547 , .env =  env->envinst6 } );
    return ( temp693.fun ( &temp693.env ,  ( env->list2100 ) ,  (  x2104 ) ) );
}

static  enum Unit_8   add_dash_all679 (   struct env50* env ,    struct List_9 *  list2100 ,    struct Map_59  it2102 ) {
    struct env681 envinst681 = {
        .envinst6 = env->envinst6 ,
        .list2100 =  list2100 ,
    };
    ( (  for_dash_each680 ) ( (  it2102 ) ,  ( (struct envunion682){ .fun = (  enum Unit_8  (*) (  struct env681*  ,    uint8_t  ) )lam692 , .env =  envinst681 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_60   into_dash_iter695 (    struct StrConcatIter_60  self1498 ) {
    return (  self1498 );
}

static  struct Map_59   map694 (    struct StrConcatIter_60  iterable806 ,    uint8_t (*  fun808 )(    struct Char_65  ) ) {
    struct StrConcatIter_60  it809 = ( (  into_dash_iter695 ) ( (  iterable806 ) ) );
    return ( ( Map_59_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct StrViewIter_62   into_dash_iter701 (    struct StrView_27  self1369 ) {
    return ( (struct StrViewIter_62) { .f_ds = (  self1369 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_62   chars700 (    struct StrView_27  self1383 ) {
    return ( (  into_dash_iter701 ) ( (  self1383 ) ) );
}

static  struct StrConcatIter_61   into_dash_iter699 (    struct StrConcat_647  dref1505 ) {
    return ( (struct StrConcatIter_61) { .f_left = ( (  chars700 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars700 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_61   chars698 (    struct StrConcat_647  self1516 ) {
    return ( (  into_dash_iter699 ) ( (  self1516 ) ) );
}

static  enum EmptyIter_64   into_dash_iter706 (    enum EmptyIter_64  self791 ) {
    return (  self791 );
}

static  struct AppendIter_63   append705 (    enum EmptyIter_64  it1007 ,    struct Char_65  e1009 ) {
    return ( (struct AppendIter_63) { .f_it = ( (  into_dash_iter706 ) ( (  it1007 ) ) ) , .f_elem = (  e1009 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_63   cons704 (    enum EmptyIter_64  it1012 ,    struct Char_65  e1014 ) {
    return ( (  append705 ) ( (  it1012 ) ,  (  e1014 ) ) );
}

static  enum EmptyIter_64   nil707 (  ) {
    return ( EmptyIter_64_EmptyIter );
}

static  struct AppendIter_63   single703 (    struct Char_65  e1017 ) {
    return ( (  cons704 ) ( ( (  nil707 ) ( ) ) ,  (  e1017 ) ) );
}

static  struct AppendIter_63   chars702 (    struct Char_65  self1414 ) {
    return ( (  single703 ) ( (  self1414 ) ) );
}

static  struct StrConcatIter_60   into_dash_iter697 (    struct StrConcat_646  dref1505 ) {
    return ( (struct StrConcatIter_60) { .f_left = ( (  chars698 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_60   chars696 (    struct StrConcat_646  self1516 ) {
    return ( (  into_dash_iter697 ) ( (  self1516 ) ) );
}

static  struct StrView_27   from_dash_str676 (   struct env56* env ,    struct StrConcat_646  s1997 ,    enum CAllocator_10  al1999 ) {
    struct List_9  temp677 = ( (  mk446 ) ( (  al1999 ) ) );
    struct List_9 *  l2148 = ( &temp677 );
    struct envunion58  temp678 = ( (struct envunion58){ .fun = (  enum Unit_8  (*) (  struct env50*  ,    struct List_9 *  ,    struct Map_59  ) )add_dash_all679 , .env =  env->envinst50 } );
    ( temp678.fun ( &temp678.env ,  (  l2148 ) ,  ( (  map694 ) ( ( (  chars696 ) ( (  s1997 ) ) ) ,  (  char_dash_u8493 ) ) ) ) );
    struct envunion57  temp708 = ( (struct envunion57){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    uint8_t  ) )add547 , .env =  env->envinst6 } );
    ( temp708.fun ( &temp708.env ,  (  l2148 ) ,  ( (  char_dash_u8493 ) ( ( (  nullchar504 ) ( ) ) ) ) ) );
    return ( (struct StrView_27) { .f_contents = ( (  to_dash_slice533 ) ( ( * (  l2148 ) ) ) ) } );
}

struct envunion710 {
    struct TextBuf_114  (*fun) (  struct env121*  ,    enum CAllocator_10  );
    struct env121 env;
};

static  struct Pane_227   mk712 (    enum CAllocator_10  al4026 ,    struct TextBuf_114 *  buf4028 ) {
    return ( (struct Pane_227) { .f_buf = (  buf4028 ) , .f_cursor = ( (  mk671 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral67 ( 0 ) ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) , .f_mode = ( Mode_228_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_229) { .f_screen_dash_top = (  from_dash_integral67 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral67 ( 0 ) ) } ) } );
}

struct envunion715 {
    struct Tui_100  (*fun) (  struct env96*  );
    struct env96 env;
};

static  struct Termios_102   undefined719 (  ) {
    struct Termios_102  temp720;
    return (  temp720 );
}

static  int32_t   stdin_dash_fileno721 (  ) {
    return (  from_dash_integral67 ( 0 ) );
}

static  struct termios *   cast_dash_ptr722 (    struct Termios_102 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and723 (    uint32_t  l2861 ,    uint32_t  r2863 ) {
    return ( (  l2861 ) & (  r2863 ) );
}

static  uint32_t   u32_dash_neg724 (    uint32_t  l2866 ) {
    return ( ~ (  l2866 ) );
}

struct Array_726 {
    uint32_t _arr [4];
};

struct ArrayIter_728 {
    struct Array_726  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_728   into_dash_iter729 (    struct Array_726  self2327 ) {
    return ( (struct ArrayIter_728) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_730 {
    enum {
        Maybe_730_None_t,
        Maybe_730_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_730_Just_s;
    } stuff;
};

static struct Maybe_730 Maybe_730_Just (  uint32_t  field0 ) {
    return ( struct Maybe_730 ) { .tag = Maybe_730_Just_t, .stuff = { .Maybe_730_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr734 (    struct Array_726 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr735 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp736;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp736 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr733 (    struct Array_726 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp297 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2258 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic387 ) ( ( ( StrConcat_388_StrConcat ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2259 = ( ( (  cast_dash_ptr734 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr735 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  uint32_t   get732 (    struct Array_726 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr733 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_730   next731 (    struct ArrayIter_728 *  self2334 ) {
    if ( (  cmp297 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_730) { .tag = Maybe_730_None_t } );
    }
    uint32_t  e2336 = ( (  get732 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add318 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_730_Just ) ( (  e2336 ) ) );
}

static  uint32_t   reduce727 (    struct Array_726  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_728  it1100 = ( (  into_dash_iter729 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_730  dref1101 = ( (  next731 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_730_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_730_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_730_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp737 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp737);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp738;
    return (  temp738 );
}

static  uint32_t   u32_dash_or739 (    uint32_t  l2853 ,    uint32_t  r2855 ) {
    return ( (  l2853 ) | (  r2855 ) );
}

static  uint32_t   u32_dash_ors725 (    struct Array_726  vals2858 ) {
    return ( (  reduce727 ) ( (  vals2858 ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  u32_dash_or739 ) ) );
}

static  struct Array_726   from_dash_listlike740 (    struct Array_726  self330 ) {
    return (  self330 );
}

static  uint32_t   echo741 (  ) {
    return (  from_dash_integral174 ( 8 ) );
}

static  uint32_t   icanon742 (  ) {
    return (  from_dash_integral174 ( 2 ) );
}

static  uint32_t   isig743 (  ) {
    return (  from_dash_integral174 ( 1 ) );
}

static  uint32_t   iexten744 (  ) {
    return (  from_dash_integral174 ( 32768 ) );
}

struct Array_746 {
    uint32_t _arr [5];
};

struct ArrayIter_748 {
    struct Array_746  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_748   into_dash_iter749 (    struct Array_746  self2327 ) {
    return ( (struct ArrayIter_748) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr753 (    struct Array_746 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr752 (    struct Array_746 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp297 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2258 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic387 ) ( ( ( StrConcat_388_StrConcat ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2259 = ( ( (  cast_dash_ptr753 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr735 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  uint32_t   get751 (    struct Array_746 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr752 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_730   next750 (    struct ArrayIter_748 *  self2334 ) {
    if ( (  cmp297 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_730) { .tag = Maybe_730_None_t } );
    }
    uint32_t  e2336 = ( (  get751 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add318 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_730_Just ) ( (  e2336 ) ) );
}

static  uint32_t   reduce747 (    struct Array_746  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_748  it1100 = ( (  into_dash_iter749 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_730  dref1101 = ( (  next750 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_730_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_730_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_730_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp754 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp754);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp755;
    return (  temp755 );
}

static  uint32_t   u32_dash_ors745 (    struct Array_746  vals2858 ) {
    return ( (  reduce747 ) ( (  vals2858 ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  u32_dash_or739 ) ) );
}

static  struct Array_746   from_dash_listlike756 (    struct Array_746  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint757 (  ) {
    return (  from_dash_integral174 ( 2 ) );
}

static  uint32_t   icrnl758 (  ) {
    return (  from_dash_integral174 ( 256 ) );
}

static  uint32_t   inpck759 (  ) {
    return (  from_dash_integral174 ( 16 ) );
}

static  uint32_t   istrip760 (  ) {
    return (  from_dash_integral174 ( 32 ) );
}

static  uint32_t   ixon761 (  ) {
    return (  from_dash_integral174 ( 1024 ) );
}

struct Array_763 {
    uint32_t _arr [1];
};

struct ArrayIter_765 {
    struct Array_763  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_765   into_dash_iter766 (    struct Array_763  self2327 ) {
    return ( (struct ArrayIter_765) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr770 (    struct Array_763 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr769 (    struct Array_763 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp297 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2258 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic387 ) ( ( ( StrConcat_388_StrConcat ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2259 = ( ( (  cast_dash_ptr770 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr735 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  uint32_t   get768 (    struct Array_763 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr769 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_730   next767 (    struct ArrayIter_765 *  self2334 ) {
    if ( (  cmp297 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_730) { .tag = Maybe_730_None_t } );
    }
    uint32_t  e2336 = ( (  get768 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add318 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_730_Just ) ( (  e2336 ) ) );
}

static  uint32_t   reduce764 (    struct Array_763  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct ArrayIter_765  it1100 = ( (  into_dash_iter766 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_730  dref1101 = ( (  next767 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_730_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_730_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_730_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp771 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp771);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp772;
    return (  temp772 );
}

static  uint32_t   u32_dash_ors762 (    struct Array_763  vals2858 ) {
    return ( (  reduce764 ) ( (  vals2858 ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  u32_dash_or739 ) ) );
}

static  struct Array_763   from_dash_listlike773 (    struct Array_763  self330 ) {
    return (  self330 );
}

static  uint32_t   opost774 (  ) {
    return (  from_dash_integral174 ( 1 ) );
}

static  uint32_t   cs8775 (  ) {
    return (  from_dash_integral174 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr778 (    struct Array_103 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr777 (    struct Array_103 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp297 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2258 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic387 ) ( ( ( StrConcat_388_StrConcat ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2259 = ( ( (  cast_dash_ptr778 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr307 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  enum Unit_8   set776 (    struct Array_103 *  arr2268 ,    size_t  i2271 ,    uint8_t  e2273 ) {
    uint8_t *  p2274 = ( (  get_dash_ptr777 ) ( (  arr2268 ) ,  (  i2271 ) ) );
    (*  p2274 ) = (  e2273 );
    return ( Unit_8_Unit );
}

static  size_t   vmin779 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime780 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush781 (  ) {
    return (  from_dash_integral67 ( 2 ) );
}

static  struct Termios_102   enable_dash_raw_dash_mode717 (  ) {
    struct Termios_102  temp718 = ( (  undefined719 ) ( ) );
    struct Termios_102 *  orig_dash_termios3348 = ( &temp718 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno721 ) ( ) ) ,  ( (  cast_dash_ptr722 ) ( (  orig_dash_termios3348 ) ) ) ) );
    struct Termios_102  raw3349 = ( * (  orig_dash_termios3348 ) );
    raw3349 .f_c_dash_lflag = ( (  u32_dash_and723 ) ( ( (  raw3349 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg724 ) ( ( (  u32_dash_ors725 ) ( ( (  from_dash_listlike740 ) ( ( (struct Array_726) { ._arr = { ( (  echo741 ) ( ) ) , ( (  icanon742 ) ( ) ) , ( (  isig743 ) ( ) ) , ( ( (  iexten744 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3349 .f_c_dash_iflag = ( (  u32_dash_and723 ) ( ( (  raw3349 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg724 ) ( ( (  u32_dash_ors745 ) ( ( (  from_dash_listlike756 ) ( ( (struct Array_746) { ._arr = { ( (  brkint757 ) ( ) ) , ( (  icrnl758 ) ( ) ) , ( (  inpck759 ) ( ) ) , ( (  istrip760 ) ( ) ) , ( ( (  ixon761 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3349 .f_c_dash_oflag = ( (  u32_dash_and723 ) ( ( (  raw3349 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg724 ) ( ( (  u32_dash_ors762 ) ( ( (  from_dash_listlike773 ) ( ( (struct Array_763) { ._arr = { ( ( (  opost774 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3349 .f_c_dash_cflag = ( (  u32_dash_or739 ) ( ( (  raw3349 ) .f_c_dash_cflag ) ,  ( (  cs8775 ) ( ) ) ) );
    ( (  set776 ) ( ( & ( (  raw3349 ) .f_c_dash_cc ) ) ,  ( (  vmin779 ) ( ) ) ,  (  from_dash_integral315 ( 0 ) ) ) );
    ( (  set776 ) ( ( & ( (  raw3349 ) .f_c_dash_cc ) ) ,  ( (  vtime780 ) ( ) ) ,  (  from_dash_integral315 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno721 ) ( ) ) ,  ( (  tcsa_dash_flush781 ) ( ) ) ,  ( (  cast_dash_ptr722 ) ( ( & (  raw3349 ) ) ) ) ) );
    return ( * (  orig_dash_termios3348 ) );
}

static  struct StrViewIter_62   into_dash_iter786 (    struct StrViewIter_62  self1372 ) {
    return (  self1372 );
}

static  enum Unit_8   for_dash_each784 (    struct StrViewIter_62  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrViewIter_62  temp785 = ( (  into_dash_iter786 ) ( (  iterable1075 ) ) );
    struct StrViewIter_62 *  it1078 = ( &temp785 );
    while ( ( true ) ) {
        struct Maybe_304  dref1079 = ( (  next688 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_304_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_304_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_304_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print783 (    struct StrView_27  s2593 ) {
    ( (  for_dash_each784 ) ( ( (  chars700 ) ( (  s2593 ) ) ) ,  (  printf_dash_char343 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   hide_dash_cursor782 (  ) {
    ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors787 (  ) {
    ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen788 (  ) {
    ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse789 (  ) {
    ( (  print_dash_str335 ) ( ( (  from_dash_string207 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout790 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr497 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq794 (    enum Unit_8 *  l587 ,    enum Unit_8 *  r589 ) {
    return ( (  l587 ) == (  r589 ) );
}

static  enum Unit_8 *   cast795 (    const char*  x356 ) {
    return ( (enum Unit_8 * ) (  x356 ) );
}

static  void *   cast_dash_ptr799 (    enum Unit_8 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of800 (    enum Unit_8 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_8 *   zeroed797 (  ) {
    enum Unit_8 *  temp798;
    enum Unit_8 *  x571 = (  temp798 );
    ( ( memset ) ( ( (  cast_dash_ptr799 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of800 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  enum Unit_8 *   null_dash_ptr796 (  ) {
    return ( (  zeroed797 ) ( ) );
}

static  struct Maybe_327   from_dash_nullable_dash_c_dash_str793 (    const char*  s592 ) {
    if ( ( (  ptr_dash_eq794 ) ( ( (  cast795 ) ( (  s592 ) ) ) ,  ( ( (  null_dash_ptr796 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_327) { .tag = Maybe_327_None_t } );
    } else {
        return ( ( Maybe_327_Just ) ( (  s592 ) ) );
    }
}

static  struct Maybe_327   get792 (    const char*  s2626 ) {
    return ( (  from_dash_nullable_dash_c_dash_str793 ) ( ( ( getenv ) ( (  s2626 ) ) ) ) );
}

static  bool   eq801 (    const char*  l1698 ,    const char*  r1700 ) {
    return (  eq525 ( ( ( strcmp ) ( (  l1698 ) ,  (  r1700 ) ) ) , (  from_dash_integral67 ( 0 ) ) ) );
}

static  enum ColorPalette_101   query_dash_palette791 (  ) {
    struct Maybe_327  colorterm2627 = ( (  get792 ) ( ( (  from_dash_string68 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_327  dref2628 = (  colorterm2627 );
    if ( dref2628.tag == Maybe_327_Just_t ) {
        if ( ( (  eq801 ( ( dref2628 .stuff .Maybe_327_Just_s .field0 ) , ( (  from_dash_string68 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq801 ( ( dref2628 .stuff .Maybe_327_Just_s .field0 ) , ( (  from_dash_string68 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_101_PaletteRGB );
        }
    }
    else {
        if ( dref2628.tag == Maybe_327_None_t ) {
        }
    }
    struct Maybe_327  dref2630 = ( (  get792 ) ( ( (  from_dash_string68 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2630.tag == Maybe_327_Just_t ) {
        if ( (  eq801 ( ( dref2630 .stuff .Maybe_327_Just_s .field0 ) , ( (  from_dash_string68 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_101_Palette8 );
        }
    }
    else {
        if ( dref2630.tag == Maybe_327_None_t ) {
        }
    }
    return ( ColorPalette_101_Palette16 );
}

struct Tuple2_802 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_802 Tuple2_802_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_802 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_804 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr808 (    struct Winsize_804 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of809 (    struct Winsize_804  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_804   zeroed806 (  ) {
    struct Winsize_804  temp807;
    struct Winsize_804  x571 = (  temp807 );
    ( ( memset ) ( ( (  cast_dash_ptr808 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of809 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  int32_t   stdout_dash_fileno810 (  ) {
    return (  from_dash_integral67 ( 1 ) );
}

static  uint64_t   from_dash_integral812 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz811 (  ) {
    return (  from_dash_integral812 ( 21523 ) );
}

static  int32_t   op_dash_neg813 (    int32_t  x227 ) {
    return ( (  from_dash_integral67 ( 0 ) ) - (  x227 ) );
}

static  bool   eq814 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral815 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr821 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of822 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed819 (  ) {
    uint32_t  temp820;
    uint32_t  x571 = (  temp820 );
    ( ( memset ) ( ( (  cast_dash_ptr821 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of822 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint16_t *   cast823 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed817 (    uint16_t  x574 ) {
    uint32_t  temp818 = ( (  zeroed819 ) ( ) );
    uint32_t *  y575 = ( &temp818 );
    uint16_t *  yp576 = ( (  cast823 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  uint32_t   u16_dash_u32816 (    uint16_t  x646 ) {
    return ( (  cast_dash_on_dash_zeroed817 ) ( (  x646 ) ) );
}

static  struct Tuple2_802   get_dash_dimensions803 (  ) {
    struct Winsize_804  temp805 = ( ( (  zeroed806 ) ( ) ) );
    struct Winsize_804 *  ws2615 = ( &temp805 );
    if ( ( (  eq525 ( ( ( ioctl ) ( ( (  stdout_dash_fileno810 ) ( ) ) ,  ( (  tiocgwinsz811 ) ( ) ) ,  (  ws2615 ) ) ) , (  op_dash_neg813 ( (  from_dash_integral67 ( 1 ) ) ) ) ) ) || (  eq814 ( ( ( * (  ws2615 ) ) .f_ws_dash_col ) , (  from_dash_integral815 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_802_Tuple2 ) ( (  from_dash_integral174 ( 80 ) ) ,  (  from_dash_integral174 ( 24 ) ) ) );
    }
    return ( ( Tuple2_802_Tuple2 ) ( ( (  u16_dash_u32816 ) ( ( ( * (  ws2615 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32816 ) ( ( ( * (  ws2615 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined826 (  ) {
    struct timespec  temp827;
    return (  temp827 );
}

static  int32_t   clock_dash_monotonic828 (  ) {
    return (  from_dash_integral67 ( 1 ) );
}

static  struct timespec   now824 (  ) {
    struct timespec  temp825 = ( (  undefined826 ) ( ) );
    struct timespec *  t3310 = ( &temp825 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic828 ) ( ) ) ,  (  t3310 ) ) );
    return ( * (  t3310 ) );
}

struct env829 {
    bool *  should_dash_resize3362;
};

struct envunion830 {
    enum Unit_8  (*fun) (  struct env829*  ,    int32_t  );
    struct env829 env;
};

struct envunion830  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig831 ) {
    struct envunion830  temp832 = _intr_sigarr [  __intr__sig831 ];
    temp832.fun ( &temp832.env ,  __intr__sig831 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig833 ,   struct envunion830  __intr__fun834 ) {
    _intr_sigarr [  __intr__sig833 ] =  __intr__fun834;
    signal(  __intr__sig833 , _intr_sighandle );
    return Unit_8_Unit;
}

static  enum Unit_8   lam835 (   struct env829* env ,    int32_t  dref3369 ) {
    (* env->should_dash_resize3362 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst836 (    struct Tuple2_802  dref1254 ) {
    return ( dref1254 .field0 );
}

static  uint32_t   snd837 (    struct Tuple2_802  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Tui_100   mk716 (   struct env96* env ) {
    struct Termios_102  og_dash_termios3364 = ( (  enable_dash_raw_dash_mode717 ) ( ) );
    ( (  hide_dash_cursor782 ) ( ) );
    ( (  reset_dash_colors787 ) ( ) );
    ( (  clear_dash_screen788 ) ( ) );
    ( (  enable_dash_mouse789 ) ( ) );
    ( (  flush_dash_stdout790 ) ( ) );
    enum ColorPalette_101  palette3365 = ( (  query_dash_palette791 ) ( ) );
    struct Tuple2_802  dims3366 = ( (  get_dash_dimensions803 ) ( ) );
    uint32_t  fps3367 = (  from_dash_integral174 ( 60 ) );
    struct timespec  last_dash_sync3368 = ( (  now824 ) ( ) );
    struct env829 envinst829 = {
        .should_dash_resize3362 = env->should_dash_resize3362 ,
    };
    ( _intr_register_signal ( (  from_dash_integral67 ( 28 ) ) , ( (struct envunion830){ .fun = (  enum Unit_8  (*) (  struct env829*  ,    int32_t  ) )lam835 , .env =  envinst829 } ) ) );
    return ( (struct Tui_100) { .f_width = ( (  fst836 ) ( (  dims3366 ) ) ) , .f_height = ( (  snd837 ) ( (  dims3366 ) ) ) , .f_target_dash_fps = (  fps3367 ) , .f_actual_dash_fps = (  from_dash_integral174 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3368 ) , .f_fps_dash_ts = (  last_dash_sync3368 ) , .f_fps_dash_count = (  from_dash_integral174 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3364 ) , .f_palette = (  palette3365 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_842 {
    size_t  f_size;
};

static  struct TypeSize_842   get_dash_typesize841 (  ) {
    struct Cell_285  temp843;
    return ( (struct TypeSize_842) { .f_size = ( sizeof( ( (  temp843 ) ) ) ) } );
}

static  struct Cell_285 *   cast_dash_ptr844 (    void *  p359 ) {
    return ( (struct Cell_285 * ) (  p359 ) );
}

static  struct Slice_284   allocate840 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize841 ) ( ) ) ) .f_size );
    struct Cell_285 *  ptr1959 = ( (  cast_dash_ptr844 ) ( ( ( malloc ) ( (  op_dash_mul412 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_284) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

static  void *   cast_dash_ptr850 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of851 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed848 (  ) {
    size_t  temp849;
    size_t  x571 = (  temp849 );
    ( ( memset ) ( ( (  cast_dash_ptr850 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of851 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint32_t *   cast852 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed846 (    uint32_t  x574 ) {
    size_t  temp847 = ( (  zeroed848 ) ( ) );
    size_t *  y575 = ( &temp847 );
    uint32_t *  yp576 = ( (  cast852 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  size_t   u32_dash_size845 (    uint32_t  x652 ) {
    return ( (  cast_dash_on_dash_zeroed846 ) ( (  x652 ) ) );
}

struct env855 {
    ;
    ;
    ;
    struct Slice_284  s1907;
    struct Cell_285 (*  fun1909 )(    struct Cell_285  );
};

struct envunion856 {
    enum Unit_8  (*fun) (  struct env855*  ,    int32_t  );
    struct env855 env;
};

static  enum Unit_8   for_dash_each854 (    struct Range_159  iterable1075 ,   struct envunion856  fun1077 ) {
    struct RangeIter_162  temp857 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp857 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion856  temp858 = (  fun1077 );
                ( temp858.fun ( &temp858.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_285 *   offset_dash_ptr862 (    struct Cell_285 *  x338 ,    int64_t  count340 ) {
    struct Cell_285  temp863;
    return ( (struct Cell_285 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp863 ) ) ) ) ) ) ) ) );
}

static  struct Cell_285 *   get_dash_ptr861 (    struct Slice_284  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp297 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_285 *  elem_dash_ptr1762 = ( (  offset_dash_ptr862 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set860 (    struct Slice_284  slice1776 ,    size_t  i1778 ,    struct Cell_285  x1780 ) {
    struct Cell_285 *  ep1781 = ( (  get_dash_ptr861 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

struct Maybe_867 {
    enum {
        Maybe_867_None_t,
        Maybe_867_Just_t,
    } tag;
    union {
        struct {
            struct Cell_285  field0;
        } Maybe_867_Just_s;
    } stuff;
};

static struct Maybe_867 Maybe_867_Just (  struct Cell_285  field0 ) {
    return ( struct Maybe_867 ) { .tag = Maybe_867_Just_t, .stuff = { .Maybe_867_Just_s = { .field0 = field0 } } };
};

static  struct Cell_285   undefined868 (  ) {
    struct Cell_285  temp869;
    return (  temp869 );
}

static  struct Cell_285   or_dash_fail866 (    struct Maybe_867  x1727 ,    struct StrConcat_328  errmsg1729 ) {
    struct Maybe_867  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_867_None_t ) {
        ( (  panic330 ) ( (  errmsg1729 ) ) );
        return ( (  undefined868 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_867_Just_t ) {
            return ( dref1730 .stuff .Maybe_867_Just_s .field0 );
        }
    }
}

static  struct Maybe_867   try_dash_get870 (    struct Slice_284  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp297 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_867) { .tag = Maybe_867_None_t } );
    }
    struct Cell_285 *  elem_dash_ptr1768 = ( (  offset_dash_ptr862 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_867_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  struct Cell_285   get865 (    struct Slice_284  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail866 ) ( ( (  try_dash_get870 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_285   elem_dash_get864 (    struct Slice_284  self1869 ,    size_t  idx1871 ) {
    return ( (  get865 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  enum Unit_8   lam859 (   struct env855* env ,    int32_t  i1911 ) {
    return ( (  set860 ) ( ( env->s1907 ) ,  ( (  i32_dash_size419 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get864 ( ( env->s1907 ) , ( (  i32_dash_size419 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map853 (    struct Slice_284  s1907 ,    struct Cell_285 (*  fun1909 )(    struct Cell_285  ) ) {
    struct env855 envinst855 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each854 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_i32336 ) ( (  op_dash_sub296 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion856){ .fun = (  enum Unit_8  (*) (  struct env855*  ,    int32_t  ) )lam859 , .env =  envinst855 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_285   default_dash_cell872 (  ) {
    return ( (struct Cell_285) { .f_c = ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_bg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral67 ( 1 ) ) } );
}

static  struct Cell_285   lam871 (    struct Cell_285  dref3472 ) {
    return ( (  default_dash_cell872 ) ( ) );
}

struct env875 {
    ;
    ;
    ;
    struct Slice_284  s1907;
    struct Cell_285 (*  fun1909 )(    struct Cell_285  );
};

struct envunion876 {
    enum Unit_8  (*fun) (  struct env875*  ,    int32_t  );
    struct env875 env;
};

static  enum Unit_8   for_dash_each874 (    struct Range_159  iterable1075 ,   struct envunion876  fun1077 ) {
    struct RangeIter_162  temp877 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp877 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion876  temp878 = (  fun1077 );
                ( temp878.fun ( &temp878.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam879 (   struct env875* env ,    int32_t  i1911 ) {
    return ( (  set860 ) ( ( env->s1907 ) ,  ( (  i32_dash_size419 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get864 ( ( env->s1907 ) , ( (  i32_dash_size419 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map873 (    struct Slice_284  s1907 ,    struct Cell_285 (*  fun1909 )(    struct Cell_285  ) ) {
    struct env875 envinst875 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each874 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_i32336 ) ( (  op_dash_sub296 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion876){ .fun = (  enum Unit_8  (*) (  struct env875*  ,    int32_t  ) )lam879 , .env =  envinst875 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_285   lam880 (    struct Cell_285  dref3474 ) {
    return ( (  default_dash_cell872 ) ( ) );
}

static  struct Screen_283   mk_dash_screen839 (    struct Tui_100 *  tui3468 ,    enum CAllocator_10  al3470 ) {
    struct Slice_284  cur3471 = ( (  allocate840 ) ( (  al3470 ) ,  ( (  u32_dash_size845 ) ( (  op_dash_mul176 ( ( ( * (  tui3468 ) ) .f_width ) , ( ( * (  tui3468 ) ) .f_height ) ) ) ) ) ) );
    ( (  map853 ) ( (  cur3471 ) ,  (  lam871 ) ) );
    struct Slice_284  prev3473 = ( (  allocate840 ) ( (  al3470 ) ,  ( (  u32_dash_size845 ) ( (  op_dash_mul176 ( ( ( * (  tui3468 ) ) .f_width ) , ( ( * (  tui3468 ) ) .f_height ) ) ) ) ) ) );
    ( (  map873 ) ( (  prev3473 ) ,  (  lam880 ) ) );
    return ( (struct Screen_283) { .f_current = (  cur3471 ) , .f_previous = (  prev3473 ) , .f_al = (  al3470 ) , .f_tui = (  tui3468 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) } );
}

enum MouseButton_888 {
    MouseButton_888_MouseLeft,
    MouseButton_888_MouseMiddle,
    MouseButton_888_MouseRight,
    MouseButton_888_ScrollUp,
    MouseButton_888_ScrollDown,
};

struct MouseEvent_887 {
    enum MouseButton_888  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_886 {
    enum {
        InputEvent_886_Key_t,
        InputEvent_886_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_274  field0;
        } InputEvent_886_Key_s;
        struct {
            struct MouseEvent_887  field0;
        } InputEvent_886_Mouse_s;
    } stuff;
};

static struct InputEvent_886 InputEvent_886_Key (  struct Key_274  field0 ) {
    return ( struct InputEvent_886 ) { .tag = InputEvent_886_Key_t, .stuff = { .InputEvent_886_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_886 InputEvent_886_Mouse (  struct MouseEvent_887  field0 ) {
    return ( struct InputEvent_886 ) { .tag = InputEvent_886_Mouse_t, .stuff = { .InputEvent_886_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_885 {
    enum {
        Maybe_885_None_t,
        Maybe_885_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_886  field0;
        } Maybe_885_Just_s;
    } stuff;
};

static struct Maybe_885 Maybe_885_Just (  struct InputEvent_886  field0 ) {
    return ( struct Maybe_885 ) { .tag = Maybe_885_Just_t, .stuff = { .Maybe_885_Just_s = { .field0 = field0 } } };
};

struct envunion884 {
    struct Maybe_885  (*fun) (  struct env98*  ,    struct Tui_100 *  );
    struct env98 env;
};

struct env883 {
    struct env98 envinst98;
    struct Tui_100 *  tui4548;
};

struct envunion889 {
    struct Maybe_885  (*fun) (  struct env883*  );
    struct env883 env;
};

struct FunIter_882 {
    struct envunion889  f_fun;
    bool  f_finished;
};

static  struct FunIter_882   into_dash_iter890 (    struct FunIter_882  self1029 ) {
    return (  self1029 );
}

static  struct FunIter_882   from_dash_function891 (   struct envunion889  fun1037 ) {
    return ( (struct FunIter_882) { .f_fun = (  fun1037 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions896 (   struct env97* env ,    struct Tui_100 *  tui3434 ) {
    if ( ( ! ( * ( env->should_dash_resize3362 ) ) ) ) {
        return ( false );
    }
    (*  tui3434 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3362 ) = ( false );
    struct Tuple2_802  dim3435 = ( (  get_dash_dimensions803 ) ( ) );
    uint32_t  w3436 = ( (  fst836 ) ( (  dim3435 ) ) );
    uint32_t  h3437 = ( (  snd837 ) ( (  dim3435 ) ) );
    (*  tui3434 ) .f_width = (  w3436 );
    (*  tui3434 ) .f_height = (  h3437 );
    return ( true );
}

static  char   undefined899 (  ) {
    char  temp900;
    return (  temp900 );
}

struct Maybe_901 {
    enum {
        Maybe_901_None_t,
        Maybe_901_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_901_Just_s;
    } stuff;
};

static struct Maybe_901 Maybe_901_Just (  char  field0 ) {
    return ( struct Maybe_901 ) { .tag = Maybe_901_Just_t, .stuff = { .Maybe_901_Just_s = { .field0 = field0 } } };
};

struct Pollfd_903 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr904 (    struct Pollfd_903 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr907 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of908 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed905 (  ) {
    char  temp906;
    char  x571 = (  temp906 );
    ( ( memset ) ( ( (  cast_dash_ptr907 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of908 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Maybe_901   read_dash_byte902 (    int32_t  timeout_dash_ms3356 ) {
    struct Pollfd_903  pfd3357 = ( (struct Pollfd_903) { .f_fd = (  from_dash_integral67 ( 0 ) ) , .f_events = (  from_dash_integral815 ( 1 ) ) , .f_revents = (  from_dash_integral815 ( 0 ) ) } );
    if ( (  cmp166 ( ( ( poll ) ( ( (  cast_dash_ptr904 ) ( ( & (  pfd3357 ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ,  (  timeout_dash_ms3356 ) ) ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
    }
    char  c3358 = ( ( (  zeroed905 ) ( ) ) );
    if ( (  cmp166 ( ( ( read ) ( ( (  stdin_dash_fileno721 ) ( ) ) ,  ( (  cast_dash_ptr907 ) ( ( & (  c3358 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
    }
    return ( ( Maybe_901_Just ) ( (  c3358 ) ) );
}

static  char   u8_dash_ascii909 (    uint8_t  b780 ) {
    return ( ( (char ) (  b780 ) ) );
}

static  uint8_t *   cast913 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed911 (    uint8_t  x574 ) {
    uint32_t  temp912 = ( (  zeroed819 ) ( ) );
    uint32_t *  y575 = ( &temp912 );
    uint8_t *  yp576 = ( (  cast913 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  uint32_t   u8_dash_u32910 (    uint8_t  x673 ) {
    return ( (  cast_dash_on_dash_zeroed911 ) ( (  x673 ) ) );
}

struct Map_916 {
    struct StrViewIter_62  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_916 Map_916_Map (  struct StrViewIter_62  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_916 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_916   into_dash_iter917 (    struct Map_916  self797 ) {
    return (  self797 );
}

static  struct Maybe_730   next918 (    struct Map_916 *  dref799 ) {
    struct Maybe_304  dref802 = ( (  next688 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_730) { .tag = Maybe_730_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_304_Just_t ) {
            return ( ( Maybe_730_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_304_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce915 (    struct Map_916  iterable1094 ,    uint32_t  base1096 ,    uint32_t (*  fun1098 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1099 = (  base1096 );
    struct Map_916  it1100 = ( (  into_dash_iter917 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_730  dref1101 = ( (  next918 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_730_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_730_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_730_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp919 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp919);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp920;
    return (  temp920 );
}

static  struct Map_916   map921 (    struct StrView_27  iterable806 ,    uint32_t (*  fun808 )(    struct Char_65  ) ) {
    struct StrViewIter_62  it809 = ( (  into_dash_iter701 ) ( (  iterable806 ) ) );
    return ( ( Map_916_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  void *   cast_dash_ptr928 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of929 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed926 (  ) {
    int64_t  temp927;
    int64_t  x571 = (  temp927 );
    ( ( memset ) ( ( (  cast_dash_ptr928 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of929 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   cast930 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed924 (    uint8_t  x574 ) {
    int64_t  temp925 = ( (  zeroed926 ) ( ) );
    int64_t *  y575 = ( &temp925 );
    uint8_t *  yp576 = ( (  cast930 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  int64_t   u8_dash_i64923 (    uint8_t  x667 ) {
    return ( (  cast_dash_on_dash_zeroed924 ) ( (  x667 ) ) );
}

struct StrConcat_933 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_933 StrConcat_933_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_933 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_932 {
    struct StrConcat_933  field0;
    struct StrView_27  field1;
};

static struct StrConcat_932 StrConcat_932_StrConcat (  struct StrConcat_933  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_932 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_937 {
    struct StrView_27  field0;
    struct StrConcat_932  field1;
};

static struct StrConcat_937 StrConcat_937_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_932  field1 ) {
    return ( struct StrConcat_937 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_936 {
    struct StrConcat_937  field0;
    struct Char_65  field1;
};

static struct StrConcat_936 StrConcat_936_StrConcat (  struct StrConcat_937  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_936 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str940 (    struct StrConcat_933  self1510 ) {
    struct StrConcat_933  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str342 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str939 (    struct StrConcat_932  self1510 ) {
    struct StrConcat_932  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str940 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str335 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str938 (    struct StrConcat_937  self1510 ) {
    struct StrConcat_937  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str939 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str935 (    struct StrConcat_936  self1510 ) {
    struct StrConcat_936  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str938 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic934 (    struct StrConcat_932  errmsg1714 ) {
    ( (  print_dash_str935 ) ( ( ( StrConcat_936_StrConcat ) ( ( ( StrConcat_937_StrConcat ) ( ( (  from_dash_string207 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail931 (    struct Maybe_485  x1727 ,    struct StrConcat_932  errmsg1729 ) {
    struct Maybe_485  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_485_None_t ) {
        ( (  panic934 ) ( (  errmsg1729 ) ) );
        return ( (  undefined563 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_485_Just_t ) {
            return ( dref1730 .stuff .Maybe_485_Just_s .field0 );
        }
    }
}

static  enum Ordering_167   cmp942 (    struct Char_65  l745 ,    struct Char_65  r747 ) {
    if ( ( ( !  eq406 ( ( (  l745 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq406 ( ( (  r747 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp943 = ( (  from_dash_string68 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp943);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (  cmp314 ) ( ( (  char_dash_u8493 ) ( (  l745 ) ) ) ,  ( (  char_dash_u8493 ) ( (  r747 ) ) ) ) );
}

static  uint8_t   op_dash_sub944 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add945 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_485   hex_dash_digit941 (    struct Char_65  c2575 ) {
    if ( ( (  cmp942 ( (  c2575 ) , ( (  from_dash_charlike353 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp942 ( (  c2575 ) , ( (  from_dash_charlike353 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_485_Just ) ( (  op_dash_sub944 ( ( (  char_dash_u8493 ) ( (  c2575 ) ) ) , ( (  char_dash_u8493 ) ( ( (  from_dash_charlike353 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp942 ( (  c2575 ) , ( (  from_dash_charlike353 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp942 ( (  c2575 ) , ( (  from_dash_charlike353 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_485_Just ) ( (  op_dash_add945 ( (  op_dash_sub944 ( ( (  char_dash_u8493 ) ( (  c2575 ) ) ) , ( (  char_dash_u8493 ) ( ( (  from_dash_charlike353 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral315 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp942 ( (  c2575 ) , ( (  from_dash_charlike353 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp942 ( (  c2575 ) , ( (  from_dash_charlike353 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_485_Just ) ( (  op_dash_add945 ( (  op_dash_sub944 ( ( (  char_dash_u8493 ) ( (  c2575 ) ) ) , ( (  char_dash_u8493 ) ( ( (  from_dash_charlike353 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral315 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_485) { .tag = Maybe_485_None_t } );
}

static  uint32_t   lam922 (    struct Char_65  c2580 ) {
    return ( (  from_dash_integral174 ) ( ( (  u8_dash_i64923 ) ( ( (  or_dash_fail931 ) ( ( (  hex_dash_digit941 ) ( (  c2580 ) ) ) ,  ( ( StrConcat_932_StrConcat ) ( ( ( StrConcat_933_StrConcat ) ( ( (  from_dash_charlike353 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2580 ) ) ) ,  ( (  from_dash_string207 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam946 (    uint32_t  elem2582 ,    uint32_t  b2584 ) {
    return (  op_dash_add180 ( (  op_dash_mul176 ( (  b2584 ) , (  from_dash_integral174 ( 16 ) ) ) ) , (  elem2582 ) ) );
}

static  uint32_t   from_dash_hex914 (    struct StrView_27  arr2578 ) {
    return ( (  reduce915 ) ( ( (  map921 ) ( (  arr2578 ) ,  (  lam922 ) ) ) ,  (  from_dash_integral174 ( 0 ) ) ,  (  lam946 ) ) );
}

static  bool   eq948 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

struct Array_949 {
    char _arr [32];
};

static  void *   cast_dash_ptr953 (    struct Array_949 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of954 (    struct Array_949  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_949   zeroed951 (  ) {
    struct Array_949  temp952;
    struct Array_949  x571 = (  temp952 );
    ( ( memset ) ( ( (  cast_dash_ptr953 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of954 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  char *   cast_dash_ptr958 (    struct Array_949 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr959 (    char *  x338 ,    int64_t  count340 ) {
    char  temp960;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp960 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr957 (    struct Array_949 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp297 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2258 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic387 ) ( ( ( StrConcat_388_StrConcat ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2259 = ( ( (  cast_dash_ptr958 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr959 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  enum Unit_8   set956 (    struct Array_949 *  arr2268 ,    size_t  i2271 ,    char  e2273 ) {
    char *  p2274 = ( (  get_dash_ptr957 ) ( (  arr2268 ) ,  (  i2271 ) ) );
    (*  p2274 ) = (  e2273 );
    return ( Unit_8_Unit );
}

struct Slice_962 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail965 (    struct Maybe_901  x1727 ,    struct StrConcat_328  errmsg1729 ) {
    struct Maybe_901  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_901_None_t ) {
        ( (  panic330 ) ( (  errmsg1729 ) ) );
        return ( (  undefined899 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_901_Just_t ) {
            return ( dref1730 .stuff .Maybe_901_Just_s .field0 );
        }
    }
}

static  struct Maybe_901   try_dash_get966 (    struct Slice_962  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp297 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
    }
    char *  elem_dash_ptr1768 = ( (  offset_dash_ptr959 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_901_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  char   get964 (    struct Slice_962  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail965 ) ( ( (  try_dash_get966 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get963 (    struct Slice_962  self1869 ,    size_t  idx1871 ) {
    return ( (  get964 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

struct Scanner_967 {
    struct StrViewIter_62  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_967   mk_dash_from_dash_str969 (    struct StrView_27  s3203 ) {
    return ( (struct Scanner_967) { .f_s = ( (  chars700 ) ( (  s3203 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_973 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr307 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_27   substr970 (    struct StrView_27  s2177 ,    size_t  from2179 ,    size_t  to2181 ) {
    size_t  from_dash_bs2182 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_162  temp971 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  size_dash_i32336 ) ( (  from2179 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond972 =  next165 (&temp971);
        if (  __cond972 .tag == 0 ) {
            break;
        }
        int32_t  dref2183 =  __cond972 .stuff .Maybe_164_Just_s .field0;
        if ( (  cmp297 ( (  from_dash_bs2182 ) , ( ( (  s2177 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2182 = (  op_dash_add318 ( (  from_dash_bs2182 ) , ( (  next_dash_char313 ) ( ( (  offset_dash_ptr_prime_973 ) ( ( ( (  s2177 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2182 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2184 = (  from_dash_bs2182 );
    struct RangeIter_162  temp974 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  op_dash_sub173 ( ( (  size_dash_i32336 ) ( (  to2181 ) ) ) , ( (  size_dash_i32336 ) ( (  from2179 ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond975 =  next165 (&temp974);
        if (  __cond975 .tag == 0 ) {
            break;
        }
        int32_t  dref2185 =  __cond975 .stuff .Maybe_164_Just_s .field0;
        if ( (  cmp297 ( (  to_dash_bs2184 ) , ( ( (  s2177 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2184 = (  op_dash_add318 ( (  to_dash_bs2184 ) , ( (  next_dash_char313 ) ( ( (  offset_dash_ptr_prime_973 ) ( ( ( (  s2177 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2184 ) ) ) ) ) ) );
    }
    return ( (struct StrView_27) { .f_contents = ( (  subslice505 ) ( ( (  s2177 ) .f_contents ) ,  (  from_dash_bs2182 ) ,  (  to_dash_bs2184 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr978 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice977 (    struct Slice_962  s1934 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr978 ) ( ( (  s1934 ) .f_ptr ) ) ) , .f_count = ( (  s1934 ) .f_count ) } );
}

static  struct StrView_27   from_dash_ascii_dash_slice976 (    struct Slice_962  sl2151 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice977 ) ( (  sl2151 ) ) ) } );
}

struct Maybe_979 {
    enum {
        Maybe_979_None_t,
        Maybe_979_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_979_Just_s;
    } stuff;
};

static struct Maybe_979 Maybe_979_Just (  int64_t  field0 ) {
    return ( struct Maybe_979 ) { .tag = Maybe_979_Just_t, .stuff = { .Maybe_979_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_981 {
    struct Scanner_967  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_967   into_dash_iter984 (    struct Scanner_967  self3194 ) {
    return (  self3194 );
}

static  struct Scanner_967   into_dash_iter983 (    struct Scanner_967 *  self786 ) {
    return ( (  into_dash_iter984 ) ( ( * (  self786 ) ) ) );
}

static  struct TakeWhile_981   take_dash_while982 (    struct Scanner_967 *  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_981) { .f_it = ( (  into_dash_iter983 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  bool   is_dash_digit985 (    struct Char_65  c2481 ) {
    return ( (  cmp314 ( ( (  char_dash_u8493 ) ( (  c2481 ) ) ) , ( (  char_dash_u8493 ) ( ( (  from_dash_charlike353 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp314 ( ( (  char_dash_u8493 ) ( (  c2481 ) ) ) , ( (  char_dash_u8493 ) ( ( (  from_dash_charlike353 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_304   next989 (    struct Scanner_967 *  self3189 ) {
    struct Maybe_304  dref3190 = ( (  next688 ) ( ( & ( ( * (  self3189 ) ) .f_s ) ) ) );
    if ( dref3190.tag == Maybe_304_Just_t ) {
        (*  self3189 ) .f_byte_dash_offset = (  op_dash_add318 ( ( ( * (  self3189 ) ) .f_byte_dash_offset ) , ( ( dref3190 .stuff .Maybe_304_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_304_Just ) ( ( dref3190 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref3190.tag == Maybe_304_None_t ) {
            return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
        }
    }
}

static  struct Maybe_304   next988 (    struct TakeWhile_981 *  self965 ) {
    struct Maybe_304  mx966 = ( (  next989 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_304  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_304_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_304_Just ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
            }
        }
    }
}

static  struct TakeWhile_981   into_dash_iter991 (    struct TakeWhile_981  self962 ) {
    return (  self962 );
}

static  struct Maybe_304   head987 (    struct TakeWhile_981  it1143 ) {
    struct TakeWhile_981  temp990 = ( (  into_dash_iter991 ) ( (  it1143 ) ) );
    return ( (  next988 ) ( ( &temp990 ) ) );
}

static  bool   null986 (    struct TakeWhile_981  it1152 ) {
    struct Maybe_304  dref1153 = ( (  head987 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_304_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env994 {
    ;
    struct Scanner_967 *  it1187;
};

struct envunion995 {
    struct Maybe_304  (*fun) (  struct env994*  ,    int32_t  );
    struct env994 env;
};

static  enum Unit_8   for_dash_each993 (    struct Range_159  iterable1075 ,   struct envunion995  fun1077 ) {
    struct RangeIter_162  temp996 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp996 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion995  temp997 = (  fun1077 );
                ( temp997.fun ( &temp997.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_304   lam998 (   struct env994* env ,    int32_t  dref1190 ) {
    return ( (  next989 ) ( ( env->it1187 ) ) );
}

static  enum Unit_8   drop_prime_992 (    struct Scanner_967 *  it1187 ,    size_t  n1189 ) {
    struct env994 envinst994 = {
        .it1187 =  it1187 ,
    };
    ( (  for_dash_each993 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  ( (  size_dash_i32336 ) ( (  n1189 ) ) ) ) ) ,  ( (struct envunion995){ .fun = (  struct Maybe_304  (*) (  struct env994*  ,    int32_t  ) )lam998 , .env =  envinst994 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce1000 (    struct TakeWhile_981  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct TakeWhile_981  it1100 = ( (  into_dash_iter991 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_304  dref1101 = ( (  next988 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_304_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_304_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_304_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1001 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1001);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1002;
    return (  temp1002 );
}

static  size_t   lam1003 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add318 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count999 (    struct TakeWhile_981  it1105 ) {
    return ( (  reduce1000 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1003 ) ) );
}

static  struct TakeWhile_981   chars1005 (    struct TakeWhile_981  self1658 ) {
    return (  self1658 );
}

static  struct Maybe_979   reduce1006 (    struct TakeWhile_981  iterable1094 ,    struct Maybe_979  base1096 ,    struct Maybe_979 (*  fun1098 )(    struct Char_65  ,    struct Maybe_979  ) ) {
    struct Maybe_979  x1099 = (  base1096 );
    struct TakeWhile_981  it1100 = ( (  into_dash_iter991 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_304  dref1101 = ( (  next988 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_304_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_304_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_304_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1007 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1007);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_979  temp1008;
    return (  temp1008 );
}

static  void *   cast_dash_ptr1016 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1017 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed1014 (  ) {
    int32_t  temp1015;
    int32_t  x571 = (  temp1015 );
    ( ( memset ) ( ( (  cast_dash_ptr1016 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of1017 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  uint8_t *   cast1018 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1012 (    uint8_t  x574 ) {
    int32_t  temp1013 = ( (  zeroed1014 ) ( ) );
    int32_t *  y575 = ( &temp1013 );
    uint8_t *  yp576 = ( (  cast1018 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  int32_t   u8_dash_i321011 (    uint8_t  x670 ) {
    return ( (  cast_dash_on_dash_zeroed1012 ) ( (  x670 ) ) );
}

static  struct Maybe_164   parse_dash_digit1010 (    struct Char_65  c2484 ) {
    if ( ( (  is_dash_digit985 ) ( (  c2484 ) ) ) ) {
        return ( ( Maybe_164_Just ) ( ( (  u8_dash_i321011 ) ( (  op_dash_sub944 ( ( (  char_dash_u8493 ) ( (  c2484 ) ) ) , ( (  char_dash_u8493 ) ( ( (  from_dash_charlike353 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
}

static  int64_t   i32_dash_i641019 (    int32_t  x607 ) {
    return ( (int64_t ) (  x607 ) );
}

static  struct Maybe_979   sequence_dash_maybe1009 (    struct Char_65  e2490 ,    struct Maybe_979  b2492 ) {
    struct Maybe_979  dref2493 = (  b2492 );
    if ( dref2493.tag == Maybe_979_None_t ) {
        return ( (struct Maybe_979) { .tag = Maybe_979_None_t } );
    }
    else {
        if ( dref2493.tag == Maybe_979_Just_t ) {
            struct Maybe_164  dref2495 = ( (  parse_dash_digit1010 ) ( (  e2490 ) ) );
            if ( dref2495.tag == Maybe_164_None_t ) {
                return ( (struct Maybe_979) { .tag = Maybe_979_None_t } );
            }
            else {
                if ( dref2495.tag == Maybe_164_Just_t ) {
                    return ( ( Maybe_979_Just ) ( (  op_dash_add584 ( (  op_dash_mul293 ( ( dref2493 .stuff .Maybe_979_Just_s .field0 ) , (  from_dash_integral295 ( 10 ) ) ) ) , ( (  i32_dash_i641019 ) ( ( dref2495 .stuff .Maybe_164_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_979   parse_dash_int1004 (    struct TakeWhile_981  s2487 ) {
    struct TakeWhile_981  cs2497 = ( (  chars1005 ) ( (  s2487 ) ) );
    struct Maybe_304  dref2498 = ( (  head987 ) ( (  cs2497 ) ) );
    if ( dref2498.tag == Maybe_304_Just_t ) {
        return ( (  reduce1006 ) ( (  cs2497 ) ,  ( ( Maybe_979_Just ) ( (  from_dash_integral295 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1009 ) ) );
    }
    else {
        if ( dref2498.tag == Maybe_304_None_t ) {
            return ( (struct Maybe_979) { .tag = Maybe_979_None_t } );
        }
    }
}

static  struct Maybe_979   scan_dash_int980 (    struct Scanner_967 *  sc3206 ) {
    struct TakeWhile_981  digit_dash_chars3207 = ( (  take_dash_while982 ) ( (  sc3206 ) ,  (  is_dash_digit985 ) ) );
    if ( ( (  null986 ) ( (  digit_dash_chars3207 ) ) ) ) {
        return ( (struct Maybe_979) { .tag = Maybe_979_None_t } );
    }
    ( (  drop_prime_992 ) ( (  sc3206 ) ,  ( (  count999 ) ( (  digit_dash_chars3207 ) ) ) ) );
    return ( (  parse_dash_int1004 ) ( (  digit_dash_chars3207 ) ) );
}

static  int32_t   i64_dash_i321021 (    int64_t  x619 ) {
    return ( (int32_t ) (  x619 ) );
}

struct StrConcat_1023 {
    struct StrView_27  field0;
    int64_t  field1;
};

static struct StrConcat_1023 StrConcat_1023_StrConcat (  struct StrView_27  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_1023 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1026 {
    struct StrView_27  field0;
    struct StrConcat_1023  field1;
};

static struct StrConcat_1026 StrConcat_1026_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1023  field1 ) {
    return ( struct StrConcat_1026 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1025 {
    struct StrConcat_1026  field0;
    struct Char_65  field1;
};

static struct StrConcat_1025 StrConcat_1025_StrConcat (  struct StrConcat_1026  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1025 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1031 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1030 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_1031  f_right;
};

struct StrConcatIter_1029 {
    struct StrViewIter_62  f_left;
    struct StrConcatIter_1030  f_right;
};

struct StrConcatIter_1028 {
    struct StrConcatIter_1029  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_1028   into_dash_iter1033 (    struct StrConcatIter_1028  self1498 ) {
    return (  self1498 );
}

struct env1040 {
    ;
    int64_t  base1211;
};

struct envunion1041 {
    int64_t  (*fun) (  struct env1040*  ,    int32_t  ,    int64_t  );
    struct env1040 env;
};

static  int64_t   reduce1039 (    struct Range_159  iterable1094 ,    int64_t  base1096 ,   struct envunion1041  fun1098 ) {
    int64_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1041  temp1042 = (  fun1098 );
                x1099 = ( temp1042.fun ( &temp1042.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1043 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1043);
    exit ( 1 );
    ( Unit_8_Unit );
    int64_t  temp1044;
    return (  temp1044 );
}

static  int64_t   lam1045 (   struct env1040* env ,    int32_t  item1215 ,    int64_t  x1217 ) {
    return (  op_dash_mul293 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  int64_t   pow1038 (    int64_t  base1211 ,    int32_t  p1213 ) {
    struct env1040 envinst1040 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1039 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral295 ( 1 ) ) ,  ( (struct envunion1041){ .fun = (  int64_t  (*) (  struct env1040*  ,    int32_t  ,    int64_t  ) )lam1045 , .env =  envinst1040 } ) ) );
}

static  int64_t   op_dash_div1046 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast1047 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub1048 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast1054 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed1052 (    uint8_t  x574 ) {
    size_t  temp1053 = ( (  zeroed848 ) ( ) );
    size_t *  y575 = ( &temp1053 );
    uint8_t *  yp576 = ( (  cast1054 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  size_t   u8_dash_size1051 (    uint8_t  x664 ) {
    return ( (  cast_dash_on_dash_zeroed1052 ) ( (  x664 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer1050 (    uint8_t *  ptr682 ,    uint8_t  b684 ) {
    size_t  s685 = ( ( (size_t ) (  ptr682 ) ) );
    size_t  exp686 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add318 ( (  op_dash_sub296 ( (  s685 ) , ( (  u8_dash_size1051 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer347 ) ( (  ptr682 ) ) ) ) ) ) ) , (  op_dash_mul412 ( (  exp686 ) , ( (  u8_dash_size1051 ) ( (  b684 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast1055 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_u81049 (    uint8_t  b773 ) {
    uint8_t *  ptr774 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer1050 ) ( ( ( (  cast1055 ) ( ( (  u8_dash_size1051 ) ( (  b773 ) ) ) ) ) ) ,  (  from_dash_integral315 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr774 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_304   next1037 (    struct IntStrIter_1031 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_304_Just ) ( ( (  from_dash_charlike353 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    int64_t  trim_dash_down1430 = ( (  pow1038 ) ( (  from_dash_integral295 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    int64_t  upper1431 = (  op_dash_div1046 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    int64_t  upper_dash_mask1432 = (  op_dash_mul293 ( (  op_dash_div1046 ( (  upper1431 ) , (  from_dash_integral295 ( 10 ) ) ) ) , (  from_dash_integral295 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast1047 ) ( (  op_dash_sub1048 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81049 ) ( (  op_dash_add945 ( (  digit1433 ) , (  from_dash_integral315 ( 48 ) ) ) ) ) );
    return ( ( Maybe_304_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_304   next1036 (    struct StrConcatIter_1030 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next1037 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next1035 (    struct StrConcatIter_1029 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next1036 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next1034 (    struct StrConcatIter_1028 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next1035 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1027 (    struct StrConcatIter_1028  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_1028  temp1032 = ( (  into_dash_iter1033 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1028 *  it1078 = ( &temp1032 );
    while ( ( true ) ) {
        struct Maybe_304  dref1079 = ( (  next1034 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_304_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_304_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_304_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_167   cmp1064 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg1065 (    int64_t  l204 ) {
    return ( (  from_dash_integral295 ( 0 ) ) - (  l204 ) );
}

static  bool   eq1067 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits1066 (    int64_t  self1437 ) {
    if ( (  eq1067 ( (  self1437 ) , (  from_dash_integral295 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp1064 ( (  self1437 ) , (  from_dash_integral295 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div1046 ( (  self1437 ) , (  from_dash_integral295 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1031   int_dash_iter1063 (    int64_t  int1441 ) {
    if ( (  cmp1064 ( (  int1441 ) , (  from_dash_integral295 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1031) { .f_int = (  op_dash_neg1065 ( (  int1441 ) ) ) , .f_len = ( (  count_dash_digits1066 ) ( (  op_dash_neg1065 ( (  int1441 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1031) { .f_int = (  int1441 ) , .f_len = ( (  count_dash_digits1066 ) ( (  int1441 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1031   chars1062 (    int64_t  self1468 ) {
    return ( (  int_dash_iter1063 ) ( (  self1468 ) ) );
}

static  struct StrConcatIter_1030   into_dash_iter1061 (    struct StrConcat_1023  dref1505 ) {
    return ( (struct StrConcatIter_1030) { .f_left = ( (  chars700 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1062 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1030   chars1060 (    struct StrConcat_1023  self1516 ) {
    return ( (  into_dash_iter1061 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1029   into_dash_iter1059 (    struct StrConcat_1026  dref1505 ) {
    return ( (struct StrConcatIter_1029) { .f_left = ( (  chars700 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1060 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1029   chars1058 (    struct StrConcat_1026  self1516 ) {
    return ( (  into_dash_iter1059 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1028   into_dash_iter1057 (    struct StrConcat_1025  dref1505 ) {
    return ( (struct StrConcatIter_1028) { .f_left = ( (  chars1058 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1028   chars1056 (    struct StrConcat_1025  self1516 ) {
    return ( (  into_dash_iter1057 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print1024 (    struct StrConcat_1025  s1703 ) {
    ( (  for_dash_each1027 ) ( ( (  chars1056 ) ( (  s1703 ) ) ) ,  (  printf_dash_char343 ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_888   undefined1068 (  ) {
    enum MouseButton_888  temp1069;
    return (  temp1069 );
}

static  enum MouseButton_888   panic_prime_1022 (    struct StrConcat_1023  errmsg1717 ) {
    ( (  print1024 ) ( ( ( StrConcat_1025_StrConcat ) ( ( ( StrConcat_1026_StrConcat ) ( ( (  from_dash_string207 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1717 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1068 ) ( ) );
}

static  enum MouseButton_888   btn_dash_to_dash_mouse_dash_button1020 (    int64_t  btn3394 ) {
    return ( {  int32_t  dref3395 = ( (  i64_dash_i321021 ) ( (  btn3394 ) ) ) ;  dref3395 == 0 ? ( MouseButton_888_MouseLeft ) :  dref3395 == 1 ? ( MouseButton_888_MouseMiddle ) :  dref3395 == 2 ? ( MouseButton_888_MouseRight ) :  dref3395 == 64 ? ( MouseButton_888_ScrollUp ) :  dref3395 == 65 ? ( MouseButton_888_ScrollDown ) : ( (  panic_prime_1022 ) ( ( ( StrConcat_1023_StrConcat ) ( ( (  from_dash_string207 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3394 ) ) ) ) ) ; } );
}

static  struct Scanner_967   mk1071 (    struct StrView_27  s3197 ) {
    return ( (struct Scanner_967) { .f_s = ( (  into_dash_iter701 ) ( (  s3197 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_885   parse_dash_csi961 (    struct Slice_962  seq3401 ) {
    if ( (  eq406 ( ( (  seq3401 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
    }
    char  last3402 = (  elem_dash_get963 ( (  seq3401 ) , (  op_dash_sub296 ( ( (  seq3401 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq948 ( (  elem_dash_get963 ( (  seq3401 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike516 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq948 ( (  last3402 ) , ( (  from_dash_charlike516 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq948 ( (  last3402 ) , ( (  from_dash_charlike516 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_967  temp968 = ( (  mk_dash_from_dash_str969 ) ( ( (  substr970 ) ( ( (  from_dash_ascii_dash_slice976 ) ( (  seq3401 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3401 ) .f_count ) ) ) ) );
        struct Scanner_967 *  sc3403 = ( &temp968 );
        struct Maybe_979  dref3404 = ( (  scan_dash_int980 ) ( (  sc3403 ) ) );
        if ( dref3404.tag == Maybe_979_None_t ) {
            return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
        }
        else {
            if ( dref3404.tag == Maybe_979_Just_t ) {
                ( (  next989 ) ( (  sc3403 ) ) );
                struct Maybe_979  dref3406 = ( (  scan_dash_int980 ) ( (  sc3403 ) ) );
                if ( dref3406.tag == Maybe_979_None_t ) {
                    return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
                }
                else {
                    if ( dref3406.tag == Maybe_979_Just_t ) {
                        ( (  next989 ) ( (  sc3403 ) ) );
                        struct Maybe_979  dref3408 = ( (  scan_dash_int980 ) ( (  sc3403 ) ) );
                        if ( dref3408.tag == Maybe_979_None_t ) {
                            return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
                        }
                        else {
                            if ( dref3408.tag == Maybe_979_Just_t ) {
                                return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Mouse ) ( ( (struct MouseEvent_887) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1020 ) ( ( dref3404 .stuff .Maybe_979_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub173 ( ( (  i64_dash_i321021 ) ( ( dref3406 .stuff .Maybe_979_Just_s .field0 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , .f_y = (  op_dash_sub173 ( ( (  i64_dash_i321021 ) ( ( dref3408 .stuff .Maybe_979_Just_s .field0 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , .f_pressed = (  eq948 ( (  last3402 ) , ( (  from_dash_charlike516 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq406 ( ( (  seq3401 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq948 ( (  last3402 ) , ( (  from_dash_charlike516 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Up_t } ) ) ) ) );
        }
        if ( (  eq948 ( (  last3402 ) , ( (  from_dash_charlike516 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Down_t } ) ) ) ) );
        }
        if ( (  eq948 ( (  last3402 ) , ( (  from_dash_charlike516 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Right_t } ) ) ) ) );
        }
        if ( (  eq948 ( (  last3402 ) , ( (  from_dash_charlike516 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Left_t } ) ) ) ) );
        }
        if ( (  eq948 ( (  last3402 ) , ( (  from_dash_charlike516 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Home_t } ) ) ) ) );
        }
        if ( (  eq948 ( (  last3402 ) , ( (  from_dash_charlike516 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
    }
    if ( (  eq948 ( (  last3402 ) , ( (  from_dash_charlike516 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_967  temp1070 = ( (  mk1071 ) ( ( (  from_dash_ascii_dash_slice976 ) ( (  seq3401 ) ) ) ) );
        struct Scanner_967 *  sc3410 = ( &temp1070 );
        struct Maybe_979  dref3411 = ( (  scan_dash_int980 ) ( (  sc3410 ) ) );
        if ( dref3411.tag == Maybe_979_None_t ) {
            return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
        }
        else {
            if ( dref3411.tag == Maybe_979_Just_t ) {
                return ( {  int32_t  dref3413 = ( (  i64_dash_i321021 ) ( ( dref3411 .stuff .Maybe_979_Just_s .field0 ) ) ) ;  dref3413 == 1 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Home_t } ) ) ) ) ) :  dref3413 == 2 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Insert_t } ) ) ) ) ) :  dref3413 == 3 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Delete_t } ) ) ) ) ) :  dref3413 == 4 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_End_t } ) ) ) ) ) :  dref3413 == 5 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_PageUp_t } ) ) ) ) ) :  dref3413 == 6 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_PageDown_t } ) ) ) ) ) :  dref3413 == 15 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_F5_t } ) ) ) ) ) :  dref3413 == 17 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_F6_t } ) ) ) ) ) :  dref3413 == 18 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_F7_t } ) ) ) ) ) :  dref3413 == 19 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_F8_t } ) ) ) ) ) :  dref3413 == 20 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_F9_t } ) ) ) ) ) :  dref3413 == 21 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_F10_t } ) ) ) ) ) :  dref3413 == 23 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_F11_t } ) ) ) ) ) :  dref3413 == 24 ? ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_F12_t } ) ) ) ) ) : ( (struct Maybe_885) { .tag = Maybe_885_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
}

static  struct Slice_962   subslice1072 (    struct Slice_962  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    char *  begin_dash_ptr1789 = ( (  offset_dash_ptr959 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp297 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp297 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_962) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub296 ( ( (  min506 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_962) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  char *   cast1074 (    struct Array_949 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_962   as_dash_slice1073 (    struct Array_949 *  arr2277 ) {
    return ( (struct Slice_962) { .f_ptr = ( (  cast1074 ) ( (  arr2277 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1076 {
    enum {
        Maybe_1076_None_t,
        Maybe_1076_Just_t,
    } tag;
    union {
        struct {
            struct Key_274  field0;
        } Maybe_1076_Just_s;
    } stuff;
};

static struct Maybe_1076 Maybe_1076_Just (  struct Key_274  field0 ) {
    return ( struct Maybe_1076 ) { .tag = Maybe_1076_Just_t, .stuff = { .Maybe_1076_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1076   parse_dash_ss31077 (    char  c3398 ) {
    if ( (  eq948 ( (  c3398 ) , ( (  from_dash_charlike516 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1076_Just ) ( ( (struct Key_274) { .tag = Key_274_Up_t } ) ) );
    }
    if ( (  eq948 ( (  c3398 ) , ( (  from_dash_charlike516 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1076_Just ) ( ( (struct Key_274) { .tag = Key_274_Down_t } ) ) );
    }
    if ( (  eq948 ( (  c3398 ) , ( (  from_dash_charlike516 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1076_Just ) ( ( (struct Key_274) { .tag = Key_274_Right_t } ) ) );
    }
    if ( (  eq948 ( (  c3398 ) , ( (  from_dash_charlike516 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1076_Just ) ( ( (struct Key_274) { .tag = Key_274_Left_t } ) ) );
    }
    if ( (  eq948 ( (  c3398 ) , ( (  from_dash_charlike516 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1076_Just ) ( ( (struct Key_274) { .tag = Key_274_Home_t } ) ) );
    }
    if ( (  eq948 ( (  c3398 ) , ( (  from_dash_charlike516 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1076_Just ) ( ( (struct Key_274) { .tag = Key_274_End_t } ) ) );
    }
    if ( (  eq948 ( (  c3398 ) , ( (  from_dash_charlike516 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1076_Just ) ( ( (struct Key_274) { .tag = Key_274_F1_t } ) ) );
    }
    if ( (  eq948 ( (  c3398 ) , ( (  from_dash_charlike516 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1076_Just ) ( ( (struct Key_274) { .tag = Key_274_F2_t } ) ) );
    }
    if ( (  eq948 ( (  c3398 ) , ( (  from_dash_charlike516 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1076_Just ) ( ( (struct Key_274) { .tag = Key_274_F3_t } ) ) );
    }
    if ( (  eq948 ( (  c3398 ) , ( (  from_dash_charlike516 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1076_Just ) ( ( (struct Key_274) { .tag = Key_274_F4_t } ) ) );
    }
    return ( (struct Maybe_1076) { .tag = Maybe_1076_None_t } );
}

static  struct Maybe_885   read_dash_key897 (  ) {
    char  temp898 = ( (  undefined899 ) ( ) );
    char *  ch3415 = ( &temp898 );
    struct Maybe_901  dref3416 = ( (  read_dash_byte902 ) ( (  from_dash_integral67 ( 0 ) ) ) );
    if ( dref3416.tag == Maybe_901_None_t ) {
        return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
    }
    else {
        if ( dref3416.tag == Maybe_901_Just_t ) {
            (*  ch3415 ) = ( dref3416 .stuff .Maybe_901_Just_s .field0 );
        }
    }
    if ( (  eq310 ( ( (  ascii_dash_u8515 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral315 ( 13 ) ) ) ) ) {
        return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Enter_t } ) ) ) ) );
    }
    if ( (  eq310 ( ( (  ascii_dash_u8515 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral315 ( 127 ) ) ) ) ) {
        return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp314 ( ( (  ascii_dash_u8515 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral315 ( 27 ) ) ) == 0 ) && ( !  eq310 ( ( (  ascii_dash_u8515 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral315 ( 9 ) ) ) ) ) ) {
        char  letter3418 = ( (  u8_dash_ascii909 ) ( ( (  u32_dash_u8153 ) ( ( (  u32_dash_or739 ) ( ( (  u8_dash_u32910 ) ( ( (  ascii_dash_u8515 ) ( ( * (  ch3415 ) ) ) ) ) ) ,  ( (  from_dash_hex914 ) ( ( (  from_dash_string207 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( ( Key_274_Ctrl ) ( (  letter3418 ) ) ) ) ) ) );
    }
    if ( ( !  eq310 ( ( (  ascii_dash_u8515 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral315 ( 27 ) ) ) ) ) {
        if ( (  cmp314 ( ( (  ascii_dash_u8515 ) ( ( * (  ch3415 ) ) ) ) , (  from_dash_integral315 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key897 ) ( ) );
        } else {
            return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( ( Key_274_Char ) ( ( * (  ch3415 ) ) ) ) ) ) ) );
        }
    }
    char  temp947 = ( (  undefined899 ) ( ) );
    char *  ch23419 = ( &temp947 );
    struct Maybe_901  dref3420 = ( (  read_dash_byte902 ) ( (  from_dash_integral67 ( 50 ) ) ) );
    if ( dref3420.tag == Maybe_901_None_t ) {
        return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3420.tag == Maybe_901_Just_t ) {
            (*  ch23419 ) = ( dref3420 .stuff .Maybe_901_Just_s .field0 );
        }
    }
    if ( (  eq948 ( ( * (  ch23419 ) ) , ( (  from_dash_charlike516 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_949  temp950 = ( ( (  zeroed951 ) ( ) ) );
        struct Array_949 *  seq3422 = ( &temp950 );
        int32_t  slen3423 = (  from_dash_integral67 ( 0 ) );
        while ( (  cmp166 ( (  slen3423 ) , (  from_dash_integral67 ( 31 ) ) ) == 0 ) ) {
            char  temp955 = ( (  undefined899 ) ( ) );
            char *  sc3424 = ( &temp955 );
            struct Maybe_901  dref3425 = ( (  read_dash_byte902 ) ( (  from_dash_integral67 ( 50 ) ) ) );
            if ( dref3425.tag == Maybe_901_None_t ) {
                break;
            }
            else {
                if ( dref3425.tag == Maybe_901_Just_t ) {
                    (*  sc3424 ) = ( dref3425 .stuff .Maybe_901_Just_s .field0 );
                }
            }
            ( (  set956 ) ( (  seq3422 ) ,  ( (  i32_dash_size419 ) ( (  slen3423 ) ) ) ,  ( * (  sc3424 ) ) ) );
            slen3423 = (  op_dash_add168 ( (  slen3423 ) , (  from_dash_integral67 ( 1 ) ) ) );
            if ( ( (  cmp314 ( ( (  ascii_dash_u8515 ) ( ( * (  sc3424 ) ) ) ) , (  from_dash_integral315 ( 64 ) ) ) != 0 ) && (  cmp314 ( ( (  ascii_dash_u8515 ) ( ( * (  sc3424 ) ) ) ) , (  from_dash_integral315 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi961 ) ( ( (  subslice1072 ) ( ( (  as_dash_slice1073 ) ( (  seq3422 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size419 ) ( (  slen3423 ) ) ) ) ) ) );
    }
    if ( (  eq948 ( ( * (  ch23419 ) ) , ( (  from_dash_charlike516 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1075 = ( (  undefined899 ) ( ) );
        char *  sc3427 = ( &temp1075 );
        struct Maybe_901  dref3428 = ( (  read_dash_byte902 ) ( (  from_dash_integral67 ( 50 ) ) ) );
        if ( dref3428.tag == Maybe_901_None_t ) {
            return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3428.tag == Maybe_901_Just_t ) {
                (*  sc3427 ) = ( dref3428 .stuff .Maybe_901_Just_s .field0 );
            }
        }
        struct Maybe_1076  dref3430 = ( (  parse_dash_ss31077 ) ( ( * (  sc3427 ) ) ) );
        if ( dref3430.tag == Maybe_1076_None_t ) {
            return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
        }
        else {
            if ( dref3430.tag == Maybe_1076_Just_t ) {
                return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( dref3430 .stuff .Maybe_1076_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_885_Just ) ( ( ( InputEvent_886_Key ) ( ( (struct Key_274) { .tag = Key_274_Escape_t } ) ) ) ) );
}

static  struct Maybe_885   read_dash_event894 (   struct env98* env ,    struct Tui_100 *  tui3440 ) {
    struct envunion99  temp895 = ( (struct envunion99){ .fun = (  bool  (*) (  struct env97*  ,    struct Tui_100 *  ) )update_dash_dimensions896 , .env =  env->envinst97 } );
    ( temp895.fun ( &temp895.env ,  (  tui3440 ) ) );
    struct Maybe_885  dref3441 = ( (  read_dash_key897 ) ( ) );
    if ( dref3441.tag == Maybe_885_None_t ) {
        return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
    }
    else {
        if ( dref3441.tag == Maybe_885_Just_t ) {
            (*  tui3440 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_885_Just ) ( ( dref3441 .stuff .Maybe_885_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_885   lam892 (   struct env883* env ) {
    struct envunion884  temp893 = ( (struct envunion884){ .fun = (  struct Maybe_885  (*) (  struct env98*  ,    struct Tui_100 *  ) )read_dash_event894 , .env =  env->envinst98 } );
    return ( temp893.fun ( &temp893.env ,  ( env->tui4548 ) ) );
}

static  struct Maybe_885   next1079 (    struct FunIter_882 *  self1032 ) {
    if ( ( ( * (  self1032 ) ) .f_finished ) ) {
        return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
    }
    struct envunion889  temp1080 = ( ( * (  self1032 ) ) .f_fun );
    struct Maybe_885  dref1033 = ( temp1080.fun ( &temp1080.env ) );
    if ( dref1033.tag == Maybe_885_Just_t ) {
        return ( ( Maybe_885_Just ) ( ( dref1033 .stuff .Maybe_885_Just_s .field0 ) ) );
    }
    else {
        if ( dref1033.tag == Maybe_885_None_t ) {
            (*  self1032 ) .f_finished = ( true );
            return ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
        }
    }
}

struct env1083 {
    ;
    struct Editor_256 *  ed4407;
};

struct envunion1084 {
    enum Unit_8  (*fun) (  struct env1083*  ,    struct StrView_27  );
    struct env1083 env;
};

static  enum Unit_8   if_dash_just1082 (    struct Maybe_94  x1292 ,   struct envunion1084  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1084  temp1085 = (  fun1294 );
        ( temp1085.fun ( &temp1085.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1086 (   struct env1083* env ,    struct StrView_27  msg4409 ) {
    ( (  free509 ) ( (  msg4409 ) ,  ( ( * ( env->ed4407 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1081 (    struct Editor_256 *  ed4407 ) {
    struct env1083 envinst1083 = {
        .ed4407 =  ed4407 ,
    };
    ( (  if_dash_just1082 ) ( ( ( * (  ed4407 ) ) .f_msg ) ,  ( (struct envunion1084){ .fun = (  enum Unit_8  (*) (  struct env1083*  ,    struct StrView_27  ) )lam1086 , .env =  envinst1083 } ) ) );
    (*  ed4407 ) .f_msg = ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1088 {
    enum Unit_8  (*fun) (  struct env271*  ,    struct Editor_256 *  ,    struct Key_274  );
    struct env271 env;
};

enum CursorMovement_1094 {
    CursorMovement_1094_NoChanges,
    CursorMovement_1094_UpdateVI,
    CursorMovement_1094_OverrideSelect,
};

struct Tuple2_1096 {
    enum CursorMovement_1094  field0;
    enum CursorMovement_1094  field1;
};

static struct Tuple2_1096 Tuple2_1096_Tuple2 (  enum CursorMovement_1094  field0 ,  enum CursorMovement_1094  field1 ) {
    return ( struct Tuple2_1096 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1095 (    enum CursorMovement_1094  l4148 ,    enum CursorMovement_1094  r4150 ) {
    return ( {  struct Tuple2_1096  dref4151 = ( ( Tuple2_1096_Tuple2 ) ( (  l4148 ) ,  (  r4150 ) ) ) ;  dref4151 .field0 == CursorMovement_1094_NoChanges &&  dref4151 .field1 == CursorMovement_1094_NoChanges ? ( true ) :  dref4151 .field0 == CursorMovement_1094_UpdateVI &&  dref4151 .field1 == CursorMovement_1094_UpdateVI ? ( true ) :  dref4151 .field0 == CursorMovement_1094_OverrideSelect &&  dref4151 .field1 == CursorMovement_1094_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_27   from_dash_bytes1100 (    struct Slice_11  sl2154 ) {
    return ( (struct StrView_27) { .f_contents = (  sl2154 ) } );
}

static  struct StrView_27   line1099 (    struct TextBuf_114 *  self3714 ,    int32_t  li3716 ) {
    return ( (  from_dash_bytes1100 ) ( ( (  to_dash_slice533 ) ( ( ( (  get530 ) ( ( & ( ( * (  self3714 ) ) .f_buf ) ) ,  ( (  i32_dash_size419 ) ( (  li3716 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe1103 (    struct Maybe_94  x1283 ,    int32_t (*  fun1285 )(    struct StrView_27  ) ,    int32_t  default1287 ) {
    return ( {  struct Maybe_94  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_94_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_94_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  struct Maybe_94   char_dash_replacement1104 (    struct Char_65  c4031 ) {
    if ( (  eq582 ( (  c4031 ) , ( (  from_dash_charlike353 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_94_Just ) ( ( (  from_dash_string207 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
}

static  size_t   reduce1107 (    struct StrViewIter_62  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrViewIter_62  it1100 = ( (  into_dash_iter786 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_304  dref1101 = ( (  next688 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_304_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_304_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_304_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1108 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1108);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1109;
    return (  temp1109 );
}

static  size_t   lam1110 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add318 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1106 (    struct StrViewIter_62  it1105 ) {
    return ( (  reduce1107 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1110 ) ) );
}

static  int32_t   lam1105 (    struct StrView_27  s4036 ) {
    return ( (  size_dash_i32336 ) ( ( (  count1106 ) ( ( (  chars700 ) ( (  s4036 ) ) ) ) ) ) );
}

static  int32_t   max1112 (    int32_t  l1316 ,    int32_t  r1318 ) {
    if ( (  cmp166 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  void *   cast_dash_ptr1118 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1119 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed1116 (  ) {
    wchar_t  temp1117;
    wchar_t  x571 = (  temp1117 );
    ( ( memset ) ( ( (  cast_dash_ptr1118 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of1119 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  char *   cast_dash_ptr1120 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast1121 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_1124 {
    size_t  f_size;
};

static  struct TypeSize_1124   get_dash_typesize1123 (  ) {
    wchar_t  temp1125;
    return ( (struct TypeSize_1124) { .f_size = ( sizeof( ( (  temp1125 ) ) ) ) } );
}

static  wchar_t   cast1127 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar1114 (    struct Char_65  c751 ) {
    struct CharDestructured_344  dref752 = ( (  destructure346 ) ( (  c751 ) ) );
    if ( dref752.tag == CharDestructured_344_Ref_t ) {
        wchar_t  temp1115 = ( (  zeroed1116 ) ( ) );
        wchar_t *  wcp754 = ( &temp1115 );
        size_t  num_dash_chars755 = ( ( mbstowcs ) ( (  wcp754 ) ,  ( (  cast_dash_ptr1120 ) ( ( ( dref752 .stuff .CharDestructured_344_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq406 ( (  num_dash_chars755 ) , ( ( (  cast1121 ) ( ( (  op_dash_neg1065 ( (  from_dash_integral295 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1122 = ( (  from_dash_string68 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1122);
            exit ( 1 );
            ( Unit_8_Unit );
        }
        return ( * (  wcp754 ) );
    }
    else {
        if ( dref752.tag == CharDestructured_344_Scalar_t ) {
            if ( ( ! (  eq406 ( ( (  size_dash_of822 ) ( ( ( dref752 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1123 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1126 = ( (  from_dash_string68 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1126);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( (  cast1127 ) ( ( ( dref752 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1113 (    struct Char_65  c2602 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1114 ) ( (  c2602 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1111 (    struct Char_65  c3485 ) {
    return ( (  max1112 ) ( ( (  wcwidth1113 ) ( (  c3485 ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width1102 (    struct Char_65  c4034 ) {
    return ( (  maybe1103 ) ( ( (  char_dash_replacement1104 ) ( (  c4034 ) ) ) ,  (  lam1105 ) ,  ( (  rendered_dash_wcwidth1111 ) ( (  c4034 ) ) ) ) );
}

static  int32_t   pos_dash_vi1097 (    struct TextBuf_114 *  self4050 ,    struct Pos_26  pos4052 ) {
    int32_t  bi4053 = ( (  from_dash_integral67 ( 0 ) ) );
    int32_t  vi4054 = (  from_dash_integral67 ( 0 ) );
    struct StrViewIter_62  temp1098 =  into_dash_iter786 ( ( (  chars700 ) ( ( (  line1099 ) ( (  self4050 ) ,  ( (  pos4052 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_304  __cond1101 =  next688 (&temp1098);
        if (  __cond1101 .tag == 0 ) {
            break;
        }
        struct Char_65  c4056 =  __cond1101 .stuff .Maybe_304_Just_s .field0;
        bi4053 = (  op_dash_add168 ( (  bi4053 ) , ( (  size_dash_i32336 ) ( ( (  c4056 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp166 ( ( (  pos4052 ) .f_bi ) , (  bi4053 ) ) == 0 ) ) {
            break;
        }
        vi4054 = (  op_dash_add168 ( (  vi4054 ) , ( (  char_dash_screen_dash_width1102 ) ( (  c4056 ) ) ) ) );
    }
    return (  vi4054 );
}

struct Tuple2_1130 {
    enum Mode_228  field0;
    enum Mode_228  field1;
};

static struct Tuple2_1130 Tuple2_1130_Tuple2 (  enum Mode_228  field0 ,  enum Mode_228  field1 ) {
    return ( struct Tuple2_1130 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1129 (    enum Mode_228  l4010 ,    enum Mode_228  r4012 ) {
    return ( {  struct Tuple2_1130  dref4013 = ( ( Tuple2_1130_Tuple2 ) ( (  l4010 ) ,  (  r4012 ) ) ) ;  dref4013 .field0 == Mode_228_Normal &&  dref4013 .field1 == Mode_228_Normal ? ( true ) :  dref4013 .field0 == Mode_228_Insert &&  dref4013 .field1 == Mode_228_Insert ? ( true ) :  dref4013 .field0 == Mode_228_Select &&  dref4013 .field1 == Mode_228_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1128 (    struct Pane_227 *  self4137 ,    struct Maybe_34  sel4139 ) {
    if ( ( !  eq1129 ( ( ( * (  self4137 ) ) .f_mode ) , ( Mode_228_Select ) ) ) ) {
        (*  self4137 ) .f_sel = (  sel4139 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors1093 (    struct Pane_227 *  self4154 ,    struct Pos_26  cur4156 ,    struct Maybe_34  sel4158 ,    enum CursorMovement_1094  cursor_dash_movement_dash_type4160 ) {
    if ( ( !  eq1095 ( (  cursor_dash_movement_dash_type4160 ) , ( CursorMovement_1094_NoChanges ) ) ) ) {
        (*  self4154 ) .f_vi = ( (  pos_dash_vi1097 ) ( ( ( * (  self4154 ) ) .f_buf ) ,  (  cur4156 ) ) );
    }
    (*  self4154 ) .f_cursor = (  cur4156 );
    if ( ( !  eq1095 ( (  cursor_dash_movement_dash_type4160 ) , ( CursorMovement_1094_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1128 ) ( (  self4154 ) ,  (  sel4158 ) ) );
    } else {
        (*  self4154 ) .f_sel = (  sel4158 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1132 (    struct StrView_27  self2200 ) {
    return ( ( (  self2200 ) .f_contents ) .f_count );
}

static  size_t   clamp1133 (    size_t  x1353 ,    size_t  mn1355 ,    size_t  mx1357 ) {
    if ( (  cmp297 ( (  x1353 ) , (  mn1355 ) ) == 0 ) ) {
        return (  mn1355 );
    } else {
        if ( (  cmp297 ( (  x1353 ) , (  mx1357 ) ) == 2 ) ) {
            return (  mx1357 );
        } else {
            return (  x1353 );
        }
    }
}

static  size_t   sync_dash_char1135 (    uint8_t *  p693 ) {
    size_t  i694 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb695 = ( * ( (uint8_t * ) ( ( (void*) (  p693 ) ) + (  op_dash_neg1065 ( ( (  size_dash_i64309 ) ( (  i694 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp314 ( (  pb695 ) , (  from_dash_integral315 ( 128 ) ) ) != 0 ) && (  cmp314 ( (  pb695 ) , (  op_dash_add945 ( (  from_dash_integral315 ( 128 ) ) , (  from_dash_integral315 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i694 );
        }
        i694 = (  op_dash_add318 ( (  i694 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1134 (    uint8_t *  p698 ) {
    return (  op_dash_add318 ( ( (  sync_dash_char1135 ) ( ( (  offset_dash_ptr307 ) ( (  p698 ) ,  (  op_dash_neg1065 ( (  from_dash_integral295 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_26   left_dash_pos1131 (    struct TextBuf_114 *  self3735 ,    struct Pos_26  pos3737 ) {
    if ( (  eq524 ( (  pos3737 ) , ( (  mk671 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk671 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    }
    if ( (  eq525 ( ( (  pos3737 ) .f_bi ) , (  from_dash_integral67 ( 0 ) ) ) ) ) {
        ( (  assert644 ) ( (  cmp166 ( ( (  pos3737 ) .f_line ) , (  from_dash_integral67 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string207 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk671 ) ( (  op_dash_sub173 ( ( (  pos3737 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  ( (  size_dash_i32336 ) ( ( (  num_dash_bytes1132 ) ( ( (  line1099 ) ( (  self3735 ) ,  (  op_dash_sub173 ( ( (  pos3737 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_27  line3738 = ( (  line1099 ) ( (  self3735 ) ,  ( (  pos3737 ) .f_line ) ) );
    size_t  pos_dash_bi3739 = ( (  clamp1133 ) ( ( (  i32_dash_size419 ) ( ( (  pos3737 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1132 ) ( (  line3738 ) ) ) ) );
    size_t  off3740 = ( (  previous_dash_char1134 ) ( ( (  offset_dash_ptr307 ) ( ( ( (  line3738 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  pos_dash_bi3739 ) ) ) ) ) ) );
    return ( (  mk671 ) ( ( (  pos3737 ) .f_line ) ,  ( (  size_dash_i32336 ) ( (  op_dash_sub296 ( (  pos_dash_bi3739 ) , (  off3740 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1092 (    struct Pane_227 *  self4166 ) {
    ( (  set_dash_cursors1093 ) ( (  self4166 ) ,  ( (  left_dash_pos1131 ) ( ( ( * (  self4166 ) ) .f_buf ) ,  ( ( * (  self4166 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_227 *   pane1136 (    struct Editor_256 *  ed4397 ) {
    return ( & ( ( * (  ed4397 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1139 (    struct TextBuf_114 *  self3719 ) {
    return ( (  size_dash_i32336 ) ( ( (  size526 ) ( ( & ( ( * (  self3719 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_26   right_dash_pos1138 (    struct TextBuf_114 *  self3727 ,    struct Pos_26  pos3729 ) {
    if ( (  cmp166 ( ( (  pos3729 ) .f_line ) , ( (  num_dash_lines1139 ) ( (  self3727 ) ) ) ) != 0 ) ) {
        return ( (  mk671 ) ( ( (  num_dash_lines1139 ) ( (  self3727 ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    }
    struct StrView_27  line3730 = ( (  line1099 ) ( (  self3727 ) ,  ( (  pos3729 ) .f_line ) ) );
    int64_t  bi3731 = ( (  i32_dash_i641019 ) ( ( (  pos3729 ) .f_bi ) ) );
    if ( (  cmp1064 ( (  bi3731 ) , ( (  size_dash_i64309 ) ( ( (  num_dash_bytes1132 ) ( (  line3730 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp166 ( (  op_dash_add168 ( ( (  pos3729 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) , ( (  num_dash_lines1139 ) ( (  self3727 ) ) ) ) != 0 ) ) {
            return ( (  mk671 ) ( ( (  pos3729 ) .f_line ) ,  ( (  size_dash_i32336 ) ( ( (  num_dash_bytes1132 ) ( (  line3730 ) ) ) ) ) ) );
        }
        return ( (  mk671 ) ( (  op_dash_add168 ( ( (  pos3729 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    }
    int32_t  off3732 = ( (  size_dash_i32336 ) ( ( (  next_dash_char313 ) ( ( (  offset_dash_ptr307 ) ( ( ( (  line3730 ) .f_contents ) .f_ptr ) ,  (  bi3731 ) ) ) ) ) ) );
    return ( (  mk671 ) ( ( (  pos3729 ) .f_line ) ,  (  op_dash_add168 ( ( (  pos3729 ) .f_bi ) , (  off3732 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1137 (    struct Pane_227 *  self4163 ) {
    ( (  set_dash_cursors1093 ) ( (  self4163 ) ,  ( (  right_dash_pos1138 ) ( ( ( * (  self4163 ) ) .f_buf ) ,  ( ( * (  self4163 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1141 (    struct TextBuf_114 *  self4039 ,    int32_t  ln4041 ,    int32_t  vx4043 ) {
    int32_t  bi4044 = ( (  from_dash_integral67 ( 0 ) ) );
    int32_t  vi4045 = (  from_dash_integral67 ( 0 ) );
    struct StrViewIter_62  temp1142 =  into_dash_iter786 ( ( (  chars700 ) ( ( (  line1099 ) ( (  self4039 ) ,  (  ln4041 ) ) ) ) ) );
    while (true) {
        struct Maybe_304  __cond1143 =  next688 (&temp1142);
        if (  __cond1143 .tag == 0 ) {
            break;
        }
        struct Char_65  c4047 =  __cond1143 .stuff .Maybe_304_Just_s .field0;
        vi4045 = (  op_dash_add168 ( (  vi4045 ) , ( (  char_dash_screen_dash_width1102 ) ( (  c4047 ) ) ) ) );
        if ( (  cmp166 ( (  vx4043 ) , (  vi4045 ) ) == 0 ) ) {
            break;
        }
        bi4044 = (  op_dash_add168 ( (  bi4044 ) , ( (  size_dash_i32336 ) ( ( (  c4047 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4044 );
}

static  enum Unit_8   move_dash_down1140 (    struct Pane_227 *  self4169 ,    int32_t  amnt4171 ) {
    struct Pos_26  cur4172 = ( ( * (  self4169 ) ) .f_cursor );
    int32_t  nu_dash_line4173 = ( (  min635 ) ( (  op_dash_add168 ( ( (  cur4172 ) .f_line ) , (  amnt4171 ) ) ) ,  (  op_dash_sub173 ( ( (  num_dash_lines1139 ) ( ( ( * (  self4169 ) ) .f_buf ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    int32_t  vci4174 = ( ( * (  self4169 ) ) .f_vi );
    int32_t  bi4175 = ( (  vi_dash_bi1141 ) ( ( ( * (  self4169 ) ) .f_buf ) ,  (  nu_dash_line4173 ) ,  (  vci4174 ) ) );
    ( (  set_dash_cursors1093 ) ( (  self4169 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4173 ) , .f_bi = (  bi4175 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1144 (    struct Pane_227 *  self4178 ,    int32_t  amnt4180 ) {
    struct Pos_26  cur4181 = ( ( * (  self4178 ) ) .f_cursor );
    int32_t  nu_dash_line4182 = ( (  max1112 ) ( (  op_dash_sub173 ( ( (  cur4181 ) .f_line ) , (  amnt4180 ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    int32_t  vci4183 = ( ( * (  self4178 ) ) .f_vi );
    int32_t  bi4184 = ( (  vi_dash_bi1141 ) ( ( ( * (  self4178 ) ) .f_buf ) ,  (  nu_dash_line4182 ) ,  (  vci4183 ) ) );
    ( (  set_dash_cursors1093 ) ( (  self4178 ) ,  ( (struct Pos_26) { .f_line = (  nu_dash_line4182 ) , .f_bi = (  bi4184 ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1146 (    struct TextBuf_114 *  self3828 ) {
    (*  self3828 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_116_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1145 (    struct Pane_227 *  self4142 ,    enum Mode_228  mode4144 ) {
    if ( (  eq1129 ( (  mode4144 ) , ( Mode_228_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1146 ) ( ( ( * (  self4142 ) ) .f_buf ) ) );
    }
    (*  self4142 ) .f_mode = (  mode4144 );
    return ( Unit_8_Unit );
}

struct TakeWhile_1151 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1150 {
    struct TakeWhile_1151  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1150 Map_1150_Map (  struct TakeWhile_1151  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1150 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1150   into_dash_iter1153 (    struct Map_1150  self797 ) {
    return (  self797 );
}

static  struct Maybe_304   next1155 (    struct TakeWhile_1151 *  self965 ) {
    struct Maybe_304  mx966 = ( (  next688 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_304  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_304_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_304_Just ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
            }
        }
    }
}

static  struct Maybe_254   next1154 (    struct Map_1150 *  dref799 ) {
    struct Maybe_304  dref802 = ( (  next1155 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_304_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_304_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1152 (    struct Map_1150  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1150  it1100 = ( (  into_dash_iter1153 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1101 = ( (  next1154 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_254_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_254_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1156 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1156);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1157;
    return (  temp1157 );
}

static  size_t   lam1158 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add318 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1149 (    struct Map_1150  it1111 ) {
    return ( (  reduce1152 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1158 ) ) );
}

static  struct TakeWhile_1151   into_dash_iter1160 (    struct TakeWhile_1151  self962 ) {
    return (  self962 );
}

static  struct Map_1150   map1159 (    struct TakeWhile_1151  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1151  it809 = ( (  into_dash_iter1160 ) ( (  iterable806 ) ) );
    return ( ( Map_1150_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1151   take_dash_while1161 (    struct StrView_27  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1151) { .f_it = ( (  into_dash_iter701 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  bool   lam1162 (    struct Char_65  c4232 ) {
    return (  eq582 ( (  c4232 ) , ( (  from_dash_charlike353 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1163 (    struct Char_65  c4234 ) {
    return ( (  c4234 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1148 (    struct Pane_227 *  pane4228 ,    int32_t  line4230 ) {
    return ( (  size_dash_i32336 ) ( ( (  sum1149 ) ( ( (  map1159 ) ( ( (  take_dash_while1161 ) ( ( (  line1099 ) ( ( ( * (  pane4228 ) ) .f_buf ) ,  (  line4230 ) ) ) ,  (  lam1162 ) ) ) ,  (  lam1163 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1147 (    struct Pane_227 *  self4247 ) {
    struct Pos_26  cur4248 = ( ( * (  self4247 ) ) .f_cursor );
    int32_t  indent4249 = ( (  indent_dash_at_dash_line1148 ) ( (  self4247 ) ,  ( (  cur4248 ) .f_line ) ) );
    struct Pos_26  temp1164 = (  cur4248 );
    temp1164 .  f_bi = (  indent4249 );
    ( (  set_dash_cursors1093 ) ( (  self4247 ) ,  ( temp1164 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1165 (    struct Pane_227 *  self4252 ) {
    struct Pos_26  cur4253 = ( ( * (  self4252 ) ) .f_cursor );
    struct Pos_26  temp1166 = (  cur4253 );
    temp1166 .  f_bi = ( (  size_dash_i32336 ) ( ( (  num_dash_bytes1132 ) ( ( (  line1099 ) ( ( ( * (  self4252 ) ) .f_buf ) ,  ( (  cur4253 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors1093 ) ( (  self4252 ) ,  ( temp1166 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct SliceIter_1174 {
    struct Slice_31  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1173 {
    struct SliceIter_1174  field0;
    size_t  field1;
};

static struct Drop_1173 Drop_1173_Drop (  struct SliceIter_1174  field0 ,  size_t  field1 ) {
    return ( struct Drop_1173 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1173   into_dash_iter1175 (    struct Drop_1173  self846 ) {
    return (  self846 );
}

static  struct SliceIter_1174   into_dash_iter1178 (    struct Slice_31  self1824 ) {
    return ( (struct SliceIter_1174) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_32 *   offset_dash_ptr1180 (    struct Changeset_32 *  x338 ,    int64_t  count340 ) {
    struct Changeset_32  temp1181;
    return ( (struct Changeset_32 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1181 ) ) ) ) ) ) ) ) );
}

static  struct Slice_31   subslice1179 (    struct Slice_31  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Changeset_32 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1180 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp297 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp297 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub296 ( ( (  min506 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_31) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_1174   into_dash_iter1177 (    struct List_30  self2030 ) {
    return ( (  into_dash_iter1178 ) ( ( (  subslice1179 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  struct Drop_1173   drop1176 (    struct List_30  iterable853 ,    size_t  i855 ) {
    struct SliceIter_1174  it856 = ( (  into_dash_iter1177 ) ( (  iterable853 ) ) );
    return ( ( Drop_1173_Drop ) ( (  it856 ) ,  (  i855 ) ) );
}

struct Maybe_1183 {
    enum {
        Maybe_1183_None_t,
        Maybe_1183_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_32  field0;
        } Maybe_1183_Just_s;
    } stuff;
};

static struct Maybe_1183 Maybe_1183_Just (  struct Changeset_32  field0 ) {
    return ( struct Maybe_1183 ) { .tag = Maybe_1183_Just_t, .stuff = { .Maybe_1183_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1183   next1185 (    struct SliceIter_1174 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp297 ( (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1183) { .tag = Maybe_1183_None_t } );
    }
    struct Changeset_32  elem1832 = ( * ( (  offset_dash_ptr1180 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1183_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_1183   next1184 (    struct Drop_1173 *  dref848 ) {
    while ( (  cmp297 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1185 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
        (* dref848 ) .field1 = (  op_dash_sub296 ( ( (* dref848 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1185 ) ( ( & ( (* dref848 ) .field0 ) ) ) );
}

struct env1188 {
    enum CAllocator_10  al3682;
    ;
};

struct envunion1189 {
    enum Unit_8  (*fun) (  struct env1188*  ,    struct Action_25  );
    struct env1188 env;
};

struct SliceIter_1190 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1190   into_dash_iter1193 (    struct Slice_24  self1824 ) {
    return ( (struct SliceIter_1190) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_25 *   offset_dash_ptr1195 (    struct Action_25 *  x338 ,    int64_t  count340 ) {
    struct Action_25  temp1196;
    return ( (struct Action_25 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1196 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1194 (    struct Slice_24  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Action_25 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1195 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp297 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp297 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub296 ( ( (  min506 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_1190   into_dash_iter1192 (    struct List_23  self2030 ) {
    return ( (  into_dash_iter1193 ) ( ( (  subslice1194 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

struct Maybe_1197 {
    enum {
        Maybe_1197_None_t,
        Maybe_1197_Just_t,
    } tag;
    union {
        struct {
            struct Action_25  field0;
        } Maybe_1197_Just_s;
    } stuff;
};

static struct Maybe_1197 Maybe_1197_Just (  struct Action_25  field0 ) {
    return ( struct Maybe_1197 ) { .tag = Maybe_1197_Just_t, .stuff = { .Maybe_1197_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1197   next1198 (    struct SliceIter_1190 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp297 ( (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1197) { .tag = Maybe_1197_None_t } );
    }
    struct Action_25  elem1832 = ( * ( (  offset_dash_ptr1195 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1197_Just ) ( (  elem1832 ) ) );
}

static  enum Unit_8   for_dash_each1187 (    struct List_23  iterable1075 ,   struct envunion1189  fun1077 ) {
    struct SliceIter_1190  temp1191 = ( (  into_dash_iter1192 ) ( (  iterable1075 ) ) );
    struct SliceIter_1190 *  it1078 = ( &temp1191 );
    while ( ( true ) ) {
        struct Maybe_1197  dref1079 = ( (  next1198 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1197_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1197_Just_t ) {
                struct envunion1189  temp1199 = (  fun1077 );
                ( temp1199.fun ( &temp1199.env ,  ( dref1079 .stuff .Maybe_1197_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1201 (    struct Action_25  action3675 ,    enum CAllocator_10  al3677 ) {
    ( (  free509 ) ( ( (  action3675 ) .f_fwd ) ,  (  al3677 ) ) );
    ( (  free509 ) ( ( (  action3675 ) .f_bwd ) ,  (  al3677 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1200 (   struct env1188* env ,    struct Action_25  a3684 ) {
    return ( (  free_dash_action1201 ) ( (  a3684 ) ,  ( env->al3682 ) ) );
}

static  void *   cast_dash_ptr1204 (    struct Action_25 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1203 (    enum CAllocator_10  dref1961 ,    struct Slice_24  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1204 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1202 (    struct List_23 *  list2037 ) {
    ( (  free1203 ) ( ( ( * (  list2037 ) ) .f_al ) ,  ( ( * (  list2037 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1186 (    struct Changeset_32  chs3680 ,    enum CAllocator_10  al3682 ) {
    struct env1188 envinst1188 = {
        .al3682 =  al3682 ,
    };
    ( (  for_dash_each1187 ) ( ( (  chs3680 ) .f_parts ) ,  ( (struct envunion1189){ .fun = (  enum Unit_8  (*) (  struct env1188*  ,    struct Action_25  ) )lam1200 , .env =  envinst1188 } ) ) );
    ( (  free1202 ) ( ( & ( (  chs3680 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1205 (    struct List_30 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min506 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1171 (    struct Actions_115 *  actions3698 ) {
    enum CAllocator_10  al3699 = ( ( ( * (  actions3698 ) ) .f_list ) .f_al );
    size_t  cur3700 = ( ( * (  actions3698 ) ) .f_cur );
    struct Drop_1173  temp1172 =  into_dash_iter1175 ( ( (  drop1176 ) ( ( ( * (  actions3698 ) ) .f_list ) ,  (  cur3700 ) ) ) );
    while (true) {
        struct Maybe_1183  __cond1182 =  next1184 (&temp1172);
        if (  __cond1182 .tag == 0 ) {
            break;
        }
        struct Changeset_32  action3702 =  __cond1182 .stuff .Maybe_1183_Just_s .field0;
        ( (  free_dash_changeset1186 ) ( (  action3702 ) ,  (  al3699 ) ) );
    }
    ( (  trim1205 ) ( ( & ( ( * (  actions3698 ) ) .f_list ) ) ,  (  cur3700 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   clone1206 (    struct StrView_27  s2167 ,    enum CAllocator_10  al2169 ) {
    return ( (  clone_dash_0461 ) ( (  s2167 ) ,  (  al2169 ) ) );
}

static  struct Maybe_94   head1208 (    struct SplitIter_571  it1143 ) {
    struct SplitIter_571  temp1209 = ( (  into_dash_iter578 ) ( (  it1143 ) ) );
    return ( (  next592 ) ( ( &temp1209 ) ) );
}

static  struct Maybe_94   head1211 (    struct Drop_570  it1143 ) {
    struct Drop_570  temp1212 = ( (  into_dash_iter576 ) ( (  it1143 ) ) );
    return ( (  next591 ) ( ( &temp1212 ) ) );
}

static  bool   null1210 (    struct Drop_570  it1152 ) {
    struct Maybe_94  dref1153 = ( (  head1211 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_94_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1214 (    struct StrView_27  errmsg1714 ) {
    ( (  print_dash_str645 ) ( ( ( StrConcat_646_StrConcat ) ( ( ( StrConcat_647_StrConcat ) ( ( (  from_dash_string207 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1714 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_589   undefined1215 (  ) {
    struct Tuple2_589  temp1216;
    return (  temp1216 );
}

static  struct Tuple2_589   or_dash_fail1213 (    struct Maybe_588  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_588  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_588_None_t ) {
        ( (  panic1214 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1215 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_588_Just_t ) {
            return ( dref1730 .stuff .Maybe_588_Just_s .field0 );
        }
    }
}

static  struct Maybe_588   reduce1218 (    struct Zip_569  iterable1094 ,    struct Maybe_588  base1096 ,    struct Maybe_588 (*  fun1098 )(    struct Tuple2_589  ,    struct Maybe_588  ) ) {
    struct Maybe_588  x1099 = (  base1096 );
    struct Zip_569  it1100 = ( (  into_dash_iter574 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_588  dref1101 = ( (  next590 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_588_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_588_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_588_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1219 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1219);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_588  temp1220;
    return (  temp1220 );
}

static  struct Maybe_588   lam1221 (    struct Tuple2_589  e1148 ,    struct Maybe_588  dref1149 ) {
    return ( ( Maybe_588_Just ) ( (  e1148 ) ) );
}

static  struct Maybe_588   last1217 (    struct Zip_569  it1146 ) {
    return ( (  reduce1218 ) ( (  it1146 ) ,  ( (struct Maybe_588) { .tag = Maybe_588_None_t } ) ,  (  lam1221 ) ) );
}

static  int32_t   snd1222 (    struct Tuple2_589  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct StrView_27   fst1223 (    struct Tuple2_589  dref1254 ) {
    return ( dref1254 .field0 );
}

static  struct Pos_26   pos_dash_after_dash_str1207 (    struct TextBuf_114 *  self3816 ,    struct StrView_27  bytes3818 ,    struct Pos_26  from3820 ) {
    struct SplitIter_571  lines3821 = ( (  split_dash_by_dash_each579 ) ( (  bytes3818 ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_27  first_dash_line3822 = ( (  or_dash_else557 ) ( ( (  head1208 ) ( (  lines3821 ) ) ) ,  ( (  from_dash_string207 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_570  headless3823 = ( (  drop577 ) ( (  lines3821 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1210 ) ( (  headless3823 ) ) ) ) {
        struct Pos_26  next_dash_pos3824 = ( (  mk671 ) ( ( (  from3820 ) .f_line ) ,  (  op_dash_add168 ( ( (  from3820 ) .f_bi ) , ( (  size_dash_i32336 ) ( ( (  num_dash_bytes1132 ) ( (  first_dash_line3822 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3824 );
    } else {
        struct Tuple2_589  last_dash_line3825 = ( (  or_dash_fail1213 ) ( ( (  last1217 ) ( ( (  zip575 ) ( (  headless3823 ) ,  ( (  from434 ) ( (  op_dash_add168 ( ( (  from3820 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string207 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk671 ) ( ( (  snd1222 ) ( (  last_dash_line3825 ) ) ) ,  ( (  size_dash_i32336 ) ( ( (  num_dash_bytes1132 ) ( ( (  fst1223 ) ( (  last_dash_line3825 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1229 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   from_dash_charlike1230 (    uint8_t *  ptr77 ,    size_t  count79 ) {
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

struct envunion1238 {
    enum Unit_8  (*fun) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  );
    struct env46 env;
};

static  struct StrView_27   str_dash_between1225 (   struct env134* env ,    struct TextBuf_114 *  self3848 ,    struct Pos_26  from3850 ,    struct Pos_26  to3852 ) {
    enum CAllocator_10  al3853 = ( ( ( * (  self3848 ) ) .f_buf ) .f_al );
    if ( (  eq525 ( ( (  from3850 ) .f_line ) , ( (  to3852 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3854 = ( (  i32_dash_size419 ) ( ( (  min635 ) ( ( (  from3850 ) .f_bi ) ,  ( (  to3852 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3855 = ( (  i32_dash_size419 ) ( ( (  max1112 ) ( ( (  from3850 ) .f_bi ) ,  ( (  to3852 ) .f_bi ) ) ) ) );
        return ( (  clone1206 ) ( ( (  byte_dash_substr518 ) ( ( (  line1099 ) ( (  self3848 ) ,  ( (  from3850 ) .f_line ) ) ) ,  (  from_dash_bi3854 ) ,  (  to_dash_bi3855 ) ) ) ,  (  al3853 ) ) );
    } else {
        struct Pos_26  from_dash_pos3856 = ( (  min521 ) ( (  from3850 ) ,  (  to3852 ) ) );
        struct Pos_26  to_dash_pos3857 = ( (  max523 ) ( (  from3850 ) ,  (  to3852 ) ) );
        struct List_9  temp1226 = ( (  mk446 ) ( (  al3853 ) ) );
        struct List_9 *  sb3858 = ( &temp1226 );
        struct StrView_27  first_dash_line3859 = ( (  line1099 ) ( (  self3848 ) ,  ( (  from_dash_pos3856 ) .f_line ) ) );
        struct envunion135  temp1227 = ( (struct envunion135){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all539 , .env =  env->envinst46 } );
        ( temp1227.fun ( &temp1227.env ,  (  sb3858 ) ,  ( ( (  byte_dash_substr518 ) ( (  first_dash_line3859 ) ,  ( (  i32_dash_size419 ) ( ( (  from_dash_pos3856 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1132 ) ( (  first_dash_line3859 ) ) ) ) ) .f_contents ) ) );
        struct envunion1229  temp1228 = ( (struct envunion1229){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all539 , .env =  env->envinst46 } );
        ( temp1228.fun ( &temp1228.env ,  (  sb3858 ) ,  ( ( ( (  from_dash_charlike1230 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_162  temp1231 =  into_dash_iter163 ( ( (  to172 ) ( (  op_dash_add168 ( ( (  from_dash_pos3856 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  op_dash_sub173 ( ( (  to_dash_pos3857 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_164  __cond1232 =  next165 (&temp1231);
            if (  __cond1232 .tag == 0 ) {
                break;
            }
            int32_t  i3861 =  __cond1232 .stuff .Maybe_164_Just_s .field0;
            struct envunion1234  temp1233 = ( (struct envunion1234){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all539 , .env =  env->envinst46 } );
            ( temp1233.fun ( &temp1233.env ,  (  sb3858 ) ,  ( ( (  line1099 ) ( (  self3848 ) ,  (  i3861 ) ) ) .f_contents ) ) );
            struct envunion1236  temp1235 = ( (struct envunion1236){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all539 , .env =  env->envinst46 } );
            ( temp1235.fun ( &temp1235.env ,  (  sb3858 ) ,  ( ( ( (  from_dash_charlike1230 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1238  temp1237 = ( (struct envunion1238){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all539 , .env =  env->envinst46 } );
        ( temp1237.fun ( &temp1237.env ,  (  sb3858 ) ,  ( ( (  byte_dash_substr518 ) ( ( (  line1099 ) ( (  self3848 ) ,  ( (  to_dash_pos3857 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size419 ) ( ( (  to_dash_pos3857 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes1100 ) ( ( (  to_dash_slice533 ) ( ( * (  sb3858 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1239 (    struct Maybe_214  m1265 ) {
    struct Maybe_214  dref1266 = (  m1265 );
    if ( dref1266.tag == Maybe_214_None_t ) {
        return ( true );
    }
    else {
        if ( dref1266.tag == Maybe_214_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1241 {
    enum ChangesetInputType_116  field0;
    enum ChangesetInputType_116  field1;
};

static struct Tuple2_1241 Tuple2_1241_Tuple2 (  enum ChangesetInputType_116  field0 ,  enum ChangesetInputType_116  field1 ) {
    return ( struct Tuple2_1241 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1240 (    enum ChangesetInputType_116  l3688 ,    enum ChangesetInputType_116  r3690 ) {
    return ( {  struct Tuple2_1241  dref3691 = ( ( Tuple2_1241_Tuple2 ) ( (  l3688 ) ,  (  r3690 ) ) ) ;  dref3691 .field0 == ChangesetInputType_116_NoChangeset &&  dref3691 .field1 == ChangesetInputType_116_NoChangeset ? ( true ) :  dref3691 .field0 == ChangesetInputType_116_InputChangeset &&  dref3691 .field1 == ChangesetInputType_116_InputChangeset ? ( true ) :  dref3691 .field0 == ChangesetInputType_116_CustomChangeset &&  dref3691 .field1 == ChangesetInputType_116_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_32 *   get_dash_ptr1243 (    struct Slice_31  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp297 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_32 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1180 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  struct Changeset_32 *   last_dash_ptr1242 (    struct Slice_31  s1940 ) {
    if ( (  eq406 ( ( (  s1940 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1214 ) ( ( (  from_dash_string207 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1243 ) ( (  s1940 ) ,  (  op_dash_sub296 ( ( (  s1940 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_31   to_dash_slice1244 (    struct List_30  l2128 ) {
    struct Changeset_32 *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_31) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

struct TypeSize_1251 {
    size_t  f_size;
};

static  struct TypeSize_1251   get_dash_typesize1250 (  ) {
    struct Action_25  temp1252;
    return ( (struct TypeSize_1251) { .f_size = ( sizeof( ( (  temp1252 ) ) ) ) } );
}

static  struct Action_25 *   cast_dash_ptr1253 (    void *  p359 ) {
    return ( (struct Action_25 * ) (  p359 ) );
}

static  struct Slice_24   allocate1249 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1250 ) ( ) ) ) .f_size );
    struct Action_25 *  ptr1959 = ( (  cast_dash_ptr1253 ) ( ( ( malloc ) ( (  op_dash_mul412 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1254 {
    ;
    ;
    struct Slice_24  new_dash_slice2044;
};

struct Tuple2_1256 {
    struct Action_25  field0;
    int32_t  field1;
};

static struct Tuple2_1256 Tuple2_1256_Tuple2 (  struct Action_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1256 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1255 {
    enum Unit_8  (*fun) (  struct env1254*  ,    struct Tuple2_1256  );
    struct env1254 env;
};

static  struct Action_25 *   get_dash_ptr1259 (    struct Slice_24  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp297 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_25 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1195 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set1258 (    struct Slice_24  slice1776 ,    size_t  i1778 ,    struct Action_25  x1780 ) {
    struct Action_25 *  ep1781 = ( (  get_dash_ptr1259 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1257 (   struct env1254* env ,    struct Tuple2_1256  dref2045 ) {
    return ( (  set1258 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size419 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct Zip_1261 {
    struct SliceIter_1190  f_left_dash_it;
    struct FromIter_423  f_right_dash_it;
};

static  struct Zip_1261   into_dash_iter1263 (    struct Zip_1261  self912 ) {
    return (  self912 );
}

struct Maybe_1264 {
    enum {
        Maybe_1264_None_t,
        Maybe_1264_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1256  field0;
        } Maybe_1264_Just_s;
    } stuff;
};

static struct Maybe_1264 Maybe_1264_Just (  struct Tuple2_1256  field0 ) {
    return ( struct Maybe_1264 ) { .tag = Maybe_1264_Just_t, .stuff = { .Maybe_1264_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1264   next1265 (    struct Zip_1261 *  self915 ) {
    struct Zip_1261  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_1197  dref917 = ( (  next1198 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_1197_None_t ) {
            return ( (struct Maybe_1264) { .tag = Maybe_1264_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_1197_Just_t ) {
                struct Maybe_164  dref919 = ( (  next429 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_1264) { .tag = Maybe_1264_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next1198 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next429 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1264_Just ) ( ( ( Tuple2_1256_Tuple2 ) ( ( dref917 .stuff .Maybe_1197_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1260 (    struct Zip_1261  iterable1075 ,   struct envunion1255  fun1077 ) {
    struct Zip_1261  temp1262 = ( (  into_dash_iter1263 ) ( (  iterable1075 ) ) );
    struct Zip_1261 *  it1078 = ( &temp1262 );
    while ( ( true ) ) {
        struct Maybe_1264  dref1079 = ( (  next1265 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1264_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1264_Just_t ) {
                struct envunion1255  temp1266 = (  fun1077 );
                ( temp1266.fun ( &temp1266.env ,  ( dref1079 .stuff .Maybe_1264_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1261   zip1267 (    struct Slice_24  left923 ,    struct FromIter_423  right925 ) {
    struct SliceIter_1190  left_dash_it926 = ( (  into_dash_iter1193 ) ( (  left923 ) ) );
    struct FromIter_423  right_dash_it927 = ( (  into_dash_iter433 ) ( (  right925 ) ) );
    return ( (struct Zip_1261) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1248 (   struct env3* env ,    struct List_23 *  list2043 ) {
    if ( (  eq406 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1249 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq406 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2044 = ( (  allocate1249 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul412 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1254 envinst1254 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1255  fun2048 = ( (struct envunion1255){ .fun = (  enum Unit_8  (*) (  struct env1254*  ,    struct Tuple2_1256  ) )lam1257 , .env =  envinst1254 } );
            ( (  for_dash_each1260 ) ( ( (  zip1267 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free1203 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1246 (   struct env21* env ,    struct List_23 *  list2051 ,    struct Action_25  elem2053 ) {
    struct envunion22  temp1247 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1248 , .env =  env->envinst3 } );
    ( temp1247.fun ( &temp1247.env ,  (  list2051 ) ) );
    ( (  set1258 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add318 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1274 (    struct Action_25 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1275 (    struct Action_25 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_25 *   zeroed1272 (  ) {
    struct Action_25 *  temp1273;
    struct Action_25 *  x571 = (  temp1273 );
    ( ( memset ) ( ( (  cast_dash_ptr1274 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of1275 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct Action_25 *   null_dash_ptr1271 (  ) {
    return ( (  zeroed1272 ) ( ) );
}

static  struct Slice_24   empty1270 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr1271 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk1269 (    enum CAllocator_10  al2033 ) {
    struct Slice_24  elements2034 = ( (  empty1270 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2033 ) , .f_elements = (  elements2034 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_33   or_dash_else1276 (    struct Maybe_214  self1734 ,    struct Cursors_33  alt1736 ) {
    struct Maybe_214  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_214_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_214_Just_t ) {
            return ( dref1737 .stuff .Maybe_214_Just_s .field0 );
        }
    }
}

struct envunion1278 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  );
    struct env21 env;
};

struct TypeSize_1285 {
    size_t  f_size;
};

static  struct TypeSize_1285   get_dash_typesize1284 (  ) {
    struct Changeset_32  temp1286;
    return ( (struct TypeSize_1285) { .f_size = ( sizeof( ( (  temp1286 ) ) ) ) } );
}

static  struct Changeset_32 *   cast_dash_ptr1287 (    void *  p359 ) {
    return ( (struct Changeset_32 * ) (  p359 ) );
}

static  struct Slice_31   allocate1283 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1284 ) ( ) ) ) .f_size );
    struct Changeset_32 *  ptr1959 = ( (  cast_dash_ptr1287 ) ( ( ( malloc ) ( (  op_dash_mul412 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_31) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1288 {
    ;
    ;
    struct Slice_31  new_dash_slice2044;
};

struct Tuple2_1290 {
    struct Changeset_32  field0;
    int32_t  field1;
};

static struct Tuple2_1290 Tuple2_1290_Tuple2 (  struct Changeset_32  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1290 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1289 {
    enum Unit_8  (*fun) (  struct env1288*  ,    struct Tuple2_1290  );
    struct env1288 env;
};

static  enum Unit_8   set1292 (    struct Slice_31  slice1776 ,    size_t  i1778 ,    struct Changeset_32  x1780 ) {
    struct Changeset_32 *  ep1781 = ( (  get_dash_ptr1243 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1291 (   struct env1288* env ,    struct Tuple2_1290  dref2045 ) {
    return ( (  set1292 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size419 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct Zip_1294 {
    struct SliceIter_1174  f_left_dash_it;
    struct FromIter_423  f_right_dash_it;
};

static  struct Zip_1294   into_dash_iter1296 (    struct Zip_1294  self912 ) {
    return (  self912 );
}

struct Maybe_1297 {
    enum {
        Maybe_1297_None_t,
        Maybe_1297_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1290  field0;
        } Maybe_1297_Just_s;
    } stuff;
};

static struct Maybe_1297 Maybe_1297_Just (  struct Tuple2_1290  field0 ) {
    return ( struct Maybe_1297 ) { .tag = Maybe_1297_Just_t, .stuff = { .Maybe_1297_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1297   next1298 (    struct Zip_1294 *  self915 ) {
    struct Zip_1294  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_1183  dref917 = ( (  next1185 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_1183_None_t ) {
            return ( (struct Maybe_1297) { .tag = Maybe_1297_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_1183_Just_t ) {
                struct Maybe_164  dref919 = ( (  next429 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_1297) { .tag = Maybe_1297_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next1185 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next429 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1297_Just ) ( ( ( Tuple2_1290_Tuple2 ) ( ( dref917 .stuff .Maybe_1183_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1293 (    struct Zip_1294  iterable1075 ,   struct envunion1289  fun1077 ) {
    struct Zip_1294  temp1295 = ( (  into_dash_iter1296 ) ( (  iterable1075 ) ) );
    struct Zip_1294 *  it1078 = ( &temp1295 );
    while ( ( true ) ) {
        struct Maybe_1297  dref1079 = ( (  next1298 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_1297_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_1297_Just_t ) {
                struct envunion1289  temp1299 = (  fun1077 );
                ( temp1299.fun ( &temp1299.env ,  ( dref1079 .stuff .Maybe_1297_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1294   zip1300 (    struct Slice_31  left923 ,    struct FromIter_423  right925 ) {
    struct SliceIter_1174  left_dash_it926 = ( (  into_dash_iter1178 ) ( (  left923 ) ) );
    struct FromIter_423  right_dash_it927 = ( (  into_dash_iter433 ) ( (  right925 ) ) );
    return ( (struct Zip_1294) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  void *   cast_dash_ptr1302 (    struct Changeset_32 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1301 (    enum CAllocator_10  dref1961 ,    struct Slice_31  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1302 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1282 (   struct env4* env ,    struct List_30 *  list2043 ) {
    if ( (  eq406 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1283 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq406 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_31  new_dash_slice2044 = ( (  allocate1283 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul412 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1288 envinst1288 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1289  fun2048 = ( (struct envunion1289){ .fun = (  enum Unit_8  (*) (  struct env1288*  ,    struct Tuple2_1290  ) )lam1291 , .env =  envinst1288 } );
            ( (  for_dash_each1293 ) ( ( (  zip1300 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free1301 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1280 (   struct env28* env ,    struct List_30 *  list2051 ,    struct Changeset_32  elem2053 ) {
    struct envunion29  temp1281 = ( (struct envunion29){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_30 *  ) )grow_dash_if_dash_full1282 , .env =  env->envinst4 } );
    ( temp1281.fun ( &temp1281.env ,  (  list2051 ) ) );
    ( (  set1292 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add318 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_26   action_dash_fwd1304 (   struct env128* env ,    struct TextBuf_114 *  self3811 ,    struct Action_25  action3813 ) {
    struct envunion129  temp1305 = ( (struct envunion129){ .fun = (  enum Unit_8  (*) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action520 , .env =  env->envinst110 } );
    ( temp1305.fun ( &temp1305.env ,  (  self3811 ) ,  ( (  action3813 ) .f_from ) ,  ( (  action3813 ) .f_to_dash_bwd ) ,  ( (  action3813 ) .f_fwd ) ) );
    return ( (  action3813 ) .f_to_dash_fwd );
}

static  struct Maybe_214   change1170 (   struct env136* env ,    struct TextBuf_114 *  self3878 ,    struct Pos_26  from3880 ,    struct Pos_26  to3882 ,    struct StrView_27  bytes3884 ,    struct Maybe_214  before_dash_cursors3886 ) {
    struct Pos_26  from_dash_pos3887 = ( (  min521 ) ( (  from3880 ) ,  (  to3882 ) ) );
    struct Pos_26  to_dash_pos3888 = ( (  max523 ) ( (  from3880 ) ,  (  to3882 ) ) );
    struct Actions_115 *  actions3889 = ( & ( ( * (  self3878 ) ) .f_actions ) );
    ( (  trim_dash_actions1171 ) ( (  actions3889 ) ) );
    struct envunion139  temp1224 = ( (struct envunion139){ .fun = (  struct StrView_27  (*) (  struct env134*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1225 , .env =  env->envinst134 } );
    struct Action_25  action3890 = ( (struct Action_25) { .f_from = (  from3880 ) , .f_fwd = ( (  clone1206 ) ( (  bytes3884 ) ,  ( ( * (  self3878 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1207 ) ( (  self3878 ) ,  (  bytes3884 ) ,  (  from_dash_pos3887 ) ) ) , .f_bwd = ( temp1224.fun ( &temp1224.env ,  (  self3878 ) ,  (  from_dash_pos3887 ) ,  (  to_dash_pos3888 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3888 ) } );
    enum CAllocator_10  al3891 = ( ( ( * (  actions3889 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3892 = ( (  is_dash_none1239 ) ( (  before_dash_cursors3886 ) ) );
    if ( ( (  eq1240 ( ( ( ( * (  self3878 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_116_CustomChangeset ) ) ) || ( (  eq1240 ( ( ( ( * (  self3878 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_116_InputChangeset ) ) ) && (  is_dash_typed_dash_in3892 ) ) ) ) {
        struct Changeset_32 *  last_dash_changeset3893 = ( (  last_dash_ptr1242 ) ( ( (  to_dash_slice1244 ) ( ( ( * (  actions3889 ) ) .f_list ) ) ) ) );
        struct envunion137  temp1245 = ( (struct envunion137){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1246 , .env =  env->envinst21 } );
        ( temp1245.fun ( &temp1245.env ,  ( & ( ( * (  last_dash_changeset3893 ) ) .f_parts ) ) ,  (  action3890 ) ) );
    } else {
        struct Changeset_32  temp1268 = ( (struct Changeset_32) { .f_parts = ( (  mk1269 ) ( (  al3891 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1276 ) ( (  before_dash_cursors3886 ) ,  ( (struct Cursors_33) { .f_cur = (  from3880 ) , .f_sel = ( (  eq524 ( (  from3880 ) , (  to3882 ) ) ) ? ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) : ( ( Maybe_34_Just ) ( (  to3882 ) ) ) ) } ) ) ) } );
        struct Changeset_32 *  changeset3894 = ( &temp1268 );
        struct envunion1278  temp1277 = ( (struct envunion1278){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Action_25  ) )add1246 , .env =  env->envinst21 } );
        ( temp1277.fun ( &temp1277.env ,  ( & ( ( * (  changeset3894 ) ) .f_parts ) ) ,  (  action3890 ) ) );
        struct envunion138  temp1279 = ( (struct envunion138){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1280 , .env =  env->envinst28 } );
        ( temp1279.fun ( &temp1279.env ,  ( & ( ( * (  actions3889 ) ) .f_list ) ) ,  ( * (  changeset3894 ) ) ) );
        (*  actions3889 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3892 ) ? ( ChangesetInputType_116_InputChangeset ) : ( ChangesetInputType_116_NoChangeset ) );
        (*  actions3889 ) .f_cur = (  op_dash_add318 ( ( ( * (  actions3889 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion140  temp1303 = ( (struct envunion140){ .fun = (  struct Pos_26  (*) (  struct env128*  ,    struct TextBuf_114 *  ,    struct Action_25  ) )action_dash_fwd1304 , .env =  env->envinst128 } );
    struct Pos_26  to_dash_fwd3895 = ( temp1303.fun ( &temp1303.env ,  (  self3878 ) ,  (  action3890 ) ) );
    if ( (  cmp297 ( ( (  num_dash_bytes1132 ) ( ( (  action3890 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3896 = ( (  left_dash_pos1131 ) ( (  self3878 ) ,  (  to_dash_fwd3895 ) ) );
        return ( ( Maybe_214_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3896 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  action3890 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_214_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3895 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1168 (   struct env212* env ,    struct Pane_227 *  self4265 ,    struct StrView_27  s4267 ) {
    struct Pos_26  cur4268 = ( ( * (  self4265 ) ) .f_cursor );
    struct envunion213  temp1169 = ( (struct envunion213){ .fun = (  struct Maybe_214  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_214  ) )change1170 , .env =  env->envinst136 } );
    ( temp1169.fun ( &temp1169.env ,  ( ( * (  self4265 ) ) .f_buf ) ,  (  cur4268 ) ,  (  cur4268 ) ,  (  s4267 ) ,  ( (struct Maybe_214) { .tag = Maybe_214_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1311 (   struct env223* env ,    struct Pane_227 *  self4303 ,    int32_t  line4305 ) {
    struct envunion224  temp1312 = ( (struct envunion224){ .fun = (  struct Maybe_214  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_214  ) )change1170 , .env =  env->envinst136 } );
    ( temp1312.fun ( &temp1312.env ,  ( ( * (  self4303 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4305 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4305 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (  from_dash_charlike1230 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_214) { .tag = Maybe_214_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1307 (   struct env234* env ,    struct Pane_227 *  self4324 ,    int32_t  indent4326 ) {
    struct RangeIter_162  temp1308 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  (  indent4326 ) ) ) );
    while (true) {
        struct Maybe_164  __cond1309 =  next165 (&temp1308);
        if (  __cond1309 .tag == 0 ) {
            break;
        }
        int32_t  dref4327 =  __cond1309 .stuff .Maybe_164_Just_s .field0;
        struct envunion235  temp1310 = ( (struct envunion235){ .fun = (  enum Unit_8  (*) (  struct env223*  ,    struct Pane_227 *  ,    int32_t  ) )indent_dash_at1311 , .env =  env->envinst223 } );
        ( temp1310.fun ( &temp1310.env ,  (  self4324 ) ,  ( ( ( * (  self4324 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1137 ) ( (  self4324 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1313 (    struct Pane_227 *  self4244 ) {
    struct Pos_26  temp1314 = ( ( * (  self4244 ) ) .f_cursor );
    temp1314 .  f_bi = (  from_dash_integral67 ( 0 ) );
    ( (  set_dash_cursors1093 ) ( (  self4244 ) ,  ( temp1314 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1316 {
    enum Unit_8  (*fun) (  struct env212*  ,    struct Pane_227 *  ,    struct StrView_27  );
    struct env212 env;
};

struct envunion1318 {
    enum Unit_8  (*fun) (  struct env234*  ,    struct Pane_227 *  ,    int32_t  );
    struct env234 env;
};

enum MoveDirection_1320 {
    MoveDirection_1320_MoveFwd,
    MoveDirection_1320_MoveBwd,
};

enum MoveTarget_1321 {
    MoveTarget_1321_NextWordStart,
    MoveTarget_1321_NextWordEnd,
};

static  struct Pos_26   own1323 (    struct Pos_26  x1252 ) {
    return (  x1252 );
}

struct env1324 {
    struct Pos_26 *  prev4210;
    ;
    ;
    struct Pane_227 *  pane4205;
    enum MoveDirection_1320  dir4207;
};

static  bool   is_dash_at_dash_line_dash_end1326 (    struct Pane_227 *  pane4187 ,    struct Pos_26  pos4189 ) {
    return (  eq406 ( ( (  i32_dash_size419 ) ( ( (  pos4189 ) .f_bi ) ) ) , ( (  num_dash_bytes1132 ) ( ( (  line1099 ) ( ( ( * (  pane4187 ) ) .f_buf ) ,  ( (  pos4189 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1325 (    struct Pane_227 *  pane4192 ) {
    return ( (  is_dash_at_dash_line_dash_end1326 ) ( (  pane4192 ) ,  ( ( * (  pane4192 ) ) .f_cursor ) ) );
}

struct envunion1328 {
    enum Unit_8  (*fun) (  struct env1324*  );
    struct env1324 env;
};

static  enum Unit_8   advance1329 (   struct env1324* env ) {
    (* env->prev4210 ) = ( ( * ( env->pane4205 ) ) .f_cursor );
    enum MoveDirection_1320  dref4212 = ( env->dir4207 );
    switch (  dref4212 ) {
        case MoveDirection_1320_MoveFwd : {
            ( (  move_dash_right1137 ) ( ( env->pane4205 ) ) );
            break;
        }
        case MoveDirection_1320_MoveBwd : {
            ( (  move_dash_left1092 ) ( ( env->pane4205 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1333 {
    CharType_1333_CharSpace,
    CharType_1333_CharWord,
    CharType_1333_CharPunctuation,
};

struct Tuple2_1334 {
    enum CharType_1333  field0;
    enum CharType_1333  field1;
};

static struct Tuple2_1334 Tuple2_1334_Tuple2 (  enum CharType_1333  field0 ,  enum CharType_1333  field1 ) {
    return ( struct Tuple2_1334 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1332 (    enum CharType_1333  l3654 ,    enum CharType_1333  r3656 ) {
    struct Tuple2_1334  dref3657 = ( ( Tuple2_1334_Tuple2 ) ( (  l3654 ) ,  (  r3656 ) ) );
    if (  dref3657 .field0 == CharType_1333_CharSpace &&  dref3657 .field1 == CharType_1333_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3657 .field0 == CharType_1333_CharWord &&  dref3657 .field1 == CharType_1333_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3657 .field0 == CharType_1333_CharPunctuation &&  dref3657 .field1 == CharType_1333_CharPunctuation ) {
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

static  struct Char_65   min1339 (    struct Char_65  l1237 ,    struct Char_65  r1239 ) {
    if ( (  cmp942 ( (  l1237 ) , (  r1239 ) ) == 0 ) ) {
        return (  l1237 );
    } else {
        return (  r1239 );
    }
}

static  struct Char_65   max1340 (    struct Char_65  l1316 ,    struct Char_65  r1318 ) {
    if ( (  cmp942 ( (  l1316 ) , (  r1318 ) ) == 2 ) ) {
        return (  l1316 );
    } else {
        return (  r1318 );
    }
}

static  bool   between1338 (    struct Char_65  c1338 ,    struct Char_65  l1340 ,    struct Char_65  r1342 ) {
    struct Char_65  from1343 = ( (  min1339 ) ( (  l1340 ) ,  (  r1342 ) ) );
    struct Char_65  to1344 = ( (  max1340 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp942 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp942 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  bool   is_dash_alpha1337 (    struct Char_65  c2393 ) {
    return ( ( (  cmp297 ( ( (  c2393 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1338 ) ( (  c2393 ) ,  ( (  from_dash_charlike353 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1338 ) ( (  c2393 ) ,  ( (  from_dash_charlike353 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1341 (    struct Char_65  c2396 ) {
    return ( (  eq406 ( ( (  c2396 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1338 ) ( (  c2396 ) ,  ( (  from_dash_charlike353 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1336 (    struct Char_65  c2408 ) {
    return ( ( (  is_dash_alpha1337 ) ( (  c2408 ) ) ) || ( (  is_dash_digit1341 ) ( (  c2408 ) ) ) );
}

static  bool   is_dash_whitespace1342 (    struct Char_65  c2384 ) {
    return ( ( (  eq582 ( (  c2384 ) , ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq582 ( (  c2384 ) , ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq582 ( (  c2384 ) , ( (  from_dash_charlike353 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1333   char_dash_type1335 (    struct Char_65  c3660 ) {
    if ( ( ( ( (  is_dash_alphanumeric1336 ) ( (  c3660 ) ) ) || (  eq582 ( (  c3660 ) , ( (  from_dash_charlike353 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq582 ( (  c3660 ) , ( (  from_dash_charlike353 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1333_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1342 ) ( (  c3660 ) ) ) ) {
            return ( CharType_1333_CharSpace );
        } else {
            return ( CharType_1333_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1331 (    struct Char_65  l3663 ,    struct Char_65  r3665 ) {
    return ( !  eq1332 ( ( (  char_dash_type1335 ) ( (  l3663 ) ) ) , ( (  char_dash_type1335 ) ( (  r3665 ) ) ) ) );
}

static  struct Char_65   or_dash_else1344 (    struct Maybe_304  self1734 ,    struct Char_65  alt1736 ) {
    struct Maybe_304  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_304_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_304_Just_t ) {
            return ( dref1737 .stuff .Maybe_304_Just_s .field0 );
        }
    }
}

static  struct Maybe_304   head1345 (    struct StrViewIter_62  it1143 ) {
    struct StrViewIter_62  temp1346 = ( (  into_dash_iter786 ) ( (  it1143 ) ) );
    return ( (  next688 ) ( ( &temp1346 ) ) );
}

static  struct Char_65   char_dash_at1343 (    struct Pane_227 *  pane4059 ,    struct Pos_26  pos4061 ) {
    struct StrView_27  line4062 = ( (  line1099 ) ( ( ( * (  pane4059 ) ) .f_buf ) ,  ( (  pos4061 ) .f_line ) ) );
    return ( (  or_dash_else1344 ) ( ( (  head1345 ) ( ( (  chars700 ) ( ( (  byte_dash_substr518 ) ( (  line4062 ) ,  ( (  i32_dash_size419 ) ( ( (  pos4061 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1132 ) ( (  line4062 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_8   print1348 (    struct StrView_27  s1703 ) {
    ( (  for_dash_each784 ) ( ( (  chars700 ) ( (  s1703 ) ) ) ,  (  printf_dash_char343 ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1349 (  ) {
    bool  temp1350;
    return (  temp1350 );
}

static  bool   todo1347 (  ) {
    ( (  print1348 ) ( ( (  from_dash_string207 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1349 ) ( ) );
}

static  bool   reached_dash_target1330 (    struct Pane_227 *  pane4197 ,    enum MoveTarget_1321  target4199 ,    struct Pos_26  prev4201 ) {
    return ( {  enum MoveTarget_1321  dref4202 = (  target4199 ) ;  dref4202 == MoveTarget_1321_NextWordStart ? ( ( (  is_dash_word_dash_boundary1331 ) ( ( (  char_dash_at1343 ) ( (  pane4197 ) ,  (  prev4201 ) ) ) ,  ( (  char_dash_at1343 ) ( (  pane4197 ) ,  ( ( * (  pane4197 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1332 ( ( (  char_dash_type1335 ) ( ( (  char_dash_at1343 ) ( (  pane4197 ) ,  ( ( * (  pane4197 ) ) .f_cursor ) ) ) ) ) , ( CharType_1333_CharSpace ) ) ) ) ) :  dref4202 == MoveTarget_1321_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1331 ) ( ( (  char_dash_at1343 ) ( (  pane4197 ) ,  (  prev4201 ) ) ) ,  ( (  char_dash_at1343 ) ( (  pane4197 ) ,  ( ( * (  pane4197 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1332 ( ( (  char_dash_type1335 ) ( ( (  char_dash_at1343 ) ( (  pane4197 ) ,  (  prev4201 ) ) ) ) ) , ( CharType_1333_CharSpace ) ) ) ) ) : ( (  todo1347 ) ( ) ) ; } );
}

struct envunion1352 {
    enum Unit_8  (*fun) (  struct env1324*  );
    struct env1324 env;
};

struct envunion1354 {
    enum Unit_8  (*fun) (  struct env1324*  );
    struct env1324 env;
};

static  enum Unit_8   advance_dash_word1319 (    struct Pane_227 *  pane4205 ,    enum MoveDirection_1320  dir4207 ,    enum MoveTarget_1321  target4209 ) {
    struct Pos_26  temp1322 = ( (  own1323 ) ( ( ( * (  pane4205 ) ) .f_cursor ) ) );
    struct Pos_26 *  prev4210 = ( &temp1322 );
    struct env1324 envinst1324 = {
        .prev4210 =  prev4210 ,
        .pane4205 =  pane4205 ,
        .dir4207 =  dir4207 ,
    };
    struct Pos_26  sel4213 = ( ( * (  pane4205 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4214 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1325 ) ( (  pane4205 ) ) );
    struct envunion1328  temp1327 = ( (struct envunion1328){ .fun = (  enum Unit_8  (*) (  struct env1324*  ) )advance1329 , .env =  envinst1324 } );
    ( temp1327.fun ( &temp1327.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4214 ) || ( (  reached_dash_target1330 ) ( (  pane4205 ) ,  (  target4209 ) ,  ( * (  prev4210 ) ) ) ) ) ) {
        sel4213 = ( ( * (  pane4205 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1325 ) ( (  pane4205 ) ) ) ) {
        if ( (  eq524 ( ( ( * (  pane4205 ) ) .f_cursor ) , ( * (  prev4210 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1352  temp1351 = ( (struct envunion1352){ .fun = (  enum Unit_8  (*) (  struct env1324*  ) )advance1329 , .env =  envinst1324 } );
        ( temp1351.fun ( &temp1351.env ) );
        sel4213 = ( ( * (  pane4205 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1354  temp1353 = ( (struct envunion1354){ .fun = (  enum Unit_8  (*) (  struct env1324*  ) )advance1329 , .env =  envinst1324 } );
        ( temp1353.fun ( &temp1353.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1325 ) ( (  pane4205 ) ) ) || ( (  reached_dash_target1330 ) ( (  pane4205 ) ,  (  target4209 ) ,  ( * (  prev4210 ) ) ) ) ) ) {
            enum MoveDirection_1320  dref4215 = (  dir4207 );
            switch (  dref4215 ) {
                case MoveDirection_1320_MoveFwd : {
                    ( (  move_dash_left1092 ) ( (  pane4205 ) ) );
                    break;
                }
                case MoveDirection_1320_MoveBwd : {
                    ( (  move_dash_right1137 ) ( (  pane4205 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq524 ( ( * (  prev4210 ) ) , ( ( * (  pane4205 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1128 ) ( (  pane4205 ) ,  ( ( Maybe_34_Just ) ( (  sel4213 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1359 (    struct List_30 *  l2135 ) {
    return ( ( * (  l2135 ) ) .f_count );
}

static  struct Changeset_32 *   get_dash_ptr1362 (    struct List_30 *  list2003 ,    size_t  i2005 ) {
    if ( ( (  cmp297 ( (  i2005 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2005 ) , ( ( * (  list2003 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2005 ) ) ) ,  ( (  from_dash_string207 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2003 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1243 ) ( ( ( * (  list2003 ) ) .f_elements ) ,  (  i2005 ) ) );
}

static  struct Changeset_32   get1361 (    struct List_30 *  list2013 ,    size_t  i2015 ) {
    return ( * ( (  get_dash_ptr1362 ) ( (  list2013 ) ,  (  i2015 ) ) ) );
}

static  struct Changeset_32   elem_dash_get1360 (    struct List_30  self2083 ,    size_t  k2085 ) {
    return ( (  get1361 ) ( ( & (  self2083 ) ) ,  (  k2085 ) ) );
}

static  struct Action_25   undefined1371 (  ) {
    struct Action_25  temp1372;
    return (  temp1372 );
}

static  struct Action_25   or_dash_fail1370 (    struct Maybe_1197  x1727 ,    struct StrConcat_328  errmsg1729 ) {
    struct Maybe_1197  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1197_None_t ) {
        ( (  panic330 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1371 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1197_Just_t ) {
            return ( dref1730 .stuff .Maybe_1197_Just_s .field0 );
        }
    }
}

static  struct Maybe_1197   try_dash_get1373 (    struct Slice_24  slice1765 ,    size_t  i1767 ) {
    if ( ( (  cmp297 ( (  i1767 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1767 ) , ( (  slice1765 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1197) { .tag = Maybe_1197_None_t } );
    }
    struct Action_25 *  elem_dash_ptr1768 = ( (  offset_dash_ptr1195 ) ( ( (  slice1765 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1767 ) ) ) ) );
    return ( ( Maybe_1197_Just ) ( ( * (  elem_dash_ptr1768 ) ) ) );
}

static  struct Action_25   get1369 (    struct Slice_24  slice1771 ,    size_t  i1773 ) {
    return ( (  or_dash_fail1370 ) ( ( (  try_dash_get1373 ) ( (  slice1771 ) ,  (  i1773 ) ) ) ,  ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1773 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1771 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_25   elem_dash_get1368 (    struct Slice_24  self1869 ,    size_t  idx1871 ) {
    return ( (  get1369 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  struct Action_25   last1367 (    struct Slice_24  s1937 ) {
    if ( (  eq406 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1214 ) ( ( (  from_dash_string207 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1368 ( (  s1937 ) , (  op_dash_sub296 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1374 (    struct List_23  l2128 ) {
    struct Action_25 *  ptr2129 = ( ( (  l2128 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2129 ) , .f_count = ( (  l2128 ) .f_count ) } );
}

static  struct Maybe_214   redo1358 (   struct env132* env ,    struct TextBuf_114 *  self3838 ) {
    ( (  flush_dash_insert_dash_action1146 ) ( (  self3838 ) ) );
    struct Actions_115 *  actions3839 = ( & ( ( * (  self3838 ) ) .f_actions ) );
    if ( (  cmp297 ( ( ( * (  actions3839 ) ) .f_cur ) , ( (  size1359 ) ( ( & ( ( * (  actions3839 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_214) { .tag = Maybe_214_None_t } );
    }
    struct Changeset_32  changeset3840 = (  elem_dash_get1360 ( ( ( * (  actions3839 ) ) .f_list ) , ( ( * (  actions3839 ) ) .f_cur ) ) );
    struct Pos_26  temp1363;
    struct Pos_26  to_dash_fwd3841 = (  temp1363 );
    struct SliceIter_1190  temp1364 =  into_dash_iter1192 ( ( (  changeset3840 ) .f_parts ) );
    while (true) {
        struct Maybe_1197  __cond1365 =  next1198 (&temp1364);
        if (  __cond1365 .tag == 0 ) {
            break;
        }
        struct Action_25  action3843 =  __cond1365 .stuff .Maybe_1197_Just_s .field0;
        struct envunion133  temp1366 = ( (struct envunion133){ .fun = (  struct Pos_26  (*) (  struct env128*  ,    struct TextBuf_114 *  ,    struct Action_25  ) )action_dash_fwd1304 , .env =  env->envinst128 } );
        to_dash_fwd3841 = ( temp1366.fun ( &temp1366.env ,  (  self3838 ) ,  (  action3843 ) ) );
    }
    (*  actions3839 ) .f_cur = (  op_dash_add318 ( ( ( * (  actions3839 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_25  last_dash_action3844 = ( (  last1367 ) ( ( (  to_dash_slice1374 ) ( ( (  changeset3840 ) .f_parts ) ) ) ) );
    if ( (  cmp297 ( ( (  num_dash_bytes1132 ) ( ( (  last_dash_action3844 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_26  to_dash_fwd3845 = ( (  left_dash_pos1131 ) ( (  self3838 ) ,  (  to_dash_fwd3841 ) ) );
        return ( ( Maybe_214_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3845 ) , .f_sel = ( ( Maybe_34_Just ) ( ( (  last_dash_action3844 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_214_Just ) ( ( (struct Cursors_33) { .f_cur = (  to_dash_fwd3841 ) , .f_sel = ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) } ) ) );
    }
}

struct env1376 {
    ;
    struct Pane_227 *  self4281;
};

struct envunion1377 {
    enum Unit_8  (*fun) (  struct env1376*  ,    struct Cursors_33  );
    struct env1376 env;
};

static  enum Unit_8   if_dash_just1375 (    struct Maybe_214  x1292 ,   struct envunion1377  fun1294 ) {
    struct Maybe_214  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_214_Just_t ) {
        struct envunion1377  temp1378 = (  fun1294 );
        ( temp1378.fun ( &temp1378.env ,  ( dref1295 .stuff .Maybe_214_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_214_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1379 (   struct env1376* env ,    struct Cursors_33  cursors4284 ) {
    ( (  set_dash_cursors1093 ) ( ( env->self4281 ) ,  ( (  cursors4284 ) .f_cur ) ,  ( (  cursors4284 ) .f_sel ) ,  ( CursorMovement_1094_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1356 (   struct env219* env ,    struct Pane_227 *  self4281 ) {
    struct envunion220  temp1357 = ( (struct envunion220){ .fun = (  struct Maybe_214  (*) (  struct env132*  ,    struct TextBuf_114 *  ) )redo1358 , .env =  env->envinst132 } );
    struct Maybe_214  mcursors4282 = ( temp1357.fun ( &temp1357.env ,  ( ( * (  self4281 ) ) .f_buf ) ) );
    struct env1376 envinst1376 = {
        .self4281 =  self4281 ,
    };
    ( (  if_dash_just1375 ) ( (  mcursors4282 ) ,  ( (struct envunion1377){ .fun = (  enum Unit_8  (*) (  struct env1376*  ,    struct Cursors_33  ) )lam1379 , .env =  envinst1376 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1385 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1385   into_dash_iter1386 (    struct SliceReversedIter_1385  self1900 ) {
    return (  self1900 );
}

static  struct SliceReversedIter_1385   reversed1387 (    struct Slice_24  slice1897 ) {
    return ( (struct SliceReversedIter_1385) { .f_slice = (  slice1897 ) , .f_current_dash_offset = ( (  slice1897 ) .f_count ) } );
}

static  struct Maybe_1197   next1389 (    struct SliceReversedIter_1385 *  self1903 ) {
    size_t  off1904 = ( ( * (  self1903 ) ) .f_current_dash_offset );
    if ( (  eq406 ( (  off1904 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1197) { .tag = Maybe_1197_None_t } );
    }
    (*  self1903 ) .f_current_dash_offset = (  op_dash_sub296 ( (  off1904 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1197_Just ) ( (  elem_dash_get1368 ( ( ( * (  self1903 ) ) .f_slice ) , ( ( * (  self1903 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_26   action_dash_bwd1391 (   struct env126* env ,    struct TextBuf_114 *  self3806 ,    struct Action_25  action3808 ) {
    struct envunion127  temp1392 = ( (struct envunion127){ .fun = (  enum Unit_8  (*) (  struct env110*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ) )change_dash_no_dash_action520 , .env =  env->envinst110 } );
    ( temp1392.fun ( &temp1392.env ,  (  self3806 ) ,  ( (  action3808 ) .f_from ) ,  ( (  action3808 ) .f_to_dash_fwd ) ,  ( (  action3808 ) .f_bwd ) ) );
    return ( (  action3808 ) .f_to_dash_bwd );
}

static  struct Maybe_214   undo1383 (   struct env130* env ,    struct TextBuf_114 *  self3831 ) {
    ( (  flush_dash_insert_dash_action1146 ) ( (  self3831 ) ) );
    struct Actions_115 *  actions3832 = ( & ( ( * (  self3831 ) ) .f_actions ) );
    if ( (  eq406 ( ( ( * (  actions3832 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_214) { .tag = Maybe_214_None_t } );
    }
    (*  actions3832 ) .f_cur = (  op_dash_sub296 ( ( ( * (  actions3832 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_32  changeset3833 = (  elem_dash_get1360 ( ( ( * (  actions3832 ) ) .f_list ) , ( ( * (  actions3832 ) ) .f_cur ) ) );
    struct SliceReversedIter_1385  temp1384 =  into_dash_iter1386 ( ( (  reversed1387 ) ( ( (  to_dash_slice1374 ) ( ( (  changeset3833 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1197  __cond1388 =  next1389 (&temp1384);
        if (  __cond1388 .tag == 0 ) {
            break;
        }
        struct Action_25  action3835 =  __cond1388 .stuff .Maybe_1197_Just_s .field0;
        struct envunion131  temp1390 = ( (struct envunion131){ .fun = (  struct Pos_26  (*) (  struct env126*  ,    struct TextBuf_114 *  ,    struct Action_25  ) )action_dash_bwd1391 , .env =  env->envinst126 } );
        ( temp1390.fun ( &temp1390.env ,  (  self3831 ) ,  (  action3835 ) ) );
    }
    return ( ( Maybe_214_Just ) ( ( (  changeset3833 ) .f_before_dash_cursors ) ) );
}

struct env1394 {
    ;
    struct Pane_227 *  self4275;
};

struct envunion1395 {
    enum Unit_8  (*fun) (  struct env1394*  ,    struct Cursors_33  );
    struct env1394 env;
};

static  enum Unit_8   if_dash_just1393 (    struct Maybe_214  x1292 ,   struct envunion1395  fun1294 ) {
    struct Maybe_214  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_214_Just_t ) {
        struct envunion1395  temp1396 = (  fun1294 );
        ( temp1396.fun ( &temp1396.env ,  ( dref1295 .stuff .Maybe_214_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_214_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1397 (   struct env1394* env ,    struct Cursors_33  cursors4278 ) {
    ( (  set_dash_cursors1093 ) ( ( env->self4275 ) ,  ( (  cursors4278 ) .f_cur ) ,  ( (  cursors4278 ) .f_sel ) ,  ( CursorMovement_1094_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1381 (   struct env217* env ,    struct Pane_227 *  self4275 ) {
    struct envunion218  temp1382 = ( (struct envunion218){ .fun = (  struct Maybe_214  (*) (  struct env130*  ,    struct TextBuf_114 *  ) )undo1383 , .env =  env->envinst130 } );
    struct Maybe_214  mcursors4276 = ( temp1382.fun ( &temp1382.env ,  ( ( * (  self4275 ) ) .f_buf ) ) );
    struct env1394 envinst1394 = {
        .self4275 =  self4275 ,
    };
    ( (  if_dash_just1393 ) ( (  mcursors4276 ) ,  ( (struct envunion1395){ .fun = (  enum Unit_8  (*) (  struct env1394*  ,    struct Cursors_33  ) )lam1397 , .env =  envinst1394 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_238   minmax1401 (    struct Pos_26  l1330 ,    struct Pos_26  r1332 ) {
    return ( (  cmp522 ( (  l1330 ) , (  r1332 ) ) == 0 ) ? ( ( Tuple2_238_Tuple2 ) ( (  l1330 ) ,  (  r1332 ) ) ) : ( ( Tuple2_238_Tuple2 ) ( (  r1332 ) ,  (  l1330 ) ) ) );
}

static  struct Pos_26   or_dash_else1402 (    struct Maybe_34  self1734 ,    struct Pos_26  alt1736 ) {
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

static  struct Pos_26   fst1403 (    struct Tuple2_238  dref1254 ) {
    return ( dref1254 .field0 );
}

static  struct Pos_26   snd1404 (    struct Tuple2_238  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Tuple2_238   selection1400 (    struct Pane_227 *  self4287 ) {
    struct Tuple2_238  from_dash_to4288 = ( (  minmax1401 ) ( ( (  or_dash_else1402 ) ( ( ( * (  self4287 ) ) .f_sel ) ,  ( ( * (  self4287 ) ) .f_cursor ) ) ) ,  ( ( * (  self4287 ) ) .f_cursor ) ) );
    struct Pos_26  from4289 = ( (  fst1403 ) ( (  from_dash_to4288 ) ) );
    struct Pos_26  to4290 = ( (  right_dash_pos1138 ) ( ( ( * (  self4287 ) ) .f_buf ) ,  ( (  snd1404 ) ( (  from_dash_to4288 ) ) ) ) );
    return ( ( Tuple2_238_Tuple2 ) ( (  from4289 ) ,  (  to4290 ) ) );
}

struct env1407 {
    struct Editor_256 *  ed4400;
    ;
};

struct envunion1408 {
    enum Unit_8  (*fun) (  struct env1407*  ,    struct StrView_27  );
    struct env1407 env;
};

static  enum Unit_8   if_dash_just1406 (    struct Maybe_94  x1292 ,   struct envunion1408  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1408  temp1409 = (  fun1294 );
        ( temp1409.fun ( &temp1409.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1410 (   struct env1407* env ,    struct StrView_27  cp4404 ) {
    ( (  free509 ) ( (  cp4404 ) ,  ( ( * ( env->ed4400 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1399 (   struct env241* env ,    struct Editor_256 *  ed4400 ) {
    struct Tuple2_238  from_dash_to4401 = ( (  selection1400 ) ( ( (  pane1136 ) ( (  ed4400 ) ) ) ) );
    struct envunion242  temp1405 = ( (struct envunion242){ .fun = (  struct StrView_27  (*) (  struct env134*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ) )str_dash_between1225 , .env =  env->envinst134 } );
    struct StrView_27  cpd4402 = ( temp1405.fun ( &temp1405.env ,  ( ( ( * (  ed4400 ) ) .f_pane ) .f_buf ) ,  ( (  fst1403 ) ( (  from_dash_to4401 ) ) ) ,  ( (  snd1404 ) ( (  from_dash_to4401 ) ) ) ) );
    struct env1407 envinst1407 = {
        .ed4400 =  ed4400 ,
    };
    ( (  if_dash_just1406 ) ( ( ( * (  ed4400 ) ) .f_clipboard ) ,  ( (struct envunion1408){ .fun = (  enum Unit_8  (*) (  struct env1407*  ,    struct StrView_27  ) )lam1410 , .env =  envinst1407 } ) ) );
    (*  ed4400 ) .f_clipboard = ( ( Maybe_94_Just ) ( (  cpd4402 ) ) );
    return ( Unit_8_Unit );
}

struct env1415 {
    ;
    struct Pane_227 *  self4293;
};

struct envunion1416 {
    enum Unit_8  (*fun) (  struct env1415*  ,    struct Cursors_33  );
    struct env1415 env;
};

static  enum Unit_8   if_dash_just1414 (    struct Maybe_214  x1292 ,   struct envunion1416  fun1294 ) {
    struct Maybe_214  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_214_Just_t ) {
        struct envunion1416  temp1417 = (  fun1294 );
        ( temp1417.fun ( &temp1417.env ,  ( dref1295 .stuff .Maybe_214_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_214_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1418 (   struct env1415* env ,    struct Cursors_33  cursors4300 ) {
    ( (  set_dash_cursors1093 ) ( ( env->self4293 ) ,  ( (  cursors4300 ) .f_cur ) ,  ( (  cursors4300 ) .f_sel ) ,  ( CursorMovement_1094_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1412 (   struct env221* env ,    struct Pane_227 *  self4293 ,    struct Tuple2_238  pos_prime_s4295 ,    struct StrView_27  cp4297 ) {
    struct envunion222  temp1413 = ( (struct envunion222){ .fun = (  struct Maybe_214  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_214  ) )change1170 , .env =  env->envinst136 } );
    struct Maybe_214  mcursors4298 = ( temp1413.fun ( &temp1413.env ,  ( ( * (  self4293 ) ) .f_buf ) ,  ( (  fst1403 ) ( (  pos_prime_s4295 ) ) ) ,  ( (  snd1404 ) ( (  pos_prime_s4295 ) ) ) ,  (  cp4297 ) ,  ( ( Maybe_214_Just ) ( ( (struct Cursors_33) { .f_cur = ( ( * (  self4293 ) ) .f_cursor ) , .f_sel = ( ( * (  self4293 ) ) .f_sel ) } ) ) ) ) );
    struct env1415 envinst1415 = {
        .self4293 =  self4293 ,
    };
    ( (  if_dash_just1414 ) ( (  mcursors4298 ) ,  ( (struct envunion1416){ .fun = (  enum Unit_8  (*) (  struct env1415*  ,    struct Cursors_33  ) )lam1418 , .env =  envinst1415 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1420 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_256 *  );
    struct env241 env;
};

struct envunion1422 {
    enum Unit_8  (*fun) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  );
    struct env221 env;
};

struct envunion1424 {
    enum Unit_8  (*fun) (  struct env241*  ,    struct Editor_256 *  );
    struct env241 env;
};

static  struct StrBuilder_73   mk1430 (    enum CAllocator_10  al2810 ) {
    return ( (struct StrBuilder_73) { .f_chars = ( (  mk446 ) ( (  al2810 ) ) ) } );
}

struct IntStrIter_1436 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1435 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_1436  f_right;
};

struct StrConcatIter_1434 {
    struct StrConcatIter_1435  f_left;
    struct StrViewIter_62  f_right;
};

struct env1437 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1438 {
    enum Unit_8  (*fun) (  struct env1437*  ,    struct Char_65  );
    struct env1437 env;
};

static  struct StrConcatIter_1434   into_dash_iter1440 (    struct StrConcatIter_1434  self1498 ) {
    return (  self1498 );
}

struct env1446 {
    ;
    size_t  base1211;
};

struct envunion1447 {
    size_t  (*fun) (  struct env1446*  ,    int32_t  ,    size_t  );
    struct env1446 env;
};

static  size_t   reduce1445 (    struct Range_159  iterable1094 ,    size_t  base1096 ,   struct envunion1447  fun1098 ) {
    size_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1447  temp1448 = (  fun1098 );
                x1099 = ( temp1448.fun ( &temp1448.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1449 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1449);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1450;
    return (  temp1450 );
}

static  size_t   lam1451 (   struct env1446* env ,    int32_t  item1215 ,    size_t  x1217 ) {
    return (  op_dash_mul412 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  size_t   pow1444 (    size_t  base1211 ,    int32_t  p1213 ) {
    struct env1446 envinst1446 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1445 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1447){ .fun = (  size_t  (*) (  struct env1446*  ,    int32_t  ,    size_t  ) )lam1451 , .env =  envinst1446 } ) ) );
}

static  uint8_t   cast1452 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_304   next1443 (    struct IntStrIter_1436 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_304_Just ) ( ( (  from_dash_charlike353 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    size_t  trim_dash_down1430 = ( (  pow1444 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    size_t  upper1431 = (  op_dash_div349 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    size_t  upper_dash_mask1432 = (  op_dash_mul412 ( (  op_dash_div349 ( (  upper1431 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast1452 ) ( (  op_dash_sub296 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81049 ) ( (  op_dash_add945 ( (  digit1433 ) , (  from_dash_integral315 ( 48 ) ) ) ) ) );
    return ( ( Maybe_304_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_304   next1442 (    struct StrConcatIter_1435 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next1443 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next1441 (    struct StrConcatIter_1434 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next1442 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1433 (    struct StrConcatIter_1434  iterable1075 ,   struct envunion1438  fun1077 ) {
    struct StrConcatIter_1434  temp1439 = ( (  into_dash_iter1440 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1434 *  it1078 = ( &temp1439 );
    while ( ( true ) ) {
        struct Maybe_304  dref1079 = ( (  next1441 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_304_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_304_Just_t ) {
                struct envunion1438  temp1453 = (  fun1077 );
                ( temp1453.fun ( &temp1453.env ,  ( dref1079 .stuff .Maybe_304_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1460 (    size_t  self1437 ) {
    if ( (  eq406 ( (  self1437 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp297 ( (  self1437 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div349 ( (  self1437 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1436   uint_dash_iter1459 (    size_t  int1444 ) {
    return ( (struct IntStrIter_1436) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits1460 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1436   chars1458 (    size_t  self1474 ) {
    return ( (  uint_dash_iter1459 ) ( (  self1474 ) ) );
}

static  struct StrConcatIter_1435   into_dash_iter1457 (    struct StrConcat_87  dref1505 ) {
    return ( (struct StrConcatIter_1435) { .f_left = ( (  chars700 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1458 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1435   chars1456 (    struct StrConcat_87  self1516 ) {
    return ( (  into_dash_iter1457 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_1434   into_dash_iter1455 (    struct StrConcat_86  dref1505 ) {
    return ( (struct StrConcatIter_1434) { .f_left = ( (  chars1456 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars700 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1434   chars1454 (    struct StrConcat_86  self1516 ) {
    return ( (  into_dash_iter1455 ) ( (  self1516 ) ) );
}

static  enum Unit_8   write_dash_slice1465 (   struct env69* env ,    struct StrBuilder_73 *  builder2768 ,    struct Slice_11  s2770 ) {
    struct envunion70  temp1466 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Slice_11  ) )add_dash_all539 , .env =  env->envinst46 } );
    ( temp1466.fun ( &temp1466.env ,  ( & ( ( * (  builder2768 ) ) .f_chars ) ) ,  (  s2770 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_11   from_dash_char1467 (    struct Char_65  c1943 ,    uint8_t *  buf1945 ) {
    struct CharDestructured_344  dref1946 = ( (  destructure346 ) ( (  c1943 ) ) );
    if ( dref1946.tag == CharDestructured_344_Ref_t ) {
        return ( (struct Slice_11) { .f_ptr = ( ( dref1946 .stuff .CharDestructured_344_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1946 .stuff .CharDestructured_344_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1946.tag == CharDestructured_344_Scalar_t ) {
            if ( (  cmp179 ( ( ( dref1946 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) , (  from_dash_integral174 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1468 = ( (  from_dash_string68 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1468);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            (*  buf1945 ) = ( (  u32_dash_u8153 ) ( ( ( dref1946 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_11) { .f_ptr = (  buf1945 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_8   write_dash_char1463 (   struct env71* env ,    struct StrBuilder_73 *  builder2773 ,    struct Char_65  c2775 ) {
    struct envunion72  temp1464 = ( (struct envunion72){ .fun = (  enum Unit_8  (*) (  struct env69*  ,    struct StrBuilder_73 *  ,    struct Slice_11  ) )write_dash_slice1465 , .env =  env->envinst69 } );
    uint8_t  temp1470;
    uint8_t  temp1469 = (  temp1470 );
    ( temp1464.fun ( &temp1464.env ,  (  builder2773 ) ,  ( (  from_dash_char1467 ) ( (  c2775 ) ,  ( &temp1469 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1461 (   struct env1437* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1462 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1463 , .env =  env->envinst71 } );
    return ( temp1462.fun ( &temp1462.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1432 (   struct env74* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrConcat_86  s2780 ) {
    struct env1437 envinst1437 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1433 ) ( ( (  chars1454 ) ( (  s2780 ) ) ) ,  ( (struct envunion1438){ .fun = (  enum Unit_8  (*) (  struct env1437*  ,    struct Char_65  ) )lam1461 , .env =  envinst1437 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1474 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice1473 (    struct Slice_11  s1934 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr1474 ) ( ( (  s1934 ) .f_ptr ) ) ) , .f_count = ( (  s1934 ) .f_count ) } );
}

static  struct StrView_27   as_dash_str1472 (    struct StrBuilder_73 *  builder2816 ) {
    return ( (struct StrView_27) { .f_contents = ( (  cast_dash_slice1473 ) ( ( (  subslice505 ) ( ( ( ( * (  builder2816 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2816 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_27   mk_dash_dyn_dash_str1428 (   struct env84* env ,    struct StrConcat_86  s2836 ,    enum CAllocator_10  al2838 ) {
    struct StrBuilder_73  temp1429 = ( (  mk1430 ) ( (  al2838 ) ) );
    struct StrBuilder_73 *  sb2839 = ( &temp1429 );
    struct envunion85  temp1431 = ( (struct envunion85){ .fun = (  enum Unit_8  (*) (  struct env74*  ,    struct StrBuilder_73 *  ,    struct StrConcat_86  ) )write1432 , .env =  env->envinst74 } );
    ( temp1431.fun ( &temp1431.env ,  (  sb2839 ) ,  (  s2836 ) ) );
    struct envunion88  temp1471 = ( (struct envunion88){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1463 , .env =  env->envinst71 } );
    ( temp1471.fun ( &temp1471.env ,  (  sb2839 ) ,  ( (  nullchar504 ) ( ) ) ) );
    struct StrView_27  dynstr2840 = ( (  as_dash_str1472 ) ( (  sb2839 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2840 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub296 ( ( ( (  dynstr2840 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1426 (   struct env243* env ,    struct Editor_256 *  ed4412 ,    struct StrConcat_86  s4414 ) {
    ( (  reset_dash_msg1081 ) ( (  ed4412 ) ) );
    struct envunion244  temp1427 = ( (struct envunion244){ .fun = (  struct StrView_27  (*) (  struct env84*  ,    struct StrConcat_86  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1428 , .env =  env->envinst84 } );
    (*  ed4412 ) .f_msg = ( ( Maybe_94_Just ) ( ( temp1427.fun ( &temp1427.env ,  (  s4414 ) ,  ( ( * (  ed4412 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1477 {
    enum Unit_8  (*fun) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  );
    struct env221 env;
};

struct env1476 {
    ;
    ;
    ;
    struct env221 envinst221;
    ;
    ;
    ;
    ;
    struct Editor_256 *  ed4469;
    ;
    ;
    ;
    ;
};

struct envunion1478 {
    enum Unit_8  (*fun) (  struct env1476*  ,    struct StrView_27  );
    struct env1476 env;
};

static  enum Unit_8   if_dash_just1475 (    struct Maybe_94  x1292 ,   struct envunion1478  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1478  temp1479 = (  fun1294 );
        ( temp1479.fun ( &temp1479.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   max_dash_pos1481 (    struct Pane_227 *  pane4223 ) {
    return ( {  struct Maybe_34  dref4224 = ( ( * (  pane4223 ) ) .f_sel ) ; dref4224.tag == Maybe_34_Just_t ? ( (  max523 ) ( ( ( * (  pane4223 ) ) .f_cursor ) ,  ( dref4224 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4223 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1483 (    struct Slice_11  self1869 ,    size_t  idx1871 ) {
    return ( (  get561 ) ( (  self1869 ) ,  (  idx1871 ) ) );
}

static  uint8_t   last1482 (    struct Slice_11  s1937 ) {
    if ( (  eq406 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1214 ) ( ( (  from_dash_string207 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1483 ( (  s1937 ) , (  op_dash_sub296 ( ( (  s1937 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1484 (    int32_t  x1353 ,    int32_t  mn1355 ,    int32_t  mx1357 ) {
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

static  enum Unit_8   lam1480 (   struct env1476* env ,    struct StrView_27  cp4480 ) {
    struct Pos_26  start4481 = ( (  max_dash_pos1481 ) ( ( (  pane1136 ) ( ( env->ed4469 ) ) ) ) );
    if ( (  eq310 ( ( (  last1482 ) ( ( (  cp4480 ) .f_contents ) ) ) , ( (  ascii_dash_u8515 ) ( ( (  from_dash_charlike516 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4481 = ( (struct Pos_26) { .f_line = ( (  clamp1484 ) ( (  op_dash_add168 ( ( (  start4481 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  num_dash_lines1139 ) ( ( ( * ( (  pane1136 ) ( ( env->ed4469 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } );
    } else {
        start4481 = ( (  right_dash_pos1138 ) ( ( ( ( * ( env->ed4469 ) ) .f_pane ) .f_buf ) ,  (  start4481 ) ) );
    }
    struct envunion1477  temp1485 = ( (struct envunion1477){ .fun = (  enum Unit_8  (*) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  ) )replace_dash_selection1412 , .env =  env->envinst221 } );
    ( temp1485.fun ( &temp1485.env ,  ( (  pane1136 ) ( ( env->ed4469 ) ) ) ,  ( ( Tuple2_238_Tuple2 ) ( (  start4481 ) ,  (  start4481 ) ) ) ,  (  cp4480 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1488 {
    enum Unit_8  (*fun) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  );
    struct env221 env;
};

struct env1487 {
    ;
    ;
    ;
    ;
    ;
    struct env221 envinst221;
    ;
    struct Editor_256 *  ed4469;
    ;
};

struct envunion1489 {
    enum Unit_8  (*fun) (  struct env1487*  ,    struct StrView_27  );
    struct env1487 env;
};

static  enum Unit_8   if_dash_just1486 (    struct Maybe_94  x1292 ,   struct envunion1489  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1489  temp1490 = (  fun1294 );
        ( temp1490.fun ( &temp1490.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_26   min_dash_pos1492 (    struct Pane_227 *  pane4218 ) {
    return ( {  struct Maybe_34  dref4219 = ( ( * (  pane4218 ) ) .f_sel ) ; dref4219.tag == Maybe_34_Just_t ? ( (  min521 ) ( ( ( * (  pane4218 ) ) .f_cursor ) ,  ( dref4219 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( ( * (  pane4218 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1491 (   struct env1487* env ,    struct StrView_27  cp4483 ) {
    struct Pos_26  start4484 = ( (  min_dash_pos1492 ) ( ( (  pane1136 ) ( ( env->ed4469 ) ) ) ) );
    if ( (  eq310 ( ( (  last1482 ) ( ( (  cp4483 ) .f_contents ) ) ) , ( (  ascii_dash_u8515 ) ( ( (  from_dash_charlike516 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_26  temp1493 = (  start4484 );
        temp1493 .  f_bi = (  from_dash_integral67 ( 0 ) );
        start4484 = ( temp1493 );
    }
    struct envunion1488  temp1494 = ( (struct envunion1488){ .fun = (  enum Unit_8  (*) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  ) )replace_dash_selection1412 , .env =  env->envinst221 } );
    ( temp1494.fun ( &temp1494.env ,  ( (  pane1136 ) ( ( env->ed4469 ) ) ) ,  ( ( Tuple2_238_Tuple2 ) ( (  start4484 ) ,  (  start4484 ) ) ) ,  (  cp4483 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1497 {
    enum Unit_8  (*fun) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  );
    struct env221 env;
};

struct env1496 {
    ;
    ;
    struct env221 envinst221;
    struct Editor_256 *  ed4469;
};

struct envunion1498 {
    enum Unit_8  (*fun) (  struct env1496*  ,    struct StrView_27  );
    struct env1496 env;
};

static  enum Unit_8   if_dash_just1495 (    struct Maybe_94  x1292 ,   struct envunion1498  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1498  temp1499 = (  fun1294 );
        ( temp1499.fun ( &temp1499.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1500 (   struct env1496* env ,    struct StrView_27  cp4486 ) {
    struct Pos_26  start4487 = ( (  min_dash_pos1492 ) ( ( (  pane1136 ) ( ( env->ed4469 ) ) ) ) );
    struct envunion1497  temp1501 = ( (struct envunion1497){ .fun = (  enum Unit_8  (*) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  ) )replace_dash_selection1412 , .env =  env->envinst221 } );
    ( temp1501.fun ( &temp1501.env ,  ( (  pane1136 ) ( ( env->ed4469 ) ) ) ,  ( ( Tuple2_238_Tuple2 ) ( (  start4487 ) ,  (  start4487 ) ) ) ,  (  cp4486 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1502 (    struct Pane_227 *  pane4237 ) {
    struct Pos_26  min_dash_pos4238 = ( (  min_dash_pos1492 ) ( (  pane4237 ) ) );
    struct Pos_26  max_dash_pos4239 = ( (  max_dash_pos1481 ) ( (  pane4237 ) ) );
    int32_t  max_dash_pos_dash_max4240 = ( (  size_dash_i32336 ) ( ( (  num_dash_bytes1132 ) ( ( (  line1099 ) ( ( ( * (  pane4237 ) ) .f_buf ) ,  ( (  max_dash_pos4239 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq525 ( ( (  min_dash_pos4238 ) .f_bi ) , (  from_dash_integral67 ( 0 ) ) ) ) && (  eq525 ( ( (  max_dash_pos4239 ) .f_bi ) , (  max_dash_pos_dash_max4240 ) ) ) ) ) ) {
        struct Pos_26  temp1503 = (  min_dash_pos4238 );
        temp1503 .  f_bi = (  from_dash_integral67 ( 0 ) );
        (*  pane4237 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1503 ) ) );
        struct Pos_26  temp1504 = (  max_dash_pos4239 );
        temp1504 .  f_bi = (  max_dash_pos_dash_max4240 );
        (*  pane4237 ) .f_cursor = ( temp1504 );
    } else {
        if ( (  cmp166 ( (  op_dash_add168 ( ( (  max_dash_pos4239 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) ) , ( (  num_dash_lines1139 ) ( ( ( * (  pane4237 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_26  temp1505 = (  min_dash_pos4238 );
        temp1505 .  f_bi = (  from_dash_integral67 ( 0 ) );
        (*  pane4237 ) .f_sel = ( ( Maybe_34_Just ) ( ( temp1505 ) ) );
        int32_t  next_dash_line4241 = (  op_dash_add168 ( ( (  max_dash_pos4239 ) .f_line ) , (  from_dash_integral67 ( 1 ) ) ) );
        (*  pane4237 ) .f_cursor = ( (struct Pos_26) { .f_line = (  next_dash_line4241 ) , .f_bi = ( (  size_dash_i32336 ) ( ( (  num_dash_bytes1132 ) ( ( (  line1099 ) ( ( ( * (  pane4237 ) ) .f_buf ) ,  (  next_dash_line4241 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1506 (    struct Maybe_34  m1265 ) {
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

struct Maybe_1508 {
    enum {
        Maybe_1508_None_t,
        Maybe_1508_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_238  field0;
        } Maybe_1508_Just_s;
    } stuff;
};

static struct Maybe_1508 Maybe_1508_Just (  struct Tuple2_238  field0 ) {
    return ( struct Maybe_1508 ) { .tag = Maybe_1508_Just_t, .stuff = { .Maybe_1508_Just_s = { .field0 = field0 } } };
};

struct env1510 {
    ;
    struct Pane_227 *  pane4345;
    ;
    ;
    ;
    struct StrView_27  query4349;
};

struct envunion1512 {
    struct Maybe_254  (*fun) (  struct env1510*  ,    struct Pos_26  );
    struct env1510 env;
};

struct Zip_1519 {
    struct SliceIter_477  f_left_dash_it;
    struct SliceIter_477  f_right_dash_it;
};

struct Tuple2_1520 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1520 Tuple2_1520_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1520 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1522 {
    bool (*  fun1127 )(    struct Tuple2_1520  );
};

struct envunion1523 {
    bool  (*fun) (  struct env1522*  ,    struct Tuple2_1520  ,    bool  );
    struct env1522 env;
};

static  struct Zip_1519   into_dash_iter1524 (    struct Zip_1519  self912 ) {
    return (  self912 );
}

struct Maybe_1525 {
    enum {
        Maybe_1525_None_t,
        Maybe_1525_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1520  field0;
        } Maybe_1525_Just_s;
    } stuff;
};

static struct Maybe_1525 Maybe_1525_Just (  struct Tuple2_1520  field0 ) {
    return ( struct Maybe_1525 ) { .tag = Maybe_1525_Just_t, .stuff = { .Maybe_1525_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1525   next1526 (    struct Zip_1519 *  self915 ) {
    struct Zip_1519  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_485  dref917 = ( (  next486 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_485_None_t ) {
            return ( (struct Maybe_1525) { .tag = Maybe_1525_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_485_Just_t ) {
                struct Maybe_485  dref919 = ( (  next486 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_485_None_t ) {
                    return ( (struct Maybe_1525) { .tag = Maybe_1525_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_485_Just_t ) {
                        ( (  next486 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next486 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1525_Just ) ( ( ( Tuple2_1520_Tuple2 ) ( ( dref917 .stuff .Maybe_485_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_485_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1521 (    struct Zip_1519  iterable1094 ,    bool  base1096 ,   struct envunion1523  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct Zip_1519  it1100 = ( (  into_dash_iter1524 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_1525  dref1101 = ( (  next1526 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_1525_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_1525_Just_t ) {
                struct envunion1523  temp1527 = (  fun1098 );
                x1099 = ( temp1527.fun ( &temp1527.env ,  ( dref1101 .stuff .Maybe_1525_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1528 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1528);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1529;
    return (  temp1529 );
}

static  bool   lam1530 (   struct env1522* env ,    struct Tuple2_1520  e1129 ,    bool  x1131 ) {
    return ( ( ( env->fun1127 ) ( (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1518 (    struct Zip_1519  it1125 ,    bool (*  fun1127 )(    struct Tuple2_1520  ) ) {
    struct env1522 envinst1522 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1521 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1523){ .fun = (  bool  (*) (  struct env1522*  ,    struct Tuple2_1520  ,    bool  ) )lam1530 , .env =  envinst1522 } ) ) );
}

static  struct Zip_1519   zip1531 (    struct Slice_11  left923 ,    struct Slice_11  right925 ) {
    struct SliceIter_477  left_dash_it926 = ( (  into_dash_iter489 ) ( (  left923 ) ) );
    struct SliceIter_477  right_dash_it927 = ( (  into_dash_iter489 ) ( (  right925 ) ) );
    return ( (struct Zip_1519) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  bool   lam1532 (    struct Tuple2_1520  dref1864 ) {
    return (  eq310 ( ( dref1864 .field0 ) , ( dref1864 .field1 ) ) );
}

static  bool   eq1517 (    struct Slice_11  l1861 ,    struct Slice_11  r1863 ) {
    if ( ( !  eq406 ( ( (  l1861 ) .f_count ) , ( (  r1863 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1518 ) ( ( (  zip1531 ) ( (  l1861 ) ,  (  r1863 ) ) ) ,  (  lam1532 ) ) );
}

static  struct Maybe_254   find_dash_slice1514 (    struct Slice_11  haystack1914 ,    struct Slice_11  needle1916 ) {
    struct RangeIter_162  temp1515 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  size_dash_i32336 ) ( ( (  haystack1914 ) .f_count ) ) ) , ( (  size_dash_i32336 ) ( ( (  needle1916 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1516 =  next165 (&temp1515);
        if (  __cond1516 .tag == 0 ) {
            break;
        }
        int32_t  i1918 =  __cond1516 .stuff .Maybe_164_Just_s .field0;
        if ( (  eq1517 ( ( (  subslice505 ) ( (  haystack1914 ) ,  ( (  i32_dash_size419 ) ( (  i1918 ) ) ) ,  (  op_dash_add318 ( ( (  i32_dash_size419 ) ( (  i1918 ) ) ) , ( (  needle1916 ) .f_count ) ) ) ) ) , (  needle1916 ) ) ) ) {
            return ( ( Maybe_254_Just ) ( ( (  i32_dash_size419 ) ( (  i1918 ) ) ) ) );
        }
    }
    return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
}

static  struct StrView_27   byte_dash_substr_dash_from1533 (    struct StrView_27  s2195 ,    size_t  from2197 ) {
    return ( (struct StrView_27) { .f_contents = ( (  from532 ) ( ( (  s2195 ) .f_contents ) ,  (  from2197 ) ) ) } );
}

static  struct Maybe_254   search_dash_on_dash_line1513 (   struct env1510* env ,    struct Pos_26  pos4352 ) {
    return ( (  find_dash_slice1514 ) ( ( ( (  byte_dash_substr_dash_from1533 ) ( ( (  line1099 ) ( ( ( * ( env->pane4345 ) ) .f_buf ) ,  ( (  pos4352 ) .f_line ) ) ) ,  ( (  i32_dash_size419 ) ( ( (  pos4352 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4349 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1539 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1540 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1538 (    int32_t  l1230 ,    int32_t  d1232 ) {
    int32_t  r1233 = (  op_dash_div1539 ( (  l1230 ) , (  d1232 ) ) );
    int32_t  m1234 = (  op_dash_sub173 ( (  l1230 ) , (  op_dash_mul1540 ( (  r1233 ) , (  d1232 ) ) ) ) );
    if ( (  cmp166 ( (  m1234 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add168 ( (  d1232 ) , (  m1234 ) ) );
    } else {
        return (  m1234 );
    }
}

struct envunion1542 {
    struct Maybe_254  (*fun) (  struct env1510*  ,    struct Pos_26  );
    struct env1510 env;
};

static  struct Maybe_1508   search_dash_from1509 (    struct Pane_227 *  pane4345 ,    struct Pos_26  pos4347 ,    struct StrView_27  query4349 ) {
    struct env1510 envinst1510 = {
        .pane4345 =  pane4345 ,
        .query4349 =  query4349 ,
    };
    struct envunion1512  temp1511 = ( (struct envunion1512){ .fun = (  struct Maybe_254  (*) (  struct env1510*  ,    struct Pos_26  ) )search_dash_on_dash_line1513 , .env =  envinst1510 } );
    struct Maybe_254  dref4353 = ( temp1511.fun ( &temp1511.env ,  (  pos4347 ) ) );
    if ( dref4353.tag == Maybe_254_Just_t ) {
        struct Pos_26  temp1534 = (  pos4347 );
        temp1534 .  f_bi = (  op_dash_add168 ( ( (  pos4347 ) .f_bi ) , ( (  size_dash_i32336 ) ( ( dref4353 .stuff .Maybe_254_Just_s .field0 ) ) ) ) );
        struct Pos_26  sel_dash_pos4355 = ( temp1534 );
        struct Pos_26  temp1535 = (  pos4347 );
        temp1535 .  f_bi = (  op_dash_sub173 ( (  op_dash_add168 ( ( (  pos4347 ) .f_bi ) , ( (  size_dash_i32336 ) ( (  op_dash_add318 ( ( dref4353 .stuff .Maybe_254_Just_s .field0 ) , ( (  num_dash_bytes1132 ) ( (  query4349 ) ) ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4356 = ( temp1535 );
        return ( ( Maybe_1508_Just ) ( ( ( Tuple2_238_Tuple2 ) ( (  sel_dash_pos4355 ) ,  (  cur_dash_pos4356 ) ) ) ) );
    }
    else {
        if ( dref4353.tag == Maybe_254_None_t ) {
            int32_t  num_dash_lines4357 = ( (  num_dash_lines1139 ) ( ( ( * (  pane4345 ) ) .f_buf ) ) );
            struct RangeIter_162  temp1536 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  (  num_dash_lines4357 ) ) ) );
            while (true) {
                struct Maybe_164  __cond1537 =  next165 (&temp1536);
                if (  __cond1537 .tag == 0 ) {
                    break;
                }
                int32_t  i4359 =  __cond1537 .stuff .Maybe_164_Just_s .field0;
                int32_t  line4360 = ( (  mod1538 ) ( (  op_dash_add168 ( ( (  pos4347 ) .f_line ) , (  i4359 ) ) ) ,  (  num_dash_lines4357 ) ) );
                struct envunion1542  temp1541 = ( (struct envunion1542){ .fun = (  struct Maybe_254  (*) (  struct env1510*  ,    struct Pos_26  ) )search_dash_on_dash_line1513 , .env =  envinst1510 } );
                struct Maybe_254  dref4361 = ( temp1541.fun ( &temp1541.env ,  ( (struct Pos_26) { .f_line = (  line4360 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ) );
                if ( dref4361.tag == Maybe_254_Just_t ) {
                    struct Pos_26  sel_dash_pos4363 = ( (struct Pos_26) { .f_line = (  line4360 ) , .f_bi = ( (  size_dash_i32336 ) ( ( dref4361 .stuff .Maybe_254_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4364 = ( (struct Pos_26) { .f_line = (  line4360 ) , .f_bi = (  op_dash_sub173 ( ( (  size_dash_i32336 ) ( (  op_dash_add318 ( ( dref4361 .stuff .Maybe_254_Just_s .field0 ) , ( (  num_dash_bytes1132 ) ( (  query4349 ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1508_Just ) ( ( ( Tuple2_238_Tuple2 ) ( (  sel_dash_pos4363 ) ,  (  cur_dash_pos4364 ) ) ) ) );
                }
                else {
                    if ( dref4361.tag == Maybe_254_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1508) { .tag = Maybe_1508_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1507 (    struct Editor_256 *  ed4453 ) {
    struct Maybe_94  dref4454 = ( ( * (  ed4453 ) ) .f_search_dash_term );
    if ( dref4454.tag == Maybe_94_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4454.tag == Maybe_94_Just_t ) {
            struct Maybe_1508  dref4456 = ( (  search_dash_from1509 ) ( ( (  pane1136 ) ( (  ed4453 ) ) ) ,  ( (  max_dash_pos1481 ) ( ( (  pane1136 ) ( (  ed4453 ) ) ) ) ) ,  ( dref4454 .stuff .Maybe_94_Just_s .field0 ) ) );
            if ( dref4456.tag == Maybe_1508_None_t ) {
            }
            else {
                if ( dref4456.tag == Maybe_1508_Just_t ) {
                    ( (  set_dash_cursors1093 ) ( ( (  pane1136 ) ( (  ed4453 ) ) ) ,  ( dref4456 .stuff .Maybe_1508_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4456 .stuff .Maybe_1508_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1094_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_254   find_dash_last_dash_occurence_dash_of_dash_slice1545 (    struct Slice_11  haystack1921 ,    struct Slice_11  needle1923 ) {
    struct Maybe_254  occ1924 = ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    struct RangeIter_162  temp1546 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  size_dash_i32336 ) ( ( (  haystack1921 ) .f_count ) ) ) , ( (  size_dash_i32336 ) ( ( (  needle1923 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1547 =  next165 (&temp1546);
        if (  __cond1547 .tag == 0 ) {
            break;
        }
        int32_t  i1926 =  __cond1547 .stuff .Maybe_164_Just_s .field0;
        if ( (  eq1517 ( ( (  subslice505 ) ( (  haystack1921 ) ,  ( (  i32_dash_size419 ) ( (  i1926 ) ) ) ,  (  op_dash_add318 ( ( (  i32_dash_size419 ) ( (  i1926 ) ) ) , ( (  needle1923 ) .f_count ) ) ) ) ) , (  needle1923 ) ) ) ) {
            occ1924 = ( ( Maybe_254_Just ) ( ( (  i32_dash_size419 ) ( (  i1926 ) ) ) ) );
        }
    }
    return (  occ1924 );
}

static  struct Maybe_1508   search_dash_back1544 (    struct Pane_227 *  pane4367 ,    struct Pos_26  pos4369 ,    struct StrView_27  query4371 ) {
    struct Maybe_254  dref4372 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1545 ) ( ( ( (  byte_dash_substr518 ) ( ( (  line1099 ) ( ( ( * (  pane4367 ) ) .f_buf ) ,  ( (  pos4369 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size419 ) ( ( (  pos4369 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4371 ) .f_contents ) ) );
    if ( dref4372.tag == Maybe_254_Just_t ) {
        struct Pos_26  temp1548 = (  pos4369 );
        temp1548 .  f_bi = ( (  size_dash_i32336 ) ( ( dref4372 .stuff .Maybe_254_Just_s .field0 ) ) );
        struct Pos_26  sel_dash_pos4374 = ( temp1548 );
        struct Pos_26  temp1549 = (  pos4369 );
        temp1549 .  f_bi = (  op_dash_sub173 ( ( (  size_dash_i32336 ) ( (  op_dash_add318 ( ( dref4372 .stuff .Maybe_254_Just_s .field0 ) , ( (  num_dash_bytes1132 ) ( (  query4371 ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
        struct Pos_26  cur_dash_pos4375 = ( temp1549 );
        return ( ( Maybe_1508_Just ) ( ( ( Tuple2_238_Tuple2 ) ( (  sel_dash_pos4374 ) ,  (  cur_dash_pos4375 ) ) ) ) );
    }
    else {
        if ( dref4372.tag == Maybe_254_None_t ) {
            int32_t  num_dash_lines4376 = ( (  num_dash_lines1139 ) ( ( ( * (  pane4367 ) ) .f_buf ) ) );
            struct RangeIter_162  temp1550 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 1 ) ) ,  (  num_dash_lines4376 ) ) ) );
            while (true) {
                struct Maybe_164  __cond1551 =  next165 (&temp1550);
                if (  __cond1551 .tag == 0 ) {
                    break;
                }
                int32_t  i4378 =  __cond1551 .stuff .Maybe_164_Just_s .field0;
                int32_t  line4379 = ( (  mod1538 ) ( (  op_dash_sub173 ( ( (  pos4369 ) .f_line ) , (  i4378 ) ) ) ,  (  num_dash_lines4376 ) ) );
                struct Maybe_254  dref4380 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1545 ) ( ( ( (  line1099 ) ( ( ( * (  pane4367 ) ) .f_buf ) ,  (  line4379 ) ) ) .f_contents ) ,  ( (  query4371 ) .f_contents ) ) );
                if ( dref4380.tag == Maybe_254_Just_t ) {
                    struct Pos_26  sel_dash_pos4382 = ( (struct Pos_26) { .f_line = (  line4379 ) , .f_bi = ( (  size_dash_i32336 ) ( ( dref4380 .stuff .Maybe_254_Just_s .field0 ) ) ) } );
                    struct Pos_26  cur_dash_pos4383 = ( (struct Pos_26) { .f_line = (  line4379 ) , .f_bi = (  op_dash_sub173 ( ( (  size_dash_i32336 ) ( (  op_dash_add318 ( ( dref4380 .stuff .Maybe_254_Just_s .field0 ) , ( (  num_dash_bytes1132 ) ( (  query4371 ) ) ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1508_Just ) ( ( ( Tuple2_238_Tuple2 ) ( (  sel_dash_pos4382 ) ,  (  cur_dash_pos4383 ) ) ) ) );
                }
                else {
                    if ( dref4380.tag == Maybe_254_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1508) { .tag = Maybe_1508_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1543 (    struct Editor_256 *  ed4461 ) {
    struct Maybe_94  dref4462 = ( ( * (  ed4461 ) ) .f_search_dash_term );
    if ( dref4462.tag == Maybe_94_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4462.tag == Maybe_94_Just_t ) {
            struct Maybe_1508  dref4464 = ( (  search_dash_back1544 ) ( ( (  pane1136 ) ( (  ed4461 ) ) ) ,  ( (  min_dash_pos1492 ) ( ( (  pane1136 ) ( (  ed4461 ) ) ) ) ) ,  ( dref4462 .stuff .Maybe_94_Just_s .field0 ) ) );
            if ( dref4464.tag == Maybe_1508_None_t ) {
            }
            else {
                if ( dref4464.tag == Maybe_1508_Just_t ) {
                    ( (  set_dash_cursors1093 ) ( ( (  pane1136 ) ( (  ed4461 ) ) ) ,  ( dref4464 .stuff .Maybe_1508_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4464 .stuff .Maybe_1508_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1094_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1555 (   struct env141* env ,    struct TextBuf_114 *  self3899 ,    struct Cursors_33  before_dash_cursors3901 ) {
    struct Actions_115 *  actions3902 = ( & ( ( * (  self3899 ) ) .f_actions ) );
    ( (  trim_dash_actions1171 ) ( (  actions3902 ) ) );
    ( (  flush_dash_insert_dash_action1146 ) ( (  self3899 ) ) );
    ( (  assert644 ) ( (  eq1240 ( ( ( ( * (  self3899 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_116_NoChangeset ) ) ) ,  ( (  from_dash_string207 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al3903 = ( ( * (  self3899 ) ) .f_al );
    struct Changeset_32  temp1556 = ( (struct Changeset_32) { .f_parts = ( (  mk1269 ) ( (  al3903 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3901 ) } );
    struct Changeset_32 *  changeset3904 = ( &temp1556 );
    struct envunion142  temp1557 = ( (struct envunion142){ .fun = (  enum Unit_8  (*) (  struct env28*  ,    struct List_30 *  ,    struct Changeset_32  ) )add1280 , .env =  env->envinst28 } );
    ( temp1557.fun ( &temp1557.env ,  ( & ( ( * (  actions3902 ) ) .f_list ) ) ,  ( * (  changeset3904 ) ) ) );
    (*  actions3902 ) .f_input_dash_changeset = ( ChangesetInputType_116_CustomChangeset );
    (*  actions3902 ) .f_cur = (  op_dash_add318 ( ( ( * (  actions3902 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1197   head1563 (    struct List_23  it1143 ) {
    struct SliceIter_1190  temp1564 = ( (  into_dash_iter1192 ) ( (  it1143 ) ) );
    return ( (  next1198 ) ( ( &temp1564 ) ) );
}

static  bool   null1562 (    struct List_23  it1152 ) {
    struct Maybe_1197  dref1153 = ( (  head1563 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_1197_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1561 (    struct TextBuf_114 *  self3907 ) {
    ( (  flush_dash_insert_dash_action1146 ) ( (  self3907 ) ) );
    struct Actions_115 *  actions3908 = ( & ( ( * (  self3907 ) ) .f_actions ) );
    if ( ( (  null1562 ) ( ( ( * ( (  last_dash_ptr1242 ) ( ( (  to_dash_slice1244 ) ( ( ( * (  actions3908 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3908 ) .f_cur = (  op_dash_sub296 ( ( ( * (  actions3908 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3908 ) .f_input_dash_changeset = ( ChangesetInputType_116_NoChangeset );
        ( (  trim_dash_actions1171 ) ( (  actions3908 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_34   fmap_dash_maybe1566 (    struct Maybe_34  x1276 ,    struct Pos_26 (*  fun1278 )(    struct Pos_26  ) ) {
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

static  struct Pos_26   lam1567 (    struct Pos_26  sel4312 ) {
    struct Pos_26  temp1568 = (  sel4312 );
    temp1568 .  f_bi = (  op_dash_add168 ( ( (  sel4312 ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) );
    return ( temp1568 );
}

static  enum Unit_8   indent_dash_selection1553 (   struct env225* env ,    struct Pane_227 *  self4308 ) {
    struct envunion230  temp1554 = ( (struct envunion230){ .fun = (  enum Unit_8  (*) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  ) )begin_dash_changeset1555 , .env =  env->envinst141 } );
    ( temp1554.fun ( &temp1554.env ,  ( ( * (  self4308 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4308 ) ) .f_cursor ) , .f_sel = ( ( * (  self4308 ) ) .f_sel ) } ) ) );
    struct RangeIter_162  temp1558 =  into_dash_iter163 ( ( (  to172 ) ( ( ( (  min_dash_pos1492 ) ( (  self4308 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1481 ) ( (  self4308 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_164  __cond1559 =  next165 (&temp1558);
        if (  __cond1559 .tag == 0 ) {
            break;
        }
        int32_t  line4310 =  __cond1559 .stuff .Maybe_164_Just_s .field0;
        struct envunion226  temp1560 = ( (struct envunion226){ .fun = (  enum Unit_8  (*) (  struct env223*  ,    struct Pane_227 *  ,    int32_t  ) )indent_dash_at1311 , .env =  env->envinst223 } );
        ( temp1560.fun ( &temp1560.env ,  (  self4308 ) ,  (  line4310 ) ) );
    }
    ( (  end_dash_changeset1561 ) ( ( ( * (  self4308 ) ) .f_buf ) ) );
    struct Pos_26  temp1565 = ( ( * (  self4308 ) ) .f_cursor );
    temp1565 .  f_bi = (  op_dash_add168 ( ( ( ( * (  self4308 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) );
    ( (  set_dash_cursors1093 ) ( (  self4308 ) ,  ( temp1565 ) ,  ( (  fmap_dash_maybe1566 ) ( ( ( * (  self4308 ) ) .f_sel ) ,  (  lam1567 ) ) ) ,  ( CursorMovement_1094_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1579 {
    bool  last_dash_char_dash_was_dash_tab4317;
    ;
    ;
};

struct envunion1580 {
    struct Pos_26  (*fun) (  struct env1579*  ,    struct Pos_26  );
    struct env1579 env;
};

static  struct Maybe_34   fmap_dash_maybe1578 (    struct Maybe_34  x1276 ,   struct envunion1580  fun1278 ) {
    struct Maybe_34  dref1279 = (  x1276 );
    if ( dref1279.tag == Maybe_34_None_t ) {
        return ( (struct Maybe_34) { .tag = Maybe_34_None_t } );
    }
    else {
        if ( dref1279.tag == Maybe_34_Just_t ) {
            struct envunion1580  temp1581 = (  fun1278 );
            return ( ( Maybe_34_Just ) ( ( temp1581.fun ( &temp1581.env ,  ( dref1279 .stuff .Maybe_34_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_26   lam1582 (   struct env1579* env ,    struct Pos_26  sel4321 ) {
    struct Pos_26  temp1583 = (  sel4321 );
    temp1583 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4317 ) ? (  op_dash_sub173 ( ( (  sel4321 ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) ) : ( (  sel4321 ) .f_bi ) );
    return ( temp1583 );
}

static  enum Unit_8   dedent_dash_selection1570 (   struct env231* env ,    struct Pane_227 *  self4315 ) {
    struct envunion233  temp1571 = ( (struct envunion233){ .fun = (  enum Unit_8  (*) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  ) )begin_dash_changeset1555 , .env =  env->envinst141 } );
    ( temp1571.fun ( &temp1571.env ,  ( ( * (  self4315 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4315 ) ) .f_cursor ) , .f_sel = ( ( * (  self4315 ) ) .f_sel ) } ) ) );
    struct Pos_26  temp1572 = ( (  min_dash_pos1492 ) ( (  self4315 ) ) );
    temp1572 .  f_bi = (  from_dash_integral67 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4316 = (  eq582 ( ( (  char_dash_at1343 ) ( (  self4315 ) ,  ( temp1572 ) ) ) , ( (  from_dash_charlike353 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_26  temp1573 = ( (  max_dash_pos1481 ) ( (  self4315 ) ) );
    temp1573 .  f_bi = (  from_dash_integral67 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4317 = (  eq582 ( ( (  char_dash_at1343 ) ( (  self4315 ) ,  ( temp1573 ) ) ) , ( (  from_dash_charlike353 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_162  temp1574 =  into_dash_iter163 ( ( (  to172 ) ( ( ( (  min_dash_pos1492 ) ( (  self4315 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1481 ) ( (  self4315 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_164  __cond1575 =  next165 (&temp1574);
        if (  __cond1575 .tag == 0 ) {
            break;
        }
        int32_t  line4319 =  __cond1575 .stuff .Maybe_164_Just_s .field0;
        if ( (  eq582 ( ( (  char_dash_at1343 ) ( (  self4315 ) ,  ( (struct Pos_26) { .f_line = (  line4319 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike353 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion232  temp1576 = ( (struct envunion232){ .fun = (  struct Maybe_214  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_214  ) )change1170 , .env =  env->envinst136 } );
            ( temp1576.fun ( &temp1576.env ,  ( ( * (  self4315 ) ) .f_buf ) ,  ( (struct Pos_26) { .f_line = (  line4319 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (struct Pos_26) { .f_line = (  line4319 ) , .f_bi = (  from_dash_integral67 ( 1 ) ) } ) ,  ( (  from_dash_string207 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_214) { .tag = Maybe_214_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1561 ) ( ( ( * (  self4315 ) ) .f_buf ) ) );
    struct Pos_26  temp1577 = ( ( * (  self4315 ) ) .f_cursor );
    temp1577 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4316 ) ? (  op_dash_sub173 ( ( ( ( * (  self4315 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral67 ( 1 ) ) ) ) : ( ( ( * (  self4315 ) ) .f_cursor ) .f_bi ) );
    struct env1579 envinst1579 = {
        .last_dash_char_dash_was_dash_tab4317 =  last_dash_char_dash_was_dash_tab4317 ,
    };
    ( (  set_dash_cursors1093 ) ( (  self4315 ) ,  ( temp1577 ) ,  ( (  fmap_dash_maybe1578 ) ( ( ( * (  self4315 ) ) .f_sel ) ,  ( (struct envunion1580){ .fun = (  struct Pos_26  (*) (  struct env1579*  ,    struct Pos_26  ) )lam1582 , .env =  envinst1579 } ) ) ) ,  ( CursorMovement_1094_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1587 (  ) {
    int32_t  temp1588;
    return (  temp1588 );
}

static  int32_t   or_dash_fail1586 (    struct Maybe_164  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_164  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_164_None_t ) {
        ( (  panic1214 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1587 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_164_Just_t ) {
            return ( dref1730 .stuff .Maybe_164_Just_s .field0 );
        }
    }
}

struct env1591 {
    struct Pane_227 *  self4330;
    ;
};

struct envunion1592 {
    int32_t  (*fun) (  struct env1591*  ,    int32_t  );
    struct env1591 env;
};

struct Map_1590 {
    struct RangeIter_162  field0;
    struct envunion1592  field1;
};

static struct Map_1590 Map_1590_Map (  struct RangeIter_162  field0 , struct envunion1592  field1 ) {
    return ( struct Map_1590 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1590   into_dash_iter1594 (    struct Map_1590  self797 ) {
    return (  self797 );
}

static  struct Maybe_164   next1595 (    struct Map_1590 *  dref799 ) {
    struct Maybe_164  dref802 = ( (  next165 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_164_None_t ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_164_Just_t ) {
            struct envunion1592  temp1596 = ( (* dref799 ) .field1 );
            return ( ( Maybe_164_Just ) ( ( temp1596.fun ( &temp1596.env ,  ( dref802 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_164   reduce1593 (    struct Map_1590  iterable1094 ,    struct Maybe_164  base1096 ,    struct Maybe_164 (*  fun1098 )(    int32_t  ,    struct Maybe_164  ) ) {
    struct Maybe_164  x1099 = (  base1096 );
    struct Map_1590  it1100 = ( (  into_dash_iter1594 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next1595 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1597 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1597);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_164  temp1598;
    return (  temp1598 );
}

struct env1601 {
    ;
    int32_t  x1244;
};

struct envunion1602 {
    struct Maybe_164  (*fun) (  struct env1601*  ,    int32_t  );
    struct env1601 env;
};

static  struct Maybe_164   maybe1600 (    struct Maybe_164  x1283 ,   struct envunion1602  fun1285 ,    struct Maybe_164  default1287 ) {
    struct envunion1602  temp1603 = (  fun1285 );
    return ( {  struct Maybe_164  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_164_Just_t ? ( temp1603.fun ( &temp1603.env ,  ( dref1288 .stuff .Maybe_164_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  struct Maybe_164   lam1604 (   struct env1601* env ,    int32_t  lm1313 ) {
    return ( ( Maybe_164_Just ) ( ( (  min635 ) ( (  lm1313 ) ,  ( env->x1244 ) ) ) ) );
}

static  struct Maybe_164   lam1599 (    int32_t  x1244 ,    struct Maybe_164  last_dash_min1246 ) {
    struct env1601 envinst1601 = {
        .x1244 =  x1244 ,
    };
    return ( (  maybe1600 ) ( (  last_dash_min1246 ) ,  ( (struct envunion1602){ .fun = (  struct Maybe_164  (*) (  struct env1601*  ,    int32_t  ) )lam1604 , .env =  envinst1601 } ) ,  ( ( Maybe_164_Just ) ( (  x1244 ) ) ) ) );
}

static  struct Maybe_164   minimum1589 (    struct Map_1590  it1242 ) {
    return ( (  reduce1593 ) ( (  it1242 ) ,  ( (struct Maybe_164) { .tag = Maybe_164_None_t } ) ,  (  lam1599 ) ) );
}

static  struct Map_1590   map1605 (    struct Range_159  iterable806 ,   struct envunion1592  fun808 ) {
    struct RangeIter_162  it809 = ( (  into_dash_iter163 ) ( (  iterable806 ) ) );
    return ( ( Map_1590_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  int32_t   lam1606 (   struct env1591* env ,    int32_t  ln4334 ) {
    return ( (  indent_dash_at_dash_line1148 ) ( ( env->self4330 ) ,  (  ln4334 ) ) );
}

struct env1608 {
    ;
    struct Pane_227 *  self4330;
    ;
};

struct envunion1609 {
    bool  (*fun) (  struct env1608*  ,    int32_t  );
    struct env1608 env;
};

struct env1611 {
    struct envunion1609  fun1127;
};

struct envunion1612 {
    bool  (*fun) (  struct env1611*  ,    int32_t  ,    bool  );
    struct env1611 env;
};

static  bool   reduce1610 (    struct Range_159  iterable1094 ,    bool  base1096 ,   struct envunion1612  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1612  temp1613 = (  fun1098 );
                x1099 = ( temp1613.fun ( &temp1613.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1614 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1614);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1615;
    return (  temp1615 );
}

static  bool   lam1616 (   struct env1611* env ,    int32_t  e1129 ,    bool  x1131 ) {
    struct envunion1609  temp1617 = ( env->fun1127 );
    return ( ( temp1617.fun ( &temp1617.env ,  (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1607 (    struct Range_159  it1125 ,   struct envunion1609  fun1127 ) {
    struct env1611 envinst1611 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1610 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1612){ .fun = (  bool  (*) (  struct env1611*  ,    int32_t  ,    bool  ) )lam1616 , .env =  envinst1611 } ) ) );
}

static  bool   is_dash_just1619 (    struct Maybe_1508  m1261 ) {
    struct Maybe_1508  dref1262 = (  m1261 );
    if ( dref1262.tag == Maybe_1508_None_t ) {
        return ( false );
    }
    else {
        if ( dref1262.tag == Maybe_1508_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1621 (    struct Char_65  c4262 ) {
    return ( ( !  eq582 ( (  c4262 ) , ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1342 ) ( (  c4262 ) ) ) );
}

static  struct Maybe_1508   line_dash_begins_dash_with_dash_comment1620 (    struct Pane_227 *  self4256 ,    int32_t  line4258 ) {
    int32_t  indent4259 = ( (  indent_dash_at_dash_line1148 ) ( (  self4256 ) ,  (  line4258 ) ) );
    if ( (  eq582 ( ( (  char_dash_at1343 ) ( (  self4256 ) ,  ( (  mk671 ) ( (  line4258 ) ,  (  indent4259 ) ) ) ) ) , ( (  from_dash_charlike353 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4260 = (  op_dash_add168 ( (  indent4259 ) , (  from_dash_integral67 ( 1 ) ) ) );
        while ( ( (  lam1621 ) ( ( (  char_dash_at1343 ) ( (  self4256 ) ,  ( (  mk671 ) ( (  line4258 ) ,  (  i4260 ) ) ) ) ) ) ) ) {
            i4260 = (  op_dash_add168 ( (  i4260 ) , (  from_dash_integral67 ( 1 ) ) ) );
        }
        return ( ( Maybe_1508_Just ) ( ( ( Tuple2_238_Tuple2 ) ( ( (  mk671 ) ( (  line4258 ) ,  (  indent4259 ) ) ) ,  ( (  mk671 ) ( (  line4258 ) ,  (  i4260 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1508) { .tag = Maybe_1508_None_t } );
    }
}

static  bool   lam1618 (   struct env1608* env ,    int32_t  ln4337 ) {
    return ( (  is_dash_just1619 ) ( ( (  line_dash_begins_dash_with_dash_comment1620 ) ( ( env->self4330 ) ,  (  ln4337 ) ) ) ) );
}

static  struct Tuple2_238   undefined1627 (  ) {
    struct Tuple2_238  temp1628;
    return (  temp1628 );
}

static  struct Tuple2_238   or_dash_fail1626 (    struct Maybe_1508  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_1508  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1508_None_t ) {
        ( (  panic1214 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1627 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1508_Just_t ) {
            return ( dref1730 .stuff .Maybe_1508_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1585 (   struct env236* env ,    struct Pane_227 *  self4330 ) {
    int32_t  from_dash_line4331 = ( ( (  min_dash_pos1492 ) ( (  self4330 ) ) ) .f_line );
    int32_t  to_dash_line4332 = ( ( (  max_dash_pos1481 ) ( (  self4330 ) ) ) .f_line );
    struct env1591 envinst1591 = {
        .self4330 =  self4330 ,
    };
    int32_t  min_dash_indent4335 = ( (  or_dash_fail1586 ) ( ( (  minimum1589 ) ( ( (  map1605 ) ( ( (  to172 ) ( (  from_dash_line4331 ) ,  (  to_dash_line4332 ) ) ) ,  ( (struct envunion1592){ .fun = (  int32_t  (*) (  struct env1591*  ,    int32_t  ) )lam1606 , .env =  envinst1591 } ) ) ) ) ) ,  ( (  from_dash_string207 ) ( ( "no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1608 envinst1608 = {
        .self4330 =  self4330 ,
    };
    bool  all_dash_have_dash_comment4338 = ( (  all1607 ) ( ( (  to172 ) ( (  from_dash_line4331 ) ,  (  to_dash_line4332 ) ) ) ,  ( (struct envunion1609){ .fun = (  bool  (*) (  struct env1608*  ,    int32_t  ) )lam1618 , .env =  envinst1608 } ) ) );
    struct envunion239  temp1622 = ( (struct envunion239){ .fun = (  enum Unit_8  (*) (  struct env141*  ,    struct TextBuf_114 *  ,    struct Cursors_33  ) )begin_dash_changeset1555 , .env =  env->envinst141 } );
    ( temp1622.fun ( &temp1622.env ,  ( ( * (  self4330 ) ) .f_buf ) ,  ( (struct Cursors_33) { .f_cur = ( ( * (  self4330 ) ) .f_cursor ) , .f_sel = ( ( * (  self4330 ) ) .f_sel ) } ) ) );
    struct RangeIter_162  temp1623 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_line4331 ) ,  (  to_dash_line4332 ) ) ) );
    while (true) {
        struct Maybe_164  __cond1624 =  next165 (&temp1623);
        if (  __cond1624 .tag == 0 ) {
            break;
        }
        int32_t  line4340 =  __cond1624 .stuff .Maybe_164_Just_s .field0;
        struct Char_65  comment_dash_str4341 = ( (  from_dash_charlike353 ) ( ( "#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4338 ) ) ) {
            ( (  set_dash_cursors1093 ) ( (  self4330 ) ,  ( (  mk671 ) ( (  line4340 ) ,  (  min_dash_indent4335 ) ) ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_NoChanges ) ) );
            struct envunion240  temp1625 = ( (struct envunion240){ .fun = (  enum Unit_8  (*) (  struct env212*  ,    struct Pane_227 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1168 , .env =  env->envinst212 } );
            ( temp1625.fun ( &temp1625.env ,  (  self4330 ) ,  ( (  from_dash_string207 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_238  tup4342 = ( (  or_dash_fail1626 ) ( ( (  line_dash_begins_dash_with_dash_comment1620 ) ( (  self4330 ) ,  (  line4340 ) ) ) ,  ( (  from_dash_string207 ) ( ( "(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion237  temp1629 = ( (struct envunion237){ .fun = (  enum Unit_8  (*) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  ) )replace_dash_selection1412 , .env =  env->envinst221 } );
            ( temp1629.fun ( &temp1629.env ,  (  self4330 ) ,  ( ( Tuple2_238_Tuple2 ) ( ( (  fst1403 ) ( (  tup4342 ) ) ) ,  ( (  snd1404 ) ( (  tup4342 ) ) ) ) ) ,  ( (  from_dash_string207 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1561 ) ( ( ( * (  self4330 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1091 (   struct env260* env ,    struct Editor_256 *  ed4469 ,    struct Key_274  key4471 ) {
    struct Key_274  dref4472 = (  key4471 );
    if ( dref4472.tag == Key_274_Char_t ) {
        if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4469 ) .f_running = ( false );
        } else {
            if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1092 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ) );
            } else {
                if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1137 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ) );
                } else {
                    if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1140 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
                    } else {
                        if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1144 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
                        } else {
                            if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1145 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( Mode_228_Insert ) ) );
                            } else {
                                if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1147 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ) );
                                    ( (  set_dash_mode1145 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( Mode_228_Insert ) ) );
                                } else {
                                    if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1165 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ) );
                                        ( (  set_dash_mode1145 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( Mode_228_Insert ) ) );
                                    } else {
                                        if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_227 *  pane4474 = ( (  pane1136 ) ( (  ed4469 ) ) );
                                            int32_t  indent4475 = ( (  indent_dash_at_dash_line1148 ) ( (  pane4474 ) ,  ( ( ( * (  pane4474 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1165 ) ( (  pane4474 ) ) );
                                            struct envunion265  temp1167 = ( (struct envunion265){ .fun = (  enum Unit_8  (*) (  struct env212*  ,    struct Pane_227 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1168 , .env =  env->envinst212 } );
                                            ( temp1167.fun ( &temp1167.env ,  (  pane4474 ) ,  ( (  from_dash_charlike1230 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1137 ) ( (  pane4474 ) ) );
                                            struct envunion263  temp1306 = ( (struct envunion263){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_227 *  ,    int32_t  ) )indent_dash_at_dash_current1307 , .env =  env->envinst234 } );
                                            ( temp1306.fun ( &temp1306.env ,  (  pane4474 ) ,  (  indent4475 ) ) );
                                            ( (  set_dash_mode1145 ) ( (  pane4474 ) ,  ( Mode_228_Insert ) ) );
                                        } else {
                                            if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_227 *  pane4476 = ( (  pane1136 ) ( (  ed4469 ) ) );
                                                int32_t  indent4477 = ( (  indent_dash_at_dash_line1148 ) ( (  pane4476 ) ,  ( ( ( * (  pane4476 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1313 ) ( (  pane4476 ) ) );
                                                struct envunion1316  temp1315 = ( (struct envunion1316){ .fun = (  enum Unit_8  (*) (  struct env212*  ,    struct Pane_227 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1168 , .env =  env->envinst212 } );
                                                ( temp1315.fun ( &temp1315.env ,  (  pane4476 ) ,  ( (  from_dash_charlike1230 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1318  temp1317 = ( (struct envunion1318){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_227 *  ,    int32_t  ) )indent_dash_at_dash_current1307 , .env =  env->envinst234 } );
                                                ( temp1317.fun ( &temp1317.env ,  (  pane4476 ) ,  (  indent4477 ) ) );
                                                ( (  set_dash_mode1145 ) ( (  pane4476 ) ,  ( Mode_228_Insert ) ) );
                                            } else {
                                                if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1319 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( MoveDirection_1320_MoveFwd ) ,  ( MoveTarget_1321_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1319 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( MoveDirection_1320_MoveFwd ) ,  ( MoveTarget_1321_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1319 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( MoveDirection_1320_MoveBwd ) ,  ( MoveTarget_1321_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion269  temp1355 = ( (struct envunion269){ .fun = (  enum Unit_8  (*) (  struct env219*  ,    struct Pane_227 *  ) )redo1356 , .env =  env->envinst219 } );
                                                                ( temp1355.fun ( &temp1355.env ,  ( (  pane1136 ) ( (  ed4469 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion268  temp1380 = ( (struct envunion268){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Pane_227 *  ) )undo1381 , .env =  env->envinst217 } );
                                                                    ( temp1380.fun ( &temp1380.env ,  ( (  pane1136 ) ( (  ed4469 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion262  temp1398 = ( (struct envunion262){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_256 *  ) )copy_dash_selection_dash_to_dash_clipboard1399 , .env =  env->envinst241 } );
                                                                        ( temp1398.fun ( &temp1398.env ,  (  ed4469 ) ) );
                                                                        struct envunion261  temp1411 = ( (struct envunion261){ .fun = (  enum Unit_8  (*) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  ) )replace_dash_selection1412 , .env =  env->envinst221 } );
                                                                        ( temp1411.fun ( &temp1411.env ,  ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( (  selection1400 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ) ) ,  ( (  from_dash_string207 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1145 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( Mode_228_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1420  temp1419 = ( (struct envunion1420){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_256 *  ) )copy_dash_selection_dash_to_dash_clipboard1399 , .env =  env->envinst241 } );
                                                                            ( temp1419.fun ( &temp1419.env ,  (  ed4469 ) ) );
                                                                            struct envunion1422  temp1421 = ( (struct envunion1422){ .fun = (  enum Unit_8  (*) (  struct env221*  ,    struct Pane_227 *  ,    struct Tuple2_238  ,    struct StrView_27  ) )replace_dash_selection1412 , .env =  env->envinst221 } );
                                                                            ( temp1421.fun ( &temp1421.env ,  ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( (  selection1400 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ) ) ,  ( (  from_dash_string207 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1145 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( Mode_228_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1424  temp1423 = ( (struct envunion1424){ .fun = (  enum Unit_8  (*) (  struct env241*  ,    struct Editor_256 *  ) )copy_dash_selection_dash_to_dash_clipboard1399 , .env =  env->envinst241 } );
                                                                                ( temp1423.fun ( &temp1423.env ,  (  ed4469 ) ) );
                                                                                size_t  bytes_dash_yanked4478 = ( (  num_dash_bytes1132 ) ( ( (  or_dash_else557 ) ( ( ( * (  ed4469 ) ) .f_clipboard ) ,  ( (  from_dash_string207 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion264  temp1425 = ( (struct envunion264){ .fun = (  enum Unit_8  (*) (  struct env243*  ,    struct Editor_256 *  ,    struct StrConcat_86  ) )set_dash_msg1426 , .env =  env->envinst243 } );
                                                                                ( temp1425.fun ( &temp1425.env ,  (  ed4469 ) ,  ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4478 ) ) ) ,  ( (  from_dash_string207 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1476 envinst1476 = {
                                                                                        .envinst221 = env->envinst221 ,
                                                                                        .ed4469 =  ed4469 ,
                                                                                    };
                                                                                    ( (  if_dash_just1475 ) ( ( ( * (  ed4469 ) ) .f_clipboard ) ,  ( (struct envunion1478){ .fun = (  enum Unit_8  (*) (  struct env1476*  ,    struct StrView_27  ) )lam1480 , .env =  envinst1476 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1487 envinst1487 = {
                                                                                            .envinst221 = env->envinst221 ,
                                                                                            .ed4469 =  ed4469 ,
                                                                                        };
                                                                                        ( (  if_dash_just1486 ) ( ( ( * (  ed4469 ) ) .f_clipboard ) ,  ( (struct envunion1489){ .fun = (  enum Unit_8  (*) (  struct env1487*  ,    struct StrView_27  ) )lam1491 , .env =  envinst1487 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1496 envinst1496 = {
                                                                                                .envinst221 = env->envinst221 ,
                                                                                                .ed4469 =  ed4469 ,
                                                                                            };
                                                                                            ( (  if_dash_just1495 ) ( ( ( * (  ed4469 ) ) .f_clipboard ) ,  ( (struct envunion1498){ .fun = (  enum Unit_8  (*) (  struct env1496*  ,    struct StrView_27  ) )lam1500 , .env =  envinst1496 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1502 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1145 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( Mode_228_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1506 ) ( ( ( ( * (  ed4469 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4469 ) .f_pane .f_sel = ( ( Maybe_34_Just ) ( ( ( ( * (  ed4469 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4469 ) .f_mode = ( ( EditorMode_257_Cmd ) ( ( ( * ( (  pane1136 ) ( (  ed4469 ) ) ) ) .f_cursor ) ,  ( (  mk1430 ) ( ( ( * (  ed4469 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4469 ) .f_mode = ( ( EditorMode_257_Search ) ( ( ( * ( (  pane1136 ) ( (  ed4469 ) ) ) ) .f_cursor ) ,  ( (  mk1430 ) ( ( ( * (  ed4469 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1507 ) ( (  ed4469 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1543 ) ( (  ed4469 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion270  temp1552 = ( (struct envunion270){ .fun = (  enum Unit_8  (*) (  struct env225*  ,    struct Pane_227 *  ) )indent_dash_selection1553 , .env =  env->envinst225 } );
                                                                                                                        ( temp1552.fun ( &temp1552.env ,  ( (  pane1136 ) ( (  ed4469 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq948 ( ( dref4472 .stuff .Key_274_Char_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion267  temp1569 = ( (struct envunion267){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Pane_227 *  ) )dedent_dash_selection1570 , .env =  env->envinst231 } );
                                                                                                                            ( temp1569.fun ( &temp1569.env ,  ( (  pane1136 ) ( (  ed4469 ) ) ) ) );
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
        if ( dref4472.tag == Key_274_Escape_t ) {
            ( (  set_dash_mode1145 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  ( Mode_228_Normal ) ) );
        }
        else {
            if ( dref4472.tag == Key_274_Ctrl_t ) {
                if ( (  eq948 ( ( dref4472 .stuff .Key_274_Ctrl_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion266  temp1584 = ( (struct envunion266){ .fun = (  enum Unit_8  (*) (  struct env236*  ,    struct Pane_227 *  ) )toggle_dash_comment1585 , .env =  env->envinst236 } );
                    ( temp1584.fun ( &temp1584.env ,  ( (  pane1136 ) ( (  ed4469 ) ) ) ) );
                } else {
                    if ( (  eq948 ( ( dref4472 .stuff .Key_274_Ctrl_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1144 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  (  from_dash_integral67 ( 15 ) ) ) );
                    } else {
                        if ( (  eq948 ( ( dref4472 .stuff .Key_274_Ctrl_s .field0 ) , ( (  from_dash_charlike516 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1140 ) ( ( (  pane1136 ) ( (  ed4469 ) ) ) ,  (  from_dash_integral67 ( 15 ) ) ) );
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

struct envunion1631 {
    enum Unit_8  (*fun) (  struct env260*  ,    struct Editor_256 *  ,    struct Key_274  );
    struct env260 env;
};

static  enum Unit_8   backspace1635 (   struct env215* env ,    struct Pane_227 *  self4271 ) {
    struct Pos_26  prev_dash_cur4272 = ( ( * (  self4271 ) ) .f_cursor );
    ( (  move_dash_left1092 ) ( (  self4271 ) ) );
    struct envunion216  temp1636 = ( (struct envunion216){ .fun = (  struct Maybe_214  (*) (  struct env136*  ,    struct TextBuf_114 *  ,    struct Pos_26  ,    struct Pos_26  ,    struct StrView_27  ,    struct Maybe_214  ) )change1170 , .env =  env->envinst136 } );
    ( temp1636.fun ( &temp1636.env ,  ( ( * (  self4271 ) ) .f_buf ) ,  ( ( * (  self4271 ) ) .f_cursor ) ,  (  prev_dash_cur4272 ) ,  ( (  from_dash_string207 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_214) { .tag = Maybe_214_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1638 {
    char _arr [1];
};

static  char *   cast1639 (    struct Array_1638 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_962   as_dash_slice1637 (    struct Array_1638 *  arr2277 ) {
    return ( (struct Slice_962) { .f_ptr = ( (  cast1639 ) ( (  arr2277 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1638   from_dash_listlike1641 (    struct Array_1638  self330 ) {
    return (  self330 );
}

struct envunion1643 {
    enum Unit_8  (*fun) (  struct env212*  ,    struct Pane_227 *  ,    struct StrView_27  );
    struct env212 env;
};

struct Scanner_1646 {
    struct StrView_27  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1646   mk_dash_from_dash_strview1648 (    struct StrView_27  s3200 ) {
    return ( (struct Scanner_1646) { .f_s = (  s3200 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1654 {
    struct StrViewIter_62  f_it;
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

static  struct Maybe_304   next1658 (    struct TakeWhile_1654 *  self965 ) {
    struct Maybe_304  mx966 = ( (  next688 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_304  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_304_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_304_Just ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
            }
        }
    }
}

static  struct Maybe_254   next1657 (    struct Map_1653 *  dref799 ) {
    struct Maybe_304  dref802 = ( (  next1658 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_304_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_304_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1655 (    struct Map_1653  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1653  it1100 = ( (  into_dash_iter1656 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1101 = ( (  next1657 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_254_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_254_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1659 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1659);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1660;
    return (  temp1660 );
}

static  size_t   lam1661 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add318 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1652 (    struct Map_1653  it1111 ) {
    return ( (  reduce1655 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1661 ) ) );
}

static  struct TakeWhile_1654   into_dash_iter1663 (    struct TakeWhile_1654  self962 ) {
    return (  self962 );
}

static  struct Map_1653   map1662 (    struct TakeWhile_1654  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1654  it809 = ( (  into_dash_iter1663 ) ( (  iterable806 ) ) );
    return ( ( Map_1653_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1654   take_dash_while1664 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1654) { .f_it = ( (  into_dash_iter786 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1665 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1651 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1652 ) ( ( (  map1662 ) ( ( (  take_dash_while1664 ) ( ( (  chars700 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1665 ) ) ) ) );
    return ( (  byte_dash_substr518 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1650 (    struct Scanner_1646 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1651 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1533 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1132 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

static  enum Unit_8   drop_dash_str_dash_while1649 (    struct Scanner_1646 *  sc3278 ,    bool (*  fun3280 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1650 ) ( (  sc3278 ) ,  (  fun3280 ) ) );
    return ( Unit_8_Unit );
}

struct TakeWhile_1670 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1669 {
    struct TakeWhile_1670  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1669 Map_1669_Map (  struct TakeWhile_1670  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1669 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1669   into_dash_iter1672 (    struct Map_1669  self797 ) {
    return (  self797 );
}

static  struct Maybe_304   next1674 (    struct TakeWhile_1670 *  self965 ) {
    struct Maybe_304  mx966 = ( (  next688 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_304  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_304_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_304_Just ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
            }
        }
    }
}

static  struct Maybe_254   next1673 (    struct Map_1669 *  dref799 ) {
    struct Maybe_304  dref802 = ( (  next1674 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_304_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_304_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1671 (    struct Map_1669  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1669  it1100 = ( (  into_dash_iter1672 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1101 = ( (  next1673 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_254_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_254_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1675 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1675);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1676;
    return (  temp1676 );
}

static  size_t   lam1677 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add318 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1668 (    struct Map_1669  it1111 ) {
    return ( (  reduce1671 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1677 ) ) );
}

static  struct TakeWhile_1670   into_dash_iter1679 (    struct TakeWhile_1670  self962 ) {
    return (  self962 );
}

static  struct Map_1669   map1678 (    struct TakeWhile_1670  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1670  it809 = ( (  into_dash_iter1679 ) ( (  iterable806 ) ) );
    return ( ( Map_1669_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1670   take_dash_while1680 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1670) { .f_it = ( (  into_dash_iter786 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1681 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1667 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1668 ) ( ( (  map1678 ) ( ( (  take_dash_while1680 ) ( ( (  chars700 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1681 ) ) ) ) );
    return ( (  byte_dash_substr518 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1666 (    struct Scanner_1646 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1667 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1533 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1132 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

static  bool   is_dash_not_dash_whitespace1682 (    struct Char_65  c2387 ) {
    return ( ! ( (  is_dash_whitespace1342 ) ( (  c2387 ) ) ) );
}

static  bool   eq1683 (    struct StrView_27  l2214 ,    struct StrView_27  r2216 ) {
    return (  eq1517 ( ( (  l2214 ) .f_contents ) , ( (  r2216 ) .f_contents ) ) );
}

static  struct Maybe_304   head1685 (    struct StrView_27  it1143 ) {
    struct StrViewIter_62  temp1686 = ( (  into_dash_iter701 ) ( (  it1143 ) ) );
    return ( (  next688 ) ( ( &temp1686 ) ) );
}

static  bool   null1684 (    struct StrView_27  it1152 ) {
    struct Maybe_304  dref1153 = ( (  head1685 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_304_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_94   maybe1689 (    struct Maybe_94  x1283 ,    struct Maybe_94 (*  fun1285 )(    struct StrView_27  ) ,    struct Maybe_94  default1287 ) {
    return ( {  struct Maybe_94  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_94_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_94_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  bool   is_dash_none1690 (    struct Maybe_94  m1265 ) {
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

struct StrConcatIter_1699 {
    struct StrViewIter_62  f_left;
    struct AppendIter_63  f_right;
};

struct env1700 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1701 {
    enum Unit_8  (*fun) (  struct env1700*  ,    struct Char_65  );
    struct env1700 env;
};

static  struct StrConcatIter_1699   into_dash_iter1703 (    struct StrConcatIter_1699  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_304   next1704 (    struct StrConcatIter_1699 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1698 (    struct StrConcatIter_1699  iterable1075 ,   struct envunion1701  fun1077 ) {
    struct StrConcatIter_1699  temp1702 = ( (  into_dash_iter1703 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1699 *  it1078 = ( &temp1702 );
    while ( ( true ) ) {
        struct Maybe_304  dref1079 = ( (  next1704 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_304_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_304_Just_t ) {
                struct envunion1701  temp1705 = (  fun1077 );
                ( temp1705.fun ( &temp1705.env ,  ( dref1079 .stuff .Maybe_304_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_1699   into_dash_iter1707 (    struct StrConcat_81  dref1505 ) {
    return ( (struct StrConcatIter_1699) { .f_left = ( (  chars700 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1699   chars1706 (    struct StrConcat_81  self1516 ) {
    return ( (  into_dash_iter1707 ) ( (  self1516 ) ) );
}

static  enum Unit_8   lam1708 (   struct env1700* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1709 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1463 , .env =  env->envinst71 } );
    return ( temp1709.fun ( &temp1709.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1697 (   struct env78* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrConcat_81  s2780 ) {
    struct env1700 envinst1700 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1698 ) ( ( (  chars1706 ) ( (  s2780 ) ) ) ,  ( (struct envunion1701){ .fun = (  enum Unit_8  (*) (  struct env1700*  ,    struct Char_65  ) )lam1708 , .env =  envinst1700 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   writeln1695 (   struct env79* env ,    struct StrBuilder_73 *  builder2785 ,    struct StrView_27  s2787 ) {
    struct envunion80  temp1696 = ( (struct envunion80){ .fun = (  enum Unit_8  (*) (  struct env78*  ,    struct StrBuilder_73 *  ,    struct StrConcat_81  ) )write1697 , .env =  env->envinst78 } );
    return ( temp1696.fun ( &temp1696.env ,  (  builder2785 ) ,  ( ( StrConcat_81_StrConcat ) ( (  s2787 ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrView_27   undefined1711 (  ) {
    struct StrView_27  temp1712;
    return (  temp1712 );
}

static  struct StrView_27   or_dash_fail1710 (    struct Maybe_94  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_94  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_94_None_t ) {
        ( (  panic1214 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1711 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_94_Just_t ) {
            return ( dref1730 .stuff .Maybe_94_Just_s .field0 );
        }
    }
}

static  struct StrViewIter_62   chars1715 (    struct StrBuilder_73  s2830 ) {
    return ( (  into_dash_iter701 ) ( ( (  as_dash_str1472 ) ( ( & (  s2830 ) ) ) ) ) );
}

static  struct StrViewIter_62   chars1714 (    struct StrBuilder_73 *  self1547 ) {
    return ( (  chars1715 ) ( ( * (  self1547 ) ) ) );
}

static  int32_t   fprintf_dash_char1716 (    FILE *  file765 ,    struct Char_65  c767 ) {
    struct CharDestructured_344  dref768 = ( (  destructure346 ) ( (  c767 ) ) );
    if ( dref768.tag == CharDestructured_344_Ref_t ) {
        return ( ( fprintf ) ( (  file765 ) ,  ( (  from_dash_string68 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32336 ) ( ( ( dref768 .stuff .CharDestructured_344_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref768 .stuff .CharDestructured_344_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref768.tag == CharDestructured_344_Scalar_t ) {
            if ( (  cmp179 ( ( ( dref768 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) , (  from_dash_integral174 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1717 = ( (  from_dash_string68 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp1717);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( ( fprintf ) ( (  file765 ) ,  ( (  from_dash_string68 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8153 ) ( ( ( dref768 .stuff .CharDestructured_344_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
}

static  bool   unreachable1718 (  ) {
    ( (  print1348 ) ( ( (  from_dash_string207 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1349 ) ( ) );
}

static  bool   try_dash_write_dash_contents1713 (    const char*  filename2976 ,    struct StrBuilder_73 *  contents2978 ) {
    FILE *  file2979 = ( ( fopen ) ( (  filename2976 ) ,  ( (  from_dash_charlike495 ) ( ( "w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null496 ) ( (  file2979 ) ) ) ) {
        return ( false );
    }
    struct StrViewIter_62  it2980 = ( (  chars1714 ) ( (  contents2978 ) ) );
    while ( ( true ) ) {
        struct Maybe_304  dref2981 = ( (  next688 ) ( ( & (  it2980 ) ) ) );
        if ( dref2981.tag == Maybe_304_None_t ) {
            ( ( fclose ) ( (  file2979 ) ) );
            return ( true );
        }
        else {
            if ( dref2981.tag == Maybe_304_Just_t ) {
                int32_t  chars_dash_written2983 = ( (  fprintf_dash_char1716 ) ( (  file2979 ) ,  ( dref2981 .stuff .Maybe_304_Just_s .field0 ) ) );
                if ( (  cmp166 ( (  chars_dash_written2983 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable1718 ) ( ) );
}

static  enum Unit_8   free1719 (    struct StrBuilder_73 *  builder2822 ) {
    ( (  free604 ) ( ( & ( ( * (  builder2822 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   is_dash_just1720 (    struct Maybe_94  m1261 ) {
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

static  struct Maybe_254   write_dash_to_dash_file1688 (   struct env119* env ,    struct TextBuf_114 *  self3780 ,    struct Maybe_94  altname3782 ) {
    struct Maybe_94  filename3783 = ( (  maybe1689 ) ( (  altname3782 ) ,  ( Maybe_94_Just ) ,  ( ( * (  self3780 ) ) .f_filename ) ) );
    if ( ( (  is_dash_none1690 ) ( (  filename3783 ) ) ) ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    enum CAllocator_10  al3784 = ( ( * (  self3780 ) ) .f_al );
    struct StrBuilder_73  temp1691 = ( (  mk1430 ) ( (  al3784 ) ) );
    struct StrBuilder_73 *  sb3785 = ( &temp1691 );
    struct RangeIter_162  temp1692 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  num_dash_lines1139 ) ( (  self3780 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1693 =  next165 (&temp1692);
        if (  __cond1693 .tag == 0 ) {
            break;
        }
        int32_t  ln3787 =  __cond1693 .stuff .Maybe_164_Just_s .field0;
        struct envunion120  temp1694 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env79*  ,    struct StrBuilder_73 *  ,    struct StrView_27  ) )writeln1695 , .env =  env->envinst79 } );
        ( temp1694.fun ( &temp1694.env ,  (  sb3785 ) ,  ( (  line1099 ) ( (  self3780 ) ,  (  ln3787 ) ) ) ) );
    }
    struct StrView_27  filename03788 = ( (  clone_dash_0461 ) ( ( (  or_dash_fail1710 ) ( (  filename3783 ) ,  ( (  from_dash_string207 ) ( ( "expect filename" ) ,  ( 15 ) ) ) ) ) ,  (  al3784 ) ) );
    bool  result3789 = ( (  try_dash_write_dash_contents1713 ) ( ( (  as_dash_const_dash_str507 ) ( (  filename03788 ) ) ) ,  (  sb3785 ) ) );
    ( (  free509 ) ( (  filename03788 ) ,  (  al3784 ) ) );
    ( (  free1719 ) ( (  sb3785 ) ) );
    if ( ( ! (  result3789 ) ) ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    if ( ( (  is_dash_just1720 ) ( (  altname3782 ) ) ) ) {
        struct Maybe_94  dref3790 = ( ( * (  self3780 ) ) .f_filename );
        if ( dref3790.tag == Maybe_94_Just_t ) {
            ( (  free509 ) ( ( dref3790 .stuff .Maybe_94_Just_s .field0 ) ,  (  al3784 ) ) );
        }
        else {
            if ( dref3790.tag == Maybe_94_None_t ) {
            }
        }
        (*  self3780 ) .f_filename = (  altname3782 );
    }
    return ( ( Maybe_254_Just ) ( ( (  num_dash_bytes1132 ) ( ( (  as_dash_str1472 ) ( (  sb3785 ) ) ) ) ) ) );
}

struct env1729 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1730 {
    enum Unit_8  (*fun) (  struct env1729*  ,    struct Char_65  );
    struct env1729 env;
};

static  enum Unit_8   for_dash_each1728 (    struct StrViewIter_62  iterable1075 ,   struct envunion1730  fun1077 ) {
    struct StrViewIter_62  temp1731 = ( (  into_dash_iter786 ) ( (  iterable1075 ) ) );
    struct StrViewIter_62 *  it1078 = ( &temp1731 );
    while ( ( true ) ) {
        struct Maybe_304  dref1079 = ( (  next688 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_304_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_304_Just_t ) {
                struct envunion1730  temp1732 = (  fun1077 );
                ( temp1732.fun ( &temp1732.env ,  ( dref1079 .stuff .Maybe_304_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1733 (   struct env1729* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1734 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1463 , .env =  env->envinst71 } );
    return ( temp1734.fun ( &temp1734.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1727 (   struct env76* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrView_27  s2780 ) {
    struct env1729 envinst1729 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1728 ) ( ( (  chars700 ) ( (  s2780 ) ) ) ,  ( (struct envunion1730){ .fun = (  enum Unit_8  (*) (  struct env1729*  ,    struct Char_65  ) )lam1733 , .env =  envinst1729 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1724 (   struct env89* env ,    struct StrView_27  s2836 ,    enum CAllocator_10  al2838 ) {
    struct StrBuilder_73  temp1725 = ( (  mk1430 ) ( (  al2838 ) ) );
    struct StrBuilder_73 *  sb2839 = ( &temp1725 );
    struct envunion90  temp1726 = ( (struct envunion90){ .fun = (  enum Unit_8  (*) (  struct env76*  ,    struct StrBuilder_73 *  ,    struct StrView_27  ) )write1727 , .env =  env->envinst76 } );
    ( temp1726.fun ( &temp1726.env ,  (  sb2839 ) ,  (  s2836 ) ) );
    struct envunion88  temp1735 = ( (struct envunion88){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1463 , .env =  env->envinst71 } );
    ( temp1735.fun ( &temp1735.env ,  (  sb2839 ) ,  ( (  nullchar504 ) ( ) ) ) );
    struct StrView_27  dynstr2840 = ( (  as_dash_str1472 ) ( (  sb2839 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2840 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub296 ( ( ( (  dynstr2840 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1722 (   struct env245* env ,    struct Editor_256 *  ed4412 ,    struct StrView_27  s4414 ) {
    ( (  reset_dash_msg1081 ) ( (  ed4412 ) ) );
    struct envunion246  temp1723 = ( (struct envunion246){ .fun = (  struct StrView_27  (*) (  struct env89*  ,    struct StrView_27  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1724 , .env =  env->envinst89 } );
    (*  ed4412 ) .f_msg = ( ( Maybe_94_Just ) ( ( temp1723.fun ( &temp1723.env ,  (  s4414 ) ,  ( ( * (  ed4412 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrCaseIter_1745 {
    enum {
        StrCaseIter_1745_StrCaseIter1_t,
        StrCaseIter_1745_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_62  field0;
        } StrCaseIter_1745_StrCaseIter1_s;
        struct {
            struct StrConcatIter_60  field0;
        } StrCaseIter_1745_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1745 StrCaseIter_1745_StrCaseIter1 (  struct StrViewIter_62  field0 ) {
    return ( struct StrCaseIter_1745 ) { .tag = StrCaseIter_1745_StrCaseIter1_t, .stuff = { .StrCaseIter_1745_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1745 StrCaseIter_1745_StrCaseIter2 (  struct StrConcatIter_60  field0 ) {
    return ( struct StrCaseIter_1745 ) { .tag = StrCaseIter_1745_StrCaseIter2_t, .stuff = { .StrCaseIter_1745_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1744 {
    struct StrViewIter_62  f_left;
    struct StrCaseIter_1745  f_right;
};

struct env1746 {
    struct env71 envinst71;
    struct StrBuilder_73 *  builder2778;
};

struct envunion1747 {
    enum Unit_8  (*fun) (  struct env1746*  ,    struct Char_65  );
    struct env1746 env;
};

static  struct StrConcatIter_1744   into_dash_iter1749 (    struct StrConcatIter_1744  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_304   next1751 (    struct StrCaseIter_1745 *  self1523 ) {
    struct StrCaseIter_1745 *  dref1524 = (  self1523 );
    if ( (* dref1524 ).tag == StrCaseIter_1745_StrCaseIter1_t ) {
        return ( (  next688 ) ( ( & ( (* dref1524 ) .stuff .StrCaseIter_1745_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1524 ).tag == StrCaseIter_1745_StrCaseIter2_t ) {
            return ( (  next686 ) ( ( & ( (* dref1524 ) .stuff .StrCaseIter_1745_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_304   next1750 (    struct StrConcatIter_1744 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next1751 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1743 (    struct StrConcatIter_1744  iterable1075 ,   struct envunion1747  fun1077 ) {
    struct StrConcatIter_1744  temp1748 = ( (  into_dash_iter1749 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_1744 *  it1078 = ( &temp1748 );
    while ( ( true ) ) {
        struct Maybe_304  dref1079 = ( (  next1750 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_304_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_304_Just_t ) {
                struct envunion1747  temp1752 = (  fun1077 );
                ( temp1752.fun ( &temp1752.env ,  ( dref1079 .stuff .Maybe_304_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct StrCase_1756 {
    enum {
        StrCase_1756_StrCase1_t,
        StrCase_1756_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_27  field0;
        } StrCase_1756_StrCase1_s;
        struct {
            struct StrConcat_646  field0;
        } StrCase_1756_StrCase2_s;
    } stuff;
};

static struct StrCase_1756 StrCase_1756_StrCase1 (  struct StrView_27  field0 ) {
    return ( struct StrCase_1756 ) { .tag = StrCase_1756_StrCase1_t, .stuff = { .StrCase_1756_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1756 StrCase_1756_StrCase2 (  struct StrConcat_646  field0 ) {
    return ( struct StrCase_1756 ) { .tag = StrCase_1756_StrCase2_t, .stuff = { .StrCase_1756_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1745   into_dash_iter1759 (    struct StrCase_1756  self1529 ) {
    struct StrCase_1756  dref1530 = (  self1529 );
    if ( dref1530.tag == StrCase_1756_StrCase1_t ) {
        return ( ( StrCaseIter_1745_StrCaseIter1 ) ( ( (  chars700 ) ( ( dref1530 .stuff .StrCase_1756_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1530.tag == StrCase_1756_StrCase2_t ) {
            return ( ( StrCaseIter_1745_StrCaseIter2 ) ( ( (  chars696 ) ( ( dref1530 .stuff .StrCase_1756_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1745   chars1758 (    struct StrCase_1756  self1541 ) {
    return ( (  into_dash_iter1759 ) ( (  self1541 ) ) );
}

static  struct StrCaseIter_1745   chars1755 (    struct Maybe_94  self1555 ) {
    struct StrCase_1756  temp1757;
    struct StrCase_1756  c1556 = (  temp1757 );
    struct Maybe_94  dref1557 = (  self1555 );
    if ( dref1557.tag == Maybe_94_None_t ) {
        c1556 = ( ( StrCase_1756_StrCase1 ) ( ( (  from_dash_string207 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1557.tag == Maybe_94_Just_t ) {
            c1556 = ( ( StrCase_1756_StrCase2 ) ( ( ( StrConcat_646_StrConcat ) ( ( ( StrConcat_647_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1557 .stuff .Maybe_94_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1758 ) ( (  c1556 ) ) );
}

static  struct StrConcatIter_1744   into_dash_iter1754 (    struct StrConcat_93  dref1505 ) {
    return ( (struct StrConcatIter_1744) { .f_left = ( (  chars700 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1755 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_1744   chars1753 (    struct StrConcat_93  self1516 ) {
    return ( (  into_dash_iter1754 ) ( (  self1516 ) ) );
}

static  enum Unit_8   lam1760 (   struct env1746* env ,    struct Char_65  c2782 ) {
    struct envunion75  temp1761 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1463 , .env =  env->envinst71 } );
    return ( temp1761.fun ( &temp1761.env ,  ( env->builder2778 ) ,  (  c2782 ) ) );
}

static  enum Unit_8   write1742 (   struct env77* env ,    struct StrBuilder_73 *  builder2778 ,    struct StrConcat_93  s2780 ) {
    struct env1746 envinst1746 = {
        .envinst71 = env->envinst71 ,
        .builder2778 =  builder2778 ,
    };
    ( (  for_dash_each1743 ) ( ( (  chars1753 ) ( (  s2780 ) ) ) ,  ( (struct envunion1747){ .fun = (  enum Unit_8  (*) (  struct env1746*  ,    struct Char_65  ) )lam1760 , .env =  envinst1746 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   mk_dash_dyn_dash_str1739 (   struct env91* env ,    struct StrConcat_93  s2836 ,    enum CAllocator_10  al2838 ) {
    struct StrBuilder_73  temp1740 = ( (  mk1430 ) ( (  al2838 ) ) );
    struct StrBuilder_73 *  sb2839 = ( &temp1740 );
    struct envunion92  temp1741 = ( (struct envunion92){ .fun = (  enum Unit_8  (*) (  struct env77*  ,    struct StrBuilder_73 *  ,    struct StrConcat_93  ) )write1742 , .env =  env->envinst77 } );
    ( temp1741.fun ( &temp1741.env ,  (  sb2839 ) ,  (  s2836 ) ) );
    struct envunion88  temp1762 = ( (struct envunion88){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1463 , .env =  env->envinst71 } );
    ( temp1762.fun ( &temp1762.env ,  (  sb2839 ) ,  ( (  nullchar504 ) ( ) ) ) );
    struct StrView_27  dynstr2840 = ( (  as_dash_str1472 ) ( (  sb2839 ) ) );
    return ( (struct StrView_27) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2840 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub296 ( ( ( (  dynstr2840 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1737 (   struct env247* env ,    struct Editor_256 *  ed4412 ,    struct StrConcat_93  s4414 ) {
    ( (  reset_dash_msg1081 ) ( (  ed4412 ) ) );
    struct envunion248  temp1738 = ( (struct envunion248){ .fun = (  struct StrView_27  (*) (  struct env91*  ,    struct StrConcat_93  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1739 , .env =  env->envinst91 } );
    (*  ed4412 ) .f_msg = ( ( Maybe_94_Just ) ( ( temp1738.fun ( &temp1738.env ,  (  s4414 ) ,  ( ( * (  ed4412 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undefined1765 (  ) {
    enum Unit_8  temp1766;
    return (  temp1766 );
}

static  enum Unit_8   todo1764 (  ) {
    ( (  print1348 ) ( ( (  from_dash_string207 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1765 ) ( ) );
}

struct env1769 {
    bool (*  fun1127 )(    struct Char_65  );
};

struct envunion1770 {
    bool  (*fun) (  struct env1769*  ,    struct Char_65  ,    bool  );
    struct env1769 env;
};

static  bool   reduce1768 (    struct StrView_27  iterable1094 ,    bool  base1096 ,   struct envunion1770  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct StrViewIter_62  it1100 = ( (  into_dash_iter701 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_304  dref1101 = ( (  next688 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_304_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_304_Just_t ) {
                struct envunion1770  temp1771 = (  fun1098 );
                x1099 = ( temp1771.fun ( &temp1771.env ,  ( dref1101 .stuff .Maybe_304_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1772 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1772);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1773;
    return (  temp1773 );
}

static  bool   lam1774 (   struct env1769* env ,    struct Char_65  e1129 ,    bool  x1131 ) {
    return ( ( ( env->fun1127 ) ( (  e1129 ) ) ) && (  x1131 ) );
}

static  bool   all1767 (    struct StrView_27  it1125 ,    bool (*  fun1127 )(    struct Char_65  ) ) {
    struct env1769 envinst1769 = {
        .fun1127 =  fun1127 ,
    };
    return ( (  reduce1768 ) ( (  it1125 ) ,  ( true ) ,  ( (struct envunion1770){ .fun = (  bool  (*) (  struct env1769*  ,    struct Char_65  ,    bool  ) )lam1774 , .env =  envinst1769 } ) ) );
}

struct envunion1776 {
    enum Unit_8  (*fun) (  struct env245*  ,    struct Editor_256 *  ,    struct StrView_27  );
    struct env245 env;
};

static  enum Unit_8   run_dash_cmd1645 (   struct env252* env ,    struct Editor_256 *  ed4431 ,    struct StrView_27  s4433 ) {
    struct Scanner_1646  temp1647 = ( (  mk_dash_from_dash_strview1648 ) ( (  s4433 ) ) );
    struct Scanner_1646 *  sc4434 = ( &temp1647 );
    ( (  drop_dash_str_dash_while1649 ) ( (  sc4434 ) ,  (  is_dash_whitespace1342 ) ) );
    struct StrView_27  cmd4435 = ( (  take_dash_str_dash_while1666 ) ( (  sc4434 ) ,  (  is_dash_not_dash_whitespace1682 ) ) );
    ( (  drop_dash_str_dash_while1649 ) ( (  sc4434 ) ,  (  is_dash_whitespace1342 ) ) );
    if ( (  eq1683 ( (  cmd4435 ) , ( (  from_dash_charlike1230 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4431 ) .f_running = ( false );
    } else {
        if ( (  eq1683 ( (  cmd4435 ) , ( (  from_dash_string207 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1683 ( (  cmd4435 ) , ( (  from_dash_charlike1230 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                struct StrView_27  filename4436 = ( (  take_dash_str_dash_while1666 ) ( (  sc4434 ) ,  (  is_dash_not_dash_whitespace1682 ) ) );
                struct Maybe_94  filename4437 = ( ( (  null1684 ) ( (  filename4436 ) ) ) ? ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) : ( ( Maybe_94_Just ) ( (  filename4436 ) ) ) );
                struct envunion253  temp1687 = ( (struct envunion253){ .fun = (  struct Maybe_254  (*) (  struct env119*  ,    struct TextBuf_114 *  ,    struct Maybe_94  ) )write_dash_to_dash_file1688 , .env =  env->envinst119 } );
                struct Maybe_254  write_dash_result4438 = ( temp1687.fun ( &temp1687.env ,  ( ( * ( (  pane1136 ) ( (  ed4431 ) ) ) ) .f_buf ) ,  (  filename4437 ) ) );
                struct Maybe_254  dref4439 = (  write_dash_result4438 );
                if ( dref4439.tag == Maybe_254_None_t ) {
                    if ( ( (  is_dash_none1690 ) ( (  filename4437 ) ) ) ) {
                        struct envunion258  temp1721 = ( (struct envunion258){ .fun = (  enum Unit_8  (*) (  struct env245*  ,    struct Editor_256 *  ,    struct StrView_27  ) )set_dash_msg1722 , .env =  env->envinst245 } );
                        ( temp1721.fun ( &temp1721.env ,  (  ed4431 ) ,  ( (  from_dash_string207 ) ( ( "could not save changes (!?)" ) ,  ( 27 ) ) ) ) );
                    } else {
                        struct envunion255  temp1736 = ( (struct envunion255){ .fun = (  enum Unit_8  (*) (  struct env247*  ,    struct Editor_256 *  ,    struct StrConcat_93  ) )set_dash_msg1737 , .env =  env->envinst247 } );
                        ( temp1736.fun ( &temp1736.env ,  (  ed4431 ) ,  ( ( StrConcat_93_StrConcat ) ( ( (  from_dash_string207 ) ( ( "could not write to file " ) ,  ( 24 ) ) ) ,  (  filename4437 ) ) ) ) );
                    }
                }
                else {
                    if ( dref4439.tag == Maybe_254_Just_t ) {
                        struct envunion259  temp1763 = ( (struct envunion259){ .fun = (  enum Unit_8  (*) (  struct env243*  ,    struct Editor_256 *  ,    struct StrConcat_86  ) )set_dash_msg1426 , .env =  env->envinst243 } );
                        ( temp1763.fun ( &temp1763.env ,  (  ed4431 ) ,  ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "written " ) ,  ( 8 ) ) ) ,  ( dref4439 .stuff .Maybe_254_Just_s .field0 ) ) ) ,  ( (  from_dash_string207 ) ( ( " bytes" ) ,  ( 6 ) ) ) ) ) ) );
                    }
                }
            } else {
                if ( (  eq1683 ( (  cmd4435 ) , ( (  from_dash_charlike1230 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  todo1764 ) ( ) );
                } else {
                    if ( (  eq1683 ( (  cmd4435 ) , ( (  from_dash_string207 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                    } else {
                        if ( ( (  all1767 ) ( (  cmd4435 ) ,  (  is_dash_digit985 ) ) ) ) {
                        } else {
                            struct envunion1776  temp1775 = ( (struct envunion1776){ .fun = (  enum Unit_8  (*) (  struct env245*  ,    struct Editor_256 *  ,    struct StrView_27  ) )set_dash_msg1722 , .env =  env->envinst245 } );
                            ( temp1775.fun ( &temp1775.env ,  (  ed4431 ) ,  ( (  from_dash_string207 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                        }
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1778 {
    enum Unit_8  (*fun) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  );
    struct env71 env;
};

static  struct Char_65   ascii_dash_char1779 (    char  c783 ) {
    return ( (  from_dash_u81049 ) ( ( (  ascii_dash_u8515 ) ( (  c783 ) ) ) ) );
}

static  struct Maybe_979   reduce1783 (    struct StrViewIter_62  iterable1094 ,    struct Maybe_979  base1096 ,    struct Maybe_979 (*  fun1098 )(    struct Char_65  ,    struct Maybe_979  ) ) {
    struct Maybe_979  x1099 = (  base1096 );
    struct StrViewIter_62  it1100 = ( (  into_dash_iter786 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_304  dref1101 = ( (  next688 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_304_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_304_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_304_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1784 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1784);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_979  temp1785;
    return (  temp1785 );
}

static  struct Maybe_979   sequence_dash_maybe1786 (    struct Char_65  e2490 ,    struct Maybe_979  b2492 ) {
    struct Maybe_979  dref2493 = (  b2492 );
    if ( dref2493.tag == Maybe_979_None_t ) {
        return ( (struct Maybe_979) { .tag = Maybe_979_None_t } );
    }
    else {
        if ( dref2493.tag == Maybe_979_Just_t ) {
            struct Maybe_164  dref2495 = ( (  parse_dash_digit1010 ) ( (  e2490 ) ) );
            if ( dref2495.tag == Maybe_164_None_t ) {
                return ( (struct Maybe_979) { .tag = Maybe_979_None_t } );
            }
            else {
                if ( dref2495.tag == Maybe_164_Just_t ) {
                    return ( ( Maybe_979_Just ) ( (  op_dash_add584 ( (  op_dash_mul293 ( ( dref2493 .stuff .Maybe_979_Just_s .field0 ) , (  from_dash_integral295 ( 10 ) ) ) ) , ( (  i32_dash_i641019 ) ( ( dref2495 .stuff .Maybe_164_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_979   parse_dash_int1782 (    struct StrView_27  s2487 ) {
    struct StrViewIter_62  cs2497 = ( (  chars700 ) ( (  s2487 ) ) );
    struct Maybe_304  dref2498 = ( (  head1345 ) ( (  cs2497 ) ) );
    if ( dref2498.tag == Maybe_304_Just_t ) {
        return ( (  reduce1783 ) ( (  cs2497 ) ,  ( ( Maybe_979_Just ) ( (  from_dash_integral295 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1786 ) ) );
    }
    else {
        if ( dref2498.tag == Maybe_304_None_t ) {
            return ( (struct Maybe_979) { .tag = Maybe_979_None_t } );
        }
    }
}

struct TakeWhile_1792 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1791 {
    struct TakeWhile_1792  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1791 Map_1791_Map (  struct TakeWhile_1792  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1791 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1791   into_dash_iter1794 (    struct Map_1791  self797 ) {
    return (  self797 );
}

static  struct Maybe_304   next1796 (    struct TakeWhile_1792 *  self965 ) {
    struct Maybe_304  mx966 = ( (  next688 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_304  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_304_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_304_Just ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
            }
        }
    }
}

static  struct Maybe_254   next1795 (    struct Map_1791 *  dref799 ) {
    struct Maybe_304  dref802 = ( (  next1796 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_304_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_304_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1793 (    struct Map_1791  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1791  it1100 = ( (  into_dash_iter1794 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1101 = ( (  next1795 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_254_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_254_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1797 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1797);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1798;
    return (  temp1798 );
}

static  size_t   lam1799 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add318 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1790 (    struct Map_1791  it1111 ) {
    return ( (  reduce1793 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1799 ) ) );
}

static  struct TakeWhile_1792   into_dash_iter1801 (    struct TakeWhile_1792  self962 ) {
    return (  self962 );
}

static  struct Map_1791   map1800 (    struct TakeWhile_1792  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1792  it809 = ( (  into_dash_iter1801 ) ( (  iterable806 ) ) );
    return ( ( Map_1791_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1792   take_dash_while1802 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1792) { .f_it = ( (  into_dash_iter786 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1803 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1789 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1790 ) ( ( (  map1800 ) ( ( (  take_dash_while1802 ) ( ( (  chars700 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1803 ) ) ) ) );
    return ( (  byte_dash_substr518 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1788 (    struct Scanner_1646 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1789 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1533 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1132 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

struct TakeWhile_1808 {
    struct StrViewIter_62  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1807 {
    struct TakeWhile_1808  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1807 Map_1807_Map (  struct TakeWhile_1808  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1807 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1807   into_dash_iter1810 (    struct Map_1807  self797 ) {
    return (  self797 );
}

static  struct Maybe_304   next1812 (    struct TakeWhile_1808 *  self965 ) {
    struct Maybe_304  mx966 = ( (  next688 ) ( ( & ( ( * (  self965 ) ) .f_it ) ) ) );
    struct Maybe_304  dref967 = (  mx966 );
    if ( dref967.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    else {
        if ( dref967.tag == Maybe_304_Just_t ) {
            if ( ( ( ( * (  self965 ) ) .f_pred ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_304_Just ) ( ( dref967 .stuff .Maybe_304_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
            }
        }
    }
}

static  struct Maybe_254   next1811 (    struct Map_1807 *  dref799 ) {
    struct Maybe_304  dref802 = ( (  next1812 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_304_Just_t ) {
            return ( ( Maybe_254_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_304_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1809 (    struct Map_1807  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    size_t  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct Map_1807  it1100 = ( (  into_dash_iter1810 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1101 = ( (  next1811 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_254_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_254_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1813 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1813);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1814;
    return (  temp1814 );
}

static  size_t   lam1815 (    size_t  v1113 ,    size_t  s1115 ) {
    return (  op_dash_add318 ( (  v1113 ) , (  s1115 ) ) );
}

static  size_t   sum1806 (    struct Map_1807  it1111 ) {
    return ( (  reduce1809 ) ( (  it1111 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1815 ) ) );
}

static  struct TakeWhile_1808   into_dash_iter1817 (    struct TakeWhile_1808  self962 ) {
    return (  self962 );
}

static  struct Map_1807   map1816 (    struct TakeWhile_1808  iterable806 ,    size_t (*  fun808 )(    struct Char_65  ) ) {
    struct TakeWhile_1808  it809 = ( (  into_dash_iter1817 ) ( (  iterable806 ) ) );
    return ( ( Map_1807_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct TakeWhile_1808   take_dash_while1818 (    struct StrViewIter_62  it971 ,    bool (*  pred973 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1808) { .f_it = ( (  into_dash_iter786 ) ( (  it971 ) ) ) , .f_pred = (  pred973 ) } );
}

static  size_t   lam1819 (    struct Char_65  c2207 ) {
    return ( (  c2207 ) .f_num_dash_bytes );
}

static  struct StrView_27   take_dash_while1805 (    struct StrView_27  self2203 ,    bool (*  fun2205 )(    struct Char_65  ) ) {
    size_t  bi2208 = ( (  sum1806 ) ( ( (  map1816 ) ( ( (  take_dash_while1818 ) ( ( (  chars700 ) ( (  self2203 ) ) ) ,  (  fun2205 ) ) ) ,  (  lam1819 ) ) ) ) );
    return ( (  byte_dash_substr518 ) ( (  self2203 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2208 ) ) );
}

static  struct StrView_27   take_dash_str_dash_while1804 (    struct Scanner_1646 *  sc3272 ,    bool (*  fun3274 )(    struct Char_65  ) ) {
    struct StrView_27  s3275 = ( (  take_dash_while1805 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  (  fun3274 ) ) );
    (*  sc3272 ) .f_s = ( (  byte_dash_substr_dash_from1533 ) ( ( ( * (  sc3272 ) ) .f_s ) ,  ( (  num_dash_bytes1132 ) ( (  s3275 ) ) ) ) );
    return (  s3275 );
}

static  bool   lam1820 (    struct Char_65  c4427 ) {
    return ( ! ( (  is_dash_whitespace1342 ) ( (  c4427 ) ) ) );
}

static  struct Theme_181 *   or_dash_else1821 (    struct Maybe_251  self1734 ,    struct Theme_181 *  alt1736 ) {
    struct Maybe_251  dref1737 = (  self1734 );
    if ( dref1737.tag == Maybe_251_None_t ) {
        return (  alt1736 );
    }
    else {
        if ( dref1737.tag == Maybe_251_Just_t ) {
            return ( dref1737 .stuff .Maybe_251_Just_s .field0 );
        }
    }
}

struct SliceIter_1827 {
    struct Slice_200  f_slice;
    size_t  f_current_dash_offset;
};

struct env1828 {
    struct StrView_27  name3994;
    ;
};

struct envunion1829 {
    bool  (*fun) (  struct env1828*  ,    struct Tuple2_201  );
    struct env1828 env;
};

struct Filter_1826 {
    struct SliceIter_1827  f_og;
    struct envunion1829  f_fun;
};

struct Map_1825 {
    struct Filter_1826  field0;
    struct Theme_181 * (*  field1 )(    struct Tuple2_201  );
};

static struct Map_1825 Map_1825_Map (  struct Filter_1826  field0 ,  struct Theme_181 * (*  field1 )(    struct Tuple2_201  ) ) {
    return ( struct Map_1825 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1831 {
    enum {
        Maybe_1831_None_t,
        Maybe_1831_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_201  field0;
        } Maybe_1831_Just_s;
    } stuff;
};

static struct Maybe_1831 Maybe_1831_Just (  struct Tuple2_201  field0 ) {
    return ( struct Maybe_1831 ) { .tag = Maybe_1831_Just_t, .stuff = { .Maybe_1831_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_201 *   offset_dash_ptr1834 (    struct Tuple2_201 *  x338 ,    int64_t  count340 ) {
    struct Tuple2_201  temp1835;
    return ( (struct Tuple2_201 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1835 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1831   next1833 (    struct SliceIter_1827 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp297 ( (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1831) { .tag = Maybe_1831_None_t } );
    }
    struct Tuple2_201  elem1832 = ( * ( (  offset_dash_ptr1834 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1831_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_1831   next1832 (    struct Filter_1826 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_1831  dref835 = ( (  next1833 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_1831_None_t ) {
            return ( (struct Maybe_1831) { .tag = Maybe_1831_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_1831_Just_t ) {
                struct envunion1829  temp1836 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp1836.fun ( &temp1836.env ,  ( dref835 .stuff .Maybe_1831_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1831_Just ) ( ( dref835 .stuff .Maybe_1831_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1831  temp1837;
    return (  temp1837 );
}

static  struct Maybe_251   next1830 (    struct Map_1825 *  dref799 ) {
    struct Maybe_1831  dref802 = ( (  next1832 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_1831_None_t ) {
        return ( (struct Maybe_251) { .tag = Maybe_251_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_1831_Just_t ) {
            return ( ( Maybe_251_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_1831_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1825   into_dash_iter1839 (    struct Map_1825  self797 ) {
    return (  self797 );
}

static  struct Maybe_251   head1824 (    struct Map_1825  it1143 ) {
    struct Map_1825  temp1838 = ( (  into_dash_iter1839 ) ( (  it1143 ) ) );
    return ( (  next1830 ) ( ( &temp1838 ) ) );
}

static  struct Filter_1826   into_dash_iter1841 (    struct Filter_1826  self831 ) {
    return (  self831 );
}

static  struct Map_1825   map1840 (    struct Filter_1826  iterable806 ,    struct Theme_181 * (*  fun808 )(    struct Tuple2_201  ) ) {
    struct Filter_1826  it809 = ( (  into_dash_iter1841 ) ( (  iterable806 ) ) );
    return ( ( Map_1825_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  struct SliceIter_1827   into_dash_iter1843 (    struct Slice_200  self1824 ) {
    return ( (struct SliceIter_1827) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1826   filter1842 (    struct Slice_200  iterable839 ,   struct envunion1829  fun841 ) {
    struct SliceIter_1827  it842 = ( (  into_dash_iter1843 ) ( (  iterable839 ) ) );
    return ( (struct Filter_1826) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

struct Tuple2_1848 {
    struct Maybe_304  field0;
    struct Maybe_304  field1;
};

static struct Tuple2_1848 Tuple2_1848_Tuple2 (  struct Maybe_304  field0 ,  struct Maybe_304  field1 ) {
    return ( struct Tuple2_1848 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1845 (    struct StrView_27  s2417 ,    struct StrView_27  beg2419 ) {
    struct StrViewIter_62  temp1846 = ( (  chars700 ) ( (  s2417 ) ) );
    struct StrViewIter_62 *  scs2420 = ( &temp1846 );
    struct StrViewIter_62  temp1847 = ( (  chars700 ) ( (  beg2419 ) ) );
    struct StrViewIter_62 *  begcs2421 = ( &temp1847 );
    while ( ( true ) ) {
        struct Tuple2_1848  dref2422 = ( ( Tuple2_1848_Tuple2 ) ( ( (  next688 ) ( (  scs2420 ) ) ) ,  ( (  next688 ) ( (  begcs2421 ) ) ) ) );
        if ( dref2422 .field0.tag == Maybe_304_Just_t && dref2422 .field1.tag == Maybe_304_Just_t ) {
            if ( ( !  eq582 ( ( dref2422 .field0 .stuff .Maybe_304_Just_s .field0 ) , ( dref2422 .field1 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref2422 .field0.tag == Maybe_304_None_t && dref2422 .field1.tag == Maybe_304_Just_t ) {
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

static  bool   lam1844 (   struct env1828* env ,    struct Tuple2_201  dref3995 ) {
    return ( (  begins_dash_with1845 ) ( ( dref3995 .field0 ) ,  ( env->name3994 ) ) );
}

static  struct Theme_181 *   snd1849 (    struct Tuple2_201  dref1257 ) {
    return ( dref1257 .field1 );
}

static  struct Maybe_251   match_dash_theme1823 (   struct env208* env ,    struct StrView_27  name3994 ) {
    if ( ( (  null1684 ) ( (  name3994 ) ) ) ) {
        return ( (struct Maybe_251) { .tag = Maybe_251_None_t } );
    }
    struct env1828 envinst1828 = {
        .name3994 =  name3994 ,
    };
    return ( (  head1824 ) ( ( (  map1840 ) ( ( (  filter1842 ) ( ( env->all_dash_themes3991 ) ,  ( (struct envunion1829){ .fun = (  bool  (*) (  struct env1828*  ,    struct Tuple2_201  ) )lam1844 , .env =  envinst1828 } ) ) ) ,  (  snd1849 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1781 (   struct env249* env ,    struct Editor_256 *  ed4417 ,    struct StrView_27  cmd4419 ) {
    struct Maybe_979  dref4420 = ( (  parse_dash_int1782 ) ( (  cmd4419 ) ) );
    if ( dref4420.tag == Maybe_979_Just_t ) {
        int32_t  line4422 = ( (  clamp1484 ) ( ( (  i64_dash_i321021 ) ( ( dref4420 .stuff .Maybe_979_Just_s .field0 ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  num_dash_lines1139 ) ( ( ( * ( (  pane1136 ) ( (  ed4417 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
        int32_t  line4423 = (  op_dash_sub173 ( (  line4422 ) , (  from_dash_integral67 ( 1 ) ) ) );
        ( (  set_dash_cursors1093 ) ( ( (  pane1136 ) ( (  ed4417 ) ) ) ,  ( (struct Pos_26) { .f_line = (  line4423 ) , .f_bi = (  from_dash_integral67 ( 0 ) ) } ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_NoChanges ) ) );
    }
    else {
        if ( dref4420.tag == Maybe_979_None_t ) {
            struct Scanner_1646  temp1787 = ( (  mk_dash_from_dash_strview1648 ) ( (  cmd4419 ) ) );
            struct Scanner_1646 *  sc4424 = ( &temp1787 );
            struct StrView_27  cmd4425 = ( (  take_dash_str_dash_while1788 ) ( (  sc4424 ) ,  (  is_dash_alpha1337 ) ) );
            if ( (  eq1683 ( (  cmd4425 ) , ( (  from_dash_string207 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1649 ) ( (  sc4424 ) ,  (  is_dash_whitespace1342 ) ) );
                struct StrView_27  theme_dash_name4428 = ( (  take_dash_str_dash_while1804 ) ( (  sc4424 ) ,  (  lam1820 ) ) );
                struct envunion250  temp1822 = ( (struct envunion250){ .fun = (  struct Maybe_251  (*) (  struct env208*  ,    struct StrView_27  ) )match_dash_theme1823 , .env =  env->envinst208 } );
                (*  ed4417 ) .f_theme = ( (  or_dash_else1821 ) ( ( temp1822.fun ( &temp1822.env ,  (  theme_dash_name4428 ) ) ) ,  ( ( * (  ed4417 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_62   into_dash_iter1853 (    struct StrBuilder_73  self2833 ) {
    return ( (  chars1715 ) ( (  self2833 ) ) );
}

static  struct Maybe_304   head1851 (    struct StrBuilder_73  it1143 ) {
    struct StrViewIter_62  temp1852 = ( (  into_dash_iter1853 ) ( (  it1143 ) ) );
    return ( (  next688 ) ( ( &temp1852 ) ) );
}

static  bool   null1850 (    struct StrBuilder_73  it1152 ) {
    struct Maybe_304  dref1153 = ( (  head1851 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_304_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1859 (   struct env42* env ,    struct List_9 *  list2078 ,    size_t  i2080 ) {
    struct envunion43  temp1860 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range607 , .env =  env->envinst40 } );
    ( temp1860.fun ( &temp1860.env ,  (  list2078 ) ,  (  i2080 ) ,  (  op_dash_add318 ( (  i2080 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1857 (   struct env44* env ,    struct List_9 *  list2094 ) {
    if ( (  eq406 ( ( ( * (  list2094 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1214 ) ( ( (  from_dash_string207 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1858 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_9 *  ,    size_t  ) )remove1859 , .env =  env->envinst42 } );
    return ( temp1858.fun ( &temp1858.env ,  (  list2094 ) ,  (  op_dash_sub296 ( ( ( * (  list2094 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1855 (   struct env82* env ,    struct StrBuilder_73 *  sb2796 ) {
    struct envunion83  temp1856 = ( (struct envunion83){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_9 *  ) )pop1857 , .env =  env->envinst44 } );
    return ( temp1856.fun ( &temp1856.env ,  ( & ( ( * (  sb2796 ) ) .f_chars ) ) ) );
}

struct envunion1862 {
    enum Unit_8  (*fun) (  struct env249*  ,    struct Editor_256 *  ,    struct StrView_27  );
    struct env249 env;
};

struct env1864 {
    struct Editor_256 *  ed4491;
    ;
};

struct envunion1865 {
    enum Unit_8  (*fun) (  struct env1864*  ,    struct StrView_27  );
    struct env1864 env;
};

static  enum Unit_8   if_dash_just1863 (    struct Maybe_94  x1292 ,   struct envunion1865  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion1865  temp1866 = (  fun1294 );
        ( temp1866.fun ( &temp1866.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1867 (   struct env1864* env ,    struct StrView_27  st4508 ) {
    ( (  free509 ) ( (  st4508 ) ,  ( ( * ( env->ed4491 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   live_dash_search1869 (    struct Editor_256 *  ed4443 ,    struct Pos_26  begin_dash_pos4445 ,    struct StrView_27  query4447 ) {
    if ( ( ! ( (  null1684 ) ( (  query4447 ) ) ) ) ) {
        struct Maybe_1508  dref4448 = ( (  search_dash_from1509 ) ( ( (  pane1136 ) ( (  ed4443 ) ) ) ,  (  begin_dash_pos4445 ) ,  (  query4447 ) ) );
        if ( dref4448.tag == Maybe_1508_Just_t ) {
            ( (  set_dash_cursors1093 ) ( ( (  pane1136 ) ( (  ed4443 ) ) ) ,  ( dref4448 .stuff .Maybe_1508_Just_s .field0 .field1 ) ,  ( ( Maybe_34_Just ) ( ( dref4448 .stuff .Maybe_1508_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1094_NoChanges ) ) );
        }
        else {
            if ( dref4448.tag == Maybe_1508_None_t ) {
                ( (  set_dash_cursors1093 ) ( ( (  pane1136 ) ( (  ed4443 ) ) ) ,  (  begin_dash_pos4445 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors1093 ) ( ( (  pane1136 ) ( (  ed4443 ) ) ) ,  (  begin_dash_pos4445 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1871 {
    enum Unit_8  (*fun) (  struct env82*  ,    struct StrBuilder_73 *  );
    struct env82 env;
};

static  enum Unit_8   handle_dash_key1089 (   struct env271* env ,    struct Editor_256 *  ed4491 ,    struct Key_274  key4493 ) {
    struct EditorMode_257 *  dref4494 = ( & ( ( * (  ed4491 ) ) .f_mode ) );
    if ( (* dref4494 ).tag == EditorMode_257_Normal_t ) {
        enum Mode_228  dref4495 = ( ( ( * (  ed4491 ) ) .f_pane ) .f_mode );
        switch (  dref4495 ) {
            case Mode_228_Normal : {
                struct envunion273  temp1090 = ( (struct envunion273){ .fun = (  enum Unit_8  (*) (  struct env260*  ,    struct Editor_256 *  ,    struct Key_274  ) )handle_dash_normal_dash_key1091 , .env =  env->envinst260 } );
                ( temp1090.fun ( &temp1090.env ,  (  ed4491 ) ,  (  key4493 ) ) );
                break;
            }
            case Mode_228_Select : {
                struct envunion1631  temp1630 = ( (struct envunion1631){ .fun = (  enum Unit_8  (*) (  struct env260*  ,    struct Editor_256 *  ,    struct Key_274  ) )handle_dash_normal_dash_key1091 , .env =  env->envinst260 } );
                ( temp1630.fun ( &temp1630.env ,  (  ed4491 ) ,  (  key4493 ) ) );
                break;
            }
            case Mode_228_Insert : {
                struct Key_274  dref4496 = (  key4493 );
                if ( dref4496.tag == Key_274_Escape_t ) {
                    ( (  set_dash_mode1145 ) ( ( (  pane1136 ) ( (  ed4491 ) ) ) ,  ( Mode_228_Normal ) ) );
                }
                else {
                    if ( dref4496.tag == Key_274_Enter_t ) {
                        int32_t  indent4497 = ( (  indent_dash_at_dash_line1148 ) ( ( (  pane1136 ) ( (  ed4491 ) ) ) ,  ( ( ( * ( (  pane1136 ) ( (  ed4491 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion277  temp1632 = ( (struct envunion277){ .fun = (  enum Unit_8  (*) (  struct env212*  ,    struct Pane_227 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1168 , .env =  env->envinst212 } );
                        ( temp1632.fun ( &temp1632.env ,  ( (  pane1136 ) ( (  ed4491 ) ) ) ,  ( (  from_dash_charlike1230 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1137 ) ( ( (  pane1136 ) ( (  ed4491 ) ) ) ) );
                        struct envunion276  temp1633 = ( (struct envunion276){ .fun = (  enum Unit_8  (*) (  struct env234*  ,    struct Pane_227 *  ,    int32_t  ) )indent_dash_at_dash_current1307 , .env =  env->envinst234 } );
                        ( temp1633.fun ( &temp1633.env ,  ( (  pane1136 ) ( (  ed4491 ) ) ) ,  (  indent4497 ) ) );
                    }
                    else {
                        if ( dref4496.tag == Key_274_Backspace_t ) {
                            struct envunion272  temp1634 = ( (struct envunion272){ .fun = (  enum Unit_8  (*) (  struct env215*  ,    struct Pane_227 *  ) )backspace1635 , .env =  env->envinst215 } );
                            ( temp1634.fun ( &temp1634.env ,  ( (  pane1136 ) ( (  ed4491 ) ) ) ) );
                        }
                        else {
                            if ( dref4496.tag == Key_274_Char_t ) {
                                struct Array_1638  temp1640 = ( (  from_dash_listlike1641 ) ( ( (struct Array_1638) { ._arr = { ( dref4496 .stuff .Key_274_Char_s .field0 ) } } ) ) );
                                struct StrView_27  s4499 = ( (  from_dash_ascii_dash_slice976 ) ( ( (  as_dash_slice1637 ) ( ( &temp1640 ) ) ) ) );
                                struct envunion1643  temp1642 = ( (struct envunion1643){ .fun = (  enum Unit_8  (*) (  struct env212*  ,    struct Pane_227 *  ,    struct StrView_27  ) )add_dash_str_dash_at_dash_char1168 , .env =  env->envinst212 } );
                                ( temp1642.fun ( &temp1642.env ,  ( (  pane1136 ) ( (  ed4491 ) ) ) ,  (  s4499 ) ) );
                                ( (  move_dash_right1137 ) ( ( (  pane1136 ) ( (  ed4491 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4494 ).tag == EditorMode_257_Cmd_t ) {
            struct Key_274  dref4502 = (  key4493 );
            if ( dref4502.tag == Key_274_Escape_t ) {
                ( (  set_dash_cursors1093 ) ( ( (  pane1136 ) ( (  ed4491 ) ) ) ,  ( (* dref4494 ) .stuff .EditorMode_257_Cmd_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_UpdateVI ) ) );
                (*  ed4491 ) .f_mode = ( (struct EditorMode_257) { .tag = EditorMode_257_Normal_t } );
                (*  ed4491 ) .f_theme = ( ( * (  ed4491 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4502.tag == Key_274_Enter_t ) {
                    struct envunion275  temp1644 = ( (struct envunion275){ .fun = (  enum Unit_8  (*) (  struct env252*  ,    struct Editor_256 *  ,    struct StrView_27  ) )run_dash_cmd1645 , .env =  env->envinst252 } );
                    ( temp1644.fun ( &temp1644.env ,  (  ed4491 ) ,  ( (  as_dash_str1472 ) ( ( & ( (* dref4494 ) .stuff .EditorMode_257_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1719 ) ( ( & ( (* dref4494 ) .stuff .EditorMode_257_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors1093 ) ( ( (  pane1136 ) ( (  ed4491 ) ) ) ,  ( ( * ( (  pane1136 ) ( (  ed4491 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_UpdateVI ) ) );
                    (*  ed4491 ) .f_mode = ( (struct EditorMode_257) { .tag = EditorMode_257_Normal_t } );
                    (*  ed4491 ) .f_og_dash_theme = ( ( * (  ed4491 ) ) .f_theme );
                }
                else {
                    if ( dref4502.tag == Key_274_Char_t ) {
                        struct envunion1778  temp1777 = ( (struct envunion1778){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1463 , .env =  env->envinst71 } );
                        ( temp1777.fun ( &temp1777.env ,  ( & ( (* dref4494 ) .stuff .EditorMode_257_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1779 ) ( ( dref4502 .stuff .Key_274_Char_s .field0 ) ) ) ) );
                        struct envunion279  temp1780 = ( (struct envunion279){ .fun = (  enum Unit_8  (*) (  struct env249*  ,    struct Editor_256 *  ,    struct StrView_27  ) )live_dash_cmd1781 , .env =  env->envinst249 } );
                        ( temp1780.fun ( &temp1780.env ,  (  ed4491 ) ,  ( (  as_dash_str1472 ) ( ( & ( (* dref4494 ) .stuff .EditorMode_257_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4502.tag == Key_274_Backspace_t ) {
                            if ( ( ! ( (  null1850 ) ( ( (* dref4494 ) .stuff .EditorMode_257_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion280  temp1854 = ( (struct envunion280){ .fun = (  enum Unit_8  (*) (  struct env82*  ,    struct StrBuilder_73 *  ) )pop1855 , .env =  env->envinst82 } );
                                ( temp1854.fun ( &temp1854.env ,  ( & ( (* dref4494 ) .stuff .EditorMode_257_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1862  temp1861 = ( (struct envunion1862){ .fun = (  enum Unit_8  (*) (  struct env249*  ,    struct Editor_256 *  ,    struct StrView_27  ) )live_dash_cmd1781 , .env =  env->envinst249 } );
                            ( temp1861.fun ( &temp1861.env ,  (  ed4491 ) ,  ( (  as_dash_str1472 ) ( ( & ( (* dref4494 ) .stuff .EditorMode_257_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4494 ).tag == EditorMode_257_Search_t ) {
                struct Key_274  dref4506 = (  key4493 );
                if ( dref4506.tag == Key_274_Escape_t ) {
                    ( (  set_dash_cursors1093 ) ( ( (  pane1136 ) ( (  ed4491 ) ) ) ,  ( (* dref4494 ) .stuff .EditorMode_257_Search_s .field0 ) ,  ( (struct Maybe_34) { .tag = Maybe_34_None_t } ) ,  ( CursorMovement_1094_UpdateVI ) ) );
                    (*  ed4491 ) .f_mode = ( (struct EditorMode_257) { .tag = EditorMode_257_Normal_t } );
                }
                else {
                    if ( dref4506.tag == Key_274_Enter_t ) {
                        ( (  set_dash_cursors1093 ) ( ( (  pane1136 ) ( (  ed4491 ) ) ) ,  ( ( * ( (  pane1136 ) ( (  ed4491 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1136 ) ( (  ed4491 ) ) ) ) .f_sel ) ,  ( CursorMovement_1094_UpdateVI ) ) );
                        struct env1864 envinst1864 = {
                            .ed4491 =  ed4491 ,
                        };
                        ( (  if_dash_just1863 ) ( ( ( * (  ed4491 ) ) .f_search_dash_term ) ,  ( (struct envunion1865){ .fun = (  enum Unit_8  (*) (  struct env1864*  ,    struct StrView_27  ) )lam1867 , .env =  envinst1864 } ) ) );
                        if ( ( ! ( (  null1850 ) ( ( (* dref4494 ) .stuff .EditorMode_257_Search_s .field1 ) ) ) ) ) {
                            struct Pos_26  to4509 = ( ( * ( (  pane1136 ) ( (  ed4491 ) ) ) ) .f_cursor );
                            struct Pos_26  from4510 = ( (  or_dash_else1402 ) ( ( ( * ( (  pane1136 ) ( (  ed4491 ) ) ) ) .f_sel ) ,  (  to4509 ) ) );
                            (*  ed4491 ) .f_search_dash_term = ( ( Maybe_94_Just ) ( ( (  as_dash_str1472 ) ( ( & ( (* dref4494 ) .stuff .EditorMode_257_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4491 ) .f_search_dash_term = ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
                        }
                        (*  ed4491 ) .f_mode = ( (struct EditorMode_257) { .tag = EditorMode_257_Normal_t } );
                    }
                    else {
                        if ( dref4506.tag == Key_274_Char_t ) {
                            struct envunion278  temp1868 = ( (struct envunion278){ .fun = (  enum Unit_8  (*) (  struct env71*  ,    struct StrBuilder_73 *  ,    struct Char_65  ) )write_dash_char1463 , .env =  env->envinst71 } );
                            ( temp1868.fun ( &temp1868.env ,  ( & ( (* dref4494 ) .stuff .EditorMode_257_Search_s .field1 ) ) ,  ( (  ascii_dash_char1779 ) ( ( dref4506 .stuff .Key_274_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1869 ) ( (  ed4491 ) ,  ( (* dref4494 ) .stuff .EditorMode_257_Search_s .field0 ) ,  ( (  as_dash_str1472 ) ( ( & ( (* dref4494 ) .stuff .EditorMode_257_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4506.tag == Key_274_Backspace_t ) {
                                if ( ( ! ( (  null1850 ) ( ( (* dref4494 ) .stuff .EditorMode_257_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1871  temp1870 = ( (struct envunion1871){ .fun = (  enum Unit_8  (*) (  struct env82*  ,    struct StrBuilder_73 *  ) )pop1855 , .env =  env->envinst82 } );
                                    ( temp1870.fun ( &temp1870.env ,  ( & ( (* dref4494 ) .stuff .EditorMode_257_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1869 ) ( (  ed4491 ) ,  ( (* dref4494 ) .stuff .EditorMode_257_Search_s .field0 ) ,  ( (  as_dash_str1472 ) ( ( & ( (* dref4494 ) .stuff .EditorMode_257_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1764 ) ( ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1873 {
    bool  (*fun) (  struct env104*  ,    struct Screen_283 *  );
    struct env104 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1874 (   struct env104* env ,    struct Screen_283 *  screen3518 ) {
    struct Tui_100 *  tui3519 = ( ( * (  screen3518 ) ) .f_tui );
    struct envunion105  temp1875 = ( (struct envunion105){ .fun = (  bool  (*) (  struct env97*  ,    struct Tui_100 *  ) )update_dash_dimensions896 , .env =  env->envinst97 } );
    bool  updated_dash_dimensions3520 = ( temp1875.fun ( &temp1875.env ,  (  tui3519 ) ) );
    if ( ( ! (  updated_dash_dimensions3520 ) ) ) {
        return ( false );
    }
    (*  screen3518 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3521 = ( ( * ( ( * (  screen3518 ) ) .f_tui ) ) .f_width );
    uint32_t  h3522 = ( ( * ( ( * (  screen3518 ) ) .f_tui ) ) .f_height );
    size_t  nusz3523 = ( (  u32_dash_size845 ) ( (  op_dash_mul176 ( (  w3521 ) , (  h3522 ) ) ) ) );
    if ( (  cmp297 ( (  nusz3523 ) , ( ( ( * (  screen3518 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_283  nuscreen3524 = ( (  mk_dash_screen839 ) ( (  tui3519 ) ,  ( ( * (  screen3518 ) ) .f_al ) ) );
    (*  screen3518 ) .f_current = ( (  nuscreen3524 ) .f_current );
    (*  screen3518 ) .f_previous = ( (  nuscreen3524 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1876 (    struct Tui_100 *  tui3445 ) {
    bool  redraw3446 = ( ( * (  tui3445 ) ) .f_should_dash_redraw );
    (*  tui3445 ) .f_should_dash_redraw = ( false );
    return (  redraw3446 );
}

struct env1880 {
    ;
    ;
    ;
    struct Slice_284  s1907;
    struct Cell_285 (*  fun1909 )(    struct Cell_285  );
};

struct envunion1881 {
    enum Unit_8  (*fun) (  struct env1880*  ,    int32_t  );
    struct env1880 env;
};

static  enum Unit_8   for_dash_each1879 (    struct Range_159  iterable1075 ,   struct envunion1881  fun1077 ) {
    struct RangeIter_162  temp1882 = ( (  into_dash_iter163 ) ( (  iterable1075 ) ) );
    struct RangeIter_162 *  it1078 = ( &temp1882 );
    while ( ( true ) ) {
        struct Maybe_164  dref1079 = ( (  next165 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_164_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_164_Just_t ) {
                struct envunion1881  temp1883 = (  fun1077 );
                ( temp1883.fun ( &temp1883.env ,  ( dref1079 .stuff .Maybe_164_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1884 (   struct env1880* env ,    int32_t  i1911 ) {
    return ( (  set860 ) ( ( env->s1907 ) ,  ( (  i32_dash_size419 ) ( (  i1911 ) ) ) ,  ( ( env->fun1909 ) ( (  elem_dash_get864 ( ( env->s1907 ) , ( (  i32_dash_size419 ) ( (  i1911 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1878 (    struct Slice_284  s1907 ,    struct Cell_285 (*  fun1909 )(    struct Cell_285  ) ) {
    struct env1880 envinst1880 = {
        .s1907 =  s1907 ,
        .fun1909 =  fun1909 ,
    };
    ( (  for_dash_each1879 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_i32336 ) ( (  op_dash_sub296 ( ( (  s1907 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1881){ .fun = (  enum Unit_8  (*) (  struct env1880*  ,    int32_t  ) )lam1884 , .env =  envinst1880 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_285   lam1885 (    struct Cell_285  dref3482 ) {
    return ( (  default_dash_cell872 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1877 (    struct Screen_283 *  screen3481 ) {
    ( (  map1878 ) ( ( ( * (  screen3481 ) ) .f_current ) ,  (  lam1885 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1886 (    struct Screen_283 *  screen3527 ,    struct Color_147  c3529 ) {
    (*  screen3527 ) .f_default_dash_fg = (  c3529 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1887 (    struct Screen_283 *  screen3532 ,    struct Color_147  c3534 ) {
    (*  screen3532 ) .f_default_dash_bg = (  c3534 );
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
            struct Cell_285 *  field0;
        } Maybe_1896_Just_s;
    } stuff;
};

static struct Maybe_1896 Maybe_1896_Just (  struct Cell_285 *  field0 ) {
    return ( struct Maybe_1896 ) { .tag = Maybe_1896_Just_t, .stuff = { .Maybe_1896_Just_s = { .field0 = field0 } } };
};

static  struct Cell_285 *   undefined1897 (  ) {
    struct Cell_285 *  temp1898;
    return (  temp1898 );
}

static  struct Cell_285 *   or_dash_fail1895 (    struct Maybe_1896  x1727 ,    struct StrView_27  errmsg1729 ) {
    struct Maybe_1896  dref1730 = (  x1727 );
    if ( dref1730.tag == Maybe_1896_None_t ) {
        ( (  panic1214 ) ( (  errmsg1729 ) ) );
        return ( (  undefined1897 ) ( ) );
    }
    else {
        if ( dref1730.tag == Maybe_1896_Just_t ) {
            return ( dref1730 .stuff .Maybe_1896_Just_s .field0 );
        }
    }
}

static  struct Maybe_1896   get_dash_cell_dash_ptr1899 (    struct Screen_283 *  screen3548 ,    int32_t  x3550 ,    int32_t  y3552 ) {
    int32_t  w3553 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3548 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  x3550 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  x3550 ) , (  w3553 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1896) { .tag = Maybe_1896_None_t } );
    }
    if ( ( (  cmp166 ( (  y3552 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3552 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3548 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1896) { .tag = Maybe_1896_None_t } );
    }
    size_t  i3554 = ( (  i32_dash_size419 ) ( (  op_dash_add168 ( (  op_dash_mul1540 ( (  y3552 ) , (  w3553 ) ) ) , (  x3550 ) ) ) ) );
    return ( ( Maybe_1896_Just ) ( ( (  get_dash_ptr861 ) ( ( ( * (  screen3548 ) ) .f_current ) ,  (  i3554 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1888 (    struct Screen_283 *  screen3557 ) {
    struct RangeIter_162  temp1889 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3557 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1892 =  next165 (&temp1889);
        if (  __cond1892 .tag == 0 ) {
            break;
        }
        int32_t  y3559 =  __cond1892 .stuff .Maybe_164_Just_s .field0;
        struct RangeIter_162  temp1893 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3557 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_164  __cond1894 =  next165 (&temp1893);
            if (  __cond1894 .tag == 0 ) {
                break;
            }
            int32_t  x3561 =  __cond1894 .stuff .Maybe_164_Just_s .field0;
            struct Cell_285 *  cell3562 = ( (  or_dash_fail1895 ) ( ( (  get_dash_cell_dash_ptr1899 ) ( (  screen3557 ) ,  (  x3561 ) ,  (  y3559 ) ) ) ,  ( (  from_dash_string207 ) ( ( "no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3562 ) .f_bg = ( ( * (  screen3557 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1901 {
    enum Unit_8  (*fun) (  struct env281*  ,    struct Screen_283 *  ,    struct Editor_256 *  );
    struct env281 env;
};

static  int32_t   screen_dash_width1906 (    struct ScreenDims_286  sd4073 ) {
    return (  op_dash_add168 ( (  op_dash_sub173 ( ( (  sd4073 ) .f_to_dash_sx ) , ( (  sd4073 ) .f_from_dash_sx ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1907 (    struct ScreenDims_286  sd4076 ) {
    return (  op_dash_add168 ( (  op_dash_sub173 ( ( (  sd4076 ) .f_to_dash_sy ) , ( (  sd4076 ) .f_from_dash_sy ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1905 (    struct Pane_227 *  pane4079 ,    struct ScreenDims_286  sd4081 ) {
    struct Pos_26  cur4082 = ( ( * (  pane4079 ) ) .f_cursor );
    int32_t  cur_dash_sx4083 = ( (  pos_dash_vi1097 ) ( ( ( * (  pane4079 ) ) .f_buf ) ,  (  cur4082 ) ) );
    struct ScreenCursorOffset_229  sc_dash_off4084 = ( ( * (  pane4079 ) ) .f_sc_dash_off );
    int32_t  sw4085 = (  op_dash_sub173 ( ( (  screen_dash_width1906 ) ( (  sd4081 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
    int32_t  sh4086 = (  op_dash_sub173 ( ( (  screen_dash_height1907 ) ( (  sd4081 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
    int32_t  margin4087 = (  from_dash_integral67 ( 5 ) );
    int32_t  csi4088 = ( (  pos_dash_vi1097 ) ( ( ( * (  pane4079 ) ) .f_buf ) ,  (  cur4082 ) ) );
    int32_t  csx4089 = (  op_dash_sub173 ( (  csi4088 ) , ( (  sc_dash_off4084 ) .f_screen_dash_left ) ) );
    int32_t  csy4090 = (  op_dash_sub173 ( ( (  cur4082 ) .f_line ) , ( (  sc_dash_off4084 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4091 = ( (  sc_dash_off4084 ) .f_screen_dash_left );
    if ( (  cmp166 ( (  csx4089 ) , (  margin4087 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4091 = (  op_dash_sub173 ( (  csi4088 ) , (  margin4087 ) ) );
    } else {
        if ( (  cmp166 ( (  csx4089 ) , (  op_dash_sub173 ( (  sw4085 ) , (  margin4087 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4091 = (  op_dash_add168 ( (  op_dash_sub173 ( (  csi4088 ) , (  sw4085 ) ) ) , (  margin4087 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4092 = ( (  max1112 ) ( (  nu_dash_screen_dash_left4091 ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4093 = ( (  sc_dash_off4084 ) .f_screen_dash_top );
    if ( (  cmp166 ( (  csy4090 ) , (  margin4087 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4093 = (  op_dash_sub173 ( ( (  cur4082 ) .f_line ) , (  margin4087 ) ) );
    } else {
        if ( (  cmp166 ( (  csy4090 ) , (  op_dash_sub173 ( (  sh4086 ) , (  margin4087 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4093 = (  op_dash_add168 ( (  op_dash_sub173 ( ( (  cur4082 ) .f_line ) , (  sh4086 ) ) ) , (  margin4087 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4094 = ( (  max1112 ) ( (  nu_dash_screen_dash_top4093 ) ,  (  from_dash_integral67 ( 0 ) ) ) );
    (*  pane4079 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_229) { .f_screen_dash_top = (  nu_dash_screen_dash_top4094 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4092 ) } );
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

static  int32_t   reduce1914 (    struct Range_159  iterable1094 ,    int32_t  base1096 ,   struct envunion1916  fun1098 ) {
    int32_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion1916  temp1917 = (  fun1098 );
                x1099 = ( temp1917.fun ( &temp1917.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1918 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1918);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1919;
    return (  temp1919 );
}

static  int32_t   lam1920 (   struct env1915* env ,    int32_t  item1215 ,    int32_t  x1217 ) {
    return (  op_dash_mul1540 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  int32_t   pow1913 (    int32_t  base1211 ,    int32_t  p1213 ) {
    struct env1915 envinst1915 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce1914 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ,  ( (struct envunion1916){ .fun = (  int32_t  (*) (  struct env1915*  ,    int32_t  ,    int32_t  ) )lam1920 , .env =  envinst1915 } ) ) );
}

static  struct Maybe_304   next1912 (    struct IntStrIter_1909 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_304_Just ) ( ( (  from_dash_charlike353 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    int32_t  trim_dash_down1430 = ( (  pow1913 ) ( (  from_dash_integral67 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    int32_t  upper1431 = (  op_dash_div1539 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    int32_t  upper_dash_mask1432 = (  op_dash_mul1540 ( (  op_dash_div1539 ( (  upper1431 ) , (  from_dash_integral67 ( 10 ) ) ) ) , (  from_dash_integral67 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast311 ) ( (  op_dash_sub173 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81049 ) ( (  op_dash_add945 ( (  digit1433 ) , (  from_dash_integral315 ( 48 ) ) ) ) ) );
    return ( ( Maybe_304_Just ) ( (  digit_dash_char1434 ) ) );
}

static  size_t   reduce1910 (    struct IntStrIter_1909  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct IntStrIter_1909  it1100 = ( (  into_dash_iter1911 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_304  dref1101 = ( (  next1912 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_304_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_304_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_304_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1921 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1921);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1922;
    return (  temp1922 );
}

static  size_t   lam1923 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add318 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1908 (    struct IntStrIter_1909  it1105 ) {
    return ( (  reduce1910 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1923 ) ) );
}

static  int32_t   count_dash_digits1926 (    int32_t  self1437 ) {
    if ( (  eq525 ( (  self1437 ) , (  from_dash_integral67 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp166 ( (  self1437 ) , (  from_dash_integral67 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div1539 ( (  self1437 ) , (  from_dash_integral67 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_1909   int_dash_iter1925 (    int32_t  int1441 ) {
    if ( (  cmp166 ( (  int1441 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1909) { .f_int = (  op_dash_neg813 ( (  int1441 ) ) ) , .f_len = ( (  count_dash_digits1926 ) ( (  op_dash_neg813 ( (  int1441 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1909) { .f_int = (  int1441 ) , .f_len = ( (  count_dash_digits1926 ) ( (  int1441 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1909   chars1924 (    int32_t  self1450 ) {
    return ( (  int_dash_iter1925 ) ( (  self1450 ) ) );
}

static  enum Unit_8   set_dash_screen_dash_colors1930 (    struct Screen_283 *  screen3537 ,    struct Color_147  fg3539 ,    struct Color_147  bg3541 ) {
    (*  screen3537 ) .f_default_dash_fg = (  fg3539 );
    (*  screen3537 ) .f_default_dash_bg = (  bg3541 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors1929 (    struct Screen_283 *  screen4097 ,    struct Colors_182  colors4099 ) {
    ( (  set_dash_screen_dash_colors1930 ) ( (  screen4097 ) ,  ( (  colors4099 ) .f_fg ) ,  ( (  colors4099 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

struct Map_1933 {
    struct IntStrIter_1909  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1933 Map_1933_Map (  struct IntStrIter_1909  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1933 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1933   into_dash_iter1935 (    struct Map_1933  self797 ) {
    return (  self797 );
}

static  struct Maybe_164   next1936 (    struct Map_1933 *  dref799 ) {
    struct Maybe_304  dref802 = ( (  next1912 ) ( ( & ( (* dref799 ) .field0 ) ) ) );
    if ( dref802.tag == Maybe_304_None_t ) {
        return ( (struct Maybe_164) { .tag = Maybe_164_None_t } );
    }
    else {
        if ( dref802.tag == Maybe_304_Just_t ) {
            return ( ( Maybe_164_Just ) ( ( ( (* dref799 ) .field1 ) ( ( dref802 .stuff .Maybe_304_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1934 (    struct Map_1933  iterable1094 ,    int32_t  base1096 ,    int32_t (*  fun1098 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1099 = (  base1096 );
    struct Map_1933  it1100 = ( (  into_dash_iter1935 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next1936 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp1937 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1937);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1938;
    return (  temp1938 );
}

static  int32_t   lam1939 (    int32_t  v1113 ,    int32_t  s1115 ) {
    return (  op_dash_add168 ( (  v1113 ) , (  s1115 ) ) );
}

static  int32_t   sum1932 (    struct Map_1933  it1111 ) {
    return ( (  reduce1934 ) ( (  it1111 ) ,  (  from_dash_integral67 ( 0 ) ) ,  (  lam1939 ) ) );
}

static  struct Map_1933   map1940 (    struct IntStrIter_1909  iterable806 ,    int32_t (*  fun808 )(    struct Char_65  ) ) {
    struct IntStrIter_1909  it809 = ( (  into_dash_iter1911 ) ( (  iterable806 ) ) );
    return ( ( Map_1933_Map ) ( (  it809 ) ,  (  fun808 ) ) );
}

static  enum Unit_8   put_dash_char1944 (    struct Screen_283 *  screen3565 ,    struct Char_65  c3567 ,    int32_t  x3569 ,    int32_t  y3571 ) {
    int32_t  w3572 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3565 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp166 ( (  x3569 ) , (  w3572 ) ) != 0 ) || (  cmp166 ( (  y3571 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3565 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp166 ( (  x3569 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) || (  cmp166 ( (  y3571 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3573 = ( (  i32_dash_size419 ) ( (  op_dash_add168 ( (  op_dash_mul1540 ( (  y3571 ) , (  w3572 ) ) ) , (  x3569 ) ) ) ) );
    struct Color_147  fg3574 = ( ( * (  screen3565 ) ) .f_default_dash_fg );
    struct Color_147  bg3575 = ( ( * (  screen3565 ) ) .f_default_dash_bg );
    struct Char_65  c3576 = (  c3567 );
    int32_t  char_dash_width3577 = ( (  wcwidth1113 ) ( (  c3576 ) ) );
    if ( ( (  cmp166 ( (  x3569 ) , (  from_dash_integral67 ( 0 ) ) ) == 2 ) && (  cmp166 ( ( (  elem_dash_get864 ( ( ( * (  screen3565 ) ) .f_current ) , (  op_dash_sub296 ( (  i3573 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral67 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_285  pc3578 = (  elem_dash_get864 ( ( ( * (  screen3565 ) ) .f_current ) , (  op_dash_sub296 ( (  i3573 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set860 ) ( ( ( * (  screen3565 ) ) .f_current ) ,  (  op_dash_sub296 ( (  i3573 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_285) { .f_c = ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3578 ) .f_fg ) , .f_bg = ( (  pc3578 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral67 ( 1 ) ) } ) ) );
    }
    ( (  set860 ) ( ( ( * (  screen3565 ) ) .f_current ) ,  (  i3573 ) ,  ( (struct Cell_285) { .f_c = (  c3576 ) , .f_fg = (  fg3574 ) , .f_bg = (  bg3575 ) , .f_char_dash_width = (  char_dash_width3577 ) } ) ) );
    struct RangeIter_162  temp1945 =  into_dash_iter163 ( ( (  to172 ) ( (  op_dash_add168 ( (  x3569 ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  ( (  min635 ) ( (  op_dash_sub173 ( (  op_dash_add168 ( (  x3569 ) , (  char_dash_width3577 ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  (  w3572 ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1946 =  next165 (&temp1945);
        if (  __cond1946 .tag == 0 ) {
            break;
        }
        int32_t  xx3580 =  __cond1946 .stuff .Maybe_164_Just_s .field0;
        size_t  i3581 = ( (  i32_dash_size419 ) ( (  op_dash_add168 ( (  op_dash_mul1540 ( (  y3571 ) , (  w3572 ) ) ) , (  xx3580 ) ) ) ) );
        ( (  set860 ) ( ( ( * (  screen3565 ) ) .f_current ) ,  (  i3581 ) ,  ( (struct Cell_285) { .f_c = ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3574 ) , .f_bg = (  bg3575 ) , .f_char_dash_width = (  from_dash_integral67 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1941 (    struct Screen_283 *  screen3584 ,    int32_t  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1540 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min635 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size419 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct IntStrIter_1909  temp1942 =  into_dash_iter1911 ( ( (  chars1924 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_304  __cond1943 =  next1912 (&temp1942);
        if (  __cond1943 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond1943 .stuff .Maybe_304_Just_s .field0;
        ( (  put_dash_char1944 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1111 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1931 (    struct Screen_283 *  screen3600 ,    int32_t  s3602 ,    int32_t  x3604 ,    int32_t  y3606 ) {
    int32_t  slen3607 = ( (  sum1932 ) ( ( (  map1940 ) ( ( (  chars1924 ) ( (  s3602 ) ) ) ,  (  rendered_dash_wcwidth1111 ) ) ) ) );
    int32_t  w3608 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3600 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3609 = (  op_dash_sub173 ( (  op_dash_sub173 ( (  w3608 ) , (  x3604 ) ) ) , (  slen3607 ) ) );
    ( (  draw_dash_str1941 ) ( (  screen3600 ) ,  (  s3602 ) ,  (  x3609 ) ,  (  y3606 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1948 {
    struct StrView_27  field0;
    int32_t  field1;
};

static struct StrConcat_1948 StrConcat_1948_StrConcat (  struct StrView_27  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1948 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1951 {
    struct StrView_27  field0;
    struct StrConcat_1948  field1;
};

static struct StrConcat_1951 StrConcat_1951_StrConcat (  struct StrView_27  field0 ,  struct StrConcat_1948  field1 ) {
    return ( struct StrConcat_1951 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1950 {
    struct StrConcat_1951  field0;
    struct Char_65  field1;
};

static struct StrConcat_1950 StrConcat_1950_StrConcat (  struct StrConcat_1951  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1950 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1953 (    struct StrConcat_1948  self1510 ) {
    struct StrConcat_1948  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str396 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1952 (    struct StrConcat_1951  self1510 ) {
    struct StrConcat_1951  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str1953 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1949 (    struct StrConcat_1950  self1510 ) {
    struct StrConcat_1950  dref1511 = (  self1510 );
    if ( true ) {
        ( (  print_dash_str1952 ) ( ( dref1511 .field0 ) ) );
        ( (  print_dash_str342 ) ( ( dref1511 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1947 (    bool  cond1720 ,    struct StrConcat_1948  msg1722 ) {
    if ( ( ! (  cond1720 ) ) ) {
        ( (  print_dash_str1949 ) ( ( ( StrConcat_1950_StrConcat ) ( ( ( StrConcat_1951_StrConcat ) ( ( (  from_dash_string207 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1722 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1955 {
    struct StrViewIter_62  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1955   into_dash_iter1956 (    struct AppendIter_1955  self1020 ) {
    return (  self1020 );
}

static  struct AppendIter_1955   append1957 (    struct StrViewIter_62  it1007 ,    struct Char_65  e1009 ) {
    return ( (struct AppendIter_1955) { .f_it = ( (  into_dash_iter786 ) ( (  it1007 ) ) ) , .f_elem = (  e1009 ) , .f_appended = ( false ) } );
}

static  struct Maybe_304   next1959 (    struct AppendIter_1955 *  self1023 ) {
    struct Maybe_304  dref1024 = ( (  next688 ) ( ( & ( ( * (  self1023 ) ) .f_it ) ) ) );
    if ( dref1024.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1024 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1024.tag == Maybe_304_None_t ) {
            if ( ( ! ( ( * (  self1023 ) ) .f_appended ) ) ) {
                (*  self1023 ) .f_appended = ( true );
                return ( ( Maybe_304_Just ) ( ( ( * (  self1023 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
        }
    }
}

static  bool   between1961 (    struct Pos_26  c1338 ,    struct Pos_26  l1340 ,    struct Pos_26  r1342 ) {
    struct Pos_26  from1343 = ( (  min521 ) ( (  l1340 ) ,  (  r1342 ) ) );
    struct Pos_26  to1344 = ( (  max523 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp522 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp522 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1960 (    struct Pane_227 *  pane4065 ,    struct Pos_26  pos4067 ) {
    return ( {  struct Maybe_34  dref4068 = ( ( * (  pane4065 ) ) .f_sel ) ; dref4068.tag == Maybe_34_Just_t ? ( (  between1961 ) ( (  pos4067 ) ,  ( ( * (  pane4065 ) ) .f_cursor ) ,  ( dref4068 .stuff .Maybe_34_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1963 {
    ;
    struct Theme_181 *  theme4108;
    ;
    struct Screen_283 *  screen4102;
};

struct envunion1964 {
    enum Unit_8  (*fun) (  struct env1963*  ,    enum HighlightType_20  );
    struct env1963 env;
};

static  enum Unit_8   if_dash_just1962 (    struct Maybe_211  x1292 ,   struct envunion1964  fun1294 ) {
    struct Maybe_211  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_211_Just_t ) {
        struct envunion1964  temp1965 = (  fun1294 );
        ( temp1965.fun ( &temp1965.env ,  ( dref1295 .stuff .Maybe_211_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_211_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1970 (    struct List_17 *  l2117 ,    size_t  new_dash_count2119 ) {
    (*  l2117 ) .f_count = ( (  min506 ) ( (  new_dash_count2119 ) ,  ( ( * (  l2117 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_304   head1973 (    struct Scanner_967 *  it1143 ) {
    struct Scanner_967  temp1974 = ( (  into_dash_iter983 ) ( (  it1143 ) ) );
    return ( (  next989 ) ( ( &temp1974 ) ) );
}

static  bool   null1972 (    struct Scanner_967 *  it1152 ) {
    struct Maybe_304  dref1153 = ( (  head1973 ) ( (  it1152 ) ) );
    if ( dref1153.tag == Maybe_304_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_304   peek1975 (    struct Scanner_967 *  sc3216 ) {
    return ( (  head1345 ) ( ( ( * (  sc3216 ) ) .f_s ) ) );
}

static  bool   eq1977 (    struct Maybe_304  l141 ,    struct Maybe_304  r143 ) {
    struct Tuple2_1848  dref144 = ( ( Tuple2_1848_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_304_None_t && dref144 .field1.tag == Maybe_304_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_304_Just_t && dref144 .field1.tag == Maybe_304_Just_t ) {
            return (  eq582 ( ( dref144 .field0 .stuff .Maybe_304_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_304_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char1976 (    struct Scanner_967 *  sc3219 ,    struct Char_65  char3221 ) {
    if ( (  eq1977 ( ( (  peek1975 ) ( (  sc3219 ) ) ) , ( ( Maybe_304_Just ) ( (  char3221 ) ) ) ) ) ) {
        ( (  drop_prime_992 ) ( (  sc3219 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   char_dash_satisfies1979 (    struct Scanner_967 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_304  dref3227 = ( (  head1345 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_304_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_992 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_304_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1978 (    struct Scanner_967 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1979 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1980 (    struct Char_65  c3920 ) {
    return ( !  eq582 ( (  c3920 ) , ( (  from_dash_charlike353 ) ( ( "]" ) ,  ( 1 ) ) ) ) );
}

struct TypeSize_1987 {
    size_t  f_size;
};

static  struct TypeSize_1987   get_dash_typesize1986 (  ) {
    struct Highlight_19  temp1988;
    return ( (struct TypeSize_1987) { .f_size = ( sizeof( ( (  temp1988 ) ) ) ) } );
}

static  struct Highlight_19 *   cast_dash_ptr1989 (    void *  p359 ) {
    return ( (struct Highlight_19 * ) (  p359 ) );
}

static  struct Slice_18   allocate1985 (    enum CAllocator_10  dref1955 ,    size_t  count1957 ) {
    if (!(  dref1955 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1958 = ( ( ( (  get_dash_typesize1986 ) ( ) ) ) .f_size );
    struct Highlight_19 *  ptr1959 = ( (  cast_dash_ptr1989 ) ( ( ( malloc ) ( (  op_dash_mul412 ( (  size1958 ) , (  count1957 ) ) ) ) ) ) );
    return ( (struct Slice_18) { .f_ptr = (  ptr1959 ) , .f_count = (  count1957 ) } );
}

struct env1990 {
    ;
    ;
    struct Slice_18  new_dash_slice2044;
};

struct Tuple2_1992 {
    struct Highlight_19  field0;
    int32_t  field1;
};

static struct Tuple2_1992 Tuple2_1992_Tuple2 (  struct Highlight_19  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1992 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1991 {
    enum Unit_8  (*fun) (  struct env1990*  ,    struct Tuple2_1992  );
    struct env1990 env;
};

static  struct Highlight_19 *   offset_dash_ptr1996 (    struct Highlight_19 *  x338 ,    int64_t  count340 ) {
    struct Highlight_19  temp1997;
    return ( (struct Highlight_19 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1997 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_19 *   get_dash_ptr1995 (    struct Slice_18  slice1759 ,    size_t  i1761 ) {
    if ( ( (  cmp297 ( (  i1761 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i1761 ) , ( (  slice1759 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic330 ) ( ( ( StrConcat_328_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1761 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1759 ) .f_count ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_19 *  elem_dash_ptr1762 = ( (  offset_dash_ptr1996 ) ( ( (  slice1759 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  i1761 ) ) ) ) );
    return (  elem_dash_ptr1762 );
}

static  enum Unit_8   set1994 (    struct Slice_18  slice1776 ,    size_t  i1778 ,    struct Highlight_19  x1780 ) {
    struct Highlight_19 *  ep1781 = ( (  get_dash_ptr1995 ) ( (  slice1776 ) ,  (  i1778 ) ) );
    (*  ep1781 ) = (  x1780 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1993 (   struct env1990* env ,    struct Tuple2_1992  dref2045 ) {
    return ( (  set1994 ) ( ( env->new_dash_slice2044 ) ,  ( (  i32_dash_size419 ) ( ( dref2045 .field1 ) ) ) ,  ( dref2045 .field0 ) ) );
}

struct SliceIter_2000 {
    struct Slice_18  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1999 {
    struct SliceIter_2000  f_left_dash_it;
    struct FromIter_423  f_right_dash_it;
};

static  struct Zip_1999   into_dash_iter2002 (    struct Zip_1999  self912 ) {
    return (  self912 );
}

struct Maybe_2003 {
    enum {
        Maybe_2003_None_t,
        Maybe_2003_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1992  field0;
        } Maybe_2003_Just_s;
    } stuff;
};

static struct Maybe_2003 Maybe_2003_Just (  struct Tuple2_1992  field0 ) {
    return ( struct Maybe_2003 ) { .tag = Maybe_2003_Just_t, .stuff = { .Maybe_2003_Just_s = { .field0 = field0 } } };
};

struct Maybe_2005 {
    enum {
        Maybe_2005_None_t,
        Maybe_2005_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_19  field0;
        } Maybe_2005_Just_s;
    } stuff;
};

static struct Maybe_2005 Maybe_2005_Just (  struct Highlight_19  field0 ) {
    return ( struct Maybe_2005 ) { .tag = Maybe_2005_Just_t, .stuff = { .Maybe_2005_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2005   next2006 (    struct SliceIter_2000 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp297 ( (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2005) { .tag = Maybe_2005_None_t } );
    }
    struct Highlight_19  elem1832 = ( * ( (  offset_dash_ptr1996 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2005_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2003   next2004 (    struct Zip_1999 *  self915 ) {
    struct Zip_1999  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_2005  dref917 = ( (  next2006 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_2005_None_t ) {
            return ( (struct Maybe_2003) { .tag = Maybe_2003_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_2005_Just_t ) {
                struct Maybe_164  dref919 = ( (  next429 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_2003) { .tag = Maybe_2003_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next2006 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next429 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2003_Just ) ( ( ( Tuple2_1992_Tuple2 ) ( ( dref917 .stuff .Maybe_2005_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1998 (    struct Zip_1999  iterable1075 ,   struct envunion1991  fun1077 ) {
    struct Zip_1999  temp2001 = ( (  into_dash_iter2002 ) ( (  iterable1075 ) ) );
    struct Zip_1999 *  it1078 = ( &temp2001 );
    while ( ( true ) ) {
        struct Maybe_2003  dref1079 = ( (  next2004 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_2003_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_2003_Just_t ) {
                struct envunion1991  temp2007 = (  fun1077 );
                ( temp2007.fun ( &temp2007.env ,  ( dref1079 .stuff .Maybe_2003_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_2000   into_dash_iter2009 (    struct Slice_18  self1824 ) {
    return ( (struct SliceIter_2000) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1999   zip2008 (    struct Slice_18  left923 ,    struct FromIter_423  right925 ) {
    struct SliceIter_2000  left_dash_it926 = ( (  into_dash_iter2009 ) ( (  left923 ) ) );
    struct FromIter_423  right_dash_it927 = ( (  into_dash_iter433 ) ( (  right925 ) ) );
    return ( (struct Zip_1999) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  void *   cast_dash_ptr2011 (    struct Highlight_19 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2010 (    enum CAllocator_10  dref1961 ,    struct Slice_18  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2011 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1984 (   struct env5* env ,    struct List_17 *  list2043 ) {
    if ( (  eq406 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2043 ) .f_elements = ( (  allocate1985 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( env->starting_dash_size2038 ) ) );
    } else {
        if ( (  eq406 ( ( ( * (  list2043 ) ) .f_count ) , ( ( ( * (  list2043 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_18  new_dash_slice2044 = ( (  allocate1985 ) ( ( ( * (  list2043 ) ) .f_al ) ,  (  op_dash_mul412 ( ( ( * (  list2043 ) ) .f_count ) , ( env->growth_dash_factor2039 ) ) ) ) );
            struct env1990 envinst1990 = {
                .new_dash_slice2044 =  new_dash_slice2044 ,
            };
            struct envunion1991  fun2048 = ( (struct envunion1991){ .fun = (  enum Unit_8  (*) (  struct env1990*  ,    struct Tuple2_1992  ) )lam1993 , .env =  envinst1990 } );
            ( (  for_dash_each1998 ) ( ( (  zip2008 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  (  fun2048 ) ) );
            ( (  free2010 ) ( ( ( * (  list2043 ) ) .f_al ) ,  ( ( * (  list2043 ) ) .f_elements ) ) );
            (*  list2043 ) .f_elements = (  new_dash_slice2044 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1982 (   struct env35* env ,    struct List_17 *  list2051 ,    struct Highlight_19  elem2053 ) {
    struct envunion36  temp1983 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_17 *  ) )grow_dash_if_dash_full1984 , .env =  env->envinst5 } );
    ( temp1983.fun ( &temp1983.env ,  (  list2051 ) ) );
    ( (  set1994 ) ( ( ( * (  list2051 ) ) .f_elements ) ,  ( ( * (  list2051 ) ) .f_count ) ,  (  elem2053 ) ) );
    (*  list2051 ) .f_count = (  op_dash_add318 ( ( ( * (  list2051 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion2013 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2015 (    struct Scanner_967 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_304  dref3227 = ( (  head1345 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_304_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_992 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_304_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2014 (    struct Scanner_967 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2015 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2016 (    struct Char_65  c3923 ) {
    return ( ( !  eq582 ( (  c3923 ) , ( (  from_dash_charlike353 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) && ( !  eq582 ( (  c3923 ) , ( (  from_dash_charlike353 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2018 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2019 (    struct Scanner_967 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_304  dref3227 = ( (  head1345 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_304_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_992 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_304_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies2021 (    struct Scanner_967 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_304  dref3227 = ( (  head1345 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_304_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_992 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_304_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2020 (    struct Scanner_967 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2021 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2022 (    struct Char_65  c3926 ) {
    return ( (  eq1332 ( ( (  char_dash_type1335 ) ( (  c3926 ) ) ) , ( CharType_1333_CharWord ) ) ) || (  eq582 ( (  c3926 ) , ( (  from_dash_charlike353 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2024 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2026 {
    struct StrView_27 _arr [2];
};

struct env2027 {
    struct Scanner_967 *  sc3916;
    ;
};

struct envunion2028 {
    bool  (*fun) (  struct env2027*  ,    struct StrView_27  );
    struct env2027 env;
};

struct env2030 {
    struct envunion2028  fun1136;
};

struct envunion2031 {
    bool  (*fun) (  struct env2030*  ,    struct StrView_27  ,    bool  );
    struct env2030 env;
};

struct ArrayIter_2032 {
    struct Array_2026  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2032   into_dash_iter2033 (    struct Array_2026  self2327 ) {
    return ( (struct ArrayIter_2032) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2037 (    struct Array_2026 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   offset_dash_ptr2038 (    struct StrView_27 *  x338 ,    int64_t  count340 ) {
    struct StrView_27  temp2039;
    return ( (struct StrView_27 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2039 ) ) ) ) ) ) ) ) );
}

static  struct StrView_27 *   get_dash_ptr2036 (    struct Array_2026 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp297 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2258 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic387 ) ( ( ( StrConcat_388_StrConcat ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2037 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2038 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2035 (    struct Array_2026 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2036 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2034 (    struct ArrayIter_2032 *  self2334 ) {
    if ( (  cmp297 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2035 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add318 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2029 (    struct Array_2026  iterable1094 ,    bool  base1096 ,   struct envunion2031  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2032  it1100 = ( (  into_dash_iter2033 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2034 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2031  temp2040 = (  fun1098 );
                x1099 = ( temp2040.fun ( &temp2040.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2041 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2041);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2042;
    return (  temp2042 );
}

static  bool   lam2043 (   struct env2030* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2028  temp2044 = ( env->fun1136 );
    return ( ( temp2044.fun ( &temp2044.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2025 (    struct Array_2026  it1134 ,   struct envunion2028  fun1136 ) {
    struct env2030 envinst2030 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2029 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2031){ .fun = (  bool  (*) (  struct env2030*  ,    struct StrView_27  ,    bool  ) )lam2043 , .env =  envinst2030 } ) ) );
}

static  struct Array_2026   from_dash_listlike2045 (    struct Array_2026  self330 ) {
    return (  self330 );
}

static  struct StrViewIter_62   own2050 (    struct StrViewIter_62  x1252 ) {
    return (  x1252 );
}

static  bool   matches_dash_str2047 (    struct Scanner_967 *  sc3231 ,    struct StrView_27  s3233 ) {
    size_t  skip3234 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_62  temp2048 = ( (  chars700 ) ( (  s3233 ) ) );
    struct StrViewIter_62 *  ss3235 = ( &temp2048 );
    struct StrViewIter_62  temp2049 = ( (  own2050 ) ( ( ( * (  sc3231 ) ) .f_s ) ) );
    struct StrViewIter_62 *  sccp3236 = ( &temp2049 );
    while ( ( true ) ) {
        struct Tuple2_1848  dref3237 = ( ( Tuple2_1848_Tuple2 ) ( ( (  next688 ) ( (  sccp3236 ) ) ) ,  ( (  next688 ) ( (  ss3235 ) ) ) ) );
        if ( dref3237 .field1.tag == Maybe_304_None_t ) {
            ( (  drop_prime_992 ) ( (  sc3231 ) ,  (  skip3234 ) ) );
            return ( true );
        }
        else {
            if ( dref3237 .field0.tag == Maybe_304_Just_t && dref3237 .field1.tag == Maybe_304_Just_t ) {
                if ( ( !  eq582 ( ( dref3237 .field0 .stuff .Maybe_304_Just_s .field0 ) , ( dref3237 .field1 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3234 = (  op_dash_add318 ( (  skip3234 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam2046 (   struct env2027* env ,    struct StrView_27  sym3929 ) {
    return ( (  matches_dash_str2047 ) ( ( env->sc3916 ) ,  (  sym3929 ) ) );
}

struct envunion2052 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct Array_2054 {
    struct StrView_27 _arr [12];
};

struct env2055 {
    struct Scanner_967 *  sc3916;
    ;
};

struct envunion2056 {
    bool  (*fun) (  struct env2055*  ,    struct StrView_27  );
    struct env2055 env;
};

struct env2058 {
    struct envunion2056  fun1136;
};

struct envunion2059 {
    bool  (*fun) (  struct env2058*  ,    struct StrView_27  ,    bool  );
    struct env2058 env;
};

struct ArrayIter_2060 {
    struct Array_2054  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2060   into_dash_iter2061 (    struct Array_2054  self2327 ) {
    return ( (struct ArrayIter_2060) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2065 (    struct Array_2054 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2064 (    struct Array_2054 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp297 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2258 ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) ) {
        ( (  panic387 ) ( ( ( StrConcat_388_StrConcat ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 12 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2065 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2038 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2063 (    struct Array_2054 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2064 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2062 (    struct ArrayIter_2060 *  self2334 ) {
    if ( (  cmp297 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 12 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2063 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add318 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2057 (    struct Array_2054  iterable1094 ,    bool  base1096 ,   struct envunion2059  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2060  it1100 = ( (  into_dash_iter2061 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2062 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2059  temp2066 = (  fun1098 );
                x1099 = ( temp2066.fun ( &temp2066.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2067 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2067);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2068;
    return (  temp2068 );
}

static  bool   lam2069 (   struct env2058* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2056  temp2070 = ( env->fun1136 );
    return ( ( temp2070.fun ( &temp2070.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2053 (    struct Array_2054  it1134 ,   struct envunion2056  fun1136 ) {
    struct env2058 envinst2058 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2057 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2059){ .fun = (  bool  (*) (  struct env2058*  ,    struct StrView_27  ,    bool  ) )lam2069 , .env =  envinst2058 } ) ) );
}

static  struct Array_2054   from_dash_listlike2071 (    struct Array_2054  self330 ) {
    return (  self330 );
}

static  bool   lam2072 (   struct env2055* env ,    struct StrView_27  sym3933 ) {
    return ( (  matches_dash_str2047 ) ( ( env->sc3916 ) ,  (  sym3933 ) ) );
}

struct envunion2074 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2076 (    struct Scanner_967 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_304  dref3227 = ( (  head1345 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_304_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_992 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_304_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2075 (    struct Scanner_967 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2076 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam2077 (    struct Char_65  c3937 ) {
    return ( (  eq1332 ( ( (  char_dash_type1335 ) ( (  c3937 ) ) ) , ( CharType_1333_CharWord ) ) ) || (  eq582 ( (  c3937 ) , ( (  from_dash_charlike353 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe2078 (    struct Maybe_304  x1283 ,    bool (*  fun1285 )(    struct Char_65  ) ,    bool  default1287 ) {
    return ( {  struct Maybe_304  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_304_Just_t ? ( (  fun1285 ) ( ( dref1288 .stuff .Maybe_304_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

static  bool   is_dash_upper2079 (    struct Char_65  c2411 ) {
    return ( (  eq406 ( ( (  c2411 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1338 ) ( (  c2411 ) ,  ( (  from_dash_charlike353 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_2080 {
    struct StrView_27 _arr [5];
};

static  struct Array_2080   from_dash_listlike2081 (    struct Array_2080  self330 ) {
    return (  self330 );
}

struct Array_2082 {
    struct StrView_27 _arr [15];
};

static  struct Array_2082   from_dash_listlike2083 (    struct Array_2082  self330 ) {
    return (  self330 );
}

struct env2085 {
    ;
    struct StrView_27  ident3941;
};

struct envunion2086 {
    bool  (*fun) (  struct env2085*  ,    struct StrView_27  );
    struct env2085 env;
};

struct env2088 {
    struct envunion2086  fun1136;
};

struct envunion2089 {
    bool  (*fun) (  struct env2088*  ,    struct StrView_27  ,    bool  );
    struct env2088 env;
};

struct ArrayIter_2090 {
    struct Array_2080  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2090   into_dash_iter2091 (    struct Array_2080  self2327 ) {
    return ( (struct ArrayIter_2090) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2095 (    struct Array_2080 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2094 (    struct Array_2080 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp297 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2258 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic387 ) ( ( ( StrConcat_388_StrConcat ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2095 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2038 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2093 (    struct Array_2080 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2094 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2092 (    struct ArrayIter_2090 *  self2334 ) {
    if ( (  cmp297 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2093 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add318 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2087 (    struct Array_2080  iterable1094 ,    bool  base1096 ,   struct envunion2089  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2090  it1100 = ( (  into_dash_iter2091 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2092 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2089  temp2096 = (  fun1098 );
                x1099 = ( temp2096.fun ( &temp2096.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2097 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2097);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2098;
    return (  temp2098 );
}

static  bool   lam2099 (   struct env2088* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2086  temp2100 = ( env->fun1136 );
    return ( ( temp2100.fun ( &temp2100.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2084 (    struct Array_2080  it1134 ,   struct envunion2086  fun1136 ) {
    struct env2088 envinst2088 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2087 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2089){ .fun = (  bool  (*) (  struct env2088*  ,    struct StrView_27  ,    bool  ) )lam2099 , .env =  envinst2088 } ) ) );
}

static  bool   lam2101 (   struct env2085* env ,    struct StrView_27  kw3945 ) {
    return (  eq1683 ( (  kw3945 ) , ( env->ident3941 ) ) );
}

struct env2103 {
    ;
    struct StrView_27  ident3941;
};

struct envunion2104 {
    bool  (*fun) (  struct env2103*  ,    struct StrView_27  );
    struct env2103 env;
};

struct env2106 {
    struct envunion2104  fun1136;
};

struct envunion2107 {
    bool  (*fun) (  struct env2106*  ,    struct StrView_27  ,    bool  );
    struct env2106 env;
};

struct ArrayIter_2108 {
    struct Array_2082  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_2108   into_dash_iter2109 (    struct Array_2082  self2327 ) {
    return ( (struct ArrayIter_2108) { .f_backing = (  self2327 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_27 *   cast_dash_ptr2113 (    struct Array_2082 *  p359 ) {
    return ( (struct StrView_27 * ) (  p359 ) );
}

static  struct StrView_27 *   get_dash_ptr2112 (    struct Array_2082 *  arr2255 ,    size_t  i2258 ) {
    if ( ( (  cmp297 ( (  i2258 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp297 ( (  i2258 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic387 ) ( ( ( StrConcat_388_StrConcat ) ( ( ( StrConcat_389_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2258 ) ) ) ,  ( (  from_dash_string207 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_27 *  p2259 = ( ( (  cast_dash_ptr2113 ) ( (  arr2255 ) ) ) );
    return ( (  offset_dash_ptr2038 ) ( (  p2259 ) ,  ( (int64_t ) (  i2258 ) ) ) );
}

static  struct StrView_27   get2111 (    struct Array_2082 *  arr2262 ,    size_t  i2265 ) {
    return ( * ( (  get_dash_ptr2112 ) ( (  arr2262 ) ,  (  i2265 ) ) ) );
}

static  struct Maybe_94   next2110 (    struct ArrayIter_2108 *  self2334 ) {
    if ( (  cmp297 ( ( ( * (  self2334 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    }
    struct StrView_27  e2336 = ( (  get2111 ) ( ( & ( ( * (  self2334 ) ) .f_backing ) ) ,  ( ( * (  self2334 ) ) .f_cur ) ) );
    (*  self2334 ) .f_cur = (  op_dash_add318 ( ( ( * (  self2334 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_94_Just ) ( (  e2336 ) ) );
}

static  bool   reduce2105 (    struct Array_2082  iterable1094 ,    bool  base1096 ,   struct envunion2107  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct ArrayIter_2108  it1100 = ( (  into_dash_iter2109 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_94  dref1101 = ( (  next2110 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_94_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_94_Just_t ) {
                struct envunion2107  temp2114 = (  fun1098 );
                x1099 = ( temp2114.fun ( &temp2114.env ,  ( dref1101 .stuff .Maybe_94_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2115 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2115);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2116;
    return (  temp2116 );
}

static  bool   lam2117 (   struct env2106* env ,    struct StrView_27  e1138 ,    bool  x1140 ) {
    struct envunion2104  temp2118 = ( env->fun1136 );
    return ( ( temp2118.fun ( &temp2118.env ,  (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2102 (    struct Array_2082  it1134 ,   struct envunion2104  fun1136 ) {
    struct env2106 envinst2106 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2105 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2107){ .fun = (  bool  (*) (  struct env2106*  ,    struct StrView_27  ,    bool  ) )lam2117 , .env =  envinst2106 } ) ) );
}

static  bool   lam2119 (   struct env2103* env ,    struct StrView_27  kw3947 ) {
    return (  eq1683 ( (  kw3947 ) , ( env->ident3941 ) ) );
}

struct envunion2121 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  struct Maybe_979   int2122 (    struct Scanner_967 *  sc3210 ) {
    return ( (  scan_dash_int980 ) ( (  sc3210 ) ) );
}

static  bool   char_dash_satisfies2124 (    struct Scanner_967 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_304  dref3227 = ( (  head1345 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_304_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_992 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_304_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2123 (    struct Scanner_967 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2124 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2125 (    struct Char_65  c2399 ) {
    return ( (  eq406 ( ( (  c2399 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1341 ) ( (  c2399 ) ) ) || ( (  between1338 ) ( (  c2399 ) ,  ( (  from_dash_charlike353 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1338 ) ( (  c2399 ) ,  ( (  from_dash_charlike353 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2127 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2128 (    struct Scanner_967 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2019 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2130 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2132 (    struct Scanner_967 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_304  dref3227 = ( (  head1345 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_304_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_992 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_304_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2131 (    struct Scanner_967 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2132 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2133 (    struct Char_65  c2405 ) {
    return ( (  eq406 ( ( (  c2405 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1338 ) ( (  c2405 ) ,  ( (  from_dash_charlike353 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2135 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2137 (    struct Scanner_967 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_304  dref3227 = ( (  head1345 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_304_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_992 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_304_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2136 (    struct Scanner_967 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2137 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2139 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  bool   char_dash_satisfies2141 (    struct Scanner_967 *  sc3224 ,    bool (*  condition3226 )(    struct Char_65  ) ) {
    struct Maybe_304  dref3227 = ( (  head1345 ) ( ( ( * (  sc3224 ) ) .f_s ) ) );
    if ( dref3227.tag == Maybe_304_Just_t ) {
        if ( ( (  condition3226 ) ( ( dref3227 .stuff .Maybe_304_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_992 ) ( (  sc3224 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3227.tag == Maybe_304_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2140 (    struct Scanner_967 *  sc3242 ,    bool (*  condition3244 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2141 ) ( (  sc3242 ) ,  (  condition3244 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2142 (    struct Char_65  c2402 ) {
    return ( (  eq406 ( ( (  c2402 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq582 ( (  c2402 ) , ( (  from_dash_charlike353 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) || (  eq582 ( (  c2402 ) , ( (  from_dash_charlike353 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2144 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2146 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2148 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

struct envunion2150 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  );
    struct env35 env;
};

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1969 (   struct env143* env ,    struct TextBuf_114 *  self3911 ,    struct Line_16 *  line3913 ) {
    if ( ( ! ( ( * (  line3913 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_17 *  hls3914 = ( & ( ( * (  line3913 ) ) .f_highlights ) );
    ( (  trim1970 ) ( (  hls3914 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_27  line_dash_sv3915 = ( (  from_dash_bytes1100 ) ( ( (  to_dash_slice533 ) ( ( ( * (  line3913 ) ) .f_line ) ) ) ) );
    struct Scanner_967  temp1971 = ( (  mk_dash_from_dash_str969 ) ( (  line_dash_sv3915 ) ) );
    struct Scanner_967 *  sc3916 = ( &temp1971 );
    while ( ( ! ( (  null1972 ) ( (  sc3916 ) ) ) ) ) {
        int32_t  from_dash_off3917 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
        struct Maybe_304  first_dash_char3918 = ( (  peek1975 ) ( (  sc3916 ) ) );
        if ( ( (  try_dash_char1976 ) ( (  sc3916 ) ,  ( (  from_dash_charlike353 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
            if ( ( (  try_dash_char1976 ) ( (  sc3916 ) ,  ( (  from_dash_charlike353 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  skip_dash_while1978 ) ( (  sc3916 ) ,  (  lam1980 ) ) );
                ( (  drop_prime_992 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                int32_t  to_dash_off3921 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                struct envunion144  temp1981 = ( (struct envunion144){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                ( temp1981.fun ( &temp1981.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = ( (  size_dash_i32336 ) ( ( (  num_dash_bytes1132 ) ( (  line_dash_sv3915 ) ) ) ) ) , .f_type = ( HighlightType_20_Special3 ) } ) ) );
            } else {
                struct envunion2013  temp2012 = ( (struct envunion2013){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                ( temp2012.fun ( &temp2012.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = ( (  size_dash_i32336 ) ( ( (  num_dash_bytes1132 ) ( (  line_dash_sv3915 ) ) ) ) ) , .f_type = ( HighlightType_20_Comment ) } ) ) );
            }
            break;
        } else {
            if ( ( (  try_dash_char1976 ) ( (  sc3916 ) ,  ( (  from_dash_charlike353 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while2014 ) ( (  sc3916 ) ,  (  lam2016 ) ) );
                    if ( (  eq1977 ( ( (  peek1975 ) ( (  sc3916 ) ) ) , ( ( Maybe_304_Just ) ( ( (  from_dash_charlike353 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                        ( (  drop_prime_992 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        if ( (  eq1977 ( ( (  peek1975 ) ( (  sc3916 ) ) ) , ( ( Maybe_304_Just ) ( ( (  from_dash_charlike353 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                            ( (  drop_prime_992 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                        }
                    } else {
                        ( (  drop_prime_992 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        break;
                    }
                }
                int32_t  cur_dash_off3924 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                struct envunion2018  temp2017 = ( (struct envunion2018){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                ( temp2017.fun ( &temp2017.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3924 ) , .f_type = ( HighlightType_20_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char1976 ) ( (  sc3916 ) ,  ( (  from_dash_charlike353 ) ( ( "@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies2019 ) ( (  sc3916 ) ,  (  is_dash_alpha1337 ) ) ) ) {
                        ( (  skip_dash_while2020 ) ( (  sc3916 ) ,  (  lam2022 ) ) );
                        int32_t  cur_dash_off3927 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                        struct envunion2024  temp2023 = ( (struct envunion2024){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                        ( temp2023.fun ( &temp2023.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3927 ) , .f_type = ( HighlightType_20_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct env2027 envinst2027 = {
                        .sc3916 =  sc3916 ,
                    };
                    if ( ( (  any2025 ) ( ( (  from_dash_listlike2045 ) ( ( (struct Array_2026) { ._arr = { ( (  from_dash_string207 ) ( ( "==" ) ,  ( 2 ) ) ) , ( (  from_dash_string207 ) ( ( "/=" ) ,  ( 2 ) ) ) } } ) ) ) ,  ( (struct envunion2028){ .fun = (  bool  (*) (  struct env2027*  ,    struct StrView_27  ) )lam2046 , .env =  envinst2027 } ) ) ) ) {
                        int32_t  cur_dash_off3930 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_20  type3931 = ( HighlightType_20_Special2 );
                        struct envunion2052  temp2051 = ( (struct envunion2052){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                        ( temp2051.fun ( &temp2051.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3930 ) , .f_type = (  type3931 ) } ) ) );
                    } else {
                        struct env2055 envinst2055 = {
                            .sc3916 =  sc3916 ,
                        };
                        if ( ( (  any2053 ) ( ( (  from_dash_listlike2071 ) ( ( (struct Array_2054) { ._arr = { ( (  from_dash_string207 ) ( ( "<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1230 ) ( ( "=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1230 ) ( ( "&" ) ,  ( 1 ) ) ) , ( (  from_dash_string207 ) ( ( "->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1230 ) ( ( ":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1230 ) ( ( "(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1230 ) ( ( ")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1230 ) ( ( "{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1230 ) ( ( "}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1230 ) ( ( "[" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1230 ) ( ( "]" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1230 ) ( ( "," ) ,  ( 1 ) ) ) } } ) ) ) ,  ( (struct envunion2056){ .fun = (  bool  (*) (  struct env2055*  ,    struct StrView_27  ) )lam2072 , .env =  envinst2055 } ) ) ) ) {
                            int32_t  cur_dash_off3934 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_20  type3935 = ( HighlightType_20_Special1 );
                            struct envunion2074  temp2073 = ( (struct envunion2074){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                            ( temp2073.fun ( &temp2073.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3934 ) , .f_type = (  type3935 ) } ) ) );
                        } else {
                            if ( ( (  char_dash_satisfies2019 ) ( (  sc3916 ) ,  (  is_dash_alpha1337 ) ) ) ) {
                                ( (  skip_dash_while2075 ) ( (  sc3916 ) ,  (  lam2077 ) ) );
                                int32_t  cur_dash_off3938 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                bool  first_dash_char_dash_uppercase3939 = ( (  maybe2078 ) ( (  first_dash_char3918 ) ,  (  is_dash_upper2079 ) ,  ( false ) ) );
                                enum HighlightType_20  type3940 = ( (  first_dash_char_dash_uppercase3939 ) ? ( HighlightType_20_Ident2 ) : ( HighlightType_20_Ident1 ) );
                                struct StrView_27  ident3941 = ( ( (  byte_dash_substr518 ) ( (  line_dash_sv3915 ) ,  ( (  i32_dash_size419 ) ( (  from_dash_off3917 ) ) ) ,  ( (  i32_dash_size419 ) ( (  cur_dash_off3938 ) ) ) ) ) );
                                struct Array_2080  keywords13942 = ( (  from_dash_listlike2081 ) ( ( (struct Array_2080) { ._arr = { ( (  from_dash_string207 ) ( ( "fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string207 ) ( ( "class" ) ,  ( 5 ) ) ) , ( (  from_dash_string207 ) ( ( "inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string207 ) ( ( "external" ) ,  ( 8 ) ) ) , ( (  from_dash_string207 ) ( ( "use" ) ,  ( 3 ) ) ) } } ) ) );
                                struct Array_2082  keywords23943 = ( (  from_dash_listlike2083 ) ( ( (struct Array_2082) { ._arr = { ( (  from_dash_string207 ) ( ( "if" ) ,  ( 2 ) ) ) , ( (  from_dash_string207 ) ( ( "elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string207 ) ( ( "else" ) ,  ( 4 ) ) ) , ( (  from_dash_string207 ) ( ( "case" ) ,  ( 4 ) ) ) , ( (  from_dash_string207 ) ( ( "for" ) ,  ( 3 ) ) ) , ( (  from_dash_string207 ) ( ( "in" ) ,  ( 2 ) ) ) , ( (  from_dash_string207 ) ( ( "while" ) ,  ( 5 ) ) ) , ( (  from_dash_string207 ) ( ( "pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string207 ) ( ( "break" ) ,  ( 5 ) ) ) , ( (  from_dash_string207 ) ( ( "continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string207 ) ( ( "as" ) ,  ( 2 ) ) ) , ( (  from_dash_string207 ) ( ( "or" ) ,  ( 2 ) ) ) , ( (  from_dash_string207 ) ( ( "and" ) ,  ( 3 ) ) ) , ( (  from_dash_string207 ) ( ( "not" ) ,  ( 3 ) ) ) , ( (  from_dash_string207 ) ( ( "return" ) ,  ( 6 ) ) ) } } ) ) );
                                struct env2085 envinst2085 = {
                                    .ident3941 =  ident3941 ,
                                };
                                if ( ( (  any2084 ) ( (  keywords13942 ) ,  ( (struct envunion2086){ .fun = (  bool  (*) (  struct env2085*  ,    struct StrView_27  ) )lam2101 , .env =  envinst2085 } ) ) ) ) {
                                    type3940 = ( HighlightType_20_Keyword1 );
                                } else {
                                    struct env2103 envinst2103 = {
                                        .ident3941 =  ident3941 ,
                                    };
                                    if ( ( (  any2102 ) ( (  keywords23943 ) ,  ( (struct envunion2104){ .fun = (  bool  (*) (  struct env2103*  ,    struct StrView_27  ) )lam2119 , .env =  envinst2103 } ) ) ) ) {
                                        type3940 = ( HighlightType_20_Keyword2 );
                                    } else {
                                        if ( ( ( ! (  first_dash_char_dash_uppercase3939 ) ) && (  eq1977 ( ( (  peek1975 ) ( (  sc3916 ) ) ) , ( ( Maybe_304_Just ) ( ( (  from_dash_charlike353 ) ( ( "(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                            type3940 = ( HighlightType_20_Ident4 );
                                        }
                                    }
                                }
                                struct envunion2121  temp2120 = ( (struct envunion2121){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                                ( temp2120.fun ( &temp2120.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3938 ) , .f_type = (  type3940 ) } ) ) );
                            } else {
                                struct Maybe_979  dref3948 = ( (  int2122 ) ( (  sc3916 ) ) );
                                if ( dref3948.tag == Maybe_979_Just_t ) {
                                    int32_t  cur_dash_off3950 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_20  type3951 = ( HighlightType_20_Number );
                                    if ( (  eq1067 ( ( dref3948 .stuff .Maybe_979_Just_s .field0 ) , (  from_dash_integral295 ( 0 ) ) ) ) ) {
                                        if ( ( (  try_dash_char1976 ) ( (  sc3916 ) ,  ( (  from_dash_charlike353 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  skip_dash_while2123 ) ( (  sc3916 ) ,  (  is_dash_hex2125 ) ) );
                                            int32_t  cur_dash_off3952 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                            struct envunion2127  temp2126 = ( (struct envunion2127){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                                            ( temp2126.fun ( &temp2126.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3952 ) , .f_type = (  type3951 ) } ) ) );
                                            ( (  skip_dash_while2128 ) ( (  sc3916 ) ,  (  is_dash_alpha1337 ) ) );
                                            int32_t  invalid_dash_off3953 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                            if ( ( !  eq525 ( (  cur_dash_off3952 ) , (  invalid_dash_off3953 ) ) ) ) {
                                                struct envunion2130  temp2129 = ( (struct envunion2130){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                                                ( temp2129.fun ( &temp2129.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3952 ) , .f_to = (  invalid_dash_off3953 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                            }
                                        } else {
                                            if ( ( (  try_dash_char1976 ) ( (  sc3916 ) ,  ( (  from_dash_charlike353 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while2131 ) ( (  sc3916 ) ,  (  is_dash_octal2133 ) ) );
                                                int32_t  cur_dash_off3954 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion2135  temp2134 = ( (struct envunion2135){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                                                ( temp2134.fun ( &temp2134.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3954 ) , .f_type = (  type3951 ) } ) ) );
                                                ( (  skip_dash_while2136 ) ( (  sc3916 ) ,  (  is_dash_digit985 ) ) );
                                                int32_t  invalid_dash_off3955 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq525 ( (  cur_dash_off3954 ) , (  invalid_dash_off3955 ) ) ) ) {
                                                    struct envunion2139  temp2138 = ( (struct envunion2139){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                                                    ( temp2138.fun ( &temp2138.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3954 ) , .f_to = (  invalid_dash_off3955 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char1976 ) ( (  sc3916 ) ,  ( (  from_dash_charlike353 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2140 ) ( (  sc3916 ) ,  (  is_dash_binary2142 ) ) );
                                                    int32_t  cur_dash_off3956 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2144  temp2143 = ( (struct envunion2144){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                                                    ( temp2143.fun ( &temp2143.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3956 ) , .f_type = (  type3951 ) } ) ) );
                                                    ( (  skip_dash_while2136 ) ( (  sc3916 ) ,  (  is_dash_digit985 ) ) );
                                                    int32_t  invalid_dash_off3957 = ( (  size_dash_i32336 ) ( ( ( * (  sc3916 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq525 ( (  cur_dash_off3956 ) , (  invalid_dash_off3957 ) ) ) ) {
                                                        struct envunion2146  temp2145 = ( (struct envunion2146){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                                                        ( temp2145.fun ( &temp2145.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  cur_dash_off3956 ) , .f_to = (  invalid_dash_off3957 ) , .f_type = ( HighlightType_20_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    struct envunion2148  temp2147 = ( (struct envunion2148){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                                                    ( temp2147.fun ( &temp2147.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3950 ) , .f_type = (  type3951 ) } ) ) );
                                                }
                                            }
                                        }
                                    } else {
                                        struct envunion2150  temp2149 = ( (struct envunion2150){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_17 *  ,    struct Highlight_19  ) )add1982 , .env =  env->envinst35 } );
                                        ( temp2149.fun ( &temp2149.env ,  (  hls3914 ) ,  ( (struct Highlight_19) { .f_from = (  from_dash_off3917 ) , .f_to = (  cur_dash_off3950 ) , .f_type = (  type3951 ) } ) ) );
                                    }
                                }
                                else {
                                    if ( dref3948.tag == Maybe_979_None_t ) {
                                        ( (  drop_prime_992 ) ( (  sc3916 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
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

static  struct Slice_18   subslice2153 (    struct Slice_18  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Highlight_19 *  begin_dash_ptr1789 = ( (  offset_dash_ptr1996 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp297 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp297 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub296 ( ( (  min506 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_18) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

static  struct SliceIter_2000   into_dash_iter2152 (    struct List_17  self2030 ) {
    return ( (  into_dash_iter2009 ) ( ( (  subslice2153 ) ( ( (  self2030 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2030 ) .f_count ) ) ) ) );
}

static  bool   between2155 (    int32_t  c1338 ,    int32_t  l1340 ,    int32_t  r1342 ) {
    int32_t  from1343 = ( (  min635 ) ( (  l1340 ) ,  (  r1342 ) ) );
    int32_t  to1344 = ( (  max1112 ) ( (  l1340 ) ,  (  r1342 ) ) );
    return ( (  cmp166 ( (  from1343 ) , (  c1338 ) ) != 2 ) && (  cmp166 ( (  c1338 ) , (  to1344 ) ) != 2 ) );
}

static  struct Maybe_211   highlight_dash_at1967 (   struct env145* env ,    struct TextBuf_114 *  self3960 ,    struct Pos_26  pos3962 ) {
    struct Line_16 *  line3963 = ( (  get_dash_ptr531 ) ( ( & ( ( * (  self3960 ) ) .f_buf ) ) ,  ( (  i32_dash_size419 ) ( ( (  pos3962 ) .f_line ) ) ) ) );
    struct envunion146  temp1968 = ( (struct envunion146){ .fun = (  enum Unit_8  (*) (  struct env143*  ,    struct TextBuf_114 *  ,    struct Line_16 *  ) )recompute_dash_highlights_dash_at_dash_line1969 , .env =  env->envinst143 } );
    ( temp1968.fun ( &temp1968.env ,  (  self3960 ) ,  (  line3963 ) ) );
    struct SliceIter_2000  temp2151 =  into_dash_iter2152 ( ( ( * (  line3963 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_2005  __cond2154 =  next2006 (&temp2151);
        if (  __cond2154 .tag == 0 ) {
            break;
        }
        struct Highlight_19  hl3965 =  __cond2154 .stuff .Maybe_2005_Just_s .field0;
        if ( ( (  between2155 ) ( ( (  pos3962 ) .f_bi ) ,  ( (  hl3965 ) .f_from ) ,  (  op_dash_sub173 ( ( (  hl3965 ) .f_to ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_211_Just ) ( ( (  hl3965 ) .f_type ) ) );
        }
        if ( (  cmp166 ( ( (  pos3962 ) .f_bi ) , ( (  hl3965 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_211) { .tag = Maybe_211_None_t } );
        }
    }
    return ( (struct Maybe_211) { .tag = Maybe_211_None_t } );
}

struct Maybe_2159 {
    enum {
        Maybe_2159_None_t,
        Maybe_2159_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_184  field0;
        } Maybe_2159_Just_s;
    } stuff;
};

static struct Maybe_2159 Maybe_2159_Just (  struct HighlightColors_184  field0 ) {
    return ( struct Maybe_2159 ) { .tag = Maybe_2159_Just_t, .stuff = { .Maybe_2159_Just_s = { .field0 = field0 } } };
};

struct env2160 {
    struct Theme_181 *  theme4000;
    ;
};

struct envunion2161 {
    struct Colors_182  (*fun) (  struct env2160*  ,    struct HighlightColors_184  );
    struct env2160 env;
};

static  struct Colors_182   maybe2158 (    struct Maybe_2159  x1283 ,   struct envunion2161  fun1285 ,    struct Colors_182  default1287 ) {
    struct envunion2161  temp2162 = (  fun1285 );
    return ( {  struct Maybe_2159  dref1288 = (  x1283 ) ; dref1288.tag == Maybe_2159_Just_t ? ( temp2162.fun ( &temp2162.env ,  ( dref1288 .stuff .Maybe_2159_Just_s .field0 ) ) ) : (  default1287 ) ; } );
}

struct SliceIter_2165 {
    struct Slice_183  f_slice;
    size_t  f_current_dash_offset;
};

struct env2166 {
    enum HighlightType_20  hltype4002;
    ;
};

struct envunion2167 {
    bool  (*fun) (  struct env2166*  ,    struct HighlightColors_184  );
    struct env2166 env;
};

struct Filter_2164 {
    struct SliceIter_2165  f_og;
    struct envunion2167  f_fun;
};

static  struct HighlightColors_184 *   offset_dash_ptr2170 (    struct HighlightColors_184 *  x338 ,    int64_t  count340 ) {
    struct HighlightColors_184  temp2171;
    return ( (struct HighlightColors_184 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul293 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2171 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2159   next2169 (    struct SliceIter_2165 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp297 ( (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2159) { .tag = Maybe_2159_None_t } );
    }
    struct HighlightColors_184  elem1832 = ( * ( (  offset_dash_ptr2170 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2159_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2159   next2168 (    struct Filter_2164 *  self834 ) {
    while ( ( true ) ) {
        struct Maybe_2159  dref835 = ( (  next2169 ) ( ( & ( ( * (  self834 ) ) .f_og ) ) ) );
        if ( dref835.tag == Maybe_2159_None_t ) {
            return ( (struct Maybe_2159) { .tag = Maybe_2159_None_t } );
        }
        else {
            if ( dref835.tag == Maybe_2159_Just_t ) {
                struct envunion2167  temp2172 = ( ( * (  self834 ) ) .f_fun );
                if ( ( temp2172.fun ( &temp2172.env ,  ( dref835 .stuff .Maybe_2159_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2159_Just ) ( ( dref835 .stuff .Maybe_2159_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2159  temp2173;
    return (  temp2173 );
}

static  struct Filter_2164   into_dash_iter2175 (    struct Filter_2164  self831 ) {
    return (  self831 );
}

static  struct Maybe_2159   head2163 (    struct Filter_2164  it1143 ) {
    struct Filter_2164  temp2174 = ( (  into_dash_iter2175 ) ( (  it1143 ) ) );
    return ( (  next2168 ) ( ( &temp2174 ) ) );
}

static  struct SliceIter_2165   into_dash_iter2177 (    struct Slice_183  self1824 ) {
    return ( (struct SliceIter_2165) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2164   filter2176 (    struct Slice_183  iterable839 ,   struct envunion2167  fun841 ) {
    struct SliceIter_2165  it842 = ( (  into_dash_iter2177 ) ( (  iterable839 ) ) );
    return ( (struct Filter_2164) { .f_og = (  it842 ) , .f_fun = (  fun841 ) } );
}

static  enum HighlightType_20 *   cast2182 (    uint32_t *  x356 ) {
    return ( (enum HighlightType_20 * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2180 (    enum HighlightType_20  x574 ) {
    uint32_t  temp2181 = ( (  zeroed819 ) ( ) );
    uint32_t *  y575 = ( &temp2181 );
    enum HighlightType_20 *  yp576 = ( (  cast2182 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2179 (    enum HighlightType_20  l3648 ,    enum HighlightType_20  r3650 ) {
    return (  eq586 ( ( ( (  cast_dash_on_dash_zeroed2180 ) ( (  l3648 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2180 ) ( (  r3650 ) ) ) ) );
}

static  bool   lam2178 (   struct env2166* env ,    struct HighlightColors_184  hlc4004 ) {
    return (  eq2179 ( ( (  hlc4004 ) .f_type ) , ( env->hltype4002 ) ) );
}

static  struct Color_147   or_dash_else2184 (    struct Maybe_185  self1734 ,    struct Color_147  alt1736 ) {
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

static  struct Colors_182   lam2183 (   struct env2160* env ,    struct HighlightColors_184  hlc4006 ) {
    return ( (struct Colors_182) { .f_fg = ( (  hlc4006 ) .f_fg ) , .f_bg = ( (  or_dash_else2184 ) ( ( (  hlc4006 ) .f_bg ) ,  ( ( ( * ( env->theme4000 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_182   find_dash_colors_dash_for_dash_highlight2157 (    struct Theme_181 *  theme4000 ,    enum HighlightType_20  hltype4002 ) {
    struct env2166 envinst2166 = {
        .hltype4002 =  hltype4002 ,
    };
    struct env2160 envinst2160 = {
        .theme4000 =  theme4000 ,
    };
    return ( (  maybe2158 ) ( ( (  head2163 ) ( ( (  filter2176 ) ( ( ( * (  theme4000 ) ) .f_highlights ) ,  ( (struct envunion2167){ .fun = (  bool  (*) (  struct env2166*  ,    struct HighlightColors_184  ) )lam2178 , .env =  envinst2166 } ) ) ) ) ) ,  ( (struct envunion2161){ .fun = (  struct Colors_182  (*) (  struct env2160*  ,    struct HighlightColors_184  ) )lam2183 , .env =  envinst2160 } ) ,  ( ( * (  theme4000 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2156 (   struct env1963* env ,    enum HighlightType_20  type4129 ) {
    ( (  set_dash_colors1929 ) ( ( env->screen4102 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2157 ) ( ( env->theme4108 ) ,  (  type4129 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_27   todo2188 (  ) {
    ( (  print1348 ) ( ( (  from_dash_string207 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined1711 ) ( ) );
}

static  struct StrView_27   short_dash_mode_dash_name2187 (    enum Mode_228  mode4020 ) {
    return ( {  enum Mode_228  dref4021 = (  mode4020 ) ;  dref4021 == Mode_228_Normal ? ( (  from_dash_string207 ) ( ( "NOR" ) ,  ( 3 ) ) ) :  dref4021 == Mode_228_Insert ? ( (  from_dash_string207 ) ( ( "INS" ) ,  ( 3 ) ) ) :  dref4021 == Mode_228_Select ? ( (  from_dash_string207 ) ( ( "SEL" ) ,  ( 3 ) ) ) : ( (  todo2188 ) ( ) ) ; } );
}

struct StrConcat_2191 {
    struct Char_65  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2191 StrConcat_2191_StrConcat (  struct Char_65  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2191 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2190 {
    struct StrConcat_2191  field0;
    struct Char_65  field1;
};

static struct StrConcat_2190 StrConcat_2190_StrConcat (  struct StrConcat_2191  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2190 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2194 {
    struct AppendIter_63  f_left;
    struct StrViewIter_62  f_right;
};

struct StrConcatIter_2193 {
    struct StrConcatIter_2194  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2193   into_dash_iter2195 (    struct StrConcatIter_2193  self1498 ) {
    return (  self1498 );
}

static  struct StrConcatIter_2194   into_dash_iter2199 (    struct StrConcat_2191  dref1505 ) {
    return ( (struct StrConcatIter_2194) { .f_left = ( (  chars702 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars700 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2194   chars2198 (    struct StrConcat_2191  self1516 ) {
    return ( (  into_dash_iter2199 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2193   into_dash_iter2197 (    struct StrConcat_2190  dref1505 ) {
    return ( (struct StrConcatIter_2193) { .f_left = ( (  chars2198 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2193   chars2196 (    struct StrConcat_2190  self1516 ) {
    return ( (  into_dash_iter2197 ) ( (  self1516 ) ) );
}

static  struct Maybe_304   next2202 (    struct StrConcatIter_2194 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next2201 (    struct StrConcatIter_2193 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2202 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2189 (    struct Screen_283 *  screen3584 ,    struct StrConcat_2190  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1540 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min635 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size419 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct StrConcatIter_2193  temp2192 =  into_dash_iter2195 ( ( (  chars2196 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_304  __cond2200 =  next2201 (&temp2192);
        if (  __cond2200 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond2200 .stuff .Maybe_304_Just_s .field0;
        ( (  put_dash_char1944 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1111 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1904 (   struct env209* env ,    struct Screen_283 *  screen4102 ,    struct Pane_227 *  pane4104 ,    struct ScreenDims_286  sd4106 ,    struct Theme_181 *  theme4108 ) {
    bool  display_dash_line_dash_numbers4109 = ( true );
    ( (  update_dash_screen_dash_offset1905 ) ( (  pane4104 ) ,  (  sd4106 ) ) );
    struct ScreenCursorOffset_229  sc_dash_off4110 = ( ( * (  pane4104 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars4111 = ( (  size_dash_i32336 ) ( ( (  count1908 ) ( ( (  chars1924 ) ( ( (  num_dash_lines1139 ) ( ( ( * (  pane4104 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4112 = (  from_dash_integral67 ( 2 ) );
    int32_t  num_dash_back_dash_margin4113 = (  from_dash_integral67 ( 2 ) );
    int32_t  total_dash_margin4114 = ( (  display_dash_line_dash_numbers4109 ) ? (  op_dash_add168 ( (  op_dash_add168 ( (  max_dash_line_dash_num_dash_chars4111 ) , (  num_dash_front_dash_margin4112 ) ) ) , (  num_dash_back_dash_margin4113 ) ) ) : (  from_dash_integral67 ( 0 ) ) );
    struct RangeIter_162  temp1927 =  into_dash_iter163 ( ( (  to172 ) ( (  op_dash_add168 ( ( (  sc_dash_off4110 ) .f_screen_dash_top ) , (  from_dash_integral67 ( 1 ) ) ) ) ,  ( (  min635 ) ( ( (  num_dash_lines1139 ) ( ( ( * (  pane4104 ) ) .f_buf ) ) ) ,  (  op_dash_add168 ( ( (  sc_dash_off4110 ) .f_screen_dash_top ) , ( (  screen_dash_height1907 ) ( (  sd4106 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond1928 =  next165 (&temp1927);
        if (  __cond1928 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4116 =  __cond1928 .stuff .Maybe_164_Just_s .field0;
        int32_t  ybi4117 = (  op_dash_sub173 ( (  line_dash_num4116 ) , (  from_dash_integral67 ( 1 ) ) ) );
        int32_t  xbi4118 = ( (  vi_dash_bi1141 ) ( ( ( * (  pane4104 ) ) .f_buf ) ,  (  ybi4117 ) ,  ( (  sc_dash_off4110 ) .f_screen_dash_left ) ) );
        struct StrView_27  line_dash_content4119 = ( (  line1099 ) ( ( ( * (  pane4104 ) ) .f_buf ) ,  (  ybi4117 ) ) );
        int32_t  ys4120 = (  op_dash_sub173 ( (  op_dash_sub173 ( (  op_dash_add168 ( ( (  sd4106 ) .f_from_dash_sy ) , (  line_dash_num4116 ) ) ) , ( (  sc_dash_off4110 ) .f_screen_dash_top ) ) ) , (  from_dash_integral67 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4109 ) ) {
            if ( (  eq525 ( ( ( ( * (  pane4104 ) ) .f_cursor ) .f_line ) , (  ybi4117 ) ) ) ) {
                ( (  set_dash_colors1929 ) ( (  screen4102 ) ,  ( ( * (  theme4108 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors1929 ) ( (  screen4102 ) ,  ( ( * (  theme4108 ) ) .f_line_dash_num ) ) );
            }
            ( (  draw_dash_str_dash_right1931 ) ( (  screen4102 ) ,  (  line_dash_num4116 ) ,  (  op_dash_add168 ( (  op_dash_sub173 ( (  op_dash_sub173 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen4102 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4106 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4114 ) ) ) , (  num_dash_back_dash_margin4113 ) ) ) ,  (  ys4120 ) ) );
        }
        int32_t  vx4121 = (  op_dash_sub173 ( ( (  pos_dash_vi1097 ) ( ( ( * (  pane4104 ) ) .f_buf ) ,  ( (  mk671 ) ( (  ybi4117 ) ,  (  xbi4118 ) ) ) ) ) , ( (  sc_dash_off4110 ) .f_screen_dash_left ) ) );
        ( (  assert1947 ) ( (  cmp166 ( (  vx4121 ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1948_StrConcat ) ( ( (  from_dash_string207 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4121 ) ) ) ) );
        int32_t  left_dash_offset4122 = (  op_dash_add168 ( ( (  sd4106 ) .f_from_dash_sx ) , (  total_dash_margin4114 ) ) );
        struct AppendIter_1955  temp1954 =  into_dash_iter1956 ( ( (  append1957 ) ( ( (  chars700 ) ( ( (  byte_dash_substr_dash_from1533 ) ( (  line_dash_content4119 ) ,  ( (  i32_dash_size419 ) ( (  xbi4118 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_304  __cond1958 =  next1959 (&temp1954);
            if (  __cond1958 .tag == 0 ) {
                break;
            }
            struct Char_65  c4124 =  __cond1958 .stuff .Maybe_304_Just_s .field0;
            if ( (  cmp166 ( (  vx4121 ) , ( (  sd4106 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_26  curpos4125 = ( (  mk671 ) ( (  ybi4117 ) ,  (  xbi4118 ) ) );
            bool  is_dash_cursor4126 = (  eq524 ( (  curpos4125 ) , ( ( * (  pane4104 ) ) .f_cursor ) ) );
            bool  in_dash_selection4127 = ( (  is_dash_in_dash_selection1960 ) ( (  pane4104 ) ,  ( (  mk671 ) ( (  ybi4117 ) ,  (  xbi4118 ) ) ) ) );
            if ( (  is_dash_cursor4126 ) ) {
                ( (  set_dash_colors1929 ) ( (  screen4102 ) ,  ( ( * (  theme4108 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4127 ) ) {
                    ( (  set_dash_colors1929 ) ( (  screen4102 ) ,  ( ( * (  theme4108 ) ) .f_selection ) ) );
                } else {
                    struct envunion210  temp1966 = ( (struct envunion210){ .fun = (  struct Maybe_211  (*) (  struct env145*  ,    struct TextBuf_114 *  ,    struct Pos_26  ) )highlight_dash_at1967 , .env =  env->envinst145 } );
                    struct env1963 envinst1963 = {
                        .theme4108 =  theme4108 ,
                        .screen4102 =  screen4102 ,
                    };
                    ( (  if_dash_just1962 ) ( ( temp1966.fun ( &temp1966.env ,  ( ( * (  pane4104 ) ) .f_buf ) ,  (  curpos4125 ) ) ) ,  ( (struct envunion1964){ .fun = (  enum Unit_8  (*) (  struct env1963*  ,    enum HighlightType_20  ) )lam2156 , .env =  envinst1963 } ) ) );
                }
            }
            struct Maybe_94  dref4130 = ( (  char_dash_replacement1104 ) ( (  c4124 ) ) );
            if ( dref4130.tag == Maybe_94_None_t ) {
                if ( ( ! ( (  cmp166 ( (  vx4121 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  op_dash_sub173 ( (  op_dash_add168 ( (  vx4121 ) , ( (  char_dash_screen_dash_width1102 ) ( (  c4124 ) ) ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , ( (  sd4106 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1944 ) ( (  screen4102 ) ,  (  c4124 ) ,  (  op_dash_add168 ( (  left_dash_offset4122 ) , (  vx4121 ) ) ) ,  (  ys4120 ) ) );
                }
                vx4121 = (  op_dash_add168 ( (  vx4121 ) , ( (  char_dash_screen_dash_width1102 ) ( (  c4124 ) ) ) ) );
            }
            else {
                if ( dref4130.tag == Maybe_94_Just_t ) {
                    struct StrViewIter_62  temp2185 =  into_dash_iter786 ( ( (  chars700 ) ( ( dref4130 .stuff .Maybe_94_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_304  __cond2186 =  next688 (&temp2185);
                        if (  __cond2186 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4133 =  __cond2186 .stuff .Maybe_304_Just_s .field0;
                        if ( (  cmp166 ( (  vx4121 ) , (  from_dash_integral67 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1944 ) ( (  screen4102 ) ,  (  c4133 ) ,  (  op_dash_add168 ( (  left_dash_offset4122 ) , (  vx4121 ) ) ) ,  (  ys4120 ) ) );
                        }
                        vx4121 = (  op_dash_add168 ( (  vx4121 ) , ( (  char_dash_screen_dash_width1102 ) ( (  c4133 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors1929 ) ( (  screen4102 ) ,  ( ( * (  theme4108 ) ) .f_default ) ) );
            xbi4118 = (  op_dash_add168 ( (  xbi4118 ) , ( (  size_dash_i32336 ) ( ( (  c4124 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors1929 ) ( (  screen4102 ) ,  ( ( * (  theme4108 ) ) .f_overlay ) ) );
    struct StrView_27  modename4134 = ( (  short_dash_mode_dash_name2187 ) ( ( ( * (  pane4104 ) ) .f_mode ) ) );
    ( (  draw_dash_str2189 ) ( (  screen4102 ) ,  ( ( StrConcat_2190_StrConcat ) ( ( ( StrConcat_2191_StrConcat ) ( ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  modename4134 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4106 ) .f_from_dash_sx ) ,  ( (  sd4106 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2204 {
    ;
    ;
    struct Screen_283 *  screen4514;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion2205 {
    enum Unit_8  (*fun) (  struct env2204*  ,    struct StrView_27  );
    struct env2204 env;
};

static  enum Unit_8   if_dash_just2203 (    struct Maybe_94  x1292 ,   struct envunion2205  fun1294 ) {
    struct Maybe_94  dref1295 = (  x1292 );
    if ( dref1295.tag == Maybe_94_Just_t ) {
        struct envunion2205  temp2206 = (  fun1294 );
        ( temp2206.fun ( &temp2206.env ,  ( dref1295 .stuff .Maybe_94_Just_s .field0 ) ) );
    }
    else {
        if ( dref1295.tag == Maybe_94_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2207 (   struct env2204* env ,    struct StrView_27  msg4519 ) {
    int32_t  num_dash_chars4520 = ( (  size_dash_i32336 ) ( ( (  count1106 ) ( ( (  chars700 ) ( (  msg4519 ) ) ) ) ) ) );
    ( (  draw_dash_str2189 ) ( ( env->screen4514 ) ,  ( ( StrConcat_2190_StrConcat ) ( ( ( StrConcat_2191_StrConcat ) ( ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  msg4519 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1539 ( (  op_dash_sub173 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * ( env->screen4514 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4520 ) ) ) , (  from_dash_integral67 ( 2 ) ) ) ) ,  (  op_dash_sub173 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * ( env->screen4514 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2210 {
    struct StrView_27  field0;
    struct StrBuilder_73  field1;
};

static struct StrConcat_2210 StrConcat_2210_StrConcat (  struct StrView_27  field0 ,  struct StrBuilder_73  field1 ) {
    return ( struct StrConcat_2210 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2209 {
    struct StrConcat_2210  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2209 StrConcat_2209_StrConcat (  struct StrConcat_2210  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2209 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2208 {
    struct StrConcat_2209  field0;
    struct Char_65  field1;
};

static struct StrConcat_2208 StrConcat_2208_StrConcat (  struct StrConcat_2209  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2208 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2213 {
    struct StrConcatIter_61  f_left;
    struct StrViewIter_62  f_right;
};

struct StrConcatIter_2212 {
    struct StrConcatIter_2213  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2212   into_dash_iter2215 (    struct StrConcatIter_2212  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_304   next2217 (    struct StrConcatIter_2213 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next687 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next2216 (    struct StrConcatIter_2212 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2217 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2214 (    struct StrConcatIter_2212  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrConcatIter_2212  it1100 = ( (  into_dash_iter2215 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_304  dref1101 = ( (  next2216 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_304_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_304_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_304_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2218 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2218);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2219;
    return (  temp2219 );
}

static  size_t   lam2220 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add318 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2211 (    struct StrConcatIter_2212  it1105 ) {
    return ( (  reduce2214 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2220 ) ) );
}

static  struct StrConcatIter_61   into_dash_iter2226 (    struct StrConcat_2210  dref1505 ) {
    return ( (struct StrConcatIter_61) { .f_left = ( (  chars700 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars1715 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_61   chars2225 (    struct StrConcat_2210  self1516 ) {
    return ( (  into_dash_iter2226 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2213   into_dash_iter2224 (    struct StrConcat_2209  dref1505 ) {
    return ( (struct StrConcatIter_2213) { .f_left = ( (  chars2225 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars700 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2213   chars2223 (    struct StrConcat_2209  self1516 ) {
    return ( (  into_dash_iter2224 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2212   into_dash_iter2222 (    struct StrConcat_2208  dref1505 ) {
    return ( (struct StrConcatIter_2212) { .f_left = ( (  chars2223 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2212   chars2221 (    struct StrConcat_2208  self1516 ) {
    return ( (  into_dash_iter2222 ) ( (  self1516 ) ) );
}

static  enum Unit_8   draw_dash_str2227 (    struct Screen_283 *  screen3584 ,    struct StrConcat_2208  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1540 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min635 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size419 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct StrConcatIter_2212  temp2228 =  into_dash_iter2215 ( ( (  chars2221 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_304  __cond2229 =  next2216 (&temp2228);
        if (  __cond2229 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond2229 .stuff .Maybe_304_Just_s .field0;
        ( (  put_dash_char1944 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1111 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2230 {
    struct StrConcat_2209  field0;
    struct StrView_27  field1;
};

static struct StrConcat_2230 StrConcat_2230_StrConcat (  struct StrConcat_2209  field0 ,  struct StrView_27  field1 ) {
    return ( struct StrConcat_2230 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2232 {
    struct StrConcatIter_2213  f_left;
    struct StrViewIter_62  f_right;
};

static  struct StrConcatIter_2232   into_dash_iter2234 (    struct StrConcatIter_2232  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_304   next2235 (    struct StrConcatIter_2232 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2217 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2233 (    struct StrConcatIter_2232  iterable1094 ,    size_t  base1096 ,    size_t (*  fun1098 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1099 = (  base1096 );
    struct StrConcatIter_2232  it1100 = ( (  into_dash_iter2234 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_304  dref1101 = ( (  next2235 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_304_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_304_Just_t ) {
                x1099 = ( (  fun1098 ) ( ( dref1101 .stuff .Maybe_304_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2236 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2236);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2237;
    return (  temp2237 );
}

static  size_t   lam2238 (    struct Char_65  dref1106 ,    size_t  x1108 ) {
    return (  op_dash_add318 ( (  x1108 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2231 (    struct StrConcatIter_2232  it1105 ) {
    return ( (  reduce2233 ) ( (  it1105 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2238 ) ) );
}

static  struct StrConcatIter_2232   into_dash_iter2240 (    struct StrConcat_2230  dref1505 ) {
    return ( (struct StrConcatIter_2232) { .f_left = ( (  chars2223 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars700 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2232   chars2239 (    struct StrConcat_2230  self1516 ) {
    return ( (  into_dash_iter2240 ) ( (  self1516 ) ) );
}

static  enum Unit_8   draw_dash_str2241 (    struct Screen_283 *  screen3584 ,    struct StrConcat_2230  s3586 ,    int32_t  x3588 ,    int32_t  y3590 ) {
    int32_t  w3591 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp166 ( (  y3590 ) , (  from_dash_integral67 ( 0 ) ) ) == 0 ) || (  cmp166 ( (  y3590 ) , ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3584 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3592 = (  op_dash_add168 ( (  op_dash_mul1540 ( (  y3590 ) , (  w3591 ) ) ) , (  x3588 ) ) );
    int32_t  x3593 = ( (  min635 ) ( (  x3588 ) ,  (  w3591 ) ) );
    size_t  max_dash_len3594 = ( (  i32_dash_size419 ) ( (  op_dash_sub173 ( (  w3591 ) , (  x3593 ) ) ) ) );
    int32_t  xx3595 = (  from_dash_integral67 ( 0 ) );
    struct StrConcatIter_2232  temp2242 =  into_dash_iter2234 ( ( (  chars2239 ) ( (  s3586 ) ) ) );
    while (true) {
        struct Maybe_304  __cond2243 =  next2235 (&temp2242);
        if (  __cond2243 .tag == 0 ) {
            break;
        }
        struct Char_65  c3597 =  __cond2243 .stuff .Maybe_304_Just_s .field0;
        ( (  put_dash_char1944 ) ( (  screen3584 ) ,  (  c3597 ) ,  (  op_dash_add168 ( (  x3593 ) , (  xx3595 ) ) ) ,  (  y3590 ) ) );
        xx3595 = (  op_dash_add168 ( (  xx3595 ) , ( (  rendered_dash_wcwidth1111 ) ( (  c3597 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1902 (   struct env281* env ,    struct Screen_283 *  screen4514 ,    struct Editor_256 *  ed4516 ) {
    struct ScreenDims_286  screen_dash_dims4517 = ( (struct ScreenDims_286) { .f_from_dash_sx = (  from_dash_integral67 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub173 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen4514 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral67 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub173 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen4514 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral67 ( 1 ) ) ) ) } );
    struct envunion282  temp1903 = ( (struct envunion282){ .fun = (  enum Unit_8  (*) (  struct env209*  ,    struct Screen_283 *  ,    struct Pane_227 *  ,    struct ScreenDims_286  ,    struct Theme_181 *  ) )render1904 , .env =  env->envinst209 } );
    ( temp1903.fun ( &temp1903.env ,  (  screen4514 ) ,  ( (  pane1136 ) ( (  ed4516 ) ) ) ,  (  screen_dash_dims4517 ) ,  ( ( * (  ed4516 ) ) .f_theme ) ) );
    struct env2204 envinst2204 = {
        .screen4514 =  screen4514 ,
    };
    ( (  if_dash_just2203 ) ( ( ( * (  ed4516 ) ) .f_msg ) ,  ( (struct envunion2205){ .fun = (  enum Unit_8  (*) (  struct env2204*  ,    struct StrView_27  ) )lam2207 , .env =  envinst2204 } ) ) );
    struct EditorMode_257  dref4521 = ( ( * (  ed4516 ) ) .f_mode );
    if ( dref4521.tag == EditorMode_257_Normal_t ) {
    }
    else {
        if ( dref4521.tag == EditorMode_257_Cmd_t ) {
            int32_t  num_dash_chars4523 = ( (  size_dash_i32336 ) ( ( (  count1106 ) ( ( (  chars1715 ) ( ( dref4521 .stuff .EditorMode_257_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_27  pad4524 = ( (  eq525 ( ( (  mod1538 ) ( (  num_dash_chars4523 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) , (  from_dash_integral67 ( 0 ) ) ) ) ? ( (  from_dash_string207 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1230 ) ( ( " " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4525 = (  op_dash_add168 ( (  num_dash_chars4523 ) , ( (  mod1538 ) ( (  num_dash_chars4523 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) ) );
            struct StrConcat_2208  full_dash_str4526 = ( ( StrConcat_2208_StrConcat ) ( ( ( StrConcat_2209_StrConcat ) ( ( ( StrConcat_2210_StrConcat ) ( ( (  from_dash_string207 ) ( ( " \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4521 .stuff .EditorMode_257_Cmd_s .field1 ) ) ) ,  (  pad4524 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4527 = ( (  size_dash_i32336 ) ( ( (  count2211 ) ( ( (  chars2221 ) ( (  full_dash_str4526 ) ) ) ) ) ) );
            ( (  draw_dash_str2227 ) ( (  screen4514 ) ,  (  full_dash_str4526 ) ,  (  op_dash_div1539 ( (  op_dash_sub173 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen4514 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4527 ) ) ) , (  from_dash_integral67 ( 2 ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
        }
        else {
            if ( dref4521.tag == EditorMode_257_Search_t ) {
                int32_t  num_dash_chars4529 = ( (  size_dash_i32336 ) ( ( (  count1106 ) ( ( (  chars1715 ) ( ( dref4521 .stuff .EditorMode_257_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_27  pad4530 = ( (  eq525 ( ( (  mod1538 ) ( (  num_dash_chars4529 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) , (  from_dash_integral67 ( 0 ) ) ) ) ? ( (  from_dash_string207 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1230 ) ( ( " " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4531 = (  op_dash_add168 ( (  num_dash_chars4529 ) , ( (  mod1538 ) ( (  num_dash_chars4529 ) ,  (  from_dash_integral67 ( 2 ) ) ) ) ) );
                struct StrConcat_2230  full_dash_str4532 = ( ( StrConcat_2230_StrConcat ) ( ( ( StrConcat_2209_StrConcat ) ( ( ( StrConcat_2210_StrConcat ) ( ( (  from_dash_string207 ) ( ( " \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4521 .stuff .EditorMode_257_Search_s .field1 ) ) ) ,  (  pad4530 ) ) ) ,  ( (  from_dash_string207 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4533 = ( (  size_dash_i32336 ) ( ( (  count2231 ) ( ( (  chars2239 ) ( (  full_dash_str4532 ) ) ) ) ) ) );
                ( (  draw_dash_str2241 ) ( (  screen4514 ) ,  (  full_dash_str4532 ) ,  (  op_dash_div1539 ( (  op_dash_sub173 ( ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen4514 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4533 ) ) ) , (  from_dash_integral67 ( 2 ) ) ) ) ,  (  from_dash_integral67 ( 1 ) ) ) );
            }
        }
    }
    int32_t  temp2244 = (  from_dash_integral67 ( 0 ) );
    int32_t *  curline4534 = ( &temp2244 );
    return ( Unit_8_Unit );
}

struct RenderState_2246 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_147  f_fg;
    struct Color_147  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2253 {
    struct StrView_27  field0;
    uint32_t  field1;
};

static struct StrConcat_2253 StrConcat_2253_StrConcat (  struct StrView_27  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2253 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2252 {
    struct StrConcat_2253  field0;
    struct Char_65  field1;
};

static struct StrConcat_2252 StrConcat_2252_StrConcat (  struct StrConcat_2253  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2252 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2251 {
    struct StrConcat_2252  field0;
    uint32_t  field1;
};

static struct StrConcat_2251 StrConcat_2251_StrConcat (  struct StrConcat_2252  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2251 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2250 {
    struct StrConcat_2251  field0;
    struct Char_65  field1;
};

static struct StrConcat_2250 StrConcat_2250_StrConcat (  struct StrConcat_2251  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2250 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2259 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2258 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_2259  f_right;
};

struct StrConcatIter_2257 {
    struct StrConcatIter_2258  f_left;
    struct AppendIter_63  f_right;
};

struct StrConcatIter_2256 {
    struct StrConcatIter_2257  f_left;
    struct IntStrIter_2259  f_right;
};

struct StrConcatIter_2255 {
    struct StrConcatIter_2256  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2255   into_dash_iter2261 (    struct StrConcatIter_2255  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_304   next2266 (    struct IntStrIter_2259 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_304_Just ) ( ( (  from_dash_charlike353 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    uint32_t  trim_dash_down1430 = ( (  pow157 ) ( (  from_dash_integral174 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    uint32_t  upper1431 = (  op_dash_div156 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    uint32_t  upper_dash_mask1432 = (  op_dash_mul176 ( (  op_dash_div156 ( (  upper1431 ) , (  from_dash_integral174 ( 10 ) ) ) ) , (  from_dash_integral174 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast154 ) ( (  op_dash_sub178 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81049 ) ( (  op_dash_add945 ( (  digit1433 ) , (  from_dash_integral315 ( 48 ) ) ) ) ) );
    return ( ( Maybe_304_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_304   next2265 (    struct StrConcatIter_2258 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next2266 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next2264 (    struct StrConcatIter_2257 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2265 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next2263 (    struct StrConcatIter_2256 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2264 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next2266 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next2262 (    struct StrConcatIter_2255 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2263 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2254 (    struct StrConcatIter_2255  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2255  temp2260 = ( (  into_dash_iter2261 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2255 *  it1078 = ( &temp2260 );
    while ( ( true ) ) {
        struct Maybe_304  dref1079 = ( (  next2262 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_304_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_304_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_304_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2277 (    uint32_t  self1437 ) {
    if ( (  eq586 ( (  self1437 ) , (  from_dash_integral174 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp179 ( (  self1437 ) , (  from_dash_integral174 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div156 ( (  self1437 ) , (  from_dash_integral174 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_2259   uint_dash_iter2276 (    uint32_t  int1444 ) {
    return ( (struct IntStrIter_2259) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits2277 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2259   chars2275 (    uint32_t  self1456 ) {
    return ( (  uint_dash_iter2276 ) ( (  self1456 ) ) );
}

static  struct StrConcatIter_2258   into_dash_iter2274 (    struct StrConcat_2253  dref1505 ) {
    return ( (struct StrConcatIter_2258) { .f_left = ( (  chars700 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2275 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2258   chars2273 (    struct StrConcat_2253  self1516 ) {
    return ( (  into_dash_iter2274 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2257   into_dash_iter2272 (    struct StrConcat_2252  dref1505 ) {
    return ( (struct StrConcatIter_2257) { .f_left = ( (  chars2273 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2257   chars2271 (    struct StrConcat_2252  self1516 ) {
    return ( (  into_dash_iter2272 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2256   into_dash_iter2270 (    struct StrConcat_2251  dref1505 ) {
    return ( (struct StrConcatIter_2256) { .f_left = ( (  chars2271 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2275 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2256   chars2269 (    struct StrConcat_2251  self1516 ) {
    return ( (  into_dash_iter2270 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2255   into_dash_iter2268 (    struct StrConcat_2250  dref1505 ) {
    return ( (struct StrConcatIter_2255) { .f_left = ( (  chars2269 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2255   chars2267 (    struct StrConcat_2250  self1516 ) {
    return ( (  into_dash_iter2268 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2249 (    struct StrConcat_2250  s2593 ) {
    ( (  for_dash_each2254 ) ( ( (  chars2267 ) ( (  s2593 ) ) ) ,  (  printf_dash_char343 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2248 (    uint32_t  x2607 ,    uint32_t  y2609 ) {
    uint32_t  x2610 = (  op_dash_add180 ( (  x2607 ) , (  from_dash_integral174 ( 1 ) ) ) );
    uint32_t  y2611 = (  op_dash_add180 ( (  y2609 ) , (  from_dash_integral174 ( 1 ) ) ) );
    ( (  print2249 ) ( ( ( StrConcat_2250_StrConcat ) ( ( ( StrConcat_2251_StrConcat ) ( ( ( StrConcat_2252_StrConcat ) ( ( ( StrConcat_2253_StrConcat ) ( ( (  from_dash_string207 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2611 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2610 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_284   subslice2280 (    struct Slice_284  slice1784 ,    size_t  from1786 ,    size_t  to1788 ) {
    struct Cell_285 *  begin_dash_ptr1789 = ( (  offset_dash_ptr862 ) ( ( (  slice1784 ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  from1786 ) ) ) ) );
    if ( ( (  cmp297 ( (  from1786 ) , (  to1788 ) ) != 0 ) || (  cmp297 ( (  from1786 ) , ( (  slice1784 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_284) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1790 = (  op_dash_sub296 ( ( (  min506 ) ( (  to1788 ) ,  ( (  slice1784 ) .f_count ) ) ) , (  from1786 ) ) );
    return ( (struct Slice_284) { .f_ptr = (  begin_dash_ptr1789 ) , .f_count = (  count1790 ) } );
}

struct SliceIter_2283 {
    struct Slice_284  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2282 {
    struct SliceIter_2283  f_left_dash_it;
    struct SliceIter_2283  f_right_dash_it;
};

struct Tuple2_2284 {
    struct Cell_285  field0;
    struct Cell_285  field1;
};

static struct Tuple2_2284 Tuple2_2284_Tuple2 (  struct Cell_285  field0 ,  struct Cell_285  field1 ) {
    return ( struct Tuple2_2284 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2286 {
    bool (*  fun1136 )(    struct Tuple2_2284  );
};

struct envunion2287 {
    bool  (*fun) (  struct env2286*  ,    struct Tuple2_2284  ,    bool  );
    struct env2286 env;
};

static  struct Zip_2282   into_dash_iter2288 (    struct Zip_2282  self912 ) {
    return (  self912 );
}

struct Maybe_2289 {
    enum {
        Maybe_2289_None_t,
        Maybe_2289_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2284  field0;
        } Maybe_2289_Just_s;
    } stuff;
};

static struct Maybe_2289 Maybe_2289_Just (  struct Tuple2_2284  field0 ) {
    return ( struct Maybe_2289 ) { .tag = Maybe_2289_Just_t, .stuff = { .Maybe_2289_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_867   next2291 (    struct SliceIter_2283 *  self1830 ) {
    size_t  off1831 = ( ( * (  self1830 ) ) .f_current_dash_offset );
    if ( (  cmp297 ( (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1830 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_867) { .tag = Maybe_867_None_t } );
    }
    struct Cell_285  elem1832 = ( * ( (  offset_dash_ptr862 ) ( ( ( ( * (  self1830 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64309 ) ( (  off1831 ) ) ) ) ) );
    (*  self1830 ) .f_current_dash_offset = (  op_dash_add318 ( (  off1831 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_867_Just ) ( (  elem1832 ) ) );
}

static  struct Maybe_2289   next2290 (    struct Zip_2282 *  self915 ) {
    struct Zip_2282  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_867  dref917 = ( (  next2291 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_867_None_t ) {
            return ( (struct Maybe_2289) { .tag = Maybe_2289_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_867_Just_t ) {
                struct Maybe_867  dref919 = ( (  next2291 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_867_None_t ) {
                    return ( (struct Maybe_2289) { .tag = Maybe_2289_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_867_Just_t ) {
                        ( (  next2291 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2291 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2289_Just ) ( ( ( Tuple2_2284_Tuple2 ) ( ( dref917 .stuff .Maybe_867_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_867_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2285 (    struct Zip_2282  iterable1094 ,    bool  base1096 ,   struct envunion2287  fun1098 ) {
    bool  x1099 = (  base1096 );
    struct Zip_2282  it1100 = ( (  into_dash_iter2288 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_2289  dref1101 = ( (  next2290 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_2289_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_2289_Just_t ) {
                struct envunion2287  temp2292 = (  fun1098 );
                x1099 = ( temp2292.fun ( &temp2292.env ,  ( dref1101 .stuff .Maybe_2289_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2293 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2293);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2294;
    return (  temp2294 );
}

static  bool   lam2295 (   struct env2286* env ,    struct Tuple2_2284  e1138 ,    bool  x1140 ) {
    return ( ( ( env->fun1136 ) ( (  e1138 ) ) ) || (  x1140 ) );
}

static  bool   any2281 (    struct Zip_2282  it1134 ,    bool (*  fun1136 )(    struct Tuple2_2284  ) ) {
    struct env2286 envinst2286 = {
        .fun1136 =  fun1136 ,
    };
    return ( (  reduce2285 ) ( (  it1134 ) ,  ( false ) ,  ( (struct envunion2287){ .fun = (  bool  (*) (  struct env2286*  ,    struct Tuple2_2284  ,    bool  ) )lam2295 , .env =  envinst2286 } ) ) );
}

static  struct SliceIter_2283   into_dash_iter2297 (    struct Slice_284  self1824 ) {
    return ( (struct SliceIter_2283) { .f_slice = (  self1824 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2282   zip2296 (    struct Slice_284  left923 ,    struct Slice_284  right925 ) {
    struct SliceIter_2283  left_dash_it926 = ( (  into_dash_iter2297 ) ( (  left923 ) ) );
    struct SliceIter_2283  right_dash_it927 = ( (  into_dash_iter2297 ) ( (  right925 ) ) );
    return ( (struct Zip_2282) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

struct Tuple2_2301 {
    struct Color_147  field0;
    struct Color_147  field1;
};

static struct Tuple2_2301 Tuple2_2301_Tuple2 (  struct Color_147  field0 ,  struct Color_147  field1 ) {
    return ( struct Tuple2_2301 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_148 *   cast2305 (    int32_t *  x356 ) {
    return ( (enum Color8_148 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2303 (    enum Color8_148  x574 ) {
    int32_t  temp2304 = ( (  zeroed1014 ) ( ) );
    int32_t *  y575 = ( &temp2304 );
    enum Color8_148 *  yp576 = ( (  cast2305 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2302 (    enum Color8_148  l2635 ,    enum Color8_148  r2637 ) {
    return (  eq525 ( ( ( (  cast_dash_on_dash_zeroed2303 ) ( (  l2635 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2303 ) ( (  r2637 ) ) ) ) );
}

static  enum Color16_149 *   cast2309 (    int32_t *  x356 ) {
    return ( (enum Color16_149 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2307 (    enum Color16_149  x574 ) {
    int32_t  temp2308 = ( (  zeroed1014 ) ( ) );
    int32_t *  y575 = ( &temp2308 );
    enum Color16_149 *  yp576 = ( (  cast2309 ) ( (  y575 ) ) );
    (*  yp576 ) = (  x574 );
    return ( * (  y575 ) );
}

static  bool   eq2306 (    enum Color16_149  l2641 ,    enum Color16_149  r2643 ) {
    return (  eq525 ( ( ( (  cast_dash_on_dash_zeroed2307 ) ( (  l2641 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2307 ) ( (  r2643 ) ) ) ) );
}

static  bool   eq2310 (    struct RGB_150  l2671 ,    struct RGB_150  r2673 ) {
    return ( ( (  eq310 ( ( (  l2671 ) .f_r ) , ( (  r2673 ) .f_r ) ) ) && (  eq310 ( ( (  l2671 ) .f_g ) , ( (  r2673 ) .f_g ) ) ) ) && (  eq310 ( ( (  l2671 ) .f_b ) , ( (  r2673 ) .f_b ) ) ) );
}

static  bool   eq2300 (    struct Color_147  l2693 ,    struct Color_147  r2695 ) {
    return ( {  struct Tuple2_2301  dref2696 = ( ( Tuple2_2301_Tuple2 ) ( (  l2693 ) ,  (  r2695 ) ) ) ; dref2696 .field0.tag == Color_147_ColorDefault_t && dref2696 .field1.tag == Color_147_ColorDefault_t ? ( true ) : dref2696 .field0.tag == Color_147_Color8_t && dref2696 .field1.tag == Color_147_Color8_t ? (  eq2302 ( ( dref2696 .field0 .stuff .Color_147_Color8_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_Color8_s .field0 ) ) ) : dref2696 .field0.tag == Color_147_Color16_t && dref2696 .field1.tag == Color_147_Color16_t ? (  eq2306 ( ( dref2696 .field0 .stuff .Color_147_Color16_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_Color16_s .field0 ) ) ) : dref2696 .field0.tag == Color_147_Color256_t && dref2696 .field1.tag == Color_147_Color256_t ? (  eq310 ( ( dref2696 .field0 .stuff .Color_147_Color256_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_Color256_s .field0 ) ) ) : dref2696 .field0.tag == Color_147_ColorRGB_t && dref2696 .field1.tag == Color_147_ColorRGB_t ? (  eq2310 ( ( dref2696 .field0 .stuff .Color_147_ColorRGB_s .field0 ) , ( dref2696 .field1 .stuff .Color_147_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2299 (    struct Cell_285  l3457 ,    struct Cell_285  r3459 ) {
    if ( ( !  eq582 ( ( (  l3457 ) .f_c ) , ( (  r3459 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2300 ( ( (  l3457 ) .f_fg ) , ( (  r3459 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2300 ( ( (  l3457 ) .f_bg ) , ( (  r3459 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2298 (    struct Tuple2_2284  dref3513 ) {
    return ( !  eq2299 ( ( dref3513 .field0 ) , ( dref3513 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2313 (  ) {
    ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82314 (    enum Color8_148  color2646 ) {
    enum Color8_148  dref2647 = (  color2646 );
    switch (  dref2647 ) {
        case Color8_148_Black8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Red8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Green8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Yellow8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Blue8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Magenta8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Cyan8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_White8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162315 (    enum Color16_149  color2650 ) {
    enum Color16_149  dref2651 = (  color2650 );
    switch (  dref2651 ) {
        case Color16_149_Black16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Red16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Green16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Yellow16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Blue16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Magenta16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Cyan16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_White16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlack16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightRed16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightGreen16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightYellow16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlue16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightMagenta16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightCyan16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightWhite16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2319 {
    struct StrView_27  field0;
    uint8_t  field1;
};

static struct StrConcat_2319 StrConcat_2319_StrConcat (  struct StrView_27  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2319 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2318 {
    struct StrConcat_2319  field0;
    struct Char_65  field1;
};

static struct StrConcat_2318 StrConcat_2318_StrConcat (  struct StrConcat_2319  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2318 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2323 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2322 {
    struct StrViewIter_62  f_left;
    struct IntStrIter_2323  f_right;
};

struct StrConcatIter_2321 {
    struct StrConcatIter_2322  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2321   into_dash_iter2325 (    struct StrConcatIter_2321  self1498 ) {
    return (  self1498 );
}

struct env2331 {
    uint8_t  base1211;
    ;
};

struct envunion2332 {
    uint8_t  (*fun) (  struct env2331*  ,    int32_t  ,    uint8_t  );
    struct env2331 env;
};

static  uint8_t   reduce2330 (    struct Range_159  iterable1094 ,    uint8_t  base1096 ,   struct envunion2332  fun1098 ) {
    uint8_t  x1099 = (  base1096 );
    struct RangeIter_162  it1100 = ( (  into_dash_iter163 ) ( (  iterable1094 ) ) );
    while ( ( true ) ) {
        struct Maybe_164  dref1101 = ( (  next165 ) ( ( & (  it1100 ) ) ) );
        if ( dref1101.tag == Maybe_164_None_t ) {
            return (  x1099 );
        }
        else {
            if ( dref1101.tag == Maybe_164_Just_t ) {
                struct envunion2332  temp2333 = (  fun1098 );
                x1099 = ( temp2333.fun ( &temp2333.env ,  ( dref1101 .stuff .Maybe_164_Just_s .field0 ) ,  (  x1099 ) ) );
            }
        }
    }
    const char*  temp2334 = ( (  from_dash_string68 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2334);
    exit ( 1 );
    ( Unit_8_Unit );
    uint8_t  temp2335;
    return (  temp2335 );
}

static  uint8_t   op_dash_mul2337 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2336 (   struct env2331* env ,    int32_t  item1215 ,    uint8_t  x1217 ) {
    return (  op_dash_mul2337 ( (  x1217 ) , ( env->base1211 ) ) );
}

static  uint8_t   pow2329 (    uint8_t  base1211 ,    int32_t  p1213 ) {
    struct env2331 envinst2331 = {
        .base1211 =  base1211 ,
    };
    return ( (  reduce2330 ) ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  p1213 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral315 ( 1 ) ) ,  ( (struct envunion2332){ .fun = (  uint8_t  (*) (  struct env2331*  ,    int32_t  ,    uint8_t  ) )lam2336 , .env =  envinst2331 } ) ) );
}

static  uint8_t   op_dash_div2338 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2339 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_304   next2328 (    struct IntStrIter_2323 *  self1429 ) {
    if ( ( ( * (  self1429 ) ) .f_negative ) ) {
        (*  self1429 ) .f_negative = ( false );
        return ( ( Maybe_304_Just ) ( ( (  from_dash_charlike353 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp166 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_304) { .tag = Maybe_304_None_t } );
    }
    uint8_t  trim_dash_down1430 = ( (  pow2329 ) ( (  from_dash_integral315 ( 10 ) ) ,  (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) ) ) );
    uint8_t  upper1431 = (  op_dash_div2338 ( ( ( * (  self1429 ) ) .f_int ) , (  trim_dash_down1430 ) ) );
    uint8_t  upper_dash_mask1432 = (  op_dash_mul2337 ( (  op_dash_div2338 ( (  upper1431 ) , (  from_dash_integral315 ( 10 ) ) ) ) , (  from_dash_integral315 ( 10 ) ) ) );
    uint8_t  digit1433 = ( ( (  cast2339 ) ( (  op_dash_sub944 ( (  upper1431 ) , (  upper_dash_mask1432 ) ) ) ) ) );
    (*  self1429 ) .f_len = (  op_dash_sub173 ( ( ( * (  self1429 ) ) .f_len ) , (  from_dash_integral67 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1434 = ( (  from_dash_u81049 ) ( (  op_dash_add945 ( (  digit1433 ) , (  from_dash_integral315 ( 48 ) ) ) ) ) );
    return ( ( Maybe_304_Just ) ( (  digit_dash_char1434 ) ) );
}

static  struct Maybe_304   next2327 (    struct StrConcatIter_2322 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next688 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next2328 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next2326 (    struct StrConcatIter_2321 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2327 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2320 (    struct StrConcatIter_2321  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2321  temp2324 = ( (  into_dash_iter2325 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2321 *  it1078 = ( &temp2324 );
    while ( ( true ) ) {
        struct Maybe_304  dref1079 = ( (  next2326 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_304_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_304_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_304_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2346 (    uint8_t  self1437 ) {
    if ( (  eq310 ( (  self1437 ) , (  from_dash_integral315 ( 0 ) ) ) ) ) {
        return (  from_dash_integral67 ( 1 ) );
    }
    int32_t  digits1438 = (  from_dash_integral67 ( 0 ) );
    while ( (  cmp314 ( (  self1437 ) , (  from_dash_integral315 ( 0 ) ) ) == 2 ) ) {
        self1437 = (  op_dash_div2338 ( (  self1437 ) , (  from_dash_integral315 ( 10 ) ) ) );
        digits1438 = (  op_dash_add168 ( (  digits1438 ) , (  from_dash_integral67 ( 1 ) ) ) );
    }
    return (  digits1438 );
}

static  struct IntStrIter_2323   uint_dash_iter2345 (    uint8_t  int1444 ) {
    return ( (struct IntStrIter_2323) { .f_int = (  int1444 ) , .f_len = ( (  count_dash_digits2346 ) ( (  int1444 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2323   chars2344 (    uint8_t  self1462 ) {
    return ( (  uint_dash_iter2345 ) ( (  self1462 ) ) );
}

static  struct StrConcatIter_2322   into_dash_iter2343 (    struct StrConcat_2319  dref1505 ) {
    return ( (struct StrConcatIter_2322) { .f_left = ( (  chars700 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2344 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2322   chars2342 (    struct StrConcat_2319  self1516 ) {
    return ( (  into_dash_iter2343 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2321   into_dash_iter2341 (    struct StrConcat_2318  dref1505 ) {
    return ( (struct StrConcatIter_2321) { .f_left = ( (  chars2342 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2321   chars2340 (    struct StrConcat_2318  self1516 ) {
    return ( (  into_dash_iter2341 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2317 (    struct StrConcat_2318  s2593 ) {
    ( (  for_dash_each2320 ) ( ( (  chars2340 ) ( (  s2593 ) ) ) ,  (  printf_dash_char343 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562316 (    uint8_t  color2664 ) {
    ( (  print2317 ) ( ( ( StrConcat_2318_StrConcat ) ( ( ( StrConcat_2319_StrConcat ) ( ( (  from_dash_string207 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2664 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2352 {
    struct StrConcat_2318  field0;
    uint8_t  field1;
};

static struct StrConcat_2352 StrConcat_2352_StrConcat (  struct StrConcat_2318  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2352 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2351 {
    struct StrConcat_2352  field0;
    struct Char_65  field1;
};

static struct StrConcat_2351 StrConcat_2351_StrConcat (  struct StrConcat_2352  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2351 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2350 {
    struct StrConcat_2351  field0;
    uint8_t  field1;
};

static struct StrConcat_2350 StrConcat_2350_StrConcat (  struct StrConcat_2351  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2350 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2349 {
    struct StrConcat_2350  field0;
    struct Char_65  field1;
};

static struct StrConcat_2349 StrConcat_2349_StrConcat (  struct StrConcat_2350  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2349 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2357 {
    struct StrConcatIter_2321  f_left;
    struct IntStrIter_2323  f_right;
};

struct StrConcatIter_2356 {
    struct StrConcatIter_2357  f_left;
    struct AppendIter_63  f_right;
};

struct StrConcatIter_2355 {
    struct StrConcatIter_2356  f_left;
    struct IntStrIter_2323  f_right;
};

struct StrConcatIter_2354 {
    struct StrConcatIter_2355  f_left;
    struct AppendIter_63  f_right;
};

static  struct StrConcatIter_2354   into_dash_iter2359 (    struct StrConcatIter_2354  self1498 ) {
    return (  self1498 );
}

static  struct Maybe_304   next2363 (    struct StrConcatIter_2357 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2326 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next2328 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next2362 (    struct StrConcatIter_2356 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2363 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next2361 (    struct StrConcatIter_2355 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2362 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next2328 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_304   next2360 (    struct StrConcatIter_2354 *  self1501 ) {
    struct Maybe_304  dref1502 = ( (  next2361 ) ( ( & ( ( * (  self1501 ) ) .f_left ) ) ) );
    if ( dref1502.tag == Maybe_304_Just_t ) {
        return ( ( Maybe_304_Just ) ( ( dref1502 .stuff .Maybe_304_Just_s .field0 ) ) );
    }
    else {
        if ( dref1502.tag == Maybe_304_None_t ) {
            return ( (  next689 ) ( ( & ( ( * (  self1501 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2353 (    struct StrConcatIter_2354  iterable1075 ,    enum Unit_8 (*  fun1077 )(    struct Char_65  ) ) {
    struct StrConcatIter_2354  temp2358 = ( (  into_dash_iter2359 ) ( (  iterable1075 ) ) );
    struct StrConcatIter_2354 *  it1078 = ( &temp2358 );
    while ( ( true ) ) {
        struct Maybe_304  dref1079 = ( (  next2360 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_304_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_304_Just_t ) {
                ( (  fun1077 ) ( ( dref1079 .stuff .Maybe_304_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2357   into_dash_iter2371 (    struct StrConcat_2352  dref1505 ) {
    return ( (struct StrConcatIter_2357) { .f_left = ( (  chars2340 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2344 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2357   chars2370 (    struct StrConcat_2352  self1516 ) {
    return ( (  into_dash_iter2371 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2356   into_dash_iter2369 (    struct StrConcat_2351  dref1505 ) {
    return ( (struct StrConcatIter_2356) { .f_left = ( (  chars2370 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2356   chars2368 (    struct StrConcat_2351  self1516 ) {
    return ( (  into_dash_iter2369 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2355   into_dash_iter2367 (    struct StrConcat_2350  dref1505 ) {
    return ( (struct StrConcatIter_2355) { .f_left = ( (  chars2368 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars2344 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2355   chars2366 (    struct StrConcat_2350  self1516 ) {
    return ( (  into_dash_iter2367 ) ( (  self1516 ) ) );
}

static  struct StrConcatIter_2354   into_dash_iter2365 (    struct StrConcat_2349  dref1505 ) {
    return ( (struct StrConcatIter_2354) { .f_left = ( (  chars2366 ) ( ( dref1505 .field0 ) ) ) , .f_right = ( (  chars702 ) ( ( dref1505 .field1 ) ) ) } );
}

static  struct StrConcatIter_2354   chars2364 (    struct StrConcat_2349  self1516 ) {
    return ( (  into_dash_iter2365 ) ( (  self1516 ) ) );
}

static  enum Unit_8   print2348 (    struct StrConcat_2349  s2593 ) {
    ( (  for_dash_each2353 ) ( ( (  chars2364 ) ( (  s2593 ) ) ) ,  (  printf_dash_char343 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2347 (    struct RGB_150  c2686 ) {
    ( (  print2348 ) ( ( ( StrConcat_2349_StrConcat ) ( ( ( StrConcat_2350_StrConcat ) ( ( ( StrConcat_2351_StrConcat ) ( ( ( StrConcat_2352_StrConcat ) ( ( ( StrConcat_2318_StrConcat ) ( ( ( StrConcat_2319_StrConcat ) ( ( (  from_dash_string207 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2686 ) .f_r ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2686 ) .f_g ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2686 ) .f_b ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2312 (    struct Color_147  c2707 ) {
    struct Color_147  dref2708 = (  c2707 );
    if ( dref2708.tag == Color_147_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2313 ) ( ) );
    }
    else {
        if ( dref2708.tag == Color_147_Color8_t ) {
            ( (  set_dash_fg82314 ) ( ( dref2708 .stuff .Color_147_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2708.tag == Color_147_Color16_t ) {
                ( (  set_dash_fg162315 ) ( ( dref2708 .stuff .Color_147_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2708.tag == Color_147_Color256_t ) {
                    ( (  set_dash_fg2562316 ) ( ( dref2708 .stuff .Color_147_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2708.tag == Color_147_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2347 ) ( ( dref2708 .stuff .Color_147_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2373 (  ) {
    ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82374 (    enum Color8_148  color2654 ) {
    enum Color8_148  dref2655 = (  color2654 );
    switch (  dref2655 ) {
        case Color8_148_Black8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Red8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Green8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Yellow8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Blue8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Magenta8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_Cyan8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_148_White8 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162375 (    enum Color16_149  color2658 ) {
    enum Color16_149  dref2659 = (  color2658 );
    switch (  dref2659 ) {
        case Color16_149_Black16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Red16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Green16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Yellow16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Blue16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Magenta16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_Cyan16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_White16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlack16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightRed16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightGreen16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightYellow16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightBlue16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightMagenta16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightCyan16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_149_BrightWhite16 : {
            ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562376 (    uint8_t  color2667 ) {
    ( (  print2317 ) ( ( ( StrConcat_2318_StrConcat ) ( ( ( StrConcat_2319_StrConcat ) ( ( (  from_dash_string207 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2667 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2377 (    struct RGB_150  c2689 ) {
    ( (  print2348 ) ( ( ( StrConcat_2349_StrConcat ) ( ( ( StrConcat_2350_StrConcat ) ( ( ( StrConcat_2351_StrConcat ) ( ( ( StrConcat_2352_StrConcat ) ( ( ( StrConcat_2318_StrConcat ) ( ( ( StrConcat_2319_StrConcat ) ( ( (  from_dash_string207 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2689 ) .f_r ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2689 ) .f_g ) ) ) ,  ( (  from_dash_charlike353 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2689 ) .f_b ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2372 (    struct Color_147  c2715 ) {
    struct Color_147  dref2716 = (  c2715 );
    if ( dref2716.tag == Color_147_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2373 ) ( ) );
    }
    else {
        if ( dref2716.tag == Color_147_Color8_t ) {
            ( (  set_dash_bg82374 ) ( ( dref2716 .stuff .Color_147_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2716.tag == Color_147_Color16_t ) {
                ( (  set_dash_bg162375 ) ( ( dref2716 .stuff .Color_147_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2716.tag == Color_147_Color256_t ) {
                    ( (  set_dash_bg2562376 ) ( ( dref2716 .stuff .Color_147_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2716.tag == Color_147_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2377 ) ( ( dref2716 .stuff .Color_147_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322378 (    int32_t  x604 ) {
    return ( (uint32_t ) (  x604 ) );
}

static  enum Unit_8   emit_dash_cell2311 (    struct RenderState_2246 *  rs3489 ,    struct Cell_285 *  c3491 ,    uint32_t  x3493 ,    uint32_t  y3495 ) {
    if ( ( ( !  eq586 ( (  x3493 ) , ( ( * (  rs3489 ) ) .f_x ) ) ) || ( !  eq586 ( (  y3495 ) , ( ( * (  rs3489 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2248 ) ( (  x3493 ) ,  (  y3495 ) ) );
        (*  rs3489 ) .f_x = (  x3493 );
        (*  rs3489 ) .f_y = (  y3495 );
    }
    struct Char_65  char3496 = ( ( * (  c3491 ) ) .f_c );
    struct Color_147  bg3497 = ( ( * (  c3491 ) ) .f_bg );
    if ( (  eq525 ( ( ( * (  c3491 ) ) .f_char_dash_width ) , (  op_dash_neg813 ( (  from_dash_integral67 ( 1 ) ) ) ) ) ) ) {
        char3496 = ( (  from_dash_charlike353 ) ( ( " " ) ,  ( 1 ) ) );
        bg3497 = ( ( Color_147_Color8 ) ( ( Color8_148_Red8 ) ) );
    }
    if ( ( !  eq2300 ( ( ( * (  rs3489 ) ) .f_fg ) , ( ( * (  c3491 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2312 ) ( ( ( * (  c3491 ) ) .f_fg ) ) );
        (*  rs3489 ) .f_fg = ( ( * (  c3491 ) ) .f_fg );
    }
    if ( ( !  eq2300 ( ( ( * (  rs3489 ) ) .f_bg ) , (  bg3497 ) ) ) ) {
        ( (  set_dash_bg2372 ) ( (  bg3497 ) ) );
        (*  rs3489 ) .f_bg = (  bg3497 );
    }
    ( (  print_dash_str342 ) ( (  char3496 ) ) );
    uint32_t  char_dash_width3498 = ( (  i32_dash_u322378 ) ( ( (  max1112 ) ( ( ( * (  c3491 ) ) .f_char_dash_width ) ,  (  from_dash_integral67 ( 1 ) ) ) ) ) );
    (*  rs3489 ) .f_x = (  op_dash_add180 ( ( ( * (  rs3489 ) ) .f_x ) , (  char_dash_width3498 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2381 {
    struct SliceIter_2283  f_left_dash_it;
    struct FromIter_423  f_right_dash_it;
};

struct env2382 {
    ;
    ;
    struct Slice_284  dest1855;
};

struct Tuple2_2384 {
    struct Cell_285  field0;
    int32_t  field1;
};

static struct Tuple2_2384 Tuple2_2384_Tuple2 (  struct Cell_285  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2384 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2383 {
    enum Unit_8  (*fun) (  struct env2382*  ,    struct Tuple2_2384  );
    struct env2382 env;
};

static  struct Zip_2381   into_dash_iter2386 (    struct Zip_2381  self912 ) {
    return (  self912 );
}

struct Maybe_2387 {
    enum {
        Maybe_2387_None_t,
        Maybe_2387_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2384  field0;
        } Maybe_2387_Just_s;
    } stuff;
};

static struct Maybe_2387 Maybe_2387_Just (  struct Tuple2_2384  field0 ) {
    return ( struct Maybe_2387 ) { .tag = Maybe_2387_Just_t, .stuff = { .Maybe_2387_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2387   next2388 (    struct Zip_2381 *  self915 ) {
    struct Zip_2381  copy916 = ( * (  self915 ) );
    while ( ( true ) ) {
        struct Maybe_867  dref917 = ( (  next2291 ) ( ( & ( (  copy916 ) .f_left_dash_it ) ) ) );
        if ( dref917.tag == Maybe_867_None_t ) {
            return ( (struct Maybe_2387) { .tag = Maybe_2387_None_t } );
        }
        else {
            if ( dref917.tag == Maybe_867_Just_t ) {
                struct Maybe_164  dref919 = ( (  next429 ) ( ( & ( (  copy916 ) .f_right_dash_it ) ) ) );
                if ( dref919.tag == Maybe_164_None_t ) {
                    return ( (struct Maybe_2387) { .tag = Maybe_2387_None_t } );
                }
                else {
                    if ( dref919.tag == Maybe_164_Just_t ) {
                        ( (  next2291 ) ( ( & ( ( * (  self915 ) ) .f_left_dash_it ) ) ) );
                        ( (  next429 ) ( ( & ( ( * (  self915 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2387_Just ) ( ( ( Tuple2_2384_Tuple2 ) ( ( dref917 .stuff .Maybe_867_Just_s .field0 ) ,  ( dref919 .stuff .Maybe_164_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2380 (    struct Zip_2381  iterable1075 ,   struct envunion2383  fun1077 ) {
    struct Zip_2381  temp2385 = ( (  into_dash_iter2386 ) ( (  iterable1075 ) ) );
    struct Zip_2381 *  it1078 = ( &temp2385 );
    while ( ( true ) ) {
        struct Maybe_2387  dref1079 = ( (  next2388 ) ( (  it1078 ) ) );
        if ( dref1079.tag == Maybe_2387_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1079.tag == Maybe_2387_Just_t ) {
                struct envunion2383  temp2389 = (  fun1077 );
                ( temp2389.fun ( &temp2389.env ,  ( dref1079 .stuff .Maybe_2387_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2381   zip2390 (    struct Slice_284  left923 ,    struct FromIter_423  right925 ) {
    struct SliceIter_2283  left_dash_it926 = ( (  into_dash_iter2297 ) ( (  left923 ) ) );
    struct FromIter_423  right_dash_it927 = ( (  into_dash_iter433 ) ( (  right925 ) ) );
    return ( (struct Zip_2381) { .f_left_dash_it = (  left_dash_it926 ) , .f_right_dash_it = (  right_dash_it927 ) } );
}

static  enum Unit_8   lam2391 (   struct env2382* env ,    struct Tuple2_2384  dref1856 ) {
    return ( (  set860 ) ( ( env->dest1855 ) ,  ( (  i32_dash_size419 ) ( ( dref1856 .field1 ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2379 (    struct Slice_284  src1853 ,    struct Slice_284  dest1855 ) {
    if ( (  cmp297 ( ( (  src1853 ) .f_count ) , ( (  dest1855 ) .f_count ) ) == 2 ) ) {
        ( (  panic468 ) ( ( ( StrConcat_469_StrConcat ) ( ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( ( StrConcat_87_StrConcat ) ( ( (  from_dash_string207 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1853 ) .f_count ) ) ) ,  ( (  from_dash_string207 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1855 ) .f_count ) ) ) ,  ( (  from_dash_string207 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2382 envinst2382 = {
        .dest1855 =  dest1855 ,
    };
    ( (  for_dash_each2380 ) ( ( (  zip2390 ) ( (  src1853 ) ,  ( (  from434 ) ( (  from_dash_integral67 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2383){ .fun = (  enum Unit_8  (*) (  struct env2382*  ,    struct Tuple2_2384  ) )lam2391 , .env =  envinst2382 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2245 (    struct Screen_283 *  screen3501 ) {
    int32_t  w3502 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3503 = ( (  u32_dash_i321890 ) ( ( ( * ( ( * (  screen3501 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2246  temp2247 = ( (struct RenderState_2246) { .f_x = (  from_dash_integral174 ( 0 ) ) , .f_y = (  from_dash_integral174 ( 0 ) ) , .f_fg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_bg = ( (struct Color_147) { .tag = Color_147_ColorDefault_t } ) , .f_changes = (  from_dash_integral174 ( 0 ) ) } );
    struct RenderState_2246 *  rs3504 = ( &temp2247 );
    ( (  move_dash_cursor_dash_to2248 ) ( (  from_dash_integral174 ( 0 ) ) ,  (  from_dash_integral174 ( 0 ) ) ) );
    struct RangeIter_162  temp2278 =  into_dash_iter163 ( ( (  to172 ) ( (  from_dash_integral67 ( 0 ) ) ,  (  op_dash_sub173 ( (  h3503 ) , (  from_dash_integral67 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_164  __cond2279 =  next165 (&temp2278);
        if (  __cond2279 .tag == 0 ) {
            break;
        }
        int32_t  y3506 =  __cond2279 .stuff .Maybe_164_Just_s .field0;
        int32_t  x_dash_v3507 = (  from_dash_integral67 ( 0 ) );
        while ( (  cmp166 ( (  x_dash_v3507 ) , (  w3502 ) ) == 0 ) ) {
            size_t  i3508 = ( (  i32_dash_size419 ) ( (  op_dash_add168 ( (  op_dash_mul1540 ( (  y3506 ) , (  w3502 ) ) ) , (  x_dash_v3507 ) ) ) ) );
            struct Cell_285 *  cur3509 = ( (  get_dash_ptr861 ) ( ( ( * (  screen3501 ) ) .f_current ) ,  (  i3508 ) ) );
            int32_t  char_dash_width3510 = ( (  max1112 ) ( ( ( * (  cur3509 ) ) .f_char_dash_width ) ,  (  from_dash_integral67 ( 1 ) ) ) );
            struct Slice_284  curs3511 = ( (  subslice2280 ) ( ( ( * (  screen3501 ) ) .f_current ) ,  (  i3508 ) ,  (  op_dash_add318 ( (  i3508 ) , ( (  i32_dash_size419 ) ( (  char_dash_width3510 ) ) ) ) ) ) );
            struct Slice_284  prevs3512 = ( (  subslice2280 ) ( ( ( * (  screen3501 ) ) .f_previous ) ,  (  i3508 ) ,  (  op_dash_add318 ( (  i3508 ) , ( (  i32_dash_size419 ) ( (  char_dash_width3510 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3501 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2281 ) ( ( (  zip2296 ) ( (  curs3511 ) ,  (  prevs3512 ) ) ) ,  (  lam2298 ) ) ) ) ) {
                (*  rs3504 ) .f_changes = (  op_dash_add180 ( ( ( * (  rs3504 ) ) .f_changes ) , (  from_dash_integral174 ( 1 ) ) ) );
                ( (  emit_dash_cell2311 ) ( (  rs3504 ) ,  (  cur3509 ) ,  ( (  i32_dash_u322378 ) ( (  x_dash_v3507 ) ) ) ,  ( (  i32_dash_u322378 ) ( (  y3506 ) ) ) ) );
                ( (  copy_dash_to2379 ) ( (  curs3511 ) ,  (  prevs3512 ) ) );
            }
            x_dash_v3507 = (  op_dash_add168 ( (  x_dash_v3507 ) , (  char_dash_width3510 ) ) );
        }
    }
    (*  screen3501 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors787 ) ( ) );
    ( (  flush_dash_stdout790 ) ( ) );
    return ( ( * (  rs3504 ) ) .f_changes );
}

static  void *   cast_dash_ptr2398 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2399 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2396 (  ) {
    struct timespec *  temp2397;
    struct timespec *  x571 = (  temp2397 );
    ( ( memset ) ( ( (  cast_dash_ptr2398 ) ( ( & (  x571 ) ) ) ) ,  (  from_dash_integral67 ( 0 ) ) ,  ( (  size_dash_of2399 ) ( (  x571 ) ) ) ) );
    return (  x571 );
}

static  struct timespec *   null_dash_ptr2395 (  ) {
    return ( (  zeroed2396 ) ( ) );
}

static  enum Unit_8   sync2392 (    struct Tui_100 *  tui3372 ) {
    if ( (  eq586 ( ( ( * (  tui3372 ) ) .f_target_dash_fps ) , (  from_dash_integral174 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3373 = (  op_dash_div1046 ( (  from_dash_integral295 ( 1000000000 ) ) , ( (  size_dash_i64309 ) ( ( (  u32_dash_size845 ) ( ( ( * (  tui3372 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2393 = ( (  undefined826 ) ( ) );
    struct timespec *  now3374 = ( &temp2393 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic828 ) ( ) ) ,  (  now3374 ) ) );
    int64_t  elapsed_dash_ns3375 = (  op_dash_add584 ( (  op_dash_mul293 ( (  op_dash_sub1048 ( ( ( * (  now3374 ) ) .tv_sec ) , ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral295 ( 1000000000 ) ) ) ) , (  op_dash_sub1048 ( ( ( * (  now3374 ) ) .tv_nsec ) , ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3376 = (  op_dash_sub1048 ( (  frame_dash_ns3373 ) , (  elapsed_dash_ns3375 ) ) );
    if ( (  cmp1064 ( (  sleep_dash_ns3376 ) , (  from_dash_integral295 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2394 = ( (struct timespec) { .tv_sec = (  from_dash_integral295 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3376 ) } );
        struct timespec *  ts3377 = ( &temp2394 );
        ( ( nanosleep ) ( (  ts3377 ) ,  ( (  null_dash_ptr2395 ) ( ) ) ) );
    }
    struct timespec  temp2400 = ( (  undefined826 ) ( ) );
    struct timespec *  last_dash_sync3378 = ( &temp2400 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic828 ) ( ) ) ,  (  last_dash_sync3378 ) ) );
    (*  tui3372 ) .f_last_dash_sync = ( * (  last_dash_sync3378 ) );
    (*  tui3372 ) .f_fps_dash_count = (  op_dash_add180 ( ( ( * (  tui3372 ) ) .f_fps_dash_count ) , (  from_dash_integral174 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3379 = (  op_dash_add584 ( (  op_dash_mul293 ( (  op_dash_sub1048 ( ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3372 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral295 ( 1000 ) ) ) ) , (  op_dash_div1046 ( (  op_dash_sub1048 ( ( ( ( * (  tui3372 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3372 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral295 ( 1000000 ) ) ) ) ) );
    if ( (  cmp1064 ( (  fps_dash_elapsed_dash_ms3379 ) , (  from_dash_integral295 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3372 ) .f_actual_dash_fps = ( ( * (  tui3372 ) ) .f_fps_dash_count );
        (*  tui3372 ) .f_fps_dash_count = (  from_dash_integral174 ( 0 ) );
        (*  tui3372 ) .f_fps_dash_ts = ( ( * (  tui3372 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2403 (    struct Cell_285 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2402 (    enum CAllocator_10  dref1961 ,    struct Slice_284  slice1963 ) {
    if (!(  dref1961 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2403 ) ( ( (  slice1963 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2401 (    struct Screen_283 *  screen3477 ) {
    enum CAllocator_10  al3478 = ( ( * (  screen3477 ) ) .f_al );
    ( (  free2402 ) ( (  al3478 ) ,  ( ( * (  screen3477 ) ) .f_current ) ) );
    ( (  free2402 ) ( (  al3478 ) ,  ( ( * (  screen3477 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2405 (  ) {
    ( (  print_dash_str335 ) ( ( (  from_dash_string207 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2406 (  ) {
    ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2407 (  ) {
    ( (  print783 ) ( ( (  from_dash_string207 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2408 (    struct Termios_102 *  og_dash_termios3352 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno721 ) ( ) ) ,  ( (  tcsa_dash_flush781 ) ( ) ) ,  ( (  cast_dash_ptr722 ) ( (  og_dash_termios3352 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2404 (    struct Tui_100 *  tui3382 ) {
    ( (  disable_dash_mouse2405 ) ( ) );
    ( (  show_dash_cursor2406 ) ( ) );
    ( (  reset_dash_colors787 ) ( ) );
    ( (  clear_dash_screen788 ) ( ) );
    ( (  reset_dash_cursor_dash_position2407 ) ( ) );
    ( (  disable_dash_raw_dash_mode2408 ) ( ( & ( ( * (  tui3382 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout790 ) ( ) );
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
        .envinst78 = envinst78 ,
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
        .envinst77 = envinst77 ,
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
    struct Theme_181 *  default3990 = (  goblin_dash_ultra3988 );
    struct Array_203  temp205 = ( (  from_dash_listlike206 ) ( ( (struct Array_203) { ._arr = { ( ( Tuple2_201_Tuple2 ) ( ( (  from_dash_string207 ) ( ( "default" ) ,  ( 7 ) ) ) ,  (  default3990 ) ) ) , ( ( Tuple2_201_Tuple2 ) ( ( (  from_dash_string207 ) ( ( "goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra3988 ) ) ) , ( ( Tuple2_201_Tuple2 ) ( ( (  from_dash_string207 ) ( ( "dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme3989 ) ) ) } } ) ) );
    struct Slice_200  all_dash_themes3991 = ( (  as_dash_slice202 ) ( ( &temp205 ) ) );
    struct env208 envinst208 = {
        .all_dash_themes3991 =  all_dash_themes3991 ,
    };
    struct env209 envinst209 = {
        .envinst145 = envinst145 ,
    };
    struct env212 envinst212 = {
        .envinst136 = envinst136 ,
    };
    struct env215 envinst215 = {
        .envinst136 = envinst136 ,
    };
    struct env217 envinst217 = {
        .envinst130 = envinst130 ,
    };
    struct env219 envinst219 = {
        .envinst132 = envinst132 ,
    };
    struct env221 envinst221 = {
        .envinst136 = envinst136 ,
    };
    struct env223 envinst223 = {
        .envinst136 = envinst136 ,
    };
    struct env225 envinst225 = {
        .envinst223 = envinst223 ,
        .envinst141 = envinst141 ,
    };
    struct env231 envinst231 = {
        .envinst136 = envinst136 ,
        .envinst141 = envinst141 ,
    };
    struct env234 envinst234 = {
        .envinst223 = envinst223 ,
    };
    struct env236 envinst236 = {
        .envinst221 = envinst221 ,
        .envinst141 = envinst141 ,
        .envinst212 = envinst212 ,
    };
    struct env241 envinst241 = {
        .envinst134 = envinst134 ,
    };
    struct env243 envinst243 = {
        .envinst84 = envinst84 ,
    };
    struct env245 envinst245 = {
        .envinst89 = envinst89 ,
    };
    struct env247 envinst247 = {
        .envinst91 = envinst91 ,
    };
    struct env249 envinst249 = {
        .envinst208 = envinst208 ,
    };
    struct env252 envinst252 = {
        .envinst119 = envinst119 ,
        .envinst247 = envinst247 ,
        .envinst245 = envinst245 ,
        .envinst243 = envinst243 ,
    };
    struct env260 envinst260 = {
        .envinst221 = envinst221 ,
        .envinst241 = envinst241 ,
        .envinst234 = envinst234 ,
        .envinst243 = envinst243 ,
        .envinst212 = envinst212 ,
        .envinst236 = envinst236 ,
        .envinst231 = envinst231 ,
        .envinst217 = envinst217 ,
        .envinst219 = envinst219 ,
        .envinst225 = envinst225 ,
    };
    struct env271 envinst271 = {
        .envinst215 = envinst215 ,
        .envinst260 = envinst260 ,
        .envinst252 = envinst252 ,
        .envinst234 = envinst234 ,
        .envinst212 = envinst212 ,
        .envinst71 = envinst71 ,
        .envinst249 = envinst249 ,
        .envinst82 = envinst82 ,
    };
    struct env281 envinst281 = {
        .envinst209 = envinst209 ,
    };
    enum CAllocator_10  al4538 = ( (  idc287 ) ( ) );
    struct TextBuf_114  temp289;
    struct TextBuf_114  temp288 = (  temp289 );
    struct TextBuf_114 *  tb4539 = ( &temp288 );
    struct Slice_290  args4542 = ( (  get291 ) ( ) );
    struct Maybe_94  initial_dash_message4543 = ( (struct Maybe_94) { .tag = Maybe_94_None_t } );
    if ( (  cmp297 ( ( (  args4542 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        struct StrView_27  fname4544 = ( (  from_dash_const_dash_str298 ) ( (  elem_dash_get324 ( (  args4542 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
        struct envunion360  temp359 = ( (struct envunion360){ .fun = (  struct Maybe_358  (*) (  struct env123*  ,    enum CAllocator_10  ,    struct StrView_27  ) )mk_dash_from_dash_file361 , .env =  envinst123 } );
        struct Maybe_358  dref4545 = ( temp359.fun ( &temp359.env ,  (  al4538 ) ,  (  fname4544 ) ) );
        if ( dref4545.tag == Maybe_358_None_t ) {
            struct envunion673  temp672 = ( (struct envunion673){ .fun = (  struct TextBuf_114  (*) (  struct env121*  ,    enum CAllocator_10  ) )mk364 , .env =  envinst121 } );
            (*  tb4539 ) = ( temp672.fun ( &temp672.env ,  (  al4538 ) ) );
            struct envunion675  temp674 = ( (struct envunion675){ .fun = (  struct StrView_27  (*) (  struct env56*  ,    struct StrConcat_646  ,    enum CAllocator_10  ) )from_dash_str676 , .env =  envinst56 } );
            initial_dash_message4543 = ( ( Maybe_94_Just ) ( ( temp674.fun ( &temp674.env ,  ( ( StrConcat_646_StrConcat ) ( ( ( StrConcat_647_StrConcat ) ( ( (  from_dash_string207 ) ( ( "Could not load file " ) ,  ( 20 ) ) ) ,  (  fname4544 ) ) ) ,  ( (  from_dash_charlike353 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ,  (  al4538 ) ) ) ) );
        }
        else {
            if ( dref4545.tag == Maybe_358_Just_t ) {
                (*  tb4539 ) = ( dref4545 .stuff .Maybe_358_Just_s .field0 );
            }
        }
    } else {
        struct envunion710  temp709 = ( (struct envunion710){ .fun = (  struct TextBuf_114  (*) (  struct env121*  ,    enum CAllocator_10  ) )mk364 , .env =  envinst121 } );
        (*  tb4539 ) = ( temp709.fun ( &temp709.env ,  (  al4538 ) ) );
    }
    struct Editor_256  temp711 = ( (struct Editor_256) { .f_running = ( true ) , .f_al = (  al4538 ) , .f_pane = ( (  mk712 ) ( (  al4538 ) ,  (  tb4539 ) ) ) , .f_clipboard = ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) , .f_search_dash_term = ( (struct Maybe_94) { .tag = Maybe_94_None_t } ) , .f_mode = ( (struct EditorMode_257) { .tag = EditorMode_257_Normal_t } ) , .f_msg = (  initial_dash_message4543 ) , .f_theme = (  default3990 ) , .f_og_dash_theme = (  default3990 ) } );
    struct Editor_256 *  ed4547 = ( &temp711 );
    struct envunion715  temp714 = ( (struct envunion715){ .fun = (  struct Tui_100  (*) (  struct env96*  ) )mk716 , .env =  envinst96 } );
    struct Tui_100  temp713 = ( temp714.fun ( &temp714.env ) );
    struct Tui_100 *  tui4548 = ( &temp713 );
    struct Screen_283  temp838 = ( (  mk_dash_screen839 ) ( (  tui4548 ) ,  (  al4538 ) ) );
    struct Screen_283 *  screen4549 = ( &temp838 );
    uint32_t  last_dash_redraw_dash_changes4550 = (  from_dash_integral174 ( 0 ) );
    while ( ( ( * (  ed4547 ) ) .f_running ) ) {
        struct env883 envinst883 = {
            .envinst98 = envinst98 ,
            .tui4548 =  tui4548 ,
        };
        struct FunIter_882  temp881 =  into_dash_iter890 ( ( (  from_dash_function891 ) ( ( (struct envunion889){ .fun = (  struct Maybe_885  (*) (  struct env883*  ) )lam892 , .env =  envinst883 } ) ) ) );
        while (true) {
            struct Maybe_885  __cond1078 =  next1079 (&temp881);
            if (  __cond1078 .tag == 0 ) {
                break;
            }
            struct InputEvent_886  ev4552 =  __cond1078 .stuff .Maybe_885_Just_s .field0;
            struct InputEvent_886  dref4553 = (  ev4552 );
            if ( dref4553.tag == InputEvent_886_Key_t ) {
                ( (  reset_dash_msg1081 ) ( (  ed4547 ) ) );
                struct envunion1088  temp1087 = ( (struct envunion1088){ .fun = (  enum Unit_8  (*) (  struct env271*  ,    struct Editor_256 *  ,    struct Key_274  ) )handle_dash_key1089 , .env =  envinst271 } );
                ( temp1087.fun ( &temp1087.env ,  (  ed4547 ) ,  ( dref4553 .stuff .InputEvent_886_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1873  temp1872 = ( (struct envunion1873){ .fun = (  bool  (*) (  struct env104*  ,    struct Screen_283 *  ) )resize_dash_screen_dash_if_dash_needed1874 , .env =  envinst104 } );
        ( temp1872.fun ( &temp1872.env ,  (  screen4549 ) ) );
        if ( ( (  should_dash_redraw1876 ) ( (  tui4548 ) ) ) ) {
            (*  screen4549 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1877 ) ( (  screen4549 ) ) );
            ( (  set_dash_screen_dash_fg1886 ) ( (  screen4549 ) ,  ( ( ( * ( ( * (  ed4547 ) ) .f_theme ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1887 ) ( (  screen4549 ) ,  ( ( ( * ( ( * (  ed4547 ) ) .f_theme ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1888 ) ( (  screen4549 ) ) );
            struct envunion1901  temp1900 = ( (struct envunion1901){ .fun = (  enum Unit_8  (*) (  struct env281*  ,    struct Screen_283 *  ,    struct Editor_256 *  ) )render_dash_editor1902 , .env =  envinst281 } );
            ( temp1900.fun ( &temp1900.env ,  (  screen4549 ) ,  (  ed4547 ) ) );
            last_dash_redraw_dash_changes4550 = ( (  render_dash_screen2245 ) ( (  screen4549 ) ) );
        }
        ( (  sync2392 ) ( (  tui4548 ) ) );
    }
    ( (  free_dash_screen2401 ) ( (  screen4549 ) ) );
    ( (  deinit2404 ) ( (  tui4548 ) ) );
}
