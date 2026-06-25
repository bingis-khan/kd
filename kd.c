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
    size_t  growth_dash_factor2038;
    size_t  starting_dash_size2037;
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
    ;
    ;
    ;
    size_t  growth_dash_factor2038;
    size_t  starting_dash_size2037;
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
    ;
    ;
    ;
    size_t  growth_dash_factor2038;
    size_t  starting_dash_size2037;
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
    ;
    ;
    ;
    size_t  growth_dash_factor2038;
    size_t  starting_dash_size2037;
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
    ;
    ;
    ;
    size_t  growth_dash_factor2038;
    size_t  starting_dash_size2037;
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
    ;
    struct env1 envinst1;
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
    ;
    struct env2 envinst2;
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
    ;
    ;
    ;
    ;
    struct env3 envinst3;
};

struct envunion34 {
    enum Unit_8  (*fun) (  struct env4*  ,    struct List_26 *  );
    struct env4 env;
};

struct env33 {
    ;
    ;
    ;
    ;
    ;
    struct env4 envinst4;
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
    ;
    struct env5 envinst5;
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
    struct env6 envinst6;
    ;
    ;
    ;
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
};

struct env40 {
    size_t  shrink_dash_factor2039;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    size_t  shrink_dash_factor2039;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
    struct env40 envinst40;
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
    ;
    ;
    struct env46 envinst46;
    ;
    ;
    ;
};

struct envunion54 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env53 {
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
    ;
    ;
    struct env60 envinst60;
    ;
};

struct env66 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env60 envinst60;
};

struct envunion68 {
    enum Unit_8  (*fun) (  struct env44*  ,    struct List_13 *  );
    struct env44 env;
};

struct env67 {
    struct env44 envinst44;
    ;
    ;
};

struct StrConcat_72 {
    struct StrView_30  field0;
    size_t  field1;
};

static struct StrConcat_72 StrConcat_72_StrConcat (  struct StrView_30  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_72 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_71 {
    struct StrConcat_72  field0;
    struct StrView_30  field1;
};

static struct StrConcat_71 StrConcat_71_StrConcat (  struct StrConcat_72  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_71 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion70 {
    enum Unit_8  (*fun) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  );
    struct env63 env;
};

struct envunion73 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct env69 {
    struct env63 envinst63;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
};

struct envunion75 {
    enum Unit_8  (*fun) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrView_30  );
    struct env66 env;
};

struct env74 {
    struct env66 envinst66;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env60 envinst60;
    ;
    ;
};

struct env77 {
    ;
    ;
    ;
    ;
    bool *  should_dash_resize3358;
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

struct env78 {
    ;
    ;
    bool *  should_dash_resize3358;
    ;
};

enum ColorPalette_82 {
    ColorPalette_82_Palette8,
    ColorPalette_82_Palette16,
    ColorPalette_82_Palette256,
    ColorPalette_82_PaletteRGB,
};

struct Array_84 {
    uint8_t _arr [32];
};

struct Termios_83 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_84  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_81 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_82  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_83  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion80 {
    bool  (*fun) (  struct env78*  ,    struct Tui_81 *  );
    struct env78 env;
};

struct env79 {
    struct env78 envinst78;
    ;
};

struct envunion86 {
    bool  (*fun) (  struct env78*  ,    struct Tui_81 *  );
    struct env78 env;
};

struct env85 {
    ;
    ;
    ;
    ;
    ;
    struct env78 envinst78;
};

struct envunion88 {
    struct List_9  (*fun) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  );
    struct env50 env;
};

struct env87 {
    ;
    ;
    ;
    ;
    ;
    struct env50 envinst50;
    ;
};

struct envunion90 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

struct envunion91 {
    enum Unit_8  (*fun) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  );
    struct env37 env;
};

struct envunion92 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct env89 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env53 envinst53;
    struct env37 envinst37;
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
    ;
    ;
    ;
};

struct envunion94 {
    enum Unit_8  (*fun) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  );
    struct env6 env;
};

struct envunion95 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

enum ChangesetInputType_99 {
    ChangesetInputType_99_NoChangeset,
    ChangesetInputType_99_InputChangeset,
    ChangesetInputType_99_CustomChangeset,
};

struct Actions_98 {
    struct List_23  f_list;
    size_t  f_cur;
    enum ChangesetInputType_99  f_input_dash_changeset;
};

struct TextBuf_97 {
    enum CAllocator_10  f_al;
    struct List_9  f_buf;
    struct Actions_98  f_actions;
};

struct envunion96 {
    int32_t  (*fun) (  struct env89*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct StrView_30  );
    struct env89 env;
};

struct envunion100 {
    enum Unit_8  (*fun) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  );
    struct env40 env;
};

struct envunion101 {
    enum Unit_8  (*fun) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  );
    struct env41 env;
};

struct env93 {
    struct env6 envinst6;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env48 envinst48;
    ;
    struct env89 envinst89;
    ;
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
};

struct envunion103 {
    enum Unit_8  (*fun) (  struct env93*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  );
    struct env93 env;
};

struct env102 {
    struct env93 envinst93;
    ;
    ;
    ;
    ;
};

struct envunion105 {
    enum Unit_8  (*fun) (  struct env93*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  );
    struct env93 env;
};

struct env104 {
    struct env93 envinst93;
    ;
    ;
    ;
    ;
};

struct envunion107 {
    struct Pos_29  (*fun) (  struct env102*  ,    struct TextBuf_97 *  ,    struct Action_28  );
    struct env102 env;
};

struct env106 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env102 envinst102;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion109 {
    struct Pos_29  (*fun) (  struct env104*  ,    struct TextBuf_97 *  ,    struct Action_28  );
    struct env104 env;
};

struct env108 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env104 envinst104;
    ;
};

struct envunion111 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
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
};

struct envunion113 {
    enum Unit_8  (*fun) (  struct env33*  ,    struct List_26 *  ,    struct Action_28  );
    struct env33 env;
};

struct envunion114 {
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Changeset_25  );
    struct env21 env;
};

struct envunion115 {
    struct StrView_30  (*fun) (  struct env110*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  );
    struct env110 env;
};

struct envunion116 {
    struct Pos_29  (*fun) (  struct env104*  ,    struct TextBuf_97 *  ,    struct Action_28  );
    struct env104 env;
};

struct env112 {
    struct env33 envinst33;
    struct env21 envinst21;
    ;
    ;
    ;
    struct env110 envinst110;
    ;
    ;
    ;
    ;
    ;
    struct env104 envinst104;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    enum Unit_8  (*fun) (  struct env21*  ,    struct List_23 *  ,    struct Changeset_25  );
    struct env21 env;
};

struct env117 {
    struct env21 envinst21;
    ;
    ;
    ;
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
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct env119 {
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion122 {
    enum Unit_8  (*fun) (  struct env119*  ,    struct TextBuf_97 *  ,    struct Line_12 *  );
    struct env119 env;
};

struct env121 {
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

enum Color8_124 {
    Color8_124_Black8,
    Color8_124_Red8,
    Color8_124_Green8,
    Color8_124_Yellow8,
    Color8_124_Blue8,
    Color8_124_Magenta8,
    Color8_124_Cyan8,
    Color8_124_White8,
};

enum Color16_125 {
    Color16_125_Black16,
    Color16_125_Red16,
    Color16_125_Green16,
    Color16_125_Yellow16,
    Color16_125_Blue16,
    Color16_125_Magenta16,
    Color16_125_Cyan16,
    Color16_125_White16,
    Color16_125_BrightBlack16,
    Color16_125_BrightRed16,
    Color16_125_BrightGreen16,
    Color16_125_BrightYellow16,
    Color16_125_BrightBlue16,
    Color16_125_BrightMagenta16,
    Color16_125_BrightCyan16,
    Color16_125_BrightWhite16,
};

struct RGB_126 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_123 {
    enum {
        Color_123_ColorDefault_t,
        Color_123_Color8_t,
        Color_123_Color16_t,
        Color_123_Color256_t,
        Color_123_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_124  field0;
        } Color_123_Color8_s;
        struct {
            enum Color16_125  field0;
        } Color_123_Color16_s;
        struct {
            uint8_t  field0;
        } Color_123_Color256_s;
        struct {
            struct RGB_126  field0;
        } Color_123_ColorRGB_s;
    } stuff;
};

static struct Color_123 Color_123_Color8 (  enum Color8_124  field0 ) {
    return ( struct Color_123 ) { .tag = Color_123_Color8_t, .stuff = { .Color_123_Color8_s = { .field0 = field0 } } };
};

static struct Color_123 Color_123_Color16 (  enum Color16_125  field0 ) {
    return ( struct Color_123 ) { .tag = Color_123_Color16_t, .stuff = { .Color_123_Color16_s = { .field0 = field0 } } };
};

static struct Color_123 Color_123_Color256 (  uint8_t  field0 ) {
    return ( struct Color_123 ) { .tag = Color_123_Color256_t, .stuff = { .Color_123_Color256_s = { .field0 = field0 } } };
};

static struct Color_123 Color_123_ColorRGB (  struct RGB_126  field0 ) {
    return ( struct Color_123 ) { .tag = Color_123_ColorRGB_t, .stuff = { .Color_123_ColorRGB_s = { .field0 = field0 } } };
};

static  uint8_t   cast130 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8129 (    uint32_t  x657 ) {
    return ( (  cast130 ) ( (  x657 ) ) );
}

static  uint32_t   op_dash_div132 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

struct Range_135 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_135 Range_135_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_135 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env136 {
    ;
    uint32_t  base1210;
};

struct envunion137 {
    uint32_t  (*fun) (  struct env136*  ,    int32_t  ,    uint32_t  );
    struct env136 env;
};

struct RangeIter_138 {
    struct Range_135  field0;
    int32_t  field1;
};

static struct RangeIter_138 RangeIter_138_RangeIter (  struct Range_135  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_138 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_138   into_dash_iter139 (    struct Range_135  dref883 ) {
    return ( ( RangeIter_138_RangeIter ) ( ( ( Range_135_Range ) ( ( dref883 .field0 ) ,  ( dref883 .field1 ) ) ) ,  ( dref883 .field0 ) ) );
}

struct Maybe_140 {
    enum {
        Maybe_140_None_t,
        Maybe_140_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_140_Just_s;
    } stuff;
};

static struct Maybe_140 Maybe_140_Just (  int32_t  field0 ) {
    return ( struct Maybe_140 ) { .tag = Maybe_140_Just_t, .stuff = { .Maybe_140_Just_s = { .field0 = field0 } } };
};

enum Ordering_143 {
    Ordering_143_LT,
    Ordering_143_EQ,
    Ordering_143_GT,
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_143   cmp142 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  int32_t   op_dash_add144 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_140   next141 (    struct RangeIter_138 *  self891 ) {
    struct RangeIter_138  dref892 = ( * (  self891 ) );
    if ( true ) {
        if ( (  cmp142 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
        }
        struct Maybe_140  x896 = ( ( Maybe_140_Just ) ( ( dref892 .field1 ) ) );
        (*  self891 ) = ( ( RangeIter_138_RangeIter ) ( ( ( Range_135_Range ) ( ( dref892 .field0 .field0 ) ,  ( dref892 .field0 .field1 ) ) ) ,  (  op_dash_add144 ( ( dref892 .field1 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        return (  x896 );
    }
}

static  uint32_t   reduce134 (    struct Range_135  iterable1093 ,    uint32_t  base1095 ,   struct envunion137  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_138  it1099 = ( (  into_dash_iter139 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_140  dref1100 = ( (  next141 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_140_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_140_Just_t ) {
                struct envunion137  temp145 = (  fun1097 );
                x1098 = ( temp145.fun ( &temp145.env ,  ( dref1100 .stuff .Maybe_140_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp146 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp146);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp147;
    return (  temp147 );
}

static  struct Range_135   to148 (    int32_t  from874 ,    int32_t  to876 ) {
    return ( ( Range_135_Range ) ( (  from874 ) ,  (  to876 ) ) );
}

static  int32_t   op_dash_sub149 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint32_t   from_dash_integral150 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint32_t   op_dash_mul152 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

static  uint32_t   lam151 (   struct env136* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul152 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow133 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env136 envinst136 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce134 ) ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral150 ( 1 ) ) ,  ( (struct envunion137){ .fun = (  uint32_t  (*) (  struct env136*  ,    int32_t  ,    uint32_t  ) )lam151 , .env =  envinst136 } ) ) );
}

static  uint32_t   rshift131 (    uint32_t  x1224 ,    int32_t  am1226 ) {
    return (  op_dash_div132 ( (  x1224 ) , ( (  pow133 ) ( (  from_dash_integral150 ( 2 ) ) ,  (  am1226 ) ) ) ) );
}

static  uint32_t   op_dash_sub154 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_143   cmp155 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   op_dash_add156 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   mod153 (    uint32_t  l1229 ,    uint32_t  d1231 ) {
    uint32_t  r1232 = (  op_dash_div132 ( (  l1229 ) , (  d1231 ) ) );
    uint32_t  m1233 = (  op_dash_sub154 ( (  l1229 ) , (  op_dash_mul152 ( (  r1232 ) , (  d1231 ) ) ) ) );
    if ( (  cmp155 ( (  m1233 ) , (  from_dash_integral150 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add156 ( (  d1231 ) , (  m1233 ) ) );
    } else {
        return (  m1233 );
    }
}

static  struct RGB_126   rgb_dash_from_dash_hex128 (    uint32_t  n2679 ) {
    return ( (struct RGB_126) { .f_r = ( (  u32_dash_u8129 ) ( ( (  rshift131 ) ( (  n2679 ) ,  (  from_dash_integral56 ( 16 ) ) ) ) ) ) , .f_g = ( (  u32_dash_u8129 ) ( ( (  mod153 ) ( ( (  rshift131 ) ( (  n2679 ) ,  (  from_dash_integral56 ( 8 ) ) ) ) ,  (  from_dash_integral150 ( 256 ) ) ) ) ) ) , .f_b = ( (  u32_dash_u8129 ) ( ( (  mod153 ) ( (  n2679 ) ,  (  from_dash_integral150 ( 256 ) ) ) ) ) ) } );
}

static  struct Color_123   rgb127 (    uint32_t  x3951 ) {
    return ( ( Color_123_ColorRGB ) ( ( (  rgb_dash_from_dash_hex128 ) ( (  x3951 ) ) ) ) );
}

struct Colors_158 {
    struct Color_123  f_fg;
    struct Color_123  f_bg;
};

struct Maybe_161 {
    enum {
        Maybe_161_None_t,
        Maybe_161_Just_t,
    } tag;
    union {
        struct {
            struct Color_123  field0;
        } Maybe_161_Just_s;
    } stuff;
};

static struct Maybe_161 Maybe_161_Just (  struct Color_123  field0 ) {
    return ( struct Maybe_161 ) { .tag = Maybe_161_Just_t, .stuff = { .Maybe_161_Just_s = { .field0 = field0 } } };
};

struct HighlightColors_160 {
    enum HighlightType_18  f_type;
    struct Color_123  f_fg;
    struct Maybe_161  f_bg;
};

struct Slice_159 {
    struct HighlightColors_160 *  f_ptr;
    size_t  f_count;
};

struct Theme_157 {
    struct Colors_158  f_default;
    struct Colors_158  f_cursor;
    struct Colors_158  f_selection;
    struct Colors_158  f_line_dash_num;
    struct Colors_158  f_line_dash_num_dash_hl;
    struct Colors_158  f_overlay;
    struct Slice_159  f_highlights;
};

struct Array_164 {
    struct HighlightColors_160 _arr [13];
};

static  struct HighlightColors_160 *   cast165 (    struct Array_164 *  x356 ) {
    return ( (struct HighlightColors_160 * ) (  x356 ) );
}

static  struct Slice_159   as_dash_slice163 (    struct Array_164 *  arr2273 ) {
    return ( (struct Slice_159) { .f_ptr = ( (  cast165 ) ( (  arr2273 ) ) ) , .f_count = ( (size_t ) ( 13 ) ) } );
}

static  struct Array_164   from_dash_listlike167 (    struct Array_164  self330 ) {
    return (  self330 );
}

static  struct HighlightColors_160   hlt168 (    enum HighlightType_18  type3945 ,    struct Color_123  fg3947 ) {
    return ( (struct HighlightColors_160) { .f_type = (  type3945 ) , .f_fg = (  fg3947 ) , .f_bg = ( (struct Maybe_161) { .tag = Maybe_161_None_t } ) } );
}

static  void *   cast_dash_ptr174 (    struct HighlightColors_160 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of175 (    struct HighlightColors_160 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct HighlightColors_160 *   zeroed172 (  ) {
    struct HighlightColors_160 *  temp173;
    struct HighlightColors_160 *  x570 = (  temp173 );
    ( ( memset ) ( ( (  cast_dash_ptr174 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of175 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct HighlightColors_160 *   null_dash_ptr171 (  ) {
    return ( (  zeroed172 ) ( ) );
}

static  struct Slice_159   empty170 (  ) {
    return ( (struct Slice_159) { .f_ptr = ( (  null_dash_ptr171 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct Tuple2_177 {
    struct StrView_30  field0;
    struct Theme_157 *  field1;
};

static struct Tuple2_177 Tuple2_177_Tuple2 (  struct StrView_30  field0 ,  struct Theme_157 *  field1 ) {
    return ( struct Tuple2_177 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Slice_176 {
    struct Tuple2_177 *  f_ptr;
    size_t  f_count;
};

struct Array_179 {
    struct Tuple2_177 _arr [3];
};

static  struct Tuple2_177 *   cast180 (    struct Array_179 *  x356 ) {
    return ( (struct Tuple2_177 * ) (  x356 ) );
}

static  struct Slice_176   as_dash_slice178 (    struct Array_179 *  arr2273 ) {
    return ( (struct Slice_176) { .f_ptr = ( (  cast180 ) ( (  arr2273 ) ) ) , .f_count = ( (size_t ) ( 3 ) ) } );
}

static  struct Array_179   from_dash_listlike182 (    struct Array_179  self330 ) {
    return (  self330 );
}

static  struct StrView_30   from_dash_string183 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

struct env184 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct Slice_176  all_dash_themes3966;
};

struct Maybe_187 {
    enum {
        Maybe_187_None_t,
        Maybe_187_Just_t,
    } tag;
    union {
        struct {
            enum HighlightType_18  field0;
        } Maybe_187_Just_s;
    } stuff;
};

static struct Maybe_187 Maybe_187_Just (  enum HighlightType_18  field0 ) {
    return ( struct Maybe_187 ) { .tag = Maybe_187_Just_t, .stuff = { .Maybe_187_Just_s = { .field0 = field0 } } };
};

struct envunion186 {
    struct Maybe_187  (*fun) (  struct env121*  ,    struct TextBuf_97 *  ,    struct Pos_29  );
    struct env121 env;
};

struct env185 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct Maybe_190 {
    enum {
        Maybe_190_None_t,
        Maybe_190_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_31  field0;
        } Maybe_190_Just_s;
    } stuff;
};

static struct Maybe_190 Maybe_190_Just (  struct Cursors_31  field0 ) {
    return ( struct Maybe_190 ) { .tag = Maybe_190_Just_t, .stuff = { .Maybe_190_Just_s = { .field0 = field0 } } };
};

struct envunion189 {
    struct Maybe_190  (*fun) (  struct env112*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_190  );
    struct env112 env;
};

struct env188 {
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

struct envunion192 {
    struct Maybe_190  (*fun) (  struct env112*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_190  );
    struct env112 env;
};

struct env191 {
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
    ;
};

struct envunion194 {
    struct Maybe_190  (*fun) (  struct env106*  ,    struct TextBuf_97 *  );
    struct env106 env;
};

struct env193 {
    ;
    ;
    ;
    ;
    struct env106 envinst106;
    ;
    ;
};

struct envunion196 {
    struct Maybe_190  (*fun) (  struct env108*  ,    struct TextBuf_97 *  );
    struct env108 env;
};

struct env195 {
    ;
    ;
    ;
    ;
    struct env108 envinst108;
    ;
    ;
};

struct envunion198 {
    struct Maybe_190  (*fun) (  struct env112*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_190  );
    struct env112 env;
};

struct env197 {
    struct env112 envinst112;
    ;
    ;
    ;
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

struct envunion200 {
    struct Maybe_190  (*fun) (  struct env112*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_190  );
    struct env112 env;
};

struct env199 {
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
    ;
};

struct envunion202 {
    enum Unit_8  (*fun) (  struct env117*  ,    struct TextBuf_97 *  ,    struct Cursors_31  );
    struct env117 env;
};

enum Mode_205 {
    Mode_205_Normal,
    Mode_205_Insert,
    Mode_205_Select,
};

struct ScreenCursorOffset_206 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_204 {
    struct TextBuf_97 *  f_buf;
    struct Pos_29  f_cursor;
    int32_t  f_vi;
    struct Maybe_32  f_sel;
    enum Mode_205  f_mode;
    struct ScreenCursorOffset_206  f_sc_dash_off;
};

struct envunion203 {
    enum Unit_8  (*fun) (  struct env199*  ,    struct Pane_204 *  ,    int32_t  );
    struct env199 env;
};

struct env201 {
    struct env117 envinst117;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env199 envinst199;
    ;
    ;
};

struct envunion208 {
    enum Unit_8  (*fun) (  struct env117*  ,    struct TextBuf_97 *  ,    struct Cursors_31  );
    struct env117 env;
};

struct envunion209 {
    struct Maybe_190  (*fun) (  struct env112*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_190  );
    struct env112 env;
};

struct env207 {
    ;
    struct env117 envinst117;
    struct env112 envinst112;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

struct envunion211 {
    enum Unit_8  (*fun) (  struct env199*  ,    struct Pane_204 *  ,    int32_t  );
    struct env199 env;
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
    struct env199 envinst199;
};

struct envunion213 {
    enum Unit_8  (*fun) (  struct env117*  ,    struct TextBuf_97 *  ,    struct Cursors_31  );
    struct env117 env;
};

struct envunion214 {
    enum Unit_8  (*fun) (  struct env188*  ,    struct Pane_204 *  ,    struct StrView_30  );
    struct env188 env;
};

struct Tuple2_216 {
    struct Pos_29  field0;
    struct Pos_29  field1;
};

static struct Tuple2_216 Tuple2_216_Tuple2 (  struct Pos_29  field0 ,  struct Pos_29  field1 ) {
    return ( struct Tuple2_216 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion215 {
    enum Unit_8  (*fun) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  );
    struct env197 env;
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
    struct env117 envinst117;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env188 envinst188;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env197 envinst197;
    ;
};

struct envunion218 {
    struct StrView_30  (*fun) (  struct env110*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  );
    struct env110 env;
};

struct env217 {
    ;
    ;
    ;
    ;
    struct env110 envinst110;
    ;
    ;
    ;
    ;
};

struct envunion220 {
    struct StrView_30  (*fun) (  struct env69*  ,    struct StrConcat_71  ,    enum CAllocator_10  );
    struct env69 env;
};

struct env219 {
    ;
    ;
    ;
    ;
    struct env69 envinst69;
    ;
    ;
};

struct envunion222 {
    struct StrView_30  (*fun) (  struct env74*  ,    struct StrView_30  ,    enum CAllocator_10  );
    struct env74 env;
};

struct env221 {
    ;
    ;
    ;
    ;
    struct env74 envinst74;
    ;
    ;
};

struct Maybe_225 {
    enum {
        Maybe_225_None_t,
        Maybe_225_Just_t,
    } tag;
    union {
        struct {
            struct Theme_157 *  field0;
        } Maybe_225_Just_s;
    } stuff;
};

static struct Maybe_225 Maybe_225_Just (  struct Theme_157 *  field0 ) {
    return ( struct Maybe_225 ) { .tag = Maybe_225_Just_t, .stuff = { .Maybe_225_Just_s = { .field0 = field0 } } };
};

struct envunion224 {
    struct Maybe_225  (*fun) (  struct env184*  ,    struct StrView_30  );
    struct env184 env;
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
    ;
    ;
    ;
    struct env184 envinst184;
};

struct Maybe_229 {
    enum {
        Maybe_229_None_t,
        Maybe_229_Just_t,
    } tag;
    union {
        struct {
            struct StrView_30  field0;
        } Maybe_229_Just_s;
    } stuff;
};

static struct Maybe_229 Maybe_229_Just (  struct StrView_30  field0 ) {
    return ( struct Maybe_229 ) { .tag = Maybe_229_Just_t, .stuff = { .Maybe_229_Just_s = { .field0 = field0 } } };
};

struct EditorMode_230 {
    enum {
        EditorMode_230_Normal_t,
        EditorMode_230_Cmd_t,
        EditorMode_230_Search_t,
    } tag;
    union {
        struct {
            struct Pos_29  field0;
            struct StrBuilder_62  field1;
        } EditorMode_230_Cmd_s;
        struct {
            struct Pos_29  field0;
            struct StrBuilder_62  field1;
        } EditorMode_230_Search_s;
    } stuff;
};

static struct EditorMode_230 EditorMode_230_Cmd (  struct Pos_29  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_230 ) { .tag = EditorMode_230_Cmd_t, .stuff = { .EditorMode_230_Cmd_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct EditorMode_230 EditorMode_230_Search (  struct Pos_29  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct EditorMode_230 ) { .tag = EditorMode_230_Search_t, .stuff = { .EditorMode_230_Search_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Editor_228 {
    enum CAllocator_10  f_al;
    bool  f_running;
    struct Pane_204  f_pane;
    struct Maybe_229  f_clipboard;
    struct Maybe_229  f_search_dash_term;
    struct EditorMode_230  f_mode;
    struct Maybe_229  f_msg;
    struct Theme_157 *  f_theme;
    struct Theme_157 *  f_og_dash_theme;
};

struct envunion227 {
    enum Unit_8  (*fun) (  struct env221*  ,    struct Editor_228 *  ,    struct StrView_30  );
    struct env221 env;
};

struct env226 {
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
};

struct envunion232 {
    enum Unit_8  (*fun) (  struct env210*  ,    struct Pane_204 *  ,    int32_t  );
    struct env210 env;
};

struct envunion233 {
    enum Unit_8  (*fun) (  struct env219*  ,    struct Editor_228 *  ,    struct StrConcat_71  );
    struct env219 env;
};

struct envunion234 {
    enum Unit_8  (*fun) (  struct env212*  ,    struct Pane_204 *  );
    struct env212 env;
};

struct envunion235 {
    enum Unit_8  (*fun) (  struct env188*  ,    struct Pane_204 *  ,    struct StrView_30  );
    struct env188 env;
};

struct envunion236 {
    enum Unit_8  (*fun) (  struct env207*  ,    struct Pane_204 *  );
    struct env207 env;
};

struct envunion237 {
    enum Unit_8  (*fun) (  struct env193*  ,    struct Pane_204 *  );
    struct env193 env;
};

struct envunion238 {
    enum Unit_8  (*fun) (  struct env195*  ,    struct Pane_204 *  );
    struct env195 env;
};

struct envunion239 {
    enum Unit_8  (*fun) (  struct env201*  ,    struct Pane_204 *  );
    struct env201 env;
};

struct envunion240 {
    enum Unit_8  (*fun) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  );
    struct env197 env;
};

struct envunion241 {
    enum Unit_8  (*fun) (  struct env217*  ,    struct Editor_228 *  );
    struct env217 env;
};

struct env231 {
    ;
    ;
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
    struct env219 envinst219;
    ;
    ;
    ;
    struct env212 envinst212;
    ;
    struct env188 envinst188;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env207 envinst207;
    ;
    ;
    struct env193 envinst193;
    ;
    ;
    ;
    ;
    ;
    struct env195 envinst195;
    ;
    ;
    ;
    ;
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
    struct env197 envinst197;
    struct env217 envinst217;
};

struct envunion243 {
    enum Unit_8  (*fun) (  struct env226*  ,    struct Editor_228 *  ,    struct StrView_30  );
    struct env226 env;
};

struct envunion244 {
    enum Unit_8  (*fun) (  struct env210*  ,    struct Pane_204 *  ,    int32_t  );
    struct env210 env;
};

struct envunion245 {
    enum Unit_8  (*fun) (  struct env188*  ,    struct Pane_204 *  ,    struct StrView_30  );
    struct env188 env;
};

struct envunion246 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

struct envunion247 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  );
    struct env67 env;
};

struct envunion248 {
    enum Unit_8  (*fun) (  struct env223*  ,    struct Editor_228 *  ,    struct StrView_30  );
    struct env223 env;
};

struct envunion249 {
    enum Unit_8  (*fun) (  struct env191*  ,    struct Pane_204 *  );
    struct env191 env;
};

struct Key_251 {
    enum {
        Key_251_Escape_t,
        Key_251_Enter_t,
        Key_251_Tab_t,
        Key_251_Backspace_t,
        Key_251_Char_t,
        Key_251_Ctrl_t,
        Key_251_Up_t,
        Key_251_Down_t,
        Key_251_Left_t,
        Key_251_Right_t,
        Key_251_Home_t,
        Key_251_End_t,
        Key_251_PageUp_t,
        Key_251_PageDown_t,
        Key_251_Delete_t,
        Key_251_Insert_t,
        Key_251_F1_t,
        Key_251_F2_t,
        Key_251_F3_t,
        Key_251_F4_t,
        Key_251_F5_t,
        Key_251_F6_t,
        Key_251_F7_t,
        Key_251_F8_t,
        Key_251_F9_t,
        Key_251_F10_t,
        Key_251_F11_t,
        Key_251_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_251_Char_s;
        struct {
            char  field0;
        } Key_251_Ctrl_s;
    } stuff;
};

static struct Key_251 Key_251_Char (  char  field0 ) {
    return ( struct Key_251 ) { .tag = Key_251_Char_t, .stuff = { .Key_251_Char_s = { .field0 = field0 } } };
};

static struct Key_251 Key_251_Ctrl (  char  field0 ) {
    return ( struct Key_251 ) { .tag = Key_251_Ctrl_t, .stuff = { .Key_251_Ctrl_s = { .field0 = field0 } } };
};

struct envunion250 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Editor_228 *  ,    struct Key_251  );
    struct env231 env;
};

struct env242 {
    ;
    ;
    ;
    ;
    ;
    struct env226 envinst226;
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
    struct env188 envinst188;
    ;
    struct env60 envinst60;
    ;
    ;
    struct env67 envinst67;
    struct env223 envinst223;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env191 envinst191;
    ;
    struct env231 envinst231;
};

struct Cell_256 {
    struct Char_65  f_c;
    struct Color_123  f_fg;
    struct Color_123  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_255 {
    struct Cell_256 *  f_ptr;
    size_t  f_count;
};

struct Screen_254 {
    enum CAllocator_10  f_al;
    struct Tui_81 *  f_tui;
    struct Slice_255  f_current;
    struct Slice_255  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_123  f_default_dash_fg;
    struct Color_123  f_default_dash_bg;
};

struct ScreenDims_257 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

struct envunion253 {
    enum Unit_8  (*fun) (  struct env185*  ,    struct Screen_254 *  ,    struct Pane_204 *  ,    struct ScreenDims_257  ,    struct Theme_157 *  );
    struct env185 env;
};

struct env252 {
    struct env185 envinst185;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum CAllocator_10   idc258 (  ) {
    return ( CAllocator_10_CAllocator );
}

struct envunion261 {
    struct TextBuf_97  (*fun) (  struct env87*  ,    enum CAllocator_10  ,    struct Pos_29  );
    struct env87 env;
};

static  void *   cast_dash_ptr271 (    struct Line_12 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of272 (    struct Line_12 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Line_12 *   zeroed269 (  ) {
    struct Line_12 *  temp270;
    struct Line_12 *  x570 = (  temp270 );
    ( ( memset ) ( ( (  cast_dash_ptr271 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of272 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Line_12 *   null_dash_ptr268 (  ) {
    return ( (  zeroed269 ) ( ) );
}

static  struct Slice_11   empty267 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr268 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_9   mk266 (    enum CAllocator_10  al2032 ) {
    struct Slice_11  elements2033 = ( (  empty267 ) ( ) );
    return ( (struct List_9) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env276 {
    struct env6 envinst6;
    struct List_9 *  list2099;
};

struct envunion277 {
    enum Unit_8  (*fun) (  struct env276*  ,    struct Line_12  );
    struct env276 env;
};

struct ArrayIter_278 {
    struct Array_52  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_278   into_dash_iter280 (    struct Array_52  self2323 ) {
    return ( (struct ArrayIter_278) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_281 {
    enum {
        Maybe_281_None_t,
        Maybe_281_Just_t,
    } tag;
    union {
        struct {
            struct Line_12  field0;
        } Maybe_281_Just_s;
    } stuff;
};

static struct Maybe_281 Maybe_281_Just (  struct Line_12  field0 ) {
    return ( struct Maybe_281 ) { .tag = Maybe_281_Just_t, .stuff = { .Maybe_281_Just_s = { .field0 = field0 } } };
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_143   cmp283 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_288 {
    struct StrConcat_71  field0;
    int32_t  field1;
};

static struct StrConcat_288 StrConcat_288_StrConcat (  struct StrConcat_71  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_288 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_287 {
    struct StrConcat_288  field0;
    struct Char_65  field1;
};

static struct StrConcat_287 StrConcat_287_StrConcat (  struct StrConcat_288  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_287 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_291 {
    struct StrView_30  field0;
    struct StrConcat_287  field1;
};

static struct StrConcat_291 StrConcat_291_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_287  field1 ) {
    return ( struct StrConcat_291 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_290 {
    struct StrConcat_291  field0;
    struct Char_65  field1;
};

static struct StrConcat_290 StrConcat_290_StrConcat (  struct StrConcat_291  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_290 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32294 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_8   print_dash_str293 (    struct StrView_30  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32294 ) ( ( ( (  self1379 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1379 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str299 (    size_t  self1470 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1470 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str298 (    struct StrConcat_72  self1509 ) {
    struct StrConcat_72  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str299 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str297 (    struct StrConcat_71  self1509 ) {
    struct StrConcat_71  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str298 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str293 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str300 (    int32_t  self1446 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1446 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str296 (    struct StrConcat_288  self1509 ) {
    struct StrConcat_288  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str297 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str300 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

struct Scalar_304 {
    uint32_t  f_value;
};

struct CharDestructured_303 {
    enum {
        CharDestructured_303_Ref_t,
        CharDestructured_303_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } CharDestructured_303_Ref_s;
        struct {
            struct Scalar_304  field0;
        } CharDestructured_303_Scalar_s;
    } stuff;
};

static struct CharDestructured_303 CharDestructured_303_Ref (  struct Char_65  field0 ) {
    return ( struct CharDestructured_303 ) { .tag = CharDestructured_303_Ref_t, .stuff = { .CharDestructured_303_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_303 CharDestructured_303_Scalar (  struct Scalar_304  field0 ) {
    return ( struct CharDestructured_303 ) { .tag = CharDestructured_303_Scalar_t, .stuff = { .CharDestructured_303_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq306 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8308 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div309 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer307 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8308 ) ( (  op_dash_div309 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral310 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32311 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast312 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_303   destructure305 (    struct Char_65  c712 ) {
    if ( (  eq306 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer307 ) ( ( (  c712 ) .f_ptr ) ) ) , (  from_dash_integral310 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_303_Scalar ) ( ( (struct Scalar_304) { .f_value = ( (  size_dash_u32311 ) ( ( ( (  cast312 ) ( ( (  c712 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_303_Ref ) ( (  c712 ) ) );
    }
}

static  enum Unit_8   printf_dash_char302 (    struct Char_65  c758 ) {
    struct CharDestructured_303  dref759 = ( (  destructure305 ) ( (  c758 ) ) );
    if ( dref759.tag == CharDestructured_303_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32294 ) ( ( ( dref759 .stuff .CharDestructured_303_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref759 .stuff .CharDestructured_303_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref759.tag == CharDestructured_303_Scalar_t ) {
            if ( (  cmp155 ( ( ( dref759 .stuff .CharDestructured_303_Scalar_s .field0 ) .f_value ) , (  from_dash_integral150 ( 127 ) ) ) == 2 ) ) {
                const char*  temp313 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp313);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8129 ) ( ( ( dref759 .stuff .CharDestructured_303_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str301 (    struct Char_65  self1410 ) {
    ( (  printf_dash_char302 ) ( (  self1410 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str295 (    struct StrConcat_287  self1509 ) {
    struct StrConcat_287  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str296 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str292 (    struct StrConcat_291  self1509 ) {
    struct StrConcat_291  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str295 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str289 (    struct StrConcat_290  self1509 ) {
    struct StrConcat_290  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str292 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  uint8_t *   cast315 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_143   cmp318 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  size_t   next_dash_char317 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp318 ( (  pb689 ) , (  from_dash_integral310 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp318 ( (  pb689 ) , (  from_dash_integral310 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp318 ( (  pb689 ) , (  from_dash_integral310 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp318 ( (  pb689 ) , (  from_dash_integral310 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp319 = ( (  from_dash_string57 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp319);
                    exit ( 1 );
                    ( Unit_8_Unit );
                }
            }
        }
    }
}

static  struct Char_65   scan_dash_from_dash_mem316 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char317 ) ( (  p700 ) ) );
    if ( (  cmp283 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp320 = ( (  from_dash_string57 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp320);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (struct Char_65) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_65   from_dash_charlike314 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast315 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem316 ) ( (  ptr707 ) ) );
}

static  enum Unit_8   panic286 (    struct StrConcat_287  errmsg1713 ) {
    ( (  print_dash_str289 ) ( ( ( StrConcat_290_StrConcat ) ( ( ( StrConcat_291_StrConcat ) ( ( (  from_dash_string183 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Line_12 *   cast_dash_ptr321 (    struct Array_52 *  p359 ) {
    return ( (struct Line_12 * ) (  p359 ) );
}

static  int64_t   op_dash_mul323 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct Line_12 *   offset_dash_ptr322 (    struct Line_12 *  x338 ,    int64_t  count340 ) {
    struct Line_12  temp324;
    return ( (struct Line_12 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp324 ) ) ) ) ) ) ) ) );
}

static  struct Line_12 *   get_dash_ptr285 (    struct Array_52 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp283 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2254 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic286 ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  p2255 = ( ( (  cast_dash_ptr321 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr322 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct Line_12   get284 (    struct Array_52 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr285 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  size_t   op_dash_add325 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_281   next282 (    struct ArrayIter_278 *  self2330 ) {
    if ( (  cmp283 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_281) { .tag = Maybe_281_None_t } );
    }
    struct Line_12  e2332 = ( (  get284 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add325 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_281_Just ) ( (  e2332 ) ) );
}

static  enum Unit_8   for_dash_each275 (    struct Array_52  iterable1074 ,   struct envunion277  fun1076 ) {
    struct ArrayIter_278  temp279 = ( (  into_dash_iter280 ) ( (  iterable1074 ) ) );
    struct ArrayIter_278 *  it1077 = ( &temp279 );
    while ( ( true ) ) {
        struct Maybe_281  dref1078 = ( (  next282 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_281_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_281_Just_t ) {
                struct envunion277  temp326 = (  fun1076 );
                ( temp326.fun ( &temp326.env ,  ( dref1078 .stuff .Maybe_281_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  bool   eq332 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_335 {
    size_t  f_size;
};

static  struct TypeSize_335   get_dash_typesize334 (  ) {
    struct Line_12  temp336;
    return ( (struct TypeSize_335) { .f_size = ( sizeof( ( (  temp336 ) ) ) ) } );
}

static  struct Line_12 *   cast_dash_ptr337 (    void *  p359 ) {
    return ( (struct Line_12 * ) (  p359 ) );
}

static  size_t   op_dash_mul338 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_11   allocate333 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize334 ) ( ) ) ) .f_size );
    struct Line_12 *  ptr1958 = ( (  cast_dash_ptr337 ) ( ( ( malloc ) ( (  op_dash_mul338 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env339 {
    struct Slice_11  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_341 {
    struct Line_12  field0;
    int32_t  field1;
};

static struct Tuple2_341 Tuple2_341_Tuple2 (  struct Line_12  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_341 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion340 {
    enum Unit_8  (*fun) (  struct env339*  ,    struct Tuple2_341  );
    struct env339 env;
};

struct StrConcat_347 {
    struct StrConcat_71  field0;
    size_t  field1;
};

static struct StrConcat_347 StrConcat_347_StrConcat (  struct StrConcat_71  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_347 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_346 {
    struct StrConcat_347  field0;
    struct Char_65  field1;
};

static struct StrConcat_346 StrConcat_346_StrConcat (  struct StrConcat_347  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_346 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_350 {
    struct StrView_30  field0;
    struct StrConcat_346  field1;
};

static struct StrConcat_350 StrConcat_350_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_346  field1 ) {
    return ( struct StrConcat_350 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_349 {
    struct StrConcat_350  field0;
    struct Char_65  field1;
};

static struct StrConcat_349 StrConcat_349_StrConcat (  struct StrConcat_350  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_349 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str353 (    struct StrConcat_347  self1509 ) {
    struct StrConcat_347  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str297 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str299 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str352 (    struct StrConcat_346  self1509 ) {
    struct StrConcat_346  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str353 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str351 (    struct StrConcat_350  self1509 ) {
    struct StrConcat_350  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str352 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str348 (    struct StrConcat_349  self1509 ) {
    struct StrConcat_349  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str351 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic345 (    struct StrConcat_346  errmsg1713 ) {
    ( (  print_dash_str348 ) ( ( ( StrConcat_349_StrConcat ) ( ( ( StrConcat_350_StrConcat ) ( ( (  from_dash_string183 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  int64_t   size_dash_i64354 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct Line_12 *   get_dash_ptr344 (    struct Slice_11  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp283 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Line_12 *  elem_dash_ptr1761 = ( (  offset_dash_ptr322 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set343 (    struct Slice_11  slice1775 ,    size_t  i1777 ,    struct Line_12  x1779 ) {
    struct Line_12 *  ep1780 = ( (  get_dash_ptr344 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  size_t   i32_dash_size355 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_8   lam342 (   struct env339* env ,    struct Tuple2_341  dref2044 ) {
    return ( (  set343 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size355 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct SliceIter_358 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_359 {
    int32_t  f_from;
};

struct Zip_357 {
    struct SliceIter_358  f_left_dash_it;
    struct FromIter_359  f_right_dash_it;
};

static  struct Zip_357   into_dash_iter361 (    struct Zip_357  self911 ) {
    return (  self911 );
}

struct Maybe_362 {
    enum {
        Maybe_362_None_t,
        Maybe_362_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_341  field0;
        } Maybe_362_Just_s;
    } stuff;
};

static struct Maybe_362 Maybe_362_Just (  struct Tuple2_341  field0 ) {
    return ( struct Maybe_362 ) { .tag = Maybe_362_Just_t, .stuff = { .Maybe_362_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_281   next364 (    struct SliceIter_358 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp283 ( (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_281) { .tag = Maybe_281_None_t } );
    }
    struct Line_12  elem1831 = ( * ( (  offset_dash_ptr322 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_281_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_140   next365 (    struct FromIter_359 *  dref905 ) {
    int32_t  v907 = ( ( (* dref905 ) ) .f_from );
    (* dref905 ) .f_from = (  op_dash_add144 ( ( ( (* dref905 ) ) .f_from ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( ( Maybe_140_Just ) ( (  v907 ) ) );
}

static  struct Maybe_362   next363 (    struct Zip_357 *  self914 ) {
    struct Zip_357  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_281  dref916 = ( (  next364 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_281_None_t ) {
            return ( (struct Maybe_362) { .tag = Maybe_362_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_281_Just_t ) {
                struct Maybe_140  dref918 = ( (  next365 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_140_None_t ) {
                    return ( (struct Maybe_362) { .tag = Maybe_362_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_140_Just_t ) {
                        ( (  next364 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next365 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_362_Just ) ( ( ( Tuple2_341_Tuple2 ) ( ( dref916 .stuff .Maybe_281_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each356 (    struct Zip_357  iterable1074 ,   struct envunion340  fun1076 ) {
    struct Zip_357  temp360 = ( (  into_dash_iter361 ) ( (  iterable1074 ) ) );
    struct Zip_357 *  it1077 = ( &temp360 );
    while ( ( true ) ) {
        struct Maybe_362  dref1078 = ( (  next363 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_362_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_362_Just_t ) {
                struct envunion340  temp366 = (  fun1076 );
                ( temp366.fun ( &temp366.env ,  ( dref1078 .stuff .Maybe_362_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_358   into_dash_iter368 (    struct Slice_11  self1823 ) {
    return ( (struct SliceIter_358) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_359   into_dash_iter369 (    struct FromIter_359  it903 ) {
    return (  it903 );
}

static  struct Zip_357   zip367 (    struct Slice_11  left922 ,    struct FromIter_359  right924 ) {
    struct SliceIter_358  left_dash_it925 = ( (  into_dash_iter368 ) ( (  left922 ) ) );
    struct FromIter_359  right_dash_it926 = ( (  into_dash_iter369 ) ( (  right924 ) ) );
    return ( (struct Zip_357) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct FromIter_359   from370 (    int32_t  f900 ) {
    return ( (struct FromIter_359) { .f_from = (  f900 ) } );
}

static  void *   cast_dash_ptr372 (    struct Line_12 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free371 (    enum CAllocator_10  dref1960 ,    struct Slice_11  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr372 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full331 (   struct env1* env ,    struct List_9 *  list2042 ) {
    if ( (  eq332 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate333 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq332 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2043 = ( (  allocate333 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul338 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env339 envinst339 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion340  fun2047 = ( (struct envunion340){ .fun = (  enum Unit_8  (*) (  struct env339*  ,    struct Tuple2_341  ) )lam342 , .env =  envinst339 } );
            ( (  for_dash_each356 ) ( ( (  zip367 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free371 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add329 (   struct env6* env ,    struct List_9 *  list2050 ,    struct Line_12  elem2052 ) {
    struct envunion7  temp330 = ( (struct envunion7){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full331 , .env =  env->envinst1 } );
    ( temp330.fun ( &temp330.env ,  (  list2050 ) ) );
    ( (  set343 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add325 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam327 (   struct env276* env ,    struct Line_12  x2103 ) {
    struct envunion47  temp328 = ( (struct envunion47){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add329 , .env =  env->envinst6 } );
    return ( temp328.fun ( &temp328.env ,  ( env->list2099 ) ,  (  x2103 ) ) );
}

static  enum Unit_8   add_dash_all274 (   struct env46* env ,    struct List_9 *  list2099 ,    struct Array_52  it2101 ) {
    struct env276 envinst276 = {
        .envinst6 = env->envinst6 ,
        .list2099 =  list2099 ,
    };
    ( (  for_dash_each275 ) ( (  it2101 ) ,  ( (struct envunion277){ .fun = (  enum Unit_8  (*) (  struct env276*  ,    struct Line_12  ) )lam327 , .env =  envinst276 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_9   from_dash_iter264 (   struct env50* env ,    struct Array_52  iter2140 ,    enum CAllocator_10  al2142 ) {
    struct List_9  temp265 = ( (  mk266 ) ( (  al2142 ) ) );
    struct List_9 *  list2143 = ( &temp265 );
    struct envunion51  temp273 = ( (struct envunion51){ .fun = (  enum Unit_8  (*) (  struct env46*  ,    struct List_9 *  ,    struct Array_52  ) )add_dash_all274 , .env =  env->envinst46 } );
    ( temp273.fun ( &temp273.env ,  (  list2143 ) ,  (  iter2140 ) ) );
    return ( * (  list2143 ) );
}

static  struct Array_52   from_dash_listlike373 (    struct Array_52  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr380 (    struct Highlight_17 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of381 (    struct Highlight_17 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Highlight_17 *   zeroed378 (  ) {
    struct Highlight_17 *  temp379;
    struct Highlight_17 *  x570 = (  temp379 );
    ( ( memset ) ( ( (  cast_dash_ptr380 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of381 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Highlight_17 *   null_dash_ptr377 (  ) {
    return ( (  zeroed378 ) ( ) );
}

static  struct Slice_16   empty376 (  ) {
    return ( (struct Slice_16) { .f_ptr = ( (  null_dash_ptr377 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_15   mk375 (    enum CAllocator_10  al2032 ) {
    struct Slice_16  elements2033 = ( (  empty376 ) ( ) );
    return ( (struct List_15) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Line_12   mk_dash_line374 (    struct List_13  initial3703 ) {
    return ( (struct Line_12) { .f_line = (  initial3703 ) , .f_invalidated = ( true ) , .f_highlights = ( (  mk375 ) ( ( (  initial3703 ) .f_al ) ) ) } );
}

static  void *   cast_dash_ptr387 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of388 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed385 (  ) {
    uint8_t *  temp386;
    uint8_t *  x570 = (  temp386 );
    ( ( memset ) ( ( (  cast_dash_ptr387 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of388 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr384 (  ) {
    return ( (  zeroed385 ) ( ) );
}

static  struct Slice_14   empty383 (  ) {
    return ( (struct Slice_14) { .f_ptr = ( (  null_dash_ptr384 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_13   mk382 (    enum CAllocator_10  al2032 ) {
    struct Slice_14  elements2033 = ( (  empty383 ) ( ) );
    return ( (struct List_13) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr395 (    struct Changeset_25 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of396 (    struct Changeset_25 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Changeset_25 *   zeroed393 (  ) {
    struct Changeset_25 *  temp394;
    struct Changeset_25 *  x570 = (  temp394 );
    ( ( memset ) ( ( (  cast_dash_ptr395 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of396 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Changeset_25 *   null_dash_ptr392 (  ) {
    return ( (  zeroed393 ) ( ) );
}

static  struct Slice_24   empty391 (  ) {
    return ( (struct Slice_24) { .f_ptr = ( (  null_dash_ptr392 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_23   mk390 (    enum CAllocator_10  al2032 ) {
    struct Slice_24  elements2033 = ( (  empty391 ) ( ) );
    return ( (struct List_23) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_98   mk_dash_actions389 (    enum CAllocator_10  al3691 ) {
    return ( (struct Actions_98) { .f_list = ( (  mk390 ) ( (  al3691 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) , .f_input_dash_changeset = ( ChangesetInputType_99_NoChangeset ) } );
}

static  struct TextBuf_97   mk262 (   struct env87* env ,    enum CAllocator_10  al3710 ,    struct Pos_29  cursor_dash_pos3712 ) {
    struct envunion88  temp263 = ( (struct envunion88){ .fun = (  struct List_9  (*) (  struct env50*  ,    struct Array_52  ,    enum CAllocator_10  ) )from_dash_iter264 , .env =  env->envinst50 } );
    return ( (struct TextBuf_97) { .f_al = (  al3710 ) , .f_buf = ( temp263.fun ( &temp263.env ,  ( (  from_dash_listlike373 ) ( ( (struct Array_52) { ._arr = { ( (  mk_dash_line374 ) ( ( (  mk382 ) ( (  al3710 ) ) ) ) ) } } ) ) ) ,  (  al3710 ) ) ) , .f_actions = ( (  mk_dash_actions389 ) ( (  al3710 ) ) ) } );
}

static  struct Pos_29   mk397 (    int32_t  line3632 ,    int32_t  bi3634 ) {
    return ( (struct Pos_29) { .f_line = (  line3632 ) , .f_bi = (  bi3634 ) } );
}

struct Slice_398 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr400 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp401;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp401 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral402 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub403 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_398   get399 (  ) {
    return ( (struct Slice_398) { .f_ptr = ( (  offset_dash_ptr400 ) ( ( _global_argv ) ,  (  from_dash_integral402 ( 1 ) ) ) ) , .f_count = (  op_dash_sub403 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_407 {
    enum {
        Maybe_407_None_t,
        Maybe_407_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_407_Just_s;
    } stuff;
};

static struct Maybe_407 Maybe_407_Just (  const char*  field0 ) {
    return ( struct Maybe_407 ) { .tag = Maybe_407_Just_t, .stuff = { .Maybe_407_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined408 (  ) {
    const char*  temp409;
    return (  temp409 );
}

static  const char*   or_dash_fail406 (    struct Maybe_407  x1726 ,    struct StrConcat_346  errmsg1728 ) {
    struct Maybe_407  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_407_None_t ) {
        ( (  panic345 ) ( (  errmsg1728 ) ) );
        return ( (  undefined408 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_407_Just_t ) {
            return ( dref1729 .stuff .Maybe_407_Just_s .field0 );
        }
    }
}

static  struct Maybe_407   try_dash_get410 (    struct Slice_398  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp283 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_407) { .tag = Maybe_407_None_t } );
    }
    const char* *  elem_dash_ptr1767 = ( (  offset_dash_ptr400 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_407_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  const char*   get405 (    struct Slice_398  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail406 ) ( ( (  try_dash_get410 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get404 (    struct Slice_398  self1868 ,    size_t  idx1870 ) {
    return ( (  get405 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

struct envunion412 {
    enum Unit_8  (*fun) (  struct env93*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  );
    struct env93 env;
};

static  enum Ordering_143   cmp415 (    struct Pos_29  l3625 ,    struct Pos_29  r3627 ) {
    enum Ordering_143  dref3628 = ( (  cmp142 ) ( ( (  l3625 ) .f_line ) ,  ( (  r3627 ) .f_line ) ) );
    switch (  dref3628 ) {
        case Ordering_143_EQ : {
            return ( (  cmp142 ) ( ( (  l3625 ) .f_bi ) ,  ( (  r3627 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_143  els3629 =  dref3628;
            return (  els3629 );
            break;
        }
    }
}

static  struct Pos_29   min414 (    struct Pos_29  l1236 ,    struct Pos_29  r1238 ) {
    if ( (  cmp415 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_29   max416 (    struct Pos_29  l1315 ,    struct Pos_29  r1317 ) {
    if ( (  cmp415 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   eq418 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq417 (    struct Pos_29  l3620 ,    struct Pos_29  r3622 ) {
    return ( (  eq418 ( ( (  l3620 ) .f_line ) , ( (  r3622 ) .f_line ) ) ) && (  eq418 ( ( (  l3620 ) .f_bi ) , ( (  r3622 ) .f_bi ) ) ) );
}

static  size_t   size419 (    struct List_9 *  l2134 ) {
    return ( ( * (  l2134 ) ) .f_count );
}

struct envunion422 {
    int32_t  (*fun) (  struct env89*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct StrView_30  );
    struct env89 env;
};

static  struct Line_12 *   get_dash_ptr425 (    struct List_9 *  list2002 ,    size_t  i2004 ) {
    if ( ( (  cmp283 ( (  i2004 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2004 ) , ( ( * (  list2002 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2004 ) ) ) ,  ( (  from_dash_string183 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2002 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr344 ) ( ( ( * (  list2002 ) ) .f_elements ) ,  (  i2004 ) ) );
}

static  struct Line_12   get424 (    struct List_9 *  list2012 ,    size_t  i2014 ) {
    return ( * ( (  get_dash_ptr425 ) ( (  list2012 ) ,  (  i2014 ) ) ) );
}

static  uint8_t *   offset_dash_ptr428 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp429;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp429 ) ) ) ) ) ) ) ) );
}

static  size_t   min430 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp283 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_14   subslice427 (    struct Slice_14  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    uint8_t *  begin_dash_ptr1788 = ( (  offset_dash_ptr428 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp283 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp283 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub403 ( ( (  min430 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct Slice_14   from426 (    struct Slice_14  slice1792 ,    size_t  from1794 ) {
    return ( (  subslice427 ) ( (  slice1792 ) ,  (  from1794 ) ,  ( (  slice1792 ) .f_count ) ) );
}

static  struct Slice_14   to_dash_slice431 (    struct List_13  l2127 ) {
    uint8_t *  ptr2128 = ( ( (  l2127 ) .f_elements ) .f_ptr );
    return ( (struct Slice_14) { .f_ptr = (  ptr2128 ) , .f_count = ( (  l2127 ) .f_count ) } );
}

static  enum Unit_8   set432 (    struct List_9 *  list2022 ,    size_t  i2024 ,    struct Line_12  elem2026 ) {
    if ( ( (  cmp283 ( (  i2024 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2024 ) , ( ( * (  list2022 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2024 ) ) ) ,  ( (  from_dash_string183 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2022 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set343 ) ( ( ( * (  list2022 ) ) .f_elements ) ,  (  i2024 ) ,  (  elem2026 ) ) );
    return ( Unit_8_Unit );
}

struct env439 {
    struct env19 envinst19;
    struct List_13 *  list2099;
};

struct envunion440 {
    enum Unit_8  (*fun) (  struct env439*  ,    uint8_t  );
    struct env439 env;
};

struct SliceIter_441 {
    struct Slice_14  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_441   into_dash_iter443 (    struct Slice_14  self1823 ) {
    return ( (struct SliceIter_441) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_444 {
    enum {
        Maybe_444_None_t,
        Maybe_444_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_444_Just_s;
    } stuff;
};

static struct Maybe_444 Maybe_444_Just (  uint8_t  field0 ) {
    return ( struct Maybe_444 ) { .tag = Maybe_444_Just_t, .stuff = { .Maybe_444_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_444   next445 (    struct SliceIter_441 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp283 ( (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_444) { .tag = Maybe_444_None_t } );
    }
    uint8_t  elem1831 = ( * ( (  offset_dash_ptr428 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_444_Just ) ( (  elem1831 ) ) );
}

static  enum Unit_8   for_dash_each438 (    struct Slice_14  iterable1074 ,   struct envunion440  fun1076 ) {
    struct SliceIter_441  temp442 = ( (  into_dash_iter443 ) ( (  iterable1074 ) ) );
    struct SliceIter_441 *  it1077 = ( &temp442 );
    while ( ( true ) ) {
        struct Maybe_444  dref1078 = ( (  next445 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_444_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_444_Just_t ) {
                struct envunion440  temp446 = (  fun1076 );
                ( temp446.fun ( &temp446.env ,  ( dref1078 .stuff .Maybe_444_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

struct TypeSize_454 {
    size_t  f_size;
};

static  struct TypeSize_454   get_dash_typesize453 (  ) {
    uint8_t  temp455;
    return ( (struct TypeSize_454) { .f_size = ( sizeof( ( (  temp455 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr456 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_14   allocate452 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize453 ) ( ) ) ) .f_size );
    uint8_t *  ptr1958 = ( (  cast_dash_ptr456 ) ( ( ( malloc ) ( (  op_dash_mul338 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_14) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env457 {
    struct Slice_14  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_459 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_459 Tuple2_459_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_459 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion458 {
    enum Unit_8  (*fun) (  struct env457*  ,    struct Tuple2_459  );
    struct env457 env;
};

static  uint8_t *   get_dash_ptr462 (    struct Slice_14  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp283 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1761 = ( (  offset_dash_ptr428 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set461 (    struct Slice_14  slice1775 ,    size_t  i1777 ,    uint8_t  x1779 ) {
    uint8_t *  ep1780 = ( (  get_dash_ptr462 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam460 (   struct env457* env ,    struct Tuple2_459  dref2044 ) {
    return ( (  set461 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size355 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct Zip_464 {
    struct SliceIter_441  f_left_dash_it;
    struct FromIter_359  f_right_dash_it;
};

static  struct Zip_464   into_dash_iter466 (    struct Zip_464  self911 ) {
    return (  self911 );
}

struct Maybe_467 {
    enum {
        Maybe_467_None_t,
        Maybe_467_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_459  field0;
        } Maybe_467_Just_s;
    } stuff;
};

static struct Maybe_467 Maybe_467_Just (  struct Tuple2_459  field0 ) {
    return ( struct Maybe_467 ) { .tag = Maybe_467_Just_t, .stuff = { .Maybe_467_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_467   next468 (    struct Zip_464 *  self914 ) {
    struct Zip_464  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_444  dref916 = ( (  next445 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_444_None_t ) {
            return ( (struct Maybe_467) { .tag = Maybe_467_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_444_Just_t ) {
                struct Maybe_140  dref918 = ( (  next365 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_140_None_t ) {
                    return ( (struct Maybe_467) { .tag = Maybe_467_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_140_Just_t ) {
                        ( (  next445 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next365 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_467_Just ) ( ( ( Tuple2_459_Tuple2 ) ( ( dref916 .stuff .Maybe_444_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each463 (    struct Zip_464  iterable1074 ,   struct envunion458  fun1076 ) {
    struct Zip_464  temp465 = ( (  into_dash_iter466 ) ( (  iterable1074 ) ) );
    struct Zip_464 *  it1077 = ( &temp465 );
    while ( ( true ) ) {
        struct Maybe_467  dref1078 = ( (  next468 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_467_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_467_Just_t ) {
                struct envunion458  temp469 = (  fun1076 );
                ( temp469.fun ( &temp469.env ,  ( dref1078 .stuff .Maybe_467_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_464   zip470 (    struct Slice_14  left922 ,    struct FromIter_359  right924 ) {
    struct SliceIter_441  left_dash_it925 = ( (  into_dash_iter443 ) ( (  left922 ) ) );
    struct FromIter_359  right_dash_it926 = ( (  into_dash_iter369 ) ( (  right924 ) ) );
    return ( (struct Zip_464) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr472 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free471 (    enum CAllocator_10  dref1960 ,    struct Slice_14  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr472 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full451 (   struct env2* env ,    struct List_13 *  list2042 ) {
    if ( (  eq332 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate452 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq332 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_14  new_dash_slice2043 = ( (  allocate452 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul338 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env457 envinst457 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion458  fun2047 = ( (struct envunion458){ .fun = (  enum Unit_8  (*) (  struct env457*  ,    struct Tuple2_459  ) )lam460 , .env =  envinst457 } );
            ( (  for_dash_each463 ) ( ( (  zip470 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free471 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add449 (   struct env19* env ,    struct List_13 *  list2050 ,    uint8_t  elem2052 ) {
    struct envunion20  temp450 = ( (struct envunion20){ .fun = (  enum Unit_8  (*) (  struct env2*  ,    struct List_13 *  ) )grow_dash_if_dash_full451 , .env =  env->envinst2 } );
    ( temp450.fun ( &temp450.env ,  (  list2050 ) ) );
    ( (  set461 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add325 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam447 (   struct env439* env ,    uint8_t  x2103 ) {
    struct envunion49  temp448 = ( (struct envunion49){ .fun = (  enum Unit_8  (*) (  struct env19*  ,    struct List_13 *  ,    uint8_t  ) )add449 , .env =  env->envinst19 } );
    return ( temp448.fun ( &temp448.env ,  ( env->list2099 ) ,  (  x2103 ) ) );
}

static  enum Unit_8   add_dash_all437 (   struct env48* env ,    struct List_13 *  list2099 ,    struct Slice_14  it2101 ) {
    struct env439 envinst439 = {
        .envinst19 = env->envinst19 ,
        .list2099 =  list2099 ,
    };
    ( (  for_dash_each438 ) ( (  it2101 ) ,  ( (struct envunion440){ .fun = (  enum Unit_8  (*) (  struct env439*  ,    uint8_t  ) )lam447 , .env =  envinst439 } ) ) );
    return ( Unit_8_Unit );
}

static  struct List_13   from_dash_iter434 (   struct env53* env ,    struct Slice_14  iter2140 ,    enum CAllocator_10  al2142 ) {
    struct List_13  temp435 = ( (  mk382 ) ( (  al2142 ) ) );
    struct List_13 *  list2143 = ( &temp435 );
    struct envunion54  temp436 = ( (struct envunion54){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all437 , .env =  env->envinst48 } );
    ( temp436.fun ( &temp436.env ,  (  list2143 ) ,  (  iter2140 ) ) );
    return ( * (  list2143 ) );
}

static  struct StrView_30   or_dash_else474 (    struct Maybe_229  self1733 ,    struct StrView_30  alt1735 ) {
    struct Maybe_229  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_229_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_229_Just_t ) {
            return ( dref1736 .stuff .Maybe_229_Just_s .field0 );
        }
    }
}

struct LineIter_476 {
    struct StrView_30  f_og;
    size_t  f_last;
};

static  uint8_t   undefined480 (  ) {
    uint8_t  temp481;
    return (  temp481 );
}

static  uint8_t   or_dash_fail479 (    struct Maybe_444  x1726 ,    struct StrConcat_346  errmsg1728 ) {
    struct Maybe_444  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_444_None_t ) {
        ( (  panic345 ) ( (  errmsg1728 ) ) );
        return ( (  undefined480 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_444_Just_t ) {
            return ( dref1729 .stuff .Maybe_444_Just_s .field0 );
        }
    }
}

static  struct Maybe_444   try_dash_get482 (    struct Slice_14  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp283 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_444) { .tag = Maybe_444_None_t } );
    }
    uint8_t *  elem_dash_ptr1767 = ( (  offset_dash_ptr428 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_444_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  uint8_t   get478 (    struct Slice_14  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail479 ) ( ( (  try_dash_get482 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8483 (    struct Char_65  c718 ) {
    struct CharDestructured_303  dref719 = ( (  destructure305 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_303_Ref_t ) {
        return ( * ( ( dref719 .stuff .CharDestructured_303_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref719.tag == CharDestructured_303_Scalar_t ) {
            return ( (  u32_dash_u8129 ) ( ( ( dref719 .stuff .CharDestructured_303_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_30   byte_dash_substr484 (    struct StrView_30  s2184 ,    size_t  from2186 ,    size_t  to2188 ) {
    return ( (struct StrView_30) { .f_contents = ( (  subslice427 ) ( ( (  s2184 ) .f_contents ) ,  (  from2186 ) ,  (  to2188 ) ) ) } );
}

static  struct Maybe_229   next477 (    struct LineIter_476 *  self2430 ) {
    if ( (  cmp283 ( ( ( * (  self2430 ) ) .f_last ) , ( ( ( ( * (  self2430 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_229) { .tag = Maybe_229_None_t } );
    }
    size_t  i2431 = ( ( * (  self2430 ) ) .f_last );
    while ( ( (  cmp283 ( (  i2431 ) , ( ( ( ( * (  self2430 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq306 ( ( (  get478 ) ( ( ( ( * (  self2430 ) ) .f_og ) .f_contents ) ,  (  i2431 ) ) ) , ( (  char_dash_u8483 ) ( ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2431 = (  op_dash_add325 ( (  i2431 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_30  line2432 = ( (  byte_dash_substr484 ) ( ( ( * (  self2430 ) ) .f_og ) ,  ( ( * (  self2430 ) ) .f_last ) ,  (  i2431 ) ) );
    if ( (  cmp283 ( (  i2431 ) , ( ( ( ( * (  self2430 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2431 = (  op_dash_add325 ( (  i2431 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2430 ) .f_last = (  i2431 );
    return ( ( Maybe_229_Just ) ( (  line2432 ) ) );
}

static  struct LineIter_476   into_dash_iter486 (    struct LineIter_476  self2427 ) {
    return (  self2427 );
}

static  struct Maybe_229   head475 (    struct LineIter_476  it1142 ) {
    struct LineIter_476  temp485 = ( (  into_dash_iter486 ) ( (  it1142 ) ) );
    return ( (  next477 ) ( ( &temp485 ) ) );
}

static  struct LineIter_476   lines487 (    struct StrView_30  s2424 ) {
    return ( (struct LineIter_476) { .f_og = (  s2424 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env492 {
    ;
    struct Char_65  c2223;
};

struct envunion493 {
    bool  (*fun) (  struct env492*  ,    struct Char_65  );
    struct env492 env;
};

struct SplitIter_491 {
    struct StrView_30  f_og;
    size_t  f_last;
    struct envunion493  f_fun;
};

struct Drop_490 {
    struct SplitIter_491  field0;
    size_t  field1;
};

static struct Drop_490 Drop_490_Drop (  struct SplitIter_491  field0 ,  size_t  field1 ) {
    return ( struct Drop_490 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_489 {
    struct Drop_490  f_left_dash_it;
    struct FromIter_359  f_right_dash_it;
};

static  struct Zip_489   into_dash_iter494 (    struct Zip_489  self911 ) {
    return (  self911 );
}

static  struct Drop_490   into_dash_iter496 (    struct Drop_490  self845 ) {
    return (  self845 );
}

static  struct Zip_489   zip495 (    struct Drop_490  left922 ,    struct FromIter_359  right924 ) {
    struct Drop_490  left_dash_it925 = ( (  into_dash_iter496 ) ( (  left922 ) ) );
    struct FromIter_359  right_dash_it926 = ( (  into_dash_iter369 ) ( (  right924 ) ) );
    return ( (struct Zip_489) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_491   into_dash_iter498 (    struct SplitIter_491  self2228 ) {
    return (  self2228 );
}

static  struct Drop_490   drop497 (    struct SplitIter_491  iterable852 ,    size_t  i854 ) {
    struct SplitIter_491  it855 = ( (  into_dash_iter498 ) ( (  iterable852 ) ) );
    return ( ( Drop_490_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_491   split_dash_by_dash_filter500 (    struct StrView_30  s2216 ,   struct envunion493  fun2218 ) {
    return ( (struct SplitIter_491) { .f_og = (  s2216 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2218 ) } );
}

struct Tuple2_503 {
    struct CharDestructured_303  field0;
    struct CharDestructured_303  field1;
};

static struct Tuple2_503 Tuple2_503_Tuple2 (  struct CharDestructured_303  field0 ,  struct CharDestructured_303  field1 ) {
    return ( struct Tuple2_503 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add504 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq506 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq505 (    struct Scalar_304  l724 ,    struct Scalar_304  r726 ) {
    return (  eq506 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq502 (    struct Char_65  l729 ,    struct Char_65  r731 ) {
    if ( ( !  eq332 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_503  dref732 = ( ( Tuple2_503_Tuple2 ) ( ( (  destructure305 ) ( (  l729 ) ) ) ,  ( (  destructure305 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_303_Ref_t && dref732 .field1.tag == CharDestructured_303_Ref_t ) {
        int64_t  i735 = (  from_dash_integral402 ( 0 ) );
        while ( (  cmp283 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_303_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq306 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_303_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_303_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add504 ( (  i735 ) , (  from_dash_integral402 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_303_Scalar_t && dref732 .field1.tag == CharDestructured_303_Scalar_t ) {
            return (  eq505 ( ( dref732 .field0 .stuff .CharDestructured_303_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_303_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref732 .field0.tag == CharDestructured_303_Scalar_t && dref732 .field1.tag == CharDestructured_303_Ref_t ) {
                return (  eq306 ( ( (  u32_dash_u8129 ) ( ( ( dref732 .field0 .stuff .CharDestructured_303_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field1 .stuff .CharDestructured_303_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref732 .field0.tag == CharDestructured_303_Ref_t && dref732 .field1.tag == CharDestructured_303_Scalar_t ) {
                    return (  eq306 ( ( (  u32_dash_u8129 ) ( ( ( dref732 .field1 .stuff .CharDestructured_303_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field0 .stuff .CharDestructured_303_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam501 (   struct env492* env ,    struct Char_65  cc2225 ) {
    return (  eq502 ( (  cc2225 ) , ( env->c2223 ) ) );
}

static  struct SplitIter_491   split_dash_by_dash_each499 (    struct StrView_30  s2221 ,    struct Char_65  c2223 ) {
    struct env492 envinst492 = {
        .c2223 =  c2223 ,
    };
    return ( (  split_dash_by_dash_filter500 ) ( (  s2221 ) ,  ( (struct envunion493){ .fun = (  bool  (*) (  struct env492*  ,    struct Char_65  ) )lam501 , .env =  envinst492 } ) ) );
}

struct Tuple2_509 {
    struct StrView_30  field0;
    int32_t  field1;
};

static struct Tuple2_509 Tuple2_509_Tuple2 (  struct StrView_30  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_509 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_508 {
    enum {
        Maybe_508_None_t,
        Maybe_508_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_509  field0;
        } Maybe_508_Just_s;
    } stuff;
};

static struct Maybe_508 Maybe_508_Just (  struct Tuple2_509  field0 ) {
    return ( struct Maybe_508 ) { .tag = Maybe_508_Just_t, .stuff = { .Maybe_508_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_229   next512 (    struct SplitIter_491 *  self2231 ) {
    if ( (  cmp283 ( ( ( * (  self2231 ) ) .f_last ) , ( ( ( ( * (  self2231 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_229) { .tag = Maybe_229_None_t } );
    }
    size_t  i2232 = ( ( * (  self2231 ) ) .f_last );
    while ( (  cmp283 ( (  i2232 ) , ( ( ( ( * (  self2231 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2233 = ( (  get_dash_ptr462 ) ( ( ( ( * (  self2231 ) ) .f_og ) .f_contents ) ,  (  i2232 ) ) );
        struct Char_65  c2234 = ( (  scan_dash_from_dash_mem316 ) ( (  ptr2233 ) ) );
        struct envunion493  temp513 = ( ( * (  self2231 ) ) .f_fun );
        if ( ( temp513.fun ( &temp513.env ,  (  c2234 ) ) ) ) {
            break;
        }
        i2232 = (  op_dash_add325 ( (  i2232 ) , ( (  next_dash_char317 ) ( (  ptr2233 ) ) ) ) );
    }
    struct StrView_30  line2235 = ( (  byte_dash_substr484 ) ( ( ( * (  self2231 ) ) .f_og ) ,  ( ( * (  self2231 ) ) .f_last ) ,  (  i2232 ) ) );
    i2232 = (  op_dash_add325 ( (  i2232 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2231 ) .f_last = (  i2232 );
    return ( ( Maybe_229_Just ) ( (  line2235 ) ) );
}

static  struct Maybe_229   next511 (    struct Drop_490 *  dref847 ) {
    while ( (  cmp283 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next512 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub403 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next512 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_508   next510 (    struct Zip_489 *  self914 ) {
    struct Zip_489  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_229  dref916 = ( (  next511 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_229_None_t ) {
            return ( (struct Maybe_508) { .tag = Maybe_508_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_229_Just_t ) {
                struct Maybe_140  dref918 = ( (  next365 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_140_None_t ) {
                    return ( (struct Maybe_508) { .tag = Maybe_508_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_140_Just_t ) {
                        ( (  next511 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next365 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_508_Just ) ( ( ( Tuple2_509_Tuple2 ) ( ( dref916 .stuff .Maybe_229_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion516 {
    struct List_13  (*fun) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  );
    struct env53 env;
};

static  enum Unit_8   insert518 (   struct env37* env ,    struct List_9 *  list2055 ,    size_t  i2057 ,    struct Line_12  elem2059 ) {
    if ( ( (  cmp283 ( (  i2057 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2057 ) , ( ( * (  list2055 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2057 ) ) ) ,  ( (  from_dash_string183 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2055 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq332 ( ( ( * (  list2055 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion38  temp519 = ( (struct envunion38){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add329 , .env =  env->envinst6 } );
        ( temp519.fun ( &temp519.env ,  (  list2055 ) ,  (  elem2059 ) ) );
        return ( Unit_8_Unit );
    }
    struct envunion39  temp520 = ( (struct envunion39){ .fun = (  enum Unit_8  (*) (  struct env1*  ,    struct List_9 *  ) )grow_dash_if_dash_full331 , .env =  env->envinst1 } );
    ( temp520.fun ( &temp520.env ,  (  list2055 ) ) );
    size_t  ii2060 = (  op_dash_sub403 ( ( ( * (  list2055 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp283 ( (  ii2060 ) , (  i2057 ) ) != 0 ) ) {
        ( (  set343 ) ( ( ( * (  list2055 ) ) .f_elements ) ,  (  op_dash_add325 ( (  ii2060 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get424 ) ( (  list2055 ) ,  (  ii2060 ) ) ) ) );
        if ( (  eq332 ( (  ii2060 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2060 = (  op_dash_sub403 ( (  ii2060 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set343 ) ( ( ( * (  list2055 ) ) .f_elements ) ,  (  i2057 ) ,  (  elem2059 ) ) );
    (*  list2055 ) .f_count = (  op_dash_add325 ( ( ( * (  list2055 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion522 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  enum Unit_8   free524 (    struct List_13 *  list2036 ) {
    ( (  free471 ) ( ( ( * (  list2036 ) ) .f_al ) ,  ( ( * (  list2036 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_line523 (    struct Line_12 *  line3706 ) {
    ( (  free524 ) ( ( & ( ( * (  line3706 ) ) .f_line ) ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   add_dash_to_dash_spot423 (   struct env89* env ,    struct TextBuf_97 *  self3744 ,    struct Pos_29  p3746 ,    struct StrView_30  bytes3748 ) {
    enum CAllocator_10  al3749 = ( ( ( * (  self3744 ) ) .f_buf ) .f_al );
    struct List_9 *  buf3750 = ( & ( ( * (  self3744 ) ) .f_buf ) );
    struct Line_12  extracted_dash_line_dash_buf3751 = ( (  get424 ) ( (  buf3750 ) ,  ( (  i32_dash_size355 ) ( ( (  p3746 ) .f_line ) ) ) ) );
    struct Slice_14  remaining3752 = ( (  from426 ) ( ( (  to_dash_slice431 ) ( ( (  extracted_dash_line_dash_buf3751 ) .f_line ) ) ) ,  ( (  i32_dash_size355 ) ( ( (  p3746 ) .f_bi ) ) ) ) );
    struct envunion90  temp433 = ( (struct envunion90){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter434 , .env =  env->envinst53 } );
    ( (  set432 ) ( (  buf3750 ) ,  ( (  i32_dash_size355 ) ( ( (  p3746 ) .f_line ) ) ) ,  ( (  mk_dash_line374 ) ( ( temp433.fun ( &temp433.env ,  ( (  subslice427 ) ( ( (  to_dash_slice431 ) ( ( (  extracted_dash_line_dash_buf3751 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size355 ) ( ( (  p3746 ) .f_bi ) ) ) ) ) ,  (  al3749 ) ) ) ) ) ) );
    struct Line_12 *  last_dash_line3753 = ( (  get_dash_ptr425 ) ( (  buf3750 ) ,  ( (  i32_dash_size355 ) ( ( (  p3746 ) .f_line ) ) ) ) );
    struct envunion92  temp473 = ( (struct envunion92){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all437 , .env =  env->envinst48 } );
    ( temp473.fun ( &temp473.env ,  ( & ( ( * (  last_dash_line3753 ) ) .f_line ) ) ,  ( ( (  or_dash_else474 ) ( ( (  head475 ) ( ( (  lines487 ) ( (  bytes3748 ) ) ) ) ) ,  ( (  from_dash_string183 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3754 = (  from_dash_integral56 ( 0 ) );
    struct Zip_489  temp488 =  into_dash_iter494 ( ( (  zip495 ) ( ( (  drop497 ) ( ( (  split_dash_by_dash_each499 ) ( (  bytes3748 ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_508  __cond507 =  next510 (&temp488);
        if (  __cond507 .tag == 0 ) {
            break;
        }
        struct Tuple2_509  dref3755 =  __cond507 .stuff .Maybe_508_Just_s .field0;
        struct envunion516  temp515 = ( (struct envunion516){ .fun = (  struct List_13  (*) (  struct env53*  ,    struct Slice_14  ,    enum CAllocator_10  ) )from_dash_iter434 , .env =  env->envinst53 } );
        struct Line_12  temp514 = ( (  mk_dash_line374 ) ( ( temp515.fun ( &temp515.env ,  ( ( dref3755 .field0 ) .f_contents ) ,  (  al3749 ) ) ) ) );
        struct Line_12 *  nuline3758 = ( &temp514 );
        size_t  next_dash_line3759 = ( (  i32_dash_size355 ) ( (  op_dash_add144 ( ( (  p3746 ) .f_line ) , ( dref3755 .field1 ) ) ) ) );
        struct envunion91  temp517 = ( (struct envunion91){ .fun = (  enum Unit_8  (*) (  struct env37*  ,    struct List_9 *  ,    size_t  ,    struct Line_12  ) )insert518 , .env =  env->envinst37 } );
        ( temp517.fun ( &temp517.env ,  (  buf3750 ) ,  (  next_dash_line3759 ) ,  ( * (  nuline3758 ) ) ) );
        last_dash_line3753 = ( (  get_dash_ptr425 ) ( (  buf3750 ) ,  (  next_dash_line3759 ) ) );
        lines_dash_added3754 = (  op_dash_add144 ( (  lines_dash_added3754 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    struct envunion522  temp521 = ( (struct envunion522){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all437 , .env =  env->envinst48 } );
    ( temp521.fun ( &temp521.env ,  ( & ( ( * (  last_dash_line3753 ) ) .f_line ) ) ,  (  remaining3752 ) ) );
    ( (  free_dash_line523 ) ( ( & (  extracted_dash_line_dash_buf3751 ) ) ) );
    return (  lines_dash_added3754 );
}

static  size_t   size525 (    struct List_13 *  l2134 ) {
    return ( ( * (  l2134 ) ) .f_count );
}

struct StrConcat_531 {
    struct StrConcat_72  field0;
    struct Char_65  field1;
};

static struct StrConcat_531 StrConcat_531_StrConcat (  struct StrConcat_72  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_531 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_530 {
    struct StrConcat_531  field0;
    size_t  field1;
};

static struct StrConcat_530 StrConcat_530_StrConcat (  struct StrConcat_531  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_530 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_529 {
    struct StrConcat_530  field0;
    struct Char_65  field1;
};

static struct StrConcat_529 StrConcat_529_StrConcat (  struct StrConcat_530  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_529 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_534 {
    struct StrView_30  field0;
    struct StrConcat_529  field1;
};

static struct StrConcat_534 StrConcat_534_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_529  field1 ) {
    return ( struct StrConcat_534 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_533 {
    struct StrConcat_534  field0;
    struct Char_65  field1;
};

static struct StrConcat_533 StrConcat_533_StrConcat (  struct StrConcat_534  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_533 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str538 (    struct StrConcat_531  self1509 ) {
    struct StrConcat_531  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str298 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str537 (    struct StrConcat_530  self1509 ) {
    struct StrConcat_530  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str538 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str299 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str536 (    struct StrConcat_529  self1509 ) {
    struct StrConcat_529  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str537 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str535 (    struct StrConcat_534  self1509 ) {
    struct StrConcat_534  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str536 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str532 (    struct StrConcat_533  self1509 ) {
    struct StrConcat_533  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str535 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic528 (    struct StrConcat_529  errmsg1713 ) {
    ( (  print_dash_str532 ) ( ( ( StrConcat_533_StrConcat ) ( ( ( StrConcat_534_StrConcat ) ( ( (  from_dash_string183 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct Drop_540 {
    struct Zip_464  field0;
    size_t  field1;
};

static struct Drop_540 Drop_540_Drop (  struct Zip_464  field0 ,  size_t  field1 ) {
    return ( struct Drop_540 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env541 {
    ;
    ;
    ;
    size_t  num_dash_elems2068;
    struct List_13 *  list2063;
};

struct envunion542 {
    enum Unit_8  (*fun) (  struct env541*  ,    struct Tuple2_459  );
    struct env541 env;
};

static  struct Drop_540   into_dash_iter544 (    struct Drop_540  self845 ) {
    return (  self845 );
}

static  struct Maybe_467   next545 (    struct Drop_540 *  dref847 ) {
    while ( (  cmp283 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next468 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub403 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next468 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each539 (    struct Drop_540  iterable1074 ,   struct envunion542  fun1076 ) {
    struct Drop_540  temp543 = ( (  into_dash_iter544 ) ( (  iterable1074 ) ) );
    struct Drop_540 *  it1077 = ( &temp543 );
    while ( ( true ) ) {
        struct Maybe_467  dref1078 = ( (  next545 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_467_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_467_Just_t ) {
                struct envunion542  temp546 = (  fun1076 );
                ( temp546.fun ( &temp546.env ,  ( dref1078 .stuff .Maybe_467_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_540   drop547 (    struct Zip_464  iterable852 ,    size_t  i854 ) {
    struct Zip_464  it855 = ( (  into_dash_iter466 ) ( (  iterable852 ) ) );
    return ( ( Drop_540_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_441   into_dash_iter549 (    struct List_13  self2029 ) {
    return ( (  into_dash_iter443 ) ( ( (  subslice427 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  struct Zip_464   zip548 (    struct List_13  left922 ,    struct FromIter_359  right924 ) {
    struct SliceIter_441  left_dash_it925 = ( (  into_dash_iter549 ) ( (  left922 ) ) );
    struct FromIter_359  right_dash_it926 = ( (  into_dash_iter369 ) ( (  right924 ) ) );
    return ( (struct Zip_464) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   set551 (    struct List_13 *  list2022 ,    size_t  i2024 ,    uint8_t  elem2026 ) {
    if ( ( (  cmp283 ( (  i2024 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2024 ) , ( ( * (  list2022 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2024 ) ) ) ,  ( (  from_dash_string183 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2022 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set461 ) ( ( ( * (  list2022 ) ) .f_elements ) ,  (  i2024 ) ,  (  elem2026 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam550 (   struct env541* env ,    struct Tuple2_459  dref2069 ) {
    return ( (  set551 ) ( ( env->list2063 ) ,  (  op_dash_sub403 ( ( (  i32_dash_size355 ) ( ( dref2069 .field1 ) ) ) , ( env->num_dash_elems2068 ) ) ) ,  ( dref2069 .field0 ) ) );
}

struct StrConcat_554 {
    struct StrConcat_347  field0;
    struct StrView_30  field1;
};

static struct StrConcat_554 StrConcat_554_StrConcat (  struct StrConcat_347  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_554 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_557 {
    struct StrView_30  field0;
    struct StrConcat_554  field1;
};

static struct StrConcat_557 StrConcat_557_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_554  field1 ) {
    return ( struct StrConcat_557 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_556 {
    struct StrConcat_557  field0;
    struct Char_65  field1;
};

static struct StrConcat_556 StrConcat_556_StrConcat (  struct StrConcat_557  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_556 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str559 (    struct StrConcat_554  self1509 ) {
    struct StrConcat_554  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str353 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str293 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str558 (    struct StrConcat_557  self1509 ) {
    struct StrConcat_557  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str559 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str555 (    struct StrConcat_556  self1509 ) {
    struct StrConcat_556  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str558 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic553 (    struct StrConcat_554  errmsg1713 ) {
    ( (  print_dash_str555 ) ( ( ( StrConcat_556_StrConcat ) ( ( ( StrConcat_557_StrConcat ) ( ( (  from_dash_string183 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct env561 {
    ;
    struct Slice_14  dest1854;
    ;
};

struct envunion562 {
    enum Unit_8  (*fun) (  struct env561*  ,    struct Tuple2_459  );
    struct env561 env;
};

static  enum Unit_8   for_dash_each560 (    struct Zip_464  iterable1074 ,   struct envunion562  fun1076 ) {
    struct Zip_464  temp563 = ( (  into_dash_iter466 ) ( (  iterable1074 ) ) );
    struct Zip_464 *  it1077 = ( &temp563 );
    while ( ( true ) ) {
        struct Maybe_467  dref1078 = ( (  next468 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_467_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_467_Just_t ) {
                struct envunion562  temp564 = (  fun1076 );
                ( temp564.fun ( &temp564.env ,  ( dref1078 .stuff .Maybe_467_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam565 (   struct env561* env ,    struct Tuple2_459  dref1855 ) {
    return ( (  set461 ) ( ( env->dest1854 ) ,  ( (  i32_dash_size355 ) ( ( dref1855 .field1 ) ) ) ,  ( dref1855 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to552 (    struct Slice_14  src1852 ,    struct Slice_14  dest1854 ) {
    if ( (  cmp283 ( ( (  src1852 ) .f_count ) , ( (  dest1854 ) .f_count ) ) == 2 ) ) {
        ( (  panic553 ) ( ( ( StrConcat_554_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1852 ) .f_count ) ) ) ,  ( (  from_dash_string183 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1854 ) .f_count ) ) ) ,  ( (  from_dash_string183 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env561 envinst561 = {
        .dest1854 =  dest1854 ,
    };
    ( (  for_dash_each560 ) ( ( (  zip470 ) ( (  src1852 ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion562){ .fun = (  enum Unit_8  (*) (  struct env561*  ,    struct Tuple2_459  ) )lam565 , .env =  envinst561 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range527 (   struct env40* env ,    struct List_13 *  list2063 ,    size_t  from2065 ,    size_t  to_dash_excl2067 ) {
    if ( (  cmp283 ( (  to_dash_excl2067 ) , (  from2065 ) ) == 0 ) ) {
        ( (  panic528 ) ( ( ( StrConcat_529_StrConcat ) ( ( ( StrConcat_530_StrConcat ) ( ( ( StrConcat_531_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp283 ( (  from2065 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_string183 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp283 ( (  to_dash_excl2067 ) , ( ( * (  list2063 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_string183 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2068 = (  op_dash_sub403 ( (  to_dash_excl2067 ) , (  from2065 ) ) );
    struct env541 envinst541 = {
        .num_dash_elems2068 =  num_dash_elems2068 ,
        .list2063 =  list2063 ,
    };
    ( (  for_dash_each539 ) ( ( (  drop547 ) ( ( (  zip548 ) ( ( * (  list2063 ) ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add325 ( (  from2065 ) , (  num_dash_elems2068 ) ) ) ) ) ,  ( (struct envunion542){ .fun = (  enum Unit_8  (*) (  struct env541*  ,    struct Tuple2_459  ) )lam550 , .env =  envinst541 } ) ) );
    (*  list2063 ) .f_count = (  op_dash_sub403 ( ( ( * (  list2063 ) ) .f_count ) , (  num_dash_elems2068 ) ) );
    size_t  capacity2072 = ( ( ( * (  list2063 ) ) .f_elements ) .f_count );
    if ( (  cmp283 ( (  op_dash_mul338 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  capacity2072 ) ) == 0 ) ) {
        if ( (  eq332 ( ( ( * (  list2063 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free471 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
            (*  list2063 ) .f_elements = ( (  empty383 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2073 = (  op_dash_mul338 ( (  op_dash_add325 ( (  op_dash_div309 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2039 ) ) );
        struct Slice_14  new_dash_slice2074 = ( (  allocate452 ) ( ( ( * (  list2063 ) ) .f_al ) ,  (  new_dash_size2073 ) ) );
        ( (  copy_dash_to552 ) ( ( (  subslice427 ) ( ( ( * (  list2063 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  (  new_dash_slice2074 ) ) );
        ( (  free471 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
        (*  list2063 ) .f_elements = (  new_dash_slice2074 );
    }
    return ( Unit_8_Unit );
}

struct envunion567 {
    int32_t  (*fun) (  struct env89*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct StrView_30  );
    struct env89 env;
};

static  enum Unit_8   trim568 (    struct List_13 *  l2116 ,    size_t  new_dash_count2118 ) {
    (*  l2116 ) .f_count = ( (  min430 ) ( (  new_dash_count2118 ) ,  ( ( * (  l2116 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   min569 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp142 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

struct Maybe_572 {
    enum {
        Maybe_572_None_t,
        Maybe_572_Just_t,
    } tag;
    union {
        struct {
            struct Slice_14  field0;
        } Maybe_572_Just_s;
    } stuff;
};

static struct Maybe_572 Maybe_572_Just (  struct Slice_14  field0 ) {
    return ( struct Maybe_572 ) { .tag = Maybe_572_Just_t, .stuff = { .Maybe_572_Just_s = { .field0 = field0 } } };
};

static  struct Slice_14   or_dash_else571 (    struct Maybe_572  self1733 ,    struct Slice_14  alt1735 ) {
    struct Maybe_572  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_572_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_572_Just_t ) {
            return ( dref1736 .stuff .Maybe_572_Just_s .field0 );
        }
    }
}

static  struct Maybe_572   fmap_dash_maybe573 (    struct Maybe_281  x1275 ,    struct Slice_14 (*  fun1277 )(    struct Line_12  ) ) {
    struct Maybe_281  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_281_None_t ) {
        return ( (struct Maybe_572) { .tag = Maybe_572_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_281_Just_t ) {
            return ( ( Maybe_572_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_281_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_281   try_dash_get574 (    struct List_9 *  list2017 ,    size_t  i2019 ) {
    if ( (  cmp283 ( (  i2019 ) , ( ( * (  list2017 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_281) { .tag = Maybe_281_None_t } );
    }
    return ( ( Maybe_281_Just ) ( ( (  get424 ) ( (  list2017 ) ,  (  i2019 ) ) ) ) );
}

static  struct Slice_14   lam575 (    struct Line_12  line3777 ) {
    return ( (  to_dash_slice431 ) ( ( (  line3777 ) .f_line ) ) );
}

struct StrConcat_580 {
    struct StrView_30  field0;
    struct StrView_30  field1;
};

static struct StrConcat_580 StrConcat_580_StrConcat (  struct StrView_30  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_580 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_579 {
    struct StrConcat_580  field0;
    struct Char_65  field1;
};

static struct StrConcat_579 StrConcat_579_StrConcat (  struct StrConcat_580  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_579 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str581 (    struct StrConcat_580  self1509 ) {
    struct StrConcat_580  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str293 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str578 (    struct StrConcat_579  self1509 ) {
    struct StrConcat_579  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str581 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert577 (    bool  cond1719 ,    struct StrView_30  msg1721 ) {
    if ( ( ! (  cond1719 ) ) ) {
        ( (  print_dash_str578 ) ( ( ( StrConcat_579_StrConcat ) ( ( ( StrConcat_580_StrConcat ) ( ( (  from_dash_string183 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1721 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct Drop_585 {
    struct Zip_357  field0;
    size_t  field1;
};

static struct Drop_585 Drop_585_Drop (  struct Zip_357  field0 ,  size_t  field1 ) {
    return ( struct Drop_585 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env586 {
    ;
    ;
    ;
    size_t  num_dash_elems2068;
    struct List_9 *  list2063;
};

struct envunion587 {
    enum Unit_8  (*fun) (  struct env586*  ,    struct Tuple2_341  );
    struct env586 env;
};

static  struct Drop_585   into_dash_iter589 (    struct Drop_585  self845 ) {
    return (  self845 );
}

static  struct Maybe_362   next590 (    struct Drop_585 *  dref847 ) {
    while ( (  cmp283 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next363 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub403 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next363 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_8   for_dash_each584 (    struct Drop_585  iterable1074 ,   struct envunion587  fun1076 ) {
    struct Drop_585  temp588 = ( (  into_dash_iter589 ) ( (  iterable1074 ) ) );
    struct Drop_585 *  it1077 = ( &temp588 );
    while ( ( true ) ) {
        struct Maybe_362  dref1078 = ( (  next590 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_362_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_362_Just_t ) {
                struct envunion587  temp591 = (  fun1076 );
                ( temp591.fun ( &temp591.env ,  ( dref1078 .stuff .Maybe_362_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Drop_585   drop592 (    struct Zip_357  iterable852 ,    size_t  i854 ) {
    struct Zip_357  it855 = ( (  into_dash_iter361 ) ( (  iterable852 ) ) );
    return ( ( Drop_585_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct Slice_11   subslice595 (    struct Slice_11  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Line_12 *  begin_dash_ptr1788 = ( (  offset_dash_ptr322 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp283 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp283 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub403 ( ( (  min430 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_358   into_dash_iter594 (    struct List_9  self2029 ) {
    return ( (  into_dash_iter368 ) ( ( (  subslice595 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  struct Zip_357   zip593 (    struct List_9  left922 ,    struct FromIter_359  right924 ) {
    struct SliceIter_358  left_dash_it925 = ( (  into_dash_iter594 ) ( (  left922 ) ) );
    struct FromIter_359  right_dash_it926 = ( (  into_dash_iter369 ) ( (  right924 ) ) );
    return ( (struct Zip_357) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   lam596 (   struct env586* env ,    struct Tuple2_341  dref2069 ) {
    return ( (  set432 ) ( ( env->list2063 ) ,  (  op_dash_sub403 ( ( (  i32_dash_size355 ) ( ( dref2069 .field1 ) ) ) , ( env->num_dash_elems2068 ) ) ) ,  ( dref2069 .field0 ) ) );
}

struct env599 {
    ;
    struct Slice_11  dest1854;
    ;
};

struct envunion600 {
    enum Unit_8  (*fun) (  struct env599*  ,    struct Tuple2_341  );
    struct env599 env;
};

static  enum Unit_8   for_dash_each598 (    struct Zip_357  iterable1074 ,   struct envunion600  fun1076 ) {
    struct Zip_357  temp601 = ( (  into_dash_iter361 ) ( (  iterable1074 ) ) );
    struct Zip_357 *  it1077 = ( &temp601 );
    while ( ( true ) ) {
        struct Maybe_362  dref1078 = ( (  next363 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_362_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_362_Just_t ) {
                struct envunion600  temp602 = (  fun1076 );
                ( temp602.fun ( &temp602.env ,  ( dref1078 .stuff .Maybe_362_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam603 (   struct env599* env ,    struct Tuple2_341  dref1855 ) {
    return ( (  set343 ) ( ( env->dest1854 ) ,  ( (  i32_dash_size355 ) ( ( dref1855 .field1 ) ) ) ,  ( dref1855 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to597 (    struct Slice_11  src1852 ,    struct Slice_11  dest1854 ) {
    if ( (  cmp283 ( ( (  src1852 ) .f_count ) , ( (  dest1854 ) .f_count ) ) == 2 ) ) {
        ( (  panic553 ) ( ( ( StrConcat_554_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1852 ) .f_count ) ) ) ,  ( (  from_dash_string183 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1854 ) .f_count ) ) ) ,  ( (  from_dash_string183 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env599 envinst599 = {
        .dest1854 =  dest1854 ,
    };
    ( (  for_dash_each598 ) ( ( (  zip367 ) ( (  src1852 ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion600){ .fun = (  enum Unit_8  (*) (  struct env599*  ,    struct Tuple2_341  ) )lam603 , .env =  envinst599 } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   remove_dash_range583 (   struct env41* env ,    struct List_9 *  list2063 ,    size_t  from2065 ,    size_t  to_dash_excl2067 ) {
    if ( (  cmp283 ( (  to_dash_excl2067 ) , (  from2065 ) ) == 0 ) ) {
        ( (  panic528 ) ( ( ( StrConcat_529_StrConcat ) ( ( ( StrConcat_530_StrConcat ) ( ( ( StrConcat_531_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp283 ( (  from2065 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2065 ) ) ) ,  ( (  from_dash_string183 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp283 ( (  to_dash_excl2067 ) , ( ( * (  list2063 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2067 ) ) ) ,  ( (  from_dash_string183 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2068 = (  op_dash_sub403 ( (  to_dash_excl2067 ) , (  from2065 ) ) );
    struct env586 envinst586 = {
        .num_dash_elems2068 =  num_dash_elems2068 ,
        .list2063 =  list2063 ,
    };
    ( (  for_dash_each584 ) ( ( (  drop592 ) ( ( (  zip593 ) ( ( * (  list2063 ) ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  op_dash_add325 ( (  from2065 ) , (  num_dash_elems2068 ) ) ) ) ) ,  ( (struct envunion587){ .fun = (  enum Unit_8  (*) (  struct env586*  ,    struct Tuple2_341  ) )lam596 , .env =  envinst586 } ) ) );
    (*  list2063 ) .f_count = (  op_dash_sub403 ( ( ( * (  list2063 ) ) .f_count ) , (  num_dash_elems2068 ) ) );
    size_t  capacity2072 = ( ( ( * (  list2063 ) ) .f_elements ) .f_count );
    if ( (  cmp283 ( (  op_dash_mul338 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  capacity2072 ) ) == 0 ) ) {
        if ( (  eq332 ( ( ( * (  list2063 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free371 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
            (*  list2063 ) .f_elements = ( (  empty267 ) ( ) );
            return ( Unit_8_Unit );
        }
        size_t  new_dash_size2073 = (  op_dash_mul338 ( (  op_dash_add325 ( (  op_dash_div309 ( ( ( * (  list2063 ) ) .f_count ) , ( env->shrink_dash_factor2039 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2039 ) ) );
        struct Slice_11  new_dash_slice2074 = ( (  allocate333 ) ( ( ( * (  list2063 ) ) .f_al ) ,  (  new_dash_size2073 ) ) );
        ( (  copy_dash_to597 ) ( ( (  subslice595 ) ( ( ( * (  list2063 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2063 ) ) .f_count ) ) ) ,  (  new_dash_slice2074 ) ) );
        ( (  free371 ) ( ( ( * (  list2063 ) ) .f_al ) ,  ( ( * (  list2063 ) ) .f_elements ) ) );
        (*  list2063 ) .f_elements = (  new_dash_slice2074 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   change_dash_no_dash_action413 (   struct env93* env ,    struct TextBuf_97 *  self3762 ,    struct Pos_29  from_dash_pos3764 ,    struct Pos_29  to_dash_pos3766 ,    struct StrView_30  bytes3768 ) {
    struct Pos_29  from3769 = ( (  min414 ) ( (  from_dash_pos3764 ) ,  (  to_dash_pos3766 ) ) );
    struct Pos_29  to3770 = ( (  max416 ) ( (  from_dash_pos3764 ) ,  (  to_dash_pos3766 ) ) );
    if ( (  eq417 ( (  to3770 ) , (  from3769 ) ) ) ) {
        enum CAllocator_10  al3771 = ( ( ( * (  self3762 ) ) .f_buf ) .f_al );
        if ( ( (  eq332 ( ( (  size419 ) ( ( & ( ( * (  self3762 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size355 ) ( ( (  from3769 ) .f_line ) ) ) ) ) && (  eq418 ( ( (  from3769 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) ) {
            struct envunion94  temp420 = ( (struct envunion94){ .fun = (  enum Unit_8  (*) (  struct env6*  ,    struct List_9 *  ,    struct Line_12  ) )add329 , .env =  env->envinst6 } );
            ( temp420.fun ( &temp420.env ,  ( & ( ( * (  self3762 ) ) .f_buf ) ) ,  ( (  mk_dash_line374 ) ( ( (  mk382 ) ( (  al3771 ) ) ) ) ) ) );
        }
        struct envunion422  temp421 = ( (struct envunion422){ .fun = (  int32_t  (*) (  struct env89*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct StrView_30  ) )add_dash_to_dash_spot423 , .env =  env->envinst89 } );
        ( temp421.fun ( &temp421.env ,  (  self3762 ) ,  (  from3769 ) ,  (  bytes3768 ) ) );
    } else {
        struct List_9 *  lines_dash_buf3772 = ( & ( ( * (  self3762 ) ) .f_buf ) );
        struct Line_12 *  first_dash_line3773 = ( (  get_dash_ptr425 ) ( (  lines_dash_buf3772 ) ,  ( (  i32_dash_size355 ) ( ( (  from3769 ) .f_line ) ) ) ) );
        (*  first_dash_line3773 ) .f_invalidated = ( true );
        if ( ( (  eq418 ( ( (  from3769 ) .f_line ) , ( (  to3770 ) .f_line ) ) ) && (  cmp142 ( ( (  to3770 ) .f_bi ) , (  op_dash_add144 ( ( (  size_dash_i32294 ) ( ( (  size525 ) ( ( & ( ( * (  first_dash_line3773 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion100  temp526 = ( (struct envunion100){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range527 , .env =  env->envinst40 } );
            ( temp526.fun ( &temp526.env ,  ( & ( ( * (  first_dash_line3773 ) ) .f_line ) ) ,  ( (  i32_dash_size355 ) ( ( (  from3769 ) .f_bi ) ) ) ,  ( (  i32_dash_size355 ) ( ( (  to3770 ) .f_bi ) ) ) ) );
            struct envunion567  temp566 = ( (struct envunion567){ .fun = (  int32_t  (*) (  struct env89*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct StrView_30  ) )add_dash_to_dash_spot423 , .env =  env->envinst89 } );
            ( temp566.fun ( &temp566.env ,  (  self3762 ) ,  (  from3769 ) ,  (  bytes3768 ) ) );
        } else {
            ( (  trim568 ) ( ( & ( ( * (  first_dash_line3773 ) ) .f_line ) ) ,  ( (  i32_dash_size355 ) ( ( (  from3769 ) .f_bi ) ) ) ) );
            struct Line_12 *  last_dash_line3774 = ( (  get_dash_ptr425 ) ( (  lines_dash_buf3772 ) ,  ( (  i32_dash_size355 ) ( ( (  to3770 ) .f_line ) ) ) ) );
            (*  last_dash_line3774 ) .f_invalidated = ( true );
            to3770 .f_bi = ( (  min569 ) ( ( (  to3770 ) .f_bi ) ,  (  op_dash_add144 ( ( (  size_dash_i32294 ) ( ( (  size525 ) ( ( & ( ( * (  last_dash_line3774 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
            if ( (  eq418 ( ( (  to3770 ) .f_bi ) , (  op_dash_add144 ( ( (  size_dash_i32294 ) ( ( (  size525 ) ( ( & ( ( * (  last_dash_line3774 ) ) .f_line ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
                to3770 .f_line = (  op_dash_add144 ( ( (  to3770 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
                to3770 .f_bi = (  from_dash_integral56 ( 0 ) );
            }
            struct envunion96  temp570 = ( (struct envunion96){ .fun = (  int32_t  (*) (  struct env89*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct StrView_30  ) )add_dash_to_dash_spot423 , .env =  env->envinst89 } );
            int32_t  lines_dash_added3775 = ( temp570.fun ( &temp570.env ,  (  self3762 ) ,  (  from3769 ) ,  (  bytes3768 ) ) );
            to3770 .f_line = (  op_dash_add144 ( ( (  to3770 ) .f_line ) , (  lines_dash_added3775 ) ) );
            from3769 .f_line = (  op_dash_add144 ( ( (  from3769 ) .f_line ) , (  lines_dash_added3775 ) ) );
            struct Slice_14  last_dash_line3778 = ( (  or_dash_else571 ) ( ( (  fmap_dash_maybe573 ) ( ( (  try_dash_get574 ) ( (  lines_dash_buf3772 ) ,  ( (  i32_dash_size355 ) ( ( (  to3770 ) .f_line ) ) ) ) ) ,  (  lam575 ) ) ) ,  ( (  empty383 ) ( ) ) ) );
            struct envunion95  temp576 = ( (struct envunion95){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all437 , .env =  env->envinst48 } );
            ( temp576.fun ( &temp576.env ,  ( & ( ( * (  first_dash_line3773 ) ) .f_line ) ) ,  ( (  from426 ) ( (  last_dash_line3778 ) ,  ( (  i32_dash_size355 ) ( ( (  to3770 ) .f_bi ) ) ) ) ) ) );
            ( (  assert577 ) ( (  cmp142 ( ( (  to3770 ) .f_line ) , ( (  from3769 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string183 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion101  temp582 = ( (struct envunion101){ .fun = (  enum Unit_8  (*) (  struct env41*  ,    struct List_9 *  ,    size_t  ,    size_t  ) )remove_dash_range583 , .env =  env->envinst41 } );
            ( temp582.fun ( &temp582.env ,  ( & ( ( * (  self3762 ) ) .f_buf ) ) ,  ( (  i32_dash_size355 ) ( (  op_dash_add144 ( ( (  from3769 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  op_dash_add325 ( ( (  i32_dash_size355 ) ( ( (  to3770 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_607 {
    struct StrView_30  field0;
    const char*  field1;
};

static struct StrConcat_607 StrConcat_607_StrConcat (  struct StrView_30  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_607 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_606 {
    struct StrConcat_607  field0;
    struct Char_65  field1;
};

static struct StrConcat_606 StrConcat_606_StrConcat (  struct StrConcat_607  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_606 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_611 {
    struct StrView_30  field0;
    struct StrConcat_606  field1;
};

static struct StrConcat_611 StrConcat_611_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_606  field1 ) {
    return ( struct StrConcat_611 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_610 {
    struct StrConcat_611  field0;
    struct Char_65  field1;
};

static struct StrConcat_610 StrConcat_610_StrConcat (  struct StrConcat_611  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_610 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str615 (    const char*  self1404 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1404 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str614 (    struct StrConcat_607  self1509 ) {
    struct StrConcat_607  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str615 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str613 (    struct StrConcat_606  self1509 ) {
    struct StrConcat_606  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str614 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str612 (    struct StrConcat_611  self1509 ) {
    struct StrConcat_611  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str613 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str609 (    struct StrConcat_610  self1509 ) {
    struct StrConcat_610  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str612 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic608 (    struct StrConcat_606  errmsg1713 ) {
    ( (  print_dash_str609 ) ( ( ( StrConcat_610_StrConcat ) ( ( ( StrConcat_611_StrConcat ) ( ( (  from_dash_string183 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_30   undefined616 (  ) {
    struct StrView_30  temp617;
    return (  temp617 );
}

static  struct StrView_30   or_dash_fail605 (    struct Maybe_229  x1726 ,    struct StrConcat_606  errmsg1728 ) {
    struct Maybe_229  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_229_None_t ) {
        ( (  panic608 ) ( (  errmsg1728 ) ) );
        return ( (  undefined616 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_229_Just_t ) {
            return ( dref1729 .stuff .Maybe_229_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike619 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr624 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of625 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed622 (  ) {
    FILE *  temp623;
    FILE *  x570 = (  temp623 );
    ( ( memset ) ( ( (  cast_dash_ptr624 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of625 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr621 (  ) {
    return ( (  zeroed622 ) ( ) );
}

static  bool   is_dash_ptr_dash_null620 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr621 ) ( ) ) );
}

static  int32_t   seek_dash_end626 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  int32_t   seek_dash_set627 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct Char_65   nullchar628 (  ) {
    return ( (  from_dash_charlike314 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_229   try_dash_read_dash_contents618 (    const char*  filename2958 ,    enum CAllocator_10  al2960 ) {
    FILE *  file2961 = ( ( fopen ) ( (  filename2958 ) ,  ( (  from_dash_charlike619 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null620 ) ( (  file2961 ) ) ) ) {
        return ( (struct Maybe_229) { .tag = Maybe_229_None_t } );
    }
    ( ( fseek ) ( (  file2961 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_end626 ) ( ) ) ) );
    int32_t  file_dash_size2962 = ( ( ftell ) ( (  file2961 ) ) );
    ( ( fseek ) ( (  file2961 ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  seek_dash_set627 ) ( ) ) ) );
    struct Slice_14  file_dash_buf2963 = ( ( (  allocate452 ) ( (  al2960 ) ,  (  op_dash_add325 ( ( (  i32_dash_size355 ) ( (  file_dash_size2962 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2963 ) .f_ptr ) ,  (  file_dash_size2962 ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  file2961 ) ) );
    ( (  set461 ) ( (  file_dash_buf2963 ) ,  ( (  i32_dash_size355 ) ( (  file_dash_size2962 ) ) ) ,  ( (  char_dash_u8483 ) ( ( (  nullchar628 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2961 ) ) );
    struct StrView_30  str2964 = ( (struct StrView_30) { .f_contents = ( (  subslice427 ) ( (  file_dash_buf2963 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub403 ( ( (  file_dash_buf2963 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_229_Just ) ( (  str2964 ) ) );
}

static  struct StrView_30   read_dash_contents604 (    const char*  filename2967 ,    enum CAllocator_10  al2969 ) {
    return ( (  or_dash_fail605 ) ( ( (  try_dash_read_dash_contents618 ) ( (  filename2967 ) ,  (  al2969 ) ) ) ,  ( ( StrConcat_606_StrConcat ) ( ( ( StrConcat_607_StrConcat ) ( ( (  from_dash_string183 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2967 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_204   mk630 (    enum CAllocator_10  al4001 ,    struct TextBuf_97 *  buf4003 ) {
    return ( (struct Pane_204) { .f_buf = (  buf4003 ) , .f_cursor = ( (  mk397 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral56 ( 0 ) ) , .f_sel = ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) , .f_mode = ( Mode_205_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_206) { .f_screen_dash_top = (  from_dash_integral56 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral56 ( 0 ) ) } ) } );
}

struct envunion633 {
    struct Tui_81  (*fun) (  struct env77*  );
    struct env77 env;
};

static  struct Termios_83   undefined637 (  ) {
    struct Termios_83  temp638;
    return (  temp638 );
}

static  int32_t   stdin_dash_fileno639 (  ) {
    return (  from_dash_integral56 ( 0 ) );
}

static  struct termios *   cast_dash_ptr640 (    struct Termios_83 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and641 (    uint32_t  l2857 ,    uint32_t  r2859 ) {
    return ( (  l2857 ) & (  r2859 ) );
}

static  uint32_t   u32_dash_neg642 (    uint32_t  l2862 ) {
    return ( ~ (  l2862 ) );
}

struct Array_644 {
    uint32_t _arr [4];
};

struct ArrayIter_646 {
    struct Array_644  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_646   into_dash_iter647 (    struct Array_644  self2323 ) {
    return ( (struct ArrayIter_646) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_648 {
    enum {
        Maybe_648_None_t,
        Maybe_648_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_648_Just_s;
    } stuff;
};

static struct Maybe_648 Maybe_648_Just (  uint32_t  field0 ) {
    return ( struct Maybe_648 ) { .tag = Maybe_648_Just_t, .stuff = { .Maybe_648_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr652 (    struct Array_644 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr653 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp654;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp654 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr651 (    struct Array_644 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp283 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2254 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic286 ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2255 = ( ( (  cast_dash_ptr652 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr653 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  uint32_t   get650 (    struct Array_644 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr651 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_648   next649 (    struct ArrayIter_646 *  self2330 ) {
    if ( (  cmp283 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_648) { .tag = Maybe_648_None_t } );
    }
    uint32_t  e2332 = ( (  get650 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add325 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_648_Just ) ( (  e2332 ) ) );
}

static  uint32_t   reduce645 (    struct Array_644  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_646  it1099 = ( (  into_dash_iter647 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_648  dref1100 = ( (  next649 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_648_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_648_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_648_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp655 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp655);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp656;
    return (  temp656 );
}

static  uint32_t   u32_dash_or657 (    uint32_t  l2849 ,    uint32_t  r2851 ) {
    return ( (  l2849 ) | (  r2851 ) );
}

static  uint32_t   u32_dash_ors643 (    struct Array_644  vals2854 ) {
    return ( (  reduce645 ) ( (  vals2854 ) ,  (  from_dash_integral150 ( 0 ) ) ,  (  u32_dash_or657 ) ) );
}

static  struct Array_644   from_dash_listlike658 (    struct Array_644  self330 ) {
    return (  self330 );
}

static  uint32_t   echo659 (  ) {
    return (  from_dash_integral150 ( 8 ) );
}

static  uint32_t   icanon660 (  ) {
    return (  from_dash_integral150 ( 2 ) );
}

static  uint32_t   isig661 (  ) {
    return (  from_dash_integral150 ( 1 ) );
}

static  uint32_t   iexten662 (  ) {
    return (  from_dash_integral150 ( 32768 ) );
}

struct Array_664 {
    uint32_t _arr [5];
};

struct ArrayIter_666 {
    struct Array_664  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_666   into_dash_iter667 (    struct Array_664  self2323 ) {
    return ( (struct ArrayIter_666) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr671 (    struct Array_664 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr670 (    struct Array_664 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp283 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2254 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic286 ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2255 = ( ( (  cast_dash_ptr671 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr653 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  uint32_t   get669 (    struct Array_664 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr670 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_648   next668 (    struct ArrayIter_666 *  self2330 ) {
    if ( (  cmp283 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_648) { .tag = Maybe_648_None_t } );
    }
    uint32_t  e2332 = ( (  get669 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add325 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_648_Just ) ( (  e2332 ) ) );
}

static  uint32_t   reduce665 (    struct Array_664  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_666  it1099 = ( (  into_dash_iter667 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_648  dref1100 = ( (  next668 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_648_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_648_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_648_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp672 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp672);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp673;
    return (  temp673 );
}

static  uint32_t   u32_dash_ors663 (    struct Array_664  vals2854 ) {
    return ( (  reduce665 ) ( (  vals2854 ) ,  (  from_dash_integral150 ( 0 ) ) ,  (  u32_dash_or657 ) ) );
}

static  struct Array_664   from_dash_listlike674 (    struct Array_664  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint675 (  ) {
    return (  from_dash_integral150 ( 2 ) );
}

static  uint32_t   icrnl676 (  ) {
    return (  from_dash_integral150 ( 256 ) );
}

static  uint32_t   inpck677 (  ) {
    return (  from_dash_integral150 ( 16 ) );
}

static  uint32_t   istrip678 (  ) {
    return (  from_dash_integral150 ( 32 ) );
}

static  uint32_t   ixon679 (  ) {
    return (  from_dash_integral150 ( 1024 ) );
}

struct Array_681 {
    uint32_t _arr [1];
};

struct ArrayIter_683 {
    struct Array_681  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_683   into_dash_iter684 (    struct Array_681  self2323 ) {
    return ( (struct ArrayIter_683) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr688 (    struct Array_681 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr687 (    struct Array_681 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp283 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2254 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic286 ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2255 = ( ( (  cast_dash_ptr688 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr653 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  uint32_t   get686 (    struct Array_681 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr687 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_648   next685 (    struct ArrayIter_683 *  self2330 ) {
    if ( (  cmp283 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_648) { .tag = Maybe_648_None_t } );
    }
    uint32_t  e2332 = ( (  get686 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add325 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_648_Just ) ( (  e2332 ) ) );
}

static  uint32_t   reduce682 (    struct Array_681  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_683  it1099 = ( (  into_dash_iter684 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_648  dref1100 = ( (  next685 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_648_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_648_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_648_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp689 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp689);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp690;
    return (  temp690 );
}

static  uint32_t   u32_dash_ors680 (    struct Array_681  vals2854 ) {
    return ( (  reduce682 ) ( (  vals2854 ) ,  (  from_dash_integral150 ( 0 ) ) ,  (  u32_dash_or657 ) ) );
}

static  struct Array_681   from_dash_listlike691 (    struct Array_681  self330 ) {
    return (  self330 );
}

static  uint32_t   opost692 (  ) {
    return (  from_dash_integral150 ( 1 ) );
}

static  uint32_t   cs8693 (  ) {
    return (  from_dash_integral150 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr696 (    struct Array_84 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr695 (    struct Array_84 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp283 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2254 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic286 ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2255 = ( ( (  cast_dash_ptr696 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr428 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  enum Unit_8   set694 (    struct Array_84 *  arr2264 ,    size_t  i2267 ,    uint8_t  e2269 ) {
    uint8_t *  p2270 = ( (  get_dash_ptr695 ) ( (  arr2264 ) ,  (  i2267 ) ) );
    (*  p2270 ) = (  e2269 );
    return ( Unit_8_Unit );
}

static  size_t   vmin697 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime698 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush699 (  ) {
    return (  from_dash_integral56 ( 2 ) );
}

static  struct Termios_83   enable_dash_raw_dash_mode635 (  ) {
    struct Termios_83  temp636 = ( (  undefined637 ) ( ) );
    struct Termios_83 *  orig_dash_termios3344 = ( &temp636 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno639 ) ( ) ) ,  ( (  cast_dash_ptr640 ) ( (  orig_dash_termios3344 ) ) ) ) );
    struct Termios_83  raw3345 = ( * (  orig_dash_termios3344 ) );
    raw3345 .f_c_dash_lflag = ( (  u32_dash_and641 ) ( ( (  raw3345 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg642 ) ( ( (  u32_dash_ors643 ) ( ( (  from_dash_listlike658 ) ( ( (struct Array_644) { ._arr = { ( (  echo659 ) ( ) ) , ( (  icanon660 ) ( ) ) , ( (  isig661 ) ( ) ) , ( ( (  iexten662 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3345 .f_c_dash_iflag = ( (  u32_dash_and641 ) ( ( (  raw3345 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg642 ) ( ( (  u32_dash_ors663 ) ( ( (  from_dash_listlike674 ) ( ( (struct Array_664) { ._arr = { ( (  brkint675 ) ( ) ) , ( (  icrnl676 ) ( ) ) , ( (  inpck677 ) ( ) ) , ( (  istrip678 ) ( ) ) , ( ( (  ixon679 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3345 .f_c_dash_oflag = ( (  u32_dash_and641 ) ( ( (  raw3345 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg642 ) ( ( (  u32_dash_ors680 ) ( ( (  from_dash_listlike691 ) ( ( (struct Array_681) { ._arr = { ( ( (  opost692 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3345 .f_c_dash_cflag = ( (  u32_dash_or657 ) ( ( (  raw3345 ) .f_c_dash_cflag ) ,  ( (  cs8693 ) ( ) ) ) );
    ( (  set694 ) ( ( & ( (  raw3345 ) .f_c_dash_cc ) ) ,  ( (  vmin697 ) ( ) ) ,  (  from_dash_integral310 ( 0 ) ) ) );
    ( (  set694 ) ( ( & ( (  raw3345 ) .f_c_dash_cc ) ) ,  ( (  vtime698 ) ( ) ) ,  (  from_dash_integral310 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno639 ) ( ) ) ,  ( (  tcsa_dash_flush699 ) ( ) ) ,  ( (  cast_dash_ptr640 ) ( ( & (  raw3345 ) ) ) ) ) );
    return ( * (  orig_dash_termios3344 ) );
}

struct StrViewIter_703 {
    struct StrView_30  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_703   into_dash_iter705 (    struct StrViewIter_703  self1371 ) {
    return (  self1371 );
}

struct Maybe_706 {
    enum {
        Maybe_706_None_t,
        Maybe_706_Just_t,
    } tag;
    union {
        struct {
            struct Char_65  field0;
        } Maybe_706_Just_s;
    } stuff;
};

static struct Maybe_706 Maybe_706_Just (  struct Char_65  field0 ) {
    return ( struct Maybe_706 ) { .tag = Maybe_706_Just_t, .stuff = { .Maybe_706_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_706   next707 (    struct StrViewIter_703 *  self1374 ) {
    if ( (  cmp283 ( ( ( * (  self1374 ) ) .f_i ) , ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr428 ) ( ( (  cast315 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64354 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
    struct Char_65  char1376 = ( (  scan_dash_from_dash_mem316 ) ( (  char_dash_ptr1375 ) ) );
    (*  self1374 ) .f_i = (  op_dash_add325 ( ( ( * (  self1374 ) ) .f_i ) , ( (  char1376 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_706_Just ) ( (  char1376 ) ) );
}

static  enum Unit_8   for_dash_each702 (    struct StrViewIter_703  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrViewIter_703  temp704 = ( (  into_dash_iter705 ) ( (  iterable1074 ) ) );
    struct StrViewIter_703 *  it1077 = ( &temp704 );
    while ( ( true ) ) {
        struct Maybe_706  dref1078 = ( (  next707 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_706_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_706_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_706_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_703   into_dash_iter709 (    struct StrView_30  self1368 ) {
    return ( (struct StrViewIter_703) { .f_ds = (  self1368 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_703   chars708 (    struct StrView_30  self1382 ) {
    return ( (  into_dash_iter709 ) ( (  self1382 ) ) );
}

static  enum Unit_8   print701 (    struct StrView_30  s2589 ) {
    ( (  for_dash_each702 ) ( ( (  chars708 ) ( (  s2589 ) ) ) ,  (  printf_dash_char302 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   hide_dash_cursor700 (  ) {
    ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_colors710 (  ) {
    ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   clear_dash_screen711 (  ) {
    ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   enable_dash_mouse712 (  ) {
    ( (  print_dash_str293 ) ( ( (  from_dash_string183 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_stdout713 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr621 ) ( ) ) ) );
    return ( Unit_8_Unit );
}

static  bool   ptr_dash_eq717 (    enum Unit_8 *  l586 ,    enum Unit_8 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_8 *   cast718 (    const char*  x356 ) {
    return ( (enum Unit_8 * ) (  x356 ) );
}

static  void *   cast_dash_ptr722 (    enum Unit_8 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of723 (    enum Unit_8 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_8 *   zeroed720 (  ) {
    enum Unit_8 *  temp721;
    enum Unit_8 *  x570 = (  temp721 );
    ( ( memset ) ( ( (  cast_dash_ptr722 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of723 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_8 *   null_dash_ptr719 (  ) {
    return ( (  zeroed720 ) ( ) );
}

static  struct Maybe_407   from_dash_nullable_dash_c_dash_str716 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq717 ) ( ( (  cast718 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr719 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_407) { .tag = Maybe_407_None_t } );
    } else {
        return ( ( Maybe_407_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_407   get715 (    const char*  s2622 ) {
    return ( (  from_dash_nullable_dash_c_dash_str716 ) ( ( ( getenv ) ( (  s2622 ) ) ) ) );
}

static  bool   eq724 (    const char*  l1697 ,    const char*  r1699 ) {
    return (  eq418 ( ( ( strcmp ) ( (  l1697 ) ,  (  r1699 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) );
}

static  enum ColorPalette_82   query_dash_palette714 (  ) {
    struct Maybe_407  colorterm2623 = ( (  get715 ) ( ( (  from_dash_string57 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_407  dref2624 = (  colorterm2623 );
    if ( dref2624.tag == Maybe_407_Just_t ) {
        if ( ( (  eq724 ( ( dref2624 .stuff .Maybe_407_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq724 ( ( dref2624 .stuff .Maybe_407_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_82_PaletteRGB );
        }
    }
    else {
        if ( dref2624.tag == Maybe_407_None_t ) {
        }
    }
    struct Maybe_407  dref2626 = ( (  get715 ) ( ( (  from_dash_string57 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2626.tag == Maybe_407_Just_t ) {
        if ( (  eq724 ( ( dref2626 .stuff .Maybe_407_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_82_Palette8 );
        }
    }
    else {
        if ( dref2626.tag == Maybe_407_None_t ) {
        }
    }
    return ( ColorPalette_82_Palette16 );
}

struct Tuple2_725 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_725 Tuple2_725_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_725 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_727 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr731 (    struct Winsize_727 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of732 (    struct Winsize_727  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_727   zeroed729 (  ) {
    struct Winsize_727  temp730;
    struct Winsize_727  x570 = (  temp730 );
    ( ( memset ) ( ( (  cast_dash_ptr731 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of732 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno733 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  uint64_t   from_dash_integral735 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz734 (  ) {
    return (  from_dash_integral735 ( 21523 ) );
}

static  int32_t   op_dash_neg736 (    int32_t  x227 ) {
    return ( (  from_dash_integral56 ( 0 ) ) - (  x227 ) );
}

static  bool   eq737 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral738 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr744 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of745 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed742 (  ) {
    uint32_t  temp743;
    uint32_t  x570 = (  temp743 );
    ( ( memset ) ( ( (  cast_dash_ptr744 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of745 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast746 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed740 (    uint16_t  x573 ) {
    uint32_t  temp741 = ( (  zeroed742 ) ( ) );
    uint32_t *  y574 = ( &temp741 );
    uint16_t *  yp575 = ( (  cast746 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32739 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed740 ) ( (  x645 ) ) );
}

static  struct Tuple2_725   get_dash_dimensions726 (  ) {
    struct Winsize_727  temp728 = ( ( (  zeroed729 ) ( ) ) );
    struct Winsize_727 *  ws2611 = ( &temp728 );
    if ( ( (  eq418 ( ( ( ioctl ) ( ( (  stdout_dash_fileno733 ) ( ) ) ,  ( (  tiocgwinsz734 ) ( ) ) ,  (  ws2611 ) ) ) , (  op_dash_neg736 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) || (  eq737 ( ( ( * (  ws2611 ) ) .f_ws_dash_col ) , (  from_dash_integral738 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_725_Tuple2 ) ( (  from_dash_integral150 ( 80 ) ) ,  (  from_dash_integral150 ( 24 ) ) ) );
    }
    return ( ( Tuple2_725_Tuple2 ) ( ( (  u16_dash_u32739 ) ( ( ( * (  ws2611 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32739 ) ( ( ( * (  ws2611 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined749 (  ) {
    struct timespec  temp750;
    return (  temp750 );
}

static  int32_t   clock_dash_monotonic751 (  ) {
    return (  from_dash_integral56 ( 1 ) );
}

static  struct timespec   now747 (  ) {
    struct timespec  temp748 = ( (  undefined749 ) ( ) );
    struct timespec *  t3306 = ( &temp748 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic751 ) ( ) ) ,  (  t3306 ) ) );
    return ( * (  t3306 ) );
}

struct env752 {
    bool *  should_dash_resize3358;
};

struct envunion753 {
    enum Unit_8  (*fun) (  struct env752*  ,    int32_t  );
    struct env752 env;
};

struct envunion753  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig754 ) {
    struct envunion753  temp755 = _intr_sigarr [  __intr__sig754 ];
    temp755.fun ( &temp755.env ,  __intr__sig754 );
}

static  enum Unit_8  _intr_register_signal (    int32_t  __intr__sig756 ,   struct envunion753  __intr__fun757 ) {
    _intr_sigarr [  __intr__sig756 ] =  __intr__fun757;
    signal(  __intr__sig756 , _intr_sighandle );
    return Unit_8_Unit;
}

static  enum Unit_8   lam758 (   struct env752* env ,    int32_t  dref3365 ) {
    (* env->should_dash_resize3358 ) = ( true );
    return ( Unit_8_Unit );
}

static  uint32_t   fst759 (    struct Tuple2_725  dref1253 ) {
    return ( dref1253 .field0 );
}

static  uint32_t   snd760 (    struct Tuple2_725  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tui_81   mk634 (   struct env77* env ) {
    struct Termios_83  og_dash_termios3360 = ( (  enable_dash_raw_dash_mode635 ) ( ) );
    ( (  hide_dash_cursor700 ) ( ) );
    ( (  reset_dash_colors710 ) ( ) );
    ( (  clear_dash_screen711 ) ( ) );
    ( (  enable_dash_mouse712 ) ( ) );
    ( (  flush_dash_stdout713 ) ( ) );
    enum ColorPalette_82  palette3361 = ( (  query_dash_palette714 ) ( ) );
    struct Tuple2_725  dims3362 = ( (  get_dash_dimensions726 ) ( ) );
    uint32_t  fps3363 = (  from_dash_integral150 ( 60 ) );
    struct timespec  last_dash_sync3364 = ( (  now747 ) ( ) );
    struct env752 envinst752 = {
        .should_dash_resize3358 = env->should_dash_resize3358 ,
    };
    ( _intr_register_signal ( (  from_dash_integral56 ( 28 ) ) , ( (struct envunion753){ .fun = (  enum Unit_8  (*) (  struct env752*  ,    int32_t  ) )lam758 , .env =  envinst752 } ) ) );
    return ( (struct Tui_81) { .f_width = ( (  fst759 ) ( (  dims3362 ) ) ) , .f_height = ( (  snd760 ) ( (  dims3362 ) ) ) , .f_target_dash_fps = (  fps3363 ) , .f_actual_dash_fps = (  from_dash_integral150 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3364 ) , .f_fps_dash_ts = (  last_dash_sync3364 ) , .f_fps_dash_count = (  from_dash_integral150 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3360 ) , .f_palette = (  palette3361 ) , .f_should_dash_redraw = ( true ) } );
}

struct TypeSize_765 {
    size_t  f_size;
};

static  struct TypeSize_765   get_dash_typesize764 (  ) {
    struct Cell_256  temp766;
    return ( (struct TypeSize_765) { .f_size = ( sizeof( ( (  temp766 ) ) ) ) } );
}

static  struct Cell_256 *   cast_dash_ptr767 (    void *  p359 ) {
    return ( (struct Cell_256 * ) (  p359 ) );
}

static  struct Slice_255   allocate763 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize764 ) ( ) ) ) .f_size );
    struct Cell_256 *  ptr1958 = ( (  cast_dash_ptr767 ) ( ( ( malloc ) ( (  op_dash_mul338 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_255) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

static  void *   cast_dash_ptr773 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of774 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed771 (  ) {
    size_t  temp772;
    size_t  x570 = (  temp772 );
    ( ( memset ) ( ( (  cast_dash_ptr773 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of774 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast775 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed769 (    uint32_t  x573 ) {
    size_t  temp770 = ( (  zeroed771 ) ( ) );
    size_t *  y574 = ( &temp770 );
    uint32_t *  yp575 = ( (  cast775 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size768 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed769 ) ( (  x651 ) ) );
}

struct env778 {
    struct Slice_255  s1906;
    struct Cell_256 (*  fun1908 )(    struct Cell_256  );
    ;
    ;
    ;
};

struct envunion779 {
    enum Unit_8  (*fun) (  struct env778*  ,    int32_t  );
    struct env778 env;
};

static  enum Unit_8   for_dash_each777 (    struct Range_135  iterable1074 ,   struct envunion779  fun1076 ) {
    struct RangeIter_138  temp780 = ( (  into_dash_iter139 ) ( (  iterable1074 ) ) );
    struct RangeIter_138 *  it1077 = ( &temp780 );
    while ( ( true ) ) {
        struct Maybe_140  dref1078 = ( (  next141 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_140_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_140_Just_t ) {
                struct envunion779  temp781 = (  fun1076 );
                ( temp781.fun ( &temp781.env ,  ( dref1078 .stuff .Maybe_140_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Cell_256 *   offset_dash_ptr785 (    struct Cell_256 *  x338 ,    int64_t  count340 ) {
    struct Cell_256  temp786;
    return ( (struct Cell_256 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp786 ) ) ) ) ) ) ) ) );
}

static  struct Cell_256 *   get_dash_ptr784 (    struct Slice_255  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp283 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_256 *  elem_dash_ptr1761 = ( (  offset_dash_ptr785 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set783 (    struct Slice_255  slice1775 ,    size_t  i1777 ,    struct Cell_256  x1779 ) {
    struct Cell_256 *  ep1780 = ( (  get_dash_ptr784 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

struct Maybe_790 {
    enum {
        Maybe_790_None_t,
        Maybe_790_Just_t,
    } tag;
    union {
        struct {
            struct Cell_256  field0;
        } Maybe_790_Just_s;
    } stuff;
};

static struct Maybe_790 Maybe_790_Just (  struct Cell_256  field0 ) {
    return ( struct Maybe_790 ) { .tag = Maybe_790_Just_t, .stuff = { .Maybe_790_Just_s = { .field0 = field0 } } };
};

static  struct Cell_256   undefined791 (  ) {
    struct Cell_256  temp792;
    return (  temp792 );
}

static  struct Cell_256   or_dash_fail789 (    struct Maybe_790  x1726 ,    struct StrConcat_346  errmsg1728 ) {
    struct Maybe_790  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_790_None_t ) {
        ( (  panic345 ) ( (  errmsg1728 ) ) );
        return ( (  undefined791 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_790_Just_t ) {
            return ( dref1729 .stuff .Maybe_790_Just_s .field0 );
        }
    }
}

static  struct Maybe_790   try_dash_get793 (    struct Slice_255  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp283 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_790) { .tag = Maybe_790_None_t } );
    }
    struct Cell_256 *  elem_dash_ptr1767 = ( (  offset_dash_ptr785 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_790_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  struct Cell_256   get788 (    struct Slice_255  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail789 ) ( ( (  try_dash_get793 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_256   elem_dash_get787 (    struct Slice_255  self1868 ,    size_t  idx1870 ) {
    return ( (  get788 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

static  enum Unit_8   lam782 (   struct env778* env ,    int32_t  i1910 ) {
    return ( (  set783 ) ( ( env->s1906 ) ,  ( (  i32_dash_size355 ) ( (  i1910 ) ) ) ,  ( ( env->fun1908 ) ( (  elem_dash_get787 ( ( env->s1906 ) , ( (  i32_dash_size355 ) ( (  i1910 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map776 (    struct Slice_255  s1906 ,    struct Cell_256 (*  fun1908 )(    struct Cell_256  ) ) {
    struct env778 envinst778 = {
        .s1906 =  s1906 ,
        .fun1908 =  fun1908 ,
    };
    ( (  for_dash_each777 ) ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32294 ) ( (  op_dash_sub403 ( ( (  s1906 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion779){ .fun = (  enum Unit_8  (*) (  struct env778*  ,    int32_t  ) )lam782 , .env =  envinst778 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_256   default_dash_cell795 (  ) {
    return ( (struct Cell_256) { .f_c = ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_123) { .tag = Color_123_ColorDefault_t } ) , .f_bg = ( (struct Color_123) { .tag = Color_123_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } );
}

static  struct Cell_256   lam794 (    struct Cell_256  dref3468 ) {
    return ( (  default_dash_cell795 ) ( ) );
}

struct env798 {
    struct Slice_255  s1906;
    struct Cell_256 (*  fun1908 )(    struct Cell_256  );
    ;
    ;
    ;
};

struct envunion799 {
    enum Unit_8  (*fun) (  struct env798*  ,    int32_t  );
    struct env798 env;
};

static  enum Unit_8   for_dash_each797 (    struct Range_135  iterable1074 ,   struct envunion799  fun1076 ) {
    struct RangeIter_138  temp800 = ( (  into_dash_iter139 ) ( (  iterable1074 ) ) );
    struct RangeIter_138 *  it1077 = ( &temp800 );
    while ( ( true ) ) {
        struct Maybe_140  dref1078 = ( (  next141 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_140_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_140_Just_t ) {
                struct envunion799  temp801 = (  fun1076 );
                ( temp801.fun ( &temp801.env ,  ( dref1078 .stuff .Maybe_140_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam802 (   struct env798* env ,    int32_t  i1910 ) {
    return ( (  set783 ) ( ( env->s1906 ) ,  ( (  i32_dash_size355 ) ( (  i1910 ) ) ) ,  ( ( env->fun1908 ) ( (  elem_dash_get787 ( ( env->s1906 ) , ( (  i32_dash_size355 ) ( (  i1910 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map796 (    struct Slice_255  s1906 ,    struct Cell_256 (*  fun1908 )(    struct Cell_256  ) ) {
    struct env798 envinst798 = {
        .s1906 =  s1906 ,
        .fun1908 =  fun1908 ,
    };
    ( (  for_dash_each797 ) ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32294 ) ( (  op_dash_sub403 ( ( (  s1906 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion799){ .fun = (  enum Unit_8  (*) (  struct env798*  ,    int32_t  ) )lam802 , .env =  envinst798 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_256   lam803 (    struct Cell_256  dref3470 ) {
    return ( (  default_dash_cell795 ) ( ) );
}

static  struct Screen_254   mk_dash_screen762 (    struct Tui_81 *  tui3464 ,    enum CAllocator_10  al3466 ) {
    struct Slice_255  cur3467 = ( (  allocate763 ) ( (  al3466 ) ,  ( (  u32_dash_size768 ) ( (  op_dash_mul152 ( ( ( * (  tui3464 ) ) .f_width ) , ( ( * (  tui3464 ) ) .f_height ) ) ) ) ) ) );
    ( (  map776 ) ( (  cur3467 ) ,  (  lam794 ) ) );
    struct Slice_255  prev3469 = ( (  allocate763 ) ( (  al3466 ) ,  ( (  u32_dash_size768 ) ( (  op_dash_mul152 ( ( ( * (  tui3464 ) ) .f_width ) , ( ( * (  tui3464 ) ) .f_height ) ) ) ) ) ) );
    ( (  map796 ) ( (  prev3469 ) ,  (  lam803 ) ) );
    return ( (struct Screen_254) { .f_current = (  cur3467 ) , .f_previous = (  prev3469 ) , .f_al = (  al3466 ) , .f_tui = (  tui3464 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_123) { .tag = Color_123_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_123) { .tag = Color_123_ColorDefault_t } ) } );
}

enum MouseButton_811 {
    MouseButton_811_MouseLeft,
    MouseButton_811_MouseMiddle,
    MouseButton_811_MouseRight,
    MouseButton_811_ScrollUp,
    MouseButton_811_ScrollDown,
};

struct MouseEvent_810 {
    enum MouseButton_811  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_809 {
    enum {
        InputEvent_809_Key_t,
        InputEvent_809_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_251  field0;
        } InputEvent_809_Key_s;
        struct {
            struct MouseEvent_810  field0;
        } InputEvent_809_Mouse_s;
    } stuff;
};

static struct InputEvent_809 InputEvent_809_Key (  struct Key_251  field0 ) {
    return ( struct InputEvent_809 ) { .tag = InputEvent_809_Key_t, .stuff = { .InputEvent_809_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_809 InputEvent_809_Mouse (  struct MouseEvent_810  field0 ) {
    return ( struct InputEvent_809 ) { .tag = InputEvent_809_Mouse_t, .stuff = { .InputEvent_809_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_808 {
    enum {
        Maybe_808_None_t,
        Maybe_808_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_809  field0;
        } Maybe_808_Just_s;
    } stuff;
};

static struct Maybe_808 Maybe_808_Just (  struct InputEvent_809  field0 ) {
    return ( struct Maybe_808 ) { .tag = Maybe_808_Just_t, .stuff = { .Maybe_808_Just_s = { .field0 = field0 } } };
};

struct envunion807 {
    struct Maybe_808  (*fun) (  struct env79*  ,    struct Tui_81 *  );
    struct env79 env;
};

struct env806 {
    struct Tui_81 *  tui4515;
    struct env79 envinst79;
};

struct envunion812 {
    struct Maybe_808  (*fun) (  struct env806*  );
    struct env806 env;
};

struct FunIter_805 {
    struct envunion812  f_fun;
    bool  f_finished;
};

static  struct FunIter_805   into_dash_iter813 (    struct FunIter_805  self1028 ) {
    return (  self1028 );
}

static  struct FunIter_805   from_dash_function814 (   struct envunion812  fun1036 ) {
    return ( (struct FunIter_805) { .f_fun = (  fun1036 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions819 (   struct env78* env ,    struct Tui_81 *  tui3430 ) {
    if ( ( ! ( * ( env->should_dash_resize3358 ) ) ) ) {
        return ( false );
    }
    (*  tui3430 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3358 ) = ( false );
    struct Tuple2_725  dim3431 = ( (  get_dash_dimensions726 ) ( ) );
    uint32_t  w3432 = ( (  fst759 ) ( (  dim3431 ) ) );
    uint32_t  h3433 = ( (  snd760 ) ( (  dim3431 ) ) );
    (*  tui3430 ) .f_width = (  w3432 );
    (*  tui3430 ) .f_height = (  h3433 );
    return ( true );
}

static  char   undefined822 (  ) {
    char  temp823;
    return (  temp823 );
}

struct Maybe_824 {
    enum {
        Maybe_824_None_t,
        Maybe_824_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_824_Just_s;
    } stuff;
};

static struct Maybe_824 Maybe_824_Just (  char  field0 ) {
    return ( struct Maybe_824 ) { .tag = Maybe_824_Just_t, .stuff = { .Maybe_824_Just_s = { .field0 = field0 } } };
};

struct Pollfd_826 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr827 (    struct Pollfd_826 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr830 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of831 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed828 (  ) {
    char  temp829;
    char  x570 = (  temp829 );
    ( ( memset ) ( ( (  cast_dash_ptr830 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of831 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_824   read_dash_byte825 (    int32_t  timeout_dash_ms3352 ) {
    struct Pollfd_826  pfd3353 = ( (struct Pollfd_826) { .f_fd = (  from_dash_integral56 ( 0 ) ) , .f_events = (  from_dash_integral738 ( 1 ) ) , .f_revents = (  from_dash_integral738 ( 0 ) ) } );
    if ( (  cmp142 ( ( ( poll ) ( ( (  cast_dash_ptr827 ) ( ( & (  pfd3353 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  (  timeout_dash_ms3352 ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_824) { .tag = Maybe_824_None_t } );
    }
    char  c3354 = ( ( (  zeroed828 ) ( ) ) );
    if ( (  cmp142 ( ( ( read ) ( ( (  stdin_dash_fileno639 ) ( ) ) ,  ( (  cast_dash_ptr830 ) ( ( & (  c3354 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_824) { .tag = Maybe_824_None_t } );
    }
    return ( ( Maybe_824_Just ) ( (  c3354 ) ) );
}

static  uint8_t   ascii_dash_u8832 (    char  c776 ) {
    return ( ( (uint8_t ) (  c776 ) ) );
}

static  char   u8_dash_ascii833 (    uint8_t  b779 ) {
    return ( ( (char ) (  b779 ) ) );
}

static  uint8_t *   cast837 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed835 (    uint8_t  x573 ) {
    uint32_t  temp836 = ( (  zeroed742 ) ( ) );
    uint32_t *  y574 = ( &temp836 );
    uint8_t *  yp575 = ( (  cast837 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32834 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed835 ) ( (  x672 ) ) );
}

struct Map_840 {
    struct StrViewIter_703  field0;
    uint32_t (*  field1 )(    struct Char_65  );
};

static struct Map_840 Map_840_Map (  struct StrViewIter_703  field0 ,  uint32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_840 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_840   into_dash_iter841 (    struct Map_840  self796 ) {
    return (  self796 );
}

static  struct Maybe_648   next842 (    struct Map_840 *  dref798 ) {
    struct Maybe_706  dref801 = ( (  next707 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_648) { .tag = Maybe_648_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_706_Just_t ) {
            return ( ( Maybe_648_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_706_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce839 (    struct Map_840  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct Map_840  it1099 = ( (  into_dash_iter841 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_648  dref1100 = ( (  next842 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_648_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_648_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_648_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp843 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp843);
    exit ( 1 );
    ( Unit_8_Unit );
    uint32_t  temp844;
    return (  temp844 );
}

static  struct Map_840   map845 (    struct StrView_30  iterable805 ,    uint32_t (*  fun807 )(    struct Char_65  ) ) {
    struct StrViewIter_703  it808 = ( (  into_dash_iter709 ) ( (  iterable805 ) ) );
    return ( ( Map_840_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  void *   cast_dash_ptr852 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of853 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed850 (  ) {
    int64_t  temp851;
    int64_t  x570 = (  temp851 );
    ( ( memset ) ( ( (  cast_dash_ptr852 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of853 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast854 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed848 (    uint8_t  x573 ) {
    int64_t  temp849 = ( (  zeroed850 ) ( ) );
    int64_t *  y574 = ( &temp849 );
    uint8_t *  yp575 = ( (  cast854 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64847 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed848 ) ( (  x666 ) ) );
}

struct StrConcat_857 {
    struct Char_65  field0;
    struct Char_65  field1;
};

static struct StrConcat_857 StrConcat_857_StrConcat (  struct Char_65  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_857 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_856 {
    struct StrConcat_857  field0;
    struct StrView_30  field1;
};

static struct StrConcat_856 StrConcat_856_StrConcat (  struct StrConcat_857  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_856 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_861 {
    struct StrView_30  field0;
    struct StrConcat_856  field1;
};

static struct StrConcat_861 StrConcat_861_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_856  field1 ) {
    return ( struct StrConcat_861 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_860 {
    struct StrConcat_861  field0;
    struct Char_65  field1;
};

static struct StrConcat_860 StrConcat_860_StrConcat (  struct StrConcat_861  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_860 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str864 (    struct StrConcat_857  self1509 ) {
    struct StrConcat_857  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str301 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str863 (    struct StrConcat_856  self1509 ) {
    struct StrConcat_856  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str864 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str293 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str862 (    struct StrConcat_861  self1509 ) {
    struct StrConcat_861  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str863 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str859 (    struct StrConcat_860  self1509 ) {
    struct StrConcat_860  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str862 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   panic858 (    struct StrConcat_856  errmsg1713 ) {
    ( (  print_dash_str859 ) ( ( ( StrConcat_860_StrConcat ) ( ( ( StrConcat_861_StrConcat ) ( ( (  from_dash_string183 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t   or_dash_fail855 (    struct Maybe_444  x1726 ,    struct StrConcat_856  errmsg1728 ) {
    struct Maybe_444  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_444_None_t ) {
        ( (  panic858 ) ( (  errmsg1728 ) ) );
        return ( (  undefined480 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_444_Just_t ) {
            return ( dref1729 .stuff .Maybe_444_Just_s .field0 );
        }
    }
}

static  enum Ordering_143   cmp866 (    struct Char_65  l744 ,    struct Char_65  r746 ) {
    if ( ( ( !  eq332 ( ( (  l744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq332 ( ( (  r746 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp867 = ( (  from_dash_string57 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp867);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( (  cmp318 ) ( ( (  char_dash_u8483 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8483 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub868 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add869 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_444   hex_dash_digit865 (    struct Char_65  c2571 ) {
    if ( ( (  cmp866 ( (  c2571 ) , ( (  from_dash_charlike314 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp866 ( (  c2571 ) , ( (  from_dash_charlike314 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_444_Just ) ( (  op_dash_sub868 ( ( (  char_dash_u8483 ) ( (  c2571 ) ) ) , ( (  char_dash_u8483 ) ( ( (  from_dash_charlike314 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp866 ( (  c2571 ) , ( (  from_dash_charlike314 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp866 ( (  c2571 ) , ( (  from_dash_charlike314 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_444_Just ) ( (  op_dash_add869 ( (  op_dash_sub868 ( ( (  char_dash_u8483 ) ( (  c2571 ) ) ) , ( (  char_dash_u8483 ) ( ( (  from_dash_charlike314 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral310 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp866 ( (  c2571 ) , ( (  from_dash_charlike314 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp866 ( (  c2571 ) , ( (  from_dash_charlike314 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_444_Just ) ( (  op_dash_add869 ( (  op_dash_sub868 ( ( (  char_dash_u8483 ) ( (  c2571 ) ) ) , ( (  char_dash_u8483 ) ( ( (  from_dash_charlike314 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral310 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_444) { .tag = Maybe_444_None_t } );
}

static  uint32_t   lam846 (    struct Char_65  c2576 ) {
    return ( (  from_dash_integral150 ) ( ( (  u8_dash_i64847 ) ( ( (  or_dash_fail855 ) ( ( (  hex_dash_digit865 ) ( (  c2576 ) ) ) ,  ( ( StrConcat_856_StrConcat ) ( ( ( StrConcat_857_StrConcat ) ( ( (  from_dash_charlike314 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2576 ) ) ) ,  ( (  from_dash_string183 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam870 (    uint32_t  elem2578 ,    uint32_t  b2580 ) {
    return (  op_dash_add156 ( (  op_dash_mul152 ( (  b2580 ) , (  from_dash_integral150 ( 16 ) ) ) ) , (  elem2578 ) ) );
}

static  uint32_t   from_dash_hex838 (    struct StrView_30  arr2574 ) {
    return ( (  reduce839 ) ( ( (  map845 ) ( (  arr2574 ) ,  (  lam846 ) ) ) ,  (  from_dash_integral150 ( 0 ) ) ,  (  lam870 ) ) );
}

static  bool   eq872 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike873 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq332 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp874 = ( (  from_dash_string57 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp874);
        exit ( 1 );
        ( Unit_8_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_875 {
    char _arr [32];
};

static  void *   cast_dash_ptr879 (    struct Array_875 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of880 (    struct Array_875  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_875   zeroed877 (  ) {
    struct Array_875  temp878;
    struct Array_875  x570 = (  temp878 );
    ( ( memset ) ( ( (  cast_dash_ptr879 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of880 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr884 (    struct Array_875 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr885 (    char *  x338 ,    int64_t  count340 ) {
    char  temp886;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp886 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr883 (    struct Array_875 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp283 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2254 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic286 ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2255 = ( ( (  cast_dash_ptr884 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr885 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  enum Unit_8   set882 (    struct Array_875 *  arr2264 ,    size_t  i2267 ,    char  e2269 ) {
    char *  p2270 = ( (  get_dash_ptr883 ) ( (  arr2264 ) ,  (  i2267 ) ) );
    (*  p2270 ) = (  e2269 );
    return ( Unit_8_Unit );
}

struct Slice_888 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail891 (    struct Maybe_824  x1726 ,    struct StrConcat_346  errmsg1728 ) {
    struct Maybe_824  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_824_None_t ) {
        ( (  panic345 ) ( (  errmsg1728 ) ) );
        return ( (  undefined822 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_824_Just_t ) {
            return ( dref1729 .stuff .Maybe_824_Just_s .field0 );
        }
    }
}

static  struct Maybe_824   try_dash_get892 (    struct Slice_888  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp283 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_824) { .tag = Maybe_824_None_t } );
    }
    char *  elem_dash_ptr1767 = ( (  offset_dash_ptr885 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_824_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  char   get890 (    struct Slice_888  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail891 ) ( ( (  try_dash_get892 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get889 (    struct Slice_888  self1868 ,    size_t  idx1870 ) {
    return ( (  get890 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

struct Scanner_893 {
    struct StrViewIter_703  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_893   mk_dash_from_dash_str895 (    struct StrView_30  s3199 ) {
    return ( (struct Scanner_893) { .f_s = ( (  chars708 ) ( (  s3199 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_899 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr428 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_30   substr896 (    struct StrView_30  s2173 ,    size_t  from2175 ,    size_t  to2177 ) {
    size_t  from_dash_bs2178 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_138  temp897 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( ( (  size_dash_i32294 ) ( (  from2175 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_140  __cond898 =  next141 (&temp897);
        if (  __cond898 .tag == 0 ) {
            break;
        }
        int32_t  dref2179 =  __cond898 .stuff .Maybe_140_Just_s .field0;
        if ( (  cmp283 ( (  from_dash_bs2178 ) , ( ( (  s2173 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2178 = (  op_dash_add325 ( (  from_dash_bs2178 ) , ( (  next_dash_char317 ) ( ( (  offset_dash_ptr_prime_899 ) ( ( ( (  s2173 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2178 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2180 = (  from_dash_bs2178 );
    struct RangeIter_138  temp900 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( (  op_dash_sub149 ( ( (  size_dash_i32294 ) ( (  to2177 ) ) ) , ( (  size_dash_i32294 ) ( (  from2175 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_140  __cond901 =  next141 (&temp900);
        if (  __cond901 .tag == 0 ) {
            break;
        }
        int32_t  dref2181 =  __cond901 .stuff .Maybe_140_Just_s .field0;
        if ( (  cmp283 ( (  to_dash_bs2180 ) , ( ( (  s2173 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2180 = (  op_dash_add325 ( (  to_dash_bs2180 ) , ( (  next_dash_char317 ) ( ( (  offset_dash_ptr_prime_899 ) ( ( ( (  s2173 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2180 ) ) ) ) ) ) );
    }
    return ( (struct StrView_30) { .f_contents = ( (  subslice427 ) ( ( (  s2173 ) .f_contents ) ,  (  from_dash_bs2178 ) ,  (  to_dash_bs2180 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr904 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_14   cast_dash_slice903 (    struct Slice_888  s1933 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr904 ) ( ( (  s1933 ) .f_ptr ) ) ) , .f_count = ( (  s1933 ) .f_count ) } );
}

static  struct StrView_30   from_dash_ascii_dash_slice902 (    struct Slice_888  sl2150 ) {
    return ( (struct StrView_30) { .f_contents = ( (  cast_dash_slice903 ) ( (  sl2150 ) ) ) } );
}

struct Maybe_905 {
    enum {
        Maybe_905_None_t,
        Maybe_905_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_905_Just_s;
    } stuff;
};

static struct Maybe_905 Maybe_905_Just (  int64_t  field0 ) {
    return ( struct Maybe_905 ) { .tag = Maybe_905_Just_t, .stuff = { .Maybe_905_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_907 {
    struct Scanner_893  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

static  struct Scanner_893   into_dash_iter910 (    struct Scanner_893  self3190 ) {
    return (  self3190 );
}

static  struct Scanner_893   into_dash_iter909 (    struct Scanner_893 *  self785 ) {
    return ( (  into_dash_iter910 ) ( ( * (  self785 ) ) ) );
}

static  struct TakeWhile_907   take_dash_while908 (    struct Scanner_893 *  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_907) { .f_it = ( (  into_dash_iter909 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   is_dash_digit911 (    struct Char_65  c2477 ) {
    return ( (  cmp318 ( ( (  char_dash_u8483 ) ( (  c2477 ) ) ) , ( (  char_dash_u8483 ) ( ( (  from_dash_charlike314 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp318 ( ( (  char_dash_u8483 ) ( (  c2477 ) ) ) , ( (  char_dash_u8483 ) ( ( (  from_dash_charlike314 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_706   next915 (    struct Scanner_893 *  self3185 ) {
    struct Maybe_706  dref3186 = ( (  next707 ) ( ( & ( ( * (  self3185 ) ) .f_s ) ) ) );
    if ( dref3186.tag == Maybe_706_Just_t ) {
        (*  self3185 ) .f_byte_dash_offset = (  op_dash_add325 ( ( ( * (  self3185 ) ) .f_byte_dash_offset ) , ( ( dref3186 .stuff .Maybe_706_Just_s .field0 ) .f_num_dash_bytes ) ) );
        return ( ( Maybe_706_Just ) ( ( dref3186 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref3186.tag == Maybe_706_None_t ) {
            return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
        }
    }
}

static  struct Maybe_706   next914 (    struct TakeWhile_907 *  self964 ) {
    struct Maybe_706  mx965 = ( (  next915 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_706  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_706_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_706_Just ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
            }
        }
    }
}

static  struct TakeWhile_907   into_dash_iter917 (    struct TakeWhile_907  self961 ) {
    return (  self961 );
}

static  struct Maybe_706   head913 (    struct TakeWhile_907  it1142 ) {
    struct TakeWhile_907  temp916 = ( (  into_dash_iter917 ) ( (  it1142 ) ) );
    return ( (  next914 ) ( ( &temp916 ) ) );
}

static  bool   null912 (    struct TakeWhile_907  it1151 ) {
    struct Maybe_706  dref1152 = ( (  head913 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_706_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env920 {
    struct Scanner_893 *  it1186;
    ;
};

struct envunion921 {
    struct Maybe_706  (*fun) (  struct env920*  ,    int32_t  );
    struct env920 env;
};

static  enum Unit_8   for_dash_each919 (    struct Range_135  iterable1074 ,   struct envunion921  fun1076 ) {
    struct RangeIter_138  temp922 = ( (  into_dash_iter139 ) ( (  iterable1074 ) ) );
    struct RangeIter_138 *  it1077 = ( &temp922 );
    while ( ( true ) ) {
        struct Maybe_140  dref1078 = ( (  next141 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_140_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_140_Just_t ) {
                struct envunion921  temp923 = (  fun1076 );
                ( temp923.fun ( &temp923.env ,  ( dref1078 .stuff .Maybe_140_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_706   lam924 (   struct env920* env ,    int32_t  dref1189 ) {
    return ( (  next915 ) ( ( env->it1186 ) ) );
}

static  enum Unit_8   drop_prime_918 (    struct Scanner_893 *  it1186 ,    size_t  n1188 ) {
    struct env920 envinst920 = {
        .it1186 =  it1186 ,
    };
    ( (  for_dash_each919 ) ( ( (  to148 ) ( (  from_dash_integral56 ( 1 ) ) ,  ( (  size_dash_i32294 ) ( (  n1188 ) ) ) ) ) ,  ( (struct envunion921){ .fun = (  struct Maybe_706  (*) (  struct env920*  ,    int32_t  ) )lam924 , .env =  envinst920 } ) ) );
    return ( Unit_8_Unit );
}

static  size_t   reduce926 (    struct TakeWhile_907  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct TakeWhile_907  it1099 = ( (  into_dash_iter917 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_706  dref1100 = ( (  next914 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_706_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_706_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_706_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp927 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp927);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp928;
    return (  temp928 );
}

static  size_t   lam929 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add325 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count925 (    struct TakeWhile_907  it1104 ) {
    return ( (  reduce926 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam929 ) ) );
}

static  struct TakeWhile_907   chars931 (    struct TakeWhile_907  self1657 ) {
    return (  self1657 );
}

static  struct Maybe_905   reduce932 (    struct TakeWhile_907  iterable1093 ,    struct Maybe_905  base1095 ,    struct Maybe_905 (*  fun1097 )(    struct Char_65  ,    struct Maybe_905  ) ) {
    struct Maybe_905  x1098 = (  base1095 );
    struct TakeWhile_907  it1099 = ( (  into_dash_iter917 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_706  dref1100 = ( (  next914 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_706_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_706_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_706_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp933 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp933);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_905  temp934;
    return (  temp934 );
}

static  void *   cast_dash_ptr942 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of943 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed940 (  ) {
    int32_t  temp941;
    int32_t  x570 = (  temp941 );
    ( ( memset ) ( ( (  cast_dash_ptr942 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of943 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast944 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed938 (    uint8_t  x573 ) {
    int32_t  temp939 = ( (  zeroed940 ) ( ) );
    int32_t *  y574 = ( &temp939 );
    uint8_t *  yp575 = ( (  cast944 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32937 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed938 ) ( (  x669 ) ) );
}

static  struct Maybe_140   parse_dash_digit936 (    struct Char_65  c2480 ) {
    if ( ( (  is_dash_digit911 ) ( (  c2480 ) ) ) ) {
        return ( ( Maybe_140_Just ) ( ( (  u8_dash_i32937 ) ( (  op_dash_sub868 ( ( (  char_dash_u8483 ) ( (  c2480 ) ) ) , ( (  char_dash_u8483 ) ( ( (  from_dash_charlike314 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
    }
}

static  int64_t   i32_dash_i64945 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_905   sequence_dash_maybe935 (    struct Char_65  e2486 ,    struct Maybe_905  b2488 ) {
    struct Maybe_905  dref2489 = (  b2488 );
    if ( dref2489.tag == Maybe_905_None_t ) {
        return ( (struct Maybe_905) { .tag = Maybe_905_None_t } );
    }
    else {
        if ( dref2489.tag == Maybe_905_Just_t ) {
            struct Maybe_140  dref2491 = ( (  parse_dash_digit936 ) ( (  e2486 ) ) );
            if ( dref2491.tag == Maybe_140_None_t ) {
                return ( (struct Maybe_905) { .tag = Maybe_905_None_t } );
            }
            else {
                if ( dref2491.tag == Maybe_140_Just_t ) {
                    return ( ( Maybe_905_Just ) ( (  op_dash_add504 ( (  op_dash_mul323 ( ( dref2489 .stuff .Maybe_905_Just_s .field0 ) , (  from_dash_integral402 ( 10 ) ) ) ) , ( (  i32_dash_i64945 ) ( ( dref2491 .stuff .Maybe_140_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_905   parse_dash_int930 (    struct TakeWhile_907  s2483 ) {
    struct TakeWhile_907  cs2493 = ( (  chars931 ) ( (  s2483 ) ) );
    struct Maybe_706  dref2494 = ( (  head913 ) ( (  cs2493 ) ) );
    if ( dref2494.tag == Maybe_706_Just_t ) {
        return ( (  reduce932 ) ( (  cs2493 ) ,  ( ( Maybe_905_Just ) ( (  from_dash_integral402 ( 0 ) ) ) ) ,  (  sequence_dash_maybe935 ) ) );
    }
    else {
        if ( dref2494.tag == Maybe_706_None_t ) {
            return ( (struct Maybe_905) { .tag = Maybe_905_None_t } );
        }
    }
}

static  struct Maybe_905   scan_dash_int906 (    struct Scanner_893 *  sc3202 ) {
    struct TakeWhile_907  digit_dash_chars3203 = ( (  take_dash_while908 ) ( (  sc3202 ) ,  (  is_dash_digit911 ) ) );
    if ( ( (  null912 ) ( (  digit_dash_chars3203 ) ) ) ) {
        return ( (struct Maybe_905) { .tag = Maybe_905_None_t } );
    }
    ( (  drop_prime_918 ) ( (  sc3202 ) ,  ( (  count925 ) ( (  digit_dash_chars3203 ) ) ) ) );
    return ( (  parse_dash_int930 ) ( (  digit_dash_chars3203 ) ) );
}

static  int32_t   i64_dash_i32947 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_949 {
    struct StrView_30  field0;
    int64_t  field1;
};

static struct StrConcat_949 StrConcat_949_StrConcat (  struct StrView_30  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_949 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_952 {
    struct StrView_30  field0;
    struct StrConcat_949  field1;
};

static struct StrConcat_952 StrConcat_952_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_949  field1 ) {
    return ( struct StrConcat_952 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_951 {
    struct StrConcat_952  field0;
    struct Char_65  field1;
};

static struct StrConcat_951 StrConcat_951_StrConcat (  struct StrConcat_952  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_951 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_957 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_956 {
    struct StrViewIter_703  f_left;
    struct IntStrIter_957  f_right;
};

struct StrConcatIter_955 {
    struct StrViewIter_703  f_left;
    struct StrConcatIter_956  f_right;
};

enum EmptyIter_959 {
    EmptyIter_959_EmptyIter,
};

struct AppendIter_958 {
    enum EmptyIter_959  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

struct StrConcatIter_954 {
    struct StrConcatIter_955  f_left;
    struct AppendIter_958  f_right;
};

static  struct StrConcatIter_954   into_dash_iter961 (    struct StrConcatIter_954  self1497 ) {
    return (  self1497 );
}

struct env968 {
    ;
    int64_t  base1210;
};

struct envunion969 {
    int64_t  (*fun) (  struct env968*  ,    int32_t  ,    int64_t  );
    struct env968 env;
};

static  int64_t   reduce967 (    struct Range_135  iterable1093 ,    int64_t  base1095 ,   struct envunion969  fun1097 ) {
    int64_t  x1098 = (  base1095 );
    struct RangeIter_138  it1099 = ( (  into_dash_iter139 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_140  dref1100 = ( (  next141 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_140_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_140_Just_t ) {
                struct envunion969  temp970 = (  fun1097 );
                x1098 = ( temp970.fun ( &temp970.env ,  ( dref1100 .stuff .Maybe_140_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp971 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp971);
    exit ( 1 );
    ( Unit_8_Unit );
    int64_t  temp972;
    return (  temp972 );
}

static  int64_t   lam973 (   struct env968* env ,    int32_t  item1214 ,    int64_t  x1216 ) {
    return (  op_dash_mul323 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int64_t   pow966 (    int64_t  base1210 ,    int32_t  p1212 ) {
    struct env968 envinst968 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce967 ) ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral402 ( 1 ) ) ,  ( (struct envunion969){ .fun = (  int64_t  (*) (  struct env968*  ,    int32_t  ,    int64_t  ) )lam973 , .env =  envinst968 } ) ) );
}

static  int64_t   op_dash_div974 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast975 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub976 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast982 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed980 (    uint8_t  x573 ) {
    size_t  temp981 = ( (  zeroed771 ) ( ) );
    size_t *  y574 = ( &temp981 );
    uint8_t *  yp575 = ( (  cast982 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size979 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed980 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer978 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add325 ( (  op_dash_sub403 ( (  s684 ) , ( (  u8_dash_size979 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer307 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul338 ( (  exp685 ) , ( (  u8_dash_size979 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast983 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_65   from_dash_u8977 (    uint8_t  b772 ) {
    uint8_t *  ptr773 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer978 ) ( ( ( (  cast983 ) ( ( (  u8_dash_size979 ) ( (  b772 ) ) ) ) ) ) ,  (  from_dash_integral310 ( 103 ) ) ) );
    return ( (struct Char_65) { .f_ptr = (  ptr773 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_706   next965 (    struct IntStrIter_957 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_706_Just ) ( ( (  from_dash_charlike314 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp142 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    int64_t  trim_dash_down1429 = ( (  pow966 ) ( (  from_dash_integral402 ( 10 ) ) ,  (  op_dash_sub149 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int64_t  upper1430 = (  op_dash_div974 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    int64_t  upper_dash_mask1431 = (  op_dash_mul323 ( (  op_dash_div974 ( (  upper1430 ) , (  from_dash_integral402 ( 10 ) ) ) ) , (  from_dash_integral402 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast975 ) ( (  op_dash_sub976 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub149 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8977 ) ( (  op_dash_add869 ( (  digit1432 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_706_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_706   next964 (    struct StrConcatIter_956 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next965 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next963 (    struct StrConcatIter_955 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next964 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next985 (    enum EmptyIter_959 *  dref792 ) {
    return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
}

static  struct Maybe_706   next984 (    struct AppendIter_958 *  self1022 ) {
    struct Maybe_706  dref1023 = ( (  next985 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1023 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_706_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_706_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
        }
    }
}

static  struct Maybe_706   next962 (    struct StrConcatIter_954 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next963 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next984 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each953 (    struct StrConcatIter_954  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_954  temp960 = ( (  into_dash_iter961 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_954 *  it1077 = ( &temp960 );
    while ( ( true ) ) {
        struct Maybe_706  dref1078 = ( (  next962 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_706_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_706_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_706_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_143   cmp994 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg995 (    int64_t  l204 ) {
    return ( (  from_dash_integral402 ( 0 ) ) - (  l204 ) );
}

static  bool   eq997 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits996 (    int64_t  self1436 ) {
    if ( (  eq997 ( (  self1436 ) , (  from_dash_integral402 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp994 ( (  self1436 ) , (  from_dash_integral402 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div974 ( (  self1436 ) , (  from_dash_integral402 ( 10 ) ) ) );
        digits1437 = (  op_dash_add144 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_957   int_dash_iter993 (    int64_t  int1440 ) {
    if ( (  cmp994 ( (  int1440 ) , (  from_dash_integral402 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_957) { .f_int = (  op_dash_neg995 ( (  int1440 ) ) ) , .f_len = ( (  count_dash_digits996 ) ( (  op_dash_neg995 ( (  int1440 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_957) { .f_int = (  int1440 ) , .f_len = ( (  count_dash_digits996 ) ( (  int1440 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_957   chars992 (    int64_t  self1467 ) {
    return ( (  int_dash_iter993 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_956   into_dash_iter991 (    struct StrConcat_949  dref1504 ) {
    return ( (struct StrConcatIter_956) { .f_left = ( (  chars708 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars992 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_956   chars990 (    struct StrConcat_949  self1515 ) {
    return ( (  into_dash_iter991 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_955   into_dash_iter989 (    struct StrConcat_952  dref1504 ) {
    return ( (struct StrConcatIter_955) { .f_left = ( (  chars708 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars990 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_955   chars988 (    struct StrConcat_952  self1515 ) {
    return ( (  into_dash_iter989 ) ( (  self1515 ) ) );
}

static  enum EmptyIter_959   into_dash_iter1002 (    enum EmptyIter_959  self790 ) {
    return (  self790 );
}

static  struct AppendIter_958   append1001 (    enum EmptyIter_959  it1006 ,    struct Char_65  e1008 ) {
    return ( (struct AppendIter_958) { .f_it = ( (  into_dash_iter1002 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_958   cons1000 (    enum EmptyIter_959  it1011 ,    struct Char_65  e1013 ) {
    return ( (  append1001 ) ( (  it1011 ) ,  (  e1013 ) ) );
}

static  enum EmptyIter_959   nil1003 (  ) {
    return ( EmptyIter_959_EmptyIter );
}

static  struct AppendIter_958   single999 (    struct Char_65  e1016 ) {
    return ( (  cons1000 ) ( ( (  nil1003 ) ( ) ) ,  (  e1016 ) ) );
}

static  struct AppendIter_958   chars998 (    struct Char_65  self1413 ) {
    return ( (  single999 ) ( (  self1413 ) ) );
}

static  struct StrConcatIter_954   into_dash_iter987 (    struct StrConcat_951  dref1504 ) {
    return ( (struct StrConcatIter_954) { .f_left = ( (  chars988 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars998 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_954   chars986 (    struct StrConcat_951  self1515 ) {
    return ( (  into_dash_iter987 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print950 (    struct StrConcat_951  s1702 ) {
    ( (  for_dash_each953 ) ( ( (  chars986 ) ( (  s1702 ) ) ) ,  (  printf_dash_char302 ) ) );
    return ( Unit_8_Unit );
}

static  enum MouseButton_811   undefined1004 (  ) {
    enum MouseButton_811  temp1005;
    return (  temp1005 );
}

static  enum MouseButton_811   panic_prime_948 (    struct StrConcat_949  errmsg1716 ) {
    ( (  print950 ) ( ( ( StrConcat_951_StrConcat ) ( ( ( StrConcat_952_StrConcat ) ( ( (  from_dash_string183 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1716 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined1004 ) ( ) );
}

static  enum MouseButton_811   btn_dash_to_dash_mouse_dash_button946 (    int64_t  btn3390 ) {
    return ( {  int32_t  dref3391 = ( (  i64_dash_i32947 ) ( (  btn3390 ) ) ) ;  dref3391 == 0 ? ( MouseButton_811_MouseLeft ) :  dref3391 == 1 ? ( MouseButton_811_MouseMiddle ) :  dref3391 == 2 ? ( MouseButton_811_MouseRight ) :  dref3391 == 64 ? ( MouseButton_811_ScrollUp ) :  dref3391 == 65 ? ( MouseButton_811_ScrollDown ) : ( (  panic_prime_948 ) ( ( ( StrConcat_949_StrConcat ) ( ( (  from_dash_string183 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3390 ) ) ) ) ) ; } );
}

static  struct Scanner_893   mk1007 (    struct StrView_30  s3193 ) {
    return ( (struct Scanner_893) { .f_s = ( (  into_dash_iter709 ) ( (  s3193 ) ) ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_808   parse_dash_csi887 (    struct Slice_888  seq3397 ) {
    if ( (  eq332 ( ( (  seq3397 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
    }
    char  last3398 = (  elem_dash_get889 ( (  seq3397 ) , (  op_dash_sub403 ( ( (  seq3397 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq872 ( (  elem_dash_get889 ( (  seq3397 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike873 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq872 ( (  last3398 ) , ( (  from_dash_charlike873 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq872 ( (  last3398 ) , ( (  from_dash_charlike873 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_893  temp894 = ( (  mk_dash_from_dash_str895 ) ( ( (  substr896 ) ( ( (  from_dash_ascii_dash_slice902 ) ( (  seq3397 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3397 ) .f_count ) ) ) ) );
        struct Scanner_893 *  sc3399 = ( &temp894 );
        struct Maybe_905  dref3400 = ( (  scan_dash_int906 ) ( (  sc3399 ) ) );
        if ( dref3400.tag == Maybe_905_None_t ) {
            return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
        }
        else {
            if ( dref3400.tag == Maybe_905_Just_t ) {
                ( (  next915 ) ( (  sc3399 ) ) );
                struct Maybe_905  dref3402 = ( (  scan_dash_int906 ) ( (  sc3399 ) ) );
                if ( dref3402.tag == Maybe_905_None_t ) {
                    return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
                }
                else {
                    if ( dref3402.tag == Maybe_905_Just_t ) {
                        ( (  next915 ) ( (  sc3399 ) ) );
                        struct Maybe_905  dref3404 = ( (  scan_dash_int906 ) ( (  sc3399 ) ) );
                        if ( dref3404.tag == Maybe_905_None_t ) {
                            return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
                        }
                        else {
                            if ( dref3404.tag == Maybe_905_Just_t ) {
                                return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Mouse ) ( ( (struct MouseEvent_810) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button946 ) ( ( dref3400 .stuff .Maybe_905_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub149 ( ( (  i64_dash_i32947 ) ( ( dref3402 .stuff .Maybe_905_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_y = (  op_dash_sub149 ( ( (  i64_dash_i32947 ) ( ( dref3404 .stuff .Maybe_905_Just_s .field0 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_pressed = (  eq872 ( (  last3398 ) , ( (  from_dash_charlike873 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq332 ( ( (  seq3397 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq872 ( (  last3398 ) , ( (  from_dash_charlike873 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Up_t } ) ) ) ) );
        }
        if ( (  eq872 ( (  last3398 ) , ( (  from_dash_charlike873 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Down_t } ) ) ) ) );
        }
        if ( (  eq872 ( (  last3398 ) , ( (  from_dash_charlike873 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Right_t } ) ) ) ) );
        }
        if ( (  eq872 ( (  last3398 ) , ( (  from_dash_charlike873 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Left_t } ) ) ) ) );
        }
        if ( (  eq872 ( (  last3398 ) , ( (  from_dash_charlike873 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Home_t } ) ) ) ) );
        }
        if ( (  eq872 ( (  last3398 ) , ( (  from_dash_charlike873 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
    }
    if ( (  eq872 ( (  last3398 ) , ( (  from_dash_charlike873 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_893  temp1006 = ( (  mk1007 ) ( ( (  from_dash_ascii_dash_slice902 ) ( (  seq3397 ) ) ) ) );
        struct Scanner_893 *  sc3406 = ( &temp1006 );
        struct Maybe_905  dref3407 = ( (  scan_dash_int906 ) ( (  sc3406 ) ) );
        if ( dref3407.tag == Maybe_905_None_t ) {
            return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
        }
        else {
            if ( dref3407.tag == Maybe_905_Just_t ) {
                return ( {  int32_t  dref3409 = ( (  i64_dash_i32947 ) ( ( dref3407 .stuff .Maybe_905_Just_s .field0 ) ) ) ;  dref3409 == 1 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Home_t } ) ) ) ) ) :  dref3409 == 2 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Insert_t } ) ) ) ) ) :  dref3409 == 3 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Delete_t } ) ) ) ) ) :  dref3409 == 4 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_End_t } ) ) ) ) ) :  dref3409 == 5 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_PageUp_t } ) ) ) ) ) :  dref3409 == 6 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_PageDown_t } ) ) ) ) ) :  dref3409 == 15 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_F5_t } ) ) ) ) ) :  dref3409 == 17 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_F6_t } ) ) ) ) ) :  dref3409 == 18 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_F7_t } ) ) ) ) ) :  dref3409 == 19 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_F8_t } ) ) ) ) ) :  dref3409 == 20 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_F9_t } ) ) ) ) ) :  dref3409 == 21 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_F10_t } ) ) ) ) ) :  dref3409 == 23 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_F11_t } ) ) ) ) ) :  dref3409 == 24 ? ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_F12_t } ) ) ) ) ) : ( (struct Maybe_808) { .tag = Maybe_808_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
}

static  struct Slice_888   subslice1008 (    struct Slice_888  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    char *  begin_dash_ptr1788 = ( (  offset_dash_ptr885 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp283 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp283 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_888) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub403 ( ( (  min430 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_888) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  char *   cast1010 (    struct Array_875 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_888   as_dash_slice1009 (    struct Array_875 *  arr2273 ) {
    return ( (struct Slice_888) { .f_ptr = ( (  cast1010 ) ( (  arr2273 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_1012 {
    enum {
        Maybe_1012_None_t,
        Maybe_1012_Just_t,
    } tag;
    union {
        struct {
            struct Key_251  field0;
        } Maybe_1012_Just_s;
    } stuff;
};

static struct Maybe_1012 Maybe_1012_Just (  struct Key_251  field0 ) {
    return ( struct Maybe_1012 ) { .tag = Maybe_1012_Just_t, .stuff = { .Maybe_1012_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1012   parse_dash_ss31013 (    char  c3394 ) {
    if ( (  eq872 ( (  c3394 ) , ( (  from_dash_charlike873 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1012_Just ) ( ( (struct Key_251) { .tag = Key_251_Up_t } ) ) );
    }
    if ( (  eq872 ( (  c3394 ) , ( (  from_dash_charlike873 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1012_Just ) ( ( (struct Key_251) { .tag = Key_251_Down_t } ) ) );
    }
    if ( (  eq872 ( (  c3394 ) , ( (  from_dash_charlike873 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1012_Just ) ( ( (struct Key_251) { .tag = Key_251_Right_t } ) ) );
    }
    if ( (  eq872 ( (  c3394 ) , ( (  from_dash_charlike873 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1012_Just ) ( ( (struct Key_251) { .tag = Key_251_Left_t } ) ) );
    }
    if ( (  eq872 ( (  c3394 ) , ( (  from_dash_charlike873 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1012_Just ) ( ( (struct Key_251) { .tag = Key_251_Home_t } ) ) );
    }
    if ( (  eq872 ( (  c3394 ) , ( (  from_dash_charlike873 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1012_Just ) ( ( (struct Key_251) { .tag = Key_251_End_t } ) ) );
    }
    if ( (  eq872 ( (  c3394 ) , ( (  from_dash_charlike873 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1012_Just ) ( ( (struct Key_251) { .tag = Key_251_F1_t } ) ) );
    }
    if ( (  eq872 ( (  c3394 ) , ( (  from_dash_charlike873 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1012_Just ) ( ( (struct Key_251) { .tag = Key_251_F2_t } ) ) );
    }
    if ( (  eq872 ( (  c3394 ) , ( (  from_dash_charlike873 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1012_Just ) ( ( (struct Key_251) { .tag = Key_251_F3_t } ) ) );
    }
    if ( (  eq872 ( (  c3394 ) , ( (  from_dash_charlike873 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_1012_Just ) ( ( (struct Key_251) { .tag = Key_251_F4_t } ) ) );
    }
    return ( (struct Maybe_1012) { .tag = Maybe_1012_None_t } );
}

static  struct Maybe_808   read_dash_key820 (  ) {
    char  temp821 = ( (  undefined822 ) ( ) );
    char *  ch3411 = ( &temp821 );
    struct Maybe_824  dref3412 = ( (  read_dash_byte825 ) ( (  from_dash_integral56 ( 0 ) ) ) );
    if ( dref3412.tag == Maybe_824_None_t ) {
        return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
    }
    else {
        if ( dref3412.tag == Maybe_824_Just_t ) {
            (*  ch3411 ) = ( dref3412 .stuff .Maybe_824_Just_s .field0 );
        }
    }
    if ( (  eq306 ( ( (  ascii_dash_u8832 ) ( ( * (  ch3411 ) ) ) ) , (  from_dash_integral310 ( 13 ) ) ) ) ) {
        return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Enter_t } ) ) ) ) );
    }
    if ( (  eq306 ( ( (  ascii_dash_u8832 ) ( ( * (  ch3411 ) ) ) ) , (  from_dash_integral310 ( 127 ) ) ) ) ) {
        return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp318 ( ( (  ascii_dash_u8832 ) ( ( * (  ch3411 ) ) ) ) , (  from_dash_integral310 ( 27 ) ) ) == 0 ) && ( !  eq306 ( ( (  ascii_dash_u8832 ) ( ( * (  ch3411 ) ) ) ) , (  from_dash_integral310 ( 9 ) ) ) ) ) ) {
        char  letter3414 = ( (  u8_dash_ascii833 ) ( ( (  u32_dash_u8129 ) ( ( (  u32_dash_or657 ) ( ( (  u8_dash_u32834 ) ( ( (  ascii_dash_u8832 ) ( ( * (  ch3411 ) ) ) ) ) ) ,  ( (  from_dash_hex838 ) ( ( (  from_dash_string183 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( ( Key_251_Ctrl ) ( (  letter3414 ) ) ) ) ) ) );
    }
    if ( ( !  eq306 ( ( (  ascii_dash_u8832 ) ( ( * (  ch3411 ) ) ) ) , (  from_dash_integral310 ( 27 ) ) ) ) ) {
        if ( (  cmp318 ( ( (  ascii_dash_u8832 ) ( ( * (  ch3411 ) ) ) ) , (  from_dash_integral310 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key820 ) ( ) );
        } else {
            return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( ( Key_251_Char ) ( ( * (  ch3411 ) ) ) ) ) ) ) );
        }
    }
    char  temp871 = ( (  undefined822 ) ( ) );
    char *  ch23415 = ( &temp871 );
    struct Maybe_824  dref3416 = ( (  read_dash_byte825 ) ( (  from_dash_integral56 ( 50 ) ) ) );
    if ( dref3416.tag == Maybe_824_None_t ) {
        return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3416.tag == Maybe_824_Just_t ) {
            (*  ch23415 ) = ( dref3416 .stuff .Maybe_824_Just_s .field0 );
        }
    }
    if ( (  eq872 ( ( * (  ch23415 ) ) , ( (  from_dash_charlike873 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_875  temp876 = ( ( (  zeroed877 ) ( ) ) );
        struct Array_875 *  seq3418 = ( &temp876 );
        int32_t  slen3419 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp142 ( (  slen3419 ) , (  from_dash_integral56 ( 31 ) ) ) == 0 ) ) {
            char  temp881 = ( (  undefined822 ) ( ) );
            char *  sc3420 = ( &temp881 );
            struct Maybe_824  dref3421 = ( (  read_dash_byte825 ) ( (  from_dash_integral56 ( 50 ) ) ) );
            if ( dref3421.tag == Maybe_824_None_t ) {
                break;
            }
            else {
                if ( dref3421.tag == Maybe_824_Just_t ) {
                    (*  sc3420 ) = ( dref3421 .stuff .Maybe_824_Just_s .field0 );
                }
            }
            ( (  set882 ) ( (  seq3418 ) ,  ( (  i32_dash_size355 ) ( (  slen3419 ) ) ) ,  ( * (  sc3420 ) ) ) );
            slen3419 = (  op_dash_add144 ( (  slen3419 ) , (  from_dash_integral56 ( 1 ) ) ) );
            if ( ( (  cmp318 ( ( (  ascii_dash_u8832 ) ( ( * (  sc3420 ) ) ) ) , (  from_dash_integral310 ( 64 ) ) ) != 0 ) && (  cmp318 ( ( (  ascii_dash_u8832 ) ( ( * (  sc3420 ) ) ) ) , (  from_dash_integral310 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi887 ) ( ( (  subslice1008 ) ( ( (  as_dash_slice1009 ) ( (  seq3418 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size355 ) ( (  slen3419 ) ) ) ) ) ) );
    }
    if ( (  eq872 ( ( * (  ch23415 ) ) , ( (  from_dash_charlike873 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp1011 = ( (  undefined822 ) ( ) );
        char *  sc3423 = ( &temp1011 );
        struct Maybe_824  dref3424 = ( (  read_dash_byte825 ) ( (  from_dash_integral56 ( 50 ) ) ) );
        if ( dref3424.tag == Maybe_824_None_t ) {
            return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3424.tag == Maybe_824_Just_t ) {
                (*  sc3423 ) = ( dref3424 .stuff .Maybe_824_Just_s .field0 );
            }
        }
        struct Maybe_1012  dref3426 = ( (  parse_dash_ss31013 ) ( ( * (  sc3423 ) ) ) );
        if ( dref3426.tag == Maybe_1012_None_t ) {
            return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
        }
        else {
            if ( dref3426.tag == Maybe_1012_Just_t ) {
                return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( dref3426 .stuff .Maybe_1012_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_808_Just ) ( ( ( InputEvent_809_Key ) ( ( (struct Key_251) { .tag = Key_251_Escape_t } ) ) ) ) );
}

static  struct Maybe_808   read_dash_event817 (   struct env79* env ,    struct Tui_81 *  tui3436 ) {
    struct envunion80  temp818 = ( (struct envunion80){ .fun = (  bool  (*) (  struct env78*  ,    struct Tui_81 *  ) )update_dash_dimensions819 , .env =  env->envinst78 } );
    ( temp818.fun ( &temp818.env ,  (  tui3436 ) ) );
    struct Maybe_808  dref3437 = ( (  read_dash_key820 ) ( ) );
    if ( dref3437.tag == Maybe_808_None_t ) {
        return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
    }
    else {
        if ( dref3437.tag == Maybe_808_Just_t ) {
            (*  tui3436 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_808_Just ) ( ( dref3437 .stuff .Maybe_808_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_808   lam815 (   struct env806* env ) {
    struct envunion807  temp816 = ( (struct envunion807){ .fun = (  struct Maybe_808  (*) (  struct env79*  ,    struct Tui_81 *  ) )read_dash_event817 , .env =  env->envinst79 } );
    return ( temp816.fun ( &temp816.env ,  ( env->tui4515 ) ) );
}

static  struct Maybe_808   next1015 (    struct FunIter_805 *  self1031 ) {
    if ( ( ( * (  self1031 ) ) .f_finished ) ) {
        return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
    }
    struct envunion812  temp1016 = ( ( * (  self1031 ) ) .f_fun );
    struct Maybe_808  dref1032 = ( temp1016.fun ( &temp1016.env ) );
    if ( dref1032.tag == Maybe_808_Just_t ) {
        return ( ( Maybe_808_Just ) ( ( dref1032 .stuff .Maybe_808_Just_s .field0 ) ) );
    }
    else {
        if ( dref1032.tag == Maybe_808_None_t ) {
            (*  self1031 ) .f_finished = ( true );
            return ( (struct Maybe_808) { .tag = Maybe_808_None_t } );
        }
    }
}

struct env1019 {
    ;
    struct Editor_228 *  ed4382;
};

struct envunion1020 {
    enum Unit_8  (*fun) (  struct env1019*  ,    struct StrView_30  );
    struct env1019 env;
};

static  enum Unit_8   if_dash_just1018 (    struct Maybe_229  x1291 ,   struct envunion1020  fun1293 ) {
    struct Maybe_229  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_229_Just_t ) {
        struct envunion1020  temp1021 = (  fun1293 );
        ( temp1021.fun ( &temp1021.env ,  ( dref1294 .stuff .Maybe_229_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_229_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1023 (    struct StrView_30  s2168 ,    enum CAllocator_10  al2170 ) {
    ( (  free471 ) ( (  al2170 ) ,  ( (struct Slice_14) { .f_ptr = ( ( (  s2168 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1022 (   struct env1019* env ,    struct StrView_30  msg4384 ) {
    ( (  free1023 ) ( (  msg4384 ) ,  ( ( * ( env->ed4382 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_msg1017 (    struct Editor_228 *  ed4382 ) {
    struct env1019 envinst1019 = {
        .ed4382 =  ed4382 ,
    };
    ( (  if_dash_just1018 ) ( ( ( * (  ed4382 ) ) .f_msg ) ,  ( (struct envunion1020){ .fun = (  enum Unit_8  (*) (  struct env1019*  ,    struct StrView_30  ) )lam1022 , .env =  envinst1019 } ) ) );
    (*  ed4382 ) .f_msg = ( (struct Maybe_229) { .tag = Maybe_229_None_t } );
    return ( Unit_8_Unit );
}

struct envunion1025 {
    enum Unit_8  (*fun) (  struct env242*  ,    struct Editor_228 *  ,    struct Key_251  );
    struct env242 env;
};

enum CursorMovement_1031 {
    CursorMovement_1031_NoChanges,
    CursorMovement_1031_UpdateVI,
    CursorMovement_1031_OverrideSelect,
};

struct Tuple2_1033 {
    enum CursorMovement_1031  field0;
    enum CursorMovement_1031  field1;
};

static struct Tuple2_1033 Tuple2_1033_Tuple2 (  enum CursorMovement_1031  field0 ,  enum CursorMovement_1031  field1 ) {
    return ( struct Tuple2_1033 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1032 (    enum CursorMovement_1031  l4123 ,    enum CursorMovement_1031  r4125 ) {
    return ( {  struct Tuple2_1033  dref4126 = ( ( Tuple2_1033_Tuple2 ) ( (  l4123 ) ,  (  r4125 ) ) ) ;  dref4126 .field0 == CursorMovement_1031_NoChanges &&  dref4126 .field1 == CursorMovement_1031_NoChanges ? ( true ) :  dref4126 .field0 == CursorMovement_1031_UpdateVI &&  dref4126 .field1 == CursorMovement_1031_UpdateVI ? ( true ) :  dref4126 .field0 == CursorMovement_1031_OverrideSelect &&  dref4126 .field1 == CursorMovement_1031_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_30   from_dash_bytes1037 (    struct Slice_14  sl2153 ) {
    return ( (struct StrView_30) { .f_contents = (  sl2153 ) } );
}

static  struct StrView_30   line1036 (    struct TextBuf_97 *  self3715 ,    int32_t  li3717 ) {
    return ( (  from_dash_bytes1037 ) ( ( (  to_dash_slice431 ) ( ( ( (  get424 ) ( ( & ( ( * (  self3715 ) ) .f_buf ) ) ,  ( (  i32_dash_size355 ) ( (  li3717 ) ) ) ) ) .f_line ) ) ) ) );
}

static  int32_t   maybe1040 (    struct Maybe_229  x1282 ,    int32_t (*  fun1284 )(    struct StrView_30  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_229  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_229_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_229_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_229   char_dash_replacement1041 (    struct Char_65  c4006 ) {
    if ( (  eq502 ( (  c4006 ) , ( (  from_dash_charlike314 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_229_Just ) ( ( (  from_dash_string183 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_229) { .tag = Maybe_229_None_t } );
    }
}

static  size_t   reduce1044 (    struct StrViewIter_703  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrViewIter_703  it1099 = ( (  into_dash_iter705 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_706  dref1100 = ( (  next707 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_706_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_706_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_706_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1045 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1045);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1046;
    return (  temp1046 );
}

static  size_t   lam1047 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add325 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1043 (    struct StrViewIter_703  it1104 ) {
    return ( (  reduce1044 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1047 ) ) );
}

static  int32_t   lam1042 (    struct StrView_30  s4011 ) {
    return ( (  size_dash_i32294 ) ( ( (  count1043 ) ( ( (  chars708 ) ( (  s4011 ) ) ) ) ) ) );
}

static  int32_t   max1049 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp142 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  void *   cast_dash_ptr1055 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1056 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed1053 (  ) {
    wchar_t  temp1054;
    wchar_t  x570 = (  temp1054 );
    ( ( memset ) ( ( (  cast_dash_ptr1055 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1056 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr1057 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast1058 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_1061 {
    size_t  f_size;
};

static  struct TypeSize_1061   get_dash_typesize1060 (  ) {
    wchar_t  temp1062;
    return ( (struct TypeSize_1061) { .f_size = ( sizeof( ( (  temp1062 ) ) ) ) } );
}

static  wchar_t   cast1064 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar1051 (    struct Char_65  c750 ) {
    struct CharDestructured_303  dref751 = ( (  destructure305 ) ( (  c750 ) ) );
    if ( dref751.tag == CharDestructured_303_Ref_t ) {
        wchar_t  temp1052 = ( (  zeroed1053 ) ( ) );
        wchar_t *  wcp753 = ( &temp1052 );
        size_t  num_dash_chars754 = ( ( mbstowcs ) ( (  wcp753 ) ,  ( (  cast_dash_ptr1057 ) ( ( ( dref751 .stuff .CharDestructured_303_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq332 ( (  num_dash_chars754 ) , ( ( (  cast1058 ) ( ( (  op_dash_neg995 ( (  from_dash_integral402 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp1059 = ( (  from_dash_string57 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp1059);
            exit ( 1 );
            ( Unit_8_Unit );
        }
        return ( * (  wcp753 ) );
    }
    else {
        if ( dref751.tag == CharDestructured_303_Scalar_t ) {
            if ( ( ! (  eq332 ( ( (  size_dash_of745 ) ( ( ( dref751 .stuff .CharDestructured_303_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize1060 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp1063 = ( (  from_dash_string57 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp1063);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            return ( (  cast1064 ) ( ( ( dref751 .stuff .CharDestructured_303_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth1050 (    struct Char_65  c2598 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar1051 ) ( (  c2598 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth1048 (    struct Char_65  c3481 ) {
    return ( (  max1049 ) ( ( (  wcwidth1050 ) ( (  c3481 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width1039 (    struct Char_65  c4009 ) {
    return ( (  maybe1040 ) ( ( (  char_dash_replacement1041 ) ( (  c4009 ) ) ) ,  (  lam1042 ) ,  ( (  rendered_dash_wcwidth1048 ) ( (  c4009 ) ) ) ) );
}

static  int32_t   pos_dash_vi1034 (    struct TextBuf_97 *  self4025 ,    struct Pos_29  pos4027 ) {
    int32_t  bi4028 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4029 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_703  temp1035 =  into_dash_iter705 ( ( (  chars708 ) ( ( (  line1036 ) ( (  self4025 ) ,  ( (  pos4027 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_706  __cond1038 =  next707 (&temp1035);
        if (  __cond1038 .tag == 0 ) {
            break;
        }
        struct Char_65  c4031 =  __cond1038 .stuff .Maybe_706_Just_s .field0;
        bi4028 = (  op_dash_add144 ( (  bi4028 ) , ( (  size_dash_i32294 ) ( ( (  c4031 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp142 ( ( (  pos4027 ) .f_bi ) , (  bi4028 ) ) == 0 ) ) {
            break;
        }
        vi4029 = (  op_dash_add144 ( (  vi4029 ) , ( (  char_dash_screen_dash_width1039 ) ( (  c4031 ) ) ) ) );
    }
    return (  vi4029 );
}

struct Tuple2_1067 {
    enum Mode_205  field0;
    enum Mode_205  field1;
};

static struct Tuple2_1067 Tuple2_1067_Tuple2 (  enum Mode_205  field0 ,  enum Mode_205  field1 ) {
    return ( struct Tuple2_1067 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1066 (    enum Mode_205  l3985 ,    enum Mode_205  r3987 ) {
    return ( {  struct Tuple2_1067  dref3988 = ( ( Tuple2_1067_Tuple2 ) ( (  l3985 ) ,  (  r3987 ) ) ) ;  dref3988 .field0 == Mode_205_Normal &&  dref3988 .field1 == Mode_205_Normal ? ( true ) :  dref3988 .field0 == Mode_205_Insert &&  dref3988 .field1 == Mode_205_Insert ? ( true ) :  dref3988 .field0 == Mode_205_Select &&  dref3988 .field1 == Mode_205_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_8   set_dash_sel1065 (    struct Pane_204 *  self4112 ,    struct Maybe_32  sel4114 ) {
    if ( ( !  eq1066 ( ( ( * (  self4112 ) ) .f_mode ) , ( Mode_205_Select ) ) ) ) {
        (*  self4112 ) .f_sel = (  sel4114 );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_cursors1030 (    struct Pane_204 *  self4129 ,    struct Pos_29  cur4131 ,    struct Maybe_32  sel4133 ,    enum CursorMovement_1031  cursor_dash_movement_dash_type4135 ) {
    if ( ( !  eq1032 ( (  cursor_dash_movement_dash_type4135 ) , ( CursorMovement_1031_NoChanges ) ) ) ) {
        (*  self4129 ) .f_vi = ( (  pos_dash_vi1034 ) ( ( ( * (  self4129 ) ) .f_buf ) ,  (  cur4131 ) ) );
    }
    (*  self4129 ) .f_cursor = (  cur4131 );
    if ( ( !  eq1032 ( (  cursor_dash_movement_dash_type4135 ) , ( CursorMovement_1031_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel1065 ) ( (  self4129 ) ,  (  sel4133 ) ) );
    } else {
        (*  self4129 ) .f_sel = (  sel4133 );
    }
    return ( Unit_8_Unit );
}

static  size_t   num_dash_bytes1069 (    struct StrView_30  self2196 ) {
    return ( ( (  self2196 ) .f_contents ) .f_count );
}

static  size_t   clamp1070 (    size_t  x1352 ,    size_t  mn1354 ,    size_t  mx1356 ) {
    if ( (  cmp283 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp283 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  size_t   sync_dash_char1072 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg995 ( ( (  size_dash_i64354 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp318 ( (  pb694 ) , (  from_dash_integral310 ( 128 ) ) ) != 0 ) && (  cmp318 ( (  pb694 ) , (  op_dash_add869 ( (  from_dash_integral310 ( 128 ) ) , (  from_dash_integral310 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add325 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char1071 (    uint8_t *  p697 ) {
    return (  op_dash_add325 ( ( (  sync_dash_char1072 ) ( ( (  offset_dash_ptr428 ) ( (  p697 ) ,  (  op_dash_neg995 ( (  from_dash_integral402 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_29   left_dash_pos1068 (    struct TextBuf_97 *  self3736 ,    struct Pos_29  pos3738 ) {
    if ( (  eq417 ( (  pos3738 ) , ( (  mk397 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk397 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    if ( (  eq418 ( ( (  pos3738 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        ( (  assert577 ) ( (  cmp142 ( ( (  pos3738 ) .f_line ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string183 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk397 ) ( (  op_dash_sub149 ( ( (  pos3738 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  size_dash_i32294 ) ( ( (  num_dash_bytes1069 ) ( ( (  line1036 ) ( (  self3736 ) ,  (  op_dash_sub149 ( ( (  pos3738 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_30  line3739 = ( (  line1036 ) ( (  self3736 ) ,  ( (  pos3738 ) .f_line ) ) );
    size_t  pos_dash_bi3740 = ( (  clamp1070 ) ( ( (  i32_dash_size355 ) ( ( (  pos3738 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes1069 ) ( (  line3739 ) ) ) ) );
    size_t  off3741 = ( (  previous_dash_char1071 ) ( ( (  offset_dash_ptr428 ) ( ( ( (  line3739 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  pos_dash_bi3740 ) ) ) ) ) ) );
    return ( (  mk397 ) ( ( (  pos3738 ) .f_line ) ,  ( (  size_dash_i32294 ) ( (  op_dash_sub403 ( (  pos_dash_bi3740 ) , (  off3741 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_left1029 (    struct Pane_204 *  self4141 ) {
    ( (  set_dash_cursors1030 ) ( (  self4141 ) ,  ( (  left_dash_pos1068 ) ( ( ( * (  self4141 ) ) .f_buf ) ,  ( ( * (  self4141 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  struct Pane_204 *   pane1073 (    struct Editor_228 *  ed4372 ) {
    return ( & ( ( * (  ed4372 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines1076 (    struct TextBuf_97 *  self3720 ) {
    return ( (  size_dash_i32294 ) ( ( (  size419 ) ( ( & ( ( * (  self3720 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_29   right_dash_pos1075 (    struct TextBuf_97 *  self3728 ,    struct Pos_29  pos3730 ) {
    if ( (  cmp142 ( ( (  pos3730 ) .f_line ) , ( (  num_dash_lines1076 ) ( (  self3728 ) ) ) ) != 0 ) ) {
        return ( (  mk397 ) ( ( (  num_dash_lines1076 ) ( (  self3728 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    struct StrView_30  line3731 = ( (  line1036 ) ( (  self3728 ) ,  ( (  pos3730 ) .f_line ) ) );
    int64_t  bi3732 = ( (  i32_dash_i64945 ) ( ( (  pos3730 ) .f_bi ) ) );
    if ( (  cmp994 ( (  bi3732 ) , ( (  size_dash_i64354 ) ( ( (  num_dash_bytes1069 ) ( (  line3731 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp142 ( (  op_dash_add144 ( ( (  pos3730 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1076 ) ( (  self3728 ) ) ) ) != 0 ) ) {
            return ( (  mk397 ) ( ( (  pos3730 ) .f_line ) ,  ( (  size_dash_i32294 ) ( ( (  num_dash_bytes1069 ) ( (  line3731 ) ) ) ) ) ) );
        }
        return ( (  mk397 ) ( (  op_dash_add144 ( ( (  pos3730 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    }
    int32_t  off3733 = ( (  size_dash_i32294 ) ( ( (  next_dash_char317 ) ( ( (  offset_dash_ptr428 ) ( ( ( (  line3731 ) .f_contents ) .f_ptr ) ,  (  bi3732 ) ) ) ) ) ) );
    return ( (  mk397 ) ( ( (  pos3730 ) .f_line ) ,  (  op_dash_add144 ( ( (  pos3730 ) .f_bi ) , (  off3733 ) ) ) ) );
}

static  enum Unit_8   move_dash_right1074 (    struct Pane_204 *  self4138 ) {
    ( (  set_dash_cursors1030 ) ( (  self4138 ) ,  ( (  right_dash_pos1075 ) ( ( ( * (  self4138 ) ) .f_buf ) ,  ( ( * (  self4138 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   vi_dash_bi1078 (    struct TextBuf_97 *  self4014 ,    int32_t  ln4016 ,    int32_t  vx4018 ) {
    int32_t  bi4019 = ( (  from_dash_integral56 ( 0 ) ) );
    int32_t  vi4020 = (  from_dash_integral56 ( 0 ) );
    struct StrViewIter_703  temp1079 =  into_dash_iter705 ( ( (  chars708 ) ( ( (  line1036 ) ( (  self4014 ) ,  (  ln4016 ) ) ) ) ) );
    while (true) {
        struct Maybe_706  __cond1080 =  next707 (&temp1079);
        if (  __cond1080 .tag == 0 ) {
            break;
        }
        struct Char_65  c4022 =  __cond1080 .stuff .Maybe_706_Just_s .field0;
        vi4020 = (  op_dash_add144 ( (  vi4020 ) , ( (  char_dash_screen_dash_width1039 ) ( (  c4022 ) ) ) ) );
        if ( (  cmp142 ( (  vx4018 ) , (  vi4020 ) ) == 0 ) ) {
            break;
        }
        bi4019 = (  op_dash_add144 ( (  bi4019 ) , ( (  size_dash_i32294 ) ( ( (  c4022 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi4019 );
}

static  enum Unit_8   move_dash_down1077 (    struct Pane_204 *  self4144 ,    int32_t  amnt4146 ) {
    struct Pos_29  cur4147 = ( ( * (  self4144 ) ) .f_cursor );
    int32_t  nu_dash_line4148 = ( (  min569 ) ( (  op_dash_add144 ( ( (  cur4147 ) .f_line ) , (  amnt4146 ) ) ) ,  (  op_dash_sub149 ( ( (  num_dash_lines1076 ) ( ( ( * (  self4144 ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  vci4149 = ( ( * (  self4144 ) ) .f_vi );
    int32_t  bi4150 = ( (  vi_dash_bi1078 ) ( ( ( * (  self4144 ) ) .f_buf ) ,  (  nu_dash_line4148 ) ,  (  vci4149 ) ) );
    ( (  set_dash_cursors1030 ) ( (  self4144 ) ,  ( (struct Pos_29) { .f_line = (  nu_dash_line4148 ) , .f_bi = (  bi4150 ) } ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_up1081 (    struct Pane_204 *  self4153 ,    int32_t  amnt4155 ) {
    struct Pos_29  cur4156 = ( ( * (  self4153 ) ) .f_cursor );
    int32_t  nu_dash_line4157 = ( (  max1049 ) ( (  op_dash_sub149 ( ( (  cur4156 ) .f_line ) , (  amnt4155 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  vci4158 = ( ( * (  self4153 ) ) .f_vi );
    int32_t  bi4159 = ( (  vi_dash_bi1078 ) ( ( ( * (  self4153 ) ) .f_buf ) ,  (  nu_dash_line4157 ) ,  (  vci4158 ) ) );
    ( (  set_dash_cursors1030 ) ( (  self4153 ) ,  ( (struct Pos_29) { .f_line = (  nu_dash_line4157 ) , .f_bi = (  bi4159 ) } ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_NoChanges ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   flush_dash_insert_dash_action1083 (    struct TextBuf_97 *  self3803 ) {
    (*  self3803 ) .f_actions .f_input_dash_changeset = ( ChangesetInputType_99_NoChangeset );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_mode1082 (    struct Pane_204 *  self4117 ,    enum Mode_205  mode4119 ) {
    if ( (  eq1066 ( (  mode4119 ) , ( Mode_205_Normal ) ) ) ) {
        ( (  flush_dash_insert_dash_action1083 ) ( ( ( * (  self4117 ) ) .f_buf ) ) );
    }
    (*  self4117 ) .f_mode = (  mode4119 );
    return ( Unit_8_Unit );
}

struct TakeWhile_1088 {
    struct StrViewIter_703  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1087 {
    struct TakeWhile_1088  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1087 Map_1087_Map (  struct TakeWhile_1088  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1087 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1087   into_dash_iter1090 (    struct Map_1087  self796 ) {
    return (  self796 );
}

struct Maybe_1091 {
    enum {
        Maybe_1091_None_t,
        Maybe_1091_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1091_Just_s;
    } stuff;
};

static struct Maybe_1091 Maybe_1091_Just (  size_t  field0 ) {
    return ( struct Maybe_1091 ) { .tag = Maybe_1091_Just_t, .stuff = { .Maybe_1091_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_706   next1093 (    struct TakeWhile_1088 *  self964 ) {
    struct Maybe_706  mx965 = ( (  next707 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_706  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_706_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_706_Just ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
            }
        }
    }
}

static  struct Maybe_1091   next1092 (    struct Map_1087 *  dref798 ) {
    struct Maybe_706  dref801 = ( (  next1093 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_1091) { .tag = Maybe_1091_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_706_Just_t ) {
            return ( ( Maybe_1091_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_706_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1089 (    struct Map_1087  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1087  it1099 = ( (  into_dash_iter1090 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1091  dref1100 = ( (  next1092 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1091_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1091_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1091_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1094 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1094);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1095;
    return (  temp1095 );
}

static  size_t   lam1096 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add325 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1086 (    struct Map_1087  it1110 ) {
    return ( (  reduce1089 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1096 ) ) );
}

static  struct TakeWhile_1088   into_dash_iter1098 (    struct TakeWhile_1088  self961 ) {
    return (  self961 );
}

static  struct Map_1087   map1097 (    struct TakeWhile_1088  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1088  it808 = ( (  into_dash_iter1098 ) ( (  iterable805 ) ) );
    return ( ( Map_1087_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1088   take_dash_while1099 (    struct StrView_30  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1088) { .f_it = ( (  into_dash_iter709 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   lam1100 (    struct Char_65  c4207 ) {
    return (  eq502 ( (  c4207 ) , ( (  from_dash_charlike314 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
}

static  size_t   lam1101 (    struct Char_65  c4209 ) {
    return ( (  c4209 ) .f_num_dash_bytes );
}

static  int32_t   indent_dash_at_dash_line1085 (    struct Pane_204 *  pane4203 ,    int32_t  line4205 ) {
    return ( (  size_dash_i32294 ) ( ( (  sum1086 ) ( ( (  map1097 ) ( ( (  take_dash_while1099 ) ( ( (  line1036 ) ( ( ( * (  pane4203 ) ) .f_buf ) ,  (  line4205 ) ) ) ,  (  lam1100 ) ) ) ,  (  lam1101 ) ) ) ) ) ) );
}

static  enum Unit_8   move_dash_to_dash_beginning_dash_indented1084 (    struct Pane_204 *  self4222 ) {
    struct Pos_29  cur4223 = ( ( * (  self4222 ) ) .f_cursor );
    int32_t  indent4224 = ( (  indent_dash_at_dash_line1085 ) ( (  self4222 ) ,  ( (  cur4223 ) .f_line ) ) );
    struct Pos_29  temp1102 = (  cur4223 );
    temp1102 .  f_bi = (  indent4224 );
    ( (  set_dash_cursors1030 ) ( (  self4222 ) ,  ( temp1102 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_end1103 (    struct Pane_204 *  self4227 ) {
    struct Pos_29  cur4228 = ( ( * (  self4227 ) ) .f_cursor );
    struct Pos_29  temp1104 = (  cur4228 );
    temp1104 .  f_bi = ( (  size_dash_i32294 ) ( ( (  num_dash_bytes1069 ) ( ( (  line1036 ) ( ( ( * (  self4227 ) ) .f_buf ) ,  ( (  cur4228 ) .f_line ) ) ) ) ) ) );
    ( (  set_dash_cursors1030 ) ( (  self4227 ) ,  ( temp1104 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct SliceIter_1112 {
    struct Slice_24  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1111 {
    struct SliceIter_1112  field0;
    size_t  field1;
};

static struct Drop_1111 Drop_1111_Drop (  struct SliceIter_1112  field0 ,  size_t  field1 ) {
    return ( struct Drop_1111 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1111   into_dash_iter1113 (    struct Drop_1111  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1112   into_dash_iter1116 (    struct Slice_24  self1823 ) {
    return ( (struct SliceIter_1112) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Changeset_25 *   offset_dash_ptr1118 (    struct Changeset_25 *  x338 ,    int64_t  count340 ) {
    struct Changeset_25  temp1119;
    return ( (struct Changeset_25 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1119 ) ) ) ) ) ) ) ) );
}

static  struct Slice_24   subslice1117 (    struct Slice_24  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Changeset_25 *  begin_dash_ptr1788 = ( (  offset_dash_ptr1118 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp283 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp283 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub403 ( ( (  min430 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_24) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_1112   into_dash_iter1115 (    struct List_23  self2029 ) {
    return ( (  into_dash_iter1116 ) ( ( (  subslice1117 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  struct Drop_1111   drop1114 (    struct List_23  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1112  it855 = ( (  into_dash_iter1115 ) ( (  iterable852 ) ) );
    return ( ( Drop_1111_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1121 {
    enum {
        Maybe_1121_None_t,
        Maybe_1121_Just_t,
    } tag;
    union {
        struct {
            struct Changeset_25  field0;
        } Maybe_1121_Just_s;
    } stuff;
};

static struct Maybe_1121 Maybe_1121_Just (  struct Changeset_25  field0 ) {
    return ( struct Maybe_1121 ) { .tag = Maybe_1121_Just_t, .stuff = { .Maybe_1121_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1121   next1123 (    struct SliceIter_1112 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp283 ( (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1121) { .tag = Maybe_1121_None_t } );
    }
    struct Changeset_25  elem1831 = ( * ( (  offset_dash_ptr1118 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1121_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_1121   next1122 (    struct Drop_1111 *  dref847 ) {
    while ( (  cmp283 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1123 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub403 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1123 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

struct env1126 {
    enum CAllocator_10  al3678;
    ;
};

struct envunion1127 {
    enum Unit_8  (*fun) (  struct env1126*  ,    struct Action_28  );
    struct env1126 env;
};

struct SliceIter_1128 {
    struct Slice_27  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_1128   into_dash_iter1131 (    struct Slice_27  self1823 ) {
    return ( (struct SliceIter_1128) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Action_28 *   offset_dash_ptr1133 (    struct Action_28 *  x338 ,    int64_t  count340 ) {
    struct Action_28  temp1134;
    return ( (struct Action_28 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1134 ) ) ) ) ) ) ) ) );
}

static  struct Slice_27   subslice1132 (    struct Slice_27  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Action_28 *  begin_dash_ptr1788 = ( (  offset_dash_ptr1133 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp283 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp283 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_27) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub403 ( ( (  min430 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_27) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_1128   into_dash_iter1130 (    struct List_26  self2029 ) {
    return ( (  into_dash_iter1131 ) ( ( (  subslice1132 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

struct Maybe_1135 {
    enum {
        Maybe_1135_None_t,
        Maybe_1135_Just_t,
    } tag;
    union {
        struct {
            struct Action_28  field0;
        } Maybe_1135_Just_s;
    } stuff;
};

static struct Maybe_1135 Maybe_1135_Just (  struct Action_28  field0 ) {
    return ( struct Maybe_1135 ) { .tag = Maybe_1135_Just_t, .stuff = { .Maybe_1135_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1135   next1136 (    struct SliceIter_1128 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp283 ( (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1135) { .tag = Maybe_1135_None_t } );
    }
    struct Action_28  elem1831 = ( * ( (  offset_dash_ptr1133 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1135_Just ) ( (  elem1831 ) ) );
}

static  enum Unit_8   for_dash_each1125 (    struct List_26  iterable1074 ,   struct envunion1127  fun1076 ) {
    struct SliceIter_1128  temp1129 = ( (  into_dash_iter1130 ) ( (  iterable1074 ) ) );
    struct SliceIter_1128 *  it1077 = ( &temp1129 );
    while ( ( true ) ) {
        struct Maybe_1135  dref1078 = ( (  next1136 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1135_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1135_Just_t ) {
                struct envunion1127  temp1137 = (  fun1076 );
                ( temp1137.fun ( &temp1137.env ,  ( dref1078 .stuff .Maybe_1135_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_action1139 (    struct Action_28  action3671 ,    enum CAllocator_10  al3673 ) {
    ( (  free1023 ) ( ( (  action3671 ) .f_fwd ) ,  (  al3673 ) ) );
    ( (  free1023 ) ( ( (  action3671 ) .f_bwd ) ,  (  al3673 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1138 (   struct env1126* env ,    struct Action_28  a3680 ) {
    return ( (  free_dash_action1139 ) ( (  a3680 ) ,  ( env->al3678 ) ) );
}

static  void *   cast_dash_ptr1142 (    struct Action_28 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1141 (    enum CAllocator_10  dref1960 ,    struct Slice_27  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1142 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1140 (    struct List_26 *  list2036 ) {
    ( (  free1141 ) ( ( ( * (  list2036 ) ) .f_al ) ,  ( ( * (  list2036 ) ) .f_elements ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_changeset1124 (    struct Changeset_25  chs3676 ,    enum CAllocator_10  al3678 ) {
    struct env1126 envinst1126 = {
        .al3678 =  al3678 ,
    };
    ( (  for_dash_each1125 ) ( ( (  chs3676 ) .f_parts ) ,  ( (struct envunion1127){ .fun = (  enum Unit_8  (*) (  struct env1126*  ,    struct Action_28  ) )lam1138 , .env =  envinst1126 } ) ) );
    ( (  free1140 ) ( ( & ( (  chs3676 ) .f_parts ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1143 (    struct List_23 *  l2116 ,    size_t  new_dash_count2118 ) {
    (*  l2116 ) .f_count = ( (  min430 ) ( (  new_dash_count2118 ) ,  ( ( * (  l2116 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim_dash_actions1109 (    struct Actions_98 *  actions3694 ) {
    enum CAllocator_10  al3695 = ( ( ( * (  actions3694 ) ) .f_list ) .f_al );
    size_t  cur3696 = ( ( * (  actions3694 ) ) .f_cur );
    struct Drop_1111  temp1110 =  into_dash_iter1113 ( ( (  drop1114 ) ( ( ( * (  actions3694 ) ) .f_list ) ,  (  cur3696 ) ) ) );
    while (true) {
        struct Maybe_1121  __cond1120 =  next1122 (&temp1110);
        if (  __cond1120 .tag == 0 ) {
            break;
        }
        struct Changeset_25  action3698 =  __cond1120 .stuff .Maybe_1121_Just_s .field0;
        ( (  free_dash_changeset1124 ) ( (  action3698 ) ,  (  al3695 ) ) );
    }
    ( (  trim1143 ) ( ( & ( ( * (  actions3694 ) ) .f_list ) ) ,  (  cur3696 ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_30   clone_dash_01145 (    struct StrView_30  s2156 ,    enum CAllocator_10  al2158 ) {
    size_t  cnt2159 = ( ( (  s2156 ) .f_contents ) .f_count );
    struct Slice_14  nus2160 = ( (  allocate452 ) ( (  al2158 ) ,  (  op_dash_add325 ( (  cnt2159 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to552 ) ( ( (  s2156 ) .f_contents ) ,  (  nus2160 ) ) );
    ( (  set461 ) ( (  nus2160 ) ,  (  cnt2159 ) ,  ( (  char_dash_u8483 ) ( ( (  from_dash_charlike314 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = ( (  nus2160 ) .f_ptr ) , .f_count = (  cnt2159 ) } ) } );
}

static  struct StrView_30   clone1144 (    struct StrView_30  s2163 ,    enum CAllocator_10  al2165 ) {
    return ( (  clone_dash_01145 ) ( (  s2163 ) ,  (  al2165 ) ) );
}

static  struct Maybe_229   head1147 (    struct SplitIter_491  it1142 ) {
    struct SplitIter_491  temp1148 = ( (  into_dash_iter498 ) ( (  it1142 ) ) );
    return ( (  next512 ) ( ( &temp1148 ) ) );
}

static  struct Maybe_229   head1150 (    struct Drop_490  it1142 ) {
    struct Drop_490  temp1151 = ( (  into_dash_iter496 ) ( (  it1142 ) ) );
    return ( (  next511 ) ( ( &temp1151 ) ) );
}

static  bool   null1149 (    struct Drop_490  it1151 ) {
    struct Maybe_229  dref1152 = ( (  head1150 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_229_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   panic1153 (    struct StrView_30  errmsg1713 ) {
    ( (  print_dash_str578 ) ( ( ( StrConcat_579_StrConcat ) ( ( ( StrConcat_580_StrConcat ) ( ( (  from_dash_string183 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1713 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_509   undefined1154 (  ) {
    struct Tuple2_509  temp1155;
    return (  temp1155 );
}

static  struct Tuple2_509   or_dash_fail1152 (    struct Maybe_508  x1726 ,    struct StrView_30  errmsg1728 ) {
    struct Maybe_508  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_508_None_t ) {
        ( (  panic1153 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1154 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_508_Just_t ) {
            return ( dref1729 .stuff .Maybe_508_Just_s .field0 );
        }
    }
}

static  struct Maybe_508   reduce1157 (    struct Zip_489  iterable1093 ,    struct Maybe_508  base1095 ,    struct Maybe_508 (*  fun1097 )(    struct Tuple2_509  ,    struct Maybe_508  ) ) {
    struct Maybe_508  x1098 = (  base1095 );
    struct Zip_489  it1099 = ( (  into_dash_iter494 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_508  dref1100 = ( (  next510 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_508_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_508_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_508_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1158 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1158);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_508  temp1159;
    return (  temp1159 );
}

static  struct Maybe_508   lam1160 (    struct Tuple2_509  e1147 ,    struct Maybe_508  dref1148 ) {
    return ( ( Maybe_508_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_508   last1156 (    struct Zip_489  it1145 ) {
    return ( (  reduce1157 ) ( (  it1145 ) ,  ( (struct Maybe_508) { .tag = Maybe_508_None_t } ) ,  (  lam1160 ) ) );
}

static  int32_t   snd1161 (    struct Tuple2_509  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_30   fst1162 (    struct Tuple2_509  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_29   pos_dash_after_dash_str1146 (    struct TextBuf_97 *  self3791 ,    struct StrView_30  bytes3793 ,    struct Pos_29  from3795 ) {
    struct SplitIter_491  lines3796 = ( (  split_dash_by_dash_each499 ) ( (  bytes3793 ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_30  first_dash_line3797 = ( (  or_dash_else474 ) ( ( (  head1147 ) ( (  lines3796 ) ) ) ,  ( (  from_dash_string183 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_490  headless3798 = ( (  drop497 ) ( (  lines3796 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1149 ) ( (  headless3798 ) ) ) ) {
        struct Pos_29  next_dash_pos3799 = ( (  mk397 ) ( ( (  from3795 ) .f_line ) ,  (  op_dash_add144 ( ( (  from3795 ) .f_bi ) , ( (  size_dash_i32294 ) ( ( (  num_dash_bytes1069 ) ( (  first_dash_line3797 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3799 );
    } else {
        struct Tuple2_509  last_dash_line3800 = ( (  or_dash_fail1152 ) ( ( (  last1156 ) ( ( (  zip495 ) ( (  headless3798 ) ,  ( (  from370 ) ( (  op_dash_add144 ( ( (  from3795 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string183 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk397 ) ( ( (  snd1161 ) ( (  last_dash_line3800 ) ) ) ,  ( (  size_dash_i32294 ) ( ( (  num_dash_bytes1069 ) ( ( (  fst1162 ) ( (  last_dash_line3800 ) ) ) ) ) ) ) ) );
    }
}

struct envunion1168 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_30   from_dash_charlike1169 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct envunion1173 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1175 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

struct envunion1177 {
    enum Unit_8  (*fun) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  );
    struct env48 env;
};

static  struct StrView_30   str_dash_between1164 (   struct env110* env ,    struct TextBuf_97 *  self3823 ,    struct Pos_29  from3825 ,    struct Pos_29  to3827 ) {
    enum CAllocator_10  al3828 = ( ( ( * (  self3823 ) ) .f_buf ) .f_al );
    if ( (  eq418 ( ( (  from3825 ) .f_line ) , ( (  to3827 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3829 = ( (  i32_dash_size355 ) ( ( (  min569 ) ( ( (  from3825 ) .f_bi ) ,  ( (  to3827 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3830 = ( (  i32_dash_size355 ) ( ( (  max1049 ) ( ( (  from3825 ) .f_bi ) ,  ( (  to3827 ) .f_bi ) ) ) ) );
        return ( (  clone1144 ) ( ( (  byte_dash_substr484 ) ( ( (  line1036 ) ( (  self3823 ) ,  ( (  from3825 ) .f_line ) ) ) ,  (  from_dash_bi3829 ) ,  (  to_dash_bi3830 ) ) ) ,  (  al3828 ) ) );
    } else {
        struct Pos_29  from_dash_pos3831 = ( (  min414 ) ( (  from3825 ) ,  (  to3827 ) ) );
        struct Pos_29  to_dash_pos3832 = ( (  max416 ) ( (  from3825 ) ,  (  to3827 ) ) );
        struct List_13  temp1165 = ( (  mk382 ) ( (  al3828 ) ) );
        struct List_13 *  sb3833 = ( &temp1165 );
        struct StrView_30  first_dash_line3834 = ( (  line1036 ) ( (  self3823 ) ,  ( (  from_dash_pos3831 ) .f_line ) ) );
        struct envunion111  temp1166 = ( (struct envunion111){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all437 , .env =  env->envinst48 } );
        ( temp1166.fun ( &temp1166.env ,  (  sb3833 ) ,  ( ( (  byte_dash_substr484 ) ( (  first_dash_line3834 ) ,  ( (  i32_dash_size355 ) ( ( (  from_dash_pos3831 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1069 ) ( (  first_dash_line3834 ) ) ) ) ) .f_contents ) ) );
        struct envunion1168  temp1167 = ( (struct envunion1168){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all437 , .env =  env->envinst48 } );
        ( temp1167.fun ( &temp1167.env ,  (  sb3833 ) ,  ( ( ( (  from_dash_charlike1169 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        struct RangeIter_138  temp1170 =  into_dash_iter139 ( ( (  to148 ) ( (  op_dash_add144 ( ( (  from_dash_pos3831 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  op_dash_sub149 ( ( (  to_dash_pos3832 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_140  __cond1171 =  next141 (&temp1170);
            if (  __cond1171 .tag == 0 ) {
                break;
            }
            int32_t  i3836 =  __cond1171 .stuff .Maybe_140_Just_s .field0;
            struct envunion1173  temp1172 = ( (struct envunion1173){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all437 , .env =  env->envinst48 } );
            ( temp1172.fun ( &temp1172.env ,  (  sb3833 ) ,  ( ( (  line1036 ) ( (  self3823 ) ,  (  i3836 ) ) ) .f_contents ) ) );
            struct envunion1175  temp1174 = ( (struct envunion1175){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all437 , .env =  env->envinst48 } );
            ( temp1174.fun ( &temp1174.env ,  (  sb3833 ) ,  ( ( ( (  from_dash_charlike1169 ) ( ( "\n" ) ,  ( 1 ) ) ) ) .f_contents ) ) );
        }
        struct envunion1177  temp1176 = ( (struct envunion1177){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all437 , .env =  env->envinst48 } );
        ( temp1176.fun ( &temp1176.env ,  (  sb3833 ) ,  ( ( (  byte_dash_substr484 ) ( ( (  line1036 ) ( (  self3823 ) ,  ( (  to_dash_pos3832 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size355 ) ( ( (  to_dash_pos3832 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes1037 ) ( ( (  to_dash_slice431 ) ( ( * (  sb3833 ) ) ) ) ) );
    }
}

static  bool   is_dash_none1178 (    struct Maybe_190  m1264 ) {
    struct Maybe_190  dref1265 = (  m1264 );
    if ( dref1265.tag == Maybe_190_None_t ) {
        return ( true );
    }
    else {
        if ( dref1265.tag == Maybe_190_Just_t ) {
            return ( false );
        }
    }
}

struct Tuple2_1180 {
    enum ChangesetInputType_99  field0;
    enum ChangesetInputType_99  field1;
};

static struct Tuple2_1180 Tuple2_1180_Tuple2 (  enum ChangesetInputType_99  field0 ,  enum ChangesetInputType_99  field1 ) {
    return ( struct Tuple2_1180 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1179 (    enum ChangesetInputType_99  l3684 ,    enum ChangesetInputType_99  r3686 ) {
    return ( {  struct Tuple2_1180  dref3687 = ( ( Tuple2_1180_Tuple2 ) ( (  l3684 ) ,  (  r3686 ) ) ) ;  dref3687 .field0 == ChangesetInputType_99_NoChangeset &&  dref3687 .field1 == ChangesetInputType_99_NoChangeset ? ( true ) :  dref3687 .field0 == ChangesetInputType_99_InputChangeset &&  dref3687 .field1 == ChangesetInputType_99_InputChangeset ? ( true ) :  dref3687 .field0 == ChangesetInputType_99_CustomChangeset &&  dref3687 .field1 == ChangesetInputType_99_CustomChangeset ? ( true ) : ( false ) ; } );
}

static  struct Changeset_25 *   get_dash_ptr1182 (    struct Slice_24  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp283 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Changeset_25 *  elem_dash_ptr1761 = ( (  offset_dash_ptr1118 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  struct Changeset_25 *   last_dash_ptr1181 (    struct Slice_24  s1939 ) {
    if ( (  eq332 ( ( (  s1939 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1153 ) ( ( (  from_dash_string183 ) ( ( "(Slice.last-ptr) called on empty slice." ) ,  ( 39 ) ) ) ) );
    }
    return ( (  get_dash_ptr1182 ) ( (  s1939 ) ,  (  op_dash_sub403 ( ( (  s1939 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_24   to_dash_slice1183 (    struct List_23  l2127 ) {
    struct Changeset_25 *  ptr2128 = ( ( (  l2127 ) .f_elements ) .f_ptr );
    return ( (struct Slice_24) { .f_ptr = (  ptr2128 ) , .f_count = ( (  l2127 ) .f_count ) } );
}

struct TypeSize_1190 {
    size_t  f_size;
};

static  struct TypeSize_1190   get_dash_typesize1189 (  ) {
    struct Action_28  temp1191;
    return ( (struct TypeSize_1190) { .f_size = ( sizeof( ( (  temp1191 ) ) ) ) } );
}

static  struct Action_28 *   cast_dash_ptr1192 (    void *  p359 ) {
    return ( (struct Action_28 * ) (  p359 ) );
}

static  struct Slice_27   allocate1188 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize1189 ) ( ) ) ) .f_size );
    struct Action_28 *  ptr1958 = ( (  cast_dash_ptr1192 ) ( ( ( malloc ) ( (  op_dash_mul338 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_27) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env1193 {
    struct Slice_27  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_1195 {
    struct Action_28  field0;
    int32_t  field1;
};

static struct Tuple2_1195 Tuple2_1195_Tuple2 (  struct Action_28  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1195 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1194 {
    enum Unit_8  (*fun) (  struct env1193*  ,    struct Tuple2_1195  );
    struct env1193 env;
};

static  struct Action_28 *   get_dash_ptr1198 (    struct Slice_27  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp283 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_28 *  elem_dash_ptr1761 = ( (  offset_dash_ptr1133 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set1197 (    struct Slice_27  slice1775 ,    size_t  i1777 ,    struct Action_28  x1779 ) {
    struct Action_28 *  ep1780 = ( (  get_dash_ptr1198 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1196 (   struct env1193* env ,    struct Tuple2_1195  dref2044 ) {
    return ( (  set1197 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size355 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct Zip_1200 {
    struct SliceIter_1128  f_left_dash_it;
    struct FromIter_359  f_right_dash_it;
};

static  struct Zip_1200   into_dash_iter1202 (    struct Zip_1200  self911 ) {
    return (  self911 );
}

struct Maybe_1203 {
    enum {
        Maybe_1203_None_t,
        Maybe_1203_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1195  field0;
        } Maybe_1203_Just_s;
    } stuff;
};

static struct Maybe_1203 Maybe_1203_Just (  struct Tuple2_1195  field0 ) {
    return ( struct Maybe_1203 ) { .tag = Maybe_1203_Just_t, .stuff = { .Maybe_1203_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1203   next1204 (    struct Zip_1200 *  self914 ) {
    struct Zip_1200  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1135  dref916 = ( (  next1136 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1135_None_t ) {
            return ( (struct Maybe_1203) { .tag = Maybe_1203_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1135_Just_t ) {
                struct Maybe_140  dref918 = ( (  next365 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_140_None_t ) {
                    return ( (struct Maybe_1203) { .tag = Maybe_1203_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_140_Just_t ) {
                        ( (  next1136 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next365 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1203_Just ) ( ( ( Tuple2_1195_Tuple2 ) ( ( dref916 .stuff .Maybe_1135_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1199 (    struct Zip_1200  iterable1074 ,   struct envunion1194  fun1076 ) {
    struct Zip_1200  temp1201 = ( (  into_dash_iter1202 ) ( (  iterable1074 ) ) );
    struct Zip_1200 *  it1077 = ( &temp1201 );
    while ( ( true ) ) {
        struct Maybe_1203  dref1078 = ( (  next1204 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1203_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1203_Just_t ) {
                struct envunion1194  temp1205 = (  fun1076 );
                ( temp1205.fun ( &temp1205.env ,  ( dref1078 .stuff .Maybe_1203_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1200   zip1206 (    struct Slice_27  left922 ,    struct FromIter_359  right924 ) {
    struct SliceIter_1128  left_dash_it925 = ( (  into_dash_iter1131 ) ( (  left922 ) ) );
    struct FromIter_359  right_dash_it926 = ( (  into_dash_iter369 ) ( (  right924 ) ) );
    return ( (struct Zip_1200) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   grow_dash_if_dash_full1187 (   struct env4* env ,    struct List_26 *  list2042 ) {
    if ( (  eq332 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate1188 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq332 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_27  new_dash_slice2043 = ( (  allocate1188 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul338 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env1193 envinst1193 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion1194  fun2047 = ( (struct envunion1194){ .fun = (  enum Unit_8  (*) (  struct env1193*  ,    struct Tuple2_1195  ) )lam1196 , .env =  envinst1193 } );
            ( (  for_dash_each1199 ) ( ( (  zip1206 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free1141 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1185 (   struct env33* env ,    struct List_26 *  list2050 ,    struct Action_28  elem2052 ) {
    struct envunion34  temp1186 = ( (struct envunion34){ .fun = (  enum Unit_8  (*) (  struct env4*  ,    struct List_26 *  ) )grow_dash_if_dash_full1187 , .env =  env->envinst4 } );
    ( temp1186.fun ( &temp1186.env ,  (  list2050 ) ) );
    ( (  set1197 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add325 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr1213 (    struct Action_28 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1214 (    struct Action_28 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_28 *   zeroed1211 (  ) {
    struct Action_28 *  temp1212;
    struct Action_28 *  x570 = (  temp1212 );
    ( ( memset ) ( ( (  cast_dash_ptr1213 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of1214 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_28 *   null_dash_ptr1210 (  ) {
    return ( (  zeroed1211 ) ( ) );
}

static  struct Slice_27   empty1209 (  ) {
    return ( (struct Slice_27) { .f_ptr = ( (  null_dash_ptr1210 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_26   mk1208 (    enum CAllocator_10  al2032 ) {
    struct Slice_27  elements2033 = ( (  empty1209 ) ( ) );
    return ( (struct List_26) { .f_al = (  al2032 ) , .f_elements = (  elements2033 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Cursors_31   or_dash_else1215 (    struct Maybe_190  self1733 ,    struct Cursors_31  alt1735 ) {
    struct Maybe_190  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_190_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_190_Just_t ) {
            return ( dref1736 .stuff .Maybe_190_Just_s .field0 );
        }
    }
}

struct envunion1217 {
    enum Unit_8  (*fun) (  struct env33*  ,    struct List_26 *  ,    struct Action_28  );
    struct env33 env;
};

struct TypeSize_1224 {
    size_t  f_size;
};

static  struct TypeSize_1224   get_dash_typesize1223 (  ) {
    struct Changeset_25  temp1225;
    return ( (struct TypeSize_1224) { .f_size = ( sizeof( ( (  temp1225 ) ) ) ) } );
}

static  struct Changeset_25 *   cast_dash_ptr1226 (    void *  p359 ) {
    return ( (struct Changeset_25 * ) (  p359 ) );
}

static  struct Slice_24   allocate1222 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize1223 ) ( ) ) ) .f_size );
    struct Changeset_25 *  ptr1958 = ( (  cast_dash_ptr1226 ) ( ( ( malloc ) ( (  op_dash_mul338 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_24) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env1227 {
    struct Slice_24  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_1229 {
    struct Changeset_25  field0;
    int32_t  field1;
};

static struct Tuple2_1229 Tuple2_1229_Tuple2 (  struct Changeset_25  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1229 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1228 {
    enum Unit_8  (*fun) (  struct env1227*  ,    struct Tuple2_1229  );
    struct env1227 env;
};

static  enum Unit_8   set1231 (    struct Slice_24  slice1775 ,    size_t  i1777 ,    struct Changeset_25  x1779 ) {
    struct Changeset_25 *  ep1780 = ( (  get_dash_ptr1182 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1230 (   struct env1227* env ,    struct Tuple2_1229  dref2044 ) {
    return ( (  set1231 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size355 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct Zip_1233 {
    struct SliceIter_1112  f_left_dash_it;
    struct FromIter_359  f_right_dash_it;
};

static  struct Zip_1233   into_dash_iter1235 (    struct Zip_1233  self911 ) {
    return (  self911 );
}

struct Maybe_1236 {
    enum {
        Maybe_1236_None_t,
        Maybe_1236_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1229  field0;
        } Maybe_1236_Just_s;
    } stuff;
};

static struct Maybe_1236 Maybe_1236_Just (  struct Tuple2_1229  field0 ) {
    return ( struct Maybe_1236 ) { .tag = Maybe_1236_Just_t, .stuff = { .Maybe_1236_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1236   next1237 (    struct Zip_1233 *  self914 ) {
    struct Zip_1233  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1121  dref916 = ( (  next1123 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1121_None_t ) {
            return ( (struct Maybe_1236) { .tag = Maybe_1236_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1121_Just_t ) {
                struct Maybe_140  dref918 = ( (  next365 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_140_None_t ) {
                    return ( (struct Maybe_1236) { .tag = Maybe_1236_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_140_Just_t ) {
                        ( (  next1123 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next365 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1236_Just ) ( ( ( Tuple2_1229_Tuple2 ) ( ( dref916 .stuff .Maybe_1121_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1232 (    struct Zip_1233  iterable1074 ,   struct envunion1228  fun1076 ) {
    struct Zip_1233  temp1234 = ( (  into_dash_iter1235 ) ( (  iterable1074 ) ) );
    struct Zip_1233 *  it1077 = ( &temp1234 );
    while ( ( true ) ) {
        struct Maybe_1236  dref1078 = ( (  next1237 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1236_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1236_Just_t ) {
                struct envunion1228  temp1238 = (  fun1076 );
                ( temp1238.fun ( &temp1238.env ,  ( dref1078 .stuff .Maybe_1236_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_1233   zip1239 (    struct Slice_24  left922 ,    struct FromIter_359  right924 ) {
    struct SliceIter_1112  left_dash_it925 = ( (  into_dash_iter1116 ) ( (  left922 ) ) );
    struct FromIter_359  right_dash_it926 = ( (  into_dash_iter369 ) ( (  right924 ) ) );
    return ( (struct Zip_1233) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1241 (    struct Changeset_25 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1240 (    enum CAllocator_10  dref1960 ,    struct Slice_24  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1241 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1221 (   struct env3* env ,    struct List_23 *  list2042 ) {
    if ( (  eq332 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate1222 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq332 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_24  new_dash_slice2043 = ( (  allocate1222 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul338 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env1227 envinst1227 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion1228  fun2047 = ( (struct envunion1228){ .fun = (  enum Unit_8  (*) (  struct env1227*  ,    struct Tuple2_1229  ) )lam1230 , .env =  envinst1227 } );
            ( (  for_dash_each1232 ) ( ( (  zip1239 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free1240 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1219 (   struct env21* env ,    struct List_23 *  list2050 ,    struct Changeset_25  elem2052 ) {
    struct envunion22  temp1220 = ( (struct envunion22){ .fun = (  enum Unit_8  (*) (  struct env3*  ,    struct List_23 *  ) )grow_dash_if_dash_full1221 , .env =  env->envinst3 } );
    ( temp1220.fun ( &temp1220.env ,  (  list2050 ) ) );
    ( (  set1231 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add325 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Pos_29   action_dash_fwd1243 (   struct env104* env ,    struct TextBuf_97 *  self3786 ,    struct Action_28  action3788 ) {
    struct envunion105  temp1244 = ( (struct envunion105){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ) )change_dash_no_dash_action413 , .env =  env->envinst93 } );
    ( temp1244.fun ( &temp1244.env ,  (  self3786 ) ,  ( (  action3788 ) .f_from ) ,  ( (  action3788 ) .f_to_dash_bwd ) ,  ( (  action3788 ) .f_fwd ) ) );
    return ( (  action3788 ) .f_to_dash_fwd );
}

static  struct Maybe_190   change1108 (   struct env112* env ,    struct TextBuf_97 *  self3853 ,    struct Pos_29  from3855 ,    struct Pos_29  to3857 ,    struct StrView_30  bytes3859 ,    struct Maybe_190  before_dash_cursors3861 ) {
    struct Pos_29  from_dash_pos3862 = ( (  min414 ) ( (  from3855 ) ,  (  to3857 ) ) );
    struct Pos_29  to_dash_pos3863 = ( (  max416 ) ( (  from3855 ) ,  (  to3857 ) ) );
    struct Actions_98 *  actions3864 = ( & ( ( * (  self3853 ) ) .f_actions ) );
    ( (  trim_dash_actions1109 ) ( (  actions3864 ) ) );
    struct envunion115  temp1163 = ( (struct envunion115){ .fun = (  struct StrView_30  (*) (  struct env110*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ) )str_dash_between1164 , .env =  env->envinst110 } );
    struct Action_28  action3865 = ( (struct Action_28) { .f_from = (  from3855 ) , .f_fwd = ( (  clone1144 ) ( (  bytes3859 ) ,  ( ( * (  self3853 ) ) .f_al ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1146 ) ( (  self3853 ) ,  (  bytes3859 ) ,  (  from_dash_pos3862 ) ) ) , .f_bwd = ( temp1163.fun ( &temp1163.env ,  (  self3853 ) ,  (  from_dash_pos3862 ) ,  (  to_dash_pos3863 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3863 ) } );
    enum CAllocator_10  al3866 = ( ( ( * (  actions3864 ) ) .f_list ) .f_al );
    bool  is_dash_typed_dash_in3867 = ( (  is_dash_none1178 ) ( (  before_dash_cursors3861 ) ) );
    if ( ( (  eq1179 ( ( ( ( * (  self3853 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_99_CustomChangeset ) ) ) || ( (  eq1179 ( ( ( ( * (  self3853 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_99_InputChangeset ) ) ) && (  is_dash_typed_dash_in3867 ) ) ) ) {
        struct Changeset_25 *  last_dash_changeset3868 = ( (  last_dash_ptr1181 ) ( ( (  to_dash_slice1183 ) ( ( ( * (  actions3864 ) ) .f_list ) ) ) ) );
        struct envunion113  temp1184 = ( (struct envunion113){ .fun = (  enum Unit_8  (*) (  struct env33*  ,    struct List_26 *  ,    struct Action_28  ) )add1185 , .env =  env->envinst33 } );
        ( temp1184.fun ( &temp1184.env ,  ( & ( ( * (  last_dash_changeset3868 ) ) .f_parts ) ) ,  (  action3865 ) ) );
    } else {
        struct Changeset_25  temp1207 = ( (struct Changeset_25) { .f_parts = ( (  mk1208 ) ( (  al3866 ) ) ) , .f_before_dash_cursors = ( (  or_dash_else1215 ) ( (  before_dash_cursors3861 ) ,  ( (struct Cursors_31) { .f_cur = (  from3855 ) , .f_sel = ( (  eq417 ( (  from3855 ) , (  to3857 ) ) ) ? ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) : ( ( Maybe_32_Just ) ( (  to3857 ) ) ) ) } ) ) ) } );
        struct Changeset_25 *  changeset3869 = ( &temp1207 );
        struct envunion1217  temp1216 = ( (struct envunion1217){ .fun = (  enum Unit_8  (*) (  struct env33*  ,    struct List_26 *  ,    struct Action_28  ) )add1185 , .env =  env->envinst33 } );
        ( temp1216.fun ( &temp1216.env ,  ( & ( ( * (  changeset3869 ) ) .f_parts ) ) ,  (  action3865 ) ) );
        struct envunion114  temp1218 = ( (struct envunion114){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Changeset_25  ) )add1219 , .env =  env->envinst21 } );
        ( temp1218.fun ( &temp1218.env ,  ( & ( ( * (  actions3864 ) ) .f_list ) ) ,  ( * (  changeset3869 ) ) ) );
        (*  actions3864 ) .f_input_dash_changeset = ( (  is_dash_typed_dash_in3867 ) ? ( ChangesetInputType_99_InputChangeset ) : ( ChangesetInputType_99_NoChangeset ) );
        (*  actions3864 ) .f_cur = (  op_dash_add325 ( ( ( * (  actions3864 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct envunion116  temp1242 = ( (struct envunion116){ .fun = (  struct Pos_29  (*) (  struct env104*  ,    struct TextBuf_97 *  ,    struct Action_28  ) )action_dash_fwd1243 , .env =  env->envinst104 } );
    struct Pos_29  to_dash_fwd3870 = ( temp1242.fun ( &temp1242.env ,  (  self3853 ) ,  (  action3865 ) ) );
    if ( (  cmp283 ( ( (  num_dash_bytes1069 ) ( ( (  action3865 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_29  to_dash_fwd3871 = ( (  left_dash_pos1068 ) ( (  self3853 ) ,  (  to_dash_fwd3870 ) ) );
        return ( ( Maybe_190_Just ) ( ( (struct Cursors_31) { .f_cur = (  to_dash_fwd3871 ) , .f_sel = ( ( Maybe_32_Just ) ( ( (  action3865 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_190_Just ) ( ( (struct Cursors_31) { .f_cur = (  to_dash_fwd3870 ) , .f_sel = ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) } ) ) );
    }
}

static  enum Unit_8   add_dash_str_dash_at_dash_char1106 (   struct env188* env ,    struct Pane_204 *  self4240 ,    struct StrView_30  s4242 ) {
    struct Pos_29  cur4243 = ( ( * (  self4240 ) ) .f_cursor );
    struct envunion189  temp1107 = ( (struct envunion189){ .fun = (  struct Maybe_190  (*) (  struct env112*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_190  ) )change1108 , .env =  env->envinst112 } );
    ( temp1107.fun ( &temp1107.env ,  ( ( * (  self4240 ) ) .f_buf ) ,  (  cur4243 ) ,  (  cur4243 ) ,  (  s4242 ) ,  ( (struct Maybe_190) { .tag = Maybe_190_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at1250 (   struct env199* env ,    struct Pane_204 *  self4278 ,    int32_t  line4280 ) {
    struct envunion200  temp1251 = ( (struct envunion200){ .fun = (  struct Maybe_190  (*) (  struct env112*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_190  ) )change1108 , .env =  env->envinst112 } );
    ( temp1251.fun ( &temp1251.env ,  ( ( * (  self4278 ) ) .f_buf ) ,  ( (struct Pos_29) { .f_line = (  line4280 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_29) { .f_line = (  line4280 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (  from_dash_charlike1169 ) ( ( "\t" ) ,  ( 1 ) ) ) ,  ( (struct Maybe_190) { .tag = Maybe_190_None_t } ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   indent_dash_at_dash_current1246 (   struct env210* env ,    struct Pane_204 *  self4299 ,    int32_t  indent4301 ) {
    struct RangeIter_138  temp1247 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  indent4301 ) ) ) );
    while (true) {
        struct Maybe_140  __cond1248 =  next141 (&temp1247);
        if (  __cond1248 .tag == 0 ) {
            break;
        }
        int32_t  dref4302 =  __cond1248 .stuff .Maybe_140_Just_s .field0;
        struct envunion211  temp1249 = ( (struct envunion211){ .fun = (  enum Unit_8  (*) (  struct env199*  ,    struct Pane_204 *  ,    int32_t  ) )indent_dash_at1250 , .env =  env->envinst199 } );
        ( temp1249.fun ( &temp1249.env ,  (  self4299 ) ,  ( ( ( * (  self4299 ) ) .f_cursor ) .f_line ) ) );
        ( (  move_dash_right1074 ) ( (  self4299 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_to_dash_beginning1252 (    struct Pane_204 *  self4219 ) {
    struct Pos_29  temp1253 = ( ( * (  self4219 ) ) .f_cursor );
    temp1253 .  f_bi = (  from_dash_integral56 ( 0 ) );
    ( (  set_dash_cursors1030 ) ( (  self4219 ) ,  ( temp1253 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

struct envunion1255 {
    enum Unit_8  (*fun) (  struct env188*  ,    struct Pane_204 *  ,    struct StrView_30  );
    struct env188 env;
};

struct envunion1257 {
    enum Unit_8  (*fun) (  struct env210*  ,    struct Pane_204 *  ,    int32_t  );
    struct env210 env;
};

enum MoveDirection_1259 {
    MoveDirection_1259_MoveFwd,
    MoveDirection_1259_MoveBwd,
};

enum MoveTarget_1260 {
    MoveTarget_1260_NextWordStart,
    MoveTarget_1260_NextWordEnd,
};

static  struct Pos_29   own1262 (    struct Pos_29  x1251 ) {
    return (  x1251 );
}

struct env1263 {
    ;
    struct Pos_29 *  prev4185;
    ;
    struct Pane_204 *  pane4180;
    enum MoveDirection_1259  dir4182;
};

static  bool   is_dash_at_dash_line_dash_end1265 (    struct Pane_204 *  pane4162 ,    struct Pos_29  pos4164 ) {
    return (  eq332 ( ( (  i32_dash_size355 ) ( ( (  pos4164 ) .f_bi ) ) ) , ( (  num_dash_bytes1069 ) ( ( (  line1036 ) ( ( ( * (  pane4162 ) ) .f_buf ) ,  ( (  pos4164 ) .f_line ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1264 (    struct Pane_204 *  pane4167 ) {
    return ( (  is_dash_at_dash_line_dash_end1265 ) ( (  pane4167 ) ,  ( ( * (  pane4167 ) ) .f_cursor ) ) );
}

struct envunion1267 {
    enum Unit_8  (*fun) (  struct env1263*  );
    struct env1263 env;
};

static  enum Unit_8   advance1268 (   struct env1263* env ) {
    (* env->prev4185 ) = ( ( * ( env->pane4180 ) ) .f_cursor );
    enum MoveDirection_1259  dref4187 = ( env->dir4182 );
    switch (  dref4187 ) {
        case MoveDirection_1259_MoveFwd : {
            ( (  move_dash_right1074 ) ( ( env->pane4180 ) ) );
            break;
        }
        case MoveDirection_1259_MoveBwd : {
            ( (  move_dash_left1029 ) ( ( env->pane4180 ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

enum CharType_1272 {
    CharType_1272_CharSpace,
    CharType_1272_CharWord,
    CharType_1272_CharPunctuation,
};

struct Tuple2_1273 {
    enum CharType_1272  field0;
    enum CharType_1272  field1;
};

static struct Tuple2_1273 Tuple2_1273_Tuple2 (  enum CharType_1272  field0 ,  enum CharType_1272  field1 ) {
    return ( struct Tuple2_1273 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1271 (    enum CharType_1272  l3650 ,    enum CharType_1272  r3652 ) {
    struct Tuple2_1273  dref3653 = ( ( Tuple2_1273_Tuple2 ) ( (  l3650 ) ,  (  r3652 ) ) );
    if (  dref3653 .field0 == CharType_1272_CharSpace &&  dref3653 .field1 == CharType_1272_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3653 .field0 == CharType_1272_CharWord &&  dref3653 .field1 == CharType_1272_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3653 .field0 == CharType_1272_CharPunctuation &&  dref3653 .field1 == CharType_1272_CharPunctuation ) {
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

static  struct Char_65   min1278 (    struct Char_65  l1236 ,    struct Char_65  r1238 ) {
    if ( (  cmp866 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_65   max1279 (    struct Char_65  l1315 ,    struct Char_65  r1317 ) {
    if ( (  cmp866 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between1277 (    struct Char_65  c1337 ,    struct Char_65  l1339 ,    struct Char_65  r1341 ) {
    struct Char_65  from1342 = ( (  min1278 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_65  to1343 = ( (  max1279 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp866 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp866 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha1276 (    struct Char_65  c2389 ) {
    return ( ( (  cmp283 ( ( (  c2389 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between1277 ) ( (  c2389 ) ,  ( (  from_dash_charlike314 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1277 ) ( (  c2389 ) ,  ( (  from_dash_charlike314 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit1280 (    struct Char_65  c2392 ) {
    return ( (  eq332 ( ( (  c2392 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1277 ) ( (  c2392 ) ,  ( (  from_dash_charlike314 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric1275 (    struct Char_65  c2404 ) {
    return ( ( (  is_dash_alpha1276 ) ( (  c2404 ) ) ) || ( (  is_dash_digit1280 ) ( (  c2404 ) ) ) );
}

static  bool   is_dash_whitespace1281 (    struct Char_65  c2380 ) {
    return ( ( (  eq502 ( (  c2380 ) , ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq502 ( (  c2380 ) , ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq502 ( (  c2380 ) , ( (  from_dash_charlike314 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_1272   char_dash_type1274 (    struct Char_65  c3656 ) {
    if ( ( ( ( (  is_dash_alphanumeric1275 ) ( (  c3656 ) ) ) || (  eq502 ( (  c3656 ) , ( (  from_dash_charlike314 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq502 ( (  c3656 ) , ( (  from_dash_charlike314 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_1272_CharWord );
    } else {
        if ( ( (  is_dash_whitespace1281 ) ( (  c3656 ) ) ) ) {
            return ( CharType_1272_CharSpace );
        } else {
            return ( CharType_1272_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary1270 (    struct Char_65  l3659 ,    struct Char_65  r3661 ) {
    return ( !  eq1271 ( ( (  char_dash_type1274 ) ( (  l3659 ) ) ) , ( (  char_dash_type1274 ) ( (  r3661 ) ) ) ) );
}

static  struct Char_65   or_dash_else1283 (    struct Maybe_706  self1733 ,    struct Char_65  alt1735 ) {
    struct Maybe_706  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_706_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_706_Just_t ) {
            return ( dref1736 .stuff .Maybe_706_Just_s .field0 );
        }
    }
}

static  struct Maybe_706   head1284 (    struct StrViewIter_703  it1142 ) {
    struct StrViewIter_703  temp1285 = ( (  into_dash_iter705 ) ( (  it1142 ) ) );
    return ( (  next707 ) ( ( &temp1285 ) ) );
}

static  struct Char_65   char_dash_at1282 (    struct Pane_204 *  pane4034 ,    struct Pos_29  pos4036 ) {
    struct StrView_30  line4037 = ( (  line1036 ) ( ( ( * (  pane4034 ) ) .f_buf ) ,  ( (  pos4036 ) .f_line ) ) );
    return ( (  or_dash_else1283 ) ( ( (  head1284 ) ( ( (  chars708 ) ( ( (  byte_dash_substr484 ) ( (  line4037 ) ,  ( (  i32_dash_size355 ) ( ( (  pos4036 ) .f_bi ) ) ) ,  ( (  num_dash_bytes1069 ) ( (  line4037 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

static  enum Unit_8   print1287 (    struct StrView_30  s1702 ) {
    ( (  for_dash_each702 ) ( ( (  chars708 ) ( (  s1702 ) ) ) ,  (  printf_dash_char302 ) ) );
    return ( Unit_8_Unit );
}

static  bool   undefined1288 (  ) {
    bool  temp1289;
    return (  temp1289 );
}

static  bool   todo1286 (  ) {
    ( (  print1287 ) ( ( (  from_dash_string183 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined1288 ) ( ) );
}

static  bool   reached_dash_target1269 (    struct Pane_204 *  pane4172 ,    enum MoveTarget_1260  target4174 ,    struct Pos_29  prev4176 ) {
    return ( {  enum MoveTarget_1260  dref4177 = (  target4174 ) ;  dref4177 == MoveTarget_1260_NextWordStart ? ( ( (  is_dash_word_dash_boundary1270 ) ( ( (  char_dash_at1282 ) ( (  pane4172 ) ,  (  prev4176 ) ) ) ,  ( (  char_dash_at1282 ) ( (  pane4172 ) ,  ( ( * (  pane4172 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1271 ( ( (  char_dash_type1274 ) ( ( (  char_dash_at1282 ) ( (  pane4172 ) ,  ( ( * (  pane4172 ) ) .f_cursor ) ) ) ) ) , ( CharType_1272_CharSpace ) ) ) ) ) :  dref4177 == MoveTarget_1260_NextWordEnd ? ( ( (  is_dash_word_dash_boundary1270 ) ( ( (  char_dash_at1282 ) ( (  pane4172 ) ,  (  prev4176 ) ) ) ,  ( (  char_dash_at1282 ) ( (  pane4172 ) ,  ( ( * (  pane4172 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq1271 ( ( (  char_dash_type1274 ) ( ( (  char_dash_at1282 ) ( (  pane4172 ) ,  (  prev4176 ) ) ) ) ) , ( CharType_1272_CharSpace ) ) ) ) ) : ( (  todo1286 ) ( ) ) ; } );
}

struct envunion1291 {
    enum Unit_8  (*fun) (  struct env1263*  );
    struct env1263 env;
};

struct envunion1293 {
    enum Unit_8  (*fun) (  struct env1263*  );
    struct env1263 env;
};

static  enum Unit_8   advance_dash_word1258 (    struct Pane_204 *  pane4180 ,    enum MoveDirection_1259  dir4182 ,    enum MoveTarget_1260  target4184 ) {
    struct Pos_29  temp1261 = ( (  own1262 ) ( ( ( * (  pane4180 ) ) .f_cursor ) ) );
    struct Pos_29 *  prev4185 = ( &temp1261 );
    struct env1263 envinst1263 = {
        .prev4185 =  prev4185 ,
        .pane4180 =  pane4180 ,
        .dir4182 =  dir4182 ,
    };
    struct Pos_29  sel4188 = ( ( * (  pane4180 ) ) .f_cursor );
    bool  was_dash_at_dash_line_dash_end4189 = ( (  cursor_dash_is_dash_at_dash_line_dash_end1264 ) ( (  pane4180 ) ) );
    struct envunion1267  temp1266 = ( (struct envunion1267){ .fun = (  enum Unit_8  (*) (  struct env1263*  ) )advance1268 , .env =  envinst1263 } );
    ( temp1266.fun ( &temp1266.env ) );
    if ( ( (  was_dash_at_dash_line_dash_end4189 ) || ( (  reached_dash_target1269 ) ( (  pane4180 ) ,  (  target4184 ) ,  ( * (  prev4185 ) ) ) ) ) ) {
        sel4188 = ( ( * (  pane4180 ) ) .f_cursor );
    }
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1264 ) ( (  pane4180 ) ) ) ) {
        if ( (  eq417 ( ( ( * (  pane4180 ) ) .f_cursor ) , ( * (  prev4185 ) ) ) ) ) {
            return ( Unit_8_Unit );
        }
        struct envunion1291  temp1290 = ( (struct envunion1291){ .fun = (  enum Unit_8  (*) (  struct env1263*  ) )advance1268 , .env =  envinst1263 } );
        ( temp1290.fun ( &temp1290.env ) );
        sel4188 = ( ( * (  pane4180 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion1293  temp1292 = ( (struct envunion1293){ .fun = (  enum Unit_8  (*) (  struct env1263*  ) )advance1268 , .env =  envinst1263 } );
        ( temp1292.fun ( &temp1292.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1264 ) ( (  pane4180 ) ) ) || ( (  reached_dash_target1269 ) ( (  pane4180 ) ,  (  target4184 ) ,  ( * (  prev4185 ) ) ) ) ) ) {
            enum MoveDirection_1259  dref4190 = (  dir4182 );
            switch (  dref4190 ) {
                case MoveDirection_1259_MoveFwd : {
                    ( (  move_dash_left1029 ) ( (  pane4180 ) ) );
                    break;
                }
                case MoveDirection_1259_MoveBwd : {
                    ( (  move_dash_right1074 ) ( (  pane4180 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq417 ( ( * (  prev4185 ) ) , ( ( * (  pane4180 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel1065 ) ( (  pane4180 ) ,  ( ( Maybe_32_Just ) ( (  sel4188 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  size_t   size1298 (    struct List_23 *  l2134 ) {
    return ( ( * (  l2134 ) ) .f_count );
}

static  struct Changeset_25 *   get_dash_ptr1301 (    struct List_23 *  list2002 ,    size_t  i2004 ) {
    if ( ( (  cmp283 ( (  i2004 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2004 ) , ( ( * (  list2002 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2004 ) ) ) ,  ( (  from_dash_string183 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2002 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1182 ) ( ( ( * (  list2002 ) ) .f_elements ) ,  (  i2004 ) ) );
}

static  struct Changeset_25   get1300 (    struct List_23 *  list2012 ,    size_t  i2014 ) {
    return ( * ( (  get_dash_ptr1301 ) ( (  list2012 ) ,  (  i2014 ) ) ) );
}

static  struct Changeset_25   elem_dash_get1299 (    struct List_23  self2082 ,    size_t  k2084 ) {
    return ( (  get1300 ) ( ( & (  self2082 ) ) ,  (  k2084 ) ) );
}

static  struct Action_28   undefined1310 (  ) {
    struct Action_28  temp1311;
    return (  temp1311 );
}

static  struct Action_28   or_dash_fail1309 (    struct Maybe_1135  x1726 ,    struct StrConcat_346  errmsg1728 ) {
    struct Maybe_1135  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_1135_None_t ) {
        ( (  panic345 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1310 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_1135_Just_t ) {
            return ( dref1729 .stuff .Maybe_1135_Just_s .field0 );
        }
    }
}

static  struct Maybe_1135   try_dash_get1312 (    struct Slice_27  slice1764 ,    size_t  i1766 ) {
    if ( ( (  cmp283 ( (  i1766 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1766 ) , ( (  slice1764 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1135) { .tag = Maybe_1135_None_t } );
    }
    struct Action_28 *  elem_dash_ptr1767 = ( (  offset_dash_ptr1133 ) ( ( (  slice1764 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1766 ) ) ) ) );
    return ( ( Maybe_1135_Just ) ( ( * (  elem_dash_ptr1767 ) ) ) );
}

static  struct Action_28   get1308 (    struct Slice_27  slice1770 ,    size_t  i1772 ) {
    return ( (  or_dash_fail1309 ) ( ( (  try_dash_get1312 ) ( (  slice1770 ) ,  (  i1772 ) ) ) ,  ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1772 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1770 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Action_28   elem_dash_get1307 (    struct Slice_27  self1868 ,    size_t  idx1870 ) {
    return ( (  get1308 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

static  struct Action_28   last1306 (    struct Slice_27  s1936 ) {
    if ( (  eq332 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1153 ) ( ( (  from_dash_string183 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1307 ( (  s1936 ) , (  op_dash_sub403 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  struct Slice_27   to_dash_slice1313 (    struct List_26  l2127 ) {
    struct Action_28 *  ptr2128 = ( ( (  l2127 ) .f_elements ) .f_ptr );
    return ( (struct Slice_27) { .f_ptr = (  ptr2128 ) , .f_count = ( (  l2127 ) .f_count ) } );
}

static  struct Maybe_190   redo1297 (   struct env108* env ,    struct TextBuf_97 *  self3813 ) {
    ( (  flush_dash_insert_dash_action1083 ) ( (  self3813 ) ) );
    struct Actions_98 *  actions3814 = ( & ( ( * (  self3813 ) ) .f_actions ) );
    if ( (  cmp283 ( ( ( * (  actions3814 ) ) .f_cur ) , ( (  size1298 ) ( ( & ( ( * (  actions3814 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_190) { .tag = Maybe_190_None_t } );
    }
    struct Changeset_25  changeset3815 = (  elem_dash_get1299 ( ( ( * (  actions3814 ) ) .f_list ) , ( ( * (  actions3814 ) ) .f_cur ) ) );
    struct Pos_29  temp1302;
    struct Pos_29  to_dash_fwd3816 = (  temp1302 );
    struct SliceIter_1128  temp1303 =  into_dash_iter1130 ( ( (  changeset3815 ) .f_parts ) );
    while (true) {
        struct Maybe_1135  __cond1304 =  next1136 (&temp1303);
        if (  __cond1304 .tag == 0 ) {
            break;
        }
        struct Action_28  action3818 =  __cond1304 .stuff .Maybe_1135_Just_s .field0;
        struct envunion109  temp1305 = ( (struct envunion109){ .fun = (  struct Pos_29  (*) (  struct env104*  ,    struct TextBuf_97 *  ,    struct Action_28  ) )action_dash_fwd1243 , .env =  env->envinst104 } );
        to_dash_fwd3816 = ( temp1305.fun ( &temp1305.env ,  (  self3813 ) ,  (  action3818 ) ) );
    }
    (*  actions3814 ) .f_cur = (  op_dash_add325 ( ( ( * (  actions3814 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_28  last_dash_action3819 = ( (  last1306 ) ( ( (  to_dash_slice1313 ) ( ( (  changeset3815 ) .f_parts ) ) ) ) );
    if ( (  cmp283 ( ( (  num_dash_bytes1069 ) ( ( (  last_dash_action3819 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        struct Pos_29  to_dash_fwd3820 = ( (  left_dash_pos1068 ) ( (  self3813 ) ,  (  to_dash_fwd3816 ) ) );
        return ( ( Maybe_190_Just ) ( ( (struct Cursors_31) { .f_cur = (  to_dash_fwd3820 ) , .f_sel = ( ( Maybe_32_Just ) ( ( (  last_dash_action3819 ) .f_from ) ) ) } ) ) );
    } else {
        return ( ( Maybe_190_Just ) ( ( (struct Cursors_31) { .f_cur = (  to_dash_fwd3816 ) , .f_sel = ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) } ) ) );
    }
}

struct env1315 {
    struct Pane_204 *  self4256;
    ;
};

struct envunion1316 {
    enum Unit_8  (*fun) (  struct env1315*  ,    struct Cursors_31  );
    struct env1315 env;
};

static  enum Unit_8   if_dash_just1314 (    struct Maybe_190  x1291 ,   struct envunion1316  fun1293 ) {
    struct Maybe_190  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_190_Just_t ) {
        struct envunion1316  temp1317 = (  fun1293 );
        ( temp1317.fun ( &temp1317.env ,  ( dref1294 .stuff .Maybe_190_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_190_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1318 (   struct env1315* env ,    struct Cursors_31  cursors4259 ) {
    ( (  set_dash_cursors1030 ) ( ( env->self4256 ) ,  ( (  cursors4259 ) .f_cur ) ,  ( (  cursors4259 ) .f_sel ) ,  ( CursorMovement_1031_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   redo1295 (   struct env195* env ,    struct Pane_204 *  self4256 ) {
    struct envunion196  temp1296 = ( (struct envunion196){ .fun = (  struct Maybe_190  (*) (  struct env108*  ,    struct TextBuf_97 *  ) )redo1297 , .env =  env->envinst108 } );
    struct Maybe_190  mcursors4257 = ( temp1296.fun ( &temp1296.env ,  ( ( * (  self4256 ) ) .f_buf ) ) );
    struct env1315 envinst1315 = {
        .self4256 =  self4256 ,
    };
    ( (  if_dash_just1314 ) ( (  mcursors4257 ) ,  ( (struct envunion1316){ .fun = (  enum Unit_8  (*) (  struct env1315*  ,    struct Cursors_31  ) )lam1318 , .env =  envinst1315 } ) ) );
    return ( Unit_8_Unit );
}

struct SliceReversedIter_1324 {
    struct Slice_27  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1324   into_dash_iter1325 (    struct SliceReversedIter_1324  self1899 ) {
    return (  self1899 );
}

static  struct SliceReversedIter_1324   reversed1326 (    struct Slice_27  slice1896 ) {
    return ( (struct SliceReversedIter_1324) { .f_slice = (  slice1896 ) , .f_current_dash_offset = ( (  slice1896 ) .f_count ) } );
}

static  struct Maybe_1135   next1328 (    struct SliceReversedIter_1324 *  self1902 ) {
    size_t  off1903 = ( ( * (  self1902 ) ) .f_current_dash_offset );
    if ( (  eq332 ( (  off1903 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_1135) { .tag = Maybe_1135_None_t } );
    }
    (*  self1902 ) .f_current_dash_offset = (  op_dash_sub403 ( (  off1903 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1135_Just ) ( (  elem_dash_get1307 ( ( ( * (  self1902 ) ) .f_slice ) , ( ( * (  self1902 ) ) .f_current_dash_offset ) ) ) ) );
}

static  struct Pos_29   action_dash_bwd1330 (   struct env102* env ,    struct TextBuf_97 *  self3781 ,    struct Action_28  action3783 ) {
    struct envunion103  temp1331 = ( (struct envunion103){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ) )change_dash_no_dash_action413 , .env =  env->envinst93 } );
    ( temp1331.fun ( &temp1331.env ,  (  self3781 ) ,  ( (  action3783 ) .f_from ) ,  ( (  action3783 ) .f_to_dash_fwd ) ,  ( (  action3783 ) .f_bwd ) ) );
    return ( (  action3783 ) .f_to_dash_bwd );
}

static  struct Maybe_190   undo1322 (   struct env106* env ,    struct TextBuf_97 *  self3806 ) {
    ( (  flush_dash_insert_dash_action1083 ) ( (  self3806 ) ) );
    struct Actions_98 *  actions3807 = ( & ( ( * (  self3806 ) ) .f_actions ) );
    if ( (  eq332 ( ( ( * (  actions3807 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_190) { .tag = Maybe_190_None_t } );
    }
    (*  actions3807 ) .f_cur = (  op_dash_sub403 ( ( ( * (  actions3807 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Changeset_25  changeset3808 = (  elem_dash_get1299 ( ( ( * (  actions3807 ) ) .f_list ) , ( ( * (  actions3807 ) ) .f_cur ) ) );
    struct SliceReversedIter_1324  temp1323 =  into_dash_iter1325 ( ( (  reversed1326 ) ( ( (  to_dash_slice1313 ) ( ( (  changeset3808 ) .f_parts ) ) ) ) ) );
    while (true) {
        struct Maybe_1135  __cond1327 =  next1328 (&temp1323);
        if (  __cond1327 .tag == 0 ) {
            break;
        }
        struct Action_28  action3810 =  __cond1327 .stuff .Maybe_1135_Just_s .field0;
        struct envunion107  temp1329 = ( (struct envunion107){ .fun = (  struct Pos_29  (*) (  struct env102*  ,    struct TextBuf_97 *  ,    struct Action_28  ) )action_dash_bwd1330 , .env =  env->envinst102 } );
        ( temp1329.fun ( &temp1329.env ,  (  self3806 ) ,  (  action3810 ) ) );
    }
    return ( ( Maybe_190_Just ) ( ( (  changeset3808 ) .f_before_dash_cursors ) ) );
}

struct env1333 {
    struct Pane_204 *  self4250;
    ;
};

struct envunion1334 {
    enum Unit_8  (*fun) (  struct env1333*  ,    struct Cursors_31  );
    struct env1333 env;
};

static  enum Unit_8   if_dash_just1332 (    struct Maybe_190  x1291 ,   struct envunion1334  fun1293 ) {
    struct Maybe_190  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_190_Just_t ) {
        struct envunion1334  temp1335 = (  fun1293 );
        ( temp1335.fun ( &temp1335.env ,  ( dref1294 .stuff .Maybe_190_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_190_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1336 (   struct env1333* env ,    struct Cursors_31  cursors4253 ) {
    ( (  set_dash_cursors1030 ) ( ( env->self4250 ) ,  ( (  cursors4253 ) .f_cur ) ,  ( (  cursors4253 ) .f_sel ) ,  ( CursorMovement_1031_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   undo1320 (   struct env193* env ,    struct Pane_204 *  self4250 ) {
    struct envunion194  temp1321 = ( (struct envunion194){ .fun = (  struct Maybe_190  (*) (  struct env106*  ,    struct TextBuf_97 *  ) )undo1322 , .env =  env->envinst106 } );
    struct Maybe_190  mcursors4251 = ( temp1321.fun ( &temp1321.env ,  ( ( * (  self4250 ) ) .f_buf ) ) );
    struct env1333 envinst1333 = {
        .self4250 =  self4250 ,
    };
    ( (  if_dash_just1332 ) ( (  mcursors4251 ) ,  ( (struct envunion1334){ .fun = (  enum Unit_8  (*) (  struct env1333*  ,    struct Cursors_31  ) )lam1336 , .env =  envinst1333 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Tuple2_216   minmax1340 (    struct Pos_29  l1329 ,    struct Pos_29  r1331 ) {
    return ( (  cmp415 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_216_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_216_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_29   or_dash_else1341 (    struct Maybe_32  self1733 ,    struct Pos_29  alt1735 ) {
    struct Maybe_32  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_32_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_32_Just_t ) {
            return ( dref1736 .stuff .Maybe_32_Just_s .field0 );
        }
    }
}

static  struct Pos_29   fst1342 (    struct Tuple2_216  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_29   snd1343 (    struct Tuple2_216  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_216   selection1339 (    struct Pane_204 *  self4262 ) {
    struct Tuple2_216  from_dash_to4263 = ( (  minmax1340 ) ( ( (  or_dash_else1341 ) ( ( ( * (  self4262 ) ) .f_sel ) ,  ( ( * (  self4262 ) ) .f_cursor ) ) ) ,  ( ( * (  self4262 ) ) .f_cursor ) ) );
    struct Pos_29  from4264 = ( (  fst1342 ) ( (  from_dash_to4263 ) ) );
    struct Pos_29  to4265 = ( (  right_dash_pos1075 ) ( ( ( * (  self4262 ) ) .f_buf ) ,  ( (  snd1343 ) ( (  from_dash_to4263 ) ) ) ) );
    return ( ( Tuple2_216_Tuple2 ) ( (  from4264 ) ,  (  to4265 ) ) );
}

struct env1346 {
    ;
    struct Editor_228 *  ed4375;
};

struct envunion1347 {
    enum Unit_8  (*fun) (  struct env1346*  ,    struct StrView_30  );
    struct env1346 env;
};

static  enum Unit_8   if_dash_just1345 (    struct Maybe_229  x1291 ,   struct envunion1347  fun1293 ) {
    struct Maybe_229  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_229_Just_t ) {
        struct envunion1347  temp1348 = (  fun1293 );
        ( temp1348.fun ( &temp1348.env ,  ( dref1294 .stuff .Maybe_229_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_229_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1349 (   struct env1346* env ,    struct StrView_30  cp4379 ) {
    ( (  free1023 ) ( (  cp4379 ) ,  ( ( * ( env->ed4375 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   copy_dash_selection_dash_to_dash_clipboard1338 (   struct env217* env ,    struct Editor_228 *  ed4375 ) {
    struct Tuple2_216  from_dash_to4376 = ( (  selection1339 ) ( ( (  pane1073 ) ( (  ed4375 ) ) ) ) );
    struct envunion218  temp1344 = ( (struct envunion218){ .fun = (  struct StrView_30  (*) (  struct env110*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ) )str_dash_between1164 , .env =  env->envinst110 } );
    struct StrView_30  cpd4377 = ( temp1344.fun ( &temp1344.env ,  ( ( ( * (  ed4375 ) ) .f_pane ) .f_buf ) ,  ( (  fst1342 ) ( (  from_dash_to4376 ) ) ) ,  ( (  snd1343 ) ( (  from_dash_to4376 ) ) ) ) );
    struct env1346 envinst1346 = {
        .ed4375 =  ed4375 ,
    };
    ( (  if_dash_just1345 ) ( ( ( * (  ed4375 ) ) .f_clipboard ) ,  ( (struct envunion1347){ .fun = (  enum Unit_8  (*) (  struct env1346*  ,    struct StrView_30  ) )lam1349 , .env =  envinst1346 } ) ) );
    (*  ed4375 ) .f_clipboard = ( ( Maybe_229_Just ) ( (  cpd4377 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1351 {
    enum Unit_8  (*fun) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  );
    struct env197 env;
};

struct env1355 {
    struct Pane_204 *  self4268;
    ;
};

struct envunion1356 {
    enum Unit_8  (*fun) (  struct env1355*  ,    struct Cursors_31  );
    struct env1355 env;
};

static  enum Unit_8   if_dash_just1354 (    struct Maybe_190  x1291 ,   struct envunion1356  fun1293 ) {
    struct Maybe_190  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_190_Just_t ) {
        struct envunion1356  temp1357 = (  fun1293 );
        ( temp1357.fun ( &temp1357.env ,  ( dref1294 .stuff .Maybe_190_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_190_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1358 (   struct env1355* env ,    struct Cursors_31  cursors4275 ) {
    ( (  set_dash_cursors1030 ) ( ( env->self4268 ) ,  ( (  cursors4275 ) .f_cur ) ,  ( (  cursors4275 ) .f_sel ) ,  ( CursorMovement_1031_OverrideSelect ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   replace_dash_selection1352 (   struct env197* env ,    struct Pane_204 *  self4268 ,    struct Tuple2_216  pos_prime_s4270 ,    struct StrView_30  cp4272 ) {
    struct envunion198  temp1353 = ( (struct envunion198){ .fun = (  struct Maybe_190  (*) (  struct env112*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_190  ) )change1108 , .env =  env->envinst112 } );
    struct Maybe_190  mcursors4273 = ( temp1353.fun ( &temp1353.env ,  ( ( * (  self4268 ) ) .f_buf ) ,  ( (  fst1342 ) ( (  pos_prime_s4270 ) ) ) ,  ( (  snd1343 ) ( (  pos_prime_s4270 ) ) ) ,  (  cp4272 ) ,  ( ( Maybe_190_Just ) ( ( (struct Cursors_31) { .f_cur = ( ( * (  self4268 ) ) .f_cursor ) , .f_sel = ( ( * (  self4268 ) ) .f_sel ) } ) ) ) ) );
    struct env1355 envinst1355 = {
        .self4268 =  self4268 ,
    };
    ( (  if_dash_just1354 ) ( (  mcursors4273 ) ,  ( (struct envunion1356){ .fun = (  enum Unit_8  (*) (  struct env1355*  ,    struct Cursors_31  ) )lam1358 , .env =  envinst1355 } ) ) );
    return ( Unit_8_Unit );
}

struct envunion1360 {
    enum Unit_8  (*fun) (  struct env217*  ,    struct Editor_228 *  );
    struct env217 env;
};

struct envunion1362 {
    enum Unit_8  (*fun) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  );
    struct env197 env;
};

struct envunion1364 {
    enum Unit_8  (*fun) (  struct env217*  ,    struct Editor_228 *  );
    struct env217 env;
};

static  struct StrBuilder_62   mk1370 (    enum CAllocator_10  al2806 ) {
    return ( (struct StrBuilder_62) { .f_chars = ( (  mk382 ) ( (  al2806 ) ) ) } );
}

struct IntStrIter_1376 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1375 {
    struct StrViewIter_703  f_left;
    struct IntStrIter_1376  f_right;
};

struct StrConcatIter_1374 {
    struct StrConcatIter_1375  f_left;
    struct StrViewIter_703  f_right;
};

struct env1377 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2774;
};

struct envunion1378 {
    enum Unit_8  (*fun) (  struct env1377*  ,    struct Char_65  );
    struct env1377 env;
};

static  struct StrConcatIter_1374   into_dash_iter1380 (    struct StrConcatIter_1374  self1497 ) {
    return (  self1497 );
}

struct env1386 {
    ;
    size_t  base1210;
};

struct envunion1387 {
    size_t  (*fun) (  struct env1386*  ,    int32_t  ,    size_t  );
    struct env1386 env;
};

static  size_t   reduce1385 (    struct Range_135  iterable1093 ,    size_t  base1095 ,   struct envunion1387  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_138  it1099 = ( (  into_dash_iter139 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_140  dref1100 = ( (  next141 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_140_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_140_Just_t ) {
                struct envunion1387  temp1388 = (  fun1097 );
                x1098 = ( temp1388.fun ( &temp1388.env ,  ( dref1100 .stuff .Maybe_140_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1389 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1389);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1390;
    return (  temp1390 );
}

static  size_t   lam1391 (   struct env1386* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul338 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1384 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1386 envinst1386 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1385 ) ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1387){ .fun = (  size_t  (*) (  struct env1386*  ,    int32_t  ,    size_t  ) )lam1391 , .env =  envinst1386 } ) ) );
}

static  uint8_t   cast1392 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_706   next1383 (    struct IntStrIter_1376 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_706_Just ) ( ( (  from_dash_charlike314 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp142 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    size_t  trim_dash_down1429 = ( (  pow1384 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub149 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    size_t  upper1430 = (  op_dash_div309 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    size_t  upper_dash_mask1431 = (  op_dash_mul338 ( (  op_dash_div309 ( (  upper1430 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast1392 ) ( (  op_dash_sub403 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub149 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8977 ) ( (  op_dash_add869 ( (  digit1432 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_706_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_706   next1382 (    struct StrConcatIter_1375 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next1383 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next1381 (    struct StrConcatIter_1374 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next1382 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each1373 (    struct StrConcatIter_1374  iterable1074 ,   struct envunion1378  fun1076 ) {
    struct StrConcatIter_1374  temp1379 = ( (  into_dash_iter1380 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1374 *  it1077 = ( &temp1379 );
    while ( ( true ) ) {
        struct Maybe_706  dref1078 = ( (  next1381 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_706_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_706_Just_t ) {
                struct envunion1378  temp1393 = (  fun1076 );
                ( temp1393.fun ( &temp1393.env ,  ( dref1078 .stuff .Maybe_706_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits1400 (    size_t  self1436 ) {
    if ( (  eq332 ( (  self1436 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp283 ( (  self1436 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div309 ( (  self1436 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1437 = (  op_dash_add144 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_1376   uint_dash_iter1399 (    size_t  int1443 ) {
    return ( (struct IntStrIter_1376) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits1400 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1376   chars1398 (    size_t  self1473 ) {
    return ( (  uint_dash_iter1399 ) ( (  self1473 ) ) );
}

static  struct StrConcatIter_1375   into_dash_iter1397 (    struct StrConcat_72  dref1504 ) {
    return ( (struct StrConcatIter_1375) { .f_left = ( (  chars708 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1398 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1375   chars1396 (    struct StrConcat_72  self1515 ) {
    return ( (  into_dash_iter1397 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_1374   into_dash_iter1395 (    struct StrConcat_71  dref1504 ) {
    return ( (struct StrConcatIter_1374) { .f_left = ( (  chars1396 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars708 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_1374   chars1394 (    struct StrConcat_71  self1515 ) {
    return ( (  into_dash_iter1395 ) ( (  self1515 ) ) );
}

static  enum Unit_8   write_dash_slice1405 (   struct env58* env ,    struct StrBuilder_62 *  builder2764 ,    struct Slice_14  s2766 ) {
    struct envunion59  temp1406 = ( (struct envunion59){ .fun = (  enum Unit_8  (*) (  struct env48*  ,    struct List_13 *  ,    struct Slice_14  ) )add_dash_all437 , .env =  env->envinst48 } );
    ( temp1406.fun ( &temp1406.env ,  ( & ( ( * (  builder2764 ) ) .f_chars ) ) ,  (  s2766 ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_14   from_dash_char1407 (    struct Char_65  c1942 ,    uint8_t *  buf1944 ) {
    struct CharDestructured_303  dref1945 = ( (  destructure305 ) ( (  c1942 ) ) );
    if ( dref1945.tag == CharDestructured_303_Ref_t ) {
        return ( (struct Slice_14) { .f_ptr = ( ( dref1945 .stuff .CharDestructured_303_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1945 .stuff .CharDestructured_303_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1945.tag == CharDestructured_303_Scalar_t ) {
            if ( (  cmp155 ( ( ( dref1945 .stuff .CharDestructured_303_Scalar_s .field0 ) .f_value ) , (  from_dash_integral150 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1408 = ( (  from_dash_string57 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1408);
                exit ( 1 );
                ( Unit_8_Unit );
            }
            (*  buf1944 ) = ( (  u32_dash_u8129 ) ( ( ( dref1945 .stuff .CharDestructured_303_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_14) { .f_ptr = (  buf1944 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_8   write_dash_char1403 (   struct env60* env ,    struct StrBuilder_62 *  builder2769 ,    struct Char_65  c2771 ) {
    struct envunion61  temp1404 = ( (struct envunion61){ .fun = (  enum Unit_8  (*) (  struct env58*  ,    struct StrBuilder_62 *  ,    struct Slice_14  ) )write_dash_slice1405 , .env =  env->envinst58 } );
    uint8_t  temp1410;
    uint8_t  temp1409 = (  temp1410 );
    ( temp1404.fun ( &temp1404.env ,  (  builder2769 ) ,  ( (  from_dash_char1407 ) ( (  c2771 ) ,  ( &temp1409 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1401 (   struct env1377* env ,    struct Char_65  c2778 ) {
    struct envunion64  temp1402 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1403 , .env =  env->envinst60 } );
    return ( temp1402.fun ( &temp1402.env ,  ( env->builder2774 ) ,  (  c2778 ) ) );
}

static  enum Unit_8   write1372 (   struct env63* env ,    struct StrBuilder_62 *  builder2774 ,    struct StrConcat_71  s2776 ) {
    struct env1377 envinst1377 = {
        .envinst60 = env->envinst60 ,
        .builder2774 =  builder2774 ,
    };
    ( (  for_dash_each1373 ) ( ( (  chars1394 ) ( (  s2776 ) ) ) ,  ( (struct envunion1378){ .fun = (  enum Unit_8  (*) (  struct env1377*  ,    struct Char_65  ) )lam1401 , .env =  envinst1377 } ) ) );
    return ( Unit_8_Unit );
}

static  uint8_t *   cast_dash_ptr1414 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_14   cast_dash_slice1413 (    struct Slice_14  s1933 ) {
    return ( (struct Slice_14) { .f_ptr = ( (  cast_dash_ptr1414 ) ( ( (  s1933 ) .f_ptr ) ) ) , .f_count = ( (  s1933 ) .f_count ) } );
}

static  struct StrView_30   as_dash_str1412 (    struct StrBuilder_62 *  builder2812 ) {
    return ( (struct StrView_30) { .f_contents = ( (  cast_dash_slice1413 ) ( ( (  subslice427 ) ( ( ( ( * (  builder2812 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2812 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_30   mk_dash_dyn_dash_str1368 (   struct env69* env ,    struct StrConcat_71  s2832 ,    enum CAllocator_10  al2834 ) {
    struct StrBuilder_62  temp1369 = ( (  mk1370 ) ( (  al2834 ) ) );
    struct StrBuilder_62 *  sb2835 = ( &temp1369 );
    struct envunion70  temp1371 = ( (struct envunion70){ .fun = (  enum Unit_8  (*) (  struct env63*  ,    struct StrBuilder_62 *  ,    struct StrConcat_71  ) )write1372 , .env =  env->envinst63 } );
    ( temp1371.fun ( &temp1371.env ,  (  sb2835 ) ,  (  s2832 ) ) );
    struct envunion73  temp1411 = ( (struct envunion73){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1403 , .env =  env->envinst60 } );
    ( temp1411.fun ( &temp1411.env ,  (  sb2835 ) ,  ( (  nullchar628 ) ( ) ) ) );
    struct StrView_30  dynstr2836 = ( (  as_dash_str1412 ) ( (  sb2835 ) ) );
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2836 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub403 ( ( ( (  dynstr2836 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1366 (   struct env219* env ,    struct Editor_228 *  ed4387 ,    struct StrConcat_71  s4389 ) {
    ( (  reset_dash_msg1017 ) ( (  ed4387 ) ) );
    struct envunion220  temp1367 = ( (struct envunion220){ .fun = (  struct StrView_30  (*) (  struct env69*  ,    struct StrConcat_71  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1368 , .env =  env->envinst69 } );
    (*  ed4387 ) .f_msg = ( ( Maybe_229_Just ) ( ( temp1367.fun ( &temp1367.env ,  (  s4389 ) ,  ( ( * (  ed4387 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

struct env1416 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env197 envinst197;
    struct Editor_228 *  ed4439;
};

struct envunion1417 {
    enum Unit_8  (*fun) (  struct env1416*  ,    struct StrView_30  );
    struct env1416 env;
};

static  enum Unit_8   if_dash_just1415 (    struct Maybe_229  x1291 ,   struct envunion1417  fun1293 ) {
    struct Maybe_229  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_229_Just_t ) {
        struct envunion1417  temp1418 = (  fun1293 );
        ( temp1418.fun ( &temp1418.env ,  ( dref1294 .stuff .Maybe_229_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_229_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_29   max_dash_pos1420 (    struct Pane_204 *  pane4198 ) {
    return ( {  struct Maybe_32  dref4199 = ( ( * (  pane4198 ) ) .f_sel ) ; dref4199.tag == Maybe_32_Just_t ? ( (  max416 ) ( ( ( * (  pane4198 ) ) .f_cursor ) ,  ( dref4199 .stuff .Maybe_32_Just_s .field0 ) ) ) : ( ( * (  pane4198 ) ) .f_cursor ) ; } );
}

static  uint8_t   elem_dash_get1422 (    struct Slice_14  self1868 ,    size_t  idx1870 ) {
    return ( (  get478 ) ( (  self1868 ) ,  (  idx1870 ) ) );
}

static  uint8_t   last1421 (    struct Slice_14  s1936 ) {
    if ( (  eq332 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1153 ) ( ( (  from_dash_string183 ) ( ( "(Slice.last) called on empty slice." ) ,  ( 35 ) ) ) ) );
    }
    return (  elem_dash_get1422 ( (  s1936 ) , (  op_dash_sub403 ( ( (  s1936 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  int32_t   clamp1423 (    int32_t  x1352 ,    int32_t  mn1354 ,    int32_t  mx1356 ) {
    if ( (  cmp142 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp142 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  enum Unit_8   lam1419 (   struct env1416* env ,    struct StrView_30  cp4450 ) {
    struct Pos_29  start4451 = ( (  max_dash_pos1420 ) ( ( (  pane1073 ) ( ( env->ed4439 ) ) ) ) );
    if ( (  eq306 ( ( (  last1421 ) ( ( (  cp4450 ) .f_contents ) ) ) , ( (  ascii_dash_u8832 ) ( ( (  from_dash_charlike873 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        start4451 = ( (struct Pos_29) { .f_line = ( (  clamp1423 ) ( (  op_dash_add144 ( ( (  start4451 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  num_dash_lines1076 ) ( ( ( * ( (  pane1073 ) ( ( env->ed4439 ) ) ) ) .f_buf ) ) ) ) ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } );
    } else {
        start4451 = ( (  right_dash_pos1075 ) ( ( ( ( * ( env->ed4439 ) ) .f_pane ) .f_buf ) ,  (  start4451 ) ) );
    }
    struct envunion240  temp1424 = ( (struct envunion240){ .fun = (  enum Unit_8  (*) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  ) )replace_dash_selection1352 , .env =  env->envinst197 } );
    ( temp1424.fun ( &temp1424.env ,  ( (  pane1073 ) ( ( env->ed4439 ) ) ) ,  ( ( Tuple2_216_Tuple2 ) ( (  start4451 ) ,  (  start4451 ) ) ) ,  (  cp4450 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1427 {
    enum Unit_8  (*fun) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  );
    struct env197 env;
};

struct env1426 {
    struct env197 envinst197;
    struct Editor_228 *  ed4439;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion1428 {
    enum Unit_8  (*fun) (  struct env1426*  ,    struct StrView_30  );
    struct env1426 env;
};

static  enum Unit_8   if_dash_just1425 (    struct Maybe_229  x1291 ,   struct envunion1428  fun1293 ) {
    struct Maybe_229  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_229_Just_t ) {
        struct envunion1428  temp1429 = (  fun1293 );
        ( temp1429.fun ( &temp1429.env ,  ( dref1294 .stuff .Maybe_229_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_229_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  struct Pos_29   min_dash_pos1431 (    struct Pane_204 *  pane4193 ) {
    return ( {  struct Maybe_32  dref4194 = ( ( * (  pane4193 ) ) .f_sel ) ; dref4194.tag == Maybe_32_Just_t ? ( (  min414 ) ( ( ( * (  pane4193 ) ) .f_cursor ) ,  ( dref4194 .stuff .Maybe_32_Just_s .field0 ) ) ) : ( ( * (  pane4193 ) ) .f_cursor ) ; } );
}

static  enum Unit_8   lam1430 (   struct env1426* env ,    struct StrView_30  cp4453 ) {
    struct Pos_29  start4454 = ( (  min_dash_pos1431 ) ( ( (  pane1073 ) ( ( env->ed4439 ) ) ) ) );
    if ( (  eq306 ( ( (  last1421 ) ( ( (  cp4453 ) .f_contents ) ) ) , ( (  ascii_dash_u8832 ) ( ( (  from_dash_charlike873 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Pos_29  temp1432 = (  start4454 );
        temp1432 .  f_bi = (  from_dash_integral56 ( 0 ) );
        start4454 = ( temp1432 );
    }
    struct envunion1427  temp1433 = ( (struct envunion1427){ .fun = (  enum Unit_8  (*) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  ) )replace_dash_selection1352 , .env =  env->envinst197 } );
    ( temp1433.fun ( &temp1433.env ,  ( (  pane1073 ) ( ( env->ed4439 ) ) ) ,  ( ( Tuple2_216_Tuple2 ) ( (  start4454 ) ,  (  start4454 ) ) ) ,  (  cp4453 ) ) );
    return ( Unit_8_Unit );
}

struct envunion1436 {
    enum Unit_8  (*fun) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  );
    struct env197 env;
};

struct env1435 {
    struct Editor_228 *  ed4439;
    ;
    struct env197 envinst197;
    ;
};

struct envunion1437 {
    enum Unit_8  (*fun) (  struct env1435*  ,    struct StrView_30  );
    struct env1435 env;
};

static  enum Unit_8   if_dash_just1434 (    struct Maybe_229  x1291 ,   struct envunion1437  fun1293 ) {
    struct Maybe_229  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_229_Just_t ) {
        struct envunion1437  temp1438 = (  fun1293 );
        ( temp1438.fun ( &temp1438.env ,  ( dref1294 .stuff .Maybe_229_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_229_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1439 (   struct env1435* env ,    struct StrView_30  cp4456 ) {
    struct Pos_29  start4457 = ( (  min_dash_pos1431 ) ( ( (  pane1073 ) ( ( env->ed4439 ) ) ) ) );
    struct envunion1436  temp1440 = ( (struct envunion1436){ .fun = (  enum Unit_8  (*) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  ) )replace_dash_selection1352 , .env =  env->envinst197 } );
    ( temp1440.fun ( &temp1440.env ,  ( (  pane1073 ) ( ( env->ed4439 ) ) ) ,  ( ( Tuple2_216_Tuple2 ) ( (  start4457 ) ,  (  start4457 ) ) ) ,  (  cp4456 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   expand1441 (    struct Pane_204 *  pane4212 ) {
    struct Pos_29  min_dash_pos4213 = ( (  min_dash_pos1431 ) ( (  pane4212 ) ) );
    struct Pos_29  max_dash_pos4214 = ( (  max_dash_pos1420 ) ( (  pane4212 ) ) );
    int32_t  max_dash_pos_dash_max4215 = ( (  size_dash_i32294 ) ( ( (  num_dash_bytes1069 ) ( ( (  line1036 ) ( ( ( * (  pane4212 ) ) .f_buf ) ,  ( (  max_dash_pos4214 ) .f_line ) ) ) ) ) ) );
    if ( ( ! ( (  eq418 ( ( (  min_dash_pos4213 ) .f_bi ) , (  from_dash_integral56 ( 0 ) ) ) ) && (  eq418 ( ( (  max_dash_pos4214 ) .f_bi ) , (  max_dash_pos_dash_max4215 ) ) ) ) ) ) {
        struct Pos_29  temp1442 = (  min_dash_pos4213 );
        temp1442 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4212 ) .f_sel = ( ( Maybe_32_Just ) ( ( temp1442 ) ) );
        struct Pos_29  temp1443 = (  max_dash_pos4214 );
        temp1443 .  f_bi = (  max_dash_pos_dash_max4215 );
        (*  pane4212 ) .f_cursor = ( temp1443 );
    } else {
        if ( (  cmp142 ( (  op_dash_add144 ( ( (  max_dash_pos4214 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  num_dash_lines1076 ) ( ( ( * (  pane4212 ) ) .f_buf ) ) ) ) != 0 ) ) {
            return ( Unit_8_Unit );
        }
        struct Pos_29  temp1444 = (  min_dash_pos4213 );
        temp1444 .  f_bi = (  from_dash_integral56 ( 0 ) );
        (*  pane4212 ) .f_sel = ( ( Maybe_32_Just ) ( ( temp1444 ) ) );
        int32_t  next_dash_line4216 = (  op_dash_add144 ( ( (  max_dash_pos4214 ) .f_line ) , (  from_dash_integral56 ( 1 ) ) ) );
        (*  pane4212 ) .f_cursor = ( (struct Pos_29) { .f_line = (  next_dash_line4216 ) , .f_bi = ( (  size_dash_i32294 ) ( ( (  num_dash_bytes1069 ) ( ( (  line1036 ) ( ( ( * (  pane4212 ) ) .f_buf ) ,  (  next_dash_line4216 ) ) ) ) ) ) ) } );
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_none1445 (    struct Maybe_32  m1264 ) {
    struct Maybe_32  dref1265 = (  m1264 );
    if ( dref1265.tag == Maybe_32_None_t ) {
        return ( true );
    }
    else {
        if ( dref1265.tag == Maybe_32_Just_t ) {
            return ( false );
        }
    }
}

struct Maybe_1447 {
    enum {
        Maybe_1447_None_t,
        Maybe_1447_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_216  field0;
        } Maybe_1447_Just_s;
    } stuff;
};

static struct Maybe_1447 Maybe_1447_Just (  struct Tuple2_216  field0 ) {
    return ( struct Maybe_1447 ) { .tag = Maybe_1447_Just_t, .stuff = { .Maybe_1447_Just_s = { .field0 = field0 } } };
};

struct env1449 {
    struct Pane_204 *  pane4320;
    ;
    struct StrView_30  query4324;
    ;
    ;
    ;
};

struct envunion1451 {
    struct Maybe_1091  (*fun) (  struct env1449*  ,    struct Pos_29  );
    struct env1449 env;
};

struct Zip_1458 {
    struct SliceIter_441  f_left_dash_it;
    struct SliceIter_441  f_right_dash_it;
};

struct Tuple2_1459 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1459 Tuple2_1459_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1459 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1461 {
    bool (*  fun1126 )(    struct Tuple2_1459  );
};

struct envunion1462 {
    bool  (*fun) (  struct env1461*  ,    struct Tuple2_1459  ,    bool  );
    struct env1461 env;
};

static  struct Zip_1458   into_dash_iter1463 (    struct Zip_1458  self911 ) {
    return (  self911 );
}

struct Maybe_1464 {
    enum {
        Maybe_1464_None_t,
        Maybe_1464_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1459  field0;
        } Maybe_1464_Just_s;
    } stuff;
};

static struct Maybe_1464 Maybe_1464_Just (  struct Tuple2_1459  field0 ) {
    return ( struct Maybe_1464 ) { .tag = Maybe_1464_Just_t, .stuff = { .Maybe_1464_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1464   next1465 (    struct Zip_1458 *  self914 ) {
    struct Zip_1458  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_444  dref916 = ( (  next445 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_444_None_t ) {
            return ( (struct Maybe_1464) { .tag = Maybe_1464_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_444_Just_t ) {
                struct Maybe_444  dref918 = ( (  next445 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_444_None_t ) {
                    return ( (struct Maybe_1464) { .tag = Maybe_1464_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_444_Just_t ) {
                        ( (  next445 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next445 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1464_Just ) ( ( ( Tuple2_1459_Tuple2 ) ( ( dref916 .stuff .Maybe_444_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_444_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1460 (    struct Zip_1458  iterable1093 ,    bool  base1095 ,   struct envunion1462  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1458  it1099 = ( (  into_dash_iter1463 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1464  dref1100 = ( (  next1465 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1464_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1464_Just_t ) {
                struct envunion1462  temp1466 = (  fun1097 );
                x1098 = ( temp1466.fun ( &temp1466.env ,  ( dref1100 .stuff .Maybe_1464_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1467 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1467);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1468;
    return (  temp1468 );
}

static  bool   lam1469 (   struct env1461* env ,    struct Tuple2_1459  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1457 (    struct Zip_1458  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1459  ) ) {
    struct env1461 envinst1461 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1460 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1462){ .fun = (  bool  (*) (  struct env1461*  ,    struct Tuple2_1459  ,    bool  ) )lam1469 , .env =  envinst1461 } ) ) );
}

static  struct Zip_1458   zip1470 (    struct Slice_14  left922 ,    struct Slice_14  right924 ) {
    struct SliceIter_441  left_dash_it925 = ( (  into_dash_iter443 ) ( (  left922 ) ) );
    struct SliceIter_441  right_dash_it926 = ( (  into_dash_iter443 ) ( (  right924 ) ) );
    return ( (struct Zip_1458) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1471 (    struct Tuple2_1459  dref1863 ) {
    return (  eq306 ( ( dref1863 .field0 ) , ( dref1863 .field1 ) ) );
}

static  bool   eq1456 (    struct Slice_14  l1860 ,    struct Slice_14  r1862 ) {
    if ( ( !  eq332 ( ( (  l1860 ) .f_count ) , ( (  r1862 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1457 ) ( ( (  zip1470 ) ( (  l1860 ) ,  (  r1862 ) ) ) ,  (  lam1471 ) ) );
}

static  struct Maybe_1091   find_dash_slice1453 (    struct Slice_14  haystack1913 ,    struct Slice_14  needle1915 ) {
    struct RangeIter_138  temp1454 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( ( (  size_dash_i32294 ) ( ( (  haystack1913 ) .f_count ) ) ) , ( (  size_dash_i32294 ) ( ( (  needle1915 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_140  __cond1455 =  next141 (&temp1454);
        if (  __cond1455 .tag == 0 ) {
            break;
        }
        int32_t  i1917 =  __cond1455 .stuff .Maybe_140_Just_s .field0;
        if ( (  eq1456 ( ( (  subslice427 ) ( (  haystack1913 ) ,  ( (  i32_dash_size355 ) ( (  i1917 ) ) ) ,  (  op_dash_add325 ( ( (  i32_dash_size355 ) ( (  i1917 ) ) ) , ( (  needle1915 ) .f_count ) ) ) ) ) , (  needle1915 ) ) ) ) {
            return ( ( Maybe_1091_Just ) ( ( (  i32_dash_size355 ) ( (  i1917 ) ) ) ) );
        }
    }
    return ( (struct Maybe_1091) { .tag = Maybe_1091_None_t } );
}

static  struct StrView_30   byte_dash_substr_dash_from1472 (    struct StrView_30  s2191 ,    size_t  from2193 ) {
    return ( (struct StrView_30) { .f_contents = ( (  from426 ) ( ( (  s2191 ) .f_contents ) ,  (  from2193 ) ) ) } );
}

static  struct Maybe_1091   search_dash_on_dash_line1452 (   struct env1449* env ,    struct Pos_29  pos4327 ) {
    return ( (  find_dash_slice1453 ) ( ( ( (  byte_dash_substr_dash_from1472 ) ( ( (  line1036 ) ( ( ( * ( env->pane4320 ) ) .f_buf ) ,  ( (  pos4327 ) .f_line ) ) ) ,  ( (  i32_dash_size355 ) ( ( (  pos4327 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( ( env->query4324 ) .f_contents ) ) );
}

static  int32_t   op_dash_div1478 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   op_dash_mul1479 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   mod1477 (    int32_t  l1229 ,    int32_t  d1231 ) {
    int32_t  r1232 = (  op_dash_div1478 ( (  l1229 ) , (  d1231 ) ) );
    int32_t  m1233 = (  op_dash_sub149 ( (  l1229 ) , (  op_dash_mul1479 ( (  r1232 ) , (  d1231 ) ) ) ) );
    if ( (  cmp142 ( (  m1233 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add144 ( (  d1231 ) , (  m1233 ) ) );
    } else {
        return (  m1233 );
    }
}

struct envunion1481 {
    struct Maybe_1091  (*fun) (  struct env1449*  ,    struct Pos_29  );
    struct env1449 env;
};

static  struct Maybe_1447   search_dash_from1448 (    struct Pane_204 *  pane4320 ,    struct Pos_29  pos4322 ,    struct StrView_30  query4324 ) {
    struct env1449 envinst1449 = {
        .pane4320 =  pane4320 ,
        .query4324 =  query4324 ,
    };
    struct envunion1451  temp1450 = ( (struct envunion1451){ .fun = (  struct Maybe_1091  (*) (  struct env1449*  ,    struct Pos_29  ) )search_dash_on_dash_line1452 , .env =  envinst1449 } );
    struct Maybe_1091  dref4328 = ( temp1450.fun ( &temp1450.env ,  (  pos4322 ) ) );
    if ( dref4328.tag == Maybe_1091_Just_t ) {
        struct Pos_29  temp1473 = (  pos4322 );
        temp1473 .  f_bi = (  op_dash_add144 ( ( (  pos4322 ) .f_bi ) , ( (  size_dash_i32294 ) ( ( dref4328 .stuff .Maybe_1091_Just_s .field0 ) ) ) ) );
        struct Pos_29  sel_dash_pos4330 = ( temp1473 );
        struct Pos_29  temp1474 = (  pos4322 );
        temp1474 .  f_bi = (  op_dash_sub149 ( (  op_dash_add144 ( ( (  pos4322 ) .f_bi ) , ( (  size_dash_i32294 ) ( (  op_dash_add325 ( ( dref4328 .stuff .Maybe_1091_Just_s .field0 ) , ( (  num_dash_bytes1069 ) ( (  query4324 ) ) ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_29  cur_dash_pos4331 = ( temp1474 );
        return ( ( Maybe_1447_Just ) ( ( ( Tuple2_216_Tuple2 ) ( (  sel_dash_pos4330 ) ,  (  cur_dash_pos4331 ) ) ) ) );
    }
    else {
        if ( dref4328.tag == Maybe_1091_None_t ) {
            int32_t  num_dash_lines4332 = ( (  num_dash_lines1076 ) ( ( ( * (  pane4320 ) ) .f_buf ) ) );
            struct RangeIter_138  temp1475 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4332 ) ) ) );
            while (true) {
                struct Maybe_140  __cond1476 =  next141 (&temp1475);
                if (  __cond1476 .tag == 0 ) {
                    break;
                }
                int32_t  i4334 =  __cond1476 .stuff .Maybe_140_Just_s .field0;
                int32_t  line4335 = ( (  mod1477 ) ( (  op_dash_add144 ( ( (  pos4322 ) .f_line ) , (  i4334 ) ) ) ,  (  num_dash_lines4332 ) ) );
                struct envunion1481  temp1480 = ( (struct envunion1481){ .fun = (  struct Maybe_1091  (*) (  struct env1449*  ,    struct Pos_29  ) )search_dash_on_dash_line1452 , .env =  envinst1449 } );
                struct Maybe_1091  dref4336 = ( temp1480.fun ( &temp1480.env ,  ( (struct Pos_29) { .f_line = (  line4335 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) );
                if ( dref4336.tag == Maybe_1091_Just_t ) {
                    struct Pos_29  sel_dash_pos4338 = ( (struct Pos_29) { .f_line = (  line4335 ) , .f_bi = ( (  size_dash_i32294 ) ( ( dref4336 .stuff .Maybe_1091_Just_s .field0 ) ) ) } );
                    struct Pos_29  cur_dash_pos4339 = ( (struct Pos_29) { .f_line = (  line4335 ) , .f_bi = (  op_dash_sub149 ( ( (  size_dash_i32294 ) ( (  op_dash_add325 ( ( dref4336 .stuff .Maybe_1091_Just_s .field0 ) , ( (  num_dash_bytes1069 ) ( (  query4324 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1447_Just ) ( ( ( Tuple2_216_Tuple2 ) ( (  sel_dash_pos4338 ) ,  (  cur_dash_pos4339 ) ) ) ) );
                }
                else {
                    if ( dref4336.tag == Maybe_1091_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1447) { .tag = Maybe_1447_None_t } );
        }
    }
}

static  enum Unit_8   next_dash_match1446 (    struct Editor_228 *  ed4423 ) {
    struct Maybe_229  dref4424 = ( ( * (  ed4423 ) ) .f_search_dash_term );
    if ( dref4424.tag == Maybe_229_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4424.tag == Maybe_229_Just_t ) {
            struct Maybe_1447  dref4426 = ( (  search_dash_from1448 ) ( ( (  pane1073 ) ( (  ed4423 ) ) ) ,  ( (  max_dash_pos1420 ) ( ( (  pane1073 ) ( (  ed4423 ) ) ) ) ) ,  ( dref4424 .stuff .Maybe_229_Just_s .field0 ) ) );
            if ( dref4426.tag == Maybe_1447_None_t ) {
            }
            else {
                if ( dref4426.tag == Maybe_1447_Just_t ) {
                    ( (  set_dash_cursors1030 ) ( ( (  pane1073 ) ( (  ed4423 ) ) ) ,  ( dref4426 .stuff .Maybe_1447_Just_s .field0 .field1 ) ,  ( ( Maybe_32_Just ) ( ( dref4426 .stuff .Maybe_1447_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1031_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_1091   find_dash_last_dash_occurence_dash_of_dash_slice1484 (    struct Slice_14  haystack1920 ,    struct Slice_14  needle1922 ) {
    struct Maybe_1091  occ1923 = ( (struct Maybe_1091) { .tag = Maybe_1091_None_t } );
    struct RangeIter_138  temp1485 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( ( (  size_dash_i32294 ) ( ( (  haystack1920 ) .f_count ) ) ) , ( (  size_dash_i32294 ) ( ( (  needle1922 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_140  __cond1486 =  next141 (&temp1485);
        if (  __cond1486 .tag == 0 ) {
            break;
        }
        int32_t  i1925 =  __cond1486 .stuff .Maybe_140_Just_s .field0;
        if ( (  eq1456 ( ( (  subslice427 ) ( (  haystack1920 ) ,  ( (  i32_dash_size355 ) ( (  i1925 ) ) ) ,  (  op_dash_add325 ( ( (  i32_dash_size355 ) ( (  i1925 ) ) ) , ( (  needle1922 ) .f_count ) ) ) ) ) , (  needle1922 ) ) ) ) {
            occ1923 = ( ( Maybe_1091_Just ) ( ( (  i32_dash_size355 ) ( (  i1925 ) ) ) ) );
        }
    }
    return (  occ1923 );
}

static  struct Maybe_1447   search_dash_back1483 (    struct Pane_204 *  pane4342 ,    struct Pos_29  pos4344 ,    struct StrView_30  query4346 ) {
    struct Maybe_1091  dref4347 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1484 ) ( ( ( (  byte_dash_substr484 ) ( ( (  line1036 ) ( ( ( * (  pane4342 ) ) .f_buf ) ,  ( (  pos4344 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size355 ) ( ( (  pos4344 ) .f_bi ) ) ) ) ) .f_contents ) ,  ( (  query4346 ) .f_contents ) ) );
    if ( dref4347.tag == Maybe_1091_Just_t ) {
        struct Pos_29  temp1487 = (  pos4344 );
        temp1487 .  f_bi = ( (  size_dash_i32294 ) ( ( dref4347 .stuff .Maybe_1091_Just_s .field0 ) ) );
        struct Pos_29  sel_dash_pos4349 = ( temp1487 );
        struct Pos_29  temp1488 = (  pos4344 );
        temp1488 .  f_bi = (  op_dash_sub149 ( ( (  size_dash_i32294 ) ( (  op_dash_add325 ( ( dref4347 .stuff .Maybe_1091_Just_s .field0 ) , ( (  num_dash_bytes1069 ) ( (  query4346 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        struct Pos_29  cur_dash_pos4350 = ( temp1488 );
        return ( ( Maybe_1447_Just ) ( ( ( Tuple2_216_Tuple2 ) ( (  sel_dash_pos4349 ) ,  (  cur_dash_pos4350 ) ) ) ) );
    }
    else {
        if ( dref4347.tag == Maybe_1091_None_t ) {
            int32_t  num_dash_lines4351 = ( (  num_dash_lines1076 ) ( ( ( * (  pane4342 ) ) .f_buf ) ) );
            struct RangeIter_138  temp1489 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_integral56 ( 1 ) ) ,  (  num_dash_lines4351 ) ) ) );
            while (true) {
                struct Maybe_140  __cond1490 =  next141 (&temp1489);
                if (  __cond1490 .tag == 0 ) {
                    break;
                }
                int32_t  i4353 =  __cond1490 .stuff .Maybe_140_Just_s .field0;
                int32_t  line4354 = ( (  mod1477 ) ( (  op_dash_sub149 ( ( (  pos4344 ) .f_line ) , (  i4353 ) ) ) ,  (  num_dash_lines4351 ) ) );
                struct Maybe_1091  dref4355 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1484 ) ( ( ( (  line1036 ) ( ( ( * (  pane4342 ) ) .f_buf ) ,  (  line4354 ) ) ) .f_contents ) ,  ( (  query4346 ) .f_contents ) ) );
                if ( dref4355.tag == Maybe_1091_Just_t ) {
                    struct Pos_29  sel_dash_pos4357 = ( (struct Pos_29) { .f_line = (  line4354 ) , .f_bi = ( (  size_dash_i32294 ) ( ( dref4355 .stuff .Maybe_1091_Just_s .field0 ) ) ) } );
                    struct Pos_29  cur_dash_pos4358 = ( (struct Pos_29) { .f_line = (  line4354 ) , .f_bi = (  op_dash_sub149 ( ( (  size_dash_i32294 ) ( (  op_dash_add325 ( ( dref4355 .stuff .Maybe_1091_Just_s .field0 ) , ( (  num_dash_bytes1069 ) ( (  query4346 ) ) ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
                    return ( ( Maybe_1447_Just ) ( ( ( Tuple2_216_Tuple2 ) ( (  sel_dash_pos4357 ) ,  (  cur_dash_pos4358 ) ) ) ) );
                }
                else {
                    if ( dref4355.tag == Maybe_1091_None_t ) {
                    }
                }
            }
            return ( (struct Maybe_1447) { .tag = Maybe_1447_None_t } );
        }
    }
}

static  enum Unit_8   prev_dash_match1482 (    struct Editor_228 *  ed4431 ) {
    struct Maybe_229  dref4432 = ( ( * (  ed4431 ) ) .f_search_dash_term );
    if ( dref4432.tag == Maybe_229_None_t ) {
        return ( Unit_8_Unit );
    }
    else {
        if ( dref4432.tag == Maybe_229_Just_t ) {
            struct Maybe_1447  dref4434 = ( (  search_dash_back1483 ) ( ( (  pane1073 ) ( (  ed4431 ) ) ) ,  ( (  min_dash_pos1431 ) ( ( (  pane1073 ) ( (  ed4431 ) ) ) ) ) ,  ( dref4432 .stuff .Maybe_229_Just_s .field0 ) ) );
            if ( dref4434.tag == Maybe_1447_None_t ) {
            }
            else {
                if ( dref4434.tag == Maybe_1447_Just_t ) {
                    ( (  set_dash_cursors1030 ) ( ( (  pane1073 ) ( (  ed4431 ) ) ) ,  ( dref4434 .stuff .Maybe_1447_Just_s .field0 .field1 ) ,  ( ( Maybe_32_Just ) ( ( dref4434 .stuff .Maybe_1447_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1031_UpdateVI ) ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   begin_dash_changeset1494 (   struct env117* env ,    struct TextBuf_97 *  self3874 ,    struct Cursors_31  before_dash_cursors3876 ) {
    struct Actions_98 *  actions3877 = ( & ( ( * (  self3874 ) ) .f_actions ) );
    ( (  trim_dash_actions1109 ) ( (  actions3877 ) ) );
    ( (  flush_dash_insert_dash_action1083 ) ( (  self3874 ) ) );
    ( (  assert577 ) ( (  eq1179 ( ( ( ( * (  self3874 ) ) .f_actions ) .f_input_dash_changeset ) , ( ChangesetInputType_99_NoChangeset ) ) ) ,  ( (  from_dash_string183 ) ( ( "expect no changeset bruh" ) ,  ( 24 ) ) ) ) );
    enum CAllocator_10  al3878 = ( ( * (  self3874 ) ) .f_al );
    struct Changeset_25  temp1495 = ( (struct Changeset_25) { .f_parts = ( (  mk1208 ) ( (  al3878 ) ) ) , .f_before_dash_cursors = (  before_dash_cursors3876 ) } );
    struct Changeset_25 *  changeset3879 = ( &temp1495 );
    struct envunion118  temp1496 = ( (struct envunion118){ .fun = (  enum Unit_8  (*) (  struct env21*  ,    struct List_23 *  ,    struct Changeset_25  ) )add1219 , .env =  env->envinst21 } );
    ( temp1496.fun ( &temp1496.env ,  ( & ( ( * (  actions3877 ) ) .f_list ) ) ,  ( * (  changeset3879 ) ) ) );
    (*  actions3877 ) .f_input_dash_changeset = ( ChangesetInputType_99_CustomChangeset );
    (*  actions3877 ) .f_cur = (  op_dash_add325 ( ( ( * (  actions3877 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_1135   head1502 (    struct List_26  it1142 ) {
    struct SliceIter_1128  temp1503 = ( (  into_dash_iter1130 ) ( (  it1142 ) ) );
    return ( (  next1136 ) ( ( &temp1503 ) ) );
}

static  bool   null1501 (    struct List_26  it1151 ) {
    struct Maybe_1135  dref1152 = ( (  head1502 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_1135_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   end_dash_changeset1500 (    struct TextBuf_97 *  self3882 ) {
    ( (  flush_dash_insert_dash_action1083 ) ( (  self3882 ) ) );
    struct Actions_98 *  actions3883 = ( & ( ( * (  self3882 ) ) .f_actions ) );
    if ( ( (  null1501 ) ( ( ( * ( (  last_dash_ptr1181 ) ( ( (  to_dash_slice1183 ) ( ( ( * (  actions3883 ) ) .f_list ) ) ) ) ) ) .f_parts ) ) ) ) {
        (*  actions3883 ) .f_cur = (  op_dash_sub403 ( ( ( * (  actions3883 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
        (*  actions3883 ) .f_input_dash_changeset = ( ChangesetInputType_99_NoChangeset );
        ( (  trim_dash_actions1109 ) ( (  actions3883 ) ) );
    }
    return ( Unit_8_Unit );
}

static  struct Maybe_32   fmap_dash_maybe1505 (    struct Maybe_32  x1275 ,    struct Pos_29 (*  fun1277 )(    struct Pos_29  ) ) {
    struct Maybe_32  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_32_None_t ) {
        return ( (struct Maybe_32) { .tag = Maybe_32_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_32_Just_t ) {
            return ( ( Maybe_32_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_32_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_29   lam1506 (    struct Pos_29  sel4287 ) {
    struct Pos_29  temp1507 = (  sel4287 );
    temp1507 .  f_bi = (  op_dash_add144 ( ( (  sel4287 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    return ( temp1507 );
}

static  enum Unit_8   indent_dash_selection1492 (   struct env201* env ,    struct Pane_204 *  self4283 ) {
    struct envunion202  temp1493 = ( (struct envunion202){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_97 *  ,    struct Cursors_31  ) )begin_dash_changeset1494 , .env =  env->envinst117 } );
    ( temp1493.fun ( &temp1493.env ,  ( ( * (  self4283 ) ) .f_buf ) ,  ( (struct Cursors_31) { .f_cur = ( ( * (  self4283 ) ) .f_cursor ) , .f_sel = ( ( * (  self4283 ) ) .f_sel ) } ) ) );
    struct RangeIter_138  temp1497 =  into_dash_iter139 ( ( (  to148 ) ( ( ( (  min_dash_pos1431 ) ( (  self4283 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1420 ) ( (  self4283 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_140  __cond1498 =  next141 (&temp1497);
        if (  __cond1498 .tag == 0 ) {
            break;
        }
        int32_t  line4285 =  __cond1498 .stuff .Maybe_140_Just_s .field0;
        struct envunion203  temp1499 = ( (struct envunion203){ .fun = (  enum Unit_8  (*) (  struct env199*  ,    struct Pane_204 *  ,    int32_t  ) )indent_dash_at1250 , .env =  env->envinst199 } );
        ( temp1499.fun ( &temp1499.env ,  (  self4283 ) ,  (  line4285 ) ) );
    }
    ( (  end_dash_changeset1500 ) ( ( ( * (  self4283 ) ) .f_buf ) ) );
    struct Pos_29  temp1504 = ( ( * (  self4283 ) ) .f_cursor );
    temp1504 .  f_bi = (  op_dash_add144 ( ( ( ( * (  self4283 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) );
    ( (  set_dash_cursors1030 ) ( (  self4283 ) ,  ( temp1504 ) ,  ( (  fmap_dash_maybe1505 ) ( ( ( * (  self4283 ) ) .f_sel ) ,  (  lam1506 ) ) ) ,  ( CursorMovement_1031_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

struct env1518 {
    bool  last_dash_char_dash_was_dash_tab4292;
    ;
    ;
};

struct envunion1519 {
    struct Pos_29  (*fun) (  struct env1518*  ,    struct Pos_29  );
    struct env1518 env;
};

static  struct Maybe_32   fmap_dash_maybe1517 (    struct Maybe_32  x1275 ,   struct envunion1519  fun1277 ) {
    struct Maybe_32  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_32_None_t ) {
        return ( (struct Maybe_32) { .tag = Maybe_32_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_32_Just_t ) {
            struct envunion1519  temp1520 = (  fun1277 );
            return ( ( Maybe_32_Just ) ( ( temp1520.fun ( &temp1520.env ,  ( dref1278 .stuff .Maybe_32_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Pos_29   lam1521 (   struct env1518* env ,    struct Pos_29  sel4296 ) {
    struct Pos_29  temp1522 = (  sel4296 );
    temp1522 .  f_bi = ( ( env->last_dash_char_dash_was_dash_tab4292 ) ? (  op_dash_sub149 ( ( (  sel4296 ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( (  sel4296 ) .f_bi ) );
    return ( temp1522 );
}

static  enum Unit_8   dedent_dash_selection1509 (   struct env207* env ,    struct Pane_204 *  self4290 ) {
    struct envunion208  temp1510 = ( (struct envunion208){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_97 *  ,    struct Cursors_31  ) )begin_dash_changeset1494 , .env =  env->envinst117 } );
    ( temp1510.fun ( &temp1510.env ,  ( ( * (  self4290 ) ) .f_buf ) ,  ( (struct Cursors_31) { .f_cur = ( ( * (  self4290 ) ) .f_cursor ) , .f_sel = ( ( * (  self4290 ) ) .f_sel ) } ) ) );
    struct Pos_29  temp1511 = ( (  min_dash_pos1431 ) ( (  self4290 ) ) );
    temp1511 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  first_dash_char_dash_was_dash_tab4291 = (  eq502 ( ( (  char_dash_at1282 ) ( (  self4290 ) ,  ( temp1511 ) ) ) , ( (  from_dash_charlike314 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct Pos_29  temp1512 = ( (  max_dash_pos1420 ) ( (  self4290 ) ) );
    temp1512 .  f_bi = (  from_dash_integral56 ( 0 ) );
    bool  last_dash_char_dash_was_dash_tab4292 = (  eq502 ( ( (  char_dash_at1282 ) ( (  self4290 ) ,  ( temp1512 ) ) ) , ( (  from_dash_charlike314 ) ( ( "\t" ) ,  ( 1 ) ) ) ) );
    struct RangeIter_138  temp1513 =  into_dash_iter139 ( ( (  to148 ) ( ( ( (  min_dash_pos1431 ) ( (  self4290 ) ) ) .f_line ) ,  ( ( (  max_dash_pos1420 ) ( (  self4290 ) ) ) .f_line ) ) ) );
    while (true) {
        struct Maybe_140  __cond1514 =  next141 (&temp1513);
        if (  __cond1514 .tag == 0 ) {
            break;
        }
        int32_t  line4294 =  __cond1514 .stuff .Maybe_140_Just_s .field0;
        if ( (  eq502 ( ( (  char_dash_at1282 ) ( (  self4290 ) ,  ( (struct Pos_29) { .f_line = (  line4294 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ) ) , ( (  from_dash_charlike314 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
            struct envunion209  temp1515 = ( (struct envunion209){ .fun = (  struct Maybe_190  (*) (  struct env112*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_190  ) )change1108 , .env =  env->envinst112 } );
            ( temp1515.fun ( &temp1515.env ,  ( ( * (  self4290 ) ) .f_buf ) ,  ( (struct Pos_29) { .f_line = (  line4294 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Pos_29) { .f_line = (  line4294 ) , .f_bi = (  from_dash_integral56 ( 1 ) ) } ) ,  ( (  from_dash_string183 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_190) { .tag = Maybe_190_None_t } ) ) );
        }
    }
    ( (  end_dash_changeset1500 ) ( ( ( * (  self4290 ) ) .f_buf ) ) );
    struct Pos_29  temp1516 = ( ( * (  self4290 ) ) .f_cursor );
    temp1516 .  f_bi = ( (  first_dash_char_dash_was_dash_tab4291 ) ? (  op_dash_sub149 ( ( ( ( * (  self4290 ) ) .f_cursor ) .f_bi ) , (  from_dash_integral56 ( 1 ) ) ) ) : ( ( ( * (  self4290 ) ) .f_cursor ) .f_bi ) );
    struct env1518 envinst1518 = {
        .last_dash_char_dash_was_dash_tab4292 =  last_dash_char_dash_was_dash_tab4292 ,
    };
    ( (  set_dash_cursors1030 ) ( (  self4290 ) ,  ( temp1516 ) ,  ( (  fmap_dash_maybe1517 ) ( ( ( * (  self4290 ) ) .f_sel ) ,  ( (struct envunion1519){ .fun = (  struct Pos_29  (*) (  struct env1518*  ,    struct Pos_29  ) )lam1521 , .env =  envinst1518 } ) ) ) ,  ( CursorMovement_1031_UpdateVI ) ) );
    return ( Unit_8_Unit );
}

static  int32_t   undefined1526 (  ) {
    int32_t  temp1527;
    return (  temp1527 );
}

static  int32_t   or_dash_fail1525 (    struct Maybe_140  x1726 ,    struct StrView_30  errmsg1728 ) {
    struct Maybe_140  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_140_None_t ) {
        ( (  panic1153 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1526 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_140_Just_t ) {
            return ( dref1729 .stuff .Maybe_140_Just_s .field0 );
        }
    }
}

struct env1530 {
    struct Pane_204 *  self4305;
    ;
};

struct envunion1531 {
    int32_t  (*fun) (  struct env1530*  ,    int32_t  );
    struct env1530 env;
};

struct Map_1529 {
    struct RangeIter_138  field0;
    struct envunion1531  field1;
};

static struct Map_1529 Map_1529_Map (  struct RangeIter_138  field0 , struct envunion1531  field1 ) {
    return ( struct Map_1529 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1529   into_dash_iter1533 (    struct Map_1529  self796 ) {
    return (  self796 );
}

static  struct Maybe_140   next1534 (    struct Map_1529 *  dref798 ) {
    struct Maybe_140  dref801 = ( (  next141 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_140_None_t ) {
        return ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_140_Just_t ) {
            struct envunion1531  temp1535 = ( (* dref798 ) .field1 );
            return ( ( Maybe_140_Just ) ( ( temp1535.fun ( &temp1535.env ,  ( dref801 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_140   reduce1532 (    struct Map_1529  iterable1093 ,    struct Maybe_140  base1095 ,    struct Maybe_140 (*  fun1097 )(    int32_t  ,    struct Maybe_140  ) ) {
    struct Maybe_140  x1098 = (  base1095 );
    struct Map_1529  it1099 = ( (  into_dash_iter1533 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_140  dref1100 = ( (  next1534 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_140_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_140_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_140_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1536 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1536);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_140  temp1537;
    return (  temp1537 );
}

struct env1540 {
    int32_t  x1243;
    ;
};

struct envunion1541 {
    struct Maybe_140  (*fun) (  struct env1540*  ,    int32_t  );
    struct env1540 env;
};

static  struct Maybe_140   maybe1539 (    struct Maybe_140  x1282 ,   struct envunion1541  fun1284 ,    struct Maybe_140  default1286 ) {
    struct envunion1541  temp1542 = (  fun1284 );
    return ( {  struct Maybe_140  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_140_Just_t ? ( temp1542.fun ( &temp1542.env ,  ( dref1287 .stuff .Maybe_140_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_140   lam1543 (   struct env1540* env ,    int32_t  lm1312 ) {
    return ( ( Maybe_140_Just ) ( ( (  min569 ) ( (  lm1312 ) ,  ( env->x1243 ) ) ) ) );
}

static  struct Maybe_140   lam1538 (    int32_t  x1243 ,    struct Maybe_140  last_dash_min1245 ) {
    struct env1540 envinst1540 = {
        .x1243 =  x1243 ,
    };
    return ( (  maybe1539 ) ( (  last_dash_min1245 ) ,  ( (struct envunion1541){ .fun = (  struct Maybe_140  (*) (  struct env1540*  ,    int32_t  ) )lam1543 , .env =  envinst1540 } ) ,  ( ( Maybe_140_Just ) ( (  x1243 ) ) ) ) );
}

static  struct Maybe_140   minimum1528 (    struct Map_1529  it1241 ) {
    return ( (  reduce1532 ) ( (  it1241 ) ,  ( (struct Maybe_140) { .tag = Maybe_140_None_t } ) ,  (  lam1538 ) ) );
}

static  struct Map_1529   map1544 (    struct Range_135  iterable805 ,   struct envunion1531  fun807 ) {
    struct RangeIter_138  it808 = ( (  into_dash_iter139 ) ( (  iterable805 ) ) );
    return ( ( Map_1529_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  int32_t   lam1545 (   struct env1530* env ,    int32_t  ln4309 ) {
    return ( (  indent_dash_at_dash_line1085 ) ( ( env->self4305 ) ,  (  ln4309 ) ) );
}

struct env1547 {
    struct Pane_204 *  self4305;
    ;
    ;
};

struct envunion1548 {
    bool  (*fun) (  struct env1547*  ,    int32_t  );
    struct env1547 env;
};

struct env1550 {
    struct envunion1548  fun1126;
};

struct envunion1551 {
    bool  (*fun) (  struct env1550*  ,    int32_t  ,    bool  );
    struct env1550 env;
};

static  bool   reduce1549 (    struct Range_135  iterable1093 ,    bool  base1095 ,   struct envunion1551  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct RangeIter_138  it1099 = ( (  into_dash_iter139 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_140  dref1100 = ( (  next141 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_140_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_140_Just_t ) {
                struct envunion1551  temp1552 = (  fun1097 );
                x1098 = ( temp1552.fun ( &temp1552.env ,  ( dref1100 .stuff .Maybe_140_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1553 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1553);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1554;
    return (  temp1554 );
}

static  bool   lam1555 (   struct env1550* env ,    int32_t  e1128 ,    bool  x1130 ) {
    struct envunion1548  temp1556 = ( env->fun1126 );
    return ( ( temp1556.fun ( &temp1556.env ,  (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1546 (    struct Range_135  it1124 ,   struct envunion1548  fun1126 ) {
    struct env1550 envinst1550 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1549 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1551){ .fun = (  bool  (*) (  struct env1550*  ,    int32_t  ,    bool  ) )lam1555 , .env =  envinst1550 } ) ) );
}

static  bool   is_dash_just1558 (    struct Maybe_1447  m1260 ) {
    struct Maybe_1447  dref1261 = (  m1260 );
    if ( dref1261.tag == Maybe_1447_None_t ) {
        return ( false );
    }
    else {
        if ( dref1261.tag == Maybe_1447_Just_t ) {
            return ( true );
        }
    }
}

static  bool   lam1560 (    struct Char_65  c4237 ) {
    return ( ( !  eq502 ( (  c4237 ) , ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) && ( (  is_dash_whitespace1281 ) ( (  c4237 ) ) ) );
}

static  struct Maybe_1447   line_dash_begins_dash_with_dash_comment1559 (    struct Pane_204 *  self4231 ,    int32_t  line4233 ) {
    int32_t  indent4234 = ( (  indent_dash_at_dash_line1085 ) ( (  self4231 ) ,  (  line4233 ) ) );
    if ( (  eq502 ( ( (  char_dash_at1282 ) ( (  self4231 ) ,  ( (  mk397 ) ( (  line4233 ) ,  (  indent4234 ) ) ) ) ) , ( (  from_dash_charlike314 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
        int32_t  i4235 = (  op_dash_add144 ( (  indent4234 ) , (  from_dash_integral56 ( 1 ) ) ) );
        while ( ( (  lam1560 ) ( ( (  char_dash_at1282 ) ( (  self4231 ) ,  ( (  mk397 ) ( (  line4233 ) ,  (  i4235 ) ) ) ) ) ) ) ) {
            i4235 = (  op_dash_add144 ( (  i4235 ) , (  from_dash_integral56 ( 1 ) ) ) );
        }
        return ( ( Maybe_1447_Just ) ( ( ( Tuple2_216_Tuple2 ) ( ( (  mk397 ) ( (  line4233 ) ,  (  indent4234 ) ) ) ,  ( (  mk397 ) ( (  line4233 ) ,  (  i4235 ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_1447) { .tag = Maybe_1447_None_t } );
    }
}

static  bool   lam1557 (   struct env1547* env ,    int32_t  ln4312 ) {
    return ( (  is_dash_just1558 ) ( ( (  line_dash_begins_dash_with_dash_comment1559 ) ( ( env->self4305 ) ,  (  ln4312 ) ) ) ) );
}

static  struct Tuple2_216   undefined1566 (  ) {
    struct Tuple2_216  temp1567;
    return (  temp1567 );
}

static  struct Tuple2_216   or_dash_fail1565 (    struct Maybe_1447  x1726 ,    struct StrView_30  errmsg1728 ) {
    struct Maybe_1447  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_1447_None_t ) {
        ( (  panic1153 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1566 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_1447_Just_t ) {
            return ( dref1729 .stuff .Maybe_1447_Just_s .field0 );
        }
    }
}

static  enum Unit_8   toggle_dash_comment1524 (   struct env212* env ,    struct Pane_204 *  self4305 ) {
    int32_t  from_dash_line4306 = ( ( (  min_dash_pos1431 ) ( (  self4305 ) ) ) .f_line );
    int32_t  to_dash_line4307 = ( ( (  max_dash_pos1420 ) ( (  self4305 ) ) ) .f_line );
    struct env1530 envinst1530 = {
        .self4305 =  self4305 ,
    };
    int32_t  min_dash_indent4310 = ( (  or_dash_fail1525 ) ( ( (  minimum1528 ) ( ( (  map1544 ) ( ( (  to148 ) ( (  from_dash_line4306 ) ,  (  to_dash_line4307 ) ) ) ,  ( (struct envunion1531){ .fun = (  int32_t  (*) (  struct env1530*  ,    int32_t  ) )lam1545 , .env =  envinst1530 } ) ) ) ) ) ,  ( (  from_dash_string183 ) ( ( "no lines what??" ) ,  ( 15 ) ) ) ) );
    struct env1547 envinst1547 = {
        .self4305 =  self4305 ,
    };
    bool  all_dash_have_dash_comment4313 = ( (  all1546 ) ( ( (  to148 ) ( (  from_dash_line4306 ) ,  (  to_dash_line4307 ) ) ) ,  ( (struct envunion1548){ .fun = (  bool  (*) (  struct env1547*  ,    int32_t  ) )lam1557 , .env =  envinst1547 } ) ) );
    struct envunion213  temp1561 = ( (struct envunion213){ .fun = (  enum Unit_8  (*) (  struct env117*  ,    struct TextBuf_97 *  ,    struct Cursors_31  ) )begin_dash_changeset1494 , .env =  env->envinst117 } );
    ( temp1561.fun ( &temp1561.env ,  ( ( * (  self4305 ) ) .f_buf ) ,  ( (struct Cursors_31) { .f_cur = ( ( * (  self4305 ) ) .f_cursor ) , .f_sel = ( ( * (  self4305 ) ) .f_sel ) } ) ) );
    struct RangeIter_138  temp1562 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_line4306 ) ,  (  to_dash_line4307 ) ) ) );
    while (true) {
        struct Maybe_140  __cond1563 =  next141 (&temp1562);
        if (  __cond1563 .tag == 0 ) {
            break;
        }
        int32_t  line4315 =  __cond1563 .stuff .Maybe_140_Just_s .field0;
        struct Char_65  comment_dash_str4316 = ( (  from_dash_charlike314 ) ( ( "#" ) ,  ( 1 ) ) );
        if ( ( ! (  all_dash_have_dash_comment4313 ) ) ) {
            ( (  set_dash_cursors1030 ) ( (  self4305 ) ,  ( (  mk397 ) ( (  line4315 ) ,  (  min_dash_indent4310 ) ) ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_NoChanges ) ) );
            struct envunion214  temp1564 = ( (struct envunion214){ .fun = (  enum Unit_8  (*) (  struct env188*  ,    struct Pane_204 *  ,    struct StrView_30  ) )add_dash_str_dash_at_dash_char1106 , .env =  env->envinst188 } );
            ( temp1564.fun ( &temp1564.env ,  (  self4305 ) ,  ( (  from_dash_string183 ) ( ( "# " ) ,  ( 2 ) ) ) ) );
        } else {
            struct Tuple2_216  tup4317 = ( (  or_dash_fail1565 ) ( ( (  line_dash_begins_dash_with_dash_comment1559 ) ( (  self4305 ) ,  (  line4315 ) ) ) ,  ( (  from_dash_string183 ) ( ( "(Pane.toggle-comment) impossiburu" ) ,  ( 33 ) ) ) ) );
            struct envunion215  temp1568 = ( (struct envunion215){ .fun = (  enum Unit_8  (*) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  ) )replace_dash_selection1352 , .env =  env->envinst197 } );
            ( temp1568.fun ( &temp1568.env ,  (  self4305 ) ,  ( ( Tuple2_216_Tuple2 ) ( ( (  fst1342 ) ( (  tup4317 ) ) ) ,  ( (  snd1343 ) ( (  tup4317 ) ) ) ) ) ,  ( (  from_dash_string183 ) ( ( "" ) ,  ( 0 ) ) ) ) );
        }
    }
    ( (  end_dash_changeset1500 ) ( ( ( * (  self4305 ) ) .f_buf ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   handle_dash_normal_dash_key1028 (   struct env231* env ,    struct Editor_228 *  ed4439 ,    struct Key_251  key4441 ) {
    struct Key_251  dref4442 = (  key4441 );
    if ( dref4442.tag == Key_251_Char_t ) {
        if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed4439 ) .f_running = ( false );
        } else {
            if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left1029 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ) );
            } else {
                if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right1074 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ) );
                } else {
                    if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down1077 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                    } else {
                        if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up1081 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
                        } else {
                            if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  set_dash_mode1082 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( Mode_205_Insert ) ) );
                            } else {
                                if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "I" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  move_dash_to_dash_beginning_dash_indented1084 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ) );
                                    ( (  set_dash_mode1082 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( Mode_205_Insert ) ) );
                                } else {
                                    if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  move_dash_to_dash_end1103 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ) );
                                        ( (  set_dash_mode1082 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( Mode_205_Insert ) ) );
                                    } else {
                                        if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                            struct Pane_204 *  pane4444 = ( (  pane1073 ) ( (  ed4439 ) ) );
                                            int32_t  indent4445 = ( (  indent_dash_at_dash_line1085 ) ( (  pane4444 ) ,  ( ( ( * (  pane4444 ) ) .f_cursor ) .f_line ) ) );
                                            ( (  move_dash_to_dash_end1103 ) ( (  pane4444 ) ) );
                                            struct envunion235  temp1105 = ( (struct envunion235){ .fun = (  enum Unit_8  (*) (  struct env188*  ,    struct Pane_204 *  ,    struct StrView_30  ) )add_dash_str_dash_at_dash_char1106 , .env =  env->envinst188 } );
                                            ( temp1105.fun ( &temp1105.env ,  (  pane4444 ) ,  ( (  from_dash_charlike1169 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                            ( (  move_dash_right1074 ) ( (  pane4444 ) ) );
                                            struct envunion232  temp1245 = ( (struct envunion232){ .fun = (  enum Unit_8  (*) (  struct env210*  ,    struct Pane_204 *  ,    int32_t  ) )indent_dash_at_dash_current1246 , .env =  env->envinst210 } );
                                            ( temp1245.fun ( &temp1245.env ,  (  pane4444 ) ,  (  indent4445 ) ) );
                                            ( (  set_dash_mode1082 ) ( (  pane4444 ) ,  ( Mode_205_Insert ) ) );
                                        } else {
                                            if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct Pane_204 *  pane4446 = ( (  pane1073 ) ( (  ed4439 ) ) );
                                                int32_t  indent4447 = ( (  indent_dash_at_dash_line1085 ) ( (  pane4446 ) ,  ( ( ( * (  pane4446 ) ) .f_cursor ) .f_line ) ) );
                                                ( (  move_dash_to_dash_beginning1252 ) ( (  pane4446 ) ) );
                                                struct envunion1255  temp1254 = ( (struct envunion1255){ .fun = (  enum Unit_8  (*) (  struct env188*  ,    struct Pane_204 *  ,    struct StrView_30  ) )add_dash_str_dash_at_dash_char1106 , .env =  env->envinst188 } );
                                                ( temp1254.fun ( &temp1254.env ,  (  pane4446 ) ,  ( (  from_dash_charlike1169 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                                                struct envunion1257  temp1256 = ( (struct envunion1257){ .fun = (  enum Unit_8  (*) (  struct env210*  ,    struct Pane_204 *  ,    int32_t  ) )indent_dash_at_dash_current1246 , .env =  env->envinst210 } );
                                                ( temp1256.fun ( &temp1256.env ,  (  pane4446 ) ,  (  indent4447 ) ) );
                                                ( (  set_dash_mode1082 ) ( (  pane4446 ) ,  ( Mode_205_Insert ) ) );
                                            } else {
                                                if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  advance_dash_word1258 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( MoveDirection_1259_MoveFwd ) ,  ( MoveTarget_1260_NextWordStart ) ) );
                                                } else {
                                                    if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                                        ( (  advance_dash_word1258 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( MoveDirection_1259_MoveFwd ) ,  ( MoveTarget_1260_NextWordEnd ) ) );
                                                    } else {
                                                        if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                            ( (  advance_dash_word1258 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( MoveDirection_1259_MoveBwd ) ,  ( MoveTarget_1260_NextWordEnd ) ) );
                                                        } else {
                                                            if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion238  temp1294 = ( (struct envunion238){ .fun = (  enum Unit_8  (*) (  struct env195*  ,    struct Pane_204 *  ) )redo1295 , .env =  env->envinst195 } );
                                                                ( temp1294.fun ( &temp1294.env ,  ( (  pane1073 ) ( (  ed4439 ) ) ) ) );
                                                            } else {
                                                                if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct envunion237  temp1319 = ( (struct envunion237){ .fun = (  enum Unit_8  (*) (  struct env193*  ,    struct Pane_204 *  ) )undo1320 , .env =  env->envinst193 } );
                                                                    ( temp1319.fun ( &temp1319.env ,  ( (  pane1073 ) ( (  ed4439 ) ) ) ) );
                                                                } else {
                                                                    if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct envunion241  temp1337 = ( (struct envunion241){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Editor_228 *  ) )copy_dash_selection_dash_to_dash_clipboard1338 , .env =  env->envinst217 } );
                                                                        ( temp1337.fun ( &temp1337.env ,  (  ed4439 ) ) );
                                                                        struct envunion1351  temp1350 = ( (struct envunion1351){ .fun = (  enum Unit_8  (*) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  ) )replace_dash_selection1352 , .env =  env->envinst197 } );
                                                                        ( temp1350.fun ( &temp1350.env ,  ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( (  selection1339 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ) ) ,  ( (  from_dash_string183 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                        ( (  set_dash_mode1082 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( Mode_205_Normal ) ) );
                                                                    } else {
                                                                        if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct envunion1360  temp1359 = ( (struct envunion1360){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Editor_228 *  ) )copy_dash_selection_dash_to_dash_clipboard1338 , .env =  env->envinst217 } );
                                                                            ( temp1359.fun ( &temp1359.env ,  (  ed4439 ) ) );
                                                                            struct envunion1362  temp1361 = ( (struct envunion1362){ .fun = (  enum Unit_8  (*) (  struct env197*  ,    struct Pane_204 *  ,    struct Tuple2_216  ,    struct StrView_30  ) )replace_dash_selection1352 , .env =  env->envinst197 } );
                                                                            ( temp1361.fun ( &temp1361.env ,  ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( (  selection1339 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ) ) ,  ( (  from_dash_string183 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                                            ( (  set_dash_mode1082 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( Mode_205_Insert ) ) );
                                                                        } else {
                                                                            if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                struct envunion1364  temp1363 = ( (struct envunion1364){ .fun = (  enum Unit_8  (*) (  struct env217*  ,    struct Editor_228 *  ) )copy_dash_selection_dash_to_dash_clipboard1338 , .env =  env->envinst217 } );
                                                                                ( temp1363.fun ( &temp1363.env ,  (  ed4439 ) ) );
                                                                                size_t  bytes_dash_yanked4448 = ( (  num_dash_bytes1069 ) ( ( (  or_dash_else474 ) ( ( ( * (  ed4439 ) ) .f_clipboard ) ,  ( (  from_dash_string183 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                                struct envunion233  temp1365 = ( (struct envunion233){ .fun = (  enum Unit_8  (*) (  struct env219*  ,    struct Editor_228 *  ,    struct StrConcat_71  ) )set_dash_msg1366 , .env =  env->envinst219 } );
                                                                                ( temp1365.fun ( &temp1365.env ,  (  ed4439 ) ,  ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked4448 ) ) ) ,  ( (  from_dash_string183 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                                            } else {
                                                                                if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    struct env1416 envinst1416 = {
                                                                                        .envinst197 = env->envinst197 ,
                                                                                        .ed4439 =  ed4439 ,
                                                                                    };
                                                                                    ( (  if_dash_just1415 ) ( ( ( * (  ed4439 ) ) .f_clipboard ) ,  ( (struct envunion1417){ .fun = (  enum Unit_8  (*) (  struct env1416*  ,    struct StrView_30  ) )lam1419 , .env =  envinst1416 } ) ) );
                                                                                } else {
                                                                                    if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                        struct env1426 envinst1426 = {
                                                                                            .envinst197 = env->envinst197 ,
                                                                                            .ed4439 =  ed4439 ,
                                                                                        };
                                                                                        ( (  if_dash_just1425 ) ( ( ( * (  ed4439 ) ) .f_clipboard ) ,  ( (struct envunion1428){ .fun = (  enum Unit_8  (*) (  struct env1426*  ,    struct StrView_30  ) )lam1430 , .env =  envinst1426 } ) ) );
                                                                                    } else {
                                                                                        if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                            struct env1435 envinst1435 = {
                                                                                                .ed4439 =  ed4439 ,
                                                                                                .envinst197 = env->envinst197 ,
                                                                                            };
                                                                                            ( (  if_dash_just1434 ) ( ( ( * (  ed4439 ) ) .f_clipboard ) ,  ( (struct envunion1437){ .fun = (  enum Unit_8  (*) (  struct env1435*  ,    struct StrView_30  ) )lam1439 , .env =  envinst1435 } ) ) );
                                                                                        } else {
                                                                                            if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                ( (  expand1441 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ) );
                                                                                            } else {
                                                                                                if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                    ( (  set_dash_mode1082 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( Mode_205_Select ) ) );
                                                                                                    if ( ( (  is_dash_none1445 ) ( ( ( ( * (  ed4439 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                                        (*  ed4439 ) .f_pane .f_sel = ( ( Maybe_32_Just ) ( ( ( ( * (  ed4439 ) ) .f_pane ) .f_cursor ) ) );
                                                                                                    }
                                                                                                } else {
                                                                                                    if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                        (*  ed4439 ) .f_mode = ( ( EditorMode_230_Cmd ) ( ( ( * ( (  pane1073 ) ( (  ed4439 ) ) ) ) .f_cursor ) ,  ( (  mk1370 ) ( ( ( * (  ed4439 ) ) .f_al ) ) ) ) );
                                                                                                    } else {
                                                                                                        if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "/" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                            (*  ed4439 ) .f_mode = ( ( EditorMode_230_Search ) ( ( ( * ( (  pane1073 ) ( (  ed4439 ) ) ) ) .f_cursor ) ,  ( (  mk1370 ) ( ( ( * (  ed4439 ) ) .f_al ) ) ) ) );
                                                                                                        } else {
                                                                                                            if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "n" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                ( (  next_dash_match1446 ) ( (  ed4439 ) ) );
                                                                                                            } else {
                                                                                                                if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "N" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                    ( (  prev_dash_match1482 ) ( (  ed4439 ) ) );
                                                                                                                } else {
                                                                                                                    if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( ">" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                        struct envunion239  temp1491 = ( (struct envunion239){ .fun = (  enum Unit_8  (*) (  struct env201*  ,    struct Pane_204 *  ) )indent_dash_selection1492 , .env =  env->envinst201 } );
                                                                                                                        ( temp1491.fun ( &temp1491.env ,  ( (  pane1073 ) ( (  ed4439 ) ) ) ) );
                                                                                                                    } else {
                                                                                                                        if ( (  eq872 ( ( dref4442 .stuff .Key_251_Char_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                                                            struct envunion236  temp1508 = ( (struct envunion236){ .fun = (  enum Unit_8  (*) (  struct env207*  ,    struct Pane_204 *  ) )dedent_dash_selection1509 , .env =  env->envinst207 } );
                                                                                                                            ( temp1508.fun ( &temp1508.env ,  ( (  pane1073 ) ( (  ed4439 ) ) ) ) );
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
        if ( dref4442.tag == Key_251_Escape_t ) {
            ( (  set_dash_mode1082 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  ( Mode_205_Normal ) ) );
        }
        else {
            if ( dref4442.tag == Key_251_Ctrl_t ) {
                if ( (  eq872 ( ( dref4442 .stuff .Key_251_Ctrl_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                    struct envunion234  temp1523 = ( (struct envunion234){ .fun = (  enum Unit_8  (*) (  struct env212*  ,    struct Pane_204 *  ) )toggle_dash_comment1524 , .env =  env->envinst212 } );
                    ( temp1523.fun ( &temp1523.env ,  ( (  pane1073 ) ( (  ed4439 ) ) ) ) );
                } else {
                    if ( (  eq872 ( ( dref4442 .stuff .Key_251_Ctrl_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_up1081 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
                    } else {
                        if ( (  eq872 ( ( dref4442 .stuff .Key_251_Ctrl_s .field0 ) , ( (  from_dash_charlike873 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_down1077 ) ( ( (  pane1073 ) ( (  ed4439 ) ) ) ,  (  from_dash_integral56 ( 15 ) ) ) );
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

struct envunion1570 {
    enum Unit_8  (*fun) (  struct env231*  ,    struct Editor_228 *  ,    struct Key_251  );
    struct env231 env;
};

struct envunion1572 {
    enum Unit_8  (*fun) (  struct env188*  ,    struct Pane_204 *  ,    struct StrView_30  );
    struct env188 env;
};

static  enum Unit_8   backspace1575 (   struct env191* env ,    struct Pane_204 *  self4246 ) {
    struct Pos_29  prev_dash_cur4247 = ( ( * (  self4246 ) ) .f_cursor );
    ( (  move_dash_left1029 ) ( (  self4246 ) ) );
    struct envunion192  temp1576 = ( (struct envunion192){ .fun = (  struct Maybe_190  (*) (  struct env112*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ,    struct Maybe_190  ) )change1108 , .env =  env->envinst112 } );
    ( temp1576.fun ( &temp1576.env ,  ( ( * (  self4246 ) ) .f_buf ) ,  ( ( * (  self4246 ) ) .f_cursor ) ,  (  prev_dash_cur4247 ) ,  ( (  from_dash_string183 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_190) { .tag = Maybe_190_None_t } ) ) );
    return ( Unit_8_Unit );
}

struct Array_1578 {
    char _arr [1];
};

static  char *   cast1579 (    struct Array_1578 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_888   as_dash_slice1577 (    struct Array_1578 *  arr2273 ) {
    return ( (struct Slice_888) { .f_ptr = ( (  cast1579 ) ( (  arr2273 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1578   from_dash_listlike1581 (    struct Array_1578  self330 ) {
    return (  self330 );
}

struct Scanner_1585 {
    struct StrView_30  f_s;
    size_t  f_byte_dash_offset;
};

static  struct Scanner_1585   mk_dash_from_dash_strview1587 (    struct StrView_30  s3196 ) {
    return ( (struct Scanner_1585) { .f_s = (  s3196 ) , .f_byte_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct TakeWhile_1592 {
    struct StrViewIter_703  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1591 {
    struct TakeWhile_1592  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1591 Map_1591_Map (  struct TakeWhile_1592  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1591 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1591   into_dash_iter1594 (    struct Map_1591  self796 ) {
    return (  self796 );
}

static  struct Maybe_706   next1596 (    struct TakeWhile_1592 *  self964 ) {
    struct Maybe_706  mx965 = ( (  next707 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_706  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_706_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_706_Just ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
            }
        }
    }
}

static  struct Maybe_1091   next1595 (    struct Map_1591 *  dref798 ) {
    struct Maybe_706  dref801 = ( (  next1596 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_1091) { .tag = Maybe_1091_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_706_Just_t ) {
            return ( ( Maybe_1091_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_706_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1593 (    struct Map_1591  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1591  it1099 = ( (  into_dash_iter1594 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1091  dref1100 = ( (  next1595 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1091_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1091_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1091_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1597 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1597);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1598;
    return (  temp1598 );
}

static  size_t   lam1599 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add325 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1590 (    struct Map_1591  it1110 ) {
    return ( (  reduce1593 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1599 ) ) );
}

static  struct TakeWhile_1592   into_dash_iter1601 (    struct TakeWhile_1592  self961 ) {
    return (  self961 );
}

static  struct Map_1591   map1600 (    struct TakeWhile_1592  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1592  it808 = ( (  into_dash_iter1601 ) ( (  iterable805 ) ) );
    return ( ( Map_1591_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1592   take_dash_while1602 (    struct StrViewIter_703  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1592) { .f_it = ( (  into_dash_iter705 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1603 (    struct Char_65  c2203 ) {
    return ( (  c2203 ) .f_num_dash_bytes );
}

static  struct StrView_30   take_dash_while1589 (    struct StrView_30  self2199 ,    bool (*  fun2201 )(    struct Char_65  ) ) {
    size_t  bi2204 = ( (  sum1590 ) ( ( (  map1600 ) ( ( (  take_dash_while1602 ) ( ( (  chars708 ) ( (  self2199 ) ) ) ,  (  fun2201 ) ) ) ,  (  lam1603 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2199 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2204 ) ) );
}

static  struct StrView_30   take_dash_str_dash_while1588 (    struct Scanner_1585 *  sc3268 ,    bool (*  fun3270 )(    struct Char_65  ) ) {
    struct StrView_30  s3271 = ( (  take_dash_while1589 ) ( ( ( * (  sc3268 ) ) .f_s ) ,  (  fun3270 ) ) );
    (*  sc3268 ) .f_s = ( (  byte_dash_substr_dash_from1472 ) ( ( ( * (  sc3268 ) ) .f_s ) ,  ( (  num_dash_bytes1069 ) ( (  s3271 ) ) ) ) );
    return (  s3271 );
}

static  bool   is_dash_not_dash_whitespace1604 (    struct Char_65  c2383 ) {
    return ( ! ( (  is_dash_whitespace1281 ) ( (  c2383 ) ) ) );
}

struct TakeWhile_1610 {
    struct StrViewIter_703  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1609 {
    struct TakeWhile_1610  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1609 Map_1609_Map (  struct TakeWhile_1610  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1609 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1609   into_dash_iter1612 (    struct Map_1609  self796 ) {
    return (  self796 );
}

static  struct Maybe_706   next1614 (    struct TakeWhile_1610 *  self964 ) {
    struct Maybe_706  mx965 = ( (  next707 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_706  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_706_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_706_Just ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
            }
        }
    }
}

static  struct Maybe_1091   next1613 (    struct Map_1609 *  dref798 ) {
    struct Maybe_706  dref801 = ( (  next1614 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_1091) { .tag = Maybe_1091_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_706_Just_t ) {
            return ( ( Maybe_1091_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_706_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1611 (    struct Map_1609  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1609  it1099 = ( (  into_dash_iter1612 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1091  dref1100 = ( (  next1613 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1091_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1091_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1091_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1615 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1615);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1616;
    return (  temp1616 );
}

static  size_t   lam1617 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add325 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1608 (    struct Map_1609  it1110 ) {
    return ( (  reduce1611 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1617 ) ) );
}

static  struct TakeWhile_1610   into_dash_iter1619 (    struct TakeWhile_1610  self961 ) {
    return (  self961 );
}

static  struct Map_1609   map1618 (    struct TakeWhile_1610  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1610  it808 = ( (  into_dash_iter1619 ) ( (  iterable805 ) ) );
    return ( ( Map_1609_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1610   take_dash_while1620 (    struct StrViewIter_703  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1610) { .f_it = ( (  into_dash_iter705 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1621 (    struct Char_65  c2203 ) {
    return ( (  c2203 ) .f_num_dash_bytes );
}

static  struct StrView_30   take_dash_while1607 (    struct StrView_30  self2199 ,    bool (*  fun2201 )(    struct Char_65  ) ) {
    size_t  bi2204 = ( (  sum1608 ) ( ( (  map1618 ) ( ( (  take_dash_while1620 ) ( ( (  chars708 ) ( (  self2199 ) ) ) ,  (  fun2201 ) ) ) ,  (  lam1621 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2199 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2204 ) ) );
}

static  struct StrView_30   take_dash_str_dash_while1606 (    struct Scanner_1585 *  sc3268 ,    bool (*  fun3270 )(    struct Char_65  ) ) {
    struct StrView_30  s3271 = ( (  take_dash_while1607 ) ( ( ( * (  sc3268 ) ) .f_s ) ,  (  fun3270 ) ) );
    (*  sc3268 ) .f_s = ( (  byte_dash_substr_dash_from1472 ) ( ( ( * (  sc3268 ) ) .f_s ) ,  ( (  num_dash_bytes1069 ) ( (  s3271 ) ) ) ) );
    return (  s3271 );
}

static  enum Unit_8   drop_dash_str_dash_while1605 (    struct Scanner_1585 *  sc3274 ,    bool (*  fun3276 )(    struct Char_65  ) ) {
    ( (  take_dash_str_dash_while1606 ) ( (  sc3274 ) ,  (  fun3276 ) ) );
    return ( Unit_8_Unit );
}

static  bool   eq1622 (    struct StrView_30  l2210 ,    struct StrView_30  r2212 ) {
    return (  eq1456 ( ( (  l2210 ) .f_contents ) , ( (  r2212 ) .f_contents ) ) );
}

static  enum Unit_8   undefined1624 (  ) {
    enum Unit_8  temp1625;
    return (  temp1625 );
}

static  enum Unit_8   todo1623 (  ) {
    ( (  print1287 ) ( ( (  from_dash_string183 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined1624 ) ( ) );
}

struct env1628 {
    bool (*  fun1126 )(    struct Char_65  );
};

struct envunion1629 {
    bool  (*fun) (  struct env1628*  ,    struct Char_65  ,    bool  );
    struct env1628 env;
};

static  bool   reduce1627 (    struct StrView_30  iterable1093 ,    bool  base1095 ,   struct envunion1629  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct StrViewIter_703  it1099 = ( (  into_dash_iter709 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_706  dref1100 = ( (  next707 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_706_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_706_Just_t ) {
                struct envunion1629  temp1630 = (  fun1097 );
                x1098 = ( temp1630.fun ( &temp1630.env ,  ( dref1100 .stuff .Maybe_706_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1631 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1631);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1632;
    return (  temp1632 );
}

static  bool   lam1633 (   struct env1628* env ,    struct Char_65  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1626 (    struct StrView_30  it1124 ,    bool (*  fun1126 )(    struct Char_65  ) ) {
    struct env1628 envinst1628 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1627 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1629){ .fun = (  bool  (*) (  struct env1628*  ,    struct Char_65  ,    bool  ) )lam1633 , .env =  envinst1628 } ) ) );
}

struct env1642 {
    struct env60 envinst60;
    struct StrBuilder_62 *  builder2774;
};

struct envunion1643 {
    enum Unit_8  (*fun) (  struct env1642*  ,    struct Char_65  );
    struct env1642 env;
};

static  enum Unit_8   for_dash_each1641 (    struct StrViewIter_703  iterable1074 ,   struct envunion1643  fun1076 ) {
    struct StrViewIter_703  temp1644 = ( (  into_dash_iter705 ) ( (  iterable1074 ) ) );
    struct StrViewIter_703 *  it1077 = ( &temp1644 );
    while ( ( true ) ) {
        struct Maybe_706  dref1078 = ( (  next707 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_706_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_706_Just_t ) {
                struct envunion1643  temp1645 = (  fun1076 );
                ( temp1645.fun ( &temp1645.env ,  ( dref1078 .stuff .Maybe_706_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1646 (   struct env1642* env ,    struct Char_65  c2778 ) {
    struct envunion64  temp1647 = ( (struct envunion64){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1403 , .env =  env->envinst60 } );
    return ( temp1647.fun ( &temp1647.env ,  ( env->builder2774 ) ,  (  c2778 ) ) );
}

static  enum Unit_8   write1640 (   struct env66* env ,    struct StrBuilder_62 *  builder2774 ,    struct StrView_30  s2776 ) {
    struct env1642 envinst1642 = {
        .envinst60 = env->envinst60 ,
        .builder2774 =  builder2774 ,
    };
    ( (  for_dash_each1641 ) ( ( (  chars708 ) ( (  s2776 ) ) ) ,  ( (struct envunion1643){ .fun = (  enum Unit_8  (*) (  struct env1642*  ,    struct Char_65  ) )lam1646 , .env =  envinst1642 } ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_30   mk_dash_dyn_dash_str1637 (   struct env74* env ,    struct StrView_30  s2832 ,    enum CAllocator_10  al2834 ) {
    struct StrBuilder_62  temp1638 = ( (  mk1370 ) ( (  al2834 ) ) );
    struct StrBuilder_62 *  sb2835 = ( &temp1638 );
    struct envunion75  temp1639 = ( (struct envunion75){ .fun = (  enum Unit_8  (*) (  struct env66*  ,    struct StrBuilder_62 *  ,    struct StrView_30  ) )write1640 , .env =  env->envinst66 } );
    ( temp1639.fun ( &temp1639.env ,  (  sb2835 ) ,  (  s2832 ) ) );
    struct envunion73  temp1648 = ( (struct envunion73){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1403 , .env =  env->envinst60 } );
    ( temp1648.fun ( &temp1648.env ,  (  sb2835 ) ,  ( (  nullchar628 ) ( ) ) ) );
    struct StrView_30  dynstr2836 = ( (  as_dash_str1412 ) ( (  sb2835 ) ) );
    return ( (struct StrView_30) { .f_contents = ( (struct Slice_14) { .f_ptr = ( ( (  dynstr2836 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub403 ( ( ( (  dynstr2836 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_8   set_dash_msg1635 (   struct env221* env ,    struct Editor_228 *  ed4387 ,    struct StrView_30  s4389 ) {
    ( (  reset_dash_msg1017 ) ( (  ed4387 ) ) );
    struct envunion222  temp1636 = ( (struct envunion222){ .fun = (  struct StrView_30  (*) (  struct env74*  ,    struct StrView_30  ,    enum CAllocator_10  ) )mk_dash_dyn_dash_str1637 , .env =  env->envinst74 } );
    (*  ed4387 ) .f_msg = ( ( Maybe_229_Just ) ( ( temp1636.fun ( &temp1636.env ,  (  s4389 ) ,  ( ( * (  ed4387 ) ) .f_al ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   run_dash_cmd1584 (   struct env226* env ,    struct Editor_228 *  ed4406 ,    struct StrView_30  s4408 ) {
    struct Scanner_1585  temp1586 = ( (  mk_dash_from_dash_strview1587 ) ( (  s4408 ) ) );
    struct Scanner_1585 *  sc4409 = ( &temp1586 );
    struct StrView_30  cmd4410 = ( (  take_dash_str_dash_while1588 ) ( (  sc4409 ) ,  (  is_dash_not_dash_whitespace1604 ) ) );
    ( (  drop_dash_str_dash_while1605 ) ( (  sc4409 ) ,  (  is_dash_whitespace1281 ) ) );
    if ( (  eq1622 ( (  cmd4410 ) , ( (  from_dash_charlike1169 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed4406 ) .f_running = ( false );
    } else {
        if ( (  eq1622 ( (  cmd4410 ) , ( (  from_dash_string183 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1622 ( (  cmd4410 ) , ( (  from_dash_charlike1169 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1623 ) ( ) );
            } else {
                if ( (  eq1622 ( (  cmd4410 ) , ( (  from_dash_string183 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                } else {
                    if ( ( (  all1626 ) ( (  cmd4410 ) ,  (  is_dash_digit911 ) ) ) ) {
                    } else {
                        struct envunion227  temp1634 = ( (struct envunion227){ .fun = (  enum Unit_8  (*) (  struct env221*  ,    struct Editor_228 *  ,    struct StrView_30  ) )set_dash_msg1635 , .env =  env->envinst221 } );
                        ( temp1634.fun ( &temp1634.env ,  (  ed4406 ) ,  ( (  from_dash_string183 ) ( ( "unknown command" ) ,  ( 15 ) ) ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   free1649 (    struct StrBuilder_62 *  builder2818 ) {
    ( (  free524 ) ( ( & ( ( * (  builder2818 ) ) .f_chars ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Char_65   ascii_dash_char1651 (    char  c782 ) {
    return ( (  from_dash_u8977 ) ( ( (  ascii_dash_u8832 ) ( (  c782 ) ) ) ) );
}

static  struct Maybe_905   reduce1655 (    struct StrViewIter_703  iterable1093 ,    struct Maybe_905  base1095 ,    struct Maybe_905 (*  fun1097 )(    struct Char_65  ,    struct Maybe_905  ) ) {
    struct Maybe_905  x1098 = (  base1095 );
    struct StrViewIter_703  it1099 = ( (  into_dash_iter705 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_706  dref1100 = ( (  next707 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_706_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_706_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_706_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1656 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1656);
    exit ( 1 );
    ( Unit_8_Unit );
    struct Maybe_905  temp1657;
    return (  temp1657 );
}

static  struct Maybe_905   sequence_dash_maybe1658 (    struct Char_65  e2486 ,    struct Maybe_905  b2488 ) {
    struct Maybe_905  dref2489 = (  b2488 );
    if ( dref2489.tag == Maybe_905_None_t ) {
        return ( (struct Maybe_905) { .tag = Maybe_905_None_t } );
    }
    else {
        if ( dref2489.tag == Maybe_905_Just_t ) {
            struct Maybe_140  dref2491 = ( (  parse_dash_digit936 ) ( (  e2486 ) ) );
            if ( dref2491.tag == Maybe_140_None_t ) {
                return ( (struct Maybe_905) { .tag = Maybe_905_None_t } );
            }
            else {
                if ( dref2491.tag == Maybe_140_Just_t ) {
                    return ( ( Maybe_905_Just ) ( (  op_dash_add504 ( (  op_dash_mul323 ( ( dref2489 .stuff .Maybe_905_Just_s .field0 ) , (  from_dash_integral402 ( 10 ) ) ) ) , ( (  i32_dash_i64945 ) ( ( dref2491 .stuff .Maybe_140_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_905   parse_dash_int1654 (    struct StrView_30  s2483 ) {
    struct StrViewIter_703  cs2493 = ( (  chars708 ) ( (  s2483 ) ) );
    struct Maybe_706  dref2494 = ( (  head1284 ) ( (  cs2493 ) ) );
    if ( dref2494.tag == Maybe_706_Just_t ) {
        return ( (  reduce1655 ) ( (  cs2493 ) ,  ( ( Maybe_905_Just ) ( (  from_dash_integral402 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1658 ) ) );
    }
    else {
        if ( dref2494.tag == Maybe_706_None_t ) {
            return ( (struct Maybe_905) { .tag = Maybe_905_None_t } );
        }
    }
}

struct TakeWhile_1664 {
    struct StrViewIter_703  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1663 {
    struct TakeWhile_1664  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1663 Map_1663_Map (  struct TakeWhile_1664  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1663 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1663   into_dash_iter1666 (    struct Map_1663  self796 ) {
    return (  self796 );
}

static  struct Maybe_706   next1668 (    struct TakeWhile_1664 *  self964 ) {
    struct Maybe_706  mx965 = ( (  next707 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_706  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_706_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_706_Just ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
            }
        }
    }
}

static  struct Maybe_1091   next1667 (    struct Map_1663 *  dref798 ) {
    struct Maybe_706  dref801 = ( (  next1668 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_1091) { .tag = Maybe_1091_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_706_Just_t ) {
            return ( ( Maybe_1091_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_706_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1665 (    struct Map_1663  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1663  it1099 = ( (  into_dash_iter1666 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1091  dref1100 = ( (  next1667 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1091_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1091_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1091_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1669 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1669);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1670;
    return (  temp1670 );
}

static  size_t   lam1671 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add325 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1662 (    struct Map_1663  it1110 ) {
    return ( (  reduce1665 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1671 ) ) );
}

static  struct TakeWhile_1664   into_dash_iter1673 (    struct TakeWhile_1664  self961 ) {
    return (  self961 );
}

static  struct Map_1663   map1672 (    struct TakeWhile_1664  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1664  it808 = ( (  into_dash_iter1673 ) ( (  iterable805 ) ) );
    return ( ( Map_1663_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1664   take_dash_while1674 (    struct StrViewIter_703  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1664) { .f_it = ( (  into_dash_iter705 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1675 (    struct Char_65  c2203 ) {
    return ( (  c2203 ) .f_num_dash_bytes );
}

static  struct StrView_30   take_dash_while1661 (    struct StrView_30  self2199 ,    bool (*  fun2201 )(    struct Char_65  ) ) {
    size_t  bi2204 = ( (  sum1662 ) ( ( (  map1672 ) ( ( (  take_dash_while1674 ) ( ( (  chars708 ) ( (  self2199 ) ) ) ,  (  fun2201 ) ) ) ,  (  lam1675 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2199 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2204 ) ) );
}

static  struct StrView_30   take_dash_str_dash_while1660 (    struct Scanner_1585 *  sc3268 ,    bool (*  fun3270 )(    struct Char_65  ) ) {
    struct StrView_30  s3271 = ( (  take_dash_while1661 ) ( ( ( * (  sc3268 ) ) .f_s ) ,  (  fun3270 ) ) );
    (*  sc3268 ) .f_s = ( (  byte_dash_substr_dash_from1472 ) ( ( ( * (  sc3268 ) ) .f_s ) ,  ( (  num_dash_bytes1069 ) ( (  s3271 ) ) ) ) );
    return (  s3271 );
}

struct TakeWhile_1680 {
    struct StrViewIter_703  f_it;
    bool (*  f_pred )(    struct Char_65  );
};

struct Map_1679 {
    struct TakeWhile_1680  field0;
    size_t (*  field1 )(    struct Char_65  );
};

static struct Map_1679 Map_1679_Map (  struct TakeWhile_1680  field0 ,  size_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1679 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1679   into_dash_iter1682 (    struct Map_1679  self796 ) {
    return (  self796 );
}

static  struct Maybe_706   next1684 (    struct TakeWhile_1680 *  self964 ) {
    struct Maybe_706  mx965 = ( (  next707 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_706  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_706_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_706_Just ) ( ( dref966 .stuff .Maybe_706_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
            }
        }
    }
}

static  struct Maybe_1091   next1683 (    struct Map_1679 *  dref798 ) {
    struct Maybe_706  dref801 = ( (  next1684 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_1091) { .tag = Maybe_1091_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_706_Just_t ) {
            return ( ( Maybe_1091_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_706_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1681 (    struct Map_1679  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1679  it1099 = ( (  into_dash_iter1682 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1091  dref1100 = ( (  next1683 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1091_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1091_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1091_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1685 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1685);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1686;
    return (  temp1686 );
}

static  size_t   lam1687 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add325 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1678 (    struct Map_1679  it1110 ) {
    return ( (  reduce1681 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1687 ) ) );
}

static  struct TakeWhile_1680   into_dash_iter1689 (    struct TakeWhile_1680  self961 ) {
    return (  self961 );
}

static  struct Map_1679   map1688 (    struct TakeWhile_1680  iterable805 ,    size_t (*  fun807 )(    struct Char_65  ) ) {
    struct TakeWhile_1680  it808 = ( (  into_dash_iter1689 ) ( (  iterable805 ) ) );
    return ( ( Map_1679_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1680   take_dash_while1690 (    struct StrViewIter_703  it970 ,    bool (*  pred972 )(    struct Char_65  ) ) {
    return ( (struct TakeWhile_1680) { .f_it = ( (  into_dash_iter705 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1691 (    struct Char_65  c2203 ) {
    return ( (  c2203 ) .f_num_dash_bytes );
}

static  struct StrView_30   take_dash_while1677 (    struct StrView_30  self2199 ,    bool (*  fun2201 )(    struct Char_65  ) ) {
    size_t  bi2204 = ( (  sum1678 ) ( ( (  map1688 ) ( ( (  take_dash_while1690 ) ( ( (  chars708 ) ( (  self2199 ) ) ) ,  (  fun2201 ) ) ) ,  (  lam1691 ) ) ) ) );
    return ( (  byte_dash_substr484 ) ( (  self2199 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2204 ) ) );
}

static  struct StrView_30   take_dash_str_dash_while1676 (    struct Scanner_1585 *  sc3268 ,    bool (*  fun3270 )(    struct Char_65  ) ) {
    struct StrView_30  s3271 = ( (  take_dash_while1677 ) ( ( ( * (  sc3268 ) ) .f_s ) ,  (  fun3270 ) ) );
    (*  sc3268 ) .f_s = ( (  byte_dash_substr_dash_from1472 ) ( ( ( * (  sc3268 ) ) .f_s ) ,  ( (  num_dash_bytes1069 ) ( (  s3271 ) ) ) ) );
    return (  s3271 );
}

static  bool   lam1692 (    struct Char_65  c4402 ) {
    return ( ! ( (  is_dash_whitespace1281 ) ( (  c4402 ) ) ) );
}

static  struct Theme_157 *   or_dash_else1693 (    struct Maybe_225  self1733 ,    struct Theme_157 *  alt1735 ) {
    struct Maybe_225  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_225_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_225_Just_t ) {
            return ( dref1736 .stuff .Maybe_225_Just_s .field0 );
        }
    }
}

static  struct Maybe_706   head1697 (    struct StrView_30  it1142 ) {
    struct StrViewIter_703  temp1698 = ( (  into_dash_iter709 ) ( (  it1142 ) ) );
    return ( (  next707 ) ( ( &temp1698 ) ) );
}

static  bool   null1696 (    struct StrView_30  it1151 ) {
    struct Maybe_706  dref1152 = ( (  head1697 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_706_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct SliceIter_1702 {
    struct Slice_176  f_slice;
    size_t  f_current_dash_offset;
};

struct env1703 {
    ;
    struct StrView_30  name3969;
};

struct envunion1704 {
    bool  (*fun) (  struct env1703*  ,    struct Tuple2_177  );
    struct env1703 env;
};

struct Filter_1701 {
    struct SliceIter_1702  f_og;
    struct envunion1704  f_fun;
};

struct Map_1700 {
    struct Filter_1701  field0;
    struct Theme_157 * (*  field1 )(    struct Tuple2_177  );
};

static struct Map_1700 Map_1700_Map (  struct Filter_1701  field0 ,  struct Theme_157 * (*  field1 )(    struct Tuple2_177  ) ) {
    return ( struct Map_1700 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1706 {
    enum {
        Maybe_1706_None_t,
        Maybe_1706_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_177  field0;
        } Maybe_1706_Just_s;
    } stuff;
};

static struct Maybe_1706 Maybe_1706_Just (  struct Tuple2_177  field0 ) {
    return ( struct Maybe_1706 ) { .tag = Maybe_1706_Just_t, .stuff = { .Maybe_1706_Just_s = { .field0 = field0 } } };
};

static  struct Tuple2_177 *   offset_dash_ptr1709 (    struct Tuple2_177 *  x338 ,    int64_t  count340 ) {
    struct Tuple2_177  temp1710;
    return ( (struct Tuple2_177 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1710 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_1706   next1708 (    struct SliceIter_1702 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp283 ( (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1706) { .tag = Maybe_1706_None_t } );
    }
    struct Tuple2_177  elem1831 = ( * ( (  offset_dash_ptr1709 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1706_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_1706   next1707 (    struct Filter_1701 *  self833 ) {
    while ( ( true ) ) {
        struct Maybe_1706  dref834 = ( (  next1708 ) ( ( & ( ( * (  self833 ) ) .f_og ) ) ) );
        if ( dref834.tag == Maybe_1706_None_t ) {
            return ( (struct Maybe_1706) { .tag = Maybe_1706_None_t } );
        }
        else {
            if ( dref834.tag == Maybe_1706_Just_t ) {
                struct envunion1704  temp1711 = ( ( * (  self833 ) ) .f_fun );
                if ( ( temp1711.fun ( &temp1711.env ,  ( dref834 .stuff .Maybe_1706_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_1706_Just ) ( ( dref834 .stuff .Maybe_1706_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_1706  temp1712;
    return (  temp1712 );
}

static  struct Maybe_225   next1705 (    struct Map_1700 *  dref798 ) {
    struct Maybe_1706  dref801 = ( (  next1707 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_1706_None_t ) {
        return ( (struct Maybe_225) { .tag = Maybe_225_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_1706_Just_t ) {
            return ( ( Maybe_225_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_1706_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Map_1700   into_dash_iter1714 (    struct Map_1700  self796 ) {
    return (  self796 );
}

static  struct Maybe_225   head1699 (    struct Map_1700  it1142 ) {
    struct Map_1700  temp1713 = ( (  into_dash_iter1714 ) ( (  it1142 ) ) );
    return ( (  next1705 ) ( ( &temp1713 ) ) );
}

static  struct Filter_1701   into_dash_iter1716 (    struct Filter_1701  self830 ) {
    return (  self830 );
}

static  struct Map_1700   map1715 (    struct Filter_1701  iterable805 ,    struct Theme_157 * (*  fun807 )(    struct Tuple2_177  ) ) {
    struct Filter_1701  it808 = ( (  into_dash_iter1716 ) ( (  iterable805 ) ) );
    return ( ( Map_1700_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct SliceIter_1702   into_dash_iter1718 (    struct Slice_176  self1823 ) {
    return ( (struct SliceIter_1702) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_1701   filter1717 (    struct Slice_176  iterable838 ,   struct envunion1704  fun840 ) {
    struct SliceIter_1702  it841 = ( (  into_dash_iter1718 ) ( (  iterable838 ) ) );
    return ( (struct Filter_1701) { .f_og = (  it841 ) , .f_fun = (  fun840 ) } );
}

struct Tuple2_1723 {
    struct Maybe_706  field0;
    struct Maybe_706  field1;
};

static struct Tuple2_1723 Tuple2_1723_Tuple2 (  struct Maybe_706  field0 ,  struct Maybe_706  field1 ) {
    return ( struct Tuple2_1723 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   begins_dash_with1720 (    struct StrView_30  s2413 ,    struct StrView_30  beg2415 ) {
    struct StrViewIter_703  temp1721 = ( (  chars708 ) ( (  s2413 ) ) );
    struct StrViewIter_703 *  scs2416 = ( &temp1721 );
    struct StrViewIter_703  temp1722 = ( (  chars708 ) ( (  beg2415 ) ) );
    struct StrViewIter_703 *  begcs2417 = ( &temp1722 );
    while ( ( true ) ) {
        struct Tuple2_1723  dref2418 = ( ( Tuple2_1723_Tuple2 ) ( ( (  next707 ) ( (  scs2416 ) ) ) ,  ( (  next707 ) ( (  begcs2417 ) ) ) ) );
        if ( dref2418 .field0.tag == Maybe_706_Just_t && dref2418 .field1.tag == Maybe_706_Just_t ) {
            if ( ( !  eq502 ( ( dref2418 .field0 .stuff .Maybe_706_Just_s .field0 ) , ( dref2418 .field1 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else {
            if ( dref2418 .field0.tag == Maybe_706_None_t && dref2418 .field1.tag == Maybe_706_Just_t ) {
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

static  bool   lam1719 (   struct env1703* env ,    struct Tuple2_177  dref3970 ) {
    return ( (  begins_dash_with1720 ) ( ( dref3970 .field0 ) ,  ( env->name3969 ) ) );
}

static  struct Theme_157 *   snd1724 (    struct Tuple2_177  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Maybe_225   match_dash_theme1695 (   struct env184* env ,    struct StrView_30  name3969 ) {
    if ( ( (  null1696 ) ( (  name3969 ) ) ) ) {
        return ( (struct Maybe_225) { .tag = Maybe_225_None_t } );
    }
    struct env1703 envinst1703 = {
        .name3969 =  name3969 ,
    };
    return ( (  head1699 ) ( ( (  map1715 ) ( ( (  filter1717 ) ( ( env->all_dash_themes3966 ) ,  ( (struct envunion1704){ .fun = (  bool  (*) (  struct env1703*  ,    struct Tuple2_177  ) )lam1719 , .env =  envinst1703 } ) ) ) ,  (  snd1724 ) ) ) ) );
}

static  enum Unit_8   live_dash_cmd1653 (   struct env223* env ,    struct Editor_228 *  ed4392 ,    struct StrView_30  cmd4394 ) {
    struct Maybe_905  dref4395 = ( (  parse_dash_int1654 ) ( (  cmd4394 ) ) );
    if ( dref4395.tag == Maybe_905_Just_t ) {
        int32_t  line4397 = ( (  clamp1423 ) ( ( (  i64_dash_i32947 ) ( ( dref4395 .stuff .Maybe_905_Just_s .field0 ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( ( (  num_dash_lines1076 ) ( ( ( * ( (  pane1073 ) ( (  ed4392 ) ) ) ) .f_buf ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
        int32_t  line4398 = (  op_dash_sub149 ( (  line4397 ) , (  from_dash_integral56 ( 1 ) ) ) );
        ( (  set_dash_cursors1030 ) ( ( (  pane1073 ) ( (  ed4392 ) ) ) ,  ( (struct Pos_29) { .f_line = (  line4398 ) , .f_bi = (  from_dash_integral56 ( 0 ) ) } ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_NoChanges ) ) );
    }
    else {
        if ( dref4395.tag == Maybe_905_None_t ) {
            struct Scanner_1585  temp1659 = ( (  mk_dash_from_dash_strview1587 ) ( (  cmd4394 ) ) );
            struct Scanner_1585 *  sc4399 = ( &temp1659 );
            struct StrView_30  cmd4400 = ( (  take_dash_str_dash_while1660 ) ( (  sc4399 ) ,  (  is_dash_alpha1276 ) ) );
            if ( (  eq1622 ( (  cmd4400 ) , ( (  from_dash_string183 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                ( (  drop_dash_str_dash_while1605 ) ( (  sc4399 ) ,  (  is_dash_whitespace1281 ) ) );
                struct StrView_30  theme_dash_name4403 = ( (  take_dash_str_dash_while1676 ) ( (  sc4399 ) ,  (  lam1692 ) ) );
                struct envunion224  temp1694 = ( (struct envunion224){ .fun = (  struct Maybe_225  (*) (  struct env184*  ,    struct StrView_30  ) )match_dash_theme1695 , .env =  env->envinst184 } );
                (*  ed4392 ) .f_theme = ( (  or_dash_else1693 ) ( ( temp1694.fun ( &temp1694.env ,  (  theme_dash_name4403 ) ) ) ,  ( ( * (  ed4392 ) ) .f_og_dash_theme ) ) );
            } else {
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrViewIter_703   chars1729 (    struct StrBuilder_62  s2826 ) {
    return ( (  into_dash_iter709 ) ( ( (  as_dash_str1412 ) ( ( & (  s2826 ) ) ) ) ) );
}

static  struct StrViewIter_703   into_dash_iter1728 (    struct StrBuilder_62  self2829 ) {
    return ( (  chars1729 ) ( (  self2829 ) ) );
}

static  struct Maybe_706   head1726 (    struct StrBuilder_62  it1142 ) {
    struct StrViewIter_703  temp1727 = ( (  into_dash_iter1728 ) ( (  it1142 ) ) );
    return ( (  next707 ) ( ( &temp1727 ) ) );
}

static  bool   null1725 (    struct StrBuilder_62  it1151 ) {
    struct Maybe_706  dref1152 = ( (  head1726 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_706_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_8   remove1735 (   struct env42* env ,    struct List_13 *  list2077 ,    size_t  i2079 ) {
    struct envunion43  temp1736 = ( (struct envunion43){ .fun = (  enum Unit_8  (*) (  struct env40*  ,    struct List_13 *  ,    size_t  ,    size_t  ) )remove_dash_range527 , .env =  env->envinst40 } );
    ( temp1736.fun ( &temp1736.env ,  (  list2077 ) ,  (  i2079 ) ,  (  op_dash_add325 ( (  i2079 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   pop1733 (   struct env44* env ,    struct List_13 *  list2093 ) {
    if ( (  eq332 ( ( ( * (  list2093 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic1153 ) ( ( (  from_dash_string183 ) ( ( "List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct envunion45  temp1734 = ( (struct envunion45){ .fun = (  enum Unit_8  (*) (  struct env42*  ,    struct List_13 *  ,    size_t  ) )remove1735 , .env =  env->envinst42 } );
    return ( temp1734.fun ( &temp1734.env ,  (  list2093 ) ,  (  op_dash_sub403 ( ( ( * (  list2093 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
}

static  enum Unit_8   pop1731 (   struct env67* env ,    struct StrBuilder_62 *  sb2792 ) {
    struct envunion68  temp1732 = ( (struct envunion68){ .fun = (  enum Unit_8  (*) (  struct env44*  ,    struct List_13 *  ) )pop1733 , .env =  env->envinst44 } );
    return ( temp1732.fun ( &temp1732.env ,  ( & ( ( * (  sb2792 ) ) .f_chars ) ) ) );
}

struct envunion1738 {
    enum Unit_8  (*fun) (  struct env223*  ,    struct Editor_228 *  ,    struct StrView_30  );
    struct env223 env;
};

struct env1740 {
    ;
    struct Editor_228 *  ed4461;
};

struct envunion1741 {
    enum Unit_8  (*fun) (  struct env1740*  ,    struct StrView_30  );
    struct env1740 env;
};

static  enum Unit_8   if_dash_just1739 (    struct Maybe_229  x1291 ,   struct envunion1741  fun1293 ) {
    struct Maybe_229  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_229_Just_t ) {
        struct envunion1741  temp1742 = (  fun1293 );
        ( temp1742.fun ( &temp1742.env ,  ( dref1294 .stuff .Maybe_229_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_229_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1743 (   struct env1740* env ,    struct StrView_30  st4478 ) {
    ( (  free1023 ) ( (  st4478 ) ,  ( ( * ( env->ed4461 ) ) .f_al ) ) );
    return ( Unit_8_Unit );
}

struct envunion1745 {
    enum Unit_8  (*fun) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  );
    struct env60 env;
};

static  enum Unit_8   live_dash_search1746 (    struct Editor_228 *  ed4413 ,    struct Pos_29  begin_dash_pos4415 ,    struct StrView_30  query4417 ) {
    if ( ( ! ( (  null1696 ) ( (  query4417 ) ) ) ) ) {
        struct Maybe_1447  dref4418 = ( (  search_dash_from1448 ) ( ( (  pane1073 ) ( (  ed4413 ) ) ) ,  (  begin_dash_pos4415 ) ,  (  query4417 ) ) );
        if ( dref4418.tag == Maybe_1447_Just_t ) {
            ( (  set_dash_cursors1030 ) ( ( (  pane1073 ) ( (  ed4413 ) ) ) ,  ( dref4418 .stuff .Maybe_1447_Just_s .field0 .field1 ) ,  ( ( Maybe_32_Just ) ( ( dref4418 .stuff .Maybe_1447_Just_s .field0 .field0 ) ) ) ,  ( CursorMovement_1031_NoChanges ) ) );
        }
        else {
            if ( dref4418.tag == Maybe_1447_None_t ) {
                ( (  set_dash_cursors1030 ) ( ( (  pane1073 ) ( (  ed4413 ) ) ) ,  (  begin_dash_pos4415 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_NoChanges ) ) );
            }
        }
    } else {
        ( (  set_dash_cursors1030 ) ( ( (  pane1073 ) ( (  ed4413 ) ) ) ,  (  begin_dash_pos4415 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_NoChanges ) ) );
    }
    return ( Unit_8_Unit );
}

struct envunion1748 {
    enum Unit_8  (*fun) (  struct env67*  ,    struct StrBuilder_62 *  );
    struct env67 env;
};

static  enum Unit_8   handle_dash_key1026 (   struct env242* env ,    struct Editor_228 *  ed4461 ,    struct Key_251  key4463 ) {
    struct EditorMode_230 *  dref4464 = ( & ( ( * (  ed4461 ) ) .f_mode ) );
    if ( (* dref4464 ).tag == EditorMode_230_Normal_t ) {
        enum Mode_205  dref4465 = ( ( ( * (  ed4461 ) ) .f_pane ) .f_mode );
        switch (  dref4465 ) {
            case Mode_205_Normal : {
                struct envunion250  temp1027 = ( (struct envunion250){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Editor_228 *  ,    struct Key_251  ) )handle_dash_normal_dash_key1028 , .env =  env->envinst231 } );
                ( temp1027.fun ( &temp1027.env ,  (  ed4461 ) ,  (  key4463 ) ) );
                break;
            }
            case Mode_205_Select : {
                struct envunion1570  temp1569 = ( (struct envunion1570){ .fun = (  enum Unit_8  (*) (  struct env231*  ,    struct Editor_228 *  ,    struct Key_251  ) )handle_dash_normal_dash_key1028 , .env =  env->envinst231 } );
                ( temp1569.fun ( &temp1569.env ,  (  ed4461 ) ,  (  key4463 ) ) );
                break;
            }
            case Mode_205_Insert : {
                struct Key_251  dref4466 = (  key4463 );
                if ( dref4466.tag == Key_251_Escape_t ) {
                    ( (  set_dash_mode1082 ) ( ( (  pane1073 ) ( (  ed4461 ) ) ) ,  ( Mode_205_Normal ) ) );
                }
                else {
                    if ( dref4466.tag == Key_251_Enter_t ) {
                        int32_t  indent4467 = ( (  indent_dash_at_dash_line1085 ) ( ( (  pane1073 ) ( (  ed4461 ) ) ) ,  ( ( ( * ( (  pane1073 ) ( (  ed4461 ) ) ) ) .f_cursor ) .f_line ) ) );
                        struct envunion1572  temp1571 = ( (struct envunion1572){ .fun = (  enum Unit_8  (*) (  struct env188*  ,    struct Pane_204 *  ,    struct StrView_30  ) )add_dash_str_dash_at_dash_char1106 , .env =  env->envinst188 } );
                        ( temp1571.fun ( &temp1571.env ,  ( (  pane1073 ) ( (  ed4461 ) ) ) ,  ( (  from_dash_charlike1169 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right1074 ) ( ( (  pane1073 ) ( (  ed4461 ) ) ) ) );
                        struct envunion244  temp1573 = ( (struct envunion244){ .fun = (  enum Unit_8  (*) (  struct env210*  ,    struct Pane_204 *  ,    int32_t  ) )indent_dash_at_dash_current1246 , .env =  env->envinst210 } );
                        ( temp1573.fun ( &temp1573.env ,  ( (  pane1073 ) ( (  ed4461 ) ) ) ,  (  indent4467 ) ) );
                    }
                    else {
                        if ( dref4466.tag == Key_251_Backspace_t ) {
                            struct envunion249  temp1574 = ( (struct envunion249){ .fun = (  enum Unit_8  (*) (  struct env191*  ,    struct Pane_204 *  ) )backspace1575 , .env =  env->envinst191 } );
                            ( temp1574.fun ( &temp1574.env ,  ( (  pane1073 ) ( (  ed4461 ) ) ) ) );
                        }
                        else {
                            if ( dref4466.tag == Key_251_Char_t ) {
                                struct Array_1578  temp1580 = ( (  from_dash_listlike1581 ) ( ( (struct Array_1578) { ._arr = { ( dref4466 .stuff .Key_251_Char_s .field0 ) } } ) ) );
                                struct StrView_30  s4469 = ( (  from_dash_ascii_dash_slice902 ) ( ( (  as_dash_slice1577 ) ( ( &temp1580 ) ) ) ) );
                                struct envunion245  temp1582 = ( (struct envunion245){ .fun = (  enum Unit_8  (*) (  struct env188*  ,    struct Pane_204 *  ,    struct StrView_30  ) )add_dash_str_dash_at_dash_char1106 , .env =  env->envinst188 } );
                                ( temp1582.fun ( &temp1582.env ,  ( (  pane1073 ) ( (  ed4461 ) ) ) ,  (  s4469 ) ) );
                                ( (  move_dash_right1074 ) ( ( (  pane1073 ) ( (  ed4461 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref4464 ).tag == EditorMode_230_Cmd_t ) {
            struct Key_251  dref4472 = (  key4463 );
            if ( dref4472.tag == Key_251_Escape_t ) {
                ( (  set_dash_cursors1030 ) ( ( (  pane1073 ) ( (  ed4461 ) ) ) ,  ( (* dref4464 ) .stuff .EditorMode_230_Cmd_s .field0 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_UpdateVI ) ) );
                (*  ed4461 ) .f_mode = ( (struct EditorMode_230) { .tag = EditorMode_230_Normal_t } );
                (*  ed4461 ) .f_theme = ( ( * (  ed4461 ) ) .f_og_dash_theme );
            }
            else {
                if ( dref4472.tag == Key_251_Enter_t ) {
                    struct envunion243  temp1583 = ( (struct envunion243){ .fun = (  enum Unit_8  (*) (  struct env226*  ,    struct Editor_228 *  ,    struct StrView_30  ) )run_dash_cmd1584 , .env =  env->envinst226 } );
                    ( temp1583.fun ( &temp1583.env ,  (  ed4461 ) ,  ( (  as_dash_str1412 ) ( ( & ( (* dref4464 ) .stuff .EditorMode_230_Cmd_s .field1 ) ) ) ) ) );
                    ( (  free1649 ) ( ( & ( (* dref4464 ) .stuff .EditorMode_230_Cmd_s .field1 ) ) ) );
                    ( (  set_dash_cursors1030 ) ( ( (  pane1073 ) ( (  ed4461 ) ) ) ,  ( ( * ( (  pane1073 ) ( (  ed4461 ) ) ) ) .f_cursor ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_UpdateVI ) ) );
                    (*  ed4461 ) .f_mode = ( (struct EditorMode_230) { .tag = EditorMode_230_Normal_t } );
                    (*  ed4461 ) .f_og_dash_theme = ( ( * (  ed4461 ) ) .f_theme );
                }
                else {
                    if ( dref4472.tag == Key_251_Char_t ) {
                        struct envunion246  temp1650 = ( (struct envunion246){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1403 , .env =  env->envinst60 } );
                        ( temp1650.fun ( &temp1650.env ,  ( & ( (* dref4464 ) .stuff .EditorMode_230_Cmd_s .field1 ) ) ,  ( (  ascii_dash_char1651 ) ( ( dref4472 .stuff .Key_251_Char_s .field0 ) ) ) ) );
                        struct envunion248  temp1652 = ( (struct envunion248){ .fun = (  enum Unit_8  (*) (  struct env223*  ,    struct Editor_228 *  ,    struct StrView_30  ) )live_dash_cmd1653 , .env =  env->envinst223 } );
                        ( temp1652.fun ( &temp1652.env ,  (  ed4461 ) ,  ( (  as_dash_str1412 ) ( ( & ( (* dref4464 ) .stuff .EditorMode_230_Cmd_s .field1 ) ) ) ) ) );
                    }
                    else {
                        if ( dref4472.tag == Key_251_Backspace_t ) {
                            if ( ( ! ( (  null1725 ) ( ( (* dref4464 ) .stuff .EditorMode_230_Cmd_s .field1 ) ) ) ) ) {
                                struct envunion247  temp1730 = ( (struct envunion247){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ) )pop1731 , .env =  env->envinst67 } );
                                ( temp1730.fun ( &temp1730.env ,  ( & ( (* dref4464 ) .stuff .EditorMode_230_Cmd_s .field1 ) ) ) );
                            }
                            struct envunion1738  temp1737 = ( (struct envunion1738){ .fun = (  enum Unit_8  (*) (  struct env223*  ,    struct Editor_228 *  ,    struct StrView_30  ) )live_dash_cmd1653 , .env =  env->envinst223 } );
                            ( temp1737.fun ( &temp1737.env ,  (  ed4461 ) ,  ( (  as_dash_str1412 ) ( ( & ( (* dref4464 ) .stuff .EditorMode_230_Cmd_s .field1 ) ) ) ) ) );
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
            if ( (* dref4464 ).tag == EditorMode_230_Search_t ) {
                struct Key_251  dref4476 = (  key4463 );
                if ( dref4476.tag == Key_251_Escape_t ) {
                    ( (  set_dash_cursors1030 ) ( ( (  pane1073 ) ( (  ed4461 ) ) ) ,  ( (* dref4464 ) .stuff .EditorMode_230_Search_s .field0 ) ,  ( (struct Maybe_32) { .tag = Maybe_32_None_t } ) ,  ( CursorMovement_1031_UpdateVI ) ) );
                    (*  ed4461 ) .f_mode = ( (struct EditorMode_230) { .tag = EditorMode_230_Normal_t } );
                }
                else {
                    if ( dref4476.tag == Key_251_Enter_t ) {
                        ( (  set_dash_cursors1030 ) ( ( (  pane1073 ) ( (  ed4461 ) ) ) ,  ( ( * ( (  pane1073 ) ( (  ed4461 ) ) ) ) .f_cursor ) ,  ( ( * ( (  pane1073 ) ( (  ed4461 ) ) ) ) .f_sel ) ,  ( CursorMovement_1031_UpdateVI ) ) );
                        struct env1740 envinst1740 = {
                            .ed4461 =  ed4461 ,
                        };
                        ( (  if_dash_just1739 ) ( ( ( * (  ed4461 ) ) .f_search_dash_term ) ,  ( (struct envunion1741){ .fun = (  enum Unit_8  (*) (  struct env1740*  ,    struct StrView_30  ) )lam1743 , .env =  envinst1740 } ) ) );
                        if ( ( ! ( (  null1725 ) ( ( (* dref4464 ) .stuff .EditorMode_230_Search_s .field1 ) ) ) ) ) {
                            struct Pos_29  to4479 = ( ( * ( (  pane1073 ) ( (  ed4461 ) ) ) ) .f_cursor );
                            struct Pos_29  from4480 = ( (  or_dash_else1341 ) ( ( ( * ( (  pane1073 ) ( (  ed4461 ) ) ) ) .f_sel ) ,  (  to4479 ) ) );
                            (*  ed4461 ) .f_search_dash_term = ( ( Maybe_229_Just ) ( ( (  as_dash_str1412 ) ( ( & ( (* dref4464 ) .stuff .EditorMode_230_Search_s .field1 ) ) ) ) ) );
                        } else {
                            (*  ed4461 ) .f_search_dash_term = ( (struct Maybe_229) { .tag = Maybe_229_None_t } );
                        }
                        (*  ed4461 ) .f_mode = ( (struct EditorMode_230) { .tag = EditorMode_230_Normal_t } );
                    }
                    else {
                        if ( dref4476.tag == Key_251_Char_t ) {
                            struct envunion1745  temp1744 = ( (struct envunion1745){ .fun = (  enum Unit_8  (*) (  struct env60*  ,    struct StrBuilder_62 *  ,    struct Char_65  ) )write_dash_char1403 , .env =  env->envinst60 } );
                            ( temp1744.fun ( &temp1744.env ,  ( & ( (* dref4464 ) .stuff .EditorMode_230_Search_s .field1 ) ) ,  ( (  ascii_dash_char1651 ) ( ( dref4476 .stuff .Key_251_Char_s .field0 ) ) ) ) );
                            ( (  live_dash_search1746 ) ( (  ed4461 ) ,  ( (* dref4464 ) .stuff .EditorMode_230_Search_s .field0 ) ,  ( (  as_dash_str1412 ) ( ( & ( (* dref4464 ) .stuff .EditorMode_230_Search_s .field1 ) ) ) ) ) );
                        }
                        else {
                            if ( dref4476.tag == Key_251_Backspace_t ) {
                                if ( ( ! ( (  null1725 ) ( ( (* dref4464 ) .stuff .EditorMode_230_Search_s .field1 ) ) ) ) ) {
                                    struct envunion1748  temp1747 = ( (struct envunion1748){ .fun = (  enum Unit_8  (*) (  struct env67*  ,    struct StrBuilder_62 *  ) )pop1731 , .env =  env->envinst67 } );
                                    ( temp1747.fun ( &temp1747.env ,  ( & ( (* dref4464 ) .stuff .EditorMode_230_Search_s .field1 ) ) ) );
                                }
                                ( (  live_dash_search1746 ) ( (  ed4461 ) ,  ( (* dref4464 ) .stuff .EditorMode_230_Search_s .field0 ) ,  ( (  as_dash_str1412 ) ( ( & ( (* dref4464 ) .stuff .EditorMode_230_Search_s .field1 ) ) ) ) ) );
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
                    ( (  todo1623 ) ( ) );
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1750 {
    bool  (*fun) (  struct env85*  ,    struct Screen_254 *  );
    struct env85 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1751 (   struct env85* env ,    struct Screen_254 *  screen3514 ) {
    struct Tui_81 *  tui3515 = ( ( * (  screen3514 ) ) .f_tui );
    struct envunion86  temp1752 = ( (struct envunion86){ .fun = (  bool  (*) (  struct env78*  ,    struct Tui_81 *  ) )update_dash_dimensions819 , .env =  env->envinst78 } );
    bool  updated_dash_dimensions3516 = ( temp1752.fun ( &temp1752.env ,  (  tui3515 ) ) );
    if ( ( ! (  updated_dash_dimensions3516 ) ) ) {
        return ( false );
    }
    (*  screen3514 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3517 = ( ( * ( ( * (  screen3514 ) ) .f_tui ) ) .f_width );
    uint32_t  h3518 = ( ( * ( ( * (  screen3514 ) ) .f_tui ) ) .f_height );
    size_t  nusz3519 = ( (  u32_dash_size768 ) ( (  op_dash_mul152 ( (  w3517 ) , (  h3518 ) ) ) ) );
    if ( (  cmp283 ( (  nusz3519 ) , ( ( ( * (  screen3514 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_254  nuscreen3520 = ( (  mk_dash_screen762 ) ( (  tui3515 ) ,  ( ( * (  screen3514 ) ) .f_al ) ) );
    (*  screen3514 ) .f_current = ( (  nuscreen3520 ) .f_current );
    (*  screen3514 ) .f_previous = ( (  nuscreen3520 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1753 (    struct Tui_81 *  tui3441 ) {
    bool  redraw3442 = ( ( * (  tui3441 ) ) .f_should_dash_redraw );
    (*  tui3441 ) .f_should_dash_redraw = ( false );
    return (  redraw3442 );
}

struct env1757 {
    struct Slice_255  s1906;
    struct Cell_256 (*  fun1908 )(    struct Cell_256  );
    ;
    ;
    ;
};

struct envunion1758 {
    enum Unit_8  (*fun) (  struct env1757*  ,    int32_t  );
    struct env1757 env;
};

static  enum Unit_8   for_dash_each1756 (    struct Range_135  iterable1074 ,   struct envunion1758  fun1076 ) {
    struct RangeIter_138  temp1759 = ( (  into_dash_iter139 ) ( (  iterable1074 ) ) );
    struct RangeIter_138 *  it1077 = ( &temp1759 );
    while ( ( true ) ) {
        struct Maybe_140  dref1078 = ( (  next141 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_140_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_140_Just_t ) {
                struct envunion1758  temp1760 = (  fun1076 );
                ( temp1760.fun ( &temp1760.env ,  ( dref1078 .stuff .Maybe_140_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1761 (   struct env1757* env ,    int32_t  i1910 ) {
    return ( (  set783 ) ( ( env->s1906 ) ,  ( (  i32_dash_size355 ) ( (  i1910 ) ) ) ,  ( ( env->fun1908 ) ( (  elem_dash_get787 ( ( env->s1906 ) , ( (  i32_dash_size355 ) ( (  i1910 ) ) ) ) ) ) ) ) );
}

static  enum Unit_8   map1755 (    struct Slice_255  s1906 ,    struct Cell_256 (*  fun1908 )(    struct Cell_256  ) ) {
    struct env1757 envinst1757 = {
        .s1906 =  s1906 ,
        .fun1908 =  fun1908 ,
    };
    ( (  for_dash_each1756 ) ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_i32294 ) ( (  op_dash_sub403 ( ( (  s1906 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1758){ .fun = (  enum Unit_8  (*) (  struct env1757*  ,    int32_t  ) )lam1761 , .env =  envinst1757 } ) ) );
    return ( Unit_8_Unit );
}

static  struct Cell_256   lam1762 (    struct Cell_256  dref3478 ) {
    return ( (  default_dash_cell795 ) ( ) );
}

static  enum Unit_8   clear_dash_screen1754 (    struct Screen_254 *  screen3477 ) {
    ( (  map1755 ) ( ( ( * (  screen3477 ) ) .f_current ) ,  (  lam1762 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_fg1763 (    struct Screen_254 *  screen3523 ,    struct Color_123  c3525 ) {
    (*  screen3523 ) .f_default_dash_fg = (  c3525 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_screen_dash_bg1764 (    struct Screen_254 *  screen3528 ,    struct Color_123  c3530 ) {
    (*  screen3528 ) .f_default_dash_bg = (  c3530 );
    return ( Unit_8_Unit );
}

static  int32_t   cast1768 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321767 (    uint32_t  x660 ) {
    return ( (  cast1768 ) ( (  x660 ) ) );
}

struct Maybe_1773 {
    enum {
        Maybe_1773_None_t,
        Maybe_1773_Just_t,
    } tag;
    union {
        struct {
            struct Cell_256 *  field0;
        } Maybe_1773_Just_s;
    } stuff;
};

static struct Maybe_1773 Maybe_1773_Just (  struct Cell_256 *  field0 ) {
    return ( struct Maybe_1773 ) { .tag = Maybe_1773_Just_t, .stuff = { .Maybe_1773_Just_s = { .field0 = field0 } } };
};

static  struct Cell_256 *   undefined1774 (  ) {
    struct Cell_256 *  temp1775;
    return (  temp1775 );
}

static  struct Cell_256 *   or_dash_fail1772 (    struct Maybe_1773  x1726 ,    struct StrView_30  errmsg1728 ) {
    struct Maybe_1773  dref1729 = (  x1726 );
    if ( dref1729.tag == Maybe_1773_None_t ) {
        ( (  panic1153 ) ( (  errmsg1728 ) ) );
        return ( (  undefined1774 ) ( ) );
    }
    else {
        if ( dref1729.tag == Maybe_1773_Just_t ) {
            return ( dref1729 .stuff .Maybe_1773_Just_s .field0 );
        }
    }
}

static  struct Maybe_1773   get_dash_cell_dash_ptr1776 (    struct Screen_254 *  screen3544 ,    int32_t  x3546 ,    int32_t  y3548 ) {
    int32_t  w3549 = ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3544 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp142 ( (  x3546 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp142 ( (  x3546 ) , (  w3549 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1773) { .tag = Maybe_1773_None_t } );
    }
    if ( ( (  cmp142 ( (  y3548 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp142 ( (  y3548 ) , ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3544 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1773) { .tag = Maybe_1773_None_t } );
    }
    size_t  i3550 = ( (  i32_dash_size355 ) ( (  op_dash_add144 ( (  op_dash_mul1479 ( (  y3548 ) , (  w3549 ) ) ) , (  x3546 ) ) ) ) );
    return ( ( Maybe_1773_Just ) ( ( (  get_dash_ptr784 ) ( ( ( * (  screen3544 ) ) .f_current ) ,  (  i3550 ) ) ) ) );
}

static  enum Unit_8   fill_dash_default1765 (    struct Screen_254 *  screen3553 ) {
    struct RangeIter_138  temp1766 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3553 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_140  __cond1769 =  next141 (&temp1766);
        if (  __cond1769 .tag == 0 ) {
            break;
        }
        int32_t  y3555 =  __cond1769 .stuff .Maybe_140_Just_s .field0;
        struct RangeIter_138  temp1770 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3553 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_140  __cond1771 =  next141 (&temp1770);
            if (  __cond1771 .tag == 0 ) {
                break;
            }
            int32_t  x3557 =  __cond1771 .stuff .Maybe_140_Just_s .field0;
            struct Cell_256 *  cell3558 = ( (  or_dash_fail1772 ) ( ( (  get_dash_cell_dash_ptr1776 ) ( (  screen3553 ) ,  (  x3557 ) ,  (  y3555 ) ) ) ,  ( (  from_dash_string183 ) ( ( "no cell??" ) ,  ( 9 ) ) ) ) );
            (*  cell3558 ) .f_bg = ( ( * (  screen3553 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_8_Unit );
}

struct envunion1778 {
    enum Unit_8  (*fun) (  struct env252*  ,    struct Screen_254 *  ,    struct Editor_228 *  );
    struct env252 env;
};

static  int32_t   screen_dash_width1783 (    struct ScreenDims_257  sd4048 ) {
    return (  op_dash_add144 ( (  op_dash_sub149 ( ( (  sd4048 ) .f_to_dash_sx ) , ( (  sd4048 ) .f_from_dash_sx ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1784 (    struct ScreenDims_257  sd4051 ) {
    return (  op_dash_add144 ( (  op_dash_sub149 ( ( (  sd4051 ) .f_to_dash_sy ) , ( (  sd4051 ) .f_from_dash_sy ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
}

static  enum Unit_8   update_dash_screen_dash_offset1782 (    struct Pane_204 *  pane4054 ,    struct ScreenDims_257  sd4056 ) {
    struct Pos_29  cur4057 = ( ( * (  pane4054 ) ) .f_cursor );
    int32_t  cur_dash_sx4058 = ( (  pos_dash_vi1034 ) ( ( ( * (  pane4054 ) ) .f_buf ) ,  (  cur4057 ) ) );
    struct ScreenCursorOffset_206  sc_dash_off4059 = ( ( * (  pane4054 ) ) .f_sc_dash_off );
    int32_t  sw4060 = (  op_dash_sub149 ( ( (  screen_dash_width1783 ) ( (  sd4056 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  sh4061 = (  op_dash_sub149 ( ( (  screen_dash_height1784 ) ( (  sd4056 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
    int32_t  margin4062 = (  from_dash_integral56 ( 5 ) );
    int32_t  csi4063 = ( (  pos_dash_vi1034 ) ( ( ( * (  pane4054 ) ) .f_buf ) ,  (  cur4057 ) ) );
    int32_t  csx4064 = (  op_dash_sub149 ( (  csi4063 ) , ( (  sc_dash_off4059 ) .f_screen_dash_left ) ) );
    int32_t  csy4065 = (  op_dash_sub149 ( ( (  cur4057 ) .f_line ) , ( (  sc_dash_off4059 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left4066 = ( (  sc_dash_off4059 ) .f_screen_dash_left );
    if ( (  cmp142 ( (  csx4064 ) , (  margin4062 ) ) == 0 ) ) {
        nu_dash_screen_dash_left4066 = (  op_dash_sub149 ( (  csi4063 ) , (  margin4062 ) ) );
    } else {
        if ( (  cmp142 ( (  csx4064 ) , (  op_dash_sub149 ( (  sw4060 ) , (  margin4062 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left4066 = (  op_dash_add144 ( (  op_dash_sub149 ( (  csi4063 ) , (  sw4060 ) ) ) , (  margin4062 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left4067 = ( (  max1049 ) ( (  nu_dash_screen_dash_left4066 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top4068 = ( (  sc_dash_off4059 ) .f_screen_dash_top );
    if ( (  cmp142 ( (  csy4065 ) , (  margin4062 ) ) == 0 ) ) {
        nu_dash_screen_dash_top4068 = (  op_dash_sub149 ( ( (  cur4057 ) .f_line ) , (  margin4062 ) ) );
    } else {
        if ( (  cmp142 ( (  csy4065 ) , (  op_dash_sub149 ( (  sh4061 ) , (  margin4062 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top4068 = (  op_dash_add144 ( (  op_dash_sub149 ( ( (  cur4057 ) .f_line ) , (  sh4061 ) ) ) , (  margin4062 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top4069 = ( (  max1049 ) ( (  nu_dash_screen_dash_top4068 ) ,  (  from_dash_integral56 ( 0 ) ) ) );
    (*  pane4054 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_206) { .f_screen_dash_top = (  nu_dash_screen_dash_top4069 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left4067 ) } );
    return ( Unit_8_Unit );
}

struct IntStrIter_1786 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

static  struct IntStrIter_1786   into_dash_iter1788 (    struct IntStrIter_1786  self1425 ) {
    return (  self1425 );
}

struct env1792 {
    int32_t  base1210;
    ;
};

struct envunion1793 {
    int32_t  (*fun) (  struct env1792*  ,    int32_t  ,    int32_t  );
    struct env1792 env;
};

static  int32_t   reduce1791 (    struct Range_135  iterable1093 ,    int32_t  base1095 ,   struct envunion1793  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_138  it1099 = ( (  into_dash_iter139 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_140  dref1100 = ( (  next141 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_140_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_140_Just_t ) {
                struct envunion1793  temp1794 = (  fun1097 );
                x1098 = ( temp1794.fun ( &temp1794.env ,  ( dref1100 .stuff .Maybe_140_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1795 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1795);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1796;
    return (  temp1796 );
}

static  int32_t   lam1797 (   struct env1792* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1479 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1790 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1792 envinst1792 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1791 ) ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ,  ( (struct envunion1793){ .fun = (  int32_t  (*) (  struct env1792*  ,    int32_t  ,    int32_t  ) )lam1797 , .env =  envinst1792 } ) ) );
}

static  uint8_t   cast1798 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_706   next1789 (    struct IntStrIter_1786 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_706_Just ) ( ( (  from_dash_charlike314 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp142 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    int32_t  trim_dash_down1429 = ( (  pow1790 ) ( (  from_dash_integral56 ( 10 ) ) ,  (  op_dash_sub149 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    int32_t  upper1430 = (  op_dash_div1478 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    int32_t  upper_dash_mask1431 = (  op_dash_mul1479 ( (  op_dash_div1478 ( (  upper1430 ) , (  from_dash_integral56 ( 10 ) ) ) ) , (  from_dash_integral56 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast1798 ) ( (  op_dash_sub149 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub149 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8977 ) ( (  op_dash_add869 ( (  digit1432 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_706_Just ) ( (  digit_dash_char1433 ) ) );
}

static  size_t   reduce1787 (    struct IntStrIter_1786  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct IntStrIter_1786  it1099 = ( (  into_dash_iter1788 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_706  dref1100 = ( (  next1789 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_706_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_706_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_706_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1799 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1799);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp1800;
    return (  temp1800 );
}

static  size_t   lam1801 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add325 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1785 (    struct IntStrIter_1786  it1104 ) {
    return ( (  reduce1787 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1801 ) ) );
}

static  int32_t   count_dash_digits1804 (    int32_t  self1436 ) {
    if ( (  eq418 ( (  self1436 ) , (  from_dash_integral56 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp142 ( (  self1436 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div1478 ( (  self1436 ) , (  from_dash_integral56 ( 10 ) ) ) );
        digits1437 = (  op_dash_add144 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_1786   int_dash_iter1803 (    int32_t  int1440 ) {
    if ( (  cmp142 ( (  int1440 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1786) { .f_int = (  op_dash_neg736 ( (  int1440 ) ) ) , .f_len = ( (  count_dash_digits1804 ) ( (  op_dash_neg736 ( (  int1440 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1786) { .f_int = (  int1440 ) , .f_len = ( (  count_dash_digits1804 ) ( (  int1440 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1786   chars1802 (    int32_t  self1449 ) {
    return ( (  int_dash_iter1803 ) ( (  self1449 ) ) );
}

static  enum Unit_8   set_dash_screen_dash_colors1808 (    struct Screen_254 *  screen3533 ,    struct Color_123  fg3535 ,    struct Color_123  bg3537 ) {
    (*  screen3533 ) .f_default_dash_fg = (  fg3535 );
    (*  screen3533 ) .f_default_dash_bg = (  bg3537 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_colors1807 (    struct Screen_254 *  screen4072 ,    struct Colors_158  colors4074 ) {
    ( (  set_dash_screen_dash_colors1808 ) ( (  screen4072 ) ,  ( (  colors4074 ) .f_fg ) ,  ( (  colors4074 ) .f_bg ) ) );
    return ( Unit_8_Unit );
}

struct Map_1811 {
    struct IntStrIter_1786  field0;
    int32_t (*  field1 )(    struct Char_65  );
};

static struct Map_1811 Map_1811_Map (  struct IntStrIter_1786  field0 ,  int32_t (*  field1 )(    struct Char_65  ) ) {
    return ( struct Map_1811 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1811   into_dash_iter1813 (    struct Map_1811  self796 ) {
    return (  self796 );
}

static  struct Maybe_140   next1814 (    struct Map_1811 *  dref798 ) {
    struct Maybe_706  dref801 = ( (  next1789 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_706_None_t ) {
        return ( (struct Maybe_140) { .tag = Maybe_140_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_706_Just_t ) {
            return ( ( Maybe_140_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_706_Just_s .field0 ) ) ) ) );
        }
    }
}

static  int32_t   reduce1812 (    struct Map_1811  iterable1093 ,    int32_t  base1095 ,    int32_t (*  fun1097 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1098 = (  base1095 );
    struct Map_1811  it1099 = ( (  into_dash_iter1813 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_140  dref1100 = ( (  next1814 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_140_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_140_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_140_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1815 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1815);
    exit ( 1 );
    ( Unit_8_Unit );
    int32_t  temp1816;
    return (  temp1816 );
}

static  int32_t   lam1817 (    int32_t  v1112 ,    int32_t  s1114 ) {
    return (  op_dash_add144 ( (  v1112 ) , (  s1114 ) ) );
}

static  int32_t   sum1810 (    struct Map_1811  it1110 ) {
    return ( (  reduce1812 ) ( (  it1110 ) ,  (  from_dash_integral56 ( 0 ) ) ,  (  lam1817 ) ) );
}

static  struct Map_1811   map1818 (    struct IntStrIter_1786  iterable805 ,    int32_t (*  fun807 )(    struct Char_65  ) ) {
    struct IntStrIter_1786  it808 = ( (  into_dash_iter1788 ) ( (  iterable805 ) ) );
    return ( ( Map_1811_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  enum Unit_8   put_dash_char1822 (    struct Screen_254 *  screen3561 ,    struct Char_65  c3563 ,    int32_t  x3565 ,    int32_t  y3567 ) {
    int32_t  w3568 = ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3561 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp142 ( (  x3565 ) , (  w3568 ) ) != 0 ) || (  cmp142 ( (  y3567 ) , ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3561 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp142 ( (  x3565 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) || (  cmp142 ( (  y3567 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    size_t  i3569 = ( (  i32_dash_size355 ) ( (  op_dash_add144 ( (  op_dash_mul1479 ( (  y3567 ) , (  w3568 ) ) ) , (  x3565 ) ) ) ) );
    struct Color_123  fg3570 = ( ( * (  screen3561 ) ) .f_default_dash_fg );
    struct Color_123  bg3571 = ( ( * (  screen3561 ) ) .f_default_dash_bg );
    struct Char_65  c3572 = (  c3563 );
    int32_t  char_dash_width3573 = ( (  wcwidth1050 ) ( (  c3572 ) ) );
    if ( ( (  cmp142 ( (  x3565 ) , (  from_dash_integral56 ( 0 ) ) ) == 2 ) && (  cmp142 ( ( (  elem_dash_get787 ( ( ( * (  screen3561 ) ) .f_current ) , (  op_dash_sub403 ( (  i3569 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) .f_char_dash_width ) , (  from_dash_integral56 ( 1 ) ) ) == 2 ) ) ) {
        struct Cell_256  pc3574 = (  elem_dash_get787 ( ( ( * (  screen3561 ) ) .f_current ) , (  op_dash_sub403 ( (  i3569 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        ( (  set783 ) ( ( ( * (  screen3561 ) ) .f_current ) ,  (  op_dash_sub403 ( (  i3569 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (struct Cell_256) { .f_c = ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (  pc3574 ) .f_fg ) , .f_bg = ( (  pc3574 ) .f_bg ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    ( (  set783 ) ( ( ( * (  screen3561 ) ) .f_current ) ,  (  i3569 ) ,  ( (struct Cell_256) { .f_c = (  c3572 ) , .f_fg = (  fg3570 ) , .f_bg = (  bg3571 ) , .f_char_dash_width = (  char_dash_width3573 ) } ) ) );
    struct RangeIter_138  temp1823 =  into_dash_iter139 ( ( (  to148 ) ( (  op_dash_add144 ( (  x3565 ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min569 ) ( (  op_dash_sub149 ( (  op_dash_add144 ( (  x3565 ) , (  char_dash_width3573 ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  (  w3568 ) ) ) ) ) );
    while (true) {
        struct Maybe_140  __cond1824 =  next141 (&temp1823);
        if (  __cond1824 .tag == 0 ) {
            break;
        }
        int32_t  xx3576 =  __cond1824 .stuff .Maybe_140_Just_s .field0;
        size_t  i3577 = ( (  i32_dash_size355 ) ( (  op_dash_add144 ( (  op_dash_mul1479 ( (  y3567 ) , (  w3568 ) ) ) , (  xx3576 ) ) ) ) );
        ( (  set783 ) ( ( ( * (  screen3561 ) ) .f_current ) ,  (  i3577 ) ,  ( (struct Cell_256) { .f_c = ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3570 ) , .f_bg = (  bg3571 ) , .f_char_dash_width = (  from_dash_integral56 ( 1 ) ) } ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str1819 (    struct Screen_254 *  screen3580 ,    int32_t  s3582 ,    int32_t  x3584 ,    int32_t  y3586 ) {
    int32_t  w3587 = ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3580 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp142 ( (  y3586 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp142 ( (  y3586 ) , ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3580 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3588 = (  op_dash_add144 ( (  op_dash_mul1479 ( (  y3586 ) , (  w3587 ) ) ) , (  x3584 ) ) );
    int32_t  x3589 = ( (  min569 ) ( (  x3584 ) ,  (  w3587 ) ) );
    size_t  max_dash_len3590 = ( (  i32_dash_size355 ) ( (  op_dash_sub149 ( (  w3587 ) , (  x3589 ) ) ) ) );
    int32_t  xx3591 = (  from_dash_integral56 ( 0 ) );
    struct IntStrIter_1786  temp1820 =  into_dash_iter1788 ( ( (  chars1802 ) ( (  s3582 ) ) ) );
    while (true) {
        struct Maybe_706  __cond1821 =  next1789 (&temp1820);
        if (  __cond1821 .tag == 0 ) {
            break;
        }
        struct Char_65  c3593 =  __cond1821 .stuff .Maybe_706_Just_s .field0;
        ( (  put_dash_char1822 ) ( (  screen3580 ) ,  (  c3593 ) ,  (  op_dash_add144 ( (  x3589 ) , (  xx3591 ) ) ) ,  (  y3586 ) ) );
        xx3591 = (  op_dash_add144 ( (  xx3591 ) , ( (  rendered_dash_wcwidth1048 ) ( (  c3593 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   draw_dash_str_dash_right1809 (    struct Screen_254 *  screen3596 ,    int32_t  s3598 ,    int32_t  x3600 ,    int32_t  y3602 ) {
    int32_t  slen3603 = ( (  sum1810 ) ( ( (  map1818 ) ( ( (  chars1802 ) ( (  s3598 ) ) ) ,  (  rendered_dash_wcwidth1048 ) ) ) ) );
    int32_t  w3604 = ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3596 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3605 = (  op_dash_sub149 ( (  op_dash_sub149 ( (  w3604 ) , (  x3600 ) ) ) , (  slen3603 ) ) );
    ( (  draw_dash_str1819 ) ( (  screen3596 ) ,  (  s3598 ) ,  (  x3605 ) ,  (  y3602 ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_1826 {
    struct StrView_30  field0;
    int32_t  field1;
};

static struct StrConcat_1826 StrConcat_1826_StrConcat (  struct StrView_30  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1826 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1829 {
    struct StrView_30  field0;
    struct StrConcat_1826  field1;
};

static struct StrConcat_1829 StrConcat_1829_StrConcat (  struct StrView_30  field0 ,  struct StrConcat_1826  field1 ) {
    return ( struct StrConcat_1829 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1828 {
    struct StrConcat_1829  field0;
    struct Char_65  field1;
};

static struct StrConcat_1828 StrConcat_1828_StrConcat (  struct StrConcat_1829  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_1828 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_8   print_dash_str1831 (    struct StrConcat_1826  self1509 ) {
    struct StrConcat_1826  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str300 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1830 (    struct StrConcat_1829  self1509 ) {
    struct StrConcat_1829  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str1831 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   print_dash_str1827 (    struct StrConcat_1828  self1509 ) {
    struct StrConcat_1828  dref1510 = (  self1509 );
    if ( true ) {
        ( (  print_dash_str1830 ) ( ( dref1510 .field0 ) ) );
        ( (  print_dash_str301 ) ( ( dref1510 .field1 ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   assert1825 (    bool  cond1719 ,    struct StrConcat_1826  msg1721 ) {
    if ( ( ! (  cond1719 ) ) ) {
        ( (  print_dash_str1827 ) ( ( ( StrConcat_1828_StrConcat ) ( ( ( StrConcat_1829_StrConcat ) ( ( (  from_dash_string183 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1721 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct AppendIter_1833 {
    struct StrViewIter_703  f_it;
    struct Char_65  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1833   into_dash_iter1834 (    struct AppendIter_1833  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1833   append1835 (    struct StrViewIter_703  it1006 ,    struct Char_65  e1008 ) {
    return ( (struct AppendIter_1833) { .f_it = ( (  into_dash_iter705 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_706   next1837 (    struct AppendIter_1833 *  self1022 ) {
    struct Maybe_706  dref1023 = ( (  next707 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1023 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_706_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_706_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
        }
    }
}

static  bool   between1839 (    struct Pos_29  c1337 ,    struct Pos_29  l1339 ,    struct Pos_29  r1341 ) {
    struct Pos_29  from1342 = ( (  min414 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_29  to1343 = ( (  max416 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp415 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp415 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1838 (    struct Pane_204 *  pane4040 ,    struct Pos_29  pos4042 ) {
    return ( {  struct Maybe_32  dref4043 = ( ( * (  pane4040 ) ) .f_sel ) ; dref4043.tag == Maybe_32_Just_t ? ( (  between1839 ) ( (  pos4042 ) ,  ( ( * (  pane4040 ) ) .f_cursor ) ,  ( dref4043 .stuff .Maybe_32_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct env1841 {
    ;
    struct Theme_157 *  theme4083;
    struct Screen_254 *  screen4077;
    ;
};

struct envunion1842 {
    enum Unit_8  (*fun) (  struct env1841*  ,    enum HighlightType_18  );
    struct env1841 env;
};

static  enum Unit_8   if_dash_just1840 (    struct Maybe_187  x1291 ,   struct envunion1842  fun1293 ) {
    struct Maybe_187  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_187_Just_t ) {
        struct envunion1842  temp1843 = (  fun1293 );
        ( temp1843.fun ( &temp1843.env ,  ( dref1294 .stuff .Maybe_187_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_187_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   trim1848 (    struct List_15 *  l2116 ,    size_t  new_dash_count2118 ) {
    (*  l2116 ) .f_count = ( (  min430 ) ( (  new_dash_count2118 ) ,  ( ( * (  l2116 ) ) .f_count ) ) );
    return ( Unit_8_Unit );
}

static  struct Maybe_706   head1851 (    struct Scanner_893 *  it1142 ) {
    struct Scanner_893  temp1852 = ( (  into_dash_iter909 ) ( (  it1142 ) ) );
    return ( (  next915 ) ( ( &temp1852 ) ) );
}

static  bool   null1850 (    struct Scanner_893 *  it1151 ) {
    struct Maybe_706  dref1152 = ( (  head1851 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_706_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_706   peek1853 (    struct Scanner_893 *  sc3212 ) {
    return ( (  head1284 ) ( ( ( * (  sc3212 ) ) .f_s ) ) );
}

static  bool   eq1855 (    struct Maybe_706  l141 ,    struct Maybe_706  r143 ) {
    struct Tuple2_1723  dref144 = ( ( Tuple2_1723_Tuple2 ) ( (  l141 ) ,  (  r143 ) ) );
    if ( dref144 .field0.tag == Maybe_706_None_t && dref144 .field1.tag == Maybe_706_None_t ) {
        return ( true );
    }
    else {
        if ( dref144 .field0.tag == Maybe_706_Just_t && dref144 .field1.tag == Maybe_706_Just_t ) {
            return (  eq502 ( ( dref144 .field0 .stuff .Maybe_706_Just_s .field0 ) , ( dref144 .field1 .stuff .Maybe_706_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

static  bool   try_dash_char1854 (    struct Scanner_893 *  sc3215 ,    struct Char_65  char3217 ) {
    if ( (  eq1855 ( ( (  peek1853 ) ( (  sc3215 ) ) ) , ( ( Maybe_706_Just ) ( (  char3217 ) ) ) ) ) ) {
        ( (  drop_prime_918 ) ( (  sc3215 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        return ( true );
    }
    return ( false );
}

static  bool   char_dash_satisfies1857 (    struct Scanner_893 *  sc3220 ,    bool (*  condition3222 )(    struct Char_65  ) ) {
    struct Maybe_706  dref3223 = ( (  head1284 ) ( ( ( * (  sc3220 ) ) .f_s ) ) );
    if ( dref3223.tag == Maybe_706_Just_t ) {
        if ( ( (  condition3222 ) ( ( dref3223 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_918 ) ( (  sc3220 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3223.tag == Maybe_706_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1856 (    struct Scanner_893 *  sc3238 ,    bool (*  condition3240 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1857 ) ( (  sc3238 ) ,  (  condition3240 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1858 (    struct Char_65  c3895 ) {
    return ( !  eq502 ( (  c3895 ) , ( (  from_dash_charlike314 ) ( ( "]" ) ,  ( 1 ) ) ) ) );
}

struct TypeSize_1865 {
    size_t  f_size;
};

static  struct TypeSize_1865   get_dash_typesize1864 (  ) {
    struct Highlight_17  temp1866;
    return ( (struct TypeSize_1865) { .f_size = ( sizeof( ( (  temp1866 ) ) ) ) } );
}

static  struct Highlight_17 *   cast_dash_ptr1867 (    void *  p359 ) {
    return ( (struct Highlight_17 * ) (  p359 ) );
}

static  struct Slice_16   allocate1863 (    enum CAllocator_10  dref1954 ,    size_t  count1956 ) {
    if (!(  dref1954 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1957 = ( ( ( (  get_dash_typesize1864 ) ( ) ) ) .f_size );
    struct Highlight_17 *  ptr1958 = ( (  cast_dash_ptr1867 ) ( ( ( malloc ) ( (  op_dash_mul338 ( (  size1957 ) , (  count1956 ) ) ) ) ) ) );
    return ( (struct Slice_16) { .f_ptr = (  ptr1958 ) , .f_count = (  count1956 ) } );
}

struct env1868 {
    struct Slice_16  new_dash_slice2043;
    ;
    ;
};

struct Tuple2_1870 {
    struct Highlight_17  field0;
    int32_t  field1;
};

static struct Tuple2_1870 Tuple2_1870_Tuple2 (  struct Highlight_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1870 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1869 {
    enum Unit_8  (*fun) (  struct env1868*  ,    struct Tuple2_1870  );
    struct env1868 env;
};

static  struct Highlight_17 *   offset_dash_ptr1874 (    struct Highlight_17 *  x338 ,    int64_t  count340 ) {
    struct Highlight_17  temp1875;
    return ( (struct Highlight_17 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1875 ) ) ) ) ) ) ) ) );
}

static  struct Highlight_17 *   get_dash_ptr1873 (    struct Slice_16  slice1758 ,    size_t  i1760 ) {
    if ( ( (  cmp283 ( (  i1760 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic345 ) ( ( ( StrConcat_346_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1760 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1758 ) .f_count ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Highlight_17 *  elem_dash_ptr1761 = ( (  offset_dash_ptr1874 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  i1760 ) ) ) ) );
    return (  elem_dash_ptr1761 );
}

static  enum Unit_8   set1872 (    struct Slice_16  slice1775 ,    size_t  i1777 ,    struct Highlight_17  x1779 ) {
    struct Highlight_17 *  ep1780 = ( (  get_dash_ptr1873 ) ( (  slice1775 ) ,  (  i1777 ) ) );
    (*  ep1780 ) = (  x1779 );
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam1871 (   struct env1868* env ,    struct Tuple2_1870  dref2044 ) {
    return ( (  set1872 ) ( ( env->new_dash_slice2043 ) ,  ( (  i32_dash_size355 ) ( ( dref2044 .field1 ) ) ) ,  ( dref2044 .field0 ) ) );
}

struct SliceIter_1878 {
    struct Slice_16  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1877 {
    struct SliceIter_1878  f_left_dash_it;
    struct FromIter_359  f_right_dash_it;
};

static  struct Zip_1877   into_dash_iter1880 (    struct Zip_1877  self911 ) {
    return (  self911 );
}

struct Maybe_1881 {
    enum {
        Maybe_1881_None_t,
        Maybe_1881_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1870  field0;
        } Maybe_1881_Just_s;
    } stuff;
};

static struct Maybe_1881 Maybe_1881_Just (  struct Tuple2_1870  field0 ) {
    return ( struct Maybe_1881 ) { .tag = Maybe_1881_Just_t, .stuff = { .Maybe_1881_Just_s = { .field0 = field0 } } };
};

struct Maybe_1883 {
    enum {
        Maybe_1883_None_t,
        Maybe_1883_Just_t,
    } tag;
    union {
        struct {
            struct Highlight_17  field0;
        } Maybe_1883_Just_s;
    } stuff;
};

static struct Maybe_1883 Maybe_1883_Just (  struct Highlight_17  field0 ) {
    return ( struct Maybe_1883 ) { .tag = Maybe_1883_Just_t, .stuff = { .Maybe_1883_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1883   next1884 (    struct SliceIter_1878 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp283 ( (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1883) { .tag = Maybe_1883_None_t } );
    }
    struct Highlight_17  elem1831 = ( * ( (  offset_dash_ptr1874 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1883_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_1881   next1882 (    struct Zip_1877 *  self914 ) {
    struct Zip_1877  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1883  dref916 = ( (  next1884 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1883_None_t ) {
            return ( (struct Maybe_1881) { .tag = Maybe_1881_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1883_Just_t ) {
                struct Maybe_140  dref918 = ( (  next365 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_140_None_t ) {
                    return ( (struct Maybe_1881) { .tag = Maybe_1881_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_140_Just_t ) {
                        ( (  next1884 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next365 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1881_Just ) ( ( ( Tuple2_1870_Tuple2 ) ( ( dref916 .stuff .Maybe_1883_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each1876 (    struct Zip_1877  iterable1074 ,   struct envunion1869  fun1076 ) {
    struct Zip_1877  temp1879 = ( (  into_dash_iter1880 ) ( (  iterable1074 ) ) );
    struct Zip_1877 *  it1077 = ( &temp1879 );
    while ( ( true ) ) {
        struct Maybe_1881  dref1078 = ( (  next1882 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1881_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1881_Just_t ) {
                struct envunion1869  temp1885 = (  fun1076 );
                ( temp1885.fun ( &temp1885.env ,  ( dref1078 .stuff .Maybe_1881_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct SliceIter_1878   into_dash_iter1887 (    struct Slice_16  self1823 ) {
    return ( (struct SliceIter_1878) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1877   zip1886 (    struct Slice_16  left922 ,    struct FromIter_359  right924 ) {
    struct SliceIter_1878  left_dash_it925 = ( (  into_dash_iter1887 ) ( (  left922 ) ) );
    struct FromIter_359  right_dash_it926 = ( (  into_dash_iter369 ) ( (  right924 ) ) );
    return ( (struct Zip_1877) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1889 (    struct Highlight_17 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free1888 (    enum CAllocator_10  dref1960 ,    struct Slice_16  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1889 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   grow_dash_if_dash_full1862 (   struct env5* env ,    struct List_15 *  list2042 ) {
    if ( (  eq332 ( ( ( * (  list2042 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2042 ) .f_elements = ( (  allocate1863 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( env->starting_dash_size2037 ) ) );
    } else {
        if ( (  eq332 ( ( ( * (  list2042 ) ) .f_count ) , ( ( ( * (  list2042 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_16  new_dash_slice2043 = ( (  allocate1863 ) ( ( ( * (  list2042 ) ) .f_al ) ,  (  op_dash_mul338 ( ( ( * (  list2042 ) ) .f_count ) , ( env->growth_dash_factor2038 ) ) ) ) );
            struct env1868 envinst1868 = {
                .new_dash_slice2043 =  new_dash_slice2043 ,
            };
            struct envunion1869  fun2047 = ( (struct envunion1869){ .fun = (  enum Unit_8  (*) (  struct env1868*  ,    struct Tuple2_1870  ) )lam1871 , .env =  envinst1868 } );
            ( (  for_dash_each1876 ) ( ( (  zip1886 ) ( ( ( * (  list2042 ) ) .f_elements ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  (  fun2047 ) ) );
            ( (  free1888 ) ( ( ( * (  list2042 ) ) .f_al ) ,  ( ( * (  list2042 ) ) .f_elements ) ) );
            (*  list2042 ) .f_elements = (  new_dash_slice2043 );
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   add1860 (   struct env35* env ,    struct List_15 *  list2050 ,    struct Highlight_17  elem2052 ) {
    struct envunion36  temp1861 = ( (struct envunion36){ .fun = (  enum Unit_8  (*) (  struct env5*  ,    struct List_15 *  ) )grow_dash_if_dash_full1862 , .env =  env->envinst5 } );
    ( temp1861.fun ( &temp1861.env ,  (  list2050 ) ) );
    ( (  set1872 ) ( ( ( * (  list2050 ) ) .f_elements ) ,  ( ( * (  list2050 ) ) .f_count ) ,  (  elem2052 ) ) );
    (*  list2050 ) .f_count = (  op_dash_add325 ( ( ( * (  list2050 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_8_Unit );
}

struct envunion1891 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1893 (    struct Scanner_893 *  sc3220 ,    bool (*  condition3222 )(    struct Char_65  ) ) {
    struct Maybe_706  dref3223 = ( (  head1284 ) ( ( ( * (  sc3220 ) ) .f_s ) ) );
    if ( dref3223.tag == Maybe_706_Just_t ) {
        if ( ( (  condition3222 ) ( ( dref3223 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_918 ) ( (  sc3220 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3223.tag == Maybe_706_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1892 (    struct Scanner_893 *  sc3238 ,    bool (*  condition3240 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1893 ) ( (  sc3238 ) ,  (  condition3240 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1894 (    struct Char_65  c3898 ) {
    return ( ( !  eq502 ( (  c3898 ) , ( (  from_dash_charlike314 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) && ( !  eq502 ( (  c3898 ) , ( (  from_dash_charlike314 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion1896 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1897 (    struct Scanner_893 *  sc3220 ,    bool (*  condition3222 )(    struct Char_65  ) ) {
    struct Maybe_706  dref3223 = ( (  head1284 ) ( ( ( * (  sc3220 ) ) .f_s ) ) );
    if ( dref3223.tag == Maybe_706_Just_t ) {
        if ( ( (  condition3222 ) ( ( dref3223 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_918 ) ( (  sc3220 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3223.tag == Maybe_706_None_t ) {
            return ( false );
        }
    }
}

static  bool   char_dash_satisfies1899 (    struct Scanner_893 *  sc3220 ,    bool (*  condition3222 )(    struct Char_65  ) ) {
    struct Maybe_706  dref3223 = ( (  head1284 ) ( ( ( * (  sc3220 ) ) .f_s ) ) );
    if ( dref3223.tag == Maybe_706_Just_t ) {
        if ( ( (  condition3222 ) ( ( dref3223 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_918 ) ( (  sc3220 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3223.tag == Maybe_706_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1898 (    struct Scanner_893 *  sc3238 ,    bool (*  condition3240 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1899 ) ( (  sc3238 ) ,  (  condition3240 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1900 (    struct Char_65  c3901 ) {
    return ( (  eq1271 ( ( (  char_dash_type1274 ) ( (  c3901 ) ) ) , ( CharType_1272_CharWord ) ) ) || (  eq502 ( (  c3901 ) , ( (  from_dash_charlike314 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion1902 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_1904 {
    struct StrView_30 _arr [2];
};

struct env1905 {
    struct Scanner_893 *  sc3891;
    ;
};

struct envunion1906 {
    bool  (*fun) (  struct env1905*  ,    struct StrView_30  );
    struct env1905 env;
};

struct env1908 {
    struct envunion1906  fun1135;
};

struct envunion1909 {
    bool  (*fun) (  struct env1908*  ,    struct StrView_30  ,    bool  );
    struct env1908 env;
};

struct ArrayIter_1910 {
    struct Array_1904  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1910   into_dash_iter1911 (    struct Array_1904  self2323 ) {
    return ( (struct ArrayIter_1910) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_30 *   cast_dash_ptr1915 (    struct Array_1904 *  p359 ) {
    return ( (struct StrView_30 * ) (  p359 ) );
}

static  struct StrView_30 *   offset_dash_ptr1916 (    struct StrView_30 *  x338 ,    int64_t  count340 ) {
    struct StrView_30  temp1917;
    return ( (struct StrView_30 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1917 ) ) ) ) ) ) ) ) );
}

static  struct StrView_30 *   get_dash_ptr1914 (    struct Array_1904 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp283 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2254 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic286 ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_30 *  p2255 = ( ( (  cast_dash_ptr1915 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1916 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_30   get1913 (    struct Array_1904 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1914 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_229   next1912 (    struct ArrayIter_1910 *  self2330 ) {
    if ( (  cmp283 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_229) { .tag = Maybe_229_None_t } );
    }
    struct StrView_30  e2332 = ( (  get1913 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add325 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_229_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1907 (    struct Array_1904  iterable1093 ,    bool  base1095 ,   struct envunion1909  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1910  it1099 = ( (  into_dash_iter1911 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_229  dref1100 = ( (  next1912 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_229_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_229_Just_t ) {
                struct envunion1909  temp1918 = (  fun1097 );
                x1098 = ( temp1918.fun ( &temp1918.env ,  ( dref1100 .stuff .Maybe_229_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1919 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1919);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1920;
    return (  temp1920 );
}

static  bool   lam1921 (   struct env1908* env ,    struct StrView_30  e1137 ,    bool  x1139 ) {
    struct envunion1906  temp1922 = ( env->fun1135 );
    return ( ( temp1922.fun ( &temp1922.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1903 (    struct Array_1904  it1133 ,   struct envunion1906  fun1135 ) {
    struct env1908 envinst1908 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1907 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1909){ .fun = (  bool  (*) (  struct env1908*  ,    struct StrView_30  ,    bool  ) )lam1921 , .env =  envinst1908 } ) ) );
}

static  struct Array_1904   from_dash_listlike1923 (    struct Array_1904  self330 ) {
    return (  self330 );
}

static  struct StrViewIter_703   own1928 (    struct StrViewIter_703  x1251 ) {
    return (  x1251 );
}

static  bool   matches_dash_str1925 (    struct Scanner_893 *  sc3227 ,    struct StrView_30  s3229 ) {
    size_t  skip3230 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_703  temp1926 = ( (  chars708 ) ( (  s3229 ) ) );
    struct StrViewIter_703 *  ss3231 = ( &temp1926 );
    struct StrViewIter_703  temp1927 = ( (  own1928 ) ( ( ( * (  sc3227 ) ) .f_s ) ) );
    struct StrViewIter_703 *  sccp3232 = ( &temp1927 );
    while ( ( true ) ) {
        struct Tuple2_1723  dref3233 = ( ( Tuple2_1723_Tuple2 ) ( ( (  next707 ) ( (  sccp3232 ) ) ) ,  ( (  next707 ) ( (  ss3231 ) ) ) ) );
        if ( dref3233 .field1.tag == Maybe_706_None_t ) {
            ( (  drop_prime_918 ) ( (  sc3227 ) ,  (  skip3230 ) ) );
            return ( true );
        }
        else {
            if ( dref3233 .field0.tag == Maybe_706_Just_t && dref3233 .field1.tag == Maybe_706_Just_t ) {
                if ( ( !  eq502 ( ( dref3233 .field0 .stuff .Maybe_706_Just_s .field0 ) , ( dref3233 .field1 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
                    return ( false );
                }
                skip3230 = (  op_dash_add325 ( (  skip3230 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  bool   lam1924 (   struct env1905* env ,    struct StrView_30  sym3904 ) {
    return ( (  matches_dash_str1925 ) ( ( env->sc3891 ) ,  (  sym3904 ) ) );
}

struct envunion1930 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct Array_1932 {
    struct StrView_30 _arr [10];
};

struct env1933 {
    struct Scanner_893 *  sc3891;
    ;
};

struct envunion1934 {
    bool  (*fun) (  struct env1933*  ,    struct StrView_30  );
    struct env1933 env;
};

struct env1936 {
    struct envunion1934  fun1135;
};

struct envunion1937 {
    bool  (*fun) (  struct env1936*  ,    struct StrView_30  ,    bool  );
    struct env1936 env;
};

struct ArrayIter_1938 {
    struct Array_1932  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1938   into_dash_iter1939 (    struct Array_1932  self2323 ) {
    return ( (struct ArrayIter_1938) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_30 *   cast_dash_ptr1943 (    struct Array_1932 *  p359 ) {
    return ( (struct StrView_30 * ) (  p359 ) );
}

static  struct StrView_30 *   get_dash_ptr1942 (    struct Array_1932 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp283 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2254 ) , ( (size_t ) ( 10 ) ) ) != 0 ) ) ) {
        ( (  panic286 ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 10 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_30 *  p2255 = ( ( (  cast_dash_ptr1943 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1916 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_30   get1941 (    struct Array_1932 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1942 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_229   next1940 (    struct ArrayIter_1938 *  self2330 ) {
    if ( (  cmp283 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 10 ) ) ) != 0 ) ) {
        return ( (struct Maybe_229) { .tag = Maybe_229_None_t } );
    }
    struct StrView_30  e2332 = ( (  get1941 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add325 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_229_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1935 (    struct Array_1932  iterable1093 ,    bool  base1095 ,   struct envunion1937  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1938  it1099 = ( (  into_dash_iter1939 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_229  dref1100 = ( (  next1940 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_229_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_229_Just_t ) {
                struct envunion1937  temp1944 = (  fun1097 );
                x1098 = ( temp1944.fun ( &temp1944.env ,  ( dref1100 .stuff .Maybe_229_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1945 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1945);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1946;
    return (  temp1946 );
}

static  bool   lam1947 (   struct env1936* env ,    struct StrView_30  e1137 ,    bool  x1139 ) {
    struct envunion1934  temp1948 = ( env->fun1135 );
    return ( ( temp1948.fun ( &temp1948.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1931 (    struct Array_1932  it1133 ,   struct envunion1934  fun1135 ) {
    struct env1936 envinst1936 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1935 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1937){ .fun = (  bool  (*) (  struct env1936*  ,    struct StrView_30  ,    bool  ) )lam1947 , .env =  envinst1936 } ) ) );
}

static  struct Array_1932   from_dash_listlike1949 (    struct Array_1932  self330 ) {
    return (  self330 );
}

static  bool   lam1950 (   struct env1933* env ,    struct StrView_30  sym3908 ) {
    return ( (  matches_dash_str1925 ) ( ( env->sc3891 ) ,  (  sym3908 ) ) );
}

struct envunion1952 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies1954 (    struct Scanner_893 *  sc3220 ,    bool (*  condition3222 )(    struct Char_65  ) ) {
    struct Maybe_706  dref3223 = ( (  head1284 ) ( ( ( * (  sc3220 ) ) .f_s ) ) );
    if ( dref3223.tag == Maybe_706_Just_t ) {
        if ( ( (  condition3222 ) ( ( dref3223 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_918 ) ( (  sc3220 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3223.tag == Maybe_706_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while1953 (    struct Scanner_893 *  sc3238 ,    bool (*  condition3240 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1954 ) ( (  sc3238 ) ,  (  condition3240 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   lam1955 (    struct Char_65  c3912 ) {
    return ( (  eq1271 ( ( (  char_dash_type1274 ) ( (  c3912 ) ) ) , ( CharType_1272_CharWord ) ) ) || (  eq502 ( (  c3912 ) , ( (  from_dash_charlike314 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   maybe1956 (    struct Maybe_706  x1282 ,    bool (*  fun1284 )(    struct Char_65  ) ,    bool  default1286 ) {
    return ( {  struct Maybe_706  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_706_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_706_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  bool   is_dash_upper1957 (    struct Char_65  c2407 ) {
    return ( (  eq332 ( ( (  c2407 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1277 ) ( (  c2407 ) ,  ( (  from_dash_charlike314 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

struct Array_1958 {
    struct StrView_30 _arr [5];
};

static  struct Array_1958   from_dash_listlike1959 (    struct Array_1958  self330 ) {
    return (  self330 );
}

struct Array_1960 {
    struct StrView_30 _arr [15];
};

static  struct Array_1960   from_dash_listlike1961 (    struct Array_1960  self330 ) {
    return (  self330 );
}

struct env1963 {
    ;
    struct StrView_30  ident3916;
};

struct envunion1964 {
    bool  (*fun) (  struct env1963*  ,    struct StrView_30  );
    struct env1963 env;
};

struct env1966 {
    struct envunion1964  fun1135;
};

struct envunion1967 {
    bool  (*fun) (  struct env1966*  ,    struct StrView_30  ,    bool  );
    struct env1966 env;
};

struct ArrayIter_1968 {
    struct Array_1958  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1968   into_dash_iter1969 (    struct Array_1958  self2323 ) {
    return ( (struct ArrayIter_1968) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_30 *   cast_dash_ptr1973 (    struct Array_1958 *  p359 ) {
    return ( (struct StrView_30 * ) (  p359 ) );
}

static  struct StrView_30 *   get_dash_ptr1972 (    struct Array_1958 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp283 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2254 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic286 ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_30 *  p2255 = ( ( (  cast_dash_ptr1973 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1916 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_30   get1971 (    struct Array_1958 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1972 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_229   next1970 (    struct ArrayIter_1968 *  self2330 ) {
    if ( (  cmp283 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_229) { .tag = Maybe_229_None_t } );
    }
    struct StrView_30  e2332 = ( (  get1971 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add325 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_229_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1965 (    struct Array_1958  iterable1093 ,    bool  base1095 ,   struct envunion1967  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1968  it1099 = ( (  into_dash_iter1969 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_229  dref1100 = ( (  next1970 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_229_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_229_Just_t ) {
                struct envunion1967  temp1974 = (  fun1097 );
                x1098 = ( temp1974.fun ( &temp1974.env ,  ( dref1100 .stuff .Maybe_229_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1975 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1975);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1976;
    return (  temp1976 );
}

static  bool   lam1977 (   struct env1966* env ,    struct StrView_30  e1137 ,    bool  x1139 ) {
    struct envunion1964  temp1978 = ( env->fun1135 );
    return ( ( temp1978.fun ( &temp1978.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1962 (    struct Array_1958  it1133 ,   struct envunion1964  fun1135 ) {
    struct env1966 envinst1966 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1965 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1967){ .fun = (  bool  (*) (  struct env1966*  ,    struct StrView_30  ,    bool  ) )lam1977 , .env =  envinst1966 } ) ) );
}

static  bool   lam1979 (   struct env1963* env ,    struct StrView_30  kw3920 ) {
    return (  eq1622 ( (  kw3920 ) , ( env->ident3916 ) ) );
}

struct env1981 {
    ;
    struct StrView_30  ident3916;
};

struct envunion1982 {
    bool  (*fun) (  struct env1981*  ,    struct StrView_30  );
    struct env1981 env;
};

struct env1984 {
    struct envunion1982  fun1135;
};

struct envunion1985 {
    bool  (*fun) (  struct env1984*  ,    struct StrView_30  ,    bool  );
    struct env1984 env;
};

struct ArrayIter_1986 {
    struct Array_1960  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_1986   into_dash_iter1987 (    struct Array_1960  self2323 ) {
    return ( (struct ArrayIter_1986) { .f_backing = (  self2323 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrView_30 *   cast_dash_ptr1991 (    struct Array_1960 *  p359 ) {
    return ( (struct StrView_30 * ) (  p359 ) );
}

static  struct StrView_30 *   get_dash_ptr1990 (    struct Array_1960 *  arr2251 ,    size_t  i2254 ) {
    if ( ( (  cmp283 ( (  i2254 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp283 ( (  i2254 ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) ) {
        ( (  panic286 ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2254 ) ) ) ,  ( (  from_dash_string183 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 15 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct StrView_30 *  p2255 = ( ( (  cast_dash_ptr1991 ) ( (  arr2251 ) ) ) );
    return ( (  offset_dash_ptr1916 ) ( (  p2255 ) ,  ( (int64_t ) (  i2254 ) ) ) );
}

static  struct StrView_30   get1989 (    struct Array_1960 *  arr2258 ,    size_t  i2261 ) {
    return ( * ( (  get_dash_ptr1990 ) ( (  arr2258 ) ,  (  i2261 ) ) ) );
}

static  struct Maybe_229   next1988 (    struct ArrayIter_1986 *  self2330 ) {
    if ( (  cmp283 ( ( ( * (  self2330 ) ) .f_cur ) , ( (size_t ) ( 15 ) ) ) != 0 ) ) {
        return ( (struct Maybe_229) { .tag = Maybe_229_None_t } );
    }
    struct StrView_30  e2332 = ( (  get1989 ) ( ( & ( ( * (  self2330 ) ) .f_backing ) ) ,  ( ( * (  self2330 ) ) .f_cur ) ) );
    (*  self2330 ) .f_cur = (  op_dash_add325 ( ( ( * (  self2330 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_229_Just ) ( (  e2332 ) ) );
}

static  bool   reduce1983 (    struct Array_1960  iterable1093 ,    bool  base1095 ,   struct envunion1985  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct ArrayIter_1986  it1099 = ( (  into_dash_iter1987 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_229  dref1100 = ( (  next1988 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_229_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_229_Just_t ) {
                struct envunion1985  temp1992 = (  fun1097 );
                x1098 = ( temp1992.fun ( &temp1992.env ,  ( dref1100 .stuff .Maybe_229_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1993 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1993);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp1994;
    return (  temp1994 );
}

static  bool   lam1995 (   struct env1984* env ,    struct StrView_30  e1137 ,    bool  x1139 ) {
    struct envunion1982  temp1996 = ( env->fun1135 );
    return ( ( temp1996.fun ( &temp1996.env ,  (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1980 (    struct Array_1960  it1133 ,   struct envunion1982  fun1135 ) {
    struct env1984 envinst1984 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1983 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1985){ .fun = (  bool  (*) (  struct env1984*  ,    struct StrView_30  ,    bool  ) )lam1995 , .env =  envinst1984 } ) ) );
}

static  bool   lam1997 (   struct env1981* env ,    struct StrView_30  kw3922 ) {
    return (  eq1622 ( (  kw3922 ) , ( env->ident3916 ) ) );
}

struct envunion1999 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  struct Maybe_905   int2000 (    struct Scanner_893 *  sc3206 ) {
    return ( (  scan_dash_int906 ) ( (  sc3206 ) ) );
}

static  bool   char_dash_satisfies2002 (    struct Scanner_893 *  sc3220 ,    bool (*  condition3222 )(    struct Char_65  ) ) {
    struct Maybe_706  dref3223 = ( (  head1284 ) ( ( ( * (  sc3220 ) ) .f_s ) ) );
    if ( dref3223.tag == Maybe_706_Just_t ) {
        if ( ( (  condition3222 ) ( ( dref3223 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_918 ) ( (  sc3220 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3223.tag == Maybe_706_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2001 (    struct Scanner_893 *  sc3238 ,    bool (*  condition3240 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2002 ) ( (  sc3238 ) ,  (  condition3240 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_hex2003 (    struct Char_65  c2395 ) {
    return ( (  eq332 ( ( (  c2395 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( ( ( (  is_dash_digit1280 ) ( (  c2395 ) ) ) || ( (  between1277 ) ( (  c2395 ) ,  ( (  from_dash_charlike314 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "f" ) ,  ( 1 ) ) ) ) ) ) || ( (  between1277 ) ( (  c2395 ) ,  ( (  from_dash_charlike314 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2005 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   skip_dash_while2006 (    struct Scanner_893 *  sc3238 ,    bool (*  condition3240 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies1897 ) ( (  sc3238 ) ,  (  condition3240 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2008 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2010 (    struct Scanner_893 *  sc3220 ,    bool (*  condition3222 )(    struct Char_65  ) ) {
    struct Maybe_706  dref3223 = ( (  head1284 ) ( ( ( * (  sc3220 ) ) .f_s ) ) );
    if ( dref3223.tag == Maybe_706_Just_t ) {
        if ( ( (  condition3222 ) ( ( dref3223 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_918 ) ( (  sc3220 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3223.tag == Maybe_706_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2009 (    struct Scanner_893 *  sc3238 ,    bool (*  condition3240 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2010 ) ( (  sc3238 ) ,  (  condition3240 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_octal2011 (    struct Char_65  c2401 ) {
    return ( (  eq332 ( ( (  c2401 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between1277 ) ( (  c2401 ) ,  ( (  from_dash_charlike314 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) );
}

struct envunion2013 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2015 (    struct Scanner_893 *  sc3220 ,    bool (*  condition3222 )(    struct Char_65  ) ) {
    struct Maybe_706  dref3223 = ( (  head1284 ) ( ( ( * (  sc3220 ) ) .f_s ) ) );
    if ( dref3223.tag == Maybe_706_Just_t ) {
        if ( ( (  condition3222 ) ( ( dref3223 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_918 ) ( (  sc3220 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3223.tag == Maybe_706_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2014 (    struct Scanner_893 *  sc3238 ,    bool (*  condition3240 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2015 ) ( (  sc3238 ) ,  (  condition3240 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

struct envunion2017 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  bool   char_dash_satisfies2019 (    struct Scanner_893 *  sc3220 ,    bool (*  condition3222 )(    struct Char_65  ) ) {
    struct Maybe_706  dref3223 = ( (  head1284 ) ( ( ( * (  sc3220 ) ) .f_s ) ) );
    if ( dref3223.tag == Maybe_706_Just_t ) {
        if ( ( (  condition3222 ) ( ( dref3223 .stuff .Maybe_706_Just_s .field0 ) ) ) ) {
            ( (  drop_prime_918 ) ( (  sc3220 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
            return ( true );
        } else {
            return ( false );
        }
    }
    else {
        if ( dref3223.tag == Maybe_706_None_t ) {
            return ( false );
        }
    }
}

static  enum Unit_8   skip_dash_while2018 (    struct Scanner_893 *  sc3238 ,    bool (*  condition3240 )(    struct Char_65  ) ) {
    while ( ( (  char_dash_satisfies2019 ) ( (  sc3238 ) ,  (  condition3240 ) ) ) ) {
    }
    return ( Unit_8_Unit );
}

static  bool   is_dash_binary2020 (    struct Char_65  c2398 ) {
    return ( (  eq332 ( ( (  c2398 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  eq502 ( (  c2398 ) , ( (  from_dash_charlike314 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) || (  eq502 ( (  c2398 ) , ( (  from_dash_charlike314 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) );
}

struct envunion2022 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2024 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2026 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

struct envunion2028 {
    enum Unit_8  (*fun) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  );
    struct env35 env;
};

static  enum Unit_8   recompute_dash_highlights_dash_at_dash_line1847 (   struct env119* env ,    struct TextBuf_97 *  self3886 ,    struct Line_12 *  line3888 ) {
    if ( ( ! ( ( * (  line3888 ) ) .f_invalidated ) ) ) {
        return ( Unit_8_Unit );
    }
    struct List_15 *  hls3889 = ( & ( ( * (  line3888 ) ) .f_highlights ) );
    ( (  trim1848 ) ( (  hls3889 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    struct StrView_30  line_dash_sv3890 = ( (  from_dash_bytes1037 ) ( ( (  to_dash_slice431 ) ( ( ( * (  line3888 ) ) .f_line ) ) ) ) );
    struct Scanner_893  temp1849 = ( (  mk_dash_from_dash_str895 ) ( (  line_dash_sv3890 ) ) );
    struct Scanner_893 *  sc3891 = ( &temp1849 );
    while ( ( ! ( (  null1850 ) ( (  sc3891 ) ) ) ) ) {
        int32_t  from_dash_off3892 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
        struct Maybe_706  first_dash_char3893 = ( (  peek1853 ) ( (  sc3891 ) ) );
        if ( ( (  try_dash_char1854 ) ( (  sc3891 ) ,  ( (  from_dash_charlike314 ) ( ( "#" ) ,  ( 1 ) ) ) ) ) ) {
            if ( ( (  try_dash_char1854 ) ( (  sc3891 ) ,  ( (  from_dash_charlike314 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  skip_dash_while1856 ) ( (  sc3891 ) ,  (  lam1858 ) ) );
                ( (  drop_prime_918 ) ( (  sc3891 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                int32_t  to_dash_off3896 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                struct envunion120  temp1859 = ( (struct envunion120){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                ( temp1859.fun ( &temp1859.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = ( (  size_dash_i32294 ) ( ( (  num_dash_bytes1069 ) ( (  line_dash_sv3890 ) ) ) ) ) , .f_type = ( HighlightType_18_Special3 ) } ) ) );
            } else {
                struct envunion1891  temp1890 = ( (struct envunion1891){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                ( temp1890.fun ( &temp1890.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = ( (  size_dash_i32294 ) ( ( (  num_dash_bytes1069 ) ( (  line_dash_sv3890 ) ) ) ) ) , .f_type = ( HighlightType_18_Comment ) } ) ) );
            }
            break;
        } else {
            if ( ( (  try_dash_char1854 ) ( (  sc3891 ) ,  ( (  from_dash_charlike314 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) {
                while ( ( true ) ) {
                    ( (  skip_dash_while1892 ) ( (  sc3891 ) ,  (  lam1894 ) ) );
                    if ( (  eq1855 ( ( (  peek1853 ) ( (  sc3891 ) ) ) , ( ( Maybe_706_Just ) ( ( (  from_dash_charlike314 ) ( ( "\\" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                        ( (  drop_prime_918 ) ( (  sc3891 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        if ( (  eq1855 ( ( (  peek1853 ) ( (  sc3891 ) ) ) , ( ( Maybe_706_Just ) ( ( (  from_dash_charlike314 ) ( ( "'" ) ,  ( 1 ) ) ) ) ) ) ) ) {
                            ( (  drop_prime_918 ) ( (  sc3891 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        } else {
                        }
                    } else {
                        ( (  drop_prime_918 ) ( (  sc3891 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                        break;
                    }
                }
                int32_t  cur_dash_off3899 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                struct envunion1896  temp1895 = ( (struct envunion1896){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                ( temp1895.fun ( &temp1895.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = (  cur_dash_off3899 ) , .f_type = ( HighlightType_18_String ) } ) ) );
            } else {
                if ( ( (  try_dash_char1854 ) ( (  sc3891 ) ,  ( (  from_dash_charlike314 ) ( ( "@" ) ,  ( 1 ) ) ) ) ) ) {
                    if ( ( (  char_dash_satisfies1897 ) ( (  sc3891 ) ,  (  is_dash_alpha1276 ) ) ) ) {
                        ( (  skip_dash_while1898 ) ( (  sc3891 ) ,  (  lam1900 ) ) );
                        int32_t  cur_dash_off3902 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                        struct envunion1902  temp1901 = ( (struct envunion1902){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                        ( temp1901.fun ( &temp1901.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = (  cur_dash_off3902 ) , .f_type = ( HighlightType_18_Ident3 ) } ) ) );
                    } else {
                    }
                } else {
                    struct env1905 envinst1905 = {
                        .sc3891 =  sc3891 ,
                    };
                    if ( ( (  any1903 ) ( ( (  from_dash_listlike1923 ) ( ( (struct Array_1904) { ._arr = { ( (  from_dash_string183 ) ( ( "==" ) ,  ( 2 ) ) ) , ( (  from_dash_string183 ) ( ( "/=" ) ,  ( 2 ) ) ) } } ) ) ) ,  ( (struct envunion1906){ .fun = (  bool  (*) (  struct env1905*  ,    struct StrView_30  ) )lam1924 , .env =  envinst1905 } ) ) ) ) {
                        int32_t  cur_dash_off3905 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                        enum HighlightType_18  type3906 = ( HighlightType_18_Special2 );
                        struct envunion1930  temp1929 = ( (struct envunion1930){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                        ( temp1929.fun ( &temp1929.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = (  cur_dash_off3905 ) , .f_type = (  type3906 ) } ) ) );
                    } else {
                        struct env1933 envinst1933 = {
                            .sc3891 =  sc3891 ,
                        };
                        if ( ( (  any1931 ) ( ( (  from_dash_listlike1949 ) ( ( (struct Array_1932) { ._arr = { ( (  from_dash_string183 ) ( ( "<&" ) ,  ( 2 ) ) ) , ( ( (  from_dash_charlike1169 ) ( ( "=" ) ,  ( 1 ) ) ) ) , ( (  from_dash_charlike1169 ) ( ( "&" ) ,  ( 1 ) ) ) , ( (  from_dash_string183 ) ( ( "->" ) ,  ( 2 ) ) ) , ( (  from_dash_charlike1169 ) ( ( ":" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1169 ) ( ( "(" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1169 ) ( ( ")" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1169 ) ( ( "{" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1169 ) ( ( "}" ) ,  ( 1 ) ) ) , ( (  from_dash_charlike1169 ) ( ( "," ) ,  ( 1 ) ) ) } } ) ) ) ,  ( (struct envunion1934){ .fun = (  bool  (*) (  struct env1933*  ,    struct StrView_30  ) )lam1950 , .env =  envinst1933 } ) ) ) ) {
                            int32_t  cur_dash_off3909 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                            enum HighlightType_18  type3910 = ( HighlightType_18_Special1 );
                            struct envunion1952  temp1951 = ( (struct envunion1952){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                            ( temp1951.fun ( &temp1951.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = (  cur_dash_off3909 ) , .f_type = (  type3910 ) } ) ) );
                        } else {
                            if ( ( (  char_dash_satisfies1897 ) ( (  sc3891 ) ,  (  is_dash_alpha1276 ) ) ) ) {
                                ( (  skip_dash_while1953 ) ( (  sc3891 ) ,  (  lam1955 ) ) );
                                int32_t  cur_dash_off3913 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                                bool  first_dash_char_dash_uppercase3914 = ( (  maybe1956 ) ( (  first_dash_char3893 ) ,  (  is_dash_upper1957 ) ,  ( false ) ) );
                                enum HighlightType_18  type3915 = ( (  first_dash_char_dash_uppercase3914 ) ? ( HighlightType_18_Ident2 ) : ( HighlightType_18_Ident1 ) );
                                struct StrView_30  ident3916 = ( ( (  byte_dash_substr484 ) ( (  line_dash_sv3890 ) ,  ( (  i32_dash_size355 ) ( (  from_dash_off3892 ) ) ) ,  ( (  i32_dash_size355 ) ( (  cur_dash_off3913 ) ) ) ) ) );
                                struct Array_1958  keywords13917 = ( (  from_dash_listlike1959 ) ( ( (struct Array_1958) { ._arr = { ( (  from_dash_string183 ) ( ( "fn" ) ,  ( 2 ) ) ) , ( (  from_dash_string183 ) ( ( "class" ) ,  ( 5 ) ) ) , ( (  from_dash_string183 ) ( ( "inst" ) ,  ( 4 ) ) ) , ( (  from_dash_string183 ) ( ( "external" ) ,  ( 8 ) ) ) , ( (  from_dash_string183 ) ( ( "use" ) ,  ( 3 ) ) ) } } ) ) );
                                struct Array_1960  keywords23918 = ( (  from_dash_listlike1961 ) ( ( (struct Array_1960) { ._arr = { ( (  from_dash_string183 ) ( ( "if" ) ,  ( 2 ) ) ) , ( (  from_dash_string183 ) ( ( "elif" ) ,  ( 4 ) ) ) , ( (  from_dash_string183 ) ( ( "else" ) ,  ( 4 ) ) ) , ( (  from_dash_string183 ) ( ( "case" ) ,  ( 4 ) ) ) , ( (  from_dash_string183 ) ( ( "for" ) ,  ( 3 ) ) ) , ( (  from_dash_string183 ) ( ( "in" ) ,  ( 2 ) ) ) , ( (  from_dash_string183 ) ( ( "while" ) ,  ( 5 ) ) ) , ( (  from_dash_string183 ) ( ( "pass" ) ,  ( 4 ) ) ) , ( (  from_dash_string183 ) ( ( "break" ) ,  ( 5 ) ) ) , ( (  from_dash_string183 ) ( ( "continue" ) ,  ( 8 ) ) ) , ( (  from_dash_string183 ) ( ( "as" ) ,  ( 2 ) ) ) , ( (  from_dash_string183 ) ( ( "or" ) ,  ( 2 ) ) ) , ( (  from_dash_string183 ) ( ( "and" ) ,  ( 3 ) ) ) , ( (  from_dash_string183 ) ( ( "not" ) ,  ( 3 ) ) ) , ( (  from_dash_string183 ) ( ( "return" ) ,  ( 6 ) ) ) } } ) ) );
                                struct env1963 envinst1963 = {
                                    .ident3916 =  ident3916 ,
                                };
                                if ( ( (  any1962 ) ( (  keywords13917 ) ,  ( (struct envunion1964){ .fun = (  bool  (*) (  struct env1963*  ,    struct StrView_30  ) )lam1979 , .env =  envinst1963 } ) ) ) ) {
                                    type3915 = ( HighlightType_18_Keyword1 );
                                } else {
                                    struct env1981 envinst1981 = {
                                        .ident3916 =  ident3916 ,
                                    };
                                    if ( ( (  any1980 ) ( (  keywords23918 ) ,  ( (struct envunion1982){ .fun = (  bool  (*) (  struct env1981*  ,    struct StrView_30  ) )lam1997 , .env =  envinst1981 } ) ) ) ) {
                                        type3915 = ( HighlightType_18_Keyword2 );
                                    } else {
                                        if ( ( ( ! (  first_dash_char_dash_uppercase3914 ) ) && (  eq1855 ( ( (  peek1853 ) ( (  sc3891 ) ) ) , ( ( Maybe_706_Just ) ( ( (  from_dash_charlike314 ) ( ( "(" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
                                            type3915 = ( HighlightType_18_Ident4 );
                                        }
                                    }
                                }
                                struct envunion1999  temp1998 = ( (struct envunion1999){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                                ( temp1998.fun ( &temp1998.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = (  cur_dash_off3913 ) , .f_type = (  type3915 ) } ) ) );
                            } else {
                                struct Maybe_905  dref3923 = ( (  int2000 ) ( (  sc3891 ) ) );
                                if ( dref3923.tag == Maybe_905_Just_t ) {
                                    int32_t  cur_dash_off3925 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                                    enum HighlightType_18  type3926 = ( HighlightType_18_Number );
                                    if ( (  eq997 ( ( dref3923 .stuff .Maybe_905_Just_s .field0 ) , (  from_dash_integral402 ( 0 ) ) ) ) ) {
                                        if ( ( (  try_dash_char1854 ) ( (  sc3891 ) ,  ( (  from_dash_charlike314 ) ( ( "x" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  skip_dash_while2001 ) ( (  sc3891 ) ,  (  is_dash_hex2003 ) ) );
                                            int32_t  cur_dash_off3927 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                                            struct envunion2005  temp2004 = ( (struct envunion2005){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                                            ( temp2004.fun ( &temp2004.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = (  cur_dash_off3927 ) , .f_type = (  type3926 ) } ) ) );
                                            ( (  skip_dash_while2006 ) ( (  sc3891 ) ,  (  is_dash_alpha1276 ) ) );
                                            int32_t  invalid_dash_off3928 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                                            if ( ( !  eq418 ( (  cur_dash_off3927 ) , (  invalid_dash_off3928 ) ) ) ) {
                                                struct envunion2008  temp2007 = ( (struct envunion2008){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                                                ( temp2007.fun ( &temp2007.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3927 ) , .f_to = (  invalid_dash_off3928 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                            }
                                        } else {
                                            if ( ( (  try_dash_char1854 ) ( (  sc3891 ) ,  ( (  from_dash_charlike314 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  skip_dash_while2009 ) ( (  sc3891 ) ,  (  is_dash_octal2011 ) ) );
                                                int32_t  cur_dash_off3929 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                                                struct envunion2013  temp2012 = ( (struct envunion2013){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                                                ( temp2012.fun ( &temp2012.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = (  cur_dash_off3929 ) , .f_type = (  type3926 ) } ) ) );
                                                ( (  skip_dash_while2014 ) ( (  sc3891 ) ,  (  is_dash_digit911 ) ) );
                                                int32_t  invalid_dash_off3930 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                                                if ( ( !  eq418 ( (  cur_dash_off3929 ) , (  invalid_dash_off3930 ) ) ) ) {
                                                    struct envunion2017  temp2016 = ( (struct envunion2017){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                                                    ( temp2016.fun ( &temp2016.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3929 ) , .f_to = (  invalid_dash_off3930 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                }
                                            } else {
                                                if ( ( (  try_dash_char1854 ) ( (  sc3891 ) ,  ( (  from_dash_charlike314 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  skip_dash_while2018 ) ( (  sc3891 ) ,  (  is_dash_binary2020 ) ) );
                                                    int32_t  cur_dash_off3931 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                                                    struct envunion2022  temp2021 = ( (struct envunion2022){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                                                    ( temp2021.fun ( &temp2021.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = (  cur_dash_off3931 ) , .f_type = (  type3926 ) } ) ) );
                                                    ( (  skip_dash_while2014 ) ( (  sc3891 ) ,  (  is_dash_digit911 ) ) );
                                                    int32_t  invalid_dash_off3932 = ( (  size_dash_i32294 ) ( ( ( * (  sc3891 ) ) .f_byte_dash_offset ) ) );
                                                    if ( ( !  eq418 ( (  cur_dash_off3931 ) , (  invalid_dash_off3932 ) ) ) ) {
                                                        struct envunion2024  temp2023 = ( (struct envunion2024){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                                                        ( temp2023.fun ( &temp2023.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  cur_dash_off3931 ) , .f_to = (  invalid_dash_off3932 ) , .f_type = ( HighlightType_18_Invalid ) } ) ) );
                                                    }
                                                } else {
                                                    struct envunion2026  temp2025 = ( (struct envunion2026){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                                                    ( temp2025.fun ( &temp2025.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = (  cur_dash_off3925 ) , .f_type = (  type3926 ) } ) ) );
                                                }
                                            }
                                        }
                                    } else {
                                        struct envunion2028  temp2027 = ( (struct envunion2028){ .fun = (  enum Unit_8  (*) (  struct env35*  ,    struct List_15 *  ,    struct Highlight_17  ) )add1860 , .env =  env->envinst35 } );
                                        ( temp2027.fun ( &temp2027.env ,  (  hls3889 ) ,  ( (struct Highlight_17) { .f_from = (  from_dash_off3892 ) , .f_to = (  cur_dash_off3925 ) , .f_type = (  type3926 ) } ) ) );
                                    }
                                }
                                else {
                                    if ( dref3923.tag == Maybe_905_None_t ) {
                                        ( (  drop_prime_918 ) ( (  sc3891 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    (*  line3888 ) .f_invalidated = ( false );
    return ( Unit_8_Unit );
}

static  struct Slice_16   subslice2031 (    struct Slice_16  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Highlight_17 *  begin_dash_ptr1788 = ( (  offset_dash_ptr1874 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp283 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp283 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub403 ( ( (  min430 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_16) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

static  struct SliceIter_1878   into_dash_iter2030 (    struct List_15  self2029 ) {
    return ( (  into_dash_iter1887 ) ( ( (  subslice2031 ) ( ( (  self2029 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2029 ) .f_count ) ) ) ) );
}

static  bool   between2033 (    int32_t  c1337 ,    int32_t  l1339 ,    int32_t  r1341 ) {
    int32_t  from1342 = ( (  min569 ) ( (  l1339 ) ,  (  r1341 ) ) );
    int32_t  to1343 = ( (  max1049 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp142 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp142 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  struct Maybe_187   highlight_dash_at1845 (   struct env121* env ,    struct TextBuf_97 *  self3935 ,    struct Pos_29  pos3937 ) {
    struct Line_12 *  line3938 = ( (  get_dash_ptr425 ) ( ( & ( ( * (  self3935 ) ) .f_buf ) ) ,  ( (  i32_dash_size355 ) ( ( (  pos3937 ) .f_line ) ) ) ) );
    struct envunion122  temp1846 = ( (struct envunion122){ .fun = (  enum Unit_8  (*) (  struct env119*  ,    struct TextBuf_97 *  ,    struct Line_12 *  ) )recompute_dash_highlights_dash_at_dash_line1847 , .env =  env->envinst119 } );
    ( temp1846.fun ( &temp1846.env ,  (  self3935 ) ,  (  line3938 ) ) );
    struct SliceIter_1878  temp2029 =  into_dash_iter2030 ( ( ( * (  line3938 ) ) .f_highlights ) );
    while (true) {
        struct Maybe_1883  __cond2032 =  next1884 (&temp2029);
        if (  __cond2032 .tag == 0 ) {
            break;
        }
        struct Highlight_17  hl3940 =  __cond2032 .stuff .Maybe_1883_Just_s .field0;
        if ( ( (  between2033 ) ( ( (  pos3937 ) .f_bi ) ,  ( (  hl3940 ) .f_from ) ,  (  op_dash_sub149 ( ( (  hl3940 ) .f_to ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
            return ( ( Maybe_187_Just ) ( ( (  hl3940 ) .f_type ) ) );
        }
        if ( (  cmp142 ( ( (  pos3937 ) .f_bi ) , ( (  hl3940 ) .f_from ) ) == 0 ) ) {
            return ( (struct Maybe_187) { .tag = Maybe_187_None_t } );
        }
    }
    return ( (struct Maybe_187) { .tag = Maybe_187_None_t } );
}

struct Maybe_2037 {
    enum {
        Maybe_2037_None_t,
        Maybe_2037_Just_t,
    } tag;
    union {
        struct {
            struct HighlightColors_160  field0;
        } Maybe_2037_Just_s;
    } stuff;
};

static struct Maybe_2037 Maybe_2037_Just (  struct HighlightColors_160  field0 ) {
    return ( struct Maybe_2037 ) { .tag = Maybe_2037_Just_t, .stuff = { .Maybe_2037_Just_s = { .field0 = field0 } } };
};

struct env2038 {
    ;
    struct Theme_157 *  theme3975;
};

struct envunion2039 {
    struct Colors_158  (*fun) (  struct env2038*  ,    struct HighlightColors_160  );
    struct env2038 env;
};

static  struct Colors_158   maybe2036 (    struct Maybe_2037  x1282 ,   struct envunion2039  fun1284 ,    struct Colors_158  default1286 ) {
    struct envunion2039  temp2040 = (  fun1284 );
    return ( {  struct Maybe_2037  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_2037_Just_t ? ( temp2040.fun ( &temp2040.env ,  ( dref1287 .stuff .Maybe_2037_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

struct SliceIter_2043 {
    struct Slice_159  f_slice;
    size_t  f_current_dash_offset;
};

struct env2044 {
    enum HighlightType_18  hltype3977;
    ;
};

struct envunion2045 {
    bool  (*fun) (  struct env2044*  ,    struct HighlightColors_160  );
    struct env2044 env;
};

struct Filter_2042 {
    struct SliceIter_2043  f_og;
    struct envunion2045  f_fun;
};

static  struct HighlightColors_160 *   offset_dash_ptr2048 (    struct HighlightColors_160 *  x338 ,    int64_t  count340 ) {
    struct HighlightColors_160  temp2049;
    return ( (struct HighlightColors_160 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul323 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp2049 ) ) ) ) ) ) ) ) );
}

static  struct Maybe_2037   next2047 (    struct SliceIter_2043 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp283 ( (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_2037) { .tag = Maybe_2037_None_t } );
    }
    struct HighlightColors_160  elem1831 = ( * ( (  offset_dash_ptr2048 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_2037_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_2037   next2046 (    struct Filter_2042 *  self833 ) {
    while ( ( true ) ) {
        struct Maybe_2037  dref834 = ( (  next2047 ) ( ( & ( ( * (  self833 ) ) .f_og ) ) ) );
        if ( dref834.tag == Maybe_2037_None_t ) {
            return ( (struct Maybe_2037) { .tag = Maybe_2037_None_t } );
        }
        else {
            if ( dref834.tag == Maybe_2037_Just_t ) {
                struct envunion2045  temp2050 = ( ( * (  self833 ) ) .f_fun );
                if ( ( temp2050.fun ( &temp2050.env ,  ( dref834 .stuff .Maybe_2037_Just_s .field0 ) ) ) ) {
                    return ( ( Maybe_2037_Just ) ( ( dref834 .stuff .Maybe_2037_Just_s .field0 ) ) );
                }
            }
        }
    }
    struct Maybe_2037  temp2051;
    return (  temp2051 );
}

static  struct Filter_2042   into_dash_iter2053 (    struct Filter_2042  self830 ) {
    return (  self830 );
}

static  struct Maybe_2037   head2041 (    struct Filter_2042  it1142 ) {
    struct Filter_2042  temp2052 = ( (  into_dash_iter2053 ) ( (  it1142 ) ) );
    return ( (  next2046 ) ( ( &temp2052 ) ) );
}

static  struct SliceIter_2043   into_dash_iter2055 (    struct Slice_159  self1823 ) {
    return ( (struct SliceIter_2043) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Filter_2042   filter2054 (    struct Slice_159  iterable838 ,   struct envunion2045  fun840 ) {
    struct SliceIter_2043  it841 = ( (  into_dash_iter2055 ) ( (  iterable838 ) ) );
    return ( (struct Filter_2042) { .f_og = (  it841 ) , .f_fun = (  fun840 ) } );
}

static  enum HighlightType_18 *   cast2060 (    uint32_t *  x356 ) {
    return ( (enum HighlightType_18 * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed2058 (    enum HighlightType_18  x573 ) {
    uint32_t  temp2059 = ( (  zeroed742 ) ( ) );
    uint32_t *  y574 = ( &temp2059 );
    enum HighlightType_18 *  yp575 = ( (  cast2060 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2057 (    enum HighlightType_18  l3644 ,    enum HighlightType_18  r3646 ) {
    return (  eq506 ( ( ( (  cast_dash_on_dash_zeroed2058 ) ( (  l3644 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2058 ) ( (  r3646 ) ) ) ) );
}

static  bool   lam2056 (   struct env2044* env ,    struct HighlightColors_160  hlc3979 ) {
    return (  eq2057 ( ( (  hlc3979 ) .f_type ) , ( env->hltype3977 ) ) );
}

static  struct Color_123   or_dash_else2062 (    struct Maybe_161  self1733 ,    struct Color_123  alt1735 ) {
    struct Maybe_161  dref1736 = (  self1733 );
    if ( dref1736.tag == Maybe_161_None_t ) {
        return (  alt1735 );
    }
    else {
        if ( dref1736.tag == Maybe_161_Just_t ) {
            return ( dref1736 .stuff .Maybe_161_Just_s .field0 );
        }
    }
}

static  struct Colors_158   lam2061 (   struct env2038* env ,    struct HighlightColors_160  hlc3981 ) {
    return ( (struct Colors_158) { .f_fg = ( (  hlc3981 ) .f_fg ) , .f_bg = ( (  or_dash_else2062 ) ( ( (  hlc3981 ) .f_bg ) ,  ( ( ( * ( env->theme3975 ) ) .f_default ) .f_bg ) ) ) } );
}

static  struct Colors_158   find_dash_colors_dash_for_dash_highlight2035 (    struct Theme_157 *  theme3975 ,    enum HighlightType_18  hltype3977 ) {
    struct env2044 envinst2044 = {
        .hltype3977 =  hltype3977 ,
    };
    struct env2038 envinst2038 = {
        .theme3975 =  theme3975 ,
    };
    return ( (  maybe2036 ) ( ( (  head2041 ) ( ( (  filter2054 ) ( ( ( * (  theme3975 ) ) .f_highlights ) ,  ( (struct envunion2045){ .fun = (  bool  (*) (  struct env2044*  ,    struct HighlightColors_160  ) )lam2056 , .env =  envinst2044 } ) ) ) ) ) ,  ( (struct envunion2039){ .fun = (  struct Colors_158  (*) (  struct env2038*  ,    struct HighlightColors_160  ) )lam2061 , .env =  envinst2038 } ) ,  ( ( * (  theme3975 ) ) .f_default ) ) );
}

static  enum Unit_8   lam2034 (   struct env1841* env ,    enum HighlightType_18  type4104 ) {
    ( (  set_dash_colors1807 ) ( ( env->screen4077 ) ,  ( (  find_dash_colors_dash_for_dash_highlight2035 ) ( ( env->theme4083 ) ,  (  type4104 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct StrView_30   todo2066 (  ) {
    ( (  print1287 ) ( ( (  from_dash_string183 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral56 ( 1 ) ) ) );
    return ( (  undefined616 ) ( ) );
}

static  struct StrView_30   short_dash_mode_dash_name2065 (    enum Mode_205  mode3995 ) {
    return ( {  enum Mode_205  dref3996 = (  mode3995 ) ;  dref3996 == Mode_205_Normal ? ( (  from_dash_string183 ) ( ( "NOR" ) ,  ( 3 ) ) ) :  dref3996 == Mode_205_Insert ? ( (  from_dash_string183 ) ( ( "INS" ) ,  ( 3 ) ) ) :  dref3996 == Mode_205_Select ? ( (  from_dash_string183 ) ( ( "SEL" ) ,  ( 3 ) ) ) : ( (  todo2066 ) ( ) ) ; } );
}

struct StrConcat_2069 {
    struct Char_65  field0;
    struct StrView_30  field1;
};

static struct StrConcat_2069 StrConcat_2069_StrConcat (  struct Char_65  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_2069 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2068 {
    struct StrConcat_2069  field0;
    struct Char_65  field1;
};

static struct StrConcat_2068 StrConcat_2068_StrConcat (  struct StrConcat_2069  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2068 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2072 {
    struct AppendIter_958  f_left;
    struct StrViewIter_703  f_right;
};

struct StrConcatIter_2071 {
    struct StrConcatIter_2072  f_left;
    struct AppendIter_958  f_right;
};

static  struct StrConcatIter_2071   into_dash_iter2073 (    struct StrConcatIter_2071  self1497 ) {
    return (  self1497 );
}

static  struct StrConcatIter_2072   into_dash_iter2077 (    struct StrConcat_2069  dref1504 ) {
    return ( (struct StrConcatIter_2072) { .f_left = ( (  chars998 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars708 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2072   chars2076 (    struct StrConcat_2069  self1515 ) {
    return ( (  into_dash_iter2077 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2071   into_dash_iter2075 (    struct StrConcat_2068  dref1504 ) {
    return ( (struct StrConcatIter_2071) { .f_left = ( (  chars2076 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars998 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2071   chars2074 (    struct StrConcat_2068  self1515 ) {
    return ( (  into_dash_iter2075 ) ( (  self1515 ) ) );
}

static  struct Maybe_706   next2080 (    struct StrConcatIter_2072 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next984 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next2079 (    struct StrConcatIter_2071 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2080 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next984 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   draw_dash_str2067 (    struct Screen_254 *  screen3580 ,    struct StrConcat_2068  s3582 ,    int32_t  x3584 ,    int32_t  y3586 ) {
    int32_t  w3587 = ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3580 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp142 ( (  y3586 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp142 ( (  y3586 ) , ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3580 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3588 = (  op_dash_add144 ( (  op_dash_mul1479 ( (  y3586 ) , (  w3587 ) ) ) , (  x3584 ) ) );
    int32_t  x3589 = ( (  min569 ) ( (  x3584 ) ,  (  w3587 ) ) );
    size_t  max_dash_len3590 = ( (  i32_dash_size355 ) ( (  op_dash_sub149 ( (  w3587 ) , (  x3589 ) ) ) ) );
    int32_t  xx3591 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2071  temp2070 =  into_dash_iter2073 ( ( (  chars2074 ) ( (  s3582 ) ) ) );
    while (true) {
        struct Maybe_706  __cond2078 =  next2079 (&temp2070);
        if (  __cond2078 .tag == 0 ) {
            break;
        }
        struct Char_65  c3593 =  __cond2078 .stuff .Maybe_706_Just_s .field0;
        ( (  put_dash_char1822 ) ( (  screen3580 ) ,  (  c3593 ) ,  (  op_dash_add144 ( (  x3589 ) , (  xx3591 ) ) ) ,  (  y3586 ) ) );
        xx3591 = (  op_dash_add144 ( (  xx3591 ) , ( (  rendered_dash_wcwidth1048 ) ( (  c3593 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render1781 (   struct env185* env ,    struct Screen_254 *  screen4077 ,    struct Pane_204 *  pane4079 ,    struct ScreenDims_257  sd4081 ,    struct Theme_157 *  theme4083 ) {
    bool  display_dash_line_dash_numbers4084 = ( true );
    ( (  update_dash_screen_dash_offset1782 ) ( (  pane4079 ) ,  (  sd4081 ) ) );
    struct ScreenCursorOffset_206  sc_dash_off4085 = ( ( * (  pane4079 ) ) .f_sc_dash_off );
    int32_t  max_dash_line_dash_num_dash_chars4086 = ( (  size_dash_i32294 ) ( ( (  count1785 ) ( ( (  chars1802 ) ( ( (  num_dash_lines1076 ) ( ( ( * (  pane4079 ) ) .f_buf ) ) ) ) ) ) ) ) );
    int32_t  num_dash_front_dash_margin4087 = (  from_dash_integral56 ( 2 ) );
    int32_t  num_dash_back_dash_margin4088 = (  from_dash_integral56 ( 2 ) );
    int32_t  total_dash_margin4089 = ( (  display_dash_line_dash_numbers4084 ) ? (  op_dash_add144 ( (  op_dash_add144 ( (  max_dash_line_dash_num_dash_chars4086 ) , (  num_dash_front_dash_margin4087 ) ) ) , (  num_dash_back_dash_margin4088 ) ) ) : (  from_dash_integral56 ( 0 ) ) );
    struct RangeIter_138  temp1805 =  into_dash_iter139 ( ( (  to148 ) ( (  op_dash_add144 ( ( (  sc_dash_off4085 ) .f_screen_dash_top ) , (  from_dash_integral56 ( 1 ) ) ) ) ,  ( (  min569 ) ( ( (  num_dash_lines1076 ) ( ( ( * (  pane4079 ) ) .f_buf ) ) ) ,  (  op_dash_add144 ( ( (  sc_dash_off4085 ) .f_screen_dash_top ) , ( (  screen_dash_height1784 ) ( (  sd4081 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_140  __cond1806 =  next141 (&temp1805);
        if (  __cond1806 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num4091 =  __cond1806 .stuff .Maybe_140_Just_s .field0;
        int32_t  ybi4092 = (  op_dash_sub149 ( (  line_dash_num4091 ) , (  from_dash_integral56 ( 1 ) ) ) );
        int32_t  xbi4093 = ( (  vi_dash_bi1078 ) ( ( ( * (  pane4079 ) ) .f_buf ) ,  (  ybi4092 ) ,  ( (  sc_dash_off4085 ) .f_screen_dash_left ) ) );
        struct StrView_30  line_dash_content4094 = ( (  line1036 ) ( ( ( * (  pane4079 ) ) .f_buf ) ,  (  ybi4092 ) ) );
        int32_t  ys4095 = (  op_dash_sub149 ( (  op_dash_sub149 ( (  op_dash_add144 ( ( (  sd4081 ) .f_from_dash_sy ) , (  line_dash_num4091 ) ) ) , ( (  sc_dash_off4085 ) .f_screen_dash_top ) ) ) , (  from_dash_integral56 ( 1 ) ) ) );
        if ( (  display_dash_line_dash_numbers4084 ) ) {
            if ( (  eq418 ( ( ( ( * (  pane4079 ) ) .f_cursor ) .f_line ) , (  ybi4092 ) ) ) ) {
                ( (  set_dash_colors1807 ) ( (  screen4077 ) ,  ( ( * (  theme4083 ) ) .f_line_dash_num_dash_hl ) ) );
            } else {
                ( (  set_dash_colors1807 ) ( (  screen4077 ) ,  ( ( * (  theme4083 ) ) .f_line_dash_num ) ) );
            }
            ( (  draw_dash_str_dash_right1809 ) ( (  screen4077 ) ,  (  line_dash_num4091 ) ,  (  op_dash_add144 ( (  op_dash_sub149 ( (  op_dash_sub149 ( ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen4077 ) ) .f_tui ) ) .f_width ) ) ) , ( (  sd4081 ) .f_from_dash_sx ) ) ) , (  total_dash_margin4089 ) ) ) , (  num_dash_back_dash_margin4088 ) ) ) ,  (  ys4095 ) ) );
        }
        int32_t  vx4096 = (  op_dash_sub149 ( ( (  pos_dash_vi1034 ) ( ( ( * (  pane4079 ) ) .f_buf ) ,  ( (  mk397 ) ( (  ybi4092 ) ,  (  xbi4093 ) ) ) ) ) , ( (  sc_dash_off4085 ) .f_screen_dash_left ) ) );
        ( (  assert1825 ) ( (  cmp142 ( (  vx4096 ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1826_StrConcat ) ( ( (  from_dash_string183 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx4096 ) ) ) ) );
        int32_t  left_dash_offset4097 = (  op_dash_add144 ( ( (  sd4081 ) .f_from_dash_sx ) , (  total_dash_margin4089 ) ) );
        struct AppendIter_1833  temp1832 =  into_dash_iter1834 ( ( (  append1835 ) ( ( (  chars708 ) ( ( (  byte_dash_substr_dash_from1472 ) ( (  line_dash_content4094 ) ,  ( (  i32_dash_size355 ) ( (  xbi4093 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_706  __cond1836 =  next1837 (&temp1832);
            if (  __cond1836 .tag == 0 ) {
                break;
            }
            struct Char_65  c4099 =  __cond1836 .stuff .Maybe_706_Just_s .field0;
            if ( (  cmp142 ( (  vx4096 ) , ( (  sd4081 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_29  curpos4100 = ( (  mk397 ) ( (  ybi4092 ) ,  (  xbi4093 ) ) );
            bool  is_dash_cursor4101 = (  eq417 ( (  curpos4100 ) , ( ( * (  pane4079 ) ) .f_cursor ) ) );
            bool  in_dash_selection4102 = ( (  is_dash_in_dash_selection1838 ) ( (  pane4079 ) ,  ( (  mk397 ) ( (  ybi4092 ) ,  (  xbi4093 ) ) ) ) );
            if ( (  is_dash_cursor4101 ) ) {
                ( (  set_dash_colors1807 ) ( (  screen4077 ) ,  ( ( * (  theme4083 ) ) .f_cursor ) ) );
            } else {
                if ( (  in_dash_selection4102 ) ) {
                    ( (  set_dash_colors1807 ) ( (  screen4077 ) ,  ( ( * (  theme4083 ) ) .f_selection ) ) );
                } else {
                    struct envunion186  temp1844 = ( (struct envunion186){ .fun = (  struct Maybe_187  (*) (  struct env121*  ,    struct TextBuf_97 *  ,    struct Pos_29  ) )highlight_dash_at1845 , .env =  env->envinst121 } );
                    struct env1841 envinst1841 = {
                        .theme4083 =  theme4083 ,
                        .screen4077 =  screen4077 ,
                    };
                    ( (  if_dash_just1840 ) ( ( temp1844.fun ( &temp1844.env ,  ( ( * (  pane4079 ) ) .f_buf ) ,  (  curpos4100 ) ) ) ,  ( (struct envunion1842){ .fun = (  enum Unit_8  (*) (  struct env1841*  ,    enum HighlightType_18  ) )lam2034 , .env =  envinst1841 } ) ) );
                }
            }
            struct Maybe_229  dref4105 = ( (  char_dash_replacement1041 ) ( (  c4099 ) ) );
            if ( dref4105.tag == Maybe_229_None_t ) {
                if ( ( ! ( (  cmp142 ( (  vx4096 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp142 ( (  op_dash_sub149 ( (  op_dash_add144 ( (  vx4096 ) , ( (  char_dash_screen_dash_width1039 ) ( (  c4099 ) ) ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , ( (  sd4081 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1822 ) ( (  screen4077 ) ,  (  c4099 ) ,  (  op_dash_add144 ( (  left_dash_offset4097 ) , (  vx4096 ) ) ) ,  (  ys4095 ) ) );
                }
                vx4096 = (  op_dash_add144 ( (  vx4096 ) , ( (  char_dash_screen_dash_width1039 ) ( (  c4099 ) ) ) ) );
            }
            else {
                if ( dref4105.tag == Maybe_229_Just_t ) {
                    struct StrViewIter_703  temp2063 =  into_dash_iter705 ( ( (  chars708 ) ( ( dref4105 .stuff .Maybe_229_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_706  __cond2064 =  next707 (&temp2063);
                        if (  __cond2064 .tag == 0 ) {
                            break;
                        }
                        struct Char_65  c4108 =  __cond2064 .stuff .Maybe_706_Just_s .field0;
                        if ( (  cmp142 ( (  vx4096 ) , (  from_dash_integral56 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1822 ) ( (  screen4077 ) ,  (  c4108 ) ,  (  op_dash_add144 ( (  left_dash_offset4097 ) , (  vx4096 ) ) ) ,  (  ys4095 ) ) );
                        }
                        vx4096 = (  op_dash_add144 ( (  vx4096 ) , ( (  char_dash_screen_dash_width1039 ) ( (  c4108 ) ) ) ) );
                    }
                }
            }
            ( (  set_dash_colors1807 ) ( (  screen4077 ) ,  ( ( * (  theme4083 ) ) .f_default ) ) );
            xbi4093 = (  op_dash_add144 ( (  xbi4093 ) , ( (  size_dash_i32294 ) ( ( (  c4099 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    ( (  set_dash_colors1807 ) ( (  screen4077 ) ,  ( ( * (  theme4083 ) ) .f_overlay ) ) );
    struct StrView_30  modename4109 = ( (  short_dash_mode_dash_name2065 ) ( ( ( * (  pane4079 ) ) .f_mode ) ) );
    ( (  draw_dash_str2067 ) ( (  screen4077 ) ,  ( ( StrConcat_2068_StrConcat ) ( ( ( StrConcat_2069_StrConcat ) ( ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  modename4109 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  ( (  sd4081 ) .f_from_dash_sx ) ,  ( (  sd4081 ) .f_to_dash_sy ) ) );
    return ( Unit_8_Unit );
}

struct env2082 {
    struct Screen_254 *  screen4484;
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

struct envunion2083 {
    enum Unit_8  (*fun) (  struct env2082*  ,    struct StrView_30  );
    struct env2082 env;
};

static  enum Unit_8   if_dash_just2081 (    struct Maybe_229  x1291 ,   struct envunion2083  fun1293 ) {
    struct Maybe_229  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_229_Just_t ) {
        struct envunion2083  temp2084 = (  fun1293 );
        ( temp2084.fun ( &temp2084.env ,  ( dref1294 .stuff .Maybe_229_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_229_None_t ) {
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   lam2085 (   struct env2082* env ,    struct StrView_30  msg4489 ) {
    int32_t  num_dash_chars4490 = ( (  size_dash_i32294 ) ( ( (  count1043 ) ( ( (  chars708 ) ( (  msg4489 ) ) ) ) ) ) );
    ( (  draw_dash_str2067 ) ( ( env->screen4484 ) ,  ( ( StrConcat_2068_StrConcat ) ( ( ( StrConcat_2069_StrConcat ) ( ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  msg4489 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  (  op_dash_div1478 ( (  op_dash_sub149 ( ( (  u32_dash_i321767 ) ( ( ( * ( ( * ( env->screen4484 ) ) .f_tui ) ) .f_width ) ) ) , (  num_dash_chars4490 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  op_dash_sub149 ( ( (  u32_dash_i321767 ) ( ( ( * ( ( * ( env->screen4484 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2088 {
    struct StrView_30  field0;
    struct StrBuilder_62  field1;
};

static struct StrConcat_2088 StrConcat_2088_StrConcat (  struct StrView_30  field0 ,  struct StrBuilder_62  field1 ) {
    return ( struct StrConcat_2088 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2087 {
    struct StrConcat_2088  field0;
    struct StrView_30  field1;
};

static struct StrConcat_2087 StrConcat_2087_StrConcat (  struct StrConcat_2088  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_2087 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2086 {
    struct StrConcat_2087  field0;
    struct Char_65  field1;
};

static struct StrConcat_2086 StrConcat_2086_StrConcat (  struct StrConcat_2087  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2086 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2092 {
    struct StrViewIter_703  f_left;
    struct StrViewIter_703  f_right;
};

struct StrConcatIter_2091 {
    struct StrConcatIter_2092  f_left;
    struct StrViewIter_703  f_right;
};

struct StrConcatIter_2090 {
    struct StrConcatIter_2091  f_left;
    struct AppendIter_958  f_right;
};

static  struct StrConcatIter_2090   into_dash_iter2094 (    struct StrConcatIter_2090  self1497 ) {
    return (  self1497 );
}

static  struct Maybe_706   next2097 (    struct StrConcatIter_2092 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next2096 (    struct StrConcatIter_2091 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2097 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next2095 (    struct StrConcatIter_2090 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2096 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next984 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2093 (    struct StrConcatIter_2090  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrConcatIter_2090  it1099 = ( (  into_dash_iter2094 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_706  dref1100 = ( (  next2095 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_706_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_706_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_706_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2098 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2098);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2099;
    return (  temp2099 );
}

static  size_t   lam2100 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add325 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2089 (    struct StrConcatIter_2090  it1104 ) {
    return ( (  reduce2093 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2100 ) ) );
}

static  struct StrConcatIter_2092   into_dash_iter2106 (    struct StrConcat_2088  dref1504 ) {
    return ( (struct StrConcatIter_2092) { .f_left = ( (  chars708 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars1729 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2092   chars2105 (    struct StrConcat_2088  self1515 ) {
    return ( (  into_dash_iter2106 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2091   into_dash_iter2104 (    struct StrConcat_2087  dref1504 ) {
    return ( (struct StrConcatIter_2091) { .f_left = ( (  chars2105 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars708 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2091   chars2103 (    struct StrConcat_2087  self1515 ) {
    return ( (  into_dash_iter2104 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2090   into_dash_iter2102 (    struct StrConcat_2086  dref1504 ) {
    return ( (struct StrConcatIter_2090) { .f_left = ( (  chars2103 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars998 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2090   chars2101 (    struct StrConcat_2086  self1515 ) {
    return ( (  into_dash_iter2102 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2107 (    struct Screen_254 *  screen3580 ,    struct StrConcat_2086  s3582 ,    int32_t  x3584 ,    int32_t  y3586 ) {
    int32_t  w3587 = ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3580 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp142 ( (  y3586 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp142 ( (  y3586 ) , ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3580 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3588 = (  op_dash_add144 ( (  op_dash_mul1479 ( (  y3586 ) , (  w3587 ) ) ) , (  x3584 ) ) );
    int32_t  x3589 = ( (  min569 ) ( (  x3584 ) ,  (  w3587 ) ) );
    size_t  max_dash_len3590 = ( (  i32_dash_size355 ) ( (  op_dash_sub149 ( (  w3587 ) , (  x3589 ) ) ) ) );
    int32_t  xx3591 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2090  temp2108 =  into_dash_iter2094 ( ( (  chars2101 ) ( (  s3582 ) ) ) );
    while (true) {
        struct Maybe_706  __cond2109 =  next2095 (&temp2108);
        if (  __cond2109 .tag == 0 ) {
            break;
        }
        struct Char_65  c3593 =  __cond2109 .stuff .Maybe_706_Just_s .field0;
        ( (  put_dash_char1822 ) ( (  screen3580 ) ,  (  c3593 ) ,  (  op_dash_add144 ( (  x3589 ) , (  xx3591 ) ) ) ,  (  y3586 ) ) );
        xx3591 = (  op_dash_add144 ( (  xx3591 ) , ( (  rendered_dash_wcwidth1048 ) ( (  c3593 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2110 {
    struct StrConcat_2087  field0;
    struct StrView_30  field1;
};

static struct StrConcat_2110 StrConcat_2110_StrConcat (  struct StrConcat_2087  field0 ,  struct StrView_30  field1 ) {
    return ( struct StrConcat_2110 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2112 {
    struct StrConcatIter_2091  f_left;
    struct StrViewIter_703  f_right;
};

static  struct StrConcatIter_2112   into_dash_iter2114 (    struct StrConcatIter_2112  self1497 ) {
    return (  self1497 );
}

static  struct Maybe_706   next2115 (    struct StrConcatIter_2112 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2096 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce2113 (    struct StrConcatIter_2112  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_65  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrConcatIter_2112  it1099 = ( (  into_dash_iter2114 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_706  dref1100 = ( (  next2115 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_706_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_706_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_706_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2116 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2116);
    exit ( 1 );
    ( Unit_8_Unit );
    size_t  temp2117;
    return (  temp2117 );
}

static  size_t   lam2118 (    struct Char_65  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add325 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count2111 (    struct StrConcatIter_2112  it1104 ) {
    return ( (  reduce2113 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam2118 ) ) );
}

static  struct StrConcatIter_2112   into_dash_iter2120 (    struct StrConcat_2110  dref1504 ) {
    return ( (struct StrConcatIter_2112) { .f_left = ( (  chars2103 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars708 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2112   chars2119 (    struct StrConcat_2110  self1515 ) {
    return ( (  into_dash_iter2120 ) ( (  self1515 ) ) );
}

static  enum Unit_8   draw_dash_str2121 (    struct Screen_254 *  screen3580 ,    struct StrConcat_2110  s3582 ,    int32_t  x3584 ,    int32_t  y3586 ) {
    int32_t  w3587 = ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3580 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp142 ( (  y3586 ) , (  from_dash_integral56 ( 0 ) ) ) == 0 ) || (  cmp142 ( (  y3586 ) , ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3580 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_8_Unit );
    }
    int32_t  i3588 = (  op_dash_add144 ( (  op_dash_mul1479 ( (  y3586 ) , (  w3587 ) ) ) , (  x3584 ) ) );
    int32_t  x3589 = ( (  min569 ) ( (  x3584 ) ,  (  w3587 ) ) );
    size_t  max_dash_len3590 = ( (  i32_dash_size355 ) ( (  op_dash_sub149 ( (  w3587 ) , (  x3589 ) ) ) ) );
    int32_t  xx3591 = (  from_dash_integral56 ( 0 ) );
    struct StrConcatIter_2112  temp2122 =  into_dash_iter2114 ( ( (  chars2119 ) ( (  s3582 ) ) ) );
    while (true) {
        struct Maybe_706  __cond2123 =  next2115 (&temp2122);
        if (  __cond2123 .tag == 0 ) {
            break;
        }
        struct Char_65  c3593 =  __cond2123 .stuff .Maybe_706_Just_s .field0;
        ( (  put_dash_char1822 ) ( (  screen3580 ) ,  (  c3593 ) ,  (  op_dash_add144 ( (  x3589 ) , (  xx3591 ) ) ) ,  (  y3586 ) ) );
        xx3591 = (  op_dash_add144 ( (  xx3591 ) , ( (  rendered_dash_wcwidth1048 ) ( (  c3593 ) ) ) ) );
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   render_dash_editor1779 (   struct env252* env ,    struct Screen_254 *  screen4484 ,    struct Editor_228 *  ed4486 ) {
    struct ScreenDims_257  screen_dash_dims4487 = ( (struct ScreenDims_257) { .f_from_dash_sx = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub149 ( ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen4484 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral56 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub149 ( ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen4484 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral56 ( 1 ) ) ) ) } );
    struct envunion253  temp1780 = ( (struct envunion253){ .fun = (  enum Unit_8  (*) (  struct env185*  ,    struct Screen_254 *  ,    struct Pane_204 *  ,    struct ScreenDims_257  ,    struct Theme_157 *  ) )render1781 , .env =  env->envinst185 } );
    ( temp1780.fun ( &temp1780.env ,  (  screen4484 ) ,  ( (  pane1073 ) ( (  ed4486 ) ) ) ,  (  screen_dash_dims4487 ) ,  ( ( * (  ed4486 ) ) .f_theme ) ) );
    struct env2082 envinst2082 = {
        .screen4484 =  screen4484 ,
    };
    ( (  if_dash_just2081 ) ( ( ( * (  ed4486 ) ) .f_msg ) ,  ( (struct envunion2083){ .fun = (  enum Unit_8  (*) (  struct env2082*  ,    struct StrView_30  ) )lam2085 , .env =  envinst2082 } ) ) );
    struct EditorMode_230  dref4491 = ( ( * (  ed4486 ) ) .f_mode );
    if ( dref4491.tag == EditorMode_230_Normal_t ) {
    }
    else {
        if ( dref4491.tag == EditorMode_230_Cmd_t ) {
            int32_t  num_dash_chars4493 = ( (  size_dash_i32294 ) ( ( (  count1043 ) ( ( (  chars1729 ) ( ( dref4491 .stuff .EditorMode_230_Cmd_s .field1 ) ) ) ) ) ) );
            struct StrView_30  pad4494 = ( (  eq418 ( ( (  mod1477 ) ( (  num_dash_chars4493 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string183 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1169 ) ( ( " " ) ,  ( 1 ) ) ) );
            int32_t  num_dash_chars4495 = (  op_dash_add144 ( (  num_dash_chars4493 ) , ( (  mod1477 ) ( (  num_dash_chars4493 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
            struct StrConcat_2086  full_dash_str4496 = ( ( StrConcat_2086_StrConcat ) ( ( ( StrConcat_2087_StrConcat ) ( ( ( StrConcat_2088_StrConcat ) ( ( (  from_dash_string183 ) ( ( " \xe2\x8c\xa8\xef\xb8\x8f " ) ,  ( 8 ) ) ) ,  ( dref4491 .stuff .EditorMode_230_Cmd_s .field1 ) ) ) ,  (  pad4494 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) ) ) );
            int32_t  full_dash_chars4497 = ( (  size_dash_i32294 ) ( ( (  count2089 ) ( ( (  chars2101 ) ( (  full_dash_str4496 ) ) ) ) ) ) );
            ( (  draw_dash_str2107 ) ( (  screen4484 ) ,  (  full_dash_str4496 ) ,  (  op_dash_div1478 ( (  op_dash_sub149 ( ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen4484 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4497 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
        }
        else {
            if ( dref4491.tag == EditorMode_230_Search_t ) {
                int32_t  num_dash_chars4499 = ( (  size_dash_i32294 ) ( ( (  count1043 ) ( ( (  chars1729 ) ( ( dref4491 .stuff .EditorMode_230_Search_s .field1 ) ) ) ) ) ) );
                struct StrView_30  pad4500 = ( (  eq418 ( ( (  mod1477 ) ( (  num_dash_chars4499 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) , (  from_dash_integral56 ( 0 ) ) ) ) ? ( (  from_dash_string183 ) ( ( "" ) ,  ( 0 ) ) ) : ( (  from_dash_charlike1169 ) ( ( " " ) ,  ( 1 ) ) ) );
                int32_t  num_dash_chars4501 = (  op_dash_add144 ( (  num_dash_chars4499 ) , ( (  mod1477 ) ( (  num_dash_chars4499 ) ,  (  from_dash_integral56 ( 2 ) ) ) ) ) );
                struct StrConcat_2110  full_dash_str4502 = ( ( StrConcat_2110_StrConcat ) ( ( ( StrConcat_2087_StrConcat ) ( ( ( StrConcat_2088_StrConcat ) ( ( (  from_dash_string183 ) ( ( " \xf0\x9f\x94\x8e  " ) ,  ( 7 ) ) ) ,  ( dref4491 .stuff .EditorMode_230_Search_s .field1 ) ) ) ,  (  pad4500 ) ) ) ,  ( (  from_dash_string183 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
                int32_t  full_dash_chars4503 = ( (  size_dash_i32294 ) ( ( (  count2111 ) ( ( (  chars2119 ) ( (  full_dash_str4502 ) ) ) ) ) ) );
                ( (  draw_dash_str2121 ) ( (  screen4484 ) ,  (  full_dash_str4502 ) ,  (  op_dash_div1478 ( (  op_dash_sub149 ( ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen4484 ) ) .f_tui ) ) .f_width ) ) ) , (  full_dash_chars4503 ) ) ) , (  from_dash_integral56 ( 2 ) ) ) ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            }
        }
    }
    int32_t  temp2124 = (  from_dash_integral56 ( 0 ) );
    int32_t *  curline4504 = ( &temp2124 );
    return ( Unit_8_Unit );
}

struct RenderState_2126 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_123  f_fg;
    struct Color_123  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_2133 {
    struct StrView_30  field0;
    uint32_t  field1;
};

static struct StrConcat_2133 StrConcat_2133_StrConcat (  struct StrView_30  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2133 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2132 {
    struct StrConcat_2133  field0;
    struct Char_65  field1;
};

static struct StrConcat_2132 StrConcat_2132_StrConcat (  struct StrConcat_2133  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2132 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2131 {
    struct StrConcat_2132  field0;
    uint32_t  field1;
};

static struct StrConcat_2131 StrConcat_2131_StrConcat (  struct StrConcat_2132  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_2131 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2130 {
    struct StrConcat_2131  field0;
    struct Char_65  field1;
};

static struct StrConcat_2130 StrConcat_2130_StrConcat (  struct StrConcat_2131  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2130 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2139 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2138 {
    struct StrViewIter_703  f_left;
    struct IntStrIter_2139  f_right;
};

struct StrConcatIter_2137 {
    struct StrConcatIter_2138  f_left;
    struct AppendIter_958  f_right;
};

struct StrConcatIter_2136 {
    struct StrConcatIter_2137  f_left;
    struct IntStrIter_2139  f_right;
};

struct StrConcatIter_2135 {
    struct StrConcatIter_2136  f_left;
    struct AppendIter_958  f_right;
};

static  struct StrConcatIter_2135   into_dash_iter2141 (    struct StrConcatIter_2135  self1497 ) {
    return (  self1497 );
}

static  struct Maybe_706   next2146 (    struct IntStrIter_2139 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_706_Just ) ( ( (  from_dash_charlike314 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp142 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    uint32_t  trim_dash_down1429 = ( (  pow133 ) ( (  from_dash_integral150 ( 10 ) ) ,  (  op_dash_sub149 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint32_t  upper1430 = (  op_dash_div132 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    uint32_t  upper_dash_mask1431 = (  op_dash_mul152 ( (  op_dash_div132 ( (  upper1430 ) , (  from_dash_integral150 ( 10 ) ) ) ) , (  from_dash_integral150 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast130 ) ( (  op_dash_sub154 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub149 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8977 ) ( (  op_dash_add869 ( (  digit1432 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_706_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_706   next2145 (    struct StrConcatIter_2138 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next2146 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next2144 (    struct StrConcatIter_2137 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2145 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next984 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next2143 (    struct StrConcatIter_2136 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2144 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next2146 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next2142 (    struct StrConcatIter_2135 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2143 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next984 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2134 (    struct StrConcatIter_2135  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2135  temp2140 = ( (  into_dash_iter2141 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2135 *  it1077 = ( &temp2140 );
    while ( ( true ) ) {
        struct Maybe_706  dref1078 = ( (  next2142 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_706_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_706_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_706_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2157 (    uint32_t  self1436 ) {
    if ( (  eq506 ( (  self1436 ) , (  from_dash_integral150 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp155 ( (  self1436 ) , (  from_dash_integral150 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div132 ( (  self1436 ) , (  from_dash_integral150 ( 10 ) ) ) );
        digits1437 = (  op_dash_add144 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_2139   uint_dash_iter2156 (    uint32_t  int1443 ) {
    return ( (struct IntStrIter_2139) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits2157 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2139   chars2155 (    uint32_t  self1455 ) {
    return ( (  uint_dash_iter2156 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_2138   into_dash_iter2154 (    struct StrConcat_2133  dref1504 ) {
    return ( (struct StrConcatIter_2138) { .f_left = ( (  chars708 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2155 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2138   chars2153 (    struct StrConcat_2133  self1515 ) {
    return ( (  into_dash_iter2154 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2137   into_dash_iter2152 (    struct StrConcat_2132  dref1504 ) {
    return ( (struct StrConcatIter_2137) { .f_left = ( (  chars2153 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars998 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2137   chars2151 (    struct StrConcat_2132  self1515 ) {
    return ( (  into_dash_iter2152 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2136   into_dash_iter2150 (    struct StrConcat_2131  dref1504 ) {
    return ( (struct StrConcatIter_2136) { .f_left = ( (  chars2151 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2155 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2136   chars2149 (    struct StrConcat_2131  self1515 ) {
    return ( (  into_dash_iter2150 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2135   into_dash_iter2148 (    struct StrConcat_2130  dref1504 ) {
    return ( (struct StrConcatIter_2135) { .f_left = ( (  chars2149 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars998 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2135   chars2147 (    struct StrConcat_2130  self1515 ) {
    return ( (  into_dash_iter2148 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2129 (    struct StrConcat_2130  s2589 ) {
    ( (  for_dash_each2134 ) ( ( (  chars2147 ) ( (  s2589 ) ) ) ,  (  printf_dash_char302 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   move_dash_cursor_dash_to2128 (    uint32_t  x2603 ,    uint32_t  y2605 ) {
    uint32_t  x2606 = (  op_dash_add156 ( (  x2603 ) , (  from_dash_integral150 ( 1 ) ) ) );
    uint32_t  y2607 = (  op_dash_add156 ( (  y2605 ) , (  from_dash_integral150 ( 1 ) ) ) );
    ( (  print2129 ) ( ( ( StrConcat_2130_StrConcat ) ( ( ( StrConcat_2131_StrConcat ) ( ( ( StrConcat_2132_StrConcat ) ( ( ( StrConcat_2133_StrConcat ) ( ( (  from_dash_string183 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2607 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2606 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  struct Slice_255   subslice2160 (    struct Slice_255  slice1783 ,    size_t  from1785 ,    size_t  to1787 ) {
    struct Cell_256 *  begin_dash_ptr1788 = ( (  offset_dash_ptr785 ) ( ( (  slice1783 ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  from1785 ) ) ) ) );
    if ( ( (  cmp283 ( (  from1785 ) , (  to1787 ) ) != 0 ) || (  cmp283 ( (  from1785 ) , ( (  slice1783 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_255) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1789 = (  op_dash_sub403 ( ( (  min430 ) ( (  to1787 ) ,  ( (  slice1783 ) .f_count ) ) ) , (  from1785 ) ) );
    return ( (struct Slice_255) { .f_ptr = (  begin_dash_ptr1788 ) , .f_count = (  count1789 ) } );
}

struct SliceIter_2163 {
    struct Slice_255  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_2162 {
    struct SliceIter_2163  f_left_dash_it;
    struct SliceIter_2163  f_right_dash_it;
};

struct Tuple2_2164 {
    struct Cell_256  field0;
    struct Cell_256  field1;
};

static struct Tuple2_2164 Tuple2_2164_Tuple2 (  struct Cell_256  field0 ,  struct Cell_256  field1 ) {
    return ( struct Tuple2_2164 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env2166 {
    bool (*  fun1135 )(    struct Tuple2_2164  );
};

struct envunion2167 {
    bool  (*fun) (  struct env2166*  ,    struct Tuple2_2164  ,    bool  );
    struct env2166 env;
};

static  struct Zip_2162   into_dash_iter2168 (    struct Zip_2162  self911 ) {
    return (  self911 );
}

struct Maybe_2169 {
    enum {
        Maybe_2169_None_t,
        Maybe_2169_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2164  field0;
        } Maybe_2169_Just_s;
    } stuff;
};

static struct Maybe_2169 Maybe_2169_Just (  struct Tuple2_2164  field0 ) {
    return ( struct Maybe_2169 ) { .tag = Maybe_2169_Just_t, .stuff = { .Maybe_2169_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_790   next2171 (    struct SliceIter_2163 *  self1829 ) {
    size_t  off1830 = ( ( * (  self1829 ) ) .f_current_dash_offset );
    if ( (  cmp283 ( (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1829 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_790) { .tag = Maybe_790_None_t } );
    }
    struct Cell_256  elem1831 = ( * ( (  offset_dash_ptr785 ) ( ( ( ( * (  self1829 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64354 ) ( (  off1830 ) ) ) ) ) );
    (*  self1829 ) .f_current_dash_offset = (  op_dash_add325 ( (  off1830 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_790_Just ) ( (  elem1831 ) ) );
}

static  struct Maybe_2169   next2170 (    struct Zip_2162 *  self914 ) {
    struct Zip_2162  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_790  dref916 = ( (  next2171 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_790_None_t ) {
            return ( (struct Maybe_2169) { .tag = Maybe_2169_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_790_Just_t ) {
                struct Maybe_790  dref918 = ( (  next2171 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_790_None_t ) {
                    return ( (struct Maybe_2169) { .tag = Maybe_2169_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_790_Just_t ) {
                        ( (  next2171 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next2171 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2169_Just ) ( ( ( Tuple2_2164_Tuple2 ) ( ( dref916 .stuff .Maybe_790_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_790_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce2165 (    struct Zip_2162  iterable1093 ,    bool  base1095 ,   struct envunion2167  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_2162  it1099 = ( (  into_dash_iter2168 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_2169  dref1100 = ( (  next2170 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_2169_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_2169_Just_t ) {
                struct envunion2167  temp2172 = (  fun1097 );
                x1098 = ( temp2172.fun ( &temp2172.env ,  ( dref1100 .stuff .Maybe_2169_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2173 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2173);
    exit ( 1 );
    ( Unit_8_Unit );
    bool  temp2174;
    return (  temp2174 );
}

static  bool   lam2175 (   struct env2166* env ,    struct Tuple2_2164  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any2161 (    struct Zip_2162  it1133 ,    bool (*  fun1135 )(    struct Tuple2_2164  ) ) {
    struct env2166 envinst2166 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce2165 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion2167){ .fun = (  bool  (*) (  struct env2166*  ,    struct Tuple2_2164  ,    bool  ) )lam2175 , .env =  envinst2166 } ) ) );
}

static  struct SliceIter_2163   into_dash_iter2177 (    struct Slice_255  self1823 ) {
    return ( (struct SliceIter_2163) { .f_slice = (  self1823 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_2162   zip2176 (    struct Slice_255  left922 ,    struct Slice_255  right924 ) {
    struct SliceIter_2163  left_dash_it925 = ( (  into_dash_iter2177 ) ( (  left922 ) ) );
    struct SliceIter_2163  right_dash_it926 = ( (  into_dash_iter2177 ) ( (  right924 ) ) );
    return ( (struct Zip_2162) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_2181 {
    struct Color_123  field0;
    struct Color_123  field1;
};

static struct Tuple2_2181 Tuple2_2181_Tuple2 (  struct Color_123  field0 ,  struct Color_123  field1 ) {
    return ( struct Tuple2_2181 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_124 *   cast2185 (    int32_t *  x356 ) {
    return ( (enum Color8_124 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2183 (    enum Color8_124  x573 ) {
    int32_t  temp2184 = ( (  zeroed940 ) ( ) );
    int32_t *  y574 = ( &temp2184 );
    enum Color8_124 *  yp575 = ( (  cast2185 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2182 (    enum Color8_124  l2631 ,    enum Color8_124  r2633 ) {
    return (  eq418 ( ( ( (  cast_dash_on_dash_zeroed2183 ) ( (  l2631 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2183 ) ( (  r2633 ) ) ) ) );
}

static  enum Color16_125 *   cast2189 (    int32_t *  x356 ) {
    return ( (enum Color16_125 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed2187 (    enum Color16_125  x573 ) {
    int32_t  temp2188 = ( (  zeroed940 ) ( ) );
    int32_t *  y574 = ( &temp2188 );
    enum Color16_125 *  yp575 = ( (  cast2189 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq2186 (    enum Color16_125  l2637 ,    enum Color16_125  r2639 ) {
    return (  eq418 ( ( ( (  cast_dash_on_dash_zeroed2187 ) ( (  l2637 ) ) ) ) , ( (  cast_dash_on_dash_zeroed2187 ) ( (  r2639 ) ) ) ) );
}

static  bool   eq2190 (    struct RGB_126  l2667 ,    struct RGB_126  r2669 ) {
    return ( ( (  eq306 ( ( (  l2667 ) .f_r ) , ( (  r2669 ) .f_r ) ) ) && (  eq306 ( ( (  l2667 ) .f_g ) , ( (  r2669 ) .f_g ) ) ) ) && (  eq306 ( ( (  l2667 ) .f_b ) , ( (  r2669 ) .f_b ) ) ) );
}

static  bool   eq2180 (    struct Color_123  l2689 ,    struct Color_123  r2691 ) {
    return ( {  struct Tuple2_2181  dref2692 = ( ( Tuple2_2181_Tuple2 ) ( (  l2689 ) ,  (  r2691 ) ) ) ; dref2692 .field0.tag == Color_123_ColorDefault_t && dref2692 .field1.tag == Color_123_ColorDefault_t ? ( true ) : dref2692 .field0.tag == Color_123_Color8_t && dref2692 .field1.tag == Color_123_Color8_t ? (  eq2182 ( ( dref2692 .field0 .stuff .Color_123_Color8_s .field0 ) , ( dref2692 .field1 .stuff .Color_123_Color8_s .field0 ) ) ) : dref2692 .field0.tag == Color_123_Color16_t && dref2692 .field1.tag == Color_123_Color16_t ? (  eq2186 ( ( dref2692 .field0 .stuff .Color_123_Color16_s .field0 ) , ( dref2692 .field1 .stuff .Color_123_Color16_s .field0 ) ) ) : dref2692 .field0.tag == Color_123_Color256_t && dref2692 .field1.tag == Color_123_Color256_t ? (  eq306 ( ( dref2692 .field0 .stuff .Color_123_Color256_s .field0 ) , ( dref2692 .field1 .stuff .Color_123_Color256_s .field0 ) ) ) : dref2692 .field0.tag == Color_123_ColorRGB_t && dref2692 .field1.tag == Color_123_ColorRGB_t ? (  eq2190 ( ( dref2692 .field0 .stuff .Color_123_ColorRGB_s .field0 ) , ( dref2692 .field1 .stuff .Color_123_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq2179 (    struct Cell_256  l3453 ,    struct Cell_256  r3455 ) {
    if ( ( !  eq502 ( ( (  l3453 ) .f_c ) , ( (  r3455 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2180 ( ( (  l3453 ) .f_fg ) , ( (  r3455 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq2180 ( ( (  l3453 ) .f_bg ) , ( (  r3455 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam2178 (    struct Tuple2_2164  dref3509 ) {
    return ( !  eq2179 ( ( dref3509 .field0 ) , ( dref3509 .field1 ) ) );
}

static  enum Unit_8   set_dash_default_dash_fg2193 (  ) {
    ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg82194 (    enum Color8_124  color2642 ) {
    enum Color8_124  dref2643 = (  color2642 );
    switch (  dref2643 ) {
        case Color8_124_Black8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Red8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Green8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Yellow8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Blue8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Magenta8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Cyan8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_White8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg162195 (    enum Color16_125  color2646 ) {
    enum Color16_125  dref2647 = (  color2646 );
    switch (  dref2647 ) {
        case Color16_125_Black16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Red16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Green16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Yellow16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Blue16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Magenta16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Cyan16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_White16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_BrightBlack16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_BrightRed16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_BrightGreen16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_BrightYellow16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_BrightBlue16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_BrightMagenta16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_BrightCyan16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_BrightWhite16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

struct StrConcat_2199 {
    struct StrView_30  field0;
    uint8_t  field1;
};

static struct StrConcat_2199 StrConcat_2199_StrConcat (  struct StrView_30  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2199 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2198 {
    struct StrConcat_2199  field0;
    struct Char_65  field1;
};

static struct StrConcat_2198 StrConcat_2198_StrConcat (  struct StrConcat_2199  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2198 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_2203 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_2202 {
    struct StrViewIter_703  f_left;
    struct IntStrIter_2203  f_right;
};

struct StrConcatIter_2201 {
    struct StrConcatIter_2202  f_left;
    struct AppendIter_958  f_right;
};

static  struct StrConcatIter_2201   into_dash_iter2205 (    struct StrConcatIter_2201  self1497 ) {
    return (  self1497 );
}

struct env2211 {
    uint8_t  base1210;
    ;
};

struct envunion2212 {
    uint8_t  (*fun) (  struct env2211*  ,    int32_t  ,    uint8_t  );
    struct env2211 env;
};

static  uint8_t   reduce2210 (    struct Range_135  iterable1093 ,    uint8_t  base1095 ,   struct envunion2212  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_138  it1099 = ( (  into_dash_iter139 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_140  dref1100 = ( (  next141 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_140_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_140_Just_t ) {
                struct envunion2212  temp2213 = (  fun1097 );
                x1098 = ( temp2213.fun ( &temp2213.env ,  ( dref1100 .stuff .Maybe_140_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp2214 = ( (  from_dash_string57 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp2214);
    exit ( 1 );
    ( Unit_8_Unit );
    uint8_t  temp2215;
    return (  temp2215 );
}

static  uint8_t   op_dash_mul2217 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam2216 (   struct env2211* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul2217 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow2209 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env2211 envinst2211 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce2210 ) ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( (  p1212 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral310 ( 1 ) ) ,  ( (struct envunion2212){ .fun = (  uint8_t  (*) (  struct env2211*  ,    int32_t  ,    uint8_t  ) )lam2216 , .env =  envinst2211 } ) ) );
}

static  uint8_t   op_dash_div2218 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast2219 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_706   next2208 (    struct IntStrIter_2203 *  self1428 ) {
    if ( ( ( * (  self1428 ) ) .f_negative ) ) {
        (*  self1428 ) .f_negative = ( false );
        return ( ( Maybe_706_Just ) ( ( (  from_dash_charlike314 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp142 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_706) { .tag = Maybe_706_None_t } );
    }
    uint8_t  trim_dash_down1429 = ( (  pow2209 ) ( (  from_dash_integral310 ( 10 ) ) ,  (  op_dash_sub149 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) ) ) );
    uint8_t  upper1430 = (  op_dash_div2218 ( ( ( * (  self1428 ) ) .f_int ) , (  trim_dash_down1429 ) ) );
    uint8_t  upper_dash_mask1431 = (  op_dash_mul2217 ( (  op_dash_div2218 ( (  upper1430 ) , (  from_dash_integral310 ( 10 ) ) ) ) , (  from_dash_integral310 ( 10 ) ) ) );
    uint8_t  digit1432 = ( ( (  cast2219 ) ( (  op_dash_sub868 ( (  upper1430 ) , (  upper_dash_mask1431 ) ) ) ) ) );
    (*  self1428 ) .f_len = (  op_dash_sub149 ( ( ( * (  self1428 ) ) .f_len ) , (  from_dash_integral56 ( 1 ) ) ) );
    struct Char_65  digit_dash_char1433 = ( (  from_dash_u8977 ) ( (  op_dash_add869 ( (  digit1432 ) , (  from_dash_integral310 ( 48 ) ) ) ) ) );
    return ( ( Maybe_706_Just ) ( (  digit_dash_char1433 ) ) );
}

static  struct Maybe_706   next2207 (    struct StrConcatIter_2202 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next707 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next2208 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next2206 (    struct StrConcatIter_2201 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2207 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next984 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2200 (    struct StrConcatIter_2201  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2201  temp2204 = ( (  into_dash_iter2205 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2201 *  it1077 = ( &temp2204 );
    while ( ( true ) ) {
        struct Maybe_706  dref1078 = ( (  next2206 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_706_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_706_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_706_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  int32_t   count_dash_digits2226 (    uint8_t  self1436 ) {
    if ( (  eq306 ( (  self1436 ) , (  from_dash_integral310 ( 0 ) ) ) ) ) {
        return (  from_dash_integral56 ( 1 ) );
    }
    int32_t  digits1437 = (  from_dash_integral56 ( 0 ) );
    while ( (  cmp318 ( (  self1436 ) , (  from_dash_integral310 ( 0 ) ) ) == 2 ) ) {
        self1436 = (  op_dash_div2218 ( (  self1436 ) , (  from_dash_integral310 ( 10 ) ) ) );
        digits1437 = (  op_dash_add144 ( (  digits1437 ) , (  from_dash_integral56 ( 1 ) ) ) );
    }
    return (  digits1437 );
}

static  struct IntStrIter_2203   uint_dash_iter2225 (    uint8_t  int1443 ) {
    return ( (struct IntStrIter_2203) { .f_int = (  int1443 ) , .f_len = ( (  count_dash_digits2226 ) ( (  int1443 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_2203   chars2224 (    uint8_t  self1461 ) {
    return ( (  uint_dash_iter2225 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_2202   into_dash_iter2223 (    struct StrConcat_2199  dref1504 ) {
    return ( (struct StrConcatIter_2202) { .f_left = ( (  chars708 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2224 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2202   chars2222 (    struct StrConcat_2199  self1515 ) {
    return ( (  into_dash_iter2223 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2201   into_dash_iter2221 (    struct StrConcat_2198  dref1504 ) {
    return ( (struct StrConcatIter_2201) { .f_left = ( (  chars2222 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars998 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2201   chars2220 (    struct StrConcat_2198  self1515 ) {
    return ( (  into_dash_iter2221 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2197 (    struct StrConcat_2198  s2589 ) {
    ( (  for_dash_each2200 ) ( ( (  chars2220 ) ( (  s2589 ) ) ) ,  (  printf_dash_char302 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2562196 (    uint8_t  color2660 ) {
    ( (  print2197 ) ( ( ( StrConcat_2198_StrConcat ) ( ( ( StrConcat_2199_StrConcat ) ( ( (  from_dash_string183 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2660 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

struct StrConcat_2232 {
    struct StrConcat_2198  field0;
    uint8_t  field1;
};

static struct StrConcat_2232 StrConcat_2232_StrConcat (  struct StrConcat_2198  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2232 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2231 {
    struct StrConcat_2232  field0;
    struct Char_65  field1;
};

static struct StrConcat_2231 StrConcat_2231_StrConcat (  struct StrConcat_2232  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2231 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2230 {
    struct StrConcat_2231  field0;
    uint8_t  field1;
};

static struct StrConcat_2230 StrConcat_2230_StrConcat (  struct StrConcat_2231  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_2230 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_2229 {
    struct StrConcat_2230  field0;
    struct Char_65  field1;
};

static struct StrConcat_2229 StrConcat_2229_StrConcat (  struct StrConcat_2230  field0 ,  struct Char_65  field1 ) {
    return ( struct StrConcat_2229 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_2237 {
    struct StrConcatIter_2201  f_left;
    struct IntStrIter_2203  f_right;
};

struct StrConcatIter_2236 {
    struct StrConcatIter_2237  f_left;
    struct AppendIter_958  f_right;
};

struct StrConcatIter_2235 {
    struct StrConcatIter_2236  f_left;
    struct IntStrIter_2203  f_right;
};

struct StrConcatIter_2234 {
    struct StrConcatIter_2235  f_left;
    struct AppendIter_958  f_right;
};

static  struct StrConcatIter_2234   into_dash_iter2239 (    struct StrConcatIter_2234  self1497 ) {
    return (  self1497 );
}

static  struct Maybe_706   next2243 (    struct StrConcatIter_2237 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2206 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next2208 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next2242 (    struct StrConcatIter_2236 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2243 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next984 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next2241 (    struct StrConcatIter_2235 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2242 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next2208 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_706   next2240 (    struct StrConcatIter_2234 *  self1500 ) {
    struct Maybe_706  dref1501 = ( (  next2241 ) ( ( & ( ( * (  self1500 ) ) .f_left ) ) ) );
    if ( dref1501.tag == Maybe_706_Just_t ) {
        return ( ( Maybe_706_Just ) ( ( dref1501 .stuff .Maybe_706_Just_s .field0 ) ) );
    }
    else {
        if ( dref1501.tag == Maybe_706_None_t ) {
            return ( (  next984 ) ( ( & ( ( * (  self1500 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_8   for_dash_each2233 (    struct StrConcatIter_2234  iterable1074 ,    enum Unit_8 (*  fun1076 )(    struct Char_65  ) ) {
    struct StrConcatIter_2234  temp2238 = ( (  into_dash_iter2239 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_2234 *  it1077 = ( &temp2238 );
    while ( ( true ) ) {
        struct Maybe_706  dref1078 = ( (  next2240 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_706_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_706_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_706_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct StrConcatIter_2237   into_dash_iter2251 (    struct StrConcat_2232  dref1504 ) {
    return ( (struct StrConcatIter_2237) { .f_left = ( (  chars2220 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2224 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2237   chars2250 (    struct StrConcat_2232  self1515 ) {
    return ( (  into_dash_iter2251 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2236   into_dash_iter2249 (    struct StrConcat_2231  dref1504 ) {
    return ( (struct StrConcatIter_2236) { .f_left = ( (  chars2250 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars998 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2236   chars2248 (    struct StrConcat_2231  self1515 ) {
    return ( (  into_dash_iter2249 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2235   into_dash_iter2247 (    struct StrConcat_2230  dref1504 ) {
    return ( (struct StrConcatIter_2235) { .f_left = ( (  chars2248 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars2224 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2235   chars2246 (    struct StrConcat_2230  self1515 ) {
    return ( (  into_dash_iter2247 ) ( (  self1515 ) ) );
}

static  struct StrConcatIter_2234   into_dash_iter2245 (    struct StrConcat_2229  dref1504 ) {
    return ( (struct StrConcatIter_2234) { .f_left = ( (  chars2246 ) ( ( dref1504 .field0 ) ) ) , .f_right = ( (  chars998 ) ( ( dref1504 .field1 ) ) ) } );
}

static  struct StrConcatIter_2234   chars2244 (    struct StrConcat_2229  self1515 ) {
    return ( (  into_dash_iter2245 ) ( (  self1515 ) ) );
}

static  enum Unit_8   print2228 (    struct StrConcat_2229  s2589 ) {
    ( (  for_dash_each2233 ) ( ( (  chars2244 ) ( (  s2589 ) ) ) ,  (  printf_dash_char302 ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg_dash_rgb2227 (    struct RGB_126  c2682 ) {
    ( (  print2228 ) ( ( ( StrConcat_2229_StrConcat ) ( ( ( StrConcat_2230_StrConcat ) ( ( ( StrConcat_2231_StrConcat ) ( ( ( StrConcat_2232_StrConcat ) ( ( ( StrConcat_2198_StrConcat ) ( ( ( StrConcat_2199_StrConcat ) ( ( (  from_dash_string183 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2682 ) .f_r ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2682 ) .f_g ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2682 ) .f_b ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_fg2192 (    struct Color_123  c2703 ) {
    struct Color_123  dref2704 = (  c2703 );
    if ( dref2704.tag == Color_123_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg2193 ) ( ) );
    }
    else {
        if ( dref2704.tag == Color_123_Color8_t ) {
            ( (  set_dash_fg82194 ) ( ( dref2704 .stuff .Color_123_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2704.tag == Color_123_Color16_t ) {
                ( (  set_dash_fg162195 ) ( ( dref2704 .stuff .Color_123_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2704.tag == Color_123_Color256_t ) {
                    ( (  set_dash_fg2562196 ) ( ( dref2704 .stuff .Color_123_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2704.tag == Color_123_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb2227 ) ( ( dref2704 .stuff .Color_123_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_default_dash_bg2253 (  ) {
    ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg82254 (    enum Color8_124  color2650 ) {
    enum Color8_124  dref2651 = (  color2650 );
    switch (  dref2651 ) {
        case Color8_124_Black8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Red8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Green8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Yellow8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Blue8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Magenta8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_Cyan8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_124_White8 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg162255 (    enum Color16_125  color2654 ) {
    enum Color16_125  dref2655 = (  color2654 );
    switch (  dref2655 ) {
        case Color16_125_Black16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Red16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Green16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Yellow16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Blue16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Magenta16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_Cyan16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_White16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_125_BrightBlack16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_125_BrightRed16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_125_BrightGreen16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_125_BrightYellow16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_125_BrightBlue16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_125_BrightMagenta16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_125_BrightCyan16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_125_BrightWhite16 : {
            ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2562256 (    uint8_t  color2663 ) {
    ( (  print2197 ) ( ( ( StrConcat_2198_StrConcat ) ( ( ( StrConcat_2199_StrConcat ) ( ( (  from_dash_string183 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2663 ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg_dash_rgb2257 (    struct RGB_126  c2685 ) {
    ( (  print2228 ) ( ( ( StrConcat_2229_StrConcat ) ( ( ( StrConcat_2230_StrConcat ) ( ( ( StrConcat_2231_StrConcat ) ( ( ( StrConcat_2232_StrConcat ) ( ( ( StrConcat_2198_StrConcat ) ( ( ( StrConcat_2199_StrConcat ) ( ( (  from_dash_string183 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2685 ) .f_r ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2685 ) .f_g ) ) ) ,  ( (  from_dash_charlike314 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2685 ) .f_b ) ) ) ,  ( (  from_dash_charlike314 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   set_dash_bg2252 (    struct Color_123  c2711 ) {
    struct Color_123  dref2712 = (  c2711 );
    if ( dref2712.tag == Color_123_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg2253 ) ( ) );
    }
    else {
        if ( dref2712.tag == Color_123_Color8_t ) {
            ( (  set_dash_bg82254 ) ( ( dref2712 .stuff .Color_123_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2712.tag == Color_123_Color16_t ) {
                ( (  set_dash_bg162255 ) ( ( dref2712 .stuff .Color_123_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2712.tag == Color_123_Color256_t ) {
                    ( (  set_dash_bg2562256 ) ( ( dref2712 .stuff .Color_123_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2712.tag == Color_123_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb2257 ) ( ( dref2712 .stuff .Color_123_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_8_Unit );
}

static  uint32_t   i32_dash_u322258 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_8   emit_dash_cell2191 (    struct RenderState_2126 *  rs3485 ,    struct Cell_256 *  c3487 ,    uint32_t  x3489 ,    uint32_t  y3491 ) {
    if ( ( ( !  eq506 ( (  x3489 ) , ( ( * (  rs3485 ) ) .f_x ) ) ) || ( !  eq506 ( (  y3491 ) , ( ( * (  rs3485 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to2128 ) ( (  x3489 ) ,  (  y3491 ) ) );
        (*  rs3485 ) .f_x = (  x3489 );
        (*  rs3485 ) .f_y = (  y3491 );
    }
    struct Char_65  char3492 = ( ( * (  c3487 ) ) .f_c );
    struct Color_123  bg3493 = ( ( * (  c3487 ) ) .f_bg );
    if ( (  eq418 ( ( ( * (  c3487 ) ) .f_char_dash_width ) , (  op_dash_neg736 ( (  from_dash_integral56 ( 1 ) ) ) ) ) ) ) {
        char3492 = ( (  from_dash_charlike314 ) ( ( " " ) ,  ( 1 ) ) );
        bg3493 = ( ( Color_123_Color8 ) ( ( Color8_124_Red8 ) ) );
    }
    if ( ( !  eq2180 ( ( ( * (  rs3485 ) ) .f_fg ) , ( ( * (  c3487 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg2192 ) ( ( ( * (  c3487 ) ) .f_fg ) ) );
        (*  rs3485 ) .f_fg = ( ( * (  c3487 ) ) .f_fg );
    }
    if ( ( !  eq2180 ( ( ( * (  rs3485 ) ) .f_bg ) , (  bg3493 ) ) ) ) {
        ( (  set_dash_bg2252 ) ( (  bg3493 ) ) );
        (*  rs3485 ) .f_bg = (  bg3493 );
    }
    ( (  print_dash_str301 ) ( (  char3492 ) ) );
    uint32_t  char_dash_width3494 = ( (  i32_dash_u322258 ) ( ( (  max1049 ) ( ( ( * (  c3487 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) ) ) );
    (*  rs3485 ) .f_x = (  op_dash_add156 ( ( ( * (  rs3485 ) ) .f_x ) , (  char_dash_width3494 ) ) );
    return ( Unit_8_Unit );
}

struct Zip_2261 {
    struct SliceIter_2163  f_left_dash_it;
    struct FromIter_359  f_right_dash_it;
};

struct env2262 {
    ;
    struct Slice_255  dest1854;
    ;
};

struct Tuple2_2264 {
    struct Cell_256  field0;
    int32_t  field1;
};

static struct Tuple2_2264 Tuple2_2264_Tuple2 (  struct Cell_256  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_2264 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion2263 {
    enum Unit_8  (*fun) (  struct env2262*  ,    struct Tuple2_2264  );
    struct env2262 env;
};

static  struct Zip_2261   into_dash_iter2266 (    struct Zip_2261  self911 ) {
    return (  self911 );
}

struct Maybe_2267 {
    enum {
        Maybe_2267_None_t,
        Maybe_2267_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_2264  field0;
        } Maybe_2267_Just_s;
    } stuff;
};

static struct Maybe_2267 Maybe_2267_Just (  struct Tuple2_2264  field0 ) {
    return ( struct Maybe_2267 ) { .tag = Maybe_2267_Just_t, .stuff = { .Maybe_2267_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_2267   next2268 (    struct Zip_2261 *  self914 ) {
    struct Zip_2261  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_790  dref916 = ( (  next2171 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_790_None_t ) {
            return ( (struct Maybe_2267) { .tag = Maybe_2267_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_790_Just_t ) {
                struct Maybe_140  dref918 = ( (  next365 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_140_None_t ) {
                    return ( (struct Maybe_2267) { .tag = Maybe_2267_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_140_Just_t ) {
                        ( (  next2171 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next365 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_2267_Just ) ( ( ( Tuple2_2264_Tuple2 ) ( ( dref916 .stuff .Maybe_790_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_140_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_8   for_dash_each2260 (    struct Zip_2261  iterable1074 ,   struct envunion2263  fun1076 ) {
    struct Zip_2261  temp2265 = ( (  into_dash_iter2266 ) ( (  iterable1074 ) ) );
    struct Zip_2261 *  it1077 = ( &temp2265 );
    while ( ( true ) ) {
        struct Maybe_2267  dref1078 = ( (  next2268 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_2267_None_t ) {
            return ( Unit_8_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_2267_Just_t ) {
                struct envunion2263  temp2269 = (  fun1076 );
                ( temp2269.fun ( &temp2269.env ,  ( dref1078 .stuff .Maybe_2267_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_8_Unit );
}

static  struct Zip_2261   zip2270 (    struct Slice_255  left922 ,    struct FromIter_359  right924 ) {
    struct SliceIter_2163  left_dash_it925 = ( (  into_dash_iter2177 ) ( (  left922 ) ) );
    struct FromIter_359  right_dash_it926 = ( (  into_dash_iter369 ) ( (  right924 ) ) );
    return ( (struct Zip_2261) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_8   lam2271 (   struct env2262* env ,    struct Tuple2_2264  dref1855 ) {
    return ( (  set783 ) ( ( env->dest1854 ) ,  ( (  i32_dash_size355 ) ( ( dref1855 .field1 ) ) ) ,  ( dref1855 .field0 ) ) );
}

static  enum Unit_8   copy_dash_to2259 (    struct Slice_255  src1852 ,    struct Slice_255  dest1854 ) {
    if ( (  cmp283 ( ( (  src1852 ) .f_count ) , ( (  dest1854 ) .f_count ) ) == 2 ) ) {
        ( (  panic553 ) ( ( ( StrConcat_554_StrConcat ) ( ( ( StrConcat_347_StrConcat ) ( ( ( StrConcat_71_StrConcat ) ( ( ( StrConcat_72_StrConcat ) ( ( (  from_dash_string183 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1852 ) .f_count ) ) ) ,  ( (  from_dash_string183 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1854 ) .f_count ) ) ) ,  ( (  from_dash_string183 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env2262 envinst2262 = {
        .dest1854 =  dest1854 ,
    };
    ( (  for_dash_each2260 ) ( ( (  zip2270 ) ( (  src1852 ) ,  ( (  from370 ) ( (  from_dash_integral56 ( 0 ) ) ) ) ) ) ,  ( (struct envunion2263){ .fun = (  enum Unit_8  (*) (  struct env2262*  ,    struct Tuple2_2264  ) )lam2271 , .env =  envinst2262 } ) ) );
    return ( Unit_8_Unit );
}

static  uint32_t   render_dash_screen2125 (    struct Screen_254 *  screen3497 ) {
    int32_t  w3498 = ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3497 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3499 = ( (  u32_dash_i321767 ) ( ( ( * ( ( * (  screen3497 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_2126  temp2127 = ( (struct RenderState_2126) { .f_x = (  from_dash_integral150 ( 0 ) ) , .f_y = (  from_dash_integral150 ( 0 ) ) , .f_fg = ( (struct Color_123) { .tag = Color_123_ColorDefault_t } ) , .f_bg = ( (struct Color_123) { .tag = Color_123_ColorDefault_t } ) , .f_changes = (  from_dash_integral150 ( 0 ) ) } );
    struct RenderState_2126 *  rs3500 = ( &temp2127 );
    ( (  move_dash_cursor_dash_to2128 ) ( (  from_dash_integral150 ( 0 ) ) ,  (  from_dash_integral150 ( 0 ) ) ) );
    struct RangeIter_138  temp2158 =  into_dash_iter139 ( ( (  to148 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  op_dash_sub149 ( (  h3499 ) , (  from_dash_integral56 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_140  __cond2159 =  next141 (&temp2158);
        if (  __cond2159 .tag == 0 ) {
            break;
        }
        int32_t  y3502 =  __cond2159 .stuff .Maybe_140_Just_s .field0;
        int32_t  x_dash_v3503 = (  from_dash_integral56 ( 0 ) );
        while ( (  cmp142 ( (  x_dash_v3503 ) , (  w3498 ) ) == 0 ) ) {
            size_t  i3504 = ( (  i32_dash_size355 ) ( (  op_dash_add144 ( (  op_dash_mul1479 ( (  y3502 ) , (  w3498 ) ) ) , (  x_dash_v3503 ) ) ) ) );
            struct Cell_256 *  cur3505 = ( (  get_dash_ptr784 ) ( ( ( * (  screen3497 ) ) .f_current ) ,  (  i3504 ) ) );
            int32_t  char_dash_width3506 = ( (  max1049 ) ( ( ( * (  cur3505 ) ) .f_char_dash_width ) ,  (  from_dash_integral56 ( 1 ) ) ) );
            struct Slice_255  curs3507 = ( (  subslice2160 ) ( ( ( * (  screen3497 ) ) .f_current ) ,  (  i3504 ) ,  (  op_dash_add325 ( (  i3504 ) , ( (  i32_dash_size355 ) ( (  char_dash_width3506 ) ) ) ) ) ) );
            struct Slice_255  prevs3508 = ( (  subslice2160 ) ( ( ( * (  screen3497 ) ) .f_previous ) ,  (  i3504 ) ,  (  op_dash_add325 ( (  i3504 ) , ( (  i32_dash_size355 ) ( (  char_dash_width3506 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3497 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any2161 ) ( ( (  zip2176 ) ( (  curs3507 ) ,  (  prevs3508 ) ) ) ,  (  lam2178 ) ) ) ) ) {
                (*  rs3500 ) .f_changes = (  op_dash_add156 ( ( ( * (  rs3500 ) ) .f_changes ) , (  from_dash_integral150 ( 1 ) ) ) );
                ( (  emit_dash_cell2191 ) ( (  rs3500 ) ,  (  cur3505 ) ,  ( (  i32_dash_u322258 ) ( (  x_dash_v3503 ) ) ) ,  ( (  i32_dash_u322258 ) ( (  y3502 ) ) ) ) );
                ( (  copy_dash_to2259 ) ( (  curs3507 ) ,  (  prevs3508 ) ) );
            }
            x_dash_v3503 = (  op_dash_add144 ( (  x_dash_v3503 ) , (  char_dash_width3506 ) ) );
        }
    }
    (*  screen3497 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors710 ) ( ) );
    ( (  flush_dash_stdout713 ) ( ) );
    return ( ( * (  rs3500 ) ) .f_changes );
}

static  void *   cast_dash_ptr2278 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of2279 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed2276 (  ) {
    struct timespec *  temp2277;
    struct timespec *  x570 = (  temp2277 );
    ( ( memset ) ( ( (  cast_dash_ptr2278 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral56 ( 0 ) ) ,  ( (  size_dash_of2279 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr2275 (  ) {
    return ( (  zeroed2276 ) ( ) );
}

static  enum Unit_8   sync2272 (    struct Tui_81 *  tui3368 ) {
    if ( (  eq506 ( ( ( * (  tui3368 ) ) .f_target_dash_fps ) , (  from_dash_integral150 ( 0 ) ) ) ) ) {
        return ( Unit_8_Unit );
    }
    int64_t  frame_dash_ns3369 = (  op_dash_div974 ( (  from_dash_integral402 ( 1000000000 ) ) , ( (  size_dash_i64354 ) ( ( (  u32_dash_size768 ) ( ( ( * (  tui3368 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp2273 = ( (  undefined749 ) ( ) );
    struct timespec *  now3370 = ( &temp2273 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic751 ) ( ) ) ,  (  now3370 ) ) );
    int64_t  elapsed_dash_ns3371 = (  op_dash_add504 ( (  op_dash_mul323 ( (  op_dash_sub976 ( ( ( * (  now3370 ) ) .tv_sec ) , ( ( ( * (  tui3368 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral402 ( 1000000000 ) ) ) ) , (  op_dash_sub976 ( ( ( * (  now3370 ) ) .tv_nsec ) , ( ( ( * (  tui3368 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3372 = (  op_dash_sub976 ( (  frame_dash_ns3369 ) , (  elapsed_dash_ns3371 ) ) );
    if ( (  cmp994 ( (  sleep_dash_ns3372 ) , (  from_dash_integral402 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp2274 = ( (struct timespec) { .tv_sec = (  from_dash_integral402 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3372 ) } );
        struct timespec *  ts3373 = ( &temp2274 );
        ( ( nanosleep ) ( (  ts3373 ) ,  ( (  null_dash_ptr2275 ) ( ) ) ) );
    }
    struct timespec  temp2280 = ( (  undefined749 ) ( ) );
    struct timespec *  last_dash_sync3374 = ( &temp2280 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic751 ) ( ) ) ,  (  last_dash_sync3374 ) ) );
    (*  tui3368 ) .f_last_dash_sync = ( * (  last_dash_sync3374 ) );
    (*  tui3368 ) .f_fps_dash_count = (  op_dash_add156 ( ( ( * (  tui3368 ) ) .f_fps_dash_count ) , (  from_dash_integral150 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3375 = (  op_dash_add504 ( (  op_dash_mul323 ( (  op_dash_sub976 ( ( ( ( * (  tui3368 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3368 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral402 ( 1000 ) ) ) ) , (  op_dash_div974 ( (  op_dash_sub976 ( ( ( ( * (  tui3368 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3368 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral402 ( 1000000 ) ) ) ) ) );
    if ( (  cmp994 ( (  fps_dash_elapsed_dash_ms3375 ) , (  from_dash_integral402 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3368 ) .f_actual_dash_fps = ( ( * (  tui3368 ) ) .f_fps_dash_count );
        (*  tui3368 ) .f_fps_dash_count = (  from_dash_integral150 ( 0 ) );
        (*  tui3368 ) .f_fps_dash_ts = ( ( * (  tui3368 ) ) .f_last_dash_sync );
    }
    return ( Unit_8_Unit );
}

static  void *   cast_dash_ptr2283 (    struct Cell_256 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_8   free2282 (    enum CAllocator_10  dref1960 ,    struct Slice_255  slice1962 ) {
    if (!(  dref1960 == CAllocator_10_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr2283 ) ( ( (  slice1962 ) .f_ptr ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   free_dash_screen2281 (    struct Screen_254 *  screen3473 ) {
    enum CAllocator_10  al3474 = ( ( * (  screen3473 ) ) .f_al );
    ( (  free2282 ) ( (  al3474 ) ,  ( ( * (  screen3473 ) ) .f_current ) ) );
    ( (  free2282 ) ( (  al3474 ) ,  ( ( * (  screen3473 ) ) .f_previous ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_mouse2285 (  ) {
    ( (  print_dash_str293 ) ( ( (  from_dash_string183 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   show_dash_cursor2286 (  ) {
    ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   reset_dash_cursor_dash_position2287 (  ) {
    ( (  print701 ) ( ( (  from_dash_string183 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   disable_dash_raw_dash_mode2288 (    struct Termios_83 *  og_dash_termios3348 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno639 ) ( ) ) ,  ( (  tcsa_dash_flush699 ) ( ) ) ,  ( (  cast_dash_ptr640 ) ( (  og_dash_termios3348 ) ) ) ) );
    return ( Unit_8_Unit );
}

static  enum Unit_8   deinit2284 (    struct Tui_81 *  tui3378 ) {
    ( (  disable_dash_mouse2285 ) ( ) );
    ( (  show_dash_cursor2286 ) ( ) );
    ( (  reset_dash_colors710 ) ( ) );
    ( (  clear_dash_screen711 ) ( ) );
    ( (  reset_dash_cursor_dash_position2287 ) ( ) );
    ( (  disable_dash_raw_dash_mode2288 ) ( ( & ( ( * (  tui3378 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout713 ) ( ) );
    return ( Unit_8_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2037 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2038 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2039 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2038 =  growth_dash_factor2038 ,
        .starting_dash_size2037 =  starting_dash_size2037 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2038 =  growth_dash_factor2038 ,
        .starting_dash_size2037 =  starting_dash_size2037 ,
    };
    struct env3 envinst3 = {
        .growth_dash_factor2038 =  growth_dash_factor2038 ,
        .starting_dash_size2037 =  starting_dash_size2037 ,
    };
    struct env4 envinst4 = {
        .growth_dash_factor2038 =  growth_dash_factor2038 ,
        .starting_dash_size2037 =  starting_dash_size2037 ,
    };
    struct env5 envinst5 = {
        .growth_dash_factor2038 =  growth_dash_factor2038 ,
        .starting_dash_size2037 =  starting_dash_size2037 ,
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
        .envinst6 = envinst6 ,
        .envinst1 = envinst1 ,
    };
    struct env40 envinst40 = {
        .shrink_dash_factor2039 =  shrink_dash_factor2039 ,
    };
    struct env41 envinst41 = {
        .shrink_dash_factor2039 =  shrink_dash_factor2039 ,
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
    ( ( setlocale ) ( ( (  lc_dash_ctype55 ) ( ) ) ,  ( (  from_dash_string57 ) ( ( "" ) ,  ( 0 ) ) ) ) );
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
        .envinst44 = envinst44 ,
    };
    struct env69 envinst69 = {
        .envinst63 = envinst63 ,
        .envinst60 = envinst60 ,
    };
    struct env74 envinst74 = {
        .envinst66 = envinst66 ,
        .envinst60 = envinst60 ,
    };
    bool  temp76 = ( false );
    bool *  should_dash_resize3358 = ( &temp76 );
    struct env77 envinst77 = {
        .should_dash_resize3358 =  should_dash_resize3358 ,
    };
    struct env78 envinst78 = {
        .should_dash_resize3358 =  should_dash_resize3358 ,
    };
    struct env79 envinst79 = {
        .envinst78 = envinst78 ,
    };
    struct env85 envinst85 = {
        .envinst78 = envinst78 ,
    };
    struct env87 envinst87 = {
        .envinst50 = envinst50 ,
    };
    struct env89 envinst89 = {
        .envinst53 = envinst53 ,
        .envinst37 = envinst37 ,
        .envinst48 = envinst48 ,
    };
    struct env93 envinst93 = {
        .envinst6 = envinst6 ,
        .envinst48 = envinst48 ,
        .envinst89 = envinst89 ,
        .envinst40 = envinst40 ,
        .envinst41 = envinst41 ,
    };
    struct env102 envinst102 = {
        .envinst93 = envinst93 ,
    };
    struct env104 envinst104 = {
        .envinst93 = envinst93 ,
    };
    struct env106 envinst106 = {
        .envinst102 = envinst102 ,
    };
    struct env108 envinst108 = {
        .envinst104 = envinst104 ,
    };
    struct env110 envinst110 = {
        .envinst48 = envinst48 ,
    };
    struct env112 envinst112 = {
        .envinst33 = envinst33 ,
        .envinst21 = envinst21 ,
        .envinst110 = envinst110 ,
        .envinst104 = envinst104 ,
    };
    struct env117 envinst117 = {
        .envinst21 = envinst21 ,
    };
    struct env119 envinst119 = {
        .envinst35 = envinst35 ,
    };
    struct env121 envinst121 = {
        .envinst119 = envinst119 ,
    };
    struct Color_123  camel3952 = ( (  rgb127 ) ( (  from_dash_integral150 ( 11766360 ) ) ) );
    struct Color_123  olive3953 = ( (  rgb127 ) ( (  from_dash_integral150 ( 7303983 ) ) ) );
    struct Color_123  tea_dash_green3954 = ( (  rgb127 ) ( (  from_dash_integral150 ( 14875064 ) ) ) );
    struct Color_123  chocolate3955 = ( (  rgb127 ) ( (  from_dash_integral150 ( 13721620 ) ) ) );
    struct Color_123  muted_dash_olive3956 = ( (  rgb127 ) ( (  from_dash_integral150 ( 12308106 ) ) ) );
    struct Color_123  palm_dash_leaf3957 = ( (  rgb127 ) ( (  from_dash_integral150 ( 9674588 ) ) ) );
    struct Color_123  lime_dash_green3958 = ( (  rgb127 ) ( (  from_dash_integral150 ( 3263232 ) ) ) );
    struct Color_123  forest_dash_green3959 = ( (  rgb127 ) ( (  from_dash_integral150 ( 1153058 ) ) ) );
    struct Color_123  green3960 = ( (  rgb127 ) ( (  from_dash_integral150 ( 2781729 ) ) ) );
    struct Color_123  dark_dash_spruce3961 = ( (  rgb127 ) ( (  from_dash_integral150 ( 1983518 ) ) ) );
    struct Color_123  evergreen3962 = ( (  rgb127 ) ( (  from_dash_integral150 ( 1386004 ) ) ) );
    struct Array_164  temp166 = ( (  from_dash_listlike167 ) ( ( (struct Array_164) { ._arr = { ( (  hlt168 ) ( ( HighlightType_18_Number ) ,  (  green3960 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_String ) ,  (  camel3952 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_Comment ) ,  (  dark_dash_spruce3961 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_Ident1 ) ,  (  lime_dash_green3958 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_Ident2 ) ,  (  muted_dash_olive3956 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_Ident3 ) ,  (  tea_dash_green3954 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_Ident4 ) ,  (  palm_dash_leaf3957 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_Keyword1 ) ,  (  tea_dash_green3954 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_Keyword2 ) ,  (  chocolate3955 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_Special1 ) ,  (  olive3953 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_Special2 ) ,  (  forest_dash_green3959 ) ) ) , ( (  hlt168 ) ( ( HighlightType_18_Special3 ) ,  (  camel3952 ) ) ) , ( (struct HighlightColors_160) { .f_type = ( HighlightType_18_Invalid ) , .f_fg = (  evergreen3962 ) , .f_bg = ( ( Maybe_161_Just ) ( ( ( Color_123_Color8 ) ( ( Color8_124_Red8 ) ) ) ) ) } ) } } ) ) );
    struct Theme_157  temp162 = ( (struct Theme_157) { .f_default = ( (struct Colors_158) { .f_bg = (  evergreen3962 ) , .f_fg = (  lime_dash_green3958 ) } ) , .f_cursor = ( (struct Colors_158) { .f_bg = (  lime_dash_green3958 ) , .f_fg = (  evergreen3962 ) } ) , .f_selection = ( (struct Colors_158) { .f_bg = (  forest_dash_green3959 ) , .f_fg = (  evergreen3962 ) } ) , .f_line_dash_num = ( (struct Colors_158) { .f_bg = (  evergreen3962 ) , .f_fg = (  forest_dash_green3959 ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_158) { .f_bg = (  evergreen3962 ) , .f_fg = (  tea_dash_green3954 ) } ) , .f_overlay = ( (struct Colors_158) { .f_bg = (  dark_dash_spruce3961 ) , .f_fg = (  lime_dash_green3958 ) } ) , .f_highlights = ( (  as_dash_slice163 ) ( ( &temp166 ) ) ) } );
    struct Theme_157 *  goblin_dash_ultra3963 = ( &temp162 );
    struct Theme_157  temp169 = ( (struct Theme_157) { .f_default = ( (struct Colors_158) { .f_bg = ( ( Color_123_Color8 ) ( ( Color8_124_Black8 ) ) ) , .f_fg = ( ( Color_123_Color8 ) ( ( Color8_124_White8 ) ) ) } ) , .f_cursor = ( (struct Colors_158) { .f_bg = ( ( Color_123_Color8 ) ( ( Color8_124_White8 ) ) ) , .f_fg = ( ( Color_123_Color8 ) ( ( Color8_124_Black8 ) ) ) } ) , .f_selection = ( (struct Colors_158) { .f_bg = ( ( Color_123_Color16 ) ( ( Color16_125_BrightWhite16 ) ) ) , .f_fg = ( ( Color_123_Color16 ) ( ( Color16_125_Black16 ) ) ) } ) , .f_line_dash_num = ( (struct Colors_158) { .f_bg = ( ( Color_123_Color8 ) ( ( Color8_124_Black8 ) ) ) , .f_fg = ( ( Color_123_Color8 ) ( ( Color8_124_White8 ) ) ) } ) , .f_line_dash_num_dash_hl = ( (struct Colors_158) { .f_bg = ( ( Color_123_Color8 ) ( ( Color8_124_White8 ) ) ) , .f_fg = ( ( Color_123_Color8 ) ( ( Color8_124_Black8 ) ) ) } ) , .f_overlay = ( (struct Colors_158) { .f_bg = ( ( Color_123_Color8 ) ( ( Color8_124_White8 ) ) ) , .f_fg = ( ( Color_123_Color8 ) ( ( Color8_124_Black8 ) ) ) } ) , .f_highlights = ( (  empty170 ) ( ) ) } );
    struct Theme_157 *  dark_dash_theme3964 = ( &temp169 );
    struct Theme_157 *  default3965 = (  goblin_dash_ultra3963 );
    struct Array_179  temp181 = ( (  from_dash_listlike182 ) ( ( (struct Array_179) { ._arr = { ( ( Tuple2_177_Tuple2 ) ( ( (  from_dash_string183 ) ( ( "default" ) ,  ( 7 ) ) ) ,  (  default3965 ) ) ) , ( ( Tuple2_177_Tuple2 ) ( ( (  from_dash_string183 ) ( ( "goblin-ultra" ) ,  ( 12 ) ) ) ,  (  goblin_dash_ultra3963 ) ) ) , ( ( Tuple2_177_Tuple2 ) ( ( (  from_dash_string183 ) ( ( "dark-mono" ) ,  ( 9 ) ) ) ,  (  dark_dash_theme3964 ) ) ) } } ) ) );
    struct Slice_176  all_dash_themes3966 = ( (  as_dash_slice178 ) ( ( &temp181 ) ) );
    struct env184 envinst184 = {
        .all_dash_themes3966 =  all_dash_themes3966 ,
    };
    struct env185 envinst185 = {
        .envinst121 = envinst121 ,
    };
    struct env188 envinst188 = {
        .envinst112 = envinst112 ,
    };
    struct env191 envinst191 = {
        .envinst112 = envinst112 ,
    };
    struct env193 envinst193 = {
        .envinst106 = envinst106 ,
    };
    struct env195 envinst195 = {
        .envinst108 = envinst108 ,
    };
    struct env197 envinst197 = {
        .envinst112 = envinst112 ,
    };
    struct env199 envinst199 = {
        .envinst112 = envinst112 ,
    };
    struct env201 envinst201 = {
        .envinst117 = envinst117 ,
        .envinst199 = envinst199 ,
    };
    struct env207 envinst207 = {
        .envinst117 = envinst117 ,
        .envinst112 = envinst112 ,
    };
    struct env210 envinst210 = {
        .envinst199 = envinst199 ,
    };
    struct env212 envinst212 = {
        .envinst117 = envinst117 ,
        .envinst188 = envinst188 ,
        .envinst197 = envinst197 ,
    };
    struct env217 envinst217 = {
        .envinst110 = envinst110 ,
    };
    struct env219 envinst219 = {
        .envinst69 = envinst69 ,
    };
    struct env221 envinst221 = {
        .envinst74 = envinst74 ,
    };
    struct env223 envinst223 = {
        .envinst184 = envinst184 ,
    };
    struct env226 envinst226 = {
        .envinst221 = envinst221 ,
    };
    struct env231 envinst231 = {
        .envinst210 = envinst210 ,
        .envinst219 = envinst219 ,
        .envinst212 = envinst212 ,
        .envinst188 = envinst188 ,
        .envinst207 = envinst207 ,
        .envinst193 = envinst193 ,
        .envinst195 = envinst195 ,
        .envinst201 = envinst201 ,
        .envinst197 = envinst197 ,
        .envinst217 = envinst217 ,
    };
    struct env242 envinst242 = {
        .envinst226 = envinst226 ,
        .envinst210 = envinst210 ,
        .envinst188 = envinst188 ,
        .envinst60 = envinst60 ,
        .envinst67 = envinst67 ,
        .envinst223 = envinst223 ,
        .envinst191 = envinst191 ,
        .envinst231 = envinst231 ,
    };
    struct env252 envinst252 = {
        .envinst185 = envinst185 ,
    };
    enum CAllocator_10  al4508 = ( (  idc258 ) ( ) );
    struct envunion261  temp260 = ( (struct envunion261){ .fun = (  struct TextBuf_97  (*) (  struct env87*  ,    enum CAllocator_10  ,    struct Pos_29  ) )mk262 , .env =  envinst87 } );
    struct TextBuf_97  temp259 = ( temp260.fun ( &temp260.env ,  (  al4508 ) ,  ( (  mk397 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ) );
    struct TextBuf_97 *  tb4509 = ( &temp259 );
    struct Slice_398  args4512 = ( (  get399 ) ( ) );
    if ( (  cmp283 ( ( (  args4512 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4513 = (  elem_dash_get404 ( (  args4512 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion412  temp411 = ( (struct envunion412){ .fun = (  enum Unit_8  (*) (  struct env93*  ,    struct TextBuf_97 *  ,    struct Pos_29  ,    struct Pos_29  ,    struct StrView_30  ) )change_dash_no_dash_action413 , .env =  envinst93 } );
        ( temp411.fun ( &temp411.env ,  (  tb4509 ) ,  ( (  mk397 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  mk397 ) ( (  from_dash_integral56 ( 0 ) ) ,  (  from_dash_integral56 ( 0 ) ) ) ) ,  ( (  read_dash_contents604 ) ( (  fname4513 ) ,  (  al4508 ) ) ) ) );
    }
    struct Editor_228  temp629 = ( (struct Editor_228) { .f_running = ( true ) , .f_al = (  al4508 ) , .f_pane = ( (  mk630 ) ( (  al4508 ) ,  (  tb4509 ) ) ) , .f_clipboard = ( (struct Maybe_229) { .tag = Maybe_229_None_t } ) , .f_search_dash_term = ( (struct Maybe_229) { .tag = Maybe_229_None_t } ) , .f_mode = ( (struct EditorMode_230) { .tag = EditorMode_230_Normal_t } ) , .f_msg = ( (struct Maybe_229) { .tag = Maybe_229_None_t } ) , .f_theme = (  default3965 ) , .f_og_dash_theme = (  default3965 ) } );
    struct Editor_228 *  ed4514 = ( &temp629 );
    struct envunion633  temp632 = ( (struct envunion633){ .fun = (  struct Tui_81  (*) (  struct env77*  ) )mk634 , .env =  envinst77 } );
    struct Tui_81  temp631 = ( temp632.fun ( &temp632.env ) );
    struct Tui_81 *  tui4515 = ( &temp631 );
    struct Screen_254  temp761 = ( (  mk_dash_screen762 ) ( (  tui4515 ) ,  (  al4508 ) ) );
    struct Screen_254 *  screen4516 = ( &temp761 );
    uint32_t  last_dash_redraw_dash_changes4517 = (  from_dash_integral150 ( 0 ) );
    while ( ( ( * (  ed4514 ) ) .f_running ) ) {
        struct env806 envinst806 = {
            .tui4515 =  tui4515 ,
            .envinst79 = envinst79 ,
        };
        struct FunIter_805  temp804 =  into_dash_iter813 ( ( (  from_dash_function814 ) ( ( (struct envunion812){ .fun = (  struct Maybe_808  (*) (  struct env806*  ) )lam815 , .env =  envinst806 } ) ) ) );
        while (true) {
            struct Maybe_808  __cond1014 =  next1015 (&temp804);
            if (  __cond1014 .tag == 0 ) {
                break;
            }
            struct InputEvent_809  ev4519 =  __cond1014 .stuff .Maybe_808_Just_s .field0;
            struct InputEvent_809  dref4520 = (  ev4519 );
            if ( dref4520.tag == InputEvent_809_Key_t ) {
                ( (  reset_dash_msg1017 ) ( (  ed4514 ) ) );
                struct envunion1025  temp1024 = ( (struct envunion1025){ .fun = (  enum Unit_8  (*) (  struct env242*  ,    struct Editor_228 *  ,    struct Key_251  ) )handle_dash_key1026 , .env =  envinst242 } );
                ( temp1024.fun ( &temp1024.env ,  (  ed4514 ) ,  ( dref4520 .stuff .InputEvent_809_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1750  temp1749 = ( (struct envunion1750){ .fun = (  bool  (*) (  struct env85*  ,    struct Screen_254 *  ) )resize_dash_screen_dash_if_dash_needed1751 , .env =  envinst85 } );
        ( temp1749.fun ( &temp1749.env ,  (  screen4516 ) ) );
        if ( ( (  should_dash_redraw1753 ) ( (  tui4515 ) ) ) ) {
            (*  screen4516 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1754 ) ( (  screen4516 ) ) );
            ( (  set_dash_screen_dash_fg1763 ) ( (  screen4516 ) ,  ( ( ( * ( ( * (  ed4514 ) ) .f_theme ) ) .f_default ) .f_fg ) ) );
            ( (  set_dash_screen_dash_bg1764 ) ( (  screen4516 ) ,  ( ( ( * ( ( * (  ed4514 ) ) .f_theme ) ) .f_default ) .f_bg ) ) );
            ( (  fill_dash_default1765 ) ( (  screen4516 ) ) );
            struct envunion1778  temp1777 = ( (struct envunion1778){ .fun = (  enum Unit_8  (*) (  struct env252*  ,    struct Screen_254 *  ,    struct Editor_228 *  ) )render_dash_editor1779 , .env =  envinst252 } );
            ( temp1777.fun ( &temp1777.env ,  (  screen4516 ) ,  (  ed4514 ) ) );
            last_dash_redraw_dash_changes4517 = ( (  render_dash_screen2125 ) ( (  screen4516 ) ) );
        }
        ( (  sync2272 ) ( (  tui4515 ) ) );
    }
    ( (  free_dash_screen2281 ) ( (  screen4516 ) ) );
    ( (  deinit2284 ) ( (  tui4515 ) ) );
}
